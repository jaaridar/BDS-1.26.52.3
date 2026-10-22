/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1d8420
 * Label: br::worldgen::processors::Capped::vslot5
 * Body:  [[0d1d8420, 0d1d84a7] [0d1d84b0, 0d1d84dd] [0d1d8953, 0d1d898c] [0d1d8990, 0d1d8a2d] [0d1d8a30, 0d1d8ae5] [0d1d8af0, 0d1d8bc8] [0d1d8bd0, 0d1d8bfc] [0d1d8c00, 0d1d8d45] [0d1d8d60, 0d1d8d67] [0d1d8d79, 0d1d8d89]]
 * Ghidra: wg_br__worldgen__processors__Capped__vslot5
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool wg_br__worldgen__processors__Capped__vslot5(void)

{
  undefined8 *puVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  byte *in_RCX;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  int iVar11;
  long *unaff_RBP;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long unaff_R13;
  undefined8 *puVar16;
  uint uVar17;
  byte unaff_retaddr;
  undefined7 unaff_retaddr_00;
  undefined8 in_stack_00000010;
  long in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  byte in_stack_00000060;
  long in_stack_00000088;
  long in_stack_00000098;
  uint uStack00000000000000ac;
  
  *in_RCX = *in_RCX << 1 | (char)*in_RCX < '\0';
  if ((unaff_retaddr & 1) != 0) {
    func_0x0412a280(in_stack_00000010,CONCAT71(unaff_retaddr_00,unaff_retaddr) & 0xfffffffffffffffe)
    ;
  }
  if ((in_stack_00000060 & 1) == 0) {
    if (in_stack_00000048 != 0) {
      while (in_stack_00000048 != in_stack_00000050) {
        in_stack_00000050 = in_stack_00000050 + -0x40;
        func_0x048b3e80(in_stack_00000050);
      }
      func_0x0412a280(in_stack_00000048,in_stack_00000058 - in_stack_00000048);
    }
    if (in_stack_00000030 != 0) {
      for (; in_stack_00000030 != in_stack_00000038; in_stack_00000038 = in_stack_00000038 + -0x50)
      {
        if ((*(char *)(in_stack_00000038 + -8) == '\x01') &&
           ((*(byte *)(in_stack_00000038 + -0x30) & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(in_stack_00000038 + -0x20),
                          *(ulong *)(in_stack_00000038 + -0x30) & 0xfffffffffffffffe);
        }
      }
      func_0x0412a280(in_stack_00000030,in_stack_00000040 - in_stack_00000030);
    }
  }
  puVar1 = (undefined8 *)(unaff_R13 + 0x2038);
  puVar6 = *(undefined8 **)(unaff_R13 + 0x2038);
  puVar10 = puVar1;
  do {
    puVar16 = puVar10;
    if (puVar6 == (undefined8 *)0x0) {
LAB_0d1d89b7:
      puVar5 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
      if (puVar5 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x28,0);
      }
      *(undefined4 *)((long)puVar5 + 0x1c) = 0;
      *(undefined1 *)(puVar5 + 4) = 0;
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = puVar16;
      *puVar10 = puVar5;
      if (**(long **)(unaff_R13 + 0x2030) != 0) {
        *(long *)(unaff_R13 + 0x2030) = **(long **)(unaff_R13 + 0x2030);
      }
      func_0x048bed00(*(undefined8 *)(unaff_R13 + 0x2038),puVar5);
      *(long *)(unaff_R13 + 0x2040) = *(long *)(unaff_R13 + 0x2040) + 1;
LAB_0d1d8a24:
      *(undefined1 *)(puVar5 + 4) = 0;
      lVar8 = 0;
      do {
        uVar2 = *(uint *)(in_stack_00000098 + lVar8 * 4);
        if ((uVar2 != 0) && (uStack00000000000000ac = uVar2 & 0xff, (uVar2 & 0xff) != 0)) {
          lVar15 = *(long *)(unaff_R13 + 0x2040);
          uVar17 = 0;
LAB_0d1d8acf:
          do {
            iVar11 = uVar17 + ((int)uVar2 >> 8);
            puVar6 = (undefined8 *)*puVar1;
            puVar10 = puVar1;
            while (puVar16 = puVar10, unaff_R13 = in_stack_00000088, puVar6 != (undefined8 *)0x0) {
              while (puVar16 = puVar6, *(int *)((long)puVar16 + 0x1c) <= iVar11) {
                if (iVar11 <= *(int *)((long)puVar16 + 0x1c)) {
                  *(undefined1 *)(puVar16 + 4) = 0;
                  uVar17 = uVar17 + 1;
                  if (uVar17 != uStack00000000000000ac) goto LAB_0d1d8acf;
                  goto LAB_0d1d8a30;
                }
                puVar6 = (undefined8 *)puVar16[1];
                if ((undefined8 *)puVar16[1] == (undefined8 *)0x0) {
                  puVar10 = puVar16 + 1;
                  goto LAB_0d1d8b19;
                }
              }
              puVar10 = puVar16;
              puVar6 = (undefined8 *)*puVar16;
            }
LAB_0d1d8b19:
            plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
            if (plVar7 == (long *)0x0) {
              func_0x0eec74c0(0x28,0);
            }
            *(int *)((long)plVar7 + 0x1c) = iVar11;
            *(undefined1 *)(plVar7 + 4) = 0;
            *plVar7 = 0;
            plVar7[1] = 0;
            plVar7[2] = (long)puVar16;
            *puVar10 = plVar7;
            if (**(long **)(in_stack_00000088 + 0x2030) != 0) {
              *(long *)(in_stack_00000088 + 0x2030) = **(long **)(in_stack_00000088 + 0x2030);
            }
            plVar3 = (long *)*puVar1;
            *(bool *)(plVar7 + 3) = plVar7 == plVar3;
            plVar14 = plVar7;
            if (plVar7 != plVar3) {
              do {
                while( true ) {
                  plVar13 = (long *)plVar14[2];
                  if ((char)plVar13[3] != '\0') goto LAB_0d1d8ab0;
                  plVar9 = (long *)plVar13[2];
                  plVar12 = (long *)*plVar9;
                  if (plVar13 == plVar12) break;
                  if ((plVar12 == (long *)0x0) || ((char)plVar12[3] != '\0')) {
                    plVar3 = (long *)*plVar13;
                    if (plVar14 == plVar3) {
                      lVar4 = plVar3[1];
                      *plVar13 = lVar4;
                      if (lVar4 != 0) {
                        *(long **)(lVar4 + 0x10) = plVar13;
                        plVar9 = (long *)plVar13[2];
                      }
                      plVar3[2] = (long)plVar9;
                      if (plVar13 == (long *)*plVar9) {
                        *plVar9 = (long)plVar3;
                      }
                      else {
                        plVar9[1] = (long)plVar3;
                      }
                      plVar3[1] = (long)plVar13;
                      plVar13[2] = (long)plVar3;
                      plVar9 = (long *)plVar3[2];
                      plVar13 = plVar3;
                    }
                    *(undefined1 *)(plVar13 + 3) = 1;
                    *(undefined1 *)(plVar9 + 3) = 0;
                    plVar3 = (long *)plVar9[1];
                    lVar4 = *plVar3;
                    plVar9[1] = lVar4;
                    if (lVar4 != 0) {
                      *(long **)(lVar4 + 0x10) = plVar9;
                    }
                    puVar10 = (undefined8 *)plVar9[2];
                    plVar3[2] = (long)puVar10;
                    if (plVar9 == (long *)*puVar10) {
                      *puVar10 = plVar3;
                    }
                    else {
                      puVar10[1] = plVar3;
                    }
                    *plVar3 = (long)plVar9;
                    plVar9[2] = (long)plVar3;
                    goto LAB_0d1d8ab0;
                  }
                  *(undefined1 *)(plVar13 + 3) = 1;
                  *(bool *)(plVar9 + 3) = plVar9 == plVar3;
                  *(undefined1 *)(plVar12 + 3) = 1;
                  plVar14 = plVar9;
                  if (plVar9 == plVar3) goto LAB_0d1d8ab0;
                }
                lVar4 = plVar9[1];
                if ((lVar4 == 0) || (*(char *)(lVar4 + 0x18) != '\0')) {
                  if (plVar14 != (long *)*plVar13) {
                    plVar3 = (long *)plVar13[1];
                    lVar4 = *plVar3;
                    plVar13[1] = lVar4;
                    if (lVar4 == 0) {
                      plVar3[2] = (long)plVar9;
LAB_0d1d8c8d:
                      *plVar9 = (long)plVar3;
                    }
                    else {
                      *(long **)(lVar4 + 0x10) = plVar13;
                      plVar9 = (long *)plVar13[2];
                      plVar14 = (long *)*plVar9;
                      plVar3[2] = (long)plVar9;
                      if (plVar13 == plVar14) goto LAB_0d1d8c8d;
                      plVar9[1] = (long)plVar3;
                    }
                    *plVar3 = (long)plVar13;
                    plVar13[2] = (long)plVar3;
                    plVar9 = (long *)plVar3[2];
                    plVar12 = (long *)*plVar9;
                    plVar13 = plVar3;
                  }
                  *(undefined1 *)(plVar13 + 3) = 1;
                  *(undefined1 *)(plVar9 + 3) = 0;
                  lVar4 = plVar12[1];
                  *plVar9 = lVar4;
                  if (lVar4 != 0) {
                    *(long **)(lVar4 + 0x10) = plVar9;
                  }
                  puVar10 = (undefined8 *)plVar9[2];
                  plVar12[2] = (long)puVar10;
                  if (plVar9 == (long *)*puVar10) {
                    *puVar10 = plVar12;
                  }
                  else {
                    puVar10[1] = plVar12;
                  }
                  plVar12[1] = (long)plVar9;
                  plVar9[2] = (long)plVar12;
                  break;
                }
                *(undefined1 *)(plVar13 + 3) = 1;
                *(bool *)(plVar9 + 3) = plVar9 == plVar3;
                *(undefined1 *)(lVar4 + 0x18) = 1;
                plVar14 = plVar9;
              } while (plVar9 != plVar3);
            }
LAB_0d1d8ab0:
            lVar15 = lVar15 + 1;
            *(long *)(in_stack_00000088 + 0x2040) = lVar15;
            *(undefined1 *)(plVar7 + 4) = 0;
            uVar17 = uVar17 + 1;
          } while (uVar17 != uStack00000000000000ac);
        }
LAB_0d1d8a30:
        lVar8 = lVar8 + 1;
        if (lVar8 == 0x400) {
          return *unaff_RBP != 0;
        }
      } while( true );
    }
    while (puVar5 = puVar6, *(int *)((long)puVar5 + 0x1c) < 1) {
      if (-1 < *(int *)((long)puVar5 + 0x1c)) goto LAB_0d1d8a24;
      puVar6 = (undefined8 *)puVar5[1];
      if ((undefined8 *)puVar5[1] == (undefined8 *)0x0) {
        puVar10 = puVar5 + 1;
        puVar16 = puVar5;
        goto LAB_0d1d89b7;
      }
    }
    puVar6 = (undefined8 *)*puVar5;
    puVar10 = puVar5;
  } while( true );
}


