/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca66020 (ELF vaddr 0xc966020)
 * Label: Dimension::vslot12
 * Body:  [[0ca66020, 0ca66133] [0ca66140, 0ca66187] [0ca66190, 0ca661ea] [0ca661f0, 0ca662ab] [0ca662b0, 0ca666d6]]
 * Ghidra: wg_Dimension__vslot12
 */


/* WARNING: Type propagation algorithm not settling */

long wg_Dimension__vslot12(long param_1,ulong param_2,char param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong *puVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  uint uStack_48;
  
  uVar11 = *(ulong *)(param_1 + 0x1e8);
  if (uVar11 != 0) {
    uVar4 = ((long)param_2 >> 0x20) + 0x9e3779b9;
    uVar4 = (param_2 & 0xffffffff) + 0x9e3779b9 + uVar4 * 0x40 + (uVar4 >> 2) ^ uVar4;
    uVar5 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 >> 2 & 0x3333333333333333) + (uVar5 & 0x3333333333333333);
    uVar5 = ((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar5 >> 0x38 < 2) {
      uVar12 = uVar11 + 0x7fffffffff & uVar4;
    }
    else {
      uVar12 = uVar4;
      if (uVar11 <= uVar4) {
        uVar12 = uVar4 % uVar11;
      }
    }
    plVar10 = *(long **)(*(long *)(param_1 + 0x1e0) + uVar12 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      if ((byte)(uVar5 >> 0x38) < 2) {
        do {
          if (uVar4 == plVar10[1]) {
            if (plVar10[2] == param_2) goto LAB_0ca6651c;
          }
          else if ((plVar10[1] & uVar11 - 1) != uVar12) break;
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          uVar5 = plVar10[1];
          if (uVar4 == uVar5) {
            if (plVar10[2] == param_2) goto LAB_0ca6651c;
          }
          else {
            if (uVar11 <= uVar5) {
              if ((uVar5 | uVar11) >> 0x20 == 0) {
                if ((uVar5 & 0xffffffff) % (uVar11 & 0xffffffff) == uVar12) goto LAB_0ca6614a;
                break;
              }
              uVar5 = uVar5 % uVar11;
            }
            if (uVar5 != uVar12) break;
          }
LAB_0ca6614a:
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
  puVar6 = (undefined8 *)(**(code **)(**(long **)(param_1 + 0xa0) + 0xa28))();
  plVar10 = (long *)*puVar6;
  plVar9 = (long *)puVar6[1];
  uVar11 = param_2;
  do {
    if (plVar10 == plVar9) {
      return 0;
    }
    if (((plVar10[1] != 0) && ((*(uint *)(plVar10 + 2) & 0x3ffff) != 0x3ffff)) &&
       (plVar7 = (long *)func_0x0412c300(), plVar7 != (long *)0x0)) {
      lVar13 = *plVar10;
      if (lVar13 == 0) {
LAB_0ca662b0:
        bVar3 = false;
        LOCK();
        plVar14 = plVar7 + 1;
        lVar13 = *plVar14;
        *plVar14 = *plVar14 + -1;
        UNLOCK();
      }
      else {
        uVar16 = *(uint *)(plVar10 + 2);
        uVar4 = (ulong)((uVar16 & 0x3ffff) >> 0xb);
        if ((((ulong)(*(long *)(lVar13 + 0xe0) - *(long *)(lVar13 + 0xd8) >> 3) <= uVar4) ||
            (lVar15 = *(long *)(*(long *)(lVar13 + 0xd8) + uVar4 * 8), lVar15 == 0)) ||
           ((uVar1 = *(uint *)(lVar15 + (ulong)(uVar16 & 0x7ff) * 4),
            0x3fffe < (uVar16 & 0xfffc0000 ^ uVar1) ||
            (*(ulong *)(lVar13 + 0x118) <= (ulong)(uVar1 & 0x3ffff))))) goto LAB_0ca662b0;
        uVar11 = lVar13 + 0x28;
        bVar3 = true;
        LOCK();
        plVar14 = plVar7 + 1;
        lVar13 = *plVar14;
        *plVar14 = *plVar14 + -1;
        UNLOCK();
        uStack_48 = uVar16;
      }
      if (lVar13 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        func_0x0412c2d0(plVar7);
      }
      if (bVar3) {
        plVar7 = (long *)(*(long *)(uVar11 + 0x38) +
                         (ulong)((int)((ulong)(*(long *)(uVar11 + 0x40) - *(long *)(uVar11 + 0x38))
                                      >> 3) - 1U & 0x85b93800) * 8);
        do {
          if (*plVar7 == -1) goto LAB_0ca661f0;
          lVar13 = *plVar7 * 0x20;
          plVar7 = (long *)(*(long *)(uVar11 + 0x50) + lVar13);
        } while (*(int *)(*(long *)(uVar11 + 0x50) + 8 + lVar13) != -0x7a46c800);
        if ((plVar7 != *(long **)(uVar11 + 0x58)) && (lVar13 = plVar7[2], lVar13 != 0)) {
          uVar4 = (ulong)((uStack_48 & 0x3ffff) >> 0xb);
          if ((uVar4 < (ulong)(*(long *)(lVar13 + 0x10) - *(long *)(lVar13 + 8) >> 3)) &&
             (((lVar15 = *(long *)(*(long *)(lVar13 + 8) + uVar4 * 8), lVar15 != 0 &&
               (uVar16 = *(uint *)(lVar15 + (ulong)(uStack_48 & 0x7ff) * 4),
               (uStack_48 & 0xfffc0000 ^ uVar16) < 0x3ffff)) &&
              (lVar13 = *(long *)(*(long *)(lVar13 + 0x50) + (ulong)(uVar16 >> 4 & 0x3ff8)),
              lVar13 != 0)))) {
            lVar13 = *(long *)(lVar13 + (ulong)(uVar16 & 0x7f) * 8);
            if (param_3 == '\0') {
              if (*(char *)(lVar13 + 0x251) == '\0') goto LAB_0ca66400;
            }
            else if (lVar13 != 0) {
LAB_0ca66400:
              puVar8 = (ulong *)func_0x0b3cf240();
              if (*puVar8 == param_2) {
                lVar15 = *(long *)(lVar13 + 0x10);
                uVar16 = *(uint *)(lVar13 + 0x18);
                plVar7 = (long *)(*(long *)(lVar15 + 0x38) +
                                 (ulong)((int)((ulong)(*(long *)(lVar15 + 0x40) -
                                                      *(long *)(lVar15 + 0x38)) >> 3) - 1U &
                                        0xaf993816) * 8);
                do {
                  if (*plVar7 == -1) {
                    plVar14 = *(long **)(lVar15 + 0x58);
                    plVar7 = plVar14;
                    goto LAB_0ca66479;
                  }
                  lVar17 = *plVar7 * 0x20;
                  plVar7 = (long *)(*(long *)(lVar15 + 0x50) + lVar17);
                } while (*(int *)(*(long *)(lVar15 + 0x50) + 8 + lVar17) != -0x5066c7ea);
                plVar14 = *(long **)(lVar15 + 0x58);
LAB_0ca66479:
                if ((plVar7 == plVar14) || (lVar15 = plVar7[2], lVar15 == 0)) {
LAB_0ca666d1:
                  func_0x04890760();
                  pcVar2 = (code *)swi(3);
                  lVar13 = (*pcVar2)();
                  return lVar13;
                }
                uVar4 = (ulong)((uVar16 & 0x3ffff) >> 0xb);
                if ((((ulong)(*(long *)(lVar15 + 0x10) - *(long *)(lVar15 + 8) >> 3) <= uVar4) ||
                    ((lVar17 = *(long *)(*(long *)(lVar15 + 8) + uVar4 * 8), lVar17 == 0 ||
                     (uVar1 = *(uint *)(lVar17 + (ulong)(uVar16 & 0x7ff) * 4),
                     0x3fffe < (uVar16 & 0xfffc0000 ^ uVar1))))) ||
                   (lVar15 = *(long *)(*(long *)(lVar15 + 0x50) + (ulong)(uVar1 >> 4 & 0x3ff8)),
                   lVar15 == 0)) goto LAB_0ca666d1;
                if (*(int *)(lVar15 + (ulong)(uVar1 & 0x7f) * 4) == *(int *)(param_1 + 0x170)) {
                  return lVar13;
                }
              }
            }
          }
        }
      }
    }
LAB_0ca661f0:
    plVar10 = plVar10 + 3;
  } while( true );
LAB_0ca6651c:
  if (plVar10[4] == 0) {
    return 0;
  }
  if ((*(uint *)(plVar10 + 5) & 0x3ffff) == 0x3ffff) {
    return 0;
  }
  plVar9 = (long *)func_0x0412c300();
  if (plVar9 == (long *)0x0) {
    return 0;
  }
  lVar13 = plVar10[3];
  if (lVar13 != 0) {
    uVar16 = *(uint *)(plVar10 + 5);
    plVar10 = (long *)(ulong)uVar16;
    uVar11 = (ulong)((uVar16 & 0x3ffff) >> 0xb);
    if ((((uVar11 < (ulong)(*(long *)(lVar13 + 0xe0) - *(long *)(lVar13 + 0xd8) >> 3)) &&
         (lVar15 = *(long *)(*(long *)(lVar13 + 0xd8) + uVar11 * 8), lVar15 != 0)) &&
        (uVar1 = *(uint *)(lVar15 + (ulong)(uVar16 & 0x7ff) * 4),
        (uVar16 & 0xfffc0000 ^ uVar1) < 0x3ffff)) &&
       ((ulong)(uVar1 & 0x3ffff) < *(ulong *)(lVar13 + 0x118))) {
      lVar13 = lVar13 + 0x28;
      bVar3 = true;
      goto LAB_0ca665c1;
    }
  }
  uVar16 = (uint)plVar10;
  bVar3 = false;
LAB_0ca665c1:
  LOCK();
  plVar10 = plVar9 + 1;
  lVar15 = *plVar10;
  *plVar10 = *plVar10 + -1;
  UNLOCK();
  if (lVar15 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    func_0x0412c2d0(plVar9);
  }
  if (bVar3) {
    plVar10 = (long *)(*(long *)(lVar13 + 0x38) +
                      (ulong)((int)((ulong)(*(long *)(lVar13 + 0x40) - *(long *)(lVar13 + 0x38)) >>
                                   3) - 1U & 0x85b93800) * 8);
    do {
      if (*plVar10 == -1) {
        plVar10 = *(long **)(lVar13 + 0x58);
        plVar9 = plVar10;
        goto LAB_0ca6663c;
      }
      lVar15 = *plVar10 * 0x20;
      plVar10 = (long *)(*(long *)(lVar13 + 0x50) + lVar15);
    } while (*(int *)(*(long *)(lVar13 + 0x50) + 8 + lVar15) != -0x7a46c800);
    plVar9 = *(long **)(lVar13 + 0x58);
LAB_0ca6663c:
    if ((plVar10 != plVar9) && (lVar13 = plVar10[2], lVar13 != 0)) {
      uVar11 = (ulong)((uVar16 & 0x3ffff) >> 0xb);
      if (((uVar11 < (ulong)(*(long *)(lVar13 + 0x10) - *(long *)(lVar13 + 8) >> 3)) &&
          ((lVar15 = *(long *)(*(long *)(lVar13 + 8) + uVar11 * 8), lVar15 != 0 &&
           (uVar1 = *(uint *)(lVar15 + (ulong)(uVar16 & 0x7ff) * 4),
           (uVar16 & 0xfffc0000 ^ uVar1) < 0x3ffff)))) &&
         (lVar13 = *(long *)(*(long *)(lVar13 + 0x50) + (ulong)(uVar1 >> 4 & 0x3ff8)), lVar13 != 0))
      {
        lVar13 = *(long *)(lVar13 + (ulong)(uVar1 & 0x7f) * 8);
        if (param_3 != '\0') {
          return lVar13;
        }
        if (*(char *)(lVar13 + 0x251) == '\0') {
          return lVar13;
        }
      }
    }
  }
  return 0;
}


