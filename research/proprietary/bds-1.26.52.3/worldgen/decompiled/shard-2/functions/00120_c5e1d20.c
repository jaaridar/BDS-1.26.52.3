/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6e1d20 (ELF vaddr 0xc5e1d20)
 * Label: JigsawBlock::vslot0
 * Body:  [[0c6e1d20, 0c6e1e0b] [0c6e1e10, 0c6e1eb4] [0c6e1ec0, 0c6e1ff0] [0c6e2000, 0c6e205b] [0c6e2060, 0c6e20fe] [0c6e2100, 0c6e2131] [0c6e2140, 0c6e2286] [0c6e2290, 0c6e23cc]]
 * Ghidra: wg_JigsawBlock__vslot0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_JigsawBlock__vslot0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  byte bVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  *param_1 = &UNK_0f3c5330;
  plVar4 = (long *)param_1[0x74];
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      func_0x0412c2d0(plVar4);
    }
  }
  plVar4 = (long *)param_1[0x72];
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      func_0x0412c2d0(plVar4);
    }
  }
  lVar2 = param_1[0x6e];
  if (lVar2 != 0) {
    lVar9 = param_1[0x6f];
    lVar8 = lVar2;
    if (lVar2 != lVar9) {
      do {
        plVar4 = *(long **)(lVar9 + -8);
        *(undefined8 *)(lVar9 + -8) = 0;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 8))();
        }
        lVar9 = lVar9 + -8;
      } while (lVar9 != lVar2);
      lVar8 = param_1[0x6e];
    }
    param_1[0x6f] = lVar2;
    thunk_FUN_0ee326a0(lVar8,param_1[0x70] - lVar8);
  }
  lVar2 = param_1[0x6a];
  if (lVar2 != 0) {
    lVar9 = param_1[0x6b];
    lVar8 = lVar2;
    if (lVar2 != lVar9) {
      do {
        plVar4 = *(long **)(lVar9 + -8);
        if (plVar4 != (long *)0x0) {
          LOCK();
          plVar1 = plVar4 + 1;
          lVar8 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar8 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
            func_0x0412c2d0(plVar4);
          }
        }
        lVar9 = lVar9 + -0x10;
      } while (lVar9 != lVar2);
      lVar8 = param_1[0x6a];
    }
    param_1[0x6b] = lVar2;
    thunk_FUN_0ee326a0(lVar8,param_1[0x6c] - lVar8);
  }
  if (param_1[0x69] != 0) {
    func_0x0412c2d0();
  }
  lVar2 = param_1[100];
  if (lVar2 != 0) {
    param_1[0x65] = lVar2;
    thunk_FUN_0ee326a0(lVar2,param_1[0x66] - lVar2);
  }
  lVar2 = param_1[0x61];
  if (lVar2 != 0) {
    lVar9 = param_1[0x62];
    lVar8 = lVar2;
    if (lVar2 != lVar9) {
      do {
        plVar4 = *(long **)(lVar9 + -8);
        *(undefined8 *)(lVar9 + -8) = 0;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 8))();
        }
        lVar9 = lVar9 + -8;
      } while (lVar9 != lVar2);
      lVar8 = param_1[0x61];
    }
    param_1[0x62] = lVar2;
    thunk_FUN_0ee326a0(lVar8,param_1[99] - lVar8);
  }
  lVar2 = param_1[0x5e];
  if (lVar2 != 0) {
    param_1[0x5f] = lVar2;
    thunk_FUN_0ee326a0(lVar2,param_1[0x60] - lVar2);
  }
  plVar4 = (long *)param_1[0x5c];
  param_1[0x5c] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  lVar2 = param_1[0x5b];
  param_1[0x5b] = 0;
  if (lVar2 != 0) {
    func_0x0c6e2a40(lVar2);
    thunk_FUN_0ee326a0(lVar2,0xf0);
  }
  puVar6 = (undefined8 *)param_1[0x58];
  while (puVar6 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)*puVar6;
    thunk_FUN_0ee326a0(puVar6,0x20);
    puVar6 = puVar5;
  }
  lVar2 = param_1[0x56];
  param_1[0x56] = 0;
  if (lVar2 != 0) {
    thunk_FUN_0ee326a0(lVar2,param_1[0x57] << 3);
  }
  func_0x04136a00(param_1 + 0x4f);
  func_0x04136a00(param_1 + 0x49);
  lVar2 = param_1[0x41];
  if (lVar2 != 0) {
    lVar9 = param_1[0x42];
    lVar8 = lVar2;
    if (lVar2 != lVar9) {
      do {
        plVar4 = *(long **)(lVar9 + -8);
        *(undefined8 *)(lVar9 + -8) = 0;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 8))();
        }
        lVar9 = lVar9 + -8;
      } while (lVar9 != lVar2);
      lVar8 = param_1[0x41];
    }
    param_1[0x42] = lVar2;
    thunk_FUN_0ee326a0(lVar8,param_1[0x43] - lVar8);
  }
  lVar2 = param_1[0x3d];
  if (lVar2 != 0) {
    lVar9 = param_1[0x3e];
    lVar8 = lVar2;
    if (lVar2 != lVar9) {
      do {
        plVar4 = *(long **)(lVar9 + -8);
        *(undefined8 *)(lVar9 + -8) = 0;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 8))();
        }
        lVar9 = lVar9 + -8;
      } while (lVar9 != lVar2);
      lVar8 = param_1[0x3d];
    }
    param_1[0x3e] = lVar2;
    thunk_FUN_0ee326a0(lVar8,param_1[0x3f] - lVar8);
  }
  puVar6 = (undefined8 *)param_1[0x3a];
  while (puVar6 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)*puVar6;
    if ((*(byte *)(puVar6 + 3) & 1) != 0) {
      thunk_FUN_0ee326a0(puVar6[5],puVar6[3] & 0xfffffffffffffffe);
    }
    thunk_FUN_0ee326a0(puVar6,0x40);
    puVar6 = puVar5;
  }
  lVar2 = param_1[0x38];
  param_1[0x38] = 0;
  if (lVar2 != 0) {
    thunk_FUN_0ee326a0(lVar2,param_1[0x39] << 3);
  }
  func_0x0c6e2a10(param_1[0x36]);
  lVar2 = param_1[0x2e];
  if (lVar2 != 0) {
    lVar9 = param_1[0x2f];
    lVar8 = lVar2;
    if (lVar2 != lVar9) {
      do {
        if ((*(byte *)(lVar9 + -0x20) & 1) != 0) {
          thunk_FUN_0ee326a0(*(undefined8 *)(lVar9 + -0x10),
                             *(ulong *)(lVar9 + -0x20) & 0xfffffffffffffffe);
        }
        lVar9 = lVar9 + -0x28;
      } while (lVar9 != lVar2);
      lVar8 = param_1[0x2e];
    }
    param_1[0x2f] = lVar2;
    thunk_FUN_0ee326a0(lVar8,param_1[0x30] - lVar8);
  }
  if (((ulong)param_1[0x2c] >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(param_1[0x2c] & 0xff00ffffffffffff) - 8);
  }
  uVar7 = 0x80000000000000;
  param_1[0x2c] = 0;
  if ((param_1[0x2b] & 0x80000000000000) != 0) {
    uVar7 = (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,(param_1[0x2b] & 0xff00ffffffffffff) - 8);
  }
  param_1[0x2b] = 0;
  if ((*(byte *)(param_1 + 0x22) & 1) == 0) {
    bVar3 = *(byte *)(param_1 + 0x1e);
  }
  else {
    uVar7 = thunk_FUN_0ee326a0(param_1[0x24],param_1[0x22] & 0xfffffffffffffffe);
    bVar3 = *(byte *)(param_1 + 0x1e);
  }
  if ((bVar3 & 1) == 0) {
    bVar3 = *(byte *)(param_1 + 0x1a);
  }
  else {
    uVar7 = thunk_FUN_0ee326a0(param_1[0x20],param_1[0x1e] & 0xfffffffffffffffe);
    bVar3 = *(byte *)(param_1 + 0x1a);
  }
  if ((bVar3 & 1) == 0) {
    bVar3 = *(byte *)(param_1 + 0x16);
  }
  else {
    uVar7 = thunk_FUN_0ee326a0(param_1[0x1c],param_1[0x1a] & 0xfffffffffffffffe);
    bVar3 = *(byte *)(param_1 + 0x16);
  }
  if ((bVar3 & 1) == 0) {
    bVar3 = *(byte *)(param_1 + 0x12);
  }
  else {
    uVar7 = thunk_FUN_0ee326a0(param_1[0x18],param_1[0x16] & 0xfffffffffffffffe);
    bVar3 = *(byte *)(param_1 + 0x12);
  }
  if ((bVar3 & 1) == 0) {
    lVar2 = param_1[0x10];
  }
  else {
    uVar7 = thunk_FUN_0ee326a0(param_1[0x14],param_1[0x12] & 0xfffffffffffffffe);
    lVar2 = param_1[0x10];
  }
  if (lVar2 != 0) {
    uVar7 = func_0x0412c2d0();
  }
  lVar2 = param_1[0xb];
  if (lVar2 != 0) {
    param_1[0xc] = lVar2;
    uVar7 = thunk_FUN_0ee326a0(lVar2,param_1[0xd] - lVar2);
  }
  lVar2 = param_1[8];
  if (lVar2 != 0) {
    lVar9 = param_1[9];
    lVar8 = lVar2;
    if (lVar2 != lVar9) {
      do {
        plVar4 = *(long **)(lVar9 + -8);
        *(undefined8 *)(lVar9 + -8) = 0;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 8))();
        }
        lVar9 = lVar9 + -8;
      } while (lVar9 != lVar2);
      lVar8 = param_1[8];
    }
    param_1[9] = lVar2;
    uVar7 = thunk_FUN_0ee326a0(lVar8,param_1[10] - lVar8);
  }
  lVar2 = param_1[5];
  if (lVar2 != 0) {
    param_1[6] = lVar2;
    uVar7 = thunk_FUN_0ee326a0(lVar2,param_1[7] - lVar2);
  }
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    if (param_1[3] != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1[3]);
    }
    return uVar7;
  }
  return uVar7;
}


