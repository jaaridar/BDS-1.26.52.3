/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6d9890 (ELF vaddr 0xc5d9890)
 * Label: caller-of-seed
 * Body:  [[0c6d9890, 0c6d9936]]
 * Ghidra: FUN_0c6d9890
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c6d9890(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  
  lVar1 = 0x78;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0x78) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_1 = &UNK_0f3c79e0;
  *(undefined1 *)(param_1 + 0x75) = param_4;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(ushort *)((long)param_1 + 0x133) = *(ushort *)((long)param_1 + 0x133) & 0xe9ff | 0x400;
  param_1[0x21] = &UNK_08400000;
  *(undefined4 *)((long)param_1 + 300) = 0x3f000000;
  func_0x0c6d9950(param_1,&UNK_0c6d9ad0,0,0);
  func_0x0c6d9b40(param_1,&UNK_0c6d9cc0,0,0);
  return;
}


