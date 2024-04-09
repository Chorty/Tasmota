#-------------------------------------------------------------
 - Specialized driver for AXP2101 of M5Stack CoreS3
 - source is from: https://github.com/Xinyuan-LilyGO/TTGO_TWatch_Library/blob/master/src/TTGO.cpp
 -------------------------------------------------------------#
class AXP2101_M5Stack_CoreS3 : AXP2101
  def init()
    super(self).init()
    if self.wire
      # Change the shutdown time to 4 seconds
      # power->setShutdownTime(AXP_POWER_OFF_TIME_4S);
      # self.set_shutdown_time(4)

      # # Turn off the charging led
      # # power->setChgLEDMode(AXP20X_LED_OFF);
      self.get_chip_id(0)

      # # // Turn off external enable
      # # power->setPowerOutPut(AXP2101_EXTEN, false);
      # self.set_exten(false)

      # # AXP2101 allows maximum charging current of 1800mA, minimum 300mA
      # # power->setChargeControlCur(300);
      # self.set_chg_current_ma(300)

      # # power->setLDO2Voltage(3300);
      # self.set_ldo_voltage(2, 3300)

      # # // New features of Twatch V3
      # # power->limitingOff();
      # self.set_limiting_off()

      # # //Audio power domain is AXP2101 LDO4
      # # power->setPowerOutPut(AXP2101_LDO4, false);
      # self.set_ldo_enable(4, false)
      # # power->setLDO4Voltage(AXP2101_LDO4_3300MV);
      # self.set_ldo_voltage(4, 3300)
      # # power->setPowerOutPut(AXP2101_LDO4, true);
      # self.set_ldo_enable(4, true)

      # # // No use
      # # power->setPowerOutPut(AXP2101_LDO3, false);
      # self.set_ldo_enable(3, false)

      tasmota.add_driver(self)
    end
  end
  
  # enable power to audio chip
  def audio_enable(en)
    self.set_ldo_enable(4, en)
  end

  # set power to backlight, dimming is controlled via PWM on GPIO15
  def backlight_enable(en)
    self.set_ldo_enable(2, en)
  end

  # Dimmer in percentage
  def set_displaydimmer(x)
    self.backlight_enable(x > 0)
  end

  # respond to display events
  def display(cmd, idx, payload, raw)
    if cmd == "dim" || cmd == "power"
      self.set_displaydimmer(idx)
    end
  end
end

return AXP2101_M5Stack_CoreS3()
