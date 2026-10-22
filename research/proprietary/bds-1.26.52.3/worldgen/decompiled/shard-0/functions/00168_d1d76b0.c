/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1d76b0
 * Label: br::worldgen::processors::BlockRules::RandomBlockStateMatch::vslot2
 * Body:  [[0d1d7666, 0d1d76a9] [0d1d76b0, 0d1d76cf]]
 * Ghidra: wg_br__worldgen__processors__BlockRules__RandomBlockStateMatch__vslot2
 */


void wg_br__worldgen__processors__BlockRules__RandomBlockStateMatch__vslot2(void)

{
  byte bVar1;
  code *pcVar2;
  char in_AL;
  byte *in_RCX;
  char in_CF;
  ulong unaff_retaddr;
  undefined8 in_stack_00000010;
  byte bStack0000000000000018;
  undefined8 in_stack_00000028;
  ulong in_stack_00000030;
  undefined8 in_stack_00000040;
  
  *in_RCX = (*in_RCX - in_AL) - in_CF;
  bVar1 = *in_RCX;
  while (bVar1 == 0) {
    while( true ) {
      func_0x0eee2d70();
      func_0x0412a280(in_stack_00000010,unaff_retaddr & 0xfffffffffffffffe);
      if ((in_stack_00000030 & 1) == 0) break;
      func_0x0412a280(in_stack_00000040,in_stack_00000030 & 0xfffffffffffffffe);
      if ((_bStack0000000000000018 & 1) != 0) goto LAB_0d1d76b4;
    }
    bVar1 = bStack0000000000000018 & 1;
  }
LAB_0d1d76b4:
  func_0x0412a280(in_stack_00000028,_bStack0000000000000018 & 0xfffffffffffffffe);
  func_0x0eee2d70();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


