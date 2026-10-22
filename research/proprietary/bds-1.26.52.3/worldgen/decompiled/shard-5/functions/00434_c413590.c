/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc513590 (ELF vaddr 0xc413590)
 * Label: caller-of-callee
 * Body:  [[0c513590, 0c51384c] [0c51386f, 0c5139e9] [0c513a0c, 0c513a39] [0c513a5c, 0c51416b] [0c5141e1, 0c5144fa] [0c51451d, 0c5147c3] [0c514839, 0c514e10] [0c514e20, 0c51552d] [0c515548, 0c51565e] [0c515679, 0c51593e] [0c51599c, 0c5168c1] [0c5168e1, 0c51690f] [0c516af5, 0c516b01] [0c516c91, 0c516cbc]]
 * Ghidra: FUN_0c513590
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_0c513590(long ***param_1,long param_2,long *param_3,long *param_4,int param_5,
                  ulong param_6)

{
  uint uVar1;
  char *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  char cVar7;
  uint uVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  long **pplVar13;
  long **pplVar14;
  long *plVar15;
  long *plVar16;
  short sVar17;
  undefined8 *puVar18;
  ulong uVar19;
  int iVar20;
  char cVar21;
  int *piVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  int iVar27;
  int iVar28;
  ulong *puVar29;
  uint uVar30;
  long **pplVar31;
  undefined8 *puVar32;
  byte *pbVar33;
  byte bVar34;
  undefined *puVar35;
  ulong uVar36;
  bool bVar37;
  float fVar38;
  undefined8 uVar39;
  int iVar40;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar41 [12];
  undefined8 uStack_448;
  int iStack_440;
  byte bStack_438;
  undefined4 uStack_437;
  undefined2 uStack_433;
  undefined1 uStack_431;
  float fStack_430;
  uint uStack_42c;
  undefined1 uStack_428;
  undefined1 uStack_427;
  undefined6 uStack_426;
  undefined8 uStack_418;
  undefined1 uStack_410;
  undefined2 uStack_40f;
  undefined1 uStack_40d;
  undefined4 uStack_40c;
  long *plStack_408;
  byte bStack_3f8;
  undefined7 uStack_3f7;
  undefined1 uStack_3f0;
  undefined1 uStack_3ef;
  undefined6 uStack_3ee;
  long *plStack_3e8;
  long *plStack_3d8;
  long **pplStack_3d0;
  byte bStack_3c8;
  undefined7 uStack_3c7;
  undefined1 uStack_3c0;
  undefined7 uStack_3bf;
  undefined1 uStack_3b8;
  undefined1 uStack_3b7;
  undefined6 uStack_3b6;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  uint uStack_390;
  ulong uStack_388;
  undefined8 uStack_380;
  long *plStack_378;
  undefined1 auStack_370 [8];
  long *plStack_368;
  long *plStack_360;
  undefined8 uStack_358;
  undefined8 uStack_348;
  byte bStack_338;
  undefined1 uStack_337;
  undefined2 uStack_336;
  undefined4 uStack_334;
  byte bStack_330;
  undefined2 uStack_32f;
  undefined1 uStack_32d;
  uint uStack_32c;
  ulong uStack_328;
  undefined2 *puStack_320;
  undefined8 uStack_318;
  undefined4 uStack_2b8;
  undefined4 uStack_2a8;
  uint uStack_2a0;
  undefined4 uStack_29c;
  undefined1 uStack_298;
  undefined8 uStack_290;
  byte bStack_288;
  undefined7 uStack_287;
  undefined1 uStack_280;
  undefined7 uStack_27f;
  undefined1 uStack_278;
  undefined1 uStack_277;
  undefined6 uStack_276;
  long *plStack_270;
  long **pplStack_268;
  long *plStack_260;
  long *plStack_258;
  undefined8 uStack_250;
  undefined1 uStack_248;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long *plStack_1f0;
  uint uStack_1e8;
  undefined4 uStack_1e4;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  byte abStack_1b0 [24];
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long **pplStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long *plStack_100;
  long alStack_f8 [2];
  uint uStack_e8;
  undefined1 uStack_d0;
  uint uStack_48;
  
  plVar16 = (long *)(param_6 & 0xffffffff);
  uStack_448 = param_4;
  iStack_440 = param_5;
  uStack_3a8 = param_2;
  plVar9 = (long *)func_0x0412c300(param_3[0x39]);
  plVar15 = (long *)param_3[0x38];
  LOCK();
  plVar10 = plVar9 + 1;
  lVar12 = *plVar10;
  *plVar10 = *plVar10 + -1;
  UNLOCK();
  if (lVar12 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    func_0x0412c2d0(plVar9);
  }
  plVar10 = (long *)(**(code **)(*plVar15 + 0x68))(plVar15);
  plStack_368 = (long *)0x0;
  plStack_360 = (long *)0x0;
  plStack_378 = (long *)0x0;
  auStack_370 = (undefined1  [8])0x0;
  uStack_358 = 0;
  plStack_3d8 = (long *)CONCAT44(plStack_3d8._4_4_,(int)((ulong *)param_3[0x41])[1]);
  uStack_388 = *(ulong *)param_3[0x41];
  uStack_380 = 0;
  uStack_348 = func_0x0eee4390();
  fVar38 = (float)func_0x0eee4390();
  pplStack_178 = (long **)CONCAT44((int)fVar38,(int)(float)uStack_348);
  fVar38 = (float)func_0x0eee4390();
  plStack_170 = (long *)CONCAT44(plStack_170._4_4_,(int)fVar38);
  plStack_3d8 = plVar10;
  puVar11 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,&pplStack_178);
  lVar12 = (**(code **)(*(long *)param_3[0x3a] + 0x568))();
  pplVar14 = (long **)(lVar12 + 0x50);
  pplVar13 = pplVar14;
  if ((*(char *)(lVar12 + 0x77) == '\0') &&
     (((pplVar31 = (long **)(lVar12 + 0x70), *(char *)(lVar12 + 0x68) != '\0' ||
       (pplVar13 = pplVar31, (*(byte *)(lVar12 + 0x56) & 1) != 0)) &&
      (cVar7 = func_0x04fa7a10(pplVar31,pplVar14), pplVar13 = pplVar14, cVar7 != '\0')))) {
    pplVar13 = pplVar31;
  }
  pplVar14 = (long **)&DAT_0f72b850;
  if (((*(byte *)((long)pplVar13 + 6) | *(byte *)(pplVar13 + 3)) & 1) != 0) {
    pplVar14 = pplVar13;
  }
  if (DAT_0f6e87a0 == '\0') goto LAB_0c51683d;
LAB_0c513709:
  sVar17 = 8;
  if (*(short *)((long)param_1 + 0x1ca) == 8) {
LAB_0c513719:
    lVar12 = param_3[2];
    uVar8 = *(uint *)(param_3 + 3);
    plVar10 = (long *)(*(long *)(lVar12 + 0x38) +
                      (ulong)((int)((ulong)(*(long *)(lVar12 + 0x40) - *(long *)(lVar12 + 0x38)) >>
                                   3) - 1U & 0x4f6ba419) * 8);
    do {
      if (*plVar10 == -1) {
        plVar15 = *(long **)(lVar12 + 0x58);
        plVar10 = plVar15;
        goto LAB_0c5137a7;
      }
      lVar25 = *plVar10 * 0x20;
      plVar10 = (long *)(*(long *)(lVar12 + 0x50) + lVar25);
    } while (*(int *)(*(long *)(lVar12 + 0x50) + 8 + lVar25) != 0x4f6ba419);
    plVar15 = *(long **)(lVar12 + 0x58);
LAB_0c5137a7:
    if ((plVar10 != plVar15) && (lVar12 = plVar10[2], lVar12 != 0)) {
      uVar36 = (ulong)((uVar8 & 0x3ffff) >> 0xb);
      if (((uVar36 < (ulong)(*(long *)(lVar12 + 0x10) - *(long *)(lVar12 + 8) >> 3)) &&
          ((lVar25 = *(long *)(*(long *)(lVar12 + 8) + uVar36 * 8), lVar25 != 0 &&
           (uVar30 = *(uint *)(lVar25 + (ulong)(uVar8 & 0x7ff) * 4),
           (uVar8 & 0xfffc0000 ^ uVar30) < 0x3ffff)))) &&
         (lVar12 = *(long *)(*(long *)(lVar12 + 0x50) + (ulong)(uVar30 >> 4 & 0x3ff8)), lVar12 != 0)
         ) {
        iVar40 = *(int *)(lVar12 + (ulong)(uVar30 & 0x7f) * 4);
        switch(iVar40) {
        case 0x236c:
          puVar32 = (undefined8 *)0xf6e5008;
          bVar34 = bRam000000000f6e5010;
          break;
        case 0x236d:
          puVar32 = (undefined8 *)0xf6e4fb8;
          bVar34 = bRam000000000f6e4fc0;
          break;
        case 0x236e:
        case 0x2371:
        case 0x2372:
        case 0x2373:
        case 0x2374:
        case 0x2375:
        case 0x2376:
        case 0x2377:
        case 0x2378:
        case 0x2379:
        case 0x237a:
        case 0x237b:
        case 0x237c:
        case 0x237d:
        case 0x237e:
        case 0x237f:
        case 0x2380:
        case 0x2381:
        case 0x2382:
        case 0x2383:
        case 0x2384:
LAB_0c5138b9:
          if (sVar17 == 0) goto LAB_0c5138be;
          goto LAB_0c5138d6;
        case 0x236f:
          puVar32 = (undefined8 *)0xf6e4fe0;
          bVar34 = bRam000000000f6e4fe8;
          break;
        case 0x2370:
          puVar32 = (undefined8 *)0xf6e4f90;
          bVar34 = bRam000000000f6e4f98;
          break;
        case 0x2385:
          puVar32 = (undefined8 *)0xf6e5058;
          bVar34 = bRam000000000f6e5060;
          break;
        default:
          if (iVar40 != 0x1382) goto LAB_0c5138b9;
          puVar32 = (undefined8 *)0xf6e5030;
          bVar34 = bRam000000000f6e5038;
        }
        if (((ulong)auStack_370 & 1) == 0) {
          if ((bVar34 & 1) == 0) {
            plStack_360 = *(long **)((long)puVar32 + 0x18);
            auStack_370 = *(undefined1 (*) [8])((long)puVar32 + 8);
            plStack_368 = *(long **)((long)puVar32 + 0x10);
          }
          else {
            func_0x04885070(auStack_370,*(undefined8 *)((long)puVar32 + 0x18),
                            *(undefined8 *)((long)puVar32 + 0x10));
          }
        }
        else {
          bVar37 = (bVar34 & 1) != 0;
          lVar12 = (long)puVar32 + 9;
          if (bVar37) {
            lVar12 = *(long *)((long)puVar32 + 0x18);
          }
          uVar36 = (ulong)(bVar34 >> 1);
          if (bVar37) {
            uVar36 = *(ulong *)((long)puVar32 + 0x10);
          }
          func_0x04885120(auStack_370,lVar12,uVar36);
        }
        plStack_378 = (long *)*puVar32;
        uStack_358 = 0;
        goto LAB_0c513a8c;
      }
    }
LAB_0c516829:
    func_0x04890760();
    goto LAB_0c51682e;
  }
  cVar7 = func_0x04fa7a10(&DAT_0f6e8780,pplVar14);
  sVar17 = *(short *)((long)param_1 + 0x1ca);
  if (cVar7 != '\0' || sVar17 != 0) goto LAB_0c5138b9;
  if (**(char **)(puVar11[0xd] + 0x20) == '\x05') {
    sVar17 = 0;
    goto LAB_0c513719;
  }
LAB_0c5138be:
  cVar7 = func_0x0c516cc0(param_3,&plStack_378);
  if (cVar7 != '\0') {
LAB_0c513a8c:
    plVar15 = (long *)((ulong)auStack_370 >> 1 & 0x7f);
    plVar10 = (long *)(auStack_370 + 1);
    if (((ulong)auStack_370 & 1) != 0) {
      plVar15 = plStack_368;
      plVar10 = plStack_360;
    }
    func_0x0c44f180(&pplStack_178,plVar10,plVar15,1,0,0);
    pplStack_178 = (long **)&UNK_0f371da8;
    alStack_f8[0]._0_4_ = 0;
    uStack_e8 = 0;
    if (((long *)param_3[0x3a] != (long *)0x0) &&
       (cVar7 = (**(code **)(*(long *)param_3[0x3a] + 0x9f0))(), cVar7 == '\0')) {
      uVar8 = *(uint *)(param_3 + 3);
      plVar10 = (long *)func_0x07330100(param_3[2],0x7e613ff3);
      uVar36 = (ulong)((uVar8 & 0x3ffff) >> 0xb);
      if ((uVar36 < (ulong)(plVar10[2] - plVar10[1] >> 3)) &&
         ((lVar12 = *(long *)(plVar10[1] + uVar36 * 8), lVar12 != 0 &&
          (uVar30 = *(uint *)(lVar12 + (ulong)(uVar8 & 0x7ff) * 4),
          (uVar8 & 0xfffc0000 ^ uVar30) < 0x3ffff)))) {
        (**(code **)(*plVar10 + 0x10))(plVar10,plVar10 + 4,(uVar30 & 0x3ffff) + 1);
      }
      func_0x0d879c70(param_3 + 1,0,0);
    }
    puVar35 = &UNK_0f47e0b0;
    plStack_270 = (long *)&UNK_0f47e0b0;
    param_1 = &pplStack_268;
    pplVar14 = &plStack_260;
    plStack_260 = (long *)0x0;
    plStack_258 = (long *)0x0;
    pplStack_268 = pplVar14;
    func_0x0b3ec840(param_3,&plStack_270);
    bStack_338 = 0xf3;
    uStack_337 = 0xc5;
    uStack_336 = 0x11b;
    uStack_334 = 0;
    bStack_330 = 6;
    uStack_32f = 0;
    uStack_32d = 0;
    uStack_32c = 0;
    pplVar13 = (long **)func_0x0d6c9880(param_1,&bStack_338);
    if (pplVar13 != pplVar14) {
      func_0x0d6c9f40(param_1,pplVar13);
    }
    bStack_338 = 0x35;
    uStack_337 = 0xf3;
    uStack_336 = 0x127;
    uStack_334 = 0;
    bStack_330 = 0xc;
    uStack_32f = 0;
    uStack_32d = 0;
    uStack_32c = 0;
    pplVar13 = (long **)func_0x0d6c9880(param_1,&bStack_338);
    if (pplVar13 != pplVar14) {
      func_0x0d6c9f40(param_1,pplVar13);
    }
    bStack_338 = 0x80;
    uStack_337 = 0x73;
    uStack_336 = 0x148;
    uStack_334 = 0;
    bStack_330 = 8;
    uStack_32f = 0;
    uStack_32d = 0;
    uStack_32c = 0;
    pplVar13 = (long **)func_0x0d6c9880(param_1,&bStack_338);
    if (pplVar13 != pplVar14) {
      func_0x0d6c9f40(param_1,pplVar13);
    }
    bStack_338 = 0xee;
    uStack_337 = 0x4f;
    uStack_336 = 0x139;
    uStack_334 = 0;
    bStack_330 = 3;
    uStack_32f = 0;
    uStack_32d = 0;
    uStack_32c = 0;
    pplVar13 = (long **)func_0x0d6c9880(param_1,&bStack_338);
    if (pplVar13 != pplVar14) {
      func_0x0d6c9f40(param_1,pplVar13);
    }
    bStack_338 = 0xb1;
    uStack_337 = 0xcf;
    uStack_336 = 0x136;
    uStack_334 = 0;
    bStack_330 = 8;
    uStack_32f = 0;
    uStack_32d = 0;
    uStack_32c = 0;
    pplVar13 = (long **)func_0x0d6c9880(param_1,&bStack_338);
    if (pplVar13 != pplVar14) {
      func_0x0d6c9f40(param_1,pplVar13);
    }
    bStack_338 = 0xc2;
    uStack_337 = 0x77;
    uStack_336 = 0x14d;
    uStack_334 = 0;
    bStack_330 = 0xe;
    uStack_32f = 0;
    uStack_32d = 0;
    uStack_32c = 0;
    pplVar13 = (long **)func_0x0d6c9880(param_1,&bStack_338);
    if (pplVar13 != pplVar14) {
      func_0x0d6c9f40(param_1,pplVar13);
    }
    bStack_338 = 0x5c;
    uStack_337 = 0x2f;
    uStack_336 = 299;
    uStack_334 = 0;
    bStack_330 = 0xd;
    uStack_32f = 0;
    uStack_32d = 0;
    uStack_32c = 0;
    pplVar13 = (long **)func_0x0d6c9880(param_1,&bStack_338);
    if (pplVar13 != pplVar14) {
      func_0x0d6c9f40(param_1,pplVar13);
    }
    bStack_338 = 0x5e;
    uStack_337 = 0x4e;
    uStack_336 = 0x139;
    uStack_334 = 0;
    bStack_330 = 8;
    uStack_32f = 0;
    uStack_32d = 0;
    uStack_32c = 0;
    pplVar13 = (long **)func_0x0d6c9880(param_1,&bStack_338);
    if (pplVar13 != pplVar14) {
      func_0x0d6c9f40(param_1,pplVar13);
    }
    plVar10 = (long *)param_3[0x24];
    if (plVar10 != (long *)0x0) {
      pplVar13 = (long **)&UNK_01e79d90;
      if ((0x20 < ((int)plVar10[1] - (int)*plVar10 & 0x7fff8U)) &&
         (pplVar14 = *(long ***)(*plVar10 + 0x20), pplVar14 != (long **)0x0)) {
        cVar7 = (*(code *)(*pplVar14)[3])(pplVar14);
        pplVar14 = pplVar14 + 2;
        pplVar13 = (long **)&UNK_01e79d90;
        if (cVar7 == '\x04') {
          pplVar13 = pplVar14;
        }
      }
      if ((*(byte *)pplVar13 & 1) != 0) {
        if (pplVar13[1] == (long *)0x0) goto LAB_0c513eb4;
LAB_0c513e18:
        bStack_338 = 0x14;
        uStack_337 = 0x43;
        uStack_336 = 0x7375;
        uStack_334 = 0x4e6d6f74;
        bStack_330 = 0x61;
        uStack_32f = 0x656d;
        uStack_32d = 0;
        plVar10 = (long *)param_3[0x24];
        if (plVar10 == (long *)0x0) goto LAB_0c5167fa;
        pbVar33 = &UNK_01e79d90;
        if ((0x20 < ((int)plVar10[1] - (int)*plVar10 & 0x7fff8U)) &&
           (plVar10 = *(long **)(*plVar10 + 0x20), plVar10 != (long *)0x0)) {
          cVar7 = (**(code **)(*plVar10 + 0x18))(plVar10);
          pbVar33 = &UNK_01e79d90;
          if (cVar7 == '\x04') {
            pbVar33 = (byte *)(plVar10 + 2);
          }
        }
        if ((*pbVar33 & 1) == 0) {
          plStack_408 = *(long **)(pbVar33 + 0x10);
          uVar39 = *(undefined8 *)(pbVar33 + 8);
          uStack_418._0_4_ = (uint)*(undefined8 *)pbVar33;
          uStack_418._4_4_ = (int)((ulong)*(undefined8 *)pbVar33 >> 0x20);
          uStack_410 = (undefined1)uVar39;
          uStack_40f = (undefined2)((ulong)uVar39 >> 8);
          uStack_40d = (undefined1)((ulong)uVar39 >> 0x18);
          uStack_40c = (undefined4)((ulong)uVar39 >> 0x20);
        }
        else {
          func_0x0412e5e0(&uStack_418,*(undefined8 *)(pbVar33 + 0x10),*(undefined8 *)(pbVar33 + 8));
        }
        bStack_438 = (byte)&bStack_338;
        uStack_437 = (undefined4)((ulong)&bStack_338 >> 8);
        uStack_433 = (undefined2)((ulong)&bStack_338 >> 0x28);
        uStack_431 = (undefined1)((ulong)&bStack_338 >> 0x38);
        pplVar14 = (long **)func_0x0d6c9580(param_1,&bStack_338,&UNK_01563a4f,&bStack_438);
        if ((ulong)*(uint *)(pplVar14 + 0xc) != 0xffffffff) {
          (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(pplVar14 + 0xc) * 8))
                    (&bStack_438,pplVar14 + 7);
        }
        plVar15 = plStack_408;
        plVar10 = (long *)CONCAT44(uStack_418._4_4_,(uint)uStack_418);
        plVar16 = (long *)CONCAT44(uStack_40c,CONCAT13(uStack_40d,CONCAT21(uStack_40f,uStack_410)));
        uStack_418._0_4_ = 0;
        uStack_418._4_4_ = 0;
        uStack_410 = 0;
        uStack_40f = 0;
        uStack_40d = 0;
        uStack_40c = 0;
        plStack_408 = (long *)0x0;
        pplVar14[7] = (long *)&UNK_0f47e5e8;
        pplVar14[8] = plVar10;
        pplVar14[9] = plVar16;
        pplVar14[10] = plVar15;
        *(undefined4 *)(pplVar14 + 0xc) = 8;
        if ((bStack_338 & 1) != 0) {
          func_0x0412a280(uStack_328,
                          CONCAT44(uStack_334,CONCAT22(uStack_336,CONCAT11(uStack_337,bStack_338)))
                          & 0xfffffffffffffffe);
        }
        bStack_438 = 0x20;
        uStack_437 = (undefined4)_DAT_0131b201;
        uStack_433 = (undefined2)((ulong)_DAT_0131b201 >> 0x20);
        uStack_431 = (undefined1)((ulong)_DAT_0131b201 >> 0x30);
        fStack_430._0_1_ = (undefined1)((ulong)_DAT_0131b201 >> 0x38);
        fStack_430._1_3_ = (undefined3)_UNK_0131b209;
        uStack_42c = (uint)((ulong)_UNK_0131b209 >> 0x18);
        uStack_428 = (undefined1)((ulong)_UNK_0131b209 >> 0x38);
        uStack_427 = 0;
        func_0x0d6bbef0(&plStack_270,&bStack_438,1);
        if ((bStack_438 & 1) == 0) goto LAB_0c51506b;
        uVar36 = CONCAT17(uStack_431,CONCAT25(uStack_433,CONCAT41(uStack_437,bStack_438)));
        uVar19 = CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
LAB_0c515062:
        func_0x0412a280(uVar19,uVar36 & 0xfffffffffffffffe);
        goto LAB_0c51506b;
      }
      if (*(byte *)pplVar13 >> 1 != 0) goto LAB_0c513e18;
LAB_0c513eb4:
      lVar12 = param_3[2];
      uVar8 = *(uint *)(param_3 + 3);
      plVar10 = (long *)(*(long *)(lVar12 + 0x38) +
                        (ulong)((int)((ulong)(*(long *)(lVar12 + 0x40) - *(long *)(lVar12 + 0x38))
                                     >> 3) - 1U & 0x4f6ba419) * 8);
      lVar25 = *(long *)(lVar12 + 0x50);
      plVar15 = plVar10;
      do {
        if (*plVar15 == -1) {
          plVar9 = *(long **)(lVar12 + 0x58);
          plVar15 = plVar9;
          goto LAB_0c51400e;
        }
        lVar23 = *plVar15 * 0x20;
        plVar15 = (long *)(lVar25 + lVar23);
      } while (*(int *)(lVar25 + 8 + lVar23) != 0x4f6ba419);
      plVar9 = *(long **)(lVar12 + 0x58);
LAB_0c51400e:
      if ((plVar15 != plVar9) && (lVar12 = plVar15[2], lVar12 != 0)) {
        uVar36 = (ulong)((uVar8 & 0x3ffff) >> 0xb);
        if ((uVar36 < (ulong)(*(long *)(lVar12 + 0x10) - *(long *)(lVar12 + 8) >> 3)) &&
           (lVar23 = *(long *)(*(long *)(lVar12 + 8) + uVar36 * 8), lVar23 != 0)) {
          uVar30 = *(uint *)(lVar23 + (ulong)(uVar8 & 0x7ff) * 4);
          if (((uVar30 ^ uVar8 & 0xfffc0000) < 0x3ffff) &&
             (lVar12 = *(long *)(*(long *)(lVar12 + 0x50) + (ulong)(uVar30 >> 4 & 0x3ff8)),
             lVar12 != 0)) {
            if (*(int *)(lVar12 + (ulong)(uVar30 & 0x7f) * 4) == 0x1382) {
              plVar10 = (long *)param_3[0x24];
              if (plVar10 != (long *)0x0) {
                if (((((int)plVar10[1] - (int)*plVar10 & 0x7fff8U) < 0x11) ||
                    (plVar10 = *(long **)(*plVar10 + 0x10), plVar10 == (long *)0x0)) ||
                   (cVar7 = (**(code **)(*plVar10 + 0x18))(plVar10), cVar7 != '\x02')) {
                  lVar12 = 0;
                }
                else {
                  lVar12 = (long)*(int *)((long)plVar10 + 0xc);
                }
                bStack_338 = 0xe;
                uStack_337 = 0x43;
                uStack_336 = 0x6c6f;
                uStack_334 = 0x4449726f;
                bStack_330 = 0;
                puVar11 = (undefined8 *)(_DAT_0f6e8708 + lVar12 * 0x18);
                if ((*(byte *)(_DAT_0f6e8708 + lVar12 * 0x18) & 1) == 0) {
                  plStack_408 = (long *)puVar11[2];
                  uVar39 = puVar11[1];
                  uStack_418._0_4_ = (uint)*puVar11;
                  uStack_418._4_4_ = (int)((ulong)*puVar11 >> 0x20);
                  uStack_410 = (undefined1)uVar39;
                  uStack_40f = (undefined2)((ulong)uVar39 >> 8);
                  uStack_40d = (undefined1)((ulong)uVar39 >> 0x18);
                  uStack_40c = (undefined4)((ulong)uVar39 >> 0x20);
                }
                else {
                  func_0x0412e5e0(&uStack_418,puVar11[2],puVar11[1]);
                }
                bStack_438 = (byte)&bStack_338;
                uStack_437 = (undefined4)((ulong)&bStack_338 >> 8);
                uStack_433 = (undefined2)((ulong)&bStack_338 >> 0x28);
                uStack_431 = (undefined1)((ulong)&bStack_338 >> 0x38);
                lVar12 = func_0x0d6c9580(param_1,&bStack_338,&UNK_01563a4f,&bStack_438,&bStack_3f8);
                if ((ulong)*(uint *)(lVar12 + 0x60) != 0xffffffff) {
                  (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar12 + 0x60) * 8))
                            (&bStack_438,lVar12 + 0x38);
                }
                plVar10 = plStack_408;
                uVar39 = CONCAT44(uStack_418._4_4_,(uint)uStack_418);
                uVar4 = CONCAT44(uStack_40c,CONCAT13(uStack_40d,CONCAT21(uStack_40f,uStack_410)));
                uStack_418._0_4_ = 0;
                uStack_418._4_4_ = 0;
                uStack_410 = 0;
                uStack_40f = 0;
                uStack_40d = 0;
                uStack_40c = 0;
                plStack_408 = (long *)0x0;
                *(undefined **)(lVar12 + 0x38) = &UNK_0f47e5e8;
                *(undefined8 *)(lVar12 + 0x40) = uVar39;
                *(undefined8 *)(lVar12 + 0x48) = uVar4;
                *(long **)(lVar12 + 0x50) = plVar10;
                *(undefined4 *)(lVar12 + 0x60) = 8;
                if ((bStack_338 & 1) != 0) {
                  func_0x0412a280(uStack_328,
                                  CONCAT44(uStack_334,
                                           CONCAT22(uStack_336,CONCAT11(uStack_337,bStack_338))) &
                                  0xfffffffffffffffe);
                }
                cVar7 = func_0x0d879af0(param_3 + 1,0xb);
                if (cVar7 == '\0') {
                  bStack_438 = 0xc;
                  uStack_437 = 0x79646f42;
                  uStack_433 = 0x4449;
                  uStack_431 = 0;
                  if ((DAT_0f6e86d8 & 1) == 0) {
                    plStack_3e8 = _DAT_0f6e86e8;
                    bStack_3f8 = DAT_0f6e86d8;
                    uStack_3f7 = uRam000000000f6e86d9;
                    uStack_3f0 = (undefined1)_DAT_0f6e86e0;
                    uStack_3ef = (undefined1)((ulong)_DAT_0f6e86e0 >> 8);
                    uStack_3ee = (undefined6)((ulong)_DAT_0f6e86e0 >> 0x10);
                  }
                  else {
                    func_0x0412e5e0(&bStack_3f8,_DAT_0f6e86e8,_DAT_0f6e86e0);
                  }
                  bStack_3c8 = (byte)&bStack_438;
                  uStack_3c7 = (undefined7)((ulong)&bStack_438 >> 8);
                  pplVar14 = (long **)func_0x0d6c9580(param_1,&bStack_438,&UNK_01563a4f,&bStack_3c8)
                  ;
                  if ((ulong)*(uint *)(pplVar14 + 0xc) != 0xffffffff) {
                    (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(pplVar14 + 0xc) * 8))
                              (&bStack_3c8,pplVar14 + 7);
                  }
                }
                else {
                  bStack_438 = 0xc;
                  uStack_437 = 0x79646f42;
                  uStack_433 = 0x4449;
                  uStack_431 = 0;
                  if ((DAT_0f6e86f0 & 1) == 0) {
                    plStack_3e8 = _DAT_0f6e8700;
                    bStack_3f8 = DAT_0f6e86f0;
                    uStack_3f7 = uRam000000000f6e86f1;
                    uStack_3f0 = (undefined1)_DAT_0f6e86f8;
                    uStack_3ef = (undefined1)((ulong)_DAT_0f6e86f8 >> 8);
                    uStack_3ee = (undefined6)((ulong)_DAT_0f6e86f8 >> 0x10);
                  }
                  else {
                    func_0x0412e5e0(&bStack_3f8,_DAT_0f6e8700,_DAT_0f6e86f8);
                  }
                  bStack_3c8 = (byte)&bStack_438;
                  uStack_3c7 = (undefined7)((ulong)&bStack_438 >> 8);
                  pplVar14 = (long **)func_0x0d6c9580(param_1,&bStack_438,&UNK_01563a4f,&bStack_3c8)
                  ;
                  if ((ulong)*(uint *)(pplVar14 + 0xc) != 0xffffffff) {
                    (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(pplVar14 + 0xc) * 8))
                              (&bStack_3c8,pplVar14 + 7);
                  }
                }
                plVar15 = plStack_3e8;
                plVar10 = (long *)CONCAT71(uStack_3f7,bStack_3f8);
                plVar16 = (long *)CONCAT62(uStack_3ee,CONCAT11(uStack_3ef,uStack_3f0));
                bStack_3f8 = 0;
                uStack_3f7 = 0;
                uStack_3f0 = 0;
                uStack_3ef = 0;
                uStack_3ee = 0;
                plStack_3e8 = (long *)0x0;
                pplVar14[7] = (long *)&UNK_0f47e5e8;
                pplVar14[8] = plVar10;
                pplVar14[9] = plVar16;
                pplVar14[10] = plVar15;
                *(undefined4 *)(pplVar14 + 0xc) = 8;
                if ((bStack_438 & 1) != 0) {
                  func_0x0412a280(CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428)),
                                  CONCAT17(uStack_431,
                                           CONCAT25(uStack_433,CONCAT41(uStack_437,bStack_438))) &
                                  0xfffffffffffffffe);
                }
                bStack_3c8 = 0x20;
                uStack_3c7 = (undefined7)_DAT_0131b201;
                uStack_3c0 = (undefined1)((ulong)_DAT_0131b201 >> 0x38);
                uStack_3bf = (undefined7)_UNK_0131b209;
                uStack_3b8 = (undefined1)((ulong)_UNK_0131b209 >> 0x38);
                uStack_3b7 = 0;
                func_0x0d6bbef0(&plStack_270,&bStack_3c8,1);
                if ((bStack_3c8 & 1) != 0) {
                  uVar36 = CONCAT71(uStack_3c7,bStack_3c8);
                  uVar19 = CONCAT62(uStack_3b6,CONCAT11(uStack_3b7,uStack_3b8));
                  goto LAB_0c515062;
                }
                goto LAB_0c51506b;
              }
              func_0x04890760();
LAB_0c516815:
              func_0x04890760();
LAB_0c51681a:
              func_0x04890760();
            }
            else {
              do {
                lVar12 = *plVar10;
                plVar10 = plVar9;
                if (lVar12 == -1) break;
                lVar12 = lVar12 * 0x20;
                plVar10 = (long *)(lVar25 + lVar12);
              } while (*(int *)(lVar25 + 8 + lVar12) != 0x4f6ba419);
              if (((((plVar10 == plVar9) || (lVar12 = plVar10[2], lVar12 == 0)) ||
                   ((ulong)(*(long *)(lVar12 + 0x10) - *(long *)(lVar12 + 8) >> 3) <= uVar36)) ||
                  ((lVar25 = *(long *)(*(long *)(lVar12 + 8) + uVar36 * 8), lVar25 == 0 ||
                   (uVar30 = *(uint *)(lVar25 + (ulong)(uVar8 & 0x7ff) * 4),
                   0x3fffe < (uVar8 & 0xfffc0000 ^ uVar30))))) ||
                 (lVar12 = *(long *)(*(long *)(lVar12 + 0x50) + (ulong)(uVar30 >> 4 & 0x3ff8)),
                 lVar12 == 0)) {
                func_0x04890760();
                goto LAB_0c5168bb;
              }
              if (*(int *)(lVar12 + (ulong)(uVar30 & 0x7f) * 4) != 0x236f) goto LAB_0c51506b;
              plVar10 = (long *)param_3[0x24];
              if (plVar10 == (long *)0x0) goto LAB_0c516815;
              uVar36 = _DAT_0f6e8728 - _DAT_0f6e8720;
              puVar11 = (undefined8 *)0x0;
              if (((0x10 < ((int)plVar10[1] - (int)*plVar10 & 0x7fff8U)) &&
                  (pplVar14 = *(long ***)(*plVar10 + 0x10), pplVar14 != (long **)0x0)) &&
                 (cVar7 = (*(code *)(*pplVar14)[3])(pplVar14), cVar7 == '\x02')) {
                puVar11 = (undefined8 *)(ulong)*(uint *)((long)pplVar14 + 0xc);
              }
              plVar10 = (long *)param_3[0x24];
              if (plVar10 == (long *)0x0) goto LAB_0c51681a;
              iVar40 = 0;
              if ((0x158 < ((int)plVar10[1] - (int)*plVar10 & 0x7ffe0U)) &&
                 (plVar10 = *(long **)(*plVar10 + 0x158), plVar10 != (long *)0x0)) {
                cVar7 = (**(code **)(*plVar10 + 0x18))(plVar10);
                iVar40 = 0;
                if (cVar7 == '\x02') {
                  iVar40 = *(int *)((long)plVar10 + 0xc);
                }
              }
              puVar35 = (undefined *)(uVar36 >> 3);
              iVar27 = (int)puVar35 * -0x55555555;
              lVar12 = param_3[2];
              uVar8 = *(uint *)(param_3 + 3);
              plVar10 = (long *)(*(long *)(lVar12 + 0x38) +
                                (ulong)((int)((ulong)(*(long *)(lVar12 + 0x40) -
                                                     *(long *)(lVar12 + 0x38)) >> 3) - 1U &
                                       0xe642016b) * 8);
              do {
                if (*plVar10 == -1) {
                  plVar16 = *(long **)(lVar12 + 0x58);
                  plVar10 = plVar16;
                  goto LAB_0c5148a0;
                }
                lVar25 = *plVar10 * 0x20;
                plVar10 = (long *)(*(long *)(lVar12 + 0x50) + lVar25);
              } while (*(int *)(*(long *)(lVar12 + 0x50) + 8 + lVar25) != -0x19bdfe95);
              plVar16 = *(long **)(lVar12 + 0x58);
LAB_0c5148a0:
              if ((plVar10 == plVar16) || (lVar12 = plVar10[2], lVar12 == 0)) {
LAB_0c5168bb:
                uVar39 = func_0x04890760();
                if ((bStack_330 & 1) != 0) {
                  func_0x0412a280(puStack_320,
                                  CONCAT44(uStack_32c,
                                           CONCAT13(uStack_32d,CONCAT21(uStack_32f,bStack_330))) &
                                  0xfffffffffffffffe);
                }
                func_0x0c44e610(puVar35);
                if (((ulong)auStack_370 & 1) != 0) {
                  func_0x0412a280(plStack_360,(ulong)auStack_370 & 0xfffffffffffffffe);
                }
                func_0x0eee2d70(uVar39);
                pcVar3 = (code *)swi(3);
                uVar36 = (*pcVar3)();
                return uVar36;
              }
              uVar36 = (ulong)((uVar8 & 0x3ffff) >> 0xb);
              if (((ulong)(*(long *)(lVar12 + 0x10) - *(long *)(lVar12 + 8) >> 3) <= uVar36) ||
                 ((lVar25 = *(long *)(*(long *)(lVar12 + 8) + uVar36 * 8), lVar25 == 0 ||
                  (uVar30 = *(uint *)(lVar25 + (ulong)(uVar8 & 0x7ff) * 4),
                  0x3fffe < (uVar8 & 0xfffc0000 ^ uVar30))))) goto LAB_0c5168bb;
              lVar12 = *(long *)(*(long *)(lVar12 + 0x50) + (ulong)(uVar30 >> 4 & 0x3ff8));
              puVar35 = (undefined *)0x0;
              if (lVar12 == 0) goto LAB_0c5168bb;
              uVar36 = (ulong)(uVar30 & 0x7f);
              lVar25 = *(long *)(lVar12 + uVar36 * 0x48);
              uStack_348 = CONCAT44(uStack_348._4_4_,iVar40);
              if (((*(int *)(lVar12 + 8 + uVar36 * 0x48) - (int)lVar25 & 0x7ffe0U) == 0) ||
                 (plVar10 = *(long **)(lVar25 + 0x18), plVar10 == (long *)0x0)) {
                uVar8 = 0;
              }
              else {
                uStack_388 = CONCAT44(uStack_388._4_4_,(int)puVar11);
                cVar7 = (**(code **)(*plVar10 + 0x18))();
                if (cVar7 == '\0') {
                  uVar8 = (uint)(*(byte *)((long)plVar10 + 0xc) & 0xf);
                }
                else {
                  uVar8 = 0;
                }
                puVar11 = (undefined8 *)(uStack_388 & 0xffffffff);
                iVar40 = (int)(float)uStack_348;
              }
              iVar28 = (int)puVar11;
              plVar10 = (long *)(lVar12 + uVar36 * 0x48);
              lVar12 = *plVar10;
              iVar20 = 0;
              bVar34 = 0;
              if (0x290 < ((int)plVar10[1] - (int)lVar12 & 0x7fff8U)) {
                plVar10 = *(long **)(lVar12 + 0x290);
                if (plVar10 == (long *)0x0) {
                  bVar34 = 0;
                }
                else {
                  uStack_388 = CONCAT44(uStack_388._4_4_,iVar28);
                  cVar7 = (**(code **)(*plVar10 + 0x18))(plVar10);
                  if (cVar7 == '\0') {
                    bVar34 = *(byte *)((long)plVar10 + 0xc) & 0xf;
                  }
                  else {
                    bVar34 = 0;
                  }
                  iVar28 = (int)uStack_388;
                  iVar40 = (int)(float)uStack_348;
                }
              }
              if (iVar28 == 1) {
                iVar20 = iVar27 + 3;
                if (-1 < iVar27) {
                  iVar20 = iVar27;
                }
                iVar20 = iVar20 >> 2;
              }
              if ((byte)uVar8 != bVar34) {
                iVar20 = iVar20 + iVar27 / 2;
              }
              uStack_388 = CONCAT44(uStack_388._4_4_,iVar20);
              uVar30 = (int)(_DAT_0f6e8758 - _DAT_0f6e8750 >> 3) * -0x33333333;
              if (0 < (int)uVar30) {
                piVar22 = (int *)(_DAT_0f6e8750 + 0xc);
                uVar36 = 0;
                do {
                  if ((((piVar22[-3] == uVar8) && (piVar22[-2] == (uint)bVar34)) &&
                      (piVar22[-1] == iVar28)) && (*piVar22 == iVar40)) {
                    lVar12 = _DAT_0f6e8750 + (uVar36 & 0xffffffff) * 0x28;
                    if ((*(byte *)(_DAT_0f6e8750 + 0x10 + (uVar36 & 0xffffffff) * 0x28) & 1) == 0) {
                      uStack_328 = *(ulong *)(lVar12 + 0x20);
                      uVar39 = *(undefined8 *)(lVar12 + 0x10);
                      uVar4 = *(undefined8 *)(lVar12 + 0x18);
                      bStack_338 = (byte)uVar39;
                      uStack_337 = (undefined1)((ulong)uVar39 >> 8);
                      uStack_336 = (undefined2)((ulong)uVar39 >> 0x10);
                      uStack_334 = (undefined4)((ulong)uVar39 >> 0x20);
                      bStack_330 = (byte)uVar4;
                      uStack_32f = (undefined2)((ulong)uVar4 >> 8);
                      uStack_32d = (undefined1)((ulong)uVar4 >> 0x18);
                      uStack_32c = (uint)((ulong)uVar4 >> 0x20);
                    }
                    else {
                      func_0x0412e5e0(&bStack_338,*(undefined8 *)(lVar12 + 0x20),
                                      *(undefined8 *)(lVar12 + 0x18));
                    }
                    goto LAB_0c514e7e;
                  }
                  uVar36 = uVar36 + 1;
                  piVar22 = piVar22 + 10;
                } while ((uVar30 & 0x7fffffff) != uVar36);
              }
              bStack_338 = 0;
              uStack_337 = 0;
LAB_0c514e7e:
              uVar36 = (ulong)(bStack_338 >> 1);
              if ((bStack_338 & 1) != 0) {
                uVar36 = CONCAT44(uStack_32c,CONCAT13(uStack_32d,CONCAT21(uStack_32f,bStack_330)));
              }
              if (uVar36 == 0) {
                uStack_418._0_4_ = 0x6c6f430e;
                uStack_418._4_4_ = 0x4449726f;
                uStack_410 = 0;
                puVar11 = (undefined8 *)(_DAT_0f6e8738 + (ulong)uVar8 * 0x18);
                uStack_390 = uVar8;
                if ((*(byte *)(_DAT_0f6e8738 + (ulong)uVar8 * 0x18) & 1) == 0) {
                  uVar39 = puVar11[2];
                  uStack_428 = (undefined1)uVar39;
                  uStack_427 = (undefined1)((ulong)uVar39 >> 8);
                  uStack_426 = (undefined6)((ulong)uVar39 >> 0x10);
                  uVar39 = *puVar11;
                  bStack_438 = (byte)uVar39;
                  uStack_437 = (undefined4)((ulong)uVar39 >> 8);
                  uStack_433 = (undefined2)((ulong)uVar39 >> 0x28);
                  uStack_431 = (undefined1)((ulong)uVar39 >> 0x38);
                  fStack_430 = (float)puVar11[1];
                  uStack_42c = (uint)((ulong)puVar11[1] >> 0x20);
                }
                else {
                  func_0x0412e5e0(&bStack_438,puVar11[2],puVar11[1]);
                }
                bStack_3f8 = (byte)&uStack_418;
                uStack_3f7 = (undefined7)((ulong)&uStack_418 >> 8);
                lVar12 = func_0x0d6c9580(param_1,&uStack_418,&UNK_01563a4f,&bStack_3f8,&bStack_3c8);
                if ((ulong)*(uint *)(lVar12 + 0x60) != 0xffffffff) {
                  (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar12 + 0x60) * 8))
                            (&bStack_3f8,lVar12 + 0x38);
                }
                uVar5 = CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
                uVar39 = CONCAT17(uStack_431,CONCAT25(uStack_433,CONCAT41(uStack_437,bStack_438)));
                uVar4 = CONCAT44(uStack_42c,fStack_430);
                bStack_438 = 0;
                uStack_437 = 0;
                uStack_433 = 0;
                uStack_431 = 0;
                fStack_430 = 0.0;
                uStack_42c = 0;
                uStack_428 = 0;
                uStack_427 = 0;
                uStack_426 = 0;
                *(undefined **)(lVar12 + 0x38) = &UNK_0f47e5e8;
                *(undefined8 *)(lVar12 + 0x40) = uVar39;
                *(undefined8 *)(lVar12 + 0x48) = uVar4;
                *(undefined8 *)(lVar12 + 0x50) = uVar5;
                *(undefined4 *)(lVar12 + 0x60) = 8;
                if (((uint)uStack_418 & 1) != 0) {
                  func_0x0412a280(plStack_408,
                                  CONCAT44(uStack_418._4_4_,(uint)uStack_418) & 0xfffffffffffffffe);
                }
                if ((byte)uStack_390 != bVar34) {
                  bStack_3f8 = 0x10;
                  uStack_3f7 = 0x4932726f6c6f43;
                  uStack_3f0 = 0x44;
                  uStack_3ef = 0;
                  puVar11 = (undefined8 *)(_DAT_0f6e8738 + (ulong)bVar34 * 0x18);
                  if ((*(byte *)(_DAT_0f6e8738 + (ulong)bVar34 * 0x18) & 1) == 0) {
                    uVar39 = puVar11[2];
                    uStack_3b8 = (undefined1)uVar39;
                    uStack_3b7 = (undefined1)((ulong)uVar39 >> 8);
                    uStack_3b6 = (undefined6)((ulong)uVar39 >> 0x10);
                    bStack_3c8 = (byte)*puVar11;
                    uStack_3c7 = (undefined7)((ulong)*puVar11 >> 8);
                    uStack_3c0 = (undefined1)puVar11[1];
                    uStack_3bf = (undefined7)((ulong)puVar11[1] >> 8);
                  }
                  else {
                    func_0x0412e5e0(&bStack_3c8,puVar11[2],puVar11[1]);
                  }
                  func_0x0d6bbc20(&plStack_270,&bStack_3f8,&bStack_3c8);
                  if ((bStack_3c8 & 1) != 0) {
                    func_0x0412a280(CONCAT62(uStack_3b6,CONCAT11(uStack_3b7,uStack_3b8)),
                                    CONCAT71(uStack_3c7,bStack_3c8) & 0xfffffffffffffffe);
                  }
                  if ((bStack_3f8 & 1) != 0) {
                    func_0x0412a280(plStack_3e8,CONCAT71(uStack_3f7,bStack_3f8) & 0xfffffffffffffffe
                                   );
                  }
                }
                abStack_1b0[0] = 0xc;
                abStack_1b0[1] = 0x42;
                abStack_1b0[2] = 0x6f;
                abStack_1b0[3] = 100;
                abStack_1b0[4] = 0x79;
                abStack_1b0[5] = 0x49;
                abStack_1b0[6] = 0x44;
                abStack_1b0[7] = 0;
                puVar11 = (undefined8 *)
                          (_DAT_0f6e8720 + (long)((int)uStack_388 + (int)(float)uStack_348) * 0x18);
                if ((*(byte *)(_DAT_0f6e8720 +
                              (long)((int)uStack_388 + (int)(float)uStack_348) * 0x18) & 1) == 0) {
                  plStack_1b8 = (long *)puVar11[2];
                  plStack_1c8 = (long *)*puVar11;
                  plStack_1c0 = (long *)puVar11[1];
                }
                else {
                  func_0x0412e5e0(&plStack_1c8,puVar11[2],puVar11[1]);
                }
                puVar29 = (ulong *)abStack_1b0;
                bStack_288 = (byte)puVar29;
                uStack_287 = (undefined7)((ulong)puVar29 >> 8);
                pplVar14 = (long **)func_0x0d6c9580(param_1,puVar29,&UNK_01563a4f,&bStack_288);
                if ((ulong)*(uint *)(pplVar14 + 0xc) != 0xffffffff) {
                  (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(pplVar14 + 0xc) * 8))
                            (&bStack_288,pplVar14 + 7);
                }
                plVar15 = plStack_1b8;
                plVar16 = plStack_1c0;
                plVar10 = plStack_1c8;
                plStack_1c8 = (long *)0x0;
                plStack_1c0 = (long *)0x0;
                plStack_1b8 = (long *)0x0;
                pplVar14[7] = (long *)&UNK_0f47e5e8;
                pplVar14[8] = plVar10;
                pplVar14[9] = plVar16;
                pplVar14[10] = plVar15;
                *(undefined4 *)(pplVar14 + 0xc) = 8;
                if ((abStack_1b0[0] & 1) != 0) goto LAB_0c514fd8;
              }
              else {
                uStack_418._0_4_ = 0x6f724712;
                uStack_418._4_4_ = 0x614e7075;
                uStack_410 = 0x6d;
                uStack_40f = 0x65;
                if ((bStack_338 & 1) == 0) {
                  uStack_428 = (undefined1)uStack_328;
                  uStack_427 = (undefined1)(uStack_328 >> 8);
                  uStack_426 = (undefined6)(uStack_328 >> 0x10);
                  fStack_430 = (float)CONCAT13(uStack_32d,CONCAT21(uStack_32f,bStack_330));
                  bStack_438 = bStack_338;
                  uStack_437 = (undefined4)
                               (CONCAT44(uStack_334,
                                         CONCAT22(uStack_336,CONCAT11(uStack_337,bStack_338))) >> 8)
                  ;
                  uStack_433 = (undefined2)((uint)uStack_334 >> 8);
                  uStack_431 = (undefined1)((uint)uStack_334 >> 0x18);
                  uStack_42c = uStack_32c;
                }
                else {
                  func_0x0412e5e0(&bStack_438,uStack_328);
                }
                puVar29 = &uStack_418;
                bStack_3f8 = (byte)puVar29;
                uStack_3f7 = (undefined7)((ulong)puVar29 >> 8);
                pplVar14 = (long **)func_0x0d6c9580(param_1,puVar29,&UNK_01563a4f,&bStack_3f8);
                if ((ulong)*(uint *)(pplVar14 + 0xc) != 0xffffffff) {
                  (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(pplVar14 + 0xc) * 8))
                            (&bStack_3f8,pplVar14 + 7);
                }
                plVar15 = (long *)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
                plVar10 = (long *)CONCAT17(uStack_431,
                                           CONCAT25(uStack_433,CONCAT41(uStack_437,bStack_438)));
                plVar16 = (long *)CONCAT44(uStack_42c,fStack_430);
                bStack_438 = 0;
                uStack_437 = 0;
                uStack_433 = 0;
                uStack_431 = 0;
                fStack_430 = 0.0;
                uStack_42c = 0;
                uStack_428 = 0;
                uStack_427 = 0;
                uStack_426 = 0;
                pplVar14[7] = (long *)&UNK_0f47e5e8;
                pplVar14[8] = plVar10;
                pplVar14[9] = plVar16;
                pplVar14[10] = plVar15;
                *(undefined4 *)(pplVar14 + 0xc) = 8;
                if (((uint)uStack_418 & 1) != 0) {
LAB_0c514fd8:
                  func_0x0412a280(puVar29[2],*puVar29 & 0xfffffffffffffffe);
                }
              }
              bStack_288 = 0x20;
              uStack_287 = (undefined7)_DAT_0131b201;
              uStack_280 = (undefined1)((ulong)_DAT_0131b201 >> 0x38);
              uStack_27f = (undefined7)_UNK_0131b209;
              uStack_278 = (undefined1)((ulong)_UNK_0131b209 >> 0x38);
              uStack_277 = 0;
              func_0x0d6bbef0(&plStack_270,&bStack_288,1);
              if ((bStack_288 & 1) != 0) {
                func_0x0412a280(CONCAT62(uStack_276,CONCAT11(uStack_277,uStack_278)),
                                CONCAT71(uStack_287,bStack_288) & 0xfffffffffffffffe);
              }
              if ((bStack_338 & 1) != 0) {
                uVar36 = CONCAT44(uStack_334,CONCAT22(uStack_336,CONCAT11(uStack_337,bStack_338)));
                uVar19 = uStack_328;
                goto LAB_0c515062;
              }
LAB_0c51506b:
              puVar11 = (undefined8 *)auStack_370;
              plVar16 = alStack_f8;
              lVar12 = param_3[2];
              uVar8 = *(uint *)(param_3 + 3);
              plVar10 = (long *)(*(long *)(lVar12 + 0x38) +
                                (ulong)((int)((ulong)(*(long *)(lVar12 + 0x40) -
                                                     *(long *)(lVar12 + 0x38)) >> 3) - 1U &
                                       0x4f6ba419) * 8);
              do {
                if (*plVar10 == -1) {
                  plVar15 = *(long **)(lVar12 + 0x58);
                  plVar10 = plVar15;
                  goto LAB_0c5150d8;
                }
                lVar25 = *plVar10 * 0x20;
                plVar10 = (long *)(*(long *)(lVar12 + 0x50) + lVar25);
              } while (*(int *)(*(long *)(lVar12 + 0x50) + 8 + lVar25) != 0x4f6ba419);
              plVar15 = *(long **)(lVar12 + 0x58);
LAB_0c5150d8:
              if ((plVar10 != plVar15) && (lVar12 = plVar10[2], lVar12 != 0)) {
                uVar36 = (ulong)((uVar8 & 0x3ffff) >> 0xb);
                if ((uVar36 < (ulong)(*(long *)(lVar12 + 0x10) - *(long *)(lVar12 + 8) >> 3)) &&
                   (((lVar25 = *(long *)(*(long *)(lVar12 + 8) + uVar36 * 8), lVar25 != 0 &&
                     (uVar30 = *(uint *)(lVar25 + (ulong)(uVar8 & 0x7ff) * 4),
                     (uVar8 & 0xfffc0000 ^ uVar30) < 0x3ffff)) &&
                    (lVar12 = *(long *)(*(long *)(lVar12 + 0x50) + (ulong)(uVar30 >> 4 & 0x3ff8)),
                    lVar12 != 0)))) {
                  if (((*(int *)(lVar12 + (ulong)(uVar30 & 0x7f) * 4) == 0x399) &&
                      (lVar12 = (**(code **)(*param_3 + 0x270))(param_3),
                      *(char *)(lVar12 + 0x23) == '\x01')) &&
                     ((*(long **)(lVar12 + 8) != (long *)0x0 &&
                      (((**(long **)(lVar12 + 8) != 0 &&
                        (cVar7 = func_0x0c4562c0(lVar12), cVar7 == '\0')) &&
                       (*(char *)(lVar12 + 0x22) != '\0')))))) {
                    uStack_2a0 = 0x6c6f430e;
                    uStack_29c = 0x4449726f;
                    uStack_298 = 0;
                    func_0x0c4595b0(&uStack_198,lVar12);
                    pplStack_3d0 = (long **)&uStack_2a0;
                    lVar12 = func_0x0d6c9580(param_1,pplStack_3d0,&UNK_01563a4f,&pplStack_3d0);
                    if ((ulong)*(uint *)(lVar12 + 0x60) != 0xffffffff) {
                      (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar12 + 0x60) * 8))
                                (&pplStack_3d0,lVar12 + 0x38);
                    }
                    uVar5 = uStack_188;
                    uVar4 = uStack_190;
                    uVar39 = uStack_198;
                    uStack_198 = 0;
                    uStack_190 = 0;
                    uStack_188 = 0;
                    *(undefined **)(lVar12 + 0x38) = &UNK_0f47e5e8;
                    *(undefined8 *)(lVar12 + 0x40) = uVar39;
                    *(undefined8 *)(lVar12 + 0x48) = uVar4;
                    *(undefined8 *)(lVar12 + 0x50) = uVar5;
                    *(undefined4 *)(lVar12 + 0x60) = 8;
                    if ((uStack_2a0 & 1) != 0) {
                      func_0x0412a280(uStack_290,
                                      CONCAT44(uStack_29c,uStack_2a0) & 0xfffffffffffffffe);
                    }
                  }
                  pplVar14 = (long **)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
                  if (pplVar14 == (long **)0x0) goto LAB_0c5167ff;
                  goto LAB_0c5152c5;
                }
              }
            }
            func_0x04890760();
            goto LAB_0c516824;
          }
        }
      }
      goto LAB_0c516833;
    }
    func_0x04890760();
LAB_0c5167fa:
    func_0x04890760();
LAB_0c5167ff:
    func_0x0eec74c0(0x20,0);
LAB_0c5152c5:
    *pplVar14 = (long *)&UNK_0f47e0b0;
    pplVar14[2] = (long *)0x0;
    pplVar14[3] = (long *)0x0;
    pplVar14[1] = (long *)(pplVar14 + 2);
    pplStack_3d0 = pplVar14;
    func_0x0d6bd5f0(pplVar14,&plStack_270);
    func_0x0c44fd30(&pplStack_178,&pplStack_3d0);
    pplVar14 = pplStack_3d0;
    pplStack_3d0 = (long **)0x0;
    if (pplVar14 != (long **)0x0) {
      (*(code *)(*pplVar14)[1])();
    }
    plStack_270 = (long *)&UNK_0f47e0b0;
    func_0x0d6c9500(param_1,plStack_260);
    func_0x0c44f4e0(uStack_3a8,&pplStack_178);
    if ((ulong)*(uint *)(uStack_3a8 + 0x90) == 0xffffffff) {
      if (uStack_e8 != 0xffffffff) goto LAB_0c51539e;
    }
    else if (uStack_e8 == 0xffffffff) {
      (**(code **)(&UNK_0f38c2a8 + (ulong)*(uint *)(uStack_3a8 + 0x90) * 8))(&plStack_270);
      *(undefined4 *)(uStack_3a8 + 0x90) = 0xffffffff;
    }
    else {
LAB_0c51539e:
      plStack_270 = (long *)(uStack_3a8 + 0x80);
      (**(code **)(&UNK_0f38c5a0 + (ulong)uStack_e8 * 8))
                (&plStack_270,(long *)(uStack_3a8 + 0x80),plVar16);
    }
    auVar41 = func_0x0b3d4a60(param_3,0);
    uStack_388 = auVar41._0_8_;
    uStack_348 = CONCAT44(uStack_348._4_4_,auVar41._8_4_);
    uStack_380 = extraout_XMM0_Qb;
    uStack_3a8 = func_0x0eee4390();
    uVar39 = func_0x0eee4390();
    uStack_418._0_4_ = (uint)(float)uStack_3a8;
    uStack_418._4_4_ = (int)(float)uVar39;
    iVar40 = (int)uStack_3a8._4_4_;
    uStack_3a8 = CONCAT44(uStack_418._4_4_,(uint)uStack_418);
    uStack_3a0 = CONCAT44((int)(float)((ulong)uVar39 >> 0x20),iVar40);
    fVar38 = (float)func_0x0eee4390();
    uVar30 = (uint)fVar38;
    pplVar14 = (long **)(ulong)uVar30;
    uStack_410 = (undefined1)uVar30;
    uStack_40f = (undefined2)(uVar30 >> 8);
    uStack_40d = (undefined1)(uVar30 >> 0x18);
    lVar12 = param_3[2];
    uVar8 = *(uint *)(param_3 + 3);
    plVar10 = (long *)(*(long *)(lVar12 + 0x38) +
                      (ulong)((int)((ulong)(*(long *)(lVar12 + 0x40) - *(long *)(lVar12 + 0x38)) >>
                                   3) - 1U & 0x4f6ba419) * 8);
    do {
      if (*plVar10 == -1) {
        plVar15 = *(long **)(lVar12 + 0x58);
        plVar10 = plVar15;
        goto LAB_0c515488;
      }
      lVar25 = *plVar10 * 0x20;
      plVar10 = (long *)(*(long *)(lVar12 + 0x50) + lVar25);
    } while (*(int *)(*(long *)(lVar12 + 0x50) + 8 + lVar25) != 0x4f6ba419);
    plVar15 = *(long **)(lVar12 + 0x58);
LAB_0c515488:
    if ((plVar10 == plVar15) || (lVar12 = plVar10[2], lVar12 == 0)) {
LAB_0c516824:
      func_0x04890760();
      goto LAB_0c516829;
    }
    uVar36 = (ulong)((uVar8 & 0x3ffff) >> 0xb);
    if (((ulong)(*(long *)(lVar12 + 0x10) - *(long *)(lVar12 + 8) >> 3) <= uVar36) ||
       (((lVar25 = *(long *)(*(long *)(lVar12 + 8) + uVar36 * 8), lVar25 == 0 ||
         (uVar1 = *(uint *)(lVar25 + (ulong)(uVar8 & 0x7ff) * 4),
         0x3fffe < (uVar8 & 0xfffc0000 ^ uVar1))) ||
        (lVar12 = *(long *)(*(long *)(lVar12 + 0x50) + (ulong)(uVar1 >> 4 & 0x3ff8)), lVar12 == 0)))
       ) goto LAB_0c516824;
    iVar40 = *(int *)(lVar12 + (ulong)(uVar1 & 0x7f) * 4);
    switch(iVar40) {
    case 0x236c:
      puVar32 = (undefined8 *)0xf6e5008;
      bVar34 = bRam000000000f6e5010;
      break;
    case 0x236d:
      puVar32 = (undefined8 *)0xf6e4fb8;
      bVar34 = bRam000000000f6e4fc0;
      break;
    case 0x236e:
    case 0x2371:
    case 0x2372:
    case 0x2373:
    case 0x2374:
    case 0x2375:
    case 0x2376:
    case 0x2377:
    case 0x2378:
    case 0x2379:
    case 0x237a:
    case 0x237b:
    case 0x237c:
    case 0x237d:
    case 0x237e:
    case 0x237f:
    case 0x2380:
    case 0x2381:
    case 0x2382:
    case 0x2383:
    case 0x2384:
LAB_0c51559d:
      cVar7 = func_0x0c516cc0(param_3,&plStack_378);
      plVar10 = plStack_3d8;
      if (cVar7 != '\0') {
        fVar38 = (float)(int)uStack_3a8._4_4_;
        fStack_430 = (float)(int)uVar30;
        bStack_438 = SUB41((float)(int)(float)uStack_3a8,0);
        uStack_437 = (undefined4)(CONCAT44(fVar38,(float)(int)(float)uStack_3a8) >> 8);
        uStack_433 = (undefined2)((uint)fVar38 >> 8);
        uStack_431 = (undefined1)((uint)fVar38 >> 0x18);
        plStack_270 = (long *)0xf6b1128;
        pplStack_268 = (long **)0x0;
        plStack_260 = (long *)0x0;
        plStack_258 = (long *)0x0;
        uStack_250 = 0xffffffffffffffff;
        uStack_248 = 0;
        bStack_338 = 0;
        uStack_32c = uStack_32c & 0xffffff00;
        (**(code **)(*(long *)param_3[0x3a] + 0x6b0))
                  ((long *)param_3[0x3a],plStack_3d8,0x25f,&bStack_438,0xffffffff,&plStack_270,0,
                   &bStack_338);
        goto LAB_0c515764;
      }
      goto LAB_0c5157db;
    case 0x236f:
      puVar32 = (undefined8 *)0xf6e4fe0;
      bVar34 = bRam000000000f6e4fe8;
      break;
    case 0x2370:
      puVar32 = (undefined8 *)0xf6e4f90;
      bVar34 = bRam000000000f6e4f98;
      break;
    case 0x2385:
      puVar32 = (undefined8 *)0xf6e5058;
      bVar34 = bRam000000000f6e5060;
      break;
    default:
      if (iVar40 != 0x1382) goto LAB_0c51559d;
      puVar32 = (undefined8 *)0xf6e5030;
      bVar34 = bRam000000000f6e5038;
    }
    if (((ulong)auStack_370 & 1) == 0) {
      if ((bVar34 & 1) == 0) {
        puVar11[2] = *(undefined8 *)((long)puVar32 + 0x18);
        uVar39 = *(undefined8 *)((long)puVar32 + 0x10);
        *puVar11 = *(undefined8 *)((long)puVar32 + 8);
        puVar11[1] = uVar39;
      }
      else {
        func_0x04885070(puVar11,*(undefined8 *)((long)puVar32 + 0x18),
                        *(undefined8 *)((long)puVar32 + 0x10));
      }
    }
    else {
      bVar37 = (bVar34 & 1) != 0;
      lVar12 = (long)puVar32 + 9;
      if (bVar37) {
        lVar12 = *(long *)((long)puVar32 + 0x18);
      }
      uVar36 = (ulong)(bVar34 >> 1);
      if (bVar37) {
        uVar36 = *(ulong *)((long)puVar32 + 0x10);
      }
      func_0x04885120(puVar11,lVar12,uVar36);
      uStack_3a8 = CONCAT44(uStack_418._4_4_,(uint)uStack_418);
      uStack_3a0 = 0;
      uVar30 = CONCAT13(uStack_40d,CONCAT21(uStack_40f,uStack_410));
    }
    plVar10 = plStack_3d8;
    plStack_378 = (long *)*puVar32;
    uStack_358 = 0;
    fVar38 = (float)(int)uStack_3a8._4_4_;
    fStack_430 = (float)(int)uVar30;
    bStack_438 = SUB41((float)(int)(float)uStack_3a8,0);
    uStack_437 = (undefined4)(CONCAT44(fVar38,(float)(int)(float)uStack_3a8) >> 8);
    uStack_433 = (undefined2)((uint)fVar38 >> 8);
    uStack_431 = (undefined1)((uint)fVar38 >> 0x18);
    plStack_270 = (long *)0xf6b1128;
    pplStack_268 = (long **)0x0;
    plStack_260 = (long *)0x0;
    plStack_258 = (long *)0x0;
    uStack_250 = 0xffffffffffffffff;
    uStack_248 = 0;
    bStack_338 = 0;
    uStack_32c = uStack_32c & 0xffffff00;
    (**(code **)(*(long *)param_3[0x3a] + 0x6b0))
              ((long *)param_3[0x3a],plStack_3d8,0xd4,&bStack_438,0xffffffff,&plStack_270,0,
               &bStack_338);
LAB_0c515764:
    plVar15 = plStack_260;
    pplStack_268 = (long **)0x0;
    plStack_260 = (long *)0x0;
    if (plVar15 != (long *)0x0) {
      LOCK();
      plVar9 = plVar15 + 1;
      lVar12 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        func_0x0412c2d0(plVar15);
      }
      plVar15 = plStack_260;
      plStack_258 = (long *)0x0;
      if (plStack_260 != (long *)0x0) {
        LOCK();
        plVar9 = plStack_260 + 1;
        lVar12 = *plVar9;
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (lVar12 == 0) {
          (**(code **)(*plStack_260 + 0x10))(plStack_260);
          func_0x0412c2d0(plVar15);
        }
      }
    }
LAB_0c5157db:
    (**(code **)(*plVar10 + 0x1f8))(plVar10,param_3,0xf6e9db8,&uStack_418,0);
    pplStack_178 = (long **)&UNK_0f371da8;
    if ((ulong)uStack_e8 != 0xffffffff) {
      (**(code **)(&UNK_0f381d98 + (ulong)uStack_e8 * 8))(&plStack_270,plVar16);
    }
    plVar10 = plStack_100;
    uStack_e8 = 0xffffffff;
    pplStack_178 = (long **)&UNK_0f36e918;
    plStack_100 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    if (lStack_128 != 0) {
      lStack_120 = lStack_128;
      func_0x0412a280(lStack_128,lStack_118 - lStack_128);
    }
    if (lStack_148 != 0) {
      lStack_140 = lStack_148;
      func_0x0412a280(lStack_148,lStack_138 - lStack_148);
    }
    plVar10 = uStack_168;
    uStack_168 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    if (plStack_170 == (long *)0x0) goto LAB_0c515905;
    LOCK();
    *(int *)((long)plStack_170 + 0xc) = *(int *)((long)plStack_170 + 0xc) + -1;
    UNLOCK();
    if (((0 < *(int *)((long)plStack_170 + 0xc)) || (*plStack_170 != 0)) ||
       (plVar10 = plStack_170, plStack_170 == (long *)0x0)) goto LAB_0c515905;
    goto LAB_0c5158fb;
  }
LAB_0c5138d6:
  lVar12 = param_3[2];
  uVar8 = *(uint *)(param_3 + 3);
  lVar25 = *(long *)(lVar12 + 0x38);
  uVar36 = (ulong)((int)((ulong)(*(long *)(lVar12 + 0x40) - lVar25) >> 3) - 1U & 0x4f6ba419);
  plVar10 = (long *)(lVar25 + uVar36 * 8);
  lVar23 = *(long *)(lVar12 + 0x50);
  do {
    if (*plVar10 == -1) {
      plVar10 = *(long **)(lVar12 + 0x58);
      plVar15 = plVar10;
      goto LAB_0c513929;
    }
    lVar26 = *plVar10 * 0x20;
    plVar10 = (long *)(lVar23 + lVar26);
  } while (*(int *)(lVar23 + 8 + lVar26) != 0x4f6ba419);
  plVar15 = *(long **)(lVar12 + 0x58);
LAB_0c513929:
  if ((plVar10 == plVar15) || (lVar26 = plVar10[2], lVar26 == 0)) {
LAB_0c51682e:
    func_0x04890760();
LAB_0c516833:
    func_0x04890760();
    goto LAB_0c516838;
  }
  pplVar13 = (long **)(ulong)((uVar8 & 0x3ffff) >> 0xb);
  pplVar14 = (long **)(*(long *)(lVar26 + 0x10) - *(long *)(lVar26 + 8) >> 3);
  if ((pplVar14 <= pplVar13) ||
     (((lVar24 = *(long *)(*(long *)(lVar26 + 8) + (long)pplVar13 * 8), lVar24 == 0 ||
       (uVar30 = *(uint *)(lVar24 + (ulong)(uVar8 & 0x7ff) * 4),
       0x3fffe < (uVar8 & 0xfffc0000 ^ uVar30))) ||
      (lVar26 = *(long *)(*(long *)(lVar26 + 0x50) + (ulong)(uVar30 >> 4 & 0x3ff8)), lVar26 == 0))))
  goto LAB_0c51682e;
  iVar40 = *(int *)(lVar26 + (ulong)(uVar30 & 0x7f) * 4);
  switch(iVar40) {
  case 0x236c:
    pplVar14 = (long **)0xf6e5008;
    bVar34 = bRam000000000f6e5010;
    break;
  case 0x236d:
    pplVar14 = (long **)0xf6e4fb8;
    bVar34 = bRam000000000f6e4fc0;
    break;
  case 0x236e:
  case 0x2371:
  case 0x2372:
  case 0x2373:
  case 0x2374:
  case 0x2375:
  case 0x2376:
  case 0x2377:
  case 0x2378:
  case 0x2379:
  case 0x237a:
  case 0x237b:
  case 0x237c:
  case 0x237d:
  case 0x237e:
  case 0x237f:
  case 0x2380:
  case 0x2381:
  case 0x2382:
  case 0x2383:
  case 0x2384:
    goto LAB_0c514588;
  case 0x236f:
    pplVar14 = (long **)0xf6e4fe0;
    bVar34 = bRam000000000f6e4fe8;
    break;
  case 0x2370:
    pplVar14 = (long **)0xf6e4f90;
    bVar34 = bRam000000000f6e4f98;
    break;
  case 0x2385:
    pplVar14 = (long **)0xf6e5058;
    bVar34 = bRam000000000f6e5060;
    break;
  default:
    if (iVar40 == 0x1382) {
      pplVar14 = (long **)0xf6e5030;
      bVar34 = bRam000000000f6e5038;
      break;
    }
    goto LAB_0c514588;
  }
  if (((ulong)auStack_370 & 1) == 0) {
    if ((bVar34 & 1) == 0) {
      plStack_360 = *(long **)((long)pplVar14 + 0x18);
      auStack_370 = (undefined1  [8])*(long **)((long)pplVar14 + 8);
      plStack_368 = *(long **)((long)pplVar14 + 0x10);
    }
    else {
      func_0x04885070(auStack_370,*(long **)((long)pplVar14 + 0x18),
                      *(long **)((long)pplVar14 + 0x10));
    }
  }
  else {
    bVar37 = (bVar34 & 1) != 0;
    pbVar33 = (byte *)((long)pplVar14 + 9);
    if (bVar37) {
      pbVar33 = *(byte **)((long)pplVar14 + 0x18);
    }
    plVar10 = (long *)(ulong)(bVar34 >> 1);
    if (bVar37) {
      plVar10 = *(long **)((long)pplVar14 + 0x10);
    }
    func_0x04885120(auStack_370,pbVar33,plVar10);
  }
  plStack_378 = *pplVar14;
  uStack_358 = 0;
  if ((ushort)(*(short *)((long)param_1 + 0x1ca) - 2U) < 4) goto LAB_0c51455f;
  lVar12 = param_3[2];
  uVar8 = *(uint *)(param_3 + 3);
  lVar25 = *(long *)(lVar12 + 0x38);
  lVar23 = *(long *)(lVar12 + 0x50);
  uVar36 = (ulong)((int)((ulong)(*(long *)(lVar12 + 0x40) - lVar25) >> 3) - 1U & 0x4f6ba419);
LAB_0c514588:
  plVar10 = (long *)(lVar25 + uVar36 * 8);
  do {
    if (*plVar10 == -1) {
      plVar15 = *(long **)(lVar12 + 0x58);
      plVar10 = plVar15;
      goto LAB_0c5145b8;
    }
    lVar25 = *plVar10 * 0x20;
    plVar10 = (long *)(lVar23 + lVar25);
  } while (*(int *)(lVar23 + 8 + lVar25) != 0x4f6ba419);
  plVar15 = *(long **)(lVar12 + 0x58);
LAB_0c5145b8:
  if ((plVar10 != plVar15) && (lVar12 = plVar10[2], lVar12 != 0)) {
    uVar36 = (ulong)((uVar8 & 0x3ffff) >> 0xb);
    if (((uVar36 < (ulong)(*(long *)(lVar12 + 0x10) - *(long *)(lVar12 + 8) >> 3)) &&
        ((lVar25 = *(long *)(*(long *)(lVar12 + 8) + uVar36 * 8), lVar25 != 0 &&
         (uVar30 = *(uint *)(lVar25 + (ulong)(uVar8 & 0x7ff) * 4),
         (uVar8 & 0xfffc0000 ^ uVar30) < 0x3ffff)))) &&
       (lVar12 = *(long *)(*(long *)(lVar12 + 0x50) + (ulong)(uVar30 >> 4 & 0x3ff8)), lVar12 != 0))
    goto code_r0x0c514637;
  }
LAB_0c516838:
  func_0x04890760();
LAB_0c51683d:
  iVar40 = func_0x04108328(&DAT_0f6e87a0);
  if (iVar40 != 0) {
    _DAT_0f6e8780 = 0x1001400110001;
    _DAT_0f6e8788 = &UNK_01254d89;
    _DAT_0f6e8790 = &UNK_01254d89;
    DAT_0f6e8798 = 0;
    func_0x0eee2f40(&UNK_0495d2a0,&DAT_0f6e8780,0xf53dab8);
    FUN_0410844d(&DAT_0f6e87a0);
  }
  goto LAB_0c513709;
code_r0x0c514637:
  if (*(int *)(lVar12 + (ulong)(uVar30 & 0x7f) * 4) == 0x399) {
    if (((ulong)auStack_370 & 1) == 0) {
      if ((DAT_0f6e5088 & 1) == 0) {
        plStack_360 = _DAT_0f6e5098;
        auStack_370 = (undefined1  [8])CONCAT71(uRam000000000f6e5089,DAT_0f6e5088);
        plStack_368 = _DAT_0f6e5090;
      }
      else {
        func_0x04885070(auStack_370,_DAT_0f6e5098,_DAT_0f6e5090);
      }
    }
    else {
      plVar16 = (long *)(ulong)(DAT_0f6e5088 >> 1);
      plVar10 = (long *)0xf6e5089;
      if ((DAT_0f6e5088 & 1) != 0) {
        plVar16 = _DAT_0f6e5090;
        plVar10 = _DAT_0f6e5098;
      }
      func_0x04885120(auStack_370,plVar10,plVar16);
    }
    plStack_378 = _DAT_0f6e5080;
    uStack_358 = 0;
    uVar36 = 0;
    goto LAB_0c515908;
  }
  if (*(short *)((long)param_1 + 0x1ca) != 1) {
    if (*(short *)((long)param_1 + 0x1ca) == 0) {
      plVar15 = (long *)func_0x0412c300(param_3[0x39]);
      plVar16 = (long *)param_3[0x38];
      LOCK();
      plVar10 = plVar15 + 1;
      lVar12 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        func_0x0412c2d0(plVar15);
      }
      plVar10 = (long *)(**(code **)(*plVar16 + 0x68))();
      lVar25 = (**(code **)(*plVar10 + 0x30))(plVar10,&uStack_448);
      lVar12 = *(long *)(lVar25 + 0x68);
      pcVar2 = *(char **)(lVar12 + 0x20);
      if (1 < (byte)(*pcVar2 - 5U)) {
LAB_0c515c90:
        cVar7 = func_0x0c516f00(param_1,uStack_3a8,param_3,&uStack_448);
        uVar36 = CONCAT71((int7)((ulong)pcVar2 >> 8),3);
        if (cVar7 != '\0') goto LAB_0c515908;
        goto LAB_0c51455f;
      }
      lVar23 = *(long *)(lVar12 + 0x1b0);
      if (lVar23 == 0) {
LAB_0c514767:
        for (plVar16 = *(long **)(lVar12 + 0x350); plVar16 != *(long **)(lVar12 + 0x358);
            plVar16 = plVar16 + 2) {
          puVar11 = (undefined8 *)*plVar16;
          if (*(ulong *)(puVar11[1] + 8) == _DAT_0f6ff1d0) {
            uVar36 = (**(code **)*puVar11)(puVar11,lVar12,*(ushort *)(lVar25 + 0x128));
            if ((uVar36 >> 0x20 & 1) != 0) goto LAB_0c515c8c;
            break;
          }
        }
      }
      else {
        lVar26 = lVar12 + 0x1b0;
        do {
          bVar37 = *(ulong *)(lVar23 + 0x20) < _DAT_0f6ff1d0;
          if (!bVar37) {
            lVar26 = lVar23;
          }
          lVar23 = *(long *)(lVar23 + (ulong)bVar37 * 8);
        } while (lVar23 != 0);
        if ((lVar26 == lVar12 + 0x1b0) || (_DAT_0f6ff1d0 < *(ulong *)(lVar26 + 0x20)))
        goto LAB_0c514767;
        cVar7 = (char)*(undefined4 *)(lVar26 + 0x2c);
        uVar36 = (ulong)((uint)(*(ushort *)(lVar25 + 0x128) >>
                               (((char)*(undefined4 *)(lVar26 + 0x30) - cVar7) + 1U & 0x1f)) &
                        0xffffU >> (0x10U - cVar7 & 0x1f));
LAB_0c515c8c:
        if ((int)uVar36 != 0) goto LAB_0c515c90;
      }
      pplStack_178 = (long **)CONCAT44(uStack_448._4_4_ + 1,(int)uStack_448);
      plStack_170._0_4_ = iStack_440;
      lVar25 = (**(code **)(*plVar10 + 0x30))(plVar10,&pplStack_178);
      pplStack_178 = (long **)CONCAT44(uStack_448._4_4_ + 1,(int)uStack_448);
      plStack_170 = (long *)CONCAT44(plStack_170._4_4_,iStack_440);
      lVar23 = (**(code **)(*plVar10 + 0x10))(plVar10,&pplStack_178);
      lVar12 = *(long *)(lVar25 + 0x68);
      if (**(char **)(lVar12 + 0x20) == '\x05') {
        lVar26 = *(long *)(lVar12 + 0x1b0);
        if (lVar26 == 0) {
LAB_0c515d7e:
          uVar36 = 0;
          for (plVar16 = *(long **)(lVar12 + 0x350); plVar16 != *(long **)(lVar12 + 0x358);
              plVar16 = plVar16 + 2) {
            if (*(ulong *)(((undefined8 *)*plVar16)[1] + 8) == _DAT_0f6ff1d0) {
              uVar36 = (*(code *)**(undefined8 **)*plVar16)();
              break;
            }
          }
          uVar8 = (uint)uVar36;
          if ((uVar36 >> 0x20 & 1) == 0) {
            uVar8 = 0;
          }
        }
        else {
          lVar24 = lVar12 + 0x1b0;
          do {
            bVar37 = *(ulong *)(lVar26 + 0x20) < _DAT_0f6ff1d0;
            if (!bVar37) {
              lVar24 = lVar26;
            }
            lVar26 = *(long *)(lVar26 + (ulong)bVar37 * 8);
          } while (lVar26 != 0);
          if ((lVar24 == lVar12 + 0x1b0) || (_DAT_0f6ff1d0 < *(ulong *)(lVar24 + 0x20)))
          goto LAB_0c515d7e;
          cVar7 = (char)*(undefined4 *)(lVar24 + 0x2c);
          uVar8 = (uint)(*(ushort *)(lVar25 + 0x128) >>
                        (((char)*(undefined4 *)(lVar24 + 0x30) - cVar7) + 1U & 0x1f)) &
                  0xffffU >> (0x10U - cVar7 & 0x1f);
        }
        bVar37 = uVar8 == 0;
      }
      else {
        bVar37 = false;
      }
      if (((bVar37) || (*(char *)(lVar23 + 0x71) != '\0')) && (*pcVar2 == '\x05')) {
        pbVar33 = &UNK_01ce7446;
        plStack_3d8 = plVar10;
        do {
          uVar36 = (ulong)*pbVar33;
          pplStack_178 = (long **)CONCAT44(*(int *)(&UNK_019b3c54 + uVar36 * 0xc) + uStack_448._4_4_
                                           ,*(int *)(&UNK_019b3c50 + uVar36 * 0xc) + (int)uStack_448
                                          );
          plStack_170 = (long *)CONCAT44(plStack_170._4_4_,
                                         *(int *)(&UNK_019b3c58 + uVar36 * 0xc) + iStack_440);
          lVar25 = (**(code **)(*plVar10 + 0x30))(plVar10,&pplStack_178);
          lVar12 = *(long *)(lVar25 + 0x68);
          cVar7 = **(char **)(lVar12 + 0x20);
          if (*(char *)(lVar25 + 0x71) == '\0') {
            if (cVar7 != '\x05') goto LAB_0c51622a;
            lVar23 = *(long *)(lVar12 + 0x1b0);
            if (lVar23 != 0) {
              lVar26 = lVar12 + 0x1b0;
              do {
                bVar37 = *(ulong *)(lVar23 + 0x20) < _DAT_0f6ff1d0;
                if (!bVar37) {
                  lVar26 = lVar23;
                }
                lVar23 = *(long *)(lVar23 + (ulong)bVar37 * 8);
              } while (lVar23 != 0);
              if ((lVar26 != lVar12 + 0x1b0) && (*(ulong *)(lVar26 + 0x20) <= _DAT_0f6ff1d0)) {
                cVar21 = (char)*(undefined4 *)(lVar26 + 0x2c);
                uVar36 = (ulong)((uint)(*(ushort *)(lVar25 + 0x128) >>
                                       (((char)*(undefined4 *)(lVar26 + 0x30) - cVar21) + 1U & 0x1f)
                                       ) & 0xffffU >> (0x10U - cVar21 & 0x1f));
LAB_0c51616f:
                if ((int)uVar36 == 0) goto LAB_0c516177;
                goto LAB_0c51622a;
              }
            }
            for (plVar16 = *(long **)(lVar12 + 0x350); plVar16 != *(long **)(lVar12 + 0x358);
                plVar16 = plVar16 + 2) {
              if (*(ulong *)(((undefined8 *)*plVar16)[1] + 8) == _DAT_0f6ff1d0) {
                uVar36 = (*(code *)**(undefined8 **)*plVar16)();
                plVar10 = plStack_3d8;
                if ((uVar36 & 0x100000000) != 0) goto LAB_0c51616f;
                break;
              }
            }
          }
LAB_0c516177:
          if (cVar7 == '\x05') {
            lVar12 = *(long *)(lVar25 + 0x68);
            lVar23 = *(long *)(lVar12 + 0x1b0);
            if (lVar23 != 0) {
              lVar26 = lVar12 + 0x1b0;
              do {
                bVar37 = *(ulong *)(lVar23 + 0x20) < _DAT_0f6ff1d0;
                if (!bVar37) {
                  lVar26 = lVar23;
                }
                lVar23 = *(long *)(lVar23 + (ulong)bVar37 * 8);
              } while (lVar23 != 0);
              if ((lVar26 != lVar12 + 0x1b0) && (*(ulong *)(lVar26 + 0x20) <= _DAT_0f6ff1d0)) {
                cVar7 = (char)*(undefined4 *)(lVar26 + 0x2c);
                uVar36 = (ulong)((uint)(*(ushort *)(lVar25 + 0x128) >>
                                       (((char)*(undefined4 *)(lVar26 + 0x30) - cVar7) + 1U & 0x1f))
                                & 0xffffU >> (0x10U - cVar7 & 0x1f));
LAB_0c516017:
                if ((int)uVar36 == 0) goto LAB_0c51601f;
                goto LAB_0c51622a;
              }
            }
            for (plVar16 = *(long **)(lVar12 + 0x350); plVar16 != *(long **)(lVar12 + 0x358);
                plVar16 = plVar16 + 2) {
              puVar11 = (undefined8 *)*plVar16;
              if (*(ulong *)(puVar11[1] + 8) == _DAT_0f6ff1d0) {
                uVar36 = (**(code **)*puVar11)(puVar11,lVar12,*(ushort *)(lVar25 + 0x128));
                if ((uVar36 & 0x100000000) != 0) goto LAB_0c516017;
                break;
              }
            }
          }
LAB_0c51601f:
          pbVar33 = pbVar33 + 1;
        } while (pbVar33 != &UNK_01ce744b);
      }
      else {
LAB_0c51622a:
        lVar12 = func_0x0cc41df0(&DAT_0f6ff9e0,&DAT_0f6eaec0,1);
        lVar25 = (**(code **)(*plVar10 + 0x28))(plVar10,&uStack_448);
        if (*(long *)(lVar25 + 0x110) == *(long *)(lVar12 + 0x110)) {
          uStack_158 = CONCAT71(uStack_158._1_7_,1);
          plStack_170 = uStack_448;
          uStack_168._0_5_ = CONCAT14(1,iStack_440);
          uStack_160 = CONCAT44(uStack_160._4_4_,1);
          (**(code **)(*plVar10 + 0xf8))(plVar10,&uStack_448,lVar12,3,0,&pplStack_178);
        }
        else {
          (**(code **)(*plVar10 + 0x100))(plVar10,&uStack_448,lVar12,3);
        }
        lVar12 = (**(code **)(*plVar10 + 0x10))(plVar10,&uStack_448);
        if (*(long *)(*(long *)(lVar12 + 0x68) + 200) == _DAT_0f714c68) {
          uVar39 = func_0x0cc41df0(&DAT_0f6ff9e0,&DAT_0f6eaec0,1);
          uStack_168 = (long *)0x0;
          uStack_160 = 0;
          pplStack_178 = (long **)0x0;
          plStack_170 = (long *)0x0;
          uStack_158 = 1;
          (**(code **)(*plVar10 + 0xf8))(plVar10,&uStack_448,uVar39,3,0,&pplStack_178);
        }
      }
      if (3 < (ushort)(*(short *)((long)param_1 + 0x1ca) - 2U)) {
        func_0x0c519bd0(plVar10,param_3,*pcVar2);
      }
      (**(code **)(*plVar10 + 0x1f8))(plVar10,param_3,0xf6e9d58,&uStack_448,0);
      plStack_270 = param_3;
      func_0x0c44ed40(&pplStack_268);
      pplStack_268 = (long **)&UNK_0f36e858;
      func_0x0c44f4e0(&pplStack_268,uStack_3a8);
      uStack_1e8 = 8;
      uVar39 = (**(code **)(*(long *)param_3[0x3a] + 0x620))();
      uStack_e8 = CONCAT31(uStack_e8._1_3_,1);
      pplStack_178 = &plStack_270;
      uStack_48 = 0x13;
      func_0x0c616a10(uVar39,&pplStack_178);
      if ((ulong)uStack_48 != 0xffffffff) {
        (**(code **)(&UNK_0f381db0 + (ulong)uStack_48 * 8))(&bStack_338,&pplStack_178);
      }
      uVar8 = func_0x0bbfe2d0(param_3 + 1);
      plVar16 = (long *)(ulong)uVar8;
      if (((uVar8 == 0xffffffff) ||
          ((iVar40 = (**(code **)(*(long *)param_3[0x3a] + 0x468))(), uVar8 != 1 &&
           ((uVar8 != 5 || (iVar40 != 1)))))) && ((*(byte *)(param_3 + 0x40) & 1) != 0)) {
        func_0x0c4564a0(uStack_3a8,*(byte *)(uStack_3a8 + 0x22) - 1);
        cVar7 = *pcVar2;
        plVar16 = (long *)0x0;
        puVar11 = (undefined8 *)0xf6e4f40;
        lVar12 = 0xf6e4f40;
        if (cVar7 == '\x05') {
          lVar12 = 0xf6e4f18;
        }
        puVar32 = (undefined8 *)0xf6e4f48;
        if (cVar7 == '\x05') {
          puVar32 = (undefined8 *)0xf6e4f20;
        }
        uStack_328 = 0;
        puStack_320 = (undefined2 *)0x0;
        bStack_338 = 0;
        uStack_337 = 0;
        uStack_336 = 0;
        uStack_334 = 0;
        bStack_330 = 0;
        uStack_32f = 0;
        uStack_32d = 0;
        uStack_32c = 0;
        uStack_318 = 0;
        if ((*(byte *)(lVar12 + 8) & 1) == 0) {
          puStack_320 = (undefined2 *)puVar32[2];
          uVar39 = *puVar32;
          uStack_328 = puVar32[1];
          bStack_330 = (byte)uVar39;
          uStack_32f = (undefined2)((ulong)uVar39 >> 8);
          uStack_32d = (undefined1)((ulong)uVar39 >> 0x18);
          uStack_32c = (uint)((ulong)uVar39 >> 0x20);
        }
        else {
          puVar32 = (undefined8 *)0xf6e4f58;
          if (cVar7 == '\x05') {
            puVar32 = (undefined8 *)0xf6e4f30;
          }
          puVar18 = (undefined8 *)0xf6e4f50;
          if (cVar7 == '\x05') {
            puVar18 = (undefined8 *)0xf6e4f28;
          }
          func_0x04885070(&bStack_330,*puVar32,*puVar18);
        }
        if (cVar7 == '\x05') {
          puVar11 = (undefined8 *)0xf6e4f18;
        }
        uVar39 = *puVar11;
        bStack_338 = (byte)uVar39;
        uStack_337 = (undefined1)((ulong)uVar39 >> 8);
        uStack_336 = (undefined2)((ulong)uVar39 >> 0x10);
        uStack_334 = (undefined4)((ulong)uVar39 >> 0x20);
        uVar36 = (ulong)(bStack_330 >> 1);
        puVar6 = &uStack_32f;
        if ((bStack_330 & 1) != 0) {
          uVar36 = uStack_328;
          puVar6 = puStack_320;
        }
        func_0x0c44f180(&pplStack_178,puVar6,uVar36,1,0,0);
        pplStack_178 = (long **)&UNK_0f371da8;
        alStack_f8[0]._0_4_ = 0;
        uStack_e8 = 0;
        func_0x0c4944d0(param_1,param_3,uStack_3a8,&pplStack_178,9);
        pplStack_178 = (long **)&UNK_0f371da8;
        if ((ulong)uStack_e8 != 0xffffffff) {
          (**(code **)(&UNK_0f381d98 + (ulong)uStack_e8 * 8))(&uStack_418,alStack_f8);
        }
        plVar10 = plStack_100;
        uStack_e8 = 0xffffffff;
        pplStack_178 = (long **)&UNK_0f36e918;
        plStack_100 = (long *)0x0;
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 8))();
        }
        if (lStack_128 != 0) {
          lStack_120 = lStack_128;
          func_0x0412a280(lStack_128,lStack_118 - lStack_128);
        }
        if (lStack_148 != 0) {
          lStack_140 = lStack_148;
          func_0x0412a280(lStack_148,lStack_138 - lStack_148);
        }
        plVar10 = uStack_168;
        uStack_168 = (long *)0x0;
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 8))();
        }
        if (plStack_170 != (long *)0x0) {
          LOCK();
          *(int *)((long)plStack_170 + 0xc) = *(int *)((long)plStack_170 + 0xc) + -1;
          UNLOCK();
          if (((*(int *)((long)plStack_170 + 0xc) < 1) && (*plStack_170 == 0)) &&
             (plStack_170 != (long *)0x0)) {
            func_0x0412a280(plStack_170,0x10);
          }
        }
        if ((bStack_330 & 1) != 0) {
          func_0x0412a280(puStack_320,
                          CONCAT44(uStack_32c,CONCAT13(uStack_32d,CONCAT21(uStack_32f,bStack_330)))
                          & 0xfffffffffffffffe);
        }
      }
      plVar10 = plStack_1f0;
      pplStack_268 = (long **)&UNK_0f36e918;
      plStack_1f0 = (long *)0x0;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 8))();
      }
      if (lStack_218 != 0) {
        lStack_210 = lStack_218;
        func_0x0412a280(lStack_218,lStack_208 - lStack_218);
      }
      if (lStack_238 != 0) {
        lStack_230 = lStack_238;
        func_0x0412a280(lStack_238,lStack_228 - lStack_238);
      }
      plVar10 = plStack_258;
      plStack_258 = (long *)0x0;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 8))();
      }
      if (plStack_260 != (long *)0x0) {
        LOCK();
        *(int *)((long)plStack_260 + 0xc) = *(int *)((long)plStack_260 + 0xc) + -1;
        UNLOCK();
        if (((*(int *)((long)plStack_260 + 0xc) < 1) && (*plStack_260 == 0)) &&
           (plVar10 = plStack_260, plStack_260 != (long *)0x0)) {
LAB_0c5158fb:
          func_0x0412a280(plVar10,0x10);
        }
      }
LAB_0c515905:
      uVar36 = CONCAT71((int7)((ulong)plVar16 >> 8),3);
      goto LAB_0c515908;
    }
    lVar25 = (**(code **)(*plStack_3d8 + 0x10))(plStack_3d8,&uStack_448);
    lVar12 = *(long *)(*(long *)(lVar25 + 0x68) + 200);
    uVar36 = (ulong)plVar16 & 0xff;
    if ((ushort)(*(short *)((long)param_1 + 0x1ca) - 2U) < 4 &&
        (lVar12 == _DAT_0f713f00 || lVar12 == _DAT_0f714b20)) {
      uVar19 = (ulong)uStack_448 & 0xffffffff;
    }
    else {
      uVar19 = (ulong)uStack_448 & 0xffffffff;
      if ((*(byte *)(lVar25 + 0xb8) & *(short *)((long)param_1 + 0x1ca) == 8) == 0) {
        uVar19 = (ulong)(uint)((int)uStack_448 + *(int *)(&UNK_019b3c50 + uVar36 * 0xc));
        iStack_440 = iStack_440 + *(int *)(&UNK_019b3c58 + uVar36 * 0xc);
        uStack_448 = (long *)CONCAT44(*(int *)(&UNK_019b3c54 + uVar36 * 0xc) + uStack_448._4_4_,
                                      (int)uStack_448 + *(int *)(&UNK_019b3c50 + uVar36 * 0xc));
      }
    }
    pplStack_178 = (long **)(uVar19 | (ulong)(uStack_448._4_4_ - 1) << 0x20);
    plStack_170 = (long *)CONCAT44(plStack_170._4_4_,iStack_440);
    lVar12 = (**(code **)(*plStack_3d8 + 0x10))(plStack_3d8,&pplStack_178);
    plVar10 = plStack_3d8;
    uVar8 = (uint)*(ushort *)((long)param_1 + 0x1ca);
    if (*(long *)(*(long *)(lVar12 + 0x68) + 200) == _DAT_0f715218) {
      uVar8 = 0xe;
      if (*(ushort *)((long)param_1 + 0x1ca) != 0xe) {
        plVar16 = (long *)(**(code **)(*plStack_3d8 + 0x150))(plStack_3d8);
        pplStack_178 = (long **)CONCAT44((float)(uStack_448._4_4_ + -1),(float)(int)uStack_448);
        plStack_170 = (long *)CONCAT44(plStack_170._4_4_,(float)iStack_440);
        (**(code **)(*plVar16 + 0x6a0))(plVar16,plVar10,0x7d1,&pplStack_178,lVar12);
        plStack_270 = (long *)CONCAT44(uStack_448._4_4_ + -1,(int)uStack_448);
        pplStack_268 = (long **)CONCAT44(pplStack_268._4_4_,iStack_440);
        uStack_168 = (long *)0x0;
        uStack_160 = 0;
        pplStack_178 = (long **)0x0;
        plStack_170 = (long *)0x0;
        uStack_158 = 1;
        (**(code **)(*plVar10 + 0x108))(plVar10,&plStack_270,&pplStack_178);
        uVar8 = (uint)*(ushort *)((long)param_1 + 0x1ca);
        plVar16 = plVar10;
      }
      uStack_448 = (long *)CONCAT44(uStack_448._4_4_ + -1,(int)uStack_448);
    }
    uVar30 = uVar8 - 2;
    if (((ushort)uVar30 < 0xc) && ((0xf4fU >> (uVar30 & 0x1f) & 1) != 0)) {
      lVar12 = func_0x0cc422f0(&DAT_0f6ff9e0,
                               *(undefined8 *)(&UNK_0f382818 + (ulong)(uVar30 & 0xffff) * 8),0,0,0);
      if (lVar12 == 0) {
        uVar8 = (uint)*(ushort *)((long)param_1 + 0x1ca);
        goto LAB_0c515dc9;
      }
      puVar11 = *(undefined8 **)(lVar12 + 0x200);
    }
    else {
LAB_0c515dc9:
      if ((3 < uVar8 - 2) && (uVar8 != 0xe)) goto LAB_0c51455f;
    }
    cVar7 = func_0x0c5173e0(param_1,plStack_3d8,puVar11,&uStack_448,param_3,uStack_3a8,uVar36);
    if (cVar7 != '\0') {
      func_0x0c5180a0(*(undefined2 *)((long)param_1 + 0x1ca),plStack_3d8,param_3,&uStack_448);
      (**(code **)(*param_3 + 0x378))(param_3,uStack_3a8,9,1);
      cVar7 = func_0x0b3ce1c0(param_3,0x13f);
      uVar36 = CONCAT71((int7)((ulong)plVar16 >> 8),3);
      if ((cVar7 != '\0') && (cVar7 = func_0x0b4083c0(param_3), cVar7 == '\0')) {
        uVar19 = (ulong)(DAT_0f6e4ef8 >> 1);
        uVar39 = 0xf6e4ef9;
        if ((DAT_0f6e4ef8 & 1) != 0) {
          uVar19 = _DAT_0f6e4f00;
          uVar39 = _DAT_0f6e4f08;
        }
        func_0x0c44f180(&bStack_338,uVar39,uVar19,1,0,0);
        bStack_338 = 0xa8;
        uStack_337 = 0x1d;
        uStack_336 = 0xf37;
        uStack_334 = 0;
        uStack_2b8 = 0;
        uStack_2a8 = 0;
        plStack_270 = param_3;
        func_0x0c44f670(&pplStack_268,&bStack_338);
        uStack_1e8 = (uint)uStack_318._2_1_;
        uStack_1e4 = 9;
        uStack_1e0 = 0;
        uStack_1d8 = 0;
        uStack_1d0 = 0xffffffff;
        uVar39 = (**(code **)(*(long *)param_3[0x3a] + 0x620))();
        uStack_d0 = 1;
        pplStack_178 = &plStack_270;
        uStack_48 = 0;
        func_0x0c616a10(uVar39,&pplStack_178);
        func_0x049c3800(&pplStack_178);
        func_0x0c512af0(uStack_3a8,param_3);
        func_0x049c3850(&plStack_270);
        func_0x049c2320(&bStack_338);
      }
      goto LAB_0c515908;
    }
  }
LAB_0c51455f:
  uVar36 = 0;
LAB_0c515908:
  if (((ulong)auStack_370 & 1) != 0) {
    func_0x0412a280(plStack_360,(ulong)auStack_370 & 0xfffffffffffffffe);
  }
  return uVar36 & 0xffffffff;
}



/* ---- referenced strings ----
 * 0x131b201  AppendCustomName
 */
