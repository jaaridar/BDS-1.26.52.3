/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd02c900 (ELF vaddr 0xcf2c900)
 * Label: caller-of-seed
 * Body:  [[0d02c900, 0d02ca2e]]
 * Ghidra: FUN_0d02c900
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d02c900(undefined4 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6,undefined1 param_7,char param_8)

{
  long lVar1;
  
  lVar1 = 0xb8;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0xb8) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_2,param_3,param_4,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_2 = &UNK_0f3aa880;
  *(byte *)((long)param_2 + 0x133) = *(byte *)((long)param_2 + 0x133) | 0x14;
  func_0x0c661530(param_2,&UNK_0c6616b0,0,0);
  func_0x0c661760(param_2,&UNK_0c6618e0,0,0);
  *param_2 = &UNK_0f438f48;
  param_2[0x75] = param_5;
  *(undefined4 *)(param_2 + 0x76) = param_6;
  *(undefined1 *)((long)param_2 + 0x3b4) = param_7;
  *(undefined4 *)(param_2 + 0x77) = param_1;
  *(undefined1 *)((long)param_2 + 0x132) = 0xb;
  *(undefined1 *)((long)param_2 + 0x136) = 0;
  *(ushort *)((long)param_2 + 0x133) = *(ushort *)((long)param_2 + 0x133) & 0xe1ff | 0x800;
  func_0x0c645cd0(param_2 + 0x6d);
  func_0x0d02ca50(param_2,&UNK_0d02d040,0,1);
  func_0x0d02d220(param_2,0x461,0,0);
  if (param_8 != '\0') {
    lVar1 = func_0x0d02d3a0(param_2,&UNK_0d02d520,0,0);
    *(undefined1 *)(lVar1 + 0x60) = 0;
  }
  return;
}


