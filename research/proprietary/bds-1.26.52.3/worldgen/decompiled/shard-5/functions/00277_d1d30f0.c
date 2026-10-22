/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2d30f0 (ELF vaddr 0xd1d30f0)
 * Label: callee-of:0xc9730a0
 * Body:  [[0d2d30f0, 0d2d3193] [0d2d31a0, 0d2d339e] [0d2d33b3, 0d2d33d4]]
 * Ghidra: FUN_0d2d30f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0d2d30f0(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long *plStack_68;
  long *plStack_60;
  long lStack_58;
  byte bStack_50;
  long *plStack_48;
  long *plStack_40;
  long lStack_38;
  
  lVar11 = param_2 + 0x28;
  bStack_50 = 1;
  lStack_58 = lVar11;
  func_0x0412d550(lVar11);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar5 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x108);
  if (lVar5 == 0) {
    func_0x0eec74c0(0x108,0);
  }
  func_0x0eee2dd0(lVar5,0,0x108);
  *param_1 = lVar5;
  param_1[1] = lVar5 + 0x108;
  param_1[2] = lVar5 + 0x108;
  plVar6 = *(long **)(param_2 + 0x10);
  if (plVar6 != (long *)0x0) {
    do {
      lVar11 = plVar6[3];
      lVar5 = plVar6[4];
      plStack_48 = plVar6;
      lVar8 = lVar5;
      if (lVar11 != lVar5) {
        do {
          lStack_38 = lVar8;
          if ((*(long *)(lVar11 + 0x10) != 0) &&
             (plVar6 = (long *)func_0x0412c300(), plStack_60 = plVar6, plVar6 != (long *)0x0)) {
            plVar1 = *(long **)(lVar11 + 8);
            plStack_68 = plVar1;
            if (plVar1 == (long *)0x0) {
              LOCK();
              plVar1 = plVar6 + 1;
              lVar8 = *plVar1;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (lVar8 == 0) {
                (**(code **)(*plVar6 + 0x10))(plVar6);
                FUN_0412c2d0(plVar6);
              }
            }
            else {
              uVar10 = (ulong)*(byte *)(plVar1[6] + 0x68);
              lVar5 = *param_1;
              plVar12 = (long *)(lVar5 + uVar10 * 0x18);
              plVar15 = *(long **)(lVar5 + 8 + uVar10 * 0x18);
              plVar2 = *(long **)(lVar5 + 0x10 + uVar10 * 0x18);
              if (plVar15 < plVar2) {
                *plVar15 = (long)plVar1;
                plVar15[1] = (long)plVar6;
                plVar15 = plVar15 + 2;
              }
              else {
                lVar5 = (long)plVar15 - *plVar12;
                uVar10 = (lVar5 >> 4) + 1;
                plStack_40 = plVar12;
                if (0xfffffffffffffff < uVar10) {
LAB_0d2d3388:
                  uVar9 = func_0x0ca7baa0();
                  uVar9 = func_0x04882e20(uVar9);
                  plStack_68 = param_1;
                  func_0x0ca7b460(&plStack_68);
                  FUN_06cfcdf0(&lStack_58);
                  func_0x0eee2d70(uVar9);
                  pcVar4 = (code *)swi(3);
                  plVar6 = (long *)(*pcVar4)();
                  return plVar6;
                }
                uVar7 = (long)plVar2 - *plVar12;
                uVar13 = (long)uVar7 >> 3;
                if (uVar13 <= uVar10) {
                  uVar13 = uVar10;
                }
                if (0x7fffffffffffffef < uVar7) {
                  uVar13 = 0xfffffffffffffff;
                }
                if (0xfffffffffffffff < uVar13) {
                  func_0x04882eb0();
                  goto LAB_0d2d3388;
                }
                lVar14 = uVar13 * 0x10;
                lVar8 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar14);
                if (lVar8 == 0) {
                  func_0x0eec74c0(lVar14,0);
                }
                plVar12 = plStack_40;
                *(long **)(lVar8 + lVar5) = plVar1;
                *(long **)(lVar8 + 8 + lVar5) = plVar6;
                plVar15 = (long *)(lVar5 + lVar8 + 0x10);
                lVar3 = *plStack_40;
                lVar5 = (lVar5 + lVar8) - (plStack_40[1] - lVar3);
                func_0x0eee2f00(lVar5,lVar3);
                *plVar12 = lVar5;
                plVar12[1] = (long)plVar15;
                lVar5 = plVar12[2];
                plVar12[2] = lVar14 + lVar8;
                if (lVar3 != 0) {
                  FUN_0412a280(lVar3,lVar5 - lVar3);
                }
              }
              plVar12[1] = (long)plVar15;
              lVar5 = lStack_38;
            }
          }
          lVar11 = lVar11 + 0x18;
          lVar8 = lStack_38;
        } while (lVar11 != lVar5);
      }
      plVar6 = (long *)*plStack_48;
    } while (plVar6 != (long *)0x0);
    lVar11 = lStack_58;
    if ((bStack_50 & 1) == 0) {
      return param_1;
    }
  }
  func_0x0412d610(lVar11);
  return param_1;
}


