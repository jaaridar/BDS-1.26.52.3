/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6b8360 (ELF vaddr 0xc5b8360)
 * Label: caller-of-seed
 * Body:  [[0c6b8360, 0c6b83f6]]
 * Ghidra: FUN_0c6b8360
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c6b8360(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0x40;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0x40) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_1 = &UNK_0f3c2500;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) & 0xe9;
  *(undefined1 *)((long)param_1 + 0x132) = 7;
  *(undefined4 *)((long)param_1 + 300) = 0x3f800000;
  param_1[0x21] = 0;
  func_0x0c6b8410(param_1,&UNK_0c6b8590,0,0);
  func_0x0c6b8600(param_1,&UNK_0c6b8780,0,0);
  return;
}


