/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6ce35e0 (ELF vaddr 0x6be35e0)
 * Label: caller-of-callee
 * Body:  [[06ce35e0, 06ce3638] [06ce3640, 06ce36a4] [06ce36b0, 06ce3819] [06ce3820, 06ce3b2a] [06ce3b30, 06ce3b65] [06ce3b70, 06ce3bf9] [06ce3c00, 06ce3c38] [06ce3c40, 06ce3ce4] [06ce3cf0, 06ce3d32] [06ce3d40, 06ce3d64] [06ce3d70, 06ce3f96] [06ce3fa0, 06ce4885] [06ce4890, 06ce4cf5] [06ce4d00, 06ce4dac] [06ce4db0, 06ce5084] [06ce5090, 06ce50c3] [06ce50d0, 06ce5148] [06ce5150, 06ce5168] [06ce5170, 06ce6bb3] [06ce6bc0, 06ce6c9b] [06ce6f42, 06ce6fbe]]
 * Ghidra: FUN_06ce35e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_06ce35e0(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  byte *pbVar2;
  short *psVar3;
  byte *pbVar4;
  undefined1 auVar5 [16];
  undefined8 *puVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  char *pcVar9;
  undefined1 auVar10 [8];
  undefined8 uVar11;
  char cVar12;
  int iVar13;
  ulong *puVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  ulong *puVar19;
  ulong **ppuVar20;
  long lVar21;
  undefined1 *puVar22;
  undefined8 *puVar23;
  ulong uVar24;
  undefined8 uVar25;
  int *piVar26;
  long lVar27;
  ulong uVar28;
  ulong uVar29;
  ulong *puVar30;
  ulong extraout_RDX;
  short *psVar31;
  ulong *puVar32;
  long *plVar33;
  char *pcVar34;
  ulong *puVar35;
  ulong *puVar36;
  long lVar37;
  bool bVar38;
  float fVar39;
  byte bVar40;
  byte bVar41;
  byte bVar43;
  byte bVar45;
  byte bVar47;
  byte bVar49;
  byte bVar51;
  byte bVar53;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  undefined1 in_XMM2 [16];
  undefined1 auVar54 [12];
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  ulong uStack_3f0;
  undefined1 auStack_3e8 [8];
  ulong *puStack_3e0;
  undefined1 auStack_3d8 [16];
  ulong uStack_3c8;
  ulong uStack_3c0;
  ulong *puStack_3b8;
  ulong **ppuStack_3b0;
  ulong uStack_3a8;
  float fStack_3a0;
  ulong *puStack_398;
  ulong *puStack_390;
  ulong *puStack_388;
  undefined8 uStack_378;
  ulong **ppuStack_370;
  int *piStack_368;
  long *plStack_360;
  ulong uStack_358;
  ulong uStack_350;
  ulong uStack_348;
  long lStack_340;
  ulong uStack_338;
  float fStack_330;
  ulong *puStack_328;
  ulong *puStack_320;
  ulong *puStack_318;
  ulong *puStack_310;
  ulong uStack_308;
  ulong *puStack_300;
  ulong uStack_2f8;
  float fStack_2f0;
  long lStack_2e8;
  ulong *puStack_2e0;
  undefined *puStack_2d8;
  long *plStack_2d0;
  undefined8 uStack_2c8;
  ulong *puStack_2c0;
  long lStack_2b8;
  long *plStack_2a8;
  int *piStack_298;
  long *plStack_290;
  ulong *puStack_288;
  ulong *puStack_280;
  undefined1 auStack_278 [16];
  float fStack_268;
  ulong uStack_260;
  ulong *puStack_258;
  ulong **ppuStack_250;
  ulong uStack_248;
  float fStack_240;
  ulong *puStack_238;
  ulong *puStack_230;
  ulong *puStack_228;
  undefined1 auStack_218 [16];
  ulong *puStack_208;
  ulong uStack_200;
  float fStack_1f8;
  ulong *puStack_1e8;
  ulong *puStack_1e0;
  undefined1 auStack_1d8 [16];
  float fStack_1c8;
  long lStack_1c0;
  ulong uStack_1b8;
  long lStack_1b0;
  ulong uStack_1a8;
  float fStack_1a0;
  ulong *puStack_198;
  ulong *puStack_190;
  ulong *puStack_188;
  undefined1 *puStack_178;
  undefined8 *puStack_170;
  long *plStack_168;
  undefined *puStack_160;
  undefined1 *puStack_158;
  undefined1 auStack_150 [16];
  char *pcStack_140;
  long *plStack_138;
  long lStack_130;
  ulong *puStack_128;
  long lStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined1 auStack_100 [8];
  undefined8 uStack_f8;
  long lStack_f0;
  int *piStack_e8;
  long *plStack_e0;
  int *piStack_d8;
  long *plStack_d0;
  ulong uStack_c8;
  undefined1 *puStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  int *piStack_a8;
  long *plStack_a0;
  ulong **ppuStack_98;
  ulong **ppuStack_90;
  ulong **ppuStack_88;
  ulong uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  char cVar42;
  char cVar44;
  char cVar46;
  char cVar48;
  char cVar50;
  char cVar52;
  
  puStack_208 = (ulong *)0x0;
  uStack_200 = 0;
  fStack_1f8 = 1.0;
  plStack_168 = param_2;
  puStack_170 = param_1;
  auStack_218._0_8_ = puStack_208;
  auStack_218._8_8_ = uStack_200;
  for (puVar23 = _DAT_0f6d0698; puVar23 != (undefined8 *)0x0; puVar23 = (undefined8 *)*puVar23) {
    if ((*(uint *)(puVar23 + 2) & 0x100) != 0) {
      func_0x04134310(&puStack_1e8,*(uint *)(puVar23 + 2) & 0xff);
      puVar14 = puVar23 + 3;
      if ((*puVar14 & 1) == 0) {
        piStack_368 = (int *)puVar23[5];
        uStack_378 = (ulong **)*puVar14;
        ppuStack_370 = (ulong **)puVar23[4];
        if ((*puVar14 & 1) == 0) goto LAB_06ce368d;
LAB_06ce36cc:
        FUN_0412e5e0(&plStack_360,puVar23[5],puVar23[4]);
      }
      else {
        FUN_0412e5e0(&uStack_378,puVar23[5],puVar23[4]);
        if ((*puVar14 & 1) != 0) goto LAB_06ce36cc;
LAB_06ce368d:
        uStack_350 = puVar23[5];
        plStack_360 = (long *)*puVar14;
        uStack_358 = puVar23[4];
      }
      puStack_288 = (ulong *)0x0;
      puStack_280 = (ulong *)0x0;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = auStack_278._8_8_;
      auStack_278 = auVar5 << 0x40;
      puStack_2c0 = (ulong *)((ulong)puStack_2c0 & 0xffffffffffffff00);
      uStack_2c8 = &puStack_288;
      puVar14 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
      if (puVar14 == (ulong *)0x0) {
        func_0x0eec74c0(0x30,0);
      }
      auStack_278._0_8_ = puVar14 + 6;
      ppuStack_90 = &puStack_128;
      ppuStack_88 = &puStack_310;
      uStack_80 = uStack_80 & 0xffffffffffffff00;
      puStack_288 = puVar14;
      puStack_128 = puVar14;
      ppuStack_98 = &puStack_288;
      if (((ulong)uStack_378 & 1) == 0) {
        puVar14[2] = (ulong)piStack_368;
        *puVar14 = (ulong)uStack_378;
        puVar14[1] = (ulong)ppuStack_370;
        puStack_310 = puVar14 + 3;
        puStack_280 = puVar14;
        if (((ulong)plStack_360 & 1) == 0) goto LAB_06ce37cb;
LAB_06ce385a:
        FUN_0412e5e0(puStack_310,uStack_350,uStack_358);
        puStack_280 = puStack_310 + 3;
        if (((ulong)puStack_1e8 & 1) != 0) goto LAB_06ce3897;
LAB_06ce37fb:
        auStack_3d8._0_8_ = auStack_1d8._0_8_;
        auStack_3e8 = (undefined1  [8])puStack_1e8;
        puStack_3e0 = puStack_1e0;
      }
      else {
        puStack_310 = puVar14;
        puStack_280 = puVar14;
        FUN_0412e5e0(puVar14,piStack_368,ppuStack_370);
        puStack_310 = puStack_310 + 3;
        if (((ulong)plStack_360 & 1) != 0) goto LAB_06ce385a;
LAB_06ce37cb:
        puStack_310[2] = uStack_350;
        *puStack_310 = (ulong)plStack_360;
        puStack_310[1] = uStack_358;
        puStack_280 = puStack_310 + 3;
        if (((ulong)puStack_1e8 & 1) == 0) goto LAB_06ce37fb;
LAB_06ce3897:
        FUN_0412e5e0(auStack_3e8,auStack_1d8._0_8_,puStack_1e0);
      }
      auStack_3d8._8_8_ = 0;
      uStack_3c8 = 0;
      uStack_3c0 = 0;
      func_0x0488f040();
      puVar32 = puStack_288;
      puVar14 = puStack_280;
      if (puStack_288 != (ulong *)0x0) {
        for (; puVar32 != puVar14; puVar14 = puVar14 + -3) {
          if ((puVar14[-3] & 1) != 0) {
            thunk_FUN_0ee326a0(puVar14[-1],puVar14[-3] & 0xfffffffffffffffe);
          }
        }
        puStack_280 = puVar32;
        thunk_FUN_0ee326a0(puStack_288,auStack_278._0_8_ - (long)puStack_288);
      }
      if (((ulong)plStack_360 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_350,(ulong)plStack_360 & 0xfffffffffffffffe);
      }
      if (((ulong)uStack_378 & 1) != 0) {
        thunk_FUN_0ee326a0(piStack_368,(ulong)uStack_378 & 0xfffffffffffffffe);
      }
      if (((ulong)puStack_1e8 & 1) != 0) {
        thunk_FUN_0ee326a0(auStack_1d8._0_8_,(ulong)puStack_1e8 & 0xfffffffffffffffe);
      }
      puVar14 = (ulong *)((ulong)auStack_3e8 >> 1 & 0x7f);
      puVar22 = auStack_3e8 + 1;
      if (((ulong)auStack_3e8 & 1) != 0) {
        puVar14 = puStack_3e0;
        puVar22 = (undefined1 *)auStack_3d8._0_8_;
      }
      uVar15 = func_0x04883620(&uStack_378,puVar22,puVar14);
      uVar17 = auStack_218._8_8_;
      if (auStack_218._8_8_ != 0) {
        uVar28 = auStack_218._8_8_ - ((ulong)auStack_218._8_8_ >> 1 & 0x5555555555555555);
        uVar28 = (uVar28 >> 2 & 0x3333333333333333) + (uVar28 & 0x3333333333333333);
        uVar28 = ((uVar28 >> 4) + uVar28 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar28 >> 0x38 < 2) {
          uStack_3f0 = auStack_218._8_8_ - 1 & uVar15;
        }
        else {
          uStack_3f0 = uVar15;
          if ((ulong)auStack_218._8_8_ <= uVar15) {
            if ((uVar15 | auStack_218._8_8_) >> 0x20 == 0) {
              uStack_3f0 = (uVar15 & 0xffffffff) % (auStack_218._8_8_ & 0xffffffff);
            }
            else {
              uStack_3f0 = uVar15 % (ulong)auStack_218._8_8_;
            }
          }
        }
        if ((*(long **)(auStack_218._0_8_ + uStack_3f0 * 8) != (long *)0x0) &&
           (plVar16 = (long *)**(long **)(auStack_218._0_8_ + uStack_3f0 * 8),
           plVar16 != (long *)0x0)) {
          if (((ulong)auStack_3e8 & 1) == 0) {
            puStack_2e0 = (ulong *)(auStack_3e8 + 1);
            puVar14 = (ulong *)((ulong)auStack_3e8 >> 1 & 0x7f);
          }
          else {
            puStack_2e0 = (ulong *)auStack_3d8._0_8_;
            puVar14 = puStack_3e0;
          }
          if ((byte)(uVar28 >> 0x38) < 2) {
            uVar28 = auStack_218._8_8_ - 1;
            do {
              if (plVar16[1] == uVar15) {
                bVar40 = *(byte *)(plVar16 + 2);
                if ((bVar40 & 1) == 0) {
                  puVar32 = (ulong *)(ulong)(bVar40 >> 1);
                }
                else {
                  puVar32 = (ulong *)plVar16[3];
                }
                if (puVar32 == puVar14) {
                  if ((bVar40 & 1) == 0) {
                    lVar37 = (long)plVar16 + 0x11;
                  }
                  else {
                    lVar37 = plVar16[4];
                  }
                  iVar13 = func_0x0eee3000(lVar37,puStack_2e0,puVar14);
                  if (iVar13 == 0) goto LAB_06ce3f76;
                }
              }
              else if ((plVar16[1] & uVar28) != uStack_3f0) break;
              plVar16 = (long *)*plVar16;
            } while (plVar16 != (long *)0x0);
          }
          else {
            do {
              uVar28 = plVar16[1];
              if (uVar28 == uVar15) {
                bVar40 = *(byte *)(plVar16 + 2);
                if ((bVar40 & 1) == 0) {
                  puVar32 = (ulong *)(ulong)(bVar40 >> 1);
                }
                else {
                  puVar32 = (ulong *)plVar16[3];
                }
                if (puVar32 == puVar14) {
                  if ((bVar40 & 1) == 0) {
                    lVar37 = (long)plVar16 + 0x11;
                  }
                  else {
                    lVar37 = plVar16[4];
                  }
                  iVar13 = func_0x0eee3000(lVar37,puStack_2e0,puVar14);
                  if (iVar13 == 0) goto LAB_06ce3f76;
                }
              }
              else {
                if (uVar17 <= uVar28) {
                  if ((uVar28 | uVar17) >> 0x20 == 0) {
                    uVar28 = (uVar28 & 0xffffffff) % (uVar17 & 0xffffffff);
                  }
                  else {
                    uVar28 = uVar28 % uVar17;
                  }
                }
                if (uVar28 != uStack_3f0) break;
              }
              plVar16 = (long *)*plVar16;
            } while (plVar16 != (long *)0x0);
          }
        }
      }
      puVar14 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      auVar54 = in_XMM2._4_12_;
      if (puVar14 == (ulong *)0x0) {
        func_0x0eec74c0(0x40,0);
        auVar54 = in_XMM2._4_12_;
      }
      ppuStack_370 = (ulong **)auStack_218;
      piStack_368 = (int *)0x1;
      *puVar14 = 0;
      puVar14[1] = uVar15;
      puVar14[4] = auStack_3d8._0_8_;
      puVar14[2] = (ulong)auStack_3e8;
      puVar14[3] = (ulong)puStack_3e0;
      auStack_3e8 = (undefined1  [8])0x0;
      puStack_3e0 = (ulong *)0x0;
      puVar14[5] = auStack_3d8._8_8_;
      puVar14[6] = uStack_3c8;
      puVar14[7] = uStack_3c0;
      auStack_3d8 = ZEXT816(0);
      uStack_3c8 = 0;
      uStack_3c0 = 0;
      if ((long)uVar17 < 0) {
        in_XMM2._0_4_ = (float)uVar17;
        in_XMM2._4_12_ = auVar54;
        if (uVar17 != 0) goto LAB_06ce3d54;
LAB_06ce3d70:
        uVar28 = 1;
        if (2 < uVar17) {
          uVar28 = (ulong)((uVar17 & uVar17 - 1) != 0);
        }
        uVar28 = uVar17 * 2 | uVar28;
        fVar39 = (float)ceilf((float)(uStack_200 + 1) / fStack_1f8);
        uVar17 = (long)(fVar39 - _DAT_01198778) & (long)fVar39 >> 0x3f | (long)fVar39;
        if (uVar17 < uVar28) {
          uVar17 = uVar28;
        }
        uVar28 = 2;
        if ((uVar17 == 1) || (uVar28 = uVar17, (uVar17 & uVar17 - 1) == 0)) {
          bVar38 = uVar28 < (ulong)auStack_218._8_8_;
          if (uVar28 <= (ulong)auStack_218._8_8_) goto LAB_06ce3e0b;
LAB_06ce3de1:
          func_0x0489a060(auStack_218,uVar28);
        }
        else {
          uVar28 = func_0x0412c3f0();
          bVar38 = uVar28 < (ulong)auStack_218._8_8_;
          if ((ulong)auStack_218._8_8_ < uVar28) goto LAB_06ce3de1;
LAB_06ce3e0b:
          uVar25 = auStack_218._8_8_;
          if (bVar38) {
            fVar39 = (float)ceilf((float)uStack_200 / fStack_1f8);
            uVar17 = (long)(fVar39 - _DAT_01198778) & (long)fVar39 >> 0x3f | (long)fVar39;
            if (((ulong)uVar25 < 3) ||
               (uVar29 = uVar25 - ((ulong)uVar25 >> 1 & 0x5555555555555555),
               uVar29 = (uVar29 >> 2 & 0x3333333333333333) + (uVar29 & 0x3333333333333333),
               1 < (byte)(((uVar29 >> 4) + uVar29 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))
               ) {
              uVar17 = func_0x0412c3f0(uVar17);
            }
            else if (1 < uVar17) {
              lVar37 = 0x3f;
              if (uVar17 - 1 != 0) {
                for (; uVar17 - 1 >> lVar37 == 0; lVar37 = lVar37 + -1) {
                }
              }
              uVar17 = 1L << (-((byte)lVar37 ^ 0x3f) & 0x3f);
            }
            if (uVar28 <= uVar17) {
              uVar28 = uVar17;
            }
            if (uVar28 < (ulong)uVar25) goto LAB_06ce3de1;
          }
        }
        uVar17 = auStack_218._8_8_;
        if ((auStack_218._8_8_ & auStack_218._8_8_ - 1) == 0) {
          uVar28 = uVar15 & auStack_218._8_8_ - 1;
        }
        else {
          uVar28 = uVar15;
          if ((ulong)auStack_218._8_8_ <= uVar15) {
            if ((uVar15 | auStack_218._8_8_) >> 0x20 == 0) {
              uVar28 = (uVar15 & 0xffffffff) % (auStack_218._8_8_ & 0xffffffff);
            }
            else {
              uVar28 = uVar15 % (ulong)auStack_218._8_8_;
            }
          }
        }
      }
      else {
        in_XMM2._0_4_ = (float)(long)uVar17;
        in_XMM2._4_12_ = auVar54;
        if (uVar17 == 0) goto LAB_06ce3d70;
LAB_06ce3d54:
        in_XMM2._0_4_ = in_XMM2._0_4_ * fStack_1f8;
        uVar28 = uStack_3f0;
        if (in_XMM2._0_4_ < (float)(uStack_200 + 1)) goto LAB_06ce3d70;
      }
      puVar32 = *(ulong **)(auStack_218._0_8_ + uVar28 * 8);
      if (puVar32 == (ulong *)0x0) {
        *puVar14 = (ulong)puStack_208;
        *(ulong ***)(auStack_218._0_8_ + uVar28 * 8) = &puStack_208;
        puStack_208 = puVar14;
        if (*puVar14 != 0) {
          uVar15 = *(ulong *)(*puVar14 + 8);
          if ((uVar17 & uVar17 - 1) == 0) {
            *(ulong **)(auStack_218._0_8_ + (uVar15 & uVar17 - 1) * 8) = puVar14;
          }
          else {
            if (uVar17 <= uVar15) {
              if ((uVar15 | uVar17) >> 0x20 == 0) {
                *(ulong **)(auStack_218._0_8_ + ((uVar15 & 0xffffffff) % (uVar17 & 0xffffffff)) * 8)
                     = puVar14;
                goto LAB_06ce3f6e;
              }
              uVar15 = uVar15 % uVar17;
            }
            *(ulong **)(auStack_218._0_8_ + uVar15 * 8) = puVar14;
          }
        }
      }
      else {
        *puVar14 = *puVar32;
        *puVar32 = (ulong)puVar14;
      }
LAB_06ce3f6e:
      uStack_200 = uStack_200 + 1;
LAB_06ce3f76:
      uVar25 = auStack_3d8._8_8_;
      if (auStack_3d8._8_8_ != 0) {
        uVar17 = uStack_3c8;
        if (auStack_3d8._8_8_ != uStack_3c8) {
          do {
            if ((*(byte *)(uVar17 - 0x18) & 1) != 0) {
              thunk_FUN_0ee326a0(*(undefined8 *)(uVar17 - 8),
                                 *(ulong *)(uVar17 - 0x18) & 0xfffffffffffffffe);
            }
            uVar17 = uVar17 - 0x18;
          } while (uVar17 != uVar25);
        }
        uStack_3c8 = uVar25;
        thunk_FUN_0ee326a0(auStack_3d8._8_8_,uStack_3c0 - auStack_3d8._8_8_);
      }
      if (((ulong)auStack_3e8 & 1) != 0) {
        thunk_FUN_0ee326a0(auStack_3d8._0_8_,(ulong)auStack_3e8 & 0xfffffffffffffffe);
      }
    }
  }
  ppuStack_88 = (ulong **)0x0;
  uStack_80 = 0;
  ppuStack_98 = (ulong **)0x0;
  ppuStack_90 = (ulong **)0x0;
  uStack_78 = 0x3f800000;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0x3f800000;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  if (DAT_0f5ea4a0 == '\0') goto LAB_06ce6c2e;
LAB_06ce40f1:
  uStack_378 = (ulong **)CONCAT17(uStack_378._7_1_,0x53555f6e650a);
  (**(code **)(_DAT_0f5ea138 + 0xc0))(&piStack_298,&DAT_0f5ea138,&uStack_378);
  if (((ulong)uStack_378 & 1) != 0) {
    thunk_FUN_0ee326a0(piStack_368,(ulong)uStack_378 & 0xfffffffffffffffe);
  }
  if (piStack_298 != (int *)0x0) {
    if ((*(byte *)(piStack_298 + 8) & 1) == 0) {
      piStack_368 = *(int **)(piStack_298 + 0xc);
      uStack_378 = (ulong **)*(ulong *)(piStack_298 + 8);
      ppuStack_370 = (ulong **)*(undefined1 **)(piStack_298 + 10);
    }
    else {
      FUN_0412e5e0(&uStack_378,*(undefined8 *)(piStack_298 + 0xc),*(undefined8 *)(piStack_298 + 10))
      ;
    }
    if (((ulong)uStack_378 & 1) == 0) {
      if ((byte)uStack_378 >> 1 == 5) goto LAB_06ce41d6;
LAB_06ce41ba:
      bVar38 = true;
    }
    else {
      if (ppuStack_370 != (ulong **)0x5) goto LAB_06ce41ba;
LAB_06ce41d6:
      piVar26 = piStack_368;
      if (((ulong)uStack_378 & 1) == 0) {
        piVar26 = (int *)((long)&uStack_378 + 1);
      }
      bVar38 = (char)piVar26[1] != 'S' || *piVar26 != 0x555f6e65;
    }
    plVar16 = plStack_290;
    if (((ulong)uStack_378 & 1) != 0) {
      thunk_FUN_0ee326a0(piStack_368,(ulong)uStack_378 & 0xfffffffffffffffe);
      plVar16 = plStack_290;
    }
    plStack_290 = plVar16;
    if (bVar38) {
      piStack_298 = (int *)0x0;
      plStack_290 = (long *)0x0;
      if (plVar16 != (long *)0x0) {
        LOCK();
        plVar33 = plVar16 + 1;
        lVar37 = *plVar33;
        *plVar33 = *plVar33 + -1;
        UNLOCK();
        if (lVar37 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
          func_0x0412c2d0(plVar16);
        }
      }
    }
  }
  puStack_118 = (undefined8 *)0x0;
  uStack_110 = 0;
  puStack_128 = (ulong *)0x0;
  lStack_120 = 0;
  uStack_108 = 0x3f800000;
  if ((long *)plStack_168[4] == (long *)0x0) {
    FUN_04891200();
LAB_06ce6c7e:
    func_0x06cf3200();
    goto LAB_06ce6c83;
  }
  plVar16 = (long *)(**(code **)(*(long *)plStack_168[4] + 0x30))();
  if ((plVar16 == (long *)0x0) &&
     (cVar12 = func_0x0eeddcf0(&UNK_0120b51f,&UNK_0120767b,0x7b,&UNK_012f4cdb,&UNK_011a08b8),
     cVar12 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  (**(code **)(*plVar16 + 0xc48))(&uStack_378,plVar16);
  func_0x0ca16230(&pcStack_140,&uStack_378);
  if (ppuStack_370 != (ulong **)0x0) {
    func_0x0412c2d0();
  }
  pcVar9 = pcStack_140;
  if ((pcStack_140 == (char *)0x0) || (*pcStack_140 == '\0')) {
    cVar12 = func_0x0eeddcf0(&UNK_011a090a,&UNK_01394839,0x7e,&UNK_012f4cdb,&UNK_011a08b8);
    if (cVar12 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((pcVar9 == (char *)0x0) &&
       (cVar12 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_0125b301),
       cVar12 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  if ((*pcVar9 == '\0') &&
     (cVar12 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_0125b301),
     cVar12 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  lVar37 = lStack_130;
  (**(code **)(*plVar16 + 0xc48))(&uStack_c8,plVar16);
  puVar22 = puStack_c0;
  auStack_100[0] = 0;
  uStack_f8 = 0;
  lStack_f0 = 0;
  uStack_378 = (ulong **)uStack_c8;
  ppuStack_370 = (ulong **)puStack_c0;
  if (puStack_c0 == (undefined1 *)0x0) {
    func_0x0ca11350(auStack_100,&uStack_378);
  }
  else {
    LOCK();
    *(long *)(puStack_c0 + 0x10) = *(long *)(puStack_c0 + 0x10) + 1;
    UNLOCK();
    func_0x0ca11350(auStack_100,&uStack_378);
    func_0x0412c2d0(puVar22);
  }
  if (puStack_c0 != (undefined1 *)0x0) {
    func_0x0412c2d0();
  }
  auStack_1d8 = ZEXT816(0);
  puStack_1e8 = (ulong *)0x0;
  puStack_1e0 = (ulong *)0x0;
  fStack_1c8 = 1.0;
  lStack_1c0 = 0;
  uStack_1b8 = 0;
  lStack_1b0 = 0;
  uStack_1a8 = 0;
  fStack_1a0 = 1.0;
  puStack_198 = (ulong *)0x0;
  puStack_190 = (ulong *)0x0;
  puStack_188 = (ulong *)0x0;
  fVar39 = (float)(ulong)((*(long *)(lVar37 + 0x20) - *(long *)(lVar37 + 0x18) >> 4) *
                         0x2e8ba2e8ba2e8ba3);
  uVar17 = (ulong)fVar39;
  puVar32 = (ulong *)((long)(fVar39 - _DAT_01198778) & (long)uVar17 >> 0x3f | uVar17);
  puVar14 = (ulong *)0x2;
  if (puVar32 == (ulong *)0x1) {
LAB_06ce4529:
    func_0x06124c40(&puStack_1e8,puVar14);
  }
  else {
    if (((ulong)puVar32 & (long)puVar32 - 1U) != 0) {
      puVar32 = (ulong *)func_0x0412c3f0(puVar32,2);
      bVar38 = puVar32 < puStack_1e0;
      puVar14 = puVar32;
      if (puVar32 <= puStack_1e0) goto LAB_06ce462c;
      goto LAB_06ce4529;
    }
    bVar38 = false;
    puVar14 = puVar32;
    if (puVar32 != (ulong *)0x0) goto LAB_06ce4529;
LAB_06ce462c:
    puVar35 = puStack_1e0;
    if (bVar38) {
      fVar39 = (float)ceilf((float)(ulong)auStack_1d8._8_8_ / fStack_1c8);
      puVar14 = (ulong *)((long)(fVar39 - _DAT_01198778) & (long)fVar39 >> 0x3f | (long)fVar39);
      if ((puVar35 < (ulong *)0x3) ||
         (uVar17 = (long)puVar35 - ((ulong)puVar35 >> 1 & 0x5555555555555555),
         uVar17 = (uVar17 >> 2 & 0x3333333333333333) + (uVar17 & 0x3333333333333333),
         1 < (byte)(((uVar17 >> 4) + uVar17 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
        puVar14 = (ulong *)func_0x0412c3f0(puVar14);
        if (puVar14 < puVar32) {
          puVar14 = puVar32;
        }
      }
      else {
        if ((ulong *)0x1 < puVar14) {
          lVar18 = 0x3f;
          if ((long)puVar14 - 1U != 0) {
            for (; (long)puVar14 - 1U >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          puVar14 = (ulong *)(1L << (-((byte)lVar18 ^ 0x3f) & 0x3f));
        }
        if (puVar14 < puVar32) {
          puVar14 = puVar32;
        }
      }
      if (puVar14 < puVar35) goto LAB_06ce4529;
    }
  }
  fVar39 = (float)ceilf((float)(ulong)((*(long *)(lVar37 + 0x20) - *(long *)(lVar37 + 0x18) >> 4) *
                                      0x2e8ba2e8ba2e8ba3) / fStack_1a0);
  uVar15 = (long)(fVar39 - _DAT_01198778) & (long)fVar39 >> 0x3f | (long)fVar39;
  uVar17 = 2;
  if ((uVar15 == 1) || (uVar17 = uVar15, (uVar15 & uVar15 - 1) == 0)) {
    bVar38 = uVar17 < uStack_1b8;
    if (uVar17 <= uStack_1b8) goto LAB_06ce4669;
LAB_06ce45d0:
    func_0x06124c40(&lStack_1c0,uVar17);
  }
  else {
    uVar17 = func_0x0412c3f0();
    bVar38 = uVar17 < uStack_1b8;
    if (uStack_1b8 < uVar17) goto LAB_06ce45d0;
LAB_06ce4669:
    uVar15 = uStack_1b8;
    if (bVar38) {
      fVar39 = (float)ceilf((float)uStack_1a8 / fStack_1a0);
      uVar28 = (long)(fVar39 - _DAT_01198778) & (long)fVar39 >> 0x3f | (long)fVar39;
      if ((uVar15 < 3) ||
         (uVar29 = uVar15 - (uVar15 >> 1 & 0x5555555555555555),
         uVar29 = (uVar29 >> 2 & 0x3333333333333333) + (uVar29 & 0x3333333333333333),
         1 < (byte)(((uVar29 >> 4) + uVar29 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
        uVar28 = func_0x0412c3f0(uVar28);
      }
      else if (1 < uVar28) {
        lVar18 = 0x3f;
        if (uVar28 - 1 != 0) {
          for (; uVar28 - 1 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        uVar28 = 1L << (-((byte)lVar18 ^ 0x3f) & 0x3f);
      }
      if (uVar17 <= uVar28) {
        uVar17 = uVar28;
      }
      if (uVar17 < uVar15) goto LAB_06ce45d0;
    }
  }
  puVar35 = puStack_188;
  puVar32 = puStack_190;
  puVar14 = puStack_198;
  lVar18 = *(long *)(lVar37 + 0x20) - *(long *)(lVar37 + 0x18) >> 4;
  uVar17 = lVar18 * 0x2e8ba2e8ba2e8ba3;
  lVar27 = (long)puStack_188 - (long)puStack_198 >> 3;
  if ((ulong)(lVar27 * 0x6db6db6db6db6db7) <= uVar17 && uVar17 + lVar27 * -0x6db6db6db6db6db7 != 0)
  {
    if (0x492492492492492 < uVar17) goto LAB_06ce6c7e;
    puVar19 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))
                                 (&DAT_0f5463b0,lVar18 * 0x2e8ba2e8ba2e8ba8);
    if (puVar19 == (ulong *)0x0) {
      func_0x0eec74c0(lVar18 * 0x2e8ba2e8ba2e8ba8,0);
    }
    puVar36 = (ulong *)(((long)puVar32 - (long)puVar14) + (long)puVar19);
    puVar30 = puVar14;
    if (puVar14 != puVar32) {
      lVar27 = 0;
      do {
        *(undefined8 *)((long)puVar19 + lVar27 + 0x10) =
             *(undefined8 *)((long)puVar14 + lVar27 + 0x10);
        uVar25 = *(undefined8 *)((byte *)((long)puVar14 + lVar27) + 8);
        *(undefined8 *)((long)puVar19 + lVar27) = *(undefined8 *)((long)puVar14 + lVar27);
        *(undefined8 *)((byte *)((long)puVar19 + lVar27) + 8) = uVar25;
        pbVar2 = (byte *)((long)puVar14 + lVar27);
        pbVar2[0] = 0;
        pbVar2[1] = 0;
        pbVar2[2] = 0;
        pbVar2[3] = 0;
        pbVar2[4] = 0;
        pbVar2[5] = 0;
        pbVar2[6] = 0;
        pbVar2[7] = 0;
        pbVar2[8] = 0;
        pbVar2[9] = 0;
        pbVar2[10] = 0;
        pbVar2[0xb] = 0;
        pbVar2[0xc] = 0;
        pbVar2[0xd] = 0;
        pbVar2[0xe] = 0;
        pbVar2[0xf] = 0;
        pbVar2 = (byte *)((long)puVar14 + lVar27 + 0x10);
        pbVar2[0] = 0;
        pbVar2[1] = 0;
        pbVar2[2] = 0;
        pbVar2[3] = 0;
        pbVar2[4] = 0;
        pbVar2[5] = 0;
        pbVar2[6] = 0;
        pbVar2[7] = 0;
        *(undefined8 *)((long)puVar19 + lVar27 + 0x18) =
             *(undefined8 *)((long)puVar14 + lVar27 + 0x18);
        *(undefined8 *)((long)puVar19 + lVar27 + 0x30) =
             *(undefined8 *)((long)puVar14 + lVar27 + 0x30);
        pbVar2 = (byte *)((long)puVar14 + lVar27 + 0x20);
        uVar25 = *(undefined8 *)(pbVar2 + 8);
        pbVar4 = (byte *)((long)puVar19 + lVar27 + 0x20);
        *(undefined8 *)pbVar4 = *(undefined8 *)pbVar2;
        *(undefined8 *)(pbVar4 + 8) = uVar25;
        pbVar2 = (byte *)((long)puVar14 + lVar27 + 0x20);
        pbVar2[0] = 0;
        pbVar2[1] = 0;
        pbVar2[2] = 0;
        pbVar2[3] = 0;
        pbVar2[4] = 0;
        pbVar2[5] = 0;
        pbVar2[6] = 0;
        pbVar2[7] = 0;
        pbVar2[8] = 0;
        pbVar2[9] = 0;
        pbVar2[10] = 0;
        pbVar2[0xb] = 0;
        pbVar2[0xc] = 0;
        pbVar2[0xd] = 0;
        pbVar2[0xe] = 0;
        pbVar2[0xf] = 0;
        pbVar2 = (byte *)((long)puVar14 + lVar27 + 0x30);
        pbVar2[0] = 0;
        pbVar2[1] = 0;
        pbVar2[2] = 0;
        pbVar2[3] = 0;
        pbVar2[4] = 0;
        pbVar2[5] = 0;
        pbVar2[6] = 0;
        pbVar2[7] = 0;
        lVar21 = lVar27 + 0x38;
        lVar27 = lVar27 + 0x38;
      } while ((ulong *)((long)puVar14 + lVar21) != puVar32);
      do {
        if ((puVar14[4] & 1) == 0) {
          bVar40 = (byte)*puVar14;
        }
        else {
          thunk_FUN_0ee326a0(puVar14[6],puVar14[4] & 0xfffffffffffffffe);
          bVar40 = (byte)*puVar14;
        }
        if ((bVar40 & 1) != 0) {
          thunk_FUN_0ee326a0(puVar14[2],*puVar14 & 0xfffffffffffffffe);
        }
        puVar14 = puVar14 + 7;
        puVar30 = puStack_198;
        puVar35 = puStack_188;
      } while (puVar14 != puVar32);
    }
    puStack_198 = puVar19;
    puStack_190 = puVar36;
    puStack_188 = puVar19 + lVar18 * 0x5d1745d1745d175;
    if (puVar30 != (ulong *)0x0) {
      thunk_FUN_0ee326a0(puVar30,(long)puVar35 - (long)puVar30);
    }
  }
  auStack_278 = ZEXT816(0);
  puStack_288 = (ulong *)0x0;
  puStack_280 = (ulong *)0x0;
  fStack_268 = 1.0;
  uStack_260 = 0;
  puStack_258 = (ulong *)0x0;
  ppuStack_250 = (ulong **)0x0;
  uStack_248 = 0;
  fStack_240 = 1.0;
  puStack_238 = (ulong *)0x0;
  puStack_230 = (ulong *)0x0;
  puStack_228 = (ulong *)0x0;
  fVar39 = (float)(ulong)((*(long *)(lVar37 + 0x20) - *(long *)(lVar37 + 0x18) >> 4) *
                         0x2e8ba2e8ba2e8ba3);
  uVar17 = (ulong)fVar39;
  puVar32 = (ulong *)((long)(fVar39 - _DAT_01198778) & (long)uVar17 >> 0x3f | uVar17);
  puVar14 = (ulong *)0x2;
  if (puVar32 == (ulong *)0x1) {
LAB_06ce49cc:
    func_0x06124c40(&puStack_288,puVar14);
  }
  else {
    if (((ulong)puVar32 & (long)puVar32 - 1U) != 0) {
      puVar32 = (ulong *)func_0x0412c3f0(puVar32,2);
      bVar38 = puVar32 < puStack_280;
      puVar14 = puVar32;
      if (puVar32 <= puStack_280) goto LAB_06ce4a9c;
      goto LAB_06ce49cc;
    }
    bVar38 = false;
    puVar14 = puVar32;
    if (puVar32 != (ulong *)0x0) goto LAB_06ce49cc;
LAB_06ce4a9c:
    puVar35 = puStack_280;
    if (bVar38) {
      fVar39 = (float)ceilf((float)(ulong)auStack_278._8_8_ / fStack_268);
      puVar14 = (ulong *)((long)(fVar39 - _DAT_01198778) & (long)fVar39 >> 0x3f | (long)fVar39);
      if ((puVar35 < (ulong *)0x3) ||
         (uVar17 = (long)puVar35 - ((ulong)puVar35 >> 1 & 0x5555555555555555),
         uVar17 = (uVar17 >> 2 & 0x3333333333333333) + (uVar17 & 0x3333333333333333),
         1 < (byte)(((uVar17 >> 4) + uVar17 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
        puVar14 = (ulong *)func_0x0412c3f0(puVar14);
        if (puVar14 < puVar32) {
          puVar14 = puVar32;
        }
      }
      else {
        if ((ulong *)0x1 < puVar14) {
          lVar18 = 0x3f;
          if ((long)puVar14 - 1U != 0) {
            for (; (long)puVar14 - 1U >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          puVar14 = (ulong *)(1L << (-((byte)lVar18 ^ 0x3f) & 0x3f));
        }
        if (puVar14 < puVar32) {
          puVar14 = puVar32;
        }
      }
      if (puVar14 < puVar35) goto LAB_06ce49cc;
    }
  }
  fVar39 = (float)ceilf((float)(ulong)((*(long *)(lVar37 + 0x20) - *(long *)(lVar37 + 0x18) >> 4) *
                                      0x2e8ba2e8ba2e8ba3) / fStack_240);
  puVar32 = (ulong *)((long)(fVar39 - _DAT_01198778) & (long)fVar39 >> 0x3f | (long)fVar39);
  puVar14 = (ulong *)0x2;
  if ((puVar32 == (ulong *)0x1) || (puVar14 = puVar32, ((ulong)puVar32 & (long)puVar32 - 1U) == 0))
  {
    bVar38 = puVar14 < puStack_258;
    if (puVar14 <= puStack_258) goto LAB_06ce4ad5;
LAB_06ce4a6b:
    func_0x06124c40(&uStack_260,puVar14);
  }
  else {
    puVar14 = (ulong *)func_0x0412c3f0();
    bVar38 = puVar14 < puStack_258;
    if (puStack_258 < puVar14) goto LAB_06ce4a6b;
LAB_06ce4ad5:
    puVar32 = puStack_258;
    if (bVar38) {
      fVar39 = (float)ceilf((float)uStack_248 / fStack_240);
      puVar35 = (ulong *)((long)(fVar39 - _DAT_01198778) & (long)fVar39 >> 0x3f | (long)fVar39);
      if ((puVar32 < (ulong *)0x3) ||
         (uVar17 = (long)puVar32 - ((ulong)puVar32 >> 1 & 0x5555555555555555),
         uVar17 = (uVar17 >> 2 & 0x3333333333333333) + (uVar17 & 0x3333333333333333),
         1 < (byte)(((uVar17 >> 4) + uVar17 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
        puVar35 = (ulong *)func_0x0412c3f0(puVar35);
      }
      else if ((ulong *)0x1 < puVar35) {
        lVar18 = 0x3f;
        if ((long)puVar35 - 1U != 0) {
          for (; (long)puVar35 - 1U >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        puVar35 = (ulong *)(1L << (-((byte)lVar18 ^ 0x3f) & 0x3f));
      }
      if (puVar14 <= puVar35) {
        puVar14 = puVar35;
      }
      if (puVar14 < puVar32) goto LAB_06ce4a6b;
    }
  }
  puVar35 = puStack_228;
  puVar32 = puStack_230;
  puVar14 = puStack_238;
  lVar18 = *(long *)(lVar37 + 0x20) - *(long *)(lVar37 + 0x18) >> 4;
  uVar17 = lVar18 * 0x2e8ba2e8ba2e8ba3;
  lVar27 = (long)puStack_228 - (long)puStack_238 >> 3;
  if ((ulong)(lVar27 * 0x6db6db6db6db6db7) <= uVar17 && uVar17 + lVar27 * -0x6db6db6db6db6db7 != 0)
  {
    if (0x492492492492492 < uVar17) {
LAB_06ce6c83:
      uVar25 = func_0x06cf3210();
      func_0x041084d6(&DAT_0f5ea4a0);
      do {
        func_0x06ce3290(&ppuStack_98);
        func_0x06ce35b0(auStack_218);
        uVar25 = func_0x0eee2d70(uVar25);
        uVar25 = FUN_04882e20(uVar25);
        func_0x06ce3290(&puStack_288);
        func_0x06ce3420(&puStack_1e8);
        func_0x0ca115f0(auStack_100);
        func_0x04a2c540(&pcStack_140);
        func_0x048e5c70(&puStack_128);
        func_0x0488b480(&piStack_298);
      } while( true );
    }
    puVar19 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))
                                 (&DAT_0f5463b0,lVar18 * 0x2e8ba2e8ba2e8ba8);
    if (puVar19 == (ulong *)0x0) {
      func_0x0eec74c0(lVar18 * 0x2e8ba2e8ba2e8ba8,0);
    }
    puVar36 = (ulong *)(((long)puVar32 - (long)puVar14) + (long)puVar19);
    puVar30 = puVar14;
    if (puVar14 != puVar32) {
      lVar27 = 0;
      do {
        *(undefined8 *)((long)puVar19 + lVar27 + 0x10) =
             *(undefined8 *)((long)puVar14 + lVar27 + 0x10);
        uVar25 = *(undefined8 *)((byte *)((long)puVar14 + lVar27) + 8);
        *(undefined8 *)((long)puVar19 + lVar27) = *(undefined8 *)((long)puVar14 + lVar27);
        *(undefined8 *)((byte *)((long)puVar19 + lVar27) + 8) = uVar25;
        pbVar2 = (byte *)((long)puVar14 + lVar27);
        pbVar2[0] = 0;
        pbVar2[1] = 0;
        pbVar2[2] = 0;
        pbVar2[3] = 0;
        pbVar2[4] = 0;
        pbVar2[5] = 0;
        pbVar2[6] = 0;
        pbVar2[7] = 0;
        pbVar2[8] = 0;
        pbVar2[9] = 0;
        pbVar2[10] = 0;
        pbVar2[0xb] = 0;
        pbVar2[0xc] = 0;
        pbVar2[0xd] = 0;
        pbVar2[0xe] = 0;
        pbVar2[0xf] = 0;
        pbVar2 = (byte *)((long)puVar14 + lVar27 + 0x10);
        pbVar2[0] = 0;
        pbVar2[1] = 0;
        pbVar2[2] = 0;
        pbVar2[3] = 0;
        pbVar2[4] = 0;
        pbVar2[5] = 0;
        pbVar2[6] = 0;
        pbVar2[7] = 0;
        *(undefined8 *)((long)puVar19 + lVar27 + 0x18) =
             *(undefined8 *)((long)puVar14 + lVar27 + 0x18);
        *(undefined8 *)((long)puVar19 + lVar27 + 0x30) =
             *(undefined8 *)((long)puVar14 + lVar27 + 0x30);
        pbVar2 = (byte *)((long)puVar14 + lVar27 + 0x20);
        uVar25 = *(undefined8 *)(pbVar2 + 8);
        pbVar4 = (byte *)((long)puVar19 + lVar27 + 0x20);
        *(undefined8 *)pbVar4 = *(undefined8 *)pbVar2;
        *(undefined8 *)(pbVar4 + 8) = uVar25;
        pbVar2 = (byte *)((long)puVar14 + lVar27 + 0x20);
        pbVar2[0] = 0;
        pbVar2[1] = 0;
        pbVar2[2] = 0;
        pbVar2[3] = 0;
        pbVar2[4] = 0;
        pbVar2[5] = 0;
        pbVar2[6] = 0;
        pbVar2[7] = 0;
        pbVar2[8] = 0;
        pbVar2[9] = 0;
        pbVar2[10] = 0;
        pbVar2[0xb] = 0;
        pbVar2[0xc] = 0;
        pbVar2[0xd] = 0;
        pbVar2[0xe] = 0;
        pbVar2[0xf] = 0;
        pbVar2 = (byte *)((long)puVar14 + lVar27 + 0x30);
        pbVar2[0] = 0;
        pbVar2[1] = 0;
        pbVar2[2] = 0;
        pbVar2[3] = 0;
        pbVar2[4] = 0;
        pbVar2[5] = 0;
        pbVar2[6] = 0;
        pbVar2[7] = 0;
        lVar21 = lVar27 + 0x38;
        lVar27 = lVar27 + 0x38;
      } while ((ulong *)((long)puVar14 + lVar21) != puVar32);
      do {
        if ((puVar14[4] & 1) == 0) {
          bVar40 = (byte)*puVar14;
        }
        else {
          thunk_FUN_0ee326a0(puVar14[6],puVar14[4] & 0xfffffffffffffffe);
          bVar40 = (byte)*puVar14;
        }
        if ((bVar40 & 1) != 0) {
          thunk_FUN_0ee326a0(puVar14[2],*puVar14 & 0xfffffffffffffffe);
        }
        puVar14 = puVar14 + 7;
        puVar30 = puStack_238;
        puVar35 = puStack_228;
      } while (puVar14 != puVar32);
    }
    puStack_238 = puVar19;
    puStack_230 = puVar36;
    puStack_228 = puVar19 + lVar18 * 0x5d1745d1745d175;
    if (puVar30 != (ulong *)0x0) {
      thunk_FUN_0ee326a0(puVar30,(long)puVar35 - (long)puVar30);
    }
  }
  puStack_160 = &UNK_0f47e0b0;
  puStack_158 = auStack_150;
  auStack_150 = ZEXT816(0);
  lVar18 = *(long *)(lVar37 + 0x18);
  lVar37 = *(long *)(lVar37 + 0x20);
  lVar27 = lVar37;
  if (lVar18 != lVar37) {
LAB_06ce4dc0:
    lStack_2e8 = lVar27;
    plVar16 = plStack_290;
    if ((*(long **)(lVar18 + 0x30) != (long *)0x0) &&
       (lVar27 = **(long **)(lVar18 + 0x30), lVar27 != 0)) {
      if (*(long *)(lVar27 + 0x138) == 0) {
LAB_06ce4e3f:
        plVar16 = *(long **)(lVar18 + 0x30);
      }
      else {
        lVar27 = *(long *)(lVar18 + 0x40);
        uVar25 = *(undefined8 *)(lVar27 + 0x68);
        piStack_a8 = piStack_298;
        plStack_a0 = plStack_290;
        if (plStack_290 != (long *)0x0) {
          LOCK();
          plStack_290[1] = plStack_290[1] + 1;
          UNLOCK();
        }
        func_0x06ce7170(&puStack_128,&puStack_1e8,lVar27,uVar25,&piStack_a8);
        if (plVar16 == (long *)0x0) goto LAB_06ce4e3f;
        LOCK();
        plVar33 = plVar16 + 1;
        lVar27 = *plVar33;
        *plVar33 = *plVar33 + -1;
        UNLOCK();
        if (lVar27 != 0) goto LAB_06ce4e3f;
        (**(code **)(*plVar16 + 0x10))(plVar16);
        func_0x0412c2d0(plVar16);
        plVar16 = *(long **)(lVar18 + 0x30);
      }
      if ((plVar16 == (long *)0x0) || (plVar16 = (long *)*plVar16, plVar16 == (long *)0x0))
      goto LAB_06ce4db0;
      puVar14 = (ulong *)(plVar16 + 0x16);
      bVar40 = *(byte *)(plVar16 + 0x16);
      if ((bVar40 & 1) == 0) {
        piStack_368 = (int *)plVar16[0x18];
        uStack_378 = (ulong **)*puVar14;
        ppuStack_370 = (ulong **)plVar16[0x17];
      }
      else {
        FUN_0412e5e0(&uStack_378,plVar16[0x18],plVar16[0x17]);
        bVar40 = (byte)*puVar14;
      }
      uStack_350 = 0;
      uStack_348 = 0;
      plStack_360 = (long *)0x0;
      uStack_358 = 0;
      lVar37 = (long)puStack_230 - (long)puStack_238;
      if ((bVar40 & 1) == 0) {
        auStack_3d8._0_8_ = plVar16[0x18];
        auStack_3e8 = (undefined1  [8])*puVar14;
        puStack_3e0 = (ulong *)plVar16[0x17];
      }
      else {
        FUN_0412e5e0(auStack_3e8,plVar16[0x18],plVar16[0x17]);
      }
      auStack_3d8._8_8_ = (lVar37 >> 3) * 0x6db6db6db6db6db7;
      puVar14 = (ulong *)((ulong)auStack_3e8 >> 1 & 0x7f);
      puVar22 = auStack_3e8 + 1;
      if (((ulong)auStack_3e8 & 1) != 0) {
        puVar14 = puStack_3e0;
        puVar22 = (undefined1 *)auStack_3d8._0_8_;
      }
      puVar32 = (ulong *)func_0x04883620(&uStack_2c8,puVar22,puVar14);
      puVar14 = puStack_258;
      auVar10 = auStack_3e8;
      if (puStack_258 != (ulong *)0x0) {
        uVar17 = (long)puStack_258 - ((ulong)puStack_258 >> 1 & 0x5555555555555555);
        uVar17 = (uVar17 >> 2 & 0x3333333333333333) + (uVar17 & 0x3333333333333333);
        uVar17 = ((uVar17 >> 4) + uVar17 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar17 >> 0x38 < 2) {
          puVar35 = (ulong *)((long)puStack_258 - 1U & (ulong)puVar32);
        }
        else {
          puVar35 = puVar32;
          if (puStack_258 <= puVar32) {
            if (((ulong)puVar32 | (ulong)puStack_258) >> 0x20 == 0) {
              puVar35 = (ulong *)(((ulong)puVar32 & 0xffffffff) % ((ulong)puStack_258 & 0xffffffff))
              ;
            }
            else {
              puVar35 = (ulong *)((ulong)puVar32 % (ulong)puStack_258);
            }
          }
        }
        plVar33 = *(long **)(uStack_260 + (long)puVar35 * 8);
        puStack_2e0 = puVar35;
        if ((plVar33 != (long *)0x0) && (plVar33 = (long *)*plVar33, plVar33 != (long *)0x0)) {
          if (((ulong)auStack_3e8 & 1) == 0) {
            puStack_178 = auStack_3e8 + 1;
            puVar19 = (ulong *)((ulong)auStack_3e8 >> 1 & 0x7f);
          }
          else {
            puStack_178 = (undefined1 *)auStack_3d8._0_8_;
            puVar19 = puStack_3e0;
          }
          if ((byte)(uVar17 >> 0x38) < 2) {
            uVar17 = (long)puStack_258 - 1;
            uStack_b8 = uVar17;
            do {
              if ((ulong *)plVar33[1] == puVar32) {
                bVar40 = *(byte *)(plVar33 + 2);
                if ((bVar40 & 1) == 0) {
                  puVar30 = (ulong *)(ulong)(bVar40 >> 1);
                }
                else {
                  puVar30 = (ulong *)plVar33[3];
                }
                if (puVar30 == puVar19) {
                  if ((bVar40 & 1) == 0) {
                    lVar37 = (long)plVar33 + 0x11;
                  }
                  else {
                    lVar37 = plVar33[4];
                  }
                  iVar13 = func_0x0eee3000(lVar37,puStack_178,puVar19);
                  uVar17 = uStack_b8;
                  puVar35 = puStack_2e0;
                  if (iVar13 == 0) goto LAB_06ce51a7;
                }
              }
              else if ((ulong *)((ulong)plVar33[1] & uVar17) != puVar35) break;
              plVar33 = (long *)*plVar33;
            } while (plVar33 != (long *)0x0);
          }
          else {
            do {
              puVar30 = (ulong *)plVar33[1];
              if (puVar30 == puVar32) {
                bVar40 = *(byte *)(plVar33 + 2);
                if ((bVar40 & 1) == 0) {
                  puVar30 = (ulong *)(ulong)(bVar40 >> 1);
                }
                else {
                  puVar30 = (ulong *)plVar33[3];
                }
                if (puVar30 == puVar19) {
                  if ((bVar40 & 1) == 0) {
                    lVar37 = (long)plVar33 + 0x11;
                  }
                  else {
                    lVar37 = plVar33[4];
                  }
                  iVar13 = func_0x0eee3000(lVar37,puStack_178,puVar19);
                  puVar35 = puStack_2e0;
                  if (iVar13 == 0) goto LAB_06ce51a7;
                }
              }
              else {
                if (puVar14 <= puVar30) {
                  if (((ulong)puVar30 | (ulong)puVar14) >> 0x20 == 0) {
                    puVar30 = (ulong *)(((ulong)puVar30 & 0xffffffff) %
                                       ((ulong)puVar14 & 0xffffffff));
                  }
                  else {
                    puVar30 = (ulong *)((ulong)puVar30 % (ulong)puVar14);
                  }
                }
                if (puVar30 != puVar35) break;
              }
              plVar33 = (long *)*plVar33;
            } while (plVar33 != (long *)0x0);
          }
        }
      }
      ppuVar20 = (ulong **)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
      if (ppuVar20 == (ulong **)0x0) {
        func_0x0eec74c0(0x30,0);
      }
      auVar54 = in_XMM2._4_12_;
      puStack_2c0 = &uStack_260;
      lStack_2b8 = 0;
      *ppuVar20 = (ulong *)0x0;
      ppuVar20[1] = puVar32;
      uStack_2c8 = ppuVar20;
      if (((ulong)auStack_3e8 & 1) == 0) {
        ppuVar20[4] = (ulong *)auStack_3d8._0_8_;
        ppuVar20[2] = (ulong *)auStack_3e8;
        ppuVar20[3] = puStack_3e0;
      }
      else {
        FUN_0412e5e0(ppuVar20 + 2,auStack_3d8._0_8_,puStack_3e0);
        auVar54 = in_XMM2._4_12_;
      }
      ppuVar20[5] = (ulong *)auStack_3d8._8_8_;
      lStack_2b8 = CONCAT71(lStack_2b8._1_7_,1);
      if ((long)puVar14 < 0) {
        in_XMM2._0_4_ = (float)puVar14;
        in_XMM2._4_12_ = auVar54;
        if (puVar14 != (ulong *)0x0) goto LAB_06ce52c1;
LAB_06ce52d2:
        uVar17 = 1;
        if ((ulong *)0x2 < puVar14) {
          uVar17 = (ulong)(((ulong)puVar14 & (long)puVar14 - 1U) != 0);
        }
        puVar35 = (ulong *)((long)puVar14 * 2 | uVar17);
        fVar39 = (float)ceilf((float)(uStack_248 + 1) / fStack_240);
        puVar14 = (ulong *)((long)(fVar39 - _DAT_01198778) & (long)fVar39 >> 0x3f | (long)fVar39);
        if (puVar14 < puVar35) {
          puVar14 = puVar35;
        }
        puVar35 = (ulong *)0x2;
        if ((puVar14 == (ulong *)0x1) ||
           (puVar35 = puVar14, ((ulong)puVar14 & (long)puVar14 - 1U) == 0)) {
          bVar38 = puVar35 < puStack_258;
          if (puVar35 <= puStack_258) goto LAB_06ce536c;
LAB_06ce5342:
          func_0x06124c40(&uStack_260,puVar35);
        }
        else {
          puVar35 = (ulong *)func_0x0412c3f0();
          bVar38 = puVar35 < puStack_258;
          if (puStack_258 < puVar35) goto LAB_06ce5342;
LAB_06ce536c:
          puVar14 = puStack_258;
          if (bVar38) {
            fVar39 = (float)ceilf((float)uStack_248 / fStack_240);
            puVar19 = (ulong *)((long)(fVar39 - _DAT_01198778) & (long)fVar39 >> 0x3f | (long)fVar39
                               );
            if ((puVar14 < (ulong *)0x3) ||
               (uVar17 = (long)puVar14 - ((ulong)puVar14 >> 1 & 0x5555555555555555),
               uVar17 = (uVar17 >> 2 & 0x3333333333333333) + (uVar17 & 0x3333333333333333),
               1 < (byte)(((uVar17 >> 4) + uVar17 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))
               ) {
              puVar19 = (ulong *)func_0x0412c3f0(puVar19);
            }
            else if ((ulong *)0x1 < puVar19) {
              lVar37 = 0x3f;
              if ((long)puVar19 - 1U != 0) {
                for (; (long)puVar19 - 1U >> lVar37 == 0; lVar37 = lVar37 + -1) {
                }
              }
              puVar19 = (ulong *)(1L << (-((byte)lVar37 ^ 0x3f) & 0x3f));
            }
            if (puVar35 <= puVar19) {
              puVar35 = puVar19;
            }
            if (puVar35 < puVar14) goto LAB_06ce5342;
          }
        }
        puVar14 = puStack_258;
        if (((ulong)puStack_258 & (long)puStack_258 - 1U) == 0) {
          puVar35 = (ulong *)((ulong)puVar32 & (long)puStack_258 - 1U);
        }
        else {
          puVar35 = puVar32;
          if (puStack_258 <= puVar32) {
            if (((ulong)puVar32 | (ulong)puStack_258) >> 0x20 == 0) {
              puVar35 = (ulong *)(((ulong)puVar32 & 0xffffffff) % ((ulong)puStack_258 & 0xffffffff))
              ;
            }
            else {
              puVar35 = (ulong *)((ulong)puVar32 % (ulong)puStack_258);
            }
          }
        }
      }
      else {
        in_XMM2._0_4_ = (float)(long)puVar14;
        in_XMM2._4_12_ = auVar54;
        if (puVar14 == (ulong *)0x0) goto LAB_06ce52d2;
LAB_06ce52c1:
        in_XMM2._0_4_ = in_XMM2._0_4_ * fStack_240;
        puVar35 = puStack_2e0;
        if (in_XMM2._0_4_ < (float)(uStack_248 + 1)) goto LAB_06ce52d2;
      }
      plVar33 = *(long **)(uStack_260 + (long)puVar35 * 8);
      if (plVar33 == (long *)0x0) {
        *uStack_2c8 = (ulong *)ppuStack_250;
        ppuStack_250 = uStack_2c8;
        *(ulong ****)(uStack_260 + (long)puVar35 * 8) = &ppuStack_250;
        if (*uStack_2c8 != (ulong *)0x0) {
          puVar32 = (ulong *)(*uStack_2c8)[1];
          if (((ulong)puVar14 & (long)puVar14 - 1U) == 0) {
            *(ulong ***)(uStack_260 + ((ulong)puVar32 & (long)puVar14 - 1U) * 8) = uStack_2c8;
          }
          else {
            if (puVar14 <= puVar32) {
              if (((ulong)puVar32 | (ulong)puVar14) >> 0x20 == 0) {
                *(ulong ***)
                 (uStack_260 + (((ulong)puVar32 & 0xffffffff) % ((ulong)puVar14 & 0xffffffff)) * 8)
                     = uStack_2c8;
                goto LAB_06ce54d5;
              }
              puVar32 = (ulong *)((ulong)puVar32 % (ulong)puVar14);
            }
            *(ulong ***)(uStack_260 + (long)puVar32 * 8) = uStack_2c8;
          }
        }
      }
      else {
        *uStack_2c8 = (ulong *)*plVar33;
        *plVar33 = (long)uStack_2c8;
      }
LAB_06ce54d5:
      uStack_248 = uStack_248 + 1;
      bVar7 = true;
      bVar38 = true;
      lVar37 = lStack_2e8;
      auVar10 = auStack_3e8;
      goto joined_r0x06ce51b4;
    }
    goto LAB_06ce4db0;
  }
LAB_06ce5efa:
  uStack_378 = &puStack_128;
  ppuStack_370 = &puStack_1e8;
  piStack_368 = piStack_298;
  plStack_360 = plStack_290;
  if (plStack_290 != (long *)0x0) {
    LOCK();
    plStack_290[1] = plStack_290[1] + 1;
    UNLOCK();
  }
  func_0x0cc3eef0(0xf6ff9e0,&UNK_06cf34e0,&uStack_378);
  plVar16 = plStack_360;
  if (plStack_360 != (long *)0x0) {
    LOCK();
    plVar33 = plStack_360 + 1;
    lVar37 = *plVar33;
    *plVar33 = *plVar33 + -1;
    UNLOCK();
    if (lVar37 == 0) {
      (**(code **)(*plStack_360 + 0x10))(plStack_360);
      func_0x0412c2d0(plVar16);
    }
  }
  puVar23 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x160);
  if (puVar23 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x160,0);
  }
  uStack_348 = uStack_1b8;
  uStack_350 = lStack_1c0;
  ppuStack_370 = (ulong **)puStack_1e0;
  uStack_378 = (ulong **)puStack_1e8;
  uVar17 = auStack_218._8_8_;
  puVar14 = (ulong *)auStack_218._0_8_;
  puStack_3b8 = puStack_258;
  uStack_3c0 = uStack_260;
  puStack_3e0 = puStack_280;
  auStack_3e8 = (undefined1  [8])puStack_288;
  auStack_218 = ZEXT816(0);
  puStack_310 = puVar14;
  uStack_308 = uVar17;
  puStack_300 = puStack_208;
  uStack_2f8 = uStack_200;
  fStack_2f0 = fStack_1f8;
  if (uStack_200 != 0) {
    uVar15 = puStack_208[1];
    if ((uVar17 & uVar17 - 1) == 0) {
      uVar15 = uVar15 & uVar17 - 1;
    }
    else if (uVar17 <= uVar15) {
      if ((uVar15 | uVar17) >> 0x20 == 0) {
        uVar15 = (uVar15 & 0xffffffff) % (uVar17 & 0xffffffff);
      }
      else {
        uVar15 = uVar15 % uVar17;
      }
    }
    *(ulong ***)((undefined8)puVar14 + uVar15) = &puStack_300;
    puStack_208 = (ulong *)0x0;
    uStack_200 = 0;
  }
  puStack_1e8 = (ulong *)0x0;
  puStack_1e0 = (ulong *)0x0;
  piStack_368 = (int *)auStack_1d8._0_8_;
  plStack_360 = (long *)auStack_1d8._8_8_;
  uStack_358 = CONCAT44(uStack_358._4_4_,fStack_1c8);
  if ((long *)auStack_1d8._8_8_ != (long *)0x0) {
    puVar32 = *(ulong **)(auStack_1d8._0_8_ + 8);
    if (((ulong)ppuStack_370 & (long)ppuStack_370 - 1U) == 0) {
      puVar32 = (ulong *)((ulong)puVar32 & (long)ppuStack_370 - 1U);
    }
    else if (ppuStack_370 <= puVar32) {
      if (((ulong)puVar32 | (ulong)ppuStack_370) >> 0x20 == 0) {
        puVar32 = (ulong *)(((ulong)puVar32 & 0xffffffff) % ((ulong)ppuStack_370 & 0xffffffff));
      }
      else {
        puVar32 = (ulong *)((ulong)puVar32 % (ulong)ppuStack_370);
      }
    }
    uStack_378[(long)puVar32] = (ulong *)&piStack_368;
    auStack_1d8 = ZEXT416(0);
  }
  lStack_1c0 = 0;
  uStack_1b8 = 0;
  lStack_340 = lStack_1b0;
  uStack_338 = uStack_1a8;
  fStack_330 = fStack_1a0;
  if (uStack_1a8 != 0) {
    uVar15 = *(ulong *)(lStack_1b0 + 8);
    if ((uStack_348 & uStack_348 - 1) == 0) {
      uVar15 = uVar15 & uStack_348 - 1;
    }
    else if (uStack_348 <= uVar15) {
      if ((uVar15 | uStack_348) >> 0x20 == 0) {
        uVar15 = (uVar15 & 0xffffffff) % (uStack_348 & 0xffffffff);
      }
      else {
        uVar15 = uVar15 % uStack_348;
      }
    }
    *(long **)(uStack_350 + uVar15 * 8) = &lStack_340;
    lStack_1b0 = 0;
    uStack_1a8 = 0;
  }
  puStack_328 = puStack_198;
  puStack_320 = puStack_190;
  puStack_318 = puStack_188;
  puStack_198 = (ulong *)0x0;
  puStack_190 = (ulong *)0x0;
  puStack_188 = (ulong *)0x0;
  puStack_288 = (ulong *)0x0;
  puStack_280 = (ulong *)0x0;
  auStack_3d8 = auStack_278;
  uStack_3c8 = CONCAT44(uStack_3c8._4_4_,fStack_268);
  if (auStack_278._8_8_ != 0) {
    puVar32 = *(ulong **)(auStack_278._0_8_ + 8);
    if (((ulong)puStack_3e0 & (long)puStack_3e0 - 1U) == 0) {
      puVar32 = (ulong *)((ulong)puVar32 & (long)puStack_3e0 - 1U);
    }
    else if (puStack_3e0 <= puVar32) {
      if (((ulong)puVar32 | (ulong)puStack_3e0) >> 0x20 == 0) {
        puVar32 = (ulong *)(((ulong)puVar32 & 0xffffffff) % ((ulong)puStack_3e0 & 0xffffffff));
      }
      else {
        puVar32 = (ulong *)((ulong)puVar32 % (ulong)puStack_3e0);
      }
    }
    *(undefined1 **)((long)auStack_3e8 + puVar32 * 8) = auStack_3d8;
    auStack_278 = ZEXT416(0);
  }
  uStack_260 = 0;
  puStack_258 = (ulong *)0x0;
  ppuStack_3b0 = ppuStack_250;
  uStack_3a8 = uStack_248;
  fStack_3a0 = fStack_240;
  if (uStack_248 != 0) {
    puVar32 = ppuStack_250[1];
    if (((ulong)puStack_3b8 & (long)puStack_3b8 - 1U) == 0) {
      puVar32 = (ulong *)((ulong)puVar32 & (long)puStack_3b8 - 1U);
    }
    else if (puStack_3b8 <= puVar32) {
      if (((ulong)puVar32 | (ulong)puStack_3b8) >> 0x20 == 0) {
        puVar32 = (ulong *)(((ulong)puVar32 & 0xffffffff) % ((ulong)puStack_3b8 & 0xffffffff));
      }
      else {
        puVar32 = (ulong *)((ulong)puVar32 % (ulong)puStack_3b8);
      }
    }
    *(ulong ****)(uStack_3c0 + (long)puVar32 * 8) = &ppuStack_3b0;
    ppuStack_250 = (ulong **)0x0;
    uStack_248 = 0;
  }
  puStack_398 = puStack_238;
  puStack_390 = puStack_230;
  puStack_388 = puStack_228;
  puStack_238 = (ulong *)0x0;
  puStack_230 = (ulong *)0x0;
  puStack_228 = (ulong *)0x0;
  plVar16 = (long *)plStack_168[4];
  if (plVar16 == (long *)0x0) {
    plStack_2a8 = (long *)0x0;
  }
  else if (plVar16 == plStack_168) {
    plStack_2a8 = &uStack_2c8;
    (**(code **)(*plVar16 + 0x18))();
    puVar14 = puStack_310;
    uVar17 = uStack_308;
  }
  else {
    plStack_168[4] = 0;
    plStack_2a8 = plVar16;
  }
  uVar29 = uStack_348;
  uVar28 = uStack_350;
  ppuVar20 = ppuStack_370;
  puVar19 = (ulong *)uStack_378;
  puVar35 = puStack_3b8;
  uVar15 = uStack_3c0;
  puVar32 = puStack_3e0;
  auVar10 = auStack_3e8;
  puStack_310 = (ulong *)0x0;
  *puVar23 = puVar14;
  puVar23[1] = uVar17;
  uStack_308 = 0;
  puVar23[2] = puStack_300;
  puVar23[3] = uStack_2f8;
  *(float *)(puVar23 + 4) = fStack_2f0;
  if (uStack_2f8 != 0) {
    uVar24 = puStack_300[1];
    if ((uVar17 & uVar17 - 1) == 0) {
      uVar24 = uVar24 & uVar17 - 1;
    }
    else if (uVar17 <= uVar24) {
      if ((uVar24 | uVar17) >> 0x20 == 0) {
        uVar24 = (uVar24 & 0xffffffff) % (uVar17 & 0xffffffff);
      }
      else {
        uVar24 = uVar24 % uVar17;
      }
    }
    puVar14[uVar24] = (ulong)(puVar23 + 2);
    puStack_300 = (ulong *)0x0;
    uStack_2f8 = 0;
  }
  uStack_378 = (ulong **)0x0;
  puVar23[5] = puVar19;
  puVar23[6] = ppuStack_370;
  ppuStack_370 = (ulong **)0x0;
  puVar23[7] = piStack_368;
  puVar23[8] = plStack_360;
  *(undefined4 *)(puVar23 + 9) = (undefined4)uStack_358;
  if (plStack_360 != (long *)0x0) {
    puVar14 = *(ulong **)(piStack_368 + 2);
    if (((ulong)ppuVar20 & (long)ppuVar20 - 1U) == 0) {
      puVar14 = (ulong *)((ulong)puVar14 & (long)ppuVar20 - 1U);
    }
    else if (ppuVar20 <= puVar14) {
      if (((ulong)puVar14 | (ulong)ppuVar20) >> 0x20 == 0) {
        puVar14 = (ulong *)(((ulong)puVar14 & 0xffffffff) % ((ulong)ppuVar20 & 0xffffffff));
      }
      else {
        puVar14 = (ulong *)((ulong)puVar14 % (ulong)ppuVar20);
      }
    }
    puVar19[(long)puVar14] = (ulong)(puVar23 + 7);
    piStack_368 = (int *)0x0;
    plStack_360 = (long *)0x0;
  }
  uStack_350 = 0;
  puVar23[10] = uVar28;
  puVar23[0xb] = uStack_348;
  uStack_348 = 0;
  puVar23[0xc] = lStack_340;
  puVar23[0xd] = uStack_338;
  *(float *)(puVar23 + 0xe) = fStack_330;
  if (uStack_338 != 0) {
    uVar17 = *(ulong *)(lStack_340 + 8);
    if ((uVar29 & uVar29 - 1) == 0) {
      uVar17 = uVar17 & uVar29 - 1;
    }
    else if (uVar29 <= uVar17) {
      if ((uVar17 | uVar29) >> 0x20 == 0) {
        uVar17 = (uVar17 & 0xffffffff) % (uVar29 & 0xffffffff);
      }
      else {
        uVar17 = uVar17 % uVar29;
      }
    }
    *(undefined8 **)(uVar28 + uVar17 * 8) = puVar23 + 0xc;
    lStack_340 = 0;
    uStack_338 = 0;
  }
  puVar23[0xf] = puStack_328;
  puVar23[0x10] = puStack_320;
  puVar23[0x11] = puStack_318;
  puStack_328 = (ulong *)0x0;
  puStack_320 = (ulong *)0x0;
  puStack_318 = (ulong *)0x0;
  auStack_3e8 = (undefined1  [8])0x0;
  puVar23[0x12] = auVar10;
  puVar23[0x13] = puStack_3e0;
  puStack_3e0 = (ulong *)0x0;
  puVar23[0x14] = auStack_3d8._0_8_;
  puVar23[0x15] = auStack_3d8._8_8_;
  *(undefined4 *)(puVar23 + 0x16) = (undefined4)uStack_3c8;
  if (auStack_3d8._8_8_ != 0) {
    puVar14 = *(ulong **)(auStack_3d8._0_8_ + 8);
    if (((ulong)puVar32 & (long)puVar32 - 1U) == 0) {
      puVar14 = (ulong *)((ulong)puVar14 & (long)puVar32 - 1U);
    }
    else if (puVar32 <= puVar14) {
      if (((ulong)puVar14 | (ulong)puVar32) >> 0x20 == 0) {
        puVar14 = (ulong *)(((ulong)puVar14 & 0xffffffff) % ((ulong)puVar32 & 0xffffffff));
      }
      else {
        puVar14 = (ulong *)((ulong)puVar14 % (ulong)puVar32);
      }
    }
    *(undefined8 **)((long)auVar10 + puVar14 * 8) = puVar23 + 0x14;
    auStack_3d8 = ZEXT416(0);
  }
  uStack_3c0 = 0;
  puVar23[0x17] = uVar15;
  puVar23[0x18] = puStack_3b8;
  puStack_3b8 = (ulong *)0x0;
  puVar23[0x19] = ppuStack_3b0;
  puVar23[0x1a] = uStack_3a8;
  *(float *)(puVar23 + 0x1b) = fStack_3a0;
  if (uStack_3a8 != 0) {
    puVar14 = ppuStack_3b0[1];
    if (((ulong)puVar35 & (long)puVar35 - 1U) == 0) {
      puVar14 = (ulong *)((ulong)puVar14 & (long)puVar35 - 1U);
    }
    else if (puVar35 <= puVar14) {
      if (((ulong)puVar14 | (ulong)puVar35) >> 0x20 == 0) {
        puVar14 = (ulong *)(((ulong)puVar14 & 0xffffffff) % ((ulong)puVar35 & 0xffffffff));
      }
      else {
        puVar14 = (ulong *)((ulong)puVar14 % (ulong)puVar35);
      }
    }
    *(undefined8 **)(uVar15 + (long)puVar14 * 8) = puVar23 + 0x19;
    ppuStack_3b0 = (ulong **)0x0;
    uStack_3a8 = 0;
  }
  puVar23[0x1c] = puStack_398;
  puVar23[0x1d] = puStack_390;
  puVar23[0x1e] = puStack_388;
  puStack_398 = (ulong *)0x0;
  puStack_390 = (ulong *)0x0;
  puStack_388 = (ulong *)0x0;
  if (plStack_2a8 == (long *)0x0) {
    uVar25 = 0;
LAB_06ce6947:
    puVar23[0x24] = uVar25;
  }
  else {
    if (plStack_2a8 != &uStack_2c8) {
      uVar25 = (**(code **)(*plStack_2a8 + 0x10))();
      goto LAB_06ce6947;
    }
    puVar23[0x24] = puVar23 + 0x20;
    (**(code **)(*plStack_2a8 + 0x18))();
  }
  puVar23[0x28] = 0;
  puVar23[0x29] = 0;
  puVar23[0x26] = 0;
  puVar23[0x27] = 0;
  *(undefined4 *)(puVar23 + 0x2a) = 0x3f800000;
  *puStack_170 = puVar23;
  if (plStack_2a8 == &uStack_2c8) {
    lVar37 = 0x20;
  }
  else {
    lVar37 = 0x28;
    if (plStack_2a8 == (long *)0x0) goto LAB_06ce69b9;
  }
  (**(code **)(*plStack_2a8 + lVar37))();
LAB_06ce69b9:
  func_0x06ce3290(auStack_3e8);
  func_0x06ce3420(&uStack_378);
  func_0x04897b30(&puStack_310,puStack_300);
  puVar14 = puStack_310;
  puStack_310 = (ulong *)0x0;
  if (puVar14 != (ulong *)0x0) {
    thunk_FUN_0ee326a0(puVar14,uStack_308 << 3);
  }
  puStack_160 = &UNK_0f47e0b0;
  func_0x0d6c9500(&puStack_158,auStack_150._0_8_);
  func_0x06ce3290(&puStack_288);
  func_0x06ce3420(&puStack_1e8);
  func_0x0ca11610(auStack_100);
  if (lStack_f0 != 0) {
    func_0x0412c2d0();
  }
  plVar16 = plStack_138;
  pcStack_140 = (char *)0x0;
  plStack_138 = (long *)0x0;
  puVar14 = puStack_128;
  puVar23 = puStack_118;
  if (plVar16 != (long *)0x0) {
    LOCK();
    plVar33 = plVar16 + 1;
    lVar37 = *plVar33;
    *plVar33 = *plVar33 + -1;
    UNLOCK();
    if (lVar37 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      func_0x0412c2d0(plVar16);
    }
    plVar16 = plStack_138;
    lStack_130 = 0;
    puVar14 = puStack_128;
    puVar23 = puStack_118;
    if (plStack_138 != (long *)0x0) {
      LOCK();
      plVar33 = plStack_138 + 1;
      lVar37 = *plVar33;
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (lVar37 == 0) {
        (**(code **)(*plStack_138 + 0x10))(plStack_138);
        func_0x0412c2d0(plVar16);
        puVar14 = puStack_128;
        puVar23 = puStack_118;
      }
    }
  }
  while (puVar23 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)*puVar23;
    puStack_128 = puVar14;
    if ((*(byte *)(puVar23 + 2) & 1) != 0) {
      thunk_FUN_0ee326a0(puVar23[4],puVar23[2] & 0xfffffffffffffffe);
    }
    thunk_FUN_0ee326a0(puVar23,0x28);
    puVar14 = puStack_128;
    puVar23 = puVar6;
  }
  puStack_128 = (ulong *)0x0;
  if (puVar14 != (ulong *)0x0) {
    thunk_FUN_0ee326a0(puVar14,lStack_120 << 3);
  }
  plVar16 = plStack_290;
  if (plStack_290 != (long *)0x0) {
    LOCK();
    plVar33 = plStack_290 + 1;
    lVar37 = *plVar33;
    *plVar33 = *plVar33 + -1;
    UNLOCK();
    if (lVar37 == 0) {
      (**(code **)(*plStack_290 + 0x10))(plStack_290);
      func_0x0412c2d0(plVar16);
    }
  }
  func_0x06ce3290(&ppuStack_98);
  func_0x04897b30(auStack_218,puStack_208);
  uVar25 = auStack_218._0_8_;
  uVar11 = auStack_218._8_8_;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = auStack_218._8_8_;
  auStack_218 = auVar8 << 0x40;
  if (uVar25 != 0) {
    thunk_FUN_0ee326a0(uVar25,uVar11 << 3);
  }
  return puStack_170;
LAB_06ce51a7:
  bVar7 = false;
  bVar38 = false;
  lVar37 = lStack_2e8;
joined_r0x06ce51b4:
  lStack_2e8 = lVar37;
  if (((ulong)auVar10 & 1) != 0) {
    thunk_FUN_0ee326a0(auStack_3d8._0_8_,(ulong)auStack_3e8 & 0xfffffffffffffffe);
    bVar38 = bVar7;
  }
  if (bVar38) {
    func_0x0c4ac7e0(&puStack_2d8,plVar16,0);
    lVar27 = (long)puStack_230 - (long)puStack_238;
    func_0x06ce7eb0(&puStack_238,&uStack_378);
    if ((DAT_0f5ea4a0 == '\0') && (iVar13 = func_0x04108328(&DAT_0f5ea4a0), iVar13 != 0)) {
      func_0x08b670e0(&DAT_0f5ea138);
      func_0x0eee2f40(&UNK_08b673f0,&DAT_0f5ea138,0xf53dab8);
      func_0x0410844d(&DAT_0f5ea4a0);
    }
    (**(code **)(*plVar16 + 0x2f8))(&puStack_310,plVar16,&puStack_2d8,&puStack_160);
    piStack_d8 = piStack_298;
    plStack_d0 = plStack_290;
    if (plStack_290 != (long *)0x0) {
      LOCK();
      plStack_290[1] = plStack_290[1] + 1;
      UNLOCK();
    }
    (**(code **)(_DAT_0f5ea138 + 0x90))(&uStack_2c8,&DAT_0f5ea138,&puStack_310,&piStack_d8);
    puVar14 = (ulong *)((ulong)uStack_2c8 >> 1 & 0x7f);
    lVar37 = (long)&uStack_2c8 + 1;
    if (((ulong)uStack_2c8 & 1) != 0) {
      puVar14 = puStack_2c0;
      lVar37 = lStack_2b8;
    }
    if ((ulong *)0xfffffffffffffff7 < puVar14) goto LAB_06ce6c29;
    if (puVar14 < (ulong *)0x17) {
      auStack_3e8[0] = (char)puVar14 * '\x02';
      puVar22 = auStack_3e8 + 1;
      if (puVar14 != (ulong *)0x0) goto LAB_06ce56ba;
    }
    else {
      uVar17 = ((ulong)puVar14 | 7) + 1;
      if (((ulong)puVar14 | 7) == 0x17) {
        uVar17 = 0x1a;
      }
      puVar22 = (undefined1 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar17);
      if (puVar22 == (undefined1 *)0x0) {
        func_0x0eec74c0(uVar17,0);
      }
      auStack_3d8._0_8_ = puVar22;
      auStack_3e8 = (undefined1  [8])(uVar17 | 1);
      puStack_3e0 = puVar14;
LAB_06ce56ba:
      func_0x0eee2f00(puVar22,lVar37,puVar14);
    }
    puVar22[(long)puVar14] = 0;
    lVar37 = lStack_2e8;
    puVar14 = (ulong *)((ulong)auStack_3e8 >> 1 & 0x7f);
    pcVar9 = auStack_3e8 + 1;
    if (((ulong)auStack_3e8 & 1) != 0) {
      puVar14 = puStack_3e0;
      pcVar9 = (char *)auStack_3d8._0_8_;
    }
    if (puVar14 != (ulong *)0x0) {
      pcVar34 = pcVar9;
      if ((ulong *)0x7 < puVar14) {
        if (puVar14 < (ulong *)0x20) {
          puVar32 = (ulong *)0x0;
        }
        else {
          puVar32 = (ulong *)((ulong)puVar14 & 0xffffffffffffffe0);
          puVar35 = (ulong *)0x0;
          do {
            auVar5 = *(undefined1 (*) [16])(pcVar9 + (long)puVar35);
            pcVar34 = pcVar9 + 0x10 + (long)puVar35;
            bVar40 = auVar5[0] + DAT_014e86b0;
            bVar41 = auVar5[1] + UNK_014e86b1;
            bVar43 = auVar5[2] + UNK_014e86b2;
            bVar45 = auVar5[3] + UNK_014e86b3;
            bVar47 = auVar5[4] + UNK_014e86b4;
            bVar49 = auVar5[5] + UNK_014e86b5;
            bVar51 = auVar5[6] + UNK_014e86b6;
            bVar53 = auVar5[7] + UNK_014e86b7;
            bVar55 = auVar5[8] + UNK_014e86b8;
            bVar56 = auVar5[9] + UNK_014e86b9;
            bVar57 = auVar5[10] + UNK_014e86ba;
            bVar58 = auVar5[0xb] + UNK_014e86bb;
            bVar59 = auVar5[0xc] + UNK_014e86bc;
            bVar60 = auVar5[0xd] + UNK_014e86bd;
            bVar61 = auVar5[0xe] + UNK_014e86be;
            bVar62 = auVar5[0xf] + UNK_014e86bf;
            bVar63 = *pcVar34 + DAT_014e86b0;
            bVar64 = pcVar34[1] + UNK_014e86b1;
            bVar65 = pcVar34[2] + UNK_014e86b2;
            bVar66 = pcVar34[3] + UNK_014e86b3;
            bVar67 = pcVar34[4] + UNK_014e86b4;
            bVar68 = pcVar34[5] + UNK_014e86b5;
            bVar69 = pcVar34[6] + UNK_014e86b6;
            bVar70 = pcVar34[7] + UNK_014e86b7;
            bVar71 = pcVar34[8] + UNK_014e86b8;
            bVar72 = pcVar34[9] + UNK_014e86b9;
            bVar73 = pcVar34[10] + UNK_014e86ba;
            bVar74 = pcVar34[0xb] + UNK_014e86bb;
            bVar75 = pcVar34[0xc] + UNK_014e86bc;
            bVar76 = pcVar34[0xd] + UNK_014e86bd;
            bVar77 = pcVar34[0xe] + UNK_014e86be;
            bVar78 = pcVar34[0xf] + UNK_014e86bf;
            in_XMM2[0] = (-((byte)((DAT_014e4170 < bVar63) * DAT_014e4170 |
                                  (DAT_014e4170 >= bVar63) * bVar63) == bVar63) & DAT_014ead50) +
                         *pcVar34;
            in_XMM2[1] = (-((byte)((UNK_014e4171 < bVar64) * UNK_014e4171 |
                                  (UNK_014e4171 >= bVar64) * bVar64) == bVar64) & UNK_014ead51) +
                         pcVar34[1];
            in_XMM2[2] = (-((byte)((UNK_014e4172 < bVar65) * UNK_014e4172 |
                                  (UNK_014e4172 >= bVar65) * bVar65) == bVar65) & UNK_014ead52) +
                         pcVar34[2];
            in_XMM2[3] = (-((byte)((UNK_014e4173 < bVar66) * UNK_014e4173 |
                                  (UNK_014e4173 >= bVar66) * bVar66) == bVar66) & UNK_014ead53) +
                         pcVar34[3];
            in_XMM2[4] = (-((byte)((UNK_014e4174 < bVar67) * UNK_014e4174 |
                                  (UNK_014e4174 >= bVar67) * bVar67) == bVar67) & UNK_014ead54) +
                         pcVar34[4];
            in_XMM2[5] = (-((byte)((UNK_014e4175 < bVar68) * UNK_014e4175 |
                                  (UNK_014e4175 >= bVar68) * bVar68) == bVar68) & UNK_014ead55) +
                         pcVar34[5];
            in_XMM2[6] = (-((byte)((UNK_014e4176 < bVar69) * UNK_014e4176 |
                                  (UNK_014e4176 >= bVar69) * bVar69) == bVar69) & UNK_014ead56) +
                         pcVar34[6];
            in_XMM2[7] = (-((byte)((UNK_014e4177 < bVar70) * UNK_014e4177 |
                                  (UNK_014e4177 >= bVar70) * bVar70) == bVar70) & UNK_014ead57) +
                         pcVar34[7];
            in_XMM2[8] = (-((byte)((UNK_014e4178 < bVar71) * UNK_014e4178 |
                                  (UNK_014e4178 >= bVar71) * bVar71) == bVar71) & UNK_014ead58) +
                         pcVar34[8];
            in_XMM2[9] = (-((byte)((UNK_014e4179 < bVar72) * UNK_014e4179 |
                                  (UNK_014e4179 >= bVar72) * bVar72) == bVar72) & UNK_014ead59) +
                         pcVar34[9];
            in_XMM2[10] = (-((byte)((UNK_014e417a < bVar73) * UNK_014e417a |
                                   (UNK_014e417a >= bVar73) * bVar73) == bVar73) & UNK_014ead5a) +
                          pcVar34[10];
            in_XMM2[0xb] = (-((byte)((UNK_014e417b < bVar74) * UNK_014e417b |
                                    (UNK_014e417b >= bVar74) * bVar74) == bVar74) & UNK_014ead5b) +
                           pcVar34[0xb];
            in_XMM2[0xc] = (-((byte)((UNK_014e417c < bVar75) * UNK_014e417c |
                                    (UNK_014e417c >= bVar75) * bVar75) == bVar75) & UNK_014ead5c) +
                           pcVar34[0xc];
            in_XMM2[0xd] = (-((byte)((UNK_014e417d < bVar76) * UNK_014e417d |
                                    (UNK_014e417d >= bVar76) * bVar76) == bVar76) & UNK_014ead5d) +
                           pcVar34[0xd];
            in_XMM2[0xe] = (-((byte)((UNK_014e417e < bVar77) * UNK_014e417e |
                                    (UNK_014e417e >= bVar77) * bVar77) == bVar77) & UNK_014ead5e) +
                           pcVar34[0xe];
            in_XMM2[0xf] = (-((byte)((UNK_014e417f < bVar78) * UNK_014e417f |
                                    (UNK_014e417f >= bVar78) * bVar78) == bVar78) & UNK_014ead5f) +
                           pcVar34[0xf];
            pcVar34 = pcVar9 + (long)puVar35;
            *pcVar34 = (-((byte)((DAT_014e4170 < bVar40) * DAT_014e4170 |
                                (DAT_014e4170 >= bVar40) * bVar40) == bVar40) & DAT_014ead50) +
                       auVar5[0];
            pcVar34[1] = (-((byte)((UNK_014e4171 < bVar41) * UNK_014e4171 |
                                  (UNK_014e4171 >= bVar41) * bVar41) == bVar41) & UNK_014ead51) +
                         auVar5[1];
            pcVar34[2] = (-((byte)((UNK_014e4172 < bVar43) * UNK_014e4172 |
                                  (UNK_014e4172 >= bVar43) * bVar43) == bVar43) & UNK_014ead52) +
                         auVar5[2];
            pcVar34[3] = (-((byte)((UNK_014e4173 < bVar45) * UNK_014e4173 |
                                  (UNK_014e4173 >= bVar45) * bVar45) == bVar45) & UNK_014ead53) +
                         auVar5[3];
            pcVar34[4] = (-((byte)((UNK_014e4174 < bVar47) * UNK_014e4174 |
                                  (UNK_014e4174 >= bVar47) * bVar47) == bVar47) & UNK_014ead54) +
                         auVar5[4];
            pcVar34[5] = (-((byte)((UNK_014e4175 < bVar49) * UNK_014e4175 |
                                  (UNK_014e4175 >= bVar49) * bVar49) == bVar49) & UNK_014ead55) +
                         auVar5[5];
            pcVar34[6] = (-((byte)((UNK_014e4176 < bVar51) * UNK_014e4176 |
                                  (UNK_014e4176 >= bVar51) * bVar51) == bVar51) & UNK_014ead56) +
                         auVar5[6];
            pcVar34[7] = (-((byte)((UNK_014e4177 < bVar53) * UNK_014e4177 |
                                  (UNK_014e4177 >= bVar53) * bVar53) == bVar53) & UNK_014ead57) +
                         auVar5[7];
            pcVar34[8] = (-((byte)((UNK_014e4178 < bVar55) * UNK_014e4178 |
                                  (UNK_014e4178 >= bVar55) * bVar55) == bVar55) & UNK_014ead58) +
                         auVar5[8];
            pcVar34[9] = (-((byte)((UNK_014e4179 < bVar56) * UNK_014e4179 |
                                  (UNK_014e4179 >= bVar56) * bVar56) == bVar56) & UNK_014ead59) +
                         auVar5[9];
            pcVar34[10] = (-((byte)((UNK_014e417a < bVar57) * UNK_014e417a |
                                   (UNK_014e417a >= bVar57) * bVar57) == bVar57) & UNK_014ead5a) +
                          auVar5[10];
            pcVar34[0xb] = (-((byte)((UNK_014e417b < bVar58) * UNK_014e417b |
                                    (UNK_014e417b >= bVar58) * bVar58) == bVar58) & UNK_014ead5b) +
                           auVar5[0xb];
            pcVar34[0xc] = (-((byte)((UNK_014e417c < bVar59) * UNK_014e417c |
                                    (UNK_014e417c >= bVar59) * bVar59) == bVar59) & UNK_014ead5c) +
                           auVar5[0xc];
            pcVar34[0xd] = (-((byte)((UNK_014e417d < bVar60) * UNK_014e417d |
                                    (UNK_014e417d >= bVar60) * bVar60) == bVar60) & UNK_014ead5d) +
                           auVar5[0xd];
            pcVar34[0xe] = (-((byte)((UNK_014e417e < bVar61) * UNK_014e417e |
                                    (UNK_014e417e >= bVar61) * bVar61) == bVar61) & UNK_014ead5e) +
                           auVar5[0xe];
            pcVar34[0xf] = (-((byte)((UNK_014e417f < bVar62) * UNK_014e417f |
                                    (UNK_014e417f >= bVar62) * bVar62) == bVar62) & UNK_014ead5f) +
                           auVar5[0xf];
            *(undefined1 (*) [16])(pcVar9 + 0x10 + (long)puVar35) = in_XMM2;
            puVar35 = puVar35 + 4;
          } while (puVar32 != puVar35);
          if (puVar14 == puVar32) goto LAB_06ce585d;
          if (((ulong)puVar14 & 0x18) == 0) {
            pcVar34 = (char *)((long)puVar32 + (long)pcVar9);
            goto LAB_06ce583b;
          }
        }
        puVar35 = (ulong *)((ulong)puVar14 & 0xfffffffffffffff8);
        pcVar34 = pcVar9 + (long)puVar35;
        do {
          uVar25 = *(undefined8 *)(pcVar9 + (long)puVar32);
          bVar40 = (char)uVar25 + DAT_014e9110;
          cVar42 = (char)((ulong)uVar25 >> 8);
          bVar41 = cVar42 + UNK_014e9111;
          cVar44 = (char)((ulong)uVar25 >> 0x10);
          bVar43 = cVar44 + UNK_014e9112;
          cVar46 = (char)((ulong)uVar25 >> 0x18);
          bVar45 = cVar46 + UNK_014e9113;
          cVar48 = (char)((ulong)uVar25 >> 0x20);
          bVar47 = cVar48 + UNK_014e9114;
          cVar50 = (char)((ulong)uVar25 >> 0x28);
          bVar49 = cVar50 + UNK_014e9115;
          cVar52 = (char)((ulong)uVar25 >> 0x30);
          cVar12 = (char)((ulong)uVar25 >> 0x38);
          bVar51 = cVar52 + UNK_014e9116;
          bVar53 = cVar12 + UNK_014e9117;
          in_XMM2[8] = ~-((byte)((UNK_014e9118 < UNK_014e8cb8) * UNK_014e8cb8 |
                                (UNK_014e9118 >= UNK_014e8cb8) * UNK_014e9118) == UNK_014e9118) &
                       UNK_014ea368;
          in_XMM2[9] = ~-((byte)((UNK_014e9119 < UNK_014e8cb9) * UNK_014e8cb9 |
                                (UNK_014e9119 >= UNK_014e8cb9) * UNK_014e9119) == UNK_014e9119) &
                       UNK_014ea369;
          in_XMM2[10] = ~-((byte)((UNK_014e911a < UNK_014e8cba) * UNK_014e8cba |
                                 (UNK_014e911a >= UNK_014e8cba) * UNK_014e911a) == UNK_014e911a) &
                        UNK_014ea36a;
          in_XMM2[0xb] = ~-((byte)((UNK_014e911b < UNK_014e8cbb) * UNK_014e8cbb |
                                  (UNK_014e911b >= UNK_014e8cbb) * UNK_014e911b) == UNK_014e911b) &
                         UNK_014ea36b;
          in_XMM2[0xc] = ~-((byte)((UNK_014e911c < UNK_014e8cbc) * UNK_014e8cbc |
                                  (UNK_014e911c >= UNK_014e8cbc) * UNK_014e911c) == UNK_014e911c) &
                         UNK_014ea36c;
          in_XMM2[0xd] = ~-((byte)((UNK_014e911d < UNK_014e8cbd) * UNK_014e8cbd |
                                  (UNK_014e911d >= UNK_014e8cbd) * UNK_014e911d) == UNK_014e911d) &
                         UNK_014ea36d;
          in_XMM2[0xe] = ~-((byte)((UNK_014e911e < UNK_014e8cbe) * UNK_014e8cbe |
                                  (UNK_014e911e >= UNK_014e8cbe) * UNK_014e911e) == UNK_014e911e) &
                         UNK_014ea36e;
          in_XMM2[0xf] = ~-((byte)((UNK_014e911f < UNK_014e8cbf) * UNK_014e8cbf |
                                  (UNK_014e911f >= UNK_014e8cbf) * UNK_014e911f) == UNK_014e911f) &
                         UNK_014ea36f;
          in_XMM2._0_8_ =
               CONCAT17((~-((byte)((bVar53 < UNK_014e8cb7) * UNK_014e8cb7 |
                                  (bVar53 >= UNK_014e8cb7) * bVar53) == bVar53) & UNK_014ea367) +
                        cVar12,CONCAT16((~-((byte)((bVar51 < UNK_014e8cb6) * UNK_014e8cb6 |
                                                  (bVar51 >= UNK_014e8cb6) * bVar51) == bVar51) &
                                        UNK_014ea366) + cVar52,
                                        CONCAT15((~-((byte)((bVar49 < UNK_014e8cb5) * UNK_014e8cb5 |
                                                           (bVar49 >= UNK_014e8cb5) * bVar49) ==
                                                    bVar49) & UNK_014ea365) + cVar50,
                                                 CONCAT14((~-((byte)((bVar47 < UNK_014e8cb4) *
                                                                     UNK_014e8cb4 |
                                                                    (bVar47 >= UNK_014e8cb4) *
                                                                    bVar47) == bVar47) &
                                                          UNK_014ea364) + cVar48,
                                                          CONCAT13((~-((byte)((bVar45 < UNK_014e8cb3
                                                                              ) * UNK_014e8cb3 |
                                                                             (bVar45 >= UNK_014e8cb3
                                                                             ) * bVar45) == bVar45)
                                                                   & UNK_014ea363) + cVar46,
                                                                   CONCAT12((~-((byte)((bVar43 < 
                                                  UNK_014e8cb2) * UNK_014e8cb2 |
                                                  (bVar43 >= UNK_014e8cb2) * bVar43) == bVar43) &
                                                  UNK_014ea362) + cVar44,
                                                  CONCAT11((~-((byte)((bVar41 < UNK_014e8cb1) *
                                                                      UNK_014e8cb1 |
                                                                     (bVar41 >= UNK_014e8cb1) *
                                                                     bVar41) == bVar41) &
                                                           UNK_014ea361) + cVar42,
                                                           (~-((byte)((bVar40 < DAT_014e8cb0) *
                                                                      DAT_014e8cb0 |
                                                                     (bVar40 >= DAT_014e8cb0) *
                                                                     bVar40) == bVar40) &
                                                           DAT_014ea360) + (char)uVar25)))))));
          *(undefined8 *)(pcVar9 + (long)puVar32) = in_XMM2._0_8_;
          puVar32 = puVar32 + 1;
        } while (puVar35 != puVar32);
        if (puVar14 == puVar35) goto LAB_06ce585d;
      }
LAB_06ce583b:
      do {
        cVar12 = *pcVar34;
        cVar42 = cVar12 + ' ';
        if (0x19 < (byte)(cVar12 + 0xbfU)) {
          cVar42 = cVar12;
        }
        *pcVar34 = cVar42;
        pcVar34 = pcVar34 + 1;
      } while (pcVar34 != pcVar9 + (long)puVar14);
    }
LAB_06ce585d:
    if (((ulong)uStack_2c8 & 1) != 0) {
      thunk_FUN_0ee326a0(lStack_2b8,(ulong)uStack_2c8 & 0xfffffffffffffffe);
    }
    plVar33 = plStack_d0;
    if (plStack_d0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_d0 + 1;
      lVar21 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar21 == 0) {
        (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
        func_0x0412c2d0(plVar33);
      }
    }
    if (((ulong)puStack_310 & 1) != 0) {
      thunk_FUN_0ee326a0(puStack_300,(ulong)puStack_310 & 0xfffffffffffffffe);
    }
    uStack_2c8 = (ulong **)auStack_3e8;
    lVar21 = func_0x06cf6780(&puStack_288,uStack_2c8,&UNK_01563a4f,&uStack_2c8,&puStack_310);
    *(long *)(lVar21 + 0x28) = (lVar27 >> 3) * 0x6db6db6db6db6db7;
    if (((ulong)auStack_3e8 & 1) != 0) {
      thunk_FUN_0ee326a0(auStack_3d8._0_8_,(ulong)auStack_3e8 & 0xfffffffffffffffe);
    }
    plVar33 = plStack_2d0;
    puStack_2d8 = &UNK_0f3773c0;
    plStack_2d0 = (long *)0x0;
    if (plVar33 != (long *)0x0) {
      (**(code **)(*plVar33 + 0x90))();
    }
  }
  psVar3 = (short *)(lVar18 + 0x48);
  psVar31 = (short *)(*(long *)(lVar18 + 0x40) + 0x128);
  if (*(short *)(lVar18 + 0x48) == 0x7fff) {
    psVar31 = psVar3;
  }
  if (*(long *)(lVar18 + 0x40) == 0) {
    psVar31 = psVar3;
  }
  if (*psVar31 == 0) goto LAB_06ce5db5;
  func_0x0c4ac7e0(&puStack_2d8,plVar16);
  if ((DAT_0f5ea4a0 == '\0') && (iVar13 = func_0x04108328(&DAT_0f5ea4a0), iVar13 != 0)) {
    func_0x08b670e0(&DAT_0f5ea138);
    func_0x0eee2f40(&UNK_08b673f0,&DAT_0f5ea138,0xf53dab8);
    func_0x0410844d(&DAT_0f5ea4a0);
    lVar37 = lStack_2e8;
  }
  (**(code **)(*plVar16 + 0x2f8))(&puStack_310,plVar16,&puStack_2d8,&puStack_160);
  piStack_e8 = piStack_298;
  plStack_e0 = plStack_290;
  if (plStack_290 != (long *)0x0) {
    LOCK();
    plStack_290[1] = plStack_290[1] + 1;
    UNLOCK();
  }
  (**(code **)(_DAT_0f5ea138 + 0x90))(&uStack_2c8,&DAT_0f5ea138,&puStack_310,&piStack_e8);
  puVar14 = (ulong *)((ulong)uStack_2c8 >> 1 & 0x7f);
  lVar27 = (long)&uStack_2c8 + 1;
  if (((ulong)uStack_2c8 & 1) != 0) {
    puVar14 = puStack_2c0;
    lVar27 = lStack_2b8;
  }
  if ((ulong *)0xfffffffffffffff7 < puVar14) goto LAB_06ce6c24;
  if (puVar14 < (ulong *)0x17) {
    auStack_3e8[0] = (char)puVar14 * '\x02';
    puVar22 = auStack_3e8 + 1;
    if (puVar14 != (ulong *)0x0) goto LAB_06ce5ac4;
  }
  else {
    uVar17 = ((ulong)puVar14 | 7) + 1;
    if (((ulong)puVar14 | 7) == 0x17) {
      uVar17 = 0x1a;
    }
    puVar22 = (undefined1 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar17);
    if (puVar22 == (undefined1 *)0x0) {
      func_0x0eec74c0(uVar17,0);
    }
    auStack_3d8._0_8_ = puVar22;
    auStack_3e8 = (undefined1  [8])(uVar17 | 1);
    lVar37 = lStack_2e8;
    puStack_3e0 = puVar14;
LAB_06ce5ac4:
    func_0x0eee2f00(puVar22,lVar27,puVar14);
  }
  puVar22[(long)puVar14] = 0;
  puVar14 = (ulong *)((ulong)auStack_3e8 >> 1 & 0x7f);
  pcVar9 = auStack_3e8 + 1;
  if (((ulong)auStack_3e8 & 1) != 0) {
    puVar14 = puStack_3e0;
    pcVar9 = (char *)auStack_3d8._0_8_;
  }
  if (puVar14 != (ulong *)0x0) {
    pcVar34 = pcVar9;
    if ((ulong *)0x7 < puVar14) {
      if (puVar14 < (ulong *)0x20) {
        puVar32 = (ulong *)0x0;
      }
      else {
        puVar32 = (ulong *)((ulong)puVar14 & 0xffffffffffffffe0);
        puVar35 = (ulong *)0x0;
        do {
          auVar5 = *(undefined1 (*) [16])(pcVar9 + (long)puVar35);
          pcVar34 = pcVar9 + 0x10 + (long)puVar35;
          bVar40 = auVar5[0] + DAT_014e86b0;
          bVar41 = auVar5[1] + UNK_014e86b1;
          bVar43 = auVar5[2] + UNK_014e86b2;
          bVar45 = auVar5[3] + UNK_014e86b3;
          bVar47 = auVar5[4] + UNK_014e86b4;
          bVar49 = auVar5[5] + UNK_014e86b5;
          bVar51 = auVar5[6] + UNK_014e86b6;
          bVar53 = auVar5[7] + UNK_014e86b7;
          bVar55 = auVar5[8] + UNK_014e86b8;
          bVar56 = auVar5[9] + UNK_014e86b9;
          bVar57 = auVar5[10] + UNK_014e86ba;
          bVar58 = auVar5[0xb] + UNK_014e86bb;
          bVar59 = auVar5[0xc] + UNK_014e86bc;
          bVar60 = auVar5[0xd] + UNK_014e86bd;
          bVar61 = auVar5[0xe] + UNK_014e86be;
          bVar62 = auVar5[0xf] + UNK_014e86bf;
          bVar63 = *pcVar34 + DAT_014e86b0;
          bVar64 = pcVar34[1] + UNK_014e86b1;
          bVar65 = pcVar34[2] + UNK_014e86b2;
          bVar66 = pcVar34[3] + UNK_014e86b3;
          bVar67 = pcVar34[4] + UNK_014e86b4;
          bVar68 = pcVar34[5] + UNK_014e86b5;
          bVar69 = pcVar34[6] + UNK_014e86b6;
          bVar70 = pcVar34[7] + UNK_014e86b7;
          bVar71 = pcVar34[8] + UNK_014e86b8;
          bVar72 = pcVar34[9] + UNK_014e86b9;
          bVar73 = pcVar34[10] + UNK_014e86ba;
          bVar74 = pcVar34[0xb] + UNK_014e86bb;
          bVar75 = pcVar34[0xc] + UNK_014e86bc;
          bVar76 = pcVar34[0xd] + UNK_014e86bd;
          bVar77 = pcVar34[0xe] + UNK_014e86be;
          bVar78 = pcVar34[0xf] + UNK_014e86bf;
          in_XMM2[0] = (-((byte)((DAT_014e4170 < bVar63) * DAT_014e4170 |
                                (DAT_014e4170 >= bVar63) * bVar63) == bVar63) & DAT_014ead50) +
                       *pcVar34;
          in_XMM2[1] = (-((byte)((UNK_014e4171 < bVar64) * UNK_014e4171 |
                                (UNK_014e4171 >= bVar64) * bVar64) == bVar64) & UNK_014ead51) +
                       pcVar34[1];
          in_XMM2[2] = (-((byte)((UNK_014e4172 < bVar65) * UNK_014e4172 |
                                (UNK_014e4172 >= bVar65) * bVar65) == bVar65) & UNK_014ead52) +
                       pcVar34[2];
          in_XMM2[3] = (-((byte)((UNK_014e4173 < bVar66) * UNK_014e4173 |
                                (UNK_014e4173 >= bVar66) * bVar66) == bVar66) & UNK_014ead53) +
                       pcVar34[3];
          in_XMM2[4] = (-((byte)((UNK_014e4174 < bVar67) * UNK_014e4174 |
                                (UNK_014e4174 >= bVar67) * bVar67) == bVar67) & UNK_014ead54) +
                       pcVar34[4];
          in_XMM2[5] = (-((byte)((UNK_014e4175 < bVar68) * UNK_014e4175 |
                                (UNK_014e4175 >= bVar68) * bVar68) == bVar68) & UNK_014ead55) +
                       pcVar34[5];
          in_XMM2[6] = (-((byte)((UNK_014e4176 < bVar69) * UNK_014e4176 |
                                (UNK_014e4176 >= bVar69) * bVar69) == bVar69) & UNK_014ead56) +
                       pcVar34[6];
          in_XMM2[7] = (-((byte)((UNK_014e4177 < bVar70) * UNK_014e4177 |
                                (UNK_014e4177 >= bVar70) * bVar70) == bVar70) & UNK_014ead57) +
                       pcVar34[7];
          in_XMM2[8] = (-((byte)((UNK_014e4178 < bVar71) * UNK_014e4178 |
                                (UNK_014e4178 >= bVar71) * bVar71) == bVar71) & UNK_014ead58) +
                       pcVar34[8];
          in_XMM2[9] = (-((byte)((UNK_014e4179 < bVar72) * UNK_014e4179 |
                                (UNK_014e4179 >= bVar72) * bVar72) == bVar72) & UNK_014ead59) +
                       pcVar34[9];
          in_XMM2[10] = (-((byte)((UNK_014e417a < bVar73) * UNK_014e417a |
                                 (UNK_014e417a >= bVar73) * bVar73) == bVar73) & UNK_014ead5a) +
                        pcVar34[10];
          in_XMM2[0xb] = (-((byte)((UNK_014e417b < bVar74) * UNK_014e417b |
                                  (UNK_014e417b >= bVar74) * bVar74) == bVar74) & UNK_014ead5b) +
                         pcVar34[0xb];
          in_XMM2[0xc] = (-((byte)((UNK_014e417c < bVar75) * UNK_014e417c |
                                  (UNK_014e417c >= bVar75) * bVar75) == bVar75) & UNK_014ead5c) +
                         pcVar34[0xc];
          in_XMM2[0xd] = (-((byte)((UNK_014e417d < bVar76) * UNK_014e417d |
                                  (UNK_014e417d >= bVar76) * bVar76) == bVar76) & UNK_014ead5d) +
                         pcVar34[0xd];
          in_XMM2[0xe] = (-((byte)((UNK_014e417e < bVar77) * UNK_014e417e |
                                  (UNK_014e417e >= bVar77) * bVar77) == bVar77) & UNK_014ead5e) +
                         pcVar34[0xe];
          in_XMM2[0xf] = (-((byte)((UNK_014e417f < bVar78) * UNK_014e417f |
                                  (UNK_014e417f >= bVar78) * bVar78) == bVar78) & UNK_014ead5f) +
                         pcVar34[0xf];
          pcVar34 = pcVar9 + (long)puVar35;
          *pcVar34 = (-((byte)((DAT_014e4170 < bVar40) * DAT_014e4170 |
                              (DAT_014e4170 >= bVar40) * bVar40) == bVar40) & DAT_014ead50) +
                     auVar5[0];
          pcVar34[1] = (-((byte)((UNK_014e4171 < bVar41) * UNK_014e4171 |
                                (UNK_014e4171 >= bVar41) * bVar41) == bVar41) & UNK_014ead51) +
                       auVar5[1];
          pcVar34[2] = (-((byte)((UNK_014e4172 < bVar43) * UNK_014e4172 |
                                (UNK_014e4172 >= bVar43) * bVar43) == bVar43) & UNK_014ead52) +
                       auVar5[2];
          pcVar34[3] = (-((byte)((UNK_014e4173 < bVar45) * UNK_014e4173 |
                                (UNK_014e4173 >= bVar45) * bVar45) == bVar45) & UNK_014ead53) +
                       auVar5[3];
          pcVar34[4] = (-((byte)((UNK_014e4174 < bVar47) * UNK_014e4174 |
                                (UNK_014e4174 >= bVar47) * bVar47) == bVar47) & UNK_014ead54) +
                       auVar5[4];
          pcVar34[5] = (-((byte)((UNK_014e4175 < bVar49) * UNK_014e4175 |
                                (UNK_014e4175 >= bVar49) * bVar49) == bVar49) & UNK_014ead55) +
                       auVar5[5];
          pcVar34[6] = (-((byte)((UNK_014e4176 < bVar51) * UNK_014e4176 |
                                (UNK_014e4176 >= bVar51) * bVar51) == bVar51) & UNK_014ead56) +
                       auVar5[6];
          pcVar34[7] = (-((byte)((UNK_014e4177 < bVar53) * UNK_014e4177 |
                                (UNK_014e4177 >= bVar53) * bVar53) == bVar53) & UNK_014ead57) +
                       auVar5[7];
          pcVar34[8] = (-((byte)((UNK_014e4178 < bVar55) * UNK_014e4178 |
                                (UNK_014e4178 >= bVar55) * bVar55) == bVar55) & UNK_014ead58) +
                       auVar5[8];
          pcVar34[9] = (-((byte)((UNK_014e4179 < bVar56) * UNK_014e4179 |
                                (UNK_014e4179 >= bVar56) * bVar56) == bVar56) & UNK_014ead59) +
                       auVar5[9];
          pcVar34[10] = (-((byte)((UNK_014e417a < bVar57) * UNK_014e417a |
                                 (UNK_014e417a >= bVar57) * bVar57) == bVar57) & UNK_014ead5a) +
                        auVar5[10];
          pcVar34[0xb] = (-((byte)((UNK_014e417b < bVar58) * UNK_014e417b |
                                  (UNK_014e417b >= bVar58) * bVar58) == bVar58) & UNK_014ead5b) +
                         auVar5[0xb];
          pcVar34[0xc] = (-((byte)((UNK_014e417c < bVar59) * UNK_014e417c |
                                  (UNK_014e417c >= bVar59) * bVar59) == bVar59) & UNK_014ead5c) +
                         auVar5[0xc];
          pcVar34[0xd] = (-((byte)((UNK_014e417d < bVar60) * UNK_014e417d |
                                  (UNK_014e417d >= bVar60) * bVar60) == bVar60) & UNK_014ead5d) +
                         auVar5[0xd];
          pcVar34[0xe] = (-((byte)((UNK_014e417e < bVar61) * UNK_014e417e |
                                  (UNK_014e417e >= bVar61) * bVar61) == bVar61) & UNK_014ead5e) +
                         auVar5[0xe];
          pcVar34[0xf] = (-((byte)((UNK_014e417f < bVar62) * UNK_014e417f |
                                  (UNK_014e417f >= bVar62) * bVar62) == bVar62) & UNK_014ead5f) +
                         auVar5[0xf];
          *(undefined1 (*) [16])(pcVar9 + 0x10 + (long)puVar35) = in_XMM2;
          puVar35 = puVar35 + 4;
        } while (puVar32 != puVar35);
        if (puVar14 == puVar32) goto LAB_06ce5c4d;
        if (((ulong)puVar14 & 0x18) == 0) {
          pcVar34 = (char *)((long)puVar32 + (long)pcVar9);
          goto LAB_06ce5c2c;
        }
      }
      puVar35 = (ulong *)((ulong)puVar14 & 0xfffffffffffffff8);
      pcVar34 = pcVar9 + (long)puVar35;
      do {
        uVar25 = *(undefined8 *)(pcVar9 + (long)puVar32);
        bVar40 = (char)uVar25 + DAT_014e9110;
        cVar42 = (char)((ulong)uVar25 >> 8);
        bVar41 = cVar42 + UNK_014e9111;
        cVar44 = (char)((ulong)uVar25 >> 0x10);
        bVar43 = cVar44 + UNK_014e9112;
        cVar46 = (char)((ulong)uVar25 >> 0x18);
        bVar45 = cVar46 + UNK_014e9113;
        cVar48 = (char)((ulong)uVar25 >> 0x20);
        bVar47 = cVar48 + UNK_014e9114;
        cVar50 = (char)((ulong)uVar25 >> 0x28);
        bVar49 = cVar50 + UNK_014e9115;
        cVar52 = (char)((ulong)uVar25 >> 0x30);
        cVar12 = (char)((ulong)uVar25 >> 0x38);
        bVar51 = cVar52 + UNK_014e9116;
        bVar53 = cVar12 + UNK_014e9117;
        in_XMM2[8] = ~-((byte)((UNK_014e9118 < UNK_014e8cb8) * UNK_014e8cb8 |
                              (UNK_014e9118 >= UNK_014e8cb8) * UNK_014e9118) == UNK_014e9118) &
                     UNK_014ea368;
        in_XMM2[9] = ~-((byte)((UNK_014e9119 < UNK_014e8cb9) * UNK_014e8cb9 |
                              (UNK_014e9119 >= UNK_014e8cb9) * UNK_014e9119) == UNK_014e9119) &
                     UNK_014ea369;
        in_XMM2[10] = ~-((byte)((UNK_014e911a < UNK_014e8cba) * UNK_014e8cba |
                               (UNK_014e911a >= UNK_014e8cba) * UNK_014e911a) == UNK_014e911a) &
                      UNK_014ea36a;
        in_XMM2[0xb] = ~-((byte)((UNK_014e911b < UNK_014e8cbb) * UNK_014e8cbb |
                                (UNK_014e911b >= UNK_014e8cbb) * UNK_014e911b) == UNK_014e911b) &
                       UNK_014ea36b;
        in_XMM2[0xc] = ~-((byte)((UNK_014e911c < UNK_014e8cbc) * UNK_014e8cbc |
                                (UNK_014e911c >= UNK_014e8cbc) * UNK_014e911c) == UNK_014e911c) &
                       UNK_014ea36c;
        in_XMM2[0xd] = ~-((byte)((UNK_014e911d < UNK_014e8cbd) * UNK_014e8cbd |
                                (UNK_014e911d >= UNK_014e8cbd) * UNK_014e911d) == UNK_014e911d) &
                       UNK_014ea36d;
        in_XMM2[0xe] = ~-((byte)((UNK_014e911e < UNK_014e8cbe) * UNK_014e8cbe |
                                (UNK_014e911e >= UNK_014e8cbe) * UNK_014e911e) == UNK_014e911e) &
                       UNK_014ea36e;
        in_XMM2[0xf] = ~-((byte)((UNK_014e911f < UNK_014e8cbf) * UNK_014e8cbf |
                                (UNK_014e911f >= UNK_014e8cbf) * UNK_014e911f) == UNK_014e911f) &
                       UNK_014ea36f;
        in_XMM2._0_8_ =
             CONCAT17((~-((byte)((bVar53 < UNK_014e8cb7) * UNK_014e8cb7 |
                                (bVar53 >= UNK_014e8cb7) * bVar53) == bVar53) & UNK_014ea367) +
                      cVar12,CONCAT16((~-((byte)((bVar51 < UNK_014e8cb6) * UNK_014e8cb6 |
                                                (bVar51 >= UNK_014e8cb6) * bVar51) == bVar51) &
                                      UNK_014ea366) + cVar52,
                                      CONCAT15((~-((byte)((bVar49 < UNK_014e8cb5) * UNK_014e8cb5 |
                                                         (bVar49 >= UNK_014e8cb5) * bVar49) ==
                                                  bVar49) & UNK_014ea365) + cVar50,
                                               CONCAT14((~-((byte)((bVar47 < UNK_014e8cb4) *
                                                                   UNK_014e8cb4 |
                                                                  (bVar47 >= UNK_014e8cb4) * bVar47)
                                                           == bVar47) & UNK_014ea364) + cVar48,
                                                        CONCAT13((~-((byte)((bVar45 < UNK_014e8cb3)
                                                                            * UNK_014e8cb3 |
                                                                           (bVar45 >= UNK_014e8cb3)
                                                                           * bVar45) == bVar45) &
                                                                 UNK_014ea363) + cVar46,
                                                                 CONCAT12((~-((byte)((bVar43 < 
                                                  UNK_014e8cb2) * UNK_014e8cb2 |
                                                  (bVar43 >= UNK_014e8cb2) * bVar43) == bVar43) &
                                                  UNK_014ea362) + cVar44,
                                                  CONCAT11((~-((byte)((bVar41 < UNK_014e8cb1) *
                                                                      UNK_014e8cb1 |
                                                                     (bVar41 >= UNK_014e8cb1) *
                                                                     bVar41) == bVar41) &
                                                           UNK_014ea361) + cVar42,
                                                           (~-((byte)((bVar40 < DAT_014e8cb0) *
                                                                      DAT_014e8cb0 |
                                                                     (bVar40 >= DAT_014e8cb0) *
                                                                     bVar40) == bVar40) &
                                                           DAT_014ea360) + (char)uVar25)))))));
        *(undefined8 *)(pcVar9 + (long)puVar32) = in_XMM2._0_8_;
        puVar32 = puVar32 + 1;
      } while (puVar35 != puVar32);
      if (puVar14 == puVar35) goto LAB_06ce5c4d;
    }
LAB_06ce5c2c:
    do {
      cVar12 = *pcVar34;
      cVar42 = cVar12 + ' ';
      if (0x19 < (byte)(cVar12 + 0xbfU)) {
        cVar42 = cVar12;
      }
      *pcVar34 = cVar42;
      pcVar34 = pcVar34 + 1;
    } while (pcVar34 != pcVar9 + (long)puVar14);
  }
LAB_06ce5c4d:
  if (((ulong)uStack_2c8 & 1) != 0) {
    thunk_FUN_0ee326a0(lStack_2b8,(ulong)uStack_2c8 & 0xfffffffffffffffe);
  }
  plVar16 = plStack_e0;
  if (plStack_e0 != (long *)0x0) {
    LOCK();
    plVar33 = plStack_e0 + 1;
    lVar27 = *plVar33;
    *plVar33 = *plVar33 + -1;
    UNLOCK();
    if (lVar27 == 0) {
      (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
      func_0x0412c2d0(plVar16);
    }
  }
  if (((ulong)puStack_310 & 1) != 0) {
    thunk_FUN_0ee326a0(puStack_300,(ulong)puStack_310 & 0xfffffffffffffffe);
  }
  uStack_b0 = ((long)puStack_230 - (long)puStack_238 >> 3) * 0x6db6db6db6db6db7;
  uStack_2c8 = (ulong **)auStack_3e8;
  puStack_310 = &uStack_b0;
  func_0x06124e20(&puStack_288,uStack_2c8,&UNK_01563a4f,&uStack_2c8,&puStack_310);
  if ((extraout_RDX & 1) != 0) {
    psVar31 = (short *)(*(long *)(lVar18 + 0x40) + 0x128);
    if (*(short *)(lVar18 + 0x48) == 0x7fff) {
      psVar31 = psVar3;
    }
    if (*(long *)(lVar18 + 0x40) == 0) {
      psVar31 = psVar3;
    }
    plStack_360 = (long *)(long)*psVar31;
    func_0x06ce7eb0(&puStack_238,&uStack_378);
  }
  if (((ulong)auStack_3e8 & 1) != 0) {
    thunk_FUN_0ee326a0(auStack_3d8._0_8_,(ulong)auStack_3e8 & 0xfffffffffffffffe);
  }
  plVar16 = plStack_2d0;
  puStack_2d8 = &UNK_0f3773c0;
  plStack_2d0 = (long *)0x0;
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 0x90))();
  }
LAB_06ce5db5:
  if ((uStack_358 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_348,uStack_358 & 0xfffffffffffffffe);
  }
  if (((ulong)uStack_378 & 1) != 0) {
    thunk_FUN_0ee326a0(piStack_368,(ulong)uStack_378 & 0xfffffffffffffffe);
  }
LAB_06ce4db0:
  lVar18 = lVar18 + 0xb0;
  lVar27 = lStack_2e8;
  if (lVar18 == lVar37) goto LAB_06ce5efa;
  goto LAB_06ce4dc0;
LAB_06ce6c24:
  func_0x04882e30();
LAB_06ce6c29:
  func_0x04882e30();
LAB_06ce6c2e:
  iVar13 = func_0x04108328(&DAT_0f5ea4a0);
  if (iVar13 != 0) {
    func_0x08b670e0(&DAT_0f5ea138);
    func_0x0eee2f40(&UNK_08b673f0,&DAT_0f5ea138,0xf53dab8);
    func_0x0410844d(&DAT_0f5ea4a0);
  }
  goto LAB_06ce40f1;
}



/* ---- referenced strings ----
 * 0x14ea360          
 */
