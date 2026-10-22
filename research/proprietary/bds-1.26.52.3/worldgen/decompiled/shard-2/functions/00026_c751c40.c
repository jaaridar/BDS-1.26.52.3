/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc751c40
 * Label: VanillaSurfaceBuilders::CappedSurfaceBuilder::MaterialHelper::vslot3
 * Body:  [[0c751c40, 0c751ca4]]
 * Ghidra: wg_VanillaSurfaceBuilders__CappedSurfaceBuilder__MaterialHelper__vslot3
 */


void wg_VanillaSurfaceBuilders__CappedSurfaceBuilder__MaterialHelper__vslot3
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
               undefined8 param_5,undefined8 param_6,ulong param_7,undefined8 param_8,
               undefined8 param_9)

{
  byte *pbVar1;
  long lVar2;
  long unaff_RBP;
  
  pbVar1 = (byte *)(unaff_RBP + 0x44 + param_4 * 4);
  *pbVar1 = *pbVar1 & (byte)param_4;
  lVar2 = func_0x0d6c9580(param_3);
  if ((ulong)*(uint *)(lVar2 + 0x60) != 0xffffffff) {
    (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar2 + 0x60) * 8))(&stack0x00000020,lVar2 + 0x38)
    ;
  }
  *(undefined **)(lVar2 + 0x38) = &UNK_0f47e2e0;
  *(undefined4 *)(lVar2 + 0x40) = 0xb;
  *(undefined4 *)(lVar2 + 0x60) = 3;
  if ((param_7 & 1) != 0) {
    func_0x0412a280(param_9,param_7 & 0xfffffffffffffffe);
  }
  return;
}


