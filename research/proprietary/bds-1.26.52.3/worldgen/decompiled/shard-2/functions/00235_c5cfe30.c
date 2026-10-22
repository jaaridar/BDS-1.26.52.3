/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc5cfe30
 * Label: JigsawBlock::vslot127
 * Body:  [[0c5cfe30, 0c5cfe86]]
 * Ghidra: wg_JigsawBlock__vslot127
 */


void wg_JigsawBlock__vslot127(void)

{
  undefined8 *in_RAX;
  undefined8 *unaff_RBX;
  bool in_ZF;
  
  if (in_ZF) {
    func_0x0eec74c0(0x50,0);
  }
  in_RAX[1] = 0;
  in_RAX[2] = 0;
  *in_RAX = &UNK_0f391de8;
  in_RAX[4] = 0;
  in_RAX[5] = 0;
  in_RAX[6] = 0;
  in_RAX[7] = 0;
  in_RAX[8] = 0;
  in_RAX[9] = 0;
  in_RAX[3] = &UNK_0f38dbd0;
  *unaff_RBX = in_RAX + 3;
  unaff_RBX[1] = in_RAX;
  return;
}


