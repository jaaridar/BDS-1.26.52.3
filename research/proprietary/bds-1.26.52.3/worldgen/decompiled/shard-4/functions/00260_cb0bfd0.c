/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcc0bfd0 (ELF vaddr 0xcb0bfd0)
 * Label: caller-of-callee
 * Body:  [[0cc0bfd0, 0cc0c04a] [0cc0c050, 0cc0c212] [0cc0c220, 0cc0c4a0] [0cc0c4b0, 0cc0c578] [0cc0c580, 0cc0c60a] [0cc0c610, 0cc0c69e] [0cc0c6a0, 0cc0c6b8] [0cc0c6c0, 0cc0c7b8] [0cc0c7c0, 0cc0cc58] [0cc0cc60, 0cc0d0a9] [0cc0d0b0, 0cc0d157] [0cc0d160, 0cc0d419] [0cc0d420, 0cc0d524] [0cc0d530, 0cc0d649] [0cc0d650, 0cc0d774] [0cc0d780, 0cc0d921] [0cc0d930, 0cc0da00] [0cc0da10, 0cc0da48] [0cc0da50, 0cc0dbdb] [0cc0dbe0, 0cc0dc57] [0cc0dc60, 0cc0ddb4] [0cc0ddc0, 0cc0de99] [0cc0dea0, 0cc0e053] [0cc0e060, 0cc0e09e] [0cc0e0a0, 0cc0e20c] [0cc0e210, 0cc0e337] [0cc0e340, 0cc0e3ae] [0cc0e3b0, 0cc0e523] [0cc0e530, 0cc0e5fb] [0cc0e600, 0cc0e67c] [0cc0e680, 0cc0e6fe] [0cc0e700, 0cc0e793] [0cc0e7a0, 0cc0e8d5] [0cc0e8e0, 0cc0e979] [0cc0e980, 0cc0e9b8] [0cc0e9c0, 0cc0ec8f] [0cc0ef3f, 0cc0ef56] [0cc0f1b0, 0cc0f1bb] [0cc0f4ec, 0cc0f5a8] [0cc0f5b0, 0cc0f60d] [0cc0f613, 0cc0f63e]]
 * Ghidra: FUN_0cc0bfd0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0cc0bfd0(long *param_1,long param_2)

{
  long lVar1;
  short sVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  long lVar9;
  long lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  char cVar14;
  undefined1 uVar15;
  byte bVar16;
  int iVar17;
  long *plVar18;
  long lVar19;
  ulong uVar20;
  byte *pbVar21;
  ulong uVar22;
  undefined4 *puVar23;
  byte *pbVar24;
  undefined8 **ppuVar25;
  long *plVar26;
  ulong uVar27;
  long *plVar28;
  long lVar29;
  long lVar30;
  ulong uVar31;
  ulong uVar32;
  undefined8 *puVar33;
  ulong *puVar34;
  bool bVar35;
  undefined1 uStack_469;
  long *plStack_468;
  byte *pbStack_460;
  long *plStack_458;
  byte *pbStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  ulong uStack_438;
  undefined *puStack_430;
  ulong *puStack_428;
  ulong uStack_420;
  ulong uStack_418;
  long *plStack_410;
  undefined1 auStack_408 [16];
  long *plStack_3f8;
  long *plStack_3f0;
  long *plStack_3e8;
  byte *pbStack_3e0;
  long *plStack_3d8;
  long lStack_3d0;
  undefined8 *puStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  long *plStack_3b0;
  undefined4 uStack_3a8;
  undefined1 uStack_3a4;
  long *plStack_3a0;
  undefined *puStack_398;
  ulong *puStack_390;
  ulong uStack_388;
  ulong uStack_380;
  byte *pbStack_378;
  ulong uStack_370;
  ulong uStack_368;
  undefined8 uStack_358;
  undefined8 uStack_350;
  long lStack_348;
  byte *pbStack_338;
  long *plStack_330;
  long *plStack_328;
  long *plStack_320;
  long *plStack_318;
  long *plStack_310;
  long *plStack_308;
  long *plStack_300;
  undefined *puStack_2f8;
  ulong *puStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  byte bStack_2b8;
  undefined7 uStack_2b7;
  undefined1 uStack_2b0;
  undefined1 uStack_2af;
  undefined1 uStack_2ae;
  undefined8 uStack_2a8;
  byte bStack_2a0;
  undefined7 uStack_29f;
  undefined1 uStack_298;
  undefined4 uStack_297;
  undefined1 uStack_293;
  undefined8 uStack_290;
  byte bStack_288;
  undefined7 uStack_287;
  undefined1 uStack_280;
  undefined1 uStack_27f;
  undefined1 uStack_27e;
  undefined8 uStack_278;
  byte bStack_270;
  undefined7 uStack_26f;
  undefined1 uStack_268;
  undefined2 uStack_267;
  undefined1 uStack_265;
  undefined8 uStack_260;
  byte bStack_258;
  undefined4 uStack_257;
  undefined2 uStack_253;
  undefined1 uStack_251;
  undefined8 uStack_248;
  byte bStack_240;
  undefined7 uStack_23f;
  undefined1 uStack_238;
  undefined2 uStack_237;
  undefined1 uStack_235;
  undefined8 uStack_230;
  byte bStack_228;
  undefined5 uStack_227;
  undefined2 uStack_222;
  undefined1 uStack_220;
  undefined5 uStack_21f;
  undefined1 uStack_21a;
  undefined8 uStack_218;
  byte bStack_210;
  undefined4 uStack_20f;
  undefined4 uStack_20b;
  undefined4 uStack_207;
  undefined1 uStack_203;
  undefined2 uStack_202;
  undefined1 uStack_200;
  undefined5 uStack_1ff;
  undefined1 uStack_1fa;
  undefined1 uStack_1f9;
  byte bStack_1f8;
  undefined7 uStack_1f7;
  undefined1 uStack_1f0;
  undefined1 uStack_1ef;
  undefined8 uStack_1e8;
  byte bStack_1e0;
  undefined4 uStack_1df;
  undefined1 uStack_1db;
  undefined1 uStack_1da;
  undefined1 uStack_1d9;
  undefined8 uStack_1d0;
  byte bStack_1c8;
  undefined5 uStack_1c7;
  undefined2 uStack_1c2;
  undefined1 uStack_1c0;
  undefined5 uStack_1bf;
  undefined1 uStack_1ba;
  undefined8 uStack_1b8;
  byte bStack_1b0;
  undefined4 uStack_1af;
  undefined4 uStack_1ab;
  undefined4 uStack_1a7;
  undefined4 uStack_1a3;
  undefined2 uStack_19f;
  undefined1 uStack_19d;
  undefined4 uStack_19c;
  ulong uStack_198;
  undefined8 uStack_190;
  undefined4 *puStack_188;
  byte bStack_180;
  undefined4 uStack_17f;
  undefined4 uStack_17b;
  undefined4 uStack_177;
  undefined2 uStack_173;
  undefined1 uStack_171;
  undefined1 uStack_170;
  undefined6 uStack_16f;
  undefined1 uStack_169;
  byte bStack_168;
  undefined4 uStack_167;
  undefined4 uStack_163;
  undefined4 uStack_15f;
  undefined1 uStack_15b;
  undefined2 uStack_15a;
  undefined1 uStack_158;
  undefined5 uStack_157;
  undefined1 uStack_152;
  undefined1 uStack_151;
  byte bStack_150;
  undefined7 uStack_14f;
  undefined1 uStack_148;
  undefined4 uStack_147;
  undefined1 uStack_143;
  undefined8 uStack_140;
  byte bStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  undefined1 uStack_128;
  undefined7 uStack_127;
  byte bStack_120;
  undefined7 uStack_11f;
  undefined1 uStack_118;
  undefined1 uStack_117;
  undefined8 uStack_110;
  byte bStack_108;
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined1 uStack_ff;
  undefined8 uStack_f8;
  long *plStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long *plStack_c8;
  long *plStack_c0;
  long lStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  byte *pbStack_a0;
  undefined *puStack_98;
  long **pplStack_90;
  long lStack_88;
  undefined **ppuStack_78;
  undefined *puStack_68;
  long **pplStack_60;
  long lStack_58;
  undefined **ppuStack_48;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lStack_3d0 = param_2;
  plStack_3b0 = param_1;
  func_0x0cc0f640(&plStack_c8);
  plStack_458 = plStack_c8;
  plStack_b0 = plStack_c0;
  if (plStack_c8 == plStack_c0) {
joined_r0x0cc0ec23:
    if (plStack_c8 != (long *)0x0) {
      func_0x0412a280(plStack_c8,lStack_b8 - (long)plStack_c8);
    }
    return plStack_3b0;
  }
  pbStack_338 = &bStack_1e0;
LAB_0cc0c090:
  puStack_398 = &UNK_0f47e0b0;
  puStack_390 = &uStack_388;
  uStack_388 = 0;
  uStack_380 = 0;
  plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (plVar18 == (long *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  *plVar18 = (long)&UNK_0f47e0b0;
  plVar26 = plVar18 + 1;
  plVar18[2] = 0;
  plVar18[3] = 0;
  plVar18[1] = (long)(plVar18 + 2);
  bStack_108 = 0x10;
  uStack_107 = 0x695f6b636f6c62;
  uStack_100 = 100;
  uStack_ff = 0;
  uVar3 = *(undefined4 *)(*plStack_458 + 0x68);
  uStack_448 = &bStack_108;
  lVar19 = func_0x0d6c9580(plVar26,uStack_448,&UNK_01563a4f,&uStack_448,&puStack_3c8);
  if ((ulong)*(uint *)(lVar19 + 0x60) != 0xffffffff) {
    (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar19 + 0x60) * 8))(&uStack_448,lVar19 + 0x38);
  }
  *(undefined **)(lVar19 + 0x38) = &UNK_0f47e2e0;
  *(undefined4 *)(lVar19 + 0x40) = uVar3;
  *(undefined4 *)(lVar19 + 0x60) = 3;
  if ((bStack_108 & 1) != 0) {
    func_0x0412a280(uStack_f8,CONCAT71(uStack_107,bStack_108) & 0xfffffffffffffffe);
  }
  bStack_120 = 0x10;
  uStack_11f = 0x6169726574616d;
  uStack_118 = 0x6c;
  uStack_117 = 0;
  uVar4 = *(undefined8 *)(&UNK_0efe56c8 + (ulong)*(byte *)(*plStack_458 + 0x6c) * 8);
  uVar20 = func_0x0eee2e90(uVar4);
  if (uVar20 < 0xfffffffffffffff8) {
    if (uVar20 < 0x17) {
      uStack_358 = CONCAT71(uStack_358._1_7_,(char)uVar20 * '\x02');
      lVar19 = (long)&uStack_358 + 1;
      if (uVar20 != 0) goto LAB_0cc0c27a;
    }
    else {
      uVar32 = (uVar20 | 7) + 1;
      if ((uVar20 | 7) == 0x17) {
        uVar32 = 0x1a;
      }
      lVar19 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar32);
      if (lVar19 == 0) {
        func_0x0eec74c0(uVar32,0);
      }
      uStack_358 = uVar32 | 1;
      uStack_350 = uVar20;
      lStack_348 = lVar19;
LAB_0cc0c27a:
      memmove(lVar19,uVar4,uVar20);
    }
    *(undefined1 *)(lVar19 + uVar20) = 0;
    uStack_448 = &bStack_120;
    lVar19 = func_0x0d6c9580(plVar26,uStack_448,&UNK_01563a4f,&uStack_448,&puStack_3c8);
    if ((ulong)*(uint *)(lVar19 + 0x60) != 0xffffffff) {
      (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar19 + 0x60) * 8))(&uStack_448,lVar19 + 0x38);
    }
    lVar29 = lStack_348;
    uVar3 = (undefined4)uStack_358;
    uVar11 = uStack_358._4_4_;
    uVar12 = (undefined4)uStack_350;
    uVar13 = uStack_350._4_4_;
    uStack_358 = 0;
    uStack_350 = 0;
    lStack_348 = 0;
    *(undefined **)(lVar19 + 0x38) = &UNK_0f47e5e8;
    *(undefined4 *)(lVar19 + 0x40) = uVar3;
    *(undefined4 *)(lVar19 + 0x44) = uVar11;
    *(undefined4 *)(lVar19 + 0x48) = uVar12;
    *(undefined4 *)(lVar19 + 0x4c) = uVar13;
    *(long *)(lVar19 + 0x50) = lVar29;
    *(undefined4 *)(lVar19 + 0x60) = 8;
    if ((bStack_120 & 1) != 0) {
      func_0x0412a280(uStack_110,CONCAT71(uStack_11f,bStack_120) & 0xfffffffffffffffe);
    }
    if (*(long *)(*plStack_458 + 0x70) != *(long *)(*plStack_458 + 0x78)) {
      plStack_3d8 = plVar26;
      pbVar21 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (pbVar21 == (byte *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      *(undefined **)pbVar21 = &UNK_0f47e0b0;
      pbStack_3e0 = pbVar21 + 0x10;
      pbVar21[0x10] = 0;
      pbVar21[0x11] = 0;
      pbVar21[0x12] = 0;
      pbVar21[0x13] = 0;
      pbVar21[0x14] = 0;
      pbVar21[0x15] = 0;
      pbVar21[0x16] = 0;
      pbVar21[0x17] = 0;
      pbVar21[0x18] = 0;
      pbVar21[0x19] = 0;
      pbVar21[0x1a] = 0;
      pbVar21[0x1b] = 0;
      pbVar21[0x1c] = 0;
      pbVar21[0x1d] = 0;
      pbVar21[0x1e] = 0;
      pbVar21[0x1f] = 0;
      *(byte **)(pbVar21 + 8) = pbStack_3e0;
      plStack_468 = (long *)*plStack_458;
      pbStack_450 = pbVar21;
      plStack_3f8 = plVar18;
      if ((*(long *)(lStack_3d0 + 0xd0) == 0) &&
         (cVar14 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
         cVar14 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      if ((**(char **)(lStack_3d0 + 0xd0) == '\0') &&
         (cVar14 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e),
         cVar14 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      plStack_410 = *(long **)(lStack_3d0 + 0xe0);
      if ((DAT_0f6ff860 == '\0') && (iVar17 = FUN_04108328(&DAT_0f6ff860), iVar17 != 0)) {
        func_0x0cbea0d0();
        __cxa_atexit(&UNK_0cbea550,&DAT_0f6ff838,0xf53dab8);
        func_0x0410844d(&DAT_0f6ff860);
      }
      pbVar21 = (byte *)plStack_468[0xe];
      pbStack_460 = (byte *)plStack_468[0xf];
      if (pbVar21 != pbStack_460) {
        plStack_468 = plStack_468 + 0xe;
        do {
          bVar35 = (*pbVar21 & 1) != 0;
          pbVar24 = pbVar21 + 1;
          if (bVar35) {
            pbVar24 = *(byte **)(pbVar21 + 0x10);
          }
          uVar20 = (ulong)(*pbVar21 >> 1);
          if (bVar35) {
            uVar20 = *(ulong *)(pbVar21 + 8);
          }
          uVar22 = func_0x04883620(&uStack_448,pbVar24,uVar20);
          uVar32 = _DAT_0f6ff840;
          if (_DAT_0f6ff840 != 0) {
            uVar27 = _DAT_0f6ff840 - (_DAT_0f6ff840 >> 1 & 0x5555555555555555);
            uVar27 = (uVar27 >> 2 & 0x3333333333333333) + (uVar27 & 0x3333333333333333);
            uVar27 = ((uVar27 >> 4) + uVar27 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
            if (uVar27 >> 0x38 < 2) {
              uVar31 = _DAT_0f6ff840 - 1 & uVar22;
              plVar18 = *(long **)(_DAT_0f6ff838 + uVar31 * 8);
            }
            else if (uVar22 < _DAT_0f6ff840) {
              plVar18 = *(long **)(_DAT_0f6ff838 + uVar22 * 8);
              uVar31 = uVar22;
            }
            else if ((uVar22 | _DAT_0f6ff840) >> 0x20 == 0) {
              uVar31 = (uVar22 & 0xffffffff) % (_DAT_0f6ff840 & 0xffffffff);
              plVar18 = *(long **)(_DAT_0f6ff838 + uVar31 * 8);
            }
            else {
              plVar18 = *(long **)(_DAT_0f6ff838 + (uVar22 % _DAT_0f6ff840) * 8);
              uVar31 = uVar22 % _DAT_0f6ff840;
            }
            if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
              auStack_408._0_8_ = uVar31;
              if ((byte)(uVar27 >> 0x38) < 2) {
                uVar32 = _DAT_0f6ff840 - 1;
                do {
                  if (uVar22 == plVar18[1]) {
                    if (plVar18[3] == uVar20) {
                      iVar17 = bcmp(plVar18[2],pbVar24,uVar20);
                      uVar31 = auStack_408._0_8_;
                      if (iVar17 == 0) goto LAB_0cc0c6c0;
                    }
                  }
                  else if ((plVar18[1] & uVar32) != uVar31) break;
                  plVar18 = (long *)*plVar18;
                } while (plVar18 != (long *)0x0);
              }
              else {
                do {
                  uVar27 = plVar18[1];
                  if (uVar22 == uVar27) {
                    if (plVar18[3] == uVar20) {
                      iVar17 = bcmp(plVar18[2],pbVar24,uVar20);
                      uVar31 = auStack_408._0_8_;
                      if (iVar17 == 0) goto LAB_0cc0c6c0;
                    }
                  }
                  else {
                    if (uVar32 <= uVar27) {
                      if ((uVar27 | uVar32) >> 0x20 == 0) {
                        uVar27 = (uVar27 & 0xffffffff) % (uVar32 & 0xffffffff);
                      }
                      else {
                        uVar27 = uVar27 % uVar32;
                      }
                    }
                    if (uVar27 != uVar31) break;
                  }
                  plVar18 = (long *)*plVar18;
                } while (plVar18 != (long *)0x0);
              }
            }
          }
          pbVar21 = pbVar21 + 0x18;
        } while (pbVar21 != pbStack_460);
      }
      goto LAB_0cc0c6de;
    }
    goto LAB_0cc0c7f7;
  }
  goto LAB_0cc0ec6d;
LAB_0cc0c6c0:
  (**(code **)(plVar18[4] + 0x10))(plVar18 + 4,plStack_468,pbStack_450,plStack_410);
LAB_0cc0c6de:
  plVar26 = plStack_3d8;
  bStack_138 = 0x1e;
  uStack_12f = 0x65707974656863;
  uStack_137 = 0x615f6b636f6c62;
  uStack_130 = 0x72;
  uStack_128 = 0;
  uStack_448 = &bStack_138;
  lVar19 = func_0x0d6c9580(plStack_3d8,uStack_448,&UNK_01563a4f,&uStack_448,&puStack_3c8);
  plVar18 = plStack_3f8;
  pbVar21 = pbStack_450;
  if ((ulong)*(uint *)(lVar19 + 0x60) != 0xffffffff) {
    (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar19 + 0x60) * 8))(&uStack_448,lVar19 + 0x38);
  }
  *(undefined **)(lVar19 + 0x38) = &UNK_0f47e0b0;
  *(long *)(lVar19 + 0x40) = *(long *)(pbVar21 + 8);
  lVar29 = *(long *)(pbVar21 + 0x10);
  *(long *)(lVar19 + 0x48) = lVar29;
  lVar30 = *(long *)(pbVar21 + 0x18);
  *(long *)(lVar19 + 0x50) = lVar30;
  if (lVar30 == 0) {
    *(long *)(lVar19 + 0x40) = lVar19 + 0x48;
  }
  else {
    *(long *)(lVar29 + 0x10) = lVar19 + 0x48;
    *(byte **)(pbVar21 + 8) = pbStack_3e0;
    pbStack_3e0[0] = 0;
    pbStack_3e0[1] = 0;
    pbStack_3e0[2] = 0;
    pbStack_3e0[3] = 0;
    pbStack_3e0[4] = 0;
    pbStack_3e0[5] = 0;
    pbStack_3e0[6] = 0;
    pbStack_3e0[7] = 0;
    pbStack_3e0[8] = 0;
    pbStack_3e0[9] = 0;
    pbStack_3e0[10] = 0;
    pbStack_3e0[0xb] = 0;
    pbStack_3e0[0xc] = 0;
    pbStack_3e0[0xd] = 0;
    pbStack_3e0[0xe] = 0;
    pbStack_3e0[0xf] = 0;
  }
  *(undefined4 *)(lVar19 + 0x60) = 10;
  (**(code **)(*(long *)pbVar21 + 8))(pbVar21);
  if ((bStack_138 & 1) != 0) {
    func_0x0412a280(CONCAT71(uStack_127,uStack_128),
                    CONCAT71(uStack_137,bStack_138) & 0xfffffffffffffffe);
  }
LAB_0cc0c7f7:
  plVar28 = plStack_458;
  if (*(char *)(*plStack_458 + 0xa4) == '\x01') {
    bStack_150 = 0x18;
    uStack_14f = 0x756c736e617274;
    uStack_148 = 99;
    uStack_147 = 0x79636e65;
    uStack_143 = 0;
    auStack_408 = ZEXT416(*(uint *)(*plStack_458 + 0xa0));
    uStack_448 = &bStack_150;
    lVar19 = func_0x0d6c9580(plVar26,uStack_448,&UNK_01563a4f,&uStack_448,&puStack_3c8);
    if ((ulong)*(uint *)(lVar19 + 0x60) != 0xffffffff) {
      (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar19 + 0x60) * 8))(&uStack_448,lVar19 + 0x38);
    }
    plVar28 = plStack_458;
    *(undefined **)(lVar19 + 0x38) = &UNK_0f47e190;
    *(uint *)(lVar19 + 0x40) = -(uint)!NAN((float)auStack_408._0_4_) & auStack_408._0_4_;
    *(undefined4 *)(lVar19 + 0x60) = 5;
    if ((bStack_150 & 1) != 0) {
      func_0x0412a280(uStack_140,CONCAT71(uStack_14f,bStack_150) & 0xfffffffffffffffe);
    }
  }
  if (*(char *)(*plVar28 + 0xa8) == '\x01') {
    bStack_168 = 0x2a;
    uStack_167 = _DAT_014daf12;
    uStack_163 = _UNK_014daf16;
    uStack_15f = _UNK_014daf1a;
    uStack_15b = (undefined1)_UNK_014daf1e;
    uStack_15a = 0x7262;
    uStack_158 = 0x61;
    uStack_157 = 0x736e6f6974;
    uStack_152 = 0;
    func_0x0d6bbef0(plVar18,&bStack_168,1);
    if ((bStack_168 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_151,CONCAT16(uStack_152,CONCAT51(uStack_157,uStack_158))),
                      CONCAT35((undefined3)uStack_163,CONCAT41(uStack_167,bStack_168)) &
                      0xfffffffffffffffe);
    }
  }
  if (*(char *)(*plStack_458 + 0xa9) == '\x01') {
    bStack_180 = 0x2c;
    uStack_17f = _DAT_0124f7fc;
    uStack_17b = _UNK_0124f800;
    uStack_177 = _UNK_0124f804;
    uStack_173 = (undefined2)_UNK_0124f808;
    uStack_171 = 0x62;
    uStack_170 = 0x72;
    uStack_16f = 0x736e6f697461;
    uStack_169 = 0;
    func_0x0d6bbef0(plVar18,&bStack_180,1);
    if ((bStack_180 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_169,CONCAT61(uStack_16f,uStack_170)),
                      CONCAT35((undefined3)uStack_17b,CONCAT41(uStack_17f,bStack_180)) &
                      0xfffffffffffffffe);
    }
  }
  if (*(char *)(*plStack_458 + 0xaa) == '\x01') {
    puVar23 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar23 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar4 = _UNK_01470224;
    uStack_198 = 0x21;
    uStack_190 = 0x1f;
    *(ulong *)((long)puVar23 + 0xf) = CONCAT71(_UNK_0147021d,DAT_0147021c);
    *(undefined8 *)((long)puVar23 + 0x17) = uVar4;
    uVar12 = _UNK_01470219;
    uVar11 = _UNK_01470215;
    uVar3 = _UNK_01470211;
    *puVar23 = _DAT_0147020d;
    puVar23[1] = uVar3;
    puVar23[2] = uVar11;
    puVar23[3] = uVar12;
    *(undefined1 *)((long)puVar23 + 0x1f) = 0;
    puStack_188 = puVar23;
    func_0x0d6bbef0(plVar18,&uStack_198,1);
    if ((uStack_198 & 1) != 0) {
      func_0x0412a280(puStack_188,uStack_198 & 0xfffffffffffffffe);
    }
  }
  bStack_1b0 = 0x24;
  uStack_1af = _DAT_01218c16;
  uStack_1ab = _UNK_01218c1a;
  uStack_1a7 = _UNK_01218c1e;
  uStack_1a3 = _UNK_01218c22;
  uStack_19f = 0x6174;
  uStack_19d = 0;
  plStack_300 = plVar18;
  func_0x0d6bb450(&puStack_398,&bStack_1b0,&plStack_300);
  plStack_300 = (long *)0x0;
  (**(code **)(*plVar18 + 8))(plVar18);
  if ((bStack_1b0 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_19c,CONCAT13(uStack_19d,CONCAT21(uStack_19f,uStack_1a3._3_1_))),
                    CONCAT35((undefined3)uStack_1ab,CONCAT41(uStack_1af,bStack_1b0)) &
                    0xfffffffffffffffe);
  }
  bStack_1c8 = 0x1a;
  uStack_1bf = 0x6e6f697372;
  uStack_1c7 = 0x6e616c6f6d;
  uStack_1c2 = 0x5667;
  uStack_1c0 = 0x65;
  uStack_1ba = 0;
  sVar2 = *(short *)(*plStack_458 + 0x34);
  uStack_448 = &bStack_1c8;
  lVar19 = func_0x0d6c9580(&puStack_390,uStack_448,&UNK_01563a4f,&uStack_448,&puStack_3c8);
  if ((ulong)*(uint *)(lVar19 + 0x60) != 0xffffffff) {
    (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar19 + 0x60) * 8))(&uStack_448,lVar19 + 0x38);
  }
  *(undefined **)(lVar19 + 0x38) = &UNK_0f47e2e0;
  *(int *)(lVar19 + 0x40) = (int)sVar2;
  *(undefined4 *)(lVar19 + 0x60) = 3;
  if ((bStack_1c8 & 1) != 0) {
    func_0x0412a280(uStack_1b8,
                    CONCAT26(uStack_1c2,CONCAT51(uStack_1c7,bStack_1c8)) & 0xfffffffffffffffe);
  }
  plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (plVar18 == (long *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  *plVar18 = (long)&UNK_0f47e0b0;
  plVar18[2] = 0;
  plVar18[3] = 0;
  plVar18[1] = (long)(plVar18 + 2);
  bStack_1e0 = 10;
  uStack_1db = 0x70;
  uStack_1df = 0x756f7267;
  uStack_1da = 0;
  lVar19 = *plStack_458;
  if ((*(byte *)(lVar19 + 200) & 1) == 0) {
    uStack_2c8 = *(undefined8 *)(lVar19 + 0xd8);
    uStack_2d8 = *(undefined8 *)(lVar19 + 200);
    uStack_2d0 = *(undefined8 *)(lVar19 + 0xd0);
  }
  else {
    func_0x0412e5e0(&uStack_2d8,*(undefined8 *)(lVar19 + 0xd8),*(undefined8 *)(lVar19 + 0xd0));
  }
  uStack_448 = &bStack_1e0;
  lVar19 = func_0x0d6c9580(plVar18 + 1,uStack_448,&UNK_01563a4f,&uStack_448,&puStack_3c8);
  if ((ulong)*(uint *)(lVar19 + 0x60) != 0xffffffff) {
    (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar19 + 0x60) * 8))(&uStack_448,lVar19 + 0x38);
  }
  uVar4 = uStack_2c8;
  uVar3 = (undefined4)uStack_2d8;
  uVar11 = uStack_2d8._4_4_;
  uVar12 = (undefined4)uStack_2d0;
  uVar13 = uStack_2d0._4_4_;
  uStack_2d8 = 0;
  uStack_2d0 = 0;
  uStack_2c8 = 0;
  *(undefined **)(lVar19 + 0x38) = &UNK_0f47e5e8;
  *(undefined4 *)(lVar19 + 0x40) = uVar3;
  *(undefined4 *)(lVar19 + 0x44) = uVar11;
  *(undefined4 *)(lVar19 + 0x48) = uVar12;
  *(undefined4 *)(lVar19 + 0x4c) = uVar13;
  *(undefined8 *)(lVar19 + 0x50) = uVar4;
  *(undefined4 *)(lVar19 + 0x60) = 8;
  if ((bStack_1e0 & 1) != 0) {
    func_0x0412a280(uStack_1d0,
                    CONCAT17(uStack_1d9,
                             CONCAT16(uStack_1da,
                                      CONCAT15(uStack_1db,CONCAT41(uStack_1df,bStack_1e0)))) &
                    0xfffffffffffffffe);
  }
  bStack_1f8 = 0x10;
  uStack_1f7 = 0x726f6765746163;
  uStack_1f0 = 0x79;
  uStack_1ef = 0;
  func_0x0e8111b0(&uStack_e8,*(undefined1 *)(*plStack_458 + 0xe0));
  uStack_448 = &bStack_1f8;
  lVar19 = func_0x0d6c9580(plVar18 + 1,uStack_448,&UNK_01563a4f,&uStack_448,&puStack_3c8);
  if ((ulong)*(uint *)(lVar19 + 0x60) != 0xffffffff) {
    (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar19 + 0x60) * 8))(&uStack_448,lVar19 + 0x38);
  }
  uVar4 = uStack_d8;
  uVar3 = (undefined4)uStack_e8;
  uVar11 = uStack_e8._4_4_;
  uVar12 = (undefined4)uStack_e0;
  uVar13 = uStack_e0._4_4_;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  *(undefined **)(lVar19 + 0x38) = &UNK_0f47e5e8;
  *(undefined4 *)(lVar19 + 0x40) = uVar3;
  *(undefined4 *)(lVar19 + 0x44) = uVar11;
  *(undefined4 *)(lVar19 + 0x48) = uVar12;
  *(undefined4 *)(lVar19 + 0x4c) = uVar13;
  *(undefined8 *)(lVar19 + 0x50) = uVar4;
  *(undefined4 *)(lVar19 + 0x60) = 8;
  if ((bStack_1f8 & 1) != 0) {
    func_0x0412a280(uStack_1e8,CONCAT71(uStack_1f7,bStack_1f8) & 0xfffffffffffffffe);
  }
  bStack_210 = 0x2a;
  uStack_20f = _DAT_0148af92;
  uStack_20b = _UNK_0148af96;
  uStack_207 = _UNK_0148af9a;
  uStack_203 = (undefined1)_UNK_0148af9e;
  uStack_202 = 0x6f63;
  uStack_200 = 0x6d;
  uStack_1ff = 0x73646e616d;
  uStack_1fa = 0;
  func_0x0d6bbef0(plVar18,&bStack_210,*(undefined1 *)(*plStack_458 + 0xe1));
  if ((bStack_210 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_1f9,CONCAT16(uStack_1fa,CONCAT51(uStack_1ff,uStack_200))),
                    CONCAT35((undefined3)uStack_20b,CONCAT41(uStack_20f,bStack_210)) &
                    0xfffffffffffffffe);
  }
  bStack_228 = 0x1a;
  uStack_21f = 0x79726f6765;
  uStack_227 = 0x5f756e656d;
  uStack_222 = 0x6163;
  uStack_220 = 0x74;
  uStack_21a = 0;
  plStack_308 = plVar18;
  func_0x0d6bb450(&puStack_398,&bStack_228,&plStack_308);
  plStack_308 = (long *)0x0;
  (**(code **)(*plVar18 + 8))(plVar18);
  if ((bStack_228 & 1) != 0) {
    func_0x0412a280(uStack_218,
                    CONCAT26(uStack_222,CONCAT51(uStack_227,bStack_228)) & 0xfffffffffffffffe);
  }
  plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (plVar18 == (long *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  *plVar18 = (long)&UNK_0f47e0b0;
  plVar18[2] = 0;
  plVar18[3] = 0;
  plVar18[1] = (long)(plVar18 + 2);
  plStack_3f0 = plVar18;
  lVar19 = *plStack_458;
  puStack_68 = &UNK_0f3f8a98;
  pplStack_60 = &plStack_3f0;
  lStack_58 = lStack_3d0;
  ppuStack_48 = &puStack_68;
  puVar33 = *(undefined8 **)(lVar19 + 0x158);
  lVar29 = 0x20;
  if (puVar33 == *(undefined8 **)(lVar19 + 0x160)) {
LAB_0cc0d016:
    (**(code **)(*ppuStack_48 + lVar29))();
  }
  else {
    do {
      if (ppuStack_48 == (undefined **)0x0) goto LAB_0cc0ec36;
      (**(code **)(*ppuStack_48 + 0x30))(ppuStack_48,*puVar33);
      puVar33 = puVar33 + 2;
    } while (puVar33 != *(undefined8 **)(lVar19 + 0x160));
    if ((ppuStack_48 == &puStack_68) || (lVar29 = 0x28, ppuStack_48 != (undefined **)0x0))
    goto LAB_0cc0d016;
  }
  if (*(long *)(*plStack_458 + 0xb0) != *(long *)(*plStack_458 + 0xb8)) {
    plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (plVar18 == (long *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    *plVar18 = (long)&UNK_0f47e350;
    plVar18[1] = 0;
    plVar18[2] = 0;
    *(undefined8 *)((long)plVar18 + 0x11) = 0;
    *(undefined8 *)((long)plVar18 + 0x19) = 0;
    pbVar21 = *(byte **)(*plStack_458 + 0xb0);
    pbStack_450 = *(byte **)(*plStack_458 + 0xb8);
    if (pbVar21 != pbStack_450) {
      pbStack_3e0 = (byte *)(plVar18 + 1);
      plStack_468 = plVar18;
      do {
        pbVar24 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (pbVar24 == (byte *)0x0) {
          func_0x0eec74c0(0x20,0);
        }
        *(undefined **)pbVar24 = &UNK_0f47e0b0;
        pbVar24[0x10] = 0;
        pbVar24[0x11] = 0;
        pbVar24[0x12] = 0;
        pbVar24[0x13] = 0;
        pbVar24[0x14] = 0;
        pbVar24[0x15] = 0;
        pbVar24[0x16] = 0;
        pbVar24[0x17] = 0;
        pbVar24[0x18] = 0;
        pbVar24[0x19] = 0;
        pbVar24[0x1a] = 0;
        pbVar24[0x1b] = 0;
        pbVar24[0x1c] = 0;
        pbVar24[0x1d] = 0;
        pbVar24[0x1e] = 0;
        pbVar24[0x1f] = 0;
        *(byte **)(pbVar24 + 8) = pbVar24 + 0x10;
        plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (plVar18 == (long *)0x0) {
          func_0x0eec74c0(0x20,0);
        }
        auStack_408._0_8_ = pbVar21;
        if ((*pbVar21 & 1) == 0) {
          uStack_438 = *(ulong *)(pbVar21 + 0x10);
          uStack_448 = *(byte **)pbVar21;
          uStack_440 = *(ulong *)(pbVar21 + 8);
        }
        else {
          func_0x0412e5e0(&uStack_448,*(long *)(pbVar21 + 0x10),*(long *)(pbVar21 + 8));
        }
        puStack_3c8 = &uStack_448;
        *plVar18 = (long)&UNK_0f47e5e8;
        plVar18[1] = (long)uStack_448;
        plVar18[2] = uStack_440;
        plVar18[3] = uStack_438;
        uStack_448 = (byte *)0x656d616e08;
        uStack_440 = 0;
        uStack_438 = 0;
        lVar19 = func_0x0d6c9580(pbVar24 + 8,puStack_3c8,&UNK_01563a4f,&puStack_3c8,&uStack_469);
        func_0x0d6bb5a0(lVar19 + 0x38,plVar18);
        if (((ulong)uStack_448 & 1) != 0) {
          func_0x0412a280(uStack_438,(ulong)uStack_448 & 0xfffffffffffffffe);
        }
        (**(code **)(*plVar18 + 8))(plVar18);
        (**(code **)(**(long **)(auStack_408._0_8_ + 0x20) + 0x50))(&plStack_3a0);
        plVar18 = plStack_3a0;
        if (plStack_3a0 != (long *)0x0) {
          uStack_448 = (byte *)0x6d756e6508;
          uStack_440 = 0;
          uStack_438 = 0;
          puStack_3c8 = &uStack_448;
          lVar19 = func_0x0d6c9580(pbVar24 + 8,puStack_3c8,&UNK_01563a4f,&puStack_3c8,&uStack_469);
          func_0x0d6bb5a0(lVar19 + 0x38,plVar18);
          if (((ulong)uStack_448 & 1) != 0) {
            func_0x0412a280(uStack_438,(ulong)uStack_448 & 0xfffffffffffffffe);
          }
          plVar18 = plStack_3a0;
          plStack_3a0 = (long *)0x0;
          if (plVar18 != (long *)0x0) {
            (**(code **)(*plVar18 + 8))();
          }
        }
        pbStack_460 = pbVar24;
        uVar15 = (**(code **)(*(long *)pbVar24 + 0x30))(pbVar24);
        *(undefined1 *)(plStack_468 + 4) = uVar15;
        puVar33 = (undefined8 *)plStack_468[2];
        if (puVar33 < (undefined8 *)plStack_468[3]) {
          *puVar33 = pbStack_460;
          puVar33 = puVar33 + 1;
          plVar18 = plStack_468;
        }
        else {
          plVar18 = *(long **)pbStack_3e0;
          lVar19 = (long)puVar33 - (long)plVar18;
          uVar20 = (lVar19 >> 3) + 1;
          if (0x1fffffffffffffff < uVar20) goto LAB_0cc0ec4f;
          uVar22 = plStack_468[3] - (long)plVar18;
          uVar32 = (long)uVar22 >> 2;
          if ((ulong)((long)uVar22 >> 2) <= uVar20) {
            uVar32 = uVar20;
          }
          if (0x7ffffffffffffff7 < uVar22) {
            uVar32 = 0x1fffffffffffffff;
          }
          plStack_3f8 = plVar18;
          if (0x1fffffffffffffff < uVar32) goto LAB_0cc0ec54;
          lVar29 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar32 * 8);
          if (lVar29 == 0) {
            func_0x0eec74c0(uVar32 * 8,0);
          }
          plVar26 = plStack_3f8;
          plStack_3d8 = (long *)(uVar32 * 8 + lVar29);
          *(byte **)(lVar29 + lVar19) = pbStack_460;
          puVar33 = (undefined8 *)(lVar19 + lVar29 + 8);
          lVar29 = lVar19 + lVar29 + (lVar19 >> 3) * -8;
          func_0x0eee2f00(lVar29,plStack_3f8,lVar19);
          plVar18 = plStack_468;
          plStack_468[1] = lVar29;
          plStack_468[2] = (long)puVar33;
          plStack_468[3] = (long)plStack_3d8;
          if (plVar26 != (long *)0x0) {
            func_0x0412a280(plVar26,uVar22);
          }
        }
        plVar18[2] = (long)puVar33;
        pbVar21 = (byte *)(auStack_408._0_8_ + 0x28);
      } while (pbVar21 != pbStack_450);
    }
    bStack_240 = 0x14;
    uStack_23f = 0x747265706f7270;
    uStack_238 = 0x69;
    uStack_237 = 0x7365;
    uStack_235 = 0;
    plStack_310 = plVar18;
    func_0x0d6bb450(&puStack_398,&bStack_240,&plStack_310);
    plStack_310 = (long *)0x0;
    (**(code **)(*plVar18 + 8))(plVar18);
    if ((bStack_240 & 1) != 0) {
      func_0x0412a280(uStack_230,CONCAT71(uStack_23f,bStack_240) & 0xfffffffffffffffe);
    }
  }
  if (*(long *)(*plStack_458 + 0x100) != 0) {
    plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (plVar18 == (long *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    *plVar18 = (long)&UNK_0f47e350;
    plVar18[1] = 0;
    plVar18[2] = 0;
    *(undefined8 *)((long)plVar18 + 0x11) = 0;
    *(undefined8 *)((long)plVar18 + 0x19) = 0;
    pbVar21 = *(byte **)(*plStack_458 + 0xf8);
    if (pbVar21 != (byte *)0x0) {
      plStack_3d8 = plVar18 + 1;
      plStack_468 = plVar18;
      do {
        lVar19 = *(long *)(pbVar21 + 0x28);
        if (lVar19 != 0) {
          pbStack_460 = pbVar21;
          if ((*(long *)(lStack_3d0 + 0xd0) == 0) &&
             (cVar14 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
             cVar14 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          if ((**(char **)(lStack_3d0 + 0xd0) == '\0') &&
             (cVar14 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e
                                      ), cVar14 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          func_0x0cb95840(&uStack_448,lVar19,*(undefined8 *)(lStack_3d0 + 0xe0));
          pbVar21 = uStack_448;
          uStack_448 = (byte *)0x0;
          auStack_408._0_8_ = pbVar21;
          uVar15 = (**(code **)(*(long *)pbVar21 + 0x30))();
          *(undefined1 *)(plStack_468 + 4) = uVar15;
          puVar33 = (undefined8 *)plStack_468[2];
          if (puVar33 < (undefined8 *)plStack_468[3]) {
            *puVar33 = auStack_408._0_8_;
            puVar33 = puVar33 + 1;
            plVar18 = plStack_468;
          }
          else {
            pbVar21 = (byte *)*plStack_3d8;
            lVar19 = (long)puVar33 - (long)pbVar21;
            uVar20 = (lVar19 >> 3) + 1;
            if (0x1fffffffffffffff < uVar20) goto LAB_0cc0ec63;
            uVar22 = plStack_468[3] - (long)pbVar21;
            uVar32 = (long)uVar22 >> 2;
            if ((ulong)((long)uVar22 >> 2) <= uVar20) {
              uVar32 = uVar20;
            }
            if (0x7ffffffffffffff7 < uVar22) {
              uVar32 = 0x1fffffffffffffff;
            }
            pbStack_450 = pbVar21;
            if (0x1fffffffffffffff < uVar32) goto LAB_0cc0ec59;
            lVar29 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar32 * 8);
            if (lVar29 == 0) {
              func_0x0eec74c0(uVar32 * 8,0);
            }
            pbVar21 = pbStack_450;
            plStack_3f8 = (long *)(uVar32 * 8 + lVar29);
            *(undefined8 *)(lVar29 + lVar19) = auStack_408._0_8_;
            puVar33 = (undefined8 *)(lVar19 + lVar29 + 8);
            lVar29 = lVar19 + lVar29 + (lVar19 >> 3) * -8;
            func_0x0eee2f00(lVar29,pbStack_450,lVar19);
            plVar18 = plStack_468;
            plStack_468[1] = lVar29;
            plStack_468[2] = (long)puVar33;
            plStack_468[3] = (long)plStack_3f8;
            if (pbVar21 != (byte *)0x0) {
              func_0x0412a280(pbVar21,uVar22);
            }
          }
          pbVar24 = uStack_448;
          plVar18[2] = (long)puVar33;
          uStack_448 = (byte *)0x0;
          pbVar21 = pbStack_460;
          if (pbVar24 != (byte *)0x0) {
            (**(code **)(*(long *)pbVar24 + 8))();
            pbVar21 = pbStack_460;
          }
        }
        pbVar21 = *(byte **)pbVar21;
      } while (pbVar21 != (byte *)0x0);
    }
    bStack_258 = 0xc;
    uStack_253 = 0x7374;
    uStack_257 = 0x69617274;
    uStack_251 = 0;
    plStack_318 = plVar18;
    func_0x0d6bb450(&puStack_398,&bStack_258,&plStack_318);
    plStack_318 = (long *)0x0;
    (**(code **)(*plVar18 + 8))(plVar18);
    if ((bStack_258 & 1) != 0) {
      func_0x0412a280(uStack_248,
                      CONCAT17(uStack_251,CONCAT25(uStack_253,CONCAT41(uStack_257,bStack_258))) &
                      0xfffffffffffffffe);
    }
  }
  plVar18 = plStack_3f0;
  if (plStack_3f0[3] != 0) {
    bStack_270 = 0x14;
    uStack_26f = 0x656e6f706d6f63;
    uStack_268 = 0x6e;
    uStack_267 = 0x7374;
    uStack_265 = 0;
    plStack_3f0 = (long *)0x0;
    plStack_320 = plVar18;
    func_0x0d6bb450(&puStack_398,&bStack_270,&plStack_320);
    plStack_320 = (long *)0x0;
    (**(code **)(*plVar18 + 8))(plVar18);
    if ((bStack_270 & 1) != 0) {
      func_0x0412a280(uStack_260,CONCAT71(uStack_26f,bStack_270) & 0xfffffffffffffffe);
    }
  }
  plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (plVar18 == (long *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  *plVar18 = (long)&UNK_0f47e350;
  plVar18[1] = 0;
  plVar18[2] = 0;
  *(undefined8 *)((long)plVar18 + 0x11) = 0;
  *(undefined8 *)((long)plVar18 + 0x19) = 0;
  pbStack_450 = *(byte **)(*plStack_458 + 0x170);
  pbStack_a0 = *(byte **)(*plStack_458 + 0x178);
  plStack_3e8 = plVar18;
  if (pbStack_450 != pbStack_a0) {
    plStack_a8 = plVar18 + 1;
    do {
      plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (plVar18 == (long *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      *plVar18 = (long)&UNK_0f47e0b0;
      plVar18[2] = 0;
      plVar18[3] = 0;
      plStack_410 = plVar18;
      plVar18[1] = (long)(plVar18 + 2);
      bStack_288 = 0x12;
      uStack_287 = 0x697469646e6f63;
      uStack_280 = 0x6f;
      uStack_27f = 0x6e;
      uStack_27e = 0;
      if (*(int *)(pbStack_450 + 8) == 0) {
        if (*(long **)pbStack_450 != (long *)0x0) {
          (**(code **)(**(long **)pbStack_450 + 0x30))(&uStack_448);
          goto LAB_0cc0da28;
        }
LAB_0cc0da50:
        uStack_448 = (byte *)((ulong)uStack_448 & 0xffffffffffffff00);
        bVar35 = false;
        ppuVar25 = &puStack_3c8;
      }
      else {
        if (*(int *)(pbStack_450 + 8) != 1) goto LAB_0cc0da50;
        puStack_3c8 = (undefined8 *)CONCAT44(puStack_3c8._4_4_,*(undefined4 *)pbStack_450);
        func_0x0470d9a0(&uStack_448,&UNK_014bc653,4,9,&puStack_3c8);
LAB_0cc0da28:
        bVar35 = true;
        ppuVar25 = (undefined8 **)&uStack_448;
      }
      puStack_3c8 = (undefined8 *)0x0;
      uStack_3c0 = 0;
      uStack_3b8 = 0;
      puVar33 = *ppuVar25;
      puVar5 = ppuVar25[1];
      puVar6 = ppuVar25[2];
      *ppuVar25 = (undefined8 *)0x0;
      ppuVar25[1] = (undefined8 *)0x0;
      ppuVar25[2] = (undefined8 *)0x0;
      if (((ulong)puStack_3c8 & 1) != 0) {
        func_0x0412a280(uStack_3b8,(ulong)puStack_3c8 & 0xfffffffffffffffe);
      }
      if ((bVar35) && (((ulong)uStack_448 & 1) != 0)) {
        func_0x0412a280(uStack_438,(ulong)uStack_448 & 0xfffffffffffffffe);
      }
      plStack_f0 = plVar18 + 1;
      uStack_448 = &bStack_288;
      lVar19 = func_0x0d6c9580(plStack_f0,uStack_448,&UNK_01563a4f,&uStack_448,&puStack_3c8);
      if ((ulong)*(uint *)(lVar19 + 0x60) != 0xffffffff) {
        (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar19 + 0x60) * 8))
                  (&uStack_448,lVar19 + 0x38);
      }
      *(undefined **)(lVar19 + 0x38) = &UNK_0f47e5e8;
      *(undefined8 **)(lVar19 + 0x40) = puVar33;
      *(undefined8 **)(lVar19 + 0x48) = puVar5;
      *(undefined8 **)(lVar19 + 0x50) = puVar6;
      *(undefined4 *)(lVar19 + 0x60) = 8;
      if ((bStack_288 & 1) != 0) {
        func_0x0412a280(uStack_278,CONCAT71(uStack_287,bStack_288) & 0xfffffffffffffffe);
      }
      pbVar21 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
      if (pbVar21 == (byte *)0x0) {
        func_0x0eec74c0(0x28,0);
      }
      *(undefined **)pbVar21 = &UNK_0f47e350;
      pbVar21[8] = 0;
      pbVar21[9] = 0;
      pbVar21[10] = 0;
      pbVar21[0xb] = 0;
      pbVar21[0xc] = 0;
      pbVar21[0xd] = 0;
      pbVar21[0xe] = 0;
      pbVar21[0xf] = 0;
      pbVar21[0x10] = 0;
      pbVar21[0x11] = 0;
      pbVar21[0x12] = 0;
      pbVar21[0x13] = 0;
      pbVar21[0x14] = 0;
      pbVar21[0x15] = 0;
      pbVar21[0x16] = 0;
      pbVar21[0x17] = 0;
      pbVar21[0x11] = 0;
      pbVar21[0x12] = 0;
      pbVar21[0x13] = 0;
      pbVar21[0x14] = 0;
      pbVar21[0x15] = 0;
      pbVar21[0x16] = 0;
      pbVar21[0x17] = 0;
      pbVar21[0x18] = 0;
      pbVar21[0x19] = 0;
      pbVar21[0x1a] = 0;
      pbVar21[0x1b] = 0;
      pbVar21[0x1c] = 0;
      pbVar21[0x1d] = 0;
      pbVar21[0x1e] = 0;
      pbVar21[0x1f] = 0;
      pbVar21[0x20] = 0;
      plStack_3f8 = *(long **)(pbStack_450 + 0x40);
      auStack_408._0_8_ = *(long **)(pbStack_450 + 0x38);
      pbStack_460 = pbVar21;
      if (*(long **)(pbStack_450 + 0x38) == plStack_3f8) {
LAB_0cc0dea0:
        bVar35 = false;
      }
      else {
        pbStack_3e0 = pbVar21 + 8;
        do {
          plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
          if (plVar18 == (long *)0x0) {
            func_0x0eec74c0(0x20,0);
          }
          if ((*(byte *)(auStack_408._0_8_ + 8) & 1) == 0) {
            uStack_438 = *(ulong *)(auStack_408._0_8_ + 0x18);
            uStack_448 = *(byte **)(auStack_408._0_8_ + 8);
            uStack_440 = *(ulong *)(auStack_408._0_8_ + 0x10);
          }
          else {
            func_0x0412e5e0(&uStack_448,*(undefined8 *)(auStack_408._0_8_ + 0x18),
                            *(undefined8 *)(auStack_408._0_8_ + 0x10));
          }
          *plVar18 = (long)&UNK_0f47e5e8;
          *(undefined4 *)(plVar18 + 1) = (undefined4)uStack_448;
          *(undefined4 *)((long)plVar18 + 0xc) = uStack_448._4_4_;
          *(undefined4 *)(plVar18 + 2) = (undefined4)uStack_440;
          *(undefined4 *)((long)plVar18 + 0x14) = uStack_440._4_4_;
          plVar18[3] = uStack_438;
          plStack_468 = plVar18;
          bVar16 = (**(code **)(*plVar18 + 0x30))(plVar18);
          pbStack_460[0x20] = bVar16;
          puVar33 = *(undefined8 **)(pbStack_460 + 0x10);
          if (puVar33 < *(undefined8 **)(pbStack_460 + 0x18)) {
            *puVar33 = plStack_468;
            puVar33 = puVar33 + 1;
          }
          else {
            plVar18 = *(long **)pbStack_3e0;
            lVar19 = (long)puVar33 - (long)plVar18;
            uVar20 = (lVar19 >> 3) + 1;
            if (0x1fffffffffffffff < uVar20) goto LAB_0cc0ec2c;
            uVar22 = (long)*(undefined8 **)(pbStack_460 + 0x18) - (long)plVar18;
            uVar32 = (long)uVar22 >> 2;
            if ((ulong)((long)uVar22 >> 2) <= uVar20) {
              uVar32 = uVar20;
            }
            if (0x7ffffffffffffff7 < uVar22) {
              uVar32 = 0x1fffffffffffffff;
            }
            if (0x1fffffffffffffff < uVar32) goto LAB_0cc0ec31;
            plStack_3d8 = plVar18;
            lVar29 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar32 * 8);
            if (lVar29 == 0) {
              func_0x0eec74c0(uVar32 * 8,0);
            }
            plVar18 = plStack_3d8;
            *(long **)(lVar29 + lVar19) = plStack_468;
            puVar33 = (undefined8 *)(lVar29 + lVar19 + 8);
            lVar30 = lVar29 + lVar19 + (lVar19 >> 3) * -8;
            func_0x0eee2f00(lVar30,plStack_3d8,lVar19);
            *(long *)(pbStack_460 + 8) = lVar30;
            *(undefined8 **)(pbStack_460 + 0x10) = puVar33;
            *(ulong *)(pbStack_460 + 0x18) = lVar29 + uVar32 * 8;
            if (plVar18 != (long *)0x0) {
              func_0x0412a280(plVar18,uVar22);
            }
          }
          *(undefined8 **)(pbStack_460 + 0x10) = puVar33;
          plVar18 = (long *)(auStack_408._0_8_ + 0x28);
          auStack_408._0_8_ = plVar18;
        } while (plVar18 != plStack_3f8);
        if ((int)((ulong)((long)puVar33 - *(long *)pbStack_3e0) >> 3) < 1) goto LAB_0cc0dea0;
        uStack_448 = (byte *)0x61546b636f6c6212;
        uStack_440 = CONCAT17(uStack_3a4,CONCAT43(uStack_3a8,0x7367));
        uStack_438 = 0;
        uStack_3a8 = 0;
        uStack_3a4 = 0;
        puStack_3c8 = &uStack_448;
        lVar19 = func_0x0d6c9580(plStack_f0,puStack_3c8,&UNK_01563a4f,&puStack_3c8,&uStack_469);
        func_0x0d6bb5a0(lVar19 + 0x38,pbStack_460);
        if (((ulong)uStack_448 & 1) != 0) {
          func_0x0412a280(uStack_438,(ulong)uStack_448 & 0xfffffffffffffffe);
        }
        (**(code **)(*(long *)pbStack_460 + 8))();
        bVar35 = true;
        pbStack_460 = (byte *)0x0;
      }
      plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (plVar18 == (long *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      plVar26 = plStack_3f0;
      *plVar18 = (long)&UNK_0f47e0b0;
      plVar18[2] = 0;
      plVar18[3] = 0;
      plVar18[1] = (long)(plVar18 + 2);
      plStack_3f0 = plVar18;
      if (plVar26 != (long *)0x0) {
        (**(code **)(*plVar26 + 8))();
      }
      puStack_98 = &UNK_0f3f8b28;
      pplStack_90 = &plStack_3f0;
      lStack_88 = lStack_3d0;
      ppuStack_78 = &puStack_98;
      puVar33 = *(undefined8 **)(pbStack_450 + 0x50);
      lVar19 = 0x20;
      if (puVar33 == *(undefined8 **)(pbStack_450 + 0x58)) {
LAB_0cc0df99:
        (**(code **)(*ppuStack_78 + lVar19))();
      }
      else {
        do {
          if (ppuStack_78 == (undefined **)0x0) {
            func_0x04891200();
LAB_0cc0ec2c:
            func_0x0d6c9300();
LAB_0cc0ec31:
            func_0x04882eb0();
            goto LAB_0cc0ec36;
          }
          (**(code **)(*ppuStack_78 + 0x30))(ppuStack_78,*puVar33);
          puVar33 = puVar33 + 2;
        } while (puVar33 != *(undefined8 **)(pbStack_450 + 0x58));
        if ((ppuStack_78 == &puStack_98) || (lVar19 = 0x28, ppuStack_78 != (undefined **)0x0))
        goto LAB_0cc0df99;
      }
      plVar18 = plStack_3f0;
      if (plStack_3f0[3] == 0) {
        if (bVar35) goto LAB_0cc0e068;
      }
      else {
        plStack_3f0 = (long *)0x0;
        uStack_448 = (byte *)0x656e6f706d6f6314;
        uStack_440 = 0x73746e;
        uStack_438 = 0;
        puStack_3c8 = &uStack_448;
        lVar19 = func_0x0d6c9580(plStack_f0,puStack_3c8,&UNK_01563a4f,&puStack_3c8,&uStack_469);
        func_0x0d6bb5a0(lVar19 + 0x38,plVar18);
        if (((ulong)uStack_448 & 1) != 0) {
          func_0x0412a280(uStack_438,(ulong)uStack_448 & 0xfffffffffffffffe);
        }
        (**(code **)(*plVar18 + 8))(plVar18);
LAB_0cc0e068:
        uVar15 = (**(code **)(*plStack_410 + 0x30))();
        *(undefined1 *)(plStack_3e8 + 4) = uVar15;
        puVar33 = (undefined8 *)plStack_3e8[2];
        if (puVar33 < (undefined8 *)plStack_3e8[3]) {
          *puVar33 = plStack_410;
          puVar33 = puVar33 + 1;
        }
        else {
          lVar19 = *plStack_a8;
          lVar29 = (long)puVar33 - lVar19;
          uVar20 = (lVar29 >> 3) + 1;
          if (0x1fffffffffffffff < uVar20) goto LAB_0cc0ec4a;
          uVar22 = plStack_3e8[3] - lVar19;
          uVar32 = (long)uVar22 >> 2;
          if ((ulong)((long)uVar22 >> 2) <= uVar20) {
            uVar32 = uVar20;
          }
          if (0x7ffffffffffffff7 < uVar22) {
            uVar32 = 0x1fffffffffffffff;
          }
          if (0x1fffffffffffffff < uVar32) goto LAB_0cc0ec45;
          auStack_408._0_8_ = lVar19;
          lVar19 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar32 * 8);
          if (lVar19 == 0) {
            func_0x0eec74c0(uVar32 * 8,0);
          }
          plStack_468 = (long *)(uVar32 * 8 + lVar19);
          *(long **)(lVar19 + lVar29) = plStack_410;
          puVar33 = (undefined8 *)(lVar29 + lVar19 + 8);
          lVar19 = lVar29 + lVar19 + (lVar29 >> 3) * -8;
          uVar4 = auStack_408._0_8_;
          func_0x0eee2f00(lVar19,auStack_408._0_8_,lVar29);
          plStack_3e8[1] = lVar19;
          plStack_3e8[2] = (long)puVar33;
          plStack_3e8[3] = (long)plStack_468;
          if (uVar4 != 0) {
            func_0x0412a280(uVar4,uVar22);
          }
        }
        plStack_3e8[2] = (long)puVar33;
        plStack_410 = (long *)0x0;
      }
      if (pbStack_460 != (byte *)0x0) {
        (**(code **)(*(long *)pbStack_460 + 8))();
      }
      if (plStack_410 != (long *)0x0) {
        (**(code **)(*plStack_410 + 8))();
      }
      plVar18 = plStack_3e8;
      pbStack_450 = pbStack_450 + 0x68;
    } while (pbStack_450 != pbStack_a0);
    if (0 < (int)((ulong)(plStack_3e8[2] - plStack_3e8[1]) >> 3)) {
      bStack_2a0 = 0x18;
      uStack_29f = 0x6174756d726570;
      uStack_298 = 0x74;
      uStack_297 = 0x736e6f69;
      uStack_293 = 0;
      plStack_328 = plStack_3e8;
      func_0x0d6bb450(&puStack_398,&bStack_2a0,&plStack_328);
      plStack_328 = (long *)0x0;
      (**(code **)(*plVar18 + 8))(plVar18);
      if ((bStack_2a0 & 1) != 0) {
        func_0x0412a280(uStack_290,CONCAT71(uStack_29f,bStack_2a0) & 0xfffffffffffffffe);
      }
      plStack_3e8 = (long *)0x0;
    }
  }
  plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (plVar18 == (long *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  *plVar18 = (long)&UNK_0f47e350;
  plVar18[1] = 0;
  plVar18[2] = 0;
  *(undefined8 *)((long)plVar18 + 0x11) = 0;
  *(undefined8 *)((long)plVar18 + 0x19) = 0;
  pbVar21 = *(byte **)(*plStack_458 + 0x140);
  pbStack_450 = *(byte **)(*plStack_458 + 0x148);
  auStack_408._0_8_ = pbVar21;
  if (pbVar21 != pbStack_450) {
    pbStack_3e0 = (byte *)(plVar18 + 1);
    plStack_468 = plVar18;
    do {
      pbVar21 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (pbVar21 == (byte *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      if ((*(byte *)(auStack_408._0_8_ + 8) & 1) == 0) {
        uStack_438 = *(ulong *)(auStack_408._0_8_ + 0x18);
        uStack_448 = *(byte **)(auStack_408._0_8_ + 8);
        uStack_440 = *(ulong *)(auStack_408._0_8_ + 0x10);
      }
      else {
        func_0x0412e5e0(&uStack_448,*(undefined8 *)(auStack_408._0_8_ + 0x18),
                        *(undefined8 *)(auStack_408._0_8_ + 0x10));
      }
      *(undefined **)pbVar21 = &UNK_0f47e5e8;
      *(undefined4 *)(pbVar21 + 8) = (undefined4)uStack_448;
      *(undefined4 *)(pbVar21 + 0xc) = uStack_448._4_4_;
      *(undefined4 *)(pbVar21 + 0x10) = (undefined4)uStack_440;
      *(undefined4 *)(pbVar21 + 0x14) = uStack_440._4_4_;
      *(ulong *)(pbVar21 + 0x18) = uStack_438;
      pbStack_460 = pbVar21;
      uVar15 = (**(code **)(*(long *)pbVar21 + 0x30))(pbVar21);
      *(undefined1 *)(plStack_468 + 4) = uVar15;
      puVar33 = (undefined8 *)plStack_468[2];
      if (puVar33 < (undefined8 *)plStack_468[3]) {
        *puVar33 = pbStack_460;
        puVar33 = puVar33 + 1;
        plVar18 = plStack_468;
      }
      else {
        plVar18 = *(long **)pbStack_3e0;
        lVar19 = (long)puVar33 - (long)plVar18;
        uVar20 = (lVar19 >> 3) + 1;
        if (0x1fffffffffffffff < uVar20) goto LAB_0cc0ec3b;
        uVar22 = plStack_468[3] - (long)plVar18;
        uVar32 = (long)uVar22 >> 2;
        if ((ulong)((long)uVar22 >> 2) <= uVar20) {
          uVar32 = uVar20;
        }
        if (0x7ffffffffffffff7 < uVar22) {
          uVar32 = 0x1fffffffffffffff;
        }
        if (0x1fffffffffffffff < uVar32) goto LAB_0cc0ec40;
        plStack_3f8 = plVar18;
        lVar29 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar32 * 8);
        if (lVar29 == 0) {
          func_0x0eec74c0(uVar32 * 8,0);
        }
        plVar26 = plStack_3f8;
        plStack_3d8 = (long *)(uVar32 * 8 + lVar29);
        *(byte **)(lVar29 + lVar19) = pbStack_460;
        puVar33 = (undefined8 *)(lVar19 + lVar29 + 8);
        lVar29 = lVar19 + lVar29 + (lVar19 >> 3) * -8;
        func_0x0eee2f00(lVar29,plStack_3f8,lVar19);
        plVar18 = plStack_468;
        plStack_468[1] = lVar29;
        plStack_468[2] = (long)puVar33;
        plStack_468[3] = (long)plStack_3d8;
        if (plVar26 != (long *)0x0) {
          func_0x0412a280(plVar26,uVar22);
        }
      }
      plVar18[2] = (long)puVar33;
      pbVar21 = (byte *)(auStack_408._0_8_ + 0x28);
      auStack_408._0_8_ = pbVar21;
    } while (pbVar21 != pbStack_450);
    if (0 < (int)((ulong)((long)puVar33 - *(long *)pbStack_3e0) >> 3)) {
      bStack_2b8 = 0x12;
      uStack_2b7 = 0x61546b636f6c62;
      uStack_2b0 = 0x67;
      uStack_2af = 0x73;
      uStack_2ae = 0;
      plStack_330 = plVar18;
      func_0x0d6bb450(&puStack_398,&bStack_2b8,&plStack_330);
      plStack_330 = (long *)0x0;
      (**(code **)(*plVar18 + 8))(plVar18);
      if ((bStack_2b8 & 1) != 0) {
        func_0x0412a280(uStack_2a8,CONCAT71(uStack_2b7,bStack_2b8) & 0xfffffffffffffffe);
      }
      plVar18 = (long *)0x0;
    }
  }
  lVar19 = *plStack_458;
  if ((*(byte *)(lVar19 + 0x50) & 1) == 0) {
    uStack_368 = *(ulong *)(lVar19 + 0x60);
    pbStack_378 = *(byte **)(lVar19 + 0x50);
    uStack_370 = *(ulong *)(lVar19 + 0x58);
  }
  else {
    func_0x0412e5e0(&pbStack_378,*(undefined8 *)(lVar19 + 0x60),*(undefined8 *)(lVar19 + 0x58));
  }
  uVar32 = uStack_368;
  uVar20 = uStack_370;
  pbVar21 = pbStack_378;
  uStack_418 = uStack_380;
  uStack_420 = uStack_388;
  puStack_2f8 = &UNK_0f47e0b0;
  uStack_2e8 = uStack_388;
  uStack_2e0 = uStack_380;
  if (uStack_380 == 0) {
    puStack_2f0 = &uStack_2e8;
  }
  else {
    *(ulong **)(uStack_388 + 0x10) = &uStack_2e8;
    uStack_388 = 0;
    uStack_380 = 0;
    puStack_2f0 = puStack_390;
    puStack_390 = &uStack_388;
  }
  uStack_438 = uStack_368;
  uStack_448 = pbStack_378;
  uStack_440 = uStack_370;
  pbStack_378 = (byte *)0x0;
  uStack_370 = 0;
  uStack_368 = 0;
  puStack_430 = &UNK_0f47e0b0;
  if (uStack_418 == 0) {
    puStack_428 = &uStack_420;
  }
  else {
    *(ulong **)(uStack_420 + 0x10) = &uStack_420;
    uStack_2e8 = 0;
    uStack_2e0 = 0;
    puStack_428 = puStack_2f0;
    puStack_2f0 = &uStack_2e8;
  }
  puVar7 = (ulong *)plStack_3b0[1];
  puVar8 = (ulong *)plStack_3b0[2];
  if (puVar7 < puVar8) {
    puVar7[2] = uVar32;
    *puVar7 = (ulong)pbVar21;
    puVar7[1] = uVar20;
    uStack_448 = (byte *)0x0;
    uStack_440 = 0;
    uStack_438 = 0;
    puVar7[3] = (ulong)&UNK_0f47e0b0;
    puVar7[4] = (ulong)puStack_428;
    puVar7[5] = uStack_420;
    puVar7[6] = uStack_418;
    if (uStack_418 == 0) {
      puVar7[4] = (ulong)(puVar7 + 5);
    }
    else {
      *(ulong **)(uStack_420 + 0x10) = puVar7 + 5;
      puStack_428 = &uStack_420;
      uStack_420 = 0;
      uStack_418 = 0;
    }
LAB_0cc0ea26:
    plStack_3b0[1] = (long)(puVar7 + 7);
    puStack_430 = &UNK_0f47e0b0;
    func_0x0d6c9500(&puStack_428,uStack_420);
    if (((ulong)uStack_448 & 1) != 0) {
      func_0x0412a280(uStack_438,(ulong)uStack_448 & 0xfffffffffffffffe);
    }
    puStack_2f8 = &UNK_0f47e0b0;
    func_0x0d6c9500(&puStack_2f0,uStack_2e8);
    if (((ulong)pbStack_378 & 1) != 0) {
      func_0x0412a280(uStack_368,(ulong)pbStack_378 & 0xfffffffffffffffe);
    }
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 8))(plVar18);
    }
    if (plStack_3e8 != (long *)0x0) {
      (**(code **)(*plStack_3e8 + 8))();
    }
    plVar18 = plStack_3f0;
    plStack_3f0 = (long *)0x0;
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 8))();
    }
    puStack_398 = &UNK_0f47e0b0;
    func_0x0d6c9500(&puStack_390,uStack_388);
    plStack_458 = plStack_458 + 1;
    if (plStack_458 == plStack_b0) goto joined_r0x0cc0ec23;
    goto LAB_0cc0c090;
  }
  puVar34 = (ulong *)*plStack_3b0;
  lVar19 = (long)puVar7 - (long)puVar34;
  uVar20 = (lVar19 >> 3) * 0x6db6db6db6db6db7 + 1;
  plStack_468 = plVar18;
  if (uVar20 < 0x492492492492493) {
    lVar29 = (long)puVar8 - (long)puVar34 >> 3;
    uVar32 = lVar29 * -0x2492492492492492;
    if (uVar20 < uVar32) {
      uVar20 = uVar32;
    }
    if (0x249249249249248 < (ulong)(lVar29 * 0x6db6db6db6db6db7)) {
      uVar20 = 0x492492492492492;
    }
    auStack_408._0_8_ = puVar8;
    if (uVar20 == 0) {
      lVar29 = 0;
    }
    else {
      if (0x492492492492492 < uVar20) goto LAB_0cc0ec77;
      lVar29 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar20 * 0x38);
      if (lVar29 == 0) {
        func_0x0eec74c0(uVar20 * 0x38,0);
        lVar29 = 0;
      }
    }
    puVar8 = (ulong *)(lVar29 + lVar19);
    *(ulong *)(lVar29 + 0x10 + lVar19) = uStack_438;
    *(long *)(lVar29 + lVar19) = (long)uStack_448;
    ((long *)(lVar29 + lVar19))[1] = uStack_440;
    uStack_448 = (byte *)0x0;
    uStack_440 = 0;
    uStack_438 = 0;
    *(undefined **)(lVar29 + 0x18 + lVar19) = &UNK_0f47e0b0;
    *(ulong **)(lVar29 + 0x20 + lVar19) = puStack_428;
    uVar32 = lVar29 + 0x28 + lVar19;
    *(ulong *)(lVar29 + 0x28 + lVar19) = uStack_420;
    *(ulong *)(lVar29 + 0x30 + lVar19) = uStack_418;
    if (uStack_418 == 0) {
      puVar8[4] = uVar32;
    }
    else {
      *(ulong *)(uStack_420 + 0x10) = uVar32;
      puStack_428 = &uStack_420;
      uStack_420 = 0;
    }
    lVar19 = (long)puVar8 - lVar19;
    uStack_418 = 0;
    if (puVar34 != puVar7) {
      uStack_418 = 0;
      lVar30 = 0;
      do {
        while( true ) {
          *(undefined8 *)(lVar19 + 0x10 + lVar30) = *(undefined8 *)((long)puVar34 + lVar30 + 0x10);
          uVar4 = *(undefined8 *)((byte *)((long)puVar34 + lVar30) + 8);
          *(undefined8 *)(lVar19 + lVar30) = *(undefined8 *)((long)puVar34 + lVar30);
          ((undefined8 *)(lVar19 + lVar30))[1] = uVar4;
          pbVar21 = (byte *)((long)puVar34 + lVar30);
          pbVar21[0] = 0;
          pbVar21[1] = 0;
          pbVar21[2] = 0;
          pbVar21[3] = 0;
          pbVar21[4] = 0;
          pbVar21[5] = 0;
          pbVar21[6] = 0;
          pbVar21[7] = 0;
          pbVar21[8] = 0;
          pbVar21[9] = 0;
          pbVar21[10] = 0;
          pbVar21[0xb] = 0;
          pbVar21[0xc] = 0;
          pbVar21[0xd] = 0;
          pbVar21[0xe] = 0;
          pbVar21[0xf] = 0;
          pbVar21 = (byte *)((long)puVar34 + lVar30 + 0x10);
          pbVar21[0] = 0;
          pbVar21[1] = 0;
          pbVar21[2] = 0;
          pbVar21[3] = 0;
          pbVar21[4] = 0;
          pbVar21[5] = 0;
          pbVar21[6] = 0;
          pbVar21[7] = 0;
          *(undefined **)(lVar19 + 0x18 + lVar30) = &UNK_0f47e0b0;
          *(undefined8 *)(lVar19 + 0x20 + lVar30) = *(undefined8 *)((long)puVar34 + lVar30 + 0x20);
          lVar1 = lVar19 + 0x28 + lVar30;
          lVar9 = *(long *)((long)puVar34 + lVar30 + 0x28);
          *(long *)(lVar19 + 0x28 + lVar30) = lVar9;
          lVar10 = *(long *)((long)puVar34 + lVar30 + 0x30);
          *(long *)(lVar19 + 0x30 + lVar30) = lVar10;
          if (lVar10 == 0) break;
          pbVar21 = (byte *)((long)puVar34 + lVar30 + 0x28);
          *(long *)(lVar9 + 0x10) = lVar1;
          *(byte **)((long)puVar34 + lVar30 + 0x20) = pbVar21;
          pbVar21[0] = 0;
          pbVar21[1] = 0;
          pbVar21[2] = 0;
          pbVar21[3] = 0;
          pbVar21[4] = 0;
          pbVar21[5] = 0;
          pbVar21[6] = 0;
          pbVar21[7] = 0;
          pbVar21 = (byte *)((long)puVar34 + lVar30 + 0x30);
          pbVar21[0] = 0;
          pbVar21[1] = 0;
          pbVar21[2] = 0;
          pbVar21[3] = 0;
          pbVar21[4] = 0;
          pbVar21[5] = 0;
          pbVar21[6] = 0;
          pbVar21[7] = 0;
          lVar1 = lVar30 + 0x38;
          lVar30 = lVar30 + 0x38;
          uVar32 = uStack_418;
          if ((ulong *)((long)puVar34 + lVar1) == puVar7) goto LAB_0cc0e989;
        }
        *(long *)(lVar19 + 0x20 + lVar30) = lVar1;
        lVar1 = lVar30 + 0x38;
        lVar30 = lVar30 + 0x38;
        uVar32 = 0;
      } while ((ulong *)((long)puVar34 + lVar1) != puVar7);
LAB_0cc0e989:
      do {
        uStack_418 = uVar32;
        puVar34[3] = (ulong)&UNK_0f47e0b0;
        func_0x0d6c9500(puVar34 + 4,puVar34[5]);
        if ((*puVar34 & 1) != 0) {
          func_0x0412a280(puVar34[2],*puVar34 & 0xfffffffffffffffe);
        }
        puVar34 = puVar34 + 7;
        uVar32 = uStack_418;
      } while (puVar34 != puVar7);
      puVar34 = (ulong *)*plStack_3b0;
      auStack_408._0_8_ = plStack_3b0[2];
    }
    *plStack_3b0 = lVar19;
    plStack_3b0[2] = lVar29 + uVar20 * 0x38;
    plVar18 = plStack_468;
    puVar7 = puVar8;
    if (puVar34 != (ulong *)0x0) {
      func_0x0412a280(puVar34,auStack_408._0_8_ - (long)puVar34);
      plVar18 = plStack_468;
    }
    goto LAB_0cc0ea26;
  }
  goto LAB_0cc0ec72;
LAB_0cc0ec36:
  func_0x04891200();
LAB_0cc0ec3b:
  func_0x0d6c9300();
LAB_0cc0ec40:
  func_0x04882eb0();
LAB_0cc0ec45:
  func_0x04882eb0();
LAB_0cc0ec4a:
  func_0x0d6c9300();
LAB_0cc0ec4f:
  func_0x0d6c9300();
LAB_0cc0ec54:
  func_0x04882eb0();
LAB_0cc0ec59:
  func_0x04882eb0();
LAB_0cc0ec63:
  func_0x0d6c9300();
LAB_0cc0ec6d:
  func_0x04882e30();
LAB_0cc0ec72:
  func_0x07ff2780();
LAB_0cc0ec77:
  plVar26 = (long *)func_0x04882eb0();
  func_0x041084d6(&DAT_0f6ff860);
  (**(code **)(*(long *)pbStack_450 + 8))();
  lVar19 = *plStack_3f8;
  plVar18 = plStack_3f8;
  do {
    (**(code **)(lVar19 + 8))(plVar18);
    do {
      puStack_398 = &UNK_0f47e0b0;
      func_0x0d6c9500(&puStack_390,uStack_388);
      plVar18 = plStack_c8;
      if (plStack_c8 != (long *)0x0) goto LAB_0cc0f568;
      lVar19 = *plStack_3b0;
      while (lVar19 == 0) {
        plVar18 = plVar26;
        func_0x0eee2d70();
LAB_0cc0f568:
        plStack_c0 = plVar18;
        func_0x0412a280();
        lVar19 = *plStack_3b0;
      }
      lVar29 = lVar19;
      if (lVar19 != plStack_3b0[1]) {
        lVar29 = plStack_3b0[1] + -0x18;
        do {
          *(undefined **)(lVar29 + -8) = &UNK_0f47e0b0;
          func_0x0d6c9500(lVar29,*(undefined8 *)(lVar29 + 8));
          if ((*(byte *)(lVar29 + -0x20) & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(lVar29 + -0x10),
                            *(ulong *)(lVar29 + -0x20) & 0xfffffffffffffffe);
          }
          lVar30 = lVar29 + -0x20;
          lVar29 = lVar29 + -0x38;
        } while (lVar30 != lVar19);
        lVar29 = *plStack_3b0;
      }
      plStack_3b0[1] = lVar19;
      func_0x0412a280(lVar29,plStack_3b0[2] - lVar29);
      plVar26 = (long *)func_0x0eee2d70(plVar26);
      (**(code **)(*plStack_468 + 8))();
      (**(code **)(*(long *)pbStack_460 + 8))();
      if (plStack_410 != (long *)0x0) {
        (**(code **)(*plStack_410 + 8))();
      }
      (**(code **)(*plStack_3e8 + 8))();
      plVar18 = plStack_3f0;
      plStack_3f0 = (long *)0x0;
    } while (plVar18 == (long *)0x0);
    lVar19 = *plVar18;
  } while( true );
}



/* ---- referenced strings ----
 * 0x1218c16  vanilla_block_data
 * 0x124f7fc  can_occlude_vibrations
 * 0x147020d  requires_correct_tool_for_drops
 * 0x147021c  t_tool_for_drops
 * 0x148af92  is_hidden_in_commands
 * 0x14daf12  can_dampen_vibrations
 */
