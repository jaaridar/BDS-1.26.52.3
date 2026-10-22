/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcf09870 (ELF vaddr 0xce09870)
 * Label: JigsawBlockActor::vslot20
 * Body:  [[0cf09870, 0cf098ab]]
 * Ghidra: wg_JigsawBlockActor__vslot20
 */


void wg_JigsawBlockActor__vslot20(long *param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined *puStack_18;
  
  puStack_18 = &UNK_0f087d20;
  uVar1 = (**(code **)(*param_3 + 0x150))(param_3);
  (**(code **)(*param_1 + 0x10))(param_1,uVar1,param_2,&puStack_18);
  return;
}


