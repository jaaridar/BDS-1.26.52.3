/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2d73b0 (ELF vaddr 0xd1d73b0)
 * Label: br::worldgen::processors::BlockRules::Test::vslot3
 * Body:  [[0d2d73b0, 0d2d73f3]]
 * Ghidra: wg_br__worldgen__processors__BlockRules__Test__vslot3
 */


void wg_br__worldgen__processors__BlockRules__Test__vslot3(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uStack_10;
  undefined8 *puStack_8;
  
  uStack_10 = param_2;
  if ((ulong)*(uint *)(param_1 + 0x38) != 0xffffffff) {
    puStack_8 = &uStack_10;
    (**(code **)(&UNK_0f45efa8 + (ulong)*(uint *)(param_1 + 0x38) * 8))(&puStack_8,param_1 + 8);
    return;
  }
  func_0x04931450();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


