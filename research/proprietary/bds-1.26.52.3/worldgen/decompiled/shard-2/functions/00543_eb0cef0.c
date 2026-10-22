/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xec0cef0 (ELF vaddr 0xeb0cef0)
 * Label: callee-of:0xea7cb80
 * Body:  [[0ec0cef0, 0ec0d16b]]
 * Ghidra: FUN_0ec0cef0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0ec0cef0(undefined2 *param_1,long *param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  undefined *puStack_40;
  long lStack_38;
  
  if ((DAT_0f76fe40 == '\0') && (iVar3 = func_0x04108328(&DAT_0f76fe40), iVar3 != 0)) {
    func_0x0ec0bdc0();
    func_0x0410844d(&DAT_0f76fe40);
  }
  uVar4 = (ulong)((uint)param_4 & 3);
  if (param_4 < 4) {
    uVar6 = 0x811c9dc5;
    uVar5 = 0;
  }
  else {
    uVar6 = 0x811c9dc5;
    uVar5 = 0;
    do {
      uVar6 = ((int)*(char *)(param_3 + 3 + uVar5) ^
              ((int)*(char *)(param_3 + 2 + uVar5) ^
              ((int)*(char *)(param_3 + 1 + uVar5) ^
              ((int)*(char *)(param_3 + uVar5) ^ uVar6) * 0x1000193) * 0x1000193) * 0x1000193) *
              0x1000193;
      uVar5 = uVar5 + 4;
    } while (((uint)param_4 & 0xc) != uVar5);
  }
  if (uVar4 != 0) {
    uVar8 = 0;
    do {
      uVar6 = ((int)*(char *)(uVar5 + param_3 + uVar8) ^ uVar6) * 0x1000193;
      uVar8 = uVar8 + 1;
    } while (uVar4 != uVar8);
  }
  *(undefined4 *)(param_2 + 5) = 1;
  *(uint *)((long)param_2 + 0x2c) = uVar6;
  lVar1 = *param_2;
  if ((DAT_0f76fe20 == '\0') && (iVar3 = func_0x04108328(&DAT_0f76fe20), iVar3 != 0)) {
    func_0x0ec0bcb0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f76fda0,0xf53dab8);
    func_0x0410844d(&DAT_0f76fe20);
  }
  lStack_38 = lVar1 + 0x18;
  plVar7 = (long *)(*(long *)(lVar1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(lVar1 + 0x20) - *(long *)(lVar1 + 0x18)) >> 3) -
                           1U & *(uint *)(_DAT_0f76fda0 + 4)) * 8);
  do {
    lVar2 = *plVar7;
    if (lVar2 == -1) goto LAB_0ec0d020;
    plVar7 = (long *)(*(long *)(lVar1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(lVar1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f76fda0 + 4));
  if (plVar7 == *(long **)(lVar1 + 0x38)) {
LAB_0ec0d020:
    puStack_40 = &DAT_0f76fda0;
  }
  else {
    puStack_40 = (undefined *)plVar7[2];
  }
  FUN_0ed621a0(&puStack_40,*(undefined4 *)((long)param_2 + 0x2c));
  *param_1 = 0x10;
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


