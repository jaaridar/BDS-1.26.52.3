/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca5ddd0 (ELF vaddr 0xc95ddd0)
 * Label: Dimension::vslot0
 * Body:  [[0ca5ddd0, 0ca5dede] [0ca5dee0, 0ca5e00e] [0ca5e010, 0ca5e282] [0ca5e290, 0ca5e2c6] [0ca5e2d0, 0ca5e48b] [0ca5e490, 0ca5e4ac] [0ca5e4b0, 0ca5e4f6] [0ca5e500, 0ca5e8ee] [0ca5e8f0, 0ca5e9b7]]
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
  
  *param_1 = &UNK_0f3ecb08;
  param_1[1] = &UNK_0f3ecca8;
  param_1[2] = &UNK_0f3ecdb8;
  param_1[7] = &UNK_0f3ecde8;
  puStack_58 = &UNK_0ef44500;
  puStack_50 = &UNK_04889aa0;
  ppuStack_38 = &puStack_58;
  func_0x0ee29460(param_1[0x31],&puStack_58);
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
  func_0x0ee29460(param_1[0x32],&puStack_88);
  if (ppuStack_68 == &puStack_88) {
    lVar7 = 0x20;
  }
  else {
    lVar7 = 0x28;
    if (ppuStack_68 == (undefined **)0x0) {
      lVar7 = param_1[0x35];
      goto joined_r0x0ca5e98c;
    }
  }
  (**(code **)(*ppuStack_68 + lVar7))();
  lVar7 = param_1[0x35];
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
  if (param_1[0x6e] != 0) {
    func_0x0cb069f0(param_1 + 0x65);
  }
  plVar3 = (long *)param_1[100];
  param_1[99] = 0;
  param_1[100] = 0;
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
  plVar3 = (long *)param_1[0x1b];
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
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
  plVar3 = (long *)param_1[0x35];
  param_1[0x35] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  param_1[0x36] = 0;
  lVar7 = param_1[0x93];
  if (lVar7 != 0) {
    lVar9 = param_1[0x94];
    lVar8 = lVar7;
    if (lVar7 != lVar9) {
      do {
        if (*(long *)(lVar9 + -0x10) != 0) {
          func_0x0412c2d0();
        }
        lVar9 = lVar9 + -0x18;
      } while (lVar9 != lVar7);
      lVar8 = param_1[0x93];
    }
    param_1[0x94] = lVar7;
    func_0x0412a280(lVar8,param_1[0x95] - lVar8);
  }
  lVar7 = param_1[0x90];
  if (lVar7 != 0) {
    param_1[0x91] = lVar7;
    func_0x0412a280(lVar7,param_1[0x92] - lVar7);
  }
  lVar7 = param_1[0x8d];
  if (lVar7 != 0) {
    param_1[0x8e] = lVar7;
    func_0x0412a280(lVar7,param_1[0x8f] - lVar7);
  }
  puVar5 = (undefined8 *)param_1[0x8a];
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
  lVar7 = param_1[0x88];
  param_1[0x88] = 0;
  if (lVar7 != 0) {
    func_0x0412a280(lVar7,param_1[0x89] << 3);
  }
  plVar3 = (long *)param_1[0x87];
  param_1[0x87] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  puVar5 = (undefined8 *)param_1[0x84];
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
  lVar7 = param_1[0x82];
  param_1[0x82] = 0;
  if (lVar7 != 0) {
    func_0x0412a280(lVar7,param_1[0x83] << 3);
  }
  plVar3 = (long *)param_1[0x81];
  param_1[0x81] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  lVar7 = param_1[0x80];
  param_1[0x80] = 0;
  if (lVar7 != 0) {
    lStack_90 = lVar7 + 0x18;
    func_0x0cb4a0c0(&lStack_90);
    lStack_90 = lVar7;
    func_0x0cb4a0c0(&lStack_90);
    func_0x0412a280(lVar7,0x38);
  }
  lVar7 = param_1[0x7d];
  if (lVar7 != 0) {
    param_1[0x7e] = lVar7;
    func_0x0412a280(lVar7,param_1[0x7f] - lVar7);
  }
  lVar7 = param_1[0x7c];
  param_1[0x7c] = 0;
  if (lVar7 != 0) {
    func_0x0ca741a0(lVar7 + 0x10);
    func_0x0412a280(lVar7,0x170);
  }
  plVar3 = (long *)param_1[0x7b];
  param_1[0x7b] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  lVar7 = param_1[0x76];
  if (lVar7 != 0) {
    param_1[0x77] = lVar7;
    func_0x0412a280(lVar7,param_1[0x78] - lVar7);
  }
  plVar3 = (long *)param_1[0x75];
  param_1[0x75] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  lVar7 = param_1[0x72];
  param_1[0x72] = 0;
  if (lVar7 != 0) {
    func_0x0caffb10(lVar7);
    func_0x0412a280(lVar7,0xe8);
  }
  FUN_0ca7c290(param_1[0x70]);
  lVar7 = param_1[0x6b];
  if (lVar7 != 0) {
    lVar9 = param_1[0x6c];
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
      lVar8 = param_1[0x6b];
    }
    param_1[0x6c] = lVar7;
    func_0x0412a280(lVar8,param_1[0x6d] - lVar8);
  }
  plVar3 = (long *)param_1[100];
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
  FUN_0ca7c290(param_1[0x61]);
  puVar5 = (undefined8 *)param_1[0x5d];
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
  lVar7 = param_1[0x5b];
  param_1[0x5b] = 0;
  if (lVar7 != 0) {
    func_0x0412a280(lVar7,param_1[0x5c] << 3);
  }
  func_0x04136a00(param_1 + 0x54);
  func_0x04136a00(param_1 + 0x4e);
  puVar5 = (undefined8 *)param_1[0x46];
  while (puVar5 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)*puVar5;
    func_0x0d2ecea0(puVar5 + 3);
    func_0x0412a280(puVar5,0x60);
    puVar5 = puVar4;
  }
  lVar7 = param_1[0x44];
  param_1[0x44] = 0;
  if (lVar7 != 0) {
    func_0x0412a280(lVar7,param_1[0x45] << 3);
  }
  lVar7 = param_1[0x41];
  if (lVar7 != 0) {
    lVar9 = param_1[0x42];
    lVar8 = lVar7;
    if (lVar7 != lVar9) {
      do {
        if (*(long *)(lVar9 + -0x10) != 0) {
          func_0x0412c2d0();
        }
        lVar9 = lVar9 + -0x18;
      } while (lVar9 != lVar7);
      lVar8 = param_1[0x41];
    }
    param_1[0x42] = lVar7;
    func_0x0412a280(lVar8,param_1[0x43] - lVar8);
  }
  puVar5 = (undefined8 *)param_1[0x3e];
  while (puVar5 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)*puVar5;
    if (puVar5[4] != 0) {
      func_0x0412c2d0();
    }
    func_0x0412a280(puVar5,0x30);
    puVar5 = puVar4;
  }
  lVar7 = param_1[0x3c];
  param_1[0x3c] = 0;
  if (lVar7 != 0) {
    func_0x0412a280(lVar7,param_1[0x3d] << 3);
  }
  lVar7 = param_1[0x3a];
  param_1[0x3a] = 0;
  if (lVar7 != 0) {
    lVar9 = *(long *)(lVar7 + 0x110);
    if (lVar9 != 0) {
      *(long *)(lVar7 + 0x118) = lVar9;
      func_0x0412a280(lVar9,*(long *)(lVar7 + 0x120) - lVar9);
    }
    func_0x0d14f080(lVar7 + 8);
    func_0x0412a280(lVar7,0x130);
  }
  lVar7 = param_1[0x39];
  param_1[0x39] = 0;
  if (lVar7 != 0) {
    func_0x0412a280(lVar7,1);
  }
  lVar7 = param_1[0x38];
  param_1[0x38] = 0;
  if (lVar7 != 0) {
    lVar9 = *(long *)(lVar7 + 0x10);
    if (lVar9 != 0) {
      *(long *)(lVar7 + 0x18) = lVar9;
      func_0x0412a280(lVar9,*(long *)(lVar7 + 0x20) - lVar9);
    }
    func_0x0412a280(lVar7,0x30);
  }
  plVar3 = (long *)param_1[0x37];
  param_1[0x37] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = (long *)param_1[0x35];
  param_1[0x35] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = (long *)param_1[0x34];
  param_1[0x34] = 0;
  if (plVar3 != (long *)0x0) {
    lVar7 = plVar3[3];
    if (lVar7 != 0) {
      plVar3[4] = lVar7;
      func_0x0412a280(lVar7,plVar3[5] - lVar7);
    }
    if (((plVar3[2] != *plVar3) || ((int)plVar3[1] != 0)) &&
       (cVar6 = func_0x0eeddcf0(&UNK_014756d5,&UNK_01198d5e,0x25,&UNK_0126e3df,&UNK_013a8ed3),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    func_0x0412a280(plVar3,0x30);
  }
  lVar7 = param_1[0x33];
  param_1[0x33] = 0;
  if (lVar7 != 0) {
    func_0x0412a280(lVar7,1);
  }
  plVar3 = (long *)param_1[0x32];
  param_1[0x32] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = (long *)param_1[0x31];
  param_1[0x31] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = (long *)param_1[0x30];
  param_1[0x30] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if ((*(byte *)(param_1 + 0x2b) & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 0x28);
  }
  else {
    func_0x0412a280(param_1[0x2d],param_1[0x2b] & 0xfffffffffffffffe);
    bVar2 = *(byte *)(param_1 + 0x28);
  }
  if ((bVar2 & 1) == 0) {
    plVar3 = (long *)param_1[0x27];
    param_1[0x27] = 0;
  }
  else {
    func_0x0412a280(param_1[0x2a],param_1[0x28] & 0xfffffffffffffffe);
    plVar3 = (long *)param_1[0x27];
    param_1[0x27] = 0;
  }
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = (long *)param_1[0x26];
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
  plVar3 = (long *)param_1[0x24];
  param_1[0x24] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = (long *)param_1[0x1b];
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
  param_1[0x16] = &UNK_0f45e658;
  if ((ulong)*(uint *)(param_1 + 0x19) != 0xffffffff) {
    (**(code **)(&UNK_0f3ed530 + (ulong)*(uint *)(param_1 + 0x19) * 8))(&lStack_90,param_1 + 0x17);
  }
  *(undefined4 *)(param_1 + 0x19) = 0xffffffff;
  func_0x0ca7c1b0(param_1 + 0xf);
  lVar7 = param_1[0xc];
  if (lVar7 != 0) {
    param_1[0xd] = lVar7;
    func_0x0412a280(lVar7,param_1[0xe] - lVar7);
  }
  if (param_1[0xb] != 0) {
    func_0x0412c2d0();
  }
  param_1[7] = &UNK_0f534768;
  plVar3 = (long *)param_1[9];
  if (plVar3 == (long *)0x0) {
    *(undefined1 *)param_1[8] = 0;
    param_1[2] = &UNK_0f3e5b68;
    bVar2 = *(byte *)(param_1 + 4);
  }
  else {
    *(undefined1 *)param_1[8] = 0;
    LOCK();
    plVar1 = plVar3 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      func_0x0412c2d0(plVar3);
    }
    param_1[2] = &UNK_0f3e5b68;
    bVar2 = *(byte *)(param_1 + 4);
  }
  if ((bVar2 & 1) != 0) {
    func_0x0412a280(param_1[6],param_1[4] & 0xfffffffffffffffe);
  }
  return;
}


