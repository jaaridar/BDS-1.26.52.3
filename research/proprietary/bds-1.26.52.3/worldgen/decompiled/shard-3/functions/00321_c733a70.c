/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc833a70 (ELF vaddr 0xc733a70)
 * Label: caller-of-seed
 * Body:  [[0c833a70, 0c833b25]]
 * Ghidra: FUN_0c833a70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c833a70(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  
  lVar1 = 0xc0;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0xc0) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_1 = &UNK_0f3d8c38;
  *(undefined1 *)(param_1 + 0x75) = param_4;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) & 0xe9;
  param_1[0x21] = 0;
  *(undefined1 *)((long)param_1 + 0x132) = 3;
  param_1[0x25] = _DAT_014e9ed0;
  func_0x0c833b40(param_1,&UNK_0c833cc0,0,0);
  func_0x0c833f60(param_1,0x429,0,0);
  func_0x0c8340e0(param_1,&UNK_0c834260,0,0);
  return;
}


