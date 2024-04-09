/* Solidification of i2c_driver_alt.h */
/********************************************************************\
* Generated code, don't edit                                         *
\********************************************************************/
#include "be_constobj.h"

extern const bclass be_class_I2C_Driver_Alt;

/********************************************************************
** Solidified function: read32
********************************************************************/
be_local_closure(I2C_Driver_Alt_read32,   /* name */
  be_nested_proto(
    7,                          /* nstack */
    2,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 7]) {     /* constants */
    /* K0   */  be_nested_str(wire),
    /* K1   */  be_nested_str(read_bytes),
    /* K2   */  be_nested_str(addr),
    /* K3   */  be_const_int(0),
    /* K4   */  be_const_int(1),
    /* K5   */  be_const_int(2),
    /* K6   */  be_const_int(3),
    }),
    &be_const_str_read32,
    &be_const_str_solidified,
    ( &(const binstruction[20]) {  /* code */
      0x88080100,  //  0000  GETMBR	R2	R0	K0
      0x8C080501,  //  0001  GETMET	R2	R2	K1
      0x88100102,  //  0002  GETMBR	R4	R0	K2
      0x5C140200,  //  0003  MOVE	R5	R1
      0x541A0003,  //  0004  LDINT	R6	4
      0x7C080800,  //  0005  CALL	R2	4
      0x940C0503,  //  0006  GETIDX	R3	R2	K3
      0x54120017,  //  0007  LDINT	R4	24
      0x380C0604,  //  0008  SHL	R3	R3	R4
      0x94100504,  //  0009  GETIDX	R4	R2	K4
      0x5416000F,  //  000A  LDINT	R5	16
      0x38100805,  //  000B  SHL	R4	R4	R5
      0x000C0604,  //  000C  ADD	R3	R3	R4
      0x94100505,  //  000D  GETIDX	R4	R2	K5
      0x54160007,  //  000E  LDINT	R5	8
      0x38100805,  //  000F  SHL	R4	R4	R5
      0x000C0604,  //  0010  ADD	R3	R3	R4
      0x94100506,  //  0011  GETIDX	R4	R2	K6
      0x000C0604,  //  0012  ADD	R3	R3	R4
      0x80040600,  //  0013  RET	1	R3
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: read14
********************************************************************/
be_local_closure(I2C_Driver_Alt_read14,   /* name */
  be_nested_proto(
    7,                          /* nstack */
    2,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 6]) {     /* constants */
    /* K0   */  be_nested_str(wire),
    /* K1   */  be_nested_str(read_bytes),
    /* K2   */  be_nested_str(addr),
    /* K3   */  be_const_int(2),
    /* K4   */  be_const_int(0),
    /* K5   */  be_const_int(1),
    }),
    &be_const_str_read14,
    &be_const_str_solidified,
    ( &(const binstruction[12]) {  /* code */
      0x88080100,  //  0000  GETMBR	R2	R0	K0
      0x8C080501,  //  0001  GETMET	R2	R2	K1
      0x88100102,  //  0002  GETMBR	R4	R0	K2
      0x5C140200,  //  0003  MOVE	R5	R1
      0x58180003,  //  0004  LDCONST	R6	K3
      0x7C080800,  //  0005  CALL	R2	4
      0x940C0504,  //  0006  GETIDX	R3	R2	K4
      0x54120005,  //  0007  LDINT	R4	6
      0x380C0604,  //  0008  SHL	R3	R3	R4
      0x94100505,  //  0009  GETIDX	R4	R2	K5
      0x000C0604,  //  000A  ADD	R3	R3	R4
      0x80040600,  //  000B  RET	1	R3
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: read_register_h8l5
********************************************************************/
be_local_closure(I2C_Driver_Alt_read_register_h8l5,   /* name */
  be_nested_proto(
    7,                          /* nstack */
    3,                          /* argc */
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
    &be_const_str_read_register_h8l5,
    &be_const_str_solidified,
    ( &(const binstruction[19]) {  /* code */
      0x8C0C0100,  //  0000  GETMET	R3	R0	K0
      0x5C140200,  //  0001  MOVE	R5	R1
      0x7C0C0400,  //  0002  CALL	R3	2
      0x8C100100,  //  0003  GETMET	R4	R0	K0
      0x5C180400,  //  0004  MOVE	R6	R2
      0x7C100400,  //  0005  CALL	R4	2
      0x5415FFFE,  //  0006  LDINT	R5	-1
      0x1C140605,  //  0007  EQ	R5	R3	R5
      0x74160002,  //  0008  JMPT	R5	#000C
      0x5415FFFE,  //  0009  LDINT	R5	-1
      0x1C140805,  //  000A  EQ	R5	R4	R5
      0x78160000,  //  000B  JMPF	R5	#000D
      0x80060200,  //  000C  RET	1	K1
      0x54160004,  //  000D  LDINT	R5	5
      0x38140605,  //  000E  SHL	R5	R3	R5
      0x541A001E,  //  000F  LDINT	R6	31
      0x2C180806,  //  0010  AND	R6	R4	R6
      0x30140A06,  //  0011  OR	R5	R5	R6
      0x80040A00,  //  0012  RET	1	R5
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: get_register_bit
********************************************************************/
be_local_closure(I2C_Driver_Alt_get_register_bit,   /* name */
  be_nested_proto(
    6,                          /* nstack */
    3,                          /* argc */
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
    &be_const_str_get_register_bit,
    &be_const_str_solidified,
    ( &(const binstruction[11]) {  /* code */
      0x8C0C0100,  //  0000  GETMET	R3	R0	K0
      0x5C140200,  //  0001  MOVE	R5	R1
      0x7C0C0400,  //  0002  CALL	R3	2
      0x5411FFFE,  //  0003  LDINT	R4	-1
      0x1C100604,  //  0004  EQ	R4	R3	R4
      0x78120001,  //  0005  JMPF	R4	#0008
      0x50100000,  //  0006  LDBOOL	R4	0	0
      0x80040800,  //  0007  RET	1	R4
      0x38120202,  //  0008  SHL	R4	K1	R2
      0x2C100604,  //  0009  AND	R4	R3	R4
      0x80040800,  //  000A  RET	1	R4
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: read_register_h6l8
********************************************************************/
be_local_closure(I2C_Driver_Alt_read_register_h6l8,   /* name */
  be_nested_proto(
    7,                          /* nstack */
    3,                          /* argc */
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
    &be_const_str_read_register_h6l8,
    &be_const_str_solidified,
    ( &(const binstruction[19]) {  /* code */
      0x8C0C0100,  //  0000  GETMET	R3	R0	K0
      0x5C140200,  //  0001  MOVE	R5	R1
      0x7C0C0400,  //  0002  CALL	R3	2
      0x8C100100,  //  0003  GETMET	R4	R0	K0
      0x5C180400,  //  0004  MOVE	R6	R2
      0x7C100400,  //  0005  CALL	R4	2
      0x5415FFFE,  //  0006  LDINT	R5	-1
      0x1C140605,  //  0007  EQ	R5	R3	R5
      0x74160002,  //  0008  JMPT	R5	#000C
      0x5415FFFE,  //  0009  LDINT	R5	-1
      0x1C140805,  //  000A  EQ	R5	R4	R5
      0x78160000,  //  000B  JMPF	R5	#000D
      0x80060200,  //  000C  RET	1	K1
      0x5416003E,  //  000D  LDINT	R5	63
      0x2C140605,  //  000E  AND	R5	R3	R5
      0x541A0007,  //  000F  LDINT	R6	8
      0x38140A06,  //  0010  SHL	R5	R5	R6
      0x30140A04,  //  0011  OR	R5	R5	R4
      0x80040A00,  //  0012  RET	1	R5
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: read_register_h5l8
********************************************************************/
be_local_closure(I2C_Driver_Alt_read_register_h5l8,   /* name */
  be_nested_proto(
    7,                          /* nstack */
    3,                          /* argc */
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
    &be_const_str_read_register_h5l8,
    &be_const_str_solidified,
    ( &(const binstruction[19]) {  /* code */
      0x8C0C0100,  //  0000  GETMET	R3	R0	K0
      0x5C140200,  //  0001  MOVE	R5	R1
      0x7C0C0400,  //  0002  CALL	R3	2
      0x8C100100,  //  0003  GETMET	R4	R0	K0
      0x5C180400,  //  0004  MOVE	R6	R2
      0x7C100400,  //  0005  CALL	R4	2
      0x5415FFFE,  //  0006  LDINT	R5	-1
      0x1C140605,  //  0007  EQ	R5	R3	R5
      0x74160002,  //  0008  JMPT	R5	#000C
      0x5415FFFE,  //  0009  LDINT	R5	-1
      0x1C140805,  //  000A  EQ	R5	R4	R5
      0x78160000,  //  000B  JMPF	R5	#000D
      0x80060200,  //  000C  RET	1	K1
      0x5416001E,  //  000D  LDINT	R5	31
      0x2C140605,  //  000E  AND	R5	R3	R5
      0x541A0007,  //  000F  LDINT	R6	8
      0x38140A06,  //  0010  SHL	R5	R5	R6
      0x30140A04,  //  0011  OR	R5	R5	R4
      0x80040A00,  //  0012  RET	1	R5
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: get_register_bit2
********************************************************************/
be_local_closure(I2C_Driver_Alt_get_register_bit2,   /* name */
  be_nested_proto(
    6,                          /* nstack */
    3,                          /* argc */
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
    &be_const_str_get_register_bit2,
    &be_const_str_solidified,
    ( &(const binstruction[ 6]) {  /* code */
      0x8C0C0100,  //  0000  GETMET	R3	R0	K0
      0x5C140200,  //  0001  MOVE	R5	R1
      0x7C0C0400,  //  0002  CALL	R3	2
      0x38120202,  //  0003  SHL	R4	K1	R2
      0x2C100604,  //  0004  AND	R4	R3	R4
      0x80040800,  //  0005  RET	1	R4
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: read12
********************************************************************/
be_local_closure(I2C_Driver_Alt_read12,   /* name */
  be_nested_proto(
    7,                          /* nstack */
    2,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 6]) {     /* constants */
    /* K0   */  be_nested_str(wire),
    /* K1   */  be_nested_str(read_bytes),
    /* K2   */  be_nested_str(addr),
    /* K3   */  be_const_int(2),
    /* K4   */  be_const_int(0),
    /* K5   */  be_const_int(1),
    }),
    &be_const_str_read12,
    &be_const_str_solidified,
    ( &(const binstruction[12]) {  /* code */
      0x88080100,  //  0000  GETMBR	R2	R0	K0
      0x8C080501,  //  0001  GETMET	R2	R2	K1
      0x88100102,  //  0002  GETMBR	R4	R0	K2
      0x5C140200,  //  0003  MOVE	R5	R1
      0x58180003,  //  0004  LDCONST	R6	K3
      0x7C080800,  //  0005  CALL	R2	4
      0x940C0504,  //  0006  GETIDX	R3	R2	K4
      0x54120003,  //  0007  LDINT	R4	4
      0x380C0604,  //  0008  SHL	R3	R3	R4
      0x94100505,  //  0009  GETIDX	R4	R2	K5
      0x000C0604,  //  000A  ADD	R3	R3	R4
      0x80040600,  //  000B  RET	1	R3
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: read24
********************************************************************/
be_local_closure(I2C_Driver_Alt_read24,   /* name */
  be_nested_proto(
    7,                          /* nstack */
    2,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 7]) {     /* constants */
    /* K0   */  be_nested_str(wire),
    /* K1   */  be_nested_str(read_bytes),
    /* K2   */  be_nested_str(addr),
    /* K3   */  be_const_int(3),
    /* K4   */  be_const_int(0),
    /* K5   */  be_const_int(1),
    /* K6   */  be_const_int(2),
    }),
    &be_const_str_read24,
    &be_const_str_solidified,
    ( &(const binstruction[16]) {  /* code */
      0x88080100,  //  0000  GETMBR	R2	R0	K0
      0x8C080501,  //  0001  GETMET	R2	R2	K1
      0x88100102,  //  0002  GETMBR	R4	R0	K2
      0x5C140200,  //  0003  MOVE	R5	R1
      0x58180003,  //  0004  LDCONST	R6	K3
      0x7C080800,  //  0005  CALL	R2	4
      0x940C0504,  //  0006  GETIDX	R3	R2	K4
      0x5412000F,  //  0007  LDINT	R4	16
      0x380C0604,  //  0008  SHL	R3	R3	R4
      0x94100505,  //  0009  GETIDX	R4	R2	K5
      0x54160007,  //  000A  LDINT	R5	8
      0x38100805,  //  000B  SHL	R4	R4	R5
      0x000C0604,  //  000C  ADD	R3	R3	R4
      0x94100506,  //  000D  GETIDX	R4	R2	K6
      0x000C0604,  //  000E  ADD	R3	R3	R4
      0x80040600,  //  000F  RET	1	R3
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: write8
********************************************************************/
be_local_closure(I2C_Driver_Alt_write8,   /* name */
  be_nested_proto(
    9,                          /* nstack */
    3,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 4]) {     /* constants */
    /* K0   */  be_nested_str(wire),
    /* K1   */  be_nested_str(write),
    /* K2   */  be_nested_str(addr),
    /* K3   */  be_const_int(1),
    }),
    &be_const_str_write8,
    &be_const_str_solidified,
    ( &(const binstruction[ 8]) {  /* code */
      0x880C0100,  //  0000  GETMBR	R3	R0	K0
      0x8C0C0701,  //  0001  GETMET	R3	R3	K1
      0x88140102,  //  0002  GETMBR	R5	R0	K2
      0x5C180200,  //  0003  MOVE	R6	R1
      0x5C1C0400,  //  0004  MOVE	R7	R2
      0x58200003,  //  0005  LDCONST	R8	K3
      0x7C0C0A00,  //  0006  CALL	R3	5
      0x80040600,  //  0007  RET	1	R3
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: read13
********************************************************************/
be_local_closure(I2C_Driver_Alt_read13,   /* name */
  be_nested_proto(
    7,                          /* nstack */
    2,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 6]) {     /* constants */
    /* K0   */  be_nested_str(wire),
    /* K1   */  be_nested_str(read_bytes),
    /* K2   */  be_nested_str(addr),
    /* K3   */  be_const_int(2),
    /* K4   */  be_const_int(0),
    /* K5   */  be_const_int(1),
    }),
    &be_const_str_read13,
    &be_const_str_solidified,
    ( &(const binstruction[12]) {  /* code */
      0x88080100,  //  0000  GETMBR	R2	R0	K0
      0x8C080501,  //  0001  GETMET	R2	R2	K1
      0x88100102,  //  0002  GETMBR	R4	R0	K2
      0x5C140200,  //  0003  MOVE	R5	R1
      0x58180003,  //  0004  LDCONST	R6	K3
      0x7C080800,  //  0005  CALL	R2	4
      0x940C0504,  //  0006  GETIDX	R3	R2	K4
      0x54120004,  //  0007  LDINT	R4	5
      0x380C0604,  //  0008  SHL	R3	R3	R4
      0x94100505,  //  0009  GETIDX	R4	R2	K5
      0x000C0604,  //  000A  ADD	R3	R3	R4
      0x80040600,  //  000B  RET	1	R3
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: read16
********************************************************************/
be_local_closure(I2C_Driver_Alt_read16,   /* name */
  be_nested_proto(
    7,                          /* nstack */
    2,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 6]) {     /* constants */
    /* K0   */  be_nested_str(wire),
    /* K1   */  be_nested_str(read_bytes),
    /* K2   */  be_nested_str(addr),
    /* K3   */  be_const_int(2),
    /* K4   */  be_const_int(0),
    /* K5   */  be_const_int(1),
    }),
    &be_const_str_read16,
    &be_const_str_solidified,
    ( &(const binstruction[12]) {  /* code */
      0x88080100,  //  0000  GETMBR	R2	R0	K0
      0x8C080501,  //  0001  GETMET	R2	R2	K1
      0x88100102,  //  0002  GETMBR	R4	R0	K2
      0x5C140200,  //  0003  MOVE	R5	R1
      0x58180003,  //  0004  LDCONST	R6	K3
      0x7C080800,  //  0005  CALL	R2	4
      0x940C0504,  //  0006  GETIDX	R3	R2	K4
      0x54120007,  //  0007  LDINT	R4	8
      0x380C0604,  //  0008  SHL	R3	R3	R4
      0x94100505,  //  0009  GETIDX	R4	R2	K5
      0x000C0604,  //  000A  ADD	R3	R3	R4
      0x80040600,  //  000B  RET	1	R3
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: init
********************************************************************/
be_local_closure(I2C_Driver_Alt_init,   /* name */
  be_nested_proto(
    9,                          /* nstack */
    4,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 9]) {     /* constants */
    /* K0   */  be_nested_str(addr),
    /* K1   */  be_nested_str(wire),
    /* K2   */  be_nested_str(tasmota),
    /* K3   */  be_nested_str(wire_scan),
    /* K4   */  be_nested_str(function),
    /* K5   */  be_nested_str(name),
    /* K6   */  be_nested_str(I2C_X3A),
    /* K7   */  be_nested_str(detected_X20on_X20bus),
    /* K8   */  be_nested_str(bus),
    }),
    &be_const_str_init,
    &be_const_str_solidified,
    ( &(const binstruction[35]) {  /* code */
      0x90020002,  //  0000  SETMBR	R0	K0	R2
      0xB8120400,  //  0001  GETNGBL	R4	K2
      0x8C100903,  //  0002  GETMET	R4	R4	K3
      0x88180100,  //  0003  GETMBR	R6	R0	K0
      0x7C100400,  //  0004  CALL	R4	2
      0x90020204,  //  0005  SETMBR	R0	K1	R4
      0x88100101,  //  0006  GETMBR	R4	R0	K1
      0x78120019,  //  0007  JMPF	R4	#0022
      0x60100004,  //  0008  GETGBL	R4	G4
      0x5C140200,  //  0009  MOVE	R5	R1
      0x7C100200,  //  000A  CALL	R4	1
      0x1C100904,  //  000B  EQ	R4	R4	K4
      0x78120004,  //  000C  JMPF	R4	#0012
      0x5C100200,  //  000D  MOVE	R4	R1
      0x5C140000,  //  000E  MOVE	R5	R0
      0x7C100200,  //  000F  CALL	R4	1
      0x90020A04,  //  0010  SETMBR	R0	K5	R4
      0x70020000,  //  0011  JMP		#0013
      0x90020A01,  //  0012  SETMBR	R0	K5	R1
      0x88100105,  //  0013  GETMBR	R4	R0	K5
      0x4C140000,  //  0014  LDNIL	R5
      0x1C100805,  //  0015  EQ	R4	R4	R5
      0x78120001,  //  0016  JMPF	R4	#0019
      0x4C100000,  //  0017  LDNIL	R4
      0x90020204,  //  0018  SETMBR	R0	K1	R4
      0x88100101,  //  0019  GETMBR	R4	R0	K1
      0x78120006,  //  001A  JMPF	R4	#0022
      0x60100001,  //  001B  GETGBL	R4	G1
      0x58140006,  //  001C  LDCONST	R5	K6
      0x88180105,  //  001D  GETMBR	R6	R0	K5
      0x581C0007,  //  001E  LDCONST	R7	K7
      0x88200101,  //  001F  GETMBR	R8	R0	K1
      0x88201108,  //  0020  GETMBR	R8	R8	K8
      0x7C100800,  //  0021  CALL	R4	4
      0x80000000,  //  0022  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: write_bit
********************************************************************/
be_local_closure(I2C_Driver_Alt_write_bit,   /* name */
  be_nested_proto(
    11,                          /* nstack */
    4,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 4]) {     /* constants */
    /* K0   */  be_const_int(0),
    /* K1   */  be_const_int(1),
    /* K2   */  be_nested_str(write8),
    /* K3   */  be_nested_str(read8),
    }),
    &be_const_str_write_bit,
    &be_const_str_solidified,
    ( &(const binstruction[26]) {  /* code */
      0x14100500,  //  0000  LT	R4	R2	K0
      0x74120002,  //  0001  JMPT	R4	#0005
      0x54120006,  //  0002  LDINT	R4	7
      0x24100404,  //  0003  GT	R4	R2	R4
      0x78120000,  //  0004  JMPF	R4	#0006
      0x80000800,  //  0005  RET	0
      0x38120202,  //  0006  SHL	R4	K1	R2
      0x780E0007,  //  0007  JMPF	R3	#0010
      0x8C140102,  //  0008  GETMET	R5	R0	K2
      0x5C1C0200,  //  0009  MOVE	R7	R1
      0x8C200103,  //  000A  GETMET	R8	R0	K3
      0x5C280200,  //  000B  MOVE	R10	R1
      0x7C200400,  //  000C  CALL	R8	2
      0x30201004,  //  000D  OR	R8	R8	R4
      0x7C140600,  //  000E  CALL	R5	3
      0x70020008,  //  000F  JMP		#0019
      0x8C140102,  //  0010  GETMET	R5	R0	K2
      0x5C1C0200,  //  0011  MOVE	R7	R1
      0x8C200103,  //  0012  GETMET	R8	R0	K3
      0x5C280200,  //  0013  MOVE	R10	R1
      0x7C200400,  //  0014  CALL	R8	2
      0x542600FE,  //  0015  LDINT	R9	255
      0x04241204,  //  0016  SUB	R9	R9	R4
      0x2C201009,  //  0017  AND	R8	R8	R9
      0x7C140600,  //  0018  CALL	R5	3
      0x80000000,  //  0019  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: set_register_bit
********************************************************************/
be_local_closure(I2C_Driver_Alt_set_register_bit,   /* name */
  be_nested_proto(
    8,                          /* nstack */
    3,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 4]) {     /* constants */
    /* K0   */  be_nested_str(read8),
    /* K1   */  be_nested_str(write8),
    /* K2   */  be_const_int(1),
    /* K3   */  be_const_int(0),
    }),
    &be_const_str_set_register_bit,
    &be_const_str_solidified,
    ( &(const binstruction[15]) {  /* code */
      0x8C0C0100,  //  0000  GETMET	R3	R0	K0
      0x5C140200,  //  0001  MOVE	R5	R1
      0x7C0C0400,  //  0002  CALL	R3	2
      0x5411FFFE,  //  0003  LDINT	R4	-1
      0x1C100604,  //  0004  EQ	R4	R3	R4
      0x78120001,  //  0005  JMPF	R4	#0008
      0x50100000,  //  0006  LDBOOL	R4	0	0
      0x80040800,  //  0007  RET	1	R4
      0x8C100101,  //  0008  GETMET	R4	R0	K1
      0x5C180200,  //  0009  MOVE	R6	R1
      0x381E0402,  //  000A  SHL	R7	K2	R2
      0x301C0607,  //  000B  OR	R7	R3	R7
      0x7C100600,  //  000C  CALL	R4	3
      0x1C100903,  //  000D  EQ	R4	R4	K3
      0x80040800,  //  000E  RET	1	R4
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: readH5L8
********************************************************************/
be_local_closure(I2C_Driver_Alt_readH5L8,   /* name */
  be_nested_proto(
    7,                          /* nstack */
    2,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 7]) {     /* constants */
    /* K0   */  be_nested_str(wire),
    /* K1   */  be_nested_str(read_bytes),
    /* K2   */  be_nested_str(addr),
    /* K3   */  be_const_int(0),
    /* K4   */  be_const_int(1),
    /* K5   */  be_const_int(2),
    /* K6   */  be_const_int(3),
    }),
    &be_const_str_readH5L8,
    &be_const_str_solidified,
    ( &(const binstruction[20]) {  /* code */
      0x88080100,  //  0000  GETMBR	R2	R0	K0
      0x8C080501,  //  0001  GETMET	R2	R2	K1
      0x88100102,  //  0002  GETMBR	R4	R0	K2
      0x5C140200,  //  0003  MOVE	R5	R1
      0x541A0003,  //  0004  LDINT	R6	4
      0x7C080800,  //  0005  CALL	R2	4
      0x940C0503,  //  0006  GETIDX	R3	R2	K3
      0x54120017,  //  0007  LDINT	R4	24
      0x380C0604,  //  0008  SHL	R3	R3	R4
      0x94100504,  //  0009  GETIDX	R4	R2	K4
      0x5416000F,  //  000A  LDINT	R5	16
      0x38100805,  //  000B  SHL	R4	R4	R5
      0x000C0604,  //  000C  ADD	R3	R3	R4
      0x94100505,  //  000D  GETIDX	R4	R2	K5
      0x54160007,  //  000E  LDINT	R5	8
      0x38100805,  //  000F  SHL	R4	R4	R5
      0x000C0604,  //  0010  ADD	R3	R3	R4
      0x94100506,  //  0011  GETIDX	R4	R2	K6
      0x000C0604,  //  0012  ADD	R3	R3	R4
      0x80040600,  //  0013  RET	1	R3
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: read8
********************************************************************/
be_local_closure(I2C_Driver_Alt_read8,   /* name */
  be_nested_proto(
    7,                          /* nstack */
    2,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 4]) {     /* constants */
    /* K0   */  be_nested_str(wire),
    /* K1   */  be_nested_str(read),
    /* K2   */  be_nested_str(addr),
    /* K3   */  be_const_int(1),
    }),
    &be_const_str_read8,
    &be_const_str_solidified,
    ( &(const binstruction[ 7]) {  /* code */
      0x88080100,  //  0000  GETMBR	R2	R0	K0
      0x8C080501,  //  0001  GETMET	R2	R2	K1
      0x88100102,  //  0002  GETMBR	R4	R0	K2
      0x5C140200,  //  0003  MOVE	R5	R1
      0x58180003,  //  0004  LDCONST	R6	K3
      0x7C080800,  //  0005  CALL	R2	4
      0x80040400,  //  0006  RET	1	R2
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified class: I2C_Driver_Alt
********************************************************************/
be_local_class(I2C_Driver_Alt,
    3,
    NULL,
    be_nested_map(20,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key(read32, -1), be_const_closure(I2C_Driver_Alt_read32_closure) },
        { be_const_key(read8, -1), be_const_closure(I2C_Driver_Alt_read8_closure) },
        { be_const_key(name, -1), be_const_var(2) },
        { be_const_key(read_register_h8l5, -1), be_const_closure(I2C_Driver_Alt_read_register_h8l5_closure) },
        { be_const_key(wire, -1), be_const_var(0) },
        { be_const_key(get_register_bit, -1), be_const_closure(I2C_Driver_Alt_get_register_bit_closure) },
        { be_const_key(read_register_h6l8, -1), be_const_closure(I2C_Driver_Alt_read_register_h6l8_closure) },
        { be_const_key(read_register_h5l8, 1), be_const_closure(I2C_Driver_Alt_read_register_h5l8_closure) },
        { be_const_key(readH5L8, -1), be_const_closure(I2C_Driver_Alt_readH5L8_closure) },
        { be_const_key(set_register_bit, 19), be_const_closure(I2C_Driver_Alt_set_register_bit_closure) },
        { be_const_key(read12, -1), be_const_closure(I2C_Driver_Alt_read12_closure) },
        { be_const_key(read24, -1), be_const_closure(I2C_Driver_Alt_read24_closure) },
        { be_const_key(write8, -1), be_const_closure(I2C_Driver_Alt_write8_closure) },
        { be_const_key(get_register_bit2, 9), be_const_closure(I2C_Driver_Alt_get_register_bit2_closure) },
        { be_const_key(read16, -1), be_const_closure(I2C_Driver_Alt_read16_closure) },
        { be_const_key(init, -1), be_const_closure(I2C_Driver_Alt_init_closure) },
        { be_const_key(read14, 17), be_const_closure(I2C_Driver_Alt_read14_closure) },
        { be_const_key(write_bit, -1), be_const_closure(I2C_Driver_Alt_write_bit_closure) },
        { be_const_key(addr, 8), be_const_var(1) },
        { be_const_key(read13, -1), be_const_closure(I2C_Driver_Alt_read13_closure) },
    })),
    (bstring*) &be_const_str_I2C_Driver_Alt
);
/*******************************************************************/

void be_load_I2C_Driver_Alt_class(bvm *vm) {
    be_pushntvclass(vm, &be_class_I2C_Driver_Alt);
    be_setglobal(vm, "I2C_Driver_Alt");
    be_pop(vm, 1);
}
/********************************************************************/
/* End of solidification */
