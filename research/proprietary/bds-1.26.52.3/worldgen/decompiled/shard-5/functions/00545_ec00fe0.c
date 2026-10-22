/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xed00fe0 (ELF vaddr 0xec00fe0)
 * Label: callee-of:0xeba2170
 * Body:  [[0ed00fe0, 0ed0124b]]
 * Ghidra: FUN_0ed00fe0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0ed00fe0(undefined2 *param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  undefined *puStack_40;
  long lStack_38;
  
  if ((DAT_0f773040 == '\0') && (iVar2 = func_0x04108328(&DAT_0f773040), iVar2 != 0)) {
    func_0x0ecffb60();
    FUN_0410844d(&DAT_0f773040);
  }
  uVar4 = 0x811c9dc5;
  lVar3 = 0;
  do {
    uVar4 = ((int)*(char *)(param_3 + 3 + lVar3) ^
            ((int)*(char *)(param_3 + 2 + lVar3) ^
            ((int)*(char *)(param_3 + 1 + lVar3) ^
            ((int)*(char *)(param_3 + lVar3) ^ uVar4) * 0x1000193) * 0x1000193) * 0x1000193) *
            0x1000193;
    lVar3 = lVar3 + 4;
  } while (lVar3 != 0xc);
  uVar6 = 0;
  do {
    uVar4 = ((int)*(char *)(param_3 + uVar6 + 0xc) ^ uVar4) * 0x1000193;
    uVar6 = uVar6 + 1;
  } while (((uint)param_4 & 3) != uVar6);
  *(undefined4 *)(param_2 + 5) = 1;
  *(uint *)((long)param_2 + 0x2c) = uVar4;
  lVar3 = *param_2;
  if ((DAT_0f773020 == '\0') && (iVar2 = func_0x04108328(&DAT_0f773020), iVar2 != 0)) {
    func_0x0ecffa50();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f772fa0,0xf53dab8);
    FUN_0410844d(&DAT_0f773020);
  }
  lStack_38 = lVar3 + 0x18;
  plVar5 = (long *)(*(long *)(lVar3 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(lVar3 + 0x20) - *(long *)(lVar3 + 0x18)) >> 3) -
                           1U & *(uint *)(_DAT_0f772fa0 + 4)) * 8);
  do {
    lVar1 = *plVar5;
    if (lVar1 == -1) goto LAB_0ed01100;
    plVar5 = (long *)(*(long *)(lVar3 + 0x30) + lVar1 * 0x18);
  } while (*(uint *)(*(long *)(lVar3 + 0x30) + 8 + lVar1 * 0x18) != *(uint *)(_DAT_0f772fa0 + 4));
  if (plVar5 == *(long **)(lVar3 + 0x38)) {
LAB_0ed01100:
    puStack_40 = &DAT_0f772fa0;
  }
  else {
    puStack_40 = (undefined *)plVar5[2];
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
  FUN_048afb10(param_1 + 0x2c,8);
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


