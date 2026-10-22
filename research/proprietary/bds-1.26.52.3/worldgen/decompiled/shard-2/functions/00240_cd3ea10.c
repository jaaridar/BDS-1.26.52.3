/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcd3ea10
 * Label: JigsawBlockActor::vslot5
 * Body:  [[0cd3ea10, 0cd3ea60]]
 * Ghidra: wg_JigsawBlockActor__vslot5
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_JigsawBlockActor__vslot5(undefined8 param_1,undefined8 param_2,char *param_3)

{
  long lVar1;
  long unaff_RBX;
  long unaff_R15;
  
  *param_3 = *param_3 + 'H';
  lVar1 = (**(code **)((ulong)_DAT_0f5463b0 + 0x10))();
  if (lVar1 == 0) {
    func_0x0eec74c0();
  }
  *(long *)(unaff_RBX + 8) = lVar1;
  *(long *)(unaff_RBX + 0x10) = lVar1;
  *(long *)(unaff_RBX + 0x18) = lVar1 + unaff_R15;
  func_0x0eee2f00(lVar1);
  *(long *)(unaff_RBX + 0x10) = lVar1 + unaff_R15;
  return;
}


