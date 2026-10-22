/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe97c740 (ELF vaddr 0xe87c740)
 * Label: caller-of-callee
 * Body:  [[0e97c740, 0e97cbe4] [0e97cbf0, 0e97d731] [0e97d740, 0e97da78] [0e97da80, 0e97dab1] [0e97dac0, 0e97e3f9]]
 * Ghidra: FUN_0e97c740
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e97c740(long param_1)

{
  long *plVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  long *plVar14;
  code *pcVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined4 *puVar18;
  long lVar19;
  int *piVar20;
  byte *pbVar21;
  byte *pbVar22;
  ulong uVar23;
  ulong uVar24;
  char cVar25;
  bool bVar26;
  undefined8 uStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  code *pcStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined1 *puStack_248;
  undefined1 *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined4 uStack_228;
  undefined8 uStack_220;
  long *plStack_218;
  long lStack_210;
  undefined4 uStack_208;
  undefined3 uStack_204;
  long lStack_200;
  undefined *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined4 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  undefined1 uStack_1b8;
  undefined7 uStack_1b7;
  undefined1 uStack_1b0;
  undefined2 uStack_1af;
  undefined1 uStack_1ad;
  undefined4 uStack_1ac;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  undefined4 uStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined2 uStack_138;
  undefined2 uStack_136;
  uint uStack_134;
  uint uStack_130;
  undefined1 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  char cStack_f8;
  undefined4 uStack_f0;
  undefined3 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  char cStack_78;
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  lVar16 = param_1 + 0x18;
  lVar10 = func_0x0e378700(lVar16);
  if ((*(int *)(lVar10 + 0x60) == -0x2b3da790) && (lVar10 = *(long *)(lVar10 + 0x68), lVar10 != 0))
  {
    bVar26 = (*(byte *)(lVar10 + 8) & 1) != 0;
    lVar19 = lVar10 + 9;
    if (bVar26) {
      lVar19 = *(long *)(lVar10 + 0x18);
    }
    uVar23 = (ulong)(*(byte *)(lVar10 + 8) >> 1);
    if (bVar26) {
      uVar23 = *(ulong *)(lVar10 + 0x10);
    }
    func_0x0ea01110(&uStack_128,param_1,lVar19,uVar23);
  }
  else {
    func_0x0ea01110(&uStack_128,param_1,&UNK_012d2dfa,0x12);
  }
  if (cStack_f8 == '\0') {
    uStack_268._4_4_ = (uint)((ulong)uStack_268 >> 0x20);
    uStack_278._4_4_ = (undefined4)((ulong)uStack_278 >> 0x20);
    func_0x0ea019c0(&puStack_1f8,&uStack_128,&UNK_0133c1b7,1);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0ef44b00;
    if (uStack_1e0 != (code *)0x0) {
      lVar10 = *(long *)uStack_1e0;
      uStack_1e0 = (code *)plVar14;
      (**(code **)(lVar10 + 8))();
      plVar14 = (long *)uStack_1e0;
    }
    uStack_1e0 = (code *)plVar14;
    uStack_278 = CONCAT44(uStack_278._4_4_,uStack_1e8);
    plStack_270 = (long *)0x0;
    uStack_268 = (long *)((ulong)uStack_268._4_4_ << 0x20);
    pcStack_260 = (code *)0x1;
    uStack_258 = 0;
    puStack_250 = &UNK_048b3f30;
    puStack_248 = &SUB_048b06d0;
    puStack_240 = &SUB_048b2190;
    puStack_238 = &UNK_0ea01e50;
    puStack_230 = &UNK_0ea02010;
    uStack_228 = 0;
    uStack_220 = 0;
    plStack_218 = (long *)0x0;
    func_0x048b05a0(puStack_1f0,&uStack_278);
    plVar14 = plStack_218;
    if (plStack_218 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_218 + 1;
      lVar10 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plStack_218 + 0x10))(plStack_218);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0ea01b50(&puStack_1f8);
    uStack_b8 = CONCAT71(uStack_b8._1_7_,cStack_f8);
    uStack_c8 = uStack_108;
    uStack_c4 = uStack_104;
    iStack_c0 = (int)uStack_100;
    uStack_bc = uStack_100._4_4_;
    uStack_d8 = uStack_118;
    uStack_d4 = uStack_114;
    uStack_d0 = uStack_110;
    uStack_cc = uStack_10c;
    uStack_e8 = uStack_128;
    uStack_e4 = uStack_124;
    uStack_e0 = uStack_120;
    uStack_dc = uStack_11c;
    FUN_048b0bc0(&uStack_1e0);
    func_0x0ea019c0(&puStack_1f8,&uStack_e8,&UNK_01240b70,0);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0f0118f8;
    if (uStack_1e0 != (code *)0x0) {
      lVar10 = *(long *)uStack_1e0;
      uStack_1e0 = (code *)plVar14;
      (**(code **)(lVar10 + 8))();
      plVar14 = (long *)uStack_1e0;
    }
    uStack_1e0 = (code *)plVar14;
    uStack_278 = CONCAT44(uStack_278._4_4_,uStack_1e8);
    plStack_270 = (long *)0x0;
    uStack_268 = (long *)((ulong)uStack_268 & 0xffffffff00000000);
    pcStack_260 = (code *)0x1;
    uStack_258 = 0;
    puStack_250 = &UNK_05dc7140;
    puStack_248 = &SUB_048b06d0;
    puStack_240 = &UNK_05dc6e20;
    puStack_238 = &UNK_0ea021e0;
    puStack_230 = &UNK_0ea02350;
    uStack_228 = 0;
    uStack_220 = 0;
    plStack_218 = (long *)0x0;
    func_0x048b05a0(puStack_1f0,&uStack_278);
    plVar14 = plStack_218;
    if (plStack_218 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_218 + 1;
      lVar10 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plStack_218 + 0x10))(plStack_218);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0ea01b50(&puStack_1f8);
    uVar4 = uStack_bc;
    iVar8 = iStack_c0;
    lVar10 = CONCAT44(uStack_e4,uStack_e8);
    plStack_68 = (long *)CONCAT44(uStack_dc,uStack_e0);
    uStack_60 = CONCAT44(uStack_d4,uStack_d8);
    uStack_58 = (undefined4 *)CONCAT44(uStack_cc,uStack_d0);
    uStack_50 = uStack_c8;
    uStack_4c = uStack_c4;
    cVar25 = (char)uStack_b8;
    FUN_048b0bc0(&uStack_1e0);
    if (iVar8 == 4) {
      lStack_210 = CONCAT71(lStack_210._1_7_,cVar25);
      lStack_200 = lVar16;
      uVar11 = func_0x0e378700(lVar10 + 0x18);
      puVar13 = (undefined *)func_0x048b1040(lVar10 + 0x18,uVar11,uVar4,1);
      if (puVar13 == (undefined *)0x0) {
        puStack_1f8 = (undefined *)0x0;
        puStack_1f0 = (undefined8 *)0x0;
        func_0x048b10d0(&puStack_1f8);
        puVar12 = *(undefined **)(puStack_1f8 + 0x38);
        puVar13 = puStack_1f8;
        if (puVar12 == (undefined *)0x0) goto LAB_0e97cbb6;
LAB_0e97cbdb:
        do {
          puVar13 = puVar12;
          puVar12 = *(undefined **)(puVar13 + 0x38);
          if (*(undefined **)(puVar13 + 0x38) == (undefined *)0x0) {
            puStack_1f8 = (undefined *)0x0;
            puStack_1f0 = (undefined8 *)0x0;
            func_0x048b10d0(&puStack_1f8);
            puVar12 = puStack_1f8;
          }
        } while (puVar12 != (undefined *)0x0);
      }
      else {
        puVar12 = *(undefined **)(puVar13 + 0x38);
        if (*(undefined **)(puVar13 + 0x38) != (undefined *)0x0) goto LAB_0e97cbdb;
LAB_0e97cbb6:
        puStack_1f8 = (undefined *)0x0;
        puStack_1f0 = (undefined8 *)0x0;
        func_0x048b10d0(&puStack_1f8);
        puVar12 = puStack_1f8;
        if (puStack_1f8 != (undefined *)0x0) goto LAB_0e97cbdb;
      }
      lVar19 = *(long *)(puVar13 + 0x48);
      puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar17 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
LAB_0e97cc44:
      lVar16 = lStack_200;
      puVar17[1] = 0xffffffffffffffff;
      puVar17[2] = 0;
      *(undefined1 *)(puVar17 + 3) = 0xff;
      *puVar17 = &UNK_0f0edc68;
      uVar11 = _DAT_014f0238;
      puVar17[4] = 0;
      puVar17[5] = uVar11;
      puVar17[6] = 0;
      puVar17[7] = 0;
      plVar14 = *(long **)(lVar19 + 8);
      *(undefined8 **)(lVar19 + 8) = puVar17;
      cVar25 = (char)lStack_210;
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x28))();
      }
    }
    else if (iVar8 == 1) {
      lStack_210 = CONCAT71(lStack_210._1_7_,cVar25);
      lStack_200 = lVar16;
      uVar11 = func_0x0e378700(lVar10 + 0x18);
      puVar13 = (undefined *)func_0x048b0c90(lVar10 + 0x18,uVar11,uVar4,1);
      if (puVar13 == (undefined *)0x0) {
        puStack_1f8 = (undefined *)0x0;
        puStack_1f0 = (undefined8 *)0x0;
        func_0x048b0d20(&puStack_1f8);
        puVar13 = puStack_1f8;
      }
      lVar19 = *(long *)(puVar13 + 0x58);
      puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar17 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
      goto LAB_0e97cc44;
    }
    uStack_a0 = plStack_68;
    uStack_98 = (undefined4)uStack_60;
    uStack_94 = uStack_60._4_4_;
    uStack_90 = (undefined4)uStack_58;
    uStack_8c = uStack_58._4_4_;
    uStack_88 = uStack_50;
    uStack_84 = uStack_4c;
    iStack_80 = iVar8;
    uStack_7c = uVar4;
    uStack_a8 = lVar10;
    cStack_78 = cVar25;
    func_0x0ea019c0(&puStack_1f8,&uStack_a8,&UNK_01341d5d,0);
    pcVar15 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar15 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar15 = &UNK_0f4022a0;
    if (uStack_1e0 != (code *)0x0) {
      lVar10 = *(long *)uStack_1e0;
      uStack_1e0 = pcVar15;
      (**(code **)(lVar10 + 8))();
      pcVar15 = uStack_1e0;
    }
    uStack_1e0 = pcVar15;
    uStack_278 = CONCAT44(uStack_278._4_4_,uStack_1e8);
    plStack_270 = (long *)0x0;
    uStack_268 = (long *)((ulong)uStack_268 & 0xffffffff00000000);
    pcStack_260 = (code *)0x1;
    uStack_258 = 0;
    puStack_250 = &UNK_0cd7e9d0;
    puStack_248 = &SUB_048b06d0;
    puStack_240 = &UNK_0cd7e6b0;
    puStack_238 = &UNK_0ea02530;
    puStack_230 = &UNK_0ea026a0;
    uStack_228 = 0;
    uStack_220 = 0;
    plStack_218 = (long *)0x0;
    func_0x048b05a0(puStack_1f0,&uStack_278);
    plVar14 = plStack_218;
    if (plStack_218 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_218 + 1;
      lVar10 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plStack_218 + 0x10))(plStack_218);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0ea01b50(&puStack_1f8);
    FUN_048b0bc0(&uStack_1e0);
  }
  if ((DAT_0f767e70 == '\0') && (iVar8 = func_0x04108328(&DAT_0f767e70), iVar8 != 0)) {
    func_0x0ea02940();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f767df0,0xf53dab8);
    func_0x0410844d(&DAT_0f767e70);
  }
  plVar14 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f767df0 + 4)) * 8);
  do {
    lVar10 = *plVar14;
    if (lVar10 == -1) goto LAB_0e97ce70;
    plVar14 = (long *)(*(long *)(param_1 + 0x30) + lVar10 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar10 * 0x18) != *(uint *)(_DAT_0f767df0 + 4))
  ;
  if (plVar14 == *(long **)(param_1 + 0x38)) {
LAB_0e97ce70:
    puVar13 = &DAT_0f767df0;
    if (iRam000000000f767e50 != -0x2b3da790) goto LAB_0e97cef2;
LAB_0e97ce9b:
    lVar10 = *(long *)(puVar13 + 0x68);
    if (lVar10 == 0) goto LAB_0e97cef2;
    bVar26 = (*(byte *)(lVar10 + 8) & 1) != 0;
    lVar19 = lVar10 + 9;
    if (bVar26) {
      lVar19 = *(long *)(lVar10 + 0x18);
    }
    uVar23 = (ulong)(*(byte *)(lVar10 + 8) >> 1);
    if (bVar26) {
      uVar23 = *(ulong *)(lVar10 + 0x10);
    }
    FUN_0ea02f10(&uStack_128,param_1,lVar19,uVar23);
    if (cStack_f8 != '\0') goto LAB_0e97ced8;
LAB_0e97cf18:
    func_0x0ea03a70(&puStack_1f8,&uStack_128,&UNK_0121c9ef,0xd);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0f4b8268;
    if (uStack_1e0 != (code *)0x0) {
      lVar10 = *(long *)uStack_1e0;
      uStack_1e0 = (code *)plVar14;
      (**(code **)(lVar10 + 8))();
      plVar14 = (long *)uStack_1e0;
    }
    uStack_1e0 = (code *)plVar14;
    uStack_278 = CONCAT44(uStack_278._4_4_,uStack_1e8);
    plStack_270 = (long *)0x0;
    uStack_268 = (long *)((ulong)uStack_268 & 0xffffffff00000000);
    pcStack_260 = (code *)0x1;
    uStack_258 = 0;
    puStack_250 = &UNK_0e378a10;
    puStack_248 = &SUB_048b06d0;
    puStack_240 = &SUB_0e378700;
    puStack_238 = &UNK_0ea04020;
    puStack_230 = &UNK_0ea04200;
    uStack_228 = 0;
    uStack_220 = 0;
    plStack_218 = (long *)0x0;
    func_0x048b05a0(puStack_1f0,&uStack_278);
    plVar14 = plStack_218;
    if (plStack_218 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_218 + 1;
      lVar10 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plStack_218 + 0x10))(plStack_218);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0ea03d20(&puStack_1f8);
    cStack_78 = cStack_f8;
    uStack_88 = uStack_108;
    uStack_84 = uStack_104;
    iStack_80 = (int)uStack_100;
    uStack_7c = uStack_100._4_4_;
    uStack_98 = uStack_118;
    uStack_94 = uStack_114;
    uStack_90 = uStack_110;
    uStack_8c = uStack_10c;
    uStack_a8 = CONCAT44(uStack_124,uStack_128);
    uStack_a0 = (long *)CONCAT44(uStack_11c,uStack_120);
    FUN_048b0bc0(&uStack_1e0);
    func_0x0ea03a70(&puStack_1f8,&uStack_a8,&UNK_0142e575,9);
    pcVar15 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar15 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar15 = &UNK_0f403098;
    if (uStack_1e0 != (code *)0x0) {
      lVar10 = *(long *)uStack_1e0;
      uStack_1e0 = pcVar15;
      (**(code **)(lVar10 + 8))();
      pcVar15 = uStack_1e0;
    }
    uStack_1e0 = pcVar15;
    uStack_278 = CONCAT44(uStack_278._4_4_,uStack_1e8);
    plStack_270 = (long *)0x0;
    uStack_268 = (long *)((ulong)uStack_268 & 0xffffffff00000000);
    pcStack_260 = (code *)0x1;
    uStack_258 = 0;
    puStack_250 = &UNK_0df7bad0;
    puStack_248 = &SUB_048b06d0;
    puStack_240 = &SUB_0cd7de90;
    puStack_238 = &UNK_0ea043d0;
    puStack_230 = &UNK_0ea04530;
    uStack_228 = 0;
    uStack_220 = 0;
    plStack_218 = (long *)0x0;
    func_0x048b05a0(puStack_1f0,&uStack_278);
    plVar14 = plStack_218;
    if (plStack_218 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_218 + 1;
      lVar10 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plStack_218 + 0x10))(plStack_218);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0ea03d20(&puStack_1f8);
    FUN_048b0bc0(&uStack_1e0);
    lVar16 = func_0x0e37b820(lVar16);
    if (*(int *)(lVar16 + 0x60) != -0x2b3da790) goto LAB_0e97d213;
LAB_0e97d1d1:
    lVar16 = *(long *)(lVar16 + 0x68);
    if (lVar16 == 0) goto LAB_0e97d213;
    bVar26 = (*(byte *)(lVar16 + 8) & 1) != 0;
    lVar10 = lVar16 + 9;
    if (bVar26) {
      lVar10 = *(long *)(lVar16 + 0x18);
    }
    uVar23 = (ulong)(*(byte *)(lVar16 + 8) >> 1);
    if (bVar26) {
      uVar23 = *(ulong *)(lVar16 + 0x10);
    }
    func_0x0ea04710(&uStack_128,param_1,lVar10,uVar23);
  }
  else {
    puVar13 = (undefined *)plVar14[2];
    if (*(int *)(puVar13 + 0x60) == -0x2b3da790) goto LAB_0e97ce9b;
LAB_0e97cef2:
    FUN_0ea02f10(&uStack_128,param_1,&UNK_01371554,4);
    if (cStack_f8 == '\0') goto LAB_0e97cf18;
LAB_0e97ced8:
    lVar16 = func_0x0e37b820(lVar16);
    if (*(int *)(lVar16 + 0x60) == -0x2b3da790) goto LAB_0e97d1d1;
LAB_0e97d213:
    func_0x0ea04710(&uStack_128,param_1,&UNK_013e2a2b,0xb);
  }
  if (cStack_f8 == '\0') {
    if ((DAT_0f74fe20 == '\0') && (iVar8 = func_0x04108328(&DAT_0f74fe20), iVar8 != 0)) {
      func_0x0e37b7b0(0xf74fe08);
      func_0x0410844d(&DAT_0f74fe20);
    }
    uStack_100 = 0x28a5a83e00000001;
    puVar17 = (undefined8 *)(CONCAT44(uStack_124,uStack_128) + 0x18);
    puStack_1f8 = (undefined *)func_0x0e37b820(puVar17);
    puStack_1f0 = puVar17;
    func_0x0ed621a0(&puStack_1f8,uStack_100._4_4_);
    puStack_1f0 = (undefined8 *)&uStack_120;
    puStack_1f8 = (undefined *)CONCAT62(puStack_1f8._2_6_,1);
    uStack_1e8 = uStack_100._4_4_;
    uStack_1e0 = (code *)0x0;
    uStack_1d8 = (code *)0x0;
    uStack_1d0 = 0;
    lStack_1c8 = 0;
    lStack_1c0 = 0;
    uStack_1b8 = 0x14;
    uStack_1b7 = 0x6669746e656469;
    uStack_1b0 = 0x69;
    uStack_1af = 0x7265;
    uStack_1ad = 0;
    lStack_1a0 = 0;
    lStack_198 = 0;
    lStack_190 = 0;
    lStack_188 = 0;
    lStack_180 = 0;
    lStack_178 = 0;
    uStack_170 = 0x3f600000;
    func_0x048afb10(&lStack_1a0,8);
    uStack_148 = 0;
    lStack_140 = 0;
    lStack_158 = 0;
    uStack_150 = 0;
    lStack_168 = 0;
    lStack_160 = 0;
    uStack_138 = 0xff00;
    uStack_134 = uStack_134 & 0xffffff00;
    uStack_130 = uStack_130 & 0xffffff00;
    uStack_12c = 0;
    puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar17 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar17 = &UNK_0ef44b00;
    if (uStack_1e0 != (code *)0x0) {
      lVar16 = *(long *)uStack_1e0;
      uStack_1e0 = (code *)puVar17;
      (**(code **)(lVar16 + 8))();
      puVar17 = (undefined8 *)uStack_1e0;
    }
    uStack_1e0 = (code *)puVar17;
    uStack_278 = CONCAT44(uStack_278._4_4_,uStack_1e8);
    plStack_270 = (long *)0x0;
    uStack_268 = (long *)((ulong)uStack_268 & 0xffffffff00000000);
    pcStack_260 = (code *)0x1;
    uStack_258 = 0;
    puStack_250 = &UNK_048b3f30;
    puStack_248 = &SUB_048b06d0;
    puStack_240 = &SUB_048b2190;
    puStack_238 = &UNK_0ea04fc0;
    puStack_230 = &UNK_0ea05180;
    uStack_228 = 0;
    uStack_220 = 0;
    plStack_218 = (long *)0x0;
    func_0x048b05a0(puStack_1f0,&uStack_278);
    plVar14 = plStack_218;
    if (plStack_218 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_218 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_218 + 0x10))(plStack_218);
        func_0x0412c2d0(plVar14);
      }
    }
    puVar17 = puStack_1f0;
    if ((DAT_0f550a20 == '\0') && (iVar8 = func_0x04108328(&DAT_0f550a20), iVar8 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    uStack_278 = CONCAT44(uStack_278._4_4_,_DAT_0f550a0c);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    lVar16 = (long)uStack_1d8;
    puVar7 = (undefined8 *)uStack_1e0;
    plVar14[1] = 0;
    plVar14[2] = 0;
    *plVar14 = (long)&UNK_0ef439d0;
    plStack_270 = plVar14 + 3;
    uStack_1e0 = (code *)0x0;
    uStack_1d8 = (code *)0x0;
    plVar14[3] = (long)puVar7;
    plVar14[4] = lVar16;
    plVar14[7] = lStack_1c0;
    plVar14[5] = uStack_1d0;
    plVar14[6] = lStack_1c8;
    uStack_1d0 = 0;
    lStack_1c8 = 0;
    lStack_1c0 = 0;
    plVar14[10] = lStack_1a8;
    plVar14[8] = CONCAT71(uStack_1b7,uStack_1b8);
    plVar14[9] = CONCAT44(uStack_1ac,CONCAT13(uStack_1ad,CONCAT21(uStack_1af,uStack_1b0)));
    uStack_1b8 = 0;
    uStack_1b7 = 0;
    uStack_1b0 = 0;
    uStack_1af = 0;
    uStack_1ad = 0;
    uStack_1ac = 0;
    lStack_1a8 = 0;
    plVar14[0xb] = lStack_1a0;
    plVar14[0xc] = lStack_198;
    plVar14[0xd] = lStack_190;
    lStack_1a0 = 0;
    lStack_198 = 0;
    lStack_190 = 0;
    plVar14[0xe] = lStack_188;
    plVar14[0xf] = lStack_180;
    plVar14[0x10] = lStack_178;
    lStack_188 = 0;
    lStack_180 = 0;
    lStack_178 = 0;
    *(undefined4 *)(plVar14 + 0x11) = uStack_170;
    plVar14[0x12] = lStack_168;
    plVar14[0x13] = lStack_160;
    plVar14[0x14] = lStack_158;
    lStack_168 = 0;
    lStack_160 = 0;
    lStack_158 = 0;
    plVar14[0x17] = lStack_140;
    *(undefined4 *)(plVar14 + 0x15) = (undefined4)uStack_150;
    *(undefined4 *)((long)plVar14 + 0xac) = uStack_150._4_4_;
    *(undefined4 *)(plVar14 + 0x16) = (undefined4)uStack_148;
    *(undefined4 *)((long)plVar14 + 0xb4) = uStack_148._4_4_;
    uStack_150 = 0;
    uStack_148 = 0;
    lStack_140 = 0;
    *(ulong *)((long)plVar14 + 0xc5) = CONCAT17(uStack_12c,CONCAT43(uStack_130,uStack_134._1_3_));
    plVar14[0x18] = CONCAT44(uStack_134,CONCAT22(uStack_136,uStack_138));
    uStack_a8 = 0;
    uStack_a0 = (long *)0x0;
    uStack_268 = plVar14;
    func_0x048afd20(puVar17,&uStack_278);
    plVar14 = uStack_268;
    if (uStack_268 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_268 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*uStack_268 + 0x10))(uStack_268);
        func_0x0412c2d0(plVar14);
      }
    }
    plVar14 = uStack_a0;
    if (uStack_a0 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_a0 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*uStack_a0 + 0x10))(uStack_a0);
        func_0x0412c2d0(plVar14);
      }
    }
    lVar16 = puVar17[2];
    iVar8 = *(int *)((long)puVar17 + 0x1c);
    if (iVar8 == 2) {
      piVar20 = *(int **)(*(long *)(lVar16 + 0x78) + 0x60);
      iVar8 = *piVar20;
      while (iVar8 != *(int *)(puVar17 + 3)) {
        piVar20 = piVar20 + 0x16;
        iVar8 = *piVar20;
      }
      for (; *(long *)(piVar20 + 0xc) != puVar17[1]; piVar20 = *(int **)(piVar20 + 0xe)) {
      }
LAB_0e97d74a:
      piVar20[4] = piVar20[4] | (int)puStack_1f8 << 0x10;
    }
    else {
      if (iVar8 == 1) {
        piVar20 = *(int **)(*(long *)(lVar16 + 0x78) + 0x48);
        iVar8 = *piVar20;
        while (iVar8 != *(int *)(puVar17 + 3)) {
          piVar20 = piVar20 + 0x1a;
          iVar8 = *piVar20;
        }
        goto LAB_0e97d74a;
      }
      if (iVar8 == 0) {
        *(uint *)(lVar16 + 0x18) = *(uint *)(lVar16 + 0x18) | (int)puStack_1f8 << 0x10;
      }
    }
    FUN_048b0bc0(&uStack_1e0);
  }
  if ((DAT_0f767f28 == '\0') && (iVar8 = func_0x04108328(&DAT_0f767f28), iVar8 != 0)) {
    func_0x0ea05410();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f767ea8,0xf53dab8);
    func_0x0410844d(&DAT_0f767f28);
  }
  plVar14 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f767ea8 + 4)) * 8);
  do {
    lVar16 = *plVar14;
    if (lVar16 == -1) goto LAB_0e97d7b0;
    plVar14 = (long *)(*(long *)(param_1 + 0x30) + lVar16 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f767ea8 + 4))
  ;
  if (plVar14 == *(long **)(param_1 + 0x38)) {
LAB_0e97d7b0:
    puVar13 = &DAT_0f767ea8;
    if (iRam000000000f767f08 != -0x2b3da790) goto LAB_0e97d81d;
LAB_0e97d7db:
    lVar16 = *(long *)(puVar13 + 0x68);
    if (lVar16 == 0) goto LAB_0e97d81d;
    bVar26 = (*(byte *)(lVar16 + 8) & 1) != 0;
    lVar10 = lVar16 + 9;
    if (bVar26) {
      lVar10 = *(long *)(lVar16 + 0x18);
    }
    uVar23 = (ulong)(*(byte *)(lVar16 + 8) >> 1);
    if (bVar26) {
      uVar23 = *(ulong *)(lVar16 + 0x10);
    }
    func_0x0ea06200(&uStack_128,param_1,lVar10,uVar23);
    uVar23 = _DAT_0f766370;
  }
  else {
    puVar13 = (undefined *)plVar14[2];
    if (*(int *)(puVar13 + 0x60) == -0x2b3da790) goto LAB_0e97d7db;
LAB_0e97d81d:
    func_0x0ea06200(&uStack_128,param_1,&UNK_01371559,0xd);
    uVar23 = _DAT_0f766370;
  }
  if (cStack_f8 != '\0') {
    _DAT_0f766370 = uVar23;
    return;
  }
  _DAT_0f766370 = uVar23;
  lStack_200 = _DAT_0f766368;
  uStack_48 = _DAT_0f766368;
  if ((uVar23 >> 0x37 & 1) != 0) {
    lVar16 = *(long *)((uVar23 & 0xff00ffffffffffff) - 8);
    lVar10 = lVar16 + 9;
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar10,8);
    if (plVar14 == (long *)0x0 && lVar10 != 0) {
      func_0x0eec74c0(lVar10,8);
    }
    *plVar14 = lVar16;
    func_0x0eee2f00(plVar14 + 1,uVar23 & 0xff00ffffffffffff,lVar16);
    *(undefined1 *)((long)plVar14 + lVar16 + 8) = 0;
    uVar23 = (ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack_38 = 0;
  uVar24 = _DAT_0f766378;
  if ((_DAT_0f766378 & 0x80000000000000) != 0) {
    uVar24 = _DAT_0f766378 & 0xff00ffffffffffff;
    lVar10 = *(long *)(uVar24 - 8);
    lVar16 = lVar10 + 9;
    uStack_40 = uVar23;
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar16,8);
    if (lVar16 != 0 && plVar14 == (long *)0x0) {
      func_0x0eec74c0(lVar16,8);
    }
    *plVar14 = lVar10;
    func_0x0eee2f00(plVar14 + 1,uVar24,lVar10);
    *(undefined1 *)((long)plVar14 + lVar10 + 8) = 0;
    uVar24 = (ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack_204 = uStack_ec;
  uStack_208 = uStack_f0;
  uStack_f0 = 0;
  uStack_ec = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  lVar16 = CONCAT44(uStack_124,uStack_128);
  if ((DAT_0f767f28 == '\0') && (iVar8 = func_0x04108328(&DAT_0f767f28), iVar8 != 0)) {
    func_0x0ea05410();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f767ea8,0xf53dab8);
    func_0x0410844d(&DAT_0f767f28);
  }
  lStack_210 = lVar16 + 0x18;
  plVar14 = (long *)(*(long *)(lVar16 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar16 + 0x20) - *(long *)(lVar16 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f767ea8 + 4)) * 8);
  do {
    lVar10 = *plVar14;
    if (lVar10 == -1) goto LAB_0e97da41;
    plVar14 = (long *)(*(long *)(lVar16 + 0x30) + lVar10 * 0x18);
  } while (*(uint *)(*(long *)(lVar16 + 0x30) + 8 + lVar10 * 0x18) != *(uint *)(_DAT_0f767ea8 + 4));
  if (plVar14 == *(long **)(lVar16 + 0x38)) {
LAB_0e97da41:
    puVar13 = &DAT_0f767ea8;
  }
  else {
    puVar13 = (undefined *)plVar14[2];
  }
  pbVar3 = *(byte **)(CONCAT44(uStack_124,uStack_128) + 0x58);
  for (pbVar21 = *(byte **)(CONCAT44(uStack_124,uStack_128) + 0x50); pbVar21 != pbVar3;
      pbVar21 = pbVar21 + 0x38) {
    bVar2 = *pbVar21;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x24) goto LAB_0e97daca;
    }
    else if (*(long *)(pbVar21 + 8) == 0x24) {
LAB_0e97daca:
      if ((bVar2 & 1) == 0) {
        pbVar22 = pbVar21 + 1;
      }
      else {
        pbVar22 = *(byte **)(pbVar21 + 0x10);
      }
      iVar8 = func_0x0eee3000(&DAT_014518a9,pbVar22,0x24);
      if (iVar8 == 0) break;
    }
  }
  if (pbVar21 != pbVar3) {
    iVar8 = *(int *)(pbVar21 + 0x1c);
    if ((DAT_0f550768 == '\0') && (iVar9 = func_0x04108328(&DAT_0f550768), iVar9 != 0)) {
      func_0x048b46f0(&DAT_0f550750);
      func_0x0410844d(&DAT_0f550768);
    }
    if (iVar8 != _DAT_0f550754) goto LAB_0e97dddf;
  }
  if ((int)uStack_100 == 0) {
    if (((puVar13 == (undefined *)0x0) || (*(int *)(puVar13 + 0x60) != -0x2b3da790)) ||
       (*(long *)(puVar13 + 0x68) == 0)) goto LAB_0e97db90;
    lVar16 = *(long *)(puVar13 + 0x68) + 0x38;
  }
  else {
    uVar4 = uStack_100._4_4_;
    if (puVar13 == (undefined *)0x0) {
      puVar13 = (undefined *)func_0x048aead0(lStack_210);
    }
    puVar13 = (undefined *)func_0x048b0c90(lStack_210,puVar13,uVar4,1);
    if (puVar13 == (undefined *)0x0) {
      puStack_1f8 = (undefined *)0x0;
      puStack_1f0 = (undefined8 *)0x0;
      func_0x048b0d20(&puStack_1f8);
      puVar13 = puStack_1f8;
      if (puStack_1f8 == (undefined *)0x0) goto LAB_0e97db90;
    }
    if ((*(int *)(puVar13 + 0x50) == -0x45dcb126) && (*(long *)(puVar13 + 0x58) != 0)) {
      lVar16 = *(long *)(puVar13 + 0x58) + 0x40;
    }
    else {
LAB_0e97db90:
      lVar16 = 0;
    }
  }
  uStack_278 = 0;
  uStack_268 = (long *)&UNK_048b4ab0;
  pcStack_260 = (code *)&UNK_048b49f0;
  uStack_258 = CONCAT35(uStack_258._5_3_,0x1d33bd9c5);
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  *puVar17 = 0x676e696c6c75430e;
  *(undefined1 *)(puVar17 + 1) = 0;
  *(undefined4 *)((long)puVar17 + 9) = uStack_208;
  *(uint *)((long)puVar17 + 0xc) = CONCAT31(uStack_204,uStack_208._3_1_);
  puVar17[2] = 0;
  uStack_204 = 0;
  uStack_208 = 0;
  *(undefined2 *)(puVar17 + 3) = 0x101;
  puVar17[4] = lStack_200;
  puVar17[5] = uVar23;
  puVar17[6] = uVar24;
  puStack_1f8 = &UNK_048b46e0;
  uStack_1e0 = (code *)&UNK_048b4ab0;
  uStack_1d8 = (code *)&UNK_048b49f0;
  uStack_1d0 = CONCAT35(uStack_1d0._5_3_,0x1d33bd9c5);
  uStack_278 = 0;
  puStack_1f0 = puVar17;
  puVar18 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar18 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar11 = _UNK_014518c1;
  plStack_68 = (long *)0x29;
  uStack_60 = 0x24;
  *(undefined8 *)(puVar18 + 4) = _DAT_014518b9;
  *(undefined8 *)(puVar18 + 6) = uVar11;
  uVar6 = _UNK_014518b5;
  uVar5 = _UNK_014518b1;
  uVar4 = _UNK_014518ad;
  *puVar18 = _DAT_014518a9;
  puVar18[1] = uVar4;
  puVar18[2] = uVar5;
  puVar18[3] = uVar6;
  puVar18[8] = 0x5d797472;
  *(undefined1 *)(puVar18 + 9) = 0;
  uStack_58 = puVar18;
  lVar16 = func_0x048b5060(lVar16,&plStack_68);
  *(undefined **)(lVar16 + 0x20) = &UNK_048b46e0;
  pcVar15 = (code *)&UNK_048b49f0;
  if ((undefined **)(lVar16 + 0x20) != &puStack_1f8) {
    puVar17 = (undefined8 *)(lVar16 + 0x28);
    if (*(code **)(lVar16 + 0x40) == (code *)0x0) {
LAB_0e97dd52:
      puVar7 = puStack_1f0;
      puStack_1f0 = (undefined8 *)0x0;
      *puVar17 = puVar7;
    }
    else {
      (**(code **)(lVar16 + 0x40))(puVar17);
      if (uStack_1d0._4_1_ != '\0') {
        if (uStack_1d0._4_1_ != '\x02') goto LAB_0e97dd52;
        (*uStack_1e0)(5,&puStack_1f0,puVar17);
      }
    }
    *(undefined4 *)(lVar16 + 0x38) = (undefined4)uStack_1e0;
    *(undefined4 *)(lVar16 + 0x3c) = uStack_1e0._4_4_;
    *(undefined4 *)(lVar16 + 0x40) = (undefined4)uStack_1d8;
    *(undefined4 *)(lVar16 + 0x44) = uStack_1d8._4_4_;
    *(undefined4 *)(lVar16 + 0x48) = (undefined4)uStack_1d0;
    *(char *)(lVar16 + 0x4c) = uStack_1d0._4_1_;
    pcVar15 = uStack_1d8;
  }
  if (((ulong)plStack_68 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_58,(ulong)plStack_68 & 0xfffffffffffffffe);
    pcVar15 = uStack_1d8;
  }
  if (pcVar15 != (code *)0x0) {
    (*pcVar15)(&puStack_1f0);
  }
  if (pcStack_260 != (code *)0x0) {
    (*pcStack_260)(&uStack_278);
  }
  uVar24 = 0;
  uVar23 = 0;
LAB_0e97dddf:
  uStack_b8._0_1_ = cStack_f8;
  uStack_c8 = uStack_108;
  uStack_c4 = uStack_104;
  iStack_c0 = (int)uStack_100;
  uStack_bc = uStack_100._4_4_;
  uStack_d8 = uStack_118;
  uStack_d4 = uStack_114;
  uStack_d0 = uStack_110;
  uStack_cc = uStack_10c;
  uStack_e8 = uStack_128;
  uStack_e4 = uStack_124;
  uStack_e0 = uStack_120;
  uStack_dc = uStack_11c;
  func_0x0ea06d60(&puStack_1f8,&uStack_e8,&UNK_011ea907,0xb);
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar14 = (long)&UNK_0f4b82e0;
  if (uStack_1e0 != (code *)0x0) {
    lVar16 = *(long *)uStack_1e0;
    uStack_1e0 = (code *)plVar14;
    (**(code **)(lVar16 + 8))();
    plVar14 = (long *)uStack_1e0;
  }
  uStack_1e0 = (code *)plVar14;
  uStack_278 = CONCAT44(uStack_278._4_4_,uStack_1e8);
  plStack_270 = (long *)0x0;
  uStack_268 = (long *)((ulong)uStack_268 & 0xffffffff00000000);
  pcStack_260 = (code *)0x1;
  uStack_258 = 0;
  puStack_250 = &UNK_0e37bb30;
  puStack_248 = &SUB_048b06d0;
  puStack_240 = &SUB_0e37b820;
  puStack_238 = &UNK_0ea07310;
  puStack_230 = &UNK_0ea074d0;
  uStack_228 = 0;
  uStack_220 = 0;
  plStack_218 = (long *)0x0;
  func_0x048b05a0(puStack_1f0,&uStack_278);
  plVar14 = plStack_218;
  if (plStack_218 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_218 + 1;
    lVar16 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*plStack_218 + 0x10))(plStack_218);
      func_0x0412c2d0(plVar14);
    }
  }
  func_0x0ea07010(&puStack_1f8);
  cStack_78 = (char)uStack_b8;
  uStack_88 = uStack_c8;
  uStack_84 = uStack_c4;
  iStack_80 = iStack_c0;
  uStack_7c = uStack_bc;
  uStack_98 = uStack_d8;
  uStack_94 = uStack_d4;
  uStack_90 = uStack_d0;
  uStack_8c = uStack_cc;
  uStack_a8 = CONCAT44(uStack_e4,uStack_e8);
  uStack_a0 = (long *)CONCAT44(uStack_dc,uStack_e0);
  FUN_048b0bc0(&uStack_1e0);
  func_0x0ea06d60(&puStack_1f8,&uStack_a8,&UNK_0144267d,5);
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar17 = &UNK_0f4d4a90;
  if (uStack_1e0 != (code *)0x0) {
    lVar16 = *(long *)uStack_1e0;
    uStack_1e0 = (code *)puVar17;
    (**(code **)(lVar16 + 8))();
    puVar17 = (undefined8 *)uStack_1e0;
  }
  uStack_1e0 = (code *)puVar17;
  uStack_278 = CONCAT44(uStack_278._4_4_,uStack_1e8);
  plStack_270 = (long *)0x0;
  uStack_268 = (long *)((ulong)uStack_268 & 0xffffffff00000000);
  pcStack_260 = (code *)0x1;
  uStack_258 = 0;
  puStack_250 = &UNK_0ea0ac60;
  puStack_248 = &SUB_048b06d0;
  puStack_240 = &UNK_0ea09730;
  puStack_238 = &UNK_0ea0ad20;
  puStack_230 = &UNK_0ea0af20;
  uStack_228 = 0;
  uStack_220 = 0;
  plStack_218 = (long *)0x0;
  func_0x048b05a0(puStack_1f0,&uStack_278);
  plVar14 = plStack_218;
  if (plStack_218 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_218 + 1;
    lVar16 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*plStack_218 + 0x10))(plStack_218);
      func_0x0412c2d0(plVar14);
    }
  }
  func_0x0ea07010(&puStack_1f8);
  FUN_048b0bc0(&uStack_1e0);
  if ((uVar24 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uVar24 & 0xff00ffffffffffff) - 8);
  }
  if ((uVar23 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uVar23 & 0xff00ffffffffffff) - 8);
  }
  if ((uStack_38 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_38 & 0xff00ffffffffffff) - 8);
  }
  uStack_38 = 0;
  if ((uStack_40 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_40 & 0xff00ffffffffffff) - 8);
  }
  return;
}



/* ---- referenced strings ----
 * 0x14518a9  [cereal:cereal_root_schema_property]
 * 0x14518b9  oot_schema_property]
 */
