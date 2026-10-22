/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xa2f8e80 (ELF vaddr 0xa1f8e80)
 * Label: caller-of-callee
 * Body:  [[0a2f8e80, 0a2f94ea] [0a2f94f0, 0a2f966a] [0a2f9670, 0a2f97ea] [0a2f97f0, 0a2f99f5] [0a2f9a00, 0a2f9a34] [0a2f9a40, 0a2f9b6d] [0a2f9b70, 0a2f9c1b] [0a2f9c20, 0a2f9d6c] [0a2f9d70, 0a2f9e2c] [0a2f9e30, 0a2f9e7a] [0a2f9e80, 0a2f9eb1] [0a2f9ec0, 0a2f9f59] [0a2f9f60, 0a2fa438] [0a2fa440, 0a2fa7b1] [0a2fa7c0, 0a2fa7e4] [0a2fa7f0, 0a2fa870] [0a2fa880, 0a2faa95] [0a2faaa0, 0a2fb3f6] [0a2fb400, 0a2fb459] [0a2fb460, 0a2fb6cc] [0a2fb6d0, 0a2fbbdc] [0a2fbbe0, 0a2fbc0b] [0a2fbefa, 0a2fbf21]]
 * Ghidra: FUN_0a2f8e80
 */


/* WARNING: Removing unreachable block (ram,0x0a2fb4f2) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0a2f8e80(long *param_1,undefined8 param_2,long *param_3,float *param_4,int param_5)

{
  long *plVar1;
  ulong *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  undefined8 ***pppuVar6;
  undefined8 **ppuVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 *****pppppuVar11;
  long lVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined2 uVar18;
  undefined2 uVar19;
  undefined8 *****pppppuVar20;
  undefined8 *****pppppuVar21;
  undefined *puVar22;
  int iVar23;
  int iVar24;
  undefined8 *******pppppppuVar25;
  float *pfVar26;
  undefined8 ****ppppuVar27;
  undefined8 *****pppppuVar28;
  undefined8 *****pppppuVar29;
  undefined8 ****ppppuVar30;
  undefined8 *****pppppuVar31;
  ulong uVar32;
  undefined8 ******ppppppuVar33;
  undefined8 *****pppppuVar34;
  undefined8 ****ppppuVar35;
  undefined8 *****pppppuVar36;
  undefined4 *puVar37;
  undefined8 *puVar38;
  long lVar39;
  undefined1 *puVar40;
  undefined8 uVar41;
  long *plVar42;
  undefined1 extraout_DL;
  undefined8 ***pppuVar43;
  long extraout_RDX;
  long lVar44;
  undefined8 **ppuVar45;
  undefined8 ****ppppuVar46;
  undefined8 *****pppppuVar47;
  byte bVar48;
  byte bVar49;
  ulong uVar50;
  bool bVar51;
  float fVar52;
  undefined4 uVar53;
  undefined1 auVar54 [16];
  undefined8 *****pppppuStack_3b8;
  undefined8 *****pppppuStack_3b0;
  undefined8 *****pppppuStack_3a8;
  undefined8 *****pppppuStack_3a0;
  undefined8 *****pppppuStack_398;
  undefined8 ****ppppuStack_388;
  undefined1 auStack_380 [4];
  undefined4 uStack_37c;
  undefined8 *****pppppuStack_378;
  undefined8 *****pppppuStack_370;
  undefined8 uStack_368;
  undefined8 ****ppppuStack_358;
  undefined8 ******ppppppuStack_350;
  int iStack_348;
  undefined8 uStack_340;
  uint uStack_338;
  undefined4 uStack_334;
  undefined8 ****ppppuStack_330;
  byte bStack_328;
  undefined1 uStack_327;
  undefined2 uStack_326;
  undefined4 uStack_324;
  undefined1 uStack_320;
  undefined1 uStack_31f;
  undefined2 uStack_31e;
  undefined4 uStack_31c;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 *****pppppuStack_308;
  undefined8 *****pppppuStack_300;
  undefined8 uStack_2f8;
  ulong uStack_2f0;
  undefined8 *****pppppuStack_2e8;
  undefined8 *****pppppuStack_2e0;
  undefined8 *****pppppuStack_2d8;
  undefined8 *****pppppuStack_2d0;
  undefined8 uStack_2c8;
  ulong uStack_2c0;
  undefined8 ****ppppuStack_2b8;
  undefined8 *****pppppuStack_2b0;
  undefined8 *****pppppuStack_2a8;
  undefined8 *****pppppuStack_2a0;
  undefined4 uStack_298;
  char cStack_290;
  undefined8 ****ppppuStack_288;
  undefined8 *****pppppuStack_280;
  undefined8 *****pppppuStack_278;
  undefined8 *****pppppuStack_270;
  undefined4 uStack_268;
  char cStack_260;
  undefined8 *****pppppuStack_258;
  undefined8 *****pppppuStack_250;
  undefined8 *****pppppuStack_248;
  char cStack_240;
  undefined8 *******pppppppuStack_230;
  undefined8 ****ppppuStack_228;
  undefined8 ****ppppuStack_220;
  undefined8 ****ppppuStack_218;
  long *plStack_208;
  undefined8 *****pppppuStack_200;
  undefined4 uStack_1f4;
  undefined8 *****pppppuStack_1f0;
  undefined4 uStack_1e8;
  undefined4 *puStack_1e0;
  undefined1 uStack_1d8;
  undefined8 *apuStack_1d0 [2];
  code *pcStack_1c0;
  code *pcStack_1b8;
  undefined4 uStack_1b0;
  char cStack_1ac;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined8 *******apppppppuStack_190 [2];
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  int iStack_170;
  char cStack_16c;
  long lStack_168;
  long lStack_160;
  code *pcStack_158;
  float fStack_150;
  undefined4 uStack_14c;
  float fStack_148;
  byte bStack_144;
  undefined8 *****pppppuStack_140;
  undefined8 *****pppppuStack_138;
  undefined8 uStack_130;
  undefined8 *****pppppuStack_128;
  undefined4 uStack_120;
  char cStack_118;
  undefined7 uStack_117;
  undefined8 *****pppppuStack_110;
  undefined8 *****pppppuStack_108;
  undefined8 *****pppppuStack_100;
  undefined8 *****pppppuStack_f8;
  undefined4 uStack_f0;
  char cStack_e8;
  undefined8 ****ppppuStack_e0;
  undefined8 *****pppppuStack_d8;
  undefined8 *****pppppuStack_d0;
  undefined8 *****pppppuStack_c8;
  undefined4 uStack_c0;
  char cStack_b8;
  undefined8 ****ppppuStack_b0;
  undefined8 *****pppppuStack_a8;
  undefined8 *****pppppuStack_a0;
  undefined8 *****pppppuStack_98;
  undefined4 uStack_90;
  char cStack_88;
  undefined8 *****pppppuStack_80;
  undefined8 *****pppppuStack_78;
  undefined8 *****pppppuStack_70;
  char cStack_68;
  byte bStack_60;
  long lStack_58;
  undefined8 *****pppppuStack_50;
  undefined8 uStack_48;
  long lStack_40;
  ulong uStack_38;
  
  if (param_5 != 1) {
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    func_0x05d84ba0(param_1);
    return param_1;
  }
  apppppppuStack_190[0] = (undefined8 *******)0x0;
  uStack_180 = (undefined4)param_3[2];
  uStack_17c = *(undefined4 *)((long)param_3 + 0x14);
  uStack_178 = (undefined4)param_3[3];
  uStack_174 = *(undefined4 *)((long)param_3 + 0x1c);
  iStack_170 = (int)param_3[4];
  cStack_16c = *(char *)((long)param_3 + 0x24);
  plStack_208 = param_1;
  if (cStack_16c != '\0') {
    if (cStack_16c == '\x02') {
      (*(code *)param_3[2])(5,param_3,apppppppuStack_190);
    }
    else {
      apppppppuStack_190[0] = (undefined8 *******)*param_3;
      *param_3 = 0;
    }
  }
  lVar44 = param_3[5];
  lStack_160 = param_3[6];
  param_3[6] = 0;
  pcStack_158 = (code *)param_3[7];
  param_3[7] = 0;
  pppppppuVar25 = apppppppuStack_190[0];
  if (cStack_16c == '\x02') {
    pppppppuVar25 = apppppppuStack_190;
  }
  lStack_168 = lVar44;
  if ((iStack_170 != 0x456f15ef) || (pppppppuVar25 == (undefined8 *******)0x0)) {
    if (pcStack_158 != (code *)0x0) {
      if (lStack_160 == 0) {
        (*pcStack_158)(0,apppppppuStack_190,0);
      }
      pppppppuVar25 = apppppppuStack_190[0];
      if (cStack_16c == '\x02') {
        pppppppuVar25 = apppppppuStack_190;
      }
      pppppppuVar25 =
           (undefined8 *******)func_0x0488e200(lVar44,lStack_160,0x456f15ef,pppppppuVar25);
      if (pppppppuVar25 != (undefined8 *******)0x0) goto LAB_0a2f8ff9;
    }
LAB_0a2f933a:
    plStack_208[2] = (long)&UNK_0488e0b0;
    *(undefined4 *)(plStack_208 + 4) = 0x48b5725f;
    plStack_208[3] = 0;
    *(undefined1 *)((long)plStack_208 + 0x24) = 0;
    *plStack_208 = 0;
    plStack_208[5] = lStack_168;
    plStack_208[6] = 0;
    plStack_208[7] = 0;
    plVar42 = plStack_208;
    goto LAB_0a2fbafe;
  }
LAB_0a2f8ff9:
  pppppppuStack_230 = pppppppuVar25;
  if (param_4[8] == -8.366861e-28) {
    bVar51 = false;
  }
  else {
    func_0x0a2fc2b0(&fStack_150,param_4);
    lVar44 = CONCAT71(uStack_117,cStack_118);
    if ((lVar44 != 0) && ((byte)(uStack_130._4_1_ - 1U) < 2)) {
      func_0x048b0900(param_4,&fStack_150);
    }
    if (pppppuStack_138 != (undefined8 *****)0x0) {
      (*(code *)pppppuStack_138)(&fStack_150);
    }
    if (lVar44 == 0) goto LAB_0a2f933a;
    bVar51 = param_4[8] != -8.366861e-28;
  }
  lStack_40 = lStack_168;
  pfVar26 = *(float **)param_4;
  if (*(char *)(param_4 + 9) == '\x02') {
    pfVar26 = param_4;
  }
  if ((bool)(pfVar26 == (float *)0x0 | bVar51)) {
    uVar41 = *(undefined8 *)(param_4 + 10);
    lVar44 = *(long *)(param_4 + 0xc);
    if (lVar44 == 0) {
      (**(code **)(param_4 + 0xe))(0,param_4,0);
      lVar44 = *(long *)(param_4 + 0xc);
    }
    pfVar26 = (float *)func_0x0488e200(uVar41,lVar44,0x92849405);
  }
  if ((((*(char *)(pfVar26 + 0x30) != '\x01') || (*(char *)(pfVar26 + 1) != '\x01')) ||
      (*(char *)(pfVar26 + 3) != '\x01')) || (*pfVar26 <= pfVar26[2])) {
    ppppuVar27 = (undefined8 ****)(*(code *)(*pppppppuStack_230[6])[0x163])();
    if (*(char *)(pfVar26 + 0x30) == '\x01') {
      uStack_318 = (undefined8 *****)((ulong)uStack_318 & 0xffffffffffffff00);
      uStack_2f0 = uStack_2f0 & 0xffffffffffffff00;
      pppppuStack_2e8 = (undefined8 *****)((ulong)pppppuStack_2e8 & 0xffffffffffffff00);
      uStack_2c0 = uStack_2c0 & 0xffffffffffffff00;
      ppppuStack_2b8 = (undefined8 ****)((ulong)ppppuStack_2b8 & 0xffffffffffffff00);
      cStack_290 = '\0';
      ppppuStack_288 = (undefined8 ****)((ulong)ppppuStack_288 & 0xffffffffffffff00);
      cStack_260 = '\0';
      pppppuStack_258 = (undefined8 *****)((ulong)pppppuStack_258 & 0xffffffffffffff00);
      cStack_240 = '\0';
      fVar52 = *pfVar26;
      bStack_328 = SUB41(fVar52,0);
      uStack_327 = (undefined1)((uint)fVar52 >> 8);
      uStack_326 = (undefined2)((uint)fVar52 >> 0x10);
      uStack_324 = CONCAT31(uStack_324._1_3_,*(undefined1 *)(pfVar26 + 1));
      fVar52 = pfVar26[2];
      uStack_320 = SUB41(fVar52,0);
      uStack_31f = (undefined1)((uint)fVar52 >> 8);
      uStack_31e = (undefined2)((uint)fVar52 >> 0x10);
      uStack_31c = CONCAT31(uStack_31c._1_3_,*(undefined1 *)(pfVar26 + 3));
      ppppuStack_358 = ppppuVar27;
      if (*(char *)(pfVar26 + 10) == '\x01') {
        lVar44 = *(long *)(pfVar26 + 4);
        lVar39 = *(long *)(pfVar26 + 6);
        pppppuStack_3a8 = (undefined8 *****)0x0;
        pppppuStack_3a0 = (undefined8 *****)0x0;
        pppppuStack_3b8 = (undefined8 *****)0x0;
        pppppuStack_3b0 = (undefined8 *****)0x0;
        pppppuStack_398 = (undefined8 *****)CONCAT44(pppppuStack_398._4_4_,0x3f800000);
        if (lVar44 == lVar39) {
          uStack_310 = (undefined8 *****)0x0;
          uStack_318 = (undefined8 *****)0x0;
          uVar53 = _DAT_011983f0;
LAB_0a2f93c2:
          pppppuStack_300 = pppppuStack_3a0;
          pppppuStack_308 = pppppuStack_3a8;
          pppppuStack_3b8 = (undefined8 *****)0x0;
          pppppuStack_3b0 = (undefined8 *****)0x0;
          uStack_2f8 = CONCAT44(uStack_2f8._4_4_,uVar53);
          if (pppppuStack_3a0 != (undefined8 *****)0x0) {
            pppppuVar29 = (undefined8 *****)pppppuStack_3a8[1];
            if (((ulong)uStack_310 & (ulong)((long)uStack_310 + -1)) == 0) {
              pppppuVar29 = (undefined8 *****)((ulong)pppppuVar29 & (ulong)((long)uStack_310 + -1));
            }
            else if (uStack_310 <= pppppuVar29) {
              if (((ulong)pppppuVar29 | (ulong)uStack_310) >> 0x20 == 0) {
                pppppuVar29 = (undefined8 *****)
                              (((ulong)pppppuVar29 & 0xffffffff) % ((ulong)uStack_310 & 0xffffffff))
                ;
              }
              else {
                pppppuVar29 = (undefined8 *****)((ulong)pppppuVar29 % (ulong)uStack_310);
              }
            }
            uStack_318[(long)pppppuVar29] = &pppppuStack_308;
            pppppuStack_3a8 = (undefined8 *****)0x0;
            pppppuStack_3a0 = (undefined8 *****)0x0;
          }
          uStack_2f0 = CONCAT71(uStack_2f0._1_7_,1);
          pppppuVar29 = pppppuStack_3b8;
          pppppuVar34 = pppppuStack_3a8;
        }
        else {
          do {
            func_0x0a2b90c0(&pppppuStack_3b8,lVar44,lVar44);
            lVar44 = lVar44 + 0x18;
          } while (lVar44 != lVar39);
          if ((uStack_2f0 & 1) == 0) {
            uStack_318 = pppppuStack_3b8;
            uStack_310 = pppppuStack_3b0;
            uVar53 = pppppuStack_398._0_4_;
            goto LAB_0a2f93c2;
          }
          func_0x0a2b98e0(&uStack_318,&pppppuStack_3b8);
          pppppuVar29 = pppppuStack_3b8;
          pppppuVar34 = pppppuStack_3a8;
        }
        while (pppppuVar34 != (undefined8 *****)0x0) {
          pppppuVar47 = (undefined8 *****)*pppppuVar34;
          pppppuStack_3b8 = pppppuVar29;
          if (((ulong)pppppuVar34[2] & 1) != 0) {
            func_0x0412a280(pppppuVar34[4],(ulong)pppppuVar34[2] & 0xfffffffffffffffe);
          }
          func_0x0412a280(pppppuVar34,0x28);
          pppppuVar29 = pppppuStack_3b8;
          pppppuVar34 = pppppuVar47;
        }
        pppppuStack_3b8 = (undefined8 *****)0x0;
        if (pppppuVar29 != (undefined8 *****)0x0) {
          func_0x0412a280(pppppuVar29,(long)pppppuStack_3b0 << 3);
        }
      }
      if (*(char *)(pfVar26 + 0x12) == '\x01') {
        lVar44 = *(long *)(pfVar26 + 0xc);
        lVar39 = *(long *)(pfVar26 + 0xe);
        pppppuStack_3a8 = (undefined8 *****)0x0;
        pppppuStack_3a0 = (undefined8 *****)0x0;
        pppppuStack_3b8 = (undefined8 *****)0x0;
        pppppuStack_3b0 = (undefined8 *****)0x0;
        pppppuStack_398 = (undefined8 *****)CONCAT44(pppppuStack_398._4_4_,0x3f800000);
        pppppuVar29 = pppppuStack_3a8;
        pppppuVar34 = pppppuStack_3a0;
        pppppuVar47 = pppppuStack_3b8;
        pppppuVar36 = pppppuStack_3b0;
        for (; pppppuStack_3b8 = pppppuVar47, pppppuStack_3b0 = pppppuVar36,
            pppppuStack_3a8 = pppppuVar29, pppppuStack_3a0 = pppppuVar34, lVar44 != lVar39;
            lVar44 = lVar44 + 0x18) {
          func_0x0a2b90c0(&pppppuStack_3b8,lVar44,lVar44);
          pppppuVar29 = pppppuStack_3a8;
          pppppuVar34 = pppppuStack_3a0;
          pppppuVar47 = pppppuStack_3b8;
          pppppuVar36 = pppppuStack_3b0;
        }
        if ((char)uStack_2c0 == '\x01') {
          func_0x0a2b98e0(&pppppuStack_2e8,&pppppuStack_3b8);
          pppppuVar28 = pppppuStack_3b8;
          pppppuVar11 = pppppuStack_3a8;
        }
        else {
          pppppuStack_3b8 = (undefined8 *****)0x0;
          pppppuStack_3b0 = (undefined8 *****)0x0;
          uVar32 = (ulong)uStack_2c8 >> 0x20;
          uStack_2c8 = (long *)CONCAT44((int)uVar32,pppppuStack_398._0_4_);
          if (pppppuVar34 != (undefined8 *****)0x0) {
            pppppuVar28 = (undefined8 *****)pppppuVar29[1];
            if (((ulong)pppppuVar36 & (ulong)((long)pppppuVar36 + -1)) == 0) {
              pppppuVar28 = (undefined8 *****)((ulong)pppppuVar28 & (ulong)((long)pppppuVar36 + -1))
              ;
            }
            else if (pppppuVar36 <= pppppuVar28) {
              if (((ulong)pppppuVar28 | (ulong)pppppuVar36) >> 0x20 == 0) {
                pppppuVar28 = (undefined8 *****)
                              (((ulong)pppppuVar28 & 0xffffffff) % ((ulong)pppppuVar36 & 0xffffffff)
                              );
              }
              else {
                pppppuVar28 = (undefined8 *****)((ulong)pppppuVar28 % (ulong)pppppuVar36);
              }
            }
            pppppuVar47[(long)pppppuVar28] = &pppppuStack_2d8;
            pppppuStack_3a8 = (undefined8 *****)0x0;
            pppppuStack_3a0 = (undefined8 *****)0x0;
          }
          uVar32 = uStack_2c0 >> 8;
          uStack_2c0 = CONCAT71((int7)uVar32,1);
          pppppuVar28 = pppppuStack_3b8;
          pppppuVar11 = pppppuStack_3a8;
          pppppuStack_2e8 = pppppuVar47;
          pppppuStack_2e0 = pppppuVar36;
          pppppuStack_2d8 = pppppuVar29;
          pppppuStack_2d0 = pppppuVar34;
        }
        while (pppppuVar11 != (undefined8 *****)0x0) {
          pppppuVar29 = (undefined8 *****)*pppppuVar11;
          pppppuStack_3b8 = pppppuVar28;
          if (((ulong)pppppuVar11[2] & 1) != 0) {
            func_0x0412a280(pppppuVar11[4],(ulong)pppppuVar11[2] & 0xfffffffffffffffe);
          }
          func_0x0412a280(pppppuVar11,0x28);
          pppppuVar28 = pppppuStack_3b8;
          pppppuVar11 = pppppuVar29;
        }
        pppppuStack_3b8 = (undefined8 *****)0x0;
        if (pppppuVar28 != (undefined8 *****)0x0) {
          func_0x0412a280(pppppuVar28,(long)pppppuStack_3b0 << 3);
        }
      }
      if (*(char *)(pfVar26 + 0x1a) == '\x01') {
        lVar44 = *(long *)(pfVar26 + 0x14);
        lVar39 = *(long *)(pfVar26 + 0x16);
        pppppuStack_3a8 = (undefined8 *****)0x0;
        pppppuStack_3a0 = (undefined8 *****)0x0;
        pppppuStack_3b8 = (undefined8 *****)0x0;
        pppppuStack_3b0 = (undefined8 *****)0x0;
        pppppuStack_398 = (undefined8 *****)CONCAT44(pppppuStack_398._4_4_,0x3f800000);
        pppppuVar29 = pppppuStack_3a8;
        pppppuVar34 = pppppuStack_3a0;
        pppppuVar47 = pppppuStack_3b8;
        pppppuVar36 = pppppuStack_3b0;
        for (; pppppuStack_3b8 = pppppuVar47, pppppuStack_3b0 = pppppuVar36,
            pppppuStack_3a8 = pppppuVar29, pppppuStack_3a0 = pppppuVar34, lVar44 != lVar39;
            lVar44 = lVar44 + 0x18) {
          func_0x0a2b90c0(&pppppuStack_3b8,lVar44,lVar44);
          pppppuVar29 = pppppuStack_3a8;
          pppppuVar34 = pppppuStack_3a0;
          pppppuVar47 = pppppuStack_3b8;
          pppppuVar36 = pppppuStack_3b0;
        }
        if (cStack_290 == '\x01') {
          func_0x0a2b98e0(&ppppuStack_2b8,&pppppuStack_3b8);
          pppppuVar28 = pppppuStack_3b8;
          pppppuVar11 = pppppuStack_3a8;
        }
        else {
          pppppuStack_3b8 = (undefined8 *****)0x0;
          pppppuStack_3b0 = (undefined8 *****)0x0;
          if (pppppuVar34 != (undefined8 *****)0x0) {
            pppppuVar28 = (undefined8 *****)pppppuVar29[1];
            if (((ulong)pppppuVar36 & (ulong)((long)pppppuVar36 + -1)) == 0) {
              pppppuVar28 = (undefined8 *****)((ulong)pppppuVar28 & (ulong)((long)pppppuVar36 + -1))
              ;
            }
            else if (pppppuVar36 <= pppppuVar28) {
              if (((ulong)pppppuVar28 | (ulong)pppppuVar36) >> 0x20 == 0) {
                pppppuVar28 = (undefined8 *****)
                              (((ulong)pppppuVar28 & 0xffffffff) % ((ulong)pppppuVar36 & 0xffffffff)
                              );
              }
              else {
                pppppuVar28 = (undefined8 *****)((ulong)pppppuVar28 % (ulong)pppppuVar36);
              }
            }
            pppppuVar47[(long)pppppuVar28] = &pppppuStack_2a8;
            pppppuStack_3a8 = (undefined8 *****)0x0;
            pppppuStack_3a0 = (undefined8 *****)0x0;
          }
          cStack_290 = '\x01';
          pppppuVar28 = pppppuStack_3b8;
          pppppuVar11 = pppppuStack_3a8;
          ppppuStack_2b8 = pppppuVar47;
          pppppuStack_2b0 = pppppuVar36;
          pppppuStack_2a8 = pppppuVar29;
          pppppuStack_2a0 = pppppuVar34;
          uStack_298 = pppppuStack_398._0_4_;
        }
        while (pppppuVar11 != (undefined8 *****)0x0) {
          pppppuVar29 = (undefined8 *****)*pppppuVar11;
          pppppuStack_3b8 = pppppuVar28;
          if (((ulong)pppppuVar11[2] & 1) != 0) {
            func_0x0412a280(pppppuVar11[4],(ulong)pppppuVar11[2] & 0xfffffffffffffffe);
          }
          func_0x0412a280(pppppuVar11,0x28);
          pppppuVar28 = pppppuStack_3b8;
          pppppuVar11 = pppppuVar29;
        }
        pppppuStack_3b8 = (undefined8 *****)0x0;
        if (pppppuVar28 != (undefined8 *****)0x0) {
          func_0x0412a280(pppppuVar28,(long)pppppuStack_3b0 << 3);
        }
      }
      if (*(char *)(pfVar26 + 0x22) == '\x01') {
        lVar44 = *(long *)(pfVar26 + 0x1c);
        lVar39 = *(long *)(pfVar26 + 0x1e);
        pppppuStack_3a8 = (undefined8 *****)0x0;
        pppppuStack_3a0 = (undefined8 *****)0x0;
        pppppuStack_3b8 = (undefined8 *****)0x0;
        pppppuStack_3b0 = (undefined8 *****)0x0;
        pppppuStack_398 = (undefined8 *****)CONCAT44(pppppuStack_398._4_4_,0x3f800000);
        pppppuVar29 = pppppuStack_3a8;
        pppppuVar34 = pppppuStack_3a0;
        pppppuVar47 = pppppuStack_3b8;
        pppppuVar36 = pppppuStack_3b0;
        for (; pppppuStack_3b8 = pppppuVar47, pppppuStack_3b0 = pppppuVar36,
            pppppuStack_3a8 = pppppuVar29, pppppuStack_3a0 = pppppuVar34, lVar44 != lVar39;
            lVar44 = lVar44 + 0x18) {
          func_0x0a2b90c0(&pppppuStack_3b8,lVar44,lVar44);
          pppppuVar29 = pppppuStack_3a8;
          pppppuVar34 = pppppuStack_3a0;
          pppppuVar47 = pppppuStack_3b8;
          pppppuVar36 = pppppuStack_3b0;
        }
        if (cStack_260 == '\x01') {
          func_0x0a2b98e0(&ppppuStack_288,&pppppuStack_3b8);
          pppppuVar28 = pppppuStack_3b8;
          pppppuVar11 = pppppuStack_3a8;
        }
        else {
          pppppuStack_3b8 = (undefined8 *****)0x0;
          pppppuStack_3b0 = (undefined8 *****)0x0;
          if (pppppuVar34 != (undefined8 *****)0x0) {
            pppppuVar28 = (undefined8 *****)pppppuVar29[1];
            if (((ulong)pppppuVar36 & (ulong)((long)pppppuVar36 + -1)) == 0) {
              pppppuVar28 = (undefined8 *****)((ulong)pppppuVar28 & (ulong)((long)pppppuVar36 + -1))
              ;
            }
            else if (pppppuVar36 <= pppppuVar28) {
              if (((ulong)pppppuVar28 | (ulong)pppppuVar36) >> 0x20 == 0) {
                pppppuVar28 = (undefined8 *****)
                              (((ulong)pppppuVar28 & 0xffffffff) % ((ulong)pppppuVar36 & 0xffffffff)
                              );
              }
              else {
                pppppuVar28 = (undefined8 *****)((ulong)pppppuVar28 % (ulong)pppppuVar36);
              }
            }
            pppppuVar47[(long)pppppuVar28] = &pppppuStack_278;
            pppppuStack_3a8 = (undefined8 *****)0x0;
            pppppuStack_3a0 = (undefined8 *****)0x0;
          }
          cStack_260 = '\x01';
          pppppuVar28 = pppppuStack_3b8;
          pppppuVar11 = pppppuStack_3a8;
          ppppuStack_288 = pppppuVar47;
          pppppuStack_280 = pppppuVar36;
          pppppuStack_278 = pppppuVar29;
          pppppuStack_270 = pppppuVar34;
          uStack_268 = pppppuStack_398._0_4_;
        }
        while (pppppuVar11 != (undefined8 *****)0x0) {
          pppppuVar29 = (undefined8 *****)*pppppuVar11;
          pppppuStack_3b8 = pppppuVar28;
          if (((ulong)pppppuVar11[2] & 1) != 0) {
            func_0x0412a280(pppppuVar11[4],(ulong)pppppuVar11[2] & 0xfffffffffffffffe);
          }
          func_0x0412a280(pppppuVar11,0x28);
          pppppuVar28 = pppppuStack_3b8;
          pppppuVar11 = pppppuVar29;
        }
        pppppuStack_3b8 = (undefined8 *****)0x0;
        if (pppppuVar28 != (undefined8 *****)0x0) {
          func_0x0412a280(pppppuVar28,(long)pppppuStack_3b0 << 3);
        }
      }
      pppppuVar29 = pppppuStack_258;
      if (*(char *)(pfVar26 + 0x2e) == '\x01') {
        if ((cStack_240 == '\x01') && (pppppuStack_258 != (undefined8 *****)0x0)) {
          cStack_240 = 1;
          pppppuVar34 = pppppuStack_250;
          while (pppppuVar29 != pppppuVar34) {
            pppppuVar34 = pppppuVar34 + -8;
            func_0x0a2b9a10(pppppuVar34);
          }
          pppppuStack_250 = pppppuVar29;
          func_0x0412a280(pppppuStack_258,(long)pppppuStack_248 - (long)pppppuStack_258);
        }
        pppppuStack_258 = (undefined8 *****)0x0;
        pppppuStack_250 = (undefined8 *****)0x0;
        pppppuStack_248 = (undefined8 *****)0x0;
        cStack_240 = '\x01';
        uVar32 = *(ulong *)(pfVar26 + 0x2a);
        if (uVar32 != 0) {
          if (0x3ffffffffffffff < uVar32) {
LAB_0a2fbbc6:
            uVar41 = func_0x0a2b9aa0();
            func_0x048fb670(&fStack_150);
            if ((bStack_328 & 1) != 0) {
              func_0x0412a280(uStack_318,
                              CONCAT44(uStack_324,
                                       CONCAT22(uStack_326,CONCAT11(uStack_327,bStack_328))) &
                              0xfffffffffffffffe);
            }
            if ((code *)CONCAT44(uStack_174,uStack_178) != (code *)0x0) {
              (*(code *)CONCAT44(uStack_174,uStack_178))(apppppppuStack_190);
            }
            uVar41 = func_0x0eee2d70(uVar41);
            func_0x04882e20(uVar41);
            pcVar8 = (code *)swi(3);
            plVar42 = (long *)(*pcVar8)();
            return plVar42;
          }
          pppppuVar29 = (undefined8 *****)
                        (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar32 * 0x40);
          if (pppppuVar29 == (undefined8 *****)0x0) {
            func_0x0eec74c0(uVar32 * 0x40,0);
          }
          pppppuStack_248 = pppppuVar29 + uVar32 * 8;
          pppppuStack_250 = pppppuVar29;
        }
        pppppuStack_258 = pppppuStack_250;
        for (puVar38 = *(undefined8 **)(pfVar26 + 0x28); puVar38 != (undefined8 *)0x0;
            puVar38 = (undefined8 *)*puVar38) {
          lVar44 = puVar38[5];
          lVar39 = puVar38[6];
          pppppuStack_378 = (undefined8 *****)0x0;
          pppppuStack_370 = (undefined8 *****)0x0;
          ppppuStack_388 = (undefined8 ****)0x0;
          _auStack_380 = (undefined8 ****)0x0;
          uVar32 = (ulong)uStack_368 >> 0x20;
          uStack_368 = CONCAT44((int)uVar32,0x3f800000);
          pppppuVar29 = pppppuStack_250;
          for (; pppppuStack_250 = pppppuVar29, lVar44 != lVar39; lVar44 = lVar44 + 0x18) {
            func_0x0a2b90c0(&ppppuStack_388,lVar44,lVar44);
            pppppuVar29 = pppppuStack_250;
          }
          puVar2 = puVar38 + 2;
          if (pppppuVar29 < pppppuStack_248) {
            if ((*puVar2 & 1) == 0) {
              pppppuVar29[2] = (undefined8 ****)puVar38[4];
              ppppuVar27 = (undefined8 ****)puVar38[3];
              *pppppuVar29 = (undefined8 ****)*puVar2;
              pppppuVar29[1] = ppppuVar27;
            }
            else {
              func_0x0412e5e0(pppppuVar29,puVar38[4],puVar38[3]);
            }
            ppppuVar35 = _auStack_380;
            ppppuVar27 = ppppuStack_388;
            ppppuStack_388 = (undefined8 ****)0x0;
            pppppuVar29[3] = ppppuVar27;
            pppppuVar29[4] = _auStack_380;
            _auStack_380 = (undefined8 ****)0x0;
            pppppuVar29[5] = pppppuStack_378;
            pppppuVar29[6] = pppppuStack_370;
            *(undefined4 *)(pppppuVar29 + 7) = (undefined4)uStack_368;
            if (pppppuStack_370 != (undefined8 *****)0x0) {
              ppppuVar30 = pppppuStack_378[1];
              if (((ulong)ppppuVar35 & (long)ppppuVar35 - 1U) == 0) {
                ppppuVar30 = (undefined8 ****)((ulong)ppppuVar30 & (long)ppppuVar35 - 1U);
              }
              else if (ppppuVar35 <= ppppuVar30) {
                if (((ulong)ppppuVar30 | (ulong)ppppuVar35) >> 0x20 == 0) {
                  ppppuVar30 = (undefined8 ****)
                               (((ulong)ppppuVar30 & 0xffffffff) % ((ulong)ppppuVar35 & 0xffffffff))
                  ;
                }
                else {
                  ppppuVar30 = (undefined8 ****)((ulong)ppppuVar30 % (ulong)ppppuVar35);
                }
              }
              ppppuVar27[(long)ppppuVar30] = pppppuVar29 + 5;
              pppppuStack_378 = (undefined8 *****)0x0;
              pppppuStack_370 = (undefined8 *****)0x0;
            }
            pppppuStack_250 = pppppuVar29 + 8;
            ppppuVar35 = ppppuStack_388;
            pppppuVar47 = pppppuStack_378;
            pppppuVar28 = pppppuStack_258;
          }
          else {
            lVar44 = (long)pppppuVar29 - (long)pppppuStack_258;
            uVar32 = (lVar44 >> 6) + 1;
            if (0x3ffffffffffffff < uVar32) goto LAB_0a2fbbb7;
            uVar50 = (long)pppppuStack_248 - (long)pppppuStack_258 >> 5;
            if (uVar50 <= uVar32) {
              uVar50 = uVar32;
            }
            if (0x7fffffffffffffbf < (ulong)((long)pppppuStack_248 - (long)pppppuStack_258)) {
              uVar50 = 0x3ffffffffffffff;
            }
            pppppuStack_398 = &pppppuStack_258;
            if (uVar50 == 0) {
              pppppuVar29 = (undefined8 *****)0x0;
            }
            else {
              if (0x3ffffffffffffff < uVar50) goto LAB_0a2fbbbc;
              pppppuVar29 = (undefined8 *****)
                            (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar50 << 6);
              if (pppppuVar29 == (undefined8 *****)0x0) {
                func_0x0eec74c0(uVar50 << 6,0);
                pppppuVar29 = (undefined8 *****)0x0;
              }
            }
            pppppuVar34 = (undefined8 *****)((long)pppppuVar29 + lVar44);
            pppppuStack_3a0 = pppppuVar29 + uVar50 * 8;
            pppppuStack_3b8 = pppppuVar29;
            pppppuStack_3b0 = pppppuVar34;
            pppppuStack_3a8 = pppppuVar34;
            if ((*puVar2 & 1) == 0) {
              pppppuVar34[2] = (undefined8 ****)puVar38[4];
              ppppuVar27 = (undefined8 ****)puVar38[3];
              *pppppuVar34 = (undefined8 ****)*puVar2;
              pppppuVar34[1] = ppppuVar27;
            }
            else {
              func_0x0412e5e0(pppppuVar34,puVar38[4],puVar38[3]);
            }
            pppppuVar47 = pppppuStack_250;
            ppppuVar35 = _auStack_380;
            ppppuVar27 = ppppuStack_388;
            pppppuVar29 = pppppuStack_3a8;
            ppppuStack_388 = (undefined8 ****)0x0;
            pppppuVar34[3] = ppppuVar27;
            pppppuVar34[4] = _auStack_380;
            _auStack_380 = (undefined8 ****)0x0;
            pppppuVar34[5] = pppppuStack_378;
            pppppuVar34[6] = pppppuStack_370;
            *(undefined4 *)(pppppuVar34 + 7) = (undefined4)uStack_368;
            if (pppppuStack_370 != (undefined8 *****)0x0) {
              ppppuVar30 = pppppuStack_378[1];
              if (((ulong)ppppuVar35 & (long)ppppuVar35 - 1U) == 0) {
                ppppuVar30 = (undefined8 ****)((ulong)ppppuVar30 & (long)ppppuVar35 - 1U);
              }
              else if (ppppuVar35 <= ppppuVar30) {
                if (((ulong)ppppuVar30 | (ulong)ppppuVar35) >> 0x20 == 0) {
                  ppppuVar30 = (undefined8 ****)
                               (((ulong)ppppuVar30 & 0xffffffff) % ((ulong)ppppuVar35 & 0xffffffff))
                  ;
                }
                else {
                  ppppuVar30 = (undefined8 ****)((ulong)ppppuVar30 % (ulong)ppppuVar35);
                }
              }
              ppppuVar27[(long)ppppuVar30] = pppppuVar34 + 5;
              pppppuStack_378 = (undefined8 *****)0x0;
              pppppuStack_370 = (undefined8 *****)0x0;
            }
            ppppuVar27 = (undefined8 ****)((long)pppppuStack_250 - (long)pppppuStack_258);
            pppppuVar34 = pppppuStack_3b0;
            if (ppppuVar27 != (undefined8 ****)0x0) {
              pppppuStack_200 = pppppuStack_3b0;
              pppppuVar36 = pppppuStack_3b0 + ((long)ppppuVar27 >> 6) * -8 + 5;
              pppppuVar34 = pppppuStack_258;
              do {
                pppppuVar36[-3] = pppppuVar34[2];
                ppppuVar35 = pppppuVar34[1];
                pppppuVar36[-5] = *pppppuVar34;
                pppppuVar36[-4] = ppppuVar35;
                *pppppuVar34 = (undefined8 ****)0x0;
                pppppuVar34[1] = (undefined8 ****)0x0;
                pppppuVar34[2] = (undefined8 ****)0x0;
                ppppuVar35 = pppppuVar34[3];
                pppppuVar34[3] = (undefined8 ****)0x0;
                pppppuVar36[-2] = ppppuVar35;
                ppppuVar30 = pppppuVar34[5];
                ppppuVar46 = pppppuVar34[5];
                pppppuVar36[-1] = pppppuVar34[4];
                *pppppuVar36 = ppppuVar46;
                pppppuVar34[4] = (undefined8 ****)0x0;
                ppppuVar46 = pppppuVar34[6];
                pppppuVar36[1] = ppppuVar46;
                *(undefined4 *)(pppppuVar36 + 2) = *(undefined4 *)(pppppuVar34 + 7);
                if (ppppuVar46 != (undefined8 ****)0x0) {
                  ppppuVar30 = (undefined8 ****)ppppuVar30[1];
                  ppppuVar46 = pppppuVar36[-1];
                  if (((ulong)ppppuVar46 & (long)ppppuVar46 - 1U) == 0) {
                    ppppuVar30 = (undefined8 ****)((ulong)ppppuVar30 & (long)ppppuVar46 - 1U);
                  }
                  else if (ppppuVar46 <= ppppuVar30) {
                    if (((ulong)ppppuVar30 | (ulong)ppppuVar46) >> 0x20 == 0) {
                      ppppuVar30 = (undefined8 ****)
                                   (((ulong)ppppuVar30 & 0xffffffff) %
                                   ((ulong)ppppuVar46 & 0xffffffff));
                    }
                    else {
                      ppppuVar30 = (undefined8 ****)((ulong)ppppuVar30 % (ulong)ppppuVar46);
                    }
                  }
                  ppppuVar35[(long)ppppuVar30] = pppppuVar36;
                  pppppuVar34[5] = (undefined8 ****)0x0;
                  pppppuVar34[6] = (undefined8 ****)0x0;
                }
                pppppuVar34 = pppppuVar34 + 8;
                pppppuVar36 = pppppuVar36 + 8;
                pppppuVar28 = pppppuStack_258;
                ppppuStack_330 = ppppuVar27;
              } while (pppppuVar34 != pppppuStack_250);
              do {
                ppppuVar27 = pppppuVar28[5];
                while (ppppuVar27 != (undefined8 ****)0x0) {
                  ppppuVar35 = (undefined8 ****)*ppppuVar27;
                  if (((ulong)ppppuVar27[2] & 1) != 0) {
                    func_0x0412a280(ppppuVar27[4],(ulong)ppppuVar27[2] & 0xfffffffffffffffe);
                  }
                  func_0x0412a280(ppppuVar27,0x28);
                  ppppuVar27 = ppppuVar35;
                }
                ppppuVar27 = pppppuVar28[3];
                pppppuVar28[3] = (undefined8 ****)0x0;
                if (ppppuVar27 != (undefined8 ****)0x0) {
                  func_0x0412a280(ppppuVar27,(long)pppppuVar28[4] << 3);
                }
                if (((ulong)*pppppuVar28 & 1) != 0) {
                  func_0x0412a280(pppppuVar28[2],(ulong)*pppppuVar28 & 0xfffffffffffffffe);
                }
                pppppuVar28 = pppppuVar28 + 8;
                ppppuVar27 = ppppuStack_330;
                pppppuVar34 = pppppuStack_200;
              } while (pppppuVar28 != pppppuVar47);
            }
            pppppuVar36 = pppppuStack_248;
            pppppuVar29 = pppppuVar29 + 8;
            pppppuStack_248 = pppppuStack_3a0;
            pppppuStack_250 = pppppuVar29;
            ppppuVar35 = ppppuStack_388;
            pppppuVar47 = pppppuStack_378;
            pppppuVar28 = (undefined8 *****)((long)pppppuVar34 - (long)ppppuVar27);
            if (pppppuStack_258 != (undefined8 *****)0x0) {
              lVar44 = (long)pppppuVar36 - (long)pppppuStack_258;
              pppppuVar47 = pppppuStack_258;
              pppppuStack_258 = (undefined8 *****)((long)pppppuVar34 - (long)ppppuVar27);
              func_0x0412a280(pppppuVar47,lVar44);
              pppppuStack_250 = pppppuVar29;
              ppppuVar35 = ppppuStack_388;
              pppppuVar47 = pppppuStack_378;
              pppppuVar28 = pppppuStack_258;
            }
          }
          while (pppppuStack_258 = pppppuVar28, pppppuVar47 != (undefined8 *****)0x0) {
            pppppuVar29 = (undefined8 *****)*pppppuVar47;
            ppppuStack_388 = ppppuVar35;
            if (((ulong)pppppuVar47[2] & 1) != 0) {
              func_0x0412a280(pppppuVar47[4],(ulong)pppppuVar47[2] & 0xfffffffffffffffe);
            }
            func_0x0412a280(pppppuVar47,0x28);
            ppppuVar35 = ppppuStack_388;
            pppppuVar47 = pppppuVar29;
            pppppuVar28 = pppppuStack_258;
          }
          ppppuStack_388 = (undefined8 ****)0x0;
          if (ppppuVar35 != (undefined8 ****)0x0) {
            func_0x0412a280(ppppuVar35,(long)_auStack_380 << 3);
          }
        }
      }
      pppppuVar21 = pppppuStack_270;
      pppppuVar20 = pppppuStack_278;
      pppppuVar11 = pppppuStack_280;
      ppppuVar35 = ppppuStack_288;
      pppppuVar28 = pppppuStack_2b0;
      ppppuVar27 = ppppuStack_2b8;
      pppppuVar36 = pppppuStack_2e0;
      pppppuVar47 = pppppuStack_2e8;
      pppppuVar34 = uStack_310;
      pppppuVar29 = uStack_318;
      fStack_150 = (float)CONCAT22(uStack_326,CONCAT11(uStack_327,bStack_328));
      fStack_148 = (float)CONCAT22(uStack_31e,CONCAT11(uStack_31f,uStack_320));
      bStack_144 = (byte)uStack_31c;
      uStack_14c = uStack_324;
      pppppuStack_140 = (undefined8 *****)((ulong)pppppuStack_140 & 0xffffffffffffff00);
      cStack_118 = '\0';
      if ((char)uStack_2f0 == '\x01') {
        uStack_318 = (undefined8 *****)0x0;
        uStack_310 = (undefined8 *****)0x0;
        pppppuStack_140 = pppppuVar29;
        pppppuStack_138 = pppppuVar34;
        uStack_130 = pppppuStack_308;
        pppppuStack_128 = pppppuStack_300;
        uStack_120 = (undefined4)uStack_2f8;
        if (pppppuStack_300 != (undefined8 *****)0x0) {
          pppppuVar31 = (undefined8 *****)pppppuStack_308[1];
          if (((ulong)pppppuVar34 & (ulong)((long)pppppuVar34 + -1)) == 0) {
            pppppuVar31 = (undefined8 *****)((ulong)pppppuVar31 & (ulong)((long)pppppuVar34 + -1));
          }
          else if (pppppuVar34 <= pppppuVar31) {
            if (((ulong)pppppuVar31 | (ulong)pppppuVar34) >> 0x20 == 0) {
              pppppuVar31 = (undefined8 *****)
                            (((ulong)pppppuVar31 & 0xffffffff) % ((ulong)pppppuVar34 & 0xffffffff));
            }
            else {
              pppppuVar31 = (undefined8 *****)((ulong)pppppuVar31 % (ulong)pppppuVar34);
            }
          }
          pppppuVar29[(long)pppppuVar31] = (undefined8 ****)&uStack_130;
          pppppuStack_308 = (undefined8 *****)0x0;
          pppppuStack_300 = (undefined8 *****)0x0;
        }
        cStack_118 = '\x01';
        if ((char)uStack_2c0 != '\x01') goto LAB_0a2fa17f;
LAB_0a2fa07c:
        pppppuStack_2e8 = (undefined8 *****)0x0;
        pppppuStack_2e0 = (undefined8 *****)0x0;
        pppppuStack_110 = pppppuVar47;
        pppppuStack_108 = pppppuVar36;
        pppppuStack_100 = pppppuStack_2d8;
        pppppuStack_f8 = pppppuStack_2d0;
        uStack_f0 = (undefined4)uStack_2c8;
        if (pppppuStack_2d0 != (undefined8 *****)0x0) {
          pppppuVar29 = (undefined8 *****)pppppuStack_2d8[1];
          if (((ulong)pppppuVar36 & (ulong)((long)pppppuVar36 + -1)) == 0) {
            pppppuVar29 = (undefined8 *****)((ulong)pppppuVar29 & (ulong)((long)pppppuVar36 + -1));
          }
          else if (pppppuVar36 <= pppppuVar29) {
            if (((ulong)pppppuVar29 | (ulong)pppppuVar36) >> 0x20 == 0) {
              pppppuVar29 = (undefined8 *****)
                            (((ulong)pppppuVar29 & 0xffffffff) % ((ulong)pppppuVar36 & 0xffffffff));
            }
            else {
              pppppuVar29 = (undefined8 *****)((ulong)pppppuVar29 % (ulong)pppppuVar36);
            }
          }
          pppppuVar47[(long)pppppuVar29] = &pppppuStack_100;
          pppppuStack_2d8 = (undefined8 *****)0x0;
          pppppuStack_2d0 = (undefined8 *****)0x0;
        }
        cStack_e8 = '\x01';
        if (cStack_290 != '\x01') goto LAB_0a2fa285;
LAB_0a2fa19d:
        ppppuStack_2b8 = (undefined8 ****)0x0;
        pppppuStack_2b0 = (undefined8 *****)0x0;
        ppppuStack_e0 = ppppuVar27;
        pppppuStack_d8 = pppppuVar28;
        pppppuStack_d0 = pppppuStack_2a8;
        pppppuStack_c8 = pppppuStack_2a0;
        uStack_c0 = uStack_298;
        if (pppppuStack_2a0 != (undefined8 *****)0x0) {
          pppppuVar29 = (undefined8 *****)pppppuStack_2a8[1];
          if (((ulong)pppppuVar28 & (ulong)((long)pppppuVar28 + -1)) == 0) {
            pppppuVar29 = (undefined8 *****)((ulong)pppppuVar29 & (ulong)((long)pppppuVar28 + -1));
          }
          else if (pppppuVar28 <= pppppuVar29) {
            if (((ulong)pppppuVar29 | (ulong)pppppuVar28) >> 0x20 == 0) {
              pppppuVar29 = (undefined8 *****)
                            (((ulong)pppppuVar29 & 0xffffffff) % ((ulong)pppppuVar28 & 0xffffffff));
            }
            else {
              pppppuVar29 = (undefined8 *****)((ulong)pppppuVar29 % (ulong)pppppuVar28);
            }
          }
          ppppuVar27[(long)pppppuVar29] = &pppppuStack_d0;
          pppppuStack_2a8 = (undefined8 *****)0x0;
          pppppuStack_2a0 = (undefined8 *****)0x0;
        }
        cStack_b8 = '\x01';
        if (cStack_260 != '\x01') goto LAB_0a2fa38b;
LAB_0a2fa2a3:
        ppppuStack_288 = (undefined8 ****)0x0;
        pppppuStack_280 = (undefined8 *****)0x0;
        if (pppppuStack_270 != (undefined8 *****)0x0) {
          pppppuVar29 = (undefined8 *****)pppppuStack_278[1];
          if (((ulong)pppppuVar11 & (ulong)((long)pppppuVar11 + -1)) == 0) {
            pppppuVar29 = (undefined8 *****)((ulong)pppppuVar29 & (ulong)((long)pppppuVar11 + -1));
          }
          else if (pppppuVar11 <= pppppuVar29) {
            if (((ulong)pppppuVar29 | (ulong)pppppuVar11) >> 0x20 == 0) {
              pppppuVar29 = (undefined8 *****)
                            (((ulong)pppppuVar29 & 0xffffffff) % ((ulong)pppppuVar11 & 0xffffffff));
            }
            else {
              pppppuVar29 = (undefined8 *****)((ulong)pppppuVar29 % (ulong)pppppuVar11);
            }
          }
          ppppuVar35[(long)pppppuVar29] = &pppppuStack_a0;
          pppppuStack_278 = (undefined8 *****)0x0;
          pppppuStack_270 = (undefined8 *****)0x0;
        }
        cStack_88 = '\x01';
        ppppuStack_b0 = ppppuVar35;
        pppppuStack_a8 = pppppuVar11;
        pppppuStack_a0 = pppppuVar20;
        pppppuStack_98 = pppppuVar21;
        uStack_90 = uStack_268;
      }
      else {
        if ((char)uStack_2c0 == '\x01') goto LAB_0a2fa07c;
LAB_0a2fa17f:
        cStack_e8 = '\0';
        pppppuStack_110 = (undefined8 *****)((ulong)pppppuStack_110 & 0xffffffffffffff00);
        if (cStack_290 == '\x01') goto LAB_0a2fa19d;
LAB_0a2fa285:
        cStack_b8 = '\0';
        ppppuStack_e0 = (undefined8 ****)((ulong)ppppuStack_e0 & 0xffffffffffffff00);
        if (cStack_260 == '\x01') goto LAB_0a2fa2a3;
LAB_0a2fa38b:
        cStack_88 = '\0';
        ppppuStack_b0 = (undefined8 ****)((ulong)ppppuStack_b0 & 0xffffffffffffff00);
      }
      pppppuStack_80 = (undefined8 *****)((ulong)pppppuStack_80 & 0xffffffffffffff00);
      cStack_68 = cStack_240 == '\x01';
      if ((bool)cStack_68) {
        pppppuStack_80 = pppppuStack_258;
        pppppuStack_78 = pppppuStack_250;
        pppppuStack_70 = pppppuStack_248;
        pppppuStack_258 = (undefined8 *****)0x0;
        pppppuStack_250 = (undefined8 *****)0x0;
        pppppuStack_248 = (undefined8 *****)0x0;
      }
      bStack_60 = 1;
      func_0x0a291a30(&bStack_328);
      ppppuVar27 = ppppuStack_358;
    }
    else {
      fStack_150 = (float)((uint)fStack_150 & 0xffffff00);
      bStack_60 = 0;
    }
    ppppuStack_228 = (undefined8 ****)0x0;
    ppppuStack_220 = (undefined8 ****)0x0;
    ppppuStack_218 = (undefined8 ****)0x0;
    pppppuVar29 = (undefined8 *****)ppppuVar27[5];
    if (pppppuVar29 != (undefined8 *****)0x0) {
      uStack_38 = 0x7fffffffffffffe0;
      do {
        bVar5 = bStack_144;
        pppppuStack_200 = pppppuVar29;
        ppppuVar27 = pppppuVar29[6];
        if (bStack_60 == 1) {
          bVar48 = (byte)uStack_14c;
          if (((byte)uStack_14c | bStack_144) == 1) {
            if (*(byte *)(ppppuVar27 + 5) == 1) {
              if ((ulong)*(uint *)(ppppuVar27 + 4) != 0xffffffff) {
                bStack_328 = (byte)&pppppuStack_3b8;
                uStack_327 = (undefined1)((ulong)&pppppuStack_3b8 >> 8);
                uStack_326 = (undefined2)((ulong)&pppppuStack_3b8 >> 0x10);
                uStack_324 = (undefined4)((ulong)&pppppuStack_3b8 >> 0x20);
                fVar52 = (float)(**(code **)(&UNK_0f3e3f70 + (ulong)*(uint *)(ppppuVar27 + 4) * 8))
                                          (&bStack_328,ppppuVar27 + 3);
                if (((bVar48 == 0) || (fStack_150 <= fVar52)) &&
                   ((bVar5 == 0 || (fVar52 <= fStack_148)))) goto LAB_0a2fa520;
                goto LAB_0a2fa468;
              }
              goto LAB_0a2fbbb2;
            }
          }
          else {
LAB_0a2fa520:
            if ((cStack_118 == '\x01') && (pppppuStack_128 != (undefined8 *****)0x0)) {
              if ((*(byte *)(ppppuVar27 + 0x16) == 1) && (*(byte *)(ppppuVar27 + 9) == 1)) {
                pppuVar6 = ppppuVar27[7];
                for (pppuVar43 = ppppuVar27[6]; pppuVar43 != pppuVar6; pppuVar43 = pppuVar43 + 3) {
                  lVar44 = func_0x0a2f7f80(&pppppuStack_140,pppuVar43);
                  if (lVar44 != 0) goto LAB_0a2fa583;
                }
              }
            }
            else {
LAB_0a2fa583:
              if ((cStack_e8 == '\x01') && (pppppuStack_f8 != (undefined8 *****)0x0)) {
                if ((*(byte *)(ppppuVar27 + 0x16) == 1) && (*(byte *)(ppppuVar27 + 0xd) == 1)) {
                  pppuVar6 = ppppuVar27[0xb];
                  for (pppuVar43 = ppppuVar27[10]; pppuVar43 != pppuVar6; pppuVar43 = pppuVar43 + 3)
                  {
                    lVar44 = func_0x0a2f7f80(&pppppuStack_110,pppuVar43);
                    if (lVar44 != 0) goto LAB_0a2fa5e3;
                  }
                }
              }
              else {
LAB_0a2fa5e3:
                if ((((cStack_b8 != '\x01') || (pppppuStack_c8 == (undefined8 *****)0x0)) ||
                    ((*(byte *)(ppppuVar27 + 0x16) == 1 &&
                     ((*(byte *)(ppppuVar27 + 0x11) == 1 &&
                      (lVar44 = func_0x0a2f7f80(&ppppuStack_e0,ppppuVar27 + 0xe), lVar44 != 0))))))
                   && ((cStack_88 != '\x01' ||
                       ((pppppuStack_98 == (undefined8 *****)0x0 ||
                        (((*(byte *)(ppppuVar27 + 0x16) == 1 && (*(byte *)(ppppuVar27 + 0x15) == 1))
                         && (lVar44 = func_0x0a2f7f80(&ppppuStack_b0,ppppuVar27 + 0x12), lVar44 != 0
                            )))))))) {
                  pppppuVar29 = pppppuStack_78;
                  pppppuVar34 = pppppuStack_80;
                  if (cStack_68 == '\x01') {
                    for (; pppppuVar34 != pppppuVar29; pppppuVar34 = pppppuVar34 + 8) {
                      if (pppppuVar34[6] != (undefined8 ****)0x0) {
                        if (*(byte *)(ppppuVar27 + 0x1c) == 1) {
                          bVar51 = (*(byte *)pppppuVar34 & 1) != 0;
                          ppppuVar35 = (undefined8 ****)((long)pppppuVar34 + 1);
                          if (bVar51) {
                            ppppuVar35 = pppppuVar34[2];
                          }
                          ppppuVar30 = (undefined8 ****)(ulong)(*(byte *)pppppuVar34 >> 1);
                          if (bVar51) {
                            ppppuVar30 = pppppuVar34[1];
                          }
                          pppuVar43 = ppppuVar27[0x19];
                          if (pppuVar43 != (undefined8 ***)0x0) {
                            do {
                              bVar5 = *(byte *)(pppuVar43 + 2);
                              if ((bVar5 & 1) == 0) {
                                ppppuVar46 = (undefined8 ****)(ulong)(bVar5 >> 1);
                              }
                              else {
                                ppppuVar46 = (undefined8 ****)pppuVar43[3];
                              }
                              if (ppppuVar46 == ppppuVar30) {
                                if ((bVar5 & 1) == 0) {
                                  ppuVar45 = (undefined8 **)((long)pppuVar43 + 0x11);
                                }
                                else {
                                  ppuVar45 = pppuVar43[4];
                                }
                                ppppuVar46 = (undefined8 ****)0x0;
                                do {
                                  if (ppppuVar30 == ppppuVar46) {
                                    ppuVar45 = pppuVar43[5];
                                    ppuVar7 = pppuVar43[6];
                                    goto joined_r0x0a2fa77f;
                                  }
                                  bVar5 = *(byte *)((long)ppppuVar46 + (long)ppuVar45);
                                  bVar48 = bVar5 + 0x20;
                                  if (0x19 < (byte)(bVar5 + 0xbf)) {
                                    bVar48 = bVar5;
                                  }
                                  bVar5 = *(byte *)((long)ppppuVar35 + (long)ppppuVar46);
                                  bVar49 = bVar5 + 0x20;
                                  if (0x19 < (byte)(bVar5 + 0xbf)) {
                                    bVar49 = bVar5;
                                  }
                                  ppppuVar46 = (undefined8 ****)((long)ppppuVar46 + 1);
                                } while (bVar48 == bVar49);
                              }
                              pppuVar43 = (undefined8 ***)*pppuVar43;
                            } while (pppuVar43 != (undefined8 ***)0x0);
                          }
                        }
                        goto LAB_0a2fa468;
                      }
LAB_0a2fa698:
                    }
                  }
                  goto LAB_0a2fa7c0;
                }
              }
            }
          }
        }
        else {
LAB_0a2fa7c0:
          ppppuStack_388 = (undefined8 ****)0x0;
          if (((ulong)*ppppuVar27 & 1) == 0) {
            pppppuStack_370 = (undefined8 *****)ppppuVar27[2];
            _auStack_380 = (undefined8 ****)*ppppuVar27;
            pppppuStack_378 = (undefined8 *****)ppppuVar27[1];
          }
          else {
            func_0x0412e5e0(auStack_380,ppppuVar27[2],ppppuVar27[1]);
          }
          uStack_368 = 0;
          if (((ulong)_auStack_380 & 1) == 0) {
            if (auStack_380[0] >> 1 != 0) goto LAB_0a2fa829;
LAB_0a2fa880:
            ppppuStack_388 = (undefined8 ****)0x0;
          }
          else {
            if (pppppuStack_378 == (undefined8 *****)0x0) goto LAB_0a2fa880;
LAB_0a2fa829:
            pppppuVar29 = (undefined8 *****)(auStack_380 + 1);
            if (((ulong)_auStack_380 & 1) != 0) {
              pppppuVar29 = pppppuStack_370;
            }
            if ((pppppuVar29 == (undefined8 *****)0x0) || (*(byte *)pppppuVar29 == 0))
            goto LAB_0a2fa880;
            uVar32 = func_0x0eee2e90(pppppuVar29);
            ppppuStack_388 = (undefined8 ****)0xcbf29ce484222325;
            if (uVar32 != 0) {
              if (7 < uVar32) {
                uVar50 = uVar32 & 0xfffffffffffffff8;
                do {
                  ppppuStack_388 =
                       (undefined8 ****)
                       (((((((((long)ppppuStack_388 * 0x100000001b3 ^ (ulong)*(byte *)pppppuVar29) *
                              0x100000001b3 ^ (ulong)*(byte *)((long)pppppuVar29 + 1)) *
                             0x100000001b3 ^ (ulong)*(byte *)((long)pppppuVar29 + 2)) *
                            0x100000001b3 ^ (ulong)*(byte *)((long)pppppuVar29 + 3)) * 0x100000001b3
                          ^ (ulong)*(byte *)((long)pppppuVar29 + 4)) * 0x100000001b3 ^
                         (ulong)*(byte *)((long)pppppuVar29 + 5)) * 0x100000001b3 ^
                        (ulong)*(byte *)((long)pppppuVar29 + 6)) * 0x100000001b3 ^
                       (ulong)*(byte *)((long)pppppuVar29 + 7));
                  pppppuVar29 = pppppuVar29 + 1;
                  uVar50 = uVar50 - 8;
                } while (uVar50 != 0);
              }
              if ((uVar32 & 7) != 0) {
                uVar50 = 0;
                do {
                  ppppuStack_388 =
                       (undefined8 ****)
                       ((long)ppppuStack_388 * 0x100000001b3 ^
                       (ulong)*(byte *)((long)pppppuVar29 + uVar50));
                  uVar50 = uVar50 + 1;
                } while (((uint)uVar32 & 7) != uVar50);
              }
            }
          }
          ppppppuVar33 = pppppppuStack_230[4];
          if (ppppppuVar33 == (undefined8 ******)0x0) {
LAB_0a2faaa0:
            ppppppuStack_350 = _DAT_0f65b718;
            iStack_348 = _DAT_0f65b720;
            uStack_340 = (undefined8 *****)CONCAT44(uRam000000000f65b72c,_DAT_0f65b728);
            uStack_338 = uRam000000000f65b730;
            uStack_334 = uRam000000000f65b734;
            if ((_DAT_0f65b718 != (undefined8 ******)0x0) &&
               (*_DAT_0f65b718 != (undefined8 *****)0x0 &&
                *(int *)(_DAT_0f65b718 + 1) == _DAT_0f65b720)) {
              func_0x0d8568b0(*_DAT_0f65b718,uStack_340);
            }
            ppppppuVar33 = pppppppuStack_230[4];
            if (ppppppuVar33 == (undefined8 ******)0x0) {
LAB_0a2fb230:
              pppppuVar29 = (undefined8 *****)0x0;
            }
            else {
LAB_0a2faafc:
              if (*(int *)(ppppppuVar33 + 1) != *(int *)(pppppppuStack_230 + 5)) goto LAB_0a2fb230;
              pppppuVar29 = *ppppppuVar33;
            }
            pppppuVar47 = uStack_340;
            pppppuStack_1f0 = uStack_340;
            uStack_1e8 = CONCAT31(uStack_1e8._1_3_,(undefined1)uStack_338);
            pppppuVar34 = pppppuVar29 + 7;
            uStack_1f4 = 0xef9b5b43;
            ppppuVar27 = pppppuVar29[0xe] +
                         ((int)((ulong)((long)pppppuVar29[0xf] - (long)pppppuVar29[0xe]) >> 3) - 1U
                         & 0xef9b5b43);
            do {
              pppuVar43 = *ppppuVar27;
              if (pppuVar43 == (undefined8 ***)0xffffffffffffffff) goto LAB_0a2fb2bf;
              ppppuVar27 = pppppuVar29[0x11] + (long)pppuVar43 * 4;
            } while (*(int *)(pppppuVar29[0x11] + (long)pppuVar43 * 4 + 1) != -0x1064a4bd);
            if (ppppuVar27 == pppppuVar29[0x12]) {
LAB_0a2fb2bf:
              pppppuVar36 = (undefined8 *****)
                            (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
              if (pppppuVar36 == (undefined8 *****)0x0) {
                func_0x0eec74c0(0x80,0);
              }
              pppppuVar36[1] = (undefined8 ****)0x0;
              pppppuVar36[2] = (undefined8 ****)0x0;
              *pppppuVar36 = (undefined8 ****)&UNK_0f212f90;
              if ((DAT_0f65cf30 == '\0') && (iVar24 = func_0x04108328(&DAT_0f65cf30), iVar24 != 0))
              {
                func_0x0a2edfa0();
                FUN_0410844d(&DAT_0f65cf30);
              }
              pppppuStack_3b8 = pppppuVar36 + 3;
              pppppuVar36[8] = (undefined8 ****)0x0;
              pppppuVar36[9] = (undefined8 ****)0x0;
              pppppuVar36[6] = (undefined8 ****)0x0;
              pppppuVar36[7] = (undefined8 ****)0x0;
              pppppuVar36[4] = (undefined8 ****)0x0;
              pppppuVar36[5] = (undefined8 ****)0x0;
              pppppuVar36[10] = (undefined8 ****)&DAT_0f65cf18;
              *(byte *)(pppppuVar36 + 0xb) = 1;
              pppppuVar36[0xc] = (undefined8 ****)0xffffffff;
              pppppuVar36[3] = (undefined8 ****)&UNK_0f212fe0;
              pppppuVar36[0xd] = (undefined8 ****)0x0;
              pppppuVar36[0xe] = (undefined8 ****)0x0;
              pppppuVar36[0xf] = (undefined8 ****)0x0;
              pppppuStack_3b0 = pppppuVar36;
              func_0x065bf170(pppppuVar29 + 0xe,&uStack_1f4,&pppppuStack_3b8);
              uStack_318 = (undefined8 *****)&UNK_065bf690;
              uStack_310 = (undefined8 *****)0x0;
              pppppuStack_308 = (undefined8 *****)CONCAT35(pppppuStack_308._5_3_,0x3145ad657);
              bStack_328 = (byte)pppppuVar34;
              uStack_327 = (undefined1)((ulong)pppppuVar34 >> 8);
              uStack_326 = (undefined2)((ulong)pppppuVar34 >> 0x10);
              uStack_324 = (undefined4)((ulong)pppppuVar34 >> 0x20);
              (*(code *)(*pppppuStack_3b8)[5])(pppppuStack_3b8,&bStack_328);
              if (uStack_310 != (undefined8 *****)0x0) {
                (*(code *)uStack_310)(&bStack_328);
              }
              pppppuVar36 = pppppuStack_3b0;
              pppppuVar34 = pppppuStack_3b8;
              if (pppppuStack_3b0 != (undefined8 *****)0x0) {
                LOCK();
                pppppuVar28 = pppppuStack_3b0 + 1;
                ppppuVar27 = *pppppuVar28;
                *pppppuVar28 = (undefined8 ****)((long)*pppppuVar28 - 1);
                UNLOCK();
                if (ppppuVar27 == (undefined8 ****)0x0) {
                  (*(code *)(*pppppuStack_3b0)[2])(pppppuStack_3b0);
                  func_0x0412c2d0(pppppuVar36);
                }
              }
            }
            else {
              pppppuVar34 = (undefined8 *****)ppppuVar27[2];
            }
            uStack_318 = (undefined8 *****)0x0;
            uStack_310 = (undefined8 *****)0x0;
            bStack_328 = 0;
            uStack_327 = 0;
            uStack_326 = 0;
            uStack_324 = 0;
            uStack_320 = 0;
            uStack_31f = 0;
            uStack_31e = 0;
            uStack_31c = 0;
            pppppuStack_308 = (undefined8 *****)0x0;
            if (((ulong)_auStack_380 & 1) == 0) {
              uStack_310 = pppppuStack_370;
              uStack_320 = SUB81(_auStack_380,0);
              uStack_31f = (undefined1)((ulong)_auStack_380 >> 8);
              uStack_31e = (undefined2)((ulong)_auStack_380 >> 0x10);
              uStack_31c = uStack_37c;
              uStack_318 = pppppuStack_378;
            }
            else {
              func_0x04885070(&uStack_320,pppppuStack_370,pppppuStack_378);
            }
            bStack_328 = (byte)ppppuStack_388;
            uStack_327 = (undefined1)((ulong)ppppuStack_388 >> 8);
            uStack_326 = (undefined2)((ulong)ppppuStack_388 >> 0x10);
            uStack_324 = (undefined4)((ulong)ppppuStack_388 >> 0x20);
            func_0x0d8547a0(pppppuVar34,pppppuVar47,0,0);
            puVar38 = (undefined8 *)func_0x0a2ee020(pppppuVar34,extraout_RDX + -1);
            puVar38[2] = 0;
            puVar38[3] = 0;
            *puVar38 = 0;
            puVar38[1] = 0;
            puVar38[4] = 0;
            puVar38[3] = uStack_310;
            *(uint *)(puVar38 + 1) = CONCAT22(uStack_31e,CONCAT11(uStack_31f,uStack_320));
            *(undefined4 *)((long)puVar38 + 0xc) = uStack_31c;
            *(undefined4 *)(puVar38 + 2) = (undefined4)uStack_318;
            *(undefined4 *)((long)puVar38 + 0x14) = uStack_318._4_4_;
            *puVar38 = CONCAT44(uStack_324,CONCAT22(uStack_326,CONCAT11(uStack_327,bStack_328)));
            uStack_31f = 0;
            uStack_320 = 0;
            func_0x0d8526e0(pppppuVar29 + 0x2e,&UNK_01a7edc9,ppppuStack_388,&pppppuStack_1f0);
            func_0x0d8568b0(pppppuVar29,pppppuStack_1f0,uStack_1e8);
          }
          else {
            iVar24 = *(int *)(pppppppuStack_230 + 5);
            iVar23 = *(int *)(ppppppuVar33 + 1);
            pppppuVar29 = *ppppppuVar33;
            if (pppppuVar29 == (undefined8 *****)0x0 || iVar23 != iVar24) {
LAB_0a2fa9d9:
              if ((iVar23 != iVar24) || (pppppuVar29 == (undefined8 *****)0x0)) goto LAB_0a2faaa0;
              pppppuStack_3b0 = pppppuVar29 + 2;
              bStack_328 = 0;
              uStack_327 = 0;
              uStack_320 = 0xa0;
              uStack_31f = 0xa7;
              uStack_31e = 0xa2e;
              uStack_31c = 0;
              uStack_318 = (undefined8 *****)&UNK_0a2ea990;
              pppppuStack_2e8 = (undefined8 *****)0x0;
              pppppuStack_2d8 = (undefined8 *****)0x0;
              pppppuStack_2d0 = (undefined8 *****)0x1000000d8;
              uStack_2c8 = (long *)0x0;
              pppppuStack_3b8 = (undefined8 *****)&UNK_0f212e40;
              pppppuStack_398 = &pppppuStack_3b8;
              func_0x065bdd40(&pppppuStack_3b8,&pppppuStack_308);
              if ((undefined8 ******)pppppuStack_398 == &pppppuStack_3b8) {
                lVar44 = 0x20;
LAB_0a2fab15:
                (**(code **)((long)*pppppuStack_398 + lVar44))();
              }
              else {
                lVar44 = 0x28;
                if (pppppuStack_398 != (undefined8 *****)0x0) goto LAB_0a2fab15;
              }
              pppppuVar34 = (undefined8 *****)func_0x0d856c70(pppppuVar29,&bStack_328);
              plVar42 = uStack_2c8;
              ppppuStack_330 = (undefined8 ****)CONCAT71(ppppuStack_330._1_7_,extraout_DL);
              uStack_2c8 = (long *)0x0;
              if (plVar42 != (long *)0x0) {
                (**(code **)(*plVar42 + 8))();
              }
              if ((undefined8 ******)pppppuStack_2e8 == &pppppuStack_308) {
                (*(code *)(*pppppuStack_2e8)[4])();
joined_r0x0a2fab9f:
                if ((int)pppppuVar34 == -1) goto LAB_0a2fb1cf;
LAB_0a2faba5:
                pppppuVar47 = pppppuVar29 + 7;
                pppppuStack_1f0 = (undefined8 *****)CONCAT44(pppppuStack_1f0._4_4_,0x1ae92e8);
                ppppuVar35 = pppppuVar29[0xe] +
                             (((uint)(*(int *)(pppppuVar29 + 0xf) - (int)pppppuVar29[0xe]) >> 3) - 1
                             & 0x1ae92e8);
                do {
                  pppuVar43 = *ppppuVar35;
                  if (pppuVar43 == (undefined8 ***)0xffffffffffffffff) goto LAB_0a2fac10;
                  ppppuVar35 = pppppuVar29[0x11] + (long)pppuVar43 * 4;
                } while (*(int *)(pppppuVar29[0x11] + (long)pppuVar43 * 4 + 1) != 0x1ae92e8);
                if (ppppuVar35 == pppppuVar29[0x12]) {
LAB_0a2fac10:
                  pppppuVar36 = (undefined8 *****)
                                (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
                  if (pppppuVar36 == (undefined8 *****)0x0) {
                    func_0x0eec74c0(0x80,0);
                  }
                  pppppuVar36[1] = (undefined8 ****)0x0;
                  pppppuVar36[2] = (undefined8 ****)0x0;
                  *pppppuVar36 = (undefined8 ****)&UNK_0f212ec0;
                  if ((DAT_0f65f7d0 == '\0') &&
                     (iVar24 = func_0x04108328(&DAT_0f65f7d0), iVar24 != 0)) {
                    func_0x0a2e2870(0xf65f7b8);
                    FUN_0410844d(&DAT_0f65f7d0);
                  }
                  pppppuStack_3b8 = pppppuVar36 + 3;
                  pppppuVar36[8] = (undefined8 ****)0x0;
                  pppppuVar36[9] = (undefined8 ****)0x0;
                  pppppuVar36[6] = (undefined8 ****)0x0;
                  pppppuVar36[7] = (undefined8 ****)0x0;
                  pppppuVar36[4] = (undefined8 ****)0x0;
                  pppppuVar36[5] = (undefined8 ****)0x0;
                  pppppuVar36[10] = (undefined8 ****)0xf65f7b8;
                  *(byte *)(pppppuVar36 + 0xb) = 1;
                  pppppuVar36[0xc] = (undefined8 ****)0xffffffff;
                  pppppuVar36[3] = (undefined8 ****)&UNK_0f212f10;
                  pppppuVar36[0xd] = (undefined8 ****)0x0;
                  pppppuVar36[0xe] = (undefined8 ****)0x0;
                  pppppuVar36[0xf] = (undefined8 ****)0x0;
                  pppppuStack_3b0 = pppppuVar36;
                  func_0x065bf170(pppppuVar29 + 0xe,&pppppuStack_1f0,&pppppuStack_3b8);
                  uStack_318 = (undefined8 *****)&UNK_065bf690;
                  uStack_310 = (undefined8 *****)0x0;
                  pppppuStack_308 = (undefined8 *****)CONCAT35(pppppuStack_308._5_3_,0x3145ad657);
                  bStack_328 = (byte)pppppuVar47;
                  uStack_327 = (undefined1)((ulong)pppppuVar47 >> 8);
                  uStack_326 = (undefined2)((ulong)pppppuVar47 >> 0x10);
                  uStack_324 = (undefined4)((ulong)pppppuVar47 >> 0x20);
                  (*(code *)(*pppppuStack_3b8)[5])(pppppuStack_3b8,&bStack_328);
                  if (uStack_310 != (undefined8 *****)0x0) {
                    (*(code *)uStack_310)(&bStack_328);
                  }
                  pppppuVar36 = pppppuStack_3b0;
                  pppppuVar47 = pppppuStack_3b8;
                  if (pppppuStack_3b0 != (undefined8 *****)0x0) {
                    LOCK();
                    pppppuVar28 = pppppuStack_3b0 + 1;
                    ppppuVar35 = *pppppuVar28;
                    *pppppuVar28 = (undefined8 ****)((long)*pppppuVar28 - 1);
                    UNLOCK();
                    if (ppppuVar35 == (undefined8 ****)0x0) {
                      (*(code *)(*pppppuStack_3b0)[2])(pppppuStack_3b0);
                      func_0x0412c2d0(pppppuVar36);
                    }
                  }
                }
                else {
                  pppppuVar47 = (undefined8 *****)ppppuVar35[2];
                }
                auVar54 = func_0x0d8547a0(pppppuVar47,pppppuVar34,0);
                lStack_58 = auVar54._8_8_;
                uStack_48 = auVar54._0_8_;
                pppppuStack_50 = pppppuVar47;
                puVar37 = (undefined4 *)func_0x0a2ed260(pppppuVar47,lStack_58 + -1);
                if (((ulong)*ppppuVar27 & 1) == 0) {
                  *(undefined8 ****)(puVar37 + 4) = ppppuVar27[2];
                  uVar53 = *(undefined4 *)((long)ppppuVar27 + 4);
                  uVar9 = *(undefined4 *)(ppppuVar27 + 1);
                  uVar10 = *(undefined4 *)((long)ppppuVar27 + 0xc);
                  *puVar37 = *(undefined4 *)ppppuVar27;
                  puVar37[1] = uVar53;
                  puVar37[2] = uVar9;
                  puVar37[3] = uVar10;
                }
                else {
                  func_0x0412e5e0(puVar37,ppppuVar27[2],ppppuVar27[1]);
                }
                *(undefined1 *)(puVar37 + 6) = 0;
                *(undefined1 *)(puVar37 + 7) = 0;
                puStack_1e0 = puVar37 + 8;
                *(undefined1 *)(puVar37 + 8) = 0;
                *(undefined1 *)(puVar37 + 0x28) = 0;
                ppppuStack_358 = (undefined8 ****)(puVar37 + 0x2a);
                *(undefined1 *)(puVar37 + 0x2a) = 0;
                *(undefined1 *)(puVar37 + 0x34) = 0;
                if (*(byte *)(ppppuVar27 + 5) == 1) {
                  if ((ulong)*(uint *)(ppppuVar27 + 4) == 0xffffffff) goto LAB_0a2fbbc1;
                  bStack_328 = (byte)&pppppuStack_3b8;
                  uStack_327 = (undefined1)((ulong)&pppppuStack_3b8 >> 8);
                  uStack_326 = (undefined2)((ulong)&pppppuStack_3b8 >> 0x10);
                  uStack_324 = (undefined4)((ulong)&pppppuStack_3b8 >> 0x20);
                  uVar53 = (**(code **)(&UNK_0f3e3f70 + (ulong)*(uint *)(ppppuVar27 + 4) * 8))
                                     (&bStack_328,ppppuVar27 + 3);
                  if (*(char *)(puVar37 + 7) == '\0') {
                    *(undefined1 *)(puVar37 + 7) = 1;
                  }
                  puVar37[6] = uVar53;
                }
                if (*(byte *)(ppppuVar27 + 0x16) == 1) {
                  bStack_328 = 0;
                  uStack_310 = (undefined8 *****)((ulong)uStack_310 & 0xffffffffffffff00);
                  pppppuStack_308 = (undefined8 *****)((ulong)pppppuStack_308 & 0xffffffffffffff00);
                  uStack_2f0 = uStack_2f0 & 0xffffffffffffff00;
                  pppppuStack_2e8 = (undefined8 *****)((ulong)pppppuStack_2e8 & 0xffffffffffffff00);
                  pppppuStack_2d0 = (undefined8 *****)((ulong)pppppuStack_2d0 & 0xffffffffffffff00);
                  uStack_2c8 = (long *)((ulong)uStack_2c8 & 0xffffffffffffff00);
                  pppppuStack_2b0 = (undefined8 *****)((ulong)pppppuStack_2b0 & 0xffffffffffffff00);
                  func_0x05ebd770(&bStack_328,ppppuVar27 + 6);
                  func_0x05ebd770(&pppppuStack_308,ppppuVar27 + 10);
                  func_0x048b4400(&pppppuStack_2e8,ppppuVar27 + 0xe);
                  func_0x048b4400(&uStack_2c8,ppppuVar27 + 0x12);
                  if (*(char *)(puVar37 + 0x28) == '\x01') {
                    func_0x0a2b8d60(puStack_1e0,&bStack_328);
                  }
                  else {
                    *(undefined1 *)(puVar37 + 8) = 0;
                    *(undefined1 *)(puVar37 + 0xe) = 0;
                    if ((char)uStack_310 == '\x01') {
                      *(ulong *)(puVar37 + 8) =
                           CONCAT44(uStack_324,CONCAT22(uStack_326,CONCAT11(uStack_327,bStack_328)))
                      ;
                      *(ulong *)(puVar37 + 10) =
                           CONCAT44(uStack_31c,CONCAT22(uStack_31e,CONCAT11(uStack_31f,uStack_320)))
                      ;
                      *(undefined8 ******)(puVar37 + 0xc) = uStack_318;
                      bStack_328 = 0;
                      uStack_327 = 0;
                      uStack_326 = 0;
                      uStack_324 = 0;
                      uStack_320 = 0;
                      uStack_31f = 0;
                      uStack_31e = 0;
                      uStack_31c = 0;
                      uStack_318 = (undefined8 *****)0x0;
                      *(undefined1 *)(puVar37 + 0xe) = 1;
                      *(undefined1 *)(puVar37 + 0x10) = 0;
                      *(undefined1 *)(puVar37 + 0x16) = 0;
                      if ((char)uStack_2f0 != '\x01') goto LAB_0a2fb064;
LAB_0a2fb0dc:
                      *(undefined8 ******)(puVar37 + 0x10) = pppppuStack_308;
                      *(undefined8 ******)(puVar37 + 0x12) = pppppuStack_300;
                      *(undefined8 *)(puVar37 + 0x14) = uStack_2f8;
                      pppppuStack_308 = (undefined8 *****)0x0;
                      pppppuStack_300 = (undefined8 *****)0x0;
                      uStack_2f8 = 0;
                      *(undefined1 *)(puVar37 + 0x16) = 1;
                      *(undefined1 *)(puVar37 + 0x18) = 0;
                      *(undefined1 *)(puVar37 + 0x1e) = 0;
                      if ((char)pppppuStack_2d0 != '\x01') goto LAB_0a2fb128;
LAB_0a2fb07c:
                      *(undefined8 ******)(puVar37 + 0x1c) = pppppuStack_2d8;
                      *(undefined8 ******)(puVar37 + 0x18) = pppppuStack_2e8;
                      *(undefined8 ******)(puVar37 + 0x1a) = pppppuStack_2e0;
                      pppppuStack_2e8 = (undefined8 *****)0x0;
                      pppppuStack_2e0 = (undefined8 *****)0x0;
                      pppppuStack_2d8 = (undefined8 *****)0x0;
                      *(undefined1 *)(puVar37 + 0x1e) = 1;
                      *(undefined1 *)(puVar37 + 0x20) = 0;
                      *(undefined1 *)(puVar37 + 0x26) = 0;
                    }
                    else {
                      *(undefined1 *)(puVar37 + 0x10) = 0;
                      *(undefined1 *)(puVar37 + 0x16) = 0;
                      if ((char)uStack_2f0 == '\x01') goto LAB_0a2fb0dc;
LAB_0a2fb064:
                      *(undefined1 *)(puVar37 + 0x18) = 0;
                      *(undefined1 *)(puVar37 + 0x1e) = 0;
                      if ((char)pppppuStack_2d0 == '\x01') goto LAB_0a2fb07c;
LAB_0a2fb128:
                      *(undefined1 *)(puVar37 + 0x20) = 0;
                      *(undefined1 *)(puVar37 + 0x26) = 0;
                    }
                    if ((char)pppppuStack_2b0 == '\x01') {
                      *(undefined8 *****)(puVar37 + 0x24) = ppppuStack_2b8;
                      *(long **)(puVar37 + 0x20) = uStack_2c8;
                      *(ulong *)(puVar37 + 0x22) = uStack_2c0;
                      uStack_2c8 = (long *)0x0;
                      uStack_2c0 = 0;
                      ppppuStack_2b8 = (undefined8 ****)0x0;
                      *(undefined1 *)(puVar37 + 0x26) = 1;
                    }
                    *(undefined1 *)(puVar37 + 0x28) = 1;
                  }
                  func_0x0a28e170(&bStack_328);
                }
                if (*(byte *)(ppppuVar27 + 0x1c) != 1) goto LAB_0a2fb1cf;
                if (*(char *)(puVar37 + 0x34) == '\x01') {
                  if (ppppuStack_358 != ppppuVar27 + 0x17) {
                    puVar37[0x32] = *(undefined4 *)(ppppuVar27 + 0x1b);
                    func_0x09b3c1d0(ppppuStack_358,ppppuVar27[0x19],0);
                  }
                  goto LAB_0a2fb1cf;
                }
                func_0x048982a0(ppppuStack_358);
                *(undefined1 *)(puVar37 + 0x34) = 1;
                ppppppuStack_350 = (undefined8 ******)pppppuVar29[1];
                if (ppppppuStack_350 == (undefined8 ******)0x0) goto LAB_0a2fb1fa;
LAB_0a2fb1d9:
                iStack_348 = *(int *)(ppppppuStack_350 + 1);
              }
              else {
                if (pppppuStack_2e8 == (undefined8 *****)0x0) goto joined_r0x0a2fab9f;
                (*(code *)(*pppppuStack_2e8)[5])();
                if ((int)pppppuVar34 != -1) goto LAB_0a2faba5;
LAB_0a2fb1cf:
                ppppppuStack_350 = (undefined8 ******)pppppuVar29[1];
                if (ppppppuStack_350 != (undefined8 ******)0x0) goto LAB_0a2fb1d9;
LAB_0a2fb1fa:
                iStack_348 = 0;
              }
              uStack_338 = CONCAT31(uStack_338._1_3_,ppppuStack_330._0_1_);
              ppppppuVar33 = pppppppuStack_230[4];
              uStack_340 = pppppuVar34;
              if (ppppppuVar33 != (undefined8 ******)0x0) goto LAB_0a2faafc;
              goto LAB_0a2fb230;
            }
            func_0x0d854110(&pppppuStack_3b8,pppppuVar29 + 0x2e,&UNK_01a7edc9);
            pppppuVar47 = uStack_310;
            uVar18 = uStack_31e;
            uVar16 = uStack_31f;
            uVar14 = uStack_320;
            pppppuVar34 = pppppuStack_3b0;
            pppppuVar29 = pppppuStack_3b8;
            if ((char)pppppuStack_3a8 != '\x01') {
              ppppppuVar33 = pppppppuStack_230[4];
              if (ppppppuVar33 == (undefined8 ******)0x0) goto LAB_0a2faaa0;
              iVar24 = *(int *)(pppppppuStack_230 + 5);
              iVar23 = *(int *)(ppppppuVar33 + 1);
              pppppuVar29 = *ppppppuVar33;
              goto LAB_0a2fa9d9;
            }
            uVar13 = pppppuStack_3b0._0_1_;
            ppppppuVar33 = pppppppuStack_230[4];
            iVar24 = *(int *)(pppppppuStack_230 + 5);
            uStack_320 = (undefined1)iVar24;
            uVar15 = uStack_320;
            uStack_31f = (undefined1)((uint)iVar24 >> 8);
            uVar17 = uStack_31f;
            uStack_31e = (undefined2)((uint)iVar24 >> 0x10);
            uVar19 = uStack_31e;
            if (ppppppuVar33 == (undefined8 ******)0x0) {
              bStack_328 = 0;
              uStack_327 = 0;
              uStack_326 = 0;
              uStack_324 = 0;
              uStack_318 = pppppuStack_3b8;
              uStack_310 = (undefined8 *****)CONCAT71(uStack_310._1_7_,pppppuStack_3b0._0_1_);
              pppppuVar29 = uStack_310;
              ppppppuStack_350 = (undefined8 ******)0x0;
              iStack_348 = iVar24;
              uStack_310._4_4_ = SUB84(pppppuVar47,4);
              uStack_340 = pppppuStack_3b8;
              uStack_338 = (uint)uStack_310;
              uStack_334 = uStack_310._4_4_;
              uStack_310 = pppppuVar29;
            }
            else {
              if (*ppppppuVar33 != (undefined8 *****)0x0 && *(int *)(ppppppuVar33 + 1) == iVar24) {
                uStack_320 = uVar14;
                uStack_31f = uVar16;
                uStack_31e = uVar18;
                func_0x0d8568b0(*ppppppuVar33,pppppuStack_3b8);
              }
              pppppuVar47 = uStack_310;
              bStack_328 = (byte)ppppppuVar33;
              uStack_327 = (undefined1)((ulong)ppppppuVar33 >> 8);
              uStack_326 = (undefined2)((ulong)ppppppuVar33 >> 0x10);
              uStack_324 = (undefined4)((ulong)ppppppuVar33 >> 0x20);
              uStack_318 = pppppuVar29;
              uStack_310 = (undefined8 *****)CONCAT71(uStack_310._1_7_,uVar13);
              pppppuVar36 = uStack_310;
              pppppuStack_308 = (undefined8 *****)CONCAT71(pppppuStack_308._1_7_,1);
              ppppppuStack_350 = ppppppuVar33;
              iStack_348 = iVar24;
              uStack_310._4_4_ = SUB84(pppppuVar47,4);
              uStack_340 = pppppuVar29;
              uStack_338 = (uint)uStack_310;
              uStack_334 = uStack_310._4_4_;
              iVar23 = *(int *)(ppppppuVar33 + 1);
              pppppuVar47 = *ppppppuVar33;
              uStack_320 = uVar15;
              uStack_31f = uVar17;
              uStack_31e = uVar19;
              uStack_310 = pppppuVar36;
              if (pppppuVar47 != (undefined8 *****)0x0 && iVar23 == iVar24) {
                func_0x0d8568b0(pppppuVar47,pppppuVar29);
                iVar23 = *(int *)(ppppppuVar33 + 1);
                pppppuVar47 = *ppppppuVar33;
              }
              if (pppppuVar47 != (undefined8 *****)0x0 && iVar23 == iVar24) {
                func_0x0d8569b0(pppppuVar47,pppppuVar29,(ulong)pppppuVar34 & 0xff);
              }
            }
          }
          if (((ulong)_auStack_380 & 1) != 0) {
            func_0x0412a280(pppppuStack_370,(ulong)_auStack_380 & 0xfffffffffffffffe);
          }
          ppppuVar35 = ppppuStack_220;
          ppppuVar27 = ppppuStack_228;
          if (ppppuStack_220 < ppppuStack_218) {
            *ppppuStack_220 = ppppppuStack_350;
            *(int *)(ppppuStack_220 + 1) = iStack_348;
            *(undefined4 *)(ppppuStack_220 + 2) = (undefined4)uStack_340;
            *(undefined4 *)((long)ppppuStack_220 + 0x14) = uStack_340._4_4_;
            *(uint *)(ppppuStack_220 + 3) = uStack_338;
            *(undefined4 *)((long)ppppuStack_220 + 0x1c) = uStack_334;
            ppppuStack_220 = ppppuStack_220 + 4;
          }
          else {
            lVar44 = (long)ppppuStack_220 - (long)ppppuStack_228;
            uVar32 = (lVar44 >> 5) + 1;
            if (0x7ffffffffffffff < uVar32) {
              func_0x0a2b9ba0();
LAB_0a2fbbad:
              FUN_04882eb0();
LAB_0a2fbbb2:
              func_0x04931450();
LAB_0a2fbbb7:
              func_0x0a2b9aa0();
LAB_0a2fbbbc:
              FUN_04882eb0();
LAB_0a2fbbc1:
              func_0x04931450();
              goto LAB_0a2fbbc6;
            }
            ppppuStack_330 = ppppuStack_218;
            uVar50 = (long)ppppuStack_218 - (long)ppppuStack_228 >> 4;
            if (uVar50 <= uVar32) {
              uVar50 = uVar32;
            }
            if (uStack_38 <= (ulong)((long)ppppuStack_218 - (long)ppppuStack_228)) {
              uVar50 = 0x7ffffffffffffff;
            }
            if (uVar50 == 0) {
              ppppuVar30 = (undefined8 ****)0x0;
            }
            else {
              if (0x7ffffffffffffff < uVar50) goto LAB_0a2fbbad;
              ppppuVar30 = (undefined8 ****)
                           (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar50 << 5);
              if (ppppuVar30 == (undefined8 ****)0x0) {
                func_0x0eec74c0(uVar50 << 5,0);
                ppppuVar30 = (undefined8 ****)0x0;
              }
            }
            *(undefined8 *******)((long)ppppuVar30 + lVar44) = ppppppuStack_350;
            *(int *)((long)ppppuVar30 + lVar44 + 8) = iStack_348;
            pbVar3 = (byte *)((long)ppppuVar30 + lVar44 + 0x10);
            *(undefined4 *)pbVar3 = (undefined4)uStack_340;
            *(undefined4 *)(pbVar3 + 4) = uStack_340._4_4_;
            *(uint *)(pbVar3 + 8) = uStack_338;
            *(undefined4 *)(pbVar3 + 0xc) = uStack_334;
            ppppppuStack_350 = (undefined8 ******)0x0;
            iStack_348 = 0;
            uStack_340 = (undefined8 *****)0xffffffffffffff;
            uStack_338 = uStack_338 & 0xffffff00;
            ppppuVar46 = (undefined8 ****)((long)ppppuVar30 + (lVar44 >> 5) * -0x20 + lVar44);
            if (ppppuVar27 != ppppuVar35) {
              ppppuStack_358 = ppppuVar30;
              lVar39 = 0;
              do {
                *(undefined8 *)((long)ppppuVar46 + lVar39) =
                     *(undefined8 *)((long)ppppuVar27 + lVar39);
                *(undefined4 *)((long)ppppuVar46 + lVar39 + 8) =
                     *(undefined4 *)((long)ppppuVar27 + lVar39 + 8);
                pbVar3 = (byte *)((long)ppppuVar27 + lVar39 + 0x10);
                uVar53 = *(undefined4 *)(pbVar3 + 4);
                uVar9 = *(undefined4 *)(pbVar3 + 8);
                uVar10 = *(undefined4 *)(pbVar3 + 0xc);
                pbVar4 = (byte *)((long)ppppuVar46 + lVar39 + 0x10);
                *(undefined4 *)pbVar4 = *(undefined4 *)pbVar3;
                *(undefined4 *)(pbVar4 + 4) = uVar53;
                *(undefined4 *)(pbVar4 + 8) = uVar9;
                *(undefined4 *)(pbVar4 + 0xc) = uVar10;
                pbVar3 = (byte *)((long)ppppuVar27 + lVar39);
                pbVar3[0] = 0;
                pbVar3[1] = 0;
                pbVar3[2] = 0;
                pbVar3[3] = 0;
                pbVar3[4] = 0;
                pbVar3[5] = 0;
                pbVar3[6] = 0;
                pbVar3[7] = 0;
                pbVar3 = (byte *)((long)ppppuVar27 + lVar39 + 8);
                pbVar3[0] = 0;
                pbVar3[1] = 0;
                pbVar3[2] = 0;
                pbVar3[3] = 0;
                pbVar3 = (byte *)((long)ppppuVar27 + lVar39 + 0x10);
                pbVar3[0] = 0xff;
                pbVar3[1] = 0xff;
                pbVar3[2] = 0xff;
                pbVar3[3] = 0xff;
                pbVar3[4] = 0xff;
                pbVar3[5] = 0xff;
                pbVar3[6] = 0xff;
                pbVar3[7] = 0;
                *(byte *)((long)ppppuVar27 + lVar39 + 0x18) = 0;
                lVar12 = lVar39 + 0x20;
                lVar39 = lVar39 + 0x20;
                ppppuVar30 = ppppuVar27;
              } while ((undefined8 ****)((long)ppppuVar27 + lVar12) != ppppuVar35);
              do {
                pppuVar43 = *ppppuVar30;
                if ((pppuVar43 != (undefined8 ***)0x0) &&
                   (*pppuVar43 != (undefined8 **)0x0 &&
                    *(int *)(pppuVar43 + 1) == *(int *)(ppppuVar30 + 1))) {
                  func_0x0d8569b0(*pppuVar43,ppppuVar30[2],*(undefined4 *)(ppppuVar30 + 3));
                }
                ppppuVar30 = ppppuVar30 + 4;
              } while (ppppuVar30 != ppppuVar35);
              ppppuStack_330 = ppppuStack_218;
              ppppuVar30 = ppppuStack_358;
            }
            ppppuStack_228 = ppppuVar46;
            ppppuStack_218 = ppppuVar30 + uVar50 * 4;
            if (ppppuVar27 != (undefined8 ****)0x0) {
              func_0x0412a280(ppppuVar27,(long)ppppuStack_330 - (long)ppppuVar27);
            }
            ppppuStack_220 = (undefined8 ****)((long)ppppuVar30 + lVar44 + 0x20);
            if ((ppppppuStack_350 != (undefined8 ******)0x0) &&
               (*ppppppuStack_350 != (undefined8 *****)0x0 &&
                *(int *)(ppppppuStack_350 + 1) == iStack_348)) {
              func_0x0d8569b0(*ppppppuStack_350,uStack_340,uStack_338);
            }
          }
        }
LAB_0a2fa468:
        pppppuVar29 = (undefined8 *****)*pppppuStack_200;
      } while (pppppuVar29 != (undefined8 *****)0x0);
    }
    pppppuVar29 = (undefined8 *****)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
    if (pppppuVar29 == (undefined8 *****)0x0) {
      func_0x048b0de0(&bStack_328,&pppppuStack_3b8);
      uVar9 = uStack_31c;
      uRam000000000f54fd94 = uStack_324;
      _DAT_0f54fd90 = CONCAT22(uStack_326,CONCAT11(uStack_327,bStack_328));
      uVar53 = CONCAT22(uStack_31e,CONCAT11(uStack_31f,uStack_320));
      bStack_328 = 0;
      uStack_327 = 0;
      uStack_326 = 0;
      uStack_324 = 0;
      uStack_320 = 0;
      uStack_31f = 0;
      uStack_31e = 0;
      uStack_31c = 0;
      plVar42 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
      uRam000000000f54fd9c = uVar9;
      _DAT_0f54fd98 = uVar53;
      if (plVar42 != (long *)0x0) {
        LOCK();
        plVar1 = plVar42 + 1;
        lVar44 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar44 == 0) {
          (**(code **)(*plVar42 + 0x10))(plVar42);
          func_0x0412c2d0(plVar42);
        }
      }
      plVar42 = (long *)CONCAT44(uStack_31c,CONCAT22(uStack_31e,CONCAT11(uStack_31f,uStack_320)));
      if (plVar42 != (long *)0x0) {
        LOCK();
        plVar1 = plVar42 + 1;
        lVar44 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar44 == 0) {
          (**(code **)(*plVar42 + 0x10))(plVar42);
          func_0x0412c2d0(plVar42);
        }
      }
      pppppuVar29 = (undefined8 *****)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
    }
    uStack_318 = (undefined8 *****)&UNK_0a2fd170;
    uStack_310 = (undefined8 *****)&SUB_0a2fd970;
    pppppuStack_308 = (undefined8 *****)CONCAT35(pppppuStack_308._5_3_,0x1acfeb0c5);
    apuStack_1d0[0] = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (apuStack_1d0[0] == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *apuStack_1d0[0] = ppppuStack_228;
    apuStack_1d0[0][1] = ppppuStack_220;
    apuStack_1d0[0][2] = ppppuStack_218;
    uStack_1d8 = 0;
    pcStack_1c0 = (code *)&UNK_0a2fd170;
    pcStack_1b8 = (code *)&SUB_0a2fd970;
    uStack_1b0 = 0xacfeb0c5;
    cStack_1ac = '\x01';
    bStack_328 = 0;
    uStack_327 = 0;
    uStack_326 = 0;
    uStack_324 = 0;
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    uStack_1a0 = 0;
    puStack_198 = &UNK_0a2fcfe0;
    pppppuStack_300 = pppppuVar29;
    uStack_1a8 = pppppuVar29;
    func_0x0a2fd970(&bStack_328);
    plVar42 = plStack_208;
    if ((bStack_60 & 1) != 0) {
      func_0x0a291a30(&fStack_150);
      plVar42 = plStack_208;
    }
  }
  else {
    uStack_318 = (undefined8 *****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x68);
    if (uStack_318 == (undefined8 *****)0x0) {
      func_0x0eec74c0(0x68,0);
    }
    ppppuVar27 = _UNK_013b78ff;
    bStack_328 = 0x69;
    uStack_327 = 0;
    uStack_326 = 0;
    uStack_324 = 0;
    uStack_320 = 0x61;
    uStack_31f = 0;
    uStack_31e = 0;
    uStack_31c = 0;
    uStack_318[10] = _DAT_013b78f7;
    uStack_318[0xb] = ppppuVar27;
    ppppuVar27 = _UNK_013b78ef;
    uStack_318[8] = _DAT_013b78e7;
    uStack_318[9] = ppppuVar27;
    ppppuVar27 = _UNK_013b78df;
    uStack_318[6] = _DAT_013b78d7;
    uStack_318[7] = ppppuVar27;
    ppppuVar27 = _UNK_013b78cf;
    uStack_318[4] = _DAT_013b78c7;
    uStack_318[5] = ppppuVar27;
    ppppuVar27 = _UNK_013b78bf;
    uStack_318[2] = _DAT_013b78b7;
    uStack_318[3] = ppppuVar27;
    uVar10 = _UNK_013b78b3;
    uVar9 = _UNK_013b78af;
    uVar53 = _UNK_013b78ab;
    *(undefined4 *)uStack_318 = _DAT_013b78a7;
    *(undefined4 *)((long)uStack_318 + 4) = uVar53;
    *(undefined4 *)(uStack_318 + 1) = uVar9;
    *(undefined4 *)((long)uStack_318 + 0xc) = uVar10;
    *(undefined2 *)(uStack_318 + 0xc) = 0x6e;
    func_0x0d85afe0(&fStack_150,&bStack_328,0,0);
    uStack_1d8 = 1;
    func_0x06971370(apuStack_1d0,&fStack_150);
    plVar42 = plStack_208;
    func_0x048fb670(&fStack_150);
    if ((bStack_328 & 1) != 0) {
      func_0x0412a280(uStack_318,
                      CONCAT44(uStack_324,CONCAT22(uStack_326,CONCAT11(uStack_327,bStack_328))) &
                      0xfffffffffffffffe);
    }
  }
  *plVar42 = 0;
  plVar42[2] = (long)&UNK_0a2fc6c0;
  *(undefined4 *)(plVar42 + 4) = 0x630b4f52;
  plVar42[3] = (long)&UNK_0a2fc9a0;
  *(undefined1 *)((long)plVar42 + 0x24) = 1;
  puVar40 = (undefined1 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
  if (puVar40 == (undefined1 *)0x0) {
    func_0x0eec74c0(0x48,0);
  }
  puVar38 = apuStack_1d0[0];
  *puVar40 = uStack_1d8;
  *(undefined8 *)(puVar40 + 8) = 0;
  *(code **)(puVar40 + 0x18) = pcStack_1c0;
  *(code **)(puVar40 + 0x20) = pcStack_1b8;
  *(undefined4 *)(puVar40 + 0x28) = uStack_1b0;
  puVar40[0x2c] = cStack_1ac;
  if (cStack_1ac != '\0') {
    if (cStack_1ac == '\x02') {
      (*pcStack_1c0)(5,apuStack_1d0);
    }
    else {
      apuStack_1d0[0] = (undefined8 *)0x0;
      *(undefined8 **)(puVar40 + 8) = puVar38;
    }
  }
  puVar22 = puStack_198;
  uVar53 = (undefined4)uStack_1a0;
  uVar9 = uStack_1a0._4_4_;
  uStack_1a0 = 0;
  *(undefined4 *)(puVar40 + 0x30) = (undefined4)uStack_1a8;
  *(undefined4 *)(puVar40 + 0x34) = uStack_1a8._4_4_;
  *(undefined4 *)(puVar40 + 0x38) = uVar53;
  *(undefined4 *)(puVar40 + 0x3c) = uVar9;
  puStack_198 = (undefined *)0x0;
  *(undefined **)(puVar40 + 0x40) = puVar22;
  *plVar42 = (long)puVar40;
  plVar42[5] = lStack_40;
  plVar42[6] = 0;
  plVar42[7] = (long)&UNK_0a2fc550;
  if (pcStack_1b8 != (code *)0x0) {
    (*pcStack_1b8)(apuStack_1d0);
  }
LAB_0a2fbafe:
  if ((code *)CONCAT44(uStack_174,uStack_178) != (code *)0x0) {
    (*(code *)CONCAT44(uStack_174,uStack_178))(apppppppuStack_190);
  }
  return plVar42;
joined_r0x0a2fa77f:
  if (ppuVar45 == ppuVar7) goto LAB_0a2fa468;
  lVar44 = func_0x0a2f7f80(pppppuVar34 + 3,ppuVar45);
  if (lVar44 != 0) goto LAB_0a2fa698;
  ppuVar45 = (undefined8 **)((long)ppuVar45 + 0x18);
  goto joined_r0x0a2fa77f;
}



/* ---- referenced strings ----
 * 0x13b78a7  SoundDefinitionFilter.minDuration must be less than or equal to SoundDefinitionFilter.maxDuratio
 * 0x13b78b7  ilter.minDuration must be less than or equal to SoundDefinitionFilter.maxDuration
 * 0x13b78c7  n must be less than or equal to SoundDefinitionFilter.maxDuration
 * 0x13b78d7  han or equal to SoundDefinitionFilter.maxDuration
 * 0x13b78e7  SoundDefinitionFilter.maxDuration
 * 0x13b78f7  ilter.maxDuration
 */
