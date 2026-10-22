/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc5ce200
 * Label: JigsawBlock::vslot49
 * Body:  [[0c5ce200, 0c5ce235]]
 * Ghidra: wg_JigsawBlock__vslot49
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_JigsawBlock__vslot49(void)

{
  char *in_RAX;
  undefined8 *puVar1;
  char in_CF;
  
  *in_RAX = *in_RAX + (char)in_RAX + in_CF;
  *in_RAX = *in_RAX + (char)in_RAX;
  puVar1 = (undefined8 *)(**(code **)(in_RAX + 0x10))();
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &UNK_0f390fa8;
    return;
  }
  func_0x0eec74c0(0x10,0);
  _DAT_00000000 = &UNK_0f390fa8;
  return;
}


