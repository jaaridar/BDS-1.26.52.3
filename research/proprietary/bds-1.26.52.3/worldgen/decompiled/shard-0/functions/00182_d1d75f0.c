/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1d75f0
 * Label: br::worldgen::processors::BlockRules::BlockStateMatch::vslot2
 * Body:  [[0d1d75b1, 0d1d75de] [0d1d75f0, 0d1d762a]]
 * Ghidra: wg_br__worldgen__processors__BlockRules__BlockStateMatch__vslot2
 */


void wg_br__worldgen__processors__BlockRules__BlockStateMatch__vslot2(void)

{
  byte unaff_retaddr;
  undefined7 unaff_retaddr_00;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 in_stack_00000028;
  ulong in_stack_00000030;
  undefined8 in_stack_00000040;
  
  if ((unaff_retaddr & 1) != 0) {
    func_0x0412a280(in_stack_00000010,CONCAT71(unaff_retaddr_00,unaff_retaddr) & 0xfffffffffffffffe)
    ;
  }
  if ((in_stack_00000030 & 1) != 0) {
    func_0x0412a280(in_stack_00000040,in_stack_00000030 & 0xfffffffffffffffe);
  }
  if ((in_stack_00000018 & 1) != 0) {
    func_0x0412a280(in_stack_00000028,in_stack_00000018 & 0xfffffffffffffffe);
  }
  return;
}


