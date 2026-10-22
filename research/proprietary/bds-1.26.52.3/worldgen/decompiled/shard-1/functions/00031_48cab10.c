/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x49cab10 (ELF vaddr 0x48cab10)
 * Label: br::worldgen::WorldGenRandom::vslot13
 * Body:  [[049cab10, 049cab1d]]
 * Ghidra: wg_br__worldgen__WorldGenRandom__vslot13
 */


void wg_br__worldgen__WorldGenRandom__vslot13(long *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x049cab1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x58))(param_1,param_2 + -1);
  return;
}


