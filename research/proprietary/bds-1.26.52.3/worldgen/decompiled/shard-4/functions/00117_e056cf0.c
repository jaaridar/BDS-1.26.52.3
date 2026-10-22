/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe156cf0 (ELF vaddr 0xe056cf0)
 * Label: SharedTypes::v1_26_0::BiomeReplacementConstraint::vslot7
 * Body:  [[0e156cf0, 0e156d30]]
 * Ghidra: wg_SharedTypes__v1_26_0__BiomeReplacementConstraint__vslot7
 */


undefined * wg_SharedTypes__v1_26_0__BiomeReplacementConstraint__vslot7(void)

{
  int iVar1;
  
  if (DAT_0f747fa8 != '\0') {
    return &DAT_0f747f90;
  }
  iVar1 = func_0x04108328(&DAT_0f747fa8);
  if (iVar1 != 0) {
    func_0x0e20d100();
    func_0x0410844d(&DAT_0f747fa8);
  }
  return &DAT_0f747f90;
}


