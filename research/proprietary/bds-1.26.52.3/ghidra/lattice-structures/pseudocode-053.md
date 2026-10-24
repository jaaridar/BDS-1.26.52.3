# FUN_048641f0

- entry: `0x48641f0`
- body size: 38 bytes
- callers: `FUN_04e84570`, `FUN_04fbbda0`

```c

ulong FUN_048641f0(long *param_1)

{
  ulong uVar1;
  
  if ((char)param_1[1] == '\a') {
    uVar1 = (ulong)*(uint *)(*param_1 + 0x10);
  }
  else {
    uVar1 = 0;
    if ((char)param_1[1] == '\x06') {
      return (ulong)(((long *)*param_1)[1] - *(long *)*param_1) >> 3;
    }
  }
  return uVar1;
}


```
