# FUN_0d293a40

- entry: `0xd293a40`
- body size: 423 bytes
- callers: (none in the analysed set)

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_0d293a40(undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  char *in_RAX;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long unaff_RBP;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_R12;
  long unaff_R14;
  char *pcVar10;
  undefined1 auVar11 [16];
  long lStack0000000000000008;
  undefined8 *puStack0000000000000010;
  
  *in_RAX = *in_RAX + (char)in_RAX;
  pcVar10 = (char *)(unaff_R12 - param_5 >> 2);
  if (pcVar10 <= in_RAX) {
    pcVar10 = in_RAX;
  }
  if (0x7ffffffffffffff7 < (ulong)(unaff_R12 - param_5)) {
    pcVar10 = (char *)0x1fffffffffffffff;
  }
  lStack0000000000000008 = param_5;
  puStack0000000000000010 = param_1;
  if (pcVar10 == (char *)0x0) {
    lVar4 = 0;
  }
  else {
    if ((char *)0x1fffffffffffffff < pcVar10) {
      FUN_04882eb0();
      pcVar2 = (code *)swi(3);
      puVar5 = (undefined8 *)(*pcVar2)();
      return puVar5;
    }
    lVar4 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)pcVar10 * 8);
    if (lVar4 == 0) {
      FUN_0eec74c0((long)pcVar10 * 8,0);
      lVar4 = 0;
    }
  }
  lVar3 = lStack0000000000000008;
  puVar5 = (undefined8 *)(lVar4 + unaff_R14);
  uVar1 = *param_3;
  uVar7 = param_2 + 0x1fffffffffffffffU & 0x1fffffffffffffff;
  puVar6 = puVar5;
  if (2 < uVar7) {
    uVar7 = uVar7 + 1;
    uVar8 = uVar7 & 0xfffffffffffffffc;
    puVar6 = puVar5 + uVar8;
    auVar11._8_4_ = (int)uVar1;
    auVar11._0_8_ = uVar1;
    auVar11._12_4_ = (int)((ulong)uVar1 >> 0x20);
    uVar9 = 0;
    do {
      *(undefined1 (*) [16])(unaff_R14 + lVar4 + uVar9 * 8) = auVar11;
      *(undefined1 (*) [16])(unaff_R14 + lVar4 + 0x10 + uVar9 * 8) = auVar11;
      uVar9 = uVar9 + 4;
    } while (uVar8 != uVar9);
    if (uVar7 == uVar8) goto LAB_0d293b9c;
  }
  do {
    *puVar6 = uVar1;
    puVar6 = puVar6 + 1;
  } while (puVar6 != puVar5 + param_2);
LAB_0d293b9c:
  memcpy(puVar5 + -unaff_RBP,lStack0000000000000008);
  puVar6 = puStack0000000000000010;
  *puStack0000000000000010 = puVar5 + -unaff_RBP;
  puStack0000000000000010[1] = puVar5 + param_2;
  puStack0000000000000010[2] = lVar4 + (long)pcVar10 * 8;
  if (lVar3 == 0) {
    return puStack0000000000000010;
  }
  if (lVar3 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,lVar3);
  }
  return puVar6;
}


```
