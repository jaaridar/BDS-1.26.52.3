/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd3a4dc0 (ELF vaddr 0xd2a4dc0)
 * Label: FlatWorldGenerator::vslot11
 * Body:  [[0d3a4dc0, 0d3a51e8]]
 * Ghidra: wg_FlatWorldGenerator__vslot11
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong wg_FlatWorldGenerator__vslot11(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  byte bVar6;
  undefined **ppuVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 unaff_RBX;
  int iStack_bf8;
  int iStack_bf4;
  long lStack_bf0;
  long *plStack_be8;
  long lStack_be0;
  long lStack_bd8;
  long lStack_bd0;
  byte bStack_bc8;
  undefined *puStack_bc0;
  undefined2 uStack_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined1 auStack_ba0 [364];
  uint uStack_a34;
  undefined *puStack_a30;
  undefined *puStack_a28;
  undefined4 uStack_a20;
  undefined4 uStack_a1c;
  uint auStack_a18 [623];
  undefined8 uStack_5c;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined **ppuStack_38;
  
  lVar11 = (**(code **)(**(long **)(param_1 + 0x20) + 0x568))();
  uVar12 = CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
  if ((*(char *)(lVar11 + 0x4b9) == '\x01') &&
     (lVar11 = (**(code **)(**(long **)(param_1 + 0x20) + 0x568))(),
     *(char *)(lVar11 + 0x4ba) == '\0')) {
    func_0x0412d550(param_2 + 0x22);
    lVar11 = param_2[0x34];
    lVar13 = param_2[0x35];
    func_0x0412d610(param_2 + 0x22);
    iStack_bf8 = (int)lVar11 + 1;
    iStack_bf4 = (int)lVar13 + 1;
    (**(code **)(*param_2 + 0x20))(&lStack_bf0,param_2,&iStack_bf8);
    lVar11 = lStack_bf0;
    func_0x0ca8a1f0(&lStack_be0,*(undefined8 *)(*(long *)(lStack_bf0 + 0x30) + 0x198),
                    lStack_bf0 + 0x50,param_2);
    bVar6 = bStack_bc8;
    if (bStack_bc8 == 1) {
      uVar12 = (**(code **)(**(long **)(param_1 + 0x20) + 0x438))();
      puStack_a30 = &UNK_0f147b18;
      ppuStack_38 = &puStack_a28;
      puStack_a28 = &UNK_0f5356d0;
      uStack_48 = 0x100000000000000;
      uStack_a20 = (undefined4)uVar12;
      uStack_54 = 0;
      uStack_50 = 0;
      lVar13 = 7;
      while( true ) {
        uVar12 = ((ulong)(((uint)(uVar12 >> 0x1e) & 3 ^ (uint)uVar12) * 0x6c078965) + lVar13) - 6;
        uVar8 = (uint)uVar12;
        (&uStack_a34)[lVar13] = uVar8;
        if (lVar13 == 0x193) break;
        uVar8 = (((uint)(uVar12 >> 0x1e) & 3 ^ uVar8) * 0x6c078965 + (int)lVar13) - 5;
        uVar12 = (ulong)uVar8;
        *(uint *)((long)&puStack_a30 + lVar13 * 4) = uVar8;
        lVar13 = lVar13 + 2;
      }
      uStack_5c = 0x18e00000270;
      uStack_40 = 1;
      uStack_a1c = uStack_a20;
      uVar8 = func_0x0ee4a030(ppuStack_38,0);
      uVar9 = func_0x0ee4a030(ppuStack_38,0);
      iVar3 = *(int *)(lVar11 + 0x50);
      iVar4 = *(int *)(lVar11 + 0x54);
      uVar10 = (**(code **)(**(long **)(param_1 + 0x20) + 0x438))();
      ppuVar7 = ppuStack_38;
      if (*(char *)((long)ppuStack_38 + 0x9e7) == '\x01') {
        uVar10 = uVar10 ^ iVar3 * (uVar8 >> 1 | 1) + iVar4 * (uVar9 >> 1 | 1);
        *(uint *)(ppuStack_38 + 1) = uVar10;
        *(undefined2 *)((long)ppuVar7 + 0x9e4) = 0;
        *(undefined4 *)((long)ppuVar7 + 0x9d4) = 0;
        ppuVar7[0x13b] = (undefined *)0x0;
        *(uint *)((long)ppuVar7 + 0xc) = uVar10;
        lVar11 = 5;
        while( true ) {
          uVar12 = ((ulong)((uVar10 >> 0x1e ^ uVar10) * 0x6c078965) + lVar11) - 4;
          uVar8 = (uint)uVar12;
          *(uint *)((long)ppuVar7 + lVar11 * 4 + -4) = uVar8;
          if (lVar11 == 0x191) break;
          uVar10 = (((uint)(uVar12 >> 0x1e) & 3 ^ uVar8) * 0x6c078965 + (int)lVar11) - 3;
          *(uint *)((long)ppuVar7 + lVar11 * 4) = uVar10;
          lVar11 = lVar11 + 2;
        }
        *(undefined8 *)((long)ppuVar7 + 0x9cc) = 0x18e00000270;
      }
      func_0x0c9d0c10(auStack_ba0,param_2[4],param_2[5],param_2,0,1,0,0);
      uStack_bb8 = 0x101;
      uStack_bb0 = _DAT_0f6b3a90;
      uStack_ba8 = 0;
      puStack_bc0 = &UNK_0f474ec0;
      lVar11 = (**(code **)(**(long **)(param_1 + 0x20) + 0x568))();
      lVar13 = func_0x0d2279e0(lVar11 + 0x518,0xf71d600);
      if ((lVar13 == 0) && (lVar13 = func_0x0d2279e0(lVar11 + 0x4f0,0xf71d600), lVar13 == 0)) {
        puVar14 = (undefined *)0x0;
      }
      else {
        puVar14 = (undefined *)0x0;
        if (*(int *)(lVar13 + 0x50) == 6) {
          puVar14 = (undefined *)(lVar13 + 0x38);
        }
      }
      puVar15 = &UNK_01de6224;
      if (puVar14 != (undefined *)0x0) {
        puVar15 = puVar14;
      }
      func_0x0d50a850(&puStack_bc0,auStack_ba0,puVar15,&puStack_a30);
      func_0x0cafd630(lStack_bf0);
      func_0x0c9d0f40(auStack_ba0);
    }
    lVar11 = lStack_be0;
    uVar12 = (ulong)bVar6;
    if (((bStack_bc8 & 1) != 0) && (lVar13 = lStack_bd8, lStack_be0 != 0)) {
      for (; lVar11 != lVar13; lVar13 = lVar13 + -0x20) {
        if (*(char *)(lVar13 + -8) == '\x01') {
          func_0x0412d6b0(*(undefined8 *)(lVar13 + -0x10));
        }
        plVar5 = *(long **)(lVar13 + -0x18);
        if (plVar5 != (long *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          lVar2 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
            func_0x0412c2d0(plVar5);
          }
        }
      }
      lStack_bd8 = lVar11;
      thunk_FUN_0ee326a0(lStack_be0,lStack_bd0 - lStack_be0);
    }
    if (plStack_be8 != (long *)0x0) {
      LOCK();
      plVar5 = plStack_be8 + 1;
      lVar11 = *plVar5;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plStack_be8 + 0x10))(plStack_be8);
        func_0x0412c2d0(plStack_be8);
      }
    }
  }
  return uVar12 & 0xffffffff;
}


