/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc3839b0 (ELF vaddr 0xc2839b0)
 * Label: caller-of-callee
 * Body:  [[0c3839b0, 0c383b71] [0c383b80, 0c383d45] [0c383d50, 0c383df7] [0c383e00, 0c383e38] [0c383e40, 0c383f98] [0c383fa0, 0c383ffe] [0c384000, 0c384037] [0c384040, 0c384138] [0c384140, 0c3841e6] [0c3841f0, 0c384373] [0c384380, 0c38447c] [0c384480, 0c384517] [0c384520, 0c384542] [0c384550, 0c3845c9] [0c3845d0, 0c384695] [0c3846a0, 0c38488c] [0c384890, 0c384905] [0c384910, 0c384b41] [0c384e73, 0c384ec5]]
 * Ghidra: FUN_0c3839b0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c3839b0(undefined8 param_1,int param_2,uint param_3,uint param_4,long *param_5)

{
  char cVar1;
  byte bVar2;
  code *pcVar3;
  undefined7 *puVar4;
  ulong *puVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  ulong *puVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  uint uVar14;
  long *plVar15;
  undefined *puVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  uint *puVar20;
  undefined8 *puVar21;
  long *plVar22;
  long *plVar23;
  undefined1 *puVar24;
  ulong uVar25;
  bool bVar26;
  float fVar27;
  undefined8 uVar28;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar29;
  undefined1 auStack_348 [4];
  undefined4 uStack_344;
  undefined8 uStack_340;
  undefined8 uStack_338;
  ulong uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  undefined8 uStack_318;
  ulong uStack_310;
  undefined1 *puStack_308;
  undefined4 uStack_2f8;
  uint uStack_2f4;
  uint uStack_2f0;
  uint uStack_2ec;
  long lStack_2e8;
  ulong **ppuStack_2d8;
  ulong **ppuStack_2d0;
  ulong **ppuStack_2c8;
  undefined1 uStack_2c0;
  uint uStack_2b0;
  int iStack_2ac;
  ulong *puStack_2a8;
  ulong *puStack_2a0;
  ulong *puStack_298;
  long *plStack_290;
  undefined8 uStack_288;
  ulong uStack_280;
  long lStack_278;
  ulong *puStack_270;
  undefined1 auStack_268 [16];
  ulong uStack_250;
  ulong **ppuStack_248;
  undefined1 uStack_240;
  undefined8 uStack_238;
  byte bStack_230;
  undefined7 uStack_22f;
  ulong uStack_228;
  ulong uStack_220;
  uint uStack_218;
  uint uStack_214;
  byte bStack_210;
  undefined7 uStack_20f;
  ulong uStack_208;
  undefined7 *puStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  undefined8 uStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  long *plStack_1c0;
  ulong uStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  long *plStack_178;
  long *plStack_170;
  long *plStack_168;
  uint *puStack_160;
  undefined8 uStack_158;
  ulong *puStack_150;
  long alStack_148 [3];
  undefined *puStack_130;
  undefined1 auStack_128 [8];
  long alStack_120 [2];
  ulong uStack_110;
  long lStack_108;
  ulong uStack_100;
  byte bStack_f0;
  undefined7 uStack_ef;
  undefined8 uStack_e0;
  ulong uStack_d8;
  uint uStack_d0;
  undefined1 auStack_c8 [152];
  
  if (param_3 < 0x26) {
    uVar18 = (ulong)param_4;
    plVar15 = *(long **)((ulong)param_3 * 8 + 0xf6e9e40);
    if (plVar15 != (long *)0x0) {
      cVar1 = *(char *)((long)plVar15 + 0xc);
      puStack_160 = (uint *)&UNK_01c049e8;
      if (cVar1 != '\0') {
        puStack_160 = (uint *)&UNK_01c049d0;
      }
      bVar2 = (byte)*puStack_160;
      uStack_158 = param_1;
      if ((bVar2 & 1) == 0) {
        lStack_2e8 = *(long *)(puStack_160 + 4);
        uStack_2f8 = *puStack_160;
        uStack_2f4 = puStack_160[1];
        uStack_2f0 = puStack_160[2];
        uStack_2ec = puStack_160[3];
        iVar8 = (int)plVar15[1];
      }
      else {
        func_0x0412e5e0(&uStack_2f8,0,0);
        iVar8 = (int)plVar15[1];
      }
      if (iVar8 != 0) {
        plVar23 = (long *)plVar15[0x27];
        plVar22 = (long *)plVar15[0x28];
        if (((long)plVar22 - (long)plVar23 == -0x18) ||
           (plVar22 != (long *)0x0 && plVar23 == (long *)0x0)) {
          func_0x04890760();
LAB_0c384b1a:
          func_0x04882e30();
LAB_0c384b1f:
          func_0x04882e30();
LAB_0c384b24:
          func_0x04882e30();
LAB_0c384b29:
          uVar28 = func_0x04882e30();
          func_0x041084d6(&DAT_0f5ea4a0);
          if ((bStack_230 & 1) != 0) {
            func_0x0412a280(uStack_220,CONCAT71(uStack_22f,bStack_230) & 0xfffffffffffffffe);
          }
          func_0x04143680(alStack_148);
          if ((uStack_2f8 & 1) != 0) {
            func_0x0412a280(lStack_2e8,CONCAT44(uStack_2f4,uStack_2f8) & 0xfffffffffffffffe);
          }
          func_0x0eee2d70(uVar28);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (plVar22 != plVar23) {
          puVar16 = &UNK_01c049e8;
          if (cVar1 != '\0') {
            puVar16 = &UNK_01c049d0;
          }
          bVar6 = bVar2 >> 1;
          puStack_1a8 = puVar16 + 1;
          if ((bVar2 & 1) != 0) {
            bVar6 = 0;
            puStack_1a8 = (undefined *)0x0;
          }
          uStack_1b0 = (ulong)bVar6;
          uStack_214 = param_4 + 1;
          uStack_2b0 = uStack_214 & 7;
          uStack_218 = uStack_214 & 0xfffffff8;
          puStack_180 = &UNK_0eeed150;
          puStack_188 = &UNK_0eeece20;
          iStack_2ac = param_2;
          uStack_1e0 = uVar18;
          uStack_1a0 = _UNK_0eeed520;
          uStack_198 = _UNK_0eeed518;
          lStack_190 = _UNK_0eeed4d8;
          plStack_178 = plVar22;
          plStack_170 = plVar15;
          plStack_168 = param_5;
          do {
            if (plVar23[1] != 0) {
              uVar17 = *(uint *)(plVar23[1] + 0xc);
              uVar14 = (uint)uVar18;
              uVar28 = (**(code **)(*plVar15 + 0x48))(plVar15,uVar18 & 0xffffffff);
              auStack_268._0_4_ = (float)uVar28 * _DAT_01198c58;
              if (1 < uVar17 - 1) {
                auStack_268._0_4_ = (float)uVar28;
              }
              auStack_268._4_4_ = (int)((ulong)uVar28 >> 0x20);
              auStack_268._8_4_ = extraout_XMM0_Dc;
              auStack_268._12_4_ = extraout_XMM0_Dd;
              uStack_250 = (ulong)uVar17;
              if ((param_2 == 4) || (param_2 == 0x11)) {
                lVar10 = func_0x0b403b60(param_5,0xf6cda90);
                auStack_268._0_4_ = *(undefined4 *)(lVar10 + 0x7c);
                lVar10 = (**(code **)(*param_5 + 0x270))(param_5);
                iVar7 = 0;
                iVar8 = 0;
                if (*(long **)(lVar10 + 8) == (long *)0x0) {
LAB_0c383c78:
                  iVar7 = iVar8;
                }
                else {
                  plVar15 = (long *)**(long **)(lVar10 + 8);
                  if (plVar15 != (long *)0x0) {
                    iVar8 = (**(code **)(*plVar15 + 0x130))();
                    goto LAB_0c383c78;
                  }
                }
                auStack_268._0_4_ = (float)auStack_268._0_4_ + (float)iVar7;
                fVar29 = (float)auStack_268._0_4_;
                if (param_2 == 4) {
                  if (-1 < (int)uVar14) {
                    uVar9 = uStack_218;
                    uVar17 = uStack_2b0;
                    if (6 < uVar14) {
                      do {
                        fVar29 = (((((((fVar29 * _DAT_01198b54 + _DAT_011983f0) * _DAT_01198b54 +
                                      _DAT_011983f0) * _DAT_01198b54 + _DAT_011983f0) *
                                     _DAT_01198b54 + _DAT_011983f0) * _DAT_01198b54 + _DAT_011983f0)
                                   * _DAT_01198b54 + _DAT_011983f0) * _DAT_01198b54 + _DAT_011983f0)
                                 * _DAT_01198b54 + _DAT_011983f0;
                        uVar9 = uVar9 - 8;
                      } while (uVar9 != 0);
                    }
                    for (; uVar17 != 0; uVar17 = uVar17 - 1) {
                      fVar29 = fVar29 * _DAT_01198b54 + _DAT_011983f0;
                    }
                  }
                }
                else {
                  fVar27 = (float)auStack_268._0_4_;
                  uVar17 = uStack_214;
                  if (-1 < (int)uVar14) {
                    do {
                      fVar27 = fVar27 * _DAT_011985e4 + _DAT_01198780;
                      fVar29 = 0.0;
                      if (fVar27 < 0.0) break;
                      uVar17 = uVar17 - 1;
                      fVar29 = fVar27;
                    } while (uVar17 != 0);
                  }
                }
                auStack_268 = ZEXT416((uint)(fVar29 - (float)auStack_268._0_4_));
                uStack_250 = 0;
              }
              func_0x04886140(alStack_148);
              func_0x0413be50(auStack_268._0_4_ & _DAT_014e7ba0,alStack_148 + 2);
              plStack_290 = plVar23;
              if ((DAT_0f5ea4a0 == '\0') && (iVar8 = FUN_04108328(&DAT_0f5ea4a0), iVar8 != 0)) {
                func_0x08b670e0(&DAT_0f5ea138);
                __cxa_atexit(&UNK_08b673f0,&DAT_0f5ea138,0xf53dab8);
                func_0x0410844d(&DAT_0f5ea4a0);
                plVar23 = plStack_290;
              }
              lVar10 = *plVar23;
              bVar6 = *(byte *)(lVar10 + 0x10);
              if ((bVar6 & 1) == 0) {
                uVar18 = (ulong)(bVar6 >> 1);
              }
              else {
                uVar18 = *(ulong *)(lVar10 + 0x18);
              }
              uVar19 = uVar18 + 0xf;
              if (0xfffffffffffffff7 < uVar19) goto LAB_0c384b1a;
              if (uVar19 < 0x17) {
                uStack_340 = 0;
                uStack_338 = (undefined8 *)0x0;
                _auStack_348 = (ulong)(byte)((char)uVar19 * '\x02');
              }
              else {
                uVar25 = (uVar19 | 7) + 1;
                if ((uVar19 | 7) == 0x17) {
                  uVar25 = 0x1a;
                }
                puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar25);
                if (puVar12 == (undefined8 *)0x0) {
                  func_0x0eec74c0(uVar25,0);
                }
                _auStack_348 = uVar25 | 1;
                uStack_340 = uVar19;
                uStack_338 = puVar12;
              }
              puVar12 = (undefined8 *)((long)uStack_338 + 0xf);
              bVar26 = (_auStack_348 & 1) == 0;
              puVar21 = uStack_338;
              if (bVar26) {
                puVar21 = (undefined8 *)(auStack_348 + 1);
              }
              *(undefined8 *)((long)puVar21 + 7) = 0x2e656d616e2e6574;
              *puVar21 = 0x7475626972747461;
              plVar23 = plStack_290;
              if (bVar26) {
                puVar12 = &uStack_338;
              }
              if (uVar18 != 0) {
                if ((bVar6 & 1) == 0) {
                  lVar10 = lVar10 + 0x11;
                }
                else {
                  lVar10 = *(long *)(lVar10 + 0x20);
                }
                memmove(puVar12,lVar10,uVar18);
              }
              *(undefined1 *)((long)puVar12 + uVar18) = 0;
              uStack_1c8 = 0;
              plStack_1c0 = (long *)0x0;
              (**(code **)(_DAT_0f5ea138 + 0x90))(&bStack_230,&DAT_0f5ea138,auStack_348,&uStack_1c8)
              ;
              plVar15 = plStack_1c0;
              if (plStack_1c0 != (long *)0x0) {
                LOCK();
                plVar22 = plStack_1c0 + 1;
                lVar10 = *plVar22;
                *plVar22 = *plVar22 + -1;
                UNLOCK();
                if (lVar10 == 0) {
                  (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
                  func_0x0412c2d0(plVar15);
                }
              }
              if ((_auStack_348 & 1) != 0) {
                func_0x0412a280(uStack_338,_auStack_348 & 0xfffffffffffffffe);
              }
              uVar17 = (uint)uStack_250;
              if ((DAT_0f5ea4a0 == '\0') && (iVar8 = FUN_04108328(&DAT_0f5ea4a0), iVar8 != 0)) {
                func_0x08b670e0(&DAT_0f5ea138);
                __cxa_atexit(&UNK_08b673f0,&DAT_0f5ea138,0xf53dab8);
                func_0x0410844d(&DAT_0f5ea4a0);
                uVar17 = (uint)uStack_250;
                plVar23 = plStack_290;
              }
              if ((int)uVar17 < 0) {
                _auStack_348 = CONCAT71(stack0xfffffffffffffcb9,0x2d);
                uVar17 = -uVar17;
                puVar13 = auStack_348 + 1;
                lVar10 = (long)&uStack_338 + (4 - (long)puVar13);
                if (lVar10 < 10) goto LAB_0c383fbd;
LAB_0c384000:
                lVar10 = func_0x04136630(puVar13,uVar17);
                uVar18 = lVar10 - (long)auStack_348;
                if (0xfffffffffffffff7 < uVar18) goto LAB_0c384b29;
                if (uVar18 < 0x17) {
                  uStack_288 = CONCAT71(uStack_288._1_7_,(char)uVar18 * '\x02');
                  lVar10 = (long)&uStack_288 + 1;
                  if (uVar18 == 0) {
                    uVar18 = 0;
                    goto LAB_0c3840a2;
                  }
                }
                else {
                  uVar19 = (uVar18 | 7) + 1;
                  if ((uVar18 | 7) == 0x17) {
                    uVar19 = 0x1a;
                  }
                  lVar10 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar19);
                  if (lVar10 == 0) {
                    func_0x0eec74c0(uVar19,0);
                  }
                  uStack_288 = uVar19 | 1;
                  uStack_280 = uVar18;
                  lStack_278 = lVar10;
                }
                func_0x0eee2f00(lVar10,auStack_348,uVar18);
              }
              else {
                lVar10 = (long)&uStack_338 + (4 - (long)auStack_348);
                puVar13 = auStack_348;
                if (9 < lVar10) goto LAB_0c384000;
LAB_0c383fbd:
                iVar8 = 0x1f;
                if ((uVar17 | 1) != 0) {
                  for (; (uVar17 | 1) >> iVar8 == 0; iVar8 = iVar8 + -1) {
                  }
                }
                uVar14 = iVar8 * 0x4d1 + 0x4d1U >> 0xc;
                if ((long)(ulong)((uVar14 - (uVar17 < *(uint *)(&UNK_014edae0 + (ulong)uVar14 * 4)))
                                 + 1) <= lVar10) goto LAB_0c384000;
                uStack_288 = uStack_288 & 0xffffffffffffff00;
                uVar18 = 0;
                lVar10 = (long)&uStack_288 + 1;
              }
LAB_0c3840a2:
              *(undefined1 *)(lVar10 + uVar18) = 0;
              puVar16 = &UNK_0133642f;
              if (_DAT_011983fc < (float)auStack_268._0_4_) {
                puVar16 = &UNK_012e7e35;
              }
              puVar11 = (ulong *)func_0x0412f0e0(&uStack_288,0,puVar16,0x18);
              uVar18 = _auStack_348;
              uStack_1e8 = puVar11[2];
              uStack_1f8 = *puVar11;
              uStack_1f0 = puVar11[1];
              *puVar11 = 0;
              puVar11[1] = 0;
              puVar11[2] = 0;
              if ((uStack_d0 & 0x10) == 0) {
                if ((uStack_d0 & 8) != 0) {
                  plVar15 = alStack_120;
                  uVar19 = uStack_110;
                  goto LAB_0c38417a;
                }
joined_r0x0c3841b4:
                _auStack_348 = uVar18 & 0xffffffffffff0000;
                if ((bStack_230 & 1) != 0) goto LAB_0c3841c0;
LAB_0c384264:
                uStack_320 = uStack_220;
                uStack_330 = CONCAT71(uStack_22f,bStack_230);
                uStack_328 = uStack_228;
              }
              else {
                plVar15 = &lStack_108;
                uVar19 = uStack_d8;
                if (uStack_d8 < uStack_100) {
                  uStack_d8 = uStack_100;
                  uVar19 = uStack_100;
                }
LAB_0c38417a:
                lVar10 = *plVar15;
                uVar19 = uVar19 - lVar10;
                if (0xfffffffffffffff7 < uVar19) goto LAB_0c384b24;
                if (uVar19 < 0x17) {
                  _auStack_348 = CONCAT71(stack0xfffffffffffffcb9,(char)uVar19 * '\x02');
                  puVar12 = (undefined8 *)(auStack_348 + 1);
                  if (uVar19 == 0) goto joined_r0x0c3841b4;
                }
                else {
                  uVar18 = (uVar19 | 7) + 1;
                  if ((uVar19 | 7) == 0x17) {
                    uVar18 = 0x1a;
                  }
                  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar18);
                  if (puVar12 == (undefined8 *)0x0) {
                    func_0x0eec74c0(uVar18,0);
                  }
                  _auStack_348 = uVar18 | 1;
                  plVar23 = plStack_290;
                  uStack_340 = uVar19;
                  uStack_338 = puVar12;
                }
                memmove(puVar12,lVar10,uVar19);
                *(undefined1 *)((long)puVar12 + uVar19) = 0;
                if ((bStack_230 & 1) == 0) goto LAB_0c384264;
LAB_0c3841c0:
                func_0x0412e5e0(&uStack_330,uStack_220,uStack_228);
              }
              puStack_2a8 = (ulong *)0x0;
              puStack_2a0 = (ulong *)0x0;
              puStack_298 = (ulong *)0x0;
              uStack_240 = 0;
              ppuStack_248 = &puStack_2a8;
              puVar11 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
              if (puVar11 == (ulong *)0x0) {
                func_0x0eec74c0(0x30,0);
              }
              puStack_298 = puVar11 + 6;
              ppuStack_2d0 = &puStack_150;
              ppuStack_2c8 = &puStack_270;
              uStack_2c0 = 0;
              ppuStack_2d8 = &puStack_2a8;
              puStack_2a8 = puVar11;
              puStack_2a0 = puVar11;
              puStack_150 = puVar11;
              if ((_auStack_348 & 1) == 0) {
                puVar11[2] = (ulong)uStack_338;
                *(undefined1 (*) [4])puVar11 = auStack_348;
                *(undefined4 *)((long)puVar11 + 4) = uStack_344;
                *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_340;
                *(undefined4 *)((long)puVar11 + 0xc) = uStack_340._4_4_;
                puStack_270 = puVar11 + 3;
                if ((uStack_330 & 1) == 0) goto LAB_0c38435f;
LAB_0c3843ad:
                func_0x0412e5e0(puStack_270,uStack_320,uStack_328);
              }
              else {
                puStack_270 = puVar11;
                func_0x0412e5e0(puVar11,uStack_338,uStack_340);
                puStack_270 = puStack_270 + 3;
                if ((uStack_330 & 1) != 0) goto LAB_0c3843ad;
LAB_0c38435f:
                puStack_270[2] = uStack_320;
                *puStack_270 = uStack_330;
                puStack_270[1] = uStack_328;
              }
              puStack_2a0 = puStack_270 + 3;
              uStack_1d8 = 0;
              plStack_1d0 = (long *)0x0;
              (**(code **)(_DAT_0f5ea138 + 0x88))
                        (&uStack_318,&DAT_0f5ea138,&uStack_1f8,&puStack_2a8,&uStack_1d8);
              ppuStack_2d8 = (ulong **)CONCAT44(ppuStack_2d8._4_4_,0x252504);
              ppuStack_248 = (ulong **)CONCAT53(ppuStack_248._3_5_,0x2502);
              func_0x0edfb6f0(&bStack_210,&uStack_318,&ppuStack_2d8,&ppuStack_248,0xffffffff);
              if (((ulong)ppuStack_248 & 1) != 0) {
                func_0x0412a280(uStack_238,(ulong)ppuStack_248 & 0xfffffffffffffffe);
              }
              if (((ulong)ppuStack_2d8 & 1) != 0) {
                func_0x0412a280(ppuStack_2c8,(ulong)ppuStack_2d8 & 0xfffffffffffffffe);
              }
              plVar15 = plStack_1d0;
              if ((uStack_318 & 1) != 0) {
                func_0x0412a280(puStack_308,uStack_318 & 0xfffffffffffffffe);
                plVar15 = plStack_1d0;
              }
              puVar11 = puStack_2a8;
              plStack_1d0 = plVar15;
              if (plVar15 != (long *)0x0) {
                LOCK();
                plVar22 = plVar15 + 1;
                lVar10 = *plVar22;
                *plVar22 = *plVar22 + -1;
                UNLOCK();
                if (lVar10 == 0) {
                  (**(code **)(*plVar15 + 0x10))(plVar15);
                  func_0x0412c2d0(plVar15);
                  puVar11 = puStack_2a8;
                }
              }
              puStack_2a8 = puVar11;
              puVar5 = puStack_2a0;
              if (puVar11 != (ulong *)0x0) {
                for (; puVar11 != puVar5; puVar5 = puVar5 + -3) {
                  if ((puVar5[-3] & 1) != 0) {
                    func_0x0412a280(puVar5[-1],puVar5[-3] & 0xfffffffffffffffe);
                  }
                }
                puStack_2a0 = puVar11;
                func_0x0412a280(puStack_2a8,(long)puStack_298 - (long)puStack_2a8);
              }
              if ((uStack_330 & 1) == 0) {
                if ((_auStack_348 & 1) == 0) goto LAB_0c384586;
LAB_0c3845f2:
                puVar20 = puStack_160;
                func_0x0412a280(uStack_338,_auStack_348 & 0xfffffffffffffffe);
                if ((uStack_1f8 & 1) != 0) goto LAB_0c38460f;
LAB_0c384590:
                if ((uStack_288 & 1) == 0) goto LAB_0c38459e;
LAB_0c384636:
                func_0x0412a280(lStack_278,uStack_288 & 0xfffffffffffffffe);
                if ((uStack_2f8 & 1) != 0) goto LAB_0c38465a;
LAB_0c3845a9:
                if ((bVar2 & 1) == 0) {
                  lStack_2e8 = *(long *)(puVar20 + 4);
                  uStack_2f8 = *puVar20;
                  uStack_2f4 = puVar20[1];
                  uStack_2f0 = puVar20[2];
                  uStack_2ec = puVar20[3];
                }
                else {
                  func_0x04885070(&uStack_2f8,0,0);
                }
              }
              else {
                func_0x0412a280(uStack_320,uStack_330 & 0xfffffffffffffffe);
                if ((_auStack_348 & 1) != 0) goto LAB_0c3845f2;
LAB_0c384586:
                puVar20 = puStack_160;
                if ((uStack_1f8 & 1) == 0) goto LAB_0c384590;
LAB_0c38460f:
                func_0x0412a280(uStack_1e8,uStack_1f8 & 0xfffffffffffffffe);
                if ((uStack_288 & 1) != 0) goto LAB_0c384636;
LAB_0c38459e:
                if ((uStack_2f8 & 1) == 0) goto LAB_0c3845a9;
LAB_0c38465a:
                FUN_04885120(&uStack_2f8,puStack_1a8,uStack_1b0);
              }
              uVar17 = uStack_2f8;
              if ((uStack_2f8 & 1) == 0) {
                uVar19 = (ulong)((byte)uStack_2f8 >> 1);
              }
              else {
                uVar19 = CONCAT44(uStack_2ec,uStack_2f0);
              }
              uVar18 = uVar19 + 1;
              if (0xfffffffffffffff7 < uVar18) goto LAB_0c384b1f;
              if (uVar18 < 0x17) {
                uStack_310 = 0;
                puStack_308 = (undefined1 *)0x0;
                uStack_318 = (ulong)CONCAT11(10,(char)uVar18 * '\x02');
                puVar24 = (undefined1 *)((long)&uStack_318 + 2);
                uVar18 = uStack_1e0;
                param_2 = iStack_2ac;
                if (uVar19 != 0) goto joined_r0x0c3848fb;
              }
              else {
                uVar25 = (uVar18 | 7) + 1;
                if ((uVar18 | 7) == 0x17) {
                  uVar25 = 0x1a;
                }
                puVar13 = (undefined1 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar25);
                if (puVar13 == (undefined1 *)0x0) {
                  func_0x0eec74c0(uVar25,0);
                }
                uStack_318 = uVar25 | 1;
                *puVar13 = 10;
                puVar24 = puVar13 + 1;
                uStack_310 = uVar18;
                puStack_308 = puVar13;
                param_2 = iStack_2ac;
                uVar18 = uStack_1e0;
joined_r0x0c3848fb:
                lVar10 = (long)&uStack_2f8 + 1;
                if ((uVar17 & 1) != 0) {
                  lVar10 = lStack_2e8;
                }
                iStack_2ac = param_2;
                uStack_1e0 = uVar18;
                memmove(puVar24,lVar10,uVar19);
              }
              puVar24[uVar19] = 0;
              uVar19 = (ulong)(bStack_210 >> 1);
              puVar4 = &uStack_20f;
              if ((bStack_210 & 1) != 0) {
                uVar19 = uStack_208;
                puVar4 = puStack_200;
              }
              puVar11 = (ulong *)func_0x0412f8c0(&uStack_318,puVar4,uVar19);
              ppuStack_2c8 = (ulong **)puVar11[2];
              ppuStack_2d8 = (ulong **)*puVar11;
              ppuStack_2d0 = (ulong **)puVar11[1];
              *puVar11 = 0;
              puVar11[1] = 0;
              puVar11[2] = 0;
              puVar11 = (ulong *)func_0x0412f8c0(&ppuStack_2d8,&UNK_01c04a01,3);
              param_5 = plStack_168;
              uStack_338 = (undefined8 *)puVar11[2];
              _auStack_348 = *puVar11;
              uStack_340 = puVar11[1];
              *puVar11 = 0;
              puVar11[1] = 0;
              puVar11[2] = 0;
              func_0x09af20d0(uStack_158,auStack_348);
              if ((_auStack_348 & 1) != 0) {
                func_0x0412a280(uStack_338,_auStack_348 & 0xfffffffffffffffe);
              }
              if (((ulong)ppuStack_2d8 & 1) != 0) {
                func_0x0412a280(ppuStack_2c8,(ulong)ppuStack_2d8 & 0xfffffffffffffffe);
              }
              if ((uStack_318 & 1) != 0) {
                func_0x0412a280(puStack_308,uStack_318 & 0xfffffffffffffffe);
              }
              if ((bStack_210 & 1) != 0) {
                func_0x0412a280(puStack_200,CONCAT71(uStack_20f,bStack_210) & 0xfffffffffffffffe);
              }
              if ((bStack_230 & 1) != 0) {
                func_0x0412a280(uStack_220,CONCAT71(uStack_22f,bStack_230) & 0xfffffffffffffffe);
              }
              alStack_148[0] = lStack_190;
              *(undefined8 *)((long)alStack_148 + *(long *)(lStack_190 + -0x18)) = uStack_198;
              alStack_148[2] = uStack_1a0;
              puStack_130 = puStack_180;
              if ((bStack_f0 & 1) != 0) {
                func_0x0412a280(uStack_e0,CONCAT71(uStack_ef,bStack_f0) & 0xfffffffffffffffe);
              }
              puStack_130 = puStack_188;
              func_0x04167a40(auStack_128);
              func_0x0413c8a0(alStack_148,&UNK_0eeed4e0);
              func_0x04138180(auStack_c8);
              plVar15 = plStack_170;
              plVar22 = plStack_178;
            }
            plVar23 = plVar23 + 3;
          } while (plVar23 != plVar22);
        }
      }
      if ((uStack_2f8 & 1) != 0) {
        func_0x0412a280(lStack_2e8,CONCAT44(uStack_2f4,uStack_2f8) & 0xfffffffffffffffe);
      }
    }
  }
  return;
}


