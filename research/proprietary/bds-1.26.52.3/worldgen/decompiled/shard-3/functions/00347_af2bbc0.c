/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb02bbc0 (ELF vaddr 0xaf2bbc0)
 * Label: caller-of-callee
 * Body:  [[0b02bbc0, 0b02bff9] [0b02c000, 0b02c1d8] [0b02c1e0, 0b02c846] [0b02c850, 0b02cc7d] [0b02cce9, 0b02cd9b]]
 * Ghidra: FUN_0b02bbc0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0b02bbc0(long param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  long lVar2;
  undefined1 (*pauVar3) [16];
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  char cVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  undefined4 uVar20;
  long *plVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  char *pcVar25;
  undefined1 *puVar26;
  ulong uVar27;
  ulong uVar28;
  undefined7 *puVar29;
  long lVar30;
  char *pcVar31;
  ulong uVar32;
  long lVar33;
  byte *pbVar34;
  bool bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar39;
  byte bVar41;
  byte bVar43;
  byte bVar45;
  byte bVar47;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bStack_158;
  undefined7 uStack_157;
  byte bStack_150;
  undefined1 uStack_14f;
  undefined6 uStack_14e;
  undefined7 *puStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  uint uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  char *pcStack_110;
  undefined1 auStack_108 [8];
  undefined8 uStack_100;
  undefined1 auStack_f8 [16];
  undefined8 uStack_e8;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [8];
  uint uStack_90;
  undefined8 **appuStack_88 [2];
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  undefined4 uStack_40;
  short sStack_3c;
  undefined8 **ppuStack_38;
  char cVar38;
  char cVar40;
  char cVar42;
  char cVar44;
  char cVar46;
  char cVar48;
  
  uStack_78 = param_2[8];
  uStack_70 = *param_2;
  uStack_68 = param_2[1];
  uVar24 = uStack_78;
  lStack_d0 = param_1;
  if ((uStack_68 >> 0x37 & 1) != 0) {
    lVar2 = *(long *)((uStack_68 & 0xff00ffffffffffff) - 8);
    lVar30 = lVar2 + 9;
    uStack_d8 = uStack_78;
    plVar21 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar30,8);
    if (plVar21 == (long *)0x0 && lVar30 != 0) {
      FUN_0eec74c0(lVar30,8);
    }
    *plVar21 = lVar2;
    func_0x0eee2f00(plVar21 + 1,uStack_68 & 0xff00ffffffffffff,lVar2);
    *(undefined1 *)((long)plVar21 + lVar2 + 8) = 0;
    uStack_68 = (ulong)(plVar21 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    uVar24 = uStack_d8;
  }
  uStack_60 = 0;
  uVar27 = param_2[2];
  if ((uVar27 & 0x80000000000000) != 0) {
    lVar30 = *(long *)((uVar27 & 0xff00ffffffffffff) - 8);
    lVar2 = lVar30 + 9;
    plVar21 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar2,8);
    if (lVar2 != 0 && plVar21 == (long *)0x0) {
      FUN_0eec74c0(lVar2,8);
    }
    *plVar21 = lVar30;
    func_0x0eee2f00(plVar21 + 1,uVar27 & 0xff00ffffffffffff,lVar30);
    *(undefined1 *)((long)plVar21 + lVar30 + 8) = 0;
    uVar27 = (ulong)(plVar21 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack_58 = param_2[3];
  uStack_50 = 0;
  uVar28 = param_2[4];
  uStack_60 = uVar27;
  if ((uVar28 & 0x80000000000000) != 0) {
    lVar30 = *(long *)((uVar28 & 0xff00ffffffffffff) - 8);
    lVar2 = lVar30 + 9;
    plVar21 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar2,8);
    if (lVar2 != 0 && plVar21 == (long *)0x0) {
      FUN_0eec74c0(lVar2,8);
    }
    *plVar21 = lVar30;
    func_0x0eee2f00(plVar21 + 1,uVar28 & 0xff00ffffffffffff,lVar30);
    *(undefined1 *)((long)plVar21 + lVar30 + 8) = 0;
    uVar28 = (ulong)(plVar21 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack_48 = 0;
  uVar27 = param_2[5];
  uStack_50 = uVar28;
  if ((uVar27 & 0x80000000000000) != 0) {
    lVar30 = *(long *)((uVar27 & 0xff00ffffffffffff) - 8);
    lVar2 = lVar30 + 9;
    plVar21 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar2,8);
    if (lVar2 != 0 && plVar21 == (long *)0x0) {
      FUN_0eec74c0(lVar2,8);
    }
    *plVar21 = lVar30;
    func_0x0eee2f00(plVar21 + 1,uVar27 & 0xff00ffffffffffff,lVar30);
    *(undefined1 *)((long)plVar21 + lVar30 + 8) = 0;
    uVar27 = (ulong)(plVar21 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack_40 = *(undefined4 *)(param_2 + 6);
  sStack_3c = *(short *)((long)param_2 + 0x34);
  uStack_48 = uVar27;
  cVar16 = func_0x04864260(uVar24);
  if ((cVar16 == '\0') && (cVar16 = func_0x04864290(uVar24), cVar16 != '\0')) {
    uStack_d8 = func_0x048648e0(uVar24,&UNK_011fb4a5);
    cVar16 = func_0x04864260(uStack_d8);
    if ((cVar16 == '\0') && (cVar16 = func_0x04864270(uStack_d8), cVar16 != '\0')) {
      uVar17 = func_0x048641f0(uStack_d8);
      lStack_a0 = lStack_d0 + 8;
      lVar2 = *(long *)(lStack_d0 + 8);
      if ((ulong)((*(long *)(lStack_d0 + 0x18) - lVar2 >> 3) * 0x6db6db6db6db6db7) < (ulong)uVar17)
      {
        lVar30 = *(long *)(lStack_d0 + 0x10);
        lVar33 = (ulong)uVar17 * 0x38;
        lStack_138 = lStack_a0;
        lVar22 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar33);
        if (lVar22 == 0) {
          FUN_0eec74c0(lVar33,0);
        }
        bStack_158 = (byte)lVar22;
        uStack_157 = (undefined7)((ulong)lVar22 >> 8);
        puVar29 = (undefined7 *)((lVar30 - lVar2) + lVar22);
        bStack_150 = (byte)puVar29;
        uStack_14f = (undefined1)((ulong)puVar29 >> 8);
        uStack_14e = (undefined6)((ulong)puVar29 >> 0x10);
        puStack_148 = puVar29;
        lStack_140 = lVar33 + lVar22;
        func_0x0b09a690(lVar2,lVar30,lVar22);
        lVar2 = *(long *)(lStack_d0 + 8);
        lVar30 = *(long *)(lStack_d0 + 0x18);
        *(long *)(lStack_d0 + 8) = lVar22;
        *(undefined7 **)(lStack_d0 + 0x10) = puVar29;
        *(long *)(lStack_d0 + 0x18) = lVar33 + lVar22;
        if (lVar2 != 0) {
          func_0x0412a280(lVar2,lVar30 - lVar2);
        }
      }
      uVar17 = 0;
      uVar24 = uStack_d8;
      while( true ) {
        uVar18 = func_0x048641f0(uVar24);
        uVar27 = uStack_48;
        if (uVar18 <= uVar17) break;
        uVar23 = func_0x04864620(uVar24,uVar17);
        cVar16 = func_0x04865490(uVar23);
        if (cVar16 == '\0') {
          uVar23 = func_0x04864620(uVar24,uVar17);
          cVar16 = func_0x04864290(uVar23);
          if (cVar16 == '\0') goto LAB_0b02c000;
          uVar23 = func_0x04864620(uVar24,uVar17);
          iVar19 = func_0x048641f0(uVar23);
          if (iVar19 != 1) {
            uVar23 = func_0x04864620(uVar24,uVar17);
            uVar20 = func_0x048641f0(uVar23);
            func_0x0b02cfe0(uVar20);
            goto LAB_0b02c000;
          }
          uVar23 = func_0x04864620(uVar24,uVar17);
          func_0x04865530(appuStack_88,uVar23);
          pbVar34 = (byte *)func_0x04862ca0(appuStack_88);
          auStack_f8 = (undefined1  [16])0x0;
          _auStack_108 = (undefined1  [16])0x0;
          uStack_e8 = 0;
          func_0x04130630(&uStack_100,pbVar34);
          if (*pbVar34 == 0) {
            uVar27 = 0;
          }
          else {
            uVar28 = strlen(pbVar34);
            uVar27 = 0xcbf29ce484222325;
            if (uVar28 != 0) {
              if (7 < uVar28) {
                uVar32 = uVar28 & 0xfffffffffffffff8;
                do {
                  uVar27 = (((((((uVar27 * 0x100000001b3 ^ (ulong)*pbVar34) * 0x100000001b3 ^
                                (ulong)pbVar34[1]) * 0x100000001b3 ^ (ulong)pbVar34[2]) *
                               0x100000001b3 ^ (ulong)pbVar34[3]) * 0x100000001b3 ^
                             (ulong)pbVar34[4]) * 0x100000001b3 ^ (ulong)pbVar34[5]) * 0x100000001b3
                           ^ (ulong)pbVar34[6]) * 0x100000001b3 ^ (ulong)pbVar34[7];
                  pbVar34 = pbVar34 + 8;
                  uVar32 = uVar32 - 8;
                } while (uVar32 != 0);
              }
              if ((uVar28 & 7) != 0) {
                uVar32 = 0;
                do {
                  uVar27 = uVar27 * 0x100000001b3 ^ (ulong)pbVar34[uVar32];
                  uVar32 = uVar32 + 1;
                } while (((uint)uVar28 & 7) != uVar32);
              }
            }
          }
          auStack_108 = (undefined1  [8])uVar27;
          uVar23 = func_0x04862b80(appuStack_88);
          puStack_b8 = (undefined8 *)((ulong)puStack_b8 & 0xffffffffffff0000);
          FUN_04863cb0(&uStack_120,uVar23,&puStack_b8);
          func_0x0b5be4b0(auStack_98,&uStack_120,(int)sStack_3c);
          puStack_148 = (undefined7 *)0x0;
          lStack_140 = 0;
          bStack_158 = 0;
          uStack_157 = 0;
          bStack_150 = 0;
          uStack_14f = 0;
          uStack_14e = 0;
          lStack_138 = 0;
          if (((byte)uStack_100 & 1) == 0) {
            lStack_140 = auStack_f8._8_8_;
            uStack_14f = auStack_108[9];
            uStack_14e = auStack_108._10_6_;
            puStack_148 = (undefined7 *)auStack_f8._0_8_;
            bStack_150 = (byte)uStack_100;
          }
          else {
            FUN_04885070(&bStack_150,auStack_f8._8_8_,auStack_f8._0_8_);
          }
          bStack_158 = auStack_108[0];
          uStack_157 = auStack_108._1_7_;
          uStack_130 = 0;
          uStack_128 = 0;
          puStack_c8 = &uStack_130;
          puStack_c0 = puStack_c8;
          if ((ulong)uStack_90 == 0xffffffff) goto LAB_0b02cc4c;
          ppuStack_38 = &puStack_c8;
          (**(code **)(&UNK_0f2bc850 + (ulong)uStack_90 * 8))(&ppuStack_38,auStack_98);
          uVar18 = uStack_128;
          pauVar3 = *(undefined1 (**) [16])(lStack_d0 + 0x10);
          if (pauVar3 < *(undefined1 (**) [16])(lStack_d0 + 0x18)) {
            pauVar3[1] = (undefined1  [16])0x0;
            *pauVar3 = (undefined1  [16])0x0;
            *(undefined8 *)pauVar3[2] = 0;
            *(long *)(pauVar3[1] + 8) = lStack_140;
            *(ulong *)(*pauVar3 + 8) = CONCAT62(uStack_14e,CONCAT11(uStack_14f,bStack_150));
            *(undefined7 **)pauVar3[1] = puStack_148;
            bStack_150 = 0;
            uStack_14f = 0;
            *(ulong *)*pauVar3 = CONCAT71(uStack_157,bStack_158);
            pauVar3[2][8] = 0;
            *(undefined4 *)pauVar3[3] = 0xffffffff;
            if ((ulong)uStack_128 != 0xffffffff) {
              puStack_c8 = (undefined8 *)(pauVar3[2] + 8);
              (**(code **)(&UNK_0f2802a8 + (ulong)uStack_128 * 8))(&puStack_c8,&uStack_130);
              *(uint *)pauVar3[3] = uVar18;
            }
            puVar26 = pauVar3[3] + 8;
          }
          else {
            puVar26 = (undefined1 *)func_0x0b09a860(lStack_a0,&bStack_158);
          }
          *(undefined1 **)(lStack_d0 + 0x10) = puVar26;
          if ((ulong)uStack_128 != 0xffffffff) {
            (**(code **)(&UNK_0f280298 + (ulong)uStack_128 * 8))(&puStack_c8,&uStack_130);
          }
          uStack_128 = 0xffffffff;
          if ((bStack_150 & 1) != 0) {
            func_0x0412a280(lStack_140,
                            CONCAT62(uStack_14e,CONCAT11(uStack_14f,bStack_150)) &
                            0xfffffffffffffffe);
          }
          if ((ulong)uStack_90 != 0xffffffff) {
            (**(code **)(&UNK_0f280298 + (ulong)uStack_90 * 8))(&puStack_c8,auStack_98);
          }
          uStack_90 = 0xffffffff;
          if ((uStack_120 & 1) == 0) {
            if (((ulong)puStack_b8 & 1) == 0) goto LAB_0b02c60e;
LAB_0b02c655:
            func_0x0412a280(uStack_a8,(ulong)puStack_b8 & 0xfffffffffffffffe);
          }
          else {
            func_0x0412a280(pcStack_110,uStack_120 & 0xfffffffffffffffe);
            if (((ulong)puStack_b8 & 1) != 0) goto LAB_0b02c655;
LAB_0b02c60e:
          }
          if (((byte)uStack_100 & 1) != 0) {
            func_0x0412a280(auStack_f8._8_8_,uStack_100 & 0xfffffffffffffffe);
          }
          func_0x04862b40(appuStack_88);
          uVar17 = uVar17 + 1;
        }
        else {
          uVar24 = func_0x04864620(uVar24,uVar17);
          auVar1._14_2_ = 0;
          auVar1._0_14_ = stack0xfffffffffffffefa;
          _auStack_108 = auVar1 << 0x10;
          FUN_04863cb0(&bStack_158,uVar24,auStack_108);
          bVar35 = (bStack_158 & 1) == 0;
          puVar29 = puStack_148;
          if (bVar35) {
            puVar29 = &uStack_157;
          }
          uVar27 = (ulong)(bStack_158 >> 1);
          if (!bVar35) {
            uVar27 = CONCAT62(uStack_14e,CONCAT11(uStack_14f,bStack_150));
          }
          if (0xfffffffffffffff7 < uVar27) {
            func_0x04882e30();
LAB_0b02cc47:
            func_0x04931450();
LAB_0b02cc4c:
            uVar24 = func_0x04931450();
            func_0x0b09a5f0(&bStack_158);
            func_0x0b02d160(&uStack_78);
            uVar24 = func_0x0eee2d70(uVar24);
            uVar24 = func_0x04882e20(uVar24);
            if ((bStack_150 & 1) != 0) {
              func_0x0412a280(lStack_140,
                              CONCAT62(uStack_14e,CONCAT11(uStack_14f,bStack_150)) &
                              0xfffffffffffffffe);
            }
            func_0x04a8b170(auStack_98);
            if ((uStack_120 & 1) != 0) goto LAB_0b02cd5d;
            if (((ulong)puStack_b8 & 1) != 0) goto LAB_0b02cd7a;
            do {
              while( true ) {
                if (((byte)uStack_100 & 1) != 0) {
                  func_0x0412a280(auStack_f8._8_8_,uStack_100 & 0xfffffffffffffffe);
                }
                func_0x04862b40(appuStack_88);
                func_0x0b02d160(&uStack_78);
                func_0x0eee2d70(uVar24);
LAB_0b02cd5d:
                func_0x0412a280(pcStack_110,uStack_120 & 0xfffffffffffffffe);
                if (((ulong)puStack_b8 & 1) == 0) break;
LAB_0b02cd7a:
                func_0x0412a280(uStack_a8,(ulong)puStack_b8 & 0xfffffffffffffffe);
              }
            } while( true );
          }
          if (uVar27 < 0x17) {
            uStack_120 = CONCAT71(uStack_120._1_7_,(char)uVar27 * '\x02');
            pcVar25 = (char *)((long)&uStack_120 + 1);
            if (uVar27 != 0) goto LAB_0b02c235;
          }
          else {
            uVar28 = (uVar27 | 7) + 1;
            if ((uVar27 | 7) == 0x17) {
              uVar28 = 0x1a;
            }
            pcVar25 = (char *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar28);
            if (pcVar25 == (char *)0x0) {
              FUN_0eec74c0(uVar28,0);
            }
            uStack_120 = uVar28 | 1;
            uStack_118 = uVar27;
            pcStack_110 = pcVar25;
LAB_0b02c235:
            func_0x0eee2f00(pcVar25,puVar29,uVar27);
          }
          pcVar25[uVar27] = '\0';
          uVar24 = uStack_d8;
          uVar27 = uStack_120 >> 1 & 0x7f;
          pcVar25 = (char *)((long)&uStack_120 + 1);
          if ((uStack_120 & 1) != 0) {
            uVar27 = uStack_118;
            pcVar25 = pcStack_110;
          }
          if (uVar27 != 0) {
            pcVar31 = pcVar25;
            if (7 < uVar27) {
              if (uVar27 < 0x20) {
                uVar28 = 0;
              }
              else {
                uVar28 = uVar27 & 0xffffffffffffffe0;
                uVar32 = 0;
                do {
                  auVar1 = *(undefined1 (*) [16])(pcVar25 + uVar32);
                  pcVar31 = pcVar25 + uVar32 + 0x10;
                  cVar16 = *pcVar31;
                  cVar38 = pcVar31[1];
                  cVar40 = pcVar31[2];
                  cVar42 = pcVar31[3];
                  cVar44 = pcVar31[4];
                  cVar46 = pcVar31[5];
                  cVar48 = pcVar31[6];
                  cVar4 = pcVar31[7];
                  cVar5 = pcVar31[8];
                  cVar6 = pcVar31[9];
                  cVar7 = pcVar31[10];
                  cVar8 = pcVar31[0xb];
                  cVar9 = pcVar31[0xc];
                  cVar10 = pcVar31[0xd];
                  cVar11 = pcVar31[0xe];
                  cVar12 = pcVar31[0xf];
                  bVar36 = auVar1[0] + DAT_014e86b0;
                  bVar37 = auVar1[1] + UNK_014e86b1;
                  bVar39 = auVar1[2] + UNK_014e86b2;
                  bVar41 = auVar1[3] + UNK_014e86b3;
                  bVar43 = auVar1[4] + UNK_014e86b4;
                  bVar45 = auVar1[5] + UNK_014e86b5;
                  bVar47 = auVar1[6] + UNK_014e86b6;
                  bVar49 = auVar1[7] + UNK_014e86b7;
                  bVar50 = auVar1[8] + UNK_014e86b8;
                  bVar51 = auVar1[9] + UNK_014e86b9;
                  bVar52 = auVar1[10] + UNK_014e86ba;
                  bVar53 = auVar1[0xb] + UNK_014e86bb;
                  bVar54 = auVar1[0xc] + UNK_014e86bc;
                  bVar55 = auVar1[0xd] + UNK_014e86bd;
                  bVar56 = auVar1[0xe] + UNK_014e86be;
                  bVar57 = auVar1[0xf] + UNK_014e86bf;
                  bVar58 = cVar16 + DAT_014e86b0;
                  bVar59 = cVar38 + UNK_014e86b1;
                  bVar60 = cVar40 + UNK_014e86b2;
                  bVar61 = cVar42 + UNK_014e86b3;
                  bVar62 = cVar44 + UNK_014e86b4;
                  bVar63 = cVar46 + UNK_014e86b5;
                  bVar64 = cVar48 + UNK_014e86b6;
                  bVar65 = cVar4 + UNK_014e86b7;
                  bVar66 = cVar5 + UNK_014e86b8;
                  bVar67 = cVar6 + UNK_014e86b9;
                  bVar68 = cVar7 + UNK_014e86ba;
                  bVar69 = cVar8 + UNK_014e86bb;
                  bVar70 = cVar9 + UNK_014e86bc;
                  bVar71 = cVar10 + UNK_014e86bd;
                  bVar72 = cVar11 + UNK_014e86be;
                  bVar73 = cVar12 + UNK_014e86bf;
                  pcVar31 = pcVar25 + uVar32;
                  *pcVar31 = (-((byte)((DAT_014e4170 < bVar36) * DAT_014e4170 |
                                      (DAT_014e4170 >= bVar36) * bVar36) == bVar36) & DAT_014ead50)
                             + auVar1[0];
                  pcVar31[1] = (-((byte)((UNK_014e4171 < bVar37) * UNK_014e4171 |
                                        (UNK_014e4171 >= bVar37) * bVar37) == bVar37) & UNK_014ead51
                               ) + auVar1[1];
                  pcVar31[2] = (-((byte)((UNK_014e4172 < bVar39) * UNK_014e4172 |
                                        (UNK_014e4172 >= bVar39) * bVar39) == bVar39) & UNK_014ead52
                               ) + auVar1[2];
                  pcVar31[3] = (-((byte)((UNK_014e4173 < bVar41) * UNK_014e4173 |
                                        (UNK_014e4173 >= bVar41) * bVar41) == bVar41) & UNK_014ead53
                               ) + auVar1[3];
                  pcVar31[4] = (-((byte)((UNK_014e4174 < bVar43) * UNK_014e4174 |
                                        (UNK_014e4174 >= bVar43) * bVar43) == bVar43) & UNK_014ead54
                               ) + auVar1[4];
                  pcVar31[5] = (-((byte)((UNK_014e4175 < bVar45) * UNK_014e4175 |
                                        (UNK_014e4175 >= bVar45) * bVar45) == bVar45) & UNK_014ead55
                               ) + auVar1[5];
                  pcVar31[6] = (-((byte)((UNK_014e4176 < bVar47) * UNK_014e4176 |
                                        (UNK_014e4176 >= bVar47) * bVar47) == bVar47) & UNK_014ead56
                               ) + auVar1[6];
                  pcVar31[7] = (-((byte)((UNK_014e4177 < bVar49) * UNK_014e4177 |
                                        (UNK_014e4177 >= bVar49) * bVar49) == bVar49) & UNK_014ead57
                               ) + auVar1[7];
                  pcVar31[8] = (-((byte)((UNK_014e4178 < bVar50) * UNK_014e4178 |
                                        (UNK_014e4178 >= bVar50) * bVar50) == bVar50) & UNK_014ead58
                               ) + auVar1[8];
                  pcVar31[9] = (-((byte)((UNK_014e4179 < bVar51) * UNK_014e4179 |
                                        (UNK_014e4179 >= bVar51) * bVar51) == bVar51) & UNK_014ead59
                               ) + auVar1[9];
                  pcVar31[10] = (-((byte)((UNK_014e417a < bVar52) * UNK_014e417a |
                                         (UNK_014e417a >= bVar52) * bVar52) == bVar52) &
                                UNK_014ead5a) + auVar1[10];
                  pcVar31[0xb] = (-((byte)((UNK_014e417b < bVar53) * UNK_014e417b |
                                          (UNK_014e417b >= bVar53) * bVar53) == bVar53) &
                                 UNK_014ead5b) + auVar1[0xb];
                  pcVar31[0xc] = (-((byte)((UNK_014e417c < bVar54) * UNK_014e417c |
                                          (UNK_014e417c >= bVar54) * bVar54) == bVar54) &
                                 UNK_014ead5c) + auVar1[0xc];
                  pcVar31[0xd] = (-((byte)((UNK_014e417d < bVar55) * UNK_014e417d |
                                          (UNK_014e417d >= bVar55) * bVar55) == bVar55) &
                                 UNK_014ead5d) + auVar1[0xd];
                  pcVar31[0xe] = (-((byte)((UNK_014e417e < bVar56) * UNK_014e417e |
                                          (UNK_014e417e >= bVar56) * bVar56) == bVar56) &
                                 UNK_014ead5e) + auVar1[0xe];
                  pcVar31[0xf] = (-((byte)((UNK_014e417f < bVar57) * UNK_014e417f |
                                          (UNK_014e417f >= bVar57) * bVar57) == bVar57) &
                                 UNK_014ead5f) + auVar1[0xf];
                  pcVar31 = pcVar25 + uVar32 + 0x10;
                  *pcVar31 = (-((byte)((DAT_014e4170 < bVar58) * DAT_014e4170 |
                                      (DAT_014e4170 >= bVar58) * bVar58) == bVar58) & DAT_014ead50)
                             + cVar16;
                  pcVar31[1] = (-((byte)((UNK_014e4171 < bVar59) * UNK_014e4171 |
                                        (UNK_014e4171 >= bVar59) * bVar59) == bVar59) & UNK_014ead51
                               ) + cVar38;
                  pcVar31[2] = (-((byte)((UNK_014e4172 < bVar60) * UNK_014e4172 |
                                        (UNK_014e4172 >= bVar60) * bVar60) == bVar60) & UNK_014ead52
                               ) + cVar40;
                  pcVar31[3] = (-((byte)((UNK_014e4173 < bVar61) * UNK_014e4173 |
                                        (UNK_014e4173 >= bVar61) * bVar61) == bVar61) & UNK_014ead53
                               ) + cVar42;
                  pcVar31[4] = (-((byte)((UNK_014e4174 < bVar62) * UNK_014e4174 |
                                        (UNK_014e4174 >= bVar62) * bVar62) == bVar62) & UNK_014ead54
                               ) + cVar44;
                  pcVar31[5] = (-((byte)((UNK_014e4175 < bVar63) * UNK_014e4175 |
                                        (UNK_014e4175 >= bVar63) * bVar63) == bVar63) & UNK_014ead55
                               ) + cVar46;
                  pcVar31[6] = (-((byte)((UNK_014e4176 < bVar64) * UNK_014e4176 |
                                        (UNK_014e4176 >= bVar64) * bVar64) == bVar64) & UNK_014ead56
                               ) + cVar48;
                  pcVar31[7] = (-((byte)((UNK_014e4177 < bVar65) * UNK_014e4177 |
                                        (UNK_014e4177 >= bVar65) * bVar65) == bVar65) & UNK_014ead57
                               ) + cVar4;
                  pcVar31[8] = (-((byte)((UNK_014e4178 < bVar66) * UNK_014e4178 |
                                        (UNK_014e4178 >= bVar66) * bVar66) == bVar66) & UNK_014ead58
                               ) + cVar5;
                  pcVar31[9] = (-((byte)((UNK_014e4179 < bVar67) * UNK_014e4179 |
                                        (UNK_014e4179 >= bVar67) * bVar67) == bVar67) & UNK_014ead59
                               ) + cVar6;
                  pcVar31[10] = (-((byte)((UNK_014e417a < bVar68) * UNK_014e417a |
                                         (UNK_014e417a >= bVar68) * bVar68) == bVar68) &
                                UNK_014ead5a) + cVar7;
                  pcVar31[0xb] = (-((byte)((UNK_014e417b < bVar69) * UNK_014e417b |
                                          (UNK_014e417b >= bVar69) * bVar69) == bVar69) &
                                 UNK_014ead5b) + cVar8;
                  pcVar31[0xc] = (-((byte)((UNK_014e417c < bVar70) * UNK_014e417c |
                                          (UNK_014e417c >= bVar70) * bVar70) == bVar70) &
                                 UNK_014ead5c) + cVar9;
                  pcVar31[0xd] = (-((byte)((UNK_014e417d < bVar71) * UNK_014e417d |
                                          (UNK_014e417d >= bVar71) * bVar71) == bVar71) &
                                 UNK_014ead5d) + cVar10;
                  pcVar31[0xe] = (-((byte)((UNK_014e417e < bVar72) * UNK_014e417e |
                                          (UNK_014e417e >= bVar72) * bVar72) == bVar72) &
                                 UNK_014ead5e) + cVar11;
                  pcVar31[0xf] = (-((byte)((UNK_014e417f < bVar73) * UNK_014e417f |
                                          (UNK_014e417f >= bVar73) * bVar73) == bVar73) &
                                 UNK_014ead5f) + cVar12;
                  uVar32 = uVar32 + 0x20;
                } while (uVar28 != uVar32);
                if (uVar27 == uVar28) goto LAB_0b02c6ad;
                if ((uVar27 & 0x18) == 0) {
                  pcVar31 = pcVar25 + uVar28;
                  goto LAB_0b02c680;
                }
              }
              uVar32 = uVar27 & 0xfffffffffffffff8;
              pcVar31 = pcVar25 + uVar32;
              do {
                uVar23 = *(undefined8 *)(pcVar25 + uVar28);
                bVar36 = (char)uVar23 + DAT_014e9110;
                cVar38 = (char)((ulong)uVar23 >> 8);
                bVar37 = cVar38 + UNK_014e9111;
                cVar40 = (char)((ulong)uVar23 >> 0x10);
                bVar39 = cVar40 + UNK_014e9112;
                cVar42 = (char)((ulong)uVar23 >> 0x18);
                bVar41 = cVar42 + UNK_014e9113;
                cVar44 = (char)((ulong)uVar23 >> 0x20);
                bVar43 = cVar44 + UNK_014e9114;
                cVar46 = (char)((ulong)uVar23 >> 0x28);
                bVar45 = cVar46 + UNK_014e9115;
                cVar48 = (char)((ulong)uVar23 >> 0x30);
                cVar16 = (char)((ulong)uVar23 >> 0x38);
                bVar47 = cVar48 + UNK_014e9116;
                bVar49 = cVar16 + UNK_014e9117;
                *(ulong *)(pcVar25 + uVar28) =
                     CONCAT17((~-((byte)((bVar49 < UNK_014e8cb7) * UNK_014e8cb7 |
                                        (bVar49 >= UNK_014e8cb7) * bVar49) == bVar49) & UNK_014ea367
                              ) + cVar16,
                              CONCAT16((~-((byte)((bVar47 < UNK_014e8cb6) * UNK_014e8cb6 |
                                                 (bVar47 >= UNK_014e8cb6) * bVar47) == bVar47) &
                                       UNK_014ea366) + cVar48,
                                       CONCAT15((~-((byte)((bVar45 < UNK_014e8cb5) * UNK_014e8cb5 |
                                                          (bVar45 >= UNK_014e8cb5) * bVar45) ==
                                                   bVar45) & UNK_014ea365) + cVar46,
                                                CONCAT14((~-((byte)((bVar43 < UNK_014e8cb4) *
                                                                    UNK_014e8cb4 |
                                                                   (bVar43 >= UNK_014e8cb4) * bVar43
                                                                   ) == bVar43) & UNK_014ea364) +
                                                         cVar44,CONCAT13((~-((byte)((bVar41 < 
                                                  UNK_014e8cb3) * UNK_014e8cb3 |
                                                  (bVar41 >= UNK_014e8cb3) * bVar41) == bVar41) &
                                                  UNK_014ea363) + cVar42,
                                                  CONCAT12((~-((byte)((bVar39 < UNK_014e8cb2) *
                                                                      UNK_014e8cb2 |
                                                                     (bVar39 >= UNK_014e8cb2) *
                                                                     bVar39) == bVar39) &
                                                           UNK_014ea362) + cVar40,
                                                           CONCAT11((~-((byte)((bVar37 < 
                                                  UNK_014e8cb1) * UNK_014e8cb1 |
                                                  (bVar37 >= UNK_014e8cb1) * bVar37) == bVar37) &
                                                  UNK_014ea361) + cVar38,
                                                  (~-((byte)((bVar36 < DAT_014e8cb0) * DAT_014e8cb0
                                                            | (bVar36 >= DAT_014e8cb0) * bVar36) ==
                                                     bVar36) & DAT_014ea360) + (char)uVar23)))))));
                uVar28 = uVar28 + 8;
              } while (uVar32 != uVar28);
              if (uVar27 == uVar32) goto LAB_0b02c6ad;
            }
LAB_0b02c680:
            do {
              cVar16 = *pcVar31;
              cVar38 = cVar16 + ' ';
              if (0x19 < (byte)(cVar16 + 0xbfU)) {
                cVar38 = cVar16;
              }
              *pcVar31 = cVar38;
              pcVar31 = pcVar31 + 1;
            } while (pcVar31 != pcVar25 + uVar27);
          }
LAB_0b02c6ad:
          if ((bStack_158 & 1) != 0) {
            func_0x0412a280(puStack_148,CONCAT71(uStack_157,bStack_158) & 0xfffffffffffffffe);
          }
          if ((auStack_108[0] & 1) != 0) {
            func_0x0412a280(auStack_f8._0_8_,(ulong)auStack_108 & 0xfffffffffffffffe);
          }
          uVar27 = (ulong)((byte)uStack_120 >> 1);
          if ((uStack_120 & 1) != 0) {
            uVar27 = uStack_118;
          }
          if (uVar27 != 0) {
            auVar14._8_8_ = 0;
            auVar14._0_8_ = uStack_100;
            _auStack_108 = auVar14 << 0x40;
            if ((uStack_120 & 1) == 0) {
              auVar15._8_8_ = 0;
              auVar15._0_8_ = uStack_120;
              _auStack_108 = auVar15 << 0x40;
              auStack_f8._8_8_ = pcStack_110;
              auStack_f8._0_8_ = uStack_118;
            }
            else {
              func_0x0412e5e0(&uStack_100,pcStack_110);
            }
            uStack_e8 = 0;
            bVar36 = (byte)uStack_100;
            uVar23 = auStack_f8._0_8_;
            uVar27 = (ulong)((byte)uStack_100 >> 1);
            if (((byte)uStack_100 & 1) != 0) {
              uVar27 = auStack_f8._0_8_;
            }
            if (uVar27 == 0) {
LAB_0b02c850:
              uVar27 = 0;
            }
            else {
              pbVar34 = (byte *)((long)&uStack_100 + 1);
              if (((byte)uStack_100 & 1) != 0) {
                pbVar34 = (byte *)auStack_f8._8_8_;
              }
              if ((pbVar34 == (byte *)0x0) || (*pbVar34 == 0)) goto LAB_0b02c850;
              uVar28 = strlen(pbVar34);
              uVar27 = 0xcbf29ce484222325;
              if (uVar28 != 0) {
                if (7 < uVar28) {
                  uVar32 = uVar28 & 0xfffffffffffffff8;
                  do {
                    uVar27 = (((((((uVar27 * 0x100000001b3 ^ (ulong)*pbVar34) * 0x100000001b3 ^
                                  (ulong)pbVar34[1]) * 0x100000001b3 ^ (ulong)pbVar34[2]) *
                                 0x100000001b3 ^ (ulong)pbVar34[3]) * 0x100000001b3 ^
                               (ulong)pbVar34[4]) * 0x100000001b3 ^ (ulong)pbVar34[5]) *
                              0x100000001b3 ^ (ulong)pbVar34[6]) * 0x100000001b3 ^ (ulong)pbVar34[7]
                    ;
                    pbVar34 = pbVar34 + 8;
                    uVar32 = uVar32 - 8;
                  } while (uVar32 != 0);
                }
                if ((uVar28 & 7) != 0) {
                  uVar32 = 0;
                  do {
                    uVar27 = uVar27 * 0x100000001b3 ^ (ulong)pbVar34[uVar32];
                    uVar32 = uVar32 + 1;
                  } while (((uint)uVar28 & 7) != uVar32);
                }
              }
            }
            auVar1 = _auStack_108;
            auStack_108 = (undefined1  [8])uVar27;
            puStack_c8 = (undefined8 *)CONCAT44(puStack_c8._4_4_,0x3f800000);
            puStack_c0 = (undefined8 *)CONCAT44(puStack_c0._4_4_,1);
            bStack_158 = 0;
            uStack_157 = 0;
            bStack_150 = 0;
            uStack_14f = 0;
            uStack_14e = 0;
            puStack_148 = (undefined7 *)0x0;
            lStack_140 = 0;
            lStack_138 = 0;
            if ((bVar36 & 1) == 0) {
              lStack_140 = auStack_f8._8_8_;
              bStack_150 = auVar1[8];
              uStack_14f = auVar1[9];
              uStack_14e = auVar1._10_6_;
              puStack_148 = (undefined7 *)auStack_f8._0_8_;
              bStack_158 = (byte)uVar27;
              uStack_157 = (undefined7)(uVar27 >> 8);
              uVar18 = 1;
            }
            else {
              FUN_04885070(&bStack_150,auStack_f8._8_8_,uVar23);
              bStack_158 = auStack_108[0];
              uStack_157 = auStack_108._1_7_;
              uStack_130 = 0;
              uStack_128 = 0;
              puStack_b8 = &uStack_130;
              uVar18 = (uint)puStack_c0;
              puStack_b0 = puStack_b8;
              if ((uint)puStack_c0 == 0xffffffff) goto LAB_0b02cc47;
            }
            puStack_b8 = &uStack_130;
            uStack_128 = 0;
            uStack_130 = 0;
            appuStack_88[0] = &puStack_b8;
            puStack_b0 = puStack_b8;
            (**(code **)(&UNK_0f2bc850 + (ulong)uVar18 * 8))(appuStack_88,&puStack_c8);
            uVar18 = uStack_128;
            pauVar3 = *(undefined1 (**) [16])(lStack_d0 + 0x10);
            if (pauVar3 < *(undefined1 (**) [16])(lStack_d0 + 0x18)) {
              pauVar3[1] = (undefined1  [16])0x0;
              *pauVar3 = (undefined1  [16])0x0;
              *(undefined8 *)pauVar3[2] = 0;
              *(long *)(pauVar3[1] + 8) = lStack_140;
              auVar13[1] = uStack_14f;
              auVar13[0] = bStack_150;
              auVar13._2_6_ = uStack_14e;
              auVar13._8_8_ = puStack_148;
              *(undefined1 (*) [16])(*pauVar3 + 8) = auVar13;
              bStack_150 = 0;
              uStack_14f = 0;
              *(ulong *)*pauVar3 = CONCAT71(uStack_157,bStack_158);
              pauVar3[2][8] = 0;
              *(undefined4 *)pauVar3[3] = 0xffffffff;
              if ((ulong)uStack_128 != 0xffffffff) {
                puStack_b8 = (undefined8 *)(pauVar3[2] + 8);
                (**(code **)(&UNK_0f2802a8 + (ulong)uStack_128 * 8))(&puStack_b8,&uStack_130);
                *(uint *)pauVar3[3] = uVar18;
              }
              puVar26 = pauVar3[3] + 8;
            }
            else {
              puVar26 = (undefined1 *)func_0x0b09a860(lStack_a0,&bStack_158);
            }
            *(undefined1 **)(lStack_d0 + 0x10) = puVar26;
            if ((ulong)uStack_128 != 0xffffffff) {
              (**(code **)(&UNK_0f280298 + (ulong)uStack_128 * 8))(&puStack_b8,&uStack_130);
            }
            uStack_128 = 0xffffffff;
            if ((bStack_150 & 1) != 0) {
              func_0x0412a280(lStack_140,
                              CONCAT62(uStack_14e,CONCAT11(uStack_14f,bStack_150)) &
                              0xfffffffffffffffe);
            }
            if (((ulong)puStack_c0 & 0xffffffff) != 0xffffffff) {
              (**(code **)(&UNK_0f280298 + ((ulong)puStack_c0 & 0xffffffff) * 8))
                        (&puStack_b8,&puStack_c8);
            }
            if (((byte)uStack_100 & 1) != 0) {
              func_0x0412a280(auStack_f8._8_8_,uStack_100 & 0xfffffffffffffffe);
            }
          }
          if (((byte)uStack_120 & 1) == 0) {
LAB_0b02c000:
            uVar17 = uVar17 + 1;
          }
          else {
            func_0x0412a280(pcStack_110,uStack_120 & 0xfffffffffffffffe);
            uVar17 = uVar17 + 1;
          }
        }
      }
    }
  }
  if ((uVar27 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uVar27 & 0xff00ffffffffffff) - 8);
  }
  uStack_48 = 0;
  if ((uStack_50 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_50 & 0xff00ffffffffffff) - 8);
  }
  uStack_50 = 0;
  if ((uStack_60 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_60 & 0xff00ffffffffffff) - 8);
  }
  uStack_60 = 0;
  if ((uStack_68 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_68 & 0xff00ffffffffffff) - 8);
  }
  return;
}



/* ---- referenced strings ----
 * 0x14ea360          
 */
