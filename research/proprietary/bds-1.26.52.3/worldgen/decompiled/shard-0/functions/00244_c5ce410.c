/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc5ce410
 * Label: JigsawBlock::vslot117
 * Body:  [[0c5ce410, 0c5ce486]]
 * Ghidra: wg_JigsawBlock__vslot117
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * wg_JigsawBlock__vslot117(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
  if (puVar1 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x50,0);
  }
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &UNK_0f3910e8;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[3] = &UNK_0f38d420;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  return param_1;
}


