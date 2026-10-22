/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc0c7d30 (ELF vaddr 0xbfc7d30)
 * Label: caller-of-callee
 * Body:  [[0c0c7d30, 0c0c89db] [0c0c89e0, 0c0c8a22] [0c0c8a30, 0c0c94f1] [0c0c9500, 0c0c987a]]
 * Ghidra: FUN_0c0c7d30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c0c7d30(long param_1,undefined8 param_2,ulong *param_3)

{
  long *plVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  long **pplVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  code *pcVar15;
  int *piVar16;
  byte *pbVar17;
  byte *pbVar18;
  ulong uVar19;
  bool bVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auStack_298 [8];
  long *plStack_290;
  undefined8 *puStack_288;
  code *pcStack_280;
  code *pcStack_278;
  undefined8 uStack_270;
  char cStack_268;
  long *plStack_258;
  long *plStack_250;
  code *pcStack_248;
  code *pcStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined1 *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined4 uStack_208;
  undefined1 auStack_200 [24];
  undefined8 uStack_1e8;
  long **pplStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  long lStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined1 uStack_1a0;
  undefined4 uStack_19f;
  undefined1 uStack_19b;
  undefined2 uStack_19a;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined4 uStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  undefined2 uStack_128;
  undefined2 uStack_126;
  uint uStack_124;
  uint uStack_120;
  undefined1 uStack_11c;
  ulong uStack_110;
  ulong uStack_108;
  undefined8 *puStack_100;
  char cStack_f8;
  long lStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  undefined8 *puStack_d8;
  code *pcStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  char cStack_b8;
  undefined7 uStack_b7;
  long *plStack_a8;
  long *plStack_a0;
  undefined8 *puStack_98;
  code *pcStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined1 *puStack_78;
  long *plStack_68;
  long *plStack_60;
  undefined8 *puStack_58;
  code *pcStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  char cStack_38;
  
  func_0x0b66c780();
  func_0x0c4afb80(param_1);
  if ((DAT_0f6d5d88 == '\0') && (iVar7 = func_0x04108328(&DAT_0f6d5d88), iVar7 != 0)) {
    func_0x0c112bc0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d5d08,0xf53dab8);
    func_0x0410844d(&DAT_0f6d5d88);
  }
  lStack_f0 = param_1 + 0x18;
  plVar11 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f6d5d08 + 4)) * 8);
  do {
    lVar12 = *plVar11;
    if (lVar12 == -1) goto LAB_0c0c7dc0;
    plVar11 = (long *)(*(long *)(param_1 + 0x30) + lVar12 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar12 * 0x18) != *(uint *)(_DAT_0f6d5d08 + 4))
  ;
  if (plVar11 == *(long **)(param_1 + 0x38)) {
LAB_0c0c7dc0:
    puVar9 = &DAT_0f6d5d08;
    if (iRam000000000f6d5d68 != -0x2b3da790) goto LAB_0c0c7e27;
LAB_0c0c7deb:
    lVar12 = *(long *)(puVar9 + 0x68);
    if (lVar12 == 0) goto LAB_0c0c7e27;
    bVar20 = (*(byte *)(lVar12 + 8) & 1) != 0;
    lVar13 = lVar12 + 9;
    if (bVar20) {
      lVar13 = *(long *)(lVar12 + 0x18);
    }
    uVar19 = (ulong)(*(byte *)(lVar12 + 8) >> 1);
    if (bVar20) {
      uVar19 = *(ulong *)(lVar12 + 0x10);
    }
    func_0x0c113320(auStack_298,param_1,lVar13,uVar19);
  }
  else {
    puVar9 = (undefined *)plVar11[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_0c0c7deb;
LAB_0c0c7e27:
    func_0x0c113320(auStack_298,param_1,&UNK_0136d237,0xc);
  }
  if (cStack_268 == '\0') {
    uStack_1d8._4_4_ = (uint)((ulong)uStack_1d8 >> 0x20);
    uStack_1e8._4_4_ = (undefined4)((ulong)uStack_1e8 >> 0x20);
    uStack_270 = 0x1e1bc4d500000004;
    if ((DAT_0f6d5da8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f6d5da8), iVar7 != 0)) {
      func_0x0c112cd0();
      func_0x0410844d(&DAT_0f6d5da8);
    }
    uStack_1e8 = (long *)CONCAT44(uStack_1e8._4_4_,uStack_270._4_4_);
    pplStack_1e0 = (long **)0x0;
    uStack_1d8 = (long *)((ulong)uStack_1d8._4_4_ << 0x20);
    uStack_1d0 = (long *)0x1;
    puStack_1c8 = &SUB_048aead0;
    puStack_1c0 = &UNK_0c113ec0;
    puStack_1b8 = &UNK_0c113ed0;
    lStack_1b0 = 0;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_19f = 0;
    uStack_19b = 0;
    uStack_19a = 0;
    lStack_198 = 0;
    func_0x049057f0(&plStack_290,&uStack_1e8);
    func_0x048aea50(&uStack_1e8);
    pcStack_248 = pcStack_280;
    pcStack_240 = pcStack_278;
    plStack_258 = plStack_290;
    plStack_250 = puStack_288;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0f34fd10;
    if ((DAT_0f551bc8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f551bc8), iVar7 != 0)) {
      func_0x04905be0(0xf551bb0);
      func_0x0410844d(&DAT_0f551bc8);
    }
    uStack_1e8 = (long *)CONCAT44(uStack_1e8._4_4_,_DAT_0f551bb4);
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (plVar11 == (long *)0x0) {
      func_0x0eec74c0(0x30,0);
    }
    plVar11[1] = 0;
    plVar11[2] = 0;
    *plVar11 = (long)&UNK_0ef46c48;
    pplStack_1e0 = (long **)(plVar11 + 3);
    plVar11[3] = (long)puVar10;
    plVar11[4] = 0;
    *(undefined1 *)(plVar11 + 5) = 0xff;
    plStack_a8 = (long *)0x0;
    plStack_a0 = (long *)0x0;
    uStack_1d8 = plVar11;
    func_0x048afd20(&plStack_258,&uStack_1e8);
    plVar11 = uStack_1d8;
    if (uStack_1d8 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_1d8 + 1;
      lVar12 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*uStack_1d8 + 0x10))(uStack_1d8);
        func_0x0412c2d0(plVar11);
      }
    }
    plVar11 = plStack_a0;
    if (plStack_a0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_a0 + 1;
      lVar12 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
        func_0x0412c2d0(plVar11);
      }
    }
    plStack_68 = (long *)auStack_298;
    plStack_60 = plStack_290;
    puStack_58 = puStack_288;
    pcStack_50 = pcStack_280;
    pcStack_48 = pcStack_278;
    uStack_40 = uStack_270;
    cStack_38 = cStack_268;
    func_0x0c114140(&uStack_1e8,&plStack_68,&UNK_012d8a23,5,1);
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar11 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar11 = (long)&UNK_0f34fd10;
    if (uStack_1d0 != (long *)0x0) {
      lVar12 = *uStack_1d0;
      uStack_1d0 = plVar11;
      (**(code **)(lVar12 + 8))();
      plVar11 = uStack_1d0;
    }
    uStack_1d0 = plVar11;
    plStack_258 = (long *)CONCAT44(plStack_258._4_4_,(undefined4)uStack_1d8);
    plStack_250 = (long *)0x0;
    pcStack_248 = (code *)((ulong)pcStack_248 & 0xffffffff00000000);
    pcStack_240 = (code *)0x1;
    uStack_238 = 0;
    uStack_230 = &UNK_0c075880;
    puStack_228 = &SUB_048b06d0;
    puStack_220 = &UNK_08f16290;
    puStack_218 = &UNK_0c114700;
    puStack_210 = &UNK_0c114a20;
    uStack_208 = 0;
    auStack_200._0_16_ = ZEXT816(0);
    func_0x048b05a0(pplStack_1e0,&plStack_258);
    uVar3 = auStack_200._8_8_;
    if ((long *)auStack_200._8_8_ != (long *)0x0) {
      LOCK();
      plVar11 = (long *)(auStack_200._8_8_ + 8);
      lVar12 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*(long *)auStack_200._8_8_ + 0x10))(auStack_200._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    func_0x0c114400(&uStack_1e8);
    cStack_b8 = cStack_38;
    pcStack_c8 = pcStack_48;
    uStack_c0 = uStack_40;
    puStack_d8 = puStack_58;
    pcStack_d0 = pcStack_50;
    plStack_e8 = plStack_68;
    plStack_e0 = plStack_60;
    FUN_048b0bc0(&uStack_1d0);
    plStack_a8 = plStack_e8;
    plStack_a0 = plStack_e0;
    puStack_98 = puStack_d8;
    pcStack_90 = pcStack_d0;
    pcStack_88 = pcStack_c8;
    uStack_80 = (undefined *)uStack_c0;
    puStack_78 = (undefined1 *)CONCAT71(uStack_b7,cStack_b8);
    func_0x0c113910(&uStack_1e8,plStack_e8 + 3);
    if (uStack_1d0._4_4_ == 2) {
      piVar16 = *(int **)(uStack_1d8[0xf] + 0x60);
      iVar7 = *piVar16;
      while (iVar7 != (int)uStack_1d0) {
        piVar16 = piVar16 + 0x16;
        iVar7 = *piVar16;
      }
      plVar11 = *(long **)(piVar16 + 0xc);
      while ((long **)plVar11 != pplStack_1e0) {
        piVar16 = *(int **)(piVar16 + 0xe);
        plVar11 = *(long **)(piVar16 + 0xc);
      }
LAB_0c0c82af:
      *(byte *)((long)piVar16 + 0x12) = *(byte *)((long)piVar16 + 0x12) | 4;
    }
    else {
      if (uStack_1d0._4_4_ == 1) {
        piVar16 = *(int **)(uStack_1d8[0xf] + 0x48);
        iVar7 = *piVar16;
        while (iVar7 != (int)uStack_1d0) {
          piVar16 = piVar16 + 0x1a;
          iVar7 = *piVar16;
        }
        goto LAB_0c0c82af;
      }
      if (uStack_1d0._4_4_ == 0) {
        *(uint *)(uStack_1d8 + 3) = *(uint *)(uStack_1d8 + 3) | 0x40000;
      }
    }
    func_0x0c114140(&uStack_1e8,&plStack_a8,&UNK_0131a99b,0xd,0x10);
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar11 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar11 = (long)&UNK_0f348fd0;
    if (uStack_1d0 != (long *)0x0) {
      lVar12 = *uStack_1d0;
      uStack_1d0 = plVar11;
      (**(code **)(lVar12 + 8))();
      plVar11 = uStack_1d0;
    }
    uStack_1d0 = plVar11;
    plStack_258 = (long *)CONCAT44(plStack_258._4_4_,(undefined4)uStack_1d8);
    plStack_250 = (long *)0x0;
    pcStack_248 = (code *)((ulong)pcStack_248 & 0xffffffff00000000);
    pcStack_240 = (code *)0x1;
    uStack_238 = 0;
    uStack_230 = &UNK_0bf9e790;
    puStack_228 = &SUB_048b06d0;
    puStack_220 = &SUB_0b68a660;
    puStack_218 = &UNK_0c114bf0;
    puStack_210 = &UNK_0c114e50;
    uStack_208 = 0;
    auStack_200._0_16_ = ZEXT816(0);
    func_0x048b05a0(pplStack_1e0,&plStack_258);
    uVar3 = auStack_200._8_8_;
    if ((long *)auStack_200._8_8_ != (long *)0x0) {
      LOCK();
      plVar11 = (long *)(auStack_200._8_8_ + 8);
      lVar12 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*(long *)auStack_200._8_8_ + 0x10))(auStack_200._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    func_0x0c114400(&uStack_1e8);
    FUN_048b0bc0(&uStack_1d0);
  }
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  uVar3 = _UNK_014be1e0;
  *(ulong *)((long)puVar10 + 0x6e) = CONCAT62(_UNK_014be1da,_DAT_014be1d8);
  *(undefined8 *)((long)puVar10 + 0x76) = uVar3;
  uVar3 = CONCAT26(_DAT_014be1d8,_UNK_014be1d2);
  puVar10[0xc] = _DAT_014be1ca;
  puVar10[0xd] = uVar3;
  uVar3 = _UNK_014be1c2;
  puVar10[10] = _DAT_014be1ba;
  puVar10[0xb] = uVar3;
  uVar3 = _UNK_014be1b2;
  puVar10[8] = _DAT_014be1aa;
  puVar10[9] = uVar3;
  uVar3 = _UNK_014be1a2;
  puVar10[6] = _DAT_014be19a;
  puVar10[7] = uVar3;
  uVar3 = _UNK_014be192;
  puVar10[4] = _DAT_014be18a;
  puVar10[5] = uVar3;
  uVar3 = _UNK_014be182;
  puVar10[2] = _DAT_014be17a;
  puVar10[3] = uVar3;
  uVar3 = _UNK_014be172;
  *puVar10 = _DAT_014be16a;
  puVar10[1] = uVar3;
  *(undefined1 *)((long)puVar10 + 0x7e) = 0;
  uStack_110 = uStack_110 & 0xffffffffffffff00;
  cStack_f8 = '\0';
  if ((char)param_3[3] == '\x01') {
    uStack_110 = *param_3;
    uStack_108 = 0;
    uVar19 = param_3[1];
    if ((uVar19 & 0x80000000000000) != 0) {
      lVar13 = *(long *)((uVar19 & 0xff00ffffffffffff) - 8);
      lVar12 = lVar13 + 9;
      plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar12,8);
      if (lVar12 != 0 && plVar11 == (long *)0x0) {
        func_0x0eec74c0(lVar12,8);
      }
      *plVar11 = lVar13;
      func_0x0eee2f00(plVar11 + 1,uVar19 & 0xff00ffffffffffff,lVar13);
      *(undefined1 *)((long)plVar11 + lVar13 + 8) = 0;
      uVar19 = (ulong)(plVar11 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    puStack_100 = (undefined8 *)0x0;
    puVar14 = (undefined8 *)param_3[2];
    uStack_108 = uVar19;
    if (((ulong)puVar14 & 0x80000000000000) != 0) {
      lVar13 = *(long *)(((ulong)puVar14 & 0xff00ffffffffffff) - 8);
      lVar12 = lVar13 + 9;
      plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar12,8);
      if (lVar12 != 0 && plVar11 == (long *)0x0) {
        func_0x0eec74c0(lVar12,8);
      }
      *plVar11 = lVar13;
      func_0x0eee2f00(plVar11 + 1,(ulong)puVar14 & 0xff00ffffffffffff,lVar13);
      *(undefined1 *)((long)plVar11 + lVar13 + 8) = 0;
      puVar14 = (undefined8 *)((ulong)(plVar11 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    cStack_f8 = '\x01';
    puStack_100 = puVar14;
  }
  lVar12 = func_0x0c068ba0(lStack_f0);
  if ((*(int *)(lVar12 + 0x60) == -0x2b3da790) && (lVar12 = *(long *)(lVar12 + 0x68), lVar12 != 0))
  {
    bVar20 = (*(byte *)(lVar12 + 8) & 1) != 0;
    lVar13 = lVar12 + 9;
    if (bVar20) {
      lVar13 = *(long *)(lVar12 + 0x18);
    }
    uVar19 = (ulong)(*(byte *)(lVar12 + 8) >> 1);
    if (bVar20) {
      uVar19 = *(ulong *)(lVar12 + 0x10);
    }
    func_0x0c069d90(auStack_298,param_1,lVar13,uVar19,1);
  }
  else {
    func_0x0c069d90(auStack_298,param_1,0,0,1);
  }
  if (cStack_268 == '\0') {
    if ((DAT_0f6d4fe0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f6d4fe0), iVar7 != 0)) {
      func_0x0ee25020(0xf6d4fb8,&DAT_01350d4d);
      func_0x0eee2f40(&UNK_048c16a0,0xf6d4fb8,0xf53dab8);
      func_0x0410844d(&DAT_0f6d4fe0);
    }
    uVar19 = (ulong)(DAT_0f6d4fc0 >> 1);
    lVar12 = 0xf6d4fc1;
    if ((DAT_0f6d4fc0 & 1) != 0) {
      uVar19 = _DAT_0f6d4fc8;
      lVar12 = _DAT_0f6d4fd0;
    }
    func_0x0c06a780(&uStack_1e8,auStack_298,lVar12,uVar19,0);
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar11 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar11 = (long)&UNK_0f351df0;
    if (uStack_1d0 != (long *)0x0) {
      lVar12 = *uStack_1d0;
      uStack_1d0 = plVar11;
      (**(code **)(lVar12 + 8))();
      plVar11 = uStack_1d0;
    }
    uStack_1d0 = plVar11;
    plStack_258 = (long *)CONCAT44(plStack_258._4_4_,(undefined4)uStack_1d8);
    plStack_250 = (long *)0x0;
    pcStack_248 = (code *)((ulong)pcStack_248 & 0xffffffff00000000);
    pcStack_240 = (code *)0x1;
    uStack_238 = 0;
    uStack_230 = &UNK_0c117000;
    puStack_228 = &SUB_048b06d0;
    puStack_220 = &UNK_0c116d20;
    puStack_218 = &UNK_0c1170c0;
    puStack_210 = &UNK_0c117360;
    uStack_208 = 0;
    auStack_200._0_16_ = (undefined1  [16])0x0;
    func_0x048b05a0(pplStack_1e0,&plStack_258);
    uVar3 = auStack_200._8_8_;
    if ((long *)auStack_200._8_8_ != (long *)0x0) {
      LOCK();
      plVar11 = (long *)(auStack_200._8_8_ + 8);
      lVar12 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*(long *)auStack_200._8_8_ + 0x10))(auStack_200._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    iVar7 = *(int *)((long)pplStack_1e0 + 0x1c);
    if (iVar7 == 2) {
      piVar16 = *(int **)(*(long *)((long)pplStack_1e0[2] + 0x78) + 0x60);
      iVar7 = *piVar16;
      while (iVar7 != (int)pplStack_1e0[3]) {
        piVar16 = piVar16 + 0x16;
        iVar7 = *piVar16;
      }
      lVar12 = *(long *)(piVar16 + 0xc);
      while ((long *)lVar12 != pplStack_1e0[1]) {
        piVar16 = *(int **)(piVar16 + 0xe);
        lVar12 = *(long *)(piVar16 + 0xc);
      }
      *(byte *)((long)piVar16 + 0x12) = *(byte *)((long)piVar16 + 0x12) | 4;
    }
    else if (iVar7 == 1) {
      piVar16 = *(int **)(*(long *)((long)pplStack_1e0[2] + 0x78) + 0x48);
      iVar7 = *piVar16;
      while (iVar7 != (int)pplStack_1e0[3]) {
        piVar16 = piVar16 + 0x1a;
        iVar7 = *piVar16;
      }
      *(byte *)((long)piVar16 + 0x12) = *(byte *)((long)piVar16 + 0x12) | 4;
    }
    else if (iVar7 == 0) {
      *(uint *)((long)pplStack_1e0[2] + 0x18) = *(uint *)((long)pplStack_1e0[2] + 0x18) | 0x40000;
    }
    func_0x0c06aa10(&uStack_1e8);
    FUN_048b0bc0(&uStack_1d0);
  }
  if ((DAT_0f6d4fe0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f6d4fe0), iVar7 != 0)) {
    func_0x0ee25020(0xf6d4fb8,&DAT_01350d4d);
    func_0x0eee2f40(&UNK_048c16a0,0xf6d4fb8,0xf53dab8);
    func_0x0410844d(&DAT_0f6d4fe0);
  }
  uVar19 = (ulong)(DAT_0f6d4fc0 >> 1);
  lVar12 = 0xf6d4fc1;
  if ((DAT_0f6d4fc0 & 1) != 0) {
    uVar19 = _DAT_0f6d4fc8;
    lVar12 = _DAT_0f6d4fd0;
  }
  lVar13 = func_0x0c1165b0(lStack_f0);
  if ((*(int *)(lVar13 + 0x60) == -0x2b3da790) && (lVar13 = *(long *)(lVar13 + 0x68), lVar13 != 0))
  {
    bVar20 = (*(byte *)(lVar13 + 8) & 1) != 0;
    lVar12 = lVar13 + 9;
    if (bVar20) {
      lVar12 = *(long *)(lVar13 + 0x18);
    }
    uVar19 = (ulong)(*(byte *)(lVar13 + 8) >> 1);
    if (bVar20) {
      uVar19 = *(ulong *)(lVar13 + 0x10);
    }
  }
  func_0x0c1177b0(&plStack_258,param_1,lVar12,uVar19);
  plVar11 = plStack_258 + 3;
  lVar12 = func_0x0c1165b0(plVar11);
  for (pbVar17 = (byte *)plStack_258[10]; pbVar17 != (byte *)plStack_258[0xb];
      pbVar17 = pbVar17 + 0x38) {
    bVar2 = *pbVar17;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x1a) goto LAB_0c0c8a3a;
    }
    else if (*(long *)(pbVar17 + 8) == 0x1a) {
LAB_0c0c8a3a:
      if ((bVar2 & 1) == 0) {
        pbVar18 = pbVar17 + 1;
      }
      else {
        pbVar18 = *(byte **)(pbVar17 + 0x10);
      }
      auVar21[0] = -(*pbVar18 == DAT_014eaba0);
      auVar21[1] = -(pbVar18[1] == DAT_014eaba0._1_1_);
      auVar21[2] = -(pbVar18[2] == DAT_014eaba0._2_1_);
      auVar21[3] = -(pbVar18[3] == DAT_014eaba0._3_1_);
      auVar21[4] = -(pbVar18[4] == DAT_014eaba0._4_1_);
      auVar21[5] = -(pbVar18[5] == DAT_014eaba0._5_1_);
      auVar21[6] = -(pbVar18[6] == DAT_014eaba0._6_1_);
      auVar21[7] = -(pbVar18[7] == DAT_014eaba0._7_1_);
      auVar21[8] = -(pbVar18[8] == DAT_014eaba0._8_1_);
      auVar21[9] = -(pbVar18[9] == DAT_014eaba0._9_1_);
      auVar21[10] = -(pbVar18[10] == DAT_014eaba0._10_1_);
      auVar21[0xb] = -(pbVar18[0xb] == DAT_014eaba0._11_1_);
      auVar21[0xc] = -(pbVar18[0xc] == DAT_014eaba0._12_1_);
      auVar21[0xd] = -(pbVar18[0xd] == DAT_014eaba0._13_1_);
      auVar21[0xe] = -(pbVar18[0xe] == DAT_014eaba0._14_1_);
      auVar21[0xf] = -(pbVar18[0xf] == DAT_014eaba0._15_1_);
      auVar22[0] = -(pbVar18[10] == DAT_014e4ff0);
      auVar22[1] = -(pbVar18[0xb] == DAT_014e4ff0._1_1_);
      auVar22[2] = -(pbVar18[0xc] == DAT_014e4ff0._2_1_);
      auVar22[3] = -(pbVar18[0xd] == DAT_014e4ff0._3_1_);
      auVar22[4] = -(pbVar18[0xe] == DAT_014e4ff0._4_1_);
      auVar22[5] = -(pbVar18[0xf] == DAT_014e4ff0._5_1_);
      auVar22[6] = -(pbVar18[0x10] == DAT_014e4ff0._6_1_);
      auVar22[7] = -(pbVar18[0x11] == DAT_014e4ff0._7_1_);
      auVar22[8] = -(pbVar18[0x12] == DAT_014e4ff0._8_1_);
      auVar22[9] = -(pbVar18[0x13] == DAT_014e4ff0._9_1_);
      auVar22[10] = -(pbVar18[0x14] == DAT_014e4ff0._10_1_);
      auVar22[0xb] = -(pbVar18[0x15] == DAT_014e4ff0._11_1_);
      auVar22[0xc] = -(pbVar18[0x16] == DAT_014e4ff0._12_1_);
      auVar22[0xd] = -(pbVar18[0x17] == DAT_014e4ff0._13_1_);
      auVar22[0xe] = -(pbVar18[0x18] == DAT_014e4ff0._14_1_);
      auVar22[0xf] = -(pbVar18[0x19] == DAT_014e4ff0._15_1_);
      auVar22 = auVar22 & auVar21;
      if ((ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar22[0xf] >> 7) << 0xf) == 0xffff) break;
    }
  }
  if (pbVar17 == (byte *)plStack_258[0xb]) {
LAB_0c0c8a73:
    if ((int)uStack_230 == 0) {
      if ((*(int *)(lVar12 + 0x60) != -0x2b3da790) || (*(long *)(lVar12 + 0x68) == 0))
      goto LAB_0c0c8ae1;
      lVar12 = *(long *)(lVar12 + 0x68) + 0x38;
    }
    else {
      auStack_298 = (undefined1  [8])func_0x048b0c90(plVar11,lVar12,uStack_230._4_4_,1);
      if (auStack_298 == (undefined1  [8])0x0) {
        _auStack_298 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_298);
        if (auStack_298 == (undefined1  [8])0x0) goto LAB_0c0c8ae1;
      }
      if ((*(int *)((long)auStack_298 + 0x50) == -0x45dcb126) &&
         (*(long *)((long)auStack_298 + 0x58) != 0)) {
        lVar12 = *(long *)((long)auStack_298 + 0x58) + 0x40;
      }
      else {
LAB_0c0c8ae1:
        lVar12 = 0;
      }
    }
    puStack_d8 = (undefined8 *)&UNK_0488e0b0;
    pcStack_d0 = (code *)0x0;
    pcStack_c8 = (code *)CONCAT35(pcStack_c8._5_3_,0x48b5725f);
    plStack_e8 = (long *)0x0;
    _auStack_298 = (undefined1  [16])0x0;
    pcStack_280 = (code *)&UNK_0488e0b0;
    pcStack_278 = (code *)0x0;
    uStack_270 = CONCAT35(uStack_270._5_3_,0x48b5725f);
    puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar14 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar3 = _UNK_013bbadf;
    plStack_68 = (long *)0x21;
    plStack_60 = (long *)0x1a;
    *(ulong *)((long)puVar14 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puVar14 + 0x12) = uVar3;
    uVar3 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puVar14 = _DAT_013bbacd;
    puVar14[1] = uVar3;
    *(undefined1 *)((long)puVar14 + 0x1a) = 0;
    puStack_58 = puVar14;
    lVar12 = func_0x048b5060(lVar12,&plStack_68);
    *(undefined8 *)(lVar12 + 0x20) = 0;
    if ((undefined1 *)(lVar12 + 0x20) == auStack_298) {
      pcVar15 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar12 + 0x40) != (code *)0x0) {
        puVar14 = (undefined8 *)(lVar12 + 0x28);
        (**(code **)(lVar12 + 0x40))(puVar14);
        if (uStack_270._4_1_ != '\0') {
          if (uStack_270._4_1_ == '\x02') {
            (*pcStack_280)(5,&plStack_290,puVar14);
          }
          else {
            plVar11 = plStack_290;
            plStack_290 = (long *)0x0;
            *puVar14 = plVar11;
          }
        }
      }
      *(code **)(lVar12 + 0x38) = pcStack_280;
      *(code **)(lVar12 + 0x40) = pcStack_278;
      *(undefined4 *)(lVar12 + 0x48) = (undefined4)uStack_270;
      *(char *)(lVar12 + 0x4c) = uStack_270._4_1_;
      pcVar15 = pcStack_278;
    }
    if (((ulong)plStack_68 & 1) != 0) {
      thunk_FUN_0ee326a0(puStack_58,(ulong)plStack_68 & 0xfffffffffffffffe);
      pcVar15 = pcStack_278;
    }
    if (pcVar15 != (code *)0x0) {
      (*pcVar15)(&plStack_290);
    }
    if (pcStack_d0 != (code *)0x0) {
      (*pcStack_d0)(&plStack_e8);
    }
  }
  else {
    iVar7 = *(int *)(pbVar17 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f550ad8), iVar8 != 0)) {
      func_0x0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar7 == _DAT_0f550ac4) goto LAB_0c0c8a73;
  }
  puStack_1b8 = puStack_228;
  puStack_1c8 = (undefined1 *)uStack_238;
  puStack_1c0 = uStack_230;
  uStack_1d8 = (long *)pcStack_248;
  uStack_1d0 = (long *)pcStack_240;
  uStack_1e8 = plStack_258;
  pplStack_1e0 = (long **)plStack_250;
  auVar4[0xf] = 0;
  auVar4._0_15_ = stack0xfffffffffffffd69;
  _auStack_298 = auVar4 << 8;
  pcStack_280 = (code *)((ulong)pcStack_280 & 0xffffffffffffff00);
  if (cStack_f8 == '\x01') {
    plStack_290 = (long *)0x0;
    auStack_298 = (undefined1  [8])uStack_110;
    auVar21 = _auStack_298;
    plStack_290 = (long *)uStack_108;
    if ((uStack_108 & 0x80000000000000) != 0) {
      uVar19 = uStack_108 & 0xff00ffffffffffff;
      lVar13 = *(long *)(uVar19 - 8);
      lVar12 = lVar13 + 9;
      _auStack_298 = auVar21;
      plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar12,8);
      if (lVar12 != 0 && plVar11 == (long *)0x0) {
        func_0x0eec74c0(lVar12,8);
      }
      *plVar11 = lVar13;
      func_0x0eee2f00(plVar11 + 1,uVar19,lVar13);
      *(undefined1 *)((long)plVar11 + lVar13 + 8) = 0;
      plStack_290 = (long *)((ulong)(plVar11 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    puStack_288 = (undefined8 *)0x0;
    puVar14 = puStack_100;
    if (((ulong)puStack_100 & 0x80000000000000) != 0) {
      uVar19 = (ulong)puStack_100 & 0xff00ffffffffffff;
      lVar13 = *(long *)(uVar19 - 8);
      lVar12 = lVar13 + 9;
      plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar12,8);
      if (lVar12 != 0 && plVar11 == (long *)0x0) {
        func_0x0eec74c0(lVar12,8);
      }
      *plVar11 = lVar13;
      func_0x0eee2f00(plVar11 + 1,uVar19,lVar13);
      *(undefined1 *)((long)plVar11 + lVar13 + 8) = 0;
      puVar14 = (undefined8 *)((ulong)(plVar11 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    pcStack_280 = (code *)CONCAT71(pcStack_280._1_7_,1);
    puStack_288 = puVar14;
  }
  FUN_0412e5e0(&plStack_e8,puVar10,0x7e);
  plStack_a8 = uStack_1e8;
  plStack_a0 = (long *)pplStack_1e0;
  puStack_98 = uStack_1d8;
  pcStack_90 = (code *)uStack_1d0;
  pcStack_88 = (code *)puStack_1c8;
  uStack_80 = puStack_1c0;
  puStack_78 = puStack_1b8;
  if (((ulong)plStack_e8 & 1) != 0) {
    thunk_FUN_0ee326a0(puStack_d8,(ulong)plStack_e8 & 0xfffffffffffffffe);
  }
  if ((char)pcStack_280 == '\x01') {
    if (((ulong)puStack_288 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)puStack_288 & 0xff00ffffffffffff) - 8);
    }
    puStack_288 = (undefined8 *)0x0;
    if (((ulong)plStack_290 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)plStack_290 & 0xff00ffffffffffff) - 8);
    }
  }
  func_0x0c117cf0(&uStack_1e8,plStack_a8 + 3);
  if (uStack_1d0._4_4_ == 2) {
    piVar16 = *(int **)(*(long *)((long)uStack_1d8 + 0x78) + 0x60);
    iVar7 = *piVar16;
    while (iVar7 != (int)uStack_1d0) {
      piVar16 = piVar16 + 0x16;
      iVar7 = *piVar16;
    }
    plVar11 = *(long **)(piVar16 + 0xc);
    while ((long **)plVar11 != pplStack_1e0) {
      piVar16 = *(int **)(piVar16 + 0xe);
      plVar11 = *(long **)(piVar16 + 0xc);
    }
LAB_0c0c8f6f:
    *(byte *)((long)piVar16 + 0x12) = *(byte *)((long)piVar16 + 0x12) | 4;
  }
  else {
    if (uStack_1d0._4_4_ == 1) {
      piVar16 = *(int **)(*(long *)((long)uStack_1d8 + 0x78) + 0x48);
      iVar7 = *piVar16;
      while (iVar7 != (int)uStack_1d0) {
        piVar16 = piVar16 + 0x1a;
        iVar7 = *piVar16;
      }
      goto LAB_0c0c8f6f;
    }
    if (uStack_1d0._4_4_ == 0) {
      *(uint *)((long)uStack_1d8 + 0x18U) = *(uint *)((long)uStack_1d8 + 0x18U) | 0x40000;
    }
  }
  if ((DAT_0f6d69c0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f6d69c0), iVar7 != 0)) {
    func_0x0c115d00(0xf6d69a8);
    func_0x0410844d(&DAT_0f6d69c0);
  }
  uStack_80 = (undefined *)0x8ead8cdb00000001;
  plVar11 = plStack_a8 + 3;
  uStack_1e8 = (long *)func_0x0c1165b0(plVar11);
  pplStack_1e0 = (long **)plVar11;
  func_0x0ed621a0(&uStack_1e8,uStack_80._4_4_);
  pplStack_1e0 = &plStack_a0;
  uStack_1e8 = (long *)CONCAT62(uStack_1e8._2_6_,0x10);
  uStack_1d8 = (long *)CONCAT44(uStack_1d8._4_4_,uStack_80._4_4_);
  uStack_1d0 = (long *)0x0;
  puStack_1c8 = (undefined1 *)0x0;
  puStack_1c0 = (undefined *)0x0;
  puStack_1b8 = (undefined *)0x0;
  lStack_1b0 = 0;
  uStack_1a8 = 0x70657218;
  uStack_1a4 = 0x5f726961;
  uStack_1a0 = 0x69;
  uStack_19f = 0x736d6574;
  uStack_19b = 0;
  lStack_190 = 0;
  lStack_188 = 0;
  lStack_180 = 0;
  lStack_178 = 0;
  lStack_170 = 0;
  lStack_168 = 0;
  uStack_160 = 0x3f600000;
  func_0x048afb10(&lStack_190,8);
  lStack_138 = 0;
  lStack_130 = 0;
  lStack_148 = 0;
  lStack_140 = 0;
  lStack_158 = 0;
  lStack_150 = 0;
  uStack_128 = 0xff00;
  uStack_124 = uStack_124 & 0xffffff00;
  uStack_120 = uStack_120 & 0xffffff00;
  uStack_11c = 0;
  puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar14 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar14 = &UNK_0f351f28;
  if (uStack_1d0 != (long *)0x0) {
    lVar12 = *uStack_1d0;
    uStack_1d0 = puVar14;
    (**(code **)(lVar12 + 8))();
    puVar14 = uStack_1d0;
  }
  uStack_1d0 = puVar14;
  plStack_258 = (long *)CONCAT44(plStack_258._4_4_,(undefined4)uStack_1d8);
  plStack_250 = (long *)0x0;
  pcStack_248 = (code *)((ulong)pcStack_248 & 0xffffffff00000000);
  pcStack_240 = (code *)0x1;
  uStack_238 = 0;
  uStack_230 = &UNK_0c11b640;
  puStack_228 = &SUB_048b06d0;
  puStack_220 = &UNK_0c119f30;
  puStack_218 = &UNK_0c11b700;
  puStack_210 = &UNK_0c11b8e0;
  uStack_208 = 0;
  auStack_200._0_16_ = ZEXT816(0);
  func_0x048b05a0(pplStack_1e0,&plStack_258);
  uVar3 = auStack_200._8_8_;
  if ((long *)auStack_200._8_8_ != (long *)0x0) {
    LOCK();
    plVar11 = (long *)(auStack_200._8_8_ + 8);
    lVar12 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*(long *)auStack_200._8_8_ + 0x10))(auStack_200._8_8_);
      func_0x0412c2d0(uVar3);
    }
  }
  pplVar5 = pplStack_1e0;
  if ((DAT_0f550a20 == '\0') && (iVar7 = func_0x04108328(&DAT_0f550a20), iVar7 != 0)) {
    func_0x048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  plStack_258 = (long *)CONCAT44(plStack_258._4_4_,_DAT_0f550a0c);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  puVar6 = puStack_1c8;
  puVar14 = uStack_1d0;
  plVar11[1] = 0;
  plVar11[2] = 0;
  *plVar11 = (long)&UNK_0ef439d0;
  plStack_250 = plVar11 + 3;
  uStack_1d0 = (long *)0x0;
  puStack_1c8 = (undefined1 *)0x0;
  plVar11[3] = (long)puVar14;
  plVar11[4] = (long)puVar6;
  plVar11[7] = lStack_1b0;
  plVar11[5] = (long)puStack_1c0;
  plVar11[6] = (long)puStack_1b8;
  puStack_1c0 = (undefined *)0x0;
  puStack_1b8 = (undefined *)0x0;
  lStack_1b0 = 0;
  plVar11[10] = lStack_198;
  plVar11[8] = CONCAT44(uStack_1a4,uStack_1a8);
  plVar11[9] = CONCAT26(uStack_19a,CONCAT15(uStack_19b,CONCAT41(uStack_19f,uStack_1a0)));
  uStack_1a8 = 0;
  uStack_1a4 = 0;
  uStack_1a0 = 0;
  uStack_19f = 0;
  uStack_19b = 0;
  uStack_19a = 0;
  lStack_198 = 0;
  plVar11[0xb] = lStack_190;
  plVar11[0xc] = lStack_188;
  plVar11[0xd] = lStack_180;
  lStack_190 = 0;
  lStack_188 = 0;
  lStack_180 = 0;
  plVar11[0xe] = lStack_178;
  plVar11[0xf] = lStack_170;
  plVar11[0x10] = lStack_168;
  lStack_178 = 0;
  lStack_170 = 0;
  lStack_168 = 0;
  *(undefined4 *)(plVar11 + 0x11) = uStack_160;
  plVar11[0x12] = lStack_158;
  plVar11[0x13] = lStack_150;
  plVar11[0x14] = lStack_148;
  lStack_158 = 0;
  lStack_150 = 0;
  lStack_148 = 0;
  plVar11[0x17] = lStack_130;
  plVar11[0x15] = lStack_140;
  plVar11[0x16] = lStack_138;
  lStack_140 = 0;
  lStack_138 = 0;
  lStack_130 = 0;
  *(ulong *)((long)plVar11 + 0xc5) = CONCAT17(uStack_11c,CONCAT43(uStack_120,uStack_124._1_3_));
  plVar11[0x18] = CONCAT44(uStack_124,CONCAT22(uStack_126,uStack_128));
  _auStack_298 = ZEXT816(0);
  pcStack_248 = (code *)plVar11;
  func_0x048afd20(pplVar5,&plStack_258);
  pcVar15 = pcStack_248;
  if (pcStack_248 != (code *)0x0) {
    LOCK();
    plVar11 = (long *)((long)pcStack_248 + 8);
    lVar12 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*(long *)pcStack_248 + 0x10))(pcStack_248);
      func_0x0412c2d0(pcVar15);
    }
  }
  plVar11 = plStack_290;
  if (plStack_290 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_290 + 1;
    lVar12 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plStack_290 + 0x10))(plStack_290);
      func_0x0412c2d0(plVar11);
    }
  }
  plVar11 = pplVar5[2];
  iVar7 = *(int *)((long)pplVar5 + 0x1c);
  if (iVar7 == 2) {
    piVar16 = *(int **)(plVar11[0xf] + 0x60);
    iVar7 = *piVar16;
    while (iVar7 != *(int *)(pplVar5 + 3)) {
      piVar16 = piVar16 + 0x16;
      iVar7 = *piVar16;
    }
    for (; *(long **)(piVar16 + 0xc) != pplVar5[1]; piVar16 = *(int **)(piVar16 + 0xe)) {
    }
  }
  else {
    if (iVar7 != 1) {
      if (iVar7 == 0) {
        *(uint *)(plVar11 + 3) = *(uint *)(plVar11 + 3) | (int)uStack_1e8 << 0x10;
      }
      FUN_048b0bc0(&uStack_1d0);
      goto joined_r0x0c0c951a;
    }
    piVar16 = *(int **)(plVar11[0xf] + 0x48);
    iVar7 = *piVar16;
    while (iVar7 != *(int *)(pplVar5 + 3)) {
      piVar16 = piVar16 + 0x1a;
      iVar7 = *piVar16;
    }
  }
  piVar16[4] = piVar16[4] | (int)uStack_1e8 << 0x10;
  FUN_048b0bc0(&uStack_1d0);
joined_r0x0c0c951a:
  if (cStack_f8 == '\x01') {
    if (((ulong)puStack_100 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)puStack_100 & 0xff00ffffffffffff) - 8);
    }
    puStack_100 = (undefined8 *)0x0;
    if ((uStack_108 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_108 & 0xff00ffffffffffff) - 8);
    }
  }
  thunk_FUN_0ee326a0(puVar10,0x80);
  return;
}



/* ---- referenced strings ----
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14be16a  The repairable item component specifies which items can be used to repair this item, along with 
 * 0x14be17a  tem component specifies which items can be used to repair this item, along with how much durabil
 * 0x14be18a  ecifies which items can be used to repair this item, along with how much durability is gained.
 * 0x14be19a  ems can be used to repair this item, along with how much durability is gained.
 * 0x14be1aa  to repair this item, along with how much durability is gained.
 * 0x14be1ba  tem, along with how much durability is gained.
 * 0x14be1ca  how much durability is gained.
 * 0x14be1d8  ility is gained.
 * 0x14eaba0  [cereal:document
 */
