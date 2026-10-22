/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd406f60 (ELF vaddr 0xd306f60)
 * Label: callee-of:0x4de9260
 * Body:  [[0d406f60, 0d408ca0]]
 * Ghidra: FUN_0d406f60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d406f60(undefined8 param_1)

{
  byte *pbVar1;
  uint *puVar2;
  long **pplVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined4 *puVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long **pplVar15;
  long lVar16;
  bool bVar17;
  long *plStack_608;
  long *plStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  long **pplStack_5e8;
  long *plStack_5c0;
  undefined8 uStack_5b8;
  byte bStack_5b0;
  undefined4 uStack_5af;
  undefined2 uStack_5ab;
  undefined1 uStack_5a9;
  undefined4 uStack_5a8;
  undefined1 uStack_5a4;
  undefined2 uStack_5a3;
  undefined1 uStack_5a1;
  undefined1 uStack_5a0;
  undefined2 uStack_59f;
  undefined5 uStack_59d;
  undefined8 uStack_598;
  uint *puStack_590;
  long *plStack_588;
  byte bStack_580;
  undefined5 uStack_57f;
  undefined2 uStack_57a;
  undefined1 uStack_578;
  undefined5 uStack_577;
  undefined2 uStack_572;
  undefined8 uStack_570;
  undefined8 uStack_568;
  ulong auStack_548 [4];
  ulong uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  ulong uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  ulong uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  ulong uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  ulong uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  ulong uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  ulong uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  ulong uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  ulong uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  ulong uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  ulong uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined1 uStack_3c8;
  undefined2 uStack_3c7;
  undefined1 uStack_3c5;
  undefined1 uStack_3b0;
  undefined2 uStack_3af;
  undefined1 uStack_3ad;
  undefined1 uStack_398;
  undefined2 uStack_397;
  undefined1 uStack_395;
  undefined1 uStack_380;
  undefined2 uStack_37f;
  undefined1 uStack_37d;
  long *plStack_368;
  undefined8 uStack_360;
  undefined *puStack_328;
  undefined8 uStack_320;
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  undefined *puStack_268;
  undefined8 uStack_260;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined *apuStack_1a8 [4];
  undefined **ppuStack_188;
  long lStack_178;
  undefined8 uStack_170;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_78;
  undefined8 uStack_70;
  
  uStack_5a0 = 0;
  uStack_59f = 0;
  uStack_59d = 0;
  uStack_598 = 0;
  bStack_5b0 = 0x1c;
  uStack_5af = 0x63616c70;
  uStack_5ab = 0x7365;
  uStack_5a9 = 0x5f;
  uStack_5a8 = 0x74616566;
  uStack_5a4 = 0x75;
  uStack_5a3 = 0x6572;
  uStack_5a1 = 0;
  uStack_5b8 = 0x5f4748520f33cd82;
  uStack_70 = 0;
  bStack_580 = 0;
  uStack_57f = 0;
  uStack_57a = 0;
  lStack_78 = 0;
  plStack_588 = (long *)&UNK_0f46f710;
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1e0);
  if (plVar8 == (long *)0x0) {
    FUN_0eec74c0(0x1e0,0);
  }
  plStack_608 = plStack_588;
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0f469280;
  plStack_600 = (long *)0x0;
  plStack_588 = (long *)0x0;
  plVar8[4] = (long)&UNK_0f2ccd78;
  plVar8[5] = 0;
  plVar8[6] = 0;
  plVar8[7] = 0;
  plVar8[8] = 0;
  plVar8[9] = 0;
  plVar8[10] = 0;
  plVar8[0xb] = 0;
  plVar8[0xc] = 0;
  *(undefined1 *)(plVar8 + 0xd) = 0;
  func_0x04aa75f0(plVar8 + 0xe,&uStack_3c8,&UNK_01254d89);
  *(undefined1 *)(plVar8 + 0x10) = 0;
  plVar8[0x11] = 0;
  plVar8[0x12] = 0;
  plVar8[0x13] = 0;
  plVar8[0x14] = 0;
  plVar8[0x15] = 0;
  plVar8[0x16] = 0;
  plVar8[0x17] = 0xffffffff;
  plVar8[0x26] = 0;
  plVar8[0x27] = 0;
  plVar8[0x18] = 0;
  plVar8[0x19] = 0;
  plVar8[0x1a] = 0;
  plVar8[0x1b] = 0;
  plVar8[0x1c] = 0;
  plVar8[0x1d] = 0;
  plVar8[0x1e] = 0;
  plVar8[0x1f] = 0;
  plVar8[4] = (long)&UNK_0f4692d0;
  plVar8[0x2e] = 0;
  plVar8[0x2f] = 0;
  if (plStack_608 == (long *)0x0) {
    plVar8[0x3a] = 0;
    plVar9 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_608)(&plStack_608,plVar8 + 0x2e);
    plVar9 = plStack_608;
    plStack_608 = (long *)0x0;
    plVar8[0x2e] = (long)plVar9;
    plVar8[0x3a] = 0;
    if ((*(byte *)(plVar8 + 0x12) & 1) == 0) {
      plVar9 = (long *)0x0;
    }
    else {
      func_0x0412a280(plVar8[0x14],plVar8[0x12] & 0xfffffffffffffffe);
      plVar9 = plStack_608;
    }
  }
  pbVar1 = (byte *)(plVar8 + 0x12);
  pbVar1[0] = 0x22;
  uVar6 = _UNK_01207d03;
  uVar5 = _UNK_01207cff;
  uVar4 = _UNK_01207cfb;
  pbVar1[1] = 0x66;
  *(undefined4 *)((long)plVar8 + 0x92) = _DAT_01207cf7;
  *(undefined4 *)((long)plVar8 + 0x96) = uVar4;
  *(undefined4 *)((long)plVar8 + 0x9a) = uVar5;
  *(undefined4 *)((long)plVar8 + 0x9e) = uVar6;
  *(undefined4 *)((long)plVar8 + 0xa2) = 0;
  *(undefined2 *)((long)plVar8 + 0xa6) = 0;
  plVar8[0x11] = 0xf6c39062bb9edf3;
  plVar8[0x15] = 0;
  if (plVar9 != (long *)0x0) {
    (*(code *)plVar9[1])(&plStack_608);
  }
  plVar9 = plVar8 + 1;
  if (plStack_588 != (long *)0x0) {
    (*(code *)plStack_588[1])(&plStack_588);
  }
  LOCK();
  *plVar9 = *plVar9 + 1;
  UNLOCK();
  plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar10 == (long *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  plStack_5c0 = plVar8 + 4;
  plVar10[1] = 0;
  plVar10[2] = 0;
  *plVar10 = (long)&UNK_0f4693b0;
  plVar10[6] = 0;
  plVar10[7] = 0;
  plVar10[4] = (long)&UNK_0f469400;
  plVar10[0xe] = (long)plStack_5c0;
  plVar10[0xf] = (long)plVar8;
  LOCK();
  plVar8[1] = plVar8[1] + 1;
  UNLOCK();
  plStack_608 = plVar10 + 4;
  plStack_600 = plVar10;
  puVar11 = (undefined4 *)func_0x050453e0(param_1,&uStack_5b8,1);
  plVar12 = plVar8 + 0x11;
  plVar13 = *(long **)(puVar11 + 0x24);
  if (plVar13 < *(long **)(puVar11 + 0x26)) {
    plVar13[2] = 0;
    plVar13[3] = 0;
    *plVar13 = 0;
    plVar13[1] = 0;
    plVar13[4] = 0;
    if (plVar13 == plVar12) {
LAB_0d40729c:
      *plVar13 = *plVar12;
      plVar13[5] = (long)(plVar10 + 4);
      plVar13[6] = (long)plVar10;
LAB_0d407308:
      LOCK();
      plVar10[1] = plVar10[1] + 1;
      UNLOCK();
    }
    else {
      if ((*pbVar1 & 1) == 0) {
        plVar13[3] = plVar8[0x14];
        lVar16 = plVar8[0x13];
        plVar13[1] = *(long *)pbVar1;
        plVar13[2] = lVar16;
        goto LAB_0d40729c;
      }
      FUN_04885070(plVar13 + 1,plVar8[0x14],plVar8[0x13]);
      *plVar13 = *plVar12;
      plVar13[5] = (long)plStack_608;
      plVar13[6] = (long)plStack_600;
      plVar10 = plStack_600;
      if (plStack_600 != (long *)0x0) goto LAB_0d407308;
    }
    plVar13 = plVar13 + 7;
    *(long **)(puVar11 + 0x24) = plVar13;
  }
  else {
    plVar13 = (long *)func_0x05048ae0(puVar11 + 0x22,plVar12,&plStack_608);
  }
  *(long **)(puVar11 + 0x24) = plVar13;
  uVar4 = *puVar11;
  uVar5 = puVar11[1];
  uVar6 = puVar11[2];
  uVar7 = puVar11[3];
  if (*(long *)(puVar11 + 2) != 0) {
    LOCK();
    plVar10 = (long *)(*(long *)(puVar11 + 2) + 8);
    *plVar10 = *plVar10 + 1;
    UNLOCK();
  }
  plVar10 = (long *)plVar8[0xf];
  *(undefined4 *)(plVar8 + 0xe) = uVar4;
  *(undefined4 *)((long)plVar8 + 0x74) = uVar5;
  *(undefined4 *)(plVar8 + 0xf) = uVar6;
  *(undefined4 *)((long)plVar8 + 0x7c) = uVar7;
  if (plVar10 != (long *)0x0) {
    LOCK();
    plVar12 = plVar10 + 1;
    lVar16 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      func_0x0412c2d0(plVar10);
    }
  }
  plVar10 = plStack_600;
  *(undefined1 *)(plVar8 + 0x10) = *(undefined1 *)((long)puVar11 + 0xa1);
  if (plStack_600 != (long *)0x0) {
    LOCK();
    plVar12 = plStack_600 + 1;
    lVar16 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*plStack_600 + 0x10))(plStack_600);
      func_0x0412c2d0(plVar10);
    }
  }
  LOCK();
  lVar16 = *plVar9;
  *plVar9 = *plVar9 + -1;
  UNLOCK();
  if (lVar16 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x0412c2d0(plVar8);
    LOCK();
    lVar16 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar16 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
  }
  if (lVar16 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x0412c2d0(plVar8);
  }
  apuStack_1a8[0] = &UNK_0f46f738;
  ppuStack_188 = apuStack_1a8;
  pplVar15 = (long **)(plVar8 + 0x36);
  pplStack_5e8 = &plStack_608;
  plStack_608 = (long *)&UNK_0f46f738;
  lVar16 = 0x20;
  if (pplVar15 == &plStack_608) {
LAB_0d407501:
    (**(code **)((long)*pplStack_5e8 + lVar16))();
  }
  else {
    pplVar3 = (long **)plVar8[0x3a];
    if (pplVar3 == pplVar15) {
      plStack_588 = (long *)&UNK_0f46f738;
      pplStack_5e8 = (long **)0x0;
      (*(code *)(*pplVar3)[3])(pplVar3,&plStack_608);
      (**(code **)(*(long *)plVar8[0x3a] + 0x20))();
      plVar8[0x3a] = 0;
      pplStack_5e8 = &plStack_608;
      (*(code *)plStack_588[3])(&plStack_588,pplVar15);
      (*(code *)plStack_588[4])(&plStack_588);
      plVar8[0x3a] = (long)pplVar15;
      if (pplStack_5e8 != &plStack_608) goto LAB_0d4074f6;
      goto LAB_0d407501;
    }
    plVar8[0x36] = (long)&UNK_0f46f738;
    pplStack_5e8 = pplVar3;
    plVar8[0x3a] = (long)pplVar15;
    if (pplVar3 == &plStack_608) goto LAB_0d407501;
LAB_0d4074f6:
    lVar16 = 0x28;
    if (pplStack_5e8 != (long **)0x0) goto LAB_0d407501;
  }
  uStack_3e8 = 0;
  uStack_3e0 = 0;
  uStack_3d8 = 0;
  (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0,&uStack_3e8);
  if ((uStack_3e8 & 1) != 0) {
    func_0x0412a280(uStack_3d8,uStack_3e8 & 0xfffffffffffffffe);
  }
  if (ppuStack_188 == apuStack_1a8) {
    lVar16 = 0x20;
LAB_0d40766f:
    (**(code **)(*ppuStack_188 + lVar16))();
  }
  else {
    lVar16 = 0x28;
    if (ppuStack_188 != (undefined **)0x0) goto LAB_0d40766f;
  }
  if (lStack_78 != 0) {
    (**(code **)(lStack_78 + 8))(&lStack_78);
  }
  if ((bStack_5b0 & 1) != 0) {
    func_0x0412a280(CONCAT53(uStack_59d,CONCAT21(uStack_59f,uStack_5a0)),
                    CONCAT17(uStack_5a9,CONCAT25(uStack_5ab,CONCAT41(uStack_5af,bStack_5b0))) &
                    0xfffffffffffffffe);
  }
  uStack_572 = 0;
  uStack_570 = 0;
  uStack_568 = 0;
  bStack_580 = 0x1a;
  uStack_57f = 0x6372616573;
  uStack_57a = 0x5f68;
  uStack_578 = 0x76;
  uStack_577 = 0x656d756c6f;
  plStack_588 = (long *)0xb991c6910799c0d6;
  plStack_368 = (long *)0x0;
  uStack_360 = 0;
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar8 == (long *)0x0) {
    FUN_0eec74c0(0x1c0,0);
  }
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0f46f7c8;
  plStack_608 = (long *)0x0;
  plStack_600 = (long *)0x0;
  if (plStack_368 == (long *)0x0) {
    plStack_608 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_368)(&plStack_368,&plStack_608);
    plStack_608 = plStack_368;
  }
  plStack_368 = (long *)0x0;
  plVar8[4] = (long)&UNK_0f2ccd78;
  plVar8[5] = 0;
  plVar8[6] = 0;
  plVar8[7] = 0;
  plVar8[8] = 0;
  plVar8[9] = 0;
  plVar8[10] = 0;
  plVar8[0xb] = 0;
  plVar8[0xc] = 0;
  *(undefined1 *)(plVar8 + 0xd) = 0;
  func_0x04aa75f0(plVar8 + 0xe,&uStack_5b8,&UNK_01254d89);
  *(undefined1 *)(plVar8 + 0x10) = 0;
  plVar9 = plVar8 + 0x11;
  plVar8[0x11] = 0;
  plVar8[0x12] = 0;
  plVar8[0x13] = 0;
  plVar8[0x14] = 0;
  plVar8[0x15] = 0;
  plVar8[0x16] = 0;
  plVar8[0x17] = 0xffffffff;
  plVar8[0x26] = 0;
  plVar8[0x27] = 0;
  plVar8[0x18] = 0;
  plVar8[0x19] = 0;
  plVar8[0x1a] = 0;
  plVar8[0x1b] = 0;
  plVar8[0x1c] = 0;
  plVar8[0x1d] = 0;
  plVar8[0x1e] = 0;
  plVar8[0x1f] = 0;
  plVar8[4] = (long)&UNK_0f46f818;
  pplVar15 = (long **)(plVar8 + 0x2e);
  plVar8[0x2e] = 0;
  plVar8[0x2f] = 0;
  *(undefined1 *)(plVar8 + 0x36) = 0;
  if (pplVar15 != &plStack_608) {
    if (plStack_608 == (long *)0x0) {
      plVar10 = (long *)0x0;
    }
    else {
      (*(code *)*plStack_608)(&plStack_608,pplVar15);
      plVar10 = plStack_608;
    }
    plStack_608 = (long *)0x0;
    *pplVar15 = plVar10;
  }
  puVar2 = (uint *)(plVar8 + 0x12);
  if (plVar9 != (long *)&DAT_0f552108) {
    if ((*puVar2 & 1) == 0) {
      if ((_DAT_0f552110 & 1) == 0) {
        plVar8[0x14] = _DAT_0f552120;
        uVar6 = uRam000000000f55211c;
        uVar5 = _DAT_0f552118;
        uVar4 = uRam000000000f552114;
        *puVar2 = _DAT_0f552110;
        *(undefined4 *)((long)plVar8 + 0x94) = uVar4;
        *(undefined4 *)(plVar8 + 0x13) = uVar5;
        *(undefined4 *)((long)plVar8 + 0x9c) = uVar6;
      }
      else {
        FUN_04885070(puVar2,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
      }
    }
    else {
      bVar17 = (_DAT_0f552110 & 1) != 0;
      lVar16 = 0xf552111;
      if (bVar17) {
        lVar16 = _DAT_0f552120;
      }
      uVar14 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
      if (bVar17) {
        uVar14 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
      }
      func_0x04885120(puVar2,lVar16,uVar14);
    }
  }
  plVar10 = plVar8 + 1;
  plVar8[0x11] = _DAT_0f552108;
  plVar8[0x15] = 0;
  if (plStack_608 != (long *)0x0) {
    (*(code *)plStack_608[1])(&plStack_608);
  }
  LOCK();
  *plVar10 = *plVar10 + 1;
  UNLOCK();
  puStack_590 = puVar2;
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar12 == (long *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  plVar12[1] = 0;
  plVar12[2] = 0;
  *plVar12 = (long)&UNK_0f46f910;
  plVar12[6] = 0;
  plVar12[7] = 0;
  plVar12[4] = (long)&UNK_0f46f960;
  plVar12[0xe] = (long)(plVar8 + 4);
  plVar12[0xf] = (long)plVar8;
  LOCK();
  plVar8[1] = plVar8[1] + 1;
  UNLOCK();
  plStack_608 = plVar12 + 4;
  plStack_600 = plVar12;
  plStack_5c0 = plVar8 + 4;
  puVar11 = (undefined4 *)func_0x050453e0(param_1,&plStack_588,1);
  plVar13 = *(long **)(puVar11 + 0x24);
  if (plVar13 < *(long **)(puVar11 + 0x26)) {
    plVar13[2] = 0;
    plVar13[3] = 0;
    *plVar13 = 0;
    plVar13[1] = 0;
    plVar13[4] = 0;
    if (plVar13 == plVar9) {
LAB_0d407918:
      *plVar13 = *plVar9;
      plVar13[5] = (long)(plVar12 + 4);
      plVar13[6] = (long)plVar12;
LAB_0d40798f:
      LOCK();
      plVar12[1] = plVar12[1] + 1;
      UNLOCK();
    }
    else {
      if ((*puStack_590 & 1) == 0) {
        plVar13[3] = *(long *)(puStack_590 + 4);
        lVar16 = *(long *)(puStack_590 + 2);
        plVar13[1] = *(long *)puStack_590;
        plVar13[2] = lVar16;
        goto LAB_0d407918;
      }
      FUN_04885070(plVar13 + 1,plVar8[0x14],plVar8[0x13]);
      *plVar13 = *plVar9;
      plVar13[5] = (long)plStack_608;
      plVar13[6] = (long)plStack_600;
      plVar12 = plStack_600;
      if (plStack_600 != (long *)0x0) goto LAB_0d40798f;
    }
    plVar13 = plVar13 + 7;
    *(long **)(puVar11 + 0x24) = plVar13;
  }
  else {
    plVar13 = (long *)func_0x05048ae0(puVar11 + 0x22,plVar9,&plStack_608);
  }
  plVar9 = plStack_5c0;
  *(long **)(puVar11 + 0x24) = plVar13;
  uVar4 = *puVar11;
  uVar5 = puVar11[1];
  uVar6 = puVar11[2];
  uVar7 = puVar11[3];
  if (*(long *)(puVar11 + 2) != 0) {
    LOCK();
    plVar12 = (long *)(*(long *)(puVar11 + 2) + 8);
    *plVar12 = *plVar12 + 1;
    UNLOCK();
  }
  plVar12 = (long *)plVar8[0xf];
  *(undefined4 *)(plVar8 + 0xe) = uVar4;
  *(undefined4 *)((long)plVar8 + 0x74) = uVar5;
  *(undefined4 *)(plVar8 + 0xf) = uVar6;
  *(undefined4 *)((long)plVar8 + 0x7c) = uVar7;
  if (plVar12 != (long *)0x0) {
    LOCK();
    plVar13 = plVar12 + 1;
    lVar16 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      func_0x0412c2d0(plVar12);
    }
  }
  plVar12 = plStack_600;
  *(undefined1 *)(plVar8 + 0x10) = *(undefined1 *)((long)puVar11 + 0xa1);
  if (plStack_600 != (long *)0x0) {
    LOCK();
    plVar13 = plStack_600 + 1;
    lVar16 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*plStack_600 + 0x10))(plStack_600);
      func_0x0412c2d0(plVar12);
    }
  }
  LOCK();
  lVar16 = *plVar10;
  *plVar10 = *plVar10 + -1;
  UNLOCK();
  if (lVar16 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x0412c2d0(plVar8);
    LOCK();
    lVar16 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar16 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
  }
  if (lVar16 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x0412c2d0(plVar8);
  }
  if (plStack_368 != (long *)0x0) {
    (*(code *)plStack_368[1])(&plStack_368);
  }
  if ((bStack_580 & 1) != 0) {
    func_0x0412a280(uStack_570,
                    CONCAT26(uStack_57a,CONCAT51(uStack_57f,bStack_580)) & 0xfffffffffffffffe);
  }
  uStack_5f8 = 0;
  uStack_5f0 = 0;
  pplStack_5e8 = (long **)0x0;
  plStack_600 = (long *)0x6e696d06;
  plStack_608 = (long *)0xd8b3cd186b8cadc3;
  lStack_b8 = 0;
  uStack_b0 = 0;
  plVar8 = (long *)func_0x0d4095c0(plVar9,&plStack_608,&lStack_b8);
  plVar8[0x12] = 3;
  plVar8[0x13] = 3;
  if (lStack_b8 != 0) {
    (**(code **)(lStack_b8 + 8))(&lStack_b8);
  }
  if (((ulong)plStack_600 & 1) != 0) {
    func_0x0412a280(uStack_5f0,(ulong)plStack_600 & 0xfffffffffffffffe);
  }
  uStack_1e0 = 0;
  puStack_1e8 = &UNK_0f46fc00;
  plVar10 = (long *)func_0x0d40a300(plVar8,0,0,&puStack_1e8);
  uStack_408 = 0;
  uStack_400 = 0;
  uStack_3f8 = 0;
  (**(code **)(*plVar10 + 0x10))(plVar10,&uStack_408);
  if ((uStack_408 & 1) != 0) {
    func_0x0412a280(uStack_3f8,uStack_408 & 0xfffffffffffffffe);
  }
  if (puStack_1e8 != (undefined *)0x0) {
    (**(code **)(puStack_1e8 + 8))(&puStack_1e8);
  }
  uStack_220 = 0;
  puStack_228 = &UNK_0f46fc18;
  plVar10 = (long *)func_0x0d40a300(plVar8,1,1,&puStack_228);
  uStack_428 = 0;
  uStack_420 = 0;
  uStack_418 = 0;
  (**(code **)(*plVar10 + 0x10))(plVar10,&uStack_428);
  if ((uStack_428 & 1) != 0) {
    func_0x0412a280(uStack_418,uStack_428 & 0xfffffffffffffffe);
  }
  if (puStack_228 != (undefined *)0x0) {
    (**(code **)(puStack_228 + 8))(&puStack_228);
  }
  uStack_260 = 0;
  puStack_268 = &UNK_0f46fc30;
  plVar10 = (long *)func_0x0d40a300(plVar8,2,2,&puStack_268);
  uStack_448 = 0;
  uStack_440 = 0;
  uStack_438 = 0;
  (**(code **)(*plVar10 + 0x10))(plVar10,&uStack_448);
  if ((uStack_448 & 1) != 0) {
    func_0x0412a280(uStack_438,uStack_448 & 0xfffffffffffffffe);
  }
  if (puStack_268 != (undefined *)0x0) {
    (**(code **)(puStack_268 + 8))(&puStack_268);
  }
  uStack_468 = 0;
  uStack_460 = 0;
  uStack_458 = 0;
  (**(code **)(*plVar8 + 0x10))(plVar8,&uStack_468);
  if ((uStack_468 & 1) != 0) {
    func_0x0412a280(uStack_458,uStack_468 & 0xfffffffffffffffe);
  }
  uStack_5f8 = 0;
  uStack_5f0 = 0;
  pplStack_5e8 = (long **)0x0;
  plStack_600 = (long *)0x78616d06;
  plStack_608 = (long *)0xd8b3c5186b8ca06d;
  lStack_f8 = 0;
  uStack_f0 = 0;
  plVar8 = (long *)func_0x0d4095c0(plVar9,&plStack_608,&lStack_f8);
  plVar8[0x12] = 3;
  plVar8[0x13] = 3;
  if (lStack_f8 != 0) {
    (**(code **)(lStack_f8 + 8))(&lStack_f8);
  }
  if (((ulong)plStack_600 & 1) != 0) {
    func_0x0412a280(uStack_5f0,(ulong)plStack_600 & 0xfffffffffffffffe);
  }
  uStack_2a0 = 0;
  puStack_2a8 = &UNK_0f46fc48;
  plVar10 = (long *)func_0x0d40a300(plVar8,0,0,&puStack_2a8);
  uStack_488 = 0;
  uStack_480 = 0;
  uStack_478 = 0;
  (**(code **)(*plVar10 + 0x10))(plVar10,&uStack_488);
  if ((uStack_488 & 1) != 0) {
    func_0x0412a280(uStack_478,uStack_488 & 0xfffffffffffffffe);
  }
  if (puStack_2a8 != (undefined *)0x0) {
    (**(code **)(puStack_2a8 + 8))(&puStack_2a8);
  }
  uStack_2e0 = 0;
  puStack_2e8 = &UNK_0f46fc60;
  plVar10 = (long *)func_0x0d40a300(plVar8,1,1,&puStack_2e8);
  uStack_4a8 = 0;
  uStack_4a0 = 0;
  uStack_498 = 0;
  (**(code **)(*plVar10 + 0x10))(plVar10,&uStack_4a8);
  if ((uStack_4a8 & 1) != 0) {
    func_0x0412a280(uStack_498,uStack_4a8 & 0xfffffffffffffffe);
  }
  if (puStack_2e8 != (undefined *)0x0) {
    (**(code **)(puStack_2e8 + 8))(&puStack_2e8);
  }
  uStack_320 = 0;
  puStack_328 = &UNK_0f46fc78;
  plVar10 = (long *)func_0x0d40a300(plVar8,2,2,&puStack_328);
  uStack_4c8 = 0;
  uStack_4c0 = 0;
  uStack_4b8 = 0;
  (**(code **)(*plVar10 + 0x10))(plVar10,&uStack_4c8);
  if ((uStack_4c8 & 1) != 0) {
    func_0x0412a280(uStack_4b8,uStack_4c8 & 0xfffffffffffffffe);
  }
  if (puStack_328 != (undefined *)0x0) {
    (**(code **)(puStack_328 + 8))(&puStack_328);
  }
  uStack_4e8 = 0;
  uStack_4e0 = 0;
  uStack_4d8 = 0;
  (**(code **)(*plVar8 + 0x10))(plVar8,&uStack_4e8);
  if ((uStack_4e8 & 1) != 0) {
    func_0x0412a280(uStack_4d8,uStack_4e8 & 0xfffffffffffffffe);
  }
  uStack_508 = 0;
  uStack_500 = 0;
  uStack_4f8 = 0;
  (**(code **)(*plVar9 + 0x10))(plVar9,&uStack_508);
  if ((uStack_508 & 1) != 0) {
    func_0x0412a280(uStack_4f8,uStack_508 & 0xfffffffffffffffe);
  }
  uStack_5a4 = 0;
  uStack_5a3 = 0;
  uStack_5a1 = 0;
  uStack_5a0 = 0;
  uStack_59f = 0;
  uStack_59d = 0;
  uStack_598 = 0;
  bStack_5b0 = 0x16;
  uStack_5af = 0x72616573;
  uStack_5ab = 0x6863;
  uStack_5a9 = 0x5f;
  uStack_5a8 = 0x73697861;
  uStack_5b8 = 0x6bd6fd8994f1372b;
  uStack_130 = 0;
  bStack_580 = 0;
  uStack_57f = 0;
  uStack_57a = 0;
  lStack_138 = 0;
  plStack_588 = (long *)&UNK_0f46fc90;
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1e0);
  if (plVar8 == (long *)0x0) {
    FUN_0eec74c0(0x1e0,0);
  }
  plStack_608 = plStack_588;
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0f469698;
  plStack_600 = (long *)0x0;
  plStack_588 = (long *)0x0;
  plVar8[4] = (long)&UNK_0f2ccd78;
  plVar8[5] = 0;
  plVar8[6] = 0;
  plVar8[7] = 0;
  plVar8[8] = 0;
  plVar8[9] = 0;
  plVar8[10] = 0;
  plVar8[0xb] = 0;
  plVar8[0xc] = 0;
  *(undefined1 *)(plVar8 + 0xd) = 0;
  func_0x04aa75f0(plVar8 + 0xe,&uStack_3c8,&UNK_01254d89);
  *(undefined1 *)(plVar8 + 0x10) = 0;
  plVar9 = plVar8 + 0x11;
  plVar8[0x11] = 0;
  plVar8[0x12] = 0;
  plVar8[0x13] = 0;
  plVar8[0x14] = 0;
  plVar8[0x15] = 0;
  plVar8[0x16] = 0;
  plVar8[0x17] = 0xffffffff;
  plVar8[0x26] = 0;
  plVar8[0x27] = 0;
  plVar8[0x18] = 0;
  plVar8[0x19] = 0;
  plVar8[0x1a] = 0;
  plVar8[0x1b] = 0;
  plVar8[0x1c] = 0;
  plVar8[0x1d] = 0;
  plVar8[0x1e] = 0;
  plVar8[0x1f] = 0;
  plVar8[4] = (long)&UNK_0f4696e8;
  plVar8[0x2e] = 0;
  plVar8[0x2f] = 0;
  if (plStack_608 == (long *)0x0) {
    plVar10 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_608)(&plStack_608,plVar8 + 0x2e);
    plVar10 = plStack_608;
  }
  plStack_608 = (long *)0x0;
  plVar8[0x2e] = (long)plVar10;
  plVar8[0x36] = 0;
  plVar8[0x37] = 0;
  plVar8[0x38] = 0;
  plVar8[0x39] = 0;
  *(undefined4 *)(plVar8 + 0x3a) = 0x3f800000;
  *(undefined1 *)(plVar8 + 0x3b) = 0;
  puVar2 = (uint *)(plVar8 + 0x12);
  if (plVar9 != (long *)&DAT_0f551fe8) {
    if ((*puVar2 & 1) == 0) {
      if ((_DAT_0f551ff0 & 1) == 0) {
        plVar8[0x14] = _DAT_0f552000;
        uVar6 = uRam000000000f551ffc;
        uVar5 = _DAT_0f551ff8;
        uVar4 = uRam000000000f551ff4;
        *puVar2 = _DAT_0f551ff0;
        *(undefined4 *)((long)plVar8 + 0x94) = uVar4;
        *(undefined4 *)(plVar8 + 0x13) = uVar5;
        *(undefined4 *)((long)plVar8 + 0x9c) = uVar6;
      }
      else {
        FUN_04885070(puVar2,_DAT_0f552000,CONCAT44(uRam000000000f551ffc,_DAT_0f551ff8));
      }
    }
    else {
      bVar17 = (_DAT_0f551ff0 & 1) != 0;
      lVar16 = 0xf551ff1;
      if (bVar17) {
        lVar16 = _DAT_0f552000;
      }
      uVar14 = (ulong)((_DAT_0f551ff0 & 0xff) >> 1);
      if (bVar17) {
        uVar14 = CONCAT44(uRam000000000f551ffc,_DAT_0f551ff8);
      }
      func_0x04885120(puVar2,lVar16,uVar14);
    }
  }
  plVar8[0x11] = _DAT_0f551fe8;
  plVar8[0x15] = 0;
  if (plStack_608 != (long *)0x0) {
    (*(code *)plStack_608[1])(&plStack_608);
  }
  plVar10 = plVar8 + 1;
  if (plStack_588 != (long *)0x0) {
    (*(code *)plStack_588[1])(&plStack_588);
  }
  LOCK();
  *plVar10 = *plVar10 + 1;
  UNLOCK();
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar12 == (long *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  plVar12[1] = 0;
  plVar12[2] = 0;
  *plVar12 = (long)&UNK_0f4697c8;
  plVar12[6] = 0;
  plVar12[7] = 0;
  plVar12[4] = (long)&UNK_0f469818;
  plVar12[0xe] = (long)(plVar8 + 4);
  plVar12[0xf] = (long)plVar8;
  LOCK();
  plVar8[1] = plVar8[1] + 1;
  UNLOCK();
  plStack_608 = plVar12 + 4;
  plStack_600 = plVar12;
  plStack_5c0 = plVar8 + 4;
  puStack_590 = puVar2;
  puVar11 = (undefined4 *)func_0x050453e0(param_1,&uStack_5b8,1);
  plVar13 = *(long **)(puVar11 + 0x24);
  if (plVar13 < *(long **)(puVar11 + 0x26)) {
    plVar13[2] = 0;
    plVar13[3] = 0;
    *plVar13 = 0;
    plVar13[1] = 0;
    plVar13[4] = 0;
    if (plVar13 == plVar9) {
LAB_0d4083c7:
      *plVar13 = *plVar9;
      plVar13[5] = (long)(plVar12 + 4);
      plVar13[6] = (long)plVar12;
LAB_0d408433:
      LOCK();
      plVar12[1] = plVar12[1] + 1;
      UNLOCK();
    }
    else {
      if ((*puStack_590 & 1) == 0) {
        plVar13[3] = *(long *)(puStack_590 + 4);
        lVar16 = *(long *)(puStack_590 + 2);
        plVar13[1] = *(long *)puStack_590;
        plVar13[2] = lVar16;
        goto LAB_0d4083c7;
      }
      FUN_04885070(plVar13 + 1,plVar8[0x14],plVar8[0x13]);
      *plVar13 = *plVar9;
      plVar13[5] = (long)plStack_608;
      plVar13[6] = (long)plStack_600;
      plVar12 = plStack_600;
      if (plStack_600 != (long *)0x0) goto LAB_0d408433;
    }
    plVar13 = plVar13 + 7;
    *(long **)(puVar11 + 0x24) = plVar13;
  }
  else {
    plVar13 = (long *)func_0x05048ae0(puVar11 + 0x22,plVar9,&plStack_608);
  }
  *(long **)(puVar11 + 0x24) = plVar13;
  uVar4 = *puVar11;
  uVar5 = puVar11[1];
  uVar6 = puVar11[2];
  uVar7 = puVar11[3];
  if (*(long *)(puVar11 + 2) != 0) {
    LOCK();
    plVar9 = (long *)(*(long *)(puVar11 + 2) + 8);
    *plVar9 = *plVar9 + 1;
    UNLOCK();
  }
  plVar9 = (long *)plVar8[0xf];
  *(undefined4 *)(plVar8 + 0xe) = uVar4;
  *(undefined4 *)((long)plVar8 + 0x74) = uVar5;
  *(undefined4 *)(plVar8 + 0xf) = uVar6;
  *(undefined4 *)((long)plVar8 + 0x7c) = uVar7;
  if (plVar9 != (long *)0x0) {
    LOCK();
    plVar12 = plVar9 + 1;
    lVar16 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      func_0x0412c2d0(plVar9);
    }
  }
  plVar9 = plStack_600;
  *(undefined1 *)(plVar8 + 0x10) = *(undefined1 *)((long)puVar11 + 0xa1);
  if (plStack_600 != (long *)0x0) {
    LOCK();
    plVar12 = plStack_600 + 1;
    lVar16 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*plStack_600 + 0x10))(plStack_600);
      func_0x0412c2d0(plVar9);
    }
  }
  LOCK();
  lVar16 = *plVar10;
  *plVar10 = *plVar10 + -1;
  UNLOCK();
  if (lVar16 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x0412c2d0(plVar8);
    LOCK();
    lVar16 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar16 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
  }
  if (lVar16 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x0412c2d0(plVar8);
  }
  plVar8 = plStack_5c0;
  plStack_608 = (long *)CONCAT44(plStack_608._4_4_,0x782d04);
  func_0x0d40af70(plStack_5c0,&plStack_608,0);
  plStack_588 = (long *)CONCAT44(plStack_588._4_4_,0x782b04);
  func_0x0d40af70(plVar8,&plStack_588,1);
  uStack_3c8 = 4;
  uStack_3c7 = 0x792d;
  uStack_3c5 = 0;
  func_0x0d40af70(plVar8,&uStack_3c8,2);
  uStack_380 = 4;
  uStack_37f = 0x792b;
  uStack_37d = 0;
  func_0x0d40af70(plVar8,&uStack_380,3);
  uStack_398 = 4;
  uStack_397 = 0x7a2d;
  uStack_395 = 0;
  func_0x0d40af70(plVar8,&uStack_398,4);
  uStack_3b0 = 4;
  uStack_3af = 0x7a2b;
  uStack_3ad = 0;
  func_0x0d40af70(plVar8,&uStack_3b0,5);
  uStack_528 = 0;
  uStack_520 = 0;
  uStack_518 = 0;
  (**(code **)(*plVar8 + 0x10))(plVar8,&uStack_528);
  if ((uStack_528 & 1) != 0) {
    func_0x0412a280(uStack_518,uStack_528 & 0xfffffffffffffffe);
  }
  if (lStack_138 != 0) {
    (**(code **)(lStack_138 + 8))(&lStack_138);
  }
  if ((bStack_5b0 & 1) != 0) {
    func_0x0412a280(CONCAT53(uStack_59d,CONCAT21(uStack_59f,uStack_5a0)),
                    CONCAT17(uStack_5a9,CONCAT25(uStack_5ab,CONCAT41(uStack_5af,bStack_5b0))) &
                    0xfffffffffffffffe);
  }
  uStack_59d = 0;
  uStack_598 = 0;
  bStack_5b0 = 0x24;
  uStack_5af = _DAT_0131d886;
  uStack_5ab = (undefined2)_UNK_0131d88a;
  uStack_5a9 = (undefined1)((uint)_UNK_0131d88a >> 0x10);
  uStack_5a8._1_3_ = (undefined3)_UNK_0131d88e;
  uStack_5a8 = CONCAT31(uStack_5a8._1_3_,(char)((uint)_UNK_0131d88a >> 0x18));
  uStack_5a4 = (undefined1)((uint)_UNK_0131d88e >> 0x18);
  uStack_5a3 = (undefined2)_UNK_0131d892;
  uStack_5a1 = (undefined1)((uint)_UNK_0131d892 >> 0x10);
  uStack_5a0 = (undefined1)((uint)_UNK_0131d892 >> 0x18);
  uStack_59f = 0x7365;
  uStack_5b8 = 0x9091253e95fe90e6;
  uStack_170 = 0;
  bStack_580 = 0;
  uStack_57f = 0;
  uStack_57a = 0;
  lStack_178 = 0;
  plStack_588 = (long *)&UNK_0f46fca8;
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar8 == (long *)0x0) {
    FUN_0eec74c0(0x1c0,0);
  }
  plStack_608 = plStack_588;
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0f469878;
  plStack_600 = (long *)0x0;
  plStack_588 = (long *)0x0;
  plVar8[4] = (long)&UNK_0f2ccd78;
  plVar8[5] = 0;
  plVar8[6] = 0;
  plVar8[7] = 0;
  plVar8[8] = 0;
  plVar8[9] = 0;
  plVar8[10] = 0;
  plVar8[0xb] = 0;
  plVar8[0xc] = 0;
  *(undefined1 *)(plVar8 + 0xd) = 0;
  func_0x04aa75f0(plVar8 + 0xe,&uStack_3c8,&UNK_01254d89);
  *(undefined1 *)(plVar8 + 0x10) = 0;
  plVar9 = plVar8 + 0x11;
  plVar8[0x11] = 0;
  plVar8[0x12] = 0;
  plVar8[0x13] = 0;
  plVar8[0x14] = 0;
  plVar8[0x15] = 0;
  plVar8[0x16] = 0;
  plVar8[0x17] = 0xffffffff;
  plVar8[0x26] = 0;
  plVar8[0x27] = 0;
  plVar8[0x18] = 0;
  plVar8[0x19] = 0;
  plVar8[0x1a] = 0;
  plVar8[0x1b] = 0;
  plVar8[0x1c] = 0;
  plVar8[0x1d] = 0;
  plVar8[0x1e] = 0;
  plVar8[0x1f] = 0;
  plVar8[4] = (long)&UNK_0f4698c8;
  plVar8[0x2e] = 0x7fffffff80000000;
  *(undefined1 *)(plVar8 + 0x2f) = 1;
  plVar8[0x30] = 0;
  plVar8[0x31] = 0;
  if (plStack_608 == (long *)0x0) {
    plVar10 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_608)(&plStack_608,plVar8 + 0x30);
    plVar10 = plStack_608;
  }
  plStack_608 = (long *)0x0;
  plVar8[0x30] = (long)plVar10;
  puVar2 = (uint *)(plVar8 + 0x12);
  if (plVar9 == (long *)&DAT_0f552078) {
    plVar8[0x15] = 0;
  }
  else {
    if ((*puVar2 & 1) == 0) {
      if ((_DAT_0f552080 & 1) == 0) {
        plVar8[0x14] = _DAT_0f552090;
        uVar6 = uRam000000000f55208c;
        uVar5 = _DAT_0f552088;
        uVar4 = uRam000000000f552084;
        *puVar2 = _DAT_0f552080;
        *(undefined4 *)((long)plVar8 + 0x94) = uVar4;
        *(undefined4 *)(plVar8 + 0x13) = uVar5;
        *(undefined4 *)((long)plVar8 + 0x9c) = uVar6;
      }
      else {
        FUN_04885070(puVar2,_DAT_0f552090,CONCAT44(uRam000000000f55208c,_DAT_0f552088));
      }
    }
    else {
      bVar17 = (_DAT_0f552080 & 1) != 0;
      lVar16 = 0xf552081;
      if (bVar17) {
        lVar16 = _DAT_0f552090;
      }
      uVar14 = (ulong)((_DAT_0f552080 & 0xff) >> 1);
      if (bVar17) {
        uVar14 = CONCAT44(uRam000000000f55208c,_DAT_0f552088);
      }
      func_0x04885120(puVar2,lVar16,uVar14);
    }
    plVar8[0x11] = _DAT_0f552078;
    plVar8[0x15] = 0;
    if (plStack_608 != (long *)0x0) {
      (*(code *)plStack_608[1])(&plStack_608);
    }
  }
  plVar10 = plVar8 + 1;
  if (plStack_588 != (long *)0x0) {
    (*(code *)plStack_588[1])(&plStack_588);
  }
  LOCK();
  *plVar10 = *plVar10 + 1;
  UNLOCK();
  puStack_590 = puVar2;
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar12 == (long *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  plVar12[1] = 0;
  plVar12[2] = 0;
  *plVar12 = (long)&UNK_0f4699a8;
  plVar12[6] = 0;
  plVar12[7] = 0;
  plVar12[4] = (long)&UNK_0f4699f8;
  plVar12[0xe] = (long)(plVar8 + 4);
  plVar12[0xf] = (long)plVar8;
  LOCK();
  plVar8[1] = plVar8[1] + 1;
  UNLOCK();
  plStack_608 = plVar12 + 4;
  plStack_600 = plVar12;
  plStack_5c0 = plVar8 + 4;
  puVar11 = (undefined4 *)func_0x050453e0(param_1,&uStack_5b8,0);
  plVar13 = *(long **)(puVar11 + 0x24);
  if (*(long **)(puVar11 + 0x26) <= plVar13) {
    plVar13 = (long *)func_0x05048ae0(puVar11 + 0x22,plVar9,&plStack_608);
    goto LAB_0d408a99;
  }
  plVar13[2] = 0;
  plVar13[3] = 0;
  *plVar13 = 0;
  plVar13[1] = 0;
  plVar13[4] = 0;
  if (plVar13 == plVar9) {
LAB_0d408a0d:
    *plVar13 = *plVar9;
    plVar13[5] = (long)(plVar12 + 4);
    plVar13[6] = (long)plVar12;
LAB_0d408a89:
    LOCK();
    plVar12[1] = plVar12[1] + 1;
    UNLOCK();
  }
  else {
    if ((*puStack_590 & 1) == 0) {
      plVar13[3] = *(long *)(puStack_590 + 4);
      lVar16 = *(long *)(puStack_590 + 2);
      plVar13[1] = *(long *)puStack_590;
      plVar13[2] = lVar16;
      goto LAB_0d408a0d;
    }
    FUN_04885070(plVar13 + 1,plVar8[0x14],plVar8[0x13]);
    *plVar13 = *plVar9;
    plVar13[5] = (long)plStack_608;
    plVar13[6] = (long)plStack_600;
    plVar12 = plStack_600;
    if (plStack_600 != (long *)0x0) goto LAB_0d408a89;
  }
  plVar13 = plVar13 + 7;
  *(long **)(puVar11 + 0x24) = plVar13;
LAB_0d408a99:
  plVar9 = plStack_5c0;
  *(long **)(puVar11 + 0x24) = plVar13;
  uVar4 = *puVar11;
  uVar5 = puVar11[1];
  uVar6 = puVar11[2];
  uVar7 = puVar11[3];
  if (*(long *)(puVar11 + 2) != 0) {
    LOCK();
    plVar12 = (long *)(*(long *)(puVar11 + 2) + 8);
    *plVar12 = *plVar12 + 1;
    UNLOCK();
  }
  plVar12 = (long *)plVar8[0xf];
  *(undefined4 *)(plVar8 + 0xe) = uVar4;
  *(undefined4 *)((long)plVar8 + 0x74) = uVar5;
  *(undefined4 *)(plVar8 + 0xf) = uVar6;
  *(undefined4 *)((long)plVar8 + 0x7c) = uVar7;
  if (plVar12 != (long *)0x0) {
    LOCK();
    plVar13 = plVar12 + 1;
    lVar16 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      func_0x0412c2d0(plVar12);
    }
  }
  plVar12 = plStack_600;
  *(undefined1 *)(plVar8 + 0x10) = *(undefined1 *)((long)puVar11 + 0xa1);
  if (plStack_600 != (long *)0x0) {
    LOCK();
    plVar13 = plStack_600 + 1;
    lVar16 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*plStack_600 + 0x10))(plStack_600);
      func_0x0412c2d0(plVar12);
    }
  }
  LOCK();
  lVar16 = *plVar10;
  *plVar10 = *plVar10 + -1;
  UNLOCK();
  if (lVar16 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x0412c2d0(plVar8);
    LOCK();
    lVar16 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar16 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
  }
  if (lVar16 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x0412c2d0(plVar8);
  }
  *(undefined4 *)(plVar8 + 0x2e) = 1;
  auStack_548[0] = 0;
  auStack_548[1] = 0;
  auStack_548[2] = 0;
  (**(code **)(plVar8[4] + 0x10))(plVar9,auStack_548);
  if ((auStack_548[0] & 1) != 0) {
    func_0x0412a280(auStack_548[2],auStack_548[0] & 0xfffffffffffffffe);
  }
  if (lStack_178 != 0) {
    (**(code **)(lStack_178 + 8))(&lStack_178);
  }
  if ((bStack_5b0 & 1) != 0) {
    func_0x0412a280(CONCAT53(uStack_59d,CONCAT21(uStack_59f,uStack_5a0)),
                    CONCAT17(uStack_5a9,CONCAT25(uStack_5ab,CONCAT41(uStack_5af,bStack_5b0))) &
                    0xfffffffffffffffe);
  }
  return;
}



/* ---- referenced strings ----
 * 0x1207cf7  eature_reference
 * 0x131d886  required_successes
 */
