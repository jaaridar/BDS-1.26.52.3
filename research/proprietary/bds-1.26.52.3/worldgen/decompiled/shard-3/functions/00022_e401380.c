/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe501380 (ELF vaddr 0xe401380)
 * Label: caller-of-callee
 * Body:  [[0e501380, 0e502691] [0e5026a0, 0e503261] [0e503270, 0e503e21] [0e503e30, 0e504954] [0e504960, 0e5049a1] [0e5049b0, 0e504ee1] [0e504ef0, 0e505924] [0e505930, 0e505971] [0e505980, 0e506611]]
 * Ghidra: FUN_0e501380
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e501380(long param_1)

{
  byte bVar1;
  uint *puVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  uint uVar14;
  char cVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined *puVar19;
  long lVar20;
  ulong uVar21;
  int *piVar22;
  code *pcVar23;
  code *pcVar24;
  byte *pbVar25;
  long *plVar26;
  byte *pbVar27;
  byte *pbVar28;
  ulong uVar29;
  ulong uVar30;
  undefined8 *puVar31;
  ulong *puVar32;
  long lVar33;
  uint *puVar34;
  bool bVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auStack_2e8 [8];
  ulong uStack_2e0;
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  code *pcStack_2c8;
  undefined8 uStack_2c0;
  undefined1 *puStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined4 uStack_298;
  undefined1 auStack_290 [24];
  undefined1 auStack_278 [16];
  uint uStack_268;
  undefined4 uStack_264;
  code *pcStack_260;
  code *pcStack_258;
  undefined4 uStack_250;
  char cStack_24c;
  undefined2 uStack_24b;
  undefined1 uStack_249;
  char cStack_248;
  undefined6 uStack_247;
  undefined1 uStack_241;
  long lStack_240;
  undefined1 auStack_238 [16];
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined1 auStack_200 [16];
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined2 uStack_1d0;
  undefined2 uStack_1ce;
  uint uStack_1cc;
  undefined1 auStack_1c8 [16];
  undefined2 uStack_1b8;
  undefined1 uStack_1b4;
  undefined1 uStack_1b0;
  undefined1 uStack_1ac;
  code *pcStack_1a8;
  code *pcStack_1a0;
  code *pcStack_198;
  code *pcStack_190;
  code *pcStack_188;
  undefined4 uStack_180;
  uint uStack_17c;
  undefined4 uStack_178;
  int iStack_174;
  undefined4 uStack_170;
  undefined *puStack_168;
  code *pcStack_160;
  code *pcStack_158;
  code *pcStack_150;
  code *pcStack_148;
  undefined4 uStack_140;
  uint uStack_13c;
  int iStack_138;
  uint uStack_134;
  undefined4 uStack_130;
  uint uStack_12c;
  uint uStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  code *pcStack_110;
  code *pcStack_108;
  code *pcStack_100;
  code *pcStack_f8;
  undefined4 uStack_f0;
  uint uStack_ec;
  undefined4 uStack_e8;
  int iStack_e4;
  undefined4 uStack_e0;
  code *pcStack_d8;
  code *pcStack_d0;
  code *pcStack_c8;
  code *pcStack_c0;
  code *pcStack_b8;
  int iStack_b0;
  uint uStack_ac;
  undefined4 uStack_a8;
  undefined8 uStack_a4;
  code *pcStack_98;
  code *pcStack_90;
  code *pcStack_88;
  code *pcStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  code *pcStack_58;
  code *pcStack_50;
  code *pcStack_48;
  code *pcStack_40;
  
  func_0x0e4dd790();
  func_0x0e5003f0(param_1);
  if ((DAT_0f755f48 == '\0') && (iVar16 = func_0x04108328(&DAT_0f755f48), iVar16 != 0)) {
    func_0x0e553440();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f755ec8,0xf53dab8);
    func_0x0410844d(&DAT_0f755f48);
  }
  plVar26 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f755ec8 + 4)) * 8);
  do {
    lVar33 = *plVar26;
    if (lVar33 == -1) goto LAB_0e501400;
    plVar26 = (long *)(*(long *)(param_1 + 0x30) + lVar33 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar33 * 0x18) != *(uint *)(_DAT_0f755ec8 + 4))
  ;
  if (plVar26 == *(long **)(param_1 + 0x38)) {
LAB_0e501400:
    puVar19 = &DAT_0f755ec8;
    if (iRam000000000f755f28 != -0x2b3da790) goto LAB_0e501458;
LAB_0e50142b:
    lVar33 = *(long *)(puVar19 + 0x68);
    if (lVar33 == 0) goto LAB_0e501458;
    bVar35 = (*(byte *)(lVar33 + 8) & 1) != 0;
    puVar19 = (undefined *)(lVar33 + 9);
    if (bVar35) {
      puVar19 = *(undefined **)(lVar33 + 0x18);
    }
    uVar29 = (ulong)(*(byte *)(lVar33 + 8) >> 1);
    if (bVar35) {
      uVar29 = *(ulong *)(lVar33 + 0x10);
    }
  }
  else {
    puVar19 = (undefined *)plVar26[2];
    if (*(int *)(puVar19 + 0x60) == -0x2b3da790) goto LAB_0e50142b;
LAB_0e501458:
    puVar19 = &UNK_01442ea0;
    uVar29 = 0x15;
  }
  func_0x0e553880(&pcStack_160,param_1,puVar19,uVar29);
  uStack_12c = uStack_12c & 0xffffff00;
  uStack_128 = uStack_128 & 0xffffff00;
  if ((char)uStack_130 == '\0') {
    func_0x0e557100(auStack_278,&UNK_0138b69d,0x16);
    bVar35 = (uStack_250 & 1) == 0;
    lVar33 = (long)&uStack_250 + 1;
    lVar20 = lStack_240;
    if (bVar35) {
      lVar20 = lVar33;
    }
    uVar29 = (ulong)((byte)uStack_250 >> 1);
    if (!bVar35) {
      uVar29 = CONCAT17(uStack_241,CONCAT61(uStack_247,cStack_248));
    }
    if (uVar29 == 0) {
      uStack_134 = 0x811c9dc5;
    }
    else {
      uVar21 = (ulong)((uint)uVar29 & 3);
      if (uVar29 < 4) {
        uStack_134 = 0x811c9dc5;
        uVar30 = 0;
      }
      else {
        uStack_134 = 0x811c9dc5;
        uVar30 = 0;
        do {
          uStack_134 = ((int)*(char *)(lVar20 + 3 + uVar30) ^
                       ((int)*(char *)(lVar20 + 2 + uVar30) ^
                       ((int)*(char *)(lVar20 + 1 + uVar30) ^
                       ((int)*(char *)(lVar20 + uVar30) ^ uStack_134) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar30 = uVar30 + 4;
        } while ((uVar29 & 0xfffffffffffffffc) != uVar30);
      }
      if (uVar21 != 0) {
        uVar29 = 0;
        do {
          uStack_134 = ((int)*(char *)(lVar20 + uVar30 + uVar29) ^ uStack_134) * 0x1000193;
          uVar29 = uVar29 + 1;
        } while (uVar21 != uVar29);
      }
    }
    iStack_138 = 2;
    if (DAT_0f755f68 == '\0') {
      iVar16 = func_0x04108328(&DAT_0f755f68);
      if (iVar16 != 0) {
        func_0x0e553550();
        func_0x0410844d(&DAT_0f755f68);
      }
    }
    auStack_2e8._0_4_ = uStack_134;
    uStack_2e0 = 0;
    puStack_2d8 = (undefined *)CONCAT44(puStack_2d8._4_4_,3);
    uStack_2d0 = (code *)0x1;
    pcStack_2c8 = (code *)0x0;
    uStack_2c0 = &UNK_0e557750;
    puStack_2b8 = &SUB_048b06d0;
    puStack_2b0 = &UNK_0e553380;
    puStack_2a8 = &UNK_0e557810;
    puStack_2a0 = &UNK_0e557820;
    uStack_298 = 0;
    auStack_290._0_16_ = ZEXT816(0);
    FUN_048b05a0(&pcStack_158,auStack_2e8);
    uVar4 = auStack_290._8_8_;
    if ((long *)auStack_290._8_8_ != (long *)0x0) {
      LOCK();
      plVar26 = (long *)(auStack_290._8_8_ + 8);
      lVar20 = *plVar26;
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*(long *)auStack_290._8_8_ + 0x10))(auStack_290._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    pcStack_198 = pcStack_148;
    pcStack_1a8 = pcStack_158;
    pcStack_1a0 = pcStack_150;
    func_0x0e5574e0(auStack_2e8,&pcStack_1a8,auStack_278);
    if (uStack_2d0._4_4_ == 2) {
      piVar22 = *(int **)(*(long *)((long)puStack_2d8 + 0x78) + 0x60);
      iVar16 = *piVar22;
      while (iVar16 != (int)uStack_2d0) {
        piVar22 = piVar22 + 0x16;
        iVar16 = *piVar22;
      }
      uVar29 = *(ulong *)(piVar22 + 0xc);
      while (uVar29 != uStack_2e0) {
        piVar22 = *(int **)(piVar22 + 0xe);
        uVar29 = *(ulong *)(piVar22 + 0xc);
      }
LAB_0e5016ef:
      *(byte *)((long)piVar22 + 0x12) = *(byte *)((long)piVar22 + 0x12) | 9;
    }
    else {
      if (uStack_2d0._4_4_ == 1) {
        piVar22 = *(int **)(*(long *)((long)puStack_2d8 + 0x78) + 0x48);
        iVar16 = *piVar22;
        while (iVar16 != (int)uStack_2d0) {
          piVar22 = piVar22 + 0x1a;
          iVar16 = *piVar22;
        }
        goto LAB_0e5016ef;
      }
      if (uStack_2d0._4_4_ == 0) {
        *(uint *)((long)puStack_2d8 + 0x18) = *(uint *)((long)puStack_2d8 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_128 == '\0') {
      FUN_0e557870(auStack_2e8,&pcStack_160);
    }
    uVar14 = uStack_12c;
    pcVar24 = pcStack_160;
    if ((DAT_0f755f48 == '\0') && (iVar16 = func_0x04108328(&DAT_0f755f48), iVar16 != 0)) {
      func_0x0e553440();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f755ec8,0xf53dab8);
      func_0x0410844d(&DAT_0f755f48);
    }
    plVar26 = (long *)(*(long *)(pcVar24 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(pcVar24 + 0x20) - *(long *)(pcVar24 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f755ec8 + 4)) * 8);
    do {
      lVar20 = *plVar26;
      if (lVar20 == -1) goto LAB_0e501780;
      plVar26 = (long *)(*(long *)(pcVar24 + 0x30) + lVar20 * 0x18);
    } while (*(uint *)(*(long *)(pcVar24 + 0x30) + 8 + lVar20 * 0x18) !=
             *(uint *)(_DAT_0f755ec8 + 4));
    if (plVar26 == *(long **)(pcVar24 + 0x38)) {
LAB_0e501780:
      puVar19 = &DAT_0f755ec8;
    }
    else {
      puVar19 = (undefined *)plVar26[2];
    }
    puVar2 = *(uint **)(*(long *)(puVar19 + 0x68) + 0x28);
    for (puVar34 = *(uint **)(*(long *)(puVar19 + 0x68) + 0x20);
        (puVar34 != puVar2 && (*puVar34 != uVar14)); puVar34 = puVar34 + 0xe) {
    }
    if ((puVar34 == puVar2) &&
       (cVar15 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014a9708),
       cVar15 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auVar6[0xf] = 0;
    auVar6._0_15_ = stack0xfffffffffffffd19;
    _auStack_2e8 = auVar6 << 8;
    func_0x05d9c620(puVar34 + 2,&uStack_134,&uStack_134,auStack_2e8);
    pcStack_b8 = (code *)CONCAT44(uStack_13c,uStack_140);
    uStack_a4 = CONCAT44(uStack_128,uStack_12c);
    pcStack_d8 = pcStack_160;
    pcStack_d0 = pcStack_158;
    pcStack_c8 = pcStack_150;
    pcStack_c0 = pcStack_148;
    iStack_b0 = iStack_138;
    uStack_ac = uStack_134;
    uStack_a8 = uStack_130;
    func_0x048b0bc0(auStack_278);
    func_0x0e557100(auStack_278,&UNK_013da8f5,0xe);
    bVar35 = (uStack_250 & 1) == 0;
    lVar20 = lStack_240;
    if (bVar35) {
      lVar20 = lVar33;
    }
    uVar29 = (ulong)((byte)uStack_250 >> 1);
    if (!bVar35) {
      uVar29 = CONCAT17(uStack_241,CONCAT61(uStack_247,cStack_248));
    }
    if (uVar29 == 0) {
      uStack_ac = 0x811c9dc5;
    }
    else {
      uVar21 = (ulong)((uint)uVar29 & 3);
      if (uVar29 < 4) {
        uStack_ac = 0x811c9dc5;
        uVar30 = 0;
      }
      else {
        uStack_ac = 0x811c9dc5;
        uVar30 = 0;
        do {
          uStack_ac = ((int)*(char *)(lVar20 + 3 + uVar30) ^
                      ((int)*(char *)(lVar20 + 2 + uVar30) ^
                      ((int)*(char *)(lVar20 + 1 + uVar30) ^
                      ((int)*(char *)(lVar20 + uVar30) ^ uStack_ac) * 0x1000193) * 0x1000193) *
                      0x1000193) * 0x1000193;
          uVar30 = uVar30 + 4;
        } while ((uVar29 & 0xfffffffffffffffc) != uVar30);
      }
      if (uVar21 != 0) {
        uVar29 = 0;
        do {
          uStack_ac = ((int)*(char *)(lVar20 + uVar30 + uVar29) ^ uStack_ac) * 0x1000193;
          uVar29 = uVar29 + 1;
        } while (uVar21 != uVar29);
      }
    }
    iStack_b0 = 2;
    if ((DAT_0f755f68 == '\0') && (iVar16 = func_0x04108328(&DAT_0f755f68), iVar16 != 0)) {
      func_0x0e553550();
      func_0x0410844d(&DAT_0f755f68);
    }
    auStack_2e8._0_4_ = uStack_ac;
    uStack_2e0 = 0;
    puStack_2d8 = (undefined *)CONCAT44(puStack_2d8._4_4_,3);
    uStack_2d0 = (code *)0x1;
    pcStack_2c8 = (code *)0x0;
    uStack_2c0 = &UNK_0e557750;
    puStack_2b8 = &SUB_048b06d0;
    puStack_2b0 = &UNK_0e553380;
    puStack_2a8 = &UNK_0e557a30;
    puStack_2a0 = &UNK_0e557a40;
    uStack_298 = 0;
    auStack_290._0_16_ = ZEXT816(0);
    FUN_048b05a0(&pcStack_d0,auStack_2e8);
    uVar4 = auStack_290._8_8_;
    if ((long *)auStack_290._8_8_ != (long *)0x0) {
      LOCK();
      plVar26 = (long *)(auStack_290._8_8_ + 8);
      lVar20 = *plVar26;
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*(long *)auStack_290._8_8_ + 0x10))(auStack_290._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    pcStack_198 = pcStack_c0;
    pcStack_190 = pcStack_b8;
    pcStack_1a8 = pcStack_d0;
    pcStack_1a0 = pcStack_c8;
    func_0x0e5574e0(auStack_2e8,&pcStack_1a8,auStack_278);
    if (uStack_2d0._4_4_ == 2) {
      piVar22 = *(int **)(*(long *)((long)puStack_2d8 + 0x78) + 0x60);
      iVar16 = *piVar22;
      while (iVar16 != (int)uStack_2d0) {
        piVar22 = piVar22 + 0x16;
        iVar16 = *piVar22;
      }
      uVar29 = *(ulong *)(piVar22 + 0xc);
      while (uVar29 != uStack_2e0) {
        piVar22 = *(int **)(piVar22 + 0xe);
        uVar29 = *(ulong *)(piVar22 + 0xc);
      }
LAB_0e501aff:
      *(byte *)((long)piVar22 + 0x12) = *(byte *)((long)piVar22 + 0x12) | 9;
    }
    else {
      if (uStack_2d0._4_4_ == 1) {
        piVar22 = *(int **)(*(long *)((long)puStack_2d8 + 0x78) + 0x48);
        iVar16 = *piVar22;
        while (iVar16 != (int)uStack_2d0) {
          piVar22 = piVar22 + 0x1a;
          iVar16 = *piVar22;
        }
        goto LAB_0e501aff;
      }
      if (uStack_2d0._4_4_ == 0) {
        *(uint *)((long)puStack_2d8 + 0x18) = *(uint *)((long)puStack_2d8 + 0x18) | 0x90000;
      }
    }
    if (uStack_a4._4_1_ == '\0') {
      FUN_0e557870(auStack_2e8,&pcStack_d8);
    }
    pcVar24 = pcStack_d8;
    iVar16 = (int)uStack_a4;
    if ((DAT_0f755f48 == '\0') && (iVar18 = func_0x04108328(&DAT_0f755f48), iVar18 != 0)) {
      func_0x0e553440();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f755ec8,0xf53dab8);
      func_0x0410844d(&DAT_0f755f48);
    }
    plVar26 = (long *)(*(long *)(pcVar24 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(pcVar24 + 0x20) - *(long *)(pcVar24 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f755ec8 + 4)) * 8);
    do {
      lVar20 = *plVar26;
      if (lVar20 == -1) goto LAB_0e501b90;
      plVar26 = (long *)(*(long *)(pcVar24 + 0x30) + lVar20 * 0x18);
    } while (*(uint *)(*(long *)(pcVar24 + 0x30) + 8 + lVar20 * 0x18) !=
             *(uint *)(_DAT_0f755ec8 + 4));
    if (plVar26 == *(long **)(pcVar24 + 0x38)) {
LAB_0e501b90:
      puVar19 = &DAT_0f755ec8;
    }
    else {
      puVar19 = (undefined *)plVar26[2];
    }
    piVar3 = *(int **)(*(long *)(puVar19 + 0x68) + 0x28);
    for (piVar22 = *(int **)(*(long *)(puVar19 + 0x68) + 0x20);
        (piVar22 != piVar3 && (*piVar22 != iVar16)); piVar22 = piVar22 + 0xe) {
    }
    if ((piVar22 == piVar3) &&
       (cVar15 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014a9708),
       cVar15 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auVar7[0xf] = 0;
    auVar7._0_15_ = stack0xfffffffffffffd19;
    _auStack_2e8 = auVar7 << 8;
    func_0x05d9c620(piVar22 + 2,&uStack_ac,&uStack_ac,auStack_2e8);
    pcStack_118 = pcStack_d8;
    pcStack_110 = pcStack_d0;
    pcStack_108 = pcStack_c8;
    pcStack_100 = pcStack_c0;
    pcStack_f8 = pcStack_b8;
    uStack_f0 = iStack_b0;
    uStack_ec = uStack_ac;
    uStack_e8 = uStack_a8;
    iStack_e4 = (int)uStack_a4;
    uStack_e0 = (undefined4)((ulong)uStack_a4 >> 0x20);
    func_0x048b0bc0(auStack_278);
    func_0x0e557100(auStack_278,&DAT_01222b04,0x10);
    bVar35 = (uStack_250 & 1) == 0;
    lVar20 = lStack_240;
    if (bVar35) {
      lVar20 = lVar33;
    }
    uVar29 = (ulong)((byte)uStack_250 >> 1);
    if (!bVar35) {
      uVar29 = CONCAT17(uStack_241,CONCAT61(uStack_247,cStack_248));
    }
    if (uVar29 == 0) {
      uStack_ec = 0x811c9dc5;
    }
    else {
      uVar21 = (ulong)((uint)uVar29 & 3);
      if (uVar29 < 4) {
        uStack_ec = 0x811c9dc5;
        uVar30 = 0;
      }
      else {
        uStack_ec = 0x811c9dc5;
        uVar30 = 0;
        do {
          uStack_ec = ((int)*(char *)(lVar20 + 3 + uVar30) ^
                      ((int)*(char *)(lVar20 + 2 + uVar30) ^
                      ((int)*(char *)(lVar20 + 1 + uVar30) ^
                      ((int)*(char *)(lVar20 + uVar30) ^ uStack_ec) * 0x1000193) * 0x1000193) *
                      0x1000193) * 0x1000193;
          uVar30 = uVar30 + 4;
        } while ((uVar29 & 0xfffffffffffffffc) != uVar30);
      }
      if (uVar21 != 0) {
        uVar29 = 0;
        do {
          uStack_ec = ((int)*(char *)(lVar20 + uVar30 + uVar29) ^ uStack_ec) * 0x1000193;
          uVar29 = uVar29 + 1;
        } while (uVar21 != uVar29);
      }
    }
    uStack_f0 = 2;
    if ((DAT_0f755f68 == '\0') && (iVar16 = func_0x04108328(&DAT_0f755f68), iVar16 != 0)) {
      func_0x0e553550();
      func_0x0410844d(&DAT_0f755f68);
    }
    auStack_2e8._0_4_ = uStack_ec;
    uStack_2e0 = 0;
    puStack_2d8 = (undefined *)CONCAT44(puStack_2d8._4_4_,3);
    uStack_2d0 = (code *)0x1;
    pcStack_2c8 = (code *)0x0;
    uStack_2c0 = &UNK_0e557750;
    puStack_2b8 = &SUB_048b06d0;
    puStack_2b0 = &UNK_0e553380;
    puStack_2a8 = &UNK_0e557a90;
    puStack_2a0 = &UNK_0e557aa0;
    uStack_298 = 0;
    auStack_290._0_16_ = ZEXT816(0);
    FUN_048b05a0(&pcStack_110,auStack_2e8);
    uVar4 = auStack_290._8_8_;
    if ((long *)auStack_290._8_8_ != (long *)0x0) {
      LOCK();
      plVar26 = (long *)(auStack_290._8_8_ + 8);
      lVar20 = *plVar26;
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*(long *)auStack_290._8_8_ + 0x10))(auStack_290._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    pcStack_198 = pcStack_100;
    pcStack_190 = pcStack_f8;
    pcStack_1a8 = pcStack_110;
    pcStack_1a0 = pcStack_108;
    func_0x0e5574e0(auStack_2e8,&pcStack_1a8,auStack_278);
    if (uStack_2d0._4_4_ == 2) {
      piVar22 = *(int **)(*(long *)((long)puStack_2d8 + 0x78) + 0x60);
      iVar16 = *piVar22;
      while (iVar16 != (int)uStack_2d0) {
        piVar22 = piVar22 + 0x16;
        iVar16 = *piVar22;
      }
      uVar29 = *(ulong *)(piVar22 + 0xc);
      while (uVar29 != uStack_2e0) {
        piVar22 = *(int **)(piVar22 + 0xe);
        uVar29 = *(ulong *)(piVar22 + 0xc);
      }
LAB_0e501f0f:
      *(byte *)((long)piVar22 + 0x12) = *(byte *)((long)piVar22 + 0x12) | 9;
    }
    else {
      if (uStack_2d0._4_4_ == 1) {
        piVar22 = *(int **)(*(long *)((long)puStack_2d8 + 0x78) + 0x48);
        iVar16 = *piVar22;
        while (iVar16 != (int)uStack_2d0) {
          piVar22 = piVar22 + 0x1a;
          iVar16 = *piVar22;
        }
        goto LAB_0e501f0f;
      }
      if (uStack_2d0._4_4_ == 0) {
        *(uint *)((long)puStack_2d8 + 0x18) = *(uint *)((long)puStack_2d8 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_e0 == '\0') {
      FUN_0e557870(auStack_2e8,&pcStack_118);
    }
    iVar16 = iStack_e4;
    pcVar24 = pcStack_118;
    if ((DAT_0f755f48 == '\0') && (iVar18 = func_0x04108328(&DAT_0f755f48), iVar18 != 0)) {
      func_0x0e553440();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f755ec8,0xf53dab8);
      func_0x0410844d(&DAT_0f755f48);
    }
    plVar26 = (long *)(*(long *)(pcVar24 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(pcVar24 + 0x20) - *(long *)(pcVar24 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f755ec8 + 4)) * 8);
    do {
      lVar20 = *plVar26;
      if (lVar20 == -1) goto LAB_0e501fa0;
      plVar26 = (long *)(*(long *)(pcVar24 + 0x30) + lVar20 * 0x18);
    } while (*(uint *)(*(long *)(pcVar24 + 0x30) + 8 + lVar20 * 0x18) !=
             *(uint *)(_DAT_0f755ec8 + 4));
    if (plVar26 == *(long **)(pcVar24 + 0x38)) {
LAB_0e501fa0:
      puVar19 = &DAT_0f755ec8;
    }
    else {
      puVar19 = (undefined *)plVar26[2];
    }
    piVar3 = *(int **)(*(long *)(puVar19 + 0x68) + 0x28);
    for (piVar22 = *(int **)(*(long *)(puVar19 + 0x68) + 0x20);
        (piVar22 != piVar3 && (*piVar22 != iVar16)); piVar22 = piVar22 + 0xe) {
    }
    if ((piVar22 == piVar3) &&
       (cVar15 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014a9708),
       cVar15 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auVar8[0xf] = 0;
    auVar8._0_15_ = stack0xfffffffffffffd19;
    _auStack_2e8 = auVar8 << 8;
    func_0x05d9c620(piVar22 + 2,&uStack_ec,&uStack_ec,auStack_2e8);
    pcStack_1a8 = pcStack_118;
    pcStack_1a0 = pcStack_110;
    pcStack_198 = pcStack_108;
    pcStack_190 = pcStack_100;
    pcStack_188 = pcStack_f8;
    uStack_180 = uStack_f0;
    uStack_17c = uStack_ec;
    uStack_178 = uStack_e8;
    iStack_174 = iStack_e4;
    uStack_170 = uStack_e0;
    func_0x048b0bc0(auStack_278);
    func_0x0e557100(auStack_278,&UNK_01371c21,0x1a);
    bVar35 = (uStack_250 & 1) != 0;
    if (bVar35) {
      lVar33 = lStack_240;
    }
    uVar29 = (ulong)((byte)uStack_250 >> 1);
    if (bVar35) {
      uVar29 = CONCAT17(uStack_241,CONCAT61(uStack_247,cStack_248));
    }
    if (uVar29 == 0) {
      uStack_17c = 0x811c9dc5;
    }
    else {
      uVar21 = (ulong)((uint)uVar29 & 3);
      if (uVar29 < 4) {
        uStack_17c = 0x811c9dc5;
        uVar30 = 0;
      }
      else {
        uStack_17c = 0x811c9dc5;
        uVar30 = 0;
        do {
          uStack_17c = ((int)*(char *)(lVar33 + 3 + uVar30) ^
                       ((int)*(char *)(lVar33 + 2 + uVar30) ^
                       ((int)*(char *)(lVar33 + 1 + uVar30) ^
                       ((int)*(char *)(lVar33 + uVar30) ^ uStack_17c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar30 = uVar30 + 4;
        } while ((uVar29 & 0xfffffffffffffffc) != uVar30);
      }
      if (uVar21 != 0) {
        uVar29 = 0;
        do {
          uStack_17c = ((int)*(char *)(lVar33 + uVar30 + uVar29) ^ uStack_17c) * 0x1000193;
          uVar29 = uVar29 + 1;
        } while (uVar21 != uVar29);
      }
    }
    uStack_180 = 2;
    if ((DAT_0f755f68 == '\0') && (iVar16 = func_0x04108328(&DAT_0f755f68), iVar16 != 0)) {
      func_0x0e553550();
      func_0x0410844d(&DAT_0f755f68);
    }
    auStack_2e8._0_4_ = uStack_17c;
    uStack_2e0 = 0;
    puStack_2d8 = (undefined *)CONCAT44(puStack_2d8._4_4_,3);
    uStack_2d0 = (code *)0x1;
    pcStack_2c8 = (code *)0x0;
    uStack_2c0 = &UNK_0e557750;
    puStack_2b8 = &SUB_048b06d0;
    puStack_2b0 = &UNK_0e553380;
    puStack_2a8 = &UNK_0e557af0;
    puStack_2a0 = &UNK_0e557b00;
    uStack_298 = 0;
    auStack_290._0_16_ = ZEXT816(0);
    FUN_048b05a0(&pcStack_1a0,auStack_2e8);
    uVar4 = auStack_290._8_8_;
    if ((long *)auStack_290._8_8_ != (long *)0x0) {
      LOCK();
      plVar26 = (long *)(auStack_290._8_8_ + 8);
      lVar33 = *plVar26;
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (lVar33 == 0) {
        (**(code **)(*(long *)auStack_290._8_8_ + 0x10))(auStack_290._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    pcStack_88 = pcStack_190;
    pcStack_80 = pcStack_188;
    pcStack_98 = pcStack_1a0;
    pcStack_90 = pcStack_198;
    func_0x0e5574e0(auStack_2e8,&pcStack_98,auStack_278);
    if (uStack_2d0._4_4_ == 2) {
      piVar22 = *(int **)(*(long *)(puStack_2d8 + 0x78) + 0x60);
      iVar16 = *piVar22;
      while (iVar16 != (int)uStack_2d0) {
        piVar22 = piVar22 + 0x16;
        iVar16 = *piVar22;
      }
      uVar29 = *(ulong *)(piVar22 + 0xc);
      while (uVar29 != uStack_2e0) {
        piVar22 = *(int **)(piVar22 + 0xe);
        uVar29 = *(ulong *)(piVar22 + 0xc);
      }
LAB_0e5022ff:
      *(byte *)((long)piVar22 + 0x12) = *(byte *)((long)piVar22 + 0x12) | 9;
    }
    else {
      if (uStack_2d0._4_4_ == 1) {
        piVar22 = *(int **)(*(long *)(puStack_2d8 + 0x78) + 0x48);
        iVar16 = *piVar22;
        while (iVar16 != (int)uStack_2d0) {
          piVar22 = piVar22 + 0x1a;
          iVar16 = *piVar22;
        }
        goto LAB_0e5022ff;
      }
      if (uStack_2d0._4_4_ == 0) {
        *(uint *)(puStack_2d8 + 0x18) = *(uint *)(puStack_2d8 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_170 == '\0') {
      FUN_0e557870(auStack_2e8,&pcStack_1a8);
    }
    iVar16 = iStack_174;
    pcVar24 = pcStack_1a8;
    if ((DAT_0f755f48 == '\0') && (iVar18 = func_0x04108328(&DAT_0f755f48), iVar18 != 0)) {
      func_0x0e553440();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f755ec8,0xf53dab8);
      func_0x0410844d(&DAT_0f755f48);
    }
    plVar26 = (long *)(*(long *)(pcVar24 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(pcVar24 + 0x20) - *(long *)(pcVar24 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f755ec8 + 4)) * 8);
    do {
      lVar33 = *plVar26;
      if (lVar33 == -1) goto LAB_0e502390;
      plVar26 = (long *)(*(long *)(pcVar24 + 0x30) + lVar33 * 0x18);
    } while (*(uint *)(*(long *)(pcVar24 + 0x30) + 8 + lVar33 * 0x18) !=
             *(uint *)(_DAT_0f755ec8 + 4));
    if (plVar26 == *(long **)(pcVar24 + 0x38)) {
LAB_0e502390:
      puVar19 = &DAT_0f755ec8;
    }
    else {
      puVar19 = (undefined *)plVar26[2];
    }
    piVar3 = *(int **)(*(long *)(puVar19 + 0x68) + 0x28);
    for (piVar22 = *(int **)(*(long *)(puVar19 + 0x68) + 0x20);
        (piVar22 != piVar3 && (*piVar22 != iVar16)); piVar22 = piVar22 + 0xe) {
    }
    if ((piVar22 == piVar3) &&
       (cVar15 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014a9708),
       cVar15 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auVar9[0xf] = 0;
    auVar9._0_15_ = stack0xfffffffffffffd19;
    _auStack_2e8 = auVar9 << 8;
    func_0x05d9c620(piVar22 + 2,&uStack_17c,&uStack_17c,auStack_2e8);
    func_0x048b0bc0(auStack_278);
  }
  if ((DAT_0f756000 == '\0') && (iVar16 = func_0x04108328(&DAT_0f756000), iVar16 != 0)) {
    func_0x0e557c10();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f755f80,0xf53dab8);
    func_0x0410844d(&DAT_0f756000);
  }
  plVar26 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f755f80 + 4)) * 8);
  do {
    lVar33 = *plVar26;
    if (lVar33 == -1) goto LAB_0e502490;
    plVar26 = (long *)(*(long *)(param_1 + 0x30) + lVar33 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar33 * 0x18) != *(uint *)(_DAT_0f755f80 + 4))
  ;
  if (plVar26 == *(long **)(param_1 + 0x38)) {
LAB_0e502490:
    puVar19 = &DAT_0f755f80;
    if (iRam000000000f755fe0 != -0x2b3da790) goto LAB_0e5024fd;
LAB_0e5024bb:
    lVar33 = *(long *)(puVar19 + 0x68);
    if (lVar33 == 0) goto LAB_0e5024fd;
    bVar35 = (*(byte *)(lVar33 + 8) & 1) != 0;
    lVar20 = lVar33 + 9;
    if (bVar35) {
      lVar20 = *(long *)(lVar33 + 0x18);
    }
    uVar29 = (ulong)(*(byte *)(lVar33 + 8) >> 1);
    if (bVar35) {
      uVar29 = *(ulong *)(lVar33 + 0x10);
    }
    func_0x0e558380(&pcStack_160,param_1,lVar20,uVar29);
    pcVar24 = pcStack_160;
    iVar16 = iStack_138;
    uVar14 = uStack_134;
  }
  else {
    puVar19 = (undefined *)plVar26[2];
    if (*(int *)(puVar19 + 0x60) == -0x2b3da790) goto LAB_0e5024bb;
LAB_0e5024fd:
    func_0x0e558380(&pcStack_160,param_1,&UNK_01202c6c,0xb);
    pcVar24 = pcStack_160;
    iVar16 = iStack_138;
    uVar14 = uStack_134;
  }
  pcStack_160 = pcVar24;
  iStack_138 = iVar16;
  uStack_134 = uVar14;
  if ((char)uStack_130 == '\0') {
    pcStack_c0 = (code *)CONCAT44(uStack_13c,uStack_140);
    uStack_120 = CONCAT44(uStack_12c,uStack_130);
    pcStack_d8 = pcStack_158;
    pcStack_d0 = pcStack_150;
    pcStack_c8 = pcStack_148;
    if ((DAT_0f756000 == '\0') && (iVar18 = func_0x04108328(&DAT_0f756000), iVar18 != 0)) {
      func_0x0e557c10();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f755f80,0xf53dab8);
      func_0x0410844d(&DAT_0f756000);
    }
    plVar26 = (long *)(*(long *)(pcVar24 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(pcVar24 + 0x20) - *(long *)(pcVar24 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f755f80 + 4)) * 8);
    do {
      lVar33 = *plVar26;
      if (lVar33 == -1) goto LAB_0e5025d0;
      plVar26 = (long *)(*(long *)(pcVar24 + 0x30) + lVar33 * 0x18);
    } while (*(uint *)(*(long *)(pcVar24 + 0x30) + 8 + lVar33 * 0x18) !=
             *(uint *)(_DAT_0f755f80 + 4));
    if (plVar26 == *(long **)(pcVar24 + 0x38)) {
LAB_0e5025d0:
      puVar19 = &DAT_0f755f80;
      pbVar25 = *(byte **)(pcVar24 + 0x50);
      pbVar27 = *(byte **)(pcVar24 + 0x58);
      if (pbVar25 != pbVar27) {
LAB_0e50267e:
        do {
          bVar1 = *pbVar25;
          if ((bVar1 & 1) == 0) {
            if (bVar1 >> 1 == 0x1a) goto LAB_0e5026aa;
          }
          else if (*(long *)(pbVar25 + 8) == 0x1a) {
LAB_0e5026aa:
            if ((bVar1 & 1) == 0) {
              pbVar28 = pbVar25 + 1;
            }
            else {
              pbVar28 = *(byte **)(pbVar25 + 0x10);
            }
            auVar36[0] = -(*pbVar28 == 0x5b);
            auVar36[1] = -(pbVar28[1] == 99);
            auVar36[2] = -(pbVar28[2] == 0x65);
            auVar36[3] = -(pbVar28[3] == 0x72);
            auVar36[4] = -(pbVar28[4] == 0x65);
            auVar36[5] = -(pbVar28[5] == 0x61);
            auVar36[6] = -(pbVar28[6] == 0x6c);
            auVar36[7] = -(pbVar28[7] == 0x3a);
            auVar36[8] = -(pbVar28[8] == 100);
            auVar36[9] = -(pbVar28[9] == 0x6f);
            auVar36[10] = -(pbVar28[10] == 99);
            auVar36[0xb] = -(pbVar28[0xb] == 0x75);
            auVar36[0xc] = -(pbVar28[0xc] == 0x6d);
            auVar36[0xd] = -(pbVar28[0xd] == 0x65);
            auVar36[0xe] = -(pbVar28[0xe] == 0x6e);
            auVar36[0xf] = -(pbVar28[0xf] == 0x74);
            auVar42[0] = -(pbVar28[10] == 99);
            auVar42[1] = -(pbVar28[0xb] == 0x75);
            auVar42[2] = -(pbVar28[0xc] == 0x6d);
            auVar42[3] = -(pbVar28[0xd] == 0x65);
            auVar42[4] = -(pbVar28[0xe] == 0x6e);
            auVar42[5] = -(pbVar28[0xf] == 0x74);
            auVar42[6] = -(pbVar28[0x10] == 0x61);
            auVar42[7] = -(pbVar28[0x11] == 0x74);
            auVar42[8] = -(pbVar28[0x12] == 0x69);
            auVar42[9] = -(pbVar28[0x13] == 0x6f);
            auVar42[10] = -(pbVar28[0x14] == 0x6e);
            auVar42[0xb] = -(pbVar28[0x15] == 0x5f);
            auVar42[0xc] = -(pbVar28[0x16] == 0x74);
            auVar42[0xd] = -(pbVar28[0x17] == 0x61);
            auVar42[0xe] = -(pbVar28[0x18] == 0x67);
            auVar42[0xf] = -(pbVar28[0x19] == 0x5d);
            auVar42 = auVar42 & auVar36;
            if ((ushort)((ushort)(SUB161(auVar42 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar42 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar42 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar42 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar42 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar42 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar42 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar42 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar42 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar42 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar42 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar42 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar42 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe |
                        (ushort)(byte)(auVar42[0xf] >> 7) << 0xf) == 0xffff) break;
          }
          pbVar25 = pbVar25 + 0x38;
        } while (pbVar25 != pbVar27);
      }
    }
    else {
      puVar19 = (undefined *)plVar26[2];
      pbVar25 = *(byte **)(pcVar24 + 0x50);
      pbVar27 = *(byte **)(pcVar24 + 0x58);
      if (pbVar25 != pbVar27) goto LAB_0e50267e;
    }
    if (pbVar25 == pbVar27) {
LAB_0e5026da:
      if (iVar16 == 0) {
        if (((puVar19 == (undefined *)0x0) || (*(int *)(puVar19 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar19 + 0x68) == 0)) goto LAB_0e502756;
        lVar33 = *(long *)(puVar19 + 0x68) + 0x38;
      }
      else {
        if (puVar19 == (undefined *)0x0) {
          puVar19 = (undefined *)func_0x048aead0(pcVar24 + 0x18);
        }
        auStack_278._0_8_ = func_0x048b0c90(pcVar24 + 0x18,puVar19,uVar14,1);
        if (auStack_278._0_8_ == 0) {
          auStack_278 = (undefined1  [16])0x0;
          FUN_048b0d20(auStack_278);
          if (auStack_278._0_8_ == 0) goto LAB_0e502756;
        }
        if ((*(int *)(auStack_278._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_278._0_8_ + 0x58) != 0)) {
          lVar33 = *(long *)(auStack_278._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0e502756:
          lVar33 = 0;
        }
      }
      puStack_2d8 = &UNK_0488e0b0;
      uStack_2d0 = (code *)0x0;
      pcStack_2c8 = (code *)CONCAT35(pcStack_2c8._5_3_,0x48b5725f);
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uStack_2e0;
      _auStack_2e8 = auVar10 << 0x40;
      auStack_278 = (undefined1  [16])0x0;
      pcStack_260 = (code *)&UNK_0488e0b0;
      pcStack_258 = (code *)0x0;
      uStack_250 = 0x48b5725f;
      cStack_24c = '\0';
      pcVar23 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (pcVar23 == (code *)0x0) {
        FUN_0eec74c0(0x20,0);
      }
      uVar4 = _UNK_013bbadf;
      pcStack_1a8 = (code *)0x21;
      pcStack_1a0 = (code *)0x1a;
      *(ulong *)(pcVar23 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)(pcVar23 + 0x12) = uVar4;
      uVar4 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *(undefined8 *)pcVar23 = _DAT_013bbacd;
      *(undefined8 *)(pcVar23 + 8) = uVar4;
      pcVar23[0x1a] = (code)0x0;
      pcStack_198 = pcVar23;
      lVar33 = func_0x048b5060(lVar33,&pcStack_1a8);
      *(undefined8 *)(lVar33 + 0x20) = 0;
      if ((undefined1 *)(lVar33 + 0x20) == auStack_278) {
        pcVar23 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar33 + 0x40) != (code *)0x0) {
          puVar31 = (undefined8 *)(lVar33 + 0x28);
          (**(code **)(lVar33 + 0x40))(puVar31);
          if (cStack_24c != '\0') {
            if (cStack_24c == '\x02') {
              (*pcStack_260)(5,auStack_278 + 8,puVar31);
            }
            else {
              uVar4 = auStack_278._8_8_;
              auStack_278._8_8_ = 0;
              *puVar31 = uVar4;
            }
          }
        }
        *(code **)(lVar33 + 0x38) = pcStack_260;
        *(code **)(lVar33 + 0x40) = pcStack_258;
        *(uint *)(lVar33 + 0x48) = uStack_250;
        *(char *)(lVar33 + 0x4c) = cStack_24c;
        pcVar23 = pcStack_258;
      }
      if (((ulong)pcStack_1a8 & 1) != 0) {
        func_0x0412a280(pcStack_198,(ulong)pcStack_1a8 & 0xfffffffffffffffe);
        pcVar23 = pcStack_258;
      }
      if (pcVar23 != (code *)0x0) {
        (*pcVar23)(auStack_278 + 8);
      }
      if (uStack_2d0 != (code *)0x0) {
        (*uStack_2d0)(auStack_2e8);
      }
    }
    else {
      iVar18 = *(int *)(pbVar25 + 0x1c);
      if ((DAT_0f550ad8 == '\0') &&
         (puStack_168 = puVar19, iVar17 = func_0x04108328(&DAT_0f550ad8), puVar19 = puStack_168,
         iVar17 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
        puVar19 = puStack_168;
      }
      if (iVar18 == _DAT_0f550ac4) goto LAB_0e5026da;
    }
    pcStack_110 = pcStack_d8;
    pcStack_108 = pcStack_d0;
    pcStack_100 = pcStack_c8;
    pcStack_f8 = pcStack_c0;
    uStack_e8 = (undefined4)uStack_120;
    iStack_e4 = (int)((ulong)uStack_120 >> 0x20);
    uStack_f0 = 2;
    uStack_ec = 0xa9ab6920;
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_228 = 0;
    uStack_220 = 0;
    auStack_238 = (undefined1  [16])0x0;
    cStack_248 = 0;
    uStack_247 = 0;
    uStack_241 = 0;
    lStack_240 = 0;
    pcStack_258 = (code *)0x0;
    uStack_250 = 0;
    cStack_24c = 0;
    uStack_24b = 0;
    uStack_249 = 0;
    uStack_268 = 0;
    uStack_264 = 0;
    pcStack_260 = (code *)0x0;
    auStack_278 = (undefined1  [16])0x0;
    uStack_208 = 0x3f600000;
    pcStack_118 = pcVar24;
    func_0x048afb10(auStack_238,8);
    auVar6 = auStack_1c8;
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    uStack_1f0 = 0;
    uStack_1ec = 0;
    uStack_1e8 = 0;
    auStack_200 = (undefined1  [16])0x0;
    uStack_1d0 = 0xff00;
    uStack_1cc = uStack_1cc & 0xffffff00;
    auStack_1c8._0_4_ = auStack_1c8._1_4_ << 8;
    auStack_1c8._5_11_ = auVar6._5_11_;
    auStack_1c8[4] = 0;
    puVar31 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar31 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar31 = &UNK_0f4bddb8;
    uVar4 = auStack_278._0_8_;
    auStack_278._0_8_ = puVar31;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    if ((uStack_250 & 1) != 0) {
      func_0x0412a280(lStack_240,
                      CONCAT17(uStack_249,CONCAT25(uStack_24b,CONCAT14(cStack_24c,uStack_250))) &
                      0xfffffffffffffffe);
    }
    uStack_250 = 0x6f72701c;
    cStack_24c = 99;
    uStack_24b = 0x7365;
    uStack_249 = 0x73;
    cStack_248 = 0x6f;
    uStack_247 = 0x657079745f72;
    uStack_241 = 0;
    if ((DAT_0f756020 == '\0') && (iVar16 = func_0x04108328(&DAT_0f756020), iVar16 != 0)) {
      func_0x0e557d20();
      func_0x0410844d(&DAT_0f756020);
    }
    auStack_2e8._0_4_ = uStack_ec;
    uStack_2e0 = 0;
    puStack_2d8 = (undefined *)CONCAT44(puStack_2d8._4_4_,3);
    uStack_2d0 = (code *)0x1;
    pcStack_2c8 = (code *)0x0;
    uStack_2c0 = &UNK_0e557750;
    puStack_2b8 = &SUB_048b06d0;
    puStack_2b0 = &UNK_0e553380;
    puStack_2a8 = &UNK_0e559150;
    puStack_2a0 = &UNK_0e559160;
    uStack_298 = 0;
    auStack_290._0_16_ = (undefined1  [16])0x0;
    FUN_048b05a0(&pcStack_110,auStack_2e8);
    uVar4 = auStack_290._8_8_;
    if ((long *)auStack_290._8_8_ != (long *)0x0) {
      LOCK();
      plVar26 = (long *)(auStack_290._8_8_ + 8);
      lVar33 = *plVar26;
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (lVar33 == 0) {
        (**(code **)(*(long *)auStack_290._8_8_ + 0x10))(auStack_290._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    pcStack_198 = pcStack_100;
    pcStack_190 = pcStack_f8;
    pcStack_1a8 = pcStack_110;
    pcStack_1a0 = pcStack_108;
    func_0x0e558ee0(auStack_2e8,&pcStack_1a8,auStack_278);
    if (uStack_2d0._4_4_ == 2) {
      piVar22 = *(int **)(*(long *)((long)puStack_2d8 + 0x78) + 0x60);
      iVar16 = *piVar22;
      while (iVar16 != (int)uStack_2d0) {
        piVar22 = piVar22 + 0x16;
        iVar16 = *piVar22;
      }
      uVar29 = *(ulong *)(piVar22 + 0xc);
      while (uVar29 != uStack_2e0) {
        piVar22 = *(int **)(piVar22 + 0xe);
        uVar29 = *(ulong *)(piVar22 + 0xc);
      }
LAB_0e502c3f:
      *(byte *)((long)piVar22 + 0x12) = *(byte *)((long)piVar22 + 0x12) | 9;
    }
    else {
      if (uStack_2d0._4_4_ == 1) {
        piVar22 = *(int **)(*(long *)((long)puStack_2d8 + 0x78) + 0x48);
        iVar16 = *piVar22;
        while (iVar16 != (int)uStack_2d0) {
          piVar22 = piVar22 + 0x1a;
          iVar16 = *piVar22;
        }
        goto LAB_0e502c3f;
      }
      if (uStack_2d0._4_4_ == 0) {
        *(uint *)((long)puStack_2d8 + 0x18U) = *(uint *)((long)puStack_2d8 + 0x18U) | 0x90000;
      }
    }
    pcStack_1a8 = pcStack_118;
    pcStack_1a0 = pcStack_110;
    pcStack_198 = pcStack_108;
    pcStack_190 = pcStack_100;
    pcStack_188 = pcStack_f8;
    uStack_180 = uStack_f0;
    uStack_17c = uStack_ec;
    uStack_178 = CONCAT31(uStack_178._1_3_,(undefined1)uStack_e8);
    func_0x048b0bc0(auStack_278);
    if ((DAT_0f756020 == '\0') && (iVar16 = func_0x04108328(&DAT_0f756020), iVar16 != 0)) {
      func_0x0e557d20();
      func_0x0410844d(&DAT_0f756020);
    }
    pcVar24 = pcStack_1a8;
    uStack_180 = 1;
    uStack_17c = 0x160da1c3;
    if ((DAT_0f756000 == '\0') && (iVar16 = func_0x04108328(&DAT_0f756000), iVar16 != 0)) {
      func_0x0e557c10();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f755f80,0xf53dab8);
      func_0x0410844d(&DAT_0f756000);
    }
    plVar26 = (long *)(*(long *)(pcVar24 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(pcVar24 + 0x20) - *(long *)(pcVar24 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f755f80 + 4)) * 8);
    do {
      lVar33 = *plVar26;
      if (lVar33 == -1) goto LAB_0e502d20;
      plVar26 = (long *)(*(long *)(pcVar24 + 0x30) + lVar33 * 0x18);
    } while (*(uint *)(*(long *)(pcVar24 + 0x30) + 8 + lVar33 * 0x18) !=
             *(uint *)(_DAT_0f755f80 + 4));
    if (plVar26 == *(long **)(pcVar24 + 0x38)) {
LAB_0e502d20:
      auStack_278._0_8_ = &DAT_0f755f80;
    }
    else {
      auStack_278._0_8_ = plVar26[2];
    }
    auStack_278._8_8_ = pcVar24 + 0x18;
    func_0x0ed621a0(auStack_278,uStack_17c);
    auStack_278._0_2_ = 1;
    auStack_278._8_8_ = &pcStack_1a0;
    uStack_268 = uStack_17c;
    pcStack_260 = (code *)0x0;
    pcStack_258 = (code *)0x0;
    uStack_250 = 0;
    cStack_24c = 0;
    uStack_24b = 0;
    uStack_249 = 0;
    cStack_248 = '\0';
    uStack_247 = 0;
    uStack_241 = 0;
    lStack_240 = 0;
    auStack_238._0_8_ = 0x736b636f6c620c;
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_208 = 0;
    uStack_204 = 0;
    auStack_200 = (undefined1  [16])0x0;
    uStack_1f0 = 0x3f600000;
    func_0x048afb10(&uStack_220,8);
    auStack_1c8 = (undefined1  [16])0x0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1ce = 0;
    uStack_1cc = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uStack_1b8 = 0xff00;
    uStack_1b4 = 0;
    uStack_1b0 = 0;
    uStack_1ac = 0;
    pcVar24 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar24 == (code *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *(undefined **)pcVar24 = &UNK_0f4c6ea0;
    if (pcStack_260 != (code *)0x0) {
      lVar33 = *(long *)pcStack_260;
      pcStack_260 = pcVar24;
      (**(code **)(lVar33 + 8))();
      pcVar24 = pcStack_260;
    }
    pcStack_260 = pcVar24;
    auStack_2e8._0_4_ = uStack_268;
    uStack_2e0 = 0;
    puStack_2d8 = (undefined *)((ulong)puStack_2d8 & 0xffffffff00000000);
    uStack_2d0 = (code *)0x1;
    pcStack_2c8 = (code *)0x0;
    uStack_2c0 = &UNK_0e55c430;
    puStack_2b8 = &SUB_048b06d0;
    puStack_2b0 = &UNK_0e55ad60;
    puStack_2a8 = &UNK_0e55c440;
    puStack_2a0 = &UNK_0e55c640;
    uStack_298 = 0;
    auStack_290._0_16_ = (undefined1  [16])0x0;
    FUN_048b05a0(auStack_278._8_8_,auStack_2e8);
    uVar4 = auStack_290._8_8_;
    if ((long *)auStack_290._8_8_ != (long *)0x0) {
      LOCK();
      plVar26 = (long *)(auStack_290._8_8_ + 8);
      lVar33 = *plVar26;
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (lVar33 == 0) {
        (**(code **)(*(long *)auStack_290._8_8_ + 0x10))(auStack_290._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0e558ee0(auStack_2e8,auStack_278._8_8_,&pcStack_260);
    if (uStack_2d0._4_4_ == 2) {
      piVar22 = *(int **)(*(long *)(puStack_2d8 + 0x78) + 0x60);
      iVar16 = *piVar22;
      while (iVar16 != (int)uStack_2d0) {
        piVar22 = piVar22 + 0x16;
        iVar16 = *piVar22;
      }
      uVar29 = *(ulong *)(piVar22 + 0xc);
      while (uVar29 != uStack_2e0) {
        piVar22 = *(int **)(piVar22 + 0xe);
        uVar29 = *(ulong *)(piVar22 + 0xc);
      }
LAB_0e502fef:
      piVar22[4] = piVar22[4] | auStack_278._0_4_ << 0x10;
    }
    else {
      if (uStack_2d0._4_4_ == 1) {
        piVar22 = *(int **)(*(long *)(puStack_2d8 + 0x78) + 0x48);
        iVar16 = *piVar22;
        while (iVar16 != (int)uStack_2d0) {
          piVar22 = piVar22 + 0x1a;
          iVar16 = *piVar22;
        }
        goto LAB_0e502fef;
      }
      if (uStack_2d0._4_4_ == 0) {
        *(uint *)(puStack_2d8 + 0x18) = *(uint *)(puStack_2d8 + 0x18) | auStack_278._0_4_ << 0x10;
      }
    }
    func_0x048b0bc0(&pcStack_260);
  }
  if ((DAT_0f7560b8 == '\0') && (iVar16 = func_0x04108328(&DAT_0f7560b8), iVar16 != 0)) {
    func_0x0e55cb60();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f756038,0xf53dab8);
    func_0x0410844d(&DAT_0f7560b8);
  }
  plVar26 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f756038 + 4)) * 8);
  do {
    lVar33 = *plVar26;
    if (lVar33 == -1) goto LAB_0e503060;
    plVar26 = (long *)(*(long *)(param_1 + 0x30) + lVar33 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar33 * 0x18) != *(uint *)(_DAT_0f756038 + 4))
  ;
  if (plVar26 == *(long **)(param_1 + 0x38)) {
LAB_0e503060:
    puVar19 = &DAT_0f756038;
    if (iRam000000000f756098 != -0x2b3da790) goto LAB_0e5030cd;
LAB_0e50308b:
    lVar33 = *(long *)(puVar19 + 0x68);
    if (lVar33 == 0) goto LAB_0e5030cd;
    bVar35 = (*(byte *)(lVar33 + 8) & 1) != 0;
    lVar20 = lVar33 + 9;
    if (bVar35) {
      lVar20 = *(long *)(lVar33 + 0x18);
    }
    uVar29 = (ulong)(*(byte *)(lVar33 + 8) >> 1);
    if (bVar35) {
      uVar29 = *(ulong *)(lVar33 + 0x10);
    }
    func_0x0e55d450(&pcStack_160,param_1,lVar20,uVar29);
    pcVar24 = pcStack_160;
    iVar16 = iStack_138;
    uVar14 = uStack_134;
  }
  else {
    puVar19 = (undefined *)plVar26[2];
    if (*(int *)(puVar19 + 0x60) == -0x2b3da790) goto LAB_0e50308b;
LAB_0e5030cd:
    func_0x0e55d450(&pcStack_160,param_1,&UNK_013da904,10);
    pcVar24 = pcStack_160;
    iVar16 = iStack_138;
    uVar14 = uStack_134;
  }
  pcStack_160 = pcVar24;
  iStack_138 = iVar16;
  uStack_134 = uVar14;
  if ((char)uStack_130 == '\0') {
    pcStack_c0 = (code *)CONCAT44(uStack_13c,uStack_140);
    uStack_120 = CONCAT44(uStack_12c,uStack_130);
    pcStack_d8 = pcStack_158;
    pcStack_d0 = pcStack_150;
    pcStack_c8 = pcStack_148;
    if ((DAT_0f7560b8 == '\0') && (iVar18 = func_0x04108328(&DAT_0f7560b8), iVar18 != 0)) {
      func_0x0e55cb60();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f756038,0xf53dab8);
      func_0x0410844d(&DAT_0f7560b8);
    }
    plVar26 = (long *)(*(long *)(pcVar24 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(pcVar24 + 0x20) - *(long *)(pcVar24 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f756038 + 4)) * 8);
    do {
      lVar33 = *plVar26;
      if (lVar33 == -1) goto LAB_0e5031a0;
      plVar26 = (long *)(*(long *)(pcVar24 + 0x30) + lVar33 * 0x18);
    } while (*(uint *)(*(long *)(pcVar24 + 0x30) + 8 + lVar33 * 0x18) !=
             *(uint *)(_DAT_0f756038 + 4));
    if (plVar26 == *(long **)(pcVar24 + 0x38)) {
LAB_0e5031a0:
      puVar19 = &DAT_0f756038;
      pbVar25 = *(byte **)(pcVar24 + 0x50);
      pbVar27 = *(byte **)(pcVar24 + 0x58);
      if (pbVar25 != pbVar27) {
LAB_0e50324e:
        do {
          bVar1 = *pbVar25;
          if ((bVar1 & 1) == 0) {
            if (bVar1 >> 1 == 0x1a) goto LAB_0e50327a;
          }
          else if (*(long *)(pbVar25 + 8) == 0x1a) {
LAB_0e50327a:
            if ((bVar1 & 1) == 0) {
              pbVar28 = pbVar25 + 1;
            }
            else {
              pbVar28 = *(byte **)(pbVar25 + 0x10);
            }
            auVar37[0] = -(*pbVar28 == 0x5b);
            auVar37[1] = -(pbVar28[1] == 99);
            auVar37[2] = -(pbVar28[2] == 0x65);
            auVar37[3] = -(pbVar28[3] == 0x72);
            auVar37[4] = -(pbVar28[4] == 0x65);
            auVar37[5] = -(pbVar28[5] == 0x61);
            auVar37[6] = -(pbVar28[6] == 0x6c);
            auVar37[7] = -(pbVar28[7] == 0x3a);
            auVar37[8] = -(pbVar28[8] == 100);
            auVar37[9] = -(pbVar28[9] == 0x6f);
            auVar37[10] = -(pbVar28[10] == 99);
            auVar37[0xb] = -(pbVar28[0xb] == 0x75);
            auVar37[0xc] = -(pbVar28[0xc] == 0x6d);
            auVar37[0xd] = -(pbVar28[0xd] == 0x65);
            auVar37[0xe] = -(pbVar28[0xe] == 0x6e);
            auVar37[0xf] = -(pbVar28[0xf] == 0x74);
            auVar43[0] = -(pbVar28[10] == 99);
            auVar43[1] = -(pbVar28[0xb] == 0x75);
            auVar43[2] = -(pbVar28[0xc] == 0x6d);
            auVar43[3] = -(pbVar28[0xd] == 0x65);
            auVar43[4] = -(pbVar28[0xe] == 0x6e);
            auVar43[5] = -(pbVar28[0xf] == 0x74);
            auVar43[6] = -(pbVar28[0x10] == 0x61);
            auVar43[7] = -(pbVar28[0x11] == 0x74);
            auVar43[8] = -(pbVar28[0x12] == 0x69);
            auVar43[9] = -(pbVar28[0x13] == 0x6f);
            auVar43[10] = -(pbVar28[0x14] == 0x6e);
            auVar43[0xb] = -(pbVar28[0x15] == 0x5f);
            auVar43[0xc] = -(pbVar28[0x16] == 0x74);
            auVar43[0xd] = -(pbVar28[0x17] == 0x61);
            auVar43[0xe] = -(pbVar28[0x18] == 0x67);
            auVar43[0xf] = -(pbVar28[0x19] == 0x5d);
            auVar43 = auVar43 & auVar37;
            if ((ushort)((ushort)(SUB161(auVar43 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                        (ushort)(byte)(auVar43[0xf] >> 7) << 0xf) == 0xffff) break;
          }
          pbVar25 = pbVar25 + 0x38;
        } while (pbVar25 != pbVar27);
      }
    }
    else {
      puVar19 = (undefined *)plVar26[2];
      pbVar25 = *(byte **)(pcVar24 + 0x50);
      pbVar27 = *(byte **)(pcVar24 + 0x58);
      if (pbVar25 != pbVar27) goto LAB_0e50324e;
    }
    if (pbVar25 == pbVar27) {
LAB_0e5032aa:
      if (iVar16 == 0) {
        if (((puVar19 == (undefined *)0x0) || (*(int *)(puVar19 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar19 + 0x68) == 0)) goto LAB_0e503326;
        lVar33 = *(long *)(puVar19 + 0x68) + 0x38;
      }
      else {
        if (puVar19 == (undefined *)0x0) {
          puVar19 = (undefined *)func_0x048aead0(pcVar24 + 0x18);
        }
        auStack_278._0_8_ = func_0x048b0c90(pcVar24 + 0x18,puVar19,uVar14,1);
        if (auStack_278._0_8_ == 0) {
          auStack_278 = (undefined1  [16])0x0;
          FUN_048b0d20(auStack_278);
          if (auStack_278._0_8_ == 0) goto LAB_0e503326;
        }
        if ((*(int *)(auStack_278._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_278._0_8_ + 0x58) != 0)) {
          lVar33 = *(long *)(auStack_278._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0e503326:
          lVar33 = 0;
        }
      }
      puStack_2d8 = &UNK_0488e0b0;
      uStack_2d0 = (code *)0x0;
      pcStack_2c8 = (code *)CONCAT35(pcStack_2c8._5_3_,0x48b5725f);
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uStack_2e0;
      _auStack_2e8 = auVar11 << 0x40;
      auStack_278 = (undefined1  [16])0x0;
      pcStack_260 = (code *)&UNK_0488e0b0;
      pcStack_258 = (code *)0x0;
      uStack_250 = 0x48b5725f;
      cStack_24c = '\0';
      pcVar23 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (pcVar23 == (code *)0x0) {
        FUN_0eec74c0(0x20,0);
      }
      uVar4 = _UNK_013bbadf;
      pcStack_1a8 = (code *)0x21;
      pcStack_1a0 = (code *)0x1a;
      *(ulong *)(pcVar23 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)(pcVar23 + 0x12) = uVar4;
      uVar4 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *(undefined8 *)pcVar23 = _DAT_013bbacd;
      *(undefined8 *)(pcVar23 + 8) = uVar4;
      pcVar23[0x1a] = (code)0x0;
      pcStack_198 = pcVar23;
      lVar33 = func_0x048b5060(lVar33,&pcStack_1a8);
      *(undefined8 *)(lVar33 + 0x20) = 0;
      if ((undefined1 *)(lVar33 + 0x20) == auStack_278) {
        pcVar23 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar33 + 0x40) != (code *)0x0) {
          puVar31 = (undefined8 *)(lVar33 + 0x28);
          (**(code **)(lVar33 + 0x40))(puVar31);
          if (cStack_24c != '\0') {
            if (cStack_24c == '\x02') {
              (*pcStack_260)(5,auStack_278 + 8,puVar31);
            }
            else {
              uVar4 = auStack_278._8_8_;
              auStack_278._8_8_ = 0;
              *puVar31 = uVar4;
            }
          }
        }
        *(code **)(lVar33 + 0x38) = pcStack_260;
        *(code **)(lVar33 + 0x40) = pcStack_258;
        *(uint *)(lVar33 + 0x48) = uStack_250;
        *(char *)(lVar33 + 0x4c) = cStack_24c;
        pcVar23 = pcStack_258;
      }
      if (((ulong)pcStack_1a8 & 1) != 0) {
        func_0x0412a280(pcStack_198,(ulong)pcStack_1a8 & 0xfffffffffffffffe);
        pcVar23 = pcStack_258;
      }
      if (pcVar23 != (code *)0x0) {
        (*pcVar23)(auStack_278 + 8);
      }
      if (uStack_2d0 != (code *)0x0) {
        (*uStack_2d0)(auStack_2e8);
      }
    }
    else {
      iVar18 = *(int *)(pbVar25 + 0x1c);
      if ((DAT_0f550ad8 == '\0') &&
         (puStack_168 = puVar19, iVar17 = func_0x04108328(&DAT_0f550ad8), puVar19 = puStack_168,
         iVar17 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
        puVar19 = puStack_168;
      }
      if (iVar18 == _DAT_0f550ac4) goto LAB_0e5032aa;
    }
    pcStack_110 = pcStack_d8;
    pcStack_108 = pcStack_d0;
    pcStack_100 = pcStack_c8;
    pcStack_f8 = pcStack_c0;
    uStack_e8 = (undefined4)uStack_120;
    iStack_e4 = (int)((ulong)uStack_120 >> 0x20);
    uStack_f0 = 2;
    uStack_ec = 0xa9ab6920;
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_228 = 0;
    uStack_220 = 0;
    auStack_238 = (undefined1  [16])0x0;
    cStack_248 = 0;
    uStack_247 = 0;
    uStack_241 = 0;
    lStack_240 = 0;
    pcStack_258 = (code *)0x0;
    uStack_250 = 0;
    cStack_24c = 0;
    uStack_24b = 0;
    uStack_249 = 0;
    uStack_268 = 0;
    uStack_264 = 0;
    pcStack_260 = (code *)0x0;
    auStack_278 = (undefined1  [16])0x0;
    uStack_208 = 0x3f600000;
    pcStack_118 = pcVar24;
    func_0x048afb10(auStack_238,8);
    auVar6 = auStack_1c8;
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    uStack_1f0 = 0;
    uStack_1ec = 0;
    uStack_1e8 = 0;
    auStack_200 = (undefined1  [16])0x0;
    uStack_1d0 = 0xff00;
    uStack_1cc = uStack_1cc & 0xffffff00;
    auStack_1c8._0_4_ = auStack_1c8._1_4_ << 8;
    auStack_1c8._5_11_ = auVar6._5_11_;
    auStack_1c8[4] = 0;
    puVar31 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar31 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar31 = &UNK_0f4bddb8;
    uVar4 = auStack_278._0_8_;
    auStack_278._0_8_ = puVar31;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    if ((uStack_250 & 1) != 0) {
      func_0x0412a280(lStack_240,
                      CONCAT17(uStack_249,CONCAT25(uStack_24b,CONCAT14(cStack_24c,uStack_250))) &
                      0xfffffffffffffffe);
    }
    uStack_250 = 0x6f72701c;
    cStack_24c = 99;
    uStack_24b = 0x7365;
    uStack_249 = 0x73;
    cStack_248 = 0x6f;
    uStack_247 = 0x657079745f72;
    uStack_241 = 0;
    if ((DAT_0f7560d8 == '\0') && (iVar16 = func_0x04108328(&DAT_0f7560d8), iVar16 != 0)) {
      func_0x0e55cc70();
      func_0x0410844d(&DAT_0f7560d8);
    }
    auStack_2e8._0_4_ = uStack_ec;
    uStack_2e0 = 0;
    puStack_2d8 = (undefined *)CONCAT44(puStack_2d8._4_4_,3);
    uStack_2d0 = (code *)0x1;
    pcStack_2c8 = (code *)0x0;
    uStack_2c0 = &UNK_0e557750;
    puStack_2b8 = &SUB_048b06d0;
    puStack_2b0 = &UNK_0e553380;
    puStack_2a8 = &UNK_0e55e220;
    puStack_2a0 = &UNK_0e55e230;
    uStack_298 = 0;
    auStack_290._0_16_ = (undefined1  [16])0x0;
    FUN_048b05a0(&pcStack_110,auStack_2e8);
    uVar4 = auStack_290._8_8_;
    if ((long *)auStack_290._8_8_ != (long *)0x0) {
      LOCK();
      plVar26 = (long *)(auStack_290._8_8_ + 8);
      lVar33 = *plVar26;
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (lVar33 == 0) {
        (**(code **)(*(long *)auStack_290._8_8_ + 0x10))(auStack_290._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    pcStack_198 = pcStack_100;
    pcStack_190 = pcStack_f8;
    pcStack_1a8 = pcStack_110;
    pcStack_1a0 = pcStack_108;
    func_0x0e55dfb0(auStack_2e8,&pcStack_1a8,auStack_278);
    if (uStack_2d0._4_4_ == 2) {
      piVar22 = *(int **)(*(long *)((long)puStack_2d8 + 0x78) + 0x60);
      iVar16 = *piVar22;
      while (iVar16 != (int)uStack_2d0) {
        piVar22 = piVar22 + 0x16;
        iVar16 = *piVar22;
      }
      uVar29 = *(ulong *)(piVar22 + 0xc);
      while (uVar29 != uStack_2e0) {
        piVar22 = *(int **)(piVar22 + 0xe);
        uVar29 = *(ulong *)(piVar22 + 0xc);
      }
LAB_0e50380f:
      *(byte *)((long)piVar22 + 0x12) = *(byte *)((long)piVar22 + 0x12) | 9;
    }
    else {
      if (uStack_2d0._4_4_ == 1) {
        piVar22 = *(int **)(*(long *)((long)puStack_2d8 + 0x78) + 0x48);
        iVar16 = *piVar22;
        while (iVar16 != (int)uStack_2d0) {
          piVar22 = piVar22 + 0x1a;
          iVar16 = *piVar22;
        }
        goto LAB_0e50380f;
      }
      if (uStack_2d0._4_4_ == 0) {
        *(uint *)((long)puStack_2d8 + 0x18U) = *(uint *)((long)puStack_2d8 + 0x18U) | 0x90000;
      }
    }
    pcStack_1a8 = pcStack_118;
    pcStack_1a0 = pcStack_110;
    pcStack_198 = pcStack_108;
    pcStack_190 = pcStack_100;
    pcStack_188 = pcStack_f8;
    uStack_180 = uStack_f0;
    uStack_17c = uStack_ec;
    uStack_178 = CONCAT31(uStack_178._1_3_,(undefined1)uStack_e8);
    func_0x048b0bc0(auStack_278);
    if ((DAT_0f7560d8 == '\0') && (iVar16 = func_0x04108328(&DAT_0f7560d8), iVar16 != 0)) {
      func_0x0e55cc70();
      func_0x0410844d(&DAT_0f7560d8);
    }
    pcVar24 = pcStack_1a8;
    uStack_180 = 1;
    uStack_17c = 0x9ccfbbe0;
    if ((DAT_0f7560b8 == '\0') && (iVar16 = func_0x04108328(&DAT_0f7560b8), iVar16 != 0)) {
      func_0x0e55cb60();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f756038,0xf53dab8);
      func_0x0410844d(&DAT_0f7560b8);
    }
    plVar26 = (long *)(*(long *)(pcVar24 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(pcVar24 + 0x20) - *(long *)(pcVar24 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f756038 + 4)) * 8);
    do {
      lVar33 = *plVar26;
      if (lVar33 == -1) goto LAB_0e5038f0;
      plVar26 = (long *)(*(long *)(pcVar24 + 0x30) + lVar33 * 0x18);
    } while (*(uint *)(*(long *)(pcVar24 + 0x30) + 8 + lVar33 * 0x18) !=
             *(uint *)(_DAT_0f756038 + 4));
    if (plVar26 == *(long **)(pcVar24 + 0x38)) {
LAB_0e5038f0:
      auStack_278._0_8_ = &DAT_0f756038;
    }
    else {
      auStack_278._0_8_ = plVar26[2];
    }
    auStack_278._8_8_ = pcVar24 + 0x18;
    func_0x0ed621a0(auStack_278,uStack_17c);
    auStack_278._0_2_ = 1;
    auStack_278._8_8_ = &pcStack_1a0;
    uStack_268 = uStack_17c;
    pcStack_260 = (code *)0x0;
    pcStack_258 = (code *)0x0;
    uStack_250 = 0;
    cStack_24c = 0;
    uStack_24b = 0;
    uStack_249 = 0;
    cStack_248 = '\0';
    uStack_247 = 0;
    uStack_241 = 0;
    lStack_240 = 0;
    auStack_238._0_7_ = 0x73656c75720a;
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_208 = 0;
    uStack_204 = 0;
    auStack_200 = (undefined1  [16])0x0;
    uStack_1f0 = 0x3f600000;
    func_0x048afb10(&uStack_220,8);
    auStack_1c8 = (undefined1  [16])0x0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1ce = 0;
    uStack_1cc = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uStack_1b8 = 0xff00;
    uStack_1b4 = 0;
    uStack_1b0 = 0;
    uStack_1ac = 0;
    pcVar24 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar24 == (code *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *(undefined **)pcVar24 = &UNK_0f4bdf98;
    if (pcStack_260 != (code *)0x0) {
      lVar33 = *(long *)pcStack_260;
      pcStack_260 = pcVar24;
      (**(code **)(lVar33 + 8))();
      pcVar24 = pcStack_260;
    }
    pcStack_260 = pcVar24;
    auStack_2e8._0_4_ = uStack_268;
    uStack_2e0 = 0;
    puStack_2d8 = (undefined *)((ulong)puStack_2d8 & 0xffffffff00000000);
    uStack_2d0 = (code *)0x1;
    pcStack_2c8 = (code *)0x0;
    uStack_2c0 = &UNK_0e562970;
    puStack_2b8 = &SUB_048b06d0;
    puStack_2b0 = &UNK_0e561660;
    puStack_2a8 = &UNK_0e562a30;
    puStack_2a0 = &UNK_0e562d40;
    uStack_298 = 0;
    auStack_290._0_16_ = (undefined1  [16])0x0;
    FUN_048b05a0(auStack_278._8_8_,auStack_2e8);
    uVar4 = auStack_290._8_8_;
    if ((long *)auStack_290._8_8_ != (long *)0x0) {
      LOCK();
      plVar26 = (long *)(auStack_290._8_8_ + 8);
      lVar33 = *plVar26;
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (lVar33 == 0) {
        (**(code **)(*(long *)auStack_290._8_8_ + 0x10))(auStack_290._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0e55dfb0(auStack_2e8,auStack_278._8_8_,&pcStack_260);
    if (uStack_2d0._4_4_ == 2) {
      piVar22 = *(int **)(*(long *)(puStack_2d8 + 0x78) + 0x60);
      iVar16 = *piVar22;
      while (iVar16 != (int)uStack_2d0) {
        piVar22 = piVar22 + 0x16;
        iVar16 = *piVar22;
      }
      uVar29 = *(ulong *)(piVar22 + 0xc);
      while (uVar29 != uStack_2e0) {
        piVar22 = *(int **)(piVar22 + 0xe);
        uVar29 = *(ulong *)(piVar22 + 0xc);
      }
LAB_0e503baf:
      piVar22[4] = piVar22[4] | auStack_278._0_4_ << 0x10;
    }
    else {
      if (uStack_2d0._4_4_ == 1) {
        piVar22 = *(int **)(*(long *)(puStack_2d8 + 0x78) + 0x48);
        iVar16 = *piVar22;
        while (iVar16 != (int)uStack_2d0) {
          piVar22 = piVar22 + 0x1a;
          iVar16 = *piVar22;
        }
        goto LAB_0e503baf;
      }
      if (uStack_2d0._4_4_ == 0) {
        *(uint *)(puStack_2d8 + 0x18) = *(uint *)(puStack_2d8 + 0x18) | auStack_278._0_4_ << 0x10;
      }
    }
    func_0x048b0bc0(&pcStack_260);
  }
  if ((DAT_0f7563f8 == '\0') && (iVar16 = func_0x04108328(&DAT_0f7563f8), iVar16 != 0)) {
    func_0x0e563270();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f756378,0xf53dab8);
    func_0x0410844d(&DAT_0f7563f8);
  }
  plVar26 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f756378 + 4)) * 8);
  do {
    lVar33 = *plVar26;
    if (lVar33 == -1) goto LAB_0e503c20;
    plVar26 = (long *)(*(long *)(param_1 + 0x30) + lVar33 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar33 * 0x18) != *(uint *)(_DAT_0f756378 + 4))
  ;
  if (plVar26 == *(long **)(param_1 + 0x38)) {
LAB_0e503c20:
    puVar19 = &DAT_0f756378;
    if (iRam000000000f7563d8 != -0x2b3da790) goto LAB_0e503c8d;
LAB_0e503c4b:
    lVar33 = *(long *)(puVar19 + 0x68);
    if (lVar33 == 0) goto LAB_0e503c8d;
    bVar35 = (*(byte *)(lVar33 + 8) & 1) != 0;
    lVar20 = lVar33 + 9;
    if (bVar35) {
      lVar20 = *(long *)(lVar33 + 0x18);
    }
    uVar29 = (ulong)(*(byte *)(lVar33 + 8) >> 1);
    if (bVar35) {
      uVar29 = *(ulong *)(lVar33 + 0x10);
    }
    FUN_0e563900(&pcStack_160,param_1,lVar20,uVar29);
    pcVar24 = pcStack_160;
    iVar16 = iStack_138;
    uVar14 = uStack_134;
  }
  else {
    puVar19 = (undefined *)plVar26[2];
    if (*(int *)(puVar19 + 0x60) == -0x2b3da790) goto LAB_0e503c4b;
LAB_0e503c8d:
    FUN_0e563900(&pcStack_160,param_1,&UNK_013a74f3,0xf);
    pcVar24 = pcStack_160;
    iVar16 = iStack_138;
    uVar14 = uStack_134;
  }
  pcStack_160 = pcVar24;
  iStack_138 = iVar16;
  uStack_134 = uVar14;
  if ((char)uStack_130 == '\0') {
    pcStack_c0 = (code *)CONCAT44(uStack_13c,uStack_140);
    uStack_120 = CONCAT44(uStack_12c,uStack_130);
    pcStack_d8 = pcStack_158;
    pcStack_d0 = pcStack_150;
    pcStack_c8 = pcStack_148;
    if ((DAT_0f7563f8 == '\0') && (iVar18 = func_0x04108328(&DAT_0f7563f8), iVar18 != 0)) {
      func_0x0e563270();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f756378,0xf53dab8);
      func_0x0410844d(&DAT_0f7563f8);
    }
    plVar26 = (long *)(*(long *)(pcVar24 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(pcVar24 + 0x20) - *(long *)(pcVar24 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f756378 + 4)) * 8);
    do {
      lVar33 = *plVar26;
      if (lVar33 == -1) goto LAB_0e503d60;
      plVar26 = (long *)(*(long *)(pcVar24 + 0x30) + lVar33 * 0x18);
    } while (*(uint *)(*(long *)(pcVar24 + 0x30) + 8 + lVar33 * 0x18) !=
             *(uint *)(_DAT_0f756378 + 4));
    if (plVar26 == *(long **)(pcVar24 + 0x38)) {
LAB_0e503d60:
      puVar19 = &DAT_0f756378;
      pbVar25 = *(byte **)(pcVar24 + 0x50);
      pbVar27 = *(byte **)(pcVar24 + 0x58);
      if (pbVar25 != pbVar27) {
LAB_0e503e0e:
        do {
          bVar1 = *pbVar25;
          if ((bVar1 & 1) == 0) {
            if (bVar1 >> 1 == 0x1a) goto LAB_0e503e3a;
          }
          else if (*(long *)(pbVar25 + 8) == 0x1a) {
LAB_0e503e3a:
            if ((bVar1 & 1) == 0) {
              pbVar28 = pbVar25 + 1;
            }
            else {
              pbVar28 = *(byte **)(pbVar25 + 0x10);
            }
            auVar38[0] = -(*pbVar28 == 0x5b);
            auVar38[1] = -(pbVar28[1] == 99);
            auVar38[2] = -(pbVar28[2] == 0x65);
            auVar38[3] = -(pbVar28[3] == 0x72);
            auVar38[4] = -(pbVar28[4] == 0x65);
            auVar38[5] = -(pbVar28[5] == 0x61);
            auVar38[6] = -(pbVar28[6] == 0x6c);
            auVar38[7] = -(pbVar28[7] == 0x3a);
            auVar38[8] = -(pbVar28[8] == 100);
            auVar38[9] = -(pbVar28[9] == 0x6f);
            auVar38[10] = -(pbVar28[10] == 99);
            auVar38[0xb] = -(pbVar28[0xb] == 0x75);
            auVar38[0xc] = -(pbVar28[0xc] == 0x6d);
            auVar38[0xd] = -(pbVar28[0xd] == 0x65);
            auVar38[0xe] = -(pbVar28[0xe] == 0x6e);
            auVar38[0xf] = -(pbVar28[0xf] == 0x74);
            auVar44[0] = -(pbVar28[10] == 99);
            auVar44[1] = -(pbVar28[0xb] == 0x75);
            auVar44[2] = -(pbVar28[0xc] == 0x6d);
            auVar44[3] = -(pbVar28[0xd] == 0x65);
            auVar44[4] = -(pbVar28[0xe] == 0x6e);
            auVar44[5] = -(pbVar28[0xf] == 0x74);
            auVar44[6] = -(pbVar28[0x10] == 0x61);
            auVar44[7] = -(pbVar28[0x11] == 0x74);
            auVar44[8] = -(pbVar28[0x12] == 0x69);
            auVar44[9] = -(pbVar28[0x13] == 0x6f);
            auVar44[10] = -(pbVar28[0x14] == 0x6e);
            auVar44[0xb] = -(pbVar28[0x15] == 0x5f);
            auVar44[0xc] = -(pbVar28[0x16] == 0x74);
            auVar44[0xd] = -(pbVar28[0x17] == 0x61);
            auVar44[0xe] = -(pbVar28[0x18] == 0x67);
            auVar44[0xf] = -(pbVar28[0x19] == 0x5d);
            auVar44 = auVar44 & auVar38;
            if ((ushort)((ushort)(SUB161(auVar44 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe |
                        (ushort)(byte)(auVar44[0xf] >> 7) << 0xf) == 0xffff) break;
          }
          pbVar25 = pbVar25 + 0x38;
        } while (pbVar25 != pbVar27);
      }
    }
    else {
      puVar19 = (undefined *)plVar26[2];
      pbVar25 = *(byte **)(pcVar24 + 0x50);
      pbVar27 = *(byte **)(pcVar24 + 0x58);
      if (pbVar25 != pbVar27) goto LAB_0e503e0e;
    }
    if (pbVar25 == pbVar27) {
LAB_0e503e6a:
      if (iVar16 == 0) {
        if (((puVar19 == (undefined *)0x0) || (*(int *)(puVar19 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar19 + 0x68) == 0)) goto LAB_0e503ee6;
        lVar33 = *(long *)(puVar19 + 0x68) + 0x38;
      }
      else {
        if (puVar19 == (undefined *)0x0) {
          puVar19 = (undefined *)func_0x048aead0(pcVar24 + 0x18);
        }
        auStack_278._0_8_ = func_0x048b0c90(pcVar24 + 0x18,puVar19,uVar14,1);
        if (auStack_278._0_8_ == 0) {
          auStack_278 = (undefined1  [16])0x0;
          FUN_048b0d20(auStack_278);
          if (auStack_278._0_8_ == 0) goto LAB_0e503ee6;
        }
        if ((*(int *)(auStack_278._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_278._0_8_ + 0x58) != 0)) {
          lVar33 = *(long *)(auStack_278._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0e503ee6:
          lVar33 = 0;
        }
      }
      puStack_2d8 = &UNK_0488e0b0;
      uStack_2d0 = (code *)0x0;
      pcStack_2c8 = (code *)CONCAT35(pcStack_2c8._5_3_,0x48b5725f);
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uStack_2e0;
      _auStack_2e8 = auVar12 << 0x40;
      auStack_278 = (undefined1  [16])0x0;
      pcStack_260 = (code *)&UNK_0488e0b0;
      pcStack_258 = (code *)0x0;
      uStack_250 = 0x48b5725f;
      cStack_24c = '\0';
      pcVar23 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (pcVar23 == (code *)0x0) {
        FUN_0eec74c0(0x20,0);
      }
      uVar4 = _UNK_013bbadf;
      pcStack_1a8 = (code *)0x21;
      pcStack_1a0 = (code *)0x1a;
      *(ulong *)(pcVar23 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)(pcVar23 + 0x12) = uVar4;
      uVar4 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *(undefined8 *)pcVar23 = _DAT_013bbacd;
      *(undefined8 *)(pcVar23 + 8) = uVar4;
      pcVar23[0x1a] = (code)0x0;
      pcStack_198 = pcVar23;
      lVar33 = func_0x048b5060(lVar33,&pcStack_1a8);
      *(undefined8 *)(lVar33 + 0x20) = 0;
      if ((undefined1 *)(lVar33 + 0x20) == auStack_278) {
        pcVar23 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar33 + 0x40) != (code *)0x0) {
          puVar31 = (undefined8 *)(lVar33 + 0x28);
          (**(code **)(lVar33 + 0x40))(puVar31);
          if (cStack_24c != '\0') {
            if (cStack_24c == '\x02') {
              (*pcStack_260)(5,auStack_278 + 8,puVar31);
            }
            else {
              uVar4 = auStack_278._8_8_;
              auStack_278._8_8_ = 0;
              *puVar31 = uVar4;
            }
          }
        }
        *(code **)(lVar33 + 0x38) = pcStack_260;
        *(code **)(lVar33 + 0x40) = pcStack_258;
        *(uint *)(lVar33 + 0x48) = uStack_250;
        *(char *)(lVar33 + 0x4c) = cStack_24c;
        pcVar23 = pcStack_258;
      }
      if (((ulong)pcStack_1a8 & 1) != 0) {
        func_0x0412a280(pcStack_198,(ulong)pcStack_1a8 & 0xfffffffffffffffe);
        pcVar23 = pcStack_258;
      }
      if (pcVar23 != (code *)0x0) {
        (*pcVar23)(auStack_278 + 8);
      }
      if (uStack_2d0 != (code *)0x0) {
        (*uStack_2d0)(auStack_2e8);
      }
    }
    else {
      iVar18 = *(int *)(pbVar25 + 0x1c);
      if ((DAT_0f550ad8 == '\0') &&
         (puStack_168 = puVar19, iVar17 = func_0x04108328(&DAT_0f550ad8), puVar19 = puStack_168,
         iVar17 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
        puVar19 = puStack_168;
      }
      if (iVar18 == _DAT_0f550ac4) goto LAB_0e503e6a;
    }
    pcStack_110 = pcStack_d8;
    pcStack_108 = pcStack_d0;
    pcStack_100 = pcStack_c8;
    pcStack_f8 = pcStack_c0;
    uStack_e8 = (undefined4)uStack_120;
    iStack_e4 = (int)((ulong)uStack_120 >> 0x20);
    uStack_f0 = 2;
    uStack_ec = 0xa9ab6920;
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_228 = 0;
    uStack_220 = 0;
    auStack_238 = (undefined1  [16])0x0;
    cStack_248 = 0;
    uStack_247 = 0;
    uStack_241 = 0;
    lStack_240 = 0;
    pcStack_258 = (code *)0x0;
    uStack_250 = 0;
    cStack_24c = 0;
    uStack_24b = 0;
    uStack_249 = 0;
    uStack_268 = 0;
    uStack_264 = 0;
    pcStack_260 = (code *)0x0;
    auStack_278 = (undefined1  [16])0x0;
    uStack_208 = 0x3f600000;
    pcStack_118 = pcVar24;
    func_0x048afb10(auStack_238,8);
    auVar6 = auStack_1c8;
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    uStack_1f0 = 0;
    uStack_1ec = 0;
    uStack_1e8 = 0;
    auStack_200 = (undefined1  [16])0x0;
    uStack_1d0 = 0xff00;
    uStack_1cc = uStack_1cc & 0xffffff00;
    auStack_1c8._0_4_ = auStack_1c8._1_4_ << 8;
    auStack_1c8._5_11_ = auVar6._5_11_;
    auStack_1c8[4] = 0;
    puVar31 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar31 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar31 = &UNK_0f4bddb8;
    uVar4 = auStack_278._0_8_;
    auStack_278._0_8_ = puVar31;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    if ((uStack_250 & 1) != 0) {
      func_0x0412a280(lStack_240,
                      CONCAT17(uStack_249,CONCAT25(uStack_24b,CONCAT14(cStack_24c,uStack_250))) &
                      0xfffffffffffffffe);
    }
    uStack_250 = 0x6f72701c;
    cStack_24c = 99;
    uStack_24b = 0x7365;
    uStack_249 = 0x73;
    cStack_248 = 0x6f;
    uStack_247 = 0x657079745f72;
    uStack_241 = 0;
    if ((DAT_0f756418 == '\0') && (iVar16 = func_0x04108328(&DAT_0f756418), iVar16 != 0)) {
      func_0x0e563380();
      func_0x0410844d(&DAT_0f756418);
    }
    auStack_2e8._0_4_ = uStack_ec;
    uStack_2e0 = 0;
    puStack_2d8 = (undefined *)CONCAT44(puStack_2d8._4_4_,3);
    uStack_2d0 = (code *)0x1;
    pcStack_2c8 = (code *)0x0;
    uStack_2c0 = &UNK_0e557750;
    puStack_2b8 = &SUB_048b06d0;
    puStack_2b0 = &UNK_0e553380;
    puStack_2a8 = &UNK_0e5646d0;
    puStack_2a0 = &UNK_0e5646e0;
    uStack_298 = 0;
    auStack_290._0_16_ = (undefined1  [16])0x0;
    FUN_048b05a0(&pcStack_110,auStack_2e8);
    uVar4 = auStack_290._8_8_;
    if ((long *)auStack_290._8_8_ != (long *)0x0) {
      LOCK();
      plVar26 = (long *)(auStack_290._8_8_ + 8);
      lVar33 = *plVar26;
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (lVar33 == 0) {
        (**(code **)(*(long *)auStack_290._8_8_ + 0x10))(auStack_290._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    pcStack_198 = pcStack_100;
    pcStack_190 = pcStack_f8;
    pcStack_1a8 = pcStack_110;
    pcStack_1a0 = pcStack_108;
    func_0x0e564460(auStack_2e8,&pcStack_1a8,auStack_278);
    if (uStack_2d0._4_4_ == 2) {
      piVar22 = *(int **)(*(long *)((long)puStack_2d8 + 0x78) + 0x60);
      iVar16 = *piVar22;
      while (iVar16 != (int)uStack_2d0) {
        piVar22 = piVar22 + 0x16;
        iVar16 = *piVar22;
      }
      uVar29 = *(ulong *)(piVar22 + 0xc);
      while (uVar29 != uStack_2e0) {
        piVar22 = *(int **)(piVar22 + 0xe);
        uVar29 = *(ulong *)(piVar22 + 0xc);
      }
LAB_0e5043cf:
      *(byte *)((long)piVar22 + 0x12) = *(byte *)((long)piVar22 + 0x12) | 9;
    }
    else {
      if (uStack_2d0._4_4_ == 1) {
        piVar22 = *(int **)(*(long *)((long)puStack_2d8 + 0x78) + 0x48);
        iVar16 = *piVar22;
        while (iVar16 != (int)uStack_2d0) {
          piVar22 = piVar22 + 0x1a;
          iVar16 = *piVar22;
        }
        goto LAB_0e5043cf;
      }
      if (uStack_2d0._4_4_ == 0) {
        *(uint *)((long)puStack_2d8 + 0x18U) = *(uint *)((long)puStack_2d8 + 0x18U) | 0x90000;
      }
    }
    pcStack_1a8 = pcStack_118;
    pcStack_1a0 = pcStack_110;
    pcStack_198 = pcStack_108;
    pcStack_190 = pcStack_100;
    pcStack_188 = pcStack_f8;
    uStack_180 = uStack_f0;
    uStack_17c = uStack_ec;
    uStack_178 = CONCAT31(uStack_178._1_3_,(undefined1)uStack_e8);
    func_0x048b0bc0(auStack_278);
    if ((DAT_0f756418 == '\0') && (iVar16 = func_0x04108328(&DAT_0f756418), iVar16 != 0)) {
      func_0x0e563380();
      func_0x0410844d(&DAT_0f756418);
    }
    pcVar24 = pcStack_1a8;
    uStack_180 = 1;
    uStack_17c = 0x425ed3ca;
    if ((DAT_0f7563f8 == '\0') && (iVar16 = func_0x04108328(&DAT_0f7563f8), iVar16 != 0)) {
      func_0x0e563270();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f756378,0xf53dab8);
      func_0x0410844d(&DAT_0f7563f8);
    }
    plVar26 = (long *)(*(long *)(pcVar24 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(pcVar24 + 0x20) - *(long *)(pcVar24 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f756378 + 4)) * 8);
    do {
      lVar33 = *plVar26;
      if (lVar33 == -1) goto LAB_0e5044b0;
      plVar26 = (long *)(*(long *)(pcVar24 + 0x30) + lVar33 * 0x18);
    } while (*(uint *)(*(long *)(pcVar24 + 0x30) + 8 + lVar33 * 0x18) !=
             *(uint *)(_DAT_0f756378 + 4));
    if (plVar26 == *(long **)(pcVar24 + 0x38)) {
LAB_0e5044b0:
      auStack_278._0_8_ = &DAT_0f756378;
    }
    else {
      auStack_278._0_8_ = plVar26[2];
    }
    auStack_278._8_8_ = pcVar24 + 0x18;
    func_0x0ed621a0(auStack_278,uStack_17c);
    auStack_278._0_2_ = 1;
    auStack_278._8_8_ = &pcStack_1a0;
    uStack_268 = uStack_17c;
    pcStack_260 = (code *)0x0;
    pcStack_258 = (code *)0x0;
    uStack_250 = 0;
    cStack_24c = 0;
    uStack_24b = 0;
    uStack_249 = 0;
    cStack_248 = '\0';
    uStack_247 = 0;
    uStack_241 = 0;
    lStack_240 = 0;
    auStack_238._0_7_ = 0x65756c61760a;
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_208 = 0;
    uStack_204 = 0;
    auStack_200 = (undefined1  [16])0x0;
    uStack_1f0 = 0x3f600000;
    func_0x048afb10(&uStack_220,8);
    auStack_1c8 = (undefined1  [16])0x0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1ce = 0;
    uStack_1cc = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uStack_1b8 = 0xff00;
    uStack_1b4 = 0;
    uStack_1b0 = 0;
    uStack_1ac = 0;
    pcVar24 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar24 == (code *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *(undefined **)pcVar24 = &UNK_0ef44b00;
    if (pcStack_260 != (code *)0x0) {
      lVar33 = *(long *)pcStack_260;
      pcStack_260 = pcVar24;
      (**(code **)(lVar33 + 8))();
      pcVar24 = pcStack_260;
    }
    pcStack_260 = pcVar24;
    auStack_2e8._0_4_ = uStack_268;
    uStack_2e0 = 0;
    puStack_2d8 = (undefined *)((ulong)puStack_2d8 & 0xffffffff00000000);
    uStack_2d0 = (code *)0x1;
    pcStack_2c8 = (code *)0x0;
    uStack_2c0 = &UNK_048b3f30;
    puStack_2b8 = &SUB_048b06d0;
    puStack_2b0 = &SUB_048b2190;
    puStack_2a8 = &UNK_0e564730;
    puStack_2a0 = &UNK_0e5648f0;
    uStack_298 = 0;
    auStack_290._0_16_ = (undefined1  [16])0x0;
    FUN_048b05a0(auStack_278._8_8_,auStack_2e8);
    uVar4 = auStack_290._8_8_;
    if ((long *)auStack_290._8_8_ != (long *)0x0) {
      LOCK();
      plVar26 = (long *)(auStack_290._8_8_ + 8);
      lVar33 = *plVar26;
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (lVar33 == 0) {
        (**(code **)(*(long *)auStack_290._8_8_ + 0x10))(auStack_290._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0e564460(auStack_2e8,auStack_278._8_8_,&pcStack_260);
    if (uStack_2d0._4_4_ == 2) {
      piVar22 = *(int **)(*(long *)(puStack_2d8 + 0x78) + 0x60);
      iVar16 = *piVar22;
      while (iVar16 != (int)uStack_2d0) {
        piVar22 = piVar22 + 0x16;
        iVar16 = *piVar22;
      }
      uVar29 = *(ulong *)(piVar22 + 0xc);
      while (uVar29 != uStack_2e0) {
        piVar22 = *(int **)(piVar22 + 0xe);
        uVar29 = *(ulong *)(piVar22 + 0xc);
      }
LAB_0e50476f:
      piVar22[4] = piVar22[4] | auStack_278._0_4_ << 0x10;
    }
    else {
      if (uStack_2d0._4_4_ == 1) {
        piVar22 = *(int **)(*(long *)(puStack_2d8 + 0x78) + 0x48);
        iVar16 = *piVar22;
        while (iVar16 != (int)uStack_2d0) {
          piVar22 = piVar22 + 0x1a;
          iVar16 = *piVar22;
        }
        goto LAB_0e50476f;
      }
      if (uStack_2d0._4_4_ == 0) {
        *(uint *)(puStack_2d8 + 0x18) = *(uint *)(puStack_2d8 + 0x18) | auStack_278._0_4_ << 0x10;
      }
    }
    func_0x048b0bc0(&pcStack_260);
  }
  if ((DAT_0f7564b0 == '\0') && (iVar16 = func_0x04108328(&DAT_0f7564b0), iVar16 != 0)) {
    func_0x0e564b80();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f756430,0xf53dab8);
    func_0x0410844d(&DAT_0f7564b0);
  }
  plVar26 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f756430 + 4)) * 8);
  do {
    lVar33 = *plVar26;
    if (lVar33 == -1) goto LAB_0e5047e0;
    plVar26 = (long *)(*(long *)(param_1 + 0x30) + lVar33 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar33 * 0x18) != *(uint *)(_DAT_0f756430 + 4))
  ;
  if (plVar26 == *(long **)(param_1 + 0x38)) {
LAB_0e5047e0:
    puVar19 = &DAT_0f756430;
    if (_DAT_0f756490 != -0x2b3da790) goto LAB_0e50484a;
LAB_0e50480b:
    lVar33 = *(long *)(puVar19 + 0x68);
    if (lVar33 == 0) goto LAB_0e50484a;
    bVar35 = (*(byte *)(lVar33 + 8) & 1) != 0;
    lVar20 = lVar33 + 9;
    if (bVar35) {
      lVar20 = *(long *)(lVar33 + 0x18);
    }
    uVar29 = (ulong)(*(byte *)(lVar33 + 8) >> 1);
    if (bVar35) {
      uVar29 = *(ulong *)(lVar33 + 0x10);
    }
    FUN_0e565430(auStack_278,param_1,lVar20,uVar29);
  }
  else {
    puVar19 = (undefined *)plVar26[2];
    if (*(int *)(puVar19 + 0x60) == -0x2b3da790) goto LAB_0e50480b;
LAB_0e50484a:
    FUN_0e565430(auStack_278,param_1,&UNK_01427663,0xf);
  }
  if (cStack_248 == '\0') {
    uVar4 = auStack_278._0_8_;
    if ((DAT_0f7564b0 == '\0') && (iVar16 = func_0x04108328(&DAT_0f7564b0), iVar16 != 0)) {
      func_0x0e564b80();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f756430,0xf53dab8);
      func_0x0410844d(&DAT_0f7564b0);
    }
    plVar26 = (long *)(*(long *)(uVar4 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(uVar4 + 0x20) - *(long *)(uVar4 + 0x18)) >> 3)
                              - 1U & *(uint *)(_DAT_0f756430 + 4)) * 8);
    do {
      lVar33 = *plVar26;
      if (lVar33 == -1) goto LAB_0e5048e0;
      plVar26 = (long *)(*(long *)(uVar4 + 0x30) + lVar33 * 0x18);
    } while (*(uint *)(*(long *)(uVar4 + 0x30) + 8 + lVar33 * 0x18) != *(uint *)(_DAT_0f756430 + 4))
    ;
    if (plVar26 == *(long **)(uVar4 + 0x38)) {
LAB_0e5048e0:
      puVar19 = &DAT_0f756430;
    }
    else {
      puVar19 = (undefined *)plVar26[2];
    }
    for (pbVar25 = *(byte **)(auStack_278._0_8_ + 0x50);
        pbVar25 != *(byte **)(auStack_278._0_8_ + 0x58); pbVar25 = pbVar25 + 0x38) {
      bVar1 = *pbVar25;
      if ((bVar1 & 1) == 0) {
        if (bVar1 >> 1 == 0x1a) goto LAB_0e5049ba;
      }
      else if (*(long *)(pbVar25 + 8) == 0x1a) {
LAB_0e5049ba:
        if ((bVar1 & 1) == 0) {
          pbVar27 = pbVar25 + 1;
        }
        else {
          pbVar27 = *(byte **)(pbVar25 + 0x10);
        }
        auVar39[0] = -(*pbVar27 == 0x5b);
        auVar39[1] = -(pbVar27[1] == 99);
        auVar39[2] = -(pbVar27[2] == 0x65);
        auVar39[3] = -(pbVar27[3] == 0x72);
        auVar39[4] = -(pbVar27[4] == 0x65);
        auVar39[5] = -(pbVar27[5] == 0x61);
        auVar39[6] = -(pbVar27[6] == 0x6c);
        auVar39[7] = -(pbVar27[7] == 0x3a);
        auVar39[8] = -(pbVar27[8] == 100);
        auVar39[9] = -(pbVar27[9] == 0x6f);
        auVar39[10] = -(pbVar27[10] == 99);
        auVar39[0xb] = -(pbVar27[0xb] == 0x75);
        auVar39[0xc] = -(pbVar27[0xc] == 0x6d);
        auVar39[0xd] = -(pbVar27[0xd] == 0x65);
        auVar39[0xe] = -(pbVar27[0xe] == 0x6e);
        auVar39[0xf] = -(pbVar27[0xf] == 0x74);
        auVar45[0] = -(pbVar27[10] == 99);
        auVar45[1] = -(pbVar27[0xb] == 0x75);
        auVar45[2] = -(pbVar27[0xc] == 0x6d);
        auVar45[3] = -(pbVar27[0xd] == 0x65);
        auVar45[4] = -(pbVar27[0xe] == 0x6e);
        auVar45[5] = -(pbVar27[0xf] == 0x74);
        auVar45[6] = -(pbVar27[0x10] == 0x61);
        auVar45[7] = -(pbVar27[0x11] == 0x74);
        auVar45[8] = -(pbVar27[0x12] == 0x69);
        auVar45[9] = -(pbVar27[0x13] == 0x6f);
        auVar45[10] = -(pbVar27[0x14] == 0x6e);
        auVar45[0xb] = -(pbVar27[0x15] == 0x5f);
        auVar45[0xc] = -(pbVar27[0x16] == 0x74);
        auVar45[0xd] = -(pbVar27[0x17] == 0x61);
        auVar45[0xe] = -(pbVar27[0x18] == 0x67);
        auVar45[0xf] = -(pbVar27[0x19] == 0x5d);
        auVar45 = auVar45 & auVar39;
        if ((ushort)((ushort)(SUB161(auVar45 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar45 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar45 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar45 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar45 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar45 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar45 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar45 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar45 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar45 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar45 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar45 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar45 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar45 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar45 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar45[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar25 != *(byte **)(auStack_278._0_8_ + 0x58)) {
      iVar16 = *(int *)(pbVar25 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar18 = func_0x04108328(&DAT_0f550ad8), iVar18 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar16 != _DAT_0f550ac4) goto LAB_0e504c7c;
    }
    if (uStack_250 == 0) {
      if (((puVar19 == (undefined *)0x0) || (*(int *)(puVar19 + 0x60) != -0x2b3da790)) ||
         (*(long *)(puVar19 + 0x68) == 0)) goto LAB_0e504a6e;
      lVar33 = *(long *)(puVar19 + 0x68) + 0x38;
    }
    else {
      uVar5 = CONCAT13(uStack_249,CONCAT21(uStack_24b,cStack_24c));
      if (puVar19 == (undefined *)0x0) {
        puVar19 = (undefined *)func_0x048aead0(uVar4 + 0x18,0,uVar5);
      }
      auStack_2e8 = (undefined1  [8])func_0x048b0c90(uVar4 + 0x18,puVar19,uVar5,1);
      if (auStack_2e8 == (undefined1  [8])0x0) {
        _auStack_2e8 = (undefined1  [16])0x0;
        FUN_048b0d20(auStack_2e8);
        if (auStack_2e8 == (undefined1  [8])0x0) goto LAB_0e504a6e;
      }
      if ((*(int *)((long)auStack_2e8 + 0x50) == -0x45dcb126) &&
         (*(long *)((long)auStack_2e8 + 0x58) != 0)) {
        lVar33 = *(long *)((long)auStack_2e8 + 0x58) + 0x40;
      }
      else {
LAB_0e504a6e:
        lVar33 = 0;
      }
    }
    pcStack_150 = (code *)&UNK_0488e0b0;
    uStack_140 = 0x48b5725f;
    pcStack_148 = (code *)0x0;
    uStack_13c = uStack_13c & 0xffffff00;
    pcStack_160 = (code *)0x0;
    _auStack_2e8 = (undefined1  [16])0x0;
    uStack_2d0 = (code *)&UNK_0488e0b0;
    pcStack_2c8 = (code *)0x0;
    uStack_2c0 = (undefined *)CONCAT35(uStack_2c0._5_3_,0x48b5725f);
    pcVar24 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (pcVar24 == (code *)0x0) {
      FUN_0eec74c0(0x20,0);
    }
    uVar4 = _UNK_013bbadf;
    pcStack_1a8 = (code *)0x21;
    pcStack_1a0 = (code *)0x1a;
    *(ulong *)(pcVar24 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)(pcVar24 + 0x12) = uVar4;
    uVar4 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *(undefined8 *)pcVar24 = _DAT_013bbacd;
    *(undefined8 *)(pcVar24 + 8) = uVar4;
    pcVar24[0x1a] = (code)0x0;
    pcStack_198 = pcVar24;
    lVar33 = func_0x048b5060(lVar33,&pcStack_1a8);
    *(undefined8 *)(lVar33 + 0x20) = 0;
    if ((undefined1 *)(lVar33 + 0x20) == auStack_2e8) {
      pcVar24 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar33 + 0x40) != (code *)0x0) {
        puVar32 = (ulong *)(lVar33 + 0x28);
        (**(code **)(lVar33 + 0x40))(puVar32);
        if (uStack_2c0._4_1_ != '\0') {
          if (uStack_2c0._4_1_ == '\x02') {
            (*uStack_2d0)(5,&uStack_2e0,puVar32);
          }
          else {
            uVar29 = uStack_2e0;
            uStack_2e0 = 0;
            *puVar32 = uVar29;
          }
        }
      }
      *(code **)(lVar33 + 0x38) = uStack_2d0;
      *(code **)(lVar33 + 0x40) = pcStack_2c8;
      *(undefined4 *)(lVar33 + 0x48) = (undefined4)uStack_2c0;
      *(char *)(lVar33 + 0x4c) = uStack_2c0._4_1_;
      pcVar24 = pcStack_2c8;
    }
    if (((ulong)pcStack_1a8 & 1) != 0) {
      func_0x0412a280(pcStack_198,(ulong)pcStack_1a8 & 0xfffffffffffffffe);
      pcVar24 = pcStack_2c8;
    }
    if (pcVar24 != (code *)0x0) {
      (*pcVar24)(&uStack_2e0);
    }
    if (pcStack_148 != (code *)0x0) {
      (*pcStack_148)(&pcStack_160);
    }
  }
LAB_0e504c7c:
  if ((DAT_0f756568 == '\0') && (iVar16 = func_0x04108328(&DAT_0f756568), iVar16 != 0)) {
    func_0x0e56a4e0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f7564e8,0xf53dab8);
    func_0x0410844d(&DAT_0f756568);
  }
  plVar26 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f7564e8 + 4)) * 8);
  do {
    lVar33 = *plVar26;
    if (lVar33 == -1) goto LAB_0e504ce0;
    plVar26 = (long *)(*(long *)(param_1 + 0x30) + lVar33 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar33 * 0x18) != *(uint *)(_DAT_0f7564e8 + 4))
  ;
  if (plVar26 == *(long **)(param_1 + 0x38)) {
LAB_0e504ce0:
    puVar19 = &DAT_0f7564e8;
    if (iRam000000000f756548 != -0x2b3da790) goto LAB_0e504d4d;
LAB_0e504d0b:
    lVar33 = *(long *)(puVar19 + 0x68);
    if (lVar33 == 0) goto LAB_0e504d4d;
    bVar35 = (*(byte *)(lVar33 + 8) & 1) != 0;
    lVar20 = lVar33 + 9;
    if (bVar35) {
      lVar20 = *(long *)(lVar33 + 0x18);
    }
    uVar29 = (ulong)(*(byte *)(lVar33 + 8) >> 1);
    if (bVar35) {
      uVar29 = *(ulong *)(lVar33 + 0x10);
    }
    func_0x0e56aae0(&pcStack_160,param_1,lVar20,uVar29);
    pcVar24 = pcStack_160;
    pcStack_58 = pcStack_158;
    iVar16 = iStack_138;
    uVar14 = uStack_134;
  }
  else {
    puVar19 = (undefined *)plVar26[2];
    if (*(int *)(puVar19 + 0x60) == -0x2b3da790) goto LAB_0e504d0b;
LAB_0e504d4d:
    func_0x0e56aae0(&pcStack_160,param_1,&UNK_012d2881,6);
    pcVar24 = pcStack_160;
    pcStack_58 = pcStack_158;
    iVar16 = iStack_138;
    uVar14 = uStack_134;
  }
  pcStack_160 = pcVar24;
  iStack_138 = iVar16;
  uStack_134 = uVar14;
  if ((char)uStack_130 == '\0') {
    pcStack_40 = (code *)CONCAT44(uStack_13c,uStack_140);
    uStack_120 = CONCAT44(uStack_12c,uStack_130);
    pcStack_50 = pcStack_150;
    pcStack_48 = pcStack_148;
    if ((DAT_0f756568 == '\0') && (iVar18 = func_0x04108328(&DAT_0f756568), iVar18 != 0)) {
      func_0x0e56a4e0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f7564e8,0xf53dab8);
      func_0x0410844d(&DAT_0f756568);
    }
    plVar26 = (long *)(*(long *)(pcVar24 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(pcVar24 + 0x20) - *(long *)(pcVar24 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f7564e8 + 4)) * 8);
    do {
      lVar33 = *plVar26;
      if (lVar33 == -1) goto LAB_0e504e20;
      plVar26 = (long *)(*(long *)(pcVar24 + 0x30) + lVar33 * 0x18);
    } while (*(uint *)(*(long *)(pcVar24 + 0x30) + 8 + lVar33 * 0x18) !=
             *(uint *)(_DAT_0f7564e8 + 4));
    if (plVar26 == *(long **)(pcVar24 + 0x38)) {
LAB_0e504e20:
      puVar19 = &DAT_0f7564e8;
      pbVar25 = *(byte **)(pcVar24 + 0x50);
      pbVar27 = *(byte **)(pcVar24 + 0x58);
      if (pbVar25 != pbVar27) {
LAB_0e504ece:
        do {
          bVar1 = *pbVar25;
          if ((bVar1 & 1) == 0) {
            if (bVar1 >> 1 == 0x1a) goto LAB_0e504efa;
          }
          else if (*(long *)(pbVar25 + 8) == 0x1a) {
LAB_0e504efa:
            if ((bVar1 & 1) == 0) {
              pbVar28 = pbVar25 + 1;
            }
            else {
              pbVar28 = *(byte **)(pbVar25 + 0x10);
            }
            auVar40[0] = -(*pbVar28 == 0x5b);
            auVar40[1] = -(pbVar28[1] == 99);
            auVar40[2] = -(pbVar28[2] == 0x65);
            auVar40[3] = -(pbVar28[3] == 0x72);
            auVar40[4] = -(pbVar28[4] == 0x65);
            auVar40[5] = -(pbVar28[5] == 0x61);
            auVar40[6] = -(pbVar28[6] == 0x6c);
            auVar40[7] = -(pbVar28[7] == 0x3a);
            auVar40[8] = -(pbVar28[8] == 100);
            auVar40[9] = -(pbVar28[9] == 0x6f);
            auVar40[10] = -(pbVar28[10] == 99);
            auVar40[0xb] = -(pbVar28[0xb] == 0x75);
            auVar40[0xc] = -(pbVar28[0xc] == 0x6d);
            auVar40[0xd] = -(pbVar28[0xd] == 0x65);
            auVar40[0xe] = -(pbVar28[0xe] == 0x6e);
            auVar40[0xf] = -(pbVar28[0xf] == 0x74);
            auVar46[0] = -(pbVar28[10] == 99);
            auVar46[1] = -(pbVar28[0xb] == 0x75);
            auVar46[2] = -(pbVar28[0xc] == 0x6d);
            auVar46[3] = -(pbVar28[0xd] == 0x65);
            auVar46[4] = -(pbVar28[0xe] == 0x6e);
            auVar46[5] = -(pbVar28[0xf] == 0x74);
            auVar46[6] = -(pbVar28[0x10] == 0x61);
            auVar46[7] = -(pbVar28[0x11] == 0x74);
            auVar46[8] = -(pbVar28[0x12] == 0x69);
            auVar46[9] = -(pbVar28[0x13] == 0x6f);
            auVar46[10] = -(pbVar28[0x14] == 0x6e);
            auVar46[0xb] = -(pbVar28[0x15] == 0x5f);
            auVar46[0xc] = -(pbVar28[0x16] == 0x74);
            auVar46[0xd] = -(pbVar28[0x17] == 0x61);
            auVar46[0xe] = -(pbVar28[0x18] == 0x67);
            auVar46[0xf] = -(pbVar28[0x19] == 0x5d);
            auVar46 = auVar46 & auVar40;
            if ((ushort)((ushort)(SUB161(auVar46 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar46 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar46 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar46 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar46 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar46 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar46 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar46 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar46 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar46 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar46 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar46 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar46 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar46 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar46 >> 0x77,0) & 1) << 0xe |
                        (ushort)(byte)(auVar46[0xf] >> 7) << 0xf) == 0xffff) break;
          }
          pbVar25 = pbVar25 + 0x38;
        } while (pbVar25 != pbVar27);
      }
    }
    else {
      puVar19 = (undefined *)plVar26[2];
      pbVar25 = *(byte **)(pcVar24 + 0x50);
      pbVar27 = *(byte **)(pcVar24 + 0x58);
      if (pbVar25 != pbVar27) goto LAB_0e504ece;
    }
    if (pbVar25 == pbVar27) {
LAB_0e504f2a:
      if (iVar16 == 0) {
        if (((puVar19 == (undefined *)0x0) || (*(int *)(puVar19 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar19 + 0x68) == 0)) goto LAB_0e504fa6;
        lVar33 = *(long *)(puVar19 + 0x68) + 0x38;
      }
      else {
        if (puVar19 == (undefined *)0x0) {
          puVar19 = (undefined *)func_0x048aead0(pcVar24 + 0x18);
        }
        auStack_278._0_8_ = func_0x048b0c90(pcVar24 + 0x18,puVar19,uVar14,1);
        if (auStack_278._0_8_ == 0) {
          auStack_278 = (undefined1  [16])0x0;
          FUN_048b0d20(auStack_278);
          if (auStack_278._0_8_ == 0) goto LAB_0e504fa6;
        }
        if ((*(int *)(auStack_278._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_278._0_8_ + 0x58) != 0)) {
          lVar33 = *(long *)(auStack_278._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0e504fa6:
          lVar33 = 0;
        }
      }
      puStack_2d8 = &UNK_0488e0b0;
      uStack_2d0 = (code *)0x0;
      pcStack_2c8 = (code *)CONCAT35(pcStack_2c8._5_3_,0x48b5725f);
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uStack_2e0;
      _auStack_2e8 = auVar13 << 0x40;
      auStack_278 = (undefined1  [16])0x0;
      pcStack_260 = (code *)&UNK_0488e0b0;
      pcStack_258 = (code *)0x0;
      uStack_250 = 0x48b5725f;
      cStack_24c = '\0';
      pcVar23 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (pcVar23 == (code *)0x0) {
        FUN_0eec74c0(0x20,0);
      }
      uVar4 = _UNK_013bbadf;
      pcStack_1a8 = (code *)0x21;
      pcStack_1a0 = (code *)0x1a;
      *(ulong *)(pcVar23 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)(pcVar23 + 0x12) = uVar4;
      uVar4 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *(undefined8 *)pcVar23 = _DAT_013bbacd;
      *(undefined8 *)(pcVar23 + 8) = uVar4;
      pcVar23[0x1a] = (code)0x0;
      pcStack_198 = pcVar23;
      lVar33 = func_0x048b5060(lVar33,&pcStack_1a8);
      *(undefined8 *)(lVar33 + 0x20) = 0;
      if ((undefined1 *)(lVar33 + 0x20) == auStack_278) {
        pcVar23 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar33 + 0x40) != (code *)0x0) {
          puVar31 = (undefined8 *)(lVar33 + 0x28);
          (**(code **)(lVar33 + 0x40))(puVar31);
          if (cStack_24c != '\0') {
            if (cStack_24c == '\x02') {
              (*pcStack_260)(5,auStack_278 + 8,puVar31);
            }
            else {
              uVar4 = auStack_278._8_8_;
              auStack_278._8_8_ = 0;
              *puVar31 = uVar4;
            }
          }
        }
        *(code **)(lVar33 + 0x38) = pcStack_260;
        *(code **)(lVar33 + 0x40) = pcStack_258;
        *(uint *)(lVar33 + 0x48) = uStack_250;
        *(char *)(lVar33 + 0x4c) = cStack_24c;
        pcVar23 = pcStack_258;
      }
      if (((ulong)pcStack_1a8 & 1) != 0) {
        func_0x0412a280(pcStack_198,(ulong)pcStack_1a8 & 0xfffffffffffffffe);
        pcVar23 = pcStack_258;
      }
      if (pcVar23 != (code *)0x0) {
        (*pcVar23)(auStack_278 + 8);
      }
      if (uStack_2d0 != (code *)0x0) {
        (*uStack_2d0)(auStack_2e8);
      }
    }
    else {
      iVar18 = *(int *)(pbVar25 + 0x1c);
      if ((DAT_0f550ad8 == '\0') &&
         (puStack_168 = puVar19, iVar17 = func_0x04108328(&DAT_0f550ad8), puVar19 = puStack_168,
         iVar17 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
        puVar19 = puStack_168;
      }
      if (iVar18 == _DAT_0f550ac4) goto LAB_0e504f2a;
    }
    pcStack_90 = pcStack_58;
    pcStack_88 = pcStack_50;
    pcStack_80 = pcStack_48;
    pcStack_78 = pcStack_40;
    uStack_68 = uStack_120;
    uStack_70 = 0xa9ab692000000002;
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_228 = 0;
    uStack_220 = 0;
    auStack_238 = (undefined1  [16])0x0;
    cStack_248 = 0;
    uStack_247 = 0;
    uStack_241 = 0;
    lStack_240 = 0;
    pcStack_258 = (code *)0x0;
    uStack_250 = 0;
    cStack_24c = 0;
    uStack_24b = 0;
    uStack_249 = 0;
    uStack_268 = 0;
    uStack_264 = 0;
    pcStack_260 = (code *)0x0;
    auStack_278 = (undefined1  [16])0x0;
    uStack_208 = 0x3f600000;
    pcStack_98 = pcVar24;
    func_0x048afb10(auStack_238,8);
    auVar6 = auStack_1c8;
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    uStack_1f0 = 0;
    uStack_1ec = 0;
    uStack_1e8 = 0;
    auStack_200 = (undefined1  [16])0x0;
    uStack_1d0 = 0xff00;
    uStack_1cc = uStack_1cc & 0xffffff00;
    auStack_1c8._0_4_ = auStack_1c8._1_4_ << 8;
    auStack_1c8._5_11_ = auVar6._5_11_;
    auStack_1c8[4] = 0;
    puVar31 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar31 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar31 = &UNK_0f4bddb8;
    uVar4 = auStack_278._0_8_;
    auStack_278._0_8_ = puVar31;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    if ((uStack_250 & 1) != 0) {
      func_0x0412a280(lStack_240,
                      CONCAT17(uStack_249,CONCAT25(uStack_24b,CONCAT14(cStack_24c,uStack_250))) &
                      0xfffffffffffffffe);
    }
    uStack_250 = 0x6f72701c;
    cStack_24c = 99;
    uStack_24b = 0x7365;
    uStack_249 = 0x73;
    cStack_248 = 'o';
    uStack_247 = 0x657079745f72;
    uStack_241 = 0;
    if ((DAT_0f756588 == '\0') && (iVar16 = func_0x04108328(&DAT_0f756588), iVar16 != 0)) {
      func_0x0e56a5f0();
      func_0x0410844d(&DAT_0f756588);
    }
    auStack_2e8._0_4_ = uStack_70._4_4_;
    uStack_2e0 = 0;
    puStack_2d8 = (undefined *)CONCAT44(puStack_2d8._4_4_,3);
    uStack_2d0 = (code *)0x1;
    pcStack_2c8 = (code *)0x0;
    uStack_2c0 = &UNK_0e557750;
    puStack_2b8 = &SUB_048b06d0;
    puStack_2b0 = &UNK_0e553380;
    puStack_2a8 = &UNK_0e56b8b0;
    puStack_2a0 = &UNK_0e56b8c0;
    uStack_298 = 0;
    auStack_290._0_16_ = (undefined1  [16])0x0;
    FUN_048b05a0(&pcStack_90,auStack_2e8);
    uVar4 = auStack_290._8_8_;
    if ((long *)auStack_290._8_8_ != (long *)0x0) {
      LOCK();
      plVar26 = (long *)(auStack_290._8_8_ + 8);
      lVar33 = *plVar26;
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (lVar33 == 0) {
        (**(code **)(*(long *)auStack_290._8_8_ + 0x10))(auStack_290._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    pcStack_198 = pcStack_80;
    pcStack_190 = pcStack_78;
    pcStack_1a8 = pcStack_90;
    pcStack_1a0 = pcStack_88;
    FUN_0e56b640(auStack_2e8,&pcStack_1a8,auStack_278);
    if (uStack_2d0._4_4_ == 2) {
      piVar22 = *(int **)(*(long *)((long)puStack_2d8 + 0x78) + 0x60);
      iVar16 = *piVar22;
      while (iVar16 != (int)uStack_2d0) {
        piVar22 = piVar22 + 0x16;
        iVar16 = *piVar22;
      }
      uVar29 = *(ulong *)(piVar22 + 0xc);
      while (uVar29 != uStack_2e0) {
        piVar22 = *(int **)(piVar22 + 0xe);
        uVar29 = *(ulong *)(piVar22 + 0xc);
      }
LAB_0e50542f:
      *(byte *)((long)piVar22 + 0x12) = *(byte *)((long)piVar22 + 0x12) | 9;
    }
    else {
      if (uStack_2d0._4_4_ == 1) {
        piVar22 = *(int **)(*(long *)((long)puStack_2d8 + 0x78) + 0x48);
        iVar16 = *piVar22;
        while (iVar16 != (int)uStack_2d0) {
          piVar22 = piVar22 + 0x1a;
          iVar16 = *piVar22;
        }
        goto LAB_0e50542f;
      }
      if (uStack_2d0._4_4_ == 0) {
        *(uint *)((long)puStack_2d8 + 0x18U) = *(uint *)((long)puStack_2d8 + 0x18U) | 0x90000;
      }
    }
    pcStack_d8 = pcStack_98;
    pcStack_d0 = pcStack_90;
    pcStack_c8 = pcStack_88;
    pcStack_c0 = pcStack_80;
    pcStack_b8 = pcStack_78;
    iStack_b0 = (int)uStack_70;
    uStack_ac = (uint)((ulong)uStack_70 >> 0x20);
    uStack_a8 = CONCAT31(uStack_a8._1_3_,(undefined1)uStack_68);
    func_0x048b0bc0(auStack_278);
    func_0x0e56b910(auStack_278,&pcStack_d8,&UNK_0140dac3,8);
    pcVar24 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar24 == (code *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *(undefined **)pcVar24 = &UNK_0f4be2f0;
    if (pcStack_260 != (code *)0x0) {
      lVar33 = *(long *)pcStack_260;
      pcStack_260 = pcVar24;
      (**(code **)(lVar33 + 8))();
      pcVar24 = pcStack_260;
    }
    pcStack_260 = pcVar24;
    auStack_2e8._0_4_ = uStack_268;
    uStack_2e0 = 0;
    puStack_2d8 = (undefined *)((ulong)puStack_2d8 & 0xffffffff00000000);
    uStack_2d0 = (code *)0x1;
    pcStack_2c8 = (code *)0x0;
    uStack_2c0 = &UNK_0e56bc90;
    puStack_2b8 = &SUB_048b06d0;
    puStack_2b0 = &UNK_0e564ac0;
    puStack_2a8 = &UNK_0e56bd50;
    puStack_2a0 = &UNK_0e56bf90;
    uStack_298 = 0;
    auStack_290._0_16_ = ZEXT816(0);
    FUN_048b05a0(auStack_278._8_8_,auStack_2e8);
    uVar4 = auStack_290._8_8_;
    if ((long *)auStack_290._8_8_ != (long *)0x0) {
      LOCK();
      plVar26 = (long *)(auStack_290._8_8_ + 8);
      lVar33 = *plVar26;
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (lVar33 == 0) {
        (**(code **)(*(long *)auStack_290._8_8_ + 0x10))(auStack_290._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0e56bbc0(auStack_278);
    uStack_e8 = CONCAT31(uStack_e8._1_3_,(undefined1)uStack_a8);
    pcStack_f8 = pcStack_b8;
    uStack_f0 = iStack_b0;
    uStack_ec = uStack_ac;
    pcStack_108 = pcStack_c8;
    pcStack_100 = pcStack_c0;
    pcStack_118 = pcStack_d8;
    pcStack_110 = pcStack_d0;
    func_0x048b0bc0(&pcStack_260);
    pcStack_1a8 = pcStack_118;
    pcStack_1a0 = pcStack_110;
    pcStack_198 = pcStack_108;
    pcStack_190 = pcStack_100;
    pcStack_188 = pcStack_f8;
    uStack_180 = uStack_f0;
    uStack_17c = uStack_ec;
    uStack_178 = uStack_e8;
    iStack_174 = iStack_e4;
    func_0x0e56b910(auStack_278,&pcStack_1a8,&UNK_012ee90e,5);
    pcVar24 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar24 == (code *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *(undefined **)pcVar24 = &UNK_0f4be580;
    if (pcStack_260 != (code *)0x0) {
      lVar33 = *(long *)pcStack_260;
      pcStack_260 = pcVar24;
      (**(code **)(lVar33 + 8))();
      pcVar24 = pcStack_260;
    }
    pcStack_260 = pcVar24;
    auStack_2e8._0_4_ = uStack_268;
    uStack_2e0 = 0;
    puStack_2d8 = (undefined *)((ulong)puStack_2d8 & 0xffffffff00000000);
    uStack_2d0 = (code *)0x1;
    pcStack_2c8 = (code *)0x0;
    uStack_2c0 = &UNK_0e56ef30;
    puStack_2b8 = &SUB_048b06d0;
    puStack_2b0 = &UNK_0e56e290;
    puStack_2a8 = &UNK_0e56eff0;
    puStack_2a0 = &UNK_0e56f160;
    uStack_298 = 0;
    auStack_290._0_16_ = (undefined1  [16])0x0;
    FUN_048b05a0(auStack_278._8_8_,auStack_2e8);
    uVar4 = auStack_290._8_8_;
    if ((long *)auStack_290._8_8_ != (long *)0x0) {
      LOCK();
      plVar26 = (long *)(auStack_290._8_8_ + 8);
      lVar33 = *plVar26;
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (lVar33 == 0) {
        (**(code **)(*(long *)auStack_290._8_8_ + 0x10))(auStack_290._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0e56bbc0(auStack_278);
    func_0x048b0bc0(&pcStack_260);
  }
  if ((DAT_0f75c6d8 == '\0') && (iVar16 = func_0x04108328(&DAT_0f75c6d8), iVar16 != 0)) {
    func_0x0e680290();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f75c658,0xf53dab8);
    func_0x0410844d(&DAT_0f75c6d8);
  }
  plVar26 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f75c658 + 4)) * 8);
  do {
    lVar33 = *plVar26;
    if (lVar33 == -1) goto LAB_0e5057b0;
    plVar26 = (long *)(*(long *)(param_1 + 0x30) + lVar33 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar33 * 0x18) != *(uint *)(_DAT_0f75c658 + 4))
  ;
  if (plVar26 == *(long **)(param_1 + 0x38)) {
LAB_0e5057b0:
    puVar19 = &DAT_0f75c658;
    if (_DAT_0f75c6b8 != -0x2b3da790) goto LAB_0e50581a;
LAB_0e5057db:
    lVar33 = *(long *)(puVar19 + 0x68);
    if (lVar33 == 0) goto LAB_0e50581a;
    bVar35 = (*(byte *)(lVar33 + 8) & 1) != 0;
    lVar20 = lVar33 + 9;
    if (bVar35) {
      lVar20 = *(long *)(lVar33 + 0x18);
    }
    uVar29 = (ulong)(*(byte *)(lVar33 + 8) >> 1);
    if (bVar35) {
      uVar29 = *(ulong *)(lVar33 + 0x10);
    }
    func_0x0e6c7b30(auStack_278,param_1,lVar20,uVar29);
  }
  else {
    puVar19 = (undefined *)plVar26[2];
    if (*(int *)(puVar19 + 0x60) == -0x2b3da790) goto LAB_0e5057db;
LAB_0e50581a:
    func_0x0e6c7b30(auStack_278,param_1,&UNK_014dedc6,0x18);
  }
  if (cStack_248 != '\0') {
    return;
  }
  uVar4 = auStack_278._0_8_;
  if ((DAT_0f75c6d8 == '\0') && (iVar16 = func_0x04108328(&DAT_0f75c6d8), iVar16 != 0)) {
    func_0x0e680290();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f75c658,0xf53dab8);
    func_0x0410844d(&DAT_0f75c6d8);
  }
  plVar26 = (long *)(*(long *)(uVar4 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(uVar4 + 0x20) - *(long *)(uVar4 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f75c658 + 4)) * 8);
  do {
    lVar33 = *plVar26;
    if (lVar33 == -1) goto LAB_0e5058b0;
    plVar26 = (long *)(*(long *)(uVar4 + 0x30) + lVar33 * 0x18);
  } while (*(uint *)(*(long *)(uVar4 + 0x30) + 8 + lVar33 * 0x18) != *(uint *)(_DAT_0f75c658 + 4));
  if (plVar26 == *(long **)(uVar4 + 0x38)) {
LAB_0e5058b0:
    puVar19 = &DAT_0f75c658;
  }
  else {
    puVar19 = (undefined *)plVar26[2];
  }
  for (pbVar25 = *(byte **)(auStack_278._0_8_ + 0x50);
      pbVar25 != *(byte **)(auStack_278._0_8_ + 0x58); pbVar25 = pbVar25 + 0x38) {
    bVar1 = *pbVar25;
    if ((bVar1 & 1) == 0) {
      if (bVar1 >> 1 == 0x1a) goto LAB_0e50598a;
    }
    else if (*(long *)(pbVar25 + 8) == 0x1a) {
LAB_0e50598a:
      if ((bVar1 & 1) == 0) {
        pbVar27 = pbVar25 + 1;
      }
      else {
        pbVar27 = *(byte **)(pbVar25 + 0x10);
      }
      auVar41[0] = -(*pbVar27 == 0x5b);
      auVar41[1] = -(pbVar27[1] == 99);
      auVar41[2] = -(pbVar27[2] == 0x65);
      auVar41[3] = -(pbVar27[3] == 0x72);
      auVar41[4] = -(pbVar27[4] == 0x65);
      auVar41[5] = -(pbVar27[5] == 0x61);
      auVar41[6] = -(pbVar27[6] == 0x6c);
      auVar41[7] = -(pbVar27[7] == 0x3a);
      auVar41[8] = -(pbVar27[8] == 100);
      auVar41[9] = -(pbVar27[9] == 0x6f);
      auVar41[10] = -(pbVar27[10] == 99);
      auVar41[0xb] = -(pbVar27[0xb] == 0x75);
      auVar41[0xc] = -(pbVar27[0xc] == 0x6d);
      auVar41[0xd] = -(pbVar27[0xd] == 0x65);
      auVar41[0xe] = -(pbVar27[0xe] == 0x6e);
      auVar41[0xf] = -(pbVar27[0xf] == 0x74);
      auVar47[0] = -(pbVar27[10] == 99);
      auVar47[1] = -(pbVar27[0xb] == 0x75);
      auVar47[2] = -(pbVar27[0xc] == 0x6d);
      auVar47[3] = -(pbVar27[0xd] == 0x65);
      auVar47[4] = -(pbVar27[0xe] == 0x6e);
      auVar47[5] = -(pbVar27[0xf] == 0x74);
      auVar47[6] = -(pbVar27[0x10] == 0x61);
      auVar47[7] = -(pbVar27[0x11] == 0x74);
      auVar47[8] = -(pbVar27[0x12] == 0x69);
      auVar47[9] = -(pbVar27[0x13] == 0x6f);
      auVar47[10] = -(pbVar27[0x14] == 0x6e);
      auVar47[0xb] = -(pbVar27[0x15] == 0x5f);
      auVar47[0xc] = -(pbVar27[0x16] == 0x74);
      auVar47[0xd] = -(pbVar27[0x17] == 0x61);
      auVar47[0xe] = -(pbVar27[0x18] == 0x67);
      auVar47[0xf] = -(pbVar27[0x19] == 0x5d);
      auVar47 = auVar47 & auVar41;
      if ((ushort)((ushort)(SUB161(auVar47 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar47 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar47 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar47 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar47 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar47 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar47 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar47 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar47 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar47 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar47 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar47 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar47[0xf] >> 7) << 0xf) == 0xffff) break;
    }
  }
  if (pbVar25 != *(byte **)(auStack_278._0_8_ + 0x58)) {
    iVar16 = *(int *)(pbVar25 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar18 = func_0x04108328(&DAT_0f550ad8), iVar18 != 0)) {
      func_0x0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar16 != _DAT_0f550ac4) {
      return;
    }
  }
  if (uStack_250 == 0) {
    if (((puVar19 != (undefined *)0x0) && (*(int *)(puVar19 + 0x60) == -0x2b3da790)) &&
       (*(long *)(puVar19 + 0x68) != 0)) {
      lVar33 = *(long *)(puVar19 + 0x68) + 0x38;
      goto LAB_0e505a40;
    }
  }
  else {
    uVar5 = CONCAT13(uStack_249,CONCAT21(uStack_24b,cStack_24c));
    if (puVar19 == (undefined *)0x0) {
      puVar19 = (undefined *)func_0x048aead0(uVar4 + 0x18,0,uVar5);
    }
    auStack_2e8 = (undefined1  [8])func_0x048b0c90(uVar4 + 0x18,puVar19,uVar5,1);
    if (auStack_2e8 == (undefined1  [8])0x0) {
      _auStack_2e8 = (undefined1  [16])0x0;
      FUN_048b0d20(auStack_2e8);
      if (auStack_2e8 == (undefined1  [8])0x0) goto LAB_0e505a3e;
    }
    if ((*(int *)((long)auStack_2e8 + 0x50) == -0x45dcb126) &&
       (*(long *)((long)auStack_2e8 + 0x58) != 0)) {
      lVar33 = *(long *)((long)auStack_2e8 + 0x58) + 0x40;
      goto LAB_0e505a40;
    }
  }
LAB_0e505a3e:
  lVar33 = 0;
LAB_0e505a40:
  pcStack_150 = (code *)&UNK_0488e0b0;
  uStack_140 = 0x48b5725f;
  pcStack_148 = (code *)0x0;
  uStack_13c = uStack_13c & 0xffffff00;
  pcStack_160 = (code *)0x0;
  _auStack_2e8 = (undefined1  [16])0x0;
  uStack_2d0 = (code *)&UNK_0488e0b0;
  pcStack_2c8 = (code *)0x0;
  uStack_2c0 = (undefined *)CONCAT35(uStack_2c0._5_3_,0x48b5725f);
  puVar31 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar31 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x20,0);
  }
  uVar4 = _UNK_013bbadf;
  pcStack_1a8 = (code *)0x21;
  pcStack_1a0 = (code *)0x1a;
  *(ulong *)((long)puVar31 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
  *(undefined8 *)((long)puVar31 + 0x12) = uVar4;
  uVar4 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
  *puVar31 = _DAT_013bbacd;
  puVar31[1] = uVar4;
  *(undefined1 *)((long)puVar31 + 0x1a) = 0;
  pcStack_198 = (code *)puVar31;
  lVar33 = func_0x048b5060(lVar33,&pcStack_1a8);
  *(undefined8 *)(lVar33 + 0x20) = 0;
  if ((undefined1 *)(lVar33 + 0x20) == auStack_2e8) {
    pcVar24 = (code *)0x0;
  }
  else {
    if (*(code **)(lVar33 + 0x40) != (code *)0x0) {
      puVar32 = (ulong *)(lVar33 + 0x28);
      (**(code **)(lVar33 + 0x40))(puVar32);
      if (uStack_2c0._4_1_ != '\0') {
        if (uStack_2c0._4_1_ == '\x02') {
          (*uStack_2d0)(5,&uStack_2e0,puVar32);
        }
        else {
          uVar29 = uStack_2e0;
          uStack_2e0 = 0;
          *puVar32 = uVar29;
        }
      }
    }
    *(code **)(lVar33 + 0x38) = uStack_2d0;
    *(code **)(lVar33 + 0x40) = pcStack_2c8;
    *(undefined4 *)(lVar33 + 0x48) = (undefined4)uStack_2c0;
    *(char *)(lVar33 + 0x4c) = uStack_2c0._4_1_;
    pcVar24 = pcStack_2c8;
  }
  if (((ulong)pcStack_1a8 & 1) != 0) {
    func_0x0412a280(pcStack_198,(ulong)pcStack_1a8 & 0xfffffffffffffffe);
    pcVar24 = pcStack_2c8;
  }
  if (pcVar24 != (code *)0x0) {
    (*pcVar24)(&uStack_2e0);
  }
  if (pcStack_148 != (code *)0x0) {
    (*pcStack_148)(&pcStack_160);
  }
  return;
}



/* ---- referenced strings ----
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 */
