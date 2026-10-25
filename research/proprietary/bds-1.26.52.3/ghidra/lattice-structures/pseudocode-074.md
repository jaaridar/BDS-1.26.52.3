# FUN_0ee32660

- entry: `0xee32660`
- body size: 60 bytes
- callers: `FUN_0412e5e0`, `FUN_0412f8c0`, `FUN_04130630`, `FUN_0470d9a0`, `FUN_04865230`, `FUN_09cba670`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0ee32660(long param_1)

{
  long lVar1;
  
  lVar1 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,param_1);
  if (param_1 == 0 || lVar1 != 0) {
    return lVar1;
  }
  FUN_0eec74c0(param_1,0);
  return lVar1;
}


```
