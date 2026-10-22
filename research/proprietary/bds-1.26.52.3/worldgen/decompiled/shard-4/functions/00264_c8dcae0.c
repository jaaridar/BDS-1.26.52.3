/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc9dcae0 (ELF vaddr 0xc8dcae0)
 * Label: callee-of:0xc5cf380
 * Body:  [[0c9dcae0, 0c9dcbc8] [0c9dcbd0, 0c9dcc4d] [0c9dcc50, 0c9dce25] [0c9dce2b, 0c9dce53]]
 * Ghidra: FUN_0c9dcae0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0c9dcae0(long *param_1,long *param_2,char param_3,float *param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  long lStack_98;
  long *plStack_70;
  uint uStack_50;
  int iStack_4c;
  ulong uStack_48;
  long *plStack_40;
  ulong uStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  fVar20 = param_4[2];
  fVar17 = (float)func_0x0eee4390(*param_4);
  fVar18 = (float)func_0x0eee4390(fVar20);
  fVar20 = param_4[5];
  fVar19 = (float)func_0x0eee4390(param_4[3]);
  fVar20 = (float)func_0x0eee4390(fVar20);
  uVar12 = (int)fVar17 >> 4;
  iVar16 = (int)fVar18 >> 4;
  iVar11 = ((((int)fVar20 >> 4) - iVar16) + 1) * ((((int)fVar19 >> 4) - uVar12) + 1);
  if (iVar11 != 0) {
    plStack_70 = (long *)0x0;
    lStack_98 = 0;
    iVar15 = 0;
    iVar5 = iVar16;
    plStack_40 = param_2;
    uStack_50 = uVar12;
    do {
      uStack_38 = (ulong)uStack_50;
      iStack_4c = iVar5;
      lVar7 = (**(code **)(*param_2 + 0x148))(param_2,&uStack_50);
      if (lVar7 != 0) {
        puVar2 = *(undefined8 **)(lVar7 + 0x13e0);
        lVar7 = lStack_98;
        for (; lStack_98 = lVar7, puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)*puVar2) {
          lVar3 = puVar2[3];
          if (((((lVar3 != 0) && (*(char *)(lVar3 + 0x14) == param_3)) &&
               (fVar17 = (float)*(int *)(lVar3 + 8), *param_4 <= fVar17)) &&
              ((fVar17 < param_4[3] || fVar17 == param_4[3] &&
               (fVar17 = (float)*(int *)(lVar3 + 0xc), param_4[1] <= fVar17)))) &&
             ((fVar17 < param_4[4] || fVar17 == param_4[4] &&
              ((fVar17 = (float)*(int *)(lVar3 + 0x10), param_4[2] <= fVar17 &&
               (fVar17 < param_4[5] || fVar17 == param_4[5])))))) {
            if (plStack_70 < (long *)param_1[2]) {
              *plStack_70 = lVar3;
              plStack_70 = plStack_70 + 1;
            }
            else {
              lVar13 = (long)plStack_70 - lVar7;
              uVar1 = (lVar13 >> 3) + 1;
              lVar8 = lVar7;
              if (0x1fffffffffffffff < uVar1) {
LAB_0c9dce0d:
                *param_1 = lVar8;
                uVar9 = func_0x05851940();
                *param_1 = lVar7;
                if (lVar7 != 0) {
                  param_1[1] = lVar7;
                  func_0x0412a280(lVar7,param_1[2] - lVar7);
                }
                _Unwind_Resume(uVar9);
                pcVar4 = (code *)swi(3);
                plVar10 = (long *)(*pcVar4)();
                return plVar10;
              }
              uStack_48 = param_1[2] - lVar7;
              uVar14 = (long)uStack_48 >> 2;
              if ((ulong)((long)uStack_48 >> 2) <= uVar1) {
                uVar14 = uVar1;
              }
              if (0x7ffffffffffffff7 < uStack_48) {
                uVar14 = 0x1fffffffffffffff;
              }
              if (0x1fffffffffffffff < uVar14) {
                *param_1 = lVar7;
                func_0x04882eb0();
                goto LAB_0c9dce0d;
              }
              lVar8 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
              if (lVar8 == 0) {
                func_0x0eec74c0(uVar14 * 8,0);
              }
              *(long *)(lVar8 + lVar13) = lVar3;
              plStack_70 = (long *)(lVar8 + lVar13 + 8);
              lStack_98 = lVar8 + lVar13 + (lVar13 >> 3) * -8;
              func_0x0eee2f00(lStack_98,lVar7);
              param_1[1] = (long)plStack_70;
              param_1[2] = lVar8 + uVar14 * 8;
              if (lVar7 != 0) {
                func_0x0412a280(lVar7,uStack_48);
              }
            }
            param_1[1] = (long)plStack_70;
            param_2 = plStack_40;
          }
          lVar7 = lStack_98;
        }
        *param_1 = lVar7;
      }
      iVar15 = iVar15 + 1;
      iVar6 = iVar5 + 1;
      if ((int)fVar20 >> 4 <= iVar5) {
        iVar6 = iVar16;
      }
      uStack_50 = uVar12;
      if ((int)uStack_38 < (int)fVar19 >> 4) {
        iVar6 = iVar5;
        uStack_50 = (int)uStack_38 + 1;
      }
      iVar5 = iVar6;
    } while (iVar11 != iVar15);
  }
  return param_1;
}


