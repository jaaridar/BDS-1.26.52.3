/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc5cecf0
 * Label: JigsawBlock::vslot22
 * Body:  [[0c5cecf0, 0c5ced10]]
 * Ghidra: wg_JigsawBlock__vslot22
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_JigsawBlock__vslot22(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &UNK_0f3914f8;
  uVar1 = func_0x0412c1f0();
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return uVar1;
}


