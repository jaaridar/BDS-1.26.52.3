/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a3b030 (ELF vaddr 0x493b030)
 * Label: BiomeSource3d::vslot7
 * Body:  [[04a3b030, 04a3b0d3] [04a3b0e0, 04a3b0f4] [04a3b100, 04a3b16b] [04a3b170, 04a3b298] [04a3b2a0, 04a3b4b0]]
 * Ghidra: wg_BiomeSource3d__vslot7
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long wg_BiomeSource3d__vslot7
               (long *param_1,int param_2,short param_3,int param_4,int param_5,undefined8 param_6,
               long param_7,ulong param_8)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  int *piVar4;
  long lVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  ulong uVar10;
  short sVar11;
  int iVar12;
  int iVar13;
  short sVar14;
  int iVar15;
  long *plVar16;
  uint uVar17;
  float *pfVar19;
  uint uVar20;
  ulong uVar21;
  bool bVar22;
  float fVar23;
  float fVar24;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  long *plStack_f8;
  undefined1 auStack_d0 [56];
  int *piStack_98;
  long *plStack_90;
  int *piStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  uint uStack_60;
  int iStack_5c;
  uint uStack_58;
  int iStack_54;
  int iStack_50;
  uint uStack_4c;
  int iStack_48;
  undefined1 uStack_44;
  ulong uStack_40;
  long lStack_38;
  ulong uVar18;
  
  iStack_5c = param_5 + param_2;
  uVar21 = (ulong)(uint)(param_2 - param_5);
  if (param_2 - param_5 <= iStack_5c) {
    sVar14 = (short)param_5 + param_3;
    if (*(short *)((long)param_1 + 0xe2) < sVar14) {
      sVar14 = *(short *)((long)param_1 + 0xe2);
    }
    param_3 = param_3 - (short)param_5;
    sVar11 = (short)(int)param_1[0x1c];
    if (param_3 < sVar11) {
      param_3 = sVar11;
    }
    if (param_3 <= sVar14) {
      uStack_60 = param_4 - param_5;
      piVar4 = (int *)(ulong)uStack_60;
      uVar17 = param_5 + param_4;
      uVar18 = (ulong)uVar17;
      uStack_58 = (uint)param_3;
      iStack_54 = (int)sVar14;
      if (param_7 == 0) {
        uVar20 = uStack_58;
        do {
          do {
            uStack_44 = 1;
            uStack_70 = 0x4a3b1df;
            iStack_50 = (int)uVar21;
            uStack_4c = uVar20;
            iStack_48 = (int)piVar4;
            lVar5 = (**(code **)(*param_1 + 0x58))(param_1,&iStack_50);
            if (lVar5 != 0) {
              return 0;
            }
            uVar20 = uVar20 + 4;
          } while (((int)uVar20 <= iStack_54) ||
                  (uVar9 = (int)piVar4 + 4, piVar4 = (int *)(ulong)uVar9, uVar20 = uStack_58,
                  (int)uVar9 <= (int)uVar17));
          uVar9 = (int)uVar21 + 4;
          uVar21 = (ulong)uVar9;
          piVar4 = (int *)(ulong)uStack_60;
        } while ((int)uVar9 <= iStack_5c);
      }
      else {
        uStack_40 = uVar18;
        if (param_8 == 0) {
          piVar7 = &iStack_50;
          uVar20 = uStack_58;
          piVar8 = piVar4;
          do {
            do {
              uVar10 = (ulong)uVar20;
              uStack_44 = 1;
              uStack_70 = 0x4a3b25f;
              piVar4 = piVar7;
              plVar16 = param_1;
              iStack_50 = (int)uVar21;
              uStack_4c = uVar20;
              iStack_48 = (int)piVar8;
              lVar5 = (**(code **)(*param_1 + 0x58))();
              param_8 = uVar18;
              if (lVar5 != 0) goto LAB_04a3b28b;
              uVar20 = uVar20 + 4;
            } while (((int)uVar20 <= iStack_54) ||
                    (uVar9 = (int)piVar8 + 4, uVar20 = uStack_58, piVar8 = (int *)(ulong)uVar9,
                    (int)uVar9 <= (int)uVar17));
            uVar9 = (int)uVar21 + 4;
            uVar21 = (ulong)uVar9;
            piVar8 = (int *)(ulong)uStack_60;
          } while ((int)uVar9 <= iStack_5c);
        }
        else {
          lStack_38 = param_8 + param_7 * 2;
          piVar8 = (int *)(param_7 * 2);
          uVar17 = uStack_58;
          piVar7 = piVar4;
          do {
            do {
              do {
                uVar10 = (ulong)uVar17;
                uStack_44 = 1;
                piVar4 = &iStack_50;
                uStack_70 = 0x4a3b134;
                plVar16 = param_1;
                iStack_50 = (int)uVar21;
                uStack_4c = uVar17;
                iStack_48 = (int)piVar7;
                lVar5 = (**(code **)(*param_1 + 0x58))();
                if (lVar5 != 0) {
                  piVar6 = (int *)0x0;
                  do {
                    if (*(short *)(param_8 + (long)piVar6) == *(short *)(lVar5 + 0x168))
                    goto joined_r0x04a3b176;
                    piVar6 = (int *)((long)piVar6 + 2);
                  } while (piVar8 != piVar6);
                  piVar6 = (int *)(lStack_38 - param_8);
joined_r0x04a3b176:
                  if ((piVar6 != (int *)0x0) &&
                     (((long)piVar6 < 1 || ((long)piVar8 < (long)piVar6)))) goto LAB_04a3b28b;
                  if (piVar6 == piVar8) {
                    return 0;
                  }
                }
                uVar17 = uVar17 + 4;
              } while ((int)uVar17 <= iStack_54);
              uVar20 = (int)piVar7 + 4;
              bVar22 = (int)uVar20 <= (int)uStack_40;
              uVar17 = uStack_58;
              piVar7 = (int *)(ulong)uVar20;
            } while (bVar22);
            uVar20 = (int)uVar21 + 4;
            uVar21 = (ulong)uVar20;
            piVar7 = (int *)(ulong)uStack_60;
          } while ((int)uVar20 <= iStack_5c);
        }
      }
    }
  }
  return 1;
LAB_04a3b28b:
  uStack_70 = 0x4a3b290;
  func_0x04890760();
  piStack_98 = piVar8;
  plStack_90 = param_1;
  piStack_88 = piVar7;
  uStack_80 = param_8;
  uStack_78 = uVar21;
  uStack_70 = uVar10;
  if (((char)piVar4[3] == '\x01') && (*(char *)(plVar16[0x1a] + 0xb8) == '\0')) {
    uStack_110 = (long *)CONCAT44(piVar4[2] >> 4,*piVar4 >> 4);
    func_0x0525af30(&plStack_100,plVar16[0x1a],&uStack_110);
    if (plStack_100 == (long *)0x0) {
      bVar22 = true;
      lVar5 = 0;
      plVar3 = plStack_f8;
    }
    else {
      iVar12 = (int)(short)plStack_100[4] >> 0x1f;
      iVar13 = iVar12 - (short)plStack_100[4];
      iVar15 = iVar13 + 3;
      if (-1 < iVar13) {
        iVar15 = iVar13;
      }
      uVar17 = ((piVar4[1] >> 2) - iVar12) + (iVar15 >> 2);
      if (uVar17 < 0x60) {
        iVar15 = *piVar4;
        iVar12 = piVar4[2];
        pfVar19 = (float *)(((long)(iVar12 >> 2) - (long)*(int *)((long)plStack_100 + 0x1c)) * 0x198
                           + ((long)(iVar15 >> 2) - (long)(int)plStack_100[3]) * 0x660 +
                             *plStack_100);
        if (*(short *)((long)pfVar19 + (ulong)uVar17 * 2 + 0xac) == -1) goto LAB_04a3b3f0;
        lVar2 = plVar16[1];
        lVar5 = func_0x0c8ccb70(plVar16[0x1b]);
        if (lVar5 == 0) goto LAB_04a3b3f0;
        fVar23 = (float)func_0x0d3414e0((float)(iVar15 >> 2) * _DAT_011987c4,0,
                                        (float)(iVar12 >> 2) * _DAT_011987c4,lVar2 + 0x118);
        fVar23 = (fVar23 * _DAT_01198494 + *pfVar19) / _DAT_011988e8;
        if (0.0 <= fVar23) {
          fVar24 = _DAT_011983f0;
          if (fVar23 <= _DAT_011983f0) {
            fVar24 = fVar23;
          }
          if (_DAT_011986e0 < fVar24) goto LAB_04a3b3f0;
        }
      }
      else {
LAB_04a3b3f0:
        lVar5 = 0;
      }
      bVar22 = lVar5 == 0;
      plVar3 = plStack_f8;
    }
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        func_0x0412c2d0(plVar3);
      }
    }
    if (!bVar22) {
      return lVar5;
    }
  }
  func_0x052582f0(&plStack_100,plVar16[1],*(undefined8 *)piVar4,piVar4[2]);
  if ((char)plVar16[0x19] == '\x01') {
    uStack_110 = plVar16 + 5;
    if ((char)plVar16[0x17] == '\0') {
      uStack_110 = (long *)0x0;
      uStack_108 = 0x7fffffffffffffff;
      func_0x04a3cfe0(plVar16 + 5,auStack_d0,&uStack_110);
      if (uStack_110 == (long *)0x0) goto LAB_04a3b4a0;
    }
    lVar5 = uStack_110[0x11];
  }
  else {
LAB_04a3b4a0:
    lVar5 = 0;
  }
  return lVar5;
}


