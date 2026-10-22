/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x88b5250 (ELF vaddr 0x87b5250)
 * Label: callee-of:0x871a310
 * Body:  [[088b5250, 088b561f]]
 * Ghidra: FUN_088b5250
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_088b5250(undefined4 *param_1,long *param_2)

{
  uint *puVar1;
  long *plVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  char cVar20;
  int iVar21;
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
  
  func_0x088b9260();
  uVar26 = (ulong)(bStack_b8 >> 1);
  puVar11 = auStack_b7;
  if ((bStack_b8 & 1) != 0) {
    uVar26 = uStack_b0;
    puVar11 = puStack_a8;
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
        uVar25 = ((int)(char)puVar11[uVar27 + 3] ^
                 ((int)(char)puVar11[uVar27 + 2] ^
                 ((int)(char)puVar11[uVar27 + 1] ^ ((int)(char)puVar11[uVar27] ^ uVar25) * 0x1000193
                 ) * 0x1000193) * 0x1000193) * 0x1000193;
        uVar27 = uVar27 + 4;
      } while ((uVar26 & 0xfffffffffffffffc) != uVar27);
    }
    if (uVar24 != 0) {
      uVar26 = 0;
      do {
        uVar25 = ((int)(char)puVar11[uVar26 + uVar27] ^ uVar25) * 0x1000193;
        uVar26 = uVar26 + 1;
      } while (uVar24 != uVar26);
    }
  }
  *(undefined4 *)(param_2 + 5) = 2;
  *(uint *)((long)param_2 + 0x2c) = uVar25;
  if ((DAT_0f5dfd20 == '\0') && (iVar21 = func_0x04108328(&DAT_0f5dfd20), iVar21 != 0)) {
    func_0x088b58a0(0xf5dfd08);
    func_0x0410844d(&DAT_0f5dfd20);
  }
  auStack_170[0] = *(uint *)((long)param_2 + 0x2c);
  lStack_168 = 0;
  uStack_160 = 3;
  uStack_158 = 1;
  uStack_150 = 0;
  puStack_148 = &UNK_088b98c0;
  puStack_140 = &SUB_048b06d0;
  puStack_138 = &SUB_088b56b0;
  puStack_130 = &UNK_088b9be0;
  puStack_128 = &UNK_088b9bf0;
  uStack_120 = 0;
  uStack_118 = 0;
  plStack_110 = (long *)0x0;
  func_0x048b05a0(param_2 + 1,auStack_170);
  plVar19 = plStack_110;
  if (plStack_110 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_110 + 1;
    lVar23 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*plStack_110 + 0x10))(plStack_110);
      func_0x0412c2d0(plVar19);
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
  func_0x088b9650(auStack_170,&uStack_108,auStack_e0);
  if (uStack_158._4_4_ == 2) {
    piVar22 = *(int **)(*(long *)(CONCAT44(uStack_15c,uStack_160) + 0x78) + 0x60);
    iVar21 = *piVar22;
    while (iVar21 != (int)uStack_158) {
      piVar22 = piVar22 + 0x16;
      iVar21 = *piVar22;
    }
    lVar23 = *(long *)(piVar22 + 0xc);
    while (lVar23 != lStack_168) {
      piVar22 = *(int **)(piVar22 + 0xe);
      lVar23 = *(long *)(piVar22 + 0xc);
    }
  }
  else {
    if (uStack_158._4_4_ != 1) {
      if (uStack_158._4_4_ == 0) {
        puVar1 = (uint *)(CONCAT44(uStack_15c,uStack_160) + 0x18);
        *puVar1 = *puVar1 | 0x90000;
      }
      cVar20 = (char)param_2[7];
      goto joined_r0x088b54a8;
    }
    piVar22 = *(int **)(*(long *)(CONCAT44(uStack_15c,uStack_160) + 0x78) + 0x48);
    iVar21 = *piVar22;
    while (iVar21 != (int)uStack_158) {
      piVar22 = piVar22 + 0x1a;
      iVar21 = *piVar22;
    }
  }
  *(byte *)((long)piVar22 + 0x12) = *(byte *)((long)piVar22 + 0x12) | 9;
  cVar20 = (char)param_2[7];
joined_r0x088b54a8:
  if (cVar20 == '\0') {
    func_0x088b9930(auStack_170,param_2,&UNK_013ad25e,0x16);
  }
  iVar21 = *(int *)((long)param_2 + 0x34);
  lVar23 = func_0x088b56b0(*param_2 + 0x18);
  piVar3 = *(int **)(*(long *)(lVar23 + 0x68) + 0x28);
  for (piVar22 = *(int **)(*(long *)(lVar23 + 0x68) + 0x20);
      (piVar22 != piVar3 && (*piVar22 != iVar21)); piVar22 = piVar22 + 0xe) {
  }
  if ((piVar22 == piVar3) &&
     (cVar20 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012aac04),
     cVar20 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_170[0] = auStack_170[0] & 0xffffff00;
  FUN_05d9c620(piVar22 + 2,(long)param_2 + 0x2c,(long)param_2 + 0x2c,auStack_170);
  lVar23 = *param_2;
  uVar4 = *(undefined4 *)((long)param_2 + 4);
  lVar12 = param_2[1];
  uVar5 = *(undefined4 *)((long)param_2 + 0xc);
  lVar13 = param_2[2];
  uVar6 = *(undefined4 *)((long)param_2 + 0x14);
  lVar14 = param_2[3];
  uVar7 = *(undefined4 *)((long)param_2 + 0x1c);
  lVar15 = param_2[4];
  uVar8 = *(undefined4 *)((long)param_2 + 0x24);
  lVar16 = param_2[5];
  uVar9 = *(undefined4 *)((long)param_2 + 0x2c);
  lVar17 = param_2[6];
  uVar10 = *(undefined4 *)((long)param_2 + 0x34);
  lVar18 = param_2[7];
  param_1[0xb] = *(undefined4 *)((long)param_2 + 0x2c);
  param_1[0xc] = (int)lVar17;
  param_1[0xd] = uVar10;
  param_1[0xe] = (int)lVar18;
  param_1[8] = (int)lVar15;
  param_1[9] = uVar8;
  param_1[10] = (int)lVar16;
  param_1[0xb] = uVar9;
  param_1[4] = (int)lVar13;
  param_1[5] = uVar6;
  param_1[6] = (int)lVar14;
  param_1[7] = uVar7;
  *param_1 = (int)lVar23;
  param_1[1] = uVar4;
  param_1[2] = (int)lVar12;
  param_1[3] = uVar5;
  FUN_048b0bc0(auStack_e0);
  return param_1;
}


