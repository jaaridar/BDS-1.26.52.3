/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4942800
 * Label: string:/mnt/vss/_work/1/s/handheld/src-vanilla/vanilla_shared/src/c
 * Body:  [[04942800, 04942807] [04942872, 04942876] [0494287f, 049428a3]]
 * Ghidra: FUN_04942800
 */


/* WARNING: Instruction at (ram,0x04942806) overlaps instruction at (ram,0x04942805)
    */

void FUN_04942800(void)

{
  code *pcVar1;
  undefined8 *unaff_RBX;
  undefined8 *unaff_R14;
  bool in_ZF;
  bool in_SF;
  char in_OF;
  longdouble in_ST0;
  
  *(short *)((long)unaff_RBX + -0x17) = (short)ROUND(in_ST0);
  if (!in_SF) {
    for (; unaff_R14 != unaff_RBX; unaff_R14 = unaff_R14 + 2) {
      (**(code **)(*(long *)*unaff_R14 + 0x20))();
    }
    return;
  }
  if (in_ZF || (bool)in_OF != in_SF) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


