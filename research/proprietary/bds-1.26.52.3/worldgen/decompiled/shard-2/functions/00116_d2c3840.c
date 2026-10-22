/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd3c3840 (ELF vaddr 0xd2c3840)
 * Label: FlatWorldGenerator::vslot1
 * Body:  [[0d3c3840, 0d3c38ad]]
 * Ghidra: wg_FlatWorldGenerator__vslot1
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_FlatWorldGenerator__vslot1(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  *param_1 = &UNK_0f462370;
  param_1[0xe] = &UNK_0f462548;
  plVar1 = (long *)param_1[0x2c];
  param_1[0x2c] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  lVar2 = param_1[0x22];
  if (lVar2 != 0) {
    param_1[0x23] = lVar2;
    thunk_FUN_0ee326a0(lVar2,param_1[0x24] - lVar2);
  }
  uVar3 = wg_WorldGenerator__vslot0(param_1);
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return uVar3;
}


