/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd04cdc0 (ELF vaddr 0xcf4cdc0)
 * Label: caller-of-seed
 * Body:  [[0d04cdc0, 0d04ce89]]
 * Ghidra: FUN_0d04cdc0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d04cdc0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0x40;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0x40) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_1 = &UNK_0f43e860;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) & 0xe9;
  param_1[0x21] = 0;
  *(undefined1 *)((long)param_1 + 0x132) = 8;
  *(undefined4 *)((long)param_1 + 300) = 0x3f800000;
  param_1[0x31] = (ulong)_DAT_01198a9c;
  *(undefined4 *)(param_1 + 0x32) = 0x3dcccccd;
  *(undefined8 *)((long)param_1 + 0x194) = _DAT_014e1380;
  *(undefined4 *)((long)param_1 + 0x19c) = 0x3f666666;
  func_0x0d04cea0(param_1,&UNK_0d04d020,0,0);
  func_0x0d04d090(param_1,&UNK_0d04d210,0,0);
  return;
}


