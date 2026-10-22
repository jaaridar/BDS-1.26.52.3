/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc5d03c0
 * Label: JigsawBlock::vslot114
 * Body:  [[0c5d03c0, 0c5d03d1]]
 * Ghidra: wg_JigsawBlock__vslot114
 */


void wg_JigsawBlock__vslot114(long param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  char *pcVar1;
  code *pcVar2;
  char in_AL;
  undefined1 in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  long unaff_RBX;
  longdouble in_ST0;
  
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + -0x77);
  *pcVar1 = *pcVar1 + param_4;
  *(short *)(unaff_RBX + -0x17) = (short)ROUND(in_ST0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)(param_1 + 4,0x50bef7b5);
  return;
}


