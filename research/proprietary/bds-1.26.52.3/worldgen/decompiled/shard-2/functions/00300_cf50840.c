/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd050840 (ELF vaddr 0xcf50840)
 * Label: caller-of-seed
 * Body:  [[0d050840, 0d0508ea]]
 * Ghidra: FUN_0d050840
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d050840(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  
  lVar1 = 0xb8;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0xb8) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_1 = &UNK_0f43f9a0;
  *(undefined4 *)(param_1 + 0x75) = param_4;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(ushort *)((long)param_1 + 0x133) = *(ushort *)((long)param_1 + 0x133) & 0xe9ff | 0x400;
  *(byte *)((long)param_1 + 0x10a) = *(byte *)((long)param_1 + 0x10a) | 8;
  *(undefined1 *)((long)param_1 + 0x131) = 0x12;
  *(undefined4 *)((long)param_1 + 300) = 0x3f4ccccd;
  func_0x0d050900(param_1,&UNK_0d050a80,0,0);
  func_0x0d050aa0(param_1,&UNK_0d050c20,0,0);
  return;
}


