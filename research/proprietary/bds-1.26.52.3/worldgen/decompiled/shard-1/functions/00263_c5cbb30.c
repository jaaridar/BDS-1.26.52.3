/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6cbb30 (ELF vaddr 0xc5cbb30)
 * Label: JigsawBlock::vslot14
 * Body:  [[0c6cbb30, 0c6cbb72]]
 * Ghidra: wg_JigsawBlock__vslot14
 */


undefined8 wg_JigsawBlock__vslot14(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = func_0x0c8452b0(*(undefined8 *)(param_1 + 0x200));
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = func_0x0cd4eb50(lVar1,param_2);
  }
  return CONCAT44((float)(int)((ulong)*param_2 >> 0x20) + (float)((ulong)uVar2 >> 0x20),
                  (float)(int)*param_2 + (float)uVar2);
}


