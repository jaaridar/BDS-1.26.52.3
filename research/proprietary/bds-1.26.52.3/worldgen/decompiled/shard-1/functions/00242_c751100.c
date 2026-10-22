/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc851100 (ELF vaddr 0xc751100)
 * Label: callee-of:0x51815f0
 * Body:  [[0c851100, 0c851131] [0c851140, 0c8511cd] [0c8511d0, 0c8511fe] [0c851200, 0c8513ce] [0c8513d0, 0c851440]]
 * Ghidra: FUN_0c851100
 */


undefined1  [16] FUN_0c851100(long param_1,long *param_2,uint param_3)

{
  uint uVar1;
  ushort uVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  long *plVar12;
  bool bVar13;
  undefined1 auVar14 [16];
  uint uStack_90;
  uint uStack_88;
  uint auStack_68 [4];
  undefined8 uStack_58;
  int iStack_50;
  int iStack_4c;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  if (200000 < (int)param_3) {
    param_3 = 0;
  }
  plVar11 = (long *)(param_1 + 8);
  uStack_90 = 0;
  uVar5 = 0;
  do {
    uVar4 = -param_3;
    if ((int)-param_3 < 0) {
      uVar4 = param_3;
    }
    if (0x27 < uVar4) {
      auStack_68[1] = 0;
      auStack_68[2] = 0;
      uStack_58 = 0x2800000004;
      auStack_68[0] = param_3;
      auStack_68[3] = param_3 + 0x28;
      (**(code **)(*param_2 + 0x28))(&iStack_50,param_2,auStack_68,4);
      plVar3 = (long *)*plVar11;
      bVar13 = true;
      if (plVar3 != (long *)0x0) {
        uVar4 = 0;
        do {
          iVar9 = uVar4 * iStack_50;
          uVar1 = uVar4 + 1;
          uVar8 = 0;
          do {
            iVar10 = (int)uVar8;
            iVar7 = iStack_4c * iVar10;
            uVar2 = *(ushort *)(*(long *)(lStack_48 + (ulong)(uint)(iVar7 + iVar9) * 8) + 0x168);
            plVar6 = plVar3;
            plVar12 = plVar11;
            do {
              bVar13 = *(ushort *)((long)plVar6 + 0x1a) < uVar2;
              if (!bVar13) {
                plVar12 = plVar6;
              }
              plVar6 = (long *)plVar6[bVar13];
            } while (plVar6 != (long *)0x0);
            if (((plVar12 != plVar11) && (uVar8 != 0)) &&
               (*(ushort *)((long)plVar12 + 0x1a) <= uVar2)) {
              uVar2 = *(ushort *)
                       (*(long *)(lStack_48 + (ulong)(uint)((iVar10 + -1) * iStack_4c + iVar9) * 8)
                       + 0x168);
              plVar6 = plVar3;
              plVar12 = plVar11;
              do {
                bVar13 = *(ushort *)((long)plVar6 + 0x1a) < uVar2;
                if (!bVar13) {
                  plVar12 = plVar6;
                }
                plVar6 = (long *)plVar6[bVar13];
              } while (plVar6 != (long *)0x0);
              if (plVar12 != plVar11) {
                if (uVar8 < 9 && *(ushort *)((long)plVar12 + 0x1a) <= uVar2) {
                  uVar2 = *(ushort *)
                           (*(long *)(lStack_48 +
                                     (ulong)(uint)((iVar10 + 1) * iStack_4c + iVar9) * 8) + 0x168);
                  plVar6 = plVar3;
                  plVar12 = plVar11;
                  do {
                    bVar13 = *(ushort *)((long)plVar6 + 0x1a) < uVar2;
                    if (!bVar13) {
                      plVar12 = plVar6;
                    }
                    plVar6 = (long *)plVar6[bVar13];
                  } while (plVar6 != (long *)0x0);
                  if (((plVar12 != plVar11) && (uVar4 != 0)) &&
                     (*(ushort *)((long)plVar12 + 0x1a) <= uVar2)) {
                    uVar2 = *(ushort *)
                             (*(long *)(lStack_48 + (ulong)(iVar7 + (uVar4 - 1) * iStack_50) * 8) +
                             0x168);
                    plVar6 = plVar3;
                    plVar12 = plVar11;
                    do {
                      bVar13 = *(ushort *)((long)plVar6 + 0x1a) < uVar2;
                      if (!bVar13) {
                        plVar12 = plVar6;
                      }
                      plVar6 = (long *)plVar6[bVar13];
                    } while (plVar6 != (long *)0x0);
                    if (plVar12 != plVar11) {
                      if (*(ushort *)((long)plVar12 + 0x1a) <= uVar2 && uVar4 < 9) {
                        uVar2 = *(ushort *)
                                 (*(long *)(lStack_48 + (ulong)(iVar7 + uVar1 * iStack_50) * 8) +
                                 0x168);
                        plVar6 = plVar3;
                        plVar12 = plVar11;
                        do {
                          bVar13 = *(ushort *)((long)plVar6 + 0x1a) < uVar2;
                          if (!bVar13) {
                            plVar12 = plVar6;
                          }
                          plVar6 = (long *)plVar6[bVar13];
                        } while (plVar6 != (long *)0x0);
                        if ((plVar12 != plVar11) && (*(ushort *)((long)plVar12 + 0x1a) <= uVar2)) {
                          uStack_90 = param_3 + iVar10 * 4;
                          uStack_88 = uVar4 << 2;
                          uVar5 = uStack_90 >> 8;
                          bVar13 = false;
                          goto LAB_0c8513dc;
                        }
                      }
                    }
                  }
                }
              }
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 != 10);
          uVar4 = uVar1;
        } while (uVar1 != 10);
        bVar13 = true;
      }
LAB_0c8513dc:
      if (lStack_48 != 0) {
        lStack_40 = lStack_48;
        func_0x0412a280(lStack_48,lStack_38 - lStack_48);
      }
      if (!bVar13) {
        uVar8 = 0x100000000;
        goto LAB_0c851410;
      }
    }
    bVar13 = 0x30d18 < (int)param_3;
    param_3 = param_3 + 0x28;
    if (bVar13) {
      uVar8 = 0;
      uStack_90 = 0;
LAB_0c851410:
      auVar14._0_8_ = (ulong)(uStack_90 & 0xff | uVar5 << 8) | 0x7fff00000000;
      auVar14._8_8_ = uStack_88 | uVar8;
      return auVar14;
    }
  } while( true );
}


