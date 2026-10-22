/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc688ca0 (ELF vaddr 0xc588ca0)
 * Label: caller-of-seed
 * Body:  [[0c688ca0, 0c688d63]]
 * Ghidra: FUN_0c688ca0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c688ca0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0x80;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0x80) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_1 = &UNK_0f3b5320;
  *(undefined2 *)((long)param_1 + 0x136) = 0xf00;
  *(ushort *)((long)param_1 + 0x133) = *(ushort *)((long)param_1 + 0x133) & 0xe9ff | 0x400;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined8 *)((long)param_1 + 0x194) = _DAT_014e9720;
  *(undefined4 *)((long)param_1 + 0x19c) = 0x3f800000;
  param_1[0x21] = 0x400;
  *(undefined2 *)((long)param_1 + 0x131) = 0xd16;
  lVar1 = func_0x0c688d80(param_1,&UNK_0c688f00,0,0);
  *(undefined1 *)(lVar1 + 0x60) = 0;
  return;
}


