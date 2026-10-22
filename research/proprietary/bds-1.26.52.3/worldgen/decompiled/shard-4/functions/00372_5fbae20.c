/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x60bae20 (ELF vaddr 0x5fbae20)
 * Label: caller-of-callee
 * Body:  [[060bae20, 060bb551] [060bb560, 060bbd11] [060bbd20, 060bbf6a]]
 * Ghidra: FUN_060bae20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_060bae20(long param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  undefined5 uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  undefined1 *puVar13;
  int *piVar14;
  ulong uVar15;
  uint *puVar16;
  long lVar17;
  byte unaff_BPL;
  long lVar18;
  undefined1 *puVar19;
  bool bVar20;
  byte bStack_1b0;
  undefined1 uStack_1af;
  undefined2 uStack_1ae;
  undefined4 uStack_1ac;
  char cStack_1a8;
  undefined4 uStack_1a7;
  undefined4 uStack_1a3;
  undefined4 uStack_19f;
  undefined1 uStack_19b;
  undefined2 uStack_19a;
  undefined8 uStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  undefined1 uStack_170;
  undefined4 uStack_16f;
  undefined2 uStack_16b;
  undefined1 uStack_169;
  undefined1 uStack_168;
  undefined2 uStack_167;
  undefined1 uStack_165;
  undefined4 uStack_164;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  undefined4 uStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined2 uStack_f0;
  undefined2 uStack_ee;
  uint uStack_ec;
  uint uStack_e8;
  undefined1 uStack_e4;
  undefined4 auStack_e0 [2];
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  long lStack_68;
  undefined1 auStack_60 [32];
  undefined8 uStack_40;
  char cStack_38;
  
  bStack_1b0 = 0x28;
  uStack_1af = (undefined1)_DAT_012a59b0;
  uStack_1ae = (undefined2)((uint)_DAT_012a59b0 >> 8);
  uStack_1ac._1_3_ = (undefined3)_UNK_012a59b4;
  uStack_1ac = CONCAT31(uStack_1ac._1_3_,(char)((uint)_DAT_012a59b0 >> 0x18));
  cStack_1a8 = (char)((uint)_UNK_012a59b4 >> 0x18);
  uStack_1a7 = _UNK_012a59b8;
  uStack_1a3 = _UNK_012a59bc;
  uStack_19f = 0x64495f74;
  uStack_19b = 0;
  if ((DAT_0f569038 == '\0') && (iVar8 = FUN_04108328(&DAT_0f569038), iVar8 != 0)) {
    func_0x06164230();
    __cxa_atexit(&UNK_048ae800,&DAT_0f568fb8,0xf53dab8);
    func_0x0410844d(&DAT_0f569038);
  }
  puVar19 = &uStack_1af;
  plVar11 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f568fb8 + 4)) * 8);
  do {
    lVar18 = *plVar11;
    if (lVar18 == -1) goto LAB_060baeb0;
    plVar11 = (long *)(*(long *)(param_1 + 0x30) + lVar18 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar18 * 0x18) != *(uint *)(_DAT_0f568fb8 + 4))
  ;
  if (plVar11 == *(long **)(param_1 + 0x38)) {
LAB_060baeb0:
    puVar9 = &DAT_0f568fb8;
    if (iRam000000000f569018 != -0x2b3da790) goto LAB_060baf10;
LAB_060baedb:
    lVar18 = *(long *)(puVar9 + 0x68);
    if (lVar18 == 0) goto LAB_060baf10;
    bVar20 = (*(byte *)(lVar18 + 8) & 1) != 0;
    lVar17 = lVar18 + 9;
    if (bVar20) {
      lVar17 = *(long *)(lVar18 + 0x18);
    }
    uVar15 = (ulong)(*(byte *)(lVar18 + 8) >> 1);
    if (bVar20) {
      uVar15 = *(ulong *)(lVar18 + 0x10);
    }
    func_0x06164650(&lStack_68,param_1,lVar17,uVar15);
  }
  else {
    puVar9 = (undefined *)plVar11[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_060baedb;
LAB_060baf10:
    uVar15 = 0x14;
    func_0x06164650(&lStack_68,param_1,puVar19,0x14);
    if ((bStack_1b0 & 1) != 0) {
      func_0x0412a280(CONCAT26(uStack_19a,CONCAT15(uStack_19b,CONCAT41(uStack_19f,uStack_1a3._3_1_))
                              ),
                      CONCAT44(uStack_1ac,CONCAT22(uStack_1ae,CONCAT11(uStack_1af,bStack_1b0))) &
                      0xfffffffffffffffe);
    }
  }
  if (cStack_38 == '\0') {
    func_0x06164c40(&bStack_1b0,lStack_68 + 0x18);
    if (uStack_198._4_4_ == 2) {
      piVar14 = *(int **)(*(long *)(CONCAT26(uStack_19a,
                                             CONCAT15(uStack_19b,
                                                      CONCAT41(uStack_19f,uStack_1a3._3_1_))) + 0x78
                                   ) + 0x60);
      iVar8 = *piVar14;
      while (iVar8 != (int)uStack_198) {
        piVar14 = piVar14 + 0x16;
        iVar8 = *piVar14;
      }
      lVar18 = *(long *)(piVar14 + 0xc);
      while (lVar18 != CONCAT35((undefined3)uStack_1a3,CONCAT41(uStack_1a7,cStack_1a8))) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar18 = *(long *)(piVar14 + 0xc);
      }
LAB_060bafbf:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
    }
    else {
      if (uStack_198._4_4_ == 1) {
        piVar14 = *(int **)(*(long *)(CONCAT26(uStack_19a,
                                               CONCAT15(uStack_19b,
                                                        CONCAT41(uStack_19f,uStack_1a3._3_1_))) +
                                     0x78) + 0x48);
        iVar8 = *piVar14;
        while (iVar8 != (int)uStack_198) {
          piVar14 = piVar14 + 0x1a;
          iVar8 = *piVar14;
        }
        goto LAB_060bafbf;
      }
      if (uStack_198._4_4_ == 0) {
        puVar16 = (uint *)(CONCAT26(uStack_19a,
                                    CONCAT15(uStack_19b,CONCAT41(uStack_19f,uStack_1a3._3_1_))) +
                          0x18);
        *puVar16 = *puVar16 | 0x40000;
      }
    }
    if ((DAT_0f569058 == '\0') && (iVar8 = FUN_04108328(&DAT_0f569058), iVar8 != 0)) {
      func_0x06164340();
      func_0x0410844d(&DAT_0f569058);
    }
    lVar18 = lStack_68;
    uStack_40 = 0x425ed3ca00000001;
    if ((DAT_0f569038 == '\0') && (iVar8 = FUN_04108328(&DAT_0f569038), iVar8 != 0)) {
      func_0x06164230();
      __cxa_atexit(&UNK_048ae800,&DAT_0f568fb8,0xf53dab8);
      func_0x0410844d(&DAT_0f569038);
    }
    lVar17 = lVar18 + 0x18;
    plVar11 = (long *)(*(long *)(lVar18 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar18 + 0x20) - *(long *)(lVar18 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f568fb8 + 4)) * 8);
    do {
      lVar3 = *plVar11;
      if (lVar3 == -1) goto LAB_060bb061;
      plVar11 = (long *)(*(long *)(lVar18 + 0x30) + lVar3 * 0x18);
    } while (*(uint *)(*(long *)(lVar18 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f568fb8 + 4))
    ;
    if (plVar11 == *(long **)(lVar18 + 0x38)) {
LAB_060bb061:
      puVar9 = &DAT_0f568fb8;
    }
    else {
      puVar9 = (undefined *)plVar11[2];
    }
    bStack_1b0 = (byte)puVar9;
    uStack_1af = (undefined1)((ulong)puVar9 >> 8);
    uStack_1ae = (undefined2)((ulong)puVar9 >> 0x10);
    uStack_1ac = (undefined4)((ulong)puVar9 >> 0x20);
    cStack_1a8 = (char)lVar17;
    uStack_1a7 = (undefined4)((ulong)lVar17 >> 8);
    uStack_1a3._0_3_ = (undefined3)((ulong)lVar17 >> 0x28);
    func_0x0ed621a0(&bStack_1b0,uStack_40._4_4_);
    bStack_1b0 = 0x10;
    uStack_1af = 0;
    cStack_1a8 = (char)auStack_60;
    uStack_1a7 = (undefined4)((ulong)auStack_60 >> 8);
    uStack_1a3._0_3_ = (undefined3)((ulong)auStack_60 >> 0x28);
    uStack_1a3._3_1_ = (undefined1)((ulong)uStack_40 >> 0x20);
    uStack_19f._0_3_ = (undefined3)((ulong)uStack_40 >> 0x28);
    uStack_198 = (long *)0x0;
    lStack_190 = 0;
    lStack_188 = 0;
    lStack_180 = 0;
    lStack_178 = 0;
    uStack_170 = 10;
    uStack_16f = 0x756c6176;
    uStack_16b = 0x65;
    lStack_158 = 0;
    lStack_150 = 0;
    lStack_148 = 0;
    lStack_140 = 0;
    lStack_138 = 0;
    lStack_130 = 0;
    uStack_128 = 0x3f600000;
    func_0x048afb10(&lStack_158,8);
    uStack_100 = 0;
    lStack_f8 = 0;
    lStack_110 = 0;
    uStack_108 = 0;
    lStack_120 = 0;
    lStack_118 = 0;
    uStack_f0 = 0xff00;
    uStack_ec = uStack_ec & 0xffffff00;
    uStack_e8 = uStack_e8 & 0xffffff00;
    uStack_e4 = 0;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0f012438;
    if (uStack_198 != (long *)0x0) {
      lVar18 = *uStack_198;
      uStack_198 = puVar10;
      (**(code **)(lVar18 + 8))();
      puVar10 = uStack_198;
    }
    uStack_198 = puVar10;
    auStack_e0[0] = CONCAT31((undefined3)uStack_19f,uStack_1a3._3_1_);
    plStack_d8 = (long *)0x0;
    uStack_d0 = (long *)((ulong)uStack_d0._4_4_ << 0x20);
    uStack_c8 = 1;
    uStack_c0 = 0;
    puStack_b8 = &UNK_05fc5e00;
    puStack_b0 = &SUB_048b06d0;
    puStack_a8 = &UNK_05dcda00;
    puStack_a0 = &UNK_061651a0;
    puStack_98 = &UNK_06165300;
    uStack_90 = 0;
    uStack_88 = 0;
    plStack_80 = (long *)0x0;
    func_0x048b05a0(CONCAT35((undefined3)uStack_1a3,CONCAT41(uStack_1a7,cStack_1a8)),auStack_e0);
    plVar11 = plStack_80;
    if (plStack_80 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_80 + 1;
      lVar18 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plStack_80 + 0x10))(plStack_80);
        func_0x0412c2d0(plVar11);
      }
    }
    lVar18 = CONCAT35((undefined3)uStack_1a3,CONCAT41(uStack_1a7,cStack_1a8));
    if ((DAT_0f550a20 == '\0') && (iVar8 = FUN_04108328(&DAT_0f550a20), iVar8 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    auStack_e0[0] = _DAT_0f550a0c;
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar11 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    lVar17 = lStack_190;
    puVar10 = uStack_198;
    plVar11[1] = 0;
    plVar11[2] = 0;
    *plVar11 = (long)&UNK_0ef439d0;
    plStack_d8 = plVar11 + 3;
    uStack_198 = (long *)0x0;
    lStack_190 = 0;
    plVar11[3] = (long)puVar10;
    plVar11[4] = lVar17;
    plVar11[7] = lStack_178;
    plVar11[5] = lStack_188;
    plVar11[6] = lStack_180;
    lStack_188 = 0;
    lStack_180 = 0;
    lStack_178 = 0;
    plVar11[10] = lStack_160;
    plVar11[8] = CONCAT17(uStack_169,CONCAT25(uStack_16b,CONCAT41(uStack_16f,uStack_170)));
    plVar11[9] = CONCAT44(uStack_164,CONCAT13(uStack_165,CONCAT21(uStack_167,uStack_168)));
    uStack_170 = 0;
    uStack_16f = 0;
    uStack_16b = 0;
    uStack_169 = 0;
    uStack_168 = 0;
    uStack_167 = 0;
    uStack_165 = 0;
    uStack_164 = 0;
    lStack_160 = 0;
    plVar11[0xb] = lStack_158;
    plVar11[0xc] = lStack_150;
    plVar11[0xd] = lStack_148;
    lStack_158 = 0;
    lStack_150 = 0;
    lStack_148 = 0;
    plVar11[0xe] = lStack_140;
    plVar11[0xf] = lStack_138;
    plVar11[0x10] = lStack_130;
    lStack_140 = 0;
    lStack_138 = 0;
    lStack_130 = 0;
    *(undefined4 *)(plVar11 + 0x11) = uStack_128;
    plVar11[0x12] = lStack_120;
    plVar11[0x13] = lStack_118;
    plVar11[0x14] = lStack_110;
    lStack_120 = 0;
    lStack_118 = 0;
    lStack_110 = 0;
    plVar11[0x17] = lStack_f8;
    *(undefined4 *)(plVar11 + 0x15) = (undefined4)uStack_108;
    *(undefined4 *)((long)plVar11 + 0xac) = uStack_108._4_4_;
    *(undefined4 *)(plVar11 + 0x16) = (undefined4)uStack_100;
    *(undefined4 *)((long)plVar11 + 0xb4) = uStack_100._4_4_;
    uStack_108 = 0;
    uStack_100 = 0;
    lStack_f8 = 0;
    *(ulong *)((long)plVar11 + 0xc5) = CONCAT17(uStack_e4,CONCAT43(uStack_e8,uStack_ec._1_3_));
    plVar11[0x18] = CONCAT44(uStack_ec,CONCAT22(uStack_ee,uStack_f0));
    uStack_78 = 0;
    plStack_70 = (long *)0x0;
    uStack_d0 = plVar11;
    func_0x048afd20(lVar18,auStack_e0);
    plVar11 = uStack_d0;
    if (uStack_d0 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_d0 + 1;
      lVar17 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*uStack_d0 + 0x10))(uStack_d0);
        func_0x0412c2d0(plVar11);
      }
    }
    plVar11 = plStack_70;
    if (plStack_70 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_70 + 1;
      lVar17 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack_70 + 0x10))(plStack_70);
        func_0x0412c2d0(plVar11);
      }
    }
    lVar17 = *(long *)(lVar18 + 0x10);
    uVar7 = *(uint *)(lVar18 + 0x18);
    uVar15 = (ulong)uVar7;
    iVar8 = *(int *)(lVar18 + 0x1c);
    uVar6 = CONCAT22(uStack_1ae,CONCAT11(uStack_1af,bStack_1b0)) << 0x10;
    if (iVar8 == 2) {
      puVar16 = *(uint **)(*(long *)(lVar17 + 0x78) + 0x60);
      uVar2 = *puVar16;
      while (uVar2 != uVar7) {
        puVar16 = puVar16 + 0x16;
        uVar2 = *puVar16;
      }
      for (; *(long *)(puVar16 + 0xc) != *(long *)(lVar18 + 8); puVar16 = *(uint **)(puVar16 + 0xe))
      {
      }
LAB_060bb56a:
      puVar16[4] = puVar16[4] | uVar6;
    }
    else {
      if (iVar8 == 1) {
        puVar16 = *(uint **)(*(long *)(lVar17 + 0x78) + 0x48);
        uVar2 = *puVar16;
        while (uVar2 != uVar7) {
          puVar16 = puVar16 + 0x1a;
          uVar2 = *puVar16;
        }
        goto LAB_060bb56a;
      }
      if (iVar8 == 0) {
        *(uint *)(lVar17 + 0x18) = *(uint *)(lVar17 + 0x18) | uVar6;
      }
    }
    func_0x048b0bc0(&uStack_198);
  }
  uVar5 = _DAT_0f543778;
  uVar12 = func_0x0eee2e90(_DAT_0f543778);
  if (uVar12 < 0xfffffffffffffff8) {
    if (uVar12 < 0x17) {
      bStack_1b0 = (char)uVar12 * '\x02';
      puVar13 = puVar19;
      if (uVar12 != 0) goto LAB_060bb5f1;
    }
    else {
      lVar18 = 0x1a;
      if ((uVar12 | 7) != 0x17) {
        lVar18 = (uVar12 | 7) + 1;
      }
      puVar13 = (undefined1 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar18);
      if (puVar13 == (undefined1 *)0x0) {
        func_0x0eec74c0(lVar18,0);
      }
      uStack_1a3._3_1_ = SUB81(puVar13,0);
      uStack_19f = (undefined4)((ulong)puVar13 >> 8);
      uStack_19b = (undefined1)((ulong)puVar13 >> 0x28);
      uStack_19a = (undefined2)((ulong)puVar13 >> 0x30);
      bStack_1b0 = (byte)lVar18 | 1;
      uStack_1af = (undefined1)((ulong)lVar18 >> 8);
      uStack_1ae = (undefined2)((ulong)lVar18 >> 0x10);
      uStack_1ac = (undefined4)((ulong)lVar18 >> 0x20);
      uStack_1a7 = (undefined4)(uVar12 >> 8);
      uStack_1a3._0_3_ = (undefined3)(uVar12 >> 0x28);
      cStack_1a8 = (char)uVar12;
LAB_060bb5f1:
      memmove(puVar13,uVar5,uVar12);
    }
    puVar13[uVar12] = 0;
    unaff_BPL = bStack_1b0 & 1;
    if (unaff_BPL != 0) {
      puVar19 = (undefined1 *)
                CONCAT26(uStack_19a,CONCAT15(uStack_19b,CONCAT41(uStack_19f,uStack_1a3._3_1_)));
    }
    uVar15 = (ulong)(bStack_1b0 >> 1);
    if (unaff_BPL != 0) {
      uVar15 = CONCAT35((undefined3)uStack_1a3,CONCAT41(uStack_1a7,cStack_1a8));
    }
    if (DAT_0f5690f0 == '\0') goto LAB_060bbde0;
  }
  else {
    func_0x04882e30();
LAB_060bbde0:
    iVar8 = FUN_04108328(&DAT_0f5690f0);
    if (iVar8 != 0) {
      func_0x06165590();
      __cxa_atexit(&UNK_048ae800,&DAT_0f569070,0xf53dab8);
      func_0x0410844d(&DAT_0f5690f0);
    }
  }
  plVar11 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f569070 + 4)) * 8);
  do {
    lVar18 = *plVar11;
    if (lVar18 == -1) goto LAB_060bb680;
    plVar11 = (long *)(*(long *)(param_1 + 0x30) + lVar18 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar18 * 0x18) != *(uint *)(_DAT_0f569070 + 4))
  ;
  if (plVar11 == *(long **)(param_1 + 0x38)) {
LAB_060bb680:
    puVar9 = &DAT_0f569070;
    if (iRam000000000f5690d0 != -0x2b3da790) goto LAB_060bb6e5;
LAB_060bb6ab:
    lVar18 = *(long *)(puVar9 + 0x68);
    if (lVar18 == 0) goto LAB_060bb6e5;
    bVar20 = (*(byte *)(lVar18 + 8) & 1) != 0;
    lVar17 = lVar18 + 9;
    if (bVar20) {
      lVar17 = *(long *)(lVar18 + 0x18);
    }
    uVar15 = (ulong)(*(byte *)(lVar18 + 8) >> 1);
    if (bVar20) {
      uVar15 = *(ulong *)(lVar18 + 0x10);
    }
    func_0x061659d0(&lStack_68,param_1,lVar17,uVar15);
  }
  else {
    puVar9 = (undefined *)plVar11[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_060bb6ab;
LAB_060bb6e5:
    func_0x061659d0(&lStack_68,param_1,puVar19,uVar15);
    unaff_BPL = bStack_1b0 & 1;
  }
  if (unaff_BPL != 0) {
    uStack_1a3._3_1_ = (undefined1)((uint)uStack_1a3 >> 0x18);
    uVar4 = CONCAT41(uStack_19f,uStack_1a3._3_1_);
    func_0x0412a280(CONCAT26(uStack_19a,CONCAT15(uStack_19b,uVar4)),
                    CONCAT44(uStack_1ac,CONCAT22(uStack_1ae,CONCAT11(uStack_1af,bStack_1b0))) &
                    0xfffffffffffffffe);
  }
  if (cStack_38 != '\0') {
    return;
  }
  func_0x06165fc0(&bStack_1b0,lStack_68 + 0x18);
  if (uStack_198._4_4_ == 2) {
    piVar14 = *(int **)(*(long *)(CONCAT26(uStack_19a,
                                           CONCAT15(uStack_19b,CONCAT41(uStack_19f,uStack_1a3._3_1_)
                                                   )) + 0x78) + 0x60);
    iVar8 = *piVar14;
    while (iVar8 != (int)uStack_198) {
      piVar14 = piVar14 + 0x16;
      iVar8 = *piVar14;
    }
    lVar18 = *(long *)(piVar14 + 0xc);
    while (lVar18 != CONCAT35((undefined3)uStack_1a3,CONCAT41(uStack_1a7,cStack_1a8))) {
      piVar14 = *(int **)(piVar14 + 0xe);
      lVar18 = *(long *)(piVar14 + 0xc);
    }
LAB_060bb78f:
    *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar14 = *(int **)(*(long *)(CONCAT26(uStack_19a,
                                             CONCAT15(uStack_19b,
                                                      CONCAT41(uStack_19f,uStack_1a3._3_1_))) + 0x78
                                   ) + 0x48);
      iVar8 = *piVar14;
      while (iVar8 != (int)uStack_198) {
        piVar14 = piVar14 + 0x1a;
        iVar8 = *piVar14;
      }
      goto LAB_060bb78f;
    }
    if (uStack_198._4_4_ == 0) {
      puVar16 = (uint *)(CONCAT26(uStack_19a,
                                  CONCAT15(uStack_19b,CONCAT41(uStack_19f,uStack_1a3._3_1_))) + 0x18
                        );
      *puVar16 = *puVar16 | 0x40000;
    }
  }
  if ((DAT_0f569110 == '\0') && (iVar8 = FUN_04108328(&DAT_0f569110), iVar8 != 0)) {
    func_0x061656a0();
    func_0x0410844d(&DAT_0f569110);
  }
  uStack_40 = 0xcbd834a800000001;
  if ((DAT_0f5690f0 == '\0') && (iVar8 = FUN_04108328(&DAT_0f5690f0), iVar8 != 0)) {
    func_0x06165590();
    __cxa_atexit(&UNK_048ae800,&DAT_0f569070,0xf53dab8);
    func_0x0410844d(&DAT_0f5690f0);
  }
  lVar18 = lStack_68 + 0x18;
  plVar11 = (long *)(*(long *)(lStack_68 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lStack_68 + 0x20) - *(long *)(lStack_68 + 0x18))
                                 >> 3) - 1U & *(uint *)(_DAT_0f569070 + 4)) * 8);
  do {
    lVar17 = *plVar11;
    if (lVar17 == -1) goto LAB_060bb830;
    plVar11 = (long *)(*(long *)(lStack_68 + 0x30) + lVar17 * 0x18);
  } while (*(uint *)(*(long *)(lStack_68 + 0x30) + 8 + lVar17 * 0x18) !=
           *(uint *)(_DAT_0f569070 + 4));
  if (plVar11 == *(long **)(lStack_68 + 0x38)) {
LAB_060bb830:
    puVar9 = &DAT_0f569070;
  }
  else {
    puVar9 = (undefined *)plVar11[2];
  }
  bStack_1b0 = (byte)puVar9;
  uStack_1af = (undefined1)((ulong)puVar9 >> 8);
  uStack_1ae = (undefined2)((ulong)puVar9 >> 0x10);
  uStack_1ac = (undefined4)((ulong)puVar9 >> 0x20);
  cStack_1a8 = (char)lVar18;
  uStack_1a7 = (undefined4)((ulong)lVar18 >> 8);
  uStack_1a3._0_3_ = (undefined3)((ulong)lVar18 >> 0x28);
  func_0x0ed621a0(&bStack_1b0,uStack_40._4_4_);
  bStack_1b0 = 0x10;
  uStack_1af = 0;
  cStack_1a8 = (char)auStack_60;
  uStack_1a7 = (undefined4)((ulong)auStack_60 >> 8);
  uStack_1a3._0_3_ = (undefined3)((ulong)auStack_60 >> 0x28);
  uStack_1a3._3_1_ = (undefined1)((ulong)uStack_40 >> 0x20);
  uStack_19f._0_3_ = (undefined3)((ulong)uStack_40 >> 0x28);
  uStack_198 = (long *)0x0;
  lStack_190 = 0;
  lStack_188 = 0;
  lStack_180 = 0;
  lStack_178 = 0;
  uStack_170 = 0x14;
  uStack_16f = 0x6e657665;
  uStack_16b = 0x5f74;
  uStack_169 = 0x74;
  uStack_168 = 0x79;
  uStack_167 = 0x6570;
  uStack_165 = 0;
  lStack_158 = 0;
  lStack_150 = 0;
  lStack_148 = 0;
  lStack_140 = 0;
  lStack_138 = 0;
  lStack_130 = 0;
  uStack_128 = 0x3f600000;
  func_0x048afb10(&lStack_158,8);
  uStack_100 = 0;
  lStack_f8 = 0;
  lStack_110 = 0;
  uStack_108 = 0;
  lStack_120 = 0;
  lStack_118 = 0;
  uStack_f0 = 0xff00;
  uStack_ec = uStack_ec & 0xffffff00;
  uStack_e8 = uStack_e8 & 0xffffff00;
  uStack_e4 = 0;
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar10 = &UNK_0f01a870;
  if (uStack_198 != (long *)0x0) {
    lVar18 = *uStack_198;
    uStack_198 = puVar10;
    (**(code **)(lVar18 + 8))();
    puVar10 = uStack_198;
  }
  uStack_198 = puVar10;
  auStack_e0[0] = CONCAT31((undefined3)uStack_19f,uStack_1a3._3_1_);
  plStack_d8 = (long *)0x0;
  uStack_d0 = (long *)((ulong)uStack_d0 & 0xffffffff00000000);
  uStack_c8 = 1;
  uStack_c0 = 0;
  puStack_b8 = &UNK_060741c0;
  puStack_b0 = &SUB_048b06d0;
  puStack_a8 = &UNK_06070020;
  puStack_a0 = &UNK_06166530;
  puStack_98 = &UNK_06166690;
  uStack_90 = 0;
  uStack_88 = 0;
  plStack_80 = (long *)0x0;
  func_0x048b05a0(CONCAT35((undefined3)uStack_1a3,CONCAT41(uStack_1a7,cStack_1a8)),auStack_e0);
  plVar11 = plStack_80;
  if (plStack_80 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_80 + 1;
    lVar18 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plStack_80 + 0x10))(plStack_80);
      func_0x0412c2d0(plVar11);
    }
  }
  lVar18 = CONCAT35((undefined3)uStack_1a3,CONCAT41(uStack_1a7,cStack_1a8));
  if ((DAT_0f550a20 == '\0') && (iVar8 = FUN_04108328(&DAT_0f550a20), iVar8 != 0)) {
    func_0x048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  auStack_e0[0] = _DAT_0f550a0c;
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  lVar17 = lStack_190;
  puVar10 = uStack_198;
  plVar11[1] = 0;
  plVar11[2] = 0;
  *plVar11 = (long)&UNK_0ef439d0;
  plStack_d8 = plVar11 + 3;
  uStack_198 = (long *)0x0;
  lStack_190 = 0;
  plVar11[3] = (long)puVar10;
  plVar11[4] = lVar17;
  plVar11[7] = lStack_178;
  plVar11[5] = lStack_188;
  plVar11[6] = lStack_180;
  lStack_188 = 0;
  lStack_180 = 0;
  lStack_178 = 0;
  plVar11[10] = lStack_160;
  plVar11[8] = CONCAT17(uStack_169,CONCAT25(uStack_16b,CONCAT41(uStack_16f,uStack_170)));
  plVar11[9] = CONCAT44(uStack_164,CONCAT13(uStack_165,CONCAT21(uStack_167,uStack_168)));
  uStack_170 = 0;
  uStack_16f = 0;
  uStack_16b = 0;
  uStack_169 = 0;
  uStack_168 = 0;
  uStack_167 = 0;
  uStack_165 = 0;
  uStack_164 = 0;
  lStack_160 = 0;
  plVar11[0xb] = lStack_158;
  plVar11[0xc] = lStack_150;
  plVar11[0xd] = lStack_148;
  lStack_158 = 0;
  lStack_150 = 0;
  lStack_148 = 0;
  plVar11[0xe] = lStack_140;
  plVar11[0xf] = lStack_138;
  plVar11[0x10] = lStack_130;
  lStack_140 = 0;
  lStack_138 = 0;
  lStack_130 = 0;
  *(undefined4 *)(plVar11 + 0x11) = uStack_128;
  plVar11[0x12] = lStack_120;
  plVar11[0x13] = lStack_118;
  plVar11[0x14] = lStack_110;
  lStack_120 = 0;
  lStack_118 = 0;
  lStack_110 = 0;
  plVar11[0x17] = lStack_f8;
  *(undefined4 *)(plVar11 + 0x15) = (undefined4)uStack_108;
  *(undefined4 *)((long)plVar11 + 0xac) = uStack_108._4_4_;
  *(undefined4 *)(plVar11 + 0x16) = (undefined4)uStack_100;
  *(undefined4 *)((long)plVar11 + 0xb4) = uStack_100._4_4_;
  uStack_108 = 0;
  uStack_100 = 0;
  lStack_f8 = 0;
  *(ulong *)((long)plVar11 + 0xc5) = CONCAT17(uStack_e4,CONCAT43(uStack_e8,uStack_ec._1_3_));
  plVar11[0x18] = CONCAT44(uStack_ec,CONCAT22(uStack_ee,uStack_f0));
  uStack_78 = 0;
  plStack_70 = (long *)0x0;
  uStack_d0 = plVar11;
  func_0x048afd20(lVar18,auStack_e0);
  plVar11 = uStack_d0;
  if (uStack_d0 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_d0 + 1;
    lVar17 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*uStack_d0 + 0x10))(uStack_d0);
      func_0x0412c2d0(plVar11);
    }
  }
  plVar11 = plStack_70;
  if (plStack_70 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    lVar17 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      func_0x0412c2d0(plVar11);
    }
  }
  lVar17 = *(long *)(lVar18 + 0x10);
  iVar8 = *(int *)(lVar18 + 0x1c);
  uVar7 = CONCAT22(uStack_1ae,CONCAT11(uStack_1af,bStack_1b0)) << 0x10;
  if (iVar8 == 2) {
    piVar14 = *(int **)(*(long *)(lVar17 + 0x78) + 0x60);
    iVar8 = *piVar14;
    while (iVar8 != *(int *)(lVar18 + 0x18)) {
      piVar14 = piVar14 + 0x16;
      iVar8 = *piVar14;
    }
    for (; *(long *)(piVar14 + 0xc) != *(long *)(lVar18 + 8); piVar14 = *(int **)(piVar14 + 0xe)) {
    }
  }
  else {
    if (iVar8 != 1) {
      if (iVar8 == 0) {
        *(uint *)(lVar17 + 0x18) = *(uint *)(lVar17 + 0x18) | uVar7;
      }
      goto LAB_060bbd2d;
    }
    piVar14 = *(int **)(*(long *)(lVar17 + 0x78) + 0x48);
    iVar8 = *piVar14;
    while (iVar8 != *(int *)(lVar18 + 0x18)) {
      piVar14 = piVar14 + 0x1a;
      iVar8 = *piVar14;
    }
  }
  piVar14[4] = piVar14[4] | uVar7;
LAB_060bbd2d:
  func_0x048b0bc0(&uStack_198);
  return;
}



/* ---- referenced strings ----
 * 0x12a59b0  Scripting_Context_Id
 */
