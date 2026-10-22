/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe510f80 (ELF vaddr 0xe410f80)
 * Label: string:Factory<Type> cereal::BasicFactory<SharedTypes::v1_21_20::Ji
 * Body:  [[0e510f80, 0e5113f9]]
 * Ghidra: FUN_0e510f80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_0e510f80(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  uint *puVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  char cVar19;
  int iVar20;
  int *piVar21;
  int *piVar22;
  long lVar23;
  ulong uVar24;
  uint uVar25;
  ulong uVar26;
  ulong uVar27;
  uint auStack_170 [2];
  long lStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined1 *puStack_140;
  undefined1 *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined4 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 auStack_e0 [40];
  byte bStack_b8;
  undefined1 auStack_b7 [7];
  ulong uStack_b0;
  undefined1 *puStack_a8;
  
  func_0x0e6a0f20(auStack_e0,param_3,param_4);
  uVar26 = (ulong)(bStack_b8 >> 1);
  puVar10 = auStack_b7;
  if ((bStack_b8 & 1) != 0) {
    uVar26 = uStack_b0;
    puVar10 = puStack_a8;
  }
  if (uVar26 == 0) {
    uVar25 = 0x811c9dc5;
  }
  else {
    uVar24 = (ulong)((uint)uVar26 & 3);
    if (uVar26 < 4) {
      uVar25 = 0x811c9dc5;
      uVar27 = 0;
    }
    else {
      uVar25 = 0x811c9dc5;
      uVar27 = 0;
      do {
        uVar25 = ((int)(char)puVar10[uVar27 + 3] ^
                 ((int)(char)puVar10[uVar27 + 2] ^
                 ((int)(char)puVar10[uVar27 + 1] ^ ((int)(char)puVar10[uVar27] ^ uVar25) * 0x1000193
                 ) * 0x1000193) * 0x1000193) * 0x1000193;
        uVar27 = uVar27 + 4;
      } while ((uVar26 & 0xfffffffffffffffc) != uVar27);
    }
    if (uVar24 != 0) {
      uVar26 = 0;
      do {
        uVar25 = ((int)(char)puVar10[uVar26 + uVar27] ^ uVar25) * 0x1000193;
        uVar26 = uVar26 + 1;
      } while (uVar24 != uVar26);
    }
  }
  *(undefined4 *)(param_2 + 5) = 2;
  *(uint *)((long)param_2 + 0x2c) = uVar25;
  if ((DAT_0f754ef8 == '\0') && (iVar20 = func_0x04108328(&DAT_0f754ef8), iVar20 != 0)) {
    func_0x0e4b0a00(0xf754ee0);
    func_0x0410844d(&DAT_0f754ef8);
  }
  auStack_170[0] = *(uint *)((long)param_2 + 0x2c);
  lStack_168 = 0;
  uStack_160 = 3;
  uStack_158 = 1;
  uStack_150 = 0;
  puStack_148 = &UNK_0e4b1060;
  puStack_140 = &SUB_048b06d0;
  puStack_138 = &SUB_0e4b0a70;
  puStack_130 = &UNK_0e6a1580;
  puStack_128 = &UNK_0e6a1590;
  uStack_120 = 0;
  uStack_118 = 0;
  plStack_110 = (long *)0x0;
  FUN_048b05a0(param_2 + 1,auStack_170);
  plVar18 = plStack_110;
  if (plStack_110 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_110 + 1;
    lVar23 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*plStack_110 + 0x10))(plStack_110);
      FUN_0412c2d0(plVar18);
    }
  }
  uStack_108 = (undefined4)param_2[1];
  uStack_104 = *(undefined4 *)((long)param_2 + 0xc);
  uStack_100 = (undefined4)param_2[2];
  uStack_fc = *(undefined4 *)((long)param_2 + 0x14);
  uStack_f8 = (undefined4)param_2[3];
  uStack_f4 = *(undefined4 *)((long)param_2 + 0x1c);
  uStack_f0 = (undefined4)param_2[4];
  uStack_ec = *(undefined4 *)((long)param_2 + 0x24);
  func_0x0e6a1310(auStack_170,&uStack_108,auStack_e0);
  if (uStack_158._4_4_ == 2) {
    piVar21 = *(int **)(*(long *)(CONCAT44(uStack_15c,uStack_160) + 0x78) + 0x60);
    iVar20 = *piVar21;
    while (iVar20 != (int)uStack_158) {
      piVar21 = piVar21 + 0x16;
      iVar20 = *piVar21;
    }
    lVar23 = *(long *)(piVar21 + 0xc);
    while (lVar23 != lStack_168) {
      piVar21 = *(int **)(piVar21 + 0xe);
      lVar23 = *(long *)(piVar21 + 0xc);
    }
  }
  else {
    if (uStack_158._4_4_ != 1) {
      if (uStack_158._4_4_ == 0) {
        puVar1 = (uint *)(CONCAT44(uStack_15c,uStack_160) + 0x18);
        *puVar1 = *puVar1 | 0x90000;
      }
      cVar19 = (char)param_2[7];
      goto joined_r0x0e511223;
    }
    piVar21 = *(int **)(*(long *)(CONCAT44(uStack_15c,uStack_160) + 0x78) + 0x48);
    iVar20 = *piVar21;
    while (iVar20 != (int)uStack_158) {
      piVar21 = piVar21 + 0x1a;
      iVar20 = *piVar21;
    }
  }
  *(byte *)((long)piVar21 + 0x12) = *(byte *)((long)piVar21 + 0x12) | 9;
  cVar19 = (char)param_2[7];
joined_r0x0e511223:
  if (cVar19 == '\0') {
    *(undefined4 *)((long)param_2 + 0x34) = 0xbb8863ad;
    *(undefined1 *)(param_2 + 7) = 1;
    auStack_170[0] = 0xbb8863ad;
    lVar23 = func_0x0e4b0a70(*param_2 + 0x18);
    lVar23 = *(long *)(lVar23 + 0x68);
    piVar22 = *(int **)(lVar23 + 0x28);
    for (piVar21 = *(int **)(lVar23 + 0x20); (piVar21 != piVar22 && (*piVar21 != -0x44779c53));
        piVar21 = piVar21 + 0xe) {
    }
    if (piVar21 == piVar22) {
      if (piVar22 < *(int **)(lVar23 + 0x30)) {
        *piVar22 = -0x44779c53;
        piVar22[2] = 0;
        piVar22[3] = 0;
        piVar22[4] = 0;
        piVar22[5] = 0;
        piVar22[6] = 0;
        piVar22[7] = 0;
        piVar22[8] = 0;
        piVar22[9] = 0;
        piVar22[10] = 0x3f800000;
        *(undefined1 *)(piVar22 + 0xc) = 0;
        *(undefined1 *)(piVar22 + 0xd) = 0;
        piVar22 = piVar22 + 0xe;
      }
      else {
        piVar22 = (int *)func_0x05d9c2b0(lVar23 + 0x20,auStack_170);
      }
      *(int **)(lVar23 + 0x28) = piVar22;
    }
    else if ((*(long *)(piVar21 + 8) != 0) &&
            (cVar19 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_01320cfb)
            , cVar19 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  iVar20 = *(int *)((long)param_2 + 0x34);
  lVar23 = func_0x0e4b0a70(*param_2 + 0x18);
  piVar22 = *(int **)(*(long *)(lVar23 + 0x68) + 0x28);
  for (piVar21 = *(int **)(*(long *)(lVar23 + 0x68) + 0x20);
      (piVar21 != piVar22 && (*piVar21 != iVar20)); piVar21 = piVar21 + 0xe) {
  }
  if ((piVar21 == piVar22) &&
     (cVar19 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0140dd14),
     cVar19 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_170[0] = auStack_170[0] & 0xffffff00;
  FUN_05d9c620(piVar21 + 2,(long)param_2 + 0x2c,(long)param_2 + 0x2c,auStack_170);
  lVar23 = *param_2;
  uVar3 = *(undefined4 *)((long)param_2 + 4);
  lVar11 = param_2[1];
  uVar4 = *(undefined4 *)((long)param_2 + 0xc);
  lVar12 = param_2[2];
  uVar5 = *(undefined4 *)((long)param_2 + 0x14);
  lVar13 = param_2[3];
  uVar6 = *(undefined4 *)((long)param_2 + 0x1c);
  lVar14 = param_2[4];
  uVar7 = *(undefined4 *)((long)param_2 + 0x24);
  lVar15 = param_2[5];
  uVar8 = *(undefined4 *)((long)param_2 + 0x2c);
  lVar16 = param_2[6];
  uVar9 = *(undefined4 *)((long)param_2 + 0x34);
  lVar17 = param_2[7];
  param_1[0xb] = *(undefined4 *)((long)param_2 + 0x2c);
  param_1[0xc] = (int)lVar16;
  param_1[0xd] = uVar9;
  param_1[0xe] = (int)lVar17;
  param_1[8] = (int)lVar14;
  param_1[9] = uVar7;
  param_1[10] = (int)lVar15;
  param_1[0xb] = uVar8;
  param_1[4] = (int)lVar12;
  param_1[5] = uVar5;
  param_1[6] = (int)lVar13;
  param_1[7] = uVar6;
  *param_1 = (int)lVar23;
  param_1[1] = uVar3;
  param_1[2] = (int)lVar11;
  param_1[3] = uVar4;
  func_0x048b0bc0(auStack_e0);
  return param_1;
}


