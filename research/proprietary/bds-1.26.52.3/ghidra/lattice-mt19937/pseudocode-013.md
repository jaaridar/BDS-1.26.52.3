# FUN_0d3457a0

- entry: `0xd3457a0`
- body size: 100 bytes
- callers: `FUN_0d3430a0`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0d3457a0(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if (param_1[1] != lVar1) {
    param_1[2] = lVar1 + (((lVar1 - param_1[1]) - 0x80cU) / 0x80c) * -0x80c + -0x80c;
  }
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,lVar1);
    }
    return lVar1;
  }
  return 0;
}


```
