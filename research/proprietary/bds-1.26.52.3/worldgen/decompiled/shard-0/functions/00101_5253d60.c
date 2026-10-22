/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5353d60 (ELF vaddr 0x5253d60)
 * Label: SurfaceMaterialAdjustmentsBiomeComponentGlue::vslot2
 * Body:  [[05353d60, 05353f08] [05353f10, 05353fad] [05353fb0, 05354076] [05354080, 05354174] [05354180, 0535418d] [05354190, 05354200] [05354210, 05354532] [05354540, 053546f0] [0535475f, 053547aa]]
 * Ghidra: wg_SurfaceMaterialAdjustmentsBiomeComponentGlue__vslot2
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong wg_SurfaceMaterialAdjustmentsBiomeComponentGlue__vslot2(long param_1,undefined8 *param_2)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  code *pcVar6;
  ulong uVar7;
  undefined8 uVar8;
  bool bVar9;
  char cVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  float fVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  float fVar18;
  undefined8 *puVar19;
  bool bVar20;
  bool bVar21;
  undefined1 uStack_f9;
  undefined8 uStack_f8;
  float fStack_f0;
  undefined1 uStack_ec;
  undefined1 uStack_eb;
  undefined2 uStack_ea;
  undefined1 uStack_e8;
  undefined2 uStack_e7;
  undefined1 uStack_e5;
  uint uStack_e4;
  uint uStack_a8;
  char cStack_a0;
  long lStack_98;
  undefined8 *puStack_90;
  ulong uStack_88;
  ulong uStack_80;
  byte bStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined6 uStack_6e;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  cVar10 = *(char *)((long)param_2 + 0x24);
  puVar12 = (undefined8 *)*param_2;
  puVar11 = puVar12;
  if (cVar10 == '\x02') {
    puVar11 = param_2;
  }
  if (puVar11 == (undefined8 *)0x0 || *(int *)(param_2 + 4) != 0x46d8d269) {
    uVar13 = param_2[5];
    lVar16 = param_2[6];
    if (lVar16 == 0) {
      (*(code *)param_2[7])(0,param_2,0);
      lVar16 = param_2[6];
      cVar10 = *(char *)((long)param_2 + 0x24);
      puVar12 = (undefined8 *)*param_2;
    }
    if (cVar10 == '\x02') {
      puVar12 = param_2;
    }
    puVar11 = (undefined8 *)func_0x0488e200(uVar13,lVar16,0x46d8d269,puVar12);
  }
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,0x2f,8);
  if (puVar12 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x2f,8);
  }
  *puVar12 = 0x26;
  uVar13 = _UNK_01e367f8;
  puVar12[1] = _DAT_01e367f0;
  puVar12[2] = uVar13;
  uVar13 = CONCAT26(_DAT_01e3680e,_UNK_01e36808);
  puVar12[3] = _DAT_01e36800;
  puVar12[4] = uVar13;
  *(ulong *)((long)puVar12 + 0x26) = CONCAT62(_UNK_01e36810,_DAT_01e3680e);
  *(undefined1 *)((long)puVar12 + 0x2e) = 0;
  uStack_80 = (ulong)(puVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  uStack_f8._0_4_ = (uint)uStack_f8 & 0xffffff00;
  uStack_e8 = 0;
  func_0x0eeb79f0(auStack_48,&uStack_80);
  if ((uStack_80 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_80 & 0xff00ffffffffffff) - 8);
  }
  uVar15 = 0xff00ffffffffff01;
  uStack_f8 = CONCAT44(uStack_f8._4_4_,(uint)uStack_f8);
  if ((*(char *)(puVar11 + 4) == '\x01') &&
     (uStack_f8 = CONCAT44(uStack_f8._4_4_,(uint)uStack_f8), puVar11[2] != puVar11[1])) {
    uStack_88 = 0;
    lStack_98 = puVar11[1];
    puStack_90 = puVar11;
    lStack_50 = param_1;
    do {
      puVar12 = *(undefined8 **)(param_1 + 0x10);
      if (puVar12 < *(undefined8 **)(param_1 + 0x18)) {
        puVar12[8] = 0;
        puVar12[9] = 0;
        puVar12[6] = 0;
        puVar12[7] = 0;
        puVar12[4] = 0;
        puVar12[5] = 0;
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar12[10] = 0;
        puVar12 = puVar12 + 0xb;
      }
      else {
        puVar11 = *(undefined8 **)(param_1 + 8);
        lStack_58 = (long)puVar12 - (long)puVar11;
        uVar15 = (lStack_58 >> 3) * 0x2e8ba2e8ba2e8ba3 + 1;
        if (0x2e8ba2e8ba2e8ba < uVar15) {
          func_0x0535b5d0();
LAB_053546ea:
          uVar13 = func_0x04882eb0();
          if ((bStack_78 & 1) != 0) {
            func_0x0412a280(uStack_68,CONCAT71(uStack_77,bStack_78) & 0xfffffffffffffffe);
          }
          FUN_0eeb81b0(auStack_48);
          uVar13 = _Unwind_Resume(uVar13);
          uVar13 = FUN_04882e20(uVar13);
          FUN_04882e20(uVar13);
          pcVar6 = (code *)swi(3);
          uVar15 = (*pcVar6)();
          return uVar15;
        }
        lVar16 = (long)*(undefined8 **)(param_1 + 0x18) - (long)puVar11 >> 3;
        uVar7 = lVar16 * 0x5d1745d1745d1746;
        if (uVar15 < uVar7) {
          uVar15 = uVar7;
        }
        if (0x1745d1745d1745c < (ulong)(lVar16 * 0x2e8ba2e8ba2e8ba3)) {
          uVar15 = 0x2e8ba2e8ba2e8ba;
        }
        if (uVar15 == 0) {
          lVar16 = 0;
        }
        else {
          if (0x2e8ba2e8ba2e8ba < uVar15) goto LAB_053546ea;
          lVar16 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15 * 0x58);
          if (lVar16 == 0) {
            FUN_0eec74c0(uVar15 * 0x58,0);
            lVar16 = 0;
          }
        }
        puVar19 = (undefined8 *)(lVar16 + 0x40 + lStack_58);
        *puVar19 = 0;
        puVar19[1] = 0;
        puVar19 = (undefined8 *)(lVar16 + 0x30 + lStack_58);
        *puVar19 = 0;
        puVar19[1] = 0;
        puVar19 = (undefined8 *)(lVar16 + 0x20 + lStack_58);
        *puVar19 = 0;
        puVar19[1] = 0;
        puVar19 = (undefined8 *)(lVar16 + 0x10 + lStack_58);
        *puVar19 = 0;
        puVar19[1] = 0;
        *(undefined8 *)(lVar16 + lStack_58) = 0;
        ((undefined8 *)(lVar16 + lStack_58))[1] = 0;
        *(undefined8 *)(lVar16 + 0x50 + lStack_58) = 0;
        if (puVar11 != puVar12) {
          lVar17 = 0;
          do {
            *(undefined8 *)(lVar16 + 0x20 + lVar17) = *(undefined8 *)((long)puVar11 + lVar17 + 0x20)
            ;
            uVar13 = *(undefined8 *)((long)puVar11 + lVar17);
            uVar8 = ((undefined8 *)((long)puVar11 + lVar17))[1];
            *(undefined1 (*) [16])(lVar16 + 0x10 + lVar17) =
                 *(undefined1 (*) [16])((long)puVar11 + lVar17 + 0x10);
            *(undefined8 *)(lVar16 + lVar17) = uVar13;
            ((undefined8 *)(lVar16 + lVar17))[1] = uVar8;
            *(undefined1 *)(lVar16 + 0x28 + lVar17) = 0;
            *(undefined1 *)(lVar16 + 0x38 + lVar17) = 0;
            if (*(char *)((long)puVar11 + lVar17 + 0x38) == '\x01') {
              *(undefined4 *)(lVar16 + 0x30 + lVar17) = 0xffffffff;
              uVar3 = *(uint *)((long)puVar11 + lVar17 + 0x30);
              if ((ulong)uVar3 != 0xffffffff) {
                uStack_f8 = lVar17 + lVar16 + 0x28;
                (**(code **)(&UNK_0efa59d0 + (ulong)uVar3 * 8))
                          (&uStack_f8,(long)puVar11 + lVar17 + 0x28);
                *(uint *)(lVar16 + 0x30 + lVar17) = uVar3;
              }
              *(undefined1 *)(lVar16 + 0x38 + lVar17) = 1;
            }
            *(undefined1 *)(lVar16 + 0x40 + lVar17) = 0;
            *(undefined1 *)(lVar16 + 0x50 + lVar17) = 0;
            if (*(char *)((long)puVar11 + lVar17 + 0x50) == '\x01') {
              *(undefined4 *)(lVar16 + 0x48 + lVar17) = 0xffffffff;
              uVar3 = *(uint *)((long)puVar11 + lVar17 + 0x48);
              if ((ulong)uVar3 != 0xffffffff) {
                uStack_f8 = lVar17 + lVar16 + 0x40;
                (**(code **)(&UNK_0efa59d0 + (ulong)uVar3 * 8))
                          (&uStack_f8,(long)puVar11 + lVar17 + 0x40);
                *(uint *)(lVar16 + 0x48 + lVar17) = uVar3;
              }
              *(undefined1 *)(lVar16 + 0x50 + lVar17) = 1;
            }
            param_1 = lStack_50;
            lVar5 = lVar17 + 0x58;
            lVar17 = lVar17 + 0x58;
          } while ((undefined8 *)((long)puVar11 + lVar5) != puVar12);
          puVar11 = puVar11 + 5;
          do {
            if (*(char *)(puVar11 + 5) == '\x01') {
              if ((ulong)*(uint *)(puVar11 + 4) != 0xffffffff) {
                (**(code **)(&UNK_0efa59c0 + (ulong)*(uint *)(puVar11 + 4) * 8))
                          (&uStack_f8,puVar11 + 3);
              }
              *(undefined4 *)(puVar11 + 4) = 0xffffffff;
            }
            if (*(char *)(puVar11 + 2) == '\x01') {
              if ((ulong)*(uint *)(puVar11 + 1) != 0xffffffff) {
                (**(code **)(&UNK_0efa59c0 + (ulong)*(uint *)(puVar11 + 1) * 8))(&uStack_f8,puVar11)
                ;
              }
              *(undefined4 *)(puVar11 + 1) = 0xffffffff;
            }
            puVar19 = puVar11 + 6;
            puVar11 = puVar11 + 0xb;
          } while (puVar19 != puVar12);
        }
        puVar12 = (undefined8 *)(lStack_58 + lVar16 + 0x58);
        lVar17 = *(long *)(param_1 + 8);
        lVar5 = *(long *)(param_1 + 0x18);
        *(long *)(param_1 + 8) = lVar16;
        *(undefined8 **)(param_1 + 0x10) = puVar12;
        *(ulong *)(param_1 + 0x18) = uVar15 * 0x58 + lVar16;
        puVar11 = puStack_90;
        if (lVar17 != 0) {
          func_0x0412a280(lVar17,lVar5 - lVar17);
          puVar11 = puStack_90;
        }
      }
      lVar16 = lStack_98 + uStack_88 * 0x1c8;
      *(undefined8 **)(param_1 + 0x10) = puVar12;
      if (*(char *)(lVar16 + 0x40) == '\x01') {
        uStack_f8._0_4_ = 0x706f7418;
        uStack_f8._4_4_ = 0x74616d5f;
        fStack_f0 = 2.691459e+20;
        uStack_ec = 0x6c;
        uStack_eb = 0;
        uVar13 = func_0x0c8c0000(&uStack_f8);
        puVar12[-0xb] = uVar13;
        if (((uint)uStack_f8 & 1) != 0) {
          func_0x0412a280(CONCAT44(uStack_e4,CONCAT13(uStack_e5,CONCAT21(uStack_e7,uStack_e8))),
                          CONCAT44(uStack_f8._4_4_,(uint)uStack_f8) & 0xfffffffffffffffe);
        }
        if (puVar12[-0xb] != 0) goto LAB_053542dd;
LAB_053546a8:
        uVar15 = 0;
        goto LAB_053546aa;
      }
LAB_053542dd:
      if (*(char *)(lVar16 + 0x88) == '\x01') {
        uStack_f8._0_4_ = 0x64696d18;
        uStack_f8._4_4_ = 0x74616d5f;
        fStack_f0 = 2.691459e+20;
        uStack_ec = 0x6c;
        uStack_eb = 0;
        uVar13 = func_0x0c8c0000(&uStack_f8,lVar16 + 0x48);
        puVar12[-10] = uVar13;
        if (((uint)uStack_f8 & 1) != 0) {
          func_0x0412a280(CONCAT44(uStack_e4,CONCAT13(uStack_e5,CONCAT21(uStack_e7,uStack_e8))),
                          CONCAT44(uStack_f8._4_4_,(uint)uStack_f8) & 0xfffffffffffffffe);
        }
        if (puVar12[-10] == 0) goto LAB_053546a8;
      }
      if (*(char *)(lVar16 + 0xd0) == '\x01') {
        uStack_f8._1_3_ = (undefined3)_DAT_01376c53;
        uStack_f8._0_4_ = CONCAT31(uStack_f8._1_3_,0x24);
        uStack_f8._4_4_ = (undefined4)((ulong)_DAT_01376c53 >> 0x18);
        fStack_f0._0_1_ = (undefined1)((ulong)_DAT_01376c53 >> 0x38);
        fStack_f0._1_3_ = (undefined3)_UNK_01376c5b;
        uStack_ec = (undefined1)((ulong)_UNK_01376c5b >> 0x18);
        uStack_eb = (undefined1)((ulong)_UNK_01376c5b >> 0x20);
        uStack_ea = (undefined2)((ulong)_UNK_01376c5b >> 0x28);
        uStack_e8 = (undefined1)((ulong)_UNK_01376c5b >> 0x38);
        uStack_e7 = 0x6c61;
        uStack_e5 = 0;
        uVar13 = func_0x0c8c0000(&uStack_f8,lVar16 + 0x90);
        puVar12[-9] = uVar13;
        if (((uint)uStack_f8 & 1) != 0) {
          func_0x0412a280(CONCAT44(uStack_e4,CONCAT13(uStack_e5,CONCAT21(uStack_e7,uStack_e8))),
                          CONCAT44(uStack_f8._4_4_,(uint)uStack_f8) & 0xfffffffffffffffe);
        }
        if (puVar12[-9] == 0) goto LAB_053546a8;
      }
      if (*(char *)(lVar16 + 0x118) == '\x01') {
        uStack_f8._1_3_ = (undefined3)_DAT_0145f54d;
        uStack_f8._0_4_ = CONCAT31(uStack_f8._1_3_,0x26);
        uStack_f8._4_4_ = (undefined4)((ulong)_DAT_0145f54d >> 0x18);
        fStack_f0._0_1_ = (undefined1)((ulong)_DAT_0145f54d >> 0x38);
        fStack_f0._1_3_ = (undefined3)_UNK_0145f555;
        uStack_ec = (undefined1)((ulong)_UNK_0145f555 >> 0x18);
        uStack_eb = (undefined1)((ulong)_UNK_0145f555 >> 0x20);
        uStack_ea = (undefined2)((ulong)_UNK_0145f555 >> 0x28);
        uStack_e8 = 0x72;
        uStack_e7 = 0x6169;
        uStack_e5 = 0x6c;
        uStack_e4 = uStack_e4 & 0xffffff00;
        uVar13 = func_0x0c8c0000(&uStack_f8,lVar16 + 0xd8);
        puVar12[-8] = uVar13;
        if (((uint)uStack_f8 & 1) != 0) {
          func_0x0412a280(CONCAT44(uStack_e4,CONCAT13(uStack_e5,CONCAT21(uStack_e7,uStack_e8))),
                          CONCAT44(uStack_f8._4_4_,(uint)uStack_f8) & 0xfffffffffffffffe);
        }
        if (puVar12[-8] == 0) goto LAB_053546a8;
      }
      if (*(char *)(lVar16 + 0x160) == '\x01') {
        uStack_f8._0_4_ = 0x61657318;
        uStack_f8._4_4_ = 0x74616d5f;
        fStack_f0 = 2.691459e+20;
        uStack_ec = 0x6c;
        uStack_eb = 0;
        uVar13 = func_0x0c8c0000(&uStack_f8,lVar16 + 0x120);
        puVar12[-7] = uVar13;
        if (((uint)uStack_f8 & 1) != 0) {
          func_0x0412a280(CONCAT44(uStack_e4,CONCAT13(uStack_e5,CONCAT21(uStack_e7,uStack_e8))),
                          CONCAT44(uStack_f8._4_4_,(uint)uStack_f8) & 0xfffffffffffffffe);
        }
        if (puVar12[-7] == 0) goto LAB_053546a8;
      }
      if ((*(char *)(lVar16 + 0x170) == '\x01') &&
         (*(float *)(lVar16 + 0x16c) <= *(float *)(lVar16 + 0x168))) {
        func_0x053547b0();
        goto LAB_053546a8;
      }
      if (*(char *)(lVar16 + 0x1b8) == '\x01') {
        uStack_6e = 0;
        uStack_68 = 0;
        uStack_60 = 0;
        bStack_78 = 0x12;
        uStack_6f = DAT_01591884;
        uStack_77 = (undefined7)_DAT_0159187c;
        uStack_70 = (undefined1)((ulong)_DAT_0159187c >> 0x38);
        uStack_80 = 0x838dddc83a29ed6c;
        pfVar1 = (float *)(puVar12 + -6);
        cVar10 = func_0x05353920(pfVar1,lVar16 + 0x178,&uStack_80);
        if (cVar10 != '\0') {
          pfVar2 = (float *)(puVar12 + -3);
          cVar10 = func_0x05353920(pfVar2,lVar16 + 0x198,&uStack_80);
          if (cVar10 != '\0') {
            if (*(int *)(puVar12 + -5) == 1) {
              fVar14 = *pfVar1;
              bVar9 = true;
              bVar20 = true;
              iVar4 = *(int *)(puVar12 + -2);
joined_r0x05354605:
              if (iVar4 == 1) goto LAB_05354607;
LAB_0535459c:
              func_0x0b5bfbb0(&uStack_f8,pfVar2);
              fVar18 = fStack_f0;
              iVar4 = (uint)uStack_f8;
              if (cStack_a0 != '\0') {
                bVar21 = (uint)uStack_f8 != 0;
                if ((ulong)uStack_a8 != 0xffffffff) {
                  (**(code **)(&UNK_0f2be788 + (ulong)uStack_a8 * 8))(&uStack_f9,&uStack_e8);
                }
                if (iVar4 != 0) {
                  fVar18 = 0.0;
                }
                if (!bVar20) goto LAB_05354633;
                goto LAB_0535461f;
              }
              bVar21 = true;
              fVar18 = 0.0;
              if (bVar20) goto LAB_0535461f;
            }
            else {
              func_0x0b5bfbb0(&uStack_f8,pfVar1);
              fVar14 = fStack_f0;
              iVar4 = (uint)uStack_f8;
              if (cStack_a0 == '\0') {
                fVar14 = 0.0;
                bVar9 = false;
                bVar20 = false;
                iVar4 = *(int *)(puVar12 + -2);
                goto joined_r0x05354605;
              }
              bVar20 = (uint)uStack_f8 == 0;
              if ((ulong)uStack_a8 != 0xffffffff) {
                (**(code **)(&UNK_0f2be788 + (ulong)uStack_a8 * 8))(&uStack_f9,&uStack_e8);
              }
              if (iVar4 != 0) {
                fVar14 = 0.0;
              }
              bVar9 = bVar20;
              if (*(int *)(puVar12 + -2) != 1) goto LAB_0535459c;
LAB_05354607:
              fVar18 = *pfVar2;
              bVar21 = false;
              if (bVar9) {
LAB_0535461f:
                if (!bVar21 && fVar18 <= fVar14) {
                  func_0x05354920(1,3,5,&UNK_01412ec1);
                  goto LAB_05354685;
                }
              }
            }
LAB_05354633:
            puVar11 = puStack_90;
            if ((bStack_78 & 1) != 0) {
              func_0x0412a280(uStack_68,CONCAT71(uStack_77,bStack_78) & 0xfffffffffffffffe);
              puVar11 = puStack_90;
            }
            goto LAB_05353f27;
          }
        }
LAB_05354685:
        if ((bStack_78 & 1) != 0) {
          func_0x0412a280(uStack_68,CONCAT71(uStack_77,bStack_78) & 0xfffffffffffffffe);
        }
        goto LAB_053546a8;
      }
LAB_05353f27:
      uStack_88 = uStack_88 + 1;
      lStack_98 = puVar11[1];
    } while (uStack_88 < (ulong)((puVar11[2] - lStack_98 >> 3) * -0x7dc11f7047dc11f7));
    uVar15 = CONCAT71((int7)((ulong)((long)&uStack_f8 + 1) >> 8),1);
  }
LAB_053546aa:
  FUN_0eeb81b0(auStack_48);
  return uVar15 & 0xffffffff;
}



/* ---- referenced strings ----
 * 0x1376c53  sea_floor_material
 * 0x145f54d  foundation_material
 * 0x159187c  world_gen
 * 0x1e367f0  minecraft:surface_material_adjustments
 * 0x1e36800  e_material_adjustments
 * 0x1e3680e  ustments
 */
