/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xce3e960 (ELF vaddr 0xcd3e960)
 * Label: JigsawBlockActor::vslot12
 * Body:  [[0ce3e960, 0ce3e96f]]
 * Ghidra: wg_JigsawBlockActor__vslot12
 */


void wg_JigsawBlockActor__vslot12(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x28) = param_2[2];
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x18) = *param_2;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  return;
}


