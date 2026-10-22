/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xa22a7b0
 * Label: string:PlaceJigsawError
 * Body:  [[0a22a7b0, 0a22a7ba]]
 * Ghidra: FUN_0a22a7b0
 */


void FUN_0a22a7b0(int param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  ulong in_RAX;
  code *UNRECOVERED_JUMPTABLE;
  long unaff_RBP;
  bool in_SF;
  
  UNRECOVERED_JUMPTABLE = (code *)(in_RAX & 0xffffffff);
  if (in_SF) {
    UNRECOVERED_JUMPTABLE = (code *)(ulong)*(uint *)(unaff_RBP + 0x480574c0);
  }
                    /* WARNING: Could not recover jumptable at 0x0a22a7b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1 + param_4);
  return;
}


