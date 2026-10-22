/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc5e2980
 * Label: callee-of:0x51f3a70
 * Body:  [[0c5e2980, 0c5e2af1] [0c5e2b00, 0c5e2b32] [0c5e2b40, 0c5e2b5a] [0c5e2b60, 0c5e2c52] [0c5e2c60, 0c5e2cb4] [0c5e2cc0, 0c5e2e5e] [0c5e2e60, 0c5e2eb5]]
 * Ghidra: FUN_0c5e2980
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c5e2980(long param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long unaff_RBX;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *unaff_R14;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  
  plVar15 = (long *)(ulong)*(uint *)(param_1 + 0x28);
  if (unaff_R14 < *(long **)(param_1 + 0x30)) {
    plVar16 = (long *)plVar15[4];
    if (plVar16 == (long *)0x0) {
      unaff_R14[4] = 0;
    }
    else if (plVar16 == plVar15) {
      unaff_R14[4] = (long)unaff_R14;
      (**(code **)(*(long *)plVar15[4] + 0x18))();
    }
    else {
      unaff_R14[4] = (long)plVar16;
      plVar15[4] = 0;
    }
    plVar15 = unaff_R14 + 6;
  }
  else {
    plVar16 = *(long **)(unaff_RBX + 0x20);
    lVar13 = (long)unaff_R14 - (long)plVar16;
    uVar9 = (lVar13 >> 4) * -0x5555555555555555 + 1;
    if (0x555555555555555 < uVar9) {
LAB_0c5e2e98:
      uVar7 = func_0x0c6038f0();
      uVar7 = func_0x04882e20(uVar7);
      uVar7 = func_0x04882e20(uVar7);
      func_0x04882e20(uVar7);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar11 = (long)*(long **)(param_1 + 0x30) - (long)plVar16 >> 4;
    uVar5 = lVar11 * 0x5555555555555556;
    if (uVar9 < uVar5) {
      uVar9 = uVar5;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar11 * -0x5555555555555555)) {
      uVar9 = 0x555555555555555;
    }
    if (uVar9 == 0) {
      lVar11 = 0;
    }
    else {
      if (0x555555555555555 < uVar9) {
LAB_0c5e2e93:
        func_0x04882eb0();
        goto LAB_0c5e2e98;
      }
      lVar11 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar9 * 0x30);
      if (lVar11 == 0) {
        func_0x0eec74c0(uVar9 * 0x30,0);
        lVar11 = 0;
      }
    }
    lVar2 = lVar11 + lVar13;
    plVar1 = (long *)plVar15[4];
    if (plVar1 == (long *)0x0) {
      *(undefined8 *)(lVar2 + 0x20) = 0;
    }
    else if (plVar1 == plVar15) {
      *(long *)(lVar2 + 0x20) = lVar2;
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
      plVar16 = *(long **)(unaff_RBX + 0x20);
      unaff_R14 = *(long **)(unaff_RBX + 0x28);
      lVar13 = (long)unaff_R14 - (long)plVar16;
    }
    else {
      *(long **)(lVar2 + 0x20) = plVar1;
      plVar15[4] = 0;
    }
    lVar10 = lVar2 - lVar13;
    plVar15 = plVar16;
    if (plVar16 != unaff_R14) {
      do {
        plVar1 = (long *)plVar15[4];
        if (plVar1 == (long *)0x0) {
          *(undefined8 *)(lVar10 + 0x20) = 0;
        }
        else if (plVar15 == plVar1) {
          *(long *)(lVar10 + 0x20) = lVar10;
          (**(code **)(*(long *)plVar15[4] + 0x18))((long *)plVar15[4],lVar10);
        }
        else {
          *(long **)(lVar10 + 0x20) = plVar1;
          plVar15[4] = 0;
        }
        plVar15 = plVar15 + 6;
        lVar10 = lVar10 + 0x30;
      } while (plVar15 != unaff_R14);
      do {
        plVar15 = (long *)plVar16[4];
        if (plVar16 == plVar15) {
          lVar10 = 0x20;
LAB_0c5e2b65:
          (**(code **)(*plVar15 + lVar10))();
        }
        else {
          lVar10 = 0x28;
          if (plVar15 != (long *)0x0) goto LAB_0c5e2b65;
        }
        plVar16 = plVar16 + 6;
      } while (plVar16 != unaff_R14);
      plVar16 = *(long **)(unaff_RBX + 0x20);
    }
    plVar15 = (long *)(lVar2 + 0x30);
    *(long *)(unaff_RBX + 0x20) = lVar2 - lVar13;
    *(long **)(unaff_RBX + 0x28) = plVar15;
    lVar13 = *(long *)(unaff_RBX + 0x30);
    *(ulong *)(unaff_RBX + 0x30) = lVar11 + uVar9 * 0x30;
    if (plVar16 != (long *)0x0) {
      func_0x0412a280(plVar16,lVar13 - (long)plVar16);
    }
  }
  *(long **)(unaff_RBX + 0x28) = plVar15;
  plVar16 = *(long **)(unaff_RBX + 0x20);
  if ((long)plVar15 - (long)plVar16 == 0x30) {
    if (plVar15 != plVar16) {
      uVar9 = 0;
      do {
        plVar16 = *(long **)(unaff_RBX + 0x10);
        for (plVar15 = *(long **)(unaff_RBX + 8); plVar15 != plVar16; plVar15 = plVar15 + 1) {
          if (*plVar15 != 0) {
            plVar1 = *(long **)(*(long *)(unaff_RBX + 0x20) + 0x20 + uVar9 * 0x30);
            if (plVar1 == (long *)0x0) {
              func_0x04891200();
              goto LAB_0c5e2e8e;
            }
            iVar4 = (**(code **)(*plVar1 + 0x30))();
            if (iVar4 == 0) break;
          }
        }
        if (*(char *)(unaff_RBX + 0x50) == '\x01') {
          plVar15 = *(long **)(unaff_RBX + 8);
          plVar16 = *(long **)(unaff_RBX + 0x10);
          if (plVar15 != plVar16) {
            do {
              while (*plVar15 == 0) {
                lVar13 = (long)plVar16 - (long)(plVar15 + 1);
                if (lVar13 != 0) {
                  func_0x0eee2ee0(plVar15,plVar15 + 1,lVar13);
                }
                plVar16 = (long *)(lVar13 + (long)plVar15);
                *(long **)(unaff_RBX + 0x10) = plVar16;
                if (plVar15 == plVar16) goto LAB_0c5e2cef;
              }
              plVar15 = plVar15 + 1;
            } while (plVar15 != plVar16);
          }
LAB_0c5e2cef:
          lVar13 = *(long *)(unaff_RBX + 0x38);
          if (lVar13 != *(long *)(unaff_RBX + 0x40)) {
            lVar11 = *(long *)(unaff_RBX + 0x40) - lVar13;
            if (0 < lVar11 >> 3) {
              if (*(long *)(unaff_RBX + 0x18) - (long)plVar16 < lVar11) {
                lVar2 = *(long *)(unaff_RBX + 8);
                lVar10 = (long)plVar16 - lVar2;
                uVar5 = (lVar11 >> 3) + (lVar10 >> 3);
                if (0x1fffffffffffffff < uVar5) {
LAB_0c5e2e8e:
                  func_0x0a48ac80();
                  goto LAB_0c5e2e93;
                }
                uVar8 = *(long *)(unaff_RBX + 0x18) - lVar2;
                uVar14 = (long)uVar8 >> 2;
                if ((ulong)((long)uVar8 >> 2) <= uVar5) {
                  uVar14 = uVar5;
                }
                if (0x7ffffffffffffff7 < uVar8) {
                  uVar14 = 0x1fffffffffffffff;
                }
                if (uVar14 == 0) {
LAB_0c5e2dc5:
                  lVar6 = 0;
                }
                else {
                  if (0x1fffffffffffffff < uVar14) goto LAB_0c5e2e93;
                  lVar6 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
                  if (lVar6 == 0) {
                    func_0x0eec74c0(uVar14 * 8,0);
                    goto LAB_0c5e2dc5;
                  }
                }
                lVar12 = lVar6 + lVar10;
                func_0x0eee2f00(lVar12,lVar13,lVar11);
                *(long **)(unaff_RBX + 0x10) = plVar16;
                lVar13 = lVar12 + (lVar10 >> 3) * -8;
                func_0x0eee2f00(lVar13,lVar2,lVar10);
                *(long *)(unaff_RBX + 8) = lVar13;
                *(long *)(unaff_RBX + 0x10) = lVar11 + lVar12;
                *(ulong *)(unaff_RBX + 0x18) = uVar14 * 8 + lVar6;
                if (lVar2 != 0) {
                  func_0x0412a280(lVar2,uVar8);
                }
              }
              else {
                func_0x0eee2ee0(plVar16,lVar13,lVar11);
                *(long *)(unaff_RBX + 0x10) = (long)plVar16 + lVar11;
              }
            }
            *(undefined8 *)(unaff_RBX + 0x40) = *(undefined8 *)(unaff_RBX + 0x38);
          }
          *(undefined1 *)(unaff_RBX + 0x50) = 0;
        }
        uVar9 = uVar9 + 1;
        plVar16 = *(long **)(unaff_RBX + 0x20);
        plVar15 = *(long **)(unaff_RBX + 0x28);
      } while (uVar9 < (ulong)(((long)plVar15 - (long)plVar16 >> 4) * -0x5555555555555555));
    }
joined_r0x0c5e2e4a:
    if (plVar16 != plVar15) {
      plVar1 = (long *)plVar15[-2];
      plVar15 = plVar15 + -6;
      if (plVar15 != plVar1) goto code_r0x0c5e2e7d;
      lVar13 = 0x20;
      goto LAB_0c5e2e65;
    }
    *(long **)(unaff_RBX + 0x28) = plVar16;
  }
  return;
code_r0x0c5e2e7d:
  lVar13 = 0x28;
  if (plVar1 != (long *)0x0) {
LAB_0c5e2e65:
    (**(code **)(*plVar1 + lVar13))();
  }
  goto joined_r0x0c5e2e4a;
}


