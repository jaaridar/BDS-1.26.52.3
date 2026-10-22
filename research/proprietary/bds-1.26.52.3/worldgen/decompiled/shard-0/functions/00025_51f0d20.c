/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x52f0d20 (ELF vaddr 0x51f0d20)
 * Label: VanillaSurfaceBuilders::LegacyMesaSurfaceBuilder::vslot2
 * Body:  [[052f0d20, 052f10aa] [052f10b0, 052f1124] [052f1130, 052f11b0] [052f11c0, 052f1237] [052f1240, 052f12e8]]
 * Ghidra: wg_VanillaSurfaceBuilders__LegacyMesaSurfaceBuilder__vslot2
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_VanillaSurfaceBuilders__LegacyMesaSurfaceBuilder__vslot2(long param_1,uint param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  uint uStack_1434;
  undefined *puStack_1430;
  undefined *puStack_1428;
  uint uStack_1420;
  uint uStack_141c;
  uint auStack_1418 [623];
  undefined8 uStack_a5c;
  undefined4 uStack_a54;
  undefined8 uStack_a50;
  undefined8 uStack_a48;
  undefined1 uStack_a40;
  undefined8 uStack_a38;
  undefined *puStack_a30;
  undefined *puStack_a28;
  uint uStack_a20;
  uint uStack_a1c;
  uint auStack_a18 [623];
  undefined8 uStack_5c;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined **ppuStack_38;
  
  puStack_a30 = &UNK_0f147b18;
  ppuStack_38 = &puStack_a28;
  puStack_a28 = &UNK_0f5356d0;
  uStack_48 = 0x100000000000000;
  uStack_54 = 0;
  uStack_50 = 0;
  lVar11 = 7;
  uVar12 = param_2;
  while( true ) {
    uVar14 = ((ulong)((uVar12 >> 0x1e ^ uVar12) * 0x6c078965) + lVar11) - 6;
    uVar12 = (uint)uVar14;
    *(uint *)((long)&uStack_a38 + lVar11 * 4 + 4) = uVar12;
    if (lVar11 == 0x193) break;
    uVar12 = (((uint)(uVar14 >> 0x1e) & 3 ^ uVar12) * 0x6c078965 + (int)lVar11) - 5;
    *(uint *)((long)&puStack_a30 + lVar11 * 4) = uVar12;
    lVar11 = lVar11 + 2;
  }
  uStack_5c = 0x18e00000270;
  uStack_40 = 1;
  uStack_a20 = param_2;
  uStack_a1c = param_2;
  puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar10 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  *puVar10 = 4;
  *(undefined8 *)(puVar10 + 2) = 0;
  *(undefined8 *)(puVar10 + 4) = 0;
  *(undefined8 *)(puVar10 + 6) = 0;
  func_0x0d3430a0(puVar10,&puStack_a30,0);
  lVar11 = *(long *)(param_1 + 0x48);
  *(undefined4 **)(param_1 + 0x48) = puVar10;
  if (lVar11 != 0) {
    lVar1 = *(long *)(lVar11 + 8);
    if (lVar1 != 0) {
      *(long *)(lVar11 + 0x10) = lVar1;
      func_0x0412a280(lVar1,*(long *)(lVar11 + 0x18) - lVar1);
    }
    func_0x0412a280(lVar11,0x28);
  }
  puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar10 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  *puVar10 = 1;
  *(undefined8 *)(puVar10 + 2) = 0;
  *(undefined8 *)(puVar10 + 4) = 0;
  *(undefined8 *)(puVar10 + 6) = 0;
  func_0x0d3430a0(puVar10,&puStack_a30,0);
  lVar11 = *(long *)(param_1 + 0x50);
  *(undefined4 **)(param_1 + 0x50) = puVar10;
  if (lVar11 != 0) {
    lVar1 = *(long *)(lVar11 + 8);
    if (lVar1 != 0) {
      *(long *)(lVar11 + 0x10) = lVar1;
      func_0x0412a280(lVar1,*(long *)(lVar11 + 0x18) - lVar1);
    }
    func_0x0412a280(lVar11,0x28);
  }
  puStack_1430 = &UNK_0f147b18;
  uStack_a38 = &puStack_1428;
  puStack_1428 = &UNK_0f5356d0;
  uStack_a48 = 0x100000000000000;
  uStack_a54 = 0;
  uStack_a50 = 0;
  lVar11 = 7;
  uVar12 = param_2;
  while( true ) {
    uVar14 = ((ulong)((uVar12 >> 0x1e ^ uVar12) * 0x6c078965) + lVar11) - 6;
    uVar12 = (uint)uVar14;
    (&uStack_1434)[lVar11] = uVar12;
    if (lVar11 == 0x193) break;
    uVar12 = ((int)lVar11 + ((uint)(uVar14 >> 0x1e) & 3 ^ uVar12) * 0x6c078965) - 5;
    *(uint *)((long)&puStack_1430 + lVar11 * 4) = uVar12;
    lVar11 = lVar11 + 2;
  }
  uStack_a5c = 0x18e00000270;
  uStack_a40 = 1;
  uStack_1420 = param_2;
  uStack_141c = param_2;
  puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar10 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  *puVar10 = 1;
  *(undefined8 *)(puVar10 + 2) = 0;
  *(undefined8 *)(puVar10 + 4) = 0;
  *(undefined8 *)(puVar10 + 6) = 0;
  func_0x0d3430a0(puVar10,&puStack_1430,0);
  lVar11 = *(long *)(param_1 + 0x58);
  *(undefined4 **)(param_1 + 0x58) = puVar10;
  if (lVar11 != 0) {
    lVar1 = *(long *)(lVar11 + 8);
    if (lVar1 != 0) {
      *(long *)(lVar11 + 0x10) = lVar1;
      func_0x0412a280(lVar1,*(long *)(lVar11 + 0x18) - lVar1);
    }
    func_0x0412a280(lVar11,0x28);
  }
  uVar5 = _UNK_014e971c;
  uVar4 = _UNK_014e9718;
  uVar3 = _UNK_014e9714;
  uVar2 = _DAT_014e9710;
  lVar11 = param_1 + 8;
  *(undefined4 *)(param_1 + 0x38) = _DAT_014e9710;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  *(undefined4 *)(param_1 + 0x40) = uVar4;
  *(undefined4 *)(param_1 + 0x44) = uVar5;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  *(undefined4 *)(param_1 + 0x30) = uVar4;
  *(undefined4 *)(param_1 + 0x34) = uVar5;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  *(undefined4 *)(param_1 + 0x20) = uVar4;
  *(undefined4 *)(param_1 + 0x24) = uVar5;
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  *(undefined4 *)(param_1 + 0x14) = uVar5;
  iVar9 = 0;
  do {
    iVar7 = (**(code **)(puStack_1430 + 0x18))(&puStack_1430,5);
    iVar8 = iVar7 + iVar9 + 1;
    if (0x3f < iVar8) break;
    *(undefined1 *)(lVar11 + iVar8) = 1;
    iVar9 = iVar7 + iVar9 + 2;
  } while (iVar8 != 0x3f);
  iVar9 = (**(code **)(puStack_1430 + 0x18))(&puStack_1430,4);
  iVar9 = iVar9 + 2;
  if (iVar9 != 0) {
    do {
      uVar12 = (**(code **)(puStack_1430 + 0x18))(&puStack_1430,3);
      iVar7 = (**(code **)(puStack_1430 + 0x18))(&puStack_1430,0x40);
      if (-1 < (int)uVar12 && iVar7 < 0x40) {
        uVar13 = 0x3fU - iVar7;
        if (uVar12 < 0x3fU - iVar7) {
          uVar13 = uVar12;
        }
        func_0x0eee2dd0(iVar7 + lVar11,4,uVar13 + 1);
      }
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  iVar9 = (**(code **)(puStack_1430 + 0x18))(&puStack_1430,4);
  iVar9 = iVar9 + 2;
  if (iVar9 != 0) {
    do {
      iVar7 = (**(code **)(puStack_1430 + 0x18))(&puStack_1430,3);
      iVar8 = (**(code **)(puStack_1430 + 0x18))(&puStack_1430,0x40);
      if (-2 < iVar7 && iVar8 < 0x40) {
        uVar12 = iVar7 + 1U;
        if (0x3fU - iVar8 < iVar7 + 1U) {
          uVar12 = 0x3fU - iVar8;
        }
        func_0x0eee2dd0(iVar8 + lVar11,0xc,(ulong)uVar12 + 1);
      }
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  iVar9 = (**(code **)(puStack_1430 + 0x18))(&puStack_1430,4);
  iVar9 = iVar9 + 2;
  if (iVar9 != 0) {
    do {
      uVar12 = (**(code **)(puStack_1430 + 0x18))(&puStack_1430,3);
      iVar7 = (**(code **)(puStack_1430 + 0x18))(&puStack_1430,0x40);
      if (-1 < (int)uVar12 && iVar7 < 0x40) {
        uVar13 = 0x3fU - iVar7;
        if (uVar12 < 0x3fU - iVar7) {
          uVar13 = uVar12;
        }
        func_0x0eee2dd0(iVar7 + lVar11,0xe,uVar13 + 1);
      }
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  iVar9 = (**(code **)(puStack_1430 + 0x18))(&puStack_1430,3);
  iVar9 = iVar9 + 3;
  if (iVar9 != 0) {
    uVar12 = 0;
    do {
      iVar7 = (**(code **)(puStack_1430 + 0x18))(&puStack_1430,0x10);
      iVar7 = uVar12 + iVar7;
      uVar12 = iVar7 + 4;
      if ((int)uVar12 < 0x40) {
        *(undefined1 *)(lVar11 + (int)uVar12) = 0;
        if (1 < (int)uVar12) {
          cVar6 = (**(code **)(puStack_1430 + 0x28))(&puStack_1430);
          if (cVar6 != '\0') {
            *(undefined1 *)(lVar11 + (ulong)(iVar7 + 3)) = 8;
          }
          if (0x3e < uVar12) goto LAB_052f1240;
        }
        cVar6 = (**(code **)(puStack_1430 + 0x28))(&puStack_1430);
        if (cVar6 != '\0') {
          *(undefined1 *)((long)(int)uVar12 + 1 + lVar11) = 8;
        }
      }
LAB_052f1240:
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  return;
}


