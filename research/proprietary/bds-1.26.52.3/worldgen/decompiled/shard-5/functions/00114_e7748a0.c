/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe8748a0 (ELF vaddr 0xe7748a0)
 * Label: SharedTypes::v1_20_60::SurfaceMaterialAdjustmentsBiomeJsonComponent::vslot1
 * Body:  [[0e8748a0, 0e8748c4] [0ee326a0, 0ee326bb]]
 * Ghidra: wg_SharedTypes__v1_20_60__SurfaceMaterialAdjustmentsBiomeJsonComponent__vslot1
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
wg_SharedTypes__v1_20_60__SurfaceMaterialAdjustmentsBiomeJsonComponent__vslot1(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &UNK_0f4cec68;
  uVar1 = func_0x0e8748d0(param_1 + 1);
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return uVar1;
}


