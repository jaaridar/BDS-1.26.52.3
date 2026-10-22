/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc852370 (ELF vaddr 0xc752370)
 * Label: VanillaSurfaceBuilders::CappedSurfaceBuilder::vslot5
 * Body:  [[0c852370, 0c8526a1] [0c8526b0, 0c852799] [0c8527a0, 0c852ac2]]
 * Ghidra: wg_VanillaSurfaceBuilders__CappedSurfaceBuilder__vslot5
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_VanillaSurfaceBuilders__CappedSurfaceBuilder__vslot5
               (undefined **param_1,undefined8 *param_2,undefined8 *param_3,long *param_4)

{
  float fVar1;
  undefined2 uVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  long *plVar6;
  undefined8 *puVar7;
  char cVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  short *psVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  undefined *puVar17;
  undefined8 uVar18;
  int iVar19;
  long lVar20;
  undefined8 *puVar21;
  ulong uVar22;
  uint uVar23;
  uint uVar24;
  long *plVar25;
  int iVar26;
  uint uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  int iStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined8 uStack_98;
  long lStack_90;
  float fStack_84;
  undefined4 uStack_80;
  float fStack_7c;
  ulong uStack_78;
  undefined8 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined **ppuStack_48;
  
  param_3 = (undefined8 *)*param_3;
  if (param_3 != (undefined8 *)0x0) {
    plVar25 = param_4;
    if (DAT_0f5573d8 == '\0') goto LAB_0c852a78;
    while( true ) {
      psVar13 = (short *)*param_3;
      while( true ) {
        if (psVar13 == (short *)param_3[1]) {
          return;
        }
        if (*psVar13 == _DAT_0f5573d0) break;
        psVar13 = psVar13 + 8;
      }
      lVar3 = *(long *)(psVar13 + 4);
      if (lVar3 == 0) break;
      fVar1 = *(float *)(plVar25 + 2);
      fVar28 = (float)(**(code **)(*(long *)*param_2 + 0x30))();
      fVar32 = *(float *)(plVar25 + 2);
      fVar29 = (float)(**(code **)(*(long *)*param_2 + 0x30))();
      fStack_a0 = (float)(int)*(short *)((long)param_2 + 0x14);
      fStack_a4 = (float)*(int *)plVar25[1] * _DAT_01198a08;
      fStack_9c = (float)((int *)plVar25[1])[2] * _DAT_01198a08;
      plVar15 = *(long **)(lVar3 + 8);
      if (plVar15 == *(long **)(lVar3 + 0x10)) {
        lStack_90 = 0;
        puVar21 = *(undefined8 **)(lVar3 + 0x20);
        puVar14 = *(undefined8 **)(lVar3 + 0x28);
        if (puVar21 != puVar14) goto LAB_0c8524e4;
LAB_0c852562:
        uStack_98 = 0;
      }
      else {
        if ((long)*(long **)(lVar3 + 0x10) - (long)plVar15 != 0x10) {
          plVar16 = plVar15;
          fVar31 = _DAT_011985d4;
          do {
            lVar20 = plVar16[1];
            fVar30 = (float)func_0x0d342930(lVar20,&fStack_a4);
            fVar30 = fVar30 * *(float *)(lVar20 + 0x20);
            plVar6 = plVar16;
            if (fVar30 <= fVar31) {
              fVar30 = fVar31;
              plVar6 = plVar15;
            }
            plVar15 = plVar6;
            plVar16 = plVar16 + 2;
            fVar31 = fVar30;
          } while (plVar16 != *(long **)(lVar3 + 0x10));
        }
        lStack_90 = *plVar15;
        puVar21 = *(undefined8 **)(lVar3 + 0x20);
        puVar14 = *(undefined8 **)(lVar3 + 0x28);
        if (puVar21 == puVar14) goto LAB_0c852562;
LAB_0c8524e4:
        if ((long)puVar14 - (long)puVar21 != 0x10) {
          puVar14 = puVar21;
          fVar31 = _DAT_011985d4;
          do {
            lVar20 = puVar14[1];
            fVar30 = (float)func_0x0d342930(lVar20,&fStack_a4);
            fVar30 = fVar30 * *(float *)(lVar20 + 0x20);
            puVar7 = puVar14;
            if (fVar30 <= fVar31) {
              fVar30 = fVar31;
              puVar7 = puVar21;
            }
            puVar21 = puVar7;
            puVar14 = puVar14 + 2;
            fVar31 = fVar30;
          } while (puVar14 != *(undefined8 **)(lVar3 + 0x28));
        }
        uStack_98 = *puVar21;
      }
      uVar23 = *(uint *)plVar25[1];
      uVar27 = ((uint *)plVar25[1])[2];
      fStack_84 = (float)(int)uVar23 * _DAT_0119883c;
      fStack_7c = (float)(int)uVar27 * _DAT_0119883c;
      uStack_80 = 0x42da0000;
      puStack_70 = param_2;
      if ((*(long *)(lVar3 + 0x48) == 0) || (puVar17 = param_1[2], puVar17 == (undefined *)0x0)) {
        bVar5 = false;
      }
      else {
        fVar31 = (float)func_0x0d342930(puVar17,&fStack_84);
        bVar5 = 0.0 < fVar31 * *(float *)(puVar17 + 0x20);
        uVar23 = *(uint *)plVar25[1];
        uVar27 = ((uint *)plVar25[1])[2];
      }
      uVar27 = uVar27 & 0xf;
      plVar15 = (long *)*plVar25;
      cVar8 = (**(code **)(*(long *)param_1[3] + 0x28))
                        (param_1[3],
                         *(undefined8 *)
                          (*plVar15 +
                          (ulong)(((int)plVar15[3] * (uVar23 & 0xf) + uVar27) *
                                 *(int *)((long)plVar15 + 0x14)) * 8));
      plVar15 = (long *)*plVar25;
      uVar24 = *(uint *)((long)plVar15 + 0x14);
      if (uVar24 == 0) {
        return;
      }
      fVar32 = fVar32 / _DAT_01198af0 + _DAT_01198af0;
      fVar29 = fVar29 * _DAT_01198630;
      puVar21 = (undefined8 *)(ulong)(uVar23 & 0xf);
      uStack_78 = (ulong)(uint)~(int)(fVar28 * _DAT_01198630 + fVar1 / _DAT_01198af0 + _DAT_01198af0
                                     );
LAB_0c8526fc:
      iVar12 = (int)puVar21;
      uVar23 = (uint)((ulong)puVar21 >> 0x20);
      cVar9 = (**(code **)(*(long *)param_1[3] + 0x28))
                        (param_1[3],
                         *(undefined8 *)
                          (*plVar15 +
                          (ulong)(((int)plVar15[3] * iVar12 + uVar27) * uVar24 + uVar23) * 8));
      if (cVar8 == cVar9) goto LAB_0c8529f3;
      if (cVar9 == '\0') {
        lVar20 = *(long *)(lVar3 + 0x48);
        uVar2 = *(undefined2 *)((long)puStack_70 + 0x14);
        plVar15 = (long *)*plVar25;
        plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
        if (plVar16 == (long *)0x0) {
          func_0x0eec74c0(0x28,0);
        }
        iVar11 = (int)uStack_78 + uVar23;
        iVar19 = uVar23 - 1;
        *plVar16 = (long)&UNK_0f3dec90;
        *(bool *)(plVar16 + 1) = bVar5;
        plVar16[2] = lStack_90;
        plVar16[3] = lVar20;
        *(undefined2 *)(plVar16 + 4) = uVar2;
        *(undefined4 *)((long)plVar16 + 0x22) = 0;
        *(undefined2 *)((long)plVar16 + 0x26) = 0;
        iVar26 = -1;
        if (-1 < iVar11) {
          iVar26 = iVar11;
        }
        if (*(int *)((long)plVar15 + 0x14) < iVar11) {
          iVar26 = *(int *)((long)plVar15 + 0x14);
        }
        puVar17 = &UNK_0f3dec90;
        if (iVar26 != iVar19) {
          bVar4 = iVar19 <= iVar26;
          do {
            uVar22 = (ulong)(((int)plVar15[3] * iVar12 + uVar27) * *(int *)((long)plVar15 + 0x14) +
                            iVar19);
            lVar20 = *plVar15;
            cVar8 = (**(code **)(*(long *)param_1[3] + 0x28))
                              (param_1[3],*(undefined8 *)(lVar20 + uVar22 * 8));
            if (cVar8 == '\0') break;
            puStack_68 = (undefined *)CONCAT44(puStack_68._4_4_,iVar19);
            uVar18 = (**(code **)(*plVar16 + 0x30))(plVar16,&puStack_68);
            *(undefined8 *)(lVar20 + uVar22 * 8) = uVar18;
            iVar19 = iVar19 + (uint)bVar4 * 2 + -1;
          } while (iVar19 != iVar26);
          puVar17 = (undefined *)*plVar16;
        }
        (**(code **)(puVar17 + 0x28))(plVar16);
        cVar8 = '\0';
        goto LAB_0c8529f3;
      }
      uVar10 = uVar23 + (int)(fVar29 + fVar32);
      plVar15 = (long *)*plVar25;
      puStack_68 = &UNK_0f3dec10;
      uStack_60 = uStack_98;
      ppuStack_48 = &puStack_68;
      uVar24 = 0xffffffff;
      if (-1 < (int)uVar10) {
        uVar24 = uVar10;
      }
      if ((int)*(uint *)((long)plVar15 + 0x14) < (int)uVar10) {
        uVar24 = *(uint *)((long)plVar15 + 0x14);
      }
      cVar8 = cVar9;
      if (uVar24 == uVar23) goto LAB_0c8529e8;
      param_4 = (long *)(ulong)uVar24;
      param_3 = puVar21;
      while( true ) {
        iVar26 = (int)((ulong)param_3 >> 0x20);
        uVar22 = (ulong)(((int)plVar15[3] * (int)param_3 + uVar27) * *(int *)((long)plVar15 + 0x14)
                        + iVar26);
        lVar20 = *plVar15;
        param_2 = *(undefined8 **)(lVar20 + uVar22 * 8);
        cVar9 = (**(code **)(*(long *)param_1[3] + 0x28))();
        if (cVar9 == '\0') goto LAB_0c852993;
        iStack_a8 = iVar26;
        if (ppuStack_48 == (undefined **)0x0) break;
        uVar18 = (**(code **)(*ppuStack_48 + 0x30))(ppuStack_48,&iStack_a8);
        *(undefined8 *)(lVar20 + uVar22 * 8) = uVar18;
        uVar10 = iVar26 + (uint)((int)uVar23 <= (int)uVar24) * 2 + -1;
        param_3 = (undefined8 *)((ulong)param_3 & 0xffffffff | (ulong)uVar10 << 0x20);
        if (uVar10 == uVar24) goto LAB_0c852993;
      }
      param_1 = ppuStack_48;
      FUN_04891200();
LAB_0c852a78:
      iVar12 = FUN_04108328(&DAT_0f5573d8);
      plVar25 = param_4;
      if (iVar12 != 0) {
        LOCK();
        UNLOCK();
        _DAT_0f5573d0 = _DAT_0f556458;
        _DAT_0f556458 = _DAT_0f556458 + 1;
        func_0x0410844d(&DAT_0f5573d8);
      }
    }
  }
  return;
LAB_0c852993:
  if (ppuStack_48 == &puStack_68) {
LAB_0c8529e8:
    lVar20 = 0x20;
LAB_0c8529ed:
    (**(code **)(*ppuStack_48 + lVar20))();
  }
  else {
    lVar20 = 0x28;
    if (ppuStack_48 != (undefined **)0x0) goto LAB_0c8529ed;
  }
LAB_0c8529f3:
  plVar15 = (long *)*plVar25;
  uVar18 = *(undefined8 *)
            (*plVar15 +
            (ulong)(((int)plVar15[3] * iVar12 + uVar27) * *(int *)((long)plVar15 + 0x14) + uVar23) *
            8);
  cVar9 = (**(code **)(*(long *)param_1[3] + 0x10))(param_1[3],uVar18);
  if (cVar9 == '\0') {
    cVar9 = (**(code **)(*(long *)param_1[3] + 0x18))(param_1[3],uVar18);
    if (cVar9 == '\0') goto LAB_0c8526da;
    lVar20 = *(long *)(lVar3 + 0x38);
  }
  else {
    lVar20 = *(long *)(lVar3 + 0x40);
  }
  if (lVar20 != 0) {
    plVar15 = (long *)*plVar25;
    *(long *)(*plVar15 +
             (ulong)(((int)plVar15[3] * iVar12 + uVar27) * *(int *)((long)plVar15 + 0x14) + uVar23)
             * 8) = lVar20;
  }
LAB_0c8526da:
  puVar21 = (undefined8 *)((ulong)puVar21 & 0xffffffff | (ulong)(uVar23 + 1) << 0x20);
  plVar15 = (long *)*plVar25;
  uVar24 = *(uint *)((long)plVar15 + 0x14);
  if (uVar24 <= uVar23 + 1) {
    return;
  }
  goto LAB_0c8526fc;
}


