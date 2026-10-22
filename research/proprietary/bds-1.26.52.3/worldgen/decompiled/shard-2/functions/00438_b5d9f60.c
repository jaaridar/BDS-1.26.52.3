/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb6d9f60 (ELF vaddr 0xb5d9f60)
 * Label: caller-of-callee
 * Body:  [[0b6d9f60, 0b6db54a] [0b6db75e, 0b6db786] [0b6db78a, 0b6db7bc]]
 * Ghidra: FUN_0b6d9f60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0b6d9f60(long *param_1,undefined8 *param_2,long *param_3,long *param_4,undefined1 param_5)

{
  long *plVar1;
  uint uVar2;
  code *pcVar3;
  char cVar4;
  long *plVar5;
  undefined8 uVar6;
  int *piVar7;
  int *piVar8;
  long *plVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  bool bVar14;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  long lStack_410;
  long *plStack_408;
  long *plStack_400;
  int *piStack_3f8;
  int *piStack_3f0;
  int *piStack_3e8;
  long *plStack_3d8;
  long *plStack_3d0;
  long *plStack_3c8;
  long *plStack_3c0;
  long **pplStack_3b8;
  long *plStack_3b0;
  long *plStack_3a8;
  long *plStack_3a0;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  long alStack_388 [4];
  long *plStack_368;
  uint uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  long lStack_348;
  undefined1 uStack_340;
  undefined1 auStack_338 [8];
  long *plStack_330;
  undefined8 uStack_328;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  long alStack_318 [4];
  long *plStack_2f8;
  int *piStack_2e8;
  char *pcStack_2e0;
  long *plStack_2d8;
  long *plStack_2d0;
  long *plStack_2c8;
  undefined8 uStack_2c0;
  long alStack_2b8 [4];
  long *plStack_298;
  long *plStack_280;
  long *plStack_278;
  long *plStack_270;
  long *plStack_268;
  long **pplStack_260;
  long *plStack_258;
  long *plStack_250;
  ulong uStack_248;
  int iStack_240;
  int iStack_23c;
  undefined4 uStack_238;
  int iStack_234;
  long lStack_230;
  undefined8 uStack_228;
  int iStack_220;
  undefined4 uStack_21c;
  undefined5 uStack_218;
  long *plStack_210;
  long alStack_208 [4];
  long *plStack_1e8;
  undefined *puStack_1d8;
  int **ppiStack_1d0;
  undefined **ppuStack_1b8;
  long lStack_1a8;
  ulong uStack_1a0;
  long lStack_198;
  ulong uStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long alStack_138 [4];
  long *plStack_118;
  ulong uStack_108;
  long lStack_100;
  long lStack_f8;
  undefined1 uStack_f0;
  long alStack_e8 [4];
  long *plStack_c8;
  undefined1 auStack_ac [48];
  undefined1 uStack_7c;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  code *pcStack_58;
  
  plVar5 = (long *)param_3[4];
  if (plVar5 == (long *)0x0) {
    plStack_1e8 = (long *)0x0;
  }
  else if (plVar5 == param_3) {
    plStack_1e8 = alStack_208;
    (**(code **)(*plVar5 + 0x18))();
  }
  else {
    plStack_1e8 = (long *)(**(code **)(*plVar5 + 0x10))();
  }
  plStack_3d8 = (long *)((ulong)plStack_3d8 & 0xffffffffffffff00);
  plStack_3c0 = (long *)((ulong)plStack_3c0 & 0xffffffffffffff00);
  if (((param_2[1] == 0) || ((*(uint *)(param_2 + 2) & 0x3ffff) == 0x3ffff)) ||
     (plVar5 = (long *)func_0x0412c300(), plVar5 == (long *)0x0)) {
LAB_0b6da092:
  }
  else {
    plVar9 = (long *)*param_2;
    if (plVar9 != (long *)0x0) {
      uVar10 = *(uint *)(param_2 + 2);
      uVar11 = (ulong)((uVar10 & 0x3ffff) >> 0xb);
      if (((uVar11 < (ulong)(plVar9[0x1c] - plVar9[0x1b] >> 3)) &&
          (lVar13 = *(long *)(plVar9[0x1b] + uVar11 * 8), lVar13 != 0)) &&
         ((uVar2 = *(uint *)(lVar13 + (ulong)(uVar10 & 0x7ff) * 4),
          (uVar10 & 0xfffc0000 ^ uVar2) < 0x3ffff &&
          ((ulong)(uVar2 & 0x3ffff) < (ulong)plVar9[0x23])))) {
        plStack_3d0 = plVar9 + 5;
        plStack_3c8 = (long *)CONCAT44(plStack_3c8._4_4_,uVar10);
        plStack_3c0 = (long *)CONCAT71(plStack_3c0._1_7_,1);
        plStack_3d8 = plVar9;
      }
    }
    LOCK();
    plVar9 = plVar5 + 1;
    lVar13 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (lVar13 != 0) goto LAB_0b6da092;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0412c2d0(plVar5);
  }
  if ((char)plStack_3c0 == '\x01') {
    plVar5 = (long *)(plStack_3d0[7] +
                     (ulong)((int)((ulong)(plStack_3d0[8] - plStack_3d0[7]) >> 3) - 1U & 0xf95d258f)
                     * 8);
    do {
      if (*plVar5 == -1) goto LAB_0b6da33a;
      lVar13 = *plVar5 * 0x20;
      plVar5 = (long *)(plStack_3d0[10] + lVar13);
    } while (*(int *)(plStack_3d0[10] + 8 + lVar13) != -0x6a2da71);
    if ((plVar5 != (long *)plStack_3d0[0xb]) && (lVar13 = plVar5[2], lVar13 != 0)) {
      uVar11 = (ulong)(((uint)plStack_3c8 & 0x3ffff) >> 0xb);
      if ((uVar11 < (ulong)(*(long *)(lVar13 + 0x10) - *(long *)(lVar13 + 8) >> 3)) &&
         (((lVar13 = *(long *)(*(long *)(lVar13 + 8) + uVar11 * 8), lVar13 != 0 &&
           (((uint)plStack_3c8 & 0xfffc0000 ^
            *(uint *)(lVar13 + (ulong)((uint)plStack_3c8 & 0x7ff) * 4)) < 0x3ffff)) &&
          (plVar5 = (long *)func_0x0b40c890(&plStack_3d8,1), plVar5 != (long *)0x0)))) {
        (**(code **)(*plVar5 + 0x7a0))(&pcStack_2e0,plVar5);
        if ((pcStack_2e0 == (char *)0x0) &&
           (cVar4 = FUN_0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013fab0f),
           cVar4 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        if ((*pcStack_2e0 == '\0') &&
           (cVar4 = FUN_0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013fab0f),
           cVar4 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        uVar6 = (**(code **)(*plStack_2d0 + 0x30))();
        plStack_400 = (long *)func_0x05fa6970(uVar6);
        if (plStack_400 == (long *)0x0) {
          if (plStack_1e8 != (long *)0x0) {
            plStack_3d8 = (long *)((ulong)plStack_3d8 & 0xffffffffffffff00);
            (**(code **)(*plStack_1e8 + 0x30))(plStack_1e8,&plStack_3d8);
          }
        }
        else {
          if ((pcStack_2e0 == (char *)0x0) &&
             (cVar4 = FUN_0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013fab0f),
             cVar4 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          if ((*pcStack_2e0 == '\0') &&
             (cVar4 = FUN_0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013fab0f),
             cVar4 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          uVar6 = (**(code **)(*plStack_2d0 + 0x30))();
          plVar5 = (long *)func_0x05f95d30(uVar6);
          if (plVar5 != (long *)0x0) {
            plStack_210 = (long *)(**(code **)(*plVar5 + 0x2c0))(plVar5);
            if ((*(byte *)(param_1 + 0xb) & 1) == 0) {
              uStack_328 = (long *)param_1[0xd];
              auStack_338 = (undefined1  [8])param_1[0xb];
              plStack_330 = (long *)param_1[0xc];
            }
            else {
              func_0x0412e5e0(auStack_338,param_1[0xd],param_1[0xc]);
            }
            plStack_3d8 = (long *)(auStack_338 + 1);
            plStack_3d0 = (long *)((ulong)auStack_338 >> 1 & 0x7f);
            if (((ulong)auStack_338 & 1) != 0) {
              plStack_3d0 = plStack_330;
              plStack_3d8 = uStack_328;
            }
            plStack_3c8 = (long *)&UNK_01487f17;
            plStack_3c0 = (long *)0x9;
            func_0x048ad670(&uStack_420,&plStack_3d8,2,0x2f);
            if (((ulong)auStack_338 & 1) != 0) {
              func_0x0412a280(uStack_328,(ulong)auStack_338 & 0xfffffffffffffffe);
            }
            if (DAT_0f7b8fb8 == '\0') goto LAB_0b6db495;
LAB_0b6da488:
            bVar14 = (uStack_420 & 1) == 0;
            lStack_198 = lStack_410;
            if (bVar14) {
              lStack_198 = (long)&uStack_420 + 1;
            }
            uStack_190 = (ulong)((byte)uStack_420 >> 1);
            if (!bVar14) {
              uStack_190 = CONCAT44(uStack_414,uStack_418);
            }
            (**(code **)(_DAT_0f7b8f98 + 0x80))(&plStack_3d8,&DAT_0f7b8f98,&lStack_198);
            auStack_338 = (undefined1  [8])0x91c2da14ad92ec68;
            plStack_330 = (long *)&UNK_0140f690;
            uStack_328 = (long *)0x1;
            uStack_320 = 0x518;
            if ((byte)uStack_398 == 0) {
              func_0x0eedea30(&plStack_2c8);
              func_0x0eedeb80(2,0x2d,&plStack_3d8,&plStack_2c8,auStack_338);
              if (((ulong)plStack_2c8 & 1) != 0) {
                func_0x0412a280(alStack_2b8[0],(ulong)plStack_2c8 & 0xfffffffffffffffe);
              }
            }
            plVar5 = plStack_3b0;
            if (((byte)uStack_398 & 1) == 0) {
              plVar9 = plStack_3a8;
              if (plStack_3b0 != (long *)0x0) {
                while (plVar5 != plVar9) {
                  func_0x048b3e80(plVar9 + -8);
                  plVar9 = plVar9 + -8;
                }
                plStack_3a8 = plVar5;
                func_0x0412a280(plStack_3b0,(long)plStack_3a0 - (long)plStack_3b0);
              }
              plVar9 = plStack_3c8;
              plVar5 = plStack_3c0;
              if (plStack_3c8 != (long *)0x0) {
                for (; plVar9 != plVar5; plVar5 = plVar5 + -10) {
                  if (((char)plVar5[-1] == '\x01') && ((*(byte *)(plVar5 + -6) & 1) != 0)) {
                    func_0x0412a280(plVar5[-4],plVar5[-6] & 0xfffffffffffffffe);
                  }
                }
                plStack_3c0 = plVar9;
                func_0x0412a280(plStack_3c8,(long)pplStack_3b8 - (long)plStack_3c8);
              }
            }
            if ((DAT_0f7b8fb8 == '\0') && (iVar12 = func_0x04108328(&DAT_0f7b8fb8), iVar12 != 0)) {
              func_0x0ee5ea20(&DAT_0f7b8f98);
              func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
              func_0x0410844d(&DAT_0f7b8fb8);
            }
            bVar14 = (uStack_420 & 1) != 0;
            lStack_1a8 = (long)&uStack_420 + 1;
            if (bVar14) {
              lStack_1a8 = lStack_410;
            }
            uStack_1a0 = (ulong)((byte)uStack_420 >> 1);
            if (bVar14) {
              uStack_1a0 = CONCAT44(uStack_414,uStack_418);
            }
            (**(code **)(_DAT_0f7b8f98 + 0xa0))(&plStack_3d8,&DAT_0f7b8f98,&lStack_1a8);
            auStack_338 = (undefined1  [8])0x91c2da14ad92ec68;
            plStack_330 = (long *)&UNK_0140f690;
            uStack_328 = (long *)0x1;
            uStack_320 = 0x519;
            if ((byte)uStack_398 == 0) {
              func_0x0eedea30(&plStack_2c8);
              func_0x0eedeb80(2,0x2d,&plStack_3d8,&plStack_2c8,auStack_338);
              if (((ulong)plStack_2c8 & 1) != 0) {
                func_0x0412a280(alStack_2b8[0],(ulong)plStack_2c8 & 0xfffffffffffffffe);
              }
            }
            plVar5 = plStack_3b0;
            if (((byte)uStack_398 & 1) == 0) {
              plVar9 = plStack_3a8;
              if (plStack_3b0 != (long *)0x0) {
                while (plVar5 != plVar9) {
                  func_0x048b3e80(plVar9 + -8);
                  plVar9 = plVar9 + -8;
                }
                plStack_3a8 = plVar5;
                func_0x0412a280(plStack_3b0,(long)plStack_3a0 - (long)plStack_3b0);
              }
              plVar9 = plStack_3c8;
              plVar5 = plStack_3c0;
              if (plStack_3c8 != (long *)0x0) {
                for (; plVar9 != plVar5; plVar5 = plVar5 + -10) {
                  if (((char)plVar5[-1] == '\x01') && ((*(byte *)(plVar5 + -6) & 1) != 0)) {
                    func_0x0412a280(plVar5[-4],plVar5[-6] & 0xfffffffffffffffe);
                  }
                }
                plStack_3c0 = plVar9;
                func_0x0412a280(plStack_3c8,(long)pplStack_3b8 - (long)plStack_3c8);
              }
            }
            piVar7 = (int *)func_0x0b72bcf0(param_1 + 0x16,0,&UNK_01d43490);
            plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
            if (plVar5 == (long *)0x0) {
              func_0x0eec74c0(0x60,0);
            }
            plStack_280 = plVar5 + 1;
            plVar5[1] = 0;
            plVar5[2] = 0;
            *plVar5 = (long)&UNK_0f2d1a50;
            plVar5[4] = 0;
            plVar5[5] = 0;
            plVar5[6] = 0;
            plVar5[7] = 0;
            plVar5[8] = 0;
            plVar5[9] = 0;
            plVar5[10] = 0;
            plVar5[0xb] = 0;
            plVar9 = (long *)param_4[4];
            plStack_408 = plVar5;
            if (plVar9 == (long *)0x0) {
              pplStack_3b8 = (long **)0x0;
            }
            else if (plVar9 == param_4) {
              pplStack_3b8 = &plStack_3d8;
              (**(code **)(*plVar9 + 0x18))();
            }
            else {
              pplStack_3b8 = (long **)(**(code **)(*plVar9 + 0x10))();
            }
            piStack_2e8 = piVar7;
            func_0x0b72cbf0(&plStack_3d8,plVar5 + 6);
            if (pplStack_3b8 == &plStack_3d8) {
              lVar13 = 0x20;
LAB_0b6da8b7:
              (**(code **)((long)*pplStack_3b8 + lVar13))();
            }
            else {
              lVar13 = 0x28;
              if (pplStack_3b8 != (long **)0x0) goto LAB_0b6da8b7;
            }
            piVar7 = piStack_2e8;
            plStack_268 = plVar5 + 4;
            plStack_2c8 = plVar5 + 4;
            uStack_2c0 = plVar5;
            LOCK();
            plVar5[1] = plVar5[1] + 1;
            UNLOCK();
            plVar9 = (long *)param_3[4];
            if (plVar9 == (long *)0x0) {
              plStack_298 = (long *)0x0;
LAB_0b6da902:
            }
            else {
              if (plVar9 != param_3) {
                plStack_298 = (long *)(**(code **)(*plVar9 + 0x10))();
                goto LAB_0b6da902;
              }
              plStack_298 = alStack_2b8;
              (**(code **)(*plVar9 + 0x18))(plVar9,alStack_2b8);
            }
            auStack_338 = (undefined1  [8])plStack_268;
            plStack_330 = plVar5;
            LOCK();
            plVar5[1] = plVar5[1] + 1;
            UNLOCK();
            uStack_328 = plStack_2c8;
            uStack_320 = (undefined4)uStack_2c0;
            uStack_31c = uStack_2c0._4_4_;
            if (uStack_2c0 != (long *)0x0) {
              LOCK();
              uStack_2c0[1] = uStack_2c0[1] + 1;
              UNLOCK();
            }
            if (plStack_298 == (long *)0x0) {
              plStack_2f8 = (long *)0x0;
LAB_0b6da978:
            }
            else {
              if (plStack_298 != alStack_2b8) {
                plStack_2f8 = (long *)(**(code **)(*plStack_298 + 0x10))();
                goto LAB_0b6da978;
              }
              plStack_2f8 = alStack_318;
              (**(code **)(*plStack_298 + 0x18))();
            }
            piStack_3f8 = (int *)0x0;
            piStack_3f0 = (int *)0x0;
            piStack_3e8 = (int *)0x0;
            iVar12 = piVar7[0x10];
            lVar13 = (long)iVar12;
            if (lVar13 != 0) {
              if (iVar12 < 0) {
                func_0x0b71c2f0();
                goto LAB_0b6db530;
              }
              piVar8 = (int *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar13 * 0x18);
              if (piVar8 == (int *)0x0) {
                func_0x0eec74c0(lVar13 * 0x18,0);
              }
              piStack_3e8 = piVar8 + lVar13 * 6;
              piStack_3f0 = piVar8;
            }
            puStack_1d8 = &UNK_0f2d1aa0;
            ppiStack_1d0 = &piStack_3f8;
            ppuStack_1b8 = &puStack_1d8;
            param_4 = *(long **)(piVar7 + 10);
            lVar13 = 0x20;
            piStack_3f8 = piStack_3f0;
            if (param_4 == (long *)0x0) {
LAB_0b6daacc:
              param_4 = plStack_400;
              (**(code **)(*ppuStack_1b8 + lVar13))();
            }
            else {
              do {
                param_3 = (long *)param_4[3];
                plVar5 = (long *)param_4[4];
                if (param_3 != plVar5) {
                  do {
                    if (ppuStack_1b8 == (undefined **)0x0) {
                      func_0x04891200();
                      goto LAB_0b6db490;
                    }
                    cVar4 = (**(code **)(*ppuStack_1b8 + 0x30))(ppuStack_1b8,param_4 + 2,*param_3);
                    if (cVar4 == '\0') goto LAB_0b6daa95;
                    param_3 = param_3 + 2;
                  } while (param_3 != plVar5);
                }
                param_4 = (long *)*param_4;
              } while (param_4 != (long *)0x0);
LAB_0b6daa95:
              if (ppuStack_1b8 == &puStack_1d8) {
                lVar13 = 0x20;
                goto LAB_0b6daacc;
              }
              lVar13 = 0x28;
              param_4 = plStack_400;
              if (ppuStack_1b8 != (undefined **)0x0) goto LAB_0b6daacc;
            }
            *plStack_268 = ((long)piStack_3f0 - (long)piStack_3f8 >> 3) * -0x5555555555555555;
            piStack_2e8 = piStack_3f0;
            piVar7 = piStack_3f8;
            if (piStack_3f0 != piStack_3f8) {
              do {
                param_3 = *(long **)(piVar7 + 4);
                plStack_268 = *(long **)(piVar7 + 2);
                pplStack_260 = *(long ***)(piVar7 + 4);
                if (param_3 != (long *)0x0) {
                  LOCK();
                  param_3[2] = param_3[2] + 1;
                  UNLOCK();
                }
                uStack_218 = 0;
                uVar10 = *piVar7 - _DAT_0f72b588;
                uStack_248 = (ulong)uVar10;
                iStack_240 = piVar7[1] - _DAT_0f72b58c;
                iStack_23c = _DAT_0f72b588 + *piVar7;
                iStack_234 = _DAT_0f72b58c + piVar7[1];
                uStack_238 = 0;
                uVar10 = (iStack_23c - uVar10) + 1;
                iVar12 = (iStack_234 - iStack_240) + 1;
                lStack_230 = (ulong)uVar10 + 0x100000000;
                iStack_220 = uVar10 * iVar12;
                uStack_228 = CONCAT44(iStack_220,iVar12);
                uStack_21c = 0x10;
                (**(code **)(*param_4 + 0x10))(&plStack_278,param_4,&uStack_248);
                plStack_258 = (long *)0x0;
                plStack_250 = (long *)0x0;
                if ((plStack_270 == (long *)0x0) ||
                   (plStack_250 = (long *)func_0x0412c300(), plVar5 = plStack_278,
                   plStack_250 == (long *)0x0)) {
                  lVar13 = *(long *)auStack_338;
                  plVar5 = (long *)0x0;
joined_r0x0b6dad9c:
                  if (((lVar13 == 0) || (*(long *)auStack_338 = lVar13 + -1, lVar13 + -1 == 0)) &&
                     ((char)uStack_328[1] == '\0')) {
                    if (plStack_2f8 != (long *)0x0) {
                      plStack_3d8._1_7_ = (undefined7)((ulong)plStack_3d8 >> 8);
                      plStack_3d8 = (long *)CONCAT71(plStack_3d8._1_7_,1);
                      (**(code **)(*plStack_2f8 + 0x30))(plStack_2f8,&plStack_3d8);
                    }
                    *(undefined1 *)(uStack_328 + 1) = 1;
                    plStack_3d8 = (long *)&UNK_014212e1;
                    plStack_3d0 = (long *)0x16;
                    plVar9 = (long *)uStack_328[6];
                    if (plVar9 == (long *)0x0) goto LAB_0b6db490;
                    (**(code **)(*plVar9 + 0x30))(plVar9,&plStack_3d8);
                  }
                }
                else {
                  plStack_258 = plStack_278;
                  if (plStack_278 == (long *)0x0) {
                    lVar13 = *(long *)auStack_338;
                    plVar5 = plStack_250;
                    param_4 = plStack_400;
                    goto joined_r0x0b6dad9c;
                  }
                  plStack_3d0 = plStack_278;
                  plStack_3c8 = plStack_270;
                  if (plStack_270 != (long *)0x0) {
                    LOCK();
                    plStack_270[2] = plStack_270[2] + 1;
                    UNLOCK();
                  }
                  plStack_3c0 = plStack_268;
                  pplStack_3b8 = pplStack_260;
                  if (param_3 != (long *)0x0) {
                    LOCK();
                    param_3[2] = param_3[2] + 1;
                    UNLOCK();
                  }
                  plStack_3b0 = plStack_210;
                  plStack_3a8 = (long *)auStack_338;
                  plStack_3a0 = plStack_330;
                  if (plStack_330 != (long *)0x0) {
                    LOCK();
                    plStack_330[1] = plStack_330[1] + 1;
                    UNLOCK();
                  }
                  uStack_398 = (undefined4)uStack_328;
                  uStack_394 = uStack_328._4_4_;
                  uStack_390 = uStack_320;
                  uStack_38c = uStack_31c;
                  if (CONCAT44(uStack_31c,uStack_320) != 0) {
                    LOCK();
                    plVar9 = (long *)(CONCAT44(uStack_31c,uStack_320) + 8);
                    *plVar9 = *plVar9 + 1;
                    UNLOCK();
                  }
                  plStack_3d8 = param_1;
                  if (plStack_2f8 == (long *)0x0) {
                    plStack_368 = (long *)0x0;
                  }
                  else if (plStack_2f8 == alStack_318) {
                    plStack_368 = alStack_388;
                    (**(code **)(*plStack_2f8 + 0x18))();
                  }
                  else {
                    plStack_368 = (long *)(**(code **)(*plStack_2f8 + 0x10))();
                  }
                  if ((uStack_420 & 1) == 0) {
                    lStack_348 = lStack_410;
                    uStack_358 = uStack_420;
                    uStack_354 = uStack_41c;
                    uStack_350 = uStack_418;
                    uStack_34c = uStack_414;
                  }
                  else {
                    func_0x0412e5e0(&uStack_358,lStack_410,CONCAT44(uStack_414,uStack_418));
                  }
                  uStack_340 = param_5;
                  func_0x0b6db8a0(&lStack_188,&plStack_3d8);
                  plStack_c8 = (long *)0x0;
                  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb0);
                  if (plVar9 == (long *)0x0) {
                    func_0x0eec74c0(0xb0,0);
                  }
                  *plVar9 = (long)&UNK_0f2d1b20;
                  plVar9[2] = lStack_188;
                  plVar9[3] = lStack_180;
                  plVar9[4] = lStack_178;
                  lStack_180 = 0;
                  lStack_178 = 0;
                  plVar9[5] = lStack_170;
                  plVar9[6] = lStack_168;
                  lStack_170 = 0;
                  lStack_168 = 0;
                  plVar9[7] = lStack_160;
                  plVar9[8] = lStack_158;
                  plVar9[9] = (long)plStack_150;
                  lStack_158 = 0;
                  plStack_150 = (long *)0x0;
                  *(undefined4 *)(plVar9 + 10) = (undefined4)uStack_148;
                  *(undefined4 *)((long)plVar9 + 0x54) = uStack_148._4_4_;
                  *(undefined4 *)(plVar9 + 0xb) = (undefined4)uStack_140;
                  *(undefined4 *)((long)plVar9 + 0x5c) = uStack_140._4_4_;
                  uStack_148 = 0;
                  uStack_140 = (long *)0x0;
                  if (plStack_118 == (long *)0x0) {
                    plVar9[0x10] = 0;
                  }
                  else if (plStack_118 == alStack_138) {
                    plVar9[0x10] = (long)(plVar9 + 0xc);
                    (**(code **)(*plStack_118 + 0x18))();
                  }
                  else {
                    plVar9[0x10] = (long)plStack_118;
                    plStack_118 = (long *)0x0;
                  }
                  plVar9[0x14] = lStack_f8;
                  plVar9[0x12] = uStack_108;
                  plVar9[0x13] = lStack_100;
                  uStack_108 = 0;
                  lStack_100 = 0;
                  lStack_f8 = 0;
                  *(undefined1 *)(plVar9 + 0x15) = uStack_f0;
                  *(undefined4 *)((long)plVar9 + 0xa9) = 0;
                  *(undefined4 *)((long)plVar9 + 0xac) = 0;
                  auStack_ac[0] = 0;
                  uStack_7c = 0;
                  plStack_c8 = plVar9;
                  func_0x064bdfa0(auStack_78,plVar5,alStack_e8,auStack_ac);
                  param_4 = plStack_400;
                  if (pcStack_58 != (code *)0x0) {
                    (*pcStack_58)(auStack_70);
                  }
                  if (plStack_c8 == alStack_e8) {
                    lVar13 = 0x20;
LAB_0b6db070:
                    (**(code **)(*plStack_c8 + lVar13))();
                  }
                  else {
                    lVar13 = 0x28;
                    if (plStack_c8 != (long *)0x0) goto LAB_0b6db070;
                  }
                  if ((uStack_108 & 1) != 0) {
                    func_0x0412a280(lStack_f8,uStack_108 & 0xfffffffffffffffe);
                  }
                  if (plStack_118 == alStack_138) {
                    lVar13 = 0x20;
LAB_0b6db0bf:
                    (**(code **)(*plStack_118 + lVar13))();
                  }
                  else {
                    lVar13 = 0x28;
                    if (plStack_118 != (long *)0x0) goto LAB_0b6db0bf;
                  }
                  plVar5 = uStack_140;
                  if (uStack_140 != (long *)0x0) {
                    LOCK();
                    plVar9 = uStack_140 + 1;
                    lVar13 = *plVar9;
                    *plVar9 = *plVar9 + -1;
                    UNLOCK();
                    if (lVar13 == 0) {
                      (**(code **)(*uStack_140 + 0x10))(uStack_140);
                      FUN_0412c2d0(plVar5);
                    }
                  }
                  plVar5 = plStack_150;
                  if (plStack_150 != (long *)0x0) {
                    LOCK();
                    plVar9 = plStack_150 + 1;
                    lVar13 = *plVar9;
                    *plVar9 = *plVar9 + -1;
                    UNLOCK();
                    if (lVar13 == 0) {
                      (**(code **)(*plStack_150 + 0x10))(plStack_150);
                      FUN_0412c2d0(plVar5);
                    }
                  }
                  if (lStack_168 != 0) {
                    FUN_0412c2d0();
                  }
                  if (lStack_178 != 0) {
                    FUN_0412c2d0();
                  }
                  if ((uStack_358 & 1) != 0) {
                    func_0x0412a280(lStack_348,CONCAT44(uStack_354,uStack_358) & 0xfffffffffffffffe)
                    ;
                  }
                  if (plStack_368 == alStack_388) {
                    lVar13 = 0x20;
LAB_0b6db196:
                    (**(code **)(*plStack_368 + lVar13))();
                  }
                  else {
                    lVar13 = 0x28;
                    if (plStack_368 != (long *)0x0) goto LAB_0b6db196;
                  }
                  plVar5 = (long *)CONCAT44(uStack_38c,uStack_390);
                  if (plVar5 != (long *)0x0) {
                    LOCK();
                    plVar9 = plVar5 + 1;
                    lVar13 = *plVar9;
                    *plVar9 = *plVar9 + -1;
                    UNLOCK();
                    if (lVar13 == 0) {
                      (**(code **)(*plVar5 + 0x10))(plVar5);
                      FUN_0412c2d0(plVar5);
                    }
                  }
                  plVar5 = plStack_3a0;
                  if (plStack_3a0 != (long *)0x0) {
                    LOCK();
                    plVar9 = plStack_3a0 + 1;
                    lVar13 = *plVar9;
                    *plVar9 = *plVar9 + -1;
                    UNLOCK();
                    if (lVar13 == 0) {
                      (**(code **)(*plStack_3a0 + 0x10))(plStack_3a0);
                      FUN_0412c2d0(plVar5);
                    }
                  }
                  if (pplStack_3b8 != (long **)0x0) {
                    FUN_0412c2d0();
                  }
                  plVar5 = plStack_250;
                  if (plStack_3c8 != (long *)0x0) {
                    FUN_0412c2d0();
                    plVar5 = plStack_250;
                  }
                }
                if (plVar5 != (long *)0x0) {
                  LOCK();
                  plVar9 = plVar5 + 1;
                  lVar13 = *plVar9;
                  *plVar9 = *plVar9 + -1;
                  UNLOCK();
                  if (lVar13 == 0) {
                    (**(code **)(*plVar5 + 0x10))(plVar5);
                    FUN_0412c2d0(plVar5);
                  }
                }
                if (plStack_270 != (long *)0x0) {
                  FUN_0412c2d0();
                }
                if (param_3 != (long *)0x0) {
                  FUN_0412c2d0(param_3);
                }
                piVar7 = piVar7 + 6;
                if (piVar7 == piStack_2e8) goto LAB_0b6dab74;
              } while( true );
            }
            if ((char)plStack_2c8[1] != '\0') goto LAB_0b6dab74;
            if (plStack_298 != (long *)0x0) {
              plStack_3d8 = (long *)CONCAT71(plStack_3d8._1_7_,1);
              (**(code **)(*plStack_298 + 0x30))(plStack_298,&plStack_3d8);
            }
            *(undefined1 *)(plStack_2c8 + 1) = 1;
            plStack_3d8 = (long *)&UNK_014212e1;
            plStack_3d0 = (long *)0x16;
            plVar5 = (long *)plStack_2c8[6];
            if (plVar5 != (long *)0x0) {
              (**(code **)(*plVar5 + 0x30))(plVar5,&plStack_3d8);
LAB_0b6dab74:
              piVar8 = piStack_3f8;
              plVar5 = plStack_408;
              piVar7 = piStack_3f0;
              if (piStack_3f8 != (int *)0x0) {
                for (; piVar8 != piVar7; piVar7 = piVar7 + -6) {
                  if (*(long *)(piVar7 + -2) != 0) {
                    FUN_0412c2d0();
                  }
                }
                piStack_3f0 = piVar8;
                func_0x0412a280(piStack_3f8,(long)piStack_3e8 - (long)piStack_3f8);
              }
              if (plStack_2f8 == alStack_318) {
                lVar13 = 0x20;
LAB_0b6db2e5:
                (**(code **)(*plStack_2f8 + lVar13))();
              }
              else {
                lVar13 = 0x28;
                if (plStack_2f8 != (long *)0x0) goto LAB_0b6db2e5;
              }
              plVar9 = (long *)CONCAT44(uStack_31c,uStack_320);
              if (plVar9 != (long *)0x0) {
                LOCK();
                plVar1 = plVar9 + 1;
                lVar13 = *plVar1;
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (lVar13 == 0) {
                  (**(code **)(*plVar9 + 0x10))(plVar9);
                  FUN_0412c2d0(plVar9);
                }
              }
              plVar9 = plStack_330;
              if (plStack_330 != (long *)0x0) {
                LOCK();
                plVar1 = plStack_330 + 1;
                lVar13 = *plVar1;
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (lVar13 == 0) {
                  (**(code **)(*plStack_330 + 0x10))(plStack_330);
                  FUN_0412c2d0(plVar9);
                }
              }
              if (plStack_298 == alStack_2b8) {
                lVar13 = 0x20;
LAB_0b6db369:
                (**(code **)(*plStack_298 + lVar13))();
              }
              else {
                lVar13 = 0x28;
                if (plStack_298 != (long *)0x0) goto LAB_0b6db369;
              }
              plVar9 = uStack_2c0;
              if (uStack_2c0 != (long *)0x0) {
                LOCK();
                plVar1 = uStack_2c0 + 1;
                lVar13 = *plVar1;
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (lVar13 == 0) {
                  (**(code **)(*uStack_2c0 + 0x10))(uStack_2c0);
                  FUN_0412c2d0(plVar9);
                }
              }
              LOCK();
              lVar13 = *plStack_280;
              *plStack_280 = *plStack_280 + -1;
              UNLOCK();
              if (lVar13 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
                FUN_0412c2d0(plVar5);
              }
              if ((uStack_420 & 1) != 0) {
                func_0x0412a280(lStack_410,CONCAT44(uStack_41c,uStack_420) & 0xfffffffffffffffe);
              }
              goto LAB_0b6db3e3;
            }
LAB_0b6db530:
            uVar6 = func_0x04891200();
            func_0x041084d6(&DAT_0f7b8fb8);
            if ((uStack_420 & 1) != 0) {
              func_0x0412a280(lStack_410,CONCAT44(uStack_41c,uStack_420) & 0xfffffffffffffffe);
            }
            func_0x05f983c0(&pcStack_2e0);
            lVar13 = 0x20;
            if ((plStack_1e8 == alStack_208) || (lVar13 = 0x28, plStack_1e8 != (long *)0x0)) {
              (**(code **)(*plStack_1e8 + lVar13))();
            }
            func_0x0eee2d70(uVar6);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (plStack_1e8 != (long *)0x0) {
            plStack_3d8 = (long *)((ulong)plStack_3d8 & 0xffffffffffffff00);
            (**(code **)(*plStack_1e8 + 0x30))(plStack_1e8,&plStack_3d8);
          }
        }
LAB_0b6db3e3:
        plVar5 = plStack_2d8;
        pcStack_2e0 = (char *)0x0;
        plStack_2d8 = (long *)0x0;
        if (plVar5 != (long *)0x0) {
          LOCK();
          plVar9 = plVar5 + 1;
          lVar13 = *plVar9;
          *plVar9 = *plVar9 + -1;
          UNLOCK();
          if (lVar13 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
            FUN_0412c2d0(plVar5);
          }
          plVar5 = plStack_2d8;
          plStack_2d0 = (long *)0x0;
          if (plStack_2d8 != (long *)0x0) {
            LOCK();
            plVar9 = plStack_2d8 + 1;
            lVar13 = *plVar9;
            *plVar9 = *plVar9 + -1;
            UNLOCK();
            if (lVar13 == 0) {
              (**(code **)(*plStack_2d8 + 0x10))(plStack_2d8);
              FUN_0412c2d0(plVar5);
            }
          }
        }
        goto LAB_0b6da357;
      }
    }
  }
LAB_0b6da33a:
  if (plStack_1e8 != (long *)0x0) {
    plStack_3d8 = (long *)((ulong)plStack_3d8 & 0xffffffffffffff00);
    (**(code **)(*plStack_1e8 + 0x30))(plStack_1e8,&plStack_3d8);
  }
LAB_0b6da357:
  if (plStack_1e8 == alStack_208) {
    lVar13 = 0x20;
  }
  else {
    lVar13 = 0x28;
    if (plStack_1e8 == (long *)0x0) {
      return;
    }
  }
  (**(code **)(*plStack_1e8 + lVar13))();
  return;
LAB_0b6db490:
  func_0x04891200();
LAB_0b6db495:
  iVar12 = func_0x04108328(&DAT_0f7b8fb8);
  if (iVar12 != 0) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
  }
  goto LAB_0b6da488;
}


