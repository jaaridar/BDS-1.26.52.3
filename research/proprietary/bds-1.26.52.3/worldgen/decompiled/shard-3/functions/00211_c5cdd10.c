/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc5cdd10
 * Label: JigsawBlock::vslot68
 * Body:  [[0c5cdd10, 0c5cdd55]]
 * Ghidra: wg_JigsawBlock__vslot68
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_JigsawBlock__vslot68(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &UNK_0f390d38;
    return;
  }
  func_0x0eec74c0(0x10,0);
  _DAT_00000000 = &UNK_0f390d38;
  return;
}


