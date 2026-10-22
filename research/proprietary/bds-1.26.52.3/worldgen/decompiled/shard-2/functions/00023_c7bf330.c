/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc7bf330
 * Label: SurfaceBuilderComponent::vslot0
 * Body:  [[0c7bf330, 0c7bf355]]
 * Ghidra: wg_SurfaceBuilderComponent__vslot0
 */


void wg_SurfaceBuilderComponent__vslot0
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  char cVar1;
  undefined8 *in_RAX;
  long unaff_RBX;
  
  param_4 = param_4 - (int)in_RAX;
  cVar1 = *(char *)((long)in_RAX + -0x77);
  *(byte *)(unaff_RBX + -0x3d) = *(byte *)(unaff_RBX + -0x3d) | (byte)unaff_RBX;
  func_0x0eec74c0(0x10,0,param_3,CONCAT31((int3)((uint)param_4 >> 8),(char)param_4 + cVar1));
  *in_RAX = &UNK_0f3d1c68;
  return;
}


