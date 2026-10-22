/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc5cc4d0
 * Label: JigsawBlock::vslot121
 * Body:  [[0c5cc4d0, 0c5cc502]]
 * Ghidra: wg_JigsawBlock__vslot121
 */


void wg_JigsawBlock__vslot121(undefined8 param_1)

{
  undefined8 *in_RAX;
  undefined8 in_RCX;
  undefined8 *unaff_RBX;
  undefined8 in_XMM0_Qb;
  
  *in_RAX = in_RCX;
  in_RAX[4] = param_1;
  in_RAX[5] = in_XMM0_Qb;
  in_RAX[6] = param_1;
  in_RAX[7] = in_XMM0_Qb;
  in_RAX[8] = param_1;
  in_RAX[9] = in_XMM0_Qb;
  in_RAX[3] = &UNK_0f38f268;
  *unaff_RBX = in_RAX + 3;
  unaff_RBX[1] = in_RAX;
  return;
}


