# FUN_0eebe810

- entry: `0xeebe810`
- body size: 147 bytes
- callers: `FUN_0eeb79f0`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0eebe810(long *param_1)

{
  long lVar1;
  long lVar2;
  long in_RAX;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar1 != lVar2) {
    in_RAX = lVar2 + -0x28;
    param_1[2] = in_RAX;
    if ((*(ulong *)(lVar2 + -0x10) >> 0x37 & 1) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(*(ulong *)(lVar2 + -0x10) & 0xff00ffffffffffff) - 8);
      in_RAX = param_1[2];
    }
    *(undefined8 *)(lVar2 + -0x10) = 0;
    lVar2 = in_RAX;
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
