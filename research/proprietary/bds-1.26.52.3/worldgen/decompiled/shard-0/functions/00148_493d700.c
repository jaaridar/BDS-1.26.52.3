/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a3d700 (ELF vaddr 0x493d700)
 * Label: string:/mnt/vss/_work/1/s/handheld/src-vanilla/vanilla_shared/src/c
 * Body:  [[04a3d700, 04a3d80b] [04a3d810, 04a3d838] [04a3d840, 04a3d953]]
 * Ghidra: FUN_04a3d700
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_04a3d700(long param_1,long param_2,int *param_3)

{
  ushort uVar1;
  ulong uVar2;
  code *pcVar3;
  char cVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  float fVar12;
  float fStack_44;
  undefined8 uStack_38;
  
  if ((param_2 == 0) &&
     (cVar4 = func_0x0eeddcf0(&UNK_013df12f,&UNK_011b8334,0xb8,&UNK_013f93ad,&UNK_011b8340),
     cVar4 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  uVar2 = *(ulong *)(param_1 + 0x18);
  if (uVar2 != 0) {
    uVar1 = *(ushort *)(param_2 + 0x168);
    uVar7 = (ulong)uVar1;
    uVar5 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 >> 2 & 0x3333333333333333) + (uVar5 & 0x3333333333333333);
    uVar5 = ((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar5 >> 0x38 < 2) {
      uVar9 = (ulong)((uint)uVar1 & (int)uVar2 - 1U);
    }
    else {
      uVar9 = uVar7;
      if (uVar2 <= uVar7) {
        uVar9 = (ulong)(ushort)(uVar1 % (ushort)uVar2);
      }
    }
    plVar10 = *(long **)(*(long *)(param_1 + 0x10) + uVar9 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      if ((byte)(uVar5 >> 0x38) < 2) {
        do {
          if (plVar10[1] == uVar7) {
            if (*(ushort *)(plVar10 + 2) == uVar1) {
LAB_04a3d88f:
              plVar11 = (long *)plVar10[3];
              if ((char)plVar11[2] != '\x01') {
                return *plVar11;
              }
              plVar10 = (long *)plVar10[4];
              if (plVar11 == plVar10) {
                return param_2;
              }
              fStack_44 = _DAT_01198724;
              do {
                if ((char)plVar11[2] == '\0') {
                  func_0x048a88b0();
                  pcVar3 = (code *)swi(3);
                  lVar6 = (*pcVar3)();
                  return lVar6;
                }
                lVar6 = *(long *)(param_1 + 0x68);
                lVar8 = plVar11[1] * 0x814;
                fVar12 = *(float *)(lVar6 + 0x810 + lVar8);
                uStack_38 = CONCAT44(fVar12 * (float)param_3[2],fVar12 * (float)*param_3);
                fVar12 = (float)func_0x0d2eb5d0(lVar6 + lVar8,&uStack_38);
                if ((fVar12 < *(float *)(lVar6 + 0x80c + lVar8)) && (fVar12 < fStack_44)) {
                  param_2 = *plVar11;
                  fStack_44 = fVar12;
                }
                plVar11 = plVar11 + 3;
              } while (plVar11 != plVar10);
              return param_2;
            }
          }
          else if ((plVar10[1] & uVar2 - 1) != uVar9) {
            return param_2;
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          uVar5 = plVar10[1];
          if (uVar5 == uVar7) {
            if (*(ushort *)(plVar10 + 2) == uVar1) goto LAB_04a3d88f;
          }
          else {
            if (uVar2 <= uVar5) {
              if ((uVar5 | uVar2) >> 0x20 == 0) {
                if ((uVar5 & 0xffffffff) % (uVar2 & 0xffffffff) != uVar9) {
                  return param_2;
                }
                goto LAB_04a3d847;
              }
              uVar5 = uVar5 % uVar2;
            }
            if (uVar5 != uVar9) {
              return param_2;
            }
          }
LAB_04a3d847:
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
  return param_2;
}


