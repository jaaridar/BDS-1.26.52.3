/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1d8270
 * Label: br::worldgen::processors::Capped::vslot4
 * Body:  [[0d1d8270, 0d1d84a7] [0d1d84b0, 0d1d8540] [0d1d8550, 0d1d86bf] [0d1d86c1, 0d1d8787] [0d1d8790, 0d1d8820] [0d1d8830, 0d1d88a8] [0d1d88b0, 0d1d898c] [0d1d8990, 0d1d8a2d] [0d1d8a30, 0d1d8ae5] [0d1d8af0, 0d1d8bc8] [0d1d8bd0, 0d1d8bfc] [0d1d8c00, 0d1d8d89] [0d1d8ddd, 0d1d8e72]]
 * Ghidra: wg_br__worldgen__processors__Capped__vslot4
 */


/* WARNING: Removing unreachable block (ram,0x0d1d8653) */
/* WARNING: Removing unreachable block (ram,0x0d1d8379) */
/* WARNING: Removing unreachable block (ram,0x0d1d8428) */
/* WARNING: Removing unreachable block (ram,0x0d1d8702) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool wg_br__worldgen__processors__Capped__vslot4(void)

{
  long *plVar1;
  char cVar2;
  ulong in_RAX;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 in_RCX;
  long lVar7;
  long *plVar8;
  undefined8 unaff_RBX;
  undefined8 *puVar9;
  int iVar10;
  long *unaff_RBP;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long unaff_R12;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  uint uVar17;
  ulong uVar18;
  undefined8 uVar19;
  bool bVar20;
  long in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  byte in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined *in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined4 in_stack_00000080;
  long in_stack_00000088;
  ulong in_stack_00000090;
  long in_stack_00000098;
  undefined8 in_stack_000000a0;
  uint uStack00000000000000ac;
  long *in_stack_000000b0;
  undefined8 uStack00000000000000c8;
  undefined8 uStack00000000000000d0;
  
  bVar20 = (in_RAX & 1) == 0;
  uStack00000000000000c8 = *(undefined8 *)(unaff_R12 + 0x28);
  if (bVar20) {
    uStack00000000000000c8 = unaff_RBX;
  }
  uStack00000000000000d0 = in_RCX;
  if (!bVar20) {
    uStack00000000000000d0 = *(undefined8 *)(unaff_R12 + 0x20);
  }
  cVar2 = (**(code **)(_DAT_0f7b8f98 + 0x18))(&DAT_0f7b8f98,&stack0x000000c8);
  if (cVar2 != '\0') {
    uVar19 = *(undefined8 *)(unaff_R12 + 0x28);
    uVar18 = *(ulong *)(unaff_R12 + 0x20);
    if ((*(byte *)(unaff_R12 + 0x18) & 1) == 0) {
      uVar19 = unaff_RBX;
      uVar18 = (ulong)(*(byte *)(unaff_R12 + 0x18) >> 1);
    }
    if ((DAT_0f7b8fb8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f7b8fb8), iVar10 != 0)) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      func_0x0410844d(&DAT_0f7b8fb8);
    }
    in_stack_00000068 = uVar19;
    in_stack_00000070 = (undefined *)uVar18;
    (**(code **)(_DAT_0f7b8f98 + 0x10))(&stack0x00000020,&DAT_0f7b8f98,&stack0x00000068);
    in_stack_00000068 = 0xda60a31b5a271429;
    in_stack_00000070 = &UNK_0140f690;
    in_stack_00000078 = 1;
    in_stack_00000080 = 0x24;
    if (in_stack_00000060 == 0) {
      func_0x0eedeb80(2,0x2d,&stack0x00000020,&stack0x00000000,&stack0x00000068);
    }
    lVar15 = in_stack_00000048;
    if ((in_stack_00000060 & 1) != 0) {
      in_stack_000000a0 = 0;
      func_0x0ee768f0(&stack0x00000020,*unaff_RBP,in_stack_00000098,0x1000,&stack0x000000a0);
      lVar15 = in_stack_00000088;
      in_stack_00000068 = 0xda60a31b5a271429;
      in_stack_00000070 = &UNK_0140f690;
      in_stack_00000078 = 1;
      in_stack_00000080 = 0x27;
      if (in_stack_00000060 == 0) {
        func_0x0eedeb80(2,0x2d,&stack0x00000020,&stack0x00000000,&stack0x00000068);
      }
      lVar7 = in_stack_00000048;
      if ((in_stack_00000060 & 1) == 0) {
        lVar14 = in_stack_00000050;
        if (in_stack_00000048 != 0) {
          while (lVar7 != lVar14) {
            func_0x048b3e80(lVar14 + -0x40);
            lVar14 = lVar14 + -0x40;
          }
          in_stack_00000050 = lVar7;
          func_0x0412a280(in_stack_00000048,in_stack_00000058 - in_stack_00000048);
        }
        lVar14 = in_stack_00000030;
        lVar7 = in_stack_00000038;
        if (in_stack_00000030 != 0) {
          for (; lVar14 != lVar7; lVar7 = lVar7 + -0x50) {
            if ((*(char *)(lVar7 + -8) == '\x01') && ((*(byte *)(lVar7 + -0x30) & 1) != 0)) {
              func_0x0412a280(*(undefined8 *)(lVar7 + -0x20),
                              *(ulong *)(lVar7 + -0x30) & 0xfffffffffffffffe);
            }
          }
          in_stack_00000038 = lVar14;
          func_0x0412a280(in_stack_00000030,in_stack_00000040 - in_stack_00000030);
        }
      }
      puVar9 = (undefined8 *)(lVar15 + 0x2038);
      puVar5 = *(undefined8 **)(lVar15 + 0x2038);
      puVar3 = puVar9;
      while (puVar16 = puVar3, puVar5 != (undefined8 *)0x0) {
        while (puVar4 = puVar5, *(int *)((long)puVar4 + 0x1c) < 1) {
          if (-1 < *(int *)((long)puVar4 + 0x1c)) goto LAB_0d1d8a24;
          puVar5 = (undefined8 *)puVar4[1];
          if ((undefined8 *)puVar4[1] == (undefined8 *)0x0) {
            puVar3 = puVar4 + 1;
            puVar16 = puVar4;
            goto LAB_0d1d89b7;
          }
        }
        puVar3 = puVar4;
        puVar5 = (undefined8 *)*puVar4;
      }
LAB_0d1d89b7:
      puVar4 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
      if (puVar4 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x28,0);
      }
      *(undefined4 *)((long)puVar4 + 0x1c) = 0;
      *(undefined1 *)(puVar4 + 4) = 0;
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = puVar16;
      *puVar3 = puVar4;
      if (**(long **)(lVar15 + 0x2030) != 0) {
        *(long *)(lVar15 + 0x2030) = **(long **)(lVar15 + 0x2030);
      }
      func_0x048bed00(*(undefined8 *)(lVar15 + 0x2038),puVar4);
      *(long *)(lVar15 + 0x2040) = *(long *)(lVar15 + 0x2040) + 1;
LAB_0d1d8a24:
      *(undefined1 *)(puVar4 + 4) = 0;
      lVar7 = 0;
      do {
        uVar17 = *(uint *)(in_stack_00000098 + lVar7 * 4);
        if ((uVar17 != 0) && (uStack00000000000000ac = uVar17 & 0xff, (uVar17 & 0xff) != 0)) {
          in_stack_00000090 = (ulong)(uint)((int)uVar17 >> 8);
          lVar14 = *(long *)(lVar15 + 0x2040);
          uVar17 = 0;
LAB_0d1d8acf:
          do {
            iVar10 = uVar17 + (int)in_stack_00000090;
            puVar5 = (undefined8 *)*puVar9;
            puVar3 = puVar9;
            while (puVar16 = puVar3, puVar5 != (undefined8 *)0x0) {
              while (puVar16 = puVar5, *(int *)((long)puVar16 + 0x1c) <= iVar10) {
                if (iVar10 <= *(int *)((long)puVar16 + 0x1c)) {
                  *(undefined1 *)(puVar16 + 4) = 0;
                  uVar17 = uVar17 + 1;
                  lVar15 = in_stack_00000088;
                  if (uVar17 == uStack00000000000000ac) goto LAB_0d1d8a30;
                  goto LAB_0d1d8acf;
                }
                puVar5 = (undefined8 *)puVar16[1];
                if ((undefined8 *)puVar16[1] == (undefined8 *)0x0) {
                  puVar3 = puVar16 + 1;
                  goto LAB_0d1d8b19;
                }
              }
              puVar3 = puVar16;
              puVar5 = (undefined8 *)*puVar16;
            }
LAB_0d1d8b19:
            plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
            if (plVar6 == (long *)0x0) {
              in_stack_000000b0 = plVar6;
              func_0x0eec74c0(0x28,0);
              plVar6 = in_stack_000000b0;
            }
            *(int *)((long)plVar6 + 0x1c) = iVar10;
            *(undefined1 *)(plVar6 + 4) = 0;
            *plVar6 = 0;
            plVar6[1] = 0;
            plVar6[2] = (long)puVar16;
            *puVar3 = plVar6;
            if (**(long **)(in_stack_00000088 + 0x2030) != 0) {
              *(long *)(in_stack_00000088 + 0x2030) = **(long **)(in_stack_00000088 + 0x2030);
            }
            plVar1 = (long *)*puVar9;
            *(bool *)(plVar6 + 3) = plVar6 == plVar1;
            plVar13 = plVar6;
            if (plVar6 != plVar1) {
              do {
                while( true ) {
                  plVar12 = (long *)plVar13[2];
                  if ((char)plVar12[3] != '\0') goto LAB_0d1d8ab0;
                  plVar8 = (long *)plVar12[2];
                  plVar11 = (long *)*plVar8;
                  if (plVar12 == plVar11) break;
                  if ((plVar11 == (long *)0x0) || ((char)plVar11[3] != '\0')) {
                    plVar1 = (long *)*plVar12;
                    if (plVar13 == plVar1) {
                      lVar15 = plVar1[1];
                      *plVar12 = lVar15;
                      if (lVar15 != 0) {
                        *(long **)(lVar15 + 0x10) = plVar12;
                        plVar8 = (long *)plVar12[2];
                      }
                      plVar1[2] = (long)plVar8;
                      if (plVar12 == (long *)*plVar8) {
                        *plVar8 = (long)plVar1;
                      }
                      else {
                        plVar8[1] = (long)plVar1;
                      }
                      plVar1[1] = (long)plVar12;
                      plVar12[2] = (long)plVar1;
                      plVar8 = (long *)plVar1[2];
                      plVar12 = plVar1;
                    }
                    *(undefined1 *)(plVar12 + 3) = 1;
                    *(undefined1 *)(plVar8 + 3) = 0;
                    plVar1 = (long *)plVar8[1];
                    lVar15 = *plVar1;
                    plVar8[1] = lVar15;
                    if (lVar15 != 0) {
                      *(long **)(lVar15 + 0x10) = plVar8;
                    }
                    puVar3 = (undefined8 *)plVar8[2];
                    plVar1[2] = (long)puVar3;
                    if (plVar8 == (long *)*puVar3) {
                      *puVar3 = plVar1;
                    }
                    else {
                      puVar3[1] = plVar1;
                    }
                    *plVar1 = (long)plVar8;
                    plVar8[2] = (long)plVar1;
                    goto LAB_0d1d8ab0;
                  }
                  *(undefined1 *)(plVar12 + 3) = 1;
                  *(bool *)(plVar8 + 3) = plVar8 == plVar1;
                  *(undefined1 *)(plVar11 + 3) = 1;
                  plVar13 = plVar8;
                  if (plVar8 == plVar1) goto LAB_0d1d8ab0;
                }
                lVar15 = plVar8[1];
                if ((lVar15 == 0) || (*(char *)(lVar15 + 0x18) != '\0')) {
                  if (plVar13 != (long *)*plVar12) {
                    plVar1 = (long *)plVar12[1];
                    lVar15 = *plVar1;
                    plVar12[1] = lVar15;
                    if (lVar15 == 0) {
                      plVar1[2] = (long)plVar8;
LAB_0d1d8c8d:
                      *plVar8 = (long)plVar1;
                    }
                    else {
                      *(long **)(lVar15 + 0x10) = plVar12;
                      plVar8 = (long *)plVar12[2];
                      plVar13 = (long *)*plVar8;
                      plVar1[2] = (long)plVar8;
                      if (plVar12 == plVar13) goto LAB_0d1d8c8d;
                      plVar8[1] = (long)plVar1;
                    }
                    *plVar1 = (long)plVar12;
                    plVar12[2] = (long)plVar1;
                    plVar8 = (long *)plVar1[2];
                    plVar11 = (long *)*plVar8;
                    plVar12 = plVar1;
                  }
                  *(undefined1 *)(plVar12 + 3) = 1;
                  *(undefined1 *)(plVar8 + 3) = 0;
                  lVar15 = plVar11[1];
                  *plVar8 = lVar15;
                  if (lVar15 != 0) {
                    *(long **)(lVar15 + 0x10) = plVar8;
                  }
                  puVar3 = (undefined8 *)plVar8[2];
                  plVar11[2] = (long)puVar3;
                  if (plVar8 == (long *)*puVar3) {
                    *puVar3 = plVar11;
                  }
                  else {
                    puVar3[1] = plVar11;
                  }
                  plVar11[1] = (long)plVar8;
                  plVar8[2] = (long)plVar11;
                  break;
                }
                *(undefined1 *)(plVar12 + 3) = 1;
                *(bool *)(plVar8 + 3) = plVar8 == plVar1;
                *(undefined1 *)(lVar15 + 0x18) = 1;
                plVar13 = plVar8;
              } while (plVar8 != plVar1);
            }
LAB_0d1d8ab0:
            lVar14 = lVar14 + 1;
            *(long *)(in_stack_00000088 + 0x2040) = lVar14;
            *(undefined1 *)(plVar6 + 4) = 0;
            uVar17 = uVar17 + 1;
            lVar15 = in_stack_00000088;
          } while (uVar17 != uStack00000000000000ac);
        }
LAB_0d1d8a30:
        lVar7 = lVar7 + 1;
      } while (lVar7 != 0x400);
      goto LAB_0d1d8d46;
    }
    lVar7 = in_stack_00000050;
    if (in_stack_00000048 != 0) {
      while (lVar15 != lVar7) {
        func_0x048b3e80(lVar7 + -0x40);
        lVar7 = lVar7 + -0x40;
      }
      in_stack_00000050 = lVar15;
      func_0x0412a280(in_stack_00000048,in_stack_00000058 - in_stack_00000048);
    }
    lVar7 = in_stack_00000030;
    unaff_R12 = in_stack_00000088;
    lVar15 = in_stack_00000038;
    if (in_stack_00000030 != 0) {
      for (; lVar7 != lVar15; lVar15 = lVar15 + -0x50) {
        if ((*(char *)(lVar15 + -8) == '\x01') && ((*(byte *)(lVar15 + -0x30) & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(lVar15 + -0x20),
                          *(ulong *)(lVar15 + -0x30) & 0xfffffffffffffffe);
        }
      }
      in_stack_00000038 = lVar7;
      func_0x0412a280(in_stack_00000030,in_stack_00000040 - in_stack_00000030);
      unaff_R12 = in_stack_00000088;
    }
  }
  bVar20 = (*(byte *)(unaff_R12 + 0x18) & 1) != 0;
  if (bVar20) {
    unaff_RBX = *(undefined8 *)(unaff_R12 + 0x28);
  }
  uVar18 = (ulong)(*(byte *)(unaff_R12 + 0x18) >> 1);
  if (bVar20) {
    uVar18 = *(ulong *)(unaff_R12 + 0x20);
  }
  if ((DAT_0f7b8fb8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f7b8fb8), iVar10 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
  }
  in_stack_00000068 = unaff_RBX;
  in_stack_00000070 = (undefined *)uVar18;
  (**(code **)(_DAT_0f7b8f98 + 0x10))(&stack0x00000020,&DAT_0f7b8f98,&stack0x00000068);
  in_stack_00000068 = 0xda60a31b5a271429;
  in_stack_00000070 = &UNK_0140f690;
  in_stack_00000078 = 1;
  in_stack_00000080 = 0x3d;
  if (in_stack_00000060 == 0) {
    func_0x0eedeb80(2,0x2d,&stack0x00000020,&stack0x00000000,&stack0x00000068);
  }
  lVar15 = in_stack_00000048;
  if ((in_stack_00000060 & 1) == 0) {
    lVar7 = in_stack_00000050;
    if (in_stack_00000048 != 0) {
      while (lVar15 != lVar7) {
        func_0x048b3e80(lVar7 + -0x40);
        lVar7 = lVar7 + -0x40;
      }
      in_stack_00000050 = lVar15;
      func_0x0412a280(in_stack_00000048,in_stack_00000058 - in_stack_00000048);
    }
    lVar7 = in_stack_00000030;
    lVar15 = in_stack_00000038;
    if (in_stack_00000030 != 0) {
      for (; lVar7 != lVar15; lVar15 = lVar15 + -0x50) {
        if ((*(char *)(lVar15 + -8) == '\x01') && ((*(byte *)(lVar15 + -0x30) & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(lVar15 + -0x20),
                          *(ulong *)(lVar15 + -0x30) & 0xfffffffffffffffe);
        }
      }
      in_stack_00000038 = lVar7;
      func_0x0412a280(in_stack_00000030,in_stack_00000040 - in_stack_00000030);
    }
    return false;
  }
  in_stack_000000a0 = 0;
  func_0x0ee768f0(&stack0x00000020,*unaff_RBP,in_stack_00000098,0x1000,&stack0x000000a0);
  lVar15 = in_stack_00000088;
  in_stack_00000068 = 0xda60a31b5a271429;
  in_stack_00000070 = &UNK_0140f690;
  in_stack_00000078 = 1;
  in_stack_00000080 = 0x43;
  if (in_stack_00000060 == 0) {
    func_0x0eedeb80(2,0x2d,&stack0x00000020,&stack0x00000000,&stack0x00000068);
  }
  lVar7 = in_stack_00000048;
  if ((in_stack_00000060 & 1) == 0) {
    lVar14 = in_stack_00000050;
    if (in_stack_00000048 != 0) {
      while (lVar7 != lVar14) {
        func_0x048b3e80(lVar14 + -0x40);
        lVar14 = lVar14 + -0x40;
      }
      in_stack_00000050 = lVar7;
      func_0x0412a280(in_stack_00000048,in_stack_00000058 - in_stack_00000048);
    }
    lVar14 = in_stack_00000030;
    lVar7 = in_stack_00000038;
    if (in_stack_00000030 != 0) {
      for (; lVar14 != lVar7; lVar7 = lVar7 + -0x50) {
        if ((*(char *)(lVar7 + -8) == '\x01') && ((*(byte *)(lVar7 + -0x30) & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(lVar7 + -0x20),
                          *(ulong *)(lVar7 + -0x30) & 0xfffffffffffffffe);
        }
      }
      in_stack_00000038 = lVar14;
      func_0x0412a280(in_stack_00000030,in_stack_00000040 - in_stack_00000030);
    }
  }
  puVar3 = *(undefined8 **)(lVar15 + 0x2038);
  if (*(undefined8 **)(lVar15 + 0x2038) == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)(lVar15 + 0x2038);
    puVar5 = puVar9;
  }
  else {
    do {
      while (puVar9 = puVar3, 0 < *(int *)((long)puVar9 + 0x1c)) {
        puVar3 = (undefined8 *)*puVar9;
        puVar5 = puVar9;
        if ((undefined8 *)*puVar9 == (undefined8 *)0x0) goto LAB_0d1d88d7;
      }
      if (-1 < *(int *)((long)puVar9 + 0x1c)) goto LAB_0d1d8944;
      puVar3 = (undefined8 *)puVar9[1];
    } while ((undefined8 *)puVar9[1] != (undefined8 *)0x0);
    puVar5 = puVar9 + 1;
  }
LAB_0d1d88d7:
  puVar3 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar3 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  *(undefined4 *)((long)puVar3 + 0x1c) = 0;
  *(undefined1 *)(puVar3 + 4) = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = puVar9;
  *puVar5 = puVar3;
  if (**(long **)(lVar15 + 0x2030) != 0) {
    *(long *)(lVar15 + 0x2030) = **(long **)(lVar15 + 0x2030);
  }
  func_0x048bed00(*(undefined8 *)(lVar15 + 0x2038),puVar3);
  *(long *)(lVar15 + 0x2040) = *(long *)(lVar15 + 0x2040) + 1;
  puVar9 = puVar3;
LAB_0d1d8944:
  *(undefined1 *)(puVar9 + 4) = 0;
LAB_0d1d8d46:
  return *unaff_RBP != 0;
}


