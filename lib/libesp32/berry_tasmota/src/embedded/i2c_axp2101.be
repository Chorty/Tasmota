#-EMBEDDED-------------------------------------------------------------
 - Generic driver for AXP2101 - solidified
 -------------------------------------------------------------#
class I2C_Driver_Alt end    # for solidification
#@ solidify:AXP2101
class AXP2101 : I2C_Driver_Alt
  def init()
    super(self, I2C_Driver_Alt).init("AXP2101", 0x34)
  end
## ***SET ITEMS***

  # Gets ChipID
  # wire2.read(0x34,0x03,1)

  # var wire
  # wire = tasmota.wire_scan(0x34)
  # v = wire.read_bytes(0x34,0x03,1)
  # print(v)
  def get_chip_id()
    return self.read8(0x03)
  end

  def is_vbus_in()
    return (self.get_register_bit(0x01, 3) == 0) & self.is_vbus_good()
  end
  # Get the remaining battery power
    # std::int8_t AXP2101_Class::getBatteryLevel(void)
  # {
  #   std::int8_t res = readRegister8(0xA4);
  #   return res;
  # }
#   /// Get the remaining battery power.
#   /// @return 0-100 level
#   std::int8_t getBatteryLevel(void);
  # **WORKS IN CONSOLE**
  # d = I2C_Driver_Alt("AXP",0x34)
  # print(d.read8(0xA4))

  def get_battery_level()
    return self.read8(0xA4)
  end

  # int AXP2101_Class::getChargeStatus(void)
  # {
  #   uint32_t val = (readRegister8(0x01) >> 5) & 0b11;
  #   // 0b01:charge / 0b10:dischage / 0b00:stanby
  #   return (val == 1) ? 1 : ((val == 2) ? -1 : 0);
  # }
  def get_charge_status()
    var val = ((self.read8(0x01) >> 5) & 3)
    # 0b01:charge / 0b10:discharge / 0b00:standby
    if val == 1 return "Charging" end
    if val == -1 return "Discharge" end
    if val == 0 return "Standby" end
    return val
    # return 1 if val == 1 else (-1 if val == 2 else 0)
  end
  
  # xpowers_chg_status_t getChargerStatus(void)
  # {
  #     int val = readRegister(0x01);
  #     if (val == -1)return 0x05;
  #     val &= 0x07;
  #     return (xpowers_chg_status_t)val;
  # }

  # WORKS But returns 4, 3, 5
  def get_charger_status2()
    var val = self.read8(0x01)
    if val == -1 return 0x05 end
    val &= 0x07
    return val
  end
  # def get_charger_status()
  #   val = self.read8(0x01)
  #   return 0x05 if val == -1
  #   val &= 0x07
  #   return val
  # end



  # bool isDischarge(void)
  # {
  #     return (readRegister(0x01) >> 5) == 0x02;
  # }


  def is_discharge()
    return ((self.read8(0x01) >> 5) == 0x02)
  end
# bool isDischarge(void)
# {
#     return (readRegister(0x01) >> 5) == 0x02;
# }


# bool isStandby(void)
# {
#     return (readRegister(0x01) >> 5) == 0x00;
# }
# ****WORKS*****
  # bool isStandby(void)
  # {
  #     return (readRegister(0x01) >> 5) == 0x00;
  # }
  def is_standby()
    return ((self.read8(0x01) >> 5) == 0x00)
  end



# Get whether the battery is currently charging or not.
# /// Get whether the battery is currently charging or not.
# bool isCharging(void);

# bool AXP2101_Class::isCharging(void)
# {
#   return (readRegister8(0x01) & 0b01100000) == 0b00100000;
# }
def is_charging()
  # d = I2C_Driver_Alt("AXP",0x34)
  # print((d.read8(0x01) & 0x60) == 0x20)
  return self.read8(0x01) & 0x60 == 0x20
  # return (self.read8(0x01) & 0b01100000) == 0b00100000
  # return (self.read8(0x01) & 0x60) == 0x20

end

def is_charging2()
  return ((self.read8(0x01) >> 5) == 0x01)
end



def is_vbus()
    # d = I2C_Driver_Alt("AXP",0x34)
  # print(d.read8(0x01) & 0x20)
  return self.read8(0x01) & 0x20
end




# bool AXP2101_Class::getBatState(void)
# { // Battery present state
#   return readRegister8(0x00) & 0x04;
# }
# ****WORKS*****
def get_bat_state()
  # d = I2C_Driver_Alt("AXP",0x34)
  # print((d.read8(0x01) >> 5) == 0x00)
  # return self.read8(0x00) 0x04
  return (self.read8(0x00) & 0x04)
end

# std::uint8_t AXP2101_Class::getPekPress(void)
# {
#   std::uint8_t val = readRegister8(0x49) & 0x0C;
#   if (val) { writeRegister8(0x49, val); }
#   return val >> 2;
# }
# readRegister8(0x49) & 0x0C
def get_pek_press()
  # d = I2C_Driver_Alt("AXP",0x34)
  # print(d.(readRegister8(0x49) & 0x0C)
  return (self.read8(0x49) & 0x0C)
end
def get_batt_voltage()                                         
  return self.read_register_h5l8(0x34, 0x35)
end
def get_temperature()
  var raw = self.read_register_h6l8(0x3C, 0x3D)
  var tempctof = (raw *9/5) + 32
                                                                                                                                                                                      
end
              
def get_ts_temperature()
  return self.read_register_h6l8(0x36, 0x37)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               
end
                    
def get_vbus_voltage()                               
  return self.read_register_h6l8(0x38, 0x39)
end

def get_system_voltage()
  return self.read_register_h6l8(0x3A, 0x3B)
end
#   # // Low Volt Level 1, when APS Volt Output < 3.4496 V
#   # // Low Volt Level 2, when APS Volt Output < 3.3992 V, then this flag is SET (0x01)
#   # // Flag will reset once battery volt is charged above Low Volt Level 1
#   # // Note: now AXP192 have the Shutdown Voltage of 3.0V (B100) Def in REG 31H
#   def get_warning_level()
#     return self.read12(0x47) & 1
#   end

#   #- display sensor value in the web UI -#
#   def web_sensor()
#     if !self.wire return nil end  #- exit if not initialized -#
#     var msg = format(
#              "{s}VBus Voltage{m}%.3f V{e}"..
#              "{s}VBus Current{m}%.1f mA{e}"..
#              "{s}Batt Voltage{m}%.3f V{e}"..
#              "{s}Batt Current{m}%.1f mA{e}"..
#              #"{s}Batt Power{m}%.3f{e}"..
#              "{s}Temp AXP{m}%.1f &deg;C{e}",
#              self.get_vbus_voltage(), self.get_vbus_voltage(),
#              self.get_bat_voltage(), self.get_bat_current(),
#              #self.get_bat_power(),
#              self.get_temp()
#             )
#     tasmota.web_send_decimal(msg)
#   end

#   #- add sensor value to teleperiod -#
#   def json_append()
#     if !self.wire return nil end  #- exit if not initialized -#
#     # var ax = int(self.accel[0] * 1000)
#     # var ay = int(self.accel[1] * 1000)
#     # var az = int(self.accel[2] * 1000)
#     # var msg = format(",\"MPU6886\":{\"AX\":%i,\"AY\":%i,\"AZ\":%i,\"GX\":%i,\"GY\":%i,\"GZ\":%i}",
#     #           ax, ay, az, self.gyro[0], self.gyro[1], self.gyro[2])
#     # tasmota.response_append(msg)
#   end
end
