/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6d3270 (ELF vaddr 0xc5d3270)
 * Label: caller-of-seed
 * Body:  [[0c6d3270, 0c6d3320]]
 * Ghidra: FUN_0c6d3270
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c6d3270(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0x90;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0x90) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_1 = &UNK_0f3c68e8;
  *(undefined1 *)(param_1 + 0x75) = 0;
  *(undefined1 *)((long)param_1 + 0x132) = 8;
  param_1[0x21] = 0x1000000;
  *(undefined4 *)((long)param_1 + 300) = 0x3f666666;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(ushort *)((long)param_1 + 0x133) = *(ushort *)((long)param_1 + 0x133) & 0xe1f7 | 0x808;
  func_0x0c6d3340(param_1,&UNK_0c6d34c0,0,0);
  func_0x0c6d3670(param_1,&UNK_0c6d37f0,0,0);
  return;
}


