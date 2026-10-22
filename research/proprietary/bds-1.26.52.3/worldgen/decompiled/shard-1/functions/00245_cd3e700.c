/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcd3e700
 * Label: JigsawBlockActor::vslot4
 * Body:  [[0cd3e700, 0cd3e71e]]
 * Ghidra: wg_JigsawBlockActor__vslot4
 */


long wg_JigsawBlockActor__vslot4(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4)

{
  long in_RAX;
  long lVar1;
  long unaff_RBX;
  long unaff_R14;
  
  do {
    if (*(long *)(((long *)*param_4)[1] + 8) == in_RAX) {
      lVar1 = (**(code **)(*(long *)*param_4 + 8))();
      if (lVar1 != 0) {
        return lVar1;
      }
      break;
    }
    param_4 = param_4 + 2;
  } while (param_4 != param_2);
  if ((*(byte *)(unaff_RBX + 0x135) & 8) == 0) {
    return unaff_R14;
  }
  return *(long *)(unaff_RBX + 0x200);
}


