/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca23480 (ELF vaddr 0xc923480)
 * Label: caller-of-callee
 * Body:  [[0ca23480, 0ca235e1] [0ca235f0, 0ca23700] [0ca23710, 0ca23815] [0ca23820, 0ca23c14] [0ca23c20, 0ca23ca2] [0ca23cb0, 0ca24145] [0ca24150, 0ca2430d] [0ca24310, 0ca24484]]
 * Ghidra: FUN_0ca23480
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0ca23480(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  char cVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined4 *puVar15;
  byte *extraout_RDX;
  ulong uVar16;
  undefined8 *puVar17;
  byte *pbVar18;
  undefined8 *puVar19;
  bool bVar20;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 uStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 *puStack_2a0;
  long lStack_298;
  undefined4 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  long lStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  ulong uStack_228;
  undefined8 *puStack_220;
  undefined1 auStack_218 [16];
  undefined1 auStack_208 [16];
  undefined1 auStack_1f8 [16];
  undefined1 auStack_1e8 [16];
  undefined1 auStack_1d8 [16];
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  undefined4 *puStack_1b8;
  ulong uStack_1b0;
  undefined8 uStack_1a8;
  undefined4 *puStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  long *plStack_138;
  undefined1 auStack_130 [16];
  byte bStack_120;
  undefined7 uStack_11f;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [192];
  
  plStack_138 = param_1;
  cVar8 = (**(code **)(*param_2 + 0x18))(param_2);
  if (cVar8 != '\x01') {
    lStack_198 = 0;
    lStack_190 = 0;
    lStack_188 = 0;
    puStack_1b8 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    if (puStack_1b8 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x38,0);
    }
    uVar12 = _UNK_0129bc94;
    uStack_1c8 = 0x39;
    uStack_1c0 = 0x34;
    *(undefined8 *)(puStack_1b8 + 8) = _DAT_0129bc8c;
    *(undefined8 *)(puStack_1b8 + 10) = uVar12;
    uVar12 = _UNK_0129bc84;
    *(undefined8 *)(puStack_1b8 + 4) = _DAT_0129bc7c;
    *(undefined8 *)(puStack_1b8 + 6) = uVar12;
    uVar3 = _UNK_0129bc78;
    uVar2 = _UNK_0129bc74;
    uVar9 = _UNK_0129bc70;
    *puStack_1b8 = _DAT_0129bc6c;
    puStack_1b8[1] = uVar9;
    puStack_1b8[2] = uVar2;
    puStack_1b8[3] = uVar3;
    puStack_1b8[0xc] = 0x7475706e;
    *(undefined1 *)(puStack_1b8 + 0xd) = 0;
    func_0x0d6b13c0(param_3,0x10,&lStack_198,&uStack_1c8);
    if ((uStack_1c8 & 1) != 0) {
      thunk_FUN_0ee326a0(puStack_1b8,uStack_1c8 & 0xfffffffffffffffe);
    }
    lVar7 = lStack_198;
    lVar1 = lStack_190;
    if (lStack_198 != 0) {
      for (; lVar7 != lVar1; lVar1 = lVar1 + -0x20) {
        if ((*(byte *)(lVar1 + -0x18) & 1) != 0) {
          thunk_FUN_0ee326a0(*(undefined8 *)(lVar1 + -8),
                             *(ulong *)(lVar1 + -0x18) & 0xfffffffffffffffe);
        }
      }
      lStack_190 = lVar7;
      thunk_FUN_0ee326a0(lStack_198,lStack_188 - lStack_198);
    }
    *plStack_138 = 0;
    plStack_138[1] = 0;
    plStack_138[2] = 0;
    return;
  }
  func_0x04863060(auStack_1d8,0);
  func_0x0485e1c0(auStack_f0);
  bVar20 = (*extraout_RDX & 1) != 0;
  pbVar18 = extraout_RDX + 1;
  if (bVar20) {
    pbVar18 = *(byte **)(extraout_RDX + 0x10);
  }
  uVar16 = (ulong)(*extraout_RDX >> 1);
  if (bVar20) {
    uVar16 = *(ulong *)(extraout_RDX + 8);
  }
  cVar8 = func_0x0485e650(auStack_f0,pbVar18,uVar16,auStack_1d8,0);
  if (cVar8 == '\0') {
    puStack_2a8 = (undefined8 *)0x0;
    puStack_2a0 = (undefined8 *)0x0;
    lStack_298 = 0;
    func_0x04860c50(&uStack_288,auStack_f0);
    lStack_248 = (long)&uStack_288 + 1;
    puStack_240 = (undefined *)((ulong)uStack_288 >> 1 & 0x7f);
    if (((ulong)uStack_288 & 1) != 0) {
      puStack_240 = uStack_280;
      lStack_248 = uStack_278;
    }
    FUN_0470d9a0(&uStack_2c8,&UNK_012cdf49,0x15,0xd,&lStack_248);
    func_0x0d6b13c0(param_3,8,&puStack_2a8,&uStack_2c8);
    if (((ulong)uStack_2c8 & 1) != 0) {
      thunk_FUN_0ee326a0(puStack_2b8,(ulong)uStack_2c8 & 0xfffffffffffffffe);
    }
    if (((ulong)uStack_288 & 1) != 0) {
      thunk_FUN_0ee326a0(uStack_278,(ulong)uStack_288 & 0xfffffffffffffffe);
    }
    puVar17 = puStack_2a8;
    uStack_228 = 0;
    puStack_220 = (undefined8 *)0x0;
    puVar14 = puStack_2a0;
    if (puStack_2a8 != (undefined8 *)0x0) {
      for (; puVar17 != puVar14; puVar14 = puVar14 + -4) {
        if ((*(byte *)(puVar14 + -3) & 1) != 0) {
          thunk_FUN_0ee326a0(puVar14[-1],puVar14[-3] & 0xfffffffffffffffe);
        }
      }
LAB_0ca23880:
      puStack_2a0 = puVar17;
      thunk_FUN_0ee326a0(puStack_2a8,lStack_298 - (long)puStack_2a8);
    }
  }
  else {
    cVar8 = func_0x04864260(auStack_1d8);
    if (cVar8 == '\0') {
      lStack_248 = 0;
      puStack_240 = (undefined *)0x0;
      puStack_238 = (undefined *)0x0;
      uVar12 = func_0x04864680(auStack_1d8,&UNK_013771cd);
      cVar8 = func_0x04864260(uVar12);
      if ((cVar8 == '\0') && (cVar8 = func_0x04865490(uVar12), cVar8 != '\0')) {
        uStack_2c8 = (undefined8 *)((ulong)uStack_2c8 & 0xffffffffffff0000);
        func_0x04863cb0(&puStack_2a8,uVar12,&uStack_2c8);
        func_0x0ee32f20(&puStack_2a8,&lStack_248,0);
        if (((ulong)puStack_2a8 & 1) != 0) {
          thunk_FUN_0ee326a0(lStack_298,(ulong)puStack_2a8 & 0xfffffffffffffffe);
        }
        if (((ulong)uStack_2c8 & 1) != 0) {
          thunk_FUN_0ee326a0(puStack_2b8,(ulong)uStack_2c8 & 0xfffffffffffffffe);
        }
      }
      else {
        puVar6 = puStack_238;
        puVar5 = puStack_240;
        lStack_248 = 0x1000000000000;
        puStack_240 = &UNK_01254d89;
        puStack_238 = &UNK_01254d89;
        if (((ulong)puVar6 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,((ulong)puVar6 & 0xff00ffffffffffff) - 8);
        }
        if (((ulong)puVar5 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,((ulong)puVar5 & 0xff00ffffffffffff) - 8);
        }
      }
      lStack_268 = 0;
      puStack_260 = (undefined8 *)0x0;
      puStack_258 = (undefined8 *)0x0;
      uVar12 = func_0x04864680(auStack_1d8,&UNK_014a08a1);
      func_0x04863480(auStack_1e8,uVar12);
      cVar8 = func_0x04864260(auStack_1e8);
      if ((cVar8 == '\0') && (cVar8 = func_0x04864270(auStack_1e8), cVar8 != '\0')) {
        func_0x04865630(auStack_1f8,auStack_1e8);
        uStack_228 = 0;
        uStack_108 = param_3;
        while( true ) {
          uVar12 = uStack_108;
          func_0x048656b0(&puStack_2a8,auStack_1e8);
          cVar8 = func_0x04862c80(auStack_1f8,&puStack_2a8);
          func_0x04862b40(&puStack_2a8);
          if (cVar8 != '\0') break;
          uVar13 = func_0x04862b80(auStack_1f8);
          func_0x04863480(auStack_130,uVar13);
          uVar13 = func_0x04864680(auStack_130,&UNK_012a2b50);
          func_0x04863480(auStack_208,uVar13);
          cVar8 = func_0x04864260(auStack_208);
          if (cVar8 == '\0') {
            cVar8 = func_0x04864270(auStack_208);
            if (cVar8 != '\0') {
              uStack_2c8 = (undefined8 *)0x0;
              uStack_2c0 = (undefined8 *)0x0;
              puStack_2b8 = (undefined8 *)0x0;
              uStack_2b0._0_4_ = 1;
              uVar9 = func_0x048641f0(auStack_208);
              func_0x0ca21fb0(&uStack_2c8,uVar9);
              uVar13 = func_0x04864680(auStack_130,&UNK_013374c7);
              uVar9 = func_0x04863e30(uVar13,uStack_228);
              uStack_2b0 = CONCAT44(uStack_2b0._4_4_,uVar9);
              func_0x04865630(auStack_218,auStack_208);
LAB_0ca23d0e:
              func_0x048656b0(&puStack_2a8,auStack_208);
              cVar8 = func_0x04862c80(auStack_218,&puStack_2a8);
              func_0x04862b40(&puStack_2a8);
              if (cVar8 == '\0') {
                uStack_288 = (undefined8 *)((ulong)uStack_288 & 0xffffffff00000000);
                uStack_280 = (undefined *)0x0;
                uStack_278 = 0;
                uStack_270 = 0;
                uVar13 = func_0x04862b80(auStack_218);
                func_0x04863480(auStack_100,uVar13);
                uVar13 = func_0x04864680(auStack_100,&UNK_01456eaf);
                iVar10 = func_0x04863e00(uVar13,0xffffffff);
                uStack_288 = (undefined8 *)CONCAT44(uStack_288._4_4_,iVar10);
                uVar13 = func_0x04864680(auStack_100,&UNK_01409aac);
                cVar8 = func_0x0ca22120(uVar12,&uStack_288,uVar13,&lStack_248);
                if (cVar8 == '\0') goto LAB_0ca23cec;
                iVar11 = (int)((ulong)(uStack_278 - (long)uStack_280) >> 6);
                if (iVar10 <= iVar11) {
                  if (uStack_2c0 < puStack_2b8) {
                    *(undefined4 *)uStack_2c0 = (undefined4)uStack_288;
                    uStack_2c0[1] = 0;
                    uStack_2c0[2] = 0;
                    uStack_2c0[3] = 0;
                    *(undefined4 *)(uStack_2c0 + 1) = (undefined4)uStack_280;
                    *(undefined4 *)((long)uStack_2c0 + 0xc) = uStack_280._4_4_;
                    *(undefined4 *)(uStack_2c0 + 2) = (undefined4)uStack_278;
                    *(undefined4 *)((long)uStack_2c0 + 0x14) = uStack_278._4_4_;
                    uStack_2c0[3] = uStack_270;
                    uStack_280 = (undefined *)0x0;
                    uStack_278 = 0;
                    uStack_270 = 0;
                    uStack_2c0 = uStack_2c0 + 4;
                  }
                  else {
                    uStack_2c0 = (undefined8 *)func_0x0ca38380(&uStack_2c8,&uStack_288);
                  }
                  goto LAB_0ca23cec;
                }
                lStack_178 = 0;
                lStack_170 = 0;
                lStack_168 = 0;
                puStack_2a8 = (undefined8 *)CONCAT44(puStack_2a8._4_4_,iVar10);
                lStack_298 = CONCAT44(lStack_298._4_4_,iVar11);
                FUN_0470d9a0(&bStack_120,&UNK_0124f606,0x43,0x11,&puStack_2a8);
                func_0x0d6b13c0(uVar12,8,&lStack_178,&bStack_120);
                if ((bStack_120 & 1) != 0) {
                  thunk_FUN_0ee326a0(uStack_110,CONCAT71(uStack_11f,bStack_120) & 0xfffffffffffffffe
                                    );
                }
                lVar7 = lStack_178;
                lVar1 = lStack_170;
                if (lStack_178 != 0) {
                  for (; lVar7 != lVar1; lVar1 = lVar1 + -0x20) {
                    if ((*(byte *)(lVar1 + -0x18) & 1) != 0) {
                      thunk_FUN_0ee326a0(*(undefined8 *)(lVar1 + -8),
                                         *(ulong *)(lVar1 + -0x18) & 0xfffffffffffffffe);
                    }
                  }
                  lStack_170 = lVar7;
                  thunk_FUN_0ee326a0(lStack_178,lStack_168 - lStack_178);
                }
                FUN_04863610(auStack_100);
                puStack_2a8 = &uStack_280;
                func_0x0ca38540(&puStack_2a8);
                func_0x04862b40(auStack_218);
                puVar4 = uStack_2c8;
                puVar14 = uStack_2c8;
                puVar17 = uStack_2c0;
                puVar19 = puStack_2b8;
                if (uStack_2c8 != (undefined8 *)0x0) {
                  for (; uStack_2c8 = puVar14, puStack_2b8 = puVar19, puVar4 != puVar17;
                      puVar17 = puVar17 + -4) {
                    puStack_2a8 = puVar17 + -3;
                    func_0x0ca38540(&puStack_2a8);
                    puVar14 = uStack_2c8;
                    puVar19 = puStack_2b8;
                  }
                  uStack_2c0 = puVar4;
                  goto LAB_0ca241fb;
                }
                goto LAB_0ca24203;
              }
              func_0x04862b40(auStack_218);
              if (puStack_260 < puStack_258) {
                *puStack_260 = 0;
                puStack_260[1] = 0;
                puStack_260[2] = 0;
                *(undefined4 *)puStack_260 = (undefined4)uStack_2c8;
                *(undefined4 *)((long)puStack_260 + 4) = uStack_2c8._4_4_;
                *(undefined4 *)(puStack_260 + 1) = (undefined4)uStack_2c0;
                *(undefined4 *)((long)puStack_260 + 0xc) = uStack_2c0._4_4_;
                puStack_260[2] = puStack_2b8;
                uStack_2c8 = (undefined8 *)0x0;
                uStack_2c0 = (undefined8 *)0x0;
                puStack_2b8 = (undefined8 *)0x0;
                *(undefined4 *)(puStack_260 + 3) = (undefined4)uStack_2b0;
                puStack_260 = puStack_260 + 4;
              }
              else {
                puStack_260 = (undefined8 *)func_0x0ca385f0(&lStack_268,&uStack_2c8);
                puVar17 = uStack_2c8;
                puVar14 = uStack_2c0;
                if (uStack_2c8 != (undefined8 *)0x0) {
                  for (; puVar17 != puVar14; puVar14 = puVar14 + -4) {
                    puStack_2a8 = puVar14 + -3;
                    func_0x0ca38540(&puStack_2a8);
                  }
                  uStack_2c0 = puVar17;
                  thunk_FUN_0ee326a0(uStack_2c8,(long)puStack_2b8 - (long)uStack_2c8);
                }
              }
              goto LAB_0ca23fa9;
            }
            puStack_158 = (undefined8 *)0x0;
            puStack_150 = (undefined8 *)0x0;
            puStack_148 = (undefined8 *)0x0;
            puVar15 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
            if (puVar15 == (undefined4 *)0x0) {
              func_0x0eec74c0(0x20,0);
            }
            uVar13 = _UNK_011ae746;
            uStack_1b0 = 0x21;
            uStack_1a8 = 0x19;
            *(ulong *)((long)puVar15 + 9) =
                 CONCAT17(UNK_011ae745,CONCAT43(_UNK_011ae741,_DAT_011ae73e));
            *(undefined8 *)((long)puVar15 + 0x11) = uVar13;
            uVar3 = _UNK_011ae741;
            uVar2 = _UNK_011ae73d;
            uVar9 = _UNK_011ae739;
            *puVar15 = _DAT_011ae735;
            puVar15[1] = uVar9;
            puVar15[2] = uVar2;
            puVar15[3] = uVar3;
            *(undefined1 *)((long)puVar15 + 0x19) = 0;
            puStack_1a0 = puVar15;
            func_0x0d6b13c0(uVar12,8,&puStack_158,&uStack_1b0);
            if ((uStack_1b0 & 1) != 0) {
              thunk_FUN_0ee326a0(puStack_1a0,uStack_1b0 & 0xfffffffffffffffe);
            }
            puVar4 = puStack_158;
            puVar14 = puStack_158;
            puVar17 = puStack_150;
            puVar19 = puStack_148;
            if (puStack_158 != (undefined8 *)0x0) {
              for (; puStack_158 = puVar14, puStack_148 = puVar19, puVar4 != puVar17;
                  puVar17 = puVar17 + -4) {
                if ((*(byte *)(puVar17 + -3) & 1) != 0) {
                  thunk_FUN_0ee326a0(puVar17[-1],puVar17[-3] & 0xfffffffffffffffe);
                }
                puVar14 = puStack_158;
                puVar19 = puStack_148;
              }
              puStack_150 = puVar4;
LAB_0ca241fb:
              thunk_FUN_0ee326a0(puVar14,(long)puVar19 - (long)puVar14);
            }
LAB_0ca24203:
            bVar20 = false;
          }
          else {
            puStack_2a8 = (undefined8 *)0x0;
            puStack_2a0 = (undefined8 *)0x0;
            lStack_298 = 0;
            uStack_290 = 1;
            uStack_2c0 = (undefined8 *)0x0;
            puStack_2b8 = (undefined8 *)0x0;
            uStack_2b0 = 0;
            uStack_2c8 = (undefined8 *)CONCAT44(uStack_2c8._4_4_,0xffffffff);
            uVar13 = func_0x04864680(auStack_130,&UNK_013374c7);
            uStack_290 = func_0x04863e30(uVar13,uStack_228);
            uVar13 = func_0x04864680(auStack_130,&UNK_01409aac);
            cVar8 = func_0x0ca22120(uVar12,&uStack_2c8,uVar13);
            if (cVar8 == '\0') {
              puVar14 = (undefined8 *)0x0;
              if (puStack_258 <= puStack_260) goto LAB_0ca23bfe;
LAB_0ca23f09:
              *puStack_260 = puStack_2a8;
              puStack_260[1] = puVar14;
              puStack_260[2] = lStack_298;
              puStack_2a8 = (undefined8 *)0x0;
              puStack_2a0 = (undefined8 *)0x0;
              lStack_298 = 0;
              *(undefined4 *)(puStack_260 + 3) = uStack_290;
              puStack_260 = puStack_260 + 4;
            }
            else {
              puVar14 = (undefined8 *)func_0x0ca38380(&puStack_2a8,&uStack_2c8);
              puStack_2a0 = puVar14;
              if (puStack_260 < puStack_258) goto LAB_0ca23f09;
LAB_0ca23bfe:
              puStack_260 = (undefined8 *)func_0x0ca385f0(&lStack_268,&puStack_2a8);
            }
            puVar17 = puStack_2a8;
            uStack_288 = &uStack_2c0;
            func_0x0ca38540(&uStack_288);
            puVar14 = puStack_2a0;
            if (puVar17 != (undefined8 *)0x0) {
              for (; puVar17 != puVar14; puVar14 = puVar14 + -4) {
                uStack_2c8 = puVar14 + -3;
                func_0x0ca38540(&uStack_2c8);
              }
              puStack_2a0 = puVar17;
              thunk_FUN_0ee326a0(puVar17,lStack_298 - (long)puVar17);
            }
LAB_0ca23fa9:
            uStack_228 = (ulong)((int)uStack_228 + 1);
            bVar20 = true;
          }
          FUN_04863610(auStack_208);
          FUN_04863610(auStack_130);
          if (!bVar20) {
            func_0x04862b40(auStack_1f8);
            uStack_228 = 0;
            puStack_220 = (undefined8 *)0x0;
            goto LAB_0ca24396;
          }
          func_0x04862ba0(auStack_1f8);
        }
        func_0x04862b40(auStack_1f8);
        puVar14 = puStack_258;
        uStack_228 = lStack_268;
        puStack_220 = puStack_260;
        lStack_268 = 0;
        puStack_260 = (undefined8 *)0x0;
        puStack_258 = (undefined8 *)0x0;
      }
      else {
        puStack_2a8 = (undefined8 *)0x0;
        puStack_2a0 = (undefined8 *)0x0;
        lStack_298 = 0;
        puStack_2b8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (puStack_2b8 == (undefined8 *)0x0) {
          func_0x0eec74c0(0x20,0);
        }
        uVar3 = _UNK_013bceb6;
        uVar2 = _UNK_013bceb2;
        uVar9 = _UNK_013bceae;
        uStack_2c8 = (undefined8 *)0x21;
        uStack_2c0 = (undefined8 *)0x18;
        *(undefined4 *)puStack_2b8 = _DAT_013bceaa;
        *(undefined4 *)((long)puStack_2b8 + 4) = uVar9;
        *(undefined4 *)(puStack_2b8 + 1) = uVar2;
        *(undefined4 *)((long)puStack_2b8 + 0xc) = uVar3;
        puStack_2b8[2] = 0x7961727261206e61;
        *(undefined1 *)(puStack_2b8 + 3) = 0;
        func_0x0d6b13c0(param_3,8,&puStack_2a8,&uStack_2c8);
        if (((ulong)uStack_2c8 & 1) != 0) {
          thunk_FUN_0ee326a0(puStack_2b8,(ulong)uStack_2c8 & 0xfffffffffffffffe);
        }
        puVar17 = puStack_2a8;
        uStack_228 = 0;
        puStack_220 = (undefined8 *)0x0;
        puVar14 = puStack_2a0;
        if (puStack_2a8 != (undefined8 *)0x0) {
          for (; puVar17 != puVar14; puVar14 = puVar14 + -4) {
            if ((*(byte *)(puVar14 + -3) & 1) != 0) {
              thunk_FUN_0ee326a0(puVar14[-1],puVar14[-3] & 0xfffffffffffffffe);
            }
          }
          puStack_2a0 = puVar17;
          thunk_FUN_0ee326a0(puStack_2a8,lStack_298 - (long)puStack_2a8);
        }
LAB_0ca24396:
        puVar14 = (undefined8 *)0x0;
      }
      FUN_04863610(auStack_1e8);
      if (lStack_268 != 0) {
        func_0x0ca39670(&lStack_268);
        thunk_FUN_0ee326a0(lStack_268,(long)puStack_258 - lStack_268);
      }
      if (((ulong)puStack_238 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)puStack_238 & 0xff00ffffffffffff) - 8);
      }
      puStack_238 = (undefined *)0x0;
      if (((ulong)puStack_240 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)puStack_240 & 0xff00ffffffffffff) - 8);
      }
      goto LAB_0ca23894;
    }
    puStack_2a8 = (undefined8 *)0x0;
    puStack_2a0 = (undefined8 *)0x0;
    lStack_298 = 0;
    puStack_2b8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puStack_2b8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    uVar12 = _UNK_0131c107;
    uStack_2c8 = (undefined8 *)0x29;
    uStack_2c0 = (undefined8 *)0x26;
    puStack_2b8[2] = _DAT_0131c0ff;
    puStack_2b8[3] = uVar12;
    uVar3 = _UNK_0131c0fb;
    uVar2 = _UNK_0131c0f7;
    uVar9 = _UNK_0131c0f3;
    *(undefined4 *)puStack_2b8 = _DAT_0131c0ef;
    *(undefined4 *)((long)puStack_2b8 + 4) = uVar9;
    *(undefined4 *)(puStack_2b8 + 1) = uVar2;
    *(undefined4 *)((long)puStack_2b8 + 0xc) = uVar3;
    *(undefined8 *)((long)puStack_2b8 + 0x1e) = 0x2273726569742220;
    *(undefined1 *)((long)puStack_2b8 + 0x26) = 0;
    func_0x0d6b13c0(param_3,8,&puStack_2a8,&uStack_2c8);
    if (((ulong)uStack_2c8 & 1) != 0) {
      thunk_FUN_0ee326a0(puStack_2b8,(ulong)uStack_2c8 & 0xfffffffffffffffe);
    }
    puVar17 = puStack_2a8;
    uStack_228 = 0;
    puStack_220 = (undefined8 *)0x0;
    puVar14 = puStack_2a0;
    if (puStack_2a8 != (undefined8 *)0x0) {
      for (; puVar17 != puVar14; puVar14 = puVar14 + -4) {
        if ((*(byte *)(puVar14 + -3) & 1) != 0) {
          thunk_FUN_0ee326a0(puVar14[-1],puVar14[-3] & 0xfffffffffffffffe);
        }
      }
      goto LAB_0ca23880;
    }
  }
  puVar14 = (undefined8 *)0x0;
LAB_0ca23894:
  func_0x0485e2d0(auStack_f0);
  FUN_04863610(auStack_1d8);
  *plStack_138 = uStack_228;
  plStack_138[1] = (long)puStack_220;
  plStack_138[2] = (long)puVar14;
  return;
LAB_0ca23cec:
  FUN_04863610(auStack_100);
  puStack_2a8 = &uStack_280;
  func_0x0ca38540(&puStack_2a8);
  func_0x04862ba0(auStack_218);
  goto LAB_0ca23d0e;
}



/* ---- referenced strings ----
 * 0x11ae735  "groups" must be an array
 * 0x11ae73e  must be an array
 * 0x129bc6c  TradeTable legacy parsing expects a jsonString input
 * 0x129bc7c  y parsing expects a jsonString input
 * 0x129bc8c  s a jsonString input
 * 0x131c0ef  Trade table file must containt "tiers"
 * 0x131c0ff   must containt "tiers"
 * 0x13bceaa  "tiers" must be an array
 */
