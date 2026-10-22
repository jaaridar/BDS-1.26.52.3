/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x620a540 (ELF vaddr 0x610a540)
 * Label: caller-of-callee
 * Body:  [[0620a540, 0620a5fe]]
 * Ghidra: FUN_0620a540
 */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0620a540(undefined8 *param_1)

{
  undefined8 *puVar1;
  byte *pbVar2;
  ulong *puVar3;
  byte bVar4;
  char cVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  byte *pbVar21;
  undefined8 uVar22;
  ulong uVar23;
  ulong uVar24;
  long *plVar25;
  byte *pbVar26;
  byte *pbVar27;
  undefined4 uVar28;
  long *plStack_b8;
  undefined8 **ppuStack_b0;
  byte *pbStack_a8;
  undefined1 uStack_a0;
  byte *pbStack_90;
  byte *pbStack_88;
  ulong uStack_80;
  byte *pbStack_78;
  byte *pbStack_70;
  undefined8 *puStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  undefined8 *puStack_50;
  byte *pbStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = param_1 + 0x16;
  plVar25 = param_1 + 0x1c;
  pbVar27 = (byte *)(param_1 + 0x5c);
  pbVar21 = (byte *)(param_1 + 0x5f);
  pbVar2 = (byte *)(param_1 + 0x62);
  puVar3 = param_1 + 0x65;
  pbStack_78 = (byte *)(param_1 + 0x68);
  pbStack_48 = (byte *)(param_1 + 0x6b);
  pbVar26 = (byte *)(param_1 + 0x6e);
  puStack_40 = param_1 + 0x22;
  puVar17 = param_1 + 0x24;
  puVar12 = &UNK_01727670 + *(int *)(&UNK_01727670 + (ulong)*(byte *)((long)param_1 + 0x41c) * 4);
  plVar7 = param_1 + 0x28;
  puStack_50 = param_1 + 2;
  pbStack_90 = pbVar26;
  pbStack_88 = pbVar21;
  pbStack_70 = pbVar27;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(byte *)((long)param_1 + 0x41c)) {
  case 0:
    *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(param_1 + 0x83);
    FUN_0470d9a0(pbVar21,&UNK_01496bb0,0x19,2,param_1 + 0x26);
    lVar20 = func_0x0417cc60();
    param_1[0x76] = lVar20;
    lVar18 = lVar20;
    while( true ) {
      param_1[0x77] = lVar18;
      lVar13 = (lVar20 + param_1[0x75]) - lVar18;
      if (lVar13 == 0 || lVar20 + param_1[0x75] < lVar18) break;
      *plVar7 = lVar13 / 1000000;
      FUN_0470d9a0(pbVar2,&UNK_01377b65,0x18,3,plVar7);
      lVar20 = param_1[0x72];
      if ((*(byte *)(lVar20 + 0xc0) & 1) != 0) {
        thunk_FUN_0ee326a0(*(undefined8 *)(lVar20 + 0xd0),
                           *(ulong *)(lVar20 + 0xc0) & 0xfffffffffffffffe);
        lVar20 = param_1[0x72];
      }
      *(undefined8 *)(lVar20 + 0xd0) = param_1[100];
      uVar28 = *(undefined4 *)((long)param_1 + 0x314);
      uVar10 = *(undefined4 *)(param_1 + 99);
      uVar11 = *(undefined4 *)((long)param_1 + 0x31c);
      *(undefined4 *)(lVar20 + 0xc0) = *(undefined4 *)pbVar2;
      *(undefined4 *)(lVar20 + 0xc4) = uVar28;
      *(undefined4 *)(lVar20 + 200) = uVar10;
      *(undefined4 *)(lVar20 + 0xcc) = uVar11;
      *(undefined2 *)(param_1 + 0x62) = 0;
      plVar6 = *(long **)(lVar20 + 0x90);
      if ((plVar6 != (long *)0x0) &&
         ((**(code **)(*plVar6 + 0x30))(plVar6,param_1[0x72] + 0xc0), (*pbVar2 & 1) != 0)) {
        thunk_FUN_0ee326a0(param_1[100],param_1[0x62] & 0xfffffffffffffffe);
      }
      if ((*pbVar21 & 1) == 0) {
        param_1[0x67] = param_1[0x61];
        *(undefined4 *)puVar3 = *(undefined4 *)pbVar21;
        *(undefined4 *)((long)param_1 + 0x32c) = *(undefined4 *)((long)param_1 + 0x2fc);
        *(undefined4 *)(param_1 + 0x66) = *(undefined4 *)(param_1 + 0x60);
        *(undefined4 *)((long)param_1 + 0x334) = *(undefined4 *)((long)param_1 + 0x304);
      }
      else {
        FUN_0412e5e0(puVar3,param_1[0x61],param_1[0x60]);
      }
      lVar20 = param_1[0x72];
      *(undefined4 *)(lVar20 + 0xa0) = 0;
      if ((*(byte *)(lVar20 + 0xa8) & 1) != 0) {
        thunk_FUN_0ee326a0(*(undefined8 *)(param_1[0x72] + 0xb8),
                           *(ulong *)(param_1[0x72] + 0xa8) & 0xfffffffffffffffe);
      }
      lVar20 = param_1[0x72];
      *(undefined8 *)(lVar20 + 0xb8) = param_1[0x67];
      uVar28 = *(undefined4 *)((long)param_1 + 0x32c);
      uVar10 = *(undefined4 *)(param_1 + 0x66);
      uVar11 = *(undefined4 *)((long)param_1 + 0x334);
      *(int *)(lVar20 + 0xa8) = (int)*puVar3;
      *(undefined4 *)(lVar20 + 0xac) = uVar28;
      *(undefined4 *)(lVar20 + 0xb0) = uVar10;
      *(undefined4 *)(lVar20 + 0xb4) = uVar11;
      *(undefined2 *)(param_1 + 0x65) = 0;
      uVar23 = *(long *)(lVar20 + 0xd8) + 1;
      *(ulong *)(lVar20 + 0xd8) = uVar23;
      *(long *)(lVar20 + 0xe0) = *(long *)(lVar20 + 0xe0) + 1;
      lVar18 = param_1[0x72];
      if (*(long *)(lVar20 + 0x28) - 1U < uVar23) {
code_r0x0620a8b8:
        uVar28 = *(undefined4 *)(lVar18 + 0xa0);
        *(undefined4 *)(param_1 + 0x58) = uVar28;
        if ((*(byte *)(lVar18 + 0xa8) & 1) == 0) {
          param_1[0x5b] = *(undefined8 *)(lVar18 + 0xb8);
          uVar19 = *(undefined8 *)(lVar18 + 0xb0);
          param_1[0x59] = *(undefined8 *)(lVar18 + 0xa8);
          param_1[0x5a] = uVar19;
        }
        else {
          FUN_0412e5e0(param_1 + 0x59,*(undefined8 *)(lVar18 + 0xb8),*(undefined8 *)(lVar18 + 0xb0))
          ;
          uVar28 = *(undefined4 *)(param_1 + 0x58);
        }
        uVar19 = param_1[0x59];
        uVar22 = param_1[0x5a];
        uVar8 = param_1[0x5b];
        param_1[0x59] = 0;
        param_1[0x5a] = 0;
        param_1[0x5b] = 0;
        *(undefined4 *)(param_1 + 3) = uVar28;
        if (*(char *)(param_1 + 7) == '\x01') {
          if ((*(byte *)(param_1 + 4) & 1) != 0) {
            thunk_FUN_0ee326a0(param_1[6],param_1[4] & 0xfffffffffffffffe);
          }
          param_1[4] = uVar19;
          param_1[5] = uVar22;
          param_1[6] = uVar8;
          uVar19 = 1;
        }
        else {
          param_1[4] = uVar19;
          param_1[5] = uVar22;
          param_1[6] = uVar8;
          *(undefined1 *)(param_1 + 7) = 1;
          uVar19 = 1;
        }
        goto code_r0x0620bb0b;
      }
      if ((*(char *)(lVar18 + 0xf0) == '\x01') && (0 < *(long *)(lVar18 + 0x30))) {
        if (*(long **)(lVar18 + 0x60) == (long *)0x0) {
          uVar19 = FUN_04891200();
          if ((*pbVar26 & 1) != 0) {
            thunk_FUN_0ee326a0(param_1[0x65],param_1[99] & 0xfffffffffffffffe);
          }
          func_0x04ab5520(&plStack_b8);
          param_1[0x1d] = pbVar2;
          func_0x04ab5580(&plStack_60);
          if ((*puVar3 & 1) == 0) goto code_r0x0620bbb6;
          uVar23 = param_1[0x17];
          uVar22 = param_1[0x19];
          goto code_r0x0620bbb1;
        }
        lVar20 = (**(code **)(**(long **)(lVar18 + 0x60) + 0x30))();
        lVar18 = param_1[0x72];
        if (*(long *)(lVar18 + 0x30) <= lVar20 - *(long *)(lVar18 + 0xe8)) goto code_r0x0620a8b8;
      }
code_r0x0620a8a4:
      lVar18 = func_0x0417cc60();
      lVar20 = param_1[0x76];
    }
    pbVar27 = (byte *)(param_1 + 0x17);
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    *puVar1 = 0;
    param_1[0x17] = 0;
    param_1[0x1a] = 0;
    if ((DAT_0f569528 & 1) == 0) {
      param_1[0x19] = _DAT_0f569538;
      uVar19 = _DAT_0f569530;
      *(ulong *)pbVar27 = CONCAT71(uRam000000000f569529,DAT_0f569528);
      param_1[0x18] = uVar19;
    }
    else {
      func_0x04885070(pbVar27,_DAT_0f569538,_DAT_0f569530);
    }
    *puVar1 = _DAT_0f569520;
    *plVar25 = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    uStack_58 = 0;
    plStack_60 = plVar25;
    puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar14 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    param_1[0x1c] = puVar14;
    param_1[0x1d] = puVar14;
    param_1[0x1e] = puVar14 + 5;
    param_1[0x6e] = puVar14;
    ppuStack_b0 = &puStack_68;
    uStack_a0 = 0;
    puVar14[2] = 0;
    puVar14[3] = 0;
    *puVar14 = 0;
    puVar14[1] = 0;
    puVar14[4] = 0;
    puVar15 = puVar14;
    plStack_b8 = plVar25;
    pbStack_a8 = pbVar26;
    puStack_68 = puVar14;
    if (puVar14 != puVar1) {
      if ((*pbVar27 & 1) == 0) {
        puVar14[3] = param_1[0x19];
        uVar28 = *(undefined4 *)((long)param_1 + 0xbc);
        uVar10 = *(undefined4 *)(param_1 + 0x18);
        uVar11 = *(undefined4 *)((long)param_1 + 0xc4);
        *(undefined4 *)(puVar14 + 1) = *(undefined4 *)pbVar27;
        *(undefined4 *)((long)puVar14 + 0xc) = uVar28;
        *(undefined4 *)(puVar14 + 2) = uVar10;
        *(undefined4 *)((long)puVar14 + 0x14) = uVar11;
        pbVar26 = pbStack_90;
      }
      else {
        func_0x04885070(puVar14 + 1,param_1[0x19],param_1[0x18]);
        puVar15 = *(undefined8 **)pbStack_90;
        pbVar26 = pbStack_90;
      }
    }
    uVar28 = *(undefined4 *)(param_1 + 0x83);
    *puVar14 = param_1[0x16];
    param_1[0x1d] = puVar15 + 5;
    *(undefined4 *)(param_1 + 0x24) = uVar28;
    FUN_0470d9a0(&plStack_b8,&UNK_014caf6c,0x23,2,puVar17);
    param_1[0x40] = pbStack_a8;
    param_1[0x3e] = plStack_b8;
    param_1[0x3f] = ppuStack_b0;
    plStack_b8 = (long *)0x0;
    ppuStack_b0 = (undefined8 **)0x0;
    pbStack_a8 = (byte *)0x0;
    *(undefined4 *)(param_1 + 0x4f) = 0;
    func_0x060aeeb0(param_1[0x73],0,0,plVar25,param_1 + 0x3d);
    if ((ulong)*(uint *)(param_1 + 0x4f) != 0xffffffff) {
      (**(code **)(&UNK_0f0210a0 + (ulong)*(uint *)(param_1 + 0x4f) * 8))();
    }
    *(undefined4 *)(param_1 + 0x4f) = 0xffffffff;
    if (((ulong)plStack_b8 & 1) != 0) {
      thunk_FUN_0ee326a0();
    }
    lVar20 = *plVar25;
    if (lVar20 != 0) {
      for (lVar18 = param_1[0x1d]; lVar20 != lVar18; lVar18 = lVar18 + -0x28) {
        if ((*(byte *)(lVar18 + -0x20) & 1) != 0) {
          thunk_FUN_0ee326a0(*(undefined8 *)(lVar18 + -0x10),
                             *(ulong *)(lVar18 + -0x20) & 0xfffffffffffffffe);
        }
      }
      param_1[0x1d] = lVar20;
      thunk_FUN_0ee326a0();
    }
    if ((*pbVar27 & 1) != 0) {
      thunk_FUN_0ee326a0();
    }
    lVar20 = param_1[0x74];
    lVar18 = func_0x0417cc60();
    param_1[0x78] = lVar18;
    lVar13 = 1;
    if (1 < lVar20 / 1000000) {
      lVar13 = lVar20 / 1000000;
    }
    param_1[0x79] = lVar13;
    lVar20 = -1;
    uVar22 = 0;
    uVar19 = 0;
    uVar24 = 0;
    uVar23 = 0;
    lVar13 = -1;
    lVar16 = lVar18;
    while( true ) {
      param_1[0x7c] = lVar16;
      *(byte *)((long)param_1 + 0x41d) = (byte)uVar23;
      *(int *)(param_1 + 0x7b) = (int)uVar24;
      *(char *)((long)param_1 + 0x3de) = (char)(uVar24 >> 0x30);
      *(short *)((long)param_1 + 0x3dc) = (short)(uVar24 >> 0x20);
      param_1[0x7a] = uVar22;
      if (param_1[0x74] + lVar18 <= lVar16) break;
      lVar16 = lVar16 - lVar18;
      lVar18 = lVar16 / 1000000000;
      lVar9 = lVar16 / 5000000000;
      if (lVar9 != lVar13) {
        param_1[0x1c] = lVar9 * 5;
        param_1[0x1e] = lVar9 * 5 + 5;
        FUN_0470d9a0(puVar1,&UNK_012a5bf6,0x15,0x33,plVar25);
        if ((uVar23 & 1) != 0) {
          thunk_FUN_0ee326a0(uVar22,(ulong)((byte)uVar23 & 0xfe) | uVar24 << 8);
        }
        uVar23 = param_1[0x16];
        uVar19 = param_1[0x17];
        uVar24 = uVar23 >> 8;
        uVar22 = param_1[0x18];
        lVar13 = lVar9;
      }
      pbVar27 = pbStack_88;
      param_1[0x80] = lVar13;
      *(char *)((long)param_1 + 0x41e) = (char)uVar23;
      *(int *)(param_1 + 0x7f) = (int)uVar24;
      *(char *)((long)param_1 + 0x3fe) = (char)(uVar24 >> 0x30);
      *(short *)((long)param_1 + 0x3fc) = (short)(uVar24 >> 0x20);
      param_1[0x7e] = uVar19;
      param_1[0x7d] = uVar22;
      uStack_80 = uVar23;
      if (lVar18 != lVar20) {
        *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_1 + 0x83);
        param_1[0x18] = lVar18;
        param_1[0x1a] = (long)param_1[0x74] / 1000000000;
        uStack_38 = uVar19;
        FUN_0470d9a0(plVar25,&UNK_012095d3,0x18,0x332,puVar1);
        if ((*pbVar27 & 1) != 0) {
          thunk_FUN_0ee326a0(param_1[0x61],param_1[0x5f] & 0xfffffffffffffffe);
        }
        *(undefined8 *)(pbVar27 + 0x10) = param_1[0x1e];
        uVar28 = *(undefined4 *)((long)param_1 + 0xe4);
        uVar10 = *(undefined4 *)(param_1 + 0x1d);
        uVar11 = *(undefined4 *)((long)param_1 + 0xec);
        *(int *)pbVar27 = (int)*plVar25;
        *(undefined4 *)(pbVar27 + 4) = uVar28;
        *(undefined4 *)(pbVar27 + 8) = uVar10;
        *(undefined4 *)(pbVar27 + 0xc) = uVar11;
        uVar19 = uStack_38;
        lVar20 = lVar18;
      }
      param_1[0x81] = lVar20;
      if ((uVar23 & 1) == 0) {
        param_1[0x68] = uVar23 & 0xff | uVar24 << 8;
        param_1[0x69] = uVar19;
        param_1[0x6a] = uVar22;
      }
      else {
        FUN_0412e5e0(pbStack_78,uVar22,uVar19);
      }
      lVar20 = param_1[0x72];
      if ((*(byte *)(lVar20 + 0xc0) & 1) != 0) {
        thunk_FUN_0ee326a0(*(undefined8 *)(lVar20 + 0xd0),
                           *(ulong *)(lVar20 + 0xc0) & 0xfffffffffffffffe);
        lVar20 = param_1[0x72];
      }
      pbVar21 = pbStack_48;
      *(undefined8 *)(lVar20 + 0xd0) = *(undefined8 *)(pbStack_78 + 0x10);
      uVar28 = *(undefined4 *)(pbStack_78 + 4);
      uVar10 = *(undefined4 *)(pbStack_78 + 8);
      uVar11 = *(undefined4 *)(pbStack_78 + 0xc);
      *(undefined4 *)(lVar20 + 0xc0) = *(undefined4 *)pbStack_78;
      *(undefined4 *)(lVar20 + 0xc4) = uVar28;
      *(undefined4 *)(lVar20 + 200) = uVar10;
      *(undefined4 *)(lVar20 + 0xcc) = uVar11;
      *(undefined2 *)(param_1 + 0x68) = 0;
      plVar7 = *(long **)(lVar20 + 0x90);
      if ((plVar7 != (long *)0x0) &&
         ((**(code **)(*plVar7 + 0x30))(plVar7,param_1[0x72] + 0xc0), (*pbStack_78 & 1) != 0)) {
        thunk_FUN_0ee326a0(param_1[0x6a],param_1[0x68] & 0xfffffffffffffffe);
      }
      uVar23 = param_1[0x79];
      uVar24 = lVar16 / 1000000;
      if ((long)uVar23 < lVar16 / 1000000) {
        uVar24 = uVar23;
      }
      if ((*(byte *)(param_1 + 0x5f) & 1) == 0) {
        *(undefined8 *)(pbVar21 + 0x10) = *(undefined8 *)(pbVar27 + 0x10);
        uVar19 = *(undefined8 *)(pbVar27 + 8);
        *(undefined8 *)pbVar21 = *(undefined8 *)pbVar27;
        *(undefined8 *)(pbVar21 + 8) = uVar19;
      }
      else {
        FUN_0412e5e0(pbVar21,param_1[0x61],param_1[0x60]);
        uVar23 = param_1[0x79];
      }
      pbVar27 = pbStack_48;
      lVar20 = param_1[0x72];
      uVar19 = param_1[0x6b];
      lVar18 = param_1[0x6c];
      uVar22 = param_1[0x6d];
      pbStack_48[0] = 0;
      pbStack_48[1] = 0;
      pbStack_48[2] = 0;
      pbStack_48[3] = 0;
      pbStack_48[4] = 0;
      pbStack_48[5] = 0;
      pbStack_48[6] = 0;
      pbStack_48[7] = 0;
      pbStack_48[8] = 0;
      pbStack_48[9] = 0;
      pbStack_48[10] = 0;
      pbStack_48[0xb] = 0;
      pbStack_48[0xc] = 0;
      pbStack_48[0xd] = 0;
      pbStack_48[0xe] = 0;
      pbStack_48[0xf] = 0;
      pbStack_48[0x10] = 0;
      pbStack_48[0x11] = 0;
      pbStack_48[0x12] = 0;
      pbStack_48[0x13] = 0;
      pbStack_48[0x14] = 0;
      pbStack_48[0x15] = 0;
      pbStack_48[0x16] = 0;
      pbStack_48[0x17] = 0;
      *(float *)(lVar20 + 0xa0) = (float)uVar24 / (float)(long)uVar23;
      lVar13 = param_1[0x72];
      if ((*(byte *)(lVar20 + 0xa8) & 1) == 0) {
        *(undefined8 *)(lVar13 + 0xa8) = uVar19;
        *(long *)(lVar13 + 0xb0) = lVar18;
        *(undefined8 *)(lVar13 + 0xb8) = uVar22;
      }
      else {
        thunk_FUN_0ee326a0(*(undefined8 *)(lVar13 + 0xb8),
                           *(ulong *)(lVar13 + 0xa8) & 0xfffffffffffffffe);
        bVar4 = *pbVar27;
        *(undefined8 *)(lVar13 + 0xa8) = uVar19;
        *(long *)(lVar13 + 0xb0) = lVar18;
        *(undefined8 *)(lVar13 + 0xb8) = uVar22;
        if ((bVar4 & 1) != 0) {
          thunk_FUN_0ee326a0(param_1[0x6d],param_1[0x6b] & 0xfffffffffffffffe);
        }
      }
      pbVar21 = pbStack_88;
      pbVar26 = pbStack_90;
      lVar20 = param_1[0x72];
      uVar23 = *(long *)(lVar20 + 0xd8) + 1;
      *(ulong *)(lVar20 + 0xd8) = uVar23;
      *(long *)(lVar20 + 0xe0) = *(long *)(lVar20 + 0xe0) + 1;
      lVar13 = param_1[0x72];
      if (*(long *)(lVar20 + 0x28) - 1U < uVar23) {
code_r0x0620b29f:
        uVar28 = *(undefined4 *)(lVar13 + 0xa0);
        *(undefined4 *)(param_1 + 0x50) = uVar28;
        if ((*(byte *)(lVar13 + 0xa8) & 1) == 0) {
          param_1[0x53] = *(undefined8 *)(lVar13 + 0xb8);
          uVar19 = *(undefined8 *)(lVar13 + 0xb0);
          param_1[0x51] = *(undefined8 *)(lVar13 + 0xa8);
          param_1[0x52] = uVar19;
        }
        else {
          FUN_0412e5e0(param_1 + 0x51,*(undefined8 *)(lVar13 + 0xb8),*(undefined8 *)(lVar13 + 0xb0))
          ;
          uVar28 = *(undefined4 *)(param_1 + 0x50);
        }
        uVar19 = param_1[0x51];
        uVar22 = param_1[0x52];
        uVar8 = param_1[0x53];
        param_1[0x51] = 0;
        param_1[0x52] = 0;
        param_1[0x53] = 0;
        *(undefined4 *)(param_1 + 3) = uVar28;
        if (*(char *)(param_1 + 7) == '\x01') {
          if ((*(byte *)(param_1 + 4) & 1) != 0) {
            thunk_FUN_0ee326a0(param_1[6],param_1[4] & 0xfffffffffffffffe);
          }
          param_1[4] = uVar19;
          param_1[5] = uVar22;
          param_1[6] = uVar8;
          uVar19 = 2;
        }
        else {
          param_1[4] = uVar19;
          param_1[5] = uVar22;
          param_1[6] = uVar8;
          *(undefined1 *)(param_1 + 7) = 1;
          uVar19 = 2;
        }
        goto code_r0x0620bb0b;
      }
      if ((*(char *)(lVar13 + 0xf0) == '\x01') && (0 < *(long *)(lVar13 + 0x30))) {
        if (*(long **)(lVar13 + 0x60) == (long *)0x0) {
          uVar19 = FUN_04891200();
          if ((*pbVar27 & 1) != 0) {
            thunk_FUN_0ee326a0(*(undefined8 *)(lVar18 + 0x18),
                               *(ulong *)(lVar18 + 8) & 0xfffffffffffffffe);
          }
          func_0x04ab5520(&plStack_b8);
          param_1[0x1d] = lVar18;
          func_0x04ab5580(&plStack_60);
          if ((*pbVar26 & 1) != 0) {
            thunk_FUN_0ee326a0(param_1[0x19],param_1[0x17] & 0xfffffffffffffffe);
          }
          goto code_r0x0620bb31;
        }
        lVar20 = (**(code **)(**(long **)(lVar13 + 0x60) + 0x30))();
        lVar13 = param_1[0x72];
        if (*(long *)(lVar13 + 0x30) <= lVar20 - *(long *)(lVar13 + 0xe8)) goto code_r0x0620b29f;
      }
code_r0x0620b247:
      lVar16 = func_0x0417cc60();
      lVar20 = param_1[0x81];
      lVar13 = param_1[0x80];
      uVar23 = (ulong)*(byte *)((long)param_1 + 0x41e);
      uVar24 = (ulong)*(uint7 *)(param_1 + 0x7f);
      uVar19 = param_1[0x7e];
      lVar18 = param_1[0x78];
      uVar22 = param_1[0x7d];
    }
    *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)(param_1 + 0x83);
    FUN_0470d9a0(pbVar26,&UNK_0127361f,0x11,2,puStack_40);
    lVar20 = func_0x0417cc60();
    param_1[0x82] = lVar20;
    lVar18 = func_0x0417cc60();
    pbVar27 = pbStack_70;
    if (lVar20 + 1000000000 <= lVar18) {
code_r0x0620b333:
      pbVar27 = (byte *)(param_1 + 0x17);
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      *puVar1 = 0;
      param_1[0x17] = 0;
      param_1[0x1a] = 0;
      if ((DAT_0f569528 & 1) == 0) {
        param_1[0x19] = _DAT_0f569538;
        uVar19 = _DAT_0f569530;
        *(ulong *)pbVar27 = CONCAT71(uRam000000000f569529,DAT_0f569528);
        param_1[0x18] = uVar19;
      }
      else {
        func_0x04885070(pbVar27,_DAT_0f569538,_DAT_0f569530);
      }
      *puVar1 = _DAT_0f569520;
      *plVar25 = 0;
      param_1[0x1d] = 0;
      param_1[0x1e] = 0;
      uStack_58 = 0;
      plStack_60 = plVar25;
      puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
      if (puVar17 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x28,0);
      }
      puVar14 = param_1 + 0x71;
      param_1[0x1c] = puVar17;
      param_1[0x1d] = puVar17;
      param_1[0x1e] = puVar17 + 5;
      param_1[0x71] = puVar17;
      ppuStack_b0 = &puStack_68;
      uStack_a0 = 0;
      puVar17[2] = 0;
      puVar17[3] = 0;
      *puVar17 = 0;
      puVar17[1] = 0;
      puVar17[4] = 0;
      puVar15 = puVar17;
      plStack_b8 = plVar25;
      pbStack_a8 = (byte *)puVar14;
      puStack_68 = puVar17;
      if (puVar17 != puVar1) {
        if ((*pbVar27 & 1) == 0) {
          puVar17[3] = param_1[0x19];
          uVar28 = *(undefined4 *)((long)param_1 + 0xbc);
          uVar10 = *(undefined4 *)(param_1 + 0x18);
          uVar11 = *(undefined4 *)((long)param_1 + 0xc4);
          *(undefined4 *)(puVar17 + 1) = *(undefined4 *)pbVar27;
          *(undefined4 *)((long)puVar17 + 0xc) = uVar28;
          *(undefined4 *)(puVar17 + 2) = uVar10;
          *(undefined4 *)((long)puVar17 + 0x14) = uVar11;
        }
        else {
          func_0x04885070(puVar17 + 1,param_1[0x19],param_1[0x18]);
          puVar15 = (undefined8 *)*puVar14;
        }
      }
      uVar28 = *(undefined4 *)(param_1 + 0x83);
      *puVar17 = param_1[0x16];
      param_1[0x1d] = puVar15 + 5;
      *(undefined4 *)(param_1 + 0x20) = uVar28;
      FUN_0470d9a0(&plStack_b8,&UNK_0119e392,0x24,2,param_1 + 0x20);
      param_1[0x2d] = pbStack_a8;
      param_1[0x2b] = plStack_b8;
      param_1[0x2c] = ppuStack_b0;
      plStack_b8 = (long *)0x0;
      ppuStack_b0 = (undefined8 **)0x0;
      pbStack_a8 = (byte *)0x0;
      *(undefined4 *)(param_1 + 0x3c) = 0;
      func_0x060aeeb0(param_1[0x73],0,0,plVar25,param_1 + 0x2a,1);
      if ((ulong)*(uint *)(param_1 + 0x3c) != 0xffffffff) {
        (**(code **)(&UNK_0f0210a0 + (ulong)*(uint *)(param_1 + 0x3c) * 8))
                  (&plStack_60,param_1 + 0x2b);
      }
      *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
      if (((ulong)plStack_b8 & 1) != 0) {
        thunk_FUN_0ee326a0(pbStack_a8,(ulong)plStack_b8 & 0xfffffffffffffffe);
      }
      lVar20 = *plVar25;
      if (lVar20 != 0) {
        lVar18 = param_1[0x1d];
        lVar13 = lVar20;
        if (lVar20 != lVar18) {
          do {
            if ((*(byte *)(lVar18 + -0x20) & 1) != 0) {
              thunk_FUN_0ee326a0(*(undefined8 *)(lVar18 + -0x10),
                                 *(ulong *)(lVar18 + -0x20) & 0xfffffffffffffffe);
            }
            lVar18 = lVar18 + -0x28;
          } while (lVar18 != lVar20);
          lVar13 = *plVar25;
        }
        param_1[0x1d] = lVar20;
        thunk_FUN_0ee326a0(lVar13,param_1[0x1e] - lVar13);
      }
      if ((*pbVar27 & 1) == 0) {
        bVar4 = *pbStack_90;
      }
      else {
        thunk_FUN_0ee326a0(param_1[0x19],param_1[0x17] & 0xfffffffffffffffe);
        bVar4 = *pbStack_90;
      }
      if ((bVar4 & 1) == 0) {
        bVar4 = *(byte *)((long)param_1 + 0x41d);
      }
      else {
        thunk_FUN_0ee326a0(param_1[0x70],param_1[0x6e] & 0xfffffffffffffffe);
        bVar4 = *(byte *)((long)param_1 + 0x41d);
      }
      if ((bVar4 & 1) == 0) {
        bVar4 = *pbVar21;
      }
      else {
        thunk_FUN_0ee326a0(param_1[0x7a],
                           (ulong)(bVar4 & 0xfffffffe) |
                           (ulong)*(uint *)(param_1 + 0x7b) << 8 |
                           (ulong)*(uint3 *)((long)param_1 + 0x3dc) << 0x28);
        bVar4 = *pbVar21;
      }
      if ((bVar4 & 1) != 0) {
        thunk_FUN_0ee326a0(param_1[0x61],param_1[0x5f] & 0xfffffffffffffffe);
      }
      *(undefined1 *)puStack_50 = 1;
code_r0x0620b6a6:
      *param_1 = 0;
      uVar19 = 4;
code_r0x0620bb0b:
      *(char *)((long)param_1 + 0x41c) = (char)uVar19;
      return (long *)uVar19;
    }
code_r0x0620b85a:
    lVar20 = param_1[0x72];
    if ((*(byte *)(lVar20 + 0xc0) & 1) != 0) {
      thunk_FUN_0ee326a0(*(undefined8 *)(lVar20 + 0xd0),
                         *(ulong *)(lVar20 + 0xc0) & 0xfffffffffffffffe);
      lVar20 = param_1[0x72];
    }
    *(undefined1 *)(lVar20 + 0xc0) = 0x10;
    *(undefined8 *)(lVar20 + 0xc1) = 0x6574656c706d6f43;
    *(undefined1 *)(lVar20 + 0xc9) = 0;
    plVar7 = *(long **)(lVar20 + 0x90);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x30))(plVar7,param_1[0x72] + 0xc0);
    }
    if ((*pbVar26 & 1) == 0) {
      *(undefined8 *)(pbVar27 + 0x10) = *(undefined8 *)(pbVar26 + 0x10);
      uVar19 = *(undefined8 *)(pbVar26 + 8);
      *(undefined8 *)pbVar27 = *(undefined8 *)pbVar26;
      *(undefined8 *)(pbVar27 + 8) = uVar19;
    }
    else {
      FUN_0412e5e0(pbVar27,param_1[0x70],param_1[0x6f]);
    }
    lVar20 = param_1[0x79];
    lVar18 = param_1[0x72];
    uVar19 = param_1[0x5c];
    uVar22 = param_1[0x5d];
    uVar8 = param_1[0x5e];
    pbVar27[0] = 0;
    pbVar27[1] = 0;
    pbVar27[2] = 0;
    pbVar27[3] = 0;
    pbVar27[4] = 0;
    pbVar27[5] = 0;
    pbVar27[6] = 0;
    pbVar27[7] = 0;
    pbVar27[8] = 0;
    pbVar27[9] = 0;
    pbVar27[10] = 0;
    pbVar27[0xb] = 0;
    pbVar27[0xc] = 0;
    pbVar27[0xd] = 0;
    pbVar27[0xe] = 0;
    pbVar27[0xf] = 0;
    pbVar27[0x10] = 0;
    pbVar27[0x11] = 0;
    pbVar27[0x12] = 0;
    pbVar27[0x13] = 0;
    pbVar27[0x14] = 0;
    pbVar27[0x15] = 0;
    pbVar27[0x16] = 0;
    pbVar27[0x17] = 0;
    *(float *)(lVar18 + 0xa0) = (float)lVar20 / (float)lVar20;
    lVar20 = param_1[0x72];
    if ((*(byte *)(lVar18 + 0xa8) & 1) == 0) {
      *(undefined8 *)(lVar20 + 0xa8) = uVar19;
      *(undefined8 *)(lVar20 + 0xb0) = uVar22;
      *(undefined8 *)(lVar20 + 0xb8) = uVar8;
    }
    else {
      thunk_FUN_0ee326a0(*(undefined8 *)(lVar20 + 0xb8),
                         *(ulong *)(lVar20 + 0xa8) & 0xfffffffffffffffe);
      bVar4 = *pbVar27;
      *(undefined8 *)(lVar20 + 0xa8) = uVar19;
      *(undefined8 *)(lVar20 + 0xb0) = uVar22;
      *(undefined8 *)(lVar20 + 0xb8) = uVar8;
      if ((bVar4 & 1) != 0) {
        thunk_FUN_0ee326a0(param_1[0x5e],param_1[0x5c] & 0xfffffffffffffffe);
      }
    }
    pbVar27 = pbStack_70;
    pbVar26 = pbStack_90;
    lVar20 = param_1[0x72];
    uVar23 = *(long *)(lVar20 + 0xd8) + 1;
    *(ulong *)(lVar20 + 0xd8) = uVar23;
    *(long *)(lVar20 + 0xe0) = *(long *)(lVar20 + 0xe0) + 1;
    lVar18 = param_1[0x72];
    if (uVar23 <= *(long *)(lVar20 + 0x28) - 1U) {
      pbVar21 = pbStack_88;
      if ((*(char *)(lVar18 + 0xf0) != '\x01') || (*(long *)(lVar18 + 0x30) < 1))
      goto code_r0x0620ba2b;
      if (*(long **)(lVar18 + 0x60) != (long *)0x0) {
        lVar20 = (**(code **)(**(long **)(lVar18 + 0x60) + 0x30))();
        lVar18 = param_1[0x72];
        pbVar21 = pbStack_88;
        if (*(long *)(lVar18 + 0x30) <= lVar20 - *(long *)(lVar18 + 0xe8)) goto code_r0x0620ba4b;
        goto code_r0x0620ba2b;
      }
      uVar19 = FUN_04891200();
code_r0x0620bb31:
      if ((*pbStack_90 & 1) != 0) {
        thunk_FUN_0ee326a0(param_1[0x70],param_1[0x6e] & 0xfffffffffffffffe);
      }
      bVar4 = *(byte *)((long)param_1 + 0x41d);
      uStack_80 = (ulong)bVar4;
      uVar22 = param_1[0x7a];
      if ((bVar4 & 1) != 0) {
        uVar23 = CONCAT71(*(undefined7 *)(param_1 + 0x7b),bVar4);
code_r0x0620bbb1:
        thunk_FUN_0ee326a0(uVar22,uVar23 & 0xfffffffffffffffe);
      }
code_r0x0620bbb6:
      if ((*pbStack_88 & 1) != 0) {
        thunk_FUN_0ee326a0(param_1[0x61],param_1[0x5f] & 0xfffffffffffffffe);
      }
      func_0x04108700(uVar19);
      func_0x061b8aa0(puStack_50);
      func_0x04108910();
      goto code_r0x0620b6a6;
    }
code_r0x0620ba4b:
    uVar28 = *(undefined4 *)(lVar18 + 0xa0);
    *(undefined4 *)(param_1 + 0x54) = uVar28;
    if ((*(byte *)(lVar18 + 0xa8) & 1) == 0) {
      param_1[0x57] = *(undefined8 *)(lVar18 + 0xb8);
      uVar19 = *(undefined8 *)(lVar18 + 0xb0);
      param_1[0x55] = *(undefined8 *)(lVar18 + 0xa8);
      param_1[0x56] = uVar19;
    }
    else {
      FUN_0412e5e0(param_1 + 0x55,*(undefined8 *)(lVar18 + 0xb8),*(undefined8 *)(lVar18 + 0xb0));
      uVar28 = *(undefined4 *)(param_1 + 0x54);
    }
    uVar19 = param_1[0x55];
    uVar22 = param_1[0x56];
    uVar8 = param_1[0x57];
    param_1[0x55] = 0;
    param_1[0x56] = 0;
    param_1[0x57] = 0;
    *(undefined4 *)(param_1 + 3) = uVar28;
    if (*(char *)(param_1 + 7) == '\x01') {
      if ((*(byte *)(param_1 + 4) & 1) != 0) {
        thunk_FUN_0ee326a0(param_1[6],param_1[4] & 0xfffffffffffffffe);
      }
      param_1[4] = uVar19;
      param_1[5] = uVar22;
      param_1[6] = uVar8;
    }
    else {
      param_1[4] = uVar19;
      param_1[5] = uVar22;
      param_1[6] = uVar8;
      *(undefined1 *)(param_1 + 7) = 1;
    }
    uVar19 = 3;
    goto code_r0x0620bb0b;
  case 1:
    if ((*(byte *)(param_1 + 0x59) & 1) == 0) goto code_r0x0620a8a4;
    thunk_FUN_0ee326a0(param_1[0x5b],param_1[0x59] & 0xfffffffffffffffe);
    goto code_r0x0620a8a4;
  case 2:
    if ((*(byte *)(param_1 + 0x51) & 1) == 0) goto code_r0x0620b247;
    thunk_FUN_0ee326a0(param_1[0x53],param_1[0x51] & 0xfffffffffffffffe);
    goto code_r0x0620b247;
  case 3:
    if ((*(byte *)(param_1 + 0x55) & 1) == 0) goto code_r0x0620ba2b;
    thunk_FUN_0ee326a0(param_1[0x57],param_1[0x55] & 0xfffffffffffffffe);
    goto code_r0x0620ba2b;
  case 4:
  case 8:
    goto code_r0x0620bd20;
  case 5:
                    /* WARNING: Could not emulate address calculation at 0x0620bc2a */
                    /* WARNING: Treating indirect jump as call */
    uVar19 = (*(code *)(&UNK_01727680 + *(int *)(&UNK_01727680 + (long)puVar12 * 4)))();
    return (long *)uVar19;
  case 6:
    pbVar27 = (byte *)((long)param_1 + -0x34);
    bVar4 = *pbVar27;
    *pbVar27 = *pbVar27 + (byte)puVar12;
    if ((*pbVar21 & 1) != 0) {
      thunk_FUN_0ee326a0(*(undefined8 *)
                          ((long)param_1 +
                          (ulong)(((int)puVar12 + -0x41000004) - (uint)CARRY1(bVar4,(byte)puVar12)))
                         ,*puVar3 & 0xfffffffffffffffe);
    }
    if ((*(byte *)((long)param_1 + (long)pbVar26) & 1) != 0) {
      uVar19 = *(undefined8 *)((long)param_1 + (long)plVar7);
      uVar23 = (ulong)(*(byte *)((long)param_1 + (long)pbVar26) & 0xfffffffe) |
               (ulong)*(uint *)((long)param_1 + (long)pbVar2) << 8 |
               (ulong)CONCAT12(pbVar2[(long)param_1 + 6],*(undefined2 *)(pbVar2 + (long)param_1 + 4)
                              ) << 0x28;
      goto code_r0x0620bd0b;
    }
    break;
  case 7:
    uVar19 = param_1[0x5b];
    uVar23 = (ulong)puVar17 & 0xfffffffffffffffe;
code_r0x0620bd0b:
    thunk_FUN_0ee326a0(uVar19,uVar23);
    break;
  default:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xc:
  case 0x13:
  case 0x1a:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xf:
  case 0x16:
  case 0x1d:
    halt_baddata();
  }
  if ((*(byte *)(param_1 + 0x5f) & 1) != 0) {
    puVar17 = (undefined8 *)param_1[0x5f];
code_r0x0620bd20:
    thunk_FUN_0ee326a0(param_1[0x61],(ulong)puVar17 & 0xfffffffffffffffe);
  }
  plVar25 = (long *)param_1[0x14];
  if (plVar25 == param_1 + 0x10) {
    lVar20 = 0x20;
code_r0x0620bd7a:
    (**(code **)(*plVar25 + lVar20))();
    plVar25 = (long *)param_1[0xe];
    if (plVar25 != param_1 + 10) goto code_r0x0620bd5a;
code_r0x0620bd8d:
    lVar20 = 0x20;
  }
  else {
    lVar20 = 0x28;
    if (plVar25 != (long *)0x0) goto code_r0x0620bd7a;
    plVar25 = (long *)param_1[0xe];
    if (plVar25 == param_1 + 10) goto code_r0x0620bd8d;
code_r0x0620bd5a:
    lVar20 = 0x28;
    if (plVar25 == (long *)0x0) {
      plStack_b8 = (long *)func_0x04138020(param_1 + 8);
      cVar5 = *(char *)(param_1 + 7);
      goto joined_r0x0620bda5;
    }
  }
  (**(code **)(*plVar25 + lVar20))();
  plStack_b8 = (long *)func_0x04138020(param_1 + 8);
  cVar5 = *(char *)(param_1 + 7);
joined_r0x0620bda5:
  if ((cVar5 == '\x01') && ((*(byte *)(param_1 + 4) & 1) != 0)) {
    plStack_b8 = (long *)thunk_FUN_0ee326a0(param_1[6],param_1[4] & 0xfffffffffffffffe);
  }
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return plStack_b8;
code_r0x0620ba2b:
  lVar20 = param_1[0x82];
  lVar18 = func_0x0417cc60();
  if (lVar20 + 1000000000 <= lVar18) goto code_r0x0620b333;
  goto code_r0x0620b85a;
}


