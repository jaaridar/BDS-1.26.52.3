/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcb41df0
 * Label: callee-of:0x4e2bb50
 * Body:  [[0cb41dd0, 0cb41e08] [0cb41e0c, 0cb41e14] [0cb41eb0, 0cb41ebe]]
 * Ghidra: FUN_0cb41df0
 */


void FUN_0cb41df0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long unaff_RBX;
  byte *unaff_R14;
  byte *unaff_R15;
  undefined4 *unaff_retaddr;
  
  do {
    if ((*unaff_R15 & 1) == 0) {
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(unaff_R15 + 0x10);
      uVar1 = *(undefined4 *)(unaff_R15 + 4);
      uVar2 = *(undefined4 *)(unaff_R15 + 8);
      uVar3 = *(undefined4 *)(unaff_R15 + 0xc);
      *param_1 = *(undefined4 *)unaff_R15;
      param_1[1] = uVar1;
      param_1[2] = uVar2;
      param_1[3] = uVar3;
    }
    else {
      func_0x0412e5e0(param_1,*(undefined8 *)(unaff_R15 + 0x10),*(undefined8 *)(unaff_R15 + 8));
      param_1 = unaff_retaddr;
    }
    unaff_R15 = unaff_R15 + 0x18;
    param_1 = param_1 + 6;
    unaff_retaddr = param_1;
  } while (unaff_R15 != unaff_R14);
  *(undefined4 **)(unaff_RBX + 8) = param_1;
  return;
}


