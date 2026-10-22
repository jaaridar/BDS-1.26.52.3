/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4f80060 (ELF vaddr 0x4e80060)
 * Label: caller-of-seed
 * Body:  [[04f80060, 04f801a2] [04f801b0, 04f80290] [04f802a0, 04f802da] [04f802e0, 04f8082d] [04f80830, 04f80900] [04f80910, 04f8094c] [04f80950, 04f80b1a] [04f80b20, 04f80c8e] [04f80c9c, 04f80cf1] [04f80cf5, 04f80d33] [04f80dd4, 04f80e17]]
 * Ghidra: FUN_04f80060
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_04f80060(long param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  long *plVar5;
  char cVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uVar16;
  short sVar17;
  ulong uVar18;
  int iVar19;
  undefined4 uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  long *plVar25;
  ulong uVar26;
  int iVar27;
  int iVar28;
  long lVar29;
  long lVar30;
  bool bVar31;
  float fVar32;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_128;
  long *plStack_120;
  long lStack_118;
  undefined8 uStack_110;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  undefined8 uStack_f8;
  ulong uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  int *piStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  
  piStack_50 = (int *)(param_1 + 0xf0);
  uStack_48 = param_3;
  uStack_40 = param_4;
  lVar7 = (**(code **)(*param_2 + 0x138))(param_2);
  if (lVar7 == 0) {
    sVar17 = *(short *)((long)param_2 + 0x42);
  }
  else {
    sVar17 = *(short *)(*(long *)(lVar7 + 0x30) + 0xa8) +
             *(short *)(lVar7 + 0xbd0 +
                       (ulong)((*(uint *)(param_1 + 0xf8) & 0xf) << 4 |
                              *(uint *)(param_1 + 0xf0) & 0xf) * 2);
  }
  iVar21 = (int)sVar17;
  *(int *)(param_1 + 0xf4) = iVar21;
  iStack_104 = *(int *)(*(long *)(param_1 + 0x38) + 0x28);
  iVar2 = *(int *)(*(long *)(param_1 + 0x38) + 0x30);
  cVar6 = *(char *)(param_1 + 0x139);
  if (cVar6 == '\x03') {
    iStack_fc = 1 - iStack_104;
    iStack_104 = iVar2 + -1;
  }
  else if (cVar6 == '\x02') {
    iStack_fc = 1 - iVar2;
    iStack_104 = 1 - iStack_104;
  }
  else {
    iStack_104 = iStack_104 + -1;
    iStack_fc = iVar2 + -1;
    if (cVar6 == '\x01') {
      iStack_fc = iStack_104;
      iStack_104 = 1 - iVar2;
    }
  }
  iVar2 = *(int *)(param_1 + 0xf0);
  iVar27 = *(int *)(param_1 + 0xf8);
  iStack_104 = iStack_104 + iVar2;
  iStack_fc = iStack_fc + iVar27;
  iVar22 = iVar2;
  if (iStack_104 < iVar2) {
    iVar22 = iStack_104;
  }
  iVar4 = iVar27;
  if (iStack_fc < iVar27) {
    iVar4 = iStack_fc;
  }
  if (iVar2 <= iStack_104) {
    iVar2 = iStack_104;
  }
  if (iStack_fc < iVar27) {
    iStack_fc = iVar27;
  }
  iStack_100 = iVar21 + -3;
  iVar28 = 0;
  iVar27 = 0x200;
  bVar31 = false;
  iVar23 = iVar21;
  lStack_128 = param_1;
  iVar19 = iVar4;
  do {
    iVar24 = *(int *)(lStack_128 + 0xf4) + -1;
    uStack_f8 = CONCAT44(iVar24,iVar22);
    uStack_f0 = CONCAT44(uStack_f0._4_4_,iVar19);
    for (; ((lVar7 = (**(code **)(*param_2 + 0x10))(param_2,&uStack_f8),
            *(long *)(*(long *)(lVar7 + 0x68) + 200) == _DAT_0f6eaec0 ||
            (lVar7 = (**(code **)(*param_2 + 0x10))(param_2,&uStack_f8),
            **(char **)(*(long *)(lVar7 + 0x68) + 0x20) == '\x05')) &&
           (sVar17 = (**(code **)(*param_2 + 0x110))(param_2), sVar17 + 1 < iVar24));
        iVar24 = iVar24 + -1) {
      uStack_f8 = CONCAT44(uStack_f8._4_4_ + -1,(undefined4)uStack_f8);
    }
    lVar7 = lStack_128;
    if (iVar24 <= iVar27) {
      iVar27 = iVar24;
    }
    if (iVar19 < iStack_fc) {
      iVar19 = iVar19 + 1;
    }
    else if (iVar23 < iVar21) {
      iVar23 = iVar23 + 1;
      iVar19 = iVar4;
    }
    else if (iVar22 < iVar2) {
      iVar22 = iVar22 + 1;
      iVar23 = iVar21;
      iVar19 = iVar4;
    }
    else {
      bVar31 = true;
    }
    iVar28 = iVar28 + (uint)(iVar24 < iStack_100);
  } while (!bVar31 || (iVar19 != iStack_fc || (iVar23 != iVar21 || iVar22 != iVar2)));
  if (iVar27 - iVar21 < -3) {
    iVar2 = *piStack_50;
    iVar22 = iStack_104 - iVar2;
    if (iStack_104 < iVar2) {
      iVar22 = iVar2 - iStack_104;
    }
    if (iVar22 + -2 < iVar28) {
      iVar21 = iVar27 + 1;
    }
  }
  *(int *)(lStack_128 + 0xf4) = iVar21 + -1;
  plVar8 = (long *)(**(code **)(*param_2 + 0x150))(param_2);
  lVar9 = (**(code **)(*plVar8 + 0x568))(plVar8);
  lVar30 = lVar9 + 0x50;
  lVar15 = lVar30;
  if (((*(char *)(lVar9 + 0x77) == '\0') &&
      ((lVar29 = lVar9 + 0x70, *(char *)(lVar9 + 0x68) != '\0' ||
       (lVar15 = lVar29, (*(byte *)(lVar9 + 0x56) & 1) != 0)))) &&
     (cVar6 = func_0x04fa7a10(lVar29,lVar30), lVar15 = lVar30, cVar6 != '\0')) {
    lVar15 = lVar29;
  }
  lVar30 = 0xf72b850;
  if (((*(byte *)(lVar15 + 6) | *(byte *)(lVar15 + 0x18)) & 1) != 0) {
    lVar30 = lVar15;
  }
  if (((DAT_0f5a2978 == '\0') && (*(char *)(lVar30 + 0x18) == '\0')) &&
     (((DAT_0f5a2966 & 1) == 0 ||
      ((*(char *)(lVar30 + 7) != '\0' || (cVar6 = func_0x04fa7a10(lVar30,0xf5a2960), cVar6 == '\0'))
      )))) {
    lStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    if ((DAT_0f714c98 & 1) == 0) {
      uStack_e0 = _DAT_0f714ca8;
      uStack_f0 = CONCAT71(uRam000000000f714c99,DAT_0f714c98);
      lStack_e8 = _DAT_0f714ca0;
    }
    else {
      func_0x04885070(&uStack_f0,_DAT_0f714ca8,_DAT_0f714ca0);
    }
    uStack_f8 = _DAT_0f714c90;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    if ((DAT_0f714a48 & 1) == 0) {
      uStack_b8 = _DAT_0f714a58;
      uStack_c8 = CONCAT71(uRam000000000f714a49,DAT_0f714a48);
      uStack_c0 = _DAT_0f714a50;
    }
    else {
      func_0x04885070(&uStack_c8,_DAT_0f714a58,_DAT_0f714a50);
    }
    uStack_d0 = _DAT_0f714a40;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    if ((DAT_0f714ce8 & 1) == 0) {
      uStack_90 = _DAT_0f714cf8;
      uStack_a0 = CONCAT71(uRam000000000f714ce9,DAT_0f714ce8);
      uStack_98 = _DAT_0f714cf0;
    }
    else {
      func_0x04885070(&uStack_a0,_DAT_0f714cf8,_DAT_0f714cf0);
    }
    uStack_a8 = _DAT_0f714ce0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    if ((DAT_0f714a70 & 1) == 0) {
      uStack_68 = _DAT_0f714a80;
      uStack_78 = CONCAT71(uRam000000000f714a71,DAT_0f714a70);
      uStack_70 = _DAT_0f714a78;
    }
    else {
      func_0x04885070(&uStack_78,_DAT_0f714a80,_DAT_0f714a78);
    }
    uStack_80 = _DAT_0f714a68;
    lStack_118 = 0;
    uStack_110 = 0;
    plStack_120 = &lStack_118;
    func_0x050aea30(&plStack_120,&lStack_118,&uStack_f8);
    func_0x050aea30(&plStack_120,&lStack_118,&uStack_a8,&uStack_a8);
    if ((uStack_78 & 1) != 0) {
      func_0x0412a280(uStack_68,uStack_78 & 0xfffffffffffffffe);
    }
    if ((uStack_a0 & 1) != 0) {
      func_0x0412a280(uStack_90,uStack_a0 & 0xfffffffffffffffe);
    }
    if ((uStack_c8 & 1) != 0) {
      func_0x0412a280(uStack_b8,uStack_c8 & 0xfffffffffffffffe);
    }
    if ((uStack_f0 & 1) != 0) {
      func_0x0412a280(uStack_e0,uStack_f0 & 0xfffffffffffffffe);
    }
    lStack_148 = 0;
    lStack_140 = 0;
    lStack_138 = 0;
    if (*(int *)(lVar7 + 0x130) == 0) {
      lStack_140 = func_0x04fa4bf0(&lStack_148,&DAT_0f714ce0);
      uVar20 = 2;
    }
    else {
      lStack_140 = func_0x04fa4bf0(&lStack_148,&DAT_0f714c90);
      uVar20 = 3;
    }
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10[2] = 0;
    uStack_f8 = 0;
    lVar30 = *(long *)(lVar7 + 0x148);
    *(undefined8 **)(lVar7 + 0x148) = puVar10;
    if (lVar30 != 0) {
      func_0x050ae960((long *)(lVar7 + 0x148));
      lVar30 = uStack_f8;
      uStack_f8 = 0;
      if (lVar30 != 0) {
        func_0x050ae960(&uStack_f8);
      }
    }
    plVar8 = *(long **)(lVar7 + 0x148);
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar11 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uStack_f8 = 0;
    uStack_f0 = 0;
    lStack_e8 = 0;
    func_0x050af1d0(&uStack_f8,lStack_148,lStack_140,
                    (lStack_140 - lStack_148 >> 3) * -0x3333333333333333);
    *plVar11 = (long)&UNK_0f460810;
    plVar11[1] = 0;
    plVar11[2] = 0;
    plVar11[3] = 0;
    func_0x050af1d0(plVar11 + 1,uStack_f8,uStack_f0,
                    ((long)(uStack_f0 - uStack_f8) >> 3) * -0x3333333333333333);
    uVar26 = uStack_f8;
    uVar1 = uStack_f0;
    if (uStack_f8 != 0) {
      for (; uVar26 != uVar1; uVar1 = uVar1 - 0x28) {
        if ((*(byte *)(uVar1 - 0x20) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(uVar1 - 0x10),
                          *(ulong *)(uVar1 - 0x20) & 0xfffffffffffffffe);
        }
      }
      uStack_f0 = uVar26;
      func_0x0412a280(uStack_f8,lStack_e8 - uStack_f8);
    }
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar12 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar12 = (long)&UNK_0f460720;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x80,0);
    }
    *puVar10 = &UNK_0f4608b0;
    *(undefined4 *)(puVar10 + 1) = 5;
    puVar10[3] = 0;
    puVar10[4] = 0;
    puVar10[2] = puVar10 + 3;
    if (plStack_120 != &lStack_118) {
      plVar13 = plStack_120;
      do {
        func_0x050aea30(puVar10 + 2,puVar10 + 3,plVar13 + 4);
        plVar5 = (long *)plVar13[1];
        plVar25 = plVar13;
        if ((long *)plVar13[1] == (long *)0x0) {
          do {
            plVar13 = (long *)plVar25[2];
            bVar31 = plVar25 != (long *)*plVar13;
            plVar25 = plVar13;
          } while (bVar31);
        }
        else {
          do {
            plVar13 = plVar5;
            plVar5 = (long *)*plVar13;
          } while ((long *)*plVar13 != (long *)0x0);
        }
      } while (plVar13 != &lStack_118);
    }
    puVar10[0xb] = 0;
    puVar10[0xc] = 0;
    puVar10[9] = 0;
    puVar10[10] = 0;
    puVar10[7] = 0;
    puVar10[8] = 0;
    puVar10[5] = 0;
    puVar10[6] = 0;
    *puVar10 = &UNK_0f460540;
    func_0x0cf7b960(puVar10 + 0xd,uVar20);
    puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar14 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *puVar14 = plVar11;
    puVar14[1] = plVar12;
    puVar14[2] = puVar10;
    puVar14[3] = 0;
    puVar10 = (undefined8 *)plVar8[1];
    puStack_38 = puVar14;
    if (puVar10 < (undefined8 *)plVar8[2]) {
      *puVar10 = puVar14;
      puVar10 = puVar10 + 1;
    }
    else {
      lVar7 = *plVar8;
      lVar30 = (long)puVar10 - lVar7;
      uVar1 = (lVar30 >> 3) + 1;
      if (uVar1 >> 0x3d != 0) {
        func_0x04fa4ea0();
LAB_04f80c39:
        uVar16 = func_0x04882eb0();
        if ((uStack_78 & 1) != 0) goto LAB_04f80c6a;
        while ((uStack_a0 & 1) == 0) {
          func_0x04f80e20(&uStack_f8);
          func_0x0eee2d70(uVar16);
LAB_04f80c6a:
          func_0x0412a280(uStack_68,uStack_78 & 0xfffffffffffffffe);
        }
        func_0x0412a280(uStack_90,uStack_a0 & 0xfffffffffffffffe);
        func_0x04f80e20(&uStack_f8);
        uVar16 = func_0x0eee2d70(uVar16);
        if ((uStack_c8 & 1) != 0) {
          func_0x0412a280(uStack_b8,uStack_c8 & 0xfffffffffffffffe);
        }
        if ((uStack_f0 & 1) != 0) {
          func_0x0412a280(uStack_e0,uStack_f0 & 0xfffffffffffffffe);
          uVar16 = func_0x0eee2d70(uVar16);
          func_0x0d344520(lVar30);
          func_0x0412a280(lVar30,0x80);
          (**(code **)(*plVar12 + 8))();
          (**(code **)(*plVar11 + 8))();
          func_0x04aa5c60(&lStack_148);
          func_0x050af160(&plStack_120,lStack_118);
        }
        func_0x0eee2d70(uVar16);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar18 = plVar8[2] - lVar7;
      uVar26 = (long)uVar18 >> 2;
      if ((ulong)((long)uVar18 >> 2) <= uVar1) {
        uVar26 = uVar1;
      }
      if (0x7ffffffffffffff7 < uVar18) {
        uVar26 = 0x1fffffffffffffff;
      }
      if (0x1fffffffffffffff < uVar26) goto LAB_04f80c39;
      lVar15 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar26 * 8);
      if (lVar15 == 0) {
        func_0x0eec74c0(uVar26 * 8,0);
      }
      *(undefined8 **)(lVar15 + lVar30) = puVar14;
      puVar10 = (undefined8 *)(lVar30 + lVar15 + 8);
      lVar9 = lVar30 + lVar15 + (lVar30 >> 3) * -8;
      func_0x0eee2f00(lVar9,lVar7,lVar30);
      *plVar8 = lVar9;
      plVar8[1] = (long)puVar10;
      plVar8[2] = uVar26 * 8 + lVar15;
      if (lVar7 != 0) {
        func_0x0412a280(lVar7,uVar18);
      }
    }
    lVar7 = lStack_128;
    lVar15 = lStack_148;
    plVar8[1] = (long)puVar10;
    *(undefined8 *)(lStack_128 + 0xb0) = *(undefined8 *)(lStack_128 + 0x148);
    lVar30 = lStack_140;
    if (lStack_148 != 0) {
      for (; lVar15 != lVar30; lVar30 = lVar30 + -0x28) {
        if ((*(byte *)(lVar30 + -0x20) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lVar30 + -0x10),
                          *(ulong *)(lVar30 + -0x20) & 0xfffffffffffffffe);
        }
      }
      lStack_140 = lVar15;
      func_0x0412a280(lStack_148,lStack_138 - lStack_148);
    }
    func_0x050af160(&plStack_120,lStack_118);
  }
  fVar32 = *(float *)(lVar7 + 0x134);
  bVar31 = _DAT_011983f0 < fVar32;
  if (fVar32 <= 0.0) {
    fVar32 = 0.0;
  }
  *(uint *)(lVar7 + 0x40) = -(uint)bVar31 & (uint)_DAT_011983f0 | ~-(uint)bVar31 & (uint)fVar32;
  *(undefined1 *)(lVar7 + 0x4d) = 1;
  func_0x0d37f3a0(lVar7,param_2,uStack_48,uStack_40);
  return;
}


