/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc5cf370
 * Label: JigsawBlock::vslot92
 * Body:  [[0c5cf370, 0c5cf37f] [0c5cf381, 0c5cf390]]
 * Ghidra: wg_JigsawBlock__vslot92
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_JigsawBlock__vslot92(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &UNK_0f391838;
  uVar1 = func_0x0412c1f0();
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return uVar1;
}


