/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x9f5d8c0 (ELF vaddr 0x9e5d8c0)
 * Label: caller-of-callee
 * Body:  [[09f5d8c0, 09f5ee5a] [09f5ee60, 09f5f023] [09f5f030, 09f5f426] [09f5f430, 09f5f522] [09f5f530, 09f5f760] [09f5f770, 09f5f7a7] [09f5f7b0, 09f5f7f1] [09f5f800, 09f5f824] [09f5f830, 09f5fa66] [09f5fa70, 09f60376] [09f60380, 09f605ce] [09f605d0, 09f60acd] [09f60ad0, 09f610b3] [09f610c0, 09f6150b] [09f6150f, 09f61520] [09f6171a, 09f6172b] [09f618a0, 09f618de]]
 * Ghidra: FUN_09f5d8c0
 */


/* WARNING: Removing unreachable block (ram,0x09f5dae2) */
/* WARNING: Removing unreachable block (ram,0x09f5daf4) */
/* WARNING: Removing unreachable block (ram,0x09f5db05) */
/* WARNING: Removing unreachable block (ram,0x09f5e7e4) */
/* WARNING: Removing unreachable block (ram,0x09f5e7f6) */
/* WARNING: Removing unreachable block (ram,0x09f5e807) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_09f5d8c0(long *param_1,long *******param_2,long *param_3)

{
  long *plVar1;
  long *******ppppppplVar2;
  long *****ppppplVar3;
  long ******pppppplVar4;
  byte ***pppbVar5;
  byte **ppbVar6;
  long ***ppplVar7;
  long ****pppplVar8;
  long ****pppplVar9;
  long ****pppplVar10;
  undefined8 *puVar11;
  byte ******ppppppbVar12;
  long ******pppppplVar13;
  code *pcVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 *puVar18;
  byte *pbVar19;
  short sVar20;
  byte **ppbVar21;
  byte **ppbVar22;
  char cVar23;
  byte bVar24;
  undefined1 uVar25;
  int iVar26;
  int iVar27;
  byte ******ppppppbVar28;
  long lVar29;
  long *plVar30;
  undefined8 uVar31;
  long *plVar32;
  undefined8 uVar33;
  byte *******pppppppbVar34;
  ulong uVar35;
  ulong uVar36;
  byte *****pppppbVar37;
  long ***ppplVar38;
  long **pplVar39;
  byte *****pppppbVar40;
  long ******pppppplVar41;
  long lVar42;
  long ***ppplVar43;
  long lVar44;
  ulong uVar45;
  byte *****pppppbVar46;
  long *unaff_RBP;
  ulong uVar47;
  long *******ppppppplVar48;
  byte **ppbVar49;
  undefined *puVar50;
  byte **ppbVar51;
  ulong uVar52;
  short sVar53;
  undefined *puVar54;
  byte *****pppppbVar55;
  long *****ppppplVar56;
  byte *******unaff_R15;
  undefined *puVar57;
  byte ***pppbVar58;
  bool bVar59;
  float fVar60;
  byte *******pppppppbStack_448;
  long *plStack_440;
  long *plStack_438;
  long *plStack_430;
  byte *****pppppbStack_428;
  short sStack_41e;
  short sStack_41c;
  short sStack_41a;
  byte *******pppppppbStack_418;
  long *******ppppppplStack_410;
  long *****ppppplStack_408;
  long *plStack_400;
  byte *******pppppppbStack_3f8;
  long lStack_3f0;
  byte *****pppppbStack_3e8;
  byte ******ppppppbStack_3e0;
  ulong uStack_3d8;
  float fStack_3d0;
  long *plStack_3c8;
  long ******pppppplStack_3c0;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  byte ***pppbStack_3a0;
  byte ******ppppppbStack_398;
  long ******pppppplStack_390;
  long lStack_388;
  byte *****pppppbStack_380;
  byte ******ppppppbStack_378;
  ulong uStack_370;
  float fStack_368;
  long *******ppppppplStack_358;
  byte *****pppppbStack_350;
  byte *****pppppbStack_348;
  long *******ppppppplStack_338;
  long lStack_328;
  long *plStack_320;
  long lStack_318;
  long *plStack_308;
  byte *****pppppbStack_300;
  long ***ppplStack_2f8;
  long ***ppplStack_2f0;
  long ****pppplStack_2e8;
  ulong uStack_2e0;
  byte **ppbStack_2d8;
  byte *******pppppppbStack_2d0;
  long ***ppplStack_2c8;
  long ***ppplStack_2c0;
  long ****pppplStack_2b8;
  long *plStack_2b0;
  byte *****pppppbStack_2a8;
  undefined1 auStack_2a0 [8];
  undefined8 uStack_298;
  long lStack_290;
  undefined8 uStack_288;
  char cStack_280;
  byte *pbStack_278;
  long *plStack_270;
  long *plStack_268;
  byte ******ppppppbStack_260;
  long ******pppppplStack_258;
  undefined *puStack_250;
  long *plStack_248;
  long *plStack_240;
  long lStack_238;
  long lStack_230;
  undefined8 *puStack_228;
  undefined2 uStack_210;
  char cStack_208;
  byte **ppbStack_200;
  long *****ppppplStack_1f8;
  byte *******pppppppbStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined **ppuStack_1c8;
  long **applStack_1b8 [4];
  long ***ppplStack_198;
  long alStack_188 [4];
  long *plStack_168;
  long alStack_158 [4];
  long *plStack_138;
  undefined1 auStack_120 [240];
  
  plStack_430 = param_3;
  if ((DAT_0f7ba1c0 == '\0') && (iVar26 = func_0x04108328(&DAT_0f7ba1c0), iVar26 != 0)) {
    _DAT_0f7ba1b0 = 0;
    uRam000000000f7ba1b8 = 0;
    _DAT_0f7ba1a0 = 0;
    uRam000000000f7ba1a8 = 0;
    _DAT_0f7ba190 = 0;
    uRam000000000f7ba198 = 0;
    _DAT_0f7ba180 = 0;
    uRam000000000f7ba188 = 0;
    _DAT_0f7ba170 = 0;
    uRam000000000f7ba178 = 0;
    FUN_0410844d(&DAT_0f7ba1c0);
  }
  ppppppbVar28 = (byte ******)func_0x0eee2fc0();
  pppppppbStack_418 = (byte *******)ppppppbVar28;
  func_0x0eee0090(&DAT_0f7ba170,&pppppppbStack_418);
  if ((param_2[0x22] == (long ******)0x0) &&
     (cVar23 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_014b8a2c),
     cVar23 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((*(char *)param_2[0x22] == '\0') &&
     (cVar23 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_014b8a2c),
     cVar23 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  pppppplVar4 = param_2[0x24];
  if (*(char *)(pppppplVar4 + 0xc) == '\0') {
    *(undefined1 *)(pppppplVar4 + 0xc) = 1;
  }
  pppppplVar4[0xb] = (long *****)ppppppbVar28;
  pppppppbStack_418 = (byte *******)param_2[0x4c];
  ppppppplVar48 = (long *******)param_2[0x4d];
  if (ppppppplVar48 == (long *******)0x0) {
    auStack_2a0[0] = 0;
    uStack_298 = 0;
    lStack_290 = 0;
    ppppppplStack_410 = (long *******)0x0;
    func_0x0ca11350(auStack_2a0,&pppppppbStack_418);
  }
  else {
    LOCK();
    ppppppplVar48[2] = (long ******)((long)ppppppplVar48[2] + 1);
    UNLOCK();
    auStack_2a0[0] = 0;
    uStack_298 = 0;
    lStack_290 = 0;
    LOCK();
    ppppppplVar48[2] = (long ******)((long)ppppppplVar48[2] + 1);
    UNLOCK();
    LOCK();
    ppppppplVar48[2] = (long ******)((long)ppppppplVar48[2] + 1);
    UNLOCK();
    LOCK();
    ppppppplVar48[2] = (long ******)((long)ppppppplVar48[2] + 1);
    UNLOCK();
    ppppppplStack_410 = ppppppplVar48;
    func_0x0ca11350(auStack_2a0,&pppppppbStack_418);
    func_0x0412c2d0(ppppppplVar48);
    func_0x0412c2d0(ppppppplVar48);
    func_0x0412c2d0(ppppppplVar48);
    func_0x0412c2d0(ppppppplVar48);
  }
  func_0x0412d770(0xf724748);
  if ((_DAT_0f724740 != 0) || (func_0x09f85f30(), _DAT_0f724740 != 0)) {
    LOCK();
    *(int *)(_DAT_0f724740 + 0x1c) = *(int *)(_DAT_0f724740 + 0x1c) + 1;
    UNLOCK();
  }
  func_0x0412d790(0xf724748);
  plVar30 = (long *)*plStack_430;
  pppppppbStack_448 = (byte *******)0x0;
  plStack_440 = (long *)0x0;
  plStack_438 = (long *)0x0;
  if (plVar30 != (long *)0x0) {
    unaff_R15 = (byte *******)plVar30[1];
    plStack_440 = (long *)plVar30[2];
    if (plStack_440 == (long *)0x0) {
      plStack_440 = (long *)0x0;
    }
    else {
      LOCK();
      plStack_440[1] = plStack_440[1] + 1;
      UNLOCK();
    }
    pppppppbStack_448 = unaff_R15;
    if ((unaff_R15 != (byte *******)0x0) && (plStack_438 = plVar30, *(byte *)unaff_R15 != 0)) {
      ppppppbStack_398 = (byte ******)param_2[0x4c];
      pppppplStack_390 = param_2[0x4d];
      if (pppppplStack_390 == (long ******)0x0) {
        pppppplStack_390 = (long ******)0x0;
        bVar24 = *(byte *)unaff_R15;
      }
      else {
        LOCK();
        pppppplStack_390[2] = (long *****)((long)pppppplStack_390[2] + 1);
        UNLOCK();
        LOCK();
        pppppplStack_390[2] = (long *****)((long)pppppplStack_390[2] + 1);
        UNLOCK();
        func_0x0412c2d0();
        bVar24 = *(byte *)unaff_R15;
      }
      if (((bVar24 & 1) == 0) &&
         (cVar23 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_01207b8e),
         cVar23 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      plStack_2b0 = (long *)(**(code **)(*plStack_438 + 0x270))();
      ppppplStack_1f8 = param_2[0x12][5];
      if ((pppppppbStack_448 == (byte *******)0x0) &&
         (cVar23 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_01207b8e),
         cVar23 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      if ((*(byte *)pppppppbStack_448 == 0) &&
         (cVar23 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_01207b8e),
         cVar23 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      unaff_RBP = (long *)(**(code **)(*plStack_438 + 0x568))();
      *(undefined1 *)((long)unaff_RBP + 0x4bf) = *(undefined1 *)((long)plStack_430 + 0xeb);
      *(undefined1 *)(unaff_RBP + 0x98) = *(undefined1 *)((long)plStack_430 + 0xec);
      *(undefined1 *)((long)unaff_RBP + 0x4c1) = *(undefined1 *)((long)plStack_430 + 0xed);
      func_0x0412d550(0xf551cc8);
      LOCK();
      _DAT_0f551d98 = _DAT_0f551d98 + 1;
      UNLOCK();
      unaff_R15 = (byte *******)0xf551cc8;
      func_0x0412d610(0xf551cc8);
      plVar30 = _DAT_0f551db0;
      pbVar19 = _DAT_0f551da8;
      if ((_DAT_0f551da8 == (byte *)0x0) || (*_DAT_0f551da8 != 1)) goto LAB_09f61454;
      bVar24 = 1;
      if (_DAT_0f551db0 != (long *)0x0) {
        LOCK();
        _DAT_0f551db0[1] = _DAT_0f551db0[1] + 1;
        UNLOCK();
        bVar24 = *pbVar19;
      }
      pppppppbVar34 = _DAT_0f551db8;
      pppppppbStack_418 = (byte *******)0xf551cc8;
      ppppppplStack_410 = (long *******)CONCAT71(ppppppplStack_410._1_7_,1);
      ppppplStack_408 = (long *****)pbVar19;
      plStack_400 = plVar30;
      pppppppbStack_3f8 = _DAT_0f551db8;
      if (((bVar24 & 1) == 0) &&
         (cVar23 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_01478552),
         cVar23 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      iVar26 = (*(code *)(*pppppppbVar34)[0x11])(pppppppbVar34);
      if ((int)unaff_RBP[0x75] != 0) {
        iVar26 = (int)unaff_RBP[0x75];
      }
      *(int *)(unaff_RBP + 0x75) = iVar26;
      ppppplStack_408 = (long *****)0x0;
      plStack_400 = (long *)0x0;
      if (plVar30 == (long *)0x0) {
LAB_09f5ddea:
      }
      else {
        LOCK();
        plVar32 = plVar30 + 1;
        lVar29 = *plVar32;
        *plVar32 = *plVar32 + -1;
        UNLOCK();
        if (lVar29 != 0) {
          pppppppbStack_3f8 = (byte *******)0x0;
          goto LAB_09f5ddea;
        }
        (**(code **)(*plVar30 + 0x10))(plVar30);
        func_0x0412c2d0(plVar30);
        plVar30 = plStack_400;
        pppppppbStack_3f8 = (byte *******)0x0;
        if (plStack_400 == (long *)0x0) goto LAB_09f5ddea;
        pppppppbStack_3f8 = (byte *******)0x0;
        LOCK();
        plVar32 = plStack_400 + 1;
        lVar29 = *plVar32;
        *plVar32 = *plVar32 + -1;
        UNLOCK();
        if (lVar29 != 0) goto LAB_09f5ddea;
        (**(code **)(*plStack_400 + 0x10))(plStack_400);
        func_0x0412c2d0(plVar30);
      }
      if ((char)ppppppplStack_410 == '\x01') {
        func_0x0eee02f0(pppppppbStack_418);
      }
      if (*(char *)(param_2 + 0x11) == '\x01') {
        if ((pppppppbStack_448 == (byte *******)0x0) &&
           (cVar23 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_01207b8e),
           cVar23 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        if ((*(byte *)pppppppbStack_448 == 0) &&
           (cVar23 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_01207b8e),
           cVar23 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        (**(code **)(*plStack_438 + 0x490))(plStack_438,1);
        if ((int)unaff_RBP[0x73] == 1) {
          ppppppplStack_358 = (long *******)((ulong)ppppppplStack_358 & 0xffffffffffffff00);
          pppppppbStack_418 = (byte *******)&UNK_0f1f8458;
          unaff_R15 = (byte *******)&pppppppbStack_418;
          ppppppplStack_410 = (long *******)&ppppppplStack_358;
          pppppppbStack_3f8 = unaff_R15;
          func_0x09ae1570(plStack_430[0x93],unaff_R15);
          if (pppppppbStack_3f8 == unaff_R15) {
            lVar29 = 0x20;
LAB_09f5dfab:
            (**(code **)((long)*pppppppbStack_3f8 + lVar29))();
            if ((byte)ppppppplStack_358 != 0) goto LAB_09f5df14;
LAB_09f5dfc1:
            pppppppbStack_418 = (byte *******)&UNK_0f1f8458;
            ppppppplStack_410 = (long *******)&ppppppplStack_358;
            pppppppbStack_3f8 = (byte *******)&pppppppbStack_418;
            func_0x09ae1570(param_2[0x12][5],&pppppppbStack_418);
            if ((byte ********)pppppppbStack_3f8 == &pppppppbStack_418) {
              lVar29 = 0x20;
LAB_09f5e0b7:
              (**(code **)((long)*pppppppbStack_3f8 + lVar29))();
            }
            else {
              lVar29 = 0x28;
              if (pppppppbStack_3f8 != (byte *******)0x0) goto LAB_09f5e0b7;
            }
            if (((ulong)ppppppplStack_358 & 1) == 0) goto LAB_09f5e179;
          }
          else {
            lVar29 = 0x28;
            if (pppppppbStack_3f8 != (byte *******)0x0) goto LAB_09f5dfab;
            if ((byte)ppppppplStack_358 == 0) goto LAB_09f5dfc1;
LAB_09f5df14:
            if (((byte)ppppppplStack_358 & 1) == 0) goto LAB_09f5e179;
          }
          func_0x05f31c40(1,3,1,&UNK_01330a77);
          plVar30 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
          if (plVar30 == (long *)0x0) {
            func_0x0eec74c0(0x38,0);
          }
          plVar30[1] = 0;
          plVar30[2] = 0;
          *plVar30 = (long)&UNK_0f13da68;
          plVar30[3] = (long)&UNK_0f13dab8;
          *(undefined2 *)(plVar30 + 6) = 0x100;
          LOCK();
          plVar30[1] = plVar30[1] + 1;
          UNLOCK();
          LOCK();
          plVar30[2] = plVar30[2] + 1;
          UNLOCK();
          plVar30[4] = (long)(plVar30 + 4);
          plVar30[5] = (long)plVar30;
          LOCK();
          plVar32 = plVar30 + 1;
          lVar29 = *plVar32;
          *plVar32 = *plVar32 + -1;
          UNLOCK();
          if (lVar29 == 0) {
            (**(code **)(*plVar30 + 0x10))(plVar30);
            func_0x0412c2d0(plVar30);
          }
          *param_1 = (long)(plVar30 + 3);
          param_1[1] = (long)plVar30;
          goto LAB_09f61174;
        }
        pppppppbStack_418 = (byte *******)&UNK_0f1f84e8;
        unaff_R15 = (byte *******)&pppppppbStack_418;
        pppppppbStack_3f8 = unaff_R15;
        func_0x09ae1680(plStack_430[0x93],unaff_R15);
        if (pppppppbStack_3f8 == unaff_R15) {
          lVar29 = 0x20;
LAB_09f5e023:
          (**(code **)((long)*pppppppbStack_3f8 + lVar29))();
          cVar23 = *(char *)(plStack_430[0x93] + 0xc1);
        }
        else {
          lVar29 = 0x28;
          if (pppppppbStack_3f8 != (byte *******)0x0) goto LAB_09f5e023;
          cVar23 = *(char *)(plStack_430[0x93] + 0xc1);
        }
        if (cVar23 == '\x01') {
          func_0x09ae0170();
        }
        pppppppbStack_418 = (byte *******)&UNK_0f1f84e8;
        pppppppbStack_3f8 = (byte *******)&pppppppbStack_418;
        func_0x09ae1680(param_2[0x12][5],&pppppppbStack_418);
        if ((byte ********)pppppppbStack_3f8 == &pppppppbStack_418) {
          lVar29 = 0x20;
LAB_09f5e085:
          (**(code **)((long)*pppppppbStack_3f8 + lVar29))();
        }
        else {
          lVar29 = 0x28;
          if (pppppppbStack_3f8 != (byte *******)0x0) goto LAB_09f5e085;
        }
        if (*(char *)((long)param_2[0x12][5] + 0xc1) == '\x01') {
          func_0x09ae0170();
        }
      }
LAB_09f5e179:
      (*(code *)(*param_2[0x12][7])[3])(param_2[0x12][7],param_2,&pppppppbStack_448);
      if (param_2[0x66] == (long ******)0x0) {
LAB_09f5e3b0:
        plVar30 = plStack_430 + 1;
        FUN_0c019d20(plStack_430 + 0x45,plVar30);
        pppppppbStack_418 = (byte *******)0x0;
        ppppppplStack_410 = (long *******)0x0;
        if ((pppppplStack_390 == (long ******)0x0) ||
           (plVar32 = (long *)func_0x0412c300(), ppppppplStack_410 = (long *******)plVar32,
           plVar32 == (long *)0x0)) {
          plVar32 = (long *)0x0;
LAB_09f5e40d:
          cVar23 = func_0x0eeddcf0(&UNK_014099eb,&UNK_01394839,0x2b8,&UNK_0131c097,&UNK_013bce49);
          if (cVar23 != '\0') {
            _DAT_00000000 = 0xdeadc0de;
          }
          if (plVar32 != (long *)0x0) goto LAB_09f5e449;
        }
        else {
          pppppppbStack_418 = (byte *******)ppppppbStack_398;
          if (ppppppbStack_398 == (byte ******)0x0) goto LAB_09f5e40d;
          *(char *)(ppppppbStack_398 + 0x45) = '\x01';
LAB_09f5e449:
          LOCK();
          plVar1 = plVar32 + 1;
          lVar29 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar29 == 0) {
            (**(code **)(*plVar32 + 0x10))(plVar32);
            func_0x0412c2d0(plVar32);
          }
        }
        if ((pppppppbStack_448 == (byte *******)0x0) &&
           (cVar23 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_01207b8e),
           cVar23 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        if ((*(byte *)pppppppbStack_448 == 0) &&
           (cVar23 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_01207b8e),
           cVar23 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        uVar31 = (**(code **)(*plStack_438 + 0x918))();
        func_0x0ca159f0(&ppppppbStack_398,uVar31,unaff_RBP);
        if ((pppppppbStack_448 == (byte *******)0x0) &&
           (cVar23 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_01207b8e),
           cVar23 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        if ((*(byte *)pppppppbStack_448 == 0) &&
           (cVar23 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_01207b8e),
           cVar23 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        lVar29 = (**(code **)(*plStack_438 + 0xe0))();
        if ((lVar29 == 0) &&
           (cVar23 = func_0x0eeddcf0(&UNK_01367db0,&UNK_01330ac6,0x424,&UNK_01248528,&UNK_01469927),
           cVar23 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        if ((pppppppbStack_448 == (byte *******)0x0) &&
           (cVar23 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_01207b8e),
           cVar23 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        if ((*(byte *)pppppppbStack_448 == 0) &&
           (cVar23 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_01207b8e),
           cVar23 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        uVar31 = (**(code **)(*plStack_438 + 0xe0))();
        ppppplVar56 = param_2[0x12][5];
        if ((pppppppbStack_448 == (byte *******)0x0) &&
           (cVar23 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_01207b8e),
           cVar23 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        if ((*(byte *)pppppppbStack_448 == 0) &&
           (cVar23 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_01207b8e),
           cVar23 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        plVar32 = plStack_438;
        if ((plStack_438[0x18] == 0) &&
           (cVar23 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013d2cf0),
           cVar23 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        if ((*(char *)plVar32[0x18] == '\0') &&
           (cVar23 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013d2cf0),
           cVar23 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        lVar29 = plVar32[0x1a];
        lStack_328 = *(long *)(lVar29 + 8);
        plStack_320 = *(long **)(lVar29 + 0x10);
        if (plStack_320 == (long *)0x0) {
          plStack_320 = (long *)0x0;
        }
        else {
          LOCK();
          plStack_320[1] = plStack_320[1] + 1;
          UNLOCK();
        }
        lStack_318 = 0;
        if (lStack_328 != 0) {
          lStack_318 = lVar29;
        }
        puStack_1e8 = &UNK_0f1f8568;
        puStack_1e0 = &UNK_0c3e9780;
        plStack_308 = param_1;
        ppuStack_1c8 = &puStack_1e8;
        func_0x0ca14a90(&ppppppbStack_398,uVar31,plVar30,ppppplVar56,&lStack_328,plStack_2b0,
                        &puStack_1e8);
        if (ppuStack_1c8 == &puStack_1e8) {
          lVar29 = 0x20;
LAB_09f5e8b4:
          (**(code **)(*ppuStack_1c8 + lVar29))();
        }
        else {
          lVar29 = 0x28;
          if (ppuStack_1c8 != (undefined **)0x0) goto LAB_09f5e8b4;
        }
        plVar30 = plStack_320;
        lStack_328 = 0;
        plStack_320 = (long *)0x0;
        if (plVar30 == (long *)0x0) {
          lStack_318 = 0;
        }
        else {
          LOCK();
          plVar32 = plVar30 + 1;
          lVar29 = *plVar32;
          *plVar32 = *plVar32 + -1;
          UNLOCK();
          if (lVar29 == 0) {
            (**(code **)(*plVar30 + 0x10))(plVar30);
            func_0x0412c2d0(plVar30);
          }
          plVar30 = plStack_320;
          lStack_318 = 0;
          if (plStack_320 != (long *)0x0) {
            LOCK();
            plVar32 = plStack_320 + 1;
            lVar29 = *plVar32;
            *plVar32 = *plVar32 + -1;
            UNLOCK();
            if (lVar29 == 0) {
              (**(code **)(*plStack_320 + 0x10))(plStack_320);
              func_0x0412c2d0(plVar30);
            }
          }
        }
        pppppppbStack_418 = (byte *******)0x0;
        ppppppplStack_410 = (long *******)0x0;
        if ((pppppplStack_390 == (long ******)0x0) ||
           (plVar30 = (long *)func_0x0412c300(), ppppppplStack_410 = (long *******)plVar30,
           plVar30 == (long *)0x0)) {
          plVar30 = (long *)0x0;
LAB_09f5e983:
          cVar23 = func_0x0eeddcf0(&UNK_014099eb,&UNK_01394839,0x2b8,&UNK_0131c097,&UNK_013bce49);
          if (cVar23 != '\0') {
            _DAT_00000000 = 0xdeadc0de;
          }
          if (plVar30 != (long *)0x0) goto LAB_09f5e9bf;
        }
        else {
          pppppppbStack_418 = (byte *******)ppppppbStack_398;
          if (ppppppbStack_398 == (byte ******)0x0) goto LAB_09f5e983;
          *(char *)(ppppppbStack_398 + 0x45) = '\0';
LAB_09f5e9bf:
          LOCK();
          plVar32 = plVar30 + 1;
          lVar29 = *plVar32;
          *plVar32 = *plVar32 + -1;
          UNLOCK();
          if (lVar29 == 0) {
            (**(code **)(*plVar30 + 0x10))(plVar30);
            func_0x0412c2d0(plVar30);
          }
        }
        ppppplVar56 = param_2[0x12][0x17];
        ppppppbStack_260 = ppppppbStack_398;
        pppppplStack_258 = pppppplStack_390;
        if (pppppplStack_390 != (long ******)0x0) {
          LOCK();
          pppppplStack_390[2] = (long *****)((long)pppppplStack_390[2] + 1);
          UNLOCK();
        }
        if ((pppppppbStack_448 == (byte *******)0x0) &&
           (cVar23 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_01207b8e),
           cVar23 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        plVar30 = plStack_438;
        if (*(byte *)pppppppbStack_448 != 1) {
          cVar23 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_01207b8e);
          plVar30 = plStack_438;
          if (cVar23 != '\0') {
            _DAT_00000000 = 0xdeadc0de;
          }
          if ((pppppppbStack_448 == (byte *******)0x0) &&
             (cVar23 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_01207b8e),
             cVar23 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
        }
        if ((*(byte *)pppppppbStack_448 == 0) &&
           (cVar23 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_01207b8e),
           cVar23 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        uVar31 = (**(code **)(*plStack_438 + 0x908))();
        if ((pppppppbStack_448 == (byte *******)0x0) &&
           (cVar23 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_01207b8e),
           cVar23 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        if ((*(byte *)pppppppbStack_448 == 0) &&
           (cVar23 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_01207b8e),
           cVar23 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        lVar29 = (**(code **)(*plStack_438 + 0x568))();
        puVar50 = (undefined *)(lVar29 + 0x50);
        puVar54 = puVar50;
        if ((*(char *)(lVar29 + 0x77) == '\0') &&
           (((puVar57 = (undefined *)(lVar29 + 0x70), *(char *)(lVar29 + 0x68) != '\0' ||
             (puVar54 = puVar57, (*(byte *)(lVar29 + 0x56) & 1) != 0)) &&
            (cVar23 = func_0x04fa7a10(puVar57,puVar50), puVar54 = puVar50, cVar23 != '\0')))) {
          puVar54 = puVar57;
        }
        puVar50 = &DAT_0f72b850;
        if (((puVar54[6] | puVar54[0x18]) & 1) != 0) {
          puVar50 = puVar54;
        }
        func_0x09dc00e0(ppppplVar56,&ppppppbStack_260,plVar30,uVar31,unaff_RBP + 0x27,puVar50);
        if (pppppplStack_258 != (long ******)0x0) {
          func_0x0412c2d0();
        }
        if ((pppppppbStack_448 == (byte *******)0x0) &&
           (cVar23 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_01207b8e),
           cVar23 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        if ((*(byte *)pppppppbStack_448 == 0) &&
           (cVar23 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_01207b8e),
           cVar23 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        lVar29 = (**(code **)(*plStack_438 + 200))();
        if (lVar29 != 0) {
          if ((pppppppbStack_448 == (byte *******)0x0) &&
             (cVar23 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_01207b8e),
             cVar23 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          if ((*(byte *)pppppppbStack_448 == 0) &&
             (cVar23 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_01207b8e
                                      ), cVar23 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          uVar31 = (**(code **)(*plStack_438 + 0xf8))();
          if ((pppppppbStack_448 == (byte *******)0x0) &&
             (cVar23 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_01207b8e),
             cVar23 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          if ((*(byte *)pppppppbStack_448 == 0) &&
             (cVar23 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_01207b8e
                                      ), cVar23 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          uVar33 = (**(code **)(*plStack_438 + 0xba8))();
          func_0x09dc77d0(ppppplVar56,lVar29,uVar31,uVar33);
        }
        ppppppbStack_378 = (byte ******)0x0;
        uStack_370 = 0;
        lStack_388 = 0;
        pppppbStack_380 = (byte *****)0x0;
        fStack_368 = 1.0;
        pppppppbVar34 = *(byte ********)(*(long *)(plStack_430[0x93] + 0x78) + 8);
        pppppppbStack_1f0 = *(byte ********)(*(long *)(plStack_430[0x93] + 0x78) + 0x10);
        if (pppppppbVar34 != pppppppbStack_1f0) {
          do {
            pppbVar5 = *(*pppppppbVar34[0x1d])[1];
            pppppppbStack_2d0 = pppppppbVar34;
            if ((plStack_430[0x94] == 0) &&
               (cVar23 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_014adc19
                                        ), cVar23 != '\0')) {
              _DAT_00000000 = 0xdeadc0de;
            }
            if ((*(char *)plStack_430[0x94] == '\0') &&
               (cVar23 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,
                                         &UNK_014adc19), cVar23 != '\0')) {
              _DAT_00000000 = 0xdeadc0de;
            }
            (**(code **)(*(long *)plStack_430[0x96] + 0x138))(&pppppppbStack_418);
            if ((pppppppbStack_418 == (byte *******)0x0) &&
               (cVar23 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013e904a
                                        ), cVar23 != '\0')) {
              _DAT_00000000 = 0xdeadc0de;
            }
            if ((*(char *)pppppppbStack_418 == '\0') &&
               (cVar23 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,
                                         &UNK_013e904a), cVar23 != '\0')) {
              _DAT_00000000 = 0xdeadc0de;
            }
            (**(code **)((long)*ppppplStack_408 + 0x10))
                      (&ppppppplStack_358,ppppplStack_408,pppbVar5 + 0x10);
            ppppppplVar48 = ppppppplStack_410;
            pppppppbStack_418 = (byte *******)0x0;
            ppppppplStack_410 = (long *******)0x0;
            if (ppppppplVar48 == (long *******)0x0) {
LAB_09f5f066:
              bVar24 = (byte)ppppppplStack_358 & 1;
              if (((ulong)ppppppplStack_358 & 1) == 0) goto LAB_09f5f0b0;
LAB_09f5f074:
              if (pppppbStack_350 != (byte *****)0x0) goto LAB_09f5f0bb;
            }
            else {
              LOCK();
              plVar30 = (long *)(ppppppplVar48 + 1);
              lVar29 = *plVar30;
              *plVar30 = *plVar30 + -1;
              UNLOCK();
              if (lVar29 != 0) {
                ppppplStack_408 = (long *****)0x0;
                goto LAB_09f5f066;
              }
              (**(code **)((long)*ppppppplVar48 + 0x10))(ppppppplVar48);
              func_0x0412c2d0(ppppppplVar48);
              ppppppplVar48 = ppppppplStack_410;
              ppppplStack_408 = (long *****)0x0;
              if (ppppppplStack_410 == (long *******)0x0) goto LAB_09f5f066;
              ppppplStack_408 = (long *****)0x0;
              LOCK();
              plVar30 = (long *)(ppppppplStack_410 + 1);
              lVar29 = *plVar30;
              *plVar30 = *plVar30 + -1;
              UNLOCK();
              if (lVar29 != 0) goto LAB_09f5f066;
              (**(code **)((long)*ppppppplStack_410 + 0x10))(ppppppplStack_410);
              func_0x0412c2d0(ppppppplVar48);
              bVar24 = (byte)ppppppplStack_358 & 1;
              if (((ulong)ppppppplStack_358 & 1) != 0) goto LAB_09f5f074;
LAB_09f5f0b0:
              if ((byte)ppppppplStack_358 >> 1 != 0) {
LAB_09f5f0bb:
                pppppbStack_428 = (byte *****)func_0x08a8da40(&lStack_388,pppbVar5 + 0x25);
                pppppbVar40 = pppppbStack_380;
                pppbVar58 = pppbVar5;
                if (pppppbStack_380 != (byte *****)0x0) {
                  uVar45 = (long)pppppbStack_380 -
                           ((ulong)pppppbStack_380 >> 1 & 0x5555555555555555);
                  uVar45 = (uVar45 >> 2 & 0x3333333333333333) + (uVar45 & 0x3333333333333333);
                  uVar45 = ((uVar45 >> 4) + uVar45 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
                  if (uVar45 >> 0x38 < 2) {
                    pppppbVar46 = (byte *****)((long)pppppbStack_380 - 1U & (ulong)pppppbStack_428);
                  }
                  else {
                    pppppbVar46 = pppppbStack_428;
                    if (pppppbStack_380 <= pppppbStack_428) {
                      if (((ulong)pppppbStack_428 | (ulong)pppppbStack_380) >> 0x20 == 0) {
                        pppppbVar46 = (byte *****)
                                      (((ulong)pppppbStack_428 & 0xffffffff) %
                                      ((ulong)pppppbStack_380 & 0xffffffff));
                      }
                      else {
                        pppppbVar46 = (byte *****)((ulong)pppppbStack_428 % (ulong)pppppbStack_380);
                      }
                    }
                  }
                  plVar30 = *(long **)(lStack_388 + (long)pppppbVar46 * 8);
                  pppppbStack_300 = pppppbVar46;
                  if ((plVar30 != (long *)0x0) &&
                     (plVar30 = (long *)*plVar30, plVar30 != (long *)0x0)) {
                    ppbVar51 = pppbVar5[0x28];
                    uVar47 = (ulong)ppbVar51 & 0xff00ffffffffffff;
                    uVar52 = (ulong)((ushort)((ulong)ppbVar51 >> 0x30) & 0x7f);
                    ppbVar6 = pppbVar5[0x25];
                    ppbVar49 = pppbVar5[0x26];
                    sVar53 = *(short *)(pppbVar5 + 0x27);
                    sStack_41a = *(short *)((long)pppbVar5 + 0x13a);
                    sStack_41c = *(short *)((long)pppbVar5 + 0x13c);
                    pppbStack_3a0 = pppbVar5;
                    if ((byte)(uVar45 >> 0x38) < 2) {
                      uVar45 = (long)pppppbStack_380 - 1;
                      sVar20 = sVar53;
                      uVar36 = uVar47;
                      ppbVar21 = ppbVar51;
                      ppbVar22 = ppbVar49;
                      if ((*(byte *)((long)pppbVar5 + 0x13f) & 1) == 0) {
                        do {
                          ppbStack_200 = ppbVar22;
                          ppbStack_2d8 = ppbVar21;
                          uStack_2e0 = uVar36;
                          sStack_41e = sVar20;
                          if ((byte *****)plVar30[1] == pppppbStack_428) {
                            if ((((byte **)plVar30[2] == ppbVar6) &&
                                ((byte **)plVar30[3] == ppbVar49)) &&
                               (*(char *)((long)plVar30 + 0x27) == '\0')) {
                              uVar36 = plVar30[5];
                              if ((uVar36 & 0x80000000000000) == 0) {
                                uVar36 = (ulong)((ushort)(uVar36 >> 0x30) & 0x7f);
                              }
                              else {
                                uVar36 = *(ulong *)((uVar36 & 0xff00ffffffffffff) - 8);
                              }
                              uVar35 = uVar52;
                              if (((ulong)ppbVar51 & 0x80000000000000) != 0) {
                                uVar35 = *(ulong *)(uVar47 - 8);
                              }
                              if ((((short)plVar30[4] == sVar53) &&
                                  (*(short *)((long)plVar30 + 0x22) == sStack_41a)) &&
                                 ((*(short *)((long)plVar30 + 0x24) == sStack_41c &&
                                  ((uVar36 == uVar35 &&
                                   (iVar26 = func_0x0eee3000(), uVar47 = uStack_2e0,
                                   ppbVar49 = ppbStack_200, ppbVar51 = ppbStack_2d8,
                                   pppppbVar46 = pppppbStack_300, sVar53 = sStack_41e, iVar26 == 0))
                                  )))) goto LAB_09f5fa37;
                            }
                          }
                          else {
                            pppbVar58 = pppbStack_3a0;
                            if ((byte *****)((ulong)plVar30[1] & uVar45) != pppppbVar46) break;
                          }
                          plVar30 = (long *)*plVar30;
                          pppbVar58 = pppbStack_3a0;
                          sVar20 = sStack_41e;
                          uVar36 = uStack_2e0;
                          ppbVar21 = ppbStack_2d8;
                          ppbVar22 = ppbStack_200;
                        } while (plVar30 != (long *)0x0);
                      }
                      else {
                        do {
                          if ((byte *****)plVar30[1] == pppppbStack_428) {
                            if ((((byte **)plVar30[2] == ppbVar6) &&
                                ((byte **)plVar30[3] == ppbVar49)) &&
                               (*(char *)((long)plVar30 + 0x27) != '\0')) goto LAB_09f5fa37;
                          }
                          else if ((byte *****)((ulong)plVar30[1] & uVar45) != pppppbVar46) break;
                          plVar30 = (long *)*plVar30;
                        } while (plVar30 != (long *)0x0);
                      }
                    }
                    else {
                      sVar20 = sVar53;
                      uVar45 = uVar47;
                      ppbVar21 = ppbVar51;
                      if ((*(byte *)((long)pppbVar5 + 0x13f) & 1) == 0) {
                        do {
                          ppbStack_2d8 = ppbVar21;
                          uStack_2e0 = uVar45;
                          sStack_41e = sVar20;
                          pppppbVar55 = (byte *****)plVar30[1];
                          if (pppppbVar55 == pppppbStack_428) {
                            if ((((byte **)plVar30[2] == ppbVar6) &&
                                ((byte **)plVar30[3] == ppbVar49)) &&
                               (*(char *)((long)plVar30 + 0x27) == '\0')) {
                              uVar45 = plVar30[5];
                              if ((uVar45 & 0x80000000000000) == 0) {
                                uVar45 = (ulong)((ushort)(uVar45 >> 0x30) & 0x7f);
                              }
                              else {
                                uVar45 = *(ulong *)((uVar45 & 0xff00ffffffffffff) - 8);
                              }
                              uVar36 = uVar52;
                              if (((ulong)ppbVar51 & 0x80000000000000) != 0) {
                                uVar36 = *(ulong *)(uVar47 - 8);
                              }
                              if ((((short)plVar30[4] == sVar53) &&
                                  (*(short *)((long)plVar30 + 0x22) == sStack_41a)) &&
                                 ((*(short *)((long)plVar30 + 0x24) == sStack_41c &&
                                  ((uVar45 == uVar36 &&
                                   (iVar26 = func_0x0eee3000(), uVar47 = uStack_2e0,
                                   ppbVar51 = ppbStack_2d8, pppppbVar46 = pppppbStack_300,
                                   sVar53 = sStack_41e, iVar26 == 0)))))) goto LAB_09f5fa37;
                            }
                          }
                          else {
                            if (pppppbVar40 <= pppppbVar55) {
                              if (((ulong)pppppbVar55 | (ulong)pppppbVar40) >> 0x20 == 0) {
                                pppppbVar55 = (byte *****)
                                              (((ulong)pppppbVar55 & 0xffffffff) %
                                              ((ulong)pppppbVar40 & 0xffffffff));
                              }
                              else {
                                pppppbVar55 = (byte *****)((ulong)pppppbVar55 % (ulong)pppppbVar40);
                              }
                            }
                            pppbVar58 = pppbStack_3a0;
                            if (pppppbVar55 != pppppbVar46) break;
                          }
                          plVar30 = (long *)*plVar30;
                          pppbVar58 = pppbStack_3a0;
                          sVar20 = sStack_41e;
                          uVar45 = uStack_2e0;
                          ppbVar21 = ppbStack_2d8;
                        } while (plVar30 != (long *)0x0);
                      }
                      else {
                        do {
                          pppppbVar55 = (byte *****)plVar30[1];
                          if (pppppbVar55 == pppppbStack_428) {
                            if ((((byte **)plVar30[2] == ppbVar6) &&
                                ((byte **)plVar30[3] == ppbVar49)) &&
                               (*(char *)((long)plVar30 + 0x27) != '\0')) goto LAB_09f5fa37;
                          }
                          else {
                            if (pppppbStack_380 <= pppppbVar55) {
                              if (((ulong)pppppbVar55 | (ulong)pppppbStack_380) >> 0x20 == 0) {
                                pppppbVar55 = (byte *****)
                                              (((ulong)pppppbVar55 & 0xffffffff) %
                                              ((ulong)pppppbStack_380 & 0xffffffff));
                              }
                              else {
                                pppppbVar55 = (byte *****)
                                              ((ulong)pppppbVar55 % (ulong)pppppbStack_380);
                              }
                            }
                            if (pppppbVar55 != pppppbVar46) break;
                          }
                          plVar30 = (long *)*plVar30;
                        } while (plVar30 != (long *)0x0);
                      }
                    }
                  }
                }
                pppppbVar46 = pppppbStack_428;
                ppppppbVar28 = (byte ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x58);
                if (ppppppbVar28 == (byte ******)0x0) {
                  func_0x0eec74c0(0x58,0);
                }
                ppppppplStack_410 = (long *******)&lStack_388;
                ppppplStack_408 = (long *****)0x0;
                *ppppppbVar28 = (byte *****)0x0;
                ppppppbVar28[1] = pppppbVar46;
                uVar15 = *(undefined4 *)((long)pppbVar5 + 300);
                uVar16 = *(undefined4 *)(pppbVar5 + 0x26);
                uVar17 = *(undefined4 *)((long)pppbVar5 + 0x134);
                *(undefined4 *)(ppppppbVar28 + 2) = *(undefined4 *)(pppbVar5 + 0x25);
                *(undefined4 *)((long)ppppppbVar28 + 0x14) = uVar15;
                *(undefined4 *)(ppppppbVar28 + 3) = uVar16;
                *(undefined4 *)((long)ppppppbVar28 + 0x1c) = uVar17;
                ppppppbVar28[4] = (byte *****)pppbVar58[0x27];
                ppppppbVar28[5] = (byte *****)0x0;
                pppppbVar55 = (byte *****)pppbVar58[0x28];
                pppppbStack_2a8 = pppppbVar40;
                pppppppbStack_418 = (byte *******)ppppppbVar28;
                if (((ulong)pppppbVar55 & 0x80000000000000) != 0) {
                  lVar42 = *(long *)(((ulong)pppppbVar55 & 0xff00ffffffffffff) - 8);
                  lVar29 = lVar42 + 9;
                  plVar30 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar29,8);
                  if (lVar29 != 0 && plVar30 == (long *)0x0) {
                    func_0x0eec74c0(lVar29,8);
                  }
                  *plVar30 = lVar42;
                  func_0x0eee2f00(plVar30 + 1,(ulong)pppppbVar55 & 0xff00ffffffffffff,lVar42);
                  *(undefined1 *)((long)plVar30 + lVar42 + 8) = 0;
                  pppppbVar55 = (byte *****)
                                ((ulong)(plVar30 + 1) & 0xff00ffffffffffff | 0x80000000000000);
                  pppppbVar46 = pppppbStack_428;
                }
                ppppppbVar28[5] = pppppbVar55;
                ppppppbVar28[6] = (byte *****)0x0;
                pppppbVar40 = (byte *****)pppbVar58[0x29];
                if (((ulong)pppppbVar40 & 0x80000000000000) != 0) {
                  lVar42 = *(long *)(((ulong)pppppbVar40 & 0xff00ffffffffffff) - 8);
                  lVar29 = lVar42 + 9;
                  plVar30 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar29,8);
                  if (lVar29 != 0 && plVar30 == (long *)0x0) {
                    func_0x0eec74c0(lVar29,8);
                  }
                  *plVar30 = lVar42;
                  func_0x0eee2f00(plVar30 + 1,(ulong)pppppbVar40 & 0xff00ffffffffffff,lVar42);
                  *(undefined1 *)((long)plVar30 + lVar42 + 8) = 0;
                  pppppbVar40 = (byte *****)
                                ((ulong)(plVar30 + 1) & 0xff00ffffffffffff | 0x80000000000000);
                  pppppbVar46 = pppppbStack_428;
                }
                pppppbVar55 = pppppbStack_2a8;
                ppppppbVar28[6] = pppppbVar40;
                *(char *)(ppppppbVar28 + 7) = *(char *)(pppbVar58 + 0x2a);
                if (((ulong)ppppppplStack_358 & 1) == 0) {
                  ppppppbVar28[10] = pppppbStack_348;
                  ppppppbVar28[8] = (byte *****)ppppppplStack_358;
                  ppppppbVar28[9] = pppppbStack_350;
                }
                else {
                  func_0x0412e5e0(ppppppbVar28 + 8,pppppbStack_348,pppppbStack_350);
                }
                ppppplStack_408 = (long *****)CONCAT71(ppppplStack_408._1_7_,1);
                if ((long)pppppbVar55 < 0) {
                  fVar60 = (float)pppppbVar55;
                  if (pppppbVar55 != (byte *****)0x0) goto LAB_09f5f814;
LAB_09f5f830:
                  uVar45 = 1;
                  if ((byte *****)0x2 < pppppbVar55) {
                    uVar45 = (ulong)(((ulong)pppppbVar55 & (long)pppppbVar55 - 1U) != 0);
                  }
                  pppppbVar55 = (byte *****)((long)pppppbVar55 * 2 | uVar45);
                  fVar60 = (float)func_0x0eee3ab0((float)(uStack_370 + 1) / fStack_368);
                  pppppbVar40 = (byte *****)
                                ((long)(fVar60 - _DAT_01198778) & (long)fVar60 >> 0x3f |
                                (long)fVar60);
                  if (pppppbVar40 < pppppbVar55) {
                    pppppbVar40 = pppppbVar55;
                  }
                  pppppbVar55 = (byte *****)0x2;
                  if ((pppppbVar40 == (byte *****)0x1) ||
                     (pppppbVar55 = pppppbVar40, ((ulong)pppppbVar40 & (long)pppppbVar40 - 1U) == 0)
                     ) {
                    bVar59 = pppppbVar55 < pppppbStack_380;
                    if (pppppbVar55 <= pppppbStack_380) goto LAB_09f5f8ca;
LAB_09f5f8a0:
                    func_0x08a92030(&lStack_388,pppppbVar55);
                  }
                  else {
                    pppppbVar55 = (byte *****)func_0x0412c3f0();
                    bVar59 = pppppbVar55 < pppppbStack_380;
                    if (pppppbStack_380 < pppppbVar55) goto LAB_09f5f8a0;
LAB_09f5f8ca:
                    pppppbVar40 = pppppbStack_380;
                    if (bVar59) {
                      fVar60 = (float)func_0x0eee3ab0((float)uStack_370 / fStack_368);
                      pppppbVar37 = (byte *****)
                                    ((long)(fVar60 - _DAT_01198778) & (long)fVar60 >> 0x3f |
                                    (long)fVar60);
                      if ((pppppbVar40 < (byte *****)0x3) ||
                         (uVar45 = (long)pppppbVar40 -
                                   ((ulong)pppppbVar40 >> 1 & 0x5555555555555555),
                         uVar45 = (uVar45 >> 2 & 0x3333333333333333) + (uVar45 & 0x3333333333333333)
                         , 1 < (byte)(((uVar45 >> 4) + uVar45 & 0xf0f0f0f0f0f0f0f) *
                                      0x101010101010101 >> 0x38))) {
                        pppppbVar37 = (byte *****)func_0x0412c3f0(pppppbVar37);
                      }
                      else if ((byte *****)0x1 < pppppbVar37) {
                        lVar29 = 0x3f;
                        if ((long)pppppbVar37 - 1U != 0) {
                          for (; (long)pppppbVar37 - 1U >> lVar29 == 0; lVar29 = lVar29 + -1) {
                          }
                        }
                        pppppbVar37 = (byte *****)(1L << (-((byte)lVar29 ^ 0x3f) & 0x3f));
                      }
                      if (pppppbVar55 <= pppppbVar37) {
                        pppppbVar55 = pppppbVar37;
                      }
                      if (pppppbVar55 < pppppbVar40) goto LAB_09f5f8a0;
                    }
                  }
                  pppppbVar55 = pppppbStack_380;
                  if (((ulong)pppppbStack_380 & (long)pppppbStack_380 - 1U) == 0) {
                    pppppbVar40 = (byte *****)((ulong)pppppbVar46 & (long)pppppbStack_380 - 1U);
                  }
                  else {
                    pppppbVar40 = pppppbVar46;
                    if (pppppbStack_380 <= pppppbVar46) {
                      if (((ulong)pppppbVar46 | (ulong)pppppbStack_380) >> 0x20 == 0) {
                        pppppbVar40 = (byte *****)
                                      (((ulong)pppppbVar46 & 0xffffffff) %
                                      ((ulong)pppppbStack_380 & 0xffffffff));
                      }
                      else {
                        pppppbVar40 = (byte *****)((ulong)pppppbVar46 % (ulong)pppppbStack_380);
                      }
                    }
                  }
                }
                else {
                  fVar60 = (float)(long)pppppbVar55;
                  if (pppppbVar55 == (byte *****)0x0) goto LAB_09f5f830;
LAB_09f5f814:
                  pppppbVar40 = pppppbStack_300;
                  if (fVar60 * fStack_368 < (float)(uStack_370 + 1)) goto LAB_09f5f830;
                }
                plVar30 = *(long **)(lStack_388 + (long)pppppbVar40 * 8);
                if (plVar30 == (long *)0x0) {
                  *pppppppbStack_418 = ppppppbStack_378;
                  ppppppbStack_378 = (byte ******)pppppppbStack_418;
                  *(byte ********)(lStack_388 + (long)pppppbVar40 * 8) = &ppppppbStack_378;
                  if (*pppppppbStack_418 != (byte ******)0x0) {
                    pppppbVar40 = (*pppppppbStack_418)[1];
                    if (((ulong)pppppbVar55 & (long)pppppbVar55 - 1U) == 0) {
                      *(byte ********)
                       (lStack_388 + ((ulong)pppppbVar40 & (long)pppppbVar55 - 1U) * 8) =
                           pppppppbStack_418;
                    }
                    else {
                      if (pppppbVar55 <= pppppbVar40) {
                        if (((ulong)pppppbVar40 | (ulong)pppppbVar55) >> 0x20 == 0) {
                          *(byte ********)
                           (lStack_388 +
                           (((ulong)pppppbVar40 & 0xffffffff) % ((ulong)pppppbVar55 & 0xffffffff)) *
                           8) = pppppppbStack_418;
                          goto LAB_09f5fa2f;
                        }
                        pppppbVar40 = (byte *****)((ulong)pppppbVar40 % (ulong)pppppbVar55);
                      }
                      *(byte ********)(lStack_388 + (long)pppppbVar40 * 8) = pppppppbStack_418;
                    }
                  }
                }
                else {
                  *pppppppbStack_418 = (byte ******)*plVar30;
                  *plVar30 = (long)pppppppbStack_418;
                }
LAB_09f5fa2f:
                uStack_370 = uStack_370 + 1;
LAB_09f5fa37:
                bVar24 = (byte)ppppppplStack_358 & 1;
              }
            }
            if (bVar24 != 0) {
              func_0x0412a280(pppppbStack_348,(ulong)ppppppplStack_358 & 0xfffffffffffffffe);
            }
            pppppppbVar34 = pppppppbStack_2d0 + 0x22;
          } while (pppppppbVar34 != pppppppbStack_1f0);
        }
        if ((pppppppbStack_448 == (byte *******)0x0) &&
           (cVar23 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_01207b8e),
           cVar23 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        if ((*(byte *)pppppppbStack_448 == 0) &&
           (cVar23 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_01207b8e),
           cVar23 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        ppplVar38 = ppppplStack_1f8[0xf][1];
        ppplVar7 = ppppplStack_1f8[0xf][2];
        if (ppplVar38 == ppplVar7) {
          cVar23 = '\0';
        }
        else {
          do {
            ppplVar43 = ppplVar38 + 0x22;
            cVar23 = *(char *)(*(long *)(*ppplVar38[0x1d])[1] + 0x1ad);
            if (cVar23 != '\0') break;
            ppplVar38 = ppplVar43;
          } while (ppplVar43 != ppplVar7);
        }
        (**(code **)(*plStack_438 + 0x520))(plStack_438,cVar23,cVar23);
        if ((pppppppbStack_448 == (byte *******)0x0) &&
           (cVar23 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_01207b8e),
           cVar23 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        if ((*(byte *)pppppppbStack_448 == 0) &&
           (cVar23 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_01207b8e),
           cVar23 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        lVar29 = *(long *)(*(long *)(plStack_430[0x93] + 0x78) + 8);
        lVar42 = *(long *)(*(long *)(plStack_430[0x93] + 0x78) + 0x10);
        if (lVar29 == lVar42) {
          cVar23 = '\0';
        }
        else {
          do {
            lVar44 = lVar29 + 0x110;
            cVar23 = *(char *)(**(long **)(**(long **)(lVar29 + 0xe8) + 8) + 0x1ad);
            if (cVar23 != '\0') break;
            lVar29 = lVar44;
          } while (lVar44 != lVar42);
        }
        (**(code **)(*plStack_438 + 0x528))(plStack_438,cVar23,cVar23);
        if ((param_2[0x22] == (long ******)0x0) &&
           (cVar23 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_014b8a2c),
           cVar23 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        if ((*(char *)param_2[0x22] == '\0') &&
           (cVar23 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_014b8a2c),
           cVar23 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        pppppplVar4 = param_2[0x24];
        if ((pppppppbStack_448 == (byte *******)0x0) &&
           (cVar23 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_01207b8e),
           cVar23 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        if ((*(byte *)pppppppbStack_448 == 0) &&
           (cVar23 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_01207b8e),
           cVar23 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        pppppppbStack_418 = (byte *******)&UNK_0f398da8;
        ppppplStack_408 = (long *****)plStack_438;
        ppppppplStack_410 = param_2;
        pppppppbStack_3f8 = (byte *******)&pppppppbStack_418;
        func_0x0c5e4710(pppppplVar4,&pppppppbStack_418);
        if ((byte ********)pppppppbStack_3f8 == &pppppppbStack_418) {
          lVar29 = 0x20;
LAB_09f5fe55:
          (**(code **)((long)*pppppppbStack_3f8 + lVar29))();
        }
        else {
          lVar29 = 0x28;
          if (pppppppbStack_3f8 != (byte *******)0x0) goto LAB_09f5fe55;
        }
        pppplVar8 = param_2[0x12][0x17][2];
        if ((char)plStack_430[0x7d] == '\x01') {
          if ((pppppppbStack_448 == (byte *******)0x0) &&
             (cVar23 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_01207b8e),
             cVar23 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          if ((*(byte *)pppppppbStack_448 == 0) &&
             (cVar23 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_01207b8e
                                      ), cVar23 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          (**(code **)(*plStack_438 + 0x598))(&pppppppbStack_418);
          if ((pppppppbStack_418 == (byte *******)0x0) &&
             (cVar23 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_011d4944),
             cVar23 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          if ((*(char *)pppppppbStack_418 == '\0') &&
             (cVar23 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_011d4944
                                      ), cVar23 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          ppppplVar56 = ppppplStack_408;
          plVar30 = plStack_430 + 0x5f;
          func_0x048e05d0(auStack_120,plVar30);
          if ((char)ppppplVar56[0x1e] == '\x01') {
            func_0x07d06890(ppppplVar56,auStack_120);
          }
          else {
            func_0x048e05d0(ppppplVar56,auStack_120);
            *(undefined1 *)(ppppplVar56 + 0x1e) = 1;
          }
          func_0x048e0830(auStack_120);
          ppppppplVar48 = ppppppplStack_410;
          pppppppbStack_418 = (byte *******)0x0;
          ppppppplStack_410 = (long *******)0x0;
          if (ppppppplVar48 == (long *******)0x0) {
LAB_09f6021c:
            lVar29 = plStack_430[0x6f];
          }
          else {
            LOCK();
            ppppppplVar2 = ppppppplVar48 + 1;
            pppppplVar4 = *ppppppplVar2;
            *ppppppplVar2 = (long ******)((long)*ppppppplVar2 + -1);
            UNLOCK();
            if (pppppplVar4 != (long ******)0x0) {
              ppppplStack_408 = (long *****)0x0;
              goto LAB_09f6021c;
            }
            (*(code *)(*ppppppplVar48)[2])(ppppppplVar48);
            func_0x0412c2d0(ppppppplVar48);
            ppppppplVar48 = ppppppplStack_410;
            ppppplStack_408 = (long *****)0x0;
            if (ppppppplStack_410 == (long *******)0x0) goto LAB_09f6021c;
            ppppplStack_408 = (long *****)0x0;
            LOCK();
            ppppppplVar2 = ppppppplStack_410 + 1;
            pppppplVar4 = *ppppppplVar2;
            *ppppppplVar2 = (long ******)((long)*ppppppplVar2 + -1);
            UNLOCK();
            if (pppppplVar4 != (long ******)0x0) goto LAB_09f6021c;
            (*(code *)(*ppppppplStack_410)[2])(ppppppplStack_410);
            func_0x0412c2d0(ppppppplVar48);
            lVar29 = plStack_430[0x6f];
          }
          if (lVar29 != 0) {
            func_0x0c967460(applStack_1b8,plVar30);
            pppplVar9 = pppplVar8 + 0x6c;
            pppplVar10 = (long ****)pppplVar8[0x70];
            pppplVar8[0x70] = (long ***)0x0;
            if (pppplVar10 == pppplVar9) {
              lVar29 = 0x20;
LAB_09f6029d:
              (**(code **)((long)*pppplVar10 + lVar29))();
            }
            else {
              lVar29 = 0x28;
              if (pppplVar10 != (long ****)0x0) goto LAB_09f6029d;
            }
            if (ppplStack_198 == (long ***)0x0) {
              pppplVar8[0x70] = (long ***)0x0;
            }
            else if (ppplStack_198 == applStack_1b8) {
              pppplVar8[0x70] = (long ***)pppplVar9;
              (*(code *)(*ppplStack_198)[3])(ppplStack_198,pppplVar9);
              if (ppplStack_198 == applStack_1b8) {
                lVar29 = 0x20;
              }
              else {
                lVar29 = 0x28;
                if (ppplStack_198 == (long ***)0x0) goto LAB_09f6041c;
              }
              (**(code **)((long)*ppplStack_198 + lVar29))();
            }
            else {
              pppplVar8[0x70] = ppplStack_198;
              ppplStack_198 = (long ***)0x0;
            }
          }
        }
        else if ((char)plStack_430[0xa0] == '\x01') {
          cStack_208 = 0;
          puStack_250 = &UNK_0f534768;
          plStack_240 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
          if (plStack_240 == (long *)0x0) {
            func_0x0eec74c0(0x20,0);
          }
          plVar30 = plStack_430;
          plStack_240[1] = 0;
          plStack_240[2] = 0;
          *plStack_240 = (long)&UNK_0ef44a60;
          plStack_248 = plStack_240 + 3;
          *(undefined1 *)(plStack_240 + 3) = 1;
          puStack_250 = &UNK_0ef46be8;
          func_0x048f8d60(&lStack_238,plStack_430 + 0x9a);
          uStack_210 = (undefined2)plVar30[0x9f];
          cStack_208 = '\x01';
          ppplVar38 = (long ***)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x58);
          if (ppplVar38 == (long ***)0x0) {
            func_0x0eec74c0(0x58,0);
          }
          *ppplVar38 = (long **)&UNK_0f1f8618;
          pppppbStack_428 = (byte *****)(ppplVar38 + 1);
          *(undefined1 *)(ppplVar38 + 10) = 0;
          ppplVar38[1] = (long **)&UNK_0f534768;
          pplVar39 = (long **)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
          if (pplVar39 == (long **)0x0) {
            func_0x0eec74c0(0x20,0);
          }
          pplVar39[1] = (long *)0x0;
          pplVar39[2] = (long *)0x0;
          *pplVar39 = (long *)&UNK_0ef44a60;
          *(undefined1 *)(pplVar39 + 3) = 1;
          ppplVar38[2] = pplVar39 + 3;
          ppplVar38[3] = pplVar39;
          ppplVar38[1] = (long **)&UNK_0ef46be8;
          func_0x048f8d60(ppplVar38 + 4,&lStack_238);
          *(undefined2 *)(ppplVar38 + 9) = uStack_210;
          *(undefined1 *)(ppplVar38 + 10) = 1;
          pppplVar9 = (long ****)pppplVar8[0x70];
          pppplVar8[0x70] = (long ***)0x0;
          if (pppplVar9 == pppplVar8 + 0x6c) {
            lVar29 = 0x20;
LAB_09f602c5:
            (**(code **)((long)*pppplVar9 + lVar29))();
            pppplVar8[0x70] = ppplVar38;
          }
          else {
            lVar29 = 0x28;
            if (pppplVar9 != (long ****)0x0) goto LAB_09f602c5;
            pppplVar8[0x70] = ppplVar38;
          }
          if (cStack_208 == '\x01') {
            puStack_250 = &UNK_0ef46be8;
            lVar29 = lStack_238;
            puVar18 = puStack_228;
            while (puVar18 != (undefined8 *)0x0) {
              puVar11 = (undefined8 *)*puVar18;
              lStack_238 = lVar29;
              if ((*(byte *)(puVar18 + 2) & 1) != 0) {
                func_0x0412a280(puVar18[4],puVar18[2] & 0xfffffffffffffffe);
              }
              func_0x0412a280(puVar18,0x30);
              lVar29 = lStack_238;
              puVar18 = puVar11;
            }
            lStack_238 = 0;
            if (lVar29 != 0) {
              func_0x0412a280(lVar29,lStack_230 << 3);
            }
            plVar30 = plStack_240;
            puStack_250 = &UNK_0f534768;
            if (plStack_240 == (long *)0x0) {
              *(undefined1 *)plStack_248 = 0;
            }
            else {
              *(undefined1 *)plStack_248 = 0;
              LOCK();
              plVar32 = plStack_240 + 1;
              lVar29 = *plVar32;
              *plVar32 = *plVar32 + -1;
              UNLOCK();
              if (lVar29 == 0) {
                (**(code **)(*plStack_240 + 0x10))(plStack_240);
                func_0x0412c2d0(plVar30);
              }
            }
          }
        }
LAB_09f6041c:
        pppppbStack_3e8 = pppppbStack_380;
        lStack_3f0 = lStack_388;
        iVar26 = 0x27;
        if (0x27 < (int)plStack_430[0xa2]) {
          iVar26 = (int)plStack_430[0xa2];
        }
        iVar27 = 999;
        if (iVar26 < 999) {
          iVar27 = iVar26;
        }
        *(int *)((long)plStack_430 + 0x514) = iVar27 + 1;
        unaff_R15 = (byte *******)*plStack_430;
        *plStack_430 = 0;
        ppppppplStack_410 = (long *******)((ulong)ppppppplStack_410 & 0xffffffffffffff00);
        uVar45 = (ulong)pppppppbStack_3f8 >> 8;
        pppppppbStack_3f8 = (byte *******)((ulong)pppppppbStack_3f8 & 0xffffffffffffff00);
        if ((char)plStack_430[0xa7] == '\x01') {
          ppppppplStack_410 = (long *******)plStack_430[0xa4];
          ppppplStack_408 = (long *****)plStack_430[0xa5];
          plStack_400 = (long *)CONCAT44(plStack_400._4_4_,(int)plStack_430[0xa6]);
          pppppppbStack_3f8 = (byte *******)CONCAT71((int7)uVar45,1);
          *(undefined1 *)(plStack_430 + 0xa7) = 0;
        }
        plStack_3c8 = plStack_430 + 0xa1;
        lStack_388 = 0;
        pppppbStack_380 = (byte *****)0x0;
        ppppppbStack_3e0 = ppppppbStack_378;
        uStack_3d8 = uStack_370;
        fStack_3d0 = fStack_368;
        if (uStack_370 != 0) {
          pppppbVar40 = ppppppbStack_378[1];
          if (((ulong)pppppbStack_3e8 & (long)pppppbStack_3e8 - 1U) == 0) {
            pppppbVar40 = (byte *****)((ulong)pppppbVar40 & (long)pppppbStack_3e8 - 1U);
          }
          else if (pppppbStack_3e8 <= pppppbVar40) {
            if (((ulong)pppppbVar40 | (ulong)pppppbStack_3e8) >> 0x20 == 0) {
              pppppbVar40 = (byte *****)
                            (((ulong)pppppbVar40 & 0xffffffff) %
                            ((ulong)pppppbStack_3e8 & 0xffffffff));
            }
            else {
              pppppbVar40 = (byte *****)((ulong)pppppbVar40 % (ulong)pppppbStack_3e8);
            }
          }
          *(byte ********)(lStack_3f0 + (long)pppppbVar40 * 8) = &ppppppbStack_3e0;
          ppppppbStack_378 = (byte ******)0x0;
          uStack_370 = 0;
        }
        pppppplStack_3c0 = param_2[0x41];
        uStack_3b8 = (undefined4)plStack_430[0xa8];
        uStack_3b4 = *(undefined4 *)((long)plStack_430 + 0x544);
        uStack_3b0 = (undefined4)plStack_430[0xa9];
        uStack_3ac = *(undefined4 *)((long)plStack_430 + 0x54c);
        plStack_430[0xa8] = 0;
        plStack_430[0xa9] = 0;
        pppppppbStack_418 = unaff_R15;
        uVar25 = (**(code **)(plStack_430[0xac] + 0x10))(plStack_430 + 0xac,&pppppppbStack_418);
        plVar30 = (long *)CONCAT44(uStack_3ac,uStack_3b0);
        lVar29 = lStack_3f0;
        ppppppbVar28 = ppppppbStack_3e0;
        if (plVar30 != (long *)0x0) {
          LOCK();
          plVar32 = plVar30 + 1;
          lVar42 = *plVar32;
          *plVar32 = *plVar32 + -1;
          UNLOCK();
          if (lVar42 == 0) {
            (**(code **)(*plVar30 + 0x10))(plVar30);
            func_0x0412c2d0(plVar30);
            lVar29 = lStack_3f0;
            ppppppbVar28 = ppppppbStack_3e0;
          }
        }
        while (ppppppbVar28 != (byte ******)0x0) {
          ppppppbVar12 = (byte ******)*ppppppbVar28;
          lStack_3f0 = lVar29;
          if (((ulong)ppppppbVar28[8] & 1) != 0) {
            func_0x0412a280(ppppppbVar28[10],(ulong)ppppppbVar28[8] & 0xfffffffffffffffe);
          }
          if (((ulong)ppppppbVar28[6] & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)ppppppbVar28[6] & 0xff00ffffffffffff) - 8);
          }
          ppppppbVar28[6] = (byte *****)0x0;
          if (((ulong)ppppppbVar28[5] & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)ppppppbVar28[5] & 0xff00ffffffffffff) - 8);
          }
          func_0x0412a280(ppppppbVar28,0x58);
          lVar29 = lStack_3f0;
          ppppppbVar28 = ppppppbVar12;
        }
        lStack_3f0 = 0;
        if (lVar29 != 0) {
          func_0x0412a280(lVar29,(long)pppppbStack_3e8 << 3);
        }
        if ((char)pppppppbStack_3f8 == '\x01') {
          pppppppbStack_3f8 = (byte *******)((ulong)pppppppbStack_3f8 & 0xffffffffffffff00);
          ppppppplStack_358 = (long *******)CONCAT44(ppppppplStack_358._4_4_,plStack_400._0_4_);
          func_0x0d87c640(ppppppplStack_410 + 5,&ppppppplStack_358);
        }
        pppppppbVar34 = pppppppbStack_418;
        pppppbStack_428 = (byte *****)CONCAT71(pppppbStack_428._1_7_,uVar25);
        pppppppbStack_418 = (byte *******)0x0;
        if (pppppppbVar34 != (byte *******)0x0) {
          (*(code *)(*pppppppbVar34)[1])();
        }
        pppppplVar4 = param_2[0x33];
        if (pppppplVar4 == (long ******)0x0) {
LAB_09f608f6:
          if ((char)pppppbStack_428 == '\0') goto LAB_09f60fe5;
LAB_09f60901:
          unaff_RBP = (long *)0x80000000000000;
          (*(code *)(*param_2[0x1a])[0x1c])(param_2[0x1a],1);
          plVar30 = plStack_308;
          param_1 = plStack_308;
          if (param_2[0x12][0x18] == (long *****)0x0) {
LAB_09f61438:
            ppplStack_2f8 = (long ***)0x0;
            ppplStack_2f0 = (long ***)0x0;
            pppplStack_2e8 = (long ****)0x0;
            goto LAB_09f6144f;
          }
          pppplVar8 = param_2[0x12][0x18][9];
          ppplStack_2c0 = (long ***)0x0;
          pppplStack_2b8 = (long ****)0x0;
          if (pppplVar8 == (long ****)0x0) goto LAB_09f61438;
          ppplStack_2f8 = pppplVar8[3];
          ppplStack_2f0 = pppplVar8[4];
          if (ppplStack_2f0 != (long ***)0x0) {
            LOCK();
            ppplStack_2f0[1] = (long **)((long)ppplStack_2f0[1] + 1);
            UNLOCK();
            ppplStack_2c0 = ppplStack_2f0;
          }
          if (ppplStack_2f8 != (long ***)0x0) {
            pppplStack_2b8 = pppplVar8;
          }
          ppppplVar56 = param_2[0x12][7];
          if (ppplStack_2f0 == (long ***)0x0) {
            ppplStack_2f0 = (long ***)0x0;
          }
          else {
            LOCK();
            ppplStack_2f0[1] = (long **)((long)ppplStack_2f0[1] + 1);
            UNLOCK();
          }
          pppplStack_2e8 = pppplStack_2b8;
          ppplStack_2c8 = ppplStack_2f8;
          if ((ppplStack_2f8 == (long ***)0x0) || (*(char *)ppplStack_2f8 == '\0'))
          goto LAB_09f6144f;
          (*(code *)(*ppppplVar56)[10])(ppppplVar56,param_2,&ppplStack_2f8);
          ppplVar38 = ppplStack_2f0;
          ppplStack_2f8 = (long ***)0x0;
          ppplStack_2f0 = (long ***)0x0;
          if (ppplVar38 == (long ***)0x0) {
            pppplStack_2e8 = (long ****)0x0;
          }
          else {
            LOCK();
            ppplVar7 = ppplVar38 + 1;
            pplVar39 = *ppplVar7;
            *ppplVar7 = (long **)((long)*ppplVar7 + -1);
            UNLOCK();
            if (pplVar39 == (long **)0x0) {
              (*(code *)(*ppplVar38)[2])(ppplVar38);
              func_0x0412c2d0(ppplVar38);
            }
            ppplVar38 = ppplStack_2f0;
            pppplStack_2e8 = (long ****)0x0;
            if (ppplStack_2f0 != (long ***)0x0) {
              LOCK();
              ppplVar7 = ppplStack_2f0 + 1;
              pplVar39 = *ppplVar7;
              *ppplVar7 = (long **)((long)*ppplVar7 + -1);
              UNLOCK();
              if (pplVar39 == (long **)0x0) {
                (*(code *)(*ppplStack_2f0)[2])(ppplStack_2f0);
                func_0x0412c2d0(ppplVar38);
              }
            }
          }
          cVar23 = func_0x0412d4f0(0xf551a30);
          if (cVar23 == '\0') {
LAB_09f60a98:
            pppppppbStack_418 = (byte *******)0xf551a30;
            ppppppplStack_410 = (long *******)CONCAT71(ppppppplStack_410._1_7_,1);
            func_0x0412d450(0xf551a30);
            if (_DAT_0f551b00 != 0) {
              uVar45 = _DAT_0f551b00;
              do {
                LOCK();
                bVar59 = uVar45 == _DAT_0f551b00;
                uVar47 = uVar45 | 0x8000000000000000;
                if (!bVar59) {
                  uVar45 = _DAT_0f551b00;
                  uVar47 = _DAT_0f551b00;
                }
                _DAT_0f551b00 = uVar47;
                UNLOCK();
                if (bVar59) {
                  func_0x0eee0430(0xf551ac0,&pppppppbStack_418);
                  uVar45 = _DAT_0f551b00;
                }
              } while (uVar45 != 0);
            }
          }
          else if (_DAT_0f551b00 != 0) {
            func_0x0412d520(0xf551a30);
            goto LAB_09f60a98;
          }
          pppppplVar4 = _DAT_0f551b18;
          _DAT_0f551b10 = (long ******)0x0;
          _DAT_0f551b18 = (long ******)0x0;
          if (pppppplVar4 != (long ******)0x0) {
            LOCK();
            pppppplVar13 = pppppplVar4 + 1;
            ppppplVar56 = *pppppplVar13;
            *pppppplVar13 = (long *****)((long)*pppppplVar13 + -1);
            UNLOCK();
            if (ppppplVar56 == (long *****)0x0) {
              (*(code *)(*pppppplVar4)[2])(pppppplVar4);
              func_0x0412c2d0(pppppplVar4);
            }
          }
          _DAT_0f551b20 = (long *******)0x0;
          _DAT_0f551b10 = param_2[1];
          pppppplVar4 = param_2[2];
          if (pppppplVar4 != (long ******)0x0) {
            LOCK();
            pppppplVar4[1] = (long *****)((long)pppppplVar4[1] + 1);
            UNLOCK();
          }
          plVar32 = (long *)_DAT_0f551b18;
          if (_DAT_0f551b18 != (long ******)0x0) {
            LOCK();
            plVar1 = (long *)(_DAT_0f551b18 + 1);
            lVar29 = *plVar1;
            _DAT_0f551b18 = pppppplVar4;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            pppppplVar4 = _DAT_0f551b18;
            if (lVar29 == 0) {
              (**(code **)(*plVar32 + 0x10))(plVar32);
              func_0x0412c2d0(plVar32);
              pppppplVar4 = _DAT_0f551b18;
            }
          }
          _DAT_0f551b18 = pppppplVar4;
          if (((_DAT_0f551b10 != (long ******)0x0) &&
              (_DAT_0f551b20 = param_2, *(char *)_DAT_0f551b10 == '\0')) &&
             (cVar23 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_014785c6)
             , cVar23 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          ppppppplVar48 = _DAT_0f551b20;
          ppppppplStack_358 = _DAT_0f551b20;
          func_0x0412d520(0xf551a30);
          if (param_2[0x4f] != (long ******)0x0) {
            func_0x09f92010();
            param_2[0x4f] = (long ******)0x0;
          }
          param_2[0x4f] = (long ******)ppppppplVar48;
          if ((param_2[0x22] == (long ******)0x0) &&
             (cVar23 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_014b8a2c),
             cVar23 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          if ((*(char *)param_2[0x22] == '\0') &&
             (cVar23 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_014b8a2c
                                      ), cVar23 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          pppppppbStack_418 = (byte *******)&UNK_0f398ca8;
          ppppppplStack_410 = param_2;
          pppppppbStack_3f8 = (byte *******)&pppppppbStack_418;
          func_0x0c5e4710(param_2[0x24],&pppppppbStack_418);
          if ((byte ********)pppppppbStack_3f8 == &pppppppbStack_418) {
            lVar29 = 0x20;
LAB_09f60d01:
            (**(code **)((long)*pppppppbStack_3f8 + lVar29))();
          }
          else {
            lVar29 = 0x28;
            if (pppppppbStack_3f8 != (byte *******)0x0) goto LAB_09f60d01;
          }
          *(char *)(param_2 + 0x4e) = (char)plStack_430[0xaa];
          func_0x0412d550(0xf5508c0);
          LOCK();
          _DAT_0f550990 = _DAT_0f550990 + 1;
          UNLOCK();
          func_0x0412d610(0xf5508c0);
          plVar32 = _DAT_0f5509a8;
          pbVar19 = _DAT_0f5509a0;
          if ((_DAT_0f5509a0 == (byte *)0x0) || (*_DAT_0f5509a0 != 1)) {
            uStack_288 = 0;
            cStack_280 = '\0';
            func_0x0eee02f0(0xf5508c0);
          }
          else {
            bVar24 = 1;
            if (_DAT_0f5509a8 != (long *)0x0) {
              LOCK();
              _DAT_0f5509a8[1] = _DAT_0f5509a8[1] + 1;
              UNLOCK();
              bVar24 = *pbVar19;
            }
            plVar1 = _DAT_0f5509b0;
            uStack_288 = 0xf5508c0;
            cStack_280 = '\x01';
            pbStack_278 = pbVar19;
            plStack_270 = plVar32;
            plStack_268 = _DAT_0f5509b0;
            if ((bVar24 & 1) != 0) {
              lVar29 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x130);
              if (lVar29 == 0) {
                func_0x0eec74c0(0x130,0);
              }
              ppppppplStack_410 = (long *******)&UNK_09f69ef0;
              ppppplStack_408 = (long *****)0x0;
              plStack_400 = plVar1;
              pppppppbStack_418 = (byte *******)&UNK_0f1f8eb8;
              ppppppplStack_338 = (long *******)0x0;
              plStack_138 = (long *)0x0;
              plStack_168 = (long *)0x0;
              pppppppbStack_3f8 = (byte *******)&pppppppbStack_418;
              func_0x09a26e20(lVar29,2,&pppppppbStack_418,&ppppppplStack_358,alStack_158,alStack_188
                             );
              if (plStack_168 == alStack_188) {
                lVar42 = 0x20;
LAB_09f61231:
                (**(code **)(*plStack_168 + lVar42))();
              }
              else {
                lVar42 = 0x28;
                if (plStack_168 != (long *)0x0) goto LAB_09f61231;
              }
              plVar30 = plStack_308;
              if (plStack_138 == alStack_158) {
                lVar42 = 0x20;
LAB_09f61265:
                (**(code **)(*plStack_138 + lVar42))();
              }
              else {
                lVar42 = 0x28;
                if (plStack_138 != (long *)0x0) goto LAB_09f61265;
              }
              if ((long ********)ppppppplStack_338 == &ppppppplStack_358) {
                lVar42 = 0x20;
LAB_09f61291:
                (**(code **)((long)*ppppppplStack_338 + lVar42))();
              }
              else {
                lVar42 = 0x28;
                if (ppppppplStack_338 != (long *******)0x0) goto LAB_09f61291;
              }
              if ((byte ********)pppppppbStack_3f8 == &pppppppbStack_418) {
                lVar42 = 0x20;
LAB_09f612b2:
                (**(code **)((long)*pppppppbStack_3f8 + lVar42))();
              }
              else {
                lVar42 = 0x28;
                if (pppppppbStack_3f8 != (byte *******)0x0) goto LAB_09f612b2;
              }
              lVar42 = plVar1[0x7b];
              plVar1[0x7b] = lVar29;
              if (lVar42 != 0) {
                func_0x063a6060(lVar42);
                func_0x0412a280(lVar42,0x130);
              }
            }
            pbStack_278 = (byte *)0x0;
            plStack_270 = (long *)0x0;
            if (plVar32 != (long *)0x0) {
              LOCK();
              plVar1 = plVar32 + 1;
              lVar29 = *plVar1;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (lVar29 == 0) {
                (**(code **)(*plVar32 + 0x10))(plVar32);
                func_0x0412c2d0(plVar32);
              }
              plVar32 = plStack_270;
              plStack_268 = (long *)0x0;
              if (plStack_270 != (long *)0x0) {
                LOCK();
                plVar1 = plStack_270 + 1;
                lVar29 = *plVar1;
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (lVar29 == 0) {
                  (**(code **)(*plStack_270 + 0x10))(plStack_270);
                  func_0x0412c2d0(plVar32);
                }
              }
            }
          }
          if (cStack_280 == '\x01') {
            func_0x0eee02f0(uStack_288);
          }
          plVar32 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
          if (plVar32 == (long *)0x0) {
            func_0x0eec74c0(0x38,0);
          }
          plVar32[1] = 0;
          plVar32[2] = 0;
          *plVar32 = (long)&UNK_0f13da68;
          plVar32[3] = (long)&UNK_0f13dab8;
          *(undefined2 *)(plVar32 + 6) = 0x101;
          LOCK();
          plVar32[1] = plVar32[1] + 1;
          UNLOCK();
          LOCK();
          plVar32[2] = plVar32[2] + 1;
          UNLOCK();
          plVar32[4] = (long)(plVar32 + 4);
          plVar32[5] = (long)plVar32;
          LOCK();
          plVar1 = plVar32 + 1;
          lVar29 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar29 == 0) {
            (**(code **)(*plVar32 + 0x10))(plVar32);
            func_0x0412c2d0(plVar32);
          }
          ppplVar38 = ppplStack_2c0;
          *plVar30 = (long)(plVar32 + 3);
          plVar30[1] = (long)plVar32;
          ppplStack_2c8 = (long ***)0x0;
          ppplStack_2c0 = (long ***)0x0;
          lVar29 = lStack_388;
          ppppppbVar28 = ppppppbStack_378;
          if (ppplVar38 != (long ***)0x0) {
            LOCK();
            ppplVar7 = ppplVar38 + 1;
            pplVar39 = *ppplVar7;
            *ppplVar7 = (long **)((long)*ppplVar7 + -1);
            UNLOCK();
            if (pplVar39 == (long **)0x0) {
              (*(code *)(*ppplVar38)[2])(ppplVar38);
              func_0x0412c2d0(ppplVar38);
            }
            ppplVar38 = ppplStack_2c0;
            pppplStack_2b8 = (long ****)0x0;
            lVar29 = lStack_388;
            ppppppbVar28 = ppppppbStack_378;
            if (ppplStack_2c0 != (long ***)0x0) {
              LOCK();
              ppplVar7 = ppplStack_2c0 + 1;
              pplVar39 = *ppplVar7;
              *ppplVar7 = (long **)((long)*ppplVar7 + -1);
              UNLOCK();
              if (pplVar39 == (long **)0x0) {
                (*(code *)(*ppplStack_2c0)[2])(ppplStack_2c0);
                func_0x0412c2d0(ppplVar38);
                lVar29 = lStack_388;
                ppppppbVar28 = ppppppbStack_378;
              }
            }
          }
        }
        else {
          pppppplVar13 = param_2[0x13];
          if (param_2[0x12][0x18] == (long *****)0x0) {
LAB_09f6077d:
            ppppppplStack_410 = (long *******)0x0;
            pppppppbStack_418 = (byte *******)0x0;
            ppppplVar56 = (long *****)0x0;
LAB_09f60783:
            ppppplStack_408 = (long *****)0x0;
            ppppppbVar28 = (byte ******)0x0;
          }
          else {
            ppppplStack_408 = (long *****)param_2[0x12][0x18][9];
            ppppppplStack_410 = (long *******)0x0;
            if (ppppplStack_408 == (long *****)0x0) goto LAB_09f6077d;
            ppppppbVar28 = (byte ******)ppppplStack_408[3];
            ppppplVar56 = (long *****)ppppplStack_408[4];
            if (ppppplVar56 != (long *****)0x0) {
              LOCK();
              ppppplVar56[1] = (long ****)((long)ppppplVar56[1] + 1);
              UNLOCK();
              ppppppplStack_410 = (long *******)ppppplVar56;
            }
            pppppppbStack_418 = (byte *******)ppppppbVar28;
            if (ppppppbVar28 == (byte ******)0x0) goto LAB_09f60783;
          }
          ppppplVar3 = ppppplStack_408;
          pppppppbStack_2d0 = unaff_R15;
          pppppplVar41 = (long ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
          if (pppppplVar41 == (long ******)0x0) {
            func_0x0eec74c0(0x28,0);
          }
          pppppppbStack_418 = (byte *******)0x0;
          ppppppplStack_410 = (long *******)0x0;
          ppppplStack_408 = (long *****)0x0;
          *pppppplVar41 = (long *****)&UNK_0f1d0068;
          pppppplVar41[1] = (long *****)pppppplVar13;
          pppppplVar41[2] = (long *****)ppppppbVar28;
          pppppplVar41[3] = ppppplVar56;
          if (ppppplVar56 == (long *****)0x0) {
            pppppplVar41[4] = ppppplVar3;
            ppppppplStack_358 = (long *******)pppppplVar41;
          }
          else {
            LOCK();
            ppppplVar56[1] = (long ****)((long)ppppplVar56[1] + 1);
            UNLOCK();
            pppppplVar41[4] = ppppplVar3;
            LOCK();
            ppppplVar3 = ppppplVar56 + 1;
            pppplVar8 = *ppppplVar3;
            *ppppplVar3 = (long ****)((long)*ppppplVar3 + -1);
            UNLOCK();
            ppppppplStack_358 = (long *******)pppppplVar41;
            if (pppplVar8 == (long ****)0x0) {
              (*(code *)(*ppppplVar56)[2])(ppppplVar56);
              func_0x0412c2d0(ppppplVar56);
            }
          }
          unaff_R15 = pppppppbStack_2d0;
          ppppppplVar48 = ppppppplStack_358;
          ppppppplStack_358 = (long *******)0x0;
          ppppplVar56 = pppppplVar4[0x77];
          pppppplVar4[0x77] = (long *****)ppppppplVar48;
          if (ppppplVar56 != (long *****)0x0) {
            (*(code *)(*ppppplVar56)[1])();
            ppppppplVar48 = (long *******)pppppplVar4[0x77];
          }
          func_0x09aa9640(pppppplVar4[0x89],ppppppplVar48);
          ppppppplVar48 = ppppppplStack_410;
          ppppppplStack_358 = (long *******)0x0;
          pppppppbStack_418 = (byte *******)0x0;
          ppppppplStack_410 = (long *******)0x0;
          if (ppppppplVar48 == (long *******)0x0) goto LAB_09f608f6;
          LOCK();
          plVar30 = (long *)(ppppppplVar48 + 1);
          lVar29 = *plVar30;
          *plVar30 = *plVar30 + -1;
          UNLOCK();
          if (lVar29 != 0) {
            ppppplStack_408 = (long *****)0x0;
            goto LAB_09f608f6;
          }
          (**(code **)((long)*ppppppplVar48 + 0x10))(ppppppplVar48);
          func_0x0412c2d0(ppppppplVar48);
          ppppppplVar48 = ppppppplStack_410;
          ppppplStack_408 = (long *****)0x0;
          if (ppppppplStack_410 == (long *******)0x0) goto LAB_09f608f6;
          ppppplStack_408 = (long *****)0x0;
          LOCK();
          ppppppplVar2 = ppppppplStack_410 + 1;
          pppppplVar4 = *ppppppplVar2;
          *ppppppplVar2 = (long ******)((long)*ppppppplVar2 + -1);
          UNLOCK();
          if (pppppplVar4 != (long ******)0x0) goto LAB_09f608f6;
          (*(code *)(*ppppppplStack_410)[2])(ppppppplStack_410);
          func_0x0412c2d0(ppppppplVar48);
          if ((char)pppppbStack_428 != '\0') goto LAB_09f60901;
LAB_09f60fe5:
          (**(code **)(*plStack_2b0 + 0x960))
                    (plStack_2b0,&UNK_01a46388,unaff_R15 != (byte *******)0x0,0);
          plVar30 = plStack_308;
          plVar32 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
          if (plVar32 == (long *)0x0) {
            func_0x0eec74c0(0x38,0);
          }
          plVar32[1] = 0;
          plVar32[2] = 0;
          *plVar32 = (long)&UNK_0f13da68;
          plVar32[3] = (long)&UNK_0f13dab8;
          *(undefined2 *)(plVar32 + 6) = 0x100;
          LOCK();
          plVar32[1] = plVar32[1] + 1;
          UNLOCK();
          LOCK();
          plVar32[2] = plVar32[2] + 1;
          UNLOCK();
          plVar32[4] = (long)(plVar32 + 4);
          plVar32[5] = (long)plVar32;
          LOCK();
          plVar1 = plVar32 + 1;
          lVar29 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar29 == 0) {
            (**(code **)(*plVar32 + 0x10))(plVar32);
            func_0x0412c2d0(plVar32);
          }
          *plVar30 = (long)(plVar32 + 3);
          plVar30[1] = (long)plVar32;
          lVar29 = lStack_388;
          ppppppbVar28 = ppppppbStack_378;
        }
        while (ppppppbVar28 != (byte ******)0x0) {
          ppppppbVar12 = (byte ******)*ppppppbVar28;
          lStack_388 = lVar29;
          if (((ulong)ppppppbVar28[8] & 1) != 0) {
            func_0x0412a280(ppppppbVar28[10],(ulong)ppppppbVar28[8] & 0xfffffffffffffffe);
          }
          if (((ulong)ppppppbVar28[6] & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)ppppppbVar28[6] & 0xff00ffffffffffff) - 8);
          }
          ppppppbVar28[6] = (byte *****)0x0;
          if (((ulong)ppppppbVar28[5] & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)ppppppbVar28[5] & 0xff00ffffffffffff) - 8);
          }
          func_0x0412a280(ppppppbVar28,0x58);
          lVar29 = lStack_388;
          ppppppbVar28 = ppppppbVar12;
        }
        lStack_388 = 0;
        if (lVar29 != 0) {
          func_0x0412a280(lVar29,(long)pppppbStack_380 << 3);
        }
LAB_09f61174:
        if (pppppplStack_390 != (long ******)0x0) {
          func_0x0412c2d0();
        }
        plVar30 = plStack_440;
        pppppppbStack_448 = (byte *******)0x0;
        plStack_440 = (long *)0x0;
        if (plVar30 != (long *)0x0) {
          LOCK();
          plVar32 = plVar30 + 1;
          lVar29 = *plVar32;
          *plVar32 = *plVar32 + -1;
          UNLOCK();
          if (lVar29 == 0) {
            (**(code **)(*plVar30 + 0x10))(plVar30);
            func_0x0412c2d0(plVar30);
          }
          plVar30 = plStack_440;
          plStack_438 = (long *)0x0;
          if (plStack_440 != (long *)0x0) {
            LOCK();
            plVar32 = plStack_440 + 1;
            lVar29 = *plVar32;
            *plVar32 = *plVar32 + -1;
            UNLOCK();
            if (lVar29 == 0) {
              (**(code **)(*plStack_440 + 0x10))(plStack_440);
              func_0x0412c2d0(plVar30);
            }
          }
        }
        func_0x0ca11610(auStack_2a0);
        if (lStack_290 != 0) {
          func_0x0412c2d0();
        }
        return;
      }
      if ((pppppppbStack_448 == (byte *******)0x0) &&
         (cVar23 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_01207b8e),
         cVar23 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      if ((*(byte *)pppppppbStack_448 == 0) &&
         (cVar23 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_01207b8e),
         cVar23 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      uVar31 = (**(code **)(*plStack_438 + 0x638))();
      if (param_2[0x66] != (long ******)0x0) {
        func_0x09a166e0(uVar31,param_2[0x66] + 1);
        if ((pppppppbStack_448 == (byte *******)0x0) &&
           (cVar23 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_01207b8e),
           cVar23 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        if ((*(byte *)pppppppbStack_448 == 0) &&
           (cVar23 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_01207b8e),
           cVar23 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        uVar31 = func_0x0c99e2b0(plStack_438);
        if (param_2[0x66] != (long ******)0x0) {
          func_0x049d12a0(uVar31,param_2[0x66] + 3);
          if ((pppppppbStack_448 == (byte *******)0x0) &&
             (cVar23 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_01207b8e),
             cVar23 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          if ((*(byte *)pppppppbStack_448 == 0) &&
             (cVar23 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_01207b8e
                                      ), cVar23 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          uVar31 = (**(code **)(*plStack_438 + 0x610))();
          if (param_2[0x66] != (long ******)0x0) {
            func_0x0497de70(uVar31,param_2[0x66] + 2);
            goto LAB_09f5e3b0;
          }
        }
      }
    }
  }
LAB_09f6144f:
  func_0x04890760();
LAB_09f61454:
  uVar31 = func_0x0eee02f0(0xf551cc8);
  uVar31 = func_0x04882e20(uVar31);
  lVar29 = 0x20;
  if ((plStack_168 == unaff_RBP) || (lVar29 = 0x28, plStack_168 != (long *)0x0)) {
    (**(code **)(*plStack_168 + lVar29))();
  }
  lVar29 = 0x20;
  if ((plStack_138 == param_1) || (lVar29 = 0x28, plStack_138 != (long *)0x0)) {
    (**(code **)(*plStack_138 + lVar29))();
  }
  lVar29 = 0x20;
  if (((long ********)ppppppplStack_338 == &ppppppplStack_358) ||
     (lVar29 = 0x28, ppppppplStack_338 != (long *******)0x0)) {
    (**(code **)((long)*ppppppplStack_338 + lVar29))();
  }
  lVar29 = 0x20;
  if (((byte ********)pppppppbStack_3f8 == &pppppppbStack_418) ||
     (lVar29 = 0x28, pppppppbStack_3f8 != (byte *******)0x0)) {
    (**(code **)((long)*pppppppbStack_3f8 + lVar29))();
  }
  func_0x0412a280(unaff_R15,0x130);
  func_0x0488b3e0(&uStack_288);
  func_0x048df960(&ppplStack_2c8);
  func_0x08a91f30(&lStack_388);
  if (pppppplStack_390 != (long ******)0x0) {
    func_0x0412c2d0();
  }
  func_0x09f5d820(&pppppppbStack_448);
  func_0x0ca115f0(auStack_2a0);
  func_0x0eee2d70(uVar31);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


