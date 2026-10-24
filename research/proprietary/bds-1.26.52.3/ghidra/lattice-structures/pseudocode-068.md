# FUN_04fd3eb0

- entry: `0x4fd3eb0`
- body size: 432 bytes
- callers: `FUN_04fd3c93`

```c

void FUN_04fd3eb0(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar13 = *param_1;
  lVar6 = param_1[1];
  lVar12 = (lVar13 - lVar6) + param_2[1];
  if (lVar13 != lVar6) {
    lVar11 = 0;
    do {
      uVar10 = ((undefined8 *)(lVar13 + lVar11))[1];
      *(undefined8 *)(lVar12 + lVar11) = *(undefined8 *)(lVar13 + lVar11);
      ((undefined8 *)(lVar12 + lVar11))[1] = uVar10;
      *(undefined8 *)(lVar13 + lVar11) = 0;
      ((undefined8 *)(lVar13 + lVar11))[1] = 0;
      puVar2 = (undefined8 *)(lVar12 + 0x20 + lVar11);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined8 *)(lVar12 + 0x10 + lVar11);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined8 *)(lVar12 + 0x30 + lVar11) = 0;
      *(undefined8 *)(lVar12 + 0x28 + lVar11) = *(undefined8 *)(lVar13 + 0x28 + lVar11);
      puVar3 = (undefined4 *)(lVar13 + 0x18 + lVar11);
      uVar7 = puVar3[1];
      uVar8 = puVar3[2];
      uVar9 = puVar3[3];
      puVar4 = (undefined4 *)(lVar12 + 0x18 + lVar11);
      *puVar4 = *puVar3;
      puVar4[1] = uVar7;
      puVar4[2] = uVar8;
      puVar4[3] = uVar9;
      *(undefined2 *)(lVar13 + 0x18 + lVar11) = 0;
      *(undefined8 *)(lVar12 + 0x10 + lVar11) = *(undefined8 *)(lVar13 + 0x10 + lVar11);
      func_0x04167a20(lVar12 + lVar11 + 0x38,lVar13 + lVar11 + 0x38);
      puVar2 = (undefined8 *)(lVar13 + 0x40 + lVar11);
      uVar10 = puVar2[1];
      puVar5 = (undefined8 *)(lVar12 + 0x40 + lVar11);
      *puVar5 = *puVar2;
      puVar5[1] = uVar10;
      puVar2 = (undefined8 *)(lVar13 + 0x50 + lVar11);
      uVar10 = puVar2[1];
      puVar5 = (undefined8 *)(lVar12 + 0x50 + lVar11);
      *puVar5 = *puVar2;
      puVar5[1] = uVar10;
      puVar2 = (undefined8 *)(lVar13 + 0x60 + lVar11);
      uVar10 = puVar2[1];
      puVar5 = (undefined8 *)(lVar12 + 0x60 + lVar11);
      *puVar5 = *puVar2;
      puVar5[1] = uVar10;
      puVar2 = (undefined8 *)(lVar13 + 0x60 + lVar11);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined8 *)(lVar12 + 0x70 + lVar11) = *(undefined8 *)(lVar13 + 0x70 + lVar11);
      puVar2 = (undefined8 *)(lVar13 + 0x78 + lVar11);
      uVar10 = puVar2[1];
      puVar5 = (undefined8 *)(lVar12 + 0x78 + lVar11);
      *puVar5 = *puVar2;
      puVar5[1] = uVar10;
      puVar2 = (undefined8 *)(lVar12 + 0x88 + lVar11);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined8 *)(lVar12 + 0x98 + lVar11) = 0;
      puVar3 = (undefined4 *)(lVar13 + 0x88 + lVar11);
      uVar7 = puVar3[1];
      uVar8 = puVar3[2];
      uVar9 = puVar3[3];
      puVar4 = (undefined4 *)(lVar12 + 0x88 + lVar11);
      *puVar4 = *puVar3;
      puVar4[1] = uVar7;
      puVar4[2] = uVar8;
      puVar4[3] = uVar9;
      *(undefined8 *)(lVar12 + 0x98 + lVar11) = *(undefined8 *)(lVar13 + 0x98 + lVar11);
      puVar2 = (undefined8 *)(lVar13 + 0x88 + lVar11);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined8 *)(lVar13 + 0x98 + lVar11) = 0;
      *(undefined2 *)(lVar12 + 0xa0 + lVar11) = *(undefined2 *)(lVar13 + 0xa0 + lVar11);
      lVar1 = lVar13 + lVar11;
      lVar11 = lVar11 + 0xa8;
    } while (lVar1 + 0xa8 != lVar6);
    do {
      FUN_04fcf220(lVar13);
      lVar13 = lVar13 + 0xa8;
    } while (lVar13 != lVar6);
    lVar13 = *param_1;
  }
  param_2[1] = lVar12;
  param_1[1] = lVar13;
  *param_1 = param_2[1];
  param_2[1] = lVar13;
  lVar13 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar13;
  lVar13 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar13;
  *param_2 = param_2[1];
  return;
}


```
