/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc8bbb10 (ELF vaddr 0xc7bbb10)
 * Label: string:BiomeData
 * Body:  [[0c8bbb10, 0c8bbd14] [0c8bbd20, 0c8bbd85] [0c8bbd90, 0c8bbece] [0c8bbeef, 0c8bbf3c]]
 * Ghidra: FUN_0c8bbb10
 */


void FUN_0c8bbb10(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  char cVar4;
  ushort uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined4 uVar15;
  undefined1 uStack_91;
  long *plStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  long lStack_68;
  undefined1 *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  ulong uStack_38;
  
  uStack_78 = 0;
  uStack_70 = 0;
  lStack_68 = 0;
  cVar4 = (**(code **)(*param_2 + 0xa8))(param_2,&UNK_013bcbb7,9,&uStack_78,2);
  if (cVar4 != '\0') {
    lStack_40 = (long)&uStack_78 + 1;
    uStack_38 = uStack_78 >> 1 & 0x7f;
    if ((uStack_78 & 1) != 0) {
      uStack_38 = uStack_70;
      lStack_40 = lStack_68;
    }
    puStack_50 = &UNK_0ef9fd98;
    uStack_48 = 0;
    func_0x0d6c71b0(&plStack_90,&puStack_50);
    plVar10 = plStack_90;
    puStack_88 = &UNK_0149f2bb;
    uStack_80 = 4;
    plVar6 = (long *)func_0x0d6c9880(plStack_90 + 1,&puStack_88);
    if (((plVar6 != plVar10 + 2) && ((int)plVar6[0xc] == 9)) &&
       (lVar12 = plVar6[8], 0 < (int)((ulong)(plVar6[9] - lVar12) >> 3))) {
      lVar14 = 0;
      do {
        plVar10 = *(long **)(lVar12 + lVar14 * 8);
        if ((plVar10 != (long *)0x0) &&
           (cVar4 = (**(code **)(*plVar10 + 0x30))(plVar10), cVar4 == '\n')) {
          puStack_88 = &UNK_0133e2b9;
          uStack_80 = 2;
          plVar8 = plVar10 + 1;
          plVar7 = (long *)func_0x0d6c97a0(plVar8,&puStack_88);
          plVar10 = plVar10 + 2;
          if (plVar7 != plVar10) {
            if ((ulong)*(uint *)(plVar7 + 0xc) == 0xffffffff) {
              plVar6 = (long *)func_0x04931450();
              plVar10 = plStack_90;
              plStack_90 = (long *)0x0;
              if (plVar10 != (long *)0x0) goto LAB_0c8bbf14;
              while ((uStack_78 & 1) == 0) {
                plVar10 = plVar6;
                _Unwind_Resume();
LAB_0c8bbf14:
                (**(code **)(*plVar10 + 8))();
              }
              func_0x0412a280(lStack_68,uStack_78 & 0xfffffffffffffffe);
              _Unwind_Resume(plVar6);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            puStack_58 = &uStack_91;
            plVar7 = (long *)(**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(plVar7 + 0xc) * 8))
                                       (&puStack_58,plVar7 + 7);
            if (plVar7 != (long *)0x0) {
              cVar4 = (**(code **)(*plVar7 + 0x30))(plVar7);
              if (cVar4 == '\x01') {
                uVar5 = (ushort)*(byte *)(plVar7 + 1);
              }
              else {
                cVar4 = (**(code **)(*plVar7 + 0x30))(plVar7);
                if (cVar4 != '\x02') goto LAB_0c8bbc20;
                uVar5 = *(ushort *)(plVar7 + 1);
              }
              plVar7 = *(long **)(param_1 + 0x380);
              plVar2 = *(long **)(param_1 + 0x388);
              if ((long)plVar2 - (long)plVar7 != 0) {
                plVar9 = plVar2;
                uVar13 = (long)plVar2 - (long)plVar7 >> 3;
LAB_0c8bbd39:
                do {
                  uVar11 = uVar13 >> 1;
                  plVar1 = plVar7 + uVar11;
                  if (*(ushort *)(plVar7[uVar11] + 0x168) < uVar5) goto LAB_0c8bbd20;
                  if (*(ushort *)(plVar7[uVar11] + 0x168) <= uVar5) {
                    if (uVar13 != 1) {
                      do {
                        uVar13 = uVar11 >> 1;
                        if (*(ushort *)(plVar7[uVar13] + 0x168) < uVar5) {
                          plVar7 = plVar7 + uVar13 + 1;
                          uVar13 = ~uVar13 + uVar11;
                        }
                        uVar11 = uVar13;
                      } while (uVar13 != 0);
                    }
                    lVar12 = (long)plVar9 - (long)(plVar1 + 1);
                    if (lVar12 != 0) {
                      plVar9 = plVar1 + 1;
                      uVar13 = lVar12 >> 3;
                      do {
                        uVar11 = uVar13 >> 1;
                        if (*(ushort *)(plVar9[uVar11] + 0x168) <= uVar5) {
                          plVar9 = plVar9 + uVar11 + 1;
                          uVar11 = ~uVar11 + uVar13;
                        }
                        uVar13 = uVar11;
                      } while (uVar11 != 0);
                    }
                    if (((plVar7 != plVar9) && (plVar7 != plVar2)) &&
                       (lVar12 = *plVar7, lVar12 != 0)) {
                      puStack_88 = &UNK_012188e6;
                      uStack_80 = 0x10;
                      plVar7 = (long *)func_0x0d6c97a0(plVar8,&puStack_88);
                      if ((plVar7 == plVar10) || ((int)plVar7[0xc] != 5)) {
                        uVar15 = 0;
                      }
                      else {
                        uVar15 = (undefined4)plVar7[8];
                      }
                      *(undefined4 *)(lVar12 + 0x20) = uVar15;
                      puStack_88 = &UNK_011fee2d;
                      uStack_80 = 0xb;
                      plVar8 = (long *)func_0x0d6c97a0(plVar8,&puStack_88);
                      if ((plVar8 == plVar10) || ((int)plVar8[0xc] != 5)) {
                        uVar15 = 0;
                      }
                      else {
                        uVar15 = (undefined4)plVar8[8];
                      }
                      *(undefined4 *)(lVar12 + 0x24) = uVar15;
                    }
                    break;
                  }
                  plVar9 = plVar1;
                  uVar13 = uVar11;
                } while (uVar11 != 0);
              }
            }
          }
        }
LAB_0c8bbc20:
        lVar14 = lVar14 + 1;
        lVar12 = plVar6[8];
      } while (lVar14 < (int)((ulong)(plVar6[9] - lVar12) >> 3));
    }
    plVar10 = plStack_90;
    plStack_90 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
  }
  if ((uStack_78 & 1) != 0) {
    func_0x0412a280(lStack_68,uStack_78 & 0xfffffffffffffffe);
  }
  return;
LAB_0c8bbd20:
  plVar7 = plVar1 + 1;
  uVar13 = ~uVar11 + uVar13;
  if (uVar13 == 0) goto LAB_0c8bbc20;
  goto LAB_0c8bbd39;
}


