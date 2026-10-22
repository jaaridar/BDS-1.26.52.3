/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5092540
 * Label: br::worldgen::processors::BlockRules::Test::vslot0
 * Body:  [[05092540, 0509261f]]
 * Ghidra: wg_br__worldgen__processors__BlockRules__Test__vslot0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_br__worldgen__processors__BlockRules__Test__vslot0(long param_1)

{
  long in_RAX;
  bool in_ZF;
  ulong in_stack_00000018;
  undefined8 in_stack_00000028;
  long in_stack_00000040;
  long in_stack_00000050;
  ulong in_stack_00000058;
  undefined8 in_stack_00000068;
  ulong in_stack_00000078;
  ulong in_stack_00000080;
  
  if (!in_ZF) {
    (**(code **)(in_RAX + 0x10))(param_1 + 0x110);
  }
  if ((in_stack_00000080 >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000080 & 0xff00ffffffffffff) - 8);
  }
  if ((in_stack_00000078 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000078 & 0xff00ffffffffffff) - 8);
  }
  if ((in_stack_00000058 & 1) != 0) {
    func_0x0412a280(in_stack_00000068,in_stack_00000058 & 0xfffffffffffffffe);
  }
  if (in_stack_00000040 != 0) {
    func_0x0412a280(in_stack_00000040,in_stack_00000050 << 3);
  }
  if ((in_stack_00000018 & 1) != 0) {
    func_0x0412a280(in_stack_00000028,in_stack_00000018 & 0xfffffffffffffffe);
  }
  return;
}


