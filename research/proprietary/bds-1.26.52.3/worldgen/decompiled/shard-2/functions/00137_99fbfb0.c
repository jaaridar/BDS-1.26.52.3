/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x9afbfb0 (ELF vaddr 0x99fbfb0)
 * Label: string:mojang-biomes.json
 * Body:  [[09afbfb0, 09afc1d6] [09afc1e0, 09afc31b] [09afc320, 09afc38a] [09afc390, 09afc5b7] [09afc5c0, 09afc870] [09afc880, 09afc8b8] [09afc8c0, 09afc8f2] [09afc900, 09afc9e5] [09afc9f0, 09afca7b] [09afca80, 09afcdf8] [09afce00, 09afcf7a] [09afcf80, 09afcfe1] [09afcff0, 09afd1db] [09afd1e0, 09afd384] [09afd390, 09afd3c3] [09afd3d0, 09afd448] [09afd450, 09afd468] [09afd470, 09afd849] [09afd850, 09afd9f9] [09afda00, 09afda43] [09afda50, 09afdaf2] [09afdb00, 09afdcbc] [09afdcc0, 09afdddc] [09afdde0, 09afde94] [09afdea0, 09afe1b7] [09afe1c0, 09afe20b] [09afe210, 09afe27d] [09afe280, 09afe2ad] [09afe2b0, 09afe3b2] [09afe3c0, 09afe3fa] [09afe400, 09afe836] [09afe840, 09afe983] [09afe990, 09afeace] [09afead0, 09afeafc] [09afeb00, 09afecf0] [09afed00, 09afed61] [09afed70, 09aff248] [09aff250, 09aff279] [09aff280, 09aff30d] [09aff310, 09aff661] [09aff670, 09aff81a] [09aff820, 09aff96a] [09aff970, 09affa9a] [09affaa0, 09affd7d] [09b003f5, 09b0040e] [09b00619, 09b0062a] [09b006f2, 09b007ae]]
 * Ghidra: FUN_09afbfb0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_09afbfb0(byte *param_1,undefined1 *param_2,ulong param_3,long param_4,undefined8 *param_5,
                 long param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  char cVar13;
  uint uVar14;
  int iVar15;
  undefined8 uVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  int *piVar22;
  byte *pbVar23;
  byte *pbVar24;
  ulong uVar25;
  byte *pbVar26;
  char *pcVar27;
  byte *pbVar28;
  undefined1 auVar29 [8];
  long lVar30;
  ulong uVar31;
  long *plVar32;
  undefined1 *puVar33;
  undefined8 *puVar34;
  ulong uVar35;
  long lVar36;
  ulong uVar37;
  long *unaff_R15;
  undefined1 auVar38 [8];
  bool bVar39;
  float fVar40;
  byte bVar41;
  byte bVar42;
  byte bVar44;
  byte bVar46;
  byte bVar48;
  byte bVar50;
  byte bVar52;
  byte bVar54;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  undefined1 in_XMM2 [16];
  byte bVar63;
  undefined1 auVar55 [12];
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  undefined1 auStack_578 [16];
  long *plStack_568;
  char cStack_560;
  undefined1 auStack_558 [8];
  undefined8 uStack_550;
  undefined1 auStack_548 [16];
  undefined8 uStack_538;
  undefined1 auStack_528 [8];
  ulong uStack_520;
  long *plStack_518;
  undefined8 uStack_508;
  ulong uStack_500;
  byte *pbStack_4f8;
  byte *pbStack_4e8;
  byte *pbStack_4e0;
  byte *pbStack_4d8;
  long alStack_4d0 [2];
  ulong uStack_4c0;
  long alStack_4b8 [2];
  long *plStack_4a8;
  long alStack_4a0 [2];
  byte *pbStack_490;
  undefined1 uStack_481;
  undefined1 *puStack_480;
  byte *pbStack_478;
  long lStack_470;
  undefined1 *puStack_468;
  ulong uStack_460;
  undefined8 *puStack_458;
  long lStack_450;
  undefined8 *puStack_448;
  undefined1 (*pauStack_440) [16];
  undefined1 auStack_438 [8];
  undefined8 uStack_430;
  undefined1 auStack_428 [16];
  ulong uStack_418;
  undefined1 *puStack_410;
  byte bStack_408;
  undefined7 uStack_407;
  undefined8 uStack_3f8;
  byte bStack_3f0;
  undefined7 uStack_3ef;
  undefined8 uStack_3e0;
  byte bStack_3d0;
  undefined7 uStack_3cf;
  undefined8 uStack_3c0;
  ulong uStack_38;
  char cVar43;
  char cVar45;
  char cVar47;
  char cVar49;
  char cVar51;
  char cVar53;
  
  auVar38 = (undefined1  [8])auStack_578;
  pbStack_4e0 = param_1;
  uStack_4c0 = param_3;
  puStack_480 = param_2;
  lStack_470 = param_6;
  puStack_458 = param_5;
  lStack_450 = param_4;
  func_0x04863060(alStack_4b8,0);
  func_0x09afbcc0(alStack_4b8,&UNK_01447599);
  func_0x04863060(alStack_4d0,6);
  auStack_438 = (undefined1  [8])alStack_4d0;
  func_0x0cc3eef0(0xf6ff9e0,&UNK_09b1f480,auStack_438);
  func_0x09af6740(alStack_4d0,0);
  uVar16 = func_0x04864680(alStack_4b8,&UNK_0122c909);
  func_0x04863740(uVar16,alStack_4d0);
  func_0x04863060(alStack_4a0,6);
  puVar20 = _DAT_0f6fadd0;
  puVar21 = puStack_448;
  while (puStack_448 = puVar20, puStack_448 != (undefined8 *)0x0) {
    pbVar28 = (byte *)puStack_448[2];
    func_0x04863060(auStack_528,0);
    func_0x048631d0(auStack_438,(undefined1 (*) [16])(pbVar28 + 0x20));
    uVar16 = func_0x04864680(auStack_528,&UNK_01410416);
    func_0x04863790(uVar16,auStack_438);
    func_0x04863610(auStack_438);
    func_0x04863060(&uStack_508,6);
    if (*(long *)(pbVar28 + 0x10) != 0) {
      pbStack_4e8 = pbVar28 + 0x21;
      pbVar26 = (byte *)0x0;
      pbStack_478 = pbVar28;
      pauStack_440 = (undefined1 (*) [16])(pbVar28 + 0x20);
      do {
        pbVar28 = pbStack_478;
        auStack_428 = (undefined1  [16])0x0;
        uStack_430 = auStack_428;
        auStack_438 = (undefined1  [8])&UNK_0f47e0b0;
        if (((*pauStack_440)[0] & 1) == 0) {
          plStack_568 = *(long **)pauStack_440[1];
          auStack_578 = *pauStack_440;
        }
        else {
          func_0x0412e5e0(auStack_578,*(undefined8 *)(pbStack_478 + 0x30),
                          *(undefined8 *)(pbStack_478 + 0x28));
        }
        (**(code **)(*(long *)pbVar28 + 0x10))(&plStack_4a8,pbVar28,(ulong)pbVar26 & 0xffffffff);
        plVar18 = plStack_4a8;
        pbStack_490 = pbVar26;
        if (plStack_4a8 != (long *)0x0) {
          auStack_548._0_8_ = plStack_568;
          _auStack_558 = auStack_578;
          auStack_578 = (undefined1  [16])0x0;
          plStack_568 = (long *)0x0;
          puStack_468 = auStack_558;
          lVar17 = func_0x0d6c9580(&uStack_430,puStack_468,&UNK_01563a4f,&puStack_468,&uStack_481);
          func_0x0d6bb5a0(lVar17 + 0x38,plVar18);
          if ((auStack_558[0] & 1) != 0) {
            thunk_FUN_0ee326a0(auStack_548._0_8_,(ulong)auStack_558 & 0xfffffffffffffffe);
          }
          plVar18 = plStack_4a8;
          plStack_4a8 = (long *)0x0;
          if (plVar18 != (long *)0x0) {
            (**(code **)(*plVar18 + 8))();
          }
        }
        if ((auStack_578[0] & 1) != 0) {
          thunk_FUN_0ee326a0(plStack_568,auStack_578._0_8_ & 0xfffffffffffffffe);
        }
        pbStack_4d8 = *(byte **)(pbVar28 + 0x30);
        uVar35 = *(ulong *)(pbVar28 + 0x28);
        if ((pbVar28[0x20] & 1) == 0) {
          pbStack_4d8 = pbStack_4e8;
          uVar35 = (ulong)(pbVar28[0x20] >> 1);
        }
        if ((long *)auStack_428._0_8_ != (long *)0x0) {
          plVar18 = (long *)auStack_428;
          plVar19 = (long *)auStack_428._0_8_;
          do {
            unaff_R15 = plVar19;
            plVar32 = plVar18;
            bVar39 = (*(byte *)(unaff_R15 + 4) & 1) == 0;
            pcVar27 = (char *)unaff_R15[6];
            if (bVar39) {
              pcVar27 = (char *)((long)unaff_R15 + 0x21);
            }
            uVar37 = (ulong)(*(byte *)(unaff_R15 + 4) >> 1);
            if (!bVar39) {
              uVar37 = unaff_R15[5];
            }
            uVar31 = uVar35;
            if (uVar37 < uVar35) {
              uVar31 = uVar37;
            }
            uVar14 = func_0x0eee2ff0(pbStack_4d8,pcVar27,uVar31);
            if (uVar14 == 0) {
              uVar14 = 0;
              if (uVar35 != uVar37) {
                uVar14 = -(uint)(uVar35 < uVar37) | 1;
              }
            }
            plVar18 = unaff_R15;
            if (0 < (int)uVar14) {
              plVar18 = plVar32;
            }
            plVar19 = (long *)unaff_R15[0 < (int)uVar14];
          } while ((long *)unaff_R15[0 < (int)uVar14] != (long *)0x0);
          if (plVar18 != (long *)auStack_428) {
            plVar18 = unaff_R15;
            if (0 < (int)uVar14) {
              plVar18 = plVar32;
            }
            pcVar27 = (char *)((long)unaff_R15 + 0x21);
            if (0 < (int)uVar14) {
              pcVar27 = (char *)((long)plVar32 + 0x21);
            }
            bVar39 = (*(byte *)(plVar18 + 4) & 1) != 0;
            if (bVar39) {
              pcVar27 = (char *)plVar18[6];
            }
            uVar37 = (ulong)(*(byte *)(plVar18 + 4) >> 1);
            if (bVar39) {
              uVar37 = plVar18[5];
            }
            uVar31 = uVar35;
            if (uVar37 < uVar35) {
              uVar31 = uVar37;
            }
            iVar15 = func_0x0eee2ff0(pbStack_4d8,pcVar27,uVar31);
            if (iVar15 == 0) {
              if (uVar37 <= uVar35) goto LAB_09afc3f8;
            }
            else if (-1 < iVar15) {
LAB_09afc3f8:
              plVar18 = unaff_R15;
              if (0 < (int)uVar14) {
                plVar18 = plVar32;
              }
              if ((ulong)*(uint *)(plVar18 + 0xc) == 0xffffffff) {
                FUN_04931450();
                goto LAB_09affd05;
              }
              if (0 < (int)uVar14) {
                unaff_R15 = plVar32;
              }
              auStack_558 = (undefined1  [8])auStack_578;
              plVar18 = (long *)(**(code **)(&UNK_0f47e800 + (ulong)*(uint *)(plVar18 + 0xc) * 8))
                                          (auStack_558,unaff_R15 + 7);
              if (plVar18 == (long *)0x0) goto LAB_09afc150;
              func_0x04863060(auStack_558,7);
              cVar13 = (**(code **)(*plVar18 + 0x30))(plVar18);
              if (cVar13 == '\x01') {
                func_0x04863290(auStack_578,(char)plVar18[1] != '\0');
                uVar16 = func_0x04864680(auStack_558,&UNK_0138e8dd);
                func_0x04863790(uVar16,auStack_578);
                func_0x04863610(auStack_578);
                func_0x04863120(auStack_578,&UNK_0123950a);
                uVar16 = func_0x04864680(auStack_528,&UNK_0142a5c6);
LAB_09afc57c:
                func_0x04863790(uVar16,auStack_578);
                func_0x04863610(auStack_578);
              }
              else {
                if (cVar13 == '\x03') {
                  func_0x048630e0(auStack_578,(int)plVar18[1]);
                  uVar16 = func_0x04864680(auStack_558,&UNK_0138e8dd);
                  func_0x04863790(uVar16,auStack_578);
                  func_0x04863610(auStack_578);
                  func_0x04863120(auStack_578,&UNK_0133d197);
                  uVar16 = func_0x04864680(auStack_528,&UNK_0142a5c6);
                  goto LAB_09afc57c;
                }
                if (cVar13 == '\b') {
                  func_0x048631d0(auStack_578,plVar18 + 1);
                  uVar16 = func_0x04864680(auStack_558,&UNK_0138e8dd);
                  func_0x04863790(uVar16,auStack_578);
                  func_0x04863610(auStack_578);
                  func_0x04863120(auStack_578,&UNK_0128912c);
                  uVar16 = func_0x04864680(auStack_528,&UNK_0142a5c6);
                  goto LAB_09afc57c;
                }
              }
              cVar13 = func_0x04864220(auStack_558);
              if (cVar13 == '\0') {
                func_0x04864a50(&uStack_508,auStack_558);
              }
              func_0x04863610(auStack_558);
            }
          }
        }
LAB_09afc150:
        auStack_438 = (undefined1  [8])&UNK_0f47e0b0;
        func_0x0d6c9500(&uStack_430,auStack_428._0_8_);
        pbVar26 = pbStack_490 + 1;
      } while (pbVar26 < *(byte **)(pbStack_478 + 0x10));
    }
    unaff_R15 = (long *)&UNK_0f47e0b0;
    uVar16 = func_0x04864680(auStack_528,&UNK_011d18ec);
    func_0x04863740(uVar16,&uStack_508);
    func_0x04864a50(alStack_4a0);
    func_0x04863610(&uStack_508);
    func_0x04863610(auStack_528);
    puVar21 = puStack_448;
    puVar20 = (undefined8 *)*puStack_448;
  }
  puStack_448 = puVar21;
  func_0x09af6740(alStack_4a0,0);
  uVar16 = func_0x04864680(alStack_4b8,&UNK_0148299a);
  func_0x04863740(uVar16,alStack_4a0);
  func_0x04863610(alStack_4a0);
  func_0x04863610(alStack_4d0);
  pbStack_4e8 = pbStack_4e0 + 1;
  bVar39 = (*pbStack_4e0 & 1) == 0;
  auStack_558 = (undefined1  [8])*(byte **)(pbStack_4e0 + 0x10);
  if (bVar39) {
    auStack_558 = (undefined1  [8])pbStack_4e8;
  }
  uStack_550 = (byte *)(ulong)(*pbStack_4e0 >> 1);
  if (!bVar39) {
    uStack_550 = (byte *)*(ulong *)(pbStack_4e0 + 8);
  }
  auStack_548._8_8_ = 0x12;
  auStack_548._0_8_ = &UNK_012e18b8;
  func_0x049151c0(auStack_438,auStack_558,2,0x2f);
  uVar35 = uStack_38;
  if (0xfffffffffffffff7 < uStack_38) goto LAB_09affd28;
  if (uStack_38 < 0x17) {
    auStack_578[0] = (char)uStack_38 * '\x02';
    plVar18 = (long *)(auStack_578 + 1);
    if (uStack_38 != 0) goto LAB_09afc742;
  }
  else {
    uVar37 = 0x1a;
    if ((uStack_38 | 7) != 0x17) {
      uVar37 = (uStack_38 | 7) + 1;
    }
    plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar37);
    if (plVar18 == (long *)0x0) {
      func_0x0eec74c0(uVar37,0);
    }
    auStack_578._8_8_ = uVar35;
    auStack_578._0_8_ = uVar37 | 1;
    plStack_568 = plVar18;
LAB_09afc742:
    func_0x0eee2f00(plVar18,auStack_438,uVar35);
  }
  *(char *)((long)plVar18 + uVar35) = '\0';
  func_0x09afaf30(alStack_4b8,auStack_578);
  if ((auStack_578[0] & 1) != 0) {
    thunk_FUN_0ee326a0(plStack_568,auStack_578._0_8_ & 0xfffffffffffffffe);
  }
  func_0x04863610(alStack_4b8);
  if (uStack_4c0 != 0) {
    LOCK();
    *(long *)(uStack_4c0 + 0x10) = *(long *)(uStack_4c0 + 0x10) + 1;
    UNLOCK();
    LOCK();
    *(long *)(uStack_4c0 + 0x10) = *(long *)(uStack_4c0 + 0x10) + 1;
    UNLOCK();
  }
  puStack_468 = puStack_480;
  uStack_460 = uStack_4c0;
  func_0x04863060(alStack_4b8,0);
  func_0x09afbcc0(alStack_4b8,&UNK_014ae949);
  func_0x04863060(auStack_528,6);
  func_0x0ca14670(auStack_578,&puStack_468);
  uStack_508 = puStack_480;
  uStack_500 = uStack_4c0;
  if (uStack_4c0 != 0) {
    LOCK();
    *(long *)(uStack_4c0 + 0x10) = *(long *)(uStack_4c0 + 0x10) + 1;
    UNLOCK();
  }
  func_0x0a757fc0(auStack_438,&uStack_508,0);
  if (uStack_500 != 0) {
    func_0x0412c2d0();
  }
  unaff_R15 = (long *)auStack_428._0_8_;
  if ((long *)auStack_428._0_8_ != (long *)0x0) {
    do {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uStack_550;
      _auStack_558 = auVar1 << 0x40;
      if ((*(byte *)(unaff_R15 + 5) & 1) == 0) {
        auVar12._8_8_ = 0;
        auVar12._0_8_ = unaff_R15[5];
        _auStack_558 = auVar12 << 0x40;
        auStack_548 = *(undefined1 (*) [16])(unaff_R15 + 6);
      }
      else {
        func_0x0412e5e0(&uStack_550,unaff_R15[7],unaff_R15[6]);
      }
      uStack_538 = 0;
      if (((byte)uStack_550 & 1) == 0) {
        if ((byte)uStack_550 >> 1 != 0) goto LAB_09afc90d;
LAB_09afc9f0:
        uVar35 = 0;
      }
      else {
        if (auStack_548._0_8_ == 0) goto LAB_09afc9f0;
LAB_09afc90d:
        pbVar28 = (byte *)((long)&uStack_550 + 1);
        if (((byte)uStack_550 & 1) != 0) {
          pbVar28 = (byte *)auStack_548._8_8_;
        }
        if ((pbVar28 == (byte *)0x0) || (*pbVar28 == 0)) goto LAB_09afc9f0;
        uVar37 = strlen(pbVar28);
        uVar35 = 0xcbf29ce484222325;
        if (uVar37 != 0) {
          if (7 < uVar37) {
            uVar31 = uVar37 & 0xfffffffffffffff8;
            do {
              uVar35 = (((((((uVar35 * 0x100000001b3 ^ (ulong)*pbVar28) * 0x100000001b3 ^
                            (ulong)pbVar28[1]) * 0x100000001b3 ^ (ulong)pbVar28[2]) * 0x100000001b3
                          ^ (ulong)pbVar28[3]) * 0x100000001b3 ^ (ulong)pbVar28[4]) * 0x100000001b3
                        ^ (ulong)pbVar28[5]) * 0x100000001b3 ^ (ulong)pbVar28[6]) * 0x100000001b3 ^
                       (ulong)pbVar28[7];
              pbVar28 = pbVar28 + 8;
              uVar31 = uVar31 - 8;
            } while (uVar31 != 0);
          }
          if ((uVar37 & 7) != 0) {
            uVar31 = 0;
            do {
              uVar35 = uVar35 * 0x100000001b3 ^ (ulong)pbVar28[uVar31];
              uVar31 = uVar31 + 1;
            } while (((uint)uVar37 & 7) != uVar31);
          }
        }
      }
      auStack_558 = (undefined1  [8])uVar35;
      func_0x0ca143d0(&plStack_4a8,&puStack_468,auStack_558);
      if (((byte)uStack_550 & 1) != 0) {
        thunk_FUN_0ee326a0(auStack_548._8_8_,(ulong)uStack_550 & 0xfffffffffffffffe);
      }
      plVar18 = plStack_4a8;
      if ((plStack_4a8 == (long *)0x0) || (lVar17 = *plStack_4a8, lVar17 == 0)) goto LAB_09affd05;
      if (*(char *)(lVar17 + 0x170) != '\x01') {
        if ((*(char *)(lVar17 + 0x170) == '\x02') &&
           (plVar19 = *(long **)(lVar17 + 0x138), plVar19 != (long *)0x0)) {
          cVar13 = (**(code **)(*plVar19 + 0x178))(plVar19,auStack_578);
          if (cVar13 != '\0') {
LAB_09afcac0:
            func_0x04863060(alStack_4d0,0);
            func_0x048631d0(auStack_558,unaff_R15 + 5);
            uVar16 = func_0x04864680(alStack_4d0,&UNK_01410416);
            func_0x04863790(uVar16,auStack_558);
            func_0x04863610(auStack_558);
            plVar18 = plStack_4a8;
            if ((plStack_4a8 == (long *)0x0) || ((long *)*plStack_4a8 == (long *)0x0))
            goto LAB_09affd05;
            uVar16 = (**(code **)(*(long *)*plStack_4a8 + 0x28))();
            func_0x048631d0(auStack_558,uVar16);
            uVar16 = func_0x04864680(alStack_4d0,&UNK_0149ef1a);
            func_0x04863790(uVar16,auStack_558);
            func_0x04863610(auStack_558);
            if (*plVar18 == 0) goto LAB_09affd05;
            func_0x048630e0(auStack_558,(int)*(short *)(*plVar18 + 0x8a));
            uVar16 = func_0x04864680(alStack_4d0,&UNK_0127c2a6);
            func_0x04863790(uVar16,auStack_558);
            func_0x04863610(auStack_558);
            if (*plVar18 == 0) goto LAB_09affd05;
            func_0x0c49e2d0(auStack_558);
            func_0x048631d0(alStack_4a0,auStack_558);
            uVar16 = func_0x04864680(alStack_4d0,&UNK_0133021c);
            func_0x04863790(uVar16,alStack_4a0);
            func_0x04863610(alStack_4a0);
            if ((auStack_558[0] & 1) != 0) {
              thunk_FUN_0ee326a0(auStack_548._0_8_,(ulong)auStack_558 & 0xfffffffffffffffe);
            }
            if (*plVar18 == 0) goto LAB_09affd05;
            func_0x048631d0(auStack_558,*plVar18 + 0xf0);
            uVar16 = func_0x04864680(alStack_4d0,&UNK_01295393);
            func_0x04863790(uVar16,auStack_558);
            func_0x04863610(auStack_558);
            func_0x04864bf0(auStack_528,alStack_4d0);
            func_0x04863610(alStack_4d0);
          }
        }
        else if (((*(char *)(lVar17 + 0x130) == '\0') && (cStack_560 == '\0')) &&
                ((((*(byte *)(lVar17 + 0x11e) & 1) == 0 || (auStack_578[7] != '\0')) ||
                 (cVar13 = func_0x04fa7a10(auStack_578,lVar17 + 0x118), cVar13 == '\0'))))
        goto LAB_09afcac0;
      }
      LOCK();
      *(int *)((long)plVar18 + 0xc) = *(int *)((long)plVar18 + 0xc) + -1;
      UNLOCK();
      if (((*(int *)((long)plVar18 + 0xc) < 1) && (*plVar18 == 0)) && (plStack_4a8 != (long *)0x0))
      {
        thunk_FUN_0ee326a0(plStack_4a8,0x10);
      }
      unaff_R15 = (long *)*unaff_R15;
    } while (unaff_R15 != (long *)0x0);
  }
  func_0x09af6740(auStack_528,0);
  uVar16 = func_0x04864680(alStack_4b8,&UNK_0122c909);
  func_0x04863740(uVar16,auStack_528);
  puVar21 = (undefined8 *)auStack_428._0_8_;
  while (puVar21 != (undefined8 *)0x0) {
    puVar20 = (undefined8 *)*puVar21;
    if ((*(byte *)(puVar21 + 5) & 1) != 0) {
      thunk_FUN_0ee326a0(puVar21[7],puVar21[5] & 0xfffffffffffffffe);
    }
    if ((*(byte *)(puVar21 + 2) & 1) != 0) {
      thunk_FUN_0ee326a0(puVar21[4],puVar21[2] & 0xfffffffffffffffe);
    }
    thunk_FUN_0ee326a0(puVar21,0x40);
    puVar21 = puVar20;
  }
  auVar29 = auStack_438;
  uVar35 = (ulong)uStack_430;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uStack_430;
  _auStack_438 = auVar2 << 0x40;
  if (auVar29 != (undefined1  [8])0x0) {
    thunk_FUN_0ee326a0(auVar29,uVar35 << 3);
  }
  if (((ulong)plStack_568 >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)plStack_568 & 0xff00ffffffffffff) - 8)
    ;
  }
  plStack_568 = (long *)0x0;
  if ((auStack_578._8_8_ & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(auStack_578._8_8_ & 0xff00ffffffffffff) - 8);
  }
  func_0x04863610(auStack_528);
  if (uStack_4c0 != 0) {
    func_0x0412c2d0();
  }
  bVar39 = (*pbStack_4e0 & 1) == 0;
  auStack_558 = (undefined1  [8])*(byte **)(pbStack_4e0 + 0x10);
  if (bVar39) {
    auStack_558 = (undefined1  [8])pbStack_4e8;
  }
  uStack_550 = (byte *)(ulong)(*pbStack_4e0 >> 1);
  if (!bVar39) {
    uStack_550 = (byte *)*(ulong *)(pbStack_4e0 + 8);
  }
  auStack_548._8_8_ = 0x11;
  auStack_548._0_8_ = &UNK_0146939e;
  func_0x049151c0(auStack_438,auStack_558,2,0x2f);
  uVar35 = uStack_38;
  if (uStack_38 < 0xfffffffffffffff8) {
    if (uStack_38 < 0x17) {
      auStack_578[0] = (char)uStack_38 * '\x02';
      plVar18 = (long *)(auStack_578 + 1);
      if (uStack_38 != 0) goto LAB_09afce97;
    }
    else {
      uVar37 = 0x1a;
      if ((uStack_38 | 7) != 0x17) {
        uVar37 = (uStack_38 | 7) + 1;
      }
      plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar37);
      if (plVar18 == (long *)0x0) {
        func_0x0eec74c0(uVar37,0);
      }
      unaff_R15 = (long *)(uVar37 | 1);
      auStack_578._8_8_ = uVar35;
      auStack_578._0_8_ = unaff_R15;
      plStack_568 = plVar18;
LAB_09afce97:
      func_0x0eee2f00(plVar18,auStack_438,uVar35);
    }
    *(char *)((long)plVar18 + uVar35) = '\0';
    func_0x09afaf30(alStack_4b8,auStack_578);
    if ((auStack_578[0] & 1) != 0) {
      thunk_FUN_0ee326a0(plStack_568,auStack_578._0_8_ & 0xfffffffffffffffe);
    }
    func_0x04863610(alStack_4b8);
    if (uStack_4c0 != 0) {
      func_0x0412c2d0();
    }
    func_0x04863060(alStack_4d0,0);
    func_0x09afbcc0(alStack_4d0,&UNK_0127a194);
    func_0x04863060(alStack_4a0,6);
    plVar18 = *(long **)(lStack_450 + 0x10);
    auStack_548 = (undefined1  [16])0x0;
    _auStack_558 = (undefined1  [16])0x0;
    uStack_538 = CONCAT44(uStack_538._4_4_,0x3f800000);
    if (plVar18 != (long *)0x0 && *(long *)(lStack_450 + 0x18) != 0) {
LAB_09afcf8d:
      plVar19 = (long *)(auStack_528 + 1);
      puVar33 = auStack_428 + 9;
      func_0x0b04cfb0(auStack_438,plVar18 + 2);
      uVar35 = (ulong)(auStack_428[8] >> 1);
      if ((auStack_428[8] & 1) != 0) {
        uVar35 = uStack_418;
        puVar33 = puStack_410;
      }
      if (uVar35 < 0xfffffffffffffff8) {
        if (uVar35 < 0x17) {
          auStack_528[0] = (char)uVar35 * '\x02';
          unaff_R15 = plVar19;
          if (uVar35 != 0) goto LAB_09afd040;
        }
        else {
          uVar37 = (uVar35 | 7) + 1;
          if ((uVar35 | 7) == 0x17) {
            uVar37 = 0x1a;
          }
          plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar37);
          if (plVar19 == (long *)0x0) {
            func_0x0eec74c0(uVar37,0);
          }
          auStack_528 = (undefined1  [8])(uVar37 | 1);
          uStack_520 = uVar35;
          plStack_518 = plVar19;
LAB_09afd040:
          func_0x0eee2f00(plVar19,puVar33,uVar35);
          unaff_R15 = plVar19;
        }
        plVar19 = (long *)(auStack_528 + 1);
        *(char *)((long)unaff_R15 + uVar35) = '\0';
        uVar35 = (ulong)auStack_528 >> 1 & 0x7f;
        if (((ulong)auStack_528 & 1) != 0) {
          uVar35 = uStack_520;
          plVar19 = plStack_518;
        }
        if (uVar35 != 0) {
          plVar32 = plVar19;
          if (7 < uVar35) {
            if (uVar35 < 0x20) {
              uVar37 = 0;
            }
            else {
              uVar37 = uVar35 & 0xffffffffffffffe0;
              uVar31 = 0;
              do {
                auVar1 = *(undefined1 (*) [16])((long)plVar19 + uVar31);
                pcVar27 = (char *)((long)plVar19 + uVar31 + 0x10);
                bVar41 = auVar1[0] + DAT_014e86b0;
                bVar42 = auVar1[1] + UNK_014e86b1;
                bVar44 = auVar1[2] + UNK_014e86b2;
                bVar46 = auVar1[3] + UNK_014e86b3;
                bVar48 = auVar1[4] + UNK_014e86b4;
                bVar50 = auVar1[5] + UNK_014e86b5;
                bVar52 = auVar1[6] + UNK_014e86b6;
                bVar54 = auVar1[7] + UNK_014e86b7;
                bVar56 = auVar1[8] + UNK_014e86b8;
                bVar57 = auVar1[9] + UNK_014e86b9;
                bVar58 = auVar1[10] + UNK_014e86ba;
                bVar59 = auVar1[0xb] + UNK_014e86bb;
                bVar60 = auVar1[0xc] + UNK_014e86bc;
                bVar61 = auVar1[0xd] + UNK_014e86bd;
                bVar62 = auVar1[0xe] + UNK_014e86be;
                bVar63 = auVar1[0xf] + UNK_014e86bf;
                bVar64 = *pcVar27 + DAT_014e86b0;
                bVar65 = pcVar27[1] + UNK_014e86b1;
                bVar66 = pcVar27[2] + UNK_014e86b2;
                bVar67 = pcVar27[3] + UNK_014e86b3;
                bVar68 = pcVar27[4] + UNK_014e86b4;
                bVar69 = pcVar27[5] + UNK_014e86b5;
                bVar70 = pcVar27[6] + UNK_014e86b6;
                bVar71 = pcVar27[7] + UNK_014e86b7;
                bVar72 = pcVar27[8] + UNK_014e86b8;
                bVar73 = pcVar27[9] + UNK_014e86b9;
                bVar74 = pcVar27[10] + UNK_014e86ba;
                bVar75 = pcVar27[0xb] + UNK_014e86bb;
                bVar76 = pcVar27[0xc] + UNK_014e86bc;
                bVar77 = pcVar27[0xd] + UNK_014e86bd;
                bVar78 = pcVar27[0xe] + UNK_014e86be;
                bVar79 = pcVar27[0xf] + UNK_014e86bf;
                in_XMM2[0] = (-((byte)((DAT_014e4170 < bVar64) * DAT_014e4170 |
                                      (DAT_014e4170 >= bVar64) * bVar64) == bVar64) & DAT_014ead50)
                             + *pcVar27;
                in_XMM2[1] = (-((byte)((UNK_014e4171 < bVar65) * UNK_014e4171 |
                                      (UNK_014e4171 >= bVar65) * bVar65) == bVar65) & UNK_014ead51)
                             + pcVar27[1];
                in_XMM2[2] = (-((byte)((UNK_014e4172 < bVar66) * UNK_014e4172 |
                                      (UNK_014e4172 >= bVar66) * bVar66) == bVar66) & UNK_014ead52)
                             + pcVar27[2];
                in_XMM2[3] = (-((byte)((UNK_014e4173 < bVar67) * UNK_014e4173 |
                                      (UNK_014e4173 >= bVar67) * bVar67) == bVar67) & UNK_014ead53)
                             + pcVar27[3];
                in_XMM2[4] = (-((byte)((UNK_014e4174 < bVar68) * UNK_014e4174 |
                                      (UNK_014e4174 >= bVar68) * bVar68) == bVar68) & UNK_014ead54)
                             + pcVar27[4];
                in_XMM2[5] = (-((byte)((UNK_014e4175 < bVar69) * UNK_014e4175 |
                                      (UNK_014e4175 >= bVar69) * bVar69) == bVar69) & UNK_014ead55)
                             + pcVar27[5];
                in_XMM2[6] = (-((byte)((UNK_014e4176 < bVar70) * UNK_014e4176 |
                                      (UNK_014e4176 >= bVar70) * bVar70) == bVar70) & UNK_014ead56)
                             + pcVar27[6];
                in_XMM2[7] = (-((byte)((UNK_014e4177 < bVar71) * UNK_014e4177 |
                                      (UNK_014e4177 >= bVar71) * bVar71) == bVar71) & UNK_014ead57)
                             + pcVar27[7];
                in_XMM2[8] = (-((byte)((UNK_014e4178 < bVar72) * UNK_014e4178 |
                                      (UNK_014e4178 >= bVar72) * bVar72) == bVar72) & UNK_014ead58)
                             + pcVar27[8];
                in_XMM2[9] = (-((byte)((UNK_014e4179 < bVar73) * UNK_014e4179 |
                                      (UNK_014e4179 >= bVar73) * bVar73) == bVar73) & UNK_014ead59)
                             + pcVar27[9];
                in_XMM2[10] = (-((byte)((UNK_014e417a < bVar74) * UNK_014e417a |
                                       (UNK_014e417a >= bVar74) * bVar74) == bVar74) & UNK_014ead5a)
                              + pcVar27[10];
                in_XMM2[0xb] = (-((byte)((UNK_014e417b < bVar75) * UNK_014e417b |
                                        (UNK_014e417b >= bVar75) * bVar75) == bVar75) & UNK_014ead5b
                               ) + pcVar27[0xb];
                in_XMM2[0xc] = (-((byte)((UNK_014e417c < bVar76) * UNK_014e417c |
                                        (UNK_014e417c >= bVar76) * bVar76) == bVar76) & UNK_014ead5c
                               ) + pcVar27[0xc];
                in_XMM2[0xd] = (-((byte)((UNK_014e417d < bVar77) * UNK_014e417d |
                                        (UNK_014e417d >= bVar77) * bVar77) == bVar77) & UNK_014ead5d
                               ) + pcVar27[0xd];
                in_XMM2[0xe] = (-((byte)((UNK_014e417e < bVar78) * UNK_014e417e |
                                        (UNK_014e417e >= bVar78) * bVar78) == bVar78) & UNK_014ead5e
                               ) + pcVar27[0xe];
                in_XMM2[0xf] = (-((byte)((UNK_014e417f < bVar79) * UNK_014e417f |
                                        (UNK_014e417f >= bVar79) * bVar79) == bVar79) & UNK_014ead5f
                               ) + pcVar27[0xf];
                pcVar27 = (char *)((long)plVar19 + uVar31);
                *pcVar27 = (-((byte)((DAT_014e4170 < bVar41) * DAT_014e4170 |
                                    (DAT_014e4170 >= bVar41) * bVar41) == bVar41) & DAT_014ead50) +
                           auVar1[0];
                pcVar27[1] = (-((byte)((UNK_014e4171 < bVar42) * UNK_014e4171 |
                                      (UNK_014e4171 >= bVar42) * bVar42) == bVar42) & UNK_014ead51)
                             + auVar1[1];
                pcVar27[2] = (-((byte)((UNK_014e4172 < bVar44) * UNK_014e4172 |
                                      (UNK_014e4172 >= bVar44) * bVar44) == bVar44) & UNK_014ead52)
                             + auVar1[2];
                pcVar27[3] = (-((byte)((UNK_014e4173 < bVar46) * UNK_014e4173 |
                                      (UNK_014e4173 >= bVar46) * bVar46) == bVar46) & UNK_014ead53)
                             + auVar1[3];
                pcVar27[4] = (-((byte)((UNK_014e4174 < bVar48) * UNK_014e4174 |
                                      (UNK_014e4174 >= bVar48) * bVar48) == bVar48) & UNK_014ead54)
                             + auVar1[4];
                pcVar27[5] = (-((byte)((UNK_014e4175 < bVar50) * UNK_014e4175 |
                                      (UNK_014e4175 >= bVar50) * bVar50) == bVar50) & UNK_014ead55)
                             + auVar1[5];
                pcVar27[6] = (-((byte)((UNK_014e4176 < bVar52) * UNK_014e4176 |
                                      (UNK_014e4176 >= bVar52) * bVar52) == bVar52) & UNK_014ead56)
                             + auVar1[6];
                pcVar27[7] = (-((byte)((UNK_014e4177 < bVar54) * UNK_014e4177 |
                                      (UNK_014e4177 >= bVar54) * bVar54) == bVar54) & UNK_014ead57)
                             + auVar1[7];
                pcVar27[8] = (-((byte)((UNK_014e4178 < bVar56) * UNK_014e4178 |
                                      (UNK_014e4178 >= bVar56) * bVar56) == bVar56) & UNK_014ead58)
                             + auVar1[8];
                pcVar27[9] = (-((byte)((UNK_014e4179 < bVar57) * UNK_014e4179 |
                                      (UNK_014e4179 >= bVar57) * bVar57) == bVar57) & UNK_014ead59)
                             + auVar1[9];
                pcVar27[10] = (-((byte)((UNK_014e417a < bVar58) * UNK_014e417a |
                                       (UNK_014e417a >= bVar58) * bVar58) == bVar58) & UNK_014ead5a)
                              + auVar1[10];
                pcVar27[0xb] = (-((byte)((UNK_014e417b < bVar59) * UNK_014e417b |
                                        (UNK_014e417b >= bVar59) * bVar59) == bVar59) & UNK_014ead5b
                               ) + auVar1[0xb];
                pcVar27[0xc] = (-((byte)((UNK_014e417c < bVar60) * UNK_014e417c |
                                        (UNK_014e417c >= bVar60) * bVar60) == bVar60) & UNK_014ead5c
                               ) + auVar1[0xc];
                pcVar27[0xd] = (-((byte)((UNK_014e417d < bVar61) * UNK_014e417d |
                                        (UNK_014e417d >= bVar61) * bVar61) == bVar61) & UNK_014ead5d
                               ) + auVar1[0xd];
                pcVar27[0xe] = (-((byte)((UNK_014e417e < bVar62) * UNK_014e417e |
                                        (UNK_014e417e >= bVar62) * bVar62) == bVar62) & UNK_014ead5e
                               ) + auVar1[0xe];
                pcVar27[0xf] = (-((byte)((UNK_014e417f < bVar63) * UNK_014e417f |
                                        (UNK_014e417f >= bVar63) * bVar63) == bVar63) & UNK_014ead5f
                               ) + auVar1[0xf];
                *(undefined1 (*) [16])((long)plVar19 + uVar31 + 0x10) = in_XMM2;
                uVar31 = uVar31 + 0x20;
              } while (uVar37 != uVar31);
              if (uVar35 == uVar37) goto LAB_09afd1bd;
              if ((uVar35 & 0x18) == 0) {
                plVar32 = (long *)(uVar37 + (long)plVar19);
                goto LAB_09afd190;
              }
            }
            uVar31 = uVar35 & 0xfffffffffffffff8;
            plVar32 = (long *)((long)plVar19 + uVar31);
            do {
              uVar16 = *(undefined8 *)((long)plVar19 + uVar37);
              bVar41 = (char)uVar16 + DAT_014e9110;
              cVar43 = (char)((ulong)uVar16 >> 8);
              bVar42 = cVar43 + UNK_014e9111;
              cVar45 = (char)((ulong)uVar16 >> 0x10);
              bVar44 = cVar45 + UNK_014e9112;
              cVar47 = (char)((ulong)uVar16 >> 0x18);
              bVar46 = cVar47 + UNK_014e9113;
              cVar49 = (char)((ulong)uVar16 >> 0x20);
              bVar48 = cVar49 + UNK_014e9114;
              cVar51 = (char)((ulong)uVar16 >> 0x28);
              bVar50 = cVar51 + UNK_014e9115;
              cVar53 = (char)((ulong)uVar16 >> 0x30);
              cVar13 = (char)((ulong)uVar16 >> 0x38);
              bVar52 = cVar53 + UNK_014e9116;
              bVar54 = cVar13 + UNK_014e9117;
              in_XMM2[8] = ~-((byte)((UNK_014e9118 < UNK_014e8cb8) * UNK_014e8cb8 |
                                    (UNK_014e9118 >= UNK_014e8cb8) * UNK_014e9118) == UNK_014e9118)
                           & UNK_014ea368;
              in_XMM2[9] = ~-((byte)((UNK_014e9119 < UNK_014e8cb9) * UNK_014e8cb9 |
                                    (UNK_014e9119 >= UNK_014e8cb9) * UNK_014e9119) == UNK_014e9119)
                           & UNK_014ea369;
              in_XMM2[10] = ~-((byte)((UNK_014e911a < UNK_014e8cba) * UNK_014e8cba |
                                     (UNK_014e911a >= UNK_014e8cba) * UNK_014e911a) == UNK_014e911a)
                            & UNK_014ea36a;
              in_XMM2[0xb] = ~-((byte)((UNK_014e911b < UNK_014e8cbb) * UNK_014e8cbb |
                                      (UNK_014e911b >= UNK_014e8cbb) * UNK_014e911b) == UNK_014e911b
                               ) & UNK_014ea36b;
              in_XMM2[0xc] = ~-((byte)((UNK_014e911c < UNK_014e8cbc) * UNK_014e8cbc |
                                      (UNK_014e911c >= UNK_014e8cbc) * UNK_014e911c) == UNK_014e911c
                               ) & UNK_014ea36c;
              in_XMM2[0xd] = ~-((byte)((UNK_014e911d < UNK_014e8cbd) * UNK_014e8cbd |
                                      (UNK_014e911d >= UNK_014e8cbd) * UNK_014e911d) == UNK_014e911d
                               ) & UNK_014ea36d;
              in_XMM2[0xe] = ~-((byte)((UNK_014e911e < UNK_014e8cbe) * UNK_014e8cbe |
                                      (UNK_014e911e >= UNK_014e8cbe) * UNK_014e911e) == UNK_014e911e
                               ) & UNK_014ea36e;
              in_XMM2[0xf] = ~-((byte)((UNK_014e911f < UNK_014e8cbf) * UNK_014e8cbf |
                                      (UNK_014e911f >= UNK_014e8cbf) * UNK_014e911f) == UNK_014e911f
                               ) & UNK_014ea36f;
              in_XMM2._0_8_ =
                   CONCAT17((~-((byte)((bVar54 < UNK_014e8cb7) * UNK_014e8cb7 |
                                      (bVar54 >= UNK_014e8cb7) * bVar54) == bVar54) & UNK_014ea367)
                            + cVar13,CONCAT16((~-((byte)((bVar52 < UNK_014e8cb6) * UNK_014e8cb6 |
                                                        (bVar52 >= UNK_014e8cb6) * bVar52) == bVar52
                                                 ) & UNK_014ea366) + cVar53,
                                              CONCAT15((~-((byte)((bVar50 < UNK_014e8cb5) *
                                                                  UNK_014e8cb5 |
                                                                 (bVar50 >= UNK_014e8cb5) * bVar50)
                                                          == bVar50) & UNK_014ea365) + cVar51,
                                                       CONCAT14((~-((byte)((bVar48 < UNK_014e8cb4) *
                                                                           UNK_014e8cb4 |
                                                                          (bVar48 >= UNK_014e8cb4) *
                                                                          bVar48) == bVar48) &
                                                                UNK_014ea364) + cVar49,
                                                                CONCAT13((~-((byte)((bVar46 < 
                                                  UNK_014e8cb3) * UNK_014e8cb3 |
                                                  (bVar46 >= UNK_014e8cb3) * bVar46) == bVar46) &
                                                  UNK_014ea363) + cVar47,
                                                  CONCAT12((~-((byte)((bVar44 < UNK_014e8cb2) *
                                                                      UNK_014e8cb2 |
                                                                     (bVar44 >= UNK_014e8cb2) *
                                                                     bVar44) == bVar44) &
                                                           UNK_014ea362) + cVar45,
                                                           CONCAT11((~-((byte)((bVar42 < 
                                                  UNK_014e8cb1) * UNK_014e8cb1 |
                                                  (bVar42 >= UNK_014e8cb1) * bVar42) == bVar42) &
                                                  UNK_014ea361) + cVar43,
                                                  (~-((byte)((bVar41 < DAT_014e8cb0) * DAT_014e8cb0
                                                            | (bVar41 >= DAT_014e8cb0) * bVar41) ==
                                                     bVar41) & DAT_014ea360) + (char)uVar16)))))));
              *(undefined8 *)((long)plVar19 + uVar37) = in_XMM2._0_8_;
              uVar37 = uVar37 + 8;
            } while (uVar31 != uVar37);
            if (uVar35 == uVar31) goto LAB_09afd1bd;
          }
LAB_09afd190:
          do {
            cVar13 = (char)*plVar32;
            cVar43 = cVar13 + ' ';
            if (0x19 < (byte)(cVar13 + 0xbfU)) {
              cVar43 = cVar13;
            }
            *(char *)plVar32 = cVar43;
            plVar32 = (long *)((long)plVar32 + 1);
          } while (plVar32 != (long *)((long)plVar19 + uVar35));
        }
LAB_09afd1bd:
        if ((auStack_438[0] & 1) != 0) {
          if (uStack_430 != (byte *)0x9) goto LAB_09afd800;
LAB_09afd1f1:
          plVar19 = (long *)(auStack_438 + 1);
          if ((auStack_438[0] & 1) != 0) {
            plVar19 = (long *)auStack_428._0_8_;
          }
          if ((char)plVar19[1] != DAT_013abf54 || *plVar19 != _DAT_013abf4c) goto LAB_09afd800;
          func_0x0edfe9a0(&uStack_508,auStack_528,0x5f);
          uVar35 = (ulong)uStack_508 >> 1 & 0x7f;
          pbVar28 = (byte *)((long)&uStack_508 + 1);
          if (((ulong)uStack_508 & 1) != 0) {
            uVar35 = uStack_500;
            pbVar28 = pbStack_4f8;
          }
          pbVar26 = (byte *)func_0x04883620(auStack_578,pbVar28,uVar35);
          pbVar28 = uStack_550;
          if (uStack_550 != (byte *)0x0) {
            uVar35 = (long)uStack_550 - ((ulong)uStack_550 >> 1 & 0x5555555555555555);
            uVar35 = (uVar35 >> 2 & 0x3333333333333333) + (uVar35 & 0x3333333333333333);
            uVar35 = ((uVar35 >> 4) + uVar35 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
            if (uVar35 >> 0x38 < 2) {
              pbVar23 = (byte *)((ulong)(uStack_550 + -1) & (ulong)pbVar26);
            }
            else {
              pbVar23 = pbVar26;
              if (uStack_550 <= pbVar26) {
                if (((ulong)pbVar26 | (ulong)uStack_550) >> 0x20 == 0) {
                  pbVar23 = (byte *)(((ulong)pbVar26 & 0xffffffff) %
                                    ((ulong)uStack_550 & 0xffffffff));
                }
                else {
                  pbVar23 = (byte *)((ulong)pbVar26 % (ulong)uStack_550);
                }
              }
            }
            plVar19 = *(long **)((long)auStack_558 + (long)pbVar23 * 8);
            pbStack_4d8 = pbVar23;
            if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
              bVar41 = (byte)uStack_508 & 1;
              unaff_R15 = (long *)((ulong)uStack_508 & 1);
              pbStack_490 = pbStack_4f8;
              uVar37 = uStack_500;
              if (((ulong)uStack_508 & 1) == 0) {
                pbStack_490 = (byte *)((long)&uStack_508 + 1);
                uVar37 = (ulong)((byte)uStack_508 >> 1);
              }
              if ((byte)(uVar35 >> 0x38) < 2) {
                pbVar24 = uStack_550 + -1;
                pbStack_478 = pbVar24;
                do {
                  if ((byte *)plVar19[1] == pbVar26) {
                    bVar42 = *(byte *)(plVar19 + 2);
                    if ((bVar42 & 1) == 0) {
                      uVar35 = (ulong)(bVar42 >> 1);
                    }
                    else {
                      uVar35 = plVar19[3];
                    }
                    if (uVar35 == uVar37) {
                      if ((bVar42 & 1) == 0) {
                        lVar17 = (long)plVar19 + 0x11;
                      }
                      else {
                        lVar17 = plVar19[4];
                      }
                      iVar15 = func_0x0eee3000(lVar17,pbStack_490,uVar37);
                      pbVar24 = pbStack_478;
                      pbVar23 = pbStack_4d8;
                      if (iVar15 == 0) goto LAB_09afd4a7;
                    }
                  }
                  else if ((byte *)((ulong)plVar19[1] & (ulong)pbVar24) != pbVar23) break;
                  plVar19 = (long *)*plVar19;
                } while (plVar19 != (long *)0x0);
              }
              else {
                do {
                  pbVar24 = (byte *)plVar19[1];
                  if (pbVar24 == pbVar26) {
                    bVar42 = *(byte *)(plVar19 + 2);
                    if ((bVar42 & 1) == 0) {
                      uVar35 = (ulong)(bVar42 >> 1);
                    }
                    else {
                      uVar35 = plVar19[3];
                    }
                    if (uVar35 == uVar37) {
                      if ((bVar42 & 1) == 0) {
                        lVar17 = (long)plVar19 + 0x11;
                      }
                      else {
                        lVar17 = plVar19[4];
                      }
                      iVar15 = func_0x0eee3000(lVar17,pbStack_490,uVar37);
                      pbVar23 = pbStack_4d8;
                      if (iVar15 == 0) goto LAB_09afd4a7;
                    }
                  }
                  else {
                    if (pbVar28 <= pbVar24) {
                      if (((ulong)pbVar24 | (ulong)pbVar28) >> 0x20 == 0) {
                        pbVar24 = (byte *)(((ulong)pbVar24 & 0xffffffff) %
                                          ((ulong)pbVar28 & 0xffffffff));
                      }
                      else {
                        pbVar24 = (byte *)((ulong)pbVar24 % (ulong)pbVar28);
                      }
                    }
                    if (pbVar24 != pbVar23) break;
                  }
                  plVar19 = (long *)*plVar19;
                } while (plVar19 != (long *)0x0);
              }
            }
          }
          puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
          if (puVar21 == (undefined8 *)0x0) {
            func_0x0eec74c0(0x40,0);
          }
          auVar55 = in_XMM2._4_12_;
          auStack_578._8_8_ = auStack_558;
          auStack_578._0_8_ = puVar21;
          plStack_568 = (long *)0x0;
          *puVar21 = 0;
          puVar21[1] = pbVar26;
          puVar21[4] = pbStack_4f8;
          puVar21[2] = uStack_508;
          puVar21[3] = uStack_500;
          uStack_508 = (undefined1 *)0x0;
          uStack_500 = 0;
          pbStack_4f8 = (byte *)0x0;
          if (((ulong)auStack_528 & 1) == 0) {
            puVar21[7] = plStack_518;
            puVar21[5] = auStack_528;
            puVar21[6] = uStack_520;
          }
          else {
            func_0x0412e5e0(puVar21 + 5,plStack_518,uStack_520);
            auVar55 = in_XMM2._4_12_;
          }
          plStack_568 = (long *)CONCAT71(plStack_568._1_7_,1);
          if ((long)pbVar28 < 0) {
            in_XMM2._0_4_ = (float)pbVar28;
            in_XMM2._4_12_ = auVar55;
            if (pbVar28 != (byte *)0x0) goto LAB_09afd5d5;
LAB_09afd5e6:
            uVar35 = 1;
            if ((byte *)0x2 < pbVar28) {
              uVar35 = (ulong)(((ulong)pbVar28 & (ulong)(pbVar28 + -1)) != 0);
            }
            uVar35 = (long)pbVar28 * 2 | uVar35;
            fVar40 = (float)func_0x0eee3ab0((float)(auStack_548._8_8_ + 1) / (float)uStack_538);
            uVar37 = (long)(fVar40 - _DAT_01198778) & (long)fVar40 >> 0x3f | (long)fVar40;
            if (uVar37 < uVar35) {
              uVar37 = uVar35;
            }
            uVar35 = 2;
            if ((uVar37 == 1) || (uVar35 = uVar37, (uVar37 & uVar37 - 1) == 0)) {
              bVar39 = uVar35 < uStack_550;
              uVar37 = (ulong)uStack_550;
              if (uVar35 <= uStack_550) goto LAB_09afd677;
LAB_09afd653:
              func_0x04883ab0(auStack_558,uVar35);
            }
            else {
              uVar35 = func_0x0412c3f0();
              bVar39 = uVar35 < uStack_550;
              uVar37 = (ulong)uStack_550;
              if (uStack_550 < uVar35) goto LAB_09afd653;
LAB_09afd677:
              if (bVar39) {
                fVar40 = (float)func_0x0eee3ab0((float)(ulong)auStack_548._8_8_ / (float)uStack_538)
                ;
                uVar31 = (long)(fVar40 - _DAT_01198778) & (long)fVar40 >> 0x3f | (long)fVar40;
                if ((uVar37 < 3) ||
                   (uVar25 = uVar37 - (uVar37 >> 1 & 0x5555555555555555),
                   uVar25 = (uVar25 >> 2 & 0x3333333333333333) + (uVar25 & 0x3333333333333333),
                   1 < (byte)(((uVar25 >> 4) + uVar25 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                             0x38))) {
                  uVar31 = func_0x0412c3f0(uVar31);
                }
                else if (1 < uVar31) {
                  lVar17 = 0x3f;
                  if (uVar31 - 1 != 0) {
                    for (; uVar31 - 1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                    }
                  }
                  uVar31 = 1L << (-((byte)lVar17 ^ 0x3f) & 0x3f);
                }
                if (uVar35 <= uVar31) {
                  uVar35 = uVar31;
                }
                if (uVar35 < uVar37) goto LAB_09afd653;
              }
            }
            pbVar28 = uStack_550;
            if (((ulong)uStack_550 & (ulong)(uStack_550 + -1)) == 0) {
              pbVar23 = (byte *)((ulong)pbVar26 & (ulong)(uStack_550 + -1));
            }
            else {
              pbVar23 = pbVar26;
              if (uStack_550 <= pbVar26) {
                if (((ulong)pbVar26 | (ulong)uStack_550) >> 0x20 == 0) {
                  pbVar23 = (byte *)(((ulong)pbVar26 & 0xffffffff) %
                                    ((ulong)uStack_550 & 0xffffffff));
                }
                else {
                  pbVar23 = (byte *)((ulong)pbVar26 % (ulong)uStack_550);
                }
              }
            }
          }
          else {
            in_XMM2._0_4_ = (float)(long)pbVar28;
            in_XMM2._4_12_ = auVar55;
            if (pbVar28 == (byte *)0x0) goto LAB_09afd5e6;
LAB_09afd5d5:
            in_XMM2._0_4_ = in_XMM2._0_4_ * (float)uStack_538;
            pbVar23 = pbStack_4d8;
            if (in_XMM2._0_4_ < (float)(auStack_548._8_8_ + 1)) goto LAB_09afd5e6;
          }
          plVar19 = *(long **)((long)auStack_558 + (long)pbVar23 * 8);
          if (plVar19 == (long *)0x0) {
            *(undefined8 *)auStack_578._0_8_ = auStack_548._0_8_;
            auStack_548._0_8_ = auStack_578._0_8_;
            *(undefined1 **)((long)auStack_558 + (long)pbVar23 * 8) = auStack_548;
            if (*(long *)auStack_578._0_8_ != 0) {
              pbVar26 = *(byte **)(*(long *)auStack_578._0_8_ + 8);
              if (((ulong)pbVar28 & (ulong)(pbVar28 + -1)) == 0) {
                *(undefined8 *)((long)auStack_558 + ((ulong)pbVar26 & (ulong)(pbVar28 + -1)) * 8) =
                     auStack_578._0_8_;
              }
              else {
                if (pbVar28 <= pbVar26) {
                  if (((ulong)pbVar26 | (ulong)pbVar28) >> 0x20 == 0) {
                    *(undefined8 *)
                     ((long)auStack_558 +
                     (((ulong)pbVar26 & 0xffffffff) % ((ulong)pbVar28 & 0xffffffff)) * 8) =
                         auStack_578._0_8_;
                    goto LAB_09afd7c8;
                  }
                  pbVar26 = (byte *)((ulong)pbVar26 % (ulong)pbVar28);
                }
                *(undefined8 *)((long)auStack_558 + (long)pbVar26 * 8) = auStack_578._0_8_;
              }
            }
          }
          else {
            *(long *)auStack_578._0_8_ = *plVar19;
            *plVar19 = auStack_578._0_8_;
          }
LAB_09afd7c8:
          auStack_548._8_8_ = auStack_548._8_8_ + 1;
          unaff_R15 = (long *)(ulong)((byte)uStack_508 & 1);
          if (((ulong)uStack_508 & 1) == 0) goto LAB_09afd800;
          goto LAB_09afd7e4;
        }
        if (auStack_438[0] >> 1 == 9) goto LAB_09afd1f1;
        goto LAB_09afd800;
      }
      goto LAB_09affd0a;
    }
    plVar18 = alStack_4a0;
    goto LAB_09afdbd5;
  }
  goto LAB_09affd2d;
LAB_09affd05:
  FUN_04890760();
LAB_09affd0a:
  auVar38 = (undefined1  [8])unaff_R15;
  func_0x04882e30();
LAB_09affd0f:
  func_0x04882e30();
LAB_09affd14:
  func_0x04882e30();
LAB_09affd19:
  func_0x04882e30();
LAB_09affd1e:
  func_0x04882e30();
LAB_09affd23:
  func_0x04882e30();
  unaff_R15 = (long *)auVar38;
LAB_09affd28:
  func_0x04882e30();
LAB_09affd2d:
  auVar38 = (undefined1  [8])unaff_R15;
  func_0x04882e30();
LAB_09affd32:
  func_0x04882e30();
LAB_09affd37:
  func_0x04882e30();
LAB_09affd3c:
  func_0x04882e30();
LAB_09affd41:
  func_0x04882e30();
LAB_09affd46:
  func_0x04882e30();
LAB_09affd4b:
  func_0x04882e30();
LAB_09affd50:
  func_0x04882e30();
LAB_09affd55:
  func_0x04882e30();
LAB_09affd5a:
  func_0x04882e30();
LAB_09affd5f:
  func_0x04882e30();
LAB_09affd64:
  uVar16 = func_0x09b1f770();
  uVar16 = func_0x04882e20(uVar16);
  uVar16 = func_0x04882e20(uVar16);
  func_0x04882f60(auStack_558);
  func_0x04863610(alStack_4a0);
  plVar18 = alStack_4d0;
  do {
    func_0x04863610(plVar18);
    func_0x0eee2d70(uVar16);
    thunk_FUN_0ee326a0(auStack_548._0_8_,(ulong)auStack_558 & 0xfffffffffffffffe);
    plVar18 = plStack_4a8;
    plStack_4a8 = (long *)0x0;
    if (plVar18 == (long *)0x0) {
    }
    else {
      (**(code **)(*plVar18 + 8))();
    }
    if ((auStack_578[0] & 1) != 0) {
      thunk_FUN_0ee326a0(plStack_568,auStack_578._0_8_ & 0xfffffffffffffffe);
    }
    auStack_438 = auVar38;
    func_0x0d6c9500(&uStack_430,auStack_428._0_8_);
    func_0x04863610(&uStack_508);
    func_0x04863610(auStack_528);
    func_0x04863610(alStack_4a0);
    func_0x04863610(alStack_4d0);
    plVar18 = alStack_4b8;
  } while( true );
LAB_09afd4a7:
  if ((bVar41 & (byte)unaff_R15) != 0) {
LAB_09afd7e4:
    thunk_FUN_0ee326a0(pbStack_4f8,(ulong)uStack_508 & 0xfffffffffffffffe);
  }
LAB_09afd800:
  if (((ulong)auStack_528 & 1) != 0) {
    thunk_FUN_0ee326a0(plStack_518,(ulong)auStack_528 & 0xfffffffffffffffe);
  }
  if ((bStack_3d0 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_3c0,CONCAT71(uStack_3cf,bStack_3d0) & 0xfffffffffffffffe);
  }
  if ((bStack_3f0 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_3e0,CONCAT71(uStack_3ef,bStack_3f0) & 0xfffffffffffffffe);
  }
  if ((bStack_408 & 1) == 0) {
  }
  else {
    thunk_FUN_0ee326a0(uStack_3f8,CONCAT71(uStack_407,bStack_408) & 0xfffffffffffffffe);
  }
  if ((auStack_428[8] & 1) == 0) {
  }
  else {
    thunk_FUN_0ee326a0(puStack_410,auStack_428._8_8_ & 0xfffffffffffffffe);
  }
  if ((auStack_438[0] & 1) != 0) {
    thunk_FUN_0ee326a0(auStack_428._0_8_,(ulong)auStack_438 & 0xfffffffffffffffe);
  }
  plVar18 = (long *)*plVar18;
  if (plVar18 == (long *)0x0) goto LAB_09afd9af;
  goto LAB_09afcf8d;
LAB_09afd9af:
  plVar18 = alStack_4a0;
  if (auStack_548._8_8_ != 0) {
    for (puVar21 = (undefined8 *)auStack_548._0_8_; puVar21 != (undefined8 *)0x0;
        puVar21 = (undefined8 *)*puVar21) {
      func_0x04863060(auStack_578,0);
      bVar41 = *(byte *)(puVar21 + 5);
      if ((bVar41 & 1) == 0) {
        uVar35 = (ulong)(bVar41 >> 1);
      }
      else {
        uVar35 = puVar21[6];
      }
      uVar37 = uVar35 + 10;
      if (0xfffffffffffffff7 < uVar37) goto LAB_09affd23;
      if (uVar37 < 0x17) {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = auStack_428._8_8_;
        auStack_428 = auVar3 << 0x40;
        stack0xfffffffffffffbc9 = SUB1615((undefined1  [16])0x0,1);
        auStack_438[0] = (char)uVar37 * '\x02';
        puVar20 = (undefined8 *)0x0;
        uVar31 = 0;
      }
      else {
        uVar31 = (uVar37 | 7) + 1;
        if ((uVar37 | 7) == 0x17) {
          uVar31 = 0x1a;
        }
        puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar31);
        if (puVar20 == (undefined8 *)0x0) {
          func_0x0eec74c0(uVar31,0);
        }
        uVar31 = uVar31 | 1;
        auStack_428._0_8_ = puVar20;
        uStack_430 = (byte *)uVar37;
        auStack_438 = (undefined1  [8])uVar31;
      }
      bVar39 = (uVar31 & 1) == 0;
      puVar34 = puVar20;
      if (bVar39) {
        puVar34 = (undefined8 *)(auStack_438 + 1);
      }
      *puVar34 = 0x66617263656e696d;
      *(undefined2 *)(puVar34 + 1) = 0x3a74;
      lVar17 = (long)puVar20 + 10;
      if (bVar39) {
        lVar17 = (long)&uStack_430 + 3;
      }
      if (uVar35 != 0) {
        if ((bVar41 & 1) == 0) {
          lVar30 = (long)puVar21 + 0x29;
        }
        else {
          lVar30 = puVar21[7];
        }
        memmove(lVar17,lVar30,uVar35);
      }
      *(undefined1 *)(lVar17 + uVar35) = 0;
      func_0x048631d0(auStack_528,auStack_438);
      uVar16 = func_0x04864680(auStack_578,&UNK_01410416);
      func_0x04863790(uVar16,auStack_528);
      func_0x04863610(auStack_528);
      if ((auStack_438[0] & 1) != 0) {
        thunk_FUN_0ee326a0(auStack_428._0_8_,(ulong)auStack_438 & 0xfffffffffffffffe);
      }
      func_0x04864bf0(alStack_4a0);
      func_0x04863610(auStack_578);
      unaff_R15 = (long *)auStack_578;
    }
    func_0x09af6740(alStack_4a0,0);
    plVar18 = alStack_4d0;
    uVar16 = func_0x04864680(plVar18,&UNK_0122c909);
    func_0x04863740(uVar16,alStack_4a0);
  }
LAB_09afdbd5:
  func_0x048635d0(alStack_4b8,plVar18);
  puVar21 = (undefined8 *)auStack_548._0_8_;
  while (puVar21 != (undefined8 *)0x0) {
    puVar20 = (undefined8 *)*puVar21;
    if ((*(byte *)(puVar21 + 5) & 1) != 0) {
      thunk_FUN_0ee326a0(puVar21[7],puVar21[5] & 0xfffffffffffffffe);
    }
    if ((*(byte *)(puVar21 + 2) & 1) != 0) {
      thunk_FUN_0ee326a0(puVar21[4],puVar21[2] & 0xfffffffffffffffe);
    }
    thunk_FUN_0ee326a0(puVar21,0x40);
    puVar21 = puVar20;
  }
  auVar38 = auStack_558;
  uVar35 = (ulong)uStack_550;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uStack_550;
  _auStack_558 = auVar4 << 0x40;
  if (auVar38 != (undefined1  [8])0x0) {
    thunk_FUN_0ee326a0(auVar38,uVar35 << 3);
  }
  func_0x04863610(alStack_4a0);
  func_0x04863610(alStack_4d0);
  bVar39 = (*pbStack_4e0 & 1) == 0;
  auStack_558 = (undefined1  [8])*(byte **)(pbStack_4e0 + 0x10);
  if (bVar39) {
    auStack_558 = (undefined1  [8])pbStack_4e8;
  }
  uStack_550 = (byte *)(ulong)(*pbStack_4e0 >> 1);
  if (!bVar39) {
    uStack_550 = (byte *)*(ulong *)(pbStack_4e0 + 8);
  }
  auStack_548._8_8_ = 0x14;
  auStack_548._0_8_ = &UNK_011dd5f8;
  func_0x049151c0(auStack_438,auStack_558,2,0x2f);
  uVar35 = uStack_38;
  auVar38 = (undefined1  [8])unaff_R15;
  if (0xfffffffffffffff7 < uStack_38) goto LAB_09affd32;
  if (uStack_38 < 0x17) {
    auStack_578[0] = (char)uStack_38 * '\x02';
    plVar18 = (long *)(auStack_578 + 1);
    if (uStack_38 != 0) goto LAB_09afdd57;
  }
  else {
    uVar37 = 0x1a;
    if ((uStack_38 | 7) != 0x17) {
      uVar37 = (uStack_38 | 7) + 1;
    }
    plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar37);
    if (plVar18 == (long *)0x0) {
      func_0x0eec74c0(uVar37,0);
    }
    unaff_R15 = (long *)(uVar37 | 1);
    auStack_578._8_8_ = uVar35;
    auStack_578._0_8_ = unaff_R15;
    plStack_568 = plVar18;
LAB_09afdd57:
    func_0x0eee2f00(plVar18,auStack_438,uVar35);
    auVar38 = (undefined1  [8])unaff_R15;
  }
  *(char *)((long)plVar18 + uVar35) = '\0';
  func_0x09afaf30(alStack_4b8,auStack_578);
  if ((auStack_578[0] & 1) != 0) {
    thunk_FUN_0ee326a0(plStack_568,auStack_578._0_8_ & 0xfffffffffffffffe);
  }
  func_0x04863610(alStack_4b8);
  func_0x04863060(&uStack_508,0);
  func_0x09afbcc0(&uStack_508,&UNK_013fcdd0);
  func_0x04863060(auStack_558,6);
  lVar17 = 0;
  do {
    lVar30 = *(long *)(lVar17 + 0xf6e9e40);
    if (lVar30 != 0) {
      bVar41 = *(byte *)(lVar30 + 0x98);
      if ((bVar41 & 1) == 0) {
        auVar38 = (undefined1  [8])(ulong)(bVar41 >> 1);
        if (auVar38 != (undefined1  [8])0x5) goto LAB_09afde1c;
LAB_09afdeb2:
        if ((bVar41 & 1) == 0) {
          piVar22 = (int *)(lVar30 + 0x99);
        }
        else {
          piVar22 = *(int **)(lVar30 + 0xa8);
        }
        if ((char)piVar22[1] == 'y' && *piVar22 == 0x74706d65) goto LAB_09afdde0;
        pcVar27 = (char *)0xf;
LAB_09afdeed:
        pbStack_4d8 = (byte *)CONCAT71(pbStack_4d8._1_7_,bVar41);
        auVar5._8_8_ = 0;
        auVar5._0_8_ = auStack_428._8_8_;
        auStack_428 = auVar5 << 0x40;
        bVar39 = false;
        stack0xfffffffffffffbc9 = SUB1615((undefined1  [16])0x0,1);
        auStack_438[0] = (char)pcVar27 * '\x02';
        puVar21 = (undefined8 *)0x0;
      }
      else {
        auVar38 = *(undefined1 (*) [8])(lVar30 + 0xa0);
        if (auVar38 == (undefined1  [8])0x5) goto LAB_09afdeb2;
LAB_09afde1c:
        pcVar27 = (char *)((long)auVar38 + 10);
        if ((char *)0xfffffffffffffff7 < pcVar27) goto LAB_09affd19;
        pbStack_4d8 = (byte *)CONCAT71(pbStack_4d8._1_7_,bVar41);
        if (pcVar27 < (char *)0x17) goto LAB_09afdeed;
        uVar35 = ((ulong)pcVar27 | 7) + 1;
        if (((ulong)pcVar27 | 7) == 0x17) {
          uVar35 = 0x1a;
        }
        puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar35);
        if (puVar21 == (undefined8 *)0x0) {
          func_0x0eec74c0(uVar35,0);
        }
        auStack_428._0_8_ = puVar21;
        uStack_430 = (byte *)pcVar27;
        auStack_438 = (undefined1  [8])(uVar35 | 1);
        bVar39 = true;
      }
      puVar20 = puVar21;
      if (!bVar39) {
        puVar20 = (undefined8 *)(auStack_438 + 1);
      }
      *puVar20 = 0x66617263656e696d;
      *(undefined2 *)(puVar20 + 1) = 0x3a74;
      lVar36 = (long)puVar21 + 10;
      if (!bVar39) {
        lVar36 = (long)&uStack_430 + 3;
      }
      if (auVar38 != (undefined1  [8])0x0) {
        if (((ulong)pbStack_4d8 & 1) == 0) {
          lVar30 = lVar30 + 0x99;
        }
        else {
          lVar30 = *(long *)(lVar30 + 0xa8);
        }
        memmove(lVar36,lVar30,auVar38);
      }
      *(char *)(lVar36 + (long)auVar38) = '\0';
      func_0x04863060(auStack_578,0);
      func_0x048631d0(auStack_528,auStack_438);
      uVar16 = func_0x04864680(auStack_578,&UNK_01410416);
      func_0x04863790(uVar16,auStack_528);
      func_0x04863610(auStack_528);
      func_0x04864bf0(auStack_558,auStack_578);
      func_0x04863610(auStack_578);
      auVar38 = (undefined1  [8])auStack_578;
      if ((auStack_438[0] & 1) != 0) {
        thunk_FUN_0ee326a0(auStack_428._0_8_,(ulong)auStack_438 & 0xfffffffffffffffe);
        auVar38 = (undefined1  [8])auStack_578;
      }
    }
LAB_09afdde0:
    lVar17 = lVar17 + 8;
  } while (lVar17 != 0x130);
  func_0x09af6740(auStack_558,0);
  uVar16 = func_0x04864680(&uStack_508,&UNK_0122c909);
  func_0x04863740(uVar16,auStack_558);
  func_0x04863610(auStack_558);
  bVar39 = (*pbStack_4e0 & 1) == 0;
  auStack_558 = (undefined1  [8])*(byte **)(pbStack_4e0 + 0x10);
  if (bVar39) {
    auStack_558 = (undefined1  [8])pbStack_4e8;
  }
  uStack_550 = (byte *)(ulong)(*pbStack_4e0 >> 1);
  if (!bVar39) {
    uStack_550 = (byte *)*(ulong *)(pbStack_4e0 + 8);
  }
  auStack_548._8_8_ = 0x13;
  auStack_548._0_8_ = &UNK_0149ef2b;
  func_0x049151c0(auStack_438,auStack_558,2,0x2f);
  uVar35 = uStack_38;
  if (0xfffffffffffffff7 < uStack_38) goto LAB_09affd37;
  if (uStack_38 < 0x17) {
    auStack_578[0] = (char)uStack_38 * '\x02';
    plVar18 = (long *)(auStack_578 + 1);
    if (uStack_38 != 0) goto LAB_09afe11d;
  }
  else {
    uVar37 = 0x1a;
    if ((uStack_38 | 7) != 0x17) {
      uVar37 = (uStack_38 | 7) + 1;
    }
    plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar37);
    if (plVar18 == (long *)0x0) {
      func_0x0eec74c0(uVar37,0);
    }
    auVar38 = (undefined1  [8])(uVar37 | 1);
    auStack_578._8_8_ = uVar35;
    auStack_578._0_8_ = auVar38;
    plStack_568 = plVar18;
LAB_09afe11d:
    func_0x0eee2f00(plVar18,auStack_438,uVar35);
  }
  *(char *)((long)plVar18 + uVar35) = '\0';
  func_0x09afaf30(&uStack_508,auStack_578);
  if ((auStack_578[0] & 1) != 0) {
    thunk_FUN_0ee326a0(plStack_568,auStack_578._0_8_ & 0xfffffffffffffffe);
  }
  func_0x04863610(&uStack_508);
  func_0x04863060(alStack_4d0,0);
  func_0x09afbcc0(alStack_4d0,&UNK_01330248);
  func_0x04863060(auStack_578,6);
  pbStack_490 = _DAT_0f6d2fc8;
  pbVar28 = _DAT_0f6d2fc0;
  if (_DAT_0f6d2fc0 != _DAT_0f6d2fc8) {
    do {
      func_0x04863060(auStack_528,0);
      lVar17 = *(long *)pbVar28;
      if ((*(byte *)(lVar17 + 0x68) & 1) == 0) {
        auStack_428._0_8_ = *(undefined8 *)(lVar17 + 0x78);
        _auStack_438 = *(undefined1 (*) [16])(lVar17 + 0x68);
      }
      else {
        func_0x0412e5e0(auStack_438,*(undefined8 *)(lVar17 + 0x78),*(undefined8 *)(lVar17 + 0x70));
      }
      bVar41 = auStack_438[0];
      auVar38 = (undefined1  [8])(ulong)auStack_438[0];
      pbStack_4d8 = pbVar28;
      if ((auStack_438[0] & 1) == 0) {
        uVar35 = (ulong)(auStack_438[0] >> 1);
        if (uVar35 != 0) goto LAB_09afe249;
LAB_09afe293:
        lVar17 = *(long *)pbVar28;
        bVar41 = *(byte *)(lVar17 + 0x40);
        if ((bVar41 & 1) == 0) {
          uVar35 = (ulong)(bVar41 >> 1);
        }
        else {
          uVar35 = *(ulong *)(lVar17 + 0x48);
        }
        uVar37 = uVar35 + 10;
        if (0xfffffffffffffff7 < uVar37) goto LAB_09affd1e;
        if (uVar37 < 0x17) {
          auVar8._8_8_ = 0;
          auVar8._0_8_ = auStack_548._8_8_;
          auStack_548 = auVar8 << 0x40;
          stack0xfffffffffffffaa9 = SUB1615((undefined1  [16])0x0,1);
          auStack_558[0] = (char)uVar37 * '\x02';
          puVar21 = (undefined8 *)0x0;
          uVar31 = 0;
        }
        else {
          uVar31 = (uVar37 | 7) + 1;
          if ((uVar37 | 7) == 0x17) {
            uVar31 = 0x1a;
          }
          puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar31);
          if (puVar21 == (undefined8 *)0x0) {
            func_0x0eec74c0(uVar31,0);
          }
          uVar31 = uVar31 | 1;
          auStack_548._0_8_ = puVar21;
          uStack_550 = (byte *)uVar37;
          auStack_558 = (undefined1  [8])uVar31;
        }
        bVar39 = (uVar31 & 1) == 0;
        puVar20 = puVar21;
        if (bVar39) {
          puVar20 = (undefined8 *)(auStack_558 + 1);
        }
        *puVar20 = 0x66617263656e696d;
        *(undefined2 *)(puVar20 + 1) = 0x3a74;
        lVar30 = (long)puVar21 + 10;
        if (bVar39) {
          lVar30 = (long)&uStack_550 + 3;
        }
        if (uVar35 != 0) {
          if ((bVar41 & 1) == 0) {
            lVar17 = lVar17 + 0x41;
          }
          else {
            lVar17 = *(long *)(lVar17 + 0x50);
          }
          memmove(lVar30,lVar17,uVar35);
        }
        *(undefined1 *)(lVar30 + uVar35) = 0;
        func_0x048631d0(&uStack_508,auStack_558);
        uVar16 = func_0x04864680(auStack_528,&UNK_01410416);
      }
      else {
        uVar35 = (ulong)uStack_430;
        if (uStack_430 == (byte *)0x0) goto LAB_09afe293;
LAB_09afe249:
        uVar37 = uVar35 + 10;
        if (0xfffffffffffffff7 < uVar37) goto LAB_09affd0f;
        if (uVar37 < 0x17) {
          auVar6._8_8_ = 0;
          auVar6._0_8_ = auStack_548._8_8_;
          auStack_548 = auVar6 << 0x40;
          stack0xfffffffffffffaa9 = SUB1615((undefined1  [16])0x0,1);
          auStack_558[0] = (char)uVar37 * '\x02';
          puVar21 = (undefined8 *)0x0;
          uVar31 = 0;
        }
        else {
          uVar31 = (uVar37 | 7) + 1;
          if ((uVar37 | 7) == 0x17) {
            uVar31 = 0x1a;
          }
          puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar31);
          if (puVar21 == (undefined8 *)0x0) {
            func_0x0eec74c0(uVar31,0);
          }
          uVar31 = uVar31 | 1;
          auStack_548._0_8_ = puVar21;
          uStack_550 = (byte *)uVar37;
          auStack_558 = (undefined1  [8])uVar31;
        }
        lVar17 = (long)puVar21 + 10;
        if ((uVar31 & 1) == 0) {
          lVar17 = (long)&uStack_550 + 3;
          puVar21 = (undefined8 *)(auStack_558 + 1);
        }
        *puVar21 = 0x66617263656e696d;
        *(undefined2 *)(puVar21 + 1) = 0x3a74;
        puVar33 = auStack_438 + 1;
        if ((bVar41 & 1) != 0) {
          puVar33 = (undefined1 *)auStack_428._0_8_;
        }
        memmove(lVar17,puVar33,uVar35);
        *(undefined1 *)(lVar17 + uVar35) = 0;
        func_0x048631d0(&uStack_508,auStack_558);
        uVar16 = func_0x04864680(auStack_528,&UNK_01410416);
        func_0x04863790(uVar16,&uStack_508);
        func_0x04863610(&uStack_508);
        if ((auStack_558[0] & 1) != 0) {
          thunk_FUN_0ee326a0(auStack_548._0_8_,(ulong)auStack_558 & 0xfffffffffffffffe);
        }
        lVar17 = *(long *)pbVar28;
        bVar41 = *(byte *)(lVar17 + 0x40);
        if ((bVar41 & 1) == 0) {
          uVar35 = (ulong)(bVar41 >> 1);
        }
        else {
          uVar35 = *(ulong *)(lVar17 + 0x48);
        }
        uVar37 = uVar35 + 10;
        if (0xfffffffffffffff7 < uVar37) goto LAB_09affd14;
        if (uVar37 < 0x17) {
          auVar7._8_8_ = 0;
          auVar7._0_8_ = auStack_548._8_8_;
          auStack_548 = auVar7 << 0x40;
          stack0xfffffffffffffaa9 = SUB1615((undefined1  [16])0x0,1);
          auStack_558[0] = (char)uVar37 * '\x02';
          puVar21 = (undefined8 *)0x0;
          uVar31 = 0;
        }
        else {
          uVar31 = (uVar37 | 7) + 1;
          if ((uVar37 | 7) == 0x17) {
            uVar31 = 0x1a;
          }
          puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar31);
          if (puVar21 == (undefined8 *)0x0) {
            func_0x0eec74c0(uVar31,0);
          }
          uVar31 = uVar31 | 1;
          auStack_548._0_8_ = puVar21;
          uStack_550 = (byte *)uVar37;
          auStack_558 = (undefined1  [8])uVar31;
        }
        bVar39 = (uVar31 & 1) == 0;
        puVar20 = puVar21;
        if (bVar39) {
          puVar20 = (undefined8 *)(auStack_558 + 1);
        }
        *puVar20 = 0x66617263656e696d;
        *(undefined2 *)(puVar20 + 1) = 0x3a74;
        lVar30 = (long)puVar21 + 10;
        if (bVar39) {
          lVar30 = (long)&uStack_550 + 3;
        }
        if (uVar35 != 0) {
          if ((bVar41 & 1) == 0) {
            lVar17 = lVar17 + 0x41;
          }
          else {
            lVar17 = *(long *)(lVar17 + 0x50);
          }
          memmove(lVar30,lVar17,uVar35);
        }
        *(undefined1 *)(lVar30 + uVar35) = 0;
        func_0x048631d0(&uStack_508,auStack_558);
        uVar16 = func_0x04864680(auStack_528,&UNK_0138e8dd);
      }
      pbVar26 = pbStack_4d8;
      auVar38 = (undefined1  [8])auStack_528;
      func_0x04863790(uVar16,&uStack_508);
      func_0x04863610(&uStack_508);
      if ((auStack_558[0] & 1) != 0) {
        thunk_FUN_0ee326a0(auStack_548._0_8_,(ulong)auStack_558 & 0xfffffffffffffffe);
      }
      func_0x04864bf0(auStack_578);
      if ((auStack_438[0] & 1) != 0) {
        thunk_FUN_0ee326a0(auStack_428._0_8_);
      }
      func_0x04863610(auVar38);
      pbVar28 = pbVar26 + 8;
    } while (pbVar26 + 8 != pbStack_490);
  }
  func_0x09af6740(auStack_578,0);
  uVar16 = func_0x04864680(alStack_4d0,&UNK_0122c909);
  func_0x04863740(uVar16,auStack_578);
  func_0x04863610(auStack_578);
  bVar39 = (*pbStack_4e0 & 1) == 0;
  auStack_558 = (undefined1  [8])*(byte **)(pbStack_4e0 + 0x10);
  if (bVar39) {
    auStack_558 = (undefined1  [8])pbStack_4e8;
  }
  uStack_550 = (byte *)(ulong)(*pbStack_4e0 >> 1);
  if (!bVar39) {
    uStack_550 = (byte *)*(ulong *)(pbStack_4e0 + 8);
  }
  auStack_548._8_8_ = 0x18;
  auStack_548._0_8_ = &UNK_0122c914;
  func_0x049151c0(auStack_438,auStack_558,2,0x2f);
  uVar35 = uStack_38;
  if (0xfffffffffffffff7 < uStack_38) goto LAB_09affd3c;
  if (uStack_38 < 0x17) {
    auStack_578[0] = (char)uStack_38 * '\x02';
    plVar18 = (long *)(auStack_578 + 1);
    if (uStack_38 != 0) goto LAB_09afe773;
  }
  else {
    uVar37 = 0x1a;
    if ((uStack_38 | 7) != 0x17) {
      uVar37 = (uStack_38 | 7) + 1;
    }
    plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar37);
    if (plVar18 == (long *)0x0) {
      func_0x0eec74c0(uVar37,0);
    }
    auVar38 = (undefined1  [8])(uVar37 | 1);
    auStack_578._8_8_ = uVar35;
    auStack_578._0_8_ = auVar38;
    plStack_568 = plVar18;
LAB_09afe773:
    func_0x0eee2f00(plVar18,auStack_438,uVar35);
  }
  *(char *)((long)plVar18 + uVar35) = '\0';
  func_0x09afaf30(alStack_4d0,auStack_578);
  if ((auStack_578[0] & 1) != 0) {
    thunk_FUN_0ee326a0(plStack_568,auStack_578._0_8_ & 0xfffffffffffffffe);
  }
  func_0x04863610(alStack_4d0);
  func_0x04863060(&uStack_508,0);
  func_0x09afbcc0(&uStack_508,&UNK_014ca08b);
  func_0x04863060(auStack_558,6);
  FUN_096abd10(auStack_438);
  if ((long *)auStack_428._0_8_ != (long *)0x0) {
    auVar38 = (undefined1  [8])&UNK_01410416;
    plVar18 = (long *)auStack_428._0_8_;
    do {
      func_0x04863060(auStack_578,0);
      if ((*(byte *)(plVar18 + 5) & 1) == 0) {
        lVar17 = (long)plVar18 + 0x29;
      }
      else {
        lVar17 = plVar18[7];
      }
      func_0x04863120(auStack_528,lVar17);
      uVar16 = func_0x04864680(auStack_578,&UNK_01410416);
      func_0x04863790(uVar16,auStack_528);
      func_0x04863610(auStack_528);
      func_0x04864bf0(auStack_558);
      func_0x04863610(auStack_578);
      plVar18 = (long *)*plVar18;
    } while (plVar18 != (long *)0x0);
  }
  func_0x09af6740(auStack_558,0);
  uVar16 = func_0x04864680(&uStack_508,&UNK_0122c909);
  func_0x04863740(uVar16,auStack_558);
  puVar21 = (undefined8 *)auStack_428._0_8_;
  while (puVar21 != (undefined8 *)0x0) {
    puVar20 = (undefined8 *)*puVar21;
    if ((*(byte *)(puVar21 + 5) & 1) != 0) {
      thunk_FUN_0ee326a0(puVar21[7],puVar21[5] & 0xfffffffffffffffe);
    }
    if ((*(byte *)(puVar21 + 2) & 1) != 0) {
      thunk_FUN_0ee326a0(puVar21[4],puVar21[2] & 0xfffffffffffffffe);
    }
    thunk_FUN_0ee326a0(puVar21,0x40);
    puVar21 = puVar20;
  }
  auVar29 = auStack_438;
  uVar35 = (ulong)uStack_430;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uStack_430;
  _auStack_438 = auVar9 << 0x40;
  if (auVar29 != (undefined1  [8])0x0) {
    thunk_FUN_0ee326a0(auVar29,uVar35 << 3);
  }
  func_0x04863610(auStack_558);
  bVar39 = (*pbStack_4e0 & 1) == 0;
  auStack_558 = (undefined1  [8])*(byte **)(pbStack_4e0 + 0x10);
  if (bVar39) {
    auStack_558 = (undefined1  [8])pbStack_4e8;
  }
  uStack_550 = (byte *)(ulong)(*pbStack_4e0 >> 1);
  if (!bVar39) {
    uStack_550 = (byte *)*(ulong *)(pbStack_4e0 + 8);
  }
  auStack_548._8_8_ = 0x16;
  auStack_548._0_8_ = &UNK_014511d3;
  func_0x049151c0(auStack_438,auStack_558,2,0x2f);
  uVar35 = uStack_38;
  if (0xfffffffffffffff7 < uStack_38) goto LAB_09affd41;
  if (uStack_38 < 0x17) {
    auStack_578[0] = (char)uStack_38 * '\x02';
    plVar18 = (long *)(auStack_578 + 1);
    if (uStack_38 != 0) goto LAB_09afea27;
  }
  else {
    uVar37 = 0x1a;
    if ((uStack_38 | 7) != 0x17) {
      uVar37 = (uStack_38 | 7) + 1;
    }
    plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar37);
    if (plVar18 == (long *)0x0) {
      func_0x0eec74c0(uVar37,0);
    }
    auVar38 = (undefined1  [8])(uVar37 | 1);
    auStack_578._8_8_ = uVar35;
    auStack_578._0_8_ = auVar38;
    plStack_568 = plVar18;
LAB_09afea27:
    func_0x0eee2f00(plVar18,auStack_438,uVar35);
  }
  *(char *)((long)plVar18 + uVar35) = '\0';
  func_0x09afaf30(&uStack_508,auStack_578);
  if ((auStack_578[0] & 1) != 0) {
    thunk_FUN_0ee326a0(plStack_568,auStack_578._0_8_ & 0xfffffffffffffffe);
  }
  func_0x04863610(&uStack_508);
  func_0x04863060(auStack_528,0);
  func_0x09afbcc0(auStack_528,&UNK_0127c2ad);
  func_0x04863060(auStack_438,6);
  pbVar28 = (byte *)*puStack_458;
  pbVar26 = (byte *)puStack_458[1];
  if (pbVar28 != pbVar26) {
    do {
      cVar13 = func_0x0b5f9f50(pbVar28);
      if (cVar13 != '\0') {
        func_0x04863060(auStack_558,0);
        if ((*pbVar28 & 1) == 0) {
          pbVar23 = pbVar28 + 1;
        }
        else {
          pbVar23 = *(byte **)(pbVar28 + 0x10);
        }
        func_0x04863120(auStack_578,pbVar23);
        uVar16 = func_0x04864680(auStack_558,&UNK_01410416);
        func_0x04863790(uVar16,auStack_578);
        func_0x04863610(auStack_578);
        func_0x04864bf0(auStack_438);
        func_0x04863610(auStack_558);
      }
      pbVar28 = pbVar28 + 0x110;
      auVar38 = (undefined1  [8])auStack_578;
    } while (pbVar28 != pbVar26);
  }
  func_0x09af6740(auStack_438,0);
  uVar16 = func_0x04864680(auStack_528,&UNK_0122c909);
  func_0x04863740(uVar16,auStack_438);
  func_0x04863610(auStack_438);
  bVar39 = (*pbStack_4e0 & 1) == 0;
  auStack_558 = (undefined1  [8])*(byte **)(pbStack_4e0 + 0x10);
  if (bVar39) {
    auStack_558 = (undefined1  [8])pbStack_4e8;
  }
  uStack_550 = (byte *)(ulong)(*pbStack_4e0 >> 1);
  if (!bVar39) {
    uStack_550 = (byte *)*(ulong *)(pbStack_4e0 + 8);
  }
  auStack_548._8_8_ = 0x1a;
  auStack_548._0_8_ = &UNK_012fab79;
  func_0x049151c0(auStack_438,auStack_558,2,0x2f);
  uVar35 = uStack_38;
  if (0xfffffffffffffff7 < uStack_38) goto LAB_09affd46;
  if (uStack_38 < 0x17) {
    auStack_578[0] = (char)uStack_38 * '\x02';
    plVar18 = (long *)(auStack_578 + 1);
    if (uStack_38 != 0) goto LAB_09afec4f;
  }
  else {
    uVar37 = 0x1a;
    if ((uStack_38 | 7) != 0x17) {
      uVar37 = (uStack_38 | 7) + 1;
    }
    plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar37);
    if (plVar18 == (long *)0x0) {
      func_0x0eec74c0(uVar37,0);
    }
    auStack_578._8_8_ = uVar35;
    auStack_578._0_8_ = uVar37 | 1;
    plStack_568 = plVar18;
LAB_09afec4f:
    func_0x0eee2f00(plVar18,auStack_438,uVar35);
  }
  *(char *)((long)plVar18 + uVar35) = '\0';
  func_0x09afaf30(auStack_528,auStack_578);
  if ((auStack_578[0] & 1) != 0) {
    thunk_FUN_0ee326a0(plStack_568,auStack_578._0_8_ & 0xfffffffffffffffe);
  }
  func_0x04863610(auStack_528);
  func_0x04863060(&uStack_508,0);
  func_0x09afbcc0(&uStack_508,&UNK_01482257);
  func_0x04863060(auStack_528,6);
  plVar18 = *(long **)(lStack_470 + 0x380);
  auVar38 = *(undefined1 (*) [8])(lStack_470 + 0x388);
  if ((undefined1  [8])plVar18 != auVar38) {
    do {
      lVar17 = *plVar18;
      if (lVar17 != *(long *)(lStack_470 + 0x3b8)) {
        func_0x04863060(auStack_558,0);
        if ((*(byte *)(lVar17 + 0x198) & 1) == 0) {
          auStack_428._0_8_ = *(undefined8 *)(lVar17 + 0x1a8);
          _auStack_438 = *(undefined1 (*) [16])(lVar17 + 0x198);
        }
        else {
          func_0x0412e5e0(auStack_438,*(undefined8 *)(lVar17 + 0x1a8),
                          *(undefined8 *)(lVar17 + 0x1a0));
        }
        puVar33 = auStack_438 + 1;
        if ((auStack_438[0] & 1) != 0) {
          puVar33 = (undefined1 *)auStack_428._0_8_;
        }
        func_0x04863120(auStack_578,puVar33);
        uVar16 = func_0x04864680(auStack_558,&UNK_01410416);
        func_0x04863790(uVar16,auStack_578);
        func_0x04863610(auStack_578);
        func_0x048630e0(auStack_578,*(undefined2 *)(lVar17 + 0x168));
        uVar16 = func_0x04864680(auStack_558,&UNK_0133e2b9);
        func_0x04863790(uVar16,auStack_578);
        func_0x04863610(auStack_578);
        func_0x04864bf0(auStack_528);
        if ((auStack_438[0] & 1) != 0) {
          thunk_FUN_0ee326a0(auStack_428._0_8_);
        }
        func_0x04863610(auStack_558);
      }
      plVar18 = plVar18 + 1;
    } while ((undefined1  [8])plVar18 != auVar38);
  }
  func_0x09af6740(auStack_528,0);
  uVar16 = func_0x04864680(&uStack_508,&UNK_0122c909);
  func_0x04863740(uVar16,auStack_528);
  func_0x04863610(auStack_528);
  bVar39 = (*pbStack_4e0 & 1) == 0;
  auStack_558 = (undefined1  [8])*(byte **)(pbStack_4e0 + 0x10);
  if (bVar39) {
    auStack_558 = (undefined1  [8])pbStack_4e8;
  }
  uStack_550 = (byte *)(ulong)(*pbStack_4e0 >> 1);
  if (!bVar39) {
    uStack_550 = (byte *)*(ulong *)(pbStack_4e0 + 8);
  }
  auStack_548._8_8_ = 0x12;
  auStack_548._0_8_ = &UNK_011a796e;
  func_0x049151c0(auStack_438,auStack_558,2,0x2f);
  uVar35 = uStack_38;
  if (0xfffffffffffffff7 < uStack_38) goto LAB_09affd4b;
  if (uStack_38 < 0x17) {
    auStack_578[0] = (char)uStack_38 * '\x02';
    plVar18 = (long *)(auStack_578 + 1);
    if (uStack_38 != 0) goto LAB_09afef42;
  }
  else {
    uVar37 = 0x1a;
    if ((uStack_38 | 7) != 0x17) {
      uVar37 = (uStack_38 | 7) + 1;
    }
    plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar37);
    if (plVar18 == (long *)0x0) {
      func_0x0eec74c0(uVar37,0);
    }
    auStack_578._8_8_ = uVar35;
    auStack_578._0_8_ = uVar37 | 1;
    plStack_568 = plVar18;
LAB_09afef42:
    func_0x0eee2f00(plVar18,auStack_438,uVar35);
  }
  *(char *)((long)plVar18 + uVar35) = '\0';
  func_0x09afaf30(&uStack_508,auStack_578);
  if ((auStack_578[0] & 1) != 0) {
    thunk_FUN_0ee326a0(plStack_568,auStack_578._0_8_ & 0xfffffffffffffffe);
  }
  func_0x04863610(&uStack_508);
  func_0x04863060(auStack_528,0);
  func_0x09afbcc0(auStack_528,&UNK_0137d46c);
  func_0x04863060(auStack_438,6);
  lVar17 = 8;
  auVar38 = (undefined1  [8])&UNK_01410416;
  do {
    func_0x04863060(auStack_558,0);
    func_0x048631d0(auStack_578,lVar17 + 0xf71fa58);
    uVar16 = func_0x04864680(auStack_558,&UNK_01410416);
    func_0x04863790(uVar16,auStack_578);
    func_0x04863610(auStack_578);
    func_0x04864bf0(auStack_438);
    func_0x04863610(auStack_558);
    lVar17 = lVar17 + 0x28;
  } while (lVar17 != 0x3f0);
  func_0x09af6740(auStack_438,0);
  uVar16 = func_0x04864680(auStack_528,&UNK_0122c909);
  func_0x04863740(uVar16,auStack_438);
  func_0x04863610(auStack_438);
  bVar39 = (*pbStack_4e0 & 1) == 0;
  auStack_558 = (undefined1  [8])*(byte **)(pbStack_4e0 + 0x10);
  if (bVar39) {
    auStack_558 = (undefined1  [8])pbStack_4e8;
  }
  uStack_550 = (byte *)(ulong)(*pbStack_4e0 >> 1);
  if (!bVar39) {
    uStack_550 = (byte *)*(ulong *)(pbStack_4e0 + 8);
  }
  auStack_548._8_8_ = 0x14;
  auStack_548._0_8_ = &UNK_011c2bb0;
  func_0x049151c0(auStack_438,auStack_558,2,0x2f);
  uVar35 = uStack_38;
  if (0xfffffffffffffff7 < uStack_38) goto LAB_09affd50;
  if (uStack_38 < 0x17) {
    auStack_578[0] = (char)uStack_38 * '\x02';
    plVar18 = (long *)(auStack_578 + 1);
    if (uStack_38 != 0) goto LAB_09aff146;
  }
  else {
    uVar37 = 0x1a;
    if ((uStack_38 | 7) != 0x17) {
      uVar37 = (uStack_38 | 7) + 1;
    }
    plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar37);
    if (plVar18 == (long *)0x0) {
      func_0x0eec74c0(uVar37,0);
    }
    auVar38 = (undefined1  [8])(uVar37 | 1);
    auStack_578._8_8_ = uVar35;
    auStack_578._0_8_ = auVar38;
    plStack_568 = plVar18;
LAB_09aff146:
    func_0x0eee2f00(plVar18,auStack_438,uVar35);
  }
  *(char *)((long)plVar18 + uVar35) = '\0';
  func_0x09afaf30(auStack_528,auStack_578);
  if ((auStack_578[0] & 1) != 0) {
    thunk_FUN_0ee326a0(plStack_568,auStack_578._0_8_ & 0xfffffffffffffffe);
  }
  func_0x04863610(auStack_528);
  if (uStack_4c0 != 0) {
    LOCK();
    *(long *)(uStack_4c0 + 0x10) = *(long *)(uStack_4c0 + 0x10) + 1;
    UNLOCK();
    LOCK();
    *(long *)(uStack_4c0 + 0x10) = *(long *)(uStack_4c0 + 0x10) + 1;
    UNLOCK();
  }
  func_0x04863060(alStack_4d0,0);
  func_0x09afbcc0(alStack_4d0,&UNK_011dd60d);
  func_0x04863060(auStack_558,6);
  auStack_578._8_8_ = uStack_4c0;
  auStack_578._0_8_ = puStack_480;
  if (uStack_4c0 != 0) {
    LOCK();
    *(long *)(uStack_4c0 + 0x10) = *(long *)(uStack_4c0 + 0x10) + 1;
    UNLOCK();
  }
  func_0x0a758870(auStack_438,auStack_578);
  if (auStack_578._8_8_ != 0) {
    func_0x0412c2d0();
  }
  pbVar28 = uStack_430;
  if (auStack_438 != (undefined1  [8])uStack_430) {
    auVar38 = (undefined1  [8])&uStack_508;
    auVar29 = auStack_438;
    do {
      cVar13 = func_0x0b5f9f50(auVar29);
      if (cVar13 != '\0') {
        func_0x04863060(auStack_528,0);
        if ((*(byte *)auVar29 & 1) == 0) {
          pbVar26 = (byte *)((long)auVar29 + 1);
        }
        else {
          pbVar26 = *(byte **)((long)auVar29 + 0x10);
        }
        func_0x04863120(auVar38,pbVar26);
        uVar16 = func_0x04864680(auStack_528,&UNK_01410416);
        func_0x04863790(uVar16,auVar38);
        func_0x04863610(auVar38);
        func_0x04864bf0(auStack_558);
        func_0x04863610(auStack_528);
      }
      auVar29 = (undefined1  [8])((long)auVar29 + 0x18);
    } while (auVar29 != (undefined1  [8])pbVar28);
  }
  func_0x09af6740(auStack_558,1);
  uVar16 = func_0x04864680(alStack_4d0,&UNK_0122c909);
  func_0x04863740(uVar16,auStack_558);
  auVar29 = auStack_438;
  if (auStack_438 != (undefined1  [8])0x0) {
    for (lVar17 = (long)uStack_430; auVar29 != (undefined1  [8])lVar17; lVar17 = lVar17 + -0x18) {
      if ((*(byte *)(lVar17 + -0x18) & 1) != 0) {
        thunk_FUN_0ee326a0(*(undefined8 *)(lVar17 + -8),
                           *(ulong *)(lVar17 + -0x18) & 0xfffffffffffffffe);
      }
    }
    uStack_430 = (byte *)auVar29;
    thunk_FUN_0ee326a0(auStack_438,auStack_428._0_8_ - (long)auStack_438);
  }
  func_0x04863610(auStack_558);
  if (uStack_4c0 != 0) {
    func_0x0412c2d0();
  }
  bVar39 = (*pbStack_4e0 & 1) == 0;
  auStack_558 = (undefined1  [8])*(byte **)(pbStack_4e0 + 0x10);
  if (bVar39) {
    auStack_558 = (undefined1  [8])pbStack_4e8;
  }
  uStack_550 = (byte *)(ulong)(*pbStack_4e0 >> 1);
  if (!bVar39) {
    uStack_550 = (byte *)*(ulong *)(pbStack_4e0 + 8);
  }
  auStack_548._8_8_ = 0x1d;
  auStack_548._0_8_ = &UNK_012953a0;
  func_0x049151c0(auStack_438,auStack_558,2,0x2f);
  uVar35 = uStack_38;
  if (0xfffffffffffffff7 < uStack_38) goto LAB_09affd55;
  if (uStack_38 < 0x17) {
    auStack_578[0] = (char)uStack_38 * '\x02';
    auVar38 = (undefined1  [8])(auStack_578 + 1);
    if (uStack_38 != 0) goto LAB_09aff446;
  }
  else {
    uVar37 = 0x1a;
    if ((uStack_38 | 7) != 0x17) {
      uVar37 = (uStack_38 | 7) + 1;
    }
    auVar38 = (undefined1  [8])(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar37);
    if (auVar38 == (undefined1  [8])0x0) {
      func_0x0eec74c0(uVar37,0);
    }
    auStack_578._8_8_ = uVar35;
    auStack_578._0_8_ = uVar37 | 1;
    plStack_568 = (long *)auVar38;
LAB_09aff446:
    func_0x0eee2f00(auVar38,auStack_438,uVar35);
  }
  *(char *)((long)auVar38 + uVar35) = '\0';
  func_0x09afaf30(alStack_4d0,auStack_578);
  if ((auStack_578[0] & 1) != 0) {
    thunk_FUN_0ee326a0(plStack_568,auStack_578._0_8_ & 0xfffffffffffffffe);
  }
  func_0x04863610(alStack_4d0);
  if (uStack_4c0 != 0) {
    func_0x0412c2d0();
  }
  func_0x04863060(&uStack_508,0);
  func_0x09afbcc0(&uStack_508,&UNK_01380240);
  _auStack_438 = (undefined1  [16])0x0;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = auStack_428._8_8_;
  auStack_428 = auVar10 << 0x40;
  uStack_550._0_1_ = 0;
  auStack_558 = (undefined1  [8])auStack_438;
  puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
  if (puVar21 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x48,0);
  }
  auStack_428._0_8_ = puVar21 + 9;
  *puVar21 = 0x656d75736e6f430e;
  puVar21[1] = 0;
  puVar21[3] = 0x536e776f72685418;
  puVar21[4] = 0x6873616c70;
  puVar21[6] = 0x4c6e776f7268541e;
  puVar21[7] = 0x676e697265676e69;
  puVar21[8] = 0;
  uStack_430 = (byte *)(puVar21 + 9);
  auStack_438 = (undefined1  [8])puVar21;
  func_0x04863060(auStack_558,6);
  lVar17 = (long)uStack_430;
  if (auStack_438 != (undefined1  [8])uStack_430) {
    auVar38 = (undefined1  [8])auStack_528;
    auVar29 = auStack_438;
    do {
      func_0x04863060(auStack_578,0);
      func_0x048631d0(auVar38,auVar29);
      uVar16 = func_0x04864680(auStack_578,&UNK_01410416);
      func_0x04863790(uVar16,auVar38);
      func_0x04863610(auVar38);
      func_0x04864bf0(auStack_558);
      func_0x04863610(auStack_578);
      auVar29 = (undefined1  [8])((long)auVar29 + 0x18);
    } while (auVar29 != (undefined1  [8])lVar17);
  }
  func_0x09af6740(auStack_558,0);
  uVar16 = func_0x04864680(&uStack_508,&UNK_0122c909);
  func_0x04863740(uVar16,auStack_558);
  func_0x04863610(auStack_558);
  auVar29 = auStack_438;
  if (auStack_438 != (undefined1  [8])0x0) {
    for (lVar17 = (long)uStack_430; auVar29 != (undefined1  [8])lVar17; lVar17 = lVar17 + -0x18) {
      if ((*(byte *)(lVar17 + -0x18) & 1) != 0) {
        thunk_FUN_0ee326a0(*(undefined8 *)(lVar17 + -8),
                           *(ulong *)(lVar17 + -0x18) & 0xfffffffffffffffe);
      }
    }
    uStack_430 = (byte *)auVar29;
    thunk_FUN_0ee326a0(auStack_438,auStack_428._0_8_ - (long)auStack_438);
  }
  bVar39 = (*pbStack_4e0 & 1) == 0;
  auStack_558 = (undefined1  [8])*(byte **)(pbStack_4e0 + 0x10);
  if (bVar39) {
    auStack_558 = (undefined1  [8])pbStack_4e8;
  }
  uStack_550 = (byte *)(ulong)(*pbStack_4e0 >> 1);
  if (!bVar39) {
    uStack_550 = (byte *)*(ulong *)(pbStack_4e0 + 8);
  }
  auStack_548._8_8_ = 0x18;
  auStack_548._0_8_ = &UNK_0133022f;
  func_0x049151c0(auStack_438,auStack_558,2,0x2f);
  uVar35 = uStack_38;
  if (0xfffffffffffffff7 < uStack_38) goto LAB_09affd5a;
  if (uStack_38 < 0x17) {
    auStack_578[0] = (char)uStack_38 * '\x02';
    plVar18 = (long *)(auStack_578 + 1);
    if (uStack_38 != 0) goto LAB_09aff786;
  }
  else {
    uVar37 = 0x1a;
    if ((uStack_38 | 7) != 0x17) {
      uVar37 = (uStack_38 | 7) + 1;
    }
    plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar37);
    if (plVar18 == (long *)0x0) {
      func_0x0eec74c0(uVar37,0);
    }
    auStack_578._8_8_ = uVar35;
    auStack_578._0_8_ = uVar37 | 1;
    plStack_568 = plVar18;
LAB_09aff786:
    func_0x0eee2f00(plVar18,auStack_438,uVar35);
  }
  *(char *)((long)plVar18 + uVar35) = '\0';
  func_0x09afaf30(&uStack_508,auStack_578);
  if ((auStack_578[0] & 1) != 0) {
    thunk_FUN_0ee326a0(plStack_568,auStack_578._0_8_ & 0xfffffffffffffffe);
  }
  func_0x04863610(&uStack_508);
  func_0x04863060(alStack_4b8,0);
  func_0x09afbcc0(alStack_4b8,&UNK_012a7802);
  _auStack_438 = (undefined1  [16])0x0;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = auStack_428._8_8_;
  auStack_428 = auVar11 << 0x40;
  lVar17 = 0;
  do {
    if (*(long *)(lVar17 + 0xf6e1138) != 0) {
      func_0x0c408b00(auStack_438,lVar17 + 0xf6e1138);
    }
    lVar17 = lVar17 + 0x10;
  } while (lVar17 != 0x400);
  func_0x04863060(&uStack_508,6);
  auVar38 = auStack_438;
  uVar37 = (long)uStack_430 - (long)auStack_438;
  uVar35 = auStack_428._0_8_ - (long)auStack_438;
  if (uVar35 < uVar37) {
    if ((ulong)((long)uVar37 >> 4) >> 0x3c != 0) goto LAB_09affd64;
    lVar17 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar37);
    if (lVar17 == 0) {
      func_0x0eec74c0(uVar37,0);
    }
    plVar18 = (long *)(lVar17 + uVar37);
    auVar29 = (undefined1  [8])(plVar18 + ((long)uVar37 >> 4) * -2);
    func_0x0eee2f00(auVar29,auVar38,uVar37);
    uStack_430 = (byte *)plVar18;
    auStack_438 = auVar29;
    auStack_428._0_8_ = plVar18;
    if (auVar38 != (undefined1  [8])0x0) {
      thunk_FUN_0ee326a0(auVar38,uVar35);
      plVar18 = (long *)uStack_430;
      auVar29 = auStack_438;
    }
    if (auVar29 != (undefined1  [8])plVar18) goto LAB_09aff918;
  }
  else {
    plVar18 = (long *)uStack_430;
    auVar29 = auStack_438;
    if (auStack_438 != (undefined1  [8])uStack_430) {
LAB_09aff918:
      auVar38 = (undefined1  [8])alStack_4d0;
      do {
        func_0x04863060(auVar38,0);
        lVar17 = *(long *)auVar29;
        if ((*(byte *)(lVar17 + 8) & 1) == 0) {
          plStack_568 = *(long **)(lVar17 + 0x18);
          auStack_578 = *(undefined1 (*) [16])(lVar17 + 8);
        }
        else {
          func_0x0412e5e0(auStack_578,*(undefined8 *)(lVar17 + 0x18),*(undefined8 *)(lVar17 + 0x10))
          ;
        }
        auStack_528 = (undefined1  [8])plStack_568;
        uStack_520 = auStack_578._8_8_;
        if ((auStack_578[0] & 1) == 0) {
          auStack_528 = (undefined1  [8])(auStack_578 + 1);
          uStack_520 = (ulong)(auStack_578[0] >> 1);
        }
        FUN_0470d9a0(auStack_558,&UNK_014829ab,0xc,0xd,auStack_528);
        func_0x048631d0(alStack_4a0,auStack_558);
        uVar16 = func_0x04864680(auVar38,&UNK_01410416);
        func_0x04863790(uVar16,alStack_4a0);
        func_0x04863610(alStack_4a0);
        if ((auStack_558[0] & 1) != 0) {
          thunk_FUN_0ee326a0(auStack_548._0_8_,(ulong)auStack_558 & 0xfffffffffffffffe);
        }
        if ((auStack_578[0] & 1) != 0) {
          thunk_FUN_0ee326a0(plStack_568,auStack_578._0_8_ & 0xfffffffffffffffe);
        }
        func_0x04864bf0(&uStack_508);
        func_0x04863610(auVar38);
        auVar29 = (undefined1  [8])((long)auVar29 + 0x10);
      } while (auVar29 != (undefined1  [8])plVar18);
    }
  }
  func_0x09af6740(&uStack_508,0);
  uVar16 = func_0x04864680(alStack_4b8,&UNK_0122c909);
  func_0x04863740(uVar16,&uStack_508);
  func_0x04863610(&uStack_508);
  auVar29 = auStack_438;
  if (auStack_438 != (undefined1  [8])0x0) {
    for (auVar38 = (undefined1  [8])uStack_430; auVar29 != auVar38;
        auVar38 = (undefined1  [8])((long)auVar38 + -0x10)) {
      plVar18 = *(long **)((long)auVar38 + -8);
      if (plVar18 != (long *)0x0) {
        LOCK();
        plVar19 = plVar18 + 1;
        lVar17 = *plVar19;
        *plVar19 = *plVar19 + -1;
        UNLOCK();
        if (lVar17 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
          func_0x0412c2d0(plVar18);
        }
      }
    }
    uStack_430 = (byte *)auVar29;
    thunk_FUN_0ee326a0(auStack_438,auStack_428._0_8_ - (long)auStack_438);
  }
  bVar39 = (*pbStack_4e0 & 1) != 0;
  auStack_558 = (undefined1  [8])pbStack_4e8;
  if (bVar39) {
    auStack_558 = (undefined1  [8])*(byte **)(pbStack_4e0 + 0x10);
  }
  uStack_550 = (byte *)(ulong)(*pbStack_4e0 >> 1);
  if (bVar39) {
    uStack_550 = (byte *)*(ulong *)(pbStack_4e0 + 8);
  }
  auStack_548._8_8_ = 0x1a;
  auStack_548._0_8_ = &UNK_01211ea6;
  func_0x049151c0(auStack_438,auStack_558,2,0x2f);
  if (uStack_38 < 0xfffffffffffffff8) {
    plVar18 = (long *)(auStack_578 + 1);
    if (uStack_38 < 0x17) {
      auStack_578[0] = (char)uStack_38 * '\x02';
      if (uStack_38 == 0) goto LAB_09affbe0;
    }
    else {
      uVar35 = 0x1a;
      if ((uStack_38 | 7) != 0x17) {
        uVar35 = (uStack_38 | 7) + 1;
      }
      plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar35);
      if (plVar18 == (long *)0x0) {
        func_0x0eec74c0(uVar35,0);
      }
      auStack_578._8_8_ = uStack_38;
      auStack_578._0_8_ = uVar35 | 1;
      plStack_568 = plVar18;
    }
    func_0x0eee2f00(plVar18,auStack_438,uStack_38);
LAB_09affbe0:
    *(char *)((long)plVar18 + uStack_38) = '\0';
    func_0x09afaf30(alStack_4b8,auStack_578);
    if ((auStack_578[0] & 1) != 0) {
      thunk_FUN_0ee326a0(plStack_568,auStack_578._0_8_ & 0xfffffffffffffffe);
    }
    func_0x04863610(alStack_4b8);
    return;
  }
  goto LAB_09affd5f;
}



/* ---- referenced strings ----
 * 0x13abf4c  minecraft
 * 0x14ea360          
 */
