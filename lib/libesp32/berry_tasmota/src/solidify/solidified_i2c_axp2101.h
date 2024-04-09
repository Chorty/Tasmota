/* Solidification of i2c_axp2101.h */
/********************************************************************\
* Generated code, don't edit                                         *
\********************************************************************/
#include "be_constobj.h"

extern const bclass be_class_AXP2101;

/********************************************************************
** Solidified function: get_system_voltage
********************************************************************/
be_local_closure(AXP2101_get_system_voltage,   /* name */
  be_nested_proto(
    5,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 1]) {     /* constants */
    /* K0   */  be_nested_str(read_register_h6l8),
    }),
    &be_const_str_get_system_voltage,
    &be_const_str_solidified,
    ( &(const binstruction[ 5]) {  /* code */
      0x8C040100,  //  0000  GETMET	R1	R0	K0
      0x540E0039,  //  0001  LDINT	R3	58
      0x5412003A,  //  0002  LDINT	R4	59
      0x7C040600,  //  0003  CALL	R1	3
      0x80040200,  //  0004  RET	1	R1
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: is_charging
********************************************************************/
be_local_closure(AXP2101_is_charging,   /* name */
  be_nested_proto(
    4,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 2]) {     /* constants */
    /* K0   */  be_nested_str(read8),
    /* K1   */  be_const_int(1),
    }),
    &be_const_str_is_charging,
    &be_const_str_solidified,
    ( &(const binstruction[ 8]) {  /* code */
      0x8C040100,  //  0000  GETMET	R1	R0	K0
      0x580C0001,  //  0001  LDCONST	R3	K1
      0x7C040400,  //  0002  CALL	R1	2
      0x540A005F,  //  0003  LDINT	R2	96
      0x2C040202,  //  0004  AND	R1	R1	R2
      0x540A001F,  //  0005  LDINT	R2	32
      0x1C040202,  //  0006  EQ	R1	R1	R2
      0x80040200,  //  0007  RET	1	R1
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: get_battery_level
********************************************************************/
be_local_closure(AXP2101_get_battery_level,   /* name */
  be_nested_proto(
    4,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 2]) {     /* constants */
    /* K0   */  be_nested_str(wire),
    /* K1   */  be_nested_str(read8),
    }),
    &be_const_str_get_battery_level,
    &be_const_str_solidified,
    ( &(const binstruction[ 5]) {  /* code */
      0x88040100,  //  0000  GETMBR	R1	R0	K0
      0x8C040301,  //  0001  GETMET	R1	R1	K1
      0x540E00A3,  //  0002  LDINT	R3	164
      0x7C040400,  //  0003  CALL	R1	2
      0x80040200,  //  0004  RET	1	R1
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: get_vbus_voltage
********************************************************************/
be_local_closure(AXP2101_get_vbus_voltage,   /* name */
  be_nested_proto(
    5,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 1]) {     /* constants */
    /* K0   */  be_nested_str(read_register_h6l8),
    }),
    &be_const_str_get_vbus_voltage,
    &be_const_str_solidified,
    ( &(const binstruction[ 5]) {  /* code */
      0x8C040100,  //  0000  GETMET	R1	R0	K0
      0x540E0037,  //  0001  LDINT	R3	56
      0x54120038,  //  0002  LDINT	R4	57
      0x7C040600,  //  0003  CALL	R1	3
      0x80040200,  //  0004  RET	1	R1
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: is_discharge
********************************************************************/
be_local_closure(AXP2101_is_discharge,   /* name */
  be_nested_proto(
    4,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 3]) {     /* constants */
    /* K0   */  be_nested_str(read8),
    /* K1   */  be_const_int(1),
    /* K2   */  be_const_int(2),
    }),
    &be_const_str_is_discharge,
    &be_const_str_solidified,
    ( &(const binstruction[ 7]) {  /* code */
      0x8C040100,  //  0000  GETMET	R1	R0	K0
      0x580C0001,  //  0001  LDCONST	R3	K1
      0x7C040400,  //  0002  CALL	R1	2
      0x540A0004,  //  0003  LDINT	R2	5
      0x3C040202,  //  0004  SHR	R1	R1	R2
      0x1C040302,  //  0005  EQ	R1	R1	K2
      0x80040200,  //  0006  RET	1	R1
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: get_charge_status
********************************************************************/
be_local_closure(AXP2101_get_charge_status,   /* name */
  be_nested_proto(
    4,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 5]) {     /* constants */
    /* K0   */  be_nested_str(read8),
    /* K1   */  be_const_int(1),
    /* K2   */  be_const_int(3),
    /* K3   */  be_const_int(2),
    /* K4   */  be_const_int(0),
    }),
    &be_const_str_get_charge_status,
    &be_const_str_solidified,
    ( &(const binstruction[17]) {  /* code */
      0x8C040100,  //  0000  GETMET	R1	R0	K0
      0x580C0001,  //  0001  LDCONST	R3	K1
      0x7C040400,  //  0002  CALL	R1	2
      0x540A0004,  //  0003  LDINT	R2	5
      0x3C040202,  //  0004  SHR	R1	R1	R2
      0x2C040302,  //  0005  AND	R1	R1	K2
      0x1C080301,  //  0006  EQ	R2	R1	K1
      0x780A0000,  //  0007  JMPF	R2	#0009
      0x80060200,  //  0008  RET	1	K1
      0x1C080303,  //  0009  EQ	R2	R1	K3
      0x780A0001,  //  000A  JMPF	R2	#000D
      0x5409FFFE,  //  000B  LDINT	R2	-1
      0x80040400,  //  000C  RET	1	R2
      0x1C080304,  //  000D  EQ	R2	R1	K4
      0x780A0000,  //  000E  JMPF	R2	#0010
      0x80060800,  //  000F  RET	1	K4
      0x80040200,  //  0010  RET	1	R1
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: is_vbus
********************************************************************/
be_local_closure(AXP2101_is_vbus,   /* name */
  be_nested_proto(
    4,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 2]) {     /* constants */
    /* K0   */  be_nested_str(read8),
    /* K1   */  be_const_int(1),
    }),
    &be_const_str_is_vbus,
    &be_const_str_solidified,
    ( &(const binstruction[ 6]) {  /* code */
      0x8C040100,  //  0000  GETMET	R1	R0	K0
      0x580C0001,  //  0001  LDCONST	R3	K1
      0x7C040400,  //  0002  CALL	R1	2
      0x540A001F,  //  0003  LDINT	R2	32
      0x2C040202,  //  0004  AND	R1	R1	R2
      0x80040200,  //  0005  RET	1	R1
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: get_charger_status2
********************************************************************/
be_local_closure(AXP2101_get_charger_status2,   /* name */
  be_nested_proto(
    4,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 2]) {     /* constants */
    /* K0   */  be_nested_str(read8),
    /* K1   */  be_const_int(1),
    }),
    &be_const_str_get_charger_status2,
    &be_const_str_solidified,
    ( &(const binstruction[11]) {  /* code */
      0x8C040100,  //  0000  GETMET	R1	R0	K0
      0x580C0001,  //  0001  LDCONST	R3	K1
      0x7C040400,  //  0002  CALL	R1	2
      0x5409FFFE,  //  0003  LDINT	R2	-1
      0x1C080202,  //  0004  EQ	R2	R1	R2
      0x780A0001,  //  0005  JMPF	R2	#0008
      0x540A0004,  //  0006  LDINT	R2	5
      0x80040400,  //  0007  RET	1	R2
      0x540A0006,  //  0008  LDINT	R2	7
      0x2C040202,  //  0009  AND	R1	R1	R2
      0x80040200,  //  000A  RET	1	R1
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: is_vbus_in
********************************************************************/
be_local_closure(AXP2101_is_vbus_in,   /* name */
  be_nested_proto(
    5,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 5]) {     /* constants */
    /* K0   */  be_nested_str(get_register_bit),
    /* K1   */  be_const_int(1),
    /* K2   */  be_const_int(3),
    /* K3   */  be_const_int(0),
    /* K4   */  be_nested_str(is_vbus_good),
    }),
    &be_const_str_is_vbus_in,
    &be_const_str_solidified,
    ( &(const binstruction[ 9]) {  /* code */
      0x8C040100,  //  0000  GETMET	R1	R0	K0
      0x580C0001,  //  0001  LDCONST	R3	K1
      0x58100002,  //  0002  LDCONST	R4	K2
      0x7C040600,  //  0003  CALL	R1	3
      0x1C040303,  //  0004  EQ	R1	R1	K3
      0x8C080104,  //  0005  GETMET	R2	R0	K4
      0x7C080200,  //  0006  CALL	R2	1
      0x2C040202,  //  0007  AND	R1	R1	R2
      0x80040200,  //  0008  RET	1	R1
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: is_charging2
********************************************************************/
be_local_closure(AXP2101_is_charging2,   /* name */
  be_nested_proto(
    4,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 2]) {     /* constants */
    /* K0   */  be_nested_str(read8),
    /* K1   */  be_const_int(1),
    }),
    &be_const_str_is_charging2,
    &be_const_str_solidified,
    ( &(const binstruction[ 7]) {  /* code */
      0x8C040100,  //  0000  GETMET	R1	R0	K0
      0x580C0001,  //  0001  LDCONST	R3	K1
      0x7C040400,  //  0002  CALL	R1	2
      0x540A0004,  //  0003  LDINT	R2	5
      0x3C040202,  //  0004  SHR	R1	R1	R2
      0x1C040301,  //  0005  EQ	R1	R1	K1
      0x80040200,  //  0006  RET	1	R1
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: get_batt_voltage
********************************************************************/
be_local_closure(AXP2101_get_batt_voltage,   /* name */
  be_nested_proto(
    5,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 1]) {     /* constants */
    /* K0   */  be_nested_str(read_register_h5l8),
    }),
    &be_const_str_get_batt_voltage,
    &be_const_str_solidified,
    ( &(const binstruction[ 5]) {  /* code */
      0x8C040100,  //  0000  GETMET	R1	R0	K0
      0x540E0033,  //  0001  LDINT	R3	52
      0x54120034,  //  0002  LDINT	R4	53
      0x7C040600,  //  0003  CALL	R1	3
      0x80040200,  //  0004  RET	1	R1
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: get_temperature
********************************************************************/
be_local_closure(AXP2101_get_temperature,   /* name */
  be_nested_proto(
    5,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 3]) {     /* constants */
    /* K0   */  be_nested_str(read_register_h6l8),
    /* K1   */  be_const_real_hex(0x41B00000),
    /* K2   */  be_const_real_hex(0x41A00000),
    }),
    &be_const_str_get_temperature,
    &be_const_str_solidified,
    ( &(const binstruction[ 9]) {  /* code */
      0x8C040100,  //  0000  GETMET	R1	R0	K0
      0x540E003B,  //  0001  LDINT	R3	60
      0x5412003C,  //  0002  LDINT	R4	61
      0x7C040600,  //  0003  CALL	R1	3
      0x540A1C69,  //  0004  LDINT	R2	7274
      0x04080401,  //  0005  SUB	R2	R2	R1
      0x0C080502,  //  0006  DIV	R2	R2	K2
      0x000A0202,  //  0007  ADD	R2	K1	R2
      0x80040400,  //  0008  RET	1	R2
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: is_standby
********************************************************************/
be_local_closure(AXP2101_is_standby,   /* name */
  be_nested_proto(
    4,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 3]) {     /* constants */
    /* K0   */  be_nested_str(read8),
    /* K1   */  be_const_int(1),
    /* K2   */  be_const_int(0),
    }),
    &be_const_str_is_standby,
    &be_const_str_solidified,
    ( &(const binstruction[ 7]) {  /* code */
      0x8C040100,  //  0000  GETMET	R1	R0	K0
      0x580C0001,  //  0001  LDCONST	R3	K1
      0x7C040400,  //  0002  CALL	R1	2
      0x540A0004,  //  0003  LDINT	R2	5
      0x3C040202,  //  0004  SHR	R1	R1	R2
      0x1C040302,  //  0005  EQ	R1	R1	K2
      0x80040200,  //  0006  RET	1	R1
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: get_chip_id
********************************************************************/
be_local_closure(AXP2101_get_chip_id,   /* name */
  be_nested_proto(
    4,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 2]) {     /* constants */
    /* K0   */  be_nested_str(read8),
    /* K1   */  be_const_int(3),
    }),
    &be_const_str_get_chip_id,
    &be_const_str_solidified,
    ( &(const binstruction[ 4]) {  /* code */
      0x8C040100,  //  0000  GETMET	R1	R0	K0
      0x580C0001,  //  0001  LDCONST	R3	K1
      0x7C040400,  //  0002  CALL	R1	2
      0x80040200,  //  0003  RET	1	R1
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: get_ts_temperature
********************************************************************/
be_local_closure(AXP2101_get_ts_temperature,   /* name */
  be_nested_proto(
    5,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 1]) {     /* constants */
    /* K0   */  be_nested_str(read_register_h6l8),
    }),
    &be_const_str_get_ts_temperature,
    &be_const_str_solidified,
    ( &(const binstruction[ 5]) {  /* code */
      0x8C040100,  //  0000  GETMET	R1	R0	K0
      0x540E0035,  //  0001  LDINT	R3	54
      0x54120036,  //  0002  LDINT	R4	55
      0x7C040600,  //  0003  CALL	R1	3
      0x80040200,  //  0004  RET	1	R1
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: init
********************************************************************/
be_local_closure(AXP2101_init,   /* name */
  be_nested_proto(
    5,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 3]) {     /* constants */
    /* K0   */  be_nested_str(I2C_Driver_Alt),
    /* K1   */  be_nested_str(init),
    /* K2   */  be_nested_str(AXP2101),
    }),
    &be_const_str_init,
    &be_const_str_solidified,
    ( &(const binstruction[ 9]) {  /* code */
      0x60040003,  //  0000  GETGBL	R1	G3
      0x5C080000,  //  0001  MOVE	R2	R0
      0xB80E0000,  //  0002  GETNGBL	R3	K0
      0x7C040400,  //  0003  CALL	R1	2
      0x8C040301,  //  0004  GETMET	R1	R1	K1
      0x580C0002,  //  0005  LDCONST	R3	K2
      0x54120033,  //  0006  LDINT	R4	52
      0x7C040600,  //  0007  CALL	R1	3
      0x80000000,  //  0008  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: get_pek_press
********************************************************************/
be_local_closure(AXP2101_get_pek_press,   /* name */
  be_nested_proto(
    4,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 1]) {     /* constants */
    /* K0   */  be_nested_str(read8),
    }),
    &be_const_str_get_pek_press,
    &be_const_str_solidified,
    ( &(const binstruction[ 6]) {  /* code */
      0x8C040100,  //  0000  GETMET	R1	R0	K0
      0x540E0048,  //  0001  LDINT	R3	73
      0x7C040400,  //  0002  CALL	R1	2
      0x540A000B,  //  0003  LDINT	R2	12
      0x2C040202,  //  0004  AND	R1	R1	R2
      0x80040200,  //  0005  RET	1	R1
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: get_bat_state
********************************************************************/
be_local_closure(AXP2101_get_bat_state,   /* name */
  be_nested_proto(
    4,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 2]) {     /* constants */
    /* K0   */  be_nested_str(read8),
    /* K1   */  be_const_int(0),
    }),
    &be_const_str_get_bat_state,
    &be_const_str_solidified,
    ( &(const binstruction[ 6]) {  /* code */
      0x8C040100,  //  0000  GETMET	R1	R0	K0
      0x580C0001,  //  0001  LDCONST	R3	K1
      0x7C040400,  //  0002  CALL	R1	2
      0x540A0003,  //  0003  LDINT	R2	4
      0x2C040202,  //  0004  AND	R1	R1	R2
      0x80040200,  //  0005  RET	1	R1
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified class: AXP2101
********************************************************************/
extern const bclass be_class_I2C_Driver_Alt;
be_local_class(AXP2101,
    0,
    &be_class_I2C_Driver_Alt,
    be_nested_map(18,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key(get_system_voltage, -1), be_const_closure(AXP2101_get_system_voltage_closure) },
        { be_const_key(is_charging, 9), be_const_closure(AXP2101_is_charging_closure) },
        { be_const_key(get_battery_level, -1), be_const_closure(AXP2101_get_battery_level_closure) },
        { be_const_key(get_vbus_voltage, -1), be_const_closure(AXP2101_get_vbus_voltage_closure) },
        { be_const_key(is_discharge, 12), be_const_closure(AXP2101_is_discharge_closure) },
        { be_const_key(get_bat_state, 13), be_const_closure(AXP2101_get_bat_state_closure) },
        { be_const_key(is_vbus, -1), be_const_closure(AXP2101_is_vbus_closure) },
        { be_const_key(get_charger_status2, -1), be_const_closure(AXP2101_get_charger_status2_closure) },
        { be_const_key(is_vbus_in, -1), be_const_closure(AXP2101_is_vbus_in_closure) },
        { be_const_key(get_charge_status, -1), be_const_closure(AXP2101_get_charge_status_closure) },
        { be_const_key(get_batt_voltage, -1), be_const_closure(AXP2101_get_batt_voltage_closure) },
        { be_const_key(get_ts_temperature, -1), be_const_closure(AXP2101_get_ts_temperature_closure) },
        { be_const_key(get_chip_id, 8), be_const_closure(AXP2101_get_chip_id_closure) },
        { be_const_key(is_standby, -1), be_const_closure(AXP2101_is_standby_closure) },
        { be_const_key(get_temperature, 11), be_const_closure(AXP2101_get_temperature_closure) },
        { be_const_key(init, -1), be_const_closure(AXP2101_init_closure) },
        { be_const_key(get_pek_press, -1), be_const_closure(AXP2101_get_pek_press_closure) },
        { be_const_key(is_charging2, 5), be_const_closure(AXP2101_is_charging2_closure) },
    })),
    (bstring*) &be_const_str_AXP2101
);
/*******************************************************************/

void be_load_AXP2101_class(bvm *vm) {
    be_pushntvclass(vm, &be_class_AXP2101);
    be_setglobal(vm, "AXP2101");
    be_pop(vm, 1);
}
/********************************************************************/
/* End of solidification */
