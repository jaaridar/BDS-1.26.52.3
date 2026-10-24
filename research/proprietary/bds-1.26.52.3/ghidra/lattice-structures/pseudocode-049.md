# FUN_04909a40

- entry: `0x4909a40`
- body size: 396 bytes
- callers: `FUN_04e84570`, `FUN_04fbbda0`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_04909a40(long *param_1,byte *param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lStack_58;
  undefined4 *puStack_50;
  undefined4 *puStack_48;
  long lStack_40;
  long *plStack_38;
  
  lVar11 = *param_1;
  lVar12 = param_1[1] - lVar11;
  uVar9 = (lVar12 >> 3) * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar9) {
    FUN_0488efe0();
LAB_04909bb3:
    uVar6 = FUN_04882eb0();
    func_0x048abaf0(&lStack_58);
    _Unwind_Resume(uVar6);
    pcVar1 = (code *)swi(3);
    puVar7 = (undefined4 *)(*pcVar1)();
    return puVar7;
  }
  lVar8 = param_1[2] - lVar11 >> 3;
  uVar2 = lVar8 * 0x5555555555555556;
  if (uVar9 < uVar2) {
    uVar9 = uVar2;
  }
  if (0x555555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
    uVar9 = 0xaaaaaaaaaaaaaaa;
  }
  plStack_38 = param_1;
  if (uVar9 != 0) {
    if (0xaaaaaaaaaaaaaaa < uVar9) goto LAB_04909bb3;
    lStack_58 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar9 * 0x18);
    if (lStack_58 != 0) goto LAB_04909af8;
    FUN_0eec74c0(uVar9 * 0x18,0);
  }
  lStack_58 = 0;
LAB_04909af8:
  puStack_50 = (undefined4 *)(lStack_58 + lVar12);
  lStack_40 = lStack_58 + uVar9 * 0x18;
  puStack_48 = puStack_50;
  if ((*param_2 & 1) == 0) {
    *(undefined8 *)(puStack_50 + 4) = *(undefined8 *)(param_2 + 0x10);
    uVar3 = *(undefined4 *)(param_2 + 4);
    uVar4 = *(undefined4 *)(param_2 + 8);
    uVar5 = *(undefined4 *)(param_2 + 0xc);
    *puStack_50 = *(undefined4 *)param_2;
    puStack_50[1] = uVar3;
    puStack_50[2] = uVar4;
    puStack_50[3] = uVar5;
  }
  else {
    FUN_0412e5e0(puStack_50,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
    lVar11 = *param_1;
    lVar12 = param_1[1] - lVar11;
  }
  lVar8 = lStack_40;
  puVar7 = puStack_48 + 6;
  lVar10 = (long)puStack_50 - lVar12;
  memcpy(lVar10,lVar11,lVar12);
  lVar11 = *param_1;
  lVar12 = param_1[2];
  *param_1 = lVar10;
  param_1[1] = (long)puVar7;
  param_1[2] = lVar8;
  if (lVar11 != 0) {
    func_0x0412a280(lVar11,lVar12 - lVar11);
  }
  return puVar7;
}


```
