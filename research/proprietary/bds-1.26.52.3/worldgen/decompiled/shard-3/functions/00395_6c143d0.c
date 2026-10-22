/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6d143d0 (ELF vaddr 0x6c143d0)
 * Label: caller-of-callee
 * Body:  [[06d143d0, 06d144ea] [06d144f0, 06d15128] [06d15130, 06d157d1]]
 * Ghidra: FUN_06d143d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_06d143d0(long *param_1,long *param_2,ulong param_3)

{
  byte *pbVar1;
  uint *puVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  char cVar11;
  undefined1 uVar12;
  int iVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined *puVar19;
  ulong uVar20;
  long *plVar21;
  byte bVar22;
  undefined8 uVar23;
  long lVar24;
  uint *unaff_R13;
  bool bVar25;
  undefined8 uStack_538;
  long *plStack_530;
  long lStack_528;
  long *plStack_520;
  undefined *puStack_518;
  long *plStack_510;
  byte *pbStack_508;
  long *plStack_500;
  long *plStack_4f8;
  undefined8 uStack_4f0;
  long *plStack_4d8;
  long *plStack_4d0;
  long *plStack_4c8;
  long *plStack_4c0;
  byte *pbStack_4b8;
  byte *pbStack_4b0;
  undefined8 uStack_4a8;
  long *plStack_4a0;
  uint *puStack_498;
  long *plStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined1 uStack_468;
  long lStack_460;
  long *plStack_458;
  long *plStack_450;
  undefined8 uStack_448;
  uint *puStack_440;
  undefined *puStack_438;
  long *plStack_430;
  long *plStack_38;
  
  plVar16 = (long *)(param_3 & 0xffffffff);
  if (param_1 + 0x10 != param_2) {
    plVar14 = (long *)param_1[0x11];
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    if (plVar14 != (long *)0x0) {
      LOCK();
      plVar21 = plVar14 + 1;
      lVar15 = *plVar21;
      *plVar21 = *plVar21 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        func_0x0412c2d0(plVar14);
      }
    }
    param_1[0x12] = 0;
    lVar15 = *param_2;
    uVar4 = *(undefined4 *)((long)param_2 + 4);
    lVar17 = param_2[1];
    uVar5 = *(undefined4 *)((long)param_2 + 0xc);
    if (param_2[1] != 0) {
      LOCK();
      plVar14 = (long *)(param_2[1] + 8);
      *plVar14 = *plVar14 + 1;
      UNLOCK();
    }
    plVar14 = (long *)param_1[0x11];
    *(int *)(param_1 + 0x10) = (int)lVar15;
    *(undefined4 *)((long)param_1 + 0x84) = uVar4;
    *(int *)(param_1 + 0x11) = (int)lVar17;
    *(undefined4 *)((long)param_1 + 0x8c) = uVar5;
    if (plVar14 != (long *)0x0) {
      LOCK();
      plVar21 = plVar14 + 1;
      lVar15 = *plVar21;
      *plVar21 = *plVar21 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        func_0x0412c2d0(plVar14);
      }
    }
    param_1[0x12] = param_2[2];
  }
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
  if (plVar14 == (long *)0x0) goto LAB_06d156e7;
  do {
    func_0x06d05150(plVar14);
    plVar21 = _DAT_0f5a3078;
    if (_DAT_0f5a3078 != (long *)0x0) {
      lVar15 = *_DAT_0f5a3078;
      if (lVar15 != 0) {
        lVar17 = _DAT_0f5a3078[1];
        lVar24 = lVar15;
        _DAT_0f5a3078 = plVar14;
        if (lVar15 != lVar17) {
          do {
            if ((*(byte *)(lVar17 + -0x18) & 1) != 0) {
              func_0x0412a280(*(undefined8 *)(lVar17 + -8),
                              *(ulong *)(lVar17 + -0x18) & 0xfffffffffffffffe);
            }
            lVar17 = lVar17 + -0x18;
          } while (lVar17 != lVar15);
          lVar24 = *plVar21;
        }
        plVar21[1] = lVar15;
        func_0x0412a280(lVar24,plVar21[2] - lVar24);
        plVar14 = _DAT_0f5a3078;
      }
      _DAT_0f5a3078 = plVar14;
      func_0x0412a280(plVar21,0x18);
      plVar14 = _DAT_0f5a3078;
    }
    _DAT_0f5a3078 = plVar14;
    (**(code **)(*param_1 + 0x18))(param_1);
    (**(code **)(*param_1 + 0xa8))(param_1);
    lVar15 = (**(code **)(*param_1 + 0x70))(param_1);
    bVar22 = (byte)plVar16 ^ 1;
    plVar16 = (long *)(ulong)bVar22;
    *(byte *)(lVar15 + 0x4ed) = bVar22;
    lVar15 = (**(code **)(*param_1 + 0x70))(param_1);
    if (*(char *)(lVar15 + 0x4ed) == '\0') {
      lVar15 = (**(code **)(*param_1 + 0x70))(param_1);
      bVar25 = (*(byte *)(param_1 + 0x15) & 1) != 0;
      puStack_518 = (undefined *)((long)param_1 + 0xa9);
      if (bVar25) {
        puStack_518 = (undefined *)param_1[0x17];
      }
      plStack_510 = (long *)(ulong)(*(byte *)(param_1 + 0x15) >> 1);
      if (bVar25) {
        plStack_510 = (long *)param_1[0x16];
      }
      pbStack_508 = &UNK_012a73a1;
      plStack_500 = (long *)0x9;
      func_0x049151c0(&puStack_438,&puStack_518,2,0x2f);
      plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x340);
      if (plVar14 == (long *)0x0) {
        FUN_0eec74c0(0x340,0);
        if ((long *)0xfffffffffffffff7 < plStack_38) goto LAB_06d15749;
LAB_06d14614:
        plVar16 = plStack_38;
        if (plStack_38 < (long *)0x17) {
          uStack_538 = (long *)CONCAT71(uStack_538._1_7_,(char)plStack_38 * '\x02');
          lVar17 = (long)&uStack_538 + 1;
          if (plStack_38 != (long *)0x0) goto LAB_06d14677;
        }
        else {
          uVar20 = 0x1a;
          if (((ulong)plStack_38 | 7) != 0x17) {
            uVar20 = ((ulong)plStack_38 | 7) + 1;
          }
          lVar17 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar20);
          if (lVar17 == 0) {
            FUN_0eec74c0(uVar20,0);
          }
          uStack_538 = (long *)(uVar20 | 1);
          plStack_530 = plVar16;
          lStack_528 = lVar17;
LAB_06d14677:
          func_0x0eee2f00(lVar17,&puStack_438,plVar16);
        }
        *(undefined1 *)(lVar17 + (long)plVar16) = 0;
        func_0x06d09ea0(plVar14,&uStack_538);
        *plVar14 = (long)&UNK_0f088ea8;
        *(undefined1 *)((long)plVar14 + 0x244) = 0;
        plVar14[0x49] = 0;
        plVar14[0x4a] = 0;
        plVar14[0x4b] = 0;
        plVar14[0x4c] = 0;
        plVar14[0x4d] = 0;
        if ((_DAT_0f7285b0 == (char *)0x0) &&
           (cVar11 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_012713a8),
           cVar11 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        if ((*_DAT_0f7285b0 == '\0') &&
           (cVar11 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_012713a8),
           cVar11 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        uVar23 = _DAT_0f7285c0;
        plVar16 = _DAT_0f7280e0;
        if (_DAT_0f7280e0 == (long *)0x0) {
          plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x68);
          if (plVar16 == (long *)0x0) {
            FUN_0eec74c0(0x68,0);
          }
          func_0x0ee29760(plVar16,&UNK_01302b9e,0xb,0x3c);
          if (_DAT_0f7280e0 != (long *)0x0) {
            lVar17 = *_DAT_0f7280e0;
            _DAT_0f7280e0 = plVar16;
            (**(code **)(lVar17 + 8))();
            plVar16 = _DAT_0f7280e0;
          }
        }
        _DAT_0f7280e0 = plVar16;
        plStack_490 = plVar14 + 0x4e;
        func_0x06d01390(plStack_490,uVar23,_DAT_0f7280e0,&UNK_014168c9);
        lVar17 = func_0x0417cc60();
        plVar14[0x4f] = lVar17;
        *(undefined1 *)(plVar14 + 0x50) = 8;
        *(undefined4 *)((long)plVar14 + 0x281) = 0x656e6f4e;
        *(undefined1 *)((long)plVar14 + 0x285) = 0;
        *(undefined2 *)(plVar14 + 0x58) = 0;
        *(undefined2 *)(plVar14 + 0x5b) = 0;
        unaff_R13 = (uint *)(plVar14 + 0x5e);
        *(undefined2 *)(plVar14 + 0x5e) = 0;
        pbStack_4b0 = (byte *)(plVar14 + 0x61);
        *(undefined2 *)(plVar14 + 0x61) = 0;
        pbStack_4b8 = (byte *)(plVar14 + 100);
        *(undefined2 *)(plVar14 + 100) = 0;
        plVar14[0x53] = 0;
        plVar14[0x54] = 0;
        plVar14[0x55] = 0;
        plVar14[0x56] = 0;
        *(undefined4 *)(plVar14 + 0x57) = 0;
        puStack_498 = unaff_R13;
        plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,1);
        if (plVar16 == (long *)0x0) goto LAB_06d1574e;
      }
      else {
        if (plStack_38 < (long *)0xfffffffffffffff8) goto LAB_06d14614;
LAB_06d15749:
        plVar16 = plStack_38;
        func_0x04882e30();
LAB_06d1574e:
        FUN_0eec74c0(1,0);
      }
      plVar14[0x67] = (long)plVar16;
      *(undefined1 *)(plVar14 + 0x50) = 0x16;
      *(undefined8 *)((long)plVar14 + 0x281) = 0x506b636f72646542;
      *(undefined4 *)(plVar14 + 0x51) = 0x646f7250;
      *(undefined1 *)((long)plVar14 + 0x28c) = 0;
      if ((DAT_0f776b18 == '\0') && (iVar13 = func_0x04108328(&DAT_0f776b18), iVar13 != 0)) {
        func_0x0edf5500(&DAT_0f776968);
        func_0x0eee2f40(&SUB_0edf6010,&DAT_0f776968,0xf53dab8);
        func_0x0410844d(&DAT_0f776b18);
        unaff_R13 = puStack_498;
      }
      if (unaff_R13 != (uint *)&DAT_0f776968) {
        if ((*unaff_R13 & 1) == 0) {
          if ((_DAT_0f776968 & 1) == 0) {
            *(undefined8 *)(unaff_R13 + 4) = _DAT_0f776978;
            uVar9 = uRam000000000f776974;
            uVar8 = _DAT_0f776970;
            uVar7 = uRam000000000f77696c;
            *unaff_R13 = _DAT_0f776968;
            unaff_R13[1] = uVar7;
            unaff_R13[2] = uVar8;
            unaff_R13[3] = uVar9;
          }
          else {
            FUN_04885070(unaff_R13,_DAT_0f776978,CONCAT44(uRam000000000f776974,_DAT_0f776970));
          }
        }
        else {
          bVar25 = (_DAT_0f776968 & 1) != 0;
          uVar23 = 0xf776969;
          if (bVar25) {
            uVar23 = _DAT_0f776978;
          }
          uVar20 = (ulong)((_DAT_0f776968 & 0xff) >> 1);
          if (bVar25) {
            uVar20 = CONCAT44(uRam000000000f776974,_DAT_0f776970);
          }
          func_0x04885120(unaff_R13,uVar23,uVar20);
        }
      }
      func_0x0412d550(0xf5522b8);
      LOCK();
      _DAT_0f552388 = _DAT_0f552388 + 1;
      UNLOCK();
      FUN_0412d610(0xf5522b8);
      plVar16 = _DAT_0f5523a0;
      pbVar1 = _DAT_0f552398;
      if ((_DAT_0f552398 == (byte *)0x0) || (*_DAT_0f552398 != 1)) {
        puStack_518 = (undefined *)0x0;
        plStack_510 = (long *)((ulong)plStack_510._1_7_ << 8);
        func_0x0eee02f0(0xf5522b8);
      }
      else {
        bVar22 = 1;
        if (_DAT_0f5523a0 != (long *)0x0) {
          LOCK();
          _DAT_0f5523a0[1] = _DAT_0f5523a0[1] + 1;
          UNLOCK();
          bVar22 = *pbVar1;
        }
        plVar21 = _DAT_0f5523a8;
        puStack_518 = (undefined *)0xf5522b8;
        plStack_510 = (long *)CONCAT71(plStack_510._1_7_,1);
        pbStack_508 = pbVar1;
        plStack_500 = plVar16;
        plStack_4f8 = _DAT_0f5523a8;
        if ((bVar22 & 1) != 0) {
          (**(code **)(*_DAT_0f5523a8 + 0x500))(&uStack_488,_DAT_0f5523a8);
          if ((*pbStack_4b0 & 1) != 0) {
            func_0x0412a280(plVar14[99],plVar14[0x61] & 0xfffffffffffffffe);
          }
          *(undefined8 *)(pbStack_4b0 + 0x10) = uStack_478;
          *(undefined4 *)pbStack_4b0 = (undefined4)uStack_488;
          *(undefined4 *)(pbStack_4b0 + 4) = uStack_488._4_4_;
          *(undefined4 *)(pbStack_4b0 + 8) = (undefined4)uStack_480;
          *(undefined4 *)(pbStack_4b0 + 0xc) = uStack_480._4_4_;
          if ((*pbVar1 == 0) &&
             (cVar11 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_014ad871)
             , cVar11 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          lVar17 = (**(code **)(*plVar21 + 0x7a0))(plVar21);
          plVar21 = (long *)(plVar21[4] + 0x218);
          if (lVar17 != 0) {
            plVar21 = (long *)(lVar17 + 8);
          }
          lVar17 = *plVar21;
          if ((lVar17 != 0) && (pbVar1 = (byte *)(lVar17 + 0x20), pbStack_4b8 != pbVar1)) {
            bVar22 = *pbVar1;
            if ((*pbStack_4b8 & 1) == 0) {
              if ((bVar22 & 1) == 0) {
                *(undefined8 *)(pbStack_4b8 + 0x10) = *(undefined8 *)(lVar17 + 0x30);
                uVar23 = *(undefined8 *)(lVar17 + 0x28);
                *(undefined8 *)pbStack_4b8 = *(undefined8 *)pbVar1;
                *(undefined8 *)(pbStack_4b8 + 8) = uVar23;
              }
              else {
                FUN_04885070(pbStack_4b8,*(undefined8 *)(lVar17 + 0x30),
                             *(undefined8 *)(lVar17 + 0x28));
              }
            }
            else {
              bVar25 = (bVar22 & 1) != 0;
              lVar24 = lVar17 + 0x21;
              if (bVar25) {
                lVar24 = *(long *)(lVar17 + 0x30);
              }
              uVar20 = (ulong)(bVar22 >> 1);
              if (bVar25) {
                uVar20 = *(ulong *)(lVar17 + 0x28);
              }
              func_0x04885120(pbStack_4b8,lVar24,uVar20);
            }
          }
        }
        pbStack_508 = (undefined *)0x0;
        plStack_500 = (long *)0x0;
        if (plVar16 != (long *)0x0) {
          LOCK();
          plVar21 = plVar16 + 1;
          lVar17 = *plVar21;
          *plVar21 = *plVar21 + -1;
          UNLOCK();
          if (lVar17 == 0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
            func_0x0412c2d0(plVar16);
          }
          plVar16 = plStack_500;
          plStack_4f8 = (long *)0x0;
          if (plStack_500 != (long *)0x0) {
            LOCK();
            plVar21 = plStack_500 + 1;
            lVar17 = *plVar21;
            *plVar21 = *plVar21 + -1;
            UNLOCK();
            if (lVar17 == 0) {
              (**(code **)(*plStack_500 + 0x10))(plStack_500);
              func_0x0412c2d0(plVar16);
            }
          }
        }
      }
      if ((char)plStack_510 == '\x01') {
        func_0x0eee02f0(puStack_518);
      }
      uStack_488 = (long *)&UNK_013fcc3f;
      uStack_480 = (long *)0xf;
      uStack_478 = _DAT_0f778528;
      uStack_470 = 0xffffffff00000001;
      uStack_468 = 0;
      lStack_460 = 0;
      lStack_460 = func_0x0417cc60();
      lStack_460 = lStack_460 + 10000000000;
      plVar16 = (long *)*plStack_490;
      uVar12 = (**(code **)(*plVar16 + 0x48))(plVar16);
      uStack_4a8 = 0;
      plStack_4a0 = (long *)0x0;
      uStack_448 = 0;
      puStack_440 = (uint *)0x0;
      puStack_518 = &UNK_0f08a420;
      plStack_510 = plVar14;
      func_0x048a4fd0(&plStack_4c8,plVar16,&uStack_488,&uStack_4a8,uVar12,&puStack_518);
      if (puStack_518 != (undefined *)0x0) {
        (**(code **)(puStack_518 + 8))(&puStack_518);
      }
      plVar21 = plStack_4a0;
      if (plStack_4a0 != (long *)0x0) {
        LOCK();
        plVar3 = plStack_4a0 + 1;
        lVar17 = *plVar3;
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (lVar17 == 0) {
          (**(code **)(*plStack_4a0 + 0x10))(plStack_4a0);
          func_0x0412c2d0(plVar21);
        }
      }
      plStack_458 = plStack_4c8;
      plStack_450 = plStack_4c0;
      if (plStack_4c0 != (long *)0x0) {
        LOCK();
        plStack_4c0[1] = plStack_4c0[1] + 1;
        UNLOCK();
      }
      iVar13 = (int)plVar16[0x10];
      if (iVar13 != 1) {
        if (iVar13 == 3) {
          *(undefined4 *)(plStack_4c8 + 6) = 0;
        }
        else if (iVar13 == 2) {
          (**(code **)(*plStack_4c8 + 0x10))();
          goto LAB_06d14cb9;
        }
        plStack_4d8 = plStack_4c8;
        plStack_4d0 = plStack_4c0;
        if (plStack_4c0 != (long *)0x0) {
          LOCK();
          plStack_4c0[1] = plStack_4c0[1] + 1;
          UNLOCK();
        }
        (**(code **)(*plVar16 + 0x28))(plVar16,&plStack_4d8,0);
        plVar21 = plStack_4d0;
        if (plStack_4d0 != (long *)0x0) {
          LOCK();
          plVar3 = plStack_4d0 + 1;
          lVar17 = *plVar3;
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (lVar17 == 0) {
            (**(code **)(*plStack_4d0 + 0x10))(plStack_4d0);
            func_0x0412c2d0(plVar21);
          }
        }
      }
LAB_06d14cb9:
      plVar21 = plStack_450;
      if (plStack_450 != (long *)0x0) {
        LOCK();
        plVar3 = plStack_450 + 1;
        lVar17 = *plVar3;
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (lVar17 == 0) {
          (**(code **)(*plStack_450 + 0x10))(plStack_450);
          func_0x0412c2d0(plVar21);
        }
      }
      unaff_R13 = puStack_440;
      plVar21 = plStack_4c0;
      if (puStack_440 != (uint *)0x0) {
        LOCK();
        puVar2 = puStack_440 + 2;
        lVar17 = *(long *)puVar2;
        *(long *)puVar2 = *(long *)puVar2 + -1;
        UNLOCK();
        if (lVar17 == 0) {
          (**(code **)(*(long *)puStack_440 + 0x10))(puStack_440);
          func_0x0412c2d0(unaff_R13);
        }
      }
      if (plVar21 != (long *)0x0) {
        LOCK();
        plVar3 = plVar21 + 1;
        lVar17 = *plVar3;
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (lVar17 == 0) {
          (**(code **)(*plVar21 + 0x10))(plVar21);
          func_0x0412c2d0(plVar21);
        }
      }
      if (((ulong)uStack_538 & 1) != 0) {
        func_0x0412a280(lStack_528,(ulong)uStack_538 & 0xfffffffffffffffe);
      }
      puVar19 = (undefined *)(lVar15 + 0x458);
      plStack_510 = (long *)CONCAT71(plStack_510._1_7_,1);
      plStack_520 = plVar14;
      puStack_518 = puVar19;
      func_0x0412d450(puVar19);
      func_0x06d10c70(lVar15 + 0x18,&plStack_520);
      func_0x0412d520(puVar19);
      plVar14 = plStack_520;
      plStack_520 = (long *)0x0;
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 8))();
      }
    }
    func_0x0412d550(0xf550650);
    LOCK();
    _DAT_0f550720 = _DAT_0f550720 + 1;
    UNLOCK();
    FUN_0412d610(0xf550650);
    plVar14 = _DAT_0f550738;
    pbVar1 = _DAT_0f550730;
    if ((_DAT_0f550730 == (byte *)0x0) || (*_DAT_0f550730 != 1)) {
      func_0x0eee02f0(0xf550650);
LAB_06d14e31:
      func_0x06d15c60(&puStack_438,param_1);
      if (param_1[0x2a] != 0) {
        func_0x06d81b00();
        param_1[0x2a] = 0;
      }
      param_1[0x2a] = (long)puStack_438;
    }
    else if (_DAT_0f550738 == (long *)0x0) {
      func_0x0eee02f0(0xf550650);
    }
    else {
      LOCK();
      _DAT_0f550738[1] = _DAT_0f550738[1] + 1;
      UNLOCK();
      bVar22 = *pbVar1;
      plVar16 = (long *)(ulong)bVar22;
      LOCK();
      plVar21 = plVar14 + 1;
      lVar15 = *plVar21;
      *plVar21 = *plVar21 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        func_0x0412c2d0(plVar14);
        func_0x0eee02f0(0xf550650);
      }
      else {
        func_0x0eee02f0(0xf550650);
      }
      if (bVar22 == 0) goto LAB_06d14e31;
    }
    puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (puVar18 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x30,0);
    }
    *puVar18 = 0;
    puVar18[1] = 0;
    puVar18[4] = 0;
    puVar18[5] = 0;
    puVar18[2] = 0;
    puVar18[3] = 0;
    *puVar18 = &UNK_0f534768;
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar14 == (long *)0x0) {
      FUN_0eec74c0(0x20,0);
    }
    plVar14[1] = 0;
    plVar14[2] = 0;
    *plVar14 = (long)&UNK_0ef44a60;
    *(undefined1 *)(plVar14 + 3) = 1;
    puVar18[1] = plVar14 + 3;
    puVar18[2] = plVar14;
    *puVar18 = &UNK_0f13e218;
    puVar18[3] = 0;
    puVar18[4] = 0;
    puVar18[5] = 0;
    plVar21 = (long *)param_1[0x2b];
    param_1[0x2b] = (long)puVar18;
    if (plVar21 != (long *)0x0) {
      (**(code **)(*plVar21 + 8))();
    }
    func_0x0412d550(0xf5a3710);
    LOCK();
    _DAT_0f5a37e0 = _DAT_0f5a37e0 + 1;
    UNLOCK();
    FUN_0412d610(0xf5a3710);
    plVar21 = _DAT_0f5a37f8;
    pbVar1 = _DAT_0f5a37f0;
    if ((_DAT_0f5a37f0 == (byte *)0x0) || (*_DAT_0f5a37f0 != 1)) {
      func_0x0eee02f0(0xf5a3710);
      goto LAB_06d14f9f;
    }
    if (_DAT_0f5a37f8 == (long *)0x0) {
      func_0x0eee02f0(0xf5a3710);
LAB_06d14fe7:
      func_0x0412d550(0xf5a3610);
      LOCK();
      _DAT_0f5a36e0 = _DAT_0f5a36e0 + 1;
      UNLOCK();
      FUN_0412d610(0xf5a3610);
      plVar21 = _DAT_0f5a36f8;
      pbVar1 = _DAT_0f5a36f0;
      if ((_DAT_0f5a36f0 == (byte *)0x0) || (*_DAT_0f5a36f0 != 1)) {
        func_0x0eee02f0(0xf5a3610);
      }
      else {
        if (_DAT_0f5a36f8 == (long *)0x0) {
          func_0x0eee02f0(0xf5a3610);
          goto LAB_06d15277;
        }
        LOCK();
        _DAT_0f5a36f8[1] = _DAT_0f5a36f8[1] + 1;
        UNLOCK();
        bVar22 = *pbVar1;
        plVar16 = (long *)(ulong)bVar22;
        LOCK();
        plVar3 = plVar21 + 1;
        lVar15 = *plVar3;
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (lVar15 == 0) {
          (**(code **)(*plVar21 + 0x10))(plVar21);
          func_0x0412c2d0(plVar21);
          func_0x0eee02f0(0xf5a3610);
        }
        else {
          func_0x0eee02f0(0xf5a3610);
        }
        if (bVar22 != 0) goto LAB_06d15277;
      }
      puVar19 = (undefined *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd8);
      if (puVar19 == (undefined *)0x0) {
        FUN_0eec74c0(0xd8,0);
      }
      func_0x0cb2aa40(puVar19);
      plVar21 = (long *)param_1[0x2d];
      param_1[0x2d] = (long)puVar19;
      if (plVar21 == (long *)0x0) break;
      (**(code **)(*plVar21 + 8))();
      puVar19 = (undefined *)param_1[0x2d];
      if (puVar19 != (undefined *)0x0) break;
    }
    else {
      LOCK();
      _DAT_0f5a37f8[1] = _DAT_0f5a37f8[1] + 1;
      UNLOCK();
      bVar22 = *pbVar1;
      plVar16 = (long *)(ulong)bVar22;
      LOCK();
      plVar3 = plVar21 + 1;
      lVar15 = *plVar3;
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
        func_0x0412c2d0(plVar21);
        func_0x0eee02f0(0xf5a3710);
        if (bVar22 == 0) goto LAB_06d14f9f;
        goto LAB_06d14fe7;
      }
      func_0x0eee02f0(0xf5a3710);
      if (bVar22 != 0) goto LAB_06d14fe7;
LAB_06d14f9f:
      if (param_1[0x2b] != 0) {
        func_0x06d15e60(&puStack_438);
        if (param_1[0x2c] != 0) {
          func_0x06d81c80();
          param_1[0x2c] = 0;
        }
        param_1[0x2c] = (long)puStack_438;
        goto LAB_06d14fe7;
      }
    }
    func_0x04890760();
LAB_06d156e7:
    FUN_0eec74c0(0x18,0);
  } while( true );
  cVar11 = func_0x0412d4f0(0xf5a3610);
  if (cVar11 == '\0') {
LAB_06d150ea:
    puStack_438 = (undefined *)0xf5a3610;
    plStack_430 = (long *)CONCAT71(plStack_430._1_7_,1);
    func_0x0412d450(0xf5a3610);
    if (_DAT_0f5a36e0 != 0) {
      uVar20 = _DAT_0f5a36e0;
      do {
        LOCK();
        bVar25 = uVar20 == _DAT_0f5a36e0;
        uVar10 = uVar20 | 0x8000000000000000;
        if (!bVar25) {
          uVar20 = _DAT_0f5a36e0;
          uVar10 = _DAT_0f5a36e0;
        }
        _DAT_0f5a36e0 = uVar10;
        UNLOCK();
        if (bVar25) {
          func_0x0eee0430(0xf5a36a0,&puStack_438);
          uVar20 = _DAT_0f5a36e0;
        }
      } while (uVar20 != 0);
    }
  }
  else if (_DAT_0f5a36e0 != 0) {
    func_0x0412d520(0xf5a3610);
    goto LAB_06d150ea;
  }
  plVar16 = _DAT_0f5a36f8;
  _DAT_0f5a36f0 = (byte *)0x0;
  _DAT_0f5a36f8 = (long *)0x0;
  if (plVar16 != (long *)0x0) {
    LOCK();
    plVar14 = plVar16 + 1;
    lVar15 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      func_0x0412c2d0(plVar16);
    }
  }
  _DAT_0f5a3700 = (undefined *)0x0;
  _DAT_0f5a36f0 = *(byte **)(puVar19 + 8);
  plVar16 = *(long **)(puVar19 + 0x10);
  if (plVar16 != (long *)0x0) {
    LOCK();
    plVar16[1] = plVar16[1] + 1;
    UNLOCK();
  }
  plVar14 = _DAT_0f5a36f8;
  if (_DAT_0f5a36f8 != (long *)0x0) {
    LOCK();
    plVar21 = _DAT_0f5a36f8 + 1;
    lVar15 = *plVar21;
    _DAT_0f5a36f8 = plVar16;
    *plVar21 = *plVar21 + -1;
    UNLOCK();
    plVar16 = _DAT_0f5a36f8;
    if (lVar15 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      func_0x0412c2d0(plVar14);
      plVar16 = _DAT_0f5a36f8;
    }
  }
  _DAT_0f5a36f8 = plVar16;
  if (((_DAT_0f5a36f0 != (byte *)0x0) && (_DAT_0f5a3700 = puVar19, *_DAT_0f5a36f0 == 0)) &&
     (cVar11 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_011d728c),
     cVar11 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  puVar19 = _DAT_0f5a3700;
  puStack_518 = _DAT_0f5a3700;
  func_0x0412d520(0xf5a3610);
  if (param_1[0x2e] != 0) {
    func_0x06d810a0();
    param_1[0x2e] = 0;
  }
  param_1[0x2e] = (long)puVar19;
LAB_06d15277:
  func_0x0412d550(0xf5a3410);
  LOCK();
  _DAT_0f5a34e0 = _DAT_0f5a34e0 + 1;
  UNLOCK();
  FUN_0412d610(0xf5a3410);
  plVar16 = _DAT_0f5a34f8;
  pcVar6 = _DAT_0f5a34f0;
  if ((_DAT_0f5a34f0 == (char *)0x0) || (*_DAT_0f5a34f0 != '\x01')) {
    func_0x0eee02f0(0xf5a3410);
LAB_06d152f5:
    func_0x06d16060(&puStack_438,param_1 + 0xb);
    if (param_1[0x2f] != 0) {
      func_0x06d81220();
      param_1[0x2f] = 0;
    }
    param_1[0x2f] = (long)puStack_438;
  }
  else if (_DAT_0f5a34f8 == (long *)0x0) {
    func_0x0eee02f0(0xf5a3410);
  }
  else {
    LOCK();
    _DAT_0f5a34f8[1] = _DAT_0f5a34f8[1] + 1;
    UNLOCK();
    cVar11 = *pcVar6;
    LOCK();
    plVar14 = plVar16 + 1;
    lVar15 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      func_0x0412c2d0(plVar16);
      func_0x0eee02f0(0xf5a3410);
    }
    else {
      func_0x0eee02f0(0xf5a3410);
    }
    if (cVar11 == '\0') goto LAB_06d152f5;
  }
  puStack_518 = &UNK_0125b374;
  plStack_510 = (long *)0xc;
  pbStack_508 = (byte *)_DAT_0f778528;
  plStack_500 = (long *)0xffffffff00000001;
  plStack_4f8 = (long *)((ulong)plStack_4f8 & 0xffffffffffffff00);
  uStack_4f0 = 0;
  plVar16 = (long *)param_1[0x31];
  uVar12 = (**(code **)(*plVar16 + 0x48))(plVar16);
  plStack_4d8 = (long *)0x0;
  plStack_4d0 = (long *)0x0;
  uStack_4a8 = 0;
  plStack_4a0 = (long *)0x0;
  puStack_438 = &UNK_0f08a388;
  plStack_430 = param_1;
  func_0x048a4fd0(&uStack_538,plVar16,&puStack_518,&plStack_4d8,uVar12,&puStack_438);
  if (puStack_438 != (undefined *)0x0) {
    (**(code **)(puStack_438 + 8))(&puStack_438);
  }
  plVar14 = plStack_4d0;
  if (plStack_4d0 != (long *)0x0) {
    LOCK();
    plVar21 = plStack_4d0 + 1;
    lVar15 = *plVar21;
    *plVar21 = *plVar21 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_4d0 + 0x10))(plStack_4d0);
      func_0x0412c2d0(plVar14);
    }
  }
  plStack_4c8 = uStack_538;
  plStack_4c0 = plStack_530;
  if (plStack_530 != (long *)0x0) {
    LOCK();
    plStack_530[1] = plStack_530[1] + 1;
    UNLOCK();
  }
  iVar13 = (int)plVar16[0x10];
  if (iVar13 != 1) {
    if (iVar13 == 3) {
      *(undefined4 *)(uStack_538 + 6) = 0;
    }
    else if (iVar13 == 2) {
      (**(code **)(*uStack_538 + 0x10))();
      goto LAB_06d154ab;
    }
    uStack_488 = uStack_538;
    uStack_480 = plStack_530;
    if (plStack_530 != (long *)0x0) {
      LOCK();
      plStack_530[1] = plStack_530[1] + 1;
      UNLOCK();
    }
    (**(code **)(*plVar16 + 0x28))(plVar16,&uStack_488,0);
    plVar16 = uStack_480;
    if (uStack_480 != (long *)0x0) {
      LOCK();
      plVar14 = uStack_480 + 1;
      lVar15 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*uStack_480 + 0x10))(uStack_480);
        func_0x0412c2d0(plVar16);
      }
    }
  }
LAB_06d154ab:
  plVar16 = plStack_4c0;
  if (plStack_4c0 != (long *)0x0) {
    LOCK();
    plVar14 = plStack_4c0 + 1;
    lVar15 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_4c0 + 0x10))(plStack_4c0);
      func_0x0412c2d0(plVar16);
    }
  }
  plVar14 = plStack_4a0;
  plVar16 = plStack_530;
  if (plStack_4a0 != (long *)0x0) {
    LOCK();
    plVar21 = plStack_4a0 + 1;
    lVar15 = *plVar21;
    *plVar21 = *plVar21 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_4a0 + 0x10))(plStack_4a0);
      func_0x0412c2d0(plVar14);
    }
  }
  if (plVar16 != (long *)0x0) {
    LOCK();
    plVar14 = plVar16 + 1;
    lVar15 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      func_0x0412c2d0(plVar16);
    }
  }
  return;
}


