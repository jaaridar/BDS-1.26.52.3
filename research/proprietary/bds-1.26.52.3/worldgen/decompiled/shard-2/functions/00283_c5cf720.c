/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6cf720 (ELF vaddr 0xc5cf720)
 * Label: callee-of:0xce76060
 * Body:  [[0c6cf720, 0c6cf9ce] [0c6cf9da, 0c6cfa0c] [0c6cfa16, 0c6cfb01]]
 * Ghidra: FUN_0c6cf720
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_0c6cf720(long param_1,undefined8 param_2)

{
  float *pfVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  ulong *puVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  uint uVar10;
  int *piVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong uVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined4 *puStack_78;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  undefined4 *puStack_50;
  undefined1 auStack_44 [20];
  
  bVar2 = *(byte *)(param_1 + 8);
  if ((bVar2 & 1) == 0) {
    uVar14 = (ulong)(bVar2 >> 1);
  }
  else {
    uVar14 = *(ulong *)(param_1 + 0x10);
  }
  uVar12 = uVar14 + 7;
  if (0xfffffffffffffff7 < uVar12) {
LAB_0c6cf9c8:
    lVar9 = FUN_04882e30();
    if ((uStack_68 & 1) != 0) goto LAB_0c6cf9f2;
    while ((uStack_88 & 1) == 0) {
      func_0x0eee2d70(lVar9);
LAB_0c6cf9f2:
      func_0x0412a280(uStack_58,uStack_68 & 0xfffffffffffffffe);
    }
    piVar11 = (int *)(uStack_88 & 0xfffffffffffffffe);
    func_0x0412a280(puStack_78);
    fVar17 = (float)func_0x0eee2d70();
    puVar8 = *(undefined4 **)(lVar9 + 0x208);
    fVar18 = (float)floorf(*puVar8);
    iVar4 = (int)fVar18;
    iVar3 = *piVar11;
    uVar10 = iVar3 - iVar4;
    if (iVar3 < iVar4) {
      uVar10 = iVar4 - iVar3;
    }
    if (uVar10 < 2) {
      fVar18 = (float)floorf(puVar8[2]);
      iVar4 = (int)fVar18;
      iVar3 = piVar11[2];
      uVar10 = iVar3 - iVar4;
      if (iVar3 < iVar4) {
        uVar10 = iVar4 - iVar3;
      }
      if (uVar10 < 2) {
        fVar19 = (float)piVar11[1];
        fVar18 = *(float *)(*(long *)(lVar9 + 0x210) + 4);
        uVar14 = (ulong)CONCAT31((int3)((uint)iVar4 >> 8),fVar19 < fVar18);
        if (fVar19 < fVar18) {
          return uVar14;
        }
        pfVar1 = (float *)(*(long *)(lVar9 + 0x210) + 0x10);
        if (*pfVar1 <= fVar19 && fVar19 != *pfVar1) {
          return uVar14;
        }
      }
    }
    fVar17 = ((*(float *)(*(long *)(lVar9 + 0x218) + 4) - fVar17) * _DAT_011987f8) / _DAT_01198934 +
             _DAT_011986e0;
    return (ulong)(0x4030502 >> (((char)(int)fVar17 - (fVar17 < (float)(int)fVar17)) * '\b' & 0x1fU)
                  );
  }
  if (uVar12 < 0x17) {
    uStack_80 = 0;
    puStack_78 = (undefined4 *)0x0;
    uStack_88 = (ulong)(byte)((char)uVar12 * '\x02');
  }
  else {
    uVar15 = 0x1a;
    if ((uVar12 | 7) != 0x17) {
      uVar15 = (uVar12 | 7) + 1;
    }
    puStack_78 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15);
    if (puStack_78 == (undefined4 *)0x0) {
      puStack_50 = puStack_78;
      FUN_0eec74c0(uVar15,0);
      puStack_78 = puStack_50;
    }
    uStack_88 = uVar15 | 1;
    uStack_80 = uVar12;
  }
  puVar6 = (ulong *)((long)puStack_78 + 7);
  bVar16 = (uStack_88 & 1) == 0;
  puVar8 = (undefined4 *)((long)&uStack_88 + 1);
  puVar5 = puStack_78;
  if (bVar16) {
    puVar5 = puVar8;
  }
  *(undefined4 *)((long)puVar5 + 3) = 0x205b6b63;
  *puVar5 = 0x636f6c42;
  puVar13 = &uStack_80;
  if (!bVar16) {
    puVar13 = puVar6;
  }
  if (uVar14 != 0) {
    if ((bVar2 & 1) == 0) {
      lVar9 = param_1 + 9;
    }
    else {
      lVar9 = *(long *)(param_1 + 0x18);
    }
    func_0x0eee2ee0(puVar13,lVar9,uVar14);
  }
  *(undefined1 *)((long)puVar13 + uVar14) = 0;
  puVar6 = (ulong *)func_0x0412f8c0(&uStack_88,&UNK_011e9ce4,2);
  uStack_58 = puVar6[2];
  uStack_68 = *puVar6;
  uStack_60 = puVar6[1];
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  func_0x057d8ed0(param_2,&uStack_68);
  if ((uStack_68 & 1) != 0) {
    func_0x0412a280(uStack_58,uStack_68 & 0xfffffffffffffffe);
  }
  if ((uStack_88 & 1) != 0) {
    func_0x0412a280(puStack_78,uStack_88 & 0xfffffffffffffffe);
  }
  puVar7 = (undefined1 *)func_0x04136630(auStack_44,*(undefined2 *)(param_1 + 0x14e));
  uVar14 = (long)puVar7 - (long)auStack_44;
  if (0xfffffffffffffff7 < uVar14) goto LAB_0c6cf9c8;
  if (uVar14 < 0x17) {
    uStack_88 = CONCAT71(uStack_88._1_7_,(char)uVar14 * '\x02');
    if (puVar7 == auStack_44) goto LAB_0c6cf918;
  }
  else {
    uVar12 = 0x1a;
    if ((uVar14 | 7) != 0x17) {
      uVar12 = (uVar14 | 7) + 1;
    }
    puVar8 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar12);
    if (puVar8 == (undefined4 *)0x0) {
      FUN_0eec74c0(uVar12,0);
    }
    uStack_88 = uVar12 | 1;
    uStack_80 = uVar14;
    puStack_78 = puVar8;
  }
  memcpy(puVar8,auStack_44,uVar14);
LAB_0c6cf918:
  *(undefined1 *)((long)puVar8 + uVar14) = 0;
  puVar6 = (ulong *)func_0x0412f0e0(&uStack_88,0,&UNK_013873ce,10);
  uStack_58 = puVar6[2];
  uStack_68 = *puVar6;
  uStack_60 = puVar6[1];
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  uVar14 = func_0x057d8ed0(param_2,&uStack_68);
  if ((uStack_68 & 1) != 0) {
    uVar14 = func_0x0412a280(uStack_58,uStack_68 & 0xfffffffffffffffe);
  }
  if ((uStack_88 & 1) != 0) {
    uVar14 = func_0x0412a280(puStack_78,uStack_88 & 0xfffffffffffffffe);
  }
  return uVar14;
}


