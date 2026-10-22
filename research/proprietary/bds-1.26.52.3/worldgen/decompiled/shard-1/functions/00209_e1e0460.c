/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe2e0460 (ELF vaddr 0xe1e0460)
 * Label: SharedTypes::v1_21_80::BiomeReplacementConstraint::vslot7
 * Body:  [[0e2e0460, 0e2e04a0]]
 * Ghidra: wg_SharedTypes__v1_21_80__BiomeReplacementConstraint__vslot7
 */


undefined * wg_SharedTypes__v1_21_80__BiomeReplacementConstraint__vslot7(void)

{
  int iVar1;
  
  if (DAT_0f74fb40 != '\0') {
    return &DAT_0f74fb28;
  }
  iVar1 = FUN_04108328(&DAT_0f74fb40);
  if (iVar1 != 0) {
    func_0x0e3b11d0();
    func_0x0410844d(&DAT_0f74fb40);
  }
  return &DAT_0f74fb28;
}


