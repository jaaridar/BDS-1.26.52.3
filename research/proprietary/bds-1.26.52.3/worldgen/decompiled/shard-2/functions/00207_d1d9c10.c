/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2d9c10 (ELF vaddr 0xd1d9c10)
 * Label: br::worldgen::processors::BlockEntity::AppendLoot::vslot1
 * Body:  [[0d2d9c10, 0d2d9c45]]
 * Ghidra: wg_br__worldgen__processors__BlockEntity__AppendLoot__vslot1
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * wg_br__worldgen__processors__BlockEntity__AppendLoot__vslot1(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_0f45f788;
  *param_1 = &UNK_0f45f788;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    puVar1 = (undefined *)thunk_FUN_0ee326a0(param_1[3],param_1[1] & 0xfffffffffffffffe);
  }
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return puVar1;
}


