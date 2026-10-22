/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xeca9a20 (ELF vaddr 0xeba9a20)
 * Label: callee-of:0xeba2170
 * Body:  [[0eca9a20, 0eca9e88]]
 * Ghidra: FUN_0eca9a20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0eca9a20(long *param_1,long *param_2,long param_3,ulong param_4)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  uint uVar18;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined1 *puStack_140;
  undefined *puStack_138;
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
  uint *puStack_e8;
  undefined8 uStack_e0;
  uint uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  long lStack_b0;
  undefined1 uStack_34;
  
  if (param_4 == 0) {
    uVar18 = 0x811c9dc5;
  }
  else {
    uVar13 = (ulong)((uint)param_4 & 3);
    if (param_4 < 4) {
      uVar18 = 0x811c9dc5;
      uVar15 = 0;
    }
    else {
      uVar18 = 0x811c9dc5;
      uVar15 = 0;
      do {
        uVar18 = ((int)*(char *)(param_3 + 3 + uVar15) ^
                 ((int)*(char *)(param_3 + 2 + uVar15) ^
                 ((int)*(char *)(param_3 + 1 + uVar15) ^
                 ((int)*(char *)(param_3 + uVar15) ^ uVar18) * 0x1000193) * 0x1000193) * 0x1000193)
                 * 0x1000193;
        uVar15 = uVar15 + 4;
      } while ((param_4 & 0xfffffffffffffffc) != uVar15);
    }
    if (uVar13 != 0) {
      uVar17 = 0;
      do {
        uVar18 = ((int)*(char *)(uVar15 + param_3 + uVar17) ^ uVar18) * 0x1000193;
        uVar17 = uVar17 + 1;
      } while (uVar13 != uVar17);
    }
  }
  lVar14 = *param_2;
  if ((DAT_0f772d40 == '\0') && (iVar12 = func_0x04108328(&DAT_0f772d40), iVar12 != 0)) {
    func_0x0ecf8dc0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f772cc0,0xf53dab8);
    func_0x0410844d(&DAT_0f772d40);
  }
  plVar16 = (long *)(*(long *)(lVar14 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar14 + 0x20) - *(long *)(lVar14 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f772cc0 + 4)) * 8);
  do {
    lVar2 = *plVar16;
    lVar9 = _DAT_0f772d38;
    if (lVar2 == -1) goto joined_r0x0eca9b59;
    plVar16 = (long *)(*(long *)(lVar14 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(lVar14 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f772cc0 + 4));
  if (plVar16 != *(long **)(lVar14 + 0x38)) {
    lVar9 = *(long *)(plVar16[2] + 0x78);
  }
joined_r0x0eca9b59:
  if (lVar9 != 0) {
    for (puStack_e8 = *(uint **)(lVar9 + 0x48); puStack_e8 != *(uint **)(lVar9 + 0x50);
        puStack_e8 = puStack_e8 + 0x1a) {
      if (*puStack_e8 == uVar18) goto LAB_0eca9ba2;
    }
  }
  puStack_e8 = (uint *)0x0;
  uStack_e0 = 0;
  FUN_048b0d20(&puStack_e8);
  if (puStack_e8 != (uint *)0x0) {
LAB_0eca9ba2:
    *(undefined1 *)(*(long *)(puStack_e8 + 0x16) + 0xb4) = 1;
    param_1[6] = param_2[6];
    lVar14 = *param_2;
    lVar2 = param_2[1];
    lVar9 = param_2[2];
    lVar10 = param_2[3];
    lVar11 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = lVar11;
    param_1[2] = lVar9;
    param_1[3] = lVar10;
    *param_1 = lVar14;
    param_1[1] = lVar2;
    return;
  }
  *(undefined4 *)(param_2 + 5) = 3;
  *(uint *)((long)param_2 + 0x2c) = uVar18;
  func_0x0dab04e0(&puStack_e8);
  if (param_4 < 0xfffffffffffffff8) {
    if (param_4 < 0x17) {
      uStack_170 = CONCAT71(uStack_170._1_7_,(char)param_4 * '\x02');
      lVar14 = (long)&uStack_170 + 1;
      if (param_4 != 0) goto LAB_0eca9ddb;
                    /* WARNING: Ignoring partial resolution of indirect */
      uStack_170._1_1_ = 0;
    }
    else {
      uVar13 = 0x1a;
      if ((param_4 | 7) != 0x17) {
        uVar13 = (param_4 | 7) + 1;
      }
      lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar13);
      if (lVar14 == 0) {
        FUN_0eec74c0(uVar13,0);
      }
      uStack_170 = uVar13 | 1;
      uStack_168 = param_4;
      lStack_160 = lVar14;
LAB_0eca9ddb:
      func_0x0eee2f00(lVar14,param_3,param_4);
      *(undefined1 *)(lVar14 + param_4) = 0;
    }
    if ((uStack_c0 & 1) != 0) {
      func_0x0412a280(lStack_b0,CONCAT44(uStack_bc,uStack_c0) & 0xfffffffffffffffe);
    }
    lStack_b0 = lStack_160;
    uStack_c0 = (uint)uStack_170;
    uStack_bc = uStack_170._4_4_;
    uStack_b8 = (undefined4)uStack_168;
    uStack_b4 = uStack_168._4_4_;
    uStack_34 = 1;
    if (DAT_0f772d60 != '\0') goto LAB_0eca9c70;
  }
  else {
    func_0x04882e30();
  }
  iVar12 = func_0x04108328(&DAT_0f772d60);
  if (iVar12 != 0) {
    func_0x0ecf8ed0();
    func_0x0410844d(&DAT_0f772d60);
  }
LAB_0eca9c70:
  uStack_170 = CONCAT44(uStack_170._4_4_,*(undefined4 *)((long)param_2 + 0x2c));
  uStack_168 = 0;
  lStack_160 = CONCAT44(lStack_160._4_4_,3);
  uStack_158 = 1;
  uStack_150 = 0;
  puStack_148 = &UNK_0dab0610;
  puStack_140 = &SUB_048b06d0;
  puStack_138 = &UNK_0dab0620;
  puStack_130 = &UNK_0ecfa220;
  puStack_128 = &UNK_0ecfa230;
  uStack_120 = 0;
  uStack_118 = 0;
  plStack_110 = (long *)0x0;
  FUN_048b05a0(param_2 + 1,&uStack_170);
  plVar16 = plStack_110;
  if (plStack_110 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_110 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_110 + 0x10))(plStack_110);
      func_0x0412c2d0(plVar16);
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
  func_0x0ecf9fb0(&uStack_170,&uStack_108,&puStack_e8);
  param_1[6] = param_2[6];
  lVar14 = *param_2;
  uVar3 = *(undefined4 *)((long)param_2 + 4);
  lVar2 = param_2[1];
  uVar4 = *(undefined4 *)((long)param_2 + 0xc);
  lVar9 = param_2[2];
  uVar5 = *(undefined4 *)((long)param_2 + 0x14);
  lVar10 = param_2[3];
  uVar6 = *(undefined4 *)((long)param_2 + 0x1c);
  uVar7 = *(undefined4 *)((long)param_2 + 0x24);
  lVar11 = param_2[5];
  uVar8 = *(undefined4 *)((long)param_2 + 0x2c);
  *(int *)(param_1 + 4) = (int)param_2[4];
  *(undefined4 *)((long)param_1 + 0x24) = uVar7;
  *(int *)(param_1 + 5) = (int)lVar11;
  *(undefined4 *)((long)param_1 + 0x2c) = uVar8;
  *(int *)(param_1 + 2) = (int)lVar9;
  *(undefined4 *)((long)param_1 + 0x14) = uVar5;
  *(int *)(param_1 + 3) = (int)lVar10;
  *(undefined4 *)((long)param_1 + 0x1c) = uVar6;
  *(int *)param_1 = (int)lVar14;
  *(undefined4 *)((long)param_1 + 4) = uVar3;
  *(int *)(param_1 + 1) = (int)lVar2;
  *(undefined4 *)((long)param_1 + 0xc) = uVar4;
  func_0x048b0bc0(&puStack_e8);
  return;
}


