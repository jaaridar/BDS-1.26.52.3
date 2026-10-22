/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd040000 (ELF vaddr 0xcf40000)
 * Label: caller-of-seed
 * Body:  [[0d040000, 0d0400e6]]
 * Ghidra: FUN_0d040000
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d040000(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0xc0;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0xc0) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_1 = &UNK_0f3aa880;
  *(byte *)((long)param_1 + 0x133) = *(byte *)((long)param_1 + 0x133) | 0x14;
  func_0x0c661530(param_1,&UNK_0c6616b0,0,0);
  func_0x0c661760(param_1,&UNK_0c6618e0,0,0);
  *param_1 = &UNK_0f43cdb8;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(undefined1 *)((long)param_1 + 0x132) = 0xb;
  *(undefined4 *)((long)param_1 + 300) = 0x3f800000;
  *(ushort *)((long)param_1 + 0x133) = *(ushort *)((long)param_1 + 0x133) & 0xe1ff | 0x800;
  param_1[0x21] = &UNK_02020000;
  func_0x0d040100(param_1,&UNK_0d040280,0,1);
  func_0x0d040350(param_1,&UNK_0d0404d0,0,1);
  return;
}


