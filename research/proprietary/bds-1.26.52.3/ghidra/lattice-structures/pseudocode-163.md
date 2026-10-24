# FUN_0c474810

- entry: `0xc474810`
- body size: 360 bytes
- callers: `FUN_0c4510a0`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c474810(long *param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  lVar2 = *param_1;
  uVar4 = param_1[2];
  if (param_4 <= (ulong)((long)(uVar4 - lVar2) >> 3)) {
    lVar5 = param_1[1];
    if (param_4 <= (ulong)(lVar5 - lVar2 >> 3)) {
      param_3 = param_3 - param_2;
      if (param_3 != 0) {
        memmove(lVar2,param_2,param_3);
      }
      param_1[1] = lVar2 + param_3;
      return;
    }
    lVar1 = param_2 + (lVar5 - lVar2);
    if (lVar5 != lVar2) {
      memmove(lVar2,param_2);
      lVar5 = param_1[1];
    }
    param_3 = param_3 - lVar1;
    if (param_3 != 0) {
      memmove(lVar5,lVar1,param_3);
    }
LAB_0c47492e:
    param_1[1] = lVar5 + param_3;
    return;
  }
  if (lVar2 != 0) {
    param_1[1] = lVar2;
    func_0x0412a280();
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar4 = 0;
  }
  if (param_4 >> 0x3d == 0) {
    uVar6 = (long)uVar4 >> 2;
    if ((ulong)((long)uVar4 >> 2) <= param_4) {
      uVar6 = param_4;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar6 = 0x1fffffffffffffff;
    }
    if (uVar6 < 0x2000000000000000) {
      lVar5 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar6 * 8);
      if (lVar5 == 0) {
        FUN_0eec74c0(uVar6 * 8,0);
      }
      *param_1 = lVar5;
      param_1[1] = lVar5;
      param_1[2] = lVar5 + uVar6 * 8;
      param_3 = param_3 - param_2;
      if (param_3 != 0) {
        memcpy(lVar5,param_2,param_3);
      }
      goto LAB_0c47492e;
    }
  }
  func_0x074edd50();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


```
