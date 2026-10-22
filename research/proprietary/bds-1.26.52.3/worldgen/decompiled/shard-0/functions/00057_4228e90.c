/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4228e90
 * Label: string:WebRTC-Bwe-LimitPacingFactorByUpperLinkCapacityEstimate
 * Body:  [[04228e90, 04228e98]]
 * Ghidra: FUN_04228e90
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_04228e90(undefined1 *param_1,undefined8 param_2,undefined2 param_3)

{
  undefined1 uVar1;
  int *in_RAX;
  
  *in_RAX = *in_RAX + -0x7df10000;
  uVar1 = in(param_3);
  *param_1 = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


