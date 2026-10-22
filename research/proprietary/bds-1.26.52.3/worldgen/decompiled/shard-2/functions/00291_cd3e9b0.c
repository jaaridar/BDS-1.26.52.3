/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xce3e9b0 (ELF vaddr 0xcd3e9b0)
 * Label: JigsawBlockActor::vslot4
 * Body:  [[0ce3e9b0, 0ce3e9f1]]
 * Ghidra: wg_JigsawBlockActor__vslot4
 */


void wg_JigsawBlockActor__vslot4(long param_1,long *param_2)

{
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    (**(code **)(*param_2 + 0x208))(param_2,param_1 + -0x40);
    (**(code **)(*(long *)(param_1 + -0x40) + 0x218))(param_1 + -0x40,param_2);
    *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0xfe;
  }
  return;
}


