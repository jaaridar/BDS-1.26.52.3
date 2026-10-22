/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xbe209f0 (ELF vaddr 0xbd209f0)
 * Label: callee-of:0xc961580
 * Body:  [[0be209f0, 0be20a30] [0be20a40, 0be20aa2] [0be20ab0, 0be20aec] [0be218b0, 0be22a71] [0be22a7f, 0be22a8a] [0be22ad0, 0be22b28] [0be22b4f, 0be22b5c]]
 * Ghidra: FUN_0be209f0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0be209f0(long param_1,long *param_2)

{
  ulong *puVar1;
  byte *pbVar2;
  undefined4 uVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  long lVar7;
  ulong *puVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  byte *pbVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long *plVar15;
  short sVar16;
  long *plVar17;
  byte bVar18;
  uint uVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  bool bVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  long *plStack_1a0;
  ulong uStack_198;
  int iStack_190;
  undefined4 uStack_18c;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long *plStack_178;
  byte bStack_160;
  undefined4 uStack_15f;
  undefined4 uStack_15b;
  undefined4 uStack_157;
  undefined4 uStack_153;
  undefined4 uStack_14f;
  undefined3 uStack_14b;
  ulong *puStack_148;
  byte *pbStack_140;
  undefined4 uStack_138;
  char cStack_130;
  ulong *puStack_128;
  byte *pbStack_120;
  undefined4 uStack_118;
  char cStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f0 [12];
  ulong *puStack_e0;
  ulong *puStack_d8;
  uint uStack_d0;
  undefined4 uStack_cc;
  byte bStack_c8;
  undefined7 uStack_c7;
  undefined8 uStack_b8;
  byte bStack_b0;
  undefined7 uStack_af;
  undefined8 uStack_a0;
  byte bStack_98;
  undefined7 uStack_97;
  undefined8 uStack_88;
  byte bStack_78;
  undefined7 uStack_77;
  undefined8 uStack_68;
  undefined8 uStack_58;
  int iStack_50;
  long lStack_48;
  ulong uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *param_2;
  if (*(long *)(param_1 + 0x130) == lStack_28) {
    return;
  }
  *(long *)(param_1 + 0x130) = lStack_28;
  uStack_30 = 0xbe20a14;
  func_0x0be20af0();
  uStack_30 = 0xbe20a1c;
  func_0x0be20bd0(param_1);
  lVar21 = *(long *)(param_1 + 0x50);
  lVar7 = *(long *)(param_1 + 0x58);
  if (lVar7 != lVar21) {
    lVar24 = 0;
    uVar22 = 0;
    do {
      if (*(int *)(*(long *)(lVar21 + lVar24) + 0xac) == 0) {
        uStack_30 = 0xbe20a7e;
        func_0x0be25ea0(param_1);
      }
      else {
        uStack_30 = 0xbe20a48;
        func_0x0be26480(param_1,lVar21 + lVar24);
      }
      uVar22 = uVar22 + 1;
      lVar21 = *(long *)(param_1 + 0x50);
      lVar7 = *(long *)(param_1 + 0x58);
      lVar24 = lVar24 + 0x10;
    } while (uVar22 < (ulong)(lVar7 - lVar21 >> 4));
  }
  for (; lVar21 != lVar7; lVar7 = lVar7 + -0x10) {
    plVar9 = *(long **)(lVar7 + -8);
    if (plVar9 != (long *)0x0) {
      LOCK();
      plVar17 = plVar9 + 1;
      lVar24 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        uStack_30 = 0xbe20ae0;
        (**(code **)(*plVar9 + 0x10))(plVar9);
        uStack_30 = 0xbe20ae8;
        func_0x0412c2d0(plVar9);
      }
    }
  }
  *(long *)(param_1 + 0x58) = lVar21;
  plVar17 = (long *)(param_1 + 0x138);
  plVar9 = (long *)*plVar17;
  lVar7 = (**(code **)(*plVar9 + 0xab8))(plVar9);
  lVar21 = *(long *)(lVar7 + 0x18);
  if (lVar21 == 0) {
    return;
  }
  if ((int)((ulong)(*(long *)(lVar7 + 0x20) - lVar21) >> 4) * -0x11111111 < 8) {
    return;
  }
  if (*(int *)(lVar21 + 0x698) != 1) {
    func_0x04931450();
LAB_0be22a56:
    func_0x04890760();
LAB_0be22a5b:
    func_0x04882eb0();
LAB_0be22a60:
    uVar13 = func_0x0be33410();
    uVar13 = func_0x04882e20(uVar13);
    func_0x0536d190(&puStack_148);
    func_0x0624dd30(&puStack_128);
    if (puStack_d8 != (ulong *)0x0) {
      func_0x0412c2d0();
      uVar13 = func_0x0eee2d70(uVar13);
      func_0x04a3a0b0(&puStack_e0);
      uVar13 = func_0x0eee2d70(uVar13);
      if ((bStack_160 & 1) != 0) {
        func_0x0412a280(CONCAT35(uStack_14b,CONCAT41(uStack_14f,uStack_153._3_1_)),
                        CONCAT35((undefined3)uStack_15b,CONCAT41(uStack_15f,bStack_160)) &
                        0xfffffffffffffffe);
      }
    }
    func_0x0eee2d70(uVar13);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (*(char *)(lVar21 + 0x694) != '\x01') {
    return;
  }
  (**(code **)(*plVar9 + 0x3b0))(&puStack_e0,plVar9);
  puVar8 = puStack_d8;
  if (puStack_e0 == (ulong *)0x0) {
    bVar26 = false;
    if (puStack_d8 != (ulong *)0x0) goto LAB_0be2195b;
LAB_0be21971:
    if (bVar26) {
      return;
    }
  }
  else {
    bVar26 = *(char *)((long)puStack_e0 + 2) == '\x01';
    if (puStack_d8 == (ulong *)0x0) goto LAB_0be21971;
LAB_0be2195b:
    LOCK();
    puVar1 = puStack_d8 + 1;
    uVar22 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if (uVar22 != 0) goto LAB_0be21971;
    (**(code **)(*puStack_d8 + 0x10))(puStack_d8);
    func_0x0412c2d0(puVar8);
    if (bVar26) {
      return;
    }
  }
  if (*(char *)(plVar9[0xe9] + 0xf8) != '\x01') {
    return;
  }
  if (*(char *)(plVar9[0xe9] + 0x70) != '\x01') {
    return;
  }
  if ((*(char *)(param_1 + 0x148) == '\0') &&
     (puVar8 = (ulong *)(**(code **)(*(long *)*plVar17 + 0x280))(),
     *(ulong *)(param_1 + 0x140) <= *puVar8)) {
    plVar9 = (long *)(**(code **)(*(long *)*plVar17 + 0x280))();
    *(long *)(param_1 + 0x140) = *plVar9 + 24000;
    plVar9 = (long *)(**(code **)(*(long *)*plVar17 + 0xa70))();
    fVar27 = (float)(**(code **)(*plVar9 + 0x30))(plVar9);
    iVar6 = *(int *)(param_1 + 0x14c);
    uVar22 = (_DAT_0f6d0078 - _DAT_0f6d0070 >> 2) - 1;
    if ((ulong)(long)iVar6 <= uVar22) {
      uVar22 = (long)iVar6;
    }
    if (*(float *)(_DAT_0f6d0070 + uVar22 * 4) <= fVar27) {
      iVar6 = iVar6 + 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x148) = 1;
      iVar6 = 0;
    }
    *(int *)(param_1 + 0x14c) = iVar6;
    func_0x0be268b0(plVar17);
  }
  if (*(char *)(param_1 + 0x148) != '\x01') {
    return;
  }
  plVar10 = (long *)(**(code **)(*(long *)*plVar17 + 0xa28))();
  plVar9 = (long *)*plVar10;
  plVar10 = (long *)plVar10[1];
  if (plVar9 == plVar10) {
    plStack_1a0 = (long *)0x0;
    plVar15 = (long *)0x0;
    plVar11 = (long *)0x0;
  }
  else {
    uStack_188 = (long *)0x0;
    plStack_1a0 = (long *)0x0;
    plStack_178 = (long *)0x0;
    do {
      puStack_e0 = (ulong *)((ulong)puStack_e0 & 0xffffffffffffff00);
      bStack_c8 = 0;
      if (((plVar9[1] != 0) && ((*(uint *)(plVar9 + 2) & 0x3ffff) != 0x3ffff)) &&
         (plVar11 = (long *)func_0x0412c300(), plVar11 != (long *)0x0)) {
        puVar8 = (ulong *)*plVar9;
        if (puVar8 != (ulong *)0x0) {
          uVar19 = *(uint *)(plVar9 + 2);
          uVar22 = (ulong)((uVar19 & 0x3ffff) >> 0xb);
          if (((uVar22 < (ulong)((long)(puVar8[0x1c] - puVar8[0x1b]) >> 3)) &&
              (lVar21 = *(long *)(puVar8[0x1b] + uVar22 * 8), lVar21 != 0)) &&
             ((uVar4 = *(uint *)(lVar21 + (ulong)(uVar19 & 0x7ff) * 4),
              (uVar19 & 0xfffc0000 ^ uVar4) < 0x3ffff && ((ulong)(uVar4 & 0x3ffff) < puVar8[0x23])))
             ) {
            puStack_d8 = puVar8 + 5;
            bStack_c8 = 1;
            puStack_e0 = puVar8;
            uStack_d0 = uVar19;
          }
        }
        LOCK();
        plVar15 = plVar11 + 1;
        lVar21 = *plVar15;
        *plVar15 = *plVar15 + -1;
        UNLOCK();
        if (lVar21 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          func_0x0412c2d0(plVar11);
        }
      }
      if (bStack_c8 != 0) {
        plVar11 = (long *)(puStack_d8[7] +
                          (ulong)((int)(puStack_d8[8] - puStack_d8[7] >> 3) - 1U & 0xf95d258f) * 8);
        do {
          if (*plVar11 == -1) goto LAB_0be21ac0;
          lVar21 = *plVar11 * 0x20;
          plVar11 = (long *)(puStack_d8[10] + lVar21);
        } while (*(int *)(puStack_d8[10] + 8 + lVar21) != -0x6a2da71);
        if ((plVar11 != (long *)puStack_d8[0xb]) && (lVar21 = plVar11[2], lVar21 != 0)) {
          uVar22 = (ulong)((uStack_d0 & 0x3ffff) >> 0xb);
          if ((uVar22 < (ulong)(*(long *)(lVar21 + 0x10) - *(long *)(lVar21 + 8) >> 3)) &&
             (((lVar21 = *(long *)(*(long *)(lVar21 + 8) + uVar22 * 8), lVar21 != 0 &&
               ((uStack_d0 & 0xfffc0000 ^ *(uint *)(lVar21 + (ulong)(uStack_d0 & 0x7ff) * 4)) <
                0x3ffff)) && (lVar21 = func_0x0b40c890(&puStack_e0,0), lVar21 != 0)))) {
            lVar7 = *(long *)(lVar21 + 0x10);
            uVar19 = *(uint *)(lVar21 + 0x18);
            plVar11 = (long *)(*(long *)(lVar7 + 0x38) +
                              (ulong)((int)((ulong)(*(long *)(lVar7 + 0x40) -
                                                   *(long *)(lVar7 + 0x38)) >> 3) - 1U & 0xaf993816)
                              * 8);
            do {
              if (*plVar11 == -1) {
                plVar15 = *(long **)(lVar7 + 0x58);
                plVar11 = plVar15;
                goto LAB_0be21d1a;
              }
              lVar24 = *plVar11 * 0x20;
              plVar11 = (long *)(*(long *)(lVar7 + 0x50) + lVar24);
            } while (*(int *)(*(long *)(lVar7 + 0x50) + 8 + lVar24) != -0x5066c7ea);
            plVar15 = *(long **)(lVar7 + 0x58);
LAB_0be21d1a:
            if ((plVar11 == plVar15) || (lVar7 = plVar11[2], lVar7 == 0)) goto LAB_0be22a56;
            uVar22 = (ulong)((uVar19 & 0x3ffff) >> 0xb);
            if ((((ulong)(*(long *)(lVar7 + 0x10) - *(long *)(lVar7 + 8) >> 3) <= uVar22) ||
                ((lVar24 = *(long *)(*(long *)(lVar7 + 8) + uVar22 * 8), lVar24 == 0 ||
                 (uVar4 = *(uint *)(lVar24 + (ulong)(uVar19 & 0x7ff) * 4),
                 0x3fffe < (uVar19 & 0xfffc0000 ^ uVar4))))) ||
               (lVar7 = *(long *)(*(long *)(lVar7 + 0x50) + (ulong)(uVar4 >> 4 & 0x3ff8)),
               lVar7 == 0)) goto LAB_0be22a56;
            if (*(int *)(lVar7 + (ulong)(uVar4 & 0x7f) * 4) == 0) {
              if (plStack_1a0 < plStack_178) {
                *plStack_1a0 = lVar21;
                plStack_1a0 = plStack_1a0 + 1;
              }
              else {
                lVar7 = (long)plStack_1a0 - (long)uStack_188;
                lStack_38 = lVar7 >> 3;
                uVar22 = lStack_38 + 1;
                if (uVar22 >> 0x3d != 0) goto LAB_0be22a60;
                uStack_40 = (long)plStack_178 - (long)uStack_188;
                uVar25 = (long)uStack_40 >> 2;
                if ((ulong)((long)uStack_40 >> 2) <= uVar22) {
                  uVar25 = uVar22;
                }
                if (0x7ffffffffffffff7 < uStack_40) {
                  uVar25 = 0x1fffffffffffffff;
                }
                if (0x1fffffffffffffff < uVar25) goto LAB_0be22a5b;
                lStack_48 = uVar25 * 8;
                uStack_108 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
                if (uStack_108 == (long *)0x0) {
                  func_0x0eec74c0(lStack_48,0);
                }
                plVar11 = uStack_188;
                plStack_178 = (long *)((long)uStack_108 + uVar25 * 8);
                *(long *)((long)uStack_108 + lVar7) = lVar21;
                plStack_1a0 = (long *)((long)uStack_108 + lVar7 + 8);
                uStack_108 = (long *)((long)uStack_108 + lVar7 + lStack_38 * -8);
                func_0x0eee2f00(uStack_108,uStack_188);
                if (plVar11 != (long *)0x0) {
                  func_0x0412a280(plVar11,uStack_40);
                }
                uStack_188 = uStack_108;
              }
            }
          }
        }
      }
LAB_0be21ac0:
      plVar9 = plVar9 + 3;
      plVar15 = plStack_178;
      plVar11 = uStack_188;
    } while (plVar9 != plVar10);
  }
  uVar22 = (long)plStack_1a0 - (long)plVar11 >> 3;
  if (uVar22 == 0) {
    if (plVar11 == (long *)0x0) {
      return;
    }
    uVar22 = (long)plVar15 - (long)plVar11;
    goto LAB_0be22077;
  }
  plVar9 = plVar11;
  if (uVar22 != 1) {
    plVar9 = (long *)(**(code **)(*(long *)*plVar17 + 0xa70))();
    iVar6 = (**(code **)(*plVar9 + 0x18))(plVar9,uVar22 & 0xffffffff);
    plVar9 = plVar11 + iVar6;
  }
  lVar21 = *plVar9;
  func_0x0412a280(plVar11,(long)plVar15 - (long)plVar11);
  if (lVar21 == 0) {
    return;
  }
  if ((*(long *)(param_1 + 0x150) != -1) &&
     (lVar7 = (**(code **)(*(long *)*plVar17 + 0x1f8))
                        ((long *)*plVar17,*(long *)(param_1 + 0x150),0), lVar7 != 0)) {
    uStack_198 = uStack_198 & 0xffffffffffffff00;
    (**(code **)(*(long *)*plVar17 + 0x38))(&puStack_e0,(long *)*plVar17,0);
    if (puStack_d8 == (ulong *)0x0) {
      return;
    }
    pbVar12 = (byte *)func_0x0412c300();
    puVar8 = puStack_e0;
    pbStack_120 = pbVar12;
    if (pbVar12 == (byte *)0x0) {
      if (puStack_d8 == (ulong *)0x0) {
        return;
      }
      func_0x0412c2d0();
      return;
    }
    puStack_128 = puStack_e0;
    if ((puStack_e0 == (ulong *)0x0) ||
       (lVar7 = (**(code **)(*puStack_e0 + 0x60))(puStack_e0,*(undefined8 *)(param_1 + 0x150),0),
       lVar7 == 0)) {
      bVar18 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(*(undefined8 **)(lVar7 + 0x208) + 1);
      uStack_188 = (long *)**(undefined8 **)(lVar7 + 0x208);
      uStack_180 = 0;
      plStack_178 = (long *)func_0x0eee4390();
      fVar27 = (float)func_0x0eee4390(uStack_188._4_4_);
      bStack_160 = (byte)(int)plStack_178._0_4_;
      uStack_15f = (undefined4)(CONCAT44((int)fVar27,(int)plStack_178._0_4_) >> 8);
      uStack_15b._0_3_ = (undefined3)((uint)(int)fVar27 >> 8);
      fVar27 = (float)func_0x0eee4390(uVar3);
      uStack_15b._3_1_ = (undefined1)(int)fVar27;
      uStack_157._0_3_ = (undefined3)((uint)(int)fVar27 >> 8);
      puStack_148 = &uStack_198;
      pbStack_140 = &bStack_160;
      (**(code **)(*puVar8 + 0x58))(puVar8,&UNK_0be333a0,&puStack_148);
      bVar18 = (byte)uStack_198 ^ 1;
    }
    LOCK();
    pbVar2 = pbVar12 + 8;
    lVar7 = *(long *)pbVar2;
    *(long *)pbVar2 = *(long *)pbVar2 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*(long *)pbVar12 + 0x10))(pbVar12);
      func_0x0412c2d0(pbVar12);
    }
    if (puStack_d8 != (ulong *)0x0) {
      func_0x0412c2d0();
    }
    if (bVar18 == 0) {
      return;
    }
  }
  plVar11 = (long *)func_0x0412c300(*(undefined8 *)(lVar21 + 0x1c8));
  plVar10 = *(long **)(lVar21 + 0x1c0);
  LOCK();
  plVar9 = plVar11 + 1;
  lVar7 = *plVar9;
  *plVar9 = *plVar9 + -1;
  UNLOCK();
  if (lVar7 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    func_0x0412c2d0(plVar11);
  }
  plStack_178 = (long *)(**(code **)(*plVar10 + 0x68))(plVar10);
  uVar3 = *(undefined4 *)(*(undefined8 **)(lVar21 + 0x208) + 1);
  uStack_108 = (long *)**(undefined8 **)(lVar21 + 0x208);
  uStack_100 = 0;
  uStack_188 = (long *)func_0x0eee4390();
  fVar27 = (float)func_0x0eee4390(uStack_108._4_4_);
  uStack_58 = CONCAT44((int)fVar27,(int)(float)uStack_188);
  fVar27 = (float)func_0x0eee4390(uVar3);
  iStack_50 = (int)fVar27;
  uVar22 = 0;
  (**(code **)(*(long *)*plVar17 + 0x38))(&puStack_e0,(long *)*plVar17,0);
  if (puStack_d8 == (ulong *)0x0) {
    uVar25 = 0;
LAB_0be224b8:
    uVar23 = 0;
    uVar20 = 0;
  }
  else {
    pbStack_120 = (byte *)func_0x0412c300();
    if (pbStack_120 == (byte *)0x0) {
      uVar22 = 0;
      uVar25 = 0;
      goto LAB_0be224b8;
    }
    puStack_128 = puStack_e0;
    if ((puStack_e0 == (ulong *)0x0) || (plVar9 = (long *)puStack_e0[0x7b], plVar9 == (long *)0x0))
    {
      uVar22 = 0;
      uVar25 = 0;
LAB_0be22492:
      pbVar2 = pbStack_120;
      LOCK();
      pbVar12 = pbStack_120 + 8;
      lVar7 = *(long *)pbVar12;
      *(long *)pbVar12 = *(long *)pbVar12 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*(long *)pbStack_120 + 0x10))(pbStack_120);
        func_0x0412c2d0(pbVar2);
      }
      goto LAB_0be224b8;
    }
    (**(code **)(*plVar9 + 0x10))(&bStack_160,plVar9,&uStack_58,0x18,0xffffffff);
    puStack_148 = (ulong *)0x0;
    if (CONCAT35((undefined3)uStack_153,CONCAT41(uStack_157,uStack_15b._3_1_)) == 0) {
      uVar22 = 0;
      uVar25 = 0;
LAB_0be22485:
      if (pbStack_120 == (byte *)0x0) goto LAB_0be224b8;
      goto LAB_0be22492;
    }
    pbVar12 = (byte *)func_0x0412c300();
    if (pbVar12 == (byte *)0x0) {
      puVar8 = (ulong *)0x0;
    }
    else {
      puVar8 = (ulong *)CONCAT35((undefined3)uStack_15b,CONCAT41(uStack_15f,bStack_160));
      puStack_148 = puVar8;
    }
    pbStack_140 = pbVar12;
    if (CONCAT35((undefined3)uStack_153,CONCAT41(uStack_157,uStack_15b._3_1_)) != 0) {
      func_0x0412c2d0();
    }
    if (puVar8 == (ulong *)0x0) {
      uVar25 = 0;
      uVar22 = 0;
LAB_0be2245b:
      if (pbVar12 != (byte *)0x0) {
        LOCK();
        pbVar2 = pbVar12 + 8;
        lVar7 = *(long *)pbVar2;
        *(long *)pbVar2 = *(long *)pbVar2 + -1;
        UNLOCK();
        if (lVar7 == 0) {
          (**(code **)(*(long *)pbVar12 + 0x10))(pbVar12);
          func_0x0412c2d0(pbVar12);
        }
      }
      goto LAB_0be22485;
    }
    func_0x0be1c9a0(&uStack_198,puVar8,1,&uStack_58);
    lVar7 = CONCAT44(uStack_18c,iStack_190);
    if (lVar7 == 0) {
LAB_0be22451:
      uVar22 = 0;
      uVar25 = 0;
      pbVar12 = pbStack_140;
      goto LAB_0be2245b;
    }
    plVar9 = (long *)func_0x0412c300(lVar7);
    uVar22 = uStack_198;
    uStack_15b._3_1_ = SUB81(plVar9,0);
    uStack_157 = (undefined4)((ulong)plVar9 >> 8);
    uStack_153._0_3_ = (undefined3)((ulong)plVar9 >> 0x28);
    if (plVar9 == (long *)0x0) {
      func_0x0412c2d0(lVar7);
      goto LAB_0be22451;
    }
    bStack_160 = (byte)uStack_198;
    uStack_15f = (undefined4)(uStack_198 >> 8);
    uStack_15b._0_3_ = (undefined3)(uStack_198 >> 0x28);
    func_0x0412c2d0(lVar7);
    if (uVar22 == 0) {
      uVar25 = 0;
      uVar22 = 0;
LAB_0be22a23:
      LOCK();
      plVar10 = plVar9 + 1;
      lVar7 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      pbVar12 = pbStack_140;
      if (lVar7 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        func_0x0412c2d0(plVar9);
        pbVar12 = pbStack_140;
      }
      goto LAB_0be2245b;
    }
    plVar10 = (long *)(**(code **)(*(long *)*plVar17 + 0xa70))();
    iVar6 = (**(code **)(*plVar10 + 0x18))(plVar10,2);
    fVar27 = (float)(**(code **)(*plVar10 + 0x30))(plVar10);
    fVar27 = fVar27 * _DAT_01198934;
    fVar28 = (float)func_0x0eee3810();
    uStack_188 = (long *)CONCAT44(uStack_188._4_4_,(float)(iVar6 + 1));
    fVar28 = (float)func_0x0eee4390(fVar28 * (float)(iVar6 + 1));
    fVar27 = (float)func_0x0eee3830(fVar27);
    fVar27 = (float)func_0x0eee4390(fVar27 * (float)uStack_188);
    iStack_190 = (int)fVar27 + *(int *)(uVar22 + 0x88);
    uStack_198 = (ulong)(uint)((int)fVar28 + *(int *)(uVar22 + 0x80));
    auStack_f0 = func_0x0c9d61d0(plStack_178,&uStack_198);
    auVar29 = func_0x0be26ce0(auStack_f0,plStack_178);
    uVar25 = auVar29._8_8_;
    uVar22 = auVar29._0_8_ >> 8;
    if ((uVar25 & 0x100000000) == 0) goto LAB_0be22a23;
    LOCK();
    plVar10 = plVar9 + 1;
    lVar7 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      func_0x0412c2d0(plVar9);
    }
    pbVar12 = pbStack_140;
    if (pbStack_140 != (byte *)0x0) {
      LOCK();
      pbVar2 = pbStack_140 + 8;
      lVar7 = *(long *)pbVar2;
      *(long *)pbVar2 = *(long *)pbVar2 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*(long *)pbStack_140 + 0x10))(pbStack_140);
        func_0x0412c2d0(pbVar12);
      }
    }
    pbVar12 = pbStack_120;
    if (pbStack_120 != (byte *)0x0) {
      LOCK();
      pbVar2 = pbStack_120 + 8;
      lVar7 = *(long *)pbVar2;
      *(long *)pbVar2 = *(long *)pbVar2 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*(long *)pbStack_120 + 0x10))(pbStack_120);
        func_0x0412c2d0(pbVar12);
      }
    }
    uVar20 = auVar29._0_8_ & 0xff;
    uVar23 = uVar25 & 0xff00000000;
  }
  if (puStack_d8 != (ulong *)0x0) {
    func_0x0412c2d0();
  }
  uVar20 = uVar22 << 8 | uVar20;
  iStack_190 = (int)uVar25;
  uVar22 = uVar23 >> 0x20;
  uStack_18c = CONCAT31(uStack_18c._1_3_,(char)(uVar23 >> 0x20));
  uStack_198 = uVar20;
  if ((uVar23 >> 0x20 & 1) == 0) {
    plVar9 = (long *)(**(code **)(*(long *)*plVar17 + 0xa70))();
    fVar27 = (float)(**(code **)(*plVar9 + 0x30))(plVar9);
    if (fVar27 < _DAT_01198bc8) {
      uVar3 = (*(undefined4 **)(lVar21 + 0x208))[2];
      fVar27 = (float)func_0x0eee4390(**(undefined4 **)(lVar21 + 0x208));
      uStack_188 = (long *)CONCAT44(uStack_188._4_4_,(int)fVar27);
      fVar27 = (float)func_0x0eee4390(uVar3);
      plVar9 = plStack_178;
      uStack_108 = (long *)CONCAT44(uStack_108._4_4_,(int)fVar27);
      iVar6 = 10;
      do {
        plVar10 = (long *)(**(code **)(*(long *)*plVar17 + 0xa70))();
        fVar27 = (float)(**(code **)(*plVar10 + 0x30))(plVar10);
        fVar27 = fVar27 * _DAT_01198934;
        fVar28 = (float)func_0x0eee3810();
        fVar28 = (float)func_0x0eee4390(fVar28 * _DAT_01198644);
        uVar19 = (int)fVar28 + (int)(float)uStack_188;
        uVar20 = (ulong)uVar19;
        fVar27 = (float)func_0x0eee3830(fVar27);
        fVar27 = (float)func_0x0eee4390(fVar27 * _DAT_01198644);
        puStack_e0 = (ulong *)(ulong)uVar19;
        puStack_d8._0_4_ = (int)fVar27 + (int)uStack_108;
        lVar21 = (**(code **)(*plVar9 + 0x138))(plVar9,&puStack_e0);
        if (lVar21 == 0) {
          sVar16 = *(short *)((long)plVar9 + 0x42);
        }
        else {
          sVar16 = *(short *)(*(long *)(lVar21 + 0x30) + 0xa8) +
                   *(short *)(lVar21 + 0xbd0 +
                             (ulong)(((uint)puStack_d8 & 0xf) << 4 | (uint)puStack_e0 & 0xf) * 2);
        }
        puStack_e0 = (ulong *)(long)CONCAT24(sVar16,uVar19);
        auVar29 = func_0x0be26ce0(&puStack_e0,plVar9);
        if ((auVar29._8_8_ & 0x100000000) != 0) {
          uStack_198 = auVar29._0_8_ & 0xff;
          uVar25 = auVar29._8_8_ & 0xff00000000;
          goto LAB_0be22693;
        }
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      uVar25 = 0;
      uStack_198 = 0;
LAB_0be22693:
      uStack_198 = auVar29._0_8_ & 0xffffffffffffff00 | uStack_198;
      iStack_190 = auVar29._8_4_;
      uVar22 = uVar25 >> 0x20;
      uStack_18c = CONCAT31(uStack_18c._1_3_,(char)(uVar25 >> 0x20));
    }
  }
  bVar18 = (byte)uVar20;
  if ((uVar22 & 1) == 0) {
    return;
  }
  (**(code **)(*(long *)*plVar17 + 0x38))(&puStack_e0,(long *)*plVar17,0);
  if (puStack_d8 == (ulong *)0x0) {
    return;
  }
  pbVar12 = (byte *)func_0x0412c300();
  pbStack_120 = pbVar12;
  if (pbVar12 == (byte *)0x0) {
    bVar26 = false;
  }
  else {
    puStack_128 = puStack_e0;
    bVar26 = puStack_e0 != (ulong *)0x0;
    if (bVar26) {
      bVar18 = (**(code **)(*plStack_178 + 0x38))(plStack_178,&uStack_198);
    }
    LOCK();
    pbVar2 = pbVar12 + 8;
    lVar21 = *(long *)pbVar2;
    *(long *)pbVar2 = *(long *)pbVar2 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*(long *)pbVar12 + 0x10))(pbVar12);
      func_0x0412c2d0(pbVar12);
    }
  }
  if (puStack_d8 != (ulong *)0x0) {
    func_0x0412c2d0();
  }
  if ((bVar18 & bVar26) != 1) {
    return;
  }
  if (*(long *)(param_1 + 0x150) != -1) {
    lVar21 = (**(code **)(*(long *)*plVar17 + 0x1f8))((long *)*plVar17,*(long *)(param_1 + 0x150),0)
    ;
    if (lVar21 != 0) {
      plVar9 = (long *)(**(code **)(*(long *)*plVar17 + 0x1f8))
                                 ((long *)*plVar17,*(undefined8 *)(param_1 + 0x150),0);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x238))(plVar9);
      }
    }
  }
  uVar13 = (**(code **)(*(long *)*plVar17 + 0x908))();
  bStack_160 = 0x26;
  uStack_15f = _DAT_013bb748;
  uStack_15b = _UNK_013bb74c;
  uStack_157 = _UNK_013bb750;
  uStack_153._0_3_ = (undefined3)_UNK_013bb754;
  uStack_153 = CONCAT13(0x75,(undefined3)uStack_153);
  uStack_14f = 0x64656c;
  func_0x0b04d0a0(&puStack_e0,0x376,&bStack_160);
  if ((bStack_160 & 1) != 0) {
    func_0x0412a280(CONCAT35(uStack_14b,CONCAT41(uStack_14f,uStack_153._3_1_)),
                    CONCAT35((undefined3)uStack_15b,CONCAT41(uStack_15f,bStack_160)) &
                    0xfffffffffffffffe);
  }
  puStack_148 = (ulong *)CONCAT44((float)(int)(uStack_198 >> 0x20),(float)(int)uStack_198);
  pbStack_140 = (byte *)CONCAT44(pbStack_140._4_4_,(float)iStack_190);
  func_0x0b054630(&puStack_128,uVar13,&puStack_e0,0,&puStack_148,&UNK_01e7b238);
  if (cStack_110 == '\x01') {
    *(undefined8 *)(param_1 + 0x150) = 0xffffffffffffffff;
    puStack_148 = puStack_128;
    pbStack_140 = pbStack_120;
    uStack_138 = uStack_118;
    cStack_130 = '\x01';
    cStack_110 = '\0';
    lVar21 = (**(code **)(*(long *)*plVar17 + 0x160))((long *)*plVar17,plStack_178,&puStack_148);
    if (cStack_130 == '\x01') {
      cStack_130 = '\0';
      auStack_f0._0_4_ = uStack_138;
      func_0x0d87c640(puStack_148 + 5,auStack_f0);
    }
    if (lVar21 != 0) {
      puVar14 = (undefined8 *)func_0x0b3cf240(lVar21);
      *(undefined8 *)(param_1 + 0x150) = *puVar14;
      *(undefined1 *)(param_1 + 0x148) = 0;
      func_0x0be268b0(plVar17);
    }
  }
  if (cStack_110 == '\x01') {
    cStack_110 = '\0';
    auStack_f0._0_4_ = uStack_118;
    func_0x0d87c640(puStack_128 + 5,auStack_f0);
  }
  if ((bStack_78 & 1) != 0) {
    func_0x0412a280(uStack_68,CONCAT71(uStack_77,bStack_78) & 0xfffffffffffffffe);
  }
  if ((bStack_98 & 1) != 0) {
    func_0x0412a280(uStack_88,CONCAT71(uStack_97,bStack_98) & 0xfffffffffffffffe);
  }
  if ((bStack_b0 & 1) != 0) {
    func_0x0412a280(uStack_a0,CONCAT71(uStack_af,bStack_b0) & 0xfffffffffffffffe);
  }
  if ((bStack_c8 & 1) != 0) {
    func_0x0412a280(uStack_b8,CONCAT71(uStack_c7,bStack_c8) & 0xfffffffffffffffe);
  }
  if (((ulong)puStack_e0 & 1) == 0) {
    return;
  }
  plVar11 = (long *)CONCAT44(uStack_cc,uStack_d0);
  uVar22 = (ulong)puStack_e0 & 0xfffffffffffffffe;
LAB_0be22077:
  func_0x0412a280(plVar11,uVar22);
  return;
}



/* ---- referenced strings ----
 * 0x13bb748  minecraft:scheduled
 */
