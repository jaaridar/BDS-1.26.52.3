/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2c4540 (ELF vaddr 0xd1c4540)
 * Label: br::worldgen::processors::ProtectedBlock::vslot1
 * Body:  [[0d2c4540, 0d2c4575]]
 * Ghidra: wg_br__worldgen__processors__ProtectedBlock__vslot1
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * wg_br__worldgen__processors__ProtectedBlock__vslot1(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_0f45e1a8;
  *param_1 = &UNK_0f45e1a8;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    puVar1 = (undefined *)thunk_FUN_0ee326a0(param_1[4],param_1[2] & 0xfffffffffffffffe);
  }
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return puVar1;
}


