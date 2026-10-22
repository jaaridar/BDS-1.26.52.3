/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc5cdd20
 * Label: JigsawBlock::vslot67
 * Body:  [[0c5cdd20, 0c5cdd55]]
 * Ghidra: wg_JigsawBlock__vslot67
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_JigsawBlock__vslot67(void)

{
  char *in_RAX;
  undefined8 *puVar1;
  char in_CF;
  
  *in_RAX = *in_RAX + (char)in_RAX + in_CF;
  *in_RAX = *in_RAX + (char)in_RAX;
  puVar1 = (undefined8 *)(**(code **)(in_RAX + 0x10))();
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &UNK_0f390d38;
    return;
  }
  func_0x0eec74c0(0x10,0);
  _DAT_00000000 = &UNK_0f390d38;
  return;
}


