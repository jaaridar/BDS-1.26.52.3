/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x497fe70 (ELF vaddr 0x487fe70)
 * Label: caller-of-seed
 * Body:  [[0497fe70, 04980ad9] [04980ae0, 04980d0a] [04980d10, 04980ec8] [04980ed0, 049810c3] [049810d0, 04982279] [04982280, 049822a2] [049822b0, 04982951] [04982960, 04982982] [04982990, 04985240]]
 * Ghidra: FUN_0497fe70
 */


/* WARNING: Removing unreachable block (ram,0x049804d7) */
/* WARNING: Removing unreachable block (ram,0x049804e9) */
/* WARNING: Removing unreachable block (ram,0x04980500) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0497fe70(long *param_1,long *param_2,undefined8 *param_3,long param_4,undefined8 *param_5,
                 ulong param_6,long *param_7,undefined1 param_8)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long **pplVar10;
  long lVar11;
  char *pcVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  short sVar20;
  long *plVar21;
  ulong uVar22;
  undefined4 uVar23;
  long *plVar24;
  undefined8 *puVar25;
  bool bVar26;
  undefined8 *puStack_740;
  long *plStack_738;
  long *plStack_728;
  long *plStack_720;
  long lStack_718;
  long *plStack_708;
  long *plStack_700;
  long **pplStack_6f8;
  long **pplStack_6f0;
  long **pplStack_6e8;
  undefined1 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  long *plStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  long lStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  long lStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  long lStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  long lStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  long lStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  long lStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  long lStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  long lStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  long lStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  long lStack_5d8;
  long lStack_5c8;
  long *plStack_5c0;
  long lStack_5b8;
  long *plStack_5a8;
  long *plStack_5a0;
  long *plStack_598;
  long lStack_588;
  long *plStack_580;
  long lStack_578;
  long *plStack_568;
  ulong uStack_560;
  undefined8 *puStack_558;
  undefined8 *puStack_550;
  undefined8 *puStack_548;
  long lStack_538;
  long *plStack_530;
  long lStack_528;
  long lStack_518;
  long *plStack_510;
  long lStack_508;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  undefined1 auStack_4e8 [8];
  long *plStack_4e0;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  long *plStack_4c8;
  uint auStack_4c0 [2];
  undefined8 uStack_4b8;
  ulong uStack_4b0;
  ulong uStack_4a8;
  undefined1 uStack_4a0;
  undefined8 uStack_498;
  undefined4 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  long lStack_460;
  undefined8 uStack_458;
  long lStack_450;
  long lStack_448;
  undefined1 uStack_440;
  undefined7 uStack_43f;
  undefined1 uStack_438;
  undefined7 uStack_437;
  undefined1 uStack_430;
  long **pplStack_428;
  undefined1 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  long lStack_408;
  undefined8 uStack_400;
  long *plStack_3f8;
  byte bStack_3f0;
  undefined1 auStack_3ef [15];
  long *plStack_3e0;
  byte bStack_3d0;
  undefined7 uStack_3cf;
  undefined8 uStack_3c0;
  byte bStack_3b0;
  undefined7 uStack_3af;
  undefined8 uStack_3a0;
  
  uStack_560 = param_6;
  if ((*param_2 == 0) &&
     (cVar3 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_01207b8e),
     cVar3 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((*(char *)*param_2 == '\0') &&
     (cVar3 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_01207b8e),
     cVar3 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  lVar6 = (**(code **)(*(long *)param_2[2] + 0x988))();
  auStack_4c0[0] = 0;
  func_0x0d88e390(&uStack_4b8,0xf72b850);
  uStack_490 = 0xffffffff;
  uStack_498 = 0xffffffffffffffff;
  uStack_488 = 0;
  uStack_480 = 0;
  uStack_478 = 0;
  uStack_470 = 0;
  uStack_468 = 0;
  lStack_460 = 0;
  uStack_458 = 0;
  lStack_450 = 0;
  lStack_448 = 0;
  uStack_440 = 0;
  uStack_43f = 0;
  uStack_438 = 0;
  uStack_437 = 0;
  uStack_430 = 0;
  uStack_418 = (char *)((ulong)uStack_418 & 0xffffffffffffff00);
  func_0x0d5d3c90(&lStack_460,7,&uStack_418);
  uStack_418 = (char *)((ulong)uStack_418 & 0xffffffffffffff00);
  func_0x0d5d3c90(&lStack_448,(_DAT_0f720fb8 - _DAT_0f720fb0 >> 3) * -0x5555555555555555,&uStack_418
                 );
  auStack_4c0[0] = CONCAT13(*(undefined1 *)(lVar6 + 0x30),(int3)auStack_4c0[0]) & 0xff0000ff;
  if ((DAT_0f5a2d88 == '\0') && (*(char *)(param_5 + 3) == '\0')) {
    bVar4 = 1;
    if (((DAT_0f5a2d76 & 1) != 0) && (*(char *)((long)param_5 + 7) == '\0')) {
      bVar4 = func_0x04fa7a10(param_5,0xf5a2d70);
      bVar4 = bVar4 ^ 1;
    }
  }
  else {
    bVar4 = 0;
  }
  auStack_4c0[0] = CONCAT31(auStack_4c0[0]._1_3_,bVar4);
  uStack_4b8 = *param_5;
  if ((uStack_4b0 >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_4b0 & 0xff00ffffffffffff) - 8);
  }
  uStack_4b0 = 0;
  uVar22 = param_5[1];
  if ((uVar22 & 0x80000000000000) != 0) {
    lVar11 = *(long *)((uVar22 & 0xff00ffffffffffff) - 8);
    lVar6 = lVar11 + 9;
    plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar6,8);
    if (lVar6 != 0 && plVar7 == (long *)0x0) {
      func_0x0eec74c0(lVar6,8);
    }
    *plVar7 = lVar11;
    memcpy(plVar7 + 1,uVar22 & 0xff00ffffffffffff,lVar11);
    *(undefined1 *)((long)plVar7 + lVar11 + 8) = 0;
    uVar22 = (ulong)(plVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack_4b0 = uVar22;
  if ((uStack_4a8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_4a8 & 0xff00ffffffffffff) - 8);
  }
  uStack_4a8 = 0;
  uVar22 = param_5[2];
  if ((uVar22 & 0x80000000000000) != 0) {
    lVar11 = *(long *)((uVar22 & 0xff00ffffffffffff) - 8);
    lVar6 = lVar11 + 9;
    plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar6,8);
    if (lVar6 != 0 && plVar7 == (long *)0x0) {
      func_0x0eec74c0(lVar6,8);
    }
    *plVar7 = lVar11;
    memcpy(plVar7 + 1,uVar22 & 0xff00ffffffffffff,lVar11);
    *(undefined1 *)((long)plVar7 + lVar11 + 8) = 0;
    uVar22 = (ulong)(plVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack_4a0 = *(undefined1 *)(param_5 + 3);
  uStack_4a8 = uVar22;
  func_0x049d2510(&lStack_460,param_3);
  plVar7 = param_3 + 3;
  func_0x049d2510(&lStack_448,plVar7);
  uStack_430 = *(undefined1 *)(param_3 + 6);
  if ((*param_2 == 0) &&
     (cVar3 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_01207b8e),
     cVar3 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((*(char *)*param_2 == '\0') &&
     (cVar3 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_01207b8e),
     cVar3 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  lVar6 = param_2[2];
  if ((*(long *)(lVar6 + 0x310) == 0) &&
     (cVar3 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013b6dd1),
     cVar3 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((**(char **)(lVar6 + 0x310) == '\0') &&
     (cVar3 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013b6dd1),
     cVar3 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  (**(code **)(**(long **)(lVar6 + 800) + 0x10))(&uStack_4f8);
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  puStack_740 = param_3;
  plStack_720 = param_1;
  lStack_718 = param_4;
  if (plVar8 == (long *)0x0) goto LAB_04984da4;
LAB_0498039b:
  *plVar8 = (long)&UNK_0ef49798;
  plVar8[1] = 0;
  plVar8[2] = 0;
  plVar8[3] = 0;
  plVar8[4] = 0;
  plVar8[5] = 0;
  plVar8[6] = 0;
  plVar21 = (long *)plStack_720[4];
  plStack_720[4] = (long)plVar8;
  if (plVar21 != (long *)0x0) {
    (**(code **)(*plVar21 + 8))();
    plVar8 = (long *)plStack_720[4];
  }
  uStack_4d8 = uStack_4f8;
  uStack_4d4 = uStack_4f4;
  uStack_4d0 = uStack_4f0;
  uStack_4cc = uStack_4ec;
  if (CONCAT44(uStack_4ec,uStack_4f0) != 0) {
    LOCK();
    plVar21 = (long *)(CONCAT44(uStack_4ec,uStack_4f0) + 0x10);
    *plVar21 = *plVar21 + 1;
    UNLOCK();
  }
  if ((*param_2 == 0) &&
     (cVar3 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_01207b8e),
     cVar3 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((*(char *)*param_2 == '\0') &&
     (cVar3 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_01207b8e),
     cVar3 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  lVar6 = (**(code **)(*(long *)param_2[2] + 0x270))();
  lStack_5c8 = *(long *)(lVar6 + 8);
  plStack_5c0 = *(long **)(lVar6 + 0x10);
  if (plStack_5c0 == (long *)0x0) {
    plStack_5c0 = (long *)0x0;
  }
  else {
    LOCK();
    plStack_5c0[1] = plStack_5c0[1] + 1;
    UNLOCK();
  }
  lStack_5b8 = 0;
  if (lStack_5c8 != 0) {
    lStack_5b8 = lVar6;
  }
  (**(code **)(*plVar8 + 0x10))(plVar8,&uStack_4d8,auStack_4c0,&lStack_5c8);
  plVar8 = plStack_5c0;
  lStack_5c8 = 0;
  plStack_5c0 = (long *)0x0;
  if (plVar8 == (long *)0x0) {
    lStack_5b8 = 0;
  }
  else {
    LOCK();
    plVar21 = plVar8 + 1;
    lVar6 = *plVar21;
    *plVar21 = *plVar21 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      func_0x0412c2d0(plVar8);
    }
    plVar8 = plStack_5c0;
    lStack_5b8 = 0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar21 = plStack_5c0 + 1;
      lVar6 = *plVar21;
      *plVar21 = *plVar21 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar8);
      }
    }
  }
  if (CONCAT44(uStack_4cc,uStack_4d0) != 0) {
    func_0x0412c2d0();
  }
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x10);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x10,0);
  }
  *puVar9 = &UNK_0ef4a378;
  puVar9[1] = &UNK_04964e00;
  if ((*param_2 == 0) &&
     (cVar3 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_01207b8e),
     cVar3 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((*(char *)*param_2 == '\0') &&
     (cVar3 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_01207b8e),
     cVar3 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  lVar6 = (**(code **)(*(long *)param_2[2] + 0x908))();
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  plVar24 = plVar8 + 1;
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0ef4a9f0;
  plVar8[3] = (long)puVar9;
  LOCK();
  plVar8[1] = plVar8[1] + 1;
  UNLOCK();
  *(undefined8 **)(lVar6 + 0x20) = puVar9;
  plVar21 = *(long **)(lVar6 + 0x28);
  *(long **)(lVar6 + 0x28) = plVar8;
  if (plVar21 != (long *)0x0) {
    LOCK();
    plVar1 = plVar21 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
      func_0x0412c2d0(plVar21);
    }
  }
  LOCK();
  lVar6 = *plVar24;
  *plVar24 = *plVar24 + -1;
  UNLOCK();
  if (lVar6 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x0412c2d0(plVar8);
  }
  func_0x049d2510(&DAT_0f6b3ce8,puStack_740);
  func_0x049d2510(0xf6b3d00,plVar7);
  DAT_0f6b3d18 = *(undefined1 *)(puStack_740 + 6);
  uStack_6d8 = (long **)*param_2;
  uStack_6d0 = (long *)param_2[1];
  pplVar10 = uStack_6d8;
  if (uStack_6d0 != (long *)0x0) {
    LOCK();
    uStack_6d0[1] = uStack_6d0[1] + 1;
    UNLOCK();
    pplVar10 = (long **)*param_2;
  }
  plStack_6c8 = (long *)param_2[2];
  if ((pplVar10 == (long **)0x0) &&
     (cVar3 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_01207b8e),
     cVar3 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((*(char *)*param_2 == '\0') &&
     (cVar3 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_01207b8e),
     cVar3 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  (**(code **)(*(long *)param_2[2] + 0xc48))(auStack_4e8);
  if ((_DAT_0f553df8 == (long *)0x0) ||
     (plStack_738 = (long *)func_0x0412c300(), plStack_738 == (long *)0x0)) {
    plStack_738 = (long *)0x0;
  }
  else {
    plVar7 = _DAT_0f553df0;
    if (_DAT_0f553df0 != (long *)0x0) goto LAB_0498174b;
  }
  plStack_728 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (plStack_728 == (long *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  plStack_728[1] = 0;
  plStack_728[2] = 0;
  *plStack_728 = (long)&UNK_0ef4cf78;
  if (plStack_4e0 != (long *)0x0) {
    LOCK();
    plStack_4e0[2] = plStack_4e0[2] + 1;
    UNLOCK();
  }
  plStack_700 = plStack_4e0;
  if ((DAT_0f6d23b0 == '\0') && (iVar5 = FUN_04108328(&DAT_0f6d23b0), iVar5 != 0)) {
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (puVar9 == (undefined8 *)0x0) goto LAB_04985230;
    goto LAB_049850f5;
  }
  do {
    func_0x0bf8e800(_DAT_0f6d23a8,param_5);
    lVar11 = _DAT_0f71e690;
    for (lVar6 = _DAT_0f71e698; lVar11 != lVar6; lVar6 = lVar6 + -8) {
      lVar17 = *(long *)(lVar6 + -8);
      *(undefined8 *)(lVar6 + -8) = 0;
      if (lVar17 != 0) {
        func_0x0412a280(lVar17,7);
      }
    }
    _DAT_0f71e698 = lVar11;
    func_0x0d2c0160();
    func_0x0c5b8460();
    func_0x0c6ef050();
    plVar7 = plStack_6c8;
    pplVar10 = uStack_6d8;
    if (((uStack_6d8 != (long **)0x0) && (*(byte *)uStack_6d8 == 1)) &&
       (cVar3 = (**(code **)(*plStack_6c8 + 0x9f0))(plStack_6c8), cVar3 == '\0')) {
      if ((((ulong)*pplVar10 & 1) == 0) &&
         (cVar3 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_01207b8e),
         cVar3 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      func_0x0c9a2790(plVar7);
    }
    if (_DAT_0f6fadd0 != (long *)0x0) {
      plVar7 = _DAT_0f6fadd0;
      do {
        lVar6 = plVar7[2];
        uStack_418 = (char *)(lVar6 + 0x18);
        lVar11 = func_0x0cbafb20(0xf6fb168,uStack_418,&UNK_01563a4f,&uStack_418,&pplStack_6f8);
        *(long *)(lVar11 + 0x38) = lVar6;
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
    func_0x0cb8dd90();
    plStack_568 = &uStack_418;
    func_0x0cd3b970(plStack_568,&pplStack_6f8);
    _DAT_0f6ffb28 = (undefined4)uStack_418;
    uRam000000000f6ffb2c = uStack_418._4_4_;
    uVar23 = (undefined4)uStack_410;
    uVar2 = uStack_410._4_4_;
    uStack_418 = (char *)0x0;
    uStack_410 = (long *)0x0;
    plVar7 = (long *)CONCAT44(uRam000000000f6ffb34,_DAT_0f6ffb30);
    _DAT_0f6ffb30 = uVar23;
    uRam000000000f6ffb34 = uVar2;
    if (plVar7 == (long *)0x0) {
LAB_04980a84:
      if (uStack_6d8 == (long **)0x0) goto LAB_04980b86;
LAB_04980a92:
      if (*(byte *)uStack_6d8 == 0) goto LAB_04980b86;
      lStack_588 = plStack_6c8[0xe0];
      plVar7 = (long *)plStack_6c8[0xe1];
      plStack_580 = plVar7;
      if (plVar7 == (long *)0x0) goto LAB_04980b93;
      LOCK();
      plVar7[1] = plVar7[1] + 1;
      UNLOCK();
      LOCK();
      plVar7[2] = plVar7[2] + 1;
      UNLOCK();
    }
    else {
      LOCK();
      plVar8 = plVar7 + 1;
      lVar6 = *plVar8;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (lVar6 != 0) goto LAB_04980a84;
      (**(code **)(*plVar7 + 0x10))(plVar7);
      func_0x0412c2d0(plVar7);
      plVar7 = uStack_410;
      if (uStack_410 == (long *)0x0) goto LAB_04980a84;
      LOCK();
      plVar8 = uStack_410 + 1;
      lVar6 = *plVar8;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (lVar6 != 0) goto LAB_04980a84;
      (**(code **)(*uStack_410 + 0x10))(uStack_410);
      func_0x0412c2d0(plVar7);
      if (uStack_6d8 != (long **)0x0) goto LAB_04980a92;
LAB_04980b86:
      lStack_588 = 0;
      plStack_580 = (long *)0x0;
LAB_04980b93:
      plVar7 = (long *)0x0;
    }
    pplVar10 = uStack_6d8;
    bVar26 = _DAT_0f6ffb20 != (long *)0x0;
    _DAT_0f6ffb18 = lStack_588;
    _DAT_0f6ffb20 = plVar7;
    if (bVar26) {
      func_0x0412c2d0();
    }
    func_0x0cc44720(param_5);
    func_0x05b1f120(param_5,puStack_740);
    if ((pplVar10 != (long **)0x0) && (*(byte *)pplVar10 == 1)) {
      (**(code **)(*plStack_6c8 + 0x9d8))(plStack_6c8,puStack_740);
    }
    func_0x05cf1410();
    func_0x052f6850(param_5,puStack_740);
    plVar7 = plStack_6c8;
    if (pplVar10 != (long **)0x0) {
      bVar4 = *(byte *)pplVar10;
      if (bVar4 == 1) {
        cVar3 = (**(code **)(*plStack_6c8 + 0x9f0))(plStack_6c8);
        if ((cVar3 == '\0') &&
           (pcVar12 = (char *)(**(code **)(*plVar7 + 0xe0))(plVar7), pcVar12 != (char *)0x0)) {
          uStack_418 = pcVar12;
          func_0x0cc3eef0(0xf6ff9e0,&UNK_053445d0,&uStack_418);
        }
        bVar4 = *(byte *)pplVar10;
      }
      if (((bVar4 & 1) != 0) && (cVar3 = (**(code **)(*plStack_6c8 + 0x9f0))(), cVar3 == '\0')) {
        uStack_418 = (char *)CONCAT44(uRam000000000f6ffb2c,_DAT_0f6ffb28);
        uStack_410 = (long *)CONCAT44(uRam000000000f6ffb34,_DAT_0f6ffb30);
        if (CONCAT44(uRam000000000f6ffb34,_DAT_0f6ffb30) != 0) {
          LOCK();
          plVar7 = (long *)(CONCAT44(uRam000000000f6ffb34,_DAT_0f6ffb30) + 8);
          *plVar7 = *plVar7 + 1;
          UNLOCK();
        }
        func_0x0cc46520(&pplStack_6f8,&uStack_418);
        plVar7 = uStack_410;
        if (uStack_410 != (long *)0x0) {
          LOCK();
          plVar8 = uStack_410 + 1;
          lVar6 = *plVar8;
          *plVar8 = *plVar8 + -1;
          UNLOCK();
          if (lVar6 == 0) {
            (**(code **)(*uStack_410 + 0x10))(uStack_410);
            func_0x0412c2d0(plVar7);
          }
        }
        plVar7 = (long *)0xf6ffa08;
        while (pplVar10 = uStack_6d8, plVar7 = (long *)*plVar7, plVar7 != (long *)0x0) {
          if ((uStack_6d8 == (long **)0x0) &&
             (cVar3 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41), cVar3 != '\0')
             ) {
            _DAT_00000000 = 0xdeadc0de;
          }
          if ((*(byte *)pplVar10 == 0) &&
             (cVar3 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41),
             cVar3 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          plVar8 = plStack_6c8;
          if ((plStack_6c8[0x18] == 0) &&
             (cVar3 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41), cVar3 != '\0')
             ) {
            _DAT_00000000 = 0xdeadc0de;
          }
          if ((*(char *)plVar8[0x18] == '\0') &&
             (cVar3 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41),
             cVar3 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          func_0x0ee1d2f0(plVar8[0x1a],0,plVar7 + 3);
        }
        func_0x0cc465d0(&pplStack_6f8);
        uStack_418 = (char *)CONCAT44(uRam000000000f6ffb2c,_DAT_0f6ffb28);
        uStack_410 = (long *)CONCAT44(uRam000000000f6ffb34,_DAT_0f6ffb30);
        if (CONCAT44(uRam000000000f6ffb34,_DAT_0f6ffb30) != 0) {
          LOCK();
          plVar7 = (long *)(CONCAT44(uRam000000000f6ffb34,_DAT_0f6ffb30) + 8);
          *plVar7 = *plVar7 + 1;
          UNLOCK();
        }
        func_0x0cc46520(&pplStack_6f8,&uStack_418);
        plVar7 = uStack_410;
        if (uStack_410 != (long *)0x0) {
          LOCK();
          plVar8 = uStack_410 + 1;
          lVar6 = *plVar8;
          *plVar8 = *plVar8 + -1;
          UNLOCK();
          if (lVar6 == 0) {
            (**(code **)(*uStack_410 + 0x10))(uStack_410);
            func_0x0412c2d0(plVar7);
          }
        }
        puVar9 = _DAT_0f6ffa40;
        if (_DAT_0f6ffa38 != _DAT_0f6ffa40) {
          puVar19 = _DAT_0f6ffa38 + 0xe;
          do {
            func_0x0c6c77f0(&uStack_418,puVar19 + -0xb);
            if (((*(char *)(puVar19 + 3) == '\0') && (*(char *)(param_5 + 3) == '\0')) &&
               (((*(byte *)((long)puVar19 + 6) & 1) == 0 ||
                ((*(char *)((long)param_5 + 7) != '\0' ||
                 (cVar3 = func_0x04fa7a10(param_5,puVar19), cVar3 == '\0')))))) {
              pplVar10 = uStack_6d8;
              if ((bStack_3f0 & 1) == 0) {
                if (bStack_3f0 >> 1 == 9) goto LAB_04980f6e;
LAB_04980fa8:
                if (uStack_6d8 == (long **)0x0) goto LAB_049851fd;
              }
              else {
                if (auStack_3ef._7_8_ != 9) goto LAB_04980fa8;
LAB_04980f6e:
                plVar7 = (long *)auStack_3ef;
                if ((bStack_3f0 & 1) != 0) {
                  plVar7 = plStack_3e0;
                }
                if ((char)plVar7[1] != 't' || *plVar7 != 0x66617263656e696d) goto LAB_04980fa8;
                if ((uStack_6d8 == (long **)0x0) &&
                   (cVar3 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,
                                            &UNK_01207b8e), cVar3 != '\0')) {
                  _DAT_00000000 = 0xdeadc0de;
                }
                if ((*(byte *)pplVar10 == 0) &&
                   (cVar3 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,
                                            &UNK_01207b8e), cVar3 != '\0')) {
                  _DAT_00000000 = 0xdeadc0de;
                }
                plVar7 = plStack_6c8;
                if ((plStack_6c8[0x18] == 0) &&
                   (cVar3 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,
                                            &UNK_013d2cf0), cVar3 != '\0')) {
                  _DAT_00000000 = 0xdeadc0de;
                }
                if ((*(char *)plVar7[0x18] == '\0') &&
                   (cVar3 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,
                                            &UNK_013d2cf0), cVar3 != '\0')) {
                  _DAT_00000000 = 0xdeadc0de;
                }
                func_0x0ee1d2f0(plVar7[0x1a],0,&uStack_410);
              }
              if ((*(byte *)pplVar10 == 0) &&
                 (cVar3 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,
                                          &UNK_01207b8e), cVar3 != '\0')) {
                _DAT_00000000 = 0xdeadc0de;
              }
              plVar7 = plStack_6c8;
              if ((plStack_6c8[0x18] == 0) &&
                 (cVar3 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,
                                          &UNK_013d2cf0), cVar3 != '\0')) {
                _DAT_00000000 = 0xdeadc0de;
              }
              if ((*(char *)plVar7[0x18] == '\0') &&
                 (cVar3 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,
                                          &UNK_013d2cf0), cVar3 != '\0')) {
                _DAT_00000000 = 0xdeadc0de;
              }
              func_0x0ee1d2f0(plVar7[0x1a],0,puVar19 + -0xb);
            }
            if ((bStack_3b0 & 1) != 0) {
              func_0x0412a280(uStack_3a0,CONCAT71(uStack_3af,bStack_3b0) & 0xfffffffffffffffe);
            }
            if ((bStack_3d0 & 1) != 0) {
              func_0x0412a280(uStack_3c0,CONCAT71(uStack_3cf,bStack_3d0) & 0xfffffffffffffffe);
            }
            if ((bStack_3f0 & 1) != 0) {
              func_0x0412a280(plStack_3e0,
                              CONCAT71(auStack_3ef._0_7_,bStack_3f0) & 0xfffffffffffffffe);
            }
            if (((ulong)uStack_410 & 1) != 0) {
              func_0x0412a280(uStack_400,(ulong)uStack_410 & 0xfffffffffffffffe);
            }
            puVar25 = puVar19 + 8;
            puVar19 = puVar19 + 0x16;
          } while (puVar25 != puVar9);
        }
        func_0x0cc465d0(&pplStack_6f8);
      }
    }
    func_0x0cfa91b0();
    lVar6 = func_0x0cfa92b0();
    if (*(long *)(lVar6 + 8) == *(long *)(lVar6 + 0x10)) {
      uVar23 = 0;
    }
    else {
      uVar23 = **(undefined4 **)(*(long *)(lVar6 + 0x10) + -8);
    }
    func_0x0cc3e440(0xf6ff9e0,uVar23);
    uVar13 = func_0x0cc422f0(0xf6ff9e0,&DAT_0f6eaec0,0,0,0);
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = uVar13;
    puVar19 = _DAT_0f6ffb10;
    bVar26 = _DAT_0f6ffb10 != (undefined8 *)0x0;
    _DAT_0f6ffb10 = puVar9;
    if (bVar26) {
      func_0x0412a280(puVar19,8);
    }
    if (uStack_6d8 == (long **)0x0) {
LAB_04981485:
      pplVar10 = (long **)0x0;
    }
    else {
      bVar4 = *(byte *)uStack_6d8;
      if (bVar4 == 1) {
        (**(code **)(*plStack_6c8 + 0x9e0))();
        func_0x0cc41b60(0xf6ff9e0,puStack_740);
        func_0x0cb6c860(param_5,puStack_740);
        uStack_418 = (char *)CONCAT44(uRam000000000f6ffb2c,_DAT_0f6ffb28);
        uStack_410 = (long *)CONCAT44(uRam000000000f6ffb34,_DAT_0f6ffb30);
        if (CONCAT44(uRam000000000f6ffb34,_DAT_0f6ffb30) != 0) {
          LOCK();
          plVar7 = (long *)(CONCAT44(uRam000000000f6ffb34,_DAT_0f6ffb30) + 8);
          *plVar7 = *plVar7 + 1;
          UNLOCK();
        }
        func_0x0cc46520(&pplStack_6f8,&uStack_418);
        plVar7 = uStack_410;
        if (uStack_410 != (long *)0x0) {
          LOCK();
          plVar8 = uStack_410 + 1;
          lVar6 = *plVar8;
          *plVar8 = *plVar8 + -1;
          UNLOCK();
          if (lVar6 == 0) {
            (**(code **)(*uStack_410 + 0x10))(uStack_410);
            func_0x0412c2d0(plVar7);
          }
        }
        func_0x0cc465d0(&pplStack_6f8);
        func_0x0cb6d600(puStack_740);
        if (uStack_560 != 0) {
          func_0x0cc3eba0(0xf6ff9e0,uStack_560);
        }
        func_0x0cc3ed70(0xf6ff9e0);
        if (uStack_6d8 == (long **)0x0) goto LAB_04981485;
        bVar4 = *(byte *)uStack_6d8;
      }
      plVar7 = plStack_6c8;
      pplVar10 = uStack_6d8;
      if (((bVar4 & 1) != 0) &&
         (cVar3 = (**(code **)(*plStack_6c8 + 0x9f0))(plStack_6c8), cVar3 == '\0')) {
        if ((((ulong)*pplVar10 & 1) == 0) &&
           (cVar3 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41), cVar3 != '\0')
           ) {
          _DAT_00000000 = 0xdeadc0de;
        }
        uVar13 = (**(code **)(*plVar7 + 0x908))(plVar7);
        func_0x0b051390(uVar13,puStack_740);
      }
    }
    plVar7 = _DAT_0f70b580;
    puVar14 = &UNK_0ef4d058;
    uStack_418 = &UNK_0ef4d058;
    uStack_410 = (long *)&UNK_053278f0;
    plStack_3f8 = &uStack_418;
    _DAT_0f70b580 = (long *)0x0;
    if (plVar7 == (long *)0xf70b560) {
      lVar6 = 0x20;
LAB_049814e5:
      (**(code **)(*plVar7 + lVar6))();
      if (plStack_3f8 == (long *)0x0) {
        _DAT_0f70b580 = (long *)0x0;
      }
      else {
        if (plStack_3f8 == &uStack_418) {
          plStack_568 = plStack_3f8;
          puVar14 = (undefined *)*plStack_3f8;
          goto LAB_04981532;
        }
        _DAT_0f70b580 = plStack_3f8;
        plStack_3f8 = (long *)0x0;
      }
    }
    else {
      lVar6 = 0x28;
      if (plVar7 != (long *)0x0) goto LAB_049814e5;
LAB_04981532:
      _DAT_0f70b580 = (long *)0xf70b560;
      (**(code **)(puVar14 + 0x18))(plStack_568,0xf70b560);
      if (plStack_3f8 == &uStack_418) {
        lVar6 = 0x20;
      }
      else {
        lVar6 = 0x28;
        if (plStack_3f8 == (long *)0x0) goto LAB_04981573;
      }
      (**(code **)(*plStack_3f8 + lVar6))();
    }
LAB_04981573:
    if ((pplVar10 == (long **)0x0) || (*(byte *)pplVar10 != 1)) {
      uVar13 = 0;
    }
    else {
      lVar6 = (**(code **)(*plStack_6c8 + 0x908))();
      uVar13 = *(undefined8 *)(lVar6 + 0xb0);
    }
    func_0x053606c0(uVar13);
    plVar7 = plStack_6c8;
    if (((pplVar10 != (long **)0x0) && (*(byte *)pplVar10 == 1)) &&
       (cVar3 = (**(code **)(*plStack_6c8 + 0x9f0))(plStack_6c8), cVar3 == '\0')) {
      if ((((ulong)*pplVar10 & 1) == 0) &&
         (cVar3 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41), cVar3 != '\0'))
      {
        _DAT_00000000 = 0xdeadc0de;
      }
      (**(code **)(*plVar7 + 0x908))(plVar7);
      if ((((ulong)*pplVar10 & 1) == 0) &&
         (cVar3 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41), cVar3 != '\0'))
      {
        _DAT_00000000 = 0xdeadc0de;
      }
      lVar6 = (**(code **)(*plVar7 + 0x908))(plVar7);
      func_0x0544ab90(*(undefined8 *)(lVar6 + 0xb0));
    }
    func_0x0c60d070(param_5,puStack_740);
    func_0x0c3f51a0(param_5,puStack_740);
    func_0x0c019d20(param_5,puStack_740);
    func_0x0c688600();
    func_0x0bc109e0();
    func_0x0ca97c40();
    plVar7 = plStack_580;
    if (plStack_580 != (long *)0x0) {
      LOCK();
      plVar8 = plStack_580 + 1;
      lVar6 = *plVar8;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*plStack_580 + 0x10))(plStack_580);
        func_0x0412c2d0(plVar7);
      }
    }
    if (plStack_700 != (long *)0x0) {
      func_0x0412c2d0();
    }
    plVar7 = plStack_728 + 3;
    if (plStack_738 != (long *)0x0) {
      LOCK();
      plVar8 = plStack_738 + 1;
      lVar6 = *plVar8;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*plStack_738 + 0x10))(plStack_738);
        func_0x0412c2d0(plStack_738);
      }
    }
    LOCK();
    plStack_728[2] = plStack_728[2] + 1;
    plVar8 = _DAT_0f553df8;
    UNLOCK();
    _DAT_0f553df8 = plStack_728;
    _DAT_0f553df0 = plVar7;
    if (plVar8 != (long *)0x0) {
      func_0x0412c2d0();
    }
    plStack_738 = plStack_728;
LAB_0498174b:
    uStack_418 = &UNK_0ef4cfc8;
    plStack_3f8 = &uStack_418;
    func_0x0ca11f10(auStack_4e8,&uStack_418);
    if (plStack_3f8 == &uStack_418) {
      lVar6 = 0x20;
LAB_04981790:
      (**(code **)(*plStack_3f8 + lVar6))();
    }
    else {
      lVar6 = 0x28;
      if (plStack_3f8 != (long *)0x0) goto LAB_04981790;
    }
    plStack_720[7] = (long)plVar7;
    plVar7 = (long *)plStack_720[8];
    plStack_720[8] = (long)plStack_738;
    if (plVar7 != (long *)0x0) {
      LOCK();
      plVar8 = plVar7 + 1;
      lVar6 = *plVar8;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        func_0x0412c2d0(plVar7);
      }
    }
    if (plStack_4e0 != (long *)0x0) {
      func_0x0412c2d0();
    }
    plVar7 = uStack_6d0;
    uStack_6d8 = (long **)0x0;
    uStack_6d0 = (long *)0x0;
    if (plVar7 == (long *)0x0) {
LAB_0498185b:
      lVar6 = *param_2;
    }
    else {
      LOCK();
      plVar8 = plVar7 + 1;
      lVar6 = *plVar8;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (lVar6 != 0) {
        plStack_6c8 = (long *)0x0;
        goto LAB_0498185b;
      }
      (**(code **)(*plVar7 + 0x10))(plVar7);
      func_0x0412c2d0(plVar7);
      plVar7 = uStack_6d0;
      plStack_6c8 = (long *)0x0;
      if (uStack_6d0 == (long *)0x0) goto LAB_0498185b;
      plStack_6c8 = (long *)0x0;
      LOCK();
      plVar8 = uStack_6d0 + 1;
      lVar6 = *plVar8;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (lVar6 != 0) goto LAB_0498185b;
      (**(code **)(*uStack_6d0 + 0x10))(uStack_6d0);
      func_0x0412c2d0(plVar7);
      lVar6 = *param_2;
    }
    if ((lVar6 == 0) &&
       (cVar3 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41), cVar3 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if (*(char *)*param_2 == '\x01') {
      lVar6 = param_2[2];
      cVar3 = *(char *)*param_2;
    }
    else {
      cVar3 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41);
      if (cVar3 != '\0') {
        _DAT_00000000 = 0xdeadc0de;
      }
      lVar6 = param_2[2];
      if ((*param_2 == 0) &&
         (cVar3 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41), cVar3 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      cVar3 = *(char *)*param_2;
    }
    plVar7 = (long *)(lVar6 + 0x20);
    if ((cVar3 == '\0') &&
       (cVar3 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41), cVar3 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    plVar8 = (long *)(**(code **)(*(long *)param_2[2] + 0xb0))();
    uVar13 = (**(code **)(*plVar8 + 0x18))(plVar8);
    if ((*param_2 == 0) &&
       (cVar3 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41), cVar3 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((*(char *)*param_2 == '\0') &&
       (cVar3 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41), cVar3 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uVar15 = (**(code **)(*(long *)param_2[2] + 0x558))();
    if ((*param_2 == 0) &&
       (cVar3 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41), cVar3 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((*(char *)*param_2 == '\0') &&
       (cVar3 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41), cVar3 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    plStack_720 = (long *)(**(code **)(*(long *)param_2[2] + 0xc60))();
    if ((*param_2 == 0) &&
       (cVar3 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41), cVar3 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((*(char *)*param_2 == '\0') &&
       (cVar3 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41), cVar3 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    lVar6 = param_2[2];
    if ((*(long *)(lVar6 + 0xc0) == 0) &&
       (cVar3 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41), cVar3 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((**(char **)(lVar6 + 0xc0) == '\0') &&
       (cVar3 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41), cVar3 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    lVar6 = *(long *)(lVar6 + 0xd0);
    plStack_530 = (long *)0x0;
    lVar11 = *(long *)(lVar6 + 8);
    plStack_700 = *(long **)(lVar6 + 0x10);
    if (plStack_700 != (long *)0x0) {
      LOCK();
      plStack_700[1] = plStack_700[1] + 1;
      UNLOCK();
      plStack_530 = plStack_700;
    }
    if (lVar11 == 0) {
      lVar6 = 0;
      lVar17 = *param_2;
    }
    else {
      lVar17 = *param_2;
    }
    lStack_538 = lVar11;
    lStack_528 = lVar6;
    if ((lVar17 == 0) &&
       (cVar3 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41), cVar3 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((*(char *)*param_2 == '\0') &&
       (cVar3 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41), cVar3 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    plStack_728 = (long *)(**(code **)(*(long *)param_2[2] + 0x270))();
    plStack_568 = param_7;
    uStack_560 = CONCAT71(uStack_560._1_7_,param_8);
    uVar16 = (**(code **)(*plVar7 + 0xa8))(plVar7);
    func_0x04a7b560(uVar16);
    lVar17 = (**(code **)(*plVar7 + 0x18))(plVar7);
    func_0x04a51300(lVar17,uVar13,param_5,puStack_740);
    uVar13 = (**(code **)(*plVar7 + 0x88))(plVar7);
    func_0x04a53380(uVar13);
    uVar16 = (**(code **)(*plVar7 + 0x88))(plVar7);
    uStack_418 = &UNK_0ef54308;
    uStack_410 = (long *)&UNK_052efb90;
    plStack_3f8 = &uStack_418;
    uStack_6d8 = (long **)&UNK_0ef543b8;
    uStack_6d0 = (long *)&UNK_052f0060;
    uStack_6b8 = &uStack_6d8;
    func_0x0c8c0450(uVar16,plStack_3f8,&uStack_6d8);
    if (uStack_6b8 == &uStack_6d8) {
      lVar18 = 0x20;
LAB_04981e0d:
      (**(code **)(*uStack_6b8 + lVar18))();
    }
    else {
      lVar18 = 0x28;
      if (uStack_6b8 != (long *)0x0) goto LAB_04981e0d;
    }
    if (plStack_3f8 == &uStack_418) {
      lVar18 = 0x20;
LAB_04981e42:
      (**(code **)(*plStack_3f8 + lVar18))();
    }
    else {
      lVar18 = 0x28;
      if (plStack_3f8 != (long *)0x0) goto LAB_04981e42;
    }
    uVar16 = (**(code **)(*plVar7 + 0x98))(plVar7);
    func_0x04a545b0(uVar16,param_5);
    func_0x0c8cdb30(lVar17,uVar15);
    plVar8 = plStack_568;
    if ((uStack_560 & 1) != 0) {
      plStack_580 = plStack_700;
      if (plStack_700 != (long *)0x0) {
        LOCK();
        plStack_700[1] = plStack_700[1] + 1;
        UNLOCK();
      }
      lStack_588 = lVar11;
      lStack_578 = lVar6;
      func_0x0c8ce230(lVar17,lStack_718,plStack_720,&lStack_588,param_5,uVar13,plStack_568,
                      puStack_740,plStack_728);
      plVar21 = plStack_580;
      lStack_588 = 0;
      plStack_580 = (long *)0x0;
      if (plVar21 == (long *)0x0) {
        plVar8 = (long *)plVar8[2];
joined_r0x04981f67:
        lStack_578 = 0;
      }
      else {
        LOCK();
        plVar24 = plVar21 + 1;
        lVar6 = *plVar24;
        *plVar24 = *plVar24 + -1;
        UNLOCK();
        if (lVar6 == 0) {
          (**(code **)(*plVar21 + 0x10))(plVar21);
          func_0x0412c2d0(plVar21);
        }
        plVar21 = plStack_580;
        lStack_578 = 0;
        if (plStack_580 == (long *)0x0) {
LAB_04981f46:
          plVar8 = (long *)plVar8[2];
          goto joined_r0x04981f67;
        }
        LOCK();
        plVar24 = plStack_580 + 1;
        lVar6 = *plVar24;
        *plVar24 = *plVar24 + -1;
        UNLOCK();
        if (lVar6 != 0) goto LAB_04981f46;
        (**(code **)(*plStack_580 + 0x10))(plStack_580);
        func_0x0412c2d0(plVar21);
        plVar8 = (long *)plVar8[2];
      }
      if (plVar8 != (long *)0x0) {
        do {
          lVar6 = func_0x0c8ba8f0(lVar17,plVar8 + 2);
          if (lVar6 == 0) {
            bVar4 = *(byte *)(plVar8 + 2);
            if ((bVar4 & 1) == 0) {
              pcVar12 = (char *)((long)plVar8 + 0x11);
              iVar5 = *(int *)(lVar17 + 0x3b0);
              sVar20 = (short)iVar5;
            }
            else {
              pcVar12 = (char *)plVar8[4];
              iVar5 = *(int *)(lVar17 + 0x3b0);
              sVar20 = (short)iVar5;
            }
            if (sVar20 == -1) {
              uStack_418 = pcVar12;
              func_0x0c8cb900(1,3,5,&UNK_0131b97e,&UNK_01d37212,&uStack_418);
            }
            else {
              if ((bVar4 & 1) == 0) {
                uVar22 = (ulong)(bVar4 >> 1);
              }
              else {
                uVar22 = plVar8[3];
              }
              *(int *)(lVar17 + 0x3b0) = iVar5 + 1;
              func_0x0c8cbaa0(lVar17,pcVar12,uVar22);
            }
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
    lStack_518 = lStack_538;
    plStack_510 = plStack_530;
    if (plStack_530 != (long *)0x0) {
      LOCK();
      plStack_530[1] = plStack_530[1] + 1;
      UNLOCK();
    }
    lStack_508 = lStack_528;
    func_0x0d300630(&uStack_418,plStack_720,&lStack_518);
    plVar8 = plStack_510;
    lStack_518 = 0;
    plStack_510 = (long *)0x0;
    if (plVar8 == (long *)0x0) {
      lStack_508 = 0;
    }
    else {
      LOCK();
      plVar21 = plVar8 + 1;
      lVar6 = *plVar21;
      *plVar21 = *plVar21 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        func_0x0412c2d0(plVar8);
      }
      plVar8 = plStack_510;
      lStack_508 = 0;
      if (plStack_510 != (long *)0x0) {
        LOCK();
        plVar21 = plStack_510 + 1;
        lVar6 = *plVar21;
        *plVar21 = *plVar21 + -1;
        UNLOCK();
        if (lVar6 == 0) {
          (**(code **)(*plStack_510 + 0x10))(plStack_510);
          func_0x0412c2d0(plVar8);
        }
      }
    }
    FUN_0d308860(&uStack_418,lStack_718,plStack_728);
    lVar11 = (**(code **)(*plVar7 + 0x58))(plVar7);
    uVar13 = uStack_400;
    uStack_400 = 0;
    lVar6 = *(long *)(lVar11 + 0x1a8);
    *(undefined8 *)(lVar11 + 0x1a8) = uVar13;
    if (lVar6 != 0) {
      func_0x049e9990(lVar6);
      func_0x0412a280(lVar6,0x60);
    }
    lVar6 = (**(code **)(*plVar7 + 0x38))(plVar7);
    puStack_558 = (undefined8 *)0x0;
    puStack_550 = (undefined8 *)0x0;
    puStack_548 = (undefined8 *)0x0;
    uStack_6d0 = (long *)((ulong)uStack_6d0 & 0xffffffffffffff00);
    uStack_6d8 = &puStack_558;
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    puStack_550 = puVar9 + 3;
    *puVar9 = 0x656e656765727024;
    puVar9[1] = 0x705f6e6f69746172;
    puVar9[2] = 0x737361;
    lVar11 = *(long *)(lVar6 + 0x90);
    puStack_548 = puStack_550;
    puStack_558 = puVar9;
    for (lVar17 = *(long *)(lVar6 + 0x98); lVar11 != lVar17; lVar17 = lVar17 + -0x18) {
      if ((*(byte *)(lVar17 + -0x18) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar17 + -8),*(ulong *)(lVar17 + -0x18) & 0xfffffffffffffffe
                       );
      }
    }
    *(long *)(lVar6 + 0x98) = lVar11;
    if ((undefined8 **)(lVar6 + 0x90) != &puStack_558) {
      func_0x0490ae00((undefined8 **)(lVar6 + 0x90),puStack_558,puStack_550,
                      ((long)puStack_550 - (long)puStack_558 >> 3) * -0x5555555555555555);
    }
    puVar19 = puStack_558;
    puVar9 = puStack_550;
    if (puStack_558 != (undefined8 *)0x0) {
      for (; puVar19 != puVar9; puVar9 = puVar9 + -3) {
        if ((*(byte *)(puVar9 + -3) & 1) != 0) {
          func_0x0412a280(puVar9[-1],puVar9[-3] & 0xfffffffffffffffe);
        }
      }
      puStack_550 = puVar19;
      func_0x0412a280(puStack_558,(long)puStack_548 - (long)puStack_558);
    }
    uStack_6d8 = (long **)CONCAT44(_UNK_0158340c,_DAT_01583408);
    uStack_6d0 = (long *)CONCAT44(_UNK_01583414,_UNK_01583410);
    plStack_6c8 = (long *)0x0;
    if ((DAT_0f554d00 & 1) == 0) {
      lStack_6b0 = _DAT_0f554d10;
      uStack_6c0 = CONCAT71(uRam000000000f554d01,DAT_0f554d00);
      uStack_6b8 = _DAT_0f554d08;
    }
    else {
      FUN_0412e5e0(&uStack_6c0,_DAT_0f554d10,_DAT_0f554d08);
    }
    uStack_6a8 = _DAT_01583420;
    uStack_6a0 = _UNK_01583428;
    lStack_698 = 0x73;
    uStack_690 = _DAT_01583438;
    uStack_688 = _UNK_01583440;
    lStack_680 = 0x737361705f646e;
    uStack_678 = _DAT_01583450;
    uStack_670 = _UNK_01583458;
    lStack_668 = 0x73736170;
    uStack_660 = _DAT_01583468;
    uStack_658 = _UNK_01583470;
    lStack_650 = 0;
    uStack_648 = _DAT_01583480;
    uStack_640 = _UNK_01583488;
    lStack_638 = 0x737361;
    uStack_630 = _DAT_01583498;
    uStack_628 = _UNK_015834a0;
    lStack_620 = 0;
    uStack_618 = _DAT_015834b0;
    uStack_610 = _UNK_015834b8;
    lStack_608 = 0;
    uStack_600 = _DAT_015834c8;
    uStack_5f8 = _UNK_015834d0;
    lStack_5f0 = 0;
    uStack_5e8 = _DAT_015834e0;
    uStack_5e0 = _UNK_015834e8;
    lStack_5d8 = 0;
    plStack_5a8 = (long *)0x0;
    plStack_5a0 = (long *)0x0;
    plStack_598 = (long *)0x0;
    uStack_420 = 0;
    pplStack_428 = &plStack_5a8;
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x108);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x108,0);
    }
    plStack_598 = plVar8 + 0x21;
    pplStack_6f0 = &plStack_4c8;
    pplStack_6e8 = &plStack_708;
    uStack_6e0 = 0;
    pplStack_6f8 = &plStack_5a8;
    plStack_5a8 = plVar8;
    plStack_5a0 = plVar8;
    plStack_4c8 = plVar8;
    if (((ulong)uStack_6d8 & 1) == 0) {
      plVar8[2] = (long)plStack_6c8;
      *(undefined4 *)plVar8 = (undefined4)uStack_6d8;
      *(undefined4 *)((long)plVar8 + 4) = uStack_6d8._4_4_;
      *(undefined4 *)(plVar8 + 1) = (undefined4)uStack_6d0;
      *(undefined4 *)((long)plVar8 + 0xc) = uStack_6d0._4_4_;
      plStack_708 = plVar8 + 3;
      if ((uStack_6c0 & 1) == 0) goto LAB_0498251d;
LAB_049826f7:
      FUN_0412e5e0(plStack_708,lStack_6b0,uStack_6b8);
      plStack_708 = plStack_708 + 3;
      if ((uStack_6a8 & 1) != 0) goto LAB_04982728;
LAB_04982543:
      plStack_708[2] = lStack_698;
      *(undefined4 *)plStack_708 = (undefined4)uStack_6a8;
      *(undefined4 *)((long)plStack_708 + 4) = uStack_6a8._4_4_;
      *(undefined4 *)(plStack_708 + 1) = (undefined4)uStack_6a0;
      *(undefined4 *)((long)plStack_708 + 0xc) = uStack_6a0._4_4_;
      plStack_708 = plStack_708 + 3;
      if ((uStack_690 & 1) == 0) goto LAB_04982570;
LAB_04982759:
      FUN_0412e5e0(plStack_708,lStack_680,uStack_688);
      plStack_708 = plStack_708 + 3;
      if ((uStack_678 & 1) != 0) goto LAB_0498278a;
LAB_0498259d:
      plStack_708[2] = lStack_668;
      *(undefined4 *)plStack_708 = (undefined4)uStack_678;
      *(undefined4 *)((long)plStack_708 + 4) = uStack_678._4_4_;
      *(undefined4 *)(plStack_708 + 1) = (undefined4)uStack_670;
      *(undefined4 *)((long)plStack_708 + 0xc) = uStack_670._4_4_;
      plStack_708 = plStack_708 + 3;
      if ((uStack_660 & 1) == 0) goto LAB_049825ca;
LAB_049827bb:
      FUN_0412e5e0(plStack_708,lStack_650,uStack_658);
      plStack_708 = plStack_708 + 3;
      if ((uStack_648 & 1) != 0) goto LAB_049827ec;
LAB_049825f7:
      plStack_708[2] = lStack_638;
      *(undefined4 *)plStack_708 = (undefined4)uStack_648;
      *(undefined4 *)((long)plStack_708 + 4) = uStack_648._4_4_;
      *(undefined4 *)(plStack_708 + 1) = (undefined4)uStack_640;
      *(undefined4 *)((long)plStack_708 + 0xc) = uStack_640._4_4_;
      plStack_708 = plStack_708 + 3;
      if ((uStack_630 & 1) == 0) goto LAB_04982624;
LAB_0498281d:
      FUN_0412e5e0(plStack_708,lStack_620,uStack_628);
      plStack_708 = plStack_708 + 3;
      if ((uStack_618 & 1) != 0) goto LAB_0498284e;
LAB_04982651:
      plStack_708[2] = lStack_608;
      *(undefined4 *)plStack_708 = (undefined4)uStack_618;
      *(undefined4 *)((long)plStack_708 + 4) = uStack_618._4_4_;
      *(undefined4 *)(plStack_708 + 1) = (undefined4)uStack_610;
      *(undefined4 *)((long)plStack_708 + 0xc) = uStack_610._4_4_;
      plStack_708 = plStack_708 + 3;
      if ((uStack_600 & 1) == 0) goto LAB_0498267e;
LAB_0498287f:
      FUN_0412e5e0(plStack_708,lStack_5f0,uStack_5f8);
      plStack_708 = plStack_708 + 3;
      if ((uStack_5e8 & 1) != 0) goto LAB_049828b0;
LAB_049826ab:
      plStack_708[2] = lStack_5d8;
      *(undefined4 *)plStack_708 = (undefined4)uStack_5e8;
      *(undefined4 *)((long)plStack_708 + 4) = uStack_5e8._4_4_;
      *(undefined4 *)(plStack_708 + 1) = (undefined4)uStack_5e0;
      *(undefined4 *)((long)plStack_708 + 0xc) = uStack_5e0._4_4_;
    }
    else {
      plStack_708 = plVar8;
      FUN_0412e5e0(plVar8,plStack_6c8,uStack_6d0);
      plStack_708 = plStack_708 + 3;
      if ((uStack_6c0 & 1) != 0) goto LAB_049826f7;
LAB_0498251d:
      plStack_708[2] = lStack_6b0;
      *(undefined4 *)plStack_708 = (undefined4)uStack_6c0;
      *(undefined4 *)((long)plStack_708 + 4) = uStack_6c0._4_4_;
      *(undefined4 *)(plStack_708 + 1) = (undefined4)uStack_6b8;
      *(undefined4 *)((long)plStack_708 + 0xc) = uStack_6b8._4_4_;
      plStack_708 = plStack_708 + 3;
      if ((uStack_6a8 & 1) == 0) goto LAB_04982543;
LAB_04982728:
      FUN_0412e5e0(plStack_708,lStack_698,uStack_6a0);
      plStack_708 = plStack_708 + 3;
      if ((uStack_690 & 1) != 0) goto LAB_04982759;
LAB_04982570:
      plStack_708[2] = lStack_680;
      *(undefined4 *)plStack_708 = (undefined4)uStack_690;
      *(undefined4 *)((long)plStack_708 + 4) = uStack_690._4_4_;
      *(undefined4 *)(plStack_708 + 1) = (undefined4)uStack_688;
      *(undefined4 *)((long)plStack_708 + 0xc) = uStack_688._4_4_;
      plStack_708 = plStack_708 + 3;
      if ((uStack_678 & 1) == 0) goto LAB_0498259d;
LAB_0498278a:
      FUN_0412e5e0(plStack_708,lStack_668,uStack_670);
      plStack_708 = plStack_708 + 3;
      if ((uStack_660 & 1) != 0) goto LAB_049827bb;
LAB_049825ca:
      plStack_708[2] = lStack_650;
      *(undefined4 *)plStack_708 = (undefined4)uStack_660;
      *(undefined4 *)((long)plStack_708 + 4) = uStack_660._4_4_;
      *(undefined4 *)(plStack_708 + 1) = (undefined4)uStack_658;
      *(undefined4 *)((long)plStack_708 + 0xc) = uStack_658._4_4_;
      plStack_708 = plStack_708 + 3;
      if ((uStack_648 & 1) == 0) goto LAB_049825f7;
LAB_049827ec:
      FUN_0412e5e0(plStack_708,lStack_638,uStack_640);
      plStack_708 = plStack_708 + 3;
      if ((uStack_630 & 1) != 0) goto LAB_0498281d;
LAB_04982624:
      plStack_708[2] = lStack_620;
      *(undefined4 *)plStack_708 = (undefined4)uStack_630;
      *(undefined4 *)((long)plStack_708 + 4) = uStack_630._4_4_;
      *(undefined4 *)(plStack_708 + 1) = (undefined4)uStack_628;
      *(undefined4 *)((long)plStack_708 + 0xc) = uStack_628._4_4_;
      plStack_708 = plStack_708 + 3;
      if ((uStack_618 & 1) == 0) goto LAB_04982651;
LAB_0498284e:
      FUN_0412e5e0(plStack_708,lStack_608,uStack_610);
      plStack_708 = plStack_708 + 3;
      if ((uStack_600 & 1) != 0) goto LAB_0498287f;
LAB_0498267e:
      plStack_708[2] = lStack_5f0;
      *(undefined4 *)plStack_708 = (undefined4)uStack_600;
      *(undefined4 *)((long)plStack_708 + 4) = uStack_600._4_4_;
      *(undefined4 *)(plStack_708 + 1) = (undefined4)uStack_5f8;
      *(undefined4 *)((long)plStack_708 + 0xc) = uStack_5f8._4_4_;
      plStack_708 = plStack_708 + 3;
      if ((uStack_5e8 & 1) == 0) goto LAB_049826ab;
LAB_049828b0:
      FUN_0412e5e0(plStack_708,lStack_5d8,uStack_5e0);
    }
    plStack_5a0 = plStack_708 + 3;
    plVar8 = *(long **)(lVar6 + 0xa8);
    for (plVar21 = *(long **)(lVar6 + 0xb0); plVar8 != plVar21; plVar21 = plVar21 + -3) {
      if ((*(byte *)(plVar21 + -3) & 1) != 0) {
        func_0x0412a280(plVar21[-1],plVar21[-3] & 0xfffffffffffffffe);
      }
    }
    *(long **)(lVar6 + 0xb0) = plVar8;
    if ((long **)(lVar6 + 0xa8) != &plStack_5a8) {
      func_0x0490ae00((long **)(lVar6 + 0xa8),plStack_5a8,plStack_5a0,
                      ((long)plStack_5a0 - (long)plStack_5a8 >> 3) * -0x5555555555555555);
    }
    plVar21 = plStack_5a8;
    plVar24 = plStack_5a0;
    if (plStack_5a8 != (long *)0x0) {
      while (plVar8 = plVar24, plVar21 != plVar8) {
        if ((*(byte *)(plVar8 + -3) & 1) != 0) {
          func_0x0412a280(plVar8[-1],plVar8[-3] & 0xfffffffffffffffe);
        }
        plVar24 = plVar8 + -3;
      }
      plStack_5a0 = plVar21;
      func_0x0412a280(plStack_5a8,(long)plStack_598 - (long)plStack_5a8);
    }
    if ((uStack_5e8 & 1) != 0) {
      func_0x0412a280(lStack_5d8,uStack_5e8 & 0xfffffffffffffffe);
    }
    if ((uStack_600 & 1) != 0) {
      func_0x0412a280(lStack_5f0,uStack_600 & 0xfffffffffffffffe);
    }
    if ((uStack_618 & 1) != 0) {
      func_0x0412a280(lStack_608,uStack_618 & 0xfffffffffffffffe);
    }
    if ((uStack_630 & 1) != 0) {
      func_0x0412a280(lStack_620,uStack_630 & 0xfffffffffffffffe);
    }
    if ((uStack_648 & 1) != 0) {
      func_0x0412a280(lStack_638,uStack_648 & 0xfffffffffffffffe);
    }
    if ((uStack_660 & 1) != 0) {
      func_0x0412a280(lStack_650,uStack_660 & 0xfffffffffffffffe);
    }
    if ((uStack_678 & 1) != 0) {
      func_0x0412a280(lStack_668,uStack_678 & 0xfffffffffffffffe);
    }
    if ((uStack_690 & 1) != 0) {
      func_0x0412a280(lStack_680,uStack_690 & 0xfffffffffffffffe);
    }
    if ((uStack_6a8 & 1) != 0) {
      func_0x0412a280(lStack_698,uStack_6a8 & 0xfffffffffffffffe);
    }
    if ((uStack_6c0 & 1) != 0) {
      func_0x0412a280(lStack_6b0,uStack_6c0 & 0xfffffffffffffffe);
    }
    if (((ulong)uStack_6d8 & 1) != 0) {
      func_0x0412a280(plStack_6c8,(ulong)uStack_6d8 & 0xfffffffffffffffe);
    }
    uVar13 = (**(code **)(*plVar7 + 0x48))(plVar7);
    func_0x04ee9260(uVar13);
    FUN_04f2bb50(lVar6,param_5,puStack_740);
    (**(code **)(*plVar7 + 0x78))(&uStack_6d8,plVar7);
    uVar13 = (**(code **)(*plVar7 + 0x58))(plVar7);
    pplStack_6f8 = uStack_6d8;
    pplStack_6f0 = (long **)uStack_6d0;
    if (uStack_6d0 != (long *)0x0) {
      LOCK();
      uStack_6d0[1] = uStack_6d0[1] + 1;
      UNLOCK();
    }
    pplStack_6e8 = (long **)plStack_6c8;
    if ((uStack_6d8 == (long **)0x0) || (*(byte *)uStack_6d8 == 0)) {
      func_0x04890760();
      goto LAB_04984d9f;
    }
    func_0x050d0e40(&pplStack_6f8,lVar6,uVar13,param_5);
    pplVar10 = pplStack_6f0;
    pplStack_6f8 = (long **)0x0;
    pplStack_6f0 = (long **)0x0;
    if (pplVar10 == (long **)0x0) {
      pplStack_6e8 = (long **)0x0;
    }
    else {
      LOCK();
      plVar7 = (long *)(pplVar10 + 1);
      lVar6 = *plVar7;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)((long)*pplVar10 + 0x10))(pplVar10);
        func_0x0412c2d0(pplVar10);
      }
      pplVar10 = pplStack_6f0;
      pplStack_6e8 = (long **)0x0;
      if (pplStack_6f0 != (long **)0x0) {
        LOCK();
        plVar7 = (long *)(pplStack_6f0 + 1);
        lVar6 = *plVar7;
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (lVar6 == 0) {
          (**(code **)((long)*pplStack_6f0 + 0x10))(pplStack_6f0);
          func_0x0412c2d0(pplVar10);
        }
      }
    }
    plVar7 = uStack_6d0;
    uStack_6d8 = (long **)0x0;
    uStack_6d0 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      LOCK();
      plVar8 = plVar7 + 1;
      lVar6 = *plVar8;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        func_0x0412c2d0(plVar7);
      }
      plVar7 = uStack_6d0;
      plStack_6c8 = (long *)0x0;
      if (uStack_6d0 != (long *)0x0) {
        LOCK();
        plVar8 = uStack_6d0 + 1;
        lVar6 = *plVar8;
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (lVar6 == 0) {
          (**(code **)(*uStack_6d0 + 0x10))(uStack_6d0);
          func_0x0412c2d0(plVar7);
        }
      }
    }
    func_0x0d3086c0(&uStack_418);
    plVar7 = plStack_700;
    lStack_538 = 0;
    plStack_530 = (long *)0x0;
    if (plStack_700 == (long *)0x0) {
      lStack_528 = 0;
      lVar6 = *param_2;
    }
    else {
      LOCK();
      plVar8 = plStack_700 + 1;
      lVar6 = *plVar8;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*plStack_700 + 0x10))(plStack_700);
        func_0x0412c2d0(plVar7);
      }
      plVar7 = plStack_530;
      lStack_528 = 0;
      if (plStack_530 != (long *)0x0) {
        LOCK();
        plVar8 = plStack_530 + 1;
        lVar6 = *plVar8;
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (lVar6 == 0) {
          (**(code **)(*plStack_530 + 0x10))(plStack_530);
          func_0x0412c2d0(plVar7);
          lVar6 = *param_2;
          goto joined_r0x04982e1d;
        }
      }
      lVar6 = *param_2;
    }
joined_r0x04982e1d:
    if ((lVar6 == 0) &&
       (cVar3 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41), cVar3 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((*(char *)*param_2 == '\0') &&
       (cVar3 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41), cVar3 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    plStack_738 = (long *)(**(code **)(*(long *)param_2[2] + 0x948))();
    plVar7 = (long *)plStack_738[4];
    puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar19 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar19 = &UNK_0ef4c6e8;
    puVar9 = (undefined8 *)plVar7[1];
    if (puVar9 < (undefined8 *)plVar7[2]) {
      *puVar9 = puVar19;
      puVar9 = puVar9 + 1;
LAB_0498301f:
      plVar7[1] = (long)puVar9;
      plVar7 = (long *)plStack_738[4];
      puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
      if (puVar19 == (undefined8 *)0x0) {
        func_0x0eec74c0(8,0);
      }
      *puVar19 = &UNK_0ef4c738;
      puVar9 = (undefined8 *)plVar7[1];
      if ((undefined8 *)plVar7[2] <= puVar9) {
        lVar6 = *plVar7;
        lVar11 = (long)puVar9 - lVar6;
        puVar25 = (undefined8 *)((lVar11 >> 3) + 1);
        puVar9 = puVar19;
        puStack_740 = puVar19;
        plStack_720 = plVar7;
        if ((undefined8 *)0x1fffffffffffffff < puVar25) goto LAB_0498513f;
        uVar22 = plVar7[2] - lVar6;
        puVar9 = (undefined8 *)((long)uVar22 >> 2);
        if ((undefined8 *)((long)uVar22 >> 2) <= puVar25) {
          puVar9 = puVar25;
        }
        if (0x7ffffffffffffff7 < uVar22) {
          puVar9 = (undefined8 *)0x1fffffffffffffff;
        }
        lStack_718 = lVar6;
        if (puVar9 < (undefined8 *)0x2000000000000000) {
          lVar17 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)puVar9 * 8);
          if (lVar17 == 0) {
            func_0x0eec74c0((long)puVar9 * 8,0);
          }
          plStack_728 = (long *)((long)puVar9 * 8 + lVar17);
          *(undefined8 **)(lVar17 + lVar11) = puVar19;
          puVar9 = (undefined8 *)(lVar11 + lVar17 + 8);
          lVar17 = lVar11 + lVar17 + (lVar11 >> 3) * -8;
          memcpy(lVar17,lVar6,lVar11);
          *plVar7 = lVar17;
          plVar7[1] = (long)puVar9;
          plVar7[2] = (long)plStack_728;
          if (lVar6 != 0) {
            func_0x0412a280(lVar6,uVar22);
          }
          goto LAB_04983167;
        }
        goto LAB_04985144;
      }
      *puVar9 = puVar19;
      puVar9 = puVar9 + 1;
LAB_04983167:
      plVar7[1] = (long)puVar9;
      plVar7 = (long *)plStack_738[4];
      puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
      if (puVar19 == (undefined8 *)0x0) {
        func_0x0eec74c0(8,0);
      }
      *puVar19 = &UNK_0ef4c778;
      puVar9 = (undefined8 *)plVar7[1];
      if ((undefined8 *)plVar7[2] <= puVar9) {
        lVar6 = *plVar7;
        lVar11 = (long)puVar9 - lVar6;
        puVar25 = (undefined8 *)((lVar11 >> 3) + 1);
        puVar9 = puVar19;
        puStack_740 = puVar19;
        plStack_720 = plVar7;
        if ((undefined8 *)0x1fffffffffffffff < puVar25) goto LAB_04985149;
        uVar22 = plVar7[2] - lVar6;
        puVar9 = (undefined8 *)((long)uVar22 >> 2);
        if ((undefined8 *)((long)uVar22 >> 2) <= puVar25) {
          puVar9 = puVar25;
        }
        if (0x7ffffffffffffff7 < uVar22) {
          puVar9 = (undefined8 *)0x1fffffffffffffff;
        }
        lStack_718 = lVar6;
        if (puVar9 < (undefined8 *)0x2000000000000000) {
          lVar17 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)puVar9 * 8);
          if (lVar17 == 0) {
            func_0x0eec74c0((long)puVar9 * 8,0);
          }
          plStack_728 = (long *)((long)puVar9 * 8 + lVar17);
          *(undefined8 **)(lVar17 + lVar11) = puVar19;
          puVar9 = (undefined8 *)(lVar11 + lVar17 + 8);
          lVar17 = lVar11 + lVar17 + (lVar11 >> 3) * -8;
          memcpy(lVar17,lVar6,lVar11);
          *plVar7 = lVar17;
          plVar7[1] = (long)puVar9;
          plVar7[2] = (long)plStack_728;
          if (lVar6 != 0) {
            func_0x0412a280(lVar6,uVar22);
          }
          goto LAB_049832af;
        }
        goto LAB_0498514e;
      }
      *puVar9 = puVar19;
      puVar9 = puVar9 + 1;
LAB_049832af:
      plVar7[1] = (long)puVar9;
      plVar7 = (long *)plStack_738[4];
      puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
      if (puVar19 == (undefined8 *)0x0) {
        func_0x0eec74c0(8,0);
      }
      *puVar19 = &UNK_0ef4c7b8;
      puVar9 = (undefined8 *)plVar7[1];
      if ((undefined8 *)plVar7[2] <= puVar9) {
        lVar6 = *plVar7;
        lVar11 = (long)puVar9 - lVar6;
        puVar25 = (undefined8 *)((lVar11 >> 3) + 1);
        puVar9 = puVar19;
        puStack_740 = puVar19;
        plStack_720 = plVar7;
        if ((undefined8 *)0x1fffffffffffffff < puVar25) goto LAB_04985153;
        uVar22 = plVar7[2] - lVar6;
        puVar9 = (undefined8 *)((long)uVar22 >> 2);
        if ((undefined8 *)((long)uVar22 >> 2) <= puVar25) {
          puVar9 = puVar25;
        }
        if (0x7ffffffffffffff7 < uVar22) {
          puVar9 = (undefined8 *)0x1fffffffffffffff;
        }
        lStack_718 = lVar6;
        if (puVar9 < (undefined8 *)0x2000000000000000) {
          lVar17 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)puVar9 * 8);
          if (lVar17 == 0) {
            func_0x0eec74c0((long)puVar9 * 8,0);
          }
          plStack_728 = (long *)((long)puVar9 * 8 + lVar17);
          *(undefined8 **)(lVar17 + lVar11) = puVar19;
          puVar9 = (undefined8 *)(lVar11 + lVar17 + 8);
          lVar17 = lVar11 + lVar17 + (lVar11 >> 3) * -8;
          memcpy(lVar17,lVar6,lVar11);
          *plVar7 = lVar17;
          plVar7[1] = (long)puVar9;
          plVar7[2] = (long)plStack_728;
          if (lVar6 != 0) {
            func_0x0412a280(lVar6,uVar22);
          }
          goto LAB_049833f7;
        }
        goto LAB_04985158;
      }
      *puVar9 = puVar19;
      puVar9 = puVar9 + 1;
LAB_049833f7:
      plVar7[1] = (long)puVar9;
      plVar7 = (long *)plStack_738[4];
      puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
      if (puVar19 == (undefined8 *)0x0) {
        func_0x0eec74c0(8,0);
      }
      *puVar19 = &UNK_0ef4c7f8;
      puVar9 = (undefined8 *)plVar7[1];
      if ((undefined8 *)plVar7[2] <= puVar9) {
        lVar6 = *plVar7;
        lVar11 = (long)puVar9 - lVar6;
        puVar25 = (undefined8 *)((lVar11 >> 3) + 1);
        puVar9 = puVar19;
        puStack_740 = puVar19;
        plStack_720 = plVar7;
        if ((undefined8 *)0x1fffffffffffffff < puVar25) goto LAB_0498515d;
        uVar22 = plVar7[2] - lVar6;
        puVar9 = (undefined8 *)((long)uVar22 >> 2);
        if ((undefined8 *)((long)uVar22 >> 2) <= puVar25) {
          puVar9 = puVar25;
        }
        if (0x7ffffffffffffff7 < uVar22) {
          puVar9 = (undefined8 *)0x1fffffffffffffff;
        }
        lStack_718 = lVar6;
        if (puVar9 < (undefined8 *)0x2000000000000000) {
          lVar17 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)puVar9 * 8);
          if (lVar17 == 0) {
            func_0x0eec74c0((long)puVar9 * 8,0);
          }
          plStack_728 = (long *)((long)puVar9 * 8 + lVar17);
          *(undefined8 **)(lVar17 + lVar11) = puVar19;
          puVar9 = (undefined8 *)(lVar11 + lVar17 + 8);
          lVar17 = lVar11 + lVar17 + (lVar11 >> 3) * -8;
          memcpy(lVar17,lVar6,lVar11);
          *plVar7 = lVar17;
          plVar7[1] = (long)puVar9;
          plVar7[2] = (long)plStack_728;
          if (lVar6 != 0) {
            func_0x0412a280(lVar6,uVar22);
          }
          goto LAB_0498353f;
        }
        goto LAB_04985162;
      }
      *puVar9 = puVar19;
      puVar9 = puVar9 + 1;
LAB_0498353f:
      plVar7[1] = (long)puVar9;
      plVar7 = (long *)plStack_738[4];
      puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
      if (puVar19 == (undefined8 *)0x0) {
        func_0x0eec74c0(8,0);
      }
      *puVar19 = &UNK_0ef4c838;
      puVar9 = (undefined8 *)plVar7[1];
      if ((undefined8 *)plVar7[2] <= puVar9) {
        lVar6 = *plVar7;
        lVar11 = (long)puVar9 - lVar6;
        puVar25 = (undefined8 *)((lVar11 >> 3) + 1);
        puVar9 = puVar19;
        puStack_740 = puVar19;
        plStack_720 = plVar7;
        if ((undefined8 *)0x1fffffffffffffff < puVar25) goto LAB_04985167;
        uVar22 = plVar7[2] - lVar6;
        puVar9 = (undefined8 *)((long)uVar22 >> 2);
        if ((undefined8 *)((long)uVar22 >> 2) <= puVar25) {
          puVar9 = puVar25;
        }
        if (0x7ffffffffffffff7 < uVar22) {
          puVar9 = (undefined8 *)0x1fffffffffffffff;
        }
        lStack_718 = lVar6;
        if (puVar9 < (undefined8 *)0x2000000000000000) {
          lVar17 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)puVar9 * 8);
          if (lVar17 == 0) {
            func_0x0eec74c0((long)puVar9 * 8,0);
          }
          plStack_728 = (long *)((long)puVar9 * 8 + lVar17);
          *(undefined8 **)(lVar17 + lVar11) = puVar19;
          puVar9 = (undefined8 *)(lVar11 + lVar17 + 8);
          lVar17 = lVar11 + lVar17 + (lVar11 >> 3) * -8;
          memcpy(lVar17,lVar6,lVar11);
          *plVar7 = lVar17;
          plVar7[1] = (long)puVar9;
          plVar7[2] = (long)plStack_728;
          if (lVar6 != 0) {
            func_0x0412a280(lVar6,uVar22);
          }
          goto LAB_04983687;
        }
        goto LAB_0498516c;
      }
      *puVar9 = puVar19;
      puVar9 = puVar9 + 1;
LAB_04983687:
      plVar7[1] = (long)puVar9;
      plVar7 = (long *)plStack_738[4];
      puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
      if (puVar19 == (undefined8 *)0x0) {
        func_0x0eec74c0(8,0);
      }
      *puVar19 = &UNK_0ef4c878;
      puVar9 = (undefined8 *)plVar7[1];
      if ((undefined8 *)plVar7[2] <= puVar9) {
        lVar6 = *plVar7;
        lVar11 = (long)puVar9 - lVar6;
        puVar25 = (undefined8 *)((lVar11 >> 3) + 1);
        puVar9 = puVar19;
        puStack_740 = puVar19;
        plStack_720 = plVar7;
        if ((undefined8 *)0x1fffffffffffffff < puVar25) goto LAB_04985171;
        uVar22 = plVar7[2] - lVar6;
        puVar9 = (undefined8 *)((long)uVar22 >> 2);
        if ((undefined8 *)((long)uVar22 >> 2) <= puVar25) {
          puVar9 = puVar25;
        }
        if (0x7ffffffffffffff7 < uVar22) {
          puVar9 = (undefined8 *)0x1fffffffffffffff;
        }
        lStack_718 = lVar6;
        if (puVar9 < (undefined8 *)0x2000000000000000) {
          lVar17 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)puVar9 * 8);
          if (lVar17 == 0) {
            func_0x0eec74c0((long)puVar9 * 8,0);
          }
          plStack_728 = (long *)((long)puVar9 * 8 + lVar17);
          *(undefined8 **)(lVar17 + lVar11) = puVar19;
          puVar9 = (undefined8 *)(lVar11 + lVar17 + 8);
          lVar17 = lVar11 + lVar17 + (lVar11 >> 3) * -8;
          memcpy(lVar17,lVar6,lVar11);
          *plVar7 = lVar17;
          plVar7[1] = (long)puVar9;
          plVar7[2] = (long)plStack_728;
          if (lVar6 != 0) {
            func_0x0412a280(lVar6,uVar22);
          }
          goto LAB_049837cf;
        }
        goto LAB_04985176;
      }
      *puVar9 = puVar19;
      puVar9 = puVar9 + 1;
LAB_049837cf:
      plVar7[1] = (long)puVar9;
      plVar7 = (long *)plStack_738[4];
      puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
      if (puVar19 == (undefined8 *)0x0) {
        func_0x0eec74c0(8,0);
      }
      *puVar19 = &UNK_0ef4c8b8;
      puVar9 = (undefined8 *)plVar7[1];
      if ((undefined8 *)plVar7[2] <= puVar9) {
        lVar6 = *plVar7;
        lVar11 = (long)puVar9 - lVar6;
        puVar25 = (undefined8 *)((lVar11 >> 3) + 1);
        puVar9 = puVar19;
        puStack_740 = puVar19;
        plStack_720 = plVar7;
        if ((undefined8 *)0x1fffffffffffffff < puVar25) goto LAB_0498517b;
        uVar22 = plVar7[2] - lVar6;
        puVar9 = (undefined8 *)((long)uVar22 >> 2);
        if ((undefined8 *)((long)uVar22 >> 2) <= puVar25) {
          puVar9 = puVar25;
        }
        if (0x7ffffffffffffff7 < uVar22) {
          puVar9 = (undefined8 *)0x1fffffffffffffff;
        }
        lStack_718 = lVar6;
        if (puVar9 < (undefined8 *)0x2000000000000000) {
          lVar17 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)puVar9 * 8);
          if (lVar17 == 0) {
            func_0x0eec74c0((long)puVar9 * 8,0);
          }
          plStack_728 = (long *)((long)puVar9 * 8 + lVar17);
          *(undefined8 **)(lVar17 + lVar11) = puVar19;
          puVar9 = (undefined8 *)(lVar11 + lVar17 + 8);
          lVar17 = lVar11 + lVar17 + (lVar11 >> 3) * -8;
          memcpy(lVar17,lVar6,lVar11);
          *plVar7 = lVar17;
          plVar7[1] = (long)puVar9;
          plVar7[2] = (long)plStack_728;
          if (lVar6 != 0) {
            func_0x0412a280(lVar6,uVar22);
          }
          goto LAB_04983917;
        }
        goto LAB_04985180;
      }
      *puVar9 = puVar19;
      puVar9 = puVar9 + 1;
LAB_04983917:
      plVar7[1] = (long)puVar9;
      plVar7 = (long *)plStack_738[4];
      puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
      if (puVar19 == (undefined8 *)0x0) {
        func_0x0eec74c0(8,0);
      }
      *puVar19 = &UNK_0ef4c8f8;
      puVar9 = (undefined8 *)plVar7[1];
      if ((undefined8 *)plVar7[2] <= puVar9) {
        lVar6 = *plVar7;
        lVar11 = (long)puVar9 - lVar6;
        puVar25 = (undefined8 *)((lVar11 >> 3) + 1);
        puVar9 = puVar19;
        puStack_740 = puVar19;
        plStack_720 = plVar7;
        if ((undefined8 *)0x1fffffffffffffff < puVar25) goto LAB_04985185;
        uVar22 = plVar7[2] - lVar6;
        puVar9 = (undefined8 *)((long)uVar22 >> 2);
        if ((undefined8 *)((long)uVar22 >> 2) <= puVar25) {
          puVar9 = puVar25;
        }
        if (0x7ffffffffffffff7 < uVar22) {
          puVar9 = (undefined8 *)0x1fffffffffffffff;
        }
        lStack_718 = lVar6;
        if (puVar9 < (undefined8 *)0x2000000000000000) {
          lVar17 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)puVar9 * 8);
          if (lVar17 == 0) {
            func_0x0eec74c0((long)puVar9 * 8,0);
          }
          plStack_728 = (long *)((long)puVar9 * 8 + lVar17);
          *(undefined8 **)(lVar17 + lVar11) = puVar19;
          puVar9 = (undefined8 *)(lVar11 + lVar17 + 8);
          lVar17 = lVar11 + lVar17 + (lVar11 >> 3) * -8;
          memcpy(lVar17,lVar6,lVar11);
          *plVar7 = lVar17;
          plVar7[1] = (long)puVar9;
          plVar7[2] = (long)plStack_728;
          if (lVar6 != 0) {
            func_0x0412a280(lVar6,uVar22);
          }
          goto LAB_04983a5f;
        }
        goto LAB_0498518a;
      }
      *puVar9 = puVar19;
      puVar9 = puVar9 + 1;
LAB_04983a5f:
      plVar7[1] = (long)puVar9;
      plVar7 = (long *)plStack_738[4];
      puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
      if (puVar19 == (undefined8 *)0x0) {
        func_0x0eec74c0(8,0);
      }
      *puVar19 = &UNK_0ef4c938;
      puVar9 = (undefined8 *)plVar7[1];
      if ((undefined8 *)plVar7[2] <= puVar9) {
        lVar6 = *plVar7;
        lVar11 = (long)puVar9 - lVar6;
        puVar25 = (undefined8 *)((lVar11 >> 3) + 1);
        puVar9 = puVar19;
        puStack_740 = puVar19;
        plStack_720 = plVar7;
        if ((undefined8 *)0x1fffffffffffffff < puVar25) goto LAB_0498518f;
        uVar22 = plVar7[2] - lVar6;
        puVar9 = (undefined8 *)((long)uVar22 >> 2);
        if ((undefined8 *)((long)uVar22 >> 2) <= puVar25) {
          puVar9 = puVar25;
        }
        if (0x7ffffffffffffff7 < uVar22) {
          puVar9 = (undefined8 *)0x1fffffffffffffff;
        }
        lStack_718 = lVar6;
        if (puVar9 < (undefined8 *)0x2000000000000000) {
          lVar17 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)puVar9 * 8);
          if (lVar17 == 0) {
            func_0x0eec74c0((long)puVar9 * 8,0);
          }
          plStack_728 = (long *)((long)puVar9 * 8 + lVar17);
          *(undefined8 **)(lVar17 + lVar11) = puVar19;
          puVar9 = (undefined8 *)(lVar11 + lVar17 + 8);
          lVar17 = lVar11 + lVar17 + (lVar11 >> 3) * -8;
          memcpy(lVar17,lVar6,lVar11);
          *plVar7 = lVar17;
          plVar7[1] = (long)puVar9;
          plVar7[2] = (long)plStack_728;
          if (lVar6 != 0) {
            func_0x0412a280(lVar6,uVar22);
          }
          goto LAB_04983ba7;
        }
        goto LAB_04985194;
      }
      *puVar9 = puVar19;
      puVar9 = puVar9 + 1;
LAB_04983ba7:
      plVar7[1] = (long)puVar9;
      plVar7 = (long *)plStack_738[4];
      puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
      if (puVar19 == (undefined8 *)0x0) {
        func_0x0eec74c0(8,0);
      }
      *puVar19 = &UNK_0ef4c978;
      puVar9 = (undefined8 *)plVar7[1];
      if ((undefined8 *)plVar7[2] <= puVar9) {
        lVar6 = *plVar7;
        lVar11 = (long)puVar9 - lVar6;
        puVar25 = (undefined8 *)((lVar11 >> 3) + 1);
        puVar9 = puVar19;
        puStack_740 = puVar19;
        plStack_720 = plVar7;
        if ((undefined8 *)0x1fffffffffffffff < puVar25) goto LAB_04985199;
        uVar22 = plVar7[2] - lVar6;
        puVar9 = (undefined8 *)((long)uVar22 >> 2);
        if ((undefined8 *)((long)uVar22 >> 2) <= puVar25) {
          puVar9 = puVar25;
        }
        if (0x7ffffffffffffff7 < uVar22) {
          puVar9 = (undefined8 *)0x1fffffffffffffff;
        }
        lStack_718 = lVar6;
        if (puVar9 < (undefined8 *)0x2000000000000000) {
          lVar17 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)puVar9 * 8);
          if (lVar17 == 0) {
            func_0x0eec74c0((long)puVar9 * 8,0);
          }
          plStack_728 = (long *)((long)puVar9 * 8 + lVar17);
          *(undefined8 **)(lVar17 + lVar11) = puVar19;
          puVar9 = (undefined8 *)(lVar11 + lVar17 + 8);
          lVar17 = lVar11 + lVar17 + (lVar11 >> 3) * -8;
          memcpy(lVar17,lVar6,lVar11);
          *plVar7 = lVar17;
          plVar7[1] = (long)puVar9;
          plVar7[2] = (long)plStack_728;
          if (lVar6 != 0) {
            func_0x0412a280(lVar6,uVar22);
          }
          goto LAB_04983cef;
        }
        goto LAB_0498519e;
      }
      *puVar9 = puVar19;
      puVar9 = puVar9 + 1;
LAB_04983cef:
      plVar7[1] = (long)puVar9;
      plVar7 = (long *)plStack_738[4];
      puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
      if (puVar19 == (undefined8 *)0x0) {
        func_0x0eec74c0(8,0);
      }
      *puVar19 = &UNK_0ef4c9b8;
      puVar9 = (undefined8 *)plVar7[1];
      if ((undefined8 *)plVar7[2] <= puVar9) {
        lVar6 = *plVar7;
        lVar11 = (long)puVar9 - lVar6;
        puVar25 = (undefined8 *)((lVar11 >> 3) + 1);
        puVar9 = puVar19;
        puStack_740 = puVar19;
        plStack_720 = plVar7;
        if ((undefined8 *)0x1fffffffffffffff < puVar25) goto LAB_049851a3;
        uVar22 = plVar7[2] - lVar6;
        puVar9 = (undefined8 *)((long)uVar22 >> 2);
        if ((undefined8 *)((long)uVar22 >> 2) <= puVar25) {
          puVar9 = puVar25;
        }
        if (0x7ffffffffffffff7 < uVar22) {
          puVar9 = (undefined8 *)0x1fffffffffffffff;
        }
        lStack_718 = lVar6;
        if (puVar9 < (undefined8 *)0x2000000000000000) {
          lVar17 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)puVar9 * 8);
          if (lVar17 == 0) {
            func_0x0eec74c0((long)puVar9 * 8,0);
          }
          plStack_728 = (long *)((long)puVar9 * 8 + lVar17);
          *(undefined8 **)(lVar17 + lVar11) = puVar19;
          puVar9 = (undefined8 *)(lVar11 + lVar17 + 8);
          lVar17 = lVar11 + lVar17 + (lVar11 >> 3) * -8;
          memcpy(lVar17,lVar6,lVar11);
          *plVar7 = lVar17;
          plVar7[1] = (long)puVar9;
          plVar7[2] = (long)plStack_728;
          if (lVar6 != 0) {
            func_0x0412a280(lVar6,uVar22);
          }
          goto LAB_04983e37;
        }
        goto LAB_049851a8;
      }
      *puVar9 = puVar19;
      puVar9 = puVar9 + 1;
LAB_04983e37:
      plVar7[1] = (long)puVar9;
      plVar7 = (long *)plStack_738[4];
      puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
      if (puVar19 == (undefined8 *)0x0) {
        func_0x0eec74c0(8,0);
      }
      *puVar19 = &UNK_0ef4c9f8;
      puVar9 = (undefined8 *)plVar7[1];
      if ((undefined8 *)plVar7[2] <= puVar9) {
        lVar6 = *plVar7;
        lVar11 = (long)puVar9 - lVar6;
        puVar25 = (undefined8 *)((lVar11 >> 3) + 1);
        puVar9 = puVar19;
        puStack_740 = puVar19;
        plStack_720 = plVar7;
        if ((undefined8 *)0x1fffffffffffffff < puVar25) goto LAB_049851ad;
        uVar22 = plVar7[2] - lVar6;
        puVar9 = (undefined8 *)((long)uVar22 >> 2);
        if ((undefined8 *)((long)uVar22 >> 2) <= puVar25) {
          puVar9 = puVar25;
        }
        if (0x7ffffffffffffff7 < uVar22) {
          puVar9 = (undefined8 *)0x1fffffffffffffff;
        }
        lStack_718 = lVar6;
        if (puVar9 < (undefined8 *)0x2000000000000000) {
          lVar17 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)puVar9 * 8);
          if (lVar17 == 0) {
            func_0x0eec74c0((long)puVar9 * 8,0);
          }
          plStack_728 = (long *)((long)puVar9 * 8 + lVar17);
          *(undefined8 **)(lVar17 + lVar11) = puVar19;
          puVar9 = (undefined8 *)(lVar11 + lVar17 + 8);
          lVar17 = lVar11 + lVar17 + (lVar11 >> 3) * -8;
          memcpy(lVar17,lVar6,lVar11);
          *plVar7 = lVar17;
          plVar7[1] = (long)puVar9;
          plVar7[2] = (long)plStack_728;
          if (lVar6 != 0) {
            func_0x0412a280(lVar6,uVar22);
          }
          goto LAB_04983f7f;
        }
        goto LAB_049851b2;
      }
      *puVar9 = puVar19;
      puVar9 = puVar9 + 1;
LAB_04983f7f:
      plVar7[1] = (long)puVar9;
      plVar7 = (long *)plStack_738[4];
      puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
      if (puVar19 == (undefined8 *)0x0) {
        func_0x0eec74c0(8,0);
      }
      *puVar19 = &UNK_0ef4ca38;
      puVar9 = (undefined8 *)plVar7[1];
      if ((undefined8 *)plVar7[2] <= puVar9) {
        lVar6 = *plVar7;
        lVar11 = (long)puVar9 - lVar6;
        puVar25 = (undefined8 *)((lVar11 >> 3) + 1);
        puVar9 = puVar19;
        puStack_740 = puVar19;
        plStack_720 = plVar7;
        if ((undefined8 *)0x1fffffffffffffff < puVar25) goto LAB_049851b7;
        uVar22 = plVar7[2] - lVar6;
        puVar9 = (undefined8 *)((long)uVar22 >> 2);
        if ((undefined8 *)((long)uVar22 >> 2) <= puVar25) {
          puVar9 = puVar25;
        }
        if (0x7ffffffffffffff7 < uVar22) {
          puVar9 = (undefined8 *)0x1fffffffffffffff;
        }
        lStack_718 = lVar6;
        if (puVar9 < (undefined8 *)0x2000000000000000) {
          lVar17 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)puVar9 * 8);
          if (lVar17 == 0) {
            func_0x0eec74c0((long)puVar9 * 8,0);
          }
          plStack_728 = (long *)((long)puVar9 * 8 + lVar17);
          *(undefined8 **)(lVar17 + lVar11) = puVar19;
          puVar9 = (undefined8 *)(lVar11 + lVar17 + 8);
          lVar17 = lVar11 + lVar17 + (lVar11 >> 3) * -8;
          memcpy(lVar17,lVar6,lVar11);
          *plVar7 = lVar17;
          plVar7[1] = (long)puVar9;
          plVar7[2] = (long)plStack_728;
          if (lVar6 != 0) {
            func_0x0412a280(lVar6,uVar22);
          }
          goto LAB_049840c7;
        }
        goto LAB_049851bc;
      }
      *puVar9 = puVar19;
      puVar9 = puVar9 + 1;
LAB_049840c7:
      plVar7[1] = (long)puVar9;
      plVar7 = (long *)plStack_738[4];
      puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
      if (puVar19 == (undefined8 *)0x0) {
        func_0x0eec74c0(8,0);
      }
      *puVar19 = &UNK_0ef4ca78;
      puVar9 = (undefined8 *)plVar7[1];
      if ((undefined8 *)plVar7[2] <= puVar9) {
        lVar6 = *plVar7;
        lVar11 = (long)puVar9 - lVar6;
        puVar25 = (undefined8 *)((lVar11 >> 3) + 1);
        puVar9 = puVar19;
        puStack_740 = puVar19;
        plStack_720 = plVar7;
        if ((undefined8 *)0x1fffffffffffffff < puVar25) goto LAB_049851c1;
        uVar22 = plVar7[2] - lVar6;
        puVar9 = (undefined8 *)((long)uVar22 >> 2);
        if ((undefined8 *)((long)uVar22 >> 2) <= puVar25) {
          puVar9 = puVar25;
        }
        if (0x7ffffffffffffff7 < uVar22) {
          puVar9 = (undefined8 *)0x1fffffffffffffff;
        }
        lStack_718 = lVar6;
        if (puVar9 < (undefined8 *)0x2000000000000000) {
          lVar17 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)puVar9 * 8);
          if (lVar17 == 0) {
            func_0x0eec74c0((long)puVar9 * 8,0);
          }
          plStack_728 = (long *)((long)puVar9 * 8 + lVar17);
          *(undefined8 **)(lVar17 + lVar11) = puVar19;
          puVar9 = (undefined8 *)(lVar11 + lVar17 + 8);
          lVar17 = lVar11 + lVar17 + (lVar11 >> 3) * -8;
          memcpy(lVar17,lVar6,lVar11);
          *plVar7 = lVar17;
          plVar7[1] = (long)puVar9;
          plVar7[2] = (long)plStack_728;
          if (lVar6 != 0) {
            func_0x0412a280(lVar6,uVar22);
          }
          goto LAB_0498420f;
        }
        goto LAB_049851c6;
      }
      *puVar9 = puVar19;
      puVar9 = puVar9 + 1;
LAB_0498420f:
      plVar7[1] = (long)puVar9;
      plVar7 = (long *)plStack_738[4];
      puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
      if (puVar19 == (undefined8 *)0x0) {
        func_0x0eec74c0(8,0);
      }
      *puVar19 = &UNK_0ef4cab8;
      puVar9 = (undefined8 *)plVar7[1];
      if ((undefined8 *)plVar7[2] <= puVar9) {
        lVar6 = *plVar7;
        lVar11 = (long)puVar9 - lVar6;
        puVar25 = (undefined8 *)((lVar11 >> 3) + 1);
        puVar9 = puVar19;
        puStack_740 = puVar19;
        plStack_720 = plVar7;
        if ((undefined8 *)0x1fffffffffffffff < puVar25) goto LAB_049851cb;
        uVar22 = plVar7[2] - lVar6;
        puVar9 = (undefined8 *)((long)uVar22 >> 2);
        if ((undefined8 *)((long)uVar22 >> 2) <= puVar25) {
          puVar9 = puVar25;
        }
        if (0x7ffffffffffffff7 < uVar22) {
          puVar9 = (undefined8 *)0x1fffffffffffffff;
        }
        lStack_718 = lVar6;
        if (puVar9 < (undefined8 *)0x2000000000000000) {
          lVar17 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)puVar9 * 8);
          if (lVar17 == 0) {
            func_0x0eec74c0((long)puVar9 * 8,0);
          }
          plStack_728 = (long *)((long)puVar9 * 8 + lVar17);
          *(undefined8 **)(lVar17 + lVar11) = puVar19;
          puVar9 = (undefined8 *)(lVar11 + lVar17 + 8);
          lVar17 = lVar11 + lVar17 + (lVar11 >> 3) * -8;
          memcpy(lVar17,lVar6,lVar11);
          *plVar7 = lVar17;
          plVar7[1] = (long)puVar9;
          plVar7[2] = (long)plStack_728;
          if (lVar6 != 0) {
            func_0x0412a280(lVar6,uVar22);
          }
          goto LAB_04984357;
        }
        goto LAB_049851d0;
      }
      *puVar9 = puVar19;
      puVar9 = puVar9 + 1;
LAB_04984357:
      plVar7[1] = (long)puVar9;
      plVar7 = (long *)plStack_738[4];
      puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
      if (puVar19 == (undefined8 *)0x0) {
        func_0x0eec74c0(8,0);
      }
      *puVar19 = &UNK_0ef4caf8;
      puVar9 = (undefined8 *)plVar7[1];
      if ((undefined8 *)plVar7[2] <= puVar9) {
        lVar6 = *plVar7;
        lVar11 = (long)puVar9 - lVar6;
        puVar25 = (undefined8 *)((lVar11 >> 3) + 1);
        puVar9 = puVar19;
        puStack_740 = puVar19;
        plStack_720 = plVar7;
        if ((undefined8 *)0x1fffffffffffffff < puVar25) goto LAB_049851d5;
        uVar22 = plVar7[2] - lVar6;
        puVar9 = (undefined8 *)((long)uVar22 >> 2);
        if ((undefined8 *)((long)uVar22 >> 2) <= puVar25) {
          puVar9 = puVar25;
        }
        if (0x7ffffffffffffff7 < uVar22) {
          puVar9 = (undefined8 *)0x1fffffffffffffff;
        }
        lStack_718 = lVar6;
        if (puVar9 < (undefined8 *)0x2000000000000000) {
          lVar17 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)puVar9 * 8);
          if (lVar17 == 0) {
            func_0x0eec74c0((long)puVar9 * 8,0);
          }
          plStack_728 = (long *)((long)puVar9 * 8 + lVar17);
          *(undefined8 **)(lVar17 + lVar11) = puVar19;
          puVar9 = (undefined8 *)(lVar11 + lVar17 + 8);
          lVar17 = lVar11 + lVar17 + (lVar11 >> 3) * -8;
          memcpy(lVar17,lVar6,lVar11);
          *plVar7 = lVar17;
          plVar7[1] = (long)puVar9;
          plVar7[2] = (long)plStack_728;
          if (lVar6 != 0) {
            func_0x0412a280(lVar6,uVar22);
          }
          goto LAB_0498449f;
        }
        goto LAB_049851da;
      }
      *puVar9 = puVar19;
      puVar9 = puVar9 + 1;
LAB_0498449f:
      plVar7[1] = (long)puVar9;
      plVar7 = (long *)plStack_738[4];
      puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
      if (puVar19 == (undefined8 *)0x0) {
        func_0x0eec74c0(8,0);
      }
      *puVar19 = &UNK_0ef4cb38;
      puVar9 = (undefined8 *)plVar7[1];
      if ((undefined8 *)plVar7[2] <= puVar9) {
        lVar6 = *plVar7;
        lVar11 = (long)puVar9 - lVar6;
        puVar25 = (undefined8 *)((lVar11 >> 3) + 1);
        puVar9 = puVar19;
        puStack_740 = puVar19;
        plStack_720 = plVar7;
        if ((undefined8 *)0x1fffffffffffffff < puVar25) goto LAB_049851df;
        uVar22 = plVar7[2] - lVar6;
        puVar9 = (undefined8 *)((long)uVar22 >> 2);
        if ((undefined8 *)((long)uVar22 >> 2) <= puVar25) {
          puVar9 = puVar25;
        }
        if (0x7ffffffffffffff7 < uVar22) {
          puVar9 = (undefined8 *)0x1fffffffffffffff;
        }
        lStack_718 = lVar6;
        if (puVar9 < (undefined8 *)0x2000000000000000) {
          lVar17 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)puVar9 * 8);
          if (lVar17 == 0) {
            func_0x0eec74c0((long)puVar9 * 8,0);
          }
          plStack_728 = (long *)((long)puVar9 * 8 + lVar17);
          *(undefined8 **)(lVar17 + lVar11) = puVar19;
          puVar9 = (undefined8 *)(lVar11 + lVar17 + 8);
          lVar17 = lVar11 + lVar17 + (lVar11 >> 3) * -8;
          memcpy(lVar17,lVar6,lVar11);
          *plVar7 = lVar17;
          plVar7[1] = (long)puVar9;
          plVar7[2] = (long)plStack_728;
          if (lVar6 != 0) {
            func_0x0412a280(lVar6,uVar22);
          }
          goto LAB_049845e7;
        }
        goto LAB_049851e4;
      }
      *puVar9 = puVar19;
      puVar9 = puVar9 + 1;
LAB_049845e7:
      plVar7[1] = (long)puVar9;
      plVar7 = (long *)plStack_738[4];
      puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
      if (puVar19 == (undefined8 *)0x0) {
        func_0x0eec74c0(8,0);
      }
      *puVar19 = &UNK_0ef4cb78;
      puVar9 = (undefined8 *)plVar7[1];
      if ((undefined8 *)plVar7[2] <= puVar9) {
        lVar6 = *plVar7;
        lVar11 = (long)puVar9 - lVar6;
        puVar25 = (undefined8 *)((lVar11 >> 3) + 1);
        puVar9 = puVar19;
        puStack_740 = puVar19;
        plStack_720 = plVar7;
        if ((undefined8 *)0x1fffffffffffffff < puVar25) goto LAB_049851e9;
        uVar22 = plVar7[2] - lVar6;
        puVar9 = (undefined8 *)((long)uVar22 >> 2);
        if ((undefined8 *)((long)uVar22 >> 2) <= puVar25) {
          puVar9 = puVar25;
        }
        if (0x7ffffffffffffff7 < uVar22) {
          puVar9 = (undefined8 *)0x1fffffffffffffff;
        }
        lStack_718 = lVar6;
        if (puVar9 < (undefined8 *)0x2000000000000000) {
          lVar17 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)puVar9 * 8);
          if (lVar17 == 0) {
            func_0x0eec74c0((long)puVar9 * 8,0);
          }
          plStack_728 = (long *)((long)puVar9 * 8 + lVar17);
          *(undefined8 **)(lVar17 + lVar11) = puVar19;
          puVar9 = (undefined8 *)(lVar11 + lVar17 + 8);
          lVar17 = lVar11 + lVar17 + (lVar11 >> 3) * -8;
          memcpy(lVar17,lVar6,lVar11);
          *plVar7 = lVar17;
          plVar7[1] = (long)puVar9;
          plVar7[2] = (long)plStack_728;
          if (lVar6 != 0) {
            func_0x0412a280(lVar6,uVar22);
          }
          goto LAB_0498472f;
        }
        goto LAB_049851ee;
      }
      *puVar9 = puVar19;
      puVar9 = puVar9 + 1;
LAB_0498472f:
      plVar7[1] = (long)puVar9;
      plVar7 = (long *)plStack_738[4];
      puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
      if (puVar19 == (undefined8 *)0x0) {
        func_0x0eec74c0(8,0);
      }
      *puVar19 = &UNK_0ef4cbb8;
      puVar9 = (undefined8 *)plVar7[1];
      if (puVar9 < (undefined8 *)plVar7[2]) {
        *puVar9 = puVar19;
        plVar21 = puVar9 + 1;
        plVar8 = plVar21;
        goto LAB_0498486d;
      }
      lVar6 = *plVar7;
      plVar8 = (long *)((long)puVar9 - lVar6);
      puVar25 = (undefined8 *)(((long)plVar8 >> 3) + 1);
      puVar9 = puVar19;
      puStack_740 = puVar19;
      plStack_720 = plVar7;
      if ((undefined8 *)0x1fffffffffffffff < puVar25) goto LAB_049851f3;
      uVar22 = plVar7[2] - lVar6;
      puVar9 = (undefined8 *)((long)uVar22 >> 2);
      if ((undefined8 *)((long)uVar22 >> 2) <= puVar25) {
        puVar9 = puVar25;
      }
      if (0x7ffffffffffffff7 < uVar22) {
        puVar9 = (undefined8 *)0x1fffffffffffffff;
      }
      lStack_718 = lVar6;
      if (puVar9 < (undefined8 *)0x2000000000000000) break;
    }
    else {
      lVar6 = *plVar7;
      lVar11 = (long)puVar9 - lVar6;
      puVar25 = (undefined8 *)((lVar11 >> 3) + 1);
      puStack_740 = puVar19;
      plStack_720 = plVar7;
      if (puVar25 < (undefined8 *)0x2000000000000000) {
        uVar22 = plVar7[2] - lVar6;
        puVar9 = (undefined8 *)((long)uVar22 >> 2);
        if ((undefined8 *)((long)uVar22 >> 2) <= puVar25) {
          puVar9 = puVar25;
        }
        if (0x7ffffffffffffff7 < uVar22) {
          puVar9 = (undefined8 *)0x1fffffffffffffff;
        }
        lStack_718 = lVar6;
        if (puVar9 < (undefined8 *)0x2000000000000000) {
          lVar17 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)puVar9 * 8);
          if (lVar17 == 0) {
            func_0x0eec74c0((long)puVar9 * 8,0);
          }
          plStack_728 = (long *)((long)puVar9 * 8 + lVar17);
          *(undefined8 **)(lVar17 + lVar11) = puVar19;
          puVar9 = (undefined8 *)(lVar11 + lVar17 + 8);
          lVar17 = lVar11 + lVar17 + (lVar11 >> 3) * -8;
          memcpy(lVar17,lVar6,lVar11);
          *plVar7 = lVar17;
          plVar7[1] = (long)puVar9;
          plVar7[2] = (long)plStack_728;
          if (lVar6 != 0) {
            func_0x0412a280(lVar6,uVar22);
          }
          goto LAB_0498301f;
        }
      }
      else {
        func_0x04a1a140();
        puVar9 = puVar19;
      }
      FUN_04882eb0();
LAB_0498513f:
      func_0x04a1a140();
LAB_04985144:
      FUN_04882eb0();
LAB_04985149:
      func_0x04a1a140();
LAB_0498514e:
      FUN_04882eb0();
LAB_04985153:
      func_0x04a1a140();
LAB_04985158:
      FUN_04882eb0();
LAB_0498515d:
      func_0x04a1a140();
LAB_04985162:
      FUN_04882eb0();
LAB_04985167:
      func_0x04a1a140();
LAB_0498516c:
      FUN_04882eb0();
LAB_04985171:
      func_0x04a1a140();
LAB_04985176:
      FUN_04882eb0();
LAB_0498517b:
      func_0x04a1a140();
LAB_04985180:
      FUN_04882eb0();
LAB_04985185:
      func_0x04a1a140();
LAB_0498518a:
      FUN_04882eb0();
LAB_0498518f:
      func_0x04a1a140();
LAB_04985194:
      FUN_04882eb0();
LAB_04985199:
      func_0x04a1a140();
LAB_0498519e:
      FUN_04882eb0();
LAB_049851a3:
      func_0x04a1a140();
LAB_049851a8:
      FUN_04882eb0();
LAB_049851ad:
      func_0x04a1a140();
LAB_049851b2:
      FUN_04882eb0();
LAB_049851b7:
      func_0x04a1a140();
LAB_049851bc:
      FUN_04882eb0();
LAB_049851c1:
      func_0x04a1a140();
LAB_049851c6:
      FUN_04882eb0();
LAB_049851cb:
      func_0x04a1a140();
LAB_049851d0:
      FUN_04882eb0();
LAB_049851d5:
      func_0x04a1a140();
LAB_049851da:
      FUN_04882eb0();
LAB_049851df:
      func_0x04a1a140();
LAB_049851e4:
      FUN_04882eb0();
LAB_049851e9:
      func_0x04a1a140();
LAB_049851ee:
      FUN_04882eb0();
LAB_049851f3:
      func_0x04a1a140();
    }
    FUN_04882eb0();
LAB_049851fd:
    func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300);
    _DAT_00000000 = 0xdeadc0de;
LAB_04985230:
    func_0x0eec74c0(0x30,0);
LAB_049850f5:
    puVar9[4] = 0;
    puVar9[5] = 0;
    puVar9[2] = 0;
    puVar9[3] = 0;
    *puVar9 = 0;
    puVar9[1] = 0;
    _DAT_0f6d23a8 = puVar9;
    func_0x0eee2f40(&UNK_0bf8e7a0,&DAT_0f6d23a8,0xf53dab8);
    func_0x0410844d(&DAT_0f6d23b0);
  } while( true );
  lVar11 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)puVar9 * 8);
  if (lVar11 == 0) {
    func_0x0eec74c0((long)puVar9 * 8,0);
  }
  *(undefined8 **)(lVar11 + (long)plVar8) = puVar19;
  plVar21 = (long *)((long)plVar8 + lVar11 + 8);
  lVar17 = (long)plVar8 + ((long)plVar8 >> 3) * -8 + lVar11;
  memcpy(lVar17,lVar6,plVar8);
  *plVar7 = lVar17;
  plVar7[1] = (long)plVar21;
  plVar7[2] = (long)puVar9 * 8 + lVar11;
  if (lVar6 != 0) {
    func_0x0412a280(lVar6,uVar22);
  }
LAB_0498486d:
  plVar7[1] = (long)plVar21;
  uStack_418 = (char *)*param_2;
  plVar21 = (long *)param_2[1];
  if (plVar21 != (long *)0x0) {
    LOCK();
    plVar21[1] = plVar21[1] + 1;
    UNLOCK();
  }
  lStack_408 = param_2[2];
  uStack_410 = plVar21;
  if ((uStack_418 != (char *)0x0) && (*uStack_418 != '\0')) goto code_r0x049848bb;
LAB_04984d9f:
  func_0x04890760();
LAB_04984da4:
  func_0x0eec74c0(0x38,0);
  goto LAB_0498039b;
code_r0x049848bb:
  func_0x04967f80(plStack_738,auStack_4c0);
  uStack_418 = (char *)0x0;
  uStack_410 = (long *)0x0;
  if (plVar21 != (long *)0x0) {
    LOCK();
    plVar7 = plVar21 + 1;
    lVar6 = *plVar7;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
      func_0x0412c2d0(plVar21);
      plVar7 = uStack_410;
      lStack_408 = 0;
      if (uStack_410 != (long *)0x0) {
        lStack_408 = 0;
        LOCK();
        plVar8 = uStack_410 + 1;
        lVar6 = *plVar8;
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (lVar6 == 0) {
          (**(code **)(*uStack_410 + 0x10))(uStack_410);
          func_0x0412c2d0(plVar7);
          lVar6 = *param_2;
          goto joined_r0x049849a2;
        }
      }
    }
    else {
      lStack_408 = 0;
    }
  }
  lVar6 = *param_2;
joined_r0x049849a2:
  if ((lVar6 == 0) &&
     (cVar3 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_01207b8e),
     cVar3 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((*(char *)*param_2 == '\0') &&
     (cVar3 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_01207b8e),
     cVar3 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  lVar11 = (**(code **)(*(long *)param_2[2] + 0x908))();
  func_0x0bbbaec0(&uStack_418,param_5);
  lVar6 = *(long *)(lVar11 + 0x88);
  if (lVar6 != 0) {
    lVar17 = *(long *)(lVar11 + 0x90);
    lVar18 = lVar6;
    if (lVar6 != lVar17) {
      do {
        lVar18 = lVar17 + -0x138;
        func_0x04a3a0b0(lVar17 + -0xb0);
        func_0x04a3a0b0(lVar18);
        lVar17 = lVar18;
      } while (lVar18 != lVar6);
      lVar18 = *(long *)(lVar11 + 0x88);
    }
    *(long *)(lVar11 + 0x90) = lVar6;
    func_0x0412a280(lVar18,*(long *)(lVar11 + 0x98) - lVar18);
  }
  *(undefined4 *)(lVar11 + 0x88) = (undefined4)uStack_418;
  *(undefined4 *)(lVar11 + 0x8c) = uStack_418._4_4_;
  *(undefined4 *)(lVar11 + 0x90) = (undefined4)uStack_410;
  *(undefined4 *)(lVar11 + 0x94) = uStack_410._4_4_;
  *(long *)(lVar11 + 0x98) = lStack_408;
  if ((*param_2 == 0) &&
     (cVar3 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_01207b8e),
     cVar3 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((*(char *)*param_2 == '\0') &&
     (cVar3 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_01207b8e),
     cVar3 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  cVar3 = (**(code **)(*(long *)param_2[2] + 0x550))();
  if (cVar3 != '\0') {
    if ((*param_2 == 0) &&
       (cVar3 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_01207b8e),
       cVar3 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if (*(char *)*param_2 == '\x01') {
      lVar6 = *(long *)(*(long *)(param_2[2] + 0x2f0) + 0x18);
      cVar3 = *(char *)*param_2;
    }
    else {
      cVar3 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_01207b8e);
      if (cVar3 != '\0') {
        _DAT_00000000 = 0xdeadc0de;
      }
      lVar6 = *(long *)(*(long *)(param_2[2] + 0x2f0) + 0x18);
      if ((*param_2 == 0) &&
         (cVar3 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_01207b8e),
         cVar3 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      cVar3 = *(char *)*param_2;
    }
    if ((cVar3 == '\0') &&
       (cVar3 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_01207b8e),
       cVar3 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uVar13 = (**(code **)(*(long *)param_2[2] + 0x558))();
    func_0x0c966920(*(undefined8 *)(lVar6 + 8),uVar13,&UNK_011ae67c,0x14,5);
    func_0x0c967220(lVar6 + 0x48,lVar6);
  }
  plVar7 = (long *)CONCAT44(uStack_4ec,uStack_4f0);
  if (plVar7 != (long *)0x0) {
    LOCK();
    plVar8 = plVar7 + 1;
    lVar6 = *plVar8;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      func_0x0412c2d0(plVar7);
    }
  }
  if (lStack_448 != 0) {
    func_0x0412a280(lStack_448,CONCAT71(uStack_437,uStack_438) << 3);
  }
  if (lStack_460 != 0) {
    func_0x0412a280(lStack_460,lStack_450 << 3);
  }
  if ((uStack_4a8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_4a8 & 0xff00ffffffffffff) - 8);
  }
  uStack_4a8 = 0;
  if ((uStack_4b0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_4b0 & 0xff00ffffffffffff) - 8);
  }
  return;
}



/* ---- referenced strings ----
 * 0x1583420   underground_pass
 * 0x1583438  ,after_underground_pass
 * 0x1583450  &before_surface_pass
 * 0x1583480  $after_surface_pass
 */
