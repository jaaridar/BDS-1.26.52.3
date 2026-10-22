/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xce3ef80 (ELF vaddr 0xcd3ef80)
 * Label: JigsawBlockActor::vslot14
 * Body:  [[0ce3ef80, 0ce3efda]]
 * Ghidra: wg_JigsawBlockActor__vslot14
 */


undefined8 * wg_JigsawBlockActor__vslot14(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  (**(code **)(*(long *)(param_2 + -0x30) + 0x1a0))(param_2 + -0x30);
  if ((*(byte *)(param_2 + 0x90) & 1) == 0) {
    param_1[2] = *(undefined8 *)(param_2 + 0xa0);
    uVar1 = *(undefined8 *)(param_2 + 0x98);
    *param_1 = *(undefined8 *)(param_2 + 0x90);
    param_1[1] = uVar1;
  }
  else {
    func_0x0412e5e0(param_1,*(undefined8 *)(param_2 + 0xa0),*(undefined8 *)(param_2 + 0x98));
  }
  return param_1;
}


