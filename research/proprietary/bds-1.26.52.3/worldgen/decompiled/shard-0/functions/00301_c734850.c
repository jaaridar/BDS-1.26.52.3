/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc834850 (ELF vaddr 0xc734850)
 * Label: caller-of-seed
 * Body:  [[0c834850, 0c8348c9]]
 * Ghidra: FUN_0c834850
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c834850(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  
  lVar1 = 0x58;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0x58) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_1 = &UNK_0f3d9080;
  *(undefined1 *)(param_1 + 0x75) = param_4;
  *(undefined2 *)((long)param_1 + 0x131) = 0x315;
  *(undefined4 *)((long)param_1 + 300) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x136) = 0xe;
  func_0x0c8348e0(param_1,&UNK_0c834a60,0,0);
  return;
}


