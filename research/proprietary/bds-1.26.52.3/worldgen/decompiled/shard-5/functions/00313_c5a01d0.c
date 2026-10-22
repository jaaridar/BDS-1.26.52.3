/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6a01d0 (ELF vaddr 0xc5a01d0)
 * Label: caller-of-seed
 * Body:  [[0c6a01d0, 0c6a025b]]
 * Ghidra: FUN_0c6a01d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c6a01d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  long lVar1;
  
  lVar1 = 0xb8;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0xb8) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_1 = &UNK_0f3baf10;
  *(undefined4 *)(param_1 + 0x75) = param_4;
  *(undefined4 *)((long)param_1 + 0x3ac) = param_5;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) & 0xe9;
  param_1[0x21] = 0;
  *(undefined1 *)((long)param_1 + 0x132) = 0xb;
  func_0x0c6a0270(param_1,&UNK_0c6a03f0,0,0);
  return;
}


