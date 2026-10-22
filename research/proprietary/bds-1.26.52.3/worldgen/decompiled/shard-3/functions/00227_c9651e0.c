/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca651e0 (ELF vaddr 0xc9651e0)
 * Label: Dimension::vslot8
 * Body:  [[0ca651e0, 0ca651ef]]
 * Ghidra: wg_Dimension__vslot8
 */


void wg_Dimension__vslot8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0ca651ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xa0) + 0x2b0))();
  return;
}


