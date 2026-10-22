/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc9224d0 (ELF vaddr 0xc8224d0)
 * Label: caller-of-callee
 * Body:  [[0c9224d0, 0c922540] [0c922550, 0c9227ca] [0c9227d0, 0c9233a3] [0c9233b0, 0c923451] [0c923460, 0c92365e] [0c923660, 0c923683] [0c923690, 0c923968] [0c923970, 0c9246ed] [0c9246f0, 0c924ca4] [0c924cb0, 0c924cb6] [0c924cc0, 0c925095] [0c9250a0, 0c9251a5] [0c9251b0, 0c925891] [0c9258a0, 0c9259b4] [0c9259c0, 0c925d0d] [0c925d10, 0c925d30] [0c925d40, 0c925edd] [0c925ee0, 0c92602a] [0c926030, 0c9260b0] [0c9260c0, 0c9260f7] [0c926100, 0c92616a] [0c926170, 0c926188] [0c926190, 0c92628e] [0c926290, 0c926312] [0c926320, 0c9263dc] [0c9263e0, 0c92641d] [0c926420, 0c926555] [0c926560, 0c92675a] [0c926760, 0c92685e] [0c926860, 0c926922] [0c926930, 0c92698a] [0c926990, 0c926ced]]
 * Ghidra: FUN_0c9224d0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c9224d0(undefined8 ******param_1,long param_2,long param_3,undefined4 param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  long lVar4;
  ushort uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  char cVar13;
  byte bVar14;
  int iVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  undefined8 *******pppppppuVar19;
  undefined8 ******ppppppuVar20;
  undefined8 *****pppppuVar21;
  undefined8 *****pppppuVar22;
  undefined8 ****ppppuVar23;
  undefined8 ****ppppuVar24;
  undefined8 ******ppppppuVar25;
  undefined8 ******ppppppuVar26;
  undefined8 *******pppppppuVar27;
  undefined8 ****ppppuVar28;
  undefined8 *******pppppppuVar29;
  ulong uVar30;
  undefined8 *****pppppuVar31;
  undefined8 ******ppppppuVar32;
  undefined *puVar33;
  ulong uVar34;
  undefined8 ***pppuVar35;
  undefined8 ******ppppppuVar36;
  char *pcVar37;
  undefined4 uVar38;
  undefined8 **ppuVar39;
  ulong uVar40;
  undefined8 ******ppppppuVar41;
  undefined8 *****pppppuVar42;
  undefined8 *****pppppuVar43;
  undefined8 *****pppppuVar44;
  int *piVar45;
  undefined8 ******ppppppuVar46;
  bool bVar47;
  float fVar48;
  float fVar49;
  undefined8 *****pppppuStack_808;
  undefined8 *****pppppuStack_800;
  undefined8 *****pppppuStack_7f8;
  undefined8 *****pppppuStack_7f0;
  undefined8 ******ppppppuStack_7e8;
  undefined8 ******ppppppuStack_7e0;
  undefined8 *****pppppuStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 ******ppppppuStack_7c0;
  undefined8 *****pppppuStack_7b8;
  undefined8 *****pppppuStack_7b0;
  undefined8 uStack_7a8;
  undefined8 *****pppppuStack_7a0;
  undefined8 *****pppppuStack_798;
  undefined8 ****ppppuStack_790;
  undefined8 ****ppppuStack_788;
  char cStack_780;
  undefined8 *****pppppuStack_778;
  undefined8 *****pppppuStack_770;
  undefined8 *****pppppuStack_768;
  char cStack_760;
  undefined8 uStack_758;
  undefined8 *****pppppuStack_750;
  undefined8 *****pppppuStack_748;
  char cStack_740;
  uint uStack_738;
  undefined8 ****ppppuStack_730;
  undefined8 ****ppppuStack_728;
  undefined8 *****pppppuStack_720;
  undefined8 ****ppppuStack_718;
  undefined4 uStack_710;
  char cStack_708;
  uint uStack_700;
  uint uStack_6fc;
  undefined8 *****pppppuStack_6d8;
  undefined8 *****pppppuStack_6d0;
  undefined8 *****pppppuStack_6c8;
  undefined8 ****ppppuStack_6c0;
  undefined8 uStack_6b8;
  undefined8 ****ppppuStack_6b0;
  undefined8 ****ppppuStack_6a8;
  char cStack_6a0;
  undefined7 uStack_69f;
  undefined8 *****pppppuStack_698;
  undefined8 *****pppppuStack_690;
  undefined8 *****pppppuStack_688;
  uint uStack_680;
  char cStack_67c;
  undefined8 *****pppppuStack_678;
  undefined8 *****pppppuStack_670;
  undefined8 *****pppppuStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined4 uStack_630;
  byte bStack_62c;
  ulong uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 ******ppppppuStack_608;
  undefined8 ******ppppppuStack_600;
  undefined8 *****pppppuStack_5f8;
  undefined8 uStack_5f0;
  undefined8 *****pppppuStack_5e8;
  undefined8 ******ppppppuStack_5e0;
  undefined8 *****pppppuStack_5d8;
  undefined8 *****pppppuStack_5d0;
  char cStack_5c8;
  undefined8 *****pppppuStack_5c0;
  undefined8 *****pppppuStack_5b8;
  undefined8 *****pppppuStack_5b0;
  long lStack_5a8;
  undefined8 *****pppppuStack_5a0;
  undefined8 *****pppppuStack_598;
  undefined8 *****pppppuStack_590;
  ulong uStack_588;
  undefined8 *****pppppuStack_580;
  undefined8 *****pppppuStack_578;
  undefined8 *****pppppuStack_570;
  ulong uStack_568;
  uint uStack_560;
  undefined1 uStack_55c;
  undefined8 *****pppppuStack_558;
  undefined8 *****pppppuStack_550;
  undefined8 *****pppppuStack_548;
  undefined8 *****pppppuStack_540;
  undefined4 uStack_538;
  byte bStack_530;
  undefined8 uStack_528;
  long lStack_520;
  undefined8 ******ppppppuStack_518;
  undefined8 ******ppppppuStack_510;
  undefined8 *****pppppuStack_508;
  undefined8 *****pppppuStack_500;
  undefined8 *****pppppuStack_4f8;
  undefined4 uStack_4ec;
  ulong uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  long lStack_4c8;
  long lStack_4c0;
  undefined8 *****pppppuStack_4b8;
  undefined8 *****pppppuStack_4b0;
  undefined8 *****pppppuStack_4a8;
  uint uStack_4a0;
  undefined4 uStack_49c;
  undefined8 *****pppppuStack_498;
  undefined8 *****pppppuStack_490;
  undefined8 *****pppppuStack_488;
  undefined1 auStack_480 [8];
  undefined8 *****pppppuStack_478;
  undefined8 *****pppppuStack_470;
  undefined8 *****pppppuStack_468;
  char cStack_460;
  undefined8 *****pppppuStack_458;
  undefined8 *****pppppuStack_450;
  undefined8 *****pppppuStack_448;
  char cStack_440;
  undefined8 *****pppppuStack_408;
  undefined8 *****pppppuStack_400;
  undefined8 *****pppppuStack_3f8;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined8 uStack_3e0;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined8 uStack_3c8;
  undefined4 uStack_3c0;
  byte bStack_3bc;
  undefined8 ******ppppppuStack_3b0;
  undefined8 ******ppppppuStack_3a8;
  undefined8 ******ppppppuStack_3a0;
  undefined8 *****pppppuStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 *****pppppuStack_380;
  undefined8 *****pppppuStack_378;
  ulong uStack_370;
  ulong uStack_368;
  undefined1 auStack_360 [24];
  code *pcStack_348;
  undefined1 auStack_338 [80];
  undefined8 *****pppppuStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  long *plStack_298;
  undefined8 uStack_268;
  undefined8 ******ppppppuStack_258;
  undefined8 ******ppppppuStack_250;
  char *pcStack_248;
  char *pcStack_240;
  long *plStack_238;
  long lStack_230;
  undefined8 ******ppppppuStack_228;
  undefined8 *****pppppuStack_220;
  undefined8 uStack_218;
  undefined8 *****pppppuStack_210;
  undefined8 *****pppppuStack_208;
  undefined8 *****pppppuStack_200;
  long lStack_1f8;
  undefined2 uStack_1e8;
  undefined8 uStack_1e0;
  long *plStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined2 uStack_1c0;
  undefined2 uStack_1b8;
  undefined8 uStack_1b0;
  long *plStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined2 uStack_190;
  undefined2 auStack_188 [4];
  undefined8 *****pppppuStack_180;
  undefined8 *****pppppuStack_178;
  undefined8 *****pppppuStack_170;
  undefined8 uStack_168;
  undefined2 uStack_160;
  uint6 uStack_15e;
  ulong uStack_158;
  undefined8 *******pppppppuStack_150;
  undefined8 ******ppppppuStack_148;
  undefined8 ******ppppppuStack_140;
  code *pcStack_138;
  int iStack_130;
  char cStack_12c;
  undefined1 auStack_128 [76];
  byte bStack_dc;
  undefined8 *****pppppuStack_d8;
  undefined8 *****pppppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  byte bStack_8c;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lStack_520 = *(long *)(param_3 + 0x98);
  ppppppuVar41 = param_1;
  uStack_4ec = param_4;
  lStack_4c8 = param_2;
  if (DAT_0f6ebc88 == '\0') goto LAB_0c926c8f;
LAB_0c922513:
  lStack_4c0 = *(long *)(lStack_520 + 0x10);
  if (lStack_4c0 != *(long *)(lStack_520 + 8)) {
    ppppppuStack_518 = ppppppuVar41 + 2;
    lVar17 = lStack_520;
    do {
      uStack_628 = 0;
      uStack_620 = 0;
      uStack_618 = 0;
      cVar13 = func_0x0d62a0d0(*(undefined8 *)(lStack_4c0 + -0x28),&DAT_0f6ebc70,&uStack_628,
                               *(undefined4 *)(lStack_4c0 + -8));
      if (cVar13 != '\0') {
        uStack_1e8 = 0xd;
        uStack_1c8 = 0;
        uStack_1c0 = CONCAT11(*(byte *)(**(long **)(lStack_4c0 + -0x28) + 0x88) | (byte)uStack_4ec,1
                             );
        uStack_1b8 = 0xd;
        uStack_1e0 = 0;
        plStack_1d8 = (long *)0x0;
        uStack_1d0 = 0;
        uStack_190 = uStack_1c0;
        uStack_198 = 0;
        auStack_188[0] = 0xd;
        pppppuStack_180 = (undefined8 *****)0x0;
        pppppuStack_178 = (undefined8 *****)0x0;
        uStack_1b0 = 0;
        plStack_1a8 = (long *)0x0;
        pppppuStack_170 = (undefined8 *****)0x0;
        uStack_1a0 = 0;
        uStack_160 = uStack_1c0;
        uStack_168 = (undefined8 *****)0x0;
        puVar33 = &UNK_0f3e59c0;
        cVar13 = func_0x05f6fe50(&UNK_0f3e59c0);
        if (cVar13 != '\0') {
          puVar33 = &UNK_0f3e58e0;
        }
        func_0x05d54750(&ppppppuStack_7e8,puVar33);
        pppppuStack_2e8 = (undefined8 *****)0x0;
        uStack_2e0 = 0;
        uStack_2d8 = 0;
        puStack_2d0 = &uStack_2c8;
        uStack_2c8 = 0;
        uStack_2c0 = 0;
        plStack_298 = (long *)0x0;
        uStack_268 = 0;
        ppppppuStack_258 = ppppppuStack_7e8;
        ppppppuStack_250 = (undefined8 ******)0x0;
        ppppppuVar41 = ppppppuStack_7e0;
        if (((ulong)ppppppuStack_7e0 & 0x80000000000000) != 0) {
          uVar34 = (ulong)ppppppuStack_7e0 & 0xff00ffffffffffff;
          lVar18 = *(long *)(uVar34 - 8);
          lVar17 = lVar18 + 9;
          plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
          if (lVar17 != 0 && plVar16 == (long *)0x0) {
            func_0x0eec74c0(lVar17,8);
          }
          *plVar16 = lVar18;
          memcpy(plVar16 + 1,uVar34,lVar18);
          *(undefined1 *)((long)plVar16 + lVar18 + 8) = 0;
          ppppppuVar41 = (undefined8 ******)
                         ((ulong)(plVar16 + 1) & 0xff00ffffffffffff | 0x80000000000000);
        }
        pcStack_248 = (char *)0x0;
        ppppppuStack_250 = ppppppuVar41;
        if (((ulong)pppppuStack_7d8 & 0x80000000000000) == 0) {
          pcStack_248 = (char *)pppppuStack_7d8;
          pppppuStack_210 = (undefined8 *****)0x0;
          pppppuStack_208 = (undefined8 *****)0x0;
          pppppuStack_220 = (undefined8 *****)0x0;
          uStack_218 = 0;
          lStack_230 = 0;
          ppppppuStack_228 = (undefined8 ******)0x0;
          pcStack_240 = (char *)0x0;
          plStack_238 = (long *)0x0;
          pppppuStack_200 = (undefined8 *****)0x0;
        }
        else {
          uVar34 = (ulong)pppppuStack_7d8 & 0xff00ffffffffffff;
          lVar18 = *(long *)(uVar34 - 8);
          lVar17 = lVar18 + 9;
          plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
          if (lVar17 != 0 && plVar16 == (long *)0x0) {
            func_0x0eec74c0(lVar17,8);
          }
          *plVar16 = lVar18;
          memcpy(plVar16 + 1,uVar34,lVar18);
          *(undefined1 *)((long)plVar16 + lVar18 + 8) = 0;
          pcStack_248 = (char *)((ulong)(plVar16 + 1) & 0xff00ffffffffffff | 0x80000000000000);
          pcStack_240 = (char *)0x0;
          plStack_238 = (long *)0x0;
          lStack_230 = 0;
          ppppppuStack_228 = (undefined8 ******)0x0;
          pppppuStack_220 = (undefined8 *****)0x0;
          uStack_218 = 0;
          pppppuStack_210 = (undefined8 *****)0x0;
          pppppuStack_208 = (undefined8 *****)0x0;
          pppppuStack_200 = (undefined8 *****)0x0;
          if (((ulong)pppppuStack_7d8 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)pppppuStack_7d8 & 0xff00ffffffffffff) - 8);
          }
        }
        pppppuStack_7d8 = (undefined8 *****)0x0;
        if (((ulong)ppppppuStack_7e0 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,((ulong)ppppppuStack_7e0 & 0xff00ffffffffffff) - 8);
        }
        lVar17 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,1);
        if (lVar17 == 0) {
          func_0x0eec74c0(1,0);
        }
        plVar16 = plStack_238;
        pcStack_240 = (char *)0x0;
        plStack_238 = (long *)0x0;
        lStack_1f8 = lVar17;
        if (plVar16 != (long *)0x0) {
          LOCK();
          plVar1 = plVar16 + 1;
          lVar17 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar17 == 0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
            func_0x0412c2d0(plVar16);
          }
        }
        plVar1 = plStack_238;
        lStack_230 = 0;
        pcStack_240 = *(char **)(lStack_4c8 + 8);
        plVar16 = *(long **)(lStack_4c8 + 0x10);
        if (plVar16 != (long *)0x0) {
          LOCK();
          *(long *)((long)plVar16 + 8U) = *(long *)((long)plVar16 + 8U) + 1;
          UNLOCK();
        }
        if (plStack_238 != (long *)0x0) {
          LOCK();
          plVar2 = plStack_238 + 1;
          lVar17 = *plVar2;
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (lVar17 == 0) {
            lVar17 = *plStack_238;
            plStack_238 = plVar16;
            (**(code **)(lVar17 + 0x10))(plVar1);
            func_0x0412c2d0(plVar1);
            plVar16 = plStack_238;
          }
        }
        plStack_238 = plVar16;
        ppppppuVar41 = ppppppuStack_228;
        if (pcStack_240 != (char *)0x0) {
          lStack_230 = lStack_4c8;
        }
        pppppuStack_398 = (undefined8 *****)CONCAT62(pppppuStack_398._2_6_,auStack_188[0]);
        uStack_390 = pppppuStack_180;
        uStack_388 = pppppuStack_178;
        pppppuStack_180 = (undefined8 *****)0x0;
        pppppuStack_178 = (undefined8 *****)0x0;
        pppppuStack_380 = pppppuStack_170;
        pppppuStack_170 = (undefined8 *****)0x0;
        uStack_370 = CONCAT62(uStack_370._2_6_,uStack_160);
        pppppuStack_378 = uStack_168;
        if (ppppppuStack_228 == (undefined8 ******)0x0) {
          ppppppuVar41 = (undefined8 ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
          if (ppppppuVar41 == (undefined8 ******)0x0) {
            func_0x0eec74c0(0x30,0);
          }
          ppppppuVar20 = ppppppuStack_228;
          *(undefined2 *)ppppppuVar41 = pppppuStack_398._0_2_;
          ppppppuVar41[1] = uStack_390;
          ppppppuVar41[2] = uStack_388;
          uStack_390 = (undefined8 *****)0x0;
          uStack_388 = (undefined8 *****)0x0;
          ppppppuVar41[3] = pppppuStack_380;
          pppppuStack_380 = (undefined8 *****)0x0;
          *(undefined2 *)(ppppppuVar41 + 5) = (undefined2)uStack_370;
          ppppppuVar41[4] = pppppuStack_378;
          if (ppppppuStack_228 != (undefined8 ******)0x0) {
            pppppuVar42 = ppppppuStack_228[2];
            ppppppuStack_228[1] = (undefined8 *****)0x0;
            ppppppuStack_228[2] = (undefined8 *****)0x0;
            if (pppppuVar42 != (undefined8 *****)0x0) {
              LOCK();
              pppppuVar43 = pppppuVar42 + 1;
              ppppuVar23 = *pppppuVar43;
              *pppppuVar43 = (undefined8 ****)((long)*pppppuVar43 + -1);
              UNLOCK();
              if (ppppuVar23 == (undefined8 ****)0x0) {
                ppppppuStack_228 = ppppppuVar41;
                (*(code *)(*pppppuVar42)[2])(pppppuVar42);
                func_0x0412c2d0(pppppuVar42);
                pppppuVar42 = ppppppuVar20[2];
                ppppppuVar20[3] = (undefined8 *****)0x0;
              }
              else {
                pppppuVar42 = ppppppuStack_228[2];
                ppppppuStack_228[3] = (undefined8 *****)0x0;
                ppppppuStack_228 = ppppppuVar41;
              }
              ppppppuVar41 = ppppppuStack_228;
              if (pppppuVar42 != (undefined8 *****)0x0) {
                LOCK();
                pppppuVar43 = pppppuVar42 + 1;
                ppppuVar23 = *pppppuVar43;
                *pppppuVar43 = (undefined8 ****)((long)*pppppuVar43 + -1);
                UNLOCK();
                if (ppppuVar23 == (undefined8 ****)0x0) {
                  (*(code *)(*pppppuVar42)[2])(pppppuVar42);
                  func_0x0412c2d0(pppppuVar42);
                  ppppppuVar41 = ppppppuStack_228;
                }
              }
            }
            ppppppuStack_228 = ppppppuVar41;
            func_0x0412a280(ppppppuVar20,0x30);
            ppppppuVar41 = ppppppuStack_228;
          }
        }
        else {
          *(undefined2 *)ppppppuStack_228 = auStack_188[0];
          if (ppppppuStack_228 != &pppppuStack_398) {
            pppppuVar42 = ppppppuStack_228[2];
            ppppppuStack_228[1] = (undefined8 *****)0x0;
            ppppppuStack_228[2] = (undefined8 *****)0x0;
            if (pppppuVar42 != (undefined8 *****)0x0) {
              LOCK();
              pppppuVar43 = pppppuVar42 + 1;
              ppppuVar23 = *pppppuVar43;
              *pppppuVar43 = (undefined8 ****)((long)*pppppuVar43 + -1);
              UNLOCK();
              if (ppppuVar23 == (undefined8 ****)0x0) {
                (*(code *)(*pppppuVar42)[2])(pppppuVar42);
                func_0x0412c2d0(pppppuVar42);
              }
            }
            ppppppuVar41[3] = (undefined8 *****)0x0;
            uVar38 = (undefined4)uStack_390;
            uVar6 = uStack_390._4_4_;
            uVar7 = (undefined4)uStack_388;
            uVar12 = uStack_388._4_4_;
            uStack_390 = (undefined8 *****)0x0;
            uStack_388 = (undefined8 *****)0x0;
            pppppuVar42 = ppppppuVar41[2];
            *(undefined4 *)(ppppppuVar41 + 1) = uVar38;
            *(undefined4 *)((long)ppppppuVar41 + 0xc) = uVar6;
            *(undefined4 *)(ppppppuVar41 + 2) = uVar7;
            *(undefined4 *)((long)ppppppuVar41 + 0x14) = uVar12;
            if (pppppuVar42 != (undefined8 *****)0x0) {
              LOCK();
              pppppuVar43 = pppppuVar42 + 1;
              ppppuVar23 = *pppppuVar43;
              *pppppuVar43 = (undefined8 ****)((long)*pppppuVar43 + -1);
              UNLOCK();
              if (ppppuVar23 == (undefined8 ****)0x0) {
                (*(code *)(*pppppuVar42)[2])(pppppuVar42);
                func_0x0412c2d0(pppppuVar42);
              }
            }
            ppppppuVar41[3] = pppppuStack_380;
            pppppuStack_380 = (undefined8 *****)0x0;
          }
          *(undefined2 *)(ppppppuVar41 + 5) = (undefined2)uStack_370;
          ppppppuVar41[4] = pppppuStack_378;
          ppppppuVar41 = ppppppuStack_228;
        }
        ppppppuStack_228 = ppppppuVar41;
        pppppuVar42 = uStack_388;
        uStack_390 = (undefined8 *****)0x0;
        uStack_388 = (undefined8 *****)0x0;
        if (pppppuVar42 == (undefined8 *****)0x0) {
          pppppuStack_380 = (undefined8 *****)0x0;
        }
        else {
          LOCK();
          pppppuVar43 = pppppuVar42 + 1;
          ppppuVar23 = *pppppuVar43;
          *pppppuVar43 = (undefined8 ****)((long)*pppppuVar43 + -1);
          UNLOCK();
          if (ppppuVar23 == (undefined8 ****)0x0) {
            (*(code *)(*pppppuVar42)[2])(pppppuVar42,&UNK_0f3e59c0);
            func_0x0412c2d0(pppppuVar42);
            pppppuVar42 = uStack_388;
            pppppuStack_380 = (undefined8 *****)0x0;
            if (uStack_388 != (undefined8 *****)0x0) {
              pppppuStack_380 = (undefined8 *****)0x0;
              LOCK();
              pppppuVar43 = uStack_388 + 1;
              ppppuVar23 = *pppppuVar43;
              *pppppuVar43 = (undefined8 ****)((long)*pppppuVar43 + -1);
              UNLOCK();
              if (ppppuVar23 == (undefined8 ****)0x0) {
                (*(code *)(*uStack_388)[2])(uStack_388,&UNK_0f3e59c0);
                func_0x0412c2d0(pppppuVar42);
              }
            }
          }
          else {
            pppppuStack_380 = (undefined8 *****)0x0;
          }
        }
        if (pppppuStack_220 == (undefined8 *****)0x0) {
          pppppuVar42 = (undefined8 *****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
          if (pppppuVar42 == (undefined8 *****)0x0) {
            func_0x0eec74c0(8,0);
          }
          *pppppuVar42 = (undefined8 ****)0x0;
          pppppuStack_220 = pppppuVar42;
        }
        else {
          *pppppuStack_220 = (undefined8 ****)0x0;
        }
        func_0x05d54750(&pppppuStack_508,&UNK_0f3e59c0);
        if (((pcStack_240 == (char *)0x0) || (*pcStack_240 == '\0')) &&
           (cVar13 = func_0x0eeddcf0(&UNK_013c6966,&UNK_01259d39,0xf5,&UNK_01259d48,&UNK_0131bdfb),
           cVar13 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        pppppuStack_210 = pppppuStack_508;
        if (((ulong)pppppuStack_208 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,((ulong)pppppuStack_208 & 0xff00ffffffffffff) - 8);
        }
        pppppuStack_208 = (undefined8 *****)0x0;
        pppppuVar42 = pppppuStack_500;
        if (((ulong)pppppuStack_500 & 0x80000000000000) != 0) {
          uVar34 = (ulong)pppppuStack_500 & 0xff00ffffffffffff;
          lVar18 = *(long *)(uVar34 - 8);
          lVar17 = lVar18 + 9;
          plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
          if (lVar17 != 0 && plVar16 == (long *)0x0) {
            func_0x0eec74c0(lVar17,8);
          }
          *plVar16 = lVar18;
          memcpy(plVar16 + 1,uVar34,lVar18);
          *(undefined1 *)((long)plVar16 + lVar18 + 8) = 0;
          pppppuVar42 = (undefined8 *****)
                        ((ulong)(plVar16 + 1) & 0xff00ffffffffffff | 0x80000000000000);
        }
        pppppuStack_208 = pppppuVar42;
        if (((ulong)pppppuStack_200 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,((ulong)pppppuStack_200 & 0xff00ffffffffffff) - 8);
        }
        pppppuStack_200 = (undefined8 *****)0x0;
        pppppuVar42 = pppppuStack_4f8;
        if (((ulong)pppppuStack_4f8 & 0x80000000000000) != 0) {
          uVar34 = (ulong)pppppuStack_4f8 & 0xff00ffffffffffff;
          lVar18 = *(long *)(uVar34 - 8);
          lVar17 = lVar18 + 9;
          plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
          if (lVar17 != 0 && plVar16 == (long *)0x0) {
            func_0x0eec74c0(lVar17,8);
          }
          *plVar16 = lVar18;
          memcpy(plVar16 + 1,uVar34,lVar18);
          *(undefined1 *)((long)plVar16 + lVar18 + 8) = 0;
          pppppuVar42 = (undefined8 *****)
                        ((ulong)(plVar16 + 1) & 0xff00ffffffffffff | 0x80000000000000);
        }
        lVar17 = lStack_230;
        plVar16 = plStack_238;
        pcVar37 = pcStack_240;
        ppppppuStack_608 = &pppppuStack_2e8;
        ppppppuStack_600 = &ppppppuStack_258;
        pppppuStack_5f8 = (undefined8 *****)pcStack_240;
        uStack_5f0 = (undefined8 *****)plStack_238;
        if (plStack_238 != (long *)0x0) {
          LOCK();
          *(long *)((long)plStack_238 + 8U) = *(long *)((long)plStack_238 + 8U) + 1;
          UNLOCK();
        }
        pppppuStack_5e8 = (undefined8 *****)lStack_230;
        pppppuStack_200 = pppppuVar42;
        if ((ppppppuStack_228 == (undefined8 ******)0x0) &&
           (cVar13 = func_0x0eeddcf0(&UNK_013ba24d,&UNK_0143b8d9,0xd8,&UNK_01259d48,&UNK_011fef2e),
           cVar13 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        ppppppuStack_5e0 = ppppppuStack_228;
        if (pppppuStack_220 == (undefined8 *****)0x0) {
          pppppuVar42 = (undefined8 *****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
          if (pppppuVar42 == (undefined8 *****)0x0) {
            func_0x0eec74c0(8,0);
          }
          *pppppuVar42 = (undefined8 ****)0x0;
          pppppuStack_220 = pppppuVar42;
        }
        pppppuStack_7b0 = &pppppuStack_210;
        ppppppuStack_7e8 = ppppppuStack_608;
        ppppppuStack_7e0 = ppppppuStack_600;
        pppppuStack_7d8 = (undefined8 *****)pcVar37;
        uStack_7d0 = (ulong)plVar16;
        pppppuStack_5f8 = (undefined8 *****)0x0;
        uStack_5f0 = (undefined8 *****)0x0;
        uStack_7c8 = lVar17;
        pppppuStack_5e8 = (undefined8 *****)0x0;
        ppppppuStack_7c0 = ppppppuStack_5e0;
        uStack_7a8 = pppppuStack_508;
        pppppuStack_7a0 = (undefined8 *****)0x0;
        pppppuVar42 = pppppuStack_500;
        pppppuStack_7b8 = pppppuStack_220;
        pppppuStack_5d8 = pppppuStack_220;
        pppppuStack_5d0 = pppppuStack_7b0;
        if (((ulong)pppppuStack_500 & 0x80000000000000) != 0) {
          uVar34 = (ulong)pppppuStack_500 & 0xff00ffffffffffff;
          lVar18 = *(long *)(uVar34 - 8);
          lVar17 = lVar18 + 9;
          plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
          if (lVar17 != 0 && plVar16 == (long *)0x0) {
            func_0x0eec74c0(lVar17,8);
          }
          *plVar16 = lVar18;
          memcpy(plVar16 + 1,uVar34,lVar18);
          *(undefined1 *)((long)plVar16 + lVar18 + 8) = 0;
          pppppuVar42 = (undefined8 *****)
                        ((ulong)(plVar16 + 1) & 0xff00ffffffffffff | 0x80000000000000);
        }
        pppppuStack_798 = (undefined8 *****)0x0;
        pppppuVar43 = pppppuStack_4f8;
        pppppuStack_7a0 = pppppuVar42;
        if (((ulong)pppppuStack_4f8 & 0x80000000000000) != 0) {
          uVar34 = (ulong)pppppuStack_4f8 & 0xff00ffffffffffff;
          lVar18 = *(long *)(uVar34 - 8);
          lVar17 = lVar18 + 9;
          plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
          if (lVar17 != 0 && plVar16 == (long *)0x0) {
            func_0x0eec74c0(lVar17,8);
          }
          *plVar16 = lVar18;
          memcpy(plVar16 + 1,uVar34,lVar18);
          *(undefined1 *)((long)plVar16 + lVar18 + 8) = 0;
          pppppuVar43 = (undefined8 *****)
                        ((ulong)(plVar16 + 1) & 0xff00ffffffffffff | 0x80000000000000);
        }
        pppppuVar42 = uStack_758;
        ppppppuVar20 = ppppppuStack_7e0;
        ppppppuVar41 = ppppppuStack_7e8;
        pppppuStack_768 = (undefined8 *****)0x0;
        uStack_758 = (undefined8 *****)CONCAT71(uStack_758._1_7_,1);
        uStack_758._5_3_ = SUB83(pppppuVar42,5);
        uStack_758._0_5_ = CONCAT14(1,CONCAT22(0xfffc,(undefined2)uStack_758));
        pppppuStack_808 = *ppppppuStack_7e0;
        pppppuVar42 = ppppppuStack_7e0[1];
        pppppuStack_798 = pppppuVar43;
        if (((ulong)pppppuVar42 & 0x80000000000000) != 0) {
          lVar18 = *(long *)(((ulong)pppppuVar42 & 0xff00ffffffffffff) - 8);
          lVar17 = lVar18 + 9;
          plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
          if (lVar17 != 0 && plVar16 == (long *)0x0) {
            func_0x0eec74c0(lVar17,8);
          }
          *plVar16 = lVar18;
          memcpy(plVar16 + 1,(ulong)pppppuVar42 & 0xff00ffffffffffff,lVar18);
          *(undefined1 *)((long)plVar16 + lVar18 + 8) = 0;
          pppppuVar42 = (undefined8 *****)
                        ((ulong)(plVar16 + 1) & 0xff00ffffffffffff | 0x80000000000000);
        }
        pppppuStack_7f8 = (undefined8 *****)0x0;
        pppppuVar43 = ppppppuVar20[2];
        pppppuStack_800 = pppppuVar42;
        if (((ulong)pppppuVar43 & 0x80000000000000) != 0) {
          lVar18 = *(long *)(((ulong)pppppuVar43 & 0xff00ffffffffffff) - 8);
          lVar17 = lVar18 + 9;
          plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
          if (lVar17 != 0 && plVar16 == (long *)0x0) {
            func_0x0eec74c0(lVar17,8);
          }
          *plVar16 = lVar18;
          memcpy(plVar16 + 1,(ulong)pppppuVar43 & 0xff00ffffffffffff,lVar18);
          *(undefined1 *)((long)plVar16 + lVar18 + 8) = 0;
          pppppuVar43 = (undefined8 *****)
                        ((ulong)(plVar16 + 1) & 0xff00ffffffffffff | 0x80000000000000);
        }
        ppppppuVar25 = ppppppuStack_7e0;
        uVar34 = (ulong)pppppuStack_7a0 & 0x80000000000000;
        uVar5 = (ushort)((ulong)pppppuStack_7a0 >> 0x30);
        pppppuStack_7f8 = pppppuVar43;
        if (uVar34 == 0) {
          if (((ulong)pppppuStack_7a0 & 0x7f000000000000) == 0) goto LAB_0c923420;
          uVar30 = (ulong)(uVar5 & 0x7f);
LAB_0c9233c9:
          if (((uVar30 != 4) ||
              (*(int *)((ulong)pppppuStack_7a0 & 0xff00ffffffffffff) != 0x61746562)) ||
             (((short)uStack_7a8 != 9999 ||
              ((uStack_7a8._2_2_ != 9999 || (uStack_7a8._4_2_ != 9999)))))) goto LAB_0c923420;
LAB_0c923660:
          if (uVar34 == 0) {
            if (((ulong)pppppuStack_7a0 & 0x7f000000000000) != 0) {
              uVar30 = (ulong)(uVar5 & 0x7f);
LAB_0c9236ad:
              if (((uVar30 == 4) &&
                  (piVar45 = (int *)((ulong)pppppuStack_7a0 & 0xff00ffffffffffff),
                  *piVar45 == 0x61746562)) &&
                 (((short)uStack_7a8 == 9999 &&
                  ((uStack_7a8._2_2_ == 9999 && (uStack_7a8._4_2_ == 9999)))))) {
                pppppuStack_808 = uStack_7a8;
                if (((ulong)pppppuStack_800 & 0x80000000000000) != 0) {
                  (**(code **)(_DAT_0f5463b0 + 0x28))
                            (&DAT_0f5463b0,((ulong)pppppuStack_800 & 0xff00ffffffffffff) - 8);
                  piVar45 = (int *)((ulong)pppppuStack_7a0 & 0xff00ffffffffffff);
                  uVar34 = (ulong)pppppuStack_7a0 & 0x80000000000000;
                }
                pppppuStack_800 = (undefined8 *****)0x0;
                pppppuVar42 = pppppuStack_7a0;
                if (uVar34 != 0) {
                  lVar18 = *(long *)(piVar45 + -2);
                  lVar17 = lVar18 + 9;
                  plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
                  if (lVar17 != 0 && plVar16 == (long *)0x0) {
                    func_0x0eec74c0(lVar17,8);
                  }
                  *plVar16 = lVar18;
                  memcpy(plVar16 + 1,piVar45,lVar18);
                  *(undefined1 *)((long)plVar16 + lVar18 + 8) = 0;
                  pppppuVar42 = (undefined8 *****)
                                ((ulong)(plVar16 + 1) & 0xff00ffffffffffff | 0x80000000000000);
                }
                pppppuStack_800 = pppppuVar42;
                if (((ulong)pppppuStack_7f8 & 0x80000000000000) != 0) {
                  (**(code **)(_DAT_0f5463b0 + 0x28))
                            (&DAT_0f5463b0,((ulong)pppppuStack_7f8 & 0xff00ffffffffffff) - 8);
                }
                pppppuStack_7f8 = (undefined8 *****)0x0;
                pppppuVar43 = pppppuStack_798;
                if (((ulong)pppppuStack_798 & 0x80000000000000) != 0) {
                  uVar34 = (ulong)pppppuStack_798 & 0xff00ffffffffffff;
                  lVar18 = *(long *)(uVar34 - 8);
                  lVar17 = lVar18 + 9;
                  plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
                  if (lVar17 != 0 && plVar16 == (long *)0x0) {
                    func_0x0eec74c0(lVar17,8);
                  }
                  goto LAB_0c92389e;
                }
              }
            }
          }
          else {
            uVar30 = *(ulong *)(((ulong)pppppuStack_7a0 & 0xff00ffffffffffff) - 8);
            if (uVar30 != 0) goto LAB_0c9236ad;
          }
        }
        else {
          uVar30 = *(ulong *)(((ulong)pppppuStack_7a0 & 0xff00ffffffffffff) - 8);
          if (uVar30 != 0) goto LAB_0c9233c9;
LAB_0c923420:
          pppppuVar42 = ppppppuVar20[1];
          if (((ulong)pppppuVar42 & 0x80000000000000) != 0) {
            uVar30 = *(ulong *)(((ulong)pppppuVar42 & 0xff00ffffffffffff) - 8);
            if (uVar30 != 0) goto LAB_0c92347d;
            goto LAB_0c923660;
          }
          if (((ulong)pppppuVar42 & 0x7f000000000000) == 0) goto LAB_0c923660;
          uVar30 = (ulong)((ushort)((ulong)pppppuVar42 >> 0x30) & 0x7f);
LAB_0c92347d:
          if ((((uVar30 != 4) || (*(int *)((ulong)pppppuVar42 & 0xff00ffffffffffff) != 0x61746562))
              || (*(short *)ppppppuVar20 != 9999)) ||
             ((*(short *)((long)ppppppuVar20 + 2) != 9999 ||
              (*(short *)((long)ppppppuVar20 + 4) != 9999)))) goto LAB_0c923660;
          pppppuStack_808 = *ppppppuStack_7e0;
          if (((ulong)pppppuStack_800 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)pppppuStack_800 & 0xff00ffffffffffff) - 8);
          }
          pppppuStack_800 = (undefined8 *****)0x0;
          pppppuVar42 = ppppppuVar25[1];
          if (((ulong)pppppuVar42 & 0x80000000000000) != 0) {
            lVar18 = *(long *)(((ulong)pppppuVar42 & 0xff00ffffffffffff) - 8);
            lVar17 = lVar18 + 9;
            plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
            if (lVar17 != 0 && plVar16 == (long *)0x0) {
              func_0x0eec74c0(lVar17,8);
            }
            *plVar16 = lVar18;
            memcpy(plVar16 + 1,(ulong)pppppuVar42 & 0xff00ffffffffffff,lVar18);
            *(undefined1 *)((long)plVar16 + lVar18 + 8) = 0;
            pppppuVar42 = (undefined8 *****)
                          ((ulong)(plVar16 + 1) & 0xff00ffffffffffff | 0x80000000000000);
          }
          pppppuStack_800 = pppppuVar42;
          if (((ulong)pppppuStack_7f8 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)pppppuStack_7f8 & 0xff00ffffffffffff) - 8);
          }
          pppppuStack_7f8 = (undefined8 *****)0x0;
          pppppuVar43 = ppppppuVar25[2];
          if (((ulong)pppppuVar43 & 0x80000000000000) == 0) goto LAB_0c9238de;
          uVar34 = (ulong)pppppuVar43 & 0xff00ffffffffffff;
          lVar18 = *(long *)(uVar34 - 8);
          lVar17 = lVar18 + 9;
          plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
          if (lVar17 != 0 && plVar16 == (long *)0x0) {
            func_0x0eec74c0(lVar17,8);
          }
LAB_0c92389e:
          *plVar16 = lVar18;
          memcpy(plVar16 + 1,uVar34,lVar18);
          *(undefined1 *)((long)plVar16 + lVar18 + 8) = 0;
          pppppuVar43 = (undefined8 *****)
                        ((ulong)(plVar16 + 1) & 0xff00ffffffffffff | 0x80000000000000);
        }
LAB_0c9238de:
        pppppuStack_7f8 = pppppuVar43;
        func_0x0d6b3300(&pppppuStack_4b8,&uStack_7a8,&pppppuStack_808,1);
        if ((ppppppuStack_7c0 == (undefined8 ******)0x0) &&
           (cVar13 = func_0x0eeddcf0(&UNK_012a4e2b,&UNK_01495f35,0x16d,&UNK_013fa33d,&UNK_011ca25d),
           cVar13 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        if ((pppppuStack_7d8 == (undefined8 *****)0x0) ||
           (ppppppuVar20 = ppppppuStack_7c0, *(char *)pppppuStack_7d8 != '\x01')) {
          cVar13 = func_0x0eeddcf0(&UNK_011b95c6,&UNK_0119d79e,0x16e,&UNK_013fa33d,&UNK_011ca25d);
          ppppppuVar20 = ppppppuStack_7c0;
          if (cVar13 != '\0') {
            _DAT_00000000 = 0xdeadc0de;
          }
          if ((pppppuStack_7d8 == (undefined8 *****)0x0) &&
             (cVar13 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
             cVar13 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
        }
        if ((*(char *)pppppuStack_7d8 == '\0') &&
           (cVar13 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e),
           cVar13 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        lVar17 = uStack_7c8;
        pppppuVar42 = (undefined8 *****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
        if (pppppuVar42 == (undefined8 *****)0x0) {
          func_0x0eec74c0(0x80,0);
        }
        pppppuStack_d8 = uStack_7a8;
        pppppuStack_7f0 = uStack_7a8;
        pppppuVar43 = pppppuStack_7a0;
        ppppppuStack_510 = ppppppuVar20;
        if (((ulong)pppppuStack_7a0 & 0x80000000000000) != 0) {
          uVar34 = (ulong)pppppuStack_7a0 & 0xff00ffffffffffff;
          lVar4 = *(long *)(uVar34 - 8);
          lVar18 = lVar4 + 9;
          plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar18,8);
          if (lVar18 != 0 && plVar16 == (long *)0x0) {
            func_0x0eec74c0(lVar18,8);
          }
          *plVar16 = lVar4;
          memcpy(plVar16 + 1,uVar34,lVar4);
          *(undefined1 *)((long)plVar16 + lVar4 + 8) = 0;
          pppppuVar43 = (undefined8 *****)
                        ((ulong)(plVar16 + 1) & 0xff00ffffffffffff | 0x80000000000000);
        }
        uStack_c8 = 0;
        pppppuVar44 = pppppuStack_798;
        if (((ulong)pppppuStack_798 & 0x80000000000000) != 0) {
          uVar34 = (ulong)pppppuStack_798 & 0xff00ffffffffffff;
          lVar4 = *(long *)(uVar34 - 8);
          lVar18 = lVar4 + 9;
          pppppuStack_d0 = pppppuVar43;
          plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar18,8);
          if (lVar18 != 0 && plVar16 == (long *)0x0) {
            func_0x0eec74c0(lVar18,8);
          }
          *plVar16 = lVar4;
          memcpy(plVar16 + 1,uVar34,lVar4);
          *(undefined1 *)((long)plVar16 + lVar4 + 8) = 0;
          pppppuVar44 = (undefined8 *****)
                        ((ulong)(plVar16 + 1) & 0xff00ffffffffffff | 0x80000000000000);
        }
        ppppppuStack_5e0 = (undefined8 ******)pppppuStack_490;
        pppppuStack_5e8 = pppppuStack_498;
        pppppuStack_5f8 = pppppuStack_4a8;
        ppppppuStack_600 = (undefined8 ******)pppppuStack_4b0;
        ppppuStack_6a8 = (undefined8 ****)CONCAT62(ppppuStack_6a8._2_6_,pppppuStack_488._0_2_);
        uVar9 = uStack_758._2_2_;
        pppppuStack_d0 = (undefined8 *****)0x0;
        uStack_c8 = 0;
        pppppuStack_6d8 = pppppuStack_4b8;
        pppppuStack_4b0 = (undefined8 *****)0x0;
        pppppuStack_4a8 = (undefined8 *****)0x0;
        ppppppuStack_608 = (undefined8 ******)pppppuStack_4b8;
        pppppuStack_6d0 = (undefined8 *****)0x0;
        pppppuStack_6c8 = (undefined8 *****)0x0;
        ppppuStack_6c0 = (undefined8 ****)CONCAT44(uStack_49c,uStack_4a0);
        uStack_5f0 = (undefined8 *****)CONCAT44(uStack_49c,uStack_4a0);
        uStack_6b8 = (undefined8 *****)0x0;
        pppppuStack_498 = (undefined8 *****)0x0;
        pppppuStack_490 = (undefined8 *****)0x0;
        ppppuStack_6b0 = (undefined8 ****)0x0;
        pppppuStack_5d8 = (undefined8 *****)CONCAT62(pppppuStack_5d8._2_6_,pppppuStack_488._0_2_);
        pppppuStack_408 = pppppuStack_7f0;
        pppppuStack_400 = pppppuVar43;
        pppppuStack_3f8 = pppppuVar44;
        func_0x0d6a8a30(pppppuVar42,lVar17,&pppppuStack_408,&ppppppuStack_608);
        if (((ulong)ppppppuStack_5e0 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,((ulong)ppppppuStack_5e0 & 0xff00ffffffffffff) - 8);
        }
        ppppppuStack_5e0 = (undefined8 ******)0x0;
        if (((ulong)pppppuStack_5e8 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,((ulong)pppppuStack_5e8 & 0xff00ffffffffffff) - 8);
        }
        pppppuStack_5e8 = (undefined8 *****)0x0;
        if (((ulong)pppppuStack_5f8 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,((ulong)pppppuStack_5f8 & 0xff00ffffffffffff) - 8);
        }
        pppppuStack_5f8 = (undefined8 *****)0x0;
        if (((ulong)ppppppuStack_600 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,((ulong)ppppppuStack_600 & 0xff00ffffffffffff) - 8);
        }
        ppppppuStack_600 = (undefined8 ******)0x0;
        if (((ulong)pppppuStack_3f8 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,((ulong)pppppuStack_3f8 & 0xff00ffffffffffff) - 8);
        }
        pppppuStack_3f8 = (undefined8 *****)0x0;
        if (((ulong)pppppuStack_400 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,((ulong)pppppuStack_400 & 0xff00ffffffffffff) - 8);
        }
        *pppppuVar42 = (undefined8 ****)&UNK_0f3e5918;
        pppppuVar42[0xe] = ppppppuStack_510;
        *(undefined2 *)(pppppuVar42 + 0xf) = uVar9;
        *(undefined1 *)((long)pppppuVar42 + 0x7a) = 1;
        ppppppuStack_608 = (undefined8 ******)pppppuVar42;
        if (((ulong)pppppuStack_490 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,((ulong)pppppuStack_490 & 0xff00ffffffffffff) - 8);
        }
        pppppuStack_490 = (undefined8 *****)0x0;
        if (((ulong)pppppuStack_498 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,((ulong)pppppuStack_498 & 0xff00ffffffffffff) - 8);
        }
        pppppuStack_498 = (undefined8 *****)0x0;
        if (((ulong)pppppuStack_4a8 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,((ulong)pppppuStack_4a8 & 0xff00ffffffffffff) - 8);
        }
        pppppuStack_4a8 = (undefined8 *****)0x0;
        if (((ulong)pppppuStack_4b0 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,((ulong)pppppuStack_4b0 & 0xff00ffffffffffff) - 8);
        }
        if (((ulong)pppppuStack_7f8 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,((ulong)pppppuStack_7f8 & 0xff00ffffffffffff) - 8);
        }
        pppppuStack_7f8 = (undefined8 *****)0x0;
        if (((ulong)pppppuStack_800 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,((ulong)pppppuStack_800 & 0xff00ffffffffffff) - 8);
        }
        pppppuVar43 = *ppppppuVar41;
        pppppuVar44 = ppppppuVar41[1];
        if (pppppuVar43 != pppppuVar44) {
          do {
            cVar13 = FUN_04fa7a10(*pppppuVar43 + 4,pppppuVar42 + 7);
            if (cVar13 == '\0') break;
            pppppuVar43 = pppppuVar43 + 1;
          } while (pppppuVar43 != pppppuVar44);
        }
        func_0x0d6af860(ppppppuVar41,pppppuVar43,&ppppppuStack_608);
        ppppppuVar41 = ppppppuStack_608;
        ppppppuStack_608 = (undefined8 ******)0x0;
        if (ppppppuVar41 != (undefined8 ******)0x0) {
          (*(code *)(*ppppppuVar41)[1])();
        }
        uStack_758 = (undefined8 *****)((ulong)uStack_758 & 0xffffffffffffff00);
        func_0x0c939c00(&ppppppuStack_7e8);
        if (((ulong)pppppuStack_4f8 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,((ulong)pppppuStack_4f8 & 0xff00ffffffffffff) - 8);
        }
        pppppuStack_4f8 = (undefined8 *****)0x0;
        if (((ulong)pppppuStack_500 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,((ulong)pppppuStack_500 & 0xff00ffffffffffff) - 8);
        }
        pppppuVar42 = pppppuStack_178;
        pppppuStack_180 = (undefined8 *****)0x0;
        pppppuStack_178 = (undefined8 *****)0x0;
        if (pppppuVar42 != (undefined8 *****)0x0) {
          LOCK();
          plVar16 = (long *)(pppppuVar42 + 1);
          lVar17 = *plVar16;
          *plVar16 = *plVar16 + -1;
          UNLOCK();
          if (lVar17 == 0) {
            (**(code **)((long)*pppppuVar42 + 0x10))(pppppuVar42);
            func_0x0412c2d0(pppppuVar42);
            pppppuVar42 = pppppuStack_178;
            pppppuStack_170 = (undefined8 *****)0x0;
            if (pppppuStack_178 != (undefined8 *****)0x0) {
              pppppuStack_170 = (undefined8 *****)0x0;
              LOCK();
              plVar16 = (long *)(pppppuStack_178 + 1);
              lVar17 = *plVar16;
              *plVar16 = *plVar16 + -1;
              UNLOCK();
              if (lVar17 == 0) {
                (**(code **)((long)*pppppuStack_178 + 0x10))(pppppuStack_178);
                func_0x0412c2d0(pppppuVar42);
              }
            }
          }
          else {
            pppppuStack_170 = (undefined8 *****)0x0;
          }
        }
        plVar16 = plStack_1a8;
        uStack_1b0 = 0;
        plStack_1a8 = (long *)0x0;
        if (plVar16 == (long *)0x0) {
          uStack_1a0 = 0;
        }
        else {
          LOCK();
          plVar1 = plVar16 + 1;
          lVar17 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar17 == 0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
            func_0x0412c2d0(plVar16);
            plVar16 = plStack_1a8;
            uStack_1a0 = 0;
            if (plStack_1a8 != (long *)0x0) {
              uStack_1a0 = 0;
              LOCK();
              plVar1 = plStack_1a8 + 1;
              lVar17 = *plVar1;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (lVar17 == 0) {
                (**(code **)(*plStack_1a8 + 0x10))(plStack_1a8);
                func_0x0412c2d0(plVar16);
              }
            }
          }
          else {
            uStack_1a0 = 0;
          }
        }
        uStack_4e8 = uStack_628;
        uStack_4e0 = uStack_620;
        uStack_4d8 = uStack_618;
        uStack_628 = 0;
        uStack_620 = 0;
        uStack_618 = 0;
        func_0x0d686f30(&ppppppuStack_7e8,&UNK_011fef0b,0x22,&pppppuStack_210,&uStack_4e8);
        pppppuStack_808 = (undefined8 *****)0x0;
        pppppuStack_800 = (undefined8 *****)0x0;
        pppppuStack_7f8 = (undefined8 *****)0x0;
        func_0x0d6afff0(&pppppuStack_6d8,&pppppuStack_2e8,&ppppppuStack_7e8,&pppppuStack_808,1);
        if (((uStack_6b8._6_1_ == 1) && ((bStack_62c & 1) == 0)) && (plStack_298 != (long *)0x0)) {
          lVar17 = func_0x0417cc60();
          ppppppuVar41 = (undefined8 ******)0x0;
          if (plStack_298 == (long *)0x0) goto LAB_0c926c8a;
          pcVar37 = &cStack_6a0;
          if (cStack_67c != '\x02') {
            pcVar37 = (char *)CONCAT71(uStack_69f,cStack_6a0);
          }
          if (uStack_680 != 0xf54be3e4) {
            pcVar37 = (char *)0x0;
          }
          (**(code **)(*plStack_298 + 0x30))(plStack_298,pcVar37,&pppppuStack_678);
          lVar18 = func_0x0417cc60();
          pppppuStack_6c8 = (undefined8 *****)((double)(lVar18 - lVar17) / _DAT_014f0138);
          ppppuStack_6c0 =
               (undefined8 ****)
               CONCAT71(ppppuStack_6c0._1_7_,(byte)ppppuStack_6c0 & ~bStack_62c & uStack_6b8._6_1_);
        }
        uVar11 = uStack_638;
        uVar10 = uStack_650;
        pppppuVar44 = pppppuStack_668;
        pppppuVar43 = pppppuStack_670;
        pppppuVar42 = pppppuStack_678;
        if (((~uStack_6b8._6_1_ | bStack_62c) & 1) == 0) {
          func_0x05ebb920(&pppppuStack_4b8,&pppppuStack_6d8);
          func_0x05ebb920(auStack_188,&pppppuStack_4b8);
          func_0x05d85c50(&pppppuStack_458);
          if (pppppuStack_468 != (undefined8 *****)0x0) {
            (*(code *)pppppuStack_468)(auStack_480);
          }
          if (((ulong)pppppuStack_488 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)pppppuStack_488 & 0xff00ffffffffffff) - 8);
          }
          pppppuStack_488 = (undefined8 *****)0x0;
          if (((ulong)pppppuStack_490 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)pppppuStack_490 & 0xff00ffffffffffff) - 8);
          }
          pppppuStack_490 = (undefined8 *****)0x0;
        }
        else {
          pppppuStack_678 = (undefined8 *****)0x0;
          pppppuStack_670 = (undefined8 *****)0x0;
          pppppuStack_668 = (undefined8 *****)0x0;
          uStack_3f0 = (undefined4)uStack_660;
          uStack_3ec = uStack_660._4_4_;
          uStack_3e8 = (undefined4)uStack_658;
          uStack_3e4 = uStack_658._4_4_;
          uStack_660 = 0;
          uStack_658 = 0;
          uStack_650 = 0;
          uStack_3d8 = (undefined4)uStack_648;
          uStack_3d4 = uStack_648._4_4_;
          uStack_3d0 = (undefined4)uStack_640;
          uStack_3cc = uStack_640._4_4_;
          uStack_648 = 0;
          uStack_640 = 0;
          uStack_638 = 0;
          bStack_8c = bStack_62c;
          uStack_90 = uStack_630;
          pppppuStack_408 = pppppuVar42;
          pppppuStack_400 = pppppuVar43;
          pppppuStack_3f8 = pppppuVar44;
          pppppuStack_d8 = (undefined8 *****)0x0;
          pppppuStack_d0 = (undefined8 *****)0x0;
          uStack_c8 = 0;
          uStack_3e0 = uVar10;
          uStack_c0 = 0;
          uStack_b8 = 0;
          uStack_b0 = 0;
          uStack_3c8 = uVar11;
          uStack_a8 = 0;
          uStack_a0 = 0;
          uStack_98 = 0;
          bStack_3bc = bStack_62c;
          uStack_3c0 = uStack_630;
          ppppppuStack_608 = (undefined8 ******)0x0;
          ppppppuStack_600 = (undefined8 ******)0x0;
          pppppuStack_5f8 = (undefined8 *****)0x0;
          uStack_5f0._0_1_ = 1;
          pppppuStack_5e8 = (undefined8 *****)0x0;
          ppppppuStack_5e0 = (undefined8 ******)0x0;
          pppppuStack_5d8 = (undefined8 *****)0x0;
          pppppuStack_5c0 = (undefined8 *****)&UNK_0488e0b0;
          pppppuStack_5b8 = (undefined8 *****)0x0;
          pppppuStack_5b0 = (undefined8 *****)CONCAT35(pppppuStack_5b0._5_3_,0x48b5725f);
          pppppuStack_5d0 = (undefined8 *****)0x0;
          pppppuStack_578 = (undefined8 *****)0x0;
          pppppuStack_570 = (undefined8 *****)0x0;
          uStack_588 = 0;
          pppppuStack_580 = (undefined8 *****)0x0;
          pppppuStack_598 = (undefined8 *****)0x0;
          pppppuStack_590 = (undefined8 *****)0x0;
          lStack_5a8 = 0;
          pppppuStack_5a0 = (undefined8 *****)0x0;
          uStack_568 = 0;
          uStack_560 = 0xfefffffc;
          uStack_55c = 0;
          func_0x0c4a4310(&lStack_5a8,&pppppuStack_408);
          uStack_5f0 = (undefined8 *****)((ulong)uStack_5f0._1_7_ << 8);
          func_0x05ebb920(&pppppuStack_398,&ppppppuStack_608);
          func_0x05d85c50(&lStack_5a8);
          if (pppppuStack_5b8 != (undefined8 *****)0x0) {
            (*(code *)pppppuStack_5b8)(&pppppuStack_5d0);
          }
          if (((ulong)pppppuStack_5d8 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)pppppuStack_5d8 & 0xff00ffffffffffff) - 8);
          }
          pppppuStack_5d8 = (undefined8 *****)0x0;
          if (((ulong)ppppppuStack_5e0 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)ppppppuStack_5e0 & 0xff00ffffffffffff) - 8);
          }
          ppppppuStack_5e0 = (undefined8 ******)0x0;
          func_0x05d85c50(&pppppuStack_408);
          func_0x05ebb920(&pppppuStack_4b8,&pppppuStack_398);
          func_0x05ebb920(auStack_188,&pppppuStack_4b8);
          func_0x05d85c50(&pppppuStack_458);
          if (pppppuStack_468 != (undefined8 *****)0x0) {
            (*(code *)pppppuStack_468)(auStack_480);
          }
          if (((ulong)pppppuStack_488 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)pppppuStack_488 & 0xff00ffffffffffff) - 8);
          }
          pppppuStack_488 = (undefined8 *****)0x0;
          if (((ulong)pppppuStack_490 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)pppppuStack_490 & 0xff00ffffffffffff) - 8);
          }
          pppppuStack_490 = (undefined8 *****)0x0;
          func_0x05d85c50(auStack_338);
          if (pcStack_348 != (code *)0x0) {
            (*pcStack_348)(auStack_360);
          }
          if ((uStack_368 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_368 & 0xff00ffffffffffff) - 8)
            ;
          }
          uStack_368 = 0;
          if ((uStack_370 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_370 & 0xff00ffffffffffff) - 8)
            ;
          }
          uStack_370 = 0;
          func_0x05d85c50(&pppppuStack_d8);
        }
        func_0x05d85c50(&pppppuStack_678);
        if (pppppuStack_688 != (undefined8 *****)0x0) {
          (*(code *)pppppuStack_688)(&cStack_6a0);
        }
        if (((ulong)ppppuStack_6a8 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,((ulong)ppppuStack_6a8 & 0xff00ffffffffffff) - 8);
        }
        ppppuStack_6a8 = (undefined8 ****)0x0;
        if (((ulong)ppppuStack_6b0 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,((ulong)ppppuStack_6b0 & 0xff00ffffffffffff) - 8);
        }
        if (((ulong)pppppuStack_7f8 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,((ulong)pppppuStack_7f8 & 0xff00ffffffffffff) - 8);
        }
        pppppuStack_7f8 = (undefined8 *****)0x0;
        if (((ulong)pppppuStack_800 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,((ulong)pppppuStack_800 & 0xff00ffffffffffff) - 8);
        }
        func_0x05d85c50(&ppppuStack_730);
        if ((ulong)uStack_738 != 0xffffffff) {
          (**(code **)(&UNK_0f3e4fd8 + (ulong)uStack_738 * 8))(&ppppppuStack_608,&pppppuStack_798);
        }
        uStack_738 = 0xffffffff;
        if (((ulong)pppppuStack_7b0 & 1) != 0) {
          func_0x0412a280(pppppuStack_7a0,(ulong)pppppuStack_7b0 & 0xfffffffffffffffe);
        }
        if (((ulong)pppppuStack_7b8 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,((ulong)pppppuStack_7b8 & 0xff00ffffffffffff) - 8);
        }
        pppppuStack_7b8 = (undefined8 *****)0x0;
        if (((ulong)ppppppuStack_7c0 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,((ulong)ppppppuStack_7c0 & 0xff00ffffffffffff) - 8);
        }
        ppppppuStack_7c0 = (undefined8 ******)0x0;
        if ((uStack_7d0 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_7d0 & 0xff00ffffffffffff) - 8);
        }
        uStack_7d0 = 0;
        if (((ulong)pppppuStack_7d8 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,((ulong)pppppuStack_7d8 & 0xff00ffffffffffff) - 8);
        }
        pppppuStack_7d8 = (undefined8 *****)0x0;
        if ((uStack_4e8 & 1) != 0) {
          func_0x0412a280(uStack_4d8,uStack_4e8 & 0xfffffffffffffffe);
        }
        if ((uStack_168._6_1_ == '\x01') && ((bStack_dc & 1) == 0)) {
          pppppppuVar29 = pppppppuStack_150 + 2;
          pppppppuVar27 = pppppppuStack_150 + 1;
          pppppppuVar19 = pppppppuStack_150;
          if (cStack_12c == '\x02') {
            pppppppuVar29 = &ppppppuStack_140;
            pppppppuVar27 = &ppppppuStack_148;
            pppppppuVar19 = &pppppppuStack_150;
          }
          bVar47 = iStack_130 != -0xab41c1c;
          if (bVar47) {
            pppppppuVar19 = (undefined8 *******)0x0;
          }
          ppppppuVar20 = *pppppppuVar19;
          if (bVar47) {
            pppppppuVar27 = (undefined8 *******)0x8;
          }
          ppppppuStack_510 = *pppppppuVar27;
          if (bVar47) {
            pppppppuVar29 = (undefined8 *******)0x10;
          }
          ppppppuStack_3a0 = *pppppppuVar29;
          *pppppppuVar19 = (undefined8 ******)0x0;
          pppppppuVar19[1] = (undefined8 ******)0x0;
          pppppppuVar19[2] = (undefined8 ******)0x0;
          ppppppuStack_3b0 = ppppppuVar20;
          ppppppuStack_3a8 = ppppppuStack_510;
          if (ppppppuVar20 != ppppppuStack_510) {
LAB_0c924ad0:
            do {
              uVar8 = uStack_560;
              pppppuStack_7d8 = ppppppuVar20[2];
              ppppppuStack_7e8 = (undefined8 ******)*ppppppuVar20;
              ppppppuStack_7e0 = (undefined8 ******)ppppppuVar20[1];
              *ppppppuVar20 = (undefined8 *****)0x0;
              ppppppuVar20[1] = (undefined8 *****)0x0;
              ppppppuVar20[2] = (undefined8 *****)0x0;
              uVar38 = *(undefined4 *)(ppppppuVar20 + 4);
              pppppuStack_5e8 = (undefined8 *****)CONCAT44(pppppuStack_5e8._4_4_,uVar38);
              pppppuVar43 = pppppuStack_5e8;
              pppppuVar42 = ppppppuVar20[3];
              ppppppuStack_5e0 = (undefined8 ******)((ulong)ppppppuStack_5e0 & 0xffffffffffffff00);
              uStack_560 = uStack_560 & 0xffffff00;
              cVar13 = *(char *)(ppppppuVar20 + 0x15);
              if (cVar13 == '\x01') {
                cStack_5c8 = '\0';
                if (*(char *)(ppppppuVar20 + 8) == '\x01') {
                  ppppppuStack_5e0 = (undefined8 ******)ppppppuVar20[5];
                  pppppuStack_5d8 = ppppppuVar20[6];
                  pppppuStack_5d0 = ppppppuVar20[7];
                  ppppppuVar20[5] = (undefined8 *****)0x0;
                  ppppppuVar20[6] = (undefined8 *****)0x0;
                  ppppppuVar20[7] = (undefined8 *****)0x0;
                  cStack_5c8 = '\x01';
                  lStack_5a8 = (ulong)lStack_5a8._1_7_ << 8;
                  if (*(char *)(ppppppuVar20 + 0xc) != '\x01') goto LAB_0c924b80;
LAB_0c924d20:
                  pppppuStack_5c0 = ppppppuVar20[9];
                  pppppuStack_5b8 = ppppppuVar20[10];
                  pppppuStack_5b0 = ppppppuVar20[0xb];
                  ppppppuVar20[9] = (undefined8 *****)0x0;
                  ppppppuVar20[10] = (undefined8 *****)0x0;
                  ppppppuVar20[0xb] = (undefined8 *****)0x0;
                  lStack_5a8 = CONCAT71(lStack_5a8._1_7_,1);
                  if (*(char *)(ppppppuVar20 + 0x10) != '\x01') goto LAB_0c924b9d;
LAB_0c924d76:
                  pppppuStack_590 = ppppppuVar20[0xf];
                  pppppuStack_5a0 = ppppppuVar20[0xd];
                  pppppuStack_598 = ppppppuVar20[0xe];
                  ppppppuVar20[0xd] = (undefined8 *****)0x0;
                  ppppppuVar20[0xe] = (undefined8 *****)0x0;
                  ppppppuVar20[0xf] = (undefined8 *****)0x0;
                  uStack_588 = CONCAT71((int7)(uStack_588 >> 8),1);
                  cVar3 = *(char *)(ppppppuVar20 + 0x14);
                }
                else {
                  lStack_5a8 = (ulong)lStack_5a8._1_7_ << 8;
                  if (*(char *)(ppppppuVar20 + 0xc) == '\x01') goto LAB_0c924d20;
LAB_0c924b80:
                  pppppuStack_5c0 = (undefined8 *****)((ulong)pppppuStack_5c0 & 0xffffffffffffff00);
                  if (*(char *)(ppppppuVar20 + 0x10) == '\x01') goto LAB_0c924d76;
LAB_0c924b9d:
                  uStack_588 = uStack_588 & 0xffffffffffffff00;
                  pppppuStack_5a0 = (undefined8 *****)((ulong)pppppuStack_5a0 & 0xffffffffffffff00);
                  cVar3 = *(char *)(ppppppuVar20 + 0x14);
                }
                pppppuStack_580 = (undefined8 *****)((ulong)pppppuStack_580 & 0xffffffffffffff00);
                uVar34 = uStack_568 & 0xffffffffffffff00;
                if (cVar3 == '\x01') {
                  pppppuStack_570 = ppppppuVar20[0x13];
                  pppppuStack_580 = ppppppuVar20[0x11];
                  pppppuStack_578 = ppppppuVar20[0x12];
                  ppppppuVar20[0x11] = (undefined8 *****)0x0;
                  ppppppuVar20[0x12] = (undefined8 *****)0x0;
                  ppppppuVar20[0x13] = (undefined8 *****)0x0;
                  uStack_568 = CONCAT71((int7)(uStack_568 >> 8),1);
                  uVar34 = uStack_568;
                }
                uStack_568 = uVar34;
                uStack_560 = CONCAT31(SUB43(uVar8,1),1);
              }
              pppppuVar31 = pppppuStack_590;
              pppppuVar22 = pppppuStack_598;
              pppppuVar44 = pppppuStack_5a0;
              pppppuStack_558 = (undefined8 *****)((ulong)pppppuStack_558 & 0xffffffffffffff00);
              bStack_530 = 0;
              if (*(char *)(ppppppuVar20 + 0x1b) == '\x01') {
                pppppuStack_558 = ppppppuVar20[0x16];
                ppppppuVar20[0x16] = (undefined8 *****)0x0;
                pppppuStack_550 = ppppppuVar20[0x17];
                ppppppuVar20[0x17] = (undefined8 *****)0x0;
                pppppuStack_548 = ppppppuVar20[0x18];
                pppppuStack_540 = ppppppuVar20[0x19];
                uStack_538 = *(undefined4 *)(ppppppuVar20 + 0x1a);
                if (pppppuStack_540 != (undefined8 *****)0x0) {
                  pppppuVar21 = (undefined8 *****)pppppuStack_548[1];
                  if (((ulong)pppppuStack_550 & (long)pppppuStack_550 - 1U) == 0) {
                    pppppuVar21 = (undefined8 *****)
                                  ((ulong)pppppuVar21 & (long)pppppuStack_550 - 1U);
                  }
                  else if (pppppuStack_550 <= pppppuVar21) {
                    if (((ulong)pppppuVar21 | (ulong)pppppuStack_550) >> 0x20 == 0) {
                      pppppuVar21 = (undefined8 *****)
                                    (((ulong)pppppuVar21 & 0xffffffff) %
                                    ((ulong)pppppuStack_550 & 0xffffffff));
                    }
                    else {
                      pppppuVar21 = (undefined8 *****)((ulong)pppppuVar21 % (ulong)pppppuStack_550);
                    }
                  }
                  pppppuStack_558[(long)pppppuVar21] = &pppppuStack_548;
                  ppppppuVar20[0x18] = (undefined8 *****)0x0;
                  ppppppuVar20[0x19] = (undefined8 *****)0x0;
                }
                bStack_530 = 1;
                bVar14 = 1;
              }
              else {
                bVar14 = 0;
              }
              uStack_528 = ppppppuVar20[0x1c];
              uVar34 = (ulong)ppppppuStack_7c0 >> 8;
              ppppppuStack_7c0 = (undefined8 ******)((ulong)ppppppuStack_7c0 & 0xffffffffffffff00);
              pppppuStack_7b8 = (undefined8 *****)((ulong)pppppuStack_7b8 & 0xffffffffffffff00);
              uStack_738 = uStack_738 & 0xffffff00;
              ppppuStack_730 = (undefined8 ****)((ulong)ppppuStack_730 & 0xffffffffffffff00);
              cStack_708 = '\0';
              uStack_700 = uStack_700 & 0xffffff00;
              uStack_6fc = uStack_6fc & 0xffffff00;
              uStack_7d0 = uStack_7d0 & 0xffffffffffffff00;
              ppppppuStack_608 = (undefined8 ******)((ulong)ppppppuStack_7e8 & 0xffffffffffff0000);
              pppppuStack_5e8._0_1_ = (char)uVar38;
              if ((char)pppppuStack_5e8 == '\x01') {
                uStack_5f0._0_1_ = (char)pppppuVar42;
                uStack_5f0._4_4_ = (float)((ulong)pppppuVar42 >> 0x20);
                if ((char)uStack_5f0 == '\x01') {
                  uVar30 = (ulong)(uStack_5f0._4_4_ * _DAT_01198394);
                  uStack_7d0 = uVar30 & 0xffffffff00000000;
                  uVar38 = 1;
                }
                else {
                  if ((char)uStack_5f0 == '\0') {
                    uVar30 = (ulong)(uint)(int)(uStack_5f0._4_4_ * _DAT_011987c0);
                  }
                  else {
                    uVar30 = 0;
                  }
                  uStack_7d0 = 0;
                  uVar38 = 0;
                }
                uStack_7d0 = uVar30 & 0xffffffff | uStack_7d0;
                uStack_7c8 = CONCAT44(uStack_7c8._4_4_,uVar38);
                ppppppuStack_7c0 = (undefined8 ******)CONCAT71((int7)uVar34,1);
              }
              ppppppuStack_600 = ppppppuStack_7e0;
              pppppuStack_5f8 = pppppuStack_7d8;
              uStack_5f0 = pppppuVar42;
              pppppuStack_5e8 = pppppuVar43;
              if (cVar13 != '\0') {
                pppppuStack_4b8 = (undefined8 *****)((ulong)pppppuStack_4b8 & 0xffffffffffffff00);
                uVar8 = uStack_4a0 >> 8;
                uStack_4a0 = uStack_4a0 & 0xffffff00;
                if (cStack_5c8 == '\x01') {
                  pppppuStack_4b8 = ppppppuStack_5e0;
                  pppppuStack_4b0 = pppppuStack_5d8;
                  pppppuStack_4a8 = pppppuStack_5d0;
                  ppppppuStack_5e0 = (undefined8 ******)0x0;
                  pppppuStack_5d8 = (undefined8 *****)0x0;
                  pppppuStack_5d0 = (undefined8 *****)0x0;
                  uStack_4a0 = CONCAT31((int3)uVar8,1);
                  if ((char)lStack_5a8 != '\x01') goto LAB_0c924f3a;
LAB_0c9250fc:
                  pppppuStack_498 = pppppuStack_5c0;
                  pppppuStack_490 = pppppuStack_5b8;
                  pppppuStack_488 = pppppuStack_5b0;
                  pppppuStack_5c0 = (undefined8 *****)0x0;
                  pppppuStack_5b8 = (undefined8 *****)0x0;
                  pppppuStack_5b0 = (undefined8 *****)0x0;
                  auStack_480[0] = 1;
                  if ((char)uStack_588 != '\x01') goto LAB_0c924f58;
LAB_0c925152:
                  pppppuStack_5a0 = (undefined8 *****)0x0;
                  pppppuStack_598 = (undefined8 *****)0x0;
                  pppppuStack_590 = (undefined8 *****)0x0;
                  cStack_460 = '\x01';
                  pppppuStack_468 = pppppuVar31;
                  pppppuStack_478 = pppppuVar44;
                  pppppuStack_470 = pppppuVar22;
                }
                else {
                  if ((char)lStack_5a8 == '\x01') goto LAB_0c9250fc;
LAB_0c924f3a:
                  pppppuStack_498 = (undefined8 *****)((ulong)pppppuStack_498 & 0xffffffffffffff00);
                  auStack_480[0] = 0;
                  if ((char)uStack_588 == '\x01') goto LAB_0c925152;
LAB_0c924f58:
                  pppppuStack_478 = (undefined8 *****)((ulong)pppppuStack_478 & 0xffffffffffffff00);
                  cStack_460 = '\0';
                }
                pppppuStack_458 = (undefined8 *****)((ulong)pppppuStack_458 & 0xffffffffffffff00);
                cStack_440 = (char)uStack_568 == '\x01';
                if ((bool)cStack_440) {
                  pppppuStack_448 = pppppuStack_570;
                  pppppuStack_458 = pppppuStack_580;
                  pppppuStack_450 = pppppuStack_578;
                  pppppuStack_580 = (undefined8 *****)0x0;
                  pppppuStack_578 = (undefined8 *****)0x0;
                  pppppuStack_570 = (undefined8 *****)0x0;
                }
                pppppuStack_6d8 = (undefined8 *****)((ulong)pppppuStack_6d8 & 0xffffffffffffff00);
                ppppuStack_6c0 = (undefined8 ****)((ulong)ppppuStack_6c0 & 0xffffffffffffff00);
                uStack_6b8 = (undefined8 *****)((ulong)uStack_6b8 & 0xffffffffffffff00);
                cStack_6a0 = '\0';
                pppppuStack_698 = (undefined8 *****)((ulong)pppppuStack_698 & 0xffffffffffffff00);
                uStack_680 = uStack_680 & 0xffffff00;
                pppppuStack_678 = (undefined8 *****)((ulong)pppppuStack_678 & 0xffffffffffffff00);
                uStack_660 = uStack_660 & 0xffffffffffffff00;
                func_0x05ec0910(&pppppuStack_6d8,&pppppuStack_4b8);
                func_0x05ec0910(&uStack_6b8,&pppppuStack_498);
                if ((char)uStack_680 == cStack_460) {
                  if ((char)uStack_680 == '\0') {
LAB_0c9251e3:
                    if ((char)uStack_660 == cStack_440) goto LAB_0c9251f8;
                  }
                  else {
                    if (((ulong)pppppuStack_698 & 1) != 0) {
                      func_0x0412a280(pppppuStack_688,(ulong)pppppuStack_698 & 0xfffffffffffffffe);
                    }
                    pppppuStack_688 = pppppuStack_468;
                    pppppuStack_698 = pppppuStack_478;
                    pppppuStack_690 = pppppuStack_470;
                    pppppuStack_478 =
                         (undefined8 *****)((ulong)pppppuStack_478 & 0xffffffffffff0000);
                    if ((char)uStack_660 == cStack_440) goto LAB_0c9251f8;
                  }
LAB_0c9252aa:
                  pppppuVar44 = pppppuStack_448;
                  pppppuVar43 = pppppuStack_450;
                  pppppuVar42 = pppppuStack_458;
                  if ((char)uStack_660 != '\0') {
                    if (((ulong)pppppuStack_678 & 1) != 0) {
                      func_0x0412a280(pppppuStack_668,(ulong)pppppuStack_678 & 0xfffffffffffffffe);
                    }
                    uStack_660 = uStack_660 & 0xffffffffffffff00;
                    goto LAB_0c9252dd;
                  }
                  pppppuStack_458 = (undefined8 *****)0x0;
                  pppppuStack_450 = (undefined8 *****)0x0;
                  pppppuStack_448 = (undefined8 *****)0x0;
                  uStack_660 = CONCAT71(uStack_660._1_7_,1);
                  pppppuStack_678 = pppppuVar42;
                  pppppuStack_670 = pppppuVar43;
                  pppppuStack_668 = pppppuVar44;
joined_r0x0c9252e5:
                  if ((char)uStack_738 != '\x01') goto LAB_0c9253d0;
LAB_0c9252eb:
                  func_0x05ec0910(&pppppuStack_7b8,&pppppuStack_6d8);
                  func_0x05ec0910(&pppppuStack_798,&uStack_6b8);
                  if (cStack_760 == (char)uStack_680) {
                    if (cStack_760 == '\0') {
LAB_0c92569a:
                      if (cStack_740 == (char)uStack_660) goto LAB_0c9256af;
                    }
                    else {
                      if (((ulong)pppppuStack_778 & 1) != 0) {
                        func_0x0412a280(pppppuStack_768,(ulong)pppppuStack_778 & 0xfffffffffffffffe)
                        ;
                      }
                      pppppuStack_768 = pppppuStack_688;
                      pppppuStack_778 = pppppuStack_698;
                      pppppuStack_770 = pppppuStack_690;
                      pppppuStack_698 =
                           (undefined8 *****)((ulong)pppppuStack_698 & 0xffffffffffff0000);
                      if (cStack_740 == (char)uStack_660) goto LAB_0c9256af;
                    }
LAB_0c925744:
                    if (cStack_740 == '\0') {
                      pppppuStack_748 = pppppuStack_668;
                      uStack_758 = pppppuStack_678;
                      pppppuStack_750 = pppppuStack_670;
                      pppppuStack_678 = (undefined8 *****)0x0;
                      pppppuStack_670 = (undefined8 *****)0x0;
                      pppppuStack_668 = (undefined8 *****)0x0;
                      cStack_740 = '\x01';
                    }
                    else {
                      if (((ulong)uStack_758 & 1) != 0) {
                        func_0x0412a280(pppppuStack_748,(ulong)uStack_758 & 0xfffffffffffffffe);
                      }
                      cStack_740 = '\0';
                    }
                  }
                  else {
                    if (cStack_760 != '\0') {
                      if (((ulong)pppppuStack_778 & 1) != 0) {
                        func_0x0412a280(pppppuStack_768,(ulong)pppppuStack_778 & 0xfffffffffffffffe)
                        ;
                      }
                      cStack_760 = '\0';
                      goto LAB_0c92569a;
                    }
                    pppppuStack_768 = pppppuStack_688;
                    pppppuStack_778 = pppppuStack_698;
                    pppppuStack_770 = pppppuStack_690;
                    pppppuStack_698 = (undefined8 *****)0x0;
                    pppppuStack_690 = (undefined8 *****)0x0;
                    pppppuStack_688 = (undefined8 *****)0x0;
                    cStack_760 = '\x01';
                    if (cStack_740 != (char)uStack_660) goto LAB_0c925744;
LAB_0c9256af:
                    if (cStack_740 != '\0') {
                      if (((ulong)uStack_758 & 1) != 0) {
                        func_0x0412a280(pppppuStack_748,(ulong)uStack_758 & 0xfffffffffffffffe);
                      }
                      pppppuStack_748 = pppppuStack_668;
                      uStack_758 = pppppuStack_678;
                      pppppuStack_750 = pppppuStack_670;
                      pppppuStack_678 =
                           (undefined8 *****)((ulong)pppppuStack_678 & 0xffffffffffff0000);
                    }
                  }
                }
                else {
                  if ((char)uStack_680 != '\0') {
                    if (((ulong)pppppuStack_698 & 1) != 0) {
                      func_0x0412a280(pppppuStack_688,(ulong)pppppuStack_698 & 0xfffffffffffffffe);
                    }
                    uStack_680 = uStack_680 & 0xffffff00;
                    goto LAB_0c9251e3;
                  }
                  pppppuStack_688 = pppppuStack_468;
                  pppppuStack_698 = pppppuStack_478;
                  pppppuStack_690 = pppppuStack_470;
                  pppppuStack_478 = (undefined8 *****)0x0;
                  pppppuStack_470 = (undefined8 *****)0x0;
                  pppppuStack_468 = (undefined8 *****)0x0;
                  uStack_680 = CONCAT31(uStack_680._1_3_,1);
                  if ((char)uStack_660 != cStack_440) goto LAB_0c9252aa;
LAB_0c9251f8:
                  if ((char)uStack_660 == '\0') {
LAB_0c9252dd:
                    goto joined_r0x0c9252e5;
                  }
                  if (((ulong)pppppuStack_678 & 1) != 0) {
                    func_0x0412a280(pppppuStack_668,(ulong)pppppuStack_678 & 0xfffffffffffffffe);
                  }
                  pppppuStack_668 = pppppuStack_448;
                  pppppuStack_678 = pppppuStack_458;
                  pppppuStack_670 = pppppuStack_450;
                  pppppuStack_458 = (undefined8 *****)((ulong)pppppuStack_458 & 0xffffffffffff0000);
                  if ((char)uStack_738 == '\x01') goto LAB_0c9252eb;
LAB_0c9253d0:
                  pppppuVar44 = pppppuStack_688;
                  pppppuVar43 = pppppuStack_690;
                  pppppuVar42 = pppppuStack_698;
                  pppppuStack_7b8 = (undefined8 *****)((ulong)pppppuStack_7b8 & 0xffffffffffffff00);
                  uVar34 = (ulong)pppppuStack_7a0 >> 8;
                  pppppuStack_7a0 = (undefined8 *****)((ulong)pppppuStack_7a0 & 0xffffffffffffff00);
                  if ((byte)ppppuStack_6c0 == '\x01') {
                    pppppuStack_7b8 = pppppuStack_6d8;
                    pppppuStack_7b0 = pppppuStack_6d0;
                    uStack_7a8 = pppppuStack_6c8;
                    pppppuStack_6d8 = (undefined8 *****)0x0;
                    pppppuStack_6d0 = (undefined8 *****)0x0;
                    pppppuStack_6c8 = (undefined8 *****)0x0;
                    pppppuStack_7a0 = (undefined8 *****)CONCAT71((int7)uVar34,1);
                    if (cStack_6a0 != '\x01') goto LAB_0c925409;
LAB_0c9255b9:
                    pppppuStack_798 = uStack_6b8;
                    ppppuStack_790 = ppppuStack_6b0;
                    ppppuStack_788 = ppppuStack_6a8;
                    uStack_6b8 = (undefined8 *****)0x0;
                    ppppuStack_6b0 = (undefined8 ****)0x0;
                    ppppuStack_6a8 = (undefined8 ****)0x0;
                    cStack_780 = '\x01';
                    if ((char)uStack_680 != '\x01') goto LAB_0c925427;
LAB_0c925615:
                    pppppuStack_698 = (undefined8 *****)0x0;
                    pppppuStack_690 = (undefined8 *****)0x0;
                    pppppuStack_688 = (undefined8 *****)0x0;
                    cStack_760 = '\x01';
                    pppppuStack_768 = pppppuVar44;
                    pppppuStack_778 = pppppuVar42;
                    pppppuStack_770 = pppppuVar43;
                  }
                  else {
                    if (cStack_6a0 == '\x01') goto LAB_0c9255b9;
LAB_0c925409:
                    pppppuStack_798 =
                         (undefined8 *****)((ulong)pppppuStack_798 & 0xffffffffffffff00);
                    cStack_780 = '\0';
                    if ((char)uStack_680 == '\x01') goto LAB_0c925615;
LAB_0c925427:
                    pppppuStack_778 =
                         (undefined8 *****)((ulong)pppppuStack_778 & 0xffffffffffffff00);
                    cStack_760 = '\0';
                  }
                  uStack_758 = (undefined8 *****)((ulong)uStack_758 & 0xffffffffffffff00);
                  cStack_740 = (char)uStack_660 == '\x01';
                  if ((bool)cStack_740) {
                    pppppuStack_748 = pppppuStack_668;
                    uStack_758 = pppppuStack_678;
                    pppppuStack_750 = pppppuStack_670;
                    pppppuStack_678 = (undefined8 *****)0x0;
                    pppppuStack_670 = (undefined8 *****)0x0;
                    pppppuStack_668 = (undefined8 *****)0x0;
                  }
                  uStack_738 = CONCAT31(uStack_738._1_3_,1);
                }
                func_0x0c92e540(&pppppuStack_6d8);
                func_0x0c92e650(&pppppuStack_4b8);
                bVar14 = bStack_530;
              }
              pppppuVar44 = pppppuStack_540;
              pppppuVar43 = pppppuStack_550;
              pppppuVar42 = pppppuStack_558;
              if ((bVar14 & 1) != 0) {
                pppppuStack_558 = (undefined8 *****)0x0;
                pppppuStack_550 = (undefined8 *****)0x0;
                pppppuStack_398 = pppppuVar42;
                uStack_390 = pppppuVar43;
                uStack_388 = pppppuStack_548;
                pppppuStack_380 = pppppuStack_540;
                pppppuStack_378 = (undefined8 *****)CONCAT44(pppppuStack_378._4_4_,uStack_538);
                if (pppppuStack_540 == (undefined8 *****)0x0) {
                  pppppuVar43 = (undefined8 *****)0x0;
LAB_0c925836:
                  uStack_6b8 = (undefined8 *****)CONCAT44(uStack_6b8._4_4_,0x3f800000);
                  ppppuStack_6c0 = (undefined8 ****)0x0;
                  pppppuStack_6c8 = (undefined8 *****)0x0;
                  pppppuStack_6d0 = (undefined8 *****)0x0;
                  pppppuStack_6d8 = (undefined8 *****)0x0;
                  if (((ulong)pppppuVar43 & (long)pppppuVar43 - 1U) != 0) {
                    pppppuVar43 = (undefined8 *****)FUN_0412c3f0(pppppuVar43,pppppuVar42);
                  }
                  pppppuVar42 = pppppuVar43;
                  if (pppppuVar43 != (undefined8 *****)0x0) goto LAB_0c92584f;
                }
                else {
                  pppppuVar22 = (undefined8 *****)pppppuStack_548[1];
                  if (((ulong)pppppuVar43 & (long)pppppuVar43 - 1U) == 0) {
                    pppppuVar22 = (undefined8 *****)((ulong)pppppuVar22 & (long)pppppuVar43 - 1U);
                  }
                  else if (pppppuVar43 <= pppppuVar22) {
                    if (((ulong)pppppuVar22 | (ulong)pppppuVar43) >> 0x20 == 0) {
                      pppppuVar22 = (undefined8 *****)
                                    (((ulong)pppppuVar22 & 0xffffffff) %
                                    ((ulong)pppppuVar43 & 0xffffffff));
                    }
                    else {
                      pppppuVar22 = (undefined8 *****)((ulong)pppppuVar22 % (ulong)pppppuVar43);
                    }
                  }
                  pppppuVar42[(long)pppppuVar22] = (undefined8 ****)&uStack_388;
                  pppppuStack_548 = (undefined8 *****)0x0;
                  pppppuStack_540 = (undefined8 *****)0x0;
                  pppppuStack_6c8 = (undefined8 *****)0x0;
                  ppppuStack_6c0 = (undefined8 ****)0x0;
                  pppppuStack_6d8 = (undefined8 *****)0x0;
                  pppppuStack_6d0 = (undefined8 *****)0x0;
                  uStack_6b8 = (undefined8 *****)CONCAT44(uStack_6b8._4_4_,0x3f800000);
                  uVar34 = (ulong)(float)pppppuVar44;
                  pppppuVar43 = (undefined8 *****)
                                ((long)((float)pppppuVar44 - _DAT_01198778) & (long)uVar34 >> 0x3f |
                                uVar34);
                  pppppuVar42 = (undefined8 *****)0x2;
                  if (pppppuVar43 != (undefined8 *****)0x1) goto LAB_0c925836;
LAB_0c92584f:
                  func_0x0489a060(&pppppuStack_6d8,pppppuVar42);
                }
                plVar16 = &uStack_388;
                while (pppppuVar42 = pppppuStack_6d8, plVar16 = (long *)*plVar16,
                      plVar16 != (long *)0x0) {
                  func_0x0c92e790(&pppppuStack_6d8,plVar16 + 2,plVar16 + 2,plVar16 + 5);
                }
                if (cStack_708 == '\x01') {
                  if (ppppuStack_718 != (undefined8 ****)0x0) {
                    func_0x04897b30(&ppppuStack_730,pppppuStack_720);
                    pppppuStack_720 = (undefined8 *****)0x0;
                    if (ppppuStack_728 != (undefined8 ****)0x0) {
                      func_0x0eee2dd0(ppppuStack_730,0,(long)ppppuStack_728 << 3);
                    }
                    ppppuStack_718 = (undefined8 ****)0x0;
                  }
                  pppppuVar42 = pppppuStack_6d8;
                  ppppuVar23 = ppppuStack_730;
                  pppppuStack_6d8 = (undefined8 *****)0x0;
                  ppppuStack_730 = pppppuVar42;
                  if (ppppuVar23 != (undefined8 ****)0x0) {
                    func_0x0412a280(ppppuVar23,(long)ppppuStack_728 << 3);
                  }
                  ppppuStack_728 = pppppuStack_6d0;
                  ppppuStack_718 = ppppuStack_6c0;
                  uStack_710 = (undefined4)uStack_6b8;
                  pppppuStack_720 = pppppuStack_6c8;
                  if (ppppuStack_6c0 != (undefined8 ****)0x0) {
                    ppppuVar23 = pppppuStack_6c8[1];
                    if (((ulong)pppppuStack_6d0 & (long)pppppuStack_6d0 - 1U) == 0) {
                      ppppuVar23 = (undefined8 ****)((ulong)ppppuVar23 & (long)pppppuStack_6d0 - 1U)
                      ;
                    }
                    else if (pppppuStack_6d0 <= ppppuVar23) {
                      if (((ulong)ppppuVar23 | (ulong)pppppuStack_6d0) >> 0x20 == 0) {
                        ppppuVar23 = (undefined8 ****)
                                     (((ulong)ppppuVar23 & 0xffffffff) %
                                     ((ulong)pppppuStack_6d0 & 0xffffffff));
                      }
                      else {
                        ppppuVar23 = (undefined8 ****)((ulong)ppppuVar23 % (ulong)pppppuStack_6d0);
                      }
                    }
                    ppppuStack_730[(long)ppppuVar23] = &pppppuStack_720;
                    pppppuStack_6c8 = (undefined8 *****)0x0;
                    ppppuStack_6c0 = (undefined8 ****)0x0;
                  }
                }
                else {
                  pppppuStack_6d8 = (undefined8 *****)0x0;
                  ppppuStack_730 = pppppuVar42;
                  ppppuStack_728 = pppppuStack_6d0;
                  pppppuStack_720 = pppppuStack_6c8;
                  ppppuStack_718 = ppppuStack_6c0;
                  uStack_710 = (undefined4)uStack_6b8;
                  if (ppppuStack_6c0 != (undefined8 ****)0x0) {
                    ppppuVar23 = pppppuStack_6c8[1];
                    if (((ulong)pppppuStack_6d0 & (long)pppppuStack_6d0 - 1U) == 0) {
                      ppppuVar23 = (undefined8 ****)((ulong)ppppuVar23 & (long)pppppuStack_6d0 - 1U)
                      ;
                    }
                    else if (pppppuStack_6d0 <= ppppuVar23) {
                      if (((ulong)ppppuVar23 | (ulong)pppppuStack_6d0) >> 0x20 == 0) {
                        ppppuVar23 = (undefined8 ****)
                                     (((ulong)ppppuVar23 & 0xffffffff) %
                                     ((ulong)pppppuStack_6d0 & 0xffffffff));
                      }
                      else {
                        ppppuVar23 = (undefined8 ****)((ulong)ppppuVar23 % (ulong)pppppuStack_6d0);
                      }
                    }
                    pppppuVar42[(long)ppppuVar23] = &pppppuStack_720;
                    pppppuStack_6c8 = (undefined8 *****)0x0;
                    ppppuStack_6c0 = (undefined8 ****)0x0;
                  }
                  cStack_708 = '\x01';
                }
                pppppuStack_6d0 = (undefined8 *****)0x0;
                func_0x04897b30(&pppppuStack_6d8,pppppuStack_6c8);
                pppppuVar42 = pppppuStack_6d8;
                pppppuStack_6d8 = (undefined8 *****)0x0;
                if (pppppuVar42 != (undefined8 *****)0x0) {
                  func_0x0412a280(pppppuVar42,(long)pppppuStack_6d0 << 3);
                }
                func_0x0c92ee50(&pppppuStack_398,uStack_388);
                pppppuVar42 = pppppuStack_398;
                pppppuStack_398 = (undefined8 *****)0x0;
                if (pppppuVar42 != (undefined8 *****)0x0) {
                  func_0x0412a280(pppppuVar42,(long)uStack_390 << 3);
                }
              }
              uStack_6fc = CONCAT31(uStack_6fc._1_3_,uStack_528._4_1_);
              uStack_700 = (uint)uStack_528;
              pppppuVar42 = (undefined8 *****)
                            (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xf0);
              if (pppppuVar42 == (undefined8 *****)0x0) {
                func_0x0eec74c0(0xf0,0);
              }
              ppppuVar28 = ppppuStack_728;
              ppppuVar23 = ppppuStack_730;
              pppppuVar42[2] = pppppuStack_7d8;
              *pppppuVar42 = ppppppuStack_7e8;
              pppppuVar42[1] = ppppppuStack_7e0;
              ppppppuStack_7e8 = (undefined8 ******)0x0;
              ppppppuStack_7e0 = (undefined8 ******)0x0;
              pppppuStack_7d8 = (undefined8 *****)0x0;
              pppppuVar42[5] = ppppppuStack_7c0;
              *(undefined4 *)(pppppuVar42 + 3) = (undefined4)uStack_7d0;
              *(undefined4 *)((long)pppppuVar42 + 0x1c) = uStack_7d0._4_4_;
              *(undefined4 *)(pppppuVar42 + 4) = (undefined4)uStack_7c8;
              *(undefined4 *)((long)pppppuVar42 + 0x24) = uStack_7c8._4_4_;
              *(byte *)(pppppuVar42 + 6) = 0;
              *(byte *)(pppppuVar42 + 0x16) = 0;
              if ((char)uStack_738 == '\x01') {
                *(byte *)(pppppuVar42 + 9) = 0;
                if ((char)pppppuStack_7a0 == '\x01') {
                  pppppuVar42[6] = pppppuStack_7b8;
                  pppppuVar42[7] = pppppuStack_7b0;
                  pppppuVar42[8] = uStack_7a8;
                  pppppuStack_7b8 = (undefined8 *****)0x0;
                  pppppuStack_7b0 = (undefined8 *****)0x0;
                  uStack_7a8 = (undefined8 *****)0x0;
                  *(byte *)(pppppuVar42 + 9) = 1;
                  *(byte *)(pppppuVar42 + 10) = 0;
                  *(byte *)(pppppuVar42 + 0xd) = 0;
                  if (cStack_780 != '\x01') goto LAB_0c925bf9;
LAB_0c925d86:
                  pppppuVar42[10] = pppppuStack_798;
                  pppppuVar42[0xb] = ppppuStack_790;
                  pppppuVar42[0xc] = ppppuStack_788;
                  pppppuStack_798 = (undefined8 *****)0x0;
                  ppppuStack_790 = (undefined8 ****)0x0;
                  ppppuStack_788 = (undefined8 ****)0x0;
                  *(byte *)(pppppuVar42 + 0xd) = 1;
                  *(byte *)(pppppuVar42 + 0xe) = 0;
                  *(byte *)(pppppuVar42 + 0x11) = 0;
                  if (cStack_760 != '\x01') goto LAB_0c925c14;
LAB_0c925dd5:
                  pppppuVar42[0x10] = pppppuStack_768;
                  pppppuVar42[0xe] = pppppuStack_778;
                  pppppuVar42[0xf] = pppppuStack_770;
                  pppppuStack_778 = (undefined8 *****)0x0;
                  pppppuStack_770 = (undefined8 *****)0x0;
                  pppppuStack_768 = (undefined8 *****)0x0;
                  *(byte *)(pppppuVar42 + 0x11) = 1;
                  *(byte *)(pppppuVar42 + 0x12) = 0;
                  *(byte *)(pppppuVar42 + 0x15) = 0;
                }
                else {
                  *(byte *)(pppppuVar42 + 10) = 0;
                  *(byte *)(pppppuVar42 + 0xd) = 0;
                  if (cStack_780 == '\x01') goto LAB_0c925d86;
LAB_0c925bf9:
                  *(byte *)(pppppuVar42 + 0xe) = 0;
                  *(byte *)(pppppuVar42 + 0x11) = 0;
                  if (cStack_760 == '\x01') goto LAB_0c925dd5;
LAB_0c925c14:
                  *(byte *)(pppppuVar42 + 0x12) = 0;
                  *(byte *)(pppppuVar42 + 0x15) = 0;
                }
                if (cStack_740 == '\x01') {
                  pppppuVar42[0x14] = pppppuStack_748;
                  pppppuVar42[0x12] = uStack_758;
                  pppppuVar42[0x13] = pppppuStack_750;
                  uStack_758 = (undefined8 *****)0x0;
                  pppppuStack_750 = (undefined8 *****)0x0;
                  pppppuStack_748 = (undefined8 *****)0x0;
                  *(byte *)(pppppuVar42 + 0x15) = 1;
                }
                *(byte *)(pppppuVar42 + 0x16) = 1;
              }
              *(byte *)(pppppuVar42 + 0x17) = 0;
              *(byte *)(pppppuVar42 + 0x1c) = 0;
              pppppuStack_408 = pppppuVar42;
              if (cStack_708 == '\x01') {
                ppppuStack_730 = (undefined8 ****)0x0;
                pppppuVar42[0x17] = ppppuVar23;
                pppppuVar42[0x18] = ppppuStack_728;
                ppppuStack_728 = (undefined8 ****)0x0;
                pppppuVar42[0x19] = pppppuStack_720;
                pppppuVar42[0x1a] = ppppuStack_718;
                *(undefined4 *)(pppppuVar42 + 0x1b) = uStack_710;
                if (ppppuStack_718 != (undefined8 ****)0x0) {
                  ppppuVar24 = pppppuStack_720[1];
                  if (((ulong)ppppuVar28 & (long)ppppuVar28 - 1U) == 0) {
                    ppppuVar24 = (undefined8 ****)((ulong)ppppuVar24 & (long)ppppuVar28 - 1U);
                  }
                  else if (ppppuVar28 <= ppppuVar24) {
                    if (((ulong)ppppuVar24 | (ulong)ppppuVar28) >> 0x20 == 0) {
                      ppppuVar24 = (undefined8 ****)
                                   (((ulong)ppppuVar24 & 0xffffffff) %
                                   ((ulong)ppppuVar28 & 0xffffffff));
                    }
                    else {
                      ppppuVar24 = (undefined8 ****)((ulong)ppppuVar24 % (ulong)ppppuVar28);
                    }
                  }
                  ppppuVar23[(long)ppppuVar24] = pppppuVar42 + 0x19;
                  pppppuStack_720 = (undefined8 *****)0x0;
                  ppppuStack_718 = (undefined8 ****)0x0;
                }
                *(byte *)(pppppuVar42 + 0x1c) = 1;
                pppppuVar42[0x1d] = (undefined8 ****)CONCAT44(uStack_6fc,uStack_700);
                func_0x04897b30(&ppppuStack_730,pppppuStack_720);
                ppppuVar23 = ppppuStack_730;
                ppppuStack_730 = (undefined8 ****)0x0;
                if (ppppuVar23 != (undefined8 ****)0x0) {
                  func_0x0412a280(ppppuVar23,(long)ppppuStack_728 << 3);
                }
              }
              else {
                pppppuVar42[0x1d] = (undefined8 ****)CONCAT44(uStack_6fc,uStack_700);
              }
              if ((char)uStack_738 == '\x01') {
                func_0x0c92e540(&pppppuStack_7b8);
              }
              if (((ulong)ppppppuStack_7e8 & 1) != 0) {
                func_0x0412a280(pppppuStack_7d8,(ulong)ppppppuStack_7e8 & 0xfffffffffffffffe);
              }
              if (bStack_530 == 1) {
                func_0x0c92ee50(&pppppuStack_558,pppppuStack_548);
                pppppuVar43 = pppppuStack_558;
                pppppuStack_558 = (undefined8 *****)0x0;
                if (pppppuVar43 != (undefined8 *****)0x0) {
                  func_0x0412a280(pppppuVar43,(long)pppppuStack_550 << 3);
                }
              }
              if ((char)uStack_560 == '\x01') {
                func_0x0c92e650(&ppppppuStack_5e0);
              }
              if (((ulong)ppppppuStack_608 & 1) != 0) {
                func_0x0412a280(pppppuStack_5f8,(ulong)ppppppuStack_608 & 0xfffffffffffffffe);
              }
              pppppuVar43 = (undefined8 *****)((long)pppppuVar42 + 1);
              bVar47 = (*(byte *)pppppuVar42 & 1) == 0;
              pppppuVar44 = (undefined8 *****)pppppuVar42[2];
              if (bVar47) {
                pppppuVar44 = pppppuVar43;
              }
              ppppuVar23 = (undefined8 ****)(ulong)(*(byte *)pppppuVar42 >> 1);
              if (!bVar47) {
                ppppuVar23 = pppppuVar42[1];
              }
              pppppuVar22 = (undefined8 *****)
                            func_0x04883620(&ppppppuStack_7e8,pppppuVar44,ppppuVar23);
              pppppuVar44 = param_1[1];
              if (pppppuVar44 != (undefined8 *****)0x0) {
                uVar34 = (long)pppppuVar44 - ((ulong)pppppuVar44 >> 1 & 0x5555555555555555);
                uVar34 = (uVar34 >> 2 & 0x3333333333333333) + (uVar34 & 0x3333333333333333);
                uVar34 = ((uVar34 >> 4) + uVar34 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
                if (uVar34 >> 0x38 < 2) {
                  pppppuStack_7f0 =
                       (undefined8 *****)((ulong)((long)pppppuVar44 - 1U) & (ulong)pppppuVar22);
                }
                else {
                  pppppuStack_7f0 = pppppuVar22;
                  if (pppppuVar44 <= pppppuVar22) {
                    if (((ulong)pppppuVar22 | (ulong)pppppuVar44) >> 0x20 == 0) {
                      pppppuStack_7f0 =
                           (undefined8 *****)
                           (((ulong)pppppuVar22 & 0xffffffff) % ((ulong)pppppuVar44 & 0xffffffff));
                    }
                    else {
                      pppppuStack_7f0 = (undefined8 *****)((ulong)pppppuVar22 % (ulong)pppppuVar44);
                    }
                  }
                }
                if (((*param_1)[(long)pppppuStack_7f0] != (undefined8 ****)0x0) &&
                   (pppuVar35 = *(*param_1)[(long)pppppuStack_7f0], pppuVar35 != (undefined8 ***)0x0
                   )) {
                  if ((*(byte *)pppppuVar42 & 1) == 0) {
                    ppppuVar23 = (undefined8 ****)(ulong)(*(byte *)pppppuVar42 >> 1);
                  }
                  else {
                    ppppuVar23 = pppppuVar42[1];
                    pppppuVar43 = (undefined8 *****)pppppuVar42[2];
                  }
                  if ((byte)(uVar34 >> 0x38) < 2) {
                    do {
                      if ((undefined8 *****)pppuVar35[1] == pppppuVar22) {
                        bVar14 = *(byte *)(pppuVar35 + 2);
                        if ((bVar14 & 1) == 0) {
                          ppppuVar28 = (undefined8 ****)(ulong)(bVar14 >> 1);
                        }
                        else {
                          ppppuVar28 = (undefined8 ****)pppuVar35[3];
                        }
                        if (ppppuVar28 == ppppuVar23) {
                          if ((bVar14 & 1) == 0) {
                            ppuVar39 = (undefined8 **)((long)pppuVar35 + 0x11);
                          }
                          else {
                            ppuVar39 = pppuVar35[4];
                          }
                          iVar15 = func_0x0eee3000(ppuVar39,pppppuVar43,ppppuVar23);
                          if (iVar15 == 0) goto LAB_0c9261b6;
                        }
                      }
                      else if ((undefined8 *****)
                               ((ulong)pppuVar35[1] & (ulong)((long)pppppuVar44 - 1U)) !=
                               pppppuStack_7f0) break;
                      pppuVar35 = (undefined8 ***)*pppuVar35;
                    } while (pppuVar35 != (undefined8 ***)0x0);
                  }
                  else {
                    do {
                      pppppuVar31 = (undefined8 *****)pppuVar35[1];
                      if (pppppuVar31 == pppppuVar22) {
                        bVar14 = *(byte *)(pppuVar35 + 2);
                        if ((bVar14 & 1) == 0) {
                          ppppuVar28 = (undefined8 ****)(ulong)(bVar14 >> 1);
                        }
                        else {
                          ppppuVar28 = (undefined8 ****)pppuVar35[3];
                        }
                        if (ppppuVar28 == ppppuVar23) {
                          if ((bVar14 & 1) == 0) {
                            ppuVar39 = (undefined8 **)((long)pppuVar35 + 0x11);
                          }
                          else {
                            ppuVar39 = pppuVar35[4];
                          }
                          iVar15 = func_0x0eee3000(ppuVar39,pppppuVar43,ppppuVar23);
                          if (iVar15 == 0) goto LAB_0c9261b6;
                        }
                      }
                      else {
                        if (pppppuVar44 <= pppppuVar31) {
                          if (((ulong)pppppuVar31 | (ulong)pppppuVar44) >> 0x20 == 0) {
                            pppppuVar31 = (undefined8 *****)
                                          (((ulong)pppppuVar31 & 0xffffffff) %
                                          ((ulong)pppppuVar44 & 0xffffffff));
                          }
                          else {
                            pppppuVar31 = (undefined8 *****)
                                          ((ulong)pppppuVar31 % (ulong)pppppuVar44);
                          }
                        }
                        if (pppppuVar31 != pppppuStack_7f0) break;
                      }
                      pppuVar35 = (undefined8 ***)*pppuVar35;
                    } while (pppuVar35 != (undefined8 ***)0x0);
                  }
                }
              }
              ppppppuVar25 = (undefined8 ******)
                             (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
              if (ppppppuVar25 == (undefined8 ******)0x0) {
                func_0x0eec74c0(0x38,0);
              }
              pppppuStack_7d8 = (undefined8 *****)0x0;
              *ppppppuVar25 = (undefined8 *****)0x0;
              ppppppuVar25[1] = pppppuVar22;
              ppppppuStack_7e8 = ppppppuVar25;
              ppppppuStack_7e0 = param_1;
              if (((ulong)*pppppuVar42 & 1) == 0) {
                ppppppuVar25[4] = (undefined8 *****)pppppuVar42[2];
                uVar38 = *(undefined4 *)((long)pppppuVar42 + 4);
                uVar6 = *(undefined4 *)(pppppuVar42 + 1);
                uVar7 = *(undefined4 *)((long)pppppuVar42 + 0xc);
                *(undefined4 *)(ppppppuVar25 + 2) = *(undefined4 *)pppppuVar42;
                *(undefined4 *)((long)ppppppuVar25 + 0x14) = uVar38;
                *(undefined4 *)(ppppppuVar25 + 3) = uVar6;
                *(undefined4 *)((long)ppppppuVar25 + 0x1c) = uVar7;
              }
              else {
                func_0x0412e5e0(ppppppuVar25 + 2,pppppuVar42[2],pppppuVar42[1]);
              }
              pppppuStack_408 = (undefined8 *****)0x0;
              pppppuStack_6d8 = pppppuVar42;
              pppppuVar43 = (undefined8 *****)
                            (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
              if (pppppuVar43 == (undefined8 *****)0x0) {
                func_0x0eec74c0(0x18,0);
              }
              *pppppuVar43 = (undefined8 ****)&UNK_0f534768;
              ppppuVar23 = (undefined8 ****)(**(code **)(_DAT_0f5463b0 + 0x10))();
              if (ppppuVar23 == (undefined8 ****)0x0) {
                func_0x0eec74c0();
              }
              ppppuVar23[1] = (undefined8 ***)0x0;
              ppppuVar23[2] = (undefined8 ***)0x0;
              *ppppuVar23 = (undefined8 ***)&UNK_0ef44a60;
              *(undefined1 *)(ppppuVar23 + 3) = 1;
              pppppuVar43[1] = ppppuVar23 + 3;
              pppppuVar43[2] = ppppuVar23;
              ppppppuVar25[5] = pppppuVar43;
              ppppppuVar25[6] = pppppuVar42;
              pppppuStack_7d8 = (undefined8 *****)CONCAT71(pppppuStack_7d8._1_7_,1);
              if ((long)pppppuVar44 < 0) {
                fVar49 = (float)pppppuVar44;
                fVar48 = *(float *)(param_1 + 4);
                if (pppppuVar44 != (undefined8 *****)0x0) goto LAB_0c926435;
LAB_0c926442:
                uVar34 = 1;
                if ((undefined8 *****)0x2 < pppppuVar44) {
                  uVar34 = (ulong)(((ulong)pppppuVar44 & (ulong)((long)pppppuVar44 - 1U)) != 0);
                }
                ppppppuVar36 = (undefined8 ******)((long)pppppuVar44 * 2 | uVar34);
                fVar48 = (float)func_0x0eee3ab0((float)((long)param_1[3] + 1) / fVar48);
                ppppppuVar41 = (undefined8 ******)
                               ((long)(fVar48 - _DAT_01198778) & (long)fVar48 >> 0x3f | (long)fVar48
                               );
                if (ppppppuVar41 < ppppppuVar36) {
                  ppppppuVar41 = ppppppuVar36;
                }
                ppppppuVar36 = (undefined8 ******)0x2;
                if ((ppppppuVar41 == (undefined8 ******)0x1) ||
                   (ppppppuVar36 = ppppppuVar41,
                   ((ulong)ppppppuVar41 & (long)ppppppuVar41 - 1U) == 0)) {
                  ppppppuVar32 = (undefined8 ******)param_1[1];
                  bVar47 = ppppppuVar36 < ppppppuVar32;
                  if (ppppppuVar36 <= ppppppuVar32) goto LAB_0c9265c5;
LAB_0c9264ba:
                  if ((ulong)ppppppuVar36 >> 0x3d != 0) {
                    func_0x04882eb0();
                    goto LAB_0c926c8a;
                  }
                  lVar17 = (long)ppppppuVar36 * 8;
                  pppppuVar42 = (undefined8 *****)
                                (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar17);
                  if (pppppuVar42 == (undefined8 *****)0x0) {
                    func_0x0eec74c0(lVar17,0);
                  }
                  pppppuVar43 = *param_1;
                  *param_1 = pppppuVar42;
                  if (pppppuVar43 != (undefined8 *****)0x0) {
                    func_0x0412a280(pppppuVar43,(long)param_1[1] << 3);
                    pppppuVar42 = *param_1;
                  }
                  param_1[1] = ppppppuVar36;
                  func_0x0eee2dd0(pppppuVar42,0,lVar17);
                  pppppuVar43 = param_1[2];
                  if (pppppuVar43 != (undefined8 *****)0x0) {
                    ppppppuVar41 = (undefined8 ******)pppppuVar43[1];
                    uVar34 = (long)ppppppuVar36 - 1;
                    if (((ulong)ppppppuVar36 & uVar34) == 0) {
                      pppppuVar42[(ulong)ppppppuVar41 & uVar34] = ppppppuStack_518;
                      uVar30 = (ulong)ppppppuVar41 & uVar34;
                      while (pppppuVar44 = pppppuVar43, pppppuVar43 = (undefined8 *****)*pppppuVar44
                            , pppppuVar43 != (undefined8 *****)0x0) {
                        uVar40 = (ulong)pppppuVar43[1] & uVar34;
                        if (uVar40 != uVar30) {
                          if (pppppuVar42[uVar40] == (undefined8 ****)0x0) {
                            pppppuVar42[uVar40] = pppppuVar44;
                            uVar30 = uVar40;
                          }
                          else {
                            *pppppuVar44 = *pppppuVar43;
                            *pppppuVar43 = (undefined8 ****)*pppppuVar42[uVar40];
                            *pppppuVar42[uVar40] = pppppuVar43;
                            pppppuVar43 = pppppuVar44;
                          }
                        }
                      }
                    }
                    else {
                      if (ppppppuVar36 <= ppppppuVar41) {
                        if (((ulong)ppppppuVar41 | (ulong)ppppppuVar36) >> 0x20 == 0) {
                          ppppppuVar41 = (undefined8 ******)
                                         (((ulong)ppppppuVar41 & 0xffffffff) %
                                         ((ulong)ppppppuVar36 & 0xffffffff));
                        }
                        else {
                          ppppppuVar41 = (undefined8 ******)
                                         ((ulong)ppppppuVar41 % (ulong)ppppppuVar36);
                        }
                      }
                      pppppuVar42[(long)ppppppuVar41] = ppppppuStack_518;
                      pppppuVar44 = (undefined8 *****)*pppppuVar43;
                      while (pppppuVar44 != (undefined8 *****)0x0) {
                        ppppppuVar32 = (undefined8 ******)pppppuVar44[1];
                        if (ppppppuVar36 <= ppppppuVar32) {
                          if (((ulong)ppppppuVar32 | (ulong)ppppppuVar36) >> 0x20 == 0) {
                            ppppppuVar32 = (undefined8 ******)
                                           (((ulong)ppppppuVar32 & 0xffffffff) %
                                           ((ulong)ppppppuVar36 & 0xffffffff));
                          }
                          else {
                            ppppppuVar32 = (undefined8 ******)
                                           ((ulong)ppppppuVar32 % (ulong)ppppppuVar36);
                          }
                        }
                        if (ppppppuVar32 != ppppppuVar41) {
                          if (pppppuVar42[(long)ppppppuVar32] == (undefined8 ****)0x0) {
                            pppppuVar42[(long)ppppppuVar32] = pppppuVar43;
                            ppppppuVar41 = ppppppuVar32;
                          }
                          else {
                            *pppppuVar43 = *pppppuVar44;
                            *pppppuVar44 = (undefined8 ****)*pppppuVar42[(long)ppppppuVar32];
                            *pppppuVar42[(long)ppppppuVar32] = pppppuVar44;
                            pppppuVar44 = pppppuVar43;
                          }
                        }
                        pppppuVar43 = pppppuVar44;
                        pppppuVar44 = (undefined8 *****)*pppppuVar43;
                      }
                    }
                  }
                }
                else {
                  ppppppuVar36 = (undefined8 ******)FUN_0412c3f0();
                  ppppppuVar32 = (undefined8 ******)param_1[1];
                  bVar47 = ppppppuVar36 < ppppppuVar32;
                  if (ppppppuVar32 < ppppppuVar36) goto LAB_0c9264ba;
LAB_0c9265c5:
                  if (bVar47) {
                    fVar48 = (float)func_0x0eee3ab0((float)param_1[3] / *(float *)(param_1 + 4));
                    ppppppuVar46 = (undefined8 ******)
                                   ((long)(fVar48 - _DAT_01198778) & (long)fVar48 >> 0x3f |
                                   (long)fVar48);
                    if ((ppppppuVar32 < (undefined8 ******)0x3) ||
                       (uVar34 = (long)ppppppuVar32 -
                                 ((ulong)ppppppuVar32 >> 1 & 0x5555555555555555),
                       uVar34 = (uVar34 >> 2 & 0x3333333333333333) + (uVar34 & 0x3333333333333333),
                       1 < (byte)(((uVar34 >> 4) + uVar34 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101
                                 >> 0x38))) {
                      ppppppuVar26 = (undefined8 ******)FUN_0412c3f0();
                      ppppppuVar41 = ppppppuVar46;
                      if (ppppppuVar26 < ppppppuVar36) {
                        ppppppuVar26 = ppppppuVar36;
                      }
                    }
                    else {
                      if ((undefined8 ******)0x1 < ppppppuVar46) {
                        lVar17 = 0x3f;
                        if ((long)ppppppuVar46 - 1U != 0) {
                          for (; (long)ppppppuVar46 - 1U >> lVar17 == 0; lVar17 = lVar17 + -1) {
                          }
                        }
                        ppppppuVar46 = (undefined8 ******)(1L << (-((byte)lVar17 ^ 0x3f) & 0x3f));
                      }
                      ppppppuVar26 = ppppppuVar46;
                      if (ppppppuVar46 < ppppppuVar36) {
                        ppppppuVar26 = ppppppuVar36;
                      }
                    }
                    ppppppuVar36 = ppppppuVar26;
                    if (ppppppuVar36 < ppppppuVar32) {
                      if (ppppppuVar36 != (undefined8 ******)0x0) goto LAB_0c9264ba;
                      pppppuVar42 = *param_1;
                      *param_1 = (undefined8 *****)0x0;
                      if (pppppuVar42 != (undefined8 *****)0x0) {
                        func_0x0412a280();
                      }
                      param_1[1] = (undefined8 *****)0x0;
                    }
                  }
                }
                pppppuVar44 = param_1[1];
                if (((ulong)pppppuVar44 & (long)pppppuVar44 - 1U) != 0) {
                  pppppuVar42 = pppppuVar22;
                  if (pppppuVar44 <= pppppuVar22) {
                    if (((ulong)pppppuVar22 | (ulong)pppppuVar44) >> 0x20 == 0) {
                      pppppuVar42 = (undefined8 *****)
                                    (((ulong)pppppuVar22 & 0xffffffff) %
                                    ((ulong)pppppuVar44 & 0xffffffff));
                      pppppuVar43 = *param_1;
                      ppppuVar23 = pppppuVar43[(long)pppppuVar42];
                      goto joined_r0x0c9267d9;
                    }
                    pppppuVar42 = (undefined8 *****)((ulong)pppppuVar22 % (ulong)pppppuVar44);
                  }
                  goto LAB_0c926780;
                }
                pppppuVar42 = (undefined8 *****)
                              ((ulong)pppppuVar22 & (ulong)((long)pppppuVar44 - 1U));
                pppppuVar43 = *param_1;
                ppppuVar23 = pppppuVar43[(long)pppppuVar42];
joined_r0x0c9267d9:
                if (ppppuVar23 == (undefined8 ****)0x0) goto LAB_0c9267e0;
LAB_0c92678c:
                *ppppppuVar25 = (undefined8 *****)*ppppuVar23;
                *ppppuVar23 = ppppppuVar25;
              }
              else {
                fVar49 = (float)(long)pppppuVar44;
                fVar48 = *(float *)(param_1 + 4);
                if (pppppuVar44 == (undefined8 *****)0x0) goto LAB_0c926442;
LAB_0c926435:
                pppppuVar42 = pppppuStack_7f0;
                if (fVar49 * fVar48 < (float)((long)param_1[3] + 1)) goto LAB_0c926442;
LAB_0c926780:
                pppppuVar43 = *param_1;
                ppppuVar23 = pppppuVar43[(long)pppppuVar42];
                if (ppppuVar23 != (undefined8 ****)0x0) goto LAB_0c92678c;
LAB_0c9267e0:
                *ppppppuVar25 = *ppppppuStack_518;
                *ppppppuStack_518 = ppppppuVar25;
                pppppuVar43[(long)pppppuVar42] = ppppppuStack_518;
                if (*ppppppuVar25 != (undefined8 *****)0x0) {
                  pppppuVar42 = (undefined8 *****)(*ppppppuVar25)[1];
                  if (((ulong)pppppuVar44 & (long)pppppuVar44 - 1U) == 0) {
                    pppppuVar43[(ulong)pppppuVar42 & (ulong)((long)pppppuVar44 - 1U)] = ppppppuVar25
                    ;
                  }
                  else {
                    if (pppppuVar44 <= pppppuVar42) {
                      if (((ulong)pppppuVar42 | (ulong)pppppuVar44) >> 0x20 == 0) {
                        pppppuVar43
                        [((ulong)pppppuVar42 & 0xffffffff) % ((ulong)pppppuVar44 & 0xffffffff)] =
                             ppppppuVar25;
                        goto LAB_0c926795;
                      }
                      pppppuVar42 = (undefined8 *****)((ulong)pppppuVar42 % (ulong)pppppuVar44);
                    }
                    pppppuVar43[(long)pppppuVar42] = ppppppuVar25;
                  }
                }
              }
LAB_0c926795:
              param_1[3] = (undefined8 *****)((long)param_1[3] + 1);
              ppppppuVar20 = ppppppuVar20 + 0x1d;
            } while (ppppppuVar20 != ppppppuStack_510);
          }
LAB_0c926990:
          ppppppuStack_7e8 = &ppppppuStack_3b0;
          func_0x0c92e050(&ppppppuStack_7e8);
        }
        else {
          uStack_80 = 0xffffffff;
          uStack_48 = 0;
          uStack_40 = 0;
          uStack_58 = 0;
          uStack_50 = 0;
          uStack_68 = 0;
          uStack_60 = 0;
          uStack_78 = 0;
          uStack_70 = 0;
          uStack_38 = 0;
          func_0x0d5ceda0(auStack_128,0x1d,&uStack_80);
          func_0x05f43a40(&uStack_80);
        }
        func_0x05d85c50(auStack_128);
        if (pcStack_138 != (code *)0x0) {
          (*pcStack_138)(&pppppppuStack_150);
        }
        if ((uStack_158 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_158 & 0xff00ffffffffffff) - 8);
        }
        uStack_158 = 0;
        if ((uStack_15e & 0x8000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,(CONCAT62(uStack_15e,uStack_160) & 0xff00ffffffffffff) - 8);
        }
        lVar17 = lStack_1f8;
        lStack_1f8 = 0;
        if (lVar17 != 0) {
          func_0x0412a280(lVar17,1);
        }
        func_0x0c92e140(&pppppuStack_2e8);
        plVar16 = plStack_1d8;
        uStack_1e0 = 0;
        plStack_1d8 = (long *)0x0;
        lVar17 = lStack_520;
        if (plVar16 != (long *)0x0) {
          LOCK();
          plVar1 = plVar16 + 1;
          lVar18 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar18 == 0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
            func_0x0412c2d0(plVar16);
            plVar16 = plStack_1d8;
            uStack_1d0 = 0;
            lVar17 = lStack_520;
            if (plStack_1d8 != (long *)0x0) {
              uStack_1d0 = 0;
              LOCK();
              plVar1 = plStack_1d8 + 1;
              lVar18 = *plVar1;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (lVar18 == 0) {
                (**(code **)(*plStack_1d8 + 0x10))(plStack_1d8);
                func_0x0412c2d0(plVar16);
                lVar17 = lStack_520;
              }
            }
          }
          else {
            uStack_1d0 = 0;
          }
        }
      }
      if ((uStack_628 & 1) != 0) {
        func_0x0412a280(uStack_618,uStack_628 & 0xfffffffffffffffe);
      }
      lStack_4c0 = lStack_4c0 + -0x110;
    } while (lStack_4c0 != *(long *)(lVar17 + 8));
  }
  return;
LAB_0c9261b6:
  ppppppuStack_7e8 = (undefined8 ******)pppppuVar43;
  func_0x0bbdd580(1,3,0x1d,&UNK_013bccd2,&ppppppuStack_7e8);
  if (*(byte *)(pppppuVar42 + 0x1c) == 1) {
    func_0x04897b30(pppppuVar42 + 0x17,pppppuVar42[0x19]);
    ppppuVar23 = pppppuVar42[0x17];
    pppppuVar42[0x17] = (undefined8 ****)0x0;
    if (ppppuVar23 != (undefined8 ****)0x0) {
      func_0x0412a280(ppppuVar23,(long)pppppuVar42[0x18] << 3);
    }
  }
  if (*(byte *)(pppppuVar42 + 0x16) == 1) {
    func_0x0c92e540(pppppuVar42 + 6);
  }
  if (((ulong)*pppppuVar42 & 1) != 0) {
    func_0x0412a280(pppppuVar42[2],(ulong)*pppppuVar42 & 0xfffffffffffffffe);
  }
  func_0x0412a280();
  ppppppuVar20 = ppppppuVar20 + 0x1d;
  if (ppppppuVar20 == ppppppuStack_510) goto LAB_0c926990;
  goto LAB_0c924ad0;
LAB_0c926c8a:
  func_0x04891200();
LAB_0c926c8f:
  iVar15 = func_0x04108328(&DAT_0f6ebc88);
  if (iVar15 != 0) {
    func_0x0c927230();
    func_0x0eee2f40(&UNK_048ad590,&DAT_0f6ebc70,0xf53dab8);
    func_0x0410844d(&DAT_0f6ebc88);
    ppppppuVar41 = param_1;
  }
  goto LAB_0c922513;
}


