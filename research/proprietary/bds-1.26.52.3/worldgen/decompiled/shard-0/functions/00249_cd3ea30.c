/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcd3ea30
 * Label: JigsawBlockActor::vslot2
 * Body:  [[0cd3ea30, 0cd3ea4f]]
 * Ghidra: wg_JigsawBlockActor__vslot2
 */


void wg_JigsawBlockActor__vslot2(void)

{
  long unaff_RBX;
  long unaff_R13;
  long unaff_R15;
  
  *(long *)(unaff_RBX + 0x18) = unaff_R13 + unaff_R15;
  func_0x0eee2f00();
  *(long *)(unaff_RBX + 0x10) = unaff_R13 + unaff_R15;
  return;
}


