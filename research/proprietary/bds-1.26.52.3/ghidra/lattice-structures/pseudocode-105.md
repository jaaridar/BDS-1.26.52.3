# FUN_048ac710

- entry: `0x48ac710`
- body size: 364 bytes
- callers: `FUN_04b0a270`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_048ac710(long *param_1,ulong *param_2)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  code *pcVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  bool bVar15;
  
  if (param_2 <= (ulong *)(param_1[2] << 6)) {
    return (ulong *)(param_1[2] << 6);
  }
  if ((long)param_2 < 0) {
    FUN_048acb40();
    pcVar4 = (code *)swi(3);
    puVar5 = (ulong *)(*pcVar4)();
    return puVar5;
  }
  uVar14 = (long)param_2 - 1U >> 6;
  lVar1 = uVar14 * 8 + 8;
  puVar5 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar1);
  if (puVar5 == (ulong *)0x0) {
    FUN_0eec74c0(lVar1,0);
  }
  puVar2 = (ulong *)*param_1;
  uVar3 = param_1[1];
  if (uVar3 < 0x41) {
    *puVar5 = 0;
    if (uVar3 != 0x40 && (uVar3 & 0x3f) == 0) goto LAB_048ac835;
  }
  else {
    puVar5[uVar3 - 1 >> 6] = 0;
  }
  uVar6 = 0;
  uVar12 = 0;
  puVar7 = puVar5;
  puVar8 = puVar2;
  puVar10 = puVar2;
  do {
    uVar13 = 1L << ((byte)uVar6 & 0x3f);
    if ((*puVar10 >> (uVar12 & 0x3f) & 1) == 0) {
      uVar13 = ~uVar13 & *puVar7;
    }
    else {
      uVar13 = uVar13 | *puVar7;
    }
    iVar11 = (int)uVar12;
    puVar9 = puVar10;
    if (iVar11 == 0x3f) {
      puVar9 = puVar10 + 1;
      puVar8 = puVar10 + 1;
    }
    uVar12 = (ulong)(iVar11 + 1);
    if (iVar11 == 0x3f) {
      uVar12 = 0;
    }
    *puVar7 = uVar13;
    bVar15 = (int)uVar6 == 0x3f;
    puVar7 = puVar7 + bVar15;
    puVar10 = puVar9;
    if (bVar15) {
      puVar10 = puVar8;
    }
    uVar6 = (ulong)((int)uVar6 + 1);
    if (bVar15) {
      uVar6 = 0;
    }
  } while (((uint)uVar12 != ((uint)uVar3 & 0x3f)) || (puVar10 != puVar2 + (uVar3 >> 6)));
LAB_048ac835:
  *param_1 = (long)puVar5;
  param_1[2] = uVar14 + 1;
  if (puVar2 == (ulong *)0x0) {
    return puVar5;
  }
  if (puVar2 != (ulong *)0x0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,puVar2);
  }
  return puVar5;
}


```
