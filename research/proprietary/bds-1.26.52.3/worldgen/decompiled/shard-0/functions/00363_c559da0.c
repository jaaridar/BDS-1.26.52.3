/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc659da0 (ELF vaddr 0xc559da0)
 * Label: caller-of-seed
 * Body:  [[0c659da0, 0c659e36]]
 * Ghidra: FUN_0c659da0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c659da0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0xc0;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0xc0) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_1 = &UNK_0f3a73c8;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(ushort *)((long)param_1 + 0x133) = *(ushort *)((long)param_1 + 0x133) & 0xe1ff | 0x800;
  param_1[0x21] = 0;
  *(undefined1 *)((long)param_1 + 0x132) = 8;
  *(undefined4 *)((long)param_1 + 300) = 0x3f800000;
  func_0x0c659e50(param_1,&UNK_0c659fd0,0,0);
  return;
}


