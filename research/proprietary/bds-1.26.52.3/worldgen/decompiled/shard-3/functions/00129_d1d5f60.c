/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2d5f60 (ELF vaddr 0xd1d5f60)
 * Label: br::worldgen::processors::BlockEntity::Modifier::vslot3
 * Body:  [[0d2d5f60, 0d2d5fa3]]
 * Ghidra: wg_br__worldgen__processors__BlockEntity__Modifier__vslot3
 */


void wg_br__worldgen__processors__BlockEntity__Modifier__vslot3(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uStack_10;
  undefined8 *puStack_8;
  
  uStack_10 = param_2;
  if ((ulong)*(uint *)(param_1 + 0x28) != 0xffffffff) {
    puStack_8 = &uStack_10;
    (**(code **)(&UNK_0f45ef68 + (ulong)*(uint *)(param_1 + 0x28) * 8))(&puStack_8,param_1 + 8);
    return;
  }
  func_0x04931450();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


