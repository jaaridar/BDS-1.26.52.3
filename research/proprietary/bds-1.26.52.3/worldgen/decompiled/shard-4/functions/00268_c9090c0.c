/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca090c0 (ELF vaddr 0xc9090c0)
 * Label: caller-of-callee
 * Body:  [[0ca090c0, 0ca0914e] [0ca09150, 0ca095e9] [0ca095f0, 0ca0979b] [0ca097a0, 0ca09832] [0ca09840, 0ca09acc] [0ca09ad0, 0ca09b9e] [0ca09ba0, 0ca09bab] [0ca09bb0, 0ca09be6] [0ca09bf0, 0ca09cc4] [0ca09cd0, 0ca09d12] [0ca09d20, 0ca09f15] [0ca09f20, 0ca0a125] [0ca0a130, 0ca0a5a9] [0ca0a5b0, 0ca0a65c] [0ca0a660, 0ca0a94e] [0ca0a950, 0ca0aa48] [0ca0aa50, 0ca0ab0a] [0ca0ab10, 0ca0abea] [0ca0abf0, 0ca0ac26] [0ca0ac30, 0ca0ac59] [0ca0ac60, 0ca0ad57] [0ca0ad60, 0ca0ad77] [0ca0ad80, 0ca0adab] [0ca0adb0, 0ca0ade3] [0ca0adf0, 0ca0aee5] [0ca0aef0, 0ca0b0dc] [0ca0b0e0, 0ca0b1b0] [0ca0b1c0, 0ca0b1cb] [0ca0b1d0, 0ca0b206] [0ca0b210, 0ca0b3b6] [0ca0b3c0, 0ca0b4e9] [0ca0b4f0, 0ca0b51c] [0ca0b520, 0ca0b6d3] [0ca0b6e8, 0ca0b6f1] [0ca0b9c6, 0ca0b9d4] [0ca0ba20, 0ca0ba4f]]
 * Ghidra: FUN_0ca090c0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0ca090c0(long *param_1,long *****param_2,long *param_3,long *****param_4,long *param_5,
                 long param_6)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  int *piVar4;
  long *plVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long lVar10;
  long ***ppplVar11;
  undefined1 uVar12;
  char cVar13;
  int iVar14;
  long *plVar15;
  long ******pppppplVar16;
  long *****ppppplVar17;
  int **ppiVar18;
  long lVar19;
  long ******pppppplVar20;
  undefined8 uVar21;
  long **pplVar22;
  long ****pppplVar23;
  ulong uVar24;
  long ***ppplVar25;
  long *****ppppplVar26;
  ulong uVar27;
  long *****ppppplVar28;
  long *****ppppplVar29;
  long ****pppplVar30;
  long ****pppplVar31;
  long ******pppppplVar32;
  long *****ppppplVar33;
  long ***ppplVar34;
  long ******pppppplVar35;
  undefined *puVar36;
  undefined1 auVar37 [8];
  long ***ppplVar38;
  long lVar39;
  ulong uVar40;
  long *****ppppplVar41;
  byte *pbVar42;
  long *****ppppplVar43;
  bool bVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 extraout_XMM0_Dd;
  float fVar49;
  undefined8 uStack_358;
  undefined1 auStack_350 [4];
  undefined4 uStack_34c;
  undefined8 uStack_348;
  long *****ppppplStack_340;
  long ****pppplStack_338;
  undefined8 uStack_328;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined8 uStack_318;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined8 uStack_308;
  undefined1 auStack_300 [4];
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined1 auStack_2f0 [8];
  long *****ppppplStack_2e8;
  long ***ppplStack_2e0;
  byte bStack_2d8;
  undefined1 auStack_2d7 [15];
  long *****ppppplStack_2c8;
  long *****ppppplStack_2b8;
  long ******pppppplStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  byte *pbStack_298;
  undefined8 uStack_290;
  int *piStack_288;
  long ******pppppplStack_280;
  undefined8 uStack_278;
  long ******pppppplStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined4 uStack_258;
  long ******pppppplStack_250;
  undefined8 uStack_248;
  long ******pppppplStack_240;
  undefined8 uStack_238;
  undefined4 uStack_230;
  long ******pppppplStack_228;
  undefined8 uStack_220;
  long ******pppppplStack_218;
  undefined8 uStack_210;
  float fStack_208;
  long *****ppppplStack_1f8;
  long *****ppppplStack_1f0;
  long *****ppppplStack_1e8;
  long *****ppppplStack_1e0;
  uint uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  long *****ppppplStack_1c8;
  int *piStack_1c0;
  long lStack_1b8;
  uint uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  byte *pbStack_1a0;
  long lStack_198;
  long lStack_190;
  long ******pppppplStack_188;
  long ******pppppplStack_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  long lStack_148;
  byte *pbStack_140;
  long ***ppplStack_138;
  long **pplStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  int iStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(char *)((long)param_1 + 0x229) == '\x03') {
    return;
  }
  *(undefined1 *)((long)param_1 + 0x229) = 1;
  lVar19 = param_1[2];
  ppplStack_138 = &pplStack_130;
  pplStack_130 = (long **)0x0;
  lStack_128 = 0;
  pppplVar31 = param_2[1];
  pppplVar30 = (long ****)0x7;
  if (pppplVar31 < (long ****)0x7) {
    pppplVar30 = pppplVar31;
  }
  uStack_318 = param_2;
  ppppplStack_2b8 = param_4;
  lStack_148 = param_6;
  if (pppplVar31 != (long ****)0x0) {
    puVar36 = &DAT_0f720e60;
    pppplVar31 = (long ****)0x0;
    do {
      if (((ulong)(*uStack_318)[(ulong)pppplVar31 >> 6] >> ((ulong)pppplVar31 & 0x3f) & 1) != 0) {
        func_0x049dcb70(&ppplStack_138,puVar36,puVar36);
      }
      pppplVar31 = (long ****)((long)pppplVar31 + 1);
      puVar36 = puVar36 + 0x18;
    } while (pppplVar30 != pppplVar31);
  }
  uStack_328 = (long *****)param_5;
  func_0x0eca5a30(lVar19,&ppplStack_138,2);
  func_0x049dc470(&ppplStack_138,pplStack_130);
  param_1[0x59] = *param_3;
  if (((ulong)param_1[0x5a] >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(param_1[0x5a] & 0xff00ffffffffffffU) - 8);
  }
  param_1[0x5a] = 0;
  uVar40 = param_3[1];
  if ((uVar40 & 0x80000000000000) == 0) {
    param_1[0x5a] = uVar40;
    uVar40 = param_1[0x5b];
    ppppplVar17 = ppppplStack_2b8;
  }
  else {
    lVar19 = *(long *)((uVar40 & 0xff00ffffffffffff) - 8);
    lVar39 = lVar19 + 9;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar39,8);
    if (plVar15 == (long *)0x0 && lVar39 != 0) {
      func_0x0eec74c0(lVar39,8);
    }
    *plVar15 = lVar19;
    func_0x0eee2f00(plVar15 + 1,uVar40 & 0xff00ffffffffffff,lVar19);
    *(undefined1 *)((long)plVar15 + lVar19 + 8) = 0;
    param_1[0x5a] = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    uVar40 = param_1[0x5b];
    ppppplVar17 = ppppplStack_2b8;
  }
  ppppplStack_2b8 = ppppplVar17;
  if ((uVar40 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uVar40 & 0xff00ffffffffffff) - 8);
  }
  param_1[0x5b] = 0;
  uVar40 = param_3[2];
  if ((uVar40 & 0x80000000000000) != 0) {
    lVar19 = *(long *)((uVar40 & 0xff00ffffffffffff) - 8);
    lVar39 = lVar19 + 9;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar39,8);
    if (plVar15 == (long *)0x0 && lVar39 != 0) {
      func_0x0eec74c0(lVar39,8);
    }
    *plVar15 = lVar19;
    func_0x0eee2f00(plVar15 + 1,uVar40 & 0xff00ffffffffffff,lVar19);
    *(undefined1 *)((long)plVar15 + lVar19 + 8) = 0;
    uVar40 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    ppppplVar17 = ppppplStack_2b8;
  }
  plVar15 = (long *)uStack_328;
  param_1[0x5b] = uVar40;
  *(char *)(param_1 + 0x5c) = (char)param_3[3];
  if ((long *****)(param_1 + 3) != uStack_328) {
    plVar3 = (long *)param_1[4];
    param_1[3] = 0;
    param_1[4] = 0;
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar5 = plVar3 + 1;
      lVar19 = *plVar5;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        func_0x0412c2d0(plVar3);
      }
    }
    param_1[5] = 0;
    lVar19 = *plVar15;
    uVar47 = *(undefined4 *)((long)plVar15 + 4);
    lVar39 = plVar15[1];
    uVar45 = *(undefined4 *)((long)plVar15 + 0xc);
    if (plVar15[1] != 0) {
      LOCK();
      plVar3 = (long *)(plVar15[1] + 8);
      *plVar3 = *plVar3 + 1;
      UNLOCK();
    }
    plVar3 = (long *)param_1[4];
    *(int *)(param_1 + 3) = (int)lVar19;
    *(undefined4 *)((long)param_1 + 0x1c) = uVar47;
    *(int *)(param_1 + 4) = (int)lVar39;
    *(undefined4 *)((long)param_1 + 0x24) = uVar45;
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar5 = plVar3 + 1;
      lVar19 = *plVar5;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        func_0x0412c2d0(plVar3);
      }
    }
    param_1[5] = plVar15[2];
  }
  piVar4 = (int *)param_1[0x4d];
  lVar19 = param_1[0x4e];
  piStack_1c0 = piVar4;
  if (lVar19 == 0) {
    lStack_1b8 = 0;
  }
  else {
    LOCK();
    *(long *)(lVar19 + 0x10) = *(long *)(lVar19 + 0x10) + 1;
    UNLOCK();
    LOCK();
    *(long *)(lVar19 + 0x10) = *(long *)(lVar19 + 0x10) + 1;
    UNLOCK();
    lStack_1b8 = lVar19;
    plVar15 = (long *)func_0x0412c300(lVar19);
    if (plVar15 != (long *)0x0) {
      if (piVar4 != (int *)0x0) {
        LOCK();
        *piVar4 = *piVar4 + 1;
        UNLOCK();
      }
      LOCK();
      plVar3 = plVar15 + 1;
      lVar39 = *plVar3;
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (lVar39 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        func_0x0412c2d0(plVar15);
      }
    }
    func_0x0412c2d0(lVar19);
  }
  ppppplVar33 = uStack_318;
  lVar19 = param_1[1];
  plVar15 = (long *)*param_1;
  lVar39 = param_1[1];
  uStack_14c = *(undefined4 *)((long)param_1 + 0xc);
  uStack_158 = (int)*param_1;
  uStack_154 = *(undefined4 *)((long)param_1 + 4);
  uStack_150 = (int)lVar39;
  if (lVar19 != 0) {
    LOCK();
    *(long *)(lVar19 + 0x10) = *(long *)(lVar19 + 0x10) + 1;
    UNLOCK();
    LOCK();
    *(long *)(lVar19 + 0x10) = *(long *)(lVar19 + 0x10) + 1;
    UNLOCK();
    uStack_328 = (long *****)plVar15;
    uStack_320 = (int)lVar39;
    uStack_31c = uStack_14c;
    func_0x0412c2d0();
    uStack_158 = (undefined4)uStack_328;
    uStack_154 = uStack_328._4_4_;
    uStack_150 = uStack_320;
    uStack_14c = uStack_31c;
  }
  func_0x0c540d10(&uStack_158);
  if (CONCAT44(uStack_14c,uStack_150) != 0) {
    func_0x0412c2d0();
  }
  ppppplStack_1f8 = (long *****)0x0;
  ppppplStack_1f0 = (long *****)0x0;
  ppppplStack_1e8 = (long *****)0x0;
  ppppplVar29 = ppppplStack_1f8;
  ppppplVar41 = ppppplStack_1f0;
  ppppplVar28 = ppppplStack_1e8;
  if (ppppplVar17 != (long *****)0x0) {
    uStack_328 = (long *****)param_1[2];
    pppplVar31 = (long ****)ppppplVar17[0x13][1];
    pppplVar30 = (long ****)ppppplVar17[0x13][2];
    uStack_358 = (long *****)0x0;
    _auStack_350 = (long *****)0x0;
    uStack_348 = (long *****)0x0;
    ppppplVar29 = uStack_358;
    ppppplVar41 = _auStack_350;
    ppppplVar28 = uStack_348;
    if (pppplVar31 != pppplVar30) {
      ppppplStack_1e0 = ppppplVar33 + 3;
      do {
        ppplStack_138 = *(long ****)(*(*pppplVar31[0x1d])[1] + 0x128);
        pplStack_130 = *(long ***)(*(*pppplVar31[0x1d])[1] + 0x130);
        func_0x0491cee0(&lStack_128,ppppplVar33);
        func_0x0491cee0(&lStack_110,ppppplStack_1e0);
        uStack_f8 = CONCAT71(uStack_f8._1_7_,*(byte *)(ppppplVar33 + 6));
        pplVar22 = *pppplVar31[0x1d];
        if ((long *)pplVar22[1][1] == (long *)0x0) {
          uVar12 = 0;
        }
        else {
          uVar12 = (**(code **)(*(long *)pplVar22[1][1] + 0x30))();
          pplVar22 = *pppplVar31[0x1d];
        }
        uStack_f0._0_2_ = CONCAT11(*(undefined1 *)(pplVar22 + 0x11),uVar12);
        pppppplVar16 = (long ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
        if (pppppplVar16 == (long ******)0x0) {
          func_0x0eec74c0(0x60,0);
        }
        pppppplVar16[1] = (long *****)0x0;
        pppppplVar16[2] = (long *****)0x0;
        *pppppplVar16 = (long *****)&UNK_0f3ebd00;
        pppppplVar20 = pppppplVar16 + 3;
        pppppplVar16[4] = (long *****)0x0;
        pppppplVar16[5] = (long *****)0x0;
        pppppplVar16[6] = (long *****)0x0;
        pppppplVar16[7] = (long *****)0x0;
        *(undefined4 *)(pppppplVar16 + 8) = 0x3f800000;
        pppppplVar16[9] = (long *****)0x0;
        pppppplVar16[10] = (long *****)0x0;
        pppppplVar16[3] = (long *****)&UNK_0f36e808;
        pppppplVar16[0xb] = (long *****)&UNK_0f36e838;
        func_0x0c44d960(pppppplVar20,&ppplStack_138);
        (*(code *)(*pppppplVar20)[3])(pppppplVar20);
        uStack_308 = (long *)CONCAT17(uStack_308._7_1_,0x736d6574690a);
        pppppplStack_2b0 = pppppplVar20;
        uStack_2a8 = pppppplVar16;
        ppppplVar17 = (long *****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (ppppplVar17 == (long *****)0x0) {
          func_0x0eec74c0(0x30,0);
        }
        *ppppplVar17 = (long ****)&UNK_0f3ebd50;
        ppppplVar17[1] = pppplVar31;
        ppppplVar17[2] = &ppplStack_138;
        ppppplVar17[3] = (long ****)&pppppplStack_2b0;
        ppppplVar17[4] = (long ****)uStack_328;
        ppppplVar17[5] = (long ****)&uStack_358;
        ppplVar34 = pppplVar31[0x1d];
        ppiVar18 = (int **)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (ppiVar18 == (int **)0x0) {
          func_0x0eec74c0(0x30,0);
        }
        *ppiVar18 = (int *)&UNK_0f3ebd50;
        uVar47 = *(undefined4 *)((long)ppppplVar17 + 0xc);
        uVar45 = *(undefined4 *)(ppppplVar17 + 2);
        uVar46 = *(undefined4 *)((long)ppppplVar17 + 0x14);
        uVar48 = *(undefined4 *)(ppppplVar17 + 3);
        uVar7 = *(undefined4 *)((long)ppppplVar17 + 0x1c);
        uVar8 = *(undefined4 *)(ppppplVar17 + 4);
        uVar9 = *(undefined4 *)((long)ppppplVar17 + 0x24);
        *(undefined4 *)(ppiVar18 + 1) = *(undefined4 *)(ppppplVar17 + 1);
        *(undefined4 *)((long)ppiVar18 + 0xc) = uVar47;
        *(undefined4 *)(ppiVar18 + 2) = uVar45;
        *(undefined4 *)((long)ppiVar18 + 0x14) = uVar46;
        *(undefined4 *)(ppiVar18 + 3) = uVar48;
        *(undefined4 *)((long)ppiVar18 + 0x1c) = uVar7;
        *(undefined4 *)(ppiVar18 + 4) = uVar8;
        *(undefined4 *)((long)ppiVar18 + 0x24) = uVar9;
        ppiVar18[5] = (int *)ppppplVar17[5];
        uStack_268 = ppiVar18;
        func_0x0d62a6f0(ppplVar34,&uStack_308,&piStack_288,*(undefined4 *)(pppplVar31 + 0x21),0);
        ppppplVar33 = uStack_318;
        if (uStack_268 == &piStack_288) {
          lVar19 = 0x20;
LAB_0ca097a5:
          (**(code **)((long)*uStack_268 + lVar19))();
        }
        else {
          lVar19 = 0x28;
          if (uStack_268 != (int **)0x0) goto LAB_0ca097a5;
        }
        (*(code *)(*ppppplVar17)[5])(ppppplVar17);
        if (((ulong)uStack_308 & 1) != 0) {
          func_0x0412a280(CONCAT44(uStack_2f4,uStack_2f8),(ulong)uStack_308 & 0xfffffffffffffffe);
        }
        pppppplVar16 = uStack_2a8;
        if (uStack_2a8 != (long ******)0x0) {
          LOCK();
          pppppplVar20 = uStack_2a8 + 1;
          ppppplVar29 = *pppppplVar20;
          *pppppplVar20 = (long *****)((long)*pppppplVar20 + -1);
          UNLOCK();
          if (ppppplVar29 == (long *****)0x0) {
            (*(code *)(*uStack_2a8)[2])(uStack_2a8);
            func_0x0412c2d0(pppppplVar16);
          }
        }
        if (lStack_110 != 0) {
          func_0x0412a280(lStack_110,lStack_100 << 3);
        }
        if (lStack_128 != 0) {
          func_0x0412a280(lStack_128,lStack_118 << 3);
        }
        pppplVar31 = pppplVar31 + 0x22;
        ppppplVar29 = uStack_358;
        ppppplVar41 = _auStack_350;
        ppppplVar28 = uStack_348;
      } while (pppplVar31 != pppplVar30);
    }
  }
  ppppplStack_1e8 = ppppplVar28;
  ppppplStack_1f0 = ppppplVar41;
  ppppplStack_1f8 = ppppplVar29;
  ppppplVar29 = ppppplStack_1f0;
  ppppplVar41 = ppppplStack_1f8;
  uVar45 = 0;
  uVar47 = 0;
  pppppplStack_280 = (long ******)0x0;
  plStack_90 = (long *)0x0;
  uStack_88 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  ppplStack_138 = (long ***)0x0;
  pplStack_130 = (long **)0x0;
  lStack_128 = 0;
  uStack_120 = 0;
  lStack_118 = 0;
  lStack_110 = 0;
  uStack_108 = 0;
  lStack_100 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  iStack_a8 = 0;
  uStack_80 = 0x3f800000;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_328 = ppppplStack_1f0;
  if ((char)param_1[0x58] != '\0') {
    *(undefined1 *)(param_1 + 0x52) = 1;
    lVar19 = param_1[2];
    lVar39 = param_1[1];
    ppppplVar28 = (long *****)*param_1;
    lVar10 = param_1[1];
    uStack_16c = *(undefined4 *)((long)param_1 + 0xc);
    uStack_178 = (int)*param_1;
    uStack_174 = *(undefined4 *)((long)param_1 + 4);
    uStack_170 = (int)lVar10;
    if (lVar39 != 0) {
      LOCK();
      *(long *)(lVar39 + 0x10) = *(long *)(lVar39 + 0x10) + 1;
      UNLOCK();
      LOCK();
      *(long *)(lVar39 + 0x10) = *(long *)(lVar39 + 0x10) + 1;
      UNLOCK();
      uStack_318 = ppppplVar28;
      uStack_310 = (int)lVar10;
      uStack_30c = uStack_16c;
      func_0x0412c2d0();
      uStack_178 = (undefined4)uStack_318;
      uStack_174 = uStack_318._4_4_;
      uStack_170 = uStack_310;
      uStack_16c = uStack_30c;
    }
    func_0x0c38df40(lVar19,&uStack_178,param_3,ppppplVar33);
    if (CONCAT44(uStack_16c,uStack_170) != 0) {
      func_0x0412c2d0();
    }
    plVar15 = (long *)param_1[0x4a];
    if (plVar15 != (long *)0x0) {
      lStack_198 = *param_1;
      lVar19 = param_1[1];
      if (lVar19 == 0) {
        lStack_190 = 0;
      }
      else {
        LOCK();
        *(long *)(lVar19 + 0x10) = *(long *)(lVar19 + 0x10) + 1;
        UNLOCK();
        LOCK();
        *(long *)(lVar19 + 0x10) = *(long *)(lVar19 + 0x10) + 1;
        UNLOCK();
        func_0x0412c2d0(lVar19);
        plVar15 = (long *)param_1[0x4a];
        lStack_190 = lVar19;
        if (plVar15 == (long *)0x0) {
          pppppplStack_280 = (long ******)func_0x04891200();
          uVar47 = extraout_XMM0_Dc;
          uVar45 = extraout_XMM0_Dd;
          goto LAB_0ca09a3a;
        }
      }
      (**(code **)(*plVar15 + 0x30))(plVar15,&lStack_198);
      if (lStack_190 != 0) {
        func_0x0412c2d0();
      }
    }
    *(undefined1 *)(param_1 + 0x52) = 0;
    piStack_288 = (int *)0x100000002;
    pppppplStack_280 = (long ******)0x0;
    uStack_278 = 0;
    pppppplStack_270 = (long ******)0x0;
    uStack_268 = (int **)0x0;
    uStack_260 = 0;
    uStack_258 = 0x3f800000;
    pppppplStack_250 = (long ******)0x0;
    uStack_248 = 0;
    pppppplStack_240 = (long ******)0x0;
    uStack_238 = 0;
    uStack_230 = 0x3f800000;
    pppppplStack_228 = (long ******)0x0;
    uStack_220 = (long *****)0x0;
    pppppplStack_218 = (long ******)0x0;
    uStack_210 = 0;
    fStack_208 = 1.0;
    if (ppppplVar41 != ppppplVar29) {
LAB_0ca09ce0:
      if (*(byte *)((long)ppppplVar41 + 0x159) == 1) {
        func_0x0ca05f70(&uStack_308,param_1[2],ppppplVar41);
        if (((ulong)uStack_308 & 1) != 0) {
          if (CONCAT44(uStack_2fc,auStack_300) == 0) goto LAB_0ca0a931;
LAB_0ca09d2b:
          uStack_358 = (long *****)ppplStack_2e0;
          _auStack_350 = ppppplStack_2e8;
          if (((ulong)auStack_2f0 & 1) == 0) {
            uStack_358 = (long *****)(auStack_2f0 + 1);
            _auStack_350 = (long *****)((ulong)auStack_2f0 >> 1 & 0x7f);
          }
          uStack_348 = ppppplStack_2c8;
          ppppplStack_340 = (long *****)auStack_2d7._7_8_;
          if ((bStack_2d8 & 1) == 0) {
            uStack_348 = (long *****)auStack_2d7;
            ppppplStack_340 = (long *****)(ulong)(bStack_2d8 >> 1);
          }
          func_0x0470d9a0(&uStack_1b0,&UNK_011ed16e,5,0xdd,&uStack_358);
          pppppplStack_2b0 = (long ******)0x0;
          if ((uStack_1b0 & 1) == 0) {
            pbStack_298 = pbStack_1a0;
            uStack_2a8 = (long ******)CONCAT44(uStack_1ac,uStack_1b0);
            uStack_2a0 = CONCAT44(uStack_1a4,uStack_1a8);
          }
          else {
            func_0x0412e5e0(&uStack_2a8,pbStack_1a0,CONCAT44(uStack_1a4,uStack_1a8));
          }
          uStack_290 = 0;
          if (((ulong)uStack_2a8 & 1) == 0) {
            if ((byte)uStack_2a8 >> 1 != 0) goto LAB_0ca09e3d;
LAB_0ca09f20:
            pppppplStack_2b0 = (long ******)0x0;
          }
          else {
            if (uStack_2a0 == 0) goto LAB_0ca09f20;
LAB_0ca09e3d:
            pbVar42 = (byte *)((long)&uStack_2a8 + 1);
            if (((ulong)uStack_2a8 & 1) != 0) {
              pbVar42 = pbStack_298;
            }
            if ((pbVar42 == (byte *)0x0) || (*pbVar42 == 0)) goto LAB_0ca09f20;
            uVar40 = func_0x0eee2e90(pbVar42);
            pppppplStack_2b0 = (long ******)0xcbf29ce484222325;
            if (uVar40 != 0) {
              if (7 < uVar40) {
                uVar27 = uVar40 & 0xfffffffffffffff8;
                do {
                  pppppplStack_2b0 =
                       (long ******)
                       (((((((((long)pppppplStack_2b0 * 0x100000001b3 ^ (ulong)*pbVar42) *
                              0x100000001b3 ^ (ulong)pbVar42[1]) * 0x100000001b3 ^ (ulong)pbVar42[2]
                            ) * 0x100000001b3 ^ (ulong)pbVar42[3]) * 0x100000001b3 ^
                          (ulong)pbVar42[4]) * 0x100000001b3 ^ (ulong)pbVar42[5]) * 0x100000001b3 ^
                        (ulong)pbVar42[6]) * 0x100000001b3 ^ (ulong)pbVar42[7]);
                  pbVar42 = pbVar42 + 8;
                  uVar27 = uVar27 - 8;
                } while (uVar27 != 0);
              }
              if ((uVar40 & 7) != 0) {
                uVar27 = 0;
                do {
                  pppppplStack_2b0 =
                       (long ******)
                       ((long)pppppplStack_2b0 * 0x100000001b3 ^ (ulong)pbVar42[uVar27]);
                  uVar27 = uVar27 + 1;
                } while (((uint)uVar40 & 7) != uVar27);
              }
            }
          }
          func_0x0ca011b0(&uStack_358,param_1,&pppppplStack_2b0);
          if (((ulong)_auStack_350 & 1) == 0) {
            ppppplStack_1c8 = ppppplStack_340;
            uStack_1d8 = (uint)auStack_350;
            uStack_1d4 = uStack_34c;
            uStack_1d0 = (undefined4)uStack_348;
            uStack_1cc = uStack_348._4_4_;
joined_r0x0ca0a26b:
            if (((ulong)uStack_2a8 & 1) == 0) goto LAB_0ca09fe7;
LAB_0ca09f73:
            func_0x0412a280(pbStack_298,(ulong)uStack_2a8 & 0xfffffffffffffffe);
            if ((uStack_1d8 & 1) != 0) goto LAB_0ca09f9f;
LAB_0ca09ffa:
            uStack_358 = (long *****)0x0;
            ppppplStack_340 = ppppplStack_1c8;
            _auStack_350 = (long *****)CONCAT44(uStack_1d4,uStack_1d8);
            uStack_348 = (long *****)CONCAT44(uStack_1cc,uStack_1d0);
          }
          else {
            func_0x0412e5e0(&uStack_1d8,ppppplStack_340,uStack_348);
            if (((ulong)_auStack_350 & 1) != 0) {
              func_0x0412a280(ppppplStack_340,(ulong)_auStack_350 & 0xfffffffffffffffe);
              goto joined_r0x0ca0a26b;
            }
            if (((ulong)uStack_2a8 & 1) != 0) goto LAB_0ca09f73;
LAB_0ca09fe7:
            if ((uStack_1d8 & 1) == 0) goto LAB_0ca09ffa;
LAB_0ca09f9f:
            uStack_358 = (long *****)0x0;
            func_0x0412e5e0(auStack_350,ppppplStack_1c8,CONCAT44(uStack_1cc,uStack_1d0));
          }
          ppppplVar33 = _auStack_350;
          pppplStack_338 = (long ****)0x0;
          uVar40 = (ulong)_auStack_350 & 1;
          if (((ulong)_auStack_350 & 1) == 0) {
            ppppplVar29 = (long *****)((ulong)_auStack_350 >> 1 & 0x7f);
            if (ppppplVar29 != (long *****)0x0) goto LAB_0ca0a049;
LAB_0ca0a130:
            ppppplVar43 = (long *****)0x0;
          }
          else {
            ppppplVar29 = uStack_348;
            if (uStack_348 == (long *****)0x0) goto LAB_0ca0a130;
LAB_0ca0a049:
            ppppplVar28 = (long *****)(auStack_350 + 1);
            if (((ulong)_auStack_350 & 1) != 0) {
              ppppplVar28 = ppppplStack_340;
            }
            if ((ppppplVar28 == (long *****)0x0) || (*(byte *)ppppplVar28 == 0)) goto LAB_0ca0a130;
            uVar27 = func_0x0eee2e90(ppppplVar28);
            ppppplVar43 = (long *****)0xcbf29ce484222325;
            if (uVar27 != 0) {
              if (7 < uVar27) {
                uVar24 = uVar27 & 0xfffffffffffffff8;
                do {
                  ppppplVar43 = (long *****)
                                (((((((((long)ppppplVar43 * 0x100000001b3 ^
                                       (ulong)*(byte *)ppppplVar28) * 0x100000001b3 ^
                                      (ulong)*(byte *)((long)ppppplVar28 + 1)) * 0x100000001b3 ^
                                     (ulong)*(byte *)((long)ppppplVar28 + 2)) * 0x100000001b3 ^
                                    (ulong)*(byte *)((long)ppppplVar28 + 3)) * 0x100000001b3 ^
                                   (ulong)*(byte *)((long)ppppplVar28 + 4)) * 0x100000001b3 ^
                                  (ulong)*(byte *)((long)ppppplVar28 + 5)) * 0x100000001b3 ^
                                 (ulong)*(byte *)((long)ppppplVar28 + 6)) * 0x100000001b3 ^
                                (ulong)*(byte *)((long)ppppplVar28 + 7));
                  ppppplVar28 = ppppplVar28 + 1;
                  uVar24 = uVar24 - 8;
                } while (uVar24 != 0);
              }
              if ((uVar27 & 7) != 0) {
                uVar24 = 0;
                do {
                  ppppplVar43 = (long *****)
                                ((long)ppppplVar43 * 0x100000001b3 ^
                                (ulong)*(byte *)((long)ppppplVar28 + uVar24));
                  uVar24 = uVar24 + 1;
                } while (((uint)uVar27 & 7) != uVar24);
              }
            }
          }
          ppppplVar28 = uStack_220;
          bVar1 = *(byte *)(ppppplVar41 + 0x31);
          uStack_358 = ppppplVar43;
          if (uStack_220 != (long *****)0x0) {
            uVar27 = (long)uStack_220 - ((ulong)uStack_220 >> 1 & 0x5555555555555555);
            uVar27 = (uVar27 >> 2 & 0x3333333333333333) + (uVar27 & 0x3333333333333333);
            uVar27 = ((uVar27 >> 4) + uVar27 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
            if (uVar27 >> 0x38 < 2) {
              ppppplVar17 = (long *****)((ulong)((long)uStack_220 - 1U) & (ulong)ppppplVar43);
              ppppplVar26 = pppppplStack_228[(long)ppppplVar17];
            }
            else {
              ppppplVar17 = ppppplVar43;
              if (uStack_220 <= ppppplVar43) {
                if (((ulong)ppppplVar43 | (ulong)uStack_220) >> 0x20 == 0) {
                  ppppplVar17 = (long *****)
                                (((ulong)ppppplVar43 & 0xffffffff) %
                                ((ulong)uStack_220 & 0xffffffff));
                  ppppplVar26 = pppppplStack_228[(long)ppppplVar17];
                  goto joined_r0x0ca0a202;
                }
                ppppplVar17 = (long *****)((ulong)ppppplVar43 % (ulong)uStack_220);
              }
              ppppplVar26 = pppppplStack_228[(long)ppppplVar17];
            }
joined_r0x0ca0a202:
            if ((ppppplVar26 != (long *****)0x0) &&
               (pppplVar31 = *ppppplVar26, pppplVar31 != (long ****)0x0)) {
              uStack_318 = (long *****)(auStack_350 + 1);
              if (uVar40 != 0) {
                uStack_318 = ppppplStack_340;
              }
              ppppplStack_1e0 = ppppplVar17;
              if ((byte)(uVar27 >> 0x38) < 2) {
                pbVar42 = (byte *)((long)uStack_220 + -1);
                pbStack_140 = pbVar42;
                do {
                  if ((long *****)pppplVar31[1] == ppppplVar43) {
                    if ((long *****)pppplVar31[2] == ppppplVar43) {
                      bVar2 = *(byte *)(pppplVar31 + 3);
                      if ((bVar2 & 1) == 0) {
                        ppppplVar26 = (long *****)(ulong)(bVar2 >> 1);
                      }
                      else {
                        ppppplVar26 = (long *****)pppplVar31[4];
                      }
                      if (ppppplVar26 == ppppplVar29) {
                        if ((bVar2 & 1) == 0) {
                          ppplVar34 = (long ***)((long)pppplVar31 + 0x19);
                        }
                        else {
                          ppplVar34 = pppplVar31[5];
                        }
                        iVar14 = bcmp(ppplVar34,uStack_318,ppppplVar29);
                        pbVar42 = pbStack_140;
                        ppppplVar17 = ppppplStack_1e0;
                        if (iVar14 == 0) goto LAB_0ca0aa00;
                      }
                    }
                    pppplVar31[6] = (long ***)0x0;
                  }
                  else if ((long *****)((ulong)pppplVar31[1] & (ulong)pbVar42) != ppppplVar17)
                  break;
                  pppplVar31 = (long ****)*pppplVar31;
                } while (pppplVar31 != (long ****)0x0);
              }
              else {
                do {
                  ppppplVar26 = (long *****)pppplVar31[1];
                  if (ppppplVar26 == ppppplVar43) {
                    if ((long *****)pppplVar31[2] == ppppplVar43) {
                      bVar2 = *(byte *)(pppplVar31 + 3);
                      if ((bVar2 & 1) == 0) {
                        ppppplVar26 = (long *****)(ulong)(bVar2 >> 1);
                      }
                      else {
                        ppppplVar26 = (long *****)pppplVar31[4];
                      }
                      if (ppppplVar26 == ppppplVar29) {
                        if ((bVar2 & 1) == 0) {
                          ppplVar34 = (long ***)((long)pppplVar31 + 0x19);
                        }
                        else {
                          ppplVar34 = pppplVar31[5];
                        }
                        iVar14 = bcmp(ppplVar34,uStack_318,ppppplVar29);
                        ppppplVar17 = ppppplStack_1e0;
                        if (iVar14 == 0) goto LAB_0ca0aa00;
                      }
                    }
                    pppplVar31[6] = (long ***)0x0;
                  }
                  else {
                    if (ppppplVar28 <= ppppplVar26) {
                      if (((ulong)ppppplVar26 | (ulong)ppppplVar28) >> 0x20 == 0) {
                        if ((long *****)
                            (((ulong)ppppplVar26 & 0xffffffff) % ((ulong)ppppplVar28 & 0xffffffff))
                            == ppppplVar17) goto LAB_0ca0a2a5;
                        break;
                      }
                      ppppplVar26 = (long *****)((ulong)ppppplVar26 % (ulong)ppppplVar28);
                    }
                    if (ppppplVar26 != ppppplVar17) break;
                  }
LAB_0ca0a2a5:
                  pppplVar31 = (long ****)*pppplVar31;
                } while (pppplVar31 != (long ****)0x0);
              }
            }
          }
          pppppplVar16 = (long ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
          if (pppppplVar16 == (long ******)0x0) {
            func_0x0eec74c0(0x40,0);
          }
          uStack_2a8 = (long ******)&pppppplStack_228;
          uStack_2a0 = 1;
          *pppppplVar16 = (long *****)0x0;
          pppppplVar16[1] = ppppplVar43;
          pppppplVar16[4] = (long *****)0x0;
          pppppplVar16[5] = (long *****)0x0;
          pppppplVar16[2] = (long *****)0x0;
          pppppplVar16[3] = (long *****)0x0;
          pppppplVar16[6] = (long *****)0x0;
          pppppplVar16[5] = ppppplStack_340;
          pppppplVar16[3] = _auStack_350;
          pppppplVar16[4] = uStack_348;
          _auStack_350 = (long *****)((ulong)_auStack_350 & 0xffffffffffff0000);
          pppppplVar16[2] = uStack_358;
          *(uint *)(pppppplVar16 + 7) = (uint)bVar1;
          pppppplStack_2b0 = pppppplVar16;
          if ((long)ppppplVar28 < 0) {
            fVar49 = (float)ppppplVar28;
            if (ppppplVar28 != (long *****)0x0) goto LAB_0ca0a412;
LAB_0ca0a482:
            uVar40 = 1;
            if ((long *****)0x2 < ppppplVar28) {
              uVar40 = (ulong)(((ulong)ppppplVar28 & (ulong)((long)ppppplVar28 - 1U)) != 0);
            }
            ppppplVar29 = (long *****)((long)ppppplVar28 * 2 | uVar40);
            fVar49 = (float)func_0x0eee3ab0((float)(uStack_210 + 1) / fStack_208);
            ppppplVar33 = (long *****)
                          ((long)(fVar49 - _DAT_01198778) & (long)fVar49 >> 0x3f | (long)fVar49);
            if (ppppplVar33 < ppppplVar29) {
              ppppplVar33 = ppppplVar29;
            }
            ppppplVar29 = (long *****)0x2;
            if ((ppppplVar33 == (long *****)0x1) ||
               (ppppplVar29 = ppppplVar33,
               ((ulong)ppppplVar33 & (ulong)((long)ppppplVar33 - 1U)) == 0)) {
              bVar44 = ppppplVar29 < uStack_220;
              if (ppppplVar29 <= uStack_220) goto LAB_0ca0a6a0;
LAB_0ca0a4fe:
              ppppplVar17 = ppppplVar29;
              if ((ulong)ppppplVar17 >> 0x3d != 0) {
                uVar21 = func_0x04882eb0();
                if (CONCAT44(uStack_15c,uStack_160) != 0) {
                  func_0x0412c2d0();
                }
                func_0x0ca06fb0(&piStack_288);
                func_0x05f43b50(&ppplStack_138);
                func_0x0ca06d80(&ppppplStack_1f8);
                func_0x0c53a2d0(&piStack_1c0);
                func_0x0eee2d70(uVar21);
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              lVar19 = (long)ppppplVar17 * 8;
              pppppplVar20 = (long ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar19);
              if (pppppplVar20 == (long ******)0x0) {
                func_0x0eec74c0(lVar19,0);
              }
              pppppplVar35 = pppppplStack_228;
              bVar44 = pppppplStack_228 != (long ******)0x0;
              pppppplStack_228 = pppppplVar20;
              if (bVar44) {
                func_0x0412a280(pppppplVar35,(long)uStack_220 << 3);
              }
              pppppplVar20 = pppppplStack_228;
              uStack_220 = ppppplVar17;
              memset(pppppplStack_228,0,lVar19);
              if (pppppplStack_218 != (long ******)0x0) {
                ppppplVar33 = pppppplStack_218[1];
                pbVar42 = (byte *)((long)ppppplVar17 - 1);
                if (((ulong)ppppplVar17 & (ulong)pbVar42) == 0) {
                  pppppplVar20[(ulong)ppppplVar33 & (ulong)pbVar42] = (long *****)&pppppplStack_218;
                  uVar40 = (ulong)ppppplVar33 & (ulong)pbVar42;
                  pppppplVar35 = pppppplStack_218;
                  while (pppppplVar32 = pppppplVar35, pppppplVar35 = (long ******)*pppppplVar32,
                        pppppplVar35 != (long ******)0x0) {
                    uVar27 = (ulong)pppppplVar35[1] & (ulong)pbVar42;
                    if (uVar27 != uVar40) {
                      if (pppppplVar20[uVar27] == (long *****)0x0) {
                        pppppplVar20[uVar27] = (long *****)pppppplVar32;
                        uVar40 = uVar27;
                      }
                      else {
                        *pppppplVar32 = *pppppplVar35;
                        *pppppplVar35 = (long *****)*pppppplVar20[uVar27];
                        *pppppplVar20[uVar27] = (long ****)pppppplVar35;
                        pppppplVar35 = pppppplVar32;
                      }
                    }
                  }
                }
                else {
                  if (ppppplVar17 <= ppppplVar33) {
                    if (((ulong)ppppplVar33 | (ulong)ppppplVar17) >> 0x20 == 0) {
                      ppppplVar33 = (long *****)
                                    (((ulong)ppppplVar33 & 0xffffffff) %
                                    ((ulong)ppppplVar17 & 0xffffffff));
                    }
                    else {
                      ppppplVar33 = (long *****)((ulong)ppppplVar33 % (ulong)ppppplVar17);
                    }
                  }
                  pppppplVar20[(long)ppppplVar33] = (long *****)&pppppplStack_218;
                  pppppplVar35 = (long ******)*pppppplStack_218;
                  pppppplVar32 = pppppplStack_218;
                  while (pppppplVar35 != (long ******)0x0) {
                    ppppplVar29 = pppppplVar35[1];
                    if (ppppplVar17 <= ppppplVar29) {
                      if (((ulong)ppppplVar29 | (ulong)ppppplVar17) >> 0x20 == 0) {
                        ppppplVar29 = (long *****)
                                      (((ulong)ppppplVar29 & 0xffffffff) %
                                      ((ulong)ppppplVar17 & 0xffffffff));
                      }
                      else {
                        ppppplVar29 = (long *****)((ulong)ppppplVar29 % (ulong)ppppplVar17);
                      }
                    }
                    if (ppppplVar29 != ppppplVar33) {
                      if (pppppplVar20[(long)ppppplVar29] == (long *****)0x0) {
                        pppppplVar20[(long)ppppplVar29] = (long *****)pppppplVar32;
                        ppppplVar33 = ppppplVar29;
                      }
                      else {
                        *pppppplVar32 = *pppppplVar35;
                        *pppppplVar35 = (long *****)*pppppplVar20[(long)ppppplVar29];
                        *pppppplVar20[(long)ppppplVar29] = (long ****)pppppplVar35;
                        pppppplVar35 = pppppplVar32;
                      }
                    }
                    pppppplVar32 = pppppplVar35;
                    pppppplVar35 = (long ******)*pppppplVar32;
                  }
                }
              }
            }
            else {
              ppppplVar29 = (long *****)func_0x0412c3f0();
              bVar44 = ppppplVar29 < uStack_220;
              if (uStack_220 < ppppplVar29) goto LAB_0ca0a4fe;
LAB_0ca0a6a0:
              ppppplVar33 = uStack_220;
              if (bVar44) {
                fVar49 = (float)func_0x0eee3ab0((float)uStack_210 / fStack_208);
                ppppplVar17 = (long *****)
                              ((long)(fVar49 - _DAT_01198778) & (long)fVar49 >> 0x3f | (long)fVar49)
                ;
                if ((ppppplVar33 < (long *****)0x3) ||
                   (uVar40 = (long)ppppplVar33 - ((ulong)ppppplVar33 >> 1 & 0x5555555555555555),
                   uVar40 = (uVar40 >> 2 & 0x3333333333333333) + (uVar40 & 0x3333333333333333),
                   1 < (byte)(((uVar40 >> 4) + uVar40 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                             0x38))) {
                  ppppplVar17 = (long *****)func_0x0412c3f0(ppppplVar17);
                  pppppplVar20 = pppppplStack_228;
                  if (ppppplVar17 < ppppplVar29) {
                    ppppplVar17 = ppppplVar29;
                  }
                }
                else {
                  if ((long *****)0x1 < ppppplVar17) {
                    lVar19 = 0x3f;
                    if ((byte *)((long)ppppplVar17 + -1) != (byte *)0x0) {
                      for (; (ulong)((long)ppppplVar17 + -1) >> lVar19 == 0; lVar19 = lVar19 + -1) {
                      }
                    }
                    ppppplVar17 = (long *****)(1L << (-((byte)lVar19 ^ 0x3f) & 0x3f));
                  }
                  pppppplVar20 = pppppplStack_228;
                  if (ppppplVar17 < ppppplVar29) {
                    ppppplVar17 = ppppplVar29;
                  }
                }
                pppppplStack_228 = pppppplVar20;
                if (ppppplVar17 < ppppplVar33) {
                  ppppplVar29 = ppppplVar17;
                  if (ppppplVar17 != (long *****)0x0) goto LAB_0ca0a4fe;
                  pppppplStack_228 = (long ******)0x0;
                  if (pppppplVar20 != (long ******)0x0) {
                    func_0x0412a280(pppppplVar20,(long)uStack_220 << 3);
                  }
                  uStack_220 = (long *****)0x0;
                }
              }
            }
            ppppplVar28 = uStack_220;
            if (((ulong)uStack_220 & (long)uStack_220 - 1U) != 0) {
              if (uStack_220 <= ppppplVar43) {
                if (((ulong)ppppplVar43 | (ulong)uStack_220) >> 0x20 == 0) {
                  ppppplVar43 = (long *****)
                                (((ulong)ppppplVar43 & 0xffffffff) %
                                ((ulong)uStack_220 & 0xffffffff));
                  ppppplVar33 = pppppplStack_228[(long)ppppplVar43];
                  goto joined_r0x0ca0a9e6;
                }
                ppppplVar43 = (long *****)((ulong)ppppplVar43 % (ulong)uStack_220);
              }
              ppppplVar33 = pppppplStack_228[(long)ppppplVar43];
              goto joined_r0x0ca0a89f;
            }
            ppppplVar43 = (long *****)((ulong)ppppplVar43 & (ulong)((long)uStack_220 - 1U));
            ppppplVar33 = pppppplStack_228[(long)ppppplVar43];
joined_r0x0ca0a9e6:
            if (ppppplVar33 != (long *****)0x0) goto LAB_0ca0a8a5;
LAB_0ca0a433:
            *pppppplVar16 = (long *****)pppppplStack_218;
            pppppplStack_228[(long)ppppplVar43] = (long *****)&pppppplStack_218;
            pppppplStack_218 = pppppplVar16;
            if (*pppppplVar16 != (long *****)0x0) {
              ppppplVar33 = (long *****)(*pppppplVar16)[1];
              if (((ulong)ppppplVar28 & (long)ppppplVar28 - 1U) == 0) {
                pppppplStack_228[(ulong)ppppplVar33 & (ulong)((long)ppppplVar28 - 1U)] =
                     (long *****)pppppplVar16;
              }
              else {
                if (ppppplVar28 <= ppppplVar33) {
                  if (((ulong)ppppplVar33 | (ulong)ppppplVar28) >> 0x20 == 0) {
                    pppppplStack_228
                    [((ulong)ppppplVar33 & 0xffffffff) % ((ulong)ppppplVar28 & 0xffffffff)] =
                         (long *****)pppppplVar16;
                    goto LAB_0ca0a8b4;
                  }
                  ppppplVar33 = (long *****)((ulong)ppppplVar33 % (ulong)ppppplVar28);
                }
                pppppplStack_228[(long)ppppplVar33] = (long *****)pppppplVar16;
              }
            }
          }
          else {
            fVar49 = (float)(long)ppppplVar28;
            if (ppppplVar28 == (long *****)0x0) goto LAB_0ca0a482;
LAB_0ca0a412:
            if (fVar49 * fStack_208 < (float)(uStack_210 + 1)) goto LAB_0ca0a482;
            ppppplVar33 = pppppplStack_228[(long)ppppplVar17];
            ppppplVar43 = ppppplVar17;
joined_r0x0ca0a89f:
            if (ppppplVar33 == (long *****)0x0) goto LAB_0ca0a433;
LAB_0ca0a8a5:
            *pppppplVar16 = (long *****)*ppppplVar33;
            *ppppplVar33 = (long ****)pppppplVar16;
          }
LAB_0ca0a8b4:
          uStack_210 = uStack_210 + 1;
          ppppplVar29 = uStack_328;
          ppppplVar33 = _auStack_350;
          goto joined_r0x0ca0aa24;
        }
        if ((byte)uStack_308 >> 1 != 0) goto LAB_0ca09d2b;
        goto LAB_0ca0a931;
      }
      goto LAB_0ca09cd0;
    }
LAB_0ca0aadc:
    ppppplVar33 = ppppplStack_1f0;
    ppppplVar17 = ppppplStack_1f8;
    if (ppppplStack_2b8 != (long *****)0x0) {
      for (; ppppplVar17 != ppppplVar33; ppppplVar17 = ppppplVar17 + 0x32) {
        func_0x0ca01e00(&uStack_308,param_1,ppppplVar17,&piStack_288);
        uStack_348 = (long *****)auStack_2f0;
        ppppplStack_340 = ppppplStack_2e8;
        uStack_358 = (long *****)CONCAT44(uStack_2fc,auStack_300);
        _auStack_350 = (long *****)CONCAT44(uStack_2f4,uStack_2f8);
        if (uStack_308 != (long *)0x0) {
          LOCK();
          *(int *)((long)uStack_308 + 0xc) = *(int *)((long)uStack_308 + 0xc) + -1;
          UNLOCK();
          if (((*(int *)((long)uStack_308 + 0xc) < 1) && (*uStack_308 == 0)) &&
             (uStack_308 != (long *)0x0)) {
            func_0x0412a280(uStack_308,0x10);
          }
        }
        func_0x0d6b1c60(&ppplStack_138,&uStack_358);
        if (plStack_90 != (long *)0x0) {
          plVar15 = plStack_90;
          if ((*(byte *)(ppppplVar17 + 0x2e) & 1) == 0) {
            pppplVar30 = (long ****)(ulong)(*(byte *)(ppppplVar17 + 0x2e) >> 1);
            pppplVar31 = (long ****)((long)ppppplVar17 + 0x171);
          }
          else {
            pppplVar30 = ppppplVar17[0x2f];
            pppplVar31 = ppppplVar17[0x30];
          }
          do {
            bVar1 = *(byte *)(plVar15 + 2);
            if ((bVar1 & 1) == 0) {
              pppplVar23 = (long ****)(ulong)(bVar1 >> 1);
            }
            else {
              pppplVar23 = (long ****)plVar15[3];
            }
            if (pppplVar23 == pppplVar30) {
              if ((bVar1 & 1) == 0) {
                lVar19 = (long)plVar15 + 0x11;
              }
              else {
                lVar19 = plVar15[4];
              }
              iVar14 = bcmp(lVar19,pppplVar31,pppplVar30);
              if (iVar14 == 0) goto LAB_0ca0ab27;
            }
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        func_0x04907e30(&uStack_a0,ppppplVar17 + 0x2e);
LAB_0ca0ab27:
      }
    }
    plVar15 = (long *)param_1[0x55];
    if (plVar15 != (long *)0x0) {
      do {
        plVar3 = (long *)plVar15[7];
        if ((plVar3 != (long *)0x0) && (*plVar3 != 0)) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
          uStack_308 = plVar3;
          func_0x0c9fdfc0(param_1,&uStack_308);
          plVar3 = uStack_308;
          if (uStack_308 != (long *)0x0) {
            LOCK();
            *(int *)(uStack_308 + 1) = (int)uStack_308[1] + -1;
            UNLOCK();
            if ((int)uStack_308[1] < 1) {
              plVar5 = (long *)*uStack_308;
              if (plVar5 != (long *)0x0) {
                *uStack_308 = 0;
                (**(code **)(*plVar5 + 8))();
              }
              if ((*(int *)((long)plVar3 + 0xc) < 1) && (uStack_308 != (long *)0x0)) {
                func_0x0412a280(uStack_308,0x10);
              }
            }
            uStack_308 = (long *)0x0;
          }
        }
        plVar15 = (long *)*plVar15;
      } while (plVar15 != (long *)0x0);
    }
    if (param_1[0x56] != 0) {
      func_0x0ca403e0(param_1[0x55]);
      param_1[0x55] = 0;
      if (param_1[0x54] != 0) {
        memset(param_1[0x53],0,param_1[0x54] << 3);
      }
      param_1[0x56] = 0;
    }
LAB_0ca0b223:
    func_0x0ca06fb0(&piStack_288);
    if (0 < iStack_a8) {
      piStack_288 = (int *)CONCAT26(piStack_288._6_2_,0x6d65744908);
      (**(code **)(*(long *)(lStack_148 + 0x40) + 0x10))
                (lStack_148 + 0x40,&piStack_288,&ppplStack_138);
      if (((ulong)piStack_288 & 1) != 0) {
        func_0x0412a280(uStack_278,(ulong)piStack_288 & 0xfffffffffffffffe);
      }
    }
    piVar4 = (int *)param_1[0x4d];
    lVar19 = param_1[0x4e];
    piStack_288 = piVar4;
    if (lVar19 == 0) {
      pppppplStack_280 = (long ******)0x0;
    }
    else {
      LOCK();
      *(long *)(lVar19 + 0x10) = *(long *)(lVar19 + 0x10) + 1;
      UNLOCK();
      LOCK();
      *(long *)(lVar19 + 0x10) = *(long *)(lVar19 + 0x10) + 1;
      UNLOCK();
      pppppplStack_280 = (long ******)lVar19;
      plVar15 = (long *)func_0x0412c300(lVar19);
      if (plVar15 != (long *)0x0) {
        if (piVar4 != (int *)0x0) {
          LOCK();
          *piVar4 = *piVar4 + 1;
          UNLOCK();
        }
        LOCK();
        plVar3 = plVar15 + 1;
        lVar39 = *plVar3;
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (lVar39 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
          func_0x0412c2d0(plVar15);
        }
      }
      func_0x0412c2d0(lVar19);
    }
    uStack_308 = param_1;
    func_0x0cc3eef0(0xf6ff9e0,&UNK_0ca33dd0,&uStack_308);
    lVar19 = param_1[1];
    ppppplVar17 = (long *****)*param_1;
    lVar39 = param_1[1];
    uVar47 = *(undefined4 *)((long)param_1 + 0xc);
    uVar45 = (int)*param_1;
    uVar46 = *(undefined4 *)((long)param_1 + 4);
    uVar48 = (int)lVar39;
    if (lVar19 != 0) {
      LOCK();
      *(long *)(lVar19 + 0x10) = *(long *)(lVar19 + 0x10) + 1;
      UNLOCK();
      LOCK();
      *(long *)(lVar19 + 0x10) = *(long *)(lVar19 + 0x10) + 1;
      UNLOCK();
      uStack_318 = ppppplVar17;
      uStack_310 = (int)lVar39;
      uStack_30c = uVar47;
      func_0x0412c2d0();
      uVar45 = (undefined4)uStack_318;
      uVar46 = uStack_318._4_4_;
      uVar48 = uStack_310;
      uVar47 = uStack_30c;
    }
    uStack_308 = (long *)CONCAT44(uVar46,uVar45);
    auStack_300 = (undefined1  [4])uVar48;
    uStack_2fc = uVar47;
    func_0x0c3e0090(&uStack_308);
    if (CONCAT44(uStack_2fc,auStack_300) != 0) {
      func_0x0412c2d0();
    }
    ppppplVar17 = (long *****)param_1[7];
    ppppplVar33 = (long *****)param_1[8];
    if (ppppplVar17 != ppppplVar33) {
      uStack_328 = (long *****)(param_1 + 0x59);
      uStack_318 = ppppplVar33;
      do {
        if ((*ppppplVar17 != (long ****)0x0) &&
           (ppppplVar29 = (long *****)**ppppplVar17, ppppplVar29 != (long *****)0x0)) {
          if (((*(byte *)(ppppplVar29 + 0x26) == 0) && ((char)param_1[0x5c] == '\0')) &&
             ((((*(byte *)((long)ppppplVar29 + 0x11e) & 1) == 0 ||
               (*(char *)((long)param_1 + 0x2cf) != '\0')) ||
              (cVar13 = func_0x04fa7a10(uStack_328,ppppplVar29 + 0x23), cVar13 == '\0')))) {
            pppplVar30 = ppppplVar29[0x37];
            for (pppplVar31 = ppppplVar29[0x36]; pppplVar31 != pppplVar30;
                pppplVar31 = pppplVar31 + 5) {
              uStack_358 = (long *****)pppplVar31;
              lVar19 = func_0x0ca4fab0(param_1 + 0x3b,pppplVar31,&UNK_01563a4f,&uStack_358,
                                       &pppppplStack_2b0);
              uStack_358 = ppppplVar29;
              func_0x0ca503a0(lVar19 + 0x38,&uStack_358,&uStack_358);
            }
          }
          cVar13 = (*(code *)(***ppppplVar17)[10])();
          if (cVar13 != '\0') {
            ppplVar34 = **ppppplVar17;
            ppplVar25 = (long ***)ppplVar34[0x40];
            while (ppplVar25 != ppplVar34 + 0x41) {
              (*(code *)(*ppplVar25[9])[2])();
              ppplVar11 = (long ***)ppplVar25[1];
              ppplVar38 = ppplVar25;
              if ((long ***)ppplVar25[1] == (long ***)0x0) {
                do {
                  ppplVar25 = (long ***)ppplVar38[2];
                  bVar44 = ppplVar38 != (long ***)*ppplVar25;
                  ppplVar38 = ppplVar25;
                } while (bVar44);
              }
              else {
                do {
                  ppplVar25 = ppplVar11;
                  ppplVar11 = (long ***)*ppplVar25;
                } while ((long ***)*ppplVar25 != (long ***)0x0);
              }
            }
            if (ppplVar34[0x43] != (long **)0x0) {
              (*(code *)(*ppplVar34[0x43])[2])();
            }
          }
          bVar1 = *(byte *)(**ppppplVar17 + 0x39);
          ppppplVar33 = uStack_318;
          if ((bVar1 & 3) == 0) {
            *(byte *)(**ppppplVar17 + 0x39) = bVar1 | 2;
          }
        }
        ppppplVar17 = ppppplVar17 + 1;
      } while (ppppplVar17 != ppppplVar33);
    }
    if (pppppplStack_280 != (long ******)0x0) {
      plVar15 = (long *)func_0x0412c300();
      if (plVar15 != (long *)0x0) {
        if (piStack_288 != (int *)0x0) {
          LOCK();
          *piStack_288 = *piStack_288 + -1;
          UNLOCK();
        }
        LOCK();
        plVar3 = plVar15 + 1;
        lVar19 = *plVar3;
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (lVar19 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
          func_0x0412c2d0(plVar15);
        }
      }
      if (pppppplStack_280 != (long ******)0x0) {
        func_0x0412c2d0();
      }
    }
    *(undefined1 *)((long)param_1 + 0x229) = 2;
    func_0x0c3f8630();
    func_0x0c51f030();
    *(undefined1 *)((long)param_1 + 0x229) = 3;
    func_0x0489d780(param_1[0x4c]);
    func_0x05f43b50(&ppplStack_138);
    ppppplVar33 = ppppplStack_1f8;
    ppppplVar17 = ppppplStack_1f0;
    if (ppppplStack_1f8 != (long *****)0x0) {
      while (ppppplVar33 != ppppplVar17) {
        func_0x0ca06de0(ppppplVar17 + -0x32);
        ppppplVar17 = ppppplVar17 + -0x32;
      }
      ppppplStack_1f0 = ppppplVar33;
      func_0x0412a280(ppppplStack_1f8,(long)ppppplStack_1e8 - (long)ppppplStack_1f8);
    }
    if (lStack_1b8 != 0) {
      plVar15 = (long *)func_0x0412c300();
      if (plVar15 != (long *)0x0) {
        if (piStack_1c0 != (int *)0x0) {
          LOCK();
          *piStack_1c0 = *piStack_1c0 + -1;
          UNLOCK();
        }
        LOCK();
        plVar3 = plVar15 + 1;
        lVar19 = *plVar3;
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (lVar19 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
          func_0x0412c2d0(plVar15);
        }
      }
      if (lStack_1b8 != 0) {
        func_0x0412c2d0();
      }
    }
    return;
  }
LAB_0ca09a3a:
  piStack_288 = (int *)0x100000001;
  uStack_278 = CONCAT44(uVar45,uVar47);
  uStack_268 = (int **)CONCAT44(uVar45,uVar47);
  uStack_260 = 0;
  uStack_258 = 0x3f800000;
  uStack_248 = CONCAT44(uVar45,uVar47);
  uStack_238 = CONCAT44(uVar45,uVar47);
  uStack_230 = 0x3f800000;
  uStack_220 = (long *****)CONCAT44(uVar45,uVar47);
  uStack_210 = CONCAT44(uVar45,uVar47);
  fStack_208 = 1.0;
  pppppplStack_270 = pppppplStack_280;
  pppppplStack_250 = pppppplStack_280;
  pppppplStack_240 = pppppplStack_280;
  pppppplStack_228 = pppppplStack_280;
  pppppplStack_218 = pppppplStack_280;
  if ((ppppplStack_2b8 != (long *****)0x0) && (ppppplVar41 != ppppplVar29)) {
    do {
      func_0x0ca01e00(&uStack_308,param_1,ppppplVar41,&piStack_288);
      uStack_348 = (long *****)auStack_2f0;
      ppppplStack_340 = ppppplStack_2e8;
      uStack_358 = (long *****)CONCAT44(uStack_2fc,auStack_300);
      _auStack_350 = (long *****)CONCAT44(uStack_2f4,uStack_2f8);
      if (uStack_308 != (long *)0x0) {
        LOCK();
        *(int *)((long)uStack_308 + 0xc) = *(int *)((long)uStack_308 + 0xc) + -1;
        UNLOCK();
        if (((*(int *)((long)uStack_308 + 0xc) < 1) && (*uStack_308 == 0)) &&
           (uStack_308 != (long *)0x0)) {
          func_0x0412a280(uStack_308,0x10);
        }
      }
      func_0x0d6b1c60(&ppplStack_138,&uStack_358);
      if (plStack_90 != (long *)0x0) {
        plVar15 = plStack_90;
        if ((*(byte *)(ppppplVar41 + 0x2e) & 1) == 0) {
          pppplVar30 = (long ****)(ulong)(*(byte *)(ppppplVar41 + 0x2e) >> 1);
          pppplVar31 = (long ****)((long)ppppplVar41 + 0x171);
        }
        else {
          pppplVar30 = ppppplVar41[0x2f];
          pppplVar31 = ppppplVar41[0x30];
        }
        do {
          bVar1 = *(byte *)(plVar15 + 2);
          if ((bVar1 & 1) == 0) {
            pppplVar23 = (long ****)(ulong)(bVar1 >> 1);
          }
          else {
            pppplVar23 = (long ****)plVar15[3];
          }
          if (pppplVar23 == pppplVar30) {
            if ((bVar1 & 1) == 0) {
              lVar19 = (long)plVar15 + 0x11;
            }
            else {
              lVar19 = plVar15[4];
            }
            iVar14 = bcmp(lVar19,pppplVar31,pppplVar30);
            if (iVar14 == 0) goto LAB_0ca09ae7;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      func_0x04907e30(&uStack_a0,ppppplVar41 + 0x2e);
LAB_0ca09ae7:
      ppppplVar41 = ppppplVar41 + 0x32;
    } while (ppppplVar41 != uStack_328);
    if (pppppplStack_240 != (long ******)0x0) {
      pppppplVar16 = pppppplStack_240;
      do {
        if (((ulong)pppppplVar16[2] & 1) == 0) {
          ppppplVar17 = (long *****)((long)pppppplVar16 + 0x11);
        }
        else {
          ppppplVar17 = pppppplVar16[4];
        }
        func_0x0ca0ba50(ppppplVar17);
        uStack_308 = (long *)0x0;
        if (((ulong)pppppplVar16[2] & 1) == 0) {
          auStack_2f0 = (undefined1  [8])pppppplVar16[4];
          auStack_300 = (undefined1  [4])*(uint *)(pppppplVar16 + 2);
          uStack_2fc = *(undefined4 *)((long)pppppplVar16 + 0x14);
          uStack_2f8 = *(undefined4 *)(pppppplVar16 + 3);
          uStack_2f4 = *(undefined4 *)((long)pppppplVar16 + 0x1c);
        }
        else {
          func_0x0412e5e0(auStack_300,pppppplVar16[4],pppppplVar16[3]);
        }
        ppppplStack_2e8 = (long *****)0x0;
        if (((uint)auStack_300 & 1) == 0) {
          if (auStack_300[0] >> 1 != 0) goto LAB_0ca0adfd;
LAB_0ca0aef0:
          uStack_308 = (long *)0x0;
        }
        else {
          if (CONCAT44(uStack_2f4,uStack_2f8) == 0) goto LAB_0ca0aef0;
LAB_0ca0adfd:
          auVar37 = (undefined1  [8])(auStack_300 + 1);
          if (((uint)auStack_300 & 1) != 0) {
            auVar37 = auStack_2f0;
          }
          if ((auVar37 == (undefined1  [8])0x0) || (*(byte *)auVar37 == 0)) goto LAB_0ca0aef0;
          uVar40 = func_0x0eee2e90(auVar37);
          uStack_308 = (long *)0xcbf29ce484222325;
          if (uVar40 != 0) {
            if (7 < uVar40) {
              uVar27 = uVar40 & 0xfffffffffffffff8;
              do {
                uStack_308 = (long *)(((((((((long)uStack_308 * 0x100000001b3 ^
                                            (ulong)*(byte *)auVar37) * 0x100000001b3 ^
                                           (ulong)*(byte *)((long)auVar37 + 1)) * 0x100000001b3 ^
                                          (ulong)*(byte *)((long)auVar37 + 2)) * 0x100000001b3 ^
                                         (ulong)*(byte *)((long)auVar37 + 3)) * 0x100000001b3 ^
                                        (ulong)*(byte *)((long)auVar37 + 4)) * 0x100000001b3 ^
                                       (ulong)*(byte *)((long)auVar37 + 5)) * 0x100000001b3 ^
                                      (ulong)*(byte *)((long)auVar37 + 6)) * 0x100000001b3 ^
                                     (ulong)*(byte *)((long)auVar37 + 7));
                auVar37 = (undefined1  [8])((long)auVar37 + 8);
                uVar27 = uVar27 - 8;
              } while (uVar27 != 0);
            }
            if ((uVar40 & 7) != 0) {
              uVar27 = 0;
              do {
                uStack_308 = (long *)((long)uStack_308 * 0x100000001b3 ^
                                     (ulong)*(byte *)((long)auVar37 + uVar27));
                uVar27 = uVar27 + 1;
              } while (((uint)uVar40 & 7) != uVar27);
            }
          }
        }
        func_0x0c9ff470(param_1,&uStack_308);
        if (((uint)auStack_300 & 1) != 0) {
          func_0x0412a280(auStack_2f0,CONCAT44(uStack_2fc,auStack_300) & 0xfffffffffffffffe);
        }
        pppppplVar16 = (long ******)*pppppplVar16;
      } while (pppppplVar16 != (long ******)0x0);
    }
  }
  ppppplVar17 = ppppplStack_2b8;
  pppppplVar16 = pppppplStack_240;
  if (uStack_238 == 0) goto LAB_0ca0af8b;
joined_r0x0ca0af4d:
  if (pppppplVar16 == (long ******)0x0) {
    pppppplStack_240 = (long ******)0x0;
    if (uStack_248 != 0) {
      memset(pppppplStack_250,0,uStack_248 << 3);
    }
    uStack_238 = 0;
LAB_0ca0af8b:
    lVar19 = param_1[2];
    lVar39 = param_1[1];
    ppppplVar33 = (long *****)*param_1;
    lVar10 = param_1[1];
    uVar47 = *(undefined4 *)((long)param_1 + 0xc);
    uVar45 = (int)*param_1;
    uVar46 = *(undefined4 *)((long)param_1 + 4);
    uVar48 = (int)lVar10;
    if (lVar39 != 0) {
      LOCK();
      *(long *)(lVar39 + 0x10) = *(long *)(lVar39 + 0x10) + 1;
      UNLOCK();
      LOCK();
      *(long *)(lVar39 + 0x10) = *(long *)(lVar39 + 0x10) + 1;
      UNLOCK();
      uStack_328 = ppppplVar33;
      uStack_320 = (int)lVar10;
      uStack_31c = uVar47;
      func_0x0412c2d0();
      uVar45 = (undefined4)uStack_328;
      uVar46 = uStack_328._4_4_;
      uVar48 = uStack_320;
      uVar47 = uStack_31c;
    }
    uStack_168 = uVar45;
    uStack_164 = uVar46;
    uStack_160 = uVar48;
    uStack_15c = uVar47;
    func_0x0c38df40(lVar19,&uStack_168,param_3,uStack_318);
    if (CONCAT44(uStack_15c,uStack_160) != 0) {
      func_0x0412c2d0();
    }
    plVar15 = (long *)param_1[0x4a];
    if (plVar15 == (long *)0x0) goto LAB_0ca0b0a9;
    pppppplVar20 = (long ******)*param_1;
    pppppplVar16 = (long ******)param_1[1];
    if (pppppplVar16 == (long ******)0x0) {
      pppppplStack_180 = (long ******)0x0;
LAB_0ca0b089:
      pppppplStack_188 = pppppplVar20;
      (**(code **)(*plVar15 + 0x30))(plVar15,&pppppplStack_188);
      if (pppppplStack_180 != (long ******)0x0) {
        func_0x0412c2d0();
      }
LAB_0ca0b0a9:
      ppppplVar33 = ppppplStack_1f0;
      if (ppppplVar17 != (long *****)0x0) {
        piStack_288 = (int *)((ulong)piStack_288 & 0xffffffff00000000);
        for (ppppplVar17 = ppppplStack_1f8; ppppplVar17 != ppppplVar33;
            ppppplVar17 = ppppplVar17 + 0x32) {
          func_0x0ca01e00(&uStack_308,param_1,ppppplVar17,&piStack_288);
          uStack_348 = (long *****)auStack_2f0;
          ppppplStack_340 = ppppplStack_2e8;
          uStack_358 = (long *****)CONCAT44(uStack_2fc,auStack_300);
          _auStack_350 = (long *****)CONCAT44(uStack_2f4,uStack_2f8);
          if (uStack_308 != (long *)0x0) {
            LOCK();
            *(int *)((long)uStack_308 + 0xc) = *(int *)((long)uStack_308 + 0xc) + -1;
            UNLOCK();
            if (((*(int *)((long)uStack_308 + 0xc) < 1) && (*uStack_308 == 0)) &&
               (uStack_308 != (long *)0x0)) {
              func_0x0412a280(uStack_308,0x10);
            }
          }
          func_0x0d6b1c60(&ppplStack_138,&uStack_358);
          if (plStack_90 != (long *)0x0) {
            plVar15 = plStack_90;
            if ((*(byte *)(ppppplVar17 + 0x2e) & 1) == 0) {
              pppplVar30 = (long ****)(ulong)(*(byte *)(ppppplVar17 + 0x2e) >> 1);
              pppplVar31 = (long ****)((long)ppppplVar17 + 0x171);
            }
            else {
              pppplVar30 = ppppplVar17[0x2f];
              pppplVar31 = ppppplVar17[0x30];
            }
            do {
              bVar1 = *(byte *)(plVar15 + 2);
              if ((bVar1 & 1) == 0) {
                pppplVar23 = (long ****)(ulong)(bVar1 >> 1);
              }
              else {
                pppplVar23 = (long ****)plVar15[3];
              }
              if (pppplVar23 == pppplVar30) {
                if ((bVar1 & 1) == 0) {
                  lVar19 = (long)plVar15 + 0x11;
                }
                else {
                  lVar19 = plVar15[4];
                }
                iVar14 = bcmp(lVar19,pppplVar31,pppplVar30);
                if (iVar14 == 0) goto LAB_0ca0b0f7;
              }
              plVar15 = (long *)*plVar15;
            } while (plVar15 != (long *)0x0);
          }
          func_0x04907e30(&uStack_a0,ppppplVar17 + 0x2e);
LAB_0ca0b0f7:
        }
      }
      goto LAB_0ca0b223;
    }
    LOCK();
    pppppplVar16[2] = (long *****)((long)pppppplVar16[2] + 1);
    UNLOCK();
    LOCK();
    pppppplVar16[2] = (long *****)((long)pppppplVar16[2] + 1);
    UNLOCK();
    func_0x0412c2d0(pppppplVar16);
    plVar15 = (long *)param_1[0x4a];
    pppppplStack_180 = pppppplVar16;
    if (plVar15 != (long *)0x0) goto LAB_0ca0b089;
    pppppplStack_188 = pppppplVar20;
    func_0x04891200();
  }
  else {
    pppppplVar20 = (long ******)*pppppplVar16;
    if (((ulong)pppppplVar16[2] & 1) != 0) {
      func_0x0412a280(pppppplVar16[4],(ulong)pppppplVar16[2] & 0xfffffffffffffffe);
    }
  }
  func_0x0412a280(pppppplVar16);
  pppppplVar16 = pppppplVar20;
  goto joined_r0x0ca0af4d;
LAB_0ca0aa00:
  pppplVar31[6] = (long ***)&uStack_358;
  pppplStack_338 = pppplVar31 + 2;
  ppppplVar29 = uStack_328;
  ppppplVar17 = ppppplStack_1e0;
joined_r0x0ca0aa24:
  uStack_328 = ppppplVar29;
  if (((ulong)ppppplVar33 & 1) != 0) {
    func_0x0412a280(ppppplStack_340,(ulong)_auStack_350 & 0xfffffffffffffffe);
  }
  if ((uStack_1d8 & 1) != 0) {
    func_0x0412a280(ppppplStack_1c8,CONCAT44(uStack_1d4,uStack_1d8) & 0xfffffffffffffffe);
  }
  if ((uStack_1b0 & 1) != 0) {
    func_0x0412a280(pbStack_1a0,CONCAT44(uStack_1ac,uStack_1b0) & 0xfffffffffffffffe);
  }
LAB_0ca0a931:
  if ((bStack_2d8 & 1) != 0) {
    func_0x0412a280(ppppplStack_2c8,CONCAT71(auStack_2d7._0_7_,bStack_2d8) & 0xfffffffffffffffe);
  }
  if (((ulong)auStack_2f0 & 1) != 0) {
    func_0x0412a280(ppplStack_2e0,(ulong)auStack_2f0 & 0xfffffffffffffffe);
  }
  if (((ulong)uStack_308 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_2f4,uStack_2f8),(ulong)uStack_308 & 0xfffffffffffffffe);
  }
LAB_0ca09cd0:
  ppppplVar41 = ppppplVar41 + 0x32;
  if (ppppplVar41 == ppppplVar29) goto LAB_0ca0aadc;
  goto LAB_0ca09ce0;
}


