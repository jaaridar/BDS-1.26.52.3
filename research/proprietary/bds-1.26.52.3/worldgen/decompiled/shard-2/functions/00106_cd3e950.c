/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xce3e950 (ELF vaddr 0xcd3e950)
 * Label: JigsawBlockActor::vslot40
 * Body:  [[0ce3e950, 0ce3e95f]]
 * Ghidra: wg_JigsawBlockActor__vslot40
 */


void wg_JigsawBlockActor__vslot40(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x60) = param_2[2];
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x50) = *param_2;
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  return;
}


