/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe79e420
 * Label: callee-of:0xe706340
 * Body:  [[0e79e39c, 0e79e3fa] [0e79e420, 0e79e446]]
 * Ghidra: FUN_0e79e420
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0e79e420(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long *unaff_RBX;
  
  func_0x0eee2f40(param_1,&DAT_0f760978,0xf53dab8);
  func_0x0410844d(0xf7609f8);
  plVar2 = (long *)(*unaff_RBX +
                   (ulong)((int)((ulong)(unaff_RBX[1] - *unaff_RBX) >> 3) - 1U &
                          *(uint *)(_DAT_0f760978 + 4)) * 8);
  do {
    lVar1 = *plVar2;
    if (lVar1 == -1) goto LAB_0e79e3e0;
    plVar2 = (long *)(unaff_RBX[3] + lVar1 * 0x18);
  } while (*(uint *)(unaff_RBX[3] + 8 + lVar1 * 0x18) != *(uint *)(_DAT_0f760978 + 4));
  if (plVar2 != (long *)unaff_RBX[4]) {
    return (undefined *)plVar2[2];
  }
LAB_0e79e3e0:
  return &DAT_0f760978;
}


