/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x8586630 (ELF vaddr 0x8486630)
 * Label: FeatureRegistryPacket::vslot16
 * Body:  [[08586630, 08586b28] [08586b30, 08586db2] [08586dc0, 08586fd7] [08586fe0, 08587184] [08587190, 08587201] [08587210, 0858722b] [08587230, 0858743d] [08587440, 085879b9] [08587a9e, 08587ab3]]
 * Ghidra: wg_FeatureRegistryPacket__vslot16
 */


/* WARNING: Removing unreachable block (ram,0x08586b24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
wg_FeatureRegistryPacket__vslot16(undefined8 *param_1,long *param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  undefined2 uVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  ulong *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  byte bVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long *plVar20;
  undefined1 auVar21 [8];
  undefined8 *puVar22;
  undefined1 auStack_318 [16];
  long *plStack_308;
  uint uStack_300;
  undefined4 uStack_2fc;
  byte bStack_2f8;
  undefined7 uStack_2f7;
  undefined1 auStack_2f0 [12];
  undefined4 uStack_2e4;
  undefined8 uStack_2e0;
  char cStack_2d8;
  byte bStack_2d0;
  undefined1 auStack_2c8 [12];
  undefined2 uStack_2bc;
  undefined1 uStack_2ba;
  undefined1 auStack_2b8 [16];
  long *plStack_2a8;
  undefined1 auStack_298 [16];
  undefined8 *puStack_288;
  undefined1 auStack_280 [16];
  long lStack_270;
  ulong uStack_268;
  long *plStack_260;
  char cStack_258;
  ulong uStack_248;
  long *plStack_240;
  undefined1 auStack_238 [8];
  undefined8 uStack_230;
  undefined8 *puStack_228;
  undefined1 auStack_220 [16];
  long *plStack_210;
  char cStack_208;
  undefined1 auStack_1f8 [16];
  undefined1 auStack_1e8 [24];
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  long *plStack_1c0;
  undefined1 auStack_1b8 [24];
  ulong uStack_1a0;
  long *plStack_198;
  long *plStack_190;
  long *plStack_188;
  undefined8 *puStack_180;
  long *plStack_178;
  undefined8 uStack_170;
  long *plStack_168;
  byte bStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long *plStack_148;
  ulong uStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long *plStack_120;
  byte bStack_118;
  long *plStack_110;
  ulong uStack_108;
  long lStack_100;
  undefined1 auStack_f8 [16];
  undefined8 uStack_e8;
  undefined1 auStack_e0 [16];
  long *plStack_d0;
  char cStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined1 *puStack_b0;
  undefined *apuStack_a8 [4];
  undefined **ppuStack_88;
  ulong uStack_78;
  long lStack_70;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  
  (**(code **)(*param_2 + 0x10))(param_2);
  plVar15 = param_2 + 6;
  iVar8 = (**(code **)(*param_2 + 0x68))(param_2);
  if ((iVar8 - 3U < 2) || (iVar8 == 5)) {
    func_0x08625950(param_1,param_4,param_3,plVar15);
    return param_1;
  }
  plStack_2a8 = (long *)0x0;
  apuStack_a8[0] = &UNK_0f123030;
  ppuStack_88 = apuStack_a8;
  auStack_2b8 = ZEXT816(0);
  func_0x0ee09820(auStack_318,param_3);
  uVar5 = _UNK_0f125870;
  uVar4 = _UNK_0f125860;
  uVar12 = _DAT_0f125858;
  cStack_208 = cStack_2d8;
  puStack_1d0 = param_1;
  plStack_1c0 = plVar15;
  if (cStack_2d8 == '\0') {
    uStack_248 = auStack_318._0_8_;
    plStack_240 = (long *)auStack_318._8_8_;
    puVar13 = (undefined8 *)CONCAT44(uStack_2fc,uStack_300);
    auStack_238 = (undefined1  [8])plStack_308;
    auStack_238 = (undefined1  [8])plStack_308;
    puStack_228 = (undefined8 *)CONCAT71(uStack_2f7,bStack_2f8);
    auStack_220 = _auStack_2f0;
    plStack_210 = uStack_2e0;
    plStack_308 = _DAT_0f125868;
    uStack_300 = (uint)_UNK_0f125870;
    uStack_2fc = (undefined4)((ulong)_UNK_0f125870 >> 0x20);
    auStack_318._8_8_ = _UNK_0f125860;
    auStack_318._0_8_ = _DAT_0f125858;
    bStack_2f8 = 0;
    bStack_2d0 = 0;
    if (puVar13 < puStack_228) {
      puVar13[2] = _DAT_0f125868;
      puVar13[3] = uVar5;
      *puVar13 = uVar12;
      puVar13[1] = uVar4;
      *(undefined1 *)(puVar13 + 4) = 0;
      *(undefined1 *)(puVar13 + 9) = 0;
      auStack_1e8._8_8_ = puVar13 + 10;
    }
    else {
      uStack_230 = (long *)FUN_0489d2c0(auStack_238,auStack_318);
      auStack_1e8._8_8_ = uStack_230;
      if (((bStack_2d0 & 1) != 0) && ((bStack_2f8 & 1) != 0)) {
        func_0x0412a280(stack0xfffffffffffffd18,CONCAT71(uStack_2f7,bStack_2f8) & 0xfffffffffffffffe
                       );
        auStack_1e8._8_8_ = uStack_230;
      }
    }
    plVar16 = plStack_210;
    puVar13 = puStack_228;
    auStack_1e8._0_8_ = auStack_238;
    _auStack_238 = (undefined1  [16])0x0;
    puStack_228 = (undefined8 *)0x0;
    auStack_1b8._0_16_ = auStack_220;
    auStack_220 = (undefined1  [16])0x0;
    plStack_210 = (long *)0x0;
    auStack_1f8._8_8_ = 0;
    auStack_1f8._0_8_ = uStack_248;
    plVar9 = plStack_240;
    auVar21 = (undefined1  [8])plVar15;
LAB_08586f31:
    bVar14 = 0;
  }
  else {
    auVar21 = (undefined1  [8])(ulong)(uint)auStack_318._0_4_;
    uStack_248 = CONCAT44(uStack_248._4_4_,auStack_318._0_4_);
    plVar15 = (long *)(*(long *)(param_3 + 0x28) - *(long *)(param_3 + 0x30));
    if (plVar15 < (ulong)auVar21) {
      *(long *)(param_3 + 0x30) = *(long *)(param_3 + 0x28);
      plVar9 = (long *)func_0x0412dc70();
      plStack_308 = plVar15;
      auStack_318._0_8_ = auVar21;
      func_0x0470d9a0(auStack_298,&UNK_0144bc55,0x41,0x44,auStack_318);
      auStack_318._0_8_ = 0x864a2f4447f6602f;
      auStack_318._8_8_ = &UNK_0140f690;
      plStack_308 = (long *)0x1;
      uStack_300 = 0x2b8;
      uStack_2ba = 0;
      uStack_2bc = 8;
      puStack_b0 = auStack_298;
      uVar7 = func_0x0eeddbb0(&uStack_2bc,&UNK_0eee1970,&puStack_b0);
      plStack_308 = _DAT_0f125888;
      uStack_300 = (uint)_UNK_0f125890;
      uStack_2fc = (undefined4)((ulong)_UNK_0f125890 >> 0x20);
      auStack_318._8_8_ = _UNK_0f125880;
      auStack_318._0_8_ = _DAT_0f125878;
      bStack_2f8 = auStack_298[0];
      uStack_2f7 = auStack_298._1_7_;
      stack0xfffffffffffffd18 = puStack_288;
      auStack_2f0._0_8_ = auStack_298._8_8_;
      uStack_2e0._0_3_ = CONCAT12(1,uVar7);
      cStack_2d8 = '\x01';
      uStack_2e0 = (long *)CONCAT44(0xf,(undefined4)uStack_2e0);
      bStack_2d0 = 1;
      auStack_298 = ZEXT816(0);
      puStack_288 = (undefined8 *)0x0;
      func_0x0eee17a0(auStack_298,auStack_318,auStack_2c8,1);
      if ((bStack_2d0 == 1) && ((bStack_2f8 & 1) != 0)) {
        func_0x0412a280(stack0xfffffffffffffd18,CONCAT71(uStack_2f7,bStack_2f8) & 0xfffffffffffffffe
                       );
      }
      auStack_1e8._0_16_ = auStack_298;
      auStack_1f8 = ZEXT416(0x22);
      auStack_1b8._0_16_ = (undefined1  [16])0x0;
      plVar16 = (long *)0x0;
      puVar13 = puStack_288;
      goto LAB_08586f31;
    }
    plVar15 = (long *)0x1000;
    if ((ulong)auVar21 < (long *)0x1000) {
      plVar15 = (long *)auVar21;
    }
    func_0x08627c20(auStack_2b8,plVar15);
    if (auVar21 != (undefined1  [8])0x0) {
      plVar15 = (long *)0x0;
      plStack_110 = param_2;
      do {
        param_2 = plStack_110;
        if ((long *)(((long)plStack_2a8 - auStack_2b8._0_8_ >> 4) * -0x5555555555555555) <= plVar15)
        {
          plVar16 = (long *)(((long)(auStack_2b8._8_8_ - auStack_2b8._0_8_) >> 4) *
                             -0x5555555555555555 + 0x1000);
          if ((ulong)auVar21 < plVar16) {
            plVar16 = (long *)auVar21;
          }
          func_0x08627c20(auStack_2b8,plVar16);
        }
        if ((*(long *)(param_3 + 0x28) == *(long *)(param_3 + 0x30)) ||
           (*(char *)(param_3 + 0x38) == '\x01')) {
          uVar12 = func_0x0412dc70();
          func_0x08627de0(auStack_318,0x22,uVar12);
          goto LAB_08587586;
        }
        if (ppuStack_88 == (undefined **)0x0) {
          uVar12 = FUN_04891200();
          if (bStack_118 == '\0') {
            func_0x05ff1910(&uStack_158);
            uVar12 = func_0x0eee2d70(uVar12);
            func_0x086260a0(&uStack_108);
            uVar12 = func_0x0eee2d70(uVar12);
            if (bStack_160 == '\0') {
              func_0x05ff1910(&uStack_1a0);
            }
            FUN_08585810(auStack_2b8);
          }
          func_0x0eee2d70(uVar12);
          pcVar1 = (code *)swi(3);
          puVar13 = (undefined8 *)(*pcVar1)();
          return puVar13;
        }
        (**(code **)(*ppuStack_88 + 0x30))(auStack_318,ppuStack_88,param_3);
        cVar6 = cStack_2d8;
        uVar5 = _UNK_0f1258d0;
        uVar4 = _UNK_0f1258c0;
        uVar12 = _DAT_0f1258b8;
        cStack_258 = cStack_2d8;
        if (cStack_2d8 == '\0') {
          auStack_280._0_8_ = CONCAT44(uStack_2fc,uStack_300);
          auStack_298 = auStack_318;
          puVar13 = (undefined8 *)CONCAT44(uStack_2fc,uStack_300);
          puStack_288 = plStack_308;
          auStack_280._8_8_ = CONCAT71(uStack_2f7,bStack_2f8);
          uStack_2f7 = 0;
          lStack_270 = auStack_2f0._0_8_;
          uStack_268 = (ulong)stack0xfffffffffffffd18;
          plStack_260 = uStack_2e0;
          plStack_308 = _DAT_0f1258c8;
          uStack_300 = (uint)_UNK_0f1258d0;
          uStack_2fc = (undefined4)((ulong)_UNK_0f1258d0 >> 0x20);
          auStack_318._8_8_ = _UNK_0f1258c0;
          auStack_318._0_8_ = _DAT_0f1258b8;
          bStack_2f8 = 0;
          bStack_2d0 = 0;
          if (puVar13 < (ulong)auStack_280._8_8_) {
            puVar13[2] = _DAT_0f1258c8;
            puVar13[3] = uVar5;
            *puVar13 = uVar12;
            puVar13[1] = uVar4;
            *(undefined1 *)(puVar13 + 4) = 0;
            *(undefined1 *)(puVar13 + 9) = 0;
            puVar13 = puVar13 + 10;
          }
          else {
            auStack_280._0_8_ = FUN_0489d2c0(&puStack_288,auStack_318);
            puVar13 = (undefined8 *)auStack_280._0_8_;
            if (((bStack_2d0 & 1) != 0) && ((bStack_2f8 & 1) != 0)) {
              func_0x0412a280(stack0xfffffffffffffd18,
                              CONCAT71(uStack_2f7,bStack_2f8) & 0xfffffffffffffffe);
              puVar13 = (undefined8 *)auStack_280._0_8_;
            }
          }
          plStack_c0 = plStack_260;
          puStack_1c8 = (undefined8 *)auStack_280._8_8_;
          auStack_1e8._0_8_ = puStack_288;
          puStack_288 = (undefined8 *)0x0;
          auStack_280 = ZEXT816(0);
          auStack_1b8._8_8_ = uStack_268;
          auStack_1b8._0_8_ = lStack_270;
          lStack_270 = 0;
          uStack_268 = 0;
          plStack_260 = (long *)0x0;
          auStack_1f8._8_8_ = 0;
          auStack_1f8._0_8_ = auStack_298._0_8_;
          auStack_1e8._8_8_ = puVar13;
          plStack_b8 = (long *)auStack_298._8_8_;
joined_r0x08586d36:
          if (cStack_258 != '\x01') goto LAB_08586d3c;
LAB_08586c0d:
          if ((auStack_280[0] & 1) != 0) {
            func_0x0412a280(lStack_270,auStack_280._0_8_ & 0xfffffffffffffffe);
          }
          if ((auStack_298[0] & 1) != 0) {
            func_0x0412a280(puStack_288,auStack_298._0_8_ & 0xfffffffffffffffe);
          }
        }
        else {
          auStack_298 = (undefined1  [16])0x0;
          puStack_288 = (undefined8 *)0x0;
          auStack_280 = (undefined1  [16])0x0;
          lStack_270 = 0;
          if ((ulong)auStack_2b8._8_8_ < plStack_2a8) {
            *(long **)(auStack_2b8._8_8_ + 0x10) = plStack_308;
            *(undefined8 *)auStack_2b8._8_8_ = auStack_318._0_8_;
            *(undefined8 *)(auStack_2b8._8_8_ + 8) = auStack_318._8_8_;
            auStack_318 = (undefined1  [16])0x0;
            plStack_308 = (undefined8 *)0x0;
            *(undefined8 *)(auStack_2b8._8_8_ + 0x28) = auStack_2f0._0_8_;
            *(long *)(auStack_2b8._8_8_ + 0x18) = CONCAT44(uStack_2fc,uStack_300);
            *(long *)(auStack_2b8._8_8_ + 0x20) = CONCAT71(uStack_2f7,bStack_2f8);
            uStack_300 = 0;
            uStack_2fc = 0;
            bStack_2f8 = 0;
            uStack_2f7 = 0;
            auVar2._8_8_ = 0;
            auVar2._0_8_ = stack0xfffffffffffffd18;
            _auStack_2f0 = auVar2 << 0x40;
            auStack_2b8._8_8_ = (long *)(auStack_2b8._8_8_ + 0x30);
            goto joined_r0x08586d36;
          }
          uVar12 = func_0x086280e0(auStack_2b8,auStack_318);
          auStack_2b8._8_8_ = uVar12;
          if ((uStack_300 & 1) == 0) {
          }
          else {
            func_0x0412a280(auStack_2f0._0_8_,CONCAT44(uStack_2fc,uStack_300) & 0xfffffffffffffffe);
          }
          if ((auStack_318[0] & 1) == 0) goto joined_r0x08586d36;
          func_0x0412a280(plStack_308,auStack_318._0_8_ & 0xfffffffffffffffe);
          if (cStack_258 == '\x01') goto LAB_08586c0d;
LAB_08586d3c:
          lVar10 = lStack_270;
          uVar18 = uStack_268;
          if (lStack_270 != 0) {
            while (lVar10 != uVar18) {
              func_0x048b3e80(uVar18 + -0x40);
              uVar18 = uVar18 + -0x40;
            }
            uStack_268 = lVar10;
            func_0x0412a280(lStack_270,(long)plStack_260 - lStack_270);
          }
          puVar13 = puStack_288;
          if (puStack_288 != (undefined8 *)0x0) {
            for (puVar22 = (undefined8 *)auStack_280._0_8_; puVar13 != puVar22;
                puVar22 = puVar22 + -10) {
              if ((*(char *)(puVar22 + -1) == '\x01') && ((*(byte *)(puVar22 + -6) & 1) != 0)) {
                func_0x0412a280(puVar22[-4],puVar22[-6] & 0xfffffffffffffffe);
              }
            }
            auStack_280._0_8_ = puVar13;
            func_0x0412a280(puStack_288,auStack_280._8_8_ - (long)puStack_288);
          }
        }
        param_2 = plStack_110;
        if (cVar6 == '\0') {
          bVar14 = 0;
          puVar13 = puStack_1c8;
          plVar16 = plStack_c0;
          plVar9 = plStack_b8;
          goto LAB_08586f33;
        }
        plVar15 = (long *)((long)plVar15 + 1);
      } while ((undefined1  [8])plVar15 != auVar21);
    }
    if (*(char *)(param_3 + 0x38) == '\x01') {
      uVar12 = func_0x0412dc70();
      func_0x08627f90(auStack_318,0x22,uVar12);
LAB_08587586:
      plVar16 = uStack_2e0;
      auStack_1f8._8_8_ = 0;
      auStack_1f8._0_8_ = auStack_318._0_8_;
      plVar9 = (long *)auStack_318._8_8_;
      auStack_1e8._12_4_ = uStack_2fc;
      auStack_1e8._8_4_ = uStack_300;
      auStack_1e8._0_8_ = plStack_308;
      puVar13 = (undefined8 *)CONCAT71(uStack_2f7,bStack_2f8);
      plStack_308 = (undefined8 *)0x0;
      uStack_300 = 0;
      uStack_2fc = 0;
      bStack_2f8 = 0;
      uStack_2f7 = 0;
      auStack_1b8._0_16_ = _auStack_2f0;
      _auStack_2f0 = (undefined1  [16])0x0;
      uStack_2e0 = (long *)0x0;
      func_0x048e6d60(auStack_318);
      goto LAB_08586f31;
    }
    auStack_1e8._0_16_ = (undefined1  [16])0x0;
    auStack_1f8 = (undefined1  [16])0x0;
    bVar14 = 1;
    auStack_1b8._0_16_ = (undefined1  [16])0x0;
    puVar13 = (undefined8 *)0x0;
    plVar16 = (long *)0x0;
    plVar9 = (long *)0x0;
  }
LAB_08586f33:
  uVar12 = auStack_220._0_8_;
  if (cStack_208 == '\0') {
    puStack_1c8 = puVar13;
    if (auStack_220._0_8_ != 0) {
      uVar18 = auStack_220._8_8_;
      while (uVar12 != uVar18) {
        uVar18 = uVar18 - 0x40;
        func_0x048b3e80(uVar18);
      }
      auStack_220._8_8_ = uVar12;
      func_0x0412a280(auStack_220._0_8_,(long)plStack_210 - auStack_220._0_8_);
    }
    auVar21 = auStack_238;
    puVar13 = puStack_1c8;
    if (auStack_238 != (undefined1  [8])0x0) {
      for (plVar15 = uStack_230; auVar21 != (undefined1  [8])plVar15; plVar15 = plVar15 + -10) {
        if (((char)plVar15[-1] == '\x01') && ((*(byte *)(plVar15 + -6) & 1) != 0)) {
          func_0x0412a280(plVar15[-4],plVar15[-6] & 0xfffffffffffffffe);
        }
      }
      uStack_230 = (long *)auVar21;
      func_0x0412a280(auStack_238,(long)puStack_228 - (long)auStack_238);
      puVar13 = puStack_1c8;
    }
  }
  if (bVar14 == 0) {
    uStack_1a0 = auStack_1f8._0_8_;
    plStack_190 = (long *)auStack_1e8._0_8_;
    plStack_188 = (long *)auStack_1e8._8_8_;
    plStack_178 = (long *)auStack_1b8._0_8_;
    uStack_170 = (long *)auStack_1b8._8_8_;
    plStack_198 = plVar9;
    puStack_180 = puVar13;
    plStack_168 = plVar16;
  }
  bStack_160 = bVar14;
  if (ppuStack_88 == apuStack_a8) {
    lVar10 = 0x20;
  }
  else {
    lVar10 = 0x28;
    if (ppuStack_88 == (undefined **)0x0) goto LAB_085870c5;
  }
  (**(code **)(*ppuStack_88 + lVar10))();
LAB_085870c5:
  plVar15 = plStack_2a8;
  auVar2 = auStack_2b8;
  if ((bStack_160 & 1) == 0) {
    func_0x08589120(&uStack_1a0);
    uStack_2e0 = plStack_168;
    auStack_2f0._0_8_ = plStack_178;
    puVar13 = puStack_180;
    plVar15 = plStack_188;
    plStack_308 = plStack_190;
    uStack_248 = uStack_1a0;
    plStack_240 = plStack_198;
    plStack_190 = (long *)0x0;
    plStack_188 = (long *)0x0;
    puStack_180 = (undefined8 *)0x0;
    auStack_2f0._8_4_ = (undefined4)uStack_170;
    uStack_2e4 = uStack_170._4_4_;
    plStack_178 = (long *)0x0;
    uStack_170 = (long *)0x0;
    plStack_168 = (long *)0x0;
    auStack_318._8_8_ = plStack_198;
    auStack_318._0_8_ = uStack_1a0;
    _auStack_238 = ZEXT816(0);
    puStack_228 = (undefined8 *)0x0;
    auStack_220 = ZEXT816(0);
    plStack_210 = (long *)0x0;
    cStack_2d8 = '\0';
    uStack_300 = (uint)plVar15;
    uStack_2fc = (undefined4)((ulong)plVar15 >> 0x20);
    bStack_2f8 = (byte)puVar13;
    uStack_2f7 = (undefined7)((ulong)puVar13 >> 8);
    func_0x048e6d60(&uStack_248);
    plVar15 = plStack_178;
  }
  else {
    cStack_2d8 = '\x01';
    auStack_2b8 = ZEXT816(0);
    plStack_2a8 = (long *)0x0;
    auStack_318 = auVar2;
    plStack_308 = plVar15;
    plVar15 = plStack_178;
  }
  plStack_178 = plVar15;
  if ((bStack_160 & 1) == 0) {
    plVar20 = uStack_170;
    if (plVar15 != (long *)0x0) {
      while (plVar16 = plVar20, plVar15 != plVar16) {
        func_0x048b3e80(plVar16 + -8);
        plVar20 = plVar16 + -8;
      }
      uStack_170 = plVar15;
      func_0x0412a280(plStack_178,(long)plStack_168 - (long)plStack_178);
    }
    plVar15 = plStack_190;
    plVar20 = plStack_188;
    if (plStack_190 != (long *)0x0) {
      while (auVar21 = (undefined1  [8])plVar20, (undefined1  [8])plVar15 != auVar21) {
        if (((char)*(long *)((long)auVar21 + -8) == '\x01') &&
           ((*(byte *)((long)auVar21 + -0x30) & 1) != 0)) {
          func_0x0412a280(*(long *)((long)auVar21 + -0x20),
                          *(ulong *)((long)auVar21 + -0x30) & 0xfffffffffffffffe);
        }
        plVar20 = (long *)((long)auVar21 + -0x50);
      }
      plStack_188 = plVar15;
      func_0x0412a280(plStack_190,(long)puStack_180 - (long)plStack_190);
    }
  }
  uVar12 = auStack_2b8._0_8_;
  if ((long *)auStack_2b8._0_8_ != (long *)0x0) {
    auVar21 = (undefined1  [8])auStack_2b8._8_8_;
    while ((undefined1  [8])uVar12 != auVar21) {
      if ((*(byte *)((long)auVar21 + -0x18) & 1) == 0) {
        bVar14 = *(byte *)((long)auVar21 + -0x30);
      }
      else {
        func_0x0412a280(*(long *)((long)auVar21 + -8),
                        *(ulong *)((long)auVar21 + -0x18) & 0xfffffffffffffffe);
        bVar14 = *(byte *)((long)auVar21 + -0x30);
      }
      if ((bVar14 & 1) != 0) {
        func_0x0412a280(*(long *)((long)auVar21 + -0x20),
                        *(ulong *)((long)auVar21 + -0x30) & 0xfffffffffffffffe);
      }
      plVar16 = (long *)((long)auVar21 + -0x30);
      auVar21 = (undefined1  [8])plVar16;
    }
    auStack_2b8._8_8_ = uVar12;
    func_0x0412a280(auStack_2b8._0_8_,(long)plStack_2a8 - auStack_2b8._0_8_);
  }
  cVar6 = cStack_2d8;
  plVar15 = plStack_308;
  puVar13 = (undefined8 *)auStack_318;
  cStack_208 = cStack_2d8;
  if (cStack_2d8 != '\x01') {
    auStack_1f8._0_8_ = CONCAT44(uStack_2fc,uStack_300);
    uStack_230 = (long *)CONCAT44(uStack_2fc,uStack_300);
    puStack_228 = (undefined8 *)CONCAT71(uStack_2f7,bStack_2f8);
    auStack_1e8._0_8_ = puStack_228;
    plStack_308 = (long *)0x0;
    uStack_300 = 0;
    uStack_2fc = 0;
    bStack_2f8 = 0;
    uStack_2f7 = 0;
    puVar13 = (undefined8 *)auStack_2f0;
    auStack_220 = _auStack_2f0;
    plStack_210 = uStack_2e0;
    plVar16 = (long *)auStack_2f0._0_8_;
    plVar9 = uStack_2e0;
    auVar21 = (undefined1  [8])stack0xfffffffffffffd18;
  }
  plStack_240 = (long *)auStack_318._8_8_;
  uStack_248 = auStack_318._0_8_;
  auStack_238 = (undefined1  [8])plVar15;
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar13[2] = 0;
  func_0x086260a0(auStack_318);
  plVar20 = plStack_1c0;
  cStack_c8 = cVar6;
  if (cVar6 == '\0') {
    auStack_f8._8_8_ = auStack_1f8._0_8_;
    uStack_e8 = auStack_1e8._0_8_;
    auStack_238 = (undefined1  [8])0x0;
    uStack_230 = (long *)0x0;
    puStack_228 = (undefined8 *)0x0;
    puVar11 = (ulong *)auStack_220;
    auStack_e0._8_8_ = auVar21;
    auStack_e0._0_8_ = plVar16;
    plStack_d0 = plVar9;
  }
  else {
    puVar11 = &uStack_248;
  }
  lStack_100 = (long)plStack_240;
  uStack_108 = uStack_248;
  auStack_f8._0_8_ = plVar15;
  *puVar11 = 0;
  puVar11[1] = 0;
  puVar11[2] = 0;
  func_0x086260a0(&uStack_248);
  if (cVar6 == '\0') {
    func_0x086261f0(&uStack_108);
    plVar15 = plStack_d0;
    uVar12 = uStack_e8;
    auStack_1e8._0_8_ = auStack_f8._0_8_;
    auStack_1e8._8_8_ = auStack_f8._8_8_;
    uStack_78 = uStack_108;
    lStack_70 = lStack_100;
    auStack_f8 = (undefined1  [16])0x0;
    uStack_e8 = 0;
    auStack_1f8._0_8_ = auStack_e0._0_8_;
    auStack_1f8._8_8_ = auStack_e0._8_8_;
    auStack_e0 = (undefined1  [16])0x0;
    plStack_d0 = (long *)0x0;
    uStack_158 = uStack_108;
    uStack_150 = lStack_100;
    auStack_68 = (undefined1  [16])0x0;
    auStack_58 = (undefined1  [16])0x0;
    auStack_48 = (undefined1  [16])0x0;
    func_0x048e6d60(&uStack_78);
    func_0x086260a0(&uStack_108);
    bStack_118 = 0;
    plStack_148 = (long *)auStack_1e8._0_8_;
    uStack_140 = auStack_1e8._8_8_;
    lStack_138 = uVar12;
    lStack_130 = auStack_1f8._0_8_;
    lStack_128 = auStack_1f8._8_8_;
    plStack_120 = plVar15;
    FUN_08625fe0(&uStack_158);
    plVar16 = plStack_120;
    lVar17 = lStack_128;
    lVar19 = lStack_130;
    lVar10 = lStack_138;
    uVar18 = uStack_140;
    plVar15 = plStack_148;
    puVar13 = puStack_1d0;
    auStack_318._8_8_ = uStack_150;
    auStack_318._0_8_ = uStack_158;
    plStack_148 = (long *)0x0;
    uStack_140 = 0;
    lStack_138 = 0;
    lStack_130 = 0;
    lStack_128 = 0;
    plStack_120 = (long *)0x0;
    *(undefined4 *)puStack_1d0 = (undefined4)uStack_158;
    *(undefined4 *)((long)puStack_1d0 + 4) = uStack_158._4_4_;
    *(undefined4 *)(puStack_1d0 + 1) = (undefined4)uStack_150;
    *(undefined4 *)((long)puStack_1d0 + 0xc) = uStack_150._4_4_;
    plStack_308 = (long *)0x0;
    uStack_300 = 0;
    uStack_2fc = 0;
    bStack_2f8 = 0;
    uStack_2f7 = 0;
    _auStack_2f0 = ZEXT816(0);
    uStack_2e0 = (long *)0x0;
    *(undefined1 *)(puStack_1d0 + 8) = 0;
    puStack_1d0[2] = plVar15;
    puStack_1d0[3] = uVar18;
    puStack_1d0[4] = lVar10;
    puStack_1d0[5] = lVar19;
    puStack_1d0[6] = lVar17;
    puStack_1d0[7] = plVar16;
    func_0x048e6d60(auStack_318);
    lVar10 = lStack_130;
    if ((bStack_118 & 1) == 0) {
      lVar19 = lStack_128;
      if (lStack_130 != 0) {
        while (lVar10 != lVar19) {
          func_0x048b3e80(lVar19 + -0x40);
          lVar19 = lVar19 + -0x40;
        }
        lStack_128 = lVar10;
        func_0x0412a280(lStack_130,(long)plStack_120 - lStack_130);
      }
      plVar15 = plStack_148;
      puVar13 = puStack_1d0;
      uVar18 = uStack_140;
      if (plStack_148 != (long *)0x0) {
        for (; plVar15 != (long *)uVar18; uVar18 = uVar18 + -0x50) {
          if ((*(char *)(uVar18 + -8) == '\x01') && ((*(byte *)(uVar18 + -0x30) & 1) != 0)) {
            func_0x0412a280(*(undefined8 *)(uVar18 + -0x20),
                            *(ulong *)(uVar18 + -0x30) & 0xfffffffffffffffe);
          }
        }
        uStack_140 = (ulong)plVar15;
        func_0x0412a280(plStack_148,lStack_138 - (long)plStack_148);
        puVar13 = puStack_1d0;
      }
    }
  }
  else {
    lVar10 = *plVar20;
    if (lVar10 != 0) {
      lVar19 = param_2[7];
      lVar17 = lVar10;
      if (lVar10 != lVar19) {
        do {
          if ((*(byte *)(lVar19 + -0x18) & 1) == 0) {
            bVar14 = *(byte *)(lVar19 + -0x30);
          }
          else {
            func_0x0412a280(*(undefined8 *)(lVar19 + -8),
                            *(ulong *)(lVar19 + -0x18) & 0xfffffffffffffffe);
            bVar14 = *(byte *)(lVar19 + -0x30);
          }
          if ((bVar14 & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(lVar19 + -0x20),
                            *(ulong *)(lVar19 + -0x30) & 0xfffffffffffffffe);
          }
          lVar19 = lVar19 + -0x30;
        } while (lVar19 != lVar10);
        lVar17 = *plStack_1c0;
        plVar20 = plStack_1c0;
      }
      param_2[7] = lVar10;
      func_0x0412a280(lVar17,param_2[8] - lVar17);
      *plVar20 = 0;
      plVar20[1] = 0;
      plVar20[2] = 0;
    }
    param_2[6] = uStack_108;
    param_2[7] = lStack_100;
    param_2[8] = (long)plVar15;
    uStack_108 = 0;
    lStack_100 = 0;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = auStack_f8._8_8_;
    auStack_f8 = auVar3 << 0x40;
    func_0x086260a0(&uStack_108);
    puStack_1d0[6] = 0;
    puStack_1d0[7] = 0;
    puStack_1d0[4] = 0;
    puStack_1d0[5] = 0;
    puStack_1d0[2] = 0;
    puStack_1d0[3] = 0;
    *puStack_1d0 = 0;
    puStack_1d0[1] = 0;
    puStack_1d0[8] = 0;
    *(undefined1 *)(puStack_1d0 + 8) = 1;
    puVar13 = puStack_1d0;
  }
  return puVar13;
}


