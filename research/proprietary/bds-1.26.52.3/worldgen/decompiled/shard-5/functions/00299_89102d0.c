/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x8a102d0 (ELF vaddr 0x89102d0)
 * Label: caller-of-callee
 * Body:  [[08a102d0, 08a10564] [08a10570, 08a1072c] [08a10730, 08a10c7c] [08a10c80, 08a10d89] [08a10d8d, 08a10d9b] [08a10dee, 08a10dfa] [08a10ee7, 08a10f23]]
 * Ghidra: FUN_08a102d0
 */


/* WARNING: Removing unreachable block (ram,0x08a10ef8) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08a102d0(long **param_1,undefined8 param_2,long *param_3)

{
  ulong *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  ulong *puVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  ulong *puVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  ulong *puStack_3c8;
  ulong *puStack_3c0;
  ulong *puStack_3b8;
  ulong uStack_3a8;
  ulong uStack_3a0;
  ulong uStack_398;
  long *plStack_388;
  long *plStack_380;
  long *plStack_378;
  undefined4 uStack_370;
  uint uStack_36c;
  undefined1 auStack_368 [24];
  long *plStack_350;
  long **pplStack_348;
  long lStack_340;
  undefined1 auStack_338 [16];
  undefined8 uStack_328;
  undefined1 auStack_320 [16];
  byte bStack_310;
  undefined1 uStack_30f;
  undefined6 uStack_30e;
  undefined8 uStack_300;
  ulong *puStack_2f8;
  ulong *puStack_2f0;
  undefined1 auStack_2e8 [16];
  undefined1 auStack_2d8 [16];
  long alStack_2c8 [4];
  long *plStack_2a8;
  long **pplStack_298;
  undefined1 auStack_290 [24];
  undefined1 uStack_278;
  undefined1 uStack_268;
  undefined4 uStack_1e0;
  undefined1 uStack_1dc;
  uint uStack_120;
  undefined1 auStack_118 [192];
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  undefined1 auStack_40 [16];
  
  uStack_328 = param_2;
  lVar7 = (*(code *)(*param_1)[0x6a])(param_1,param_2,(char)param_3[2]);
  if (lVar7 == 0) {
    return;
  }
  if (*(char *)((long)param_3 + 0x51) == '\x01') {
    lVar4 = param_3[10];
    puVar2 = *(undefined8 **)(lVar7 + 8);
    lVar10 = puVar2[1];
    plVar17 = (long *)*puVar2;
    lVar16 = puVar2[1];
    if (lVar10 != 0) {
      LOCK();
      *(long *)(lVar10 + 0x10) = *(long *)(lVar10 + 0x10) + 1;
      UNLOCK();
      LOCK();
      *(long *)(lVar10 + 0x10) = *(long *)(lVar10 + 0x10) + 1;
      UNLOCK();
      func_0x0412c2d0(lVar10);
    }
    plStack_378 = (long *)CONCAT44(plStack_378._4_4_,*(undefined4 *)(lVar7 + 0x18));
    uStack_370 = (undefined4)param_3[6];
    uStack_36c = (uint)((char)lVar4 == '\x01');
    plStack_388 = plVar17;
    plStack_380 = (long *)lVar16;
    if ((param_1[0x11] == (long *)0x0) &&
       (cVar6 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_011a4bbc),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if (((char)*param_1[0x11] == '\0') &&
       (cVar6 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_011a4bbc),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    lVar7 = (**(code **)(*param_1[0x13] + 0x610))();
    uStack_278 = 1;
    pplStack_298 = &plStack_388;
    uStack_120 = 0xb;
    func_0x0c5e0360(lVar7,*(undefined8 *)(lVar7 + 0x68),&pplStack_298);
    if ((ulong)uStack_120 != 0xffffffff) {
      (**(code **)(&UNK_0f139bf0 + (ulong)uStack_120 * 8))(&puStack_3c8,&pplStack_298);
    }
    *(undefined1 *)((long)param_3 + 0x11) = 1;
    if (plStack_380 == (long *)0x0) {
      return;
    }
    func_0x0412c2d0();
    return;
  }
  if ((char)param_3[9] != '\x01') {
    func_0x0eede920(0,1,0,0xc,4,&UNK_01292bcb,0x807,&UNK_011bf3dc,(int)param_3[6]);
    return;
  }
  func_0x04863480(auStack_338,param_3 + 7);
  plStack_350 = param_3;
  if ((char)param_3[9] == '\0') {
LAB_08a10d5e:
    uVar8 = func_0x048a88b0();
    lVar7 = 0x20;
    if ((plStack_2a8 == param_3) || (lVar7 = 0x28, plStack_2a8 != (long *)0x0)) {
      (**(code **)(*plStack_2a8 + lVar7))();
    }
    func_0x08a10ff0(auStack_118);
    FUN_04886070(&puStack_3c8);
    func_0x04863610(auStack_338);
    func_0x0eee2d70(uVar8);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  cVar6 = func_0x04864270(param_3 + 7);
  plVar17 = plStack_350;
  if (cVar6 == '\0') {
    puVar2 = *(undefined8 **)(lVar7 + 8);
    lVar10 = puVar2[1];
    plVar9 = (long *)*puVar2;
    plVar17 = (long *)puVar2[1];
    if (lVar10 != 0) {
      LOCK();
      *(long *)(lVar10 + 0x10) = *(long *)(lVar10 + 0x10) + 1;
      UNLOCK();
      LOCK();
      *(long *)(lVar10 + 0x10) = *(long *)(lVar10 + 0x10) + 1;
      UNLOCK();
      func_0x0412c2d0();
    }
    plStack_378 = (long *)CONCAT44(plStack_378._4_4_,*(undefined4 *)(lVar7 + 0x18));
    uStack_370 = (undefined4)plStack_350[6];
    plStack_388 = plVar9;
    plStack_380 = plVar17;
    func_0x048635d0(auStack_368,auStack_338);
    if ((param_1[0x11] == (long *)0x0) &&
       (cVar6 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_011a4bbc),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if (((char)*param_1[0x11] == '\0') &&
       (cVar6 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_011a4bbc),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    lVar7 = (**(code **)(*param_1[0x13] + 0x610))();
    uStack_268 = 1;
    pplStack_298 = &plStack_388;
    uStack_120 = 0xc;
    func_0x0c5e0360(lVar7,*(undefined8 *)(lVar7 + 0x68),&pplStack_298);
    if ((ulong)uStack_120 != 0xffffffff) {
      (**(code **)(&UNK_0f139bf0 + (ulong)uStack_120 * 8))(&puStack_3c8,&pplStack_298);
    }
    func_0x04863610(auStack_368);
    if (plStack_380 != (long *)0x0) {
      func_0x0412c2d0();
    }
    goto LAB_08a10cd4;
  }
  lVar7 = plStack_350[2];
  pplStack_298 = param_1;
  func_0x0eee2f00(auStack_290,uStack_328,0xac);
  uStack_1e0 = (undefined4)plVar17[6];
  plStack_388 = (long *)0x0;
  plStack_380 = (long *)0x0;
  plStack_378 = (long *)0x0;
  puStack_3c8 = (ulong *)0x0;
  puStack_3c0 = (ulong *)0x0;
  puStack_3b8 = (ulong *)0x0;
  uStack_1dc = (char)lVar7;
  func_0x04865630(auStack_320,auStack_338);
  pplStack_348 = param_1;
  func_0x048656b0(auStack_2e8,auStack_338);
  plVar18 = (long *)0x0;
  lStack_340 = 0;
  plVar17 = (long *)0x0;
  plVar9 = param_3;
  while( true ) {
    cVar6 = func_0x04862c80(auStack_320,auStack_2e8);
    if (cVar6 != '\0') break;
    uVar8 = func_0x04862b80(auStack_320);
    cVar6 = func_0x04865490(uVar8);
    plVar19 = plVar17;
    if (cVar6 != '\0') {
      bStack_310 = 0;
      uStack_30f = 0;
      func_0x04863cb0(&uStack_3a8,uVar8,&bStack_310);
      if (puStack_3b8 <= puStack_3c0) {
        lVar7 = (long)puStack_3c0 - (long)puStack_3c8;
        plVar12 = (long *)0xaaaaaaaaaaaaaaab;
        uVar14 = (lVar7 >> 3) * -0x5555555555555555 + 1;
        if (uVar14 < 0xaaaaaaaaaaaaaab) {
          puStack_2f0 = puStack_3c8;
          lVar16 = (long)puStack_3b8 - (long)puStack_3c8;
          lVar10 = lVar16 >> 3;
          uVar15 = lVar10 * 0x5555555555555556;
          if (uVar14 < uVar15) {
            uVar14 = uVar15;
          }
          plVar12 = (long *)0x555555555555555;
          if (0x555555555555554 < (ulong)(lVar10 * -0x5555555555555555)) {
            uVar14 = 0xaaaaaaaaaaaaaaa;
          }
          if (uVar14 < 0xaaaaaaaaaaaaaab) {
            puVar11 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar14 * 0x18);
            if (puVar11 == (ulong *)0x0) {
              func_0x0eec74c0(uVar14 * 0x18,0);
            }
            puVar5 = puStack_2f0;
            puStack_2f8 = puVar11 + uVar14 * 3;
            *(ulong *)((long)puVar11 + lVar7 + 0x10) = uStack_398;
            *(ulong *)((long)puVar11 + lVar7) = uStack_3a8;
            ((ulong *)((long)puVar11 + lVar7))[1] = uStack_3a0;
            uStack_3a8 = 0;
            uStack_3a0 = 0;
            uStack_398 = 0;
            puVar1 = (ulong *)((long)puVar11 + lVar7 + 0x18);
            func_0x0eee2f00(puVar11,puStack_2f0,lVar7);
            puStack_3b8 = puStack_2f8;
            puStack_3c0 = puVar1;
            puStack_3c8 = puVar11;
            if ((puVar5 != (ulong *)0x0) &&
               (func_0x0412a280(puVar5,lVar16), puStack_3c0 = puVar1, (uStack_3a8 & 1) != 0)) {
              func_0x0412a280(uStack_398,uStack_3a8 & 0xfffffffffffffffe);
            }
            goto joined_r0x08a108b6;
          }
          plStack_388 = plVar17;
          FUN_04882eb0();
        }
        plStack_388 = plVar17;
        func_0x0488efe0();
        param_3 = plVar9;
LAB_08a10d46:
        plStack_388 = plVar17;
        FUN_04882eb0();
LAB_08a10d54:
        plStack_388 = plVar12;
        func_0x048af960();
        goto LAB_08a10d5e;
      }
      puStack_3c0[2] = uStack_398;
      *puStack_3c0 = uStack_3a8;
      puStack_3c0[1] = uStack_3a0;
      uStack_3a8 = 0;
      uStack_3a0 = 0;
      uStack_398 = 0;
      puStack_3c0 = puStack_3c0 + 3;
joined_r0x08a108b6:
      if ((bStack_310 & 1) != 0) {
        func_0x0412a280(uStack_300,
                        CONCAT62(uStack_30e,CONCAT11(uStack_30f,bStack_310)) & 0xfffffffffffffffe);
      }
      if (plVar18 < plStack_378) {
        *plVar18 = lStack_340;
        plVar18 = plVar18 + 1;
        plVar9 = plVar18;
        plStack_380 = plVar18;
      }
      else {
        param_3 = (long *)((long)plVar18 - (long)plVar17);
        uVar14 = ((long)param_3 >> 3) + 1;
        plVar12 = plVar17;
        if (0x1fffffffffffffff < uVar14) goto LAB_08a10d54;
        uVar13 = (long)plStack_378 - (long)plVar17;
        uVar15 = (long)uVar13 >> 2;
        if ((ulong)((long)uVar13 >> 2) <= uVar14) {
          uVar15 = uVar14;
        }
        if (0x7ffffffffffffff7 < uVar13) {
          uVar15 = 0x1fffffffffffffff;
        }
        if (0x1fffffffffffffff < uVar15) goto LAB_08a10d46;
        plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15 * 8);
        if (plVar9 == (long *)0x0) {
          func_0x0eec74c0(uVar15 * 8,0);
        }
        *(long *)((long)plVar9 + (long)param_3) = lStack_340;
        plVar18 = (long *)((long)param_3 + (long)plVar9 + 8);
        plVar19 = (long *)((long)plVar9 + (long)param_3 + ((long)param_3 >> 3) * -8);
        func_0x0eee2f00(plVar19,plVar17,param_3);
        plStack_380 = plVar18;
        plStack_378 = plVar9 + uVar15;
        if (plVar17 != (long *)0x0) {
          func_0x0412a280(plVar17,uVar13);
          plStack_380 = plVar18;
        }
      }
    }
    lStack_340 = lStack_340 + 1;
    func_0x04862ba0(auStack_320);
    plVar17 = plVar19;
  }
  plStack_388 = plVar17;
  func_0x04862b40(auStack_2e8);
  func_0x04862b40(auStack_320);
  if (((pplStack_348[0x4a] == (long *)0x0) || ((char)*pplStack_348[0x4a] != '\x01')) ||
     (puStack_3c8 == puStack_3c0)) {
    func_0x048635d0(auStack_2d8,auStack_338);
    func_0x08a11030(&pplStack_298,auStack_2d8,&puStack_3c8,&plStack_388);
    func_0x04863610(auStack_2d8);
    puVar11 = puStack_3c8;
  }
  else {
    lVar7 = (*(code *)(*pplStack_348)[0x6a])(pplStack_348,uStack_328,(char)plStack_350[2]);
    puVar11 = puStack_3c8;
    if (lVar7 != 0) {
      plVar9 = (long *)func_0x08a04660(pplStack_348 + 0x4a);
      func_0x0eee2f00(auStack_118,&pplStack_298,0xbd);
      plStack_48 = plStack_378;
      plStack_388 = (long *)0x0;
      plStack_380 = (long *)0x0;
      plStack_378 = (long *)0x0;
      plStack_58 = plVar17;
      plStack_50 = plVar18;
      func_0x048635d0(auStack_40,auStack_338);
      func_0x08a10f30(alStack_2c8,auStack_118);
      (**(code **)(*plVar9 + 0x18))(&uStack_3a8,plVar9,lVar7,0xe,&puStack_3c8,alStack_2c8);
      uVar14 = uStack_3a0;
      uStack_3a8 = 0;
      uStack_3a0 = 0;
      if ((uVar14 != 0) && (func_0x0412c2d0(), uStack_3a0 != 0)) {
        func_0x0412c2d0();
      }
      if (plStack_2a8 == alStack_2c8) {
        lVar7 = 0x20;
LAB_08a10d04:
        (**(code **)(*plStack_2a8 + lVar7))();
      }
      else {
        lVar7 = 0x28;
        if (plStack_2a8 != (long *)0x0) goto LAB_08a10d04;
      }
      func_0x08a10ff0(auStack_118);
      plVar17 = (long *)0x0;
      puVar11 = puStack_3c8;
    }
  }
  puStack_3c8 = puVar11;
  puVar1 = puStack_3c0;
  if (puVar11 != (ulong *)0x0) {
    for (; puVar11 != puVar1; puVar1 = puVar1 + -3) {
      if ((puVar1[-3] & 1) != 0) {
        func_0x0412a280(puVar1[-1],puVar1[-3] & 0xfffffffffffffffe);
      }
    }
    puStack_3c0 = puVar11;
    func_0x0412a280(puStack_3c8,(long)puStack_3b8 - (long)puStack_3c8);
  }
  if (plVar17 != (long *)0x0) {
    plStack_380 = plVar17;
    func_0x0412a280(plVar17,(long)plStack_378 - (long)plVar17);
  }
LAB_08a10cd4:
  *(undefined1 *)((long)plStack_350 + 0x11) = 1;
  func_0x04863610(auStack_338);
  return;
}


