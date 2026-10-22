/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xee59d80 (ELF vaddr 0xed59d80)
 * Label: caller-of-callee
 * Body:  [[0ee59d80, 0ee5a431] [0ee5a463, 0ee5a527]]
 * Ghidra: FUN_0ee59d80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0ee59d80(undefined8 *param_1,undefined4 param_2,undefined8 *param_3,char param_4,
                 undefined1 param_5,long *param_6)

{
  long *plVar1;
  char cVar2;
  ulong uVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  bool bVar14;
  ulong uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 *puStack_4d8;
  undefined8 *puStack_4d0;
  long lStack_4c8;
  ulong uStack_4c0;
  undefined8 uStack_4b8;
  undefined *puStack_4b0;
  undefined8 uStack_4a8;
  undefined4 uStack_4a0;
  undefined4 uStack_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined1 auStack_480 [64];
  byte bStack_440;
  undefined1 auStack_438 [1024];
  undefined8 uStack_38;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_0f536530;
  puVar7 = param_1 + 3;
  func_0x0412d6c0(puVar7);
  *(undefined8 *)((long)param_1 + 0x4a) = 0;
  *(undefined8 *)((long)param_1 + 0x52) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = param_2;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  uVar9 = *param_3;
  uVar3 = param_3[1];
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  puStack_4d0 = puVar7;
  if (uVar3 < 0xfffffffffffffff8) {
    if (uVar3 < 0x17) {
      *(char *)(param_1 + 0x2e) = (char)uVar3 * '\x02';
      lVar6 = (long)param_1 + 0x171;
      if (uVar3 != 0) goto LAB_0ee59ee7;
    }
    else {
      uVar11 = 0x1a;
      if ((uVar3 | 7) != 0x17) {
        uVar11 = (uVar3 | 7) + 1;
      }
      lVar6 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar11);
      if (lVar6 == 0) {
        func_0x0eec74c0(uVar11,0);
      }
      param_1[0x30] = lVar6;
      param_1[0x2e] = uVar11 | 1;
      param_1[0x2f] = uVar3;
LAB_0ee59ee7:
      func_0x0eee2ee0(lVar6,uVar9,uVar3);
    }
    *(undefined1 *)(lVar6 + uVar3) = 0;
    *(undefined4 *)(param_1 + 0x31) = 0;
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    *(undefined8 *)((long)param_1 + 0x199) = 0;
    *(undefined8 *)((long)param_1 + 0x1a1) = 0;
    puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar7 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = &UNK_0ef40f38;
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    param_1[0x3c] = puVar7 + 3;
    param_1[0x3d] = puVar7;
    *(undefined1 *)(param_1 + 0x3e) = 0;
    param_1[0x3f] = 0;
    param_1[0x40] = 0;
    *(undefined1 *)(param_1 + 0x41) = param_5;
    puStack_4d8 = param_1 + 0x36;
    if (param_4 != '\0') {
      puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar7 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x80,0);
      }
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = &UNK_0f5378d0;
      puVar7[0xb] = 0;
      puVar7[0xc] = 0;
      puVar7[3] = 0;
      puVar7[4] = 0;
      puVar7[5] = 0;
      puVar7[6] = 0;
      puVar7[7] = 0;
      puVar7[8] = 0;
      puVar7[9] = 0;
      puVar7[10] = 0;
      *(undefined4 *)(puVar7 + 0xc) = 0x3f800000;
      puVar7[0xe] = 0;
      puVar7[0xf] = 0;
      puVar7[0xd] = puVar7 + 0xe;
      param_1[0x3f] = puVar7 + 3;
      param_1[0x40] = puVar7;
    }
    uVar9 = 0;
    func_0x0eee2dd0(auStack_438,0,0x408);
    if (param_3[1] != 0) {
      if (DAT_0f7b8fb8 == '\0') goto LAB_0ee5a3c7;
      goto LAB_0ee5a05c;
    }
  }
  else {
    FUN_04882e30();
LAB_0ee5a3c7:
    iVar5 = func_0x04108328(&DAT_0f7b8fb8);
    if (iVar5 != 0) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      func_0x0410844d(&DAT_0f7b8fb8);
    }
LAB_0ee5a05c:
    uStack_498 = *(undefined4 *)param_3;
    uStack_494 = *(undefined4 *)((long)param_3 + 4);
    uStack_490 = *(undefined4 *)(param_3 + 1);
    uStack_48c = *(undefined4 *)((long)param_3 + 0xc);
    (**(code **)(_DAT_0f7b8f98 + 0x178))(auStack_480,&DAT_0f7b8f98,auStack_438,&uStack_498);
    uStack_4b8 = 0x4a7a5ad43800ae0d;
    puStack_4b0 = &UNK_0140f690;
    uStack_4a8 = 1;
    uStack_4a0 = 0x5b;
    if (bStack_440 == 0) {
      uStack_4f8 = 0;
      uStack_4f0 = 0;
      uStack_4e8 = 0;
      func_0x0eedeb80(2,0x2d,auStack_480,&uStack_4f8,&uStack_4b8);
      if ((uStack_4f8 & 1) != 0) {
        func_0x0412a280(uStack_4e8,uStack_4f8 & 0xfffffffffffffffe);
      }
    }
    uVar9 = uStack_38;
    if ((bStack_440 & 1) == 0) {
      func_0x048e6d60(auStack_480);
      uVar9 = uStack_38;
    }
  }
  func_0x0412f5e0(param_1 + 0x1f,auStack_438,uVar9);
  lVar6 = *param_6;
  if (lVar6 == 0) {
    bVar14 = (*(byte *)(param_1 + 0x1f) & 1) != 0;
    lStack_4c8 = (long)param_1 + 0xf9;
    if (bVar14) {
      lStack_4c8 = param_1[0x21];
    }
    uStack_4c0 = (ulong)(*(byte *)(param_1 + 0x1f) >> 1);
    if (bVar14) {
      uStack_4c0 = param_1[0x20];
    }
    func_0x0ee599d0(auStack_480,param_6,&lStack_4c8);
    if (bStack_440 == 0) {
      func_0x048e6d60(auStack_480);
    }
    lVar6 = *param_6;
  }
  lVar13 = param_6[1];
  *param_6 = 0;
  param_6[1] = 0;
  param_1[0x1c] = lVar6;
  plVar4 = (long *)param_1[0x1d];
  param_1[0x1d] = lVar13;
  if (plVar4 == (long *)0x0) {
LAB_0ee5a1fa:
    cVar2 = *(char *)(param_1 + 0x41);
  }
  else {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 != 0) goto LAB_0ee5a1fa;
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_0412c2d0(plVar4);
    cVar2 = *(char *)(param_1 + 0x41);
  }
  if (cVar2 == '\x01') {
    func_0x0ee52100(0xf7b8ef8,param_1);
  }
  func_0x0412d680(0xf7b8f58);
  lVar6 = _DAT_0f7b8f80;
  if (_DAT_0f7b8f88 < _DAT_0f7b8f90) {
    *_DAT_0f7b8f88 = param_1 + 0x14;
    puVar12 = _DAT_0f7b8f88 + 1;
LAB_0ee5a339:
    _DAT_0f7b8f88 = puVar12;
    func_0x0412d6b0(0xf7b8f58);
    return;
  }
  lVar13 = (long)_DAT_0f7b8f88 - _DAT_0f7b8f80;
  uVar3 = (lVar13 >> 3) + 1;
  if (uVar3 >> 0x3d == 0) {
    uVar10 = (long)_DAT_0f7b8f90 - _DAT_0f7b8f80;
    uVar11 = (long)uVar10 >> 2;
    if ((ulong)((long)uVar10 >> 2) <= uVar3) {
      uVar11 = uVar3;
    }
    if (0x7ffffffffffffff7 < uVar10) {
      uVar11 = 0x1fffffffffffffff;
    }
    if (uVar11 < 0x2000000000000000) {
      lVar8 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
      if (lVar8 == 0) {
        func_0x0eec74c0(uVar11 * 8,0);
      }
      puVar7 = (undefined8 *)(uVar11 * 8 + lVar8);
      *(undefined8 **)(lVar8 + lVar13) = param_1 + 0x14;
      puVar12 = (undefined8 *)(lVar13 + lVar8 + 8);
      lVar8 = lVar13 + lVar8 + (lVar13 >> 3) * -8;
      func_0x0eee2f00(lVar8,lVar6,lVar13);
      _DAT_0f7b8f80 = lVar8;
      _DAT_0f7b8f90 = puVar7;
      if (lVar6 != 0) {
        _DAT_0f7b8f88 = puVar12;
        func_0x0412a280(lVar6,uVar10);
      }
      goto LAB_0ee5a339;
    }
  }
  else {
    func_0x0ee992e0();
  }
  uVar9 = func_0x04882eb0();
  func_0x041084d6(&DAT_0f7b8fb8);
  func_0x0ee4bcb0(param_1 + 0x3f);
  func_0x0ee5a540(puStack_4d8);
  func_0x0ee51930(param_1 + 0x29);
  do {
    func_0x0ee5a590(param_1 + 0x25);
    lVar6 = param_1[0x22];
    if (lVar6 != 0) {
      param_1[0x23] = lVar6;
      func_0x0412a280(lVar6,param_1[0x24] - lVar6);
    }
    if ((*(byte *)(param_1 + 0x1f) & 1) != 0) {
      func_0x0412a280(param_1[0x21],param_1[0x1f] & 0xfffffffffffffffe);
    }
    func_0x048e1080(param_1 + 0x1c);
    lVar6 = param_1[8];
    if (lVar6 != 0) {
      param_1[9] = lVar6;
      func_0x0412a280(lVar6,param_1[10] - lVar6);
    }
    func_0x0412d760(puStack_4d0);
    if (param_1[2] != 0) {
      FUN_0412c2d0();
    }
    uVar9 = func_0x0eee2d70(uVar9);
  } while( true );
}


