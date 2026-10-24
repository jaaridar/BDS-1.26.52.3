# FUN_0eee07b0

- entry: `0xeee07b0`
- body size: 899 bytes
- callers: `FUN_04e5fb80`, `FUN_04fbc500`

```c

/* WARNING: Possible PIC construction at 0x0eee0b04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0eee0b09) */
/* WARNING: Removing unreachable block (ram,0x0eee0b0e) */
/* WARNING: Removing unreachable block (ram,0x0eee0b1a) */
/* WARNING: Removing unreachable block (ram,0x0eee0b2a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0eee07b0(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  long lStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  long lStack_38;
  
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  lVar2 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x2000);
  if (lVar2 == 0) {
    FUN_0eec74c0(0x2000,0);
  }
  param_1[1] = lVar2;
  param_1[3] = lVar2 + 0x2000;
  memset(lVar2,0,0x2000);
  param_1[2] = lVar2 + 0x2000;
  lVar2 = *param_2;
  FUN_0412d680(lVar2);
  puVar6 = *(undefined8 **)(lVar2 + 0x40);
  puVar11 = *(undefined8 **)(lVar2 + 0x48);
  uVar3 = (long)puVar11 - (long)puVar6 >> 3;
  puVar1 = puVar6;
  uVar12 = uVar3;
  uVar8 = (long)puVar11 - (long)puVar6;
  while (uVar8 != 0) {
    uVar8 = uVar12 >> 1;
    uVar9 = ~uVar8 + uVar12;
    uVar12 = uVar8;
    if ((undefined8 *)puVar1[uVar8] < param_1) {
      puVar1 = puVar1 + uVar8 + 1;
      uVar12 = uVar9;
      uVar8 = uVar9;
    }
  }
  if (puVar1 == puVar11) {
    puVar7 = *(undefined8 **)(lVar2 + 0x50);
    if (puVar11 < puVar7) {
      *puVar11 = param_1;
      *(undefined8 **)(lVar2 + 0x48) = puVar11 + 1;
      goto SUB_0412d6b0;
    }
  }
  else {
    if ((undefined8 *)*puVar1 <= param_1) goto SUB_0412d6b0;
    puVar7 = *(undefined8 **)(lVar2 + 0x50);
    if (puVar11 < puVar7) {
      puVar6 = puVar11;
      if (puVar11 + -1 < puVar11) {
        puVar6 = puVar11 + 1;
        *puVar11 = puVar11[-1];
      }
      *(undefined8 **)(lVar2 + 0x48) = puVar6;
      if (puVar11 != puVar1 + 1) {
        memmove(puVar1 + 1,puVar1);
      }
      *puVar1 = param_1;
      goto SUB_0412d6b0;
    }
  }
  lVar10 = (long)puVar1 - (long)puVar6;
  uVar3 = uVar3 + 1;
  if (uVar3 >> 0x3d == 0) {
    uVar12 = (long)puVar7 - (long)puVar6 >> 2;
    if (uVar12 <= uVar3) {
      uVar12 = uVar3;
    }
    lStack_38 = lVar2 + 0x40;
    if (0x7ffffffffffffff7 < (ulong)((long)puVar7 - (long)puVar6)) {
      uVar12 = 0x1fffffffffffffff;
    }
    if (uVar12 == 0) {
      lVar13 = 0;
      lVar4 = 0;
    }
    else {
      if (0x1fffffffffffffff < uVar12) goto LAB_0eee0ae8;
      lVar13 = uVar12 << 3;
      lVar4 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar13);
      if (lVar4 == 0) {
        lVar4 = 0;
        FUN_0eec74c0(lVar13,0);
      }
    }
    puStack_50 = (undefined8 *)(lVar4 + lVar10);
    puVar7 = (undefined8 *)(lVar4 + lVar13);
    puVar5 = puStack_50;
    lStack_58 = lVar4;
    puStack_48 = puStack_50;
    puStack_40 = puVar7;
    if (lVar10 == lVar13) {
      if (puVar1 == puVar6) {
        puVar5 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
        if (puVar5 == (undefined8 *)0x0) {
          FUN_0eec74c0(8,0);
        }
        puVar7 = puVar5 + 1;
        if (lVar4 != 0) {
          func_0x0412a280(lVar4,lVar10);
          puVar11 = *(undefined8 **)(lVar2 + 0x48);
        }
      }
      else {
        puVar5 = (undefined8 *)
                 ((long)puStack_50 +
                 (((lVar10 >> 3) - ((lVar10 >> 3) + 1 >> 0x3f)) + 1U & 0x3ffffffffffffffe) * -4);
      }
    }
    *puVar5 = param_1;
    memcpy(puVar5 + 1,puVar1,(long)puVar11 - (long)puVar1);
    *(undefined8 **)(lVar2 + 0x48) = puVar1;
    lVar10 = (long)puVar1 - *(long *)(lVar2 + 0x40);
    lVar13 = (long)puVar5 - lVar10;
    memcpy(lVar13,*(long *)(lVar2 + 0x40),lVar10);
    lVar10 = *(long *)(lVar2 + 0x40);
    lVar4 = *(long *)(lVar2 + 0x50);
    *(long *)(lVar2 + 0x40) = lVar13;
    *(long *)(lVar2 + 0x48) = (long)puVar5 + ((long)puVar11 - (long)puVar1) + 8;
    *(undefined8 **)(lVar2 + 0x50) = puVar7;
    if (lVar10 != 0) {
      func_0x0412a280(lVar10,lVar4 - lVar10);
    }
  }
  else {
    func_0x0eee2980();
LAB_0eee0ae8:
    FUN_04882eb0();
    func_0x0eee2940(&lStack_58);
  }
SUB_0412d6b0:
  (*(code *)PTR_pthread_mutex_unlock_0f546448)(lVar2);
  return;
}


```
