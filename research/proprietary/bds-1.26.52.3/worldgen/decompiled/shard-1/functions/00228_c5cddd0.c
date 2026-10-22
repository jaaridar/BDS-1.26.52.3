/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc5cddd0
 * Label: JigsawBlock::vslot66
 * Body:  [[0c5cddd0, 0c5cddf2]]
 * Ghidra: wg_JigsawBlock__vslot66
 */


void wg_JigsawBlock__vslot66(byte *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long in_RAX;
  undefined8 *unaff_RBX;
  
  *param_1 = *param_1 ^ (byte)param_4;
  *(int *)(in_RAX + 0x40) = *(int *)(in_RAX + 0x40) + (int)in_RAX;
  *(undefined **)(in_RAX + 0x18) = &UNK_0f38d2a0;
  *unaff_RBX = param_4;
  unaff_RBX[1] = in_RAX;
  return;
}


