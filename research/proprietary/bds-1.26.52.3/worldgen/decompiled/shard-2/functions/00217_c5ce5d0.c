/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc5ce5d0
 * Label: JigsawBlock::vslot51
 * Body:  [[0c5ce5d0, 0c5ce5ef] [0c5ce5f1, 0c5ce60f] [0c5ce613, 0c5ce626]]
 * Ghidra: wg_JigsawBlock__vslot51
 */


void wg_JigsawBlock__vslot51(void)

{
  undefined8 *in_RAX;
  undefined8 *unaff_RBX;
  bool in_ZF;
  
  if (in_ZF) {
    func_0x0eec74c0(0x50,0);
  }
  in_RAX[1] = 0;
  in_RAX[2] = 0;
  *in_RAX = &UNK_0f3911b8;
  in_RAX[4] = 0;
  in_RAX[5] = 0;
  in_RAX[6] = 0;
  in_RAX[7] = 0;
  in_RAX[8] = 0;
  in_RAX[9] = 0;
  in_RAX[3] = &UNK_0f38d498;
  *unaff_RBX = in_RAX + 3;
  unaff_RBX[1] = in_RAX;
  return;
}


