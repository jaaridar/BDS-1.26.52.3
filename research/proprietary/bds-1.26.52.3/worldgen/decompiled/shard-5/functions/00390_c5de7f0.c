/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6de7f0 (ELF vaddr 0xc5de7f0)
 * Label: caller-of-seed
 * Body:  [[0c6de7f0, 0c6de8a3]]
 * Ghidra: FUN_0c6de7f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c6de7f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0xc0;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0xc0) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_1 = &UNK_0f3dc9f8;
  *(undefined1 *)((long)param_1 + 0x132) = 5;
  *(undefined4 *)((long)param_1 + 300) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(ushort *)((long)param_1 + 0x133) = *(ushort *)((long)param_1 + 0x133) & 0xe9ff | 0x400;
  func_0x0c8569c0(param_1,&UNK_0c856b40,0,0);
  *param_1 = &UNK_0f3c9348;
  param_1[0x21] = 0;
  func_0x0c6de8c0(param_1,&UNK_0c6dea40,0,0);
  return;
}


