/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd02c040 (ELF vaddr 0xcf2c040)
 * Label: caller-of-seed
 * Body:  [[0d02c040, 0d02c0c8]]
 * Ghidra: FUN_0d02c040
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d02c040(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0xb8;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0xb8) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_1 = &UNK_0f4386d8;
  *(byte *)((long)param_1 + 0x133) = *(byte *)((long)param_1 + 0x133) | 8;
  func_0x0d02c0e0(param_1,&UNK_0d02c260,0,0);
  func_0x0d02c270(param_1,&UNK_0d02c3f0,0,0);
  func_0x0d02c400(param_1,&UNK_0d02c580,0,0);
  return;
}


