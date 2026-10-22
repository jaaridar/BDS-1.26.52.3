/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcae2940 (ELF vaddr 0xc9e2940)
 * Label: caller-of-callee
 * Body:  [[0cae2940, 0cae2d31] [0cae2d40, 0cae347d] [0cae3480, 0cae34c8] [0cae34d0, 0cae35b9] [0cae35c0, 0cae3d68] [0cae3d70, 0cae4c23] [0cae4c30, 0cae4cfa] [0cae4d00, 0cae4f80] [0cae4f90, 0cae50c5] [0cae50d0, 0cae5398] [0cae53a0, 0cae54e5] [0cae54f0, 0cae551c] [0cae5520, 0cae5699] [0cae56a0, 0cae57ab] [0cae57b0, 0cae593e] [0cae5940, 0cae5a15] [0cae5a20, 0cae5e47] [0cae5e50, 0cae609a] [0cae60a0, 0cae6129] [0cae6130, 0cae61ea] [0cae61f0, 0cae6285] [0cae6290, 0cae630a]]
 * Ghidra: FUN_0cae2940
 */


/* WARNING: Removing unreachable block (ram,0x0cae4012) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0cae2940(long *param_1,long *param_2,long *param_3,long param_4)

{
  uint *puVar1;
  byte bVar2;
  float *pfVar3;
  float *pfVar4;
  undefined8 uVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  int iVar15;
  int iVar16;
  char cVar17;
  char cVar18;
  undefined2 uVar19;
  int iVar20;
  long *plVar21;
  long *plVar22;
  undefined8 uVar23;
  long *plVar24;
  undefined1 *puVar25;
  long *plVar26;
  long lVar27;
  ulong uVar28;
  int *piVar29;
  byte bVar30;
  int iVar31;
  short *psVar32;
  undefined8 *puVar33;
  undefined1 auVar34 [8];
  ulong uVar35;
  uint uVar36;
  undefined *puVar37;
  ulong uVar38;
  long lVar39;
  ulong uVar40;
  int *piVar41;
  long lVar42;
  short sVar43;
  long *unaff_R13;
  long *unaff_R14;
  undefined *puVar44;
  long lVar45;
  undefined1 auVar46 [8];
  uint uVar47;
  bool bVar48;
  undefined4 uVar49;
  undefined8 extraout_XMM0_Qa;
  undefined4 uVar53;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar54 [16];
  float fVar56;
  undefined1 in_XMM2 [16];
  undefined1 auVar57 [16];
  float fVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined8 in_XMM4_Qa;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [12];
  undefined *puStack_270;
  undefined1 auStack_268 [8];
  float fStack_260;
  float fStack_25c;
  uint uStack_258;
  undefined4 uStack_254;
  char cStack_250;
  undefined8 uStack_248;
  float fStack_240;
  undefined4 uStack_23c;
  undefined1 uStack_238;
  undefined2 uStack_237;
  undefined1 uStack_235;
  undefined4 uStack_234;
  byte bStack_230;
  long *plStack_220;
  long *plStack_218;
  undefined8 uStack_210;
  long *plStack_200;
  undefined1 auStack_1f8 [8];
  float fStack_1f0;
  float fStack_1ec;
  uint uStack_1e8;
  float fStack_1e4;
  ulong uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 uStack_1d0;
  undefined7 uStack_1cf;
  uint uStack_1c8;
  undefined4 uStack_1c4;
  undefined8 uStack_1b8;
  byte bStack_1b0;
  undefined7 uStack_1af;
  undefined8 uStack_1a0;
  byte bStack_190;
  undefined7 uStack_18f;
  undefined8 uStack_180;
  undefined8 uStack_170;
  float fStack_168;
  undefined4 uStack_164;
  undefined1 *puStack_160;
  long *plStack_158;
  long *plStack_150;
  long *plStack_148;
  undefined1 uStack_139;
  long *plStack_138;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  char cStack_110;
  long *plStack_100;
  long *plStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  uint uStack_d8;
  undefined1 *puStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  undefined *puStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  undefined *puStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  uint uStack_78;
  char cStack_70;
  long lStack_68;
  long lStack_60;
  undefined4 uStack_58;
  long lStack_48;
  long lStack_40;
  undefined4 uStack_38;
  undefined1 auVar52 [16];
  undefined1 auVar55 [16];
  
  uVar49 = (undefined4)((ulong)in_XMM4_Qa >> 0x20);
  if (*(char *)((long)param_1 + 0x5a) != '\0') {
    return;
  }
  plStack_a0 = param_3;
  cVar17 = func_0x0412d6a0();
  if (cVar17 == '\0') {
    return;
  }
  plStack_220 = (long *)(**(code **)(*param_2 + 0x150))();
  puStack_270 = (undefined *)(**(code **)(*plStack_220 + 0xa70))();
  auVar62._8_8_ = extraout_XMM0_Qb;
  auVar62._0_8_ = extraout_XMM0_Qa;
  auVar50._4_12_ = auVar62._4_12_;
  uVar53 = (undefined4)((ulong)extraout_XMM0_Qa >> 0x20);
  auVar34 = (undefined1  [8])param_1;
  if (*(int *)((long)param_1 + 0x1114) == 0) {
    auVar50._0_4_ = (float)(int)param_1[7] + _DAT_011985d4;
    auVar52._0_8_ = auVar50._0_8_;
    auVar52._8_4_ = uVar53;
    auVar52._12_4_ = in_XMM2._4_4_;
    auVar51._8_8_ = auVar52._8_8_;
    auVar51._4_4_ = (float)*(int *)((long)param_1 + 0x3c);
    auVar51._0_4_ = auVar50._0_4_;
    fStack_1e4 = (float)(int)param_1[8] + _DAT_011985d4;
    auVar54._0_4_ = (float)*(int *)((long)param_1 + 0x44) + _DAT_011983f0;
    auVar55._4_8_ = 0;
    auVar55._0_4_ = auVar54._0_4_;
    auVar55._12_4_ = uVar49;
    auVar54._8_8_ = auVar55._8_8_;
    auVar54._4_4_ = (float)(int)param_1[9];
    fVar56 = (float)*(int *)((long)param_1 + 0x4c) + _DAT_011983f0;
    auVar59._4_4_ = (float)*(int *)((long)param_1 + 0x3c);
    auVar59._0_4_ = auVar50._0_4_;
    auVar59._8_4_ = uVar53;
    auVar59._12_4_ = in_XMM2._4_4_;
    auVar62 = minps(auVar59,auVar54);
    fStack_1f0 = fStack_1e4;
    if (fVar56 <= fStack_1e4) {
      fStack_1f0 = fVar56;
    }
    auStack_1f8 = auVar62._0_8_;
    auVar62 = maxps(auVar51,auVar54);
    if (fStack_1e4 <= fVar56) {
      fStack_1e4 = fVar56;
    }
    fStack_1ec = auVar62._0_4_;
    uStack_1e8 = auVar62._4_4_;
    cVar17 = (**(code **)(*param_2 + 0x90))(param_2,auStack_1f8,0);
    if (cVar17 != '\0') {
      lVar45 = param_1[0x20];
      lVar27 = (**(code **)(*(long *)param_1[5] + 0xac0))();
      lVar39 = *(long *)(lVar27 + 0x18);
      iVar20 = 0;
      if ((lVar39 != 0) &&
         (iVar20 = 0, 0x1a < (int)((ulong)(*(long *)(lVar27 + 0x20) - lVar39) >> 4) * -0x11111111))
      {
        if (*(int *)(lVar39 + 0x1868) != 2) goto LAB_0cae62c2;
        iVar20 = *(int *)(lVar39 + 0x1864);
      }
      auStack_1f8 = (undefined1  [8])(long)(iVar20 + *(int *)(lVar45 + 8));
      cVar17 = func_0x0c9e4770(param_1[0x1f],param_2,plStack_a0,100,1);
      if ((cVar17 != '\0') ||
         (cVar17 = func_0x0c9e4770(param_1[0x20],param_2,auStack_1f8,100,1), cVar17 != '\0')) {
        lVar45 = param_1[0x222];
        *(int *)(param_1 + 0x222) = (int)lVar45 + 1;
        if ((int)lVar45 < 200) goto LAB_0cae624d;
      }
      *(undefined4 *)((long)param_1 + 0x1114) = 1;
    }
    goto LAB_0cae624d;
  }
  if ((*(byte *)(param_1 + 0xe) & 1) == 0) {
    if (*(byte *)(param_1 + 0xe) >> 1 != 0) goto LAB_0cae2b63;
  }
  else if (param_1[0xf] != 0) {
LAB_0cae2b63:
    iVar20 = (int)param_1[10] * 0x10;
    iVar31 = *(int *)((long)param_1 + 0x54) * 0x10;
    fStack_1ec = (float)iVar20;
    fStack_1e4 = (float)iVar31;
    fVar56 = (float)(iVar20 + 0x10);
    fVar58 = (float)(iVar31 + 0x10);
    auStack_1f8._0_4_ = fStack_1ec;
    if (fVar56 <= fStack_1ec) {
      auStack_1f8._0_4_ = fVar56;
    }
    fStack_1f0 = fStack_1e4;
    if (fVar58 <= fStack_1e4) {
      fStack_1f0 = fVar58;
    }
    if (fStack_1ec <= fVar56) {
      fStack_1ec = fVar56;
    }
    if (fStack_1e4 <= fVar58) {
      fStack_1e4 = fVar58;
    }
    uStack_1e8 = 0x47c35000;
    auStack_1f8._4_4_ = 0xc7c35000;
    cVar17 = (**(code **)(*param_2 + 0x90))(param_2,auStack_1f8,0);
    if (cVar17 != '\0') {
      if ((*(byte *)(param_1 + 0x11) & 1) == 0) {
        *(undefined2 *)(param_1 + 0x11) = 0;
      }
      else {
        *(undefined1 *)param_1[0x13] = 0;
        param_1[0x12] = 0;
      }
      puStack_270 = (undefined *)((long)param_1 + 0x71);
      puVar44 = (undefined *)param_1[0x10];
      plStack_a8 = (long *)param_1[0xf];
      puStack_b0 = puVar44;
      if ((*(byte *)(param_1 + 0xe) & 1) == 0) {
        puStack_b0 = puStack_270;
        plStack_a8 = (long *)(ulong)(*(byte *)(param_1 + 0xe) >> 1);
      }
      uStack_c0 = (long *)&UNK_0ef9fd98;
      plStack_b8 = (long *)0x0;
      if (plStack_a8 != (long *)0x0) {
        plStack_150 = param_1 + 0x11;
        plStack_158 = param_1 + 0x14;
        plStack_218 = (long *)auStack_268;
        do {
          unaff_R14 = plStack_a8;
          unaff_R13 = plStack_b8;
          if ((*(byte *)(param_1 + 0xe) & 1) == 0) {
            auVar34 = (undefined1  [8])(ulong)(*(byte *)(param_1 + 0xe) >> 1);
          }
          else {
            auVar34 = (undefined1  [8])param_1[0xf];
          }
          func_0x0d6c71b0(&plStack_148,&uStack_c0);
          uVar23 = (**(code **)(*(long *)param_1[5] + 0x908))();
          puStack_98 = &UNK_0f087d20;
          func_0x0b052690(auStack_1f8,uVar23,plStack_148,&puStack_98,param_1[6] + 0xa8,param_1);
          bVar48 = true;
          if ((byte)uStack_1e0 == 1) {
            lVar45 = CONCAT44(fStack_1ec,fStack_1f0);
            plVar24 = (long *)(*(long *)(lVar45 + 0x38) +
                              (ulong)((int)((ulong)(*(long *)(lVar45 + 0x40) -
                                                   *(long *)(lVar45 + 0x38)) >> 3) - 1U & 0x85b93800
                                     ) * 8);
            do {
              if (*plVar24 == -1) goto LAB_0cae3cf0;
              lVar39 = *plVar24 * 0x20;
              plVar24 = (long *)(*(long *)(lVar45 + 0x50) + lVar39);
            } while (*(int *)(*(long *)(lVar45 + 0x50) + 8 + lVar39) != -0x7a46c800);
            if ((plVar24 != *(long **)(lVar45 + 0x58)) && (lVar45 = plVar24[2], lVar45 != 0)) {
              uVar35 = (ulong)((uStack_1e8 & 0x3ffff) >> 0xb);
              if (((uVar35 < (ulong)(*(long *)(lVar45 + 0x10) - *(long *)(lVar45 + 8) >> 3)) &&
                  (((lVar39 = *(long *)(*(long *)(lVar45 + 8) + uVar35 * 8), lVar39 != 0 &&
                    (uVar47 = *(uint *)(lVar39 + (ulong)(uStack_1e8 & 0x7ff) * 4),
                    (uStack_1e8 & 0xfffc0000 ^ uVar47) < 0x3ffff)) &&
                   (lVar45 = *(long *)(*(long *)(lVar45 + 0x50) + (ulong)(uVar47 >> 4 & 0x3ff8)),
                   lVar45 != 0)))) &&
                 (plVar24 = *(long **)(lVar45 + (ulong)(uVar47 & 0x7f) * 8),
                 *(char *)((long)plVar24 + 0x251) == '\0')) {
                if ((*(byte *)(plVar24 + 0x40) & 4) != 0) {
                  *(undefined1 *)((long)plVar24 + 0x1aa) = 1;
                }
                uVar5 = *(undefined8 *)plVar24[0x41];
                fVar56 = *(float *)((undefined8 *)plVar24[0x41] + 1);
                uStack_e0._0_4_ = (float)uVar5;
                fVar58 = (float)(*(int *)((long)param_1 + 0x44) + 1);
                uVar47 = -(uint)(fVar58 < (float)uStack_e0);
                if ((float)uStack_e0 <= (float)(int)param_1[7]) {
                  uStack_e0._0_4_ = (float)(int)param_1[7];
                }
                uStack_e0 = CONCAT44((int)((ulong)uVar5 >> 0x20),
                                     uVar47 & (uint)fVar58 | ~uVar47 & (uint)(float)uStack_e0);
                fVar58 = (float)(*(int *)((long)param_1 + 0x4c) + 1);
                uVar47 = -(uint)(fVar58 < fVar56);
                if (fVar56 <= (float)(int)param_1[8]) {
                  fVar56 = (float)(int)param_1[8];
                }
                uStack_d8 = uVar47 & (uint)fVar58 | ~uVar47 & (uint)fVar56;
                plStack_220 = plVar24;
                func_0x0bf4a220(&uStack_e0,&UNK_012685d1);
                func_0x0bf4a220(&uStack_e0,&UNK_011c6e69);
                puVar33 = (undefined8 *)plStack_220[0x41];
                *(uint *)(puVar33 + 1) = uStack_d8;
                *puVar33 = uStack_e0;
                lVar45 = plStack_220[2];
                uVar47 = *(uint *)(plStack_220 + 3);
                lVar39 = *(long *)(lVar45 + 0x38);
                iVar20 = (int)((ulong)(*(long *)(lVar45 + 0x40) - lVar39) >> 3);
                plVar24 = (long *)(lVar39 + (ulong)(iVar20 - 1U & 0x7ee81405) * 8);
                lVar27 = *(long *)(lVar45 + 0x50);
                do {
                  if (*plVar24 == -1) {
                    plVar26 = *(long **)(lVar45 + 0x58);
                    plVar24 = plVar26;
                    goto LAB_0cae37a0;
                  }
                  lVar42 = *plVar24 * 0x20;
                  plVar24 = (long *)(lVar27 + lVar42);
                } while (*(int *)(lVar27 + 8 + lVar42) != 0x7ee81405);
                plVar26 = *(long **)(lVar45 + 0x58);
LAB_0cae37a0:
                if ((plVar24 == plVar26) || (lVar45 = plVar24[2], lVar45 == 0)) {
LAB_0cae37fe:
                  plVar24 = (long *)(lVar39 + (ulong)(iVar20 - 1U & 0x8dab9612) * 8);
                  do {
                    lVar45 = *plVar24;
                    plVar24 = plVar26;
                    if (lVar45 == -1) break;
                    lVar45 = lVar45 * 0x20;
                    plVar24 = (long *)(lVar27 + lVar45);
                  } while (*(int *)(lVar27 + 8 + lVar45) != -0x725469ee);
                  if ((plVar24 == plVar26) || (lVar45 = plVar24[2], lVar45 == 0)) {
LAB_0cae38dd:
                    plVar24 = (long *)param_1[5];
LAB_0cae38e6:
                    auStack_268 = (undefined1  [8])((ulong)(uint7)auStack_268._1_7_ << 8);
                    cStack_250 = (byte)uStack_1e0 == '\x01';
                    if ((bool)cStack_250) {
                      auStack_268 = auStack_1f8;
                      fStack_260 = fStack_1f0;
                      fStack_25c = fStack_1ec;
                      uStack_258 = uStack_1e8;
                      uStack_1e0 = (ulong)uStack_1e0._1_7_ << 8;
                    }
                    plVar24 = (long *)(**(code **)(*plVar24 + 0x160))(plVar24,param_2,plStack_218);
                  }
                  else {
                    uVar35 = (ulong)((uVar47 & 0x3ffff) >> 0xb);
                    if (((ulong)(*(long *)(lVar45 + 0x10) - *(long *)(lVar45 + 8) >> 3) <= uVar35)
                       || (lVar45 = *(long *)(*(long *)(lVar45 + 8) + uVar35 * 8), lVar45 == 0))
                    goto LAB_0cae38dd;
                    plVar24 = (long *)param_1[5];
                    if (0x3fffe < (uVar47 & 0xfffc0000 ^
                                  *(uint *)(lVar45 + (ulong)(uVar47 & 0x7ff) * 4)))
                    goto LAB_0cae38e6;
                    auStack_268 = (undefined1  [8])((ulong)(uint7)auStack_268._1_7_ << 8);
                    cStack_250 = (byte)uStack_1e0 == '\x01';
                    if ((bool)cStack_250) {
                      auStack_268 = auStack_1f8;
                      fStack_260 = fStack_1f0;
                      fStack_25c = fStack_1ec;
                      uStack_258 = uStack_1e8;
                      uStack_1e0 = (ulong)uStack_1e0._1_7_ << 8;
                    }
                    plVar24 = (long *)(**(code **)(*plVar24 + 0x168))(plVar24,param_2,plStack_218);
                  }
                  if ((char)plStack_218[3] == '\x01') {
                    lVar45 = *plStack_218;
                    puVar1 = (uint *)(plStack_218 + 2);
                    *(undefined1 *)(plStack_218 + 3) = 0;
                    uStack_248._0_4_ = *puVar1;
                    func_0x0d87c640(lVar45 + 0x28,&uStack_248);
                  }
                  if (plVar24 != (long *)0x0) {
                    plStack_f8 = plVar24;
                    func_0x0b3f8f00(plVar24,plStack_148,plStack_158,&puStack_98);
                    uStack_170 = 0x676e696469520c;
                    if (plStack_148 != (long *)0x0) {
                      plStack_138 = plStack_f8;
                      plVar24 = plStack_148;
                      while( true ) {
                        bVar48 = (uStack_170 & 1) == 0;
                        puVar25 = puStack_160;
                        if (bVar48) {
                          puVar25 = (undefined1 *)((long)&uStack_170 + 1);
                        }
                        uVar35 = uStack_170 >> 1 & 0x7f;
                        if (!bVar48) {
                          uVar35 = CONCAT44(uStack_164,fStack_168);
                        }
                        uStack_248._0_4_ = (uint)puVar25;
                        uStack_248._4_4_ = (int)((ulong)puVar25 >> 0x20);
                        fStack_240 = (float)uVar35;
                        uStack_23c = (undefined4)(uVar35 >> 0x20);
                        plStack_220 = plVar24 + 1;
                        plVar26 = (long *)func_0x0d6c97a0(plStack_220,&uStack_248);
                        plStack_200 = plVar24 + 2;
                        if (plVar26 == plStack_200) break;
                        if ((ulong)*(uint *)(plVar26 + 0xc) == 0xffffffff) goto LAB_0cae62b8;
                        puStack_d0 = &uStack_139;
                        plVar26 = (long *)(**(code **)(&UNK_0f47e980 +
                                                      (ulong)*(uint *)(plVar26 + 0xc) * 8))
                                                    (&puStack_d0,plVar26 + 7);
                        if ((plVar26 == (long *)0x0) ||
                           (cVar17 = (**(code **)(*plVar26 + 0x30))(plVar26), cVar17 != '\n'))
                        break;
                        uStack_c8 = CONCAT44(uStack_164,fStack_168);
                        puStack_d0 = puStack_160;
                        if ((uStack_170 & 1) == 0) {
                          puStack_d0 = (undefined1 *)((long)&uStack_170 + 1);
                          uStack_c8 = uStack_170 >> 1 & 0x7f;
                        }
                        plVar26 = (long *)func_0x0d6c9880(plStack_220,&puStack_d0);
                        if (plVar26 == plStack_200) {
                          plVar21 = (long *)0x0;
                        }
                        else {
                          plVar21 = plVar26 + 7;
                          if ((int)plVar26[0xc] != 10) {
                            plVar21 = (long *)0x0;
                          }
                        }
                        func_0x0b052690(&uStack_248,uVar23,plVar21,&puStack_98,param_1[6] + 0xa8,0);
                        if (bStack_230 != 0) {
                          uStack_128 = CONCAT44(uStack_248._4_4_,(uint)uStack_248);
                          uStack_120 = CONCAT44(uStack_23c,fStack_240);
                          uStack_118 = CONCAT13(uStack_235,CONCAT21(uStack_237,uStack_238));
                          cStack_110 = '\x01';
                          bStack_230 = 0;
                          plVar24 = (long *)(**(code **)(*(long *)param_1[5] + 0x160))
                                                      ((long *)param_1[5],param_2,&uStack_128);
                          if (cStack_110 == '\x01') {
                            cStack_110 = '\0';
                            puStack_d0 = (undefined1 *)CONCAT44(puStack_d0._4_4_,uStack_118);
                            func_0x0d87c640(uStack_128 + 0x28,&puStack_d0);
                          }
                          if (plVar24 != (long *)0x0) {
                            (**(code **)(*plStack_138 + 0xe0))(plStack_138,plVar24,0);
                            plStack_138 = plVar24;
                          }
                          uStack_c8 = CONCAT44(uStack_164,fStack_168);
                          puStack_d0 = puStack_160;
                          if ((uStack_170 & 1) == 0) {
                            puStack_d0 = (undefined1 *)((long)&uStack_170 + 1);
                            uStack_c8 = uStack_170 >> 1 & 0x7f;
                          }
                          plVar26 = (long *)func_0x0d6c9880(plStack_220,&puStack_d0);
                          if (plVar26 == plStack_200) {
                            plVar24 = (long *)0x0;
                          }
                          else {
                            plVar24 = plVar26 + 7;
                            if ((int)plVar26[0xc] != 10) {
                              plVar24 = (long *)0x0;
                            }
                          }
                        }
                        if ((bStack_230 & 1) != 0) {
                          bStack_230 = 0;
                          puStack_d0 = (undefined1 *)
                                       CONCAT44(puStack_d0._4_4_,
                                                CONCAT13(uStack_235,CONCAT21(uStack_237,uStack_238))
                                               );
                          func_0x0d87c640(CONCAT44(uStack_248._4_4_,(uint)uStack_248) + 0x28,
                                          &puStack_d0);
                        }
                        if (plVar24 == (long *)0x0) break;
                      }
                    }
                    plVar24 = plStack_f8;
                    cVar17 = func_0x0b40b3a0(plStack_f8,param_2);
                    if (cVar17 != '\0') {
                      func_0x0d879c70(plVar24 + 1,0x1d,1);
                      (**(code **)(*plVar24 + 0x1c0))(plVar24,1);
                    }
                    if ((uStack_170 & 1) != 0) {
                      func_0x0412a280(puStack_160,uStack_170 & 0xfffffffffffffffe);
                    }
                  }
                }
                else {
                  uVar35 = (ulong)((uVar47 & 0x3ffff) >> 0xb);
                  if (((ulong)(*(long *)(lVar45 + 0x10) - *(long *)(lVar45 + 8) >> 3) <= uVar35) ||
                     ((lVar45 = *(long *)(*(long *)(lVar45 + 8) + uVar35 * 8), lVar45 == 0 ||
                      (0x3fffe < (uVar47 & 0xfffc0000 ^
                                 *(uint *)(lVar45 + (ulong)(uVar47 & 0x7ff) * 4))))))
                  goto LAB_0cae37fe;
                }
                bVar48 = false;
              }
            }
          }
LAB_0cae3cf0:
          if (((byte)uStack_1e0 & 1) != 0) {
            uStack_1e0 = uStack_1e0 & 0xffffffffffffff00;
            uStack_248._0_4_ = uStack_1e8;
            func_0x0d87c640((long *)((long)auStack_1f8 + 0x28),&uStack_248);
          }
          plVar24 = plStack_148;
          plStack_148 = (long *)0x0;
          if (plVar24 != (long *)0x0) {
            (**(code **)(*plVar24 + 8))();
          }
          if (bVar48) {
            bVar30 = *(byte *)(param_1 + 0xe);
            if ((bVar30 & 1) == 0) {
              uVar35 = (ulong)(bVar30 >> 1);
            }
            else {
              uVar35 = param_1[0xf];
            }
            puVar44 = (undefined *)((long)auVar34 + ((long)unaff_R13 - (long)unaff_R14));
            if ((undefined *)((long)plStack_b8 + (uVar35 - (long)plStack_a8)) != puVar44) {
              puVar37 = puStack_270;
              if ((bVar30 & 1) != 0) {
                puVar37 = (undefined *)param_1[0x10];
              }
              func_0x0412f8c0(plStack_150,puVar37 + (long)puVar44);
            }
          }
        } while (plStack_a8 != plStack_b8);
        puVar44 = (undefined *)param_1[0x10];
      }
      uVar35 = param_1[0xe];
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      param_1[0x10] = 0;
      if ((uVar35 & 1) != 0) {
        func_0x0412a280(puVar44,uVar35 & 0xfffffffffffffffe);
      }
      *(undefined1 *)((long)param_1 + 0x14e6) = 1;
      goto LAB_0cae624d;
    }
  }
  if (*(char *)((long)param_1 + 0x14e6) == '\0') {
    if ((*(byte *)(param_1 + 0xe) & 1) == 0) {
      if (*(byte *)(param_1 + 0xe) >> 1 == 0) goto LAB_0cae2c58;
    }
    else if (param_1[0xf] == 0) {
LAB_0cae2c58:
      iVar20 = (int)param_1[10] * 0x10;
      iVar31 = *(int *)((long)param_1 + 0x54) * 0x10;
      fStack_1ec = (float)iVar20;
      fStack_1e4 = (float)iVar31;
      fVar56 = (float)(iVar20 + 0x10);
      fVar58 = (float)(iVar31 + 0x10);
      auStack_1f8._0_4_ = fStack_1ec;
      if (fVar56 <= fStack_1ec) {
        auStack_1f8._0_4_ = fVar56;
      }
      fStack_1f0 = fStack_1e4;
      if (fVar58 <= fStack_1e4) {
        fStack_1f0 = fVar58;
      }
      if (fStack_1ec <= fVar56) {
        fStack_1ec = fVar56;
      }
      if (fStack_1e4 <= fVar58) {
        fStack_1e4 = fVar58;
      }
      uStack_1e8 = 0x47c35000;
      auStack_1f8._4_4_ = 0xc7c35000;
      cVar17 = (**(code **)(*param_2 + 0x90))(param_2,auStack_1f8,0);
      if (cVar17 != '\0') {
        *(undefined1 *)((long)param_1 + 0x14e6) = 1;
      }
    }
  }
  plVar26 = plStack_220;
  plVar24 = (long *)param_1[0x14];
  unaff_R14 = (long *)param_1[0x15];
  if (unaff_R14 != plVar24) {
    do {
      if (plVar24[1] == plVar24[2]) {
        lVar45 = (long)unaff_R14 - (long)(plVar24 + 4);
joined_r0x0cae2d47:
        if (lVar45 != 0) {
          func_0x0eee2ee0(plVar24,plVar24 + 4,lVar45);
        }
        puVar44 = (undefined *)(lVar45 + (long)plVar24);
        plVar24 = plVar24 + -4;
        param_1[0x15] = (long)puVar44;
      }
      else {
        unaff_R13 = (long *)(**(code **)(*plVar26 + 0x1f8))(plVar26,plVar24[1],0);
        plVar21 = (long *)(**(code **)(*plVar26 + 0x1f8))(plVar26,plVar24[2],0);
        if ((unaff_R13 != (long *)0x0) && (plVar21 != (long *)0x0)) {
          plVar22 = (long *)func_0x0b3cf140(plVar21);
          bVar48 = plVar22 != (long *)0x0;
          if (plVar22 != unaff_R13 && bVar48) {
            do {
              plVar22 = (long *)func_0x0b3cf140(plVar22);
              bVar48 = plVar22 != (long *)0x0;
              if (plVar22 == unaff_R13) break;
            } while (plVar22 != (long *)0x0);
          }
          if (!bVar48) {
            lVar45 = plVar21[2];
            uVar47 = *(uint *)(plVar21 + 3);
            plVar22 = (long *)(*(long *)(lVar45 + 0x38) +
                              (ulong)((int)((ulong)(*(long *)(lVar45 + 0x40) -
                                                   *(long *)(lVar45 + 0x38)) >> 3) - 1U & 0xf95d258f
                                     ) * 8);
            do {
              if (*plVar22 == -1) goto LAB_0cae2efb;
              lVar39 = *plVar22 * 0x20;
              plVar22 = (long *)(*(long *)(lVar45 + 0x50) + lVar39);
            } while (*(int *)(*(long *)(lVar45 + 0x50) + 8 + lVar39) != -0x6a2da71);
            if ((plVar22 != *(long **)(lVar45 + 0x58)) && (lVar45 = plVar22[2], lVar45 != 0)) {
              uVar35 = (ulong)((uVar47 & 0x3ffff) >> 0xb);
              if ((uVar35 < (ulong)(*(long *)(lVar45 + 0x10) - *(long *)(lVar45 + 8) >> 3)) &&
                 ((lVar45 = *(long *)(*(long *)(lVar45 + 8) + uVar35 * 8), lVar45 != 0 &&
                  ((uVar47 & 0xfffc0000 ^ *(uint *)(lVar45 + (ulong)(uVar47 & 0x7ff) * 4)) < 0x3ffff
                  )))) {
                pfVar3 = (float *)plVar21[0x41];
                pfVar4 = (float *)unaff_R13[0x41];
                if (_DAT_01198634 <=
                    SQRT((pfVar3[2] - pfVar4[2]) * (pfVar3[2] - pfVar4[2]) +
                         (*pfVar3 - *pfVar4) * (*pfVar3 - *pfVar4) +
                         (pfVar3[1] - pfVar4[1]) * (pfVar3[1] - pfVar4[1]))) goto LAB_0cae2d63;
              }
            }
LAB_0cae2efb:
            (**(code **)(*plVar21 + 0xe0))(plVar21,unaff_R13,0);
            lVar45 = param_1[0x15] - (long)(plVar24 + 4);
            goto joined_r0x0cae2d47;
          }
        }
      }
LAB_0cae2d63:
      plVar24 = plVar24 + 4;
      unaff_R14 = (long *)param_1[0x15];
    } while (plVar24 != unaff_R14);
  }
  if (*(int *)((long)param_1 + 0x1114) == 1) {
    lVar45 = param_1[0x1f];
    if (*(long *)(lVar45 + 0x48) != *(long *)(lVar45 + 0x40)) {
      unaff_R14 = (long *)(lVar45 + 0x40);
      unaff_R13 = (long *)auStack_1f8;
      do {
        func_0x0c9e4e90(unaff_R13,unaff_R14);
        func_0x0c9e55c0(lVar45 + 0x10,unaff_R13);
      } while (*(long *)(lVar45 + 0x48) != *(long *)(lVar45 + 0x40));
    }
    lVar45 = param_1[0x20];
    if (*(long *)(lVar45 + 0x48) != *(long *)(lVar45 + 0x40)) {
      unaff_R14 = (long *)(lVar45 + 0x40);
      unaff_R13 = (long *)auStack_1f8;
      do {
        func_0x0c9e4e90(unaff_R13,unaff_R14);
        func_0x0c9e55c0(lVar45 + 0x10,unaff_R13);
      } while (*(long *)(lVar45 + 0x48) != *(long *)(lVar45 + 0x40));
    }
    lVar39 = (**(code **)(*(long *)param_1[5] + 0xab8))();
    lVar45 = *(long *)(lVar39 + 0x18);
    if ((lVar45 != 0) && (7 < (int)((ulong)(*(long *)(lVar39 + 0x20) - lVar45) >> 4) * -0x11111111))
    {
      if (*(int *)(lVar45 + 0x698) != 1) goto LAB_0cae62b3;
      if (*(char *)(lVar45 + 0x694) == '\x01') {
        uVar23 = (**(code **)(*(long *)param_1[5] + 0x440))();
        auStack_1f8 = (undefined1  [8])&UNK_0f45e800;
        fStack_1f0 = 6.041528e-30;
        fStack_1ec = 0.0;
        uStack_1e8 = 0x7f4a7c15;
        fStack_1e4 = -9.713111e-21;
        uStack_1e0 = 0x6a09e667f3bcc909;
        uStack_1d8 = 0;
        uStack_1d0 = 0;
        uStack_1c8 = 1;
        func_0x0d2d5c30(auStack_1f8,uVar23,(int)param_1[7],(int)param_1[8]);
        uStack_248._0_4_ = (int)param_1[10] << 4 | 8;
        fStack_240 = (float)(*(int *)((long)param_1 + 0x54) << 4 | 8);
        uStack_248._4_4_ = 0;
        auStack_268 = (undefined1  [8])&UNK_0cb142f0;
        fStack_260 = 2.6721413e-31;
        fStack_25c = 0.0;
        uVar19 = (**(code **)(*param_2 + 0x178))(param_2,auStack_268,&uStack_248);
        auStack_268 = (undefined1  [8])(long)CONCAT24(uVar19,(uint)uStack_248);
        fStack_260 = fStack_240;
        unaff_R14 = (long *)func_0x0c9e2ed0(param_2,auStack_268);
        plVar24 = (long *)(**(code **)(*plStack_220 + 0xb0))();
        (**(code **)(*plVar24 + 0xa8))(plVar24,param_2,unaff_R14,param_1[10],auStack_1f8);
        if (*(char *)((long)param_1 + 0x6e) == '\0') {
          plVar24 = (long *)func_0x0ca61380(param_1[6]);
          (**(code **)(*plVar24 + 0x80))
                    (plVar24,param_2,(int)param_1[7],(int)param_1[8],puStack_270);
          plVar24 = (long *)func_0x0ca61380(param_1[6]);
          fStack_260 = *(float *)(param_1 + 8);
          auStack_268 = (undefined1  [8])param_1[7];
          fStack_25c = (float)*(undefined8 *)((long)param_1 + 0x44);
          uStack_258 = (uint)((ulong)*(undefined8 *)((long)param_1 + 0x44) >> 0x20);
          uStack_254 = *(undefined4 *)((long)param_1 + 0x4c);
          (**(code **)(*plVar24 + 0x88))(plVar24,param_2,auStack_268);
        }
        if ((ulong)uStack_1c8 != 0xffffffff) {
          (**(code **)(&UNK_0f3efd40 + (ulong)uStack_1c8 * 8))(auStack_268,&fStack_1f0);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x1114) = 2;
  }
  cVar17 = (**(code **)(*plStack_220 + 0x9f0))();
  if (cVar17 == '\0') {
    if (*(long **)(param_4 + 0x20) == (long *)0x0) goto LAB_0cae62ae;
    (**(code **)(**(long **)(param_4 + 0x20) + 0x30))();
    unaff_R14 = (long *)(**(code **)(*param_2 + 0x150))();
    plStack_200 = (long *)(**(code **)(*unaff_R14 + 0xa70))(unaff_R14);
    plStack_150._0_4_ = (uint)param_1[10];
    plStack_158._0_4_ = *(int *)((long)param_1 + 0x54);
    lVar45 = (**(code **)(*param_2 + 0x130))();
    auVar7._8_4_ = fStack_1f0;
    auVar7._0_8_ = auStack_1f8;
    auVar6._8_4_ = fStack_260;
    auVar6._0_8_ = auStack_268;
    plStack_150 = (long *)CONCAT44(plStack_150._4_4_,(uint)plStack_150 << 4);
    plStack_158 = (long *)CONCAT44(plStack_158._4_4_,(uint)plStack_158 << 4);
    puStack_270 = *(undefined **)(lVar45 + 0x1b8);
    uStack_248 = CONCAT44(uStack_248._4_4_,(uint)uStack_248);
    if (*(char *)(*(long *)(puStack_270 + 0x58) + 0xe0) != '\x01') goto LAB_0cae4bb1;
    fVar56 = (float)*(undefined8 *)(puStack_270 + 0x34);
    fVar58 = (float)*(undefined8 *)(puStack_270 + 0x40);
    uStack_248 = CONCAT44(uStack_248._4_4_,(uint)uStack_248);
    _auStack_268 = auVar6;
    _auStack_1f8 = auVar7;
    if ((((float)((ulong)*(undefined8 *)(puStack_270 + 0x34) >> 0x20) - fVar56) + fVar56) *
        (((float)((ulong)*(undefined8 *)(puStack_270 + 0x40) >> 0x20) - fVar58) + fVar58) <=
        _DAT_011983f4) goto LAB_0cae4bb1;
    iVar20 = (**(code **)(*plStack_200 + 0x18))(plStack_200,100000);
    if (iVar20 != 0) goto LAB_0cae4bb1;
    _DAT_0f544f48 = _DAT_0f544f48 * 3 + 0x3c6ef35f;
    LOCK();
    UNLOCK();
    uStack_128 = CONCAT44((_DAT_0f544f48 >> 0x12 & 0xf) + (int)param_1[9],
                          _DAT_0f544f48 >> 2 & 0xf | (uint)plStack_150);
    uStack_120 = CONCAT44(uStack_120._4_4_,_DAT_0f544f48 >> 10 & 0xf | (uint)plStack_158);
    lVar45 = (**(code **)(*param_2 + 0x138))(param_2,&uStack_128);
    if (lVar45 == 0) {
      auVar63._8_4_ = 0xffffffff;
      auVar63._0_8_ = 0xffffffffffffffff;
    }
    else {
      auStack_1f8 = (undefined1  [8])
                    (CONCAT71(auStack_1f8._1_7_,(undefined1)uStack_128) & 0xffffffffffffff0f);
      auStack_1f8 = (undefined1  [8])
                    (CONCAT62(auStack_1f8._2_6_,CONCAT11((undefined1)uStack_120,auStack_1f8[0])) &
                    0xffffffffffff0fff);
      auStack_1f8._2_2_ = uStack_128._4_2_ - *(short *)(*(long *)(lVar45 + 0x30) + 0xa8);
      auVar63 = func_0x0cafbac0(lVar45,auStack_1f8);
    }
    fStack_240 = auVar63._8_4_;
    uStack_248._0_4_ = auVar63._0_4_;
    uStack_248._4_4_ = auVar63._4_4_;
    fStack_1e4 = (float)(int)param_1[8];
    fVar56 = (float)*(int *)((long)param_1 + 0x4c);
    auVar57._0_8_ = CONCAT44((float)(int)((ulong)param_1[7] >> 0x20),(float)(int)param_1[7]);
    auVar57._8_8_ = 0;
    auVar60._0_4_ = (float)(int)*(undefined8 *)((long)param_1 + 0x44);
    auVar60._4_4_ = (float)(int)((ulong)*(undefined8 *)((long)param_1 + 0x44) >> 0x20);
    auVar60._8_8_ = 0;
    auVar61._8_8_ = 0;
    auVar61._0_8_ = auVar57._0_8_;
    auVar62 = minps(auVar61,auVar60);
    fStack_1f0 = fStack_1e4;
    if (fVar56 <= fStack_1e4) {
      fStack_1f0 = fVar56;
    }
    auStack_1f8 = auVar62._0_8_;
    auVar62 = maxps(auVar57,auVar60);
    if (fStack_1e4 <= fVar56) {
      fStack_1e4 = fVar56;
    }
    fStack_1ec = auVar62._0_4_;
    uStack_1e8 = auVar62._4_4_;
    auVar62 = func_0x0cae6bd0(&uStack_248,param_2);
    if ((auVar62._8_8_ & 0x100000000) == 0) {
      auStack_268 = (undefined1  [8])0x0;
      fStack_260 = 0.0;
      fStack_25c = 0.0;
      uStack_258 = 0;
      uStack_254 = 0;
      plStack_90 = unaff_R14;
      func_0x0cae1470(param_1,0x1300,auStack_1f8,auStack_268,0);
      plVar24 = (long *)CONCAT44(fStack_25c,fStack_260);
      plStack_100 = (long *)auStack_268;
      auVar46 = auStack_268;
      if (auStack_268 != (undefined1  [8])plVar24) {
        do {
          plStack_138 = (long *)CONCAT44(plStack_138._4_4_,
                                         *(undefined4 *)(*(long *)(*(long *)auVar46 + 0x208) + 4));
          plStack_218 = (long *)CONCAT44(plStack_218._4_4_,
                                         *(undefined4 *)(*(long *)(*(long *)auVar46 + 0x208) + 8));
          uVar49 = func_0x0eee4390();
          plStack_f8 = (long *)CONCAT44(plStack_f8._4_4_,uVar49);
          fVar56 = (float)func_0x0eee4390();
          iVar20 = (int)fVar56;
          fVar56 = (float)func_0x0eee4390();
          if (iVar20 < (short)param_2[8]) {
            if (iVar20 < *(short *)((long)param_2 + 0x42)) break;
            uVar47 = (uint)plStack_f8._0_4_;
            uVar36 = (uint)fVar56;
            unaff_R13 = (long *)(ulong)uVar36;
            uStack_c0 = (long *)CONCAT44((int)uVar36 >> 4,(int)uVar47 >> 4);
            lVar45 = (**(code **)(*param_2 + 0x148))(param_2,&uStack_c0);
            if ((lVar45 != 0) &&
               (unaff_R13 = (long *)(ulong)(uVar36 << 4),
               (short)((short)iVar20 - *(short *)((long)param_2 + 0x42)) <
               *(short *)(lVar45 + 0xbd0 + (ulong)(uVar36 << 4 & 0xff | uVar47 & 0xf) * 2))) break;
          }
          auVar46 = (undefined1  [8])((long)auVar46 + 8);
        } while (auVar46 != (undefined1  [8])plVar24);
      }
      plVar26 = (long *)((long)auVar46 + 8);
      if (plVar26 != plVar24 && auVar46 != (undefined1  [8])plVar24) {
        do {
          plStack_138 = (long *)CONCAT44(plStack_138._4_4_,
                                         *(undefined4 *)(*(long *)(*plVar26 + 0x208) + 4));
          plStack_218 = (long *)CONCAT44(plStack_218._4_4_,
                                         *(undefined4 *)(*(long *)(*plVar26 + 0x208) + 8));
          uVar49 = func_0x0eee4390();
          plStack_f8 = (long *)CONCAT44(plStack_f8._4_4_,uVar49);
          fVar56 = (float)func_0x0eee4390();
          iVar20 = (int)fVar56;
          fVar56 = (float)func_0x0eee4390();
          if (iVar20 < (short)param_2[8]) {
            if (*(short *)((long)param_2 + 0x42) <= iVar20) {
              uVar47 = (uint)plStack_f8._0_4_;
              unaff_R13 = (long *)(ulong)uVar47;
              uStack_c0 = (long *)CONCAT44((int)fVar56 >> 4,(int)uVar47 >> 4);
              lVar45 = (**(code **)(*param_2 + 0x148))(param_2,&uStack_c0);
              if ((lVar45 == 0) ||
                 (unaff_R13 = (long *)(ulong)(uVar47 & 0xf),
                 *(short *)(lVar45 + 0xbd0 + (ulong)(((int)fVar56 & 0xfU) << 4 | uVar47 & 0xf) * 2)
                 <= (short)((short)iVar20 - *(short *)((long)param_2 + 0x42)))) goto LAB_0cae4025;
            }
          }
          else {
LAB_0cae4025:
            *(long *)auVar46 = *plVar26;
            auVar46 = (undefined1  [8])((long)auVar46 + 8);
          }
          plVar26 = plVar26 + 1;
        } while (plVar26 != plVar24);
      }
      plVar26 = plStack_100;
      lVar45 = CONCAT44(uStack_248._4_4_,(uint)uStack_248);
      if (auVar46 != (undefined1  [8])plVar24) {
        plVar24 = (long *)auVar46;
      }
      if (plStack_100 == plVar24) {
        if (uStack_248._4_4_ == -1) {
          lVar45 = (ulong)(uint)uStack_248 + 0x100000000;
          uStack_248._4_4_ = 1;
        }
        plStack_218 = (long *)CONCAT44((float)uStack_248._4_4_,(float)(int)(uint)uStack_248);
        uStack_210 = 0;
        fVar56 = (float)(int)fStack_240;
        unaff_R14 = plStack_90;
        if (plStack_100 == (long *)0x0) goto LAB_0cae41e3;
      }
      else {
        plVar21 = (long *)(**(code **)(*param_2 + 0x150))();
        plVar21 = (long *)(**(code **)(*plVar21 + 0xa70))(plVar21);
        iVar20 = (**(code **)(*plVar21 + 0x18))
                           (plVar21,(ulong)((long)plVar24 - (long)plVar26) >> 3 & 0xffffffff);
        lVar45 = CONCAT44(uStack_248._4_4_,(uint)uStack_248);
        plStack_218 = (long *)**(undefined8 **)(plVar26[iVar20] + 0x208);
        fVar56 = *(float *)(*(undefined8 **)(plVar26[iVar20] + 0x208) + 1);
      }
      unaff_R14 = plStack_90;
      plStack_138 = (long *)CONCAT44(plStack_138._4_4_,fVar56);
      uStack_210 = 0;
      uStack_248 = lVar45;
      func_0x0412a280(plVar26,CONCAT44(uStack_254,uStack_258) - (long)plVar26);
      fVar56 = plStack_138._0_4_;
      lVar45 = uStack_248;
    }
    else {
      plStack_218 = (long *)CONCAT44((float)auVar62._4_4_,(float)auVar62._0_4_);
      uStack_210 = 0;
      fVar56 = (float)auVar62._8_4_;
      lVar45 = CONCAT44(uStack_248._4_4_,(uint)uStack_248);
    }
LAB_0cae41e3:
    plStack_138 = (long *)CONCAT44(plStack_138._4_4_,fVar56);
    plStack_b8 = (long *)CONCAT44(plStack_b8._4_4_,fVar56);
    uStack_c0 = plStack_218;
    uStack_248 = lVar45;
    plStack_f8 = (long *)func_0x0eee4390();
    uStack_f0 = extraout_XMM0_Qb_00;
    fVar56 = (float)func_0x0eee4390();
    auStack_1f8 = (undefined1  [8])CONCAT44((int)fVar56,(int)plStack_f8._0_4_);
    fVar56 = (float)func_0x0eee4390();
    fStack_1f0 = (float)(int)fVar56;
    lVar45 = func_0x0c9e2ed0(param_2,auStack_1f8);
    if (*(float *)(lVar45 + 0xc) <= 0.0) goto LAB_0cae4bb1;
    if (DAT_0f6eb720 == '\0') goto LAB_0cae62c7;
    do {
      for (psVar32 = *(short **)(lVar45 + 0x170); psVar32 != *(short **)(lVar45 + 0x178);
          psVar32 = psVar32 + 8) {
        if (*psVar32 == _DAT_0f6eb718) {
          if (*(long *)(psVar32 + 4) != 0) {
            if (*(int *)(*(long *)(psVar32 + 4) + 8) == 1) goto LAB_0cae4bb1;
            goto LAB_0cae42d0;
          }
          break;
        }
      }
      if (*(float *)(lVar45 + 8) <= _DAT_011987c4 && _DAT_011987c4 != *(float *)(lVar45 + 8)) {
LAB_0cae4bb1:
        lVar39 = (**(code **)(**(long **)((long)auVar34 + 0x28) + 0xac0))();
        lVar45 = *(long *)(lVar39 + 0x18);
        plStack_218 = (long *)((ulong)plStack_218 & 0xffffffff00000000);
        iVar20 = 0;
        if ((lVar45 != 0) &&
           (0x1a < (int)((ulong)(*(long *)(lVar39 + 0x20) - lVar45) >> 4) * -0x11111111)) {
          if (*(int *)(lVar45 + 0x1868) != 2) goto LAB_0cae62b3;
          iVar31 = *(int *)(lVar45 + 0x1864);
          if (iVar31 != 0) {
            unaff_R14 = (long *)auStack_268;
            plStack_f8 = (long *)CONCAT44(plStack_f8._4_4_,iVar31);
            do {
              unaff_R13 = (long *)func_0x0cc41df0(0xf6ff9e0,0xf712e90,1);
              LOCK();
              *(int *)((long)auVar34 + 0x1528) =
                   (int)*(long *)((long)auVar34 + 0x1528) * 3 + 0x3c6ef35f;
              UNLOCK();
              auStack_268._4_4_ = (int)*(long *)((long)auVar34 + 0x48) + 1;
              auStack_268._0_4_ = *(uint *)((long)auVar34 + 0x1528) >> 2 & 0xf | (uint)plStack_150;
              fStack_260 = (float)(*(uint *)((long)auVar34 + 0x1528) >> 10 & 0xf | (uint)plStack_158
                                  );
              lVar45 = (**(code **)(*param_2 + 0x138))(param_2,unaff_R14);
              if (lVar45 == 0) {
                fStack_260 = -NAN;
                auStack_268 = (undefined1  [8])0xffffffffffffffff;
              }
              else {
                auStack_1f8 = (undefined1  [8])
                              (CONCAT71(auStack_1f8._1_7_,auStack_268[0]) & 0xffffffffffffff0f);
                auStack_1f8 = (undefined1  [8])
                              (CONCAT62(auStack_1f8._2_6_,CONCAT11(fStack_260._0_1_,auStack_1f8[0]))
                              & 0xffffffffffff0fff);
                auStack_1f8._2_2_ = auStack_268._4_2_ - *(short *)(*(long *)(lVar45 + 0x30) + 0xa8);
                _auStack_268 = func_0x0cafbac0(lVar45,auStack_1f8);
              }
              iVar20 = (**(code **)(*plStack_200 + 0x18))(plStack_200,0x10);
              if (iVar20 == 0) {
                uStack_248._4_4_ = auStack_268._4_4_ + -1;
                uStack_248._0_4_ = auStack_268._0_4_;
                fStack_240 = fStack_260;
                cVar17 = func_0x0c902a10(param_2,&uStack_248,1);
                if (cVar17 != '\0') {
                  uStack_1e8 = 0;
                  fStack_1e4 = 0.0;
                  uStack_1e0 = 0;
                  auStack_1f8 = (undefined1  [8])0x0;
                  fStack_1f0 = 0.0;
                  fStack_1ec = 0.0;
                  uStack_1d8 = 1;
                  (**(code **)(*param_2 + 0x108))(param_2,&uStack_248,auStack_1f8);
                  uStack_1e8 = 0;
                  fStack_1e4 = 0.0;
                  uStack_1e0 = 0;
                  auStack_1f8 = (undefined1  [8])0x0;
                  fStack_1f0 = 0.0;
                  fStack_1ec = 0.0;
                  uStack_1d8 = 1;
                  (**(code **)(*param_2 + 0xf8))(param_2,&uStack_248,unaff_R13,2,0,auStack_1f8);
                }
              }
              lVar45 = func_0x0c9e2ed0(param_2,unaff_R14);
              fVar56 = 0.0;
              if (*(char *)(*(long *)(puStack_270 + 0x58) + 0xe0) == '\x01') {
                fVar56 = (*(float *)(puStack_270 + 0x38) - *(float *)(puStack_270 + 0x34)) *
                         _DAT_011983fc + *(float *)(puStack_270 + 0x34);
              }
              fVar56 = fVar56 * *(float *)(lVar45 + 0xc);
              if (_DAT_011983fc < fVar56) {
                plStack_138 = (long *)CONCAT44(plStack_138._4_4_,fVar56);
                iVar20 = (int)(fVar56 * _DAT_01198430);
                if (iVar20 < -0xef) {
                  iVar20 = -0xf0;
                }
                iVar20 = (**(code **)(*plStack_200 + 0x18))(plStack_200,iVar20 + 0x100);
                if (iVar20 == 0) {
                  func_0x0c902150(puStack_270,param_2,unaff_R14,1);
                }
                auStack_1f8 = (undefined1  [8])CONCAT44(auStack_268._4_4_ + -1,auStack_268._0_4_);
                fStack_1f0 = fStack_260;
                unaff_R13 = (long *)(**(code **)(*param_2 + 0x10))(param_2,auStack_1f8);
                uStack_248._4_4_ = auStack_268._4_4_ + -1;
                uStack_248._0_4_ = auStack_268._0_4_;
                fStack_240 = fStack_260;
                func_0x0c8b8560(lVar45,param_2,unaff_R14);
                (**(code **)(*(long *)unaff_R13[0xd] + 0x170))
                          ((long *)unaff_R13[0xd],param_2,&uStack_248);
              }
              iVar31 = iVar31 + -1;
            } while (iVar31 != 0);
            iVar20 = (int)plStack_f8;
          }
        }
        lVar45 = *(long *)((long)auVar34 + 0x108);
        lVar39 = (*(long *)((long)auVar34 + 0x110) - lVar45 >> 3) * 0x4ec4ec4ec4ec4ec5;
        puStack_270 = (undefined *)CONCAT44(puStack_270._4_4_,iVar20);
        if (-1 < (short)((short)lVar39 + -1)) {
          uVar47 = (uint)lVar39;
          unaff_R13 = (long *)&UNK_013a2868;
          lVar39 = lVar39 + -2;
          do {
            uVar47 = uVar47 - 1;
            if (_DAT_0f6ffb10 == (long *)0x0) {
              cVar17 = FUN_0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868);
              if (cVar17 != '\0') {
                _DAT_00000000 = 0xdeadc0de;
              }
            }
            lVar45 = lVar45 + (ulong)((int)lVar39 + 1U & 0x7fff) * 0x68;
            unaff_R14 = *(long **)(*_DAT_0f6ffb10 + 0x200);
            plVar24 = *(long **)(lVar45 + 0x30);
            cVar17 = (**(code **)(*plVar24 + 0x18))(plVar24,unaff_R14);
            if (cVar17 == '\0') {
LAB_0cae5041:
              lVar45 = param_1[0x21];
              plStack_218 = (long *)CONCAT44(plStack_218._4_4_,
                                             (int)((float)((uVar47 & 0x7fff) + 1) * _DAT_0119845c));
              goto LAB_0cae508a;
            }
            plVar24 = *(long **)(lVar45 + 0x38);
            if (plVar24 != (long *)0x0) {
              cVar17 = (**(code **)(*plVar24 + 0x18))(plVar24,unaff_R14);
              if (cVar17 == '\0') goto LAB_0cae5041;
            }
            lVar45 = param_1[0x21];
            sVar43 = (short)lVar39;
            lVar39 = lVar39 + -1;
          } while (-1 < sVar43);
          plStack_218 = (long *)((ulong)plStack_218 & 0xffffffff00000000);
        }
LAB_0cae508a:
        lVar45 = (param_1[0x22] - lVar45 >> 3) * 0x4ec4ec4ec4ec4ec5 + -1;
        if ((short)lVar45 < 0) {
          plStack_158 = (long *)0x0;
        }
        else {
          unaff_R13 = (long *)&UNK_013a2868;
          do {
            lVar39 = lVar45;
            uVar47 = (uint)lVar39;
            lVar45 = (ulong)(uVar47 & 0x7fff) * 0x68 + param_1[0x21];
            if (_DAT_0f6ffb10 == (long *)0x0) {
              cVar17 = FUN_0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868);
              if (cVar17 != '\0') {
                _DAT_00000000 = 0xdeadc0de;
              }
            }
            unaff_R14 = *(long **)(*_DAT_0f6ffb10 + 0x200);
            plVar24 = *(long **)(lVar45 + 0x30);
            cVar17 = (**(code **)(*plVar24 + 0x18))(plVar24,unaff_R14);
            if (cVar17 == '\0') goto LAB_0cae5185;
            plVar24 = *(long **)(lVar45 + 0x38);
            if (plVar24 != (long *)0x0) {
              cVar17 = (**(code **)(*plVar24 + 0x18))(plVar24,unaff_R14);
              if (cVar17 == '\0') goto LAB_0cae5185;
            }
            lVar45 = lVar39 + -1;
          } while (-1 < (short)(lVar39 + -1));
          uVar47 = (uint)CONCAT62((int6)((ulong)lVar39 >> 0x10),0xffff);
LAB_0cae5185:
          plStack_158 = (long *)(ulong)(uVar47 * 0x10 + 0x10);
        }
        iVar20 = (int)plStack_218 * iVar20;
        plStack_218 = (long *)CONCAT44(plStack_218._4_4_,iVar20);
        while (iVar20 != 0) {
          _DAT_0f544f48 = _DAT_0f544f48 * 3 + 0x3c6ef35f;
          LOCK();
          UNLOCK();
          bVar30 = (byte)_DAT_0f544f48 >> 2 & 0xf;
          uVar47 = (int)(_DAT_0f544f48 >> 0x12) % (int)(short)plStack_158;
          plStack_150 = (long *)(ulong)(ushort)uVar47;
          uVar36 = _DAT_0f544f48 >> 10;
          unaff_R14 = (long *)(ulong)((uVar47 & 0xffff) >> 4);
          plVar24 = (long *)((param_1[0x22] - param_1[0x21] >> 3) * 0x4ec4ec4ec4ec4ec5);
          cVar17 = (char)uVar36;
          if ((plVar24 < unaff_R14 || (long)plVar24 - (long)unaff_R14 == 0) ||
             (plVar24 = *(long **)(param_1[0x21] + 0x30 + (long)unaff_R14 * 0x68),
             plVar24 == (long *)0x0)) {
            if (_DAT_0f6ffb10 == (long *)0x0) {
              cVar18 = FUN_0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868);
              if (cVar18 != '\0') {
                _DAT_00000000 = 0xdeadc0de;
              }
            }
            lVar45 = *(long *)(*_DAT_0f6ffb10 + 0x200);
          }
          else {
            lVar45 = (**(code **)(*plVar24 + 0x20))
                               (plVar24,(uint)(byte)(cVar17 << 4) | uVar47 & 0xf | (uint)bVar30 << 8
                               );
          }
          lVar39 = *(long *)(lVar45 + 0x68) + 0x368;
          cVar18 = func_0x0c6ed790(lVar39,7);
          uVar36 = uVar36 & 0xf;
          if (cVar18 == '\0') {
            cVar18 = func_0x0c6ed790(lVar39,8);
            if (cVar18 != '\0') goto LAB_0cae5880;
            cVar18 = func_0x0c6ed790(*(long *)(lVar45 + 0x68) + 0x368,7);
            if (cVar18 != '\0') goto LAB_0cae5880;
            cVar18 = func_0x0c6ed790(*(long *)(lVar45 + 0x68) + 0x368,8);
            if (cVar18 != '\0') goto LAB_0cae5880;
          }
          else {
LAB_0cae5880:
            puStack_270._0_4_ = (uint)bVar30;
            fStack_1f0 = (float)((int)param_1[8] + uVar36);
            auStack_1f8 = (undefined1  [8])
                          CONCAT44(*(int *)((long)param_1 + 0x3c) + (uint)plStack_150,
                                   (int)param_1[7] + (uint)puStack_270);
            func_0x0c844920(lVar45,param_2,auStack_1f8,plStack_200);
          }
          plVar24 = (long *)((param_1[0x22] - param_1[0x21] >> 3) * 0x4ec4ec4ec4ec4ec5);
          if ((plVar24 < unaff_R14 || (long)plVar24 - (long)unaff_R14 == 0) ||
             (plVar24 = *(long **)(param_1[0x21] + 0x38 + (long)unaff_R14 * 0x68),
             plVar24 == (long *)0x0)) {
            if (_DAT_0f6ffb10 == (long *)0x0) {
              cVar17 = FUN_0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868);
              if (cVar17 != '\0') {
                _DAT_00000000 = 0xdeadc0de;
              }
            }
            lVar45 = *(long *)(*_DAT_0f6ffb10 + 0x200);
            unaff_R13 = *(long **)(lVar45 + 0x68);
            bVar2 = *(byte *)((long)unaff_R13 + 0x134);
          }
          else {
            lVar45 = (**(code **)(*plVar24 + 0x20))
                               (plVar24,(uint)(byte)(cVar17 << 4) | uVar47 & 0xf | (uint)bVar30 << 8
                               );
            unaff_R13 = *(long **)(lVar45 + 0x68);
            bVar2 = *(byte *)((long)unaff_R13 + 0x134);
          }
          if ((bVar2 & 0x20) != 0) {
            unaff_R13 = unaff_R13 + 0x6d;
            cVar17 = func_0x0c6ed790(unaff_R13,7);
            if (cVar17 == '\0') {
              cVar17 = func_0x0c6ed790(unaff_R13,8);
              if (cVar17 == '\0') goto LAB_0cae56f0;
            }
            fStack_1f0 = (float)(uVar36 + (int)param_1[8]);
            auStack_1f8 = (undefined1  [8])
                          CONCAT44((int)plStack_150 + *(int *)((long)param_1 + 0x3c),
                                   (uint)bVar30 + (int)param_1[7]);
            func_0x0c844920(lVar45,param_2,auStack_1f8,plStack_200);
          }
LAB_0cae56f0:
          iVar20 = (int)plStack_218 + -1;
          plStack_218 = (long *)CONCAT44(plStack_218._4_4_,iVar20);
          puStack_270 = (undefined *)(ulong)bVar30;
        }
        cVar17 = func_0x0c9e4770(param_1[0x1f],param_2,plStack_a0);
        if (cVar17 != '\0') {
          iVar20 = (int)param_1[0x22f];
          if (iVar20 < 0) {
            *(undefined4 *)(param_1 + 0x22f) = 0;
            iVar20 = 0;
          }
          *(int *)((long)param_1 + 0x117c) = iVar20;
        }
        lVar45 = param_1[0x20];
        lVar27 = (**(code **)(*(long *)param_1[5] + 0xac0))();
        lVar39 = *(long *)(lVar27 + 0x18);
        iVar20 = 0;
        if ((lVar39 != 0) &&
           (iVar20 = 0, 0x1a < (int)((ulong)(*(long *)(lVar27 + 0x20) - lVar39) >> 4) * -0x11111111)
           ) {
          auVar34 = (undefined1  [8])param_1;
          if (*(int *)(lVar39 + 0x1868) != 2) goto LAB_0cae62bd;
          iVar20 = *(int *)(lVar39 + 0x1864);
        }
        uStack_248._0_4_ = iVar20 + *(int *)(lVar45 + 8);
        uStack_248._4_4_ = (int)(uint)uStack_248 >> 0x1f;
        cVar17 = func_0x0c9e4770(param_1[0x20],param_2,&uStack_248,100);
        if (cVar17 != '\0') {
          iVar20 = (int)param_1[0x231];
          if (iVar20 < 0) {
            *(undefined4 *)(param_1 + 0x231) = 0;
            iVar20 = 0;
          }
          *(int *)((long)param_1 + 0x118c) = iVar20;
        }
        auStack_268 = (undefined1  [8])0x0;
        fStack_260 = 0.0;
        fStack_25c = 0.0;
        uStack_258 = 0;
        uStack_254 = 0;
        plVar24 = (long *)param_1[0x273];
        plVar26 = (long *)param_1[0x274];
        auVar34 = (undefined1  [8])param_1;
        if (plVar26 != plVar24) {
          uVar35 = 0;
          do {
            plVar26 = plVar24 + uVar35 * 3;
            if ((plVar24[uVar35 * 3 + 1] == 0) ||
               ((*(uint *)(plVar24 + uVar35 * 3 + 2) & 0x3ffff) == 0x3ffff)) {
LAB_0cae54f0:
              plVar24 = (long *)CONCAT44(fStack_25c,fStack_260);
              if (plVar24 < (long *)CONCAT44(uStack_254,uStack_258)) {
LAB_0cae54fc:
                lVar45 = plVar26[1];
                lVar39 = plVar26[1];
                *plVar24 = *plVar26;
                plVar24[1] = lVar39;
                if (lVar45 != 0) {
                  LOCK();
                  plVar21 = (long *)(lVar45 + 0x10);
                  *plVar21 = *plVar21 + 1;
                  UNLOCK();
                }
                *(int *)(plVar24 + 2) = (int)plVar26[2];
                plVar24 = plVar24 + 3;
              }
              else {
                plVar24 = (long *)func_0x0c9b0a70(auStack_268,plVar26);
              }
LAB_0cae552d:
              fStack_260 = SUB84(plVar24,0);
              fStack_25c = (float)((ulong)plVar24 >> 0x20);
            }
            else {
              plVar24 = (long *)func_0x0412c300();
              if (plVar24 == (long *)0x0) goto LAB_0cae54f0;
              lVar45 = *plVar26;
              if (lVar45 == 0) {
LAB_0cae53a0:
                bVar48 = false;
                LOCK();
                plVar21 = plVar24 + 1;
                lVar45 = *plVar21;
                *plVar21 = *plVar21 + -1;
                UNLOCK();
              }
              else {
                uVar47 = *(uint *)(plVar26 + 2);
                uVar28 = (ulong)((uVar47 & 0x3ffff) >> 0xb);
                if (((((ulong)(*(long *)(lVar45 + 0xe0) - *(long *)(lVar45 + 0xd8) >> 3) <= uVar28)
                     || (lVar39 = *(long *)(*(long *)(lVar45 + 0xd8) + uVar28 * 8), lVar39 == 0)) ||
                    (uVar36 = *(uint *)(lVar39 + (ulong)(uVar47 & 0x7ff) * 4),
                    0x3fffe < (uVar47 & 0xfffc0000 ^ uVar36))) ||
                   (*(ulong *)(lVar45 + 0x118) <= (ulong)(uVar36 & 0x3ffff))) goto LAB_0cae53a0;
                unaff_R13 = (long *)(lVar45 + 0x28);
                bVar48 = true;
                puStack_270 = (undefined *)CONCAT44(puStack_270._4_4_,uVar47);
                LOCK();
                plVar21 = plVar24 + 1;
                lVar45 = *plVar21;
                *plVar21 = *plVar21 + -1;
                UNLOCK();
              }
              if (lVar45 == 0) {
                (**(code **)(*plVar24 + 0x10))(plVar24);
                FUN_0412c2d0(plVar24);
              }
              if (!bVar48) goto LAB_0cae54f0;
              plVar24 = (long *)(unaff_R13[7] +
                                (ulong)((int)((ulong)(unaff_R13[8] - unaff_R13[7]) >> 3) - 1U &
                                       0x85b93800) * 8);
              do {
                if (*plVar24 == -1) goto LAB_0cae54f0;
                lVar45 = *plVar24 * 0x20;
                plVar24 = (long *)(unaff_R13[10] + lVar45);
              } while (*(int *)(unaff_R13[10] + 8 + lVar45) != -0x7a46c800);
              if ((plVar24 == (long *)unaff_R13[0xb]) || (lVar45 = plVar24[2], lVar45 == 0))
              goto LAB_0cae54f0;
              uVar28 = (ulong)(((uint)puStack_270 & 0x3ffff) >> 0xb);
              if ((((ulong)(*(long *)(lVar45 + 0x10) - *(long *)(lVar45 + 8) >> 3) <= uVar28) ||
                  ((lVar39 = *(long *)(*(long *)(lVar45 + 8) + uVar28 * 8), lVar39 == 0 ||
                   (uVar47 = *(uint *)(lVar39 + (ulong)((uint)puStack_270 & 0x7ff) * 4),
                   0x3fffe < ((uint)puStack_270 & 0xfffc0000 ^ uVar47))))) ||
                 ((lVar45 = *(long *)(*(long *)(lVar45 + 0x50) + (ulong)(uVar47 >> 4 & 0x3ff8)),
                  lVar45 == 0 ||
                  (lVar45 = *(long *)(lVar45 + (ulong)(uVar47 & 0x7f) * 8), lVar45 == 0))))
              goto LAB_0cae54f0;
              if (*(char *)(lVar45 + 0x251) != '\0') {
                plVar24 = (long *)CONCAT44(fStack_25c,fStack_260);
                if (plVar24 < (long *)CONCAT44(uStack_254,uStack_258)) goto LAB_0cae54fc;
                plVar24 = (long *)func_0x0c9b0a70(auStack_268,plVar26);
                goto LAB_0cae552d;
              }
              func_0x0cadfe60(param_1[0x28e],param_1[0x28f],lVar45);
              lVar39 = *(long *)(lVar45 + 0x10);
              uVar47 = *(uint *)(lVar45 + 0x18);
              plVar24 = (long *)(*(long *)(lVar39 + 0x38) +
                                (ulong)((int)((ulong)(*(long *)(lVar39 + 0x40) -
                                                     *(long *)(lVar39 + 0x38)) >> 3) - 1U &
                                       0x8dab9612) * 8);
              do {
                if (*plVar24 == -1) {
                  plVar24 = *(long **)(lVar39 + 0x58);
                  plVar26 = plVar24;
                  goto LAB_0cae55d3;
                }
                lVar45 = *plVar24 * 0x20;
                plVar24 = (long *)(*(long *)(lVar39 + 0x50) + lVar45);
              } while (*(int *)(*(long *)(lVar39 + 0x50) + 8 + lVar45) != -0x725469ee);
              plVar26 = *(long **)(lVar39 + 0x58);
LAB_0cae55d3:
              if ((plVar24 == plVar26) || (lVar45 = plVar24[2], lVar45 == 0)) {
LAB_0cae5626:
                lVar45 = func_0x05f0d990(lVar39,0x2744aa41);
                uVar28 = (ulong)((uVar47 & 0x3ffff) >> 0xb);
                if (((ulong)(*(long *)(lVar45 + 0x10) - *(long *)(lVar45 + 8) >> 3) <= uVar28) ||
                   ((lVar39 = *(long *)(*(long *)(lVar45 + 8) + uVar28 * 8), lVar39 == 0 ||
                    (0x3fffe < (uVar47 & 0xfffc0000 ^
                               *(uint *)(lVar39 + (ulong)(uVar47 & 0x7ff) * 4)))))) {
                  auStack_1f8._0_4_ = uVar47;
                  func_0x075c9520(lVar45,auStack_1f8,0,param_2);
                }
              }
              else {
                uVar28 = (ulong)((uVar47 & 0x3ffff) >> 0xb);
                if (((ulong)(*(long *)(lVar45 + 0x10) - *(long *)(lVar45 + 8) >> 3) <= uVar28) ||
                   ((lVar45 = *(long *)(*(long *)(lVar45 + 8) + uVar28 * 8), lVar45 == 0 ||
                    (0x3fffe < (uVar47 & 0xfffc0000 ^
                               *(uint *)(lVar45 + (ulong)(uVar47 & 0x7ff) * 4))))))
                goto LAB_0cae5626;
              }
            }
            uVar35 = (ulong)((int)uVar35 + 1);
            plVar24 = (long *)param_1[0x273];
            plVar26 = (long *)param_1[0x274];
            uVar28 = ((long)plVar26 - (long)plVar24 >> 3) * -0x5555555555555555;
          } while (uVar35 <= uVar28 && uVar28 - uVar35 != 0);
          unaff_R14 = (long *)CONCAT44(fStack_25c,fStack_260);
          auVar34 = auStack_268;
          if (auStack_268 != (undefined1  [8])unaff_R14) {
            unaff_R13 = (long *)auStack_1f8;
            do {
              lVar45 = *(long *)((long)auVar34 + 8);
              lStack_48 = *(long *)auVar34;
              lStack_40 = *(long *)((long)auVar34 + 8);
              if (lVar45 != 0) {
                LOCK();
                *(long *)(lVar45 + 0x10) = *(long *)(lVar45 + 0x10) + 1;
                UNLOCK();
              }
              uStack_38 = (undefined4)*(long *)((long)auVar34 + 0x10);
              func_0x0cae02c0(param_1,&lStack_48);
              if (lVar45 != 0) {
                FUN_0412c2d0(lVar45);
              }
              lStack_68 = *(long *)auVar34;
              lStack_60 = *(long *)((long)auVar34 + 8);
              if (*(long *)((long)auVar34 + 8) != 0) {
                LOCK();
                plVar24 = (long *)(*(long *)((long)auVar34 + 8) + 0x10);
                *plVar24 = *plVar24 + 1;
                UNLOCK();
              }
              uStack_58 = (undefined4)*(long *)((long)auVar34 + 0x10);
              (**(code **)(*plStack_220 + 0x788))(unaff_R13,plStack_220,&lStack_68);
              if (lStack_60 != 0) {
                FUN_0412c2d0();
              }
              if ((byte)uStack_1e0 == '\x01') {
                uStack_80 = CONCAT44(fStack_1ec,fStack_1f0);
                plStack_88 = (long *)auStack_1f8;
                uStack_78 = uStack_1e8;
                cStack_70 = '\x01';
                uStack_1e0 = uStack_1e0 & 0xffffffffffffff00;
                (**(code **)(*plStack_220 + 0x778))(plStack_220,&plStack_88);
                if (cStack_70 == '\x01') {
                  cStack_70 = '\0';
                  uStack_128 = CONCAT44(uStack_128._4_4_,uStack_78);
                  func_0x0d87c640(plStack_88 + 5,&uStack_128);
                }
              }
              if ((byte)uStack_1e0 == '\x01') {
                uStack_1e0 = uStack_1e0 & 0xffffffffffffff00;
                uStack_128 = CONCAT44(uStack_128._4_4_,uStack_1e8);
                func_0x0d87c640((long)auStack_1f8 + 0x28,&uStack_128);
              }
              auVar34 = (undefined1  [8])((long)auVar34 + 0x18);
            } while (auVar34 != (undefined1  [8])unaff_R14);
            plVar24 = (long *)param_1[0x273];
            plVar26 = (long *)param_1[0x274];
          }
        }
        if (plVar24 != plVar26) {
          do {
            if ((plVar24[1] != 0) && ((*(uint *)(plVar24 + 2) & 0x3ffff) != 0x3ffff)) {
              plVar21 = (long *)func_0x0412c300();
              if (plVar21 != (long *)0x0) {
                lVar45 = *plVar24;
                if (lVar45 == 0) {
LAB_0cae5c90:
                  unaff_R13 = (long *)0x0;
                  LOCK();
                  plVar22 = plVar21 + 1;
                  lVar45 = *plVar22;
                  *plVar22 = *plVar22 + -1;
                  UNLOCK();
                }
                else {
                  uVar47 = *(uint *)(plVar24 + 2);
                  uVar35 = (ulong)((uVar47 & 0x3ffff) >> 0xb);
                  if (((((ulong)(*(long *)(lVar45 + 0xe0) - *(long *)(lVar45 + 0xd8) >> 3) <= uVar35
                        ) || (lVar39 = *(long *)(*(long *)(lVar45 + 0xd8) + uVar35 * 8), lVar39 == 0
                             )) ||
                      (uVar36 = *(uint *)(lVar39 + (ulong)(uVar47 & 0x7ff) * 4),
                      0x3fffe < (uVar47 & 0xfffc0000 ^ uVar36))) ||
                     (*(ulong *)(lVar45 + 0x118) <= (ulong)(uVar36 & 0x3ffff))) goto LAB_0cae5c90;
                  auVar34 = (undefined1  [8])(lVar45 + 0x28);
                  unaff_R13 = (long *)CONCAT71((int7)((ulong)unaff_R13 >> 8),1);
                  puStack_270 = (undefined *)CONCAT44(puStack_270._4_4_,uVar47);
                  LOCK();
                  plVar22 = plVar21 + 1;
                  lVar45 = *plVar22;
                  *plVar22 = *plVar22 + -1;
                  UNLOCK();
                }
                if (lVar45 == 0) {
                  (**(code **)(*plVar21 + 0x10))(plVar21);
                  FUN_0412c2d0(plVar21);
                  unaff_R14 = plVar21;
                }
                if ((char)unaff_R13 != '\0') {
                  plVar21 = (long *)(*(long *)((long)auVar34 + 0x38) +
                                    (ulong)((int)((ulong)(*(long *)((long)auVar34 + 0x40) -
                                                         *(long *)((long)auVar34 + 0x38)) >> 3) - 1U
                                           & 0x85b93800) * 8);
                  do {
                    if (*plVar21 == -1) goto LAB_0cae5bd5;
                    lVar45 = *plVar21 * 0x20;
                    plVar21 = (long *)(*(long *)((long)auVar34 + 0x50) + lVar45);
                  } while (*(int *)(*(long *)((long)auVar34 + 0x50) + 8 + lVar45) != -0x7a46c800);
                  if ((plVar21 != *(long **)((long)auVar34 + 0x58)) &&
                     (lVar45 = plVar21[2], lVar45 != 0)) {
                    uVar35 = (ulong)(((uint)puStack_270 & 0x3ffff) >> 0xb);
                    if ((((uVar35 < (ulong)(*(long *)(lVar45 + 0x10) - *(long *)(lVar45 + 8) >> 3))
                         && ((lVar39 = *(long *)(*(long *)(lVar45 + 8) + uVar35 * 8), lVar39 != 0 &&
                             (uVar47 = *(uint *)(lVar39 + (ulong)((uint)puStack_270 & 0x7ff) * 4),
                             ((uint)puStack_270 & 0xfffc0000 ^ uVar47) < 0x3ffff)))) &&
                        (lVar45 = *(long *)(*(long *)(lVar45 + 0x50) + (ulong)(uVar47 >> 4 & 0x3ff8)
                                           ), lVar45 != 0)) &&
                       (lVar45 = *(long *)(lVar45 + (ulong)(uVar47 & 0x7f) * 8),
                       *(char *)(lVar45 + 0x251) == '\0')) {
                      lVar39 = *(long *)(lVar45 + 0x120);
                      if (lVar39 == 0) goto LAB_0cae62a9;
                      plVar21 = *(long **)(lVar45 + 0x130);
                      if ((((plVar21[1] != 0 || *plVar21 != 0) ||
                           ((*(ushort *)(plVar21 + 2) & 0x1fff) != 0)) ||
                          (*(long *)(lVar39 + 0x20) != 0 || *(long *)(lVar39 + 0x18) != 0)) ||
                         ((*(ushort *)(lVar39 + 0x28) & 0x1fff) != 0)) {
                        iVar20 = (int)param_1[0x22f];
                        if (iVar20 < 0) {
                          *(undefined4 *)(param_1 + 0x22f) = 0;
                          iVar20 = 0;
                        }
                        *(int *)((long)param_1 + 0x117c) = iVar20;
                      }
                    }
                  }
                }
              }
            }
LAB_0cae5bd5:
            plVar24 = plVar24 + 3;
            if (plVar24 == plVar26) break;
          } while( true );
        }
        auVar34 = auStack_268;
        if (auStack_268 != (undefined1  [8])0x0) {
          for (plVar24 = (long *)CONCAT44(fStack_25c,fStack_260);
              auVar34 != (undefined1  [8])plVar24; plVar24 = plVar24 + -3) {
            if (plVar24[-2] != 0) {
              FUN_0412c2d0();
            }
          }
          fStack_260 = auVar34._0_4_;
          fStack_25c = auVar34._4_4_;
          func_0x0412a280(auStack_268,CONCAT44(uStack_254,uStack_258) - (long)auStack_268);
        }
        break;
      }
LAB_0cae42d0:
      cVar17 = func_0x0bf108b0(unaff_R14,plStack_200);
      if (cVar17 == '\0') goto LAB_0cae4846;
      plStack_218 = (long *)CONCAT44(plStack_218._4_4_,plStack_b8._0_4_);
      plStack_f8 = uStack_c0;
      uStack_f0 = 0;
      plStack_138 = (long *)func_0x0eee4390();
      fVar56 = (float)func_0x0eee4390();
      uStack_170 = CONCAT44((int)fVar56,(int)plStack_138._0_4_);
      fVar56 = (float)func_0x0eee4390();
      fStack_168 = (float)(int)fVar56;
      lVar45 = (**(code **)(*param_2 + 0x10))(param_2,&uStack_170);
      if (((long)_DAT_0f712e80 - (long)_DAT_0f712e78 != -8) &&
         (_DAT_0f712e80 == (undefined8 *)0x0 || _DAT_0f712e78 != (undefined8 *)0x0)) {
        puVar33 = _DAT_0f712e78;
        if (_DAT_0f712e80 == _DAT_0f712e78) {
LAB_0cae43be:
          if (puVar33 != _DAT_0f712e80) goto LAB_0cae4846;
        }
        else {
          do {
            if (*(long *)(*(long *)(lVar45 + 0x68) + 200) == *(long *)*puVar33) goto LAB_0cae43be;
            puVar33 = puVar33 + 1;
          } while (puVar33 != _DAT_0f712e80);
        }
        lVar45 = (**(code **)(*param_2 + 0x130))();
        auStack_1f8 = (undefined1  [8])CONCAT44(uStack_170._4_4_ + 1,(undefined4)uStack_170);
        fStack_1f0 = fStack_168;
        cVar17 = func_0x0c9017d0(*(undefined8 *)(lVar45 + 0x1b8),param_2,auStack_1f8);
        if (cVar17 != '\0') {
          uVar23 = func_0x0c9e2ed0(param_2,auStack_1f8);
          fVar56 = (float)func_0x0c8b8560(uVar23,param_2,auStack_1f8);
          if (_DAT_01198788 < fVar56) {
            plVar24 = (long *)(**(code **)(*param_2 + 0x150))();
            uVar23 = (**(code **)(*plVar24 + 0x908))(plVar24);
            uStack_248._0_4_ = CONCAT31((int3)_DAT_012685be,0x24);
            uStack_248._4_4_ = (int)((ulong)_DAT_012685be >> 0x18);
            fStack_240._0_1_ = (undefined1)((ulong)_DAT_012685be >> 0x38);
            fStack_240._1_3_ = (undefined3)_UNK_012685c6;
            uStack_23c = (undefined4)((ulong)_UNK_012685c6 >> 0x18);
            uStack_238 = (undefined1)((ulong)_UNK_012685c6 >> 0x38);
            uStack_237 = 0x7061;
            uStack_235 = 0;
            func_0x0b04d0a0(auStack_1f8,0x21531a,&uStack_248);
            uStack_128 = CONCAT44((float)(int)(uStack_170 >> 0x20),(float)(int)uStack_170);
            uStack_120 = CONCAT44(uStack_120._4_4_,(float)(int)fStack_168);
            func_0x0b054630(auStack_268,uVar23,auStack_1f8,0,&uStack_128,&UNK_01e7b238);
            if ((bStack_190 & 1) == 0) {
              if ((bStack_1b0 & 1) == 0) goto LAB_0cae4512;
LAB_0cae4576:
              func_0x0412a280(uStack_1a0,CONCAT71(uStack_1af,bStack_1b0) & 0xfffffffffffffffe);
              if ((uStack_1c8 & 1) != 0) goto LAB_0cae4599;
LAB_0cae451c:
              if ((uStack_1e0 & 1) == 0) goto LAB_0cae452a;
LAB_0cae45c0:
              func_0x0412a280(CONCAT71(uStack_1cf,uStack_1d0),uStack_1e0 & 0xfffffffffffffffe);
              if (((ulong)auStack_1f8 & 1) != 0) goto LAB_0cae45e7;
LAB_0cae4538:
              if (((uint)uStack_248 & 1) == 0) goto LAB_0cae4543;
LAB_0cae460b:
              func_0x0412a280(CONCAT44(uStack_234,
                                       CONCAT13(uStack_235,CONCAT21(uStack_237,uStack_238))),
                              CONCAT44(uStack_248._4_4_,(uint)uStack_248) & 0xfffffffffffffffe);
              auVar8._8_4_ = fStack_1f0;
              auVar8._0_8_ = auStack_1f8;
            }
            else {
              func_0x0412a280(uStack_180,CONCAT71(uStack_18f,bStack_190) & 0xfffffffffffffffe);
              if ((bStack_1b0 & 1) != 0) goto LAB_0cae4576;
LAB_0cae4512:
              if ((uStack_1c8 & 1) == 0) goto LAB_0cae451c;
LAB_0cae4599:
              func_0x0412a280(uStack_1b8,CONCAT44(uStack_1c4,uStack_1c8) & 0xfffffffffffffffe);
              if ((uStack_1e0 & 1) != 0) goto LAB_0cae45c0;
LAB_0cae452a:
              if (((ulong)auStack_1f8 & 1) == 0) goto LAB_0cae4538;
LAB_0cae45e7:
              func_0x0412a280(CONCAT44(fStack_1e4,uStack_1e8),
                              (ulong)auStack_1f8 & 0xfffffffffffffffe);
              if (((uint)uStack_248 & 1) != 0) goto LAB_0cae460b;
LAB_0cae4543:
              auVar8._8_4_ = fStack_1f0;
              auVar8._0_8_ = auStack_1f8;
            }
            if (cStack_250 == '\x01') {
              auVar14._8_4_ = fStack_1f0;
              auVar14._0_8_ = auStack_1f8;
              auVar13._8_4_ = fStack_1f0;
              auVar13._0_8_ = auStack_1f8;
              auVar12._8_4_ = fStack_1f0;
              auVar12._0_8_ = auStack_1f8;
              auVar11._8_4_ = fStack_1f0;
              auVar11._0_8_ = auStack_1f8;
              auVar10._8_4_ = fStack_1f0;
              auVar10._0_8_ = auStack_1f8;
              auVar9._8_4_ = fStack_1f0;
              auVar9._0_8_ = auStack_1f8;
              auVar8._8_4_ = fStack_1f0;
              auVar8._0_8_ = auStack_1f8;
              lVar45 = CONCAT44(fStack_25c,fStack_260);
              plVar26 = (long *)(*(long *)(lVar45 + 0x38) +
                                (ulong)((int)((ulong)(*(long *)(lVar45 + 0x40) -
                                                     *(long *)(lVar45 + 0x38)) >> 3) - 1U &
                                       0x85b93800) * 8);
              do {
                if (*plVar26 == -1) {
                  plVar21 = *(long **)(lVar45 + 0x58);
                  plVar26 = plVar21;
                  goto LAB_0cae467e;
                }
                lVar39 = *plVar26 * 0x20;
                plVar26 = (long *)(*(long *)(lVar45 + 0x50) + lVar39);
              } while (*(int *)(*(long *)(lVar45 + 0x50) + 8 + lVar39) != -0x7a46c800);
              plVar21 = *(long **)(lVar45 + 0x58);
LAB_0cae467e:
              if ((plVar26 != plVar21) && (lVar45 = plVar26[2], auVar8 = auVar9, lVar45 != 0)) {
                uVar35 = (ulong)((uStack_258 & 0x3ffff) >> 0xb);
                auVar8 = auVar10;
                if (((uVar35 < (ulong)(*(long *)(lVar45 + 0x10) - *(long *)(lVar45 + 8) >> 3)) &&
                    (((lVar39 = *(long *)(*(long *)(lVar45 + 8) + uVar35 * 8), auVar8 = auVar11,
                      lVar39 != 0 &&
                      (uVar47 = *(uint *)(lVar39 + (ulong)(uStack_258 & 0x7ff) * 4),
                      auVar8 = auVar12, (uStack_258 & 0xfffc0000 ^ uVar47) < 0x3ffff)) &&
                     (lVar45 = *(long *)(*(long *)(lVar45 + 0x50) + (ulong)(uVar47 >> 4 & 0x3ff8)),
                     auVar8 = auVar13, lVar45 != 0)))) &&
                   (lVar45 = *(long *)(lVar45 + (ulong)(uVar47 & 0x7f) * 8), auVar8 = auVar14,
                   *(char *)(lVar45 + 0x251) == '\0')) {
                  uVar47 = *(uint *)(lVar45 + 0x18);
                  lVar45 = func_0x0b45aae0(*(undefined8 *)(lVar45 + 0x10),0xfad8d24f);
                  uVar35 = (ulong)((uVar47 & 0x3ffff) >> 0xb);
                  if ((((ulong)(*(long *)(lVar45 + 0x10) - *(long *)(lVar45 + 8) >> 3) <= uVar35) ||
                      (lVar39 = *(long *)(*(long *)(lVar45 + 8) + uVar35 * 8), lVar39 == 0)) ||
                     (0x3fffe < (uVar47 & 0xfffc0000 ^
                                *(uint *)(lVar39 + (ulong)(uVar47 & 0x7ff) * 4)))) {
                    auStack_1f8._0_4_ = uVar47;
                    func_0x0492f360(lVar45,auStack_1f8,0,0);
                  }
                  auStack_1f8 = (undefined1  [8])((ulong)auStack_1f8 & 0xffffffffffffff00);
                  uVar35 = uStack_1e0 >> 8;
                  uStack_1e0 = uStack_1e0 & 0xffffffffffffff00;
                  if (cStack_250 == '\x01') {
                    fStack_1ec = fStack_25c;
                    uStack_1e8 = uStack_258;
                    uStack_1e0 = CONCAT71((int7)uVar35,1);
                    cStack_250 = '\0';
                    _auStack_1f8 = _auStack_268;
                  }
                  (**(code **)(*plVar24 + 0x160))(plVar24,param_2,auStack_1f8);
                  auVar8 = _auStack_1f8;
                  if ((byte)uStack_1e0 == '\x01') {
                    uStack_1e0 = uStack_1e0 & 0xffffffffffffff00;
                    uStack_128 = CONCAT44(uStack_128._4_4_,uStack_1e8);
                    func_0x0d87c640((long)auStack_1f8 + 0x28,&uStack_128);
                    auVar8 = _auStack_1f8;
                  }
                }
              }
            }
            _auStack_1f8 = auVar8;
            if (cStack_250 == '\x01') {
              cStack_250 = '\0';
              uStack_128 = CONCAT44(uStack_128._4_4_,uStack_258);
              func_0x0d87c640((long)auStack_268 + 0x28,&uStack_128);
            }
            auVar34 = (undefined1  [8])param_1;
          }
        }
LAB_0cae4846:
        plVar24 = (long *)(**(code **)(*param_2 + 0x150))();
        unaff_R14 = (long *)(**(code **)(*plVar24 + 0x908))(plVar24);
        uStack_248._0_4_ = 0;
        uStack_248._4_4_ = 0;
        fStack_240 = 0.0;
        uStack_23c = 0;
        uStack_238 = 0;
        uStack_237 = 0;
        uStack_235 = 0;
        uStack_234 = 0;
        func_0x0b04d0a0(auStack_1f8,0x5d,&uStack_248);
        func_0x0b054630(auStack_268,unaff_R14,auStack_1f8,0,&uStack_c0,&UNK_01e7b238);
        if ((bStack_190 & 1) == 0) {
          if ((bStack_1b0 & 1) == 0) goto LAB_0cae48c5;
LAB_0cae4929:
          func_0x0412a280(uStack_1a0,CONCAT71(uStack_1af,bStack_1b0) & 0xfffffffffffffffe);
          if ((uStack_1c8 & 1) != 0) goto LAB_0cae494c;
LAB_0cae48cf:
          if ((uStack_1e0 & 1) == 0) goto LAB_0cae48dd;
LAB_0cae4973:
          func_0x0412a280(CONCAT71(uStack_1cf,uStack_1d0),uStack_1e0 & 0xfffffffffffffffe);
        }
        else {
          func_0x0412a280(uStack_180,CONCAT71(uStack_18f,bStack_190) & 0xfffffffffffffffe);
          if ((bStack_1b0 & 1) != 0) goto LAB_0cae4929;
LAB_0cae48c5:
          if ((uStack_1c8 & 1) == 0) goto LAB_0cae48cf;
LAB_0cae494c:
          func_0x0412a280(uStack_1b8,CONCAT44(uStack_1c4,uStack_1c8) & 0xfffffffffffffffe);
          if ((uStack_1e0 & 1) != 0) goto LAB_0cae4973;
LAB_0cae48dd:
        }
        if (((ulong)auStack_1f8 & 1) != 0) {
          func_0x0412a280(CONCAT44(fStack_1e4,uStack_1e8),(ulong)auStack_1f8 & 0xfffffffffffffffe);
        }
        if (((uint)uStack_248 & 1) != 0) {
          func_0x0412a280(CONCAT44(uStack_234,CONCAT13(uStack_235,CONCAT21(uStack_237,uStack_238))),
                          CONCAT44(uStack_248._4_4_,(uint)uStack_248) & 0xfffffffffffffffe);
        }
        if (cStack_250 == '\x01') {
          lVar45 = CONCAT44(fStack_25c,fStack_260);
          plVar24 = (long *)(*(long *)(lVar45 + 0x38) +
                            (ulong)((int)((ulong)(*(long *)(lVar45 + 0x40) -
                                                 *(long *)(lVar45 + 0x38)) >> 3) - 1U & 0x85b93800)
                            * 8);
          do {
            if (*plVar24 == -1) {
              plVar26 = *(long **)(lVar45 + 0x58);
              plVar24 = plVar26;
              goto LAB_0cae4a31;
            }
            lVar39 = *plVar24 * 0x20;
            plVar24 = (long *)(*(long *)(lVar45 + 0x50) + lVar39);
          } while (*(int *)(*(long *)(lVar45 + 0x50) + 8 + lVar39) != -0x7a46c800);
          plVar26 = *(long **)(lVar45 + 0x58);
LAB_0cae4a31:
          if ((plVar24 != plVar26) && (lVar45 = plVar24[2], lVar45 != 0)) {
            uVar35 = (ulong)((uStack_258 & 0x3ffff) >> 0xb);
            if ((uVar35 < (ulong)(*(long *)(lVar45 + 0x10) - *(long *)(lVar45 + 8) >> 3)) &&
               ((((lVar39 = *(long *)(*(long *)(lVar45 + 8) + uVar35 * 8), lVar39 != 0 &&
                  (uVar47 = *(uint *)(lVar39 + (ulong)(uStack_258 & 0x7ff) * 4),
                  (uStack_258 & 0xfffc0000 ^ uVar47) < 0x3ffff)) &&
                 (lVar45 = *(long *)(*(long *)(lVar45 + 0x50) + (ulong)(uVar47 >> 4 & 0x3ff8)),
                 lVar45 != 0)) &&
                (lVar45 = *(long *)(lVar45 + (ulong)(uVar47 & 0x7f) * 8),
                *(char *)(lVar45 + 0x251) == '\0')))) {
              func_0x0b3dacf0(lVar45,&uStack_c0,&UNK_01e7b238);
              plVar24 = (long *)(**(code **)(*param_2 + 0x150))();
              auStack_1f8 = (undefined1  [8])((ulong)auStack_1f8 & 0xffffffffffffff00);
              uVar35 = uStack_1e0 >> 8;
              uStack_1e0 = uStack_1e0 & 0xffffffffffffff00;
              if (cStack_250 == '\x01') {
                fStack_1ec = fStack_25c;
                uStack_1e8 = uStack_258;
                uStack_1e0 = CONCAT71((int7)uVar35,1);
                cStack_250 = '\0';
                _auStack_1f8 = _auStack_268;
              }
              (**(code **)(*plVar24 + 0x168))(plVar24,param_2,auStack_1f8);
              auVar34 = (undefined1  [8])param_1;
              if ((byte)uStack_1e0 == '\x01') {
                uStack_1e0 = uStack_1e0 & 0xffffffffffffff00;
                uStack_128 = CONCAT44(uStack_128._4_4_,uStack_1e8);
                func_0x0d87c640((long)auStack_1f8 + 0x28,&uStack_128);
              }
            }
          }
        }
        if (cStack_250 == '\x01') {
          cStack_250 = '\0';
          uStack_128 = CONCAT44(uStack_128._4_4_,uStack_258);
          func_0x0d87c640((long)auStack_268 + 0x28,&uStack_128);
        }
        goto LAB_0cae4bb1;
      }
LAB_0cae62a9:
      func_0x04890760();
LAB_0cae62ae:
      func_0x04891200();
LAB_0cae62b3:
      func_0x04931450();
LAB_0cae62b8:
      func_0x04931450();
LAB_0cae62bd:
      func_0x04931450();
LAB_0cae62c2:
      lVar45 = func_0x04931450();
LAB_0cae62c7:
      iVar20 = func_0x04108328(&DAT_0f6eb720);
      if (iVar20 != 0) {
        LOCK();
        UNLOCK();
        _DAT_0f6eb718 = _DAT_0f556458;
        _DAT_0f556458 = _DAT_0f556458 + 1;
        func_0x0410844d(&DAT_0f6eb720);
      }
    } while( true );
  }
  func_0x0cae65c0(param_1);
  cVar17 = (**(code **)(*(long *)param_1[5] + 0x9f0))();
  if (cVar17 == '\0') {
    fStack_1f0 = (float)(*(int *)((long)param_1 + 0x54) << 4);
    auStack_1f8._4_4_ = 0;
    auStack_1f8._0_4_ = (int)param_1[10] << 4;
    func_0x0d157960(*(undefined8 *)(param_1[6] + 0x1d0),param_2,auStack_1f8);
  }
  if (param_1[0x274] != param_1[0x273]) {
    iVar20 = (int)param_1[0x232];
    if (iVar20 < 0) {
      *(undefined4 *)(param_1 + 0x232) = 0;
      iVar20 = 0;
    }
    *(int *)((long)param_1 + 0x1194) = iVar20;
  }
  if ((int)param_1[0x22c] == 0x7fffffff) {
    iVar20 = (int)param_1[0x22d];
    if (iVar20 == 0x7fffffff) goto LAB_0cae5f3c;
LAB_0cae5fc3:
    *(int *)(param_1 + 0x22d) = iVar20 + 1;
    iVar20 = (int)param_1[0x22e];
    if (iVar20 != 0x7fffffff) goto LAB_0cae5fe0;
LAB_0cae5f4f:
    iVar20 = (int)param_1[0x22f];
    if (iVar20 == 0x7fffffff) goto LAB_0cae5f62;
LAB_0cae5ffd:
    *(int *)(param_1 + 0x22f) = iVar20 + 1;
    iVar20 = (int)param_1[0x230];
    if (iVar20 != 0x7fffffff) goto LAB_0cae601a;
LAB_0cae5f75:
    iVar20 = (int)param_1[0x231];
    if (iVar20 == 0x7fffffff) goto LAB_0cae5f88;
LAB_0cae6037:
    *(int *)(param_1 + 0x231) = iVar20 + 1;
    piVar29 = (int *)param_1[0x21];
    lVar45 = param_1[0x22] - (long)piVar29;
    iVar20 = _DAT_014e7ba0;
    iVar31 = _UNK_014e7ba4;
    iVar15 = _UNK_014e7ba8;
    iVar16 = _UNK_014e7bac;
  }
  else {
    *(int *)(param_1 + 0x22c) = (int)param_1[0x22c] + 1;
    iVar20 = (int)param_1[0x22d];
    if (iVar20 != 0x7fffffff) goto LAB_0cae5fc3;
LAB_0cae5f3c:
    iVar20 = (int)param_1[0x22e];
    if (iVar20 == 0x7fffffff) goto LAB_0cae5f4f;
LAB_0cae5fe0:
    *(int *)(param_1 + 0x22e) = iVar20 + 1;
    iVar20 = (int)param_1[0x22f];
    if (iVar20 != 0x7fffffff) goto LAB_0cae5ffd;
LAB_0cae5f62:
    iVar20 = (int)param_1[0x230];
    if (iVar20 == 0x7fffffff) goto LAB_0cae5f75;
LAB_0cae601a:
    *(int *)(param_1 + 0x230) = iVar20 + 1;
    iVar20 = (int)param_1[0x231];
    if (iVar20 != 0x7fffffff) goto LAB_0cae6037;
LAB_0cae5f88:
    piVar29 = (int *)param_1[0x21];
    lVar45 = param_1[0x22] - (long)piVar29;
    iVar20 = _DAT_014e7ba0;
    iVar31 = _UNK_014e7ba4;
    iVar15 = _UNK_014e7ba8;
    iVar16 = _UNK_014e7bac;
  }
  _DAT_014e7ba0 = iVar20;
  _UNK_014e7ba4 = iVar31;
  _UNK_014e7ba8 = iVar15;
  _UNK_014e7bac = iVar16;
  if (lVar45 != 0) {
    uVar28 = (lVar45 >> 3) * 0x4ec4ec4ec4ec4ec5;
    uVar35 = uVar28 + (uVar28 == 0);
    if (uVar28 < 8) {
      uVar38 = 0;
    }
    else {
      uVar38 = uVar35 & 0xfffffffffffffff8;
      uVar40 = uVar38;
      piVar41 = piVar29;
      do {
        if (*piVar41 < iVar20) {
          *piVar41 = *piVar41 + 1;
        }
        if (piVar41[0x1a] < iVar31) {
          piVar41[0x1a] = piVar41[0x1a] + 1;
        }
        if (piVar41[0x34] < iVar15) {
          piVar41[0x34] = piVar41[0x34] + 1;
        }
        if (piVar41[0x4e] < iVar16) {
          piVar41[0x4e] = piVar41[0x4e] + 1;
        }
        if (piVar41[0x68] < iVar20) {
          piVar41[0x68] = piVar41[0x68] + 1;
        }
        if (piVar41[0x82] < iVar31) {
          piVar41[0x82] = piVar41[0x82] + 1;
        }
        if (piVar41[0x9c] < iVar15) {
          piVar41[0x9c] = piVar41[0x9c] + 1;
        }
        if (piVar41[0xb6] < iVar16) {
          piVar41[0xb6] = piVar41[0xb6] + 1;
        }
        piVar41 = piVar41 + 0xd0;
        uVar40 = uVar40 - 8;
      } while (uVar40 != 0);
      if (uVar28 - uVar38 == 0) goto LAB_0cae6234;
    }
    lVar45 = uVar35 - uVar38;
    piVar29 = piVar29 + uVar38 * 0x1a;
    do {
      if (*piVar29 != 0x7fffffff) {
        *piVar29 = *piVar29 + 1;
      }
      piVar29 = piVar29 + 0x1a;
      lVar45 = lVar45 + -1;
    } while (lVar45 != 0);
  }
LAB_0cae6234:
  if ((int)param_1[0x232] != 0x7fffffff) {
    *(int *)(param_1 + 0x232) = (int)param_1[0x232] + 1;
  }
LAB_0cae624d:
  param_1[0x1e] = *plStack_a0;
  func_0x0412d6b0(param_1);
  return;
}



/* ---- referenced strings ----
 * 0x12685be  minecraft:set_trap
 */
