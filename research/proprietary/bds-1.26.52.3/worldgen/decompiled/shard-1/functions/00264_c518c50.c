/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc618c50 (ELF vaddr 0xc518c50)
 * Label: callee-of:0xc5ca820
 * Body:  [[0c618c50, 0c618de1] [0c618df0, 0c618e22] [0c618e30, 0c618e4a] [0c618e50, 0c618f42] [0c618f50, 0c618fa4] [0c618fb0, 0c61914e] [0c619150, 0c6191a5]]
 * Ghidra: FUN_0c618c50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c618c50(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  
  if (*(long *)(param_1 + 8) != *(long *)(param_1 + 0x10)) {
    plVar16 = *(long **)(param_1 + 0x28);
    if (plVar16 < *(long **)(param_1 + 0x30)) {
      plVar17 = (long *)param_2[4];
      if (plVar17 == (long *)0x0) {
        plVar16[4] = 0;
      }
      else if (plVar17 == param_2) {
        plVar16[4] = (long)plVar16;
        (**(code **)(*(long *)param_2[4] + 0x18))((long *)param_2[4],plVar16);
      }
      else {
        plVar16[4] = (long)plVar17;
        param_2[4] = 0;
      }
      plVar16 = plVar16 + 6;
    }
    else {
      plVar17 = *(long **)(param_1 + 0x20);
      lVar14 = (long)plVar16 - (long)plVar17;
      uVar9 = (lVar14 >> 4) * -0x5555555555555555 + 1;
      if (0x555555555555555 < uVar9) {
LAB_0c619188:
        uVar7 = func_0x0c631bd0();
        uVar7 = func_0x04882e20(uVar7);
        uVar7 = func_0x04882e20(uVar7);
        func_0x04882e20(uVar7);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar12 = (long)*(long **)(param_1 + 0x30) - (long)plVar17 >> 4;
      uVar5 = lVar12 * 0x5555555555555556;
      if (uVar9 < uVar5) {
        uVar9 = uVar5;
      }
      if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar12 * -0x5555555555555555)) {
        uVar9 = 0x555555555555555;
      }
      if (uVar9 == 0) {
        lVar12 = 0;
      }
      else {
        if (0x555555555555555 < uVar9) {
LAB_0c619183:
          func_0x04882eb0();
          goto LAB_0c619188;
        }
        lVar12 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar9 * 0x30);
        if (lVar12 == 0) {
          func_0x0eec74c0(uVar9 * 0x30,0);
          lVar12 = 0;
        }
      }
      lVar2 = lVar12 + lVar14;
      plVar11 = (long *)param_2[4];
      if (plVar11 == (long *)0x0) {
        *(undefined8 *)(lVar2 + 0x20) = 0;
      }
      else if (plVar11 == param_2) {
        *(long *)(lVar2 + 0x20) = lVar2;
        (**(code **)(*plVar11 + 0x18))(plVar11,lVar2);
        plVar17 = *(long **)(param_1 + 0x20);
        plVar16 = *(long **)(param_1 + 0x28);
        lVar14 = (long)plVar16 - (long)plVar17;
      }
      else {
        *(long **)(lVar2 + 0x20) = plVar11;
        param_2[4] = 0;
      }
      lVar10 = lVar2 - lVar14;
      plVar11 = plVar17;
      if (plVar17 != plVar16) {
        do {
          plVar1 = (long *)plVar11[4];
          if (plVar1 == (long *)0x0) {
            *(undefined8 *)(lVar10 + 0x20) = 0;
          }
          else if (plVar11 == plVar1) {
            *(long *)(lVar10 + 0x20) = lVar10;
            (**(code **)(*(long *)plVar11[4] + 0x18))((long *)plVar11[4],lVar10);
          }
          else {
            *(long **)(lVar10 + 0x20) = plVar1;
            plVar11[4] = 0;
          }
          plVar11 = plVar11 + 6;
          lVar10 = lVar10 + 0x30;
        } while (plVar11 != plVar16);
        do {
          plVar11 = (long *)plVar17[4];
          if (plVar17 == plVar11) {
            lVar10 = 0x20;
LAB_0c618e55:
            (**(code **)(*plVar11 + lVar10))();
          }
          else {
            lVar10 = 0x28;
            if (plVar11 != (long *)0x0) goto LAB_0c618e55;
          }
          plVar17 = plVar17 + 6;
        } while (plVar17 != plVar16);
        plVar17 = *(long **)(param_1 + 0x20);
      }
      plVar16 = (long *)(lVar2 + 0x30);
      *(long *)(param_1 + 0x20) = lVar2 - lVar14;
      *(long **)(param_1 + 0x28) = plVar16;
      lVar14 = *(long *)(param_1 + 0x30);
      *(ulong *)(param_1 + 0x30) = lVar12 + uVar9 * 0x30;
      if (plVar17 != (long *)0x0) {
        func_0x0412a280(plVar17,lVar14 - (long)plVar17);
      }
    }
    *(long **)(param_1 + 0x28) = plVar16;
    plVar17 = *(long **)(param_1 + 0x20);
    if ((long)plVar16 - (long)plVar17 == 0x30) {
      if (plVar16 != plVar17) {
        uVar9 = 0;
        do {
          plVar17 = *(long **)(param_1 + 0x10);
          for (plVar16 = *(long **)(param_1 + 8); plVar16 != plVar17; plVar16 = plVar16 + 1) {
            if (*plVar16 != 0) {
              plVar11 = *(long **)(*(long *)(param_1 + 0x20) + 0x20 + uVar9 * 0x30);
              if (plVar11 == (long *)0x0) {
                func_0x04891200();
                goto LAB_0c61917e;
              }
              iVar4 = (**(code **)(*plVar11 + 0x30))();
              if (iVar4 == 0) break;
            }
          }
          if (*(char *)(param_1 + 0x50) == '\x01') {
            plVar16 = *(long **)(param_1 + 8);
            plVar17 = *(long **)(param_1 + 0x10);
            if (plVar16 != plVar17) {
              do {
                while (*plVar16 == 0) {
                  lVar14 = (long)plVar17 - (long)(plVar16 + 1);
                  if (lVar14 != 0) {
                    func_0x0eee2ee0(plVar16,plVar16 + 1,lVar14);
                  }
                  plVar17 = (long *)(lVar14 + (long)plVar16);
                  *(long **)(param_1 + 0x10) = plVar17;
                  if (plVar16 == plVar17) goto LAB_0c618fdf;
                }
                plVar16 = plVar16 + 1;
              } while (plVar16 != plVar17);
            }
LAB_0c618fdf:
            lVar14 = *(long *)(param_1 + 0x38);
            if (lVar14 != *(long *)(param_1 + 0x40)) {
              lVar12 = *(long *)(param_1 + 0x40) - lVar14;
              if (0 < lVar12 >> 3) {
                if (*(long *)(param_1 + 0x18) - (long)plVar17 < lVar12) {
                  lVar2 = *(long *)(param_1 + 8);
                  lVar10 = (long)plVar17 - lVar2;
                  uVar5 = (lVar12 >> 3) + (lVar10 >> 3);
                  if (0x1fffffffffffffff < uVar5) {
LAB_0c61917e:
                    func_0x049e9920();
                    goto LAB_0c619183;
                  }
                  uVar8 = *(long *)(param_1 + 0x18) - lVar2;
                  uVar15 = (long)uVar8 >> 2;
                  if ((ulong)((long)uVar8 >> 2) <= uVar5) {
                    uVar15 = uVar5;
                  }
                  if (0x7ffffffffffffff7 < uVar8) {
                    uVar15 = 0x1fffffffffffffff;
                  }
                  if (uVar15 == 0) {
LAB_0c6190b5:
                    lVar6 = 0;
                  }
                  else {
                    if (0x1fffffffffffffff < uVar15) goto LAB_0c619183;
                    lVar6 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
                    if (lVar6 == 0) {
                      func_0x0eec74c0(uVar15 * 8,0);
                      goto LAB_0c6190b5;
                    }
                  }
                  lVar13 = lVar6 + lVar10;
                  func_0x0eee2f00(lVar13,lVar14,lVar12);
                  *(long **)(param_1 + 0x10) = plVar17;
                  lVar14 = lVar13 + (lVar10 >> 3) * -8;
                  func_0x0eee2f00(lVar14,lVar2,lVar10);
                  *(long *)(param_1 + 8) = lVar14;
                  *(long *)(param_1 + 0x10) = lVar12 + lVar13;
                  *(ulong *)(param_1 + 0x18) = uVar15 * 8 + lVar6;
                  if (lVar2 != 0) {
                    func_0x0412a280(lVar2,uVar8);
                  }
                }
                else {
                  func_0x0eee2ee0(plVar17,lVar14,lVar12);
                  *(long *)(param_1 + 0x10) = (long)plVar17 + lVar12;
                }
              }
              *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x38);
            }
            *(undefined1 *)(param_1 + 0x50) = 0;
          }
          uVar9 = uVar9 + 1;
          plVar17 = *(long **)(param_1 + 0x20);
          plVar16 = *(long **)(param_1 + 0x28);
        } while (uVar9 < (ulong)(((long)plVar16 - (long)plVar17 >> 4) * -0x5555555555555555));
      }
joined_r0x0c61913a:
      if (plVar17 != plVar16) {
        plVar11 = (long *)plVar16[-2];
        plVar16 = plVar16 + -6;
        if (plVar16 != plVar11) goto code_r0x0c61916d;
        lVar14 = 0x20;
        goto LAB_0c619155;
      }
      *(long **)(param_1 + 0x28) = plVar17;
    }
  }
  return;
code_r0x0c61916d:
  lVar14 = 0x28;
  if (plVar11 != (long *)0x0) {
LAB_0c619155:
    (**(code **)(*plVar11 + lVar14))();
  }
  goto joined_r0x0c61913a;
}


