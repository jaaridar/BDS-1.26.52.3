/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5298080 (ELF vaddr 0x5198080)
 * Label: caller-of-seed
 * Body:  [[05298080, 05298094]]
 * Ghidra: FUN_05298080
 */


undefined8 FUN_05298080(undefined8 param_1,long param_2)

{
  wg_FixedBiomeSource__vslot6(param_1,*(undefined8 *)(param_2 + 0x1b0));
  return param_1;
}


