/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x527ab30 (ELF vaddr 0x517ab30)
 * Label: OverworldGeneratorMultinoise::vslot15
 * Body:  [[0527ab30, 0527afa8] [0527afb0, 0527afbe] [0527afc0, 0527b073] [0527b080, 0527b375] [0527b380, 0527b580] [0527b590, 0527b64e] [0527b650, 0527b69b] [0527b6a0, 0527ba07] [0527ba10, 0527bb04] [0527bb10, 0527bba0] [0527bbb0, 0527c10e] [0527c1f8, 0527c225] [0527c38d, 0527c42a]]
 * Ghidra: wg_OverworldGeneratorMultinoise__vslot15
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_OverworldGeneratorMultinoise__vslot15(long *param_1,long *param_2)

{
  ulong *puVar1;
  long *plVar2;
  float *pfVar3;
  undefined4 *puVar4;
  code *pcVar5;
  int iVar6;
  long **pplVar7;
  long *plVar8;
  char cVar9;
  short sVar10;
  float extraout_EAX;
  int iVar11;
  undefined4 uVar12;
  long lVar13;
  long *plVar14;
  undefined1 (*pauVar15) [16];
  float extraout_var;
  undefined8 *puVar16;
  uint *puVar17;
  short *psVar18;
  long lVar19;
  long *plVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  short sVar23;
  long lVar24;
  long lVar25;
  long *plVar26;
  uint uVar27;
  ulong uVar28;
  undefined1 uVar29;
  int iVar30;
  short sVar31;
  int iVar32;
  ulong uVar33;
  uint uVar34;
  ulong uVar35;
  ulong uVar36;
  undefined *puVar37;
  undefined *puVar38;
  undefined1 uVar39;
  float fVar40;
  undefined *puVar41;
  float fVar42;
  float fStack_3a4;
  long **pplStack_378;
  long *plStack_370;
  float fStack_368;
  float fStack_364;
  float fStack_360;
  float fStack_35c;
  long *plStack_358;
  long lStack_350;
  uint uStack_348;
  int iStack_344;
  long *plStack_340;
  undefined8 uStack_338;
  long alStack_330 [6];
  long lStack_300;
  long lStack_2f8;
  undefined8 uStack_2f0;
  int iStack_2e8;
  int iStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined8 uStack_2d8;
  long *plStack_2d0;
  undefined *puStack_2c8;
  long *plStack_2c0;
  long alStack_2b8 [2];
  undefined **ppuStack_2a8;
  long *plStack_298;
  long lStack_288;
  undefined1 (*pauStack_280) [16];
  long *plStack_278;
  ulong uStack_270;
  long alStack_268 [6];
  undefined8 uStack_238;
  int iStack_230;
  long *plStack_228;
  undefined8 uStack_220;
  uint uStack_218;
  short sStack_214;
  byte bStack_212;
  long lStack_210;
  ulong uStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined *apuStack_1f0 [4];
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  undefined1 auStack_1b8 [16];
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined2 uStack_188;
  long *plStack_180;
  undefined8 *puStack_178;
  undefined4 uStack_170;
  long lStack_16c;
  long *plStack_160;
  undefined *puStack_158;
  long *plStack_150;
  long *plStack_148;
  long lStack_140;
  undefined **ppuStack_138;
  long **pplStack_128;
  long alStack_118 [4];
  long *plStack_f8;
  undefined8 uStack_e8;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  byte bStack_40;
  
  lVar13 = func_0x052be680(param_1 + 0x28);
  uStack_1f8 = (**(code **)(*(long *)param_1[4] + 0x438))();
  plVar14 = (long *)(**(code **)(*param_1 + 0x188))(param_1);
  (**(code **)(*param_1 + 0x1e8))(auStack_1b8,param_1,param_2[10]);
  func_0x0d2eeb90(apuStack_1f0,
                  CONCAT44((int)((ulong)param_2[10] >> 0x1c) >> 2,(int)param_2[10] << 2) &
                  0xfffffffcffffffff,param_1 + 0xe,4);
  puVar1 = (ulong *)(param_2 + 10);
  func_0x0ca71350(param_1,param_1[5],puVar1,plVar14);
  func_0x0ca71230(param_1,param_1[5],puVar1,plVar14,apuStack_1f0);
  lVar25 = *(long *)(lVar13 + 0xa2208);
  if (*(char *)(lVar25 + 0x9e7) == '\x01') {
    uVar27 = (int)param_2[10] * 0x14609048 + *(int *)((long)param_2 + 0x54) * 0x7ebe2d5;
    *(uint *)(lVar25 + 8) = uVar27;
    *(undefined2 *)(lVar25 + 0x9e4) = 0;
    *(undefined4 *)(lVar25 + 0x9d4) = 0;
    *(undefined8 *)(lVar25 + 0x9d8) = 0;
    *(uint *)(lVar25 + 0xc) = uVar27;
    lVar24 = 5;
    while( true ) {
      uVar28 = ((ulong)((uVar27 >> 0x1e ^ uVar27) * 0x6c078965) + lVar24) - 4;
      uVar27 = (uint)uVar28;
      *(uint *)(lVar25 + -4 + lVar24 * 4) = uVar27;
      if (lVar24 == 0x191) break;
      uVar27 = (((uint)(uVar28 >> 0x1e) & 3 ^ uVar27) * 0x6c078965 + (int)lVar24) - 3;
      *(uint *)(lVar25 + lVar24 * 4) = uVar27;
      lVar24 = lVar24 + 2;
    }
    *(undefined8 *)(lVar25 + 0x9cc) = 0x18e00000270;
  }
  if ((_DAT_0f6ffb10 == (long *)0x0) &&
     (cVar9 = func_0x0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868,&UNK_013a2901),
     cVar9 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  plVar2 = (long *)(lVar13 + 0xa1810);
  lStack_300 = lVar13 + 0x1800;
  lStack_2f8 = lVar13 + 0xa1800;
  uStack_2e0 = *(undefined4 *)(*_DAT_0f6ffb10 + 0x200);
  uStack_2dc = *(undefined4 *)(*_DAT_0f6ffb10 + 0x204);
  iStack_2e4 = (int)*(short *)(param_2[6] + 0xa8);
  uStack_2f0 = 0x14000000010;
  iStack_2e8 = 0x10;
  lVar25 = 0x312;
  do {
    puVar4 = (undefined4 *)(lVar13 + -0x90 + lVar25 * 8);
    *puVar4 = uStack_2e0;
    puVar4[1] = uStack_2dc;
    puVar4[2] = uStack_2e0;
    puVar4[3] = uStack_2dc;
    puVar4 = (undefined4 *)(lVar13 + -0x80 + lVar25 * 8);
    *puVar4 = uStack_2e0;
    puVar4[1] = uStack_2dc;
    puVar4[2] = uStack_2e0;
    puVar4[3] = uStack_2dc;
    puVar4 = (undefined4 *)(lVar13 + -0x70 + lVar25 * 8);
    *puVar4 = uStack_2e0;
    puVar4[1] = uStack_2dc;
    puVar4[2] = uStack_2e0;
    puVar4[3] = uStack_2dc;
    puVar4 = (undefined4 *)(lVar13 + -0x60 + lVar25 * 8);
    *puVar4 = uStack_2e0;
    puVar4[1] = uStack_2dc;
    puVar4[2] = uStack_2e0;
    puVar4[3] = uStack_2dc;
    puVar4 = (undefined4 *)(lVar13 + -0x50 + lVar25 * 8);
    *puVar4 = uStack_2e0;
    puVar4[1] = uStack_2dc;
    puVar4[2] = uStack_2e0;
    puVar4[3] = uStack_2dc;
    puVar4 = (undefined4 *)(lVar13 + -0x40 + lVar25 * 8);
    *puVar4 = uStack_2e0;
    puVar4[1] = uStack_2dc;
    puVar4[2] = uStack_2e0;
    puVar4[3] = uStack_2dc;
    puVar4 = (undefined4 *)(lVar13 + -0x30 + lVar25 * 8);
    *puVar4 = uStack_2e0;
    puVar4[1] = uStack_2dc;
    puVar4[2] = uStack_2e0;
    puVar4[3] = uStack_2dc;
    puVar4 = (undefined4 *)(lVar13 + -0x20 + lVar25 * 8);
    *puVar4 = uStack_2e0;
    puVar4[1] = uStack_2dc;
    puVar4[2] = uStack_2e0;
    puVar4[3] = uStack_2dc;
    puVar4 = (undefined4 *)(lVar13 + -0x10 + lVar25 * 8);
    *puVar4 = uStack_2e0;
    puVar4[1] = uStack_2dc;
    puVar4[2] = uStack_2e0;
    puVar4[3] = uStack_2dc;
    puVar4 = (undefined4 *)(lVar13 + lVar25 * 8);
    *puVar4 = uStack_2e0;
    puVar4[1] = uStack_2dc;
    puVar4[2] = uStack_2e0;
    puVar4[3] = uStack_2dc;
    lVar25 = lVar25 + 0x14;
  } while (lVar25 != 0x14312);
  (**(code **)(*param_1 + 0x1e0))
            (&pplStack_378,param_1,puVar1,apuStack_1f0,(int)*(short *)(param_1[5] + 0xa8),0x140,
             (int)*(short *)(param_1[5] + 0xac));
  (**(code **)(*plVar14 + 0x20))(plVar14,param_2,auStack_1b8);
  pauVar15 = (undefined1 (*) [16])(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
  if (pauVar15 == (undefined1 (*) [16])0x0) {
    FUN_0eec74c0(0x18,0);
  }
  *pauVar15 = (undefined1  [16])0x0;
  *(undefined8 *)pauVar15[1] = 0;
  lVar25 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x200);
  if (lVar25 == 0) {
    FUN_0eec74c0(0x200,0);
  }
  *(long *)*pauVar15 = lVar25;
  *(long *)pauVar15[1] = lVar25 + 0x200;
  func_0x0eee2dd0(lVar25,0,0x200);
  *(long *)(*pauVar15 + 8) = lVar25 + 0x200;
  puStack_158 = &UNK_0ef9fb50;
  pauStack_280 = pauVar15;
  plStack_150 = param_2;
  ppuStack_138 = &puStack_158;
  (**(code **)(*param_1 + 0x200))
            (param_1,&lStack_300,puVar1,auStack_1b8,pplStack_378,&puStack_158,1,pauVar15);
  if (ppuStack_138 == &puStack_158) {
    lVar25 = 0x20;
LAB_0527af14:
    (**(code **)(*ppuStack_138 + lVar25))();
  }
  else {
    lVar25 = 0x28;
    if (ppuStack_138 != (undefined **)0x0) goto LAB_0527af14;
  }
  pauStack_280 = (undefined1 (*) [16])0x0;
  plVar20 = (long *)param_2[0x1fa];
  param_2[0x1fa] = (long)pauVar15;
  if (plVar20 != (long *)0x0) {
    lVar25 = *plVar20;
    if (lVar25 != 0) {
      plVar20[1] = lVar25;
      func_0x0412a280(lVar25,plVar20[2] - lVar25);
    }
    func_0x0412a280(plVar20,0x18);
  }
  plStack_358 = plVar14;
  lStack_350 = lVar13;
  func_0x0cc41df0(0xf6ff9e0,0xf713fc8,1);
  iVar30 = 0;
  fStack_368 = extraout_EAX;
  fStack_364 = extraout_var;
  fStack_360 = extraout_EAX;
  fStack_35c = extraout_var;
  do {
    iVar32 = 0;
    do {
      iVar11 = (**(code **)(*plVar2 + 0x18))(plVar2,4);
      uVar27 = iVar11 + 2;
      if (uVar27 != 0) {
        iVar11 = iStack_2e8 * iVar30 + iVar32;
        uVar28 = (ulong)uVar27;
        if (uVar27 < 0xe) {
LAB_0527b003:
          uVar33 = 0;
        }
        else {
          uVar34 = iVar11 * uStack_2f0._4_4_;
          if (CARRY4((uint)(uVar28 - 1),uVar34)) goto LAB_0527b003;
          uVar33 = 0;
          if (uVar28 - 1 >> 0x20 == 0) {
            uVar33 = (ulong)(uVar27 & 0xfffffffc);
            uVar35 = uVar33;
            do {
              puVar16 = (undefined8 *)(lStack_300 + (ulong)uVar34 * 8);
              *puVar16 = CONCAT44(fStack_364,fStack_368);
              puVar16[1] = CONCAT44(fStack_35c,fStack_360);
              puVar16 = (undefined8 *)(lStack_300 + 0x10 + (ulong)uVar34 * 8);
              *puVar16 = CONCAT44(fStack_364,fStack_368);
              puVar16[1] = CONCAT44(fStack_35c,fStack_360);
              uVar34 = uVar34 + 4;
              uVar35 = uVar35 - 4;
            } while (uVar35 != 0);
            if ((uVar27 & 0xfffffffc) == uVar27) goto LAB_0527afc0;
          }
        }
        uVar36 = uVar28 & 3;
        uVar35 = uVar33;
        if ((uVar27 & 3) != 0) {
          do {
            pfVar3 = (float *)(lStack_300 +
                              (ulong)(uint)(iVar11 * uStack_2f0._4_4_ + (int)uVar35) * 8);
            *pfVar3 = extraout_EAX;
            pfVar3[1] = extraout_var;
            uVar35 = uVar35 + 1;
            uVar36 = uVar36 - 1;
          } while (uVar36 != 0);
        }
        if (uVar33 - uVar28 < 0xfffffffffffffffd) {
          iVar11 = iVar11 * uStack_2f0._4_4_;
          do {
            iVar6 = (int)uVar35;
            pfVar3 = (float *)(lStack_300 + (ulong)(uint)(iVar11 + iVar6) * 8);
            *pfVar3 = extraout_EAX;
            pfVar3[1] = extraout_var;
            pfVar3 = (float *)(lStack_300 + (ulong)(iVar11 + iVar6 + 1) * 8);
            *pfVar3 = extraout_EAX;
            pfVar3[1] = extraout_var;
            pfVar3 = (float *)(lStack_300 + (ulong)(uint)(iVar11 + 2 + iVar6) * 8);
            *pfVar3 = extraout_EAX;
            pfVar3[1] = extraout_var;
            pfVar3 = (float *)(lStack_300 + (ulong)(iVar11 + iVar6 + 3) * 8);
            *pfVar3 = extraout_EAX;
            pfVar3[1] = extraout_var;
            uVar35 = uVar35 + 4;
          } while (uVar28 != uVar35);
        }
      }
LAB_0527afc0:
      iVar32 = iVar32 + 1;
    } while (iVar32 != 0x10);
    iVar30 = iVar30 + 1;
  } while (iVar30 != 0x10);
  lVar25 = (**(code **)(*(long *)param_2[5] + 0x568))();
  puVar38 = (undefined *)(lVar25 + 0x50);
  puVar41 = puVar38;
  if ((*(char *)(lVar25 + 0x77) == '\0') &&
     (((puVar37 = (undefined *)(lVar25 + 0x70), *(char *)(lVar25 + 0x68) != '\0' ||
       (puVar41 = puVar37, (*(byte *)(lVar25 + 0x56) & 1) != 0)) &&
      (cVar9 = func_0x04fa7a10(puVar37,puVar38), puVar41 = puVar38, cVar9 != '\0')))) {
    puVar41 = puVar37;
  }
  if (((puVar41[6] | puVar41[0x18]) & 1) == 0) {
    puVar41 = &DAT_0f72b850;
  }
  if ((DAT_0f5a2858 == '\0') && (puVar41[0x18] == '\0')) {
    bStack_212 = 1;
    if (((DAT_0f5a2846 & 1) != 0) && (puVar41[7] == '\0')) {
      bStack_212 = func_0x04fa7a10(puVar41,0xf5a2840);
      bStack_212 = bStack_212 ^ 1;
    }
  }
  else {
    bStack_212 = 0;
  }
  lVar25 = param_1[5];
  sVar31 = *(short *)(lVar25 + 0xa8);
  uVar12 = *(undefined4 *)(lVar25 + 0xa8);
  sVar10 = *(short *)(lVar25 + 0xac);
  puVar16 = (undefined8 *)(**(code **)(*param_1 + 0x1f8))();
  sStack_214 = sVar10 - sVar31;
  uStack_220 = *puVar16;
  uStack_218 = (uint)(bStack_212 ^ 1);
  plStack_228 = plVar2;
  func_0x0c855c80(&puStack_158,param_2);
  plStack_370 = (long *)CONCAT71(plStack_370._1_7_,bStack_40);
  iStack_344 = (int)sVar31;
  if (bStack_40 == 0) {
    lVar13 = lStack_350 + 0x1000;
    lVar25 = 0;
  }
  else {
    puVar17 = (uint *)(**(code **)(*param_1 + 0x1f0))();
    lVar13 = lStack_350 + 0x1000;
    func_0x0eee2dd0(lVar13,0,0x400);
    uVar27 = *puVar17;
    if ((ulong)uVar27 != 0) {
      lVar25 = 0;
      fVar42 = _DAT_011983f0;
      do {
        fStack_368 = fVar42;
        func_0x0d2ebd50(*(long *)(puVar17 + 2) + lVar25,lVar13,0x10,0x10);
        fVar42 = fStack_368 * _DAT_011986e0;
        lVar25 = lVar25 + 0x80c;
      } while ((ulong)uVar27 * 0x80c - lVar25 != 0);
    }
    lVar25 = 0;
    if ((bStack_40 & 1) != 0) {
      lVar25 = lVar13;
    }
  }
  func_0x0c856760(param_2,&lStack_300,apuStack_1f0,uVar12,lVar25,&plStack_228,&puStack_158);
  cVar9 = (**(code **)(*(long *)param_2[5] + 0xbe8))();
  if (cVar9 != '\0') {
    plStack_278 = alStack_268;
    uStack_270 = 0x600000000;
    FUN_0cafcfe0(param_2 + 0x24,&plStack_278);
    if ((uStack_270 & 0xffffffff) != 0) {
      plVar14 = plStack_278 + (uStack_270 & 0xffffffff);
      plVar20 = plStack_278;
      do {
        lVar25 = *plVar20;
        if ((DAT_0f5570f0 == '\0') && (iVar30 = func_0x04108328(&DAT_0f5570f0), iVar30 != 0)) {
          LOCK();
          UNLOCK();
          _DAT_0f5570e8 = _DAT_0f556458;
          _DAT_0f556458 = _DAT_0f556458 + 1;
          func_0x0410844d(&DAT_0f5570f0);
        }
        for (psVar18 = *(short **)(lVar25 + 0x170); psVar18 != *(short **)(lVar25 + 0x178);
            psVar18 = psVar18 + 8) {
          if (*psVar18 == _DAT_0f5570e8) {
            if ((*(long *)(psVar18 + 4) != 0) &&
               (plVar26 = plVar20, *(char *)(*(long *)(psVar18 + 4) + 0x48) != '\0'))
            goto LAB_0527b417;
            break;
          }
        }
        plVar20 = plVar20 + 1;
        plVar26 = plVar14;
      } while (plVar20 != plVar14);
LAB_0527b417:
      if (plVar26 != plStack_278 + (uStack_270 & 0xffffffff)) {
        if ((char)plStack_370 == '\0') {
          uVar28 = *puVar1;
          puVar17 = (uint *)(**(code **)(*param_1 + 0x1f0))(param_1);
          func_0x0eee2dd0(lVar13,0,0x400);
          uVar27 = *puVar17;
          if ((ulong)uVar27 != 0) {
            lVar25 = 0;
            fVar42 = _DAT_011983f0;
            do {
              fStack_368 = fVar42;
              func_0x0d2ebd50((float)((int)uVar28 << 4),
                              (float)(int)((uint)(uVar28 >> 0x1c) & 0xfffffff0),
                              fStack_368 * _DAT_01198a50,fStack_368 * _DAT_01198a50,
                              _DAT_01198b7c / fStack_368,*(long *)(puVar17 + 2) + lVar25,lVar13,0x10
                              ,0x10);
              lVar25 = lVar25 + 0x80c;
              fVar42 = fStack_368 * _DAT_011986e0;
            } while ((ulong)uVar27 * 0x80c - lVar25 != 0);
          }
        }
        lVar25 = 0;
        sVar31 = 0;
        do {
          lVar13 = 0;
          do {
            uVar21 = uStack_2d8;
            plStack_340 = alStack_330;
            uStack_338 = 0x200000000;
            uVar39 = (undefined1)lVar25;
            uVar29 = (undefined1)lVar13;
            uStack_2d8._0_2_ = CONCAT11(uVar29,uVar39);
            uStack_2d8._4_4_ = SUB84(uVar21,4);
            uStack_2d8._0_4_ = (uint)(ushort)uStack_2d8;
            lVar24 = func_0x0caf8020(param_2,&uStack_2d8);
            iVar30 = iStack_344;
            iVar32 = (int)param_2[7] + (int)lVar25;
            iStack_230 = (int)param_2[8] + (int)lVar13;
            uStack_238 = CONCAT44(((int)sVar31 + *(int *)((long)param_2 + 0x3c)) - iStack_344,iVar32
                                 );
            uVar28 = (**(code **)(apuStack_1f0[0] + 0x10))
                               (apuStack_1f0,CONCAT44(iStack_230 >> 2,iVar32 >> 2));
            if ((uVar28 & 0x10000) == 0) {
              sVar31 = *(short *)(param_1[5] + 0xa8);
            }
            else {
              sVar10 = (short)uVar28 + -8;
              sVar31 = *(short *)(param_1[5] + 0xa8);
              if ((sVar31 <= sVar10) &&
                 (sVar23 = *(short *)(param_1[5] + 0xaa) + -1, sVar31 = sVar10, sVar23 < sVar10)) {
                sVar31 = sVar23;
              }
            }
            fVar42 = 0.0;
            fStack_368 = (float)(sVar31 - iVar30);
            if ((int)fStack_368 < 0) {
              sVar31 = 0;
            }
            else {
              fStack_3a4 = 0.0;
              sVar31 = 0;
              do {
                uVar21 = uStack_2d8;
                uStack_2d8._0_2_ = CONCAT11(uVar29,uVar39);
                uStack_2d8._4_4_ = SUB84(uVar21,4);
                uStack_2d8._0_4_ = CONCAT22(sVar31,(ushort)uStack_2d8);
                lVar19 = func_0x0caf8020(param_2,&uStack_2d8);
                fVar40 = (float)(int)sVar31;
                if (*(short *)(lVar19 + 0x168) == *(short *)(lVar24 + 0x168)) {
                  fVar42 = fVar40;
                }
                if ((fStack_368 == fVar40) ||
                   (*(short *)(lVar19 + 0x168) != *(short *)(lVar24 + 0x168))) {
                  if ((DAT_0f5570f0 == '\0') &&
                     (iVar30 = func_0x04108328(&DAT_0f5570f0), iVar30 != 0)) {
                    LOCK();
                    UNLOCK();
                    _DAT_0f5570e8 = _DAT_0f556458;
                    _DAT_0f556458 = _DAT_0f556458 + 1;
                    func_0x0410844d(&DAT_0f5570f0);
                  }
                  for (psVar18 = *(short **)(lVar24 + 0x170); psVar18 != *(short **)(lVar24 + 0x178)
                      ; psVar18 = psVar18 + 8) {
                    if (*psVar18 == _DAT_0f5570e8) {
                      lVar19 = *(long *)(psVar18 + 4);
                      if ((lVar19 != 0) && (*(char *)(lVar19 + 0x48) == '\x01')) {
                        uVar28 = uStack_338 & 0xffffffff;
                        plVar14 = plStack_340 + uVar28 * 3;
                        if ((uint)uStack_338 == uStack_338._4_4_) {
                          lStack_288 = uVar28 * 3;
                          plStack_200 = plVar14;
                          if ((uint)uStack_338 == 0xffffffff) {
                            puVar16 = (undefined8 *)func_0x041086b0(0x10);
                            func_0x0412bf30(puVar16,&UNK_011ed0d9);
                            *puVar16 = &UNK_0eeec920;
                            lVar25 = func_0x041088a0(puVar16,&UNK_0eeec938,&LAB_0412bce0);
                            lVar13 = 0x20;
                            if ((ppuStack_2a8 == (undefined **)(ulong)(uint)fVar40) ||
                               (lVar13 = 0x28, ppuStack_2a8 != (undefined **)0x0)) {
                              (**(code **)((long)*ppuStack_2a8 + lVar13))();
                            }
                            func_0x0527c430(&pauStack_280);
                            func_0x0527aaa0(&pplStack_378);
                            apuStack_1f0[0] = &UNK_0f460460;
                            if (lStack_1d0 != 0) goto LAB_0527c3d5;
                            while (lStack_1a8 == 0) {
                              lStack_1d0 = lVar25;
                              func_0x0eee2d70();
LAB_0527c3d5:
                              lStack_1c8 = lStack_1d0;
                              func_0x0412a280();
                            }
                            func_0x0412a280(lStack_1a8,lStack_198 - lStack_1a8);
                            uVar21 = func_0x0eee2d70(lVar25);
                            uVar21 = func_0x04882e20(uVar21);
                            func_0x04882e20(uVar21);
                            pcVar5 = (code *)swi(3);
                            (*pcVar5)();
                            return;
                          }
                          uStack_348 = (uint)uStack_338 + 1;
                          uVar33 = (ulong)((float)uVar28 * _DAT_0119858c);
                          uStack_208 = uVar33 & 0xffffffff;
                          if ((uint)uVar33 < uStack_348) {
                            uStack_208 = (ulong)uStack_348;
                          }
                          uVar27 = (uint)(long)((float)uVar28 / _DAT_0119858c);
                          if (CARRY4(uVar27,(uint)uStack_338)) {
                            uStack_208 = 0xffffffff;
                          }
                          lStack_210 = uStack_208 * 0x18;
                          plStack_370 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))
                                                          (&DAT_0f5463b0,lStack_210,uStack_348,
                                                           uVar27 + (uint)uStack_338);
                          if (plStack_370 == (long *)0x0) {
                            FUN_0eec74c0(lStack_210,0);
                          }
                          plVar8 = plStack_340;
                          plVar14 = plStack_370;
                          plStack_370[lStack_288] = lVar24;
                          plStack_370[lStack_288 + 1] = lVar19 + 0x28;
                          plStack_370[lStack_288 + 2] = CONCAT44(fVar42,fStack_3a4);
                          plVar20 = plStack_370;
                          plVar26 = plStack_340;
                          if (plStack_200 == plStack_340 + (uStack_338 & 0xffffffff) * 3) {
                            if ((uStack_338 & 0xffffffff) != 0) {
                              do {
                                plVar20[2] = plVar26[2];
                                lVar24 = plVar26[1];
                                *plVar20 = *plVar26;
                                plVar20[1] = lVar24;
                                plVar26 = plVar26 + 3;
                                plVar20 = plVar20 + 3;
                              } while (plVar26 != plStack_200);
                            }
                          }
                          else {
                            for (; plVar26 != plStack_200; plVar26 = plVar26 + 3) {
                              plVar20[2] = plVar26[2];
                              lVar24 = plVar26[1];
                              *plVar20 = *plVar26;
                              plVar20[1] = lVar24;
                              plVar20 = plVar20 + 3;
                            }
                            func_0x0eee2f00(plStack_370 + lStack_288 + 3,plStack_200,
                                            ((ulong)((long)(plStack_340 +
                                                           (uStack_338 & 0xffffffff) * 3) +
                                                    (-0x18 - (long)plStack_200)) / 0x18) * 0x18 +
                                            0x18);
                          }
                          if (plVar8 != (long *)0x0 && alStack_330 != plVar8) {
                            (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,plVar8);
                          }
                          uStack_338 = uStack_208 << 0x20;
                          uVar27 = uStack_348;
                          plStack_340 = plVar14;
                        }
                        else {
                          *plVar14 = lVar24;
                          plVar14[1] = lVar19 + 0x28;
                          plVar14[2] = CONCAT44(fVar42,fStack_3a4);
                          uVar27 = (uint)uStack_338 + 1;
                        }
                        uStack_338 = CONCAT44(uStack_338._4_4_,uVar27);
                      }
                      break;
                    }
                  }
                  uVar21 = uStack_2d8;
                  uStack_2d8._0_2_ = CONCAT11(uVar29,uVar39);
                  uStack_2d8._4_4_ = SUB84(uVar21,4);
                  uStack_2d8._0_4_ = CONCAT22(sVar31,(ushort)uStack_2d8);
                  lVar24 = func_0x0caf8020(param_2,&uStack_2d8);
                  fVar42 = fVar40;
                  fStack_3a4 = fVar40;
                }
                sVar31 = sVar31 + 1;
              } while ((int)sVar31 <= (int)fStack_368);
            }
            if ((uStack_338 & 0xffffffff) != 0) {
              plVar14 = plStack_340 + (uStack_338 & 0xffffffff) * 3;
              plVar20 = plStack_340;
              do {
                func_0x0c851900(&uStack_2d8,*plVar20,plVar20[1]);
                uStack_170 = *(undefined4 *)(lStack_350 + 0x1000 + (lVar13 * 0x10 + lVar25) * 4);
                lStack_16c = plVar20[2];
                lStack_190 = param_2[0x1fa];
                uStack_188 = *(undefined2 *)((long)param_2 + 0x3c);
                plStack_180 = &lStack_300;
                puStack_178 = &uStack_238;
                plStack_160 = &lStack_190;
                if (plStack_2d0 != (long *)0x0) {
                  (**(code **)(*plStack_2d0 + 0x28))
                            (plStack_2d0,&plStack_228,&uStack_2d8,&plStack_180);
                }
                if (plStack_298 == alStack_2b8) {
                  lVar24 = 0x20;
LAB_0527ba15:
                  (**(code **)(*plStack_298 + lVar24))();
                }
                else {
                  lVar24 = 0x28;
                  if (plStack_298 != (long *)0x0) goto LAB_0527ba15;
                }
                plVar20 = plVar20 + 3;
              } while (plVar20 != plVar14);
            }
            if (plStack_340 != (long *)0x0 && alStack_330 != plStack_340) {
              (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,plStack_340);
            }
            lVar13 = lVar13 + 1;
          } while (lVar13 != 0x10);
          lVar25 = lVar25 + 1;
        } while (lVar25 != 0x10);
      }
    }
    if (plStack_278 != (long *)0x0 && alStack_268 != plStack_278) {
      (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0);
    }
  }
  lVar13 = lStack_58;
  lVar25 = lStack_50;
  if (lStack_58 != 0) {
    for (; lVar13 != lVar25; lVar25 = lVar25 + -0x50) {
      plVar14 = *(long **)(lVar25 + -0x10);
      if ((long *)(lVar25 + -0x30) == plVar14) {
        lVar24 = 0x20;
LAB_0527bbb5:
        (**(code **)(*plVar14 + lVar24))();
      }
      else {
        lVar24 = 0x28;
        if (plVar14 != (long *)0x0) goto LAB_0527bbb5;
      }
    }
    lStack_50 = lVar13;
    func_0x0412a280(lStack_58,lStack_48 - lStack_58);
  }
  uStack_2d8 = pplStack_378;
  puStack_2c8 = &UNK_0ef9fb50;
  plStack_298 = (long *)0x0;
  plStack_2c0 = param_2;
  ppuStack_2a8 = &puStack_2c8;
  if ((char)param_1[0x26] == '\0') {
    lVar25 = param_2[5];
    uVar12 = (**(code **)(*(long *)param_2[6] + 0x18))();
    puStack_158 = &UNK_0f3eb4b0;
    plStack_150 = &lStack_300;
    plStack_148 = plStack_358;
    ppuStack_138 = (undefined **)CONCAT44(ppuStack_138._4_4_,uVar12);
    pplStack_128 = uStack_2d8;
    lStack_140 = lVar25;
    if (ppuStack_2a8 == (undefined **)0x0) {
      plStack_f8 = (long *)0x0;
    }
    else if (ppuStack_2a8 == &puStack_2c8) {
      plStack_f8 = alStack_118;
      (**(code **)(*ppuStack_2a8 + 0x18))(ppuStack_2a8,alStack_118);
    }
    else {
      plStack_f8 = (long *)(**(code **)(*ppuStack_2a8 + 0x10))();
    }
    uStack_e8 = plStack_298;
    plStack_278 = (long *)((ulong)CONCAT42((int)((ulong)plStack_278 >> 0x20),
                                           -*(short *)(param_2[6] + 0xa8)) << 0x10);
    uVar21 = func_0x0caf8020(param_2,&plStack_278);
    (**(code **)(*param_1 + 0x1b8))(param_1,uVar21,param_2,&puStack_158,plVar2,puVar1);
    uVar21 = uStack_1f8;
    puStack_158 = &UNK_0f3eb4b0;
    if (plStack_f8 == alStack_118) {
      lVar25 = 0x20;
LAB_0527bd85:
      (**(code **)(*plStack_f8 + lVar25))();
    }
    else {
      lVar25 = 0x28;
      if (plStack_f8 != (long *)0x0) goto LAB_0527bd85;
    }
    lVar25 = (**(code **)(*(long *)param_2[5] + 0x568))();
    puVar38 = (undefined *)(lVar25 + 0x50);
    puVar41 = puVar38;
    if ((*(char *)(lVar25 + 0x77) == '\0') &&
       (((puVar37 = (undefined *)(lVar25 + 0x70), *(char *)(lVar25 + 0x68) != '\0' ||
         (puVar41 = puVar37, (*(byte *)(lVar25 + 0x56) & 1) != 0)) &&
        (cVar9 = func_0x04fa7a10(puVar37,puVar38), puVar41 = puVar38, cVar9 != '\0')))) {
      puVar41 = puVar37;
    }
    puVar38 = &DAT_0f72b850;
    if (((puVar41[6] | puVar41[0x18]) & 1) != 0) {
      puVar38 = puVar41;
    }
    if (((((DAT_0f5a2e08 != '\0') || (puVar38[0x18] != '\0')) ||
         ((puVar41 = &UNK_0158fc54, (DAT_0f5a2df6 & 1) != 0 &&
          ((puVar38[7] == '\0' && (cVar9 = func_0x04fa7a10(puVar38,0xf5a2df0), cVar9 != '\0'))))))
        && (puVar41 = &UNK_0158fc34, DAT_0f5a2858 == '\0')) &&
       ((puVar38[0x18] == '\0' &&
        ((((DAT_0f5a2846 & 1) == 0 || (puVar38[7] != '\0')) ||
         (cVar9 = func_0x04fa7a10(puVar38,0xf5a2840), cVar9 == '\0')))))) {
      puVar41 = &UNK_0158fc44;
    }
    uVar22 = (**(code **)(*(long *)param_2[5] + 0x2b0))();
    if (((DAT_0f5a2858 != '\0') || (puVar38[0x18] != '\0')) ||
       (((DAT_0f5a2846 & 1) != 0 &&
        ((puVar38[7] == '\0' && (cVar9 = func_0x04fa7a10(puVar38,0xf5a2840), cVar9 != '\0')))))) {
      puStack_158 = (undefined *)0x0;
      pplStack_128 = (long **)0x0;
      alStack_118[0] = 0;
      func_0x04a89150(param_1 + 0x3c,&lStack_300,puVar1,plStack_358,puVar41,plVar2,uVar21,
                      &puStack_158,uVar22);
      if (pplStack_128 == &plStack_148) {
        lVar25 = 0x20;
      }
      else {
        lVar25 = 0x28;
        if (pplStack_128 == (long **)0x0) goto LAB_0527bf1a;
      }
      (**(code **)((long)*pplStack_128 + lVar25))();
    }
LAB_0527bf1a:
    func_0x04a89150(param_1 + 0x3a,&lStack_300,puVar1,plStack_358,puVar41,plVar2,uVar21,&uStack_2d8,
                    uVar22);
  }
  func_0x0cae2040(param_2,&lStack_300,0);
  func_0x0cafad60(param_2,0);
  if (param_2[0xc] == 0) {
    param_2[0xc] = (long)param_1;
  }
  func_0x0cae0970(param_2,1,2);
  if (ppuStack_2a8 == &puStack_2c8) {
    lVar25 = 0x20;
  }
  else {
    lVar25 = 0x28;
    pplVar7 = pplStack_378;
    if (ppuStack_2a8 == (undefined **)0x0) goto joined_r0x0527bfe2;
  }
  (**(code **)(*ppuStack_2a8 + lVar25))();
  pplVar7 = pplStack_378;
joined_r0x0527bfe2:
  pplStack_378 = (long **)0x0;
  if (pplVar7 != (long **)0x0) {
    pplStack_378 = (long **)0x0;
    plVar14 = pplVar7[8];
    if (plVar14 != (long *)0x0) {
      pplVar7[9] = plVar14;
      func_0x0412a280(plVar14,(long)pplVar7[10] - (long)plVar14);
    }
    func_0x0412a280(pplVar7,0x68);
  }
  apuStack_1f0[0] = &UNK_0f460460;
  if (lStack_1d0 != 0) {
    lStack_1c8 = lStack_1d0;
    func_0x0412a280(lStack_1d0,lStack_1c0 - lStack_1d0);
  }
  if (lStack_1a8 != 0) {
    lStack_1a0 = lStack_1a8;
    func_0x0412a280(lStack_1a8,lStack_198 - lStack_1a8);
  }
  return;
}



/* ---- assembly ---- */
/* 0527ab30 */  PUSH RBP
/* 0527ab31 */  PUSH R15
/* 0527ab33 */  PUSH R14
/* 0527ab35 */  PUSH R13
/* 0527ab37 */  PUSH R12
/* 0527ab39 */  PUSH RBX
/* 0527ab3a */  SUB RSP,0x378
/* 0527ab41 */  MOV R15,RSI
/* 0527ab44 */  MOV RBX,RDI
/* 0527ab47 */  ADD RDI,0x140
/* 0527ab4e */  CALL 0x052be680
/* 0527ab53 */  MOV RBP,RAX
/* 0527ab56 */  MOV RDI,qword ptr [RBX + 0x20]
/* 0527ab5a */  MOV RAX,qword ptr [RDI]
/* 0527ab5d */  CALL qword ptr [RAX + 0x438]
/* 0527ab63 */  MOV qword ptr [RSP + 0x1b0],RAX
/* 0527ab6b */  MOV RAX,qword ptr [RBX]
/* 0527ab6e */  MOV RDI,RBX
/* 0527ab71 */  CALL qword ptr [RAX + 0x188]
/* 0527ab77 */  MOV R13,RAX
/* 0527ab7a */  MOV RDX,qword ptr [R15 + 0x50]
/* 0527ab7e */  MOV RAX,qword ptr [RBX]
/* 0527ab81 */  LEA RDI,[RSP + 0x1f0]
/* 0527ab89 */  MOV RSI,RBX
/* 0527ab8c */  CALL qword ptr [RAX + 0x1e8]
/* 0527ab92 */  MOV RSI,qword ptr [R15 + 0x50]
/* 0527ab96 */  MOV RAX,RSI
/* 0527ab99 */  SHR RAX,0x1c
/* 0527ab9d */  SHL ESI,0x2
/* 0527aba0 */  SAR EAX,0x2
/* 0527aba3 */  AND EAX,0xfffffffc
/* 0527aba6 */  SHL RAX,0x20
/* 0527abaa */  OR RSI,RAX
/* 0527abad */  LEA RDX,[RBX + 0x70]
/* 0527abb1 */  LEA RDI,[RSP + 0x1b8]
/* 0527abb9 */  MOV ECX,0x4
/* 0527abbe */  CALL 0x0d2eeb90
/* 0527abc3 */  LEA R14,[R15 + 0x50]
/* 0527abc7 */  MOV RSI,qword ptr [RBX + 0x28]
/* 0527abcb */  MOV RDI,RBX
/* 0527abce */  MOV RDX,R14
/* 0527abd1 */  MOV RCX,R13
/* 0527abd4 */  CALL 0x0ca71350
/* 0527abd9 */  MOV RSI,qword ptr [RBX + 0x28]
/* 0527abdd */  LEA R8,[RSP + 0x1b8]
/* 0527abe5 */  MOV RDI,RBX
/* 0527abe8 */  MOV RDX,R14
/* 0527abeb */  MOV RCX,R13
/* 0527abee */  CALL 0x0ca71230
/* 0527abf3 */  MOV qword ptr [RSP + 0x18],R14
/* 0527abf8 */  MOV RAX,qword ptr [RBP + 0xa2208]
/* 0527abff */  CMP byte ptr [RAX + 0x9e7],0x1
/* 0527ac06 */  JNZ 0x0527ac9d
/* 0527ac0c */  IMUL ECX,dword ptr [R15 + 0x54],0x7ebe2d5
/* 0527ac14 */  IMUL EDX,dword ptr [R15 + 0x50],0x14609048
/* 0527ac1c */  ADD EDX,ECX
/* 0527ac1e */  MOV dword ptr [RAX + 0x8],EDX
/* 0527ac21 */  MOV word ptr [RAX + 0x9e4],0x0
/* 0527ac2a */  MOV dword ptr [RAX + 0x9d4],0x0
/* 0527ac34 */  MOV qword ptr [RAX + 0x9d8],0x0
/* 0527ac3f */  MOV dword ptr [RAX + 0xc],EDX
/* 0527ac42 */  MOV ECX,0x5
/* 0527ac47 */  NOP word ptr [RAX + RAX*0x1]
/* 0527ac50 */  MOV ESI,EDX
/* 0527ac52 */  SHR ESI,0x1e
/* 0527ac55 */  XOR ESI,EDX
/* 0527ac57 */  IMUL EDX,ESI,0x6c078965
/* 0527ac5d */  ADD RDX,RCX
/* 0527ac60 */  ADD RDX,-0x4
/* 0527ac64 */  MOV dword ptr [RAX + RCX*0x4 + -0x4],EDX
/* 0527ac68 */  CMP RCX,0x191
/* 0527ac6f */  JZ 0x0527ac8c
/* 0527ac71 */  MOV ESI,EDX
/* 0527ac73 */  SHR ESI,0x1e
/* 0527ac76 */  XOR ESI,EDX
/* 0527ac78 */  IMUL EDX,ESI,0x6c078965
/* 0527ac7e */  ADD EDX,ECX
/* 0527ac80 */  ADD EDX,-0x3
/* 0527ac83 */  MOV dword ptr [RAX + RCX*0x4],EDX
/* 0527ac86 */  ADD RCX,0x2
/* 0527ac8a */  JMP 0x0527ac50
/* 0527ac8c */  MOV RCX,0x18e00000270
/* 0527ac96 */  MOV qword ptr [RAX + 0x9cc],RCX
/* 0527ac9d */  CMP qword ptr [0x0f6ffb10],0x0
/* 0527aca5 */  JNZ 0x0527acde
/* 0527aca7 */  LEA RDI,[0x13a28c0]
/* 0527acae */  LEA RSI,[0x11e3821]
/* 0527acb5 */  LEA RCX,[0x13a2868]
/* 0527acbc */  LEA R8,[0x13a2901]
/* 0527acc3 */  MOV EDX,0x2fd
/* 0527acc8 */  XOR EAX,EAX
/* 0527acca */  CALL 0x0eeddcf0
/* 0527accf */  TEST AL,AL
/* 0527acd1 */  JZ 0x0527acde
/* 0527acd3 */  MOV dword ptr [0x00000000],0xdeadc0de
/* 0527acde */  LEA R14,[RBP + 0xa1810]
/* 0527ace5 */  LEA RCX,[RBP + 0x1800]
/* 0527acec */  LEA RDX,[RBP + 0xa1800]
/* 0527acf3 */  MOV RAX,qword ptr [0x0f6ffb10]
/* 0527acfa */  MOV RAX,qword ptr [RAX]
/* 0527acfd */  MOV RAX,qword ptr [RAX + 0x200]
/* 0527ad04 */  MOV RSI,qword ptr [R15 + 0x30]
/* 0527ad08 */  MOVSX ESI,word ptr [RSI + 0xa8]
/* 0527ad0f */  MOV qword ptr [RSP + 0xa8],RCX
/* 0527ad17 */  MOV qword ptr [RSP + 0xb0],RDX
/* 0527ad1f */  MOV RCX,0x14000000010
/* 0527ad29 */  MOV qword ptr [RSP + 0xb8],RCX
/* 0527ad31 */  MOV dword ptr [RSP + 0xc0],0x10
/* 0527ad3c */  MOV dword ptr [RSP + 0xc4],ESI
/* 0527ad43 */  MOVQ XMM0,RAX
/* 0527ad48 */  PSHUFD XMM0,XMM0,0x44
/* 0527ad4d */  MOV ECX,0x312
/* 0527ad52 */  NOP word ptr CS:[RAX + RAX*0x1]
/* 0527ad60 */  MOVDQU xmmword ptr [RBP + RCX*0x8 + -0x90],XMM0
/* 0527ad69 */  MOVDQU xmmword ptr [RBP + RCX*0x8 + -0x80],XMM0
/* 0527ad6f */  MOVDQU xmmword ptr [RBP + RCX*0x8 + -0x70],XMM0
/* 0527ad75 */  MOVDQU xmmword ptr [RBP + RCX*0x8 + -0x60],XMM0
/* 0527ad7b */  MOVDQU xmmword ptr [RBP + RCX*0x8 + -0x50],XMM0
/* 0527ad81 */  MOVDQU xmmword ptr [RBP + RCX*0x8 + -0x40],XMM0
/* 0527ad87 */  MOVDQU xmmword ptr [RBP + RCX*0x8 + -0x30],XMM0
/* 0527ad8d */  MOVDQU xmmword ptr [RBP + RCX*0x8 + -0x20],XMM0
/* 0527ad93 */  MOVDQU xmmword ptr [RBP + RCX*0x8 + -0x10],XMM0
/* 0527ad99 */  MOVDQU xmmword ptr [RBP + RCX*0x8],XMM0
/* 0527ad9f */  ADD RCX,0x14
/* 0527ada3 */  CMP RCX,0x14312
/* 0527adaa */  JNZ 0x0527ad60
/* 0527adac */  MOV qword ptr [RSP + 0xc8],RAX
/* 0527adb4 */  MOV RAX,qword ptr [RBX]
/* 0527adb7 */  MOV RCX,qword ptr [RBX + 0x28]
/* 0527adbb */  MOVSX R8D,word ptr [RCX + 0xa8]
/* 0527adc3 */  MOVSX R10D,word ptr [RCX + 0xac]
/* 0527adcb */  MOV RAX,qword ptr [RAX + 0x1e0]
/* 0527add2 */  SUB RSP,0x8
/* 0527add6 */  LEA RDI,[RSP + 0x38]
/* 0527addb */  LEA RCX,[RSP + 0x1c0]
/* 0527ade3 */  MOV RSI,RBX
/* 0527ade6 */  MOV RDX,qword ptr [RSP + 0x20]
/* 0527adeb */  MOV R9D,0x140
/* 0527adf1 */  PUSH R10
/* 0527adf3 */  CALL RAX
/* 0527adf5 */  ADD RSP,0x10
/* 0527adf9 */  MOV RAX,qword ptr [R13]
/* 0527adfd */  LEA RDX,[RSP + 0x1f0]
/* 0527ae05 */  MOV RDI,R13
/* 0527ae08 */  MOV RSI,R15
/* 0527ae0b */  CALL qword ptr [RAX + 0x20]
/* 0527ae0e */  MOV qword ptr [RSP + 0x28],R14
/* 0527ae13 */  MOV qword ptr [RSP + 0x8],RBX
/* 0527ae18 */  LEA RDI,[0xf5463b0]
/* 0527ae1f */  MOV RAX,qword ptr [0x0f5463b0]
/* 0527ae26 */  MOV ESI,0x18
/* 0527ae2b */  CALL qword ptr [RAX + 0x10]
/* 0527ae2e */  MOV R14,RAX
/* 0527ae31 */  TEST RAX,RAX
/* 0527ae34 */  JZ 0x0527c0a8
/* 0527ae3a */  PXOR XMM0,XMM0
/* 0527ae3e */  MOVDQU xmmword ptr [R14],XMM0
/* 0527ae43 */  MOV qword ptr [R14 + 0x10],0x0
/* 0527ae4b */  LEA RDI,[0xf5463b0]
/* 0527ae52 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0527ae59 */  MOV ESI,0x200
/* 0527ae5e */  CALL qword ptr [RAX + 0x10]
/* 0527ae61 */  MOV R12,RAX
/* 0527ae64 */  TEST RAX,RAX
/* 0527ae67 */  JZ 0x0527c0b9
/* 0527ae6d */  MOV qword ptr [R14],R12
/* 0527ae70 */  MOV RBX,R12
/* 0527ae73 */  ADD RBX,0x200
/* 0527ae7a */  MOV qword ptr [R14 + 0x10],RBX
/* 0527ae7e */  MOV EDX,0x200
/* 0527ae83 */  MOV RDI,R12
/* 0527ae86 */  XOR ESI,ESI
/* 0527ae88 */  CALL 0x0eee2dd0
/* 0527ae8d */  MOV qword ptr [R14 + 0x8],RBX
/* 0527ae91 */  MOV qword ptr [RSP + 0x128],R14
/* 0527ae99 */  MOV R8,qword ptr [RSP + 0x30]
/* 0527ae9e */  LEA RAX,[0xef9fb50]
/* 0527aea5 */  MOV qword ptr [RSP + 0x250],RAX
/* 0527aead */  MOV qword ptr [RSP + 0x258],R15
/* 0527aeb5 */  LEA R12,[RSP + 0x250]
/* 0527aebd */  MOV qword ptr [RSP + 0x270],R12
/* 0527aec5 */  MOV RDI,qword ptr [RSP + 0x8]
/* 0527aeca */  MOV RAX,qword ptr [RDI]
/* 0527aecd */  MOV RAX,qword ptr [RAX + 0x200]
/* 0527aed4 */  LEA RSI,[RSP + 0xa8]
/* 0527aedc */  LEA RCX,[RSP + 0x1f0]
/* 0527aee4 */  MOV RDX,qword ptr [RSP + 0x18]
/* 0527aee9 */  MOV R9,R12
/* 0527aeec */  PUSH R14
/* 0527aeee */  PUSH 0x1
/* 0527aef0 */  CALL RAX
/* 0527aef2 */  ADD RSP,0x10
/* 0527aef6 */  MOV RDI,qword ptr [RSP + 0x270]
/* 0527aefe */  CMP RDI,R12
/* 0527af01 */  JZ 0x0527af0f
/* 0527af03 */  MOV EAX,0x28
/* 0527af08 */  TEST RDI,RDI
/* 0527af0b */  JNZ 0x0527af14
/* 0527af0d */  JMP 0x0527af1a
/* 0527af0f */  MOV EAX,0x20
/* 0527af14 */  MOV RCX,qword ptr [RDI]
/* 0527af17 */  CALL qword ptr [RCX + RAX*0x1]
/* 0527af1a */  MOV qword ptr [RSP + 0x128],0x0
/* 0527af26 */  MOV R12,qword ptr [R15 + 0xfd0]
/* 0527af2d */  MOV qword ptr [R15 + 0xfd0],R14
/* 0527af34 */  TEST R12,R12
/* 0527af37 */  JZ 0x0527af61
/* 0527af39 */  MOV RDI,qword ptr [R12]
/* 0527af3d */  TEST RDI,RDI
/* 0527af40 */  JZ 0x0527af54
/* 0527af42 */  MOV qword ptr [R12 + 0x8],RDI
/* 0527af47 */  MOV RSI,qword ptr [R12 + 0x10]
/* 0527af4c */  SUB RSI,RDI
/* 0527af4f */  CALL 0x0412a280
/* 0527af54 */  MOV ESI,0x18
/* 0527af59 */  MOV RDI,R12
/* 0527af5c */  CALL 0x0412a280
/* 0527af61 */  MOV qword ptr [RSP + 0x58],RBP
/* 0527af66 */  MOV qword ptr [RSP + 0x50],R13
/* 0527af6b */  MOV qword ptr [RSP + 0x10],R15
/* 0527af70 */  LEA RDI,[0xf6ff9e0]
/* 0527af77 */  LEA RSI,[0xf713fc8]
/* 0527af7e */  MOV EDX,0x1
/* 0527af83 */  CALL 0x0cc41df0
/* 0527af88 */  MOV R14,RAX
/* 0527af8b */  MOVQ XMM0,RAX
/* 0527af90 */  PSHUFD XMM0,XMM0,0x44
/* 0527af95 */  XOR EBX,EBX
/* 0527af97 */  MOV R15,qword ptr [RSP + 0x10]
/* 0527af9c */  MOV R12,qword ptr [RSP + 0x28]
/* 0527afa1 */  MOVDQA xmmword ptr [RSP + 0x40],XMM0
/* 0527afa7 */  JMP 0x0527afbb
/* 0527afb0 */  INC EBX
/* 0527afb2 */  CMP EBX,0x10
/* 0527afb5 */  JZ 0x0527b0d7
/* 0527afbb */  XOR EBP,EBP
/* 0527afbd */  JMP 0x0527afc7
/* 0527afc0 */  INC EBP
/* 0527afc2 */  CMP EBP,0x10
/* 0527afc5 */  JZ 0x0527afb0
/* 0527afc7 */  MOV RAX,qword ptr [R12]
/* 0527afcb */  MOV RDI,R12
/* 0527afce */  MOV ESI,0x4
/* 0527afd3 */  CALL qword ptr [RAX + 0x18]
/* 0527afd6 */  ADD EAX,0x2
/* 0527afd9 */  MOVDQA XMM0,xmmword ptr [RSP + 0x40]
/* 0527afdf */  JZ 0x0527afc0
/* 0527afe1 */  MOV ECX,dword ptr [RSP + 0xc0]
/* 0527afe8 */  IMUL ECX,EBX
/* 0527afeb */  ADD ECX,EBP
/* 0527afed */  MOV EDI,dword ptr [RSP + 0xbc]
/* 0527aff4 */  MOV RDX,qword ptr [RSP + 0xa8]
/* 0527affc */  MOV ESI,EAX
/* 0527affe */  CMP EAX,0xe
/* 0527b001 */  JNC 0x0527b080
/* 0527b003 */  XOR EAX,EAX
/* 0527b005 */  MOV R9,RSI
/* 0527b008 */  MOV R8,RAX
/* 0527b00b */  AND R9,0x3
/* 0527b00f */  JZ 0x0527b030
/* 0527b011 */  MOV R10D,ECX
/* 0527b014 */  IMUL R10D,EDI
/* 0527b018 */  MOV R8,RAX
/* 0527b01b */  NOP dword ptr [RAX + RAX*0x1]
/* 0527b020 */  LEA R11D,[R10 + R8*0x1]
/* 0527b024 */  MOV qword ptr [RDX + R11*0x8],R14
/* 0527b028 */  INC R8
/* 0527b02b */  DEC R9
/* 0527b02e */  JNZ 0x0527b020
/* 0527b030 */  SUB RAX,RSI
/* 0527b033 */  CMP RAX,-0x4
/* 0527b037 */  JA 0x0527afc0
/* 0527b039 */  IMUL ECX,EDI
/* 0527b03c */  NOP dword ptr [RAX]
/* 0527b040 */  LEA EAX,[RCX + R8*0x1]
/* 0527b044 */  MOV qword ptr [RDX + RAX*0x8],R14
/* 0527b048 */  LEA EAX,[RCX + R8*0x1]
/* 0527b04c */  INC EAX
/* 0527b04e */  MOV qword ptr [RDX + RAX*0x8],R14
/* 0527b052 */  LEA EAX,[RCX + R8*0x1 + 0x2]
/* 0527b057 */  MOV qword ptr [RDX + RAX*0x8],R14
/* 0527b05b */  LEA EAX,[RCX + R8*0x1]
/* 0527b05f */  ADD EAX,0x3
/* 0527b062 */  MOV qword ptr [RDX + RAX*0x8],R14
/* 0527b066 */  ADD R8,0x4
/* 0527b06a */  CMP RSI,R8
/* 0527b06d */  JNZ 0x0527b040
/* 0527b06f */  JMP 0x0527afc0
/* 0527b080 */  MOV R8D,ECX
/* 0527b083 */  IMUL R8D,EDI
/* 0527b087 */  LEA RAX,[RSI + -0x1]
/* 0527b08b */  MOV R9D,EAX
/* 0527b08e */  ADD R9D,R8D
/* 0527b091 */  JC 0x0527b003
/* 0527b097 */  SHR RAX,0x20
/* 0527b09b */  MOV EAX,0x0
/* 0527b0a0 */  JNZ 0x0527b005
/* 0527b0a6 */  MOV EAX,ESI
/* 0527b0a8 */  AND EAX,0xfffffffc
/* 0527b0ab */  MOV R9,RAX
/* 0527b0ae */  NOP
/* 0527b0b0 */  MOV R10D,R8D
/* 0527b0b3 */  MOVDQU xmmword ptr [RDX + R10*0x8],XMM0
/* 0527b0b9 */  MOVDQU xmmword ptr [RDX + R10*0x8 + 0x10],XMM0
/* 0527b0c0 */  ADD R8D,0x4
/* 0527b0c4 */  ADD R9,-0x4
/* 0527b0c8 */  JNZ 0x0527b0b0
/* 0527b0ca */  CMP EAX,ESI
/* 0527b0cc */  JZ 0x0527afc0
/* 0527b0d2 */  JMP 0x0527b005
/* 0527b0d7 */  MOV RDI,qword ptr [R15 + 0x28]
/* 0527b0db */  MOV RAX,qword ptr [RDI]
/* 0527b0de */  CALL qword ptr [RAX + 0x568]
/* 0527b0e4 */  LEA R14,[RAX + 0x50]
/* 0527b0e8 */  CMP byte ptr [RAX + 0x77],0x0
/* 0527b0ec */  JNZ 0x0527b117
/* 0527b0ee */  MOV R12,RAX
/* 0527b0f1 */  ADD R12,0x70
/* 0527b0f5 */  CMP byte ptr [RAX + 0x68],0x0
/* 0527b0f9 */  JNZ 0x0527b106
/* 0527b0fb */  TEST byte ptr [RAX + 0x56],0x1
/* 0527b0ff */  JNZ 0x0527b106
/* 0527b101 */  MOV R14,R12
/* 0527b104 */  JMP 0x0527b117
/* 0527b106 */  MOV RDI,R12
/* 0527b109 */  MOV RSI,R14
/* 0527b10c */  CALL 0x04fa7a10
/* 0527b111 */  TEST AL,AL
/* 0527b113 */  CMOVNZ R14,R12
/* 0527b117 */  MOVZX EAX,byte ptr [R14 + 0x6]
/* 0527b11c */  OR AL,byte ptr [R14 + 0x18]
/* 0527b120 */  LEA RCX,[0xf72b850]
/* 0527b127 */  TEST AL,0x1
/* 0527b129 */  CMOVZ R14,RCX
/* 0527b12d */  CMP byte ptr [0x0f5a2858],0x0
/* 0527b134 */  JNZ 0x0527b141
/* 0527b136 */  CMP byte ptr [R14 + 0x18],0x0
/* 0527b13b */  JZ 0x0527b437
/* 0527b141 */  XOR R12D,R12D
/* 0527b144 */  MOV RDI,qword ptr [RSP + 0x8]
/* 0527b149 */  MOV RAX,qword ptr [RDI + 0x28]
/* 0527b14d */  MOVSX R14D,word ptr [RAX + 0xa8]
/* 0527b155 */  MOV EBP,dword ptr [RAX + 0xa8]
/* 0527b15b */  MOVZX EBX,word ptr [RAX + 0xac]
/* 0527b162 */  MOV RAX,qword ptr [RDI]
/* 0527b165 */  CALL qword ptr [RAX + 0x1f8]
/* 0527b16b */  SUB EBX,R14D
/* 0527b16e */  MOV ECX,R12D
/* 0527b171 */  XOR CL,0x1
/* 0527b174 */  MOVZX ECX,CL
/* 0527b177 */  MOV RAX,qword ptr [RAX]
/* 0527b17a */  MOV RDX,qword ptr [RSP + 0x28]
/* 0527b17f */  MOV qword ptr [RSP + 0x180],RDX
/* 0527b187 */  MOV qword ptr [RSP + 0x188],RAX
/* 0527b18f */  MOV dword ptr [RSP + 0x190],ECX
/* 0527b196 */  MOV word ptr [RSP + 0x194],BX
/* 0527b19e */  MOV byte ptr [RSP + 0x196],R12B
/* 0527b1a6 */  LEA R13,[RSP + 0x250]
/* 0527b1ae */  MOV RDI,R13
/* 0527b1b1 */  MOV RSI,qword ptr [RSP + 0x10]
/* 0527b1b6 */  CALL 0x0c855c80
/* 0527b1bb */  MOV dword ptr [RSP + 0x64],R14D
/* 0527b1c0 */  MOVZX EAX,byte ptr [RSP + 0x368]
/* 0527b1c8 */  MOV byte ptr [RSP + 0x38],AL
/* 0527b1cc */  TEST AL,AL
/* 0527b1ce */  JZ 0x0527b2c1
/* 0527b1d4 */  MOV RAX,qword ptr [RSP + 0x18]
/* 0527b1d9 */  MOV RBX,qword ptr [RAX]
/* 0527b1dc */  MOV RDI,qword ptr [RSP + 0x8]
/* 0527b1e1 */  MOV RAX,qword ptr [RDI]
/* 0527b1e4 */  CALL qword ptr [RAX + 0x1f0]
/* 0527b1ea */  MOV R12,RAX
/* 0527b1ed */  MOV R14,qword ptr [RSP + 0x58]
/* 0527b1f2 */  ADD R14,0x1000
/* 0527b1f9 */  MOV EDX,0x400
/* 0527b1fe */  MOV RDI,R14
/* 0527b201 */  XOR ESI,ESI
/* 0527b203 */  CALL 0x0eee2dd0
/* 0527b208 */  MOV EAX,dword ptr [R12]
/* 0527b20c */  TEST RAX,RAX
/* 0527b20f */  JZ 0x0527b2b0
/* 0527b215 */  MOV ECX,EBX
/* 0527b217 */  SHL ECX,0x4
/* 0527b21a */  SHR RBX,0x1c
/* 0527b21e */  CVTSI2SS XMM0,ECX
/* 0527b222 */  MOVSS dword ptr [RSP + 0x20],XMM0
/* 0527b228 */  AND EBX,0xfffffff0
/* 0527b22b */  XORPS XMM0,XMM0
/* 0527b22e */  CVTSI2SS XMM0,EBX
/* 0527b232 */  MOVSS dword ptr [RSP + 0x4],XMM0
/* 0527b238 */  IMUL R15,RAX,0x80c
/* 0527b23f */  MOVSS XMM0,dword ptr [0x011983f0]
/* 0527b247 */  XOR EBX,EBX
/* 0527b249 */  NOP dword ptr [RAX]
/* 0527b250 */  MOV RDI,qword ptr [R12 + 0x8]
/* 0527b255 */  ADD RDI,RBX
/* 0527b258 */  MOVAPS XMM2,XMM0
/* 0527b25b */  MULSS XMM2,dword ptr [0x01198a50]
/* 0527b263 */  MOVSS XMM4,dword ptr [0x01198b7c]
/* 0527b26b */  MOVSS dword ptr [RSP + 0x40],XMM0
/* 0527b271 */  DIVSS XMM4,XMM0
/* 0527b275 */  MOV RSI,R14
/* 0527b278 */  MOVSS XMM0,dword ptr [RSP + 0x20]
/* 0527b27e */  MOVSS XMM1,dword ptr [RSP + 0x4]
/* 0527b284 */  MOV EDX,0x10
/* 0527b289 */  MOV ECX,0x10
/* 0527b28e */  MOVAPS XMM3,XMM2
/* 0527b291 */  CALL 0x0d2ebd50
/* 0527b296 */  MOVSS XMM0,dword ptr [RSP + 0x40]
/* 0527b29c */  MULSS XMM0,dword ptr [0x011986e0]
/* 0527b2a4 */  ADD RBX,0x80c
/* 0527b2ab */  CMP R15,RBX
/* 0527b2ae */  JNZ 0x0527b250
/* 0527b2b0 */  XOR R8D,R8D
/* 0527b2b3 */  TEST byte ptr [RSP + 0x368],0x1
/* 0527b2bb */  CMOVNZ R8,R14
/* 0527b2bf */  JMP 0x0527b2d0
/* 0527b2c1 */  MOV R14,qword ptr [RSP + 0x58]
/* 0527b2c6 */  ADD R14,0x1000
/* 0527b2cd */  XOR R8D,R8D
/* 0527b2d0 */  MOV R12,qword ptr [RSP + 0x8]
/* 0527b2d5 */  SUB RSP,0x8
/* 0527b2d9 */  LEA RSI,[RSP + 0xb0]
/* 0527b2e1 */  LEA RDX,[RSP + 0x1c0]
/* 0527b2e9 */  LEA R9,[RSP + 0x188]
/* 0527b2f1 */  MOV RDI,qword ptr [RSP + 0x18]
/* 0527b2f6 */  MOV ECX,EBP
/* 0527b2f8 */  PUSH R13
/* 0527b2fa */  MOV RBX,RDI
/* 0527b2fd */  CALL 0x0c856760
/* 0527b302 */  ADD RSP,0x10
/* 0527b306 */  MOV RDI,qword ptr [RBX + 0x28]
/* 0527b30a */  MOV RAX,qword ptr [RDI]
/* 0527b30d */  CALL qword ptr [RAX + 0xbe8]
/* 0527b313 */  TEST AL,AL
/* 0527b315 */  JZ 0x0527bb82
/* 0527b31b */  LEA RBP,[RSP + 0x140]
/* 0527b323 */  MOV qword ptr [RSP + 0x130],RBP
/* 0527b32b */  MOV RAX,0x600000000
/* 0527b335 */  MOV qword ptr [RSP + 0x138],RAX
/* 0527b33d */  LEA RDI,[RBX + 0x120]
/* 0527b344 */  LEA RSI,[RSP + 0x130]
/* 0527b34c */  CALL 0x0cafcfe0
/* 0527b351 */  MOV RSI,qword ptr [RSP + 0x130]
/* 0527b359 */  MOV EAX,dword ptr [RSP + 0x138]
/* 0527b360 */  TEST RAX,RAX
/* 0527b363 */  JZ 0x0527b46d
/* 0527b369 */  LEA R15,[RSI + RAX*0x8]
/* 0527b36d */  LEA R13,[0xf5570f0]
/* 0527b374 */  JMP 0x0527b38d
/* 0527b380 */  ADD RSI,0x8
/* 0527b384 */  CMP RSI,R15
/* 0527b387 */  JZ 0x0527b414
/* 0527b38d */  MOV RBX,qword ptr [RSI]
/* 0527b390 */  MOVZX EAX,byte ptr [0x0f5570f0]
/* 0527b397 */  TEST AL,AL
/* 0527b399 */  JZ 0x0527b3e1
/* 0527b39b */  MOV RAX,qword ptr [RBX + 0x170]
/* 0527b3a2 */  MOV RCX,qword ptr [RBX + 0x178]
/* 0527b3a9 */  CMP RAX,RCX
/* 0527b3ac */  MOV R12,qword ptr [RSP + 0x8]
/* 0527b3b1 */  JZ 0x0527b380
/* 0527b3b3 */  MOVZX EDX,word ptr [0x0f5570e8]
/* 0527b3ba */  NOP word ptr [RAX + RAX*0x1]
/* 0527b3c0 */  CMP word ptr [RAX],DX
/* 0527b3c3 */  JZ 0x0527b3d0
/* 0527b3c5 */  ADD RAX,0x10
/* 0527b3c9 */  CMP RAX,RCX
/* 0527b3cc */  JNZ 0x0527b3c0
/* 0527b3ce */  JMP 0x0527b380
/* 0527b3d0 */  MOV RAX,qword ptr [RAX + 0x8]
/* 0527b3d4 */  TEST RAX,RAX
/* 0527b3d7 */  JZ 0x0527b380
/* 0527b3d9 */  CMP byte ptr [RAX + 0x48],0x0
/* 0527b3dd */  JZ 0x0527b380
/* 0527b3df */  JMP 0x0527b417
/* 0527b3e1 */  MOV RDI,R13
/* 0527b3e4 */  MOV R12,RSI
/* 0527b3e7 */  CALL 0x04108328
/* 0527b3ec */  MOV RSI,R12
/* 0527b3ef */  TEST EAX,EAX
/* 0527b3f1 */  JZ 0x0527b39b
/* 0527b3f3 */  MOV AX,0x1
/* 0527b3f7 */  XADD.LOCK word ptr [0x0f556458],AX
/* 0527b400 */  MOV word ptr [0x0f5570e8],AX
/* 0527b407 */  MOV RDI,R13
/* 0527b40a */  CALL 0x0410844d
/* 0527b40f */  MOV RSI,R12
/* 0527b412 */  JMP 0x0527b39b
/* 0527b414 */  MOV RSI,R15
/* 0527b417 */  MOV RCX,RSI
/* 0527b41a */  MOV RSI,qword ptr [RSP + 0x130]
/* 0527b422 */  MOV EAX,dword ptr [RSP + 0x138]
/* 0527b429 */  LEA RAX,[RSI + RAX*0x8]
/* 0527b42d */  CMP RCX,RAX
/* 0527b430 */  JNZ 0x0527b47f
/* 0527b432 */  JMP 0x0527bb61
/* 0527b437 */  MOV R12B,0x1
/* 0527b43a */  TEST byte ptr [0x0f5a2846],0x1
/* 0527b441 */  JZ 0x0527b144
/* 0527b447 */  CMP byte ptr [R14 + 0x7],0x0
/* 0527b44c */  JNZ 0x0527b144
/* 0527b452 */  LEA RSI,[0xf5a2840]
/* 0527b459 */  MOV RDI,R14
/* 0527b45c */  CALL 0x04fa7a10
/* 0527b461 */  MOV R12D,EAX
/* 0527b464 */  XOR R12B,0x1
/* 0527b468 */  JMP 0x0527b144
/* 0527b46d */  XOR EAX,EAX
/* 0527b46f */  MOV RCX,RSI
/* 0527b472 */  LEA RAX,[RSI + RAX*0x8]
/* 0527b476 */  CMP RCX,RAX
/* 0527b479 */  JZ 0x0527bb61
/* 0527b47f */  CMP byte ptr [RSP + 0x38],0x0
/* 0527b484 */  JNZ 0x0527b55f
/* 0527b48a */  MOV RAX,qword ptr [RSP + 0x18]
/* 0527b48f */  MOV RBX,qword ptr [RAX]
/* 0527b492 */  MOV RAX,qword ptr [R12]
/* 0527b496 */  MOV RDI,R12
/* 0527b499 */  CALL qword ptr [RAX + 0x1f0]
/* 0527b49f */  MOV R13,RAX
/* 0527b4a2 */  MOV EDX,0x400
/* 0527b4a7 */  MOV RDI,R14
/* 0527b4aa */  XOR ESI,ESI
/* 0527b4ac */  CALL 0x0eee2dd0
/* 0527b4b1 */  MOV EAX,dword ptr [R13]
/* 0527b4b5 */  TEST RAX,RAX
/* 0527b4b8 */  JZ 0x0527b55f
/* 0527b4be */  MOV ECX,EBX
/* 0527b4c0 */  SHL ECX,0x4
/* 0527b4c3 */  SHR RBX,0x1c
/* 0527b4c7 */  CVTSI2SS XMM0,ECX
/* 0527b4cb */  MOVSS dword ptr [RSP + 0x20],XMM0
/* 0527b4d1 */  AND EBX,0xfffffff0
/* 0527b4d4 */  XORPS XMM0,XMM0
/* 0527b4d7 */  CVTSI2SS XMM0,EBX
/* 0527b4db */  MOVSS dword ptr [RSP + 0x4],XMM0
/* 0527b4e1 */  IMUL RBX,RAX,0x80c
/* 0527b4e8 */  MOVSS XMM0,dword ptr [0x011983f0]
/* 0527b4f0 */  XOR R15D,R15D
/* 0527b4f3 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0527b500 */  MOV RDI,qword ptr [R13 + 0x8]
/* 0527b504 */  ADD RDI,R15
/* 0527b507 */  MOVAPS XMM2,XMM0
/* 0527b50a */  MULSS XMM2,dword ptr [0x01198a50]
/* 0527b512 */  MOVSS XMM4,dword ptr [0x01198b7c]
/* 0527b51a */  MOVSS dword ptr [RSP + 0x40],XMM0
/* 0527b520 */  DIVSS XMM4,XMM0
/* 0527b524 */  MOV RSI,R14
/* 0527b527 */  MOVD XMM0,dword ptr [RSP + 0x20]
/* 0527b52d */  MOVSS XMM1,dword ptr [RSP + 0x4]
/* 0527b533 */  MOV EDX,0x10
/* 0527b538 */  MOV ECX,0x10
/* 0527b53d */  MOVAPS XMM3,XMM2
/* 0527b540 */  CALL 0x0d2ebd50
/* 0527b545 */  MOVSS XMM0,dword ptr [RSP + 0x40]
/* 0527b54b */  MULSS XMM0,dword ptr [0x011986e0]
/* 0527b553 */  ADD R15,0x80c
/* 0527b55a */  CMP RBX,R15
/* 0527b55d */  JNZ 0x0527b500
/* 0527b55f */  LEA R15,[RSP + 0x78]
/* 0527b564 */  XOR R13D,R13D
/* 0527b567 */  XOR EBP,EBP
/* 0527b569 */  MOV R12,qword ptr [RSP + 0x10]
/* 0527b56e */  JMP 0x0527b57d
/* 0527b570 */  INC R13
/* 0527b573 */  CMP R13,0x10
/* 0527b577 */  JZ 0x0527bb4c
/* 0527b57d */  XOR EBX,EBX
/* 0527b57f */  JMP 0x0527b599
/* 0527b590 */  INC RBX
/* 0527b593 */  CMP RBX,0x10
/* 0527b597 */  JZ 0x0527b570
/* 0527b599 */  MOV qword ptr [RSP + 0x68],R15
/* 0527b59e */  MOV RAX,0x200000000
/* 0527b5a8 */  MOV qword ptr [RSP + 0x70],RAX
/* 0527b5ad */  MOV byte ptr [RSP + 0xd0],R13B
/* 0527b5b5 */  MOV byte ptr [RSP + 0xd1],BL
/* 0527b5bc */  MOV word ptr [RSP + 0xd2],0x0
/* 0527b5c6 */  MOV RDI,R12
/* 0527b5c9 */  LEA RSI,[RSP + 0xd0]
/* 0527b5d1 */  CALL 0x0caf8020
/* 0527b5d6 */  MOV R14,RAX
/* 0527b5d9 */  MOV ESI,dword ptr [R12 + 0x38]
/* 0527b5de */  ADD ESI,R13D
/* 0527b5e1 */  MOVSX EAX,BP
/* 0527b5e4 */  ADD EAX,dword ptr [R12 + 0x3c]
/* 0527b5e9 */  MOV ECX,dword ptr [R12 + 0x40]
/* 0527b5ee */  ADD ECX,EBX
/* 0527b5f0 */  MOV RDX,RAX
/* 0527b5f3 */  SHL RDX,0x20
/* 0527b5f7 */  ADD RDX,RSI
/* 0527b5fa */  MOV qword ptr [RSP + 0x170],RDX
/* 0527b602 */  MOV dword ptr [RSP + 0x178],ECX
/* 0527b609 */  MOV EBP,dword ptr [RSP + 0x64]
/* 0527b60d */  SUB EAX,EBP
/* 0527b60f */  MOV dword ptr [RSP + 0x174],EAX
/* 0527b616 */  SAR ESI,0x2
/* 0527b619 */  SAR ECX,0x2
/* 0527b61c */  SHL RCX,0x20
/* 0527b620 */  OR RSI,RCX
/* 0527b623 */  MOV RAX,qword ptr [RSP + 0x1b8]
/* 0527b62b */  LEA RDI,[RSP + 0x1b8]
/* 0527b633 */  CALL qword ptr [RAX + 0x10]
/* 0527b636 */  TEST EAX,0x10000
/* 0527b63b */  JNZ 0x0527b650
/* 0527b63d */  MOV RAX,qword ptr [RSP + 0x8]
/* 0527b642 */  MOV RAX,qword ptr [RAX + 0x28]
/* 0527b646 */  MOVZX ECX,word ptr [RAX + 0xa8]
/* 0527b64d */  JMP 0x0527b679
/* 0527b650 */  ADD EAX,-0x8
/* 0527b653 */  MOV RCX,qword ptr [RSP + 0x8]
/* 0527b658 */  MOV RDX,qword ptr [RCX + 0x28]
/* 0527b65c */  MOVZX ECX,word ptr [RDX + 0xa8]
/* 0527b663 */  CMP AX,CX
/* 0527b666 */  JL 0x0527b679
/* 0527b668 */  MOVZX ECX,word ptr [RDX + 0xaa]
/* 0527b66f */  DEC ECX
/* 0527b671 */  CMP CX,AX
/* 0527b674 */  CMOVL EAX,ECX
/* 0527b677 */  MOV ECX,EAX
/* 0527b679 */  MOVSX EAX,CX
/* 0527b67c */  XOR R15D,R15D
/* 0527b67f */  SUB EAX,EBP
/* 0527b681 */  MOV dword ptr [RSP + 0x40],EAX
/* 0527b685 */  MOV qword ptr [RSP + 0x20],RBX
/* 0527b68a */  JS 0x0527b9e0
/* 0527b690 */  MOV dword ptr [RSP + 0x4],0x0
/* 0527b698 */  XOR EBP,EBP
/* 0527b69a */  JMP 0x0527b6c2
/* 0527b6a0 */  MOV R13D,R15D
/* 0527b6a3 */  INC EBP
/* 0527b6a5 */  MOVSX EAX,BP
/* 0527b6a8 */  MOV R15D,R13D
/* 0527b6ab */  CMP dword ptr [RSP + 0x40],EAX
/* 0527b6af */  MOV R12,qword ptr [RSP + 0x10]
/* 0527b6b4 */  MOV R13,RBX
/* 0527b6b7 */  MOV RBX,qword ptr [RSP + 0x20]
/* 0527b6bc */  JL 0x0527b9e2
/* 0527b6c2 */  MOV byte ptr [RSP + 0xd0],R13B
/* 0527b6ca */  MOV byte ptr [RSP + 0xd1],BL
/* 0527b6d1 */  MOV word ptr [RSP + 0xd2],BP
/* 0527b6d9 */  MOV RDI,R12
/* 0527b6dc */  LEA RSI,[RSP + 0xd0]
/* 0527b6e4 */  CALL 0x0caf8020
/* 0527b6e9 */  MOV RBX,R13
/* 0527b6ec */  MOVZX EAX,word ptr [RAX + 0x168]
/* 0527b6f3 */  MOVZX ECX,word ptr [R14 + 0x168]
/* 0527b6fb */  CMP AX,CX
/* 0527b6fe */  MOVSX R13D,BP
/* 0527b702 */  CMOVZ R15D,R13D
/* 0527b706 */  CMP dword ptr [RSP + 0x40],R13D
/* 0527b70b */  JZ 0x0527b712
/* 0527b70d */  CMP AX,CX
/* 0527b710 */  JZ 0x0527b6a0
/* 0527b712 */  MOVZX EAX,byte ptr [0x0f5570f0]
/* 0527b719 */  TEST AL,AL
/* 0527b71b */  JZ 0x0527b989
/* 0527b721 */  MOV RAX,qword ptr [R14 + 0x170]
/* 0527b728 */  MOV RCX,qword ptr [R14 + 0x178]
/* 0527b72f */  CMP RAX,RCX
/* 0527b732 */  JZ 0x0527b7a0
/* 0527b734 */  MOVZX EDX,word ptr [0x0f5570e8]
/* 0527b73b */  NOP dword ptr [RAX + RAX*0x1]
/* 0527b740 */  CMP word ptr [RAX],DX
/* 0527b743 */  JZ 0x0527b750
/* 0527b745 */  ADD RAX,0x10
/* 0527b749 */  CMP RAX,RCX
/* 0527b74c */  JNZ 0x0527b740
/* 0527b74e */  JMP 0x0527b7a0
/* 0527b750 */  MOV R12,qword ptr [RAX + 0x8]
/* 0527b754 */  TEST R12,R12
/* 0527b757 */  JZ 0x0527b7a0
/* 0527b759 */  CMP byte ptr [R12 + 0x48],0x1
/* 0527b75f */  JNZ 0x0527b7a0
/* 0527b761 */  ADD R12,0x28
/* 0527b765 */  MOV EAX,dword ptr [RSP + 0x70]
/* 0527b769 */  LEA RDX,[RAX + RAX*0x2]
/* 0527b76d */  LEA RCX,[RDX*0x8]
/* 0527b775 */  ADD RCX,qword ptr [RSP + 0x68]
/* 0527b77a */  CMP EAX,dword ptr [RSP + 0x74]
/* 0527b77e */  JZ 0x0527b7da
/* 0527b780 */  MOV qword ptr [RCX],R14
/* 0527b783 */  MOV qword ptr [RCX + 0x8],R12
/* 0527b787 */  SHL R15,0x20
/* 0527b78b */  MOV EAX,dword ptr [RSP + 0x4]
/* 0527b78f */  OR RAX,R15
/* 0527b792 */  MOV qword ptr [RCX + 0x10],RAX
/* 0527b796 */  MOV EAX,dword ptr [RSP + 0x70]
/* 0527b79a */  INC EAX
/* 0527b79c */  MOV dword ptr [RSP + 0x70],EAX
/* 0527b7a0 */  MOV byte ptr [RSP + 0xd0],BL
/* 0527b7a7 */  MOV RAX,qword ptr [RSP + 0x20]
/* 0527b7ac */  MOV byte ptr [RSP + 0xd1],AL
/* 0527b7b3 */  MOV word ptr [RSP + 0xd2],BP
/* 0527b7bb */  MOV RDI,qword ptr [RSP + 0x10]
/* 0527b7c0 */  LEA RSI,[RSP + 0xd0]
/* 0527b7c8 */  CALL 0x0caf8020
/* 0527b7cd */  MOV R14,RAX
/* 0527b7d0 */  MOV dword ptr [RSP + 0x4],R13D
/* 0527b7d5 */  JMP 0x0527b6a3
/* 0527b7da */  MOV qword ptr [RSP + 0x120],RDX
/* 0527b7e2 */  MOV qword ptr [RSP + 0x1a8],RCX
/* 0527b7ea */  CMP EAX,-0x1
/* 0527b7ed */  JZ 0x0527c0ca
/* 0527b7f3 */  LEA EDX,[RAX + 0x1]
/* 0527b7f6 */  CVTSI2SS XMM0,RAX
/* 0527b7fb */  MOVAPS XMM1,XMM0
/* 0527b7fe */  MOVSS XMM2,dword ptr [0x0119858c]
/* 0527b806 */  DIVSS XMM1,XMM2
/* 0527b80a */  CVTTSS2SI RCX,XMM1
/* 0527b80f */  MULSS XMM0,XMM2
/* 0527b813 */  CVTTSS2SI RSI,XMM0
/* 0527b818 */  CMP EDX,ESI
/* 0527b81a */  MOV dword ptr [RSP + 0x60],EDX
/* 0527b81e */  CMOVA ESI,EDX
/* 0527b821 */  ADD ECX,EAX
/* 0527b823 */  JC 0x0527b9c2
/* 0527b829 */  MOV qword ptr [RSP + 0x1a0],RSI
/* 0527b831 */  MOV EAX,ESI
/* 0527b833 */  SHL RAX,0x3
/* 0527b837 */  LEA RSI,[RAX + RAX*0x2]
/* 0527b83b */  MOV RAX,qword ptr [0x0f5463b0]
/* 0527b842 */  LEA RDI,[0xf5463b0]
/* 0527b849 */  MOV qword ptr [RSP + 0x198],RSI
/* 0527b851 */  CALL qword ptr [RAX + 0x10]
/* 0527b854 */  MOV qword ptr [RSP + 0x38],RAX
/* 0527b859 */  CMP qword ptr [RSP + 0x38],0x0
/* 0527b85f */  JZ 0x0527b9cc
/* 0527b865 */  MOV RCX,qword ptr [RSP + 0x120]
/* 0527b86d */  MOV RDX,qword ptr [RSP + 0x38]
/* 0527b872 */  MOV qword ptr [RDX + RCX*0x8],R14
/* 0527b876 */  MOV qword ptr [RDX + RCX*0x8 + 0x8],R12
/* 0527b87b */  SHL R15,0x20
/* 0527b87f */  MOV EAX,dword ptr [RSP + 0x4]
/* 0527b883 */  OR RAX,R15
/* 0527b886 */  MOV qword ptr [RDX + RCX*0x8 + 0x10],RAX
/* 0527b88b */  MOV R14,qword ptr [RSP + 0x68]
/* 0527b890 */  MOV ECX,dword ptr [RSP + 0x70]
/* 0527b894 */  LEA RAX,[RCX + RCX*0x2]
/* 0527b898 */  LEA RAX,[R14 + RAX*0x8]
/* 0527b89c */  MOV RSI,qword ptr [RSP + 0x1a8]
/* 0527b8a4 */  CMP RSI,RAX
/* 0527b8a7 */  MOV R12,RDX
/* 0527b8aa */  JZ 0x0527b916
/* 0527b8ac */  CMP R14,RSI
/* 0527b8af */  LEA R15,[RSP + 0x78]
/* 0527b8b4 */  JZ 0x0527b8db
/* 0527b8b6 */  MOV RCX,R12
/* 0527b8b9 */  MOV RDX,R14
/* 0527b8bc */  NOP dword ptr [RAX]
/* 0527b8c0 */  MOV RDI,qword ptr [RDX + 0x10]
/* 0527b8c4 */  MOV qword ptr [RCX + 0x10],RDI
/* 0527b8c8 */  MOVUPS XMM0,xmmword ptr [RDX]
/* 0527b8cb */  MOVUPS xmmword ptr [RCX],XMM0
/* 0527b8ce */  ADD RCX,0x18
/* 0527b8d2 */  ADD RDX,0x18
/* 0527b8d6 */  CMP RDX,RSI
/* 0527b8d9 */  JNZ 0x0527b8c0
/* 0527b8db */  MOV RCX,qword ptr [RSP + 0x120]
/* 0527b8e3 */  LEA RDI,[R12 + RCX*0x8]
/* 0527b8e7 */  ADD RDI,0x18
/* 0527b8eb */  SUB RAX,RSI
/* 0527b8ee */  ADD RAX,-0x18
/* 0527b8f2 */  MOV RCX,-0x5555555555555555
/* 0527b8fc */  MUL RCX
/* 0527b8ff */  SHR RDX,0x4
/* 0527b903 */  LEA RAX,[RDX + RDX*0x2]
/* 0527b907 */  LEA RDX,[0x18 + RAX*0x8]
/* 0527b90f */  CALL 0x0eee2f00
/* 0527b914 */  JMP 0x0527b94b
/* 0527b916 */  TEST RCX,RCX
/* 0527b919 */  LEA R15,[RSP + 0x78]
/* 0527b91e */  JZ 0x0527b94b
/* 0527b920 */  MOV RAX,R12
/* 0527b923 */  MOV RCX,R14
/* 0527b926 */  NOP word ptr CS:[RAX + RAX*0x1]
/* 0527b930 */  MOV RDX,qword ptr [RCX + 0x10]
/* 0527b934 */  MOV qword ptr [RAX + 0x10],RDX
/* 0527b938 */  MOVUPS XMM0,xmmword ptr [RCX]
/* 0527b93b */  MOVUPS xmmword ptr [RAX],XMM0
/* 0527b93e */  ADD RAX,0x18
/* 0527b942 */  ADD RCX,0x18
/* 0527b946 */  CMP RCX,RSI
/* 0527b949 */  JNZ 0x0527b930
/* 0527b94b */  CMP R15,R14
/* 0527b94e */  SETZ AL
/* 0527b951 */  TEST R14,R14
/* 0527b954 */  SETZ CL
/* 0527b957 */  OR CL,AL
/* 0527b959 */  JNZ 0x0527b96f
/* 0527b95b */  MOV RAX,qword ptr [0x0f5463b0]
/* 0527b962 */  LEA RDI,[0xf5463b0]
/* 0527b969 */  MOV RSI,R14
/* 0527b96c */  CALL qword ptr [RAX + 0x18]
/* 0527b96f */  MOV qword ptr [RSP + 0x68],R12
/* 0527b974 */  MOV RAX,qword ptr [RSP + 0x1a0]
/* 0527b97c */  MOV dword ptr [RSP + 0x74],EAX
/* 0527b980 */  MOV EAX,dword ptr [RSP + 0x60]
/* 0527b984 */  JMP 0x0527b79c
/* 0527b989 */  LEA RDI,[0xf5570f0]
/* 0527b990 */  CALL 0x04108328
/* 0527b995 */  TEST EAX,EAX
/* 0527b997 */  JZ 0x0527b721
/* 0527b99d */  MOV AX,0x1
/* 0527b9a1 */  XADD.LOCK word ptr [0x0f556458],AX
/* 0527b9aa */  MOV word ptr [0x0f5570e8],AX
/* 0527b9b1 */  LEA RDI,[0xf5570f0]
/* 0527b9b8 */  CALL 0x0410844d
/* 0527b9bd */  JMP 0x0527b721
/* 0527b9c2 */  MOV ESI,0xffffffff
/* 0527b9c7 */  JMP 0x0527b829
/* 0527b9cc */  MOV RDI,qword ptr [RSP + 0x198]
/* 0527b9d4 */  XOR ESI,ESI
/* 0527b9d6 */  CALL 0x0eec74c0
/* 0527b9db */  JMP 0x0527b865
/* 0527b9e0 */  XOR EBP,EBP
/* 0527b9e2 */  MOV R14,qword ptr [RSP + 0x68]
/* 0527b9e7 */  MOV EAX,dword ptr [RSP + 0x70]
/* 0527b9eb */  TEST RAX,RAX
/* 0527b9ee */  JZ 0x0527bb1a
/* 0527b9f4 */  LEA RAX,[RAX + RAX*0x2]
/* 0527b9f8 */  MOV R15,RBX
/* 0527b9fb */  LEA RBX,[R14 + RAX*0x8]
/* 0527b9ff */  SHL R15,0x4
/* 0527ba03 */  ADD R15,R13
/* 0527ba06 */  JMP 0x0527ba28
/* 0527ba10 */  MOV EAX,0x20
/* 0527ba15 */  MOV RCX,qword ptr [RDI]
/* 0527ba18 */  CALL qword ptr [RCX + RAX*0x1]
/* 0527ba1b */  ADD R14,0x18
/* 0527ba1f */  CMP R14,RBX
/* 0527ba22 */  JZ 0x0527bb10
/* 0527ba28 */  MOV RSI,qword ptr [R14]
/* 0527ba2b */  MOV RDX,qword ptr [R14 + 0x8]
/* 0527ba2f */  LEA RDI,[RSP + 0xd0]
/* 0527ba37 */  CALL 0x0c851900
/* 0527ba3c */  MOV RAX,qword ptr [RSP + 0x58]
/* 0527ba41 */  MOVD XMM0,dword ptr [RAX + R15*0x4 + 0x1000]
/* 0527ba4b */  MOV RAX,qword ptr [R14 + 0x10]
/* 0527ba4f */  MOV RCX,qword ptr [R12 + 0xfd0]
/* 0527ba57 */  MOVZX EDX,word ptr [R12 + 0x3c]
/* 0527ba5d */  MOV qword ptr [RSP + 0x218],RCX
/* 0527ba65 */  MOV word ptr [RSP + 0x220],DX
/* 0527ba6d */  LEA RCX,[RSP + 0xa8]
/* 0527ba75 */  MOV qword ptr [RSP + 0x228],RCX
/* 0527ba7d */  LEA RCX,[RSP + 0x170]
/* 0527ba85 */  MOV qword ptr [RSP + 0x230],RCX
/* 0527ba8d */  MOVD dword ptr [RSP + 0x238],XMM0
/* 0527ba96 */  MOV qword ptr [RSP + 0x23c],RAX
/* 0527ba9e */  LEA RAX,[RSP + 0x218]
/* 0527baa6 */  MOV qword ptr [RSP + 0x248],RAX
/* 0527baae */  MOV RDI,qword ptr [RSP + 0xd8]
/* 0527bab6 */  TEST RDI,RDI
/* 0527bab9 */  JZ 0x0527bad9
/* 0527babb */  MOV RAX,qword ptr [RDI]
/* 0527babe */  LEA RSI,[RSP + 0x180]
/* 0527bac6 */  LEA RDX,[RSP + 0xd0]
/* 0527bace */  LEA RCX,[RSP + 0x228]
/* 0527bad6 */  CALL qword ptr [RAX + 0x28]
/* 0527bad9 */  MOV RDI,qword ptr [RSP + 0x110]
/* 0527bae1 */  LEA RAX,[RSP + 0xf0]
/* 0527bae9 */  CMP RDI,RAX
/* 0527baec */  JZ 0x0527ba10
/* 0527baf2 */  MOV EAX,0x28
/* 0527baf7 */  TEST RDI,RDI
/* 0527bafa */  JNZ 0x0527ba15
/* 0527bb00 */  JMP 0x0527ba1b
/* 0527bb10 */  MOV R14,qword ptr [RSP + 0x68]
/* 0527bb15 */  MOV RBX,qword ptr [RSP + 0x20]
/* 0527bb1a */  LEA R15,[RSP + 0x78]
/* 0527bb1f */  CMP R15,R14
/* 0527bb22 */  SETZ AL
/* 0527bb25 */  TEST R14,R14
/* 0527bb28 */  SETZ CL
/* 0527bb2b */  OR CL,AL
/* 0527bb2d */  JNZ 0x0527b590
/* 0527bb33 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0527bb3a */  LEA RDI,[0xf5463b0]
/* 0527bb41 */  MOV RSI,R14
/* 0527bb44 */  CALL qword ptr [RAX + 0x18]
/* 0527bb47 */  JMP 0x0527b590
/* 0527bb4c */  MOV RSI,qword ptr [RSP + 0x130]
/* 0527bb54 */  MOV R12,qword ptr [RSP + 0x8]
/* 0527bb59 */  LEA RBP,[RSP + 0x140]
/* 0527bb61 */  CMP RBP,RSI
/* 0527bb64 */  SETZ AL
/* 0527bb67 */  TEST RSI,RSI
/* 0527bb6a */  SETZ CL
/* 0527bb6d */  OR CL,AL
/* 0527bb6f */  JNZ 0x0527bb82
/* 0527bb71 */  LEA RDI,[0xf5463b0]
/* 0527bb78 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0527bb7f */  CALL qword ptr [RAX + 0x18]
/* 0527bb82 */  MOV RBX,qword ptr [RSP + 0x350]
/* 0527bb8a */  TEST RBX,RBX
/* 0527bb8d */  JZ 0x0527bbfd
/* 0527bb8f */  MOV R14,qword ptr [RSP + 0x358]
/* 0527bb97 */  MOV RDI,RBX
/* 0527bb9a */  CMP RBX,R14
/* 0527bb9d */  JNZ 0x0527bbc4
/* 0527bb9f */  JMP 0x0527bbe5
/* 0527bbb0 */  MOV EAX,0x20
/* 0527bbb5 */  MOV RCX,qword ptr [RDI]
/* 0527bbb8 */  CALL qword ptr [RCX + RAX*0x1]
/* 0527bbbb */  ADD R14,-0x50
/* 0527bbbf */  CMP R14,RBX
/* 0527bbc2 */  JZ 0x0527bbdd
/* 0527bbc4 */  LEA RAX,[R14 + -0x30]
/* 0527bbc8 */  MOV RDI,qword ptr [R14 + -0x10]
/* 0527bbcc */  CMP RAX,RDI
/* 0527bbcf */  JZ 0x0527bbb0
/* 0527bbd1 */  MOV EAX,0x28
/* 0527bbd6 */  TEST RDI,RDI
/* 0527bbd9 */  JNZ 0x0527bbb5
/* 0527bbdb */  JMP 0x0527bbbb
/* 0527bbdd */  MOV RDI,qword ptr [RSP + 0x350]
/* 0527bbe5 */  MOV qword ptr [RSP + 0x358],RBX
/* 0527bbed */  MOV RSI,qword ptr [RSP + 0x360]
/* 0527bbf5 */  SUB RSI,RDI
/* 0527bbf8 */  CALL 0x0412a280
/* 0527bbfd */  MOV RAX,qword ptr [RSP + 0x30]
/* 0527bc02 */  MOV qword ptr [RSP + 0xd0],RAX
/* 0527bc0a */  LEA R13,[RSP + 0xe0]
/* 0527bc12 */  MOV qword ptr [RSP + 0x100],R13
/* 0527bc1a */  LEA RAX,[0xef9fb50]
/* 0527bc21 */  MOV qword ptr [RSP + 0xe0],RAX
/* 0527bc29 */  MOV R14,qword ptr [RSP + 0x10]
/* 0527bc2e */  MOV qword ptr [RSP + 0xe8],R14
/* 0527bc36 */  MOV qword ptr [RSP + 0x110],0x0
/* 0527bc42 */  CMP byte ptr [R12 + 0x130],0x0
/* 0527bc4b */  JNZ 0x0527bf61
/* 0527bc51 */  MOV RBX,qword ptr [R14 + 0x28]
/* 0527bc55 */  MOV RDI,qword ptr [R14 + 0x30]
/* 0527bc59 */  MOV RAX,qword ptr [RDI]
/* 0527bc5c */  CALL qword ptr [RAX + 0x18]
/* 0527bc5f */  LEA R12,[0xf3eb4b0]
/* 0527bc66 */  MOV qword ptr [RSP + 0x250],R12
/* 0527bc6e */  LEA RCX,[RSP + 0xa8]
/* 0527bc76 */  MOV qword ptr [RSP + 0x258],RCX
/* 0527bc7e */  MOV RCX,qword ptr [RSP + 0x50]
/* 0527bc83 */  MOV qword ptr [RSP + 0x260],RCX
/* 0527bc8b */  MOV qword ptr [RSP + 0x268],RBX
/* 0527bc93 */  MOV dword ptr [RSP + 0x270],EAX
/* 0527bc9a */  MOV RAX,qword ptr [RSP + 0xd0]
/* 0527bca2 */  MOV RDI,qword ptr [RSP + 0x100]
/* 0527bcaa */  MOV qword ptr [RSP + 0x280],RAX
/* 0527bcb2 */  LEA R15,[RSP + 0x290]
/* 0527bcba */  TEST RDI,RDI
/* 0527bcbd */  JZ 0x0527bccc
/* 0527bcbf */  CMP RDI,R13
/* 0527bcc2 */  JZ 0x0527bcd8
/* 0527bcc4 */  MOV RAX,qword ptr [RDI]
/* 0527bcc7 */  CALL qword ptr [RAX + 0x10]
/* 0527bcca */  JMP 0x0527bcce
/* 0527bccc */  XOR EAX,EAX
/* 0527bcce */  MOV qword ptr [RSP + 0x2b0],RAX
/* 0527bcd6 */  JMP 0x0527bce9
/* 0527bcd8 */  MOV qword ptr [RSP + 0x2b0],R15
/* 0527bce0 */  MOV RAX,qword ptr [RDI]
/* 0527bce3 */  MOV RSI,R15
/* 0527bce6 */  CALL qword ptr [RAX + 0x18]
/* 0527bce9 */  MOV RAX,qword ptr [RSP + 0x110]
/* 0527bcf1 */  MOV qword ptr [RSP + 0x2c0],RAX
/* 0527bcf9 */  MOV RBX,qword ptr [RSP + 0x10]
/* 0527bcfe */  MOV RAX,qword ptr [RBX + 0x30]
/* 0527bd02 */  XOR ECX,ECX
/* 0527bd04 */  SUB CX,word ptr [RAX + 0xa8]
/* 0527bd0b */  MOV word ptr [RSP + 0x130],0x0
/* 0527bd15 */  MOV word ptr [RSP + 0x132],CX
/* 0527bd1d */  LEA RSI,[RSP + 0x130]
/* 0527bd25 */  MOV RDI,RBX
/* 0527bd28 */  CALL 0x0caf8020
/* 0527bd2d */  MOV RDI,qword ptr [RSP + 0x8]
/* 0527bd32 */  MOV R10,qword ptr [RDI]
/* 0527bd35 */  LEA R14,[RSP + 0x250]
/* 0527bd3d */  MOV RSI,RAX
/* 0527bd40 */  MOV RDX,RBX
/* 0527bd43 */  MOV RCX,R14
/* 0527bd46 */  MOV R8,qword ptr [RSP + 0x28]
/* 0527bd4b */  MOV R9,qword ptr [RSP + 0x18]
/* 0527bd50 */  CALL qword ptr [R10 + 0x1b8]
/* 0527bd57 */  MOV qword ptr [RSP + 0x250],R12
/* 0527bd5f */  MOV RDI,qword ptr [RSP + 0x2b0]
/* 0527bd67 */  CMP RDI,R15
/* 0527bd6a */  MOV RBX,qword ptr [RSP + 0x1b0]
/* 0527bd72 */  JZ 0x0527bd80
/* 0527bd74 */  MOV EAX,0x28
/* 0527bd79 */  TEST RDI,RDI
/* 0527bd7c */  JNZ 0x0527bd85
/* 0527bd7e */  JMP 0x0527bd8b
/* 0527bd80 */  MOV EAX,0x20
/* 0527bd85 */  MOV RCX,qword ptr [RDI]
/* 0527bd88 */  CALL qword ptr [RCX + RAX*0x1]
/* 0527bd8b */  MOV RAX,qword ptr [RSP + 0x10]
/* 0527bd90 */  MOV RDI,qword ptr [RAX + 0x28]
/* 0527bd94 */  MOV RAX,qword ptr [RDI]
/* 0527bd97 */  CALL qword ptr [RAX + 0x568]
/* 0527bd9d */  LEA R15,[RAX + 0x50]
/* 0527bda1 */  CMP byte ptr [RAX + 0x77],0x0
/* 0527bda5 */  JNZ 0x0527bdd0
/* 0527bda7 */  MOV R12,RAX
/* 0527bdaa */  ADD R12,0x70
/* 0527bdae */  CMP byte ptr [RAX + 0x68],0x0
/* 0527bdb2 */  JNZ 0x0527bdbf
/* 0527bdb4 */  TEST byte ptr [RAX + 0x56],0x1
/* 0527bdb8 */  JNZ 0x0527bdbf
/* 0527bdba */  MOV R15,R12
/* 0527bdbd */  JMP 0x0527bdd0
/* 0527bdbf */  MOV RDI,R12
/* 0527bdc2 */  MOV RSI,R15
/* 0527bdc5 */  CALL 0x04fa7a10
/* 0527bdca */  TEST AL,AL
/* 0527bdcc */  CMOVNZ R15,R12
/* 0527bdd0 */  MOVZX EAX,byte ptr [R15 + 0x6]
/* 0527bdd5 */  OR AL,byte ptr [R15 + 0x18]
/* 0527bdd9 */  TEST AL,0x1
/* 0527bddb */  LEA R12,[0xf72b850]
/* 0527bde2 */  CMOVNZ R12,R15
/* 0527bde6 */  CMP byte ptr [0x0f5a2e08],0x0
/* 0527bded */  JNZ 0x0527bdf7
/* 0527bdef */  CMP byte ptr [R12 + 0x18],0x0
/* 0527bdf5 */  JZ 0x0527be3c
/* 0527bdf7 */  LEA R15,[0x158fc34]
/* 0527bdfe */  CMP byte ptr [0x0f5a2858],0x0
/* 0527be05 */  JNZ 0x0527be67
/* 0527be07 */  CMP byte ptr [R12 + 0x18],0x0
/* 0527be0d */  JNZ 0x0527be67
/* 0527be0f */  TEST byte ptr [0x0f5a2846],0x1
/* 0527be16 */  JZ 0x0527be33
/* 0527be18 */  CMP byte ptr [R12 + 0x7],0x0
/* 0527be1e */  JNZ 0x0527be33
/* 0527be20 */  LEA RSI,[0xf5a2840]
/* 0527be27 */  MOV RDI,R12
/* 0527be2a */  CALL 0x04fa7a10
/* 0527be2f */  TEST AL,AL
/* 0527be31 */  JNZ 0x0527be67
/* 0527be33 */  LEA R15,[0x158fc44]
/* 0527be3a */  JMP 0x0527be67
/* 0527be3c */  LEA R15,[0x158fc54]
/* 0527be43 */  TEST byte ptr [0x0f5a2df6],0x1
/* 0527be4a */  JZ 0x0527be67
/* 0527be4c */  CMP byte ptr [R12 + 0x7],0x0
/* 0527be52 */  JNZ 0x0527be67
/* 0527be54 */  LEA RSI,[0xf5a2df0]
/* 0527be5b */  MOV RDI,R12
/* 0527be5e */  CALL 0x04fa7a10
/* 0527be63 */  TEST AL,AL
/* 0527be65 */  JNZ 0x0527bdf7
/* 0527be67 */  MOV RBP,R12
/* 0527be6a */  MOV RAX,qword ptr [RSP + 0x10]
/* 0527be6f */  MOV RDI,qword ptr [RAX + 0x28]
/* 0527be73 */  MOV RAX,qword ptr [RDI]
/* 0527be76 */  CALL qword ptr [RAX + 0x2b0]
/* 0527be7c */  MOV R12,RAX
/* 0527be7f */  CMP byte ptr [0x0f5a2858],0x0
/* 0527be86 */  JNZ 0x0527be92
/* 0527be88 */  CMP byte ptr [RBP + 0x18],0x0
/* 0527be8c */  JZ 0x0527c075
/* 0527be92 */  MOV RAX,qword ptr [RSP + 0x8]
/* 0527be97 */  LEA RDI,[RAX + 0x1e0]
/* 0527be9e */  MOV qword ptr [RSP + 0x250],0x0
/* 0527beaa */  MOV qword ptr [RSP + 0x280],0x0
/* 0527beb6 */  MOV qword ptr [RSP + 0x290],0x0
/* 0527bec2 */  SUB RSP,0x8
/* 0527bec6 */  LEA RSI,[RSP + 0xb0]
/* 0527bece */  MOV RDX,qword ptr [RSP + 0x20]
/* 0527bed3 */  MOV RCX,qword ptr [RSP + 0x58]
/* 0527bed8 */  MOV R8,R15
/* 0527bedb */  MOV R9,qword ptr [RSP + 0x30]
/* 0527bee0 */  PUSH R12
/* 0527bee2 */  PUSH R14
/* 0527bee4 */  PUSH RBX
/* 0527bee5 */  CALL 0x04a89150
/* 0527beea */  ADD RSP,0x20
/* 0527beee */  LEA RAX,[RSP + 0x260]
/* 0527bef6 */  MOV RDI,qword ptr [RSP + 0x280]
/* 0527befe */  CMP RDI,RAX
/* 0527bf01 */  JZ 0x0527bf0f
/* 0527bf03 */  MOV EAX,0x28
/* 0527bf08 */  TEST RDI,RDI
/* 0527bf0b */  JNZ 0x0527bf14
/* 0527bf0d */  JMP 0x0527bf1a
/* 0527bf0f */  MOV EAX,0x20
/* 0527bf14 */  MOV RCX,qword ptr [RDI]
/* 0527bf17 */  CALL qword ptr [RCX + RAX*0x1]
/* 0527bf1a */  MOV R10,qword ptr [RSP + 0x8]
/* 0527bf1f */  LEA RDI,[R10 + 0x1d0]
/* 0527bf26 */  SUB RSP,0x8
/* 0527bf2a */  LEA RAX,[RSP + 0xd8]
/* 0527bf32 */  LEA RSI,[RSP + 0xb0]
/* 0527bf3a */  MOV RDX,qword ptr [RSP + 0x20]
/* 0527bf3f */  MOV RCX,qword ptr [RSP + 0x58]
/* 0527bf44 */  MOV R8,R15
/* 0527bf47 */  MOV R9,qword ptr [RSP + 0x30]
/* 0527bf4c */  PUSH R12
/* 0527bf4e */  MOV R12,R10
/* 0527bf51 */  PUSH RAX
/* 0527bf52 */  PUSH RBX
/* 0527bf53 */  CALL 0x04a89150
/* 0527bf58 */  ADD RSP,0x20
/* 0527bf5c */  MOV R14,qword ptr [RSP + 0x10]
/* 0527bf61 */  LEA RSI,[RSP + 0xa8]
/* 0527bf69 */  MOV RDI,R14
/* 0527bf6c */  XOR EDX,EDX
/* 0527bf6e */  CALL 0x0cae2040
/* 0527bf73 */  MOV RDI,R14
/* 0527bf76 */  XOR ESI,ESI
/* 0527bf78 */  CALL 0x0cafad60
/* 0527bf7d */  CMP qword ptr [R14 + 0x60],0x0
/* 0527bf82 */  JNZ 0x0527bf88
/* 0527bf84 */  MOV qword ptr [R14 + 0x60],R12
/* 0527bf88 */  MOV RDI,R14
/* 0527bf8b */  MOV ESI,0x1
/* 0527bf90 */  MOV EDX,0x2
/* 0527bf95 */  CALL 0x0cae0970
/* 0527bf9a */  MOV RDI,qword ptr [RSP + 0x100]
/* 0527bfa2 */  CMP RDI,R13
/* 0527bfa5 */  JZ 0x0527bfc6
/* 0527bfa7 */  MOV EAX,0x28
/* 0527bfac */  TEST RDI,RDI
/* 0527bfaf */  JNZ 0x0527bfcb
/* 0527bfb1 */  MOV RBX,qword ptr [RSP + 0x30]
/* 0527bfb6 */  MOV qword ptr [RSP + 0x30],0x0
/* 0527bfbf */  TEST RBX,RBX
/* 0527bfc2 */  JNZ 0x0527bfe4
/* 0527bfc4 */  JMP 0x0527c00a
/* 0527bfc6 */  MOV EAX,0x20
/* 0527bfcb */  MOV RCX,qword ptr [RDI]
/* 0527bfce */  CALL qword ptr [RCX + RAX*0x1]
/* 0527bfd1 */  MOV RBX,qword ptr [RSP + 0x30]
/* 0527bfd6 */  MOV qword ptr [RSP + 0x30],0x0
/* 0527bfdf */  TEST RBX,RBX
/* 0527bfe2 */  JZ 0x0527c00a
/* 0527bfe4 */  MOV RDI,qword ptr [RBX + 0x40]
/* 0527bfe8 */  TEST RDI,RDI
/* 0527bfeb */  JZ 0x0527bffd
/* 0527bfed */  MOV qword ptr [RBX + 0x48],RDI
/* 0527bff1 */  MOV RSI,qword ptr [RBX + 0x50]
/* 0527bff5 */  SUB RSI,RDI
/* 0527bff8 */  CALL 0x0412a280
/* 0527bffd */  MOV ESI,0x68
/* 0527c002 */  MOV RDI,RBX
/* 0527c005 */  CALL 0x0412a280
/* 0527c00a */  LEA RAX,[0xf460460]
/* 0527c011 */  MOV qword ptr [RSP + 0x1b8],RAX
/* 0527c019 */  MOV RDI,qword ptr [RSP + 0x1d8]
/* 0527c021 */  TEST RDI,RDI
/* 0527c024 */  JZ 0x0527c03e
/* 0527c026 */  MOV qword ptr [RSP + 0x1e0],RDI
/* 0527c02e */  MOV RSI,qword ptr [RSP + 0x1e8]
/* 0527c036 */  SUB RSI,RDI
/* 0527c039 */  CALL 0x0412a280
/* 0527c03e */  MOV RDI,qword ptr [RSP + 0x200]
/* 0527c046 */  TEST RDI,RDI
/* 0527c049 */  JZ 0x0527c063
/* 0527c04b */  MOV qword ptr [RSP + 0x208],RDI
/* 0527c053 */  MOV RSI,qword ptr [RSP + 0x210]
/* 0527c05b */  SUB RSI,RDI
/* 0527c05e */  CALL 0x0412a280
/* 0527c063 */  ADD RSP,0x378
/* 0527c06a */  POP RBX
/* 0527c06b */  POP R12
/* 0527c06d */  POP R13
/* 0527c06f */  POP R14
/* 0527c071 */  POP R15
/* 0527c073 */  POP RBP
/* 0527c074 */  RET
/* 0527c075 */  TEST byte ptr [0x0f5a2846],0x1
/* 0527c07c */  JZ 0x0527bf1a
/* 0527c082 */  CMP byte ptr [RBP + 0x7],0x0
/* 0527c086 */  JNZ 0x0527bf1a
/* 0527c08c */  LEA RSI,[0xf5a2840]
/* 0527c093 */  MOV RDI,RBP
/* 0527c096 */  CALL 0x04fa7a10
/* 0527c09b */  TEST AL,AL
/* 0527c09d */  JNZ 0x0527be92
/* 0527c0a3 */  JMP 0x0527bf1a
/* 0527c0a8 */  MOV EDI,0x18
/* 0527c0ad */  XOR ESI,ESI
/* 0527c0af */  CALL 0x0eec74c0
/* 0527c0b4 */  JMP 0x0527ae3a
/* 0527c0b9 */  MOV EDI,0x200
/* 0527c0be */  XOR ESI,ESI
/* 0527c0c0 */  CALL 0x0eec74c0
/* 0527c0c5 */  JMP 0x0527ae6d
/* 0527c0ca */  MOV EDI,0x10
/* 0527c0cf */  CALL 0x041086b0
/* 0527c0d4 */  MOV R14,RAX
/* 0527c0d7 */  LEA RSI,[0x11ed0d9]
/* 0527c0de */  MOV RDI,RAX
/* 0527c0e1 */  CALL 0x0412bf30
/* 0527c0e6 */  LEA RAX,[0xeeec910]
/* 0527c0ed */  ADD RAX,0x10
/* 0527c0f1 */  MOV qword ptr [R14],RAX
/* 0527c0f4 */  LEA RSI,[0xeeec938]
/* 0527c0fb */  LEA RDX,[0x412bce0]
/* 0527c102 */  MOV RDI,R14
/* 0527c105 */  CALL 0x041088a0
/* 0527c10a */  JMP 0x0527c1f8
/* 0527c1f8 */  MOV RBX,RAX
/* 0527c1fb */  MOV RDI,qword ptr [RSP + 0x100]
/* 0527c203 */  MOV EAX,0x20
/* 0527c208 */  CMP RDI,R13
/* 0527c20b */  JZ 0x0527c21b
/* 0527c20d */  MOV EAX,0x28
/* 0527c212 */  TEST RDI,RDI
/* 0527c215 */  JZ 0x0527c38d
/* 0527c21b */  MOV RCX,qword ptr [RDI]
/* 0527c21e */  CALL qword ptr [RCX + RAX*0x1]
/* 0527c221 */  JMP 0x0527c38d
/* 0527c38d */  LEA RDI,[RSP + 0x128]
/* 0527c395 */  CALL 0x0527c430
/* 0527c39a */  LEA RDI,[RSP + 0x30]
/* 0527c39f */  CALL 0x0527aaa0
/* 0527c3a4 */  LEA RAX,[0xf460460]
/* 0527c3ab */  MOV qword ptr [RSP + 0x1b8],RAX
/* 0527c3b3 */  MOV RDI,qword ptr [RSP + 0x1d8]
/* 0527c3bb */  TEST RDI,RDI
/* 0527c3be */  JNZ 0x0527c3d5
/* 0527c3c0 */  MOV RDI,qword ptr [RSP + 0x200]
/* 0527c3c8 */  TEST RDI,RDI
/* 0527c3cb */  JNZ 0x0527c3fa
/* 0527c3cd */  MOV RDI,RBX
/* 0527c3d0 */  CALL 0x0eee2d70
/* 0527c3d5 */  MOV qword ptr [RSP + 0x1e0],RDI
/* 0527c3dd */  MOV RSI,qword ptr [RSP + 0x1e8]
/* 0527c3e5 */  SUB RSI,RDI
/* 0527c3e8 */  CALL 0x0412a280
/* 0527c3ed */  MOV RDI,qword ptr [RSP + 0x200]
/* 0527c3f5 */  TEST RDI,RDI
/* 0527c3f8 */  JZ 0x0527c3cd
/* 0527c3fa */  MOV qword ptr [RSP + 0x208],RDI
/* 0527c402 */  MOV RSI,qword ptr [RSP + 0x210]
/* 0527c40a */  SUB RSI,RDI
/* 0527c40d */  CALL 0x0412a280
/* 0527c412 */  MOV RDI,RBX
/* 0527c415 */  CALL 0x0eee2d70
/* 0527c41a */  MOV RDI,RAX
/* 0527c41d */  CALL 0x04882e20
/* 0527c422 */  MOV RDI,RAX
/* 0527c425 */  CALL 0x04882e20
/* 0527c42a */  INT3
