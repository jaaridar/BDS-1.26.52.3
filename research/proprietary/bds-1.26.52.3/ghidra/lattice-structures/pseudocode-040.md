# FUN_0eee1060

- entry: `0xeee1060`
- body size: 411 bytes
- callers: `FUN_04e5fb80`, `FUN_04fbc500`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_0eee1060(long *param_1,ulong param_2)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  uVar5 = param_1[1] - *param_1 >> 3;
  uVar3 = param_2 - uVar5;
  if (param_2 < uVar5 || uVar3 == 0) {
    if (param_2 < uVar5) {
      uVar3 = *param_1 + param_2 * 8;
      param_1[1] = uVar3;
    }
    return uVar3;
  }
  lVar9 = param_1[1];
  uVar5 = param_1[2] - lVar9 >> 3;
  if (uVar5 < uVar3) {
    lVar1 = *param_1;
    lVar9 = lVar9 - lVar1;
    uVar5 = uVar3 + (lVar9 >> 3);
    if (uVar5 >> 0x3d != 0) {
      func_0x0eee1ae0();
LAB_0eee1c6c:
      FUN_04882eb0();
      pcVar2 = (code *)swi(3);
      uVar3 = (*pcVar2)();
      return uVar3;
    }
    uVar6 = param_1[2] - lVar1;
    uVar10 = (long)uVar6 >> 2;
    if (uVar10 <= uVar5) {
      uVar10 = uVar5;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar10 = 0x1fffffffffffffff;
    }
    if (uVar10 == 0) {
      lVar4 = 0;
    }
    else {
      if (0x1fffffffffffffff < uVar10) goto LAB_0eee1c6c;
      lVar4 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
      if (lVar4 == 0) {
        lVar4 = 0;
        FUN_0eec74c0(uVar10 * 8,0);
      }
    }
    lVar7 = lVar4 + lVar9;
    memset(lVar7,0,uVar3 * 8);
    lVar8 = lVar7 + (lVar9 >> 3) * -8;
    uVar5 = memcpy(lVar8,lVar1,lVar9);
    *param_1 = lVar8;
    param_1[1] = uVar3 * 8 + lVar7;
    param_1[2] = uVar10 * 8 + lVar4;
    if (lVar1 != 0) {
      if (lVar1 != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,lVar1);
      }
      return uVar5;
    }
  }
  else {
    if (uVar3 != 0) {
      uVar5 = memset(lVar9,0,uVar3 * 8);
      lVar9 = lVar9 + uVar3 * 8;
    }
    param_1[1] = lVar9;
  }
  return uVar5;
}


```
