/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x78de530
 * Label: string:Density
 * Body:  [[078de49f, 078de516] [078de530, 078de56c]]
 * Ghidra: FUN_078de530
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_078de530(void)

{
  long lVar1;
  long in_RAX;
  long *plVar2;
  long *unaff_R14;
  
  *(int *)(in_RAX + -0x73) = *(int *)(in_RAX + -0x73) + -1;
  func_0x078de570();
  func_0x0eee2f40(&UNK_048ae800);
  func_0x0410844d(0xf5b0748);
  plVar2 = (long *)(*unaff_R14 +
                   (ulong)((int)((ulong)(unaff_R14[1] - *unaff_R14) >> 3) - 1U &
                          *(uint *)(_DAT_0f5b06c8 + 4)) * 8);
  do {
    lVar1 = *plVar2;
    if (lVar1 == -1) goto LAB_078de4f0;
    plVar2 = (long *)(unaff_R14[3] + lVar1 * 0x18);
  } while (*(uint *)(unaff_R14[3] + 8 + lVar1 * 0x18) != *(uint *)(_DAT_0f5b06c8 + 4));
  if (plVar2 != (long *)unaff_R14[4]) {
    return (undefined *)plVar2[2];
  }
LAB_078de4f0:
  return &DAT_0f5b06c8;
}


