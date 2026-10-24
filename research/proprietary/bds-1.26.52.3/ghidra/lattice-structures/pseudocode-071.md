# FUN_04fd4060

- entry: `0x4fd4060`
- body size: 92 bytes
- callers: `FUN_04fd3c93`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_04fd4060(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 in_RAX;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar1 != lVar2) {
    param_1[2] = lVar2 + -0xa8;
    in_RAX = FUN_04fcf220();
    lVar2 = param_1[2];
  }
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,lVar1);
    }
    return in_RAX;
  }
  return in_RAX;
}


```
