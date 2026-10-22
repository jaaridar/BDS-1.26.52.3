/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x529a580 (ELF vaddr 0x519a580)
 * Label: caller-of-callee
 * Body:  [[0529a580, 0529b7dc]]
 * Ghidra: FUN_0529a580
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0529a580(long param_1,long param_2,undefined1 param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  uint *puVar15;
  ulong uVar16;
  byte bVar17;
  bool bVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined8 uStack_c1e8;
  undefined8 uStack_c1e0;
  undefined8 uStack_c1d8;
  undefined8 uStack_c1d0;
  undefined8 uStack_c1c8;
  undefined8 uStack_c1c0;
  undefined8 uStack_c1b8;
  undefined8 uStack_c1b0;
  byte bStack_c1a8;
  long *plStack_c198;
  long *plStack_c190;
  undefined8 uStack_c188;
  undefined8 uStack_c180;
  undefined8 uStack_c178;
  undefined8 uStack_c170;
  undefined8 uStack_c168;
  undefined8 uStack_c160;
  undefined8 uStack_c158;
  undefined8 uStack_c150;
  byte bStack_c148;
  uint uStack_c138;
  undefined4 uStack_c134;
  undefined4 uStack_c130;
  undefined4 uStack_c12c;
  undefined4 uStack_c128;
  undefined4 uStack_c124;
  undefined4 uStack_c120;
  undefined4 uStack_c11c;
  undefined8 uStack_c118;
  undefined4 uStack_c110;
  undefined4 uStack_c10c;
  undefined4 uStack_c108;
  undefined4 uStack_c104;
  undefined8 uStack_c100;
  byte bStack_c0f8;
  uint uStack_c0e8;
  undefined4 uStack_c0e4;
  undefined4 uStack_c0e0;
  undefined4 uStack_c0dc;
  undefined8 uStack_c0d8;
  undefined8 uStack_c0d0;
  undefined8 uStack_c0c8;
  undefined8 uStack_c0c0;
  undefined8 uStack_c0b8;
  undefined8 uStack_c0b0;
  byte bStack_c0a8;
  undefined8 uStack_c098;
  undefined4 uStack_c090;
  undefined4 uStack_c08c;
  long lStack_c080;
  uint uStack_c078;
  undefined4 uStack_c074;
  undefined4 uStack_c070;
  undefined4 uStack_c06c;
  undefined8 uStack_c068;
  undefined8 uStack_c060;
  undefined8 uStack_c058;
  undefined8 uStack_c050;
  undefined8 uStack_c048;
  undefined8 uStack_c040;
  undefined8 uStack_c038;
  undefined8 uStack_c030;
  undefined8 uStack_c028;
  undefined8 uStack_c020;
  undefined8 uStack_c018;
  undefined8 uStack_c010;
  undefined8 uStack_c008;
  undefined8 uStack_c000;
  byte bStack_bff8;
  undefined8 uStack_8038;
  undefined *puStack_8030;
  long lStack_8028;
  ulong uStack_8020;
  undefined8 uStack_8018;
  undefined8 uStack_8010;
  undefined8 uStack_8008;
  undefined8 uStack_8000;
  undefined8 uStack_7ff8;
  undefined8 uStack_7ff0;
  undefined8 uStack_7fe8;
  undefined8 uStack_7fe0;
  undefined8 uStack_7fd8;
  undefined8 uStack_7fd0;
  undefined8 uStack_7fc8;
  undefined8 uStack_7fc0;
  undefined8 uStack_7fb8;
  undefined8 uStack_7fb0;
  undefined8 uStack_7fa8;
  undefined8 uStack_7fa0;
  undefined8 uStack_7f98;
  undefined8 uStack_7f90;
  undefined8 uStack_7f88;
  undefined8 uStack_7f80;
  undefined8 uStack_7f78;
  undefined8 uStack_7f70;
  undefined8 uStack_7f68;
  undefined8 uStack_7f60;
  undefined8 uStack_7f58;
  undefined8 uStack_7f50;
  undefined8 uStack_7f48;
  undefined8 uStack_7f40;
  undefined1 auStack_38 [8];
  
  if (((*(ulong *)(param_2 + 0x50) & 0xfffffff080000000) != 0 ||
       0xf < (int)*(ulong *)(param_2 + 0x50)) || (*(char *)(param_1 + 0x70) != '\0')) {
LAB_0529aa57:
    plVar14 = *(long **)(param_1 + 0x30);
    goto joined_r0x0529aa5e;
  }
  uStack_c098 = param_1 + 0x168;
  func_0x0412d680();
  uStack_7f48 = 0;
  uStack_7f40 = 0;
  uStack_7f58 = 0;
  uStack_7f50 = 0;
  uStack_7f68 = 0;
  uStack_7f60 = 0;
  uStack_7f78 = 0;
  uStack_7f70 = 0;
  uStack_7f88 = 0;
  uStack_7f80 = 0;
  uStack_7f98 = 0;
  uStack_7f90 = 0;
  uStack_7fa8 = 0;
  uStack_7fa0 = 0;
  uStack_7fb8 = 0;
  uStack_7fb0 = 0;
  uStack_7fc8 = 0;
  uStack_7fc0 = 0;
  uStack_7fd8 = 0;
  uStack_7fd0 = 0;
  uStack_7fe8 = 0;
  uStack_7fe0 = 0;
  uStack_7ff8 = 0;
  uStack_7ff0 = 0;
  uStack_8008 = 0;
  uStack_8000 = 0;
  uStack_8018 = 0;
  uStack_8010 = 0;
  lStack_8028 = 0;
  uStack_8020 = 0;
  uStack_8038 = (undefined *)0x0;
  puStack_8030 = (undefined *)0x0;
  plStack_c198 = (long *)0x0;
  plStack_c190 = (long *)0x0;
  bVar18 = (*(byte *)(param_1 + 0xb8) & 1) != 0;
  puVar15 = (uint *)(param_1 + 0xb9);
  if (bVar18) {
    puVar15 = *(uint **)(param_1 + 200);
  }
  uVar13 = (ulong)(*(byte *)(param_1 + 0xb8) >> 1);
  if (bVar18) {
    uVar13 = *(ulong *)(param_1 + 0xc0);
  }
  if ((DAT_0f7b8fb8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f7b8fb8), iVar7 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
  }
  uStack_c1e8 = puVar15;
  uStack_c1e0 = uVar13;
  (**(code **)(_DAT_0f7b8f98 + 0x10))(&uStack_c188,&DAT_0f7b8f98,&uStack_c1e8,&plStack_c198,0x121,0)
  ;
  bStack_bff8 = bStack_c148;
  if (bStack_c148 == 0) {
    uStack_c038 = uStack_c188;
    uStack_c030 = uStack_c180;
    uStack_c028 = uStack_c178;
    uStack_c020 = uStack_c170;
    uStack_c018 = uStack_c168;
    uStack_c178 = 0;
    uStack_c170 = 0;
    uStack_c168 = 0;
    uStack_c010 = uStack_c160;
    uStack_c008 = uStack_c158;
    uStack_c000 = uStack_c150;
    uStack_c160 = 0;
    uStack_c158 = 0;
    uStack_c150 = 0;
    func_0x048e6d60(&uStack_c188);
  }
  if ((bStack_bff8 & 1) == 0) {
    func_0x052bdaf0(&uStack_c038);
    uStack_c100 = uStack_c000;
    uStack_c118 = uStack_c018;
    uStack_c128 = (undefined4)uStack_c028;
    uStack_c124 = uStack_c028._4_4_;
    uStack_c120 = (undefined4)uStack_c020;
    uStack_c11c = uStack_c020._4_4_;
    uStack_c1e8 = uStack_c038;
    uStack_c1e0 = uStack_c030;
    uStack_c028 = 0;
    uStack_c020 = 0;
    uStack_c018 = 0;
    uStack_c110 = (undefined4)uStack_c010;
    uStack_c10c = uStack_c010._4_4_;
    uStack_c108 = (undefined4)uStack_c008;
    uStack_c104 = uStack_c008._4_4_;
    uStack_c010 = 0;
    uStack_c008 = 0;
    uStack_c000 = 0;
    uStack_c188 = uStack_c038;
    uStack_c180 = uStack_c030;
    uStack_c1d8 = 0;
    uStack_c1d0 = 0;
    uStack_c1c8 = 0;
    uStack_c1c0 = 0;
    uStack_c1b8 = 0;
    uStack_c1b0 = 0;
    bStack_c0f8 = 0;
    uStack_c138 = (uint)uStack_c038;
    uStack_c134 = uStack_c038._4_4_;
    uStack_c130 = (undefined4)uStack_c030;
    uStack_c12c = uStack_c030._4_4_;
    uStack_c178 = 0;
    uStack_c170 = 0;
    uStack_c168 = 0;
    uStack_c160 = 0;
    uStack_c158 = 0;
    uStack_c150 = 0;
    func_0x048e6d60(&uStack_c188);
    func_0x048e6d60(&uStack_c1e8);
    bVar17 = 0;
  }
  else {
    func_0x0ee76a70(&uStack_c1e8,plStack_c198,&uStack_8038,0x100);
    bStack_c148 = bStack_c1a8;
    if (bStack_c1a8 == 0) {
      uStack_c188 = uStack_c1e8;
      uStack_c180 = uStack_c1e0;
      uStack_c178 = uStack_c1d8;
      uStack_c170 = uStack_c1d0;
      uStack_c168 = uStack_c1c8;
      uStack_c1d8 = 0;
      uStack_c1d0 = 0;
      uStack_c1c8 = 0;
      uStack_c160 = uStack_c1c0;
      uStack_c158 = uStack_c1b8;
      uStack_c150 = uStack_c1b0;
      uStack_c1c0 = 0;
      uStack_c1b8 = 0;
      uStack_c1b0 = 0;
      func_0x048e6d60(&uStack_c1e8);
    }
    if ((bStack_c148 & 1) == 0) {
      func_0x052bdbb0(&uStack_c188);
      uStack_c100 = uStack_c150;
      uStack_c118 = uStack_c168;
      uStack_c128 = (undefined4)uStack_c178;
      uStack_c124 = uStack_c178._4_4_;
      uStack_c120 = (undefined4)uStack_c170;
      uStack_c11c = uStack_c170._4_4_;
      uStack_c0e8 = (uint)uStack_c188;
      uStack_c0e4 = uStack_c188._4_4_;
      uStack_c0e0 = (undefined4)uStack_c180;
      uStack_c0dc = uStack_c180._4_4_;
      uStack_c178 = 0;
      uStack_c170 = 0;
      uStack_c168 = 0;
      uStack_c110 = (undefined4)uStack_c160;
      uStack_c10c = uStack_c160._4_4_;
      uStack_c108 = (undefined4)uStack_c158;
      uStack_c104 = uStack_c158._4_4_;
      uStack_c160 = 0;
      uStack_c158 = 0;
      uStack_c150 = 0;
      uStack_c1e8 = uStack_c188;
      uStack_c1e0 = uStack_c180;
      uStack_c0d8 = 0;
      uStack_c0d0 = 0;
      uStack_c0c8 = 0;
      uStack_c0c0 = 0;
      uStack_c0b8 = 0;
      uStack_c0b0 = 0;
      bStack_c0f8 = 0;
      uStack_c138 = (uint)uStack_c188;
      uStack_c134 = uStack_c188._4_4_;
      uStack_c130 = (undefined4)uStack_c180;
      uStack_c12c = uStack_c180._4_4_;
      uStack_c1d8 = 0;
      uStack_c1d0 = 0;
      uStack_c1c8 = 0;
      uStack_c1c0 = 0;
      uStack_c1b8 = 0;
      uStack_c1b0 = 0;
      func_0x048e6d60(&uStack_c1e8);
      func_0x048e6d60(&uStack_c0e8);
      bVar17 = 0;
    }
    else {
      func_0x0ee56810(&uStack_c0e8,&plStack_c198);
      bStack_c1a8 = bStack_c0a8;
      if (bStack_c0a8 == 0) {
        uStack_c1e8 = (uint *)CONCAT44(uStack_c0e4,uStack_c0e8);
        uStack_c1e0 = CONCAT44(uStack_c0dc,uStack_c0e0);
        uStack_c1d8 = uStack_c0d8;
        uStack_c1d0 = uStack_c0d0;
        uStack_c1c8 = uStack_c0c8;
        uStack_c0d8 = 0;
        uStack_c0d0 = 0;
        uStack_c0c8 = 0;
        uStack_c1c0 = uStack_c0c0;
        uStack_c1b8 = uStack_c0b8;
        uStack_c1b0 = uStack_c0b0;
        uStack_c0c0 = 0;
        uStack_c0b8 = 0;
        uStack_c0b0 = 0;
        func_0x048e6d60(&uStack_c0e8);
      }
      if ((bStack_c1a8 & 1) == 0) {
        func_0x052bdc70(&uStack_c1e8);
        uStack_c100 = uStack_c1b0;
        uStack_c118 = uStack_c1c8;
        uStack_c128 = (undefined4)uStack_c1d8;
        uStack_c124 = uStack_c1d8._4_4_;
        uStack_c120 = (undefined4)uStack_c1d0;
        uStack_c11c = uStack_c1d0._4_4_;
        uStack_c078 = (uint)uStack_c1e8;
        uStack_c074 = uStack_c1e8._4_4_;
        uStack_c070 = (undefined4)uStack_c1e0;
        uStack_c06c = uStack_c1e0._4_4_;
        uStack_c1d8 = 0;
        uStack_c1d0 = 0;
        uStack_c1c8 = 0;
        uStack_c110 = (undefined4)uStack_c1c0;
        uStack_c10c = uStack_c1c0._4_4_;
        uStack_c108 = (undefined4)uStack_c1b8;
        uStack_c104 = uStack_c1b8._4_4_;
        uStack_c1c0 = 0;
        uStack_c1b8 = 0;
        uStack_c1b0 = 0;
        uStack_c0e8 = (uint)uStack_c1e8;
        uStack_c0e4 = uStack_c1e8._4_4_;
        uStack_c0e0 = (undefined4)uStack_c1e0;
        uStack_c0dc = uStack_c1e0._4_4_;
        uStack_c068 = 0;
        uStack_c060 = 0;
        uStack_c058 = 0;
        uStack_c050 = 0;
        uStack_c048 = 0;
        uStack_c040 = 0;
        bStack_c0f8 = 0;
        uStack_c138 = (uint)uStack_c1e8;
        uStack_c134 = uStack_c1e8._4_4_;
        uStack_c130 = (undefined4)uStack_c1e0;
        uStack_c12c = uStack_c1e0._4_4_;
        uStack_c0d8 = 0;
        uStack_c0d0 = 0;
        uStack_c0c8 = 0;
        uStack_c0c0 = 0;
        uStack_c0b8 = 0;
        uStack_c0b0 = 0;
        func_0x048e6d60(&uStack_c0e8);
        func_0x048e6d60(&uStack_c078);
        bVar17 = 0;
      }
      else {
        uVar13 = *(ulong *)(param_2 + 0x50);
        if ((uVar13 & 0xfffffff080000000) == 0 && (int)uVar13 < 0x10) {
          bStack_c0f8 = 1;
          uStack_c138 = CONCAT31(uStack_c138._1_3_,
                                 *(undefined1 *)
                                  ((long)&uStack_8038 +
                                  (ulong)((int)uVar13 + ((uint)(uVar13 >> 0x1c) & 0xf0))));
          bVar17 = 1;
        }
        else {
          bStack_c0f8 = 1;
          uStack_c138 = (uint)uStack_c138._1_3_ << 8;
          bVar17 = 1;
        }
      }
      if ((bStack_c1a8 & 1) == 0) {
        func_0x048e6d60(&uStack_c1e8);
      }
    }
    if (bStack_c148 == 0) {
      func_0x048e6d60(&uStack_c188);
    }
  }
  if (bStack_bff8 == 0) {
    func_0x048e6d60(&uStack_c038);
  }
  if ((plStack_c198 != (long *)0x0) &&
     (func_0x0ee56810(&uStack_c038,&plStack_c198), bStack_bff8 == 0)) {
    func_0x048e6d60(&uStack_c038);
  }
  plVar14 = plStack_c190;
  plStack_c190 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 8))();
  }
  plVar14 = plStack_c198;
  plStack_c198 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 8))();
  }
  func_0x0412d6b0(uStack_c098);
  uStack_8038 = (undefined *)0xc49fcf4adb9e667a;
  puStack_8030 = &UNK_0140f690;
  lStack_8028 = 1;
  uStack_8020 = CONCAT44(uStack_8020._4_4_,0x51);
  if (bVar17 == 0) {
    func_0x0eedea30(&uStack_c038);
    func_0x0eedeb80(2,0x2d,&uStack_c138,&uStack_c038,&uStack_8038);
    bVar17 = bStack_c0f8;
    if (((ulong)uStack_c038 & 1) != 0) {
      thunk_FUN_0ee326a0(uStack_c028,(ulong)uStack_c038 & 0xfffffffffffffffe);
      bVar17 = bStack_c0f8;
    }
  }
  if ((bVar17 & 1) == 0) {
    func_0x048e6d60(&uStack_c138);
  }
  else if ((uStack_c138 & 1) != 0) goto LAB_0529aa57;
  uStack_c1e8 = (uint *)0x0;
  func_0x0eee2dd0(&uStack_8038,0,0x8000);
  lVar10 = param_1 + 0x140;
  func_0x0412d680(lVar10);
  plVar14 = *(long **)(param_1 + 0xd0);
  if (plVar14 == (long *)0x0) {
    lVar8 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x2048);
    if (lVar8 == 0) {
      func_0x0eec74c0(0x2048,0);
    }
    if ((*(byte *)(param_1 + 0xa0) & 1) == 0) {
      uStack_c178 = *(undefined8 *)(param_1 + 0xb0);
      uStack_c188 = *(uint **)(param_1 + 0xa0);
      uStack_c180 = *(ulong *)(param_1 + 0xa8);
    }
    else {
      FUN_0412e5e0(&uStack_c188,*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xa8));
    }
    func_0x0d1d7ca0(lVar8,&uStack_c188);
    if (((ulong)uStack_c188 & 1) != 0) {
      thunk_FUN_0ee326a0(uStack_c178,(ulong)uStack_c188 & 0xfffffffffffffffe);
    }
    plVar14 = *(long **)(param_1 + 0xd0);
    *(long *)(param_1 + 0xd0) = lVar8;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 8))();
      lVar8 = *(long *)(param_1 + 0xd0);
    }
    cVar5 = func_0x0d1d80d0(lVar8);
    plVar14 = *(long **)(param_1 + 0xd0);
    if (cVar5 != '\0') goto LAB_0529ab80;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 8))();
    }
  }
  else {
LAB_0529ab80:
    cVar5 = func_0x0d1d8e90(plVar14,*(undefined4 *)(param_2 + 0x50),*(undefined4 *)(param_2 + 0x54),
                            &uStack_c1e8);
    puVar15 = uStack_c1e8;
    if (cVar5 != '\0') {
      uStack_c1e8[2] = 0;
      uVar6 = *uStack_c1e8;
      uVar13 = 0;
      if (uVar6 < 0x40000) {
LAB_0529ac27:
        if (uVar13 + 0x20000 <= (ulong)uVar6) {
          func_0x0eee2f00(&uStack_c038,(uVar13 >> 3) + *(long *)(puVar15 + 4),0x4000);
          puVar15[2] = puVar15[2] + 0x20000;
        }
      }
      else {
        func_0x0eee2f00(&uStack_8038,*(undefined8 *)(uStack_c1e8 + 4),0x8000);
        uVar1 = puVar15[2];
        uVar6 = uVar1 + 0x40000;
        uVar13 = (ulong)uVar6;
        puVar15[2] = uVar6;
        if ((uVar1 & 7) == 0) {
          uVar6 = *puVar15;
          goto LAB_0529ac27;
        }
        func_0x0d6e0240(puVar15,&uStack_c038,0x20000,1);
      }
      func_0x0cae2760(param_2,&uStack_8038,auStack_38,&uStack_c038,&uStack_8038);
      puVar15 = uStack_c1e8;
      if (1 < *(int *)(param_1 + 0xe0)) {
        uVar6 = uStack_c1e8[2];
        uVar13 = (ulong)uVar6;
        if ((uVar6 & 7) == 0) {
          if (uVar13 + 0x20000 <= (ulong)*uStack_c1e8) {
            func_0x0eee2f00(&uStack_c038,(ulong)(uVar6 >> 3) + *(long *)(uStack_c1e8 + 4),0x4000);
            uVar13 = (ulong)(puVar15[2] + 0x20000);
            puVar15[2] = puVar15[2] + 0x20000;
          }
        }
        else {
          func_0x0d6e0240(uStack_c1e8,&uStack_c038,0x20000,1);
          uVar13 = (ulong)uStack_c1e8[2];
          puVar15 = uStack_c1e8;
        }
        if ((uVar13 & 7) == 0) {
          if (uVar13 + 0x20000 <= (ulong)*puVar15) {
            func_0x0eee2f00(&uStack_c038,(uVar13 >> 3) + *(long *)(puVar15 + 4),0x4000);
            puVar15[2] = puVar15[2] + 0x20000;
          }
        }
        else {
          func_0x0d6e0240(puVar15,&uStack_c038,0x20000,1);
        }
      }
      func_0x0412d6b0(lVar10);
      if ((*(long *)(uStack_c1e8 + 4) == 0) ||
         ((**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0), uStack_c1e8 != (uint *)0x0)) {
        puVar15 = uStack_c1e8;
        if (((char)uStack_c1e8[6] == '\x01') && (0x800 < uStack_c1e8[1])) {
          func_0x0d6e4220(*(undefined8 *)(uStack_c1e8 + 4),&UNK_013a4121,0x87);
        }
        thunk_FUN_0ee326a0(puVar15,0x120);
      }
      uStack_8038 = (undefined *)((ulong)uStack_8038 & 0xffffffff00000000);
      cVar5 = '\x01';
      do {
        uStack_8038._0_2_ = (ushort)(byte)uStack_8038;
        func_0x0caf8430(param_2,*(undefined8 *)(param_1 + 0xe8),&uStack_8038,1);
        uStack_8038._0_2_ = CONCAT11(1,(byte)uStack_8038);
        func_0x0caf8430(param_2,*(undefined8 *)(param_1 + 0xe8),&uStack_8038,1);
        uStack_8038._0_2_ = CONCAT11(2,(byte)uStack_8038);
        func_0x0caf8430(param_2,*(undefined8 *)(param_1 + 0xe8),&uStack_8038,1);
        uStack_8038._0_2_ = CONCAT11(3,(byte)uStack_8038);
        func_0x0caf8430(param_2,*(undefined8 *)(param_1 + 0xe8),&uStack_8038,1);
        uStack_8038._0_2_ = CONCAT11(4,(byte)uStack_8038);
        func_0x0caf8430(param_2,*(undefined8 *)(param_1 + 0xe8),&uStack_8038,1);
        uStack_8038._0_2_ = CONCAT11(5,(byte)uStack_8038);
        func_0x0caf8430(param_2,*(undefined8 *)(param_1 + 0xe8),&uStack_8038,1);
        uStack_8038._0_2_ = CONCAT11(6,(byte)uStack_8038);
        func_0x0caf8430(param_2,*(undefined8 *)(param_1 + 0xe8),&uStack_8038,1);
        uStack_8038._0_2_ = CONCAT11(7,(byte)uStack_8038);
        func_0x0caf8430(param_2,*(undefined8 *)(param_1 + 0xe8),&uStack_8038,1);
        uStack_8038._0_2_ = CONCAT11(8,(byte)uStack_8038);
        func_0x0caf8430(param_2,*(undefined8 *)(param_1 + 0xe8),&uStack_8038,1);
        uStack_8038._0_2_ = CONCAT11(9,(byte)uStack_8038);
        func_0x0caf8430(param_2,*(undefined8 *)(param_1 + 0xe8),&uStack_8038,1);
        uStack_8038._0_2_ = CONCAT11(10,(byte)uStack_8038);
        func_0x0caf8430(param_2,*(undefined8 *)(param_1 + 0xe8),&uStack_8038,1);
        uStack_8038._0_2_ = CONCAT11(0xb,(byte)uStack_8038);
        func_0x0caf8430(param_2,*(undefined8 *)(param_1 + 0xe8),&uStack_8038,1);
        uStack_8038._0_2_ = CONCAT11(0xc,(byte)uStack_8038);
        func_0x0caf8430(param_2,*(undefined8 *)(param_1 + 0xe8),&uStack_8038,1);
        uStack_8038._0_2_ = CONCAT11(0xd,(byte)uStack_8038);
        func_0x0caf8430(param_2,*(undefined8 *)(param_1 + 0xe8),&uStack_8038,1);
        uStack_8038._0_2_ = CONCAT11(0xe,(byte)uStack_8038);
        func_0x0caf8430(param_2,*(undefined8 *)(param_1 + 0xe8),&uStack_8038,1);
        uStack_8038._0_2_ = CONCAT11(0xf,(byte)uStack_8038);
        func_0x0caf8430(param_2,*(undefined8 *)(param_1 + 0xe8),&uStack_8038);
        uStack_8038 = (undefined *)CONCAT62(uStack_8038._2_6_,0x1000);
        uStack_8038 = (undefined *)CONCAT71(uStack_8038._1_7_,cVar5);
        cVar5 = cVar5 + '\x01';
      } while (cVar5 != '\x11');
      uVar16 = (ulong)*(int *)(param_2 + 0x50);
      iVar7 = *(int *)(param_2 + 0x54);
      uVar13 = *(ulong *)(param_1 + 0xf8);
      if (uVar13 != 0) {
        uVar9 = uVar16 + 0x9e3779b9;
        uVar9 = (uVar9 >> 2) + 0x9e3779b9 + (long)iVar7 + uVar9 * 0x40 ^ uVar9;
        uVar11 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
        uVar11 = (uVar11 >> 2 & 0x3333333333333333) + (uVar11 & 0x3333333333333333);
        uVar11 = ((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar11 >> 0x38 < 2) {
          uVar12 = uVar13 - 1 & uVar9;
        }
        else {
          uVar12 = uVar9;
          if (uVar13 <= uVar9) {
            uVar12 = uVar9 % uVar13;
          }
        }
        plVar14 = *(long **)(*(long *)(param_1 + 0xf0) + uVar12 * 8);
        if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
          uVar16 = *(ulong *)(param_2 + 0x50);
          iVar7 = (int)(uVar16 >> 0x20);
          if ((byte)(uVar11 >> 0x38) < 2) {
            do {
              if (plVar14[1] == uVar9) {
                if (plVar14[2] == uVar16) goto LAB_0529b162;
              }
              else if ((plVar14[1] & uVar13 - 1) != uVar12) break;
              plVar14 = (long *)*plVar14;
            } while (plVar14 != (long *)0x0);
          }
          else {
            do {
              uVar11 = plVar14[1];
              if (uVar11 == uVar9) {
                if (plVar14[2] == uVar16) goto LAB_0529b162;
              }
              else {
                if (uVar13 <= uVar11) {
                  if ((uVar11 | uVar13) >> 0x20 == 0) {
                    if ((uVar11 & 0xffffffff) % (uVar13 & 0xffffffff) == uVar12) goto LAB_0529b0ec;
                    break;
                  }
                  uVar11 = uVar11 % uVar13;
                }
                if (uVar11 != uVar12) break;
              }
LAB_0529b0ec:
              plVar14 = (long *)*plVar14;
            } while (plVar14 != (long *)0x0);
          }
        }
      }
      goto LAB_0529b229;
    }
  }
  func_0x0412d6b0(lVar10);
  plVar14 = *(long **)(param_1 + 0x30);
joined_r0x0529aa5e:
  if (plVar14 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0529aa83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar14 + 0x78))(plVar14,param_2,param_3);
  return;
LAB_0529b36a:
  bVar18 = (*(byte *)(plVar14 + 3) & 1) != 0;
  lStack_8028 = (long)plVar14 + 0x19;
  if (bVar18) {
    lStack_8028 = plVar14[5];
  }
  uStack_8020 = (ulong)(*(byte *)(plVar14 + 3) >> 1);
  if (bVar18) {
    uStack_8020 = plVar14[4];
  }
  uStack_8038 = &UNK_0ef9fd98;
  puStack_8030 = (undefined *)0x0;
  func_0x0caf0180(param_2,&uStack_8038);
  func_0x052bf220(&uStack_c038,(long *)(param_1 + 0x118),plVar14);
  puVar15 = uStack_c038;
  if (uStack_c038 != (uint *)0x0) {
    if (((char)uStack_c028 == '\x01') && ((uStack_c038[6] & 1) != 0)) {
      thunk_FUN_0ee326a0(*(undefined8 *)(uStack_c038 + 10),
                         *(ulong *)(uStack_c038 + 6) & 0xfffffffffffffffe);
    }
    thunk_FUN_0ee326a0(puVar15);
  }
  goto LAB_0529b412;
LAB_0529b162:
  lVar2 = plVar14[3];
  lVar8 = plVar14[3];
  lVar3 = plVar14[4];
  lVar10 = plVar14[5];
  plVar14[3] = 0;
  plVar14[4] = 0;
  plVar14[5] = 0;
  uVar19 = (int)lVar2;
  uVar20 = *(undefined4 *)((long)plVar14 + 0x1c);
  uVar21 = (int)lVar3;
  uVar22 = *(undefined4 *)((long)plVar14 + 0x24);
  if ((*(byte *)(param_2 + 0x70) & 1) != 0) {
    uStack_c098 = lVar8;
    uStack_c090 = (int)lVar3;
    uStack_c08c = *(undefined4 *)((long)plVar14 + 0x24);
    lStack_c080 = lVar10;
    thunk_FUN_0ee326a0(*(undefined8 *)(param_2 + 0x80),
                       *(ulong *)(param_2 + 0x70) & 0xfffffffffffffffe);
    lVar10 = lStack_c080;
    uVar19 = (undefined4)uStack_c098;
    uVar20 = uStack_c098._4_4_;
    uVar21 = uStack_c090;
    uVar22 = uStack_c08c;
  }
  *(undefined4 *)(param_2 + 0x70) = uVar19;
  *(undefined4 *)(param_2 + 0x74) = uVar20;
  *(undefined4 *)(param_2 + 0x78) = uVar21;
  *(undefined4 *)(param_2 + 0x7c) = uVar22;
  *(long *)(param_2 + 0x80) = lVar10;
  func_0x052bf220(&uStack_8038,(long *)(param_1 + 0xf0),plVar14);
  puVar4 = uStack_8038;
  if (uStack_8038 != (undefined *)0x0) {
    if (((char)lStack_8028 == '\x01') && ((uStack_8038[0x18] & 1) != 0)) {
      thunk_FUN_0ee326a0(*(undefined8 *)(uStack_8038 + 0x28),
                         *(ulong *)(uStack_8038 + 0x18) & 0xfffffffffffffffe);
    }
    thunk_FUN_0ee326a0(puVar4);
  }
  uVar16 = (ulong)*(uint *)(param_2 + 0x50);
  iVar7 = *(int *)(param_2 + 0x54);
LAB_0529b229:
  uVar13 = *(ulong *)(param_1 + 0x120);
  if (uVar13 != 0) {
    uVar16 = (long)(int)uVar16 + 0x9e3779b9;
    uVar16 = (long)iVar7 + 0x9e3779b9 + uVar16 * 0x40 + (uVar16 >> 2) ^ uVar16;
    uVar9 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
    uVar9 = ((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar9 >> 0x38 < 2) {
      uVar11 = uVar13 - 1 & uVar16;
    }
    else {
      uVar11 = uVar16;
      if (uVar13 <= uVar16) {
        uVar11 = uVar16 % uVar13;
      }
    }
    plVar14 = *(long **)(*(long *)(param_1 + 0x118) + uVar11 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if ((byte)(uVar9 >> 0x38) < 2) {
        do {
          if (plVar14[1] == uVar16) {
            if (plVar14[2] == *(long *)(param_2 + 0x50)) goto LAB_0529b36a;
          }
          else if ((plVar14[1] & uVar13 - 1) != uVar11) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar9 = plVar14[1];
          if (uVar9 == uVar16) {
            if (plVar14[2] == *(long *)(param_2 + 0x50)) goto LAB_0529b36a;
          }
          else {
            if (uVar13 <= uVar9) {
              if ((uVar9 | uVar13) >> 0x20 == 0) {
                if ((uVar9 & 0xffffffff) % (uVar13 & 0xffffffff) == uVar11) goto LAB_0529b2f9;
                break;
              }
              uVar9 = uVar9 % uVar13;
            }
            if (uVar9 != uVar11) break;
          }
LAB_0529b2f9:
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
LAB_0529b412:
  func_0x0caf7220(param_2);
  uVar22 = _UNK_014e7bac;
  uVar21 = _UNK_014e7ba8;
  uVar20 = _UNK_014e7ba4;
  uVar19 = _DAT_014e7ba0;
  *(undefined4 *)(param_2 + 0x1180) = _DAT_014e7ba0;
  *(undefined4 *)(param_2 + 0x1184) = uVar20;
  *(undefined4 *)(param_2 + 0x1188) = uVar21;
  *(undefined4 *)(param_2 + 0x118c) = uVar22;
  *(undefined4 *)(param_2 + 0x1170) = uVar19;
  *(undefined4 *)(param_2 + 0x1174) = uVar20;
  *(undefined4 *)(param_2 + 0x1178) = uVar21;
  *(undefined4 *)(param_2 + 0x117c) = uVar22;
  *(undefined4 *)(param_2 + 0x1160) = uVar19;
  *(undefined4 *)(param_2 + 0x1164) = uVar20;
  *(undefined4 *)(param_2 + 0x1168) = uVar21;
  *(undefined4 *)(param_2 + 0x116c) = uVar22;
  lVar10 = *(long *)(param_2 + 0x108);
  if (*(long *)(param_2 + 0x110) != lVar10) {
    lVar8 = 0;
    uVar13 = 0;
    do {
      *(undefined8 *)(lVar10 + lVar8) = 0x7fffffff7fffffff;
      uVar13 = uVar13 + 1;
      lVar10 = *(long *)(param_2 + 0x108);
      lVar8 = lVar8 + 0x68;
    } while (uVar13 < (ulong)((*(long *)(param_2 + 0x110) - lVar10 >> 3) * 0x4ec4ec4ec4ec4ec5));
  }
  *(undefined8 *)(param_2 + 0x1190) = 0x7fffffff7fffffff;
  *(undefined2 *)(param_2 + 0x1500) = 0;
  func_0x0cae0970(param_2,1,8);
  return;
}


