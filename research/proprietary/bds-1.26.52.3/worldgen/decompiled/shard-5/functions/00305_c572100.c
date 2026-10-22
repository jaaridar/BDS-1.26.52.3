/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc672100 (ELF vaddr 0xc572100)
 * Label: caller-of-seed
 * Body:  [[0c672100, 0c672168]]
 * Ghidra: FUN_0c672100
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c672100(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  
  lVar1 = 0xb8;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0xb8) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_1 = &UNK_0f3add08;
  *(undefined1 *)(param_1 + 0x75) = param_4;
  *(undefined1 *)((long)param_1 + 0x131) = 1;
  func_0x0c672180(param_1,&UNK_0c672300,0,0);
  return;
}


