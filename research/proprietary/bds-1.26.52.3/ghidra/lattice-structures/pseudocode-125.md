# FUN_0eee2940

- entry: `0xeee2940`
- body size: 52 bytes
- callers: `FUN_0eee07b0`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0eee2940(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1] - param_1[2];
  if (lVar1 != 0) {
    param_1[2] = param_1[2] + (lVar1 + 7U & 0xfffffffffffffff8);
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
