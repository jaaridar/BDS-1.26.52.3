/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc682cd0 (ELF vaddr 0xc582cd0)
 * Label: caller-of-seed
 * Body:  [[0c682cd0, 0c682dff]]
 * Ghidra: FUN_0c682cd0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c682cd0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = 0x40;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0x40) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_1 = &UNK_0f3acf88;
  param_1[0x31] = (ulong)_DAT_01198788;
  *(undefined4 *)(param_1 + 0x32) = 0x3e19999a;
  *(undefined8 *)((long)param_1 + 0x194) = _DAT_014e1370;
  *(undefined4 *)((long)param_1 + 0x19c) = 0x3f333333;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) & 0xe9;
  *(undefined1 *)((long)param_1 + 0x132) = 0xb;
  param_1[0x21] = 0;
  *(undefined4 *)((long)param_1 + 300) = 0x3f800000;
  func_0x0c66ed20(param_1,0x429,0,0);
  *param_1 = &UNK_0f3b27d0;
  uVar2 = (ulong)_DAT_01198aec;
  param_1[0x75] = uVar2;
  *(undefined4 *)(param_1 + 0x76) = 0x3e99999a;
  *(undefined8 *)((long)param_1 + 0x3b4) = _DAT_014e3040;
  *(undefined4 *)((long)param_1 + 0x3bc) = 0x3f333333;
  param_1[0x31] = uVar2;
  *(undefined4 *)(param_1 + 0x32) = 0x3e99999a;
  *(undefined8 *)((long)param_1 + 0x194) = _DAT_014e1370;
  *(undefined4 *)((long)param_1 + 0x19c) = 0x3f333333;
  func_0x0c682e20(param_1,&UNK_0c682fa0,0,0);
  return;
}



/* ---- referenced strings ----
 * 0x14e3040  333?
 */
