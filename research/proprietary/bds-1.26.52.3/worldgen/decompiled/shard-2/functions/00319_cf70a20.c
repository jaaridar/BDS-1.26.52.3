/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd070a20 (ELF vaddr 0xcf70a20)
 * Label: caller-of-seed
 * Body:  [[0d070a20, 0d070aff]]
 * Ghidra: FUN_0d070a20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d070a20(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0x40;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0x40) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_1 = &UNK_0f3be0b0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined8 *)((long)param_1 + 0x194) = _DAT_014e9d10;
  *(undefined4 *)((long)param_1 + 0x19c) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) & 0xe9;
  param_1[0x25] = _DAT_014e6320;
  param_1[0x21] = 0x8080;
  func_0x0c6a5c70(param_1,&UNK_0c6a5df0,0,0);
  *param_1 = &UNK_0f449ff8;
  *(undefined1 *)((long)param_1 + 0x132) = 0xb;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) | 8;
  func_0x0d070b20(param_1,&UNK_0d070ca0,0,1);
  return;
}


