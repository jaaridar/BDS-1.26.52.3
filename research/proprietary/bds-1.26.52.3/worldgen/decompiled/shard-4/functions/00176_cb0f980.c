/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcc0f980 (ELF vaddr 0xcb0f980)
 * Label: caller-of-callee
 * Body:  [[0cc0f980, 0cc0faa1] [0cc0fab0, 0cc0fb42] [0cc0fb50, 0cc1000b] [0cc10010, 0cc10226] [0cc10230, 0cc102a2] [0cc102b0, 0cc10325] [0cc10330, 0cc10452] [0cc10460, 0cc1062c] [0cc10630, 0cc10708] [0cc10710, 0cc10a8a] [0cc10a90, 0cc10ac9] [0cc10ad0, 0cc10b3a] [0cc10b40, 0cc10b59] [0cc10b60, 0cc10fba] [0cc10fc0, 0cc11150] [0cc11160, 0cc11349] [0cc11350, 0cc113ed] [0cc113f0, 0cc1149e] [0cc114a0, 0cc114d5] [0cc114e0, 0cc11553] [0cc11560, 0cc11595] [0cc115a0, 0cc11764] [0cc11770, 0cc117e9] [0cc117f0, 0cc11811] [0cc11820, 0cc11897] [0cc118a0, 0cc11ab0] [0cc11ac0, 0cc11dab] [0cc11db0, 0cc11ea3] [0cc11eb0, 0cc12132] [0cc12140, 0cc122d5] [0cc122e0, 0cc12452] [0cc12460, 0cc1248b] [0cc12490, 0cc124c6] [0cc124d0, 0cc124fa] [0cc12500, 0cc12522] [0cc12530, 0cc12596] [0cc125a0, 0cc125ed] [0cc125f0, 0cc12684] [0cc12690, 0cc126f6] [0cc12700, 0cc127db] [0cc127e0, 0cc12848] [0cc12850, 0cc128c5] [0cc128d0, 0cc12952] [0cc12960, 0cc129ab] [0cc129b0, 0cc129f5] [0cc12a00, 0cc12a64] [0cc12a70, 0cc12b09] [0cc12b10, 0cc12bbe] [0cc12bc0, 0cc12bf5] [0cc12c00, 0cc12ca5] [0cc12cb0, 0cc12e74] [0cc12e80, 0cc12ef9] [0cc12f00, 0cc12f21] [0cc12f30, 0cc12f81] [0cc12f90, 0cc13073] [0cc13080, 0cc1315f] [0cc13450, 0cc13472]]
 * Ghidra: FUN_0cc0f980
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0cc0f980(long param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  ulong **ppuVar17;
  ulong *puVar18;
  ulong uVar19;
  ulong **ppuVar20;
  ulong ****ppppuVar21;
  ulong ***pppuVar22;
  long *plVar23;
  ulong ***pppuVar24;
  ulong ****ppppuVar25;
  long lVar26;
  undefined8 uVar27;
  byte *pbVar28;
  ulong ****ppppuVar29;
  ulong ****ppppuVar30;
  ulong uVar31;
  ulong ****ppppuVar32;
  long lVar33;
  ulong **ppuVar34;
  long lVar35;
  long *plVar36;
  ulong ****ppppuVar37;
  ulong uVar38;
  ulong ***pppuVar39;
  undefined4 *puVar40;
  ulong ****ppppuVar41;
  long *plVar42;
  undefined8 *puVar43;
  ulong **ppuVar44;
  long lVar45;
  bool bVar46;
  float fVar47;
  float fVar48;
  ulong ***pppuStack_3a8;
  ulong ***pppuStack_3a0;
  ulong ***pppuStack_398;
  ulong ****ppppuStack_390;
  ulong ****ppppuStack_388;
  ulong ***pppuStack_380;
  float fStack_378;
  ulong ****ppppuStack_370;
  ulong ****ppppuStack_368;
  ulong ***pppuStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  ulong ***pppuStack_348;
  ulong **ppuStack_338;
  long *plStack_330;
  byte *pbStack_328;
  byte *pbStack_320;
  ulong ****ppppuStack_318;
  ulong ****ppppuStack_310;
  undefined8 *puStack_308;
  undefined8 uStack_300;
  float fStack_2f8;
  ulong ****ppppuStack_2f0;
  ulong ****ppppuStack_2e8;
  ulong ****ppppuStack_2e0;
  undefined4 *puStack_2d8;
  undefined4 *puStack_2d0;
  undefined8 uStack_2c8;
  ulong ****ppppuStack_2b8;
  ulong ****ppppuStack_2b0;
  ulong ****ppppuStack_2a8;
  undefined1 uStack_2a0;
  byte *pbStack_298;
  byte *pbStack_290;
  ulong ****ppppuStack_288;
  undefined8 *puStack_280;
  byte *pbStack_278;
  long lStack_270;
  undefined1 auStack_268 [8];
  uint uStack_260;
  ulong *****pppppuStack_258;
  undefined1 uStack_250;
  ulong ****ppppuStack_248;
  long lStack_240;
  long lStack_238;
  ulong ****ppppuStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined4 uStack_1f8;
  undefined2 uStack_1f4;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  undefined1 uStack_1bc;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 uStack_188;
  undefined1 uStack_184;
  undefined2 uStack_180;
  undefined1 uStack_17e;
  undefined8 uStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  undefined2 uStack_148;
  long lStack_140;
  ulong **ppuStack_138;
  ulong ***pppuStack_130;
  ulong uStack_128;
  float fStack_120;
  undefined1 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  ulong ****ppppuStack_e8;
  ulong ****ppppuStack_e0;
  ulong ****ppppuStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulong ****ppppuStack_b8;
  ulong ****ppppuStack_b0;
  ulong ****ppppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_48 = 0x3f800000;
  puStack_70 = &UNK_0f4082b0;
  uStack_40 = 0;
  uStack_38 = 0;
  puStack_280 = param_2;
  func_0x0cee2cc0(&uStack_68,0xf705038);
  func_0x0cee3870(&uStack_68,&UNK_01d60048);
  func_0x0cee39e0(&uStack_68,&UNK_01d60060);
  func_0x0cee3ce0(&uStack_68,&UNK_01d60078);
  func_0x0cee3e50(&uStack_68,0xf705050);
  func_0x0cee4150(&uStack_68,&UNK_01d60090);
  func_0x0cee42c0(&uStack_68,&UNK_01d600a8);
  func_0x0ce4b270(&puStack_70);
  pbVar14 = (byte *)*puStack_280;
  if (pbVar14 == (byte *)puStack_280[1]) {
LAB_0cc130fb:
    func_0x0ce4bbe0(&puStack_70);
    return;
  }
  lStack_240 = param_1 + 0x60;
  lStack_238 = param_1 + 0x28;
  puVar43 = puStack_280;
LAB_0cc0faea:
  puStack_228 = &UNK_014a5684;
  uStack_220 = 0xd;
  pbVar16 = pbVar14 + 0x20;
  pbVar13 = (byte *)func_0x0d6c97a0(pbVar16,&puStack_228);
  pbStack_320 = pbVar14 + 0x28;
  if (((pbVar13 == pbStack_320) || (*(int *)(pbVar13 + 0x60) != 3)) ||
     (uVar11 = *(uint *)(pbVar13 + 0x40), (int)uVar11 < 0)) {
    uVar11 = 0;
  }
  else if (0xd < uVar11) {
    uVar11 = 0;
  }
  uStack_208 = 0;
  uStack_200 = 0;
  uStack_218 = 0;
  uStack_210 = 0;
  puStack_228 = (undefined *)0x0;
  uStack_220 = 0;
  uStack_1f8 = 0x34;
  uStack_1f4 = 0xffff;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  uStack_1f0 = 0;
  uStack_1e8 = 0;
  uStack_1c0 = 0xffffffff;
  uStack_1bc = 1;
  uStack_184 = 0;
  uStack_180 = 0;
  uStack_17e = 0;
  uStack_198 = 0;
  uStack_190 = 0;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  uStack_188 = 0;
  uStack_158 = 0;
  uStack_150 = 0;
  puStack_168 = (undefined8 *)0x0;
  uStack_160 = 0;
  uStack_178 = 0;
  puStack_170 = (undefined8 *)0x0;
  uStack_148 = 6;
  pppuStack_130 = (ulong ***)0x0;
  uStack_128 = 0;
  lStack_140 = 0;
  ppuStack_138 = (ulong **)0x0;
  fStack_120 = 1.0;
  uStack_118 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_f0 = 0x3f800000;
  uStack_98 = 0;
  uStack_90 = 0;
  ppppuStack_a8 = (ulong ****)0x0;
  uStack_a0 = 0;
  ppppuStack_b8 = (ulong ****)0x0;
  ppppuStack_b0 = (ulong ****)0x0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  ppppuStack_d8 = (ulong ****)0x0;
  uStack_d0 = 0;
  ppppuStack_e8 = (ulong ****)0x0;
  ppppuStack_e0 = (ulong ****)0x0;
  uStack_88 = 0;
  uStack_80 = 0x3f800000;
  if ((byte *)&uStack_1d8 != pbVar14) {
    if ((*pbVar14 & 1) == 0) {
      uStack_1c8 = *(undefined8 *)(pbVar14 + 0x10);
      uStack_1d8 = *(undefined8 *)pbVar14;
      uStack_1d0 = *(undefined8 *)(pbVar14 + 8);
    }
    else {
      func_0x04885070(&uStack_1d8,*(undefined8 *)(pbVar14 + 0x10),*(undefined8 *)(pbVar14 + 8));
    }
  }
  cVar9 = func_0x0b5f9f50(&uStack_1d8);
  if (cVar9 != '\0') {
    uStack_118 = 1;
  }
  pppuStack_3a8 = (ulong ***)&DAT_01218c16;
  pppuStack_3a0 = (ulong ***)0x12;
  pbStack_278 = pbVar14;
  pbVar14 = (byte *)func_0x0d6c97a0(pbVar16,&pppuStack_3a8);
  if ((pbVar14 != pbStack_320) && (*(int *)(pbVar14 + 0x60) == 10)) {
    pppuStack_3a8 = (ulong ***)&UNK_014daf09;
    pppuStack_3a0 = (ulong ***)0x8;
    pbVar13 = pbVar14 + 0x40;
    pbVar15 = (byte *)func_0x0d6c97a0(pbVar13,&pppuStack_3a8);
    pbVar14 = pbVar14 + 0x48;
    if ((pbVar15 == pbVar14) || (*(int *)(pbVar15 + 0x60) != 3)) {
      uStack_1c0 = 0;
    }
    else {
      uStack_1c0 = *(undefined4 *)(pbVar15 + 0x40);
    }
    pppuStack_3a8 = (ulong ***)&UNK_0120878e;
    pppuStack_3a0 = (ulong ***)0x8;
    pbVar15 = (byte *)func_0x0d6c97a0(pbVar13,&pppuStack_3a8);
    if (pbVar15 == pbVar14) {
      pbVar28 = (byte *)0x0;
    }
    else {
      pbVar28 = pbVar15 + 0x38;
      if (*(int *)(pbVar15 + 0x60) != 8) {
        pbVar28 = (byte *)0x0;
      }
    }
    pbVar15 = pbVar28 + 8;
    if (pbVar28 == (byte *)0x0) {
      pbVar15 = &UNK_01e79d90;
    }
    uStack_1bc = func_0x0deb3e60(pbVar15);
    plStack_330 = (long *)CONCAT44(plStack_330._4_4_,uVar11);
    pppuStack_3a8 = (ulong ***)&UNK_011caa30;
    pppuStack_3a0 = (ulong ***)0xf;
    pbStack_328 = pbVar16;
    pbVar16 = (byte *)func_0x0d6c97a0(pbVar13,&pppuStack_3a8);
    if ((pbVar16 != pbVar14) && (*(int *)(pbVar16 + 0x60) == 10)) {
      if ((*(long *)(param_1 + 0xd0) == 0) &&
         (cVar9 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
         cVar9 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      if ((**(char **)(param_1 + 0xd0) == '\0') &&
         (cVar9 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e),
         cVar9 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      pppuStack_3a8 = (ulong ***)&UNK_0142a5c6;
      pppuStack_3a0 = (ulong ***)0x4;
      pbVar14 = (byte *)func_0x0d6c97a0(pbVar16 + 0x40,&pppuStack_3a8);
      if (pbVar14 == pbVar16 + 0x48) {
        pbVar13 = (byte *)0x0;
      }
      else {
        pbVar13 = pbVar14 + 0x38;
        if (*(int *)(pbVar14 + 0x60) != 8) {
          pbVar13 = (byte *)0x0;
        }
      }
      pbVar14 = pbVar13 + 8;
      if (pbVar13 == (byte *)0x0) {
        pbVar14 = &UNK_01e79d90;
      }
      if ((DAT_0f6ff890 == '\0') && (iVar12 = FUN_04108328(&DAT_0f6ff890), iVar12 != 0)) {
        func_0x0cbea5c0(&pppuStack_3a8);
        __cxa_atexit(&UNK_0cbeaa40,&DAT_0f6ff868,0xf53dab8);
        func_0x0410844d(&DAT_0f6ff890);
      }
      bVar46 = (*pbVar14 & 1) != 0;
      pbVar13 = pbVar14 + 1;
      if (bVar46) {
        pbVar13 = *(byte **)(pbVar14 + 0x10);
      }
      uVar19 = (ulong)(*pbVar14 >> 1);
      if (bVar46) {
        uVar19 = *(ulong *)(pbVar14 + 8);
      }
      ppuVar17 = (ulong **)func_0x04883620(&pppuStack_3a8,pbVar13,uVar19);
      ppuVar44 = _DAT_0f6ff870;
      if (_DAT_0f6ff870 != (ulong **)0x0) {
        uVar31 = (long)_DAT_0f6ff870 - ((ulong)_DAT_0f6ff870 >> 1 & 0x5555555555555555);
        uVar31 = (uVar31 >> 2 & 0x3333333333333333) + (uVar31 & 0x3333333333333333);
        uVar31 = ((uVar31 >> 4) + uVar31 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar31 >> 0x38 < 2) {
          ppuVar34 = (ulong **)((long)_DAT_0f6ff870 - 1U & (ulong)ppuVar17);
          plVar36 = *(long **)(_DAT_0f6ff868 + (long)ppuVar34 * 8);
        }
        else if (ppuVar17 < _DAT_0f6ff870) {
          plVar36 = *(long **)(_DAT_0f6ff868 + (long)ppuVar17 * 8);
          ppuVar34 = ppuVar17;
        }
        else if (((ulong)ppuVar17 | (ulong)_DAT_0f6ff870) >> 0x20 == 0) {
          ppuVar34 = (ulong **)
                     (((ulong)ppuVar17 & 0xffffffff) % ((ulong)_DAT_0f6ff870 & 0xffffffff));
          plVar36 = *(long **)(_DAT_0f6ff868 + (long)ppuVar34 * 8);
        }
        else {
          plVar36 = *(long **)(_DAT_0f6ff868 + (long)((ulong)ppuVar17 % (ulong)_DAT_0f6ff870) * 8);
          ppuVar34 = (ulong **)((ulong)ppuVar17 % (ulong)_DAT_0f6ff870);
        }
        if ((plVar36 != (long *)0x0) && (plVar36 = (long *)*plVar36, plVar36 != (long *)0x0)) {
          ppuStack_338 = ppuVar34;
          if ((byte)(uVar31 >> 0x38) < 2) {
            uVar31 = (long)_DAT_0f6ff870 - 1;
            do {
              if (ppuVar17 == (ulong **)plVar36[1]) {
                if ((plVar36[3] == uVar19) &&
                   (iVar12 = bcmp(plVar36[2],pbVar13,uVar19), ppuVar34 = ppuStack_338, iVar12 == 0))
                goto LAB_0cc1004a;
              }
              else if ((ulong **)((ulong)plVar36[1] & uVar31) != ppuVar34) break;
              plVar36 = (long *)*plVar36;
            } while (plVar36 != (long *)0x0);
          }
          else {
            do {
              ppuVar20 = (ulong **)plVar36[1];
              if (ppuVar17 == ppuVar20) {
                if ((plVar36[3] == uVar19) &&
                   (iVar12 = bcmp(plVar36[2],pbVar13,uVar19), ppuVar34 = ppuStack_338, iVar12 == 0))
                goto LAB_0cc1004a;
              }
              else {
                if (ppuVar44 <= ppuVar20) {
                  if (((ulong)ppuVar20 | (ulong)ppuVar44) >> 0x20 == 0) {
                    ppuVar20 = (ulong **)
                               (((ulong)ppuVar20 & 0xffffffff) % ((ulong)ppuVar44 & 0xffffffff));
                  }
                  else {
                    ppuVar20 = (ulong **)((ulong)ppuVar20 % (ulong)ppuVar44);
                  }
                }
                if (ppuVar20 != ppuVar34) break;
              }
              plVar36 = (long *)*plVar36;
            } while (plVar36 != (long *)0x0);
          }
        }
      }
    }
    goto LAB_0cc10070;
  }
  goto LAB_0cc0fabc;
LAB_0cc1004a:
  (**(code **)(plVar36[4] + 0x10))(plVar36 + 4,pbVar16 + 0x38,&uStack_1b8);
LAB_0cc10070:
  pppuStack_3a8 = (ulong ***)&UNK_011ff877;
  pppuStack_3a0 = (ulong ***)0xd;
  pbVar14 = (byte *)func_0x0d6c97a0(pbStack_328,&pppuStack_3a8);
  if (pbVar14 == pbStack_320) {
    pbVar16 = (byte *)0x0;
  }
  else {
    pbVar16 = pbVar14 + 0x38;
    if (*(int *)(pbVar14 + 0x60) != 10) {
      pbVar16 = (byte *)0x0;
    }
  }
  pppuStack_3a8 = (ulong ***)&UNK_011d5876;
  pppuStack_3a0 = (ulong ***)0x5;
  pbVar14 = pbVar16 + 8;
  pbVar13 = (byte *)func_0x0d6c97a0(pbVar14,&pppuStack_3a8);
  pbVar16 = pbVar16 + 0x10;
  if (pbVar13 == pbVar16) {
    pbVar15 = (byte *)0x0;
  }
  else {
    pbVar15 = pbVar13 + 0x38;
    if (*(int *)(pbVar13 + 0x60) != 8) {
      pbVar15 = (byte *)0x0;
    }
  }
  puVar18 = (ulong *)(pbVar15 + 8);
  if (pbVar15 == (byte *)0x0) {
    puVar18 = (ulong *)&UNK_01e79d90;
  }
  if (&uStack_160 != puVar18) {
    bVar2 = (byte)*puVar18;
    if ((uStack_160 & 1) == 0) {
      if ((bVar2 & 1) == 0) {
        uStack_150 = puVar18[2];
        uStack_160 = *puVar18;
        uStack_158 = puVar18[1];
      }
      else {
        func_0x04885070(&uStack_160,puVar18[2],puVar18[1]);
      }
    }
    else {
      bVar46 = (bVar2 & 1) != 0;
      pbVar13 = (byte *)((long)puVar18 + 1);
      if (bVar46) {
        pbVar13 = (byte *)puVar18[2];
      }
      uVar19 = (ulong)(bVar2 >> 1);
      if (bVar46) {
        uVar19 = puVar18[1];
      }
      FUN_04885120(&uStack_160,pbVar13,uVar19);
    }
  }
  pppuStack_3a8 = (ulong ***)&UNK_01391889;
  pppuStack_3a0 = (ulong ***)0x8;
  pbVar13 = (byte *)func_0x0d6c97a0(pbVar14,&pppuStack_3a8);
  if (pbVar13 == pbVar16) {
    pbVar15 = (byte *)0x0;
  }
  else {
    pbVar15 = pbVar13 + 0x38;
    if (*(int *)(pbVar13 + 0x60) != 8) {
      pbVar15 = (byte *)0x0;
    }
  }
  pbVar13 = pbVar15 + 8;
  if (pbVar15 == (byte *)0x0) {
    pbVar13 = &UNK_01e79d90;
  }
  uVar10 = func_0x0cc13480(pbVar13,&uStack_1d8);
  uStack_148 = CONCAT11(uStack_148._1_1_,uVar10);
  pppuStack_3a8 = (ulong ***)&DAT_0148af92;
  pppuStack_3a0 = (ulong ***)0x15;
  pbVar14 = (byte *)func_0x0d6c97a0(pbVar14,&pppuStack_3a8);
  if ((pbVar14 == pbVar16) || (*(int *)(pbVar14 + 0x60) != 1)) {
    bVar46 = false;
  }
  else {
    bVar46 = pbVar14[0x40] != 0;
  }
  uStack_148 = CONCAT11(bVar46,(undefined1)uStack_148);
  pppuStack_3a8 = (ulong ***)&UNK_0146141a;
  pppuStack_3a0 = (ulong ***)0xa;
  pbVar14 = (byte *)func_0x0d6c97a0(pbStack_328,&pppuStack_3a8);
  if ((pbVar14 != pbStack_320) && (*(int *)(pbVar14 + 0x60) == 9)) {
    lVar33 = *(long *)(pbVar14 + 0x40);
    uVar19 = *(long *)(pbVar14 + 0x48) - lVar33;
    if (0xffffffff < (long)(uVar19 * 0x20000000)) {
      uVar31 = 0;
      do {
        if (((uVar31 < (ulong)((long)uVar19 >> 3)) &&
            (cVar9 = (**(code **)(**(long **)(lVar33 + uVar31 * 8) + 0x30))(), cVar9 == '\n')) &&
           (lVar33 = *(long *)(lVar33 + uVar31 * 8), lVar33 != 0)) {
          pppuStack_3a8 = (ulong ***)0x0;
          pppuStack_3a0 = (ulong ***)0x0;
          pppuStack_398 = (ulong ***)0x0;
          ppppuStack_390 = (ulong ****)CONCAT71(ppppuStack_390._1_7_,1);
          ppppuStack_388 = (ulong ****)0x0;
          plVar36 = *(long **)(lVar33 + 0x10);
          plVar42 = (long *)(lVar33 + 0x10);
          plVar23 = plVar42;
          if (plVar36 == (long *)0x0) goto LAB_0cc103dc;
          do {
            bVar46 = (*(byte *)(plVar36 + 4) & 1) != 0;
            lVar33 = (long)plVar36 + 0x21;
            if (bVar46) {
              lVar33 = plVar36[6];
            }
            uVar19 = (ulong)(*(byte *)(plVar36 + 4) >> 1);
            if (bVar46) {
              uVar19 = plVar36[5];
            }
            uVar38 = 4;
            if (uVar19 < 4) {
              uVar38 = uVar19;
            }
            uVar11 = memcmp(&UNK_01410416,lVar33,uVar38);
            if ((uVar11 == 0) && (uVar11 = 0, uVar19 != 4)) {
              uVar11 = (uVar19 < 5) - 1 | 1;
            }
            if ((int)uVar11 < 1) {
              plVar23 = plVar36;
            }
            plVar36 = (long *)plVar36[0 < (int)uVar11];
          } while (plVar36 != (long *)0x0);
          if (plVar23 == plVar42) {
            plVar36 = (long *)0x0;
          }
          else {
            bVar46 = (*(byte *)(plVar23 + 4) & 1) != 0;
            lVar33 = (long)plVar23 + 0x21;
            if (bVar46) {
              lVar33 = plVar23[6];
            }
            uVar19 = (ulong)(*(byte *)(plVar23 + 4) >> 1);
            if (bVar46) {
              uVar19 = plVar23[5];
            }
            uVar38 = 4;
            if (uVar19 < 4) {
              uVar38 = uVar19;
            }
            iVar12 = memcmp(&UNK_01410416,lVar33,uVar38);
            if (iVar12 == 0) {
              if (uVar19 < 5) goto LAB_0cc103ef;
            }
            else if (-1 < iVar12) {
LAB_0cc103ef:
              plVar36 = plVar23 + 7;
              if ((int)plVar23[0xc] != 8) {
                plVar36 = (long *)0x0;
              }
              goto LAB_0cc10403;
            }
LAB_0cc103dc:
            plVar36 = (long *)0x0;
          }
LAB_0cc10403:
          ppppuVar29 = (ulong ****)(plVar36 + 1);
          if (plVar36 == (long *)0x0) {
            ppppuVar29 = (ulong ****)&UNK_01e79d90;
          }
          if (&pppuStack_3a8 != ppppuVar29) {
            if (((ulong)*ppppuVar29 & 1) == 0) {
              pppuStack_398 = ppppuVar29[2];
              pppuStack_3a8 = *ppppuVar29;
              pppuStack_3a0 = ppppuVar29[1];
            }
            else {
              func_0x04885070(&pppuStack_3a8,ppppuVar29[2],ppppuVar29[1]);
            }
          }
          plVar36 = (long *)*plVar42;
          plVar23 = plVar42;
          if (plVar36 != (long *)0x0) {
            do {
              bVar46 = (*(byte *)(plVar36 + 4) & 1) != 0;
              lVar33 = (long)plVar36 + 0x21;
              if (bVar46) {
                lVar33 = plVar36[6];
              }
              uVar19 = (ulong)(*(byte *)(plVar36 + 4) >> 1);
              if (bVar46) {
                uVar19 = plVar36[5];
              }
              uVar38 = 4;
              if (uVar19 < 4) {
                uVar38 = uVar19;
              }
              uVar11 = memcmp(&UNK_01373230,lVar33,uVar38);
              if ((uVar11 == 0) && (uVar11 = 0, uVar19 != 4)) {
                uVar11 = (uVar19 < 5) - 1 | 1;
              }
              if ((int)uVar11 < 1) {
                plVar23 = plVar36;
              }
              plVar36 = (long *)plVar36[0 < (int)uVar11];
            } while (plVar36 != (long *)0x0);
            if (plVar23 != plVar42) {
              bVar46 = (*(byte *)(plVar23 + 4) & 1) != 0;
              lVar33 = (long)plVar23 + 0x21;
              if (bVar46) {
                lVar33 = plVar23[6];
              }
              uVar19 = (ulong)(*(byte *)(plVar23 + 4) >> 1);
              if (bVar46) {
                uVar19 = plVar23[5];
              }
              uVar38 = 4;
              if (uVar19 < 4) {
                uVar38 = uVar19;
              }
              iVar12 = memcmp(&UNK_01373230,lVar33,uVar38);
              if (iVar12 == 0) {
                if (uVar19 < 5) goto LAB_0cc1051f;
              }
              else if (-1 < iVar12) {
LAB_0cc1051f:
                if ((int)plVar23[0xc] == 9) {
                  func_0x0d6c2650(&ppppuStack_318,plVar23 + 7);
                  ppppuVar21 = ppppuStack_318;
                  ppppuVar29 = ppppuStack_388;
                  ppppuStack_318 = (ulong ****)0x0;
                  ppppuStack_388 = ppppuVar21;
                  if (ppppuVar29 != (ulong ****)0x0) {
                    (*(code *)(*ppppuVar29)[1])();
                    ppppuVar29 = ppppuStack_318;
                    ppppuStack_318 = (ulong ****)0x0;
                    if (ppppuVar29 != (ulong ****)0x0) {
                      (*(code *)(*ppppuVar29)[1])();
                    }
                  }
                  uVar10 = (**(code **)(**(long **)plVar23[8] + 0x30))();
                  puVar43 = puStack_170;
                  ppppuStack_390 = (ulong ****)CONCAT71(ppppuStack_390._1_7_,uVar10);
                  if (puStack_170 < puStack_168) {
                    *puStack_170 = 0;
                    puStack_170[1] = 0;
                    puStack_170[2] = 0;
                    *(undefined1 *)(puStack_170 + 3) = 1;
                    puStack_170[4] = 0;
                    func_0x0cc0a050(puStack_170,&pppuStack_3a8);
                    puStack_170 = puVar43 + 5;
                  }
                  else {
                    puStack_170 = (undefined8 *)func_0x0cc84950(&uStack_178,&pppuStack_3a8);
                  }
                }
              }
            }
          }
          ppppuVar29 = ppppuStack_388;
          ppppuStack_388 = (ulong ****)0x0;
          if (ppppuVar29 != (ulong ****)0x0) {
            (*(code *)(*ppppuVar29)[1])();
          }
          if (((ulong)pppuStack_3a8 & 1) != 0) {
            func_0x0412a280(pppuStack_398,(ulong)pppuStack_3a8 & 0xfffffffffffffffe);
          }
        }
        uVar31 = uVar31 + 1;
        lVar33 = *(long *)(pbVar14 + 0x40);
        uVar19 = *(long *)(pbVar14 + 0x48) - lVar33;
      } while ((long)uVar31 < (long)(int)(uVar19 >> 3));
    }
  }
  pppuStack_3a8 = (ulong ***)&UNK_0124f693;
  pppuStack_3a0 = (ulong ***)0x6;
  pbVar14 = (byte *)func_0x0d6c97a0(pbStack_328,&pppuStack_3a8);
  if ((pbVar14 != pbStack_320) && (*(int *)(pbVar14 + 0x60) == 9)) {
    lVar33 = *(long *)(pbVar14 + 0x40);
    uVar19 = *(long *)(pbVar14 + 0x48) - lVar33;
    if (0xffffffff < (long)(uVar19 * 0x20000000)) {
      uVar31 = 0;
      pbStack_290 = pbVar14;
      do {
        if (((uVar31 < (ulong)((long)uVar19 >> 3)) &&
            (cVar9 = (**(code **)(**(long **)(lVar33 + uVar31 * 8) + 0x30))(), cVar9 == '\n')) &&
           (lVar33 = *(long *)(lVar33 + uVar31 * 8), lVar33 != 0)) {
          lVar45 = *(long *)(lVar33 + 0x10);
          if (lVar45 == 0) goto LAB_0cc107b6;
          lVar26 = lVar33 + 0x10;
          do {
            bVar46 = (*(byte *)(lVar45 + 0x20) & 1) != 0;
            lVar35 = lVar45 + 0x21;
            if (bVar46) {
              lVar35 = *(long *)(lVar45 + 0x30);
            }
            uVar19 = (ulong)(*(byte *)(lVar45 + 0x20) >> 1);
            if (bVar46) {
              uVar19 = *(ulong *)(lVar45 + 0x28);
            }
            uVar38 = 4;
            if (uVar19 < 4) {
              uVar38 = uVar19;
            }
            uVar11 = memcmp(&UNK_01410416,lVar35,uVar38);
            if ((uVar11 == 0) && (uVar11 = 0, uVar19 != 4)) {
              uVar11 = (uVar19 < 5) - 1 | 1;
            }
            if ((int)uVar11 < 1) {
              lVar26 = lVar45;
            }
            lVar45 = *(long *)(lVar45 + (ulong)(0 < (int)uVar11) * 8);
          } while (lVar45 != 0);
          if (lVar26 == lVar33 + 0x10) {
            lVar45 = 0;
          }
          else {
            bVar46 = (*(byte *)(lVar26 + 0x20) & 1) != 0;
            lVar45 = lVar26 + 0x21;
            if (bVar46) {
              lVar45 = *(long *)(lVar26 + 0x30);
            }
            uVar19 = (ulong)(*(byte *)(lVar26 + 0x20) >> 1);
            if (bVar46) {
              uVar19 = *(ulong *)(lVar26 + 0x28);
            }
            uVar38 = 4;
            if (uVar19 < 4) {
              uVar38 = uVar19;
            }
            iVar12 = memcmp(&UNK_01410416,lVar45,uVar38);
            if (iVar12 == 0) {
              if (uVar19 < 5) goto LAB_0cc107ce;
            }
            else if (-1 < iVar12) {
LAB_0cc107ce:
              lVar45 = lVar26 + 0x38;
              if (*(int *)(lVar26 + 0x60) != 8) {
                lVar45 = 0;
              }
              goto LAB_0cc107df;
            }
LAB_0cc107b6:
            lVar45 = 0;
          }
LAB_0cc107df:
          pbVar16 = (byte *)(lVar45 + 8);
          if (lVar45 == 0) {
            pbVar16 = &UNK_01e79d90;
          }
          if ((*(long *)(param_1 + 0xd0) == 0) &&
             (cVar9 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
             cVar9 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          if ((**(char **)(param_1 + 0xd0) == '\0') &&
             (cVar9 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e)
             , cVar9 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          func_0x0cb9c230(&ppppuStack_318,lStack_240,pbVar16,*(undefined8 *)(param_1 + 0xe0));
          ppppuVar29 = ppppuStack_318;
          pbVar14 = pbStack_290;
          if (ppppuStack_318 != (ulong ****)0x0) {
            if ((*(long *)(param_1 + 0xd0) == 0) &&
               (cVar9 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e)
               , cVar9 != '\0')) {
              _DAT_00000000 = 0xdeadc0de;
            }
            if ((**(char **)(param_1 + 0xd0) == '\0') &&
               (cVar9 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,
                                        &UNK_013f915e), cVar9 != '\0')) {
              _DAT_00000000 = 0xdeadc0de;
            }
            (*(code *)(*ppppuVar29)[3])(ppppuVar29,lVar33,*(undefined8 *)(param_1 + 0xe0));
            pbVar14 = pbVar16 + 1;
            bVar46 = (*pbVar16 & 1) == 0;
            pbVar13 = *(byte **)(pbVar16 + 0x10);
            if (bVar46) {
              pbVar13 = pbVar14;
            }
            uVar19 = (ulong)(*pbVar16 >> 1);
            if (!bVar46) {
              uVar19 = *(ulong *)(pbVar16 + 8);
            }
            ppuVar17 = (ulong **)func_0x04883620(&pppuStack_3a8,pbVar13,uVar19);
            ppuVar44 = ppuStack_138;
            if (ppuStack_138 != (ulong **)0x0) {
              uVar19 = (long)ppuStack_138 - ((ulong)ppuStack_138 >> 1 & 0x5555555555555555);
              uVar19 = (uVar19 >> 2 & 0x3333333333333333) + (uVar19 & 0x3333333333333333);
              uVar19 = ((uVar19 >> 4) + uVar19 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
              if (uVar19 >> 0x38 < 2) {
                ppuStack_338 = (ulong **)((long)ppuStack_138 - 1U & (ulong)ppuVar17);
              }
              else {
                ppuStack_338 = ppuVar17;
                if (ppuStack_138 <= ppuVar17) {
                  if (((ulong)ppuVar17 | (ulong)ppuStack_138) >> 0x20 == 0) {
                    ppuStack_338 = (ulong **)
                                   (((ulong)ppuVar17 & 0xffffffff) %
                                   ((ulong)ppuStack_138 & 0xffffffff));
                  }
                  else {
                    ppuStack_338 = (ulong **)((ulong)ppuVar17 % (ulong)ppuStack_138);
                  }
                }
              }
              plVar36 = *(long **)(lStack_140 + (long)ppuStack_338 * 8);
              if ((plVar36 != (long *)0x0) && (plVar36 = (long *)*plVar36, plVar36 != (long *)0x0))
              {
                if ((*pbVar16 & 1) == 0) {
                  uVar38 = (ulong)(*pbVar16 >> 1);
                }
                else {
                  uVar38 = *(ulong *)(pbVar16 + 8);
                  pbVar14 = *(byte **)(pbVar16 + 0x10);
                }
                if ((byte)(uVar19 >> 0x38) < 2) {
                  pbVar13 = (byte *)((long)ppuStack_138 - 1);
                  pbStack_298 = pbVar13;
                  do {
                    if ((ulong **)plVar36[1] == ppuVar17) {
                      bVar2 = *(byte *)(plVar36 + 2);
                      if ((bVar2 & 1) == 0) {
                        uVar19 = (ulong)(bVar2 >> 1);
                      }
                      else {
                        uVar19 = plVar36[3];
                      }
                      if (uVar19 == uVar38) {
                        if ((bVar2 & 1) == 0) {
                          lVar33 = (long)plVar36 + 0x11;
                        }
                        else {
                          lVar33 = plVar36[4];
                        }
                        iVar12 = bcmp(lVar33,pbVar14,uVar38);
                        pbVar13 = pbStack_298;
                        if (iVar12 == 0) goto LAB_0cc10efe;
                      }
                    }
                    else if ((ulong **)((ulong)plVar36[1] & (ulong)pbVar13) != ppuStack_338) break;
                    plVar36 = (long *)*plVar36;
                  } while (plVar36 != (long *)0x0);
                }
                else {
                  do {
                    ppuVar34 = (ulong **)plVar36[1];
                    if (ppuVar34 == ppuVar17) {
                      bVar2 = *(byte *)(plVar36 + 2);
                      if ((bVar2 & 1) == 0) {
                        uVar19 = (ulong)(bVar2 >> 1);
                      }
                      else {
                        uVar19 = plVar36[3];
                      }
                      if (uVar19 == uVar38) {
                        if ((bVar2 & 1) == 0) {
                          lVar33 = (long)plVar36 + 0x11;
                        }
                        else {
                          lVar33 = plVar36[4];
                        }
                        iVar12 = bcmp(lVar33,pbVar14,uVar38);
                        if (iVar12 == 0) goto LAB_0cc10efe;
                      }
                    }
                    else {
                      if (ppuVar44 <= ppuVar34) {
                        if (((ulong)ppuVar34 | (ulong)ppuVar44) >> 0x20 == 0) {
                          ppuVar34 = (ulong **)
                                     (((ulong)ppuVar34 & 0xffffffff) %
                                     ((ulong)ppuVar44 & 0xffffffff));
                        }
                        else {
                          ppuVar34 = (ulong **)((ulong)ppuVar34 % (ulong)ppuVar44);
                        }
                      }
                      if (ppuVar34 != ppuStack_338) break;
                    }
                    plVar36 = (long *)*plVar36;
                  } while (plVar36 != (long *)0x0);
                }
              }
            }
            pppuVar22 = (ulong ***)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
            if (pppuVar22 == (ulong ***)0x0) {
              func_0x0eec74c0(0x38,0);
            }
            pppuStack_3a0 = (ulong ***)&lStack_140;
            pppuStack_398 = (ulong ***)0x0;
            *pppuVar22 = (ulong **)0x0;
            pppuVar22[1] = ppuVar17;
            pppuStack_3a8 = pppuVar22;
            if ((*pbVar16 & 1) == 0) {
              pppuVar22[4] = *(ulong ***)(pbVar16 + 0x10);
              uVar6 = *(undefined4 *)(pbVar16 + 4);
              uVar7 = *(undefined4 *)(pbVar16 + 8);
              uVar8 = *(undefined4 *)(pbVar16 + 0xc);
              *(undefined4 *)(pppuVar22 + 2) = *(undefined4 *)pbVar16;
              *(undefined4 *)((long)pppuVar22 + 0x14) = uVar6;
              *(undefined4 *)(pppuVar22 + 3) = uVar7;
              *(undefined4 *)((long)pppuVar22 + 0x1c) = uVar8;
            }
            else {
              func_0x0412e5e0(pppuVar22 + 2,*(undefined8 *)(pbVar16 + 0x10),
                              *(undefined8 *)(pbVar16 + 8));
            }
            ppppuVar29 = ppppuStack_318;
            pppuVar22[5] = (ulong **)ppppuStack_318;
            if (ppppuStack_318 == (ulong ****)0x0) {
              pppuVar22[6] = (ulong **)0x0;
              uVar19 = uStack_128 + 1;
              if (-1 < (long)uVar19) goto LAB_0cc10c69;
LAB_0cc10c86:
              fVar47 = (float)uVar19;
            }
            else {
              ppuVar34 = (ulong **)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
              if (ppuVar34 == (ulong **)0x0) {
                func_0x0eec74c0(0x20,0);
              }
              ppuVar34[1] = (ulong *)0x0;
              ppuVar34[2] = (ulong *)0x0;
              *ppuVar34 = (ulong *)&UNK_0f3f8ba8;
              ppuVar34[3] = (ulong *)ppppuVar29;
              pppuVar22[6] = ppuVar34;
              uVar19 = uStack_128 + 1;
              if ((long)uVar19 < 0) goto LAB_0cc10c86;
LAB_0cc10c69:
              fVar47 = (float)(long)uVar19;
            }
            ppppuStack_318 = (ulong ****)0x0;
            pppuStack_398 = (ulong ***)CONCAT71(pppuStack_398._1_7_,1);
            if ((long)ppuVar44 < 0) {
              fVar48 = (float)ppuVar44;
              if (ppuVar44 != (ulong **)0x0) goto LAB_0cc10cec;
LAB_0cc10d02:
              uVar19 = 1;
              if ((ulong **)0x2 < ppuVar44) {
                uVar19 = (ulong)(((ulong)ppuVar44 & (long)ppuVar44 - 1U) != 0);
              }
              ppuVar34 = (ulong **)((long)ppuVar44 * 2 | uVar19);
              fVar47 = (float)func_0x0eee3ab0(fVar47 / fStack_120);
              ppuVar44 = (ulong **)
                         ((long)(fVar47 - _DAT_01198778) & (long)fVar47 >> 0x3f | (long)fVar47);
              if (ppuVar44 < ppuVar34) {
                ppuVar44 = ppuVar34;
              }
              ppuVar34 = (ulong **)0x2;
              if ((ppuVar44 == (ulong **)0x1) ||
                 (ppuVar34 = ppuVar44, ((ulong)ppuVar44 & (long)ppuVar44 - 1U) == 0)) {
                bVar46 = ppuVar34 < ppuStack_138;
                if (ppuVar34 <= ppuStack_138) goto LAB_0cc10d9c;
LAB_0cc10d72:
                func_0x0cba37d0(&lStack_140,ppuVar34);
              }
              else {
                ppuVar34 = (ulong **)func_0x0412c3f0();
                bVar46 = ppuVar34 < ppuStack_138;
                if (ppuStack_138 < ppuVar34) goto LAB_0cc10d72;
LAB_0cc10d9c:
                ppuVar44 = ppuStack_138;
                if (bVar46) {
                  fVar47 = (float)func_0x0eee3ab0((float)uStack_128 / fStack_120);
                  ppuVar20 = (ulong **)
                             ((long)(fVar47 - _DAT_01198778) & (long)fVar47 >> 0x3f | (long)fVar47);
                  if ((ppuVar44 < (ulong **)0x3) ||
                     (uVar19 = (long)ppuVar44 - ((ulong)ppuVar44 >> 1 & 0x5555555555555555),
                     uVar19 = (uVar19 >> 2 & 0x3333333333333333) + (uVar19 & 0x3333333333333333),
                     1 < (byte)(((uVar19 >> 4) + uVar19 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                               0x38))) {
                    ppuVar20 = (ulong **)func_0x0412c3f0(ppuVar20);
                  }
                  else if ((ulong **)0x1 < ppuVar20) {
                    lVar33 = 0x3f;
                    if ((long)ppuVar20 - 1U != 0) {
                      for (; (long)ppuVar20 - 1U >> lVar33 == 0; lVar33 = lVar33 + -1) {
                      }
                    }
                    ppuVar20 = (ulong **)(1L << (-((byte)lVar33 ^ 0x3f) & 0x3f));
                  }
                  if (ppuVar34 <= ppuVar20) {
                    ppuVar34 = ppuVar20;
                  }
                  if (ppuVar34 < ppuVar44) goto LAB_0cc10d72;
                }
              }
              ppuVar44 = ppuStack_138;
              if (((ulong)ppuStack_138 & (long)ppuStack_138 - 1U) == 0) {
                ppuVar34 = (ulong **)((ulong)ppuVar17 & (long)ppuStack_138 - 1U);
              }
              else {
                ppuVar34 = ppuVar17;
                if (ppuStack_138 <= ppuVar17) {
                  if (((ulong)ppuVar17 | (ulong)ppuStack_138) >> 0x20 == 0) {
                    ppuVar34 = (ulong **)
                               (((ulong)ppuVar17 & 0xffffffff) % ((ulong)ppuStack_138 & 0xffffffff))
                    ;
                  }
                  else {
                    ppuVar34 = (ulong **)((ulong)ppuVar17 % (ulong)ppuStack_138);
                  }
                }
              }
            }
            else {
              fVar48 = (float)(long)ppuVar44;
              if (ppuVar44 == (ulong **)0x0) goto LAB_0cc10d02;
LAB_0cc10cec:
              ppuVar34 = ppuStack_338;
              if (fVar48 * fStack_120 < fVar47) goto LAB_0cc10d02;
            }
            plVar36 = *(long **)(lStack_140 + (long)ppuVar34 * 8);
            if (plVar36 == (long *)0x0) {
              *pppuStack_3a8 = (ulong **)pppuStack_130;
              pppuStack_130 = pppuStack_3a8;
              *(ulong *****)(lStack_140 + (long)ppuVar34 * 8) = &pppuStack_130;
              if (*pppuStack_3a8 != (ulong **)0x0) {
                ppuVar17 = (ulong **)(*pppuStack_3a8)[1];
                if (((ulong)ppuVar44 & (long)ppuVar44 - 1U) == 0) {
                  *(ulong ****)(lStack_140 + ((ulong)ppuVar17 & (long)ppuVar44 - 1U) * 8) =
                       pppuStack_3a8;
                }
                else {
                  if (ppuVar44 <= ppuVar17) {
                    if (((ulong)ppuVar17 | (ulong)ppuVar44) >> 0x20 == 0) {
                      *(ulong ****)
                       (lStack_140 +
                       (((ulong)ppuVar17 & 0xffffffff) % ((ulong)ppuVar44 & 0xffffffff)) * 8) =
                           pppuStack_3a8;
                      goto LAB_0cc10ef6;
                    }
                    ppuVar17 = (ulong **)((ulong)ppuVar17 % (ulong)ppuVar44);
                  }
                  *(ulong ****)(lStack_140 + (long)ppuVar17 * 8) = pppuStack_3a8;
                }
              }
            }
            else {
              *pppuStack_3a8 = (ulong **)*plVar36;
              *plVar36 = (long)pppuStack_3a8;
            }
LAB_0cc10ef6:
            uStack_128 = uStack_128 + 1;
LAB_0cc10efe:
            ppppuVar29 = ppppuStack_318;
            ppppuStack_318 = (ulong ****)0x0;
            pbVar14 = pbStack_290;
            if (ppppuVar29 != (ulong ****)0x0) {
              (*(code *)(*ppppuVar29)[1])();
              pbVar14 = pbStack_290;
            }
          }
        }
        uVar31 = uVar31 + 1;
        lVar33 = *(long *)(pbVar14 + 0x40);
        uVar19 = *(long *)(pbVar14 + 0x48) - lVar33;
      } while ((long)uVar31 < (long)(int)(uVar19 >> 3));
    }
  }
  pppuStack_3a8 = (ulong ***)&UNK_011ed181;
  pppuStack_3a0 = (ulong ***)0xa;
  pbVar14 = (byte *)func_0x0d6c97a0(pbStack_328,&pppuStack_3a8);
  plVar36 = plStack_330;
  if (pbVar14 == pbStack_320) {
    pbVar16 = (byte *)0x0;
  }
  else {
    pbVar16 = pbVar14 + 0x38;
    if (*(int *)(pbVar14 + 0x60) != 10) {
      pbVar16 = (byte *)0x0;
    }
  }
  func_0x0cc13570(param_1,pbVar16,&puStack_70,&uStack_110);
  pppuStack_3a8 = (ulong ***)&UNK_011c497f;
  pppuStack_3a0 = (ulong ***)0xc;
  pbVar14 = (byte *)func_0x0d6c97a0(pbStack_328,&pppuStack_3a8);
  if ((pbVar14 != pbStack_320) && (*(int *)(pbVar14 + 0x60) == 9)) {
    lVar33 = *(long *)(pbVar14 + 0x40);
    uVar19 = *(long *)(pbVar14 + 0x48) - lVar33;
    if (0xffffffff < (long)(uVar19 * 0x20000000)) {
      pbStack_290 = (byte *)CONCAT44(pbStack_290._4_4_,(int)(short)plVar36);
      ppuVar44 = (ulong **)0x0;
      pbStack_298 = pbVar14;
      do {
        if (((ppuVar44 < (ulong **)((long)uVar19 >> 3)) &&
            (cVar9 = (**(code **)(**(long **)(lVar33 + (long)ppuVar44 * 8) + 0x30))(), cVar9 == '\n'
            )) && (lVar33 = *(long *)(lVar33 + (long)ppuVar44 * 8), lVar33 != 0)) {
          puStack_308 = (undefined8 *)0x0;
          uStack_300 = 0;
          ppppuStack_318 = (ulong ****)0x0;
          ppppuStack_310 = (ulong ****)0x0;
          fStack_2f8 = 1.0;
          puStack_2d0 = (undefined4 *)0x0;
          uStack_2c8 = 0;
          ppppuStack_2e0 = (ulong ****)0x0;
          puStack_2d8 = (undefined4 *)0x0;
          ppppuStack_2f0 = (ulong ****)0x0;
          ppppuStack_2e8 = (ulong ****)0x0;
          plVar36 = *(long **)(lVar33 + 0x10);
          plVar42 = (long *)(lVar33 + 0x10);
          plVar23 = plVar42;
          ppuStack_338 = ppuVar44;
          if (plVar36 == (long *)0x0) {
LAB_0cc1120b:
            plVar36 = (long *)0x0;
          }
          else {
            do {
              bVar46 = (*(byte *)(plVar36 + 4) & 1) != 0;
              lVar33 = (long)plVar36 + 0x21;
              if (bVar46) {
                lVar33 = plVar36[6];
              }
              uVar19 = (ulong)(*(byte *)(plVar36 + 4) >> 1);
              if (bVar46) {
                uVar19 = plVar36[5];
              }
              uVar31 = 10;
              if (uVar19 < 10) {
                uVar31 = uVar19;
              }
              uVar11 = memcmp(&UNK_011ed181,lVar33,uVar31);
              if ((uVar11 == 0) && (uVar11 = 0, uVar19 != 10)) {
                uVar11 = (uVar19 < 0xb) - 1 | 1;
              }
              if ((int)uVar11 < 1) {
                plVar23 = plVar36;
              }
              plVar36 = (long *)plVar36[0 < (int)uVar11];
            } while (plVar36 != (long *)0x0);
            if (plVar23 == plVar42) goto LAB_0cc1120b;
            bVar46 = (*(byte *)(plVar23 + 4) & 1) != 0;
            lVar33 = (long)plVar23 + 0x21;
            if (bVar46) {
              lVar33 = plVar23[6];
            }
            uVar19 = (ulong)(*(byte *)(plVar23 + 4) >> 1);
            if (bVar46) {
              uVar19 = plVar23[5];
            }
            uVar31 = 10;
            if (uVar19 < 10) {
              uVar31 = uVar19;
            }
            iVar12 = memcmp(&UNK_011ed181,lVar33,uVar31);
            if (iVar12 == 0) {
              if (10 < uVar19) goto LAB_0cc1120b;
            }
            else if (iVar12 < 0) goto LAB_0cc1120b;
            plVar36 = plVar23 + 7;
            if ((int)plVar23[0xc] != 10) {
              plVar36 = (long *)0x0;
            }
          }
          func_0x0cc13570(param_1,plVar36,&puStack_70,&ppppuStack_318);
          plVar23 = (long *)*plVar42;
          plVar36 = plVar23;
          plStack_330 = plVar42;
          if (plVar23 == (long *)0x0) {
LAB_0cc11946:
            plVar23 = (long *)0x0;
          }
          else {
            do {
              bVar46 = (*(byte *)(plVar36 + 4) & 1) != 0;
              lVar33 = (long)plVar36 + 0x21;
              if (bVar46) {
                lVar33 = plVar36[6];
              }
              uVar19 = (ulong)(*(byte *)(plVar36 + 4) >> 1);
              if (bVar46) {
                uVar19 = plVar36[5];
              }
              uVar31 = 9;
              if (uVar19 < 9) {
                uVar31 = uVar19;
              }
              uVar11 = memcmp(&UNK_0148afa8,lVar33,uVar31);
              if ((uVar11 == 0) && (uVar11 = 0, uVar19 != 9)) {
                uVar11 = (uVar19 < 10) - 1 | 1;
              }
              if ((int)uVar11 < 1) {
                plVar42 = plVar36;
              }
              plVar36 = (long *)plVar36[0 < (int)uVar11];
            } while (plVar36 != (long *)0x0);
            if (plVar42 != plStack_330) {
              bVar46 = (*(byte *)(plVar42 + 4) & 1) != 0;
              lVar33 = (long)plVar42 + 0x21;
              if (bVar46) {
                lVar33 = plVar42[6];
              }
              uVar19 = (ulong)(*(byte *)(plVar42 + 4) >> 1);
              if (bVar46) {
                uVar19 = plVar42[5];
              }
              uVar31 = 9;
              if (uVar19 < 9) {
                uVar31 = uVar19;
              }
              iVar12 = memcmp(&UNK_0148afa8,lVar33,uVar31);
              if (iVar12 == 0) {
                if (uVar19 < 10) goto LAB_0cc11320;
              }
              else if (-1 < iVar12) {
LAB_0cc11320:
                if (((int)plVar42[0xc] == 9) &&
                   (lVar33 = plVar42[8], 0 < (int)((ulong)(plVar42[9] - lVar33) >> 3))) {
                  lVar45 = 0;
                  do {
                    plVar36 = *(long **)(lVar33 + lVar45 * 8);
                    pbVar14 = &UNK_01e79d90;
                    if (plVar36 != (long *)0x0) {
                      cVar9 = (**(code **)(*plVar36 + 0x30))(plVar36);
                      pbVar14 = (byte *)(plVar36 + 1);
                      if (cVar9 != '\b') {
                        pbVar14 = &UNK_01e79d90;
                      }
                    }
                    ppppuVar29 = ppppuStack_2e8;
                    if (ppppuStack_2e8 < ppppuStack_2e0) {
                      *ppppuStack_2e8 = (ulong ***)0x0;
                      if ((*pbVar14 & 1) == 0) {
                        ppppuStack_2e8[3] = *(ulong ****)(pbVar14 + 0x10);
                        uVar6 = *(undefined4 *)(pbVar14 + 4);
                        uVar7 = *(undefined4 *)(pbVar14 + 8);
                        uVar8 = *(undefined4 *)(pbVar14 + 0xc);
                        *(undefined4 *)(ppppuStack_2e8 + 1) = *(undefined4 *)pbVar14;
                        *(undefined4 *)((long)ppppuStack_2e8 + 0xc) = uVar6;
                        *(undefined4 *)(ppppuStack_2e8 + 2) = uVar7;
                        *(undefined4 *)((long)ppppuStack_2e8 + 0x14) = uVar8;
                      }
                      else {
                        func_0x0412e5e0(ppppuStack_2e8 + 1,*(undefined8 *)(pbVar14 + 0x10),
                                        *(undefined8 *)(pbVar14 + 8));
                      }
                      ppppuVar29[4] = (ulong ***)0x0;
                      bVar2 = *(byte *)(ppppuVar29 + 1);
                      if ((bVar2 & 1) == 0) {
                        if (bVar2 >> 1 != 0) goto LAB_0cc114ed;
LAB_0cc11350:
                        pppuVar24 = (ulong ***)0x0;
                      }
                      else {
                        if (ppppuVar29[2] == (ulong ***)0x0) goto LAB_0cc11350;
LAB_0cc114ed:
                        if ((bVar2 & 1) == 0) {
                          pppuVar22 = (ulong ***)((long)ppppuVar29 + 9);
                          if (pppuVar22 != (ulong ***)0x0) goto LAB_0cc115d4;
                          goto LAB_0cc11350;
                        }
                        pppuVar22 = ppppuVar29[3];
                        if (pppuVar22 == (ulong ***)0x0) goto LAB_0cc11350;
LAB_0cc115d4:
                        if (*(byte *)pppuVar22 == 0) goto LAB_0cc11350;
                        uVar19 = func_0x0eee2e90(pppuVar22);
                        pppuVar24 = (ulong ***)0xcbf29ce484222325;
                        if (uVar19 != 0) {
                          if (7 < uVar19) {
                            uVar31 = uVar19 & 0xfffffffffffffff8;
                            do {
                              pppuVar24 = (ulong ***)
                                          (((((((((long)pppuVar24 * 0x100000001b3 ^
                                                 (ulong)*(byte *)pppuVar22) * 0x100000001b3 ^
                                                (ulong)*(byte *)((long)pppuVar22 + 1)) *
                                                0x100000001b3 ^
                                               (ulong)*(byte *)((long)pppuVar22 + 2)) *
                                               0x100000001b3 ^ (ulong)*(byte *)((long)pppuVar22 + 3)
                                              ) * 0x100000001b3 ^
                                             (ulong)*(byte *)((long)pppuVar22 + 4)) * 0x100000001b3
                                            ^ (ulong)*(byte *)((long)pppuVar22 + 5)) * 0x100000001b3
                                           ^ (ulong)*(byte *)((long)pppuVar22 + 6)) * 0x100000001b3
                                          ^ (ulong)*(byte *)((long)pppuVar22 + 7));
                              pppuVar22 = pppuVar22 + 1;
                              uVar31 = uVar31 - 8;
                            } while (uVar31 != 0);
                          }
                          if ((uVar19 & 7) != 0) {
                            uVar31 = 0;
                            do {
                              pppuVar24 = (ulong ***)
                                          ((long)pppuVar24 * 0x100000001b3 ^
                                          (ulong)*(byte *)((long)pppuVar22 + uVar31));
                              uVar31 = uVar31 + 1;
                            } while (((uint)uVar19 & 7) != uVar31);
                          }
                        }
                      }
                      *ppppuVar29 = pppuVar24;
                      ppppuVar29 = ppppuVar29 + 5;
                      ppppuVar41 = ppppuStack_2f0;
                    }
                    else {
                      lVar33 = (long)ppppuStack_2e8 - (long)ppppuStack_2f0;
                      uVar19 = (lVar33 >> 3) * -0x3333333333333333 + 1;
                      if (0x666666666666666 < uVar19) goto LAB_0cc13129;
                      lVar26 = (long)ppppuStack_2e0 - (long)ppppuStack_2f0 >> 3;
                      uVar31 = lVar26 * -0x6666666666666666;
                      if (uVar19 < uVar31) {
                        uVar19 = uVar31;
                      }
                      if (0x333333333333332 < (ulong)(lVar26 * -0x3333333333333333)) {
                        uVar19 = 0x666666666666666;
                      }
                      ppppuStack_388 = (ulong ****)&ppppuStack_2f0;
                      if (uVar19 == 0) {
                        pppuVar22 = (ulong ***)0x0;
                      }
                      else {
                        if (0x666666666666666 < uVar19) goto LAB_0cc13138;
                        pppuVar22 = (ulong ***)
                                    (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar19 * 0x28)
                        ;
                        if (pppuVar22 == (ulong ***)0x0) {
                          func_0x0eec74c0(uVar19 * 0x28,0);
                          pppuVar22 = (ulong ***)0x0;
                        }
                      }
                      pppuVar24 = (ulong ***)((long)pppuVar22 + lVar33);
                      ppppuStack_390 = (ulong ****)(pppuVar22 + uVar19 * 5);
                      *(undefined8 *)((long)pppuVar22 + lVar33) = 0;
                      puVar40 = (undefined4 *)((long)pppuVar22 + lVar33 + 8);
                      pppuStack_3a8 = pppuVar22;
                      pppuStack_3a0 = pppuVar24;
                      pppuStack_398 = pppuVar24;
                      if ((*pbVar14 & 1) == 0) {
                        *(undefined8 *)((long)pppuVar22 + lVar33 + 0x18) =
                             *(undefined8 *)(pbVar14 + 0x10);
                        uVar6 = *(undefined4 *)(pbVar14 + 4);
                        uVar7 = *(undefined4 *)(pbVar14 + 8);
                        uVar8 = *(undefined4 *)(pbVar14 + 0xc);
                        *puVar40 = *(undefined4 *)pbVar14;
                        *(undefined4 *)((long)pppuVar22 + lVar33 + 0xc) = uVar6;
                        *(undefined4 *)((long)pppuVar22 + lVar33 + 0x10) = uVar7;
                        *(undefined4 *)((long)pppuVar22 + lVar33 + 0x14) = uVar8;
                      }
                      else {
                        func_0x0412e5e0(puVar40,*(undefined8 *)(pbVar14 + 0x10),
                                        *(undefined8 *)(pbVar14 + 8));
                      }
                      pppuVar24[4] = (ulong **)0x0;
                      bVar2 = *(byte *)(pppuVar24 + 1);
                      if ((bVar2 & 1) == 0) {
                        if (bVar2 >> 1 != 0) goto LAB_0cc115ad;
LAB_0cc11770:
                        ppuVar17 = (ulong **)0x0;
                      }
                      else {
                        if (pppuVar24[2] == (ulong **)0x0) goto LAB_0cc11770;
LAB_0cc115ad:
                        if ((bVar2 & 1) == 0) {
                          ppuVar44 = (ulong **)((long)pppuVar24 + 9);
                          if (ppuVar44 != (ulong **)0x0) goto LAB_0cc116a5;
                          goto LAB_0cc11770;
                        }
                        ppuVar44 = pppuVar24[3];
                        if (ppuVar44 == (ulong **)0x0) goto LAB_0cc11770;
LAB_0cc116a5:
                        if (*(byte *)ppuVar44 == 0) goto LAB_0cc11770;
                        uVar19 = func_0x0eee2e90(ppuVar44);
                        ppuVar17 = (ulong **)0xcbf29ce484222325;
                        if (uVar19 != 0) {
                          if (7 < uVar19) {
                            uVar31 = uVar19 & 0xfffffffffffffff8;
                            do {
                              ppuVar17 = (ulong **)
                                         (((((((((long)ppuVar17 * 0x100000001b3 ^
                                                (ulong)*(byte *)ppuVar44) * 0x100000001b3 ^
                                               (ulong)*(byte *)((long)ppuVar44 + 1)) * 0x100000001b3
                                              ^ (ulong)*(byte *)((long)ppuVar44 + 2)) *
                                              0x100000001b3 ^ (ulong)*(byte *)((long)ppuVar44 + 3))
                                             * 0x100000001b3 ^ (ulong)*(byte *)((long)ppuVar44 + 4))
                                            * 0x100000001b3 ^ (ulong)*(byte *)((long)ppuVar44 + 5))
                                           * 0x100000001b3 ^ (ulong)*(byte *)((long)ppuVar44 + 6)) *
                                          0x100000001b3 ^ (ulong)*(byte *)((long)ppuVar44 + 7));
                              ppuVar44 = ppuVar44 + 1;
                              uVar31 = uVar31 - 8;
                            } while (uVar31 != 0);
                          }
                          if ((uVar19 & 7) != 0) {
                            uVar31 = 0;
                            do {
                              ppuVar17 = (ulong **)
                                         ((long)ppuVar17 * 0x100000001b3 ^
                                         (ulong)*(byte *)((long)ppuVar44 + uVar31));
                              uVar31 = uVar31 + 1;
                            } while (((uint)uVar19 & 7) != uVar31);
                          }
                        }
                      }
                      ppppuVar29 = ppppuStack_2e8;
                      pppuVar22 = pppuStack_398;
                      *pppuVar24 = ppuVar17;
                      ppppuVar41 = (ulong ****)
                                   (((long)ppppuStack_2f0 - (long)ppppuStack_2e8) +
                                   (long)pppuStack_3a0);
                      ppppuVar21 = ppppuVar41;
                      ppppuVar30 = ppppuStack_2f0;
                      if (ppppuStack_2f0 != ppppuStack_2e8) {
                        do {
                          ppppuVar21[2] = (ulong ***)0x0;
                          ppppuVar21[3] = (ulong ***)0x0;
                          *ppppuVar21 = (ulong ***)0x0;
                          ppppuVar21[1] = (ulong ***)0x0;
                          ppppuVar21[4] = (ulong ***)0x0;
                          ppppuVar21[3] = ppppuVar30[3];
                          uVar6 = *(undefined4 *)((long)ppppuVar30 + 0xc);
                          uVar7 = *(undefined4 *)(ppppuVar30 + 2);
                          uVar8 = *(undefined4 *)((long)ppppuVar30 + 0x14);
                          *(undefined4 *)(ppppuVar21 + 1) = *(undefined4 *)(ppppuVar30 + 1);
                          *(undefined4 *)((long)ppppuVar21 + 0xc) = uVar6;
                          *(undefined4 *)(ppppuVar21 + 2) = uVar7;
                          *(undefined4 *)((long)ppppuVar21 + 0x14) = uVar8;
                          *(undefined2 *)(ppppuVar30 + 1) = 0;
                          *ppppuVar21 = *ppppuVar30;
                          ppppuVar30 = ppppuVar30 + 5;
                          ppppuVar21 = ppppuVar21 + 5;
                          ppppuVar25 = ppppuStack_2f0;
                        } while (ppppuVar30 != ppppuStack_2e8);
                        do {
                          if (((ulong)ppppuVar25[1] & 1) != 0) {
                            func_0x0412a280(ppppuVar25[3],(ulong)ppppuVar25[1] & 0xfffffffffffffffe)
                            ;
                          }
                          ppppuVar25 = ppppuVar25 + 5;
                        } while (ppppuVar25 != ppppuVar29);
                      }
                      ppppuVar21 = ppppuStack_2e0;
                      ppppuVar29 = (ulong ****)(pppuVar22 + 5);
                      ppppuStack_2e0 = ppppuStack_390;
                      if (ppppuStack_2f0 != (ulong ****)0x0) {
                        lVar33 = (long)ppppuVar21 - (long)ppppuStack_2f0;
                        ppppuVar21 = ppppuStack_2f0;
                        ppppuStack_2f0 = ppppuVar41;
                        ppppuStack_2e8 = ppppuVar29;
                        func_0x0412a280(ppppuVar21,lVar33);
                        ppppuVar41 = ppppuStack_2f0;
                      }
                    }
                    ppppuStack_2f0 = ppppuVar41;
                    lVar45 = lVar45 + 1;
                    lVar33 = plVar42[8];
                    ppppuStack_2e8 = ppppuVar29;
                  } while (lVar45 < (int)((ulong)(plVar42[9] - lVar33) >> 3));
                  plVar23 = (long *)*plStack_330;
                }
              }
            }
            plVar36 = plStack_330;
            if (plVar23 == (long *)0x0) goto LAB_0cc11946;
            do {
              bVar46 = (*(byte *)(plVar23 + 4) & 1) != 0;
              lVar33 = (long)plVar23 + 0x21;
              if (bVar46) {
                lVar33 = plVar23[6];
              }
              uVar19 = (ulong)(*(byte *)(plVar23 + 4) >> 1);
              if (bVar46) {
                uVar19 = plVar23[5];
              }
              uVar31 = 9;
              if (uVar19 < 9) {
                uVar31 = uVar19;
              }
              uVar11 = memcmp(&UNK_0122361d,lVar33,uVar31);
              if ((uVar11 == 0) && (uVar11 = 0, uVar19 != 9)) {
                uVar11 = (uVar19 < 10) - 1 | 1;
              }
              if ((int)uVar11 < 1) {
                plVar36 = plVar23;
              }
              plVar23 = (long *)plVar23[0 < (int)uVar11];
            } while (plVar23 != (long *)0x0);
            if (plVar36 == plStack_330) goto LAB_0cc11946;
            bVar46 = (*(byte *)(plVar36 + 4) & 1) != 0;
            lVar33 = (long)plVar36 + 0x21;
            if (bVar46) {
              lVar33 = plVar36[6];
            }
            uVar19 = (ulong)(*(byte *)(plVar36 + 4) >> 1);
            if (bVar46) {
              uVar19 = plVar36[5];
            }
            uVar31 = 9;
            if (uVar19 < 9) {
              uVar31 = uVar19;
            }
            iVar12 = memcmp(&UNK_0122361d,lVar33,uVar31);
            if (iVar12 == 0) {
              if (uVar19 < 10) goto LAB_0cc11b6d;
              goto LAB_0cc11946;
            }
            if (iVar12 < 0) goto LAB_0cc11946;
LAB_0cc11b6d:
            plVar23 = plVar36 + 7;
            if ((int)plVar36[0xc] != 8) {
              plVar23 = (long *)0x0;
            }
          }
          plVar36 = plVar23 + 1;
          if (plVar23 == (long *)0x0) {
            plVar36 = (long *)&UNK_01e79d90;
          }
          func_0x0b5be4b0(auStack_268,plVar36,(ulong)pbStack_290 & 0xffffffff);
          pppuStack_3a8 = (ulong ***)0x0;
          pppuStack_3a0 = (ulong ***)((ulong)pppuStack_3a0 & 0xffffffff00000000);
          ppppuStack_2b8 = &pppuStack_3a8;
          ppppuStack_2b0 = &pppuStack_3a8;
          if ((ulong)uStack_260 == 0xffffffff) goto LAB_0cc13124;
          pppppuStack_258 = &ppppuStack_2b8;
          (**(code **)(&UNK_0f2bc850 + (ulong)uStack_260 * 8))(&pppppuStack_258);
          ppppuStack_388 = (ulong ****)0x0;
          pppuStack_380 = (ulong ***)0x0;
          pppuStack_398 = (ulong ***)0x0;
          ppppuStack_390 = (ulong ****)0x0;
          fStack_378 = fStack_2f8;
          ppppuVar29 = (ulong ****)0x2;
          if (ppppuStack_310 == (ulong ****)0x1) {
LAB_0cc11a28:
            lVar33 = (long)ppppuVar29 * 8;
            pppuVar22 = (ulong ***)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar33);
            if (pppuVar22 == (ulong ***)0x0) {
              func_0x0eec74c0(lVar33,0);
            }
            pppuVar24 = pppuStack_398;
            bVar46 = pppuStack_398 != (ulong ***)0x0;
            pppuStack_398 = pppuVar22;
            if (bVar46) {
              func_0x0412a280(pppuVar24,(long)ppppuStack_390 << 3);
            }
            pppuVar22 = pppuStack_398;
            ppppuStack_390 = ppppuVar29;
            memset(pppuStack_398,0,lVar33);
            puVar43 = puStack_308;
            ppppuVar21 = ppppuStack_2f0;
            ppppuVar30 = ppppuStack_2e8;
            if (ppppuStack_388 != (ulong ****)0x0) {
              ppppuVar41 = (ulong ****)ppppuStack_388[1];
              uVar19 = (long)ppppuVar29 - 1;
              if (((ulong)ppppuVar29 & uVar19) == 0) {
                pppuVar22[(ulong)ppppuVar41 & uVar19] = (ulong **)&ppppuStack_388;
                uVar31 = (ulong)ppppuVar41 & uVar19;
                ppppuVar29 = ppppuStack_388;
                while (ppppuVar41 = ppppuVar29, ppppuVar29 = (ulong ****)*ppppuVar41,
                      ppppuVar29 != (ulong ****)0x0) {
                  uVar38 = (ulong)ppppuVar29[1] & uVar19;
                  if (uVar38 != uVar31) {
                    if (pppuVar22[uVar38] == (ulong **)0x0) {
                      pppuVar22[uVar38] = (ulong **)ppppuVar41;
                      uVar31 = uVar38;
                    }
                    else {
                      *ppppuVar41 = *ppppuVar29;
                      *ppppuVar29 = (ulong ***)*pppuVar22[uVar38];
                      *pppuVar22[uVar38] = (ulong *)ppppuVar29;
                      ppppuVar29 = ppppuVar41;
                    }
                  }
                }
              }
              else {
                if (ppppuVar29 <= ppppuVar41) {
                  if (((ulong)ppppuVar41 | (ulong)ppppuVar29) >> 0x20 == 0) {
                    ppppuVar41 = (ulong ****)
                                 (((ulong)ppppuVar41 & 0xffffffff) %
                                 ((ulong)ppppuVar29 & 0xffffffff));
                  }
                  else {
                    ppppuVar41 = (ulong ****)((ulong)ppppuVar41 % (ulong)ppppuVar29);
                  }
                }
                pppuVar22[(long)ppppuVar41] = (ulong **)&ppppuStack_388;
                ppppuVar25 = (ulong ****)*ppppuStack_388;
                ppppuVar37 = ppppuStack_388;
                while (ppppuVar25 != (ulong ****)0x0) {
                  ppppuVar32 = (ulong ****)ppppuVar25[1];
                  if (ppppuVar29 <= ppppuVar32) {
                    if (((ulong)ppppuVar32 | (ulong)ppppuVar29) >> 0x20 == 0) {
                      ppppuVar32 = (ulong ****)
                                   (((ulong)ppppuVar32 & 0xffffffff) %
                                   ((ulong)ppppuVar29 & 0xffffffff));
                    }
                    else {
                      ppppuVar32 = (ulong ****)((ulong)ppppuVar32 % (ulong)ppppuVar29);
                    }
                  }
                  if (ppppuVar32 != ppppuVar41) {
                    if (pppuVar22[(long)ppppuVar32] == (ulong **)0x0) {
                      pppuVar22[(long)ppppuVar32] = (ulong **)ppppuVar37;
                      ppppuVar41 = ppppuVar32;
                    }
                    else {
                      *ppppuVar37 = *ppppuVar25;
                      *ppppuVar25 = (ulong ***)*pppuVar22[(long)ppppuVar32];
                      *pppuVar22[(long)ppppuVar32] = (ulong *)ppppuVar25;
                      ppppuVar25 = ppppuVar37;
                    }
                  }
                  ppppuVar37 = ppppuVar25;
                  ppppuVar25 = (ulong ****)*ppppuVar37;
                }
              }
            }
          }
          else {
            if (((ulong)ppppuStack_310 & (long)ppppuStack_310 - 1U) == 0) {
              bVar46 = false;
              ppppuVar29 = ppppuStack_310;
              if (ppppuStack_310 == (ulong ****)0x0) goto LAB_0cc11b20;
LAB_0cc11a1b:
              if ((ulong)ppppuVar29 >> 0x3d == 0) goto LAB_0cc11a28;
              goto LAB_0cc13147;
            }
            ppppuVar29 = (ulong ****)func_0x0412c3f0(ppppuStack_310);
            bVar46 = ppppuVar29 < ppppuStack_390;
            if (ppppuStack_390 < ppppuVar29) goto LAB_0cc11a1b;
LAB_0cc11b20:
            ppppuVar41 = ppppuStack_390;
            puVar43 = puStack_308;
            ppppuVar21 = ppppuStack_2f0;
            ppppuVar30 = ppppuStack_2e8;
            if (bVar46) {
              fVar47 = (float)func_0x0eee3ab0((float)pppuStack_380 / fStack_378);
              ppppuVar25 = (ulong ****)
                           ((long)(fVar47 - _DAT_01198778) & (long)fVar47 >> 0x3f | (long)fVar47);
              if ((ppppuVar41 < (ulong ****)0x3) ||
                 (uVar19 = (long)ppppuVar41 - ((ulong)ppppuVar41 >> 1 & 0x5555555555555555),
                 uVar19 = (uVar19 >> 2 & 0x3333333333333333) + (uVar19 & 0x3333333333333333),
                 1 < (byte)(((uVar19 >> 4) + uVar19 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38
                           ))) {
                ppppuVar25 = (ulong ****)func_0x0412c3f0(ppppuVar25);
                pppuVar22 = pppuStack_398;
                if (ppppuVar25 < ppppuVar29) {
                  ppppuVar25 = ppppuVar29;
                }
              }
              else {
                if ((ulong ****)0x1 < ppppuVar25) {
                  lVar33 = 0x3f;
                  if ((long)ppppuVar25 - 1U != 0) {
                    for (; (long)ppppuVar25 - 1U >> lVar33 == 0; lVar33 = lVar33 + -1) {
                    }
                  }
                  ppppuVar25 = (ulong ****)(1L << (-((byte)lVar33 ^ 0x3f) & 0x3f));
                }
                pppuVar22 = pppuStack_398;
                if (ppppuVar25 < ppppuVar29) {
                  ppppuVar25 = ppppuVar29;
                }
              }
              pppuStack_398 = pppuVar22;
              puVar43 = puStack_308;
              ppppuVar21 = ppppuStack_2f0;
              ppppuVar30 = ppppuStack_2e8;
              if (ppppuVar25 < ppppuVar41) {
                ppppuVar29 = ppppuVar25;
                if (ppppuVar25 != (ulong ****)0x0) goto LAB_0cc11a1b;
                pppuStack_398 = (ulong ***)0x0;
                if (pppuVar22 != (ulong ***)0x0) {
                  func_0x0412a280();
                }
                ppppuStack_390 = (ulong ****)0x0;
                puVar43 = puStack_308;
                ppppuVar21 = ppppuStack_2f0;
                ppppuVar30 = ppppuStack_2e8;
              }
            }
          }
          for (; ppppuStack_2f0 = ppppuVar21, ppppuStack_2e8 = ppppuVar30,
              puVar43 != (undefined8 *)0x0; puVar43 = (undefined8 *)*puVar43) {
            func_0x08d5da50(&pppuStack_398);
            ppppuVar21 = ppppuStack_2f0;
            ppppuVar30 = ppppuStack_2e8;
          }
          pppppuStack_258 = &ppppuStack_370;
          ppppuStack_370 = (ulong ****)0x0;
          ppppuStack_368 = (ulong ****)0x0;
          pppuStack_360 = (ulong ***)0x0;
          uStack_250 = 0;
          lVar33 = (long)ppppuVar30 - (long)ppppuVar21;
          ppppuVar29 = ppppuStack_368;
          if (lVar33 != 0) {
            if (0x666666666666666 < (ulong)((lVar33 >> 3) * -0x3333333333333333)) goto LAB_0cc13133;
            ppppuVar29 = (ulong ****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
            if (ppppuVar29 == (ulong ****)0x0) {
              func_0x0eec74c0(lVar33);
            }
            pppuStack_360 = (ulong ***)(lVar33 + (long)ppppuVar29);
            ppppuStack_2b8 = (ulong ****)&ppppuStack_370;
            ppppuStack_2b0 = (ulong ****)&ppppuStack_230;
            ppppuStack_2a8 = (ulong ****)&ppppuStack_288;
            uStack_2a0 = 0;
            ppppuStack_370 = ppppuVar29;
            ppppuStack_368 = ppppuVar29;
            ppppuStack_230 = ppppuVar29;
            do {
              ppppuVar29[2] = (ulong ***)0x0;
              ppppuVar29[3] = (ulong ***)0x0;
              *ppppuVar29 = (ulong ***)0x0;
              ppppuVar29[1] = (ulong ***)0x0;
              ppppuVar29[4] = (ulong ***)0x0;
              ppppuStack_288 = ppppuVar29;
              if (ppppuVar21 != ppppuVar29) {
                if (((ulong)ppppuVar21[1] & 1) == 0) {
                  ppppuVar29[3] = ppppuVar21[3];
                  pppuVar22 = ppppuVar21[2];
                  ppppuVar29[1] = ppppuVar21[1];
                  ppppuVar29[2] = pppuVar22;
                }
                else {
                  func_0x04885070(ppppuVar29 + 1,ppppuVar21[3],ppppuVar21[2]);
                }
              }
              *ppppuVar29 = *ppppuVar21;
              ppppuVar21 = ppppuVar21 + 5;
              ppppuVar29 = ppppuStack_288 + 5;
              ppppuStack_288 = ppppuVar29;
            } while (ppppuVar21 != ppppuVar30);
          }
          ppppuStack_368 = ppppuVar29;
          puVar1 = puStack_2d0;
          puVar40 = puStack_2d8;
          ppppuStack_2b8 = (ulong ****)&uStack_358;
          uStack_358 = (ulong ***)0x0;
          uStack_350 = (ulong ***)0x0;
          pppuStack_348 = (ulong ***)0x0;
          ppppuStack_2b0 = (ulong ****)((ulong)ppppuStack_2b0 & 0xffffffffffffff00);
          lVar33 = (long)puStack_2d0 - (long)puStack_2d8;
          if (lVar33 != 0) {
            if (lVar33 < 0) goto LAB_0cc1312e;
            pppuVar22 = (ulong ***)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
            if (pppuVar22 == (ulong ***)0x0) {
              func_0x0eec74c0(lVar33);
            }
            pppuStack_348 = (ulong ***)(lVar33 + (long)pppuVar22);
            uStack_350 = pppuVar22;
            do {
              lVar33 = *(long *)(puVar40 + 2);
              uVar6 = puVar40[1];
              uVar7 = puVar40[2];
              uVar8 = puVar40[3];
              *(undefined4 *)uStack_350 = *puVar40;
              *(undefined4 *)((long)uStack_350 + 4) = uVar6;
              *(undefined4 *)(uStack_350 + 1) = uVar7;
              *(undefined4 *)((long)uStack_350 + 0xc) = uVar8;
              if (lVar33 != 0) {
                LOCK();
                plVar36 = (long *)(lVar33 + 8);
                *plVar36 = *plVar36 + 1;
                UNLOCK();
              }
              puVar40 = puVar40 + 4;
              uStack_350 = uStack_350 + 2;
              uStack_358 = pppuVar22;
            } while (puVar40 != puVar1);
          }
          ppppuVar29 = ppppuStack_b0;
          if (ppppuStack_b0 < ppppuStack_a8) {
            *(undefined1 *)ppppuStack_b0 = 0;
            *(undefined4 *)(ppppuStack_b0 + 1) = 0xffffffff;
            uVar6 = pppuStack_3a0._0_4_;
            if (((ulong)pppuStack_3a0 & 0xffffffff) != 0xffffffff) {
              ppppuStack_2b8 = ppppuStack_b0;
              (**(code **)(&UNK_0f3f5f60 + ((ulong)pppuStack_3a0 & 0xffffffff) * 8))
                        (&ppppuStack_2b8);
              *(undefined4 *)(ppppuVar29 + 1) = uVar6;
            }
            pppuVar22 = pppuStack_398;
            pppuStack_398 = (ulong ***)0x0;
            ppppuVar29[2] = pppuVar22;
            ppppuVar29[3] = (ulong ***)ppppuStack_390;
            ppppuVar29[4] = (ulong ***)ppppuStack_388;
            ppppuStack_390 = (ulong ****)0x0;
            ppppuVar29[5] = pppuStack_380;
            *(float *)(ppppuVar29 + 6) = fStack_378;
            if (pppuStack_380 != (ulong ***)0x0) {
              pppuVar24 = ppppuStack_388[1];
              pppuVar39 = ppppuVar29[3];
              if (((ulong)pppuVar39 & (long)pppuVar39 - 1U) == 0) {
                pppuVar24 = (ulong ***)((ulong)pppuVar24 & (long)pppuVar39 - 1U);
              }
              else if (pppuVar39 <= pppuVar24) {
                if (((ulong)pppuVar24 | (ulong)pppuVar39) >> 0x20 == 0) {
                  pppuVar24 = (ulong ***)
                              (((ulong)pppuVar24 & 0xffffffff) % ((ulong)pppuVar39 & 0xffffffff));
                }
                else {
                  pppuVar24 = (ulong ***)((ulong)pppuVar24 % (ulong)pppuVar39);
                }
              }
              pppuVar22[(long)pppuVar24] = (ulong **)(ppppuVar29 + 4);
              ppppuStack_388 = (ulong ****)0x0;
              pppuStack_380 = (ulong ***)0x0;
            }
            ppppuVar29[7] = (ulong ***)0x0;
            ppppuVar29[8] = (ulong ***)0x0;
            ppppuVar29[9] = (ulong ***)0x0;
            ppppuVar29[7] = (ulong ***)ppppuStack_370;
            ppppuVar29[8] = (ulong ***)ppppuStack_368;
            ppppuVar29[9] = pppuStack_360;
            ppppuStack_370 = (ulong ****)0x0;
            ppppuStack_368 = (ulong ****)0x0;
            pppuStack_360 = (ulong ***)0x0;
            ppppuVar29[10] = (ulong ***)0x0;
            ppppuVar29[0xb] = (ulong ***)0x0;
            ppppuVar29[0xc] = (ulong ***)0x0;
            *(undefined4 *)(ppppuVar29 + 10) = (undefined4)uStack_358;
            *(undefined4 *)((long)ppppuVar29 + 0x54) = uStack_358._4_4_;
            *(undefined4 *)(ppppuVar29 + 0xb) = (undefined4)uStack_350;
            *(undefined4 *)((long)ppppuVar29 + 0x5c) = uStack_350._4_4_;
            ppppuVar29[0xc] = pppuStack_348;
            uStack_358 = (ulong ***)0x0;
            uStack_350 = (ulong ***)0x0;
            pppuStack_348 = (ulong ***)0x0;
            ppppuStack_b0 = ppppuVar29 + 0xd;
          }
          else {
            lVar33 = (long)ppppuStack_b0 - (long)ppppuStack_b8;
            plVar36 = (long *)((lVar33 >> 3) * 0x4ec4ec4ec4ec4ec5 + 1);
            if ((long *)0x276276276276276 < plVar36) goto LAB_0cc1313d;
            lVar45 = (long)ppppuStack_a8 - (long)ppppuStack_b8 >> 3;
            plVar23 = (long *)(lVar45 * -0x6276276276276276);
            if (plVar36 < plVar23) {
              plVar36 = plVar23;
            }
            if (0x13b13b13b13b13a < (ulong)(lVar45 * 0x4ec4ec4ec4ec4ec5)) {
              plVar36 = (long *)0x276276276276276;
            }
            if (plVar36 == (long *)0x0) {
              lVar45 = 0;
            }
            else {
              if ((long *)0x276276276276276 < plVar36) goto LAB_0cc13142;
              lVar45 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)plVar36 * 0x68);
              if (lVar45 == 0) {
                func_0x0eec74c0((long)plVar36 * 0x68,0);
                lVar45 = 0;
              }
            }
            ppppuVar29 = (ulong ****)(lVar33 + lVar45);
            *(undefined1 *)(lVar45 + lVar33) = 0;
            *(undefined4 *)(lVar45 + 8 + lVar33) = 0xffffffff;
            uVar6 = pppuStack_3a0._0_4_;
            if (((ulong)pppuStack_3a0 & 0xffffffff) != 0xffffffff) {
              ppppuStack_2b8 = ppppuVar29;
              (**(code **)(&UNK_0f3f5f60 + ((ulong)pppuStack_3a0 & 0xffffffff) * 8))
                        (&ppppuStack_2b8,&pppuStack_3a8);
              *(undefined4 *)(ppppuVar29 + 1) = uVar6;
            }
            ppppuVar41 = ppppuStack_b0;
            ppppuVar30 = ppppuStack_b8;
            ppppuVar21 = ppppuStack_390;
            pppuVar22 = pppuStack_398;
            pppuStack_398 = (ulong ***)0x0;
            ppppuVar29[2] = pppuVar22;
            ppppuVar29[3] = (ulong ***)ppppuStack_390;
            ppppuStack_390 = (ulong ****)0x0;
            ppppuVar29[4] = (ulong ***)ppppuStack_388;
            ppppuVar29[5] = pppuStack_380;
            *(float *)(ppppuVar29 + 6) = fStack_378;
            if (pppuStack_380 != (ulong ***)0x0) {
              ppppuVar25 = (ulong ****)ppppuStack_388[1];
              if (((ulong)ppppuVar21 & (long)ppppuVar21 - 1U) == 0) {
                ppppuVar25 = (ulong ****)((ulong)ppppuVar25 & (long)ppppuVar21 - 1U);
              }
              else if (ppppuVar21 <= ppppuVar25) {
                if (((ulong)ppppuVar25 | (ulong)ppppuVar21) >> 0x20 == 0) {
                  ppppuVar25 = (ulong ****)
                               (((ulong)ppppuVar25 & 0xffffffff) % ((ulong)ppppuVar21 & 0xffffffff))
                  ;
                }
                else {
                  ppppuVar25 = (ulong ****)((ulong)ppppuVar25 % (ulong)ppppuVar21);
                }
              }
              pppuVar22[(long)ppppuVar25] = (ulong **)(ppppuVar29 + 4);
              ppppuStack_388 = (ulong ****)0x0;
              pppuStack_380 = (ulong ***)0x0;
            }
            ppppuVar29[7] = (ulong ***)ppppuStack_370;
            ppppuVar29[8] = (ulong ***)ppppuStack_368;
            ppppuVar29[9] = pppuStack_360;
            ppppuStack_370 = (ulong ****)0x0;
            ppppuStack_368 = (ulong ****)0x0;
            pppuStack_360 = (ulong ***)0x0;
            *(undefined4 *)(ppppuVar29 + 10) = (undefined4)uStack_358;
            *(undefined4 *)((long)ppppuVar29 + 0x54) = uStack_358._4_4_;
            *(undefined4 *)(ppppuVar29 + 0xb) = (undefined4)uStack_350;
            *(undefined4 *)((long)ppppuVar29 + 0x5c) = uStack_350._4_4_;
            ppppuVar29[0xc] = pppuStack_348;
            uStack_358 = (ulong ***)0x0;
            uStack_350 = (ulong ***)0x0;
            pppuStack_348 = (ulong ***)0x0;
            ppppuVar21 = (ulong ****)
                         ((long)ppppuVar29 + ((long)ppppuStack_b8 - (long)ppppuStack_b0));
            plStack_330 = plVar36;
            ppppuStack_248 = ppppuVar29;
            if ((long)ppppuStack_b8 - (long)ppppuStack_b0 != 0) {
              lVar33 = 0;
              do {
                *(undefined1 *)((long)ppppuVar21 + lVar33) = 0;
                *(undefined4 *)((long)ppppuVar21 + lVar33 + 8) = 0xffffffff;
                uVar11 = *(uint *)((long)ppppuVar30 + lVar33 + 8);
                if ((ulong)uVar11 != 0xffffffff) {
                  ppppuStack_2b8 = (ulong ****)(lVar33 + (long)ppppuVar21);
                  (**(code **)(&UNK_0f3f5f60 + (ulong)uVar11 * 8))
                            (&ppppuStack_2b8,(undefined1 *)(lVar33 + (long)ppppuVar30));
                  *(uint *)((long)ppppuVar21 + lVar33 + 8) = uVar11;
                }
                lVar26 = *(long *)((long)ppppuVar30 + lVar33 + 0x10);
                *(undefined8 *)((long)ppppuVar30 + lVar33 + 0x10) = 0;
                *(long *)((long)ppppuVar21 + lVar33 + 0x10) = lVar26;
                lVar35 = *(long *)((long)ppppuVar30 + lVar33 + 0x20);
                puVar43 = (undefined8 *)((long)ppppuVar30 + lVar33 + 0x18);
                uVar27 = puVar43[1];
                puVar4 = (undefined8 *)((long)ppppuVar21 + lVar33 + 0x18);
                *puVar4 = *puVar43;
                puVar4[1] = uVar27;
                *(undefined8 *)((long)ppppuVar30 + lVar33 + 0x18) = 0;
                lVar3 = *(long *)((long)ppppuVar30 + lVar33 + 0x28);
                *(long *)((long)ppppuVar21 + lVar33 + 0x28) = lVar3;
                *(undefined4 *)((long)ppppuVar21 + lVar33 + 0x30) =
                     *(undefined4 *)((long)ppppuVar30 + lVar33 + 0x30);
                if (lVar3 != 0) {
                  pppuVar22 = *(ulong ****)(lVar35 + 8);
                  pppuVar24 = ((ulong ****)(lVar33 + (long)ppppuVar21))[3];
                  if (((ulong)pppuVar24 & (long)pppuVar24 - 1U) == 0) {
                    pppuVar22 = (ulong ***)((ulong)pppuVar22 & (long)pppuVar24 - 1U);
                  }
                  else if (pppuVar24 <= pppuVar22) {
                    if (((ulong)pppuVar22 | (ulong)pppuVar24) >> 0x20 == 0) {
                      pppuVar22 = (ulong ***)
                                  (((ulong)pppuVar22 & 0xffffffff) % ((ulong)pppuVar24 & 0xffffffff)
                                  );
                    }
                    else {
                      pppuVar22 = (ulong ***)((ulong)pppuVar22 % (ulong)pppuVar24);
                    }
                  }
                  *(undefined1 **)(lVar26 + (long)pppuVar22 * 8) =
                       (undefined1 *)((long)ppppuVar21 + lVar33 + 0x20);
                  *(undefined8 *)((long)ppppuVar30 + lVar33 + 0x20) = 0;
                  *(undefined8 *)((long)ppppuVar30 + lVar33 + 0x28) = 0;
                }
                puVar43 = (undefined8 *)((long)ppppuVar21 + lVar33 + 0x38);
                *puVar43 = 0;
                puVar43[1] = 0;
                *(undefined8 *)((long)ppppuVar21 + lVar33 + 0x48) = 0;
                puVar43 = (undefined8 *)((long)ppppuVar30 + lVar33 + 0x38);
                uVar27 = puVar43[1];
                puVar4 = (undefined8 *)((long)ppppuVar21 + lVar33 + 0x38);
                *puVar4 = *puVar43;
                puVar4[1] = uVar27;
                *(undefined8 *)((long)ppppuVar21 + lVar33 + 0x48) =
                     *(undefined8 *)((long)ppppuVar30 + lVar33 + 0x48);
                puVar43 = (undefined8 *)((long)ppppuVar30 + lVar33 + 0x38);
                *puVar43 = 0;
                puVar43[1] = 0;
                *(undefined8 *)((long)ppppuVar30 + lVar33 + 0x48) = 0;
                puVar43 = (undefined8 *)((long)ppppuVar21 + lVar33 + 0x50);
                *puVar43 = 0;
                puVar43[1] = 0;
                *(undefined8 *)((long)ppppuVar21 + lVar33 + 0x60) = 0;
                puVar40 = (undefined4 *)((long)ppppuVar30 + lVar33 + 0x50);
                uVar6 = puVar40[1];
                uVar7 = puVar40[2];
                uVar8 = puVar40[3];
                puVar1 = (undefined4 *)((long)ppppuVar21 + lVar33 + 0x50);
                *puVar1 = *puVar40;
                puVar1[1] = uVar6;
                puVar1[2] = uVar7;
                puVar1[3] = uVar8;
                *(undefined8 *)((long)ppppuVar21 + lVar33 + 0x60) =
                     *(undefined8 *)((long)ppppuVar30 + lVar33 + 0x60);
                puVar43 = (undefined8 *)((long)ppppuVar30 + lVar33 + 0x50);
                *puVar43 = 0;
                puVar43[1] = 0;
                *(undefined8 *)((long)ppppuVar30 + lVar33 + 0x60) = 0;
                lVar26 = lVar33 + 0x68;
                lVar33 = lVar33 + 0x68;
              } while ((ulong ****)((long)ppppuVar30 + lVar26) != ppppuVar41);
              do {
                pppuVar22 = ppppuVar30[10];
                if (pppuVar22 != (ulong ***)0x0) {
                  pppuVar24 = ppppuVar30[0xb];
                  pppuVar39 = pppuVar22;
                  if (pppuVar22 != pppuVar24) {
                    do {
                      ppuVar44 = pppuVar24[-1];
                      if (ppuVar44 != (ulong **)0x0) {
                        LOCK();
                        ppuVar17 = ppuVar44 + 1;
                        puVar18 = *ppuVar17;
                        *ppuVar17 = (ulong *)((long)*ppuVar17 + -1);
                        UNLOCK();
                        if (puVar18 == (ulong *)0x0) {
                          (*(code *)(*ppuVar44)[2])(ppuVar44);
                          func_0x0412c2d0(ppuVar44);
                        }
                      }
                      pppuVar24 = pppuVar24 + -2;
                    } while (pppuVar24 != pppuVar22);
                    pppuVar39 = ppppuVar30[10];
                  }
                  ppppuVar30[0xb] = pppuVar22;
                  func_0x0412a280(pppuVar39,(long)ppppuVar30[0xc] - (long)pppuVar39);
                }
                pppuVar22 = ppppuVar30[7];
                if (pppuVar22 != (ulong ***)0x0) {
                  pppuVar24 = ppppuVar30[8];
                  pppuVar39 = pppuVar22;
                  if (pppuVar22 != pppuVar24) {
                    do {
                      if (((ulong)pppuVar24[-4] & 1) != 0) {
                        func_0x0412a280(pppuVar24[-2],(ulong)pppuVar24[-4] & 0xfffffffffffffffe);
                      }
                      pppuVar24 = pppuVar24 + -5;
                    } while (pppuVar24 != pppuVar22);
                    pppuVar39 = ppppuVar30[7];
                  }
                  ppppuVar30[8] = pppuVar22;
                  func_0x0412a280(pppuVar39,(long)ppppuVar30[9] - (long)pppuVar39);
                }
                pppuVar22 = ppppuVar30[4];
                while (pppuVar22 != (ulong ***)0x0) {
                  pppuVar24 = (ulong ***)*pppuVar22;
                  ppuVar44 = pppuVar22[6];
                  if (ppuVar44 == (ulong **)0x0) {
LAB_0cc125d4:
                    bVar2 = *(byte *)(pppuVar22 + 2);
                  }
                  else {
                    LOCK();
                    ppuVar17 = ppuVar44 + 1;
                    puVar18 = *ppuVar17;
                    *ppuVar17 = (ulong *)((long)*ppuVar17 + -1);
                    UNLOCK();
                    if (puVar18 != (ulong *)0x0) goto LAB_0cc125d4;
                    (*(code *)(*ppuVar44)[2])(ppuVar44);
                    func_0x0412c2d0(ppuVar44);
                    bVar2 = *(byte *)(pppuVar22 + 2);
                  }
                  if ((bVar2 & 1) != 0) {
                    func_0x0412a280(pppuVar22[4],(ulong)pppuVar22[2] & 0xfffffffffffffffe);
                  }
                  func_0x0412a280(pppuVar22,0x38);
                  pppuVar22 = pppuVar24;
                }
                pppuVar22 = ppppuVar30[2];
                ppppuVar30[2] = (ulong ***)0x0;
                if (pppuVar22 != (ulong ***)0x0) {
                  func_0x0412a280(pppuVar22,(long)ppppuVar30[3] << 3);
                }
                if ((ulong)*(uint *)(ppppuVar30 + 1) != 0xffffffff) {
                  (**(code **)(&UNK_0f3f5cd0 + (ulong)*(uint *)(ppppuVar30 + 1) * 8))
                            (&ppppuStack_2b8,ppppuVar30);
                }
                *(undefined4 *)(ppppuVar30 + 1) = 0xffffffff;
                ppppuVar30 = ppppuVar30 + 0xd;
              } while (ppppuVar30 != ppppuVar41);
            }
            ppppuStack_a8 = (ulong ****)(lVar45 + (long)plStack_330 * 0x68);
            ppppuVar29 = ppppuStack_248 + 0xd;
            if (ppppuStack_b8 != (ulong ****)0x0) {
              ppppuVar30 = ppppuStack_b8;
              ppppuStack_b8 = ppppuVar21;
              ppppuStack_b0 = ppppuVar29;
              func_0x0412a280(ppppuVar30);
              ppppuVar21 = ppppuStack_b8;
            }
            ppppuStack_b8 = ppppuVar21;
            pppuVar24 = uStack_358;
            ppppuStack_b0 = ppppuVar29;
            pppuVar22 = uStack_350;
            if (uStack_358 != (ulong ***)0x0) {
              for (; pppuVar24 != pppuVar22; pppuVar22 = pppuVar22 + -2) {
                ppuVar44 = pppuVar22[-1];
                if (ppuVar44 != (ulong **)0x0) {
                  LOCK();
                  ppuVar17 = ppuVar44 + 1;
                  puVar18 = *ppuVar17;
                  *ppuVar17 = (ulong *)((long)*ppuVar17 + -1);
                  UNLOCK();
                  if (puVar18 == (ulong *)0x0) {
                    (*(code *)(*ppuVar44)[2])(ppuVar44);
                    func_0x0412c2d0(ppuVar44);
                  }
                }
              }
              uStack_350 = pppuVar24;
              func_0x0412a280();
            }
          }
          ppppuVar30 = ppppuStack_370;
          pppuVar22 = pppuStack_398;
          ppppuVar29 = ppppuStack_388;
          ppppuVar21 = ppppuStack_368;
          if (ppppuStack_370 != (ulong ****)0x0) {
            for (; ppppuVar30 != ppppuVar21; ppppuVar21 = ppppuVar21 + -5) {
              if (((ulong)ppppuVar21[-4] & 1) != 0) {
                func_0x0412a280(ppppuVar21[-2],(ulong)ppppuVar21[-4] & 0xfffffffffffffffe);
              }
            }
            ppppuStack_368 = ppppuVar30;
            func_0x0412a280();
            pppuVar22 = pppuStack_398;
            ppppuVar29 = ppppuStack_388;
          }
          while (ppppuVar29 != (ulong ****)0x0) {
            ppppuVar21 = (ulong ****)*ppppuVar29;
            pppuVar24 = ppppuVar29[6];
            pppuStack_398 = pppuVar22;
            if (pppuVar24 == (ulong ***)0x0) {
LAB_0cc12817:
              bVar2 = *(byte *)(ppppuVar29 + 2);
            }
            else {
              LOCK();
              pppuVar22 = pppuVar24 + 1;
              ppuVar44 = *pppuVar22;
              *pppuVar22 = (ulong **)((long)*pppuVar22 - 1);
              UNLOCK();
              if (ppuVar44 != (ulong **)0x0) goto LAB_0cc12817;
              (*(code *)(*pppuVar24)[2])(pppuVar24);
              func_0x0412c2d0(pppuVar24);
              bVar2 = *(byte *)(ppppuVar29 + 2);
            }
            if ((bVar2 & 1) != 0) {
              func_0x0412a280(ppppuVar29[4],(ulong)ppppuVar29[2] & 0xfffffffffffffffe);
            }
            func_0x0412a280(ppppuVar29);
            pppuVar22 = pppuStack_398;
            ppppuVar29 = ppppuVar21;
          }
          pppuStack_398 = (ulong ***)0x0;
          if (pppuVar22 != (ulong ***)0x0) {
            func_0x0412a280();
          }
          if (((ulong)pppuStack_3a0 & 0xffffffff) != 0xffffffff) {
            (**(code **)(&UNK_0f3f5cd0 + ((ulong)pppuStack_3a0 & 0xffffffff) * 8))(&ppppuStack_2b8);
          }
          if ((ulong)uStack_260 != 0xffffffff) {
            (**(code **)(&UNK_0f3f5cd0 + (ulong)uStack_260 * 8))(&pppuStack_3a8);
          }
          puVar1 = puStack_2d8;
          puVar40 = puStack_2d0;
          if (puStack_2d8 != (undefined4 *)0x0) {
            for (; puVar1 != puVar40; puVar40 = puVar40 + -4) {
              plVar36 = *(long **)(puVar40 + -2);
              if (plVar36 != (long *)0x0) {
                LOCK();
                plVar23 = plVar36 + 1;
                lVar33 = *plVar23;
                *plVar23 = *plVar23 + -1;
                UNLOCK();
                if (lVar33 == 0) {
                  (**(code **)(*plVar36 + 0x10))(plVar36);
                  func_0x0412c2d0(plVar36);
                }
              }
            }
            puStack_2d0 = puVar1;
            func_0x0412a280();
          }
          ppppuVar30 = ppppuStack_2f0;
          ppppuVar29 = ppppuStack_318;
          puVar43 = puStack_308;
          ppppuVar21 = ppppuStack_2e8;
          if (ppppuStack_2f0 != (ulong ****)0x0) {
            for (; ppppuVar30 != ppppuVar21; ppppuVar21 = ppppuVar21 + -5) {
              if (((ulong)ppppuVar21[-4] & 1) != 0) {
                func_0x0412a280(ppppuVar21[-2],(ulong)ppppuVar21[-4] & 0xfffffffffffffffe);
              }
            }
            ppppuStack_2e8 = ppppuVar30;
            func_0x0412a280();
            ppppuVar29 = ppppuStack_318;
            puVar43 = puStack_308;
          }
          while (puVar43 != (undefined8 *)0x0) {
            puVar4 = (undefined8 *)*puVar43;
            plVar36 = (long *)puVar43[6];
            ppppuStack_318 = ppppuVar29;
            if (plVar36 == (long *)0x0) {
LAB_0cc12993:
              bVar2 = *(byte *)(puVar43 + 2);
            }
            else {
              LOCK();
              plVar23 = plVar36 + 1;
              lVar33 = *plVar23;
              *plVar23 = *plVar23 + -1;
              UNLOCK();
              if (lVar33 != 0) goto LAB_0cc12993;
              (**(code **)(*plVar36 + 0x10))(plVar36);
              func_0x0412c2d0(plVar36);
              bVar2 = *(byte *)(puVar43 + 2);
            }
            if ((bVar2 & 1) != 0) {
              func_0x0412a280(puVar43[4],puVar43[2] & 0xfffffffffffffffe);
            }
            func_0x0412a280(puVar43);
            ppppuVar29 = ppppuStack_318;
            puVar43 = puVar4;
          }
          ppppuStack_318 = (ulong ****)0x0;
          pbVar14 = pbStack_298;
          ppuVar44 = ppuStack_338;
          if (ppppuVar29 != (ulong ****)0x0) {
            func_0x0412a280();
            pbVar14 = pbStack_298;
            ppuVar44 = ppuStack_338;
          }
        }
        ppuVar44 = (ulong **)((long)ppuVar44 + 1);
        lVar33 = *(long *)(pbVar14 + 0x40);
        uVar19 = *(long *)(pbVar14 + 0x48) - lVar33;
      } while ((long)ppuVar44 < (long)(int)(uVar19 >> 3));
    }
  }
  pppuStack_3a8 = (ulong ***)&UNK_0148afa8;
  pppuStack_3a0 = (ulong ***)0x9;
  pbVar14 = (byte *)func_0x0d6c97a0(pbStack_328,&pppuStack_3a8);
  if (((pbVar14 != pbStack_320) && (*(int *)(pbVar14 + 0x60) == 9)) &&
     (lVar33 = *(long *)(pbVar14 + 0x40),
     0 < (int)((ulong)(*(long *)(pbVar14 + 0x48) - lVar33) >> 3))) {
    lVar45 = 0;
    pbStack_328 = pbVar14;
    do {
      plVar36 = *(long **)(lVar33 + lVar45 * 8);
      pbVar16 = &UNK_01e79d90;
      if (plVar36 != (long *)0x0) {
        cVar9 = (**(code **)(*plVar36 + 0x30))(plVar36);
        pbVar16 = (byte *)(plVar36 + 1);
        if (cVar9 != '\b') {
          pbVar16 = &UNK_01e79d90;
        }
      }
      ppppuVar29 = ppppuStack_e0;
      if (ppppuStack_e0 < ppppuStack_d8) {
        *ppppuStack_e0 = (ulong ***)0x0;
        if ((*pbVar16 & 1) == 0) {
          ppppuStack_e0[3] = *(ulong ****)(pbVar16 + 0x10);
          uVar6 = *(undefined4 *)(pbVar16 + 4);
          uVar7 = *(undefined4 *)(pbVar16 + 8);
          uVar8 = *(undefined4 *)(pbVar16 + 0xc);
          *(undefined4 *)(ppppuStack_e0 + 1) = *(undefined4 *)pbVar16;
          *(undefined4 *)((long)ppppuStack_e0 + 0xc) = uVar6;
          *(undefined4 *)(ppppuStack_e0 + 2) = uVar7;
          *(undefined4 *)((long)ppppuStack_e0 + 0x14) = uVar8;
        }
        else {
          func_0x0412e5e0(ppppuStack_e0 + 1,*(undefined8 *)(pbVar16 + 0x10),
                          *(undefined8 *)(pbVar16 + 8));
        }
        ppppuVar29[4] = (ulong ***)0x0;
        bVar2 = *(byte *)(ppppuVar29 + 1);
        if ((bVar2 & 1) == 0) {
          if (bVar2 >> 1 != 0) goto LAB_0cc12c0d;
LAB_0cc12a70:
          pppuVar24 = (ulong ***)0x0;
        }
        else {
          if (ppppuVar29[2] == (ulong ***)0x0) goto LAB_0cc12a70;
LAB_0cc12c0d:
          if ((bVar2 & 1) == 0) {
            pppuVar22 = (ulong ***)((long)ppppuVar29 + 9);
            if (pppuVar22 != (ulong ***)0x0) goto LAB_0cc12ce4;
            goto LAB_0cc12a70;
          }
          pppuVar22 = ppppuVar29[3];
          if (pppuVar22 == (ulong ***)0x0) goto LAB_0cc12a70;
LAB_0cc12ce4:
          if (*(byte *)pppuVar22 == 0) goto LAB_0cc12a70;
          uVar19 = func_0x0eee2e90(pppuVar22);
          pppuVar24 = (ulong ***)0xcbf29ce484222325;
          if (uVar19 != 0) {
            if (7 < uVar19) {
              uVar31 = uVar19 & 0xfffffffffffffff8;
              do {
                pppuVar24 = (ulong ***)
                            (((((((((long)pppuVar24 * 0x100000001b3 ^ (ulong)*(byte *)pppuVar22) *
                                   0x100000001b3 ^ (ulong)*(byte *)((long)pppuVar22 + 1)) *
                                  0x100000001b3 ^ (ulong)*(byte *)((long)pppuVar22 + 2)) *
                                 0x100000001b3 ^ (ulong)*(byte *)((long)pppuVar22 + 3)) *
                                0x100000001b3 ^ (ulong)*(byte *)((long)pppuVar22 + 4)) *
                               0x100000001b3 ^ (ulong)*(byte *)((long)pppuVar22 + 5)) *
                              0x100000001b3 ^ (ulong)*(byte *)((long)pppuVar22 + 6)) * 0x100000001b3
                            ^ (ulong)*(byte *)((long)pppuVar22 + 7));
                pppuVar22 = pppuVar22 + 1;
                uVar31 = uVar31 - 8;
              } while (uVar31 != 0);
            }
            if ((uVar19 & 7) != 0) {
              uVar31 = 0;
              do {
                pppuVar24 = (ulong ***)
                            ((long)pppuVar24 * 0x100000001b3 ^
                            (ulong)*(byte *)((long)pppuVar22 + uVar31));
                uVar31 = uVar31 + 1;
              } while (((uint)uVar19 & 7) != uVar31);
            }
          }
        }
        *ppppuVar29 = pppuVar24;
        ppppuVar29 = ppppuVar29 + 5;
        ppppuVar41 = ppppuStack_e8;
      }
      else {
        lVar33 = (long)ppppuStack_e0 - (long)ppppuStack_e8;
        uVar19 = (lVar33 >> 3) * -0x3333333333333333 + 1;
        if (0x666666666666666 < uVar19) {
          func_0x04ab5570();
LAB_0cc1311f:
          func_0x04882eb0();
LAB_0cc13124:
          func_0x04931450();
LAB_0cc13129:
          func_0x04ab5570();
LAB_0cc1312e:
          func_0x0cc80890();
LAB_0cc13133:
          func_0x04ab5570();
LAB_0cc13138:
          func_0x04882eb0();
LAB_0cc1313d:
          func_0x0cc84ea0();
LAB_0cc13142:
          func_0x04882eb0();
LAB_0cc13147:
          uVar27 = func_0x04882eb0();
          func_0x041084d6(&DAT_0f6ff890);
          func_0x0cc13c30(&puStack_228);
          func_0x0ce4bbe0(&puStack_70);
          func_0x0eee2d70(uVar27);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar26 = (long)ppppuStack_d8 - (long)ppppuStack_e8 >> 3;
        uVar31 = lVar26 * -0x6666666666666666;
        if (uVar19 < uVar31) {
          uVar19 = uVar31;
        }
        if (0x333333333333332 < (ulong)(lVar26 * -0x3333333333333333)) {
          uVar19 = 0x666666666666666;
        }
        ppppuStack_388 = (ulong ****)&ppppuStack_e8;
        if (uVar19 == 0) {
          pppuVar22 = (ulong ***)0x0;
        }
        else {
          if (0x666666666666666 < uVar19) goto LAB_0cc1311f;
          pppuVar22 = (ulong ***)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar19 * 0x28);
          if (pppuVar22 == (ulong ***)0x0) {
            func_0x0eec74c0(uVar19 * 0x28,0);
            pppuVar22 = (ulong ***)0x0;
          }
        }
        pppuVar24 = (ulong ***)((long)pppuVar22 + lVar33);
        ppppuStack_390 = (ulong ****)(pppuVar22 + uVar19 * 5);
        *(undefined8 *)((long)pppuVar22 + lVar33) = 0;
        puVar40 = (undefined4 *)((long)pppuVar22 + lVar33 + 8);
        pppuStack_3a8 = pppuVar22;
        pppuStack_3a0 = pppuVar24;
        pppuStack_398 = pppuVar24;
        if ((*pbVar16 & 1) == 0) {
          *(undefined8 *)((long)pppuVar22 + lVar33 + 0x18) = *(undefined8 *)(pbVar16 + 0x10);
          uVar6 = *(undefined4 *)(pbVar16 + 4);
          uVar7 = *(undefined4 *)(pbVar16 + 8);
          uVar8 = *(undefined4 *)(pbVar16 + 0xc);
          *puVar40 = *(undefined4 *)pbVar16;
          *(undefined4 *)((long)pppuVar22 + lVar33 + 0xc) = uVar6;
          *(undefined4 *)((long)pppuVar22 + lVar33 + 0x10) = uVar7;
          *(undefined4 *)((long)pppuVar22 + lVar33 + 0x14) = uVar8;
        }
        else {
          func_0x0412e5e0(puVar40,*(undefined8 *)(pbVar16 + 0x10),*(undefined8 *)(pbVar16 + 8));
        }
        pppuVar24[4] = (ulong **)0x0;
        bVar2 = *(byte *)(pppuVar24 + 1);
        if ((bVar2 & 1) == 0) {
          if (bVar2 >> 1 != 0) goto LAB_0cc12cbd;
LAB_0cc12e80:
          ppuVar17 = (ulong **)0x0;
        }
        else {
          if (pppuVar24[2] == (ulong **)0x0) goto LAB_0cc12e80;
LAB_0cc12cbd:
          if ((bVar2 & 1) == 0) {
            ppuVar44 = (ulong **)((long)pppuVar24 + 9);
            if (ppuVar44 != (ulong **)0x0) goto LAB_0cc12db5;
            goto LAB_0cc12e80;
          }
          ppuVar44 = pppuVar24[3];
          if (ppuVar44 == (ulong **)0x0) goto LAB_0cc12e80;
LAB_0cc12db5:
          if (*(byte *)ppuVar44 == 0) goto LAB_0cc12e80;
          uVar19 = func_0x0eee2e90(ppuVar44);
          ppuVar17 = (ulong **)0xcbf29ce484222325;
          if (uVar19 != 0) {
            if (7 < uVar19) {
              uVar31 = uVar19 & 0xfffffffffffffff8;
              do {
                ppuVar17 = (ulong **)
                           (((((((((long)ppuVar17 * 0x100000001b3 ^ (ulong)*(byte *)ppuVar44) *
                                  0x100000001b3 ^ (ulong)*(byte *)((long)ppuVar44 + 1)) *
                                 0x100000001b3 ^ (ulong)*(byte *)((long)ppuVar44 + 2)) *
                                0x100000001b3 ^ (ulong)*(byte *)((long)ppuVar44 + 3)) *
                               0x100000001b3 ^ (ulong)*(byte *)((long)ppuVar44 + 4)) * 0x100000001b3
                             ^ (ulong)*(byte *)((long)ppuVar44 + 5)) * 0x100000001b3 ^
                            (ulong)*(byte *)((long)ppuVar44 + 6)) * 0x100000001b3 ^
                           (ulong)*(byte *)((long)ppuVar44 + 7));
                ppuVar44 = ppuVar44 + 1;
                uVar31 = uVar31 - 8;
              } while (uVar31 != 0);
            }
            if ((uVar19 & 7) != 0) {
              uVar31 = 0;
              do {
                ppuVar17 = (ulong **)
                           ((long)ppuVar17 * 0x100000001b3 ^
                           (ulong)*(byte *)((long)ppuVar44 + uVar31));
                uVar31 = uVar31 + 1;
              } while (((uint)uVar19 & 7) != uVar31);
            }
          }
        }
        ppppuVar29 = ppppuStack_e0;
        pppuVar22 = pppuStack_398;
        *pppuVar24 = ppuVar17;
        ppppuVar41 = (ulong ****)(((long)ppppuStack_e8 - (long)ppppuStack_e0) + (long)pppuStack_3a0)
        ;
        ppppuVar21 = ppppuVar41;
        ppppuVar30 = ppppuStack_e8;
        if (ppppuStack_e8 != ppppuStack_e0) {
          do {
            ppppuVar21[2] = (ulong ***)0x0;
            ppppuVar21[3] = (ulong ***)0x0;
            *ppppuVar21 = (ulong ***)0x0;
            ppppuVar21[1] = (ulong ***)0x0;
            ppppuVar21[4] = (ulong ***)0x0;
            ppppuVar21[3] = ppppuVar30[3];
            uVar6 = *(undefined4 *)((long)ppppuVar30 + 0xc);
            uVar7 = *(undefined4 *)(ppppuVar30 + 2);
            uVar8 = *(undefined4 *)((long)ppppuVar30 + 0x14);
            *(undefined4 *)(ppppuVar21 + 1) = *(undefined4 *)(ppppuVar30 + 1);
            *(undefined4 *)((long)ppppuVar21 + 0xc) = uVar6;
            *(undefined4 *)(ppppuVar21 + 2) = uVar7;
            *(undefined4 *)((long)ppppuVar21 + 0x14) = uVar8;
            *(undefined2 *)(ppppuVar30 + 1) = 0;
            *ppppuVar21 = *ppppuVar30;
            ppppuVar30 = ppppuVar30 + 5;
            ppppuVar21 = ppppuVar21 + 5;
            ppppuVar25 = ppppuStack_e8;
          } while (ppppuVar30 != ppppuStack_e0);
          do {
            if (((ulong)ppppuVar25[1] & 1) != 0) {
              func_0x0412a280(ppppuVar25[3],(ulong)ppppuVar25[1] & 0xfffffffffffffffe);
            }
            ppppuVar25 = ppppuVar25 + 5;
          } while (ppppuVar25 != ppppuVar29);
        }
        ppppuVar21 = ppppuStack_d8;
        pbVar14 = pbStack_328;
        ppppuVar29 = (ulong ****)(pppuVar22 + 5);
        ppppuStack_d8 = ppppuStack_390;
        if (ppppuStack_e8 != (ulong ****)0x0) {
          lVar33 = (long)ppppuVar21 - (long)ppppuStack_e8;
          ppppuVar21 = ppppuStack_e8;
          ppppuStack_e8 = ppppuVar41;
          ppppuStack_e0 = ppppuVar29;
          func_0x0412a280(ppppuVar21,lVar33);
          ppppuVar41 = ppppuStack_e8;
        }
      }
      ppppuStack_e8 = ppppuVar41;
      lVar45 = lVar45 + 1;
      lVar33 = *(long *)(pbVar14 + 0x40);
      ppppuStack_e0 = ppppuVar29;
    } while (lVar45 < (int)((ulong)(*(long *)(pbVar14 + 0x48) - lVar33) >> 3));
  }
  lVar33 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (lVar33 == 0) {
    func_0x0eec74c0(0x1b0,0);
  }
  func_0x0cca4140(lVar33,&puStack_228);
  puVar43 = puStack_280;
  pppuStack_3a8 = (ulong ***)0x0;
  lStack_270 = lVar33;
  lVar26 = func_0x0cd2bbe0(lStack_238,lVar33 + 0x50);
  lVar45 = *(long *)(lVar26 + 0x28);
  *(long *)(lVar26 + 0x28) = lVar33;
  if (lVar45 != 0) {
    func_0x0cc13c30(lVar45);
    func_0x0412a280(lVar45,0x1b0);
  }
  lStack_270 = 0;
LAB_0cc0fabc:
  pbVar14 = pbStack_278;
  func_0x0cc13c30(&puStack_228);
  pbVar14 = pbVar14 + 0x38;
  if (pbVar14 == (byte *)puVar43[1]) goto LAB_0cc130fb;
  goto LAB_0cc0faea;
}


