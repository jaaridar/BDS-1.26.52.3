/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe13c1f0 (ELF vaddr 0xe03c1f0)
 * Label: caller-of-callee
 * Body:  [[0e13c1f0, 0e13c841] [0e13c850, 0e13c967] [0e13c970, 0e13c9a1] [0e13c9b0, 0e13d45a]]
 * Ghidra: FUN_0e13c1f0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e13c1f0(long param_1)

{
  long *plVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  int *piVar15;
  ulong uVar16;
  ulong uVar17;
  byte *pbVar18;
  byte *pbVar19;
  code *pcVar20;
  long lVar21;
  bool bVar22;
  undefined *puStack_218;
  long *plStack_210;
  long *plStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  long lStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined4 uStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined2 uStack_158;
  undefined2 uStack_156;
  uint uStack_154;
  uint uStack_150;
  undefined1 uStack_14c;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long *plStack_138;
  code *pcStack_130;
  int iStack_128;
  int iStack_124;
  undefined8 uStack_120;
  undefined1 *puStack_118;
  undefined8 uStack_108;
  long *plStack_100;
  undefined4 *puStack_f8;
  int iStack_f0;
  int iStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_c8;
  long *plStack_c0;
  ulong uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  func_0x0e1386e0();
  if ((DAT_0f7477c8 == '\0') && (iVar8 = FUN_04108328(&DAT_0f7477c8), iVar8 != 0)) {
    func_0x0e19a5e0();
    __cxa_atexit(&UNK_048ae800,&DAT_0f747748,0xf53dab8);
    func_0x0410844d(&DAT_0f7477c8);
  }
  plVar14 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f747748 + 4)) * 8);
  do {
    lVar13 = *plVar14;
    if (lVar13 == -1) goto LAB_0e13c270;
    plVar14 = (long *)(*(long *)(param_1 + 0x30) + lVar13 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar13 * 0x18) != *(uint *)(_DAT_0f747748 + 4))
  ;
  if (plVar14 == *(long **)(param_1 + 0x38)) {
LAB_0e13c270:
    puVar10 = &DAT_0f747748;
    if (iRam000000000f7477a8 != -0x2b3da790) goto LAB_0e13c2f2;
LAB_0e13c29b:
    lVar13 = *(long *)(puVar10 + 0x68);
    if (lVar13 == 0) goto LAB_0e13c2f2;
    bVar22 = (*(byte *)(lVar13 + 8) & 1) != 0;
    lVar21 = lVar13 + 9;
    if (bVar22) {
      lVar21 = *(long *)(lVar13 + 0x18);
    }
    uVar16 = (ulong)(*(byte *)(lVar13 + 8) >> 1);
    if (bVar22) {
      uVar16 = *(ulong *)(lVar13 + 0x10);
    }
    func_0x0e19ac00(&uStack_148,param_1,lVar21,uVar16);
    if ((char)puStack_118 != '\0') goto LAB_0e13c2d8;
LAB_0e13c318:
    if ((DAT_0f7477e8 == '\0') && (iVar8 = FUN_04108328(&DAT_0f7477e8), iVar8 != 0)) {
      func_0x0e19a6f0();
      func_0x0410844d(&DAT_0f7477e8);
    }
    uStack_120 = 0xc8dfa89d00000001;
    if ((DAT_0f7477c8 == '\0') && (iVar8 = FUN_04108328(&DAT_0f7477c8), iVar8 != 0)) {
      func_0x0e19a5e0();
      __cxa_atexit(&UNK_048ae800,&DAT_0f747748,0xf53dab8);
      func_0x0410844d(&DAT_0f7477c8);
    }
    plStack_210 = (long *)(uStack_148 + 0x18);
    plVar14 = (long *)(*(long *)(uStack_148 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(uStack_148 + 0x20) -
                                           *(long *)(uStack_148 + 0x18)) >> 3) - 1U &
                             *(uint *)(_DAT_0f747748 + 4)) * 8);
    do {
      lVar13 = *plVar14;
      if (lVar13 == -1) goto LAB_0e13c3b0;
      plVar14 = (long *)(*(long *)(uStack_148 + 0x30) + lVar13 * 0x18);
    } while (*(uint *)(*(long *)(uStack_148 + 0x30) + 8 + lVar13 * 0x18) !=
             *(uint *)(_DAT_0f747748 + 4));
    if (plVar14 == *(long **)(uStack_148 + 0x38)) {
LAB_0e13c3b0:
      puStack_218 = &DAT_0f747748;
    }
    else {
      puStack_218 = (undefined *)plVar14[2];
    }
    func_0x0ed621a0(&puStack_218,uStack_120._4_4_);
    puStack_218 = (undefined *)CONCAT62(puStack_218._2_6_,1);
    plStack_208 = (long *)CONCAT44(plStack_208._4_4_,uStack_120._4_4_);
    uStack_200 = (code *)0x0;
    uStack_1f8 = (code *)0x0;
    uStack_1f0 = (undefined1 *)0x0;
    puStack_1e8 = (undefined *)0x0;
    lStack_1e0 = 0;
    uStack_1d8 = 0x73656e696c70730e;
    uStack_1d0 = uStack_1d0 & 0xffffffffffffff00;
    lStack_1c0 = 0;
    lStack_1b8 = 0;
    lStack_1b0 = 0;
    lStack_1a8 = 0;
    lStack_1a0 = 0;
    lStack_198 = 0;
    uStack_190 = 0x3f600000;
    plStack_210 = &uStack_140;
    func_0x048afb10(&lStack_1c0,8);
    uStack_168 = 0;
    lStack_160 = 0;
    lStack_178 = 0;
    uStack_170 = 0;
    lStack_188 = 0;
    lStack_180 = 0;
    uStack_158 = 0xff00;
    uStack_154 = uStack_154 & 0xffffff00;
    uStack_150 = uStack_150 & 0xffffff00;
    uStack_14c = 0;
    puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar11 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar11 = &UNK_0f135c28;
    if (uStack_200 != (code *)0x0) {
      lVar13 = *(long *)uStack_200;
      uStack_200 = (code *)puVar11;
      (**(code **)(lVar13 + 8))();
      puVar11 = (undefined8 *)uStack_200;
    }
    uStack_200 = (code *)puVar11;
    uStack_b0 = plStack_208._0_4_;
    uStack_a8 = (long *)0x0;
    uStack_a0 = (long *)((ulong)uStack_a0._4_4_ << 0x20);
    lStack_98 = 1;
    uStack_90 = 0;
    uStack_88 = &UNK_089cf760;
    puStack_80 = &SUB_048b06d0;
    puStack_78 = &UNK_089cdeb0;
    puStack_70 = &UNK_0e19b760;
    puStack_68 = &UNK_0e19ba40;
    uStack_60 = 0;
    uStack_58 = 0;
    plStack_50 = (long *)0x0;
    func_0x048b05a0(plStack_210,&uStack_b0);
    plVar14 = plStack_50;
    if (plStack_50 != (long *)0x0) {
      LOCK();
      plVar12 = plStack_50 + 1;
      lVar13 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
        func_0x0412c2d0(plVar14);
      }
    }
    plVar14 = plStack_210;
    if ((DAT_0f550a20 == '\0') && (iVar8 = FUN_04108328(&DAT_0f550a20), iVar8 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    uStack_b0 = _DAT_0f550a0c;
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar12 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    lVar13 = (long)uStack_1f8;
    puVar11 = (undefined8 *)uStack_200;
    plVar12[1] = 0;
    plVar12[2] = 0;
    *plVar12 = (long)&UNK_0ef439d0;
    uStack_a8 = plVar12 + 3;
    uStack_200 = (code *)0x0;
    uStack_1f8 = (code *)0x0;
    plVar12[3] = (long)puVar11;
    plVar12[4] = lVar13;
    plVar12[7] = lStack_1e0;
    plVar12[5] = (long)uStack_1f0;
    plVar12[6] = (long)puStack_1e8;
    uStack_1f0 = (undefined1 *)0x0;
    puStack_1e8 = (undefined *)0x0;
    lStack_1e0 = 0;
    plVar12[10] = lStack_1c8;
    plVar12[8] = uStack_1d8;
    plVar12[9] = uStack_1d0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    lStack_1c8 = 0;
    plVar12[0xb] = lStack_1c0;
    plVar12[0xc] = lStack_1b8;
    plVar12[0xd] = lStack_1b0;
    lStack_1c0 = 0;
    lStack_1b8 = 0;
    lStack_1b0 = 0;
    plVar12[0xe] = lStack_1a8;
    plVar12[0xf] = lStack_1a0;
    plVar12[0x10] = lStack_198;
    lStack_1a8 = 0;
    lStack_1a0 = 0;
    lStack_198 = 0;
    *(undefined4 *)(plVar12 + 0x11) = uStack_190;
    plVar12[0x12] = lStack_188;
    plVar12[0x13] = lStack_180;
    plVar12[0x14] = lStack_178;
    lStack_188 = 0;
    lStack_180 = 0;
    lStack_178 = 0;
    plVar12[0x17] = lStack_160;
    *(undefined4 *)(plVar12 + 0x15) = (undefined4)uStack_170;
    *(undefined4 *)((long)plVar12 + 0xac) = uStack_170._4_4_;
    *(undefined4 *)(plVar12 + 0x16) = (undefined4)uStack_168;
    *(undefined4 *)((long)plVar12 + 0xb4) = uStack_168._4_4_;
    uStack_170 = 0;
    uStack_168 = 0;
    lStack_160 = 0;
    *(ulong *)((long)plVar12 + 0xc5) = CONCAT17(uStack_14c,CONCAT43(uStack_150,uStack_154._1_3_));
    plVar12[0x18] = CONCAT44(uStack_154,CONCAT22(uStack_156,uStack_158));
    uStack_108 = 0;
    plStack_100 = (long *)0x0;
    uStack_a0 = plVar12;
    func_0x048afd20(plVar14,&uStack_b0);
    plVar12 = uStack_a0;
    if (uStack_a0 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_a0 + 1;
      lVar13 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*uStack_a0 + 0x10))(uStack_a0);
        func_0x0412c2d0(plVar12);
      }
    }
    plVar12 = plStack_100;
    if (plStack_100 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_100 + 1;
      lVar13 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plStack_100 + 0x10))(plStack_100);
        func_0x0412c2d0(plVar12);
      }
    }
    lVar13 = plVar14[2];
    iVar8 = *(int *)((long)plVar14 + 0x1c);
    if (iVar8 == 2) {
      piVar15 = *(int **)(*(long *)(lVar13 + 0x78) + 0x60);
      iVar8 = *piVar15;
      while (iVar8 != (int)plVar14[3]) {
        piVar15 = piVar15 + 0x16;
        iVar8 = *piVar15;
      }
      for (; *(long *)(piVar15 + 0xc) != plVar14[1]; piVar15 = *(int **)(piVar15 + 0xe)) {
      }
LAB_0e13c85a:
      piVar15[4] = piVar15[4] | (int)puStack_218 << 0x10;
    }
    else {
      if (iVar8 == 1) {
        piVar15 = *(int **)(*(long *)(lVar13 + 0x78) + 0x48);
        iVar8 = *piVar15;
        while (iVar8 != (int)plVar14[3]) {
          piVar15 = piVar15 + 0x1a;
          iVar8 = *piVar15;
        }
        goto LAB_0e13c85a;
      }
      if (iVar8 == 0) {
        *(uint *)(lVar13 + 0x18) = *(uint *)(lVar13 + 0x18) | (int)puStack_218 << 0x10;
      }
    }
    func_0x048b0bc0(&uStack_200);
    lVar13 = func_0x072762d0(param_1 + 0x18);
    if (*(int *)(lVar13 + 0x60) != -0x2b3da790) goto LAB_0e13c8b5;
LAB_0e13c873:
    lVar13 = *(long *)(lVar13 + 0x68);
    if (lVar13 == 0) goto LAB_0e13c8b5;
    bVar22 = (*(byte *)(lVar13 + 8) & 1) != 0;
    lVar21 = lVar13 + 9;
    if (bVar22) {
      lVar21 = *(long *)(lVar13 + 0x18);
    }
    uVar16 = (ulong)(*(byte *)(lVar13 + 8) >> 1);
    if (bVar22) {
      uVar16 = *(ulong *)(lVar13 + 0x10);
    }
    func_0x0e19bc10(&uStack_b0,param_1,lVar21,uVar16);
  }
  else {
    puVar10 = (undefined *)plVar14[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_0e13c29b;
LAB_0e13c2f2:
    func_0x0e19ac00(&uStack_148,param_1,&UNK_013bfc77,0x17);
    if ((char)puStack_118 == '\0') goto LAB_0e13c318;
LAB_0e13c2d8:
    lVar13 = func_0x072762d0(param_1 + 0x18);
    if (*(int *)(lVar13 + 0x60) == -0x2b3da790) goto LAB_0e13c873;
LAB_0e13c8b5:
    func_0x0e19bc10(&uStack_b0,param_1,&UNK_0140d38b,0x10);
  }
  if ((char)puStack_80 != '\0') {
    return;
  }
  func_0x05d54750(&uStack_e8,&UNK_0f0c1df8);
  uVar16 = uStack_e0;
  uStack_48 = uStack_e8;
  uStack_44 = uStack_e4;
  uStack_40 = (undefined4)uStack_e0;
  uStack_3c = uStack_e0._4_4_;
  uStack_e0 = 0;
  uStack_b8 = uStack_d8;
  uStack_d8 = 0;
  lVar21 = CONCAT44(uStack_ac,uStack_b0) + 0x18;
  lVar13 = func_0x072762d0(lVar21);
  pbVar3 = *(byte **)(CONCAT44(uStack_ac,uStack_b0) + 0x58);
  for (pbVar18 = *(byte **)(CONCAT44(uStack_ac,uStack_b0) + 0x50); pbVar18 != pbVar3;
      pbVar18 = pbVar18 + 0x38) {
    bVar2 = *pbVar18;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x24) goto LAB_0e13c9ba;
    }
    else if (*(long *)(pbVar18 + 8) == 0x24) {
LAB_0e13c9ba:
      if ((bVar2 & 1) == 0) {
        pbVar19 = pbVar18 + 1;
      }
      else {
        pbVar19 = *(byte **)(pbVar18 + 0x10);
      }
      iVar8 = bcmp(&DAT_014518a9,pbVar19,0x24);
      if (iVar8 == 0) break;
    }
  }
  if (pbVar18 == pbVar3) {
LAB_0e13c9e3:
    if ((int)uStack_88 == 0) {
      if ((*(int *)(lVar13 + 0x60) != -0x2b3da790) || (*(long *)(lVar13 + 0x68) == 0))
      goto LAB_0e13ca61;
      lVar13 = *(long *)(lVar13 + 0x68) + 0x38;
    }
    else {
      puVar10 = (undefined *)FUN_048b0c90(lVar21,lVar13,uStack_88._4_4_,1);
      if (puVar10 == (undefined *)0x0) {
        puStack_218 = (undefined *)0x0;
        plStack_210 = (long *)0x0;
        func_0x048b0d20(&puStack_218);
        puVar10 = puStack_218;
        if (puStack_218 == (undefined *)0x0) goto LAB_0e13ca61;
      }
      if ((*(int *)(puVar10 + 0x50) == -0x45dcb126) && (*(long *)(puVar10 + 0x58) != 0)) {
        lVar13 = *(long *)(puVar10 + 0x58) + 0x40;
      }
      else {
LAB_0e13ca61:
        lVar13 = 0;
      }
    }
    uStack_148 = 0;
    plStack_138 = (long *)&UNK_048b4ab0;
    iStack_128 = 0xd33bd9c5;
    pcStack_130 = (code *)&UNK_048b49f0;
    iStack_124 = CONCAT31(iStack_124._1_3_,1);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(0x38,0);
    }
    *plVar14 = 0x536172656d614320;
    plVar14[1] = 0x6c6946656e696c70;
    plVar14[2] = 0x65;
    *(undefined2 *)(plVar14 + 3) = 0x302;
    *(undefined4 *)(plVar14 + 4) = uStack_48;
    *(undefined4 *)((long)plVar14 + 0x24) = uStack_44;
    *(undefined4 *)(plVar14 + 5) = uStack_40;
    *(undefined4 *)((long)plVar14 + 0x2c) = uStack_3c;
    plVar14[6] = uStack_b8;
    puStack_218 = &UNK_048b46e0;
    uStack_200 = (code *)&UNK_048b4ab0;
    uStack_1f8 = (code *)&UNK_048b49f0;
    uStack_1f0 = (undefined1 *)CONCAT35(uStack_1f0._5_3_,0x1d33bd9c5);
    uStack_148 = 0;
    plStack_210 = plVar14;
    puStack_f8 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puStack_f8 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    uVar7 = _UNK_014518c1;
    uStack_108 = 0x29;
    plStack_100 = (long *)0x24;
    *(undefined8 *)(puStack_f8 + 4) = _DAT_014518b9;
    *(undefined8 *)(puStack_f8 + 6) = uVar7;
    uVar6 = _UNK_014518b5;
    uVar5 = _UNK_014518b1;
    uVar4 = _UNK_014518ad;
    *puStack_f8 = _DAT_014518a9;
    puStack_f8[1] = uVar4;
    puStack_f8[2] = uVar5;
    puStack_f8[3] = uVar6;
    puStack_f8[8] = 0x5d797472;
    *(undefined1 *)(puStack_f8 + 9) = 0;
    lVar13 = func_0x048b5060(lVar13,&uStack_108);
    *(undefined **)(lVar13 + 0x20) = &UNK_048b46e0;
    pcVar20 = (code *)&UNK_048b49f0;
    if ((undefined **)(lVar13 + 0x20) != &puStack_218) {
      puVar11 = (undefined8 *)(lVar13 + 0x28);
      if (*(code **)(lVar13 + 0x40) == (code *)0x0) {
LAB_0e13cbf7:
        plVar14 = plStack_210;
        plStack_210 = (long *)0x0;
        *puVar11 = plVar14;
      }
      else {
        (**(code **)(lVar13 + 0x40))(puVar11);
        if (uStack_1f0._4_1_ != '\0') {
          if (uStack_1f0._4_1_ != '\x02') goto LAB_0e13cbf7;
          (*uStack_200)(5,&plStack_210,puVar11);
        }
      }
      *(undefined4 *)(lVar13 + 0x38) = (undefined4)uStack_200;
      *(undefined4 *)(lVar13 + 0x3c) = uStack_200._4_4_;
      *(undefined4 *)(lVar13 + 0x40) = (undefined4)uStack_1f8;
      *(undefined4 *)(lVar13 + 0x44) = uStack_1f8._4_4_;
      *(undefined4 *)(lVar13 + 0x48) = (undefined4)uStack_1f0;
      *(char *)(lVar13 + 0x4c) = uStack_1f0._4_1_;
      pcVar20 = uStack_1f8;
    }
    if ((uStack_108 & 1) != 0) {
      func_0x0412a280(puStack_f8,uStack_108 & 0xfffffffffffffffe);
      pcVar20 = uStack_1f8;
    }
    if (pcVar20 != (code *)0x0) {
      (*pcVar20)(&plStack_210);
    }
    if (pcStack_130 != (code *)0x0) {
      (*pcStack_130)(&uStack_148);
    }
    uVar16 = 0;
    uVar17 = 0;
  }
  else {
    iVar8 = *(int *)(pbVar18 + 0x1c);
    if ((DAT_0f550768 == '\0') && (iVar9 = FUN_04108328(&DAT_0f550768), iVar9 != 0)) {
      func_0x048b46f0(0xf550750);
      func_0x0410844d(&DAT_0f550768);
    }
    uVar17 = uStack_b8;
    if (iVar8 == _DAT_0f550754) goto LAB_0e13c9e3;
  }
  iStack_128 = (int)uStack_90;
  iStack_124 = uStack_90._4_4_;
  puStack_118 = puStack_80;
  plStack_138 = uStack_a0;
  pcStack_130 = (code *)lStack_98;
  uStack_148 = CONCAT44(uStack_ac,uStack_b0);
  uStack_140._0_4_ = (undefined4)uStack_a8;
  uStack_140._4_4_ = uStack_a8._4_4_;
  uStack_120 = 0x1e1bc4d500000004;
  if ((DAT_0f5a63a0 == '\0') && (iVar8 = FUN_04108328(&DAT_0f5a63a0), iVar8 != 0)) {
    func_0x072751f0(0xf5a6388);
    func_0x0410844d(&DAT_0f5a63a0);
  }
  puStack_218 = (undefined *)CONCAT44(puStack_218._4_4_,uStack_120._4_4_);
  plStack_210 = (long *)0x0;
  plStack_208 = (long *)((ulong)plStack_208 & 0xffffffff00000000);
  uStack_200 = (code *)0x1;
  uStack_1f8 = (code *)&SUB_048aead0;
  uStack_1f0 = &UNK_0e19c4c0;
  puStack_1e8 = &UNK_0e19c580;
  lStack_1e0 = 0;
  uStack_1d8 = uStack_1d8 & 0xffffffff00000000;
  uStack_1d0 = 0;
  lStack_1c8 = 0;
  FUN_049057f0(&uStack_140,&puStack_218);
  func_0x048aea50(&puStack_218);
  puStack_f8 = (undefined4 *)pcStack_130;
  iStack_f0 = iStack_128;
  iStack_ec = iStack_124;
  uStack_108 = CONCAT44(uStack_140._4_4_,(undefined4)uStack_140);
  plStack_100 = plStack_138;
  puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar11 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar11 = &UNK_0f4af300;
  if ((DAT_0f551bc8 == '\0') && (iVar8 = FUN_04108328(&DAT_0f551bc8), iVar8 != 0)) {
    func_0x04905be0(0xf551bb0);
    func_0x0410844d(&DAT_0f551bc8);
  }
  puStack_218 = (undefined *)CONCAT44(puStack_218._4_4_,_DAT_0f551bb4);
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0ef46c48;
  plStack_210 = plVar14 + 3;
  plVar14[3] = (long)puVar11;
  plVar14[4] = 0;
  *(undefined1 *)(plVar14 + 5) = 0xff;
  uStack_c8 = 0;
  plStack_c0 = (long *)0x0;
  plStack_208 = plVar14;
  func_0x048afd20(&uStack_108,&puStack_218);
  plVar14 = plStack_208;
  if (plStack_208 != (long *)0x0) {
    LOCK();
    plVar12 = plStack_208 + 1;
    lVar13 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_208 + 0x10))(plStack_208);
      func_0x0412c2d0(plVar14);
    }
  }
  plVar14 = plStack_c0;
  if (plStack_c0 != (long *)0x0) {
    LOCK();
    plVar12 = plStack_c0 + 1;
    lVar13 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
      func_0x0412c2d0(plVar14);
    }
  }
  if ((DAT_0f5a63a0 == '\0') && (iVar8 = FUN_04108328(&DAT_0f5a63a0), iVar8 != 0)) {
    func_0x072751f0(0xf5a6388);
    func_0x0410844d(&DAT_0f5a63a0);
  }
  if (iStack_124 == 2) {
    piVar15 = *(int **)(*(long *)((long)pcStack_130 + 0x78) + 0x60);
    iVar8 = *piVar15;
    while (iVar8 != iStack_128) {
      piVar15 = piVar15 + 0x16;
      iVar8 = *piVar15;
    }
    plVar14 = *(long **)(piVar15 + 0xc);
    while (plVar14 != plStack_138) {
      piVar15 = *(int **)(piVar15 + 0xe);
      plVar14 = *(long **)(piVar15 + 0xc);
    }
  }
  else {
    if (iStack_124 != 1) {
      if (iStack_124 == 0) {
        *(uint *)((long)pcStack_130 + 0x18) = *(uint *)((long)pcStack_130 + 0x18) | 0x20000;
      }
      goto LAB_0e13cef3;
    }
    piVar15 = *(int **)(*(long *)((long)pcStack_130 + 0x78) + 0x48);
    iVar8 = *piVar15;
    while (iVar8 != iStack_128) {
      piVar15 = piVar15 + 0x1a;
      iVar8 = *piVar15;
    }
  }
  *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 2;
LAB_0e13cef3:
  if ((DAT_0f5a63a0 == '\0') && (iVar8 = FUN_04108328(&DAT_0f5a63a0), iVar8 != 0)) {
    func_0x072751f0(0xf5a6388);
    func_0x0410844d(&DAT_0f5a63a0);
  }
  puStack_218 = (undefined *)CONCAT44(puStack_218._4_4_,0xbf75c8f8);
  plStack_210 = (long *)0x0;
  plStack_208 = (long *)((ulong)plStack_208 & 0xffffffff00000000);
  uStack_200 = (code *)0x0;
  uStack_1f8 = (code *)&UNK_0e19a520;
  uStack_1f0 = &SUB_048b06d0;
  puStack_1e8 = &UNK_0e19ca80;
  lStack_1e0 = 0;
  uStack_1d8 = uStack_1d8 & 0xffffffff00000000;
  uStack_1d0 = 0;
  lStack_1c8 = 0;
  FUN_049057f0(&uStack_140,&puStack_218);
  func_0x048aea50(&puStack_218);
  puStack_f8 = (undefined4 *)pcStack_130;
  iStack_f0 = iStack_128;
  iStack_ec = iStack_124;
  uStack_108 = CONCAT44(uStack_140._4_4_,(undefined4)uStack_140);
  plStack_100 = plStack_138;
  puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar11 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar11 = &UNK_0f4af300;
  if ((DAT_0f551cb0 == '\0') && (iVar8 = FUN_04108328(&DAT_0f551cb0), iVar8 != 0)) {
    FUN_04905d10(0xf551c98);
    func_0x0410844d(&DAT_0f551cb0);
  }
  puStack_218 = (undefined *)CONCAT44(puStack_218._4_4_,_DAT_0f551c9c);
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0ef46c98;
  plStack_210 = plVar14 + 3;
  plVar14[3] = (long)puVar11;
  *(undefined1 *)(plVar14 + 4) = 0xff;
  uStack_c8 = 0;
  plStack_c0 = (long *)0x0;
  plStack_208 = plVar14;
  func_0x048afd20(&uStack_108,&puStack_218);
  plVar14 = plStack_208;
  if (plStack_208 != (long *)0x0) {
    LOCK();
    plVar12 = plStack_208 + 1;
    lVar13 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_208 + 0x10))(plStack_208);
      func_0x0412c2d0(plVar14);
    }
  }
  plVar14 = plStack_c0;
  if (plStack_c0 != (long *)0x0) {
    LOCK();
    plVar12 = plStack_c0 + 1;
    lVar13 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
      func_0x0412c2d0(plVar14);
    }
  }
  if ((uVar17 >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uVar17 & 0xff00ffffffffffff) - 8);
  }
  if ((uVar16 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uVar16 & 0xff00ffffffffffff) - 8);
  }
  if ((uStack_d8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_d8 & 0xff00ffffffffffff) - 8);
  }
  uStack_d8 = 0;
  if ((uStack_e0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_e0 & 0xff00ffffffffffff) - 8);
  }
  return;
}



/* ---- referenced strings ----
 * 0x14518a9  [cereal:cereal_root_schema_property]
 * 0x14518b9  oot_schema_property]
 */
