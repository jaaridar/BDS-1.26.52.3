/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc5ce670
 * Label: JigsawBlock::vslot63
 * Body:  [[0c5ce670, 0c5ce690]]
 * Ghidra: wg_JigsawBlock__vslot63
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_JigsawBlock__vslot63(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &UNK_0f3911b8;
  uVar1 = func_0x0412c1f0();
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return uVar1;
}


