/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe3afef0 (ELF vaddr 0xe2afef0)
 * Label: callee-of:0xe1d0880
 * Body:  [[0e3afef0, 0e3b0109]]
 * Ghidra: FUN_0e3afef0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e3afef0(undefined2 *param_1,long *param_2,long param_3,ulong param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  char *pcVar5;
  uint uVar6;
  undefined8 uStack_38;
  long lStack_30;
  
  if (DAT_0f71f418 == '\0') {
    iVar1 = func_0x04108328(&DAT_0f71f418);
    if (iVar1 != 0) {
      func_0x0d348740(0xf71f400);
      func_0x0410844d(&DAT_0f71f418);
    }
  }
  uVar2 = (ulong)((uint)param_4 & 3);
  uVar6 = 0x811c9dc5;
  uVar4 = 0;
  do {
    uVar6 = ((int)*(char *)(param_3 + 3 + uVar4) ^
            ((int)*(char *)(param_3 + 2 + uVar4) ^
            ((int)*(char *)(param_3 + 1 + uVar4) ^
            ((int)*(char *)(param_3 + uVar4) ^ uVar6) * 0x1000193) * 0x1000193) * 0x1000193) *
            0x1000193;
    uVar4 = uVar4 + 4;
  } while (((uint)param_4 & 0x3c) != uVar4);
  if (uVar2 != 0) {
    pcVar5 = (char *)(uVar4 + param_3);
    do {
      uVar6 = ((int)*pcVar5 ^ uVar6) * 0x1000193;
      pcVar5 = pcVar5 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  *(undefined4 *)(param_2 + 5) = 1;
  *(uint *)((long)param_2 + 0x2c) = uVar6;
  lVar3 = *param_2;
  uStack_38 = func_0x0d34a5c0(lVar3 + 0x18);
  lStack_30 = lVar3 + 0x18;
  func_0x0ed621a0(&uStack_38,*(undefined4 *)((long)param_2 + 0x2c));
  *param_1 = 1;
  *(long **)(param_1 + 4) = param_2 + 1;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)((long)param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  if (param_4 < 0x17) {
    *(char *)(param_1 + 0x20) = (char)param_4 * '\x02';
    lVar3 = (long)param_1 + 0x41;
  }
  else {
    uVar2 = 0x1a;
    if ((param_4 | 7) != 0x17) {
      uVar2 = (param_4 | 7) + 1;
    }
    lVar3 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar2);
    if (lVar3 == 0) {
      func_0x0eec74c0(uVar2,0);
    }
    *(long *)(param_1 + 0x28) = lVar3;
    *(ulong *)(param_1 + 0x20) = uVar2 | 1;
    *(ulong *)(param_1 + 0x24) = param_4;
  }
  memcpy(lVar3,param_3,param_4);
  *(undefined1 *)(lVar3 + param_4) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x3f600000;
  func_0x048afb10(param_1 + 0x2c,8);
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  param_1[0x60] = 0xff00;
  *(undefined1 *)(param_1 + 0x62) = 0;
  *(undefined1 *)(param_1 + 100) = 0;
  *(undefined1 *)(param_1 + 0x66) = 0;
  return;
}


