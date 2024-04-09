#-------------------------------------------------------------
 - IMPORTANT
 - THIS CLASS IS ALREADY BAKED IN TASMOTA
 -
 - It is here for debugging and documentation purpose only
 -------------------------------------------------------------#

#-------------------------------------------------------------
 - I2C_Driver_Alt class to simplify development of I2C drivers
 -
 - I2C_Driver_Alt(name, addr [, i2c_index]) -> nil
 -   name: name of I2C device for logging, or function to detect the model
 -   addr: I2C address of device, will probe all I2C buses for it
 -   i2c_index: (optional) check is the device is not disabled
 -------------------------------------------------------------#
 
#@ solidify:I2C_Driver_Alt
class I2C_Driver_Alt
  var wire          #- wire object to reach the device, if nil then the module is not initialized -#
  var addr          #- I2C address of the device -#
  var name          #- model namme of the device, cannot be nil -#

  #- Init and look for device
   - Input:
   -   name_or_detect : name of the device (if string)
                        or function to detect the precise model(if function)
                            the function is passed a single argument `self`
                            and must return a string, or `nil` if the device is invalid
   -   addr : I2C address of device (int 0..255)
   -   i2c_index : Tasmota I2C index, see `I2CDEVICES.md` (int)
   --#
  def init(name_or_detect, addr, i2c_index)
    #- check if the i2c index is disabled by Tasmota configuration -#
    #if i2c_index != nil && !tasmota.i2c_enabled(i2c_index) return end

    self.addr = addr                            #- address for AXP192 -#
    self.wire = tasmota.wire_scan(self.addr)    #- get the right I2C bus -#

    if self.wire
      #- find name of device, can be a string or a method -#
      if type(name_or_detect) == 'function'
        self.name = name_or_detect(self)
      else
        self.name = name_or_detect
      end
      #- if name is invalid, it means we can't detect device, abort -#
      if self.name == nil  self.wire = nil end

      if self.wire
        print("I2C:", self.name, "detected on bus", self.wire.bus)
      end
    end
  end
#- Set Register Bit -#

  #- write register with 8 bits value -#
  def write8(reg, val)
    return self.wire.write(self.addr, reg, val, 1)
  end

  # Set or clear a specific bit in a register
  # write_bit(reg:int, bit:int, state:bool) -> nil
  #   reg: I2C register number (0..255)
  #   bit: bit of I2C register to change (0..7)
  #   state: boolean value to write to specified bit
  def write_bit(reg, bit, state)
    if bit < 0 || bit > 7 return end
    var mark = 1 << bit
    if state    self.write8(reg, self.read8(reg) | mark)
    else        self.write8(reg, self.read8(reg) & (0xFF - mark))
    end
  end
  def get_register_bit(registers, bit)
    var val = self.read8(registers)
    if val == -1
      return false
    end
    return val & (1 << bit)
  end
  def set_register_bit(registers, bit)
    var val = self.read8(registers)
    if val == -1
      return false
    end
    return self.write8(registers, val | (1 << bit)) == 0
  end

    # def get_register_bit2(reg, bit)
  #   var val = self.read8(reg)
  #   if val == -1
  #     return false
  #   end
  #   return val & (1 << bit)
  # end

  def get_register_bit2(reg, bit)
    var val = self.read8(reg)
    return val & (1 << bit)
  end
  # read 8 bits
  def read8(reg)
    return self.wire.read(self.addr, reg, 1)
  end
  # read 12 bits
  def read12(reg)
    var buf = self.wire.read_bytes(self.addr, reg, 2)
    return (buf[0] << 4) + buf[1]
  end
  
  # read 13 bits
  def read13(reg)
    var buf = self.wire.read_bytes(self.addr, reg, 2)
    return (buf[0] << 5) + buf[1]
  end
  # read 14 bits
  def read14(reg)
    var buf = self.wire.read_bytes(self.addr, reg, 2)
    return (buf[0] << 6) + buf[1]
  end
  # read 16 bits
  def read16(reg)
    var buf = self.wire.read_bytes(self.addr, reg, 2)
    return (buf[0] << 8) + buf[1]
  end
  # read 24 bits
  def read24(reg)
    var buf = self.wire.read_bytes(self.addr, reg, 3)
    return (buf[0] << 16) + (buf[1] << 8) + buf[2]
  end
  # read 32 bits
  def read32(reg)
    var buf = self.wire.read_bytes(self.addr, reg, 4)
    return (buf[0] << 24) + (buf[1] << 16) + (buf[2] << 8) + buf[3]
  end

  def readH5L8(reg)
    var buf = self.wire.read_bytes(self.addr, reg, 4)
    return (buf[0] << 24) + (buf[1] << 16) + (buf[2] << 8) + buf[3]
  end
  
  # uint16_t inline readRegisterH8L5(uint8_t highReg, uint8_t lowReg)
  # {
  #     int h8 = readRegister(highReg);
  #     int l5 = readRegister(lowReg);
  #     if (h8 == -1 || l5 == -1)return 0;
  #     return (h8 << 5) | (l5 & 0x1F);
  # }

  def read_register_h8l5(high_reg, low_reg)
    var h8 = self.read8(high_reg)
    var l5 = self.read8(low_reg)
    if h8 == -1 || l5 == -1 return 0 end
    return (h8 << 5) | (l5 & 0x1F)
  end

  # uint16_t inline readRegisterH5L8(uint8_t highReg, uint8_t lowReg)
  # {
  #     int h5 = readRegister(highReg);
  #     int l8 = readRegister(lowReg);
  #     if (h5 == -1 || l8 == -1)return 0;
  #     return ((h5 & 0x1F) << 8) | l8;
  # }

  def read_register_h5l8(high_reg, low_reg)
    var h5 = self.read8(high_reg)
    var l8 = self.read8(low_reg)
    if h5 == -1 || l8 == -1 return 0 end
    return ((h5 & 0x1F) << 8) | l8
  end


  # uint16_t inline readRegisterH6L8(uint8_t highReg, uint8_t lowReg)
  # {
  #     int h6 = readRegister(highReg);
  #     int l8 = readRegister(lowReg);
  #     if (h6 == -1 || l8 == -1)return 0;
  #     return ((h6 & 0x3F) << 8) | l8;
  # }  
  def read_register_h6l8(high_reg, low_reg)
    var h6 = self.read8(high_reg)
    var l8 = self.read8(low_reg)
    if h6 == -1 || l8 == -1 return 0 end
    return ((h6 & 0x3F) << 8 | l8)
  end

end

#- Example

d = I2C_Driver_Alt("MPU", 0x68, 58)

-#