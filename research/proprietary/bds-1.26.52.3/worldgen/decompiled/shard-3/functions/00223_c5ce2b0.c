/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc5ce2b0
 * Label: JigsawBlock::vslot116
 * Body:  [[0c5ce2b0, 0c5ce2da]]
 * Ghidra: wg_JigsawBlock__vslot116
 */


void wg_JigsawBlock__vslot116
               (undefined8 param_1,byte *param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  long in_RAX;
  undefined8 *unaff_RBX;
  undefined8 in_XMM0_Qb;
  
  *param_2 = *param_2 ^ (byte)param_5;
  *(int *)(in_RAX + 0x40) = *(int *)(in_RAX + 0x40) + (int)in_RAX;
  *(undefined8 *)(in_RAX + 0x50) = param_1;
  *(undefined8 *)(in_RAX + 0x58) = in_XMM0_Qb;
  *(undefined8 *)(in_RAX + 0x60) = param_1;
  *(undefined8 *)(in_RAX + 0x68) = in_XMM0_Qb;
  *(undefined **)(in_RAX + 0x18) = &UNK_0f38e8f0;
  *unaff_RBX = param_5;
  unaff_RBX[1] = in_RAX;
  return;
}


