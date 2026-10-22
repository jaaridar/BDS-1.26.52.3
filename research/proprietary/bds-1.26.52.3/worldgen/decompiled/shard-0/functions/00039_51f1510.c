/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x52f1510 (ELF vaddr 0x51f1510)
 * Label: VanillaSurfaceBuilders::MesaSurfaceBuilder::vslot5
 * Body:  [[052f1510, 052f1a95] [052f1aa0, 052f1e4a]]
 * Ghidra: wg_VanillaSurfaceBuilders__MesaSurfaceBuilder__vslot5
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_VanillaSurfaceBuilders__MesaSurfaceBuilder__vslot5
               (long param_1,undefined8 *param_2,undefined8 *param_3,long *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  uint *puVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  short *psVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong uVar18;
  byte bVar19;
  int iVar20;
  uint uVar21;
  long lVar22;
  byte bVar23;
  int iVar24;
  long lVar25;
  int iVar26;
  char cVar27;
  long lVar28;
  bool bVar29;
  int iVar30;
  long lVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  int iStack_18c;
  int iStack_184;
  long lStack_138;
  long alStack_c0 [16];
  long lStack_40;
  
  puVar4 = (undefined8 *)*param_3;
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  if ((DAT_0f5573f8 == '\0') && (iVar12 = func_0x04108328(&DAT_0f5573f8), iVar12 != 0)) {
    LOCK();
    UNLOCK();
    _DAT_0f5573f0 = _DAT_0f556458;
    _DAT_0f556458 = _DAT_0f556458 + 1;
    func_0x0410844d(&DAT_0f5573f8);
  }
  psVar13 = (short *)*puVar4;
  if (psVar13 == (short *)puVar4[1]) {
    param_3 = (undefined8 *)*param_3;
  }
  else {
    do {
      if (*psVar13 == _DAT_0f5573f0) {
        lVar7 = *(long *)(psVar13 + 4);
        param_3 = (undefined8 *)*param_3;
        goto joined_r0x052f15a8;
      }
      psVar13 = psVar13 + 8;
    } while (psVar13 != (short *)puVar4[1]);
    param_3 = (undefined8 *)*param_3;
  }
  lVar7 = 0;
joined_r0x052f15a8:
  if ((DAT_0f557388 == '\0') && (iVar12 = func_0x04108328(&DAT_0f557388), iVar12 != 0)) {
    LOCK();
    UNLOCK();
    _DAT_0f557380 = _DAT_0f556458;
    _DAT_0f556458 = _DAT_0f556458 + 1;
    func_0x0410844d(&DAT_0f557388);
  }
  psVar13 = (short *)*param_3;
  while( true ) {
    if (psVar13 == (short *)param_3[1]) {
      return;
    }
    if (*psVar13 == _DAT_0f557380) break;
    psVar13 = psVar13 + 8;
  }
  if (lVar7 == 0) {
    return;
  }
  lVar15 = *(long *)(psVar13 + 4);
  if (lVar15 == 0) {
    return;
  }
  uVar5 = *(undefined8 *)(lVar7 + 8);
  lVar6 = *(long *)(lVar7 + 0x10);
  lVar7 = *(long *)(lVar7 + 0x20);
  lVar14 = *(long *)(lVar15 + 8);
  if (lVar14 == 0) {
    lVar14 = func_0x0cc41df0(0xf6ff9e0,0xf6eae50,1);
  }
  func_0x05355710(alStack_c0,lVar14);
  lVar14 = *(long *)(lVar15 + 0x10);
  cVar1 = *(char *)(lVar15 + 0x19);
  fVar32 = 0.0;
  lStack_40 = lVar14;
  if (*(char *)(lVar15 + 0x18) == '\x01') {
    fVar33 = (float)*(int *)param_4[1];
    fVar35 = (float)((int *)param_4[1])[2];
    fVar32 = (float)func_0x0d3414e0(fVar33,0,*(long *)(param_1 + 200) + 0x38);
    fVar34 = (float)((uint)(fVar32 * _DAT_01198c6c) & _DAT_014e7ba0);
    fVar32 = (float)func_0x0d3414e0(fVar33 * _DAT_011987c4,0,_DAT_011987c4 * fVar35,
                                    *(long *)(param_1 + 200) + 0x70);
    if (fVar32 * _DAT_01198358 <= fVar34) {
      fVar34 = fVar32 * _DAT_01198358;
    }
    fVar32 = 0.0;
    if (0.0 < fVar34) {
      fVar32 = (float)func_0x0d3414e0(fVar33 * _DAT_01198aa0,0,fVar35 * _DAT_01198aa0,
                                      *(long *)(param_1 + 200) + 0xa8);
      fVar33 = (float)((uint)(fVar32 * _DAT_0119858c) & _DAT_014e7ba0) * _DAT_01198690;
      fVar32 = fVar34 * fVar34 * _DAT_0119845c;
      fVar34 = (float)(int)((int)fVar33 + (uint)((float)(int)fVar33 < fVar33)) + _DAT_01198644;
      if (fVar34 <= fVar32) {
        fVar32 = fVar34;
      }
      fVar32 = fVar32 + _DAT_0119834c;
    }
  }
  plVar8 = (long *)*param_4;
  puVar9 = (uint *)param_4[1];
  iVar2 = *(int *)((long)param_4 + 0x14);
  iVar20 = (int)*(short *)((long)param_2 + 0x14);
  uVar21 = *puVar9 & 0xf;
  uVar11 = puVar9[2] & 0xf;
  fVar34 = *(float *)(param_4 + 2) / _DAT_01198af0;
  fVar33 = (float)(**(code **)(*(long *)*param_2 + 0x30))();
  fVar35 = (float)func_0x0eee3810(_DAT_01198b3c * fVar34);
  iVar3 = *(int *)((long)plVar8 + 0x1c);
  iVar30 = *(int *)((long)plVar8 + 0x14);
  iVar12 = iVar30 + -1;
  lVar15 = func_0x0cc41df0(0xf6ff9e0,&DAT_0f6eaec0,1);
  if (iVar2 <= iVar12) {
    do {
      lVar28 = *(long *)(*plVar8 +
                        (ulong)(((int)plVar8[3] * uVar21 + uVar11) * *(int *)((long)plVar8 + 0x14) +
                                -1 + iVar30) * 8);
      cVar27 = '\x01';
      if (*(char *)(*(long *)(*(long *)(lVar28 + 0x68) + 0x20) + 2) == '\0') {
        cVar27 = (lVar28 != lVar15) * '\x02';
      }
      if (cVar27 != '\0') {
        if (cVar27 != '\x02') {
          return;
        }
        break;
      }
      iVar30 = iVar30 + -1;
    } while (iVar2 < iVar30);
  }
  lVar15 = func_0x0cc41df0(0xf6ff9e0,&DAT_0f71bd88,1);
  uVar16 = func_0x0cc41df0(0xf6ff9e0,0xf7194a0,1);
  uVar17 = func_0x0cc41df0(0xf6ff9e0,0xf718af0,1);
  if (iVar2 <= iVar12) {
    iVar24 = (int)(fVar33 * _DAT_01198630 + fVar34 + _DAT_01198af0);
    iVar30 = (int)plVar8[3];
    iVar26 = *(int *)((long)plVar8 + 0x14);
    lVar28 = *plVar8;
    lVar25 = iVar12 + param_1 + 200;
    lVar31 = (long)iVar12 + 0xc0;
    iStack_184 = -1;
    bVar29 = false;
    iStack_18c = 0;
    bVar19 = 0;
    lStack_138 = lVar6;
    do {
      uVar18 = (ulong)((iVar30 * uVar21 + uVar11) * iVar26 + iVar12);
      lVar22 = *(long *)(lVar28 + uVar18 * 8);
      if (*(long *)(*(long *)(lVar22 + 0x68) + 200) == _DAT_0f713fc8) {
        return;
      }
      cVar27 = **(char **)(*(long *)(lVar22 + 0x68) + 0x20);
      bVar10 = !(bool)((int)(((int)fVar32 - (uint)(fVar32 < (float)(int)fVar32)) - iVar3) < iVar12 |
                       bVar19 | cVar27 != '\0');
      if (bVar10) {
        *(long *)(lVar28 + uVar18 * 8) = lVar15;
        bVar19 = 0;
        lVar22 = lVar15;
      }
      else {
        bVar19 = cVar27 != '\0' | bVar19;
      }
      if (iStack_18c < 0xf) {
        lVar22 = *(long *)(*(long *)(lVar22 + 0x68) + 200);
        if (lVar22 == _DAT_0f6eaec0) {
          iStack_184 = -1;
        }
        else if (lVar22 == _DAT_0f71bd88) {
          if (iStack_184 == -1) {
            lVar22 = lVar6;
            if (iVar20 + 1 < iVar12) {
              lVar22 = lStack_138;
            }
            if (iVar20 + -4 <= iVar12) {
              lStack_138 = lVar22;
            }
            if (iVar24 < 1) {
              lStack_138 = lVar7;
            }
            iStack_184 = iVar12 - iVar20;
            if (iStack_184 < 1) {
              iStack_184 = 0;
            }
            iStack_184 = iStack_184 + iVar24;
            if (iVar12 < iVar20 + -1) {
              lVar22 = alStack_c0[1];
              if (lStack_138 == alStack_c0[0]) {
LAB_052f1d3f:
                *(long *)(lVar28 + uVar18 * 8) = lVar22;
              }
              else {
                *(long *)(lVar28 + uVar18 * 8) = lStack_138;
              }
            }
            else if ((cVar1 == '\0') || (iVar12 <= iVar20 + 0x21 + iVar24 * 2)) {
              lVar22 = uVar5;
              if (iVar12 <= iVar20 + 10 + iVar24) goto LAB_052f1b0b;
              bVar29 = iVar12 <= iVar20 + 0xc0;
              bVar23 = 0x10;
              if (!bVar29 || iVar20 >= iVar12) {
                bVar23 = 1;
              }
              if ((fVar35 <= 0.0) && (bVar29 && iVar20 < iVar12)) {
                fVar34 = (float)func_0x0d3414e0((float)(int)*puVar9,0,(float)(int)puVar9[2],
                                                *(undefined8 *)(param_1 + 200));
                fVar34 = (float)func_0x0eee3b20(fVar34 * _DAT_011987f8);
                bVar23 = *(byte *)(lVar25 + (long)(int)fVar34 +
                                            ((ulong)(lVar31 + (int)fVar34) / 3 & 0xffffffffffffffc0)
                                            * -3);
              }
              lVar22 = lStack_40;
              if (bVar23 < 0x10) {
                lVar22 = alStack_c0[bVar23];
              }
              iVar30 = (int)plVar8[3];
              iVar26 = *(int *)((long)plVar8 + 0x14);
              lVar28 = *plVar8;
              *(long *)(lVar28 + (ulong)((iVar30 * uVar21 + uVar11) * iVar26 + iVar12) * 8) = lVar22
              ;
            }
            else {
              lVar22 = uVar16;
              if (0.0 < fVar35) goto LAB_052f1d3f;
              *(undefined8 *)(lVar28 + uVar18 * 8) = uVar17;
            }
            bVar29 = false;
          }
          else if (0 < iStack_184) {
            iStack_184 = iStack_184 + -1;
            lVar22 = alStack_c0[1];
            if (bVar29) {
LAB_052f1b0b:
              *(long *)(lVar28 + uVar18 * 8) = lVar22;
              bVar29 = true;
            }
            else {
              fVar34 = (float)func_0x0d3414e0((float)(int)*puVar9,0,(float)(int)puVar9[2],
                                              *(undefined8 *)(param_1 + 200));
              fVar34 = (float)func_0x0eee3b20(fVar34 * _DAT_011987f8);
              uVar18 = (ulong)*(byte *)(lVar25 + (long)(int)fVar34 +
                                                 ((ulong)(lVar31 + (int)fVar34) / 3 &
                                                 0xffffffffffffffc0) * -3);
              if (uVar18 < 0x10) {
                iVar30 = (int)plVar8[3];
                iVar26 = *(int *)((long)plVar8 + 0x14);
                lVar28 = *plVar8;
                *(long *)(lVar28 + (ulong)((iVar30 * uVar21 + uVar11) * iVar26 + iVar12) * 8) =
                     alStack_c0[uVar18];
              }
              else {
                iVar30 = (int)plVar8[3];
                iVar26 = *(int *)((long)plVar8 + 0x14);
                lVar28 = *plVar8;
                *(long *)(lVar28 + (ulong)((iVar30 * uVar21 + uVar11) * iVar26 + iVar12) * 8) =
                     lVar14;
              }
              bVar29 = false;
            }
          }
          iStack_18c = iStack_18c + (uint)!bVar10;
        }
      }
      lVar25 = lVar25 + -1;
      lVar31 = lVar31 + -1;
      bVar10 = iVar2 < iVar12;
      iVar12 = iVar12 + -1;
    } while (bVar10);
  }
  return;
}


