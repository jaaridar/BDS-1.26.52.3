/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe43e510
 * Label: callee-of:0xe4118a0
 * Body:  [[0e43e3b7, 0e43e410] [0e43e469, 0e43e48c] [0e43e510, 0e43e532]]
 * Ghidra: FUN_0e43e510
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e43e510(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint *param_4)

{
  long lVar1;
  uint in_EAX;
  long *plVar2;
  long *unaff_RBX;
  long unaff_R14;
  
  *param_4 = *param_4 ^ in_EAX;
  func_0x0eee2f40(param_1,param_2,0xf53dab8);
  func_0x0410844d(0xf752448);
  plVar2 = (long *)(*unaff_RBX +
                   (ulong)((int)((ulong)(unaff_RBX[1] - *unaff_RBX) >> 3) - 1U &
                          *(uint *)(_DAT_0f7523c8 + 4)) * 8);
  do {
    lVar1 = *plVar2;
    if (lVar1 == -1) goto LAB_0e43e404;
    plVar2 = (long *)(unaff_RBX[3] + lVar1 * 0x18);
  } while (*(uint *)(unaff_RBX[3] + 8 + lVar1 * 0x18) != *(uint *)(_DAT_0f7523c8 + 4));
  if (plVar2 != (long *)unaff_RBX[4]) {
    *(long *)(unaff_R14 + 0x30) = plVar2[2];
    return;
  }
LAB_0e43e404:
  *(undefined **)(unaff_R14 + 0x30) = &DAT_0f7523c8;
  return;
}


