/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x9bad7c0 (ELF vaddr 0x9aad7c0)
 * Label: caller-of-callee
 * Body:  [[09bad7c0, 09baf3aa] [09baf3fe, 09baf430] [09baf4a3, 09baf4b1] [09baf4d4, 09baf4fc] [09baf568, 09baf586] [09baf6c9, 09baf6f4] [09baf717, 09baf765]]
 * Ghidra: FUN_09bad7c0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_09bad7c0(long param_1,undefined1 (*param_2) [16])

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  char cVar8;
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined1 (*pauVar18) [16];
  undefined *puVar19;
  char *pcVar20;
  long lVar21;
  byte bVar22;
  long *plVar23;
  ulong uVar24;
  undefined **ppuVar25;
  long *plVar26;
  ulong unaff_R13;
  ulong uVar27;
  bool bVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  code *pcStack_8d8;
  undefined *puStack_8d0;
  long lStack_8c8;
  undefined4 uStack_8c0;
  undefined1 auStack_8b8 [16];
  ulong auStack_8a8 [2];
  long lStack_898;
  byte bStack_890;
  undefined7 uStack_88f;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined1 auStack_878 [8];
  long *plStack_870;
  undefined *puStack_868;
  undefined8 uStack_860;
  undefined4 uStack_858;
  undefined4 uStack_854;
  long lStack_850;
  undefined8 uStack_848;
  undefined *puStack_840;
  long lStack_838;
  undefined *puStack_7e8;
  undefined1 *puStack_7e0;
  undefined8 uStack_7d8;
  code *pcStack_7d0;
  uint uStack_7c8;
  undefined1 uStack_7c4;
  long lStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined4 uStack_7a8;
  uint uStack_798;
  ulong auStack_788 [2];
  long lStack_778;
  ulong uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  ulong uStack_750;
  long lStack_748;
  undefined1 auStack_740 [16];
  byte bStack_730;
  undefined7 uStack_72f;
  undefined8 uStack_720;
  ulong uStack_718;
  long *plStack_710;
  undefined8 uStack_708;
  byte bStack_700;
  undefined1 uStack_6ff;
  undefined6 uStack_6fe;
  undefined8 uStack_6f0;
  ulong auStack_6e8 [4];
  undefined *apuStack_6c8 [2];
  undefined1 auStack_6b8 [8];
  long *plStack_6b0;
  undefined1 auStack_6a8 [8];
  long *plStack_6a0;
  ulong uStack_698;
  undefined1 auStack_690 [16];
  ulong uStack_680;
  ulong uStack_678;
  ulong uStack_670;
  ulong auStack_668 [2];
  long lStack_658;
  uint uStack_5e0;
  char cStack_5d8;
  undefined1 auStack_5d0 [16];
  undefined8 uStack_5c0;
  undefined1 auStack_5b8 [16];
  long lStack_5a8;
  byte bStack_5a0;
  long lStack_590;
  long lStack_588;
  ulong uStack_580;
  long lStack_578;
  long *plStack_570;
  ulong uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  ulong uStack_548;
  ulong uStack_540;
  ulong uStack_538;
  undefined8 uStack_530;
  long lStack_528;
  uint uStack_4b0;
  undefined1 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  long lStack_478;
  byte bStack_470;
  undefined8 uStack_468;
  undefined *puStack_460;
  char *pcStack_458;
  undefined1 *puStack_450;
  undefined8 uStack_448;
  undefined1 auStack_440 [256];
  undefined1 *puStack_340;
  undefined8 uStack_338;
  undefined1 auStack_330 [384];
  undefined2 uStack_1b0;
  undefined1 uStack_1ae;
  undefined8 uStack_1ac;
  undefined8 uStack_1a0;
  undefined2 uStack_198;
  undefined *puStack_190;
  undefined2 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined1 uStack_ec;
  undefined *puStack_e8;
  undefined2 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined2 uStack_44;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  auVar7._8_8_ = auStack_740._8_8_;
  auVar7._0_8_ = auStack_740._0_8_;
  bStack_5a0 = param_2[0xf][8];
  if (bStack_5a0 == 1) {
    uStack_698 = *(ulong *)*param_2;
    auStack_690 = *(undefined1 (*) [16])(*param_2 + 8);
    *param_2 = (undefined1  [16])0x0;
    *(undefined8 *)param_2[1] = 0;
    uStack_670 = *(ulong *)(param_2[2] + 8);
    uStack_680 = *(ulong *)(param_2[1] + 8);
    uStack_678 = *(ulong *)param_2[2];
    *(undefined1 (*) [16])(param_2[1] + 8) = (undefined1  [16])0x0;
    *(undefined8 *)(param_2[2] + 8) = 0;
    lVar17 = *(long *)param_2[4];
    auStack_668[0] = *(ulong *)param_2[3];
    auStack_668[1] = *(ulong *)(param_2[3] + 8);
    param_2[3] = (undefined1  [16])0x0;
    *(undefined8 *)param_2[4] = 0;
    lVar15 = *(long *)(param_1 + 0x10);
    lStack_658 = lVar17;
  }
  else {
    uStack_698 = CONCAT44(uStack_698._4_4_,*(undefined4 *)*param_2);
    auStack_690 = *(undefined1 (*) [16])(*param_2 + 8);
    uStack_680 = *(ulong *)(param_2[1] + 8);
    *(undefined1 (*) [16])(*param_2 + 8) = (undefined1  [16])0x0;
    *(undefined8 *)(param_2[1] + 8) = 0;
    uStack_678 = uStack_678 & 0xffffffffffffff00;
    cStack_5d8 = '\0';
    if (param_2[0xc][0] == '\x01') {
      uStack_670 = uStack_670 & 0xffffffffffffff00;
      uStack_5e0 = 0xffffffff;
      uVar2 = *(uint *)(param_2[0xb] + 8);
      if ((ulong)uVar2 != 0xffffffff) {
        uStack_468 = &uStack_670;
        (**(code **)(&UNK_0f1d77a8 + (ulong)uVar2 * 8))(&uStack_468,param_2[2] + 8);
        uStack_5e0 = uVar2;
      }
      cStack_5d8 = '\x01';
    }
    auVar7._8_8_ = auStack_740._8_8_;
    auVar7._0_8_ = auStack_740._0_8_;
    auStack_5d0 = *(undefined1 (*) [16])(param_2[0xc] + 8);
    uStack_5c0 = *(undefined8 *)(param_2[0xd] + 8);
    *(undefined1 (*) [16])(param_2[0xc] + 8) = (undefined1  [16])0x0;
    *(undefined8 *)(param_2[0xd] + 8) = 0;
    auStack_5b8._0_8_ = *(undefined8 *)param_2[0xe];
    auStack_5b8._8_8_ = *(undefined8 *)(param_2[0xe] + 8);
    lVar17 = *(long *)param_2[0xf];
    param_2[0xe] = (undefined1  [16])0x0;
    *(undefined8 *)param_2[0xf] = 0;
    lVar15 = *(long *)(param_1 + 0x10);
    lStack_5a8 = lVar17;
  }
  if (lVar15 == 0) goto joined_r0x09baf18a;
  plVar10 = (long *)func_0x0412c300();
  lVar17 = 0;
  plStack_570 = plVar10;
  auVar7 = auStack_740;
  if (plVar10 == (long *)0x0) goto joined_r0x09baf18a;
  lVar17 = *(long *)(param_1 + 8);
  lStack_578 = lVar17;
  if (lVar17 != 0) {
    uStack_468 = (ulong *)0xbb994df42f2409a3;
    puStack_460 = &UNK_0140f690;
    pcStack_458 = (char *)0x1;
    puStack_450 = (undefined1 *)CONCAT44(puStack_450._4_4_,0x22);
    if (bStack_5a0 == 0) {
      _auStack_878 = (undefined1  [16])0x0;
      puStack_868 = (undefined *)0x0;
      func_0x09baf830(2,0x2d,&uStack_698,auStack_878,&uStack_468);
      if ((auStack_878[0] & 1) != 0) {
        func_0x0412a280(puStack_868,(ulong)auStack_878 & 0xfffffffffffffffe);
      }
    }
    uVar2 = uStack_5e0;
    bStack_470 = bStack_5a0;
    if ((bStack_5a0 & 1) == 0) {
      uStack_568 = CONCAT44(uStack_568._4_4_,(undefined4)uStack_698);
      uStack_560 = auStack_690._0_8_;
      uStack_558 = auStack_690._8_8_;
      uStack_550 = uStack_680;
      auStack_690 = (undefined1  [16])0x0;
      uStack_680 = 0;
      uStack_548 = uStack_548 & 0xffffffffffffff00;
      uStack_4a8 = 0;
      if (cStack_5d8 == '\x01') {
        uStack_540 = uStack_540 & 0xffffffffffffff00;
        uStack_4b0 = 0xffffffff;
        if ((ulong)uStack_5e0 != 0xffffffff) {
          uStack_468 = &uStack_540;
          (**(code **)(&UNK_0f1d77a8 + (ulong)uStack_5e0 * 8))(&uStack_468,&uStack_670);
          uStack_4b0 = uVar2;
        }
        uStack_4a8 = 1;
      }
      uStack_4a0 = auStack_5d0._0_8_;
      uStack_498 = auStack_5d0._8_8_;
      uStack_490 = uStack_5c0;
      auStack_5d0 = (undefined1  [16])0x0;
      uStack_5c0 = 0;
      pauVar18 = &auStack_5b8;
      uStack_488 = auStack_5b8._0_8_;
      uStack_480 = auStack_5b8._8_8_;
      lStack_478 = lStack_5a8;
    }
    else {
      uStack_558 = auStack_690._8_8_;
      uStack_568 = uStack_698;
      uStack_560 = auStack_690._0_8_;
      uStack_698 = 0;
      auStack_690 = ZEXT816(0);
      uStack_550 = uStack_680;
      uStack_548 = uStack_678;
      uStack_540 = uStack_670;
      uStack_680 = 0;
      uStack_678 = 0;
      uStack_670 = 0;
      pauVar18 = (undefined1 (*) [16])auStack_668;
      uStack_538 = auStack_668[0];
      uStack_530 = auStack_668[1];
      lStack_528 = lStack_658;
    }
    *pauVar18 = (undefined1  [16])0x0;
    *(undefined8 *)pauVar18[1] = 0;
    if ((bStack_470 & 1) != 0) {
      func_0x04863060(auStack_8b8,0);
      func_0x0485e1c0(&uStack_468);
      cVar8 = func_0x0485e320(&uStack_468,&uStack_568,auStack_8b8,0);
      func_0x0485e2d0(&uStack_468);
      if (cVar8 != '\0') {
        cVar8 = func_0x04865100(auStack_8b8,&UNK_013decd9);
        if (cVar8 == '\0') {
LAB_09badf97:
          cVar8 = func_0x04865100(auStack_8b8,&UNK_013decd9);
          if (cVar8 == '\0') goto LAB_09baf0c8;
          uVar11 = func_0x04864680(auStack_8b8,&UNK_013decd9);
          auVar5._14_2_ = 0;
          auVar5._0_14_ = stack0xfffffffffffff78a;
          _auStack_878 = auVar5 << 0x10;
          func_0x04863cb0(&uStack_468,uVar11,auStack_878);
          pcVar20 = pcStack_458;
          if ((((ulong)uStack_468 & 1) == 0) || (puStack_460 != (undefined *)0x23)) {
            if (((ulong)uStack_468 & 1) != 0) {
              bVar28 = false;
              goto LAB_09bae030;
            }
            bVar28 = false;
          }
          else {
            iVar9 = bcmp(pcStack_458,&UNK_012faba3,0x23);
            bVar28 = iVar9 == 0;
LAB_09bae030:
            func_0x0412a280(pcVar20,(ulong)uStack_468 & 0xfffffffffffffffe);
          }
          if ((auStack_878[0] & 1) != 0) {
            func_0x0412a280(puStack_868,(ulong)auStack_878 & 0xfffffffffffffffe);
          }
          if (!bVar28) goto LAB_09baf0c8;
          uVar11 = func_0x04864680(auStack_8b8,&UNK_012f0b9e);
          func_0x04863480(&puStack_7e8,uVar11);
          (**(code **)(**(long **)(lVar17 + 0x88) + 0x20))(&uStack_718);
          uVar12 = uStack_718;
          if (uStack_718 != 0) {
            uVar11 = func_0x04864680(&puStack_7e8,&UNK_01394a0b);
            auVar6._14_2_ = 0;
            auVar6._0_14_ = stack0xfffffffffffff78a;
            _auStack_878 = auVar6 << 0x10;
            func_0x04863cb0(&uStack_468,uVar11,auStack_878);
            func_0x09c0bf00(uVar12,&uStack_468);
            if (((ulong)uStack_468 & 1) != 0) {
              func_0x0412a280(pcStack_458,(ulong)uStack_468 & 0xfffffffffffffffe);
            }
            if ((auStack_878[0] & 1) != 0) {
              func_0x0412a280(puStack_868,(ulong)auStack_878 & 0xfffffffffffffffe);
            }
          }
          plVar14 = plStack_710;
          if (plStack_710 != (long *)0x0) {
            LOCK();
            plVar23 = plStack_710 + 1;
            lVar17 = *plVar23;
            *plVar23 = *plVar23 + -1;
            UNLOCK();
            if (lVar17 == 0) {
              (**(code **)(*plStack_710 + 0x10))(plStack_710);
              func_0x0412c2d0(plVar14);
            }
          }
          ppuVar25 = &puStack_7e8;
        }
        else {
          uVar11 = func_0x04864680(auStack_8b8,&UNK_013decd9);
          auVar4._14_2_ = 0;
          auVar4._0_14_ = stack0xfffffffffffff78a;
          _auStack_878 = auVar4 << 0x10;
          func_0x04863cb0(&uStack_468,uVar11,auStack_878);
          puVar19 = puStack_460;
          if (((ulong)uStack_468 & 1) == 0) {
            puVar19 = (undefined *)((ulong)uStack_468 >> 1 & 0x7f);
          }
          if (puVar19 == (undefined *)0x15) {
            pcVar20 = pcStack_458;
            if (((ulong)uStack_468 & 1) == 0) {
              pcVar20 = (char *)((long)&uStack_468 + 1);
            }
            auVar31[0] = -(pcVar20[5] == DAT_014e23a0);
            auVar31[1] = -(pcVar20[6] == UNK_014e23a1);
            auVar31[2] = -(pcVar20[7] == UNK_014e23a2);
            auVar31[3] = -(pcVar20[8] == UNK_014e23a3);
            auVar31[4] = -(pcVar20[9] == UNK_014e23a4);
            auVar31[5] = -(pcVar20[10] == UNK_014e23a5);
            auVar31[6] = -(pcVar20[0xb] == UNK_014e23a6);
            auVar31[7] = -(pcVar20[0xc] == UNK_014e23a7);
            auVar31[8] = -(pcVar20[0xd] == UNK_014e23a8);
            auVar31[9] = -(pcVar20[0xe] == UNK_014e23a9);
            auVar31[10] = -(pcVar20[0xf] == UNK_014e23aa);
            auVar31[0xb] = -(pcVar20[0x10] == UNK_014e23ab);
            auVar31[0xc] = -(pcVar20[0x11] == UNK_014e23ac);
            auVar31[0xd] = -(pcVar20[0x12] == UNK_014e23ad);
            auVar31[0xe] = -(pcVar20[0x13] == UNK_014e23ae);
            auVar31[0xf] = -(pcVar20[0x14] == UNK_014e23af);
            auVar30[0] = -(*pcVar20 == DAT_014e4ec0);
            auVar30[1] = -(pcVar20[1] == UNK_014e4ec1);
            auVar30[2] = -(pcVar20[2] == UNK_014e4ec2);
            auVar30[3] = -(pcVar20[3] == UNK_014e4ec3);
            auVar30[4] = -(pcVar20[4] == UNK_014e4ec4);
            auVar30[5] = -(pcVar20[5] == UNK_014e4ec5);
            auVar30[6] = -(pcVar20[6] == UNK_014e4ec6);
            auVar30[7] = -(pcVar20[7] == UNK_014e4ec7);
            auVar30[8] = -(pcVar20[8] == UNK_014e4ec8);
            auVar30[9] = -(pcVar20[9] == UNK_014e4ec9);
            auVar30[10] = -(pcVar20[10] == UNK_014e4eca);
            auVar30[0xb] = -(pcVar20[0xb] == UNK_014e4ecb);
            auVar30[0xc] = -(pcVar20[0xc] == UNK_014e4ecc);
            auVar30[0xd] = -(pcVar20[0xd] == UNK_014e4ecd);
            auVar30[0xe] = -(pcVar20[0xe] == UNK_014e4ece);
            auVar30[0xf] = -(pcVar20[0xf] == UNK_014e4ecf);
            auVar30 = auVar30 & auVar31;
            bVar28 = (ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar30[0xf] >> 7) << 0xf) == 0xffff;
          }
          else {
            bVar28 = false;
          }
          if (((ulong)uStack_468 & 1) == 0) {
          }
          else {
            func_0x0412a280(pcStack_458,(ulong)uStack_468 & 0xfffffffffffffffe);
          }
          if ((auStack_878[0] & 1) != 0) {
            func_0x0412a280(puStack_868,(ulong)auStack_878 & 0xfffffffffffffffe);
          }
          if (!bVar28) goto LAB_09badf97;
          uVar24 = uStack_550 >> 1 & 0x7f;
          uVar12 = (long)&uStack_550 + 1;
          if ((uStack_550 & 1) != 0) {
            uVar24 = uStack_548;
            uVar12 = uStack_540;
          }
          auStack_740 = func_0x0eedb4e0(uVar12,uVar24);
          uVar11 = func_0x04864680(auStack_8b8,&UNK_012f0b9e);
          func_0x04863480(apuStack_6c8,uVar11);
          uVar11 = func_0x04864680(apuStack_6c8,&UNK_013e90af);
          func_0x0d57a0f0(&lStack_590,uVar11);
          uVar12 = func_0x04864680(apuStack_6c8,&UNK_01374325);
          uStack_468 = (ulong *)((ulong)uStack_468 & 0xffffffffffff0000);
          func_0x04863cb0(&bStack_890,uVar12,&uStack_468);
          if (((ulong)uStack_468 & 1) != 0) {
            uVar12 = (ulong)uStack_468 & 0xfffffffffffffffe;
            func_0x0412a280(pcStack_458);
          }
          pcStack_458 = (char *)uStack_580;
          uStack_468 = (ulong *)lStack_590;
          puStack_460 = (undefined *)lStack_588;
          lVar15 = lVar17 + 0x38;
          func_0x0412d680(lVar15);
          lStack_748 = lVar15;
          if (((ulong)pcStack_458 & 0xffffffff) == 0xffffffff) {
            func_0x04931450();
            goto LAB_09baf399;
          }
          auStack_878 = (undefined1  [8])&puStack_7e8;
          uVar13 = (**(code **)(&UNK_0f478168 + ((ulong)pcStack_458 & 0xffffffff) * 8))
                             (auStack_878,&uStack_468);
          uVar24 = *(ulong *)(lVar17 + 0x68);
          if (uVar24 != 0) {
            uVar12 = uVar24 - (uVar24 >> 1 & 0x5555555555555555);
            uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333);
            uVar12 = ((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
            if (uVar12 >> 0x38 < 2) {
              unaff_R13 = uVar24 - 1 & uVar13;
            }
            else {
              unaff_R13 = uVar13;
              if (uVar24 <= uVar13) {
                if ((uVar13 | uVar24) >> 0x20 == 0) {
                  unaff_R13 = (uVar13 & 0xffffffff) % (uVar24 & 0xffffffff);
                }
                else {
                  unaff_R13 = uVar13 % uVar24;
                }
              }
            }
            puVar3 = *(undefined8 **)(*(long *)(lVar17 + 0x60) + unaff_R13 * 8);
            if ((puVar3 != (undefined8 *)0x0) && (plVar14 = (long *)*puVar3, plVar14 != (long *)0x0)
               ) {
              if ((byte)(uVar12 >> 0x38) < 2) {
                do {
                  if (plVar14[1] == uVar13) {
                    uVar2 = *(uint *)(plVar14 + 4);
                    if ((uint)pcStack_458 == uVar2 && uVar2 != 0xffffffff) {
                      auStack_878 = (undefined1  [8])&puStack_7e8;
                      cVar8 = (**(code **)(&UNK_0f1d8ab8 + (ulong)uVar2 * 8))
                                        (auStack_878,plVar14 + 2,&uStack_468);
                      if (cVar8 != '\0') goto LAB_09bae6f2;
                    }
                    else if ((uint)pcStack_458 == uVar2) goto LAB_09bae6f2;
                  }
                  else if ((plVar14[1] & uVar24 - 1) != unaff_R13) break;
                  plVar14 = (long *)*plVar14;
                } while (plVar14 != (long *)0x0);
              }
              else {
                do {
                  uVar12 = plVar14[1];
                  if (uVar12 == uVar13) {
                    uVar2 = *(uint *)(plVar14 + 4);
                    if ((uint)pcStack_458 == uVar2 && uVar2 != 0xffffffff) {
                      auStack_878 = (undefined1  [8])&puStack_7e8;
                      cVar8 = (**(code **)(&UNK_0f1d8ab8 + (ulong)uVar2 * 8))
                                        (auStack_878,plVar14 + 2,&uStack_468);
                      if (cVar8 != '\0') goto LAB_09bae6f2;
                    }
                    else if ((uint)pcStack_458 == uVar2) goto LAB_09bae6f2;
                  }
                  else {
                    if (uVar24 <= uVar12) {
                      if ((uVar12 | uVar24) >> 0x20 == 0) {
                        uVar12 = (uVar12 & 0xffffffff) % (uVar24 & 0xffffffff);
                      }
                      else {
                        uVar12 = uVar12 % uVar24;
                      }
                    }
                    if (uVar12 != unaff_R13) break;
                  }
                  plVar14 = (long *)*plVar14;
                } while (plVar14 != (long *)0x0);
              }
            }
          }
          uVar12 = 0x38;
          plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
          if (plVar14 == (long *)0x0) {
            uVar12 = 0;
            func_0x0eec74c0(0x38);
          }
          *plVar14 = 0;
          plVar14[1] = uVar13;
          plVar14[4] = (long)pcStack_458;
          plVar14[2] = (long)uStack_468;
          plVar14[3] = (long)puStack_460;
          lVar15 = _DAT_0f7ba060;
          plVar14[5] = _DAT_0f7ba058;
          plVar14[6] = lVar15;
          fVar29 = (float)(*(long *)(lVar17 + 0x78) + 1);
          if ((uVar24 == 0) || ((float)uVar24 * *(float *)(lVar17 + 0x80) < fVar29)) {
            uVar27 = 1;
            if (2 < uVar24) {
              uVar27 = (ulong)((uVar24 & uVar24 - 1) != 0);
            }
            uVar27 = uVar27 | uVar24 * 2;
            fVar29 = (float)func_0x0eee3ab0(fVar29 / *(float *)(lVar17 + 0x80));
            uVar24 = (long)(fVar29 - _DAT_01198778) & (long)fVar29 >> 0x3f | (long)fVar29;
            if (uVar24 < uVar27) {
              uVar24 = uVar27;
            }
            uVar27 = 2;
            if ((uVar24 != 1) && (uVar27 = uVar24, (uVar24 & uVar24 - 1) != 0)) {
              uVar27 = func_0x0412c3f0();
            }
            uVar24 = *(ulong *)(lVar17 + 0x68);
            if (uVar24 < uVar27) {
LAB_09bae446:
              if (uVar27 >> 0x3d != 0) {
LAB_09baf399:
                lVar17 = func_0x04882eb0();
                if ((((byte)pcStack_7d0 & 1) != 0) && (((ulong)puStack_7e8 & 1) != 0)) {
                  uVar12 = (ulong)puStack_7e8 & 0xfffffffffffffffe;
                  func_0x0412a280(uStack_7d8);
                }
                func_0x09b920f0(auStack_878);
                if ((bStack_730 & 1) != 0) {
                  uVar12 = CONCAT71(uStack_72f,bStack_730) & 0xfffffffffffffffe;
                  func_0x0412a280(uStack_720);
                }
                func_0x048e65b0(&uStack_468);
                func_0x09b92220(&uStack_718);
                if ((bStack_890 & 1) != 0) {
                  uVar12 = CONCAT71(uStack_88f,bStack_890) & 0xfffffffffffffffe;
                  func_0x0412a280(uStack_880);
                }
                func_0x04863610(apuStack_6c8);
                func_0x04863610(auStack_8b8);
                func_0x09baf780(&uStack_568);
                func_0x09baf800(&lStack_578);
                func_0x09baf780(&uStack_698);
                func_0x0eee2d70(lVar17);
                lVar15 = 0;
                if (*(undefined **)(uVar12 + 8) == &UNK_01a1fbf3) {
                  lVar15 = lVar17 + 8;
                }
                return lVar15;
              }
              lVar15 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
              if (lVar15 == 0) {
                func_0x0eec74c0(uVar27 * 8,0);
              }
              lVar1 = *(long *)(lVar17 + 0x60);
              *(long *)(lVar17 + 0x60) = lVar15;
              if (lVar1 != 0) {
                func_0x0412a280(lVar1,*(long *)(lVar17 + 0x68) << 3);
                lVar15 = *(long *)(lVar17 + 0x60);
              }
              *(ulong *)(lVar17 + 0x68) = uVar27;
              memset(lVar15,0,uVar27 * 8);
              plVar23 = *(long **)(lVar17 + 0x70);
              if (plVar23 != (long *)0x0) {
                uVar24 = plVar23[1];
                uVar12 = uVar27 - 1;
                if ((uVar27 & uVar12) == 0) {
                  *(long *)(lVar15 + (uVar24 & uVar12) * 8) = lVar17 + 0x70;
                  uVar24 = uVar24 & uVar12;
                  while (plVar26 = plVar23, plVar23 = (long *)*plVar26, plVar23 != (long *)0x0) {
                    uVar27 = plVar23[1] & uVar12;
                    if (uVar27 != uVar24) {
                      if (*(long *)(lVar15 + uVar27 * 8) == 0) {
                        *(long **)(lVar15 + uVar27 * 8) = plVar26;
                        uVar24 = uVar27;
                      }
                      else {
                        *plVar26 = *plVar23;
                        *plVar23 = **(undefined8 **)(lVar15 + uVar27 * 8);
                        **(long **)(lVar15 + uVar27 * 8) = (long)plVar23;
                        plVar23 = plVar26;
                      }
                    }
                  }
                }
                else {
                  if (uVar27 <= uVar24) {
                    if ((uVar24 | uVar27) >> 0x20 == 0) {
                      uVar24 = (uVar24 & 0xffffffff) % (uVar27 & 0xffffffff);
                    }
                    else {
                      uVar24 = uVar24 % uVar27;
                    }
                  }
                  *(long *)(lVar15 + uVar24 * 8) = lVar17 + 0x70;
                  plVar26 = (long *)*plVar23;
                  while (plVar26 != (long *)0x0) {
                    uVar12 = plVar26[1];
                    if (uVar27 <= uVar12) {
                      if ((uVar12 | uVar27) >> 0x20 == 0) {
                        uVar12 = (uVar12 & 0xffffffff) % (uVar27 & 0xffffffff);
                      }
                      else {
                        uVar12 = uVar12 % uVar27;
                      }
                    }
                    if (uVar12 != uVar24) {
                      if (*(long *)(lVar15 + uVar12 * 8) == 0) {
                        *(long **)(lVar15 + uVar12 * 8) = plVar23;
                        uVar24 = uVar12;
                      }
                      else {
                        *plVar23 = *plVar26;
                        *plVar26 = **(long **)(lVar15 + uVar12 * 8);
                        **(undefined8 **)(lVar15 + uVar12 * 8) = plVar26;
                        plVar26 = plVar23;
                      }
                    }
                    plVar23 = plVar26;
                    plVar26 = (long *)*plVar23;
                  }
                }
              }
            }
            else if (uVar27 < uVar24) {
              uStack_750 = uVar24;
              fVar29 = (float)func_0x0eee3ab0((float)*(ulong *)(lVar17 + 0x78) /
                                              *(float *)(lVar17 + 0x80));
              uVar24 = (long)(fVar29 - _DAT_01198778) & (long)fVar29 >> 0x3f | (long)fVar29;
              if ((uStack_750 < 3) ||
                 (uVar16 = uStack_750 - (uStack_750 >> 1 & 0x5555555555555555),
                 uVar16 = (uVar16 >> 2 & 0x3333333333333333) + (uVar16 & 0x3333333333333333),
                 1 < (byte)(((uVar16 >> 4) + uVar16 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38
                           ))) {
                uVar24 = func_0x0412c3f0(uVar24);
              }
              else if (1 < uVar24) {
                lVar15 = 0x3f;
                if (uVar24 - 1 != 0) {
                  for (; uVar24 - 1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
                  }
                }
                uVar24 = 1L << (-((byte)lVar15 ^ 0x3f) & 0x3f);
              }
              if (uVar24 < uVar27) {
                uVar24 = uVar27;
              }
              if (uVar24 < uStack_750) {
                uVar27 = uVar24;
                if (uVar24 != 0) goto LAB_09bae446;
                lVar15 = *(long *)(lVar17 + 0x60);
                *(undefined8 *)(lVar17 + 0x60) = 0;
                if (lVar15 != 0) {
                  func_0x0412a280(lVar15,*(long *)(lVar17 + 0x68) << 3);
                }
                *(undefined8 *)(lVar17 + 0x68) = 0;
              }
            }
            uVar24 = *(ulong *)(lVar17 + 0x68);
            if ((uVar24 & uVar24 - 1) == 0) {
              unaff_R13 = uVar13 & uVar24 - 1;
            }
            else {
              unaff_R13 = uVar13;
              if (uVar24 <= uVar13) {
                if ((uVar13 | uVar24) >> 0x20 == 0) {
                  unaff_R13 = (uVar13 & 0xffffffff) % (uVar24 & 0xffffffff);
                }
                else {
                  unaff_R13 = uVar13 % uVar24;
                }
              }
            }
          }
          lVar15 = *(long *)(lVar17 + 0x60);
          plVar23 = *(long **)(lVar15 + unaff_R13 * 8);
          if (plVar23 == (long *)0x0) {
            *plVar14 = *(long *)(lVar17 + 0x70);
            *(long **)(lVar17 + 0x70) = plVar14;
            *(long *)(lVar15 + unaff_R13 * 8) = lVar17 + 0x70;
            if (*plVar14 != 0) {
              uVar12 = *(ulong *)(*plVar14 + 8);
              if ((uVar24 & uVar24 - 1) == 0) {
                *(long **)(lVar15 + (uVar12 & uVar24 - 1) * 8) = plVar14;
              }
              else {
                if (uVar24 <= uVar12) {
                  if ((uVar12 | uVar24) >> 0x20 == 0) {
                    *(long **)(lVar15 + ((uVar12 & 0xffffffff) % (uVar24 & 0xffffffff)) * 8) =
                         plVar14;
                    goto LAB_09bae6ed;
                  }
                  uVar12 = uVar12 % uVar24;
                }
                *(long **)(lVar15 + uVar12 * 8) = plVar14;
              }
            }
          }
          else {
            *plVar14 = *plVar23;
            *plVar23 = (long)plVar14;
          }
LAB_09bae6ed:
          *(long *)(lVar17 + 0x78) = *(long *)(lVar17 + 0x78) + 1;
LAB_09bae6f2:
          *(undefined1 (*) [16])(plVar14 + 5) = auStack_740;
          func_0x0412d6b0(lStack_748);
          plVar14 = *(long **)(lVar17 + 0x88);
          if ((bStack_890 & 1) == 0) {
            uStack_758 = uStack_880;
            uStack_768 = CONCAT71(uStack_88f,bStack_890);
            uStack_760 = uStack_888;
          }
          else {
            func_0x0412e5e0(&uStack_768,uStack_880,uStack_888);
          }
          if ((uStack_538 & 1) == 0) {
            lStack_778 = lStack_528;
            auStack_788[0] = uStack_538;
            auStack_788[1] = uStack_530;
          }
          else {
            func_0x0412e5e0(auStack_788,lStack_528,uStack_530);
          }
          (**(code **)(*plVar14 + 0x28))(plVar14,&uStack_768,auStack_788);
          if ((auStack_788[0] & 1) == 0) {
            if ((uStack_768 & 1) != 0) goto LAB_09bae835;
LAB_09bae7f4:
            if ((uStack_538 & 1) != 0) goto LAB_09bae858;
LAB_09bae7fe:
            lStack_898 = lStack_528;
            auStack_8a8[0] = uStack_538;
            auStack_8a8[1] = uStack_530;
          }
          else {
            func_0x0412a280(lStack_778,auStack_788[0] & 0xfffffffffffffffe);
            if ((uStack_768 & 1) == 0) goto LAB_09bae7f4;
LAB_09bae835:
            func_0x0412a280(uStack_758,uStack_768 & 0xfffffffffffffffe);
            if ((uStack_538 & 1) == 0) goto LAB_09bae7fe;
LAB_09bae858:
            func_0x0412e5e0(auStack_8a8,lStack_528,uStack_530);
          }
          uStack_718 = _DAT_01a1eed8;
          plStack_710 = _UNK_01a1eee0;
          uStack_708 = 0;
          bStack_700 = 0;
          uStack_6ff = 0;
          auStack_6e8[0] = 0;
          auStack_6e8[1] = 0;
          auStack_6e8[2] = 0;
          if ((auStack_8a8[0] & 1) == 0) {
            auStack_6e8[2] = lStack_898;
            auStack_6e8[0] = auStack_8a8[0];
            auStack_6e8[1] = auStack_8a8[1];
          }
          else {
            func_0x04885070(auStack_6e8,lStack_898,auStack_8a8[1]);
          }
          func_0x0412f5e0(&bStack_700,&UNK_012faba3,0x23);
          if ((auStack_8a8[0] & 1) != 0) {
            func_0x0412a280(lStack_898,auStack_8a8[0] & 0xfffffffffffffffe);
          }
          lVar15 = *(long *)(lVar17 + 0x98);
          puStack_460 = (undefined *)(lVar15 + 0x140);
          pcStack_458 = (char *)CONCAT44(pcStack_458._4_4_,0xffffffff);
          puStack_450 = auStack_440;
          uStack_448 = 0x800000000;
          puStack_340 = auStack_330;
          uStack_338 = 0x800000000;
          uStack_1b0 = 0xfffc;
          uStack_1ae = 1;
          uStack_1ac = 0xffffffff00000000;
          uStack_1a0 = 0;
          uStack_198 = 0;
          uStack_468 = (ulong *)&UNK_0ef47258;
          uStack_188 = 0;
          puStack_190 = &UNK_0ef472c8;
          puStack_128 = &uStack_168;
          uStack_180 = 0;
          uStack_178 = 0;
          uStack_170 = 0;
          uStack_168 = 0;
          uStack_160 = 0;
          uStack_158 = 0;
          uStack_150 = 0;
          uStack_148 = 0;
          uStack_140 = 0x100;
          uStack_138 = 0;
          uStack_130 = 0;
          uStack_120 = 0;
          uStack_118 = 0;
          uStack_110 = 0;
          uStack_108 = 0;
          uStack_100 = 0;
          uStack_f8 = 0x200;
          uStack_f0 = 0x144;
          uStack_ec = 0;
          uStack_e0 = 0;
          puStack_e8 = &UNK_0ef473d8;
          puStack_80 = &uStack_c0;
          uStack_d8 = 0;
          uStack_d0 = 0;
          uStack_c8 = 0;
          uStack_c0 = 0;
          uStack_b8 = 0;
          uStack_b0 = 0;
          uStack_a8 = 0;
          uStack_a0 = 0;
          uStack_98 = 0x100;
          uStack_90 = 0;
          uStack_88 = 0;
          uStack_68 = 0;
          uStack_60 = 0;
          uStack_78 = 0;
          uStack_70 = 0;
          uStack_58 = 0;
          uStack_50 = 0x200;
          uStack_48 = 0x144;
          uStack_44 = 0x2000;
          uStack_40 = 4;
          uStack_38 = 0;
          pcStack_8d8 = (code *)&UNK_0f1d95c0;
          if (_DAT_0f54fd90 == (undefined1  [8])0x0) {
            func_0x048b0de0(auStack_878,&bStack_730);
            plVar14 = _DAT_0f54fd98;
            _DAT_0f54fd90 = auStack_878;
            _DAT_0f54fd98 = plStack_870;
            _auStack_878 = ZEXT816(0);
            if (plVar14 != (long *)0x0) {
              LOCK();
              plVar23 = plVar14 + 1;
              lVar1 = *plVar23;
              *plVar23 = *plVar23 + -1;
              UNLOCK();
              if (lVar1 == 0) {
                (**(code **)(*plVar14 + 0x10))(plVar14);
                func_0x0412c2d0(plVar14);
              }
            }
            plVar14 = plStack_870;
            if (plStack_870 != (long *)0x0) {
              LOCK();
              plVar23 = plStack_870 + 1;
              lVar1 = *plVar23;
              *plVar23 = *plVar23 + -1;
              UNLOCK();
              if (lVar1 == 0) {
                (**(code **)(*plStack_870 + 0x10))(plStack_870);
                func_0x0412c2d0(plVar14);
              }
            }
          }
          lStack_850 = lVar15 + 0x158;
          uStack_7d8 = &UNK_09bcae40;
          uStack_7c8 = 0x4b33c45f;
          pcStack_7d0 = (code *)0x0;
          uStack_7c4 = 4;
          lStack_7c0 = (long)_DAT_0f54fd90;
          uStack_7b8 = 0;
          uStack_7b0 = 0;
          puStack_868 = &UNK_09bcae40;
          uStack_860 = (code *)0x0;
          uStack_858 = 0x4b33c45f;
          uStack_854 = CONCAT31(uStack_854._1_3_,4);
          puStack_7e8 = (undefined *)0x0;
          auStack_878 = (undefined1  [8])&uStack_718;
          uStack_848 = 0;
          puStack_840 = &UNK_09bcac80;
          cVar8 = func_0x0ed6b850(&uStack_468,&puStack_190,auStack_878,&pcStack_8d8);
          if (uStack_860 != (code *)0x0) {
            (*uStack_860)(auStack_878);
            if (pcStack_7d0 != (code *)0x0) {
              (*pcStack_7d0)(&puStack_7e8);
            }
          }
          if (cVar8 != '\0') {
            func_0x048e6440(&bStack_730,&uStack_468);
            uStack_7c8 = auStack_740._0_4_ & 0xffff;
            uStack_798 = auStack_740._8_4_ & 0xffff;
            puStack_7e8 = (undefined *)CONCAT44(puStack_7e8._4_4_,auStack_740._4_4_);
            uStack_7d8 = (undefined *)
                         (CONCAT44(uStack_7d8._4_4_,auStack_740._2_4_) & 0xffffffff0000ffff);
            uStack_7b8 = CONCAT44(uStack_7b8._4_4_,(uint)auStack_740._14_2_);
            uStack_7a8 = auStack_740._10_4_;
            func_0x0470d9a0(&pcStack_8d8,&UNK_01287ba2,0x28,0x122112,&puStack_7e8);
            func_0x09b91310(auStack_878,&pcStack_8d8,&bStack_730);
            if (((ulong)pcStack_8d8 & 1) != 0) {
              func_0x0412a280(lStack_8c8,(ulong)pcStack_8d8 & 0xfffffffffffffffe);
            }
            lVar15 = *(long *)(lVar17 + 0x98);
            func_0x09bc1640(&puStack_7e8,lVar15,auStack_878);
            if ((byte)pcStack_7d0 == '\0') {
              func_0x09bc1a70(auStack_6b8,lVar15);
              bVar22 = 0;
            }
            else {
              plVar14 = *(long **)(lVar15 + 0x1e8);
              if (plVar14 != (long *)0x0) {
                puVar19 = (undefined *)(uStack_848 >> 1 & 0x7f);
                lVar1 = (long)&uStack_848 + 1;
                if ((uStack_848 & 1) != 0) {
                  puVar19 = puStack_840;
                  lVar1 = lStack_838;
                }
                bVar28 = ((ulong)uStack_860 & 1) != 0;
                lVar21 = (long)&uStack_860 + 1;
                if (bVar28) {
                  lVar21 = lStack_850;
                }
                uVar12 = (ulong)uStack_860 >> 1 & 0x7f;
                if (bVar28) {
                  uVar12 = CONCAT44(uStack_854,uStack_858);
                }
                (**(code **)(*plVar14 + 0x10))(plVar14,lVar1,puVar19,lVar21,uVar12);
              }
              plVar14 = *(long **)(lVar15 + 0x1d8);
              if (((ulong)uStack_860 & 1) == 0) {
                lStack_8c8 = lStack_850;
                puStack_8d0 = (undefined *)CONCAT44(uStack_854,uStack_858);
                pcStack_8d8 = uStack_860;
              }
              else {
                func_0x0412e5e0(&pcStack_8d8,lStack_850,CONCAT44(uStack_854,uStack_858));
              }
              uStack_8c0 = CONCAT31(uStack_8c0._1_3_,1);
              (**(code **)(*plVar14 + 0x10))(auStack_6a8,plVar14,&pcStack_8d8,&puStack_7e8);
              func_0x09bc1d10(auStack_6b8,lVar15,auStack_878,auStack_6a8);
              if (plStack_6a0 != (long *)0x0) {
                LOCK();
                plVar14 = plStack_6a0 + 1;
                lVar15 = *plVar14;
                *plVar14 = *plVar14 + -1;
                UNLOCK();
                if (lVar15 == 0) {
                  (**(code **)(*plStack_6a0 + 0x10))(plStack_6a0);
                  func_0x0412c2d0(plStack_6a0);
                }
              }
              if (((char)uStack_8c0 == '\x01') && (((ulong)pcStack_8d8 & 1) != 0)) {
                func_0x0412a280(lStack_8c8,(ulong)pcStack_8d8 & 0xfffffffffffffffe);
              }
              bVar22 = (byte)pcStack_7d0;
            }
            if (((bVar22 & 1) != 0) && (((ulong)puStack_7e8 & 1) != 0)) {
              func_0x0412a280(uStack_7d8,(ulong)puStack_7e8 & 0xfffffffffffffffe);
            }
            puStack_7e8 = &UNK_0f1dae80;
            puStack_7e0 = &SUB_0eedea30;
            pcStack_8d8 = (code *)0xbb994df42f2409a3;
            puStack_8d0 = &UNK_0140f690;
            lStack_8c8 = 1;
            uStack_8c0 = 0xea;
            func_0x09b914f0(auStack_6b8,*(undefined8 *)(lVar17 + 0x18),&puStack_7e8);
            if (puStack_7e8 != (undefined *)0x0) {
              (**(code **)(puStack_7e8 + 8))(&puStack_7e8);
            }
            if (plStack_6b0 != (long *)0x0) {
              LOCK();
              plVar14 = plStack_6b0 + 1;
              lVar17 = *plVar14;
              *plVar14 = *plVar14 + -1;
              UNLOCK();
              if (lVar17 == 0) {
                (**(code **)(*plStack_6b0 + 0x10))(plStack_6b0);
                func_0x0412c2d0(plStack_6b0);
              }
            }
            func_0x09b920f0(auStack_878);
            if ((bStack_730 & 1) != 0) {
              func_0x0412a280(uStack_720,CONCAT71(uStack_72f,bStack_730) & 0xfffffffffffffffe);
            }
          }
          func_0x048e65b0(&uStack_468);
          if ((auStack_6e8[0] & 1) != 0) {
            func_0x0412a280(auStack_6e8[2],auStack_6e8[0] & 0xfffffffffffffffe);
          }
          if ((bStack_700 & 1) != 0) {
            func_0x0412a280(uStack_6f0,
                            CONCAT62(uStack_6fe,CONCAT11(uStack_6ff,bStack_700)) &
                            0xfffffffffffffffe);
          }
          if ((uStack_718 & 1) != 0) {
            func_0x0412a280(uStack_708,uStack_718 & 0xfffffffffffffffe);
          }
          if ((bStack_890 & 1) != 0) {
            func_0x0412a280(uStack_880,CONCAT71(uStack_88f,bStack_890) & 0xfffffffffffffffe);
          }
          ppuVar25 = apuStack_6c8;
        }
        func_0x04863610(ppuVar25);
      }
LAB_09baf0c8:
      func_0x04863610(auStack_8b8);
    }
    if ((bStack_470 & 1) == 0) {
      func_0x09ba4500(&uStack_568);
    }
    else {
      if ((uStack_538 & 1) != 0) {
        func_0x0412a280(lStack_528,uStack_538 & 0xfffffffffffffffe);
      }
      if ((uStack_550 & 1) != 0) {
        func_0x0412a280(uStack_540,uStack_550 & 0xfffffffffffffffe);
      }
      if ((uStack_568 & 1) != 0) {
        func_0x0412a280(uStack_558,uStack_568 & 0xfffffffffffffffe);
      }
    }
  }
  LOCK();
  plVar14 = plVar10 + 1;
  lVar17 = *plVar14;
  *plVar14 = *plVar14 + -1;
  UNLOCK();
  auVar7 = auStack_740;
  if (lVar17 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    lVar17 = func_0x0412c2d0(plVar10);
    auVar7 = auStack_740;
  }
joined_r0x09baf18a:
  auStack_740 = auVar7;
  if (bStack_5a0 == 1) {
    if ((auStack_668[0] & 1) != 0) {
      lVar17 = func_0x0412a280(lStack_658,auStack_668[0] & 0xfffffffffffffffe);
    }
    if ((uStack_680 & 1) != 0) {
      lVar17 = func_0x0412a280(uStack_670,uStack_680 & 0xfffffffffffffffe);
    }
    if ((uStack_698 & 1) != 0) {
      lVar17 = func_0x0412a280(auStack_690._8_8_,uStack_698 & 0xfffffffffffffffe);
    }
  }
  else {
    lVar17 = func_0x09ba4500(&uStack_698);
  }
  return lVar17;
}


