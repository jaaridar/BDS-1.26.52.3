/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc5ce210
 * Label: JigsawBlock::vslot50
 * Body:  [[0c5ce210, 0c5ce235]]
 * Ghidra: wg_JigsawBlock__vslot50
 */


void wg_JigsawBlock__vslot50(void)

{
  int in_EAX;
  long unaff_RBX;
  
  *(byte *)(unaff_RBX + -0x3d) = *(byte *)(unaff_RBX + -0x3d) | (byte)unaff_RBX;
  func_0x0eec74c0(0x10,0);
  *(undefined **)(ulong)(in_EAX + 0x76b7fd24) = &UNK_0f390fa8;
  return;
}


