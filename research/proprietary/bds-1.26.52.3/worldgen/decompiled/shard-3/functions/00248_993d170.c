/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x9a3d170 (ELF vaddr 0x993d170)
 * Label: caller-of-callee
 * Body:  [[09a3d170, 09a3db24] [09a3dc80, 09a3dc9b]]
 * Ghidra: FUN_09a3d170
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_09a3d170(long param_1,long *param_2)

{
  long *plVar1;
  code *pcVar2;
  undefined1 *puVar3;
  ulong uVar4;
  byte *pbVar5;
  long *plVar6;
  undefined *puVar7;
  char cVar8;
  int iVar9;
  long lVar10;
  ulong *puVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  byte bVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined7 *puVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long lVar20;
  undefined8 uStack_10e0;
  undefined8 uStack_10d8;
  long lStack_10d0;
  long lStack_10c8;
  byte bStack_10c0;
  undefined1 uStack_10bf;
  undefined6 uStack_10be;
  ulong uStack_10b8;
  undefined1 *puStack_10b0;
  byte bStack_10a8;
  undefined7 uStack_10a7;
  ulong uStack_10a0;
  undefined7 *puStack_1098;
  byte bStack_1090;
  undefined7 uStack_108f;
  ulong uStack_1088;
  undefined7 *puStack_1080;
  long *plStack_1078;
  long *plStack_1070;
  undefined8 uStack_1068;
  byte bStack_1060;
  undefined1 auStack_105f [7];
  char cStack_1058;
  undefined1 auStack_1057 [7];
  undefined8 *puStack_1050;
  undefined *puStack_1048;
  ulong uStack_c60;
  undefined7 *puStack_c58;
  ulong uStack_c50;
  undefined *puStack_c48;
  undefined *puStack_c40;
  long lStack_c38;
  long lStack_c30;
  long lStack_c28;
  long lStack_c20;
  byte bStack_c18;
  undefined *puStack_858;
  long lStack_848;
  char cStack_840;
  byte *pbStack_838;
  long *plStack_830;
  long *plStack_828;
  undefined8 uStack_448;
  undefined8 uStack_438;
  undefined *puStack_430;
  ulong uStack_428;
  undefined4 uStack_420;
  ulong uStack_38;
  
  lVar10 = (**(code **)(*param_2 + 0x10))(param_2);
  if (lVar10 == 0) {
    return;
  }
  if ((*(byte *)(lVar10 + 0x10) & 1) == 0) {
    puVar17 = (undefined7 *)(lVar10 + 0x11);
  }
  else {
    puVar17 = *(undefined7 **)(lVar10 + 0x20);
  }
  func_0x0412d550(0xf5522b8);
  LOCK();
  _DAT_0f552388 = _DAT_0f552388 + 1;
  UNLOCK();
  FUN_0412d610(0xf5522b8);
  plVar6 = _DAT_0f5523a0;
  pbVar5 = _DAT_0f552398;
  if ((_DAT_0f552398 == (byte *)0x0) || (*_DAT_0f552398 != 1)) goto LAB_09a3dafa;
  bVar14 = 1;
  if (_DAT_0f5523a0 != (long *)0x0) {
    LOCK();
    _DAT_0f5523a0[1] = _DAT_0f5523a0[1] + 1;
    UNLOCK();
    bVar14 = *pbVar5;
  }
  plVar1 = _DAT_0f5523a8;
  lStack_848 = 0xf5522b8;
  cStack_840 = '\x01';
  pbStack_838 = pbVar5;
  plStack_830 = plVar6;
  plStack_828 = _DAT_0f5523a8;
  if (((bVar14 & 1) == 0) &&
     (cVar8 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_014ad871),
     cVar8 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  (**(code **)(*plVar1 + 0x18))(&bStack_1090,plVar1);
  pbStack_838 = (byte *)0x0;
  plStack_830 = (long *)0x0;
  lStack_10c8 = param_1;
  if (plVar6 != (long *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar10 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      func_0x0412c2d0(plVar6);
    }
    plVar6 = plStack_830;
    plStack_828 = (long *)0x0;
    if (plStack_830 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_830 + 1;
      lVar10 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plStack_830 + 0x10))(plStack_830);
        func_0x0412c2d0(plVar6);
      }
    }
  }
  if (cStack_840 == '\x01') {
    func_0x0eee02f0(lStack_848);
  }
  puStack_c58 = &uStack_108f;
  uStack_c50 = (ulong)(bStack_1090 >> 1);
  if ((bStack_1090 & 1) != 0) {
    uStack_c50 = uStack_1088;
    puStack_c58 = puStack_1080;
  }
  puStack_c48 = &UNK_0149ecb7;
  puStack_c40 = (undefined *)0x8;
  func_0x049151c0(&lStack_848,&puStack_c58,2,0x2f);
  if ((DAT_0f7b8fb8 == '\0') && (iVar9 = func_0x04108328(&DAT_0f7b8fb8), iVar9 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
  }
  uStack_1068 = uStack_448;
  plStack_1070 = &lStack_848;
  (**(code **)(_DAT_0f7b8f98 + 0x80))(&puStack_c58,&DAT_0f7b8f98,&plStack_1070);
  uStack_438 = 0x9035c1b25d67c7b0;
  puStack_430 = &UNK_0140f690;
  uStack_428 = 1;
  uStack_420 = 0x16;
  if (bStack_c18 == 0) {
    func_0x0eedea30(&bStack_1060);
    func_0x0eedeb80(2,0x2d,&puStack_c58,&bStack_1060,&uStack_438);
    if ((bStack_1060 & 1) != 0) {
      func_0x0412a280(puStack_1050,CONCAT71(auStack_105f,bStack_1060) & 0xfffffffffffffffe);
    }
  }
  lVar10 = lStack_c30;
  if ((bStack_c18 & 1) == 0) {
    if (lStack_c30 != 0) {
      while (lVar10 != lStack_c28) {
        func_0x048b3e80(lStack_c28 + -0x40);
        lStack_c28 = lStack_c28 + -0x40;
      }
      lStack_c28 = lVar10;
      func_0x0412a280(lStack_c30,lStack_c20 - lStack_c30);
    }
    puVar7 = puStack_c48;
    puVar16 = puStack_c40;
    if (puStack_c48 != (undefined *)0x0) {
      for (; puVar7 != puVar16; puVar16 = puVar16 + -0x50) {
        if ((puVar16[-8] == '\x01') && ((puVar16[-0x30] & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(puVar16 + -0x20),
                          *(ulong *)(puVar16 + -0x30) & 0xfffffffffffffffe);
        }
      }
      puStack_c40 = puVar7;
      func_0x0412a280(puStack_c48,lStack_c38 - (long)puStack_c48);
    }
  }
  func_0x0ee166c0(&bStack_10a8);
  if (puVar17 == (undefined7 *)0x0) {
    bStack_10c0 = 0;
    uStack_10bf = 0;
    bVar14 = bStack_10a8;
    uVar15 = uStack_10a0;
  }
  else {
    puStack_c58 = puVar17;
    func_0x0470d9a0(&bStack_10c0,&UNK_01437a03,3,0xc,&puStack_c58);
    bVar14 = bStack_10a8;
    uVar15 = uStack_10a0;
  }
  if ((bVar14 & 1) == 0) {
    uVar15 = (ulong)(bVar14 >> 1);
  }
  uVar19 = uVar15 + 8;
  plStack_1078 = param_2;
  if (0xfffffffffffffff7 < uVar19) {
    func_0x04882e30();
LAB_09a3daf5:
    func_0x04882e30();
LAB_09a3dafa:
    uVar13 = func_0x0eee02f0(0xf5522b8);
    func_0x041084d6(&DAT_0f7b8fb8);
    if ((bStack_1090 & 1) != 0) {
      func_0x0412a280(puStack_1080,CONCAT71(uStack_108f,bStack_1090) & 0xfffffffffffffffe);
    }
    func_0x0eee2d70(uVar13);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bStack_10a8 = bVar14;
  if (uVar19 < 0x17) {
    auStack_1057 = (undefined1  [7])0x0;
    puStack_1050 = (undefined8 *)0x0;
    bStack_1060 = (char)uVar19 * '\x02';
    auStack_105f = (undefined1  [7])0x656c69666f7270;
    cStack_1058 = '_';
    puVar18 = (undefined8 *)auStack_1057;
    if (uVar15 != 0) goto joined_r0x09a3d64d;
  }
  else {
    lVar10 = 0x1a;
    if ((uVar19 | 7) != 0x17) {
      lVar10 = (uVar19 | 7) + 1;
    }
    puStack_1050 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar10);
    if (puStack_1050 == (undefined8 *)0x0) {
      FUN_0eec74c0(lVar10,0);
    }
    bStack_1060 = (byte)lVar10 | 1;
    auStack_105f = SUB87((ulong)lVar10 >> 8,0);
    auStack_1057 = SUB87(uVar19 >> 8,0);
    *puStack_1050 = 0x5f656c69666f7270;
    puVar18 = puStack_1050 + 1;
    cStack_1058 = (char)uVar19;
joined_r0x09a3d64d:
    puVar17 = puStack_1098;
    if ((bVar14 & 1) == 0) {
      puVar17 = &uStack_10a7;
    }
    func_0x0eee2ee0(puVar18,puVar17,uVar15);
  }
  *(undefined1 *)((long)puVar18 + uVar15) = 0;
  uVar15 = (ulong)(bStack_10c0 >> 1);
  puVar3 = &uStack_10bf;
  if ((bStack_10c0 & 1) != 0) {
    uVar15 = uStack_10b8;
    puVar3 = puStack_10b0;
  }
  puVar11 = (ulong *)func_0x0412f8c0(&bStack_1060,puVar3,uVar15);
  uVar15 = puVar11[2];
  uVar19 = *puVar11;
  puStack_430 = (undefined *)puVar11[1];
  *puVar11 = 0;
  puVar11[1] = 0;
  puVar11[2] = 0;
  puVar16 = (undefined *)(uVar19 >> 1 & 0x7f);
  uVar4 = (long)&uStack_438 + 1;
  if ((uVar19 & 1) != 0) {
    puVar16 = puStack_430;
    uVar4 = uVar15;
  }
  uStack_438 = uVar19;
  uStack_428 = uVar15;
  func_0x0eee2dd0(&puStack_c58,0,0x408);
  if (puVar16 < (undefined *)0x400) {
    if (puVar16 != (undefined *)0x0) {
      func_0x0eee2ee0(&puStack_c58,uVar4,puVar16);
    }
    puStack_858 = puVar16;
    *(undefined1 *)((long)&puStack_c58 + (long)puVar16) = 0;
  }
  if ((uVar19 & 1) != 0) {
    func_0x0412a280(uVar15,uStack_438 & 0xfffffffffffffffe);
  }
  if ((bStack_1060 & 1) != 0) {
    func_0x0412a280(puStack_1050,CONCAT71(auStack_105f,bStack_1060) & 0xfffffffffffffffe);
  }
  bStack_1060 = (byte)&lStack_848;
  auStack_105f = SUB87((ulong)&lStack_848 >> 8,0);
  cStack_1058 = (char)uStack_448;
  auStack_1057 = SUB87((ulong)uStack_448 >> 8,0);
  puStack_1048 = puStack_858;
  puStack_1050 = &puStack_c58;
  func_0x049151c0(&uStack_438,&bStack_1060,2,0x2f);
  func_0x0eee2dd0(&bStack_1060,0,0x408);
  plVar6 = plStack_1078;
  uVar15 = 0;
  if (uStack_38 < 0x400) {
    if (uStack_38 != 0) {
      func_0x0eee2f00(&bStack_1060,&uStack_438,uStack_38);
    }
    uStack_c60 = uStack_38;
    auStack_105f[uStack_38 - 1] = 0;
    uVar15 = uStack_c60;
    if (10 < uStack_c60 - 0x3f5) goto LAB_09a3d809;
    uStack_10e0 = uStack_10e0 & 0xffffffffffffff00;
    lVar10 = (long)&uStack_10e0 + 1;
    uVar15 = 0;
    lVar20 = lStack_10c8;
  }
  else {
LAB_09a3d809:
    *(undefined8 *)(auStack_105f + (uVar15 - 1)) = 0x666f72707570632e;
    *(undefined4 *)(auStack_105f + uVar15 + 6) = 0x656c6966;
    lVar10 = uStack_c60 + 2;
    uStack_c60 = uStack_c60 + 0xb;
    auStack_1057[lVar10] = 0;
    uVar15 = uStack_c60;
    if (0xfffffffffffffff7 < uStack_c60) goto LAB_09a3daf5;
    if (uStack_c60 < 0x17) {
      uStack_10e0 = CONCAT71(uStack_10e0._1_7_,(char)uStack_c60 * '\x02');
      lVar10 = (long)&uStack_10e0 + 1;
      lVar20 = lStack_10c8;
      if (uStack_c60 == 0) {
        uVar15 = 0;
        goto LAB_09a3d93b;
      }
    }
    else {
      uVar19 = 0x1a;
      if ((uStack_c60 | 7) != 0x17) {
        uVar19 = (uStack_c60 | 7) + 1;
      }
      lVar10 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar19);
      lVar20 = lStack_10c8;
      if (lVar10 == 0) {
        FUN_0eec74c0(uVar19,0);
      }
      uStack_10e0 = uVar19 | 1;
      uStack_10d8 = uVar15;
      lStack_10d0 = lVar10;
    }
    func_0x0eee2f00(lVar10,&bStack_1060,uVar15);
  }
LAB_09a3d93b:
  *(undefined1 *)(lVar10 + uVar15) = 0;
  if ((bStack_10c0 & 1) == 0) {
    if ((bStack_10a8 & 1) == 0) goto LAB_09a3d94e;
LAB_09a3d998:
    func_0x0412a280(puStack_1098,CONCAT71(uStack_10a7,bStack_10a8) & 0xfffffffffffffffe);
    if ((bStack_1090 & 1) != 0) goto LAB_09a3d9b2;
LAB_09a3d955:
    lVar10 = *(long *)(lVar20 + 8);
    puVar12 = *(undefined4 **)(lVar10 + 8);
    if (puVar12 < *(undefined4 **)(lVar10 + 0x10)) goto LAB_09a3d963;
LAB_09a3d9d3:
    puVar12 = (undefined4 *)func_0x09a3dcd0(lVar10,&uStack_10e0);
  }
  else {
    func_0x0412a280(puStack_10b0,
                    CONCAT62(uStack_10be,CONCAT11(uStack_10bf,bStack_10c0)) & 0xfffffffffffffffe);
    if ((bStack_10a8 & 1) != 0) goto LAB_09a3d998;
LAB_09a3d94e:
    if ((bStack_1090 & 1) == 0) goto LAB_09a3d955;
LAB_09a3d9b2:
    func_0x0412a280(puStack_1080,CONCAT71(uStack_108f,bStack_1090) & 0xfffffffffffffffe);
    lVar10 = *(long *)(lVar20 + 8);
    puVar12 = *(undefined4 **)(lVar10 + 8);
    if (*(undefined4 **)(lVar10 + 0x10) <= puVar12) goto LAB_09a3d9d3;
LAB_09a3d963:
    if ((uStack_10e0 & 1) == 0) {
      *(long *)(puVar12 + 4) = lStack_10d0;
      *puVar12 = (undefined4)uStack_10e0;
      puVar12[1] = uStack_10e0._4_4_;
      puVar12[2] = (undefined4)uStack_10d8;
      puVar12[3] = uStack_10d8._4_4_;
    }
    else {
      func_0x0412e5e0(puVar12,lStack_10d0,uStack_10d8);
    }
    puVar12 = puVar12 + 6;
    *(undefined4 **)(lVar10 + 8) = puVar12;
  }
  *(undefined4 **)(lVar10 + 8) = puVar12;
  plStack_828 = (long *)0x0;
  (**(code **)(*plVar6 + 0x88))(plVar6,&lStack_848,&uStack_10e0,1);
  if (plStack_828 == &lStack_848) {
    lVar10 = 0x20;
  }
  else {
    lVar10 = 0x28;
    if (plStack_828 == (long *)0x0) goto joined_r0x09a3da83;
  }
  (**(code **)(*plStack_828 + lVar10))();
joined_r0x09a3da83:
  if ((uStack_10e0 & 1) != 0) {
    func_0x0412a280(lStack_10d0,uStack_10e0 & 0xfffffffffffffffe);
  }
  return;
}


