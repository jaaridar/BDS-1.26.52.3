/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xba21df0 (ELF vaddr 0xb921df0)
 * Label: string:Type &Editor::ServiceProviderCollection::get() [Type = Edito
 * Body:  [[0ba21df0, 0ba25f29]]
 * Ghidra: FUN_0ba21df0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0ba21df0(undefined8 *param_1,long *******param_2,undefined8 *param_3)

{
  long *******ppppppplVar1;
  uint uVar2;
  long *plVar3;
  long *****ppppplVar4;
  long **pplVar5;
  long ***ppplVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  long *plVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  char cVar16;
  uint uVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  long *******ppppppplVar22;
  undefined8 uVar23;
  long *******ppppppplVar24;
  long ******pppppplVar25;
  undefined8 uVar26;
  ulong uVar27;
  undefined8 *puVar28;
  undefined4 uVar29;
  long *******ppppppplVar30;
  undefined1 extraout_DL;
  undefined1 extraout_DL_06;
  undefined1 extraout_DL_07;
  undefined1 extraout_DL_08;
  undefined1 extraout_DL_00;
  undefined1 extraout_DL_01;
  undefined1 extraout_DL_02;
  undefined1 extraout_DL_03;
  undefined1 extraout_DL_04;
  undefined1 extraout_DL_05;
  long *******unaff_RBP;
  ulong uVar31;
  long ******pppppplVar32;
  long lVar33;
  long lVar34;
  undefined *puVar35;
  undefined1 uVar36;
  bool bVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined4 uStack_12c;
  undefined1 auStack_128 [16];
  long *******ppppppplStack_118;
  long *******ppppppplStack_110;
  code *pcStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  code *pcStack_e0;
  long *******ppppppplStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  code *pcStack_c0;
  undefined4 uStack_b8;
  char cStack_b4;
  long lStack_a0;
  long *******ppppppplStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  long *******ppppppplStack_60;
  long *******ppppppplStack_58;
  long *******ppppppplStack_50;
  long *******ppppppplStack_48;
  undefined8 *puStack_40;
  long lStack_38;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0xffffffffffffff;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = *param_3;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_3 + 1);
  param_1[6] = param_2;
  lVar19 = func_0x064aedc0(param_2);
  if (lVar19 == 0) {
    puVar35 = &UNK_01273e63;
LAB_0ba25b32:
    cVar16 = func_0x0eeddcf0(&UNK_01259441,&UNK_01198d5e,0x15c,&UNK_0119dfc2,puVar35);
LAB_0ba25b3e:
    do {
      if (cVar16 != '\0') {
        _DAT_00000000 = 0xdeadc0de;
      }
      func_0x04109e60();
LAB_0ba25b52:
      cVar16 = func_0x0eeddcf0(&UNK_01259441,&UNK_01198d5e,0x15c,&UNK_0119dfc2,&UNK_01319ffc);
    } while( true );
  }
  lVar20 = func_0x0b704b80(param_1[6]);
  if (lVar20 == 0) {
    puVar35 = &UNK_01421adf;
    goto LAB_0ba25b32;
  }
  ppppppplStack_60 = param_2;
  plVar21 = (long *)func_0x05f95d30(param_1[6]);
  if (plVar21 == (long *)0x0) {
    puVar35 = &UNK_01327969;
    goto LAB_0ba25b32;
  }
  plVar3 = param_1 + 4;
  ppppppplVar22 = (long *******)(**(code **)(*plVar21 + 0x648))(plVar21);
  plVar13 = _DAT_0f6c4860;
  plVar21 = (long *)*plVar3;
  ppppppplStack_58 = (long *******)plVar3;
  if ((plVar21 == (long *)0x0) ||
     (lVar34 = *plVar21, lVar34 == 0 || (int)plVar21[1] != *(int *)(param_1 + 5))) {
    param_1[7] = _DAT_0f6c4860;
    iVar18 = _DAT_0f6c4868;
    *(int *)(param_1 + 8) = _DAT_0f6c4868;
    uVar15 = uRam000000000f6c487c;
    uVar14 = uRam000000000f6c4878;
    uVar29 = uRam000000000f6c4874;
    *(undefined4 *)(param_1 + 9) = _DAT_0f6c4870;
    *(undefined4 *)((long)param_1 + 0x4c) = uVar29;
    *(undefined4 *)(param_1 + 10) = uVar14;
    *(undefined4 *)((long)param_1 + 0x54) = uVar15;
    if (plVar13 == (long *)0x0) goto LAB_0ba22313;
    if (*plVar13 == 0 || (int)plVar13[1] != iVar18) goto LAB_0ba22313;
    func_0x0d8568b0(*plVar13,param_1[9]);
    goto LAB_0ba22313;
  }
  ppppppplStack_110 = (long *******)(lVar34 + 0x10);
  ppppppplStack_d8 = (long *******)((ulong)ppppppplStack_d8 & 0xffffffffffff0000);
  puStack_d0 = &UNK_0badbe10;
  puStack_c8 = &UNK_0badc000;
  unaff_RBP = (long *******)&uStack_b8;
  ppppppplStack_98 = (long *******)0x0;
  uStack_88 = 0;
  uStack_80 = 0x100000130;
  plStack_78 = (long *)0x0;
  ppppppplStack_118 = (long *******)&UNK_0f2fbb88;
  uStack_f8 = (long *******)&ppppppplStack_118;
  ppppppplStack_48 = ppppppplVar22;
  func_0x065bdd40(&ppppppplStack_118,unaff_RBP);
  if ((long ********)uStack_f8 == &ppppppplStack_118) {
    lVar33 = 0x20;
LAB_0ba21fab:
    (**(code **)((long)*uStack_f8 + lVar33))();
  }
  else {
    lVar33 = 0x28;
    if (uStack_f8 != (long *******)0x0) goto LAB_0ba21fab;
  }
  ppppppplVar22 = (long *******)func_0x0d856c70(lVar34,&ppppppplStack_d8);
  plVar21 = plStack_78;
  puStack_40 = (undefined8 *)CONCAT71(puStack_40._1_7_,extraout_DL);
  plStack_78 = (long *)0x0;
  if (plVar21 != (long *)0x0) {
    (**(code **)(*plVar21 + 8))();
  }
  if (ppppppplStack_98 == unaff_RBP) {
    (*(code *)(*ppppppplStack_98)[4])();
  }
  else if (ppppppplStack_98 != (long *******)0x0) {
    (*(code *)(*ppppppplStack_98)[5])();
  }
  if ((int)ppppppplVar22 == -1) goto LAB_0ba22246;
  auVar38._8_8_ = auStack_128._8_8_;
  auVar38._0_8_ = auStack_128._0_8_;
  auStack_128._8_8_ = lVar34 + 0x38;
  uStack_12c = 0xba730274;
  auStack_128._0_8_ = lVar34 + 0x70;
  plVar21 = (long *)(*(long *)(lVar34 + 0x70) +
                    (ulong)((int)((ulong)(*(long *)(lVar34 + 0x78) - *(long *)(lVar34 + 0x70)) >> 3)
                            - 1U & 0xba730274) * 8);
  do {
    if (*plVar21 == -1) goto LAB_0ba2209f;
    lVar33 = *plVar21 * 0x20;
    plVar21 = (long *)(*(long *)(lVar34 + 0x88) + lVar33);
  } while (*(int *)(*(long *)(lVar34 + 0x88) + 8 + lVar33) != -0x458cfd8c);
  if (plVar21 != *(long **)(lVar34 + 0x90)) {
    ppppppplVar24 = (long *******)plVar21[2];
    goto LAB_0ba221f5;
  }
LAB_0ba2209f:
  unaff_RBP = (long *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (unaff_RBP == (long *******)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  unaff_RBP[1] = (long ******)0x0;
  unaff_RBP[2] = (long ******)0x0;
  *unaff_RBP = (long ******)&UNK_0f2fbc08;
  if (DAT_0f581a30 == '\0') goto LAB_0ba25c96;
LAB_0ba220ec:
  ppppppplStack_118 = unaff_RBP + 3;
  unaff_RBP[8] = (long ******)0x0;
  unaff_RBP[9] = (long ******)0x0;
  unaff_RBP[6] = (long ******)0x0;
  unaff_RBP[7] = (long ******)0x0;
  unaff_RBP[4] = (long ******)0x0;
  unaff_RBP[5] = (long ******)0x0;
  unaff_RBP[10] = (long ******)0xf581a18;
  *(undefined1 *)(unaff_RBP + 0xb) = 1;
  unaff_RBP[0xc] = (long ******)0xffffffff;
  unaff_RBP[3] = (long ******)&UNK_0f2fbc58;
  unaff_RBP[0xd] = (long ******)0x0;
  unaff_RBP[0xe] = (long ******)0x0;
  unaff_RBP[0xf] = (long ******)0x0;
  ppppppplStack_110 = unaff_RBP;
  func_0x065bf170(auStack_128._0_8_,&uStack_12c,&ppppppplStack_118);
  puStack_c8 = &UNK_065bf690;
  uStack_b8 = 0x145ad657;
  pcStack_c0 = (code *)0x0;
  cStack_b4 = '\x03';
  ppppppplStack_d8 = (long *******)auStack_128._8_8_;
  (*(code *)(*ppppppplStack_118)[5])(ppppppplStack_118,&ppppppplStack_d8);
  if (pcStack_c0 != (code *)0x0) {
    (*pcStack_c0)(&ppppppplStack_d8);
  }
  ppppppplVar1 = ppppppplStack_110;
  ppppppplVar24 = ppppppplStack_118;
  auVar38 = auStack_128;
  if (ppppppplStack_110 != (long *******)0x0) {
    LOCK();
    ppppppplVar30 = ppppppplStack_110 + 1;
    pppppplVar25 = *ppppppplVar30;
    *ppppppplVar30 = (long ******)((long)*ppppppplVar30 + -1);
    UNLOCK();
    if (pppppplVar25 == (long ******)0x0) {
      auStack_128._0_8_ = ppppppplStack_118;
      (*(code *)(*ppppppplStack_110)[2])(ppppppplStack_110);
      func_0x0412c2d0(ppppppplVar1);
      auVar38._8_8_ = auStack_128._8_8_;
      auVar38._0_8_ = auStack_128._0_8_;
      ppppppplVar24 = (long *******)auStack_128._0_8_;
    }
  }
LAB_0ba221f5:
  auStack_128 = auVar38;
  auVar38 = func_0x0d8547a0(ppppppplVar24,ppppppplVar22,0,0);
  ppppppplStack_50 = auVar38._8_8_;
  auStack_128._8_8_ = auVar38._0_8_;
  unaff_RBP = (long *******)((long)ppppppplStack_50 + -1);
  auStack_128._0_8_ = ppppppplVar24;
  uVar23 = func_0x0bade4f0(ppppppplVar24);
  func_0x0666d7f0(uVar23,lVar19,lVar20,ppppppplStack_48,ppppppplStack_58);
LAB_0ba22246:
  lVar19 = *(long *)(lVar34 + 8);
  if (lVar19 == 0) {
    uVar29 = 0;
  }
  else {
    uVar29 = *(undefined4 *)(lVar19 + 8);
  }
  plVar21 = (long *)(*(long *)(lVar34 + 0x70) +
                    (ulong)((int)((ulong)(*(long *)(lVar34 + 0x78) - *(long *)(lVar34 + 0x70)) >> 3)
                            - 1U & 0xba730274) * 8);
  do {
    if (*plVar21 == -1) {
      plVar21 = *(long **)(lVar34 + 0x90);
      break;
    }
    lVar20 = *plVar21 * 0x20;
    plVar21 = (long *)(*(long *)(lVar34 + 0x88) + lVar20);
  } while (*(int *)(*(long *)(lVar34 + 0x88) + 8 + lVar20) != -0x458cfd8c);
  uVar27 = *(ulong *)(*(long *)(*(long *)(plVar21[2] + 8) +
                               ((ulong)ppppppplVar22 >> 0xc & 0xfffff) * 8) +
                     (ulong)((uint)ppppppplVar22 & 0xfff) * 8);
  lVar20 = *(long *)(*(long *)(plVar21[2] + 0x50) + (uVar27 >> 7 & 0x1ffffff) * 8);
  lVar33 = (ulong)((uint)uVar27 & 0x7f) * 0x130;
  *(long *)(lVar20 + lVar33) = lVar19;
  *(undefined4 *)(lVar20 + 8 + lVar33) = uVar29;
  *(long ********)(lVar20 + 0x10 + lVar33) = ppppppplVar22;
  *(undefined1 *)(lVar20 + 0x18 + lVar33) = puStack_40._0_1_;
  lVar19 = *(long *)(lVar34 + 8);
  if (lVar19 == 0) {
    uVar29 = 0;
  }
  else {
    uVar29 = *(undefined4 *)(lVar19 + 8);
  }
  param_1[7] = lVar19;
  *(undefined4 *)(param_1 + 8) = uVar29;
  param_1[9] = ppppppplVar22;
  *(undefined1 *)(param_1 + 10) = puStack_40._0_1_;
LAB_0ba22313:
  lVar19 = func_0x0b92b540(param_1[6]);
  plVar21 = _DAT_0f6c48b0;
  if (lVar19 == 0) goto LAB_0ba25b52;
  plVar3 = (long *)*ppppppplStack_58;
  if ((plVar3 == (long *)0x0) ||
     (lVar20 = *plVar3, lVar20 == 0 || (int)plVar3[1] != *(int *)(param_1 + 5))) {
    param_1[0xb] = _DAT_0f6c48b0;
    iVar18 = _DAT_0f6c48b8;
    *(int *)(param_1 + 0xc) = _DAT_0f6c48b8;
    uVar15 = uRam000000000f6c48cc;
    uVar14 = uRam000000000f6c48c8;
    uVar29 = uRam000000000f6c48c4;
    *(undefined4 *)(param_1 + 0xd) = _DAT_0f6c48c0;
    *(undefined4 *)((long)param_1 + 0x6c) = uVar29;
    *(undefined4 *)(param_1 + 0xe) = uVar14;
    *(undefined4 *)((long)param_1 + 0x74) = uVar15;
    if ((plVar21 != (long *)0x0) && (*plVar21 != 0 && (int)plVar21[1] == iVar18)) {
      func_0x0d8568b0(*plVar21,param_1[0xd]);
    }
  }
  else {
    ppppppplStack_110 = (long *******)(lVar20 + 0x10);
    ppppppplStack_d8 = (long *******)((ulong)ppppppplStack_d8 & 0xffffffffffff0000);
    puStack_d0 = &UNK_0bae1600;
    puStack_c8 = &UNK_0bae17f0;
    unaff_RBP = (long *******)&uStack_b8;
    ppppppplStack_98 = (long *******)0x0;
    uStack_88 = 0;
    uStack_80 = 0x100000038;
    plStack_78 = (long *)0x0;
    ppppppplStack_118 = (long *******)&UNK_0f2fbe28;
    uStack_f8 = (long *******)&ppppppplStack_118;
    func_0x065bdd40(&ppppppplStack_118,unaff_RBP);
    if ((long ********)uStack_f8 == &ppppppplStack_118) {
      lVar34 = 0x20;
LAB_0ba22440:
      (**(code **)((long)*uStack_f8 + lVar34))();
    }
    else {
      lVar34 = 0x28;
      if (uStack_f8 != (long *******)0x0) goto LAB_0ba22440;
    }
    uVar27 = func_0x0d856c70(lVar20,&ppppppplStack_d8);
    plVar21 = plStack_78;
    puStack_40 = (undefined8 *)CONCAT71(puStack_40._1_7_,extraout_DL_00);
    plStack_78 = (long *)0x0;
    if (plVar21 != (long *)0x0) {
      (**(code **)(*plVar21 + 8))();
    }
    uVar17 = (uint)uVar27;
    if (ppppppplStack_98 == unaff_RBP) {
      (*(code *)(*ppppppplStack_98)[4])();
joined_r0x0ba22677:
      if (uVar17 != 0xffffffff) goto LAB_0ba224ab;
LAB_0ba22653:
      lVar19 = *(long *)(lVar20 + 8);
      if (lVar19 == 0) goto LAB_0ba22701;
LAB_0ba22660:
      uVar29 = *(undefined4 *)(lVar19 + 8);
    }
    else {
      if (ppppppplStack_98 == (long *******)0x0) goto joined_r0x0ba22677;
      (*(code *)(*ppppppplStack_98)[5])();
      if (uVar17 == 0xffffffff) goto LAB_0ba22653;
LAB_0ba224ab:
      uStack_12c = 0x38b774aa;
      plVar21 = (long *)(*(long *)(lVar20 + 0x70) +
                        (ulong)((int)((ulong)(*(long *)(lVar20 + 0x78) - *(long *)(lVar20 + 0x70))
                                     >> 3) - 1U & 0x38b774aa) * 8);
      do {
        if (*plVar21 == -1) goto LAB_0ba2250f;
        lVar34 = *plVar21 * 0x20;
        plVar21 = (long *)(*(long *)(lVar20 + 0x88) + lVar34);
      } while (*(int *)(*(long *)(lVar20 + 0x88) + 8 + lVar34) != 0x38b774aa);
      if (plVar21 == *(long **)(lVar20 + 0x90)) {
LAB_0ba2250f:
        ppppppplStack_48 = (long *******)(lVar20 + 0x38);
        ppppppplVar22 = (long *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
        if (ppppppplVar22 == (long *******)0x0) {
          func_0x0eec74c0(0x80,0);
        }
        ppppppplVar22[1] = (long ******)0x0;
        ppppppplVar22[2] = (long ******)0x0;
        *ppppppplVar22 = (long ******)&UNK_0f2fbea8;
        if ((DAT_0f5a0920 == '\0') && (iVar18 = FUN_04108328(&DAT_0f5a0920), iVar18 != 0)) {
          func_0x06ca66c0(0xf5a0908);
          func_0x0410844d(&DAT_0f5a0920);
        }
        ppppppplStack_118 = ppppppplVar22 + 3;
        ppppppplVar22[8] = (long ******)0x0;
        ppppppplVar22[9] = (long ******)0x0;
        ppppppplVar22[6] = (long ******)0x0;
        ppppppplVar22[7] = (long ******)0x0;
        ppppppplVar22[4] = (long ******)0x0;
        ppppppplVar22[5] = (long ******)0x0;
        ppppppplVar22[10] = (long ******)0xf5a0908;
        *(undefined1 *)(ppppppplVar22 + 0xb) = 1;
        ppppppplVar22[0xc] = (long ******)0xffffffff;
        ppppppplVar22[3] = (long ******)&UNK_0f2fbef8;
        ppppppplVar22[0xd] = (long ******)0x0;
        ppppppplVar22[0xe] = (long ******)0x0;
        ppppppplVar22[0xf] = (long ******)0x0;
        ppppppplStack_110 = ppppppplVar22;
        func_0x065bf170(lVar20 + 0x70,&uStack_12c,&ppppppplStack_118);
        puStack_c8 = &UNK_065bf690;
        uStack_b8 = 0x145ad657;
        pcStack_c0 = (code *)0x0;
        cStack_b4 = '\x03';
        ppppppplStack_d8 = ppppppplStack_48;
        (*(code *)(*ppppppplStack_118)[5])(ppppppplStack_118,&ppppppplStack_d8);
        if (pcStack_c0 != (code *)0x0) {
          (*pcStack_c0)(&ppppppplStack_d8);
        }
        ppppppplVar22 = ppppppplStack_110;
        unaff_RBP = ppppppplStack_118;
        if (ppppppplStack_110 != (long *******)0x0) {
          LOCK();
          ppppppplVar24 = ppppppplStack_110 + 1;
          pppppplVar25 = *ppppppplVar24;
          *ppppppplVar24 = (long ******)((long)*ppppppplVar24 + -1);
          UNLOCK();
          if (pppppplVar25 == (long ******)0x0) {
            (*(code *)(*ppppppplStack_110)[2])(ppppppplStack_110);
            func_0x0412c2d0(ppppppplVar22);
          }
        }
      }
      else {
        unaff_RBP = (long *******)plVar21[2];
      }
      auVar38 = func_0x0d8547a0(unaff_RBP,uVar27,0,0);
      auStack_128._0_8_ = auVar38._8_8_;
      ppppppplStack_48 = auVar38._0_8_;
      puVar28 = (undefined8 *)func_0x0bae38f0(unaff_RBP,auStack_128._0_8_ + -1);
      *puVar28 = 0;
      *(undefined4 *)(puVar28 + 1) = 0;
      puVar28[2] = 0xffffffffffffff;
      *(undefined1 *)(puVar28 + 3) = 0;
      puVar28[4] = param_1[4];
      *(undefined4 *)(puVar28 + 5) = *(undefined4 *)(param_1 + 5);
      puVar28[6] = lVar19;
      lVar19 = *(long *)(lVar20 + 8);
      if (lVar19 != 0) goto LAB_0ba22660;
LAB_0ba22701:
      uVar29 = 0;
    }
    plVar21 = (long *)(*(long *)(lVar20 + 0x70) +
                      (ulong)((int)((ulong)(*(long *)(lVar20 + 0x78) - *(long *)(lVar20 + 0x70)) >>
                                   3) - 1U & 0x38b774aa) * 8);
    do {
      if (*plVar21 == -1) {
        plVar21 = *(long **)(lVar20 + 0x90);
        break;
      }
      lVar34 = *plVar21 * 0x20;
      plVar21 = (long *)(*(long *)(lVar20 + 0x88) + lVar34);
    } while (*(int *)(*(long *)(lVar20 + 0x88) + 8 + lVar34) != 0x38b774aa);
    uVar31 = *(ulong *)(*(long *)(*(long *)(plVar21[2] + 8) + (uVar27 >> 0xc & 0xfffff) * 8) +
                       (ulong)(uVar17 & 0xfff) * 8);
    lVar34 = *(long *)(*(long *)(plVar21[2] + 0x50) + (uVar31 >> 7 & 0x1ffffff) * 8);
    lVar33 = (ulong)((uint)uVar31 & 0x7f) * 0x38;
    *(long *)(lVar34 + lVar33) = lVar19;
    *(undefined4 *)(lVar34 + 8 + lVar33) = uVar29;
    *(ulong *)(lVar34 + 0x10 + lVar33) = uVar27;
    *(undefined1 *)(lVar34 + 0x18 + lVar33) = puStack_40._0_1_;
    lVar19 = *(long *)(lVar20 + 8);
    if (lVar19 == 0) {
      uVar29 = 0;
    }
    else {
      uVar29 = *(undefined4 *)(lVar19 + 8);
    }
    param_1[0xb] = lVar19;
    *(undefined4 *)(param_1 + 0xc) = uVar29;
    param_1[0xd] = uVar27;
    *(undefined1 *)(param_1 + 0xe) = puStack_40._0_1_;
  }
  lVar19 = param_1[6];
  auVar38 = func_0x062dec50();
  puVar35 = auVar38._8_8_;
  plVar21 = auVar38._0_8_;
  ppppppplStack_d8 = (long *******)0x0;
  puStack_d0 = (undefined *)0x0;
  func_0x048b1dc0(&ppppppplStack_d8);
  if (puVar35 == puStack_d0) {
    if (plVar21 == (long *)0x0) {
      lVar20 = func_0x048aead0(puVar35);
      unaff_RBP = (long *******)(ulong)*(uint *)(lVar20 + 8);
      if (ppppppplStack_d8 != (long *******)0x0) goto LAB_0ba227f5;
LAB_0ba22814:
      lVar20 = func_0x048aead0(puStack_d0);
      if ((int)unaff_RBP != *(int *)(lVar20 + 8)) goto LAB_0ba22827;
    }
    else {
      unaff_RBP = (long *******)(ulong)*(uint *)(plVar21 + 1);
      if (ppppppplStack_d8 == (long *******)0x0) goto LAB_0ba22814;
LAB_0ba227f5:
      if ((int)unaff_RBP != *(int *)(ppppppplStack_d8 + 1)) goto LAB_0ba22827;
    }
LAB_0ba25a83:
    cVar16 = func_0x0eeddcf0(&UNK_01259441,&UNK_01198d5e,0x15c,&UNK_0119dfc2,&UNK_0143d2d7);
    goto LAB_0ba25b3e;
  }
LAB_0ba22827:
  if (plVar21 == (long *)0x0) {
    plVar21 = (long *)func_0x048aead0(puVar35);
  }
  lVar20 = *(long *)(lVar19 + 8);
  if (lVar20 == 0) goto LAB_0ba25a83;
  puStack_40 = param_1 + 0xf;
  uVar17 = *(uint *)(*plVar21 + 4);
  lVar19 = lVar19 + 8;
  lVar34 = lVar19;
  do {
    bVar37 = *(uint *)(lVar20 + 0x20) < uVar17;
    if (!bVar37) {
      lVar34 = lVar20;
    }
    lVar20 = *(long *)(lVar20 + (ulong)bVar37 * 8);
  } while (lVar20 != 0);
  if ((lVar34 == lVar19) || (uVar17 < *(uint *)(lVar34 + 0x20))) goto LAB_0ba25a83;
  lVar19 = *(long *)(lVar34 + 0x28);
  if (*(long *)(lVar19 + 0x60) != 0) {
    func_0x049e8590(&ppppppplStack_d8,lVar19);
    plVar21 = *(long **)(lVar19 + 0x60);
    if (plVar21 != (long *)0x0) {
      uVar17 = (**(code **)(*plVar21 + 0x30))(plVar21,&ppppppplStack_d8);
      unaff_RBP = (long *******)(ulong)uVar17;
      if (pcStack_c0 != (code *)0x0) {
        (*pcStack_c0)(&ppppppplStack_d8);
      }
      if ((char)uVar17 == '\0') goto LAB_0ba25a83;
      goto LAB_0ba228d4;
    }
    FUN_04891200();
LAB_0ba25c32:
    FUN_04891200();
LAB_0ba25c37:
    cVar16 = func_0x0eeddcf0(&UNK_01259441,&UNK_01198d5e,0x15c,&UNK_0119dfc2,&UNK_013940ab);
    goto LAB_0ba25b3e;
  }
LAB_0ba228d4:
  func_0x06075860(&ppppppplStack_118,*(undefined8 *)(lVar34 + 0x28));
  if ((int)uStack_f8 == 0x5da21c42) {
LAB_0ba22942:
    uVar23 = uStack_f0;
    if (uStack_f8._4_1_ == '\x04') {
LAB_0ba2294b:
      ppppppplVar22 = (long *******)0x0;
    }
    else {
      ppppppplVar22 = ppppppplStack_118;
      if (uStack_f8._4_1_ == '\x02') {
        ppppppplVar22 = (long *******)&ppppppplStack_118;
      }
      if (ppppppplVar22 == (long *******)0x0 || (int)uStack_f8 != 0x5da21c42) {
        if (pcStack_e0 == (code *)0x0) goto LAB_0ba2294b;
        if (lStack_e8 == 0) {
          (*pcStack_e0)(0,&ppppppplStack_118,0);
        }
        ppppppplVar22 = ppppppplStack_118;
        if (uStack_f8._4_1_ == '\x02') {
          ppppppplVar22 = (long *******)&ppppppplStack_118;
        }
        ppppppplVar22 = (long *******)func_0x0488e200(uVar23,lStack_e8,0x5da21c42,ppppppplVar22);
      }
    }
  }
  else {
    func_0x0badeae0(&ppppppplStack_d8,&ppppppplStack_118);
    lVar19 = lStack_a0;
    if ((lStack_a0 != 0) && ((byte)(cStack_b4 - 1U) < 2)) {
      func_0x048b0900(&ppppppplStack_118,&ppppppplStack_d8);
    }
    if (pcStack_c0 != (code *)0x0) {
      (*pcStack_c0)(&ppppppplStack_d8);
    }
    if (lVar19 != 0) goto LAB_0ba22942;
    ppppppplVar22 = (long *******)0x0;
  }
  if (pcStack_100 != (code *)0x0) {
    (*pcStack_100)(&ppppppplStack_118);
  }
  plVar21 = _DAT_0f6c4888;
  auVar39._8_8_ = auStack_128._8_8_;
  auVar39._0_8_ = auStack_128._0_8_;
  if (ppppppplVar22 == (long *******)0x0) goto LAB_0ba25a83;
  plVar3 = (long *)*ppppppplStack_58;
  if ((plVar3 == (long *)0x0) ||
     (lVar19 = *plVar3, lVar19 == 0 || (int)plVar3[1] != *(int *)(param_1 + 5))) {
    param_1[0xf] = _DAT_0f6c4888;
    iVar18 = _DAT_0f6c4890;
    *(int *)(param_1 + 0x10) = _DAT_0f6c4890;
    uVar15 = uRam000000000f6c48a4;
    uVar14 = uRam000000000f6c48a0;
    uVar29 = uRam000000000f6c489c;
    *(undefined4 *)(param_1 + 0x11) = _DAT_0f6c4898;
    *(undefined4 *)((long)param_1 + 0x8c) = uVar29;
    *(undefined4 *)(param_1 + 0x12) = uVar14;
    *(undefined4 *)((long)param_1 + 0x94) = uVar15;
    if ((plVar21 != (long *)0x0) &&
       (auStack_128 = auVar39, *plVar21 != 0 && (int)plVar21[1] == iVar18)) {
      func_0x0d8568b0(*plVar21,param_1[0x11]);
    }
  }
  else {
    ppppppplStack_110 = (long *******)(lVar19 + 0x10);
    ppppppplStack_d8 = (long *******)((ulong)ppppppplStack_d8 & 0xffffffffffff0000);
    puStack_d0 = &UNK_0baded80;
    puStack_c8 = &UNK_0badef70;
    unaff_RBP = (long *******)&uStack_b8;
    ppppppplStack_98 = (long *******)0x0;
    uStack_88 = 0;
    uStack_80 = 0x100000038;
    plStack_78 = (long *)0x0;
    ppppppplStack_118 = (long *******)&UNK_0f2fbcd8;
    uStack_f8 = (long *******)&ppppppplStack_118;
    func_0x065bdd40(&ppppppplStack_118,unaff_RBP);
    if ((long ********)uStack_f8 == &ppppppplStack_118) {
      lVar20 = 0x20;
LAB_0ba22b1a:
      (**(code **)((long)*uStack_f8 + lVar20))();
    }
    else {
      lVar20 = 0x28;
      if (uStack_f8 != (long *******)0x0) goto LAB_0ba22b1a;
    }
    uVar27 = func_0x0d856c70(lVar19,&ppppppplStack_d8);
    plVar21 = plStack_78;
    plStack_78 = (long *)0x0;
    if (plVar21 != (long *)0x0) {
      (**(code **)(*plVar21 + 8))();
    }
    uVar17 = (uint)uVar27;
    if (ppppppplStack_98 == unaff_RBP) {
      (*(code *)(*ppppppplStack_98)[4])();
joined_r0x0ba22d4d:
      if (uVar17 != 0xffffffff) goto LAB_0ba22b81;
LAB_0ba22d28:
      lVar20 = *(long *)(lVar19 + 8);
      uVar36 = extraout_DL_01;
      if (lVar20 == 0) goto LAB_0ba22ddf;
LAB_0ba22d36:
      uVar29 = *(undefined4 *)(lVar20 + 8);
    }
    else {
      if (ppppppplStack_98 == (long *******)0x0) goto joined_r0x0ba22d4d;
      (*(code *)(*ppppppplStack_98)[5])();
      if (uVar17 == 0xffffffff) goto LAB_0ba22d28;
LAB_0ba22b81:
      ppppppplStack_48 = (long *******)CONCAT71(ppppppplStack_48._1_7_,extraout_DL_01);
      uStack_12c = 0x1061a87a;
      plVar21 = (long *)(*(long *)(lVar19 + 0x70) +
                        (ulong)(((uint)(*(int *)(lVar19 + 0x78) - (int)*(long *)(lVar19 + 0x70)) >>
                                3) - 1 & 0x1061a87a) * 8);
      do {
        if (*plVar21 == -1) goto LAB_0ba22bf0;
        lVar20 = *plVar21 * 0x20;
        plVar21 = (long *)(*(long *)(lVar19 + 0x88) + lVar20);
      } while (*(int *)(*(long *)(lVar19 + 0x88) + 8 + lVar20) != 0x1061a87a);
      if (plVar21 == *(long **)(lVar19 + 0x90)) {
LAB_0ba22bf0:
        auStack_128._0_8_ = (long *******)(lVar19 + 0x38);
        ppppppplVar24 = (long *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
        if (ppppppplVar24 == (long *******)0x0) {
          func_0x0eec74c0(0x80,0);
        }
        ppppppplVar24[1] = (long ******)0x0;
        ppppppplVar24[2] = (long ******)0x0;
        *ppppppplVar24 = (long ******)&UNK_0f2fbd58;
        if ((DAT_0f5824f8 == '\0') && (iVar18 = FUN_04108328(&DAT_0f5824f8), iVar18 != 0)) {
          func_0x067305e0(0xf5824e0);
          func_0x0410844d(&DAT_0f5824f8);
        }
        ppppppplStack_118 = ppppppplVar24 + 3;
        ppppppplVar24[8] = (long ******)0x0;
        ppppppplVar24[9] = (long ******)0x0;
        ppppppplVar24[6] = (long ******)0x0;
        ppppppplVar24[7] = (long ******)0x0;
        ppppppplVar24[4] = (long ******)0x0;
        ppppppplVar24[5] = (long ******)0x0;
        ppppppplVar24[10] = (long ******)0xf5824e0;
        *(undefined1 *)(ppppppplVar24 + 0xb) = 1;
        ppppppplVar24[0xc] = (long ******)0xffffffff;
        ppppppplVar24[3] = (long ******)&UNK_0f2fbda8;
        ppppppplVar24[0xd] = (long ******)0x0;
        ppppppplVar24[0xe] = (long ******)0x0;
        ppppppplVar24[0xf] = (long ******)0x0;
        ppppppplStack_110 = ppppppplVar24;
        func_0x065bf170(lVar19 + 0x70,&uStack_12c,&ppppppplStack_118);
        puStack_c8 = &UNK_065bf690;
        uStack_b8 = 0x145ad657;
        pcStack_c0 = (code *)0x0;
        cStack_b4 = '\x03';
        ppppppplStack_d8 = (long *******)auStack_128._0_8_;
        (*(code *)(*ppppppplStack_118)[5])(ppppppplStack_118,&ppppppplStack_d8);
        if (pcStack_c0 != (code *)0x0) {
          (*pcStack_c0)(&ppppppplStack_d8);
        }
        ppppppplVar1 = ppppppplStack_110;
        ppppppplVar24 = ppppppplStack_118;
        if (ppppppplStack_110 != (long *******)0x0) {
          LOCK();
          ppppppplVar30 = ppppppplStack_110 + 1;
          pppppplVar25 = *ppppppplVar30;
          *ppppppplVar30 = (long ******)((long)*ppppppplVar30 + -1);
          UNLOCK();
          if (pppppplVar25 == (long ******)0x0) {
            (*(code *)(*ppppppplStack_110)[2])(ppppppplStack_110);
            func_0x0412c2d0(ppppppplVar1);
          }
        }
      }
      else {
        ppppppplVar24 = (long *******)plVar21[2];
      }
      auStack_128 = func_0x0d8547a0(ppppppplVar24,uVar27,0,0);
      unaff_RBP = (long *******)(auStack_128._8_8_ + -1);
      puVar28 = (undefined8 *)func_0x0bae1070(ppppppplVar24,unaff_RBP);
      *puVar28 = 0;
      *(undefined4 *)(puVar28 + 1) = 0;
      puVar28[2] = 0xffffffffffffff;
      *(undefined1 *)(puVar28 + 3) = 0;
      puVar28[4] = param_1[4];
      *(undefined4 *)(puVar28 + 5) = *(undefined4 *)(param_1 + 5);
      puVar28[6] = ppppppplVar22;
      lVar20 = *(long *)(lVar19 + 8);
      uVar36 = ppppppplStack_48._0_1_;
      if (lVar20 != 0) goto LAB_0ba22d36;
LAB_0ba22ddf:
      uVar29 = 0;
    }
    plVar21 = (long *)(*(long *)(lVar19 + 0x70) +
                      (ulong)(((uint)(*(int *)(lVar19 + 0x78) - (int)*(long *)(lVar19 + 0x70)) >> 3)
                              - 1 & 0x1061a87a) * 8);
    do {
      if (*plVar21 == -1) {
        plVar21 = *(long **)(lVar19 + 0x90);
        break;
      }
      lVar34 = *plVar21 * 0x20;
      plVar21 = (long *)(*(long *)(lVar19 + 0x88) + lVar34);
    } while (*(int *)(*(long *)(lVar19 + 0x88) + 8 + lVar34) != 0x1061a87a);
    uVar31 = *(ulong *)(*(long *)(*(long *)(plVar21[2] + 8) + (uVar27 >> 0xc & 0xfffff) * 8) +
                       (ulong)(uVar17 & 0xfff) * 8);
    lVar34 = *(long *)(*(long *)(plVar21[2] + 0x50) + (uVar31 >> 7 & 0x1ffffff) * 8);
    lVar33 = (ulong)((uint)uVar31 & 0x7f) * 0x38;
    *(long *)(lVar34 + lVar33) = lVar20;
    *(undefined4 *)(lVar34 + 8 + lVar33) = uVar29;
    *(ulong *)(lVar34 + 0x10 + lVar33) = uVar27;
    *(undefined1 *)(lVar34 + 0x18 + lVar33) = uVar36;
    lVar19 = *(long *)(lVar19 + 8);
    if (lVar19 == 0) {
      uVar29 = 0;
    }
    else {
      uVar29 = *(undefined4 *)(lVar19 + 8);
    }
    param_1[0xf] = lVar19;
    *(undefined4 *)(param_1 + 0x10) = uVar29;
    param_1[0x11] = uVar27;
    *(undefined1 *)(param_1 + 0x12) = uVar36;
  }
  lVar19 = param_1[6];
  auVar38 = func_0x0647ed50();
  puVar35 = auVar38._8_8_;
  plVar21 = auVar38._0_8_;
  ppppppplStack_d8 = (long *******)0x0;
  puStack_d0 = (undefined *)0x0;
  func_0x048b1dc0(&ppppppplStack_d8);
  if (puVar35 == puStack_d0) {
    if (plVar21 == (long *)0x0) {
      lVar20 = func_0x048aead0(puVar35);
      unaff_RBP = (long *******)(ulong)*(uint *)(lVar20 + 8);
      if (ppppppplStack_d8 != (long *******)0x0) goto LAB_0ba22ee0;
LAB_0ba22eff:
      lVar20 = func_0x048aead0(puStack_d0);
      if ((int)unaff_RBP != *(int *)(lVar20 + 8)) goto LAB_0ba22f12;
    }
    else {
      unaff_RBP = (long *******)(ulong)*(uint *)(plVar21 + 1);
      if (ppppppplStack_d8 == (long *******)0x0) goto LAB_0ba22eff;
LAB_0ba22ee0:
      if ((int)unaff_RBP != *(int *)(ppppppplStack_d8 + 1)) goto LAB_0ba22f12;
    }
LAB_0ba25ab0:
    cVar16 = func_0x0eeddcf0(&UNK_01259441,&UNK_01198d5e,0x15c,&UNK_0119dfc2,&UNK_011ad3f5);
    goto LAB_0ba25b3e;
  }
LAB_0ba22f12:
  if (plVar21 == (long *)0x0) {
    plVar21 = (long *)func_0x048aead0(puVar35);
  }
  lVar20 = *(long *)(lVar19 + 8);
  if (lVar20 == 0) goto LAB_0ba25ab0;
  ppppppplStack_48 = (long *******)(param_1 + 0x13);
  uVar17 = *(uint *)(*plVar21 + 4);
  lVar19 = lVar19 + 8;
  lVar34 = lVar19;
  do {
    bVar37 = *(uint *)(lVar20 + 0x20) < uVar17;
    if (!bVar37) {
      lVar34 = lVar20;
    }
    lVar20 = *(long *)(lVar20 + (ulong)bVar37 * 8);
  } while (lVar20 != 0);
  if ((lVar34 == lVar19) || (uVar17 < *(uint *)(lVar34 + 0x20))) goto LAB_0ba25ab0;
  lVar19 = *(long *)(lVar34 + 0x28);
  if (*(long *)(lVar19 + 0x60) != 0) {
    func_0x049e8590(&ppppppplStack_d8,lVar19);
    plVar21 = *(long **)(lVar19 + 0x60);
    if (plVar21 == (long *)0x0) goto LAB_0ba25c32;
    uVar17 = (**(code **)(*plVar21 + 0x30))(plVar21,&ppppppplStack_d8);
    unaff_RBP = (long *******)(ulong)uVar17;
    if (pcStack_c0 != (code *)0x0) {
      (*pcStack_c0)(&ppppppplStack_d8);
    }
    if ((char)uVar17 == '\0') goto LAB_0ba25ab0;
  }
  func_0x06075860(&ppppppplStack_118,*(undefined8 *)(lVar34 + 0x28));
  if ((int)uStack_f8 == 0x2bd258a9) {
LAB_0ba2302f:
    uVar23 = uStack_f0;
    if (uStack_f8._4_1_ == '\x04') {
LAB_0ba23038:
      ppppppplVar22 = (long *******)0x0;
    }
    else {
      ppppppplVar22 = ppppppplStack_118;
      if (uStack_f8._4_1_ == '\x02') {
        ppppppplVar22 = (long *******)&ppppppplStack_118;
      }
      if (ppppppplVar22 == (long *******)0x0 || (int)uStack_f8 != 0x2bd258a9) {
        if (pcStack_e0 == (code *)0x0) goto LAB_0ba23038;
        if (lStack_e8 == 0) {
          (*pcStack_e0)(0,&ppppppplStack_118,0);
        }
        ppppppplVar22 = ppppppplStack_118;
        if (uStack_f8._4_1_ == '\x02') {
          ppppppplVar22 = (long *******)&ppppppplStack_118;
        }
        ppppppplVar22 = (long *******)func_0x0488e200(uVar23,lStack_e8,0x2bd258a9,ppppppplVar22);
      }
    }
  }
  else {
    func_0x0bae6690(&ppppppplStack_d8,&ppppppplStack_118);
    lVar19 = lStack_a0;
    if ((lStack_a0 != 0) && ((byte)(cStack_b4 - 1U) < 2)) {
      func_0x048b0900(&ppppppplStack_118,&ppppppplStack_d8);
    }
    if (pcStack_c0 != (code *)0x0) {
      (*pcStack_c0)(&ppppppplStack_d8);
    }
    if (lVar19 != 0) goto LAB_0ba2302f;
    ppppppplVar22 = (long *******)0x0;
  }
  if (pcStack_100 != (code *)0x0) {
    (*pcStack_100)(&ppppppplStack_118);
  }
  if (ppppppplVar22 == (long *******)0x0) goto LAB_0ba25ab0;
  lVar19 = func_0x0607ba60(param_1[6]);
  plVar21 = _DAT_0f6c4900;
  if (lVar19 == 0) {
    cVar16 = func_0x0eeddcf0(&UNK_01259441,&UNK_01198d5e,0x15c,&UNK_0119dfc2,&UNK_01460557);
    goto LAB_0ba25b3e;
  }
  plVar3 = (long *)*ppppppplStack_58;
  if ((plVar3 == (long *)0x0) ||
     (lVar20 = *plVar3, lVar20 == 0 || (int)plVar3[1] != *(int *)(param_1 + 5))) {
    param_1[0x13] = _DAT_0f6c4900;
    iVar18 = _DAT_0f6c4908;
    *(int *)(param_1 + 0x14) = _DAT_0f6c4908;
    uVar15 = uRam000000000f6c491c;
    uVar14 = uRam000000000f6c4918;
    uVar29 = uRam000000000f6c4914;
    *(undefined4 *)(param_1 + 0x15) = _DAT_0f6c4910;
    *(undefined4 *)((long)param_1 + 0xac) = uVar29;
    *(undefined4 *)(param_1 + 0x16) = uVar14;
    *(undefined4 *)((long)param_1 + 0xb4) = uVar15;
    if ((plVar21 != (long *)0x0) && (*plVar21 != 0 && (int)plVar21[1] == iVar18)) {
      func_0x0d8568b0(*plVar21,param_1[0x15]);
    }
    plVar21 = (long *)param_1[4];
    auVar9 = auStack_128;
    if (plVar21 != (long *)0x0) goto LAB_0ba235b3;
LAB_0ba235c9:
    plVar21 = _DAT_0f6c48d8;
    param_1[0x17] = _DAT_0f6c48d8;
    iVar18 = _DAT_0f6c48e0;
    *(int *)(param_1 + 0x18) = _DAT_0f6c48e0;
    uVar15 = uRam000000000f6c48f4;
    uVar14 = uRam000000000f6c48f0;
    uVar29 = uRam000000000f6c48ec;
    *(undefined4 *)(param_1 + 0x19) = _DAT_0f6c48e8;
    *(undefined4 *)((long)param_1 + 0xcc) = uVar29;
    *(undefined4 *)(param_1 + 0x1a) = uVar14;
    *(undefined4 *)((long)param_1 + 0xd4) = uVar15;
    if ((plVar21 != (long *)0x0) && (*plVar21 != 0 && (int)plVar21[1] == iVar18)) {
      func_0x0d8568b0(*plVar21,param_1[0x19]);
    }
  }
  else {
    ppppppplStack_110 = (long *******)(lVar20 + 0x10);
    ppppppplStack_d8 = (long *******)((ulong)ppppppplStack_d8 & 0xffffffffffff0000);
    puStack_d0 = &UNK_0bae6930;
    puStack_c8 = &UNK_0bae6b20;
    ppppppplStack_98 = (long *******)0x0;
    uStack_88 = 0;
    uStack_80 = 0x1000000c8;
    plStack_78 = (long *)0x0;
    ppppppplStack_118 = (long *******)&UNK_0f2fc0c8;
    uStack_f8 = (long *******)&ppppppplStack_118;
    func_0x065bdd40(&ppppppplStack_118,&uStack_b8);
    if ((long ********)uStack_f8 == &ppppppplStack_118) {
      lVar34 = 0x20;
LAB_0ba23232:
      (**(code **)((long)*uStack_f8 + lVar34))();
    }
    else {
      lVar34 = 0x28;
      if (uStack_f8 != (long *******)0x0) goto LAB_0ba23232;
    }
    unaff_RBP = (long *******)func_0x0d856c70(lVar20,&ppppppplStack_d8);
    plVar21 = plStack_78;
    auStack_128[0] = extraout_DL_02;
    plStack_78 = (long *)0x0;
    if (plVar21 != (long *)0x0) {
      (**(code **)(*plVar21 + 8))();
    }
    if (ppppppplStack_98 == (long *******)&uStack_b8) {
      (*(code *)(*ppppppplStack_98)[4])();
      ppppppplVar24 = (long *******)auStack_128._8_8_;
      ppppppplVar1 = ppppppplStack_50;
    }
    else {
      ppppppplVar24 = (long *******)auStack_128._8_8_;
      ppppppplVar1 = ppppppplStack_50;
      if (ppppppplStack_98 != (long *******)0x0) {
        (*(code *)(*ppppppplStack_98)[5])();
        ppppppplVar24 = (long *******)auStack_128._8_8_;
        ppppppplVar1 = ppppppplStack_50;
      }
    }
    auStack_128._8_8_ = ppppppplVar24;
    ppppppplStack_50 = ppppppplVar1;
    if ((uint)unaff_RBP != 0xffffffff) {
      ppppppplStack_50 = (long *******)(lVar20 + 0x38);
      uStack_12c = 0x9edcbd17;
      auStack_128._8_8_ = lVar20 + 0x70;
      plVar21 = (long *)(*(long *)(lVar20 + 0x70) +
                        (ulong)((int)((ulong)(*(long *)(lVar20 + 0x78) - *(long *)(lVar20 + 0x70))
                                     >> 3) - 1U & 0x9edcbd17) * 8);
      do {
        if (*plVar21 == -1) goto LAB_0ba2331f;
        lVar34 = *plVar21 * 0x20;
        plVar21 = (long *)(*(long *)(lVar20 + 0x88) + lVar34);
      } while (*(int *)(*(long *)(lVar20 + 0x88) + 8 + lVar34) != -0x612342e9);
      if (plVar21 == *(long **)(lVar20 + 0x90)) {
LAB_0ba2331f:
        ppppppplVar24 = (long *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
        if (ppppppplVar24 == (long *******)0x0) {
          func_0x0eec74c0(0x80,0);
        }
        ppppppplVar24[1] = (long ******)0x0;
        ppppppplVar24[2] = (long ******)0x0;
        *ppppppplVar24 = (long ******)&UNK_0f2fc148;
        if ((DAT_0f58e8c0 == '\0') && (iVar18 = FUN_04108328(&DAT_0f58e8c0), iVar18 != 0)) {
          func_0x0699d770(0xf58e8a8);
          func_0x0410844d(&DAT_0f58e8c0);
        }
        ppppppplStack_118 = ppppppplVar24 + 3;
        ppppppplVar24[8] = (long ******)0x0;
        ppppppplVar24[9] = (long ******)0x0;
        ppppppplVar24[6] = (long ******)0x0;
        ppppppplVar24[7] = (long ******)0x0;
        ppppppplVar24[4] = (long ******)0x0;
        ppppppplVar24[5] = (long ******)0x0;
        ppppppplVar24[10] = (long ******)0xf58e8a8;
        *(undefined1 *)(ppppppplVar24 + 0xb) = 1;
        ppppppplVar24[0xc] = (long ******)0xffffffff;
        ppppppplVar24[3] = (long ******)&UNK_0f2fc198;
        ppppppplVar24[0xd] = (long ******)0x0;
        ppppppplVar24[0xe] = (long ******)0x0;
        ppppppplVar24[0xf] = (long ******)0x0;
        ppppppplStack_110 = ppppppplVar24;
        func_0x065bf170(auStack_128._8_8_,&uStack_12c,&ppppppplStack_118);
        puStack_c8 = &UNK_065bf690;
        uStack_b8 = 0x145ad657;
        pcStack_c0 = (code *)0x0;
        cStack_b4 = '\x03';
        ppppppplStack_d8 = ppppppplStack_50;
        (*(code *)(*ppppppplStack_118)[5])(ppppppplStack_118,&ppppppplStack_d8);
        if (pcStack_c0 != (code *)0x0) {
          (*pcStack_c0)(&ppppppplStack_d8);
        }
        ppppppplVar24 = ppppppplStack_110;
        ppppppplVar30 = ppppppplStack_118;
        if (ppppppplStack_110 != (long *******)0x0) {
          LOCK();
          ppppppplVar1 = ppppppplStack_110 + 1;
          pppppplVar25 = *ppppppplVar1;
          *ppppppplVar1 = (long ******)((long)*ppppppplVar1 + -1);
          UNLOCK();
          if (pppppplVar25 == (long ******)0x0) {
            auStack_128._8_8_ = ppppppplStack_118;
            (*(code *)(*ppppppplStack_110)[2])(ppppppplStack_110);
            func_0x0412c2d0(ppppppplVar24);
            ppppppplVar30 = (long *******)auStack_128._8_8_;
          }
        }
      }
      else {
        ppppppplVar30 = (long *******)plVar21[2];
        auStack_128._8_8_ = ppppppplVar24;
        ppppppplStack_50 = ppppppplVar1;
      }
      auVar38 = func_0x0d8547a0(ppppppplVar30,unaff_RBP,0,0);
      lStack_38 = auVar38._8_8_;
      ppppppplStack_50 = auVar38._0_8_;
      auStack_128._8_8_ = ppppppplVar30;
      uVar23 = func_0x0bae8de0(ppppppplVar30,lStack_38 + -1);
      func_0x068c1df0(uVar23,ppppppplVar22,lVar19);
    }
    auVar9._8_8_ = auStack_128._8_8_;
    auVar9._0_8_ = auStack_128._0_8_;
    lVar19 = *(long *)(lVar20 + 8);
    if (lVar19 == 0) {
      uVar29 = 0;
    }
    else {
      uVar29 = *(undefined4 *)(lVar19 + 8);
    }
    plVar21 = (long *)(*(long *)(lVar20 + 0x70) +
                      (ulong)((int)((ulong)(*(long *)(lVar20 + 0x78) - *(long *)(lVar20 + 0x70)) >>
                                   3) - 1U & 0x9edcbd17) * 8);
    do {
      if (*plVar21 == -1) {
        plVar21 = *(long **)(lVar20 + 0x90);
        break;
      }
      lVar34 = *plVar21 * 0x20;
      plVar21 = (long *)(*(long *)(lVar20 + 0x88) + lVar34);
    } while (*(int *)(*(long *)(lVar20 + 0x88) + 8 + lVar34) != -0x612342e9);
    uVar27 = *(ulong *)(*(long *)(*(long *)(plVar21[2] + 8) +
                                 ((ulong)unaff_RBP >> 0xc & 0xfffff) * 8) +
                       (ulong)((uint)unaff_RBP & 0xfff) * 8);
    lVar34 = *(long *)(*(long *)(plVar21[2] + 0x50) + (uVar27 >> 7 & 0x1ffffff) * 8);
    lVar33 = (ulong)((uint)uVar27 & 0x7f) * 200;
    *(long *)(lVar34 + lVar33) = lVar19;
    *(undefined4 *)(lVar34 + 8 + lVar33) = uVar29;
    *(long ********)(lVar34 + 0x10 + lVar33) = unaff_RBP;
    *(undefined1 *)(lVar34 + 0x18 + lVar33) = auStack_128[0];
    lVar19 = *(long *)(lVar20 + 8);
    if (lVar19 == 0) {
      uVar29 = 0;
    }
    else {
      uVar29 = *(undefined4 *)(lVar19 + 8);
    }
    param_1[0x13] = lVar19;
    *(undefined4 *)(param_1 + 0x14) = uVar29;
    param_1[0x15] = unaff_RBP;
    *(undefined1 *)(param_1 + 0x16) = auStack_128[0];
    plVar21 = (long *)param_1[4];
    auStack_128 = auVar9;
    if (plVar21 == (long *)0x0) goto LAB_0ba235c9;
LAB_0ba235b3:
    lVar19 = *plVar21;
    auStack_128 = auVar9;
    if (lVar19 == 0 || (int)plVar21[1] != *(int *)(param_1 + 5)) goto LAB_0ba235c9;
    ppppppplStack_110 = (long *******)(lVar19 + 0x10);
    ppppppplStack_d8 = (long *******)((ulong)ppppppplStack_d8 & 0xffffffffffff0000);
    puStack_d0 = &UNK_0bae3e80;
    puStack_c8 = &UNK_0bae4060;
    ppppppplStack_98 = (long *******)0x0;
    uStack_88 = 0;
    uStack_80 = 0x100000040;
    plStack_78 = (long *)0x0;
    ppppppplStack_118 = (long *******)&UNK_0f2fbf78;
    uStack_f8 = (long *******)&ppppppplStack_118;
    func_0x065bdd40(&ppppppplStack_118,&uStack_b8);
    if ((long ********)uStack_f8 == &ppppppplStack_118) {
      lVar20 = 0x20;
LAB_0ba236c7:
      (**(code **)((long)*uStack_f8 + lVar20))();
    }
    else {
      lVar20 = 0x28;
      if (uStack_f8 != (long *******)0x0) goto LAB_0ba236c7;
    }
    auVar38 = func_0x0d856c70(lVar19,&ppppppplStack_d8);
    plVar21 = plStack_78;
    unaff_RBP = (long *******)(auVar38._8_8_ & 0xffffffff);
    plStack_78 = (long *)0x0;
    if (plVar21 != (long *)0x0) {
      (**(code **)(*plVar21 + 8))();
    }
    if (ppppppplStack_98 == (long *******)&uStack_b8) {
      (*(code *)(*ppppppplStack_98)[4])();
joined_r0x0ba238f7:
      if (auVar38._0_4_ != -1) goto LAB_0ba2372d;
LAB_0ba238d3:
      lVar19 = *(long *)(lVar19 + 8);
      if (lVar19 == 0) goto LAB_0ba23994;
LAB_0ba238e0:
      uVar29 = *(undefined4 *)(lVar19 + 8);
    }
    else {
      if (ppppppplStack_98 == (long *******)0x0) goto joined_r0x0ba238f7;
      (*(code *)(*ppppppplStack_98)[5])();
      if (auVar38._0_4_ == -1) goto LAB_0ba238d3;
LAB_0ba2372d:
      auStack_128[0] = (char)unaff_RBP;
      uStack_12c = 0x21390a47;
      plVar21 = (long *)(*(long *)(lVar19 + 0x70) +
                        (ulong)((int)((ulong)(*(long *)(lVar19 + 0x78) - *(long *)(lVar19 + 0x70))
                                     >> 3) - 1U & 0x21390a47) * 8);
      do {
        if (*plVar21 == -1) goto LAB_0ba2379f;
        lVar20 = *plVar21 * 0x20;
        plVar21 = (long *)(*(long *)(lVar19 + 0x88) + lVar20);
      } while (*(int *)(*(long *)(lVar19 + 0x88) + 8 + lVar20) != 0x21390a47);
      if (plVar21 == *(long **)(lVar19 + 0x90)) {
LAB_0ba2379f:
        ppppppplVar22 = (long *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
        if (ppppppplVar22 == (long *******)0x0) {
          func_0x0eec74c0(0x80,0);
        }
        ppppppplVar22[1] = (long ******)0x0;
        ppppppplVar22[2] = (long ******)0x0;
        *ppppppplVar22 = (long ******)&UNK_0f2fbff8;
        if ((DAT_0f58e1e8 == '\0') && (iVar18 = FUN_04108328(&DAT_0f58e1e8), iVar18 != 0)) {
          func_0x0697caa0(0xf58e1d0);
          func_0x0410844d(&DAT_0f58e1e8);
        }
        ppppppplStack_118 = ppppppplVar22 + 3;
        ppppppplVar22[8] = (long ******)0x0;
        ppppppplVar22[9] = (long ******)0x0;
        ppppppplVar22[6] = (long ******)0x0;
        ppppppplVar22[7] = (long ******)0x0;
        ppppppplVar22[4] = (long ******)0x0;
        ppppppplVar22[5] = (long ******)0x0;
        ppppppplVar22[10] = (long ******)0xf58e1d0;
        *(undefined1 *)(ppppppplVar22 + 0xb) = 1;
        ppppppplVar22[0xc] = (long ******)0xffffffff;
        ppppppplVar22[3] = (long ******)&UNK_0f2fc048;
        ppppppplVar22[0xd] = (long ******)0x0;
        ppppppplVar22[0xe] = (long ******)0x0;
        ppppppplVar22[0xf] = (long ******)0x0;
        ppppppplStack_110 = ppppppplVar22;
        func_0x065bf170(lVar19 + 0x70,&uStack_12c,&ppppppplStack_118);
        puStack_c8 = &UNK_065bf690;
        uStack_b8 = 0x145ad657;
        pcStack_c0 = (code *)0x0;
        cStack_b4 = '\x03';
        ppppppplStack_d8 = (long *******)(lVar19 + 0x38);
        (*(code *)(*ppppppplStack_118)[5])(ppppppplStack_118,&ppppppplStack_d8);
        if (pcStack_c0 != (code *)0x0) {
          (*pcStack_c0)(&ppppppplStack_d8);
        }
        ppppppplVar24 = ppppppplStack_110;
        ppppppplVar22 = ppppppplStack_118;
        if (ppppppplStack_110 != (long *******)0x0) {
          LOCK();
          ppppppplVar1 = ppppppplStack_110 + 1;
          pppppplVar25 = *ppppppplVar1;
          *ppppppplVar1 = (long ******)((long)*ppppppplVar1 + -1);
          UNLOCK();
          if (pppppplVar25 == (long ******)0x0) {
            (*(code *)(*ppppppplStack_110)[2])(ppppppplStack_110);
            func_0x0412c2d0(ppppppplVar24);
          }
        }
      }
      else {
        ppppppplVar22 = (long *******)plVar21[2];
      }
      auVar39 = func_0x0d8547a0(ppppppplVar22,auVar38._0_8_,0);
      ppppppplStack_50 = auVar39._8_8_;
      auStack_128._8_8_ = auVar39._0_8_;
      puVar28 = (undefined8 *)func_0x0bae60a0(ppppppplVar22,(long)ppppppplStack_50 + -1);
      *puVar28 = ppppppplStack_58;
      puVar28[1] = ppppppplStack_60;
      lVar20 = func_0x05fa6970();
      if (lVar20 == 0) goto LAB_0ba25c37;
      puVar28[2] = lVar20;
      puVar28[3] = 0;
      puVar28[4] = 0;
      puVar28[5] = 0;
      puVar28[6] = 0;
      *(undefined4 *)(puVar28 + 7) = 0x3f800000;
      unaff_RBP = (long *******)(auStack_128._0_8_ & 0xff);
      lVar19 = *(long *)(lVar19 + 8);
      if (lVar19 != 0) goto LAB_0ba238e0;
LAB_0ba23994:
      uVar29 = 0;
    }
    param_1[0x17] = lVar19;
    *(undefined4 *)(param_1 + 0x18) = uVar29;
    param_1[0x19] = auVar38._0_8_;
    *(char *)(param_1 + 0x1a) = (char)unaff_RBP;
  }
  lVar19 = func_0x0b6ec940(param_1[6]);
  plVar21 = _DAT_0f6c4928;
  if (lVar19 == 0) {
    cVar16 = func_0x0eeddcf0(&UNK_01259441,&UNK_01198d5e,0x15c,&UNK_0119dfc2,&UNK_01385b7a);
    goto LAB_0ba25b3e;
  }
  plVar3 = (long *)*ppppppplStack_58;
  if ((plVar3 == (long *)0x0) ||
     (lVar20 = *plVar3, lVar20 == 0 || (int)plVar3[1] != *(int *)(param_1 + 5))) {
    param_1[0x1b] = _DAT_0f6c4928;
    iVar18 = _DAT_0f6c4930;
    *(int *)(param_1 + 0x1c) = _DAT_0f6c4930;
    uVar15 = uRam000000000f6c4944;
    uVar14 = uRam000000000f6c4940;
    uVar29 = uRam000000000f6c493c;
    *(undefined4 *)(param_1 + 0x1d) = _DAT_0f6c4938;
    *(undefined4 *)((long)param_1 + 0xec) = uVar29;
    *(undefined4 *)(param_1 + 0x1e) = uVar14;
    *(undefined4 *)((long)param_1 + 0xf4) = uVar15;
    if ((plVar21 != (long *)0x0) && (*plVar21 != 0 && (int)plVar21[1] == iVar18)) {
      func_0x0d8568b0(*plVar21,param_1[0x1d]);
    }
  }
  else {
    ppppppplStack_110 = (long *******)(lVar20 + 0x10);
    ppppppplStack_d8 = (long *******)((ulong)ppppppplStack_d8 & 0xffffffffffff0000);
    puStack_d0 = &UNK_0bae93d0;
    puStack_c8 = &UNK_0bae95b0;
    ppppppplStack_98 = (long *******)0x0;
    uStack_88 = 0;
    uStack_80 = 0x100000040;
    plStack_78 = (long *)0x0;
    ppppppplStack_118 = (long *******)&UNK_0f2fc218;
    uStack_f8 = (long *******)&ppppppplStack_118;
    func_0x065bdd40(&ppppppplStack_118,&uStack_b8);
    if ((long ********)uStack_f8 == &ppppppplStack_118) {
      lVar34 = 0x20;
LAB_0ba23aea:
      (**(code **)((long)*uStack_f8 + lVar34))();
    }
    else {
      lVar34 = 0x28;
      if (uStack_f8 != (long *******)0x0) goto LAB_0ba23aea;
    }
    uVar23 = func_0x0d856c70(lVar20,&ppppppplStack_d8);
    plVar21 = plStack_78;
    ppppppplStack_60 = (long *******)CONCAT71(ppppppplStack_60._1_7_,extraout_DL_03);
    plStack_78 = (long *)0x0;
    if (plVar21 != (long *)0x0) {
      (**(code **)(*plVar21 + 8))();
    }
    if (ppppppplStack_98 == (long *******)&uStack_b8) {
      (*(code *)(*ppppppplStack_98)[4])();
joined_r0x0ba23d1b:
      auVar11 = auStack_128;
      if ((int)uVar23 != -1) goto LAB_0ba23b55;
LAB_0ba23cf7:
      lVar19 = *(long *)(lVar20 + 8);
      if (lVar19 == 0) goto LAB_0ba23d93;
LAB_0ba23d04:
      uVar29 = *(undefined4 *)(lVar19 + 8);
    }
    else {
      if (ppppppplStack_98 == (long *******)0x0) goto joined_r0x0ba23d1b;
      (*(code *)(*ppppppplStack_98)[5])();
      auVar11 = auStack_128;
      if ((int)uVar23 == -1) goto LAB_0ba23cf7;
LAB_0ba23b55:
      auStack_128._8_8_ = auVar11._8_8_;
      auStack_128._0_8_ = lVar20 + 0x38;
      uStack_12c = 0x128912be;
      plVar21 = (long *)(*(long *)(lVar20 + 0x70) +
                        (ulong)(((uint)(*(int *)(lVar20 + 0x78) - (int)*(long *)(lVar20 + 0x70)) >>
                                3) - 1 & 0x128912be) * 8);
      do {
        if (*plVar21 == -1) goto LAB_0ba23bbf;
        lVar34 = *plVar21 * 0x20;
        plVar21 = (long *)(*(long *)(lVar20 + 0x88) + lVar34);
      } while (*(int *)(*(long *)(lVar20 + 0x88) + 8 + lVar34) != 0x128912be);
      if (plVar21 == *(long **)(lVar20 + 0x90)) {
LAB_0ba23bbf:
        ppppppplVar22 = (long *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
        if (ppppppplVar22 == (long *******)0x0) {
          func_0x0eec74c0(0x80,0);
        }
        ppppppplVar22[1] = (long ******)0x0;
        ppppppplVar22[2] = (long ******)0x0;
        *ppppppplVar22 = (long ******)&UNK_0f2fc298;
        if ((DAT_0f59fed8 == '\0') && (iVar18 = FUN_04108328(&DAT_0f59fed8), iVar18 != 0)) {
          func_0x06c8fb30(0xf59fec0);
          func_0x0410844d(&DAT_0f59fed8);
        }
        ppppppplStack_118 = ppppppplVar22 + 3;
        ppppppplVar22[8] = (long ******)0x0;
        ppppppplVar22[9] = (long ******)0x0;
        ppppppplVar22[6] = (long ******)0x0;
        ppppppplVar22[7] = (long ******)0x0;
        ppppppplVar22[4] = (long ******)0x0;
        ppppppplVar22[5] = (long ******)0x0;
        ppppppplVar22[10] = (long ******)0xf59fec0;
        *(undefined1 *)(ppppppplVar22 + 0xb) = 1;
        ppppppplVar22[0xc] = (long ******)0xffffffff;
        ppppppplVar22[3] = (long ******)&UNK_0f2fc2e8;
        ppppppplVar22[0xd] = (long ******)0x0;
        ppppppplVar22[0xe] = (long ******)0x0;
        ppppppplVar22[0xf] = (long ******)0x0;
        ppppppplStack_110 = ppppppplVar22;
        func_0x065bf170(lVar20 + 0x70,&uStack_12c,&ppppppplStack_118);
        puStack_c8 = &UNK_065bf690;
        uStack_b8 = 0x145ad657;
        pcStack_c0 = (code *)0x0;
        cStack_b4 = '\x03';
        ppppppplStack_d8 = (long *******)auStack_128._0_8_;
        (*(code *)(*ppppppplStack_118)[5])(ppppppplStack_118,&ppppppplStack_d8);
        if (pcStack_c0 != (code *)0x0) {
          (*pcStack_c0)(&ppppppplStack_d8);
        }
        ppppppplVar24 = ppppppplStack_110;
        ppppppplVar22 = ppppppplStack_118;
        auVar12._8_8_ = auStack_128._8_8_;
        auVar12._0_8_ = auStack_128._0_8_;
        auVar11._8_8_ = auStack_128._8_8_;
        auVar11._0_8_ = auStack_128._0_8_;
        if (ppppppplStack_110 != (long *******)0x0) {
          LOCK();
          ppppppplVar1 = ppppppplStack_110 + 1;
          pppppplVar25 = *ppppppplVar1;
          *ppppppplVar1 = (long ******)((long)*ppppppplVar1 + -1);
          UNLOCK();
          auVar11 = auVar12;
          if (pppppplVar25 == (long ******)0x0) {
            (*(code *)(*ppppppplStack_110)[2])(ppppppplStack_110);
            func_0x0412c2d0(ppppppplVar24);
            auVar11._8_8_ = auStack_128._8_8_;
            auVar11._0_8_ = auStack_128._0_8_;
          }
        }
      }
      else {
        ppppppplVar22 = (long *******)plVar21[2];
      }
      auStack_128 = auVar11;
      auVar38 = func_0x0d8547a0(ppppppplVar22,uVar23,0,0);
      unaff_RBP = (long *******)(auVar38._8_8_ + -1);
      auStack_128 = auVar38;
      puVar28 = (undefined8 *)func_0x0baeb820(ppppppplVar22,unaff_RBP);
      *puVar28 = param_1[4];
      *(undefined4 *)(puVar28 + 1) = *(undefined4 *)(param_1 + 5);
      puVar28[2] = lVar19;
      puVar28[3] = 0;
      puVar28[4] = 0;
      puVar28[5] = 0;
      puVar28[6] = 0;
      *(undefined4 *)(puVar28 + 7) = 0x3f800000;
      lVar19 = *(long *)(lVar20 + 8);
      if (lVar19 != 0) goto LAB_0ba23d04;
LAB_0ba23d93:
      uVar29 = 0;
    }
    param_1[0x1b] = lVar19;
    *(undefined4 *)(param_1 + 0x1c) = uVar29;
    param_1[0x1d] = uVar23;
    *(undefined1 *)(param_1 + 0x1e) = ppppppplStack_60._0_1_;
  }
  ppppppplVar22 = (long *******)func_0x0633abc0(param_1[6]);
  if (ppppppplVar22 == (long *******)0x0) {
    cVar16 = func_0x0eeddcf0(&UNK_01259441,&UNK_01198d5e,0x15c,&UNK_0119dfc2,&UNK_014b030c);
    goto LAB_0ba25b3e;
  }
  lVar19 = func_0x0607ba60(param_1[6]);
  plVar21 = _DAT_0f6c4950;
  if (lVar19 == 0) {
    cVar16 = func_0x0eeddcf0(&UNK_01259441,&UNK_01198d5e,0x15c,&UNK_0119dfc2,&UNK_01460557);
    goto LAB_0ba25b3e;
  }
  puVar28 = *ppppppplStack_58;
  if ((puVar28 == (undefined8 *)0x0) ||
     (unaff_RBP = (long *******)*puVar28,
     unaff_RBP == (long *******)0x0 || *(int *)(puVar28 + 1) != *(int *)(param_1 + 5))) {
    param_1[0x1f] = _DAT_0f6c4950;
    iVar18 = _DAT_0f6c4958;
    *(int *)(param_1 + 0x20) = _DAT_0f6c4958;
    uVar15 = uRam000000000f6c496c;
    uVar14 = uRam000000000f6c4968;
    uVar29 = uRam000000000f6c4964;
    *(undefined4 *)(param_1 + 0x21) = _DAT_0f6c4960;
    *(undefined4 *)((long)param_1 + 0x10c) = uVar29;
    *(undefined4 *)(param_1 + 0x22) = uVar14;
    *(undefined4 *)((long)param_1 + 0x114) = uVar15;
    auVar7 = auStack_128;
    if ((plVar21 != (long *)0x0) && (*plVar21 != 0 && (int)plVar21[1] == iVar18)) {
      func_0x0d8568b0(*plVar21,param_1[0x21]);
      auVar7 = auStack_128;
    }
    puVar28 = (undefined8 *)param_1[4];
    if (puVar28 != (undefined8 *)0x0) goto LAB_0ba24298;
LAB_0ba242ae:
    plVar21 = _DAT_0f6c4978;
    param_1[0x23] = _DAT_0f6c4978;
    iVar18 = _DAT_0f6c4980;
    *(int *)(param_1 + 0x24) = _DAT_0f6c4980;
    uVar15 = uRam000000000f6c4994;
    uVar14 = uRam000000000f6c4990;
    uVar29 = uRam000000000f6c498c;
    *(undefined4 *)(param_1 + 0x25) = _DAT_0f6c4988;
    *(undefined4 *)((long)param_1 + 300) = uVar29;
    *(undefined4 *)(param_1 + 0x26) = uVar14;
    *(undefined4 *)((long)param_1 + 0x134) = uVar15;
    auStack_128 = auVar7;
    if ((plVar21 != (long *)0x0) && (*plVar21 != 0 && (int)plVar21[1] == iVar18)) {
      func_0x0d8568b0(*plVar21,param_1[0x25]);
    }
    plVar21 = (long *)param_1[4];
    if (plVar21 == (long *)0x0) goto LAB_0ba2471f;
LAB_0ba24709:
    lVar19 = *plVar21;
    if (lVar19 == 0 || (int)plVar21[1] != *(int *)(param_1 + 5)) goto LAB_0ba2471f;
    ppppppplVar22 = (long *******)param_1[6];
    ppppppplStack_110 = (long *******)(lVar19 + 0x10);
    ppppppplStack_d8 = (long *******)((ulong)ppppppplStack_d8 & 0xffffffffffff0000);
    puStack_d0 = &UNK_0baf1060;
    puStack_c8 = &UNK_0baf1240;
    ppppppplStack_98 = (long *******)0x0;
    uStack_88 = 0;
    uStack_80 = 0x100000020;
    plStack_78 = (long *)0x0;
    ppppppplStack_118 = (long *******)&UNK_0f2fc608;
    uStack_f8 = (long *******)&ppppppplStack_118;
    func_0x065bdd40(&ppppppplStack_118,&uStack_b8);
    if ((long ********)uStack_f8 == &ppppppplStack_118) {
      lVar20 = 0x20;
LAB_0ba24826:
      (**(code **)((long)*uStack_f8 + lVar20))();
    }
    else {
      lVar20 = 0x28;
      if (uStack_f8 != (long *******)0x0) goto LAB_0ba24826;
    }
    auVar38 = func_0x0d856c70(lVar19,&ppppppplStack_d8);
    plVar21 = plStack_78;
    unaff_RBP = (long *******)(auVar38._8_8_ & 0xffffffff);
    plStack_78 = (long *)0x0;
    if (plVar21 != (long *)0x0) {
      (**(code **)(*plVar21 + 8))();
    }
    if (ppppppplStack_98 == (long *******)&uStack_b8) {
      (*(code *)(*ppppppplStack_98)[4])();
joined_r0x0ba24a5f:
      if (auVar38._0_4_ != -1) goto LAB_0ba2488c;
LAB_0ba24a3b:
      lVar19 = *(long *)(lVar19 + 8);
      if (lVar19 == 0) goto LAB_0ba24adc;
LAB_0ba24a48:
      uVar29 = *(undefined4 *)(lVar19 + 8);
    }
    else {
      if (ppppppplStack_98 == (long *******)0x0) goto joined_r0x0ba24a5f;
      (*(code *)(*ppppppplStack_98)[5])();
      if (auVar38._0_4_ == -1) goto LAB_0ba24a3b;
LAB_0ba2488c:
      auStack_128[0] = (char)unaff_RBP;
      uStack_12c = 0x8de34f3f;
      plVar21 = (long *)(*(long *)(lVar19 + 0x70) +
                        (ulong)((int)((ulong)(*(long *)(lVar19 + 0x78) - *(long *)(lVar19 + 0x70))
                                     >> 3) - 1U & 0x8de34f3f) * 8);
      do {
        ppppppplStack_60 = ppppppplVar22;
        if (*plVar21 == -1) goto LAB_0ba24907;
        lVar20 = *plVar21 * 0x20;
        plVar21 = (long *)(*(long *)(lVar19 + 0x88) + lVar20);
      } while (*(int *)(*(long *)(lVar19 + 0x88) + 8 + lVar20) != -0x721cb0c1);
      if (plVar21 == *(long **)(lVar19 + 0x90)) {
LAB_0ba24907:
        ppppppplVar22 = (long *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
        if (ppppppplVar22 == (long *******)0x0) {
          func_0x0eec74c0(0x80,0);
        }
        ppppppplVar22[1] = (long ******)0x0;
        ppppppplVar22[2] = (long ******)0x0;
        *ppppppplVar22 = (long ******)&UNK_0f2fc688;
        if ((DAT_0f6b7b30 == '\0') && (iVar18 = FUN_04108328(&DAT_0f6b7b30), iVar18 != 0)) {
          func_0x0b7e5400(0xf6b7b18);
          func_0x0410844d(&DAT_0f6b7b30);
        }
        ppppppplStack_118 = ppppppplVar22 + 3;
        ppppppplVar22[8] = (long ******)0x0;
        ppppppplVar22[9] = (long ******)0x0;
        ppppppplVar22[6] = (long ******)0x0;
        ppppppplVar22[7] = (long ******)0x0;
        ppppppplVar22[4] = (long ******)0x0;
        ppppppplVar22[5] = (long ******)0x0;
        ppppppplVar22[10] = (long ******)0xf6b7b18;
        *(undefined1 *)(ppppppplVar22 + 0xb) = 1;
        ppppppplVar22[0xc] = (long ******)0xffffffff;
        ppppppplVar22[3] = (long ******)&UNK_0f2fc6d8;
        ppppppplVar22[0xd] = (long ******)0x0;
        ppppppplVar22[0xe] = (long ******)0x0;
        ppppppplVar22[0xf] = (long ******)0x0;
        ppppppplStack_110 = ppppppplVar22;
        func_0x065bf170(lVar19 + 0x70,&uStack_12c,&ppppppplStack_118);
        puStack_c8 = &UNK_065bf690;
        uStack_b8 = 0x145ad657;
        pcStack_c0 = (code *)0x0;
        cStack_b4 = '\x03';
        ppppppplStack_d8 = (long *******)(lVar19 + 0x38);
        (*(code *)(*ppppppplStack_118)[5])(ppppppplStack_118,&ppppppplStack_d8);
        if (pcStack_c0 != (code *)0x0) {
          (*pcStack_c0)(&ppppppplStack_d8);
        }
        ppppppplVar22 = ppppppplStack_110;
        ppppppplVar24 = ppppppplStack_118;
        if (ppppppplStack_110 != (long *******)0x0) {
          LOCK();
          ppppppplVar1 = ppppppplStack_110 + 1;
          pppppplVar25 = *ppppppplVar1;
          *ppppppplVar1 = (long ******)((long)*ppppppplVar1 + -1);
          UNLOCK();
          if (pppppplVar25 == (long ******)0x0) {
            (*(code *)(*ppppppplStack_110)[2])(ppppppplStack_110);
            func_0x0412c2d0(ppppppplVar22);
          }
        }
      }
      else {
        ppppppplVar24 = (long *******)plVar21[2];
      }
      auVar39 = func_0x0d8547a0(ppppppplVar24,auVar38._0_8_,0,0);
      ppppppplVar22 = auVar39._8_8_;
      auStack_128._8_8_ = auVar39._0_8_;
      puVar28 = (undefined8 *)func_0x0baf3290(ppppppplVar24,(long)ppppppplVar22 + -1);
      *puVar28 = ppppppplStack_60;
      puVar28[1] = param_1[4];
      *(undefined4 *)(puVar28 + 2) = *(undefined4 *)(param_1 + 5);
      *(undefined1 *)(puVar28 + 3) = 0;
      unaff_RBP = (long *******)(auStack_128._0_8_ & 0xff);
      lVar19 = *(long *)(lVar19 + 8);
      if (lVar19 != 0) goto LAB_0ba24a48;
LAB_0ba24adc:
      uVar29 = 0;
    }
    param_1[0x27] = lVar19;
    *(undefined4 *)(param_1 + 0x28) = uVar29;
    param_1[0x29] = auVar38._0_8_;
    *(char *)(param_1 + 0x2a) = (char)unaff_RBP;
    plVar21 = (long *)param_1[4];
    if (plVar21 != (long *)0x0) goto LAB_0ba24b02;
LAB_0ba24b18:
    plVar21 = _DAT_0f6c49c8;
    param_1[0x2b] = _DAT_0f6c49c8;
    iVar18 = _DAT_0f6c49d0;
    *(int *)(param_1 + 0x2c) = _DAT_0f6c49d0;
    uVar15 = uRam000000000f6c49e4;
    uVar14 = uRam000000000f6c49e0;
    uVar29 = uRam000000000f6c49dc;
    *(undefined4 *)(param_1 + 0x2d) = _DAT_0f6c49d8;
    *(undefined4 *)((long)param_1 + 0x16c) = uVar29;
    *(undefined4 *)(param_1 + 0x2e) = uVar14;
    *(undefined4 *)((long)param_1 + 0x174) = uVar15;
    if ((plVar21 != (long *)0x0) && (*plVar21 != 0 && (int)plVar21[1] == iVar18)) {
      func_0x0d8568b0(*plVar21,param_1[0x2d]);
    }
    plVar21 = (long *)param_1[4];
    auVar8 = auStack_128;
    if (plVar21 == (long *)0x0) goto LAB_0ba24f26;
LAB_0ba24f10:
    lVar19 = *plVar21;
    auStack_128 = auVar8;
    if (lVar19 == 0 || (int)plVar21[1] != *(int *)(param_1 + 5)) goto LAB_0ba24f26;
    unaff_RBP = (long *******)param_1[6];
    ppppppplStack_110 = (long *******)(lVar19 + 0x10);
    ppppppplStack_d8 = (long *******)((ulong)ppppppplStack_d8 & 0xffffffffffff0000);
    puStack_d0 = &UNK_0baf5fe0;
    puStack_c8 = &UNK_0baf61d0;
    ppppppplVar22 = (long *******)&uStack_b8;
    ppppppplStack_98 = (long *******)0x0;
    uStack_88 = 0;
    uStack_80 = 0x100000250;
    plStack_78 = (long *)0x0;
    ppppppplStack_118 = (long *******)&UNK_0f2fc8a8;
    uStack_f8 = (long *******)&ppppppplStack_118;
    func_0x065bdd40(&ppppppplStack_118,ppppppplVar22);
    if ((long ********)uStack_f8 == &ppppppplStack_118) {
      lVar20 = 0x20;
LAB_0ba25028:
      (**(code **)((long)*uStack_f8 + lVar20))();
    }
    else {
      lVar20 = 0x28;
      if (uStack_f8 != (long *******)0x0) goto LAB_0ba25028;
    }
    uVar23 = func_0x0d856c70(lVar19,&ppppppplStack_d8);
    plVar21 = plStack_78;
    ppppppplStack_60 = (long *******)CONCAT71(ppppppplStack_60._1_7_,extraout_DL_07);
    plStack_78 = (long *)0x0;
    if (plVar21 != (long *)0x0) {
      (**(code **)(*plVar21 + 8))();
    }
    if (ppppppplStack_98 == ppppppplVar22) {
      (*(code *)(*ppppppplStack_98)[4])();
    }
    else if (ppppppplStack_98 != (long *******)0x0) {
      (*(code *)(*ppppppplStack_98)[5])();
    }
    if ((int)uVar23 != -1) {
      uStack_12c = 0x33982960;
      plVar21 = (long *)(*(long *)(lVar19 + 0x70) +
                        (ulong)((int)((ulong)(*(long *)(lVar19 + 0x78) - *(long *)(lVar19 + 0x70))
                                     >> 3) - 1U & 0x33982960) * 8);
      do {
        auStack_128._0_8_ = unaff_RBP;
        if (*plVar21 == -1) goto LAB_0ba2511f;
        lVar20 = *plVar21 * 0x20;
        plVar21 = (long *)(*(long *)(lVar19 + 0x88) + lVar20);
      } while (*(int *)(*(long *)(lVar19 + 0x88) + 8 + lVar20) != 0x33982960);
      if (plVar21 == *(long **)(lVar19 + 0x90)) {
LAB_0ba2511f:
        ppppppplVar22 = (long *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
        if (ppppppplVar22 == (long *******)0x0) {
          func_0x0eec74c0(0x80,0);
        }
        ppppppplVar22[1] = (long ******)0x0;
        ppppppplVar22[2] = (long ******)0x0;
        *ppppppplVar22 = (long ******)&UNK_0f2fc928;
        if ((DAT_0f6ba008 == '\0') && (iVar18 = FUN_04108328(&DAT_0f6ba008), iVar18 != 0)) {
          func_0x0b841800(0xf6b9ff0);
          func_0x0410844d(&DAT_0f6ba008);
        }
        ppppppplStack_118 = ppppppplVar22 + 3;
        ppppppplVar22[8] = (long ******)0x0;
        ppppppplVar22[9] = (long ******)0x0;
        ppppppplVar22[6] = (long ******)0x0;
        ppppppplVar22[7] = (long ******)0x0;
        ppppppplVar22[4] = (long ******)0x0;
        ppppppplVar22[5] = (long ******)0x0;
        ppppppplVar22[10] = (long ******)0xf6b9ff0;
        *(undefined1 *)(ppppppplVar22 + 0xb) = 1;
        ppppppplVar22[0xc] = (long ******)0xffffffff;
        ppppppplVar22[3] = (long ******)&UNK_0f2fc978;
        ppppppplVar22[0xd] = (long ******)0x0;
        ppppppplVar22[0xe] = (long ******)0x0;
        ppppppplVar22[0xf] = (long ******)0x0;
        ppppppplStack_110 = ppppppplVar22;
        func_0x065bf170(lVar19 + 0x70,&uStack_12c,&ppppppplStack_118);
        puStack_c8 = &UNK_065bf690;
        uStack_b8 = 0x145ad657;
        pcStack_c0 = (code *)0x0;
        cStack_b4 = '\x03';
        ppppppplStack_d8 = (long *******)(lVar19 + 0x38);
        (*(code *)(*ppppppplStack_118)[5])(ppppppplStack_118,&ppppppplStack_d8);
        if (pcStack_c0 != (code *)0x0) {
          (*pcStack_c0)(&ppppppplStack_d8);
        }
        ppppppplVar24 = ppppppplStack_110;
        ppppppplVar22 = ppppppplStack_118;
        if (ppppppplStack_110 != (long *******)0x0) {
          LOCK();
          ppppppplVar1 = ppppppplStack_110 + 1;
          pppppplVar25 = *ppppppplVar1;
          *ppppppplVar1 = (long ******)((long)*ppppppplVar1 + -1);
          UNLOCK();
          if (pppppplVar25 == (long ******)0x0) {
            (*(code *)(*ppppppplStack_110)[2])(ppppppplStack_110);
            func_0x0412c2d0(ppppppplVar24);
          }
        }
      }
      else {
        ppppppplVar22 = (long *******)plVar21[2];
      }
      auVar38 = func_0x0d8547a0(ppppppplVar22,uVar23,0);
      unaff_RBP = auVar38._8_8_;
      auStack_128._8_8_ = auVar38._0_8_;
      uVar26 = func_0x0baf8500(ppppppplVar22,(long)unaff_RBP + -1);
      func_0x0b77acf0(uVar26,auStack_128._0_8_,ppppppplStack_58);
    }
    lVar19 = *(long *)(lVar19 + 8);
    if (lVar19 == 0) {
      uVar29 = 0;
    }
    else {
      uVar29 = *(undefined4 *)(lVar19 + 8);
    }
    param_1[0x2f] = lVar19;
    *(undefined4 *)(param_1 + 0x30) = uVar29;
    param_1[0x31] = uVar23;
    *(undefined1 *)(param_1 + 0x32) = ppppppplStack_60._0_1_;
  }
  else {
    ppppppplStack_110 = unaff_RBP + 2;
    ppppppplStack_d8 = (long *******)((ulong)ppppppplStack_d8 & 0xffffffffffff0000);
    puStack_d0 = &UNK_0baebe10;
    puStack_c8 = &UNK_0baec000;
    ppppppplStack_98 = (long *******)0x0;
    uStack_88 = 0;
    uStack_80 = 0x1000000c0;
    plStack_78 = (long *)0x0;
    ppppppplStack_118 = (long *******)&UNK_0f2fc368;
    uStack_f8 = (long *******)&ppppppplStack_118;
    func_0x065bdd40(&ppppppplStack_118,&uStack_b8);
    if ((long ********)uStack_f8 == &ppppppplStack_118) {
      lVar20 = 0x20;
LAB_0ba23f0a:
      (**(code **)((long)*uStack_f8 + lVar20))();
    }
    else {
      lVar20 = 0x28;
      if (uStack_f8 != (long *******)0x0) goto LAB_0ba23f0a;
    }
    uVar27 = func_0x0d856c70(unaff_RBP,&ppppppplStack_d8);
    plVar21 = plStack_78;
    ppppppplStack_60 = (long *******)CONCAT71(ppppppplStack_60._1_7_,extraout_DL_04);
    plStack_78 = (long *)0x0;
    if (plVar21 != (long *)0x0) {
      (**(code **)(*plVar21 + 8))();
    }
    if (ppppppplStack_98 == (long *******)&uStack_b8) {
      (*(code *)(*ppppppplStack_98)[4])();
      auVar7 = auStack_128;
    }
    else {
      auVar7 = auStack_128;
      if (ppppppplStack_98 != (long *******)0x0) {
        (*(code *)(*ppppppplStack_98)[5])();
        auVar7 = auStack_128;
      }
    }
    if ((uint)uVar27 != 0xffffffff) {
      auStack_128._8_8_ = unaff_RBP + 7;
      uStack_12c = 0x6a0a4646;
      auStack_128._0_8_ = unaff_RBP + 0xe;
      pppppplVar25 = unaff_RBP[0xe] +
                     ((int)((ulong)((long)unaff_RBP[0xf] - (long)unaff_RBP[0xe]) >> 3) - 1U &
                     0x6a0a4646);
      do {
        ppppplVar4 = *pppppplVar25;
        if (ppppplVar4 == (long *****)0xffffffffffffffff) goto LAB_0ba23fff;
        pppppplVar25 = unaff_RBP[0x11] + (long)ppppplVar4 * 4;
      } while (*(int *)(unaff_RBP[0x11] + (long)ppppplVar4 * 4 + 1) != 0x6a0a4646);
      if (pppppplVar25 == unaff_RBP[0x12]) {
LAB_0ba23fff:
        ppppppplVar24 = (long *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
        if (ppppppplVar24 == (long *******)0x0) {
          func_0x0eec74c0(0x80,0);
        }
        ppppppplVar24[1] = (long ******)0x0;
        ppppppplVar24[2] = (long ******)0x0;
        *ppppppplVar24 = (long ******)&UNK_0f2fc3e8;
        if ((DAT_0f59df78 == '\0') && (iVar18 = FUN_04108328(&DAT_0f59df78), iVar18 != 0)) {
          func_0x06c31d50(0xf59df60);
          func_0x0410844d(&DAT_0f59df78);
        }
        ppppppplStack_118 = ppppppplVar24 + 3;
        ppppppplVar24[8] = (long ******)0x0;
        ppppppplVar24[9] = (long ******)0x0;
        ppppppplVar24[6] = (long ******)0x0;
        ppppppplVar24[7] = (long ******)0x0;
        ppppppplVar24[4] = (long ******)0x0;
        ppppppplVar24[5] = (long ******)0x0;
        ppppppplVar24[10] = (long ******)0xf59df60;
        *(undefined1 *)(ppppppplVar24 + 0xb) = 1;
        ppppppplVar24[0xc] = (long ******)0xffffffff;
        ppppppplVar24[3] = (long ******)&UNK_0f2fc438;
        ppppppplVar24[0xd] = (long ******)0x0;
        ppppppplVar24[0xe] = (long ******)0x0;
        ppppppplVar24[0xf] = (long ******)0x0;
        ppppppplStack_110 = ppppppplVar24;
        func_0x065bf170(auStack_128._0_8_,&uStack_12c,&ppppppplStack_118);
        puStack_c8 = &UNK_065bf690;
        uStack_b8 = 0x145ad657;
        pcStack_c0 = (code *)0x0;
        cStack_b4 = '\x03';
        ppppppplStack_d8 = (long *******)auStack_128._8_8_;
        (*(code *)(*ppppppplStack_118)[5])(ppppppplStack_118,&ppppppplStack_d8);
        if (pcStack_c0 != (code *)0x0) {
          (*pcStack_c0)(&ppppppplStack_d8);
        }
        ppppppplVar1 = ppppppplStack_110;
        auVar10._8_8_ = auStack_128._8_8_;
        auVar10._0_8_ = auStack_128._0_8_;
        auVar7._8_8_ = auStack_128._8_8_;
        auVar7._0_8_ = auStack_128._0_8_;
        ppppppplVar24 = ppppppplStack_118;
        if (ppppppplStack_110 != (long *******)0x0) {
          LOCK();
          ppppppplVar30 = ppppppplStack_110 + 1;
          pppppplVar25 = *ppppppplVar30;
          *ppppppplVar30 = (long ******)((long)*ppppppplVar30 + -1);
          UNLOCK();
          auVar7 = auVar10;
          if (pppppplVar25 == (long ******)0x0) {
            auStack_128._0_8_ = ppppppplStack_118;
            (*(code *)(*ppppppplStack_110)[2])(ppppppplStack_110);
            func_0x0412c2d0(ppppppplVar1);
            auVar7._8_8_ = auStack_128._8_8_;
            auVar7._0_8_ = auStack_128._0_8_;
            ppppppplVar24 = (long *******)auStack_128._0_8_;
          }
        }
      }
      else {
        ppppppplVar24 = (long *******)pppppplVar25[2];
      }
      auStack_128 = auVar7;
      auVar38 = func_0x0d8547a0(ppppppplVar24,uVar27,0,0);
      ppppppplStack_50 = auVar38._8_8_;
      auStack_128._8_8_ = auVar38._0_8_;
      auStack_128._0_8_ = ppppppplVar24;
      uVar23 = func_0x0baee2e0(ppppppplVar24,(long)ppppppplStack_50 + -1);
      func_0x06b0b910(uVar23,ppppppplVar22,lVar19);
      auVar7._8_8_ = auStack_128._8_8_;
      auVar7._0_8_ = auStack_128._0_8_;
    }
    pppppplVar25 = unaff_RBP[1];
    if (pppppplVar25 == (long ******)0x0) {
      uVar29 = 0;
    }
    else {
      uVar29 = *(undefined4 *)(pppppplVar25 + 1);
    }
    pppppplVar32 = unaff_RBP[0xe] +
                   ((int)((ulong)((long)unaff_RBP[0xf] - (long)unaff_RBP[0xe]) >> 3) - 1U &
                   0x6a0a4646);
    do {
      ppppplVar4 = *pppppplVar32;
      if (ppppplVar4 == (long *****)0xffffffffffffffff) {
        pppppplVar32 = unaff_RBP[0x12];
        break;
      }
      pppppplVar32 = unaff_RBP[0x11] + (long)ppppplVar4 * 4;
    } while (*(int *)(unaff_RBP[0x11] + (long)ppppplVar4 * 4 + 1) != 0x6a0a4646);
    pplVar5 = pppppplVar32[2][1][uVar27 >> 0xc & 0xfffff][(uint)uVar27 & 0xfff];
    ppplVar6 = pppppplVar32[2][10][(ulong)pplVar5 >> 7 & 0x1ffffff];
    uVar31 = (ulong)(((uint)pplVar5 & 0x7f) * 0xc0);
    *(long *******)((long)ppplVar6 + uVar31) = pppppplVar25;
    *(undefined4 *)((long)ppplVar6 + uVar31 + 8) = uVar29;
    *(ulong *)((long)ppplVar6 + uVar31 + 0x10) = uVar27;
    *(undefined1 *)((long)ppplVar6 + uVar31 + 0x18) = ppppppplStack_60._0_1_;
    pppppplVar25 = unaff_RBP[1];
    if (pppppplVar25 == (long ******)0x0) {
      uVar29 = 0;
    }
    else {
      uVar29 = *(undefined4 *)(pppppplVar25 + 1);
    }
    param_1[0x1f] = pppppplVar25;
    *(undefined4 *)(param_1 + 0x20) = uVar29;
    param_1[0x21] = uVar27;
    *(undefined1 *)(param_1 + 0x22) = ppppppplStack_60._0_1_;
    puVar28 = (undefined8 *)param_1[4];
    if (puVar28 == (undefined8 *)0x0) goto LAB_0ba242ae;
LAB_0ba24298:
    unaff_RBP = (long *******)*puVar28;
    if (unaff_RBP == (long *******)0x0 || *(int *)(puVar28 + 1) != *(int *)(param_1 + 5))
    goto LAB_0ba242ae;
    uVar23 = param_1[6];
    ppppppplStack_110 = unaff_RBP + 2;
    ppppppplStack_d8 = (long *******)((ulong)ppppppplStack_d8 & 0xffffffffffff0000);
    puStack_d0 = &UNK_0baee8d0;
    puStack_c8 = &UNK_0baeeac0;
    ppppppplVar22 = (long *******)&uStack_b8;
    ppppppplStack_98 = (long *******)0x0;
    uStack_88 = 0;
    uStack_80 = 0x1000000a0;
    plStack_78 = (long *)0x0;
    ppppppplStack_118 = (long *******)&UNK_0f2fc4b8;
    uStack_f8 = (long *******)&ppppppplStack_118;
    auStack_128 = auVar7;
    func_0x065bdd40(&ppppppplStack_118,ppppppplVar22);
    if ((long ********)uStack_f8 == &ppppppplStack_118) {
      lVar19 = 0x20;
LAB_0ba243b5:
      (**(code **)((long)*uStack_f8 + lVar19))();
    }
    else {
      lVar19 = 0x28;
      if (uStack_f8 != (long *******)0x0) goto LAB_0ba243b5;
    }
    uVar27 = func_0x0d856c70(unaff_RBP,&ppppppplStack_d8);
    plVar21 = plStack_78;
    ppppppplStack_60 = (long *******)CONCAT71(ppppppplStack_60._1_7_,extraout_DL_05);
    plStack_78 = (long *)0x0;
    if (plVar21 != (long *)0x0) {
      (**(code **)(*plVar21 + 8))();
    }
    if (ppppppplStack_98 == ppppppplVar22) {
      (*(code *)(*ppppppplStack_98)[4])();
    }
    else if (ppppppplStack_98 != (long *******)0x0) {
      (*(code *)(*ppppppplStack_98)[5])();
    }
    if ((uint)uVar27 != 0xffffffff) {
      uStack_12c = 0xf6863055;
      pppppplVar25 = unaff_RBP[0xe] +
                     ((int)((ulong)((long)unaff_RBP[0xf] - (long)unaff_RBP[0xe]) >> 3) - 1U &
                     0xf6863055);
      do {
        ppppplVar4 = *pppppplVar25;
        auStack_128._0_8_ = uVar23;
        if (ppppplVar4 == (long *****)0xffffffffffffffff) goto LAB_0ba244af;
        pppppplVar25 = unaff_RBP[0x11] + (long)ppppplVar4 * 4;
      } while (*(int *)(unaff_RBP[0x11] + (long)ppppplVar4 * 4 + 1) != -0x979cfab);
      if (pppppplVar25 == unaff_RBP[0x12]) {
LAB_0ba244af:
        ppppppplVar22 = (long *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
        if (ppppppplVar22 == (long *******)0x0) {
          func_0x0eec74c0(0x80,0);
        }
        ppppppplVar22[1] = (long ******)0x0;
        ppppppplVar22[2] = (long ******)0x0;
        *ppppppplVar22 = (long ******)&UNK_0f2fc538;
        if ((DAT_0f6bb918 == '\0') && (iVar18 = FUN_04108328(&DAT_0f6bb918), iVar18 != 0)) {
          func_0x0b87fa60(0xf6bb900);
          func_0x0410844d(&DAT_0f6bb918);
        }
        ppppppplStack_118 = ppppppplVar22 + 3;
        ppppppplVar22[8] = (long ******)0x0;
        ppppppplVar22[9] = (long ******)0x0;
        ppppppplVar22[6] = (long ******)0x0;
        ppppppplVar22[7] = (long ******)0x0;
        ppppppplVar22[4] = (long ******)0x0;
        ppppppplVar22[5] = (long ******)0x0;
        ppppppplVar22[10] = (long ******)0xf6bb900;
        *(undefined1 *)(ppppppplVar22 + 0xb) = 1;
        ppppppplVar22[0xc] = (long ******)0xffffffff;
        ppppppplVar22[3] = (long ******)&UNK_0f2fc588;
        ppppppplVar22[0xd] = (long ******)0x0;
        ppppppplVar22[0xe] = (long ******)0x0;
        ppppppplVar22[0xf] = (long ******)0x0;
        ppppppplStack_110 = ppppppplVar22;
        func_0x065bf170(unaff_RBP + 0xe,&uStack_12c,&ppppppplStack_118);
        puStack_c8 = &UNK_065bf690;
        uStack_b8 = 0x145ad657;
        pcStack_c0 = (code *)0x0;
        cStack_b4 = '\x03';
        ppppppplStack_d8 = unaff_RBP + 7;
        (*(code *)(*ppppppplStack_118)[5])(ppppppplStack_118,&ppppppplStack_d8);
        if (pcStack_c0 != (code *)0x0) {
          (*pcStack_c0)(&ppppppplStack_d8);
        }
        ppppppplVar24 = ppppppplStack_110;
        ppppppplVar22 = ppppppplStack_118;
        if (ppppppplStack_110 != (long *******)0x0) {
          LOCK();
          ppppppplVar1 = ppppppplStack_110 + 1;
          pppppplVar25 = *ppppppplVar1;
          *ppppppplVar1 = (long ******)((long)*ppppppplVar1 + -1);
          UNLOCK();
          if (pppppplVar25 == (long ******)0x0) {
            (*(code *)(*ppppppplStack_110)[2])(ppppppplStack_110);
            func_0x0412c2d0(ppppppplVar24);
          }
        }
      }
      else {
        ppppppplVar22 = (long *******)pppppplVar25[2];
      }
      auVar38 = func_0x0d8547a0(ppppppplVar22,uVar27,0);
      auStack_128._8_8_ = auVar38._0_8_;
      uVar23 = func_0x0baf0df0(ppppppplVar22,auVar38._8_8_ + -1);
      func_0x0b7b5920(uVar23,auStack_128._0_8_,ppppppplStack_58);
    }
    pppppplVar25 = unaff_RBP[1];
    if (pppppplVar25 == (long ******)0x0) {
      uVar29 = 0;
    }
    else {
      uVar29 = *(undefined4 *)(pppppplVar25 + 1);
    }
    pppppplVar32 = unaff_RBP[0xe] +
                   ((int)((ulong)((long)unaff_RBP[0xf] - (long)unaff_RBP[0xe]) >> 3) - 1U &
                   0xf6863055);
    do {
      ppppplVar4 = *pppppplVar32;
      if (ppppplVar4 == (long *****)0xffffffffffffffff) {
        pppppplVar32 = unaff_RBP[0x12];
        break;
      }
      pppppplVar32 = unaff_RBP[0x11] + (long)ppppplVar4 * 4;
    } while (*(int *)(unaff_RBP[0x11] + (long)ppppplVar4 * 4 + 1) != -0x979cfab);
    pplVar5 = pppppplVar32[2][1][uVar27 >> 0xc & 0xfffff][(uint)uVar27 & 0xfff];
    ppplVar6 = pppppplVar32[2][10][(ulong)pplVar5 >> 7 & 0x1ffffff];
    uVar31 = (ulong)(((uint)pplVar5 & 0x7f) * 0xa0);
    *(long *******)((long)ppplVar6 + uVar31 + 8) = pppppplVar25;
    *(undefined4 *)((long)ppplVar6 + uVar31 + 0x10) = uVar29;
    *(ulong *)((long)ppplVar6 + uVar31 + 0x18) = uVar27;
    *(undefined1 *)((long)ppplVar6 + uVar31 + 0x20) = ppppppplStack_60._0_1_;
    pppppplVar25 = unaff_RBP[1];
    if (pppppplVar25 == (long ******)0x0) {
      uVar29 = 0;
    }
    else {
      uVar29 = *(undefined4 *)(pppppplVar25 + 1);
    }
    param_1[0x23] = pppppplVar25;
    *(undefined4 *)(param_1 + 0x24) = uVar29;
    param_1[0x25] = uVar27;
    *(undefined1 *)(param_1 + 0x26) = ppppppplStack_60._0_1_;
    plVar21 = (long *)param_1[4];
    if (plVar21 != (long *)0x0) goto LAB_0ba24709;
LAB_0ba2471f:
    plVar21 = _DAT_0f6c49a0;
    param_1[0x27] = _DAT_0f6c49a0;
    iVar18 = _DAT_0f6c49a8;
    *(int *)(param_1 + 0x28) = _DAT_0f6c49a8;
    uVar15 = uRam000000000f6c49bc;
    uVar14 = uRam000000000f6c49b8;
    uVar29 = uRam000000000f6c49b4;
    *(undefined4 *)(param_1 + 0x29) = _DAT_0f6c49b0;
    *(undefined4 *)((long)param_1 + 0x14c) = uVar29;
    *(undefined4 *)(param_1 + 0x2a) = uVar14;
    *(undefined4 *)((long)param_1 + 0x154) = uVar15;
    if ((plVar21 != (long *)0x0) && (*plVar21 != 0 && (int)plVar21[1] == iVar18)) {
      func_0x0d8568b0(*plVar21,param_1[0x29]);
    }
    plVar21 = (long *)param_1[4];
    if (plVar21 == (long *)0x0) goto LAB_0ba24b18;
LAB_0ba24b02:
    lVar19 = *plVar21;
    if (lVar19 == 0 || (int)plVar21[1] != *(int *)(param_1 + 5)) goto LAB_0ba24b18;
    unaff_RBP = (long *******)param_1[6];
    ppppppplStack_110 = (long *******)(lVar19 + 0x10);
    ppppppplStack_d8 = (long *******)((ulong)ppppppplStack_d8 & 0xffffffffffff0000);
    puStack_d0 = &UNK_0baf3820;
    puStack_c8 = &UNK_0baf3a00;
    ppppppplVar22 = (long *******)&uStack_b8;
    ppppppplStack_98 = (long *******)0x0;
    uStack_88 = 0;
    uStack_80 = 0x100000020;
    plStack_78 = (long *)0x0;
    ppppppplStack_118 = (long *******)&UNK_0f2fc758;
    uStack_f8 = (long *******)&ppppppplStack_118;
    func_0x065bdd40(&ppppppplStack_118,ppppppplVar22);
    if ((long ********)uStack_f8 == &ppppppplStack_118) {
      lVar20 = 0x20;
LAB_0ba24c1f:
      (**(code **)((long)*uStack_f8 + lVar20))();
    }
    else {
      lVar20 = 0x28;
      if (uStack_f8 != (long *******)0x0) goto LAB_0ba24c1f;
    }
    uVar23 = func_0x0d856c70(lVar19,&ppppppplStack_d8);
    plVar21 = plStack_78;
    plStack_78 = (long *)0x0;
    if (plVar21 != (long *)0x0) {
      (**(code **)(*plVar21 + 8))();
    }
    if (ppppppplStack_98 == ppppppplVar22) {
      (*(code *)(*ppppppplStack_98)[4])();
      auVar8 = auStack_128;
joined_r0x0ba24e5a:
      if ((int)uVar23 != -1) goto LAB_0ba24c86;
LAB_0ba24e36:
      lVar19 = *(long *)(lVar19 + 8);
      auStack_128[0] = extraout_DL_06;
      if (lVar19 == 0) goto LAB_0ba24eea;
LAB_0ba24e43:
      uVar29 = *(undefined4 *)(lVar19 + 8);
    }
    else {
      auVar8 = auStack_128;
      if (ppppppplStack_98 == (long *******)0x0) goto joined_r0x0ba24e5a;
      (*(code *)(*ppppppplStack_98)[5])();
      auVar8 = auStack_128;
      if ((int)uVar23 == -1) goto LAB_0ba24e36;
LAB_0ba24c86:
      auStack_128._8_8_ = auVar8._8_8_;
      uStack_12c = 0xb97b4962;
      plVar21 = (long *)(*(long *)(lVar19 + 0x70) +
                        (ulong)((int)((ulong)(*(long *)(lVar19 + 0x78) - *(long *)(lVar19 + 0x70))
                                     >> 3) - 1U & 0xb97b4962) * 8);
      do {
        auStack_128._1_7_ = auVar8._1_7_;
        ppppppplStack_60 = unaff_RBP;
        if (*plVar21 == -1) goto LAB_0ba24d04;
        lVar20 = *plVar21 * 0x20;
        plVar21 = (long *)(*(long *)(lVar19 + 0x88) + lVar20);
      } while (*(int *)(*(long *)(lVar19 + 0x88) + 8 + lVar20) != -0x4684b69e);
      auStack_128[0] = extraout_DL_06;
      if (plVar21 == *(long **)(lVar19 + 0x90)) {
LAB_0ba24d04:
        auStack_128[0] = extraout_DL_06;
        ppppppplVar22 = (long *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
        if (ppppppplVar22 == (long *******)0x0) {
          func_0x0eec74c0(0x80,0);
        }
        ppppppplVar22[1] = (long ******)0x0;
        ppppppplVar22[2] = (long ******)0x0;
        *ppppppplVar22 = (long ******)&UNK_0f2fc7d8;
        if ((DAT_0f6b7ec8 == '\0') && (iVar18 = FUN_04108328(&DAT_0f6b7ec8), iVar18 != 0)) {
          func_0x0b7eb710(0xf6b7eb0);
          func_0x0410844d(&DAT_0f6b7ec8);
        }
        ppppppplStack_118 = ppppppplVar22 + 3;
        ppppppplVar22[8] = (long ******)0x0;
        ppppppplVar22[9] = (long ******)0x0;
        ppppppplVar22[6] = (long ******)0x0;
        ppppppplVar22[7] = (long ******)0x0;
        ppppppplVar22[4] = (long ******)0x0;
        ppppppplVar22[5] = (long ******)0x0;
        ppppppplVar22[10] = (long ******)0xf6b7eb0;
        *(undefined1 *)(ppppppplVar22 + 0xb) = 1;
        ppppppplVar22[0xc] = (long ******)0xffffffff;
        ppppppplVar22[3] = (long ******)&UNK_0f2fc828;
        ppppppplVar22[0xd] = (long ******)0x0;
        ppppppplVar22[0xe] = (long ******)0x0;
        ppppppplVar22[0xf] = (long ******)0x0;
        ppppppplStack_110 = ppppppplVar22;
        func_0x065bf170(lVar19 + 0x70,&uStack_12c,&ppppppplStack_118);
        puStack_c8 = &UNK_065bf690;
        uStack_b8 = 0x145ad657;
        pcStack_c0 = (code *)0x0;
        cStack_b4 = '\x03';
        ppppppplStack_d8 = (long *******)(lVar19 + 0x38);
        (*(code *)(*ppppppplStack_118)[5])(ppppppplStack_118,&ppppppplStack_d8);
        if (pcStack_c0 != (code *)0x0) {
          (*pcStack_c0)(&ppppppplStack_d8);
        }
        ppppppplVar24 = ppppppplStack_110;
        ppppppplVar22 = ppppppplStack_118;
        if (ppppppplStack_110 != (long *******)0x0) {
          LOCK();
          ppppppplVar1 = ppppppplStack_110 + 1;
          pppppplVar25 = *ppppppplVar1;
          *ppppppplVar1 = (long ******)((long)*ppppppplVar1 + -1);
          UNLOCK();
          if (pppppplVar25 == (long ******)0x0) {
            (*(code *)(*ppppppplStack_110)[2])(ppppppplStack_110);
            func_0x0412c2d0(ppppppplVar24);
          }
        }
      }
      else {
        ppppppplVar22 = (long *******)plVar21[2];
      }
      auVar38 = func_0x0d8547a0(ppppppplVar22,uVar23,0);
      ppppppplStack_50 = auVar38._8_8_;
      auStack_128._8_8_ = auVar38._0_8_;
      unaff_RBP = (long *******)((long)ppppppplStack_50 + -1);
      puVar28 = (undefined8 *)func_0x0baf5a50(ppppppplVar22,unaff_RBP);
      *puVar28 = ppppppplStack_60;
      lVar20 = func_0x0b7e9350();
      auVar8._8_8_ = auStack_128._8_8_;
      auVar8._0_8_ = auStack_128._0_8_;
      if (lVar20 == 0) {
        cVar16 = func_0x0eeddcf0(&UNK_01259441,&UNK_01198d5e,0x15c,&UNK_0119dfc2,&UNK_01406f7b);
        goto LAB_0ba25b3e;
      }
      puVar28[1] = lVar20;
      puVar28[2] = param_1[4];
      *(undefined4 *)(puVar28 + 3) = *(undefined4 *)(param_1 + 5);
      lVar19 = *(long *)(lVar19 + 8);
      if (lVar19 != 0) goto LAB_0ba24e43;
LAB_0ba24eea:
      uVar29 = 0;
    }
    param_1[0x2b] = lVar19;
    *(undefined4 *)(param_1 + 0x2c) = uVar29;
    param_1[0x2d] = uVar23;
    *(undefined1 *)(param_1 + 0x2e) = auStack_128[0];
    plVar21 = (long *)param_1[4];
    auStack_128 = auVar8;
    if (plVar21 != (long *)0x0) goto LAB_0ba24f10;
LAB_0ba24f26:
    plVar21 = _DAT_0f6c49f0;
    param_1[0x2f] = _DAT_0f6c49f0;
    iVar18 = _DAT_0f6c49f8;
    *(int *)(param_1 + 0x30) = _DAT_0f6c49f8;
    uVar15 = uRam000000000f6c4a0c;
    uVar14 = uRam000000000f6c4a08;
    uVar29 = uRam000000000f6c4a04;
    *(undefined4 *)(param_1 + 0x31) = _DAT_0f6c4a00;
    *(undefined4 *)((long)param_1 + 0x18c) = uVar29;
    *(undefined4 *)(param_1 + 0x32) = uVar14;
    *(undefined4 *)((long)param_1 + 0x194) = uVar15;
    if ((plVar21 != (long *)0x0) && (*plVar21 != 0 && (int)plVar21[1] == iVar18)) {
      func_0x0d8568b0(*plVar21,param_1[0x31]);
    }
  }
  lVar19 = param_1[6];
  auVar38 = func_0x062f7f90();
  puVar35 = auVar38._8_8_;
  plVar21 = auVar38._0_8_;
  ppppppplStack_d8 = (long *******)0x0;
  puStack_d0 = (undefined *)0x0;
  func_0x048b1dc0(&ppppppplStack_d8);
  if (puVar35 == puStack_d0) {
    if (plVar21 == (long *)0x0) {
      lVar20 = func_0x048aead0(puVar35);
      uVar17 = *(uint *)(lVar20 + 8);
    }
    else {
      uVar17 = *(uint *)(plVar21 + 1);
    }
    unaff_RBP = (long *******)(ulong)uVar17;
    if (ppppppplStack_d8 == (long *******)0x0) {
      lVar20 = func_0x048aead0(puStack_d0);
      uVar2 = *(uint *)(lVar20 + 8);
    }
    else {
      uVar2 = *(uint *)(ppppppplStack_d8 + 1);
    }
    if (uVar17 == uVar2) goto LAB_0ba2546f;
  }
  if (plVar21 == (long *)0x0) {
    plVar21 = (long *)func_0x048aead0(puVar35);
    lVar34 = *(long *)(lVar19 + 8);
  }
  else {
    lVar34 = *(long *)(lVar19 + 8);
  }
  if (lVar34 == 0) goto LAB_0ba2546f;
  uVar17 = *(uint *)(*plVar21 + 4);
  lVar19 = lVar19 + 8;
  lVar20 = lVar19;
  do {
    bVar37 = *(uint *)(lVar34 + 0x20) < uVar17;
    if (!bVar37) {
      lVar20 = lVar34;
    }
    lVar34 = *(long *)(lVar34 + (ulong)bVar37 * 8);
  } while (lVar34 != 0);
  if ((lVar20 == lVar19) || (uVar17 < *(uint *)(lVar20 + 0x20))) goto LAB_0ba2546f;
  lVar34 = *(long *)(lVar20 + 0x28);
  if (*(long *)(lVar34 + 0x60) == 0) goto LAB_0ba253f0;
  func_0x049e8590(&ppppppplStack_d8,lVar34);
  plVar21 = *(long **)(lVar34 + 0x60);
  if (plVar21 == (long *)0x0) {
    FUN_04891200();
LAB_0ba25c96:
    iVar18 = FUN_04108328(&DAT_0f581a30);
    if (iVar18 != 0) {
      func_0x067176b0(0xf581a18);
      func_0x0410844d(&DAT_0f581a30);
    }
    goto LAB_0ba220ec;
  }
  cVar16 = (**(code **)(*plVar21 + 0x30))(plVar21,&ppppppplStack_d8);
  if (pcStack_c0 != (code *)0x0) {
    (*pcStack_c0)(&ppppppplStack_d8);
  }
  if (cVar16 == '\0') {
LAB_0ba2546f:
    ppppppplVar22 = (long *******)0x0;
  }
  else {
LAB_0ba253f0:
    func_0x06075860(&ppppppplStack_118,*(undefined8 *)(lVar20 + 0x28));
    if ((int)uStack_f8 == -0x17a084cd) {
LAB_0ba2545a:
      if (uStack_f8._4_1_ == '\x04') goto LAB_0ba25467;
      ppppppplVar22 = ppppppplStack_118;
      if (uStack_f8._4_1_ == '\x02') {
        ppppppplVar22 = (long *******)&ppppppplStack_118;
      }
      if (ppppppplVar22 == (long *******)0x0 || (int)uStack_f8 != -0x17a084cd) {
        if (pcStack_e0 == (code *)0x0) goto LAB_0ba25467;
        if (lStack_e8 == 0) {
          (*pcStack_e0)(0,&ppppppplStack_118,0);
        }
        ppppppplVar22 = ppppppplStack_118;
        if (uStack_f8._4_1_ == '\x02') {
          ppppppplVar22 = (long *******)&ppppppplStack_118;
        }
        ppppppplVar22 = (long *******)func_0x0488e200(uStack_f0,lStack_e8,0xe85f7b33,ppppppplVar22);
      }
    }
    else {
      func_0x0baf8770(&ppppppplStack_d8,&ppppppplStack_118);
      if ((lStack_a0 != 0) && ((byte)(cStack_b4 - 1U) < 2)) {
        func_0x048b0900(&ppppppplStack_118,&ppppppplStack_d8);
      }
      if (pcStack_c0 != (code *)0x0) {
        (*pcStack_c0)(&ppppppplStack_d8);
      }
      if (lStack_a0 != 0) goto LAB_0ba2545a;
LAB_0ba25467:
      ppppppplVar22 = (long *******)0x0;
    }
    if (pcStack_100 != (code *)0x0) {
      (*pcStack_100)(&ppppppplStack_118);
    }
  }
  plVar3 = _DAT_0f6c4a18;
  plVar21 = (long *)param_1[4];
  if ((plVar21 == (long *)0x0) ||
     (lVar19 = *plVar21, lVar19 == 0 || (int)plVar21[1] != *(int *)(param_1 + 5))) {
    param_1[0x33] = _DAT_0f6c4a18;
    iVar18 = _DAT_0f6c4a20;
    *(int *)(param_1 + 0x34) = _DAT_0f6c4a20;
    uVar15 = uRam000000000f6c4a34;
    uVar14 = uRam000000000f6c4a30;
    uVar29 = uRam000000000f6c4a2c;
    *(undefined4 *)(param_1 + 0x35) = _DAT_0f6c4a28;
    *(undefined4 *)((long)param_1 + 0x1ac) = uVar29;
    *(undefined4 *)(param_1 + 0x36) = uVar14;
    *(undefined4 *)((long)param_1 + 0x1b4) = uVar15;
    if (plVar3 == (long *)0x0) {
      return;
    }
    if (*plVar3 != 0 && (int)plVar3[1] == iVar18) {
      func_0x0d8568b0(*plVar3,param_1[0x35]);
      return;
    }
    return;
  }
  ppppppplStack_110 = (long *******)(lVar19 + 0x10);
  ppppppplStack_d8 = (long *******)((ulong)ppppppplStack_d8 & 0xffffffffffff0000);
  puStack_d0 = &UNK_0baf8a10;
  puStack_c8 = &UNK_0baf8c00;
  ppppppplStack_98 = (long *******)0x0;
  uStack_88 = 0;
  uStack_80 = 0x100000038;
  plStack_78 = (long *)0x0;
  ppppppplStack_118 = (long *******)&UNK_0f2fc9f8;
  uStack_f8 = (long *******)&ppppppplStack_118;
  ppppppplStack_58 = ppppppplVar22;
  func_0x065bdd40(&ppppppplStack_118,&uStack_b8);
  if ((long ********)uStack_f8 == &ppppppplStack_118) {
    lVar20 = 0x20;
  }
  else {
    lVar20 = 0x28;
    if (uStack_f8 == (long *******)0x0) goto LAB_0ba2559d;
  }
  (**(code **)((long)*uStack_f8 + lVar20))();
LAB_0ba2559d:
  uVar27 = func_0x0d856c70(lVar19,&ppppppplStack_d8);
  plVar21 = plStack_78;
  plStack_78 = (long *)0x0;
  if (plVar21 != (long *)0x0) {
    (**(code **)(*plVar21 + 8))();
  }
  if (ppppppplStack_98 == (long *******)&uStack_b8) {
    (**(code **)((long)*ppppppplStack_98 + 0x20))();
  }
  else if (ppppppplStack_98 != (long *******)0x0) {
    (**(code **)((long)*ppppppplStack_98 + 0x28))();
  }
  if ((uint)uVar27 == 0xffffffff) {
    lVar20 = *(long *)(lVar19 + 8);
    ppppppplStack_60._0_1_ = extraout_DL_08;
  }
  else {
    ppppppplStack_60._1_7_ = (undefined7)((ulong)ppppppplStack_60 >> 8);
    ppppppplStack_60 = (long *******)CONCAT71(ppppppplStack_60._1_7_,extraout_DL_08);
    uStack_12c = 0xf9ac9cc7;
    plVar21 = (long *)(*(long *)(lVar19 + 0x70) +
                      (ulong)((int)((ulong)(*(long *)(lVar19 + 0x78) - *(long *)(lVar19 + 0x70)) >>
                                   3) - 1U & 0xf9ac9cc7) * 8);
    do {
      if (*plVar21 == -1) goto LAB_0ba2566f;
      lVar20 = *plVar21 * 0x20;
      plVar21 = (long *)(*(long *)(lVar19 + 0x88) + lVar20);
    } while (*(int *)(*(long *)(lVar19 + 0x88) + 8 + lVar20) != -0x6536339);
    if (plVar21 == *(long **)(lVar19 + 0x90)) {
LAB_0ba2566f:
      plVar21 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (plVar21 == (long *)0x0) {
        func_0x0eec74c0(0x80,0);
      }
      plVar21[1] = 0;
      plVar21[2] = 0;
      *plVar21 = (long)&UNK_0f2fca78;
      if (DAT_0f59c660 == '\0') {
        iVar18 = FUN_04108328(&DAT_0f59c660);
        if (iVar18 != 0) {
          func_0x06bd9e10(0xf59c648);
          func_0x0410844d(&DAT_0f59c660);
        }
      }
      ppppppplStack_118 = (long *******)(plVar21 + 3);
      plVar21[8] = 0;
      plVar21[9] = 0;
      plVar21[6] = 0;
      plVar21[7] = 0;
      plVar21[4] = 0;
      plVar21[5] = 0;
      plVar21[10] = 0xf59c648;
      *(undefined1 *)(plVar21 + 0xb) = 1;
      plVar21[0xc] = 0xffffffff;
      plVar21[3] = (long)&UNK_0f2fcac8;
      plVar21[0xd] = 0;
      plVar21[0xe] = 0;
      plVar21[0xf] = 0;
      ppppppplStack_110 = (long *******)plVar21;
      func_0x065bf170(lVar19 + 0x70,&uStack_12c,&ppppppplStack_118);
      puStack_c8 = &UNK_065bf690;
      uStack_b8 = 0x145ad657;
      pcStack_c0 = (code *)0x0;
      cStack_b4 = '\x03';
      ppppppplStack_d8 = (long *******)(lVar19 + 0x38);
      (*(code *)(*ppppppplStack_118)[5])(ppppppplStack_118,&ppppppplStack_d8);
      if (pcStack_c0 != (code *)0x0) {
        (*pcStack_c0)(&ppppppplStack_d8);
      }
      ppppppplVar24 = ppppppplStack_110;
      ppppppplVar22 = ppppppplStack_118;
      if (ppppppplStack_110 != (long *******)0x0) {
        LOCK();
        plVar21 = (long *)(ppppppplStack_110 + 1);
        lVar20 = *plVar21;
        *plVar21 = *plVar21 + -1;
        UNLOCK();
        if (lVar20 == 0) {
          (**(code **)((long)*ppppppplStack_110 + 0x10))(ppppppplStack_110);
          func_0x0412c2d0(ppppppplVar24);
        }
      }
    }
    else {
      ppppppplVar22 = (long *******)plVar21[2];
    }
    auVar38 = func_0x0d8547a0(ppppppplVar22,uVar27,0,0);
    auStack_128._0_8_ = auVar38._0_8_;
    puVar28 = (undefined8 *)func_0x0bafad00(ppppppplVar22,auVar38._8_8_ + -1);
    *puVar28 = 0;
    *(undefined4 *)(puVar28 + 1) = 0;
    puVar28[2] = 0xffffffffffffff;
    *(undefined1 *)(puVar28 + 3) = 0;
    puVar28[4] = param_1[4];
    *(undefined4 *)(puVar28 + 5) = *(undefined4 *)(param_1 + 5);
    puVar28[6] = ppppppplStack_58;
    lVar20 = *(long *)(lVar19 + 8);
  }
  if (lVar20 == 0) {
    uVar29 = 0;
  }
  else {
    uVar29 = *(undefined4 *)(lVar20 + 8);
  }
  plVar21 = (long *)(*(long *)(lVar19 + 0x70) +
                    (ulong)((int)((ulong)(*(long *)(lVar19 + 0x78) - *(long *)(lVar19 + 0x70)) >> 3)
                            - 1U & 0xf9ac9cc7) * 8);
  do {
    if (*plVar21 == -1) {
      plVar21 = *(long **)(lVar19 + 0x90);
      break;
    }
    lVar34 = *plVar21 * 0x20;
    plVar21 = (long *)(*(long *)(lVar19 + 0x88) + lVar34);
  } while (*(int *)(*(long *)(lVar19 + 0x88) + 8 + lVar34) != -0x6536339);
  uVar31 = *(ulong *)(*(long *)(*(long *)(plVar21[2] + 8) + (uVar27 >> 0xc & 0xfffff) * 8) +
                     (ulong)((uint)uVar27 & 0xfff) * 8);
  lVar34 = *(long *)(*(long *)(plVar21[2] + 0x50) + (uVar31 >> 7 & 0x1ffffff) * 8);
  lVar33 = (ulong)((uint)uVar31 & 0x7f) * 0x38;
  *(long *)(lVar34 + lVar33) = lVar20;
  *(undefined4 *)(lVar34 + 8 + lVar33) = uVar29;
  *(ulong *)(lVar34 + 0x10 + lVar33) = uVar27;
  *(undefined1 *)(lVar34 + 0x18 + lVar33) = ppppppplStack_60._0_1_;
  lVar19 = *(long *)(lVar19 + 8);
  if (lVar19 == 0) {
    uVar29 = 0;
  }
  else {
    uVar29 = *(undefined4 *)(lVar19 + 8);
  }
  param_1[0x33] = lVar19;
  *(undefined4 *)(param_1 + 0x34) = uVar29;
  param_1[0x35] = uVar27;
  *(undefined1 *)(param_1 + 0x36) = ppppppplStack_60._0_1_;
  return;
}


