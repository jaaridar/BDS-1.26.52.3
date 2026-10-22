/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe8c46c0 (ELF vaddr 0xe7c46c0)
 * Label: callee-of:0xe7af270
 * Body:  [[0e8c46c0, 0e8c4877]]
 * Ghidra: FUN_0e8c46c0
 */


void FUN_0e8c46c0(undefined2 *param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  char *pcVar5;
  uint uVar6;
  undefined8 uStack_38;
  long lStack_30;
  
  if (DAT_0f737780 == '\0') {
    iVar2 = func_0x04108328(&DAT_0f737780);
    if (iVar2 != 0) {
      func_0x0db807e0(0xf737768);
      func_0x0410844d(&DAT_0f737780);
    }
  }
  uVar3 = (ulong)((uint)param_4 & 3);
  uVar6 = 0x811c9dc5;
  uVar4 = 0;
  do {
    uVar6 = ((int)*(char *)(param_3 + 3 + uVar4) ^
            ((int)*(char *)(param_3 + 2 + uVar4) ^
            ((int)*(char *)(param_3 + 1 + uVar4) ^
            ((int)*(char *)(param_3 + uVar4) ^ uVar6) * 0x1000193) * 0x1000193) * 0x1000193) *
            0x1000193;
    uVar4 = uVar4 + 4;
  } while (((uint)param_4 & 0x1c) != uVar4);
  if (uVar3 != 0) {
    pcVar5 = (char *)(uVar4 + param_3);
    do {
      uVar6 = ((int)*pcVar5 ^ uVar6) * 0x1000193;
      pcVar5 = pcVar5 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  *(undefined4 *)(param_2 + 5) = 1;
  *(uint *)((long)param_2 + 0x2c) = uVar6;
  lVar1 = *param_2;
  uStack_38 = func_0x0db80190(lVar1 + 0x18);
  lStack_30 = lVar1 + 0x18;
  FUN_0ed621a0(&uStack_38,*(undefined4 *)((long)param_2 + 0x2c));
  *param_1 = 1;
  *(long **)(param_1 + 4) = param_2 + 1;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)((long)param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(char *)(param_1 + 0x20) = (char)param_4 * '\x02';
  func_0x0eee2f00((long)param_1 + 0x41,param_3,param_4);
  *(undefined1 *)((long)param_1 + param_4 + 0x41) = 0;
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


