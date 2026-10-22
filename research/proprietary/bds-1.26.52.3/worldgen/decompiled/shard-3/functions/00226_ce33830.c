/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xce33830
 * Label: JigsawBlockActor::vslot1
 * Body:  [[0ce33830, 0ce33840] [0ce33850, 0ce33866]]
 * Ghidra: wg_JigsawBlockActor__vslot1
 */


void wg_JigsawBlockActor__vslot1(undefined8 param_1,long param_2,int *param_3,int param_4)

{
  uint in_EAX;
  int *piVar1;
  
  do {
    piVar1 = param_3;
    param_3 = piVar1 + 0x16;
  } while (*piVar1 != param_4);
  for (; *(long *)(piVar1 + 0xc) != param_2; piVar1 = *(int **)(piVar1 + 0xe)) {
  }
  piVar1[4] = piVar1[4] | in_EAX;
  return;
}


