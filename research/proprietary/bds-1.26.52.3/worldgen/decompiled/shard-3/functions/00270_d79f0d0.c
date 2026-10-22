/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd89f0d0 (ELF vaddr 0xd79f0d0)
 * Label: callee-of:0x871a310
 * Body:  [[0d89f0d0, 0d89f1ab] [0d89f1b0, 0d89f1f2] [0d89f200, 0d89f9ce]]
 * Ghidra: FUN_0d89f0d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d89f0d0(long param_1)

{
  uint *puVar1;
  long *plVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  int *piVar10;
  ulong uVar11;
  byte *pbVar12;
  long lVar13;
  byte *pbVar14;
  code *pcVar15;
  bool bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  undefined1 *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined4 uStack_1c0;
  undefined8 uStack_1b8;
  long *plStack_1b0;
  undefined1 auStack_1a8 [16];
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined4 uStack_180;
  char cStack_17c;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  char cStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  int iStack_78;
  undefined4 uStack_74;
  char cStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  char cStack_38;
  
  lVar7 = func_0x072a3240(param_1 + 0x18);
  if ((*(int *)(lVar7 + 0x60) == -0x2b3da790) && (lVar7 = *(long *)(lVar7 + 0x68), lVar7 != 0)) {
    bVar16 = (*(byte *)(lVar7 + 8) & 1) != 0;
    lVar13 = lVar7 + 9;
    if (bVar16) {
      lVar13 = *(long *)(lVar7 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar7 + 8) >> 1);
    if (bVar16) {
      uVar11 = *(ulong *)(lVar7 + 0x10);
    }
    func_0x0d8b2210(&uStack_a0,param_1,lVar13,uVar11);
  }
  else {
    func_0x0d8b2210(&uStack_a0,param_1,&UNK_012ea577,10);
  }
  if (cStack_70 != '\0') {
    return;
  }
  lVar13 = uStack_a0 + 0x18;
  lVar7 = func_0x072a3240(lVar13);
  for (pbVar12 = *(byte **)(uStack_a0 + 0x50); pbVar12 != *(byte **)(uStack_a0 + 0x58);
      pbVar12 = pbVar12 + 0x38) {
    bVar3 = *pbVar12;
    if ((bVar3 & 1) == 0) {
      if (bVar3 >> 1 == 0x1d) goto LAB_0d89f20a;
    }
    else if (*(long *)(pbVar12 + 8) == 0x1d) {
LAB_0d89f20a:
      if ((bVar3 & 1) == 0) {
        pbVar14 = pbVar12 + 1;
      }
      else {
        pbVar14 = *(byte **)(pbVar12 + 0x10);
      }
      auVar17[0] = -(*pbVar14 == DAT_014e4030);
      auVar17[1] = -(pbVar14[1] == DAT_014e4030._1_1_);
      auVar17[2] = -(pbVar14[2] == DAT_014e4030._2_1_);
      auVar17[3] = -(pbVar14[3] == DAT_014e4030._3_1_);
      auVar17[4] = -(pbVar14[4] == DAT_014e4030._4_1_);
      auVar17[5] = -(pbVar14[5] == DAT_014e4030._5_1_);
      auVar17[6] = -(pbVar14[6] == DAT_014e4030._6_1_);
      auVar17[7] = -(pbVar14[7] == DAT_014e4030._7_1_);
      auVar17[8] = -(pbVar14[8] == DAT_014e4030._8_1_);
      auVar17[9] = -(pbVar14[9] == DAT_014e4030._9_1_);
      auVar17[10] = -(pbVar14[10] == DAT_014e4030._10_1_);
      auVar17[0xb] = -(pbVar14[0xb] == DAT_014e4030._11_1_);
      auVar17[0xc] = -(pbVar14[0xc] == DAT_014e4030._12_1_);
      auVar17[0xd] = -(pbVar14[0xd] == DAT_014e4030._13_1_);
      auVar17[0xe] = -(pbVar14[0xe] == DAT_014e4030._14_1_);
      auVar17[0xf] = -(pbVar14[0xf] == DAT_014e4030._15_1_);
      auVar18[0] = -(pbVar14[0xd] == DAT_014e1610);
      auVar18[1] = -(pbVar14[0xe] == DAT_014e1610._1_1_);
      auVar18[2] = -(pbVar14[0xf] == DAT_014e1610._2_1_);
      auVar18[3] = -(pbVar14[0x10] == DAT_014e1610._3_1_);
      auVar18[4] = -(pbVar14[0x11] == DAT_014e1610._4_1_);
      auVar18[5] = -(pbVar14[0x12] == DAT_014e1610._5_1_);
      auVar18[6] = -(pbVar14[0x13] == DAT_014e1610._6_1_);
      auVar18[7] = -(pbVar14[0x14] == DAT_014e1610._7_1_);
      auVar18[8] = -(pbVar14[0x15] == DAT_014e1610._8_1_);
      auVar18[9] = -(pbVar14[0x16] == DAT_014e1610._9_1_);
      auVar18[10] = -(pbVar14[0x17] == DAT_014e1610._10_1_);
      auVar18[0xb] = -(pbVar14[0x18] == DAT_014e1610._11_1_);
      auVar18[0xc] = -(pbVar14[0x19] == DAT_014e1610._12_1_);
      auVar18[0xd] = -(pbVar14[0x1a] == DAT_014e1610._13_1_);
      auVar18[0xe] = -(pbVar14[0x1b] == DAT_014e1610._14_1_);
      auVar18[0xf] = -(pbVar14[0x1c] == DAT_014e1610._15_1_);
      auVar18 = auVar18 & auVar17;
      if ((ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar18[0xf] >> 7) << 0xf) == 0xffff) break;
    }
  }
  if (pbVar12 == *(byte **)(uStack_a0 + 0x58)) {
LAB_0d89f239:
    if (iStack_78 == 0) {
      if ((*(int *)(lVar7 + 0x60) != -0x2b3da790) || (*(long *)(lVar7 + 0x68) == 0))
      goto LAB_0d89f2ad;
      lVar7 = *(long *)(lVar7 + 0x68) + 0x38;
    }
    else {
      lVar7 = func_0x048b0c90(lVar13,lVar7,uStack_74,1);
      if (lVar7 == 0) {
        auStack_1a8 = (undefined1  [16])0x0;
        FUN_048b0d20(auStack_1a8);
        lVar7 = auStack_1a8._0_8_;
        if (auStack_1a8._0_8_ == 0) goto LAB_0d89f2ad;
      }
      if ((*(int *)(lVar7 + 0x50) == -0x45dcb126) && (*(long *)(lVar7 + 0x58) != 0)) {
        lVar7 = *(long *)(lVar7 + 0x58) + 0x40;
      }
      else {
LAB_0d89f2ad:
        lVar7 = 0;
      }
    }
    uStack_210 = 0;
    puStack_200 = &UNK_048b4ab0;
    pcStack_1f8 = (code *)&UNK_048b49f0;
    uStack_1f0 = CONCAT35(uStack_1f0._5_3_,0x1d33bd9c5);
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    if (puVar8 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x38,0);
    }
    *puVar8 = 0x615274616f6c4614;
    *(undefined2 *)(puVar8 + 1) = 0x676e;
    *(undefined1 *)((long)puVar8 + 10) = 0x65;
    *(undefined1 *)((long)puVar8 + 0xb) = 0;
    *(undefined4 *)((long)puVar8 + 0xc) = 0;
    puVar8[2] = 0;
    *(undefined2 *)(puVar8 + 3) = 0x400;
    *(undefined1 (*) [16])(puVar8 + 4) = (undefined1  [16])0x0;
    puVar8[6] = 0;
    uStack_190 = (code *)&UNK_048b4ab0;
    pcStack_188 = (code *)&UNK_048b49f0;
    uStack_180 = 0xd33bd9c5;
    cStack_17c = '\x01';
    uStack_210 = 0;
    auStack_1a8._8_8_ = puVar8;
    auStack_1a8._0_8_ = &UNK_048b46e0;
    puStack_c8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_c8 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x20,0);
    }
    uVar5 = _UNK_014d987e;
    uStack_d8 = 0x21;
    uStack_d0 = 0x1d;
    *(ulong *)((long)puStack_c8 + 0xd) = CONCAT53(_UNK_014d9879,_DAT_014d9876);
    *(undefined8 *)((long)puStack_c8 + 0x15) = uVar5;
    uVar5 = CONCAT35(_DAT_014d9876,_UNK_014d9871);
    *puStack_c8 = _DAT_014d9869;
    puStack_c8[1] = uVar5;
    *(undefined1 *)((long)puStack_c8 + 0x1d) = 0;
    lVar7 = func_0x048b5060(lVar7,&uStack_d8);
    *(undefined **)(lVar7 + 0x20) = &UNK_048b46e0;
    pcVar15 = (code *)&UNK_048b49f0;
    if ((undefined1 *)(lVar7 + 0x20) != auStack_1a8) {
      puVar8 = (undefined8 *)(lVar7 + 0x28);
      if (*(code **)(lVar7 + 0x40) == (code *)0x0) {
LAB_0d89f458:
        uVar5 = auStack_1a8._8_8_;
        auStack_1a8._8_8_ = 0;
        *puVar8 = uVar5;
      }
      else {
        (**(code **)(lVar7 + 0x40))(puVar8);
        if (cStack_17c != '\0') {
          if (cStack_17c != '\x02') goto LAB_0d89f458;
          (*uStack_190)(5,auStack_1a8 + 8,puVar8);
        }
      }
      *(code **)(lVar7 + 0x38) = uStack_190;
      *(code **)(lVar7 + 0x40) = pcStack_188;
      *(undefined4 *)(lVar7 + 0x48) = uStack_180;
      *(char *)(lVar7 + 0x4c) = cStack_17c;
      pcVar15 = pcStack_188;
    }
    if ((uStack_d8 & 1) != 0) {
      func_0x0412a280(puStack_c8,uStack_d8 & 0xfffffffffffffffe);
      pcVar15 = pcStack_188;
    }
    if (pcVar15 != (code *)0x0) {
      (*pcVar15)(auStack_1a8 + 8);
    }
    if (pcStack_1f8 != (code *)0x0) {
      (*pcStack_1f8)(&uStack_210);
    }
  }
  else {
    iVar4 = *(int *)(pbVar12 + 0x1c);
    if ((DAT_0f550768 == '\0') && (iVar6 = func_0x04108328(&DAT_0f550768), iVar6 != 0)) {
      func_0x048b46f0(0xf550750);
      func_0x0410844d(&DAT_0f550768);
    }
    if (iVar4 == _DAT_0f550754) goto LAB_0d89f239;
  }
  cStack_38 = cStack_70;
  uStack_40 = CONCAT44(uStack_74,iStack_78);
  uStack_48 = uStack_80;
  uStack_58 = uStack_90;
  uStack_50 = uStack_88;
  uStack_68 = uStack_a0;
  uStack_60 = uStack_98;
  func_0x0d8b2750(auStack_1a8,uStack_a0 + 0x18);
  if (uStack_190._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_194,uStack_198) + 0x78) + 0x60);
    iVar4 = *piVar10;
    while (iVar4 != (int)uStack_190) {
      piVar10 = piVar10 + 0x16;
      iVar4 = *piVar10;
    }
    lVar7 = *(long *)(piVar10 + 0xc);
    while (lVar7 != auStack_1a8._8_8_) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar7 = *(long *)(piVar10 + 0xc);
    }
LAB_0d89f58f:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
  }
  else {
    if (uStack_190._4_4_ == 1) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_194,uStack_198) + 0x78) + 0x48);
      iVar4 = *piVar10;
      while (iVar4 != (int)uStack_190) {
        piVar10 = piVar10 + 0x1a;
        iVar4 = *piVar10;
      }
      goto LAB_0d89f58f;
    }
    if (uStack_190._4_4_ == 0) {
      puVar1 = (uint *)(CONCAT44(uStack_194,uStack_198) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
  }
  func_0x0d8b2ab0(auStack_1a8,&uStack_68,&UNK_011e9523);
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar9 == (long *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *plVar9 = (long)&UNK_0f0126a0;
  if (uStack_190 != (code *)0x0) {
    lVar7 = *(long *)uStack_190;
    uStack_190 = (code *)plVar9;
    (**(code **)(lVar7 + 8))();
    plVar9 = (long *)uStack_190;
  }
  uStack_190 = (code *)plVar9;
  uStack_210 = CONCAT44(uStack_210._4_4_,uStack_198);
  uStack_208 = 0;
  puStack_200 = (undefined *)((ulong)puStack_200 & 0xffffffff00000000);
  pcStack_1f8 = (code *)0x1;
  uStack_1f0 = 0;
  puStack_1e8 = &UNK_05daeda0;
  puStack_1e0 = &SUB_048b06d0;
  puStack_1d8 = &UNK_05daea90;
  puStack_1d0 = &UNK_0d8b2f40;
  puStack_1c8 = &UNK_0d8b30a0;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  plStack_1b0 = (long *)0x0;
  FUN_048b05a0(auStack_1a8._8_8_,&uStack_210);
  plVar9 = plStack_1b0;
  if (plStack_1b0 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_1b0 + 1;
    lVar7 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_1b0 + 0x10))(plStack_1b0);
      func_0x0412c2d0(plVar9);
    }
  }
  func_0x0d8b2c40(auStack_1a8);
  cStack_a8 = cStack_38;
  uStack_b8 = uStack_48;
  uStack_b0 = uStack_40;
  puStack_c8 = (undefined8 *)uStack_58;
  uStack_c0 = uStack_50;
  uStack_d8 = uStack_68;
  uStack_d0 = uStack_60;
  func_0x048b0bc0(&uStack_190);
  func_0x0d8b2750(auStack_1a8,uStack_d8 + 0x18);
  if (uStack_190._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_194,uStack_198) + 0x78) + 0x60);
    iVar4 = *piVar10;
    while (iVar4 != (int)uStack_190) {
      piVar10 = piVar10 + 0x16;
      iVar4 = *piVar10;
    }
    lVar7 = *(long *)(piVar10 + 0xc);
    while (lVar7 != auStack_1a8._8_8_) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar7 = *(long *)(piVar10 + 0xc);
    }
  }
  else {
    if (uStack_190._4_4_ != 1) {
      if (uStack_190._4_4_ == 0) {
        puVar1 = (uint *)(CONCAT44(uStack_194,uStack_198) + 0x18);
        *puVar1 = *puVar1 | 0x40000;
      }
      goto LAB_0d89f7d3;
    }
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_194,uStack_198) + 0x78) + 0x48);
    iVar4 = *piVar10;
    while (iVar4 != (int)uStack_190) {
      piVar10 = piVar10 + 0x1a;
      iVar4 = *piVar10;
    }
  }
  *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
LAB_0d89f7d3:
  func_0x0d8b2ab0(auStack_1a8,&uStack_d8,&UNK_012ba56c);
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar8 == (undefined8 *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *puVar8 = &UNK_0f0126a0;
  if (uStack_190 != (code *)0x0) {
    lVar7 = *(long *)uStack_190;
    uStack_190 = (code *)puVar8;
    (**(code **)(lVar7 + 8))();
    puVar8 = (undefined8 *)uStack_190;
  }
  uStack_190 = (code *)puVar8;
  uStack_210 = CONCAT44(uStack_210._4_4_,uStack_198);
  uStack_208 = 0;
  puStack_200 = (undefined *)((ulong)puStack_200 & 0xffffffff00000000);
  pcStack_1f8 = (code *)0x1;
  uStack_1f0 = 0;
  puStack_1e8 = &UNK_05daeda0;
  puStack_1e0 = &SUB_048b06d0;
  puStack_1d8 = &UNK_05daea90;
  puStack_1d0 = &UNK_0d8b3270;
  puStack_1c8 = &UNK_0d8b33d0;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  plStack_1b0 = (long *)0x0;
  FUN_048b05a0(auStack_1a8._8_8_,&uStack_210);
  plVar9 = plStack_1b0;
  if (plStack_1b0 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_1b0 + 1;
    lVar7 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_1b0 + 0x10))(plStack_1b0);
      func_0x0412c2d0(plVar9);
    }
  }
  func_0x0d8b2c40(auStack_1a8);
  func_0x048b0bc0(&uStack_190);
  return;
}



/* ---- referenced strings ----
 * 0x14d9869  [cereal:json_schema_property]
 * 0x14d9876  schema_property]
 * 0x14e1610  schema_property]
 * 0x14e4030  [cereal:json_sch
 */
