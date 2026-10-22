/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a813f0 (ELF vaddr 0x49813f0)
 * Label: caller-of-seed
 * Body:  [[04a813f0, 04a8251e] [04a826fb, 04a827dd] [04a830fb, 04a8319b] [04a83741, 04a839fb] [04a83a00, 04a83d3c] [04a83d8e, 04a83da3] [04a83f0a, 04a83f57]]
 * Ghidra: FUN_04a813f0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_04a813f0(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  uint *puVar5;
  bool bVar6;
  char cVar7;
  ushort uVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  ulong *puVar13;
  long *plVar14;
  undefined8 uVar15;
  long *plVar16;
  uint uVar17;
  long *plVar18;
  undefined8 *puVar19;
  ulong uVar20;
  byte bVar21;
  undefined *puVar22;
  byte bVar23;
  ulong uVar24;
  undefined7 *puVar25;
  float *pfVar26;
  long lVar27;
  uint uVar28;
  long *unaff_R12;
  long *unaff_R14;
  int iVar29;
  ulong *unaff_R15;
  bool bVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar49 [12];
  undefined1 auVar50 [16];
  undefined1 auStack_db8 [12];
  undefined1 auStack_da8 [12];
  uint *puStack_d98;
  undefined8 *puStack_d88;
  undefined *puStack_d78;
  undefined *puStack_d68;
  long lStack_d60;
  long lStack_d58;
  undefined8 uStack_d50;
  ulong uStack_d48;
  undefined8 uStack_d40;
  undefined8 uStack_d38;
  long lStack_d30;
  long *plStack_d28;
  undefined8 uStack_d18;
  uint5 uStack_d10;
  undefined3 uStack_d0b;
  undefined8 uStack_d08;
  undefined8 uStack_d00;
  undefined8 uStack_cf8;
  short sStack_cd6;
  long lStack_ba8;
  float fStack_ba0;
  long *plStack_b88;
  short sStack_b66;
  float fStack_a38;
  float fStack_a34;
  undefined4 uStack_a30;
  float fStack_a2c;
  undefined4 uStack_a28;
  int iStack_a24;
  float fStack_a20;
  uint uStack_a1c;
  undefined8 uStack_a18;
  ulong uStack_a10;
  ulong uStack_a08;
  undefined4 uStack_a00;
  undefined1 uStack_9fc;
  undefined1 uStack_9f8;
  undefined7 uStack_9f7;
  byte bStack_9f0;
  undefined7 uStack_9ef;
  ulong uStack_9e8;
  undefined7 *puStack_9e0;
  byte bStack_9d0;
  undefined7 uStack_9cf;
  uint uStack_9c0;
  undefined4 uStack_9bc;
  undefined4 uStack_9b8;
  
  func_0x0ca61580();
  lVar10 = (**(code **)(**(long **)(param_1 + 0xa0) + 0x268))();
  if (lVar10 == 0) {
LAB_04a81897:
    unaff_R14 = *(long **)(param_1 + 0x4b8);
    lStack_d30 = param_1;
    fVar31 = (float)CONCAT22(uStack_a30._2_2_,(undefined2)uStack_a30);
    uVar17 = CONCAT22(uStack_a28._2_2_,(undefined2)uStack_a28);
    puVar5 = (uint *)CONCAT44(uStack_a18._4_4_,(int)uStack_a18);
    if (unaff_R14 == (long *)0x0) goto LAB_04a83788;
    iVar9 = *(int *)((long)unaff_R14 + 0x34);
    *(int *)((long)unaff_R14 + 0x34) = iVar9 + 1;
    if (0x12 < iVar9) {
      *(undefined4 *)((long)unaff_R14 + 0x34) = 0;
      lVar10 = (**(code **)(*(long *)*unaff_R14 + 0x130))();
      *(undefined1 *)(lVar10 + 0x18) = 1;
    }
    cVar7 = (char)unaff_R14[0x19];
    if (cVar7 == '\x02') {
      if (unaff_R14[0x1f] != 0) {
        lVar10 = *(long *)(unaff_R14[0x1b] + ((ulong)unaff_R14[0x1e] / 0x38) * 8);
        uVar24 = (ulong)unaff_R14[0x1e] % 0x38;
        cVar7 = *(char *)(lVar10 + uVar24 * 0x48);
        if (cVar7 == '\x01') {
          func_0x04a7e5f0(unaff_R14,lVar10 + uVar24 * 0x48);
        }
        else if (cVar7 == '\0') {
          func_0x04a7e190(unaff_R14);
        }
        lVar12 = *(long *)(unaff_R14[0x1b] + ((ulong)unaff_R14[0x1e] / 0x38) * 8);
        uVar24 = (ulong)unaff_R14[0x1e] % 0x38;
        lVar10 = lVar12 + uVar24 * 0x48;
        *(undefined1 *)(lVar12 + 0x28 + uVar24 * 0x48) = 0;
        plVar11 = *(long **)(lVar12 + 0x30 + uVar24 * 0x48);
        *(undefined8 *)(lVar12 + 0x30 + uVar24 * 0x48) = 0;
        if (plVar11 == (long *)0x0) {
          *(undefined4 *)(lVar10 + 0x40) = 0;
          *(undefined8 *)(lVar10 + 0x38) = 0;
        }
        else {
          lVar12 = lVar12 + uVar24 * 0x48;
          (**(code **)(*plVar11 + 8))();
          plVar11 = *(long **)(lVar12 + 0x30);
          *(long *)(lVar12 + 0x30) = 0;
          *(undefined8 *)(lVar12 + 0x38) = 0;
          *(undefined4 *)(lVar12 + 0x40) = 0;
          if (plVar11 != (long *)0x0) {
            (**(code **)(*plVar11 + 8))();
          }
        }
        *(undefined1 *)(lVar10 + 8) = 0;
        plVar11 = *(long **)(lVar10 + 0x10);
        *(undefined8 *)(lVar10 + 0x10) = 0;
        if (plVar11 == (long *)0x0) {
          *(undefined4 *)(lVar10 + 0x20) = 0;
          *(undefined8 *)(lVar10 + 0x18) = 0;
        }
        else {
          (**(code **)(*plVar11 + 8))();
          plVar11 = *(long **)(lVar10 + 0x10);
          *(long *)(lVar10 + 0x10) = 0;
          *(undefined8 *)(lVar10 + 0x18) = 0;
          *(undefined4 *)(lVar10 + 0x20) = 0;
          if (plVar11 != (long *)0x0) {
            (**(code **)(*plVar11 + 8))();
          }
        }
        uVar24 = unaff_R14[0x1e] + _DAT_014e9060;
        lVar10 = unaff_R14[0x1f] + _UNK_014e9068;
        unaff_R14[0x1e] = uVar24;
        unaff_R14[0x1f] = lVar10;
        if (0x6f < uVar24) {
          func_0x0412a280(*(undefined8 *)unaff_R14[0x1b],0xfc0);
          unaff_R14[0x1b] = unaff_R14[0x1b] + 8;
          unaff_R14[0x1e] = unaff_R14[0x1e] + -0x38;
        }
        cVar7 = (char)unaff_R14[0x19];
        goto LAB_04a81a64;
      }
LAB_04a81e7f:
      if ((((char)unaff_R14[0x19] == '\x01') &&
          (cVar7 = func_0x04a7c2a0(unaff_R14[0x12],(int)unaff_R14[0x13],(int)unaff_R14[0x14]),
          cVar7 != '\0')) &&
         (cVar7 = func_0x04a7c2a0(unaff_R14[0x16],(int)unaff_R14[0x17],(int)unaff_R14[0x18]),
         cVar7 != '\0')) {
        lVar10 = unaff_R14[0x16];
        func_0x0c9d0c10(&fStack_a38,*(undefined8 *)(lVar10 + 0x20),*(undefined8 *)(lVar10 + 0x28),
                        lVar10,1,0,0,0);
        lVar10 = unaff_R14[0x12];
        func_0x0c9d0c10(&lStack_ba8,*(undefined8 *)(lVar10 + 0x20),*(undefined8 *)(lVar10 + 0x28),
                        lVar10,1,0,0,0);
        plVar11 = unaff_R14 + 0x13;
        plVar16 = unaff_R14 + 0x17;
        func_0x04a7ebd0(&lStack_ba8,&fStack_a38,plVar11,plVar16,0);
        func_0x04a7ebd0(&fStack_a38,&lStack_ba8,plVar16,plVar11,1);
        *(undefined1 *)(unaff_R14 + 0x19) = 2;
        plVar14 = (long *)unaff_R14[0x12];
        unaff_R14[0x12] = 0;
        if (plVar14 != (long *)0x0) {
          (**(code **)(*plVar14 + 8))();
        }
        plVar14 = (long *)unaff_R14[0x16];
        unaff_R14[0x16] = 0;
        if (plVar14 != (long *)0x0) {
          (**(code **)(*plVar14 + 8))();
        }
        *(undefined4 *)(unaff_R14 + 0x14) = 0;
        *plVar11 = 0;
        *(undefined4 *)(unaff_R14 + 0x18) = 0;
        *plVar16 = 0;
        func_0x0c9d0f40(&lStack_ba8);
        pfVar26 = &fStack_a38;
        goto LAB_04a81fef;
      }
    }
    else {
LAB_04a81a64:
      if (((cVar7 != '\0') ||
          (cVar7 = func_0x04a7c2a0(unaff_R14[0x12],(int)unaff_R14[0x13],(int)unaff_R14[0x14]),
          cVar7 == '\0')) ||
         (cVar7 = func_0x04a7c2a0(unaff_R14[0x16],(int)unaff_R14[0x17],(int)unaff_R14[0x18]),
         cVar7 == '\0')) goto LAB_04a81e7f;
      lVar10 = unaff_R14[0x12];
      func_0x0c9d0c10(&lStack_ba8,*(undefined8 *)(lVar10 + 0x20),*(undefined8 *)(lVar10 + 0x28),
                      lVar10,1,0,0,0);
      lVar10 = unaff_R14[0x16];
      func_0x0c9d0c10(&uStack_d18,*(undefined8 *)(lVar10 + 0x20),*(undefined8 *)(lVar10 + 0x28),
                      lVar10,1,0,0,0);
      auStack_db8 = func_0x05327000(&uStack_d18,unaff_R14 + 0x17,1,1,0);
      if ((auStack_db8._0_4_ == 0) && (auStack_db8._8_4_ == 0 && auStack_db8._0_8_ == 0)) {
        auStack_db8._8_4_ = (undefined4)unaff_R14[0x18];
        auStack_db8._4_4_ = 0x4b;
        auStack_db8._0_4_ = (int)unaff_R14[0x17];
        func_0x04a7ea80(&uStack_d18,auStack_db8._0_8_);
      }
      auVar49 = func_0x05326d80(&uStack_d18,auStack_db8,0x10,1);
      auStack_db8._8_4_ = auVar49._8_4_;
      auStack_db8._0_8_ = auVar49._0_8_ + 0xa00000000;
      func_0x0b5fb590(&fStack_a38);
      plVar11 = unaff_R14 + 0x13;
      lStack_d60 = CONCAT62(lStack_d60._2_6_,0x101);
      lStack_d58 = _DAT_0f6b3a90;
      uStack_d50 = 0;
      puStack_d68 = &UNK_0f472988;
      if ((char)unaff_R14[0x11] == '\x01') {
        func_0x0d50f3a0(&puStack_d68,&lStack_ba8,plVar11,&fStack_a38);
      }
      if ((char)unaff_R14[0x15] == '\x01') {
        func_0x0d50f3a0(&puStack_d68,&uStack_d18,auStack_db8,&fStack_a38);
      }
      lVar10 = (**(code **)(lStack_ba8 + 0x138))(&lStack_ba8,plVar11);
      if (lVar10 != 0) {
        auStack_da8._0_8_ = CONCAT71(auStack_da8._1_7_,(char)unaff_R14[0x13]) & 0xffffffffffffff0f;
        auStack_da8._0_8_ =
             CONCAT62(auStack_da8._2_6_,CONCAT11((char)unaff_R14[0x14],auStack_da8[0])) &
             0xffffffffffff0fff;
        auStack_da8._2_2_ = *(short *)((long)unaff_R14 + 0x9c) - sStack_b66;
        lVar10 = func_0x0cb18130(lVar10 + 0x13d0,auStack_da8);
        if (((lVar10 != 0) && (plVar16 = *(long **)(lVar10 + 0x18), plVar16 != (long *)0x0)) &&
           (cVar7 = (**(code **)(*plVar16 + 0x88))(plVar16,0x18), cVar7 != '\0')) {
          auStack_da8 = func_0x05327000(&uStack_d18,auStack_db8,0,1,0);
          auVar49 = func_0x05326d80(&lStack_ba8,auStack_da8,5,0);
          auStack_da8._8_4_ = auVar49._8_4_;
          auStack_da8._0_8_ =
               (auVar49._0_8_ & 0xffffffff) + (auVar49._0_8_ & 0xffffffff00000000) + 0x100000000;
          *(undefined4 *)(plVar16 + 0x1d) = auStack_da8._8_4_;
          plVar16[0x1c] = auStack_da8._0_8_;
          *(undefined2 *)((long)plVar16 + 0xee) = 0x100;
          *(byte *)((long)plVar16 + 0x4c) = *(byte *)((long)plVar16 + 0x4c) | 1;
        }
      }
      lVar10 = (**(code **)(uStack_d18 + 0x138))(&uStack_d18,auStack_db8);
      if (lVar10 != 0) {
        auStack_da8._0_8_ = CONCAT71(auStack_da8._1_7_,auStack_db8[0]) & 0xffffffffffffff0f;
        auStack_da8._0_8_ =
             CONCAT62(auStack_da8._2_6_,CONCAT11(auStack_db8[8],auStack_da8[0])) &
             0xffffffffffff0fff;
        auStack_da8._2_2_ = auStack_db8._4_2_ - sStack_cd6;
        lVar10 = func_0x0cb18130(lVar10 + 0x13d0,auStack_da8);
        if (((lVar10 != 0) && (plVar16 = *(long **)(lVar10 + 0x18), plVar16 != (long *)0x0)) &&
           (cVar7 = (**(code **)(*plVar16 + 0x88))(plVar16,0x18), cVar7 != '\0')) {
          auVar49 = func_0x05327000(&lStack_ba8,plVar11,0,3,0);
          *(undefined1 (*) [12])(plVar16 + 0x1c) = auVar49;
          *(undefined2 *)((long)plVar16 + 0xee) = 0x100;
          *(byte *)((long)plVar16 + 0x4c) = *(byte *)((long)plVar16 + 0x4c) | 1;
        }
      }
      *(undefined1 *)(unaff_R14 + 0x19) = 2;
      plVar16 = (long *)unaff_R14[0x12];
      unaff_R14[0x12] = 0;
      if (plVar16 != (long *)0x0) {
        (**(code **)(*plVar16 + 8))();
      }
      plVar16 = (long *)unaff_R14[0x16];
      unaff_R14[0x16] = 0;
      if (plVar16 != (long *)0x0) {
        (**(code **)(*plVar16 + 8))();
      }
      *(undefined4 *)(unaff_R14 + 0x14) = 0;
      *plVar11 = 0;
      *(undefined4 *)(unaff_R14 + 0x18) = 0;
      unaff_R14[0x17] = 0;
      func_0x0c9d0f40(&uStack_d18);
      pfVar26 = (float *)&lStack_ba8;
LAB_04a81fef:
      func_0x0c9d0f40(pfVar26);
    }
    fStack_a38 = (float)_DAT_014eae50;
    fStack_a34 = (float)((ulong)_DAT_014eae50 >> 0x20);
    uStack_a30._0_2_ = 0;
    uStack_a30._2_2_ = 0xc348;
    fStack_a2c = (float)_DAT_014e6cb0;
    uStack_a28._0_2_ = (undefined2)((ulong)_DAT_014e6cb0 >> 0x20);
    uStack_a28._2_2_ = (undefined2)((ulong)_DAT_014e6cb0 >> 0x30);
    iStack_a24 = 0x43490000;
    plStack_b88 = (long *)0x0;
    unaff_R12 = &lStack_ba8;
    lVar10 = (**(code **)(*(long *)*unaff_R14 + 0xf0))
                       ((long *)*unaff_R14,0x13f,&fStack_a38,0,unaff_R12);
    if (lVar10 == 0) {
      if (plStack_b88 == unaff_R12) {
        lVar10 = 0x20;
      }
      else {
        lVar10 = 0x28;
        fVar31 = (float)CONCAT22(uStack_a30._2_2_,(undefined2)uStack_a30);
        uVar17 = CONCAT22(uStack_a28._2_2_,(undefined2)uStack_a28);
        puVar5 = (uint *)CONCAT44(uStack_a18._4_4_,(int)uStack_a18);
        if (plStack_b88 == (long *)0x0) goto LAB_04a83788;
      }
      (**(code **)(*plStack_b88 + lVar10))();
      fVar31 = (float)CONCAT22(uStack_a30._2_2_,(undefined2)uStack_a30);
      uVar17 = CONCAT22(uStack_a28._2_2_,(undefined2)uStack_a28);
      puVar5 = (uint *)CONCAT44(uStack_a18._4_4_,(int)uStack_a18);
      goto LAB_04a83788;
    }
    unaff_R15 = (ulong *)((long)unaff_R14 + 0x54);
    lVar10 = (**(code **)(*(long *)*unaff_R14 + 0x138))((long *)*unaff_R14,unaff_R15);
    if (lVar10 != 0) {
      if ((*(byte *)(lVar10 + 0x70) & 1) == 0) {
        if (*(byte *)(lVar10 + 0x70) >> 1 == 0) goto LAB_04a820be;
      }
      else if (*(long *)(lVar10 + 0x78) == 0) {
LAB_04a820be:
        uStack_d18 = 0xffffffffffffffff;
        lVar10 = (**(code **)(*(long *)*unaff_R14 + 0x148))((long *)*unaff_R14,&uStack_d18);
        if (lVar10 != 0) {
          if ((*(byte *)(lVar10 + 0x70) & 1) == 0) {
            if (*(byte *)(lVar10 + 0x70) >> 1 == 0) goto LAB_04a8210e;
          }
          else if (*(long *)(lVar10 + 0x78) == 0) {
LAB_04a8210e:
            uStack_d18 = 0xffffffff;
            lVar10 = (**(code **)(*(long *)*unaff_R14 + 0x148))((long *)*unaff_R14,&uStack_d18);
            if (lVar10 != 0) {
              if ((*(byte *)(lVar10 + 0x70) & 1) == 0) {
                uVar24 = (ulong)(*(byte *)(lVar10 + 0x70) >> 1);
              }
              else {
                uVar24 = *(ulong *)(lVar10 + 0x78);
              }
              if (uVar24 == 0) {
                uStack_d18 = 0xffffffff;
                lVar10 = (**(code **)(*(long *)*unaff_R14 + 0x148))((long *)*unaff_R14,&uStack_d18);
                if (lVar10 != 0) {
                  if ((*(byte *)(lVar10 + 0x70) & 1) == 0) {
                    uVar24 = (ulong)(*(byte *)(lVar10 + 0x70) >> 1);
                  }
                  else {
                    uVar24 = *(ulong *)(lVar10 + 0x78);
                  }
                  if (uVar24 == 0) {
                    uStack_d18 = 0xffffffff00000000;
                    lVar10 = (**(code **)(*(long *)*unaff_R14 + 0x148))
                                       ((long *)*unaff_R14,&uStack_d18);
                    if (lVar10 != 0) {
                      if ((*(byte *)(lVar10 + 0x70) & 1) == 0) {
                        uVar24 = (ulong)(*(byte *)(lVar10 + 0x70) >> 1);
                      }
                      else {
                        uVar24 = *(ulong *)(lVar10 + 0x78);
                      }
                      if (uVar24 == 0) {
                        uStack_d18 = 0;
                        lVar10 = (**(code **)(*(long *)*unaff_R14 + 0x148))
                                           ((long *)*unaff_R14,&uStack_d18);
                        if (lVar10 != 0) {
                          if ((*(byte *)(lVar10 + 0x70) & 1) == 0) {
                            uVar24 = (ulong)(*(byte *)(lVar10 + 0x70) >> 1);
                          }
                          else {
                            uVar24 = *(ulong *)(lVar10 + 0x78);
                          }
                          if (uVar24 == 0) {
                            uStack_d18 = 0;
                            lVar10 = (**(code **)(*(long *)*unaff_R14 + 0x148))
                                               ((long *)*unaff_R14,&uStack_d18);
                            if (lVar10 != 0) {
                              if ((*(byte *)(lVar10 + 0x70) & 1) == 0) {
                                uVar24 = (ulong)(*(byte *)(lVar10 + 0x70) >> 1);
                              }
                              else {
                                uVar24 = *(ulong *)(lVar10 + 0x78);
                              }
                              if (uVar24 == 0) {
                                uStack_d18 = 0xffffffff00000000;
                                lVar10 = (**(code **)(*(long *)*unaff_R14 + 0x148))
                                                   ((long *)*unaff_R14,&uStack_d18);
                                if (lVar10 != 0) {
                                  if ((*(byte *)(lVar10 + 0x70) & 1) == 0) {
                                    uVar24 = (ulong)(*(byte *)(lVar10 + 0x70) >> 1);
                                  }
                                  else {
                                    uVar24 = *(ulong *)(lVar10 + 0x78);
                                  }
                                  if (uVar24 == 0) {
                                    uStack_d18 = 0;
                                    lVar10 = (**(code **)(*(long *)*unaff_R14 + 0x148))
                                                       ((long *)*unaff_R14,&uStack_d18);
                                    if (lVar10 != 0) {
                                      uVar17 = (uint)*(byte *)(lVar10 + 0x70);
                                      if ((*(byte *)(lVar10 + 0x70) & 1) == 0) goto LAB_04a8230e;
                                      uVar24 = *(ulong *)(lVar10 + 0x78);
                                      goto LAB_04a82310;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_04a8214a:
    bVar30 = false;
    bVar6 = false;
    if (plStack_b88 != unaff_R12) goto LAB_04a8215d;
LAB_04a8236f:
    (**(code **)(*plStack_b88 + 0x20))();
    puVar5 = (uint *)CONCAT44(uStack_a18._4_4_,(int)uStack_a18);
    uVar17 = CONCAT22(uStack_a28._2_2_,(undefined2)uStack_a28);
    fVar31 = (float)CONCAT22(uStack_a30._2_2_,(undefined2)uStack_a30);
    bVar6 = bVar30;
  }
  else {
    lVar12 = *(long *)(lVar10 + 0x10);
    uVar17 = *(uint *)(lVar10 + 0x18);
    plVar11 = (long *)(*(long *)(lVar12 + 0x38) +
                      (ulong)((int)((ulong)(*(long *)(lVar12 + 0x40) - *(long *)(lVar12 + 0x38)) >>
                                   3) - 1U & 0xaf993816) * 8);
    do {
      if (*plVar11 == -1) {
        plVar16 = *(long **)(lVar12 + 0x58);
        plVar11 = plVar16;
        goto LAB_04a81479;
      }
      lVar27 = *plVar11 * 0x20;
      plVar11 = (long *)(*(long *)(lVar12 + 0x50) + lVar27);
    } while (*(int *)(*(long *)(lVar12 + 0x50) + 8 + lVar27) != -0x5066c7ea);
    plVar16 = *(long **)(lVar12 + 0x58);
LAB_04a81479:
    if ((plVar11 != plVar16) && (lVar12 = plVar11[2], lVar12 != 0)) {
      uVar24 = (ulong)((uVar17 & 0x3ffff) >> 0xb);
      if ((uVar24 < (ulong)(*(long *)(lVar12 + 0x10) - *(long *)(lVar12 + 8) >> 3)) &&
         (lVar27 = *(long *)(*(long *)(lVar12 + 8) + uVar24 * 8), lVar27 != 0)) {
        uVar1 = *(uint *)(lVar27 + (ulong)(uVar17 & 0x7ff) * 4);
        uVar17 = uVar17 & 0xfffc0000 ^ uVar1;
        if (uVar17 < 0x3ffff) {
          lVar12 = *(long *)(*(long *)(lVar12 + 0x50) + (ulong)(uVar1 >> 4 & 0x3ff8));
          uVar17 = 0;
          if (lVar12 != 0) {
            if (*(int *)(lVar12 + (ulong)(uVar1 & 0x7f) * 4) == 2) {
              puVar19 = *(undefined8 **)(param_1 + 0x4c0);
              cVar7 = (**(code **)(*(long *)*puVar19 + 0x9f0))();
              if (((cVar7 != '\0') && (fVar31 = *(float *)((long)puVar19 + 0x14), fVar31 == 0.0)) &&
                 (!NAN(fVar31))) {
                plVar11 = *(long **)(param_1 + 0xa0);
                fVar31 = *(float *)(*(long *)(param_1 + 0x4c0) + 0x10);
                puVar19 = *(undefined8 **)(lVar10 + 0x208);
                puStack_d88 = (undefined8 *)
                              CONCAT44(puStack_d88._4_4_,
                                       *(float *)(*(long *)(param_1 + 0x4c0) + 0xc) * _DAT_01198cb0)
                ;
                fVar31 = (float)func_0x0eee37e0(_DAT_0119839c * fVar31 + fVar31,_DAT_01198934);
                puStack_d78 = (undefined *)CONCAT44(puStack_d78._4_4_,fVar31 * _DAT_01198cb0);
                puStack_d98 = (uint *)func_0x0eee3810();
                puStack_d78 = (undefined *)func_0x0eee3830();
                plStack_d28 = (long *)func_0x0eee3810();
                fVar31 = (float)func_0x0eee3830();
                fVar34 = (_DAT_011983f0 - plStack_d28._0_4_) * 0.0;
                fVar37 = fVar34 - fVar31 * 0.0;
                fVar40 = (_DAT_011983f0 - puStack_d98._0_4_) * 0.0;
                fVar42 = fVar40 * 0.0;
                fVar43 = fVar42 + puStack_d98._0_4_;
                fVar48 = (fVar42 - puStack_d78._0_4_) * 0.0;
                fVar46 = fVar43 * 0.0;
                fVar47 = (fVar42 + puStack_d78._0_4_) * 0.0;
                fVar35 = (_DAT_011983f0 - puStack_d98._0_4_) + puStack_d98._0_4_;
                fVar34 = fVar34 * 0.0;
                fVar31 = fVar34 + fVar31;
                fVar34 = fVar34 + plStack_d28._0_4_;
                fVar32 = puStack_d78._0_4_ * _UNK_014e36d4 + fVar40;
                fVar33 = fVar32 * 0.0;
                fVar38 = fVar40 + puStack_d78._0_4_ * _DAT_014e36d0;
                fVar39 = fVar40 + puStack_d78._0_4_ * _UNK_014e36d4;
                fVar44 = fVar38 * 0.0;
                fVar45 = fVar39 * 0.0;
                fVar40 = puStack_d78._0_4_ * _DAT_014e36d0 + fVar40;
                fVar36 = fVar35 * 0.0;
                fVar41 = fVar40 * 0.0;
                fVar38 = fVar31 * (fVar36 + fVar45 + fVar38) +
                         fVar34 * (fVar41 + fVar46 + (fVar42 - puStack_d78._0_4_)) +
                         (fVar33 + fVar43 + fVar47) * fVar37;
                fVar33 = fVar31 * (fVar36 + fVar44 + fVar39) +
                         fVar34 * (fVar41 + fVar48 + fVar43) +
                         (fVar33 + fVar42 + puStack_d78._0_4_ + fVar46) * fVar37;
                fVar31 = (fVar40 + fVar48 + fVar46) * fVar34 + (fVar47 + fVar46 + fVar32) * fVar37 +
                         (fVar45 + fVar44 + fVar35) * fVar31;
                fVar32 = _DAT_011983f0 / SQRT(fVar33 * fVar33 + fVar38 * fVar38 + fVar31 * fVar31);
                uVar15 = *puVar19;
                lStack_ba8 = CONCAT44((float)((ulong)uVar15 >> 0x20) +
                                      fVar32 * fVar33 * _UNK_014ea414,
                                      (float)uVar15 + fVar32 * fVar38 * _DAT_014ea410);
                fStack_ba0 = fVar31 * fVar32 * _DAT_01198690 + *(float *)(puVar19 + 1);
                fStack_a38 = 1.1589699e-29;
                fStack_a34 = 0.0;
                uStack_a30._0_2_ = 0;
                uStack_a30._2_2_ = 0;
                fStack_a2c = 0.0;
                uStack_a28._0_2_ = 0;
                uStack_a28._2_2_ = 0;
                iStack_a24 = 0;
                fStack_a20 = 0.0;
                uStack_a1c = 0;
                uStack_a18._0_4_ = 0xffffffff;
                uStack_a18._4_4_ = 0xffffffff;
                uStack_a10 = uStack_a10 & 0xffffffffffffff00;
                (**(code **)(*plVar11 + 0x5e0))(plVar11,0x22c,&lStack_ba8,0xffffffff,&fStack_a38,0);
                plVar11 = (long *)CONCAT44(iStack_a24,
                                           CONCAT22(uStack_a28._2_2_,(undefined2)uStack_a28));
                uStack_a30._0_2_ = 0;
                uStack_a30._2_2_ = 0;
                fStack_a2c = 0.0;
                uStack_a28._0_2_ = 0;
                uStack_a28._2_2_ = 0;
                iStack_a24 = 0;
                if (plVar11 != (long *)0x0) {
                  LOCK();
                  plVar16 = plVar11 + 1;
                  lVar10 = *plVar16;
                  *plVar16 = *plVar16 + -1;
                  UNLOCK();
                  if (lVar10 == 0) {
                    (**(code **)(*plVar11 + 0x10))(plVar11);
                    func_0x0412c2d0(plVar11);
                  }
                  plVar11 = (long *)CONCAT44(iStack_a24,
                                             CONCAT22(uStack_a28._2_2_,(undefined2)uStack_a28));
                  fStack_a20 = 0.0;
                  uStack_a1c = 0;
                  if (plVar11 != (long *)0x0) {
                    LOCK();
                    plVar16 = plVar11 + 1;
                    lVar10 = *plVar16;
                    *plVar16 = *plVar16 + -1;
                    UNLOCK();
                    if (lVar10 == 0) {
                      (**(code **)(*plVar11 + 0x10))(plVar11);
                      func_0x0412c2d0(plVar11);
                    }
                  }
                }
              }
            }
            goto LAB_04a81897;
          }
        }
      }
    }
    func_0x04890760();
LAB_04a8230e:
    uVar24 = (ulong)(uVar17 >> 1);
LAB_04a82310:
    if (uVar24 != 0) goto LAB_04a8214a;
    uStack_d18 = 0;
    lVar10 = (**(code **)(*(long *)*unaff_R14 + 0x148))((long *)*unaff_R14,&uStack_d18);
    if (lVar10 == 0) goto LAB_04a8214a;
    if ((*(byte *)(lVar10 + 0x70) & 1) == 0) {
      uVar24 = (ulong)(*(byte *)(lVar10 + 0x70) >> 1);
    }
    else {
      uVar24 = *(ulong *)(lVar10 + 0x78);
    }
    if (uVar24 != 0) goto LAB_04a8214a;
    bVar30 = true;
    bVar6 = true;
    if (plStack_b88 == unaff_R12) goto LAB_04a8236f;
LAB_04a8215d:
    puVar5 = (uint *)CONCAT44(uStack_a18._4_4_,(int)uStack_a18);
    uVar17 = CONCAT22(uStack_a28._2_2_,(undefined2)uStack_a28);
    fVar31 = (float)CONCAT22(uStack_a30._2_2_,(undefined2)uStack_a30);
    if (plStack_b88 != (long *)0x0) {
      (**(code **)(*plStack_b88 + 0x28))();
      puVar5 = (uint *)CONCAT44(uStack_a18._4_4_,(int)uStack_a18);
      uVar17 = CONCAT22(uStack_a28._2_2_,(undefined2)uStack_a28);
      fVar31 = (float)CONCAT22(uStack_a30._2_2_,(undefined2)uStack_a30);
    }
  }
  if (!bVar6) goto LAB_04a83788;
  if ((int)unaff_R14[0xc] == 0) {
    if ((char)unaff_R14[7] == '\0') {
      plVar11 = (long *)(**(code **)(*(long *)*unaff_R14 + 0x150))();
      cVar7 = (**(code **)(*plVar11 + 0x9f0))(plVar11);
      if (cVar7 == '\0') {
        plVar11 = *(long **)(*unaff_R14 + 0x28);
        bVar23 = 1;
        bVar21 = 1;
        if (*(char *)(plVar11[0xe9] + 0xf8) == '\x01') {
          bVar21 = *(byte *)(plVar11[0xe9] + 0xa8);
        }
        lVar10 = (**(code **)(*plVar11 + 0xab8))(plVar11);
        if (0x29 < (int)((ulong)(*(long *)(lVar10 + 0x20) - *(long *)(lVar10 + 0x18)) >> 4) *
                   -0x11111111) {
          lVar12 = (**(code **)(*plVar11 + 0xab8))(plVar11);
          lVar10 = *(long *)(lVar12 + 0x18);
          fVar31 = (float)CONCAT22(uStack_a30._2_2_,(undefined2)uStack_a30);
          uVar17 = CONCAT22(uStack_a28._2_2_,(undefined2)uStack_a28);
          puVar5 = (uint *)CONCAT44(uStack_a18._4_4_,(int)uStack_a18);
          if ((lVar10 == 0) ||
             (fVar31 = (float)CONCAT22(uStack_a30._2_2_,(undefined2)uStack_a30),
             uVar17 = CONCAT22(uStack_a28._2_2_,(undefined2)uStack_a28),
             puVar5 = (uint *)CONCAT44(uStack_a18._4_4_,(int)uStack_a18),
             (int)((ulong)(*(long *)(lVar12 + 0x20) - lVar10) >> 4) * -0x11111111 < 0x2a))
          goto LAB_04a83788;
          if (*(int *)(lVar10 + 0x2678) != 1) {
LAB_04a83d8e:
            func_0x04931450();
code_r0x04a83d93:
            uVar15 = func_0x04882ef0(&UNK_012d4a56);
            func_0x04a7f520(&fStack_a38);
            plVar16 = (long *)func_0x0eee2d70(uVar15);
            lVar10 = 0x20;
            plVar11 = plStack_b88;
            if ((plStack_b88 != unaff_R12) && (lVar10 = 0x28, plStack_b88 == (long *)0x0)) {
              plVar11 = plVar16;
              lVar10 = func_0x0eee2d70();
            }
            (**(code **)(*plVar11 + lVar10))();
            func_0x0eee2d70(plVar16);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          bVar23 = *(byte *)(lVar10 + 0x2674);
        }
        fVar31 = (float)CONCAT22(uStack_a30._2_2_,(undefined2)uStack_a30);
        uVar17 = CONCAT22(uStack_a28._2_2_,(undefined2)uStack_a28);
        puVar5 = (uint *)CONCAT44(uStack_a18._4_4_,(int)uStack_a18);
        if ((bVar21 & bVar23) != 1) goto LAB_04a83788;
        plVar11 = (long *)(**(code **)(*(long *)*unaff_R14 + 0x150))();
        lVar10 = (**(code **)(*plVar11 + 0x1f8))(plVar11,unaff_R14[8],0);
        if (lVar10 == 0) {
          plVar11 = (long *)*unaff_R14;
          puStack_d68 = _DAT_014e41d0;
          lStack_d60 = _UNK_014e41d8;
          lStack_d58 = _DAT_014e5300;
          auStack_db8._0_8_ = _DAT_014e3240;
          auStack_db8._8_4_ = 0x43480000;
          func_0x04a7c510(&uStack_d18,&puStack_d68,auStack_db8);
          uStack_a18._0_4_ = 0;
          uStack_a18._4_4_ = 0;
          auVar50 = (**(code **)(*plVar11 + 0xf0))(plVar11,0xb35,&uStack_d18,0,&fStack_a38);
          pfVar26 = (float *)CONCAT44(uStack_a18._4_4_,(int)uStack_a18);
          if (pfVar26 == &fStack_a38) {
            lVar10 = 0x20;
LAB_04a83746:
            (**(code **)(*(long *)pfVar26 + lVar10))();
          }
          else {
            lVar10 = 0x28;
            if (pfVar26 != (float *)0x0) goto LAB_04a83746;
          }
          if (auVar50._0_8_ != 0) {
            lVar10 = *auVar50._8_8_;
            goto LAB_04a8375b;
          }
          if (*(char *)((long)unaff_R14 + 0x3a) != '\0') {
            lVar10 = (**(code **)(*(long *)*unaff_R14 + 0x150))();
            cVar7 = func_0x0c9c2f10(*(undefined8 *)(lVar10 + 0x3f8),unaff_R14[8]);
            if (cVar7 != '\0') goto LAB_04a83760;
          }
          func_0x04a7cf30(unaff_R14);
          func_0x04a7d5b0(unaff_R14,0);
        }
        else {
          cVar7 = func_0x0b3ce1c0(lVar10,0xb35);
          if (cVar7 != '\0') {
LAB_04a8375b:
            func_0x04a7d710(unaff_R14,lVar10);
          }
        }
LAB_04a83760:
        iVar9 = *(int *)((long)unaff_R14 + 0x2c);
        *(int *)((long)unaff_R14 + 0x2c) = iVar9 + 1;
        fVar31 = (float)CONCAT22(uStack_a30._2_2_,(undefined2)uStack_a30);
        uVar17 = CONCAT22(uStack_a28._2_2_,(undefined2)uStack_a28);
        puVar5 = (uint *)CONCAT44(uStack_a18._4_4_,(int)uStack_a18);
        if (0x62 < iVar9) {
          func_0x04a7d7d0(unaff_R14);
          *(undefined4 *)((long)unaff_R14 + 0x2c) = 0;
          fVar31 = (float)CONCAT22(uStack_a30._2_2_,(undefined2)uStack_a30);
          uVar17 = CONCAT22(uStack_a28._2_2_,(undefined2)uStack_a28);
          puVar5 = (uint *)CONCAT44(uStack_a18._4_4_,(int)uStack_a18);
        }
        goto LAB_04a83788;
      }
    }
    lVar10 = unaff_R14[6];
    *(int *)(unaff_R14 + 6) = (int)lVar10 + 1;
    fVar31 = (float)CONCAT22(uStack_a30._2_2_,(undefined2)uStack_a30);
    uVar17 = CONCAT22(uStack_a28._2_2_,(undefined2)uStack_a28);
    puVar5 = (uint *)CONCAT44(uStack_a18._4_4_,(int)uStack_a18);
    if (0x62 < (int)lVar10) {
      *(undefined4 *)(unaff_R14 + 6) = 0;
      iVar9 = -8;
      do {
        iVar29 = -8;
        do {
          lVar10 = (**(code **)(*(long *)*unaff_R14 + 0x140))((long *)*unaff_R14,iVar9,iVar29);
          if (lVar10 != 0) {
            for (puVar19 = *(undefined8 **)(lVar10 + 0x13e0); puVar19 != (undefined8 *)0x0;
                puVar19 = (undefined8 *)*puVar19) {
              fVar31 = (float)CONCAT22(uStack_a30._2_2_,(undefined2)uStack_a30);
              uVar17 = CONCAT22(uStack_a28._2_2_,(undefined2)uStack_a28);
              puVar5 = (uint *)CONCAT44(uStack_a18._4_4_,(int)uStack_a18);
              if (*(char *)(puVar19[3] + 0x14) == '\x16') goto LAB_04a83788;
            }
          }
          iVar29 = iVar29 + 1;
        } while (iVar29 != 9);
        iVar9 = iVar9 + 1;
      } while (iVar9 != 9);
      func_0x04a7d5b0(unaff_R14,1);
      fVar31 = (float)CONCAT22(uStack_a30._2_2_,(undefined2)uStack_a30);
      uVar17 = CONCAT22(uStack_a28._2_2_,(undefined2)uStack_a28);
      puVar5 = (uint *)CONCAT44(uStack_a18._4_4_,(int)uStack_a18);
    }
    goto LAB_04a83788;
  }
  plVar11 = (long *)(**(code **)(*(long *)*unaff_R14 + 0x150))();
  (**(code **)(*plVar11 + 0x3b0))(&fStack_a38,plVar11);
  if (CONCAT44(fStack_a34,fStack_a38) == 0) {
    bVar30 = true;
  }
  else {
    bVar30 = *(char *)(CONCAT44(fStack_a34,fStack_a38) + 2) != '\x01';
  }
  plVar11 = (long *)CONCAT44(fStack_a2c,CONCAT22(uStack_a30._2_2_,(undefined2)uStack_a30));
  if (plVar11 != (long *)0x0) {
    LOCK();
    plVar16 = plVar11 + 1;
    lVar10 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      func_0x0412c2d0(plVar11);
    }
  }
  fVar31 = (float)CONCAT22(uStack_a30._2_2_,(undefined2)uStack_a30);
  uVar17 = CONCAT22(uStack_a28._2_2_,(undefined2)uStack_a28);
  puVar5 = (uint *)CONCAT44(uStack_a18._4_4_,(int)uStack_a18);
  if (!bVar30) goto LAB_04a83788;
  if (unaff_R14[0xd] == unaff_R14[0xe]) {
    unaff_R14[0xc] = 0;
    func_0x04a7c560(unaff_R14);
  }
  uVar1 = *(uint *)((long)unaff_R14 + 100);
  *(uint *)((long)unaff_R14 + 100) = uVar1 + 1;
  plVar11 = (long *)(**(code **)(*(long *)*unaff_R14 + 0x150))();
  fVar31 = (float)CONCAT22(uStack_a30._2_2_,(undefined2)uStack_a30);
  uVar17 = CONCAT22(uStack_a28._2_2_,(undefined2)uStack_a28);
  puVar5 = (uint *)CONCAT44(uStack_a18._4_4_,(int)uStack_a18);
  switch((int)unaff_R14[0xc]) {
  case 1:
    unaff_R12 = (long *)unaff_R14[0xd];
    plVar11 = (long *)unaff_R14[0xe];
    if (unaff_R12 != plVar11) {
      iVar9 = *(int *)((long)unaff_R14 + 0x54);
      puStack_d88 = (undefined8 *)CONCAT44(puStack_d88._4_4_,(int)unaff_R14[0xb]);
      puStack_d98 = (uint *)CONCAT44(puStack_d98._4_4_,*(undefined4 *)((long)unaff_R14 + 0x5c));
      do {
        plVar16 = (long *)(**(code **)(*(long *)*unaff_R14 + 0x150))();
        lVar10 = (**(code **)(*plVar16 + 0x1f8))(plVar16,*unaff_R12,0);
        if (lVar10 != 0) {
          lVar12 = *(long *)(lVar10 + 0x10);
          uVar17 = *(uint *)(lVar10 + 0x18);
          plVar16 = (long *)(*(long *)(lVar12 + 0x38) +
                            (ulong)((int)((ulong)(*(long *)(lVar12 + 0x40) -
                                                 *(long *)(lVar12 + 0x38)) >> 3) - 1U & 0x4f6ba419)
                            * 8);
          do {
            if (*plVar16 == -1) {
              plVar14 = *(long **)(lVar12 + 0x58);
              plVar16 = plVar14;
              goto code_r0x04a825d9;
            }
            lVar27 = *plVar16 * 0x20;
            plVar16 = (long *)(*(long *)(lVar12 + 0x50) + lVar27);
          } while (*(int *)(*(long *)(lVar12 + 0x50) + 8 + lVar27) != 0x4f6ba419);
          plVar14 = *(long **)(lVar12 + 0x58);
code_r0x04a825d9:
          if ((plVar16 == plVar14) || (lVar12 = plVar16[2], lVar12 == 0)) goto code_r0x04a83d51;
          uVar24 = (ulong)((uVar17 & 0x3ffff) >> 0xb);
          if (((ulong)(*(long *)(lVar12 + 0x10) - *(long *)(lVar12 + 8) >> 3) <= uVar24) ||
             (((lVar27 = *(long *)(*(long *)(lVar12 + 8) + uVar24 * 8), lVar27 == 0 ||
               (uVar1 = *(uint *)(lVar27 + (ulong)(uVar17 & 0x7ff) * 4),
               0x3fffe < (uVar17 & 0xfffc0000 ^ uVar1))) ||
              (lVar12 = *(long *)(*(long *)(lVar12 + 0x50) + (ulong)(uVar1 >> 4 & 0x3ff8)),
              lVar12 == 0)))) goto code_r0x04a83d51;
          if (*(int *)(lVar12 + (ulong)(uVar1 & 0x7f) * 4) == 0x47) {
            plVar16 = *(long **)(lVar10 + 0x120);
            if (plVar16 == (long *)0x0) {
              func_0x04890760();
code_r0x04a83d42:
              func_0x04890760();
code_r0x04a83d47:
              func_0x04890760();
code_r0x04a83d4c:
              func_0x04890760();
code_r0x04a83d51:
              func_0x04890760();
code_r0x04a83d56:
              func_0x04890760();
code_r0x04a83d5b:
              func_0x04890760();
code_r0x04a83d60:
              func_0x04890760();
code_r0x04a83d65:
              func_0x04890760();
code_r0x04a83d6a:
              func_0x04882ef0(&UNK_012d4a56);
code_r0x04a83d76:
              func_0x04882ef0(&UNK_012d4a56);
code_r0x04a83d82:
              func_0x04882ef0(&UNK_012d4a56);
              goto LAB_04a83d8e;
            }
            plVar14 = *(long **)(*plVar16 + 0x178);
            cVar7 = (**(code **)(*plVar14 + 0x18))(plVar14);
            if (cVar7 == '\x06') {
              if (((*(int *)((long)plVar14 + 0xc) != iVar9) ||
                  ((float)(int)plVar14[2] != puStack_d88._0_4_)) ||
                 ((float)*(int *)((long)plVar14 + 0x14) != puStack_d98._0_4_)) {
                *(int *)((long)plVar14 + 0xc) = iVar9;
                *(float *)(plVar14 + 2) = puStack_d88._0_4_;
                *(float *)((long)plVar14 + 0x14) = puStack_d98._0_4_;
                uVar8 = (**(code **)(*plVar14 + 0x10))(plVar14);
                if (0x8c < uVar8) goto code_r0x04a83d6a;
                plVar16[(ulong)(uVar8 >> 6) + 3] =
                     plVar16[(ulong)(uVar8 >> 6) + 3] | 1L << ((byte)uVar8 & 0x3f);
              }
            }
          }
        }
        unaff_R12 = unaff_R12 + 1;
      } while (unaff_R12 != plVar11);
    }
    unaff_R14[0xc] = 2;
    fVar31 = (float)CONCAT22(uStack_a30._2_2_,(undefined2)uStack_a30);
    uVar17 = CONCAT22(uStack_a28._2_2_,(undefined2)uStack_a28);
    puVar5 = (uint *)CONCAT44(uStack_a18._4_4_,(int)uStack_a18);
    break;
  case 2:
    if (99 < (int)uVar1) {
      unaff_R14[0xc] = 3;
      fVar31 = (float)CONCAT22(uStack_a30._2_2_,(undefined2)uStack_a30);
      uVar17 = CONCAT22(uStack_a28._2_2_,(undefined2)uStack_a28);
      puVar5 = (uint *)CONCAT44(uStack_a18._4_4_,(int)uStack_a18);
      break;
    }
    if (((int)uVar1 < 0x5f) &&
       ((fVar31 = (float)CONCAT22(uStack_a30._2_2_,(undefined2)uStack_a30),
        uVar17 = CONCAT22(uStack_a28._2_2_,(undefined2)uStack_a28),
        puVar5 = (uint *)CONCAT44(uStack_a18._4_4_,(int)uStack_a18), 0x34 < uVar1 ||
        (fVar31 = (float)CONCAT22(uStack_a30._2_2_,(undefined2)uStack_a30),
        uVar17 = CONCAT22(uStack_a28._2_2_,(undefined2)uStack_a28),
        puVar5 = (uint *)CONCAT44(uStack_a18._4_4_,(int)uStack_a18),
        (0x1c000000000001U >> ((ulong)uVar1 & 0x3f) & 1) == 0)))) break;
    lVar10 = *unaff_R14;
    puStack_d68 = (undefined *)
                  CONCAT44((float)(int)((ulong)*(undefined8 *)((long)unaff_R14 + 0x54) >> 0x20),
                           (float)(int)*(undefined8 *)((long)unaff_R14 + 0x54));
    lStack_d60 = CONCAT44(lStack_d60._4_4_,(float)*(int *)((long)unaff_R14 + 0x5c));
    func_0x04a7e840(&fStack_a38,unaff_R14);
    uStack_d18 = uStack_d18 & 0xffffffffffffff00;
    uStack_d10 = (uint5)(uint)uStack_d10;
    (**(code **)(*plVar11 + 0x6b0))
              (plVar11,lVar10,0x13,&puStack_d68,0xffffffff,&fStack_a38,0,&uStack_d18);
    goto code_r0x04a82daf;
  case 3:
    uVar28 = (int)uVar1 % 0x28;
    fVar31 = (float)CONCAT22(uStack_a30._2_2_,(undefined2)uStack_a30);
    uVar17 = CONCAT22(uStack_a28._2_2_,(undefined2)uStack_a28);
    puVar5 = (uint *)CONCAT44(uStack_a18._4_4_,(int)uStack_a18);
    if ((0x27 < uVar28) ||
       (fVar31 = (float)CONCAT22(uStack_a30._2_2_,(undefined2)uStack_a30),
       uVar17 = CONCAT22(uStack_a28._2_2_,(undefined2)uStack_a28),
       puVar5 = (uint *)CONCAT44(uStack_a18._4_4_,(int)uStack_a18),
       (0xc000000001U >> ((ulong)uVar28 & 0x3f) & 1) == 0)) break;
    uVar15 = (**(code **)(*(long *)*unaff_R14 + 0x150))();
    func_0x04a7d900(&puStack_d68,uVar15);
    puVar22 = puStack_d68;
    uVar24 = (ulong)((int)uVar1 / 0x28);
    uVar20 = (lStack_d60 - (long)puStack_d68 >> 2) * 0x2e8ba2e8ba2e8ba3;
    if (uVar20 < uVar24 || uVar20 - uVar24 == 0) {
      puStack_d78 = puStack_d68;
      if (uVar28 == 0) {
        unaff_R14[0xc] = 4;
      }
code_r0x04a831b3:
      puVar22 = puStack_d78;
      fVar31 = uStack_a30;
      uVar17 = uStack_a28;
      puVar5 = uStack_a18;
      if (puStack_d78 == (undefined *)0x0) break;
    }
    else {
      puStack_d98 = (uint *)(puStack_d68 + uVar24 * 0x2c);
      if (uVar28 == 0) {
        puStack_d78 = puStack_d68;
        puVar19 = (undefined8 *)unaff_R14[0xd];
        puStack_d88 = (undefined8 *)unaff_R14[0xe];
        unaff_R12 = (long *)0x0;
        if (puVar19 != puStack_d88) {
          do {
            plVar11 = (long *)(**(code **)(*(long *)*unaff_R14 + 0x150))();
            lVar10 = (**(code **)(*plVar11 + 0x1f8))(plVar11,*puVar19,0);
            if (lVar10 != 0) {
              lVar12 = *(long *)(lVar10 + 0x10);
              uVar17 = *(uint *)(lVar10 + 0x18);
              plVar11 = (long *)(*(long *)(lVar12 + 0x38) +
                                (ulong)((int)((ulong)(*(long *)(lVar12 + 0x40) -
                                                     *(long *)(lVar12 + 0x38)) >> 3) - 1U &
                                       0x4f6ba419) * 8);
              do {
                if (*plVar11 == -1) {
                  plVar16 = *(long **)(lVar12 + 0x58);
                  plVar11 = plVar16;
                  goto code_r0x04a83249;
                }
                lVar27 = *plVar11 * 0x20;
                plVar11 = (long *)(*(long *)(lVar12 + 0x50) + lVar27);
              } while (*(int *)(*(long *)(lVar12 + 0x50) + 8 + lVar27) != 0x4f6ba419);
              plVar16 = *(long **)(lVar12 + 0x58);
code_r0x04a83249:
              if ((plVar11 == plVar16) || (lVar12 = plVar11[2], lVar12 == 0)) goto code_r0x04a83d60;
              uVar24 = (ulong)((uVar17 & 0x3ffff) >> 0xb);
              if (((ulong)(*(long *)(lVar12 + 0x10) - *(long *)(lVar12 + 8) >> 3) <= uVar24) ||
                 (((lVar27 = *(long *)(*(long *)(lVar12 + 8) + uVar24 * 8), lVar27 == 0 ||
                   (uVar1 = *(uint *)(lVar27 + (ulong)(uVar17 & 0x7ff) * 4),
                   0x3fffe < (uVar17 & 0xfffc0000 ^ uVar1))) ||
                  (lVar12 = *(long *)(*(long *)(lVar12 + 0x50) + (ulong)(uVar1 >> 4 & 0x3ff8)),
                  lVar12 == 0)))) goto code_r0x04a83d60;
              if (*(int *)(lVar12 + (ulong)(uVar1 & 0x7f) * 4) == 0x47) {
                plVar11 = *(long **)(lVar10 + 0x120);
                if (plVar11 == (long *)0x0) goto code_r0x04a83d47;
                uVar17 = *puStack_d98;
                unaff_R12 = (long *)(ulong)uVar17;
                uVar1 = puStack_d98[1];
                uVar28 = puStack_d98[3];
                plVar16 = *(long **)(*plVar11 + 0x178);
                plStack_d28 = plVar11;
                cVar7 = (**(code **)(*plVar16 + 0x18))(plVar16);
                if ((cVar7 == '\x06') &&
                   (((*(uint *)((long)plVar16 + 0xc) != uVar17 || ((int)plVar16[2] != uVar28 + 1))
                    || (*(uint *)((long)plVar16 + 0x14) != uVar1)))) {
                  *(uint *)((long)plVar16 + 0xc) = uVar17;
                  *(uint *)(plVar16 + 2) = uVar28 + 1;
                  *(uint *)((long)plVar16 + 0x14) = uVar1;
                  uVar8 = (**(code **)(*plVar16 + 0x10))(plVar16);
                  if (0x8c < uVar8) goto code_r0x04a83d82;
                  plStack_d28[(ulong)(uVar8 >> 6) + 3] =
                       plStack_d28[(ulong)(uVar8 >> 6) + 3] | 1L << ((byte)uVar8 & 0x3f);
                }
              }
            }
            puVar19 = puVar19 + 1;
          } while (puVar19 != puStack_d88);
        }
        goto code_r0x04a831b3;
      }
      if (uVar28 == 0x26) {
        puStack_d78 = puStack_d68;
        fVar31 = (float)(*puStack_d98 - 10);
        fStack_a34 = (float)(puStack_d98[3] - 10);
        puStack_d88 = (undefined8 *)(ulong)(uint)fStack_a34;
        iVar9 = puStack_d98[1] - 10;
        fVar32 = (float)(*puStack_d98 + 10);
        uVar17 = puStack_d98[3] + 10;
        iVar29 = puStack_d98[1] + 10;
        uStack_a18._4_4_ = uStack_a18._4_4_ & 0xffffff00;
        fStack_a38 = fVar31;
        fStack_a2c = fVar32;
        iStack_a24 = iVar29;
        fStack_a20 = fVar31;
        uStack_a1c = (uint)fStack_a34;
        uStack_a18._0_4_ = iVar9;
        uStack_a30 = (float)iVar9;
        uStack_a28 = uVar17;
        while ((((((fStack_a38 != fVar31 || (fStack_a34 != (float)(uint)puStack_d88)) ||
                  (uStack_a30 != (float)iVar9)) ||
                 ((fStack_a2c != fVar32 || (uStack_a28 != uVar17)))) || (iStack_a24 != iVar29)) ||
               (((fStack_a20 != fVar32 || (uStack_a1c != uVar17)) ||
                (((int)uStack_a18 != iVar29 || (uStack_a18._4_1_ == '\0'))))))) {
          uStack_d08 = 0;
          uStack_d00 = 0;
          uStack_d18 = 0;
          _uStack_d10 = 0;
          uStack_cf8 = 1;
          (**(code **)(*(long *)*unaff_R14 + 0x108))((long *)*unaff_R14,&fStack_a20,&uStack_d18);
          if ((int)uStack_a18 < iStack_a24) {
            uStack_a18._0_4_ = (int)uStack_a18 + 1;
          }
          else if ((int)uStack_a1c < (int)uStack_a28) {
            uStack_a18._0_4_ = (int)uStack_a30;
            uStack_a1c = uStack_a1c + 1;
          }
          else if ((int)fStack_a20 < (int)fStack_a2c) {
            uStack_a1c = (uint)fStack_a34;
            uStack_a18._0_4_ =
                 (int)(CONCAT26(uStack_a30._2_2_,CONCAT24((undefined2)uStack_a30,fStack_a34)) >>
                      0x20);
            fStack_a20 = (float)((int)fStack_a20 + 1);
          }
          else {
            uStack_a18._4_4_ = CONCAT31(uStack_a18._5_3_,1);
          }
        }
        plVar11 = (long *)(**(code **)(*(long *)*unaff_R14 + 0x150))();
        puVar22 = puStack_d78;
        fStack_a34 = (float)(int)puStack_d98[3];
        fStack_a38 = (float)(int)*puStack_d98 + _DAT_011986e0;
        uStack_a30 = (float)(int)puStack_d98[1] + _DAT_011986e0;
        (**(code **)(*plVar11 + 0x3c8))(plVar11,*unaff_R14,0,&fStack_a38,0,1,0);
      }
      else {
        uStack_a30._0_2_ = 0x101;
        fStack_a20 = 0.0;
        uStack_a1c = 0;
        fStack_a38 = 6.0499237e-30;
        fStack_a34 = 0.0;
        uStack_a08 = CONCAT35(uStack_a08._5_3_,0x100000000);
        uStack_a10 = *unaff_R15;
        uStack_a08 = CONCAT44(uStack_a08._4_4_,(int)unaff_R15[1]);
        uStack_a18 = puStack_d98;
        plVar11 = (long *)(**(code **)(*(long *)*unaff_R14 + 0x150))();
        lVar10 = (**(code **)(*plVar11 + 0x1f8))(plVar11,*(undefined8 *)unaff_R14[0xd],0);
        plVar11 = (long *)*unaff_R14;
        uStack_d18 = CONCAT44(0x2d,*puStack_d98);
        _uStack_d10 = CONCAT44(stack0xfffffffffffff2f4,puStack_d98[1]);
        plVar16 = (long *)(**(code **)(*plVar11 + 0x150))(plVar11);
        uVar15 = (**(code **)(*plVar16 + 0xa70))(plVar16);
        puVar19 = (undefined8 *)&DAT_0f6b3a90;
        if ((lVar10 != 0) && (*(char *)(lVar10 + 0x251) == '\0')) {
          puVar19 = (undefined8 *)func_0x0b3cf240(lVar10);
        }
        uVar2 = *puVar19;
        uStack_a28._0_2_ = (undefined2)uVar2;
        uStack_a28._2_2_ = (undefined2)((ulong)uVar2 >> 0x10);
        iStack_a24 = (int)((ulong)uVar2 >> 0x20);
        func_0x04ac44a0(&fStack_a38,plVar11,&uStack_d18,uVar15);
        uStack_a28._0_2_ = (undefined2)_DAT_0f6b3a90;
        uStack_a28._2_2_ = (undefined2)((ulong)_DAT_0f6b3a90 >> 0x10);
        iStack_a24 = (int)((ulong)_DAT_0f6b3a90 >> 0x20);
        unaff_R14 = (long *)*unaff_R14;
        uStack_d18 = CONCAT44(0x2d,*puStack_d98);
        _uStack_d10 = CONCAT44(stack0xfffffffffffff2f4,puStack_d98[1]);
        plVar11 = (long *)(**(code **)(*unaff_R14 + 0x150))(unaff_R14);
        uVar15 = (**(code **)(*plVar11 + 0xa70))(plVar11);
        func_0x04ac51e0(&fStack_a38,unaff_R14,&uStack_d18,uVar15);
      }
    }
    func_0x0412a280(puVar22,lStack_d58 - (long)puVar22);
    fVar31 = uStack_a30;
    uVar17 = uStack_a28;
    puVar5 = uStack_a18;
    break;
  case 4:
    if (99 < (int)uVar1) {
      unaff_R14[0xc] = 0;
      *(undefined1 *)(unaff_R14 + 7) = 0;
      func_0x04a7cf30(unaff_R14);
      plVar16 = (long *)(**(code **)(*(long *)*unaff_R14 + 0x150))();
      lVar10 = (**(code **)(*plVar16 + 0xa00))(plVar16);
      plVar11 = *(long **)(lVar10 + 0x10);
      if (plVar11 != (long *)0x0) {
        unaff_R12 = (long *)&uStack_9f8;
        do {
          lVar10 = (**(code **)(*plVar16 + 0x230))(plVar16,plVar11 + 2);
          if (lVar10 != 0) {
            lVar12 = *(long *)(lVar10 + 0x10);
            uVar17 = *(uint *)(lVar10 + 0x18);
            plVar14 = (long *)(*(long *)(lVar12 + 0x38) +
                              (ulong)((int)((ulong)(*(long *)(lVar12 + 0x40) -
                                                   *(long *)(lVar12 + 0x38)) >> 3) - 1U & 0xaf993816
                                     ) * 8);
            do {
              if (*plVar14 == -1) {
                plVar18 = *(long **)(lVar12 + 0x58);
                plVar14 = plVar18;
                goto code_r0x04a82b18;
              }
              lVar27 = *plVar14 * 0x20;
              plVar14 = (long *)(*(long *)(lVar12 + 0x50) + lVar27);
            } while (*(int *)(*(long *)(lVar12 + 0x50) + 8 + lVar27) != -0x5066c7ea);
            plVar18 = *(long **)(lVar12 + 0x58);
code_r0x04a82b18:
            if ((plVar14 == plVar18) || (lVar12 = plVar14[2], lVar12 == 0)) goto code_r0x04a83d56;
            uVar24 = (ulong)((uVar17 & 0x3ffff) >> 0xb);
            if (((ulong)(*(long *)(lVar12 + 0x10) - *(long *)(lVar12 + 8) >> 3) <= uVar24) ||
               (((lVar27 = *(long *)(*(long *)(lVar12 + 8) + uVar24 * 8), lVar27 == 0 ||
                 (uVar1 = *(uint *)(lVar27 + (ulong)(uVar17 & 0x7ff) * 4),
                 0x3fffe < (uVar17 & 0xfffc0000 ^ uVar1))) ||
                (lVar12 = *(long *)(*(long *)(lVar12 + 0x50) + (ulong)(uVar1 >> 4 & 0x3ff8)),
                lVar12 == 0)))) goto code_r0x04a83d56;
            if (*(int *)(lVar12 + (ulong)(uVar1 & 0x7f) * 4) == 2) {
              puVar13 = (ulong *)func_0x0b3cf240(lVar10);
              uStack_a08 = *puVar13;
              uStack_a30._0_2_ = 2;
              uStack_a30._2_2_ = 0;
              fStack_a2c = 1.4013e-45;
              uStack_a28._0_2_ = 0;
              fStack_a20 = 0.0;
              uStack_a1c = 0;
              uStack_a18._0_4_ = 0;
              uStack_a18._4_4_ = 0;
              uStack_a10 = uStack_a10 & 0xffffffff00000000;
              fStack_a38 = 7.196905e-30;
              fStack_a34 = 0.0;
              uStack_a00 = 0;
              uStack_9fc = 1;
              uStack_9f8 = 0x42;
              uStack_9c0 = 0;
              uStack_9b8 = 5;
              func_0x0bc3d280(lVar10,&fStack_a38);
              fStack_a38 = 7.196905e-30;
              fStack_a34 = 0.0;
              if ((ulong)uStack_9c0 != 0xffffffff) {
                (**(code **)(&UNK_0ef54e68 + (ulong)uStack_9c0 * 8))(&uStack_d18,unaff_R12);
              }
            }
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
      func_0x04a7f210(unaff_R14);
      unaff_R12 = (long *)unaff_R14[0xd];
      plVar11 = (long *)unaff_R14[0xe];
      while( true ) {
        fVar31 = (float)CONCAT22(uStack_a30._2_2_,(undefined2)uStack_a30);
        uVar17 = CONCAT22(uStack_a28._2_2_,(undefined2)uStack_a28);
        puVar5 = (uint *)CONCAT44(uStack_a18._4_4_,(int)uStack_a18);
        if (unaff_R12 == plVar11) break;
        plVar16 = (long *)(**(code **)(*(long *)*unaff_R14 + 0x150))();
        plVar16 = (long *)(**(code **)(*plVar16 + 0x1f8))(plVar16,*unaff_R12,0);
        if (plVar16 != (long *)0x0) {
          lVar10 = plVar16[2];
          uVar17 = *(uint *)(plVar16 + 3);
          plVar14 = (long *)(*(long *)(lVar10 + 0x38) +
                            (ulong)((int)((ulong)(*(long *)(lVar10 + 0x40) -
                                                 *(long *)(lVar10 + 0x38)) >> 3) - 1U & 0x4f6ba419)
                            * 8);
          do {
            if (*plVar14 == -1) {
              plVar18 = *(long **)(lVar10 + 0x58);
              plVar14 = plVar18;
              goto code_r0x04a82f29;
            }
            lVar12 = *plVar14 * 0x20;
            plVar14 = (long *)(*(long *)(lVar10 + 0x50) + lVar12);
          } while (*(int *)(*(long *)(lVar10 + 0x50) + 8 + lVar12) != 0x4f6ba419);
          plVar18 = *(long **)(lVar10 + 0x58);
code_r0x04a82f29:
          if ((plVar14 == plVar18) || (lVar10 = plVar14[2], lVar10 == 0)) goto code_r0x04a83d5b;
          uVar24 = (ulong)((uVar17 & 0x3ffff) >> 0xb);
          if ((((ulong)(*(long *)(lVar10 + 0x10) - *(long *)(lVar10 + 8) >> 3) <= uVar24) ||
              ((lVar12 = *(long *)(*(long *)(lVar10 + 8) + uVar24 * 8), lVar12 == 0 ||
               (uVar1 = *(uint *)(lVar12 + (ulong)(uVar17 & 0x7ff) * 4),
               0x3fffe < (uVar17 & 0xfffc0000 ^ uVar1))))) ||
             (lVar10 = *(long *)(*(long *)(lVar10 + 0x50) + (ulong)(uVar1 >> 4 & 0x3ff8)),
             lVar10 == 0)) goto code_r0x04a83d5b;
          if (*(int *)(lVar10 + (ulong)(uVar1 & 0x7f) * 4) == 0x47) {
            plVar14 = (long *)plVar16[0x24];
            if (plVar14 == (long *)0x0) goto code_r0x04a83d42;
            plVar18 = *(long **)(*plVar14 + 0x178);
            cVar7 = (**(code **)(*plVar18 + 0x18))(plVar18);
            if ((cVar7 == '\x06') &&
               (((*(int *)((long)plVar18 + 0xc) != 0 || ((int)plVar18[2] != 0)) ||
                (*(int *)((long)plVar18 + 0x14) != 0)))) {
              *(undefined8 *)((long)plVar18 + 0xc) = 0;
              *(undefined4 *)((long)plVar18 + 0x14) = 0;
              uVar8 = (**(code **)(*plVar18 + 0x10))(plVar18);
              if (0x8c < uVar8) goto code_r0x04a83d76;
              plVar14[(ulong)(uVar8 >> 6) + 3] =
                   plVar14[(ulong)(uVar8 >> 6) + 3] | 1L << ((byte)uVar8 & 0x3f);
            }
            plVar14 = (long *)(**(code **)(*(long *)*unaff_R14 + 0x150))();
            (**(code **)(*plVar14 + 0x3c8))(plVar14,*unaff_R14,plVar16,plVar16[0x41],0,0,0);
            (**(code **)(*plVar16 + 0x60))(plVar16);
          }
        }
        unaff_R12 = unaff_R12 + 1;
      }
      break;
    }
    if ((int)uVar1 < 0x50) {
      if (uVar1 == 0) {
        puVar19 = (undefined8 *)unaff_R14[0xd];
        puVar3 = (undefined8 *)unaff_R14[0xe];
        unaff_R12 = (long *)0x0;
        while( true ) {
          fVar31 = (float)CONCAT22(uStack_a30._2_2_,(undefined2)uStack_a30);
          uVar17 = CONCAT22(uStack_a28._2_2_,(undefined2)uStack_a28);
          puVar5 = (uint *)CONCAT44(uStack_a18._4_4_,(int)uStack_a18);
          if (puVar19 == puVar3) break;
          plVar11 = (long *)(**(code **)(*(long *)*unaff_R14 + 0x150))();
          lVar10 = (**(code **)(*plVar11 + 0x1f8))(plVar11,*puVar19,0);
          if (lVar10 != 0) {
            lVar12 = *(long *)(lVar10 + 0x10);
            uVar17 = *(uint *)(lVar10 + 0x18);
            plVar11 = (long *)(*(long *)(lVar12 + 0x38) +
                              (ulong)((int)((ulong)(*(long *)(lVar12 + 0x40) -
                                                   *(long *)(lVar12 + 0x38)) >> 3) - 1U & 0x4f6ba419
                                     ) * 8);
            do {
              if (*plVar11 == -1) {
                plVar16 = *(long **)(lVar12 + 0x58);
                plVar11 = plVar16;
                goto code_r0x04a83619;
              }
              lVar27 = *plVar11 * 0x20;
              plVar11 = (long *)(*(long *)(lVar12 + 0x50) + lVar27);
            } while (*(int *)(*(long *)(lVar12 + 0x50) + 8 + lVar27) != 0x4f6ba419);
            plVar16 = *(long **)(lVar12 + 0x58);
code_r0x04a83619:
            if ((plVar11 == plVar16) || (lVar12 = plVar11[2], lVar12 == 0)) goto code_r0x04a83d65;
            uVar24 = (ulong)((uVar17 & 0x3ffff) >> 0xb);
            if ((((ulong)(*(long *)(lVar12 + 0x10) - *(long *)(lVar12 + 8) >> 3) <= uVar24) ||
                ((lVar27 = *(long *)(*(long *)(lVar12 + 8) + uVar24 * 8), lVar27 == 0 ||
                 (uVar1 = *(uint *)(lVar27 + (ulong)(uVar17 & 0x7ff) * 4),
                 0x3fffe < (uVar17 & 0xfffc0000 ^ uVar1))))) ||
               (lVar12 = *(long *)(*(long *)(lVar12 + 0x50) + (ulong)(uVar1 >> 4 & 0x3ff8)),
               lVar12 == 0)) goto code_r0x04a83d65;
            if (*(int *)(lVar12 + (ulong)(uVar1 & 0x7f) * 4) == 0x47) {
              plVar11 = *(long **)(lVar10 + 0x120);
              if (plVar11 == (long *)0x0) goto code_r0x04a83d4c;
              unaff_R12 = *(long **)(*plVar11 + 0x178);
              cVar7 = (**(code **)(*unaff_R12 + 0x18))(unaff_R12);
              if ((cVar7 == '\x06') &&
                 (((*(int *)((long)unaff_R12 + 0xc) != (int)*unaff_R15 ||
                   ((int)unaff_R12[2] != (int)unaff_R14[0xb])) ||
                  (*(int *)((long)unaff_R12 + 0x14) != *(int *)((long)unaff_R14 + 0x5c))))) {
                *(int *)((long)unaff_R12 + 0x14) = (int)unaff_R15[1];
                *(ulong *)((long)unaff_R12 + 0xc) = *unaff_R15;
                uVar8 = (**(code **)(*unaff_R12 + 0x10))(unaff_R12);
                if (0x8c < uVar8) goto code_r0x04a83d93;
                plVar11[(ulong)(uVar8 >> 6) + 3] =
                     plVar11[(ulong)(uVar8 >> 6) + 3] | 1L << ((byte)uVar8 & 0x3f);
              }
            }
          }
          puVar19 = puVar19 + 1;
        }
      }
      else {
        fVar31 = (float)CONCAT22(uStack_a30._2_2_,(undefined2)uStack_a30);
        uVar17 = CONCAT22(uStack_a28._2_2_,(undefined2)uStack_a28);
        puVar5 = (uint *)CONCAT44(uStack_a18._4_4_,(int)uStack_a18);
        if ((int)uVar1 < 5) {
          lVar10 = *unaff_R14;
          puStack_d68 = (undefined *)
                        CONCAT44((float)(int)((ulong)*(undefined8 *)((long)unaff_R14 + 0x54) >> 0x20
                                             ),(float)(int)*(undefined8 *)((long)unaff_R14 + 0x54));
          lStack_d60 = CONCAT44(lStack_d60._4_4_,(float)*(int *)((long)unaff_R14 + 0x5c));
          func_0x04a7e840(&fStack_a38,unaff_R14);
          uStack_d18 = uStack_d18 & 0xffffffffffffff00;
          uStack_d10 = (uint5)(uint)uStack_d10;
          (**(code **)(*plVar11 + 0x6b0))
                    (plVar11,lVar10,0x13,&puStack_d68,0xffffffff,&fStack_a38,0,&uStack_d18);
          func_0x04a7f520(&fStack_a38);
          fVar31 = (float)CONCAT22(uStack_a30._2_2_,(undefined2)uStack_a30);
          uVar17 = CONCAT22(uStack_a28._2_2_,(undefined2)uStack_a28);
          puVar5 = (uint *)CONCAT44(uStack_a18._4_4_,(int)uStack_a18);
        }
      }
      break;
    }
    lVar10 = *unaff_R14;
    puStack_d68 = (undefined *)
                  CONCAT44((float)(int)((ulong)*(undefined8 *)((long)unaff_R14 + 0x54) >> 0x20),
                           (float)(int)*(undefined8 *)((long)unaff_R14 + 0x54));
    lStack_d60 = CONCAT44(lStack_d60._4_4_,(float)*(int *)((long)unaff_R14 + 0x5c));
    func_0x04a7e840(&fStack_a38,unaff_R14);
    uStack_d18 = uStack_d18 & 0xffffffffffffff00;
    uStack_d10 = (uint5)(uint)uStack_d10;
    (**(code **)(*plVar11 + 0x6b0))
              (plVar11,lVar10,0x13,&puStack_d68,0xffffffff,&fStack_a38,0,&uStack_d18);
code_r0x04a82daf:
    plVar11 = (long *)CONCAT44(iStack_a24,CONCAT22(uStack_a28._2_2_,(undefined2)uStack_a28));
    uStack_a30._0_2_ = 0;
    uStack_a30._2_2_ = 0;
    fStack_a2c = 0.0;
    uStack_a28._0_2_ = 0;
    uStack_a28._2_2_ = 0;
    iStack_a24 = 0;
    unaff_R14 = (long *)0x0;
    fVar31 = 0.0;
    uVar17 = 0;
    puVar5 = (uint *)CONCAT44(uStack_a18._4_4_,(int)uStack_a18);
    if (plVar11 != (long *)0x0) {
      LOCK();
      plVar16 = plVar11 + 1;
      lVar10 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        func_0x0412c2d0(plVar11);
      }
      uVar17 = CONCAT22(uStack_a28._2_2_,(undefined2)uStack_a28);
      unaff_R14 = (long *)CONCAT44(iStack_a24,uVar17);
      fStack_a20 = 0.0;
      uStack_a1c = 0;
      fVar31 = (float)CONCAT22(uStack_a30._2_2_,(undefined2)uStack_a30);
      puVar5 = (uint *)CONCAT44(uStack_a18._4_4_,(int)uStack_a18);
      if (unaff_R14 != (long *)0x0) {
        LOCK();
        plVar11 = unaff_R14 + 1;
        lVar10 = *plVar11;
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        fVar31 = (float)CONCAT22(uStack_a30._2_2_,(undefined2)uStack_a30);
        puVar5 = (uint *)CONCAT44(uStack_a18._4_4_,(int)uStack_a18);
        if (lVar10 == 0) {
          (**(code **)(*unaff_R14 + 0x10))(unaff_R14);
          func_0x0412c2d0(unaff_R14);
          fVar31 = (float)CONCAT22(uStack_a30._2_2_,(undefined2)uStack_a30);
          uVar17 = CONCAT22(uStack_a28._2_2_,(undefined2)uStack_a28);
          puVar5 = (uint *)CONCAT44(uStack_a18._4_4_,(int)uStack_a18);
        }
      }
    }
  }
LAB_04a83788:
  lVar10 = lStack_d30;
  puVar19 = *(undefined8 **)(lStack_d30 + 0x4c0);
  uStack_a30 = fVar31;
  uStack_a28 = uVar17;
  uStack_a18 = puVar5;
  if (puVar19 != (undefined8 *)0x0) {
    cVar7 = (**(code **)(*(long *)*puVar19 + 0x9f0))();
    if (cVar7 != '\0') {
      fVar31 = *(float *)((long)puVar19 + 0x24);
      if ((fVar31 != 0.0) || (NAN(fVar31))) {
        fVar31 = fVar31 + _DAT_011983f0;
        *(float *)((long)puVar19 + 0x24) = fVar31;
        if (*(float *)(puVar19 + 5) * _DAT_011987c0 <= fVar31) {
          *(undefined4 *)((long)puVar19 + 0x24) = 0;
          *(undefined4 *)((long)puVar19 + 0x14) = 0;
          unaff_R14 = (long *)(**(code **)(*(long *)*puVar19 + 0xa70))();
          puStack_d88 = (undefined8 *)(**(code **)(*unaff_R14 + 0x30))(unaff_R14);
          fVar31 = (float)(**(code **)(*unaff_R14 + 0x30))(unaff_R14);
          *(ulong *)((long)puVar19 + 0xc) =
               CONCAT44(puStack_d88._0_4_ * _UNK_014e1d74 + _UNK_014e5314,
                        fVar31 * _DAT_014e1d70 + _DAT_014e5310);
          puStack_d88 = (undefined8 *)
                        CONCAT44(puStack_d88._4_4_,*(undefined4 *)((long)puVar19 + 0x2c));
          puStack_d98 = (uint *)CONCAT44(puStack_d98._4_4_,*(undefined4 *)(puVar19 + 6));
          fVar31 = (float)(**(code **)(*unaff_R14 + 0x30))(unaff_R14);
          *(float *)(puVar19 + 5) =
               (puStack_d98._0_4_ - puStack_d88._0_4_) * fVar31 + puStack_d88._0_4_;
        }
      }
      else {
        fVar31 = *(float *)((long)puVar19 + 0x14) + _DAT_011983f0;
        *(float *)((long)puVar19 + 0x14) = fVar31;
        *(undefined4 *)(puVar19 + 1) = 0;
        if (*(float *)(puVar19 + 3) * _DAT_011987c0 <= fVar31) {
          plVar11 = (long *)(**(code **)(*(long *)*puVar19 + 0xa70))();
          puStack_d88 = (undefined8 *)
                        CONCAT44(puStack_d88._4_4_,*(undefined4 *)((long)puVar19 + 0x1c));
          puStack_d98 = (uint *)CONCAT44(puStack_d98._4_4_,*(undefined4 *)(puVar19 + 4));
          fVar31 = (float)(**(code **)(*plVar11 + 0x30))(plVar11);
          *(float *)(puVar19 + 3) =
               (puStack_d98._0_4_ - puStack_d88._0_4_) * fVar31 + puStack_d88._0_4_;
          *(float *)((long)puVar19 + 0x24) = *(float *)((long)puVar19 + 0x24) + _DAT_011983f0;
        }
      }
    }
  }
  *(undefined1 *)(lVar10 + 0x4c8) = 0;
  puVar3 = *(undefined8 **)(lVar10 + 0x1f0);
  do {
    if (puVar3 == (undefined8 *)0x0) {
      return;
    }
    if ((puVar3[4] != 0) && ((*(uint *)(puVar3 + 5) & 0x3ffff) != 0x3ffff)) {
      plVar11 = (long *)func_0x0412c300();
      if (plVar11 != (long *)0x0) {
        lVar10 = puVar3[3];
        if (lVar10 == 0) {
LAB_04a83a00:
          bVar30 = false;
          LOCK();
          plVar16 = plVar11 + 1;
          lVar10 = *plVar16;
          *plVar16 = *plVar16 + -1;
          UNLOCK();
        }
        else {
          uVar17 = *(uint *)(puVar3 + 5);
          uVar24 = (ulong)((uVar17 & 0x3ffff) >> 0xb);
          if (((((ulong)(*(long *)(lVar10 + 0xe0) - *(long *)(lVar10 + 0xd8) >> 3) <= uVar24) ||
               (lVar12 = *(long *)(*(long *)(lVar10 + 0xd8) + uVar24 * 8), lVar12 == 0)) ||
              (uVar1 = *(uint *)(lVar12 + (ulong)(uVar17 & 0x7ff) * 4),
              0x3fffe < (uVar17 & 0xfffc0000 ^ uVar1))) ||
             (*(ulong *)(lVar10 + 0x118) <= (ulong)(uVar1 & 0x3ffff))) goto LAB_04a83a00;
          puVar19 = (undefined8 *)(lVar10 + 0x28);
          bVar30 = true;
          unaff_R14 = (long *)(ulong)uVar17;
          LOCK();
          plVar16 = plVar11 + 1;
          lVar10 = *plVar16;
          *plVar16 = *plVar16 + -1;
          UNLOCK();
        }
        if (lVar10 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          func_0x0412c2d0(plVar11);
        }
        if (bVar30) {
          plVar11 = (long *)(puVar19[7] +
                            (ulong)((int)((ulong)(puVar19[8] - puVar19[7]) >> 3) - 1U & 0x85b93800)
                            * 8);
          do {
            if (*plVar11 == -1) goto LAB_04a83940;
            lVar10 = *plVar11 * 0x20;
            plVar11 = (long *)(puVar19[10] + lVar10);
          } while (*(int *)(puVar19[10] + 8 + lVar10) != -0x7a46c800);
          if ((plVar11 != (long *)puVar19[0xb]) && (lVar10 = plVar11[2], lVar10 != 0)) {
            uVar17 = (uint)unaff_R14;
            uVar24 = (ulong)((uVar17 & 0x3ffff) >> 0xb);
            if ((((uVar24 < (ulong)(*(long *)(lVar10 + 0x10) - *(long *)(lVar10 + 8) >> 3)) &&
                 ((lVar12 = *(long *)(*(long *)(lVar10 + 8) + uVar24 * 8), lVar12 != 0 &&
                  (uVar1 = *(uint *)(lVar12 + (ulong)(uVar17 & 0x7ff) * 4),
                  (uVar17 & 0xfffc0000 ^ uVar1) < 0x3ffff)))) &&
                (lVar10 = *(long *)(*(long *)(lVar10 + 0x50) + (ulong)(uVar1 >> 4 & 0x3ff8)),
                lVar10 != 0)) &&
               (*(char *)(*(long *)(lVar10 + (ulong)(uVar1 & 0x7f) * 8) + 0x251) == '\0')) {
              lVar10 = func_0x0b3cd8b0();
              uStack_d48 = 0;
              uStack_d40 = 0;
              uStack_d38 = 0;
              func_0x0b04d0a0(&fStack_a38,0xb35,&uStack_d48);
              bVar23 = bStack_9f0;
              bVar21 = *(byte *)(lVar10 + 0x48);
              if ((bVar21 & 1) == 0) {
                uVar24 = (ulong)(bVar21 >> 1);
                if ((bStack_9f0 & 1) == 0) goto LAB_04a83b80;
LAB_04a83b9f:
                if (uVar24 != uStack_9e8) goto LAB_04a83b87;
LAB_04a83bac:
                if ((bVar21 & 1) == 0) {
                  lVar10 = lVar10 + 0x49;
                }
                else {
                  lVar10 = *(long *)(lVar10 + 0x58);
                }
                puVar25 = &uStack_9ef;
                if ((bStack_9f0 & 1) != 0) {
                  puVar25 = puStack_9e0;
                }
                iVar9 = func_0x0eee3000(lVar10,puVar25);
                bVar30 = iVar9 == 0;
              }
              else {
                uVar24 = *(ulong *)(lVar10 + 0x50);
                if ((bStack_9f0 & 1) != 0) goto LAB_04a83b9f;
LAB_04a83b80:
                if (uVar24 == bStack_9f0 >> 1) goto LAB_04a83bac;
LAB_04a83b87:
                bVar30 = false;
              }
              if ((bStack_9d0 & 1) != 0) {
                func_0x0412a280(CONCAT44(uStack_9bc,uStack_9c0),
                                CONCAT71(uStack_9cf,bStack_9d0) & 0xfffffffffffffffe);
                bVar23 = bStack_9f0;
              }
              if ((bVar23 & 1) != 0) {
                func_0x0412a280(puStack_9e0,CONCAT71(uStack_9ef,bStack_9f0) & 0xfffffffffffffffe);
              }
              if ((uStack_a08 & 1) != 0) {
                func_0x0412a280(CONCAT71(uStack_9f7,uStack_9f8),uStack_a08 & 0xfffffffffffffffe);
              }
              if (((uint)fStack_a20 & 1) != 0) {
                func_0x0412a280(uStack_a10,CONCAT44(uStack_a1c,fStack_a20) & 0xfffffffffffffffe);
              }
              if (((uint)fStack_a38 & 1) != 0) {
                func_0x0412a280(CONCAT44(iStack_a24,uStack_a28),
                                CONCAT44(fStack_a34,fStack_a38) & 0xfffffffffffffffe);
              }
              if ((uStack_d48 & 1) != 0) {
                func_0x0412a280(uStack_d38,uStack_d48 & 0xfffffffffffffffe);
              }
              if (bVar30) {
                *(undefined1 *)(lStack_d30 + 0x4c8) = 1;
                return;
              }
            }
          }
        }
      }
    }
LAB_04a83940:
    puVar3 = (undefined8 *)*puVar3;
  } while( true );
}


