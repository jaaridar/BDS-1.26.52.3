/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd01a660 (ELF vaddr 0xcf1a660)
 * Label: caller-of-seed
 * Body:  [[0d01a660, 0d01a741]]
 * Ghidra: FUN_0d01a660
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d01a660(undefined8 *param_1)

{
  func_0x0c6c7010();
  *param_1 = &UNK_0f434b10;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(ushort *)((long)param_1 + 0x133) = *(ushort *)((long)param_1 + 0x133) & 0xe1ff | 0x800;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined8 *)((long)param_1 + 0x194) = _DAT_014eac70;
  *(undefined4 *)((long)param_1 + 0x19c) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 300) = 0x3f4ccccd;
  *(undefined1 *)((long)param_1 + 0x131) = 0x3b;
  param_1[0x21] = 0;
  func_0x0d01a760(param_1,&UNK_0d01a8e0,0,0);
  func_0x0d01bd70(param_1,&UNK_0d01bef0,0,0);
  func_0x0d01bf00(param_1,&UNK_0d01c080,0,0);
  return;
}


