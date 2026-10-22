/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x535a240 (ELF vaddr 0x525a240)
 * Label: string:minecraft:noise_gradient
 * Body:  [[0535a240, 0535a3ec] [0535a3f0, 0535a496] [0535a4a0, 0535a4ce] [0535a4d0, 0535a65a]]
 * Ghidra: FUN_0535a240
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_0535a240(long param_1,long *param_2)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  long *plVar7;
  byte bVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  byte *pbVar13;
  bool bVar14;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined4 *puStack_88;
  byte bStack_78;
  undefined4 uStack_77;
  uint uStack_73;
  undefined4 uStack_6f;
  undefined2 uStack_6b;
  undefined1 uStack_69;
  undefined1 uStack_68;
  undefined6 uStack_67;
  undefined1 uStack_61;
  long lStack_60;
  long *plStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  bStack_78 = 0xa9;
  uStack_77 = 0x12a48;
  uStack_73 = CONCAT13(uStack_73._3_1_,0x1800);
  uStack_98 = uStack_98 & 0xffffffffffffff00;
  puStack_88 = (undefined4 *)((ulong)puStack_88 & 0xffffffffffffff00);
  func_0x0eeb79f0(auStack_48,&bStack_78);
  if ((uStack_73 & 0x8000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,
               (CONCAT35((undefined3)uStack_73,CONCAT41(uStack_77,bStack_78)) & 0xff00ffffffffffff)
               - 8);
  }
  if ((char)param_2[3] == '\x01') {
    bStack_78 = 0x2c;
    uStack_77 = _DAT_01340c23;
    uStack_73 = _UNK_01340c27;
    uStack_6f = _UNK_01340c2b;
    uStack_6b = (undefined2)_UNK_01340c2f;
    uStack_69 = 0x65;
    uStack_68 = 0x5f;
    uStack_67 = 0x736b636f6c62;
    uStack_61 = 0;
    func_0x0c8c00e0(&uStack_98,&bStack_78,param_2);
    lVar12 = *(long *)(param_1 + 0x90);
    if (lVar12 != 0) {
      *(long *)(param_1 + 0x98) = lVar12;
      func_0x0412a280(lVar12,*(long *)(param_1 + 0xa0) - lVar12);
      *(undefined8 *)(param_1 + 0x90) = 0;
      *(undefined8 *)(param_1 + 0x98) = 0;
      *(undefined8 *)(param_1 + 0xa0) = 0;
    }
    *(ulong *)(param_1 + 0x90) = uStack_98;
    *(undefined8 *)(param_1 + 0x98) = uStack_90;
    *(undefined4 **)(param_1 + 0xa0) = puStack_88;
    uStack_98 = 0;
    uStack_90 = 0;
    puStack_88 = (undefined4 *)0x0;
    if ((bStack_78 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_61,CONCAT61(uStack_67,uStack_68)),
                      CONCAT35((undefined3)uStack_73,CONCAT41(uStack_77,bStack_78)) &
                      0xfffffffffffffffe);
    }
    lStack_60 = param_2[1] - *param_2 >> 6;
  }
  else {
    *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x90);
    lStack_60 = 0;
  }
  lStack_50 = param_1 + 0xa8;
  func_0x052eb950(lStack_50,(param_2[5] - param_2[4] >> 3) * 0x4ec4ec4ec4ec4ec5);
  pbVar1 = (byte *)param_2[5];
  plStack_58 = param_2;
  for (pbVar13 = (byte *)param_2[4]; plVar7 = plStack_58, pbVar13 != pbVar1;
      pbVar13 = pbVar13 + 0x68) {
    puVar9 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar9 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar10 = _UNK_01390f11;
    uStack_98 = 0x21;
    uStack_90 = 0x1e;
    *(ulong *)((long)puVar9 + 0xe) = CONCAT62(_UNK_01390f0b,_DAT_01390f09);
    *(undefined8 *)((long)puVar9 + 0x16) = uVar10;
    uVar6 = _UNK_01390f03;
    uVar4 = _UNK_01390eff;
    uVar3 = CONCAT22(_DAT_01390f09,_UNK_01390f07);
    *puVar9 = _DAT_01390efb;
    puVar9[1] = uVar4;
    puVar9[2] = uVar6;
    puVar9[3] = uVar3;
    *(undefined1 *)((long)puVar9 + 0x1e) = 0;
    puStack_88 = puVar9;
    uVar10 = func_0x0c8c0000(&uStack_98,pbVar13 + 0x28);
    bStack_78 = (byte)uVar10;
    uStack_77 = (undefined4)((ulong)uVar10 >> 8);
    uStack_73._0_3_ = (undefined3)((ulong)uVar10 >> 0x28);
    puVar2 = *(undefined8 **)(param_1 + 0xb0);
    if (puVar2 < *(undefined8 **)(param_1 + 0xb8)) {
      if ((*pbVar13 & 1) == 0) {
        puVar2[2] = *(undefined8 *)(pbVar13 + 0x10);
        uVar5 = *(undefined8 *)(pbVar13 + 8);
        *puVar2 = *(undefined8 *)pbVar13;
        puVar2[1] = uVar5;
      }
      else {
        func_0x0412e5e0(puVar2,*(undefined8 *)(pbVar13 + 0x10),*(undefined8 *)(pbVar13 + 8));
        uVar10 = CONCAT35((undefined3)uStack_73,CONCAT41(uStack_77,bStack_78));
      }
      *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(pbVar13 + 0x18);
      *(undefined8 *)((long)puVar2 + 0x1c) = *(undefined8 *)(pbVar13 + 0x1c);
      puVar2[5] = uVar10;
      *(undefined8 **)(param_1 + 0xb0) = puVar2 + 6;
      *(undefined8 **)(param_1 + 0xb0) = puVar2 + 6;
    }
    else {
      uVar10 = func_0x0533f0d0(lStack_50,pbVar13,pbVar13 + 0x18,pbVar13 + 0x1c,&bStack_78);
      *(undefined8 *)(param_1 + 0xb0) = uVar10;
    }
    if ((uStack_98 & 1) != 0) {
      func_0x0412a280(puStack_88,uStack_98 & 0xfffffffffffffffe);
    }
  }
  pbVar13 = (byte *)(plStack_58 + 7);
  pbVar1 = (byte *)(param_1 + 0xc0);
  if (pbVar1 == pbVar13) {
    *(int *)(param_1 + 0xd8) = (int)plStack_58[10];
  }
  else {
    bVar8 = *pbVar13;
    if ((*pbVar1 & 1) == 0) {
      if ((bVar8 & 1) == 0) {
        *(long *)(param_1 + 0xd0) = plStack_58[9];
        uVar3 = *(undefined4 *)((long)plStack_58 + 0x3c);
        lVar12 = plStack_58[8];
        uVar4 = *(undefined4 *)((long)plStack_58 + 0x44);
        *(undefined4 *)pbVar1 = *(undefined4 *)pbVar13;
        *(undefined4 *)(param_1 + 0xc4) = uVar3;
        *(int *)(param_1 + 200) = (int)lVar12;
        *(undefined4 *)(param_1 + 0xcc) = uVar4;
      }
      else {
        func_0x04885070(pbVar1,plStack_58[9],plStack_58[8]);
      }
    }
    else {
      bVar14 = (bVar8 & 1) != 0;
      lVar12 = (long)plStack_58 + 0x39;
      if (bVar14) {
        lVar12 = plStack_58[9];
      }
      uVar11 = (ulong)(bVar8 >> 1);
      if (bVar14) {
        uVar11 = plStack_58[8];
      }
      func_0x04885120(pbVar1,lVar12,uVar11);
    }
    *(int *)(param_1 + 0xd8) = (int)plVar7[10];
    func_0x0533eee0(param_1 + 0xe0,plVar7[0xb],plVar7[0xc],plVar7[0xc] - plVar7[0xb] >> 2);
  }
  bVar8 = func_0x0db38570(plVar7);
  if (*(long *)(param_1 + 0x98) - *(long *)(param_1 + 0x90) >> 3 == lStack_60) {
    bVar8 = bVar8 & (*(long *)(param_1 + 0xb0) - *(long *)(param_1 + 0xa8) >> 4) *
                    -0x5555555555555555 + (plVar7[5] - plVar7[4] >> 3) * -0x4ec4ec4ec4ec4ec5 == 0;
  }
  else {
    bVar8 = 0;
  }
  func_0x0eeb81b0(auStack_48);
  return bVar8;
}



/* ---- referenced strings ----
 * 0x1340c23  non_replaceable_blocks
 * 0x1390efb  noise_block_specifier -> block
 * 0x1390f09  ecifier -> block
 */
