/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca6fc30 (ELF vaddr 0xc96fc30)
 * Label: caller-of-seed
 * Body:  [[0ca6fc30, 0ca6fe23] [0ca6fe30, 0ca6fef1] [0ca6ff00, 0ca702e3] [0ca702f0, 0ca70369]]
 * Ghidra: FUN_0ca6fc30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0ca6fc30(undefined8 *param_1,long *param_2,ushort param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined4 *puVar15;
  long *plVar16;
  int *piVar17;
  undefined8 *puVar18;
  undefined4 *puVar19;
  ulong uVar20;
  undefined8 uVar21;
  ulong uVar22;
  undefined8 uStack_a38;
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
  
  lVar12 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c8);
  if (lVar12 == 0) {
    FUN_0eec74c0(0x1c8,0);
  }
  func_0x0d352a10(lVar12);
  *param_1 = &UNK_0f534768;
  uStack_a38 = lVar12;
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar13 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x20,0);
  }
  *(undefined1 (*) [16])(puVar13 + 1) = (undefined1  [16])0x0;
  *puVar13 = &UNK_0ef44a60;
  *(undefined1 *)(puVar13 + 3) = 1;
  param_1[1] = puVar13 + 3;
  param_1[2] = puVar13;
  *(undefined4 *)(param_1 + 3) = 0x10;
  param_1[4] = param_2[0x14];
  param_1[5] = param_2;
  *(undefined1 (*) [16])(param_1 + 6) = (undefined1  [16])0x0;
  param_1[8] = param_2[0x72];
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 (*) [16])(param_1 + 10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0xc) = (undefined1  [16])0x0;
  *param_1 = &UNK_0f3ed048;
  param_1[0xe] = &UNK_0f3ed220;
  param_1[0xf] = lVar12;
  *(undefined1 (*) [16])(param_1 + 0x1c) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x1e) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x12) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x14) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x16) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x18) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])((long)param_1 + 0xcc) = (undefined1  [16])0x0;
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
  func_0x0eee1090(param_1 + 0x21);
  *param_1 = &UNK_0f3ece48;
  param_1[0xe] = &UNK_0f3ed020;
  *(undefined1 (*) [16])(param_1 + 0x22) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x24) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x26) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x28) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x2a) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])((long)param_1 + 0x159) = (undefined1  [16])0x0;
  iVar10 = (**(code **)(*param_2 + 0x18))(param_2);
  if (iVar10 < 1000) {
    bVar4 = *(byte *)(param_2 + 0x28);
    if ((bVar4 & 1) == 0) {
      uVar14 = (ulong)(bVar4 >> 1);
      if (uVar14 != 6) goto LAB_0ca6fe8f;
LAB_0ca6febb:
      if ((bVar4 & 1) == 0) {
        piVar17 = (int *)((long)param_2 + 0x141);
      }
      else {
        piVar17 = (int *)param_2[0x2a];
      }
      if ((short)piVar17[1] == 0x7265 && *piVar17 == 0x6874654e) {
        param_3 = 8;
      }
      else {
        if ((short)piVar17[1] != 0x646e || *piVar17 != 0x45656854) goto LAB_0ca6ff3e;
        param_3 = 9;
      }
      goto LAB_0ca6fde9;
    }
    uVar14 = param_2[0x29];
    if (uVar14 == 6) goto LAB_0ca6febb;
LAB_0ca6fe8f:
    if (uVar14 == 9) {
      if ((bVar4 & 1) == 0) {
        plVar16 = (long *)((long)param_2 + 0x141);
      }
      else {
        plVar16 = (long *)param_2[0x2a];
      }
      if ((char)plVar16[1] == 'd' && *plVar16 == 0x6c726f777265764f) {
        param_3 = 0;
        goto LAB_0ca6fde9;
      }
    }
  }
  else {
LAB_0ca6fde9:
    puVar13 = *(undefined8 **)(**(long **)(param_2[0x14] + 0x3b8) + 0x380);
    puVar5 = *(undefined8 **)(**(long **)(param_2[0x14] + 0x3b8) + 0x388);
    if ((long)puVar5 - (long)puVar13 != 0) {
      puVar18 = puVar5;
      uVar14 = (long)puVar5 - (long)puVar13 >> 3;
LAB_0ca6fe49:
      do {
        uVar20 = uVar14 >> 1;
        puVar1 = puVar13 + uVar20;
        if (*(ushort *)(puVar13[uVar20] + 0x168) < param_3) goto LAB_0ca6fe30;
        if (*(ushort *)(puVar13[uVar20] + 0x168) <= param_3) {
          if (uVar14 != 1) {
            do {
              uVar14 = uVar20 >> 1;
              if (*(ushort *)(puVar13[uVar14] + 0x168) < param_3) {
                puVar13 = puVar13 + uVar14 + 1;
                uVar14 = ~uVar14 + uVar20;
              }
              uVar20 = uVar14;
            } while (uVar14 != 0);
          }
          lVar12 = (long)puVar18 - (long)(puVar1 + 1);
          if (lVar12 != 0) {
            puVar18 = puVar1 + 1;
            uVar14 = lVar12 >> 3;
            do {
              uVar20 = uVar14 >> 1;
              if (*(ushort *)(puVar18[uVar20] + 0x168) <= param_3) {
                puVar18 = puVar18 + uVar20 + 1;
                uVar20 = ~uVar20 + uVar14;
              }
              uVar14 = uVar20;
            } while (uVar20 != 0);
          }
          if ((puVar13 == puVar18) || (puVar13 == puVar5)) goto LAB_0ca6ff38;
          uVar21 = *puVar13;
          break;
        }
        puVar18 = puVar1;
        uVar21 = 0;
        uVar14 = uVar20;
      } while (uVar20 != 0);
      goto LAB_0ca6ff3b;
    }
LAB_0ca6ff38:
    uVar21 = 0;
LAB_0ca6ff3b:
    param_1[0x22] = uVar21;
  }
LAB_0ca6ff3e:
  uVar21 = param_1[0x22];
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x10);
  if (puVar13 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x10,0);
  }
  *puVar13 = &UNK_0f3dc940;
  puVar13[1] = uVar21;
  plVar16 = (long *)param_1[0x23];
  param_1[0x23] = puVar13;
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 8))();
  }
  iVar10 = (int)(short)(*(short *)((long)param_2 + 0xaa) - (short)param_2[0x15]);
  uVar14 = (ulong)(iVar10 << 8);
  puVar15 = (undefined4 *)param_1[0x25];
  puVar19 = (undefined4 *)param_1[0x26];
  uVar20 = (long)puVar19 - (long)puVar15 >> 3;
  if (uVar20 < uVar14) {
    func_0x0ca7b2e0(param_1 + 0x25);
    puVar15 = (undefined4 *)param_1[0x25];
    puVar19 = (undefined4 *)param_1[0x26];
    iVar10 = (int)(short)(*(short *)((long)param_2 + 0xaa) - (short)param_2[0x15]);
  }
  else if (uVar14 < uVar20) {
    puVar19 = puVar15 + uVar14 * 2;
    param_1[0x26] = puVar19;
  }
  if ((_DAT_0f6ffb10 == (long *)0x0) &&
     (cVar9 = func_0x0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868,&UNK_013a2901),
     cVar9 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  puVar2 = (undefined4 *)(((long)puVar19 - (long)puVar15) + (long)puVar15);
  uVar7 = *(undefined4 *)(*_DAT_0f6ffb10 + 0x200);
  uVar8 = *(undefined4 *)(*_DAT_0f6ffb10 + 0x204);
  lVar12 = param_2[0x15];
  if (puVar15 != puVar19) {
    uVar14 = ((long)puVar19 - (long)puVar15) - 8;
    puVar19 = puVar15;
    if (0x17 < uVar14) {
      uVar14 = (uVar14 >> 3) + 1;
      uVar20 = uVar14 & 0xfffffffffffffffc;
      puVar19 = puVar15 + uVar20 * 2;
      uVar22 = 0;
      do {
        puVar3 = puVar15 + uVar22 * 2;
        *puVar3 = uVar7;
        puVar3[1] = uVar8;
        puVar3[2] = uVar7;
        puVar3[3] = uVar8;
        puVar3 = puVar15 + uVar22 * 2 + 4;
        *puVar3 = uVar7;
        puVar3[1] = uVar8;
        puVar3[2] = uVar7;
        puVar3[3] = uVar8;
        uVar22 = uVar22 + 4;
      } while (uVar20 != uVar22);
      if (uVar14 == uVar20) goto LAB_0ca700dc;
    }
    do {
      *puVar19 = uVar7;
      puVar19[1] = uVar8;
      puVar19 = puVar19 + 2;
    } while (puVar19 != puVar2);
  }
LAB_0ca700dc:
  param_1[0x28] = puVar15;
  param_1[0x29] = puVar2;
  *(undefined4 *)(param_1 + 0x2a) = 0x10;
  *(int *)((long)param_1 + 0x154) = iVar10;
  *(undefined4 *)(param_1 + 0x2b) = 0x10;
  *(int *)((long)param_1 + 0x15c) = (int)(short)lVar12;
  *(undefined4 *)(param_1 + 0x2c) = uVar7;
  *(undefined4 *)((long)param_1 + 0x164) = uVar8;
  uVar14 = (**(code **)(*(long *)param_1[4] + 0x438))();
  puStack_a30 = &UNK_0f147b18;
  ppuStack_38 = &puStack_a28;
  puStack_a28 = &UNK_0f5356d0;
  uStack_48 = 0x100000000000000;
  uStack_a20 = (undefined4)uVar14;
  uStack_54 = 0;
  uStack_50 = 0;
  lVar12 = 7;
  while( true ) {
    uVar14 = ((ulong)(((uint)(uVar14 >> 0x1e) & 3 ^ (uint)uVar14) * 0x6c078965) + lVar12) - 6;
    uVar11 = (uint)uVar14;
    *(uint *)((long)&uStack_a38 + lVar12 * 4 + 4) = uVar11;
    if (lVar12 == 0x193) break;
    uVar11 = (((uint)(uVar14 >> 0x1e) & 3 ^ uVar11) * 0x6c078965 + (int)lVar12) - 5;
    uVar14 = (ulong)uVar11;
    *(uint *)((long)&puStack_a30 + lVar12 * 4) = uVar11;
    lVar12 = lVar12 + 2;
  }
  uStack_5c = 0x18e00000270;
  uStack_40 = 1;
  uStack_a1c = uStack_a20;
  puVar15 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar15 == (undefined4 *)0x0) {
    FUN_0eec74c0(0x28,0);
  }
  *puVar15 = 4;
  *(undefined1 (*) [16])(puVar15 + 2) = (undefined1  [16])0x0;
  *(undefined8 *)(puVar15 + 6) = 0;
  func_0x0d3430a0(puVar15,&puStack_a30,0);
  lVar12 = param_1[0x24];
  param_1[0x24] = puVar15;
  if (lVar12 != 0) {
    lVar6 = *(long *)(lVar12 + 8);
    if (lVar6 != 0) {
      *(long *)(lVar12 + 0x10) = lVar6;
      func_0x0412a280(lVar6,*(long *)(lVar12 + 0x18) - lVar6);
    }
    func_0x0412a280(lVar12,0x28);
  }
  return;
LAB_0ca6fe30:
  puVar13 = puVar1 + 1;
  uVar14 = ~uVar20 + uVar14;
  uVar21 = 0;
  if (uVar14 == 0) goto LAB_0ca6ff3b;
  goto LAB_0ca6fe49;
}


