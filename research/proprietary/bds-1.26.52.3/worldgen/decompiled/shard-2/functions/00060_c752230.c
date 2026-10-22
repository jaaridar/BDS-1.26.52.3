/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc852230 (ELF vaddr 0xc752230)
 * Label: VanillaSurfaceBuilders::CappedSurfaceBuilder::vslot3
 * Body:  [[0c852230, 0c8522dc] [0c8bfb60, 0c8bfb98] [0c8bfba0, 0c8bfc91] [0c8bfca0, 0c8bfd1b] [0c8bfd20, 0c8bfe0c] [0c8bfe10, 0c8bfea0]]
 * Ghidra: wg_VanillaSurfaceBuilders__CappedSurfaceBuilder__vslot3
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_VanillaSurfaceBuilders__CappedSurfaceBuilder__vslot3(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  short *psVar4;
  undefined4 *puVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
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
  
  if (*(char *)(param_2 + 3) == '\x01') {
    if ((DAT_0f5573d8 == '\0') && (iVar3 = func_0x04108328(&DAT_0f5573d8), iVar3 != 0)) {
      LOCK();
      UNLOCK();
      _DAT_0f5573d0 = _DAT_0f556458;
      _DAT_0f556458 = _DAT_0f556458 + 1;
      func_0x0410844d(&DAT_0f5573d8);
    }
    for (psVar4 = (short *)*param_2; psVar4 != (short *)param_2[1]; psVar4 = psVar4 + 8) {
      if (*psVar4 == _DAT_0f5573d0) {
        uStack_a38 = *(long *)(psVar4 + 4);
        if (uStack_a38 == 0) {
          return;
        }
        lVar1 = *(long *)(uStack_a38 + 0x10);
        uVar8 = *(uint *)(param_1 + 8);
        for (lVar10 = *(long *)(uStack_a38 + 8); lVar10 != lVar1; lVar10 = lVar10 + 0x10) {
          puVar5 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
          if (puVar5 == (undefined4 *)0x0) {
            func_0x0eec74c0(0x28,0);
          }
          *puVar5 = 1;
          *(undefined8 *)(puVar5 + 2) = 0;
          *(undefined8 *)(puVar5 + 4) = 0;
          *(undefined8 *)(puVar5 + 6) = 0;
          puStack_a30 = &UNK_0f147b18;
          puStack_a28 = &UNK_0f5356d0;
          uStack_48 = 0x100000000000000;
          uStack_54 = 0;
          uStack_50 = 0;
          lVar6 = 7;
          uVar9 = uVar8;
          while( true ) {
            uVar7 = ((ulong)((uVar9 >> 0x1e ^ uVar9) * 0x6c078965) + lVar6) - 6;
            uVar9 = (uint)uVar7;
            *(uint *)((long)&uStack_a38 + lVar6 * 4 + 4) = uVar9;
            if (lVar6 == 0x193) break;
            uVar9 = ((int)lVar6 + ((uint)(uVar7 >> 0x1e) & 3 ^ uVar9) * 0x6c078965) - 5;
            *(uint *)((long)&puStack_a30 + lVar6 * 4) = uVar9;
            lVar6 = lVar6 + 2;
          }
          uStack_5c = 0x18e00000270;
          uStack_40 = 1;
          ppuStack_38 = &puStack_a28;
          uStack_a20 = uVar8;
          uStack_a1c = uVar8;
          func_0x0d341b00(puVar5,&puStack_a30,0,0);
          lVar6 = *(long *)(lVar10 + 8);
          *(undefined4 **)(lVar10 + 8) = puVar5;
          if (lVar6 != 0) {
            lVar2 = *(long *)(lVar6 + 8);
            if (lVar2 != 0) {
              *(long *)(lVar6 + 0x10) = lVar2;
              func_0x0412a280(lVar2,*(long *)(lVar6 + 0x18) - lVar2);
            }
            func_0x0412a280(lVar6,0x28);
          }
          uVar8 = uVar8 + 1;
        }
        lVar1 = *(long *)(uStack_a38 + 0x28);
        for (lVar10 = *(long *)(uStack_a38 + 0x20); lVar10 != lVar1; lVar10 = lVar10 + 0x10) {
          puVar5 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
          if (puVar5 == (undefined4 *)0x0) {
            func_0x0eec74c0(0x28,0);
          }
          *puVar5 = 1;
          *(undefined8 *)(puVar5 + 2) = 0;
          *(undefined8 *)(puVar5 + 4) = 0;
          *(undefined8 *)(puVar5 + 6) = 0;
          puStack_a30 = &UNK_0f147b18;
          puStack_a28 = &UNK_0f5356d0;
          uStack_48 = 0x100000000000000;
          uStack_54 = 0;
          uStack_50 = 0;
          lVar6 = 7;
          uVar9 = uVar8;
          while( true ) {
            uVar7 = ((ulong)((uVar9 >> 0x1e ^ uVar9) * 0x6c078965) + lVar6) - 6;
            uVar9 = (uint)uVar7;
            *(uint *)((long)&uStack_a38 + lVar6 * 4 + 4) = uVar9;
            if (lVar6 == 0x193) break;
            uVar9 = ((int)lVar6 + ((uint)(uVar7 >> 0x1e) & 3 ^ uVar9) * 0x6c078965) - 5;
            *(uint *)((long)&puStack_a30 + lVar6 * 4) = uVar9;
            lVar6 = lVar6 + 2;
          }
          uStack_5c = 0x18e00000270;
          uStack_40 = 1;
          ppuStack_38 = &puStack_a28;
          uStack_a20 = uVar8;
          uStack_a1c = uVar8;
          func_0x0d341b00(puVar5,&puStack_a30,0,0);
          lVar6 = *(long *)(lVar10 + 8);
          *(undefined4 **)(lVar10 + 8) = puVar5;
          if (lVar6 != 0) {
            lVar2 = *(long *)(lVar6 + 8);
            if (lVar2 != 0) {
              *(long *)(lVar6 + 0x10) = lVar2;
              func_0x0412a280(lVar2,*(long *)(lVar6 + 0x18) - lVar2);
            }
            func_0x0412a280(lVar6,0x28);
          }
          uVar8 = uVar8 + 1;
        }
        return;
      }
    }
  }
  return;
}


