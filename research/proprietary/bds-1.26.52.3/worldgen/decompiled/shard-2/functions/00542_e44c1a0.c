/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe54c1a0 (ELF vaddr 0xe44c1a0)
 * Label: callee-of:0xe4118a0
 * Body:  [[0e54c1a0, 0e54c40c]]
 * Ghidra: FUN_0e54c1a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e54c1a0(undefined2 *param_1,long *param_2,char *param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  long *plVar15;
  undefined *puStack_38;
  long lStack_30;
  
  if ((DAT_0f755bd0 == '\0') && (iVar14 = func_0x04108328(&DAT_0f755bd0), iVar14 != 0)) {
    func_0x0e54ac30();
    func_0x0410844d(&DAT_0f755bd0);
  }
  cVar1 = *param_3;
  cVar2 = param_3[1];
  cVar3 = param_3[2];
  cVar4 = param_3[3];
  cVar5 = param_3[4];
  cVar6 = param_3[5];
  cVar7 = param_3[6];
  cVar8 = param_3[7];
  cVar9 = param_3[8];
  cVar10 = param_3[9];
  cVar11 = param_3[10];
  *(undefined4 *)(param_2 + 5) = 1;
  *(uint *)((long)param_2 + 0x2c) =
       ((int)cVar11 ^
       ((int)cVar10 ^
       ((int)cVar9 ^
       ((int)cVar8 ^
       ((int)cVar7 ^
       ((int)cVar6 ^
       ((int)cVar5 ^
       ((int)cVar4 ^
       ((int)cVar3 ^ ((int)cVar2 ^ ((int)cVar1 ^ 0x811c9dc5U) * 0x1000193) * 0x1000193) * 0x1000193)
       * 0x1000193) * 0x1000193) * 0x1000193) * 0x1000193) * 0x1000193) * 0x1000193) * 0x1000193) *
       0x1000193;
  lVar12 = *param_2;
  if ((DAT_0f755bb0 == '\0') && (iVar14 = func_0x04108328(&DAT_0f755bb0), iVar14 != 0)) {
    func_0x0e54ab20();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f755b30,0xf53dab8);
    func_0x0410844d(&DAT_0f755bb0);
  }
  lStack_30 = lVar12 + 0x18;
  plVar15 = (long *)(*(long *)(lVar12 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar12 + 0x20) - *(long *)(lVar12 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f755b30 + 4)) * 8);
  do {
    lVar13 = *plVar15;
    if (lVar13 == -1) goto LAB_0e54c2d0;
    plVar15 = (long *)(*(long *)(lVar12 + 0x30) + lVar13 * 0x18);
  } while (*(uint *)(*(long *)(lVar12 + 0x30) + 8 + lVar13 * 0x18) != *(uint *)(_DAT_0f755b30 + 4));
  if (plVar15 == *(long **)(lVar12 + 0x38)) {
LAB_0e54c2d0:
    puStack_38 = &DAT_0f755b30;
  }
  else {
    puStack_38 = (undefined *)plVar15[2];
  }
  FUN_0ed621a0(&puStack_38,*(undefined4 *)((long)param_2 + 0x2c));
  *param_1 = 1;
  *(long **)(param_1 + 4) = param_2 + 1;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)((long)param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0x16;
  *(undefined8 *)((long)param_1 + 0x41) = *(undefined8 *)param_3;
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_3 + 7);
  *(undefined1 *)(param_1 + 0x26) = 0;
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


