/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcad8bf0 (ELF vaddr 0xc9d8bf0)
 * Label: callee2-of:0xc9d8990
 * Body:  [[0cad8bf0, 0cad940e] [0cad9410, 0cad94aa] [0cad94b0, 0cad950d] [0cad9510, 0cad9567] [0cad9570, 0cad98f1] [0cad9900, 0cad9ac4] [0cad9ad0, 0cad9fa6] [0cada017, 0cada1fd]]
 * Ghidra: FUN_0cad8bf0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0cad8bf0(undefined1 (*param_1) [16],long *param_2,int *param_3,undefined1 param_4,
                 ulong param_5,char param_6,int param_7)

{
  undefined1 (*pauVar1) [16];
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 uVar6;
  char cVar7;
  char cVar8;
  ushort uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  short sVar17;
  long lVar18;
  long *plVar19;
  ulong uVar20;
  long *extraout_RDX;
  long *plVar21;
  undefined *puVar22;
  undefined *puVar23;
  long *plVar24;
  ulong uVar25;
  uint uVar26;
  ulong uVar27;
  undefined *puVar28;
  short sVar29;
  undefined1 (*pauVar30) [16];
  long lVar31;
  undefined4 uVar32;
  undefined1 (*pauVar33) [16];
  bool bVar34;
  undefined1 auVar35 [16];
  long lStack_b8;
  undefined1 auStack_98 [16];
  ulong auStack_88 [2];
  undefined1 (*pauStack_78) [16];
  undefined1 *puStack_70;
  char *pcStack_68;
  long *plStack_60;
  ulong uStack_58;
  undefined8 uStack_48;
  long *plStack_40;
  undefined1 (*pauStack_38) [16];
  
  param_1[1] = (undefined1  [16])0x0;
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[2] = 0;
  *(long *)(param_1[2] + 8) = param_2[0x14];
  *(long **)param_1[3] = param_2;
  lVar18 = param_2[0x15];
  iVar3 = param_3[1];
  *(int *)(param_1[3] + 8) = *param_3 << 4;
  *(int *)(param_1[3] + 0xc) = (int)(short)lVar18;
  *(int *)param_1[4] = iVar3 << 4;
  iVar3 = param_3[1];
  *(long *)(param_1[4] + 4) =
       (long)CONCAT24(*(undefined2 *)((long)param_2 + 0xaa),*param_3 << 4) + -0xfffffff1;
  *(uint *)(param_1[4] + 0xc) = iVar3 << 4 | 0xf;
  *(undefined8 *)param_1[5] = *(undefined8 *)param_3;
  *(undefined2 *)(param_1[5] + 8) = 0;
  param_1[5][10] = param_4;
  *(undefined8 *)param_1[6] = 0;
  *(undefined4 *)(param_1[6] + 8) = 0xffffffff;
  *(undefined2 *)(param_1[6] + 0xc) = 0;
  param_1[6][0xe] = 0;
  param_1[7] = (undefined1  [16])0x0;
  param_1[8] = (undefined1  [16])0x0;
  param_1[9] = (undefined1  [16])0x0;
  param_1[10] = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1[10] + 0xd) = (undefined1  [16])0x0;
  *(undefined8 *)param_1[0xc] = 0;
  *(undefined4 *)(param_1[0xc] + 8) = 0;
  *(undefined8 *)param_1[0xd] = 0;
  LOCK();
  *(undefined8 *)param_1[0xd] = 0;
  UNLOCK();
  *(undefined8 *)(param_1[0xd] + 8) = 0;
  *(undefined4 *)param_1[0xe] = 0;
  *(undefined8 *)(param_1[0xe] + 8) = 0;
  LOCK();
  *(undefined8 *)(param_1[0xe] + 8) = 0;
  UNLOCK();
  uVar26 = (uint)param_5;
  puStack_70 = param_1[0x10] + 8;
  pauStack_78 = param_1 + 0x12;
  param_1[0x11] = (undefined1  [16])0x0;
  param_1[0x10] = (undefined1  [16])0x0;
  param_1[0xf] = (undefined1  [16])0x0;
  lVar18 = param_2[0x15];
  sVar29 = *(short *)((long)param_2 + 0xaa);
  func_0x0eee2dd0(pauStack_78,0xff,0x200);
  param_1[0x32] = (undefined1  [16])0x0;
  *(undefined8 *)param_1[0x33] = 0;
  func_0x0412d440(param_1[0x33] + 8);
  sVar29 = sVar29 - (short)lVar18;
  sVar17 = sVar29 + 0xf;
  if (-1 < sVar29) {
    sVar17 = sVar29;
  }
  *(short *)(param_1[0x3c] + 8) = (short)((uint)(int)sVar17 >> 4);
  uVar27 = (ulong)((uint)(int)sVar17 >> 4 & 0xffff);
  lVar18 = *(long *)(param_1[0x32] + 8);
  uVar20 = lVar18 - *(long *)param_1[0x32] >> 3;
  if (uVar20 < uVar27) {
    func_0x0cb0c5f0(param_1 + 0x32);
  }
  else if (uVar27 < uVar20) {
    lVar31 = *(long *)param_1[0x32] + uVar27 * 8;
    for (; lVar31 != lVar18; lVar18 = lVar18 + -8) {
      plVar13 = *(long **)(lVar18 + -8);
      *(undefined8 *)(lVar18 + -8) = 0;
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 8))();
      }
    }
    *(long *)(param_1[0x32] + 8) = lVar31;
  }
  param_1[0xff] = (undefined1  [16])0x0;
  param_1[0xfe] = (undefined1  [16])0x0;
  func_0x0eee2dd0(param_1 + 0x3d,0,0xc0a);
  *(undefined4 *)param_1[0x100] = 0x3f800000;
  param_1[0x100][8] = 0;
  param_1[0x113][0xc] = 0;
  *(undefined8 *)param_1[0x112] = 0;
  param_1[0x112][8] = 0;
  *(undefined4 *)(param_1[0x110] + 9) = 0;
  *(undefined8 *)param_1[0x111] = 0;
  *(undefined4 *)(param_1[0x111] + 8) = 0;
  *(undefined4 *)param_1[0x114] = 0xffffffff;
  *(undefined1 (*) [16])(param_1[0x114] + 8) = (undefined1  [16])0x0;
  param_1[0x115][8] = 0;
  uVar4 = _UNK_014ea428;
  uVar15 = _DAT_014ea420;
  *(undefined8 *)param_1[0x116] = _DAT_014ea420;
  *(undefined8 *)(param_1[0x116] + 8) = uVar4;
  *(undefined8 *)param_1[0x117] = uVar15;
  *(undefined8 *)(param_1[0x117] + 8) = uVar4;
  *(undefined8 *)param_1[0x118] = uVar15;
  *(undefined8 *)(param_1[0x118] + 8) = uVar4;
  *(undefined4 *)param_1[0x119] = 0x80000000;
  func_0x0eee2dd0(param_1[0x119] + 4,0,0x234);
  param_1[0x13c][8] = param_7 == 1;
  param_1[0x13d] = (undefined1  [16])0x0;
  param_1[0x13e] = (undefined1  [16])0x0;
  *(undefined4 *)param_1[0x13f] = 0x3f800000;
  *(undefined1 (*) [16])(param_1[0x13f] + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1[0x140] + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1[0x141] + 8) = (undefined1  [16])0x0;
  *(undefined8 *)(param_1[0x142] + 8) = 0;
  *(undefined4 *)param_1[0x143] = 0x3f800000;
  pauVar1 = param_1 + 0x147;
  *(undefined1 (*) [16])(param_1[0x143] + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1[0x144] + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1[0x145] + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1[0x146] + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1[0x147] + 8) = (undefined1  [16])0x0;
  *(undefined2 *)(param_1[0x148] + 8) = *(undefined2 *)((long)param_2 + 0x11c);
  param_1[0x14d][0xc] = 0;
  *(undefined8 *)(param_1[0x150] + 8) = 0;
  *(undefined1 (*) [16])(param_1[0x14c] + 9) = (undefined1  [16])0x0;
  param_1[0x14c] = (undefined1  [16])0x0;
  param_1[0x14b] = (undefined1  [16])0x0;
  param_1[0x14a] = (undefined1  [16])0x0;
  param_1[0x149] = (undefined1  [16])0x0;
  *(undefined4 *)(param_1[0x14e] + 3) = 0;
  *(undefined4 *)param_1[0x14e] = 0;
  *(undefined1 (*) [16])(param_1[0x14f] + 5) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1[0x14e] + 8) = (undefined1  [16])0x0;
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x98);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x98,0);
  }
  *puVar12 = 0;
  *(undefined4 *)(puVar12 + 1) = 0;
  puVar12[2] = 0;
  LOCK();
  puVar12[2] = 0;
  UNLOCK();
  *(undefined1 (*) [16])(puVar12 + 0xf) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar12 + 0xd) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar12 + 0xb) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar12 + 9) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar12 + 7) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar12 + 5) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar12 + 3) = (undefined1  [16])0x0;
  *(undefined1 *)(puVar12 + 0x11) = 1;
  puVar12[0x12] = 0;
  *(undefined8 **)param_1[0x151] = puVar12;
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (plVar13 == (long *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  *(undefined1 (*) [16])(plVar13 + 1) = (undefined1  [16])0x0;
  *plVar13 = (long)&UNK_0f3f0870;
  *(undefined1 (*) [16])(plVar13 + 5) = (undefined1  [16])0x0;
  plVar13[7] = 0;
  *(long **)(param_1[0x151] + 8) = plVar13 + 3;
  *(long **)param_1[0x152] = plVar13;
  LOCK();
  plVar13[1] = plVar13[1] + 1;
  UNLOCK();
  LOCK();
  plVar13[2] = plVar13[2] + 1;
  UNLOCK();
  plVar13[3] = (long)(plVar13 + 3);
  plVar13[4] = (long)plVar13;
  LOCK();
  plVar24 = plVar13 + 1;
  lVar18 = *plVar24;
  *plVar24 = *plVar24 + -1;
  UNLOCK();
  if (lVar18 == 0) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
    func_0x0412c2d0(plVar13);
  }
  *(undefined **)(param_1[0x152] + 8) = &UNK_0283ae83;
  *(undefined2 *)param_1[0x153] = 0;
  uVar15 = *(undefined8 *)(param_1[3] + 8);
  iVar3 = *(int *)param_1[4];
  uVar4 = *(undefined8 *)(param_1[4] + 4);
  uVar10 = *(undefined4 *)(param_1[4] + 0xc);
  uVar14 = (**(code **)(**(long **)(param_1[2] + 8) + 0x300))();
  pauStack_38 = (undefined1 (*) [16])(param_1[0x153] + 8);
  *(undefined1 (*) [16])(param_1[0x155] + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1[0x154] + 8) = (undefined1  [16])0x0;
  *pauStack_38 = (undefined1  [16])0x0;
  if ((DAT_0f550ad8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f550ad8), iVar11 != 0)) {
    func_0x0488e120(0xf550ac0);
    func_0x0410844d(&DAT_0f550ad8);
  }
  param_1[0x159] = (undefined1  [16])0x0;
  param_1[0x158] = (undefined1  [16])0x0;
  param_1[0x157] = (undefined1  [16])0x0;
  *(undefined8 *)param_1[0x15a] = 0xf550ac0;
  param_1[0x15a][8] = 2;
  param_1[0x15b] = (undefined1  [16])0x0;
  *(undefined **)(param_1[0x156] + 8) = &UNK_0f3f0a00;
  func_0x0cb0c7b0(param_1 + 0x15c);
  *(undefined8 *)(param_1[0x186] + 8) = uVar15;
  *(int *)param_1[0x187] = iVar3;
  *(undefined8 *)(param_1[0x187] + 4) = uVar4;
  *(undefined4 *)(param_1[0x187] + 0xc) = uVar10;
  *(int *)param_1[0x188] = (int)uVar15 >> 4;
  *(int *)(param_1[0x188] + 4) = iVar3 >> 4;
  *(undefined8 *)(param_1[0x188] + 8) = uVar14;
  *(undefined8 *)param_1[0x189] = 0;
  *(undefined4 *)(param_1[0x189] + 8) = 0;
  *(undefined8 *)param_1[0x18a] = 0;
  LOCK();
  *(undefined8 *)param_1[0x18a] = 0;
  UNLOCK();
  *(undefined2 *)(param_1[0x18a] + 8) = 0;
  lVar18 = *(long *)param_1[0x151];
  bVar2 = param_1[0xb][8];
  uVar15 = func_0x0417cc60();
  if (*(char *)(lVar18 + 0x88) == '\0') {
    func_0x048a88b0();
LAB_0cad9f70:
    uVar15 = func_0x04882ef0(&UNK_0138fe41);
    uVar15 = func_0x04882e20(uVar15);
    lVar18 = func_0x04882e20(uVar15);
    func_0x0ee386e0(auStack_88);
    func_0x0ee386e0(auStack_98 + 8);
    func_0x0eee0600(param_1 + 0x189);
    func_0x0cada410(pauStack_38);
    func_0x0cada590(*(undefined8 *)param_1[0x152]);
    func_0x0cada5c0(param_1 + 0x151);
    func_0x0cada640(param_1[0x150] + 8);
    if ((param_1[0x14e][8] & 1) != 0) {
      func_0x0412a280(*(undefined8 *)(param_1[0x14f] + 8),
                      *(ulong *)(param_1[0x14e] + 8) & 0xfffffffffffffffe);
    }
    func_0x0534d960(param_1[0x14b] + 8);
    lVar31 = *(long *)param_1[0x149];
    if (lVar31 != 0) {
      *(long *)(param_1[0x149] + 8) = lVar31;
      func_0x0412a280(lVar31,*(long *)param_1[0x14a] - lVar31);
    }
    func_0x075dd120(pauVar1);
    func_0x0cada6b0(param_1 + 0x145);
    func_0x0532eab0(param_1[0x13c] + 8);
    func_0x04886070(param_1 + 0x13b);
    func_0x05856dd0(param_1[0x139] + 8);
    func_0x0cada750(param_1 + 0xfe);
    func_0x0527c430(param_1 + 0xfd);
    func_0x0cada7a0(pauStack_78);
    func_0x0cada830(puStack_70);
    func_0x0cada200(param_1 + 0x10);
    func_0x0cada200(param_1[0xf] + 8);
    func_0x0eee0600(param_1[0xd] + 8);
    func_0x0eee0600(param_1 + 0xc);
    lVar31 = *(long *)param_1[10];
    if (lVar31 != 0) goto LAB_0cada19f;
    if ((param_1[8][8] & 1) != 0) goto LAB_0cada1c2;
    while ((param_1[7][0] & 1) == 0) {
      while( true ) {
        lVar31 = lVar18;
        _Unwind_Resume();
LAB_0cada19f:
        *(long *)(param_1[10] + 8) = lVar31;
        func_0x0412a280();
        if ((param_1[8][8] & 1) == 0) break;
LAB_0cada1c2:
        func_0x0412a280(*(undefined8 *)(param_1[9] + 8),
                        *(ulong *)(param_1[8] + 8) & 0xfffffffffffffffe);
        if ((param_1[7][0] & 1) != 0) goto LAB_0cada1df;
      }
    }
LAB_0cada1df:
    func_0x0412a280(*(undefined8 *)param_1[8],*(ulong *)param_1[7] & 0xfffffffffffffffe);
    _Unwind_Resume(lVar18);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (0xb < bVar2) goto LAB_0cad9f70;
  LOCK();
  *(undefined8 *)(lVar18 + 0x18 + (ulong)bVar2 * 8) = uVar15;
  UNLOCK();
  sVar17 = *(short *)(*(long *)param_1[3] + 0xaa) - *(short *)(*(long *)param_1[3] + 0xa8);
  sVar29 = sVar17 + 0xf;
  if (-1 < sVar17) {
    sVar29 = sVar17;
  }
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  *puVar12 = param_1;
  *(undefined1 (*) [16])(puVar12 + 1) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar12 + 3) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar12 + 5) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar12 + 7) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar12 + 9) = (undefined1  [16])0x0;
  *(undefined2 *)(puVar12 + 0xb) = 0;
  lVar18 = *(long *)(param_1[0xf] + 8);
  *(undefined8 **)(param_1[0xf] + 8) = puVar12;
  if (lVar18 != 0) {
    lVar31 = *(long *)(lVar18 + 0x40);
    if (lVar31 != 0) {
      *(long *)(lVar18 + 0x48) = lVar31;
      func_0x0412a280(lVar31,*(long *)(lVar18 + 0x50) - lVar31);
    }
    lVar31 = *(long *)(lVar18 + 0x28);
    if (lVar31 != 0) {
      *(long *)(lVar18 + 0x30) = lVar31;
      func_0x0412a280(lVar31,*(long *)(lVar18 + 0x38) - lVar31);
    }
    lVar31 = *(long *)(lVar18 + 0x10);
    if (lVar31 != 0) {
      *(long *)(lVar18 + 0x18) = lVar31;
      func_0x0412a280(lVar31,*(long *)(lVar18 + 0x20) - lVar31);
    }
    func_0x0412a280(lVar18,0x60);
  }
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  *puVar12 = param_1;
  *(undefined1 (*) [16])(puVar12 + 1) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar12 + 3) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar12 + 5) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar12 + 7) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar12 + 9) = (undefined1  [16])0x0;
  *(undefined2 *)(puVar12 + 0xb) = 1;
  lVar18 = *(long *)param_1[0x10];
  *(undefined8 **)param_1[0x10] = puVar12;
  if (lVar18 != 0) {
    lVar31 = *(long *)(lVar18 + 0x40);
    if (lVar31 != 0) {
      *(long *)(lVar18 + 0x48) = lVar31;
      func_0x0412a280(lVar31,*(long *)(lVar18 + 0x50) - lVar31);
    }
    lVar31 = *(long *)(lVar18 + 0x28);
    if (lVar31 != 0) {
      *(long *)(lVar18 + 0x30) = lVar31;
      func_0x0412a280(lVar31,*(long *)(lVar18 + 0x38) - lVar31);
    }
    lVar31 = *(long *)(lVar18 + 0x10);
    if (lVar31 != 0) {
      *(long *)(lVar18 + 0x18) = lVar31;
      func_0x0412a280(lVar31,*(long *)(lVar18 + 0x20) - lVar31);
    }
    func_0x0412a280(lVar18,0x60);
  }
  uVar6 = (**(code **)(**(long **)(param_1[2] + 8) + 0xbe8))();
  param_1[0x110][0xb] = uVar6;
  uVar27 = (ulong)((uint)(int)sVar29 >> 4 & 0xffff);
  pauVar33 = *(undefined1 (**) [16])(param_1[0x10] + 8);
  pauVar30 = *(undefined1 (**) [16])param_1[0x11];
  lVar18 = (long)pauVar30 - (long)pauVar33 >> 3;
  bVar34 = uVar27 < (ulong)(lVar18 * 0x4ec4ec4ec4ec4ec5);
  plVar13 = (long *)(uVar27 + lVar18 * -0x4ec4ec4ec4ec4ec5);
  if (bVar34 || plVar13 == (long *)0x0) {
    if (bVar34) {
      pauVar33 = (undefined1 (*) [16])((long)pauVar33 + uVar27 * 0x68);
      while (pauVar33 != pauVar30) {
        pauVar30 = (undefined1 (*) [16])(pauVar30[-7] + 8);
        func_0x0ca919a0(pauVar30);
      }
      *(undefined1 (**) [16])param_1[0x11] = pauVar33;
    }
  }
  else {
    func_0x0cb0bf70(puStack_70);
  }
  lVar18 = (**(code **)(**(long **)(param_1[2] + 8) + 0x2b0))();
  plVar24 = *(long **)param_1[3];
  uVar9 = (**(code **)(*plVar24 + 0xd0))();
  plVar21 = *(long **)(lVar18 + 0x380);
  plVar19 = *(long **)(lVar18 + 0x388);
  uVar27 = 0;
  if ((long)plVar19 - (long)plVar21 != 0) {
    pauVar33 = param_1 + 5;
    plVar13 = plVar19;
    uVar27 = (long)plVar19 - (long)plVar21 >> 3;
    do {
      while( true ) {
        param_5 = uVar27 >> 1;
        plVar24 = plVar21 + param_5;
        if (*(ushort *)(plVar21[param_5] + 0x168) < uVar9) break;
        if (*(ushort *)(plVar21[param_5] + 0x168) <= uVar9) goto LAB_0cad94f0;
        plVar13 = plVar24;
        uVar27 = param_5;
        if (param_5 == 0) goto LAB_0cad94eb;
      }
      plVar21 = plVar24 + 1;
      uVar27 = ~param_5 + uVar27;
      param_5 = 0;
      plVar24 = plVar21;
    } while (uVar27 != 0);
  }
LAB_0cad94eb:
  do {
    do {
      uVar9 = func_0x04890760();
      plVar21 = extraout_RDX;
LAB_0cad94f0:
      if (uVar27 != 1) {
        do {
          uVar20 = param_5 >> 1;
          if (*(ushort *)(plVar21[uVar20] + 0x168) < uVar9) {
            plVar21 = plVar21 + uVar20 + 1;
            uVar20 = ~uVar20 + param_5;
          }
          uVar27 = 0;
          param_5 = uVar20;
        } while (uVar20 != 0);
      }
      plVar24 = plVar24 + 1;
      lVar18 = (long)plVar13 - (long)plVar24;
      if (lVar18 != 0) {
        plVar13 = plVar24;
        uVar20 = lVar18 >> 3;
        do {
          uVar25 = uVar20 >> 1;
          uVar27 = plVar13[uVar25];
          if (*(ushort *)(uVar27 + 0x168) <= uVar9) {
            plVar13 = plVar13 + uVar25 + 1;
            uVar25 = ~uVar25 + uVar20;
          }
          plVar24 = (long *)0x0;
          uVar20 = uVar25;
        } while (uVar25 != 0);
      }
      param_5 = 0;
    } while ((plVar21 == plVar13) || (plVar21 == plVar19));
    plVar13 = (long *)0x0;
  } while (*plVar21 == 0);
  if (param_1[0x110][0xb] == '\x01') {
    func_0x0cada270(pauStack_78);
  }
  else {
    auVar35 = ZEXT416(*(uint *)(*plVar21 + 0x168));
    auVar35 = pshuflw(auVar35,auVar35,0);
    uVar10 = auVar35._0_4_;
    *(undefined4 *)param_1[0x12] = uVar10;
    *(undefined4 *)(param_1[0x12] + 4) = uVar10;
    *(undefined4 *)(param_1[0x12] + 8) = uVar10;
    *(undefined4 *)(param_1[0x12] + 0xc) = uVar10;
    *(undefined4 *)param_1[0x13] = uVar10;
    *(undefined4 *)(param_1[0x13] + 4) = uVar10;
    *(undefined4 *)(param_1[0x13] + 8) = uVar10;
    *(undefined4 *)(param_1[0x13] + 0xc) = uVar10;
    *(undefined4 *)param_1[0x14] = uVar10;
    *(undefined4 *)(param_1[0x14] + 4) = uVar10;
    *(undefined4 *)(param_1[0x14] + 8) = uVar10;
    *(undefined4 *)(param_1[0x14] + 0xc) = uVar10;
    *(undefined4 *)param_1[0x15] = uVar10;
    *(undefined4 *)(param_1[0x15] + 4) = uVar10;
    *(undefined4 *)(param_1[0x15] + 8) = uVar10;
    *(undefined4 *)(param_1[0x15] + 0xc) = uVar10;
    *(undefined4 *)param_1[0x16] = uVar10;
    *(undefined4 *)(param_1[0x16] + 4) = uVar10;
    *(undefined4 *)(param_1[0x16] + 8) = uVar10;
    *(undefined4 *)(param_1[0x16] + 0xc) = uVar10;
    *(undefined4 *)param_1[0x17] = uVar10;
    *(undefined4 *)(param_1[0x17] + 4) = uVar10;
    *(undefined4 *)(param_1[0x17] + 8) = uVar10;
    *(undefined4 *)(param_1[0x17] + 0xc) = uVar10;
    *(undefined4 *)param_1[0x18] = uVar10;
    *(undefined4 *)(param_1[0x18] + 4) = uVar10;
    *(undefined4 *)(param_1[0x18] + 8) = uVar10;
    *(undefined4 *)(param_1[0x18] + 0xc) = uVar10;
    *(undefined4 *)param_1[0x19] = uVar10;
    *(undefined4 *)(param_1[0x19] + 4) = uVar10;
    *(undefined4 *)(param_1[0x19] + 8) = uVar10;
    *(undefined4 *)(param_1[0x19] + 0xc) = uVar10;
    *(undefined4 *)param_1[0x1a] = uVar10;
    *(undefined4 *)(param_1[0x1a] + 4) = uVar10;
    *(undefined4 *)(param_1[0x1a] + 8) = uVar10;
    *(undefined4 *)(param_1[0x1a] + 0xc) = uVar10;
    *(undefined4 *)param_1[0x1b] = uVar10;
    *(undefined4 *)(param_1[0x1b] + 4) = uVar10;
    *(undefined4 *)(param_1[0x1b] + 8) = uVar10;
    *(undefined4 *)(param_1[0x1b] + 0xc) = uVar10;
    *(undefined4 *)param_1[0x1c] = uVar10;
    *(undefined4 *)(param_1[0x1c] + 4) = uVar10;
    *(undefined4 *)(param_1[0x1c] + 8) = uVar10;
    *(undefined4 *)(param_1[0x1c] + 0xc) = uVar10;
    *(undefined4 *)param_1[0x1d] = uVar10;
    *(undefined4 *)(param_1[0x1d] + 4) = uVar10;
    *(undefined4 *)(param_1[0x1d] + 8) = uVar10;
    *(undefined4 *)(param_1[0x1d] + 0xc) = uVar10;
    *(undefined4 *)param_1[0x1e] = uVar10;
    *(undefined4 *)(param_1[0x1e] + 4) = uVar10;
    *(undefined4 *)(param_1[0x1e] + 8) = uVar10;
    *(undefined4 *)(param_1[0x1e] + 0xc) = uVar10;
    *(undefined4 *)param_1[0x1f] = uVar10;
    *(undefined4 *)(param_1[0x1f] + 4) = uVar10;
    *(undefined4 *)(param_1[0x1f] + 8) = uVar10;
    *(undefined4 *)(param_1[0x1f] + 0xc) = uVar10;
    *(undefined4 *)param_1[0x20] = uVar10;
    *(undefined4 *)(param_1[0x20] + 4) = uVar10;
    *(undefined4 *)(param_1[0x20] + 8) = uVar10;
    *(undefined4 *)(param_1[0x20] + 0xc) = uVar10;
    *(undefined4 *)param_1[0x21] = uVar10;
    *(undefined4 *)(param_1[0x21] + 4) = uVar10;
    *(undefined4 *)(param_1[0x21] + 8) = uVar10;
    *(undefined4 *)(param_1[0x21] + 0xc) = uVar10;
    *(undefined4 *)param_1[0x22] = uVar10;
    *(undefined4 *)(param_1[0x22] + 4) = uVar10;
    *(undefined4 *)(param_1[0x22] + 8) = uVar10;
    *(undefined4 *)(param_1[0x22] + 0xc) = uVar10;
    *(undefined4 *)param_1[0x23] = uVar10;
    *(undefined4 *)(param_1[0x23] + 4) = uVar10;
    *(undefined4 *)(param_1[0x23] + 8) = uVar10;
    *(undefined4 *)(param_1[0x23] + 0xc) = uVar10;
    *(undefined4 *)param_1[0x24] = uVar10;
    *(undefined4 *)(param_1[0x24] + 4) = uVar10;
    *(undefined4 *)(param_1[0x24] + 8) = uVar10;
    *(undefined4 *)(param_1[0x24] + 0xc) = uVar10;
    *(undefined4 *)param_1[0x25] = uVar10;
    *(undefined4 *)(param_1[0x25] + 4) = uVar10;
    *(undefined4 *)(param_1[0x25] + 8) = uVar10;
    *(undefined4 *)(param_1[0x25] + 0xc) = uVar10;
    *(undefined4 *)param_1[0x26] = uVar10;
    *(undefined4 *)(param_1[0x26] + 4) = uVar10;
    *(undefined4 *)(param_1[0x26] + 8) = uVar10;
    *(undefined4 *)(param_1[0x26] + 0xc) = uVar10;
    *(undefined4 *)param_1[0x27] = uVar10;
    *(undefined4 *)(param_1[0x27] + 4) = uVar10;
    *(undefined4 *)(param_1[0x27] + 8) = uVar10;
    *(undefined4 *)(param_1[0x27] + 0xc) = uVar10;
    *(undefined4 *)param_1[0x28] = uVar10;
    *(undefined4 *)(param_1[0x28] + 4) = uVar10;
    *(undefined4 *)(param_1[0x28] + 8) = uVar10;
    *(undefined4 *)(param_1[0x28] + 0xc) = uVar10;
    *(undefined4 *)param_1[0x29] = uVar10;
    *(undefined4 *)(param_1[0x29] + 4) = uVar10;
    *(undefined4 *)(param_1[0x29] + 8) = uVar10;
    *(undefined4 *)(param_1[0x29] + 0xc) = uVar10;
    *(undefined4 *)param_1[0x2a] = uVar10;
    *(undefined4 *)(param_1[0x2a] + 4) = uVar10;
    *(undefined4 *)(param_1[0x2a] + 8) = uVar10;
    *(undefined4 *)(param_1[0x2a] + 0xc) = uVar10;
    *(undefined4 *)param_1[0x2b] = uVar10;
    *(undefined4 *)(param_1[0x2b] + 4) = uVar10;
    *(undefined4 *)(param_1[0x2b] + 8) = uVar10;
    *(undefined4 *)(param_1[0x2b] + 0xc) = uVar10;
    *(undefined4 *)param_1[0x2c] = uVar10;
    *(undefined4 *)(param_1[0x2c] + 4) = uVar10;
    *(undefined4 *)(param_1[0x2c] + 8) = uVar10;
    *(undefined4 *)(param_1[0x2c] + 0xc) = uVar10;
    *(undefined4 *)param_1[0x2d] = uVar10;
    *(undefined4 *)(param_1[0x2d] + 4) = uVar10;
    *(undefined4 *)(param_1[0x2d] + 8) = uVar10;
    *(undefined4 *)(param_1[0x2d] + 0xc) = uVar10;
    *(undefined4 *)param_1[0x2e] = uVar10;
    *(undefined4 *)(param_1[0x2e] + 4) = uVar10;
    *(undefined4 *)(param_1[0x2e] + 8) = uVar10;
    *(undefined4 *)(param_1[0x2e] + 0xc) = uVar10;
    *(undefined4 *)param_1[0x2f] = uVar10;
    *(undefined4 *)(param_1[0x2f] + 4) = uVar10;
    *(undefined4 *)(param_1[0x2f] + 8) = uVar10;
    *(undefined4 *)(param_1[0x2f] + 0xc) = uVar10;
    *(undefined4 *)param_1[0x30] = uVar10;
    *(undefined4 *)(param_1[0x30] + 4) = uVar10;
    *(undefined4 *)(param_1[0x30] + 8) = uVar10;
    *(undefined4 *)(param_1[0x30] + 0xc) = uVar10;
    *(undefined4 *)param_1[0x31] = uVar10;
    *(undefined4 *)(param_1[0x31] + 4) = uVar10;
    *(undefined4 *)(param_1[0x31] + 8) = uVar10;
    *(undefined4 *)(param_1[0x31] + 0xc) = uVar10;
  }
  *(undefined1 (*) [16])(param_1[0x10f] + 9) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1[0x10e] + 9) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1[0x10d] + 9) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1[0x10c] + 9) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1[0x10b] + 9) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1[0x10a] + 9) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1[0x109] + 9) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1[0x108] + 9) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1[0x107] + 9) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1[0x106] + 9) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1[0x105] + 9) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1[0x104] + 9) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1[0x103] + 9) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1[0x102] + 9) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1[0x101] + 9) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1[0x100] + 9) = (undefined1  [16])0x0;
  auVar35 = pshuflw(ZEXT216(_DAT_0f6f9e5a),ZEXT216(_DAT_0f6f9e5a),0);
  uVar10 = auVar35._0_4_;
  *(undefined4 *)(param_1[0x119] + 8) = uVar10;
  *(undefined4 *)(param_1[0x119] + 0xc) = uVar10;
  *(undefined4 *)param_1[0x11a] = uVar10;
  *(undefined4 *)(param_1[0x11a] + 4) = uVar10;
  *(undefined4 *)(param_1[0x11a] + 8) = uVar10;
  *(undefined4 *)(param_1[0x11a] + 0xc) = uVar10;
  *(undefined4 *)param_1[0x11b] = uVar10;
  *(undefined4 *)(param_1[0x11b] + 4) = uVar10;
  *(undefined4 *)(param_1[0x11b] + 8) = uVar10;
  *(undefined4 *)(param_1[0x11b] + 0xc) = uVar10;
  *(undefined4 *)param_1[0x11c] = uVar10;
  *(undefined4 *)(param_1[0x11c] + 4) = uVar10;
  *(undefined4 *)(param_1[0x11c] + 8) = uVar10;
  *(undefined4 *)(param_1[0x11c] + 0xc) = uVar10;
  *(undefined4 *)param_1[0x11d] = uVar10;
  *(undefined4 *)(param_1[0x11d] + 4) = uVar10;
  *(undefined4 *)(param_1[0x11d] + 8) = uVar10;
  *(undefined4 *)(param_1[0x11d] + 0xc) = uVar10;
  *(undefined4 *)param_1[0x11e] = uVar10;
  *(undefined4 *)(param_1[0x11e] + 4) = uVar10;
  *(undefined4 *)(param_1[0x11e] + 8) = uVar10;
  *(undefined4 *)(param_1[0x11e] + 0xc) = uVar10;
  *(undefined4 *)param_1[0x11f] = uVar10;
  *(undefined4 *)(param_1[0x11f] + 4) = uVar10;
  *(undefined4 *)(param_1[0x11f] + 8) = uVar10;
  *(undefined4 *)(param_1[0x11f] + 0xc) = uVar10;
  *(undefined4 *)param_1[0x120] = uVar10;
  *(undefined4 *)(param_1[0x120] + 4) = uVar10;
  *(undefined4 *)(param_1[0x120] + 8) = uVar10;
  *(undefined4 *)(param_1[0x120] + 0xc) = uVar10;
  *(undefined4 *)param_1[0x121] = uVar10;
  *(undefined4 *)(param_1[0x121] + 4) = uVar10;
  *(undefined4 *)(param_1[0x121] + 8) = uVar10;
  *(undefined4 *)(param_1[0x121] + 0xc) = uVar10;
  *(undefined4 *)param_1[0x122] = uVar10;
  *(undefined4 *)(param_1[0x122] + 4) = uVar10;
  *(undefined4 *)(param_1[0x122] + 8) = uVar10;
  *(undefined4 *)(param_1[0x122] + 0xc) = uVar10;
  *(undefined4 *)param_1[0x123] = uVar10;
  *(undefined4 *)(param_1[0x123] + 4) = uVar10;
  *(undefined4 *)(param_1[0x123] + 8) = uVar10;
  *(undefined4 *)(param_1[0x123] + 0xc) = uVar10;
  *(undefined4 *)param_1[0x124] = uVar10;
  *(undefined4 *)(param_1[0x124] + 4) = uVar10;
  *(undefined4 *)(param_1[0x124] + 8) = uVar10;
  *(undefined4 *)(param_1[0x124] + 0xc) = uVar10;
  *(undefined4 *)param_1[0x125] = uVar10;
  *(undefined4 *)(param_1[0x125] + 4) = uVar10;
  *(undefined4 *)(param_1[0x125] + 8) = uVar10;
  *(undefined4 *)(param_1[0x125] + 0xc) = uVar10;
  *(undefined4 *)param_1[0x126] = uVar10;
  *(undefined4 *)(param_1[0x126] + 4) = uVar10;
  *(undefined4 *)(param_1[0x126] + 8) = uVar10;
  *(undefined4 *)(param_1[0x126] + 0xc) = uVar10;
  *(undefined4 *)param_1[0x127] = uVar10;
  *(undefined4 *)(param_1[0x127] + 4) = uVar10;
  *(undefined4 *)(param_1[0x127] + 8) = uVar10;
  *(undefined4 *)(param_1[0x127] + 0xc) = uVar10;
  *(undefined4 *)param_1[0x128] = uVar10;
  *(undefined4 *)(param_1[0x128] + 4) = uVar10;
  *(undefined4 *)(param_1[0x128] + 8) = uVar10;
  *(undefined4 *)(param_1[0x128] + 0xc) = uVar10;
  *(undefined4 *)param_1[0x129] = uVar10;
  *(undefined4 *)(param_1[0x129] + 4) = uVar10;
  *(undefined4 *)(param_1[0x129] + 8) = uVar10;
  *(undefined4 *)(param_1[0x129] + 0xc) = uVar10;
  *(undefined4 *)param_1[0x12a] = uVar10;
  *(undefined4 *)(param_1[0x12a] + 4) = uVar10;
  *(undefined4 *)(param_1[0x12a] + 8) = uVar10;
  *(undefined4 *)(param_1[0x12a] + 0xc) = uVar10;
  *(undefined4 *)param_1[299] = uVar10;
  *(undefined4 *)(param_1[299] + 4) = uVar10;
  *(undefined4 *)(param_1[299] + 8) = uVar10;
  *(undefined4 *)(param_1[299] + 0xc) = uVar10;
  *(undefined4 *)param_1[300] = uVar10;
  *(undefined4 *)(param_1[300] + 4) = uVar10;
  *(undefined4 *)(param_1[300] + 8) = uVar10;
  *(undefined4 *)(param_1[300] + 0xc) = uVar10;
  *(undefined4 *)param_1[0x12d] = uVar10;
  *(undefined4 *)(param_1[0x12d] + 4) = uVar10;
  *(undefined4 *)(param_1[0x12d] + 8) = uVar10;
  *(undefined4 *)(param_1[0x12d] + 0xc) = uVar10;
  *(undefined4 *)param_1[0x12e] = uVar10;
  *(undefined4 *)(param_1[0x12e] + 4) = uVar10;
  *(undefined4 *)(param_1[0x12e] + 8) = uVar10;
  *(undefined4 *)(param_1[0x12e] + 0xc) = uVar10;
  *(undefined4 *)param_1[0x12f] = uVar10;
  *(undefined4 *)(param_1[0x12f] + 4) = uVar10;
  *(undefined4 *)(param_1[0x12f] + 8) = uVar10;
  *(undefined4 *)(param_1[0x12f] + 0xc) = uVar10;
  *(undefined4 *)param_1[0x130] = uVar10;
  *(undefined4 *)(param_1[0x130] + 4) = uVar10;
  *(undefined4 *)(param_1[0x130] + 8) = uVar10;
  *(undefined4 *)(param_1[0x130] + 0xc) = uVar10;
  *(undefined4 *)param_1[0x131] = uVar10;
  *(undefined4 *)(param_1[0x131] + 4) = uVar10;
  *(undefined4 *)(param_1[0x131] + 8) = uVar10;
  *(undefined4 *)(param_1[0x131] + 0xc) = uVar10;
  *(undefined4 *)param_1[0x132] = uVar10;
  *(undefined4 *)(param_1[0x132] + 4) = uVar10;
  *(undefined4 *)(param_1[0x132] + 8) = uVar10;
  *(undefined4 *)(param_1[0x132] + 0xc) = uVar10;
  *(undefined4 *)param_1[0x133] = uVar10;
  *(undefined4 *)(param_1[0x133] + 4) = uVar10;
  *(undefined4 *)(param_1[0x133] + 8) = uVar10;
  *(undefined4 *)(param_1[0x133] + 0xc) = uVar10;
  *(undefined4 *)param_1[0x134] = uVar10;
  *(undefined4 *)(param_1[0x134] + 4) = uVar10;
  *(undefined4 *)(param_1[0x134] + 8) = uVar10;
  *(undefined4 *)(param_1[0x134] + 0xc) = uVar10;
  *(undefined4 *)param_1[0x135] = uVar10;
  *(undefined4 *)(param_1[0x135] + 4) = uVar10;
  *(undefined4 *)(param_1[0x135] + 8) = uVar10;
  *(undefined4 *)(param_1[0x135] + 0xc) = uVar10;
  *(undefined4 *)param_1[0x136] = uVar10;
  *(undefined4 *)(param_1[0x136] + 4) = uVar10;
  *(undefined4 *)(param_1[0x136] + 8) = uVar10;
  *(undefined4 *)(param_1[0x136] + 0xc) = uVar10;
  *(undefined4 *)param_1[0x137] = uVar10;
  *(undefined4 *)(param_1[0x137] + 4) = uVar10;
  *(undefined4 *)(param_1[0x137] + 8) = uVar10;
  *(undefined4 *)(param_1[0x137] + 0xc) = uVar10;
  *(undefined4 *)param_1[0x138] = uVar10;
  *(undefined4 *)(param_1[0x138] + 4) = uVar10;
  *(undefined4 *)(param_1[0x138] + 8) = uVar10;
  *(undefined4 *)(param_1[0x138] + 0xc) = uVar10;
  *(undefined4 *)param_1[0x139] = uVar10;
  *(undefined4 *)(param_1[0x139] + 4) = uVar10;
  cVar7 = (**(code **)(**(long **)(param_1[2] + 8) + 0x9f0))();
  if (cVar7 == '\0') {
    (**(code **)(**(long **)(param_1[2] + 8) + 0x960))(&pcStack_68);
    uVar27 = uStack_58;
    plVar13 = plStack_60;
    auStack_88[0] = uStack_58;
    if ((pcStack_68 != (char *)0x0) && (*pcStack_68 == '\x01')) {
      uVar10 = (**(code **)(*param_2 + 0x18))();
      func_0x0b6b74d0(&pcStack_68,uVar27,pauVar33,uVar10);
      lVar18 = *(long *)*pauVar1;
      if (lVar18 != 0) {
        lVar31 = *(long *)(param_1[0x147] + 8);
        lVar16 = lVar18;
        if (lVar18 != lVar31) {
          do {
            if (*(long *)(lVar31 + -0x10) != 0) {
              func_0x0412c2d0();
            }
            lVar31 = lVar31 + -0x18;
          } while (lVar31 != lVar18);
          lVar16 = *(long *)*pauVar1;
        }
        *(long *)(param_1[0x147] + 8) = lVar18;
        func_0x0412a280(lVar16,*(long *)param_1[0x148] - lVar16);
        *pauVar1 = (undefined1  [16])0x0;
        *(undefined8 *)param_1[0x148] = 0;
      }
      *(char **)param_1[0x147] = pcStack_68;
      *(long **)(param_1[0x147] + 8) = plStack_60;
      *(ulong *)param_1[0x148] = uStack_58;
    }
    auStack_98 = (undefined1  [16])0x0;
    if (plVar13 != (long *)0x0) {
      LOCK();
      plVar24 = plVar13 + 1;
      lVar18 = *plVar24;
      *plVar24 = *plVar24 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        func_0x0412c2d0(plVar13);
        uVar15 = auStack_98._8_8_;
        auStack_88[0] = 0;
        if ((long *)auStack_98._8_8_ != (long *)0x0) {
          auStack_88[0] = 0;
          LOCK();
          plVar13 = (long *)(auStack_98._8_8_ + 8);
          lVar18 = *plVar13;
          *plVar13 = *plVar13 + -1;
          UNLOCK();
          if (lVar18 == 0) {
            (**(code **)(*(long *)auStack_98._8_8_ + 0x10))(auStack_98._8_8_);
            func_0x0412c2d0(uVar15);
          }
        }
      }
      else {
        auStack_88[0] = 0;
      }
    }
  }
  else {
    *(undefined4 *)(param_1[0x111] + 4) = 2;
  }
  if (1 < uVar26) {
    if (uVar26 == 3) {
      lStack_b8 = FUN_0cc41df0(&DAT_0f6ff9e0,0xf6eae78,1);
      goto LAB_0cad9a6b;
    }
    if (uVar26 != 4) {
      lStack_b8 = 0;
      goto LAB_0cad9a6b;
    }
  }
  if ((_DAT_0f6ffb10 == (long *)0x0) &&
     (cVar7 = func_0x0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868,&UNK_013a2901),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  lStack_b8 = *(long *)(*_DAT_0f6ffb10 + 0x200);
LAB_0cad9a6b:
  sVar29 = *(short *)(*(long *)param_1[3] + 0xa8);
  sVar17 = sVar29 + 0xf;
  if (-1 < sVar29) {
    sVar17 = sVar29;
  }
  lVar18 = *(long *)(param_1[0x10] + 8);
  uVar9 = *(ushort *)(*(long *)param_1[3] + 0xaa);
  uVar27 = (ulong)(uVar9 + 0xf);
  if (-1 < (short)uVar9) {
    uVar27 = (ulong)uVar9;
  }
  if (*(long *)param_1[0x11] != lVar18) {
    cVar7 = (char)((uint)(int)sVar17 >> 4);
    lVar31 = 0;
    uVar20 = 0;
    do {
      lVar16 = lStack_b8;
      if ((ulong)(long)((int)(char)(uVar27 >> 4) - (int)cVar7) <= uVar20) {
        if ((_DAT_0f6ffb10 == (long *)0x0) &&
           (cVar8 = func_0x0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868,&UNK_013a2901),
           cVar8 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        lVar16 = *(long *)(*_DAT_0f6ffb10 + 0x200);
      }
      *(char *)(lVar18 + 0x61 + lVar31) = cVar7 + (char)uVar20;
      plVar13 = *(long **)(lVar18 + 0x20 + lVar31);
      *(undefined8 *)(lVar18 + 0x20 + lVar31) = 0;
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 8))();
      }
      plVar13 = *(long **)(lVar18 + 0x28 + lVar31);
      *(undefined1 (*) [16])(lVar18 + 0x28 + lVar31) = (undefined1  [16])0x0;
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 8))();
      }
      *(undefined8 *)(lVar18 + 0x38 + lVar31) = 0;
      *(undefined1 *)(lVar18 + 100 + lVar31) = 1;
      if (lVar16 == 0) {
        lVar16 = FUN_0cc41df0(&DAT_0f6ff9e0,&DAT_0f6eaec0,1);
      }
      func_0x0ca92690(lVar18 + lVar31,lVar16,1,0);
      if (uVar26 < 5) {
        (**(code **)(**(long **)(param_1[2] + 8) + 0x9f0))();
      }
      uVar20 = uVar20 + 1;
      lVar18 = *(long *)(param_1[0x10] + 8);
      lVar31 = lVar31 + 0x68;
    } while (uVar20 < (ulong)((*(long *)param_1[0x11] - lVar18 >> 3) * 0x4ec4ec4ec4ec4ec5));
  }
  if (((param_6 != '\0') &&
      (cVar7 = (**(code **)(**(long **)(param_1[2] + 8) + 0x9f0))(), cVar7 == '\0')) &&
     (lVar18 = (**(code **)(**(long **)(param_1[2] + 8) + 0x770))(), lVar18 != 0)) {
    uVar10 = (**(code **)(**(long **)param_1[3] + 0x18))();
    lVar18 = *(long *)param_1[3];
    uVar6 = (**(code **)(**(long **)(param_1[2] + 8) + 0xbe8))();
    lVar31 = (**(code **)(**(long **)(param_1[2] + 8) + 0x568))();
    lVar16 = func_0x0d2279e0(lVar31 + 0x518,0xf71d538);
    if (((lVar16 == 0) && (lVar16 = func_0x0d2279e0(lVar31 + 0x4f0,0xf71d538), lVar16 == 0)) ||
       (*(int *)(lVar16 + 0x50) != 7)) {
      uVar15 = 0;
    }
    else {
      uVar15 = *(undefined8 *)(lVar16 + 0x38);
    }
    lVar31 = (**(code **)(**(long **)(param_1[2] + 8) + 0x568))();
    if (*(char *)(lVar31 + 0x55c) == '\x01') {
      uVar32 = *(undefined4 *)(lVar31 + 0x558);
    }
    else {
      lVar16 = func_0x0d2279e0(lVar31 + 0x518,0xf71d720);
      if ((lVar16 == 0) && (lVar16 = func_0x0d2279e0(lVar31 + 0x4f0,0xf71d720), lVar16 == 0)) {
        uVar32 = 1;
      }
      else {
        uVar32 = 1;
        if (*(int *)(lVar16 + 0x50) == 4) {
          uVar32 = *(undefined4 *)(lVar16 + 0x38);
        }
      }
    }
    lVar31 = (**(code **)(**(long **)(param_1[2] + 8) + 0x568))();
    puVar23 = (undefined *)(lVar31 + 0x50);
    puVar28 = puVar23;
    if ((*(char *)(lVar31 + 0x77) == '\0') &&
       (((puVar22 = (undefined *)(lVar31 + 0x70), *(char *)(lVar31 + 0x68) != '\0' ||
         (puVar28 = puVar22, (*(byte *)(lVar31 + 0x56) & 1) != 0)) &&
        (cVar7 = FUN_04fa7a10(puVar22,puVar23), puVar28 = puVar23, cVar7 != '\0')))) {
      puVar28 = puVar22;
    }
    puVar23 = &DAT_0f72b850;
    if (((puVar28[6] | puVar28[0x18]) & 1) != 0) {
      puVar23 = puVar28;
    }
    func_0x0d88e390(auStack_98,puVar23);
    func_0x0c940570(&uStack_48,uVar10,lVar18 + 0x140,lVar18 + 0xa8,uVar6,uVar15,uVar32,auStack_98);
    plVar24 = plStack_40;
    uVar15 = uStack_48;
    uStack_48 = 0;
    plStack_40 = (long *)0x0;
    plVar13 = *(long **)param_1[0x14c];
    *(undefined8 *)(param_1[0x14b] + 8) = uVar15;
    *(long **)param_1[0x14c] = plVar24;
    if (plVar13 != (long *)0x0) {
      LOCK();
      plVar24 = plVar13 + 1;
      lVar18 = *plVar24;
      *plVar24 = *plVar24 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        func_0x0412c2d0(plVar13);
      }
    }
    plVar13 = plStack_40;
    if (plStack_40 != (long *)0x0) {
      LOCK();
      plVar24 = plStack_40 + 1;
      lVar18 = *plVar24;
      *plVar24 = *plVar24 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        func_0x0412c2d0(plVar13);
      }
    }
    if ((auStack_88[0] >> 0x37 & 1) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(auStack_88[0] & 0xff00ffffffffffff) - 8);
    }
    auStack_88[0] = 0;
    if ((auStack_98._8_8_ & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(auStack_98._8_8_ & 0xff00ffffffffffff) - 8)
      ;
    }
  }
  return;
}


