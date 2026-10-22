/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc670e80 (ELF vaddr 0xc570e80)
 * Label: caller-of-seed
 * Body:  [[0c670e80, 0c670f0b]]
 * Ghidra: FUN_0c670e80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c670e80(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0x68;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0x68) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_1 = &UNK_0f3ad8d0;
  *(undefined4 *)(param_1 + 0x29) = 0x3f7ae148;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) & 0xe9;
  *(undefined1 *)((long)param_1 + 0x132) = 3;
  func_0x0c670f20(param_1,&UNK_0c6710a0,0,0);
  func_0x0c671160(param_1,&UNK_0c6712e0,0,0);
  return;
}


