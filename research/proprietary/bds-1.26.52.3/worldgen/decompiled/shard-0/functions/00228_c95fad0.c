/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca5fad0 (ELF vaddr 0xc95fad0)
 * Label: Dimension::vslot0
 * Body:  [[0ca5ddd0, 0ca5dede] [0ca5dee0, 0ca5e00e] [0ca5e010, 0ca5e282] [0ca5e290, 0ca5e2c6] [0ca5e2d0, 0ca5e48b] [0ca5e490, 0ca5e4ac] [0ca5e4b0, 0ca5e4f6] [0ca5e500, 0ca5e8ee] [0ca5e8f0, 0ca5e9b7] [0ca5fad0, 0ca5fad8]]
 * Ghidra: wg_Dimension__vslot0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_Dimension__vslot0(undefined8 *param_1)

{
  long *plVar1;
  byte bVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  char cVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined **ppuStack_68;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined **ppuStack_38;
  
  param_1[-7] = &UNK_0f3ecb08;
  param_1[-6] = &UNK_0f3ecca8;
  param_1[-5] = &UNK_0f3ecdb8;
  *param_1 = &UNK_0f3ecde8;
  puStack_58 = &UNK_0ef44500;
  puStack_50 = &UNK_04889aa0;
  ppuStack_38 = &puStack_58;
  func_0x0ee29460(param_1[0x2a],&puStack_58);
  if (ppuStack_38 == &puStack_58) {
    lVar7 = 0x20;
LAB_0ca5de5b:
    (**(code **)(*ppuStack_38 + lVar7))();
  }
  else {
    lVar7 = 0x28;
    if (ppuStack_38 != (undefined **)0x0) goto LAB_0ca5de5b;
  }
  puStack_88 = &UNK_0ef44500;
  puStack_80 = &UNK_04889aa0;
  ppuStack_68 = &puStack_88;
  func_0x0ee29460(param_1[0x2b],&puStack_88);
  if (ppuStack_68 == &puStack_88) {
    lVar7 = 0x20;
  }
  else {
    lVar7 = 0x28;
    if (ppuStack_68 == (undefined **)0x0) {
      lVar7 = param_1[0x2e];
      goto joined_r0x0ca5e98c;
    }
  }
  (**(code **)(*ppuStack_68 + lVar7))();
  lVar7 = param_1[0x2e];
joined_r0x0ca5e98c:
  if (lVar7 != 0) {
    LOCK();
    *(undefined1 *)(lVar7 + 0x48) = 1;
    UNLOCK();
  }
  func_0x0ca93b00();
  func_0x0412d680(0xf6f9eb8);
  lVar9 = _DAT_0f6f9e98;
  lVar7 = _DAT_0f6f9ea0;
  if (_DAT_0f6f9e98 != 0) {
    for (; lVar9 != lVar7; lVar7 = lVar7 + -0x10) {
      plVar3 = *(long **)(lVar7 + -8);
      *(undefined8 *)(lVar7 + -8) = 0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    _DAT_0f6f9ea0 = lVar9;
    func_0x0412a280(_DAT_0f6f9e98,_DAT_0f6f9ea8 - _DAT_0f6f9e98);
  }
  _DAT_0f6f9e98 = 0;
  _DAT_0f6f9ea0 = 0;
  _DAT_0f6f9ea8 = 0;
  func_0x0412d6b0(0xf6f9eb8);
  if (param_1[0x67] != 0) {
    func_0x0cb069f0(param_1 + 0x5e);
  }
  plVar3 = (long *)param_1[0x5d];
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      func_0x0412c2d0(plVar3);
    }
  }
  plVar3 = (long *)param_1[0x14];
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      func_0x0412c2d0(plVar3);
    }
  }
  plVar3 = (long *)param_1[0x2e];
  param_1[0x2e] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  param_1[0x2f] = 0;
  lVar7 = param_1[0x8c];
  if (lVar7 != 0) {
    lVar9 = param_1[0x8d];
    lVar8 = lVar7;
    if (lVar7 != lVar9) {
      do {
        if (*(long *)(lVar9 + -0x10) != 0) {
          func_0x0412c2d0();
        }
        lVar9 = lVar9 + -0x18;
      } while (lVar9 != lVar7);
      lVar8 = param_1[0x8c];
    }
    param_1[0x8d] = lVar7;
    func_0x0412a280(lVar8,param_1[0x8e] - lVar8);
  }
  lVar7 = param_1[0x89];
  if (lVar7 != 0) {
    param_1[0x8a] = lVar7;
    func_0x0412a280(lVar7,param_1[0x8b] - lVar7);
  }
  lVar7 = param_1[0x86];
  if (lVar7 != 0) {
    param_1[0x87] = lVar7;
    func_0x0412a280(lVar7,param_1[0x88] - lVar7);
  }
  puVar5 = (undefined8 *)param_1[0x83];
  while (puVar5 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)*puVar5;
    lVar7 = puVar5[3];
    if (lVar7 != 0) {
      puVar5[4] = lVar7;
      func_0x0412a280(lVar7,puVar5[5] - lVar7);
    }
    func_0x0412a280(puVar5,0x30);
    puVar5 = puVar4;
  }
  lVar7 = param_1[0x81];
  param_1[0x81] = 0;
  if (lVar7 != 0) {
    func_0x0412a280(lVar7,param_1[0x82] << 3);
  }
  plVar3 = (long *)param_1[0x80];
  param_1[0x80] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  puVar5 = (undefined8 *)param_1[0x7d];
  while (puVar5 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)*puVar5;
    lVar7 = puVar5[7];
    if (lVar7 != 0) {
      puVar5[8] = lVar7;
      func_0x0412a280(lVar7,puVar5[9] - lVar7);
    }
    lVar7 = puVar5[4];
    if (lVar7 != 0) {
      puVar5[5] = lVar7;
      func_0x0412a280(lVar7,puVar5[6] - lVar7);
    }
    func_0x0412a280(puVar5,0x50);
    puVar5 = puVar4;
  }
  lVar7 = param_1[0x7b];
  param_1[0x7b] = 0;
  if (lVar7 != 0) {
    func_0x0412a280(lVar7,param_1[0x7c] << 3);
  }
  plVar3 = (long *)param_1[0x7a];
  param_1[0x7a] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  lVar7 = param_1[0x79];
  param_1[0x79] = 0;
  if (lVar7 != 0) {
    lStack_90 = lVar7 + 0x18;
    func_0x0cb4a0c0(&lStack_90);
    lStack_90 = lVar7;
    func_0x0cb4a0c0(&lStack_90);
    func_0x0412a280(lVar7,0x38);
  }
  lVar7 = param_1[0x76];
  if (lVar7 != 0) {
    param_1[0x77] = lVar7;
    func_0x0412a280(lVar7,param_1[0x78] - lVar7);
  }
  lVar7 = param_1[0x75];
  param_1[0x75] = 0;
  if (lVar7 != 0) {
    func_0x0ca741a0(lVar7 + 0x10);
    func_0x0412a280(lVar7,0x170);
  }
  plVar3 = (long *)param_1[0x74];
  param_1[0x74] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  lVar7 = param_1[0x6f];
  if (lVar7 != 0) {
    param_1[0x70] = lVar7;
    func_0x0412a280(lVar7,param_1[0x71] - lVar7);
  }
  plVar3 = (long *)param_1[0x6e];
  param_1[0x6e] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  lVar7 = param_1[0x6b];
  param_1[0x6b] = 0;
  if (lVar7 != 0) {
    func_0x0caffb10(lVar7);
    func_0x0412a280(lVar7,0xe8);
  }
  func_0x0ca7c290(param_1[0x69]);
  lVar7 = param_1[100];
  if (lVar7 != 0) {
    lVar9 = param_1[0x65];
    lVar8 = lVar7;
    if (lVar7 != lVar9) {
      do {
        lVar8 = *(long *)(lVar9 + -8);
        *(undefined8 *)(lVar9 + -8) = 0;
        if (lVar8 != 0) {
          LOCK();
          plVar3 = (long *)(*(long *)(lVar8 + 0x30) + 0x370);
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          func_0x0cadbac0(lVar8);
          func_0x0412a280(lVar8,0x18b0);
        }
        lVar9 = lVar9 + -8;
      } while (lVar9 != lVar7);
      lVar8 = param_1[100];
    }
    param_1[0x65] = lVar7;
    func_0x0412a280(lVar8,param_1[0x66] - lVar8);
  }
  plVar3 = (long *)param_1[0x5d];
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      func_0x0412c2d0(plVar3);
    }
  }
  func_0x0ca7c290(param_1[0x5a]);
  puVar5 = (undefined8 *)param_1[0x56];
  while (puVar5 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)*puVar5;
    lVar7 = puVar5[3];
    if (lVar7 != 0) {
      lVar9 = puVar5[4];
      lVar8 = lVar7;
      if (lVar7 != lVar9) {
        do {
          plVar3 = *(long **)(lVar9 + -8);
          *(undefined8 *)(lVar9 + -8) = 0;
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 8))();
          }
          lVar9 = lVar9 + -8;
        } while (lVar9 != lVar7);
        lVar8 = puVar5[3];
      }
      puVar5[4] = lVar7;
      func_0x0412a280(lVar8,puVar5[5] - lVar8);
    }
    func_0x0412a280(puVar5,0x30);
    puVar5 = puVar4;
  }
  lVar7 = param_1[0x54];
  param_1[0x54] = 0;
  if (lVar7 != 0) {
    func_0x0412a280(lVar7,param_1[0x55] << 3);
  }
  func_0x04136a00(param_1 + 0x4d);
  func_0x04136a00(param_1 + 0x47);
  puVar5 = (undefined8 *)param_1[0x3f];
  while (puVar5 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)*puVar5;
    func_0x0d2ecea0(puVar5 + 3);
    func_0x0412a280(puVar5,0x60);
    puVar5 = puVar4;
  }
  lVar7 = param_1[0x3d];
  param_1[0x3d] = 0;
  if (lVar7 != 0) {
    func_0x0412a280(lVar7,param_1[0x3e] << 3);
  }
  lVar7 = param_1[0x3a];
  if (lVar7 != 0) {
    lVar9 = param_1[0x3b];
    lVar8 = lVar7;
    if (lVar7 != lVar9) {
      do {
        if (*(long *)(lVar9 + -0x10) != 0) {
          func_0x0412c2d0();
        }
        lVar9 = lVar9 + -0x18;
      } while (lVar9 != lVar7);
      lVar8 = param_1[0x3a];
    }
    param_1[0x3b] = lVar7;
    func_0x0412a280(lVar8,param_1[0x3c] - lVar8);
  }
  puVar5 = (undefined8 *)param_1[0x37];
  while (puVar5 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)*puVar5;
    if (puVar5[4] != 0) {
      func_0x0412c2d0();
    }
    func_0x0412a280(puVar5,0x30);
    puVar5 = puVar4;
  }
  lVar7 = param_1[0x35];
  param_1[0x35] = 0;
  if (lVar7 != 0) {
    func_0x0412a280(lVar7,param_1[0x36] << 3);
  }
  lVar7 = param_1[0x33];
  param_1[0x33] = 0;
  if (lVar7 != 0) {
    lVar9 = *(long *)(lVar7 + 0x110);
    if (lVar9 != 0) {
      *(long *)(lVar7 + 0x118) = lVar9;
      func_0x0412a280(lVar9,*(long *)(lVar7 + 0x120) - lVar9);
    }
    func_0x0d14f080(lVar7 + 8);
    func_0x0412a280(lVar7,0x130);
  }
  lVar7 = param_1[0x32];
  param_1[0x32] = 0;
  if (lVar7 != 0) {
    func_0x0412a280(lVar7,1);
  }
  lVar7 = param_1[0x31];
  param_1[0x31] = 0;
  if (lVar7 != 0) {
    lVar9 = *(long *)(lVar7 + 0x10);
    if (lVar9 != 0) {
      *(long *)(lVar7 + 0x18) = lVar9;
      func_0x0412a280(lVar9,*(long *)(lVar7 + 0x20) - lVar9);
    }
    func_0x0412a280(lVar7,0x30);
  }
  plVar3 = (long *)param_1[0x30];
  param_1[0x30] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = (long *)param_1[0x2e];
  param_1[0x2e] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = (long *)param_1[0x2d];
  param_1[0x2d] = 0;
  if (plVar3 != (long *)0x0) {
    lVar7 = plVar3[3];
    if (lVar7 != 0) {
      plVar3[4] = lVar7;
      func_0x0412a280(lVar7,plVar3[5] - lVar7);
    }
    if (((plVar3[2] != *plVar3) || ((int)plVar3[1] != 0)) &&
       (cVar6 = FUN_0eeddcf0(&UNK_014756d5,&UNK_01198d5e,0x25,&UNK_0126e3df,&UNK_013a8ed3),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    func_0x0412a280(plVar3,0x30);
  }
  lVar7 = param_1[0x2c];
  param_1[0x2c] = 0;
  if (lVar7 != 0) {
    func_0x0412a280(lVar7,1);
  }
  plVar3 = (long *)param_1[0x2b];
  param_1[0x2b] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = (long *)param_1[0x2a];
  param_1[0x2a] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = (long *)param_1[0x29];
  param_1[0x29] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if ((*(byte *)(param_1 + 0x24) & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 0x21);
  }
  else {
    func_0x0412a280(param_1[0x26],param_1[0x24] & 0xfffffffffffffffe);
    bVar2 = *(byte *)(param_1 + 0x21);
  }
  if ((bVar2 & 1) == 0) {
    plVar3 = (long *)param_1[0x20];
    param_1[0x20] = 0;
  }
  else {
    func_0x0412a280(param_1[0x23],param_1[0x21] & 0xfffffffffffffffe);
    plVar3 = (long *)param_1[0x20];
    param_1[0x20] = 0;
  }
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = (long *)param_1[0x1f];
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      func_0x0412c2d0(plVar3);
    }
  }
  plVar3 = (long *)param_1[0x1d];
  param_1[0x1d] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = (long *)param_1[0x14];
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      func_0x0412c2d0(plVar3);
    }
  }
  param_1[0xf] = &UNK_0f45e658;
  if ((ulong)*(uint *)(param_1 + 0x12) != 0xffffffff) {
    (**(code **)(&UNK_0f3ed530 + (ulong)*(uint *)(param_1 + 0x12) * 8))(&lStack_90,param_1 + 0x10);
  }
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  func_0x0ca7c1b0(param_1 + 8);
  lVar7 = param_1[5];
  if (lVar7 != 0) {
    param_1[6] = lVar7;
    func_0x0412a280(lVar7,param_1[7] - lVar7);
  }
  if (param_1[4] != 0) {
    func_0x0412c2d0();
  }
  *param_1 = &UNK_0f534768;
  plVar3 = (long *)param_1[2];
  if (plVar3 == (long *)0x0) {
    *(undefined1 *)param_1[1] = 0;
    param_1[-5] = &UNK_0f3e5b68;
    bVar2 = *(byte *)(param_1 + -3);
  }
  else {
    *(undefined1 *)param_1[1] = 0;
    LOCK();
    plVar1 = plVar3 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      func_0x0412c2d0(plVar3);
    }
    param_1[-5] = &UNK_0f3e5b68;
    bVar2 = *(byte *)(param_1 + -3);
  }
  if ((bVar2 & 1) != 0) {
    func_0x0412a280(param_1[-1],param_1[-3] & 0xfffffffffffffffe);
  }
  return;
}


