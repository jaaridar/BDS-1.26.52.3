/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe3de530 (ELF vaddr 0xe2de530)
 * Label: caller-of-callee
 * Body:  [[0e3de530, 0e3df2f2] [0e3df300, 0e3df669] [0e3df670, 0e3df6a0] [0e3df6b0, 0e3dfef1] [0e3dff00, 0e3e0179]]
 * Ghidra: FUN_0e3de530
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e3de530(long param_1)

{
  long *plVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  int *piVar11;
  long lVar12;
  code *pcVar13;
  long *plVar14;
  ulong uVar15;
  byte *pbVar16;
  long lVar17;
  byte *pbVar18;
  byte *pbVar19;
  bool bVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uStack_2b8;
  long *plStack_2b0;
  undefined8 uStack_2a8;
  code *pcStack_2a0;
  undefined8 uStack_298;
  undefined *puStack_290;
  undefined1 *puStack_288;
  undefined1 *puStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined4 uStack_268;
  undefined1 auStack_260 [20];
  int iStack_24c;
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined8 *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 auStack_208 [16];
  long lStack_1f8;
  undefined1 auStack_1f0 [16];
  undefined1 auStack_1e0 [16];
  long lStack_1d0;
  undefined1 uStack_1c8;
  undefined7 uStack_1c7;
  undefined1 uStack_1c0;
  undefined7 uStack_1bf;
  undefined4 uStack_1b8;
  uint uStack_1b4;
  undefined1 auStack_1b0 [16];
  long lStack_1a0;
  undefined1 auStack_198 [16];
  long lStack_188;
  undefined4 uStack_180;
  undefined1 auStack_178 [16];
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  undefined2 uStack_148;
  undefined2 uStack_146;
  uint uStack_144;
  uint uStack_140;
  undefined1 uStack_13c;
  undefined4 uStack_134;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined2 uStack_f8;
  undefined4 uStack_f6;
  undefined2 uStack_f2;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined *puStack_d8;
  code *pcStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined1 uStack_b8;
  undefined1 auStack_a8 [16];
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined2 uStack_68;
  undefined1 uStack_66;
  
  func_0x0e3e1190();
  if ((DAT_0f754600 == '\0') && (iVar7 = func_0x04108328(&DAT_0f754600), iVar7 != 0)) {
    func_0x0e4b8f00();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f754580,0xf53dab8);
    func_0x0410844d(&DAT_0f754600);
  }
  plVar14 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f754580 + 4)) * 8);
  do {
    lVar12 = *plVar14;
    if (lVar12 == -1) goto LAB_0e3de5b0;
    plVar14 = (long *)(*(long *)(param_1 + 0x30) + lVar12 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar12 * 0x18) != *(uint *)(_DAT_0f754580 + 4))
  ;
  if (plVar14 == *(long **)(param_1 + 0x38)) {
LAB_0e3de5b0:
    puVar9 = &DAT_0f754580;
    if (iRam000000000f7545e0 != -0x2b3da790) goto LAB_0e3de61a;
LAB_0e3de5db:
    lVar12 = *(long *)(puVar9 + 0x68);
    if (lVar12 == 0) goto LAB_0e3de61a;
    bVar20 = (*(byte *)(lVar12 + 8) & 1) != 0;
    lVar17 = lVar12 + 9;
    if (bVar20) {
      lVar17 = *(long *)(lVar12 + 0x18);
    }
    uVar15 = (ulong)(*(byte *)(lVar12 + 8) >> 1);
    if (bVar20) {
      uVar15 = *(ulong *)(lVar12 + 0x10);
    }
    func_0x0e4b9320(&puStack_248,param_1,lVar17,uVar15);
  }
  else {
    puVar9 = (undefined *)plVar14[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_0e3de5db;
LAB_0e3de61a:
    func_0x0e4b9320(&puStack_248,param_1,&UNK_012d9371,6);
  }
  if ((char)uStack_218 == '\0') {
    uStack_2a8._4_4_ = (uint)((ulong)uStack_2a8 >> 0x20);
    uStack_2b8._4_4_ = (undefined4)((ulong)uStack_2b8 >> 0x20);
    func_0x0e4b9e30(auStack_208,&puStack_248,&UNK_011e9523);
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar10 = &UNK_0ef46ce8;
    uVar3 = auStack_1f0._0_8_;
    auStack_1f0._0_8_ = puVar10;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    uStack_2b8 = CONCAT44(uStack_2b8._4_4_,(undefined4)lStack_1f8);
    plStack_2b0 = (long *)0x0;
    uStack_2a8 = (long *)((ulong)uStack_2a8._4_4_ << 0x20);
    pcStack_2a0 = (code *)0x1;
    uStack_298 = 0;
    puStack_290 = &UNK_0490ce30;
    puStack_288 = &SUB_048b06d0;
    puStack_280 = &SUB_0490cb20;
    puStack_278 = &UNK_0e4ba370;
    puStack_270 = &UNK_0e4ba4d0;
    uStack_268 = 0;
    auStack_260._0_16_ = ZEXT816(0);
    FUN_048b05a0(auStack_208._8_8_,&uStack_2b8);
    uVar3 = auStack_260._8_8_;
    if ((long *)auStack_260._8_8_ != (long *)0x0) {
      LOCK();
      plVar14 = (long *)(auStack_260._8_8_ + 8);
      lVar12 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*(long *)auStack_260._8_8_ + 0x10))(auStack_260._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    func_0x0e4ba070(auStack_208);
    uStack_78 = (char)uStack_218;
    uStack_88 = uStack_228;
    uStack_80 = uStack_220;
    puStack_98 = puStack_238;
    uStack_90 = uStack_230;
    func_0x048b0bc0(auStack_1f0);
    uStack_f6 = 0;
    uStack_f2 = 0;
    uStack_128 = 0xffffffffffffffff;
    puStack_120 = (undefined8 *)0x0;
    uStack_118 = 0xff;
    puStack_130 = &UNK_0f0edc68;
    uStack_110 = _DAT_014e40f0;
    uStack_108 = _UNK_014e40f8;
    uStack_100 = 0x4030000000000000;
    uStack_f8 = 0;
    func_0x0e3e1220(&uStack_e8,auStack_a8,&puStack_130);
    func_0x0e4b9e30(auStack_208,&uStack_e8,&UNK_012ba56c);
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar10 = &UNK_0ef46ce8;
    uVar3 = auStack_1f0._0_8_;
    auStack_1f0._0_8_ = puVar10;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    uStack_2b8 = CONCAT44(uStack_2b8._4_4_,(undefined4)lStack_1f8);
    plStack_2b0 = (long *)0x0;
    uStack_2a8 = (long *)((ulong)uStack_2a8 & 0xffffffff00000000);
    pcStack_2a0 = (code *)0x1;
    uStack_298 = 0;
    puStack_290 = &UNK_0490ce30;
    puStack_288 = &SUB_048b06d0;
    puStack_280 = &SUB_0490cb20;
    puStack_278 = &UNK_0e4ba6a0;
    puStack_270 = &UNK_0e4ba800;
    uStack_268 = 0;
    auStack_260._0_16_ = ZEXT816(0);
    FUN_048b05a0(auStack_208._8_8_,&uStack_2b8);
    uVar3 = auStack_260._8_8_;
    if ((long *)auStack_260._8_8_ != (long *)0x0) {
      LOCK();
      plVar14 = (long *)(auStack_260._8_8_ + 8);
      lVar12 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*(long *)auStack_260._8_8_ + 0x10))(auStack_260._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    func_0x0e4ba070(auStack_208);
    puStack_288 = (undefined1 *)CONCAT71(puStack_288._1_7_,uStack_b8);
    uStack_298 = uStack_c8;
    puStack_290 = puStack_c0;
    uStack_2a8 = (long *)puStack_d8;
    pcStack_2a0 = pcStack_d0;
    uStack_2b8 = uStack_e8;
    plStack_2b0 = puStack_e0;
    func_0x048b0bc0(auStack_1f0);
    lStack_1f8 = 0;
    auStack_1f0[0] = 0xff;
    auStack_208._8_8_ = 0xffffffffffffffff;
    auStack_208._0_8_ = &UNK_0f0edc68;
    auStack_1f0._8_8_ = _DAT_014e40f0;
    auStack_1e0._8_8_ = 0x4030000000000000;
    auStack_1e0._0_8_ = _UNK_014e40f8;
    lStack_1d0 = 0;
    func_0x0e3e1220(&uStack_68,&uStack_2b8,auStack_208);
  }
  func_0x0e3e15f0(param_1);
  if ((DAT_0f7546b8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f7546b8), iVar7 != 0)) {
    func_0x0e4bbf20();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f754638,0xf53dab8);
    func_0x0410844d(&DAT_0f7546b8);
  }
  plVar14 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f754638 + 4)) * 8);
  do {
    lVar12 = *plVar14;
    if (lVar12 == -1) goto LAB_0e3dea80;
    plVar14 = (long *)(*(long *)(param_1 + 0x30) + lVar12 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar12 * 0x18) != *(uint *)(_DAT_0f754638 + 4))
  ;
  if (plVar14 == *(long **)(param_1 + 0x38)) {
LAB_0e3dea80:
    puVar9 = &DAT_0f754638;
    if (iRam000000000f754698 != -0x2b3da790) goto LAB_0e3deaed;
LAB_0e3deaab:
    lVar12 = *(long *)(puVar9 + 0x68);
    if (lVar12 == 0) goto LAB_0e3deaed;
    bVar20 = (*(byte *)(lVar12 + 8) & 1) != 0;
    lVar17 = lVar12 + 9;
    if (bVar20) {
      lVar17 = *(long *)(lVar12 + 0x18);
    }
    uVar15 = (ulong)(*(byte *)(lVar12 + 8) >> 1);
    if (bVar20) {
      uVar15 = *(ulong *)(lVar12 + 0x10);
    }
    func_0x0e4bc510(&puStack_130,param_1,lVar17,uVar15);
  }
  else {
    puVar9 = (undefined *)plVar14[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_0e3deaab;
LAB_0e3deaed:
    func_0x0e4bc510(&puStack_130,param_1,&UNK_013992d2,10);
  }
  if ((char)uStack_100 == '\0') {
    func_0x0e4bcb00(auStack_208,puStack_130 + 0x18);
    if (auStack_1f0._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)(lStack_1f8 + 0x78) + 0x60);
      iVar7 = *piVar11;
      while (iVar7 != auStack_1f0._0_4_) {
        piVar11 = piVar11 + 0x16;
        iVar7 = *piVar11;
      }
      lVar12 = *(long *)(piVar11 + 0xc);
      while (lVar12 != auStack_208._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar12 = *(long *)(piVar11 + 0xc);
      }
LAB_0e3deb8f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (auStack_1f0._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)(lStack_1f8 + 0x78) + 0x48);
        iVar7 = *piVar11;
        while (iVar7 != auStack_1f0._0_4_) {
          piVar11 = piVar11 + 0x1a;
          iVar7 = *piVar11;
        }
        goto LAB_0e3deb8f;
      }
      if (auStack_1f0._4_4_ == 0) {
        *(uint *)(lStack_1f8 + 0x18) = *(uint *)(lStack_1f8 + 0x18) | 0x40000;
      }
    }
    func_0x0e4bd0b0(auStack_208,&puStack_130,&UNK_013563a3,0x1a,0x10);
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar10 = &UNK_0f4bc738;
    uVar3 = auStack_1f0._0_8_;
    auStack_1f0._0_8_ = puVar10;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    uStack_2b8 = CONCAT44(uStack_2b8._4_4_,(undefined4)lStack_1f8);
    plStack_2b0 = (long *)0x0;
    uStack_2a8 = (long *)((ulong)uStack_2a8 & 0xffffffff00000000);
    pcStack_2a0 = (code *)0x1;
    uStack_298 = 0;
    puStack_290 = &UNK_0e4bd8c0;
    puStack_288 = &SUB_048b06d0;
    puStack_280 = &UNK_0e4b8e40;
    puStack_278 = &UNK_0e4bd980;
    puStack_270 = &UNK_0e4bdae0;
    uStack_268 = 0;
    auStack_260._0_16_ = (undefined1  [16])0x0;
    FUN_048b05a0(auStack_208._8_8_,&uStack_2b8);
    uVar3 = auStack_260._8_8_;
    if ((long *)auStack_260._8_8_ != (long *)0x0) {
      LOCK();
      plVar14 = (long *)(auStack_260._8_8_ + 8);
      lVar12 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*(long *)auStack_260._8_8_ + 0x10))(auStack_260._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    func_0x0e4bd3d0(auStack_208);
    uStack_218 = CONCAT71(uStack_218._1_7_,(char)uStack_100);
    uStack_230 = CONCAT71(uStack_117,uStack_118);
    uStack_228 = uStack_110;
    uStack_220 = uStack_108;
    puStack_238 = puStack_120;
    puStack_248 = puStack_130;
    uStack_240 = uStack_128;
    func_0x048b0bc0(auStack_1f0);
    func_0x0e4bd0b0(auStack_208,&puStack_248,&UNK_013899a1,0x14,1);
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar10 = &UNK_0f490160;
    uVar3 = auStack_1f0._0_8_;
    auStack_1f0._0_8_ = puVar10;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    uStack_2b8 = CONCAT44(uStack_2b8._4_4_,(undefined4)lStack_1f8);
    plStack_2b0 = (long *)0x0;
    uStack_2a8 = (long *)((ulong)uStack_2a8 & 0xffffffff00000000);
    pcStack_2a0 = (code *)0x1;
    uStack_298 = 0;
    puStack_290 = &UNK_0d9e2b30;
    puStack_288 = &SUB_048b06d0;
    puStack_280 = &SUB_0d9e2820;
    puStack_278 = &UNK_0e4bdf50;
    puStack_270 = &UNK_0e4be120;
    uStack_268 = 0;
    auStack_260._0_16_ = (undefined1  [16])0x0;
    FUN_048b05a0(auStack_208._8_8_,&uStack_2b8);
    uVar3 = auStack_260._8_8_;
    if ((long *)auStack_260._8_8_ != (long *)0x0) {
      LOCK();
      plVar14 = (long *)(auStack_260._8_8_ + 8);
      lVar12 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*(long *)auStack_260._8_8_ + 0x10))(auStack_260._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    func_0x0e4bd3d0(auStack_208);
    func_0x048b0bc0(auStack_1f0);
  }
  if ((DAT_0f754770 == '\0') && (iVar7 = func_0x04108328(&DAT_0f754770), iVar7 != 0)) {
    func_0x0e4be3c0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f7546f0,0xf53dab8);
    func_0x0410844d(&DAT_0f754770);
  }
  plVar14 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f7546f0 + 4)) * 8);
  do {
    lVar12 = *plVar14;
    if (lVar12 == -1) goto LAB_0e3deea0;
    plVar14 = (long *)(*(long *)(param_1 + 0x30) + lVar12 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar12 * 0x18) != *(uint *)(_DAT_0f7546f0 + 4))
  ;
  if (plVar14 == *(long **)(param_1 + 0x38)) {
LAB_0e3deea0:
    puVar9 = &DAT_0f7546f0;
    if (iRam000000000f754750 != -0x2b3da790) goto LAB_0e3def22;
LAB_0e3deecb:
    lVar12 = *(long *)(puVar9 + 0x68);
    if (lVar12 == 0) goto LAB_0e3def22;
    bVar20 = (*(byte *)(lVar12 + 8) & 1) != 0;
    lVar17 = lVar12 + 9;
    if (bVar20) {
      lVar17 = *(long *)(lVar12 + 0x18);
    }
    uVar15 = (ulong)(*(byte *)(lVar12 + 8) >> 1);
    if (bVar20) {
      uVar15 = *(ulong *)(lVar12 + 0x10);
    }
    func_0x0e4be9e0(&puStack_130,param_1,lVar17,uVar15);
    if ((char)uStack_100 != '\0') goto LAB_0e3def08;
LAB_0e3def48:
    func_0x0e4bf550(auStack_208,&puStack_130,&UNK_011ea907,0xb);
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar10 = &UNK_0f4901d8;
    uVar3 = auStack_1f0._0_8_;
    auStack_1f0._0_8_ = puVar10;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    uStack_2b8 = CONCAT44(uStack_2b8._4_4_,(undefined4)lStack_1f8);
    plStack_2b0 = (long *)0x0;
    uStack_2a8 = (long *)((ulong)uStack_2a8 & 0xffffffff00000000);
    pcStack_2a0 = (code *)0x1;
    uStack_298 = 0;
    puStack_290 = &UNK_0d9e5080;
    puStack_288 = &SUB_048b06d0;
    puStack_280 = &SUB_0d9e4d70;
    puStack_278 = &UNK_0e4bfb00;
    puStack_270 = &UNK_0e4bfcc0;
    uStack_268 = 0;
    auStack_260._0_16_ = (undefined1  [16])0x0;
    FUN_048b05a0(auStack_208._8_8_,&uStack_2b8);
    uVar3 = auStack_260._8_8_;
    if ((long *)auStack_260._8_8_ != (long *)0x0) {
      LOCK();
      plVar14 = (long *)(auStack_260._8_8_ + 8);
      lVar12 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*(long *)auStack_260._8_8_ + 0x10))(auStack_260._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    func_0x0e4bf800(auStack_208);
    uStack_218 = CONCAT71(uStack_218._1_7_,(char)uStack_100);
    uStack_230 = CONCAT71(uStack_117,uStack_118);
    uStack_228 = uStack_110;
    uStack_220 = uStack_108;
    puStack_238 = puStack_120;
    puStack_248 = puStack_130;
    uStack_240 = uStack_128;
    func_0x048b0bc0(auStack_1f0);
    func_0x0e4bf550(auStack_208,&puStack_248,&UNK_011ed181,10);
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar10 = &UNK_0f4bc820;
    uVar3 = auStack_1f0._0_8_;
    auStack_1f0._0_8_ = puVar10;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    uStack_2b8 = CONCAT44(uStack_2b8._4_4_,(undefined4)lStack_1f8);
    plStack_2b0 = (long *)0x0;
    uStack_2a8 = (long *)((ulong)uStack_2a8 & 0xffffffff00000000);
    pcStack_2a0 = (code *)0x1;
    uStack_298 = 0;
    puStack_290 = &UNK_0e4c00c0;
    puStack_288 = &SUB_048b06d0;
    puStack_280 = &UNK_0e4bbe60;
    puStack_278 = &UNK_0e4c0180;
    puStack_270 = &UNK_0e4c0360;
    uStack_268 = 0;
    auStack_260._0_16_ = (undefined1  [16])0x0;
    FUN_048b05a0(auStack_208._8_8_,&uStack_2b8);
    uVar3 = auStack_260._8_8_;
    if ((long *)auStack_260._8_8_ != (long *)0x0) {
      LOCK();
      plVar14 = (long *)(auStack_260._8_8_ + 8);
      lVar12 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*(long *)auStack_260._8_8_ + 0x10))(auStack_260._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    func_0x0e4bf800(auStack_208);
    func_0x048b0bc0(auStack_1f0);
    lVar12 = func_0x0ca78520(param_1 + 0x18);
    if (*(int *)(lVar12 + 0x60) != -0x2b3da790) goto LAB_0e3df247;
LAB_0e3df205:
    lVar12 = *(long *)(lVar12 + 0x68);
    if (lVar12 == 0) goto LAB_0e3df247;
    bVar20 = (*(byte *)(lVar12 + 8) & 1) != 0;
    lVar17 = lVar12 + 9;
    if (bVar20) {
      lVar17 = *(long *)(lVar12 + 0x18);
    }
    uVar15 = (ulong)(*(byte *)(lVar12 + 8) >> 1);
    if (bVar20) {
      uVar15 = *(ulong *)(lVar12 + 0x10);
    }
    func_0x0e4c07e0(&puStack_130,param_1,lVar17,uVar15);
  }
  else {
    puVar9 = (undefined *)plVar14[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_0e3deecb;
LAB_0e3def22:
    func_0x0e4be9e0(&puStack_130,param_1,&UNK_013299b2,9);
    if ((char)uStack_100 == '\0') goto LAB_0e3def48;
LAB_0e3def08:
    lVar12 = func_0x0ca78520(param_1 + 0x18);
    if (*(int *)(lVar12 + 0x60) == -0x2b3da790) goto LAB_0e3df205;
LAB_0e3df247:
    func_0x0e4c07e0(&puStack_130,param_1,&UNK_0148d0cf,0x11);
  }
  if ((char)uStack_100 != '\0') {
    return;
  }
  puVar9 = puStack_130 + 0x18;
  lVar12 = func_0x0ca78520(puVar9);
  for (pbVar16 = *(byte **)(puStack_130 + 0x50); pbVar16 != *(byte **)(puStack_130 + 0x58);
      pbVar16 = pbVar16 + 0x38) {
    bVar2 = *pbVar16;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x1a) goto LAB_0e3df30a;
    }
    else if (*(long *)(pbVar16 + 8) == 0x1a) {
LAB_0e3df30a:
      if ((bVar2 & 1) == 0) {
        pbVar18 = pbVar16 + 1;
      }
      else {
        pbVar18 = *(byte **)(pbVar16 + 0x10);
      }
      auVar21[0] = -(*pbVar18 == DAT_014eaba0);
      auVar21[1] = -(pbVar18[1] == DAT_014eaba0._1_1_);
      auVar21[2] = -(pbVar18[2] == DAT_014eaba0._2_1_);
      auVar21[3] = -(pbVar18[3] == DAT_014eaba0._3_1_);
      auVar21[4] = -(pbVar18[4] == DAT_014eaba0._4_1_);
      auVar21[5] = -(pbVar18[5] == DAT_014eaba0._5_1_);
      auVar21[6] = -(pbVar18[6] == DAT_014eaba0._6_1_);
      auVar21[7] = -(pbVar18[7] == DAT_014eaba0._7_1_);
      auVar21[8] = -(pbVar18[8] == DAT_014eaba0._8_1_);
      auVar21[9] = -(pbVar18[9] == DAT_014eaba0._9_1_);
      auVar21[10] = -(pbVar18[10] == DAT_014eaba0._10_1_);
      auVar21[0xb] = -(pbVar18[0xb] == DAT_014eaba0._11_1_);
      auVar21[0xc] = -(pbVar18[0xc] == DAT_014eaba0._12_1_);
      auVar21[0xd] = -(pbVar18[0xd] == DAT_014eaba0._13_1_);
      auVar21[0xe] = -(pbVar18[0xe] == DAT_014eaba0._14_1_);
      auVar21[0xf] = -(pbVar18[0xf] == DAT_014eaba0._15_1_);
      auVar22[0] = -(pbVar18[10] == DAT_014e4ff0);
      auVar22[1] = -(pbVar18[0xb] == DAT_014e4ff0._1_1_);
      auVar22[2] = -(pbVar18[0xc] == DAT_014e4ff0._2_1_);
      auVar22[3] = -(pbVar18[0xd] == DAT_014e4ff0._3_1_);
      auVar22[4] = -(pbVar18[0xe] == DAT_014e4ff0._4_1_);
      auVar22[5] = -(pbVar18[0xf] == DAT_014e4ff0._5_1_);
      auVar22[6] = -(pbVar18[0x10] == DAT_014e4ff0._6_1_);
      auVar22[7] = -(pbVar18[0x11] == DAT_014e4ff0._7_1_);
      auVar22[8] = -(pbVar18[0x12] == DAT_014e4ff0._8_1_);
      auVar22[9] = -(pbVar18[0x13] == DAT_014e4ff0._9_1_);
      auVar22[10] = -(pbVar18[0x14] == DAT_014e4ff0._10_1_);
      auVar22[0xb] = -(pbVar18[0x15] == DAT_014e4ff0._11_1_);
      auVar22[0xc] = -(pbVar18[0x16] == DAT_014e4ff0._12_1_);
      auVar22[0xd] = -(pbVar18[0x17] == DAT_014e4ff0._13_1_);
      auVar22[0xe] = -(pbVar18[0x18] == DAT_014e4ff0._14_1_);
      auVar22[0xf] = -(pbVar18[0x19] == DAT_014e4ff0._15_1_);
      auVar22 = auVar22 & auVar21;
      if ((ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar22[0xf] >> 7) << 0xf) == 0xffff) break;
    }
  }
  if (pbVar16 == *(byte **)(puStack_130 + 0x58)) {
LAB_0e3df339:
    if ((int)uStack_108 == 0) {
      if ((*(int *)(lVar12 + 0x60) != -0x2b3da790) || (*(long *)(lVar12 + 0x68) == 0))
      goto LAB_0e3df3b6;
      lVar12 = *(long *)(lVar12 + 0x68) + 0x38;
    }
    else {
      auStack_208._0_8_ = func_0x048b0c90(puVar9,lVar12,uStack_108._4_4_,1);
      if (auStack_208._0_8_ == 0) {
        auStack_208 = (undefined1  [16])0x0;
        FUN_048b0d20(auStack_208);
        if (auStack_208._0_8_ == 0) goto LAB_0e3df3b6;
      }
      if ((*(int *)(auStack_208._0_8_ + 0x50) == -0x45dcb126) &&
         (*(long *)(auStack_208._0_8_ + 0x58) != 0)) {
        lVar12 = *(long *)(auStack_208._0_8_ + 0x58) + 0x40;
      }
      else {
LAB_0e3df3b6:
        lVar12 = 0;
      }
    }
    uStack_2a8 = (long *)&UNK_0488e0b0;
    pcStack_2a0 = (code *)0x0;
    uStack_298 = CONCAT35(uStack_298._5_3_,0x48b5725f);
    uStack_2b8 = 0;
    auStack_208 = (undefined1  [16])0x0;
    auStack_1f0 = ZEXT816(0x488e0b0);
    auStack_1e0._0_5_ = 0x48b5725f;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar10 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x20,0);
    }
    uVar3 = _UNK_013bbadf;
    puStack_248 = (undefined *)0x21;
    uStack_240 = 0x1a;
    *(ulong *)((long)puVar10 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puVar10 + 0x12) = uVar3;
    uVar3 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puVar10 = _DAT_013bbacd;
    puVar10[1] = uVar3;
    *(undefined1 *)((long)puVar10 + 0x1a) = 0;
    puStack_238 = puVar10;
    lVar12 = func_0x048b5060(lVar12,&puStack_248);
    *(undefined8 *)(lVar12 + 0x20) = 0;
    if ((undefined1 *)(lVar12 + 0x20) == auStack_208) {
      pcVar13 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar12 + 0x40) != (code *)0x0) {
        puVar10 = (undefined8 *)(lVar12 + 0x28);
        (**(code **)(lVar12 + 0x40))(puVar10);
        if (auStack_1e0[4] != '\0') {
          if (auStack_1e0[4] == '\x02') {
            (*(code *)auStack_1f0._0_8_)(5,auStack_208 + 8,puVar10);
          }
          else {
            uVar3 = auStack_208._8_8_;
            auStack_208._8_8_ = 0;
            *puVar10 = uVar3;
          }
        }
      }
      *(undefined8 *)(lVar12 + 0x38) = auStack_1f0._0_8_;
      *(undefined8 *)(lVar12 + 0x40) = auStack_1f0._8_8_;
      *(undefined4 *)(lVar12 + 0x48) = auStack_1e0._0_4_;
      *(char *)(lVar12 + 0x4c) = auStack_1e0[4];
      pcVar13 = (code *)auStack_1f0._8_8_;
    }
    if (((ulong)puStack_248 & 1) != 0) {
      func_0x0412a280(puStack_238,(ulong)puStack_248 & 0xfffffffffffffffe);
      pcVar13 = (code *)auStack_1f0._8_8_;
    }
    if (pcVar13 != (code *)0x0) {
      (*pcVar13)(auStack_208 + 8);
    }
    if (pcStack_2a0 != (code *)0x0) {
      (*pcStack_2a0)(&uStack_2b8);
    }
  }
  else {
    iVar7 = *(int *)(pbVar16 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f550ad8), iVar8 != 0)) {
      func_0x0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar7 == _DAT_0f550ac4) goto LAB_0e3df339;
  }
  puVar6 = puStack_130;
  uStack_e8 = uStack_128;
  puStack_e0 = puStack_120;
  puStack_d8 = (undefined *)CONCAT71(uStack_117,uStack_118);
  pcStack_d0 = (code *)uStack_110;
  iStack_24c = (int)uStack_108;
  uStack_134 = uStack_108._4_4_;
  uStack_f0 = uStack_100;
  uStack_66 = 0x73;
  uStack_68 = 0x6e6f;
  puVar9 = puStack_130 + 0x18;
  lVar12 = func_0x0ca78520(puVar9);
  pbVar18 = *(byte **)(puVar6 + 0x58);
  for (pbVar16 = *(byte **)(puVar6 + 0x50); pbVar16 != pbVar18; pbVar16 = pbVar16 + 0x38) {
    bVar2 = *pbVar16;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x24) goto LAB_0e3df6ba;
    }
    else if (*(long *)(pbVar16 + 8) == 0x24) {
LAB_0e3df6ba:
      if ((bVar2 & 1) == 0) {
        pbVar19 = pbVar16 + 1;
      }
      else {
        pbVar19 = *(byte **)(pbVar16 + 0x10);
      }
      iVar7 = func_0x0eee3000(&DAT_014518a9,pbVar19,0x24);
      if (iVar7 == 0) break;
    }
  }
  if (pbVar16 == pbVar18) {
LAB_0e3df6e7:
    if (iStack_24c == 0) {
      if ((*(int *)(lVar12 + 0x60) != -0x2b3da790) || (*(long *)(lVar12 + 0x68) == 0))
      goto LAB_0e3df760;
      lVar12 = *(long *)(lVar12 + 0x68) + 0x38;
    }
    else {
      lVar12 = func_0x048b0c90(puVar9,lVar12,uStack_134,1);
      if (lVar12 == 0) {
        auStack_208 = ZEXT816(0);
        FUN_048b0d20(auStack_208);
        lVar12 = auStack_208._0_8_;
        if (auStack_208._0_8_ == 0) goto LAB_0e3df760;
      }
      if ((*(int *)(lVar12 + 0x50) == -0x45dcb126) && (*(long *)(lVar12 + 0x58) != 0)) {
        lVar12 = *(long *)(lVar12 + 0x58) + 0x40;
      }
      else {
LAB_0e3df760:
        lVar12 = 0;
      }
    }
    uStack_2b8 = 0;
    uStack_2a8 = (long *)&UNK_048b4ab0;
    pcStack_2a0 = (code *)&UNK_048b49f0;
    uStack_298 = CONCAT35(uStack_298._5_3_,0x1d33bd9c5);
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    if (puVar10 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x38,0);
    }
    *puVar10 = 0x69736e656d694414;
    *(undefined2 *)(puVar10 + 1) = uStack_68;
    *(undefined1 *)((long)puVar10 + 10) = uStack_66;
    *(undefined1 *)((long)puVar10 + 0xb) = 0;
    *(undefined4 *)((long)puVar10 + 0xc) = 0;
    puVar10[2] = 0;
    uStack_66 = 0;
    uStack_68 = 0;
    *(undefined2 *)(puVar10 + 3) = 0x700;
    puVar10[4] = 0x1003c00150001;
    puVar10[5] = &UNK_01254d89;
    puVar10[6] = &UNK_01254d89;
    auStack_1f0._8_8_ = &UNK_048b49f0;
    auStack_1f0._0_8_ = &UNK_048b4ab0;
    auStack_1e0._0_5_ = 0x1d33bd9c5;
    uStack_2b8 = 0;
    auStack_208._8_8_ = puVar10;
    auStack_208._0_8_ = &UNK_048b46e0;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar10 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x28,0);
    }
    uVar3 = _UNK_014518c1;
    puStack_248 = (undefined *)0x29;
    uStack_240 = 0x24;
    puVar10[2] = _DAT_014518b9;
    puVar10[3] = uVar3;
    uVar3 = _UNK_014518b1;
    *puVar10 = _DAT_014518a9;
    puVar10[1] = uVar3;
    *(undefined4 *)(puVar10 + 4) = 0x5d797472;
    *(undefined1 *)((long)puVar10 + 0x24) = 0;
    puStack_238 = puVar10;
    lVar12 = func_0x048b5060(lVar12,&puStack_248);
    *(undefined **)(lVar12 + 0x20) = &UNK_048b46e0;
    pcVar13 = (code *)&UNK_048b49f0;
    if ((undefined1 *)(lVar12 + 0x20) != auStack_208) {
      puVar10 = (undefined8 *)(lVar12 + 0x28);
      if (*(code **)(lVar12 + 0x40) == (code *)0x0) {
LAB_0e3df939:
        uVar3 = auStack_208._8_8_;
        auStack_208._8_8_ = 0;
        *puVar10 = uVar3;
      }
      else {
        (**(code **)(lVar12 + 0x40))(puVar10);
        if (auStack_1e0[4] != '\0') {
          if (auStack_1e0[4] != '\x02') goto LAB_0e3df939;
          (*(code *)auStack_1f0._0_8_)(5,auStack_208 + 8,puVar10);
        }
      }
      *(undefined8 *)(lVar12 + 0x38) = auStack_1f0._0_8_;
      *(undefined8 *)(lVar12 + 0x40) = auStack_1f0._8_8_;
      *(undefined4 *)(lVar12 + 0x48) = auStack_1e0._0_4_;
      *(char *)(lVar12 + 0x4c) = auStack_1e0[4];
      pcVar13 = (code *)auStack_1f0._8_8_;
    }
    if (((ulong)puStack_248 & 1) != 0) {
      func_0x0412a280(puStack_238,(ulong)puStack_248 & 0xfffffffffffffffe);
      pcVar13 = (code *)auStack_1f0._8_8_;
    }
    if (pcVar13 != (code *)0x0) {
      (*pcVar13)(auStack_208 + 8);
    }
    if (pcStack_2a0 != (code *)0x0) {
      (*pcStack_2a0)(&uStack_2b8);
    }
  }
  else {
    iVar7 = *(int *)(pbVar16 + 0x1c);
    if ((DAT_0f550768 == '\0') && (iVar8 = func_0x04108328(&DAT_0f550768), iVar8 != 0)) {
      func_0x048b46f0(0xf550750);
      func_0x0410844d(&DAT_0f550768);
    }
    if (iVar7 == _DAT_0f550754) goto LAB_0e3df6e7;
  }
  puStack_248 = puVar6;
  uStack_240 = uStack_e8;
  puStack_238 = puStack_e0;
  uStack_230 = puStack_d8;
  uStack_228 = pcStack_d0;
  uStack_220 = CONCAT44(uStack_134,iStack_24c);
  uStack_218 = uStack_f0;
  if ((DAT_0f6ed758 == '\0') && (iVar7 = func_0x04108328(&DAT_0f6ed758), iVar7 != 0)) {
    func_0x0ca783e0(0xf6ed740);
    func_0x0410844d(&DAT_0f6ed758);
  }
  uStack_220 = 0x525e4e0600000001;
  puVar9 = puStack_248 + 0x18;
  auStack_208._0_8_ = func_0x0ca78520(puVar9);
  auStack_208._8_8_ = puVar9;
  func_0x0ed621a0(auStack_208,uStack_220._4_4_);
  auStack_208._0_2_ = 1;
  auStack_208._8_8_ = &uStack_240;
  lStack_1f8 = CONCAT44(lStack_1f8._4_4_,uStack_220._4_4_);
  auStack_1f0 = ZEXT816(0);
  auStack_1e0 = ZEXT816(0);
  lStack_1d0 = 0;
  uStack_1c8 = 0x26;
  uStack_1c7 = (undefined7)_DAT_0136e43a;
  uStack_1c0 = (undefined1)((ulong)_DAT_0136e43a >> 0x38);
  uStack_1bf = (undefined7)_UNK_0136e442;
  uStack_1b8 = 0x6e6f6973;
  uStack_1b4 = uStack_1b4 & 0xffffff00;
  auStack_1b0 = ZEXT816(0);
  lStack_1a0 = 0;
  auStack_198 = ZEXT816(0);
  lStack_188 = 0;
  uStack_180 = 0x3f600000;
  func_0x048afb10(auStack_1b0,8);
  lStack_158 = 0;
  lStack_150 = 0;
  lStack_168 = 0;
  lStack_160 = 0;
  auStack_178 = (undefined1  [16])0x0;
  uStack_148 = 0xff00;
  uStack_144 = uStack_144 & 0xffffff00;
  uStack_140 = uStack_140 & 0xffffff00;
  uStack_13c = 0;
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar10 == (undefined8 *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *puVar10 = &UNK_0f4bc908;
  uVar3 = auStack_1f0._0_8_;
  auStack_1f0._0_8_ = puVar10;
  if ((long *)uVar3 != (long *)0x0) {
    (**(code **)(*(long *)uVar3 + 8))();
  }
  uStack_2b8 = CONCAT44(uStack_2b8._4_4_,(undefined4)lStack_1f8);
  plStack_2b0 = (long *)0x0;
  uStack_2a8 = (long *)((ulong)uStack_2a8 & 0xffffffff00000000);
  pcStack_2a0 = (code *)0x1;
  uStack_298 = 0;
  puStack_290 = &UNK_0e4c12e0;
  puStack_288 = &SUB_048b06d0;
  puStack_280 = &UNK_0e4be300;
  puStack_278 = &UNK_0e4c13a0;
  puStack_270 = &UNK_0e4c1630;
  uStack_268 = 0;
  auStack_260._0_16_ = (undefined1  [16])0x0;
  FUN_048b05a0(auStack_208._8_8_,&uStack_2b8);
  uVar3 = auStack_260._8_8_;
  if ((long *)auStack_260._8_8_ != (long *)0x0) {
    LOCK();
    plVar14 = (long *)(auStack_260._8_8_ + 8);
    lVar12 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*(long *)auStack_260._8_8_ + 0x10))(auStack_260._8_8_);
      func_0x0412c2d0(uVar3);
    }
  }
  uVar3 = auStack_208._8_8_;
  if ((DAT_0f550a20 == '\0') && (iVar7 = func_0x04108328(&DAT_0f550a20), iVar7 != 0)) {
    FUN_048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  uStack_2b8 = CONCAT44(uStack_2b8._4_4_,_DAT_0f550a0c);
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar14 == (long *)0x0) {
    FUN_0eec74c0(0xd0,0);
  }
  *(undefined1 (*) [16])(plVar14 + 1) = (undefined1  [16])0x0;
  *plVar14 = (long)&UNK_0ef439d0;
  plStack_2b0 = plVar14 + 3;
  uVar4 = auStack_1f0._0_8_;
  uVar5 = auStack_1f0._8_8_;
  auStack_1f0 = (undefined1  [16])0x0;
  plVar14[3] = uVar4;
  plVar14[4] = uVar5;
  plVar14[7] = lStack_1d0;
  plVar14[5] = auStack_1e0._0_8_;
  plVar14[6] = auStack_1e0._8_8_;
  auStack_1e0 = (undefined1  [16])0x0;
  lStack_1d0 = 0;
  plVar14[10] = CONCAT44(uStack_1b4,uStack_1b8);
  plVar14[8] = CONCAT71(uStack_1c7,uStack_1c8);
  plVar14[9] = CONCAT71(uStack_1bf,uStack_1c0);
  uStack_1c8 = 0;
  uStack_1c7 = 0;
  uStack_1c0 = 0;
  uStack_1bf = 0;
  uStack_1b8 = 0;
  uStack_1b4 = 0;
  plVar14[0xb] = auStack_1b0._0_8_;
  plVar14[0xc] = auStack_1b0._8_8_;
  plVar14[0xd] = lStack_1a0;
  auStack_1b0 = (undefined1  [16])0x0;
  lStack_1a0 = 0;
  plVar14[0xe] = auStack_198._0_8_;
  plVar14[0xf] = auStack_198._8_8_;
  plVar14[0x10] = lStack_188;
  auStack_198 = (undefined1  [16])0x0;
  lStack_188 = 0;
  *(undefined4 *)(plVar14 + 0x11) = uStack_180;
  plVar14[0x12] = auStack_178._0_8_;
  plVar14[0x13] = auStack_178._8_8_;
  plVar14[0x14] = lStack_168;
  auStack_178 = (undefined1  [16])0x0;
  lStack_168 = 0;
  plVar14[0x17] = lStack_150;
  plVar14[0x15] = lStack_160;
  plVar14[0x16] = lStack_158;
  lStack_160 = 0;
  lStack_158 = 0;
  lStack_150 = 0;
  *(ulong *)((long)plVar14 + 0xc5) = CONCAT17(uStack_13c,CONCAT43(uStack_140,uStack_144._1_3_));
  plVar14[0x18] = CONCAT44(uStack_144,CONCAT22(uStack_146,uStack_148));
  auStack_a8 = (undefined1  [16])0x0;
  uStack_2a8 = plVar14;
  func_0x048afd20(uVar3,&uStack_2b8);
  plVar14 = uStack_2a8;
  if (uStack_2a8 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_2a8 + 1;
    lVar12 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*uStack_2a8 + 0x10))(uStack_2a8);
      func_0x0412c2d0(plVar14);
    }
  }
  uVar4 = auStack_a8._8_8_;
  if ((long *)auStack_a8._8_8_ != (long *)0x0) {
    LOCK();
    plVar14 = (long *)(auStack_a8._8_8_ + 8);
    lVar12 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*(long *)auStack_a8._8_8_ + 0x10))(auStack_a8._8_8_);
      func_0x0412c2d0(uVar4);
    }
  }
  lVar12 = *(long *)(uVar3 + 0x10);
  iVar7 = *(int *)(uVar3 + 0x1c);
  if (iVar7 == 2) {
    piVar11 = *(int **)(*(long *)(lVar12 + 0x78) + 0x60);
    iVar7 = *piVar11;
    while (iVar7 != *(int *)(uVar3 + 0x18)) {
      piVar11 = piVar11 + 0x16;
      iVar7 = *piVar11;
    }
    for (; *(long *)(piVar11 + 0xc) != *(long *)(uVar3 + 8); piVar11 = *(int **)(piVar11 + 0xe)) {
    }
  }
  else {
    if (iVar7 != 1) {
      if (iVar7 == 0) {
        *(uint *)(lVar12 + 0x18) = *(uint *)(lVar12 + 0x18) | auStack_208._0_4_ << 0x10;
      }
      goto LAB_0e3dff0d;
    }
    piVar11 = *(int **)(*(long *)(lVar12 + 0x78) + 0x48);
    iVar7 = *piVar11;
    while (iVar7 != *(int *)(uVar3 + 0x18)) {
      piVar11 = piVar11 + 0x1a;
      iVar7 = *piVar11;
    }
  }
  piVar11[4] = piVar11[4] | auStack_208._0_4_ << 0x10;
LAB_0e3dff0d:
  func_0x048b0bc0(auStack_1f0);
  return;
}



/* ---- referenced strings ----
 * 0x136e43a  minecraft:dimension
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14518a9  [cereal:cereal_root_schema_property]
 * 0x14518b9  oot_schema_property]
 * 0x14eaba0  [cereal:document
 */
