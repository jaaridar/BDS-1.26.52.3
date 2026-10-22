/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x48cac20
 * Label: EditorCustomBiomeSource::vslot0
 * Body:  [[048cac20, 048cac5b] [048cac60, 048caca8]]
 * Ghidra: wg_EditorCustomBiomeSource__vslot0
 */


/* WARNING: Possible PIC construction at 0x048cac40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x048cac83: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x048cac45) */
/* WARNING: Removing unreachable block (ram,0x048caca3) */
/* WARNING: Removing unreachable block (ram,0x048cac4e) */
/* WARNING: Removing unreachable block (ram,0x048cac5a) */
/* WARNING: Removing unreachable block (ram,0x048cac88) */
/* WARNING: Removing unreachable block (ram,0x048cac60) */
/* WARNING: Removing unreachable block (ram,0x048cac8a) */
/* WARNING: Removing unreachable block (ram,0x048cac8e) */
/* WARNING: Removing unreachable block (ram,0x048cac69) */
/* WARNING: Removing unreachable block (ram,0x048cac70) */
/* WARNING: Removing unreachable block (ram,0x048cac77) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_EditorCustomBiomeSource__vslot0(void)

{
  undefined8 uVar1;
  long unaff_RBX;
  long unaff_R14;
  long unaff_R15;
  
  do {
    unaff_R14 = unaff_R14 + -0x40;
    uVar1 = func_0x048b3e80(unaff_R14);
  } while (unaff_R14 != unaff_R15);
  *(long *)(unaff_RBX + 0x30) = unaff_R15;
  if (*(long *)(unaff_RBX + 0x28) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,*(long *)(unaff_RBX + 0x28));
  }
  return uVar1;
}


