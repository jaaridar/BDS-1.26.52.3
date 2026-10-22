/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd060040 (ELF vaddr 0xcf60040)
 * Label: caller-of-seed
 * Body:  [[0d060040, 0d060120]]
 * Ghidra: FUN_0d060040
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d060040(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0xc0;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0xc0) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_1 = &UNK_0f443ee8;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined8 *)((long)param_1 + 0x194) = _DAT_014e9d10;
  *(undefined4 *)((long)param_1 + 0x19c) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) & 0xe9;
  param_1[0x21] = 0;
  *(undefined1 *)((long)param_1 + 0x132) = 8;
  param_1[0x25] = _DAT_014eac90;
  func_0x0d060140(param_1,&UNK_0d0602c0,0,0);
  func_0x0d060310(param_1,&UNK_0d060490,0,0);
  func_0x0d0605c0(param_1,&UNK_0d060740,0,0);
  return;
}


