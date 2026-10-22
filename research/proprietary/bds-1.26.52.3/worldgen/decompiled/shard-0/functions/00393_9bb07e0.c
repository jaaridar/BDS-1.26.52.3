/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x9cb07e0 (ELF vaddr 0x9bb07e0)
 * Label: caller-of-seed
 * Body:  [[09cb07e0, 09cb0d57] [09cb0d60, 09cb0e44] [09cb0e50, 09cb0f16] [09cb0f20, 09cb0f39] [09cb0f40, 09cb106a] [09cb1093, 09cb10c8] [09cb10cc, 09cb1159] [09cb117f, 09cb1197]]
 * Ghidra: FUN_09cb07e0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_09cb07e0(long *param_1,byte *param_2,byte *param_3,undefined8 param_4,long *param_5,
                   uint param_6,undefined1 param_7,ulong **param_8,byte param_9)

{
  byte bVar1;
  int iVar2;
  ulong *puVar3;
  long lVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long *plVar7;
  uint uVar8;
  undefined4 uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  byte *pbVar14;
  undefined **ppuVar15;
  ulong uVar16;
  bool bVar17;
  uint uStack_1e8;
  undefined2 uStack_1e4;
  ulong **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  uint uStack_1bc;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  ulong *puStack_198;
  long *plStack_190;
  long lStack_188;
  undefined4 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  undefined1 uStack_158;
  uint uStack_148;
  uint uStack_140;
  ulong uStack_138;
  int iStack_130;
  int iStack_12c;
  ulong ***pppuStack_128;
  ulong ***pppuStack_120;
  undefined4 uStack_118;
  undefined8 uStack_114;
  undefined4 uStack_10c;
  long *plStack_108;
  long *plStack_100;
  long lStack_f8;
  ulong uStack_f0;
  byte *pbStack_e8;
  undefined8 uStack_e0;
  ulong *puStack_d8;
  undefined4 uStack_d0;
  undefined **appuStack_c8 [4];
  undefined ***pppuStack_a8;
  byte bStack_98;
  undefined *puStack_88;
  undefined1 auStack_80 [40];
  uint uStack_58;
  byte *pbStack_50;
  ulong uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  if ((byte)((char)param_4 - 0x15U) < 0xec) {
    *(undefined1 *)(param_1 + 3) = 0;
    *param_1 = (long)&UNK_013b69f2;
    param_1[1] = 0x1d;
    return param_1;
  }
  puStack_198 = param_8[0x14];
  uStack_1bc = param_6;
  plStack_190 = param_1;
  pbStack_e8 = param_3;
  uStack_e0 = param_4;
  uStack_f0 = (**(code **)(*puStack_198 + 0x440))();
  uStack_168 = uStack_f0 & 0xffffffffffff ^ 0x5deece66d;
  uStack_178 = &UNK_0f45e800;
  ppuVar15 = &puStack_170;
  puStack_170 = &UNK_0f2bdd80;
  uStack_160 = 0;
  uStack_158 = 0;
  uStack_148 = 0;
  puVar3 = (ulong *)*param_5;
  lVar11 = param_5[1];
  puStack_88 = &UNK_0f45e800;
  puStack_d8 = (ulong *)auStack_80;
  auStack_80[0] = 0;
  uStack_58 = 0xffffffff;
  func_0x0d2e0ab0(&puStack_d8,ppuVar15);
  uStack_58 = 0;
  appuStack_c8[0] = &puStack_88;
  ppuStack_1e0 = &puStack_d8;
  puStack_d8 = puVar3;
  uStack_d0 = (int)lVar11;
  if ((ulong)uStack_148 == 0xffffffff) {
    func_0x04931450();
    goto LAB_09cb1054;
  }
  pppuStack_120 = &ppuStack_1e0;
  (**(code **)(&UNK_0f45ef28 + (ulong)uStack_148 * 8))(&pppuStack_120,ppuVar15);
  if ((ulong)uStack_148 != 0xffffffff) {
    (**(code **)(&UNK_0f1e0968 + (ulong)uStack_148 * 8))(&puStack_d8,ppuVar15);
  }
  plVar10 = (long *)(*(code *)(*param_8)[0xd])(param_8);
  lVar11 = (**(code **)(*plVar10 + 0x138))(plVar10,param_5);
  if (lVar11 == 0) {
LAB_09cb0a17:
    plVar12 = (long *)(**(code **)(*plVar10 + 0x158))(plVar10);
    uVar13 = (**(code **)(*plVar12 + 0x2b0))(plVar12);
    uVar9 = (**(code **)(*(long *)plVar10[7] + 0xd0))();
    uStack_38 = func_0x0c8cca10(uVar13,uVar9);
  }
  else {
    iVar2 = *(int *)((long)param_5 + 4);
    if ((iVar2 < *(short *)((long)plVar10 + 0x42)) || ((short)plVar10[8] <= iVar2))
    goto LAB_09cb0a17;
    uStack_178 = (undefined *)(CONCAT71(uStack_178._1_7_,(char)*param_5) & 0xffffffffffffff0f);
    uStack_178 = (undefined *)
                 (CONCAT62(uStack_178._2_6_,CONCAT11((char)param_5[1],(undefined1)uStack_178)) &
                 0xffffffffffff0fff);
    uStack_178._0_4_ =
         CONCAT22((short)iVar2 - *(short *)((long)plVar10 + 0x42),(undefined2)uStack_178);
    uStack_38 = func_0x0caf8020(lVar11,&uStack_178);
  }
  puStack_40 = &UNK_0f3dc940;
  ppuStack_1e0 = param_8;
  ppuStack_1d8 = &puStack_40;
  puStack_1d0 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puStack_1d0 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  puStack_1d0[2] = 0;
  puStack_1d0[3] = 0;
  *puStack_1d0 = 0;
  puStack_1d0[1] = 0;
  *(undefined4 *)(puStack_1d0 + 4) = 0x3f800000;
  puStack_1c8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puStack_1c8 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar8 = uStack_58;
  plVar10 = plStack_190;
  puStack_1c8[2] = 0;
  puStack_1c8[3] = 0;
  *puStack_1c8 = 0;
  puStack_1c8[1] = 0;
  *(undefined4 *)(puStack_1c8 + 4) = 0x3f800000;
  uStack_178 = (undefined *)puStack_198[0x5b];
  puStack_170 = &UNK_0f45e800;
  uStack_168 = uStack_168 & 0xffffffffffffff00;
  uStack_140 = 0xffffffff;
  if ((ulong)uStack_58 != 0xffffffff) {
    puStack_d8 = &uStack_168;
    (**(code **)(&UNK_0f45ee88 + (ulong)uStack_58 * 8))(&puStack_d8,auStack_80);
    uStack_140 = uVar8;
  }
  uStack_138 = uStack_f0;
  iStack_130 = (int)*param_5 >> 4;
  iStack_12c = (int)param_5[1] >> 4;
  uStack_1e4 = *(undefined2 *)((long)ppuStack_1e0 + 0xac);
  uStack_1e8 = ((uint)*(ushort *)((long)ppuStack_1e0 + 0xaa) -
               (uint)*(ushort *)(ppuStack_1e0 + 0x15)) * 0x10000 |
               (uint)*(ushort *)(ppuStack_1e0 + 0x15);
  lStack_1b8 = 0;
  lStack_1b0 = 0;
  lStack_1a8 = 0;
  bVar17 = (*param_2 & 1) != 0;
  pbVar14 = param_2 + 1;
  if (bVar17) {
    pbVar14 = *(byte **)(param_2 + 0x10);
  }
  uVar16 = (ulong)(*param_2 >> 1);
  if (bVar17) {
    uVar16 = *(ulong *)(param_2 + 8);
  }
  bVar17 = (*pbStack_e8 & 1) != 0;
  pbStack_50 = pbStack_e8 + 1;
  if (bVar17) {
    pbStack_50 = *(byte **)(pbStack_e8 + 0x10);
  }
  uStack_48 = (ulong)(*pbStack_e8 >> 1);
  if (bVar17) {
    uStack_48 = *(ulong *)(pbStack_e8 + 8);
  }
  lStack_188 = *param_5;
  uStack_180 = (undefined4)param_5[1];
  ppuVar15 = (undefined **)(ulong)param_9;
  pppuStack_128 = &ppuStack_1e0;
  func_0x0d2fe510(&puStack_d8,&uStack_178,&uStack_1e8,pbVar14,uVar16,uStack_e0,pbStack_50._0_4_,
                  (undefined4)uStack_48,lStack_188,uStack_180,0,0x7fffffff00000080,0,&lStack_1b8,0,
                  param_9);
  if (bStack_98 == 0) {
    *(undefined1 *)(plVar10 + 3) = 0;
    *plVar10 = (long)&UNK_01367a76;
    plVar10[1] = 0x1f;
  }
  else {
    if (pppuStack_a8 == (undefined ***)0x0) {
LAB_09cb1054:
      uVar13 = FUN_04891200();
      FUN_0624db60(&pppuStack_120);
      if ((bStack_98 == 1) &&
         ((lVar11 = 0x20, pppuStack_a8 == appuStack_c8 ||
          (lVar11 = 0x28, pppuStack_a8 != (undefined ***)0x0)))) {
        (**(code **)((long)*pppuStack_a8 + lVar11))();
      }
      func_0x0624dc00(&lStack_1b8);
      func_0x0624dcb0(&uStack_178);
      func_0x0624dcf0(&ppuStack_1e0);
      func_0x0624d960(&puStack_88);
      uVar13 = func_0x0eee2d70(uVar13);
      func_0x0d2e0480(auStack_80);
      func_0x0624d960(&uStack_178);
      uVar13 = func_0x0eee2d70(uVar13);
      puStack_1d0 = (undefined8 *)0x0;
      FUN_0629e540(&puStack_1d0,ppuVar15);
      func_0x0624d960(&puStack_88);
      uVar13 = func_0x0eee2d70(uVar13);
      func_0x0624d960(&puStack_88);
      func_0x0eee2d70(uVar13);
      pcVar5 = (code *)swi(3);
      plVar10 = (long *)(*pcVar5)();
      return plVar10;
    }
    (*(code *)(*pppuStack_a8)[6])(&pppuStack_120,pppuStack_a8,&uStack_178,&puStack_d8);
    if (plStack_108 != plStack_100) {
      plVar12 = plStack_108;
      do {
        if (((int)*(short *)(param_8 + 0x15) <= *(int *)(*plVar12 + 4)) &&
           (*(int *)(*plVar12 + 0x10) <= (int)*(short *)((long)param_8 + 0xaa))) {
          func_0x09cb0600(puStack_198,param_8,plStack_108,plStack_100,param_5,uStack_1bc & 0xff,
                          param_7,param_9);
          *(undefined1 *)(plVar10 + 3) = 1;
          *(undefined4 *)(plVar10 + 1) = uStack_118;
          *plVar10 = (long)pppuStack_120;
          *(undefined4 *)((long)plVar10 + 0x14) = uStack_10c;
          *(undefined8 *)((long)plVar10 + 0xc) = uStack_114;
          goto LAB_09cb0e2a;
        }
        plVar12 = plVar12 + 1;
      } while (plVar12 != plStack_100);
    }
    *(undefined1 *)(plVar10 + 3) = 0;
    *plVar10 = (long)&UNK_0140266b;
    plVar10[1] = 0x20;
LAB_09cb0e2a:
    plVar7 = plStack_108;
    plVar12 = plStack_100;
    if (plStack_108 != (long *)0x0) {
      for (; plVar7 != plVar12; plVar12 = plVar12 + -1) {
        lVar11 = plVar12[-1];
        plVar12[-1] = 0;
        if (lVar11 != 0) {
          lVar4 = *(long *)(lVar11 + 0x38);
          if (lVar4 != 0) {
            *(long *)(lVar11 + 0x40) = lVar4;
            func_0x0412a280(lVar4,*(long *)(lVar11 + 0x48) - lVar4);
          }
          func_0x0412a280(lVar11,0x58);
        }
      }
      plStack_100 = plVar7;
      func_0x0412a280(plStack_108,lStack_f8 - (long)plStack_108);
      plVar10 = plStack_190;
    }
    if ((bStack_98 & 1) != 0) {
      if (pppuStack_a8 == appuStack_c8) {
        lVar11 = 0x20;
      }
      else {
        lVar11 = 0x28;
        if (pppuStack_a8 == (undefined ***)0x0) goto LAB_09cb0ef4;
      }
      (**(code **)((long)*pppuStack_a8 + lVar11))();
    }
  }
LAB_09cb0ef4:
  lVar4 = lStack_1b8;
  lVar11 = lStack_1b0;
  if (lStack_1b8 != 0) {
    for (; lVar4 != lVar11; lVar11 = lVar11 + -0x30) {
      if ((*(byte *)(lVar11 + -0x18) & 1) == 0) {
        bVar1 = *(byte *)(lVar11 + -0x30);
      }
      else {
        func_0x0412a280(*(undefined8 *)(lVar11 + -8),*(ulong *)(lVar11 + -0x18) & 0xfffffffffffffffe
                       );
        bVar1 = *(byte *)(lVar11 + -0x30);
      }
      if ((bVar1 & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar11 + -0x20),
                        *(ulong *)(lVar11 + -0x30) & 0xfffffffffffffffe);
      }
    }
    lStack_1b0 = lVar4;
    func_0x0412a280(lStack_1b8,lStack_1a8 - lStack_1b8);
  }
  if ((ulong)uStack_140 != 0xffffffff) {
    (**(code **)(&UNK_0f1e0968 + (ulong)uStack_140 * 8))(&puStack_d8,&uStack_168);
  }
  puVar6 = puStack_1c8;
  puStack_1c8 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    func_0x0629e480(&puStack_1c8);
  }
  puVar6 = puStack_1d0;
  puStack_1d0 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_0629e540(&puStack_1d0);
  }
  if ((ulong)uStack_58 != 0xffffffff) {
    (**(code **)(&UNK_0f1e0968 + (ulong)uStack_58 * 8))(&uStack_178,auStack_80);
  }
  return plVar10;
}


