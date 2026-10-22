/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1eb5d0
 * Label: callee-of:0x493d130
 * Body:  [[0d1eb59f, 0d1eb5a4] [0d1eb5b0, 0d1eb5ce] [0d1eb5d0, 0d1eb5f4]]
 * Ghidra: FUN_0d1eb5d0
 */


long FUN_0d1eb5d0(undefined8 param_1,long *param_2,undefined8 param_3,ulong param_4,ulong param_5,
                 ulong param_6)

{
  ulong in_RAX;
  long in_R10;
  ulong uVar1;
  
  uVar1 = 0;
  do {
    if (uVar1 >> 0x20 == 0) {
      in_RAX = (in_RAX & 0xffffffff) % (param_6 & 0xffffffff);
    }
    else {
      in_RAX = in_RAX % param_6;
    }
    do {
      if (in_RAX != param_5) {
        return 0;
      }
      while( true ) {
        param_2 = (long *)*param_2;
        if (param_2 == (long *)0x0) {
          return 0;
        }
        in_RAX = param_2[1];
        if (in_RAX != param_4) break;
        if (param_2[2] == in_R10) {
          return (long)param_2;
        }
      }
    } while (in_RAX < param_6);
    uVar1 = in_RAX | param_6;
  } while( true );
}


