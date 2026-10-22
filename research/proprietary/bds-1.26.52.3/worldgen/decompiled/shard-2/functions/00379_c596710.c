/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc696710 (ELF vaddr 0xc596710)
 * Label: caller-of-seed
 * Body:  [[0c696710, 0c69688c]]
 * Ghidra: FUN_0c696710
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c696710(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = 0xb8;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0xb8) {
    lVar2 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar2));
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
  *param_1 = &UNK_0f3b90d8;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  if (param_1 + 0x75 != param_4) {
    if ((*(byte *)(param_4 + 1) & 1) == 0) {
      param_1[0x78] = param_4[3];
      uVar1 = param_4[2];
      param_1[0x76] = param_4[1];
      param_1[0x77] = uVar1;
    }
    else {
      FUN_04885070(param_1 + 0x76,param_4[3],param_4[2]);
    }
  }
  param_1[0x75] = *param_4;
  param_1[0x31] = (ulong)_DAT_01198460;
  *(undefined4 *)(param_1 + 0x32) = 0x3e4ccccc;
  *(undefined8 *)((long)param_1 + 0x194) = _DAT_014e4260;
  *(undefined4 *)((long)param_1 + 0x19c) = 0x3f4ccccd;
  *(undefined1 *)((long)param_1 + 0x132) = 8;
  *(undefined4 *)((long)param_1 + 300) = 0x3f4ccccd;
  func_0x0c6968e0(param_1,&UNK_0c696a60,0,0);
  return;
}


