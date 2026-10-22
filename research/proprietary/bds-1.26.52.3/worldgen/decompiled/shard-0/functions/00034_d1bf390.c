/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2bf390 (ELF vaddr 0xd1bf390)
 * Label: br::worldgen::processors::Rule::vslot3
 * Body:  [[0d2bf390, 0d2bf3b4]]
 * Ghidra: wg_br__worldgen__processors__Rule__vslot3
 */


undefined8 * wg_br__worldgen__processors__Rule__vslot3(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *in_stack_00000018;
  
  uVar1 = in_stack_00000018[1];
  *param_1 = *in_stack_00000018;
  param_1[1] = uVar1;
  param_1[2] = in_stack_00000018[2];
  *in_stack_00000018 = 0;
  in_stack_00000018[1] = 0;
  in_stack_00000018[2] = 0;
  return param_1;
}


