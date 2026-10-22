/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x8b20060 (ELF vaddr 0x8a20060)
 * Label: caller-of-callee
 * Body:  [[08b20060, 08b201e3] [08b203cf, 08b20484] [08b20490, 08b204dc] [08b204e0, 08b205e5] [08b205f0, 08b20685] [08b20690, 08b20735] [08b20740, 08b207db] [08b207e0, 08b2081c] [08b20820, 08b208a0] [08b208b0, 08b20a09] [08b20a10, 08b2100d] [08b21010, 08b22342] [08b22350, 08b22549] [08b22550, 08b225d9] [08b225e0, 08b22647] [08b22650, 08b22866] [08b22870, 08b228f2] [08b22900, 08b22998] [08b229a0, 08b22c65] [08b22c70, 08b22ca0] [08b22cb0, 08b22e80] [08b22e90, 08b22ee8] [08b22ef0, 08b23003] [08b23010, 08b2310b] [08b23110, 08b23264] [08b23848, 08b238a4] [08b23a4d, 08b23a5a] [08b23aeb, 08b23af5] [08b23b06, 08b23b17] [08b23d04, 08b23d1d]]
 * Ghidra: FUN_08b20060
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08b20060(uint *param_1)

{
  undefined1 (*pauVar1) [16];
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  byte bVar5;
  code *pcVar6;
  ushort uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  byte bVar10;
  char cVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  uint *puVar17;
  undefined1 *puVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  long *plVar21;
  undefined4 *puVar22;
  ulong *puVar23;
  long lVar24;
  ulong uVar25;
  uint *puVar26;
  byte *pbVar27;
  uint *puVar28;
  byte *pbVar29;
  long lVar30;
  ulong uVar31;
  long lVar32;
  byte *pbVar33;
  ulong *puVar34;
  ulong *puVar35;
  uint *puVar36;
  char *pcVar37;
  ulong uVar38;
  ulong *puVar39;
  bool bVar40;
  bool bVar41;
  ulong uVar42;
  long lVar43;
  undefined1 auVar44 [16];
  undefined1 auStack_428 [12];
  byte abStack_41c [4];
  undefined8 *puStack_418;
  uint *puStack_410;
  uint *puStack_408;
  uint *puStack_400;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  uint uStack_3f0;
  byte bStack_3ec;
  undefined2 uStack_3eb;
  undefined1 uStack_3e9;
  undefined7 uStack_3e8;
  undefined1 uStack_3e1;
  long lStack_3e0;
  uint *puStack_3d8;
  uint *puStack_3c8;
  uint *puStack_3c0;
  undefined1 uStack_3b1;
  undefined8 uStack_3b0;
  uint *puStack_3a8;
  long lStack_3a0;
  undefined8 uStack_398;
  ulong uStack_390;
  long lStack_388;
  long lStack_380;
  undefined1 auStack_378 [2];
  undefined6 uStack_376;
  char cStack_370;
  undefined6 uStack_36f;
  undefined1 uStack_369;
  undefined1 uStack_368;
  undefined2 uStack_367;
  uint uStack_365;
  undefined1 uStack_361;
  byte bStack_360;
  undefined7 uStack_35f;
  undefined1 auStack_358 [16];
  undefined8 uStack_348;
  undefined1 auStack_340 [16];
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined1 auStack_320 [16];
  undefined1 auStack_310 [16];
  undefined1 auStack_300 [16];
  undefined1 auStack_2f0 [16];
  undefined1 auStack_2e0 [16];
  undefined1 auStack_2d0 [16];
  undefined1 auStack_2c0 [16];
  undefined1 auStack_2b0 [16];
  undefined1 auStack_2a0 [16];
  undefined8 uStack_290;
  uint uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  uint *puStack_270;
  undefined2 uStack_268;
  undefined8 uStack_260;
  undefined4 uStack_248;
  undefined4 uStack_240;
  undefined2 uStack_23c;
  undefined8 uStack_238;
  undefined4 uStack_230;
  undefined1 auStack_228 [16];
  undefined8 uStack_218;
  undefined8 uStack_208;
  uint *puStack_200;
  uint *puStack_1f8;
  undefined8 uStack_1f0;
  undefined4 *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  uint uStack_160;
  byte *pbStack_158;
  uint uStack_150;
  uint uStack_14c;
  uint uStack_148;
  undefined4 uStack_144;
  char *pcStack_140;
  char cStack_138;
  undefined7 uStack_137;
  byte bStack_130;
  undefined7 uStack_12f;
  undefined8 uStack_120;
  undefined8 uStack_100;
  
  if (param_1[2] != 0) {
    return;
  }
  puVar28 = param_1 + 0x86;
  func_0x0412d770();
  if (*(long *)(param_1 + 0xb4) != 0) {
    lVar43 = *(long *)(*(long *)(param_1 + 0xac) + (*(ulong *)(param_1 + 0xb2) / 0x2e) * 8);
    lVar30 = (*(ulong *)(param_1 + 0xb2) % 0x2e) * 0x58;
    uStack_150 = *(uint *)(lVar43 + lVar30);
    func_0x08b24b60(&uStack_148,lVar43 + lVar30 + 8);
    uStack_100 = *(undefined8 *)(lVar43 + lVar30 + 0x50);
    lVar30 = *(long *)(*(long *)(param_1 + 0xac) + (*(ulong *)(param_1 + 0xb2) / 0x2e) * 8);
    lVar24 = (*(ulong *)(param_1 + 0xb2) % 0x2e) * 0x58;
    lVar43 = lVar30 + lVar24;
    if ((*(byte *)(lVar30 + 0x20 + lVar24) & 1) != 0) {
      func_0x0412a280(*(undefined8 *)(lVar43 + 0x30),*(ulong *)(lVar43 + 0x20) & 0xfffffffffffffffe)
      ;
    }
    if ((*(byte *)(lVar43 + 8) & 1) != 0) {
      func_0x0412a280(*(undefined8 *)(lVar43 + 0x18),*(ulong *)(lVar43 + 8) & 0xfffffffffffffffe);
    }
    uVar42 = *(long *)(param_1 + 0xb2) + _DAT_014e9060;
    lVar43 = *(long *)(param_1 + 0xb4) + _UNK_014e9068;
    *(ulong *)(param_1 + 0xb2) = uVar42;
    *(long *)(param_1 + 0xb4) = lVar43;
    if (0x5b < uVar42) {
      func_0x0412a280(**(undefined8 **)(param_1 + 0xac),0xfd0);
      *(long *)(param_1 + 0xac) = *(long *)(param_1 + 0xac) + 8;
      *(long *)(param_1 + 0xb2) = *(long *)(param_1 + 0xb2) + -0x2e;
    }
    switch(uStack_150) {
    case 1:
      if (param_1[0xa8] < 2) {
        uVar14 = param_1[2];
      }
      else {
        if ((param_1[0xa8] != 2) || (param_1[2] != 0)) break;
        func_0x0412d770(puVar28);
        param_1[0xa8] = 0;
        lVar43 = *(long *)(param_1 + 0x2a);
        param_1[0x2a] = 0;
        param_1[0x2b] = 0;
        if (lVar43 != 0) {
          (**(code **)(param_1 + 0x2c))();
        }
        func_0x0412d790(puVar28);
        uVar14 = param_1[2];
      }
      if (uVar14 == 0) {
        func_0x0412d770(puVar28);
        plVar21 = (long *)(**(code **)(**(long **)(param_1 + 0x28) + 0xa8))();
        cVar11 = (**(code **)(*plVar21 + 0x90))(plVar21);
        if (cVar11 != '\0') {
          func_0x08b247e0(param_1 + 0x92,&uStack_148);
          if (param_1[2] == 0) {
            func_0x0412d770(puVar28);
            if (*(long *)(param_1 + 0x2a) == 0) {
              func_0x08b1e9e0(param_1);
            }
            func_0x08b1eb50(param_1,param_1 + 0x92);
            param_1[0xa8] = 1;
            func_0x0412d790(puVar28);
          }
          param_1[0xa8] = 1;
        }
code_r0x08b203c6:
        func_0x0412d790(puVar28);
      }
      break;
    case 2:
      if ((param_1[0xa8] == 1) && (param_1[2] == 0)) {
        func_0x0412d770(puVar28);
        plVar21 = *(long **)(param_1 + 0x2a);
        if (plVar21 != (long *)0x0) {
          (**(code **)(*plVar21 + 0x178))(plVar21,0,0);
          plVar21 = (long *)(**(code **)(**(long **)(param_1 + 0x28) + 0xa8))();
          (**(code **)(*plVar21 + 0x178))(plVar21,0,0);
        }
        param_1[0xa8] = 0;
        *(byte *)(param_1 + 0x66) = 0;
        goto code_r0x08b203c6;
      }
      break;
    case 3:
      uVar14 = param_1[0xa8];
      if (uVar14 == 0) {
code_r0x08b23307:
        if (param_1[2] == 0) {
          if ((*(char **)(param_1 + 4) == (char *)0x0) || (**(char **)(param_1 + 4) != '\x01')) {
code_r0x08b233cd:
            func_0x0412d770(puVar28);
            if (*(long *)(param_1 + 0x2a) == 0) {
              func_0x08b1e9e0(param_1);
            }
            param_1[0xa8] = 2;
            *(undefined8 *)(param_1 + 0x48) = uStack_100;
            if (param_1[0x90] == 1) {
              if (*(long *)(param_1 + 0x4e) == *(long *)(param_1 + 0x50)) {
                func_0x0412d770(puVar28);
                if (*(long *)(param_1 + 0x2a) != 0) {
                  puStack_3c0 = param_1 + 0x4e;
                  puVar20 = *(undefined8 **)(param_1 + 0x50);
                  if (puVar20 < *(undefined8 **)(param_1 + 0x52)) {
                    if ((bRam000000000f543e30 & 1) == 0) {
                      puVar20[2] = uRam000000000f543e40;
                      uVar19 = uRam000000000f543e38;
                      *puVar20 = CONCAT71(uRam000000000f543e31,bRam000000000f543e30);
                      puVar20[1] = uVar19;
                    }
                    else {
                      func_0x0412e5e0(puVar20,uRam000000000f543e40,uRam000000000f543e38);
                    }
                    puVar20 = puVar20 + 3;
                    *(undefined8 **)(param_1 + 0x50) = puVar20;
                  }
                  else {
                    puVar20 = (undefined8 *)func_0x04909a40(puStack_3c0,0xf543e30);
                  }
                  *(undefined8 **)(param_1 + 0x50) = puVar20;
                  uVar14 = 0;
                  while( true ) {
                    puVar26 = &uStack_3f0;
                    uVar15 = (**(code **)(**(long **)(param_1 + 0x2a) + 0x1e0))();
                    if (uVar15 <= uVar14) break;
                    puStack_410 = (uint *)CONCAT44(puStack_410._4_4_,uVar14);
                    uVar19 = (**(code **)(**(long **)(param_1 + 0x2a) + 0x1e8))
                                       (*(long **)(param_1 + 0x2a),uVar14);
                    func_0x0d709490(&uStack_3b0,uVar19);
                    func_0x0d6d7b00(&uStack_398,&uStack_3b0);
                    func_0x0d709590(&uStack_3b0);
                    if (uStack_398 == (undefined1 *)0xf545bc0) {
                      func_0x0d709590(&uStack_398);
                      func_0x0d709950(&uStack_398,0xe);
                      puVar20 = *(undefined8 **)(uStack_398 + 0x20);
                      *(undefined8 *)((long)puVar20 + 6) = 0x302e3435322e35;
                      *puVar20 = 0x2e3535322e353532;
                    }
                    uStack_3f8 = 0;
                    uStack_3f4 = 0;
                    uStack_3f0 = 0;
                    bStack_3ec = 0;
                    uStack_3eb = 0;
                    uStack_3e9 = 0;
                    _auStack_428 = (undefined1  [16])0x0;
                    iVar12 = func_0x0eee32d0(uVar19,&UNK_013dda97,&uStack_3f8,&uStack_3f4,puVar26,
                                             &bStack_3ec);
                    if ((iVar12 == 4) &&
                       (iVar12 = func_0x0eee32d0(*(undefined8 *)(uStack_398 + 0x20),&UNK_013dda97,
                                                 auStack_428,auStack_428 + 4,auStack_428 + 8,
                                                 auStack_428 + 0xc), iVar12 == 4)) {
                      func_0x0eee3930(auStack_378,&UNK_0138fd53,
                                      auStack_428[0] ^ 0xff | (byte)uStack_3f8,
                                      auStack_428[4] ^ 0xff | (byte)uStack_3f4,
                                      auStack_428[8] ^ 0xff | (byte)uStack_3f0,
                                      abStack_41c[0] ^ 0xff | bStack_3ec);
                      uVar42 = func_0x0eee2e90(auStack_378);
                      if (0xfffffffffffffff7 < uVar42) goto code_r0x08b2388e;
                      if (uVar42 < 0x17) {
                        uStack_1e0 = CONCAT71(uStack_1e0._1_7_,(char)uVar42 * '\x02');
                        lVar43 = (long)&uStack_1e0 + 1;
                        if (uVar42 != 0) goto code_r0x08b236dc;
                      }
                      else {
                        uVar25 = (uVar42 | 7) + 1;
                        if ((uVar42 | 7) == 0x17) {
                          uVar25 = 0x1a;
                        }
                        lVar43 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar25);
                        if (lVar43 == 0) {
                          func_0x0eec74c0(uVar25,0);
                        }
                        uStack_1e0 = uVar25 | 1;
                        uStack_1d8 = uVar42;
                        uStack_1d0 = lVar43;
code_r0x08b236dc:
                        func_0x0eee2f00(lVar43,auStack_378,uVar42);
                      }
                      *(undefined1 *)(lVar43 + uVar42) = 0;
                      func_0x057d8ed0(puStack_3c0,&uStack_1e0);
                      if ((uStack_1e0 & 1) != 0) {
                        func_0x0412a280(uStack_1d0,uStack_1e0 & 0xfffffffffffffffe);
                      }
                    }
                    func_0x0d709590(&uStack_398);
                    uVar14 = (int)puStack_410 + 1;
                  }
                }
                func_0x0412d790(puVar28);
              }
              puVar20 = *(undefined8 **)(param_1 + 0x56);
              if (*(undefined8 **)(param_1 + 0x54) == puVar20) {
                if (*(undefined8 **)(param_1 + 0x54) < *(undefined8 **)(param_1 + 0x58)) {
                  if ((bRam000000000f543e18 & 1) == 0) {
                    puVar20[2] = uRam000000000f543e28;
                    uVar19 = uRam000000000f543e20;
                    *puVar20 = CONCAT71(uRam000000000f543e19,bRam000000000f543e18);
                    puVar20[1] = uVar19;
                  }
                  else {
                    func_0x0412e5e0(puVar20,uRam000000000f543e28,uRam000000000f543e20);
                  }
                  puVar20 = puVar20 + 3;
                  *(undefined8 **)(param_1 + 0x56) = puVar20;
                }
                else {
                  puVar20 = (undefined8 *)func_0x04909a40(param_1 + 0x54,0xf543e18);
                }
                *(undefined8 **)(param_1 + 0x56) = puVar20;
                auStack_378[0] = 0x24;
                auStack_378[1] = (undefined1)_UNK_01279796;
                uStack_376 = (undefined6)((ulong)_UNK_01279796 >> 8);
                cStack_370 = (char)((ulong)_UNK_01279796 >> 0x38);
                uStack_36f = (undefined6)_UNK_0127979e;
                uStack_369 = (undefined1)((ulong)_UNK_0127979e >> 0x30);
                uStack_368 = (undefined1)((ulong)_UNK_0127979e >> 0x38);
                uStack_367 = 0x313a;
                uStack_365 = uStack_365 & 0xffffff00;
                func_0x057d8ed0(param_1 + 0x54,auStack_378);
                if ((auStack_378[0] & 1) != 0) {
                  func_0x0412a280(CONCAT17(uStack_361,
                                           CONCAT43(uStack_365,CONCAT21(uStack_367,uStack_368))),
                                  CONCAT62(uStack_376,CONCAT11(auStack_378[1],auStack_378[0])) &
                                  0xfffffffffffffffe);
                }
              }
            }
            goto code_r0x08b203c6;
          }
          cVar11 = (**(code **)(**(long **)(param_1 + 8) + 0x690))();
          if (cVar11 == '\0') {
            if ((*(long *)(param_1 + 4) == 0) &&
               (cVar11 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_012d6a7e
                                        ), cVar11 != '\0')) {
              _DAT_00000000 = 0xdeadc0de;
            }
            if ((**(char **)(param_1 + 4) == '\0') &&
               (cVar11 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,
                                         &UNK_012d6a7e), cVar11 != '\0')) {
              _DAT_00000000 = 0xdeadc0de;
            }
            cVar11 = (**(code **)(**(long **)(param_1 + 8) + 0x78))();
            if (cVar11 != '\0') goto code_r0x08b233cd;
          }
        }
      }
      else if (uVar14 == 2) {
        if (param_1[2] == 0) {
          func_0x0412d770(puVar28);
          param_1[0xa8] = 0;
          lVar43 = *(long *)(param_1 + 0x2a);
          param_1[0x2a] = 0;
          param_1[0x2b] = 0;
          if (lVar43 != 0) {
            (**(code **)(param_1 + 0x2c))();
          }
          goto code_r0x08b232fe;
        }
      }
      else if ((uVar14 == 1) && (param_1[2] == 0)) {
        func_0x0412d770(puVar28);
        plVar21 = *(long **)(param_1 + 0x2a);
        if (plVar21 != (long *)0x0) {
          (**(code **)(*plVar21 + 0x178))(plVar21,0,0);
          plVar21 = (long *)(**(code **)(**(long **)(param_1 + 0x28) + 0xa8))();
          (**(code **)(*plVar21 + 0x178))(plVar21,0,0);
        }
        param_1[0xa8] = 0;
        *(byte *)(param_1 + 0x66) = 0;
code_r0x08b232fe:
        func_0x0412d790(puVar28);
        goto code_r0x08b23307;
      }
      break;
    case 4:
      if ((param_1[0xa8] == 2) && (param_1[2] == 0)) {
        func_0x0412d770(puVar28);
        param_1[0xa8] = 0;
        lVar43 = *(long *)(param_1 + 0x2a);
        param_1[0x2a] = 0;
        param_1[0x2b] = 0;
        if (lVar43 != 0) {
          (**(code **)(param_1 + 0x2c))();
        }
        goto code_r0x08b203c6;
      }
    }
    if ((bStack_130 & 1) != 0) {
      func_0x0412a280(uStack_120,CONCAT71(uStack_12f,bStack_130) & 0xfffffffffffffffe);
    }
    if ((uStack_148 & 1) != 0) {
      func_0x0412a280(CONCAT71(uStack_137,cStack_138),
                      CONCAT44(uStack_144,uStack_148) & 0xfffffffffffffffe);
    }
  }
  func_0x0412d790(puVar28);
  func_0x0412d770(puVar28);
  plVar21 = *(long **)(param_1 + 0x2a);
  puVar26 = puVar28;
  if (plVar21 != (long *)0x0) {
    puStack_1f8 = param_1 + 0x68;
    pbStack_158 = (byte *)((long)param_1 + 0x1d1);
    puStack_3c8 = param_1 + 0x7c;
    puVar26 = param_1 + 0x40;
    puStack_200 = param_1 + 0x1e;
    puStack_408 = puVar26;
    while( true ) {
      puVar16 = (uint *)(**(code **)(*plVar21 + 0xd0))();
      if (puVar16 == (uint *)0x0) break;
      bVar40 = 0xe0000000 < puVar16[0x26] + 0xe0000000;
      if (bVar40) {
        uStack_150 = puVar16[0x26] << 3;
        pcStack_140 = *(char **)(puVar16 + 0x28);
        uStack_14c = uStack_150;
      }
      else {
        uStack_14c = 0x800;
        uStack_150 = 0;
        pcStack_140 = (char *)&uStack_137;
      }
      cStack_138 = !bVar40;
      uStack_148 = 8;
      if ((param_1[0xa8] == 2) && (**(char **)(puVar16 + 0x28) == '\x1c')) {
        lStack_380 = 0xf545bc0;
        if ((DAT_0f721f58 == '\0') && (iVar12 = func_0x04108328(&DAT_0f721f58), iVar12 != 0)) {
          DAT_0f721f50 = 1;
          FUN_0410844d(&DAT_0f721f58);
        }
        puVar36 = &uStack_150;
        func_0x0d6e0240(puVar36,auStack_378,0x20,1);
        if ((DAT_0f721f58 == '\0') && (iVar12 = func_0x04108328(&DAT_0f721f58), iVar12 != 0)) {
          DAT_0f721f50 = 1;
          FUN_0410844d(&DAT_0f721f58);
        }
        func_0x0d6e0240(puVar36,auStack_378,0x20,1);
        func_0x0d709ce0(&lStack_380,puVar36);
        uVar19 = *(undefined8 *)(lStack_380 + 0x20);
        puVar17 = (uint *)func_0x0eee2e90(uVar19);
        if ((uint *)0xfffffffffffffff7 < puVar17) {
          func_0x04882e30();
LAB_08b2384d:
          func_0x04882e30();
LAB_08b23852:
          auVar4._8_8_ = 0;
          auVar4._0_8_ = auStack_358._8_8_;
          auStack_358 = auVar4 << 0x40;
          uStack_1e0 = CONCAT44(uStack_1e0._4_4_,(int)puVar36);
LAB_08b23866:
          func_0x04891200();
          goto LAB_08b2386b;
        }
        if (puVar17 < (uint *)0x17) {
          uStack_3b0 = CONCAT71(uStack_3b0._1_7_,(char)puVar17 * '\x02');
          lVar43 = (long)&uStack_3b0 + 1;
          if (puVar17 != (uint *)0x0) goto LAB_08b2064a;
        }
        else {
          uVar42 = ((ulong)puVar17 | 7) + 1;
          if (((ulong)puVar17 | 7) == 0x17) {
            uVar42 = 0x1a;
          }
          lVar43 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar42);
          if (lVar43 == 0) {
            func_0x0eec74c0(uVar42,0);
          }
          uStack_3b0 = uVar42 | 1;
          puStack_3a8 = puVar17;
          lStack_3a0 = lVar43;
LAB_08b2064a:
          func_0x0eee2ee0(lVar43,uVar19,puVar17);
        }
        *(byte *)((long)puVar17 + lVar43) = 0;
        uStack_1f0 = func_0x0417cc60();
        lVar43 = lStack_3a0;
        puVar26 = puStack_3a8;
        if ((uStack_3b0 & 1) == 0) {
          puVar26 = (uint *)(uStack_3b0 >> 1 & 0x7f);
        }
        puVar36 = (uint *)0x4;
        if (puVar26 < (uint *)0x4) {
          puVar36 = puVar26;
        }
        puStack_3c0 = puVar16;
        if (puVar26 == (uint *)0x0) {
LAB_08b20a10:
          puVar36 = (uint *)0xffffffff;
        }
        else {
          lVar30 = lStack_3a0;
          if ((uStack_3b0 & 1) == 0) {
            lVar30 = (long)&uStack_3b0 + 1;
          }
          func_0x0eee2f00(auStack_378 + 1,lVar30,puVar36);
          (auStack_378 + 1)[(long)puVar36] = 0;
          if (puVar26 < (uint *)0x4) goto LAB_08b20a10;
          puStack_410 = puVar26;
          iVar12 = func_0x0eee3000(auStack_378 + 1,&UNK_018f1531,puVar36);
          puVar36 = (uint *)0xffffffff;
          if (iVar12 == 0) {
            _auStack_428 = (undefined1  [16])0x0;
            puStack_418 = (undefined8 *)0x0;
            auStack_378[0] = 0;
            auStack_378[1] = 0;
            bVar40 = false;
            puVar36 = (uint *)0x0;
            do {
              while( true ) {
                lVar30 = lVar43;
                if ((uStack_3b0 & 1) == 0) {
                  lVar30 = (long)&uStack_3b0 + 1;
                }
                if ((*(byte *)((long)puVar36 + lVar30) != 0x3b) || (bVar40)) break;
                puVar20 = (undefined8 *)stack0xfffffffffffffbe0;
                if (stack0xfffffffffffffbe0 < puStack_418) {
                  if ((auStack_378[0] & 1) != 0) {
                    func_0x0412e5e0(stack0xfffffffffffffbe0,
                                    CONCAT17(uStack_361,
                                             CONCAT43(uStack_365,CONCAT21(uStack_367,uStack_368))),
                                    CONCAT17(uStack_369,CONCAT61(uStack_36f,cStack_370)));
                    stack0xfffffffffffffbe0 = (uint *)(puVar20 + 3);
                    goto joined_r0x08b208d2;
                  }
                  *(ulong *)((long)stack0xfffffffffffffbe0 + 0x10) =
                       CONCAT17(uStack_361,CONCAT43(uStack_365,CONCAT21(uStack_367,uStack_368)));
                  *(ulong *)stack0xfffffffffffffbe0 =
                       CONCAT62(uStack_376,CONCAT11(auStack_378[1],auStack_378[0]));
                  *(ulong *)((long)stack0xfffffffffffffbe0 + 8) =
                       CONCAT17(uStack_369,CONCAT61(uStack_36f,cStack_370));
                  stack0xfffffffffffffbe0 = (uint *)((long)stack0xfffffffffffffbe0 + 0x18);
                  if ((auStack_378[0] & 1) != 0) goto LAB_08b20933;
LAB_08b20740:
                  auStack_378[0] = 0;
                  puVar18 = auStack_378 + 1;
                }
                else {
                  uVar19 = func_0x04909bd0(auStack_428,auStack_378);
                  stack0xfffffffffffffbe0 = (uint *)uVar19;
joined_r0x08b208d2:
                  if ((auStack_378[0] & 1) == 0) goto LAB_08b20740;
LAB_08b20933:
                  cStack_370 = '\0';
                  uStack_36f = 0;
                  uStack_369 = 0;
                  puVar18 = (undefined1 *)
                            CONCAT17(uStack_361,CONCAT43(uStack_365,CONCAT21(uStack_367,uStack_368))
                                    );
                }
                *puVar18 = 0;
                bVar40 = false;
                puVar36 = (uint *)((long)puVar36 + 1);
                if (puStack_410 == puVar36) goto LAB_08b20c3f;
              }
              if ((uStack_3b0 & 1) == 0) {
                lVar43 = (long)&uStack_3b0 + 1;
              }
              bVar10 = *(byte *)((long)puVar36 + lVar43);
              if ((auStack_378[0] & 1) == 0) {
                if (auStack_378[0] == 0x2c) {
                  lVar43 = 0x30;
                  uVar25 = 0x16;
                  puVar26 = (uint *)(auStack_378 + 1);
LAB_08b20894:
                  uVar42 = uVar25 + 1;
LAB_08b20950:
                  puStack_400 = (uint *)CONCAT71(puStack_400._1_7_,bVar10);
                  puVar18 = (undefined1 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar43);
                  if (puVar18 == (undefined1 *)0x0) {
                    func_0x0eec74c0(lVar43,0);
                  }
                  func_0x0eee2ee0(puVar18,puVar26,uVar25);
                  if (uVar42 != 0x17) {
                    func_0x0412a280(puVar26,uVar42);
                  }
                  uStack_368 = SUB81(puVar18,0);
                  uStack_367 = (undefined2)((ulong)puVar18 >> 8);
                  uStack_365 = (uint)((ulong)puVar18 >> 0x18);
                  uStack_361 = (undefined1)((ulong)puVar18 >> 0x38);
                  auStack_378[0] = (byte)lVar43 | 1;
                  auStack_378[1] = (undefined1)((ulong)lVar43 >> 8);
                  uStack_376 = (undefined6)((ulong)lVar43 >> 0x10);
                  uVar31 = uVar25;
                  bVar10 = (byte)puStack_400;
                  goto LAB_08b209ab;
                }
                uVar31 = (ulong)(auStack_378[0] >> 1);
                auStack_378[0] = auStack_378[0] + 2;
                puVar18 = auStack_378 + 1;
              }
              else {
                uVar31 = CONCAT17(uStack_369,CONCAT61(uStack_36f,cStack_370));
                uVar42 = CONCAT62(uStack_376,CONCAT11(auStack_378[1],auStack_378[0])) &
                         0xfffffffffffffffe;
                uVar25 = uVar42 - 1;
                if (uVar31 == uVar25) {
                  if (uVar42 != 0xfffffffffffffff8) {
                    puVar26 = (uint *)CONCAT17(uStack_361,
                                               CONCAT43(uStack_365,CONCAT21(uStack_367,uStack_368)))
                    ;
                    lVar43 = -9;
                    if (uVar25 < 0x7ffffffffffffff3) {
                      uVar42 = uVar25 * 2 | 7;
                      lVar43 = uVar42 + 1;
                      if (uVar42 == 0x17) {
                        lVar43 = 0x1a;
                      }
                      if (uVar25 < 0xc) {
                        lVar43 = 0x17;
                      }
                      goto LAB_08b20894;
                    }
                    goto LAB_08b20950;
                  }
                  goto LAB_08b2384d;
                }
                puVar18 = (undefined1 *)
                          CONCAT17(uStack_361,CONCAT43(uStack_365,CONCAT21(uStack_367,uStack_368)));
LAB_08b209ab:
                lVar43 = uVar31 + 1;
                cStack_370 = (char)lVar43;
                uStack_36f = (undefined6)((ulong)lVar43 >> 8);
                uStack_369 = (undefined1)((ulong)lVar43 >> 0x38);
              }
              puVar18[uVar31] = bVar10;
              puVar18[uVar31 + 1] = 0;
              lVar43 = lStack_3a0;
              if ((uStack_3b0 & 1) == 0) {
                lVar43 = (long)&uStack_3b0 + 1;
              }
              bVar40 = *(byte *)((long)puVar36 + lVar43) == 0x5c;
              puVar36 = (uint *)((long)puVar36 + 1);
              lVar43 = lStack_3a0;
            } while (puStack_410 != puVar36);
LAB_08b20c3f:
            bVar10 = auStack_378[0] & 1;
            uVar42 = (ulong)(auStack_378[0] >> 1);
            if (bVar10 != 0) {
              uVar42 = CONCAT17(uStack_369,CONCAT61(uStack_36f,cStack_370));
            }
            puVar20 = (undefined8 *)stack0xfffffffffffffbe0;
            if (uVar42 != 0) {
              if (stack0xfffffffffffffbe0 < puStack_418) {
                if (bVar10 == 0) {
                  *(ulong *)((long)stack0xfffffffffffffbe0 + 0x10) =
                       CONCAT17(uStack_361,CONCAT43(uStack_365,CONCAT21(uStack_367,uStack_368)));
                  *(ulong *)stack0xfffffffffffffbe0 =
                       CONCAT62(uStack_376,CONCAT11(auStack_378[1],auStack_378[0]));
                  *(ulong *)((long)stack0xfffffffffffffbe0 + 8) =
                       CONCAT17(uStack_369,CONCAT61(uStack_36f,cStack_370));
                }
                else {
                  func_0x0412e5e0(stack0xfffffffffffffbe0,
                                  CONCAT17(uStack_361,
                                           CONCAT43(uStack_365,CONCAT21(uStack_367,uStack_368))));
                }
                puVar20 = puVar20 + 3;
              }
              else {
                puVar20 = (undefined8 *)func_0x04909bd0(auStack_428,auStack_378);
              }
              stack0xfffffffffffffbe0 = (uint *)puVar20;
              bVar10 = auStack_378[0] & 1;
            }
            uVar19 = auStack_428._0_8_;
            puVar16 = (uint *)auStack_428._0_8_;
            if (bVar10 != 0) {
              func_0x0412a280(CONCAT17(uStack_361,
                                       CONCAT43(uStack_365,CONCAT21(uStack_367,uStack_368))),
                              CONCAT62(uStack_376,CONCAT11(auStack_378[1],auStack_378[0])) &
                              0xfffffffffffffffe);
              puVar16 = (uint *)auStack_428._0_8_;
            }
            puVar26 = (uint *)0xaaaaaaaaaaaaaaab;
            puVar36 = (uint *)0xffffffff;
            if ((ulong)(((long)puVar20 - uVar19 >> 3) * -0x5555555555555555) < 4) {
LAB_08b2232b:
              if (puVar16 == (uint *)0x0) goto LAB_08b20a16;
            }
            else {
              uVar42 = ((long)stack0xfffffffffffffbe0 - (long)puVar16 >> 3) * -0x5555555555555555;
              if (uVar42 < 2) {
                bVar40 = false;
LAB_08b20d93:
                puStack_400 = (uint *)CONCAT62(puStack_400._2_6_,_DAT_0f722be0);
                puStack_410 = _DAT_0f722bd8;
                func_0x0eee2f00(&uStack_1e0,puStack_3c0,0x88);
LAB_08b20daa:
                if ((puVar16[0xc] & 1) == 0) goto LAB_08b20f0c;
LAB_08b20dba:
                pbVar33 = *(byte **)(puVar16 + 0x10);
              }
              else {
                if (((byte)puVar16[6] & 1) == 0) {
                  uVar25 = (ulong)(byte)((byte)puVar16[6] >> 1);
                }
                else {
                  uVar25 = *(ulong *)(puVar16 + 8);
                }
                bVar40 = uVar25 != 0;
                puStack_410 = _DAT_0f722bd8;
                puStack_400 = (uint *)CONCAT62(puStack_400._2_6_,_DAT_0f722be0);
                if (uVar42 < 7) goto LAB_08b20d93;
                if ((puVar16[0x24] & 1) == 0) {
                  pbVar33 = (byte *)((long)puVar16 + 0x91);
                }
                else {
                  pbVar33 = *(byte **)(puVar16 + 0x28);
                }
                if (((pbVar33 != (byte *)0x0) &&
                    (iVar12 = func_0x0eee2f20(pbVar33,&DAT_0147161a), iVar12 != 0)) &&
                   (puVar16 = (uint *)func_0x0eee3060(pbVar33,0,10), puVar16 != (uint *)0x0)) {
                  puStack_410 = puVar16;
                }
                plVar21 = (long *)(**(code **)(**(long **)(param_1 + 0x28) + 0xa8))();
                puVar17 = (uint *)(**(code **)(*plVar21 + 400))(plVar21);
                puVar16 = (uint *)auStack_428._0_8_;
                if (puStack_410 == puVar17) goto LAB_08b2232b;
                lVar43 = (long)stack0xfffffffffffffbe0 - auStack_428._0_8_;
                func_0x0eee2f00(&uStack_1e0,puStack_3c0,0x88);
                if ((ulong)((lVar43 >> 3) * -0x5555555555555555) < 0xc) goto LAB_08b20daa;
                puVar26 = (uint *)((undefined8)puVar16 + 0x3c);
                puVar36 = (uint *)((undefined8)puVar16 + 0x40);
                pbVar33 = (byte *)((long)puVar16 + 0xf1);
                if ((short)uStack_1e0 != 2) {
                  pbVar33 = (byte *)((long)puVar16 + 0x109);
                  puVar36 = (uint *)((undefined8)puVar16 + 0x46);
                  puVar26 = (uint *)((undefined8)puVar16 + 0x42);
                }
                if ((*puVar26 & 1) != 0) {
                  pbVar33 = *(byte **)puVar36;
                }
                uVar42 = func_0x0eee3040(pbVar33,0);
                if ((uVar42 >> 0x20 != 0) && (uVar42 < 0xffffffff00000000)) {
                  puVar22 = (undefined4 *)func_0x0eee2fd0();
                  *puVar22 = 0x22;
                  uVar42 = 0xffff;
                }
                uVar7 = (ushort)uVar42;
                uStack_1e0._0_4_ = CONCAT22(uVar7 << 8 | uVar7 >> 8,(short)uStack_1e0);
                uStack_160 = CONCAT22(uStack_160._2_2_,uVar7);
                puVar16 = (uint *)auStack_428._0_8_;
                if ((*(uint *)(auStack_428._0_8_ + 0x30) & 1) != 0) goto LAB_08b20dba;
LAB_08b20f0c:
                pbVar33 = (byte *)((long)puVar16 + 0x31);
              }
              uStack_208 = func_0x0eee3110(pbVar33,0,10);
              puVar26 = param_1;
              if (bVar40) {
                func_0x0412d770(puStack_3c8);
                lVar43 = *(long *)(param_1 + 0x40);
                if (*(long *)(param_1 + 0x42) - lVar43 != 0) {
                  uVar42 = ((long)stack0xfffffffffffffbe0 - auStack_428._0_8_ >> 3) *
                           -0x5555555555555555;
                  puVar16 = (uint *)((*(long *)(param_1 + 0x42) - lVar43 >> 3) * 0x4fa4fa4fa4fa4fa5)
                  ;
                  puVar26 = (uint *)0x0;
                  do {
                    lVar30 = (long)puVar26 * 0x168;
                    if (uVar42 < 7) {
                      if (*(short *)(lVar43 + 0x72 + lVar30) == uStack_1e0._2_2_) {
                        lVar30 = lVar30 + lVar43;
                        if (*(short *)(lVar30 + 0x70) == 2) {
                          if (*(int *)(lVar30 + 0x74) == uStack_1e0._4_4_) {
LAB_08b2101f:
                            bVar41 = (*(byte *)(auStack_428._0_8_ + 0x48) & 1) == 0;
                            lVar30 = *(long *)(auStack_428._0_8_ + 0x58);
                            if (bVar41) {
                              lVar30 = auStack_428._0_8_ + 0x49;
                            }
                            uVar25 = (ulong)(*(byte *)(auStack_428._0_8_ + 0x48) >> 1);
                            if (!bVar41) {
                              uVar25 = *(ulong *)(auStack_428._0_8_ + 0x50);
                            }
                            if (uVar25 != 0) {
                              uVar31 = 0;
                              do {
                                if (*(char *)(lVar30 + uVar31) != '.' &&
                                    9 < (byte)(*(char *)(lVar30 + uVar31) - 0x30U))
                                goto LAB_08b20fb0;
                                uVar31 = uVar31 + 1;
                              } while (uVar25 != uVar31);
                            }
                            if (uVar42 < 10) {
LAB_08b21418:
                              uVar19 = func_0x0417cc60();
                              puVar16 = puStack_408;
                              lVar43 = *(long *)puStack_408;
                              lVar30 = (long)puVar26 * 0x168;
                              *(undefined8 *)(lVar43 + 0xf8 + lVar30) = uVar19;
                              pbVar29 = (byte *)(lVar43 + lVar30);
                              pbVar33 = (byte *)(auStack_428._0_8_ + 0x18);
                              if (pbVar29 != pbVar33) {
                                bVar10 = *pbVar33;
                                if ((*pbVar29 & 1) == 0) {
                                  if ((bVar10 & 1) == 0) {
                                    *(undefined8 *)(pbVar29 + 0x10) =
                                         *(undefined8 *)(auStack_428._0_8_ + 0x28);
                                    uVar19 = *(undefined8 *)(auStack_428._0_8_ + 0x20);
                                    *(undefined8 *)pbVar29 = *(undefined8 *)pbVar33;
                                    *(undefined8 *)(pbVar29 + 8) = uVar19;
                                  }
                                  else {
                                    func_0x04885070(pbVar29,*(undefined8 *)
                                                             (auStack_428._0_8_ + 0x28),
                                                    *(undefined8 *)(auStack_428._0_8_ + 0x20));
                                  }
                                }
                                else {
                                  bVar40 = (bVar10 & 1) != 0;
                                  lVar43 = auStack_428._0_8_ + 0x19;
                                  if (bVar40) {
                                    lVar43 = *(long *)(auStack_428._0_8_ + 0x28);
                                  }
                                  uVar42 = (ulong)(bVar10 >> 1);
                                  if (bVar40) {
                                    uVar42 = *(ulong *)(auStack_428._0_8_ + 0x20);
                                  }
                                  func_0x04885120(pbVar29,lVar43,uVar42);
                                }
                              }
                              lVar43 = *(long *)puVar16;
                              *(int *)(lVar43 + 0x34 + lVar30) = (int)uStack_208;
                              pbVar33 = (byte *)(auStack_428._0_8_ + 0x48);
                              lVar43 = lVar43 + lVar30;
                              pbVar29 = (byte *)(lVar43 + 0x38);
                              if (pbVar29 != pbVar33) {
                                bVar10 = *pbVar33;
                                if ((*pbVar29 & 1) == 0) {
                                  if ((bVar10 & 1) == 0) {
                                    *(undefined8 *)(lVar43 + 0x48) =
                                         *(undefined8 *)(auStack_428._0_8_ + 0x58);
                                    uVar19 = *(undefined8 *)(auStack_428._0_8_ + 0x50);
                                    *(undefined8 *)pbVar29 = *(undefined8 *)pbVar33;
                                    *(undefined8 *)(lVar43 + 0x40) = uVar19;
                                  }
                                  else {
                                    func_0x04885070(pbVar29,*(undefined8 *)
                                                             (auStack_428._0_8_ + 0x58),
                                                    *(undefined8 *)(auStack_428._0_8_ + 0x50));
                                  }
                                }
                                else {
                                  bVar40 = (bVar10 & 1) != 0;
                                  lVar43 = auStack_428._0_8_ + 0x49;
                                  if (bVar40) {
                                    lVar43 = *(long *)(auStack_428._0_8_ + 0x58);
                                  }
                                  uVar42 = (ulong)(bVar10 >> 1);
                                  if (bVar40) {
                                    uVar42 = *(ulong *)(auStack_428._0_8_ + 0x50);
                                  }
                                  func_0x04885120(pbVar29,lVar43,uVar42);
                                }
                              }
                              if ((ulong)(((long)stack0xfffffffffffffbe0 - auStack_428._0_8_ >> 3) *
                                         -0x5555555555555555) < 5) {
                                lVar43 = *(long *)puVar16;
                                *(undefined4 *)(lVar43 + 0x50 + lVar30) = 0xffffffff;
LAB_08b21eff:
                                *(undefined4 *)(lVar43 + 0x54 + lVar30) = 0xffffffff;
                                pbVar33 = &UNK_01e79d90;
                              }
                              else {
                                if ((*(byte *)(auStack_428._0_8_ + 0x60) & 1) == 0) {
                                  lVar43 = auStack_428._0_8_ + 0x61;
                                }
                                else {
                                  lVar43 = *(long *)(auStack_428._0_8_ + 0x70);
                                }
                                uVar13 = func_0x0eee3110(lVar43,0,10);
                                lVar43 = *(long *)puVar16;
                                *(undefined4 *)(lVar43 + 0x50 + lVar30) = uVar13;
                                if ((ulong)(((long)stack0xfffffffffffffbe0 - auStack_428._0_8_ >> 3)
                                           * -0x5555555555555555) < 6) goto LAB_08b21eff;
                                if ((*(byte *)(auStack_428._0_8_ + 0x78) & 1) == 0) {
                                  lVar43 = auStack_428._0_8_ + 0x79;
                                }
                                else {
                                  lVar43 = *(long *)(auStack_428._0_8_ + 0x88);
                                }
                                uVar13 = func_0x0eee3110(lVar43,0,10);
                                lVar43 = *(long *)puVar16;
                                pbVar33 = (byte *)(auStack_428._0_8_ + 0xa8);
                                *(undefined4 *)(lVar43 + 0x54 + lVar30) = uVar13;
                                if ((ulong)(((long)stack0xfffffffffffffbe0 - auStack_428._0_8_) /
                                           0x18) < 8) {
                                  pbVar33 = &UNK_01e79d90;
                                }
                              }
                              lVar43 = lVar43 + lVar30;
                              pbVar29 = (byte *)(lVar43 + 0x18);
                              if (pbVar29 != pbVar33) {
                                bVar10 = *pbVar33;
                                if ((*pbVar29 & 1) == 0) {
                                  if ((bVar10 & 1) == 0) {
                                    *(undefined8 *)(lVar43 + 0x28) = *(undefined8 *)(pbVar33 + 0x10)
                                    ;
                                    uVar19 = *(undefined8 *)(pbVar33 + 8);
                                    *(undefined8 *)pbVar29 = *(undefined8 *)pbVar33;
                                    *(undefined8 *)(lVar43 + 0x20) = uVar19;
                                  }
                                  else {
                                    func_0x04885070(pbVar29,*(undefined8 *)(pbVar33 + 0x10),
                                                    *(undefined8 *)(pbVar33 + 8));
                                  }
                                }
                                else {
                                  bVar40 = (bVar10 & 1) != 0;
                                  pbVar27 = pbVar33 + 1;
                                  if (bVar40) {
                                    pbVar27 = *(byte **)(pbVar33 + 0x10);
                                  }
                                  uVar42 = (ulong)(bVar10 >> 1);
                                  if (bVar40) {
                                    uVar42 = *(ulong *)(pbVar33 + 8);
                                  }
                                  func_0x04885120(pbVar29,pbVar27,uVar42);
                                }
                              }
                              if ((ulong)(((long)stack0xfffffffffffffbe0 - auStack_428._0_8_ >> 3) *
                                         -0x5555555555555555) < 9) {
                                puVar16 = *(uint **)puVar16;
                                puVar16[(long)puVar26 * 0x5a + 0xc] = 0xffffffff;
LAB_08b22042:
                                *(byte *)(puVar16 + (long)puVar26 * 0x5a + 0x52) = 0;
LAB_08b2204b:
                                *(byte *)((long)puVar16 + lVar30 + 0x14a) = 1;
                                bVar40 = true;
                              }
                              else {
                                uVar14 = func_0x0c97c800(auStack_428._0_8_ + 0xc0);
                                puVar36 = puStack_408;
                                puVar16 = *(uint **)puVar16;
                                puVar16[(long)puVar26 * 0x5a + 0xc] = uVar14;
                                if ((ulong)(((long)stack0xfffffffffffffbe0 - auStack_428._0_8_ >> 3)
                                           * -0x5555555555555555) < 0xd) goto LAB_08b22042;
                                if ((*(byte *)(auStack_428._0_8_ + 0x120) & 1) == 0) {
                                  lVar43 = auStack_428._0_8_ + 0x121;
                                }
                                else {
                                  lVar43 = *(long *)(auStack_428._0_8_ + 0x130);
                                }
                                iVar12 = func_0x0eee3110(lVar43,0,10);
                                puVar17 = puStack_408;
                                puVar16 = *(uint **)puVar36;
                                *(bool *)(puVar16 + (long)puVar26 * 0x5a + 0x52) = iVar12 != 0;
                                if ((ulong)(((long)stack0xfffffffffffffbe0 - auStack_428._0_8_ >> 3)
                                           * -0x5555555555555555) < 0xe) goto LAB_08b2204b;
                                if ((*(byte *)(auStack_428._0_8_ + 0x138) & 1) == 0) {
                                  lVar43 = auStack_428._0_8_ + 0x139;
                                }
                                else {
                                  lVar43 = *(long *)(auStack_428._0_8_ + 0x148);
                                }
                                iVar12 = func_0x0eee3110(lVar43,0,10);
                                puVar36 = puStack_408;
                                puVar16 = *(uint **)puVar17;
                                *(bool *)((long)puVar16 + lVar30 + 0x14a) = iVar12 != 0;
                                bVar40 = true;
                                if (0xe < (ulong)(((long)stack0xfffffffffffffbe0 - auStack_428._0_8_
                                                  >> 3) * -0x5555555555555555)) {
                                  if ((*(byte *)(auStack_428._0_8_ + 0x150) & 1) == 0) {
                                    lVar43 = auStack_428._0_8_ + 0x151;
                                  }
                                  else {
                                    lVar43 = *(long *)(auStack_428._0_8_ + 0x160);
                                  }
                                  iVar12 = func_0x0eee3110(lVar43,0,10);
                                  bVar40 = iVar12 != 0;
                                  puVar16 = *(uint **)puVar36;
                                }
                              }
                              *(bool *)((long)puVar16 + lVar30 + 0x14b) = bVar40;
                              if (((short)puVar16[(long)puVar26 * 0x5a + 0x1c] == 10) &&
                                 ((short)uStack_1e0 == 2)) {
                                *(undefined8 *)(puVar16 + (long)puVar26 * 0x5a + 0x38) = uStack_170;
                                *(undefined8 *)(puVar16 + (long)puVar26 * 0x5a + 0x38 + 2) =
                                     uStack_168;
                                *(undefined8 *)(puVar16 + (long)puVar26 * 0x5a + 0x34) = uStack_180;
                                *(undefined8 *)(puVar16 + (long)puVar26 * 0x5a + 0x34 + 2) =
                                     uStack_178;
                                *(undefined8 *)(puVar16 + (long)puVar26 * 0x5a + 0x30) = uStack_190;
                                *(undefined8 *)(puVar16 + (long)puVar26 * 0x5a + 0x30 + 2) =
                                     uStack_188;
                                *(undefined8 *)(puVar16 + (long)puVar26 * 0x5a + 0x2c) = uStack_1a0;
                                *(undefined8 *)(puVar16 + (long)puVar26 * 0x5a + 0x2c + 2) =
                                     uStack_198;
                                *(ulong *)(puVar16 + (long)puVar26 * 0x5a + 0x28) =
                                     CONCAT44(uStack_1ac,uStack_1b0);
                                *(ulong *)(puVar16 + (long)puVar26 * 0x5a + 0x28 + 2) =
                                     CONCAT44(uStack_1a4,uStack_1a8);
                                *(ulong *)(puVar16 + (long)puVar26 * 0x5a + 0x24) =
                                     CONCAT44(uStack_1bc,uStack_1c0);
                                *(ulong *)(puVar16 + (long)puVar26 * 0x5a + 0x24 + 2) =
                                     CONCAT44(uStack_1b4,uStack_1b8);
                                *(long *)(puVar16 + (long)puVar26 * 0x5a + 0x20) = uStack_1d0;
                                *(undefined8 *)(puVar16 + (long)puVar26 * 0x5a + 0x20 + 2) =
                                     uStack_1c8;
                                *(ulong *)(puVar16 + (long)puVar26 * 0x5a + 0x1c) = uStack_1e0;
                                *(ulong *)((long)(puVar16 + (long)puVar26 * 0x5a + 0x1c) + 8) =
                                     uStack_1d8;
                                puVar16[(long)puVar26 * 0x5a + 0x3c] = uStack_160;
                                puVar16 = *(uint **)puStack_408;
                              }
                              func_0x0d6e3e90(auStack_378,&uStack_1e0);
                              func_0x08b25e50(param_1,puVar16 + (long)puVar26 * 0x5a + 0x16,
                                              auStack_378);
                              if ((auStack_378[0] & 1) != 0) {
                                func_0x0412a280(CONCAT17(uStack_361,
                                                         CONCAT43(uStack_365,
                                                                  CONCAT21(uStack_367,uStack_368))),
                                                CONCAT62(uStack_376,
                                                         CONCAT11(auStack_378[1],auStack_378[0])) &
                                                0xfffffffffffffffe);
                              }
                              uVar13 = 0;
                              if ((short)uStack_1e0 == 10) {
                                uVar13 = 6;
                              }
                              if ((short)uStack_1e0 == 2) {
                                uVar13 = 4;
                              }
                              func_0x08b25f00(param_1,*(long *)(param_1 + 0x40) + 0x100 + lVar30,
                                              puStack_410,uStack_1f0,uVar13);
                              if (puStack_410 == _DAT_0f722bd8) {
                                uStack_368 = (undefined1)_UNK_0147162a;
                                uStack_367 = (undefined2)((uint7)_UNK_0147162a >> 8);
                                uStack_365 = (uint)((uint7)_UNK_0147162a >> 0x18);
                                auStack_378[0] = (byte)_DAT_0147161a;
                                auStack_378[1] = (undefined1)((ulong)_DAT_0147161a >> 8);
                                uStack_376 = (undefined6)((ulong)_DAT_0147161a >> 0x10);
                                cStack_370 = (char)_UNK_01471622;
                                uStack_36f = (undefined6)((uint7)_UNK_01471622 >> 8);
                                uStack_369 = DAT_01471629;
                              }
                              else {
                                func_0x0eee3930(auStack_378,&UNK_0135842f);
                              }
                              uVar42 = func_0x0eee2e90(auStack_378);
                              puVar26 = puVar16;
                              if (0xfffffffffffffff7 < uVar42) goto LAB_08b23884;
                              if (uVar42 < 0x17) {
                                uStack_3f8 = CONCAT31(uStack_3f8._1_3_,(char)uVar42 * '\x02');
                                lVar30 = (long)&uStack_3f8 + 1;
                                if (uVar42 != 0) goto LAB_08b2226f;
                              }
                              else {
                                lVar43 = (uVar42 | 7) + 1;
                                if ((uVar42 | 7) == 0x17) {
                                  lVar43 = 0x1a;
                                }
                                lVar30 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar43);
                                if (lVar30 == 0) {
                                  func_0x0eec74c0(lVar43,0);
                                }
                                uStack_3e8 = (undefined7)lVar30;
                                uStack_3e1 = (undefined1)((ulong)lVar30 >> 0x38);
                                uStack_3f8 = (uint)lVar43 | 1;
                                uStack_3f4 = (undefined4)((ulong)lVar43 >> 0x20);
                                uStack_3f0 = (uint)uVar42;
                                bStack_3ec = (byte)(uVar42 >> 0x20);
                                uStack_3eb = (undefined2)(uVar42 >> 0x28);
                                uStack_3e9 = (undefined1)(uVar42 >> 0x38);
LAB_08b2226f:
                                func_0x0eee2f00(lVar30,auStack_378,uVar42);
                              }
                              *(undefined1 *)(lVar30 + uVar42) = 0;
                              func_0x0d6e3e90(auStack_378,&uStack_1e0);
                              uStack_398 = auStack_378;
                              lVar43 = func_0x04884a60(puStack_200,auStack_378,&UNK_01563a4f,
                                                       &uStack_398,&puStack_1e8);
                              if ((*(byte *)(lVar43 + 0x28) & 1) != 0) {
                                func_0x0412a280(*(undefined8 *)(lVar43 + 0x38),
                                                *(ulong *)(lVar43 + 0x28) & 0xfffffffffffffffe);
                              }
                              *(ulong *)(lVar43 + 0x38) = CONCAT17(uStack_3e1,uStack_3e8);
                              *(ulong *)(lVar43 + 0x28) = CONCAT44(uStack_3f4,uStack_3f8);
                              *(ulong *)(lVar43 + 0x30) =
                                   CONCAT17(uStack_3e9,
                                            CONCAT25(uStack_3eb,CONCAT14(bStack_3ec,uStack_3f0)));
                              if ((auStack_378[0] & 1) != 0) {
                                func_0x0412a280(CONCAT17(uStack_361,
                                                         CONCAT43(uStack_365,
                                                                  CONCAT21(uStack_367,uStack_368))),
                                                CONCAT62(uStack_376,
                                                         CONCAT11(auStack_378[1],auStack_378[0])) &
                                                0xfffffffffffffffe);
                              }
                              func_0x0412d790(puStack_3c8);
                              goto LAB_08b22320;
                            }
                            bVar10 = *(byte *)(auStack_428._0_8_ + 0xd8);
                            if ((bVar10 & 1) == 0) {
                              if (bVar10 >> 1 == 1) goto LAB_08b210b5;
                            }
                            else if (*(long *)(auStack_428._0_8_ + 0xe0) == 1) {
LAB_08b210b5:
                              pcVar37 = (char *)(auStack_428._0_8_ + 0xd9);
                              if ((bVar10 & 1) != 0) {
                                pcVar37 = *(char **)(auStack_428._0_8_ + 0xe8);
                              }
                              if (*pcVar37 == '1') goto LAB_08b21418;
                            }
                          }
                        }
                        else if (*(short *)(lVar30 + 0x70) == 10) {
                          auVar4 = *(undefined1 (*) [16])(lVar30 + 0x78);
                          auVar44[0] = -((char)uStack_1d8 == auVar4[0]);
                          auVar44[1] = -(uStack_1d8._1_1_ == auVar4[1]);
                          auVar44[2] = -(uStack_1d8._2_1_ == auVar4[2]);
                          auVar44[3] = -(uStack_1d8._3_1_ == auVar4[3]);
                          auVar44[4] = -(uStack_1d8._4_1_ == auVar4[4]);
                          auVar44[5] = -(uStack_1d8._5_1_ == auVar4[5]);
                          auVar44[6] = -(uStack_1d8._6_1_ == auVar4[6]);
                          auVar44[7] = -(uStack_1d8._7_1_ == auVar4[7]);
                          auVar44[8] = -((char)uStack_1d0 == auVar4[8]);
                          auVar44[9] = -(uStack_1d0._1_1_ == auVar4[9]);
                          auVar44[10] = -(uStack_1d0._2_1_ == auVar4[10]);
                          auVar44[0xb] = -(uStack_1d0._3_1_ == auVar4[0xb]);
                          auVar44[0xc] = -(uStack_1d0._4_1_ == auVar4[0xc]);
                          auVar44[0xd] = -(uStack_1d0._5_1_ == auVar4[0xd]);
                          auVar44[0xe] = -(uStack_1d0._6_1_ == auVar4[0xe]);
                          auVar44[0xf] = -(uStack_1d0._7_1_ == auVar4[0xf]);
                          if ((ushort)((ushort)(SUB161(auVar44 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(auVar44[0xf] >> 7) << 0xf) == 0xffff)
                          goto LAB_08b2101f;
                        }
                      }
                    }
                    else if (puStack_410 == *(uint **)(lVar43 + 0x108 + lVar30)) goto LAB_08b2101f;
LAB_08b20fb0:
                    puVar26 = (uint *)(ulong)((int)puVar26 + 1);
                  } while (puVar26 <= puVar16 && (long)puVar16 - (long)puVar26 != 0);
                }
                func_0x0412d790(puStack_3c8);
              }
              bVar41 = ((byte)*(uint *)(auStack_428._0_8_ + 0x48) & 1) != 0;
              pbVar33 = (byte *)(auStack_428._0_8_ + 0x49);
              if (bVar41) {
                pbVar33 = *(byte **)(auStack_428._0_8_ + 0x58);
              }
              uVar42 = (ulong)(byte)((byte)*(uint *)(auStack_428._0_8_ + 0x48) >> 1);
              if (bVar41) {
                uVar42 = *(ulong *)(auStack_428._0_8_ + 0x50);
              }
              if (uVar42 != 0) {
                uVar25 = 0;
                do {
                  if (pbVar33[uVar25] != 0x2e && 9 < (byte)(pbVar33[uVar25] - 0x30)) {
                    puVar36 = (uint *)0xffffffff;
                    goto LAB_08b22326;
                  }
                  uVar25 = uVar25 + 1;
                } while (uVar42 != uVar25);
              }
              puVar26 = stack0xfffffffffffffbe0;
              if ((ulong)(((long)stack0xfffffffffffffbe0 - auStack_428._0_8_ >> 3) *
                         -0x5555555555555555) < 10) {
                puVar36 = (uint *)0x1;
                if (!bVar40) goto LAB_08b22326;
LAB_08b211df:
                auStack_358 = (undefined1  [16])0x0;
                uStack_368 = 0;
                uStack_367 = 0;
                uStack_365 = 0;
                uStack_361 = 0;
                bStack_360 = 0;
                uStack_35f = 0;
                auStack_378[0] = 0;
                auStack_378[1] = 0;
                uStack_376 = 0;
                cStack_370 = '\0';
                uStack_36f = 0;
                uStack_369 = 0;
                uStack_348 = 0xffffffffffffffff;
                auStack_340 = (undefined1  [16])0x0;
                uStack_330 = 0;
                uStack_328 = 0xffffffffffffffff;
                auStack_2a0 = (undefined1  [16])0x0;
                auStack_2b0 = (undefined1  [16])0x0;
                auStack_2c0 = (undefined1  [16])0x0;
                auStack_2d0 = (undefined1  [16])0x0;
                auStack_2e0 = (undefined1  [16])0x0;
                auStack_2f0 = (undefined1  [16])0x0;
                auStack_300 = (undefined1  [16])0x0;
                auStack_320 = (undefined1  [16])0x0;
                uStack_290 = 0;
                auStack_310._0_10_ = (unkuint10)2 << 0x40;
                auStack_310._10_6_ = 0;
                uStack_288 = 0xffff0000;
                uStack_280 = 0;
                uStack_278 = 0xffffffffffffffff;
                puStack_270 = _DAT_0f722bd8;
                uStack_268 = _DAT_0f722be0;
                uStack_260 = 0;
                uStack_248 = 0;
                uStack_240 = 0;
                uStack_23c = 8;
                uStack_238 = func_0x0417cc60();
                uStack_230 = 0x10000;
                auStack_228 = (undefined1  [16])0x0;
                uStack_218 = 0;
                uStack_290 = uStack_168;
                auStack_2e0._8_4_ = uStack_1b0;
                auStack_2e0._12_4_ = uStack_1ac;
                auStack_2f0._8_4_ = uStack_1c0;
                auStack_2f0._12_4_ = uStack_1bc;
                auStack_2e0._4_4_ = uStack_1b4;
                auStack_2e0._0_4_ = uStack_1b8;
                auStack_2f0._0_8_ = uStack_1c8;
                auStack_310._8_8_ = uStack_1e0;
                auStack_300._8_8_ = uStack_1d0;
                auStack_300._0_8_ = uStack_1d8;
                uStack_288 = uStack_160;
                uStack_280 = func_0x0417cc60();
                pbVar33 = (byte *)(auStack_428._0_8_ + 0x18);
                if (auStack_378 != pbVar33) {
                  bVar10 = *pbVar33;
                  if ((auStack_378[0] & 1) == 0) {
                    if ((bVar10 & 1) == 0) {
                      uVar19 = *(undefined8 *)(auStack_428._0_8_ + 0x28);
                      uStack_368 = (undefined1)uVar19;
                      uStack_367 = (undefined2)((ulong)uVar19 >> 8);
                      uStack_365 = (uint)((ulong)uVar19 >> 0x18);
                      uStack_361 = (undefined1)((ulong)uVar19 >> 0x38);
                      uVar19 = *(undefined8 *)pbVar33;
                      uVar8 = *(undefined8 *)(auStack_428._0_8_ + 0x20);
                      auStack_378[0] = (byte)uVar19;
                      auStack_378[1] = (undefined1)((ulong)uVar19 >> 8);
                      uStack_376 = (undefined6)((ulong)uVar19 >> 0x10);
                      cStack_370 = (char)uVar8;
                      uStack_36f = (undefined6)((ulong)uVar8 >> 8);
                      uStack_369 = (undefined1)((ulong)uVar8 >> 0x38);
                    }
                    else {
                      func_0x04885070(auStack_378,*(undefined8 *)(auStack_428._0_8_ + 0x28),
                                      *(undefined8 *)(auStack_428._0_8_ + 0x20));
                    }
                  }
                  else {
                    bVar40 = (bVar10 & 1) != 0;
                    lVar43 = auStack_428._0_8_ + 0x19;
                    if (bVar40) {
                      lVar43 = *(long *)(auStack_428._0_8_ + 0x28);
                    }
                    uVar42 = (ulong)(bVar10 >> 1);
                    if (bVar40) {
                      uVar42 = *(ulong *)(auStack_428._0_8_ + 0x20);
                    }
                    func_0x04885120(auStack_378,lVar43,uVar42);
                  }
                }
                uStack_348 = CONCAT44((int)uStack_208,(undefined4)uStack_348);
                pauVar1 = (undefined1 (*) [16])(auStack_428._0_8_ + 0x48);
                if (&auStack_340 != pauVar1) {
                  bVar10 = (*pauVar1)[0];
                  if ((auStack_340[0] & 1) == 0) {
                    if ((bVar10 & 1) == 0) {
                      uStack_330 = *(undefined8 *)(auStack_428._0_8_ + 0x58);
                      auStack_340 = *pauVar1;
                    }
                    else {
                      func_0x04885070(&auStack_340,*(undefined8 *)(auStack_428._0_8_ + 0x58),
                                      *(undefined8 *)(auStack_428._0_8_ + 0x50));
                    }
                  }
                  else {
                    bVar40 = (bVar10 & 1) != 0;
                    lVar43 = auStack_428._0_8_ + 0x49;
                    if (bVar40) {
                      lVar43 = *(long *)(auStack_428._0_8_ + 0x58);
                    }
                    uVar42 = (ulong)(bVar10 >> 1);
                    if (bVar40) {
                      uVar42 = *(ulong *)(auStack_428._0_8_ + 0x50);
                    }
                    func_0x04885120(&auStack_340,lVar43,uVar42);
                  }
                }
                if ((ulong)(((long)stack0xfffffffffffffbe0 - auStack_428._0_8_ >> 3) *
                           -0x5555555555555555) < 5) {
                  uStack_328 = 0xffffffff;
LAB_08b215b7:
                  uStack_328 = CONCAT44(0xffffffff,(undefined4)uStack_328);
                  puStack_270 = puStack_410;
                  uStack_268 = puStack_400._0_2_;
                  pbVar33 = &UNK_01e79d90;
LAB_08b215de:
                  bVar10 = *pbVar33;
                  puStack_410 = puStack_270;
                  if ((bStack_360 & 1) == 0) {
                    if ((bVar10 & 1) == 0) {
                      auStack_358 = *(undefined1 (*) [16])(pbVar33 + 8);
                      bStack_360 = (byte)*(undefined8 *)pbVar33;
                      uStack_35f = (undefined7)((ulong)*(undefined8 *)pbVar33 >> 8);
                    }
                    else {
                      func_0x04885070(&bStack_360,*(undefined8 *)(pbVar33 + 0x10),
                                      *(undefined8 *)(pbVar33 + 8));
                    }
                  }
                  else {
                    bVar40 = (bVar10 & 1) != 0;
                    pbVar29 = pbVar33 + 1;
                    if (bVar40) {
                      pbVar29 = *(byte **)(pbVar33 + 0x10);
                    }
                    uVar42 = (ulong)(bVar10 >> 1);
                    if (bVar40) {
                      uVar42 = *(ulong *)(pbVar33 + 8);
                    }
                    func_0x04885120(&bStack_360,pbVar29,uVar42);
                  }
                }
                else {
                  if ((*(byte *)(auStack_428._0_8_ + 0x60) & 1) == 0) {
                    lVar43 = auStack_428._0_8_ + 0x61;
                  }
                  else {
                    lVar43 = *(long *)(auStack_428._0_8_ + 0x70);
                  }
                  uVar13 = func_0x0eee3110(lVar43,0,10);
                  uStack_328 = CONCAT44(uStack_328._4_4_,uVar13);
                  if ((ulong)(((long)stack0xfffffffffffffbe0 - auStack_428._0_8_ >> 3) *
                             -0x5555555555555555) < 6) goto LAB_08b215b7;
                  if ((*(byte *)(auStack_428._0_8_ + 0x78) & 1) == 0) {
                    lVar43 = auStack_428._0_8_ + 0x79;
                  }
                  else {
                    lVar43 = *(long *)(auStack_428._0_8_ + 0x88);
                  }
                  uVar13 = func_0x0eee3110(lVar43,0,10);
                  uStack_328 = CONCAT44(uVar13,(undefined4)uStack_328);
                  puStack_270 = puStack_410;
                  uStack_268 = puStack_400._0_2_;
                  pbVar33 = &UNK_01e79d90;
                  if (((ulong)(((long)stack0xfffffffffffffbe0 - auStack_428._0_8_ >> 3) *
                              -0x5555555555555555) < 8) ||
                     (pbVar33 = (byte *)(auStack_428._0_8_ + 0xa8), &bStack_360 != pbVar33))
                  goto LAB_08b215de;
                }
                if ((ulong)(((long)stack0xfffffffffffffbe0 - auStack_428._0_8_ >> 3) *
                           -0x5555555555555555) < 9) {
                  uStack_348 = CONCAT44(uStack_348._4_4_,0xffffffff);
LAB_08b216c4:
                  uStack_230 = uStack_230 & 0xffffff00;
LAB_08b216cc:
                  uStack_230._0_3_ = CONCAT12(1,(undefined2)uStack_230);
                  uStack_230 = (uint)(uint3)uStack_230;
                  bVar40 = false;
                }
                else {
                  uVar13 = func_0x0c97c800(auStack_428._0_8_ + 0xc0);
                  uStack_348 = CONCAT44(uStack_348._4_4_,uVar13);
                  if ((ulong)(((long)stack0xfffffffffffffbe0 - auStack_428._0_8_ >> 3) *
                             -0x5555555555555555) < 0xd) goto LAB_08b216c4;
                  if ((*(byte *)(auStack_428._0_8_ + 0x120) & 1) == 0) {
                    lVar43 = auStack_428._0_8_ + 0x121;
                  }
                  else {
                    lVar43 = *(long *)(auStack_428._0_8_ + 0x130);
                  }
                  iVar12 = func_0x0eee3110(lVar43,0,10);
                  uStack_230 = CONCAT31(uStack_230._1_3_,iVar12 != 0);
                  if ((ulong)(((long)stack0xfffffffffffffbe0 - auStack_428._0_8_ >> 3) *
                             -0x5555555555555555) < 0xe) goto LAB_08b216cc;
                  if ((*(byte *)(auStack_428._0_8_ + 0x138) & 1) == 0) {
                    lVar43 = auStack_428._0_8_ + 0x139;
                  }
                  else {
                    lVar43 = *(long *)(auStack_428._0_8_ + 0x148);
                  }
                  bVar40 = false;
                  iVar12 = func_0x0eee3110(lVar43,0,10);
                  uStack_230._0_3_ = CONCAT12(iVar12 != 0,(undefined2)uStack_230);
                  if (0xe < (ulong)(((long)stack0xfffffffffffffbe0 - auStack_428._0_8_ >> 3) *
                                   -0x5555555555555555)) {
                    if ((*(byte *)(auStack_428._0_8_ + 0x150) & 1) == 0) {
                      lVar43 = auStack_428._0_8_ + 0x151;
                    }
                    else {
                      lVar43 = *(long *)(auStack_428._0_8_ + 0x160);
                    }
                    iVar12 = func_0x0eee3110(lVar43,0,10);
                    bVar40 = iVar12 != 0;
                  }
                }
                uStack_230 = CONCAT13(bVar40,(uint3)uStack_230);
                func_0x0d6e3e90(&uStack_3f8,&uStack_1e0);
                func_0x08b25e50(param_1,auStack_320,&uStack_3f8);
                if ((uStack_3f8 & 1) != 0) {
                  func_0x0412a280(CONCAT17(uStack_3e1,uStack_3e8),
                                  CONCAT44(uStack_3f4,uStack_3f8) & 0xfffffffffffffffe);
                }
                uVar13 = 0;
                if ((short)uStack_1e0 == 10) {
                  uVar13 = 6;
                }
                if ((short)uStack_1e0 == 2) {
                  uVar13 = 4;
                }
                cVar11 = func_0x08b25f00(param_1,&uStack_278,puStack_410,uStack_1f0,uVar13);
                if (cVar11 == '\0') {
                  uStack_278 = 0xffffffffffffffff;
                }
                if (puStack_410 == _DAT_0f722bd8) {
                  uStack_3e8 = _UNK_0147162a;
                  uStack_3f8 = (uint)_DAT_0147161a;
                  uStack_3f4 = (undefined4)((ulong)_DAT_0147161a >> 0x20);
                  uStack_3f0 = (uint)_UNK_01471622;
                  bStack_3ec = (byte)((uint7)_UNK_01471622 >> 0x20);
                  uStack_3eb = (undefined2)((uint7)_UNK_01471622 >> 0x28);
                  uStack_3e9 = DAT_01471629;
                }
                else {
                  func_0x0eee3930(&uStack_3f8,&UNK_0135842f);
                }
                puVar16 = puStack_408;
                uVar42 = func_0x0eee2e90(&uStack_3f8);
                puVar26 = puVar16;
                puVar36 = (uint *)auStack_320;
                if (0xfffffffffffffff7 < uVar42) goto LAB_08b2387a;
                if (uVar42 < 0x17) {
                  uStack_398 = (undefined1 *)CONCAT71(uStack_398._1_7_,(char)uVar42 * '\x02');
                  lVar43 = (long)&uStack_398 + 1;
                  if (uVar42 != 0) goto LAB_08b2184f;
                }
                else {
                  uVar25 = (uVar42 | 7) + 1;
                  if ((uVar42 | 7) == 0x17) {
                    uVar25 = 0x1a;
                  }
                  lVar43 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar25);
                  if (lVar43 == 0) {
                    func_0x0eec74c0(uVar25,0);
                  }
                  uStack_398 = (undefined1 *)(uVar25 | 1);
                  uStack_390 = uVar42;
                  lStack_388 = lVar43;
LAB_08b2184f:
                  func_0x0eee2f00(lVar43,&uStack_3f8,uVar42);
                }
                *(undefined1 *)(lVar43 + uVar42) = 0;
                func_0x0d6e3e90(&uStack_3f8,&uStack_1e0);
                puStack_1e8 = &uStack_3f8;
                lVar43 = func_0x04884a60(puStack_200,&uStack_3f8,&UNK_01563a4f,&puStack_1e8,
                                         &uStack_3b1);
                if ((*(byte *)(lVar43 + 0x28) & 1) != 0) {
                  func_0x0412a280(*(undefined8 *)(lVar43 + 0x38),
                                  *(ulong *)(lVar43 + 0x28) & 0xfffffffffffffffe);
                }
                *(long *)(lVar43 + 0x38) = lStack_388;
                *(undefined1 **)(lVar43 + 0x28) = uStack_398;
                *(ulong *)(lVar43 + 0x30) = uStack_390;
                if ((uStack_3f8 & 1) != 0) {
                  func_0x0412a280(CONCAT17(uStack_3e1,uStack_3e8),
                                  CONCAT44(uStack_3f4,uStack_3f8) & 0xfffffffffffffffe);
                }
                func_0x0412d770(puStack_3c8);
                uVar42 = *(ulong *)(param_1 + 0x42);
                if (uVar42 < *(ulong *)(param_1 + 0x44)) {
                  func_0x08b33ab0(uVar42,auStack_378);
                  lVar24 = uVar42 + 0x168;
                  *(long *)(param_1 + 0x42) = lVar24;
                }
                else {
                  lVar43 = uVar42 - *(long *)puVar16;
                  puVar26 = (uint *)((lVar43 >> 3) * 0x4fa4fa4fa4fa4fa5 + 1);
                  if ((uint *)0xb60b60b60b60b6 < puVar26) goto LAB_08b2387f;
                  lVar30 = (long)(*(ulong *)(param_1 + 0x44) - *(long *)puVar16) >> 3;
                  puVar36 = (uint *)(lVar30 * -0x60b60b60b60b60b6);
                  if (puVar26 < puVar36) {
                    puVar26 = puVar36;
                  }
                  if (0x5b05b05b05b05a < (ulong)(lVar30 * 0x4fa4fa4fa4fa4fa5)) {
                    puVar26 = (uint *)0xb60b60b60b60b6;
                  }
                  puStack_3d8 = puVar16;
                  if (puVar26 == (uint *)0x0) {
                    lVar30 = 0;
                  }
                  else {
                    if ((uint *)0xb60b60b60b60b6 < puVar26) goto LAB_08b23889;
                    lVar30 = (**(code **)(_DAT_0f5463b0 + 0x10))
                                       (&DAT_0f5463b0,(long)puVar26 * 0x168);
                    if (lVar30 == 0) {
                      func_0x0eec74c0((long)puVar26 * 0x168,0);
                      lVar30 = 0;
                    }
                  }
                  uStack_3f8 = (uint)lVar30;
                  uStack_3f4 = (undefined4)((ulong)lVar30 >> 0x20);
                  lVar43 = lVar43 + lVar30;
                  uStack_3e8 = (undefined7)lVar43;
                  uStack_3e1 = (undefined1)((ulong)lVar43 >> 0x38);
                  uStack_3f0 = (uint)lVar43;
                  bStack_3ec = (byte)((ulong)lVar43 >> 0x20);
                  uStack_3eb = (undefined2)((ulong)lVar43 >> 0x28);
                  lStack_3e0 = (long)puVar26 * 0x168 + lVar30;
                  uStack_3e9 = uStack_3e1;
                  func_0x08b33ab0(lVar43,auStack_378);
                  lVar24 = CONCAT17(uStack_3e1,uStack_3e8) + 0x168;
                  lVar43 = *(long *)(param_1 + 0x40);
                  lVar30 = *(long *)(param_1 + 0x42);
                  puVar16 = (uint *)((lVar43 - lVar30) +
                                    CONCAT17(uStack_3e9,
                                             CONCAT25(uStack_3eb,CONCAT14(bStack_3ec,uStack_3f0))));
                  if (lVar43 != lVar30) {
                    lVar32 = 0;
                    do {
                      *(undefined8 *)((long)puVar16 + lVar32 + 0x10) =
                           *(undefined8 *)(lVar43 + 0x10 + lVar32);
                      uVar19 = ((undefined8 *)(lVar43 + lVar32))[1];
                      *(undefined8 *)((long)puVar16 + lVar32) = *(undefined8 *)(lVar43 + lVar32);
                      *(undefined8 *)((byte *)((long)puVar16 + lVar32) + 8) = uVar19;
                      *(undefined1 (*) [16])(lVar43 + lVar32) = (undefined1  [16])0x0;
                      *(undefined8 *)(lVar43 + 0x10 + lVar32) = 0;
                      *(undefined8 *)((long)puVar16 + lVar32 + 0x28) =
                           *(undefined8 *)(lVar43 + 0x28 + lVar32);
                      puVar20 = (undefined8 *)(lVar43 + 0x18 + lVar32);
                      uVar19 = puVar20[1];
                      pbVar33 = (byte *)((long)puVar16 + lVar32 + 0x18);
                      *(undefined8 *)pbVar33 = *puVar20;
                      *(undefined8 *)(pbVar33 + 8) = uVar19;
                      *(undefined1 (*) [16])(lVar43 + 0x18 + lVar32) = (undefined1  [16])0x0;
                      *(undefined8 *)(lVar43 + 0x28 + lVar32) = 0;
                      *(undefined8 *)((long)puVar16 + lVar32 + 0x30) =
                           *(undefined8 *)(lVar43 + 0x30 + lVar32);
                      *(undefined8 *)((long)puVar16 + lVar32 + 0x48) =
                           *(undefined8 *)(lVar43 + 0x48 + lVar32);
                      puVar20 = (undefined8 *)(lVar43 + 0x38 + lVar32);
                      uVar19 = puVar20[1];
                      pbVar33 = (byte *)((long)puVar16 + lVar32 + 0x38);
                      *(undefined8 *)pbVar33 = *puVar20;
                      *(undefined8 *)(pbVar33 + 8) = uVar19;
                      *(undefined1 (*) [16])(lVar43 + 0x38 + lVar32) = (undefined1  [16])0x0;
                      *(undefined8 *)(lVar43 + 0x48 + lVar32) = 0;
                      *(undefined8 *)((long)puVar16 + lVar32 + 0x50) =
                           *(undefined8 *)(lVar43 + 0x50 + lVar32);
                      *(undefined8 *)((long)puVar16 + lVar32 + 0x68) =
                           *(undefined8 *)(lVar43 + 0x68 + lVar32);
                      puVar20 = (undefined8 *)(lVar43 + 0x58 + lVar32);
                      uVar19 = puVar20[1];
                      pbVar33 = (byte *)((long)puVar16 + lVar32 + 0x58);
                      *(undefined8 *)pbVar33 = *puVar20;
                      *(undefined8 *)(pbVar33 + 8) = uVar19;
                      *(undefined1 (*) [16])(lVar43 + 0x58 + lVar32) = (undefined1  [16])0x0;
                      *(undefined8 *)(lVar43 + 0x68 + lVar32) = 0;
                      func_0x0eee2f00((byte *)((long)puVar16 + lVar32 + 0x70),lVar43 + lVar32 + 0x70
                                      ,0xdc);
                      *(undefined8 *)((long)puVar16 + lVar32 + 0x160) =
                           *(undefined8 *)(lVar43 + 0x160 + lVar32);
                      puVar20 = (undefined8 *)(lVar43 + 0x150 + lVar32);
                      uVar19 = puVar20[1];
                      pbVar33 = (byte *)((long)puVar16 + lVar32 + 0x150);
                      *(undefined8 *)pbVar33 = *puVar20;
                      *(undefined8 *)(pbVar33 + 8) = uVar19;
                      *(undefined1 (*) [16])(lVar43 + 0x150 + lVar32) = (undefined1  [16])0x0;
                      *(undefined8 *)(lVar43 + 0x160 + lVar32) = 0;
                      lVar3 = lVar43 + lVar32;
                      lVar32 = lVar32 + 0x168;
                    } while (lVar3 + 0x168 != lVar30);
                    do {
                      func_0x08b26390(lVar43);
                      lVar43 = lVar43 + 0x168;
                    } while (lVar43 != lVar30);
                    lVar43 = *(long *)puStack_408;
                  }
                  *(uint **)(param_1 + 0x40) = puVar16;
                  *(long *)(param_1 + 0x42) = lVar24;
                  lVar30 = *(long *)(param_1 + 0x44);
                  *(long *)(param_1 + 0x44) = lStack_3e0;
                  if (lVar43 != 0) {
                    func_0x0412a280(lVar43,lVar30 - lVar43);
                  }
                }
                *(long *)(param_1 + 0x42) = lVar24;
                func_0x0412d790(puStack_3c8);
                if ((auStack_228[0] & 1) == 0) {
                  if ((auStack_320[0] & 1) == 0) goto LAB_08b21bdc;
LAB_08b21c26:
                  func_0x0412a280(auStack_310._0_8_,auStack_320._0_8_ & 0xfffffffffffffffe);
                }
                else {
                  func_0x0412a280(uStack_218,auStack_228._0_8_ & 0xfffffffffffffffe);
                  if ((auStack_320[0] & 1) != 0) goto LAB_08b21c26;
LAB_08b21bdc:
                }
                if ((auStack_340[0] & 1) != 0) {
                  func_0x0412a280(uStack_330,auStack_340._0_8_ & 0xfffffffffffffffe);
                }
                if ((bStack_360 & 1) != 0) {
                  func_0x0412a280(auStack_358._8_8_,
                                  CONCAT71(uStack_35f,bStack_360) & 0xfffffffffffffffe);
                }
                if ((auStack_378[0] & 1) != 0) {
                  func_0x0412a280(CONCAT17(uStack_361,
                                           CONCAT43(uStack_365,CONCAT21(uStack_367,uStack_368))),
                                  CONCAT62(uStack_376,CONCAT11(auStack_378[1],auStack_378[0])) &
                                  0xfffffffffffffffe);
                }
LAB_08b22320:
                puVar36 = (uint *)0x1;
                puVar26 = puVar16;
LAB_08b22326:
                puVar16 = (uint *)auStack_428._0_8_;
                goto LAB_08b2232b;
              }
              bVar10 = (byte)*(uint *)(auStack_428._0_8_ + 0xd8);
              if ((bVar10 & 1) == 0) {
                puVar36 = (uint *)0xffffffff;
                if (bVar10 >> 1 == 1) goto LAB_08b211ba;
                goto LAB_08b22326;
              }
              puVar36 = (uint *)0xffffffff;
              if (*(long *)(auStack_428._0_8_ + 0xe0) != 1) goto LAB_08b22326;
LAB_08b211ba:
              if ((bVar10 & 1) == 0) {
                pbVar33 = (byte *)(auStack_428._0_8_ + 0xd9);
              }
              else {
                pbVar33 = *(byte **)(auStack_428._0_8_ + 0xe8);
              }
              if ((bool)(bVar40 & *pbVar33 == 0x31)) goto LAB_08b211df;
              puVar36 = (uint *)(ulong)((uint)(*pbVar33 == 0x31) * 2 - 1);
              puVar16 = (uint *)auStack_428._0_8_;
            }
            puVar17 = puVar16;
            for (puVar26 = register0x00000018; puVar16 != puVar26; puVar26 = puVar26 + -6) {
              if ((puVar26[-6] & 1) != 0) {
                func_0x0412a280(*(undefined8 *)(puVar26 + -2),
                                *(ulong *)(puVar26 + -6) & 0xfffffffffffffffe);
              }
              puVar17 = (uint *)auStack_428._0_8_;
            }
            stack0xfffffffffffffbe0 = puVar16;
            func_0x0412a280(puVar17,(long)puStack_418 - (long)puVar17);
          }
        }
LAB_08b20a16:
        puVar16 = puStack_3c0;
        if (*(long *)(param_1 + 0x70) != 0) {
          func_0x0d6e3e90(auStack_378,puStack_3c0);
          bVar10 = auStack_378[0];
          puVar26 = (uint *)(ulong)auStack_378[0];
          if ((auStack_378[0] & 1) == 0) {
            uVar42 = (ulong)(auStack_378[0] >> 1);
            uVar25 = (ulong)(byte)param_1[0x74];
            if (((byte)param_1[0x74] & 1) != 0) goto LAB_08b20a8c;
LAB_08b20a66:
            if (uVar42 != uVar25 >> 1) goto LAB_08b20a6f;
LAB_08b20a98:
            puVar18 = auStack_378 + 1;
            if ((auStack_378[0] & 1) != 0) {
              puVar18 = (undefined1 *)
                        CONCAT17(uStack_361,CONCAT43(uStack_365,CONCAT21(uStack_367,uStack_368)));
            }
            pbVar33 = pbStack_158;
            if ((uVar25 & 1) != 0) {
              pbVar33 = *(byte **)(param_1 + 0x78);
            }
            iVar12 = func_0x0eee3000(puVar18,pbVar33);
            bVar40 = iVar12 == 0;
          }
          else {
            uVar42 = CONCAT17(uStack_369,CONCAT61(uStack_36f,cStack_370));
            uVar25 = (ulong)(byte)param_1[0x74];
            if (((byte)param_1[0x74] & 1) == 0) goto LAB_08b20a66;
LAB_08b20a8c:
            if (uVar42 == *(ulong *)(param_1 + 0x76)) goto LAB_08b20a98;
LAB_08b20a6f:
            bVar40 = false;
          }
          if ((bVar10 & 1) != 0) {
            func_0x0412a280(CONCAT17(uStack_361,CONCAT43(uStack_365,CONCAT21(uStack_367,uStack_368))
                                    ),
                            CONCAT62(uStack_376,CONCAT11(auStack_378[1],auStack_378[0])) &
                            0xfffffffffffffffe);
          }
          if (bVar40) {
            puVar17 = *(uint **)(param_1 + 0x70);
            if (puVar17 == (uint *)0x0) goto LAB_08b23852;
            if (puVar17 == puStack_1f8) {
              auStack_358._0_8_ = auStack_378;
              (**(code **)(*(long *)puVar17 + 0x18))(puVar17,auStack_378);
            }
            else {
              uVar19 = (**(code **)(*(long *)puVar17 + 0x10))();
              auStack_358._0_8_ = uVar19;
            }
            puVar17 = *(uint **)(param_1 + 0x70);
            param_1[0x70] = 0;
            param_1[0x71] = 0;
            if (puVar17 == puStack_1f8) {
              lVar43 = 0x20;
LAB_08b20b69:
              (**(code **)(*(long *)puVar17 + lVar43))();
            }
            else {
              lVar43 = 0x28;
              if (puVar17 != (uint *)0x0) goto LAB_08b20b69;
            }
            uStack_1e0 = CONCAT44(uStack_1e0._4_4_,(int)puVar36);
            if ((long *)auStack_358._0_8_ == (long *)0x0) goto LAB_08b23866;
            (**(code **)(*(long *)auStack_358._0_8_ + 0x30))(auStack_358._0_8_,&uStack_1e0);
            if ((undefined1 *)auStack_358._0_8_ == auStack_378) {
              lVar43 = 0x20;
            }
            else {
              lVar43 = 0x28;
              if ((long *)auStack_358._0_8_ == (long *)0x0) goto LAB_08b20bba;
            }
            (**(code **)(*(long *)auStack_358._0_8_ + lVar43))();
          }
        }
LAB_08b20bba:
        if ((uStack_3b0 & 1) != 0) {
          func_0x0412a280(lStack_3a0,uStack_3b0 & 0xfffffffffffffffe);
        }
        func_0x0d709590(&lStack_380);
      }
      (**(code **)(**(long **)(param_1 + 0x2a) + 0xd8))(*(long **)(param_1 + 0x2a),puVar16);
      if ((cStack_138 == '\x01') && (0x800 < uStack_14c)) {
        func_0x0d6e4220(pcStack_140,&UNK_013a4121,0x87);
      }
      plVar21 = *(long **)(param_1 + 0x2a);
    }
  }
  if (param_1[0xa8] == 2) {
    if (*(long *)(param_1 + 100) != 0) {
      puVar26 = param_1 + 0x74;
      puStack_410 = (uint *)((long)param_1 + 0x1d1);
      do {
        lVar43 = *(long *)(*(long *)(param_1 + 0x5c) + (*(ulong *)(param_1 + 0x62) >> 6) * 8);
        uVar42 = (ulong)(((uint)*(ulong *)(param_1 + 0x62) & 0x3f) << 6);
        plVar21 = *(long **)(lVar43 + 0x18 + uVar42);
        if ((plVar21 == (long *)0x0) || (iVar12 = (**(code **)(*plVar21 + 0x10))(), iVar12 != 1))
        break;
        pbVar33 = (byte *)(lVar43 + uVar42);
        if ((*(long **)(pbVar33 + 0x18) == (long *)0x0) ||
           (iVar12 = (**(code **)(**(long **)(pbVar33 + 0x18) + 0x10))(), iVar12 != 1)) {
          auStack_378[0] = 0;
          auStack_378[1] = 0;
          uStack_376 = 0;
          cStack_370 = '\0';
          uStack_36f = 0;
          uStack_369 = 0;
          uStack_368 = 0;
          uStack_367 = 0;
          uStack_365 = 0;
          uStack_361 = 0;
          uVar42 = 0;
        }
        else {
          (**(code **)(**(long **)(pbVar33 + 0x18) + 0x28))(auStack_378);
          uVar42 = CONCAT17(uStack_369,CONCAT61(uStack_36f,cStack_370));
        }
        bVar10 = auStack_378[0];
        uVar25 = (ulong)(auStack_378[0] >> 1);
        if ((auStack_378[0] & 1) != 0) {
          uVar25 = uVar42;
        }
        if (uVar25 != 0) {
          bVar5 = *pbVar33;
          if ((bVar5 & 1) == 0) {
            uVar31 = (ulong)(bVar5 >> 1);
            uVar38 = (ulong)(byte)param_1[0x74];
            if (((byte)param_1[0x74] & 1) != 0) goto LAB_08b22667;
LAB_08b22639:
            if (uVar31 == uVar38 >> 1) {
LAB_08b22677:
              if ((bVar5 & 1) == 0) {
                pbVar29 = pbVar33 + 1;
              }
              else {
                pbVar29 = *(byte **)(pbVar33 + 0x10);
              }
              puVar16 = puStack_410;
              if ((uVar38 & 1) != 0) {
                puVar16 = *(uint **)(param_1 + 0x78);
              }
              iVar12 = func_0x0eee3000(pbVar29,puVar16);
              if ((puVar26 != (uint *)auStack_378) && (iVar12 == 0)) {
                if ((uVar38 & 1) == 0) {
                  if ((bVar10 & 1) == 0) {
                    *(ulong *)(param_1 + 0x78) =
                         CONCAT17(uStack_361,CONCAT43(uStack_365,CONCAT21(uStack_367,uStack_368)));
                    *(ulong *)puVar26 = CONCAT62(uStack_376,CONCAT11(auStack_378[1],auStack_378[0]))
                    ;
                    *(ulong *)(param_1 + 0x76) =
                         CONCAT17(uStack_369,CONCAT61(uStack_36f,cStack_370));
                  }
                  else {
                    func_0x04885070(puVar26,CONCAT17(uStack_361,
                                                     CONCAT43(uStack_365,
                                                              CONCAT21(uStack_367,uStack_368))),
                                    uVar42);
                  }
                }
                else {
                  puVar18 = auStack_378 + 1;
                  if ((bVar10 & 1) != 0) {
                    puVar18 = (undefined1 *)
                              CONCAT17(uStack_361,
                                       CONCAT43(uStack_365,CONCAT21(uStack_367,uStack_368)));
                  }
                  func_0x04885120(puVar26,puVar18,uVar25);
                }
              }
            }
          }
          else {
            uVar31 = *(ulong *)(pbVar33 + 8);
            uVar38 = (ulong)(byte)param_1[0x74];
            if (((byte)param_1[0x74] & 1) == 0) goto LAB_08b22639;
LAB_08b22667:
            if (uVar31 == *(ulong *)(param_1 + 0x76)) goto LAB_08b22677;
          }
          func_0x08b1f7a0(param_1,pbVar33,*(undefined4 *)(pbVar33 + 0x38));
        }
        lVar43 = *(long *)(*(long *)(param_1 + 0x5c) + (*(ulong *)(param_1 + 0x62) >> 6) * 8);
        uVar42 = (ulong)(((uint)*(ulong *)(param_1 + 0x62) & 0x3f) << 6);
        plVar21 = *(long **)(lVar43 + 0x30 + uVar42);
        if (plVar21 == (long *)0x0) {
LAB_08b22778:
          plVar21 = *(long **)(lVar43 + uVar42 + 0x20);
          if (plVar21 == (long *)0x0) goto LAB_08b2279b;
LAB_08b22785:
          LOCK();
          plVar2 = plVar21 + 1;
          lVar30 = *plVar2;
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (lVar30 != 0) goto LAB_08b2279b;
          (**(code **)(*plVar21 + 0x10))(plVar21);
          func_0x0412c2d0(plVar21);
          bVar10 = *(byte *)(lVar43 + uVar42);
        }
        else {
          LOCK();
          plVar2 = plVar21 + 1;
          lVar30 = *plVar2;
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (lVar30 != 0) goto LAB_08b22778;
          (**(code **)(*plVar21 + 0x10))(plVar21);
          func_0x0412c2d0(plVar21);
          plVar21 = *(long **)(lVar43 + uVar42 + 0x20);
          if (plVar21 != (long *)0x0) goto LAB_08b22785;
LAB_08b2279b:
          bVar10 = *(byte *)(lVar43 + uVar42);
        }
        if ((bVar10 & 1) != 0) {
          func_0x0412a280(((ulong *)(lVar43 + uVar42))[2],
                          *(ulong *)(lVar43 + uVar42) & 0xfffffffffffffffe);
        }
        uVar42 = *(long *)(param_1 + 0x62) + _DAT_014e9060;
        lVar43 = *(long *)(param_1 + 100) + _UNK_014e9068;
        *(ulong *)(param_1 + 0x62) = uVar42;
        *(long *)(param_1 + 100) = lVar43;
        if (0x7f < uVar42) {
          func_0x0412a280(**(undefined8 **)(param_1 + 0x5c),0x1000);
          *(long *)(param_1 + 0x5c) = *(long *)(param_1 + 0x5c) + 8;
          *(long *)(param_1 + 0x62) = *(long *)(param_1 + 0x62) + -0x40;
        }
        if ((auStack_378[0] & 1) != 0) {
          func_0x0412a280(CONCAT17(uStack_361,CONCAT43(uStack_365,CONCAT21(uStack_367,uStack_368))),
                          CONCAT62(uStack_376,CONCAT11(auStack_378[1],auStack_378[0])) &
                          0xfffffffffffffffe);
        }
      } while (*(long *)(param_1 + 100) != 0);
    }
    puStack_410 = (uint *)func_0x0417cc60();
    if (1000000000 < (long)puStack_410 - *(long *)(param_1 + 0x4a)) {
      puVar26 = param_1 + 0x7c;
      func_0x0412d770(puVar26);
      puVar34 = *(ulong **)(param_1 + 0x40);
      puVar35 = *(ulong **)(param_1 + 0x42);
      puStack_400 = puVar26;
      if (puVar34 != puVar35) {
        puStack_3c0 = param_1 + 0x1e;
        puVar26 = (uint *)0x2b9;
        do {
          while (10000000000 < (long)((long)puStack_410 - puVar34[0x1f])) {
            func_0x0d6e3e90(auStack_378,puVar34 + 0xe);
            func_0x0604cdd0(puStack_3c0,auStack_378);
            if ((auStack_378[0] & 1) != 0) {
              func_0x0412a280(CONCAT17(uStack_361,
                                       CONCAT43(uStack_365,CONCAT21(uStack_367,uStack_368))),
                              CONCAT62(uStack_376,CONCAT11(auStack_378[1],auStack_378[0])) &
                              0xfffffffffffffffe);
            }
            puVar39 = *(ulong **)(param_1 + 0x42);
            puVar35 = puVar34;
            if (puVar34 + 0x2d == puVar39) {
              if (puVar34 != puVar39) {
LAB_08b22cb8:
                do {
                  if ((puVar39[-3] & 1) == 0) {
                    if ((puVar39[-0x22] & 1) == 0) goto LAB_08b22cc9;
LAB_08b22d0b:
                    func_0x0412a280(puVar39[-0x20],puVar39[-0x22] & 0xfffffffffffffffe);
                    if ((puVar39[-0x26] & 1) != 0) goto LAB_08b22d2c;
LAB_08b22cd3:
                    if ((puVar39[-0x2a] & 1) == 0) goto LAB_08b22cdd;
LAB_08b22d4d:
                    func_0x0412a280(puVar39[-0x28],puVar39[-0x2a] & 0xfffffffffffffffe);
                    bVar10 = (byte)puVar39[-0x2d];
                  }
                  else {
                    func_0x0412a280(puVar39[-1],puVar39[-3] & 0xfffffffffffffffe);
                    if ((puVar39[-0x22] & 1) != 0) goto LAB_08b22d0b;
LAB_08b22cc9:
                    if ((puVar39[-0x26] & 1) == 0) goto LAB_08b22cd3;
LAB_08b22d2c:
                    func_0x0412a280(puVar39[-0x24],puVar39[-0x26] & 0xfffffffffffffffe);
                    if ((puVar39[-0x2a] & 1) != 0) goto LAB_08b22d4d;
LAB_08b22cdd:
                    bVar10 = (byte)puVar39[-0x2d];
                  }
                  if ((bVar10 & 1) != 0) {
                    func_0x0412a280(puVar39[-0x2b],puVar39[-0x2d] & 0xfffffffffffffffe);
                  }
                  puVar39 = puVar39 + -0x2d;
                } while (puVar39 != puVar35);
              }
            }
            else {
              do {
                if ((*puVar35 & 1) != 0) {
                  func_0x0412a280(puVar35[2],*puVar35 & 0xfffffffffffffffe);
                }
                puVar35[2] = puVar35[0x2f];
                *puVar35 = puVar35[0x2d];
                puVar35[1] = puVar35[0x2e];
                *(undefined2 *)(puVar35 + 0x2d) = 0;
                if ((puVar35[3] & 1) != 0) {
                  func_0x0412a280(puVar35[5],puVar35[3] & 0xfffffffffffffffe);
                }
                puVar35[5] = puVar35[0x32];
                puVar35[3] = puVar35[0x30];
                puVar35[4] = puVar35[0x31];
                *(undefined2 *)(puVar35 + 0x30) = 0;
                puVar35[6] = puVar35[0x33];
                if ((puVar35[7] & 1) != 0) {
                  func_0x0412a280(puVar35[9],puVar35[7] & 0xfffffffffffffffe);
                }
                puVar35[9] = puVar35[0x36];
                puVar35[7] = puVar35[0x34];
                puVar35[8] = puVar35[0x35];
                *(undefined2 *)(puVar35 + 0x34) = 0;
                puVar35[10] = puVar35[0x37];
                if ((puVar35[0xb] & 1) != 0) {
                  func_0x0412a280(puVar35[0xd],puVar35[0xb] & 0xfffffffffffffffe);
                }
                puVar35[0xd] = puVar35[0x3a];
                puVar35[0xb] = puVar35[0x38];
                puVar35[0xc] = puVar35[0x39];
                *(undefined2 *)(puVar35 + 0x38) = 0;
                puVar35[0xe] = puVar35[0x3b];
                puVar35[0xf] = puVar35[0x3c];
                puVar35[0x10] = puVar35[0x3d];
                puVar35[0x11] = puVar35[0x3e];
                *(int *)(puVar35 + 0x12) = (int)puVar35[0x3f];
                *(undefined4 *)((long)puVar35 + 0x94) = *(undefined4 *)((long)puVar35 + 0x1fc);
                *(int *)(puVar35 + 0x13) = (int)puVar35[0x40];
                *(undefined4 *)((long)puVar35 + 0x9c) = *(undefined4 *)((long)puVar35 + 0x204);
                *(int *)(puVar35 + 0x14) = (int)puVar35[0x41];
                *(undefined4 *)((long)puVar35 + 0xa4) = *(undefined4 *)((long)puVar35 + 0x20c);
                *(int *)(puVar35 + 0x15) = (int)puVar35[0x42];
                *(undefined4 *)((long)puVar35 + 0xac) = *(undefined4 *)((long)puVar35 + 0x214);
                puVar35[0x16] = puVar35[0x43];
                puVar35[0x17] = puVar35[0x44];
                puVar35[0x18] = puVar35[0x45];
                puVar35[0x19] = puVar35[0x46];
                puVar35[0x1a] = puVar35[0x47];
                puVar35[0x1b] = puVar35[0x48];
                puVar35[0x1c] = puVar35[0x49];
                puVar35[0x1d] = puVar35[0x4a];
                *(int *)(puVar35 + 0x1e) = (int)puVar35[0x4b];
                puVar35[0x1f] = puVar35[0x4c];
                puVar35[0x20] = puVar35[0x4d];
                puVar35[0x21] = puVar35[0x4e];
                *(short *)(puVar35 + 0x22) = (short)puVar35[0x4f];
                puVar35[0x23] = puVar35[0x50];
                puVar35[0x24] = puVar35[0x51];
                puVar35[0x25] = puVar35[0x52];
                puVar35[0x26] = puVar35[0x53];
                puVar35[0x27] = puVar35[0x54];
                puVar35[0x28] = puVar35[0x55];
                *(int *)(puVar35 + 0x29) = (int)puVar35[0x56];
                if ((puVar35[0x2a] & 1) != 0) {
                  func_0x0412a280(puVar35[0x2c],puVar35[0x2a] & 0xfffffffffffffffe);
                }
                puVar35[0x2c] = puVar35[0x59];
                puVar35[0x2a] = puVar35[0x57];
                puVar35[0x2b] = puVar35[0x58];
                *(undefined2 *)(puVar35 + 0x57) = 0;
                puVar23 = puVar35 + 0x5a;
                puVar35 = puVar35 + 0x2d;
              } while (puVar23 != puVar39);
              puVar39 = *(ulong **)(param_1 + 0x42);
              if (puVar35 != puVar39) goto LAB_08b22cb8;
            }
            *(ulong **)(param_1 + 0x42) = puVar35;
            if (puVar34 == puVar35) goto LAB_08b22d92;
          }
          puVar34 = puVar34 + 0x2d;
        } while (puVar34 != puVar35);
      }
LAB_08b22d92:
      *(uint **)(param_1 + 0x4a) = puStack_410;
      if (param_1[0x90] == 1) {
        puVar26 = *(uint **)(param_1 + 0x50);
        for (puVar16 = *(uint **)(param_1 + 0x4e); puVar16 != puVar26; puVar16 = puVar16 + 6) {
          puVar36 = (uint *)((long)puVar16 + 1);
          puVar17 = puVar36;
          if ((*puVar16 & 1) != 0) {
            puVar17 = *(uint **)(puVar16 + 4);
          }
          uVar42 = func_0x0eee2e90(puVar17);
          if (0xfffffffffffffff7 < uVar42) goto LAB_08b2386b;
          if (uVar42 < 0x17) {
            auStack_378[0] = (char)uVar42 * '\x02';
            puVar18 = auStack_378 + 1;
            if (uVar42 != 0) goto LAB_08b22f44;
          }
          else {
            lVar43 = (uVar42 | 7) + 1;
            if ((uVar42 | 7) == 0x17) {
              lVar43 = 0x1a;
            }
            puVar18 = (undefined1 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar43);
            if (puVar18 == (undefined1 *)0x0) {
              func_0x0eec74c0(lVar43,0);
            }
            uStack_368 = SUB81(puVar18,0);
            uStack_367 = (undefined2)((ulong)puVar18 >> 8);
            uStack_365 = (uint)((ulong)puVar18 >> 0x18);
            uStack_361 = (undefined1)((ulong)puVar18 >> 0x38);
            auStack_378[0] = (byte)lVar43 | 1;
            auStack_378[1] = (undefined1)((ulong)lVar43 >> 8);
            uStack_376 = (undefined6)((ulong)lVar43 >> 0x10);
            uStack_36f = (undefined6)(uVar42 >> 8);
            uStack_369 = (undefined1)(uVar42 >> 0x38);
            cStack_370 = (char)uVar42;
LAB_08b22f44:
            func_0x0eee2ee0(puVar18,puVar17,uVar42);
          }
          puVar18[uVar42] = 0;
          uVar14 = param_1[0x48];
          func_0x0412d770(puVar28);
          plVar21 = *(long **)(param_1 + 0x2a);
          if (plVar21 == (long *)0x0) {
            func_0x08b1e9e0(param_1);
            plVar21 = *(long **)(param_1 + 0x2a);
            if (plVar21 != (long *)0x0) goto LAB_08b22f8c;
          }
          else {
LAB_08b22f8c:
            if (-1 < (int)param_1[0x2f]) {
              puVar18 = auStack_378 + 1;
              if ((auStack_378[0] & 1) != 0) {
                puVar18 = (undefined1 *)
                          CONCAT17(uStack_361,CONCAT43(uStack_365,CONCAT21(uStack_367,uStack_368)));
              }
              (**(code **)(*plVar21 + 0x138))(plVar21,puVar18,uVar14 & 0xffff,0);
            }
          }
          func_0x0412d790(puVar28);
          if ((auStack_378[0] & 1) != 0) {
            func_0x0412a280(CONCAT17(uStack_361,CONCAT43(uStack_365,CONCAT21(uStack_367,uStack_368))
                                    ),
                            CONCAT62(uStack_376,CONCAT11(auStack_378[1],auStack_378[0])) &
                            0xfffffffffffffffe);
          }
        }
        puVar26 = *(uint **)(param_1 + 0x56);
        for (puVar16 = *(uint **)(param_1 + 0x54); puVar16 != puVar26; puVar16 = puVar16 + 6) {
          puVar36 = (uint *)((long)puVar16 + 1);
          puVar17 = puVar36;
          if ((*puVar16 & 1) != 0) {
            puVar17 = *(uint **)(puVar16 + 4);
          }
          uVar42 = func_0x0eee2e90(puVar17);
          if (0xfffffffffffffff7 < uVar42) goto LAB_08b23870;
          if (uVar42 < 0x17) {
            auStack_378[0] = (char)uVar42 * '\x02';
            puVar18 = auStack_378 + 1;
            if (uVar42 != 0) goto LAB_08b23160;
            auStack_378[1] = 0;
            uVar14 = param_1[0x91];
          }
          else {
            lVar43 = (uVar42 | 7) + 1;
            if ((uVar42 | 7) == 0x17) {
              lVar43 = 0x1a;
            }
            puVar18 = (undefined1 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar43);
            if (puVar18 == (undefined1 *)0x0) {
              func_0x0eec74c0(lVar43,0);
            }
            uStack_368 = SUB81(puVar18,0);
            uStack_367 = (undefined2)((ulong)puVar18 >> 8);
            uStack_365 = (uint)((ulong)puVar18 >> 0x18);
            uStack_361 = (undefined1)((ulong)puVar18 >> 0x38);
            auStack_378[0] = (byte)lVar43 | 1;
            auStack_378[1] = (undefined1)((ulong)lVar43 >> 8);
            uStack_376 = (undefined6)((ulong)lVar43 >> 0x10);
            uStack_36f = (undefined6)(uVar42 >> 8);
            uStack_369 = (undefined1)(uVar42 >> 0x38);
            cStack_370 = (char)uVar42;
LAB_08b23160:
            func_0x0eee2ee0(puVar18,puVar17,uVar42);
            puVar18[uVar42] = 0;
            uVar14 = param_1[0x91];
          }
          if (uVar14 == 1) {
            uVar14 = param_1[0x49];
            func_0x0412d770(puVar28);
            plVar21 = *(long **)(param_1 + 0x2a);
            if (plVar21 == (long *)0x0) {
              func_0x08b1e9e0(param_1);
              plVar21 = *(long **)(param_1 + 0x2a);
              if (plVar21 != (long *)0x0) goto LAB_08b230bc;
            }
            else {
LAB_08b230bc:
              if (-1 < (int)param_1[0x30]) {
                puVar18 = auStack_378 + 1;
                if ((auStack_378[0] & 1) != 0) {
                  puVar18 = (undefined1 *)
                            CONCAT17(uStack_361,CONCAT43(uStack_365,CONCAT21(uStack_367,uStack_368))
                                    );
                }
                (**(code **)(*plVar21 + 0x138))(plVar21,puVar18,uVar14 & 0xffff,0);
              }
            }
            func_0x0412d790(puVar28);
          }
          if ((auStack_378[0] & 1) != 0) {
            func_0x0412a280(CONCAT17(uStack_361,CONCAT43(uStack_365,CONCAT21(uStack_367,uStack_368))
                                    ),
                            CONCAT62(uStack_376,CONCAT11(auStack_378[1],auStack_378[0])) &
                            0xfffffffffffffffe);
          }
        }
      }
      func_0x0412d790(puStack_400);
    }
  }
  func_0x0412d790(puVar28);
  if (*(long *)(param_1 + 0x70) == 0) {
    return;
  }
  lVar43 = func_0x0417cc60();
  if (lVar43 - *(long *)(param_1 + 0x7a) < 0x2540be401) {
    return;
  }
  puVar16 = *(uint **)(param_1 + 0x70);
  if (puVar16 == (uint *)0x0) {
    auVar9._8_8_ = 0;
    auVar9._0_8_ = auStack_358._8_8_;
    auStack_358 = auVar9 << 0x40;
  }
  else {
    puVar26 = param_1 + 0x68;
    if (puVar16 == puVar26) {
      auStack_358._0_8_ = auStack_378;
      (**(code **)(*(long *)puVar16 + 0x18))();
      puVar16 = *(uint **)(param_1 + 0x70);
      param_1[0x70] = 0;
      param_1[0x71] = 0;
      if (puVar16 == puVar26) goto LAB_08b231fc;
LAB_08b22e6e:
      lVar43 = 0x28;
      if (puVar16 == (uint *)0x0) goto LAB_08b23207;
    }
    else {
      uVar19 = (**(code **)(*(long *)puVar16 + 0x10))();
      auStack_358._0_8_ = uVar19;
      puVar16 = *(uint **)(param_1 + 0x70);
      param_1[0x70] = 0;
      param_1[0x71] = 0;
      if (puVar16 != puVar26) goto LAB_08b22e6e;
LAB_08b231fc:
      lVar43 = 0x20;
    }
    (**(code **)(*(long *)puVar16 + lVar43))();
  }
LAB_08b23207:
  uStack_150 = 0;
  if ((long *)auStack_358._0_8_ != (long *)0x0) {
    (**(code **)(*(long *)auStack_358._0_8_ + 0x30))(auStack_358._0_8_,&uStack_150);
    if ((undefined1 *)auStack_358._0_8_ == auStack_378) {
      lVar43 = 0x20;
    }
    else {
      lVar43 = 0x28;
      if ((long *)auStack_358._0_8_ == (long *)0x0) {
        return;
      }
    }
    (**(code **)(*(long *)auStack_358._0_8_ + lVar43))();
    return;
  }
LAB_08b23875:
  func_0x04891200();
  puVar36 = param_1;
LAB_08b2387a:
  param_1 = puVar36;
  func_0x04882e30();
LAB_08b2387f:
  func_0x08b33aa0();
LAB_08b23884:
  func_0x04882e30();
LAB_08b23889:
  FUN_04882eb0();
code_r0x08b2388e:
  uVar19 = func_0x04882e30();
  *(uint **)(param_1 + 0x50) = puVar26;
  func_0x0412d790(puVar28);
  func_0x0412d790(puVar28);
  func_0x08b23d20(&uStack_150);
  func_0x0412d790(puVar28);
  uVar19 = func_0x0eee2d70(uVar19);
  func_0x04882e20(uVar19);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
LAB_08b2386b:
  func_0x04882e30();
LAB_08b23870:
  func_0x04882e30();
  param_1 = puVar36;
  goto LAB_08b23875;
}



/* ---- referenced strings ----
 * 0x147161a  UNASSIGNED_RAKNET_GUID
 * 0x1471629  ET_GUID
 */
