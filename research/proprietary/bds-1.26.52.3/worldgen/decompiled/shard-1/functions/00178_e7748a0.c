/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe7748a0
 * Label: SharedTypes::v1_20_60::SurfaceMaterialAdjustmentsBiomeJsonComponent::vslot1
 * Body:  [[0e7747e6, 0e774865] [0e7748a0, 0e7748be]]
 * Ghidra: wg_SharedTypes__v1_20_60__SurfaceMaterialAdjustmentsBiomeJsonComponent__vslot1
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_SharedTypes__v1_20_60__SurfaceMaterialAdjustmentsBiomeJsonComponent__vslot1
               (undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 in_EAX;
  long *plVar2;
  long *unaff_R14;
  
  func_0x0eee2f40(param_1,param_2,in_EAX);
  func_0x0410844d(0xf75fb98);
  plVar2 = (long *)(*unaff_R14 +
                   (ulong)((int)((ulong)(unaff_R14[1] - *unaff_R14) >> 3) - 1U &
                          *(uint *)(_DAT_0f75fb18 + 4)) * 8);
  do {
    lVar1 = *plVar2;
    if (lVar1 == -1) break;
    plVar2 = (long *)(unaff_R14[3] + lVar1 * 0x18);
  } while (*(uint *)(unaff_R14[3] + 8 + lVar1 * 0x18) != *(uint *)(_DAT_0f75fb18 + 4));
  func_0x0ed76130();
  return;
}


