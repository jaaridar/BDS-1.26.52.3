/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a42800 (ELF vaddr 0x4942800)
 * Label: string:/mnt/vss/_work/1/s/handheld/src-vanilla/vanilla_shared/src/c
 * Body:  [[04a42800, 04a42932] [04a42940, 04a42968] [04a42970, 04a429fc] [04a42a00, 04a42a82]]
 * Ghidra: FUN_04a42800
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_04a42800(long param_1,uint *param_2)

{
  ushort uVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  char cVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  uint uVar13;
  float fVar14;
  uint uVar15;
  float fStack_58;
  undefined8 uStack_38;
  
  lVar6 = (**(code **)(**(long **)(param_1 + 8) + 0x58))();
  uVar15 = param_2[2];
  uVar13 = *param_2;
  if ((lVar6 == 0) &&
     (cVar5 = func_0x0eeddcf0(&UNK_013df12f,&UNK_011b8334,0xb8,&UNK_013f93ad,&UNK_012bd4e5),
     cVar5 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  uVar2 = *(ulong *)(param_1 + 0x18);
  if (uVar2 != 0) {
    uVar1 = *(ushort *)(lVar6 + 0x168);
    uVar8 = (ulong)uVar1;
    uVar7 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 >> 2 & 0x3333333333333333) + (uVar7 & 0x3333333333333333);
    uVar7 = ((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar7 >> 0x38 < 2) {
      uVar9 = (ulong)((uint)uVar1 & (int)uVar2 - 1U);
    }
    else {
      uVar9 = uVar8;
      if (uVar2 <= uVar8) {
        uVar9 = (ulong)(ushort)(uVar1 % (ushort)uVar2);
      }
    }
    plVar10 = *(long **)(*(long *)(param_1 + 0x10) + uVar9 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      if ((byte)(uVar7 >> 0x38) < 2) {
        do {
          if (plVar10[1] == uVar8) {
            if (*(ushort *)(plVar10 + 2) == uVar1) {
LAB_04a429bf:
              plVar11 = (long *)plVar10[3];
              if ((char)plVar11[2] != '\x01') {
                return *plVar11;
              }
              plVar10 = (long *)plVar10[4];
              if (plVar11 == plVar10) {
                return lVar6;
              }
              uVar13 = uVar13 & _DAT_014e9fc0;
              uVar15 = uVar15 & _UNK_014e9fc4;
              fStack_58 = _DAT_01198724;
              do {
                if ((char)plVar11[2] == '\0') {
                  func_0x048a88b0();
                  pcVar4 = (code *)swi(3);
                  lVar6 = (*pcVar4)();
                  return lVar6;
                }
                lVar3 = *(long *)(param_1 + 0x68);
                lVar12 = plVar11[1] * 0x814;
                fVar14 = *(float *)(lVar3 + 0x810 + lVar12);
                uStack_38 = CONCAT44(fVar14 * (float)(int)uVar15,fVar14 * (float)(int)uVar13);
                fVar14 = (float)func_0x0d2eb5d0(lVar12 + lVar3,&uStack_38);
                if ((fVar14 < *(float *)(lVar3 + 0x80c + lVar12)) && (fVar14 < fStack_58)) {
                  lVar6 = *plVar11;
                  fStack_58 = fVar14;
                }
                plVar11 = plVar11 + 3;
              } while (plVar11 != plVar10);
              return lVar6;
            }
          }
          else if ((plVar10[1] & uVar2 - 1) != uVar9) {
            return lVar6;
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar10[1];
          if (uVar7 == uVar8) {
            if (*(ushort *)(plVar10 + 2) == uVar1) goto LAB_04a429bf;
          }
          else {
            if (uVar2 <= uVar7) {
              if ((uVar7 | uVar2) >> 0x20 == 0) {
                if ((uVar7 & 0xffffffff) % (uVar2 & 0xffffffff) != uVar9) {
                  return lVar6;
                }
                goto LAB_04a42977;
              }
              uVar7 = uVar7 % uVar2;
            }
            if (uVar7 != uVar9) {
              return lVar6;
            }
          }
LAB_04a42977:
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
  return lVar6;
}


