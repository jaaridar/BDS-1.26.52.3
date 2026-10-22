/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe1d06e0
 * Label: string:minecraft:biome_music
 * Body:  [[0e1d061f, 0e1d0696] [0e1d06e0, 0e1d06ec]]
 * Ghidra: FUN_0e1d06e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0e1d06e0(void)

{
  long lVar1;
  long *plVar2;
  long *unaff_R14;
  
  func_0x0410844d();
  plVar2 = (long *)(*unaff_R14 +
                   (ulong)((int)((ulong)(unaff_R14[1] - *unaff_R14) >> 3) - 1U &
                          *(uint *)(_DAT_0f74a5b0 + 4)) * 8);
  do {
    lVar1 = *plVar2;
    if (lVar1 == -1) goto LAB_0e1d0670;
    plVar2 = (long *)(unaff_R14[3] + lVar1 * 0x18);
  } while (*(uint *)(unaff_R14[3] + 8 + lVar1 * 0x18) != *(uint *)(_DAT_0f74a5b0 + 4));
  if (plVar2 != (long *)unaff_R14[4]) {
    return (undefined *)plVar2[2];
  }
LAB_0e1d0670:
  return &DAT_0f74a5b0;
}


