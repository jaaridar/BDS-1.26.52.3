/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc65ba00 (ELF vaddr 0xc55ba00)
 * Label: callee-of:0x5a1f120
 * Body:  [[0c65ba00, 0c65bb25]]
 * Ghidra: FUN_0c65ba00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c65ba00(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined4 param_10)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = 0x38;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0x38) {
    lVar2 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar2));
  *param_1 = &UNK_0f3a8ee0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  if (param_1 + 0x76 != param_4) {
    if ((*(byte *)(param_4 + 1) & 1) == 0) {
      param_1[0x79] = param_4[3];
      uVar1 = param_4[2];
      param_1[0x77] = param_4[1];
      param_1[0x78] = uVar1;
    }
    else {
      func_0x04885070(param_1 + 0x77,param_4[3],param_4[2]);
    }
  }
  param_1[0x76] = *param_4;
  *(undefined4 *)(param_1 + 0x7b) = (undefined4)param_7;
  *(undefined4 *)((long)param_1 + 0x3dc) = param_7._4_4_;
  *(undefined4 *)(param_1 + 0x7c) = (undefined4)param_8;
  *(undefined4 *)((long)param_1 + 0x3e4) = param_8._4_4_;
  *(undefined4 *)((long)param_1 + 0x3e4) = param_8._4_4_;
  *(undefined4 *)(param_1 + 0x7d) = (undefined4)param_9;
  *(undefined4 *)((long)param_1 + 0x3ec) = param_9._4_4_;
  *(undefined4 *)(param_1 + 0x7e) = param_10;
  *(undefined1 *)(param_1 + 0x75) = 0;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(ushort *)((long)param_1 + 0x133) = *(ushort *)((long)param_1 + 0x133) & 0xe9ff | 0x400;
  *(undefined1 *)((long)param_1 + 0x132) = 10;
  *(undefined4 *)((long)param_1 + 300) = 0x3f000000;
  *(byte *)(param_1 + 0x21) = *(byte *)(param_1 + 0x21) | 0x20;
  FUN_0c6cf060(param_1,0xf70ba08);
  func_0x0c65bb60(param_1,&UNK_0c65bce0,0,0);
  return;
}


