/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1f3fc0
 * Label: string:Failed to parse jigsaw structure processor list '%s'.
 * Body:  [[0d1f3fc0, 0d1f568a] [0d1f56ad, 0d1f56ce] [0d1f56d4, 0d1f5716] [0d1f593f, 0d1f598c]]
 * Ghidra: FUN_0d1f3fc0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d1f3fc0(void)

{
  byte *pbVar1;
  byte bVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  byte *pbVar9;
  undefined1 (*pauVar10) [16];
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  undefined4 unaff_EBX;
  undefined8 unaff_RBP;
  byte *pbVar17;
  undefined *puVar18;
  undefined1 (*pauVar19) [16];
  long unaff_R13;
  bool bVar20;
  undefined1 uVar21;
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
  undefined1 auStack00000000000000c4 [12];
  undefined4 uStack00000000000000d0;
  byte bStack00000000000000d8;
  undefined1 auStack00000000000000dc [12];
  undefined8 in_stack_000000e8;
  byte bStack00000000000000f0;
  undefined8 uStack00000000000000f8;
  undefined8 in_stack_00000100;
  byte bStack0000000000000108;
  undefined8 uStack0000000000000110;
  undefined8 in_stack_00000118;
  undefined1 in_stack_00000120;
  byte bStack0000000000000128;
  undefined8 uStack0000000000000130;
  undefined8 in_stack_00000138;
  
  _bStack00000000000000c0 = unaff_EBX;
  auStack00000000000000c4._4_8_ = 0x12;
  lVar8 = func_0x0d6c97a0();
  if (lVar8 == in_stack_00000020) {
    lVar15 = 0;
  }
  else {
    lVar15 = 0;
    if (*(int *)(lVar8 + 0x60) == 8) {
      lVar15 = lVar8 + 0x38;
    }
  }
  pbVar9 = (byte *)(lVar15 + 8);
  if (lVar15 == 0) {
    pbVar9 = &UNK_01e79d90;
  }
  pbVar1 = (byte *)(unaff_R13 + 0x458);
  if (pbVar1 != pbVar9) {
    bVar2 = *pbVar9;
    if ((*pbVar1 & 1) == 0) {
      if ((bVar2 & 1) == 0) {
        *(undefined8 *)(unaff_R13 + 0x468) = *(undefined8 *)(pbVar9 + 0x10);
        uVar13 = *(undefined8 *)(pbVar9 + 8);
        *(undefined8 *)pbVar1 = *(undefined8 *)pbVar9;
        *(undefined8 *)(unaff_R13 + 0x460) = uVar13;
      }
      else {
        func_0x04885070(pbVar1,*(undefined8 *)(pbVar9 + 0x10),*(undefined8 *)(pbVar9 + 8));
      }
    }
    else {
      bVar20 = (bVar2 & 1) != 0;
      pbVar17 = pbVar9 + 1;
      if (bVar20) {
        pbVar17 = *(byte **)(pbVar9 + 0x10);
      }
      uVar16 = (ulong)(bVar2 >> 1);
      if (bVar20) {
        uVar16 = *(ulong *)(pbVar9 + 8);
      }
      func_0x04885120(pbVar1,pbVar17,uVar16);
    }
  }
  pauVar19 = (undefined1 (*) [16])(unaff_R13 + 0x470);
  if (pauVar19 != (undefined1 (*) [16])&UNK_01e79d90) {
    if (((*pauVar19)[0] & 1) == 0) {
      *pauVar19 = (undefined1  [16])0x0;
      *(undefined8 *)(unaff_R13 + 0x480) = 0;
    }
    else {
      func_0x04885120(pauVar19,&UNK_01e79d91,0);
    }
  }
  auStack00000000000000c4._4_8_ = 0x12;
  _bStack00000000000000c0 = &UNK_011a0b13;
  lVar8 = func_0x0d6c97a0();
  if (lVar8 != in_stack_00000020) {
    if ((ulong)*(uint *)(lVar8 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
    in_stack_00000028 = &stack0x00000040;
    lVar8 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar8 + 0x60) * 8))
                      (&stack0x00000028,lVar8 + 0x38);
    if (lVar8 != 0) {
      auStack00000000000000c4._4_8_ = 0x12;
      _bStack00000000000000c0 = &UNK_011a0b13;
      lVar8 = func_0x0d6c97a0();
      if (lVar8 == in_stack_00000020) {
        lVar15 = 0;
      }
      else {
        lVar15 = 0;
        if (*(int *)(lVar8 + 0x60) == 8) {
          lVar15 = lVar8 + 0x38;
        }
      }
      pauVar10 = (undefined1 (*) [16])(lVar15 + 8);
      if (lVar15 == 0) {
        pauVar10 = (undefined1 (*) [16])&UNK_01e79d90;
      }
      if (pauVar19 != pauVar10) {
        bVar2 = (*pauVar10)[0];
        if (((*pauVar19)[0] & 1) == 0) {
          if ((bVar2 & 1) == 0) {
            *(undefined8 *)(unaff_R13 + 0x480) = *(undefined8 *)pauVar10[1];
            uVar13 = *(undefined8 *)(*pauVar10 + 8);
            *(undefined8 *)*pauVar19 = *(undefined8 *)*pauVar10;
            *(undefined8 *)(unaff_R13 + 0x478) = uVar13;
          }
          else {
            func_0x04885070(pauVar19,*(undefined8 *)pauVar10[1],*(undefined8 *)(*pauVar10 + 8));
          }
        }
        else {
          bVar20 = (bVar2 & 1) != 0;
          puVar18 = *pauVar10 + 1;
          if (bVar20) {
            puVar18 = *(undefined **)pauVar10[1];
          }
          uVar16 = (ulong)(bVar2 >> 1);
          if (bVar20) {
            uVar16 = *(ulong *)(*pauVar10 + 8);
          }
          func_0x04885120(pauVar19,puVar18,uVar16);
        }
      }
    }
  }
  pauVar19 = (undefined1 (*) [16])(unaff_R13 + 0x488);
  if (pauVar19 != (undefined1 (*) [16])&UNK_01e79d90) {
    if (((*pauVar19)[0] & 1) == 0) {
      *pauVar19 = (undefined1  [16])0x0;
      *(undefined8 *)(unaff_R13 + 0x498) = 0;
    }
    else {
      func_0x04885120(pauVar19,&UNK_01e79d91,0);
    }
  }
  if ((*(byte *)(unaff_R13 + 0x470) & 1) == 0) {
    if (*(byte *)(unaff_R13 + 0x470) >> 1 != 0) goto LAB_0d1f421e;
  }
  else if (*(long *)(unaff_R13 + 0x478) != 0) {
LAB_0d1f421e:
    auStack00000000000000c4._4_8_ = 0x17;
    _bStack00000000000000c0 = &UNK_014dbedb;
    lVar8 = func_0x0d6c97a0();
    if (lVar8 != in_stack_00000020) {
      if ((ulong)*(uint *)(lVar8 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
      in_stack_00000028 = &stack0x00000040;
      lVar8 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar8 + 0x60) * 8))
                        (&stack0x00000028,lVar8 + 0x38);
      if (lVar8 != 0) {
        in_stack_00000028 = &UNK_014dbedb;
        in_stack_00000030 = 0x17;
        lVar8 = func_0x0d6c97a0();
        if (lVar8 == in_stack_00000020) {
          lVar15 = 0;
        }
        else {
          lVar15 = 0;
          if (*(int *)(lVar8 + 0x60) == 8) {
            lVar15 = lVar8 + 0x38;
          }
        }
        pauVar10 = (undefined1 (*) [16])(lVar15 + 8);
        if (lVar15 == 0) {
          pauVar10 = (undefined1 (*) [16])&UNK_01e79d90;
        }
        if (((*pauVar10)[0] & 1) == 0) {
          _uStack00000000000000d0 = *(undefined1 **)pauVar10[1];
          _bStack00000000000000c0 = *pauVar10;
        }
        else {
          func_0x0412e5e0(&stack0x000000c0,*(undefined8 *)pauVar10[1],*(undefined8 *)(*pauVar10 + 8)
                         );
        }
        puVar5 = _uStack00000000000000d0;
        bVar2 = bStack00000000000000c0;
        uVar13 = auStack00000000000000c4._4_8_;
        uVar16 = (ulong)(bStack00000000000000c0 >> 1);
        puVar4 = &stack0x000000c0 + 1;
        if ((bStack00000000000000c0 & 1) != 0) {
          uVar16 = auStack00000000000000c4._4_8_;
          puVar4 = _uStack00000000000000d0;
        }
        cVar6 = func_0x0eedb280(puVar4,uVar16);
        if ((pauVar19 != (undefined1 (*) [16])&stack0x000000c0) && (cVar6 != '\0')) {
          if (((*pauVar19)[0] & 1) == 0) {
            if ((bVar2 & 1) == 0) {
              *(undefined1 **)(unaff_R13 + 0x498) = _uStack00000000000000d0;
              *(undefined8 *)*pauVar19 = _bStack00000000000000c0;
              *(undefined8 *)(unaff_R13 + 0x490) = auStack00000000000000c4._4_8_;
            }
            else {
              func_0x04885070(pauVar19,puVar5,uVar13);
            }
          }
          else {
            func_0x04885120(pauVar19,puVar4,uVar16);
          }
        }
        unaff_R13 = in_stack_00000080;
        unaff_RBP = in_stack_00000070;
        if ((bStack00000000000000c0 & 1) != 0) {
          func_0x0412a280(_uStack00000000000000d0,_bStack00000000000000c0 & 0xfffffffffffffffe);
          unaff_RBP = in_stack_00000070;
        }
      }
    }
  }
  pauVar19 = (undefined1 (*) [16])(unaff_R13 + 0x4a0);
  if (pauVar19 != (undefined1 (*) [16])&UNK_01e79d90) {
    if (((*pauVar19)[0] & 1) == 0) {
      *pauVar19 = (undefined1  [16])0x0;
      *(undefined8 *)(unaff_R13 + 0x4b0) = 0;
    }
    else {
      func_0x04885120(pauVar19,&UNK_01e79d91,0);
    }
  }
  auStack00000000000000c4._4_8_ = 0x13;
  _bStack00000000000000c0 = &UNK_0148c027;
  lVar8 = func_0x0d6c97a0(unaff_RBP,&stack0x000000c0);
  if (lVar8 != in_stack_00000020) {
    if ((ulong)*(uint *)(lVar8 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
    in_stack_00000028 = &stack0x00000040;
    lVar8 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar8 + 0x60) * 8))
                      (&stack0x00000028,lVar8 + 0x38);
    if (lVar8 != 0) {
      in_stack_00000028 = &UNK_0148c027;
      in_stack_00000030 = 0x13;
      lVar8 = func_0x0d6c97a0(unaff_RBP,&stack0x00000028);
      if (lVar8 == in_stack_00000020) {
        lVar15 = 0;
      }
      else {
        lVar15 = 0;
        if (*(int *)(lVar8 + 0x60) == 8) {
          lVar15 = lVar8 + 0x38;
        }
      }
      pauVar10 = (undefined1 (*) [16])(lVar15 + 8);
      if (lVar15 == 0) {
        pauVar10 = (undefined1 (*) [16])&UNK_01e79d90;
      }
      if (((*pauVar10)[0] & 1) == 0) {
        _uStack00000000000000d0 = *(undefined1 **)pauVar10[1];
        _bStack00000000000000c0 = *pauVar10;
      }
      else {
        func_0x0412e5e0(&stack0x000000c0,*(undefined8 *)pauVar10[1],*(undefined8 *)(*pauVar10 + 8));
      }
      puVar5 = _uStack00000000000000d0;
      bVar2 = bStack00000000000000c0;
      uVar13 = auStack00000000000000c4._4_8_;
      uVar16 = (ulong)(bStack00000000000000c0 >> 1);
      puVar4 = &stack0x000000c0 + 1;
      if ((bStack00000000000000c0 & 1) != 0) {
        uVar16 = auStack00000000000000c4._4_8_;
        puVar4 = _uStack00000000000000d0;
      }
      cVar6 = func_0x0eedb280(puVar4,uVar16);
      if ((pauVar19 != (undefined1 (*) [16])&stack0x000000c0) && (cVar6 != '\0')) {
        if (((*pauVar19)[0] & 1) == 0) {
          if ((bVar2 & 1) == 0) {
            *(undefined1 **)(unaff_R13 + 0x4b0) = _uStack00000000000000d0;
            *(undefined8 *)*pauVar19 = _bStack00000000000000c0;
            *(undefined8 *)(unaff_R13 + 0x4a8) = auStack00000000000000c4._4_8_;
          }
          else {
            func_0x04885070(pauVar19,puVar5,uVar13);
          }
        }
        else {
          func_0x04885120(pauVar19,puVar4,uVar16);
        }
      }
      unaff_R13 = in_stack_00000080;
      unaff_RBP = in_stack_00000070;
      if ((bStack00000000000000c0 & 1) != 0) {
        func_0x0412a280(_uStack00000000000000d0,_bStack00000000000000c0 & 0xfffffffffffffffe);
        unaff_RBP = in_stack_00000070;
      }
    }
  }
  _bStack00000000000000c0 = _DAT_0f71d640;
  auStack00000000000000c4._4_8_ = _DAT_0f71d638;
  if ((DAT_0f71d630 & 1) == 0) {
    _bStack00000000000000c0 = 0xf71d631;
    auStack00000000000000c4._4_8_ = (ulong)(DAT_0f71d630 >> 1);
  }
  lVar8 = func_0x0d6c97a0(unaff_RBP,&stack0x000000c0);
  if ((lVar8 != in_stack_00000020) && (*(int *)(lVar8 + 0x60) == 10)) {
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar11 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar11 = (long)&UNK_0f47e0b0;
    pauVar19 = (undefined1 (*) [16])(plVar11 + 2);
    *(undefined1 (*) [16])(plVar11 + 2) = (undefined1  [16])0x0;
    plVar11[1] = (long)pauVar19;
    func_0x0d6bd5f0(plVar11,lVar8 + 0x38);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    unaff_R13 = in_stack_00000080;
    *puVar12 = &UNK_0f47e0b0;
    puVar12[1] = plVar11[1];
    lVar8 = plVar11[2];
    puVar12[2] = lVar8;
    lVar15 = plVar11[3];
    puVar12[3] = lVar15;
    if (lVar15 == 0) {
      puVar12[1] = puVar12 + 2;
    }
    else {
      *(undefined8 **)(lVar8 + 0x10) = puVar12 + 2;
      plVar11[1] = (long)pauVar19;
      *pauVar19 = (undefined1  [16])0x0;
    }
    _bStack00000000000000c0 = puVar12;
    _bStack00000000000000d8 = 8;
    in_stack_00000028 = (undefined *)0xf71d628;
    lVar8 = func_0x09be9cc0(in_stack_00000080 + 0x4f0,0xf71d628,&UNK_01563a4f,&stack0x00000028,
                            &stack0x00000040);
    if ((ulong)*(uint *)(lVar8 + 0x50) == 0xffffffff) {
      if (_bStack00000000000000d8 != 0xffffffff) goto LAB_0d1f4755;
    }
    else {
      if (_bStack00000000000000d8 == 0xffffffff) {
        (**(code **)(&UNK_0f45a8b0 + (ulong)*(uint *)(lVar8 + 0x50) * 8))(&stack0x00000028);
        *(undefined4 *)(lVar8 + 0x50) = 0xffffffff;
      }
      else {
LAB_0d1f4755:
        in_stack_00000028 = (undefined *)(lVar8 + 0x38);
        (**(code **)(&UNK_0f45a900 + (ulong)(uint)_bStack00000000000000d8 * 8))
                  (&stack0x00000028,(undefined *)(lVar8 + 0x38),&stack0x000000c0);
      }
      if ((ulong)(uint)_bStack00000000000000d8 != 0xffffffff) {
        (**(code **)(&UNK_0f45a8b0 + (ulong)(uint)_bStack00000000000000d8 * 8))
                  (&stack0x00000028,&stack0x000000c0);
      }
    }
    _bStack00000000000000d8 = 0xffffffff;
    (**(code **)(*plVar11 + 8))(plVar11);
  }
  _bStack00000000000000c0 = _DAT_0f71d640;
  auStack00000000000000c4._4_8_ = _DAT_0f71d638;
  if ((DAT_0f71d630 & 1) == 0) {
    _bStack00000000000000c0 = 0xf71d631;
    auStack00000000000000c4._4_8_ = (ulong)(DAT_0f71d630 >> 1);
  }
  lVar8 = func_0x0d6c97a0(unaff_RBP,&stack0x000000c0);
  if (lVar8 != in_stack_00000020) {
    if ((ulong)*(uint *)(lVar8 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
    in_stack_00000028 = &stack0x00000040;
    plVar11 = (long *)(**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar8 + 0x60) * 8))
                                (&stack0x00000028,lVar8 + 0x38);
    if ((plVar11 != (long *)0x0) && (cVar6 = (**(code **)(*plVar11 + 0x30))(plVar11), cVar6 == '\n')
       ) {
      auStack00000000000000c4._4_8_ = (ulong)(DAT_0f71d630 >> 1);
      _bStack00000000000000c0 = 0xf71d631;
      if ((DAT_0f71d630 & 1) != 0) {
        auStack00000000000000c4._4_8_ = _DAT_0f71d638;
        _bStack00000000000000c0 = _DAT_0f71d640;
      }
      lVar8 = func_0x0d6c97a0(unaff_RBP,&stack0x000000c0);
      if (lVar8 == in_stack_00000020) {
        lVar15 = 0;
      }
      else {
        lVar15 = 0;
        if (*(int *)(lVar8 + 0x60) == 10) {
          lVar15 = lVar8 + 0x38;
        }
      }
      plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (plVar11 == (long *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      *plVar11 = (long)&UNK_0f47e0b0;
      pauVar19 = (undefined1 (*) [16])(plVar11 + 2);
      *(undefined1 (*) [16])(plVar11 + 2) = (undefined1  [16])0x0;
      plVar11[1] = (long)pauVar19;
      func_0x0d6bd5f0(plVar11,lVar15);
      puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar12 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      *puVar12 = &UNK_0f47e0b0;
      puVar12[1] = plVar11[1];
      lVar8 = plVar11[2];
      puVar12[2] = lVar8;
      lVar15 = plVar11[3];
      puVar12[3] = lVar15;
      if (lVar15 == 0) {
        puVar12[1] = puVar12 + 2;
      }
      else {
        *(undefined8 **)(lVar8 + 0x10) = puVar12 + 2;
        plVar11[1] = (long)pauVar19;
        *pauVar19 = (undefined1  [16])0x0;
      }
      _bStack00000000000000c0 = puVar12;
      _bStack00000000000000d8 = 8;
      in_stack_00000028 = (undefined *)0xf71d628;
      lVar8 = func_0x09be9cc0(unaff_R13 + 0x4f0,0xf71d628,&UNK_01563a4f,&stack0x00000028,
                              &stack0x00000040);
      if ((ulong)*(uint *)(lVar8 + 0x50) == 0xffffffff) {
        if (_bStack00000000000000d8 != 0xffffffff) goto LAB_0d1f49c4;
      }
      else {
        if (_bStack00000000000000d8 == 0xffffffff) {
          (**(code **)(&UNK_0f45a8b0 + (ulong)*(uint *)(lVar8 + 0x50) * 8))(&stack0x00000028);
          *(undefined4 *)(lVar8 + 0x50) = 0xffffffff;
        }
        else {
LAB_0d1f49c4:
          in_stack_00000028 = (undefined *)(lVar8 + 0x38);
          (**(code **)(&UNK_0f45a900 + (ulong)(uint)_bStack00000000000000d8 * 8))
                    (&stack0x00000028,(undefined *)(lVar8 + 0x38),&stack0x000000c0);
        }
        if ((ulong)(uint)_bStack00000000000000d8 != 0xffffffff) {
          (**(code **)(&UNK_0f45a8b0 + (ulong)(uint)_bStack00000000000000d8 * 8))
                    (&stack0x00000028,&stack0x000000c0);
        }
      }
      _bStack00000000000000d8 = 0xffffffff;
      (**(code **)(*plVar11 + 8))(plVar11);
    }
  }
  auStack00000000000000c4._4_8_ = 0x13;
  _bStack00000000000000c0 = &UNK_013a379c;
  lVar8 = func_0x0d6c97a0(unaff_RBP,&stack0x000000c0);
  if (lVar8 == in_stack_00000020) goto LAB_0d1f4abe;
  if ((ulong)*(uint *)(lVar8 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
  in_stack_00000028 = &stack0x00000040;
  lVar8 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar8 + 0x60) * 8))
                    (&stack0x00000028,lVar8 + 0x38);
  if (lVar8 == 0) {
LAB_0d1f4abe:
    bVar20 = false;
  }
  else {
    auStack00000000000000c4._4_8_ = 0x13;
    _bStack00000000000000c0 = &UNK_013a379c;
    lVar8 = func_0x0d6c97a0(unaff_RBP,&stack0x000000c0);
    if ((lVar8 == in_stack_00000020) || (*(int *)(lVar8 + 0x60) != 1)) goto LAB_0d1f4abe;
    bVar20 = *(char *)(lVar8 + 0x40) != '\0';
  }
  *(bool *)(unaff_R13 + 0x4b8) = bVar20;
  auStack00000000000000c4._4_8_ = 0x10;
  _bStack00000000000000c0 = &UNK_014582d1;
  lVar8 = func_0x0d6c97a0(unaff_RBP,&stack0x000000c0);
  if (lVar8 == in_stack_00000020) goto LAB_0d1f4b69;
  if ((ulong)*(uint *)(lVar8 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
  in_stack_00000028 = &stack0x00000040;
  lVar8 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar8 + 0x60) * 8))
                    (&stack0x00000028,lVar8 + 0x38);
  if (lVar8 == 0) {
LAB_0d1f4b69:
    bVar20 = false;
  }
  else {
    auStack00000000000000c4._4_8_ = 0x10;
    _bStack00000000000000c0 = &UNK_014582d1;
    lVar8 = func_0x0d6c97a0(unaff_RBP,&stack0x000000c0);
    if ((lVar8 == in_stack_00000020) || (*(int *)(lVar8 + 0x60) != 1)) goto LAB_0d1f4b69;
    bVar20 = *(char *)(lVar8 + 0x40) != '\0';
  }
  *(bool *)(unaff_R13 + 0x439) = bVar20;
  func_0x06cfd9a0(&stack0x000000c0,0,0,0,0,0);
  *(undefined4 *)(unaff_R13 + 0x350) = uStack00000000000000d0;
  *(undefined8 *)(unaff_R13 + 0x340) = _bStack00000000000000c0;
  *(undefined8 *)(unaff_R13 + 0x348) = auStack00000000000000c4._4_8_;
  pbVar9 = (byte *)(unaff_R13 + 0x358);
  if ((*(byte *)(unaff_R13 + 0x358) & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(unaff_R13 + 0x368),
                    *(ulong *)(unaff_R13 + 0x358) & 0xfffffffffffffffe);
  }
  *(undefined8 *)(unaff_R13 + 0x368) = in_stack_000000e8;
  *(undefined8 *)pbVar9 = _bStack00000000000000d8;
  *(undefined8 *)(unaff_R13 + 0x360) = auStack00000000000000dc._4_8_;
  _bStack00000000000000c0 = &UNK_0123465e;
  auStack00000000000000c4._4_8_ = 0x15;
  lVar8 = func_0x0d6c97a0(unaff_RBP,&stack0x000000c0);
  if ((lVar8 != in_stack_00000020) && (*(int *)(lVar8 + 0x60) == 9)) {
    func_0x06cfe360(&stack0x000000c0,lVar8 + 0x38);
    *(undefined4 *)(unaff_R13 + 0x350) = uStack00000000000000d0;
    *(undefined8 *)(unaff_R13 + 0x340) = _bStack00000000000000c0;
    *(undefined8 *)(unaff_R13 + 0x348) = auStack00000000000000c4._4_8_;
    if ((*pbVar9 & 1) != 0) {
      func_0x0412a280(*(undefined8 *)(unaff_R13 + 0x368),
                      *(ulong *)(unaff_R13 + 0x358) & 0xfffffffffffffffe);
    }
    *(undefined8 *)(unaff_R13 + 0x368) = in_stack_000000e8;
    *(undefined8 *)pbVar9 = _bStack00000000000000d8;
    *(undefined8 *)(unaff_R13 + 0x360) = auStack00000000000000dc._4_8_;
  }
  auStack00000000000000c4._4_8_ = 0x11;
  _bStack00000000000000c0 = &UNK_014dbef3;
  lVar8 = func_0x0d6c97a0(unaff_RBP,&stack0x000000c0);
  if (lVar8 == in_stack_00000020) goto LAB_0d1f4d29;
  if ((ulong)*(uint *)(lVar8 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
  in_stack_00000028 = &stack0x00000040;
  lVar8 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar8 + 0x60) * 8))
                    (&stack0x00000028,lVar8 + 0x38);
  if (lVar8 == 0) {
LAB_0d1f4d29:
    bVar20 = false;
  }
  else {
    auStack00000000000000c4._4_8_ = 0x11;
    _bStack00000000000000c0 = &UNK_014dbef3;
    lVar8 = func_0x0d6c97a0(unaff_RBP,&stack0x000000c0);
    if ((lVar8 == in_stack_00000020) || (*(int *)(lVar8 + 0x60) != 1)) goto LAB_0d1f4d29;
    bVar20 = *(char *)(lVar8 + 0x40) != '\0';
  }
  *(bool *)(unaff_R13 + 0x4b9) = bVar20;
  auStack00000000000000c4._4_8_ = 0x11;
  _bStack00000000000000c0 = &UNK_01283198;
  lVar8 = func_0x0d6c97a0(unaff_RBP,&stack0x000000c0);
  if (lVar8 == in_stack_00000020) goto LAB_0d1f4dd4;
  if ((ulong)*(uint *)(lVar8 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
  in_stack_00000028 = &stack0x00000040;
  lVar8 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar8 + 0x60) * 8))
                    (&stack0x00000028,lVar8 + 0x38);
  if (lVar8 == 0) {
LAB_0d1f4dd4:
    bVar20 = false;
  }
  else {
    auStack00000000000000c4._4_8_ = 0x11;
    _bStack00000000000000c0 = &UNK_01283198;
    lVar8 = func_0x0d6c97a0(unaff_RBP,&stack0x000000c0);
    if ((lVar8 == in_stack_00000020) || (*(int *)(lVar8 + 0x60) != 1)) goto LAB_0d1f4dd4;
    bVar20 = *(char *)(lVar8 + 0x40) != '\0';
  }
  *(bool *)(unaff_R13 + 0x4ba) = bVar20;
  auStack00000000000000c4._4_8_ = 0x13;
  _bStack00000000000000c0 = &UNK_012cf174;
  lVar8 = func_0x0d6c97a0(unaff_RBP,&stack0x000000c0);
  if (lVar8 == in_stack_00000020) goto LAB_0d1f4e7f;
  if ((ulong)*(uint *)(lVar8 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
  in_stack_00000028 = &stack0x00000040;
  lVar8 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar8 + 0x60) * 8))
                    (&stack0x00000028,lVar8 + 0x38);
  if (lVar8 == 0) {
LAB_0d1f4e7f:
    bVar20 = false;
  }
  else {
    auStack00000000000000c4._4_8_ = 0x13;
    _bStack00000000000000c0 = &UNK_012cf174;
    lVar8 = func_0x0d6c97a0(unaff_RBP,&stack0x000000c0);
    if ((lVar8 == in_stack_00000020) || (*(int *)(lVar8 + 0x60) != 1)) goto LAB_0d1f4e7f;
    bVar20 = *(char *)(lVar8 + 0x40) != '\0';
  }
  *(bool *)(unaff_R13 + 0x4bb) = bVar20;
  auStack00000000000000c4._4_8_ = 0x14;
  _bStack00000000000000c0 = &UNK_011e49e6;
  lVar8 = func_0x0d6c97a0(unaff_RBP,&stack0x000000c0);
  if (lVar8 == in_stack_00000020) {
LAB_0d1f4f26:
    *(undefined4 *)(unaff_R13 + 0x328) = 4;
  }
  else {
    if ((ulong)*(uint *)(lVar8 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
    in_stack_00000028 = &stack0x00000040;
    lVar8 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar8 + 0x60) * 8))
                      (&stack0x00000028,lVar8 + 0x38);
    if (lVar8 == 0) goto LAB_0d1f4f26;
    auStack00000000000000c4._4_8_ = 0x14;
    _bStack00000000000000c0 = &UNK_011e49e6;
    lVar8 = func_0x0d6c97a0(unaff_RBP,&stack0x000000c0);
    if ((lVar8 == in_stack_00000020) || (*(int *)(lVar8 + 0x60) != 3)) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(lVar8 + 0x40);
    }
    iVar14 = 4;
    if (4 < iVar7) {
      iVar14 = iVar7;
    }
    iVar7 = 0xc;
    if (iVar14 < 0xc) {
      iVar7 = iVar14;
    }
    *(int *)(unaff_R13 + 0x328) = iVar7;
  }
  auStack00000000000000c4._4_8_ = 0x12;
  _bStack00000000000000c0 = &UNK_012831aa;
  lVar8 = func_0x0d6c97a0(unaff_RBP,&stack0x000000c0);
  if (lVar8 == in_stack_00000020) goto LAB_0d1f4ff4;
  if ((ulong)*(uint *)(lVar8 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
  in_stack_00000028 = &stack0x00000040;
  lVar8 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar8 + 0x60) * 8))
                    (&stack0x00000028,lVar8 + 0x38);
  if (lVar8 == 0) {
LAB_0d1f4ff4:
    bVar20 = false;
  }
  else {
    auStack00000000000000c4._4_8_ = 0x12;
    _bStack00000000000000c0 = &UNK_012831aa;
    lVar8 = func_0x0d6c97a0(unaff_RBP,&stack0x000000c0);
    if ((lVar8 == in_stack_00000020) || (*(int *)(lVar8 + 0x60) != 1)) goto LAB_0d1f4ff4;
    bVar20 = *(char *)(lVar8 + 0x40) != '\0';
  }
  *(bool *)(unaff_R13 + 0x4bc) = bVar20;
  auStack00000000000000c4._4_8_ = 0x10;
  _bStack00000000000000c0 = &UNK_0147113e;
  lVar8 = func_0x0d6c97a0(unaff_RBP,&stack0x000000c0);
  if (lVar8 == in_stack_00000020) goto LAB_0d1f509f;
  if ((ulong)*(uint *)(lVar8 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
  in_stack_00000028 = &stack0x00000040;
  lVar8 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar8 + 0x60) * 8))
                    (&stack0x00000028,lVar8 + 0x38);
  if (lVar8 == 0) {
LAB_0d1f509f:
    bVar20 = false;
  }
  else {
    auStack00000000000000c4._4_8_ = 0x10;
    _bStack00000000000000c0 = &UNK_0147113e;
    lVar8 = func_0x0d6c97a0(unaff_RBP,&stack0x000000c0);
    if ((lVar8 == in_stack_00000020) || (*(int *)(lVar8 + 0x60) != 1)) goto LAB_0d1f509f;
    bVar20 = *(char *)(lVar8 + 0x40) != '\0';
  }
  *(bool *)(unaff_R13 + 0x4be) = bVar20;
  auStack00000000000000c4._4_8_ = 0x1e;
  _bStack00000000000000c0 = &UNK_014248d1;
  lVar8 = func_0x0d6c97a0(unaff_RBP,&stack0x000000c0);
  if (lVar8 == in_stack_00000020) {
LAB_0d1f514a:
    uVar21 = *(undefined1 *)(unaff_R13 + 0x18);
  }
  else {
    if ((ulong)*(uint *)(lVar8 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
    in_stack_00000028 = &stack0x00000040;
    lVar8 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar8 + 0x60) * 8))
                      (&stack0x00000028,lVar8 + 0x38);
    if (lVar8 == 0) goto LAB_0d1f514a;
    auStack00000000000000c4._4_8_ = 0x1e;
    _bStack00000000000000c0 = &UNK_014248d1;
    lVar8 = func_0x0d6c97a0(unaff_RBP,&stack0x000000c0);
    if ((lVar8 == in_stack_00000020) || (*(int *)(lVar8 + 0x60) != 1)) {
      uVar21 = 0;
    }
    else {
      uVar21 = *(char *)(lVar8 + 0x40) != '\0';
    }
  }
  *(undefined1 *)(unaff_R13 + 0x4bd) = uVar21;
  auStack00000000000000c4._4_8_ = 0xd;
  _bStack00000000000000c0 = &UNK_01269312;
  lVar8 = func_0x0d6c97a0(unaff_RBP,&stack0x000000c0);
  if (lVar8 != in_stack_00000020) {
    if ((ulong)*(uint *)(lVar8 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
    in_stack_00000028 = &stack0x00000040;
    lVar8 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar8 + 0x60) * 8))
                      (&stack0x00000028,lVar8 + 0x38);
    if (lVar8 != 0) {
      auStack00000000000000c4._4_8_ = 0xd;
      _bStack00000000000000c0 = &UNK_01269312;
      lVar8 = func_0x0d6c97a0(unaff_RBP,&stack0x000000c0);
      if (lVar8 == in_stack_00000020) {
        lVar15 = 0;
      }
      else {
        lVar15 = 0;
        if (*(int *)(lVar8 + 0x60) == 8) {
          lVar15 = lVar8 + 0x38;
        }
      }
      puVar18 = (undefined *)(lVar15 + 8);
      if (lVar15 == 0) {
        puVar18 = &UNK_01e79d90;
      }
      func_0x0d20a940(unaff_R13,puVar18);
    }
  }
  auStack00000000000000c4._4_8_ = 9;
  _bStack00000000000000c0 = &UNK_0136f1f6;
  lVar8 = func_0x0d6c97a0(unaff_RBP,&stack0x000000c0);
  if (lVar8 == in_stack_00000020) {
LAB_0d1f530a:
    if (*(char *)(unaff_R13 + 0x430) == '\x01') {
      func_0x048f6240(unaff_R13 + 0x3b0);
      *(undefined1 *)(unaff_R13 + 0x430) = 0;
    }
  }
  else {
    if ((ulong)*(uint *)(lVar8 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
    in_stack_00000028 = &stack0x00000040;
    lVar8 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar8 + 0x60) * 8))
                      (&stack0x00000028,lVar8 + 0x38);
    if (lVar8 == 0) goto LAB_0d1f530a;
    func_0x0d260870(&stack0x000000c0,in_stack_00000088);
    if (*(char *)(unaff_R13 + 0x430) == '\0') {
      *(undefined1 **)(unaff_R13 + 0x3c0) = _uStack00000000000000d0;
      *(undefined8 *)(unaff_R13 + 0x3b0) = _bStack00000000000000c0;
      *(undefined8 *)(unaff_R13 + 0x3b8) = auStack00000000000000c4._4_8_;
      _bStack00000000000000c0 = (undefined1  [16])0x0;
      _uStack00000000000000d0 = (undefined1 *)0x0;
      *(undefined8 *)(unaff_R13 + 0x3d8) = in_stack_000000e8;
      *(undefined8 *)(unaff_R13 + 0x3c8) = _bStack00000000000000d8;
      *(undefined8 *)(unaff_R13 + 0x3d0) = auStack00000000000000dc._4_8_;
      _bStack00000000000000d8 = (undefined1  [16])0x0;
      in_stack_000000e8 = 0;
      *(undefined8 *)(unaff_R13 + 0x3f0) = in_stack_00000100;
      *(undefined8 *)(unaff_R13 + 0x3e0) = _bStack00000000000000f0;
      *(undefined8 *)(unaff_R13 + 1000) = uStack00000000000000f8;
      _bStack00000000000000f0 = (undefined1  [16])0x0;
      in_stack_00000100 = 0;
      *(undefined8 *)(unaff_R13 + 0x408) = in_stack_00000118;
      *(undefined8 *)(unaff_R13 + 0x3f8) = _bStack0000000000000108;
      *(undefined8 *)(unaff_R13 + 0x400) = uStack0000000000000110;
      _bStack0000000000000108 = (undefined1  [16])0x0;
      in_stack_00000118 = 0;
      *(undefined1 *)(unaff_R13 + 0x410) = in_stack_00000120;
      *(undefined8 *)(unaff_R13 + 0x428) = in_stack_00000138;
      *(undefined8 *)(unaff_R13 + 0x418) = _bStack0000000000000128;
      *(undefined8 *)(unaff_R13 + 0x420) = uStack0000000000000130;
      _bStack0000000000000128 = (undefined1  [16])0x0;
      in_stack_00000138 = 0;
      *(undefined1 *)(unaff_R13 + 0x430) = 1;
LAB_0d1f52db:
      if ((bStack00000000000000f0 & 1) == 0) goto LAB_0d1f52e9;
LAB_0d1f5481:
      func_0x0412a280(in_stack_00000100,_bStack00000000000000f0 & 0xfffffffffffffffe);
      if ((bStack00000000000000d8 & 1) != 0) goto LAB_0d1f54a8;
LAB_0d1f52f7:
    }
    else {
      func_0x07fdb1b0((undefined8 *)(unaff_R13 + 0x3b0),&stack0x000000c0);
      if ((bStack0000000000000128 & 1) == 0) {
      }
      else {
        func_0x0412a280(in_stack_00000138,_bStack0000000000000128 & 0xfffffffffffffffe);
      }
      if ((bStack0000000000000108 & 1) == 0) goto LAB_0d1f52db;
      func_0x0412a280(in_stack_00000118,_bStack0000000000000108 & 0xfffffffffffffffe);
      if ((bStack00000000000000f0 & 1) != 0) goto LAB_0d1f5481;
LAB_0d1f52e9:
      if ((bStack00000000000000d8 & 1) == 0) goto LAB_0d1f52f7;
LAB_0d1f54a8:
      func_0x0412a280(in_stack_000000e8,_bStack00000000000000d8 & 0xfffffffffffffffe);
    }
    if ((bStack00000000000000c0 & 1) != 0) {
      func_0x0412a280(_uStack00000000000000d0,_bStack00000000000000c0 & 0xfffffffffffffffe);
    }
  }
  auStack00000000000000c4._4_8_ = 0x1c;
  _bStack00000000000000c0 = &UNK_011afd99;
  lVar8 = func_0x0d6c97a0(unaff_RBP,&stack0x000000c0);
  if (lVar8 != in_stack_00000020) {
    if ((ulong)*(uint *)(lVar8 + 0x60) == 0xffffffff) {
LAB_0d1f56d4:
      func_0x04931450();
      func_0x04931450();
      func_0x04931450();
      func_0x04931450();
      func_0x04931450();
      uVar13 = func_0x04931450();
      uVar13 = func_0x04882e20(uVar13);
      uVar13 = func_0x04882e20(uVar13);
      uVar13 = func_0x04882e20(uVar13);
      uVar13 = func_0x04882e20(uVar13);
      if ((bStack00000000000000c0 & 1) != 0) {
        func_0x0412a280(_uStack00000000000000d0,_bStack00000000000000c0 & 0xfffffffffffffffe);
        func_0x048c3ac0(&stack0x00000048);
        uVar13 = func_0x0eee2d70(uVar13);
      }
      func_0x048c3ac0(&stack0x00000048);
      func_0x0eee2d70(uVar13);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    in_stack_00000028 = &stack0x00000040;
    lVar8 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar8 + 0x60) * 8))
                      (&stack0x00000028,lVar8 + 0x38);
    if (lVar8 != 0) {
      auStack00000000000000c4._4_8_ = 0x1c;
      _bStack00000000000000c0 = &UNK_011afd99;
      lVar8 = func_0x0d6c97a0(unaff_RBP,&stack0x000000c0);
      if ((lVar8 == in_stack_00000020) || (*(int *)(lVar8 + 0x60) != 1)) {
        bVar20 = false;
      }
      else {
        bVar20 = *(char *)(lVar8 + 0x40) != '\0';
      }
      *(bool *)(unaff_R13 + 0x4c2) = bVar20;
    }
  }
  uVar13 = in_stack_00000058._8_8_;
  in_stack_00000058 = (undefined1  [16])0x0;
  if ((long *)uVar13 != (long *)0x0) {
    LOCK();
    plVar11 = (long *)(uVar13 + 8);
    lVar8 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*(long *)uVar13 + 0x10))(uVar13);
      func_0x0412c2d0(uVar13);
      uVar13 = in_stack_00000058._8_8_;
      in_stack_00000068 = 0;
      if ((long *)in_stack_00000058._8_8_ != (long *)0x0) {
        in_stack_00000068 = 0;
        LOCK();
        plVar11 = (long *)(in_stack_00000058._8_8_ + 8);
        lVar8 = *plVar11;
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (lVar8 == 0) {
          (**(code **)(*(long *)in_stack_00000058._8_8_ + 0x10))(in_stack_00000058._8_8_);
          func_0x0412c2d0(uVar13);
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


