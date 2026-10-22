/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xce70000
 * Label: JigsawBlockActor::vslot4
 * Body:  [[0ce70000, 0ce70003] [0ce7000b, 0ce70022]]
 * Ghidra: wg_JigsawBlockActor__vslot4
 */


void wg_JigsawBlockActor__vslot4(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 *in_RAX;
  
  *in_RAX = param_3;
  *(undefined8 *)(in_RAX + 10) = param_2;
  *(undefined8 *)(in_RAX + 0xc) = 0;
  *(undefined **)(in_RAX + 0xe) = &UNK_0ce6fb10;
  return;
}


