/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc686620 (ELF vaddr 0xc586620)
 * Label: caller-of-seed
 * Body:  [[0c686620, 0c6866cf]]
 * Ghidra: FUN_0c686620
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c686620(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0xb8;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0xb8) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_1 = &UNK_0f3b3df8;
  param_1[0x31] = (ulong)_DAT_01198904;
  *(undefined4 *)(param_1 + 0x32) = 0x3e400000;
  *(undefined8 *)((long)param_1 + 0x194) = _DAT_014e3810;
  *(undefined4 *)((long)param_1 + 0x19c) = 0x3f500000;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) & 0xe9;
  func_0x0c6866f0(param_1,&UNK_0c686870,0,0);
  func_0x0c687290(param_1,&UNK_0c687410,0,0);
  return;
}


