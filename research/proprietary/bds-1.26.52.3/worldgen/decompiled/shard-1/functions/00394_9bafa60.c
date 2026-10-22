/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x9cafa60 (ELF vaddr 0x9bafa60)
 * Label: caller-of-seed
 * Body:  [[09cafa60, 09cb016d] [09cb0170, 09cb0258] [09cb0260, 09cb031c] [09cb0320, 09cb033a] [09cb0340, 09cb04b7] [09cb04e3, 09cb0518] [09cb051c, 09cb052a] [09cb056b, 09cb0583] [09cb05cf, 09cb05f1]]
 * Ghidra: FUN_09cafa60
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_09cafa60(long *param_1,byte *param_2,long *param_3,undefined8 *******param_4,
                   undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined1 param_8)

{
  byte bVar1;
  int iVar2;
  undefined8 *****pppppuVar3;
  long *******ppppppplVar4;
  long lVar5;
  code *pcVar6;
  long *******ppppppplVar7;
  undefined8 *puVar8;
  undefined8 *******pppppppuVar9;
  uint uVar10;
  undefined4 uVar11;
  byte *pbVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined *puVar17;
  long ******pppppplVar18;
  ulong uVar19;
  long ******pppppplVar20;
  long ******pppppplVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  long ******pppppplVar24;
  bool bVar25;
  uint uStack_200;
  undefined2 uStack_1fc;
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  undefined8 *******pppppppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 ******ppppppuStack_1c8;
  undefined4 uStack_1bc;
  int iStack_1b8;
  undefined4 uStack_1b4;
  undefined1 auStack_1b0 [2];
  undefined6 uStack_1ae;
  undefined *puStack_1a8;
  long ******pppppplStack_1a0;
  undefined8 uStack_198;
  undefined1 uStack_190;
  uint uStack_180;
  uint uStack_178;
  ulong uStack_170;
  int iStack_168;
  int iStack_164;
  undefined8 *******pppppppuStack_160;
  undefined8 *******pppppppuStack_158;
  long *******ppppppplStack_150;
  long *******ppppppplStack_148;
  long lStack_140;
  undefined8 *******pppppppuStack_138;
  undefined4 uStack_130;
  undefined8 uStack_12c;
  undefined4 uStack_124;
  long *plStack_120;
  long *plStack_118;
  long lStack_110;
  long *******ppppppplStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined **appuStack_f8 [4];
  undefined ***pppuStack_d8;
  byte bStack_c8;
  long *plStack_b0;
  long *plStack_a8;
  ulong uStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [40];
  uint uStack_68;
  long ******pppppplStack_60;
  long ******pppppplStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long *******appppppplStack_40 [2];
  
  ppppppuStack_1c8 = param_4[0x14];
  pppppuVar3 = ppppppuStack_1c8[0x5b];
  bVar25 = (*param_2 & 1) != 0;
  pbVar12 = param_2 + 1;
  if (bVar25) {
    pbVar12 = *(byte **)(param_2 + 0x10);
  }
  uVar19 = (ulong)(*param_2 >> 1);
  if (bVar25) {
    uVar19 = *(ulong *)(param_2 + 8);
  }
  uStack_1bc = param_6;
  uStack_1b4 = param_5;
  func_0x0b5fa060(auStack_1b0,pbVar12,uVar19,&DAT_013abf4c);
  puVar17 = (undefined *)((ulong)_auStack_1b0 >> 1 & 0x7f);
  pppppplVar20 = (long ******)(auStack_1b0 + 1);
  if (((ulong)_auStack_1b0 & 1) != 0) {
    puVar17 = puStack_1a8;
    pppppplVar20 = pppppplStack_1a0;
  }
  func_0x0d330c10(&ppppppplStack_108,pppppuVar3 + 0x27,pppppplVar20,puVar17);
  ppppppplVar7 = ppppppplStack_108;
  plStack_b0 = (long *)CONCAT44(uStack_fc,uStack_100);
  appppppplStack_40[0] = ppppppplStack_108;
  if (((ulong)_auStack_1b0 & 1) != 0) {
    func_0x0412a280(pppppplStack_1a0,(ulong)_auStack_1b0 & 0xfffffffffffffffe);
  }
  if (ppppppplVar7 == (long *******)0x0) {
    *(undefined1 *)(param_1 + 3) = 0;
    *param_1 = (long)&UNK_01315034;
    param_1[1] = 0x25;
    goto LAB_09cb0438;
  }
  pppppppuStack_158 = param_4;
  plStack_a8 = param_1;
  uStack_a0 = (*(code *)(*ppppppuStack_1c8)[0x88])();
  pppppplStack_1a0 = (long ******)(uStack_a0 & 0xffffffffffff ^ 0x5deece66d);
  _auStack_1b0 = (undefined8 *****)&UNK_0f45e800;
  puStack_1a8 = &UNK_0f2bdd80;
  uStack_198 = 0;
  uStack_190 = 0;
  uStack_180 = 0;
  ppppppplVar4 = (long *******)*param_3;
  lVar14 = param_3[1];
  puStack_98 = &UNK_0f45e800;
  ppppppplStack_108 = (long *******)auStack_90;
  auStack_90[0] = 0;
  uStack_68 = 0xffffffff;
  func_0x0d2e0ab0(&ppppppplStack_108,&puStack_1a8);
  uStack_68 = 0;
  appuStack_f8[0] = &puStack_98;
  pppppppuStack_1e8 = &ppppppplStack_108;
  ppppppplStack_108 = ppppppplVar4;
  uStack_100 = (int)lVar14;
  if ((ulong)uStack_180 == 0xffffffff) {
    FUN_04931450();
LAB_09cb049c:
    FUN_04931450();
LAB_09cb04a1:
    uVar16 = func_0x04891200();
    func_0x0624db60(&pppppppuStack_138);
    if ((bStack_c8 == 1) &&
       ((lVar14 = 0x20, pppuStack_d8 == appuStack_f8 ||
        (lVar14 = 0x28, pppuStack_d8 != (undefined ***)0x0)))) {
      (**(code **)((long)*pppuStack_d8 + lVar14))();
    }
    func_0x0624dc00(&ppppppplStack_150);
    func_0x0624dcb0(auStack_1b0);
    func_0x0624dcf0(&pppppppuStack_1e8);
    func_0x0624d960(&puStack_98);
    func_0x09cb07b0(appppppplStack_40);
    func_0x0eee2d70(uVar16);
    pcVar6 = (code *)swi(3);
    plVar13 = (long *)(*pcVar6)();
    return plVar13;
  }
  pppppppuStack_138 = &pppppppuStack_1e8;
  (**(code **)(&UNK_0f45ef28 + (ulong)uStack_180 * 8))(&pppppppuStack_138,&puStack_1a8);
  pppppppuVar9 = pppppppuStack_158;
  if ((ulong)uStack_180 != 0xffffffff) {
    (**(code **)(&UNK_0f1e0968 + (ulong)uStack_180 * 8))(&ppppppplStack_108,&puStack_1a8);
  }
  plVar13 = (long *)(*(code *)(*pppppppuVar9)[0xd])(pppppppuVar9);
  lVar14 = (**(code **)(*plVar13 + 0x138))(plVar13,param_3);
  if (lVar14 == 0) {
LAB_09cafd40:
    plVar15 = (long *)(**(code **)(*plVar13 + 0x158))(plVar13);
    uVar16 = (**(code **)(*plVar15 + 0x2b0))(plVar15);
    uVar11 = (**(code **)(*(long *)plVar13[7] + 0xd0))();
    uStack_48 = func_0x0c8cca10(uVar16,uVar11);
  }
  else {
    iVar2 = *(int *)((long)param_3 + 4);
    if ((iVar2 < *(short *)((long)plVar13 + 0x42)) || ((short)plVar13[8] <= iVar2))
    goto LAB_09cafd40;
    _auStack_1b0 = (undefined8 *****)
                   (CONCAT71(stack0xfffffffffffffe51,(char)*param_3) & 0xffffffffffffff0f);
    _auStack_1b0 = (undefined8 *****)
                   (CONCAT62(uStack_1ae,CONCAT11((char)param_3[1],auStack_1b0[0])) &
                   0xffffffffffff0fff);
    _auStack_1b0 = CONCAT22((short)iVar2 - *(short *)((long)plVar13 + 0x42),auStack_1b0);
    uStack_48 = func_0x0caf8020(lVar14,auStack_1b0);
  }
  puStack_50 = &UNK_0f3dc940;
  pppppppuStack_1e8 = pppppppuVar9;
  ppuStack_1e0 = &puStack_50;
  puStack_1d8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puStack_1d8 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  puStack_1d8[2] = 0;
  puStack_1d8[3] = 0;
  *puStack_1d8 = 0;
  puStack_1d8[1] = 0;
  *(undefined4 *)(puStack_1d8 + 4) = 0x3f800000;
  puStack_1d0 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puStack_1d0 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar10 = uStack_68;
  puStack_1d0[2] = 0;
  puStack_1d0[3] = 0;
  *puStack_1d0 = 0;
  puStack_1d0[1] = 0;
  *(undefined4 *)(puStack_1d0 + 4) = 0x3f800000;
  _auStack_1b0 = ppppppuStack_1c8[0x5b];
  puStack_1a8 = &UNK_0f45e800;
  pppppplStack_1a0 = (long ******)((ulong)pppppplStack_1a0 & 0xffffffffffffff00);
  uStack_178 = 0xffffffff;
  if ((ulong)uStack_68 != 0xffffffff) {
    ppppppplStack_108 = &pppppplStack_1a0;
    (**(code **)(&UNK_0f45ee88 + (ulong)uStack_68 * 8))(&ppppppplStack_108,auStack_90);
    uStack_178 = uVar10;
  }
  uStack_170 = uStack_a0;
  iStack_168 = (int)*param_3 >> 4;
  iStack_164 = (int)param_3[1] >> 4;
  pppppppuStack_160 = &pppppppuStack_1e8;
  uStack_1fc = *(undefined2 *)((long)pppppppuStack_1e8 + 0xac);
  uStack_200 = ((uint)*(ushort *)((long)pppppppuStack_1e8 + 0xaa) -
               (uint)*(ushort *)(pppppppuStack_1e8 + 0x15)) * 0x10000 |
               (uint)*(ushort *)(pppppppuStack_1e8 + 0x15);
  iStack_1b8 = (int)*(char *)(ppppppplVar7 + 0x1c);
  uStack_1f0 = (undefined4)param_3[1];
  uStack_1f8 = *param_3;
  if ((char)uStack_1b4 == '\0') {
    uVar22 = *(undefined1 *)(ppppppplVar7 + 0x26);
    pppppplVar20 = ppppppplVar7[0x24];
    pppppplVar24 = ppppppplVar7[0x25];
    uVar23 = *(undefined1 *)((long)ppppppplVar7 + 0x131);
    pppppppuStack_138 = (undefined8 *******)0x0;
    ppppppplStack_150 = (long *******)&pppppppuStack_138;
    if ((ulong)*(uint *)(ppppppplVar7 + 0x23) == 0xffffffff) goto LAB_09cb049c;
    ppppppplStack_108 = (long *******)&ppppppplStack_150;
    (**(code **)(&UNK_0f45ee78 + (ulong)*(uint *)(ppppppplVar7 + 0x23) * 8))
              (&ppppppplStack_108,ppppppplVar7 + 0x1e);
    uVar11 = (*(code *)(*pppppppuStack_138)[2])(pppppppuStack_138,&puStack_98,&uStack_200);
    uStack_1f8 = CONCAT44(uVar11,(undefined4)uStack_1f8);
  }
  else {
    pppppplVar20 = ppppppplVar7[0x24];
    pppppplVar24 = ppppppplVar7[0x25];
    uVar23 = *(undefined1 *)((long)ppppppplVar7 + 0x131);
    uVar22 = 0;
  }
  func_0x0d33ec10(&ppppppplStack_150,ppppppplVar7 + 0x13,&uStack_1f8,uStack_170);
  bVar25 = (*(byte *)(ppppppplVar7 + 0x19) & 1) != 0;
  pppppplVar18 = (long ******)((long)ppppppplVar7 + 0xc9);
  if (bVar25) {
    pppppplVar18 = ppppppplVar7[0x1b];
  }
  pppppplVar21 = (long ******)(ulong)(*(byte *)(ppppppplVar7 + 0x19) >> 1);
  if (bVar25) {
    pppppplVar21 = ppppppplVar7[0x1a];
  }
  bVar25 = (*(byte *)(ppppppplVar7 + 0x16) & 1) != 0;
  pppppplStack_60 = (long ******)((long)ppppppplVar7 + 0xb1);
  if (bVar25) {
    pppppplStack_60 = ppppppplVar7[0x18];
  }
  pppppplStack_58 = (long ******)(ulong)(*(byte *)(ppppppplVar7 + 0x16) >> 1);
  if (bVar25) {
    pppppplStack_58 = ppppppplVar7[0x17];
  }
  func_0x0d2fe510(&ppppppplStack_108,auStack_1b0,&uStack_200,pppppplVar18,pppppplVar21,iStack_1b8,
                  pppppplStack_60._0_4_,pppppplStack_58._0_4_,uStack_1f8,uStack_1f0,uVar22,
                  pppppplVar20,pppppplVar24,&ppppppplStack_150,uVar23,param_8);
  param_1 = plStack_a8;
  pppppppuVar9 = pppppppuStack_158;
  if (bStack_c8 == 0) {
    *(undefined1 *)(plStack_a8 + 3) = 0;
    *plStack_a8 = (long)&UNK_01367a76;
    plStack_a8[1] = 0x1f;
  }
  else {
    if (pppuStack_d8 == (undefined ***)0x0) goto LAB_09cb04a1;
    (*(code *)(*pppuStack_d8)[6])(&pppppppuStack_138,pppuStack_d8,auStack_1b0,&ppppppplStack_108);
    if (plStack_120 != plStack_118) {
      plVar13 = plStack_120;
      do {
        if (((int)*(short *)(pppppppuVar9 + 0x15) <= *(int *)(*plVar13 + 4)) &&
           (*(int *)(*plVar13 + 0x10) <= (int)*(short *)((long)pppppppuVar9 + 0xaa))) {
          func_0x09cb0600(ppppppuStack_1c8,pppppppuVar9,plStack_120,plStack_118,&uStack_1f8,
                          (undefined1)uStack_1bc,param_7,param_8);
          *(undefined1 *)(param_1 + 3) = 1;
          *(undefined4 *)(param_1 + 1) = uStack_130;
          *param_1 = (long)pppppppuStack_138;
          *(undefined4 *)((long)param_1 + 0x14) = uStack_124;
          *(undefined8 *)((long)param_1 + 0xc) = uStack_12c;
          plVar15 = plStack_120;
          plVar13 = plStack_118;
          goto joined_r0x09cb01fa;
        }
        plVar13 = plVar13 + 1;
      } while (plVar13 != plStack_118);
    }
    *(undefined1 *)(param_1 + 3) = 0;
    *param_1 = (long)&UNK_0140266b;
    param_1[1] = 0x20;
    plVar15 = plStack_120;
    plVar13 = plStack_118;
joined_r0x09cb01fa:
    plStack_120 = plVar15;
    if (plVar15 != (long *)0x0) {
      for (; plVar15 != plVar13; plVar13 = plVar13 + -1) {
        lVar14 = plVar13[-1];
        plVar13[-1] = 0;
        if (lVar14 != 0) {
          lVar5 = *(long *)(lVar14 + 0x38);
          if (lVar5 != 0) {
            *(long *)(lVar14 + 0x40) = lVar5;
            func_0x0412a280(lVar5,*(long *)(lVar14 + 0x48) - lVar5);
          }
          func_0x0412a280(lVar14,0x58);
        }
      }
      func_0x0412a280(plStack_120,lStack_110 - (long)plStack_120);
    }
    if ((bStack_c8 & 1) != 0) {
      if (pppuStack_d8 == appuStack_f8) {
        lVar14 = 0x20;
      }
      else {
        lVar14 = 0x28;
        if (pppuStack_d8 == (undefined ***)0x0) goto LAB_09cb02fa;
      }
      (**(code **)((long)*pppuStack_d8 + lVar14))();
    }
  }
LAB_09cb02fa:
  ppppppplVar4 = ppppppplStack_150;
  ppppppplVar7 = ppppppplStack_148;
  if (ppppppplStack_150 != (long *******)0x0) {
    for (; ppppppplVar4 != ppppppplVar7; ppppppplVar7 = ppppppplVar7 + -6) {
      if (((ulong)ppppppplVar7[-3] & 1) == 0) {
        bVar1 = *(byte *)(ppppppplVar7 + -6);
      }
      else {
        func_0x0412a280(ppppppplVar7[-1],(ulong)ppppppplVar7[-3] & 0xfffffffffffffffe);
        bVar1 = *(byte *)(ppppppplVar7 + -6);
      }
      if ((bVar1 & 1) != 0) {
        func_0x0412a280(ppppppplVar7[-4],(ulong)ppppppplVar7[-6] & 0xfffffffffffffffe);
      }
    }
    ppppppplStack_148 = ppppppplVar4;
    func_0x0412a280(ppppppplStack_150,lStack_140 - (long)ppppppplStack_150);
  }
  if ((ulong)uStack_178 != 0xffffffff) {
    (**(code **)(&UNK_0f1e0968 + (ulong)uStack_178 * 8))(&ppppppplStack_108,&pppppplStack_1a0);
  }
  puVar8 = puStack_1d0;
  puStack_1d0 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    func_0x0629e480(&puStack_1d0);
  }
  puVar8 = puStack_1d8;
  puStack_1d8 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    func_0x0629e540(&puStack_1d8);
  }
  if ((ulong)uStack_68 != 0xffffffff) {
    (**(code **)(&UNK_0f1e0968 + (ulong)uStack_68 * 8))(auStack_1b0,auStack_90);
  }
LAB_09cb0438:
  if (plStack_b0 != (long *)0x0) {
    LOCK();
    plVar13 = plStack_b0 + 1;
    lVar14 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
      func_0x0412c2d0(plStack_b0);
    }
  }
  return param_1;
}


