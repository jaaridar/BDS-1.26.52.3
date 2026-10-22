/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x67b7e30 (ELF vaddr 0x66b7e30)
 * Label: caller-of-callee
 * Body:  [[067b7530, 067b7b2b] [067b7e30, 067b819c] [067b81a0, 067b8afc] [067b8b00, 067b8bb3] [067b8bc0, 067b8f2c] [067b8f30, 067b8f7a] [067b8f80, 067b91d0] [067b91e0, 067b993e] [067b9961, 067b99eb] [067b99f7, 067b9a9f] [067b9acb, 067b9bd8]]
 * Ghidra: FUN_067b7e30
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_067b7e30(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4,ulong *param_5,
                    long param_6,long *param_7,uint *param_8)

{
  long *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  long *plVar12;
  undefined *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong *puVar17;
  ulong *puVar18;
  undefined8 uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  long *plVar23;
  ulong uVar24;
  long *extraout_RDX;
  uint *puVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  ulong *puVar29;
  ulong *unaff_R12;
  ulong *puVar30;
  ulong *puVar31;
  ulong *unaff_R15;
  bool bVar32;
  float fVar33;
  float fVar34;
  long *plStack_428;
  long lStack_420;
  ulong uStack_418;
  long lStack_410;
  long lStack_408;
  uint uStack_400;
  uint uStack_3fc;
  uint uStack_3f8;
  uint uStack_3f4;
  undefined8 uStack_3f0;
  long lStack_3e8;
  undefined *puStack_3e0;
  uint uStack_3d8;
  undefined **ppuStack_3c0;
  long lStack_3b0;
  ulong uStack_3a8;
  long lStack_3a0;
  long lStack_398;
  undefined *puStack_390;
  long lStack_388;
  long lStack_380;
  undefined **ppuStack_370;
  long *plStack_358;
  undefined *apuStack_350 [4];
  undefined **ppuStack_330;
  long lStack_320;
  ulong uStack_318;
  long lStack_310;
  long lStack_308;
  long alStack_300 [4];
  long *plStack_2e0;
  long lStack_2c8;
  ulong *puStack_2c0;
  ulong *puStack_2b8;
  ulong *puStack_2b0;
  ulong *puStack_2a8;
  ulong *puStack_2a0;
  ulong *puStack_290;
  ulong *puStack_288;
  ulong *puStack_280;
  ulong *puStack_278;
  long lStack_270;
  ulong *puStack_268;
  ulong *puStack_260;
  ulong *puStack_258;
  ulong *puStack_250;
  ulong *puStack_248;
  ulong *puStack_240;
  ulong *puStack_238;
  undefined8 uStack_230;
  ulong uStack_228;
  ulong *puStack_220;
  undefined1 auStack_218 [4];
  uint uStack_214;
  undefined8 uStack_210;
  ulong *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  uint uStack_1c8;
  uint uStack_1c4;
  uint uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  long alStack_198 [4];
  long *plStack_178;
  undefined1 auStack_168 [8];
  ulong *puStack_160;
  ulong *puStack_158;
  undefined1 auStack_150 [8];
  ulong *puStack_148;
  ulong *puStack_140;
  uint uStack_138;
  undefined4 uStack_134;
  ulong uStack_130;
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined1 uStack_120;
  undefined7 uStack_11f;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  uint uStack_d8;
  uint uStack_d4;
  undefined8 uStack_d0;
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  undefined1 uStack_b8;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  ulong *puStack_70;
  ulong *puStack_68;
  ulong *puStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  
  if (*(char *)((long)param_1 + 0xb2) != '\0') {
    return (ulong *)0x0;
  }
  uStack_210 = (ulong *)*param_3;
  puStack_288 = param_1;
  _auStack_218 = param_2;
  if ((param_3[1] & 1) == 0) {
    uStack_1f8 = (ulong *)param_3[3];
    puStack_208 = (ulong *)param_3[1];
    uStack_200 = (ulong *)param_3[2];
  }
  else {
    puStack_2a0 = (ulong *)0x67b7eab;
    func_0x0412e5e0(&puStack_208,param_3[3],param_3[2]);
    unaff_R12 = param_5;
    unaff_R15 = param_4;
  }
  uStack_1e0 = param_4[2];
  uStack_1f0 = *param_4;
  uStack_1e8 = param_4[1];
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  uStack_1d8 = *param_5;
  *param_5 = 0;
  uStack_1d0._0_4_ = (uint)uStack_1d0 & 0xffffff00;
  uStack_1c8 = 0xffffffff;
  uVar6 = *(uint *)(param_6 + 8);
  if ((ulong)uVar6 != 0xffffffff) {
    puStack_2a0 = (ulong *)0x67b7f2b;
    puStack_258 = &uStack_1d0;
    (**(code **)(&UNK_0f04c760 + (ulong)uVar6 * 8))(&puStack_258,param_6);
    uStack_1c8 = uVar6;
  }
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  plStack_178 = alStack_198;
  plVar23 = (long *)param_7[4];
  if (plVar23 == (long *)0x0) {
    plStack_178 = (long *)0x0;
  }
  else if (plVar23 == param_7) {
    puStack_2a0 = (ulong *)0x67b7fa0;
    (**(code **)(*plVar23 + 0x18))();
  }
  else {
    param_7[4] = 0;
    plStack_178 = plVar23;
  }
  puVar16 = *(ulong **)param_8;
  puStack_2a0 = (ulong *)0x67b7fb3;
  puVar14 = (ulong *)func_0x0eee2e90(puVar16);
  if (puVar14 < (ulong *)0xfffffffffffffff8) {
    puStack_280 = param_2;
    if (puVar14 < (ulong *)0x17) {
      auStack_168[0] = (char)puVar14 * '\x02';
      unaff_R15 = (ulong *)(auStack_168 + 1);
      if (puVar14 != (ulong *)0x0) goto LAB_067b803e;
    }
    else {
      uVar24 = 0x1a;
      if (((ulong)puVar14 | 7) != 0x17) {
        uVar24 = ((ulong)puVar14 | 7) + 1;
      }
      puStack_2a0 = (ulong *)0x67b8011;
      unaff_R15 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar24);
      if (unaff_R15 == (ulong *)0x0) {
        puStack_2a0 = (ulong *)0x67b989a;
        func_0x0eec74c0(uVar24,0);
      }
      auStack_168 = (undefined1  [8])(uVar24 | 1);
      puStack_160 = puVar14;
      puStack_158 = unaff_R15;
LAB_067b803e:
      param_2 = puStack_280;
      puStack_2a0 = (ulong *)0x67b804c;
      memmove(unaff_R15,puVar16,puVar14);
    }
    *(undefined1 *)((long)unaff_R15 + (long)puVar14) = 0;
    puVar16 = *(ulong **)(param_8 + 2);
    puStack_2a0 = (ulong *)0x67b805d;
    puVar15 = (ulong *)func_0x0eee2e90(puVar16);
    unaff_R12 = puVar14;
    if ((ulong *)0xfffffffffffffff7 < puVar15) goto LAB_067b9917;
    if (puVar15 < (ulong *)0x17) {
      auStack_150[0] = (char)puVar15 * '\x02';
      unaff_R15 = (ulong *)(auStack_150 + 1);
      if (puVar15 != (ulong *)0x0) goto LAB_067b80e3;
    }
    else {
      uVar24 = 0x1a;
      if (((ulong)puVar15 | 7) != 0x17) {
        uVar24 = ((ulong)puVar15 | 7) + 1;
      }
      puStack_2a0 = (ulong *)0x67b80b6;
      unaff_R15 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar24);
      if (unaff_R15 == (ulong *)0x0) {
        puStack_2a0 = (ulong *)0x67b98a9;
        func_0x0eec74c0(uVar24,0);
      }
      auStack_150 = (undefined1  [8])(uVar24 | 1);
      param_2 = puStack_280;
      puStack_148 = puVar15;
      puStack_140 = unaff_R15;
LAB_067b80e3:
      puStack_2a0 = (ulong *)0x67b80f1;
      memmove(unaff_R15,puVar16,puVar15);
    }
    puVar14 = puStack_288;
    *(undefined1 *)((long)unaff_R15 + (long)puVar15) = 0;
    uStack_138 = param_8[4];
    if ((long *)puStack_288[0x20] == (long *)0x0) goto LAB_067b991c;
    puStack_2a0 = (ulong *)0x67b811b;
    uStack_130 = (**(code **)(*(long *)puStack_288[0x20] + 0x30))();
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_bc = 0x100;
    uStack_b8 = 0;
    puVar16 = (ulong *)puVar14[7];
    if (puVar16 == (ulong *)0x0) {
      puVar14 = puVar14 + 7;
      puVar15 = puVar14;
    }
    else {
      do {
        while (puVar14 = puVar16, param_2 < (ulong *)puVar14[4]) {
          puVar16 = (ulong *)*puVar14;
          puVar15 = puVar14;
          if ((ulong *)*puVar14 == (ulong *)0x0) goto LAB_067b81ca;
        }
        unaff_R15 = puStack_288;
        if (param_2 <= (ulong *)puVar14[4]) goto LAB_067b8487;
        puVar16 = (ulong *)puVar14[1];
      } while ((ulong *)puVar14[1] != (ulong *)0x0);
      puVar15 = puVar14 + 1;
    }
LAB_067b81ca:
    puStack_2a0 = (ulong *)0x67b81e0;
    puVar16 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a0);
    if (puVar16 == (ulong *)0x0) {
      puStack_2a0 = (ulong *)0x67b987a;
      func_0x0eec74c0(0x1a0,0);
    }
    uVar6 = uStack_1c8;
    uVar24 = uStack_1d8;
    puVar16[4] = (ulong)param_2;
    puVar16[6] = (ulong)_auStack_218;
    puVar16[7] = (ulong)uStack_210;
    puVar16[10] = (ulong)uStack_1f8;
    puVar16[8] = (ulong)puStack_208;
    puVar16[9] = (ulong)uStack_200;
    puStack_208 = (ulong *)0x0;
    uStack_200 = (ulong *)0x0;
    uStack_1f8 = (ulong *)0x0;
    puVar16[0xd] = uStack_1e0;
    *(uint *)(puVar16 + 0xb) = (uint)uStack_1f0;
    *(uint *)((long)puVar16 + 0x5c) = uStack_1f0._4_4_;
    *(uint *)(puVar16 + 0xc) = (uint)uStack_1e8;
    *(uint *)((long)puVar16 + 100) = uStack_1e8._4_4_;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    puVar16[0xe] = uVar24;
    *(undefined1 *)(puVar16 + 0xf) = 0;
    *(uint *)(puVar16 + 0x10) = 0xffffffff;
    if ((ulong)uStack_1c8 != 0xffffffff) {
      puStack_258 = puVar16 + 0xf;
      puStack_2a0 = (ulong *)0x67b82ab;
      (**(code **)(&UNK_0f04c760 + (ulong)uStack_1c8 * 8))(&puStack_258,&uStack_1d0);
      *(uint *)(puVar16 + 0x10) = uVar6;
    }
    *(uint *)(puVar16 + 0x11) = uStack_1c0;
    puVar16[0x14] = uStack_1a8;
    *(uint *)(puVar16 + 0x12) = (uint)uStack_1b8;
    *(uint *)((long)puVar16 + 0x94) = uStack_1b8._4_4_;
    *(uint *)(puVar16 + 0x13) = (uint)uStack_1b0;
    *(uint *)((long)puVar16 + 0x9c) = uStack_1b0._4_4_;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    if (plStack_178 == (long *)0x0) {
      puVar16[0x1a] = 0;
    }
    else if (plStack_178 == alStack_198) {
      puVar16[0x1a] = (ulong)(puVar16 + 0x16);
      puStack_2a0 = (ulong *)0x67b8357;
      (**(code **)(*plStack_178 + 0x18))();
    }
    else {
      puVar16[0x1a] = (ulong)plStack_178;
      plStack_178 = (long *)0x0;
    }
    unaff_R15 = puStack_288;
    puVar16[0x1e] = (ulong)puStack_158;
    puVar16[0x1c] = (ulong)auStack_168;
    puVar16[0x1d] = (ulong)puStack_160;
    auStack_168 = (undefined1  [8])0x0;
    puStack_160 = (ulong *)0x0;
    puStack_158 = (ulong *)0x0;
    puVar16[0x21] = (ulong)puStack_140;
    puVar16[0x1f] = (ulong)auStack_150;
    puVar16[0x20] = (ulong)puStack_148;
    auStack_150 = (undefined1  [8])0x0;
    puStack_148 = (ulong *)0x0;
    puStack_140 = (ulong *)0x0;
    puVar16[0x28] = uStack_108;
    puVar16[0x26] = CONCAT71(uStack_117,uStack_118);
    puVar16[0x27] = CONCAT71(uStack_10f,uStack_110);
    puVar16[0x24] = CONCAT71(uStack_127,uStack_128);
    puVar16[0x25] = CONCAT71(uStack_11f,uStack_120);
    puVar16[0x22] = CONCAT44(uStack_134,uStack_138);
    puVar16[0x23] = uStack_130;
    puVar16[0x2b] = uStack_f0;
    puVar16[0x29] = uStack_100;
    puVar16[0x2a] = uStack_f8;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    *(uint *)(puVar16 + 0x2c) = (uint)uStack_e8;
    *(uint *)((long)puVar16 + 0x164) = uStack_e8._4_4_;
    *(uint *)(puVar16 + 0x2d) = (uint)uStack_e0;
    *(uint *)((long)puVar16 + 0x16c) = uStack_e0._4_4_;
    *(uint *)(puVar16 + 0x2e) = uStack_d8;
    *(uint *)((long)puVar16 + 0x174) = uStack_d4;
    *(uint *)(puVar16 + 0x2f) = (uint)uStack_d0;
    *(uint *)((long)puVar16 + 0x17c) = uStack_d0._4_4_;
    *(uint *)(puVar16 + 0x30) = uStack_c8;
    *(uint *)((long)puVar16 + 0x184) = uStack_c4;
    *(uint *)(puVar16 + 0x31) = uStack_c0;
    *(uint *)((long)puVar16 + 0x18c) = uStack_bc;
    *(undefined1 *)(puVar16 + 0x32) = uStack_b8;
    *puVar16 = 0;
    puVar16[1] = 0;
    puVar16[2] = (ulong)puVar14;
    *puVar15 = (ulong)puVar16;
    if (*(ulong *)puStack_288[6] != 0) {
      puStack_288[6] = *(ulong *)puStack_288[6];
    }
    puStack_2a0 = (ulong *)0x67b8483;
    func_0x048bed00(puStack_288[7],puVar16);
    puVar14 = unaff_R15 + 8;
    *puVar14 = *puVar14 + 1;
    puVar14 = puVar16;
LAB_067b8487:
    puStack_2a0 = (ulong *)0x67b8494;
    func_0x067b9be0();
    puVar31 = (ulong *)*param_3;
    puVar16 = (ulong *)unaff_R15[9];
    puVar17 = (ulong *)unaff_R15[10];
    puVar15 = puVar16;
    if (puVar16 == puVar17) {
      uStack_228 = 0;
      puVar18 = puVar16;
LAB_067b855a:
      uStack_210 = (ulong *)0x0;
      puStack_208 = (ulong *)0x0;
      uStack_200 = (ulong *)0x0;
      uStack_1f8 = (ulong *)0x0;
      uStack_1f0 = 0;
      uStack_1e8 = 0;
      uStack_1e0 = 0;
      uStack_1d8 = 0;
      lVar28 = (long)puVar18 - (long)puVar16;
      puVar29 = (ulong *)((long)puVar16 + lVar28);
      puStack_290 = puVar17;
      puStack_268 = puVar31;
      puStack_220 = puVar14;
      _auStack_218 = puVar31;
      puStack_60 = puVar16;
      if (puVar17 < (ulong *)puStack_288[0xb]) {
        if (puVar15 == puVar17) {
          *puVar17 = (ulong)puVar31;
          puVar17[1] = 0;
          puVar17[2] = 0;
          puVar17[3] = 0;
          puVar17[4] = 0;
          uStack_200 = (ulong *)0x0;
          uStack_1f8 = (ulong *)0x0;
          uStack_210 = (ulong *)0x0;
          puStack_208 = (ulong *)0x0;
          puVar17[5] = 0;
          puVar17[6] = 0;
          *(uint *)(puVar17 + 7) = 0;
          *(uint *)((long)puVar17 + 0x3c) = 0;
          *(uint *)(puVar17 + 8) = 0;
          *(uint *)((long)puVar17 + 0x44) = 0;
          puStack_288[10] = (ulong)(puVar17 + 9);
          unaff_R15 = puStack_288;
        }
        else {
          puVar16 = puVar17;
          if (puVar17 + -9 < puVar17) {
            puVar16 = puVar17 + 9;
            *puVar17 = puVar17[-9];
            puVar17[1] = puVar17[-8];
            puVar17[2] = puVar17[-7];
            puVar17[3] = puVar17[-6];
            puVar17[4] = puVar17[-5];
            puVar17[-6] = 0;
            puVar17[-5] = 0;
            puVar17[-8] = 0;
            puVar17[-7] = 0;
            puVar17[5] = puVar17[-4];
            puVar17[6] = puVar17[-3];
            puVar17[-4] = 0;
            puVar17[-3] = 0;
            *(uint *)(puVar17 + 7) = (uint)puVar17[-2];
            *(uint *)((long)puVar17 + 0x3c) = *(uint *)((long)puVar17 + -0xc);
            *(uint *)(puVar17 + 8) = (uint)puVar17[-1];
            *(uint *)((long)puVar17 + 0x44) = *(uint *)((long)puVar17 + -4);
          }
          puStack_288[10] = (ulong)puVar16;
          if (puVar17 != puVar29 + 9) {
            lVar28 = 0;
            do {
              *(undefined8 *)((long)puStack_290 + lVar28 + -0x48) =
                   *(undefined8 *)((long)puStack_290 + lVar28 + -0x90);
              puStack_2a0 = (ulong *)0x67b868a;
              func_0x067cd690((long)puStack_290 + lVar28 + -0x40,(long)puStack_290 + lVar28 + -0x88)
              ;
              puVar2 = (undefined4 *)((long)puStack_290 + lVar28 + -0x58);
              uVar9 = puVar2[1];
              uVar10 = puVar2[2];
              uVar11 = puVar2[3];
              puVar3 = (undefined4 *)((long)puStack_290 + lVar28 + -0x10);
              *puVar3 = *puVar2;
              puVar3[1] = uVar9;
              puVar3[2] = uVar10;
              puVar3[3] = uVar11;
              lVar20 = lVar28 + -0x90;
              lVar28 = lVar28 + -0x48;
            } while ((ulong *)((long)puStack_290 + lVar20) != puVar15);
          }
          *puVar29 = (ulong)puVar31;
          puStack_2a0 = (ulong *)0x67b86c0;
          func_0x067cd690(puVar29 + 1);
          *(uint *)(puVar29 + 7) = (uint)uStack_1e0;
          *(uint *)((long)puVar29 + 0x3c) = uStack_1e0._4_4_;
          *(uint *)(puVar29 + 8) = (uint)uStack_1d8;
          *(uint *)((long)puVar29 + 0x44) = uStack_1d8._4_4_;
          unaff_R15 = puStack_288;
        }
LAB_067b8abf:
        puVar15 = uStack_200;
        puVar16 = puStack_208;
        for (uVar24 = (long)uStack_200 - (long)puStack_208; 0x10 < uVar24; uVar24 = uVar24 - 8) {
          puStack_2a0 = (ulong *)0x67b8aed;
          func_0x0412a280(*puVar16);
          puVar16 = puVar16 + 1;
        }
        for (; puVar14 = puStack_220, puVar16 != puVar15; puVar16 = puVar16 + 1) {
          puStack_2a0 = (ulong *)0x67b8b0d;
          func_0x0412a280(*puVar16);
        }
        if (uStack_210 != (ulong *)0x0) {
          puStack_2a0 = (ulong *)0x67b8b38;
          func_0x0412a280();
        }
        if (puStack_60 == puStack_290) {
          unaff_R15[0x13] = 0;
          puVar16 = (ulong *)unaff_R15[9];
          puVar31 = (ulong *)unaff_R15[10];
        }
        else {
          puVar31 = (ulong *)unaff_R15[10];
          puVar16 = (ulong *)unaff_R15[9];
          puVar15 = puVar16;
          for (puVar17 = puVar16;
              (puVar17 != puVar31 && (puVar15 = puVar17, *puVar17 != uStack_228));
              puVar17 = puVar17 + 9) {
            puVar15 = puVar31;
          }
          unaff_R15[0x13] = ((long)puVar15 - (long)puVar16 >> 3) * -0x71c71c71c71c71c7;
        }
        for (; (puVar16 != puVar31 && ((ulong *)*puVar16 != puStack_268)); puVar16 = puVar16 + 9) {
        }
        puVar15 = (ulong *)0x0;
        if (puVar16 != puVar31) {
          puVar15 = puVar16;
        }
        goto LAB_067b8bd7;
      }
      uVar24 = ((long)puVar17 - (long)puVar16 >> 3) * -0x71c71c71c71c71c7 + 1;
      puStack_68 = param_3;
      if (0x38e38e38e38e38e < uVar24) goto LAB_067b992b;
      lVar20 = (long)puStack_288[0xb] - (long)puVar16 >> 3;
      uVar21 = lVar20 * 0x1c71c71c71c71c72;
      if (uVar24 < uVar21) {
        uVar24 = uVar21;
      }
      param_5 = puStack_288 + 9;
      if (0x1c71c71c71c71c6 < (ulong)(lVar20 * -0x71c71c71c71c71c7)) {
        uVar24 = 0x38e38e38e38e38e;
      }
      puStack_238 = param_5;
      puStack_70 = param_5;
      if (uVar24 == 0) {
        lVar20 = 0;
        puVar14 = (ulong *)0x0;
LAB_067b87e0:
        puStack_250 = (ulong *)((long)puVar14 + lVar28);
        puStack_260 = (ulong *)((long)puVar14 + lVar20);
        puVar17 = puStack_250;
        puStack_258 = puVar14;
        puStack_248 = puStack_250;
        puStack_240 = puStack_260;
        if (lVar28 == lVar20) {
          if (puVar15 == puVar16) {
            puStack_2a0 = (ulong *)0x67b886b;
            puStack_278 = puVar18;
            lStack_270 = lVar28;
            puVar17 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
            if (puVar17 == (ulong *)0x0) {
              puStack_2a0 = (ulong *)0x67b990d;
              func_0x0eec74c0(0x48,0);
            }
            puStack_260 = puVar17 + 9;
            puVar18 = puStack_278;
            if (puVar14 != (ulong *)0x0) {
              puStack_2a0 = (ulong *)0x67b8895;
              func_0x0412a280(puVar14,lStack_270);
              puVar18 = puStack_278;
            }
          }
          else {
            lVar28 = (lVar28 >> 3) * -0x71c71c71c71c71c7;
            puVar17 = puStack_250 + ((lVar28 - (lVar28 + 1 >> 0x3f)) + 1U >> 1) * -9;
          }
        }
        *puVar17 = (ulong)puVar31;
        puVar17[1] = 0;
        puVar17[2] = (ulong)puStack_208;
        puVar17[3] = (ulong)uStack_200;
        puVar17[4] = (ulong)uStack_1f8;
        uStack_200 = (ulong *)0x0;
        uStack_1f8 = (ulong *)0x0;
        uStack_210 = (ulong *)0x0;
        puStack_208 = (ulong *)0x0;
        puVar17[5] = 0;
        puVar17[6] = uStack_1e8;
        *(uint *)(puVar17 + 7) = (uint)uStack_1e0;
        *(uint *)((long)puVar17 + 0x3c) = uStack_1e0._4_4_;
        *(uint *)(puVar17 + 8) = (uint)uStack_1d8;
        *(uint *)((long)puVar17 + 0x44) = uStack_1d8._4_4_;
        puVar16 = (ulong *)puStack_288[10];
        puVar14 = puVar18;
        if (puVar15 != puVar16) {
          lVar28 = 0;
          do {
            *(undefined8 *)((long)puVar17 + lVar28 + 0x48) = *(undefined8 *)((long)puVar29 + lVar28)
            ;
            *(undefined8 *)((long)puVar17 + lVar28 + 0x50) =
                 *(undefined8 *)((long)puVar29 + lVar28 + 8);
            *(undefined8 *)((long)puVar17 + lVar28 + 0x58) =
                 *(undefined8 *)((long)puVar29 + lVar28 + 0x10);
            *(undefined8 *)((long)puVar17 + lVar28 + 0x60) =
                 *(undefined8 *)((long)puVar29 + lVar28 + 0x18);
            *(undefined8 *)((long)puVar17 + lVar28 + 0x68) =
                 *(undefined8 *)((long)puVar29 + lVar28 + 0x20);
            puVar8 = (undefined8 *)((long)puVar29 + lVar28 + 0x18);
            *puVar8 = 0;
            puVar8[1] = 0;
            puVar8 = (undefined8 *)((long)puVar29 + lVar28 + 8);
            *puVar8 = 0;
            puVar8[1] = 0;
            *(undefined8 *)((long)puVar17 + lVar28 + 0x70) =
                 *(undefined8 *)((long)puVar29 + lVar28 + 0x28);
            *(undefined8 *)((long)puVar17 + lVar28 + 0x78) =
                 *(undefined8 *)((long)puVar29 + lVar28 + 0x30);
            puVar8 = (undefined8 *)((long)puVar29 + lVar28 + 0x28);
            *puVar8 = 0;
            puVar8[1] = 0;
            puVar2 = (undefined4 *)((long)puVar29 + lVar28 + 0x38);
            uVar9 = puVar2[1];
            uVar10 = puVar2[2];
            uVar11 = puVar2[3];
            puVar3 = (undefined4 *)((long)puVar17 + lVar28 + 0x80);
            *puVar3 = *puVar2;
            puVar3[1] = uVar9;
            puVar3[2] = uVar10;
            puVar3[3] = uVar11;
            lVar20 = lVar28 + 0x48;
            lVar28 = lVar28 + 0x48;
            puVar14 = puVar29;
            puStack_278 = puVar18;
          } while ((ulong *)((long)puVar29 + lVar20) != puVar16);
          do {
            puStack_2a0 = (ulong *)0x67b89a9;
            func_0x067beef0(puVar14 + 1);
            puVar14 = puVar14 + 9;
          } while (puVar14 != puVar16);
          puVar18 = (ulong *)puStack_288[10];
          puVar14 = puStack_278;
        }
        unaff_R15 = puStack_288;
        puStack_288[10] = (ulong)puVar29;
        puVar16 = (ulong *)puStack_288[9];
        uVar24 = (long)puVar17 + ((long)puVar16 - (long)puVar14);
        if (puVar16 != puVar15) {
          lVar28 = 0;
          do {
            *(undefined8 *)(uVar24 + lVar28) = *(undefined8 *)((long)puVar16 + lVar28);
            *(undefined8 *)(uVar24 + 8 + lVar28) = *(undefined8 *)((long)puVar16 + lVar28 + 8);
            *(undefined8 *)(uVar24 + 0x10 + lVar28) = *(undefined8 *)((long)puVar16 + lVar28 + 0x10)
            ;
            *(undefined8 *)(uVar24 + 0x18 + lVar28) = *(undefined8 *)((long)puVar16 + lVar28 + 0x18)
            ;
            *(undefined8 *)(uVar24 + 0x20 + lVar28) = *(undefined8 *)((long)puVar16 + lVar28 + 0x20)
            ;
            puVar8 = (undefined8 *)((long)puVar16 + lVar28 + 0x18);
            *puVar8 = 0;
            puVar8[1] = 0;
            puVar8 = (undefined8 *)((long)puVar16 + lVar28 + 8);
            *puVar8 = 0;
            puVar8[1] = 0;
            *(undefined8 *)(uVar24 + 0x28 + lVar28) = *(undefined8 *)((long)puVar16 + lVar28 + 0x28)
            ;
            *(undefined8 *)(uVar24 + 0x30 + lVar28) = *(undefined8 *)((long)puVar16 + lVar28 + 0x30)
            ;
            puVar8 = (undefined8 *)((long)puVar16 + lVar28 + 0x28);
            *puVar8 = 0;
            puVar8[1] = 0;
            puVar2 = (undefined4 *)((long)puVar16 + lVar28 + 0x38);
            uVar9 = puVar2[1];
            uVar10 = puVar2[2];
            uVar11 = puVar2[3];
            puVar3 = (undefined4 *)(uVar24 + 0x38 + lVar28);
            *puVar3 = *puVar2;
            puVar3[1] = uVar9;
            puVar3[2] = uVar10;
            puVar3[3] = uVar11;
            lVar20 = lVar28 + 0x48;
            lVar28 = lVar28 + 0x48;
          } while ((ulong *)((long)puVar16 + lVar20) != puVar15);
          do {
            puStack_2a0 = (ulong *)0x67b8a79;
            func_0x067beef0(puVar16 + 1);
            puVar16 = puVar16 + 9;
          } while (puVar16 != puVar15);
          puVar16 = (ulong *)*puStack_70;
        }
        unaff_R15[9] = uVar24;
        unaff_R15[10] = (long)puVar17 + (long)puVar18 + (0x48 - (long)puVar14);
        unaff_R15[0xb] = (ulong)puStack_260;
        param_2 = puStack_280;
        param_3 = puStack_68;
        if (puVar16 != (ulong *)0x0) {
          puStack_2a0 = (ulong *)0x67b8ab2;
          func_0x0412a280(puVar16);
          param_2 = puStack_280;
          param_3 = puStack_68;
        }
        goto LAB_067b8abf;
      }
      lStack_270 = lVar28;
      if (uVar24 < 0x38e38e38e38e38f) {
        lVar20 = uVar24 * 0x48;
        puStack_2a0 = (ulong *)0x67b8780;
        puVar14 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar20);
        lVar28 = lStack_270;
        if (puVar14 == (ulong *)0x0) {
          puStack_2a0 = (ulong *)0x67b98d6;
          func_0x0eec74c0(lVar20,0);
          puVar14 = (ulong *)0x0;
          lVar28 = lStack_270;
        }
        goto LAB_067b87e0;
      }
      goto LAB_067b9930;
    }
    do {
      if ((ulong *)*puVar15 == puVar31) break;
      puVar15 = puVar15 + 9;
    } while (puVar15 != puVar17);
    if (puVar15 == puVar17) {
      uVar24 = unaff_R15[0x13];
      uVar21 = ((long)puVar17 - (long)puVar16 >> 3) * -0x71c71c71c71c71c7;
      if ((uVar24 | uVar21) >> 0x20 == 0) {
        uVar24 = (uVar24 & 0xffffffff) % (uVar21 & 0xffffffff);
      }
      else {
        uVar24 = uVar24 % uVar21;
      }
      uStack_228 = puVar16[uVar24 * 9];
      puVar29 = puVar16;
      puVar18 = puVar17;
      puVar30 = puVar16;
      puVar15 = puVar17;
      if (puVar31 != (ulong *)0x0) {
        do {
          puVar18 = puVar29;
          puVar15 = puVar30;
          if (*puVar30 == 0) break;
          puVar30 = puVar30 + 9;
          puVar29 = puVar29 + 9;
          puVar18 = puVar17;
          puVar15 = puVar17;
        } while (puVar30 != puVar17);
      }
      goto LAB_067b855a;
    }
LAB_067b8bd7:
    uVar24 = puVar15[2];
    uVar21 = 0;
    if (puVar15[3] != uVar24) {
      uVar21 = (puVar15[3] - uVar24) * 0x40 - 1;
    }
    uVar22 = puVar15[6] + puVar15[5];
    if (uVar21 == uVar22) {
      puStack_2a0 = (ulong *)0x67b8c0b;
      func_0x068a1640(puVar15 + 1);
      uVar24 = puVar15[2];
      uVar22 = puVar15[5] + puVar15[6];
    }
    *(ulong **)(*(long *)(uVar24 + (uVar22 >> 9) * 8) + (ulong)((uint)uVar22 & 0x1ff) * 8) = param_2
    ;
    puVar15[6] = puVar15[6] + 1;
    bVar32 = ((byte)puVar14[0xb] & 1) != 0;
    puVar15 = (ulong *)((long)puVar14 + 0x59);
    if (bVar32) {
      puVar15 = (ulong *)puVar14[0xd];
    }
    param_2 = (ulong *)(ulong)(byte)((byte)puVar14[0xb] >> 1);
    if (bVar32) {
      param_2 = (ulong *)puVar14[0xc];
    }
    bVar4 = (byte)param_3[1];
    if ((bVar4 & 1) == 0) {
      puVar31 = (ulong *)(ulong)(bVar4 >> 1);
      if (puVar31 != (ulong *)0x0) goto LAB_067b8c5f;
LAB_067b8c80:
      puVar14 = (ulong *)&UNK_013fbc75;
      if (*param_3 == 0) {
        puVar14 = (ulong *)&UNK_014cc028;
      }
      puVar31 = (ulong *)((ulong)(*param_3 != 0) * 8 + 8);
      puVar16 = (ulong *)unaff_R15[0x28];
joined_r0x067b8cae:
      if (puVar16 != (ulong *)0x0) goto LAB_067b8cd8;
LAB_067b8cb0:
      cVar5 = (char)unaff_R15[0x16];
      uStack_210 = unaff_R15;
      puVar16 = puStack_280;
joined_r0x067b8cb8:
      if (cVar5 != '\0') {
        return puVar16;
      }
      if (*(char *)((long)uStack_210 + 0xb2) != '\0') {
        return puVar16;
      }
      plVar23 = (long *)uStack_210[0x1a];
      if (plVar23 == (long *)0x0) {
        return puVar16;
      }
      *(undefined1 *)(uStack_210 + 0x16) = 1;
      puStack_258 = (ulong *)&UNK_01393b4b;
      puStack_250 = (ulong *)0x13;
      puStack_248 = (ulong *)_DAT_0f778528;
      puStack_240 = (ulong *)0xffffffff00000001;
      puStack_238 = (ulong *)((ulong)puStack_238 & 0xffffffffffffff00);
      uStack_230 = 0;
      puStack_208 = (ulong *)uStack_210[0x18];
      uStack_200 = (ulong *)uStack_210[0x19];
      if (uStack_210[0x19] != 0) {
        LOCK();
        plVar12 = (long *)(uStack_210[0x19] + 8);
        *plVar12 = *plVar12 + 1;
        UNLOCK();
      }
      uStack_88 = 0;
      plStack_80 = (long *)0x0;
      uStack_48 = 0;
      plStack_40 = (long *)0x0;
      _auStack_218 = (ulong *)&UNK_0f04c7a0;
      puStack_2a0 = (ulong *)0x67b95d3;
      puStack_280 = puVar16;
      func_0x048a4fd0(&plStack_a8,plVar23,&puStack_258,&uStack_88,0,auStack_218);
      if (_auStack_218 != (ulong *)0x0) {
        puStack_2a0 = (ulong *)0x67b95eb;
        (**(code **)((long)_auStack_218 + 8))(auStack_218);
      }
      plVar12 = plStack_80;
      if (plStack_80 != (long *)0x0) {
        LOCK();
        plVar1 = plStack_80 + 1;
        lVar28 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar28 == 0) {
          puStack_2a0 = (ulong *)0x67b9613;
          (**(code **)(*plStack_80 + 0x10))(plStack_80);
          puStack_2a0 = (ulong *)0x67b961b;
          func_0x0412c2d0(plVar12);
        }
      }
      plStack_58 = plStack_a8;
      plStack_50 = plStack_a0;
      if (plStack_a0 != (long *)0x0) {
        LOCK();
        plStack_a0[1] = plStack_a0[1] + 1;
        UNLOCK();
      }
      iVar7 = (int)plVar23[0x10];
      if (iVar7 != 1) {
        if (iVar7 == 3) {
          *(undefined4 *)(plStack_a8 + 6) = 0;
        }
        else if (iVar7 == 2) {
          puStack_2a0 = (ulong *)0x67b9665;
          (**(code **)(*plStack_a8 + 0x10))();
          goto LAB_067b9737;
        }
        plStack_98 = plStack_a8;
        plStack_90 = plStack_a0;
        if (plStack_a0 != (long *)0x0) {
          LOCK();
          plStack_a0[1] = plStack_a0[1] + 1;
          UNLOCK();
        }
        puStack_2a0 = (ulong *)0x67b9707;
        (**(code **)(*plVar23 + 0x28))(plVar23,&plStack_98,0);
        plVar23 = plStack_90;
        if (plStack_90 != (long *)0x0) {
          LOCK();
          plVar12 = plStack_90 + 1;
          lVar28 = *plVar12;
          *plVar12 = *plVar12 + -1;
          UNLOCK();
          if (lVar28 == 0) {
            puStack_2a0 = (ulong *)0x67b972f;
            (**(code **)(*plStack_90 + 0x10))(plStack_90);
            puStack_2a0 = (ulong *)0x67b9737;
            func_0x0412c2d0(plVar23);
          }
        }
      }
LAB_067b9737:
      plVar23 = plStack_50;
      if (plStack_50 != (long *)0x0) {
        LOCK();
        plVar12 = plStack_50 + 1;
        lVar28 = *plVar12;
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (lVar28 == 0) {
          puStack_2a0 = (ulong *)0x67b975f;
          (**(code **)(*plStack_50 + 0x10))(plStack_50);
          puStack_2a0 = (ulong *)0x67b9767;
          func_0x0412c2d0(plVar23);
        }
      }
      plVar23 = plStack_40;
      if (plStack_40 != (long *)0x0) {
        LOCK();
        plVar12 = plStack_40 + 1;
        lVar28 = *plVar12;
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (lVar28 == 0) {
          puStack_2a0 = (ulong *)0x67b9797;
          (**(code **)(*plStack_40 + 0x10))(plStack_40);
          puStack_2a0 = (ulong *)0x67b979f;
          func_0x0412c2d0(plVar23);
        }
      }
      if (plStack_a0 != (long *)0x0) {
        LOCK();
        plVar23 = plStack_a0 + 1;
        lVar28 = *plVar23;
        *plVar23 = *plVar23 + -1;
        UNLOCK();
        if (lVar28 == 0) {
          puStack_2a0 = (ulong *)0x67b97bf;
          (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
          puStack_2a0 = (ulong *)0x67b97c7;
          func_0x0412c2d0(plStack_a0);
        }
      }
      return puVar16;
    }
    puVar31 = (ulong *)param_3[2];
    if (puVar31 == (ulong *)0x0) goto LAB_067b8c80;
LAB_067b8c5f:
    if ((bVar4 & 1) == 0) {
      puVar14 = (ulong *)((long)param_3 + 9);
      puVar16 = (ulong *)unaff_R15[0x28];
      goto joined_r0x067b8cae;
    }
    puVar14 = (ulong *)param_3[3];
    puVar16 = (ulong *)unaff_R15[0x28];
    if (puVar16 == (ulong *)0x0) goto LAB_067b8cb0;
LAB_067b8cd8:
    puVar17 = puVar16 + 0xd;
    puStack_2a0 = (ulong *)0x67b8ce9;
    puStack_290 = puVar16;
    func_0x0412d680(puVar17);
    puVar16 = puVar14;
    param_3 = puVar31;
    puStack_268 = puVar17;
    if ((ulong *)0xfffffffffffffff7 < param_2) goto LAB_067b9921;
    if (param_2 < (ulong *)0x17) {
      _auStack_218 = (ulong *)CONCAT71(stack0xfffffffffffffde9,(char)param_2 * '\x02');
      unaff_R15 = (ulong *)(auStack_218 + 1);
      if (param_2 != (ulong *)0x0) goto LAB_067b8d73;
    }
    else {
      uVar24 = 0x1a;
      if (((ulong)param_2 | 7) != 0x17) {
        uVar24 = ((ulong)param_2 | 7) + 1;
      }
      puStack_2a0 = (ulong *)0x67b8d4b;
      unaff_R15 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar24);
      if (unaff_R15 == (ulong *)0x0) {
        puStack_2a0 = (ulong *)0x67b98b8;
        func_0x0eec74c0(uVar24,0);
      }
      puVar16 = (ulong *)(uVar24 | 1);
      _auStack_218 = puVar16;
      uStack_210 = param_2;
      puStack_208 = unaff_R15;
LAB_067b8d73:
      puStack_2a0 = (ulong *)0x67b8d81;
      func_0x0eee2f00(unaff_R15,puVar15,param_2);
    }
    param_3 = puStack_280;
    puVar17 = puStack_290;
    *(undefined1 *)((long)unaff_R15 + (long)param_2) = 0;
    if ((ulong *)0xfffffffffffffff7 < puVar31) goto LAB_067b9926;
    if (puVar31 < (ulong *)0x17) {
      uStack_200 = (ulong *)CONCAT71(uStack_200._1_7_,(char)puVar31 * '\x02');
      uVar21 = (long)&uStack_200 + 1;
    }
    else {
      uVar24 = 0x1a;
      if (((ulong)puVar31 | 7) != 0x17) {
        uVar24 = ((ulong)puVar31 | 7) + 1;
      }
      puStack_2a0 = (ulong *)0x67b8de2;
      uVar21 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar24);
      if (uVar21 == 0) {
        puStack_2a0 = (ulong *)0x67b98c7;
        func_0x0eec74c0(uVar24,0);
      }
      uStack_200 = (ulong *)(uVar24 | 1);
      uStack_1f8 = puVar31;
      uStack_1f0 = uVar21;
    }
    puStack_2a0 = (ulong *)0x67b8e18;
    func_0x0eee2f00(uVar21,puVar14,puVar31);
    *(undefined1 *)(uVar21 + (long)puVar31) = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    uStack_1d0._0_4_ = *param_8;
    uStack_1d0._4_4_ = param_8[1];
    uStack_1c8 = param_8[2];
    uStack_1c4 = param_8[3];
    uStack_1c0 = param_8[4];
    puVar29 = puVar17 + 0x12;
    puVar16 = (ulong *)puVar17[0x13];
    if (puVar16 != (ulong *)0x0) {
      uVar24 = (long)puVar16 - ((ulong)puVar16 >> 1 & 0x5555555555555555);
      uVar24 = (uVar24 >> 2 & 0x3333333333333333) + (uVar24 & 0x3333333333333333);
      uVar24 = ((uVar24 >> 4) + uVar24 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      if (uVar24 >> 0x38 < 2) {
        puVar31 = (ulong *)((long)puVar16 - 1U & (ulong)param_3);
        puVar8 = *(undefined8 **)(*puVar29 + (long)puVar31 * 8);
      }
      else {
        puVar31 = param_3;
        if (puVar16 <= param_3) {
          if (((ulong)param_3 | (ulong)puVar16) >> 0x20 == 0) {
            puVar31 = (ulong *)(((ulong)param_3 & 0xffffffff) % ((ulong)puVar16 & 0xffffffff));
            puVar8 = *(undefined8 **)(*puVar29 + (long)puVar31 * 8);
            goto joined_r0x067b8fbc;
          }
          puVar31 = (ulong *)((ulong)param_3 % (ulong)puVar16);
        }
        puVar8 = *(undefined8 **)(*puVar29 + (long)puVar31 * 8);
      }
joined_r0x067b8fbc:
      if ((puVar8 != (undefined8 *)0x0) && (puVar15 = (ulong *)*puVar8, puVar15 != (ulong *)0x0)) {
        if ((byte)(uVar24 >> 0x38) < 2) {
          do {
            if ((ulong *)puVar15[1] == param_3) {
              if ((ulong *)puVar15[2] == param_3) goto LAB_067b9418;
            }
            else if ((ulong *)(puVar15[1] & (long)puVar16 - 1U) != puVar31) break;
            puVar15 = (ulong *)*puVar15;
          } while (puVar15 != (ulong *)0x0);
        }
        else {
          do {
            puVar14 = (ulong *)puVar15[1];
            if (puVar14 == param_3) {
              if ((ulong *)puVar15[2] == param_3) goto LAB_067b9418;
            }
            else {
              if (puVar16 <= puVar14) {
                if (((ulong)puVar14 | (ulong)puVar16) >> 0x20 == 0) {
                  if ((ulong *)(((ulong)puVar14 & 0xffffffff) % ((ulong)puVar16 & 0xffffffff)) ==
                      puVar31) goto LAB_067b8f3b;
                  break;
                }
                puVar14 = (ulong *)((ulong)puVar14 % (ulong)puVar16);
              }
              if (puVar14 != puVar31) break;
            }
LAB_067b8f3b:
            puVar15 = (ulong *)*puVar15;
          } while (puVar15 != (ulong *)0x0);
        }
      }
    }
    puStack_2a0 = (ulong *)0x67b8fd8;
    puVar15 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x78);
    if (puVar15 == (ulong *)0x0) {
      puStack_2a0 = (ulong *)0x67b988b;
      func_0x0eec74c0(0x78,0);
    }
    puStack_248 = (ulong *)0x1;
    *puVar15 = 0;
    puVar15[1] = (ulong)param_3;
    puVar15[2] = (ulong)param_3;
    puVar15[0xb] = 0;
    puVar15[0xc] = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[3] = 0;
    puVar15[4] = 0;
    puVar15[5] = 0;
    puVar15[6] = 0;
    puVar15[7] = 0;
    puVar15[8] = 0;
    puVar15[9] = 0;
    puVar15[10] = 0;
    puVar15[0xc] = (ulong)&UNK_01254d89;
    puVar15[0xd] = (ulong)&UNK_01254d89;
    puStack_258 = puVar15;
    puStack_250 = puVar29;
    if ((long)puVar16 < 0) {
      fVar34 = (float)puVar16;
      fVar33 = *(float *)(puVar17 + 0x16);
      if (puVar16 == (ulong *)0x0) goto LAB_067b90b3;
LAB_067b90a6:
      if (fVar34 * fVar33 < (float)(puVar17[0x15] + 1)) goto LAB_067b90b3;
LAB_067b93f7:
      uVar24 = *puVar29;
      puVar14 = *(ulong **)(uVar24 + (long)puVar31 * 8);
      if (puVar14 == (ulong *)0x0) {
        *puVar15 = puVar17[0x14];
        puVar17[0x14] = (ulong)puVar15;
        *(ulong **)(uVar24 + (long)puVar31 * 8) = puVar17 + 0x14;
        if (*puVar15 != 0) {
          puVar14 = *(ulong **)(*puVar15 + 8);
          if (((ulong)puVar16 & (long)puVar16 - 1U) == 0) {
            *(ulong **)(uVar24 + ((ulong)puVar14 & (long)puVar16 - 1U) * 8) = puVar15;
          }
          else {
            if (puVar16 <= puVar14) {
              if (((ulong)puVar14 | (ulong)puVar16) >> 0x20 == 0) {
                *(ulong **)
                 (uVar24 + (((ulong)puVar14 & 0xffffffff) % ((ulong)puVar16 & 0xffffffff)) * 8) =
                     puVar15;
                goto LAB_067b9411;
              }
              puVar14 = (ulong *)((ulong)puVar14 % (ulong)puVar16);
            }
            *(ulong **)(uVar24 + (long)puVar14 * 8) = puVar15;
          }
        }
      }
      else {
        *puVar15 = *puVar14;
        *puVar14 = (ulong)puVar15;
      }
LAB_067b9411:
      puVar17[0x15] = puVar17[0x15] + 1;
LAB_067b9418:
      if ((puVar15[3] & 1) != 0) {
        puStack_2a0 = (ulong *)0x67b9438;
        func_0x0412a280(puVar15[5],puVar15[3] & 0xfffffffffffffffe);
      }
      puVar15[5] = (ulong)puStack_208;
      *(undefined1 (*) [4])(puVar15 + 3) = auStack_218;
      *(uint *)((long)puVar15 + 0x1c) = uStack_214;
      *(uint *)(puVar15 + 4) = (uint)uStack_210;
      *(uint *)((long)puVar15 + 0x24) = uStack_210._4_4_;
      if ((puVar15[6] & 1) != 0) {
        puStack_2a0 = (ulong *)0x67b9478;
        func_0x0412a280(puVar15[8],puVar15[6] & 0xfffffffffffffffe);
      }
      puVar15[8] = uStack_1f0;
      *(uint *)(puVar15 + 6) = (uint)uStack_200;
      *(uint *)((long)puVar15 + 0x34) = uStack_200._4_4_;
      *(uint *)(puVar15 + 7) = (uint)uStack_1f8;
      *(uint *)((long)puVar15 + 0x3c) = uStack_1f8._4_4_;
      if ((puVar15[9] & 1) != 0) {
        puStack_2a0 = (ulong *)0x67b94af;
        func_0x0412a280(puVar15[0xb],puVar15[9] & 0xfffffffffffffffe);
      }
      puVar15[0xb] = uStack_1d8;
      puVar15[9] = uStack_1e8;
      puVar15[10] = uStack_1e0;
      *(uint *)(puVar15 + 0xe) = uStack_1c0;
      *(uint *)(puVar15 + 0xc) = (uint)uStack_1d0;
      *(uint *)((long)puVar15 + 100) = uStack_1d0._4_4_;
      *(uint *)(puVar15 + 0xd) = uStack_1c8;
      *(uint *)((long)puVar15 + 0x6c) = uStack_1c4;
      puStack_2a0 = (ulong *)0x67b94e1;
      func_0x0412d6b0(puStack_268);
      cVar5 = (char)puStack_288[0x16];
      uStack_210 = puStack_288;
      puVar16 = puStack_280;
      goto joined_r0x067b8cb8;
    }
    fVar34 = (float)(long)puVar16;
    fVar33 = *(float *)(puVar17 + 0x16);
    if (puVar16 != (ulong *)0x0) goto LAB_067b90a6;
LAB_067b90b3:
    uVar24 = 1;
    if ((ulong *)0x2 < puVar16) {
      uVar24 = (ulong)(((ulong)puVar16 & (long)puVar16 - 1U) != 0);
    }
    puVar31 = (ulong *)(uVar24 | (long)puVar16 * 2);
    puStack_2a0 = (ulong *)0x67b90dd;
    fVar33 = (float)func_0x0eee3ab0((float)(puVar17[0x15] + 1) / fVar33);
    puVar14 = (ulong *)((long)(fVar33 - _DAT_01198778) & (long)fVar33 >> 0x3f | (long)fVar33);
    if (puVar14 < puVar31) {
      puVar14 = puVar31;
    }
    param_2 = (ulong *)0x2;
    if ((puVar14 == (ulong *)0x1) || (param_2 = puVar14, ((ulong)puVar14 & (long)puVar14 - 1U) == 0)
       ) {
      bVar32 = param_2 < puVar16;
      puVar31 = param_2;
      if (puVar16 < param_2) goto LAB_067b912a;
LAB_067b9248:
      if (bVar32) {
        puStack_2a0 = (ulong *)0x67b92bc;
        fVar33 = (float)func_0x0eee3ab0((float)puStack_290[0x15] / *(float *)(puStack_290 + 0x16));
        puVar31 = (ulong *)((long)(fVar33 - _DAT_01198778) & (long)fVar33 >> 0x3f | (long)fVar33);
        if ((puVar16 < (ulong *)0x3) ||
           (uVar24 = (long)puVar16 - ((ulong)puVar16 >> 1 & 0x5555555555555555),
           uVar24 = (uVar24 >> 2 & 0x3333333333333333) + (uVar24 & 0x3333333333333333),
           1 < (byte)(((uVar24 >> 4) + uVar24 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
          puStack_2a0 = (ulong *)0x67b9367;
          puVar31 = (ulong *)func_0x0412c3f0(puVar31);
        }
        else if ((ulong *)0x1 < puVar31) {
          lVar28 = 0x3f;
          if ((long)puVar31 - 1U != 0) {
            for (; (long)puVar31 - 1U >> lVar28 == 0; lVar28 = lVar28 + -1) {
            }
          }
          puVar31 = (ulong *)(1L << (-((byte)lVar28 ^ 0x3f) & 0x3f));
        }
        puVar14 = puStack_290;
        if (puVar31 < param_2) {
          puVar31 = param_2;
        }
        if (puVar31 < puVar16) {
          if (puVar31 != (ulong *)0x0) goto LAB_067b912a;
          uVar24 = *puVar29;
          *puVar29 = 0;
          if (uVar24 != 0) {
            puStack_2a0 = (ulong *)0x67b93a3;
            func_0x0412a280(uVar24,puStack_290[0x13] << 3);
          }
          puVar14[0x13] = 0;
        }
      }
LAB_067b93ae:
      puVar16 = (ulong *)puStack_290[0x13];
      puVar17 = puStack_290;
      if (((ulong)puVar16 & (long)puVar16 - 1U) == 0) {
        puVar31 = (ulong *)((long)puVar16 - 1U & (ulong)puStack_280);
      }
      else {
        puVar31 = puStack_280;
        if (puVar16 <= puStack_280) {
          if (((ulong)puStack_280 | (ulong)puVar16) >> 0x20 == 0) {
            puVar31 = (ulong *)(((ulong)puStack_280 & 0xffffffff) % ((ulong)puVar16 & 0xffffffff));
          }
          else {
            puVar31 = (ulong *)((ulong)puStack_280 % (ulong)puVar16);
          }
        }
      }
      goto LAB_067b93f7;
    }
    puStack_2a0 = (ulong *)0x67b9230;
    param_2 = (ulong *)func_0x0412c3f0();
    puVar16 = (ulong *)puStack_290[0x13];
    bVar32 = param_2 < puVar16;
    puVar31 = param_2;
    if (param_2 <= puVar16) goto LAB_067b9248;
LAB_067b912a:
    if ((ulong)puVar31 >> 0x3d == 0) {
      lVar28 = (long)puVar31 * 8;
      puStack_2a0 = (ulong *)0x67b9153;
      uVar24 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar28);
      if (uVar24 == 0) {
        puStack_2a0 = (ulong *)0x67b98fc;
        func_0x0eec74c0(lVar28,0);
      }
      puVar16 = puStack_290;
      uVar21 = *puVar29;
      *puVar29 = uVar24;
      if (uVar21 != 0) {
        puStack_2a0 = (ulong *)0x67b917f;
        func_0x0412a280(uVar21,puStack_290[0x13] << 3);
        uVar24 = puVar16[0x12];
      }
      puVar16[0x13] = (ulong)puVar31;
      puStack_2a0 = (ulong *)0x67b919a;
      memset(uVar24,0,lVar28);
      plVar23 = (long *)puVar16[0x14];
      if (plVar23 != (long *)0x0) {
        puVar16 = (ulong *)plVar23[1];
        uVar21 = (long)puVar31 - 1;
        if (((ulong)puVar31 & uVar21) == 0) {
          *(ulong **)(uVar24 + ((ulong)puVar16 & uVar21) * 8) = puStack_290 + 0x14;
          uVar22 = (ulong)puVar16 & uVar21;
          while (plVar12 = plVar23, plVar23 = (long *)*plVar12, plVar23 != (long *)0x0) {
            uVar26 = plVar23[1] & uVar21;
            if (uVar26 != uVar22) {
              if (*(long *)(uVar24 + uVar26 * 8) == 0) {
                *(long **)(uVar24 + uVar26 * 8) = plVar12;
                uVar22 = uVar26;
              }
              else {
                *plVar12 = *plVar23;
                *plVar23 = **(undefined8 **)(uVar24 + uVar26 * 8);
                **(long **)(uVar24 + uVar26 * 8) = (long)plVar23;
                plVar23 = plVar12;
              }
            }
          }
        }
        else {
          if (puVar31 <= puVar16) {
            if (((ulong)puVar16 | (ulong)puVar31) >> 0x20 == 0) {
              puVar16 = (ulong *)(((ulong)puVar16 & 0xffffffff) % ((ulong)puVar31 & 0xffffffff));
            }
            else {
              puVar16 = (ulong *)((ulong)puVar16 % (ulong)puVar31);
            }
          }
          *(ulong **)(uVar24 + (long)puVar16 * 8) = puStack_290 + 0x14;
          plVar12 = (long *)*plVar23;
          while (plVar12 != (long *)0x0) {
            puVar14 = (ulong *)plVar12[1];
            if (puVar31 <= puVar14) {
              if (((ulong)puVar14 | (ulong)puVar31) >> 0x20 == 0) {
                puVar14 = (ulong *)(((ulong)puVar14 & 0xffffffff) % ((ulong)puVar31 & 0xffffffff));
              }
              else {
                puVar14 = (ulong *)((ulong)puVar14 % (ulong)puVar31);
              }
            }
            if (puVar14 != puVar16) {
              if (*(long *)(uVar24 + (long)puVar14 * 8) == 0) {
                *(long **)(uVar24 + (long)puVar14 * 8) = plVar23;
                puVar16 = puVar14;
              }
              else {
                *plVar23 = *plVar12;
                *plVar12 = **(long **)(uVar24 + (long)puVar14 * 8);
                **(undefined8 **)(uVar24 + (long)puVar14 * 8) = plVar12;
                plVar12 = plVar23;
              }
            }
            plVar23 = plVar12;
            plVar12 = (long *)*plVar23;
          }
        }
      }
      goto LAB_067b93ae;
    }
  }
  else {
    puStack_2a0 = (ulong *)0x67b9917;
    func_0x04882e30();
LAB_067b9917:
    puVar15 = unaff_R12;
    puStack_2a0 = (ulong *)0x67b991c;
    func_0x04882e30();
LAB_067b991c:
    puStack_2a0 = (ulong *)0x67b9921;
    func_0x04891200();
LAB_067b9921:
    puStack_2a0 = (ulong *)0x67b9926;
    func_0x04882e30();
    puVar31 = param_3;
LAB_067b9926:
    puStack_2a0 = (ulong *)0x67b992b;
    func_0x04882e30();
    param_3 = puVar16;
    puVar29 = unaff_R15;
LAB_067b992b:
    puStack_2a0 = (ulong *)0x67b9930;
    func_0x067cd9d0();
LAB_067b9930:
    puStack_2a0 = (ulong *)0x67b9935;
    func_0x04882eb0();
  }
  puStack_2a0 = (ulong *)0x67b993a;
  uVar19 = func_0x04882eb0();
  puStack_2a0 = (ulong *)0x67b996e;
  func_0x0488fce0(&plStack_58);
  puStack_2a0 = (ulong *)0x67b997b;
  func_0x048a5170(&plStack_a8);
  puStack_2a0 = (ulong *)0x67b9988;
  func_0x0488b060(&uStack_48);
  puStack_2a0 = (ulong *)0x67b9990;
  uVar19 = func_0x0eee2d70(uVar19);
  if (_auStack_218 != (ulong *)0x0) {
    puStack_2a0 = (ulong *)0x67b99ab;
    (*(code *)_auStack_218[1])(auStack_218);
  }
  puStack_2a0 = (ulong *)0x67b99b8;
  func_0x0488b060(&uStack_88);
  puStack_2a0 = (ulong *)0x67b99c5;
  func_0x0488b060(&uStack_48);
  puStack_2a0 = (ulong *)0x67b99cd;
  uVar19 = func_0x0eee2d70(uVar19);
  puStack_2a0 = (ulong *)0x67b99d5;
  uVar19 = func_0x04882e20(uVar19);
  puStack_2a0 = (ulong *)0x67b99dd;
  uVar19 = func_0x04882e20(uVar19);
  puStack_2a0 = (ulong *)0x67b99ea;
  func_0x068a2bc0(&puStack_258);
  puStack_2a0 = (ulong *)0x67b9a04;
  func_0x067bf570(auStack_218);
  puStack_2a0 = (ulong *)0x67b9a0e;
  func_0x0412d6b0(puStack_268);
  puStack_2a0 = (ulong *)0x67b9a16;
  uVar19 = func_0x0eee2d70(uVar19);
  puStack_2a0 = (ulong *)0x67b9a1e;
  uVar19 = func_0x04882e20(uVar19);
  puStack_2a0 = (ulong *)0x67b9a2e;
  func_0x067beef0(&uStack_210);
  puStack_2a0 = (ulong *)0x67b9a36;
  uVar19 = func_0x0eee2d70(uVar19);
  puStack_2a0 = (ulong *)0x67b9a46;
  func_0x067b9be0(auStack_218);
  puStack_2a0 = (ulong *)0x67b9a4e;
  uVar19 = func_0x0eee2d70(uVar19);
  if (((ulong)_auStack_218 & 1) != 0) {
    puStack_2a0 = (ulong *)0x67b9a74;
    func_0x0412a280(puStack_208,(ulong)_auStack_218 & 0xfffffffffffffffe);
    puStack_2a0 = (ulong *)0x67b9a7e;
    func_0x0412d6b0(puStack_268);
    puStack_2a0 = (ulong *)0x67b9a86;
    uVar19 = func_0x0eee2d70(uVar19);
  }
  puStack_2a0 = (ulong *)0x67b9a93;
  func_0x0412d6b0(puStack_268);
  puStack_2a0 = (ulong *)0x67b9a9b;
  lVar28 = func_0x0eee2d70(uVar19);
  if (((ulong)auStack_168 & 1) != 0) {
    puStack_2a0 = (ulong *)0x67b9aee;
    func_0x0412a280(puStack_158,(ulong)auStack_168 & 0xfffffffffffffffe);
  }
  lVar20 = 0x20;
  plVar23 = alStack_198;
  if ((plStack_178 == plVar23) || (lVar20 = 0x28, plStack_178 != (long *)0x0)) {
    plVar23 = (long *)*plStack_178;
    puStack_2a0 = (ulong *)0x67b9b18;
    (**(code **)((long)plVar23 + lVar20))();
  }
  if ((uStack_1b8 & 1) != 0) {
    puStack_2a0 = (ulong *)0x67b9b3b;
    func_0x0412a280(uStack_1a8,uStack_1b8 & 0xfffffffffffffffe);
  }
  puStack_2a0 = (ulong *)0x67b9b48;
  func_0x067b7330(&uStack_1d0);
  uVar24 = uStack_1d8;
  uStack_1d8 = 0;
  if (uVar24 != 0) goto LAB_067b9b7d;
  if ((uStack_1f0 & 1) != 0) goto LAB_067b9b8c;
  while (((ulong)puStack_208 & 1) == 0) {
    while( true ) {
      puStack_2a0 = (ulong *)0x67b9b7d;
      func_0x0eee2d70(lVar28);
LAB_067b9b7d:
      puStack_2a0 = (ulong *)0x67b9b82;
      func_0x068a1530();
      if ((uStack_1f0 & 1) == 0) break;
LAB_067b9b8c:
      puStack_2a0 = (ulong *)0x67b9ba5;
      func_0x0412a280(uStack_1e0,uStack_1f0 & 0xfffffffffffffffe);
      if (((ulong)puStack_208 & 1) != 0) goto LAB_067b7530;
    }
  }
LAB_067b7530:
  puVar25 = (uint *)((ulong)puStack_208 & 0xfffffffffffffffe);
  puStack_2a0 = (ulong *)0x67b9bc8;
  func_0x0412a280(uStack_1f8);
  puStack_2a0 = (ulong *)0x67b9bd0;
  lVar20 = lVar28;
  func_0x0eee2d70();
  lVar27 = lVar20 + -0x28;
  if (*(char *)(lVar20 + 0x8a) != '\0') {
    return (ulong *)0x0;
  }
  lStack_3e8 = *(long *)(lVar20 + 0x60);
  *(long *)(lVar20 + 0x60) = lStack_3e8 + 1;
  lStack_2c8 = lVar28;
  puStack_2c0 = puVar15;
  puStack_2b8 = param_3;
  puStack_2b0 = puVar31;
  puStack_2a8 = puVar29;
  puStack_2a0 = param_2;
  func_0x067b7c80(&lStack_420,*(undefined8 *)(lVar20 + 0x38),*(undefined8 *)(lVar20 + 0x40),param_5)
  ;
  plVar12 = *(long **)(lVar20 + 0xd8);
  if (plVar12 == (long *)0x0) {
    ppuStack_330 = (undefined **)0x0;
  }
  else if (plVar12 == (long *)(lVar20 + 0xb8)) {
    ppuStack_330 = apuStack_350;
    (**(code **)(*plVar12 + 0x18))();
  }
  else {
    ppuStack_330 = (undefined **)(**(code **)(*plVar12 + 0x10))();
  }
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x100);
  if (plVar12 == (long *)0x0) {
    func_0x0eec74c0(0x100,0);
  }
  lStack_320 = lStack_420;
  if ((uStack_418 & 1) == 0) {
    lStack_308 = lStack_408;
    uStack_318 = uStack_418;
    lStack_310 = lStack_410;
  }
  else {
    func_0x0412e5e0(&uStack_318,lStack_408,lStack_410);
  }
  plStack_358 = extraout_RDX;
  if (ppuStack_330 == (undefined **)0x0) {
    ppuStack_3c0 = (undefined **)0x0;
  }
  else if (ppuStack_330 == apuStack_350) {
    ppuStack_3c0 = &puStack_3e0;
    (**(code **)(*ppuStack_330 + 0x18))();
  }
  else {
    ppuStack_3c0 = ppuStack_330;
    ppuStack_330 = (undefined **)0x0;
  }
  puVar13 = &UNK_0f058e78;
  puStack_390 = &UNK_0f058e78;
  lStack_380 = lStack_3e8;
  plVar12[7] = (long)puStack_280;
  plVar12[5] = (long)puStack_290;
  plVar12[6] = (long)puStack_288;
  *plVar12 = lStack_3e8;
  plVar12[1] = lStack_320;
  plVar12[4] = lStack_308;
  plVar12[2] = uStack_318;
  plVar12[3] = lStack_310;
  uStack_318 = 0;
  lStack_310 = 0;
  lStack_308 = 0;
  plStack_428 = plVar12;
  lStack_388 = lVar27;
  ppuStack_370 = &puStack_390;
  if (ppuStack_3c0 == (undefined **)0x0) {
    plVar12[8] = (long)&UNK_0f058ef8;
    plVar12[0xc] = (long)(plVar12 + 8);
LAB_067b7742:
    plVar12[0x12] = (long)(plVar12 + 0xe);
    (**(code **)(puVar13 + 0x18))(ppuStack_370);
    *(undefined4 *)(plVar12 + 0x14) = 0;
    plVar12[0x15] = 0;
    plVar12[0x16] = 0;
    plVar12[0x17] = 0;
    plVar12[0x18] = 0;
    plVar12[0x19] = 0;
    plVar12[0x1a] = 0;
    plVar12[0x1b] = 0;
    plVar12[0x1c] = 0;
    *(undefined8 *)((long)plVar12 + 0xe3) = 0;
    *(undefined8 *)((long)plVar12 + 0xeb) = 0;
    if (ppuStack_370 == &puStack_390) {
      lVar28 = 0x20;
    }
    else {
      lVar28 = 0x28;
      if (ppuStack_370 == (undefined **)0x0) {
        if (ppuStack_3c0 != &puStack_3e0) goto LAB_067b77ba;
        goto LAB_067b7900;
      }
    }
    (**(code **)(*ppuStack_370 + lVar28))();
    if (ppuStack_3c0 == &puStack_3e0) goto LAB_067b7900;
LAB_067b77ba:
    lVar28 = 0x28;
    if (ppuStack_3c0 != (undefined **)0x0) goto LAB_067b7905;
  }
  else {
    if (ppuStack_3c0 != &puStack_3e0) {
      plVar12[0xc] = (long)ppuStack_3c0;
      ppuStack_3c0 = (undefined **)0x0;
      goto LAB_067b7742;
    }
    plVar12[0xc] = (long)(plVar12 + 8);
    (**(code **)(*ppuStack_3c0 + 0x18))();
    if (ppuStack_370 == (undefined **)0x0) {
      plVar12[0x12] = 0;
    }
    else {
      if (ppuStack_370 == &puStack_390) {
        puVar13 = *ppuStack_370;
        goto LAB_067b7742;
      }
      plVar12[0x12] = (long)ppuStack_370;
      ppuStack_370 = (undefined **)0x0;
    }
    *(undefined4 *)(plVar12 + 0x14) = 0;
    plVar12[0x15] = 0;
    plVar12[0x16] = 0;
    plVar12[0x17] = 0;
    plVar12[0x18] = 0;
    plVar12[0x19] = 0;
    plVar12[0x1a] = 0;
    plVar12[0x1b] = 0;
    plVar12[0x1c] = 0;
    *(undefined8 *)((long)plVar12 + 0xe3) = 0;
    *(undefined8 *)((long)plVar12 + 0xeb) = 0;
    if (ppuStack_3c0 != &puStack_3e0) goto LAB_067b77ba;
LAB_067b7900:
    lVar28 = 0x20;
LAB_067b7905:
    (**(code **)(*ppuStack_3c0 + lVar28))();
  }
  if ((uStack_318 & 1) != 0) {
    func_0x0412a280(lStack_308,uStack_318 & 0xfffffffffffffffe);
  }
  if (ppuStack_330 == apuStack_350) {
    lVar28 = 0x20;
  }
  else {
    lVar28 = 0x28;
    if (ppuStack_330 == (undefined **)0x0) goto LAB_067b7817;
  }
  (**(code **)(*ppuStack_330 + lVar28))();
LAB_067b7817:
  (**(code **)(*plStack_358 + 0x10))(&puStack_390,plStack_358,plVar12);
  puStack_3e0 = puStack_390;
  puStack_390 = (undefined *)0x0;
  uStack_3d8 = 1;
  lStack_3b0 = lStack_420;
  lStack_398 = lStack_408;
  uStack_3a8 = uStack_418;
  lStack_3a0 = lStack_410;
  uStack_418 = 0;
  lStack_410 = 0;
  lStack_408 = 0;
  uStack_3f0 = *(undefined8 *)(puVar25 + 4);
  uStack_400 = *puVar25;
  uStack_3fc = puVar25[1];
  uStack_3f8 = puVar25[2];
  uStack_3f4 = puVar25[3];
  puVar25[0] = 0;
  puVar25[1] = 0;
  puVar25[2] = 0;
  puVar25[3] = 0;
  puVar25[4] = 0;
  puVar25[5] = 0;
  plVar12 = (long *)plVar23[4];
  if (plVar12 == (long *)0x0) {
    plStack_2e0 = (long *)0x0;
  }
  else if (plVar12 == plVar23) {
    plStack_2e0 = alStack_300;
    (**(code **)(*plVar12 + 0x18))();
  }
  else {
    plVar23[4] = 0;
    plStack_2e0 = plVar12;
  }
  puVar16 = (ulong *)FUN_067b7e30(lVar27,lStack_3e8,&lStack_3b0,&uStack_400,&plStack_428,
                                  &puStack_3e0,alStack_300,&puStack_278);
  if (plStack_2e0 == alStack_300) {
    (**(code **)(*plStack_2e0 + 0x20))();
  }
  else if (plStack_2e0 != (long *)0x0) {
    (**(code **)(*plStack_2e0 + 0x28))();
  }
  if ((uStack_400 & 1) != 0) {
    func_0x0412a280(uStack_3f0,CONCAT44(uStack_3fc,uStack_400) & 0xfffffffffffffffe);
  }
  if ((uStack_3a8 & 1) != 0) {
    func_0x0412a280(lStack_398,uStack_3a8 & 0xfffffffffffffffe);
  }
  if ((ulong)uStack_3d8 != 0xffffffff) {
    (**(code **)(&UNK_0f04c750 + (ulong)uStack_3d8 * 8))(apuStack_350,&puStack_3e0);
  }
  if (puStack_390 != (undefined *)0x0) {
    (**(code **)(puStack_390 + 8))();
  }
  if (plStack_428 != (long *)0x0) {
    func_0x068a1530();
  }
  if ((uStack_418 & 1) != 0) {
    func_0x0412a280(lStack_408,uStack_418 & 0xfffffffffffffffe);
  }
  return puVar16;
}


