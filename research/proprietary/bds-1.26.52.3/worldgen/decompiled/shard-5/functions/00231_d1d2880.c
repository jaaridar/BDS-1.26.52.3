/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2d2880 (ELF vaddr 0xd1d2880)
 * Label: callee-of:0xc972b00
 * Body:  [[0d2d2880, 0d2d2b20] [0d2d2b30, 0d2d2c04] [0d2d2c0a, 0d2d2c5d]]
 * Ghidra: FUN_0d2d2880
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0d2d2880(undefined8 *param_1,long *param_2,long param_3)

{
  long *plVar1;
  undefined *puVar2;
  code *pcVar3;
  ulong *puVar4;
  undefined *puVar5;
  char cVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  bool bVar13;
  undefined *puStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  uint uStack_48;
  undefined4 uStack_44;
  char cStack_38;
  
  uStack_68 = *(ulong *)(param_3 + 0x40) & 0xffffffffffff ^ 0x5deece66d;
  puStack_78 = &UNK_0f45e800;
  puStack_70 = &UNK_0f2bdd80;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_48 = 0;
  func_0x0d2d2c60(&puStack_78,*(ulong *)(param_3 + 0x40),*(undefined4 *)(param_3 + 0x48),
                  *(undefined4 *)(param_3 + 0x4c));
  ppuVar7 = &puStack_70;
  if ((ulong)*(uint *)(param_3 + 0x38) == 0xffffffff) {
    if (uStack_48 != 0xffffffff) goto LAB_0d2d2937;
  }
  else {
    if (uStack_48 == 0xffffffff) {
      (**(code **)(&UNK_0f45ee28 + (ulong)*(uint *)(param_3 + 0x38) * 8))(&puStack_a8);
      *(undefined4 *)(param_3 + 0x38) = 0xffffffff;
    }
    else {
LAB_0d2d2937:
      puStack_a8 = (undefined *)(param_3 + 0x10);
      (**(code **)(&UNK_0f45ee98 + (ulong)uStack_48 * 8))
                (&puStack_a8,(undefined *)(param_3 + 0x10),ppuVar7);
    }
    if ((ulong)uStack_48 != 0xffffffff) {
      (**(code **)(&UNK_0f45ee28 + (ulong)uStack_48 * 8))(&puStack_a8,ppuVar7);
    }
  }
  (**(code **)(*param_2 + 0x10))(&puStack_78,param_2,param_3);
  if (cStack_38 == '\x01') {
    plVar1 = *(long **)(*(long *)(param_3 + 0x50) + 8);
    lVar9 = param_2[2];
    lVar12 = param_2[3] - lVar9;
    puStack_a8 = (undefined *)(lVar12 >> 1);
    if (lVar12 == -2) {
LAB_0d2d2bd3:
      func_0x04890760();
LAB_0d2d2bd8:
      func_0x0eec74c0(0x70,0);
    }
    else {
      uStack_a0 = (undefined4)lVar9;
      uStack_9c = (undefined4)((ulong)lVar9 >> 0x20);
      if (param_2[3] != 0 && lVar9 == 0) goto LAB_0d2d2bd3;
      cVar6 = (**(code **)(*plVar1 + 0x38))
                        (plVar1,puStack_78,(ulong)puStack_78 >> 0x20,(ulong)puStack_70 & 0xffffffff,
                         0,puStack_a8,puStack_a8._0_4_,uStack_a0);
      if (cVar6 == '\0') goto LAB_0d2d2b8b;
      plVar1 = (long *)CONCAT44(uStack_44,uStack_48);
      if (plVar1 == (long *)0x0) {
        uVar10 = func_0x04891200();
        uVar10 = func_0x04882e20(uVar10);
        func_0x0624db60(&puStack_a8);
        if (cStack_38 == '\x01') {
          puVar4 = (ulong *)CONCAT44(uStack_44,uStack_48);
          lVar9 = 0x20;
          if ((puVar4 == &uStack_68) || (lVar9 = 0x28, puVar4 != (ulong *)0x0)) {
            (**(code **)(*puVar4 + lVar9))();
          }
        }
        uVar10 = func_0x0eee2d70(uVar10);
        uVar10 = func_0x04882e20(uVar10);
        func_0x0624d960(&puStack_78);
        func_0x0eee2d70(uVar10);
        pcVar3 = (code *)swi(3);
        puVar11 = (undefined8 *)(*pcVar3)();
        return puVar11;
      }
      (**(code **)(*plVar1 + 0x30))(&puStack_a8,plVar1,param_3,&puStack_78);
      ppuVar7 = (undefined **)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x70);
      if (ppuVar7 == (undefined **)0x0) goto LAB_0d2d2bd8;
    }
    ppuVar7[1] = (undefined *)0x0;
    ppuVar7[2] = (undefined *)0x0;
    *ppuVar7 = &UNK_0f45f2d0;
    puVar2 = *(undefined **)(param_3 + 0x48);
    ppuVar7[3] = puStack_78;
    *(undefined4 *)(ppuVar7 + 4) = puStack_70._0_4_;
    ppuVar7[5] = puVar2;
    ppuVar7[6] = puStack_a8;
    *(undefined4 *)(ppuVar7 + 7) = uStack_a0;
    *(ulong *)((long)ppuVar7 + 0x3c) = CONCAT44(uStack_98,uStack_9c);
    *(undefined4 *)((long)ppuVar7 + 0x44) = uStack_94;
    ppuVar7[9] = (undefined *)param_2;
    ppuVar7[10] = puStack_90;
    bVar13 = puStack_90 != uStack_88;
    *(undefined4 *)(ppuVar7 + 0xb) = (undefined4)uStack_88;
    *(undefined4 *)((long)ppuVar7 + 0x5c) = uStack_88._4_4_;
    *(undefined4 *)(ppuVar7 + 0xc) = (undefined4)uStack_80;
    *(undefined4 *)((long)ppuVar7 + 100) = uStack_80._4_4_;
    puStack_90 = (undefined *)0x0;
    uStack_88 = (undefined *)0x0;
    uStack_80 = 0;
    *(undefined1 *)(ppuVar7 + 0xd) = 0;
    *param_1 = ppuVar7 + 3;
    param_1[1] = ppuVar7;
    if (bVar13) goto LAB_0d2d2b91;
    ppuVar8 = ppuVar7 + 1;
    LOCK();
    puVar2 = *ppuVar8;
    *ppuVar8 = *ppuVar8 + -1;
    UNLOCK();
    if (puVar2 == (undefined *)0x0) {
      (**(code **)(*ppuVar7 + 0x10))(ppuVar7);
      FUN_0412c2d0(ppuVar7);
    }
    puVar5 = puStack_90;
    puVar2 = uStack_88;
    if (puStack_90 != (undefined *)0x0) {
      for (; puVar5 != puVar2; puVar2 = puVar2 + -8) {
        lVar9 = *(long *)(puVar2 + -8);
        *(undefined8 *)(puVar2 + -8) = 0;
        if (lVar9 != 0) {
          lVar12 = *(long *)(lVar9 + 0x38);
          if (lVar12 != 0) {
            *(long *)(lVar9 + 0x40) = lVar12;
            FUN_0412a280(lVar12,*(long *)(lVar9 + 0x48) - lVar12);
          }
          FUN_0412a280(lVar9,0x58);
        }
      }
      uStack_88 = puVar5;
      FUN_0412a280(puStack_90,uStack_80 - (long)puStack_90);
    }
  }
LAB_0d2d2b8b:
  *param_1 = 0;
  param_1[1] = 0;
LAB_0d2d2b91:
  if (cStack_38 == '\x01') {
    puVar4 = (ulong *)CONCAT44(uStack_44,uStack_48);
    if (puVar4 == &uStack_68) {
      lVar9 = 0x20;
    }
    else {
      lVar9 = 0x28;
      if (puVar4 == (ulong *)0x0) {
        return param_1;
      }
    }
    (**(code **)(*puVar4 + lVar9))();
  }
  return param_1;
}


