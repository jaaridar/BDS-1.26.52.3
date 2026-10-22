/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe7b7880
 * Label: callee-of:0xe7af270
 * Body:  [[0e7b7880, 0e7b79bb]]
 * Ghidra: FUN_0e7b7880
 */


void FUN_0e7b7880(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long in_RAX;
  long lVar2;
  undefined8 *unaff_RBX;
  long *unaff_R15;
  
  if (in_RAX == 0) {
    param_3 = (undefined8 *)*unaff_RBX;
    if (*(char *)((long)unaff_RBX + 0x24) == '\x02') {
      param_3 = unaff_RBX;
    }
    if ((*(int *)(unaff_RBX + 4) != -0x711a7607) || (param_3 == (undefined8 *)0x0)) {
      if ((code *)unaff_RBX[7] == (code *)0x0) {
LAB_0e7b7982:
        lVar2 = unaff_RBX[5];
        unaff_R15[2] = (long)&UNK_0488e0b0;
        *(undefined4 *)(unaff_R15 + 4) = 0x48b5725f;
        unaff_R15[3] = 0;
        *(undefined1 *)((long)unaff_R15 + 0x24) = 0;
        *unaff_R15 = 0;
        unaff_R15[5] = lVar2;
        unaff_R15[6] = 0;
        unaff_R15[7] = 0;
        return;
      }
      uVar1 = unaff_RBX[5];
      lVar2 = unaff_RBX[6];
      if (lVar2 == 0) {
        (*(code *)unaff_RBX[7])(0);
        lVar2 = unaff_RBX[6];
      }
      param_3 = (undefined8 *)func_0x0488e200(uVar1,lVar2,0x8ee589f9);
      if (param_3 == (undefined8 *)0x0) goto LAB_0e7b7982;
    }
    lVar2 = unaff_RBX[5];
    unaff_R15[2] = (long)&UNK_04906b20;
    *(undefined4 *)(unaff_R15 + 4) = 0xc894953d;
    unaff_R15[3] = 0;
    *(undefined1 *)((long)unaff_R15 + 0x24) = 4;
  }
  else {
    lVar2 = unaff_RBX[5];
    unaff_R15[2] = (long)&UNK_04906b20;
    *(undefined4 *)(unaff_R15 + 4) = 0xc894953d;
    unaff_R15[3] = 0;
    *(undefined1 *)((long)unaff_R15 + 0x24) = 3;
  }
  *unaff_R15 = (long)param_3 + 0xd4;
  unaff_R15[5] = lVar2;
  unaff_R15[6] = 0;
  unaff_R15[7] = (long)&UNK_04906b00;
  return;
}


