# FUN_0ee386e0

- entry: `0xee386e0`
- body size: 57 bytes
- callers: `FUN_04e5fb80`, `FUN_04fbc500`, `FUN_04fbffb0`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0ee386e0(ulong *param_1)

{
  if ((*param_1 >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(*param_1 & 0xff00ffffffffffff) - 8);
  }
  *param_1 = 0;
  return;
}


```
