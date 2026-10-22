/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca651f0 (ELF vaddr 0xc9651f0)
 * Label: Dimension::vslot9
 * Body:  [[0ca651f0, 0ca651ff]]
 * Ghidra: wg_Dimension__vslot9
 */


void wg_Dimension__vslot9(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0ca651fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xa0) + 0x2b0))();
  return;
}


