/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x48baa40 (ELF vaddr 0x47baa40)
 * Label: caller-of-callee
 * Body:  [[048baa40, 048bb0e4] [048bb0f0, 048bb25b] [048bb260, 048bb42b] [048bb430, 048bb477] [048bb480, 048bbec0] [048bbf03, 048bbf40] [048bc064, 048bc075] [048bc2e5, 048bc33d]]
 * Ghidra: FUN_048baa40
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_048baa40(undefined8 *param_1,long param_2,undefined4 *param_3)

{
  undefined4 **ppuVar1;
  long *plVar2;
  undefined4 **ppuVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined7 *puVar6;
  undefined4 *puVar7;
  undefined4 ***pppuVar8;
  undefined1 uVar9;
  char cVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  undefined4 **ppuVar14;
  long *plVar15;
  undefined4 *puVar16;
  long *plVar17;
  undefined8 *puVar18;
  uint uVar19;
  undefined4 **ppuVar20;
  undefined4 **ppuVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  ulong *puVar26;
  bool bVar27;
  undefined1 auVar28 [16];
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined1 *puStack_278;
  ulong uStack_270;
  long lStack_268;
  ulong uStack_260;
  uint uStack_258;
  undefined1 auStack_248 [8];
  undefined4 **ppuStack_240;
  undefined8 uStack_238;
  undefined1 uStack_230;
  undefined7 uStack_22f;
  uint uStack_228;
  undefined4 uStack_224;
  byte bStack_220;
  undefined1 auStack_21f [7];
  uint uStack_218;
  undefined4 uStack_214;
  byte bStack_210;
  undefined7 uStack_20f;
  undefined4 uStack_208;
  undefined8 uStack_200;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  ulong uStack_1f0;
  long lStack_1e8;
  char cStack_1e0;
  undefined4 **ppuStack_1d8;
  undefined4 **ppuStack_1d0;
  undefined1 *puStack_1c8;
  undefined4 **ppuStack_1c0;
  undefined4 *puStack_1b8;
  undefined4 *puStack_1b0;
  undefined4 *puStack_1a8;
  ulong uStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined4 **ppuStack_178;
  undefined4 **ppuStack_170;
  undefined1 *puStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined4 **ppuStack_118;
  undefined1 auStack_110 [16];
  undefined4 **ppuStack_100;
  undefined8 *puStack_f8;
  byte bStack_f0;
  undefined7 uStack_ef;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined4 **ppuStack_d8;
  undefined4 **ppuStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined4 ***pppuStack_b8;
  byte bStack_b0;
  undefined7 uStack_af;
  undefined8 uStack_a0;
  byte bStack_90;
  undefined7 uStack_8f;
  uint uStack_88;
  undefined7 *puStack_80;
  undefined4 *apuStack_78 [2];
  undefined4 *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined8 uStack_38;
  
  puVar18 = *(undefined8 **)(param_2 + 8);
  uVar4 = *param_3;
  ppuStack_1c0 = (undefined4 **)*puVar18;
  plVar15 = (long *)ppuStack_1c0[0xc];
  puStack_f8 = param_1;
  (**(code **)(*plVar15 + 0x18))(auStack_248,plVar15,2);
  uVar19 = (uint)(auStack_248[0] >> 1);
  ppuVar21 = (undefined4 **)(auStack_248 + 1);
  ppuVar14 = ppuVar21;
  if (((ulong)auStack_248 & 1) != 0) {
    uVar19 = (uint)ppuStack_240;
    ppuVar14 = uStack_238;
  }
  func_0x0eed64c0(&puStack_60,ppuVar14,uVar19,1);
  if (((ulong)auStack_248 & 1) != 0) {
    func_0x0412a280(uStack_238,(ulong)auStack_248 & 0xfffffffffffffffe);
  }
  (**(code **)(*plVar15 + 0x20))(auStack_248,plVar15,2);
  uVar19 = (uint)(auStack_248[0] >> 1);
  ppuVar14 = ppuVar21;
  if (((ulong)auStack_248 & 1) != 0) {
    uVar19 = (uint)ppuStack_240;
    ppuVar14 = uStack_238;
  }
  func_0x0eed64c0(&uStack_198,ppuVar14,uVar19,1);
  if (((ulong)auStack_248 & 1) != 0) {
    func_0x0412a280(uStack_238,(ulong)auStack_248 & 0xfffffffffffffffe);
  }
  (**(code **)(*plVar15 + 0x38))(&ppuStack_1d8,plVar15,1,2);
  func_0x0d53d080(&ppuStack_d8,&puStack_60,&uStack_198,1);
  lVar12 = func_0x0eee3790(0);
  func_0x04863060(auStack_110,0);
  bVar27 = (*(byte *)(puVar18 + 1) & 1) != 0;
  uStack_288 = (undefined4 **)((long)puVar18 + 9);
  if (bVar27) {
    uStack_288 = (undefined4 **)puVar18[3];
  }
  uStack_280 = (undefined4 **)(ulong)(*(byte *)(puVar18 + 1) >> 1);
  if (bVar27) {
    uStack_280 = (undefined4 **)puVar18[2];
  }
  func_0x0470d9a0(auStack_248,&UNK_012d695a,0x36,0xd,&uStack_288);
  func_0x048631d0(&ppuStack_178,auStack_248);
  uVar13 = func_0x04864680(auStack_110,&UNK_012d6991);
  func_0x04863790(uVar13,&ppuStack_178);
  func_0x04863610(&ppuStack_178);
  if (((ulong)auStack_248 & 1) != 0) {
    func_0x0412a280(uStack_238,(ulong)auStack_248 & 0xfffffffffffffffe);
  }
  func_0x048631d0(auStack_248,puVar18 + 4);
  ppuStack_118 = (undefined4 **)CONCAT44(ppuStack_118._4_4_,uVar4);
  uVar13 = func_0x04864680(auStack_110,&UNK_0123c46f);
  func_0x04863790(uVar13,auStack_248);
  func_0x04863610(auStack_248);
  func_0x048631d0(auStack_248,puVar18 + 4);
  uVar13 = func_0x04864680(auStack_110,&UNK_0119a867);
  func_0x04863790(uVar13,auStack_248);
  func_0x04863610(auStack_248);
  func_0x048630f0(auStack_248,lVar12);
  uVar13 = func_0x04864680(auStack_110,&UNK_012575ab);
  func_0x04863790(uVar13,auStack_248);
  func_0x04863610(auStack_248);
  func_0x048630f0(auStack_248,lVar12 + 0xe10);
  uVar13 = func_0x04864680(auStack_110,&UNK_011b649f);
  func_0x04863790(uVar13,auStack_248);
  func_0x04863610(auStack_248);
  auVar28 = func_0x0eeda000(0);
  uStack_228 = auVar28._0_4_ & 0xffff;
  uStack_1f8 = auVar28._8_4_ & 0xffff;
  auStack_248._0_4_ = auVar28._4_4_;
  uStack_238 = (undefined4 **)(CONCAT44(uStack_238._4_4_,auVar28._2_4_) & 0xffffffff0000ffff);
  uStack_218 = (uint)auVar28._14_2_;
  uStack_208 = auVar28._10_4_;
  func_0x0470d9a0(&uStack_288,&UNK_01287ba2,0x28,0x122112,auStack_248);
  func_0x048631d0(&ppuStack_178,&uStack_288);
  uVar13 = func_0x04864680(auStack_110,&UNK_0142bd89);
  func_0x04863790(uVar13,&ppuStack_178);
  func_0x04863610(&ppuStack_178);
  if (((ulong)uStack_288 & 1) != 0) {
    func_0x0412a280(puStack_278,(ulong)uStack_288 & 0xfffffffffffffffe);
  }
  (**(code **)(*plVar15 + 0x10))(&bStack_90,plVar15,1);
  uVar19 = (uint)(bStack_90 >> 1);
  puVar6 = &uStack_8f;
  if ((bStack_90 & 1) != 0) {
    uVar19 = uStack_88;
    puVar6 = puStack_80;
  }
  func_0x0eed64c0(&bStack_f0,puVar6,uVar19,1);
  if ((bStack_f0 & 1) == 0) {
    puStack_278 = (undefined1 *)uStack_e0;
    uStack_288 = (undefined4 **)CONCAT71(uStack_ef,bStack_f0);
    uStack_280 = (undefined4 **)uStack_e8;
  }
  else {
    func_0x0412e5e0(&uStack_288,uStack_e0,uStack_e8);
  }
  puStack_1b8 = (undefined4 *)0x0;
  puStack_1b0 = (undefined4 *)0x0;
  puStack_1a8 = (undefined4 *)0x0;
  ppuStack_170 = (undefined4 **)((ulong)ppuStack_170 & 0xffffffffffffff00);
  ppuStack_178 = &puStack_1b8;
  apuStack_78[0] = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
  if (apuStack_78[0] == (undefined4 *)0x0) {
    func_0x0eec74c0(0x18,0);
  }
  puStack_1a8 = apuStack_78[0] + 6;
  ppuStack_240 = &puStack_68;
  uStack_238 = apuStack_78;
  uStack_230 = 0;
  auStack_248 = (undefined1  [8])&puStack_1b8;
  puStack_1b8 = apuStack_78[0];
  puStack_68 = apuStack_78[0];
  if (((ulong)uStack_288 & 1) == 0) {
    *(undefined1 **)(apuStack_78[0] + 4) = puStack_278;
    *apuStack_78[0] = (undefined4)uStack_288;
    apuStack_78[0][1] = uStack_288._4_4_;
    apuStack_78[0][2] = (undefined4)uStack_280;
    apuStack_78[0][3] = uStack_280._4_4_;
    puStack_1b0 = puStack_1a8;
  }
  else {
    puStack_1b0 = apuStack_78[0];
    func_0x0412e5e0(apuStack_78[0],puStack_278,uStack_280);
    puStack_1b0 = apuStack_78[0] + 6;
    if (((ulong)uStack_288 & 1) != 0) {
      func_0x0412a280(puStack_278,(ulong)uStack_288 & 0xfffffffffffffffe);
    }
  }
  func_0x04863060(apuStack_78,0);
  if (((ulong)ppuStack_1d8 & 1) == 0) {
    puStack_168 = puStack_1c8;
    ppuStack_178 = ppuStack_1d8;
    ppuStack_170 = ppuStack_1d0;
  }
  else {
    func_0x0412e5e0(&ppuStack_178,puStack_1c8,ppuStack_1d0);
  }
  uStack_160 = 0;
  uStack_158 = 0;
  uStack_150 = 0;
  func_0x0488f040(&uStack_160,puStack_1b8,puStack_1b0,
                  ((long)puStack_1b0 - (long)puStack_1b8 >> 3) * -0x5555555555555555);
  puStack_278 = puStack_168;
  uStack_288 = ppuStack_178;
  uStack_280 = ppuStack_170;
  ppuStack_178 = (undefined4 **)0x0;
  ppuStack_170 = (undefined4 **)0x0;
  puStack_168 = (undefined1 *)0x0;
  uStack_270 = uStack_160;
  lStack_268 = uStack_158;
  uStack_260 = uStack_150;
  uStack_160 = 0;
  uStack_158 = 0;
  uStack_150 = 0;
  uStack_258 = 1;
  func_0x0d548760(auStack_248,auStack_110,&ppuStack_d8,apuStack_78,&uStack_288);
  if ((ulong)uStack_258 != 0xffffffff) {
    (**(code **)(&UNK_0ef41a78 + (ulong)uStack_258 * 8))(&puStack_68,&uStack_288);
  }
  uVar23 = uStack_160;
  uStack_258 = 0xffffffff;
  uVar22 = uStack_158;
  if (uStack_160 != 0) {
    for (; uVar23 != uVar22; uVar22 = uVar22 - 0x18) {
      if ((*(byte *)(uVar22 - 0x18) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(uVar22 - 8),*(ulong *)(uVar22 - 0x18) & 0xfffffffffffffffe);
      }
    }
    uStack_158 = uVar23;
    func_0x0412a280(uStack_160,uStack_150 - uStack_160);
  }
  if (((ulong)ppuStack_178 & 1) != 0) {
    func_0x0412a280(puStack_168,(ulong)ppuStack_178 & 0xfffffffffffffffe);
  }
  func_0x04863610(apuStack_78);
  if (cStack_1e0 == '\0') {
    uStack_138 = 0;
    lStack_130 = 0;
    uStack_128 = 0;
  }
  else {
    uStack_280 = (undefined4 **)((ulong)auStack_248 >> 1 & 0x7f);
    uStack_288 = ppuVar21;
    if (((ulong)auStack_248 & 1) != 0) {
      uStack_280 = ppuStack_240;
      uStack_288 = uStack_238;
    }
    bVar27 = (bStack_220 & 1) != 0;
    puStack_278 = auStack_21f;
    if (bVar27) {
      puStack_278 = (undefined1 *)CONCAT71(uStack_20f,bStack_210);
    }
    uStack_270 = (ulong)(bStack_220 >> 1);
    if (bVar27) {
      uStack_270 = CONCAT44(uStack_214,uStack_218);
    }
    lStack_268 = (long)&uStack_1f8 + 1;
    uStack_260 = (ulong)((byte)uStack_1f8 >> 1);
    if ((uStack_1f8 & 1) != 0) {
      uStack_260 = uStack_1f0;
      lStack_268 = lStack_1e8;
    }
    func_0x0470d9a0(&uStack_138,&UNK_013be1b5,8,0xddd,&uStack_288);
  }
  puVar26 = (ulong *)auStack_248;
  func_0x04885ff0(puVar26);
  puVar7 = puStack_1b8;
  puVar16 = puStack_1b0;
  if (puStack_1b8 != (undefined4 *)0x0) {
    for (; puVar7 != puVar16; puVar16 = puVar16 + -6) {
      if ((*(byte *)(puVar16 + -6) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(puVar16 + -2),*(ulong *)(puVar16 + -6) & 0xfffffffffffffffe)
        ;
      }
    }
    puStack_1b0 = puVar7;
    func_0x0412a280(puStack_1b8,(long)puStack_1a8 - (long)puStack_1b8);
  }
  if ((bStack_f0 & 1) != 0) {
    func_0x0412a280(uStack_e0,CONCAT71(uStack_ef,bStack_f0) & 0xfffffffffffffffe);
  }
  if ((bStack_90 & 1) != 0) {
    func_0x0412a280(puStack_80,CONCAT71(uStack_8f,bStack_90) & 0xfffffffffffffffe);
  }
  func_0x04863610(auStack_110);
  ppuStack_d8 = (undefined4 **)&UNK_0ef436c8;
  if ((bStack_b0 & 1) != 0) {
    func_0x0412a280(uStack_a0,CONCAT71(uStack_af,bStack_b0) & 0xfffffffffffffffe);
  }
  pppuVar8 = pppuStack_b8;
  ppuStack_d8 = (undefined4 **)&UNK_0ef43708;
  pppuStack_b8 = (undefined4 ***)0x0;
  if (pppuVar8 != (undefined4 ***)0x0) {
    (**(code **)((long)*pppuVar8 + 8))();
  }
  if (((ulong)ppuStack_d0 & 1) == 0) {
    if (((ulong)ppuStack_1d8 & 1) != 0) goto LAB_048bb618;
LAB_048bb372:
    if ((uStack_198 & 1) != 0) goto LAB_048bb63f;
LAB_048bb380:
    if (((ulong)puStack_60 & 1) != 0) goto LAB_048bb666;
LAB_048bb38e:
    if ((uStack_138 & 1) == 0) goto LAB_048bb68f;
LAB_048bb39e:
    if (lStack_130 == 0) goto LAB_048bb69a;
LAB_048bb3af:
    uStack_188 = uStack_128;
    uStack_198 = uStack_138;
    lStack_190 = lStack_130;
    uStack_138 = 0;
    lStack_130 = 0;
    uStack_128 = 0;
    func_0x0b719650(auStack_248,puVar18 + 1,&uStack_198);
    plVar15 = (long *)ppuStack_1c0[4];
    if (plVar15 != (long *)0x0) {
      bVar27 = (*(byte *)(puVar18 + 10) & 1) != 0;
      lVar12 = (long)puVar18 + 0x51;
      if (bVar27) {
        lVar12 = puVar18[0xc];
      }
      uVar22 = (ulong)(*(byte *)(puVar18 + 10) >> 1);
      if (bVar27) {
        uVar22 = puVar18[0xb];
      }
      do {
        while( true ) {
          bVar27 = (*(byte *)(plVar15 + 4) & 1) != 0;
          lVar24 = (long)plVar15 + 0x21;
          if (bVar27) {
            lVar24 = plVar15[6];
          }
          uVar23 = (ulong)(*(byte *)(plVar15 + 4) >> 1);
          if (bVar27) {
            uVar23 = plVar15[5];
          }
          uVar25 = uVar22;
          if (uVar23 < uVar22) {
            uVar25 = uVar23;
          }
          iVar11 = func_0x0eee2ff0(lVar12,lVar24,uVar25);
          if (iVar11 == 0) break;
          if (iVar11 < 0) goto LAB_048bb430;
LAB_048bb485:
          iVar11 = func_0x0eee2ff0(lVar24,lVar12,uVar25);
          if (iVar11 == 0) {
            if (uVar22 <= uVar23) goto LAB_048bb4b6;
          }
          else if (-1 < iVar11) goto LAB_048bb4b6;
          plVar15 = (long *)plVar15[1];
          if (plVar15 == (long *)0x0) goto LAB_048bb4aa;
        }
        if (uVar23 <= uVar22) goto LAB_048bb485;
LAB_048bb430:
        plVar15 = (long *)*plVar15;
      } while (plVar15 != (long *)0x0);
    }
LAB_048bb4aa:
    func_0x04882ef0(&UNK_011b50a6);
LAB_048bb4b6:
    plVar15 = *(long **)(plVar15[7] + 0x120);
    func_0x0b7197a0(&ppuStack_1d8,auStack_248,plVar15);
    ppuVar21 = ppuStack_1d0;
    puStack_60 = &UNK_012575af;
    uStack_58 = 0x9c;
    uStack_50 = _DAT_0f778528;
    uStack_48 = 0xffffffff00000001;
    uStack_40 = 0;
    uStack_38 = 0;
    ppuStack_100 = ppuStack_1d8;
    ppuStack_1d8 = (undefined4 **)0x0;
    ppuStack_1d0 = (undefined4 **)0x0;
    ppuStack_170 = ppuStack_1c0;
    puStack_168 = (undefined1 *)CONCAT44(puStack_168._4_4_,ppuStack_118._0_4_);
    ppuStack_178 = (undefined4 **)&UNK_0ef41ce8;
    ppuVar14 = (undefined4 **)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
    puVar18 = puStack_f8;
    if (ppuVar14 == (undefined4 **)0x0) {
      func_0x0eec74c0(0x1b0,0);
    }
    ppuVar14[1] = (undefined4 *)0x0;
    ppuVar14[2] = (undefined4 *)0x0;
    *ppuVar14 = (undefined4 *)&UNK_0ef41a98;
    ppuVar3 = ppuVar14 + 4;
    uStack_288 = (undefined4 **)0x0;
    uStack_280 = (undefined4 **)0x0;
    if (ppuStack_178 == (undefined4 **)0x0) {
      uStack_288 = (undefined4 **)0x0;
    }
    else {
      (*(code *)*ppuStack_178)(&ppuStack_178,&uStack_288);
      uStack_288 = ppuStack_178;
    }
    ppuStack_178 = (undefined4 **)0x0;
    func_0x0ee25c30(ppuVar3,plVar15,&puStack_60,1);
    ppuStack_d8 = (undefined4 **)0x0;
    ppuStack_d0 = (undefined4 **)0x0;
    if (uStack_288 == (undefined4 **)0x0) {
      ppuStack_d8 = (undefined4 **)0x0;
    }
    else {
      (*(code *)*uStack_288)(&uStack_288,&ppuStack_d8);
      ppuStack_d8 = uStack_288;
    }
    uStack_288 = (undefined4 **)0x0;
    ppuVar14[0x13] = (undefined4 *)0x0;
    ppuVar14[0x14] = (undefined4 *)0x0;
    ppuVar14[0x12] = (undefined4 *)&UNK_0ef41c20;
    ppuVar14[0x16] = (undefined4 *)0x0;
    ppuVar14[0x17] = (undefined4 *)0x0;
    if (ppuStack_d8 == (undefined4 **)0x0) {
      ppuVar20 = (undefined4 **)0x0;
    }
    else {
      (*(code *)*ppuStack_d8)(&ppuStack_d8,ppuVar14 + 0x16);
      ppuVar20 = ppuStack_d8;
    }
    ppuStack_1c0 = ppuVar14 + 0x12;
    ppuStack_d8 = (undefined4 **)0x0;
    ppuVar14[0x16] = (undefined4 *)ppuVar20;
    ppuVar14[0x1e] = (undefined4 *)0x0;
    ppuVar14[0x1f] = (undefined4 *)0x0;
    *(undefined4 *)(ppuVar14 + 0x1e) = 0x1f6;
    puVar16 = (undefined4 *)func_0x0412dd40();
    ppuVar14[0x20] = puVar16;
    ppuVar14[0x21] = (undefined4 *)0x0;
    ppuVar14[0x22] = (undefined4 *)0x0;
    ppuVar14[0x23] = (undefined4 *)0x0;
    *(undefined1 *)(ppuVar14 + 0x24) = 1;
    *(undefined1 *)(ppuVar14 + 0x25) = 0;
    *(undefined1 *)(ppuVar14 + 0x29) = 0;
    ppuVar14[4] = (undefined4 *)&UNK_0ef41ae8;
    ppuVar14[0x12] = (undefined4 *)&UNK_0ef41b38;
    ppuVar14[0x2a] = (undefined4 *)0x0;
    ppuVar14[0x2b] = (undefined4 *)0x0;
    ppuVar14[0x2c] = (undefined4 *)0x0;
    ppuVar14[0x2d] = (undefined4 *)0x0;
    ppuVar14[0x2e] = (undefined4 *)0x0;
    *(undefined4 *)(ppuVar14 + 0x2f) = 1;
    ppuVar14[0x34] = (undefined4 *)0x0;
    ppuVar14[0x35] = (undefined4 *)0x0;
    ppuVar14[0x30] = (undefined4 *)0x0;
    ppuVar14[0x31] = (undefined4 *)0x0;
    *(undefined8 *)((long)ppuVar14 + 0x189) = 0;
    *(undefined8 *)((long)ppuVar14 + 0x191) = 0;
    if ((ppuVar20 == (undefined4 **)0x0) &&
       (cVar10 = func_0x0eeddcf0(&UNK_0119c186,&UNK_012a37f1,0x216,&UNK_0145e738,&UNK_012710f1),
       cVar10 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if (uStack_288 != (undefined4 **)0x0) {
      (**(code **)((long)uStack_288 + 8))(&uStack_288);
    }
    ppuVar20 = ppuVar14 + 1;
    if (ppuVar14[0x14] == (undefined4 *)0x0) {
      LOCK();
      ppuVar14[1] = (undefined4 *)((long)ppuVar14[1] + 1);
      UNLOCK();
      LOCK();
      ppuVar14[2] = (undefined4 *)((long)ppuVar14[2] + 1);
      UNLOCK();
      ppuVar14[0x13] = (undefined4 *)(ppuVar14 + 0x13);
      ppuVar14[0x14] = (undefined4 *)ppuVar14;
      LOCK();
      puVar16 = *ppuVar20;
      *ppuVar20 = (undefined4 *)((long)*ppuVar20 + -1);
      UNLOCK();
joined_r0x048bb9b9:
      if (puVar16 == (undefined4 *)0x0) {
        (**(code **)(*ppuVar14 + 4))(ppuVar14);
        func_0x0412c2d0(ppuVar14);
      }
    }
    else if (*(long *)(ppuVar14[0x14] + 2) == -1) {
      LOCK();
      ppuVar14[1] = (undefined4 *)((long)ppuVar14[1] + 1);
      UNLOCK();
      LOCK();
      ppuVar14[2] = (undefined4 *)((long)ppuVar14[2] + 1);
      UNLOCK();
      ppuVar14[0x13] = (undefined4 *)(ppuVar14 + 0x13);
      ppuVar14[0x14] = (undefined4 *)ppuVar14;
      func_0x0412c2d0();
      LOCK();
      puVar16 = *ppuVar20;
      *ppuVar20 = (undefined4 *)((long)*ppuVar20 + -1);
      UNLOCK();
      goto joined_r0x048bb9b9;
    }
    LOCK();
    ppuVar14[1] = (undefined4 *)((long)ppuVar14[1] + 1);
    UNLOCK();
    uStack_288 = ppuVar3;
    uStack_280 = ppuVar14;
    ppuStack_118 = ppuVar20;
    (**(code **)(*plVar15 + 0x20))(plVar15,&uStack_288);
    ppuVar20 = uStack_280;
    if (uStack_280 != (undefined4 **)0x0) {
      LOCK();
      ppuVar1 = uStack_280 + 1;
      puVar16 = *ppuVar1;
      *ppuVar1 = (undefined4 *)((long)*ppuVar1 + -1);
      UNLOCK();
      if (puVar16 == (undefined4 *)0x0) {
        (**(code **)(*uStack_280 + 4))(uStack_280);
        func_0x0412c2d0(ppuVar20);
      }
    }
    if (ppuStack_100 != (undefined4 **)0x0) {
      func_0x04891570(ppuVar3,0,0,0);
      uVar9 = uStack_40;
      func_0x0412d680(ppuVar14 + 0x2a);
      *(undefined1 *)(ppuVar14 + 0x33) = uVar9;
      if (ppuVar21 != (undefined4 **)0x0) {
        LOCK();
        ppuVar21[1] = (undefined4 *)((long)ppuVar21[1] + 1);
        UNLOCK();
      }
      ppuVar14[0x34] = (undefined4 *)ppuStack_100;
      plVar17 = (long *)ppuVar14[0x35];
      ppuVar14[0x35] = (undefined4 *)ppuVar21;
      if (plVar17 != (long *)0x0) {
        LOCK();
        plVar2 = plVar17 + 1;
        lVar12 = *plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (lVar12 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
          func_0x0412c2d0(plVar17);
        }
      }
      pthread_mutex_unlock(ppuVar14 + 0x2a);
      if (ppuVar14[0x14] == (undefined4 *)0x0) {
LAB_048bbeb7:
        uVar13 = func_0x04891290();
        func_0x0488fce0(&uStack_288);
        LOCK();
        puVar16 = *ppuStack_118;
        *ppuStack_118 = (undefined4 *)((long)*ppuStack_118 + -1);
        UNLOCK();
        if (puVar16 == (undefined4 *)0x0) {
          (**(code **)(*ppuVar14 + 4))(ppuVar14);
          func_0x0412c2d0(ppuVar14);
        }
        func_0x04888500(ppuStack_1d0);
        func_0x048bc340(auStack_248);
        if ((uStack_198 & 1) != 0) {
          func_0x0412a280(uStack_188,uStack_198 & 0xfffffffffffffffe);
        }
        if ((uStack_138 & 1) != 0) {
          func_0x0412a280(uStack_128,uStack_138 & 0xfffffffffffffffe);
        }
        func_0x0eee2d70(uVar13);
        pcVar5 = (code *)swi(3);
        puVar18 = (undefined8 *)(*pcVar5)();
        return puVar18;
      }
      puVar16 = ppuVar14[0x13];
      plVar17 = (long *)func_0x0412c300();
      if (plVar17 == (long *)0x0) goto LAB_048bbeb7;
      ppuVar20 = (undefined4 **)(puVar16 + -0x1e);
      if (puVar16 == (undefined4 *)0x0) {
        ppuVar20 = (undefined4 **)0x0;
      }
      LOCK();
      plVar17[2] = plVar17[2] + 1;
      UNLOCK();
      LOCK();
      plVar2 = plVar17 + 1;
      lVar12 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        func_0x0412c2d0(plVar17);
      }
      ppuStack_d8 = (undefined4 **)&UNK_0ef41c68;
      ppuStack_d0 = ppuVar20;
      plStack_c8 = plVar17;
      pppuStack_b8 = &ppuStack_d8;
      (**(code **)(*ppuStack_100 + 0xc))(ppuStack_100,&ppuStack_d8);
      puVar18 = puStack_f8;
      if (pppuStack_b8 == &ppuStack_d8) {
        lVar12 = 0x20;
LAB_048bbbb8:
        (**(code **)((long)*pppuStack_b8 + lVar12))();
      }
      else {
        lVar12 = 0x28;
        if (pppuStack_b8 != (undefined4 ***)0x0) goto LAB_048bbbb8;
      }
      if (ppuVar21 != (undefined4 **)0x0) {
        LOCK();
        ppuVar20 = ppuVar21 + 1;
        puVar16 = *ppuVar20;
        *ppuVar20 = (undefined4 *)((long)*ppuVar20 + -1);
        UNLOCK();
        if (puVar16 == (undefined4 *)0x0) {
          (**(code **)(*ppuVar21 + 4))(ppuVar21);
          func_0x0412c2d0(ppuVar21);
        }
      }
      ppuVar21 = (undefined4 **)0x0;
    }
    if (ppuStack_178 != (undefined4 **)0x0) {
      (*(code *)ppuStack_178[1])(&ppuStack_178);
    }
    if (ppuVar21 != (undefined4 **)0x0) {
      LOCK();
      ppuVar20 = ppuVar21 + 1;
      puVar16 = *ppuVar20;
      *ppuVar20 = (undefined4 *)((long)*ppuVar20 + -1);
      UNLOCK();
      if (puVar16 == (undefined4 *)0x0) {
        (**(code **)(*ppuVar21 + 4))(ppuVar21);
        func_0x0412c2d0(ppuVar21);
      }
    }
    LOCK();
    ppuVar14[1] = (undefined4 *)((long)ppuVar14[1] + 1);
    UNLOCK();
    iVar11 = (int)plVar15[0x10];
    uStack_288 = ppuVar3;
    uStack_280 = ppuVar14;
    if (iVar11 != 1) {
      if (iVar11 == 3) {
        *(undefined4 *)(ppuVar14 + 10) = 0;
      }
      else if (iVar11 == 2) {
        (**(code **)(*ppuVar3 + 4))(ppuVar3);
        goto LAB_048bbcbb;
      }
      LOCK();
      ppuVar14[1] = (undefined4 *)((long)ppuVar14[1] + 1);
      UNLOCK();
      ppuStack_d8 = ppuVar3;
      ppuStack_d0 = ppuVar14;
      (**(code **)(*plVar15 + 0x28))(plVar15,&ppuStack_d8,0);
      ppuVar21 = ppuStack_d0;
      if (ppuStack_d0 != (undefined4 **)0x0) {
        LOCK();
        ppuVar3 = ppuStack_d0 + 1;
        puVar16 = *ppuVar3;
        *ppuVar3 = (undefined4 *)((long)*ppuVar3 + -1);
        UNLOCK();
        if (puVar16 == (undefined4 *)0x0) {
          (**(code **)(*ppuStack_d0 + 4))(ppuStack_d0);
          func_0x0412c2d0(ppuVar21);
        }
      }
    }
LAB_048bbcbb:
    ppuVar21 = uStack_280;
    if (uStack_280 != (undefined4 **)0x0) {
      LOCK();
      ppuVar3 = uStack_280 + 1;
      puVar16 = *ppuVar3;
      *ppuVar3 = (undefined4 *)((long)*ppuVar3 + -1);
      UNLOCK();
      if (puVar16 == (undefined4 *)0x0) {
        (**(code **)(*uStack_280 + 4))(uStack_280);
        func_0x0412c2d0(ppuVar21);
      }
    }
    ppuVar21 = ppuStack_1d0;
    *puVar18 = ppuStack_1c0;
    puVar18[1] = ppuVar14;
    puVar26 = &uStack_198;
    if (ppuStack_1d0 == (undefined4 **)0x0) {
LAB_048bbd1f:
      auStack_248 = (undefined1  [8])&UNK_0ef43950;
      if ((uStack_1f8 & 1) == 0) goto LAB_048bbd35;
LAB_048bbd8f:
      auStack_248 = (undefined1  [8])&UNK_0ef43950;
      func_0x0412a280(lStack_1e8,CONCAT44(uStack_1f4,uStack_1f8) & 0xfffffffffffffffe);
    }
    else {
      LOCK();
      ppuVar14 = ppuStack_1d0 + 1;
      puVar16 = *ppuVar14;
      *ppuVar14 = (undefined4 *)((long)*ppuVar14 + -1);
      UNLOCK();
      if (puVar16 != (undefined4 *)0x0) goto LAB_048bbd1f;
      (**(code **)(*ppuStack_1d0 + 4))(ppuStack_1d0);
      func_0x0412c2d0(ppuVar21);
      auStack_248 = (undefined1  [8])&UNK_0ef43950;
      if ((uStack_1f8 & 1) != 0) goto LAB_048bbd8f;
LAB_048bbd35:
      auStack_248 = (undefined1  [8])&UNK_0ef43950;
    }
    if ((bStack_210 & 1) != 0) {
      func_0x0412a280(uStack_200,CONCAT71(uStack_20f,bStack_210) & 0xfffffffffffffffe);
    }
    if ((uStack_228 & 1) != 0) {
      func_0x0412a280(CONCAT44(uStack_214,uStack_218),
                      CONCAT44(uStack_224,uStack_228) & 0xfffffffffffffffe);
    }
    uVar13 = uStack_188;
    if (((ulong)ppuStack_240 & 1) != 0) {
      func_0x0412a280(CONCAT71(uStack_22f,uStack_230),(ulong)ppuStack_240 & 0xfffffffffffffffe);
      uVar13 = uStack_188;
    }
    uStack_188 = uVar13;
    if ((uStack_198 & 1) == 0) goto LAB_048bbe4c;
  }
  else {
    func_0x0412a280(uStack_c0,(ulong)ppuStack_d0 & 0xfffffffffffffffe);
    if (((ulong)ppuStack_1d8 & 1) == 0) goto LAB_048bb372;
LAB_048bb618:
    func_0x0412a280(puStack_1c8,(ulong)ppuStack_1d8 & 0xfffffffffffffffe);
    if ((uStack_198 & 1) == 0) goto LAB_048bb380;
LAB_048bb63f:
    func_0x0412a280(uStack_188,uStack_198 & 0xfffffffffffffffe);
    if (((ulong)puStack_60 & 1) == 0) goto LAB_048bb38e;
LAB_048bb666:
    func_0x0412a280(uStack_50,(ulong)puStack_60 & 0xfffffffffffffffe);
    if ((uStack_138 & 1) != 0) goto LAB_048bb39e;
LAB_048bb68f:
    if ((byte)uStack_138 >> 1 != 0) goto LAB_048bb3af;
LAB_048bb69a:
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x58);
    if (plVar15 == (long *)0x0) {
      func_0x0eec74c0(0x58,0);
    }
    puVar18 = puStack_f8;
    plVar15[1] = 0;
    plVar15[2] = 0;
    *plVar15 = (long)&UNK_0ef431d0;
    auStack_248 = (undefined1  [8])0x0;
    plVar15[7] = 0;
    plVar15[8] = 0;
    plVar15[3] = (long)&UNK_0ef43220;
    *(undefined1 *)(plVar15 + 9) = 1;
    plVar15[6] = 0;
    *(undefined1 *)(plVar15 + 10) = 1;
    LOCK();
    plVar15[1] = plVar15[1] + 1;
    UNLOCK();
    LOCK();
    plVar15[2] = plVar15[2] + 1;
    UNLOCK();
    plVar15[4] = (long)(plVar15 + 4);
    plVar15[5] = (long)plVar15;
    LOCK();
    plVar17 = plVar15 + 1;
    lVar12 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar12 != 0) {
      *puStack_f8 = plVar15 + 3;
      puStack_f8[1] = plVar15;
      goto LAB_048bbe4c;
    }
    (**(code **)(*plVar15 + 0x10))(plVar15);
    func_0x0412c2d0(plVar15);
    *puVar18 = plVar15 + 3;
    puVar18[1] = plVar15;
    if (((ulong)auStack_248 & 1) == 0) goto LAB_048bbe4c;
    uVar13 = 0;
  }
  func_0x0412a280(uVar13,*puVar26 & 0xfffffffffffffffe);
LAB_048bbe4c:
  if ((uStack_138 & 1) != 0) {
    func_0x0412a280(uStack_128,uStack_138 & 0xfffffffffffffffe);
  }
  return puVar18;
}


