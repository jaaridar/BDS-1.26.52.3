/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe646de0 (ELF vaddr 0xe546de0)
 * Label: callee-of:0xe3ddaa0
 * Body:  [[0e646de0, 0e646fde]]
 * Ghidra: FUN_0e646de0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e646de0(undefined2 *param_1,long *param_2,char *param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  undefined *puStack_38;
  long lStack_30;
  
  if ((DAT_0f75ba30 == '\0') && (iVar6 = func_0x04108328(&DAT_0f75ba30), iVar6 != 0)) {
    func_0x0e645d10();
    FUN_0410844d(&DAT_0f75ba30);
  }
  cVar1 = *param_3;
  cVar2 = param_3[1];
  cVar3 = param_3[2];
  *(undefined4 *)(param_2 + 5) = 1;
  *(uint *)((long)param_2 + 0x2c) =
       ((int)cVar3 ^ ((int)cVar2 ^ ((int)cVar1 ^ 0x811c9dc5U) * 0x1000193) * 0x1000193) * 0x1000193;
  lVar4 = *param_2;
  if ((DAT_0f75ba10 == '\0') && (iVar6 = func_0x04108328(&DAT_0f75ba10), iVar6 != 0)) {
    func_0x0e645c00();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f75b990,0xf53dab8);
    FUN_0410844d(&DAT_0f75ba10);
  }
  lStack_30 = lVar4 + 0x18;
  plVar7 = (long *)(*(long *)(lVar4 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(lVar4 + 0x20) - *(long *)(lVar4 + 0x18)) >> 3) -
                           1U & *(uint *)(_DAT_0f75b990 + 4)) * 8);
  do {
    lVar5 = *plVar7;
    if (lVar5 == -1) goto LAB_0e646ea0;
    plVar7 = (long *)(*(long *)(lVar4 + 0x30) + lVar5 * 0x18);
  } while (*(uint *)(*(long *)(lVar4 + 0x30) + 8 + lVar5 * 0x18) != *(uint *)(_DAT_0f75b990 + 4));
  if (plVar7 == *(long **)(lVar4 + 0x38)) {
LAB_0e646ea0:
    puStack_38 = &DAT_0f75b990;
  }
  else {
    puStack_38 = (undefined *)plVar7[2];
  }
  func_0x0ed621a0(&puStack_38,*(undefined4 *)((long)param_2 + 0x2c));
  *param_1 = 1;
  *(long **)(param_1 + 4) = param_2 + 1;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)((long)param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x20) = 6;
  *(undefined2 *)((long)param_1 + 0x41) = *(undefined2 *)param_3;
  *(char *)((long)param_1 + 0x43) = param_3[2];
  *(undefined1 *)(param_1 + 0x22) = 0;
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


