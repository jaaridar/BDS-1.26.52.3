/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc82bff0 (ELF vaddr 0xc72bff0)
 * Label: caller-of-seed
 * Body:  [[0c82bff0, 0c82c0c8]]
 * Ghidra: FUN_0c82bff0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c82bff0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  func_0x0c6c7010();
  *param_1 = &UNK_0f3d7f40;
  *(undefined1 *)(param_1 + 0x75) = param_4;
  *(undefined1 *)((long)param_1 + 0x131) = 0x1c;
  param_1[0x21] = 0x4000;
  param_1[0x31] = (ulong)_DAT_01198630;
  *(undefined4 *)(param_1 + 0x32) = 0x3e800000;
  *(undefined8 *)((long)param_1 + 0x194) = _DAT_014e4310;
  *(undefined4 *)((long)param_1 + 0x19c) = 0x3f400000;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(ushort *)((long)param_1 + 0x133) = *(ushort *)((long)param_1 + 0x133) & 0xe1ff | 0x800;
  *(undefined4 *)((long)param_1 + 300) = 0x3f4ccccd;
  func_0x0c82c0e0(param_1,&UNK_0c82c260,0,0);
  func_0x0c82c460(param_1,&UNK_0c82c5e0,0,0);
  return;
}


