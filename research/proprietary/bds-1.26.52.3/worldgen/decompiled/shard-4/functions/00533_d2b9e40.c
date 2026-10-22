/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd3b9e40 (ELF vaddr 0xd2b9e40)
 * Label: caller-of-callee
 * Body:  [[0d3b9e40, 0d3b9f89] [0d3b9f90, 0d3ba39d] [0d3ba3a0, 0d3ba3ee] [0d3ba3f0, 0d3ba451] [0d3ba460, 0d3ba96a] [0d3ba970, 0d3ba9c5] [0d3ba9d0, 0d3badfb] [0d3bae00, 0d3baeab] [0d3baeb0, 0d3baf1d] [0d3baf20, 0d3baf5b] [0d3baf60, 0d3baf8e] [0d3baf90, 0d3bafd6] [0d3bafe0, 0d3bb03b] [0d3bb040, 0d3bb13a] [0d3bb140, 0d3bb1cc] [0d3bb1d0, 0d3bb223] [0d3bb230, 0d3bb278] [0d3bb280, 0d3bb31b] [0d3bb320, 0d3bb3ac] [0d3bb3b0, 0d3bb403] [0d3bb410, 0d3bb458] [0d3bb460, 0d3bb5ea] [0d3bb5f0, 0d3bb675] [0d3bb680, 0d3bb88a] [0d3bb890, 0d3bba4c] [0d3bba50, 0d3bbb65] [0d3bbb70, 0d3bbc08] [0d3bbc10, 0d3bbc55] [0d3bbc60, 0d3bbd5d] [0d3bbd60, 0d3bbdde] [0d3bbde0, 0d3bbe6e] [0d3bbe70, 0d3bc15a] [0d3bc160, 0d3bc2e7] [0d3bc3c9, 0d3bc3e7] [0d3bc417, 0d3bc434]]
 * Ghidra: FUN_0d3b9e40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d3b9e40(long param_1,long param_2)

{
  byte *pbVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined4 *puVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  undefined4 uVar10;
  char cVar11;
  undefined2 uVar12;
  uint uVar13;
  long lVar14;
  byte *pbVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  int iVar23;
  long *plVar24;
  undefined8 *puVar25;
  ulong extraout_RDX;
  ulong uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  long *plVar29;
  long lVar30;
  byte *pbVar31;
  ulong uVar32;
  undefined8 *puVar33;
  ulong uVar34;
  ulong uVar35;
  undefined4 uVar36;
  undefined4 *puVar37;
  long lVar38;
  long *plVar39;
  bool bVar40;
  float fVar41;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_100;
  undefined4 uStack_f8;
  undefined1 uStack_f4;
  undefined1 uStack_f3;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  long lStack_e8;
  long *plStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 *puStack_b0;
  long lStack_a8;
  undefined1 uStack_99;
  long *plStack_98;
  undefined8 uStack_90;
  ulong *puStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar14 = *(long *)(param_1 + 0x88);
  for (lVar19 = *(long *)(param_1 + 0x90); lVar14 != lVar19; lVar19 = lVar19 + -0x28) {
    plVar20 = *(long **)(lVar19 + -8);
    *(undefined8 *)(lVar19 + -8) = 0;
    if (plVar20 != (long *)0x0) {
      (**(code **)(*plVar20 + 8))();
    }
  }
  *(long *)(param_1 + 0x90) = lVar14;
  lVar19 = *(long *)(param_1 + 0xa0);
  for (lVar14 = *(long *)(param_1 + 0xa8); lVar19 != lVar14; lVar14 = lVar14 + -0x38) {
    *(undefined **)(lVar14 + -0x20) = &UNK_0f47e0b0;
    func_0x0d6c9500(lVar14 + -0x18,*(undefined8 *)(lVar14 + -0x10));
  }
  *(long *)(param_1 + 0xa8) = lVar19;
  plStack_e0 = (long *)(param_1 + 0x38);
  if (*(long *)(param_1 + 0x50) != 0) {
    puVar33 = *(undefined8 **)(param_1 + 0x48);
    while (puVar33 != (undefined8 *)0x0) {
      puVar21 = (undefined8 *)*puVar33;
      func_0x0412a280(puVar33,0x20);
      puVar33 = puVar21;
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
    if (*(long *)(param_1 + 0x40) != 0) {
      memset(*plStack_e0,0,*(long *)(param_1 + 0x40) << 3);
    }
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  puStack_70 = (undefined8 *)&UNK_01da1ba9;
  uStack_68 = 4;
  lStack_b8 = param_2 + 8;
  lVar14 = func_0x0d6c97a0(lStack_b8,&puStack_70);
  lStack_a8 = param_2 + 0x10;
  if (lVar14 == lStack_a8) {
    lVar19 = 0;
  }
  else {
    lVar19 = 0;
    if (*(int *)(lVar14 + 0x60) == 9) {
      lVar19 = lVar14 + 0x38;
    }
  }
  uVar27 = 0;
  if (((0 < (int)((ulong)(*(long *)(lVar19 + 0x10) - (long)*(long **)(lVar19 + 8)) >> 3)) &&
      (plVar20 = (long *)**(long **)(lVar19 + 8), uVar27 = 0, plVar20 != (long *)0x0)) &&
     (cVar11 = (**(code **)(*plVar20 + 0x30))(plVar20), cVar11 == '\x03')) {
    uVar27 = (undefined4)plVar20[1];
  }
  uVar36 = 0;
  if ((1 < (int)((ulong)(*(long *)(lVar19 + 0x10) - *(long *)(lVar19 + 8)) >> 3)) &&
     (plVar20 = *(long **)(*(long *)(lVar19 + 8) + 8), plVar20 != (long *)0x0)) {
    cVar11 = (**(code **)(*plVar20 + 0x30))(plVar20);
    uVar36 = 0;
    if (cVar11 == '\x03') {
      uVar36 = (undefined4)plVar20[1];
    }
  }
  uVar28 = 0;
  if (((2 < (int)((ulong)(*(long *)(lVar19 + 0x10) - *(long *)(lVar19 + 8)) >> 3)) &&
      (plVar20 = *(long **)(*(long *)(lVar19 + 8) + 0x10), uVar28 = 0, plVar20 != (long *)0x0)) &&
     (cVar11 = (**(code **)(*plVar20 + 0x30))(plVar20), cVar11 == '\x03')) {
    uVar28 = (undefined4)plVar20[1];
  }
  *(undefined4 *)(param_1 + 0x28) = uVar27;
  *(undefined4 *)(param_1 + 0x2c) = uVar36;
  *(undefined4 *)(param_1 + 0x30) = uVar28;
  puStack_70 = (undefined8 *)&UNK_01da1bc1;
  uStack_68 = 6;
  lVar14 = func_0x0d6c97a0(lStack_b8,&puStack_70);
  if (lVar14 == lStack_a8) {
    lVar19 = 0;
  }
  else {
    lVar19 = 0;
    if (*(int *)(lVar14 + 0x60) == 8) {
      lVar19 = lVar14 + 0x38;
    }
  }
  pbVar15 = (byte *)(lVar19 + 8);
  if (lVar19 == 0) {
    pbVar15 = &UNK_01e79d90;
  }
  pbVar1 = (byte *)(param_1 + 0x10);
  if (pbVar1 != pbVar15) {
    bVar6 = *pbVar15;
    if ((*pbVar1 & 1) == 0) {
      if ((bVar6 & 1) == 0) {
        *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(pbVar15 + 0x10);
        uVar22 = *(undefined8 *)(pbVar15 + 8);
        *(undefined8 *)pbVar1 = *(undefined8 *)pbVar15;
        *(undefined8 *)(param_1 + 0x18) = uVar22;
      }
      else {
        func_0x04885070(pbVar1,*(undefined8 *)(pbVar15 + 0x10),*(undefined8 *)(pbVar15 + 8));
      }
    }
    else {
      bVar40 = (bVar6 & 1) != 0;
      pbVar31 = pbVar15 + 1;
      if (bVar40) {
        pbVar31 = *(byte **)(pbVar15 + 0x10);
      }
      uVar16 = (ulong)(bVar6 >> 1);
      if (bVar40) {
        uVar16 = *(ulong *)(pbVar15 + 8);
      }
      FUN_04885120(pbVar1,pbVar31,uVar16);
    }
  }
  puStack_70 = &uStack_68;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_d0 = func_0x0cc41df0(0xf6ff9e0,&DAT_0f6eaec0,1);
  uStack_118 = (long *)&UNK_01da1bd9;
  uStack_110 = (long *)0x7;
  lVar14 = func_0x0d6c97a0(lStack_b8);
  if (lVar14 == lStack_a8) {
    uStack_c8 = 0;
  }
  else {
    uStack_c8 = 0;
    if (*(int *)(lVar14 + 0x60) == 9) {
      uStack_c8 = lVar14 + 0x38;
    }
  }
  uVar13 = (uint)((ulong)(*(long *)(uStack_c8 + 0x10) - *(long *)(uStack_c8 + 8)) >> 3);
  if ((long)(int)uVar13 < 0) {
    fVar41 = (float)((ulong)(uVar13 & 1) | (ulong)(long)(int)uVar13 >> 1);
    fVar41 = fVar41 + fVar41;
  }
  else {
    fVar41 = (float)(int)uVar13;
  }
  fVar41 = (float)func_0x0eee3ab0(fVar41 / *(float *)(param_1 + 0x58));
  uVar34 = (long)(fVar41 - _DAT_01198778) & (long)fVar41 >> 0x3f | (long)fVar41;
  uVar16 = 2;
  if ((uVar34 == 1) || (uVar16 = uVar34, (uVar34 & uVar34 - 1) == 0)) {
    uVar34 = *(ulong *)(param_1 + 0x40);
    bVar40 = uVar16 < uVar34;
    if (uVar16 <= uVar34) goto LAB_0d3ba257;
LAB_0d3ba22f:
    func_0x0d3ce9d0(plStack_e0,uVar16);
  }
  else {
    uVar16 = func_0x0412c3f0();
    uVar34 = *(ulong *)(param_1 + 0x40);
    bVar40 = uVar16 < uVar34;
    if (uVar34 < uVar16) goto LAB_0d3ba22f;
LAB_0d3ba257:
    if (bVar40) {
      fVar41 = (float)func_0x0eee3ab0((float)*(ulong *)(param_1 + 0x50) / *(float *)(param_1 + 0x58)
                                     );
      uVar26 = (long)(fVar41 - _DAT_01198778) & (long)fVar41 >> 0x3f | (long)fVar41;
      if ((uVar34 < 3) ||
         (uVar32 = uVar34 - (uVar34 >> 1 & 0x5555555555555555),
         uVar32 = (uVar32 >> 2 & 0x3333333333333333) + (uVar32 & 0x3333333333333333),
         1 < (byte)(((uVar32 >> 4) + uVar32 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
        uVar26 = func_0x0412c3f0(uVar26);
      }
      else if (1 < uVar26) {
        lVar14 = 0x3f;
        if (uVar26 - 1 != 0) {
          for (; uVar26 - 1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        uVar26 = 1L << (-((byte)lVar14 ^ 0x3f) & 0x3f);
      }
      if (uVar16 <= uVar26) {
        uVar16 = uVar26;
      }
      if (uVar16 < uVar34) goto LAB_0d3ba22f;
    }
  }
  lVar14 = *(long *)(uStack_c8 + 8);
  uVar16 = *(long *)(uStack_c8 + 0x10) - lVar14;
  if (0xffffffff < (long)(uVar16 * 0x20000000)) {
    uStack_d8 = param_1 + 0x60;
    uVar34 = 0;
    do {
      if (uVar34 < (ulong)((long)uVar16 >> 3)) {
        cVar11 = (**(code **)(**(long **)(lVar14 + uVar34 * 8) + 0x30))();
        if (cVar11 != '\n') goto LAB_0d3ba3f0;
        lVar14 = *(long *)(lVar14 + uVar34 * 8);
      }
      else {
LAB_0d3ba3f0:
        lVar14 = 0;
      }
      uStack_118 = (long *)&UNK_0128d58c;
      uStack_110 = (long *)0x5;
      lVar19 = lVar14 + 8;
      lVar17 = func_0x0d6c97a0(lVar19,&uStack_118);
      lVar14 = lVar14 + 0x10;
      if ((lVar17 == lVar14) || (*(int *)(lVar17 + 0x60) != 10)) {
        uStack_118 = (long *)&UNK_012f0cac;
        uStack_110 = (long *)0x4;
        lVar17 = func_0x0d6c97a0(lVar19,&uStack_118);
        if (lVar17 != lVar14) {
          if ((ulong)*(uint *)(lVar17 + 0x60) == 0xffffffff) goto LAB_0d3bc2c0;
          uStack_f8 = (uint)&plStack_98;
          uStack_f4 = (undefined1)((ulong)&plStack_98 >> 0x20);
          uStack_f3 = (undefined1)((ulong)&plStack_98 >> 0x28);
          uStack_f2 = (undefined1)((ulong)&plStack_98 >> 0x30);
          uStack_f1 = (undefined1)((ulong)&plStack_98 >> 0x38);
          lVar17 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar17 + 0x60) * 8))
                             (&uStack_f8,lVar17 + 0x38);
          if (lVar17 != 0) {
            uStack_f8 = 0x12f0cac;
            uStack_f4 = 0;
            uStack_f3 = 0;
            uStack_f2 = 0;
            uStack_f1 = 0;
            uStack_f0._0_4_ = 4;
            uStack_f0._4_4_ = 0;
            lVar19 = func_0x0d6c97a0(lVar19,&uStack_f8);
            if (lVar19 == lVar14) {
              lVar14 = 0;
            }
            else {
              lVar14 = lVar19 + 0x38;
              if (*(int *)(lVar19 + 0x60) != 8) {
                lVar14 = 0;
              }
            }
            pbVar15 = (byte *)(lVar14 + 8);
            if (lVar14 == 0) {
              pbVar15 = &UNK_01e79d90;
            }
            if ((*pbVar15 & 1) == 0) {
              lStack_108 = *(long *)(pbVar15 + 0x10);
              uStack_118 = *(long **)pbVar15;
              uStack_110 = *(long **)(pbVar15 + 8);
            }
            else {
              func_0x0412e5e0(&uStack_118,*(undefined8 *)(pbVar15 + 0x10),
                              *(undefined8 *)(pbVar15 + 8));
            }
            lVar19 = lStack_108;
            plVar20 = uStack_118;
            plVar39 = (long *)((ulong)uStack_118 >> 1 & 0x7f);
            lVar14 = (long)&uStack_118 + 1;
            if (((ulong)uStack_118 & 1) != 0) {
              plVar39 = uStack_110;
              lVar14 = lStack_108;
            }
            uStack_f0 = (long *)CONCAT44(uStack_f0._4_4_,(undefined4)uStack_f0);
            if (9 < (long)plVar39) {
              lVar17 = lVar14;
              plVar29 = plVar39;
              while( true ) {
                plVar29 = (long *)func_0x0eee2ef0(lVar17,0x6d,(long)plVar29 + -9);
                if (plVar29 == (long *)0x0) break;
                if ((short)plVar29[1] == 0x3a74 && *plVar29 == 0x66617263656e696d) {
                  if ((long)plVar29 - lVar14 != -1 && plVar29 != (long *)(lVar14 + (long)plVar39)) {
                    lVar14 = lVar19 + 10;
                    if (((ulong)plVar20 & 1) == 0) {
                      lVar14 = (long)&uStack_110 + 3;
                    }
                    plVar39 = (long *)((long)plVar39 + -10);
                    if (plVar39 < (long *)0x17) {
                      uStack_f8 = CONCAT31(uStack_f8._1_3_,(char)plVar39 * '\x02');
                      lVar17 = (long)&uStack_f8 + 1;
                      if (plVar39 != (long *)0x0) goto LAB_0d3ba842;
                    /* WARNING: Ignoring partial resolution of indirect */
                      uStack_f8._1_1_ = 0;
                    }
                    else {
                      lVar19 = ((ulong)plVar39 | 7) + 1;
                      if (((ulong)plVar39 | 7) == 0x17) {
                        lVar19 = 0x1a;
                      }
                      lVar17 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar19);
                      if (lVar17 == 0) {
                        func_0x0eec74c0(lVar19,0);
                      }
                      uStack_f8 = (uint)lVar19 | 1;
                      uStack_f4 = (undefined1)((ulong)lVar19 >> 0x20);
                      uStack_f3 = (undefined1)((ulong)lVar19 >> 0x28);
                      uStack_f2 = (undefined1)((ulong)lVar19 >> 0x30);
                      uStack_f1 = (undefined1)((ulong)lVar19 >> 0x38);
                      lStack_e8 = lVar17;
                      uStack_f0 = plVar39;
LAB_0d3ba842:
                      memmove(lVar17,lVar14,plVar39);
                      *(undefined1 *)(lVar17 + (long)plVar39) = 0;
                    }
                    plVar20 = uStack_f0;
                    if (((ulong)uStack_118 & 1) != 0) {
                      func_0x0412a280(lStack_108,(ulong)uStack_118 & 0xfffffffffffffffe);
                      plVar20 = uStack_f0;
                    }
                    uStack_110 = plVar20;
                    lStack_108 = lStack_e8;
                    uStack_118 = (long *)CONCAT44(CONCAT13(uStack_f1,
                                                           CONCAT12(uStack_f2,
                                                                    CONCAT11(uStack_f3,uStack_f4))),
                                                  uStack_f8);
                    uStack_f0 = uStack_110;
                  }
                  break;
                }
                lVar17 = (long)plVar29 + 1;
                plVar29 = (long *)((lVar14 + (long)plVar39) - lVar17);
                if ((long)plVar29 < 10) break;
              }
            }
            lVar14 = func_0x0d379e60(&uStack_118);
            if (lVar14 == 0) {
              func_0x0d3cebb0(plStack_e0,uVar34 & 0xffffffff,uVar34 & 0xffffffff,uStack_d0);
            }
            else {
              lVar19 = *(long *)(uStack_c8 + 8);
              if (uVar34 < (ulong)(*(long *)(uStack_c8 + 0x10) - lVar19 >> 3)) {
                cVar11 = (**(code **)(**(long **)(lVar19 + uVar34 * 8) + 0x30))();
                if (cVar11 != '\n') goto LAB_0d3ba693;
                lVar19 = *(long *)(lVar19 + uVar34 * 8);
              }
              else {
LAB_0d3ba693:
                lVar19 = 0;
              }
              uStack_f8 = 0x13438d8;
              uStack_f4 = 0;
              uStack_f3 = 0;
              uStack_f2 = 0;
              uStack_f1 = 0;
              uStack_f0._0_4_ = 10;
              uStack_f0._4_4_ = 0;
              lVar17 = func_0x0d6c97a0(lVar19 + 8,&uStack_f8);
              if (((lVar17 == lVar19 + 0x10) || (*(int *)(lVar17 + 0x60) != 10)) ||
                 (*(long *)(lVar17 + 0x50) == 0)) {
LAB_0d3baa89:
                lVar19 = 0;
              }
              else {
                uStack_f8 = 0x13537a0;
                uStack_f4 = 0;
                uStack_f3 = 0;
                uStack_f2 = 0;
                uStack_f1 = 0;
                uStack_f0._0_4_ = 6;
                uStack_f0._4_4_ = 0;
                puVar33 = (undefined8 *)(lVar17 + 0x40);
                plVar20 = (long *)func_0x0d6c97a0(puVar33,&uStack_f8);
                plVar39 = (long *)(lVar17 + 0x48);
                if (plVar20 != plVar39) {
                  if ((ulong)*(uint *)(plVar20 + 0xc) == 0xffffffff) goto LAB_0d3bc2de;
                  plStack_98 = (long *)&uStack_99;
                  plVar20 = (long *)(**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(plVar20 + 0xc) * 8
                                                ))(&plStack_98,plVar20 + 7);
                  if ((plVar20 != (long *)0x0) &&
                     (cVar11 = (**(code **)(*plVar20 + 0x30))(plVar20), cVar11 == '\x03')) {
                    uStack_f8 = 0x13537a0;
                    uStack_f4 = 0;
                    uStack_f3 = 0;
                    uStack_f2 = 0;
                    uStack_f1 = 0;
                    uStack_f0._0_4_ = 6;
                    uStack_f0._4_4_ = 0;
                    plVar20 = (long *)func_0x0d6c97a0(puVar33,&uStack_f8);
                    if ((plVar20 == plVar39) || ((int)plVar20[0xc] != 3)) {
                      uVar12 = 0;
                    }
                    else {
                      uVar12 = (undefined2)plVar20[8];
                    }
                    lVar19 = *(long *)(lVar14 + 0x68);
                    lVar14 = func_0x0c6c88d0(lVar19,uVar12);
                    if (lVar14 == 0) {
                      lVar14 = *(long *)(lVar19 + 0x200);
                    }
                    goto LAB_0d3baa89;
                  }
                }
                uStack_f8 = 0x140f40c;
                uStack_f4 = 0;
                uStack_f3 = 0;
                uStack_f2 = 0;
                uStack_f1 = 0;
                uStack_f0._0_4_ = 4;
                uStack_f0._4_4_ = 0;
                plVar20 = (long *)func_0x0d6c97a0(puVar33,&uStack_f8);
                if (plVar20 == plVar39) {
                  plVar29 = (long *)0x0;
                }
                else {
                  plVar29 = plVar20 + 7;
                  if ((int)plVar20[0xc] != 8) {
                    plVar29 = (long *)0x0;
                  }
                }
                plVar20 = plVar29 + 1;
                if (plVar29 == (long *)0x0) {
                  plVar20 = (long *)&UNK_01e79d90;
                }
                uStack_f8 = 0x6c616808;
                uStack_f4 = 0x66;
                uStack_f3 = 0;
                lVar14 = func_0x0d376010(&uStack_f8,plVar20,lVar14);
                if ((uStack_f8 & 1) != 0) {
                  func_0x0412a280(lStack_e8,
                                  CONCAT17(uStack_f1,
                                           CONCAT16(uStack_f2,
                                                    CONCAT15(uStack_f3,CONCAT14(uStack_f4,uStack_f8)
                                                            ))) & 0xfffffffffffffffe);
                }
                uStack_f8 = 0x1331189;
                uStack_f4 = 0;
                uStack_f3 = 0;
                uStack_f2 = 0;
                uStack_f1 = 0;
                uStack_f0._0_4_ = 0xb;
                uStack_f0._4_4_ = 0;
                plVar20 = (long *)func_0x0d6c97a0(puVar33,&uStack_f8);
                if (plVar20 == plVar39) {
                  plVar29 = (long *)0x0;
                }
                else {
                  plVar29 = plVar20 + 7;
                  if ((int)plVar20[0xc] != 8) {
                    plVar29 = (long *)0x0;
                  }
                }
                pbVar15 = (byte *)(plVar29 + 1);
                if (plVar29 == (long *)0x0) {
                  pbVar15 = &UNK_01e79d90;
                }
                uStack_f8 = 0x74617716;
                uStack_f4 = 0x65;
                uStack_f3 = 0x72;
                uStack_f2 = 0x6c;
                uStack_f1 = 0x6f;
                uStack_f0._0_4_ = 0x64656767;
                uStack_f0._4_4_ = uStack_f0._4_4_ & 0xffffff00;
                if (CONCAT35(_UNK_01331191,_DAT_0133118c) == 0x646567676f6c7265 &&
                    CONCAT53(_DAT_0133118c,_DAT_01331189) == 0x676f6c7265746177) {
                  bVar6 = *pbVar15;
                  if ((bVar6 & 1) == 0) {
                    if (bVar6 >> 1 == 4) goto LAB_0d3baa49;
                    goto LAB_0d3ba94a;
                  }
                  if (*(long *)(pbVar15 + 8) != 4) goto LAB_0d3ba94a;
LAB_0d3baa49:
                  if ((bVar6 & 1) == 0) {
                    if (*(int *)(pbVar15 + 1) == _DAT_01306cb5) goto LAB_0d3bab02;
                    goto LAB_0d3ba94a;
                  }
                  if (**(int **)(pbVar15 + 0x10) != _DAT_01306cb5) goto LAB_0d3ba94a;
LAB_0d3bab02:
                  lVar19 = func_0x0cc41df0(0xf6ff9e0,&DAT_0f713f00,1);
                  bVar6 = *(byte *)(*(long *)(lVar14 + 0x68) + 0x109);
                }
                else {
LAB_0d3ba94a:
                  lVar19 = 0;
                  bVar6 = *(byte *)(*(long *)(lVar14 + 0x68) + 0x109);
                }
                if ((bVar6 & 1) == 0) {
                  plVar20 = (long *)*puVar33;
                  while (plVar20 != plVar39) {
                    bVar40 = (*(byte *)(plVar20 + 4) & 1) != 0;
                    lVar17 = (long)plVar20 + 0x21;
                    if (bVar40) {
                      lVar17 = plVar20[6];
                    }
                    uVar16 = (ulong)(*(byte *)(plVar20 + 4) >> 1);
                    if (bVar40) {
                      uVar16 = plVar20[5];
                    }
                    uStack_f8 = (uint)lVar17;
                    uStack_f4 = (undefined1)((ulong)lVar17 >> 0x20);
                    uStack_f3 = (undefined1)((ulong)lVar17 >> 0x28);
                    uStack_f2 = (undefined1)((ulong)lVar17 >> 0x30);
                    uStack_f1 = (undefined1)((ulong)lVar17 >> 0x38);
                    uStack_f0._0_4_ = (undefined4)uVar16;
                    uStack_f0._4_4_ = (uint)(uVar16 >> 0x20);
                    plVar29 = (long *)func_0x0d6c97a0(puVar33,&uStack_f8);
                    if (plVar29 == plVar39) {
                      plVar24 = (long *)0x0;
                    }
                    else {
                      plVar24 = plVar29 + 7;
                      if ((int)plVar29[0xc] != 8) {
                        plVar24 = (long *)0x0;
                      }
                    }
                    plVar29 = plVar24 + 1;
                    if (plVar24 == (long *)0x0) {
                      plVar29 = (long *)&UNK_01e79d90;
                    }
                    lVar14 = func_0x0d376010(plVar20 + 4,plVar29,lVar14);
                    plVar29 = (long *)plVar20[1];
                    plVar24 = plVar20;
                    if ((long *)plVar20[1] == (long *)0x0) {
                      do {
                        plVar20 = (long *)plVar24[2];
                        bVar40 = plVar24 != (long *)*plVar20;
                        plVar24 = plVar20;
                      } while (bVar40);
                    }
                    else {
                      do {
                        plVar20 = plVar29;
                        plVar29 = (long *)*plVar20;
                      } while ((long *)*plVar20 != (long *)0x0);
                    }
                  }
                }
                else {
                  uStack_f3 = 0x6e;
                  uStack_f2 = 0x67;
                  uStack_f8 = 0x6361660c;
                  uStack_f4 = 0x69;
                  uStack_f1 = 0;
                  plStack_98 = (long *)&UNK_014afa68;
                  uStack_90 = 6;
                  plVar20 = (long *)func_0x0d6c97a0(puVar33,&plStack_98);
                  if (plVar20 == plVar39) {
                    plVar29 = (long *)0x0;
                  }
                  else {
                    plVar29 = plVar20 + 7;
                    if ((int)plVar20[0xc] != 8) {
                      plVar29 = (long *)0x0;
                    }
                  }
                  plVar20 = plVar29 + 1;
                  if (plVar29 == (long *)0x0) {
                    plVar20 = (long *)&UNK_01e79d90;
                  }
                  uVar22 = func_0x0d376010(&uStack_f8,plVar20,lVar14);
                  if ((uStack_f8 & 1) != 0) {
                    func_0x0412a280(lStack_e8,
                                    CONCAT17(uStack_f1,
                                             CONCAT16(uStack_f2,
                                                      CONCAT15(uStack_f3,
                                                               CONCAT14(uStack_f4,uStack_f8)))) &
                                    0xfffffffffffffffe);
                  }
                  uStack_f8 = 0x63616608;
                  uStack_f4 = 0x65;
                  uStack_f3 = 0;
                  plStack_98 = (long *)&UNK_01341d5d;
                  uStack_90 = 4;
                  plVar20 = (long *)func_0x0d6c97a0(puVar33,&plStack_98);
                  if (plVar20 == plVar39) {
                    plVar39 = (long *)0x0;
                  }
                  else {
                    plVar39 = plVar20 + 7;
                    if ((int)plVar20[0xc] != 8) {
                      plVar39 = (long *)0x0;
                    }
                  }
                  plVar20 = plVar39 + 1;
                  if (plVar39 == (long *)0x0) {
                    plVar20 = (long *)&UNK_01e79d90;
                  }
                  lVar14 = func_0x0d376010(&uStack_f8,plVar20,uVar22);
                  if ((uStack_f8 & 1) != 0) {
                    func_0x0412a280(lStack_e8,
                                    CONCAT17(uStack_f1,
                                             CONCAT16(uStack_f2,
                                                      CONCAT15(uStack_f3,
                                                               CONCAT14(uStack_f4,uStack_f8)))) &
                                    0xfffffffffffffffe);
                  }
                }
              }
              if ((lVar19 == 0) && (lVar14 != 0)) {
                lVar19 = func_0x0d37ee30(param_1,*(undefined8 *)(lVar14 + 0x68));
              }
              func_0x0d3cebb0(plStack_e0,uVar34 & 0xffffffff,uVar34 & 0xffffffff,lVar14);
              if (lVar19 != 0) {
                func_0x0d3cebb0(uStack_d8,uVar34 & 0xffffffff,uVar34 & 0xffffffff,lVar19);
              }
            }
            if (((ulong)uStack_118 & 1) != 0) {
              func_0x0412a280(lStack_108,(ulong)uStack_118 & 0xfffffffffffffffe);
            }
          }
        }
      }
      else {
        func_0x0c700540(lVar17 + 0x38,&puStack_70);
        uVar16 = extraout_RDX;
        if (extraout_RDX == 0) {
          uVar16 = uStack_d0;
        }
        func_0x0d3cebb0(plStack_e0,uVar34 & 0xffffffff,uVar34 & 0xffffffff,uVar16);
      }
      uVar34 = uVar34 + 1;
      lVar14 = *(long *)(uStack_c8 + 8);
      uVar16 = *(long *)(uStack_c8 + 0x10) - lVar14;
    } while ((long)uVar34 < (long)(int)(uVar16 >> 3));
  }
  uStack_118 = (long *)&UNK_01da1cb1;
  uStack_110 = (long *)0xb;
  lVar14 = func_0x0d6c97a0(lStack_b8,&uStack_118);
  if ((lVar14 == lStack_a8) || (*(int *)(lVar14 + 0x60) != 3)) {
    uVar27 = 0;
  }
  else {
    uVar27 = *(undefined4 *)(lVar14 + 0x40);
  }
  *(undefined4 *)(param_1 + 0x34) = uVar27;
  uStack_118 = (long *)&UNK_01da1bf1;
  uStack_110 = (long *)0x6;
  lVar14 = func_0x0d6c97a0(lStack_b8,&uStack_118);
  if (lVar14 == lStack_a8) {
    lStack_c0 = 0;
  }
  else {
    lStack_c0 = 0;
    if (*(int *)(lVar14 + 0x60) == 9) {
      lStack_c0 = lVar14 + 0x38;
    }
  }
  uVar16 = (ulong)(int)((ulong)(*(long *)(lStack_c0 + 0x10) - *(long *)(lStack_c0 + 8)) >> 3);
  lVar14 = *(long *)(param_1 + 0x88);
  lVar19 = *(long *)(param_1 + 0x98);
  if ((ulong)((lVar19 - lVar14 >> 3) * -0x3333333333333333) < uVar16) {
    if (0x666666666666666 < uVar16) {
LAB_0d3bc2d4:
      func_0x0d3c8e70();
      goto LAB_0d3bc2d9;
    }
    lVar17 = *(long *)(param_1 + 0x90);
    lVar18 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16 * 0x28);
    if (lVar18 == 0) {
      func_0x0eec74c0(uVar16 * 0x28,0);
    }
    lVar38 = lVar17 - lVar14;
    if (lVar14 != lVar17) {
      lVar19 = 0;
      do {
        puVar37 = (undefined4 *)(lVar14 + lVar19);
        uVar27 = *puVar37;
        uVar36 = puVar37[1];
        uVar28 = puVar37[2];
        uVar10 = puVar37[3];
        puVar33 = (undefined8 *)(lVar14 + 0x10 + lVar19);
        uVar22 = puVar33[1];
        puVar21 = (undefined8 *)(lVar18 + 0x10 + lVar19);
        *puVar21 = *puVar33;
        puVar21[1] = uVar22;
        puVar37 = (undefined4 *)(lVar18 + lVar19);
        *puVar37 = uVar27;
        puVar37[1] = uVar36;
        puVar37[2] = uVar28;
        puVar37[3] = uVar10;
        uVar22 = *(undefined8 *)(lVar14 + 0x20 + lVar19);
        *(undefined8 *)(lVar14 + 0x20 + lVar19) = 0;
        *(undefined8 *)(lVar18 + 0x20 + lVar19) = uVar22;
        lVar30 = lVar14 + lVar19;
        lVar19 = lVar19 + 0x28;
      } while (lVar30 + 0x28 != lVar17);
      do {
        plVar20 = *(long **)(lVar14 + 0x20);
        *(undefined8 *)(lVar14 + 0x20) = 0;
        if (plVar20 != (long *)0x0) {
          (**(code **)(*plVar20 + 8))();
        }
        lVar14 = lVar14 + 0x28;
      } while (lVar14 != lVar17);
      lVar14 = *(long *)(param_1 + 0x88);
      lVar19 = *(long *)(param_1 + 0x98);
    }
    *(long *)(param_1 + 0x88) = lVar18;
    *(long *)(param_1 + 0x90) = lVar38 + lVar18;
    *(ulong *)(param_1 + 0x98) = lVar18 + uVar16 * 0x28;
    if (lVar14 != 0) {
      func_0x0412a280(lVar14,lVar19 - lVar14);
    }
  }
  lVar14 = *(long *)(lStack_c0 + 8);
  uVar16 = *(long *)(lStack_c0 + 0x10) - lVar14;
  if (0xffffffff < (long)(uVar16 * 0x20000000)) {
    puStack_88 = (ulong *)(param_1 + 0x88);
    uVar34 = 0;
LAB_0d3baf01:
    if (uVar34 < (ulong)((long)uVar16 >> 3)) {
      cVar11 = (**(code **)(**(long **)(lVar14 + uVar34 * 8) + 0x30))();
      if (cVar11 != '\n') goto LAB_0d3baf20;
      lVar14 = *(long *)(lVar14 + uVar34 * 8);
    }
    else {
LAB_0d3baf20:
      lVar14 = 0;
    }
    uStack_118 = (long *)&UNK_01da1c21;
    uStack_110 = (long *)0x5;
    lVar19 = lVar14 + 8;
    plVar20 = (long *)func_0x0d6c97a0(lVar19,&uStack_118);
    plVar39 = (long *)(lVar14 + 0x10);
    if ((plVar20 == plVar39) || ((int)plVar20[0xc] != 3)) {
      uVar16 = 0;
    }
    else {
      uVar16 = (ulong)(int)plVar20[8];
    }
    lVar14 = *(long *)(uStack_c8 + 8);
    if (uVar16 < (ulong)(*(long *)(uStack_c8 + 0x10) - lVar14 >> 3)) {
      cVar11 = (**(code **)(**(long **)(lVar14 + uVar16 * 8) + 0x30))();
      if (cVar11 != '\n') goto LAB_0d3baf90;
      puVar33 = *(undefined8 **)(lVar14 + uVar16 * 8);
    }
    else {
LAB_0d3baf90:
      puVar33 = (undefined8 *)0x0;
    }
    uStack_118 = (long *)&UNK_012f0cac;
    uStack_110 = (long *)0x4;
    puVar21 = (undefined8 *)func_0x0d6c97a0(puVar33 + 1,&uStack_118);
    if (puVar21 == puVar33 + 2) {
      puVar25 = (undefined8 *)0x0;
    }
    else {
      puVar25 = puVar21 + 7;
      if (*(int *)(puVar21 + 0xc) != 8) {
        puVar25 = (undefined8 *)0x0;
      }
    }
    puVar21 = puVar25 + 1;
    if (puVar25 == (undefined8 *)0x0) {
      puVar21 = (undefined8 *)&UNK_01e79d90;
    }
    uStack_118 = (long *)&UNK_01da1c09;
    uStack_110 = (long *)0x3;
    uStack_d0 = uVar34;
    plVar20 = (long *)func_0x0d6c97a0(lVar19,&uStack_118);
    if (plVar20 == plVar39) {
      plVar29 = (long *)0x0;
    }
    else {
      plVar29 = plVar20 + 7;
      if ((int)plVar20[0xc] != 9) {
        plVar29 = (long *)0x0;
      }
    }
    uVar13 = 0;
    plStack_e0 = plVar39;
    puStack_b0 = puVar33;
    if ((0 < (int)((ulong)(plVar29[2] - plVar29[1]) >> 3)) &&
       (plVar20 = *(long **)plVar29[1], plVar20 != (long *)0x0)) {
      cVar11 = (**(code **)(*plVar20 + 0x30))(plVar20);
      uVar13 = 0;
      if (cVar11 == '\x03') {
        uVar13 = *(uint *)(plVar20 + 1);
      }
    }
    uVar27 = 0;
    plVar20 = uStack_f0;
    if ((1 < (int)((ulong)(plVar29[2] - plVar29[1]) >> 3)) &&
       (plVar39 = *(long **)(plVar29[1] + 8), uVar27 = 0, plVar39 != (long *)0x0)) {
      cVar11 = (**(code **)(*plVar39 + 0x30))(plVar39);
      plVar20 = uStack_f0;
      if (cVar11 == '\x03') {
        uVar27 = (undefined4)plVar39[1];
      }
    }
    uStack_f0._4_4_ = (uint)((ulong)plVar20 >> 0x20);
    uStack_f0._0_4_ = 0;
    if ((2 < (int)((ulong)(plVar29[2] - plVar29[1]) >> 3)) &&
       (plVar39 = *(long **)(plVar29[1] + 0x10), uStack_f0._0_4_ = 0, plVar39 != (long *)0x0)) {
      uStack_f0 = plVar20;
      cVar11 = (**(code **)(*plVar39 + 0x30))(plVar39);
      uStack_f0._0_4_ = 0;
      if (cVar11 == '\x03') {
        uStack_f0._0_4_ = (undefined4)plVar39[1];
      }
    }
    uStack_f4 = (undefined1)uVar27;
    uStack_f3 = (undefined1)((uint)uVar27 >> 8);
    uStack_f2 = (undefined1)((uint)uVar27 >> 0x10);
    uStack_f1 = (undefined1)((uint)uVar27 >> 0x18);
    uStack_118 = (long *)&UNK_01da1c21;
    uStack_110 = (long *)0x5;
    uStack_f8 = uVar13;
    plVar39 = (long *)func_0x0d6c97a0(lVar19,&uStack_118);
    plVar20 = plStack_e0;
    if ((plVar39 == plStack_e0) || ((int)plVar39[0xc] != 3)) {
      uVar34 = 0;
      uVar16 = *(ulong *)(param_1 + 0x40);
    }
    else {
      uVar34 = (ulong)*(uint *)(plVar39 + 8);
      uVar16 = *(ulong *)(param_1 + 0x40);
    }
    if (uVar16 != 0) {
      lVar14 = *(long *)(param_1 + 0x38);
      iVar23 = (int)uVar34;
      uVar32 = (ulong)iVar23;
      uVar26 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar26 = (uVar26 >> 2 & 0x3333333333333333) + (uVar26 & 0x3333333333333333);
      uVar26 = ((uVar26 >> 4) + uVar26 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      if (uVar26 >> 0x38 < 2) {
        uVar35 = uVar16 - 1 & uVar32;
        plVar39 = *(long **)(lVar14 + uVar35 * 8);
      }
      else {
        uVar35 = uVar32;
        if (uVar16 <= uVar32) {
          if ((uVar32 | uVar16) >> 0x20 == 0) {
            uVar35 = uVar34 % (uVar16 & 0xffffffff);
            plVar39 = *(long **)(lVar14 + uVar35 * 8);
            goto joined_r0x0d3bb2b7;
          }
          uVar35 = uVar32 % uVar16;
        }
        plVar39 = *(long **)(lVar14 + uVar35 * 8);
      }
joined_r0x0d3bb2b7:
      if ((plVar39 != (long *)0x0) && (plVar39 = (long *)*plVar39, plVar39 != (long *)0x0)) {
        if ((byte)(uVar26 >> 0x38) < 2) {
          do {
            if (plVar39[1] == uVar32) {
              if ((int)plVar39[2] == iVar23) goto LAB_0d3bb2a1;
            }
            else if ((plVar39[1] & uVar16 - 1) != uVar35) break;
            plVar39 = (long *)*plVar39;
          } while (plVar39 != (long *)0x0);
        }
        else {
          do {
            uVar34 = plVar39[1];
            if (uVar34 == uVar32) {
              if ((int)plVar39[2] == iVar23) goto LAB_0d3bb2a1;
            }
            else {
              if (uVar16 <= uVar34) {
                if ((uVar34 | uVar16) >> 0x20 == 0) {
                  if ((uVar34 & 0xffffffff) % (uVar16 & 0xffffffff) == uVar35) goto LAB_0d3bb236;
                  break;
                }
                uVar34 = uVar34 % uVar16;
              }
              if (uVar34 != uVar35) break;
            }
LAB_0d3bb236:
            plVar39 = (long *)*plVar39;
          } while (plVar39 != (long *)0x0);
        }
      }
    }
    plStack_98 = (long *)func_0x0cc41df0(0xf6ff9e0,&DAT_0f6eaec0,1);
    goto LAB_0d3bb2d8;
  }
LAB_0d3bb95b:
  uStack_118 = (long *)&UNK_01da1c51;
  uStack_110 = (long *)0x8;
  lVar14 = func_0x0d6c97a0(lStack_b8,&uStack_118);
  if (lVar14 == lStack_a8) {
    lVar19 = 0;
  }
  else {
    lVar19 = 0;
    if (*(int *)(lVar14 + 0x60) == 9) {
      lVar19 = lVar14 + 0x38;
    }
  }
  uVar16 = (ulong)(int)((ulong)(*(long *)(lVar19 + 0x10) - *(long *)(lVar19 + 8)) >> 3);
  lVar14 = *(long *)(param_1 + 0xa0);
  lVar17 = *(long *)(param_1 + 0xb0);
  lStack_b8 = lVar19;
  if ((ulong)((lVar17 - lVar14 >> 3) * 0x6db6db6db6db6db7) < uVar16) {
    if (0x492492492492492 < uVar16) {
LAB_0d3bc2d9:
      func_0x0d3c9060();
LAB_0d3bc2de:
      uVar22 = func_0x04931450();
      if (((ulong)uStack_118 & 1) != 0) {
        func_0x0412a280(lStack_108,(ulong)uStack_118 & 0xfffffffffffffffe);
      }
      func_0x0c815700(&puStack_70,uStack_68);
      func_0x0eee2d70(uVar22);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    lVar19 = *(long *)(param_1 + 0xa8);
    lVar38 = uVar16 * 0x38;
    lVar18 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar38);
    if (lVar18 == 0) {
      func_0x0eec74c0(lVar38,0);
    }
    lVar30 = lVar19 - lVar14;
    if (lVar14 != lVar19) {
      lVar17 = 0;
      do {
        while( true ) {
          *(undefined8 *)(lVar18 + 0x10 + lVar17) = *(undefined8 *)(lVar14 + 0x10 + lVar17);
          uVar22 = ((undefined8 *)(lVar14 + lVar17))[1];
          *(undefined8 *)(lVar18 + lVar17) = *(undefined8 *)(lVar14 + lVar17);
          ((undefined8 *)(lVar18 + lVar17))[1] = uVar22;
          *(undefined **)(lVar18 + 0x18 + lVar17) = &UNK_0f47e0b0;
          *(undefined8 *)(lVar18 + 0x20 + lVar17) = *(undefined8 *)(lVar14 + 0x20 + lVar17);
          lVar4 = lVar18 + 0x28 + lVar17;
          lVar7 = *(long *)(lVar14 + 0x28 + lVar17);
          *(long *)(lVar18 + 0x28 + lVar17) = lVar7;
          lVar8 = *(long *)(lVar14 + 0x30 + lVar17);
          *(long *)(lVar18 + 0x30 + lVar17) = lVar8;
          if (lVar8 == 0) break;
          puVar33 = (undefined8 *)(lVar14 + lVar17 + 0x28);
          *(long *)(lVar7 + 0x10) = lVar4;
          *(undefined8 **)(lVar14 + 0x20 + lVar17) = puVar33;
          *puVar33 = 0;
          *(undefined8 *)(lVar14 + lVar17 + 0x30) = 0;
          lVar4 = lVar14 + lVar17;
          lVar17 = lVar17 + 0x38;
          if (lVar4 + 0x38 == lVar19) goto LAB_0d3bbad0;
        }
        *(long *)(lVar18 + 0x20 + lVar17) = lVar4;
        lVar4 = lVar14 + lVar17;
        lVar17 = lVar17 + 0x38;
      } while (lVar4 + 0x38 != lVar19);
LAB_0d3bbad0:
      do {
        *(undefined **)(lVar14 + 0x18) = &UNK_0f47e0b0;
        func_0x0d6c9500(lVar14 + 0x20,*(undefined8 *)(lVar14 + 0x28));
        lVar14 = lVar14 + 0x38;
      } while (lVar14 != lVar19);
      lVar14 = *(long *)(param_1 + 0xa0);
      lVar17 = *(long *)(param_1 + 0xb0);
    }
    lVar19 = lStack_b8;
    *(long *)(param_1 + 0xa0) = lVar18;
    *(long *)(param_1 + 0xa8) = lVar30 + lVar18;
    *(long *)(param_1 + 0xb0) = lVar38 + lVar18;
    if (lVar14 != 0) {
      func_0x0412a280(lVar14,lVar17 - lVar14);
    }
  }
  lVar14 = *(long *)(lVar19 + 8);
  uVar16 = *(long *)(lVar19 + 0x10) - lVar14;
  if (0xffffffff < (long)(uVar16 * 0x20000000)) {
    uStack_c8 = 0;
    do {
      if (uStack_c8 < (ulong)((long)uVar16 >> 3)) {
        cVar11 = (**(code **)(**(long **)(lVar14 + uStack_c8 * 8) + 0x30))();
        if (cVar11 != '\n') goto LAB_0d3bbc10;
        lVar14 = *(long *)(lVar14 + uStack_c8 * 8);
      }
      else {
LAB_0d3bbc10:
        lVar14 = 0;
      }
      uStack_118 = (long *)&UNK_01da1c69;
      uStack_110 = (long *)0x3;
      lVar19 = lVar14 + 8;
      lVar17 = func_0x0d6c97a0(lVar19,&uStack_118);
      lVar14 = lVar14 + 0x10;
      if (lVar17 == lVar14) {
        lVar18 = 0;
      }
      else {
        lVar18 = lVar17 + 0x38;
        if (*(int *)(lVar17 + 0x60) != 9) {
          lVar18 = 0;
        }
      }
      fVar41 = 0.0;
      uStack_d0 = uStack_d0 & 0xffffffff00000000;
      if ((0 < (int)((ulong)(*(long *)(lVar18 + 0x10) - (long)*(long **)(lVar18 + 8)) >> 3)) &&
         (plVar20 = (long *)**(long **)(lVar18 + 8), plVar20 != (long *)0x0)) {
        cVar11 = (**(code **)(*plVar20 + 0x30))(plVar20);
        fVar41 = 0.0;
        if (cVar11 == '\x06') {
          fVar41 = (float)(double)plVar20[1];
        }
      }
      lStack_c0 = CONCAT44(lStack_c0._4_4_,fVar41);
      if ((1 < (int)((ulong)(*(long *)(lVar18 + 0x10) - *(long *)(lVar18 + 8)) >> 3)) &&
         (plVar20 = *(long **)(*(long *)(lVar18 + 8) + 8), plVar20 != (long *)0x0)) {
        cVar11 = (**(code **)(*plVar20 + 0x30))(plVar20);
        if (cVar11 == '\x06') {
          uStack_d0 = CONCAT44(uStack_d0._4_4_,(float)(double)plVar20[1]);
        }
      }
      fVar41 = 0.0;
      if ((int)((ulong)(*(long *)(lVar18 + 0x10) - *(long *)(lVar18 + 8)) >> 3) < 3) {
LAB_0d3bbd1d:
        uStack_d8 = CONCAT44(uStack_d8._4_4_,fVar41);
      }
      else {
        uStack_d8 = uStack_d8 & 0xffffffff00000000;
        plVar20 = *(long **)(*(long *)(lVar18 + 8) + 0x10);
        if (plVar20 != (long *)0x0) {
          cVar11 = (**(code **)(*plVar20 + 0x30))(plVar20);
          if (cVar11 == '\x06') {
            fVar41 = (float)(double)plVar20[1];
            goto LAB_0d3bbd1d;
          }
        }
      }
      uStack_118 = (long *)&UNK_01da1c81;
      uStack_110 = (long *)0x8;
      lVar17 = func_0x0d6c97a0(lVar19,&uStack_118);
      if (lVar17 == lVar14) {
        lVar18 = 0;
      }
      else {
        lVar18 = lVar17 + 0x38;
        if (*(int *)(lVar17 + 0x60) != 9) {
          lVar18 = 0;
        }
      }
      puStack_b0 = (undefined8 *)((ulong)puStack_b0 & 0xffffffff00000000);
      uVar27 = 0;
      if ((0 < (int)((ulong)(*(long *)(lVar18 + 0x10) - (long)*(long **)(lVar18 + 8)) >> 3)) &&
         (plVar20 = (long *)**(long **)(lVar18 + 8), plVar20 != (long *)0x0)) {
        cVar11 = (**(code **)(*plVar20 + 0x30))(plVar20);
        uVar27 = 0;
        if (cVar11 == '\x03') {
          uVar27 = (undefined4)plVar20[1];
        }
      }
      if ((1 < (int)((ulong)(*(long *)(lVar18 + 0x10) - *(long *)(lVar18 + 8)) >> 3)) &&
         (plVar20 = *(long **)(*(long *)(lVar18 + 8) + 8), plVar20 != (long *)0x0)) {
        cVar11 = (**(code **)(*plVar20 + 0x30))(plVar20);
        if (cVar11 == '\x03') {
          puStack_b0 = (undefined8 *)CONCAT44(puStack_b0._4_4_,(int)plVar20[1]);
        }
      }
      uVar36 = 0;
      puStack_88 = (ulong *)CONCAT44(puStack_88._4_4_,uVar27);
      if ((2 < (int)((ulong)(*(long *)(lVar18 + 0x10) - *(long *)(lVar18 + 8)) >> 3)) &&
         (plVar20 = *(long **)(*(long *)(lVar18 + 8) + 0x10), plVar20 != (long *)0x0)) {
        cVar11 = (**(code **)(*plVar20 + 0x30))(plVar20,&uStack_118);
        if (cVar11 == '\x03') {
          uVar36 = (undefined4)plVar20[1];
        }
      }
      uStack_118 = (long *)&UNK_01da1c99;
      uStack_110 = (long *)0x3;
      lVar19 = func_0x0d6c97a0(lVar19,&uStack_118);
      if (lVar19 == lVar14) {
        lVar14 = 0;
      }
      else {
        lVar14 = lVar19 + 0x38;
        if (*(int *)(lVar19 + 0x60) != 10) {
          lVar14 = 0;
        }
      }
      plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (plVar20 == (long *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      *plVar20 = (long)&UNK_0f47e0b0;
      plVar39 = plVar20 + 2;
      plVar20[2] = 0;
      plVar20[3] = 0;
      plVar20[1] = (long)plVar39;
      plStack_e0 = plVar20;
      func_0x0d6bd5f0(plVar20,lVar14);
      puVar37 = *(undefined4 **)(param_1 + 0xa8);
      if (*(undefined4 **)(param_1 + 0xb0) <= puVar37) {
        lVar14 = (long)puVar37 - *(long *)(param_1 + 0xa0);
        uVar16 = (lVar14 >> 3) * 0x6db6db6db6db6db7 + 1;
        if (uVar16 < 0x492492492492493) {
          lVar19 = (long)*(undefined4 **)(param_1 + 0xb0) - *(long *)(param_1 + 0xa0) >> 3;
          uVar34 = lVar19 * -0x2492492492492492;
          if (uVar16 < uVar34) {
            uVar16 = uVar34;
          }
          if (0x249249249249248 < (ulong)(lVar19 * 0x6db6db6db6db6db7)) {
            uVar16 = 0x492492492492492;
          }
          if (uVar16 == 0) {
            lVar19 = 0;
          }
          else {
            if (0x492492492492492 < uVar16) goto LAB_0d3bc2c5;
            lVar19 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16 * 0x38);
            if (lVar19 == 0) {
              func_0x0eec74c0(uVar16 * 0x38,0);
              lVar19 = 0;
            }
          }
          uStack_110 = (long *)plStack_e0[1];
          lStack_108 = plStack_e0[2];
          lVar17 = plStack_e0[3];
          if (lVar17 == 0) {
            uStack_110 = &lStack_108;
          }
          else {
            *(long **)(lStack_108 + 0x10) = &lStack_108;
            plStack_e0[1] = (long)plVar39;
            *plVar39 = 0;
            plVar20[3] = 0;
          }
          puVar37 = (undefined4 *)(lVar14 + lVar19);
          *puVar37 = (undefined4)lStack_c0;
          puVar37[1] = (undefined4)uStack_d0;
          puVar37[2] = (undefined4)uStack_d8;
          puVar37[3] = puStack_88._0_4_;
          puVar37[4] = puStack_b0._0_4_;
          puVar37[5] = uVar36;
          *(undefined **)(puVar37 + 6) = &UNK_0f47e0b0;
          *(long **)(puVar37 + 8) = uStack_110;
          *(long *)(puVar37 + 10) = lStack_108;
          *(long *)(puVar37 + 0xc) = lVar17;
          if (lVar17 == 0) {
            *(undefined4 **)(puVar37 + 8) = puVar37 + 10;
          }
          else {
            *(undefined4 **)(lStack_108 + 0x10) = puVar37 + 10;
            uStack_110 = &lStack_108;
            lStack_108 = 0;
          }
          lStack_100 = 0;
          uStack_118 = (long *)&UNK_0f47e0b0;
          lStack_a8 = lVar19;
          func_0x0d6c9500(&uStack_110,lStack_108);
          lVar17 = *(long *)(param_1 + 0xa0);
          lVar19 = *(long *)(param_1 + 0xa8);
          lVar14 = (long)puVar37 + (lVar17 - lVar19);
          if (lVar17 - lVar19 != 0) {
            lVar18 = 0;
            do {
              while( true ) {
                *(undefined8 *)(lVar14 + 0x10 + lVar18) = *(undefined8 *)(lVar17 + 0x10 + lVar18);
                puVar2 = (undefined4 *)(lVar17 + lVar18);
                uVar27 = puVar2[1];
                uVar36 = puVar2[2];
                uVar28 = puVar2[3];
                puVar5 = (undefined4 *)(lVar14 + lVar18);
                *puVar5 = *puVar2;
                puVar5[1] = uVar27;
                puVar5[2] = uVar36;
                puVar5[3] = uVar28;
                *(undefined **)(lVar14 + 0x18 + lVar18) = &UNK_0f47e0b0;
                *(undefined8 *)(lVar14 + 0x20 + lVar18) = *(undefined8 *)(lVar17 + 0x20 + lVar18);
                lVar38 = lVar14 + 0x28 + lVar18;
                lVar30 = *(long *)(lVar17 + 0x28 + lVar18);
                *(long *)(lVar14 + 0x28 + lVar18) = lVar30;
                lVar4 = *(long *)(lVar17 + 0x30 + lVar18);
                *(long *)(lVar14 + 0x30 + lVar18) = lVar4;
                if (lVar4 == 0) break;
                puVar33 = (undefined8 *)(lVar17 + lVar18 + 0x28);
                *(long *)(lVar30 + 0x10) = lVar38;
                *(undefined8 **)(lVar17 + 0x20 + lVar18) = puVar33;
                *puVar33 = 0;
                *(undefined8 *)(lVar17 + lVar18 + 0x30) = 0;
                lVar38 = lVar17 + lVar18;
                lVar18 = lVar18 + 0x38;
                if (lVar38 + 0x38 == lVar19) goto LAB_0d3bc1f0;
              }
              *(long *)(lVar14 + 0x20 + lVar18) = lVar38;
              lVar38 = lVar17 + lVar18;
              lVar18 = lVar18 + 0x38;
            } while (lVar38 + 0x38 != lVar19);
LAB_0d3bc1f0:
            do {
              *(undefined **)(lVar17 + 0x18) = &UNK_0f47e0b0;
              func_0x0d6c9500(lVar17 + 0x20,*(undefined8 *)(lVar17 + 0x28));
              lVar17 = lVar17 + 0x38;
            } while (lVar17 != lVar19);
            lVar17 = *(long *)(param_1 + 0xa0);
          }
          puVar37 = puVar37 + 0xe;
          *(long *)(param_1 + 0xa0) = lVar14;
          *(undefined4 **)(param_1 + 0xa8) = puVar37;
          lVar14 = *(long *)(param_1 + 0xb0);
          *(ulong *)(param_1 + 0xb0) = lStack_a8 + uVar16 * 0x38;
          if (lVar17 != 0) {
            func_0x0412a280(lVar17,lVar14 - lVar17);
          }
          goto LAB_0d3bbb99;
        }
        func_0x0d3c9060();
LAB_0d3bc2c0:
        func_0x04931450();
LAB_0d3bc2c5:
        func_0x04882eb0();
LAB_0d3bc2ca:
        func_0x04882eb0();
LAB_0d3bc2cf:
        func_0x0d3c8e70();
        goto LAB_0d3bc2d4;
      }
      uStack_110 = (long *)plStack_e0[1];
      lStack_108 = plStack_e0[2];
      lStack_100 = plStack_e0[3];
      if (lStack_100 == 0) {
        uStack_110 = &lStack_108;
        lVar14 = 0;
      }
      else {
        *(long **)(lStack_108 + 0x10) = &lStack_108;
        plStack_e0[1] = (long)plVar39;
        *plVar39 = 0;
        plVar20[3] = 0;
        lVar14 = lStack_100;
      }
      *puVar37 = (undefined4)lStack_c0;
      puVar37[1] = (undefined4)uStack_d0;
      puVar37[2] = (undefined4)uStack_d8;
      puVar37[3] = puStack_88._0_4_;
      puVar37[4] = puStack_b0._0_4_;
      puVar37[5] = uVar36;
      *(undefined **)(puVar37 + 6) = &UNK_0f47e0b0;
      *(long **)(puVar37 + 8) = uStack_110;
      *(long *)(puVar37 + 10) = lStack_108;
      *(long *)(puVar37 + 0xc) = lVar14;
      if (lVar14 == 0) {
        *(undefined4 **)(puVar37 + 8) = puVar37 + 10;
      }
      else {
        *(undefined4 **)(lStack_108 + 0x10) = puVar37 + 10;
        uStack_110 = &lStack_108;
        lStack_108 = 0;
        lStack_100 = 0;
      }
      uStack_118 = (long *)&UNK_0f47e0b0;
      func_0x0d6c9500(&uStack_110,lStack_108);
      puVar37 = puVar37 + 0xe;
LAB_0d3bbb99:
      *(undefined4 **)(param_1 + 0xa8) = puVar37;
      (**(code **)(*plStack_e0 + 8))();
      uStack_c8 = uStack_c8 + 1;
      lVar14 = *(long *)(lStack_b8 + 8);
      uVar16 = *(long *)(lStack_b8 + 0x10) - lVar14;
    } while ((long)uStack_c8 < (long)(int)(uVar16 >> 3));
  }
  func_0x0c815700(&puStack_70,uStack_68);
  return;
LAB_0d3bb2a1:
  plStack_98 = (long *)plVar39[3];
LAB_0d3bb2d8:
  uStack_118 = (long *)&UNK_01da1c21;
  uStack_110 = (long *)0x5;
  plVar39 = (long *)func_0x0d6c97a0(lVar19,&uStack_118);
  if ((plVar39 == plVar20) || ((int)plVar39[0xc] != 3)) {
    uVar34 = 0;
    uVar16 = *(ulong *)(param_1 + 0x68);
  }
  else {
    uVar34 = (ulong)*(uint *)(plVar39 + 8);
    uVar16 = *(ulong *)(param_1 + 0x68);
  }
  if (uVar16 != 0) {
    lVar14 = *(long *)(param_1 + 0x60);
    iVar23 = (int)uVar34;
    uVar32 = (ulong)iVar23;
    uVar26 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar26 = (uVar26 >> 2 & 0x3333333333333333) + (uVar26 & 0x3333333333333333);
    uVar26 = ((uVar26 >> 4) + uVar26 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar26 >> 0x38 < 2) {
      uVar35 = uVar16 - 1 & uVar32;
      plVar39 = *(long **)(lVar14 + uVar35 * 8);
    }
    else {
      uVar35 = uVar32;
      if (uVar16 <= uVar32) {
        if ((uVar32 | uVar16) >> 0x20 == 0) {
          uVar35 = uVar34 % (uVar16 & 0xffffffff);
          plVar39 = *(long **)(lVar14 + uVar35 * 8);
          goto joined_r0x0d3bb497;
        }
        uVar35 = uVar32 % uVar16;
      }
      plVar39 = *(long **)(lVar14 + uVar35 * 8);
    }
joined_r0x0d3bb497:
    if ((plVar39 != (long *)0x0) && (plVar39 = (long *)*plVar39, plVar39 != (long *)0x0)) {
      if ((byte)(uVar26 >> 0x38) < 2) {
        do {
          if (plVar39[1] == uVar32) {
            if ((int)plVar39[2] == iVar23) goto LAB_0d3bb481;
          }
          else if ((plVar39[1] & uVar16 - 1) != uVar35) break;
          plVar39 = (long *)*plVar39;
        } while (plVar39 != (long *)0x0);
      }
      else {
        do {
          uVar34 = plVar39[1];
          if (uVar34 == uVar32) {
            if ((int)plVar39[2] == iVar23) goto LAB_0d3bb481;
          }
          else {
            if (uVar16 <= uVar34) {
              if ((uVar34 | uVar16) >> 0x20 == 0) {
                if ((uVar34 & 0xffffffff) % (uVar16 & 0xffffffff) == uVar35) goto LAB_0d3bb416;
                break;
              }
              uVar34 = uVar34 % uVar16;
            }
            if (uVar34 != uVar35) break;
          }
LAB_0d3bb416:
          plVar39 = (long *)*plVar39;
        } while (plVar39 != (long *)0x0);
      }
    }
  }
  uStack_d8 = func_0x0cc41df0(0xf6ff9e0,&DAT_0f6eaec0,1);
LAB_0d3bb4b8:
  uStack_118 = (long *)&UNK_01da1c39;
  uStack_110 = (long *)0x3;
  plVar39 = (long *)func_0x0d6c97a0(lVar19,&uStack_118);
  if ((plVar39 == plVar20) || ((int)plVar39[0xc] != 10)) {
    lVar14 = *(long *)(plStack_98[0xd] + 200);
    if ((lVar14 != _DAT_0f7149f0) && ((lVar14 != _DAT_0f715808 && (lVar14 != _DAT_0f710ac0)))) {
      puVar33 = *(undefined8 **)(param_1 + 0x90);
      puVar21 = *(undefined8 **)(param_1 + 0x98);
      if (puVar33 < puVar21) {
        *(undefined4 *)(puVar33 + 1) = (undefined4)uStack_f0;
        *puVar33 = CONCAT17(uStack_f1,
                            CONCAT16(uStack_f2,CONCAT15(uStack_f3,CONCAT14(uStack_f4,uStack_f8))));
        puVar33[2] = plStack_98;
        puVar33[3] = uStack_d8;
        puVar33[4] = 0;
        puVar33 = puVar33 + 5;
      }
      else {
        plStack_e0 = plStack_98;
        puVar25 = (undefined8 *)*puStack_88;
        lVar14 = (long)puVar33 - (long)puVar25;
        uVar16 = (lVar14 >> 3) * -0x3333333333333333 + 1;
        if (0x666666666666666 < uVar16) goto LAB_0d3bc2cf;
        lVar19 = (long)puVar21 - (long)puVar25 >> 3;
        uVar34 = lVar19 * -0x6666666666666666;
        if (uVar16 < uVar34) {
          uVar16 = uVar34;
        }
        if (0x333333333333332 < (ulong)(lVar19 * -0x3333333333333333)) {
          uVar16 = 0x666666666666666;
        }
        puStack_b0 = puVar21;
        if (0x666666666666666 < uVar16) goto LAB_0d3bc2ca;
        lVar19 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16 * 0x28);
        if (lVar19 == 0) {
          func_0x0eec74c0(uVar16 * 0x28,0);
        }
        *(undefined4 *)(lVar19 + 8 + lVar14) = (undefined4)uStack_f0;
        *(ulong *)(lVar19 + lVar14) =
             CONCAT17(uStack_f1,
                      CONCAT16(uStack_f2,CONCAT15(uStack_f3,CONCAT14(uStack_f4,uStack_f8))));
        *(long **)(lVar19 + 0x10 + lVar14) = plStack_e0;
        *(ulong *)(lVar19 + 0x18 + lVar14) = uStack_d8;
        *(undefined8 *)(lVar19 + 0x20 + lVar14) = 0;
        puVar21 = puStack_b0;
        if (puVar25 != puVar33) {
          lVar17 = 0;
          do {
            puVar37 = (undefined4 *)((long)puVar25 + lVar17);
            uVar27 = *puVar37;
            uVar36 = puVar37[1];
            uVar28 = puVar37[2];
            uVar10 = puVar37[3];
            puVar21 = (undefined8 *)((long)puVar25 + lVar17 + 0x10);
            uVar22 = puVar21[1];
            puVar3 = (undefined8 *)(lVar19 + 0x10 + lVar17);
            *puVar3 = *puVar21;
            puVar3[1] = uVar22;
            puVar37 = (undefined4 *)(lVar19 + lVar17);
            *puVar37 = uVar27;
            puVar37[1] = uVar36;
            puVar37[2] = uVar28;
            puVar37[3] = uVar10;
            uVar22 = *(undefined8 *)((long)puVar25 + lVar17 + 0x20);
            *(undefined8 *)((long)puVar25 + lVar17 + 0x20) = 0;
            *(undefined8 *)(lVar19 + 0x20 + lVar17) = uVar22;
            lVar18 = lVar17 + 0x28;
            lVar17 = lVar17 + 0x28;
          } while ((undefined8 *)((long)puVar25 + lVar18) != puVar33);
          do {
            plVar20 = (long *)puVar25[4];
            puVar25[4] = 0;
            if (plVar20 != (long *)0x0) {
              (**(code **)(*plVar20 + 8))();
            }
            puVar25 = puVar25 + 5;
          } while (puVar25 != puVar33);
          puVar25 = *(undefined8 **)(param_1 + 0x88);
          puVar21 = *(undefined8 **)(param_1 + 0x98);
        }
        puVar33 = (undefined8 *)(lVar19 + 0x28 + lVar14);
        *(long *)(param_1 + 0x88) = lVar19;
        *(undefined8 **)(param_1 + 0x90) = puVar33;
        *(ulong *)(param_1 + 0x98) = uVar16 * 0x28 + lVar19;
        if (puVar25 != (undefined8 *)0x0) {
          func_0x0412a280(puVar25,(long)puVar21 - (long)puVar25);
        }
      }
      *(undefined8 **)(param_1 + 0x90) = puVar33;
      uVar34 = uStack_d0;
      lVar19 = lStack_c0;
      goto LAB_0d3baee0;
    }
    plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar20 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar20 = (long)&UNK_0f47e0b0;
    plVar20[2] = 0;
    plVar20[3] = 0;
    plVar20[1] = (long)(plVar20 + 2);
    plStack_78 = plVar20;
    func_0x0d37a910(&uStack_118,&plStack_78,puVar21,*(undefined4 *)(param_1 + 0x34));
    plVar20 = plStack_78;
    lVar19 = lStack_c0;
    uVar34 = uStack_d0;
    plStack_78 = (long *)0x0;
    if (plVar20 != (long *)0x0) {
      (**(code **)(*plVar20 + 8))();
    }
    func_0x0d37eb60(uStack_118,puStack_b0);
    puVar33 = *(undefined8 **)(param_1 + 0x90);
    if (puVar33 < *(undefined8 **)(param_1 + 0x98)) goto LAB_0d3baeb0;
    uVar22 = func_0x0d3c8e80(puStack_88,&uStack_f8,&uStack_118);
  }
  else {
    plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar20 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar20 = (long)&UNK_0f47e0b0;
    plVar20[2] = 0;
    plVar20[3] = 0;
    plVar20[1] = (long)(plVar20 + 2);
    plStack_80 = plVar20;
    func_0x0d6bd5f0(plVar20,plVar39 + 7);
    func_0x0d37a910(&uStack_118,&plStack_80,puVar21,*(undefined4 *)(param_1 + 0x34));
    plVar20 = plStack_80;
    lVar19 = lStack_c0;
    uVar34 = uStack_d0;
    plStack_80 = (long *)0x0;
    if (plVar20 != (long *)0x0) {
      (**(code **)(*plVar20 + 8))();
    }
    func_0x0d37eb60(uStack_118,puStack_b0);
    puVar33 = *(undefined8 **)(param_1 + 0x90);
    if (puVar33 < *(undefined8 **)(param_1 + 0x98)) {
LAB_0d3baeb0:
      *(undefined4 *)(puVar33 + 1) = (undefined4)uStack_f0;
      *puVar33 = CONCAT17(uStack_f1,
                          CONCAT16(uStack_f2,CONCAT15(uStack_f3,CONCAT14(uStack_f4,uStack_f8))));
      puVar33[2] = plStack_98;
      puVar33[3] = uStack_d8;
      puVar33[4] = uStack_118;
      *(undefined8 **)(param_1 + 0x90) = puVar33 + 5;
      goto LAB_0d3baee0;
    }
    uVar22 = func_0x0d3c8e80(puStack_88,&uStack_f8,&uStack_118);
  }
  plVar20 = uStack_118;
  *(undefined8 *)(param_1 + 0x90) = uVar22;
  uStack_118 = (long *)0x0;
  if (plVar20 != (long *)0x0) {
    (**(code **)(*plVar20 + 8))();
  }
LAB_0d3baee0:
  uVar34 = uVar34 + 1;
  lVar14 = *(long *)(lVar19 + 8);
  uVar16 = *(long *)(lVar19 + 0x10) - lVar14;
  if ((long)(int)(uVar16 >> 3) <= (long)uVar34) goto LAB_0d3bb95b;
  goto LAB_0d3baf01;
LAB_0d3bb481:
  uStack_d8 = plVar39[3];
  goto LAB_0d3bb4b8;
}



/* ---- referenced strings ----
 * 0x1306cb5  true
 * 0x1331189  waterlogged
 * 0x133118c  erlogged
 */
