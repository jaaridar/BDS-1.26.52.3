# FUN_04913fa0

- entry: `0x4913fa0`
- body size: 68 bytes
- callers: `FUN_09ce36f0`

```c

void FUN_04913fa0(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x18) == '\0') {
    lVar1 = **(long **)(param_1 + 8);
    for (lVar2 = **(long **)(param_1 + 0x10); lVar2 != lVar1; lVar2 = lVar2 + -0x20) {
      if ((*(byte *)(lVar2 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar2 + -0x10),
                        *(ulong *)(lVar2 + -0x20) & 0xfffffffffffffffe);
      }
    }
  }
  return;
}


```
