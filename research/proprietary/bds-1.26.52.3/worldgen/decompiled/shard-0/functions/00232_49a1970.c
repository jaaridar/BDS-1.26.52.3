/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4aa1970 (ELF vaddr 0x49a1970)
 * Label: Dimension::vslot6
 * Body:  [[04aa1970, 04aa197b]]
 * Ghidra: wg_Dimension__vslot6
 */


void wg_Dimension__vslot6(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x04aa197a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))();
  return;
}


