/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1f3a00
 * Label: br::worldgen::ConstantHeight::vslot2
 * Body:  [[0d1f3a00, 0d1f568a] [0d1f56ad, 0d1f56ce] [0d1f56d4, 0d1f5716] [0d1f593f, 0d1f598c]]
 * Ghidra: wg_br__worldgen__ConstantHeight__vslot2
 */


/* WARNING: Removing unreachable block (ram,0x0d1f4735) */
/* WARNING: Removing unreachable block (ram,0x0d1f49a4) */
/* WARNING: Removing unreachable block (ram,0x0d1f54cb) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_br__worldgen__ConstantHeight__vslot2(void)

{
  byte *pbVar1;
  ulong *puVar2;
  byte bVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  char cVar7;
  int iVar8;
  ulong in_RAX;
  long lVar9;
  byte *pbVar10;
  undefined1 (*pauVar11) [16];
  long *plVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  undefined8 unaff_RBP;
  byte *pbVar18;
  undefined *puVar19;
  undefined1 (*pauVar20) [16];
  long unaff_R13;
  bool bVar21;
  undefined1 uVar22;
  long in_stack_00000020;
  undefined *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000048;
  char in_stack_00000050;
  undefined1 in_stack_00000058 [16];
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  long in_stack_00000080;
  undefined8 in_stack_00000088;
  byte bStack00000000000000c0;
  ulong uStack00000000000000c8;
  undefined4 uStack00000000000000d0;
  undefined4 uStack00000000000000d8;
  undefined1 auStack00000000000000dc [12];
  undefined8 in_stack_000000e8;
  ulong uStack00000000000000f0;
  undefined8 uStack00000000000000f8;
  undefined8 in_stack_00000100;
  byte bStack0000000000000108;
  undefined8 uStack0000000000000110;
  undefined8 in_stack_00000118;
  undefined1 in_stack_00000120;
  byte bStack0000000000000128;
  undefined8 uStack0000000000000130;
  undefined8 in_stack_00000138;
  
  uVar14 = _bStack0000000000000108;
  if ((in_RAX & 0x20) == 0) {
LAB_0d1f3a74:
    bVar21 = false;
  }
  else {
    uVar16 = (ulong)*(uint *)((in_RAX & 0xffffffffffffff20) + 0x60);
    if (uVar16 == 0xffffffff) goto LAB_0d1f56d4;
    in_stack_00000028 = &stack0x00000040;
    lVar9 = (**(code **)(&UNK_0f47e980 + uVar16 * 8))
                      (&stack0x00000028,(in_RAX & 0xffffffffffffff20) + 0x38);
    if (((lVar9 == 0) || (lVar9 = func_0x0d6c97a0(), lVar9 == in_stack_00000020)) ||
       (*(int *)(lVar9 + 0x60) != 1)) goto LAB_0d1f3a74;
    bVar21 = *(char *)(lVar9 + 0x40) != '\0';
  }
  *(bool *)(unaff_R13 + 0x451) = bVar21;
  _bStack00000000000000c0 = &UNK_01302314;
  lVar9 = func_0x0d6c97a0();
  if (lVar9 == in_stack_00000020) {
LAB_0d1f3b1f:
    uVar22 = *(undefined1 *)(unaff_R13 + 0x451);
  }
  else {
    if ((ulong)*(uint *)(lVar9 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
    in_stack_00000028 = &stack0x00000040;
    lVar9 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar9 + 0x60) * 8))
                      (&stack0x00000028,lVar9 + 0x38);
    if (lVar9 == 0) goto LAB_0d1f3b1f;
    lVar9 = func_0x0d6c97a0();
    if ((lVar9 == in_stack_00000020) || (*(int *)(lVar9 + 0x60) != 1)) {
      uVar22 = 0;
    }
    else {
      uVar22 = *(char *)(lVar9 + 0x40) != '\0';
    }
  }
  *(undefined1 *)(unaff_R13 + 0x450) = uVar22;
  _bStack00000000000000c0 = &UNK_0131d714;
  lVar9 = func_0x0d6c97a0();
  if (lVar9 == in_stack_00000020) {
LAB_0d1f3bd4:
    bVar21 = false;
  }
  else {
    if ((ulong)*(uint *)(lVar9 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
    in_stack_00000028 = &stack0x00000040;
    lVar9 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar9 + 0x60) * 8))
                      (&stack0x00000028,lVar9 + 0x38);
    if (((lVar9 == 0) || (lVar9 = func_0x0d6c97a0(), lVar9 == in_stack_00000020)) ||
       (*(int *)(lVar9 + 0x60) != 1)) goto LAB_0d1f3bd4;
    bVar21 = *(char *)(lVar9 + 0x40) != '\0';
  }
  *(bool *)(unaff_R13 + 0x452) = bVar21;
  _bStack00000000000000c0 = &UNK_014c0b40;
  lVar9 = func_0x0d6c97a0();
  if (lVar9 == in_stack_00000020) {
LAB_0d1f3c7f:
    bVar21 = false;
  }
  else {
    if ((ulong)*(uint *)(lVar9 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
    in_stack_00000028 = &stack0x00000040;
    lVar9 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar9 + 0x60) * 8))
                      (&stack0x00000028,lVar9 + 0x38);
    if (((lVar9 == 0) || (lVar9 = func_0x0d6c97a0(), lVar9 == in_stack_00000020)) ||
       (*(int *)(lVar9 + 0x60) != 1)) goto LAB_0d1f3c7f;
    bVar21 = *(char *)(lVar9 + 0x40) != '\0';
  }
  *(bool *)(unaff_R13 + 0x453) = bVar21;
  _bStack00000000000000c0 = &UNK_013d790c;
  lVar9 = func_0x0d6c97a0();
  if (lVar9 == in_stack_00000020) {
LAB_0d1f3d2a:
    bVar21 = false;
  }
  else {
    if ((ulong)*(uint *)(lVar9 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
    in_stack_00000028 = &stack0x00000040;
    lVar9 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar9 + 0x60) * 8))
                      (&stack0x00000028,lVar9 + 0x38);
    if (((lVar9 == 0) || (lVar9 = func_0x0d6c97a0(), lVar9 == in_stack_00000020)) ||
       (*(int *)(lVar9 + 0x60) != 1)) goto LAB_0d1f3d2a;
    bVar21 = *(char *)(lVar9 + 0x40) != '\0';
  }
  *(bool *)(unaff_R13 + 0x454) = bVar21;
  _bStack00000000000000c0 = &UNK_0147118b;
  lVar9 = func_0x0d6c97a0();
  if (lVar9 == in_stack_00000020) {
LAB_0d1f3dd5:
    bVar21 = false;
  }
  else {
    if ((ulong)*(uint *)(lVar9 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
    in_stack_00000028 = &stack0x00000040;
    lVar9 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar9 + 0x60) * 8))
                      (&stack0x00000028,lVar9 + 0x38);
    if (((lVar9 == 0) || (lVar9 = func_0x0d6c97a0(), lVar9 == in_stack_00000020)) ||
       (*(int *)(lVar9 + 0x60) != 1)) goto LAB_0d1f3dd5;
    bVar21 = *(char *)(lVar9 + 0x40) != '\0';
  }
  *(bool *)(unaff_R13 + 0x455) = bVar21;
  _bStack00000000000000c0 = &UNK_0148c013;
  lVar9 = func_0x0d6c97a0();
  if (lVar9 == in_stack_00000020) {
LAB_0d1f3e80:
    bVar21 = false;
  }
  else {
    if ((ulong)*(uint *)(lVar9 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
    in_stack_00000028 = &stack0x00000040;
    lVar9 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar9 + 0x60) * 8))
                      (&stack0x00000028,lVar9 + 0x38);
    if (((lVar9 == 0) || (lVar9 = func_0x0d6c97a0(), lVar9 == in_stack_00000020)) ||
       (*(int *)(lVar9 + 0x60) != 1)) goto LAB_0d1f3e80;
    bVar21 = *(char *)(lVar9 + 0x40) != '\0';
  }
  *(bool *)(unaff_R13 + 0x456) = bVar21;
  _bStack00000000000000c0 = &UNK_0135325f;
  lVar9 = func_0x0d6c97a0();
  if (lVar9 != in_stack_00000020) {
    if ((ulong)*(uint *)(lVar9 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
    in_stack_00000028 = &stack0x00000040;
    lVar9 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar9 + 0x60) * 8))
                      (&stack0x00000028,lVar9 + 0x38);
    if (lVar9 != 0) {
      func_0x0d6c97a0();
      func_0x0d208fa0();
    }
  }
  _bStack00000000000000c0 = &UNK_011f101f;
  lVar9 = func_0x0d6c97a0();
  if (lVar9 != in_stack_00000020) {
    if ((ulong)*(uint *)(lVar9 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
    in_stack_00000028 = &stack0x00000040;
    lVar9 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar9 + 0x60) * 8))
                      (&stack0x00000028,lVar9 + 0x38);
    if (lVar9 != 0) {
      lVar9 = func_0x0d6c97a0();
      if (lVar9 == in_stack_00000020) {
        lVar17 = 0;
      }
      else {
        lVar17 = 0;
        if (*(int *)(lVar9 + 0x60) == 8) {
          lVar17 = lVar9 + 0x38;
        }
      }
      pbVar10 = (byte *)(lVar17 + 8);
      if (lVar17 == 0) {
        pbVar10 = &UNK_01e79d90;
      }
      pbVar1 = (byte *)(unaff_R13 + 0x458);
      if (pbVar1 != pbVar10) {
        bVar3 = *pbVar10;
        if ((*pbVar1 & 1) == 0) {
          if ((bVar3 & 1) == 0) {
            *(undefined8 *)(unaff_R13 + 0x468) = *(undefined8 *)(pbVar10 + 0x10);
            uVar5 = *(undefined8 *)(pbVar10 + 8);
            *(undefined8 *)pbVar1 = *(undefined8 *)pbVar10;
            *(undefined8 *)(unaff_R13 + 0x460) = uVar5;
          }
          else {
            func_0x04885070(pbVar1,*(undefined8 *)(pbVar10 + 0x10),*(undefined8 *)(pbVar10 + 8));
          }
        }
        else {
          bVar21 = (bVar3 & 1) != 0;
          pbVar18 = pbVar10 + 1;
          if (bVar21) {
            pbVar18 = *(byte **)(pbVar10 + 0x10);
          }
          uVar16 = (ulong)(bVar3 >> 1);
          if (bVar21) {
            uVar16 = *(ulong *)(pbVar10 + 8);
          }
          func_0x04885120(pbVar1,pbVar18,uVar16);
        }
      }
    }
  }
  pauVar20 = (undefined1 (*) [16])(unaff_R13 + 0x470);
  if (pauVar20 != (undefined1 (*) [16])&UNK_01e79d90) {
    if (((*pauVar20)[0] & 1) == 0) {
      *pauVar20 = (undefined1  [16])0x0;
      *(undefined8 *)(unaff_R13 + 0x480) = 0;
    }
    else {
      func_0x04885120(pauVar20,&UNK_01e79d91,0);
    }
  }
  _bStack00000000000000c0 = &UNK_011a0b13;
  lVar9 = func_0x0d6c97a0();
  if (lVar9 != in_stack_00000020) {
    if ((ulong)*(uint *)(lVar9 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
    in_stack_00000028 = &stack0x00000040;
    lVar9 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar9 + 0x60) * 8))
                      (&stack0x00000028,lVar9 + 0x38);
    if (lVar9 != 0) {
      lVar9 = func_0x0d6c97a0();
      if (lVar9 == in_stack_00000020) {
        lVar17 = 0;
      }
      else {
        lVar17 = 0;
        if (*(int *)(lVar9 + 0x60) == 8) {
          lVar17 = lVar9 + 0x38;
        }
      }
      pauVar11 = (undefined1 (*) [16])(lVar17 + 8);
      if (lVar17 == 0) {
        pauVar11 = (undefined1 (*) [16])&UNK_01e79d90;
      }
      if (pauVar20 != pauVar11) {
        bVar3 = (*pauVar11)[0];
        if (((*pauVar20)[0] & 1) == 0) {
          if ((bVar3 & 1) == 0) {
            *(undefined8 *)(unaff_R13 + 0x480) = *(undefined8 *)pauVar11[1];
            uVar5 = *(undefined8 *)(*pauVar11 + 8);
            *(undefined8 *)*pauVar20 = *(undefined8 *)*pauVar11;
            *(undefined8 *)(unaff_R13 + 0x478) = uVar5;
          }
          else {
            func_0x04885070(pauVar20,*(undefined8 *)pauVar11[1],*(undefined8 *)(*pauVar11 + 8));
          }
        }
        else {
          bVar21 = (bVar3 & 1) != 0;
          puVar19 = *pauVar11 + 1;
          if (bVar21) {
            puVar19 = *(undefined **)pauVar11[1];
          }
          uVar16 = (ulong)(bVar3 >> 1);
          if (bVar21) {
            uVar16 = *(ulong *)(*pauVar11 + 8);
          }
          func_0x04885120(pauVar20,puVar19,uVar16);
        }
      }
    }
  }
  pauVar20 = (undefined1 (*) [16])(unaff_R13 + 0x488);
  if (pauVar20 != (undefined1 (*) [16])&UNK_01e79d90) {
    if (((*pauVar20)[0] & 1) == 0) {
      *pauVar20 = (undefined1  [16])0x0;
      *(undefined8 *)(unaff_R13 + 0x498) = 0;
    }
    else {
      func_0x04885120(pauVar20,&UNK_01e79d91,0);
    }
  }
  if ((*(byte *)(unaff_R13 + 0x470) & 1) == 0) {
    if (*(byte *)(unaff_R13 + 0x470) >> 1 != 0) goto LAB_0d1f421e;
  }
  else if (*(long *)(unaff_R13 + 0x478) != 0) {
LAB_0d1f421e:
    uStack00000000000000c8 = 0x17;
    _bStack00000000000000c0 = &UNK_014dbedb;
    auVar6 = _bStack00000000000000c0;
    _bStack00000000000000c0 = &UNK_014dbedb;
    lVar9 = func_0x0d6c97a0();
    if (lVar9 != in_stack_00000020) {
      if ((ulong)*(uint *)(lVar9 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
      in_stack_00000028 = &stack0x00000040;
      lVar9 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar9 + 0x60) * 8))
                        (&stack0x00000028,lVar9 + 0x38);
      if (lVar9 != 0) {
        in_stack_00000028 = &UNK_014dbedb;
        in_stack_00000030 = 0x17;
        lVar9 = func_0x0d6c97a0();
        if (lVar9 == in_stack_00000020) {
          lVar17 = 0;
        }
        else {
          lVar17 = 0;
          if (*(int *)(lVar9 + 0x60) == 8) {
            lVar17 = lVar9 + 0x38;
          }
        }
        pauVar11 = (undefined1 (*) [16])(lVar17 + 8);
        if (lVar17 == 0) {
          pauVar11 = (undefined1 (*) [16])&UNK_01e79d90;
        }
        if (((*pauVar11)[0] & 1) == 0) {
          _uStack00000000000000d0 = *(long *)pauVar11[1];
          _bStack00000000000000c0 = *pauVar11;
        }
        else {
          func_0x0412e5e0(&stack0x000000c0,*(undefined8 *)pauVar11[1],*(undefined8 *)(*pauVar11 + 8)
                         );
          _bStack00000000000000c0 = auVar6;
        }
        bVar3 = bStack00000000000000c0;
        uVar16 = (ulong)(bStack00000000000000c0 >> 1);
        lVar9 = (long)&stack0x000000c0 + 1;
        if ((bStack00000000000000c0 & 1) != 0) {
          uVar16 = uStack00000000000000c8;
          lVar9 = _uStack00000000000000d0;
        }
        cVar7 = func_0x0eedb280(lVar9,uVar16);
        if ((pauVar20 != (undefined1 (*) [16])&stack0x000000c0) && (cVar7 != '\0')) {
          if (((*pauVar20)[0] & 1) == 0) {
            if ((bVar3 & 1) == 0) {
              *(long *)(unaff_R13 + 0x498) = _uStack00000000000000d0;
              *(undefined **)*pauVar20 = _bStack00000000000000c0;
              *(ulong *)(unaff_R13 + 0x490) = uStack00000000000000c8;
            }
            else {
              func_0x04885070(pauVar20,_uStack00000000000000d0,uStack00000000000000c8);
            }
          }
          else {
            func_0x04885120(pauVar20,lVar9,uVar16);
          }
        }
        unaff_R13 = in_stack_00000080;
        unaff_RBP = in_stack_00000070;
        if ((bVar3 & 1) != 0) {
          func_0x0412a280(_uStack00000000000000d0,
                          (ulong)_bStack00000000000000c0 & 0xfffffffffffffffe);
          unaff_RBP = in_stack_00000070;
        }
      }
    }
  }
  pauVar20 = (undefined1 (*) [16])(unaff_R13 + 0x4a0);
  if (pauVar20 != (undefined1 (*) [16])&UNK_01e79d90) {
    if (((*pauVar20)[0] & 1) == 0) {
      *pauVar20 = (undefined1  [16])0x0;
      *(undefined8 *)(unaff_R13 + 0x4b0) = 0;
    }
    else {
      func_0x04885120(pauVar20,&UNK_01e79d91,0);
    }
  }
  uStack00000000000000c8 = 0x13;
  _bStack00000000000000c0 = &UNK_0148c027;
  auVar6 = _bStack00000000000000c0;
  _bStack00000000000000c0 = &UNK_0148c027;
  lVar9 = func_0x0d6c97a0(unaff_RBP,&stack0x000000c0);
  if (lVar9 != in_stack_00000020) {
    if ((ulong)*(uint *)(lVar9 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
    in_stack_00000028 = &stack0x00000040;
    lVar9 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar9 + 0x60) * 8))
                      (&stack0x00000028,lVar9 + 0x38);
    if (lVar9 != 0) {
      in_stack_00000028 = &UNK_0148c027;
      in_stack_00000030 = 0x13;
      lVar9 = func_0x0d6c97a0(unaff_RBP,&stack0x00000028);
      if (lVar9 == in_stack_00000020) {
        lVar17 = 0;
      }
      else {
        lVar17 = 0;
        if (*(int *)(lVar9 + 0x60) == 8) {
          lVar17 = lVar9 + 0x38;
        }
      }
      pauVar11 = (undefined1 (*) [16])(lVar17 + 8);
      if (lVar17 == 0) {
        pauVar11 = (undefined1 (*) [16])&UNK_01e79d90;
      }
      if (((*pauVar11)[0] & 1) == 0) {
        _uStack00000000000000d0 = *(long *)pauVar11[1];
        _bStack00000000000000c0 = *pauVar11;
      }
      else {
        func_0x0412e5e0(&stack0x000000c0,*(undefined8 *)pauVar11[1],*(undefined8 *)(*pauVar11 + 8));
        _bStack00000000000000c0 = auVar6;
      }
      bVar3 = bStack00000000000000c0;
      uVar16 = (ulong)(bStack00000000000000c0 >> 1);
      lVar9 = (long)&stack0x000000c0 + 1;
      if ((bStack00000000000000c0 & 1) != 0) {
        uVar16 = uStack00000000000000c8;
        lVar9 = _uStack00000000000000d0;
      }
      cVar7 = func_0x0eedb280(lVar9,uVar16);
      if ((pauVar20 != (undefined1 (*) [16])&stack0x000000c0) && (cVar7 != '\0')) {
        if (((*pauVar20)[0] & 1) == 0) {
          if ((bVar3 & 1) == 0) {
            *(long *)(unaff_R13 + 0x4b0) = _uStack00000000000000d0;
            *(undefined **)*pauVar20 = _bStack00000000000000c0;
            *(ulong *)(unaff_R13 + 0x4a8) = uStack00000000000000c8;
          }
          else {
            func_0x04885070(pauVar20,_uStack00000000000000d0,uStack00000000000000c8);
          }
        }
        else {
          func_0x04885120(pauVar20,lVar9,uVar16);
        }
      }
      unaff_R13 = in_stack_00000080;
      unaff_RBP = in_stack_00000070;
      if ((bVar3 & 1) != 0) {
        func_0x0412a280(_uStack00000000000000d0,(ulong)_bStack00000000000000c0 & 0xfffffffffffffffe)
        ;
        unaff_RBP = in_stack_00000070;
      }
    }
  }
  lVar9 = func_0x0d6c97a0(unaff_RBP,&stack0x000000c0);
  if ((lVar9 != in_stack_00000020) && (*(int *)(lVar9 + 0x60) == 10)) {
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar12 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar12 = (long)&UNK_0f47e0b0;
    pauVar20 = (undefined1 (*) [16])(plVar12 + 2);
    *(undefined1 (*) [16])(plVar12 + 2) = (undefined1  [16])0x0;
    plVar12[1] = (long)pauVar20;
    func_0x0d6bd5f0(plVar12,lVar9 + 0x38);
    puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar13 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    unaff_R13 = in_stack_00000080;
    *puVar13 = &UNK_0f47e0b0;
    puVar13[1] = plVar12[1];
    lVar9 = plVar12[2];
    puVar13[2] = lVar9;
    lVar17 = plVar12[3];
    puVar13[3] = lVar17;
    if (lVar17 == 0) {
      puVar13[1] = puVar13 + 2;
    }
    else {
      *(undefined8 **)(lVar9 + 0x10) = puVar13 + 2;
      plVar12[1] = (long)pauVar20;
      *pauVar20 = (undefined1  [16])0x0;
    }
    in_stack_00000028 = (undefined *)0xf71d628;
    lVar9 = func_0x09be9cc0(in_stack_00000080 + 0x4f0,0xf71d628,&UNK_01563a4f,&stack0x00000028,
                            &stack0x00000040);
    in_stack_00000028 = (undefined *)(lVar9 + 0x38);
    (*_UNK_0f45a940)(&stack0x00000028,in_stack_00000028,&stack0x000000c0);
    (*_UNK_0f45a8f0)(&stack0x00000028,&stack0x000000c0);
    uStack00000000000000d8 = 0xffffffff;
    (**(code **)(*plVar12 + 8))(plVar12);
  }
  _bStack00000000000000c0 = _DAT_0f71d640;
  if ((DAT_0f71d630 & 1) == 0) {
    _bStack00000000000000c0 = (undefined *)0xf71d631;
  }
  lVar9 = func_0x0d6c97a0(unaff_RBP,&stack0x000000c0);
  if (lVar9 != in_stack_00000020) {
    if ((ulong)*(uint *)(lVar9 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
    in_stack_00000028 = &stack0x00000040;
    plVar12 = (long *)(**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar9 + 0x60) * 8))
                                (&stack0x00000028,lVar9 + 0x38);
    if ((plVar12 != (long *)0x0) && (cVar7 = (**(code **)(*plVar12 + 0x30))(plVar12), cVar7 == '\n')
       ) {
      lVar9 = func_0x0d6c97a0(unaff_RBP,&stack0x000000c0);
      if (lVar9 == in_stack_00000020) {
        lVar17 = 0;
      }
      else {
        lVar17 = 0;
        if (*(int *)(lVar9 + 0x60) == 10) {
          lVar17 = lVar9 + 0x38;
        }
      }
      plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (plVar12 == (long *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      *plVar12 = (long)&UNK_0f47e0b0;
      pauVar20 = (undefined1 (*) [16])(plVar12 + 2);
      *(undefined1 (*) [16])(plVar12 + 2) = (undefined1  [16])0x0;
      plVar12[1] = (long)pauVar20;
      func_0x0d6bd5f0(plVar12,lVar17);
      puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar13 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      *puVar13 = &UNK_0f47e0b0;
      puVar13[1] = plVar12[1];
      lVar9 = plVar12[2];
      puVar13[2] = lVar9;
      lVar17 = plVar12[3];
      puVar13[3] = lVar17;
      if (lVar17 == 0) {
        puVar13[1] = puVar13 + 2;
      }
      else {
        *(undefined8 **)(lVar9 + 0x10) = puVar13 + 2;
        plVar12[1] = (long)pauVar20;
        *pauVar20 = (undefined1  [16])0x0;
      }
      in_stack_00000028 = (undefined *)0xf71d628;
      lVar9 = func_0x09be9cc0(unaff_R13 + 0x4f0,0xf71d628,&UNK_01563a4f,&stack0x00000028,
                              &stack0x00000040);
      in_stack_00000028 = (undefined *)(lVar9 + 0x38);
      (*_UNK_0f45a940)(&stack0x00000028,in_stack_00000028,&stack0x000000c0);
      (*_UNK_0f45a8f0)(&stack0x00000028,&stack0x000000c0);
      uStack00000000000000d8 = 0xffffffff;
      (**(code **)(*plVar12 + 8))(plVar12);
    }
  }
  _bStack00000000000000c0 = &UNK_013a379c;
  lVar9 = func_0x0d6c97a0(unaff_RBP,&stack0x000000c0);
  if (lVar9 == in_stack_00000020) {
LAB_0d1f4abe:
    bVar21 = false;
  }
  else {
    if ((ulong)*(uint *)(lVar9 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
    in_stack_00000028 = &stack0x00000040;
    lVar9 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar9 + 0x60) * 8))
                      (&stack0x00000028,lVar9 + 0x38);
    if (((lVar9 == 0) ||
        (lVar9 = func_0x0d6c97a0(unaff_RBP,&stack0x000000c0), lVar9 == in_stack_00000020)) ||
       (*(int *)(lVar9 + 0x60) != 1)) goto LAB_0d1f4abe;
    bVar21 = *(char *)(lVar9 + 0x40) != '\0';
  }
  *(bool *)(unaff_R13 + 0x4b8) = bVar21;
  _bStack00000000000000c0 = &UNK_014582d1;
  lVar9 = func_0x0d6c97a0(unaff_RBP,&stack0x000000c0);
  if (lVar9 == in_stack_00000020) {
LAB_0d1f4b69:
    bVar21 = false;
  }
  else {
    if ((ulong)*(uint *)(lVar9 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
    in_stack_00000028 = &stack0x00000040;
    lVar9 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar9 + 0x60) * 8))
                      (&stack0x00000028,lVar9 + 0x38);
    if (((lVar9 == 0) ||
        (lVar9 = func_0x0d6c97a0(unaff_RBP,&stack0x000000c0), lVar9 == in_stack_00000020)) ||
       (*(int *)(lVar9 + 0x60) != 1)) goto LAB_0d1f4b69;
    bVar21 = *(char *)(lVar9 + 0x40) != '\0';
  }
  *(bool *)(unaff_R13 + 0x439) = bVar21;
  func_0x06cfd9a0(&stack0x000000c0,0,0,0,0,0);
  *(undefined4 *)(unaff_R13 + 0x350) = uStack00000000000000d0;
  *(undefined **)(unaff_R13 + 0x340) = &UNK_014582d1;
  *(undefined8 *)(unaff_R13 + 0x348) = 0x10;
  puVar2 = (ulong *)(unaff_R13 + 0x358);
  if ((*(byte *)(unaff_R13 + 0x358) & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(unaff_R13 + 0x368),
                    *(ulong *)(unaff_R13 + 0x358) & 0xfffffffffffffffe);
  }
  *(undefined8 *)(unaff_R13 + 0x368) = in_stack_000000e8;
  *puVar2 = _uStack00000000000000d8;
  *(undefined8 *)(unaff_R13 + 0x360) = auStack00000000000000dc._4_8_;
  lVar9 = func_0x0d6c97a0(unaff_RBP,&stack0x000000c0);
  if ((lVar9 != in_stack_00000020) && (*(int *)(lVar9 + 0x60) == 9)) {
    func_0x06cfe360(&stack0x000000c0,lVar9 + 0x38);
    *(undefined4 *)(unaff_R13 + 0x350) = uStack00000000000000d0;
    *(undefined **)(unaff_R13 + 0x340) = &UNK_0123465e;
    *(undefined8 *)(unaff_R13 + 0x348) = 0x15;
    if ((*(byte *)puVar2 & 1) != 0) {
      func_0x0412a280(*(undefined8 *)(unaff_R13 + 0x368),
                      *(ulong *)(unaff_R13 + 0x358) & 0xfffffffffffffffe);
    }
    *(undefined8 *)(unaff_R13 + 0x368) = in_stack_000000e8;
    *puVar2 = _uStack00000000000000d8;
    *(undefined8 *)(unaff_R13 + 0x360) = auStack00000000000000dc._4_8_;
  }
  _bStack00000000000000c0 = &UNK_014dbef3;
  lVar9 = func_0x0d6c97a0(unaff_RBP,&stack0x000000c0);
  if (lVar9 == in_stack_00000020) {
LAB_0d1f4d29:
    bVar21 = false;
  }
  else {
    if ((ulong)*(uint *)(lVar9 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
    in_stack_00000028 = &stack0x00000040;
    lVar9 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar9 + 0x60) * 8))
                      (&stack0x00000028,lVar9 + 0x38);
    if (((lVar9 == 0) ||
        (lVar9 = func_0x0d6c97a0(unaff_RBP,&stack0x000000c0), lVar9 == in_stack_00000020)) ||
       (*(int *)(lVar9 + 0x60) != 1)) goto LAB_0d1f4d29;
    bVar21 = *(char *)(lVar9 + 0x40) != '\0';
  }
  *(bool *)(unaff_R13 + 0x4b9) = bVar21;
  _bStack00000000000000c0 = &UNK_01283198;
  lVar9 = func_0x0d6c97a0(unaff_RBP,&stack0x000000c0);
  if (lVar9 == in_stack_00000020) {
LAB_0d1f4dd4:
    bVar21 = false;
  }
  else {
    if ((ulong)*(uint *)(lVar9 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
    in_stack_00000028 = &stack0x00000040;
    lVar9 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar9 + 0x60) * 8))
                      (&stack0x00000028,lVar9 + 0x38);
    if (((lVar9 == 0) ||
        (lVar9 = func_0x0d6c97a0(unaff_RBP,&stack0x000000c0), lVar9 == in_stack_00000020)) ||
       (*(int *)(lVar9 + 0x60) != 1)) goto LAB_0d1f4dd4;
    bVar21 = *(char *)(lVar9 + 0x40) != '\0';
  }
  *(bool *)(unaff_R13 + 0x4ba) = bVar21;
  _bStack00000000000000c0 = &UNK_012cf174;
  lVar9 = func_0x0d6c97a0(unaff_RBP,&stack0x000000c0);
  if (lVar9 == in_stack_00000020) {
LAB_0d1f4e7f:
    bVar21 = false;
  }
  else {
    if ((ulong)*(uint *)(lVar9 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
    in_stack_00000028 = &stack0x00000040;
    lVar9 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar9 + 0x60) * 8))
                      (&stack0x00000028,lVar9 + 0x38);
    if (((lVar9 == 0) ||
        (lVar9 = func_0x0d6c97a0(unaff_RBP,&stack0x000000c0), lVar9 == in_stack_00000020)) ||
       (*(int *)(lVar9 + 0x60) != 1)) goto LAB_0d1f4e7f;
    bVar21 = *(char *)(lVar9 + 0x40) != '\0';
  }
  *(bool *)(unaff_R13 + 0x4bb) = bVar21;
  _bStack00000000000000c0 = &UNK_011e49e6;
  lVar9 = func_0x0d6c97a0(unaff_RBP,&stack0x000000c0);
  if (lVar9 == in_stack_00000020) {
LAB_0d1f4f26:
    *(undefined4 *)(unaff_R13 + 0x328) = 4;
  }
  else {
    if ((ulong)*(uint *)(lVar9 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
    in_stack_00000028 = &stack0x00000040;
    lVar9 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar9 + 0x60) * 8))
                      (&stack0x00000028,lVar9 + 0x38);
    if (lVar9 == 0) goto LAB_0d1f4f26;
    lVar9 = func_0x0d6c97a0(unaff_RBP,&stack0x000000c0);
    if ((lVar9 == in_stack_00000020) || (*(int *)(lVar9 + 0x60) != 3)) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(lVar9 + 0x40);
    }
    iVar15 = 4;
    if (4 < iVar8) {
      iVar15 = iVar8;
    }
    iVar8 = 0xc;
    if (iVar15 < 0xc) {
      iVar8 = iVar15;
    }
    *(int *)(unaff_R13 + 0x328) = iVar8;
  }
  _bStack00000000000000c0 = &UNK_012831aa;
  lVar9 = func_0x0d6c97a0(unaff_RBP,&stack0x000000c0);
  if (lVar9 == in_stack_00000020) {
LAB_0d1f4ff4:
    bVar21 = false;
  }
  else {
    if ((ulong)*(uint *)(lVar9 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
    in_stack_00000028 = &stack0x00000040;
    lVar9 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar9 + 0x60) * 8))
                      (&stack0x00000028,lVar9 + 0x38);
    if (((lVar9 == 0) ||
        (lVar9 = func_0x0d6c97a0(unaff_RBP,&stack0x000000c0), lVar9 == in_stack_00000020)) ||
       (*(int *)(lVar9 + 0x60) != 1)) goto LAB_0d1f4ff4;
    bVar21 = *(char *)(lVar9 + 0x40) != '\0';
  }
  *(bool *)(unaff_R13 + 0x4bc) = bVar21;
  _bStack00000000000000c0 = &UNK_0147113e;
  lVar9 = func_0x0d6c97a0(unaff_RBP,&stack0x000000c0);
  if (lVar9 == in_stack_00000020) {
LAB_0d1f509f:
    bVar21 = false;
  }
  else {
    if ((ulong)*(uint *)(lVar9 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
    in_stack_00000028 = &stack0x00000040;
    lVar9 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar9 + 0x60) * 8))
                      (&stack0x00000028,lVar9 + 0x38);
    if (((lVar9 == 0) ||
        (lVar9 = func_0x0d6c97a0(unaff_RBP,&stack0x000000c0), lVar9 == in_stack_00000020)) ||
       (*(int *)(lVar9 + 0x60) != 1)) goto LAB_0d1f509f;
    bVar21 = *(char *)(lVar9 + 0x40) != '\0';
  }
  *(bool *)(unaff_R13 + 0x4be) = bVar21;
  _bStack00000000000000c0 = &UNK_014248d1;
  lVar9 = func_0x0d6c97a0(unaff_RBP,&stack0x000000c0);
  if (lVar9 == in_stack_00000020) {
LAB_0d1f514a:
    uVar22 = *(undefined1 *)(unaff_R13 + 0x18);
  }
  else {
    if ((ulong)*(uint *)(lVar9 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
    in_stack_00000028 = &stack0x00000040;
    lVar9 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar9 + 0x60) * 8))
                      (&stack0x00000028,lVar9 + 0x38);
    if (lVar9 == 0) goto LAB_0d1f514a;
    lVar9 = func_0x0d6c97a0(unaff_RBP,&stack0x000000c0);
    if ((lVar9 == in_stack_00000020) || (*(int *)(lVar9 + 0x60) != 1)) {
      uVar22 = 0;
    }
    else {
      uVar22 = *(char *)(lVar9 + 0x40) != '\0';
    }
  }
  *(undefined1 *)(unaff_R13 + 0x4bd) = uVar22;
  _bStack00000000000000c0 = &UNK_01269312;
  lVar9 = func_0x0d6c97a0(unaff_RBP,&stack0x000000c0);
  if (lVar9 != in_stack_00000020) {
    if ((ulong)*(uint *)(lVar9 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
    in_stack_00000028 = &stack0x00000040;
    lVar9 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar9 + 0x60) * 8))
                      (&stack0x00000028,lVar9 + 0x38);
    if (lVar9 != 0) {
      lVar9 = func_0x0d6c97a0(unaff_RBP,&stack0x000000c0);
      if (lVar9 == in_stack_00000020) {
        lVar17 = 0;
      }
      else {
        lVar17 = 0;
        if (*(int *)(lVar9 + 0x60) == 8) {
          lVar17 = lVar9 + 0x38;
        }
      }
      puVar19 = (undefined *)(lVar17 + 8);
      if (lVar17 == 0) {
        puVar19 = &UNK_01e79d90;
      }
      func_0x0d20a940(unaff_R13,puVar19);
    }
  }
  _bStack00000000000000c0 = &UNK_0136f1f6;
  lVar9 = func_0x0d6c97a0(unaff_RBP,&stack0x000000c0);
  if (lVar9 == in_stack_00000020) {
LAB_0d1f530a:
    if (*(char *)(unaff_R13 + 0x430) == '\x01') {
      func_0x048f6240(unaff_R13 + 0x3b0);
      *(undefined1 *)(unaff_R13 + 0x430) = 0;
    }
  }
  else {
    if ((ulong)*(uint *)(lVar9 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
    in_stack_00000028 = &stack0x00000040;
    lVar9 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar9 + 0x60) * 8))
                      (&stack0x00000028,lVar9 + 0x38);
    if (lVar9 == 0) goto LAB_0d1f530a;
    func_0x0d260870(&stack0x000000c0,in_stack_00000088);
    uVar5 = _bStack0000000000000128;
    if (*(char *)(unaff_R13 + 0x430) == '\0') {
      *(long *)(unaff_R13 + 0x3c0) = _uStack00000000000000d0;
      *(undefined8 *)(unaff_R13 + 0x3b0) = &UNK_0136f1f6;
      *(undefined8 *)(unaff_R13 + 0x3b8) = 9;
      _uStack00000000000000d0 = 0;
      *(undefined8 *)(unaff_R13 + 0x3d8) = in_stack_000000e8;
      *(ulong *)(unaff_R13 + 0x3c8) = _uStack00000000000000d8;
      *(undefined8 *)(unaff_R13 + 0x3d0) = auStack00000000000000dc._4_8_;
      _uStack00000000000000d8 = 0;
      in_stack_000000e8 = 0;
      *(undefined8 *)(unaff_R13 + 0x3f0) = in_stack_00000100;
      *(ulong *)(unaff_R13 + 0x3e0) = uStack00000000000000f0;
      *(undefined8 *)(unaff_R13 + 1000) = uStack00000000000000f8;
      uStack00000000000000f0 = 0;
      in_stack_00000100 = 0;
      *(undefined8 *)(unaff_R13 + 0x408) = in_stack_00000118;
      *(undefined8 *)(unaff_R13 + 0x3f8) = _bStack0000000000000108;
      *(undefined8 *)(unaff_R13 + 0x400) = uStack0000000000000110;
      *(undefined1 *)(unaff_R13 + 0x410) = in_stack_00000120;
      *(undefined8 *)(unaff_R13 + 0x428) = in_stack_00000138;
      *(undefined8 *)(unaff_R13 + 0x418) = _bStack0000000000000128;
      *(undefined8 *)(unaff_R13 + 0x420) = uStack0000000000000130;
      *(undefined1 *)(unaff_R13 + 0x430) = 1;
    }
    else {
      func_0x07fdb1b0((undefined8 *)(unaff_R13 + 0x3b0),&stack0x000000c0);
      if ((bStack0000000000000128 & 1) != 0) {
        func_0x0412a280(in_stack_00000138,uVar5 & 0xfffffffffffffffe);
      }
      if ((bStack0000000000000108 & 1) != 0) {
        func_0x0412a280(in_stack_00000118,uVar14 & 0xfffffffffffffffe);
      }
    }
    if ((uStack00000000000000f0 & 1) != 0) {
      func_0x0412a280(in_stack_00000100,uStack00000000000000f0 & 0xfffffffffffffffe);
    }
    if ((_uStack00000000000000d8 & 1) != 0) {
      func_0x0412a280(in_stack_000000e8,_uStack00000000000000d8 & 0xfffffffffffffffe);
    }
  }
  _bStack00000000000000c0 = &UNK_011afd99;
  lVar9 = func_0x0d6c97a0(unaff_RBP,&stack0x000000c0);
  if (lVar9 != in_stack_00000020) {
    if ((ulong)*(uint *)(lVar9 + 0x60) == 0xffffffff) {
LAB_0d1f56d4:
      func_0x04931450();
      func_0x04931450();
      func_0x04931450();
      func_0x04931450();
      func_0x04931450();
      uVar14 = func_0x04931450();
      uVar14 = func_0x04882e20(uVar14);
      uVar14 = func_0x04882e20(uVar14);
      uVar14 = func_0x04882e20(uVar14);
      uVar14 = func_0x04882e20(uVar14);
      if (((ulong)_bStack00000000000000c0 & 1) != 0) {
        func_0x0412a280(_uStack00000000000000d0,(ulong)_bStack00000000000000c0 & 0xfffffffffffffffe)
        ;
        func_0x048c3ac0(&stack0x00000048);
        uVar14 = func_0x0eee2d70(uVar14);
      }
      func_0x048c3ac0(&stack0x00000048);
      func_0x0eee2d70(uVar14);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    in_stack_00000028 = &stack0x00000040;
    lVar9 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar9 + 0x60) * 8))
                      (&stack0x00000028,lVar9 + 0x38);
    if (lVar9 != 0) {
      lVar9 = func_0x0d6c97a0(unaff_RBP,&stack0x000000c0);
      if ((lVar9 == in_stack_00000020) || (*(int *)(lVar9 + 0x60) != 1)) {
        bVar21 = false;
      }
      else {
        bVar21 = *(char *)(lVar9 + 0x40) != '\0';
      }
      *(bool *)(unaff_R13 + 0x4c2) = bVar21;
    }
  }
  uVar14 = in_stack_00000058._8_8_;
  in_stack_00000058 = (undefined1  [16])0x0;
  if ((long *)uVar14 != (long *)0x0) {
    LOCK();
    plVar12 = (long *)(uVar14 + 8);
    lVar9 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*(long *)uVar14 + 0x10))(uVar14);
      func_0x0412c2d0(uVar14);
      uVar14 = in_stack_00000058._8_8_;
      in_stack_00000068 = 0;
      if ((long *)in_stack_00000058._8_8_ != (long *)0x0) {
        in_stack_00000068 = 0;
        LOCK();
        plVar12 = (long *)(in_stack_00000058._8_8_ + 8);
        lVar9 = *plVar12;
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (lVar9 == 0) {
          (**(code **)(*(long *)in_stack_00000058._8_8_ + 0x10))(in_stack_00000058._8_8_);
          func_0x0412c2d0(uVar14);
        }
      }
    }
    else {
      in_stack_00000068 = 0;
    }
  }
  if (in_stack_00000050 == '\x01') {
    func_0x0eee02f0(in_stack_00000048);
  }
  return;
}


