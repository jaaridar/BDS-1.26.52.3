/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcc19f60 (ELF vaddr 0xcb19f60)
 * Label: caller-of-callee
 * Body:  [[0cc19f60, 0cc1a343] [0cc1a350, 0cc1a736] [0cc1a740, 0cc1a764] [0cc1a770, 0cc1aeb3] [0cc1aec0, 0cc1aee1] [0cc1aef0, 0cc1b288] [0cc1b290, 0cc1b2b3] [0cc1b2c0, 0cc1b493] [0cc1b4a0, 0cc1b4c4] [0cc1b4d0, 0cc1cc03] [0cc1ce4e, 0cc1ce55] [0cc1ceeb, 0cc1cf2d] [0cc1cfd8, 0cc1cffd] [0cc1d24c, 0cc1d295]]
 * Ghidra: FUN_0cc19f60
 */


/* WARNING: Removing unreachable block (ram,0x0cc1a303) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0cc19f60(undefined8 *param_1,long param_2,byte *param_3,byte *param_4,
                 undefined1 (*param_5) [16],long param_6)

{
  undefined8 *puVar1;
  byte *pbVar2;
  byte bVar3;
  ushort uVar4;
  undefined8 *puVar5;
  code *pcVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  uint7 uVar59;
  char cVar60;
  undefined1 uVar61;
  int iVar62;
  undefined8 *puVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  uint *puVar67;
  undefined1 *puVar68;
  byte *pbVar69;
  long *plVar70;
  uint uVar71;
  ulong uVar72;
  int *piVar73;
  int *piVar74;
  int *piVar75;
  undefined1 *puVar76;
  undefined1 auVar77 [8];
  ulong uVar78;
  byte *pbVar79;
  int *piVar80;
  int *piVar81;
  undefined1 *puVar82;
  long lVar83;
  ulong uVar84;
  int iVar85;
  long lVar86;
  int *piVar87;
  long lVar88;
  bool bVar89;
  byte bVar90;
  byte bVar91;
  byte bVar93;
  byte bVar95;
  byte bVar97;
  byte bVar99;
  byte bVar101;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  byte bVar106;
  byte bVar107;
  byte bVar108;
  byte bVar109;
  byte bVar110;
  byte bVar111;
  byte bVar112;
  byte bVar113;
  byte bVar114;
  byte bVar115;
  byte bVar116;
  byte bVar117;
  byte bVar118;
  byte bVar119;
  byte bVar120;
  byte bVar121;
  byte bVar122;
  byte bVar123;
  byte bVar124;
  byte bVar125;
  byte bVar126;
  byte bVar127;
  byte bVar128;
  byte bVar129;
  byte bVar130;
  byte bVar131;
  byte bVar132;
  byte bVar133;
  byte bVar134;
  byte bVar135;
  undefined1 auVar136 [16];
  undefined1 auStack_6b8 [2];
  undefined1 auStack_6b6 [14];
  ulong uStack_6a8;
  char cStack_6a0;
  byte bStack_688;
  uint7 uStack_687;
  undefined8 uStack_680;
  undefined1 *puStack_678;
  int *piStack_668;
  undefined8 uStack_660;
  undefined1 *puStack_658;
  byte *pbStack_650;
  byte *pbStack_648;
  byte bStack_640;
  undefined7 uStack_63f;
  undefined4 uStack_638;
  uint uStack_634;
  long lStack_630;
  long lStack_628;
  undefined4 uStack_61c;
  ulong uStack_618;
  byte *pbStack_610;
  undefined8 *puStack_608;
  char cStack_600;
  undefined1 auStack_5f8 [16];
  ulong uStack_5e8;
  undefined8 *puStack_5e0;
  undefined8 uStack_5d8;
  long lStack_5c8;
  undefined4 auStack_5c0 [5];
  int iStack_5ac;
  uint *puStack_5a8;
  long lStack_5a0;
  undefined1 auStack_598 [16];
  undefined1 auStack_588 [16];
  undefined1 auStack_578 [16];
  undefined1 auStack_568 [16];
  undefined1 auStack_558 [16];
  undefined4 uStack_548;
  undefined2 uStack_544;
  undefined1 auStack_540 [16];
  undefined1 auStack_530 [16];
  undefined1 auStack_520 [16];
  undefined4 uStack_510;
  undefined1 uStack_50c;
  undefined1 auStack_508 [16];
  undefined1 auStack_4f8 [16];
  undefined1 auStack_4e8 [16];
  undefined1 uStack_4d8;
  undefined1 uStack_4d4;
  undefined2 uStack_4d0;
  undefined1 uStack_4ce;
  undefined1 auStack_4c8 [16];
  undefined1 auStack_4b8 [16];
  undefined1 auStack_4a8 [16];
  undefined2 uStack_498;
  undefined1 auStack_490 [16];
  undefined1 auStack_480 [16];
  undefined4 uStack_470;
  undefined1 uStack_468;
  undefined1 auStack_460 [16];
  undefined1 auStack_450 [16];
  undefined1 auStack_440 [16];
  undefined1 auStack_430 [24];
  byte bStack_418;
  undefined7 uStack_417;
  undefined8 uStack_408;
  undefined1 auStack_400 [8];
  ulong uStack_3f8;
  ulong uStack_3f0;
  char cStack_3e8;
  int *piStack_3e0;
  long lStack_3d8;
  undefined1 (*pauStack_3d0) [16];
  undefined1 auStack_3c8 [2];
  undefined1 auStack_3c6 [7];
  undefined2 uStack_3bf;
  undefined1 uStack_3bd;
  undefined4 uStack_3bc;
  undefined1 auStack_3b8 [8];
  undefined8 *puStack_3b0;
  undefined1 auStack_3a8 [16];
  undefined1 auStack_398 [16];
  undefined8 *puStack_388;
  undefined8 uStack_380;
  undefined4 uStack_378;
  undefined8 uStack_370;
  byte *pbStack_2a0;
  ulong uStack_298;
  byte abStack_290 [384];
  undefined2 uStack_110;
  undefined1 uStack_10e;
  undefined8 uStack_10c;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  byte bStack_f0;
  undefined7 uStack_ef;
  undefined7 *puStack_e0;
  char cVar92;
  char cVar94;
  char cVar96;
  char cVar98;
  char cVar100;
  char cVar102;
  
  puStack_608 = (undefined8 *)(param_2 + 0xd0);
  pbStack_648 = param_4;
  lStack_628 = param_6;
  pbStack_610 = param_3;
  puStack_5e0 = param_1;
  pauStack_3d0 = param_5;
  if ((*(long *)(param_2 + 0xd0) == 0) &&
     (cVar60 = FUN_0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
     cVar60 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((*(char *)*puStack_608 == '\0') &&
     (cVar60 = FUN_0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e),
     cVar60 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  lVar83 = *(long *)(param_2 + 0xe0);
  lStack_3d8 = param_2;
  if ((*pbStack_648 & 1) == 0) {
    puStack_678 = *(undefined1 **)(pbStack_648 + 0x10);
    bStack_688 = (byte)*(undefined8 *)pbStack_648;
    uStack_687 = (uint7)((ulong)*(undefined8 *)pbStack_648 >> 8);
    uStack_680._0_4_ = (undefined4)*(undefined8 *)(pbStack_648 + 8);
    uStack_680._4_4_ = (uint)((ulong)*(undefined8 *)(pbStack_648 + 8) >> 0x20);
  }
  else {
    func_0x0412e5e0(&bStack_688,*(undefined8 *)(pbStack_648 + 0x10),*(undefined8 *)(pbStack_648 + 8)
                   );
  }
  uVar64 = **(undefined8 **)(lStack_628 + 0x10);
  auStack_400[0] = 0;
  cStack_3e8 = '\0';
  _auStack_6b8 = (undefined1  [16])0x0;
  uStack_6a8 = 0;
  auStack_398 = (undefined1  [16])0x0;
  auStack_3a8 = (undefined1  [16])0x0;
  _auStack_3b8 = (undefined1  [16])0x0;
  _auStack_3c8 = (undefined1  [16])0x0;
  puStack_388 = (undefined8 *)0x0;
  uStack_380 = 0x400;
  uStack_378 = 0;
  uStack_370 = 0;
  puVar63 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar63 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  *puVar63 = 0;
  puVar63[1] = 0x10000;
  *(undefined1 (*) [16])(puVar63 + 2) = (undefined1  [16])0x0;
  puVar63[4] = 0;
  puStack_3b0 = puVar63;
  auStack_3b8 = (undefined1  [8])puVar63;
  if ((DAT_0f7006f0 == '\0') && (iVar62 = func_0x04108328(&DAT_0f7006f0), iVar62 != 0)) {
    func_0x0cd1f780(0xf7006d8);
    func_0x0410844d(&DAT_0f7006f0);
  }
  plVar70 = (long *)(*(long *)(lVar83 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar83 + 0x20) - *(long *)(lVar83 + 0x18)) >> 3)
                            - 1U & _DAT_0f7006dc) * 8);
  do {
    lVar88 = *plVar70;
    if (lVar88 == -1) goto LAB_0cc1a1b0;
    plVar70 = (long *)(*(long *)(lVar83 + 0x30) + lVar88 * 0x18);
  } while (*(uint *)(*(long *)(lVar83 + 0x30) + 8 + lVar88 * 0x18) != _DAT_0f7006dc);
  if (plVar70 == *(long **)(lVar83 + 0x38)) {
LAB_0cc1a1b0:
    auStack_578 = (undefined1  [16])0x0;
    func_0x048b1dc0(auStack_578);
    lVar83 = auStack_578._0_8_;
    if (auStack_578._0_8_ == 0) goto LAB_0cc1a451;
LAB_0cc1a20a:
    if ((*(int *)(lVar83 + 0x60) != -0x36804aa) || (*(long *)(lVar83 + 0x68) == 0))
    goto LAB_0cc1a451;
    cVar60 = func_0x0b6c6a50(*(long *)(lVar83 + 0x68),pbStack_610,auStack_6b8,auStack_3c8,
                             &bStack_688,((uint)uVar64 & 2) >> 1,auStack_400);
    if (cVar60 == '\0') {
LAB_0cc1b68f:
      cStack_600 = '\0';
    }
    else {
      auStack_578 = ZEXT816(0x4050000014873f2) << 0x40;
      auStack_578._0_4_ = 0xf;
      piVar74 = (int *)((ulong)stack0xfffffffffffffc40 & 0xffffffffffff);
      uVar78 = (ulong)_auStack_3c8;
      uVar72 = uVar78 << 5;
      uVar84 = uVar72;
      piVar75 = piVar74;
      piVar80 = piVar74;
      if (uVar78 != 0) {
        do {
          uStack_618 = uVar84;
          piStack_668 = piVar75;
          if ((*(ushort *)((long)piVar80 + 0xe) & 0x1000) == 0) {
            if (*piVar80 == 0xf) {
LAB_0cc1a361:
              piVar87 = (int *)(*(ulong *)(piVar80 + 2) & 0xffffffffffff);
              if ((*(ushort *)((long)piVar80 + 0xe) & 0x1000) != 0) {
                piVar87 = piVar80;
              }
              uVar84 = uStack_618;
              piVar75 = piStack_668;
              if ((piVar87 == (int *)&UNK_014873f2) ||
                 (iVar62 = func_0x0eee3000(&UNK_014873f2,piVar87,0xf), uVar84 = uStack_618,
                 piVar75 = piStack_668, iVar62 == 0)) goto LAB_0cc1a3ad;
            }
          }
          else if (*(char *)((long)piVar80 + 0xd) == -2) goto LAB_0cc1a361;
          uVar72 = uVar72 - 0x20;
          piVar80 = piVar80 + 8;
          piVar75 = piStack_668;
          uVar84 = uStack_618;
        } while (uVar72 != 0);
LAB_0cc1adbe:
        func_0x057d2c10(1,3,0x11,&UNK_012e8ce0);
LAB_0cc1b5b5:
        func_0x0b6c80a0(auStack_578,auStack_3c8);
        if ((auStack_578[0] & 1) == 0) {
          puVar68 = auStack_578 + 1;
        }
        else {
          puVar68 = (undefined1 *)auStack_568._0_8_;
        }
        bStack_640 = (byte)puVar68;
        uStack_63f = (undefined7)((ulong)puVar68 >> 8);
        func_0x0ee34300(&bStack_f0,auStack_6b8);
        uStack_660 = puStack_e0;
        if ((bStack_f0 & 1) == 0) {
          uStack_660 = &uStack_ef;
        }
        func_0x0cb24e60(1,3,0x11,&UNK_011e3a21,&bStack_640,&uStack_660);
        if ((bStack_f0 & 1) != 0) {
          func_0x0412a280(puStack_e0,CONCAT71(uStack_ef,bStack_f0) & 0xfffffffffffffffe);
        }
        if ((auStack_578[0] & 1) != 0) {
          func_0x0412a280(auStack_568._0_8_,auStack_578._0_8_ & 0xfffffffffffffffe);
        }
        goto LAB_0cc1b68f;
      }
LAB_0cc1a3ad:
      if (piVar80 == (int *)((long)piVar75 + uVar84)) goto LAB_0cc1adbe;
      auStack_578._0_14_ = SUB1614((undefined1  [16])0x0,0);
      auStack_578._14_2_ = 0x405;
      uVar64 = auStack_578._8_8_;
      auVar136._8_8_ = 0;
      auVar136._0_8_ = auStack_578._8_8_ & 0xffff000000000000 | 0x14873f2;
      auStack_578 = auVar136 << 0x40;
      auStack_578._0_4_ = 0xf;
      if (uVar78 == 0) {
LAB_0cc1a7b2:
        if (piVar74 == (int *)((long)piVar75 + uVar84)) goto LAB_0cc1adde;
        uVar71 = piVar74[4];
        puVar67 = (uint *)(piVar74 + 4);
      }
      else {
        piVar80 = (int *)&UNK_014873f2;
        iVar62 = 0xf;
        if ((uVar64 & 0x1000000000000000) != 0) {
          iVar62 = 0xd;
          piVar80 = (int *)auStack_578;
        }
        lVar83 = uVar78 << 5;
        do {
          if ((*(ushort *)((long)piVar74 + 0xe) & 0x1000) == 0) {
            iVar85 = *piVar74;
          }
          else {
            iVar85 = 0xd - *(char *)((long)piVar74 + 0xd);
          }
          if (iVar62 == iVar85) {
            piVar87 = (int *)(*(ulong *)(piVar74 + 2) & 0xffffffffffff);
            if ((*(ushort *)((long)piVar74 + 0xe) & 0x1000) != 0) {
              piVar87 = piVar74;
            }
            if ((piVar80 == piVar87) ||
               (iVar85 = func_0x0eee3000(piVar80,piVar87,iVar62), iVar85 == 0)) goto LAB_0cc1a7b2;
          }
          piVar74 = piVar74 + 8;
          lVar83 = lVar83 + -0x20;
        } while (lVar83 != 0);
LAB_0cc1adde:
        _DAT_0f6b3d30 = (undefined1  [16])0x0;
        puVar67 = (uint *)&DAT_0f6b3d30;
        uVar71 = 0;
      }
      auStack_578._0_14_ = SUB1614((undefined1  [16])0x0,0);
      auStack_578._14_2_ = 0x405;
      uVar64 = auStack_578._8_8_;
      uVar84 = auStack_578._8_8_ & 0xffff000000000000 | 0x11ed181;
      auVar55._8_8_ = 0;
      auVar55._0_8_ = uVar84;
      auStack_578 = auVar55 << 0x40;
      auStack_578._0_4_ = 10;
      piVar74 = (int *)(*(ulong *)(puVar67 + 2) & 0xffffffffffff);
      piVar87 = (int *)((ulong)uVar71 << 5);
      piVar75 = piVar74;
      piVar80 = piVar87;
      if (uVar71 == 0) {
LAB_0cc1af33:
        uStack_61c = (undefined4)CONCAT71((int7)(uVar84 >> 8),1);
        if ((piVar75 != (int *)((long)piVar74 + (long)piVar80)) &&
           (lVar83 = func_0x0b5c3af0(puVar67,&UNK_011ed181), *(short *)(lVar83 + 0xe) != 3)) {
          func_0x05a37310(1,3,0x11,&UNK_014bf78d);
          uStack_61c = 0;
        }
      }
      else {
        piVar73 = (int *)&UNK_011ed181;
        iVar62 = 10;
        piStack_668 = piVar87;
        if ((uVar64 & 0x1000000000000000) != 0) {
          iVar62 = 0xd;
          piVar73 = (int *)auStack_578;
        }
        do {
          uVar4 = *(ushort *)((long)piVar75 + 0xe);
          uVar84 = (ulong)uVar4;
          if ((uVar4 & 0x1000) == 0) {
            iVar85 = *piVar75;
          }
          else {
            iVar85 = 0xd - *(char *)((long)piVar75 + 0xd);
          }
          if (iVar62 == iVar85) {
            piVar81 = (int *)(*(ulong *)(piVar75 + 2) & 0xffffffffffff);
            if ((uVar4 & 0x1000) != 0) {
              piVar81 = piVar75;
            }
            piVar80 = piStack_668;
            if ((piVar73 == piVar81) ||
               (uVar84 = func_0x0eee3000(piVar73,piVar81,iVar62), piVar80 = piStack_668,
               (int)uVar84 == 0)) goto LAB_0cc1af33;
          }
          piVar87 = piVar87 + -8;
          piVar75 = piVar75 + 8;
        } while (piVar87 != (int *)0x0);
        uStack_61c = (undefined4)CONCAT71((int7)(uVar84 >> 8),1);
      }
      auStack_578._0_14_ = SUB1614((undefined1  [16])0x0,0);
      auStack_578._14_2_ = 0x405;
      uVar64 = auStack_578._8_8_;
      auVar56._8_8_ = 0;
      auVar56._0_8_ = auStack_578._8_8_ & 0xffff000000000000 | 0x11c497f;
      auStack_578 = auVar56 << 0x40;
      auStack_578._0_4_ = 0xc;
      piVar74 = (int *)(*(ulong *)(puVar67 + 2) & 0xffffffffffff);
      piVar87 = (int *)((ulong)*puVar67 << 5);
      piVar75 = piVar87;
      piVar80 = piVar74;
      if ((ulong)*puVar67 == 0) {
LAB_0cc1b304:
        if (piVar80 == (int *)((long)piVar74 + (long)piVar75)) goto LAB_0cc1b56c;
        puVar67 = (uint *)func_0x0b5c3af0(puVar67,&UNK_011c497f);
        if (*(short *)((long)puVar67 + 0xe) == 4) {
          uVar71 = *puVar67;
          puStack_5a8 = puVar67;
          if (uVar71 != 0) {
            uVar84 = *(ulong *)(puVar67 + 2);
            puVar67 = (uint *)(uVar84 & 0xffffffffffff);
            iStack_5ac = 0xd;
            piStack_3e0 = (int *)&UNK_011ed181;
            do {
              if (*(short *)((long)puVar67 + 0xe) != 3) {
LAB_0cc1b59a:
                func_0x04cb7f40(1,3,0x11,&UNK_012b4d4b);
                goto LAB_0cc1b5b5;
              }
              auStack_578._0_14_ = SUB1614((undefined1  [16])0x0,0);
              auStack_578._14_2_ = 0x405;
              uVar64 = auStack_578._8_8_;
              auVar57._8_8_ = 0;
              auVar57._0_8_ = auStack_578._8_8_ & 0xffff000000000000 | 0x11ed181;
              auStack_578 = auVar57 << 0x40;
              auStack_578._0_4_ = 10;
              piVar80 = (int *)(*(ulong *)(puVar67 + 2) & 0xffffffffffff);
              lVar83 = (ulong)*puVar67 << 5;
              piVar75 = piVar80;
              if ((ulong)*puVar67 == 0) {
LAB_0cc1b52d:
                if (piVar75 != (int *)((long)piVar80 + lVar83)) {
                  lVar83 = func_0x0b5c3af0(puVar67,&UNK_011ed181);
                  if (*(short *)(lVar83 + 0xe) != 3) goto LAB_0cc1b59a;
                  uVar84 = *(ulong *)(puStack_5a8 + 2);
                  uVar71 = *puStack_5a8;
                }
              }
              else {
                piStack_668 = (int *)CONCAT44(piStack_668._4_4_,uVar71);
                uStack_618 = uVar84;
                lStack_5a0 = lVar83;
                iVar62 = iStack_5ac;
                piVar74 = (int *)auStack_578;
                if ((uVar64 & 0x1000000000000000) == 0) {
                  iVar62 = 10;
                  piVar74 = piStack_3e0;
                }
                do {
                  if ((*(ushort *)((long)piVar75 + 0xe) & 0x1000) == 0) {
                    iVar85 = *piVar75;
                  }
                  else {
                    iVar85 = 0xd - *(char *)((long)piVar75 + 0xd);
                  }
                  if (iVar62 == iVar85) {
                    piVar87 = (int *)(*(ulong *)(piVar75 + 2) & 0xffffffffffff);
                    if ((*(ushort *)((long)piVar75 + 0xe) & 0x1000) != 0) {
                      piVar87 = piVar75;
                    }
                    if ((piVar74 == piVar87) ||
                       (iVar85 = func_0x0eee3000(piVar74,piVar87,iVar62), iVar85 == 0)) {
                      lVar83 = lStack_5a0;
                      uVar84 = uStack_618;
                      uVar71 = (uint)piStack_668;
                      goto LAB_0cc1b52d;
                    }
                  }
                  lVar83 = lVar83 + -0x20;
                  piVar75 = piVar75 + 8;
                } while (lVar83 != 0);
                uVar84 = uStack_618;
                uVar71 = (uint)piStack_668;
              }
              puVar67 = puVar67 + 4;
            } while (puVar67 != (uint *)((ulong)uVar71 * 0x10 + (uVar84 & 0xffffffffffff)));
          }
          goto LAB_0cc1b56c;
        }
        func_0x05a37050(1,3,0x11,&UNK_01352834);
        goto LAB_0cc1b5b5;
      }
      piVar73 = (int *)&UNK_011c497f;
      iVar62 = 0xc;
      piStack_668 = piVar87;
      if ((uVar64 & 0x1000000000000000) != 0) {
        iVar62 = 0xd;
        piVar73 = (int *)auStack_578;
      }
      do {
        if ((*(ushort *)((long)piVar80 + 0xe) & 0x1000) == 0) {
          iVar85 = *piVar80;
        }
        else {
          iVar85 = 0xd - *(char *)((long)piVar80 + 0xd);
        }
        if (iVar62 == iVar85) {
          piVar81 = (int *)(*(ulong *)(piVar80 + 2) & 0xffffffffffff);
          if ((*(ushort *)((long)piVar80 + 0xe) & 0x1000) != 0) {
            piVar81 = piVar80;
          }
          piVar75 = piStack_668;
          if ((piVar73 == piVar81) ||
             (iVar85 = func_0x0eee3000(piVar73,piVar81,iVar62), piVar75 = piStack_668, iVar85 == 0))
          goto LAB_0cc1b304;
        }
        piVar87 = piVar87 + -8;
        piVar80 = piVar80 + 8;
      } while (piVar87 != (int *)0x0);
LAB_0cc1b56c:
      cStack_600 = '\x01';
      if ((char)uStack_61c == '\0') goto LAB_0cc1b5b5;
    }
    auStack_5f8._8_8_ = 0;
    auStack_5f8._0_8_ = _auStack_6b8;
    auVar136 = auStack_5f8;
    auStack_5f8._8_8_ = auStack_6b6._6_8_;
    if ((auStack_6b6._6_8_ & 0x80000000000000) != 0) {
      uVar84 = auStack_6b6._6_8_ & 0xff00ffffffffffff;
      lVar88 = *(long *)(uVar84 - 8);
      lVar83 = lVar88 + 9;
      auStack_5f8 = auVar136;
      plVar70 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar83,8);
      if (lVar83 != 0 && plVar70 == (long *)0x0) {
        func_0x0eec74c0(lVar83,8);
      }
      *plVar70 = lVar88;
      func_0x0eee2f00(plVar70 + 1,uVar84,lVar88);
      *(undefined1 *)((long)plVar70 + lVar88 + 8) = 0;
      auStack_5f8._8_8_ = (ulong)(plVar70 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_5e8 = 0;
    uVar84 = uStack_6a8;
    if ((uStack_6a8 & 0x80000000000000) != 0) {
      uVar84 = uStack_6a8 & 0xff00ffffffffffff;
      lVar88 = *(long *)(uVar84 - 8);
      lVar83 = lVar88 + 9;
      plVar70 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar83,8);
      if (lVar83 != 0 && plVar70 == (long *)0x0) {
        func_0x0eec74c0(lVar83,8);
      }
      *plVar70 = lVar88;
      func_0x0eee2f00(plVar70 + 1,uVar84,lVar88);
      *(undefined1 *)((long)plVar70 + lVar88 + 8) = 0;
      uVar84 = (ulong)(plVar70 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
  }
  else {
    lVar83 = plVar70[2];
    if (lVar83 != 0) goto LAB_0cc1a20a;
LAB_0cc1a451:
    cStack_600 = '\0';
    auStack_5f8 = (undefined1  [16])0x0;
    uStack_5e8 = 0;
    uVar84 = uStack_5e8;
  }
  uStack_5e8 = uVar84;
  func_0x04907660(auStack_3c8);
  if ((uStack_6a8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_6a8 & 0xff00ffffffffffff) - 8);
  }
  uStack_6a8 = 0;
  if ((auStack_6b6._6_8_ & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(auStack_6b6._6_8_ & 0xff00ffffffffffff) - 8);
  }
  if (cStack_3e8 == '\x01') {
    if ((uStack_3f0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_3f0 & 0xff00ffffffffffff) - 8);
    }
    uStack_3f0 = 0;
    if ((uStack_3f8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_3f8 & 0xff00ffffffffffff) - 8);
    }
    uStack_3f8 = 0;
  }
  if ((bStack_688 & 1) != 0) {
    func_0x0412a280(puStack_678,CONCAT71(uStack_687,bStack_688) & 0xfffffffffffffffe);
  }
  if (cStack_600 == '\0') {
    *puStack_5e0 = 0;
    goto joined_r0x0cc1cae7;
  }
  func_0x0485e1c0(&bStack_f0);
  func_0x04863060(auStack_598,0);
  cVar60 = func_0x0485e320(&bStack_f0,pbStack_610,auStack_598,0);
  if (cVar60 != '\0') {
    auStack_558 = (undefined1  [16])0x0;
    auStack_568 = (undefined1  [16])0x0;
    auStack_578 = (undefined1  [16])0x0;
    uStack_548 = 0x34;
    uStack_544 = 0xffff;
    auStack_540 = (undefined1  [16])0x0;
    auStack_530 = (undefined1  [16])0x0;
    auStack_520 = (undefined1  [16])0x0;
    uStack_510 = 0xffffffff;
    uStack_50c = 1;
    uStack_4d4 = 0;
    uStack_4d0 = 0;
    uStack_4ce = 0;
    auStack_508 = (undefined1  [16])0x0;
    auStack_4f8 = (undefined1  [16])0x0;
    auStack_4e8 = (undefined1  [16])0x0;
    uStack_4d8 = 0;
    auStack_4c8 = (undefined1  [16])0x0;
    auStack_4b8 = (undefined1  [16])0x0;
    auStack_4a8 = (undefined1  [16])0x0;
    uStack_498 = 6;
    auStack_480 = (undefined1  [16])0x0;
    auStack_490 = (undefined1  [16])0x0;
    uStack_470 = 0x3f800000;
    uStack_468 = 0;
    auStack_460 = (undefined1  [16])0x0;
    auStack_450 = (undefined1  [16])0x0;
    auStack_440 = (undefined1  [16])0x0;
    func_0x04863060(auStack_430,0);
    if (&auStack_460 != pauStack_3d0) {
      bVar3 = (*pauStack_3d0)[0];
      if ((auStack_460[0] & 1) == 0) {
        if ((bVar3 & 1) == 0) {
          auStack_450._0_8_ = *(undefined8 *)pauStack_3d0[1];
          auStack_460 = *pauStack_3d0;
        }
        else {
          func_0x04885070(&auStack_460,*(undefined8 *)pauStack_3d0[1],
                          *(undefined8 *)(*pauStack_3d0 + 8));
        }
      }
      else {
        bVar89 = (bVar3 & 1) != 0;
        puVar68 = *pauStack_3d0 + 1;
        if (bVar89) {
          puVar68 = *(undefined1 **)pauStack_3d0[1];
        }
        uVar84 = (ulong)(bVar3 >> 1);
        if (bVar89) {
          uVar84 = *(ulong *)(*pauStack_3d0 + 8);
        }
        func_0x04885120(&auStack_460,puVar68,uVar84);
      }
    }
    if ((*pbStack_648 & 1) == 0) {
      uVar84 = (ulong)(*pbStack_648 >> 1);
      pbVar79 = pbStack_648 + 1;
    }
    else {
      uVar84 = *(ulong *)(pbStack_648 + 8);
      pbVar79 = *(byte **)(pbStack_648 + 0x10);
    }
    func_0x0412f5e0(auStack_450 + 8,pbVar79,uVar84);
    uVar64 = func_0x048648e0(auStack_598,&UNK_013771cd);
    func_0x04863480(auStack_3c8,uVar64);
    cVar60 = func_0x04864260(auStack_3c8);
    if (cVar60 == '\0') {
      func_0x0b633750(auStack_578,auStack_3c8);
      func_0x04863610(auStack_3c8);
      func_0x04863740(auStack_430,auStack_598);
      cVar60 = func_0x0551ca70(auStack_5f8,&UNK_0f3f6c70);
      if (cVar60 != '\0') {
        uVar64 = func_0x048648e0(auStack_430,&UNK_014873f2);
        cVar60 = func_0x04864260(uVar64);
        if ((cVar60 == '\0') && (cVar60 = func_0x04864290(uVar64), cVar60 != '\0')) {
          uVar64 = func_0x04864680(auStack_430,&UNK_013771cd);
          cVar60 = func_0x04864260(uVar64);
          if (cVar60 == '\0') {
            func_0x0ee382a0(auStack_3c8,&UNK_0f3f6c70);
            func_0x048631d0(auStack_6b8,auStack_3c8);
            uVar64 = func_0x04864680(auStack_430,&UNK_013771cd);
            func_0x04863790(uVar64,auStack_6b8);
            func_0x04863610(auStack_6b8);
            if ((auStack_3c8[0] & 1) != 0) {
              func_0x0412a280(auStack_3b8,(ulong)_auStack_3c8 & 0xfffffffffffffffe);
            }
          }
          uVar64 = func_0x04864680(auStack_430,&UNK_014873f2);
          uVar64 = func_0x04864680(uVar64,&UNK_011ea907);
          cVar60 = func_0x04864260(uVar64);
          if (((cVar60 == '\0') && (cVar60 = func_0x04864290(uVar64), cVar60 != '\0')) &&
             (cVar60 = func_0x04865100(uVar64,&UNK_0146141a), cVar60 != '\0')) {
            _auStack_3c8 = (byte *)0x7365746174730c;
            func_0x0cc37760(uVar64,auStack_3c8);
            if ((auStack_3c8[0] & 1) != 0) {
              func_0x0412a280(auStack_3b8,(ulong)_auStack_3c8 & 0xfffffffffffffffe);
            }
            uVar65 = func_0x04864680(uVar64,&UNK_0146141a);
            uVar66 = func_0x04864680(uVar64,&UNK_011bc44b);
            func_0x0cc377e0(uVar65,uVar66);
            auVar136 = _auStack_3c8;
            stack0xfffffffffffffc39 = 0x69747265706f7270;
            auStack_3c8[0] = 0x14;
            uStack_3bf = 0x7365;
            uStack_3bc = auVar136._12_4_;
            uStack_3bd = 0;
            cVar60 = func_0x04864260(uVar64);
            if ((cVar60 == '\0') && (cVar60 = func_0x04865190(uVar64,auStack_3c8), cVar60 != '\0'))
            {
              func_0x048650e0(auStack_6b8,uVar64,auStack_3c8);
              func_0x04863610(auStack_6b8);
            }
            if ((auStack_3c8[0] & 1) != 0) {
              func_0x0412a280(auStack_3b8,(ulong)_auStack_3c8 & 0xfffffffffffffffe);
            }
          }
          uVar64 = func_0x04864680(auStack_430,&UNK_014873f2);
          cVar60 = func_0x04865100(uVar64,&UNK_011c497f);
          if (cVar60 != '\0') {
            uVar64 = func_0x04864680(uVar64,&UNK_011c497f);
            cVar60 = func_0x04864260(uVar64);
            if (((cVar60 == '\0') && (cVar60 = func_0x04864270(uVar64), cVar60 != '\0')) &&
               (iVar62 = func_0x048641f0(uVar64), iVar62 != 0)) {
              iVar85 = 0;
              do {
                uVar65 = func_0x04864540(uVar64,iVar85);
                cVar60 = func_0x04864260(uVar65);
                if ((cVar60 == '\0') && (cVar60 = func_0x04864290(uVar65), cVar60 != '\0')) {
                  cVar60 = func_0x04865100(uVar65,&UNK_0122361d);
                  if (cVar60 != '\0') {
                    uVar66 = func_0x04864680(uVar65,&UNK_0122361d);
                    cVar60 = func_0x04864260(uVar66);
                    if ((cVar60 == '\0') && (cVar60 = func_0x04865490(uVar66), cVar60 != '\0')) {
                      auVar45._14_2_ = 0;
                      auVar45._0_14_ = auStack_6b6;
                      _auStack_6b8 = auVar45 << 0x10;
                      func_0x04863cb0(auStack_3c8,uVar66,auStack_6b8);
                      if ((auStack_6b8[0] & 1) != 0) {
                        func_0x0412a280(uStack_6a8,_auStack_6b8 & 0xfffffffffffffffe);
                      }
                      _auStack_6b8 = ZEXT815(0x79747265706f7270) << 0x38;
                      stack0xfffffffffffff949 = 0x72705f6b636f6c62;
                      auStack_6b8[0] = 0x1c;
                      auStack_6b6[0xd] = 0;
                      bStack_688 = 0x16;
                      uStack_687 = 0x735f6b636f6c62;
                      uStack_680._0_4_ = 0x65746174;
                      uStack_680._4_4_ = uStack_680._4_4_ & 0xffffff00;
                      func_0x0edfaf90(auStack_3c8,auStack_6b8,&bStack_688,0xffffffff);
                      if ((bStack_688 & 1) != 0) {
                        func_0x0412a280(puStack_678,
                                        CONCAT71(uStack_687,bStack_688) & 0xfffffffffffffffe);
                      }
                      if ((auStack_6b8[0] & 1) != 0) {
                        func_0x0412a280(uStack_6a8,_auStack_6b8 & 0xfffffffffffffffe);
                      }
                      func_0x048631d0(auStack_6b8,auStack_3c8);
                      uVar66 = func_0x04864680(uVar65,&UNK_0122361d);
                      func_0x04863790(uVar66,auStack_6b8);
                      func_0x04863610(auStack_6b8);
                      if ((auStack_3c8[0] & 1) != 0) {
                        func_0x0412a280(auStack_3b8,(ulong)_auStack_3c8 & 0xfffffffffffffffe);
                      }
                    }
                  }
                  cVar60 = func_0x04865100(uVar65,&UNK_011ed181);
                  if (cVar60 != '\0') {
                    func_0x0cc37a30(uVar65);
                  }
                }
                iVar85 = iVar85 + 1;
              } while (iVar62 != iVar85);
            }
          }
          uVar64 = func_0x04864680(auStack_430,&UNK_014873f2);
          cVar60 = func_0x04865100(uVar64,&UNK_011ed181);
          if (cVar60 != '\0') {
            func_0x0cc37a30(uVar64);
          }
          uVar64 = func_0x04864680(auStack_430,&UNK_014873f2);
          cVar60 = func_0x04865100(uVar64,&UNK_01416889);
          if (cVar60 != '\0') {
            uVar64 = func_0x04864680(uVar64,&UNK_01416889);
            bStack_688 = 0x89;
            uStack_687 = 0x60000014168;
            auVar46[0xf] = 0;
            auVar46._0_15_ = stack0xfffffffffffffc39;
            _auStack_3c8 = auVar46 << 8;
            auVar47[0xf] = 0;
            auVar47._0_15_ = stack0xfffffffffffffc49;
            _auStack_3b8 = auVar47 << 8;
            func_0x0eeb79f0(auStack_6b8,&bStack_688);
            if ((uStack_687 & 0x800000000000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,(CONCAT71(uStack_687,bStack_688) & 0xff00ffffffffffff) - 8);
            }
            func_0x04865230(&bStack_688,uVar64);
            pbVar79 = (byte *)CONCAT71(uStack_687,bStack_688);
            pbVar69 = (byte *)CONCAT44(uStack_680._4_4_,(undefined4)uStack_680);
            if (pbVar79 != pbVar69) {
              do {
                bVar89 = (*pbVar79 & 1) != 0;
                unique0x10004029 = (undefined1 *)(ulong)(*pbVar79 >> 1);
                if (bVar89) {
                  unique0x10004031 = (undefined1 *)*(ulong *)(pbVar79 + 8);
                }
                _auStack_3c8 = *(byte **)(pbVar79 + 0x10);
                if (!bVar89) {
                  _auStack_3c8 = pbVar79 + 1;
                }
                auStack_3b8[0] = 1;
                uStack_660 = (undefined7 *)0x0;
                func_0x0eeb79f0(&bStack_640,&uStack_660);
                if (((ulong)uStack_660 & 0x80000000000000) != 0) {
                  (**(code **)(_DAT_0f5463b0 + 0x28))
                            (&DAT_0f5463b0,((ulong)uStack_660 & 0xff00ffffffffffff) - 8);
                }
                uVar65 = func_0x04864970(uVar64,pbVar79);
                cVar60 = func_0x04864290(uVar65);
                if (cVar60 == '\0') {
                  func_0x0c009550(1,3,6,&UNK_01282489);
                  func_0x0eeb81b0(&bStack_640);
                  break;
                }
                cVar60 = func_0x04865100(uVar65,&DAT_0135263b);
                if (cVar60 == '\0') {
                  cVar60 = func_0x04865100(uVar65,&UNK_0119ed3b);
                  if (cVar60 != '\0') {
                    func_0x0cc37d40(uVar65);
                  }
                }
                else {
                  func_0x0cc37910(uVar65);
                }
                func_0x0eeb81b0(&bStack_640);
                pbVar79 = pbVar79 + 0x18;
              } while (pbVar79 != pbVar69);
            }
            uVar59 = uStack_687;
            lVar83 = CONCAT71(uStack_687,bStack_688);
            if (lVar83 != 0) {
              lVar88 = CONCAT44(uStack_680._4_4_,(undefined4)uStack_680);
              lVar86 = lVar83;
              if (lVar83 != lVar88) {
                do {
                  if ((*(byte *)(lVar88 + -0x18) & 1) != 0) {
                    func_0x0412a280(*(undefined8 *)(lVar88 + -8),
                                    *(ulong *)(lVar88 + -0x18) & 0xfffffffffffffffe);
                  }
                  lVar88 = lVar88 + -0x18;
                } while (lVar88 != lVar83);
                lVar86 = CONCAT71(uStack_687,bStack_688);
              }
              uStack_680._0_4_ = (undefined4)lVar83;
              uStack_680._4_4_ = (uint)(uVar59 >> 0x18);
              func_0x0412a280(lVar86,(long)puStack_678 - lVar86);
            }
            func_0x0eeb81b0(auStack_6b8);
          }
        }
      }
      uVar64 = func_0x048648e0(auStack_430,&UNK_014873f2);
      cVar60 = func_0x04864260(uVar64);
      if (cVar60 == '\0') {
        cVar60 = func_0x04864290(uVar64);
        if (cVar60 != '\0') {
          puVar63 = (undefined8 *)func_0x048648e0(uVar64,&UNK_011ea907);
          cVar60 = func_0x04864260(puVar63);
          if (cVar60 == '\0') {
            cVar60 = func_0x04864290(puVar63);
            if (cVar60 != '\0') {
              uVar64 = func_0x048648e0(puVar63,&UNK_013762e9);
              auVar48._14_2_ = 0;
              auVar48._0_14_ = auStack_6b6;
              _auStack_6b8 = auVar48 << 0x10;
              func_0x04863cb0(auStack_3c8,uVar64,auStack_6b8);
              bVar89 = (auStack_3c8[0] & 1) != 0;
              auVar77 = (undefined1  [8])(auStack_3c8 + 1);
              if (bVar89) {
                auVar77 = auStack_3b8;
              }
              puVar68 = (undefined1 *)(ulong)(auStack_3c8[0] >> 1);
              if (bVar89) {
                puVar68 = stack0xfffffffffffffc40;
              }
              if ((undefined1 *)0xfffffffffffffff7 < puVar68) {
LAB_0cc1cbfa:
                uVar64 = FUN_04882e30();
                if ((bStack_688 & 1) != 0) {
                  func_0x0412a280(puStack_678,CONCAT71(uStack_687,bStack_688) & 0xfffffffffffffffe);
                }
                func_0x048ed2a0(auStack_6b8);
                func_0x0490a470(auStack_3c8);
                func_0x04863610(auStack_5c0);
                if (((ulong)uStack_660 & 1) != 0) {
                  func_0x0412a280(pbStack_650,(ulong)uStack_660 & 0xfffffffffffffffe);
                }
                func_0x0cc21880(auStack_578);
                func_0x04863610(auStack_598);
                func_0x0485e2d0(&bStack_f0);
                func_0x0ee386e0(&uStack_5e8);
                func_0x0ee386e0(auStack_5f8 + 8);
                func_0x0eee2d70(uVar64);
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              if ((undefined1 *)0x16 < puVar68) {
                pbVar79 = (byte *)0x1a;
                if (((ulong)puVar68 | 7) != 0x17) {
                  pbVar79 = (byte *)(((ulong)puVar68 | 7) + 1);
                }
                pbVar69 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,pbVar79);
                if (pbVar69 == (byte *)0x0) goto LAB_0cc1cb6d;
                goto LAB_0cc1b96d;
              }
              uStack_660 = (undefined7 *)CONCAT71(uStack_660._1_7_,(char)puVar68 * '\x02');
              pbVar69 = (byte *)((long)&uStack_660 + 1);
              if (puVar68 != (undefined1 *)0x0) goto LAB_0cc1b986;
              do {
                pbVar79 = (byte *)((long)&uStack_660 + 1);
                pbVar69[(long)puVar68] = 0;
                puVar68 = (undefined1 *)((ulong)uStack_660 >> 1 & 0x7f);
                pbStack_648 = pbVar79;
                if (((ulong)uStack_660 & 1) != 0) {
                  puVar68 = puStack_658;
                  pbVar79 = pbStack_650;
                }
                if (puVar68 != (undefined1 *)0x0) {
                  pbVar69 = pbVar79;
                  if ((undefined1 *)0x7 < puVar68) {
                    if (puVar68 < (undefined1 *)0x20) {
                      puVar76 = (undefined1 *)0x0;
                    }
                    else {
                      puVar76 = (undefined1 *)((ulong)puVar68 & 0xffffffffffffffe0);
                      puVar82 = (undefined1 *)0x0;
                      do {
                        pbVar69 = pbVar79 + (long)puVar82;
                        bVar14 = pbVar69[1];
                        bVar15 = pbVar69[2];
                        bVar16 = pbVar69[3];
                        bVar17 = pbVar69[4];
                        bVar18 = pbVar69[5];
                        bVar19 = pbVar69[6];
                        bVar20 = pbVar69[7];
                        bVar21 = pbVar69[8];
                        bVar22 = pbVar69[9];
                        bVar23 = pbVar69[10];
                        bVar24 = pbVar69[0xb];
                        bVar25 = pbVar69[0xc];
                        bVar26 = pbVar69[0xd];
                        bVar27 = pbVar69[0xe];
                        bVar28 = pbVar69[0xf];
                        pbVar2 = pbVar79 + 0x10 + (long)puVar82;
                        bVar29 = *pbVar2;
                        bVar30 = pbVar2[1];
                        bVar31 = pbVar2[2];
                        bVar32 = pbVar2[3];
                        bVar33 = pbVar2[4];
                        bVar34 = pbVar2[5];
                        bVar35 = pbVar2[6];
                        bVar36 = pbVar2[7];
                        bVar37 = pbVar2[8];
                        bVar38 = pbVar2[9];
                        bVar39 = pbVar2[10];
                        bVar40 = pbVar2[0xb];
                        bVar41 = pbVar2[0xc];
                        bVar42 = pbVar2[0xd];
                        bVar43 = pbVar2[0xe];
                        bVar44 = pbVar2[0xf];
                        bVar104 = *pbVar69 + DAT_014e86b0;
                        bVar105 = bVar14 + DAT_014e86b0._1_1_;
                        bVar106 = bVar15 + DAT_014e86b0._2_1_;
                        bVar107 = bVar16 + DAT_014e86b0._3_1_;
                        bVar108 = bVar17 + DAT_014e86b0._4_1_;
                        bVar109 = bVar18 + DAT_014e86b0._5_1_;
                        bVar110 = bVar19 + DAT_014e86b0._6_1_;
                        bVar111 = bVar20 + DAT_014e86b0._7_1_;
                        bVar112 = bVar21 + DAT_014e86b0._8_1_;
                        bVar113 = bVar22 + DAT_014e86b0._9_1_;
                        bVar114 = bVar23 + DAT_014e86b0._10_1_;
                        bVar115 = bVar24 + DAT_014e86b0._11_1_;
                        bVar116 = bVar25 + DAT_014e86b0._12_1_;
                        bVar117 = bVar26 + DAT_014e86b0._13_1_;
                        bVar118 = bVar27 + DAT_014e86b0._14_1_;
                        bVar119 = bVar28 + DAT_014e86b0._15_1_;
                        bVar120 = bVar29 + DAT_014e86b0;
                        bVar121 = bVar30 + DAT_014e86b0._1_1_;
                        bVar122 = bVar31 + DAT_014e86b0._2_1_;
                        bVar123 = bVar32 + DAT_014e86b0._3_1_;
                        bVar124 = bVar33 + DAT_014e86b0._4_1_;
                        bVar125 = bVar34 + DAT_014e86b0._5_1_;
                        bVar126 = bVar35 + DAT_014e86b0._6_1_;
                        bVar127 = bVar36 + DAT_014e86b0._7_1_;
                        bVar128 = bVar37 + DAT_014e86b0._8_1_;
                        bVar129 = bVar38 + DAT_014e86b0._9_1_;
                        bVar130 = bVar39 + DAT_014e86b0._10_1_;
                        bVar131 = bVar40 + DAT_014e86b0._11_1_;
                        bVar132 = bVar41 + DAT_014e86b0._12_1_;
                        bVar133 = bVar42 + DAT_014e86b0._13_1_;
                        bVar134 = bVar43 + DAT_014e86b0._14_1_;
                        bVar135 = bVar44 + DAT_014e86b0._15_1_;
                        bVar3 = DAT_014e4170;
                        bVar7 = DAT_014e4170._1_1_;
                        bVar8 = DAT_014e4170._2_1_;
                        bVar9 = DAT_014e4170._3_1_;
                        bVar10 = DAT_014e4170._4_1_;
                        bVar11 = DAT_014e4170._5_1_;
                        bVar12 = DAT_014e4170._6_1_;
                        bVar13 = DAT_014e4170._7_1_;
                        bVar90 = DAT_014e4170._8_1_;
                        bVar91 = DAT_014e4170._9_1_;
                        bVar93 = DAT_014e4170._10_1_;
                        bVar95 = DAT_014e4170._11_1_;
                        bVar97 = DAT_014e4170._12_1_;
                        bVar99 = DAT_014e4170._13_1_;
                        bVar101 = DAT_014e4170._14_1_;
                        bVar103 = DAT_014e4170._15_1_;
                        pbVar2 = pbVar79 + (long)puVar82;
                        *pbVar2 = (-((byte)((bVar3 < bVar104) * bVar3 | (bVar3 >= bVar104) * bVar104
                                           ) == bVar104) & DAT_014ead50) + *pbVar69;
                        pbVar2[1] = (-((byte)((bVar7 < bVar105) * bVar7 |
                                             (bVar7 >= bVar105) * bVar105) == bVar105) &
                                    UNK_014ead51) + bVar14;
                        pbVar2[2] = (-((byte)((bVar8 < bVar106) * bVar8 |
                                             (bVar8 >= bVar106) * bVar106) == bVar106) &
                                    UNK_014ead52) + bVar15;
                        pbVar2[3] = (-((byte)((bVar9 < bVar107) * bVar9 |
                                             (bVar9 >= bVar107) * bVar107) == bVar107) &
                                    UNK_014ead53) + bVar16;
                        pbVar2[4] = (-((byte)((bVar10 < bVar108) * bVar10 |
                                             (bVar10 >= bVar108) * bVar108) == bVar108) &
                                    UNK_014ead54) + bVar17;
                        pbVar2[5] = (-((byte)((bVar11 < bVar109) * bVar11 |
                                             (bVar11 >= bVar109) * bVar109) == bVar109) &
                                    UNK_014ead55) + bVar18;
                        pbVar2[6] = (-((byte)((bVar12 < bVar110) * bVar12 |
                                             (bVar12 >= bVar110) * bVar110) == bVar110) &
                                    UNK_014ead56) + bVar19;
                        pbVar2[7] = (-((byte)((bVar13 < bVar111) * bVar13 |
                                             (bVar13 >= bVar111) * bVar111) == bVar111) &
                                    UNK_014ead57) + bVar20;
                        pbVar2[8] = (-((byte)((bVar90 < bVar112) * bVar90 |
                                             (bVar90 >= bVar112) * bVar112) == bVar112) &
                                    UNK_014ead58) + bVar21;
                        pbVar2[9] = (-((byte)((bVar91 < bVar113) * bVar91 |
                                             (bVar91 >= bVar113) * bVar113) == bVar113) &
                                    UNK_014ead59) + bVar22;
                        pbVar2[10] = (-((byte)((bVar93 < bVar114) * bVar93 |
                                              (bVar93 >= bVar114) * bVar114) == bVar114) &
                                     UNK_014ead5a) + bVar23;
                        pbVar2[0xb] = (-((byte)((bVar95 < bVar115) * bVar95 |
                                               (bVar95 >= bVar115) * bVar115) == bVar115) &
                                      UNK_014ead5b) + bVar24;
                        pbVar2[0xc] = (-((byte)((bVar97 < bVar116) * bVar97 |
                                               (bVar97 >= bVar116) * bVar116) == bVar116) &
                                      UNK_014ead5c) + bVar25;
                        pbVar2[0xd] = (-((byte)((bVar99 < bVar117) * bVar99 |
                                               (bVar99 >= bVar117) * bVar117) == bVar117) &
                                      UNK_014ead5d) + bVar26;
                        pbVar2[0xe] = (-((byte)((bVar101 < bVar118) * bVar101 |
                                               (bVar101 >= bVar118) * bVar118) == bVar118) &
                                      UNK_014ead5e) + bVar27;
                        pbVar2[0xf] = (-((byte)((bVar103 < bVar119) * bVar103 |
                                               (bVar103 >= bVar119) * bVar119) == bVar119) &
                                      UNK_014ead5f) + bVar28;
                        pbVar69 = pbVar79 + 0x10 + (long)puVar82;
                        *pbVar69 = (-((byte)((bVar3 < bVar120) * bVar3 |
                                            (bVar3 >= bVar120) * bVar120) == bVar120) & DAT_014ead50
                                   ) + bVar29;
                        pbVar69[1] = (-((byte)((bVar7 < bVar121) * bVar7 |
                                              (bVar7 >= bVar121) * bVar121) == bVar121) &
                                     UNK_014ead51) + bVar30;
                        pbVar69[2] = (-((byte)((bVar8 < bVar122) * bVar8 |
                                              (bVar8 >= bVar122) * bVar122) == bVar122) &
                                     UNK_014ead52) + bVar31;
                        pbVar69[3] = (-((byte)((bVar9 < bVar123) * bVar9 |
                                              (bVar9 >= bVar123) * bVar123) == bVar123) &
                                     UNK_014ead53) + bVar32;
                        pbVar69[4] = (-((byte)((bVar10 < bVar124) * bVar10 |
                                              (bVar10 >= bVar124) * bVar124) == bVar124) &
                                     UNK_014ead54) + bVar33;
                        pbVar69[5] = (-((byte)((bVar11 < bVar125) * bVar11 |
                                              (bVar11 >= bVar125) * bVar125) == bVar125) &
                                     UNK_014ead55) + bVar34;
                        pbVar69[6] = (-((byte)((bVar12 < bVar126) * bVar12 |
                                              (bVar12 >= bVar126) * bVar126) == bVar126) &
                                     UNK_014ead56) + bVar35;
                        pbVar69[7] = (-((byte)((bVar13 < bVar127) * bVar13 |
                                              (bVar13 >= bVar127) * bVar127) == bVar127) &
                                     UNK_014ead57) + bVar36;
                        pbVar69[8] = (-((byte)((bVar90 < bVar128) * bVar90 |
                                              (bVar90 >= bVar128) * bVar128) == bVar128) &
                                     UNK_014ead58) + bVar37;
                        pbVar69[9] = (-((byte)((bVar91 < bVar129) * bVar91 |
                                              (bVar91 >= bVar129) * bVar129) == bVar129) &
                                     UNK_014ead59) + bVar38;
                        pbVar69[10] = (-((byte)((bVar93 < bVar130) * bVar93 |
                                               (bVar93 >= bVar130) * bVar130) == bVar130) &
                                      UNK_014ead5a) + bVar39;
                        pbVar69[0xb] = (-((byte)((bVar95 < bVar131) * bVar95 |
                                                (bVar95 >= bVar131) * bVar131) == bVar131) &
                                       UNK_014ead5b) + bVar40;
                        pbVar69[0xc] = (-((byte)((bVar97 < bVar132) * bVar97 |
                                                (bVar97 >= bVar132) * bVar132) == bVar132) &
                                       UNK_014ead5c) + bVar41;
                        pbVar69[0xd] = (-((byte)((bVar99 < bVar133) * bVar99 |
                                                (bVar99 >= bVar133) * bVar133) == bVar133) &
                                       UNK_014ead5d) + bVar42;
                        pbVar69[0xe] = (-((byte)((bVar101 < bVar134) * bVar101 |
                                                (bVar101 >= bVar134) * bVar134) == bVar134) &
                                       UNK_014ead5e) + bVar43;
                        pbVar69[0xf] = (-((byte)((bVar103 < bVar135) * bVar103 |
                                                (bVar103 >= bVar135) * bVar135) == bVar135) &
                                       UNK_014ead5f) + bVar44;
                        puVar82 = puVar82 + 0x20;
                      } while (puVar76 != puVar82);
                      if (puVar68 == puVar76) goto LAB_0cc1baff;
                      if (((ulong)puVar68 & 0x18) == 0) {
                        pbVar69 = puVar76 + (long)pbVar79;
                        goto LAB_0cc1badf;
                      }
                    }
                    puVar82 = (undefined1 *)((ulong)puVar68 & 0xfffffffffffffff8);
                    pbVar69 = pbVar79 + (long)puVar82;
                    do {
                      uVar64 = *(undefined8 *)(pbVar79 + (long)puVar76);
                      bVar90 = (char)uVar64 + DAT_014e9110;
                      cVar92 = (char)((ulong)uVar64 >> 8);
                      bVar91 = cVar92 + DAT_014e9110._1_1_;
                      cVar94 = (char)((ulong)uVar64 >> 0x10);
                      bVar93 = cVar94 + DAT_014e9110._2_1_;
                      cVar96 = (char)((ulong)uVar64 >> 0x18);
                      bVar95 = cVar96 + DAT_014e9110._3_1_;
                      cVar98 = (char)((ulong)uVar64 >> 0x20);
                      bVar97 = cVar98 + DAT_014e9110._4_1_;
                      cVar100 = (char)((ulong)uVar64 >> 0x28);
                      bVar99 = cVar100 + DAT_014e9110._5_1_;
                      cVar102 = (char)((ulong)uVar64 >> 0x30);
                      cVar60 = (char)((ulong)uVar64 >> 0x38);
                      bVar101 = cVar102 + DAT_014e9110._6_1_;
                      bVar103 = cVar60 + DAT_014e9110._7_1_;
                      bVar3 = DAT_014e8cb0;
                      bVar7 = DAT_014e8cb0._1_1_;
                      bVar8 = DAT_014e8cb0._2_1_;
                      bVar9 = DAT_014e8cb0._3_1_;
                      bVar10 = DAT_014e8cb0._4_1_;
                      bVar11 = DAT_014e8cb0._5_1_;
                      bVar12 = DAT_014e8cb0._6_1_;
                      bVar13 = DAT_014e8cb0._7_1_;
                      *(ulong *)(pbVar79 + (long)puVar76) =
                           CONCAT17((~-((byte)((bVar103 < bVar13) * bVar13 |
                                              (bVar103 >= bVar13) * bVar103) == bVar103) &
                                    UNK_014ea367) + cVar60,
                                    CONCAT16((~-((byte)((bVar101 < bVar12) * bVar12 |
                                                       (bVar101 >= bVar12) * bVar101) == bVar101) &
                                             UNK_014ea366) + cVar102,
                                             CONCAT15((~-((byte)((bVar99 < bVar11) * bVar11 |
                                                                (bVar99 >= bVar11) * bVar99) ==
                                                         bVar99) & UNK_014ea365) + cVar100,
                                                      CONCAT14((~-((byte)((bVar97 < bVar10) * bVar10
                                                                         | (bVar97 >= bVar10) *
                                                                           bVar97) == bVar97) &
                                                               UNK_014ea364) + cVar98,
                                                               CONCAT13((~-((byte)((bVar95 < bVar9)
                                                                                   * bVar9 |
                                                                                  (bVar95 >= bVar9)
                                                                                  * bVar95) ==
                                                                           bVar95) & UNK_014ea363) +
                                                                        cVar96,CONCAT12((~-((byte)((
                                                  bVar93 < bVar8) * bVar8 |
                                                  (bVar93 >= bVar8) * bVar93) == bVar93) &
                                                  UNK_014ea362) + cVar94,
                                                  CONCAT11((~-((byte)((bVar91 < bVar7) * bVar7 |
                                                                     (bVar91 >= bVar7) * bVar91) ==
                                                              bVar91) & UNK_014ea361) + cVar92,
                                                           (~-((byte)((bVar90 < bVar3) * bVar3 |
                                                                     (bVar90 >= bVar3) * bVar90) ==
                                                              bVar90) & DAT_014ea360) + (char)uVar64
                                                          )))))));
                      puVar76 = puVar76 + 8;
                    } while (puVar82 != puVar76);
                    if (puVar68 == puVar82) goto LAB_0cc1baff;
                  }
LAB_0cc1badf:
                  do {
                    bVar3 = *pbVar69;
                    bVar7 = bVar3 + 0x20;
                    if (0x19 < (byte)(bVar3 + 0xbf)) {
                      bVar7 = bVar3;
                    }
                    *pbVar69 = bVar7;
                    pbVar69 = pbVar69 + 1;
                  } while (pbVar69 != pbVar79 + (long)puVar68);
                }
LAB_0cc1baff:
                if ((auStack_3c8[0] & 1) != 0) {
                  func_0x0412a280(auStack_3b8,(ulong)_auStack_3c8 & 0xfffffffffffffffe);
                }
                if ((auStack_6b8[0] & 1) != 0) {
                  func_0x0412a280(uStack_6a8,_auStack_6b8 & 0xfffffffffffffffe);
                }
                cVar60 = func_0x0b5f94a0(&uStack_660,6,*(undefined1 *)(lStack_628 + 0x49),0);
                if (cVar60 == '\0') {
                  if (((ulong)uStack_660 & 1) != 0) {
                    pbStack_648 = pbStack_650;
                  }
                  _auStack_3c8 = pbStack_648;
                  func_0x07230420(1,3,6,&UNK_01423c08,auStack_3c8);
                  goto LAB_0cc1c66a;
                }
                if ((auStack_530[8] & 1) == 0) {
                  if (((ulong)uStack_660 & 1) == 0) {
                    auStack_530._8_8_ = uStack_660;
                    auStack_520._8_8_ = pbStack_650;
                    auStack_520._0_8_ = puStack_658;
                  }
                  else {
                    func_0x04885070(auStack_530 + 8,pbStack_650,puStack_658);
                  }
                }
                else {
                  puVar68 = (undefined1 *)((ulong)uStack_660 >> 1 & 0x7f);
                  pbVar79 = (byte *)((long)&uStack_660 + 1);
                  if (((ulong)uStack_660 & 1) != 0) {
                    puVar68 = puStack_658;
                    pbVar79 = pbStack_650;
                  }
                  func_0x04885120(auStack_530 + 8,pbVar79,puVar68);
                }
                uVar64 = func_0x048648e0(puVar63,&UNK_011ff877);
                cVar60 = func_0x04864260(uVar64);
                if (cVar60 == '\0') {
                  uVar65 = func_0x048648e0(uVar64,&UNK_01391889);
                  func_0x04160690(auStack_6b8,&UNK_01254d89);
                  func_0x04863cb0(auStack_3c8,uVar65,auStack_6b8);
                  uVar61 = func_0x0cc13480(auStack_3c8,&uStack_660);
                  uStack_498 = CONCAT11(uStack_498._1_1_,uVar61);
                  if ((auStack_3c8[0] & 1) != 0) {
                    func_0x0412a280(auStack_3b8,(ulong)_auStack_3c8 & 0xfffffffffffffffe);
                  }
                  if ((auStack_6b8[0] & 1) != 0) {
                    func_0x0412a280(uStack_6a8,_auStack_6b8 & 0xfffffffffffffffe);
                  }
                }
                else {
                  uStack_498 = CONCAT11(uStack_498._1_1_,5);
                }
                cVar60 = func_0x04864260(uVar64);
                if (cVar60 == '\0') {
                  uVar65 = func_0x048648e0(uVar64,&UNK_011d5876);
                  func_0x04160690(&bStack_418,&UNK_01254d89);
                  func_0x04863cb0(auStack_3c8,uVar65,&bStack_418);
                }
                else {
                  func_0x04160690(auStack_3c8,&UNK_01254d89);
                }
                if ((auStack_4b8[8] & 1) != 0) {
                  func_0x0412a280(auStack_4a8._8_8_,auStack_4b8._8_8_ & 0xfffffffffffffffe);
                }
                auStack_4b8._8_8_ = _auStack_3c8;
                auStack_4a8._8_8_ = auStack_3b8;
                auStack_4a8._0_8_ = stack0xfffffffffffffc40;
                auVar49._14_2_ = 0;
                auVar49._0_14_ = _auStack_3c6;
                _auStack_3c8 = auVar49 << 0x10;
                if ((cVar60 == '\0') && ((bStack_418 & 1) != 0)) {
                  func_0x0412a280(uStack_408,CONCAT71(uStack_417,bStack_418) & 0xfffffffffffffffe);
                }
                if ((auStack_4b8[8] & 1) == 0) {
                  uVar84 = (ulong)(auStack_4b8[8] >> 1);
                }
                else {
                  uVar84 = auStack_4a8._0_8_;
                }
                if (uVar84 != 0) {
                  if ((auStack_4b8[8] & 1) == 0) {
                    puVar68 = auStack_4b8 + 9;
                  }
                  else {
                    puVar68 = (undefined1 *)auStack_4a8._8_8_;
                  }
                  func_0x0eeb8150(auStack_3c8,puVar68);
                  cVar60 = func_0x0b5f94a0(auStack_4b8 + 8,6,1,0);
                  func_0x0eeb81b0(auStack_3c8);
                  if (cVar60 == '\0') goto LAB_0cc1c66a;
                }
                cVar60 = func_0x04864260(uVar64);
                if (cVar60 == '\0') {
                  uVar64 = func_0x048648e0(uVar64,&UNK_0148af92);
                  uVar61 = func_0x04863ff0(uVar64,0);
                }
                else {
                  uVar61 = 0;
                }
                uStack_498 = CONCAT11(uVar61,(undefined1)uStack_498);
                uVar64 = func_0x048648e0(puVar63,&UNK_011bc44b);
                cVar60 = func_0x04864260(uVar64);
                if (cVar60 == '\0') {
                  cVar60 = func_0x04864290(uVar64);
                  if (cVar60 == '\0') {
                    func_0x05352ca0(1,3,6,&UNK_0133784f);
                    goto LAB_0cc1c66a;
                  }
                  func_0x04865230(auStack_6b8,uVar64);
                  uVar65 = auStack_6b6._6_8_;
                  for (lVar83 = _auStack_6b8; lVar83 != uVar65; lVar83 = lVar83 + 0x18) {
                    _auStack_3c8 = (undefined1  [16])0x0;
                    _auStack_3b8 = (unkuint9)1 << 0x40;
                    auVar50._8_8_ = 0;
                    auVar50._0_8_ = auStack_3a8._8_8_;
                    auStack_3a8 = auVar50 << 0x40;
                    uVar66 = func_0x04864990(uVar64,lVar83);
                    cVar60 = func_0x0cb8b070(auStack_3c8,lVar83,uVar66);
                    if (cVar60 == '\0') {
                      func_0x07174920(1,3,6,&UNK_01282460);
                    }
                    else {
                      uVar66 = auStack_4c8._8_8_;
                      if ((ulong)auStack_4c8._8_8_ < (ulong)auStack_4b8._0_8_) {
                        *(undefined1 (*) [16])auStack_4c8._8_8_ = (undefined1  [16])0x0;
                        *(undefined8 *)*(undefined1 (*) [16])(auStack_4c8._8_8_ + 0x10) = 0;
                        (*(undefined1 (*) [16])(auStack_4c8._8_8_ + 0x10))[8] = 1;
                        *(undefined8 *)*(undefined1 (*) [16])(auStack_4c8._8_8_ + 0x20) = 0;
                        func_0x0cc0a050(auStack_4c8._8_8_,auStack_3c8);
                        puVar68 = *(undefined1 (*) [16])(uVar66 + 0x20) + 8;
                      }
                      else {
                        puVar68 = (undefined1 *)func_0x0cc84950(auStack_4c8,auStack_3c8);
                      }
                      auStack_4c8._8_8_ = puVar68;
                    }
                    uVar66 = auStack_3a8._0_8_;
                    auVar51._8_8_ = 0;
                    auVar51._0_8_ = auStack_3a8._8_8_;
                    auStack_3a8 = auVar51 << 0x40;
                    if ((long *)uVar66 != (long *)0x0) {
                      (**(code **)(*(long *)uVar66 + 8))();
                    }
                    if ((auStack_3c8[0] & 1) != 0) {
                      func_0x0412a280(auStack_3b8,(ulong)_auStack_3c8 & 0xfffffffffffffffe);
                    }
                    if (cVar60 == '\0') {
                      func_0x04886070(auStack_6b8);
                      goto LAB_0cc1c66a;
                    }
                  }
                  func_0x04886070(auStack_6b8);
                }
                pbVar69 = (byte *)func_0x048648e0(puVar63,&UNK_0124f693);
                cVar60 = func_0x04864260(pbVar69);
                if (cVar60 != '\0') goto LAB_0cc1c65c;
                uVar64 = func_0x0cc0f8b0(puStack_608);
                lVar83 = func_0x0cb9c130(uVar64);
                pbVar79 = pbStack_610;
                if (lVar83 != 0) {
                  pbStack_610 = pbVar69;
                  for (puVar5 = *(undefined8 **)(lVar83 + 0x10); puVar5 != (undefined8 *)0x0;
                      puVar5 = (undefined8 *)*puVar5) {
                    puVar1 = puVar5 + 2;
                    cVar60 = func_0x04865190(pbVar69,puVar1);
                    auVar136 = _auStack_6b8;
                    if (cVar60 != '\0') {
                      auVar52[0xf] = 0;
                      auVar52._0_15_ = stack0xfffffffffffff949;
                      _auStack_6b8 = auVar52 << 8;
                      cStack_6a0 = '\0';
                      if (*(char *)(puVar5 + 0xc) == '\x01') {
                        auStack_6b6._6_8_ = auVar136._8_8_;
                        _auStack_6b8 = puVar5[9];
                        func_0x0ee38730(auStack_6b6 + 6,puVar5 + 10);
                        func_0x0ee38730(&uStack_6a8,puVar5 + 0xb);
                        cStack_6a0 = '\x01';
                        cVar60 = func_0x04fa7a10(auStack_5f8,auStack_6b8);
                        auVar58 = auStack_588;
                        if (cVar60 != '\0') goto LAB_0cc1c0c1;
LAB_0cc1c23b:
                        puVar63 = (undefined8 *)0x1;
                        auStack_588 = auVar58;
                      }
                      else {
LAB_0cc1c0c1:
                        lVar83 = puVar5[7];
                        bStack_640 = 0x16;
                        uStack_63f = 0x74206b636f6c62;
                        uStack_638 = 0x74696172;
                        uStack_634 = uStack_634 & 0xffffff00;
                        auStack_5c0[0] = 6;
                        auVar58 = auStack_588;
                        if (puVar5[6] == lVar83) goto LAB_0cc1c23b;
                        puVar63 = puVar5 + 9;
                        lVar88 = puVar5[6];
                        do {
                          auStack_588._8_8_ = auVar58._8_8_;
                          lVar86 = lVar88 + 8;
                          stack0xfffffffffffffc40 = &bStack_640;
                          _auStack_3c8 = (byte *)auStack_5c0;
                          puStack_3b0 = puVar63;
                          auStack_3b8 = (undefined1  [8])puVar1;
                          auStack_3a8._8_8_ = auStack_5c0;
                          auStack_3a8._0_8_ = lStack_628;
                          auStack_398._8_8_ = puVar1;
                          auStack_398._0_8_ = &bStack_640;
                          auStack_588._1_7_ = auVar58._1_7_;
                          auStack_588[0] = 1;
                          bStack_688 = (byte)lStack_628;
                          uStack_687 = (uint7)((ulong)lStack_628 >> 8);
                          uStack_680 = auStack_588;
                          puStack_678 = auStack_3c8;
                          puStack_388 = puVar63;
                          if ((ulong)*(uint *)(lVar88 + 4) == 0xffffffff) {
                            func_0x04931450();
                            goto LAB_0cc1cbfa;
                          }
                          uStack_5d8 = &bStack_688;
                          (**(code **)(&UNK_0f3f96b8 + (ulong)*(uint *)(lVar88 + 4) * 8))
                                    (&uStack_5d8,lVar88);
                          auVar58._8_8_ = auStack_588._8_8_;
                          auVar58._0_8_ = auStack_588._0_8_;
                          cVar60 = auStack_588[0];
                        } while ((auStack_588[0] == '\x01') && (lVar88 = lVar86, lVar86 != lVar83));
                        if ((bStack_640 & 1) != 0) {
                          func_0x0412a280(lStack_630,
                                          CONCAT71(uStack_63f,bStack_640) & 0xfffffffffffffffe);
                          auVar58._8_8_ = auStack_588._8_8_;
                          auVar58._0_8_ = auStack_588._0_8_;
                          pbVar69 = pbStack_610;
                          if (cVar60 == '\0') goto LAB_0cc1c203;
                          goto LAB_0cc1c23b;
                        }
                        pbVar69 = pbStack_610;
                        if (auStack_588[0] != '\0') goto LAB_0cc1c23b;
LAB_0cc1c203:
                        puVar63 = (undefined8 *)0x0;
                        pbVar69 = pbStack_610;
                      }
                      if (cStack_6a0 == '\x01') {
                        func_0x0ee386e0(&uStack_6a8);
                        func_0x0ee386e0(auStack_6b6 + 6);
                      }
                      if ((char)puVar63 == '\0') goto LAB_0cc1c66a;
                    }
                    pbVar79 = pbStack_610;
                  }
                }
                pbStack_610 = pbVar79;
                func_0x04863060(auStack_5c0,0);
                func_0x04863060(auStack_3c8,7);
                uVar64 = func_0x04864680(auStack_5c0,&UNK_0124f693);
                auVar77 = (undefined1  [8])auStack_3c8;
                func_0x04863790(uVar64,auVar77);
                func_0x04863610(auVar77);
                uVar64 = func_0x04864680(auStack_5c0,&UNK_0124f693);
                func_0x04863740(uVar64,pbVar69);
                register0x00000000 = (undefined1 *)func_0x0cc0f8b0(puStack_608);
                auStack_3b8._0_4_ = 0xffffffff;
                puStack_3b0 = (undefined8 *)(auStack_3a8 + 8);
                auStack_3a8._0_8_ = 0x800000000;
                pbStack_2a0 = abStack_290;
                uStack_298 = 0x800000000;
                uStack_110 = 0xfbf8;
                uStack_10e = 1;
                uStack_10c = 0xffffffff00000000;
                uStack_100 = 0;
                uStack_f8 = 0;
                _auStack_3c8 = &UNK_0f4e3998;
                func_0x04867c60(auStack_6b8);
                func_0x04867c90(&bStack_688,auStack_6b8,auStack_5c0);
                cVar60 = func_0x0cc2ddd0(auStack_3c8,&bStack_688,auStack_530 + 8,lStack_628 + 0x50);
                puStack_608 = (undefined8 *)CONCAT71(puStack_608._1_7_,cVar60);
                if (cVar60 == '\0') goto LAB_0cc1c555;
                uVar84 = uStack_298 & 0xffffffff;
                pbVar79 = pbStack_2a0;
                if (pbStack_2a0 != (byte *)0x0 || uVar84 == 0) {
                  if (uVar84 == 0) goto LAB_0cc1c614;
                  pbVar69 = pbStack_2a0 + uVar84 * 0x30;
                  puVar63 = &uStack_5d8;
                  auVar77 = (undefined1  [8])0xffffffff;
                  while( true ) {
                    if (*(short *)pbVar79 == 4) {
                      func_0x0ed6cf30(&bStack_640,auStack_3b8,pbVar79);
                      lVar83 = CONCAT71(uStack_63f,bStack_640);
                      if (CONCAT44(uStack_634,uStack_638) - lVar83 == 0x40) {
                        auVar136 = func_0x0ed6c040(CONCAT44(uStack_634,uStack_638) + -0x18);
                        auStack_588 = auVar136;
                        func_0x0627af70(puVar63,auStack_588);
                        lVar83 = (long)&uStack_5d8 + 1;
                        if (((ulong)uStack_5d8 & 1) != 0) {
                          lVar83 = lStack_5c8;
                        }
                        func_0x0cc2e110(lVar83);
                        if (((ulong)uStack_5d8 & 1) != 0) {
                          func_0x0412a280(lStack_5c8,(ulong)uStack_5d8 & 0xfffffffffffffffe);
                        }
                        lVar83 = CONCAT71(uStack_63f,bStack_640);
                      }
                      if (lVar83 != 0) {
                        lVar88 = CONCAT44(uStack_634,uStack_638);
                        lVar86 = lVar83;
                        if (lVar83 != lVar88) {
                          do {
                            if ((ulong)*(uint *)(lVar88 + -0x10) != 0xffffffff) {
                              (**(code **)(&UNK_0f3f5bf0 + (ulong)*(uint *)(lVar88 + -0x10) * 8))
                                        (puVar63,lVar88 + -0x18);
                            }
                            *(undefined4 *)(lVar88 + -0x10) = 0xffffffff;
                            lVar88 = lVar88 + -0x20;
                          } while (lVar88 != lVar83);
                          lVar86 = CONCAT71(uStack_63f,bStack_640);
                        }
                        uStack_638 = (undefined4)lVar83;
                        uStack_634 = (uint)((ulong)lVar83 >> 0x20);
                        func_0x0412a280(lVar86,lStack_630 - lVar86);
                      }
                    }
                    if (pbVar79 == pbVar69) break;
                    pbVar79 = pbVar79 + 0x30;
                    if (pbVar79 == pbVar69) goto LAB_0cc1c614;
                  }
                }
                puVar68 = auStack_3b8;
                func_0x04890760();
LAB_0cc1cb6d:
                func_0x0eec74c0(pbVar79,0);
LAB_0cc1b96d:
                uStack_660 = (undefined7 *)((ulong)pbVar79 | 1);
                puStack_658 = puVar68;
                pbStack_650 = pbVar69;
LAB_0cc1b986:
                func_0x0eee2f00(pbVar69,auVar77,puVar68);
              } while( true );
            }
          }
        }
      }
    }
    else {
      func_0x04863610(auStack_3c8);
    }
    goto LAB_0cc1ca92;
  }
  func_0x04860c50(auStack_3c8,&bStack_f0);
  if ((auStack_3c8[0] & 1) == 0) {
    auVar77 = (undefined1  [8])(auStack_3c8 + 1);
  }
  else {
    auVar77 = auStack_3b8;
  }
  auStack_578._0_8_ = auVar77;
  func_0x0b036410(1,3,6,&UNK_0139ed4c,auStack_578);
  if ((auStack_3c8[0] & 1) != 0) {
    func_0x0412a280(auStack_3b8,(ulong)_auStack_3c8 & 0xfffffffffffffffe);
  }
  *puStack_5e0 = 0;
  goto LAB_0cc1cac2;
LAB_0cc1c555:
  if (((ulong)uStack_660 & 1) != 0) {
    pbStack_648 = pbStack_650;
  }
  bStack_640 = (byte)pbStack_648;
  uStack_63f = (undefined7)((ulong)pbStack_648 >> 8);
  func_0x09e34180(1,3,6,&UNK_0148affe,&bStack_640);
  func_0x0ed6c330(&bStack_640,auStack_3b8);
  pbVar79 = (byte *)CONCAT71(uStack_63f,bStack_640);
  pbVar69 = (byte *)CONCAT44(uStack_634,uStack_638);
  if (pbVar79 != pbVar69) {
    do {
      uStack_5d8 = pbVar79 + 1;
      if ((*pbVar79 & 1) != 0) {
        uStack_5d8 = *(byte **)(pbVar79 + 0x10);
      }
      func_0x09adffe0(1,3,6,&uStack_5d8);
      pbVar79 = pbVar79 + 0x18;
    } while (pbVar79 != pbVar69);
  }
  func_0x04886070(&bStack_640);
LAB_0cc1c614:
  if ((bStack_688 & 1) != 0) {
    func_0x0412a280(puStack_678,CONCAT71(uStack_687,bStack_688) & 0xfffffffffffffffe);
  }
  func_0x048ed2a0(auStack_6b8);
  func_0x0490a470(auStack_3c8);
  func_0x04863610(auStack_5c0);
  if ((char)puStack_608 == '\0') {
LAB_0cc1c66a:
    bVar89 = false;
  }
  else {
LAB_0cc1c65c:
    bVar89 = true;
  }
  if (((ulong)uStack_660 & 1) != 0) {
    func_0x0412a280(pbStack_650,(ulong)uStack_660 & 0xfffffffffffffffe);
  }
  if (bVar89) {
    auStack_568._8_8_ = *(undefined8 *)(lStack_628 + 0x80);
    if ((auStack_558._0_8_ & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(auStack_558._0_8_ & 0xff00ffffffffffff) - 8);
    }
    auVar53._8_8_ = 0;
    auVar53._0_8_ = auStack_558._8_8_;
    auStack_558 = auVar53 << 0x40;
    uVar84 = *(ulong *)(lStack_628 + 0x88);
    if ((uVar84 & 0x80000000000000) != 0) {
      lVar88 = *(long *)((uVar84 & 0xff00ffffffffffff) - 8);
      lVar83 = lVar88 + 9;
      plVar70 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar83,8);
      if (lVar83 != 0 && plVar70 == (long *)0x0) {
        func_0x0eec74c0(lVar83,8);
      }
      *plVar70 = lVar88;
      func_0x0eee2f00(plVar70 + 1,uVar84 & 0xff00ffffffffffff,lVar88);
      *(undefined1 *)((long)plVar70 + lVar88 + 8) = 0;
      uVar84 = (ulong)(plVar70 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    auStack_558._0_8_ = uVar84;
    if ((auStack_558._8_8_ & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(auStack_558._8_8_ & 0xff00ffffffffffff) - 8);
      uVar84 = auStack_558._0_8_;
    }
    auStack_558._0_8_ = uVar84;
    auStack_558._8_8_ = 0;
    uVar84 = *(ulong *)(lStack_628 + 0x90);
    if ((uVar84 & 0x80000000000000) != 0) {
      lVar88 = *(long *)((uVar84 & 0xff00ffffffffffff) - 8);
      lVar83 = lVar88 + 9;
      plVar70 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar83,8);
      if (lVar83 != 0 && plVar70 == (long *)0x0) {
        func_0x0eec74c0(lVar83,8);
      }
      *plVar70 = lVar88;
      func_0x0eee2f00(plVar70 + 1,uVar84 & 0xff00ffffffffffff,lVar88);
      *(undefined1 *)((long)plVar70 + lVar88 + 8) = 0;
      uVar84 = (ulong)(plVar70 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    auStack_558._8_8_ = uVar84;
    uStack_544 = *(undefined2 *)(lStack_628 + 0x9c);
    uStack_548 = *(undefined4 *)(lStack_628 + 0x98);
    auStack_540._0_8_ = auStack_5f8._0_8_;
    auVar136 = auStack_540;
    if ((auStack_540._8_8_ & 0x80000000000000) != 0) {
      auStack_540 = auVar136;
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(auStack_540._8_8_ & 0xff00ffffffffffff) - 8);
    }
    auStack_540._8_8_ = 0;
    uVar84 = auStack_5f8._8_8_;
    if ((auStack_5f8._8_8_ & 0x80000000000000) != 0) {
      uVar84 = auStack_5f8._8_8_ & 0xff00ffffffffffff;
      lVar88 = *(long *)(uVar84 - 8);
      lVar83 = lVar88 + 9;
      plVar70 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar83,8);
      if (lVar83 != 0 && plVar70 == (long *)0x0) {
        func_0x0eec74c0(lVar83,8);
      }
      *plVar70 = lVar88;
      func_0x0eee2f00(plVar70 + 1,uVar84,lVar88);
      *(undefined1 *)((long)plVar70 + lVar88 + 8) = 0;
      uVar84 = (ulong)(plVar70 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    auStack_540._8_8_ = uVar84;
    if ((auStack_530._0_8_ & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(auStack_530._0_8_ & 0xff00ffffffffffff) - 8);
    }
    auVar54._8_8_ = 0;
    auVar54._0_8_ = auStack_530._8_8_;
    auStack_530 = auVar54 << 0x40;
    uVar84 = uStack_5e8;
    if ((uStack_5e8 & 0x80000000000000) != 0) {
      uVar84 = uStack_5e8 & 0xff00ffffffffffff;
      lVar88 = *(long *)(uVar84 - 8);
      lVar83 = lVar88 + 9;
      plVar70 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar83,8);
      if (lVar83 != 0 && plVar70 == (long *)0x0) {
        func_0x0eec74c0(lVar83,8);
      }
      *plVar70 = lVar88;
      func_0x0eee2f00(plVar70 + 1,uVar84,lVar88);
      *(undefined1 *)((long)plVar70 + lVar88 + 8) = 0;
      uVar84 = (ulong)(plVar70 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    auStack_530._0_8_ = uVar84;
    func_0x0cc1d2a0(puStack_5e0,lStack_3d8,auStack_578,lStack_628);
  }
  else {
LAB_0cc1ca92:
    *puStack_5e0 = 0;
  }
  func_0x0cc21880(auStack_578);
LAB_0cc1cac2:
  func_0x04863610(auStack_598);
  func_0x0485e2d0(&bStack_f0);
joined_r0x0cc1cae7:
  if ((uStack_5e8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_5e8 & 0xff00ffffffffffff) - 8);
  }
  uStack_5e8 = 0;
  if ((auStack_5f8._8_8_ & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(auStack_5f8._8_8_ & 0xff00ffffffffffff) - 8);
  }
  return;
}



/* ---- referenced strings ----
 * 0x14ea360          
 */
