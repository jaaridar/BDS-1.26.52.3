/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca741a0 (ELF vaddr 0xc9741a0)
 * Label: callee-of:0xc95ddd0
 * Body:  [[0ca741a0, 0ca7422e] [0ca74230, 0ca7428c] [0ca74290, 0ca74380] [0ca74390, 0ca74447]]
 * Ghidra: FUN_0ca741a0
 */


void FUN_0ca741a0(long *param_1)

{
  long *plVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long *plStack_28;
  
  puVar5 = (undefined8 *)param_1[0x28];
  while (puVar5 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)*puVar5;
    if ((*(byte *)(puVar5 + 2) & 1) != 0) {
      func_0x0412a280(puVar5[4],puVar5[2] & 0xfffffffffffffffe);
    }
    func_0x0412a280(puVar5,0x30);
    puVar5 = puVar6;
  }
  lVar3 = param_1[0x26];
  param_1[0x26] = 0;
  if (lVar3 != 0) {
    func_0x0412a280(lVar3,param_1[0x27] << 3);
  }
  param_1[0x18] = (long)&UNK_0f534768;
  plVar4 = (long *)param_1[0x1a];
  if (plVar4 == (long *)0x0) {
    *(undefined1 *)param_1[0x19] = 0;
  }
  else {
    *(undefined1 *)param_1[0x19] = 0;
    LOCK();
    plVar1 = plVar4 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      func_0x0412c2d0(plVar4);
    }
  }
  lVar3 = param_1[0x22];
  if (lVar3 != 0) {
    lVar8 = param_1[0x23];
    lVar7 = lVar3;
    if (lVar3 != lVar8) {
      do {
        if ((*(byte *)(lVar8 + -0x38) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lVar8 + -0x28),
                          *(ulong *)(lVar8 + -0x38) & 0xfffffffffffffffe);
        }
        lVar8 = lVar8 + -0x38;
      } while (lVar8 != lVar3);
      lVar7 = param_1[0x22];
    }
    param_1[0x23] = lVar3;
    func_0x0412a280(lVar7,param_1[0x24] - lVar7);
  }
  plStack_28 = param_1 + 0x1e;
  FUN_048b0f50(&plStack_28);
  lVar3 = param_1[0x1b];
  if (lVar3 != 0) {
    param_1[0x1c] = lVar3;
    func_0x0412a280(lVar3,param_1[0x1d] - lVar3);
  }
  if ((*(byte *)(param_1 + 0x15) & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 0x12);
  }
  else {
    func_0x0412a280(param_1[0x17],param_1[0x15] & 0xfffffffffffffffe);
    bVar2 = *(byte *)(param_1 + 0x12);
  }
  if ((bVar2 & 1) == 0) {
    puVar5 = (undefined8 *)param_1[9];
  }
  else {
    func_0x0412a280(param_1[0x14],param_1[0x12] & 0xfffffffffffffffe);
    puVar5 = (undefined8 *)param_1[9];
  }
  while (puVar5 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)*puVar5;
    func_0x0412a280(puVar5,0x18);
    puVar5 = puVar6;
  }
  lVar3 = param_1[7];
  param_1[7] = 0;
  if (lVar3 != 0) {
    func_0x0412a280(lVar3,param_1[8] << 3);
  }
  lVar3 = param_1[3];
  if (lVar3 != 0) {
    lVar8 = param_1[4];
    lVar7 = lVar3;
    if (lVar3 != lVar8) {
      do {
        lVar7 = *(long *)(lVar8 + -8);
        *(undefined8 *)(lVar8 + -8) = 0;
        if (lVar7 != 0) {
          func_0x0ca74450(lVar7);
          func_0x0412a280(lVar7,0x70);
        }
        lVar8 = lVar8 + -0x18;
      } while (lVar8 != lVar3);
      lVar7 = param_1[3];
    }
    param_1[4] = lVar3;
    func_0x0412a280(lVar7,param_1[5] - lVar7);
  }
  lVar3 = *param_1;
  if (lVar3 != 0) {
    param_1[1] = lVar3;
    func_0x0412a280(lVar3,param_1[2] - lVar3);
  }
  return;
}


