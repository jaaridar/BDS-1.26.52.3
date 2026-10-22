/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc5ce1f0
 * Label: JigsawBlock::vslot48
 * Body:  [[0c5ce1f0, 0c5ce235]]
 * Ghidra: wg_JigsawBlock__vslot48
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_JigsawBlock__vslot48(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &UNK_0f390fa8;
    return;
  }
  func_0x0eec74c0(0x10,0);
  _DAT_00000000 = &UNK_0f390fa8;
  return;
}


