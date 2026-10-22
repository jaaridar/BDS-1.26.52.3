/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcf606a0 (ELF vaddr 0xce606a0)
 * Label: caller-of-seed
 * Body:  [[0cf606a0, 0cf6075a]]
 * Ghidra: FUN_0cf606a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0cf606a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0x40;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0x40) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_1 = &UNK_0f41d290;
  *(undefined1 *)((long)param_1 + 0x132) = 0xb;
  *(undefined4 *)((long)param_1 + 300) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(ushort *)((long)param_1 + 0x133) = *(ushort *)((long)param_1 + 0x133) & 0xe1ff | 0x800;
  param_1[0x21] = 0;
  func_0x0cf60770(param_1,&UNK_0cf608f0,0,0);
  func_0x0cf60b70(param_1,&UNK_0cf60cf0,0,0);
  func_0x0cf60ff0(param_1,&UNK_0cf61170,0,0);
  return;
}


