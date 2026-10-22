/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6d16270 (ELF vaddr 0x6c16270)
 * Label: caller-of-callee
 * Body:  [[06d16270, 06d16bc3]]
 * Ghidra: FUN_06d16270
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_06d16270(long *param_1)

{
  byte *pbVar1;
  long *plVar2;
  uint *puVar3;
  byte *pbVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  byte bVar11;
  undefined1 uVar12;
  int iVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  ulong uVar21;
  bool bVar22;
  long *plStack_528;
  undefined8 uStack_520;
  long lStack_510;
  undefined *puStack_508;
  long *plStack_500;
  byte *pbStack_4f8;
  long *plStack_4f0;
  long *plStack_4e8;
  long *plStack_4c0;
  long *plStack_4b8;
  long *plStack_4b0;
  long *plStack_4a8;
  long *plStack_4a0;
  undefined8 uStack_498;
  long *plStack_490;
  long *plStack_488;
  long *plStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  long lStack_468;
  undefined8 uStack_460;
  undefined1 uStack_458;
  long lStack_450;
  undefined8 uStack_448;
  long *plStack_440;
  undefined1 auStack_438 [1024];
  ulong uStack_38;
  
  lVar14 = (**(code **)(*param_1 + 0x70))();
  bVar22 = (*(byte *)(param_1 + 0x15) & 1) != 0;
  puStack_508 = (undefined *)((long)param_1 + 0xa9);
  if (bVar22) {
    puStack_508 = (undefined *)param_1[0x17];
  }
  plStack_500 = (long *)(ulong)(*(byte *)(param_1 + 0x15) >> 1);
  if (bVar22) {
    plStack_500 = (long *)param_1[0x16];
  }
  pbStack_4f8 = &UNK_0142ff99;
  plStack_4f0 = (long *)&DAT_00000010;
  func_0x049151c0(auStack_438,&puStack_508,2,0x2f);
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x338);
  if (plVar15 == (long *)0x0) {
    func_0x0eec74c0(0x338,0);
    uVar17 = uStack_38;
    if (uStack_38 < 0xfffffffffffffff8) goto LAB_06d16320;
LAB_06d16b39:
    func_0x04882e30();
LAB_06d16b3e:
    func_0x0eec74c0(1,0);
  }
  else {
    uVar17 = uStack_38;
    if (0xfffffffffffffff7 < uStack_38) goto LAB_06d16b39;
LAB_06d16320:
    if (uVar17 < 0x17) {
      uStack_520 = CONCAT71(uStack_520._1_7_,(char)uVar17 * '\x02');
      lVar18 = (long)&uStack_520 + 1;
      if (uVar17 != 0) goto LAB_06d16386;
    }
    else {
      uVar21 = 0x1a;
      if ((uVar17 | 7) != 0x17) {
        uVar21 = (uVar17 | 7) + 1;
      }
      lVar18 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar21);
      if (lVar18 == 0) {
        func_0x0eec74c0(uVar21,0);
      }
      uStack_520 = uVar21 | 1;
      lStack_510 = lVar18;
LAB_06d16386:
      func_0x0eee2f00(lVar18,auStack_438,uVar17);
    }
    *(undefined1 *)(lVar18 + uVar17) = 0;
    func_0x06d09ea0(plVar15,&uStack_520);
    *plVar15 = (long)&UNK_0f088e48;
    plVar15[0x49] = 0;
    plVar15[0x4a] = 0;
    plVar15[0x4b] = 0;
    plVar15[0x4c] = 0;
    plVar15[0x4d] = 0;
    if ((_DAT_0f7285b0 == (char *)0x0) &&
       (cVar10 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_012713a8),
       cVar10 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((*_DAT_0f7285b0 == '\0') &&
       (cVar10 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_012713a8),
       cVar10 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uVar6 = _DAT_0f7285c0;
    plVar16 = _DAT_0f7280e0;
    if (_DAT_0f7280e0 == (long *)0x0) {
      plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x68);
      if (plVar16 == (long *)0x0) {
        func_0x0eec74c0(0x68,0);
      }
      func_0x0ee29760(plVar16,&UNK_01302b9e,0xb,0x3c);
      if (_DAT_0f7280e0 != (long *)0x0) {
        lVar18 = *_DAT_0f7280e0;
        _DAT_0f7280e0 = plVar16;
        (**(code **)(lVar18 + 8))();
        plVar16 = _DAT_0f7280e0;
      }
    }
    _DAT_0f7280e0 = plVar16;
    plStack_4c0 = plVar15 + 0x4e;
    func_0x06d68ba0(plStack_4c0,uVar6,_DAT_0f7280e0,&UNK_01394ad2);
    uVar17 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,1);
    if (uVar17 == 0) goto LAB_06d16b3e;
  }
  plVar15[0x4f] = uVar17;
  *(undefined2 *)(plVar15 + 0x58) = 0;
  *(undefined2 *)(plVar15 + 0x5b) = 0;
  puVar3 = (uint *)(plVar15 + 0x5e);
  *(undefined2 *)(plVar15 + 0x5e) = 0;
  *(undefined2 *)(plVar15 + 0x61) = 0;
  pbVar4 = (byte *)(plVar15 + 100);
  *(undefined2 *)(plVar15 + 100) = 0;
  plVar15[0x50] = 0;
  plVar15[0x51] = 0;
  plVar15[0x52] = 0;
  plVar15[0x53] = 0;
  plVar15[0x54] = 0;
  plVar15[0x55] = 0;
  *(undefined8 *)((long)plVar15 + 0x2ac) = 0;
  *(undefined8 *)((long)plVar15 + 0x2b4) = 0;
  if ((DAT_0f776b18 == '\0') && (iVar13 = func_0x04108328(&DAT_0f776b18), iVar13 != 0)) {
    func_0x0edf5500(&DAT_0f776968);
    func_0x0eee2f40(&SUB_0edf6010,&DAT_0f776968,0xf53dab8);
    FUN_0410844d(&DAT_0f776b18);
  }
  if (puVar3 != (uint *)&DAT_0f776968) {
    if ((*puVar3 & 1) == 0) {
      if ((_DAT_0f776968 & 1) == 0) {
        plVar15[0x60] = _DAT_0f776978;
        uVar9 = uRam000000000f776974;
        uVar8 = _DAT_0f776970;
        uVar7 = uRam000000000f77696c;
        *puVar3 = _DAT_0f776968;
        *(undefined4 *)((long)plVar15 + 0x2f4) = uVar7;
        *(undefined4 *)(plVar15 + 0x5f) = uVar8;
        *(undefined4 *)((long)plVar15 + 0x2fc) = uVar9;
      }
      else {
        func_0x04885070(puVar3,_DAT_0f776978,CONCAT44(uRam000000000f776974,_DAT_0f776970));
      }
    }
    else {
      bVar22 = (_DAT_0f776968 & 1) != 0;
      lVar18 = 0xf776969;
      if (bVar22) {
        lVar18 = _DAT_0f776978;
      }
      uVar17 = (ulong)((_DAT_0f776968 & 0xff) >> 1);
      if (bVar22) {
        uVar17 = CONCAT44(uRam000000000f776974,_DAT_0f776970);
      }
      func_0x04885120(puVar3,lVar18,uVar17);
    }
  }
  func_0x0412d550(0xf5522b8);
  LOCK();
  _DAT_0f552388 = _DAT_0f552388 + 1;
  UNLOCK();
  func_0x0412d610(0xf5522b8);
  plVar16 = _DAT_0f5523a0;
  pbVar1 = _DAT_0f552398;
  if ((_DAT_0f552398 == (byte *)0x0) || (*_DAT_0f552398 != 1)) {
    puStack_508 = (undefined *)0x0;
    plStack_500 = (long *)((ulong)plStack_500._1_7_ << 8);
    func_0x0eee02f0(0xf5522b8);
  }
  else {
    bVar11 = 1;
    if (_DAT_0f5523a0 != (long *)0x0) {
      LOCK();
      _DAT_0f5523a0[1] = _DAT_0f5523a0[1] + 1;
      UNLOCK();
      bVar11 = *pbVar1;
    }
    plVar19 = _DAT_0f5523a8;
    puStack_508 = (undefined *)0xf5522b8;
    plStack_500 = (long *)CONCAT71(plStack_500._1_7_,1);
    pbStack_4f8 = pbVar1;
    plStack_4f0 = plVar16;
    plStack_4e8 = _DAT_0f5523a8;
    if ((bVar11 & 1) != 0) {
      (**(code **)(*_DAT_0f5523a8 + 0x500))(&uStack_478,_DAT_0f5523a8);
      if ((*(byte *)(plVar15 + 0x61) & 1) != 0) {
        func_0x0412a280(plVar15[99],plVar15[0x61] & 0xfffffffffffffffe);
      }
      plVar15[99] = lStack_468;
      *(undefined4 *)(plVar15 + 0x61) = (undefined4)uStack_478;
      *(undefined4 *)((long)plVar15 + 0x30c) = uStack_478._4_4_;
      *(undefined4 *)(plVar15 + 0x62) = (undefined4)uStack_470;
      *(undefined4 *)((long)plVar15 + 0x314) = uStack_470._4_4_;
      if ((*pbVar1 == 0) &&
         (cVar10 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_014ad871),
         cVar10 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      lVar18 = (**(code **)(*plVar19 + 0x7a0))(plVar19);
      plVar19 = (long *)(plVar19[4] + 0x218);
      if (lVar18 != 0) {
        plVar19 = (long *)(lVar18 + 8);
      }
      lVar18 = *plVar19;
      if ((lVar18 != 0) && (pbVar1 = (byte *)(lVar18 + 0x20), pbVar4 != pbVar1)) {
        bVar11 = *pbVar1;
        if ((*pbVar4 & 1) == 0) {
          if ((bVar11 & 1) == 0) {
            plVar15[0x66] = *(long *)(lVar18 + 0x30);
            lVar18 = *(long *)(lVar18 + 0x28);
            *(undefined8 *)pbVar4 = *(undefined8 *)pbVar1;
            plVar15[0x65] = lVar18;
          }
          else {
            func_0x04885070(pbVar4,*(undefined8 *)(lVar18 + 0x30),*(undefined8 *)(lVar18 + 0x28));
          }
        }
        else {
          bVar22 = (bVar11 & 1) != 0;
          lVar20 = lVar18 + 0x21;
          if (bVar22) {
            lVar20 = *(long *)(lVar18 + 0x30);
          }
          uVar17 = (ulong)(bVar11 >> 1);
          if (bVar22) {
            uVar17 = *(ulong *)(lVar18 + 0x28);
          }
          func_0x04885120(pbVar4,lVar20,uVar17);
        }
      }
    }
    pbStack_4f8 = (undefined *)0x0;
    plStack_4f0 = (long *)0x0;
    if (plVar16 != (long *)0x0) {
      LOCK();
      plVar19 = plVar16 + 1;
      lVar18 = *plVar19;
      *plVar19 = *plVar19 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
        func_0x0412c2d0(plVar16);
      }
      plVar16 = plStack_4f0;
      plStack_4e8 = (long *)0x0;
      if (plStack_4f0 != (long *)0x0) {
        LOCK();
        plVar19 = plStack_4f0 + 1;
        lVar18 = *plVar19;
        *plVar19 = *plVar19 + -1;
        UNLOCK();
        if (lVar18 == 0) {
          (**(code **)(*plStack_4f0 + 0x10))(plStack_4f0);
          func_0x0412c2d0(plVar16);
        }
      }
    }
  }
  if ((char)plStack_500 == '\x01') {
    func_0x0eee02f0(puStack_508);
  }
  uStack_478 = &UNK_012f4f4a;
  uStack_470 = 0x16;
  lStack_468 = _DAT_0f778528;
  uStack_460 = 0xffffffff00000001;
  uStack_458 = 0;
  lStack_450 = 0;
  lStack_450 = func_0x0417cc60();
  lStack_450 = lStack_450 + 10000000000;
  plVar16 = (long *)*plStack_4c0;
  uVar12 = (**(code **)(*plVar16 + 0x48))(plVar16);
  uStack_498 = 0;
  plStack_490 = (long *)0x0;
  uStack_448 = 0;
  plStack_440 = (long *)0x0;
  puStack_508 = &UNK_0f08a3f0;
  plStack_500 = plVar15;
  func_0x048a4fd0(&plStack_4b8,plVar16,&uStack_478,&uStack_498,uVar12,&puStack_508);
  if (puStack_508 != (undefined *)0x0) {
    (**(code **)(puStack_508 + 8))(&puStack_508);
  }
  plVar19 = plStack_490;
  if (plStack_490 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_490 + 1;
    lVar18 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plStack_490 + 0x10))(plStack_490);
      func_0x0412c2d0(plVar19);
    }
  }
  plStack_488 = plStack_4b8;
  plStack_480 = plStack_4b0;
  if (plStack_4b0 != (long *)0x0) {
    LOCK();
    plStack_4b0[1] = plStack_4b0[1] + 1;
    UNLOCK();
  }
  iVar13 = (int)plVar16[0x10];
  if (iVar13 != 1) {
    if (iVar13 == 3) {
      *(undefined4 *)(plStack_4b8 + 6) = 0;
    }
    else if (iVar13 == 2) {
      (**(code **)(*plStack_4b8 + 0x10))();
      goto LAB_06d1695e;
    }
    plStack_4a8 = plStack_4b8;
    plStack_4a0 = plStack_4b0;
    if (plStack_4b0 != (long *)0x0) {
      LOCK();
      plStack_4b0[1] = plStack_4b0[1] + 1;
      UNLOCK();
    }
    (**(code **)(*plVar16 + 0x28))(plVar16,&plStack_4a8,0);
    plVar16 = plStack_4a0;
    if (plStack_4a0 != (long *)0x0) {
      LOCK();
      plVar19 = plStack_4a0 + 1;
      lVar18 = *plVar19;
      *plVar19 = *plVar19 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plStack_4a0 + 0x10))(plStack_4a0);
        func_0x0412c2d0(plVar16);
      }
    }
  }
LAB_06d1695e:
  plVar16 = plStack_480;
  if (plStack_480 != (long *)0x0) {
    LOCK();
    plVar19 = plStack_480 + 1;
    lVar18 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plStack_480 + 0x10))(plStack_480);
      func_0x0412c2d0(plVar16);
    }
  }
  plVar16 = plStack_440;
  if (plStack_440 != (long *)0x0) {
    LOCK();
    plVar19 = plStack_440 + 1;
    lVar18 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plStack_440 + 0x10))(plStack_440);
      func_0x0412c2d0(plVar16);
    }
  }
  if (plStack_4b0 != (long *)0x0) {
    LOCK();
    plVar16 = plStack_4b0 + 1;
    lVar18 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plStack_4b0 + 0x10))(plStack_4b0);
      func_0x0412c2d0(plStack_4b0);
    }
  }
  if ((uStack_520 & 1) != 0) {
    func_0x0412a280(lStack_510,uStack_520 & 0xfffffffffffffffe);
  }
  puVar5 = (undefined *)(lVar14 + 0x458);
  plStack_500 = (long *)CONCAT71(plStack_500._1_7_,1);
  plStack_528 = plVar15;
  puStack_508 = puVar5;
  func_0x0412d450(puVar5);
  func_0x06d10c70(lVar14 + 0x18,&plStack_528);
  func_0x0412d520(puVar5);
  if (plStack_528 != (long *)0x0) {
    (**(code **)(*plStack_528 + 8))();
  }
  return;
}


