/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xbb3f310 (ELF vaddr 0xba3f310)
 * Label: caller-of-callee
 * Body:  [[0bb3f310, 0bb40334] [0bb40340, 0bb408f3] [0bb40900, 0bb40a14] [0bb40a20, 0bb40b30] [0bb40b40, 0bb40c16] [0bb40c20, 0bb40cad] [0bb40cb0, 0bb40e06] [0bb40e10, 0bb41c39] [0bb41c40, 0bb422c3] [0bb422d0, 0bb425c5] [0bb425c8, 0bb425f1] [0bb429c2, 0bb42aa1]]
 * Ghidra: FUN_0bb3f310
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0bb3f310(undefined8 param_1,undefined8 param_2,ulong *******param_3,long *param_4,
                 uint *param_5)

{
  undefined *puVar1;
  byte bVar2;
  uint uVar3;
  ulong *****pppppuVar4;
  ulong *puVar5;
  ulong **ppuVar6;
  undefined4 *puVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  long *plVar14;
  float *pfVar15;
  ulong *******pppppppuVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  ulong *******pppppppuVar20;
  undefined1 auVar21 [8];
  undefined8 *puVar22;
  ulong ****ppppuVar23;
  ulong ***pppuVar24;
  char extraout_DL;
  undefined1 auVar25 [8];
  ulong ****ppppuVar26;
  ulong ***pppuVar27;
  int iVar28;
  undefined *puVar29;
  uint uVar30;
  ulong ******ppppppuVar31;
  ulong ******ppppppuVar32;
  ulong uVar33;
  ulong *******pppppppuVar34;
  ulong uVar35;
  ulong ******ppppppuVar36;
  undefined *puVar37;
  ulong uVar38;
  int iVar39;
  undefined4 uVar40;
  float extraout_XMM0_Da;
  ulong *******pppppppuVar41;
  undefined8 uVar42;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar50;
  float fVar51;
  undefined1 auVar45 [16];
  undefined8 extraout_XMM0_Qb_03;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined8 extraout_XMM0_Qb_04;
  undefined8 extraout_XMM0_Qb_05;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar52;
  float fVar53;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  float fVar54;
  float fVar56;
  undefined1 auVar55 [16];
  float fVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  ulong *******pppppppuStack_328;
  ulong *******pppppppuStack_320;
  ulong *******pppppppuStack_318;
  ulong *******pppppppuStack_308;
  ulong *******pppppppuStack_300;
  ulong *******pppppppuStack_2f8;
  char cStack_2f0;
  char cStack_2ec;
  byte bStack_2d9;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  ulong uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  ulong *******pppppppuStack_2a8;
  undefined4 uStack_2a0;
  byte bStack_298;
  undefined7 uStack_297;
  ulong *******pppppppuStack_288;
  undefined4 uStack_280;
  byte bStack_278;
  undefined7 uStack_277;
  undefined8 uStack_268;
  undefined4 uStack_260;
  undefined1 auStack_258 [8];
  undefined8 uStack_250;
  int iStack_23c;
  uint *puStack_238;
  ulong *******pppppppuStack_230;
  ulong *****pppppuStack_228;
  ulong *******pppppppuStack_220;
  ulong *******pppppppuStack_218;
  int iStack_210;
  int iStack_20c;
  ulong *******pppppppuStack_208;
  undefined8 uStack_200;
  undefined8 *puStack_1f8;
  ulong uStack_1f0;
  undefined8 uStack_1e8;
  ulong *******pppppppuStack_1e0;
  ulong *******pppppppuStack_1d8;
  undefined1 auStack_1c8 [8];
  undefined8 uStack_1c0;
  ulong ******ppppppuStack_1b8;
  ulong ******ppppppuStack_1b0;
  ulong ******ppppppuStack_1a8;
  ulong *******pppppppuStack_198;
  ulong *******pppppppuStack_190;
  ulong *******pppppppuStack_188;
  undefined4 uStack_17c;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 auStack_168 [8];
  undefined8 uStack_160;
  undefined8 uStack_158;
  float afStack_150 [2];
  undefined8 uStack_148;
  undefined8 uStack_140;
  long *plStack_130;
  ulong *******pppppppuStack_128;
  ulong *******pppppppuStack_120;
  ulong *******pppppppuStack_118;
  long *plStack_110;
  undefined1 auStack_108 [16];
  ulong ******ppppppuStack_f8;
  ulong ******ppppppuStack_f0;
  ulong ******ppppppuStack_e8;
  undefined8 uStack_e0;
  ulong *******pppppppuStack_d8;
  ulong *******pppppppuStack_d0;
  ulong ******ppppppuStack_c8;
  ulong ******ppppppuStack_c0;
  ulong ******ppppppuStack_b8;
  ulong *******pppppppuStack_a8;
  ulong *******pppppppuStack_a0;
  ulong ******ppppppuStack_98;
  int iStack_8c;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 auStack_78 [16];
  ulong *******pppppppuStack_60;
  ulong *******pppppppuStack_58;
  ulong *******pppppppuStack_50;
  ulong *******pppppppuStack_48;
  undefined8 *puStack_40;
  undefined1 uStack_38;
  
  fVar57 = (float)((ulong)param_2 >> 0x20);
  fVar50 = (float)param_2;
  cVar11 = (**(code **)(*param_4 + 0x88))(param_4,7);
  if (cVar11 == '\0') {
    uStack_2d8 = (ulong *******)0x0;
    uStack_2d0._0_4_ = 0;
    uStack_2d0._4_4_ = 0;
    uStack_2c8._0_4_ = 0;
    uStack_2c8._4_4_ = 0;
    if (*param_5 == 0) {
      return;
    }
    func_0x09e22e10(param_5,&UNK_0131a1c8,0x16,&uStack_2d8,1);
    return;
  }
  func_0x09db3fc0(&uStack_2d8,param_3 + 10,param_4);
  pppppppuStack_190 = (ulong *******)CONCAT44(uStack_2d0._4_4_,(int)uStack_2d0);
  pppppppuStack_198 = uStack_2d8;
  if (CONCAT44(uStack_2d0._4_4_,(int)uStack_2d0) == 0) {
LAB_0bb3f391:
    if (*uStack_2d8 == uStack_2d8[1]) {
LAB_0bb3f72a:
      uStack_2d8 = (ulong *******)0x0;
      uStack_2d0._0_4_ = 0;
      uStack_2d0._4_4_ = 0;
      uStack_2d0 = (ulong *******)0x0;
      uStack_2c8._0_4_ = 0;
      uStack_2c8._4_4_ = 0;
      uStack_2c8 = (ulong *******)0x0;
      if (*param_5 != 0) {
        func_0x09e22e10(param_5,&UNK_011f7c99,0x1e,&uStack_2d8,1);
      }
      goto LAB_0bb4240f;
    }
  }
  else {
    LOCK();
    plVar14 = (long *)(CONCAT44(uStack_2d0._4_4_,(int)uStack_2d0) + 8);
    *plVar14 = *plVar14 + 1;
    UNLOCK();
    plVar14 = (long *)CONCAT44(uStack_2d0._4_4_,(int)uStack_2d0);
    if (plVar14 == (long *)0x0) goto LAB_0bb3f391;
    LOCK();
    plVar18 = plVar14 + 1;
    lVar17 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar17 != 0) goto LAB_0bb3f391;
    (**(code **)(*plVar14 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
    if (*pppppppuStack_198 == pppppppuStack_198[1]) goto LAB_0bb3f72a;
  }
  iStack_23c = 3;
  if ((0xe < *(int *)(param_3 + 1)) &&
     (plVar14 = (long *)(**(code **)(*param_4 + 0x40))(param_4), plVar14 != (long *)0x0)) {
    iStack_23c = (**(code **)(*plVar14 + 0x18))(plVar14);
  }
  plStack_130 = param_4;
  if (*(char *)((long)param_3 + 0x2dc) == '\x01') {
    uStack_2d8 = (ulong *******)0x0;
    uStack_2d0._0_4_ = 0;
    pppppppuVar41 =
         (ulong *******)
         func_0x09e12210(param_3 + 0x3c,*(undefined4 *)(param_3 + 1),param_4,&uStack_2d8);
    auStack_1c8._4_4_ = fVar57;
    auStack_1c8._0_4_ = fVar50;
    uStack_1c0._0_4_ = in_XMM1_Dc;
    uStack_1c0._4_4_ = in_XMM1_Dd;
    uVar40 = (undefined4)((ulong)pppppppuVar41 >> 0x20);
    auVar58._4_4_ = (float)uVar40;
    auVar58._0_4_ = (float)uVar40;
    auVar58._8_4_ = (float)uVar40;
    auVar58._12_4_ = (float)uVar40;
    fVar52 = fVar50;
    uStack_178 = pppppppuVar41;
    uStack_170 = extraout_XMM0_Qb;
    if (*(int *)(param_3 + 1) < 3) {
      _auStack_168 = auVar58;
      auStack_258 = (undefined1  [8])func_0x0eee4390();
      uStack_250 = extraout_XMM0_Qb_00;
      auStack_168 = (undefined1  [8])func_0x0eee4390();
      uStack_160 = extraout_XMM0_Qb_01;
      uVar42 = func_0x0eee4390();
      auVar43._0_4_ = (float)(int)(float)auStack_258._0_4_;
      auVar43._4_4_ = (float)(int)(float)auStack_258._4_4_;
      auVar43._8_4_ = (float)(int)(float)uStack_250;
      auVar43._12_4_ = (float)(int)uStack_250._4_4_;
      auVar58._0_4_ = (float)(int)(float)auStack_168._0_4_;
      auVar58._4_4_ = (float)(int)(float)auStack_168._4_4_;
      auVar58._8_4_ = (float)(int)(float)uStack_160;
      auVar58._12_4_ = (float)(int)uStack_160._4_4_;
      fVar57 = (float)(int)(float)((ulong)uVar42 >> 0x20);
      in_XMM1_Dc = (float)(int)(float)extraout_XMM0_Qb_02;
      in_XMM1_Dd = (float)(int)(float)((ulong)extraout_XMM0_Qb_02 >> 0x20);
      auVar44._4_12_ = auVar43._4_12_;
      auVar44._0_4_ = auVar43._0_4_ + _DAT_011986e0;
      pppppppuVar41 = auVar44._0_8_;
      uStack_178 = (ulong *******)CONCAT44(auVar58._0_4_,auVar44._0_4_);
      uStack_170 = CONCAT44(auVar58._4_4_,auVar43._4_4_);
      fVar50 = _DAT_011986e0;
      fVar52 = (float)(int)(float)uVar42 + _DAT_011986e0;
    }
    uStack_2d8 = (ulong *******)CONCAT44(uStack_2d8._4_4_,(int)pppppppuVar41);
    uStack_2c8._0_4_ = auVar58._0_4_;
    auStack_1c8._4_4_ = fVar57;
    auStack_1c8._0_4_ = fVar52;
    uStack_1c0._0_4_ = in_XMM1_Dc;
    uStack_1c0._4_4_ = in_XMM1_Dd;
    uStack_2b8 = (ulong ******)CONCAT44(uStack_2b8._4_4_,fVar52);
    FUN_0470d9a0(&pppppppuStack_308,&UNK_012cc3e4,0x19,0x999,&uStack_2d8);
    pppppppuStack_218 = pppppppuStack_300;
    uStack_1f0 = (ulong)pppppppuStack_308 >> 8;
    pppppppuStack_230 = pppppppuStack_2f8;
    pppppuStack_228 = (ulong *****)0x0;
    pppppppuVar41 = pppppppuStack_308;
    auVar21 = auStack_1c8;
    uVar42 = uStack_1c0;
LAB_0bb3f8fe:
    uStack_158 = (ulong ******)0x0;
    afStack_150[0] = 0.0;
    uStack_1c0 = uVar42;
    auStack_1c8 = auVar21;
    puStack_238 = param_5;
    pppppppuStack_220 = pppppppuVar41;
    if (*(int *)(param_3 + 0x5b) == 0) {
      if (*(char *)((long)param_3 + 0x2de) == '\x01') {
        uStack_2d8 = (ulong *******)param_3[0x57];
        uStack_2d0._0_4_ = (int)param_3[0x58];
        uStack_2d0._4_4_ = (uint)((ulong)param_3[0x58] >> 0x20);
        pppppppuStack_308 = (ulong *******)0x0;
        pppppppuStack_300 = (ulong *******)((ulong)pppppppuStack_300 & 0xffffffff00000000);
        uStack_158 = (ulong ******)
                     func_0x09e12210(&uStack_2d8,*(undefined4 *)(param_3 + 1),plStack_130,
                                     &pppppppuStack_308);
        pfVar15 = afStack_150;
        goto LAB_0bb3faa6;
      }
      func_0x09db3fc0(&uStack_2d8,param_3 + 0x3e,plStack_130);
      pppppppuStack_300 = (ulong *******)CONCAT44(uStack_2d0._4_4_,(int)uStack_2d0);
      pppppppuStack_308 = uStack_2d8;
      if (CONCAT44(uStack_2d0._4_4_,(int)uStack_2d0) != 0) {
        LOCK();
        plVar14 = (long *)(CONCAT44(uStack_2d0._4_4_,(int)uStack_2d0) + 8);
        *plVar14 = *plVar14 + 1;
        UNLOCK();
        plVar14 = (long *)CONCAT44(uStack_2d0._4_4_,(int)uStack_2d0);
        if (plVar14 != (long *)0x0) {
          LOCK();
          plVar18 = plVar14 + 1;
          lVar17 = *plVar18;
          *plVar18 = *plVar18 + -1;
          UNLOCK();
          if (lVar17 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
            func_0x0412c2d0(plVar14);
          }
        }
      }
      ppppppuVar32 = *pppppppuStack_308;
      if (ppppppuVar32 == pppppppuStack_308[1]) {
        uStack_2d8 = (ulong *******)0x0;
        uStack_2d0._0_4_ = 0;
        uStack_2d0._4_4_ = 0;
        uStack_2c8._0_4_ = 0;
        uStack_2c8._4_4_ = 0;
        if (*param_5 != 0) {
          func_0x09e22e10(param_5,&UNK_011f7c99,0x1e,&uStack_2d8,1);
        }
LAB_0bb42505:
        bVar9 = false;
      }
      else {
        if (((long)pppppppuStack_308[1] - (long)ppppppuVar32 & 0x7fffffff8U) != 8) {
          uStack_2d8 = (ulong *******)0x0;
          uStack_2d0._0_4_ = 0;
          uStack_2d0._4_4_ = 0;
          uStack_2c8._0_4_ = 0;
          uStack_2c8._4_4_ = 0;
          if (*param_5 != 0) {
            func_0x09e22e10(param_5,&UNK_012faf12,0x1f,&uStack_2d8,1);
          }
          goto LAB_0bb42505;
        }
        pppppuVar4 = *ppppppuVar32;
        if (pppppuVar4 == (ulong *****)0x0) {
          uStack_2d8 = (ulong *******)0x0;
          uStack_2d0._0_4_ = 0;
          uStack_2d0._4_4_ = 0;
          uStack_2c8._0_4_ = 0;
          uStack_2c8._4_4_ = 0;
          if (*param_5 != 0) {
            func_0x09e22e10(param_5,&UNK_011ec01f,0x1a,&uStack_2d8,1);
          }
          func_0x048f03a0(&uStack_2d8);
          goto LAB_0bb42505;
        }
        afStack_150[0] = *(float *)(pppppuVar4[0x41] + 1);
        uStack_158 = (ulong ******)
                     CONCAT44(*(undefined4 *)((long)pppppuVar4[0x42] + 4),(int)*pppppuVar4[0x41]);
        bVar9 = true;
      }
      pppppppuVar16 = pppppppuStack_300;
      if (pppppppuStack_300 != (ulong *******)0x0) {
        LOCK();
        pppppppuVar34 = pppppppuStack_300 + 1;
        ppppppuVar32 = *pppppppuVar34;
        *pppppppuVar34 = (ulong ******)((long)*pppppppuVar34 + -1);
        UNLOCK();
        if (ppppppuVar32 == (ulong ******)0x0) {
          (*(code *)(*pppppppuStack_300)[2])(pppppppuStack_300);
          func_0x0412c2d0(pppppppuVar16);
        }
      }
      if (!bVar9) goto LAB_0bb423e5;
      pppppppuStack_a0 = (ulong *******)&uStack_158;
      param_5 = puStack_238;
    }
    else {
      pppppppuStack_a0 = (ulong *******)0x0;
      if ((pppppuStack_228 != (ulong *****)0x0) && (0xd < *(int *)(param_3 + 1))) {
        pfVar15 = (float *)((long)&uStack_158 + 4);
        ppppuVar26 = pppppuStack_228[0x41];
        fVar52 = ((float)((ulong)*pppppuStack_228[0x43] >> 0x20) * _DAT_01198948 + _DAT_01198938) *
                 _DAT_01198bd8;
        fVar57 = SUB84(*pppppuStack_228[0x43],0) * _DAT_01198948 * _DAT_01198bd8;
        fVar50 = *(float *)((ulong)((int)(_DAT_01198b38 + fVar57) & 0xffff) * 4 + 0xf778a04);
        afStack_150[0] =
             *(float *)(ppppuVar26 + 1) -
             fVar50 * *(float *)((ulong)((int)(fVar52 + _DAT_01198b38) & 0xffff) * 4 + 0xf778a04);
        uStack_158 = (ulong ******)
                     CONCAT44(*(float *)((ulong)((int)fVar57 & 0xffff) * 4 + 0xf778a04) +
                              *(float *)((long)ppppuVar26 + 4),
                              *(float *)ppppuVar26 -
                              *(float *)((ulong)((int)fVar52 & 0xffff) * 4 + 0xf778a04) * fVar50);
        fVar50 = *(float *)((long)pppppuStack_228[0x42] + 4);
LAB_0bb3faa6:
        *pfVar15 = fVar50;
        pppppppuStack_a0 = (ulong *******)&uStack_158;
      }
    }
    pppppppuVar41 = pppppppuStack_198;
    ppppppuStack_f8 = (ulong ******)0x0;
    ppppppuStack_f0 = (ulong ******)0x0;
    ppppppuStack_e8 = (ulong ******)0x0;
    ppppppuStack_c8 = (ulong ******)0x0;
    ppppppuStack_c0 = (ulong ******)0x0;
    ppppppuStack_b8 = (ulong ******)0x0;
    ppppppuStack_1b8 = (ulong ******)0x0;
    ppppppuStack_1b0 = (ulong ******)0x0;
    ppppppuStack_1a8 = (ulong ******)0x0;
    ppppppuVar32 = *pppppppuStack_198;
    ppppppuStack_98 = pppppppuStack_198[1];
    if (ppppppuVar32 == ppppppuStack_98) {
      plStack_110 = (long *)0x0;
      if (pppppppuStack_190 == (ulong *******)0x0) goto LAB_0bb40271;
LAB_0bb3fc62:
      pppppppuVar16 = pppppppuStack_190;
      LOCK();
      pppppppuStack_190[1] = (ulong ******)((long)pppppppuStack_190[1] + 1);
      UNLOCK();
      ppppppuVar32 = *pppppppuStack_198;
      uStack_2d0._0_4_ = (int)pppppppuStack_190;
      uStack_2d0._4_4_ = (uint)((ulong)pppppppuStack_190 >> 0x20);
      LOCK();
      pppppppuStack_190[1] = (ulong ******)((long)pppppppuStack_190[1] + 1);
      UNLOCK();
      uStack_2c8._0_4_ = SUB84(ppppppuVar32,0);
      uStack_2c8._4_4_ = (uint)((ulong)ppppppuVar32 >> 0x20);
      LOCK();
      pppppppuVar41 = pppppppuStack_190 + 1;
      ppppppuVar32 = *pppppppuVar41;
      *pppppppuVar41 = (ulong ******)((long)*pppppppuVar41 + -1);
      UNLOCK();
      uStack_2d8 = pppppppuStack_198;
      if (ppppppuVar32 == (ulong ******)0x0) {
        (*(code *)(*pppppppuStack_190)[2])(pppppppuStack_190);
        func_0x0412c2d0(pppppppuVar16);
      }
      if (pppppppuStack_190 == (ulong *******)0x0) goto LAB_0bb402a1;
LAB_0bb3fcbb:
      pppppppuVar16 = pppppppuStack_190;
      LOCK();
      pppppppuStack_190[1] = (ulong ******)((long)pppppppuStack_190[1] + 1);
      UNLOCK();
      pppppppuStack_2f8 = (ulong *******)pppppppuStack_198[1];
      pppppppuStack_308 = pppppppuStack_198;
      pppppppuStack_300 = pppppppuStack_190;
      LOCK();
      pppppppuStack_190[1] = (ulong ******)((long)pppppppuStack_190[1] + 1);
      UNLOCK();
      LOCK();
      pppppppuVar41 = pppppppuStack_190 + 1;
      ppppppuVar32 = *pppppppuVar41;
      *pppppppuVar41 = (ulong ******)((long)*pppppppuVar41 + -1);
      UNLOCK();
      if (ppppppuVar32 == (ulong ******)0x0) {
        (*(code *)(*pppppppuStack_190)[2])(pppppppuStack_190);
        func_0x0412c2d0(pppppppuVar16);
      }
LAB_0bb402b8:
      if ((ulong *******)CONCAT44(uStack_2c8._4_4_,(undefined4)uStack_2c8) != pppppppuStack_2f8 ||
          uStack_2d8 != pppppppuStack_308) {
        pppppppuVar41 = (ulong *******)CONCAT44(uStack_2c8._4_4_,(undefined4)uStack_2c8) + 1;
        uStack_88 = uStack_2d8;
        pppppppuStack_188 = pppppppuStack_308;
        pppppppuVar16 = uStack_2d8;
        pppppppuVar34 = pppppppuStack_308;
        auVar21 = (undefined1  [8])pppppppuStack_2f8;
        do {
          ppppppuVar32 = pppppppuVar41[-1];
          if (ppppppuStack_1b0 < ppppppuStack_1a8) {
            *ppppppuStack_1b0 = (ulong *****)ppppppuVar32;
            ppppppuVar36 = ppppppuStack_1b0 + 1;
            auVar25 = (undefined1  [8])pppppppuVar41;
            auVar21 = (undefined1  [8])pppppppuStack_2f8;
          }
          else {
            lVar17 = (long)ppppppuStack_1b0 - (long)ppppppuStack_1b8;
            uVar33 = (lVar17 >> 3) + 1;
            if (0x1fffffffffffffff < uVar33) goto LAB_0bb42592;
            auStack_108._0_8_ = ppppppuStack_1b8;
            uVar38 = (long)ppppppuStack_1a8 - (long)ppppppuStack_1b8;
            uVar35 = (long)uVar38 >> 2;
            if ((ulong)((long)uVar38 >> 2) <= uVar33) {
              uVar35 = uVar33;
            }
            auStack_168 = (undefined1  [8])pppppppuVar41;
            auStack_258 = auVar21;
            if (0x7ffffffffffffff7 < uVar38) {
              uVar35 = 0x1fffffffffffffff;
            }
            uStack_148 = ppppppuVar32;
            if (0x1fffffffffffffff < uVar35) goto LAB_0bb42597;
            lVar19 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar35 * 8);
            if (lVar19 == 0) {
              func_0x0eec74c0(uVar35 * 8,0);
            }
            ppppppuVar32 = (ulong ******)(lVar19 + uVar35 * 8);
            *(ulong *******)(lVar19 + lVar17) = uStack_148;
            ppppppuVar36 = (ulong ******)(lVar19 + lVar17 + 8);
            ppppppuVar31 = (ulong ******)(lVar19 + lVar17 + (lVar17 >> 3) * -8);
            uVar42 = auStack_108._0_8_;
            func_0x0eee2f00(ppppppuVar31,auStack_108._0_8_,lVar17);
            ppppppuStack_1b8 = ppppppuVar31;
            ppppppuStack_1a8 = ppppppuVar32;
            if (uVar42 != 0) {
              ppppppuStack_1b0 = ppppppuVar36;
              thunk_FUN_0ee326a0(uVar42,uVar38);
            }
            auVar25 = auStack_168;
            param_5 = puStack_238;
            pppppppuVar16 = uStack_88;
            pppppppuVar34 = pppppppuStack_188;
            auVar21 = auStack_258;
          }
          pppppppuVar41 = (ulong *******)((long)auVar25 + 8);
          uStack_2c8._0_4_ = SUB84(auVar25,0);
          uStack_2c8._4_4_ = (uint)((ulong)auVar25 >> 0x20);
          ppppppuStack_1b0 = ppppppuVar36;
        } while ((pppppppuVar16 != pppppppuVar34) || (auVar25 != auVar21));
      }
      pppppppuVar41 = pppppppuStack_300;
      if (pppppppuStack_300 != (ulong *******)0x0) {
        LOCK();
        pppppppuVar16 = pppppppuStack_300 + 1;
        ppppppuVar32 = *pppppppuVar16;
        *pppppppuVar16 = (ulong ******)((long)*pppppppuVar16 + -1);
        UNLOCK();
        if (ppppppuVar32 == (ulong ******)0x0) {
          (*(code *)(*pppppppuStack_300)[2])(pppppppuStack_300);
          func_0x0412c2d0(pppppppuVar41);
        }
      }
      pppppppuVar16 = (ulong *******)CONCAT44(uStack_2d0._4_4_,(int)uStack_2d0);
      pppppppuVar41 = pppppppuStack_220;
      uStack_2d0 = pppppppuVar16;
      if (pppppppuVar16 == (ulong *******)0x0) goto LAB_0bb40617;
LAB_0bb40601:
      LOCK();
      pppppppuVar34 = pppppppuVar16 + 1;
      ppppppuVar32 = *pppppppuVar34;
      *pppppppuVar34 = (ulong ******)((long)*pppppppuVar34 + -1);
      UNLOCK();
      if (ppppppuVar32 != (ulong ******)0x0) goto LAB_0bb40617;
      (*(code *)(*pppppppuVar16)[2])(pppppppuVar16);
      func_0x0412c2d0(pppppppuVar16);
      if (ppppppuStack_f8 != ppppppuStack_f0) goto LAB_0bb4062d;
    }
    else {
      iVar12 = *(int *)(param_3 + 1);
      bVar2 = *(byte *)((long)param_3 + 0x2df);
      uVar40 = func_0x0eee4390();
      auStack_258._0_4_ = uVar40;
      uVar42 = func_0x0eee4390();
      pppppppuVar16 = pppppppuStack_190;
      uStack_17c = (undefined4)CONCAT71((int7)((ulong)uVar42 >> 8),1);
      pppppppuStack_60 = pppppppuStack_190;
      bStack_2d9 = bVar2;
      iStack_8c = iVar12;
      if (pppppppuStack_190 == (ulong *******)0x0) {
        pppppppuStack_a8 = (ulong *******)0x0;
        pppppppuVar16 = pppppppuVar41;
        fVar50 = extraout_XMM0_Da;
      }
      else {
        LOCK();
        pppppppuStack_190[1] = (ulong ******)((long)pppppppuStack_190[1] + 1);
        UNLOCK();
        ppppppuVar32 = *pppppppuVar41;
        LOCK();
        pppppppuStack_190[1] = (ulong ******)((long)pppppppuStack_190[1] + 1);
        UNLOCK();
        LOCK();
        pppppppuVar34 = pppppppuStack_190 + 1;
        ppppppuVar36 = *pppppppuVar34;
        *pppppppuVar34 = (ulong ******)((long)*pppppppuVar34 + -1);
        UNLOCK();
        fVar50 = extraout_XMM0_Da;
        if (ppppppuVar36 == (ulong ******)0x0) {
          auStack_168._0_4_ = extraout_XMM0_Da;
          (*(code *)(*pppppppuStack_190)[2])(pppppppuStack_190);
          func_0x0412c2d0(pppppppuVar16);
          fVar50 = (float)auStack_168._0_4_;
        }
        pppppppuVar34 = pppppppuStack_190;
        pppppppuVar16 = pppppppuStack_198;
        if (pppppppuStack_190 == (ulong *******)0x0) {
          ppppppuStack_98 = pppppppuStack_198[1];
          pppppppuStack_a8 = (ulong *******)0x0;
        }
        else {
          LOCK();
          pppppppuStack_190[1] = (ulong ******)((long)pppppppuStack_190[1] + 1);
          UNLOCK();
          ppppppuStack_98 = pppppppuStack_198[1];
          LOCK();
          pppppppuStack_190[1] = (ulong ******)((long)pppppppuStack_190[1] + 1);
          UNLOCK();
          LOCK();
          pppppppuVar20 = pppppppuStack_190 + 1;
          ppppppuVar36 = *pppppppuVar20;
          *pppppppuVar20 = (ulong ******)((long)*pppppppuVar20 + -1);
          UNLOCK();
          pppppppuStack_a8 = pppppppuStack_190;
          if (ppppppuVar36 == (ulong ******)0x0) {
            auStack_168._0_4_ = fVar50;
            (*(code *)(*pppppppuStack_190)[2])(pppppppuStack_190);
            func_0x0412c2d0(pppppppuVar34);
            fVar50 = (float)auStack_168._0_4_;
          }
          uStack_17c = 0;
        }
      }
      iVar12 = (int)(float)auStack_258._0_4_;
      iVar13 = (int)fVar50;
      auStack_78._0_8_ = pppppppuVar41;
      iVar39 = iVar13;
      iVar28 = iVar12;
      iStack_210 = iVar13;
      iStack_20c = iVar12;
      pppppppuStack_188 = param_3;
      if ((pppppppuVar41 != pppppppuVar16) || (ppppppuVar32 != ppppppuStack_98)) {
        ppppppuVar32 = ppppppuVar32 + 1;
        pppppppuStack_50 = pppppppuVar16;
        do {
          ppppuVar26 = ppppppuVar32[-1][0x42];
          fVar52 = SUB84(*ppppuVar26,0);
          fVar53 = (float)((ulong)*ppppuVar26 >> 0x20);
          fVar54 = (float)*(undefined8 *)((long)ppppuVar26 + 0xc);
          fVar56 = (float)((ulong)*(undefined8 *)((long)ppppuVar26 + 0xc) >> 0x20);
          fVar50 = (fVar56 - fVar53) * _UNK_014e9bd4;
          fVar57 = (float)uStack_178 - (fVar52 + (fVar54 - fVar52) * _DAT_014e9bd0);
          fVar51 = (fVar50 + uStack_178._4_4_) - (fVar53 + fVar50);
          fVar54 = fVar54 + fVar57;
          fVar56 = fVar56 + fVar51;
          fVar57 = fVar57 + fVar52;
          fVar51 = fVar51 + fVar53;
          fVar50 = fVar57 + _DAT_014e2eb0;
          fVar52 = fVar51 + _UNK_014e2eb4;
          fVar53 = fVar54 + _DAT_014e8860;
          auStack_258._0_4_ = iVar13;
          if (fVar53 < fVar50) {
            fVar53 = (fVar57 + fVar54) * _DAT_011986e0;
            fVar50 = fVar53;
          }
          auStack_168 = (undefined1  [8])ppppppuVar32;
          if (fVar56 + _UNK_014e8864 < fVar52) {
            fVar52 = (fVar51 + fVar56) * _DAT_011986e0;
          }
          fVar57 = *(float *)(ppppuVar26 + 1);
          fVar56 = (float)auStack_1c8._0_4_ -
                   ((*(float *)((long)ppppuVar26 + 0x14) - fVar57) * _DAT_011986e0 + fVar57);
          fVar57 = fVar57 + fVar56;
          fVar56 = fVar56 + *(float *)((long)ppppuVar26 + 0x14);
          fVar54 = fVar56 + _DAT_011984dc;
          fVar51 = fVar57 + _DAT_0119884c;
          fVar56 = (fVar56 + fVar57) * _DAT_011986e0;
          fVar57 = fVar56;
          if (fVar51 <= fVar54) {
            fVar57 = fVar54;
          }
          auVar45._0_4_ = (uint)fVar56 & -(uint)(fVar54 < fVar51);
          auVar45._4_4_ = auStack_1c8._4_4_;
          auVar45._8_4_ = (undefined4)uStack_1c0;
          auVar45._12_4_ = uStack_1c0._4_4_;
          auStack_108 = ZEXT416(~-(uint)(fVar54 < fVar51) & (uint)fVar51) | auVar45;
          fVar51 = auStack_108._0_4_;
          uStack_80 = auStack_108._8_4_;
          uStack_7c = auStack_108._12_4_;
          fVar56 = fVar51;
          if (fVar57 <= fVar51) {
            fVar56 = fVar57;
          }
          uStack_88 = (ulong *******)CONCAT44(auStack_108._4_4_,fVar56);
          if (fVar50 <= fVar53) {
            fVar50 = fVar53;
          }
          uStack_148 = (ulong ******)CONCAT44(fVar52,fVar50);
          uStack_140 = CONCAT44((uStack_170._4_4_ - (_UNK_014e9bdc * 0.0 + 0.0)) + 0.0 +
                                _UNK_014e2ebc,
                                ((float)uStack_170 - (_UNK_014e9bd8 * 0.0 + 0.0)) + 0.0 +
                                _UNK_014e2eb8);
          if (fVar51 <= fVar57) {
            auStack_108._0_4_ = fVar57;
          }
          fVar50 = (float)func_0x0eee4390();
          fVar57 = (float)func_0x0eee4390();
          fVar52 = (float)func_0x0eee4390();
          fVar56 = (float)func_0x0eee4390();
          if ((int)fVar50 < iVar28) {
            iVar28 = (int)fVar50;
          }
          iVar13 = auStack_258._0_4_;
          if ((int)fVar57 < (int)auStack_258._0_4_) {
            iVar13 = (int)fVar57;
          }
          if (iVar12 <= (int)fVar52) {
            iVar12 = (int)fVar52;
          }
          if (iVar39 <= (int)fVar56) {
            iVar39 = (int)fVar56;
          }
          ppppppuVar32 = (ulong ******)((long)auStack_168 + 8);
        } while (((ulong *******)auStack_78._0_8_ != pppppppuStack_50) ||
                (auStack_168 != (undefined1  [8])ppppppuStack_98));
      }
      pppppppuVar41 = pppppppuStack_a8;
      pppppppuVar34 = pppppppuStack_188;
      if ((char)uStack_17c == '\0') {
        LOCK();
        pppppppuVar16 = pppppppuStack_a8 + 1;
        ppppppuVar32 = *pppppppuVar16;
        *pppppppuVar16 = (ulong ******)((long)*pppppppuVar16 + -1);
        UNLOCK();
        if (ppppppuVar32 == (ulong ******)0x0) {
          (*(code *)(*pppppppuStack_a8)[2])(pppppppuStack_a8);
          func_0x0412c2d0(pppppppuVar41);
        }
      }
      pppppppuVar41 = pppppppuStack_60;
      if (pppppppuStack_60 != (ulong *******)0x0) {
        LOCK();
        pppppppuVar16 = pppppppuStack_60 + 1;
        ppppppuVar32 = *pppppppuVar16;
        *pppppppuVar16 = (ulong ******)((long)*pppppppuVar16 + -1);
        UNLOCK();
        if (ppppppuVar32 == (ulong ******)0x0) {
          (*(code *)(*pppppppuStack_60)[2])(pppppppuStack_60);
          func_0x0412c2d0(pppppppuVar41);
        }
      }
      pppppppuVar41 = pppppppuStack_220;
      pppppppuVar16 = (ulong *******)(**(code **)(*plStack_130 + 0x40))();
      if (pppppppuVar16 == (ulong *******)0x0) {
        plStack_110 = (long *)0x0;
        param_5 = puStack_238;
joined_r0x0bb4026b:
        puStack_238 = param_5;
        if (pppppppuStack_190 != (ulong *******)0x0) goto LAB_0bb3fc62;
LAB_0bb40271:
        uStack_2d0._0_4_ = 0;
        uStack_2d0._4_4_ = 0;
        uStack_2c8._0_4_ = SUB84(*pppppppuStack_198,0);
        uStack_2c8._4_4_ = (uint)((ulong)*pppppppuStack_198 >> 0x20);
        uStack_2d8 = pppppppuStack_198;
        if (pppppppuStack_190 != (ulong *******)0x0) goto LAB_0bb3fcbb;
LAB_0bb402a1:
        pppppppuStack_2f8 = (ulong *******)pppppppuStack_198[1];
        pppppppuStack_308 = pppppppuStack_198;
        pppppppuStack_300 = (ulong *******)0x0;
        goto LAB_0bb402b8;
      }
      uStack_2d8 = (ulong *******)(ulong)(uint)(iVar28 >> 4);
      uStack_2d0._0_4_ = iVar13 >> 4;
      uStack_2d0._4_4_ = iVar12 >> 4;
      uStack_2c8._4_4_ = iVar39 >> 4;
      uStack_2c8._0_4_ = 0;
      uVar30 = (uStack_2d0._4_4_ - (iVar28 >> 4)) + 1;
      iVar12 = (uStack_2c8._4_4_ - (int)uStack_2d0) + 1;
      uStack_2c0 = (ulong)uVar30 + 0x100000000;
      iVar13 = iVar12 * uVar30;
      uStack_2b8 = (ulong ******)CONCAT44(iVar13,iVar12);
      uStack_2b0 = (ulong *******)CONCAT44(0x10,iVar13);
      pppppppuStack_308 = pppppppuVar16;
      func_0x09e174f0(&plStack_110,&pppppppuStack_308,&uStack_2d8,iStack_8c < 0x13,bStack_2d9 ^ 1,1)
      ;
      pppppppuVar16 = pppppppuStack_190;
      param_5 = puStack_238;
      if (plStack_110 == (long *)0x0) goto joined_r0x0bb4026b;
      if (pppppppuStack_190 == (ulong *******)0x0) {
        pppppppuStack_318 = (ulong *******)*pppppppuStack_198;
        pppppppuStack_328 = pppppppuStack_198;
        pppppppuStack_320 = (ulong *******)0x0;
      }
      else {
        LOCK();
        pppppppuStack_190[1] = (ulong ******)((long)pppppppuStack_190[1] + 1);
        UNLOCK();
        pppppppuStack_318 = (ulong *******)*pppppppuStack_198;
        pppppppuStack_328 = pppppppuStack_198;
        pppppppuStack_320 = pppppppuStack_190;
        LOCK();
        pppppppuStack_190[1] = (ulong ******)((long)pppppppuStack_190[1] + 1);
        UNLOCK();
        LOCK();
        pppppppuVar20 = pppppppuStack_190 + 1;
        ppppppuVar32 = *pppppppuVar20;
        *pppppppuVar20 = (ulong ******)((long)*pppppppuVar20 + -1);
        UNLOCK();
        if (ppppppuVar32 == (ulong ******)0x0) {
          (*(code *)(*pppppppuStack_190)[2])(pppppppuStack_190);
          func_0x0412c2d0(pppppppuVar16);
        }
      }
      pppppppuVar16 = pppppppuStack_190;
      if (pppppppuStack_190 == (ulong *******)0x0) {
        pppppppuStack_118 = (ulong *******)pppppppuStack_198[1];
        pppppppuStack_128 = pppppppuStack_198;
        pppppppuStack_120 = (ulong *******)0x0;
      }
      else {
        LOCK();
        pppppppuStack_190[1] = (ulong ******)((long)pppppppuStack_190[1] + 1);
        UNLOCK();
        pppppppuStack_118 = (ulong *******)pppppppuStack_198[1];
        pppppppuStack_128 = pppppppuStack_198;
        pppppppuStack_120 = pppppppuStack_190;
        LOCK();
        pppppppuStack_190[1] = (ulong ******)((long)pppppppuStack_190[1] + 1);
        UNLOCK();
        LOCK();
        pppppppuVar20 = pppppppuStack_190 + 1;
        ppppppuVar32 = *pppppppuVar20;
        *pppppppuVar20 = (ulong ******)((long)*pppppppuVar20 + -1);
        UNLOCK();
        if (ppppppuVar32 == (ulong ******)0x0) {
          (*(code *)(*pppppppuStack_190)[2])(pppppppuStack_190);
          func_0x0412c2d0(pppppppuVar16);
        }
      }
      if ((pppppppuStack_328 != pppppppuStack_128) || (pppppppuStack_318 != pppppppuStack_118)) {
        iStack_20c = iStack_20c >> 4;
        iStack_210 = iStack_210 >> 4;
        auStack_168 = (undefined1  [8])&UNK_01254d89;
        uStack_88 = (ulong *******)((ulong)pppppppuVar41 & 0xff | uStack_1f0 << 8);
        do {
          ppppppuVar32 = *pppppppuStack_318;
          auStack_258 = (undefined1  [8])ppppppuVar32;
          if ((*(int *)(pppppppuVar34 + 1) < 3) && (iStack_23c != 3)) {
            pppppuVar4 = ppppppuVar32[2];
            uVar30 = *(uint *)(ppppppuVar32 + 3);
            ppppuVar26 = pppppuVar4[7] +
                         ((int)((ulong)((long)pppppuVar4[8] - (long)pppppuVar4[7]) >> 3) - 1U &
                         0xaf993816);
            do {
              pppuVar27 = *ppppuVar26;
              if (pppuVar27 == (ulong ***)0xffffffffffffffff) {
                ppppuVar23 = pppppuVar4[0xb];
                ppppuVar26 = ppppuVar23;
                goto LAB_0bb40b47;
              }
              ppppuVar26 = pppppuVar4[10] + (long)pppuVar27 * 4;
            } while (*(int *)(pppppuVar4[10] + (long)pppuVar27 * 4 + 1) != -0x5066c7ea);
            ppppuVar23 = pppppuVar4[0xb];
LAB_0bb40b47:
            pppppppuVar16 = uStack_2d0;
            if ((ppppuVar26 == ppppuVar23) ||
               (pppuVar27 = ppppuVar26[2], pppuVar27 == (ulong ***)0x0)) goto LAB_0bb4258d;
            uVar33 = (ulong)((uVar30 & 0x3ffff) >> 0xb);
            if (((ulong)((long)pppuVar27[2] - (long)pppuVar27[1] >> 3) <= uVar33) ||
               (((puVar5 = pppuVar27[1][uVar33], puVar5 == (ulong *)0x0 ||
                 (uVar3 = *(uint *)((long)puVar5 + (ulong)(uVar30 & 0x7ff) * 4),
                 0x3fffe < (uVar30 & 0xfffc0000 ^ uVar3))) ||
                (lVar17 = *(long *)((long)pppuVar27[10] + (ulong)(uVar3 >> 4 & 0x3ff8)), lVar17 == 0
                )))) goto LAB_0bb4258d;
            if (iStack_23c == *(int *)(lVar17 + (ulong)(uVar3 & 0x7f) * 4)) goto LAB_0bb40bdf;
            uStack_2d8 = (ulong *******)0x0;
            uStack_2d0._0_4_ = 0;
            uStack_2d0._4_4_ = 0;
            uStack_2d0 = (ulong *******)0x0;
            uStack_2c8._0_4_ = 0;
            uStack_2c8._4_4_ = 0;
            uStack_2c8 = (ulong *******)0x0;
            if (*param_5 != 0) {
              func_0x09e22e10(param_5,&UNK_01299f9e,0x1c,&uStack_2d8,1);
            }
          }
          else {
LAB_0bb40bdf:
            plVar14 = (long *)(**(code **)(*plStack_130 + 0x38))();
            lVar17 = (**(code **)(*plVar14 + 0x568))(plVar14);
            if (*(char *)(lVar17 + 0x55c) == '\x01') {
              iVar12 = *(int *)(lVar17 + 0x558);
joined_r0x0bb40c6b:
              if (iVar12 == 0) {
                auVar21 = auStack_258;
                plVar18 = (long *)func_0x0412c300(*(undefined8 *)((long)auStack_258 + 0x1c8));
                lVar19 = *(long *)((long)auVar21 + 0x1c0);
                LOCK();
                plVar14 = plVar18 + 1;
                lVar17 = *plVar14;
                *plVar14 = *plVar14 + -1;
                UNLOCK();
                if (lVar17 == 0) {
                  (**(code **)(*plVar18 + 0x10))(plVar18);
                  func_0x0412c2d0(plVar18);
                  lVar17 = *(long *)(lVar19 + 0x1a8);
                }
                else {
                  lVar17 = *(long *)(lVar19 + 0x1a8);
                }
                if (lVar17 == 0) {
                  cVar11 = func_0x0eeddcf0(&UNK_014dab29,&UNK_014dab47,0x4ab,&UNK_0136e3ef,
                                           &UNK_012cdf98);
                  if (cVar11 != '\0') {
                    _DAT_00000000 = 0xdeadc0de;
                  }
                }
                uStack_2d8 = (ulong *******)CONCAT44(iStack_210,iStack_20c);
                cVar11 = (**(code **)(**(long **)(lVar19 + 0x1a8) + 0xf0))
                                   (*(long **)(lVar19 + 0x1a8),&uStack_2d8);
                if (cVar11 == '\0') {
                  uStack_2d8 = (ulong *******)0x0;
                  uStack_2d0._0_4_ = 0;
                  uStack_2d0._4_4_ = 0;
                  uStack_2d0 = (ulong *******)0x0;
                  uStack_2c8._0_4_ = 0;
                  uStack_2c8._4_4_ = 0;
                  uStack_2c8 = (ulong *******)0x0;
                  if (*param_5 != 0) {
                    func_0x09e22e10(param_5,&UNK_012b29e9,0x16,&uStack_2d8,1);
                  }
                  goto LAB_0bb41d36;
                }
              }
            }
            else {
              lVar19 = func_0x0d2279e0(lVar17 + 0x518,0xf71d720);
              if (lVar19 == 0) {
                lVar19 = func_0x0d2279e0(lVar17 + 0x4f0,0xf71d720);
                if (lVar19 != 0) goto LAB_0bb40c57;
              }
              else {
LAB_0bb40c57:
                if (*(int *)(lVar19 + 0x50) == 4) {
                  iVar12 = *(int *)(lVar19 + 0x38);
                  goto joined_r0x0bb40c6b;
                }
              }
            }
            if (*(char *)((long)pppppppuVar34 + 0x2df) == '\x01') {
              uVar42 = (**(code **)(**(long **)(*plStack_110 + 0x28) + 0x68))();
              iVar12 = func_0x0bb42ab0(uVar42,auStack_258);
              if (iVar12 == 2) {
                if (ppppppuStack_1b0 < ppppppuStack_1a8) {
                  *ppppppuStack_1b0 = (ulong *****)auStack_258;
                  pppppppuVar34 = pppppppuStack_188;
                  ppppppuStack_1b0 = ppppppuStack_1b0 + 1;
                }
                else {
                  lVar17 = (long)ppppppuStack_1b0 - (long)ppppppuStack_1b8;
                  uVar33 = (lVar17 >> 3) + 1;
                  if (0x1fffffffffffffff < uVar33) goto LAB_0bb425bf;
                  auStack_108._0_8_ = ppppppuStack_1b8;
                  uVar38 = (long)ppppppuStack_1a8 - (long)ppppppuStack_1b8;
                  uVar35 = (long)uVar38 >> 2;
                  if ((ulong)((long)uVar38 >> 2) <= uVar33) {
                    uVar35 = uVar33;
                  }
                  if (0x7ffffffffffffff7 < uVar38) {
                    uVar35 = 0x1fffffffffffffff;
                  }
                  if (0x1fffffffffffffff < uVar35) goto LAB_0bb425ba;
                  lVar19 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar35 * 8);
                  if (lVar19 == 0) {
                    func_0x0eec74c0(uVar35 * 8,0);
                  }
                  uStack_148 = (ulong ******)(uVar35 * 8 + lVar19);
                  *(undefined1 (*) [8])(lVar19 + lVar17) = auStack_258;
                  ppppppuVar36 = (ulong ******)(lVar17 + lVar19 + 8);
                  ppppppuVar32 = (ulong ******)(lVar17 + lVar19 + (lVar17 >> 3) * -8);
                  uVar42 = auStack_108._0_8_;
                  func_0x0eee2f00(ppppppuVar32,auStack_108._0_8_,lVar17);
                  ppppppuStack_1a8 = uStack_148;
                  param_5 = puStack_238;
                  pppppppuVar34 = pppppppuStack_188;
                  pppppppuVar41 = pppppppuStack_220;
                  ppppppuStack_1b8 = ppppppuVar32;
                  ppppppuStack_1b0 = ppppppuVar36;
                  if (uVar42 != 0) {
                    thunk_FUN_0ee326a0(uVar42,uVar38);
                    param_5 = puStack_238;
                    pppppppuVar34 = pppppppuStack_188;
                    pppppppuVar41 = pppppppuStack_220;
                    ppppppuStack_1b0 = ppppppuVar36;
                  }
                }
              }
              else {
                if (iVar12 != 1) goto LAB_0bb40e10;
                if (ppppppuStack_c0 < ppppppuStack_b8) {
                  *ppppppuStack_c0 = (ulong *****)auStack_258;
                  pppppppuVar34 = pppppppuStack_188;
                  ppppppuStack_c0 = ppppppuStack_c0 + 1;
                }
                else {
                  lVar17 = (long)ppppppuStack_c0 - (long)ppppppuStack_c8;
                  uVar33 = (lVar17 >> 3) + 1;
                  if (0x1fffffffffffffff < uVar33) goto LAB_0bb425b5;
                  auStack_108._0_8_ = ppppppuStack_c8;
                  uVar38 = (long)ppppppuStack_b8 - (long)ppppppuStack_c8;
                  uVar35 = (long)uVar38 >> 2;
                  if ((ulong)((long)uVar38 >> 2) <= uVar33) {
                    uVar35 = uVar33;
                  }
                  if (0x7ffffffffffffff7 < uVar38) {
                    uVar35 = 0x1fffffffffffffff;
                  }
                  if (0x1fffffffffffffff < uVar35) goto LAB_0bb425b0;
                  lVar19 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar35 * 8);
                  if (lVar19 == 0) {
                    func_0x0eec74c0(uVar35 * 8,0);
                  }
                  uStack_148 = (ulong ******)(uVar35 * 8 + lVar19);
                  *(undefined1 (*) [8])(lVar19 + lVar17) = auStack_258;
                  ppppppuVar36 = (ulong ******)(lVar17 + lVar19 + 8);
                  ppppppuVar32 = (ulong ******)(lVar17 + lVar19 + (lVar17 >> 3) * -8);
                  uVar42 = auStack_108._0_8_;
                  func_0x0eee2f00(ppppppuVar32,auStack_108._0_8_,lVar17);
                  ppppppuStack_b8 = uStack_148;
                  param_5 = puStack_238;
                  pppppppuVar34 = pppppppuStack_188;
                  pppppppuVar41 = pppppppuStack_220;
                  ppppppuStack_c8 = ppppppuVar32;
                  ppppppuStack_c0 = ppppppuVar36;
                  if (uVar42 != 0) {
                    thunk_FUN_0ee326a0(uVar42,uVar38);
                    param_5 = puStack_238;
                    pppppppuVar34 = pppppppuStack_188;
                    pppppppuVar41 = pppppppuStack_220;
                    ppppppuStack_c0 = ppppppuVar36;
                  }
                }
              }
            }
            else {
LAB_0bb40e10:
              uStack_2d8 = (ulong *******)0x1000000100001;
              uStack_2d0._0_4_ = auStack_168._0_4_;
              uStack_2d0._4_4_ = auStack_168._4_4_;
              pppppppuVar16 = auStack_168;
              uStack_2c0 = uStack_2c0 & 0xffffffffffffff00;
              uStack_2c8._0_4_ = (int)uStack_2d0;
              uStack_2c8._4_4_ = uStack_2d0._4_4_;
              if ((pppppuStack_228 != (ulong *****)0x0) && (*(int *)(pppppppuVar34 + 0x5b) == 1)) {
                ppppuVar26 = pppppuStack_228[2];
                uVar30 = *(uint *)(pppppuStack_228 + 3);
                pppuVar27 = ppppuVar26[7] +
                            ((int)((ulong)((long)ppppuVar26[8] - (long)ppppuVar26[7]) >> 3) - 1U &
                            0x4f6ba419);
                do {
                  ppuVar6 = *pppuVar27;
                  if (ppuVar6 == (ulong **)0xffffffffffffffff) {
                    pppuVar24 = ppppuVar26[0xb];
                    pppuVar27 = pppuVar24;
                    goto LAB_0bb40eb9;
                  }
                  pppuVar27 = ppppuVar26[10] + (long)ppuVar6 * 4;
                } while (*(int *)(ppppuVar26[10] + (long)ppuVar6 * 4 + 1) != 0x4f6ba419);
                pppuVar24 = ppppuVar26[0xb];
LAB_0bb40eb9:
                uStack_2c8 = pppppppuVar16;
                if ((pppuVar27 == pppuVar24) || (ppuVar6 = pppuVar27[2], ppuVar6 == (ulong **)0x0))
                goto LAB_0bb4258d;
                uVar33 = (ulong)((uVar30 & 0x3ffff) >> 0xb);
                if (((ulong)((long)ppuVar6[2] - (long)ppuVar6[1] >> 3) <= uVar33) ||
                   (((uVar33 = ppuVar6[1][uVar33], uVar33 == 0 ||
                     (uVar3 = *(uint *)(uVar33 + (ulong)(uVar30 & 0x7ff) * 4),
                     0x3fffe < (uVar30 & 0xfffc0000 ^ uVar3))) ||
                    (lVar17 = *(long *)((long)ppuVar6[10] + (ulong)(uVar3 >> 4 & 0x3ff8)),
                    lVar17 == 0)))) goto LAB_0bb4258d;
                if (*(int *)(lVar17 + (ulong)(uVar3 & 0x7f) * 4) == 0x13f) {
                  lVar17 = *(long *)((long)auStack_258 + 0x10);
                  uVar30 = *(uint *)((long)auStack_258 + 0x18);
                  plVar14 = (long *)(*(long *)(lVar17 + 0x38) +
                                    (ulong)((int)((ulong)(*(long *)(lVar17 + 0x40) -
                                                         *(long *)(lVar17 + 0x38)) >> 3) - 1U &
                                           0x4f6ba419) * 8);
                  do {
                    if (*plVar14 == -1) {
                      plVar18 = *(long **)(lVar17 + 0x58);
                      plVar14 = plVar18;
                      goto LAB_0bb4101c;
                    }
                    lVar19 = *plVar14 * 0x20;
                    plVar14 = (long *)(*(long *)(lVar17 + 0x50) + lVar19);
                  } while (*(int *)(*(long *)(lVar17 + 0x50) + 8 + lVar19) != 0x4f6ba419);
                  plVar18 = *(long **)(lVar17 + 0x58);
LAB_0bb4101c:
                  if ((plVar14 == plVar18) || (lVar17 = plVar14[2], lVar17 == 0)) goto LAB_0bb4258d;
                  uVar33 = (ulong)((uVar30 & 0x3ffff) >> 0xb);
                  if ((((ulong)(*(long *)(lVar17 + 0x10) - *(long *)(lVar17 + 8) >> 3) <= uVar33) ||
                      ((lVar19 = *(long *)(*(long *)(lVar17 + 8) + uVar33 * 8), lVar19 == 0 ||
                       (uVar3 = *(uint *)(lVar19 + (ulong)(uVar30 & 0x7ff) * 4),
                       0x3fffe < (uVar30 & 0xfffc0000 ^ uVar3))))) ||
                     (lVar17 = *(long *)(*(long *)(lVar17 + 0x50) + (ulong)(uVar3 >> 4 & 0x3ff8)),
                     lVar17 == 0)) goto LAB_0bb4258d;
                  if ((*(int *)(lVar17 + (ulong)(uVar3 & 0x7f) * 4) == 0x13d) &&
                     (*(int *)(pppppppuVar34 + 1) < 0xe)) {
                    lVar17 = (**(code **)(**(long **)((long)auStack_258 + 0x1d0) + 0x568))();
                    puVar1 = (undefined *)(lVar17 + 0x50);
                    puVar29 = puVar1;
                    if ((*(char *)(lVar17 + 0x77) == '\0') &&
                       (((puVar37 = (undefined *)(lVar17 + 0x70), *(char *)(lVar17 + 0x68) != '\0'
                         || (puVar29 = puVar37, (*(byte *)(lVar17 + 0x56) & 1) != 0)) &&
                        (cVar11 = func_0x04fa7a10(puVar37,puVar1), puVar29 = puVar1, cVar11 != '\0')
                        ))) {
                      puVar29 = puVar37;
                    }
                    if (((puVar29[6] | puVar29[0x18]) & 1) == 0) {
                      puVar29 = &DAT_0f72b850;
                    }
                    cVar11 = func_0x04fa7a10(puVar29,&uStack_2d8);
                    if (cVar11 == '\0') {
                      ppppuVar26 = pppppuStack_228[0x43];
                      puVar7 = *(undefined4 **)((long)auStack_258 + 0x218);
                      fVar50 = *(float *)((long)ppppuVar26 + 4);
                      uStack_148 = (ulong ******)CONCAT44(uStack_148._4_4_,fVar50);
                      puVar7[1] = fVar50;
                      auStack_108._0_4_ = *(undefined4 *)ppppuVar26;
                      uVar42 = func_0x0eee37e0(fVar50 + _DAT_011989f8,_DAT_01198934);
                      fVar50 = (float)uVar42;
                      auVar59._0_4_ = (uint)(fVar50 + _DAT_01198934) & -(uint)(fVar50 < 0.0);
                      auVar59._4_4_ = (int)((ulong)uVar42 >> 0x20);
                      auVar59._8_4_ = (int)extraout_XMM0_Qb_03;
                      auVar59._12_4_ = (int)((ulong)extraout_XMM0_Qb_03 >> 0x20);
                      auVar59 = ZEXT416(~-(uint)(fVar50 < 0.0) & (uint)fVar50) | auVar59;
                      auStack_78._4_12_ = auVar59._4_12_;
                      auStack_78._0_4_ = auVar59._0_4_ + _DAT_01198648;
                      auVar46._4_4_ = auVar59._4_4_;
                      auVar46._0_4_ = auStack_78._0_4_;
                      auVar46._8_4_ = auVar59._8_4_;
                      auVar46._12_4_ = auVar59._12_4_;
                      auVar47._4_12_ = auVar46._4_12_;
                      auVar47._0_4_ =
                           ((float)auStack_78._0_4_ - (float)uStack_148) + (float)puVar7[3] +
                           _DAT_011989f8;
                      uStack_148 = (ulong ******)func_0x0eee37e0(auVar47._0_8_);
                      puVar7[1] = auStack_78._0_4_;
                      uStack_140 = extraout_XMM0_Qb_04;
                      uVar42 = func_0x0eee37e0((float)auStack_108._0_4_ + _DAT_011989f8,
                                               _DAT_01198934);
                      fVar50 = (float)uVar42;
                      auVar55._4_4_ = (int)((ulong)uVar42 >> 0x20);
                      auVar55._0_4_ =
                           (uint)(fVar50 + _DAT_01198934) & -(uint)(fVar50 < _DAT_011983fc);
                      auVar55._8_4_ = (int)extraout_XMM0_Qb_05;
                      auVar55._12_4_ = (int)((ulong)extraout_XMM0_Qb_05 >> 0x20);
                      auVar55 = ZEXT416(~-(uint)(fVar50 < _DAT_011983fc) & (uint)fVar50) | auVar55;
                      auStack_78._4_12_ = auVar55._4_12_;
                      auStack_78._0_4_ = auVar55._0_4_ + _DAT_01198648;
                      auVar48._4_4_ = auVar55._4_4_;
                      auVar48._0_4_ = auStack_78._0_4_;
                      auVar48._8_4_ = auVar55._8_4_;
                      auVar48._12_4_ = auVar55._12_4_;
                      auVar49._4_12_ = auVar48._4_12_;
                      auVar49._0_4_ =
                           ((float)auStack_78._0_4_ - (float)auStack_108._0_4_) + (float)puVar7[2] +
                           _DAT_011989f8;
                      fVar50 = (float)func_0x0eee37e0(auVar49._0_8_);
                      *(ulong *)(puVar7 + 2) =
                           CONCAT44((float)((uint)((float)uStack_148 + _UNK_014e32c4) &
                                            -(uint)((float)uStack_148 < _UNK_014e8c24) |
                                           ~-(uint)((float)uStack_148 < _UNK_014e8c24) &
                                           (uint)(float)uStack_148) + _UNK_014e4274,
                                    (float)((uint)(fVar50 + _DAT_014e32c0) &
                                            -(uint)(fVar50 < _DAT_014e8c20) |
                                           ~-(uint)(fVar50 < _DAT_014e8c20) & (uint)fVar50) +
                                    _DAT_014e4270);
                      *puVar7 = auStack_78._0_4_;
                    }
                  }
                }
              }
              if ((uStack_2c8._4_4_ & 0x800000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,
                           (CONCAT44(uStack_2c8._4_4_,(undefined4)uStack_2c8) & 0xff00ffffffffffff)
                           - 8);
              }
              uStack_2c8._0_4_ = 0;
              uStack_2c8._4_4_ = 0;
              if ((uStack_2d0._4_4_ & 0x800000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,
                           (CONCAT44(uStack_2d0._4_4_,(int)uStack_2d0) & 0xff00ffffffffffff) - 8);
              }
              pppppppuStack_308 = (ulong *******)((ulong)pppppppuStack_308 & 0xffffffffffffff00);
              cStack_2ec = '\0';
              if (*(char *)((long)pppppppuVar34 + 0x2dd) == '\x01') {
                cVar11 = func_0x09e10d40(plStack_130,*(undefined4 *)(pppppppuVar34 + 1));
                if (cVar11 == '\0') {
                  pppppppuStack_308 = (ulong *******)pppppppuVar34[0x5a];
                  if (cStack_2ec == '\x01') {
                    pppppppuStack_300._0_5_ = SUB85(pppppppuVar34[0x59],0);
                    if (cStack_2f0 != '\0') {
LAB_0bb41690:
                      cStack_2f0 = '\0';
                    }
                    goto LAB_0bb416a0;
                  }
                  pppppppuStack_2f8 = (ulong *******)((ulong)pppppppuStack_2f8 & 0xffffffff00000000)
                  ;
                  cStack_2f0 = '\0';
                  pppppppuVar16 = (ulong *******)pppppppuVar34[0x59];
                  pppppppuVar20 = pppppppuStack_2f8;
                  cVar11 = cStack_2f0;
LAB_0bb4166c:
                  cStack_2f0 = cVar11;
                  pppppppuStack_2f8 = pppppppuVar20;
                  pppppppuStack_300 = pppppppuVar16;
                  cStack_2ec = '\x01';
                  iVar12 = *(int *)(pppppppuVar34 + 1);
                  cVar11 = *(char *)(pppppppuVar34 + 0x5c);
                }
                else {
                  pppppppuVar20 = (ulong *******)(**(code **)(*plStack_130 + 0x30))();
                  pppppppuStack_308 = (ulong *******)pppppppuVar34[0x5a];
                  pppppppuVar16 = (ulong *******)pppppppuVar34[0x59];
                  cVar11 = extraout_DL;
                  if (cStack_2ec != '\x01') goto LAB_0bb4166c;
                  pppppppuStack_300._0_5_ = SUB85(pppppppuVar34[0x59],0);
                  if (cStack_2f0 == extraout_DL) {
                    if (cStack_2f0 == '\0') goto LAB_0bb416a0;
                    iVar12 = *(int *)(pppppppuVar34 + 1);
                    cVar11 = *(char *)(pppppppuVar34 + 0x5c);
                    pppppppuStack_2f8 = pppppppuVar20;
                    goto joined_r0x0bb41608;
                  }
                  if (cStack_2f0 != '\0') goto LAB_0bb41690;
                  cStack_2f0 = '\x01';
                  iVar12 = *(int *)(pppppppuVar34 + 1);
                  cVar11 = *(char *)(pppppppuVar34 + 0x5c);
                  pppppppuStack_2f8 = pppppppuVar20;
                }
                uStack_e0._4_4_ = (undefined4)((ulong)uStack_e0 >> 0x20);
                uStack_1e8._4_4_ = (undefined4)((ulong)uStack_1e8 >> 0x20);
                if (cVar11 != '\x01') goto LAB_0bb41793;
LAB_0bb416b4:
                if (iVar12 < 0x34) {
                  iVar12 = 0x33;
                }
                uStack_2d8 = uStack_178;
                uStack_2d0._0_4_ = auStack_1c8._0_4_;
                uStack_1e8 = (ulong *******)CONCAT44(uStack_1e8._4_4_,iStack_23c);
                pppppppuStack_208 = pppppppuStack_a0;
                uStack_e0 = (ulong *******)CONCAT44(uStack_e0._4_4_,iVar12);
                ppppppuVar32 = pppppppuVar34[8];
                pppppppuVar16 = (ulong *******)CONCAT44(uStack_2d0._4_4_,auStack_1c8._0_4_);
                if (ppppppuVar32 == (ulong ******)0x0) goto LAB_0bb425ab;
                auVar21 = auStack_258;
                (*(code *)(*ppppppuVar32)[6])
                          (ppppppuVar32,auStack_258,&uStack_2d8,&pppppppuStack_208,&uStack_1e8,
                           &pppppppuStack_308,&uStack_e0);
                if (ppppppuStack_e8 <= ppppppuStack_f0) goto LAB_0bb41839;
LAB_0bb41760:
                *ppppppuStack_f0 = (ulong *****)auVar21;
                ppppppuVar32 = ppppppuStack_f0 + 1;
              }
              else {
LAB_0bb416a0:
                iVar12 = *(int *)(pppppppuVar34 + 1);
                cVar11 = *(char *)(pppppppuVar34 + 0x5c);
joined_r0x0bb41608:
                uStack_e0._4_4_ = (undefined4)((ulong)uStack_e0 >> 0x20);
                uStack_1e8._4_4_ = (undefined4)((ulong)uStack_1e8 >> 0x20);
                if (cVar11 == '\x01') goto LAB_0bb416b4;
LAB_0bb41793:
                uStack_2d8 = uStack_178;
                uStack_2d0._0_4_ = auStack_1c8._0_4_;
                pppppppuVar16 = (ulong *******)CONCAT44(uStack_2d0._4_4_,auStack_1c8._0_4_);
                uStack_1e8 = (ulong *******)CONCAT44(uStack_1e8._4_4_,iStack_23c);
                pppppppuStack_208 = pppppppuStack_a0;
                uStack_e0 = (ulong *******)CONCAT44(uStack_e0._4_4_,iVar12);
                ppppppuVar32 = pppppppuVar34[8];
                if (ppppppuVar32 == (ulong ******)0x0) goto LAB_0bb4259c;
                (*(code *)(*ppppppuVar32)[6])
                          (ppppppuVar32,auStack_258,&uStack_2d8,&pppppppuStack_208,&uStack_1e8,
                           &pppppppuStack_308,&uStack_e0);
                auVar21 = auStack_258;
                if (ppppppuStack_f0 < ppppppuStack_e8) goto LAB_0bb41760;
LAB_0bb41839:
                lVar17 = (long)ppppppuStack_f0 - (long)ppppppuStack_f8;
                uVar33 = (lVar17 >> 3) + 1;
                if (0x1fffffffffffffff < uVar33) goto LAB_0bb425a6;
                auStack_108._0_8_ = ppppppuStack_f8;
                uVar38 = (long)ppppppuStack_e8 - (long)ppppppuStack_f8;
                uVar35 = (long)uVar38 >> 2;
                if ((ulong)((long)uVar38 >> 2) <= uVar33) {
                  uVar35 = uVar33;
                }
                if (0x7ffffffffffffff7 < uVar38) {
                  uVar35 = 0x1fffffffffffffff;
                }
                if (0x1fffffffffffffff < uVar35) goto LAB_0bb425a1;
                lVar19 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar35 * 8);
                if (lVar19 == 0) {
                  func_0x0eec74c0(uVar35 * 8,0);
                }
                uStack_148 = (ulong ******)(uVar35 * 8 + lVar19);
                *(undefined1 (*) [8])(lVar19 + lVar17) = auStack_258;
                ppppppuVar32 = (ulong ******)(lVar17 + lVar19 + 8);
                ppppppuVar36 = (ulong ******)(lVar17 + lVar19 + (lVar17 >> 3) * -8);
                uVar42 = auStack_108._0_8_;
                func_0x0eee2f00(ppppppuVar36,auStack_108._0_8_,lVar17);
                ppppppuStack_e8 = uStack_148;
                ppppppuStack_f8 = ppppppuVar36;
                if (uVar42 != 0) {
                  ppppppuStack_f0 = ppppppuVar32;
                  thunk_FUN_0ee326a0(uVar42,uVar38);
                }
                auVar21 = auStack_258;
                param_5 = puStack_238;
                pppppppuVar41 = pppppppuStack_220;
              }
              pppppppuVar34 = pppppppuStack_188;
              ppppuVar26 = *(ulong *****)((long)auVar21 + 0x10);
              uVar30 = *(uint *)((long)auVar21 + 0x18);
              pppuVar27 = ppppuVar26[7] +
                          ((int)((ulong)((long)ppppuVar26[8] - (long)ppppuVar26[7]) >> 3) - 1U &
                          0x4f6ba419);
              do {
                ppuVar6 = *pppuVar27;
                if (ppuVar6 == (ulong **)0xffffffffffffffff) {
                  pppuVar24 = ppppuVar26[0xb];
                  pppuVar27 = pppuVar24;
                  goto LAB_0bb419b8;
                }
                pppuVar27 = ppppuVar26[10] + (long)ppuVar6 * 4;
              } while (*(int *)(ppppuVar26[10] + (long)ppuVar6 * 4 + 1) != 0x4f6ba419);
              pppuVar24 = ppppuVar26[0xb];
LAB_0bb419b8:
              ppppppuStack_f0 = ppppppuVar32;
              pppppppuVar16 = uStack_2d0;
              if ((pppuVar27 == pppuVar24) || (ppuVar6 = pppuVar27[2], ppuVar6 == (ulong **)0x0))
              goto LAB_0bb4258d;
              uVar33 = (ulong)((uVar30 & 0x3ffff) >> 0xb);
              if ((((ulong)((long)ppuVar6[2] - (long)ppuVar6[1] >> 3) <= uVar33) ||
                  ((uVar33 = ppuVar6[1][uVar33], uVar33 == 0 ||
                   (uVar3 = *(uint *)(uVar33 + (ulong)(uVar30 & 0x7ff) * 4),
                   0x3fffe < (uVar30 & 0xfffc0000 ^ uVar3))))) ||
                 (lVar17 = *(long *)((long)ppuVar6[10] + (ulong)(uVar3 >> 4 & 0x3ff8)), lVar17 == 0)
                 ) goto LAB_0bb4258d;
              if (*(int *)(lVar17 + (ulong)(uVar3 & 0x7f) * 4) == 0x13f) {
                puVar22 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
                if (puVar22 == (undefined8 *)0x0) {
                  func_0x0eec74c0(0x20,0);
                }
                uVar42 = _UNK_0135065b;
                pppppppuStack_208 = (ulong *******)0x21;
                uStack_200 = 0x19;
                *(ulong *)((long)puVar22 + 9) = CONCAT17(UNK_0135065a,_DAT_01350653);
                *(undefined8 *)((long)puVar22 + 0x11) = uVar42;
                uVar42 = CONCAT71(_DAT_01350653,UNK_01350652);
                *puVar22 = _DAT_0135064a;
                puVar22[1] = uVar42;
                *(undefined1 *)((long)puVar22 + 0x19) = 0;
                puStack_1f8 = puVar22;
                if (((ulong)pppppppuVar41 & 1) == 0) {
                  uStack_e0 = uStack_88;
                  pppppppuStack_d8 = pppppppuStack_218;
                  pppppppuStack_d0 = pppppppuStack_230;
                }
                else {
                  FUN_0412e5e0(&uStack_e0,pppppppuStack_230,pppppppuStack_218);
                }
                uStack_1e8 = (ulong *******)0x0;
                pppppppuStack_1e0 = (ulong *******)0x0;
                pppppppuStack_1d8 = (ulong *******)0x0;
                puStack_40 = &uStack_1e8;
                uStack_38 = 0;
                pppppppuVar16 =
                     (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
                if (pppppppuVar16 == (ulong *******)0x0) {
                  func_0x0eec74c0(0x18,0);
                }
                pppppppuStack_1d8 = pppppppuVar16 + 3;
                uStack_2d8 = (ulong *******)&uStack_1e8;
                uStack_2d0 = (ulong *******)&pppppppuStack_48;
                uStack_2c8 = (ulong *******)&pppppppuStack_58;
                uStack_2c0 = uStack_2c0 & 0xffffffffffffff00;
                uStack_1e8 = pppppppuVar16;
                pppppppuStack_58 = pppppppuVar16;
                pppppppuStack_48 = pppppppuVar16;
                if (((ulong)uStack_e0 & 1) == 0) {
                  pppppppuVar16[2] = (ulong ******)pppppppuStack_d0;
                  *pppppppuVar16 = (ulong ******)uStack_e0;
                  pppppppuVar16[1] = (ulong ******)pppppppuStack_d8;
                }
                else {
                  pppppppuStack_1e0 = pppppppuVar16;
                  FUN_0412e5e0(pppppppuVar16,pppppppuStack_d0,pppppppuStack_d8);
                }
                pppppppuStack_1e0 = pppppppuStack_58 + 3;
                func_0x09db8400(1,auStack_258,&pppppppuStack_208,&uStack_1e8);
                pppppppuVar20 = uStack_1e8;
                pppppppuVar16 = pppppppuStack_1e0;
                if (uStack_1e8 != (ulong *******)0x0) {
                  for (; pppppppuVar20 != pppppppuVar16; pppppppuVar16 = pppppppuVar16 + -3) {
                    if (((ulong)pppppppuVar16[-3] & 1) != 0) {
                      thunk_FUN_0ee326a0(pppppppuVar16[-1],
                                         (ulong)pppppppuVar16[-3] & 0xfffffffffffffffe);
                    }
                  }
                  pppppppuStack_1e0 = pppppppuVar20;
                  thunk_FUN_0ee326a0(uStack_1e8,(long)pppppppuStack_1d8 - (long)uStack_1e8);
                }
                if (((ulong)uStack_e0 & 1) != 0) {
                  thunk_FUN_0ee326a0(pppppppuStack_d0,(ulong)uStack_e0 & 0xfffffffffffffffe);
                }
                if (((ulong)pppppppuStack_208 & 1) != 0) {
                  thunk_FUN_0ee326a0(puStack_1f8,(ulong)pppppppuStack_208 & 0xfffffffffffffffe);
                }
              }
              func_0x0bb362d0(*param_5,*(undefined8 *)(param_5 + 2),&UNK_0139b7f0);
              uStack_2d8 = (ulong *******)0x6d69746369760c;
              func_0x09e23440(param_5,&uStack_2d8,auStack_258);
              if (((ulong)uStack_2d8 & 1) != 0) {
                thunk_FUN_0ee326a0(uStack_2c8,(ulong)uStack_2d8 & 0xfffffffffffffffe);
              }
            }
          }
LAB_0bb41d36:
          pppppppuStack_318 = pppppppuStack_318 + 1;
        } while ((pppppppuStack_328 != pppppppuStack_128) ||
                (pppppppuStack_318 != pppppppuStack_118));
      }
      pppppppuVar16 = pppppppuStack_120;
      if (pppppppuStack_120 != (ulong *******)0x0) {
        LOCK();
        pppppppuVar34 = pppppppuStack_120 + 1;
        ppppppuVar32 = *pppppppuVar34;
        *pppppppuVar34 = (ulong ******)((long)*pppppppuVar34 + -1);
        UNLOCK();
        if (ppppppuVar32 == (ulong ******)0x0) {
          (*(code *)(*pppppppuStack_120)[2])(pppppppuStack_120);
          func_0x0412c2d0(pppppppuVar16);
        }
      }
      pppppppuVar16 = pppppppuStack_320;
      if (pppppppuStack_320 != (ulong *******)0x0) goto LAB_0bb40601;
LAB_0bb40617:
      if (ppppppuStack_f8 != ppppppuStack_f0) {
LAB_0bb4062d:
        if (pppppuStack_228 == (ulong *****)0x0) {
          func_0x09e20de0(&uStack_2d8,&ppppppuStack_f8);
          pppppppuStack_308._0_4_ = (float)uStack_178;
          pppppppuStack_2f8._0_4_ = 2;
          FUN_0470d9a0(&uStack_2b8,&UNK_01324fe5,7,0x19,&pppppppuStack_308);
          uStack_2a0 = 0;
          pppppppuStack_308._0_4_ = uStack_178._4_4_;
          pppppppuStack_2f8._0_4_ = 2;
          FUN_0470d9a0(&bStack_298,&UNK_01324fe5,7,0x19,&pppppppuStack_308);
          uStack_280 = 0;
          pppppppuStack_308 = (ulong *******)CONCAT44(pppppppuStack_308._4_4_,auStack_1c8._0_4_);
          pppppppuStack_2f8 = (ulong *******)CONCAT44(pppppppuStack_2f8._4_4_,2);
          FUN_0470d9a0(&bStack_278,&UNK_01324fe5,7,0x19,&pppppppuStack_308);
          uStack_260 = 0;
          pppppppuStack_328 = (ulong *******)0x0;
          pppppppuStack_320 = (ulong *******)0x0;
          pppppppuStack_318 = (ulong *******)0x0;
          func_0x09ce36f0(&pppppppuStack_328,&uStack_2d8,auStack_258,4);
          iVar12 = 0;
          pppppppuVar16 = pppppppuStack_328;
          if (pppppppuStack_328 == pppppppuStack_320) {
LAB_0bb408a1:
            iVar13 = 1;
            if (1 < iVar12) {
              iVar13 = iVar12;
            }
            param_5[10] = param_5[10] + iVar13;
          }
          else {
            do {
              iVar12 = iVar12 + *(int *)(pppppppuVar16 + 3);
              pppppppuVar16 = pppppppuVar16 + 4;
            } while (pppppppuVar16 != pppppppuStack_320);
            if (iVar12 != -1) goto LAB_0bb408a1;
          }
          if ((*param_5 & 0xfffffffd) != 0) {
            func_0x09e22e10(param_5,&UNK_0133533e,0x1f,&pppppppuStack_328,0);
          }
          pppppppuVar34 = pppppppuStack_328;
          pppppppuVar16 = pppppppuStack_320;
          if (pppppppuStack_328 != (ulong *******)0x0) {
            for (; pppppppuVar34 != pppppppuVar16; pppppppuVar16 = pppppppuVar16 + -4) {
              if (((ulong)pppppppuVar16[-4] & 1) != 0) {
                thunk_FUN_0ee326a0(pppppppuVar16[-2],(ulong)pppppppuVar16[-4] & 0xfffffffffffffffe);
              }
            }
            pppppppuStack_320 = pppppppuVar34;
            thunk_FUN_0ee326a0(pppppppuStack_328,(long)pppppppuStack_318 - (long)pppppppuStack_328);
          }
          if ((bStack_278 & 1) != 0) {
            thunk_FUN_0ee326a0(uStack_268,CONCAT71(uStack_277,bStack_278) & 0xfffffffffffffffe);
          }
          if ((bStack_298 & 1) != 0) {
            uVar33 = CONCAT71(uStack_297,bStack_298) & 0xfffffffffffffffe;
            goto LAB_0bb41e11;
          }
        }
        else {
          func_0x09e20de0(&uStack_2d8,&ppppppuStack_f8);
          func_0x09dbc310(&uStack_2b8,pppppuStack_228);
          uStack_2a0 = 1;
          pppppppuStack_328 = (ulong *******)0x0;
          pppppppuStack_320 = (ulong *******)0x0;
          pppppppuStack_318 = (ulong *******)0x0;
          pppppppuStack_120 = (ulong *******)((ulong)pppppppuStack_120 & 0xffffffffffffff00);
          pppppppuStack_128 = (ulong *******)&pppppppuStack_328;
          pppppppuVar16 = (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
          if (pppppppuVar16 == (ulong *******)0x0) {
            func_0x0eec74c0(0x40,0);
          }
          pppppppuStack_318 = pppppppuVar16 + 8;
          pppppppuStack_300 = (ulong *******)&uStack_1e8;
          pppppppuStack_2f8 = (ulong *******)&pppppppuStack_208;
          cStack_2f0 = '\0';
          pppppppuStack_328 = pppppppuVar16;
          pppppppuStack_320 = pppppppuVar16;
          pppppppuStack_308 = (ulong *******)&pppppppuStack_328;
          uStack_1e8 = pppppppuVar16;
          if (((ulong)uStack_2d8 & 1) == 0) {
            pppppppuVar16[2] = (ulong ******)uStack_2c8;
            *pppppppuVar16 = (ulong ******)uStack_2d8;
            pppppppuVar16[1] = (ulong ******)uStack_2d0;
            pppppppuVar34 = pppppppuVar16;
          }
          else {
            pppppppuStack_208 = pppppppuVar16;
            FUN_0412e5e0(pppppppuVar16,uStack_2c8,uStack_2d0);
            pppppppuVar34 = pppppppuStack_208;
          }
          *(undefined4 *)(pppppppuVar16 + 3) = (undefined4)uStack_2c0;
          pppppppuStack_208 = pppppppuVar34 + 4;
          if (((ulong)uStack_2b8 & 1) == 0) {
            pppppppuVar34[6] = (ulong ******)pppppppuStack_2a8;
            *pppppppuStack_208 = uStack_2b8;
            pppppppuVar34[5] = (ulong ******)uStack_2b0;
          }
          else {
            FUN_0412e5e0(pppppppuStack_208,pppppppuStack_2a8,uStack_2b0);
          }
          *(undefined4 *)(pppppppuVar34 + 7) = uStack_2a0;
          pppppppuStack_320 = pppppppuStack_208 + 4;
          if (pppppppuStack_328 == pppppppuStack_320) {
            iVar12 = 0;
LAB_0bb409c5:
            iVar13 = 1;
            if (1 < iVar12) {
              iVar13 = iVar12;
            }
            param_5[10] = param_5[10] + iVar13;
          }
          else {
            pppppppuVar16 = pppppppuStack_328 + -4;
            iVar12 = 0;
            do {
              iVar12 = iVar12 + *(int *)(pppppppuVar16 + 7);
              pppppppuVar16 = pppppppuVar16 + 4;
            } while (pppppppuVar16 != pppppppuStack_208);
            if (iVar12 != -1) goto LAB_0bb409c5;
          }
          if ((*param_5 & 0xfffffffd) != 0) {
            func_0x09e22e10(param_5,&UNK_012cc3fe,0x13,&pppppppuStack_328,0);
          }
          pppppppuVar34 = pppppppuStack_328;
          pppppppuStack_288 = pppppppuStack_328;
          pppppppuVar16 = pppppppuStack_320;
          if (pppppppuStack_328 != (ulong *******)0x0) {
            for (; pppppppuStack_328 = pppppppuStack_288, pppppppuVar34 != pppppppuVar16;
                pppppppuVar16 = pppppppuVar16 + -4) {
              if (((ulong)pppppppuVar16[-4] & 1) != 0) {
                thunk_FUN_0ee326a0(pppppppuVar16[-2],(ulong)pppppppuVar16[-4] & 0xfffffffffffffffe);
              }
              pppppppuStack_288 = pppppppuStack_328;
            }
            pppppppuStack_320 = pppppppuVar34;
            uVar33 = (long)pppppppuStack_318 - (long)pppppppuStack_288;
LAB_0bb41e11:
            thunk_FUN_0ee326a0(pppppppuStack_288,uVar33);
          }
        }
        if (((ulong)uStack_2b8 & 1) != 0) {
          thunk_FUN_0ee326a0(pppppppuStack_2a8,(ulong)uStack_2b8 & 0xfffffffffffffffe);
        }
        if (((ulong)uStack_2d8 & 1) != 0) {
          thunk_FUN_0ee326a0(uStack_2c8,(ulong)uStack_2d8 & 0xfffffffffffffffe);
        }
      }
    }
    if (ppppppuStack_c8 != ppppppuStack_c0) {
      func_0x09e20de0(&uStack_2d8,&ppppppuStack_c8);
      if (((ulong)pppppppuVar41 & 1) == 0) {
        uStack_2b8 = (ulong ******)((ulong)pppppppuVar41 & 0xff | uStack_1f0 << 8);
        uStack_2b0 = pppppppuStack_218;
        pppppppuStack_2a8 = pppppppuStack_230;
      }
      else {
        FUN_0412e5e0(&uStack_2b8,pppppppuStack_230,pppppppuStack_218);
      }
      uStack_2a0 = 0;
      pppppppuStack_328 = (ulong *******)0x0;
      pppppppuStack_320 = (ulong *******)0x0;
      pppppppuStack_318 = (ulong *******)0x0;
      pppppppuStack_120 = (ulong *******)((ulong)pppppppuStack_120 & 0xffffffffffffff00);
      pppppppuStack_128 = (ulong *******)&pppppppuStack_328;
      pppppppuVar16 = (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (pppppppuVar16 == (ulong *******)0x0) {
        func_0x0eec74c0(0x40,0);
      }
      pppppppuStack_318 = pppppppuVar16 + 8;
      pppppppuStack_300 = (ulong *******)&uStack_1e8;
      pppppppuStack_2f8 = (ulong *******)&pppppppuStack_208;
      cStack_2f0 = '\0';
      pppppppuStack_328 = pppppppuVar16;
      pppppppuStack_320 = pppppppuVar16;
      pppppppuStack_308 = (ulong *******)&pppppppuStack_328;
      uStack_1e8 = pppppppuVar16;
      if (((ulong)uStack_2d8 & 1) == 0) {
        pppppppuVar16[2] = (ulong ******)uStack_2c8;
        *pppppppuVar16 = (ulong ******)uStack_2d8;
        pppppppuVar16[1] = (ulong ******)uStack_2d0;
        pppppppuVar34 = pppppppuVar16;
      }
      else {
        pppppppuStack_208 = pppppppuVar16;
        FUN_0412e5e0(pppppppuVar16,uStack_2c8,uStack_2d0);
        pppppppuVar34 = pppppppuStack_208;
      }
      *(undefined4 *)(pppppppuVar16 + 3) = (undefined4)uStack_2c0;
      pppppppuStack_208 = pppppppuVar34 + 4;
      if (((ulong)uStack_2b8 & 1) == 0) {
        pppppppuVar34[6] = (ulong ******)pppppppuStack_2a8;
        *pppppppuStack_208 = uStack_2b8;
        pppppppuVar34[5] = (ulong ******)uStack_2b0;
      }
      else {
        FUN_0412e5e0(pppppppuStack_208,pppppppuStack_2a8,uStack_2b0);
      }
      *(undefined4 *)(pppppppuVar34 + 7) = uStack_2a0;
      pppppppuStack_320 = pppppppuStack_208 + 4;
      if (*param_5 != 0) {
        func_0x09e22e10(param_5,&UNK_014d8fbb,0x1c,&pppppppuStack_328,1);
      }
      pppppppuVar34 = pppppppuStack_328;
      pppppppuVar16 = pppppppuStack_320;
      if (pppppppuStack_328 != (ulong *******)0x0) {
        for (; pppppppuVar34 != pppppppuVar16; pppppppuVar16 = pppppppuVar16 + -4) {
          if (((ulong)pppppppuVar16[-4] & 1) != 0) {
            thunk_FUN_0ee326a0(pppppppuVar16[-2],(ulong)pppppppuVar16[-4] & 0xfffffffffffffffe);
          }
        }
        pppppppuStack_320 = pppppppuVar34;
        thunk_FUN_0ee326a0(pppppppuStack_328,(long)pppppppuStack_318 - (long)pppppppuStack_328);
      }
      if (((ulong)uStack_2b8 & 1) != 0) {
        thunk_FUN_0ee326a0(pppppppuStack_2a8,(ulong)uStack_2b8 & 0xfffffffffffffffe);
      }
      if (((ulong)uStack_2d8 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_2c8,(ulong)uStack_2d8 & 0xfffffffffffffffe);
      }
    }
    if (ppppppuStack_1b8 != ppppppuStack_1b0) {
      func_0x09e20de0(&uStack_2d8,&ppppppuStack_1b8);
      if (((ulong)pppppppuVar41 & 1) == 0) {
        uStack_2b8 = (ulong ******)((ulong)pppppppuVar41 & 0xff | uStack_1f0 << 8);
        uStack_2b0 = pppppppuStack_218;
        pppppppuStack_2a8 = pppppppuStack_230;
      }
      else {
        FUN_0412e5e0(&uStack_2b8,pppppppuStack_230,pppppppuStack_218);
      }
      uStack_2a0 = 0;
      pppppppuStack_328 = (ulong *******)0x0;
      pppppppuStack_320 = (ulong *******)0x0;
      pppppppuStack_318 = (ulong *******)0x0;
      pppppppuStack_120 = (ulong *******)((ulong)pppppppuStack_120 & 0xffffffffffffff00);
      pppppppuStack_128 = (ulong *******)&pppppppuStack_328;
      pppppppuVar16 = (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (pppppppuVar16 == (ulong *******)0x0) {
        func_0x0eec74c0(0x40,0);
      }
      pppppppuStack_318 = pppppppuVar16 + 8;
      pppppppuStack_300 = (ulong *******)&uStack_1e8;
      pppppppuStack_2f8 = (ulong *******)&pppppppuStack_208;
      cStack_2f0 = '\0';
      pppppppuStack_328 = pppppppuVar16;
      pppppppuStack_320 = pppppppuVar16;
      pppppppuStack_308 = (ulong *******)&pppppppuStack_328;
      uStack_1e8 = pppppppuVar16;
      if (((ulong)uStack_2d8 & 1) == 0) {
        pppppppuVar16[2] = (ulong ******)uStack_2c8;
        *pppppppuVar16 = (ulong ******)uStack_2d8;
        pppppppuVar16[1] = (ulong ******)uStack_2d0;
        pppppppuVar34 = pppppppuVar16;
      }
      else {
        pppppppuStack_208 = pppppppuVar16;
        FUN_0412e5e0(pppppppuVar16,uStack_2c8,uStack_2d0);
        pppppppuVar34 = pppppppuStack_208;
      }
      *(undefined4 *)(pppppppuVar16 + 3) = (undefined4)uStack_2c0;
      pppppppuStack_208 = pppppppuVar34 + 4;
      if (((ulong)uStack_2b8 & 1) == 0) {
        pppppppuVar34[6] = (ulong ******)pppppppuStack_2a8;
        *pppppppuStack_208 = uStack_2b8;
        pppppppuVar34[5] = (ulong ******)uStack_2b0;
      }
      else {
        FUN_0412e5e0(pppppppuStack_208,pppppppuStack_2a8,uStack_2b0);
      }
      *(undefined4 *)(pppppppuVar34 + 7) = uStack_2a0;
      pppppppuStack_320 = pppppppuStack_208 + 4;
      if (*param_5 != 0) {
        func_0x09e22e10(param_5,&UNK_0143d3d7,0xf,&pppppppuStack_328,1);
      }
      pppppppuVar34 = pppppppuStack_328;
      pppppppuVar16 = pppppppuStack_320;
      if (pppppppuStack_328 != (ulong *******)0x0) {
        for (; pppppppuVar34 != pppppppuVar16; pppppppuVar16 = pppppppuVar16 + -4) {
          if (((ulong)pppppppuVar16[-4] & 1) != 0) {
            thunk_FUN_0ee326a0(pppppppuVar16[-2],(ulong)pppppppuVar16[-4] & 0xfffffffffffffffe);
          }
        }
        pppppppuStack_320 = pppppppuVar34;
        thunk_FUN_0ee326a0(pppppppuStack_328,(long)pppppppuStack_318 - (long)pppppppuStack_328);
      }
      if (((ulong)uStack_2b8 & 1) != 0) {
        thunk_FUN_0ee326a0(pppppppuStack_2a8,(ulong)uStack_2b8 & 0xfffffffffffffffe);
      }
      if (((ulong)uStack_2d8 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_2c8,(ulong)uStack_2d8 & 0xfffffffffffffffe);
      }
    }
    plVar14 = plStack_110;
    if (plStack_110 != (long *)0x0) {
      plVar18 = (long *)*plStack_110;
      *plStack_110 = 0;
      if (plVar18 != (long *)0x0) {
        (**(code **)(*plVar18 + 8))();
      }
      thunk_FUN_0ee326a0(plVar14,8);
    }
    if (ppppppuStack_1b8 != (ulong ******)0x0) {
      ppppppuStack_1b0 = ppppppuStack_1b8;
      thunk_FUN_0ee326a0(ppppppuStack_1b8,(long)ppppppuStack_1a8 - (long)ppppppuStack_1b8);
    }
    if (ppppppuStack_c8 != (ulong ******)0x0) {
      ppppppuStack_c0 = ppppppuStack_c8;
      thunk_FUN_0ee326a0(ppppppuStack_c8,(long)ppppppuStack_b8 - (long)ppppppuStack_c8);
    }
    if (ppppppuStack_f8 != (ulong ******)0x0) {
      ppppppuStack_f0 = ppppppuStack_f8;
      thunk_FUN_0ee326a0(ppppppuStack_f8,(long)ppppppuStack_e8 - (long)ppppppuStack_f8);
    }
  }
  else {
    func_0x09db3fc0(&uStack_2d8,param_3 + 0x23,param_4);
    pppppppuStack_300 = (ulong *******)CONCAT44(uStack_2d0._4_4_,(int)uStack_2d0);
    pppppppuStack_308 = uStack_2d8;
    if (CONCAT44(uStack_2d0._4_4_,(int)uStack_2d0) != 0) {
      LOCK();
      plVar14 = (long *)(CONCAT44(uStack_2d0._4_4_,(int)uStack_2d0) + 8);
      *plVar14 = *plVar14 + 1;
      UNLOCK();
      plVar14 = (long *)CONCAT44(uStack_2d0._4_4_,(int)uStack_2d0);
      if (plVar14 != (long *)0x0) {
        LOCK();
        plVar18 = plVar14 + 1;
        lVar17 = *plVar18;
        *plVar18 = *plVar18 + -1;
        UNLOCK();
        if (lVar17 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
          func_0x0412c2d0(plVar14);
        }
      }
    }
    ppppppuVar32 = *pppppppuStack_308;
    if (ppppppuVar32 == pppppppuStack_308[1]) {
      fVar50 = 0.0;
      uStack_178 = (ulong *******)0x0;
      uStack_170 = 0;
      uStack_2d8 = (ulong *******)0x0;
      uStack_2d0._0_4_ = 0;
      uStack_2d0._4_4_ = 0;
      uStack_2c8._0_4_ = 0;
      uStack_2c8._4_4_ = 0;
      if (*param_5 != 0) {
        func_0x09e22e10(param_5,&UNK_011f7c99,0x1e,&uStack_2d8,1);
      }
LAB_0bb3f7ed:
      auVar21 = (undefined1  [8])0x0;
      uVar42 = 0;
      pppppppuStack_230 = (ulong *******)0x0;
      pppppppuStack_218 = (ulong *******)0x0;
      uStack_1f0 = 0;
      pppppppuVar41 = (ulong *******)0x0;
      pppppuStack_228 = (ulong *****)0x0;
      bVar9 = false;
      bVar10 = false;
      if (pppppppuStack_300 == (ulong *******)0x0) goto LAB_0bb3f8f5;
LAB_0bb3f8df:
      bVar9 = bVar10;
      pppppppuVar34 = pppppppuStack_300;
      LOCK();
      pppppppuVar16 = pppppppuStack_300 + 1;
      ppppppuVar32 = *pppppppuVar16;
      *pppppppuVar16 = (ulong ******)((long)*pppppppuVar16 + -1);
      UNLOCK();
      if (ppppppuVar32 != (ulong ******)0x0) goto LAB_0bb3f8f5;
      uStack_1c0 = uVar42;
      auStack_1c8 = auVar21;
      (*(code *)(*pppppppuStack_300)[2])(pppppppuStack_300);
      func_0x0412c2d0(pppppppuVar34);
      auVar21 = auStack_1c8;
      uVar42 = uStack_1c0;
      if (bVar9) goto LAB_0bb3f8fe;
    }
    else {
      if (((long)pppppppuStack_308[1] - (long)ppppppuVar32 & 0x7fffffff8U) != 8) {
        fVar50 = 0.0;
        uStack_178 = (ulong *******)0x0;
        uStack_170 = 0;
        uStack_2d8 = (ulong *******)0x0;
        uStack_2d0._0_4_ = 0;
        uStack_2d0._4_4_ = 0;
        uStack_2c8._0_4_ = 0;
        uStack_2c8._4_4_ = 0;
        if (*param_5 != 0) {
          func_0x09e22e10(param_5,&UNK_012faf12,0x1f,&uStack_2d8,1);
        }
        goto LAB_0bb3f7ed;
      }
      pppppuStack_228 = *ppppppuVar32;
      uStack_178 = (ulong *******)*pppppuStack_228[0x41];
      uStack_170 = 0;
      _auStack_1c8 = ZEXT416(*(uint *)(pppppuStack_228[0x41] + 1));
      _auStack_258 = ZEXT416(*(uint *)((long)pppppuStack_228[0x42] + 4));
      func_0x09dbc310(&uStack_2d8);
      pppppppuVar41 = (ulong *******)CONCAT44(auStack_258._0_4_,(int)uStack_178);
      uStack_170 = CONCAT44(auStack_258._4_4_,uStack_178._4_4_);
      pppppppuStack_218 = (ulong *******)CONCAT44(uStack_2d0._4_4_,(int)uStack_2d0);
      uStack_1f0 = (ulong)uStack_2d8 >> 8;
      pppppppuStack_230 = (ulong *******)CONCAT44(uStack_2c8._4_4_,(undefined4)uStack_2c8);
      ppppuVar26 = pppppuStack_228[2];
      uVar30 = *(uint *)(pppppuStack_228 + 3);
      pppuVar27 = ppppuVar26[7] +
                  ((int)((ulong)((long)ppppuVar26[8] - (long)ppppuVar26[7]) >> 3) - 1U & 0xaf993816)
      ;
      do {
        ppuVar6 = *pppuVar27;
        if (ppuVar6 == (ulong **)0xffffffffffffffff) {
          pppuVar24 = ppppuVar26[0xb];
          pppuVar27 = pppuVar24;
          goto LAB_0bb3f840;
        }
        pppuVar27 = ppppuVar26[10] + (long)ppuVar6 * 4;
      } while (*(int *)(ppppuVar26[10] + (long)ppuVar6 * 4 + 1) != -0x5066c7ea);
      pppuVar24 = ppppuVar26[0xb];
LAB_0bb3f840:
      uStack_178 = pppppppuVar41;
      pppppppuVar16 = pppppppuStack_218;
      uStack_2c8 = pppppppuStack_230;
      if ((pppuVar27 == pppuVar24) || (ppuVar6 = pppuVar27[2], ppuVar6 == (ulong **)0x0)) {
LAB_0bb4258d:
        uStack_2d0 = pppppppuVar16;
        FUN_04890760();
LAB_0bb42592:
        func_0x05ab4620();
LAB_0bb42597:
        func_0x04882eb0();
        pppppppuVar16 = uStack_2d0;
LAB_0bb4259c:
        uStack_2d0 = pppppppuVar16;
        FUN_04891200();
LAB_0bb425a1:
        func_0x04882eb0();
LAB_0bb425a6:
        func_0x05ab4620();
        pppppppuVar16 = uStack_2d0;
LAB_0bb425ab:
        uStack_2d0 = pppppppuVar16;
        FUN_04891200();
LAB_0bb425b0:
        func_0x04882eb0();
LAB_0bb425b5:
        func_0x05ab4620();
LAB_0bb425ba:
        func_0x04882eb0();
LAB_0bb425bf:
        ppppppuVar32 = (ulong ******)func_0x05ab4620();
        func_0x048f03a0(&uStack_2d8);
        func_0x05ab3aa0(&pppppppuStack_308);
        while (((ulong)pppppppuStack_220 & 1) == 0) {
          func_0x05ab3aa0(&pppppppuStack_198);
          ppppppuVar36 = ppppppuVar32;
          func_0x0eee2d70();
          ppppppuStack_1b0 = ppppppuVar36;
          thunk_FUN_0ee326a0();
          if (ppppppuStack_c8 != (ulong ******)0x0) {
            ppppppuStack_c0 = ppppppuStack_c8;
            thunk_FUN_0ee326a0(ppppppuStack_c8,(long)ppppppuStack_b8 - (long)ppppppuStack_c8);
          }
          if (ppppppuStack_f8 != (ulong ******)0x0) {
            ppppppuStack_f0 = ppppppuStack_f8;
            thunk_FUN_0ee326a0(ppppppuStack_f8,(long)ppppppuStack_e8 - (long)ppppppuStack_f8);
          }
        }
        thunk_FUN_0ee326a0(pppppppuStack_230,(ulong)pppppppuStack_220 & 0xfe | uStack_1f0 << 8);
        func_0x05ab3aa0(&pppppppuStack_198);
        func_0x0eee2d70(ppppppuVar32);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar33 = (ulong)((uVar30 & 0x3ffff) >> 0xb);
      if (((ulong)((long)ppuVar6[2] - (long)ppuVar6[1] >> 3) <= uVar33) ||
         (((uVar33 = ppuVar6[1][uVar33], uVar33 == 0 ||
           (uVar3 = *(uint *)(uVar33 + (ulong)(uVar30 & 0x7ff) * 4),
           0x3fffe < (uVar30 & 0xfffc0000 ^ uVar3))) ||
          (lVar17 = *(long *)((long)ppuVar6[10] + (ulong)(uVar3 >> 4 & 0x3ff8)), lVar17 == 0))))
      goto LAB_0bb4258d;
      iStack_23c = *(int *)(lVar17 + (ulong)(uVar3 & 0x7f) * 4);
      bVar9 = true;
      pppppppuVar41 = uStack_2d8;
      auVar21 = auStack_1c8;
      uVar42 = uStack_1c0;
      bVar10 = bVar9;
      if (pppppppuStack_300 != (ulong *******)0x0) goto LAB_0bb3f8df;
LAB_0bb3f8f5:
      if (bVar9) goto LAB_0bb3f8fe;
    }
  }
LAB_0bb423e5:
  if (((ulong)pppppppuVar41 & 1) != 0) {
    thunk_FUN_0ee326a0(pppppppuStack_230,(ulong)((byte)pppppppuVar41 & 0xfe) | uStack_1f0 << 8);
  }
LAB_0bb4240f:
  if (pppppppuStack_190 != (ulong *******)0x0) {
    LOCK();
    pppppppuVar41 = pppppppuStack_190 + 1;
    ppppppuVar32 = *pppppppuVar41;
    *pppppppuVar41 = (ulong ******)((long)*pppppppuVar41 + -1);
    UNLOCK();
    if (ppppppuVar32 == (ulong ******)0x0) {
      (*(code *)(*pppppppuStack_190)[2])(pppppppuStack_190);
      func_0x0412c2d0(pppppppuStack_190);
    }
  }
  return;
}



/* ---- referenced strings ----
 * 0x135064a  commands.tp.successVictim
 * 0x1350653  tp.successVictim
 */
