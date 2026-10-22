/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2f3a00 (ELF vaddr 0xd1f3a00)
 * Label: br::worldgen::ConstantHeight::vslot2
 * Body:  [[0d2f3a00, 0d2f3a0b]]
 * Ghidra: wg_br__worldgen__ConstantHeight__vslot2
 */


void wg_br__worldgen__ConstantHeight__vslot2(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0d2f3a0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))(param_3,*(undefined4 *)(param_1 + 8));
  return;
}


