/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x48cabe0
 * Label: br::worldgen::WorldGenRandom::vslot17
 * Body:  [[048cabe0, 048cabeb]]
 * Ghidra: wg_br__worldgen__WorldGenRandom__vslot17
 */


/* WARNING: Possible PIC construction at 0x048cab7f: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x048cab84) */
/* WARNING: Removing unreachable block (ram,0x048cab46) */
/* WARNING: Removing unreachable block (ram,0x048cabe2) */
/* WARNING: Removing unreachable block (ram,0x048cab59) */
/* WARNING: Removing unreachable block (ram,0x048cab99) */
/* WARNING: Removing unreachable block (ram,0x048caba5) */
/* WARNING: Removing unreachable block (ram,0x048cabb1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_br__worldgen__WorldGenRandom__vslot17(void)

{
  long *plVar1;
  undefined8 in_RAX;
  long unaff_R12;
  long lVar2;
  long unaff_R13;
  long unaff_R14;
  
  while (lVar2 = unaff_R13 + -8, lVar2 != unaff_R12) {
    plVar1 = *(long **)(unaff_R13 + -0x10);
    *(undefined8 *)(unaff_R13 + -0x10) = 0;
    unaff_R13 = lVar2;
    if (plVar1 != (long *)0x0) {
      in_RAX = (**(code **)(*plVar1 + 8))();
    }
  }
  *(long *)(unaff_R14 + 0x20) = unaff_R12;
  if (*(long *)(unaff_R14 + 0x18) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,*(long *)(unaff_R14 + 0x18));
  }
  return in_RAX;
}


