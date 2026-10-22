/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc5cc510
 * Label: JigsawBlock::vslot83
 * Body:  [[0c5cc4c2, 0c5cc502] [0c5cc510, 0c5cc516]]
 * Ghidra: wg_JigsawBlock__vslot83
 */


void wg_JigsawBlock__vslot83(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *unaff_RBX;
  undefined8 *unaff_R14;
  undefined8 unaff_retaddr;
  
  *param_3 = unaff_retaddr;
  unaff_R14[1] = 0;
  unaff_R14[2] = 0;
  *unaff_R14 = &UNK_0f390178;
  unaff_R14[4] = 0;
  unaff_R14[5] = 0;
  unaff_R14[6] = 0;
  unaff_R14[7] = 0;
  unaff_R14[8] = 0;
  unaff_R14[9] = 0;
  unaff_R14[3] = &UNK_0f38f268;
  *unaff_RBX = unaff_R14 + 3;
  unaff_RBX[1] = unaff_R14;
  return;
}


