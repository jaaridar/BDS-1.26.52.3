/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xeca9ea0 (ELF vaddr 0xeba9ea0)
 * Label: callee-of:0xeba2170
 * Body:  [[0eca9ea0, 0ecaa26c]]
 * Ghidra: FUN_0eca9ea0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0eca9ea0(undefined4 *param_1,undefined4 *param_2,long param_3,long param_4)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  long *plVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  char *pcVar18;
  uint uVar19;
  undefined4 auStack_168 [2];
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined4 uStack_118;
  undefined8 uStack_110;
  long *plStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined2 uStack_58;
  undefined1 uStack_54;
  undefined1 uStack_50;
  undefined1 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar15 = (ulong)((uint)param_4 & 3);
  uVar19 = 0x811c9dc5;
  uVar17 = 0;
  do {
    uVar19 = ((int)*(char *)(param_3 + 3 + uVar17) ^
             ((int)*(char *)(param_3 + 2 + uVar17) ^
             ((int)*(char *)(param_3 + 1 + uVar17) ^
             ((int)*(char *)(param_3 + uVar17) ^ uVar19) * 0x1000193) * 0x1000193) * 0x1000193) *
             0x1000193;
    uVar17 = uVar17 + 4;
  } while (((uint)param_4 & 0x1c) != uVar17);
  if (uVar15 != 0) {
    pcVar18 = (char *)(uVar17 + param_3);
    do {
      uVar19 = ((int)*pcVar18 ^ uVar19) * 0x1000193;
      pcVar18 = pcVar18 + 1;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  param_2[10] = 3;
  param_2[0xb] = uVar19;
  if (DAT_0f772d40 == '\0') {
    iVar14 = FUN_04108328(&DAT_0f772d40);
    if (iVar14 != 0) {
      func_0x0ecf8dc0();
      __cxa_atexit(&UNK_048ae800,&DAT_0f772cc0,0xf53dab8);
      func_0x0410844d(&DAT_0f772d40);
    }
  }
  puStack_100 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puStack_100 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puStack_100 = &UNK_0f4e10c8;
  uStack_f8 = 0;
  lVar16 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (lVar16 == 0) {
    func_0x0eec74c0(0x20,0);
  }
  uStack_f0 = 0x21;
  lStack_e8 = param_4;
  lStack_e0 = lVar16;
  func_0x0eee2f00(lVar16,param_3,param_4);
  *(undefined1 *)(lVar16 + param_4) = 0;
  lVar16 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (lVar16 == 0) {
    func_0x0eec74c0(0x20,0);
  }
  uStack_d8 = 0x21;
  lStack_d0 = param_4;
  lStack_c8 = lVar16;
  func_0x0eee2f00(lVar16,param_3,param_4);
  *(undefined1 *)(lVar16 + param_4) = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0x3f600000;
  func_0x048afb10(&uStack_c0,8);
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_58 = 0xff00;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  if (DAT_0f772d60 == '\0') {
    iVar14 = FUN_04108328(&DAT_0f772d60);
    if (iVar14 != 0) {
      FUN_0ecf8ed0();
      func_0x0410844d(&DAT_0f772d60);
    }
  }
  auStack_168[0] = param_2[0xb];
  uStack_160 = 0;
  uStack_158 = 0;
  uStack_150 = 2;
  uStack_148 = 1;
  puStack_140 = &UNK_0ecfad00;
  puStack_138 = &UNK_07d98660;
  puStack_130 = &UNK_0ecfa930;
  puStack_128 = &UNK_0ecfad20;
  puStack_120 = &UNK_0ecfb3f0;
  uStack_118 = 0;
  uStack_110 = 0;
  plStack_108 = (long *)0x0;
  func_0x048b05a0(param_2 + 2,auStack_168);
  plVar13 = plStack_108;
  if (plStack_108 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_108 + 1;
    lVar16 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*plStack_108 + 0x10))(plStack_108);
      func_0x0412c2d0(plVar13);
    }
  }
  uStack_48 = param_2[2];
  uStack_44 = param_2[3];
  uStack_40 = param_2[4];
  uStack_3c = param_2[5];
  uStack_38 = param_2[6];
  uStack_34 = param_2[7];
  uStack_30 = param_2[8];
  uStack_2c = param_2[9];
  func_0x0ecf9fb0(auStack_168,&uStack_48,&puStack_100);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar6 = param_2[4];
  uVar7 = param_2[5];
  uVar8 = param_2[6];
  uVar9 = param_2[7];
  uVar10 = param_2[9];
  uVar11 = param_2[10];
  uVar12 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = uVar10;
  param_1[10] = uVar11;
  param_1[0xb] = uVar12;
  param_1[4] = uVar6;
  param_1[5] = uVar7;
  param_1[6] = uVar8;
  param_1[7] = uVar9;
  *param_1 = uVar2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  func_0x048b0bc0(&puStack_100);
  return;
}


