/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x89653e0 (ELF vaddr 0x88653e0)
 * Label: callee-of:0x871a310
 * Body:  [[089653e0, 089656ad]]
 * Ghidra: FUN_089653e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_089653e0(undefined2 *param_1,long *param_2,long param_3,ulong param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  uint uVar7;
  long *plVar8;
  undefined *puStack_40;
  long lStack_38;
  
  if ((DAT_0f5e3b88 == '\0') && (iVar2 = FUN_04108328(&DAT_0f5e3b88), iVar2 != 0)) {
    func_0x0895ffa0();
    func_0x0410844d(&DAT_0f5e3b88);
  }
  uVar3 = (ulong)((uint)param_4 & 3);
  uVar7 = 0x811c9dc5;
  uVar5 = 0;
  do {
    uVar7 = ((int)*(char *)(param_3 + 3 + uVar5) ^
            ((int)*(char *)(param_3 + 2 + uVar5) ^
            ((int)*(char *)(param_3 + 1 + uVar5) ^
            ((int)*(char *)(param_3 + uVar5) ^ uVar7) * 0x1000193) * 0x1000193) * 0x1000193) *
            0x1000193;
    uVar5 = uVar5 + 4;
  } while (((uint)param_4 & 0x1c) != uVar5);
  if (uVar3 != 0) {
    pcVar6 = (char *)(uVar5 + param_3);
    do {
      uVar7 = ((int)*pcVar6 ^ uVar7) * 0x1000193;
      pcVar6 = pcVar6 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  *(undefined4 *)(param_2 + 5) = 1;
  *(uint *)((long)param_2 + 0x2c) = uVar7;
  lVar4 = *param_2;
  if ((DAT_0f5e3c20 == '\0') && (iVar2 = FUN_04108328(&DAT_0f5e3c20), iVar2 != 0)) {
    func_0x08960850();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5e3ba0,0xf53dab8);
    func_0x0410844d(&DAT_0f5e3c20);
  }
  lStack_38 = lVar4 + 0x18;
  plVar8 = (long *)(*(long *)(lVar4 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(lVar4 + 0x20) - *(long *)(lVar4 + 0x18)) >> 3) -
                           1U & *(uint *)(_DAT_0f5e3ba0 + 4)) * 8);
  do {
    lVar1 = *plVar8;
    if (lVar1 == -1) goto LAB_08965500;
    plVar8 = (long *)(*(long *)(lVar4 + 0x30) + lVar1 * 0x18);
  } while (*(uint *)(*(long *)(lVar4 + 0x30) + 8 + lVar1 * 0x18) != *(uint *)(_DAT_0f5e3ba0 + 4));
  if (plVar8 == *(long **)(lVar4 + 0x38)) {
LAB_08965500:
    puStack_40 = &DAT_0f5e3ba0;
  }
  else {
    puStack_40 = (undefined *)plVar8[2];
  }
  func_0x0ed621a0(&puStack_40,*(undefined4 *)((long)param_2 + 0x2c));
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
    lVar4 = (long)param_1 + 0x41;
  }
  else {
    uVar3 = 0x1a;
    if ((param_4 | 7) != 0x17) {
      uVar3 = (param_4 | 7) + 1;
    }
    lVar4 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar3);
    if (lVar4 == 0) {
      func_0x0eec74c0(uVar3,0);
    }
    *(long *)(param_1 + 0x28) = lVar4;
    *(ulong *)(param_1 + 0x20) = uVar3 | 1;
    *(ulong *)(param_1 + 0x24) = param_4;
  }
  func_0x0eee2f00(lVar4,param_3,param_4);
  *(undefined1 *)(lVar4 + param_4) = 0;
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


