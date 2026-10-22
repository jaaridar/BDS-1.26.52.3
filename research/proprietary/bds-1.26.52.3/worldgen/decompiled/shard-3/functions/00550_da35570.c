/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xdb35570 (ELF vaddr 0xda35570)
 * Label: callee2-of:0xda34c00
 * Body:  [[0db35570, 0db359aa]]
 * Ghidra: FUN_0db35570
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_0db35570(undefined4 *param_1,long *param_2,long param_3,ulong param_4)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  ulong uStack_160;
  long lStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined2 uStack_d0;
  undefined1 uStack_cc;
  undefined1 uStack_c8;
  undefined1 uStack_c4;
  undefined4 auStack_c0 [2];
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined1 *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if (param_4 == 0) {
    uVar17 = 0x811c9dc5;
  }
  else {
    uVar15 = (ulong)((uint)param_4 & 3);
    if (param_4 < 4) {
      uVar17 = 0x811c9dc5;
      uVar19 = 0;
    }
    else {
      uVar17 = 0x811c9dc5;
      uVar19 = 0;
      do {
        uVar17 = ((int)*(char *)(param_3 + 3 + uVar19) ^
                 ((int)*(char *)(param_3 + 2 + uVar19) ^
                 ((int)*(char *)(param_3 + 1 + uVar19) ^
                 ((int)*(char *)(param_3 + uVar19) ^ uVar17) * 0x1000193) * 0x1000193) * 0x1000193)
                 * 0x1000193;
        uVar19 = uVar19 + 4;
      } while ((param_4 & 0xfffffffffffffffc) != uVar19);
    }
    if (uVar15 != 0) {
      uVar18 = 0;
      do {
        uVar17 = ((int)*(char *)(uVar19 + param_3 + uVar18) ^ uVar17) * 0x1000193;
        uVar18 = uVar18 + 1;
      } while (uVar15 != uVar18);
    }
  }
  *(undefined4 *)(param_2 + 5) = 3;
  *(uint *)((long)param_2 + 0x2c) = uVar17;
  func_0x0db763d0(*param_2 + 0x18);
  puStack_178 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puStack_178 == (undefined8 *)0x0) {
    FUN_0eec74c0(8,0);
  }
  uVar15 = uStack_168;
  *puStack_178 = &UNK_0f493eb0;
  uStack_170 = 0;
  if (param_4 < 0xfffffffffffffff8) {
    if (param_4 < 0x17) {
      cVar8 = (char)param_4 * '\x02';
      uStack_168 = CONCAT71(uStack_168._1_7_,cVar8);
      if (param_4 != 0) {
        func_0x0eee2f00((long)&uStack_168 + 1,param_3,param_4);
        *(undefined1 *)((long)&uStack_168 + param_4 + 1) = 0;
        uStack_150 = CONCAT71(uStack_150._1_7_,cVar8);
        lVar16 = (long)&uStack_150 + 1;
        goto LAB_0db3574d;
      }
      uStack_168 = uVar15 & 0xffffffffffff0000;
      uStack_150 = uStack_150 & 0xffffffffffffff00;
      lVar16 = (long)&uStack_150 + 1;
    }
    else {
      uVar15 = 0x1a;
      if ((param_4 | 7) != 0x17) {
        uVar15 = (param_4 | 7) + 1;
      }
      lVar16 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15);
      if (lVar16 == 0) {
        FUN_0eec74c0(uVar15,0);
      }
      uVar19 = uVar15 | 1;
      uStack_168 = uVar19;
      uStack_160 = param_4;
      lStack_158 = lVar16;
      func_0x0eee2f00(lVar16,param_3,param_4);
      *(undefined1 *)(lVar16 + param_4) = 0;
      lVar16 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15);
      uStack_150 = uVar19;
      uStack_148 = param_4;
      lStack_140 = lVar16;
      if (lVar16 == 0) {
        FUN_0eec74c0(uVar15,0);
      }
LAB_0db3574d:
      func_0x0eee2f00(lVar16,param_3,param_4);
    }
    *(undefined1 *)(lVar16 + param_4) = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_108 = 0x3f600000;
    func_0x048afb10(&uStack_138,8);
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_d0 = 0xff00;
    uStack_cc = 0;
    uStack_c8 = 0;
    uStack_c4 = 0;
    if (DAT_0f7368c0 != '\0') goto LAB_0db357d9;
  }
  else {
    func_0x04882e30();
  }
  iVar14 = func_0x04108328(&DAT_0f7368c0);
  if (iVar14 != 0) {
    func_0x0db765c0(0xf7368a8);
    func_0x0410844d(&DAT_0f7368c0);
  }
LAB_0db357d9:
  auStack_c0[0] = *(undefined4 *)((long)param_2 + 0x2c);
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 2;
  uStack_a0 = 1;
  puStack_98 = &UNK_0db78a60;
  puStack_90 = &UNK_07d98660;
  puStack_88 = &SUB_0db78670;
  puStack_80 = &UNK_0db78a80;
  puStack_78 = &UNK_0db79150;
  uStack_70 = 0;
  uStack_68 = 0;
  plStack_60 = (long *)0x0;
  FUN_048b05a0(param_2 + 1,auStack_c0);
  plVar13 = plStack_60;
  if (plStack_60 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_60 + 1;
    lVar16 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      func_0x0412c2d0(plVar13);
    }
  }
  uStack_58 = (undefined4)param_2[1];
  uStack_54 = *(undefined4 *)((long)param_2 + 0xc);
  uStack_50 = (undefined4)param_2[2];
  uStack_4c = *(undefined4 *)((long)param_2 + 0x14);
  uStack_48 = (undefined4)param_2[3];
  uStack_44 = *(undefined4 *)((long)param_2 + 0x1c);
  uStack_40 = (undefined4)param_2[4];
  uStack_3c = *(undefined4 *)((long)param_2 + 0x24);
  func_0x0db77db0(auStack_c0,&uStack_58,&puStack_178);
  *(char *)(param_1 + 0xc) = (char)param_2[6];
  lVar16 = *param_2;
  uVar2 = *(undefined4 *)((long)param_2 + 4);
  lVar9 = param_2[1];
  uVar3 = *(undefined4 *)((long)param_2 + 0xc);
  lVar10 = param_2[2];
  uVar4 = *(undefined4 *)((long)param_2 + 0x14);
  lVar11 = param_2[3];
  uVar5 = *(undefined4 *)((long)param_2 + 0x1c);
  uVar6 = *(undefined4 *)((long)param_2 + 0x24);
  lVar12 = param_2[5];
  uVar7 = *(undefined4 *)((long)param_2 + 0x2c);
  param_1[8] = (int)param_2[4];
  param_1[9] = uVar6;
  param_1[10] = (int)lVar12;
  param_1[0xb] = uVar7;
  param_1[4] = (int)lVar10;
  param_1[5] = uVar4;
  param_1[6] = (int)lVar11;
  param_1[7] = uVar5;
  *param_1 = (int)lVar16;
  param_1[1] = uVar2;
  param_1[2] = (int)lVar9;
  param_1[3] = uVar3;
  func_0x048b0bc0(&puStack_178);
  return param_1;
}


