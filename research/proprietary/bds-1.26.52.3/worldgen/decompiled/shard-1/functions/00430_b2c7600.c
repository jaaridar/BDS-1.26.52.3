/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb3c7600 (ELF vaddr 0xb2c7600)
 * Label: caller-of-callee
 * Body:  [[0b3c7600, 0b3cbd1d] [0b3cbdc7, 0b3cbdf4]]
 * Ghidra: FUN_0b3c7600
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0b3c7600(long param_1,undefined4 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  long *plVar5;
  code *pcVar6;
  char cVar7;
  char cVar8;
  ushort uVar9;
  int iVar10;
  int iVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 *puVar16;
  undefined **ppuVar17;
  long extraout_RDX;
  ulong uVar18;
  long extraout_RDX_00;
  long extraout_RDX_01;
  long extraout_RDX_02;
  long extraout_RDX_03;
  long lVar19;
  long extraout_RDX_04;
  long extraout_RDX_05;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  long *plVar24;
  long lVar25;
  long *unaff_R13;
  uint uVar26;
  undefined ***pppuVar27;
  undefined4 *puVar28;
  undefined8 *puVar29;
  int iVar30;
  bool bVar31;
  float fVar32;
  undefined4 uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [12];
  undefined4 uStack_15c;
  undefined8 uStack_158;
  long *plStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  long *plStack_138;
  undefined **ppuStack_130;
  undefined *puStack_128;
  code *pcStack_120;
  undefined4 uStack_118;
  undefined1 uStack_114;
  long lStack_108;
  long lStack_100;
  long lStack_f0;
  long lStack_e8;
  long lStack_d8;
  long lStack_d0;
  long lStack_c0;
  long lStack_b8;
  long lStack_a8;
  long lStack_a0;
  long lStack_90;
  long lStack_88;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_140 = CONCAT44(uStack_140._4_4_,param_2);
  lVar25 = *(long *)(*(long *)(param_1 + 0x2a8) + 0x20);
  if (*(char *)(param_1 + 0x1ac) == '\0') {
    puVar29 = *(undefined8 **)(param_1 + 0x208);
    *(undefined4 *)((long)puVar29 + 0x14) = *(undefined4 *)(puVar29 + 1);
    *(undefined8 *)((long)puVar29 + 0xc) = *puVar29;
    (*(undefined8 **)(param_1 + 0x218))[1] = **(undefined8 **)(param_1 + 0x218);
    *(undefined1 *)(param_1 + 0x251) = 0;
    uVar26 = *(uint *)(param_1 + 0x18);
    pppuVar27 = (undefined ***)(ulong)uVar26;
    plVar12 = (long *)func_0x06d90dd0(*(undefined8 *)(param_1 + 0x10),0x4434e84f);
    uVar18 = (ulong)((uVar26 & 0x3ffff) >> 0xb);
    if ((uVar18 < (ulong)(plVar12[2] - plVar12[1] >> 3)) &&
       (lVar13 = *(long *)(plVar12[1] + uVar18 * 8), lVar13 != 0)) {
      uVar20 = *(uint *)(lVar13 + (ulong)(uVar26 & 0x7ff) * 4);
      uVar26 = uVar26 & 0xfffc0000 ^ uVar20;
      pppuVar27 = (undefined ***)(ulong)uVar26;
      if (uVar26 < 0x3ffff) {
        (**(code **)(*plVar12 + 0x10))(plVar12,plVar12 + 4,(uVar20 & 0x3ffff) + 1);
      }
    }
    uVar14 = _UNK_014e1eb8;
    *(undefined8 *)(param_1 + 0x298) = _DAT_014e1eb0;
    *(undefined8 *)(param_1 + 0x2a0) = uVar14;
    lVar13 = *(long *)(param_1 + 0x10);
    uVar26 = *(uint *)(param_1 + 0x18);
    plVar12 = (long *)(*(long *)(lVar13 + 0x38) +
                      (ulong)(((uint)(*(int *)(lVar13 + 0x40) - (int)*(long *)(lVar13 + 0x38)) >> 3)
                              - 1 & 0x98062e) * 8);
    do {
      if (*plVar12 == -1) {
        plVar24 = *(long **)(lVar13 + 0x58);
        plVar12 = plVar24;
        goto LAB_0b3c7738;
      }
      lVar22 = *plVar12 * 0x20;
      plVar12 = (long *)(*(long *)(lVar13 + 0x50) + lVar22);
    } while (*(int *)(*(long *)(lVar13 + 0x50) + 8 + lVar22) != 0x98062e);
    plVar24 = *(long **)(lVar13 + 0x58);
LAB_0b3c7738:
    if (plVar12 == plVar24) goto LAB_0b3cb5cb;
    lVar13 = plVar12[2];
    if (lVar13 == 0) goto LAB_0b3cb5cb;
    uVar18 = (ulong)((uVar26 & 0x3ffff) >> 0xb);
    if ((ulong)(*(long *)(lVar13 + 0x10) - *(long *)(lVar13 + 8) >> 3) <= uVar18) goto LAB_0b3cb5cb;
    lVar22 = *(long *)(*(long *)(lVar13 + 8) + uVar18 * 8);
    if (lVar22 == 0) goto LAB_0b3cb5cb;
    uVar20 = *(uint *)(lVar22 + (ulong)(uVar26 & 0x7ff) * 4);
    if (0x3fffe < (uVar26 & 0xfffc0000 ^ uVar20)) goto LAB_0b3cb5cb;
    lVar13 = *(long *)(*(long *)(lVar13 + 0x50) + (ulong)(uVar20 >> 4 & 0x3ff8));
    if (lVar13 == 0) goto LAB_0b3cb5cb;
    uVar18 = (ulong)((uVar20 & 0x7f) << 5);
    puVar29 = (undefined8 *)(lVar13 + 0x10 + uVar18);
    *puVar29 = 0;
    puVar29[1] = 0;
    puVar29 = (undefined8 *)(lVar13 + uVar18);
    *puVar29 = 0;
    puVar29[1] = 0;
    *(undefined4 *)(param_1 + 0x198) = 0x14;
    *(undefined8 *)(param_1 + 800) = 0xffffffff;
  }
  uVar26 = *(uint *)(param_1 + 0x18);
  lVar13 = func_0x0b45f560(*(undefined8 *)(param_1 + 0x10),0x89abb47b);
  uVar18 = (ulong)((uVar26 & 0x3ffff) >> 0xb);
  if ((((ulong)(*(long *)(lVar13 + 0x10) - *(long *)(lVar13 + 8) >> 3) <= uVar18) ||
      (lVar22 = *(long *)(*(long *)(lVar13 + 8) + uVar18 * 8), lVar22 == 0)) ||
     (0x3fffe < (uVar26 & 0xfffc0000 ^ *(uint *)(lVar22 + (ulong)(uVar26 & 0x7ff) * 4)))) {
    plStack_138 = (long *)CONCAT44(plStack_138._4_4_,uVar26);
    func_0x0b4602d0(lVar13,&plStack_138,0);
  }
  if ((*(long *)(param_1 + 0x88) != 0) && (*(long *)(*(long *)(param_1 + 0x88) + 0xe0) != 0)) {
    lVar13 = *(long *)(param_1 + 0x1d0);
    if ((*(long *)(lVar13 + 0x310) == 0) &&
       (cVar7 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013b6dd1),
       cVar7 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((**(char **)(lVar13 + 0x310) == '\0') &&
       (cVar7 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013b6dd1),
       cVar7 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    (**(code **)(**(long **)(lVar13 + 800) + 0x10))(&plStack_138);
    if (plStack_138 != (long *)0x0) {
      lVar13 = *(long *)(param_1 + 0x2a8);
      lVar22 = *(long *)(lVar13 + 0x80);
      lVar23 = *(long *)(lVar13 + 0x88);
      if (lVar22 != lVar23) {
        do {
          (**(code **)(**(long **)(lVar22 + 0x10) + 8))(*(long **)(lVar22 + 0x10),param_1 + 8);
          lVar22 = lVar22 + 0x20;
        } while (lVar22 != lVar23);
        lVar13 = *(long *)(param_1 + 0x2a8);
      }
      lVar22 = *(long *)(lVar13 + 0x50);
      for (lVar13 = *(long *)(lVar13 + 0x48); lVar13 != lVar22; lVar13 = lVar13 + 0x20) {
        (**(code **)**(undefined8 **)(lVar13 + 0x10))(*(undefined8 **)(lVar13 + 0x10),param_1 + 8);
      }
    }
    ppuVar17 = ppuStack_130;
    if (ppuStack_130 != (undefined **)0x0) {
      LOCK();
      ppuVar1 = ppuStack_130 + 1;
      puVar2 = *ppuVar1;
      *ppuVar1 = *ppuVar1 + -1;
      UNLOCK();
      if (puVar2 == (undefined *)0x0) {
        (**(code **)(*ppuStack_130 + 0x10))(ppuStack_130);
        func_0x0412c2d0(ppuVar17);
      }
    }
  }
  func_0x0b3cbf10(param_1);
  if (*(long *)(lVar25 + 0x348) != 0) {
    lVar13 = *(long *)(*(long *)(param_1 + 0x90) + 0x348);
    plVar24 = *(long **)(param_1 + 0x10);
    uVar26 = *(uint *)(param_1 + 0x18);
    uStack_15c = 0x8d862070;
    plVar12 = (long *)(plVar24[7] +
                      (ulong)((int)((ulong)(plVar24[8] - plVar24[7]) >> 3) - 1U & 0x8d862070) * 8);
    do {
      if (*plVar12 == -1) goto LAB_0b3c7a4c;
      lVar22 = *plVar12 * 0x20;
      plVar12 = (long *)(plVar24[10] + lVar22);
    } while (*(int *)(plVar24[10] + 8 + lVar22) != -0x7279df90);
    if (plVar12 == (long *)plVar24[0xb]) {
LAB_0b3c7a4c:
      plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (plVar12 == (long *)0x0) {
        func_0x0eec74c0(0x80,0);
      }
      plVar12[1] = 0;
      plVar12[2] = 0;
      *plVar12 = (long)&UNK_0f2a8450;
      if ((DAT_0f6b30d0 == '\0') && (iVar10 = func_0x04108328(&DAT_0f6b30d0), iVar10 != 0)) {
        func_0x0b45a220();
        func_0x0410844d(&DAT_0f6b30d0);
      }
      uStack_158 = plVar12 + 3;
      plVar12[8] = 0;
      plVar12[9] = 0;
      plVar12[6] = 0;
      plVar12[7] = 0;
      plVar12[4] = 0;
      plVar12[5] = 0;
      plVar12[10] = (long)&DAT_0f6b30b8;
      *(undefined1 *)(plVar12 + 0xb) = 1;
      plVar12[0xc] = 0x3ffff;
      plVar12[3] = (long)&UNK_0f2a84a0;
      plVar12[0xd] = 0;
      plVar12[0xe] = 0;
      plVar12[0xf] = 0;
      plStack_150 = plVar12;
      func_0x049303a0(plVar24 + 7,&uStack_15c,&uStack_158);
      puStack_128 = &UNK_049308c0;
      uStack_118 = 0xf987f04e;
      pcStack_120 = (code *)0x0;
      uStack_114 = 3;
      plStack_138 = plVar24;
      (**(code **)(*uStack_158 + 0x28))(uStack_158,&plStack_138);
      if (pcStack_120 != (code *)0x0) {
        (*pcStack_120)(&plStack_138);
      }
      plVar24 = plStack_150;
      plVar12 = uStack_158;
      if (plStack_150 != (long *)0x0) {
        LOCK();
        plVar5 = plStack_150 + 1;
        lVar22 = *plVar5;
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (lVar22 == 0) {
          (**(code **)(*plStack_150 + 0x10))(plStack_150);
          func_0x0412c2d0(plVar24);
        }
      }
    }
    else {
      plVar12 = (long *)plVar12[2];
    }
    uVar18 = (ulong)((uVar26 & 0x3ffff) >> 0xb);
    lVar22 = plVar12[1];
    uVar21 = plVar12[2] - lVar22 >> 3;
    if (lVar13 == 0) {
      if (((uVar18 < uVar21) && (lVar13 = *(long *)(lVar22 + uVar18 * 8), lVar13 != 0)) &&
         (uVar20 = *(uint *)(lVar13 + (ulong)(uVar26 & 0x7ff) * 4),
         (uVar26 & 0xfffc0000 ^ uVar20) < 0x3ffff)) {
        (**(code **)(*plVar12 + 0x10))(plVar12,plVar12 + 4,(uVar20 & 0x3ffff) + 1);
      }
    }
    else if (((uVar21 <= uVar18) || (lVar13 = *(long *)(lVar22 + uVar18 * 8), lVar13 == 0)) ||
            (0x3fffe < (uVar26 & 0xfffc0000 ^ *(uint *)(lVar13 + (ulong)(uVar26 & 0x7ff) * 4)))) {
      func_0x0b45a6d0(plVar12,uVar26,0);
    }
  }
  if (*(long *)(lVar25 + 0x250) != 0) {
    lVar13 = *(long *)(*(long *)(param_1 + 0x90) + 0x250);
    plVar24 = *(long **)(param_1 + 0x10);
    uVar26 = *(uint *)(param_1 + 0x18);
    uStack_15c = 0x7fee0a2e;
    plVar12 = (long *)(plVar24[7] +
                      (ulong)((int)((ulong)(plVar24[8] - plVar24[7]) >> 3) - 1U & 0x7fee0a2e) * 8);
    do {
      if (*plVar12 == -1) goto LAB_0b3c7cac;
      lVar22 = *plVar12 * 0x20;
      plVar12 = (long *)(plVar24[10] + lVar22);
    } while (*(int *)(plVar24[10] + 8 + lVar22) != 0x7fee0a2e);
    if (plVar12 == (long *)plVar24[0xb]) {
LAB_0b3c7cac:
      plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x68);
      if (plVar12 == (long *)0x0) {
        func_0x0eec74c0(0x68,0);
      }
      plVar12[1] = 0;
      plVar12[2] = 0;
      *plVar12 = (long)&UNK_0f2a8520;
      if ((DAT_0f6b3100 == '\0') && (iVar10 = func_0x04108328(&DAT_0f6b3100), iVar10 != 0)) {
        func_0x0b45aa60();
        func_0x0410844d(&DAT_0f6b3100);
      }
      uStack_158 = plVar12 + 3;
      plVar12[8] = 0;
      plVar12[9] = 0;
      plVar12[6] = 0;
      plVar12[7] = 0;
      plVar12[4] = 0;
      plVar12[5] = 0;
      plVar12[10] = (long)&DAT_0f6b30e8;
      *(undefined1 *)(plVar12 + 0xb) = 0;
      plVar12[0xc] = 0x3ffff;
      plVar12[3] = (long)&UNK_0f2a8570;
      plStack_150 = plVar12;
      func_0x049303a0(plVar24 + 7,&uStack_15c,&uStack_158);
      puStack_128 = &UNK_049308c0;
      uStack_118 = 0xf987f04e;
      pcStack_120 = (code *)0x0;
      uStack_114 = 3;
      plStack_138 = plVar24;
      (**(code **)(*uStack_158 + 0x28))(uStack_158,&plStack_138);
      if (pcStack_120 != (code *)0x0) {
        (*pcStack_120)(&plStack_138);
      }
      plVar24 = plStack_150;
      plVar12 = uStack_158;
      if (plStack_150 != (long *)0x0) {
        LOCK();
        plVar5 = plStack_150 + 1;
        lVar22 = *plVar5;
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (lVar22 == 0) {
          (**(code **)(*plStack_150 + 0x10))(plStack_150);
          func_0x0412c2d0(plVar24);
        }
      }
    }
    else {
      plVar12 = (long *)plVar12[2];
    }
    uVar18 = (ulong)((uVar26 & 0x3ffff) >> 0xb);
    lVar22 = plVar12[1];
    uVar21 = plVar12[2] - lVar22 >> 3;
    if (lVar13 == 0) {
      if (((uVar18 < uVar21) && (lVar13 = *(long *)(lVar22 + uVar18 * 8), lVar13 != 0)) &&
         (uVar20 = *(uint *)(lVar13 + (ulong)(uVar26 & 0x7ff) * 4),
         (uVar26 & 0xfffc0000 ^ uVar20) < 0x3ffff)) {
        (**(code **)(*plVar12 + 0x10))(plVar12,plVar12 + 4,(uVar20 & 0x3ffff) + 1);
      }
    }
    else if (((uVar21 <= uVar18) || (lVar13 = *(long *)(lVar22 + uVar18 * 8), lVar13 == 0)) ||
            (0x3fffe < (uVar26 & 0xfffc0000 ^ *(uint *)(lVar13 + (ulong)(uVar26 & 0x7ff) * 4)))) {
      plStack_138 = (long *)CONCAT44(plStack_138._4_4_,uVar26);
      func_0x0492f360(plVar12,&plStack_138,0,0);
    }
  }
  if (*(long *)(lVar25 + 0x300) != 0) {
    lVar13 = *(long *)(*(long *)(param_1 + 0x90) + 0x300);
    uVar26 = *(uint *)(param_1 + 0x18);
    plVar12 = (long *)func_0x0b45aae0(*(undefined8 *)(param_1 + 0x10),0xfad8d24f);
    uVar18 = (ulong)((uVar26 & 0x3ffff) >> 0xb);
    lVar22 = plVar12[1];
    uVar21 = plVar12[2] - lVar22 >> 3;
    if (lVar13 == 0) {
      if (((uVar18 < uVar21) && (lVar13 = *(long *)(lVar22 + uVar18 * 8), lVar13 != 0)) &&
         (uVar20 = *(uint *)(lVar13 + (ulong)(uVar26 & 0x7ff) * 4),
         (uVar26 & 0xfffc0000 ^ uVar20) < 0x3ffff)) {
        (**(code **)(*plVar12 + 0x10))(plVar12,plVar12 + 4,(uVar20 & 0x3ffff) + 1);
      }
    }
    else if (((uVar21 <= uVar18) || (lVar13 = *(long *)(lVar22 + uVar18 * 8), lVar13 == 0)) ||
            (0x3fffe < (uVar26 & 0xfffc0000 ^ *(uint *)(lVar13 + (ulong)(uVar26 & 0x7ff) * 4)))) {
      plStack_138 = (long *)CONCAT44(plStack_138._4_4_,uVar26);
      func_0x0492f360(plVar12,&plStack_138,0,0);
    }
  }
  lVar13 = *(long *)(param_1 + 0x90);
  if (*(long *)(lVar25 + 0x308) != 0) {
    lVar13 = *(long *)(lVar13 + 0x308);
    plVar24 = *(long **)(param_1 + 0x10);
    uVar26 = *(uint *)(param_1 + 0x18);
    uStack_15c = 0xec4ac350;
    plVar12 = (long *)(plVar24[7] +
                      (ulong)((int)((ulong)(plVar24[8] - plVar24[7]) >> 3) - 1U & 0xec4ac350) * 8);
    do {
      if (*plVar12 == -1) goto LAB_0b3c7fed;
      lVar22 = *plVar12 * 0x20;
      plVar12 = (long *)(plVar24[10] + lVar22);
    } while (*(int *)(plVar24[10] + 8 + lVar22) != -0x13b53cb0);
    if (plVar12 == (long *)plVar24[0xb]) {
LAB_0b3c7fed:
      plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (plVar12 == (long *)0x0) {
        func_0x0eec74c0(0x80,0);
      }
      plVar12[1] = 0;
      plVar12[2] = 0;
      *plVar12 = (long)&UNK_0f2a86c0;
      if ((DAT_0f6b3160 == '\0') && (iVar10 = func_0x04108328(&DAT_0f6b3160), iVar10 != 0)) {
        func_0x0b45b650();
        func_0x0410844d(&DAT_0f6b3160);
      }
      uStack_158 = plVar12 + 3;
      plVar12[8] = 0;
      plVar12[9] = 0;
      plVar12[6] = 0;
      plVar12[7] = 0;
      plVar12[4] = 0;
      plVar12[5] = 0;
      plVar12[10] = (long)&DAT_0f6b3148;
      *(undefined1 *)(plVar12 + 0xb) = 1;
      plVar12[0xc] = 0x3ffff;
      plVar12[3] = (long)&UNK_0f2a8710;
      plVar12[0xd] = 0;
      plVar12[0xe] = 0;
      plVar12[0xf] = 0;
      plStack_150 = plVar12;
      func_0x049303a0(plVar24 + 7,&uStack_15c,&uStack_158);
      puStack_128 = &UNK_049308c0;
      uStack_118 = 0xf987f04e;
      pcStack_120 = (code *)0x0;
      uStack_114 = 3;
      plStack_138 = plVar24;
      (**(code **)(*uStack_158 + 0x28))(uStack_158,&plStack_138);
      if (pcStack_120 != (code *)0x0) {
        (*pcStack_120)(&plStack_138);
      }
      plVar24 = plStack_150;
      plVar12 = uStack_158;
      if (plStack_150 != (long *)0x0) {
        LOCK();
        plVar5 = plStack_150 + 1;
        lVar22 = *plVar5;
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (lVar22 == 0) {
          (**(code **)(*plStack_150 + 0x10))(plStack_150);
          func_0x0412c2d0(plVar24);
        }
      }
    }
    else {
      plVar12 = (long *)plVar12[2];
    }
    uVar18 = (ulong)((uVar26 & 0x3ffff) >> 0xb);
    lVar22 = plVar12[1];
    uVar21 = plVar12[2] - lVar22 >> 3;
    if (lVar13 == 0) {
      if (((uVar18 < uVar21) && (lVar13 = *(long *)(lVar22 + uVar18 * 8), lVar13 != 0)) &&
         (uVar20 = *(uint *)(lVar13 + (ulong)(uVar26 & 0x7ff) * 4),
         (uVar26 & 0xfffc0000 ^ uVar20) < 0x3ffff)) {
        (**(code **)(*plVar12 + 0x10))(plVar12,plVar12 + 4,(uVar20 & 0x3ffff) + 1);
      }
    }
    else {
      if (((uVar18 < uVar21) && (lVar13 = *(long *)(lVar22 + uVar18 * 8), lVar13 != 0)) &&
         (uVar20 = *(uint *)(lVar13 + (ulong)(uVar26 & 0x7ff) * 4),
         (uVar26 & 0xfffc0000 ^ uVar20) < 0x3ffff)) {
        uVar18 = (ulong)(uVar20 & 0x3ffff);
      }
      else {
        func_0x0b45bd00(plVar12,uVar26,0);
        uVar18 = extraout_RDX - 1;
      }
      func_0x0727e390((ulong)(((uint)uVar18 & 0x7f) * 0x28) +
                      *(long *)(plVar12[10] + (uVar18 >> 7) * 8),param_1);
    }
    lVar13 = *(long *)(param_1 + 0x90);
  }
  if (*(long *)(lVar25 + 0x310) != 0) {
    lVar22 = *(long *)(param_1 + 0x10);
    uVar26 = *(uint *)(param_1 + 0x18);
    if (*(long *)(lVar13 + 0x310) == 0) {
      plVar12 = (long *)(*(long *)(lVar22 + 0x38) +
                        (ulong)((int)((ulong)(*(long *)(lVar22 + 0x40) - *(long *)(lVar22 + 0x38))
                                     >> 3) - 1U & 0x94488499) * 8);
      do {
        if (*plVar12 == -1) goto LAB_0b3c83bb;
        lVar13 = *plVar12 * 0x20;
        plVar12 = (long *)(*(long *)(lVar22 + 0x50) + lVar13);
      } while (*(int *)(*(long *)(lVar22 + 0x50) + 8 + lVar13) != -0x6bb77b67);
      if ((plVar12 != *(long **)(lVar22 + 0x58)) && (lVar13 = plVar12[2], lVar13 != 0)) {
        uVar18 = (ulong)((uVar26 & 0x3ffff) >> 0xb);
        if (((uVar18 < (ulong)(*(long *)(lVar13 + 0x10) - *(long *)(lVar13 + 8) >> 3)) &&
            ((lVar23 = *(long *)(*(long *)(lVar13 + 8) + uVar18 * 8), lVar23 != 0 &&
             (uVar20 = *(uint *)(lVar23 + (ulong)(uVar26 & 0x7ff) * 4),
             (uVar26 & 0xfffc0000 ^ uVar20) < 0x3ffff)))) &&
           (lVar13 = *(long *)(*(long *)(lVar13 + 0x50) + (ulong)(uVar20 >> 4 & 0x3ff8)),
           lVar13 != 0)) {
          func_0x06e6de60(lVar13 + (ulong)(uVar20 & 0x7f) * 0x2f8,param_1 + 8);
          lVar22 = *(long *)(param_1 + 0x10);
          uVar26 = *(uint *)(param_1 + 0x18);
        }
      }
LAB_0b3c83bb:
      plVar12 = (long *)func_0x07531940(lVar22,0x94488499);
      uVar18 = (ulong)((uVar26 & 0x3ffff) >> 0xb);
      if (((uVar18 < (ulong)(plVar12[2] - plVar12[1] >> 3)) &&
          (lVar13 = *(long *)(plVar12[1] + uVar18 * 8), lVar13 != 0)) &&
         (uVar20 = *(uint *)(lVar13 + (ulong)(uVar26 & 0x7ff) * 4),
         (uVar26 & 0xfffc0000 ^ uVar20) < 0x3ffff)) {
        (**(code **)(*plVar12 + 0x10))(plVar12,plVar12 + 4,(uVar20 & 0x3ffff) + 1);
      }
    }
    else {
      lVar13 = func_0x07531940(lVar22,0x94488499);
      uVar18 = (ulong)((uVar26 & 0x3ffff) >> 0xb);
      if (((uVar18 < (ulong)(*(long *)(lVar13 + 0x10) - *(long *)(lVar13 + 8) >> 3)) &&
          (lVar22 = *(long *)(*(long *)(lVar13 + 8) + uVar18 * 8), lVar22 != 0)) &&
         (uVar20 = *(uint *)(lVar22 + (ulong)(uVar26 & 0x7ff) * 4),
         (uVar26 & 0xfffc0000 ^ uVar20) < 0x3ffff)) {
        lVar13 = (ulong)(uVar20 & 0x7f) * 0x2f8 +
                 *(long *)(*(long *)(lVar13 + 0x50) + (ulong)((uVar20 & 0x3ff80) >> 4));
      }
      else {
        plStack_138 = (long *)CONCAT44(plStack_138._4_4_,uVar26);
        func_0x07533170(lVar13,&plStack_138,0);
        lVar13 = (ulong)((uint)(extraout_RDX_00 - 1U) & 0x7f) * 0x2f8 +
                 *(long *)(*(long *)(lVar13 + 0x50) + (extraout_RDX_00 - 1U >> 7) * 8);
      }
      func_0x06e6d1e0(lVar13,param_1);
    }
    if (*(long *)(lVar25 + 0x310) != 0) {
      lVar13 = *(long *)(*(long *)(param_1 + 0x90) + 0x310);
      plVar24 = *(long **)(param_1 + 0x10);
      uVar26 = *(uint *)(param_1 + 0x18);
      uStack_15c = 0x6b353f83;
      plVar12 = (long *)(plVar24[7] +
                        (ulong)((int)((ulong)(plVar24[8] - plVar24[7]) >> 3) - 1U & 0x6b353f83) * 8)
      ;
      do {
        if (*plVar12 == -1) goto LAB_0b3c84ac;
        lVar22 = *plVar12 * 0x20;
        plVar12 = (long *)(plVar24[10] + lVar22);
      } while (*(int *)(plVar24[10] + 8 + lVar22) != 0x6b353f83);
      if (plVar12 == (long *)plVar24[0xb]) {
LAB_0b3c84ac:
        plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x68);
        if (plVar12 == (long *)0x0) {
          func_0x0eec74c0(0x68,0);
        }
        plVar12[1] = 0;
        plVar12[2] = 0;
        *plVar12 = (long)&UNK_0f2a8790;
        if ((DAT_0f6b3190 == '\0') && (iVar10 = func_0x04108328(&DAT_0f6b3190), iVar10 != 0)) {
          func_0x0b45c090();
          func_0x0410844d(&DAT_0f6b3190);
        }
        uStack_158 = plVar12 + 3;
        plVar12[8] = 0;
        plVar12[9] = 0;
        plVar12[6] = 0;
        plVar12[7] = 0;
        plVar12[4] = 0;
        plVar12[5] = 0;
        plVar12[10] = (long)&DAT_0f6b3178;
        *(undefined1 *)(plVar12 + 0xb) = 0;
        plVar12[0xc] = 0x3ffff;
        plVar12[3] = (long)&UNK_0f2a87e0;
        plStack_150 = plVar12;
        func_0x049303a0(plVar24 + 7,&uStack_15c,&uStack_158);
        puStack_128 = &UNK_049308c0;
        uStack_118 = 0xf987f04e;
        pcStack_120 = (code *)0x0;
        uStack_114 = 3;
        plStack_138 = plVar24;
        (**(code **)(*uStack_158 + 0x28))(uStack_158,&plStack_138);
        if (pcStack_120 != (code *)0x0) {
          (*pcStack_120)(&plStack_138);
        }
        plVar24 = plStack_150;
        plVar12 = uStack_158;
        if (plStack_150 != (long *)0x0) {
          LOCK();
          plVar5 = plStack_150 + 1;
          lVar22 = *plVar5;
          *plVar5 = *plVar5 + -1;
          UNLOCK();
          if (lVar22 == 0) {
            (**(code **)(*plStack_150 + 0x10))(plStack_150);
            func_0x0412c2d0(plVar24);
          }
        }
      }
      else {
        plVar12 = (long *)plVar12[2];
      }
      uVar18 = (ulong)((uVar26 & 0x3ffff) >> 0xb);
      lVar22 = plVar12[1];
      uVar21 = plVar12[2] - lVar22 >> 3;
      if (lVar13 == 0) {
        if (((uVar18 < uVar21) && (lVar13 = *(long *)(lVar22 + uVar18 * 8), lVar13 != 0)) &&
           (uVar20 = *(uint *)(lVar13 + (ulong)(uVar26 & 0x7ff) * 4),
           (uVar26 & 0xfffc0000 ^ uVar20) < 0x3ffff)) {
          (**(code **)(*plVar12 + 0x10))(plVar12,plVar12 + 4,(uVar20 & 0x3ffff) + 1);
        }
      }
      else if (((uVar21 <= uVar18) || (lVar13 = *(long *)(lVar22 + uVar18 * 8), lVar13 == 0)) ||
              (0x3fffe < (uVar26 & 0xfffc0000 ^ *(uint *)(lVar13 + (ulong)(uVar26 & 0x7ff) * 4)))) {
        plStack_138 = (long *)CONCAT44(plStack_138._4_4_,uVar26);
        func_0x0492f360(plVar12,&plStack_138,0,0);
      }
    }
  }
  lVar13 = *(long *)(param_1 + 0x90);
  if (*(long *)(lVar25 + 0x330) != 0) {
    lVar13 = *(long *)(lVar13 + 0x330);
    uVar26 = *(uint *)(param_1 + 0x18);
    plVar12 = (long *)func_0x07485ec0(*(undefined8 *)(param_1 + 0x10),0x2173960d);
    uVar18 = (ulong)((uVar26 & 0x3ffff) >> 0xb);
    lVar22 = plVar12[1];
    uVar21 = plVar12[2] - lVar22 >> 3;
    if (lVar13 == 0) {
      if (((uVar18 < uVar21) && (lVar13 = *(long *)(lVar22 + uVar18 * 8), lVar13 != 0)) &&
         (uVar20 = *(uint *)(lVar13 + (ulong)(uVar26 & 0x7ff) * 4),
         (uVar26 & 0xfffc0000 ^ uVar20) < 0x3ffff)) {
        (**(code **)(*plVar12 + 0x10))(plVar12,plVar12 + 4,(uVar20 & 0x3ffff) + 1);
      }
    }
    else {
      if (((uVar18 < uVar21) && (lVar13 = *(long *)(lVar22 + uVar18 * 8), lVar13 != 0)) &&
         (uVar20 = *(uint *)(lVar13 + (ulong)(uVar26 & 0x7ff) * 4),
         (uVar26 & 0xfffc0000 ^ uVar20) < 0x3ffff)) {
        lVar13 = (ulong)(uVar20 & 0x7f) * 0x70 +
                 *(long *)(plVar12[10] + (ulong)((uVar20 & 0x3ff80) >> 4));
      }
      else {
        plStack_138 = (long *)CONCAT44(plStack_138._4_4_,uVar26);
        func_0x07486e10(plVar12,&plStack_138,0);
        lVar13 = (ulong)((uint)(extraout_RDX_01 - 1U) & 0x7f) * 0x70 +
                 *(long *)(plVar12[10] + (extraout_RDX_01 - 1U >> 7) * 8);
      }
      func_0x06ea9b50(lVar13,param_1);
    }
    lVar13 = *(long *)(param_1 + 0x90);
  }
  if (*(long *)(lVar25 + 0x338) != 0) {
    lVar13 = *(long *)(lVar13 + 0x338);
    uVar26 = *(uint *)(param_1 + 0x18);
    plVar12 = (long *)func_0x0760ce20(*(undefined8 *)(param_1 + 0x10),0x88f8eb8f);
    uVar18 = (ulong)((uVar26 & 0x3ffff) >> 0xb);
    lVar22 = plVar12[1];
    uVar21 = plVar12[2] - lVar22 >> 3;
    if (lVar13 == 0) {
      if (((uVar18 < uVar21) && (lVar13 = *(long *)(lVar22 + uVar18 * 8), lVar13 != 0)) &&
         (uVar20 = *(uint *)(lVar13 + (ulong)(uVar26 & 0x7ff) * 4),
         (uVar26 & 0xfffc0000 ^ uVar20) < 0x3ffff)) {
        (**(code **)(*plVar12 + 0x10))(plVar12,plVar12 + 4,(uVar20 & 0x3ffff) + 1);
      }
    }
    else {
      if (((uVar18 < uVar21) && (lVar13 = *(long *)(lVar22 + uVar18 * 8), lVar13 != 0)) &&
         (uVar20 = *(uint *)(lVar13 + (ulong)(uVar26 & 0x7ff) * 4),
         (uVar26 & 0xfffc0000 ^ uVar20) < 0x3ffff)) {
        puVar28 = (undefined4 *)
                  ((ulong)((uVar20 & 0x7f) << 5) +
                  *(long *)(plVar12[10] + (ulong)((uVar20 & 0x3ff80) >> 4)));
      }
      else {
        plStack_138 = (long *)CONCAT44(plStack_138._4_4_,uVar26);
        func_0x0760dcc0(plVar12,&plStack_138,0);
        puVar28 = (undefined4 *)
                  ((ulong)(((uint)(extraout_RDX_02 - 1U) & 0x7f) << 5) +
                  *(long *)(plVar12[10] + (extraout_RDX_02 - 1U >> 7) * 8));
      }
      uVar26 = *(uint *)(param_1 + 0x18);
      lVar13 = func_0x0b45aae0(*(undefined8 *)(param_1 + 0x10),0xfad8d24f);
      uVar18 = (ulong)((uVar26 & 0x3ffff) >> 0xb);
      if ((((ulong)(*(long *)(lVar13 + 0x10) - *(long *)(lVar13 + 8) >> 3) <= uVar18) ||
          (lVar22 = *(long *)(*(long *)(lVar13 + 8) + uVar18 * 8), lVar22 == 0)) ||
         (0x3fffe < (uVar26 & 0xfffc0000 ^ *(uint *)(lVar22 + (ulong)(uVar26 & 0x7ff) * 4)))) {
        plStack_138 = (long *)CONCAT44(plStack_138._4_4_,uVar26);
        func_0x0492f360(lVar13,&plStack_138,0,0);
      }
      puVar4 = *(undefined4 **)(*(long *)(param_1 + 0x90) + 0x338);
      *puVar28 = *puVar4;
      fVar32 = (float)puVar4[1];
      *(undefined1 *)(puVar28 + 2) = *(undefined1 *)(puVar4 + 2);
      puVar28[1] = fVar32 * fVar32;
      *(undefined1 *)((long)puVar28 + 9) = 1;
    }
    lVar13 = *(long *)(param_1 + 0x90);
  }
  if (*(long *)(lVar25 + 0x358) != 0) {
    lVar13 = *(long *)(lVar13 + 0x358);
    uVar26 = *(uint *)(param_1 + 0x18);
    plVar12 = (long *)func_0x05ac7180(*(undefined8 *)(param_1 + 0x10),0xf65fe25f);
    uVar18 = (ulong)((uVar26 & 0x3ffff) >> 0xb);
    lVar22 = plVar12[1];
    uVar21 = plVar12[2] - lVar22 >> 3;
    if (lVar13 == 0) {
      if (((uVar18 < uVar21) && (lVar13 = *(long *)(lVar22 + uVar18 * 8), lVar13 != 0)) &&
         (uVar20 = *(uint *)(lVar13 + (ulong)(uVar26 & 0x7ff) * 4),
         (uVar26 & 0xfffc0000 ^ uVar20) < 0x3ffff)) {
        (**(code **)(*plVar12 + 0x10))(plVar12,plVar12 + 4,(uVar20 & 0x3ffff) + 1);
      }
    }
    else {
      if (((uVar21 <= uVar18) || (lVar13 = *(long *)(lVar22 + uVar18 * 8), lVar13 == 0)) ||
         (0x3fffe < (uVar26 & 0xfffc0000 ^ *(uint *)(lVar13 + (ulong)(uVar26 & 0x7ff) * 4)))) {
        plStack_138 = (long *)CONCAT44(plStack_138._4_4_,uVar26);
        func_0x05ac7fd0(plVar12,&plStack_138,0);
      }
      if (*(long *)(*(long *)(param_1 + 0x90) + 0x358) != 0) {
        func_0x0d879c70(param_1 + 8,0x37,1);
      }
    }
    lVar13 = *(long *)(param_1 + 0x90);
  }
  if (*(long *)(lVar25 + 0x328) != 0) {
    lVar13 = *(long *)(lVar13 + 0x328);
    uVar26 = *(uint *)(param_1 + 0x18);
    plVar12 = (long *)func_0x05ac6100(*(undefined8 *)(param_1 + 0x10),0xe098e11e);
    uVar18 = (ulong)((uVar26 & 0x3ffff) >> 0xb);
    lVar22 = plVar12[1];
    uVar21 = plVar12[2] - lVar22 >> 3;
    if (lVar13 == 0) {
      if (((uVar18 < uVar21) && (lVar13 = *(long *)(lVar22 + uVar18 * 8), lVar13 != 0)) &&
         (uVar20 = *(uint *)(lVar13 + (ulong)(uVar26 & 0x7ff) * 4),
         (uVar26 & 0xfffc0000 ^ uVar20) < 0x3ffff)) {
        (**(code **)(*plVar12 + 0x10))(plVar12,plVar12 + 4,(uVar20 & 0x3ffff) + 1);
      }
    }
    else {
      if (((uVar18 < uVar21) && (lVar13 = *(long *)(lVar22 + uVar18 * 8), lVar13 != 0)) &&
         (uVar20 = *(uint *)(lVar13 + (ulong)(uVar26 & 0x7ff) * 4),
         (uVar26 & 0xfffc0000 ^ uVar20) < 0x3ffff)) {
        puVar29 = (undefined8 *)
                  ((ulong)((uVar20 & 0x7f) * 0x18) +
                  *(long *)(plVar12[10] + (ulong)((uVar20 & 0x3ff80) >> 4)));
      }
      else {
        plStack_138 = (long *)CONCAT44(plStack_138._4_4_,uVar26);
        func_0x05ac6f90(plVar12,&plStack_138,0);
        puVar29 = (undefined8 *)
                  ((ulong)(((uint)(extraout_RDX_03 - 1U) & 0x7f) * 0x18) +
                  *(long *)(plVar12[10] + (extraout_RDX_03 - 1U >> 7) * 8));
      }
      lVar13 = *(long *)(*(long *)(param_1 + 0x90) + 0x328);
      uVar14 = func_0x0cc422f0(&DAT_0f6ff9e0,lVar13 + 0x48,0,0,0);
      *puVar29 = uVar14;
      puVar29[1] = *(undefined8 *)(lVar13 + 0x70);
      *(undefined4 *)(puVar29 + 2) = *(undefined4 *)(lVar13 + 0x78);
      auVar36._0_4_ = (int)(float)puVar29[1];
      auVar36._4_4_ = (int)(float)((ulong)puVar29[1] >> 0x20);
      auVar36._8_8_ = 0;
      auVar35._0_4_ = -(uint)((int)DAT_014e0ee0 < auVar36._0_4_);
      auVar35._4_4_ = -(uint)(DAT_014e0ee0._4_4_ < auVar36._4_4_);
      auVar35._8_4_ = -(uint)(DAT_014e0ee0._8_4_ < 0);
      auVar35._12_4_ = -(uint)(DAT_014e0ee0._12_4_ < 0);
      auVar36 = ~auVar35 & _DAT_014e0ee0 | auVar36 & auVar35;
      auVar34._0_4_ = -(uint)(auVar36._0_4_ < (int)DAT_014e7370);
      auVar34._4_4_ = -(uint)(auVar36._4_4_ < DAT_014e7370._4_4_);
      auVar34._8_4_ = -(uint)(auVar36._8_4_ < DAT_014e7370._8_4_);
      auVar34._12_4_ = -(uint)(auVar36._12_4_ < DAT_014e7370._12_4_);
      auVar36 = ~auVar34 & _DAT_014e7370 | auVar36 & auVar34;
      puVar29[1] = CONCAT44((float)auVar36._4_4_,(float)auVar36._0_4_);
      iVar10 = -0x10;
      if (-0x10 < (int)*(float *)(puVar29 + 2)) {
        iVar10 = (int)*(float *)(puVar29 + 2);
      }
      iVar11 = 0x10;
      if (iVar10 < 0x10) {
        iVar11 = iVar10;
      }
      *(float *)(puVar29 + 2) = (float)iVar11;
    }
    lVar13 = *(long *)(param_1 + 0x90);
  }
  if (*(long *)(lVar25 + 0x350) != 0) {
    lVar13 = *(long *)(lVar13 + 0x350);
    uVar26 = *(uint *)(param_1 + 0x18);
    plVar12 = (long *)func_0x0b45c110(*(undefined8 *)(param_1 + 0x10));
    uVar18 = (ulong)((uVar26 & 0x3ffff) >> 0xb);
    lVar22 = plVar12[1];
    uVar21 = plVar12[2] - lVar22 >> 3;
    if (lVar13 == 0) {
      if (((uVar18 < uVar21) && (lVar13 = *(long *)(lVar22 + uVar18 * 8), lVar13 != 0)) &&
         (uVar20 = *(uint *)(lVar13 + (ulong)(uVar26 & 0x7ff) * 4),
         (uVar26 & 0xfffc0000 ^ uVar20) < 0x3ffff)) {
        (**(code **)(*plVar12 + 0x10))(plVar12,plVar12 + 4,(uVar20 & 0x3ffff) + 1);
      }
    }
    else if (((uVar21 <= uVar18) || (lVar13 = *(long *)(lVar22 + uVar18 * 8), lVar13 == 0)) ||
            (0x3fffe < (uVar26 & 0xfffc0000 ^ *(uint *)(lVar13 + (ulong)(uVar26 & 0x7ff) * 4)))) {
      func_0x0b463c70(plVar12,uVar26,param_1);
    }
  }
  if (((byte)uStack_140 & 0xfe) == 2) {
    lVar13 = *(long *)(param_1 + 0x10);
    uVar26 = *(uint *)(param_1 + 0x18);
    lVar22 = *(long *)(lVar13 + 0x38);
    uVar20 = (int)((ulong)(*(long *)(lVar13 + 0x40) - lVar22) >> 3) - 1;
    plVar12 = (long *)(lVar22 + (ulong)(uVar20 & 0xa8ccd03d) * 8);
    lVar23 = *(long *)(lVar13 + 0x50);
    do {
      if (*plVar12 == -1) goto LAB_0b3c8f3d;
      lVar19 = *plVar12 * 0x20;
      plVar12 = (long *)(lVar23 + lVar19);
    } while (*(int *)(lVar23 + 8 + lVar19) != -0x57332fc3);
    unaff_R13 = *(long **)(lVar13 + 0x58);
    if ((plVar12 != unaff_R13) && (lVar13 = plVar12[2], lVar13 != 0)) {
      uVar18 = (ulong)((uVar26 & 0x3ffff) >> 0xb);
      if ((uVar18 < (ulong)(*(long *)(lVar13 + 0x10) - *(long *)(lVar13 + 8) >> 3)) &&
         (lVar19 = *(long *)(*(long *)(lVar13 + 8) + uVar18 * 8), lVar19 != 0)) {
        pppuVar27 = (undefined ***)(ulong)(uVar26 & 0x7ff);
        uVar3 = *(uint *)(lVar19 + (long)pppuVar27 * 4);
        if (((uVar3 ^ uVar26 & 0xfffc0000) < 0x3ffff) &&
           (lVar13 = *(long *)(*(long *)(lVar13 + 0x50) + (ulong)((uVar3 & 0x3ff80) >> 4)),
           lVar13 != 0)) {
          lStack_58 = lVar13 + (ulong)((uVar3 & 0x7f) << 6);
          uStack_6c = *(undefined4 *)(*(undefined8 **)(param_1 + 0x208) + 1);
          uStack_48 = **(undefined8 **)(param_1 + 0x208);
          uStack_40 = 0;
          uStack_148 = uVar18;
          uStack_50 = (ulong)(uVar26 & 0xfffc0000);
          uStack_68 = func_0x0eee4390();
          uVar14 = func_0x0eee4390();
          iVar10 = (int)uStack_68._4_4_;
          uStack_68 = CONCAT44((int)(float)uVar14,(int)(float)uStack_68);
          uStack_60 = CONCAT44((int)(float)((ulong)uVar14 >> 0x20),iVar10);
          fVar32 = (float)func_0x0eee4390();
          plVar12 = (long *)(lVar22 + (ulong)(uVar20 & 0xaf993816) * 8);
          do {
            lVar13 = *plVar12;
            plVar12 = unaff_R13;
            if (lVar13 == -1) break;
            lVar13 = lVar13 * 0x20;
            plVar12 = (long *)(lVar23 + lVar13);
          } while (*(int *)(lVar23 + 8 + lVar13) != -0x5066c7ea);
          if (plVar12 == unaff_R13) goto LAB_0b3cb5cb;
          lVar13 = plVar12[2];
          if (lVar13 == 0) goto LAB_0b3cb5cb;
          if ((ulong)(*(long *)(lVar13 + 0x10) - *(long *)(lVar13 + 8) >> 3) <= uStack_148)
          goto LAB_0b3cb5cb;
          lVar22 = *(long *)(*(long *)(lVar13 + 8) + uStack_148 * 8);
          if (lVar22 == 0) goto LAB_0b3cb5cb;
          uVar26 = *(uint *)(lVar22 + (long)pppuVar27 * 4);
          if (0x3fffe < ((uint)uStack_50 ^ uVar26)) goto LAB_0b3cb5cb;
          lVar13 = *(long *)(*(long *)(lVar13 + 0x50) + (ulong)(uVar26 >> 4 & 0x3ff8));
          if (lVar13 == 0) goto LAB_0b3cb5cb;
          uVar33 = *(undefined4 *)(lVar13 + (ulong)(uVar26 & 0x7f) * 4);
          *(undefined8 *)(lStack_58 + 0x30) = uStack_68;
          *(int *)(lStack_58 + 0x38) = (int)fVar32;
          *(undefined4 *)(lStack_58 + 0x3c) = uVar33;
        }
      }
    }
  }
LAB_0b3c8f3d:
  if (*(long *)(lVar25 + 0x240) != 0) {
    lVar13 = *(long *)(*(long *)(param_1 + 0x90) + 0x240);
    uVar26 = *(uint *)(param_1 + 0x18);
    plVar12 = (long *)func_0x06dd9740(*(undefined8 *)(param_1 + 0x10),&UNK_02531a9d);
    uVar18 = (ulong)((uVar26 & 0x3ffff) >> 0xb);
    lVar22 = plVar12[1];
    uVar21 = plVar12[2] - lVar22 >> 3;
    if (lVar13 == 0) {
      if (((uVar18 < uVar21) && (lVar13 = *(long *)(lVar22 + uVar18 * 8), lVar13 != 0)) &&
         (uVar20 = *(uint *)(lVar13 + (ulong)(uVar26 & 0x7ff) * 4),
         (uVar26 & 0xfffc0000 ^ uVar20) < 0x3ffff)) {
        (**(code **)(*plVar12 + 0x10))(plVar12,plVar12 + 4,(uVar20 & 0x3ffff) + 1);
      }
    }
    else if (((uVar21 <= uVar18) || (lVar13 = *(long *)(lVar22 + uVar18 * 8), lVar13 == 0)) ||
            (0x3fffe < (uVar26 & 0xfffc0000 ^ *(uint *)(lVar13 + (ulong)(uVar26 & 0x7ff) * 4)))) {
      plStack_138 = (long *)CONCAT44(plStack_138._4_4_,uVar26);
      func_0x0492f360(plVar12,&plStack_138,0,0);
    }
  }
  if (*(long *)(lVar25 + 0x268) != 0) {
    func_0x0b45cfc0(param_1,*(long *)(*(long *)(param_1 + 0x90) + 0x268) != 0);
  }
  if (*(long *)(lVar25 + 0x340) != 0) {
    lVar13 = *(long *)(*(long *)(param_1 + 0x90) + 0x340);
    plVar24 = *(long **)(param_1 + 0x10);
    uVar26 = *(uint *)(param_1 + 0x18);
    uStack_15c = 0xe00f2e1a;
    plVar12 = (long *)(plVar24[7] +
                      (ulong)((int)((ulong)(plVar24[8] - plVar24[7]) >> 3) - 1U & 0xe00f2e1a) * 8);
    do {
      if (*plVar12 == -1) goto LAB_0b3c90cc;
      lVar22 = *plVar12 * 0x20;
      plVar12 = (long *)(plVar24[10] + lVar22);
    } while (*(int *)(plVar24[10] + 8 + lVar22) != -0x1ff0d1e6);
    if (plVar12 == (long *)plVar24[0xb]) {
LAB_0b3c90cc:
      plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (plVar12 == (long *)0x0) {
        func_0x0eec74c0(0x80,0);
      }
      plVar12[1] = 0;
      plVar12[2] = 0;
      *plVar12 = (long)&UNK_0f2a8930;
      if ((DAT_0f6b31f0 == '\0') && (iVar10 = func_0x04108328(&DAT_0f6b31f0), iVar10 != 0)) {
        func_0x0b45d780();
        func_0x0410844d(&DAT_0f6b31f0);
      }
      uStack_158 = plVar12 + 3;
      plVar12[8] = 0;
      plVar12[9] = 0;
      plVar12[6] = 0;
      plVar12[7] = 0;
      plVar12[4] = 0;
      plVar12[5] = 0;
      plVar12[10] = (long)&DAT_0f6b31d8;
      *(undefined1 *)(plVar12 + 0xb) = 1;
      plVar12[0xc] = 0x3ffff;
      plVar12[3] = (long)&UNK_0f2a8980;
      plVar12[0xd] = 0;
      plVar12[0xe] = 0;
      plVar12[0xf] = 0;
      plStack_150 = plVar12;
      func_0x049303a0(plVar24 + 7,&uStack_15c,&uStack_158);
      puStack_128 = &UNK_049308c0;
      uStack_118 = 0xf987f04e;
      pcStack_120 = (code *)0x0;
      uStack_114 = 3;
      plStack_138 = plVar24;
      (**(code **)(*uStack_158 + 0x28))(uStack_158,&plStack_138);
      if (pcStack_120 != (code *)0x0) {
        (*pcStack_120)(&plStack_138);
      }
      plVar24 = plStack_150;
      plVar12 = uStack_158;
      if (plStack_150 != (long *)0x0) {
        LOCK();
        plVar5 = plStack_150 + 1;
        lVar22 = *plVar5;
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (lVar22 == 0) {
          (**(code **)(*plStack_150 + 0x10))(plStack_150);
          func_0x0412c2d0(plVar24);
        }
      }
    }
    else {
      plVar12 = (long *)plVar12[2];
    }
    uVar18 = (ulong)((uVar26 & 0x3ffff) >> 0xb);
    lVar22 = plVar12[1];
    uVar21 = plVar12[2] - lVar22 >> 3;
    if (lVar13 == 0) {
      if (((uVar18 < uVar21) && (lVar13 = *(long *)(lVar22 + uVar18 * 8), lVar13 != 0)) &&
         (uVar20 = *(uint *)(lVar13 + (ulong)(uVar26 & 0x7ff) * 4),
         (uVar26 & 0xfffc0000 ^ uVar20) < 0x3ffff)) {
        (**(code **)(*plVar12 + 0x10))(plVar12,plVar12 + 4,(uVar20 & 0x3ffff) + 1);
      }
    }
    else if (((uVar21 <= uVar18) || (lVar13 = *(long *)(lVar22 + uVar18 * 8), lVar13 == 0)) ||
            (0x3fffe < (uVar26 & 0xfffc0000 ^ *(uint *)(lVar13 + (ulong)(uVar26 & 0x7ff) * 4)))) {
      func_0x0b45dc30(plVar12,uVar26,0);
    }
  }
  if (*(long *)(lVar25 + 0x268) != 0) {
    func_0x0b45cfc0(param_1,*(long *)(*(long *)(param_1 + 0x90) + 0x268) != 0);
  }
  if (*(long *)(lVar25 + 0x290) != 0) {
    lVar13 = *(long *)(*(long *)(param_1 + 0x90) + 0x290);
    plVar24 = *(long **)(param_1 + 0x10);
    uVar26 = *(uint *)(param_1 + 0x18);
    uStack_15c = 0xe5fd420c;
    plVar12 = (long *)(plVar24[7] +
                      (ulong)((int)((ulong)(plVar24[8] - plVar24[7]) >> 3) - 1U & 0xe5fd420c) * 8);
    do {
      if (*plVar12 == -1) goto LAB_0b3c934c;
      lVar22 = *plVar12 * 0x20;
      plVar12 = (long *)(plVar24[10] + lVar22);
    } while (*(int *)(plVar24[10] + 8 + lVar22) != -0x1a02bdf4);
    if (plVar12 == (long *)plVar24[0xb]) {
LAB_0b3c934c:
      plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x68);
      if (plVar12 == (long *)0x0) {
        func_0x0eec74c0(0x68,0);
      }
      plVar12[1] = 0;
      plVar12[2] = 0;
      *plVar12 = (long)&UNK_0f2a8a00;
      if ((DAT_0f6b3220 == '\0') && (iVar10 = func_0x04108328(&DAT_0f6b3220), iVar10 != 0)) {
        func_0x0b45de80();
        func_0x0410844d(&DAT_0f6b3220);
      }
      uStack_158 = plVar12 + 3;
      plVar12[8] = 0;
      plVar12[9] = 0;
      plVar12[6] = 0;
      plVar12[7] = 0;
      plVar12[4] = 0;
      plVar12[5] = 0;
      plVar12[10] = (long)&DAT_0f6b3208;
      *(undefined1 *)(plVar12 + 0xb) = 0;
      plVar12[0xc] = 0x3ffff;
      plVar12[3] = (long)&UNK_0f2a8a50;
      plStack_150 = plVar12;
      func_0x049303a0(plVar24 + 7,&uStack_15c,&uStack_158);
      puStack_128 = &UNK_049308c0;
      uStack_118 = 0xf987f04e;
      pcStack_120 = (code *)0x0;
      uStack_114 = 3;
      plStack_138 = plVar24;
      (**(code **)(*uStack_158 + 0x28))(uStack_158,&plStack_138);
      if (pcStack_120 != (code *)0x0) {
        (*pcStack_120)(&plStack_138);
      }
      plVar24 = plStack_150;
      plVar12 = uStack_158;
      if (plStack_150 != (long *)0x0) {
        LOCK();
        plVar5 = plStack_150 + 1;
        lVar22 = *plVar5;
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (lVar22 == 0) {
          (**(code **)(*plStack_150 + 0x10))(plStack_150);
          func_0x0412c2d0(plVar24);
        }
      }
    }
    else {
      plVar12 = (long *)plVar12[2];
    }
    uVar18 = (ulong)((uVar26 & 0x3ffff) >> 0xb);
    lVar22 = plVar12[1];
    uVar21 = plVar12[2] - lVar22 >> 3;
    if (lVar13 == 0) {
      if (((uVar18 < uVar21) && (lVar13 = *(long *)(lVar22 + uVar18 * 8), lVar13 != 0)) &&
         (uVar20 = *(uint *)(lVar13 + (ulong)(uVar26 & 0x7ff) * 4),
         (uVar26 & 0xfffc0000 ^ uVar20) < 0x3ffff)) {
        (**(code **)(*plVar12 + 0x10))(plVar12,plVar12 + 4,(uVar20 & 0x3ffff) + 1);
      }
    }
    else if (((uVar21 <= uVar18) || (lVar13 = *(long *)(lVar22 + uVar18 * 8), lVar13 == 0)) ||
            (0x3fffe < (uVar26 & 0xfffc0000 ^ *(uint *)(lVar13 + (ulong)(uVar26 & 0x7ff) * 4)))) {
      plStack_138 = (long *)CONCAT44(plStack_138._4_4_,uVar26);
      func_0x0492f360(plVar12,&plStack_138,0,0);
    }
  }
  if (*(long *)(lVar25 + 0x288) != 0) {
    lVar13 = *(long *)(*(long *)(param_1 + 0x90) + 0x288);
    plVar24 = *(long **)(param_1 + 0x10);
    uVar26 = *(uint *)(param_1 + 0x18);
    uStack_15c = 0xae3e627d;
    plVar12 = (long *)(plVar24[7] +
                      (ulong)((int)((ulong)(plVar24[8] - plVar24[7]) >> 3) - 1U & 0xae3e627d) * 8);
    do {
      if (*plVar12 == -1) goto LAB_0b3c95ac;
      lVar22 = *plVar12 * 0x20;
      plVar12 = (long *)(plVar24[10] + lVar22);
    } while (*(int *)(plVar24[10] + 8 + lVar22) != -0x51c19d83);
    if (plVar12 == (long *)plVar24[0xb]) {
LAB_0b3c95ac:
      plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x68);
      if (plVar12 == (long *)0x0) {
        func_0x0eec74c0(0x68,0);
      }
      plVar12[1] = 0;
      plVar12[2] = 0;
      *plVar12 = (long)&UNK_0f2a8ad0;
      if ((DAT_0f6b3258 == '\0') && (iVar10 = func_0x04108328(&DAT_0f6b3258), iVar10 != 0)) {
        func_0x0b45dff0();
        func_0x0410844d(&DAT_0f6b3258);
      }
      uStack_158 = plVar12 + 3;
      plVar12[8] = 0;
      plVar12[9] = 0;
      plVar12[6] = 0;
      plVar12[7] = 0;
      plVar12[4] = 0;
      plVar12[5] = 0;
      plVar12[10] = (long)&DAT_0f6b3240;
      *(undefined1 *)(plVar12 + 0xb) = 0;
      plVar12[0xc] = 0x3ffff;
      plVar12[3] = (long)&UNK_0f2a8b20;
      plStack_150 = plVar12;
      func_0x049303a0(plVar24 + 7,&uStack_15c,&uStack_158);
      puStack_128 = &UNK_049308c0;
      uStack_118 = 0xf987f04e;
      pcStack_120 = (code *)0x0;
      uStack_114 = 3;
      plStack_138 = plVar24;
      (**(code **)(*uStack_158 + 0x28))(uStack_158,&plStack_138);
      if (pcStack_120 != (code *)0x0) {
        (*pcStack_120)(&plStack_138);
      }
      plVar24 = plStack_150;
      plVar12 = uStack_158;
      if (plStack_150 != (long *)0x0) {
        LOCK();
        plVar5 = plStack_150 + 1;
        lVar22 = *plVar5;
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (lVar22 == 0) {
          (**(code **)(*plStack_150 + 0x10))(plStack_150);
          func_0x0412c2d0(plVar24);
        }
      }
    }
    else {
      plVar12 = (long *)plVar12[2];
    }
    uVar18 = (ulong)((uVar26 & 0x3ffff) >> 0xb);
    lVar22 = plVar12[1];
    uVar21 = plVar12[2] - lVar22 >> 3;
    if (lVar13 == 0) {
      if (((uVar18 < uVar21) && (lVar13 = *(long *)(lVar22 + uVar18 * 8), lVar13 != 0)) &&
         (uVar20 = *(uint *)(lVar13 + (ulong)(uVar26 & 0x7ff) * 4),
         (uVar26 & 0xfffc0000 ^ uVar20) < 0x3ffff)) {
        (**(code **)(*plVar12 + 0x10))(plVar12,plVar12 + 4,(uVar20 & 0x3ffff) + 1);
      }
    }
    else if (((uVar21 <= uVar18) || (lVar13 = *(long *)(lVar22 + uVar18 * 8), lVar13 == 0)) ||
            (0x3fffe < (uVar26 & 0xfffc0000 ^ *(uint *)(lVar13 + (ulong)(uVar26 & 0x7ff) * 4)))) {
      plStack_138 = (long *)CONCAT44(plStack_138._4_4_,uVar26);
      func_0x0492f360(plVar12,&plStack_138,0,0);
    }
  }
  unaff_R13 = (long *)0xffffffff;
  if ((char)uStack_140 != '\x01') {
    if ((DAT_0f6b3278 == '\0') && (iVar10 = func_0x04108328(&DAT_0f6b3278), iVar10 != 0)) {
      LOCK();
      UNLOCK();
      _DAT_0f6b3272 = _DAT_0f555550;
      _DAT_0f555550 = _DAT_0f555550 + 1;
      func_0x0410844d(&DAT_0f6b3278);
    }
    plVar12 = (long *)(*(long *)(lVar25 + 0x178) +
                      (ulong)(((uint)(*(int *)(lVar25 + 0x180) - (int)*(long *)(lVar25 + 0x178)) >>
                              3) - 1 & (uint)_DAT_0f6b3272) * 8);
    do {
      if (*plVar12 == -1) goto LAB_0b3ca9dd;
      lVar13 = *plVar12 * 0x20;
      plVar12 = (long *)(*(long *)(lVar25 + 400) + lVar13);
    } while (*(ushort *)(*(long *)(lVar25 + 400) + 8 + lVar13) != _DAT_0f6b3272);
    if ((plVar12 != *(long **)(lVar25 + 0x198)) && (plVar12[2] != 0)) {
      pppuVar27 = *(undefined ****)(param_1 + 0x90);
      if ((DAT_0f6b3278 == '\0') && (iVar10 = func_0x04108328(&DAT_0f6b3278), iVar10 != 0)) {
        LOCK();
        UNLOCK();
        _DAT_0f6b3272 = _DAT_0f555550;
        _DAT_0f555550 = _DAT_0f555550 + 1;
        func_0x0410844d(&DAT_0f6b3278);
      }
      ppuVar17 = pppuVar27[0x2f] +
                 (((uint)(*(int *)(pppuVar27 + 0x30) - (int)pppuVar27[0x2f]) >> 3) - 1 &
                 (uint)_DAT_0f6b3272);
      do {
        puVar2 = *ppuVar17;
        if (puVar2 == (undefined *)0xffffffffffffffff) goto LAB_0b3ca9dd;
        ppuVar17 = pppuVar27[0x32] + (long)puVar2 * 4;
      } while (*(ushort *)(pppuVar27[0x32] + (long)puVar2 * 4 + 1) != _DAT_0f6b3272);
      if ((ppuVar17 != pppuVar27[0x33]) && (ppuVar17[2] != (undefined *)0x0)) {
        plVar12 = *(long **)(param_1 + 0x120);
        if (plVar12 == (long *)0x0) goto LAB_0b3cb5cb;
        iVar10 = *(int *)(ppuVar17[2] + 0x20);
        pppuVar27 = *(undefined ****)(*plVar12 + 0x10);
        cVar7 = (*(code *)(*pppuVar27)[3])(pppuVar27);
        if ((cVar7 == '\x02') && (*(int *)((long)pppuVar27 + 0xc) != iVar10)) {
          *(int *)((long)pppuVar27 + 0xc) = iVar10;
          uVar9 = (*(code *)(*pppuVar27)[2])(pppuVar27);
          if (0x8c < uVar9) goto LAB_0b3cb80f;
          plVar12[(ulong)(uVar9 >> 6) + 3] =
               plVar12[(ulong)(uVar9 >> 6) + 3] | 1L << ((byte)uVar9 & 0x3f);
        }
      }
    }
LAB_0b3ca9dd:
    if ((DAT_0f6b3288 == '\0') && (iVar10 = func_0x04108328(&DAT_0f6b3288), iVar10 != 0)) {
      LOCK();
      UNLOCK();
      _DAT_0f6b3280 = _DAT_0f555550;
      _DAT_0f555550 = _DAT_0f555550 + 1;
      func_0x0410844d(&DAT_0f6b3288);
    }
    plVar12 = (long *)(*(long *)(lVar25 + 0x178) +
                      (ulong)(((uint)(*(int *)(lVar25 + 0x180) - (int)*(long *)(lVar25 + 0x178)) >>
                              3) - 1 & (uint)_DAT_0f6b3280) * 8);
    do {
      if (*plVar12 == -1) goto LAB_0b3cab4e;
      lVar13 = *plVar12 * 0x20;
      plVar12 = (long *)(*(long *)(lVar25 + 400) + lVar13);
    } while (*(ushort *)(*(long *)(lVar25 + 400) + 8 + lVar13) != _DAT_0f6b3280);
    if ((plVar12 != *(long **)(lVar25 + 0x198)) && (plVar12[2] != 0)) {
      pppuVar27 = *(undefined ****)(param_1 + 0x90);
      if ((DAT_0f6b3288 == '\0') && (iVar10 = func_0x04108328(&DAT_0f6b3288), iVar10 != 0)) {
        LOCK();
        UNLOCK();
        _DAT_0f6b3280 = _DAT_0f555550;
        _DAT_0f555550 = _DAT_0f555550 + 1;
        func_0x0410844d(&DAT_0f6b3288);
      }
      ppuVar17 = pppuVar27[0x2f] +
                 (((uint)(*(int *)(pppuVar27 + 0x30) - (int)pppuVar27[0x2f]) >> 3) - 1 &
                 (uint)_DAT_0f6b3280);
      do {
        puVar2 = *ppuVar17;
        if (puVar2 == (undefined *)0xffffffffffffffff) goto LAB_0b3cab4e;
        ppuVar17 = pppuVar27[0x32] + (long)puVar2 * 4;
      } while (*(ushort *)(pppuVar27[0x32] + (long)puVar2 * 4 + 1) != _DAT_0f6b3280);
      if ((ppuVar17 != pppuVar27[0x33]) && (ppuVar17[2] != (undefined *)0x0)) {
        plVar12 = *(long **)(param_1 + 0x120);
        if (plVar12 == (long *)0x0) goto LAB_0b3cb5cb;
        iVar10 = *(int *)(ppuVar17[2] + 0x20);
        pppuVar27 = *(undefined ****)(*plVar12 + 0x158);
        cVar7 = (*(code *)(*pppuVar27)[3])(pppuVar27);
        if ((cVar7 == '\x02') && (*(int *)((long)pppuVar27 + 0xc) != iVar10)) {
          *(int *)((long)pppuVar27 + 0xc) = iVar10;
          uVar9 = (*(code *)(*pppuVar27)[2])(pppuVar27);
          if (0x8c < uVar9) goto LAB_0b3cb80f;
          plVar12[(ulong)(uVar9 >> 6) + 3] =
               plVar12[(ulong)(uVar9 >> 6) + 3] | 1L << ((byte)uVar9 & 0x3f);
        }
      }
    }
LAB_0b3cab4e:
    if ((DAT_0f6b3298 == '\0') && (iVar10 = func_0x04108328(&DAT_0f6b3298), iVar10 != 0)) {
      LOCK();
      UNLOCK();
      _DAT_0f6b3290 = _DAT_0f555550;
      _DAT_0f555550 = _DAT_0f555550 + 1;
      func_0x0410844d(&DAT_0f6b3298);
    }
    plVar12 = (long *)(*(long *)(lVar25 + 0x178) +
                      (ulong)(((uint)(*(int *)(lVar25 + 0x180) - (int)*(long *)(lVar25 + 0x178)) >>
                              3) - 1 & (uint)_DAT_0f6b3290) * 8);
    do {
      if (*plVar12 == -1) goto LAB_0b3cacbe;
      lVar13 = *plVar12 * 0x20;
      plVar12 = (long *)(*(long *)(lVar25 + 400) + lVar13);
    } while (*(ushort *)(*(long *)(lVar25 + 400) + 8 + lVar13) != _DAT_0f6b3290);
    if ((plVar12 != *(long **)(lVar25 + 0x198)) && (plVar12[2] != 0)) {
      pppuVar27 = *(undefined ****)(param_1 + 0x90);
      if ((DAT_0f6b3298 == '\0') && (iVar10 = func_0x04108328(&DAT_0f6b3298), iVar10 != 0)) {
        LOCK();
        UNLOCK();
        _DAT_0f6b3290 = _DAT_0f555550;
        _DAT_0f555550 = _DAT_0f555550 + 1;
        func_0x0410844d(&DAT_0f6b3298);
      }
      ppuVar17 = pppuVar27[0x2f] +
                 (((uint)(*(int *)(pppuVar27 + 0x30) - (int)pppuVar27[0x2f]) >> 3) - 1 &
                 (uint)_DAT_0f6b3290);
      do {
        puVar2 = *ppuVar17;
        if (puVar2 == (undefined *)0xffffffffffffffff) goto LAB_0b3cacbe;
        ppuVar17 = pppuVar27[0x32] + (long)puVar2 * 4;
      } while (*(ushort *)(pppuVar27[0x32] + (long)puVar2 * 4 + 1) != _DAT_0f6b3290);
      if ((ppuVar17 != pppuVar27[0x33]) && (ppuVar17[2] != (undefined *)0x0)) {
        plVar12 = *(long **)(param_1 + 0x120);
        if (plVar12 == (long *)0x0) goto LAB_0b3cb5cb;
        iVar10 = *(int *)(ppuVar17[2] + 0x20);
        pppuVar27 = *(undefined ****)(*plVar12 + 0x340);
        cVar7 = (*(code *)(*pppuVar27)[3])(pppuVar27);
        if ((cVar7 == '\x02') && (*(int *)((long)pppuVar27 + 0xc) != iVar10)) {
          *(int *)((long)pppuVar27 + 0xc) = iVar10;
          uVar9 = (*(code *)(*pppuVar27)[2])(pppuVar27);
          if (0x8c < uVar9) goto LAB_0b3cb80f;
          plVar12[(ulong)(uVar9 >> 6) + 3] =
               plVar12[(ulong)(uVar9 >> 6) + 3] | 1L << ((byte)uVar9 & 0x3f);
        }
      }
    }
LAB_0b3cacbe:
    if ((DAT_0f6b32a8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f6b32a8), iVar10 != 0)) {
      LOCK();
      UNLOCK();
      _DAT_0f6b32a0 = _DAT_0f555550;
      _DAT_0f555550 = _DAT_0f555550 + 1;
      func_0x0410844d(&DAT_0f6b32a8);
    }
    plVar12 = (long *)(*(long *)(lVar25 + 0x178) +
                      (ulong)(((uint)(*(int *)(lVar25 + 0x180) - (int)*(long *)(lVar25 + 0x178)) >>
                              3) - 1 & (uint)_DAT_0f6b32a0) * 8);
    do {
      if (*plVar12 == -1) goto LAB_0b3caf0a;
      lVar13 = *plVar12 * 0x20;
      plVar12 = (long *)(*(long *)(lVar25 + 400) + lVar13);
    } while (*(ushort *)(*(long *)(lVar25 + 400) + 8 + lVar13) != _DAT_0f6b32a0);
    if ((plVar12 != *(long **)(lVar25 + 0x198)) && (plVar12[2] != 0)) {
      pppuVar27 = *(undefined ****)(param_1 + 0x90);
      if ((DAT_0f6b32a8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f6b32a8), iVar10 != 0)) {
        LOCK();
        UNLOCK();
        _DAT_0f6b32a0 = _DAT_0f555550;
        _DAT_0f555550 = _DAT_0f555550 + 1;
        func_0x0410844d(&DAT_0f6b32a8);
      }
      ppuVar17 = pppuVar27[0x2f] +
                 (((uint)(*(int *)(pppuVar27 + 0x30) - (int)pppuVar27[0x2f]) >> 3) - 1 &
                 (uint)_DAT_0f6b32a0);
      do {
        puVar2 = *ppuVar17;
        if (puVar2 == (undefined *)0xffffffffffffffff) goto LAB_0b3caf0a;
        ppuVar17 = pppuVar27[0x32] + (long)puVar2 * 4;
      } while (*(ushort *)(pppuVar27[0x32] + (long)puVar2 * 4 + 1) != _DAT_0f6b32a0);
      if ((ppuVar17 == pppuVar27[0x33]) || (ppuVar17[2] == (undefined *)0x0)) goto LAB_0b3caf0a;
      lVar13 = *(long *)(param_1 + 0x10);
      uVar26 = *(uint *)(param_1 + 0x18);
      plVar12 = (long *)(*(long *)(lVar13 + 0x38) +
                        (ulong)((int)((ulong)(*(long *)(lVar13 + 0x40) - *(long *)(lVar13 + 0x38))
                                     >> 3) - 1U & 0xe642016b) * 8);
      do {
        if (*plVar12 == -1) {
          plVar24 = *(long **)(lVar13 + 0x58);
          plVar12 = plVar24;
          goto LAB_0b3cae29;
        }
        lVar22 = *plVar12 * 0x20;
        plVar12 = (long *)(*(long *)(lVar13 + 0x50) + lVar22);
      } while (*(int *)(*(long *)(lVar13 + 0x50) + 8 + lVar22) != -0x19bdfe95);
      plVar24 = *(long **)(lVar13 + 0x58);
LAB_0b3cae29:
      if (plVar12 == plVar24) goto LAB_0b3cb5cb;
      lVar13 = plVar12[2];
      if (lVar13 == 0) goto LAB_0b3cb5cb;
      uVar18 = (ulong)((uVar26 & 0x3ffff) >> 0xb);
      if ((ulong)(*(long *)(lVar13 + 0x10) - *(long *)(lVar13 + 8) >> 3) <= uVar18)
      goto LAB_0b3cb5cb;
      lVar22 = *(long *)(*(long *)(lVar13 + 8) + uVar18 * 8);
      if (lVar22 == 0) goto LAB_0b3cb5cb;
      uVar20 = *(uint *)(lVar22 + (ulong)(uVar26 & 0x7ff) * 4);
      if (0x3fffe < (uVar26 & 0xfffc0000 ^ uVar20)) goto LAB_0b3cb5cb;
      plVar12 = *(long **)(*(long *)(lVar13 + 0x50) + (ulong)(uVar20 >> 4 & 0x3ff8));
      if (plVar12 == (long *)0x0) goto LAB_0b3cb5cb;
      uVar18 = (ulong)(uVar20 & 0x7f);
      cVar7 = ppuVar17[2][0x20];
      plVar24 = *(long **)(plVar12[uVar18 * 9] + 0x18);
      cVar8 = (**(code **)(*plVar24 + 0x18))(plVar24);
      if ((cVar8 != '\0') || (*(char *)((long)plVar24 + 0xc) == cVar7)) goto LAB_0b3caf0a;
      *(char *)((long)plVar24 + 0xc) = cVar7;
      uVar9 = (**(code **)(*plVar24 + 0x10))(plVar24);
      if (uVar9 < 0x8d) {
        plVar12[uVar18 * 9 + (ulong)(uVar9 >> 6) + 3] =
             plVar12[uVar18 * 9 + (ulong)(uVar9 >> 6) + 3] | 1L << ((byte)uVar9 & 0x3f);
        goto LAB_0b3caf0a;
      }
LAB_0b3cbcd6:
      plVar24 = (long *)(uVar18 * 9);
      func_0x04882ef0(&UNK_012d4a56);
      goto LAB_0b3cbce2;
    }
LAB_0b3caf0a:
    if ((DAT_0f6b32b8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f6b32b8), iVar10 != 0)) {
      LOCK();
      UNLOCK();
      _DAT_0f6b32b0 = _DAT_0f555550;
      _DAT_0f555550 = _DAT_0f555550 + 1;
      func_0x0410844d(&DAT_0f6b32b8);
    }
    plVar12 = (long *)(*(long *)(lVar25 + 0x178) +
                      (ulong)(((uint)(*(int *)(lVar25 + 0x180) - (int)*(long *)(lVar25 + 0x178)) >>
                              3) - 1 & (uint)_DAT_0f6b32b0) * 8);
    do {
      if (*plVar12 == -1) goto LAB_0b3c9788;
      lVar13 = *plVar12 * 0x20;
      plVar12 = (long *)(*(long *)(lVar25 + 400) + lVar13);
    } while (*(ushort *)(*(long *)(lVar25 + 400) + 8 + lVar13) != _DAT_0f6b32b0);
    if ((plVar12 != *(long **)(lVar25 + 0x198)) && (plVar12[2] != 0)) {
      pppuVar27 = *(undefined ****)(param_1 + 0x90);
      if ((DAT_0f6b32b8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f6b32b8), iVar10 != 0)) {
        LOCK();
        UNLOCK();
        _DAT_0f6b32b0 = _DAT_0f555550;
        _DAT_0f555550 = _DAT_0f555550 + 1;
        func_0x0410844d(&DAT_0f6b32b8);
      }
      ppuVar17 = pppuVar27[0x2f] +
                 (((uint)(*(int *)(pppuVar27 + 0x30) - (int)pppuVar27[0x2f]) >> 3) - 1 &
                 (uint)_DAT_0f6b32b0);
      do {
        puVar2 = *ppuVar17;
        if (puVar2 == (undefined *)0xffffffffffffffff) goto LAB_0b3c9788;
        ppuVar17 = pppuVar27[0x32] + (long)puVar2 * 4;
      } while (*(ushort *)(pppuVar27[0x32] + (long)puVar2 * 4 + 1) != _DAT_0f6b32b0);
      if ((ppuVar17 != pppuVar27[0x33]) && (ppuVar17[2] != (undefined *)0x0)) {
        lVar13 = *(long *)(param_1 + 0x10);
        uVar26 = *(uint *)(param_1 + 0x18);
        plVar12 = (long *)(*(long *)(lVar13 + 0x38) +
                          (ulong)((int)((ulong)(*(long *)(lVar13 + 0x40) - *(long *)(lVar13 + 0x38))
                                       >> 3) - 1U & 0xe642016b) * 8);
        do {
          if (*plVar12 == -1) {
            plVar24 = *(long **)(lVar13 + 0x58);
            plVar12 = plVar24;
            goto LAB_0b3cb079;
          }
          lVar22 = *plVar12 * 0x20;
          plVar12 = (long *)(*(long *)(lVar13 + 0x50) + lVar22);
        } while (*(int *)(*(long *)(lVar13 + 0x50) + 8 + lVar22) != -0x19bdfe95);
        plVar24 = *(long **)(lVar13 + 0x58);
LAB_0b3cb079:
        if (plVar12 == plVar24) goto LAB_0b3cb5cb;
        lVar13 = plVar12[2];
        if (lVar13 == 0) goto LAB_0b3cb5cb;
        uVar18 = (ulong)((uVar26 & 0x3ffff) >> 0xb);
        if ((ulong)(*(long *)(lVar13 + 0x10) - *(long *)(lVar13 + 8) >> 3) <= uVar18)
        goto LAB_0b3cb5cb;
        lVar22 = *(long *)(*(long *)(lVar13 + 8) + uVar18 * 8);
        if (lVar22 == 0) goto LAB_0b3cb5cb;
        uVar20 = *(uint *)(lVar22 + (ulong)(uVar26 & 0x7ff) * 4);
        if (0x3fffe < (uVar26 & 0xfffc0000 ^ uVar20)) goto LAB_0b3cb5cb;
        plVar12 = *(long **)(*(long *)(lVar13 + 0x50) + (ulong)(uVar20 >> 4 & 0x3ff8));
        if (plVar12 == (long *)0x0) goto LAB_0b3cb5cb;
        uVar18 = (ulong)(uVar20 & 0x7f);
        cVar7 = ppuVar17[2][0x20];
        plVar24 = *(long **)(plVar12[uVar18 * 9] + 0x290);
        cVar8 = (**(code **)(*plVar24 + 0x18))(plVar24);
        if ((cVar8 == '\0') && (*(char *)((long)plVar24 + 0xc) != cVar7)) {
          *(char *)((long)plVar24 + 0xc) = cVar7;
          uVar9 = (**(code **)(*plVar24 + 0x10))(plVar24);
          if (0x8c < uVar9) goto LAB_0b3cbcd6;
          plVar12[uVar18 * 9 + (ulong)(uVar9 >> 6) + 3] =
               plVar12[uVar18 * 9 + (ulong)(uVar9 >> 6) + 3] | 1L << ((byte)uVar9 & 0x3f);
        }
      }
    }
  }
LAB_0b3c9788:
  pppuVar27 = *(undefined ****)(param_1 + 0x90);
  if ((DAT_0f6b32c8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f6b32c8), iVar10 != 0)) {
    LOCK();
    UNLOCK();
    _DAT_0f6b32c0 = _DAT_0f555550;
    _DAT_0f555550 = _DAT_0f555550 + 1;
    func_0x0410844d(&DAT_0f6b32c8);
  }
  ppuVar17 = pppuVar27[0x2f] +
             (((uint)(*(int *)(pppuVar27 + 0x30) - (int)pppuVar27[0x2f]) >> 3) - 1 &
             (uint)_DAT_0f6b32c0);
  do {
    puVar2 = *ppuVar17;
    if (puVar2 == (undefined *)0xffffffffffffffff) goto LAB_0b3c988e;
    ppuVar17 = pppuVar27[0x32] + (long)puVar2 * 4;
  } while (*(ushort *)(pppuVar27[0x32] + (long)puVar2 * 4 + 1) != _DAT_0f6b32c0);
  if ((ppuVar17 != pppuVar27[0x33]) && (ppuVar17[2] != (undefined *)0x0)) {
    plVar12 = *(long **)(param_1 + 0x120);
    if (plVar12 == (long *)0x0) goto LAB_0b3cb5cb;
    uStack_148 = CONCAT44(uStack_148._4_4_,*(undefined4 *)(ppuVar17[2] + 0x20));
    pppuVar27 = *(undefined ****)(*plVar12 + 0x3e0);
    cVar7 = (*(code *)(*pppuVar27)[3])(pppuVar27);
    if (cVar7 == '\x03') {
      if ((*(float *)((long)pppuVar27 + 0xc) != (float)uStack_148) ||
         (NAN(*(float *)((long)pppuVar27 + 0xc)) || NAN((float)uStack_148))) {
        *(float *)((long)pppuVar27 + 0xc) = (float)uStack_148;
        uVar9 = (*(code *)(*pppuVar27)[2])(pppuVar27);
        if (0x8c < uVar9) goto LAB_0b3cb80f;
        plVar12[(ulong)(uVar9 >> 6) + 3] =
             plVar12[(ulong)(uVar9 >> 6) + 3] | 1L << ((byte)uVar9 & 0x3f);
      }
    }
  }
LAB_0b3c988e:
  lVar13 = *(long *)(param_1 + 0x90);
  if ((DAT_0f6b32d8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f6b32d8), iVar10 != 0)) {
    LOCK();
    UNLOCK();
    _DAT_0f6b32d0 = _DAT_0f555550;
    _DAT_0f555550 = _DAT_0f555550 + 1;
    func_0x0410844d(&DAT_0f6b32d8);
  }
  plVar12 = (long *)(*(long *)(lVar13 + 0x178) +
                    (ulong)(((uint)(*(int *)(lVar13 + 0x180) - (int)*(long *)(lVar13 + 0x178)) >> 3)
                            - 1 & (uint)_DAT_0f6b32d0) * 8);
  do {
    if (*plVar12 == -1) goto LAB_0b3c991c;
    lVar22 = *plVar12 * 0x20;
    plVar12 = (long *)(*(long *)(lVar13 + 400) + lVar22);
  } while (*(ushort *)(*(long *)(lVar13 + 400) + 8 + lVar22) != _DAT_0f6b32d0);
  if ((plVar12 != *(long **)(lVar13 + 0x198)) && (plVar12[2] != 0)) {
    func_0x0d879c70(param_1 + 8,10,0);
  }
LAB_0b3c991c:
  if ((DAT_0f5a6030 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5a6030), iVar10 != 0)) {
    LOCK();
    UNLOCK();
    _DAT_0f5a6028 = _DAT_0f555550;
    _DAT_0f555550 = _DAT_0f555550 + 1;
    func_0x0410844d(&DAT_0f5a6030);
  }
  plVar12 = (long *)(*(long *)(lVar25 + 0x178) +
                    (ulong)(((uint)(*(int *)(lVar25 + 0x180) - (int)*(long *)(lVar25 + 0x178)) >> 3)
                            - 1 & (uint)_DAT_0f5a6028) * 8);
  do {
    if (*plVar12 == -1) goto LAB_0b3c9b47;
    lVar13 = *plVar12 * 0x20;
    plVar12 = (long *)(*(long *)(lVar25 + 400) + lVar13);
  } while (*(ushort *)(*(long *)(lVar25 + 400) + 8 + lVar13) != _DAT_0f5a6028);
  if ((plVar12 != *(long **)(lVar25 + 0x198)) && (plVar12[2] != 0)) {
    lVar13 = *(long *)(param_1 + 0x90);
    if ((DAT_0f5a6030 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5a6030), iVar10 != 0)) {
      LOCK();
      UNLOCK();
      _DAT_0f5a6028 = _DAT_0f555550;
      _DAT_0f555550 = _DAT_0f555550 + 1;
      func_0x0410844d(&DAT_0f5a6030);
    }
    plVar12 = (long *)(*(long *)(lVar13 + 0x178) +
                      (ulong)(((uint)(*(int *)(lVar13 + 0x180) - (int)*(long *)(lVar13 + 0x178)) >>
                              3) - 1 & (uint)_DAT_0f5a6028) * 8);
    do {
      if (*plVar12 == -1) goto LAB_0b3c9b37;
      lVar22 = *plVar12 * 0x20;
      plVar12 = (long *)(*(long *)(lVar13 + 400) + lVar22);
    } while (*(ushort *)(*(long *)(lVar13 + 400) + 8 + lVar22) != _DAT_0f5a6028);
    if ((plVar12 == *(long **)(lVar13 + 0x198)) || (plVar12[2] == 0)) {
LAB_0b3c9b37:
      func_0x0d879c70(param_1 + 8,7,0);
    }
  }
LAB_0b3c9b47:
  lVar13 = *(long *)(param_1 + 0x90);
  if ((DAT_0f6b32e8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f6b32e8), iVar10 != 0)) {
    LOCK();
    UNLOCK();
    _DAT_0f6b32e0 = _DAT_0f555550;
    _DAT_0f555550 = _DAT_0f555550 + 1;
    func_0x0410844d(&DAT_0f6b32e8);
  }
  plVar12 = (long *)(*(long *)(lVar13 + 0x178) +
                    (ulong)(((uint)(*(int *)(lVar13 + 0x180) - (int)*(long *)(lVar13 + 0x178)) >> 3)
                            - 1 & (uint)_DAT_0f6b32e0) * 8);
  do {
    if (*plVar12 == -1) goto LAB_0b3c9bcc;
    lVar22 = *plVar12 * 0x20;
    plVar12 = (long *)(*(long *)(lVar13 + 400) + lVar22);
  } while (*(ushort *)(*(long *)(lVar13 + 400) + 8 + lVar22) != _DAT_0f6b32e0);
  if ((plVar12 == *(long **)(lVar13 + 0x198)) || (plVar12[2] == 0)) {
LAB_0b3c9bcc:
    func_0x0d879c70(param_1 + 8,0x3a,0);
  }
  lVar13 = *(long *)(param_1 + 0x10);
  uVar26 = *(uint *)(param_1 + 0x18);
  plVar12 = (long *)(*(long *)(lVar13 + 0x38) +
                    (ulong)((int)((ulong)(*(long *)(lVar13 + 0x40) - *(long *)(lVar13 + 0x38)) >> 3)
                            - 1U & 0x9b97c2b2) * 8);
  do {
    if (*plVar12 == -1) goto LAB_0b3c9d93;
    lVar22 = *plVar12 * 0x20;
    plVar12 = (long *)(*(long *)(lVar13 + 0x50) + lVar22);
  } while (*(int *)(*(long *)(lVar13 + 0x50) + 8 + lVar22) != -0x64683d4e);
  if ((plVar12 != *(long **)(lVar13 + 0x58)) && (lVar13 = plVar12[2], lVar13 != 0)) {
    uVar18 = (ulong)((uVar26 & 0x3ffff) >> 0xb);
    if ((uVar18 < (ulong)(*(long *)(lVar13 + 0x10) - *(long *)(lVar13 + 8) >> 3)) &&
       ((((lVar22 = *(long *)(*(long *)(lVar13 + 8) + uVar18 * 8), lVar22 != 0 &&
          (uVar20 = *(uint *)(lVar22 + (ulong)(uVar26 & 0x7ff) * 4),
          (uVar26 & 0xfffc0000 ^ uVar20) < 0x3ffff)) &&
         (lVar13 = *(long *)(*(long *)(lVar13 + 0x50) + (ulong)((uVar20 & 0x3ff80) >> 4)),
         lVar13 != 0)) &&
        (plVar12 = (long *)(lVar13 + (ulong)(uVar20 & 0x7f) * 0x18), *plVar12 != plVar12[1])))) {
      unaff_R13 = (long *)&UNK_0f47e0b0;
      plStack_138 = (long *)&UNK_0f47e0b0;
      pppuVar27 = &ppuStack_130;
      ppuStack_130 = &puStack_128;
      puStack_128 = (undefined *)0x0;
      pcStack_120 = (code *)0x0;
      func_0x07021dc0(plVar12,&plStack_138);
      plVar5 = *(long **)(param_1 + 0x120);
      if (plVar5 == (long *)0x0) goto LAB_0b3cb5cb;
      plVar12 = *(long **)(*plVar5 + 0x3b0);
      cVar7 = (**(code **)(*plVar12 + 0x18))(plVar12);
      if (cVar7 == '\x05') {
        plVar24 = plVar12 + 2;
        cVar7 = (**(code **)(plVar12[2] + 0x38))(plVar24,&plStack_138);
        if (cVar7 == '\0') {
          func_0x0d6bd5f0(plVar24,&plStack_138);
          uVar9 = (**(code **)(*plVar12 + 0x10))(plVar12);
          if (0x8c < uVar9) {
LAB_0b3cbce2:
            uVar14 = func_0x04882ef0(&UNK_012d4a56);
            func_0x04108700(uVar14);
            func_0x0492f010(plVar12,uStack_140,plVar24,uStack_140,unaff_R13);
            plVar24 = (long *)func_0x04108a60();
            func_0x04108910();
            plVar12 = plVar24;
            _Unwind_Resume();
            (**(code **)(*plVar12 + 8))();
            uVar14 = _Unwind_Resume(plVar24);
            func_0x0495e910(&plStack_138);
            _Unwind_Resume(uVar14);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          plVar5[(ulong)(uVar9 >> 6) + 3] =
               plVar5[(ulong)(uVar9 >> 6) + 3] | 1L << ((byte)uVar9 & 0x3f);
        }
      }
      plStack_138 = (long *)&UNK_0f47e0b0;
      func_0x0d6c9500(pppuVar27,puStack_128);
    }
  }
LAB_0b3c9d93:
  unaff_R13 = (long *)0xffffffff;
  if (*(long *)(lVar25 + 0x260) != 0) {
    lVar13 = *(long *)(*(long *)(param_1 + 0x90) + 0x260);
    uVar26 = *(uint *)(param_1 + 0x18);
    pppuVar27 = (undefined ***)(ulong)uVar26;
    plVar12 = (long *)func_0x0b0d7260(*(undefined8 *)(param_1 + 0x10),0x1779e2c7);
    uVar18 = (ulong)((uVar26 & 0x3ffff) >> 0xb);
    lVar22 = plVar12[1];
    uVar21 = plVar12[2] - lVar22 >> 3;
    if (lVar13 == 0) {
      if ((uVar18 < uVar21) && (lVar13 = *(long *)(lVar22 + uVar18 * 8), lVar13 != 0)) {
        uVar20 = *(uint *)(lVar13 + (ulong)(uVar26 & 0x7ff) * 4);
        uVar26 = uVar26 & 0xfffc0000 ^ uVar20;
        pppuVar27 = (undefined ***)(ulong)uVar26;
        if (uVar26 < 0x3ffff) {
          (**(code **)(*plVar12 + 0x10))(plVar12,plVar12 + 4,(uVar20 & 0x3ffff) + 1);
        }
      }
      plVar12 = *(long **)(param_1 + 0x120);
      if (plVar12 == (long *)0x0) goto LAB_0b3cb5cb;
      pppuVar27 = *(undefined ****)(*plVar12 + 0x160);
      cVar7 = (*(code *)(*pppuVar27)[3])(pppuVar27);
      if ((cVar7 == '\0') && (*(char *)((long)pppuVar27 + 0xc) != '\0')) {
        *(undefined1 *)((long)pppuVar27 + 0xc) = 0;
        uVar9 = (*(code *)(*pppuVar27)[2])(pppuVar27);
        if (0x8c < uVar9) goto LAB_0b3cb80f;
        plVar12[(ulong)(uVar9 >> 6) + 3] =
             plVar12[(ulong)(uVar9 >> 6) + 3] | 1L << ((byte)uVar9 & 0x3f);
      }
      plVar12 = *(long **)(param_1 + 0x120);
      if (plVar12 == (long *)0x0) goto LAB_0b3cb5cb;
      pppuVar27 = *(undefined ****)(*plVar12 + 0x168);
      cVar7 = (*(code *)(*pppuVar27)[3])(pppuVar27);
      if ((cVar7 == '\x02') && (*(int *)((long)pppuVar27 + 0xc) != 0)) {
        *(undefined4 *)((long)pppuVar27 + 0xc) = 0;
        uVar9 = (*(code *)(*pppuVar27)[2])(pppuVar27);
        if (0x8c < uVar9) goto LAB_0b3cb80f;
        plVar12[(ulong)(uVar9 >> 6) + 3] =
             plVar12[(ulong)(uVar9 >> 6) + 3] | 1L << ((byte)uVar9 & 0x3f);
      }
      plVar12 = *(long **)(param_1 + 0x120);
      if (plVar12 == (long *)0x0) goto LAB_0b3cb5cb;
      pppuVar27 = *(undefined ****)(*plVar12 + 0x170);
      cVar7 = (*(code *)(*pppuVar27)[3])(pppuVar27);
      if ((cVar7 == '\x02') && (*(int *)((long)pppuVar27 + 0xc) != 0)) {
        *(undefined4 *)((long)pppuVar27 + 0xc) = 0;
        uVar9 = (*(code *)(*pppuVar27)[2])(pppuVar27);
        if (0x8c < uVar9) goto LAB_0b3cb80f;
        plVar12[(ulong)(uVar9 >> 6) + 3] =
             plVar12[(ulong)(uVar9 >> 6) + 3] | 1L << ((byte)uVar9 & 0x3f);
      }
    }
    else {
      if (((uVar18 < uVar21) && (lVar13 = *(long *)(lVar22 + uVar18 * 8), lVar13 != 0)) &&
         (uVar20 = *(uint *)(lVar13 + (ulong)(uVar26 & 0x7ff) * 4),
         (uVar26 & 0xfffc0000 ^ uVar20) < 0x3ffff)) {
        lVar22 = (ulong)(uVar20 & 0x7f) * 0x1a0 +
                 *(long *)(plVar12[10] + (ulong)((uVar20 & 0x3ff80) >> 4));
        lVar13 = *(long *)(*(long *)(param_1 + 0x90) + 0x260);
      }
      else {
        plStack_138 = (long *)CONCAT44(plStack_138._4_4_,uVar26);
        func_0x0b0d8080(plVar12,&plStack_138,0);
        lVar22 = (ulong)((uint)(extraout_RDX_04 - 1U) & 0x7f) * 0x1a0 +
                 *(long *)(plVar12[10] + (extraout_RDX_04 - 1U >> 7) * 8);
        lVar13 = *(long *)(*(long *)(param_1 + 0x90) + 0x260);
      }
      if (lVar13 != 0) {
        func_0x07164560(lVar22,param_1);
      }
    }
  }
  lVar13 = *(long *)(param_1 + 0x10);
  uVar26 = *(uint *)(param_1 + 0x18);
  plVar12 = (long *)(*(long *)(lVar13 + 0x38) +
                    (ulong)((int)((ulong)(*(long *)(lVar13 + 0x40) - *(long *)(lVar13 + 0x38)) >> 3)
                            - 1U & 0x888a93a6) * 8);
  do {
    if (*plVar12 == -1) goto LAB_0b3ca0ed;
    lVar22 = *plVar12 * 0x20;
    plVar12 = (long *)(*(long *)(lVar13 + 0x50) + lVar22);
  } while (*(int *)(*(long *)(lVar13 + 0x50) + 8 + lVar22) != -0x77756c5a);
  if ((plVar12 != *(long **)(lVar13 + 0x58)) && (lVar13 = plVar12[2], lVar13 != 0)) {
    uVar18 = (ulong)((uVar26 & 0x3ffff) >> 0xb);
    if (((uVar18 < (ulong)(*(long *)(lVar13 + 0x10) - *(long *)(lVar13 + 8) >> 3)) &&
        ((lVar22 = *(long *)(*(long *)(lVar13 + 8) + uVar18 * 8), lVar22 != 0 &&
         (uVar20 = *(uint *)(lVar22 + (ulong)(uVar26 & 0x7ff) * 4),
         (uVar26 & 0xfffc0000 ^ uVar20) < 0x3ffff)))) &&
       (lVar13 = *(long *)(*(long *)(lVar13 + 0x50) + (ulong)(uVar20 >> 4 & 0x3ff8)), lVar13 != 0))
    {
      func_0x06e8c1e0(lVar13 + (ulong)(uVar20 & 0x7f) * 8,param_1 + 8);
    }
  }
LAB_0b3ca0ed:
  pppuVar27 = (undefined ***)(param_1 + 8);
  func_0x0d879c70(pppuVar27,0x1d,0);
  func_0x0d879c70(pppuVar27,0xf,0);
  lVar13 = *(long *)(param_1 + 0x90);
  if ((DAT_0f5a6478 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5a6478), iVar10 != 0)) {
    LOCK();
    UNLOCK();
    _DAT_0f5a6470 = _DAT_0f555550;
    _DAT_0f555550 = _DAT_0f555550 + 1;
    func_0x0410844d(&DAT_0f5a6478);
  }
  plVar12 = (long *)(*(long *)(lVar13 + 0x178) +
                    (ulong)(((uint)(*(int *)(lVar13 + 0x180) - (int)*(long *)(lVar13 + 0x178)) >> 3)
                            - 1 & (uint)_DAT_0f5a6470) * 8);
  do {
    if (*plVar12 == -1) goto LAB_0b3ca198;
    lVar22 = *plVar12 * 0x20;
    plVar12 = (long *)(*(long *)(lVar13 + 400) + lVar22);
  } while (*(ushort *)(*(long *)(lVar13 + 400) + 8 + lVar22) != _DAT_0f5a6470);
  if ((plVar12 != *(long **)(lVar13 + 0x198)) && (plVar12[2] != 0)) goto LAB_0b3ca2fc;
LAB_0b3ca198:
  lVar13 = *(long *)(param_1 + 0x10);
  uVar26 = *(uint *)(param_1 + 0x18);
  plVar12 = (long *)(*(long *)(lVar13 + 0x38) +
                    (ulong)((int)((ulong)(*(long *)(lVar13 + 0x40) - *(long *)(lVar13 + 0x38)) >> 3)
                            - 1U & 0xc67426f3) * 8);
  do {
    if (*plVar12 == -1) goto LAB_0b3ca26f;
    lVar22 = *plVar12 * 0x20;
    plVar12 = (long *)(*(long *)(lVar13 + 0x50) + lVar22);
  } while (*(int *)(*(long *)(lVar13 + 0x50) + 8 + lVar22) != -0x398bd90d);
  if ((plVar12 != *(long **)(lVar13 + 0x58)) && (lVar13 = plVar12[2], lVar13 != 0)) {
    uVar18 = (ulong)((uVar26 & 0x3ffff) >> 0xb);
    if (((uVar18 < (ulong)(*(long *)(lVar13 + 0x10) - *(long *)(lVar13 + 8) >> 3)) &&
        (((lVar22 = *(long *)(*(long *)(lVar13 + 8) + uVar18 * 8), lVar22 != 0 &&
          (uVar20 = *(uint *)(lVar22 + (ulong)(uVar26 & 0x7ff) * 4),
          (uVar26 & 0xfffc0000 ^ uVar20) < 0x3ffff)) &&
         (lVar13 = *(long *)(*(long *)(lVar13 + 0x50) + (ulong)(uVar20 >> 4 & 0x3ff8)), lVar13 != 0)
         ))) && ((*(byte *)(lVar13 + 1 + (ulong)(uVar20 & 0x7f) * 0x18) & 8) != 0))
    goto LAB_0b3ca304;
  }
LAB_0b3ca26f:
  plVar12 = *(long **)(param_1 + 0x90);
  if (DAT_0f5a6488 == '\0') goto LAB_0b3cb81b;
LAB_0b3ca285:
  plVar24 = (long *)(plVar12[0x2f] +
                    (ulong)(((uint)((int)plVar12[0x30] - (int)plVar12[0x2f]) >> 3) - 1 &
                           (uint)_DAT_0f5a6480) * 8);
  do {
    if (*plVar24 == -1) goto LAB_0b3ca2fc;
    lVar13 = *plVar24 * 0x20;
    plVar24 = (long *)(plVar12[0x32] + lVar13);
  } while (*(ushort *)(plVar12[0x32] + 8 + lVar13) != _DAT_0f5a6480);
  if ((plVar24 == (long *)plVar12[0x33]) || (plVar24[2] == 0)) {
LAB_0b3ca2fc:
    func_0x0d87a7b0(pppuVar27);
  }
LAB_0b3ca304:
  ppuVar17 = *pppuVar27;
  if ((DAT_0f5a4510 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5a4510), iVar10 != 0)) {
    func_0x06de1f70(0xf5a44f8);
    func_0x0410844d(&DAT_0f5a4510);
  }
  plVar12 = (long *)(ppuVar17[5] +
                    (ulong)((int)((ulong)((long)ppuVar17[6] - (long)ppuVar17[5]) >> 3) +
                            (int)unaff_R13 & _DAT_0f5a44fc) * 8);
  do {
    if (*plVar12 == -1) goto LAB_0b3ca641;
    lVar13 = *plVar12 * 0x30;
    plVar12 = (long *)(ppuVar17[8] + lVar13);
  } while (*(uint *)(ppuVar17[8] + lVar13 + 8) != _DAT_0f5a44fc);
  if (plVar12 == (long *)ppuVar17[9]) goto LAB_0b3ca641;
  if ((int)plVar12[5] != 0x75c382e5) goto LAB_0b3ca641;
  lVar13 = plVar12[2];
  if (*(char *)((long)plVar12 + 0x2c) == '\x04' || lVar13 == 0) goto LAB_0b3ca641;
  uVar26 = *(uint *)(param_1 + 0x18);
  uStack_158 = (long *)CONCAT44(*(undefined4 *)(*(long *)(param_1 + 8) + 0x128),uVar26);
  lVar22 = func_0x05abe100(*(undefined8 *)(param_1 + 0x10),0x752c8e04);
  uVar18 = (ulong)((uVar26 & 0x3ffff) >> 0xb);
  if (((uVar18 < (ulong)(*(long *)(lVar22 + 0x10) - *(long *)(lVar22 + 8) >> 3)) &&
      (lVar23 = *(long *)(*(long *)(lVar22 + 8) + uVar18 * 8), lVar23 != 0)) &&
     (uVar20 = *(uint *)(lVar23 + (ulong)(uVar26 & 0x7ff) * 4),
     (uVar26 & 0xfffc0000 ^ uVar20) < 0x3ffff)) {
    lVar22 = (ulong)((uVar20 & 0x7f) * 0xc) +
             *(long *)(*(long *)(lVar22 + 0x50) + (ulong)((uVar20 & 0x3ff80) >> 4));
  }
  else {
    plStack_138 = (long *)CONCAT44(plStack_138._4_4_,uVar26);
    func_0x05abf040(lVar22,&plStack_138,0);
    lVar22 = (ulong)(((uint)(extraout_RDX_05 - 1U) & 0x7f) * 0xc) +
             *(long *)(*(long *)(lVar22 + 0x50) + (extraout_RDX_05 - 1U >> 7) * 8);
  }
  unaff_R13 = (long *)0xffffffff;
  if (*(int *)(lVar22 + 8) != 0) {
    *(undefined4 *)(lVar22 + 8) = 0;
  }
  uVar33 = _DAT_011987fc;
  if (((DAT_0f5a2e28 == '\0') && (*(char *)(lVar13 + 0x18) == '\0')) &&
     (((DAT_0f5a2e16 & 1) == 0 ||
      ((*(char *)(lVar13 + 7) != '\0' ||
       (cVar7 = FUN_04fa7a10(lVar13,0xf5a2e10), uVar33 = _DAT_011987fc, cVar7 == '\0')))))) {
    uVar33 = _DAT_01198bc4;
  }
  uStack_148 = CONCAT44(uStack_148._4_4_,uVar33);
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x10);
  if (plVar12 == (long *)0x0) goto LAB_0b3cb5d0;
  do {
    *plVar12 = (long)&UNK_0f0ce9e0;
    *(float *)(plVar12 + 1) = (float)uStack_148;
    *(undefined1 *)((long)plVar12 + 0xc) = 0;
    plStack_138 = plVar12;
    func_0x07432e80(&ppuStack_130,&UNK_012c198e,0x13,6);
    (**(code **)(*plStack_138 + 0x28))(plStack_138,*pppuVar27,&uStack_158);
    if (lStack_90 != 0) {
      lStack_88 = lStack_90;
      func_0x0412a280();
    }
    if (lStack_a8 != 0) {
      lStack_a0 = lStack_a8;
      func_0x0412a280();
    }
    if (lStack_c0 != 0) {
      lStack_b8 = lStack_c0;
      func_0x0412a280();
    }
    if (lStack_d8 != 0) {
      lStack_d0 = lStack_d8;
      func_0x0412a280();
    }
    if (lStack_f0 != 0) {
      lStack_e8 = lStack_f0;
      func_0x0412a280();
    }
    if (lStack_108 != 0) {
      lStack_100 = lStack_108;
      func_0x0412a280();
    }
    if (((ulong)ppuStack_130 & 1) != 0) {
      func_0x0412a280(pcStack_120);
    }
    plVar12 = plStack_138;
    plStack_138 = (long *)0x0;
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 8))();
    }
LAB_0b3ca641:
    iVar10 = (int)unaff_R13;
    plVar12 = *(long **)(*(long *)(param_1 + 0x90) + 800);
    if (plVar12 == (long *)0x0) goto LAB_0b3ca768;
    plVar24 = *(long **)(param_1 + 0x120);
    if (plVar24 != (long *)0x0) {
      lVar13 = plVar12[2];
      pppuVar27 = *(undefined ****)(*plVar24 + 0x260);
      cVar7 = (*(code *)(*pppuVar27)[3])(pppuVar27);
      if ((cVar7 == '\x02') && (*(int *)((long)pppuVar27 + 0xc) != (int)lVar13)) {
        *(int *)((long)pppuVar27 + 0xc) = (int)lVar13;
        uVar9 = (*(code *)(*pppuVar27)[2])(pppuVar27);
        if (0x8c < uVar9) goto LAB_0b3cb80f;
        plVar24[(ulong)(uVar9 >> 6) + 3] =
             plVar24[(ulong)(uVar9 >> 6) + 3] | 1L << ((byte)uVar9 & 0x3f);
      }
      plVar24 = *(long **)(param_1 + 0x120);
      if (plVar24 != (long *)0x0) {
        iVar11 = *(int *)((long)plVar12 + 0xc);
        iVar30 = 0;
        if (((0x260 < ((int)plVar24[1] - (int)*plVar24 & 0x7fff8U)) &&
            (pppuVar27 = *(undefined ****)(*plVar24 + 0x260), iVar30 = 0,
            pppuVar27 != (undefined ***)0x0)) &&
           (cVar7 = (*(code *)(*pppuVar27)[3])(pppuVar27), cVar7 == '\x02')) {
          iVar30 = *(int *)((long)pppuVar27 + 0xc);
        }
        if (iVar30 < iVar11) {
          iVar11 = iVar30;
        }
        plVar12 = *(long **)(param_1 + 0x120);
        if (plVar12 != (long *)0x0) break;
      }
    }
LAB_0b3cb5cb:
    plVar12 = (long *)func_0x04890760();
LAB_0b3cb5d0:
    func_0x0eec74c0(0x10,0);
  } while( true );
  pppuVar27 = *(undefined ****)(*plVar12 + 600);
  cVar7 = (*(code *)(*pppuVar27)[3])(pppuVar27);
  if ((cVar7 != '\x02') || (*(int *)((long)pppuVar27 + 0xc) == iVar11)) goto LAB_0b3ca768;
  *(int *)((long)pppuVar27 + 0xc) = iVar11;
  uVar9 = (*(code *)(*pppuVar27)[2])(pppuVar27);
  if (uVar9 < 0x8d) goto code_r0x0b3ca754;
LAB_0b3cb80f:
  func_0x04882ef0(&UNK_012d4a56);
LAB_0b3cb81b:
  iVar10 = func_0x04108328(&DAT_0f5a6488);
  if (iVar10 != 0) {
    LOCK();
    UNLOCK();
    _DAT_0f5a6480 = _DAT_0f555550;
    _DAT_0f555550 = _DAT_0f555550 + 1;
    func_0x0410844d(&DAT_0f5a6488);
  }
  goto LAB_0b3ca285;
code_r0x0b3ca754:
  plVar12[(ulong)(uVar9 >> 6) + 3] = plVar12[(ulong)(uVar9 >> 6) + 3] | 1L << ((byte)uVar9 & 0x3f);
LAB_0b3ca768:
  lVar13 = *(long *)(*(long *)(param_1 + 0x90) + 0x220);
  if (lVar13 != 0) {
    uStack_148 = CONCAT44(uStack_148._4_4_,*(undefined4 *)(lVar13 + 8));
    uVar14 = func_0x0b3cc3f0(param_1);
    uVar15 = func_0x0b3cc3f0(param_1);
    uVar15 = func_0x0bba2530(uVar15,0xf6cda90);
    func_0x0bbe5cf0(uVar15,uVar14);
  }
  if ((DAT_0f6b32f8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f6b32f8), iVar11 != 0)) {
    LOCK();
    UNLOCK();
    _DAT_0f6b32f0 = _DAT_0f555550;
    _DAT_0f555550 = _DAT_0f555550 + 1;
    func_0x0410844d(&DAT_0f6b32f8);
  }
  plVar12 = (long *)(*(long *)(lVar25 + 0x178) +
                    (ulong)(((uint)(*(int *)(lVar25 + 0x180) - (int)*(long *)(lVar25 + 0x178)) >> 3)
                            - 1 & (uint)_DAT_0f6b32f0) * 8);
  do {
    if (*plVar12 == -1) goto LAB_0b3cb18e;
    lVar13 = *plVar12 * 0x20;
    plVar12 = (long *)(*(long *)(lVar25 + 400) + lVar13);
  } while (*(ushort *)(*(long *)(lVar25 + 400) + 8 + lVar13) != _DAT_0f6b32f0);
  if ((plVar12 != *(long **)(lVar25 + 0x198)) && (plVar12[2] != 0)) {
    lVar25 = *(long *)(param_1 + 0x90);
    if ((DAT_0f6b32f8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f6b32f8), iVar11 != 0)) {
      LOCK();
      UNLOCK();
      _DAT_0f6b32f0 = _DAT_0f555550;
      _DAT_0f555550 = _DAT_0f555550 + 1;
      func_0x0410844d(&DAT_0f6b32f8);
    }
    plVar12 = (long *)(*(long *)(lVar25 + 0x178) +
                      (ulong)(((uint)(*(int *)(lVar25 + 0x180) - (int)*(long *)(lVar25 + 0x178)) >>
                              3) - 1 & (uint)_DAT_0f6b32f0) * 8);
    do {
      if (*plVar12 == -1) goto LAB_0b3cb18e;
      lVar13 = *plVar12 * 0x20;
      plVar12 = (long *)(*(long *)(lVar25 + 400) + lVar13);
    } while (*(ushort *)(*(long *)(lVar25 + 400) + 8 + lVar13) != _DAT_0f6b32f0);
    if ((((plVar12 != *(long **)(lVar25 + 0x198)) && (plVar12[2] != 0)) &&
        ((char)uStack_140 != '\x01')) &&
       (((char)uStack_140 != '\a' && (lVar25 = *(long *)(param_1 + 0x90), lVar25 != 0)))) {
      if ((DAT_0f6b32f8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f6b32f8), iVar11 != 0)) {
        LOCK();
        UNLOCK();
        _DAT_0f6b32f0 = _DAT_0f555550;
        _DAT_0f555550 = _DAT_0f555550 + 1;
        func_0x0410844d(&DAT_0f6b32f8);
      }
      plVar12 = (long *)(*(long *)(lVar25 + 0x178) +
                        (ulong)(((uint)(*(int *)(lVar25 + 0x180) - (int)*(long *)(lVar25 + 0x178))
                                >> 3) - 1 & (uint)_DAT_0f6b32f0) * 8);
      do {
        if (*plVar12 == -1) {
          plVar24 = *(long **)(lVar25 + 0x198);
          plVar12 = plVar24;
          goto LAB_0b3cb174;
        }
        lVar13 = *plVar12 * 0x20;
        plVar12 = (long *)(*(long *)(lVar25 + 400) + lVar13);
      } while (*(ushort *)(*(long *)(lVar25 + 400) + 8 + lVar13) != _DAT_0f6b32f0);
      plVar24 = *(long **)(lVar25 + 0x198);
LAB_0b3cb174:
      if ((plVar12 != plVar24) && (plVar12[2] != 0)) {
        func_0x0b4009d0(param_1,plVar12[2] + 0x20);
      }
    }
  }
LAB_0b3cb18e:
  if (((*(char *)(param_1 + 0x82) != '\x01') || (*(long *)(param_1 + 0x1c8) == 0)) ||
     (plVar12 = (long *)func_0x0412c300(), plVar12 == (long *)0x0)) goto LAB_0b3cb416;
  lVar13 = *(long *)(param_1 + 0x1c0);
  LOCK();
  plVar24 = plVar12 + 1;
  lVar25 = *plVar24;
  *plVar24 = *plVar24 + -1;
  UNLOCK();
  if (lVar25 == 0) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    func_0x0412c2d0(plVar12);
  }
  if ((lVar13 == 0) || (*(char *)(param_1 + 0x251) != '\0')) goto LAB_0b3cb416;
  lVar25 = *(long *)(param_1 + 0x10);
  uVar26 = *(uint *)(param_1 + 0x18);
  lVar13 = *(long *)(lVar25 + 0x38);
  uVar20 = (int)((ulong)(*(long *)(lVar25 + 0x40) - lVar13) >> 3) + iVar10;
  plVar12 = (long *)(lVar13 + (ulong)(uVar20 & 0xa9482f13) * 8);
  lVar22 = *(long *)(lVar25 + 0x50);
  do {
    if (*plVar12 == -1) {
      plVar24 = *(long **)(lVar25 + 0x58);
      goto LAB_0b3cb2d5;
    }
    lVar23 = *plVar12 * 0x20;
    plVar12 = (long *)(lVar22 + lVar23);
  } while (*(int *)(lVar22 + 8 + lVar23) != -0x56b7d0ed);
  plVar24 = *(long **)(lVar25 + 0x58);
  if ((plVar12 != plVar24) && (lVar25 = plVar12[2], lVar25 != 0)) {
    uVar18 = (ulong)((uVar26 & 0x3ffff) >> 0xb);
    if ((uVar18 < (ulong)(*(long *)(lVar25 + 0x10) - *(long *)(lVar25 + 8) >> 3)) &&
       (((lVar23 = *(long *)(*(long *)(lVar25 + 8) + uVar18 * 8), lVar23 != 0 &&
         (uVar3 = *(uint *)(lVar23 + (ulong)(uVar26 & 0x7ff) * 4),
         (uVar26 & 0xfffc0000 ^ uVar3) < 0x3ffff)) &&
        (*(long *)(*(long *)(lVar25 + 0x50) + (ulong)(uVar3 >> 4 & 0x3ff8)) != 0))))
    goto LAB_0b3cb416;
  }
LAB_0b3cb2d5:
  plVar12 = (long *)(lVar13 + (ulong)(uVar20 & 0xc29078a0) * 8);
  do {
    if (*plVar12 == -1) goto LAB_0b3cb358;
    lVar25 = *plVar12 * 0x20;
    plVar12 = (long *)(lVar22 + lVar25);
  } while (*(int *)(lVar22 + 8 + lVar25) != -0x3d6f8760);
  if ((plVar12 == plVar24) || (lVar25 = plVar12[2], lVar25 == 0)) {
LAB_0b3cb358:
    bVar31 = false;
  }
  else {
    uVar18 = (ulong)((uVar26 & 0x3ffff) >> 0xb);
    if (((ulong)(*(long *)(lVar25 + 0x10) - *(long *)(lVar25 + 8) >> 3) <= uVar18) ||
       (lVar25 = *(long *)(*(long *)(lVar25 + 8) + uVar18 * 8), lVar25 == 0)) goto LAB_0b3cb358;
    bVar31 = (uVar26 & 0xfffc0000 ^ *(uint *)(lVar25 + (ulong)(uVar26 & 0x7ff) * 4)) < 0x3ffff;
  }
  auVar37 = func_0x0b3cc630(param_1,0);
  uVar26 = *(uint *)(param_1 + 0x18);
  lVar25 = func_0x06dc4d80(*(undefined8 *)(param_1 + 0x10),0xa9482f13);
  uVar18 = (ulong)((uVar26 & 0x3ffff) >> 0xb);
  if ((((ulong)(*(long *)(lVar25 + 0x10) - *(long *)(lVar25 + 8) >> 3) <= uVar18) ||
      (lVar13 = *(long *)(*(long *)(lVar25 + 8) + uVar18 * 8), lVar13 == 0)) ||
     (0x3fffe < (uVar26 & 0xfffc0000 ^ *(uint *)(lVar13 + (ulong)(uVar26 & 0x7ff) * 4)))) {
    plStack_138 = (long *)CONCAT44(plStack_138._4_4_,uVar26);
    auVar36 = func_0x0492f360(lVar25,&plStack_138,0,0);
    uStack_140 = auVar36._0_8_;
    puVar16 = (undefined1 *)func_0x06dc5670(lVar25,auVar36._8_8_ + -1);
    *puVar16 = bVar31;
    *(undefined1 (*) [12])(puVar16 + 4) = auVar37;
    *(undefined8 *)(puVar16 + 0x10) = 0;
    *(undefined8 *)(puVar16 + 0x18) = 0;
    *(undefined8 *)(puVar16 + 0x1d) = 0;
    iVar10 = -1;
  }
LAB_0b3cb416:
  if (*(char *)(param_1 + 0x80) == '\x01') {
    lVar25 = *(long *)(param_1 + 0x10);
    uVar26 = *(uint *)(param_1 + 0x18);
    plVar12 = (long *)(*(long *)(lVar25 + 0x38) +
                      (ulong)((int)((ulong)(*(long *)(lVar25 + 0x40) - *(long *)(lVar25 + 0x38)) >>
                                   3) + iVar10 & 0x89abb47b) * 8);
    lVar13 = *(long *)(lVar25 + 0x50);
    plVar24 = plVar12;
    do {
      if (*plVar24 == -1) {
        return;
      }
      lVar22 = *plVar24 * 0x20;
      plVar24 = (long *)(lVar13 + lVar22);
    } while (*(int *)(lVar13 + 8 + lVar22) != -0x76544b85);
    plVar5 = *(long **)(lVar25 + 0x58);
    if ((plVar24 != plVar5) && (lVar25 = plVar24[2], lVar25 != 0)) {
      uVar18 = (ulong)((uVar26 & 0x3ffff) >> 0xb);
      if ((uVar18 < (ulong)(*(long *)(lVar25 + 0x10) - *(long *)(lVar25 + 8) >> 3)) &&
         (lVar22 = *(long *)(*(long *)(lVar25 + 8) + uVar18 * 8), lVar22 != 0)) {
        uVar20 = *(uint *)(lVar22 + (ulong)(uVar26 & 0x7ff) * 4);
        if (((((uVar20 ^ uVar26 & 0xfffc0000) < 0x3ffff) &&
             (lVar25 = *(long *)(*(long *)(lVar25 + 0x50) + (ulong)((uVar20 & 0x3ff80) >> 4)),
             lVar25 != 0)) &&
            (plVar24 = (long *)(lVar25 + (ulong)((uVar20 & 0x7f) << 4)), (char)plVar24[1] == '\x01')
            ) && (*plVar24 != 0)) {
          do {
            lVar25 = *plVar12;
            plVar12 = plVar5;
            if (lVar25 == -1) break;
            lVar25 = lVar25 * 0x20;
            plVar12 = (long *)(lVar13 + lVar25);
          } while (*(int *)(lVar13 + 8 + lVar25) != -0x76544b85);
          if (((plVar12 != plVar5) && (lVar25 = plVar12[2], lVar25 != 0)) &&
             (((uVar18 < (ulong)(*(long *)(lVar25 + 0x10) - *(long *)(lVar25 + 8) >> 3) &&
               ((lVar13 = *(long *)(*(long *)(lVar25 + 8) + uVar18 * 8), lVar13 != 0 &&
                (uVar20 = *(uint *)(lVar13 + (ulong)(uVar26 & 0x7ff) * 4),
                (uVar26 & 0xfffc0000 ^ uVar20) < 0x3ffff)))) &&
              (lVar25 = *(long *)(*(long *)(lVar25 + 0x50) + (ulong)(uVar20 >> 4 & 0x3ff8)),
              lVar25 != 0)))) {
            func_0x0b3cc8a0(lVar25 + (ulong)((uVar20 & 0x7f) << 4),*(undefined8 *)(param_1 + 0x1d0))
            ;
          }
        }
      }
    }
  }
  return;
}


