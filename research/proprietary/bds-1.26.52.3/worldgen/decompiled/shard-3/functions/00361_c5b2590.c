/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6b2590 (ELF vaddr 0xc5b2590)
 * Label: caller-of-seed
 * Body:  [[0c6b2590, 0c6b2602]]
 * Ghidra: FUN_0c6b2590
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c6b2590(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0xb8;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0xb8) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_1 = &UNK_0f3c02c0;
  *(undefined2 *)((long)param_1 + 0x131) = 0xb22;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) & 0xe9;
  func_0x0c6b2620(param_1,&UNK_0c6b27a0,0,0);
  return;
}


