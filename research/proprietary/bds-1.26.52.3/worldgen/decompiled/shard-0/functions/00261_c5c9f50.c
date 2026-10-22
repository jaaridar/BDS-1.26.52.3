/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6c9f50 (ELF vaddr 0xc5c9f50)
 * Label: JigsawBlock::vslot5
 * Body:  [[0c6c9f50, 0c6c9fad]]
 * Ghidra: wg_JigsawBlock__vslot5
 */


bool wg_JigsawBlock__vslot5(long *param_1,float *param_2)

{
  bool bVar1;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  bVar1 = false;
  (**(code **)(*param_1 + 0x20))(&uStack_28,param_1);
  *(undefined8 *)(param_2 + 4) = uStack_18;
  *(undefined8 *)param_2 = uStack_28;
  *(undefined8 *)(param_2 + 2) = uStack_20;
  if (*param_2 < param_2[3]) {
    if (param_2[4] <= param_2[1]) {
      bVar1 = false;
    }
    else {
      bVar1 = param_2[2] < param_2[5];
    }
  }
  return bVar1;
}


