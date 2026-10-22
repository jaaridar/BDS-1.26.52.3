/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xce3ef20 (ELF vaddr 0xcd3ef20)
 * Label: JigsawBlockActor::vslot57
 * Body:  [[0ce3ef20, 0ce3ef78]]
 * Ghidra: wg_JigsawBlockActor__vslot57
 */


long * wg_JigsawBlockActor__vslot57(long *param_1,long *param_2)

{
  long lVar1;
  
  (**(code **)(*param_2 + 0x1a0))(param_2);
  if ((*(byte *)(param_2 + 0x18) & 1) == 0) {
    param_1[2] = param_2[0x1a];
    lVar1 = param_2[0x19];
    *param_1 = param_2[0x18];
    param_1[1] = lVar1;
  }
  else {
    func_0x0412e5e0(param_1,param_2[0x1a],param_2[0x19]);
  }
  return param_1;
}


