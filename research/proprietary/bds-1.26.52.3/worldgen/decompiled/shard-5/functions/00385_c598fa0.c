/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc698fa0 (ELF vaddr 0xc598fa0)
 * Label: caller-of-seed
 * Body:  [[0c698fa0, 0c699028]]
 * Ghidra: FUN_0c698fa0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c698fa0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0xb8;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0xb8) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_1 = &UNK_0f3b9e00;
  *(undefined1 *)((long)param_1 + 0x131) = 0x37;
  func_0x0c699040(param_1,&UNK_0c6991c0,0,0);
  func_0x0c6991f0(param_1,&UNK_0c699370,0,0);
  func_0x0c69ade0(param_1,&UNK_0c69af60,0,0);
  return;
}


