# FUN_08b5a9c0

- entry: `0x8b5a9c0`
- body size: 32 bytes
- callers: (none in the analysed set)

```c

ulong FUN_08b5a9c0(long param_1,uint param_2)

{
  ulong uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_0ee4a030(*(undefined8 *)(param_1 + 0x9f8),0);
    return (uVar1 & 0xffffffff) % (ulong)param_2;
  }
  return 0;
}


```
