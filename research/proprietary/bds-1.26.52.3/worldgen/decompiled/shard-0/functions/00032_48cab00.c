/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x49cab00 (ELF vaddr 0x48cab00)
 * Label: br::worldgen::WorldGenRandom::vslot12
 * Body:  [[049cab00, 049cab0f]]
 * Ghidra: wg_br__worldgen__WorldGenRandom__vslot12
 */


void wg_br__worldgen__WorldGenRandom__vslot12(long *param_1,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x049cab0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x58))(param_1,1,param_2);
  return;
}


