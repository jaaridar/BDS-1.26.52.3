/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc83f340 (ELF vaddr 0xc73f340)
 * Label: caller-of-seed
 * Body:  [[0c83f340, 0c83f3fa]]
 * Ghidra: FUN_0c83f340
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c83f340(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0x40;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0x40) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_1 = &UNK_0f3da9f0;
  *(undefined1 *)((long)param_1 + 0x132) = 8;
  *(undefined4 *)((long)param_1 + 300) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(ushort *)((long)param_1 + 0x133) = *(ushort *)((long)param_1 + 0x133) & 0xe1ff | 0x800;
  param_1[0x21] = 0;
  func_0x0c83f410(param_1,&UNK_0c83f590,0,0);
  func_0x0c83fc90(param_1,&UNK_0c83fe10,0,0);
  func_0x0c8400c0(param_1,&UNK_0c840240,0,0);
  return;
}


