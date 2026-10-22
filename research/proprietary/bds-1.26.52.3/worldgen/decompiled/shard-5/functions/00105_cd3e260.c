/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xce3e260 (ELF vaddr 0xcd3e260)
 * Label: JigsawBlockActor::vslot43
 * Body:  [[0ce3e260, 0ce3e29c]]
 * Ghidra: wg_JigsawBlockActor__vslot43
 */


void wg_JigsawBlockActor__vslot43(long *param_1,long *param_2)

{
  *(int *)(param_1 + 9) = (int)param_1[9] + 1;
  if ((*(byte *)((long)param_1 + 0x4c) & 1) != 0) {
    (**(code **)(*param_2 + 0x208))(param_2,param_1);
    (**(code **)(*param_1 + 0x218))(param_1,param_2);
    *(byte *)((long)param_1 + 0x4c) = *(byte *)((long)param_1 + 0x4c) & 0xfe;
  }
  return;
}


