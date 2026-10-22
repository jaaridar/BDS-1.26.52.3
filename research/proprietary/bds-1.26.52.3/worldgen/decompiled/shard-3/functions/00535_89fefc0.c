/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x8afefc0 (ELF vaddr 0x89fefc0)
 * Label: caller-of-callee
 * Body:  [[08afefc0, 08aff798] [08aff7a0, 08affdea] [08affdf0, 08b0000c] [08b00048, 08b000a1]]
 * Ghidra: FUN_08afefc0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08afefc0(long param_1,long *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  char *pcVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  code *pcVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  char cVar14;
  uint uVar15;
  long *plVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long *plVar20;
  long unaff_RBP;
  ulong uVar21;
  long *plVar22;
  long unaff_R12;
  undefined8 *puVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long *plVar27;
  undefined7 *puVar28;
  ulong uVar29;
  long *plVar30;
  uint uStack_33c;
  long *plStack_338;
  undefined1 (*pauStack_328) [16];
  long *plStack_320;
  long lStack_318;
  ulong uStack_310;
  byte bStack_308;
  undefined7 uStack_307;
  undefined7 *puStack_2f8;
  long *plStack_2f0;
  long lStack_2e8;
  undefined *puStack_2e0;
  undefined8 uStack_2d8;
  long *plStack_2d0;
  uint uStack_2c8;
  undefined4 uStack_2c4;
  undefined *puStack_2c0;
  undefined1 auStack_2b8 [56];
  byte bStack_280;
  undefined7 uStack_27f;
  undefined8 uStack_270;
  undefined1 auStack_258 [160];
  undefined8 *apuStack_1b8 [2];
  uint uStack_1a8;
  uint uStack_198;
  uint uStack_188;
  undefined4 uStack_178;
  uint uStack_168;
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined1 auStack_110 [224];
  
  if (*(int *)(param_1 + 0x18) == 2) {
    if (((*(char **)(param_1 + 0x20) == (char *)0x0) || (**(char **)(param_1 + 0x20) != '\x01')) ||
       (cVar14 = (**(code **)(**(long **)(param_1 + 0x30) + 0x388))(), cVar14 == '\0')) {
      *(undefined4 *)(param_1 + 0x18) = 2;
    }
    else {
      *(undefined4 *)(param_1 + 0x18) = 0;
      (**(code **)(*(long *)(param_1 + 0x10) + 0x18))(param_1 + 0x10);
    }
  }
  plVar27 = *(long **)(param_1 + 0x80);
  for (plVar16 = *(long **)(param_1 + 0x78); plVar16 != plVar27; plVar16 = plVar16 + 1) {
    (**(code **)(**(long **)(*plVar16 + 0x118) + 0x20))();
  }
  if ((*(long *)(param_1 + 0x38) == 0) &&
     (cVar14 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_0149c900),
     cVar14 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((**(char **)(param_1 + 0x38) == '\0') &&
     (cVar14 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_0149c900),
     cVar14 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if (*(long *)(*(long *)(param_1 + 0x48) + 0x18) == 0) {
LAB_08aff196:
    (**(code **)(**(long **)(param_1 + 0xb8) + 0x50))();
    plStack_338 = *(long **)(param_1 + 0x1a0);
    if (plStack_338 == (long *)0x0) {
      return;
    }
    lVar26 = plStack_338[0xc];
    *(int *)(plStack_338 + 0xc) = (int)lVar26 + 1;
    uVar15 = (int)lVar26 * -0x33333333 + 0xe6666665;
    if (0xccccccc < (uVar15 >> 2 | uVar15 * 0x40000000)) goto LAB_08aff4bd;
    pauStack_328 = (undefined1 (*) [16])(plStack_338 + 0x44e);
    puVar23 = (undefined8 *)plStack_338[0x451];
    plStack_320 = param_2;
    if ((undefined8 *)plStack_338[0x452] <= puVar23) {
      param_1 = plStack_338[0x450];
      plVar27 = (long *)((long)puVar23 - param_1);
      unaff_R12 = (long)plVar27 >> 4;
      uVar29 = unaff_R12 + 1;
      if (uVar29 >> 0x3c != 0) {
LAB_08affffc:
        func_0x08b2a790();
LAB_08b00001:
        func_0x04882eb0();
LAB_08b00006:
        uVar19 = func_0x04931450();
        func_0x04143680(&uStack_2d8);
        uVar19 = func_0x0eee2d70(uVar19);
        func_0x08a05a00(&uStack_2d8);
        uVar19 = func_0x0eee2d70(uVar19);
        if (plStack_320 == (long *)0x0) {
          func_0x0eee2d70(uVar19);
        }
        func_0x0412a280(plStack_320,(long)plStack_338 - (long)plStack_320);
        func_0x0eee2d70(uVar19);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uStack_310 = plStack_338[0x452] - param_1;
      uVar21 = (long)uStack_310 >> 3;
      if ((ulong)((long)uStack_310 >> 3) <= uVar29) {
        uVar21 = uVar29;
      }
      if (0x7fffffffffffffef < uStack_310) {
        uVar21 = 0xfffffffffffffff;
      }
      if (0xfffffffffffffff < uVar21) goto LAB_08b00001;
      unaff_RBP = uVar21 << 4;
      lVar26 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,unaff_RBP);
      if (lVar26 == 0) goto LAB_08afffdd;
      goto LAB_08aff297;
    }
    lVar26 = plStack_338[0x44f];
    *puVar23 = *(undefined8 *)*pauStack_328;
    puVar23[1] = lVar26;
    puVar23 = puVar23 + 2;
  }
  else {
    plVar16 = *(long **)(param_1 + 0xb0);
    if (plVar16 != (long *)0x0) {
      plStack_2d0 = (long *)0x0;
      pcVar5 = (char *)plVar16[8];
      plVar27 = (long *)plVar16[9];
      if (plVar27 != (long *)0x0) {
        LOCK();
        plVar27[1] = plVar27[1] + 1;
        UNLOCK();
        plStack_2d0 = plVar27;
      }
      uStack_2d8._0_4_ = (uint)pcVar5;
      uStack_2d8._4_4_ = (undefined4)((ulong)pcVar5 >> 0x20);
      if (pcVar5 != (char *)0x0) {
        uStack_2c8 = (uint)plVar16;
        uStack_2c4 = (undefined4)((ulong)plVar16 >> 0x20);
        if (*pcVar5 != '\0') {
          (**(code **)(*plVar16 + 0x70))();
          uStack_2d8._0_4_ = 0;
          uStack_2d8._4_4_ = 0;
          plStack_2d0 = (long *)0x0;
          if (plVar27 != (long *)0x0) {
            LOCK();
            plVar16 = plVar27 + 1;
            lVar26 = *plVar16;
            *plVar16 = *plVar16 + -1;
            UNLOCK();
            if (lVar26 == 0) {
              (**(code **)(*plVar27 + 0x10))(plVar27);
              func_0x0412c2d0(plVar27);
            }
            plVar16 = plStack_2d0;
            uStack_2c8 = 0;
            uStack_2c4 = 0;
            if (plStack_2d0 != (long *)0x0) {
              LOCK();
              plVar27 = plStack_2d0 + 1;
              lVar26 = *plVar27;
              *plVar27 = *plVar27 + -1;
              UNLOCK();
              if (lVar26 == 0) {
                (**(code **)(*plStack_2d0 + 0x10))(plStack_2d0);
                func_0x0412c2d0(plVar16);
              }
            }
          }
          goto LAB_08aff196;
        }
      }
    }
    lVar26 = func_0x04890760();
LAB_08afffdd:
    FUN_0eec74c0(unaff_RBP,0);
LAB_08aff297:
    uVar19 = *(undefined8 *)(*pauStack_328 + 8);
    *(undefined8 *)(lVar26 + (long)plVar27) = *(undefined8 *)*pauStack_328;
    ((undefined8 *)(lVar26 + (long)plVar27))[1] = uVar19;
    puVar23 = (undefined8 *)((long)plVar27 + lVar26 + 0x10);
    lVar24 = (long)plVar27 + unaff_R12 * -0x10 + lVar26;
    func_0x0eee2f00(lVar24,param_1,plVar27);
    plStack_338[0x450] = lVar24;
    plStack_338[0x451] = (long)puVar23;
    plStack_338[0x452] = unaff_RBP + lVar26;
    if (param_1 != 0) {
      func_0x0412a280(param_1,uStack_310);
    }
  }
  plStack_338[0x451] = (long)puVar23;
  *(int *)((long)plStack_338 + 100) = *(int *)((long)plStack_338 + 100) + (int)plStack_338[0x44e];
  *(int *)(plStack_338 + 0xd) = (int)plStack_338[0xd] + *(int *)((long)plStack_338 + 0x2274);
  *(int *)((long)plStack_338 + 0x6c) = *(int *)((long)plStack_338 + 0x6c) + (int)plStack_338[0x44f];
  *(int *)(plStack_338 + 0xe) = (int)plStack_338[0xe] + *(int *)((long)plStack_338 + 0x227c);
  *pauStack_328 = (undefined1  [16])0x0;
  lVar26 = plStack_338[0x450];
  if (0xa0 < (ulong)((long)puVar23 - lVar26)) {
    lVar24 = (long)puVar23 - (lVar26 + 0x10);
    if (lVar24 != 0) {
      func_0x0eee2ee0(lVar26,lVar26 + 0x10,lVar24);
    }
    plStack_338[0x451] = lVar26 + lVar24;
  }
  plVar16 = (long *)plStack_338[0x1e];
  if (plVar16 != (long *)0x0) {
    do {
      uStack_2d8._0_4_ = (uint)plVar16[2];
      uStack_2d8._4_4_ = 0;
      plStack_2d0 = (long *)0x0;
      uStack_2c8 = 0;
      uStack_2c4 = 0;
      lVar24 = func_0x08b34880(plStack_338 + 0x14,(uint)uStack_2d8,plVar16 + 2,&uStack_2d8);
      iVar10 = *(int *)((long)plVar16 + 0x1c);
      lVar26 = plVar16[4];
      iVar11 = *(int *)((long)plVar16 + 0x24);
      *(int *)(lVar24 + 0x18) = *(int *)(lVar24 + 0x18) + (int)plVar16[3];
      *(int *)(lVar24 + 0x1c) = *(int *)(lVar24 + 0x1c) + iVar10;
      *(int *)(lVar24 + 0x20) = *(int *)(lVar24 + 0x20) + (int)lVar26;
      *(int *)(lVar24 + 0x24) = *(int *)(lVar24 + 0x24) + iVar11;
      *(int *)(lVar24 + 0x28) = *(int *)(lVar24 + 0x28) + (int)plVar16[5];
      uStack_2d8._0_4_ = (uint)plVar16[2];
      uStack_2d8._4_4_ = 0;
      plStack_2d0 = (long *)0x0;
      uStack_2c8 = 0;
      uStack_2c4 = 0;
      lVar24 = func_0x08b34880(plStack_338 + 0xf,(uint)uStack_2d8,plVar16 + 2,&uStack_2d8);
      iVar10 = *(int *)((long)plVar16 + 0x1c);
      lVar26 = plVar16[4];
      iVar11 = *(int *)((long)plVar16 + 0x24);
      *(int *)(lVar24 + 0x18) = *(int *)(lVar24 + 0x18) + (int)plVar16[3];
      *(int *)(lVar24 + 0x1c) = *(int *)(lVar24 + 0x1c) + iVar10;
      *(int *)(lVar24 + 0x20) = *(int *)(lVar24 + 0x20) + (int)lVar26;
      *(int *)(lVar24 + 0x24) = *(int *)(lVar24 + 0x24) + iVar11;
      *(int *)(lVar24 + 0x28) = *(int *)(lVar24 + 0x28) + (int)plVar16[5];
      lVar24 = (long)(int)plVar16[2];
      lVar26 = plStack_338[0x19];
      auVar3 = *(undefined1 (*) [16])(plVar16 + 3);
      piVar1 = (int *)(lVar26 + 4 + lVar24 * 0x18);
      iVar10 = piVar1[1];
      iVar11 = piVar1[2];
      iVar12 = piVar1[3];
      piVar2 = (int *)(lVar26 + 4 + lVar24 * 0x18);
      *piVar2 = *piVar1 + auVar3._0_4_;
      piVar2[1] = iVar10 + auVar3._4_4_;
      piVar2[2] = iVar11 + auVar3._8_4_;
      piVar2[3] = iVar12 + auVar3._12_4_;
      piVar1 = (int *)(lVar26 + 0x14 + lVar24 * 0x18);
      *piVar1 = *piVar1 + (int)plVar16[5];
      plVar16 = (long *)*plVar16;
    } while (plVar16 != (long *)0x0);
  }
  param_2 = plStack_320;
  if (plStack_338[0x1f] != 0) {
    puVar23 = (undefined8 *)plStack_338[0x1e];
    while (puVar23 != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)*puVar23;
      func_0x0412a280(puVar23,0x30);
      puVar23 = puVar6;
    }
    plStack_338[0x1e] = 0;
    if (plStack_338[0x1d] != 0) {
      func_0x0eee2dd0(plStack_338[0x1c],0,plStack_338[0x1d] << 3);
    }
    plStack_338[0x1f] = 0;
  }
LAB_08aff4bd:
  plVar16 = (long *)plStack_338[0x47a];
  if (plVar16 != (long *)0x0) {
    cVar14 = (**(code **)(*plVar16 + 0x30))(plVar16,auStack_110);
    plVar16 = plStack_338 + 0x454;
    func_0x0412d680(plVar16);
    if (cVar14 == '\0') {
      *(undefined1 (*) [16])(plStack_338 + 0x473) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(plStack_338 + 0x471) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(plStack_338 + 0x46f) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(plStack_338 + 0x46d) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(plStack_338 + 0x46b) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(plStack_338 + 0x469) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(plStack_338 + 0x467) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(plStack_338 + 0x465) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(plStack_338 + 0x463) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(plStack_338 + 0x461) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(plStack_338 + 0x45f) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(plStack_338 + 0x45d) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(plStack_338 + 0x45b) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(plStack_338 + 0x459) = (undefined1  [16])0x0;
      func_0x0412d6b0(plVar16);
      lVar26 = _UNK_0eeed4d8;
      plStack_320 = _UNK_0eeed518;
      uVar19 = _UNK_0eeed520;
    }
    else {
      func_0x0eee2f00((undefined1 (*) [16])(plStack_338 + 0x459),auStack_110,0xe0);
      func_0x0412d6b0(plVar16);
      lVar26 = _UNK_0eeed4d8;
      plStack_320 = _UNK_0eeed518;
      uVar19 = _UNK_0eeed520;
    }
    _UNK_0eeed4d8 = lVar26;
    _UNK_0eeed518 = plStack_320;
    _UNK_0eeed520 = uVar19;
    if ((param_2 != (long *)0x0) &&
       (plVar16 = (long *)CONCAT44(uStack_2d8._4_4_,(uint)uStack_2d8),
       (int)plStack_338[0xc] == ((int)plStack_338[0xc] / 200) * 200)) {
      plVar27 = (long *)*param_2;
      plVar22 = (long *)param_2[1];
      if (plVar27 != plVar22) {
        plVar30 = plStack_338 + 7;
        puStack_2e0 = &UNK_0eeece20;
        do {
          uStack_2d8._4_4_ = (undefined4)((ulong)plVar16 >> 0x20);
          uStack_2d8._0_4_ = (uint)plVar16;
          uStack_2d8._0_4_ = (uint)uStack_2d8 & 0xffffff00;
          puStack_2c0 = (undefined *)((ulong)puStack_2c0 & 0xffffffffffffff00);
          if (((plVar27[1] == 0) || ((*(uint *)(plVar27 + 2) & 0x3ffff) == 0x3ffff)) ||
             (plVar16 = (long *)FUN_0412c300(), plVar16 == (long *)0x0)) {
LAB_08aff730:
            plVar16 = (long *)CONCAT44(uStack_2d8._4_4_,(uint)uStack_2d8);
          }
          else {
            lVar24 = *plVar27;
            if (lVar24 != 0) {
              uVar15 = *(uint *)(plVar27 + 2);
              uVar29 = (ulong)((uVar15 & 0x3ffff) >> 0xb);
              if (((uVar29 < (ulong)(*(long *)(lVar24 + 0xe0) - *(long *)(lVar24 + 0xd8) >> 3)) &&
                  (lVar25 = *(long *)(*(long *)(lVar24 + 0xd8) + uVar29 * 8), lVar25 != 0)) &&
                 ((uVar4 = *(uint *)(lVar25 + (ulong)(uVar15 & 0x7ff) * 4),
                  (uVar15 & 0xfffc0000 ^ uVar4) < 0x3ffff &&
                  ((ulong)(uVar4 & 0x3ffff) < *(ulong *)(lVar24 + 0x118))))) {
                uStack_2d8._0_4_ = (uint)lVar24;
                uStack_2d8._4_4_ = (undefined4)((ulong)lVar24 >> 0x20);
                plStack_2d0 = (long *)(lVar24 + 0x28);
                puStack_2c0 = (undefined *)CONCAT71(puStack_2c0._1_7_,1);
                uStack_2c8 = uVar15;
              }
            }
            LOCK();
            plVar17 = plVar16 + 1;
            lVar24 = *plVar17;
            *plVar17 = *plVar17 + -1;
            UNLOCK();
            if (lVar24 != 0) goto LAB_08aff730;
            (**(code **)(*plVar16 + 0x10))(plVar16);
            func_0x0412c2d0(plVar16);
            plVar16 = (long *)CONCAT44(uStack_2d8._4_4_,(uint)uStack_2d8);
          }
          if ((char)puStack_2c0 != '\0') {
            plVar17 = (long *)(plStack_2d0[7] +
                              (ulong)((int)((ulong)(plStack_2d0[8] - plStack_2d0[7]) >> 3) - 1U &
                                     0xf95d258f) * 8);
            do {
              plVar16 = (long *)CONCAT44(uStack_2d8._4_4_,(uint)uStack_2d8);
              if (*plVar17 == -1) goto LAB_08aff630;
              lVar24 = *plVar17 * 0x20;
              plVar17 = (long *)(plStack_2d0[10] + lVar24);
            } while (*(int *)(plStack_2d0[10] + 8 + lVar24) != -0x6a2da71);
            plVar16 = (long *)CONCAT44(uStack_2d8._4_4_,(uint)uStack_2d8);
            if ((plVar17 != (long *)plStack_2d0[0xb]) &&
               (lVar24 = plVar17[2], plVar16 = (long *)CONCAT44(uStack_2d8._4_4_,(uint)uStack_2d8),
               lVar24 != 0)) {
              uVar29 = (ulong)((uStack_2c8 & 0x3ffff) >> 0xb);
              plVar16 = (long *)CONCAT44(uStack_2d8._4_4_,(uint)uStack_2d8);
              if ((uVar29 < (ulong)(*(long *)(lVar24 + 0x10) - *(long *)(lVar24 + 8) >> 3)) &&
                 ((lVar24 = *(long *)(*(long *)(lVar24 + 8) + uVar29 * 8),
                  plVar16 = (long *)CONCAT44(uStack_2d8._4_4_,(uint)uStack_2d8), lVar24 != 0 &&
                  (plVar16 = (long *)CONCAT44(uStack_2d8._4_4_,(uint)uStack_2d8),
                  (uStack_2c8 & 0xfffc0000 ^ *(uint *)(lVar24 + (ulong)(uStack_2c8 & 0x7ff) * 4)) <
                  0x3ffff)))) {
                lVar24 = func_0x0b40c890(&uStack_2d8,1);
                plVar16 = (long *)CONCAT44(uStack_2d8._4_4_,(uint)uStack_2d8);
                if ((lVar24 != 0) &&
                   ((plVar16 = (long *)CONCAT44(uStack_2d8._4_4_,(uint)uStack_2d8), plVar27[1] != 0
                    && (plVar16 = (long *)CONCAT44(uStack_2d8._4_4_,(uint)uStack_2d8),
                       (*(uint *)(plVar27 + 2) & 0x3ffff) != 0x3ffff)))) {
                  plVar17 = (long *)FUN_0412c300();
                  plVar16 = (long *)CONCAT44(uStack_2d8._4_4_,(uint)uStack_2d8);
                  if (plVar17 != (long *)0x0) {
                    lVar25 = *plVar27;
                    if (lVar25 == 0) {
LAB_08aff90f:
                      bVar13 = false;
                    }
                    else {
                      uVar15 = *(uint *)(plVar27 + 2);
                      uVar29 = (ulong)((uVar15 & 0x3ffff) >> 0xb);
                      if ((((ulong)(*(long *)(lVar25 + 0xe0) - *(long *)(lVar25 + 0xd8) >> 3) <=
                            uVar29) ||
                          (lVar7 = *(long *)(*(long *)(lVar25 + 0xd8) + uVar29 * 8), lVar7 == 0)) ||
                         (uVar4 = *(uint *)(lVar7 + (ulong)(uVar15 & 0x7ff) * 4),
                         0x3fffe < (uVar15 & 0xfffc0000 ^ uVar4))) goto LAB_08aff90f;
                      if ((ulong)(uVar4 & 0x3ffff) < *(ulong *)(lVar25 + 0x118)) {
                        lStack_318 = lVar25 + 0x28;
                        bVar13 = true;
                        uStack_33c = uVar15;
                      }
                      else {
                        bVar13 = false;
                      }
                    }
                    LOCK();
                    plVar16 = plVar17 + 1;
                    lVar25 = *plVar16;
                    *plVar16 = *plVar16 + -1;
                    UNLOCK();
                    plStack_2f0 = plVar30;
                    if (lVar25 == 0) {
                      (**(code **)(*plVar17 + 0x10))(plVar17);
                      func_0x0412c2d0(plVar17);
                    }
                    plVar30 = plStack_2f0;
                    plVar16 = (long *)CONCAT44(uStack_2d8._4_4_,(uint)uStack_2d8);
                    if (bVar13) {
                      plVar17 = (long *)(*(long *)(lStack_318 + 0x38) +
                                        (ulong)(((uint)(*(int *)(lStack_318 + 0x40) -
                                                       (int)*(long *)(lStack_318 + 0x38)) >> 3) - 1
                                               & 0xb845379) * 8);
                      do {
                        if (*plVar17 == -1) {
                          plVar17 = *(long **)(lStack_318 + 0x58);
                          plVar20 = plVar17;
                          goto LAB_08aff9a7;
                        }
                        lVar25 = *plVar17 * 0x20;
                        plVar17 = (long *)(*(long *)(lStack_318 + 0x50) + lVar25);
                      } while (*(int *)(*(long *)(lStack_318 + 0x50) + 8 + lVar25) != 0xb845379);
                      plVar20 = *(long **)(lStack_318 + 0x58);
LAB_08aff9a7:
                      plVar16 = (long *)CONCAT44(uStack_2d8._4_4_,(uint)uStack_2d8);
                      if ((plVar17 != plVar20) &&
                         (lVar25 = plVar17[2],
                         plVar16 = (long *)CONCAT44(uStack_2d8._4_4_,(uint)uStack_2d8), lVar25 != 0)
                         ) {
                        uVar29 = (ulong)((uStack_33c & 0x3ffff) >> 0xb);
                        plVar16 = (long *)CONCAT44(uStack_2d8._4_4_,(uint)uStack_2d8);
                        if (((uVar29 < (ulong)(*(long *)(lVar25 + 0x10) - *(long *)(lVar25 + 8) >> 3
                                              )) &&
                            ((lVar7 = *(long *)(*(long *)(lVar25 + 8) + uVar29 * 8),
                             plVar16 = (long *)CONCAT44(uStack_2d8._4_4_,(uint)uStack_2d8),
                             lVar7 != 0 &&
                             (uVar15 = *(uint *)(lVar7 + (ulong)(uStack_33c & 0x7ff) * 4),
                             plVar16 = (long *)CONCAT44(uStack_2d8._4_4_,(uint)uStack_2d8),
                             (uStack_33c & 0xfffc0000 ^ uVar15) < 0x3ffff)))) &&
                           (lVar25 = *(long *)(*(long *)(lVar25 + 0x50) +
                                              (ulong)((uVar15 & 0x3ff80) >> 4)),
                           lStack_2e8 = (ulong)(uVar15 & 0x7f) * 0x1f8 + lVar25,
                           plVar16 = (long *)CONCAT44(uStack_2d8._4_4_,(uint)uStack_2d8),
                           lVar25 != 0)) {
                          plStack_2d0 = &lStack_2e8;
                          uStack_2d8 = plStack_2d0;
                          if ((ulong)*(uint *)(plStack_338 + 8) == 0xffffffff) goto LAB_08b00006;
                          apuStack_1b8[0] = &uStack_2d8;
                          plVar17 = (long *)(**(code **)(&UNK_0f13e3c8 +
                                                        (ulong)*(uint *)(plStack_338 + 8) * 8))
                                                      (apuStack_1b8,plStack_2f0);
                          plVar16 = uStack_2d8;
                          if (plVar17 != (long *)0x0) {
                            (**(code **)(*plVar17 + 0x18))(auStack_158,plVar17);
                            func_0x04886140(&uStack_2d8);
                            *(uint *)((long)&plStack_2d0 + uStack_2d8[-3]) =
                                 *(uint *)((long)&plStack_2d0 + uStack_2d8[-3]) | 0x20;
                            plVar16 = (long *)func_0x04885260(&uStack_2c8,&UNK_0127978f,6);
                            *(undefined8 *)((long)plVar16 + *(long *)(*plVar16 + -0x18) + 0x18) =
                                 0x14;
                            if ((*(byte *)(lVar24 + 0xb08) & 1) == 0) {
                              lVar24 = lVar24 + 0xb09;
                            }
                            else {
                              lVar24 = *(long *)(lVar24 + 0xb18);
                            }
                            uVar18 = strlen(lVar24);
                            uVar18 = func_0x04885260(plVar16,lVar24,uVar18);
                            plVar16 = (long *)func_0x04885260(uVar18,&UNK_013cc445,7);
                            *(undefined8 *)((long)plVar16 + *(long *)(*plVar16 + -0x18) + 0x18) =
                                 0x28;
                            uVar18 = *(undefined8 *)(lStack_2e8 + 0xb8);
                            uVar8 = *(undefined8 *)(lStack_2e8 + 0xc0);
                            uStack_198 = (uint)uVar18 & 0xffff;
                            uStack_1a8 = (uint)((ulong)uVar18 >> 0x10) & 0xffff;
                            uStack_168 = (uint)uVar8 & 0xffff;
                            apuStack_1b8[0] =
                                 (undefined8 *)
                                 CONCAT44(apuStack_1b8[0]._4_4_,(int)((ulong)uVar18 >> 0x20));
                            uStack_188 = (uint)(ushort)((ulong)uVar8 >> 0x30);
                            uStack_178 = (undefined4)((ulong)uVar8 >> 0x10);
                            func_0x0470d9a0(&bStack_308,&UNK_01287ba2,0x28,0x122112,apuStack_1b8);
                            puVar28 = &uStack_307;
                            if ((bStack_308 & 1) != 0) {
                              puVar28 = puStack_2f8;
                            }
                            uVar18 = strlen(puVar28);
                            uVar18 = func_0x04885260(plVar16,puVar28,uVar18);
                            plVar16 = (long *)func_0x04885260(uVar18,&UNK_013b3e99,10);
                            *(undefined8 *)((long)plVar16 + *(long *)(*plVar16 + -0x18) + 0x18) = 10
                            ;
                            uVar18 = func_0x0413b570(plVar16,uStack_140);
                            plVar16 = (long *)func_0x04885260(uVar18,&UNK_014001d3,7);
                            *(undefined8 *)((long)plVar16 + *(long *)(*plVar16 + -0x18) + 0x18) = 4;
                            uVar18 = func_0x0413bb70(plVar16,uStack_150);
                            plVar16 = (long *)func_0x04885260(uVar18,&UNK_013b3ea4,0xe);
                            *(undefined8 *)((long)plVar16 + *(long *)(*plVar16 + -0x18) + 0x18) = 8;
                            func_0x0413be50(uStack_13c,plVar16);
                            if ((bStack_308 & 1) != 0) {
                              func_0x0412a280(puStack_2f8,
                                              CONCAT71(uStack_307,bStack_308) & 0xfffffffffffffffe);
                            }
                            plVar16 = (long *)func_0x04885260(&uStack_2c8,&UNK_0122a31d,10);
                            *(undefined8 *)((long)plVar16 + *(long *)(*plVar16 + -0x18) + 0x18) = 4;
                            uVar18 = func_0x0413bb70(plVar16,uStack_148);
                            plVar16 = (long *)func_0x04885260(uVar18,&UNK_011db027,0x11);
                            *(undefined8 *)((long)plVar16 + *(long *)(*plVar16 + -0x18) + 0x18) = 8;
                            func_0x0413be50(uStack_138,plVar16);
                            func_0x04885260(&uStack_2c8,&UNK_013a8ff4,1);
                            uStack_2d8._0_4_ = (uint)lVar26;
                            uStack_2d8._4_4_ = (undefined4)((ulong)lVar26 >> 0x20);
                            *(long **)((long)&uStack_2d8 + *(long *)(lVar26 + -0x18)) = plStack_320;
                            uStack_2c8 = (uint)uVar19;
                            uStack_2c4 = (undefined4)((ulong)uVar19 >> 0x20);
                            puStack_2c0 = &UNK_0eeed150;
                            if ((bStack_280 & 1) != 0) {
                              func_0x0412a280(uStack_270,
                                              CONCAT71(uStack_27f,bStack_280) & 0xfffffffffffffffe);
                            }
                            puStack_2c0 = puStack_2e0;
                            func_0x04167a40(auStack_2b8);
                            func_0x0413c8a0(&uStack_2d8,&UNK_0eeed4e0);
                            func_0x04138180(auStack_258);
                            plVar16 = (long *)CONCAT44(uStack_2d8._4_4_,(uint)uStack_2d8);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
LAB_08aff630:
          plVar27 = plVar27 + 3;
        } while (plVar27 != plVar22);
      }
      plVar27 = (long *)plStack_338[0x11];
      if (plVar27 == (long *)0x0) {
        plVar22 = (long *)0x0;
        plVar30 = (long *)0x0;
        plStack_338 = (long *)0x0;
      }
      else {
        plStack_338 = (long *)0x0;
        plVar30 = (long *)0x0;
        plStack_320 = (long *)0x0;
        do {
          while (plVar30 < plStack_338) {
            plVar30[2] = *(long *)((long)plVar27 + 0x24);
            lVar26 = *(long *)((long)plVar27 + 0x1c);
            *plVar30 = *(long *)((long)plVar27 + 0x14);
            plVar30[1] = lVar26;
            plVar30 = plVar30 + 3;
            plVar27 = (long *)*plVar27;
            plVar22 = plStack_320;
            if (plVar27 == (long *)0x0) goto LAB_08afff68;
          }
          lVar26 = (long)plVar30 - (long)plStack_320;
          uVar29 = (lVar26 >> 3) * -0x5555555555555555 + 1;
          uStack_2d8 = plVar16;
          if (0xaaaaaaaaaaaaaaa < uVar29) {
            func_0x08b2a7a0();
LAB_08affff7:
            func_0x04882eb0();
            goto LAB_08affffc;
          }
          lVar25 = (long)plStack_338 - (long)plStack_320;
          lVar24 = lVar25 >> 3;
          uVar21 = lVar24 * 0x5555555555555556;
          if (uVar29 < uVar21) {
            uVar29 = uVar21;
          }
          if (0x555555555555554 < (ulong)(lVar24 * -0x5555555555555555)) {
            uVar29 = 0xaaaaaaaaaaaaaaa;
          }
          if (0xaaaaaaaaaaaaaaa < uVar29) goto LAB_08affff7;
          lVar24 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar29 * 0x18);
          if (lVar24 == 0) {
            FUN_0eec74c0(uVar29 * 0x18,0);
          }
          plStack_338 = (long *)(uVar29 * 0x18 + lVar24);
          *(undefined8 *)(lVar24 + 0x10 + lVar26) = *(undefined8 *)((long)plVar27 + 0x24);
          lVar7 = *(long *)((long)plVar27 + 0x1c);
          *(long *)(lVar24 + lVar26) = *(long *)((long)plVar27 + 0x14);
          ((long *)(lVar24 + lVar26))[1] = lVar7;
          uVar29 = SUB168(SEXT816(lVar26) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
          plVar30 = (long *)(lVar26 + lVar24 + 0x18);
          plVar22 = (long *)(lVar26 + lVar24 + ((uVar29 >> 2) - ((long)uVar29 >> 0x3f)) * 0x18);
          func_0x0eee2f00(plVar22,plStack_320,lVar26);
          plVar16 = uStack_2d8;
          if (plStack_320 != (long *)0x0) {
            func_0x0412a280(plStack_320,lVar25);
            plVar16 = uStack_2d8;
          }
          plVar27 = (long *)*plVar27;
          plStack_320 = plVar22;
        } while (plVar27 != (long *)0x0);
      }
LAB_08afff68:
      uVar29 = ((long)plVar30 - (long)plVar22 >> 3) * -0x5555555555555555;
      lVar26 = 0x3f;
      if (uVar29 != 0) {
        for (; uVar29 >> lVar26 == 0; lVar26 = lVar26 + -1) {
        }
      }
      uVar15 = 0;
      if (plVar30 != plVar22) {
        uVar15 = ((uint)lVar26 ^ 0x3f) * 2 ^ 0x7e;
      }
      uStack_2d8 = plVar16;
      func_0x08b2aa90(plVar22,plVar30,uVar15,1);
      func_0x08b2c320(plVar22,plVar30,uVar15,1);
      if (plVar22 != (long *)0x0) {
        func_0x0412a280(plVar22,(long)plStack_338 - (long)plVar22);
      }
    }
  }
  return;
}


