/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x72f6100 (ELF vaddr 0x71f6100)
 * Label: caller-of-callee
 * Body:  [[072f6100, 072f70d2] [072f70e0, 072f8730] [072f8740, 072f8e2a] [072f906e, 072f90a3] [072f9681, 072f96ac]]
 * Ghidra: FUN_072f6100
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_072f6100(long param_1,long param_2)

{
  ulong *puVar1;
  code *pcVar2;
  ulong **ppuVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined7 uVar7;
  char cVar8;
  undefined4 uVar9;
  int iVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  ulong *puVar16;
  undefined4 *puVar17;
  ulong uVar18;
  long lVar19;
  undefined8 *puVar20;
  uint uVar21;
  ulong **ppuVar22;
  uint uVar23;
  undefined8 uVar24;
  long lVar25;
  undefined *puVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  ulong *puVar29;
  ulong uVar30;
  undefined1 *puVar31;
  undefined1 *puVar32;
  ulong *puVar33;
  long lVar34;
  bool bVar35;
  int iVar36;
  float fVar37;
  undefined1 auStack_378 [8];
  ulong **ppuStack_370;
  undefined8 uStack_368;
  ulong uStack_360;
  ulong *puStack_358;
  ulong *puStack_350;
  ulong *puStack_348;
  undefined1 auStack_340 [5];
  undefined4 uStack_33b;
  undefined4 uStack_337;
  undefined1 uStack_333;
  undefined2 uStack_332;
  undefined1 uStack_330;
  undefined5 uStack_32f;
  undefined1 uStack_32a;
  undefined1 uStack_329;
  ulong *puStack_328;
  byte bStack_320;
  undefined1 uStack_31f;
  undefined6 uStack_31e;
  ulong *puStack_318;
  undefined8 uStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  undefined1 auStack_2e8 [8];
  undefined8 uStack_2e0;
  long *plStack_2d8;
  char cStack_2d0;
  long lStack_2c8;
  undefined8 uStack_2c0;
  undefined1 uStack_2b8;
  undefined7 uStack_2b7;
  long lStack_2b0;
  undefined1 auStack_2a8 [4];
  undefined4 uStack_2a4;
  undefined8 uStack_2a0;
  ulong **ppuStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  ulong uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  ulong uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  ulong uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  ulong uStack_238;
  undefined8 uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  uint uStack_218;
  undefined8 uStack_208;
  long *plStack_200;
  ulong uStack_1f8;
  undefined8 uStack_1e8;
  long *plStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  long *plStack_1c8;
  char cStack_1c0;
  undefined8 uStack_1b8;
  long *plStack_1b0;
  ulong **ppuStack_1a8;
  long *plStack_1a0;
  ulong *puStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 uStack_178;
  undefined1 uStack_177;
  undefined6 uStack_176;
  undefined1 uStack_170;
  undefined7 uStack_16f;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined1 uStack_158;
  uint uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  ulong **ppuStack_140;
  ulong uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  ulong uStack_120;
  ulong **ppuStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined1 uStack_100;
  undefined1 uStack_e8;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong *puStack_50;
  ulong *puStack_48;
  long *plStack_40;
  ulong *puStack_38;
  
  puVar27 = auStack_378;
  puVar28 = auStack_378;
  puVar31 = auStack_378;
  puVar32 = auStack_378;
  uVar24 = 0xf714090;
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x18) + 0x1d0) + 0x80) != '\0') {
    uVar24 = 0xf7148b0;
  }
  uVar24 = func_0x0cc41df0(0xf6ff9e0,uVar24,1);
  func_0x072f2780(*(undefined8 *)(param_1 + 0x18),uVar24);
  func_0x04886140(&uStack_188);
  lStack_2c8 = param_1;
  if ((DAT_0f5ea4a0 == '\0') && (iVar10 = FUN_04108328(&DAT_0f5ea4a0), iVar10 != 0)) {
    func_0x08b670e0(&DAT_0f5ea138);
    __cxa_atexit(&UNK_08b673f0,&DAT_0f5ea138,0xf53dab8);
    func_0x0410844d(&DAT_0f5ea4a0);
    param_1 = lStack_2c8;
  }
  lStack_190 = param_2 + 0x18;
  uStack_68 = param_2 + 0xb0;
  uStack_1b8 = 0;
  plStack_1b0 = (long *)0x0;
  (**(code **)(_DAT_0f5ea138 + 0x88))(auStack_2a8,&DAT_0f5ea138,lStack_190,uStack_68,&uStack_1b8);
  plVar11 = (long *)((ulong)_auStack_2a8 >> 1 & 0x7f);
  ppuVar3 = (ulong **)(auStack_2a8 + 1);
  if (((ulong)_auStack_2a8 & 1) != 0) {
    plVar11 = (long *)uStack_2a0;
    ppuVar3 = ppuStack_298;
  }
  plVar11 = (long *)func_0x04885260(&uStack_178,ppuVar3,plVar11);
  func_0x041442d0(auStack_378,*(long *)(*plVar11 + -0x18) + (long)plVar11);
  plVar12 = (long *)FUN_041681f0(auStack_378,0xf547a30);
  cVar8 = (**(code **)(*plVar12 + 0x38))(plVar12,10);
  func_0x04167a40(auStack_378);
  func_0x0413c490(plVar11,(int)cVar8);
  func_0x04138be0(plVar11);
  if (((ulong)_auStack_2a8 & 1) != 0) {
    func_0x0412a280(ppuStack_298,(ulong)_auStack_2a8 & 0xfffffffffffffffe);
  }
  plVar11 = plStack_1b0;
  if (plStack_1b0 == (long *)0x0) {
LAB_072f6297:
    cVar8 = *(char *)(param_2 + 0xe4);
  }
  else {
    LOCK();
    plVar12 = plStack_1b0 + 1;
    lVar13 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar13 != 0) goto LAB_072f6297;
    (**(code **)(*plStack_1b0 + 0x10))(plStack_1b0);
    func_0x0412c2d0(plVar11);
    cVar8 = *(char *)(param_2 + 0xe4);
  }
  if (cVar8 != '\x01') goto LAB_072f7299;
  if ((DAT_0f5ea4a0 == '\0') && (iVar10 = FUN_04108328(&DAT_0f5ea4a0), iVar10 != 0)) {
    func_0x08b670e0(&DAT_0f5ea138);
    __cxa_atexit(&UNK_08b673f0,&DAT_0f5ea138,0xf53dab8);
    func_0x0410844d(&DAT_0f5ea4a0);
  }
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar24 = _UNK_0128ec1e;
  uStack_1d8 = 0x21;
  uStack_1d0 = 0x1c;
  *(ulong *)((long)plVar11 + 0xc) = CONCAT44(_UNK_0128ec1a,_DAT_0128ec16);
  *(undefined8 *)((long)plVar11 + 0x14) = uVar24;
  uVar5 = _DAT_0128ec16;
  uVar4 = _UNK_0128ec12;
  uVar9 = _UNK_0128ec0e;
  *(undefined4 *)plVar11 = _DAT_0128ec0a;
  *(undefined4 *)((long)plVar11 + 4) = uVar9;
  *(undefined4 *)(plVar11 + 1) = uVar4;
  *(undefined4 *)((long)plVar11 + 0xc) = uVar5;
  *(undefined1 *)((long)plVar11 + 0x1c) = 0;
  uVar23 = *(uint *)(param_2 + 200);
  plStack_1c8 = plVar11;
  if ((int)uVar23 < 0) {
    puVar27 = auStack_378 + 1;
    auStack_378[0] = 0x2d;
    uVar23 = -uVar23;
    lVar13 = (long)&uStack_368 + (4 - (long)puVar27);
    puVar28 = puVar27;
    if (lVar13 < 10) goto LAB_072f636d;
LAB_072f63a2:
    lVar13 = func_0x04136630(puVar28);
    plVar12 = (long *)(lVar13 - (long)auStack_378);
    if (plVar12 < (long *)0xfffffffffffffff8) {
      if (plVar12 < (long *)0x17) {
        _auStack_2a8 = (ulong **)CONCAT71(stack0xfffffffffffffd59,(char)plVar12 * '\x02');
        plVar14 = (long *)(auStack_2a8 + 1);
        if (plVar12 == (long *)0x0) goto LAB_072f63df;
      }
      else {
        uVar30 = 0x1a;
        if (((ulong)plVar12 | 7) != 0x17) {
          uVar30 = ((ulong)plVar12 | 7) + 1;
        }
        plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar30);
        if (plVar14 == (long *)0x0) {
          func_0x0eec74c0(uVar30,0);
        }
        plVar11 = (long *)(uVar30 | 1);
        _auStack_2a8 = (ulong **)plVar11;
        uStack_2a0 = (ulong **)plVar12;
        ppuStack_298 = (ulong **)plVar14;
      }
      func_0x0eee2f00(plVar14,auStack_378,plVar12);
      *(undefined1 *)((long)plVar14 + (long)plVar12) = 0;
      uVar23 = *(uint *)(param_2 + 0xcc);
      goto joined_r0x072f6487;
    }
    func_0x04882e30();
LAB_072f8d2f:
    func_0x04882e30();
LAB_072f8d3c:
    func_0x04882e30();
LAB_072f8d49:
    func_0x04882e30();
LAB_072f8d56:
    func_0x04882e30();
LAB_072f8d63:
    func_0x04882e30();
LAB_072f8d68:
    func_0x04882e30();
LAB_072f8d6d:
    iVar10 = FUN_04108328(&DAT_0f5ea4a0);
    if (iVar10 != 0) {
      func_0x08b670e0(&DAT_0f5ea138);
      __cxa_atexit(&UNK_08b673f0,&DAT_0f5ea138,0xf53dab8);
      func_0x0410844d(&DAT_0f5ea4a0);
    }
LAB_072f7dd7:
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar24 = _UNK_01416c62;
    uStack_330 = SUB81(puVar20,0);
    uStack_32f = (undefined5)((ulong)puVar20 >> 8);
    uStack_32a = (undefined1)((ulong)puVar20 >> 0x30);
    uStack_329 = (undefined1)((ulong)puVar20 >> 0x38);
    auStack_340[0] = 0x21;
    auStack_340._1_4_ = 0;
    uStack_33b = 0x19000000;
    uStack_337 = 0;
    uStack_333 = 0;
    uStack_332 = 0;
    *(ulong *)((long)puVar20 + 9) = CONCAT17(UNK_01416c61,_DAT_01416c5a);
    *(undefined8 *)((long)puVar20 + 0x11) = uVar24;
    uVar24 = CONCAT71(_DAT_01416c5a,UNK_01416c59);
    *puVar20 = _DAT_01416c51;
    puVar20[1] = uVar24;
    *(undefined1 *)((long)puVar20 + 0x19) = 0;
    uStack_1b8 = 0;
    plStack_1b0 = (long *)0x0;
    (**(code **)(_DAT_0f5ea138 + 0x90))(&uStack_2c0,&DAT_0f5ea138,auStack_340,&uStack_1b8);
    auStack_2e8 = (undefined1  [8])((ulong)auStack_2e8 & 0xffffffffffffff00);
    cStack_2d0 = '\0';
    puStack_328._0_1_ = 0x10;
    puStack_328._1_7_ = 0x736554656d6147;
    bStack_320 = 0x74;
    uStack_31f = 0;
    uStack_1d8 = uStack_1d8 & 0xffffffffffffff00;
    cStack_1c0 = '\0';
    uStack_308 = 0;
    uStack_300 = 0;
    uStack_2f8 = 0;
    func_0x0c3ef830(auStack_2a8,&uStack_2c0,auStack_2e8,&puStack_328,&uStack_1d8,&uStack_308);
    if ((uStack_308 & 1) != 0) {
      func_0x0412a280(uStack_2f8,uStack_308 & 0xfffffffffffffffe);
    }
    if ((cStack_1c0 == '\x01') && ((uStack_1d8 & 1) != 0)) {
      func_0x0412a280(plStack_1c8,uStack_1d8 & 0xfffffffffffffffe);
    }
    if (((byte)puStack_328 & 1) != 0) {
      func_0x0412a280(puStack_318,CONCAT71(puStack_328._1_7_,(byte)puStack_328) & 0xfffffffffffffffe
                     );
    }
    if ((cStack_2d0 == '\x01') && (((ulong)auStack_2e8 & 1) != 0)) {
      func_0x0412a280(plStack_2d8,(ulong)auStack_2e8 & 0xfffffffffffffffe);
    }
    if (((ulong)uStack_2c0 & 1) != 0) {
      func_0x0412a280(lStack_2b0,(ulong)uStack_2c0 & 0xfffffffffffffffe);
    }
    plVar12 = plStack_1b0;
    if (plStack_1b0 != (long *)0x0) {
      LOCK();
      plVar14 = plStack_1b0 + 1;
      lVar13 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plStack_1b0 + 0x10))(plStack_1b0);
        func_0x0412c2d0(plVar12);
      }
    }
    if ((auStack_340[0] & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_329,CONCAT16(uStack_32a,CONCAT51(uStack_32f,uStack_330))),
                      CONCAT35((undefined3)uStack_33b,CONCAT41(auStack_340._1_4_,auStack_340[0])) &
                      0xfffffffffffffffe);
    }
    func_0x07302600(&uStack_188);
    puVar1 = puStack_358;
    puVar16 = puStack_350;
    if (puStack_358 != (ulong *)0x0) {
      for (; puVar1 != puVar16; puVar16 = puVar16 + -3) {
        if ((puVar16[-3] & 1) != 0) {
          func_0x0412a280(puVar16[-1],puVar16[-3] & 0xfffffffffffffffe);
        }
      }
      puStack_350 = puVar1;
      func_0x0412a280(puStack_358,(long)puStack_348 - (long)puStack_358);
    }
    auStack_378 = (undefined1  [8])&UNK_0f47e0b0;
    func_0x0d6c9500(&ppuStack_370,uStack_368);
    plVar12 = plStack_40;
    (**(code **)(*plStack_40 + 0x240))(plStack_40,0,auStack_2a8);
    param_1 = lStack_2c8;
    if (uStack_288._2_1_ == DAT_0f6e6162) {
      cVar8 = func_0x0c459d50(auStack_2a8,0xf6e6140);
      uVar9 = 0;
      if (cVar8 == '\0') goto LAB_072f80a6;
    }
    else {
LAB_072f80a6:
      uVar9 = func_0x0c3f2dc0(auStack_2a8);
    }
    *(undefined4 *)(plVar12 + 0x43) = uVar9;
    *(undefined4 *)((long)plVar12 + 0x214) = 0;
    _auStack_2a8 = (ulong **)&UNK_0f371da8;
    if ((ulong)uStack_218 != 0xffffffff) {
      (**(code **)(&UNK_0f0c4348 + (ulong)uStack_218 * 8))(&uStack_188,&uStack_228);
    }
    plVar12 = uStack_230;
    uStack_218 = 0xffffffff;
    _auStack_2a8 = (ulong **)&UNK_0f36e918;
    uStack_230 = (long *)0x0;
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 8))();
    }
    if (uStack_258 != 0) {
      uStack_250 = uStack_258;
      func_0x0412a280(uStack_258,(long)uStack_248 - uStack_258);
    }
    if (uStack_278 != (long *)0x0) {
      uStack_270 = uStack_278;
      func_0x0412a280(uStack_278,uStack_268 - (long)uStack_278);
    }
    ppuVar3 = ppuStack_298;
    ppuStack_298 = (ulong **)0x0;
    if (ppuVar3 != (ulong **)0x0) {
      (**(code **)((long)*ppuVar3 + 8))();
    }
    if (uStack_2a0 != (ulong **)0x0) {
      LOCK();
      *(int *)((long)uStack_2a0 + 0xc) = *(int *)((long)uStack_2a0 + 0xc) + -1;
      UNLOCK();
      if (((*(int *)((long)uStack_2a0 + 0xc) < 1) && (*uStack_2a0 == (ulong *)0x0)) &&
         (uStack_2a0 != (ulong **)0x0)) {
        func_0x0412a280(uStack_2a0,0x10);
      }
    }
  }
  else {
    lVar13 = (long)&uStack_368 + (4 - (long)auStack_378);
    if (9 < lVar13) goto LAB_072f63a2;
LAB_072f636d:
    iVar10 = 0x1f;
    if ((uVar23 | 1) != 0) {
      for (; (uVar23 | 1) >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    uVar21 = iVar10 * 0x4d1 + 0x4d1U >> 0xc;
    puVar28 = puVar27;
    if ((long)(ulong)((uVar21 - (uVar23 < *(uint *)(&UNK_014edae0 + (ulong)uVar21 * 4))) + 1) <=
        lVar13) goto LAB_072f63a2;
    _auStack_2a8 = (ulong **)((ulong)_auStack_2a8 & 0xffffffffffffff00);
LAB_072f63df:
    auStack_2a8._0_2_ = CONCAT11(0,auStack_2a8[0]);
    uVar23 = *(uint *)(param_2 + 0xcc);
joined_r0x072f6487:
    if ((int)uVar23 < 0) {
      auStack_378._1_7_ = (undefined7)((ulong)auStack_378 >> 8);
      auStack_378[0] = 0x2d;
      uVar23 = -uVar23;
      lVar13 = (long)&uStack_368 + (4 - (long)(auStack_378 + 1));
      if (9 < lVar13) goto LAB_072f64d9;
LAB_072f649c:
      iVar10 = 0x1f;
      if ((uVar23 | 1) != 0) {
        for (; (uVar23 | 1) >> iVar10 == 0; iVar10 = iVar10 + -1) {
        }
      }
      uVar21 = iVar10 * 0x4d1 + 0x4d1U >> 0xc;
      if ((long)(ulong)((uVar21 - (uVar23 < *(uint *)(&UNK_014edae0 + (ulong)uVar21 * 4))) + 1) <=
          lVar13) goto LAB_072f64d9;
      uStack_290 = (long *)((ulong)uStack_290 & 0xffffffffffffff00);
LAB_072f6513:
      uStack_290._0_2_ = (ushort)(byte)uStack_290;
      uVar23 = *(uint *)(param_2 + 0xd0);
    }
    else {
      lVar13 = (long)&uStack_368 + (4 - (long)auStack_378);
      if (lVar13 < 10) goto LAB_072f649c;
LAB_072f64d9:
      lVar13 = func_0x04136630();
      uVar30 = lVar13 - (long)auStack_378;
      if (0xfffffffffffffff7 < uVar30) goto LAB_072f8d2f;
      if (uVar30 < 0x17) {
        uStack_290 = (long *)CONCAT71(uStack_290._1_7_,(char)uVar30 * '\x02');
        uVar18 = (long)&uStack_290 + 1;
        if (uVar30 == 0) goto LAB_072f6513;
      }
      else {
        uVar15 = 0x1a;
        if ((uVar30 | 7) != 0x17) {
          uVar15 = (uVar30 | 7) + 1;
        }
        uVar18 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15);
        if (uVar18 == 0) {
          func_0x0eec74c0(uVar15,0);
        }
        plVar11 = (long *)(uVar15 | 1);
        uStack_290 = plVar11;
        uStack_288 = uVar30;
        uStack_280 = uVar18;
      }
      func_0x0eee2f00(uVar18,auStack_378,uVar30);
      *(undefined1 *)(uVar18 + uVar30) = 0;
      uVar23 = *(uint *)(param_2 + 0xd0);
    }
    if ((int)uVar23 < 0) {
      auStack_378._1_7_ = (undefined7)((ulong)auStack_378 >> 8);
      auStack_378[0] = 0x2d;
      uVar23 = -uVar23;
      lVar13 = (long)&uStack_368 + (4 - (long)(auStack_378 + 1));
      if (lVar13 < 10) goto LAB_072f65d8;
LAB_072f6615:
      lVar13 = func_0x04136630();
      plVar12 = (long *)(lVar13 - (long)auStack_378);
      if ((long *)0xfffffffffffffff7 < plVar12) goto LAB_072f8d3c;
      if (plVar12 < (long *)0x17) {
        uStack_278 = (long *)CONCAT71(uStack_278._1_7_,(char)plVar12 * '\x02');
        uVar15 = (long)&uStack_278 + 1;
        if (plVar12 == (long *)0x0) goto LAB_072f664f;
      }
      else {
        uVar30 = 0x1a;
        if (((ulong)plVar12 | 7) != 0x17) {
          uVar30 = ((ulong)plVar12 | 7) + 1;
        }
        uVar15 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar30);
        if (uVar15 == 0) {
          func_0x0eec74c0(uVar30,0);
        }
        plVar11 = (long *)(uVar30 | 1);
        uStack_278 = plVar11;
        uStack_270 = plVar12;
        uStack_268 = uVar15;
      }
      func_0x0eee2f00(uVar15,auStack_378,plVar12);
      *(undefined1 *)(uVar15 + (long)plVar12) = 0;
      uVar23 = *(uint *)(param_2 + 0xd4);
    }
    else {
      lVar13 = (long)&uStack_368 + (4 - (long)auStack_378);
      if (9 < lVar13) goto LAB_072f6615;
LAB_072f65d8:
      iVar10 = 0x1f;
      if ((uVar23 | 1) != 0) {
        for (; (uVar23 | 1) >> iVar10 == 0; iVar10 = iVar10 + -1) {
        }
      }
      uVar21 = iVar10 * 0x4d1 + 0x4d1U >> 0xc;
      if ((long)(ulong)((uVar21 - (uVar23 < *(uint *)(&UNK_014edae0 + (ulong)uVar21 * 4))) + 1) <=
          lVar13) goto LAB_072f6615;
      uStack_278 = (long *)((ulong)uStack_278 & 0xffffffffffffff00);
LAB_072f664f:
      uStack_278._0_2_ = (ushort)(byte)uStack_278;
      uVar23 = *(uint *)(param_2 + 0xd4);
    }
    if ((int)uVar23 < 0) {
      auStack_378._1_7_ = (undefined7)((ulong)auStack_378 >> 8);
      auStack_378[0] = 0x2d;
      uVar23 = -uVar23;
      lVar13 = (long)&uStack_368 + (4 - (long)(auStack_378 + 1));
      if (9 < lVar13) goto LAB_072f6751;
LAB_072f6714:
      iVar10 = 0x1f;
      if ((uVar23 | 1) != 0) {
        for (; (uVar23 | 1) >> iVar10 == 0; iVar10 = iVar10 + -1) {
        }
      }
      uVar21 = iVar10 * 0x4d1 + 0x4d1U >> 0xc;
      if ((long)(ulong)((uVar21 - (uVar23 < *(uint *)(&UNK_014edae0 + (ulong)uVar21 * 4))) + 1) <=
          lVar13) goto LAB_072f6751;
      uStack_260 = (long *)((ulong)uStack_260 & 0xffffffffffffff00);
LAB_072f678b:
      uStack_260._0_2_ = (ushort)(byte)uStack_260;
      uVar23 = *(uint *)(param_2 + 0xd8);
    }
    else {
      lVar13 = (long)&uStack_368 + (4 - (long)auStack_378);
      if (lVar13 < 10) goto LAB_072f6714;
LAB_072f6751:
      lVar13 = func_0x04136630();
      uVar30 = lVar13 - (long)auStack_378;
      if (0xfffffffffffffff7 < uVar30) goto LAB_072f8d49;
      if (uVar30 < 0x17) {
        uStack_260 = (long *)CONCAT71(uStack_260._1_7_,(char)uVar30 * '\x02');
        uVar18 = (long)&uStack_260 + 1;
        if (uVar30 == 0) goto LAB_072f678b;
      }
      else {
        uVar15 = 0x1a;
        if ((uVar30 | 7) != 0x17) {
          uVar15 = (uVar30 | 7) + 1;
        }
        uVar18 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15);
        if (uVar18 == 0) {
          func_0x0eec74c0(uVar15,0);
        }
        plVar11 = (long *)(uVar15 | 1);
        uStack_260 = plVar11;
        uStack_258 = uVar30;
        uStack_250 = uVar18;
      }
      func_0x0eee2f00(uVar18,auStack_378,uVar30);
      *(undefined1 *)(uVar18 + uVar30) = 0;
      uVar23 = *(uint *)(param_2 + 0xd8);
    }
    if ((int)uVar23 < 0) {
      auStack_378._1_7_ = (undefined7)((ulong)auStack_378 >> 8);
      auStack_378[0] = 0x2d;
      uVar23 = -uVar23;
      lVar13 = (long)&uStack_368 + (4 - (long)(auStack_378 + 1));
      if (lVar13 < 10) goto LAB_072f6850;
LAB_072f688d:
      lVar13 = func_0x04136630();
      uVar30 = lVar13 - (long)auStack_378;
      if (0xfffffffffffffff7 < uVar30) goto LAB_072f8d56;
      if (uVar30 < 0x17) {
        uStack_248 = (long *)CONCAT71(uStack_248._1_7_,(char)uVar30 * '\x02');
        uVar18 = (long)&uStack_248 + 1;
        if (uVar30 == 0) goto LAB_072f68c7;
      }
      else {
        uVar15 = 0x1a;
        if ((uVar30 | 7) != 0x17) {
          uVar15 = (uVar30 | 7) + 1;
        }
        uVar18 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15);
        if (uVar18 == 0) {
          func_0x0eec74c0(uVar15,0);
        }
        plVar11 = (long *)(uVar15 | 1);
        uStack_248 = plVar11;
        uStack_240 = uVar30;
        uStack_238 = uVar18;
      }
      func_0x0eee2f00(uVar18,auStack_378,uVar30);
      *(undefined1 *)(uVar18 + uVar30) = 0;
      uVar23 = *(uint *)(param_2 + 0xdc);
    }
    else {
      lVar13 = (long)&uStack_368 + (4 - (long)auStack_378);
      if (9 < lVar13) goto LAB_072f688d;
LAB_072f6850:
      iVar10 = 0x1f;
      if ((uVar23 | 1) != 0) {
        for (; (uVar23 | 1) >> iVar10 == 0; iVar10 = iVar10 + -1) {
        }
      }
      uVar21 = iVar10 * 0x4d1 + 0x4d1U >> 0xc;
      if ((long)(ulong)((uVar21 - (uVar23 < *(uint *)(&UNK_014edae0 + (ulong)uVar21 * 4))) + 1) <=
          lVar13) goto LAB_072f688d;
      uStack_248 = (long *)((ulong)uStack_248 & 0xffffffffffffff00);
LAB_072f68c7:
      uStack_248._0_2_ = (ushort)(byte)uStack_248;
      uVar23 = *(uint *)(param_2 + 0xdc);
    }
    puVar27 = auStack_378;
    if ((int)uVar23 < 0) {
      puVar27 = auStack_378 + 1;
      auStack_378._1_7_ = (undefined7)((ulong)auStack_378 >> 8);
      auStack_378[0] = 0x2d;
      uVar23 = -uVar23;
    }
    lVar13 = (long)&uStack_368 + (4 - (long)puVar27);
    if (lVar13 < 10) {
      iVar10 = 0x1f;
      if ((uVar23 | 1) != 0) {
        for (; (uVar23 | 1) >> iVar10 == 0; iVar10 = iVar10 + -1) {
        }
      }
      uVar21 = iVar10 * 0x4d1 + 0x4d1U >> 0xc;
      if ((long)(ulong)((uVar21 - (uVar23 < *(uint *)(&UNK_014edae0 + (ulong)uVar21 * 4))) + 1) <=
          lVar13) goto LAB_072f69c1;
      uStack_230 = (long *)((ulong)uStack_230 & 0xffffffffffffff00);
LAB_072f69f7:
      uVar18 = (long)&uStack_230 + 1;
      uVar30 = 0;
    }
    else {
LAB_072f69c1:
      lVar13 = func_0x04136630();
      uVar30 = lVar13 - (long)auStack_378;
      if (0xfffffffffffffff7 < uVar30) goto LAB_072f8d63;
      if (uVar30 < 0x17) {
        uStack_230 = (long *)CONCAT71(uStack_230._1_7_,(char)uVar30 * '\x02');
        uVar18 = (long)&uStack_230 + 1;
        if (uVar30 == 0) goto LAB_072f69f7;
      }
      else {
        uVar15 = 0x1a;
        if ((uVar30 | 7) != 0x17) {
          uVar15 = (uVar30 | 7) + 1;
        }
        uVar18 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15);
        if (uVar18 == 0) {
          func_0x0eec74c0(uVar15,0);
        }
        uStack_230 = (long *)(uVar15 | 1);
        uStack_228 = uVar30;
        uStack_220 = uVar18;
      }
      func_0x0eee2f00(uVar18,auStack_378,uVar30);
    }
    *(undefined1 *)(uVar18 + uVar30) = 0;
    puStack_358 = (ulong *)0x0;
    puStack_350 = (ulong *)0x0;
    puStack_348 = (ulong *)0x0;
    uStack_2b8 = 0;
    uStack_2c0 = &puStack_358;
    puVar16 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
    if (puVar16 == (ulong *)0x0) {
      func_0x0eec74c0(0x90,0);
    }
    puStack_348 = puVar16 + 0x12;
    auStack_340[0] = (byte)puVar16;
    puStack_328._0_1_ = auStack_340[0];
    auStack_340._1_4_ = (undefined4)((ulong)puVar16 >> 8);
    uStack_33b._0_3_ = (undefined3)((ulong)puVar16 >> 0x28);
    puStack_328._1_7_ = (undefined7)((ulong)puVar16 >> 8);
    ppuStack_370 = &puStack_328;
    uStack_368 = (ulong **)auStack_340;
    uStack_360 = uStack_360 & 0xffffffffffffff00;
    auStack_378 = (undefined1  [8])&puStack_358;
    puStack_358 = puVar16;
    puStack_350 = puVar16;
    if (((ulong)_auStack_2a8 & 1) == 0) {
      puVar16[2] = (ulong)ppuStack_298;
      *(undefined1 (*) [4])puVar16 = auStack_2a8;
      *(undefined4 *)((long)puVar16 + 4) = uStack_2a4;
      *(undefined4 *)(puVar16 + 1) = (undefined4)uStack_2a0;
      *(undefined4 *)((long)puVar16 + 0xc) = uStack_2a0._4_4_;
      puVar16 = puVar16 + 3;
      auStack_340[0] = (byte)puVar16;
      auStack_340._1_4_ = (undefined4)((ulong)puVar16 >> 8);
      uStack_33b._0_3_ = (undefined3)((ulong)puVar16 >> 0x28);
      if (((ulong)uStack_290 & 1) != 0) goto LAB_072f6c27;
LAB_072f6b2b:
      puVar16[2] = uStack_280;
      *(undefined4 *)puVar16 = (undefined4)uStack_290;
      *(undefined4 *)((long)puVar16 + 4) = uStack_290._4_4_;
      *(undefined4 *)(puVar16 + 1) = (undefined4)uStack_288;
      *(undefined4 *)((long)puVar16 + 0xc) = uStack_288._4_4_;
      puVar16 = puVar16 + 3;
      auStack_340[0] = (byte)puVar16;
      auStack_340._1_4_ = (undefined4)((ulong)puVar16 >> 8);
      uStack_33b._0_3_ = (undefined3)((ulong)puVar16 >> 0x28);
      if (((ulong)uStack_278 & 1) != 0) goto LAB_072f6c58;
LAB_072f6b58:
      puVar16[2] = uStack_268;
      *(undefined4 *)puVar16 = (undefined4)uStack_278;
      *(undefined4 *)((long)puVar16 + 4) = uStack_278._4_4_;
      *(undefined4 *)(puVar16 + 1) = (undefined4)uStack_270;
      *(undefined4 *)((long)puVar16 + 0xc) = uStack_270._4_4_;
      puVar16 = puVar16 + 3;
      auStack_340[0] = (byte)puVar16;
      auStack_340._1_4_ = (undefined4)((ulong)puVar16 >> 8);
      uStack_33b._0_3_ = (undefined3)((ulong)puVar16 >> 0x28);
      if (((ulong)uStack_260 & 1) != 0) goto LAB_072f6c89;
LAB_072f6b85:
      puVar16[2] = uStack_250;
      *(undefined4 *)puVar16 = (undefined4)uStack_260;
      *(undefined4 *)((long)puVar16 + 4) = uStack_260._4_4_;
      *(undefined4 *)(puVar16 + 1) = (undefined4)uStack_258;
      *(undefined4 *)((long)puVar16 + 0xc) = uStack_258._4_4_;
      puVar16 = puVar16 + 3;
      auStack_340[0] = (byte)puVar16;
      auStack_340._1_4_ = (undefined4)((ulong)puVar16 >> 8);
      uStack_33b._0_3_ = (undefined3)((ulong)puVar16 >> 0x28);
      if (((ulong)uStack_248 & 1) != 0) goto LAB_072f6cba;
LAB_072f6bb2:
      puVar16[2] = uStack_238;
      *(undefined4 *)puVar16 = (undefined4)uStack_248;
      *(undefined4 *)((long)puVar16 + 4) = uStack_248._4_4_;
      *(undefined4 *)(puVar16 + 1) = (undefined4)uStack_240;
      *(undefined4 *)((long)puVar16 + 0xc) = uStack_240._4_4_;
      puVar16 = puVar16 + 3;
      auStack_340[0] = (byte)puVar16;
      auStack_340._1_4_ = (undefined4)((ulong)puVar16 >> 8);
      uStack_33b._0_3_ = (undefined3)((ulong)puVar16 >> 0x28);
      if (((ulong)uStack_230 & 1) != 0) goto LAB_072f6ceb;
LAB_072f6bdf:
      puVar16[2] = uStack_220;
      *puVar16 = (ulong)uStack_230;
      puVar16[1] = uStack_228;
    }
    else {
      func_0x0412e5e0(puVar16,ppuStack_298,uStack_2a0);
      puVar16 = (ulong *)(CONCAT35((undefined3)uStack_33b,CONCAT41(auStack_340._1_4_,auStack_340[0])
                                  ) + 0x18);
      auStack_340[0] = (byte)puVar16;
      auStack_340._1_4_ = (undefined4)((ulong)puVar16 >> 8);
      uStack_33b._0_3_ = (undefined3)((ulong)puVar16 >> 0x28);
      if (((ulong)uStack_290 & 1) == 0) goto LAB_072f6b2b;
LAB_072f6c27:
      func_0x0412e5e0(puVar16,uStack_280,uStack_288);
      puVar16 = (ulong *)(CONCAT35((undefined3)uStack_33b,CONCAT41(auStack_340._1_4_,auStack_340[0])
                                  ) + 0x18);
      auStack_340[0] = (byte)puVar16;
      auStack_340._1_4_ = (undefined4)((ulong)puVar16 >> 8);
      uStack_33b._0_3_ = (undefined3)((ulong)puVar16 >> 0x28);
      if (((ulong)uStack_278 & 1) == 0) goto LAB_072f6b58;
LAB_072f6c58:
      func_0x0412e5e0(puVar16,uStack_268,uStack_270);
      puVar16 = (ulong *)(CONCAT35((undefined3)uStack_33b,CONCAT41(auStack_340._1_4_,auStack_340[0])
                                  ) + 0x18);
      auStack_340[0] = (byte)puVar16;
      auStack_340._1_4_ = (undefined4)((ulong)puVar16 >> 8);
      uStack_33b._0_3_ = (undefined3)((ulong)puVar16 >> 0x28);
      if (((ulong)uStack_260 & 1) == 0) goto LAB_072f6b85;
LAB_072f6c89:
      func_0x0412e5e0(puVar16,uStack_250,uStack_258);
      puVar16 = (ulong *)(CONCAT35((undefined3)uStack_33b,CONCAT41(auStack_340._1_4_,auStack_340[0])
                                  ) + 0x18);
      auStack_340[0] = (byte)puVar16;
      auStack_340._1_4_ = (undefined4)((ulong)puVar16 >> 8);
      uStack_33b._0_3_ = (undefined3)((ulong)puVar16 >> 0x28);
      if (((ulong)uStack_248 & 1) == 0) goto LAB_072f6bb2;
LAB_072f6cba:
      func_0x0412e5e0(puVar16,uStack_238,uStack_240);
      puVar16 = (ulong *)(CONCAT35((undefined3)uStack_33b,CONCAT41(auStack_340._1_4_,auStack_340[0])
                                  ) + 0x18);
      auStack_340[0] = (byte)puVar16;
      auStack_340._1_4_ = (undefined4)((ulong)puVar16 >> 8);
      uStack_33b._0_3_ = (undefined3)((ulong)puVar16 >> 0x28);
      if (((ulong)uStack_230 & 1) == 0) goto LAB_072f6bdf;
LAB_072f6ceb:
      func_0x0412e5e0(puVar16,uStack_220,uStack_228);
      puVar16 = (ulong *)CONCAT35((undefined3)uStack_33b,CONCAT41(auStack_340._1_4_,auStack_340[0]))
      ;
    }
    puStack_350 = puVar16 + 3;
    uStack_1e8 = (ulong *)0x0;
    plStack_1e0 = (long *)0x0;
    (**(code **)(_DAT_0f5ea138 + 0x88))
              (auStack_2e8,&DAT_0f5ea138,&uStack_1d8,&puStack_358,&uStack_1e8);
    uVar30 = (ulong)auStack_2e8 >> 1 & 0x7f;
    plVar11 = (long *)(auStack_2e8 + 1);
    if (((ulong)auStack_2e8 & 1) != 0) {
      uVar30 = uStack_2e0;
      plVar11 = plStack_2d8;
    }
    plVar11 = (long *)func_0x04885260(&uStack_178,plVar11,uVar30);
    func_0x041442d0(auStack_378,(undefined *)(*(long *)(*plVar11 + -0x18) + (long)plVar11));
    plVar12 = (long *)FUN_041681f0(auStack_378,0xf547a30);
    cVar8 = (**(code **)(*plVar12 + 0x38))(plVar12,10);
    func_0x04167a40(auStack_378);
    func_0x0413c490(plVar11,(int)cVar8);
    func_0x04138be0(plVar11);
    if ((DAT_0f5ea4a0 == '\0') && (iVar10 = FUN_04108328(&DAT_0f5ea4a0), iVar10 != 0)) {
      func_0x08b670e0(&DAT_0f5ea138);
      __cxa_atexit(&UNK_08b673f0,&DAT_0f5ea138,0xf53dab8);
      func_0x0410844d(&DAT_0f5ea4a0);
    }
    puVar17 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar17 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar24 = _UNK_0137a5d8;
    uStack_330 = SUB81(puVar17,0);
    uStack_32f = (undefined5)((ulong)puVar17 >> 8);
    uStack_32a = (undefined1)((ulong)puVar17 >> 0x30);
    uStack_329 = (undefined1)((ulong)puVar17 >> 0x38);
    auStack_340[0] = 0x21;
    auStack_340._1_4_ = 0;
    uStack_33b = 0x19000000;
    uStack_337 = 0;
    uStack_333 = 0;
    uStack_332 = 0;
    *(ulong *)((long)puVar17 + 9) = CONCAT17(UNK_0137a5d7,CONCAT43(_UNK_0137a5d3,_DAT_0137a5d0));
    *(undefined8 *)((long)puVar17 + 0x11) = uVar24;
    uVar5 = _UNK_0137a5d3;
    uVar4 = _UNK_0137a5cf;
    uVar9 = _UNK_0137a5cb;
    *puVar17 = _DAT_0137a5c7;
    puVar17[1] = uVar9;
    puVar17[2] = uVar4;
    puVar17[3] = uVar5;
    *(undefined1 *)((long)puVar17 + 0x19) = 0;
    uVar23 = *(uint *)(param_2 + 0xe0);
    if ((int)uVar23 < 0) {
      puVar31 = auStack_378 + 1;
      auStack_378[0] = 0x2d;
      uVar23 = -uVar23;
      lVar13 = (long)&uStack_368 + (4 - (long)puVar31);
      puVar32 = puVar31;
      if (9 < lVar13) goto LAB_072f6e99;
LAB_072f6e63:
      iVar10 = 0x1f;
      if ((uVar23 | 1) != 0) {
        for (; (uVar23 | 1) >> iVar10 == 0; iVar10 = iVar10 + -1) {
        }
      }
      uVar21 = iVar10 * 0x4d1 + 0x4d1U >> 0xc;
      puVar32 = puVar31;
      if ((long)(ulong)((uVar21 - (uVar23 < *(uint *)(&UNK_014edae0 + (ulong)uVar21 * 4))) + 1) <=
          lVar13) goto LAB_072f6e99;
      uStack_308 = uStack_308 & 0xffffffffffffff00;
LAB_072f6ecc:
      uVar18 = (long)&uStack_308 + 1;
      uVar30 = 0;
    }
    else {
      lVar13 = (long)&uStack_368 + (4 - (long)auStack_378);
      if (lVar13 < 10) goto LAB_072f6e63;
LAB_072f6e99:
      lVar13 = func_0x04136630(puVar32);
      uVar30 = lVar13 - (long)auStack_378;
      if (0xfffffffffffffff7 < uVar30) goto LAB_072f8d68;
      if (uVar30 < 0x17) {
        uStack_308 = CONCAT71(uStack_308._1_7_,(char)uVar30 * '\x02');
        uVar18 = (long)&uStack_308 + 1;
        if (uVar30 == 0) goto LAB_072f6ecc;
      }
      else {
        uVar15 = 0x1a;
        if ((uVar30 | 7) != 0x17) {
          uVar15 = (uVar30 | 7) + 1;
        }
        uVar18 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15);
        if (uVar18 == 0) {
          func_0x0eec74c0(uVar15,0);
        }
        uStack_308 = uVar15 | 1;
        uStack_300 = uVar30;
        uStack_2f8 = uVar18;
      }
      func_0x0eee2f00(uVar18,auStack_378,uVar30);
    }
    *(undefined1 *)(uVar18 + uVar30) = 0;
    puStack_328._0_1_ = 0;
    puStack_328._1_7_ = 0;
    bStack_320 = 0;
    uStack_31f = 0;
    uStack_31e = 0;
    puStack_318 = (ulong *)0x0;
    plStack_1a0 = (long *)((ulong)plStack_1a0 & 0xffffffffffffff00);
    ppuStack_1a8 = &puStack_328;
    puStack_198 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puStack_198 == (ulong *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    puStack_328._0_1_ = (byte)puStack_198;
    puStack_328._1_7_ = (undefined7)((ulong)puStack_198 >> 8);
    uStack_31f = (undefined1)((ulong)puStack_198 >> 8);
    uStack_31e = (undefined6)((ulong)puStack_198 >> 0x10);
    puStack_318 = puStack_198 + 3;
    ppuStack_370 = &puStack_38;
    uStack_368 = &puStack_198;
    uStack_360 = uStack_360 & 0xffffffffffffff00;
    puStack_38 = puStack_198;
    if ((uStack_308 & 1) == 0) {
      puStack_198[2] = uStack_2f8;
      *puStack_198 = uStack_308;
      puStack_198[1] = uStack_300;
    }
    else {
      auStack_378 = (undefined1  [8])&puStack_328;
      bStack_320 = (byte)puStack_328;
      func_0x0412e5e0(puStack_198,uStack_2f8,uStack_300);
    }
    puVar16 = puStack_198 + 3;
    bStack_320 = (byte)puVar16;
    uStack_31f = (undefined1)((ulong)puVar16 >> 8);
    uStack_31e = (undefined6)((ulong)puVar16 >> 0x10);
    auStack_378 = (undefined1  [8])0x0;
    ppuStack_370 = (ulong **)0x0;
    (**(code **)(_DAT_0f5ea138 + 0x88))
              (&uStack_2c0,&DAT_0f5ea138,auStack_340,&puStack_328,auStack_378);
    bVar35 = ((ulong)uStack_2c0 & 1) != 0;
    lVar13 = (long)&uStack_2c0 + 1;
    if (bVar35) {
      lVar13 = lStack_2b0;
    }
    uVar30 = (ulong)uStack_2c0 >> 1 & 0x7f;
    if (bVar35) {
      uVar30 = CONCAT71(uStack_2b7,uStack_2b8);
    }
    func_0x04885260(plVar11,lVar13,uVar30);
    if (((ulong)uStack_2c0 & 1) != 0) {
      func_0x0412a280(lStack_2b0,(ulong)uStack_2c0 & 0xfffffffffffffffe);
    }
    ppuVar3 = ppuStack_370;
    if (ppuStack_370 != (ulong **)0x0) {
      LOCK();
      ppuVar22 = ppuStack_370 + 1;
      puVar16 = *ppuVar22;
      *ppuVar22 = (ulong *)((long)*ppuVar22 + -1);
      UNLOCK();
      if (puVar16 == (ulong *)0x0) {
        (*(code *)(*ppuStack_370)[2])(ppuStack_370);
        func_0x0412c2d0(ppuVar3);
      }
    }
    uVar7 = puStack_328._1_7_;
    bVar6 = (byte)puStack_328;
    lVar13 = CONCAT71(puStack_328._1_7_,(byte)puStack_328);
    if (lVar13 != 0) {
      lVar34 = CONCAT62(uStack_31e,CONCAT11(uStack_31f,bStack_320));
      if (lVar13 != lVar34) {
        do {
          if ((*(byte *)(lVar34 + -0x18) & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(lVar34 + -8),
                            *(ulong *)(lVar34 + -0x18) & 0xfffffffffffffffe);
          }
          lVar34 = lVar34 + -0x18;
        } while (lVar34 != lVar13);
        lVar13 = CONCAT71(puStack_328._1_7_,(byte)puStack_328);
      }
      bStack_320 = bVar6;
      uStack_31f = (undefined1)uVar7;
      uStack_31e = (undefined6)((uint7)uVar7 >> 8);
      func_0x0412a280(lVar13,(long)puStack_318 - lVar13);
    }
    if ((uStack_308 & 1) != 0) {
      func_0x0412a280(uStack_2f8,uStack_308 & 0xfffffffffffffffe);
    }
    if ((auStack_340[0] & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_329,CONCAT16(uStack_32a,CONCAT51(uStack_32f,uStack_330))),
                      CONCAT35((undefined3)uStack_33b,CONCAT41(auStack_340._1_4_,auStack_340[0])) &
                      0xfffffffffffffffe);
    }
    plVar11 = plStack_1e0;
    if (((ulong)auStack_2e8 & 1) != 0) {
      func_0x0412a280(plStack_2d8,(ulong)auStack_2e8 & 0xfffffffffffffffe);
      plVar11 = plStack_1e0;
    }
    plStack_1e0 = plVar11;
    if (plVar11 != (long *)0x0) {
      LOCK();
      plVar12 = plVar11 + 1;
      lVar13 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        func_0x0412c2d0(plVar11);
      }
    }
    puVar1 = puStack_358;
    puVar16 = puStack_350;
    if (puStack_358 != (ulong *)0x0) {
      for (; puVar1 != puVar16; puVar16 = puVar16 + -3) {
        if ((puVar16[-3] & 1) != 0) {
          func_0x0412a280(puVar16[-1],puVar16[-3] & 0xfffffffffffffffe);
        }
      }
      puStack_350 = puVar1;
      func_0x0412a280(puStack_358,(long)puStack_348 - (long)puStack_358);
    }
    param_1 = lStack_2c8;
    if (((ulong)uStack_230 & 1) != 0) goto LAB_072f7572;
    while( true ) {
      lStack_2c8 = param_1;
      if (((ulong)uStack_248 & 1) != 0) {
        func_0x0412a280(uStack_238,(ulong)uStack_248 & 0xfffffffffffffffe);
      }
      if (((ulong)uStack_260 & 1) != 0) {
        func_0x0412a280(uStack_250,(ulong)uStack_260 & 0xfffffffffffffffe);
      }
      if (((ulong)uStack_278 & 1) != 0) {
        func_0x0412a280(uStack_268,(ulong)uStack_278 & 0xfffffffffffffffe);
      }
      if (((ulong)uStack_290 & 1) != 0) {
        func_0x0412a280(uStack_280,(ulong)uStack_290 & 0xfffffffffffffffe);
      }
      if (((ulong)_auStack_2a8 & 1) != 0) {
        func_0x0412a280(ppuStack_298,(ulong)_auStack_2a8 & 0xfffffffffffffffe);
      }
      if ((uStack_1d8 & 1) != 0) {
        func_0x0412a280(plStack_1c8,uStack_1d8 & 0xfffffffffffffffe);
      }
LAB_072f7299:
      if ((uStack_110 & 0x10) == 0) {
        if ((uStack_110 & 8) == 0) {
          uStack_208 = (byte *)((ulong)uStack_208._1_7_ << 8);
          goto LAB_072f7314;
        }
        lVar13 = CONCAT44(uStack_15c,uStack_160);
        uVar30 = CONCAT44(uStack_14c,uStack_150) - lVar13;
      }
      else {
        if (ppuStack_118 < ppuStack_140) {
          ppuStack_118 = ppuStack_140;
        }
        lVar13 = CONCAT44(uStack_144,uStack_148);
        uVar30 = (long)ppuStack_118 - lVar13;
      }
      if (uVar30 < 0xfffffffffffffff8) break;
      func_0x04882e30();
LAB_072f7572:
      func_0x0412a280(uStack_220,(ulong)uStack_230 & 0xfffffffffffffffe);
      param_1 = lStack_2c8;
    }
    if (uVar30 < 0x17) {
      uStack_208 = (byte *)CONCAT71(uStack_208._1_7_,(char)uVar30 * '\x02');
      uVar18 = (long)&uStack_208 + 1;
      if (uVar30 != 0) goto LAB_072f736d;
LAB_072f7314:
      uVar18 = (long)&uStack_208 + 1;
      uVar30 = 0;
    }
    else {
      uVar15 = 0x1a;
      if ((uVar30 | 7) != 0x17) {
        uVar15 = (uVar30 | 7) + 1;
      }
      uVar18 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15);
      if (uVar18 == 0) {
        func_0x0eec74c0(uVar15,0);
      }
      uStack_208 = (byte *)(uVar15 | 1);
      plStack_200 = (long *)uVar30;
      uStack_1f8 = uVar18;
LAB_072f736d:
      memmove(uVar18,lVar13,uVar30);
    }
    *(undefined1 *)(uVar18 + uVar30) = 0;
    uStack_188 = (byte *)_UNK_0eeed4d8;
    *(undefined8 *)((long)&uStack_188 + *(long *)(_UNK_0eeed4d8 + -0x18)) = _UNK_0eeed518;
    uStack_178 = (undefined1)_UNK_0eeed520;
    uStack_177 = (undefined1)((ulong)_UNK_0eeed520 >> 8);
    uStack_176 = (undefined6)((ulong)_UNK_0eeed520 >> 0x10);
    uStack_170 = 0x50;
    uStack_16f = 0xeeed1;
    if ((uStack_130 & 1) != 0) {
      func_0x0412a280(uStack_120,uStack_130 & 0xfffffffffffffffe);
    }
    uStack_170 = 0x20;
    uStack_16f = 0xeeece;
    func_0x04167a40(&uStack_168);
    func_0x0413c8a0(&uStack_188,&UNK_0eeed4e0);
    func_0x04138180(&uStack_108);
    plVar12 = (long *)(**(code **)(**(long **)(param_1 + 0x18) + 0x78))();
    uVar30 = *(ulong *)(*(long *)(param_1 + 0x18) + 8);
    uStack_1e8 = (ulong *)((uVar30 | 0xffffffff) + (ulong)((int)uVar30 - 1) + 1);
    plStack_1e0 = (long *)CONCAT44(plStack_1e0._4_4_,*(int *)(*(long *)(param_1 + 0x18) + 0x10) + -1
                                  );
    lVar19 = func_0x0cc41df0(0xf6ff9e0,0xf711358,1);
    lVar13 = *(long *)(lVar19 + 0x68);
    lVar34 = *(long *)(lVar13 + 0x1b0);
    if (lVar34 == 0) {
LAB_072f74d7:
      for (plVar11 = *(long **)(lVar13 + 0x350); plVar11 != *(long **)(lVar13 + 0x358);
          plVar11 = plVar11 + 2) {
        plVar14 = (long *)*plVar11;
        if (*(ulong *)(plVar14[1] + 8) == _DAT_0f6ff540) {
          lVar34 = (**(code **)(*plVar14 + 8))(plVar14,lVar13,*(ushort *)(lVar19 + 0x128),2);
          param_1 = lStack_2c8;
          if (lVar34 != 0) goto LAB_072f76b2;
          break;
        }
      }
      if ((*(byte *)(lVar13 + 0x135) & 8) == 0) {
LAB_072f76af:
        lVar34 = lVar19;
      }
      else {
        lVar34 = *(long *)(lVar13 + 0x200);
      }
    }
    else {
      lVar25 = lVar13 + 0x1b0;
      do {
        bVar35 = *(ulong *)(lVar34 + 0x20) < _DAT_0f6ff540;
        if (!bVar35) {
          lVar25 = lVar34;
        }
        lVar34 = *(long *)(lVar34 + (ulong)bVar35 * 8);
      } while (lVar34 != 0);
      if ((lVar25 == lVar13 + 0x1b0) || (_DAT_0f6ff540 < *(ulong *)(lVar25 + 0x20)))
      goto LAB_072f74d7;
      if (*(uint *)(lVar25 + 0x28) < 3) goto LAB_072f76af;
      uVar30 = (ulong)(2 << (((char)*(undefined4 *)(lVar25 + 0x30) -
                             (char)*(undefined4 *)(lVar25 + 0x2c)) + 1U & 0x1f) & 0xffffU |
                      ~*(uint *)(lVar25 + 0x34) & (uint)*(ushort *)(lVar19 + 0x128));
      if (((ulong)(*(long *)(lVar13 + 0x1f0) - *(long *)(lVar13 + 0x1e8) >> 3) <= uVar30) ||
         (lVar34 = *(long *)(*(long *)(lVar13 + 0x1e8) + uVar30 * 8), lVar34 == 0))
      goto LAB_072f76af;
    }
LAB_072f76b2:
    uStack_178 = 0;
    uStack_177 = 0;
    uStack_176 = 0;
    uStack_170 = 0;
    uStack_16f = 0;
    uStack_188 = (byte *)0x0;
    uStack_180._0_4_ = 0;
    uStack_180._4_4_ = 0;
    uStack_168 = 1;
    plVar11 = &uStack_1e8;
    cVar8 = (**(code **)(*plVar12 + 0xf8))(plVar12,plVar11,lVar34,3,0,&uStack_188);
    if ((cVar8 != '\0') &&
       (lVar13 = (**(code **)(*plVar12 + 0x138))(plVar12,&uStack_1e8), lVar13 != 0)) {
      uStack_188 = (byte *)(CONCAT71(uStack_188._1_7_,(undefined1)uStack_1e8) & 0xffffffffffffff0f);
      uStack_188 = (byte *)(CONCAT62(uStack_188._2_6_,
                                     CONCAT11(plStack_1e0._0_1_,(undefined1)uStack_188)) &
                           0xffffffffffff0fff);
      uStack_188._0_4_ =
           CONCAT22(uStack_1e8._4_2_ - *(short *)((long)plVar12 + 0x42),(undefined2)uStack_188);
      lVar13 = func_0x0cb18130(lVar13 + 0x13d0,&uStack_188);
      if ((lVar13 != 0) &&
         ((plVar12 = *(long **)(lVar13 + 0x18), plVar12 != (long *)0x0 &&
          (cVar8 = (**(code **)(*plVar12 + 0x88))(plVar12,0x25), cVar8 != '\0')))) {
        lVar13 = *(long *)(*(long *)(param_1 + 0x18) + 0x1d0);
        cVar8 = *(char *)(lVar13 + 0x80);
        auStack_378 = (undefined1  [8])&UNK_0f47e0b0;
        ppuStack_370 = (ulong **)&uStack_368;
        uStack_368 = (ulong **)0x0;
        uStack_360 = 0;
        uVar30 = (ulong)(DAT_0f6e3e58 >> 1);
        uVar24 = 0xf6e3e59;
        if ((DAT_0f6e3e58 & 1) != 0) {
          uVar30 = _DAT_0f6e3e60;
          uVar24 = _DAT_0f6e3e68;
        }
        func_0x0c44f180(auStack_2a8,uVar24,uVar30,1,0,auStack_378);
        _auStack_2a8 = (ulong **)&UNK_0f371da8;
        uStack_228 = uStack_228 & 0xffffffff00000000;
        uStack_218 = 0;
        bVar35 = (*(byte *)(lVar13 + 0x38) & 1) != 0;
        lVar34 = lVar13 + 0x39;
        if (bVar35) {
          lVar34 = *(long *)(lVar13 + 0x48);
        }
        uVar30 = (ulong)(*(byte *)(lVar13 + 0x38) >> 1);
        if (bVar35) {
          uVar30 = *(ulong *)(lVar13 + 0x40);
        }
        func_0x0edfc880(&uStack_188,lVar34,uVar30,0x3a);
        func_0x0edfcad0(&puStack_358,&uStack_188);
        if (uStack_188 != (byte *)0x0) {
          func_0x0412a280(uStack_188,
                          CONCAT62(uStack_176,CONCAT11(uStack_177,uStack_178)) - (long)uStack_188);
        }
        plStack_40 = plVar12;
        if (cVar8 == '\0') {
          if ((DAT_0f5ea4a0 == '\0') && (iVar10 = FUN_04108328(&DAT_0f5ea4a0), iVar10 != 0)) {
            func_0x08b670e0(&DAT_0f5ea138);
            __cxa_atexit(&UNK_08b673f0,&DAT_0f5ea138,0xf53dab8);
            func_0x0410844d(&DAT_0f5ea4a0);
          }
          plStack_2d8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a);
          if (plStack_2d8 == (long *)0x0) {
            func_0x0eec74c0(0x1a,0);
          }
          lVar13 = _UNK_01463647;
          auStack_2e8 = (undefined1  [8])0x1b;
          uStack_2e0 = 0x17;
          *plStack_2d8 = _DAT_0146363f;
          plStack_2d8[1] = lVar13;
          *(undefined8 *)((long)plStack_2d8 + 0xf) = 0x7869666572506c61;
          *(undefined1 *)((long)plStack_2d8 + 0x17) = 0;
          ppuStack_1a8 = (ulong **)0x0;
          plStack_1a0 = (long *)0x0;
          (**(code **)(_DAT_0f5ea138 + 0x90))(&uStack_188,&DAT_0f5ea138,auStack_2e8,&ppuStack_1a8);
          if (puStack_350 < puStack_348) {
            puStack_350[2] = CONCAT62(uStack_176,CONCAT11(uStack_177,uStack_178));
            *puStack_350 = (ulong)uStack_188;
            puStack_350[1] = CONCAT44(uStack_180._4_4_,(undefined4)uStack_180);
            uStack_188 = (byte *)0x0;
            uStack_180._0_4_ = 0;
            uStack_180._4_4_ = 0;
            uStack_178 = 0;
            uStack_177 = 0;
            uStack_176 = 0;
            puStack_350 = puStack_350 + 3;
LAB_072f7af3:
            plVar11 = plStack_1a0;
            if (plStack_1a0 != (long *)0x0) {
              LOCK();
              plVar12 = plStack_1a0 + 1;
              lVar13 = *plVar12;
              *plVar12 = *plVar12 + -1;
              UNLOCK();
              if (lVar13 == 0) {
                (**(code **)(*plStack_1a0 + 0x10))(plStack_1a0);
                func_0x0412c2d0(plVar11);
              }
            }
            if (((ulong)auStack_2e8 & 1) != 0) {
              func_0x0412a280(plStack_2d8,(ulong)auStack_2e8 & 0xfffffffffffffffe);
            }
            goto LAB_072f7b46;
          }
          lVar13 = (long)puStack_350 - (long)puStack_358;
          uVar30 = (lVar13 >> 3) * -0x5555555555555555 + 1;
          if (uVar30 < 0xaaaaaaaaaaaaaab) {
            puStack_48 = puStack_358;
            lVar19 = (long)puStack_348 - (long)puStack_358;
            lVar34 = lVar19 >> 3;
            uVar15 = lVar34 * 0x5555555555555556;
            if (uVar30 < uVar15) {
              uVar30 = uVar15;
            }
            if (0x555555555555554 < (ulong)(lVar34 * -0x5555555555555555)) {
              uVar30 = 0xaaaaaaaaaaaaaaa;
            }
            if (0xaaaaaaaaaaaaaaa < uVar30) goto LAB_072f8e12;
            puVar16 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
            if (puVar16 == (ulong *)0x0) {
              func_0x0eec74c0(uVar30 * 0x18,0);
            }
            puVar29 = puStack_48;
            puStack_50 = puVar16 + uVar30 * 3;
            *(ulong *)((long)puVar16 + lVar13 + 0x10) =
                 CONCAT62(uStack_176,CONCAT11(uStack_177,uStack_178));
            *(ulong *)((long)puVar16 + lVar13) = (ulong)uStack_188;
            ((ulong *)((long)puVar16 + lVar13))[1] =
                 CONCAT44(uStack_180._4_4_,(undefined4)uStack_180);
            uStack_188 = (byte *)0x0;
            uStack_180._0_4_ = 0;
            uStack_180._4_4_ = 0;
            uStack_178 = 0;
            uStack_177 = 0;
            uStack_176 = 0;
            puVar1 = (ulong *)((long)puVar16 + lVar13 + 0x18);
            func_0x0eee2f00(puVar16,puStack_48,lVar13);
            puStack_348 = puStack_50;
            puStack_358 = puVar16;
            puStack_350 = puVar1;
            if ((puVar29 != (ulong *)0x0) &&
               (func_0x0412a280(puVar29,lVar19), puStack_350 = puVar1, ((ulong)uStack_188 & 1) != 0)
               ) {
              func_0x0412a280(CONCAT62(uStack_176,CONCAT11(uStack_177,uStack_178)),
                              (ulong)uStack_188 & 0xfffffffffffffffe);
            }
            goto LAB_072f7af3;
          }
LAB_072f8e0d:
          func_0x0488efe0();
LAB_072f8e12:
          uVar24 = func_0x04882eb0();
          func_0x041084d6(&DAT_0f5ea4a0);
          func_0x04886070(&puStack_358);
          func_0x049c2320(auStack_2a8);
          auStack_378 = (undefined1  [8])&UNK_0f47e0b0;
          func_0x0d6c9500(&ppuStack_370,uStack_368);
          if (((ulong)uStack_208 & 1) != 0) {
            func_0x0412a280(uStack_1f8,(ulong)uStack_208 & 0xfffffffffffffffe);
          }
          func_0x0eee2d70(uVar24);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
LAB_072f7b46:
        plVar11 = &uStack_1e8;
        if (puStack_350 < puStack_348) {
          *(undefined1 *)puStack_350 = 0x26;
          uVar5 = _UNK_014b205d;
          uVar4 = _UNK_014b2059;
          uVar9 = _UNK_014b2055;
          *(undefined4 *)((long)puStack_350 + 1) = _DAT_014b2051;
          *(undefined4 *)((long)puStack_350 + 5) = uVar9;
          *(undefined4 *)((long)puStack_350 + 9) = uVar4;
          *(undefined4 *)((long)puStack_350 + 0xd) = uVar5;
          *(undefined4 *)(puStack_350 + 2) = 0x2d2d2d2d;
          *(undefined1 *)((long)puStack_350 + 0x14) = 0;
          puVar33 = puStack_350 + 3;
          puVar29 = puStack_358;
          puVar16 = puStack_348;
        }
        else {
          lVar13 = (long)puStack_350 - (long)puStack_358;
          uVar30 = (lVar13 >> 3) * -0x5555555555555555 + 1;
          if (0xaaaaaaaaaaaaaaa < uVar30) {
            func_0x0488efe0();
LAB_072f8e08:
            func_0x04882eb0();
            goto LAB_072f8e0d;
          }
          lVar34 = (long)puStack_348 - (long)puStack_358 >> 3;
          uVar15 = lVar34 * 0x5555555555555556;
          if (uVar30 < uVar15) {
            uVar30 = uVar15;
          }
          if (0x555555555555554 < (ulong)(lVar34 * -0x5555555555555555)) {
            uVar30 = 0xaaaaaaaaaaaaaaa;
          }
          if (uVar30 == 0) {
            lVar34 = 0;
          }
          else {
            if (0xaaaaaaaaaaaaaaa < uVar30) goto LAB_072f8e08;
            lVar34 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar30 * 0x18);
            if (lVar34 == 0) {
              func_0x0eec74c0(uVar30 * 0x18,0);
              lVar34 = 0;
            }
          }
          puVar16 = (ulong *)(lVar34 + uVar30 * 0x18);
          *(undefined1 *)(lVar34 + lVar13) = 0x26;
          uVar5 = _UNK_014b205d;
          uVar4 = _UNK_014b2059;
          uVar9 = _UNK_014b2055;
          puVar17 = (undefined4 *)(lVar34 + 1 + lVar13);
          *puVar17 = _DAT_014b2051;
          puVar17[1] = uVar9;
          puVar17[2] = uVar4;
          puVar17[3] = uVar5;
          *(undefined4 *)(lVar34 + 0x10 + lVar13) = 0x2d2d2d2d;
          *(undefined1 *)(lVar34 + 0x14 + lVar13) = 0;
          puVar33 = (ulong *)(lVar13 + lVar34 + 0x18);
          puVar29 = (ulong *)((lVar34 + lVar13) - ((long)puStack_350 - (long)puStack_358));
          func_0x0eee2f00(puVar29);
          puVar1 = puStack_358;
          if (puStack_358 != (ulong *)0x0) {
            lVar13 = (long)puStack_348 - (long)puStack_358;
            puStack_358 = puVar29;
            puStack_350 = puVar33;
            puStack_348 = puVar16;
            func_0x0412a280(puVar1,lVar13);
            puVar29 = puStack_358;
            puVar16 = puStack_348;
          }
        }
        puStack_348 = puVar16;
        puStack_358 = puVar29;
        puStack_350 = puVar33;
        if (puVar33 < puStack_348) {
          if (((ulong)uStack_208 & 1) == 0) {
            puVar33[2] = uStack_1f8;
            *puVar33 = (ulong)uStack_208;
            puVar33[1] = (ulong)plStack_200;
          }
          else {
            func_0x0412e5e0(puVar33,uStack_1f8,plStack_200);
          }
          puStack_350 = puVar33 + 3;
        }
        else {
          puStack_350 = (ulong *)func_0x04909a40(&puStack_358,&uStack_208);
        }
        uStack_158 = 0;
        uStack_150 = uStack_150 & 0xffffff00;
        uStack_138 = uStack_138 & 0xffffffffffffff00;
        uStack_e8 = 0;
        uStack_188 = (byte *)0x0;
        uStack_180._0_4_ = 0;
        uStack_180._4_4_ = 0;
        uStack_178 = 0;
        uStack_177 = 0;
        uStack_176 = 0;
        uStack_170 = 0;
        uStack_130 = 0;
        uStack_128 = 0;
        uStack_120 = 0;
        ppuStack_118 = (ulong **)0x0;
        uStack_110 = 0;
        uStack_108 = 0;
        uStack_100 = 0;
        func_0x04a782c0(auStack_2e8,puStack_358,puStack_350,&UNK_013a8ff4,1);
        if (((ulong)uStack_188 & 1) != 0) {
          func_0x0412a280(CONCAT62(uStack_176,CONCAT11(uStack_177,uStack_178)),
                          (ulong)uStack_188 & 0xfffffffffffffffe);
        }
        uStack_178 = SUB81(plStack_2d8,0);
        uStack_177 = (undefined1)((ulong)plStack_2d8 >> 8);
        uStack_176 = (undefined6)((ulong)plStack_2d8 >> 0x10);
        uStack_188 = (byte *)auStack_2e8;
        uStack_180._0_4_ = (undefined4)uStack_2e0;
        uStack_180._4_4_ = uStack_2e0._4_4_;
        func_0x0c3f0c90(auStack_2a8,0,&uStack_188);
        if (DAT_0f5ea4a0 == '\0') goto LAB_072f8d6d;
        goto LAB_072f7dd7;
      }
    }
  }
  if (((ulong)uStack_208 & 1) != 0) {
    func_0x0412a280(uStack_1f8,(ulong)uStack_208 & 0xfffffffffffffffe);
  }
  if ((DAT_0f5ea4a0 == '\0') && (iVar10 = FUN_04108328(&DAT_0f5ea4a0), iVar10 != 0)) {
    func_0x08b670e0(&DAT_0f5ea138);
    __cxa_atexit(&UNK_08b673f0,&DAT_0f5ea138,0xf53dab8);
    func_0x0410844d(&DAT_0f5ea4a0);
    param_1 = lStack_2c8;
  }
  ppuStack_1a8 = (ulong **)0x0;
  plStack_1a0 = (long *)0x0;
  (**(code **)(_DAT_0f5ea138 + 0x88))(auStack_378,&DAT_0f5ea138,lStack_190,uStack_68,&ppuStack_1a8);
  plVar12 = plStack_1a0;
  if (plStack_1a0 != (long *)0x0) {
    LOCK();
    plVar14 = plStack_1a0 + 1;
    lVar13 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_1a0 + 0x10))(plStack_1a0);
      func_0x0412c2d0(plVar12);
      cVar8 = *(char *)(*(long *)(*(long *)(param_1 + 0x18) + 0x1d0) + 0x80);
      goto joined_r0x072f8273;
    }
  }
  cVar8 = *(char *)(*(long *)(*(long *)(param_1 + 0x18) + 0x1d0) + 0x80);
joined_r0x072f8273:
  if (cVar8 == '\x01') {
    auStack_2e8 = (undefined1  [8])((ulong)auStack_2e8 & 0xffffffffffff0000);
  }
  else {
    if ((DAT_0f5ea4a0 == '\0') && (iVar10 = FUN_04108328(&DAT_0f5ea4a0), iVar10 != 0)) {
      func_0x08b670e0(&DAT_0f5ea138);
      __cxa_atexit(&UNK_08b673f0,&DAT_0f5ea138,0xf53dab8);
      func_0x0410844d(&DAT_0f5ea4a0);
      param_1 = lStack_2c8;
    }
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a);
    if (plVar12 == (long *)0x0) {
      func_0x0eec74c0(0x1a,0);
    }
    lVar13 = _UNK_01463647;
    _auStack_2a8 = (ulong **)0x1b;
    uStack_2a0 = (ulong **)0x17;
    *plVar12 = _DAT_0146363f;
    plVar12[1] = lVar13;
    *(undefined8 *)((long)plVar12 + 0xf) = 0x7869666572506c61;
    *(undefined1 *)((long)plVar12 + 0x17) = 0;
    uStack_1b8 = 0;
    plStack_1b0 = (long *)0x0;
    ppuStack_298 = (ulong **)plVar12;
    (**(code **)(_DAT_0f5ea138 + 0x90))(&uStack_188,&DAT_0f5ea138,auStack_2a8,&uStack_1b8);
    puVar16 = (ulong *)func_0x0412f8c0(&uStack_188,&UNK_011d0654,1);
    plStack_2d8 = (long *)puVar16[2];
    auStack_2e8 = (undefined1  [8])*puVar16;
    uStack_2e0 = puVar16[1];
    *puVar16 = 0;
    puVar16[1] = 0;
    puVar16[2] = 0;
    if (((ulong)uStack_188 & 1) != 0) {
      func_0x0412a280(CONCAT62(uStack_176,CONCAT11(uStack_177,uStack_178)),
                      (ulong)uStack_188 & 0xfffffffffffffffe);
    }
    plVar12 = plStack_1b0;
    if (plStack_1b0 != (long *)0x0) {
      LOCK();
      plVar14 = plStack_1b0 + 1;
      lVar13 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plStack_1b0 + 0x10))(plStack_1b0);
        func_0x0412c2d0(plVar12);
      }
    }
    if (((ulong)_auStack_2a8 & 1) != 0) {
      func_0x0412a280(ppuStack_298,(ulong)_auStack_2a8 & 0xfffffffffffffffe);
    }
  }
  if ((DAT_0f5ea4a0 == '\0') && (iVar10 = FUN_04108328(&DAT_0f5ea4a0), iVar10 != 0)) {
    func_0x08b670e0(&DAT_0f5ea138);
    __cxa_atexit(&UNK_08b673f0,&DAT_0f5ea138,0xf53dab8);
    func_0x0410844d(&DAT_0f5ea4a0);
    param_1 = lStack_2c8;
  }
  auStack_340[0] = 0x2a;
  auStack_340._1_4_ = _DAT_01463657;
  uStack_33b = _UNK_0146365b;
  uStack_337 = _UNK_0146365f;
  uStack_333 = (undefined1)_UNK_01463663;
  uStack_332 = 0x2e72;
  uStack_330 = 0x66;
  uStack_32f = 0x64656c6961;
  uStack_32a = 0;
  lVar13 = *(long *)(*(long *)(param_1 + 0x18) + 0x1d0);
  if ((*(byte *)(lVar13 + 0x38) & 1) == 0) {
    uStack_2f8 = *(ulong *)(lVar13 + 0x48);
    uStack_308 = *(ulong *)(lVar13 + 0x38);
    uStack_300 = *(ulong *)(lVar13 + 0x40);
  }
  else {
    func_0x0412e5e0(&uStack_308,*(undefined8 *)(lVar13 + 0x48),*(undefined8 *)(lVar13 + 0x40));
  }
  puStack_328._0_1_ = 0;
  puStack_328._1_7_ = 0;
  bStack_320 = 0;
  uStack_31f = 0;
  uStack_31e = 0;
  puStack_318 = (ulong *)0x0;
  plStack_200 = (long *)((ulong)plStack_200 & 0xffffffffffffff00);
  uStack_208 = (byte *)&puStack_328;
  puVar16 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
  if (puVar16 == (ulong *)0x0) {
    func_0x0eec74c0(0x18,0);
  }
  puStack_328._0_1_ = (byte)puVar16;
  puStack_328._1_7_ = (undefined7)((ulong)puVar16 >> 8);
  uStack_31f = (undefined1)((ulong)puVar16 >> 8);
  uStack_31e = (undefined6)((ulong)puVar16 >> 0x10);
  puStack_318 = puVar16 + 3;
  uStack_180 = &puStack_198;
  uStack_178 = SUB81(plVar11,0);
  uStack_177 = (undefined1)((ulong)plVar11 >> 8);
  uStack_176 = (undefined6)((ulong)plVar11 >> 0x10);
  uStack_170 = 0;
  uStack_1e8 = puVar16;
  puStack_198 = puVar16;
  uStack_188 = (byte *)&puStack_328;
  if ((uStack_308 & 1) == 0) {
    puVar16[2] = uStack_2f8;
    *puVar16 = uStack_308;
    puVar16[1] = uStack_300;
  }
  else {
    bStack_320 = (byte)puStack_328;
    func_0x0412e5e0(puVar16,uStack_2f8,uStack_300);
  }
  puVar16 = uStack_1e8 + 3;
  bStack_320 = (byte)puVar16;
  uStack_31f = (undefined1)((ulong)puVar16 >> 8);
  uStack_31e = (undefined6)((ulong)puVar16 >> 0x10);
  uStack_208 = (byte *)0x0;
  plStack_200 = (long *)0x0;
  (**(code **)(_DAT_0f5ea138 + 0x88))
            (&uStack_2c0,&DAT_0f5ea138,auStack_340,&puStack_328,&uStack_208);
  uVar30 = (ulong)auStack_2e8 >> 1 & 0x7f;
  plVar11 = (long *)(auStack_2e8 + 1);
  if (((ulong)auStack_2e8 & 1) != 0) {
    uVar30 = uStack_2e0;
    plVar11 = plStack_2d8;
  }
  puVar16 = (ulong *)func_0x0412f0e0(&uStack_2c0,0,plVar11,uVar30);
  puStack_348 = (ulong *)puVar16[2];
  puStack_358 = (ulong *)*puVar16;
  puStack_350 = (ulong *)puVar16[1];
  *puVar16 = 0;
  puVar16[1] = 0;
  puVar16[2] = 0;
  puVar20 = (undefined8 *)func_0x0412f8c0(&puStack_358,&UNK_011d0654,1);
  ppuStack_298 = (ulong **)puVar20[2];
  _auStack_2a8 = (ulong **)*puVar20;
  uStack_2a0 = (ulong **)puVar20[1];
  *puVar20 = 0;
  puVar20[1] = 0;
  puVar20[2] = 0;
  ppuVar22 = (ulong **)((ulong)auStack_378 >> 1 & 0x7f);
  ppuVar3 = (ulong **)(auStack_378 + 1);
  if (((ulong)auStack_378 & 1) != 0) {
    ppuVar22 = ppuStack_370;
    ppuVar3 = uStack_368;
  }
  puVar16 = (ulong *)func_0x0412f8c0(auStack_2a8,ppuVar3,ppuVar22);
  plStack_1c8 = (long *)puVar16[2];
  uStack_1d8 = *puVar16;
  uStack_1d0 = puVar16[1];
  *puVar16 = 0;
  puVar16[1] = 0;
  puVar16[2] = 0;
  if (((ulong)_auStack_2a8 & 1) != 0) {
    func_0x0412a280(ppuStack_298,(ulong)_auStack_2a8 & 0xfffffffffffffffe);
  }
  if (((ulong)puStack_358 & 1) != 0) {
    func_0x0412a280(puStack_348,(ulong)puStack_358 & 0xfffffffffffffffe);
  }
  plVar11 = plStack_200;
  if (((ulong)uStack_2c0 & 1) != 0) {
    func_0x0412a280(lStack_2b0,(ulong)uStack_2c0 & 0xfffffffffffffffe);
    plVar11 = plStack_200;
  }
  plStack_200 = plVar11;
  if (plVar11 != (long *)0x0) {
    LOCK();
    plVar12 = plVar11 + 1;
    lVar13 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      func_0x0412c2d0(plVar11);
    }
  }
  uVar7 = puStack_328._1_7_;
  bVar6 = (byte)puStack_328;
  lVar13 = CONCAT71(puStack_328._1_7_,(byte)puStack_328);
  if (lVar13 != 0) {
    lVar34 = CONCAT62(uStack_31e,CONCAT11(uStack_31f,bStack_320));
    if (lVar13 != lVar34) {
      do {
        if ((*(byte *)(lVar34 + -0x18) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lVar34 + -8),
                          *(ulong *)(lVar34 + -0x18) & 0xfffffffffffffffe);
        }
        lVar34 = lVar34 + -0x18;
      } while (lVar34 != lVar13);
      lVar13 = CONCAT71(puStack_328._1_7_,(byte)puStack_328);
    }
    bStack_320 = bVar6;
    uStack_31f = (undefined1)uVar7;
    uStack_31e = (undefined6)((uint7)uVar7 >> 8);
    func_0x0412a280(lVar13,(long)puStack_318 - lVar13);
  }
  if ((uStack_308 & 1) != 0) {
    func_0x0412a280(uStack_2f8,uStack_308 & 0xfffffffffffffffe);
  }
  lVar13 = lStack_2c8;
  if ((auStack_340[0] & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_329,CONCAT16(uStack_32a,CONCAT51(uStack_32f,uStack_330))),
                    CONCAT35((undefined3)uStack_33b,CONCAT41(auStack_340._1_4_,auStack_340[0])) &
                    0xfffffffffffffffe);
  }
  puVar26 = &UNK_01c02570;
  if (*(char *)(*(long *)(*(long *)(lVar13 + 0x18) + 0x1d0) + 0x80) != '\0') {
    puVar26 = &UNK_01c049d0;
  }
  func_0x072f3f50(lVar13,puVar26,&uStack_1d8);
  if (*(char *)(param_2 + 0xe4) == '\x01') {
    lVar13 = *(long *)(param_2 + 200);
    if (((ulong)auStack_378 & 1) == 0) {
      ppuStack_298 = uStack_368;
      _auStack_2a8 = (ulong **)auStack_378;
      uStack_2a0 = ppuStack_370;
      iVar10 = (int)lVar13;
      iVar36 = (int)((ulong)lVar13 >> 0x20);
      fVar37 = (float)*(int *)(param_2 + 0xd0);
    }
    else {
      lStack_190 = CONCAT44(lStack_190._4_4_,(float)*(int *)(param_2 + 0xd0));
      uStack_60 = 0;
      uStack_68 = lVar13;
      func_0x0412e5e0(auStack_2a8,uStack_368,ppuStack_370);
      iVar10 = (int)uStack_68;
      iVar36 = uStack_68._4_4_;
      fVar37 = (float)lStack_190;
    }
    uStack_180._0_4_ = 2;
    uStack_180._4_4_ = 1;
    uStack_178 = 0;
    uStack_177 = 0;
    uStack_170 = 0;
    uStack_16f = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_188 = &UNK_0f1265b8;
    uStack_158 = 2;
    uStack_150 = (uint)auStack_2a8;
    uStack_14c = uStack_2a4;
    _auStack_2a8 = (ulong **)((ulong)_auStack_2a8 & 0xffffffffffff0000);
    uStack_148 = (undefined4)uStack_2a0;
    uStack_144 = uStack_2a0._4_4_;
    ppuStack_140 = ppuStack_298;
    uStack_138 = CONCAT44((float)iVar36,(float)iVar10);
    uStack_130 = CONCAT44(_DAT_01e7b1dc,fVar37);
    uStack_128 = CONCAT44(_UNK_01e7b1e4,_UNK_01e7b1e0);
    uStack_120 = (ulong)_UNK_01e7b1e8;
    ppuStack_118 = (ulong **)&UNK_05265c00;
    uStack_110 = CONCAT71(uStack_110._1_7_,1);
    uStack_108 = CONCAT44(uStack_108._4_4_,5);
    plVar11 = (long *)(**(code **)(**(long **)(lStack_2c8 + 0x18) + 0x78))();
    plVar11 = (long *)(**(code **)(*plVar11 + 0x150))(plVar11);
    plVar11 = (long *)(**(code **)(*plVar11 + 0xa48))(plVar11);
    (**(code **)(*plVar11 + 0x18))(plVar11,&uStack_188);
    uStack_188 = &UNK_0f1265b8;
    uStack_180 = (ulong **)CONCAT44(uStack_180._4_4_,(undefined4)uStack_180);
    if (((char)uStack_110 == '\x01') &&
       (uStack_180 = (ulong **)CONCAT44(uStack_180._4_4_,(undefined4)uStack_180),
       (uStack_150 & 1) != 0)) {
      func_0x0412a280(ppuStack_140,CONCAT44(uStack_14c,uStack_150) & 0xfffffffffffffffe);
    }
  }
  if ((uStack_1d8 & 1) != 0) {
    func_0x0412a280(plStack_1c8,uStack_1d8 & 0xfffffffffffffffe);
  }
  if (((ulong)auStack_2e8 & 1) != 0) {
    func_0x0412a280(plStack_2d8,(ulong)auStack_2e8 & 0xfffffffffffffffe);
  }
  if (((ulong)auStack_378 & 1) != 0) {
    func_0x0412a280(uStack_368,(ulong)auStack_378 & 0xfffffffffffffffe);
  }
  return;
}



/* ---- referenced strings ----
 * 0x128ec0a  gameTest.report.testLocation
 * 0x128ec16  ort.testLocation
 * 0x137a5c7  gameTest.report.tickCount
 * 0x137a5d0  report.tickCount
 * 0x1416c51  gameTest.report.bookTitle
 * 0x1416c5a  report.bookTitle
 * 0x146363f  gameTest.optionalPrefix
 * 0x1463657  gameTest.error.failed
 * 0x14b2051  -------------------
 */
