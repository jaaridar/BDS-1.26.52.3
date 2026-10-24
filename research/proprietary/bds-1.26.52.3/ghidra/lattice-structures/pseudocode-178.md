# FUN_048631d0

- entry: `0x48631d0`
- body size: 63 bytes
- callers: `FUN_048f0410`

```c

void FUN_048631d0(undefined8 *param_1,byte *param_2)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 1) = 4;
  uVar1 = FUN_0ee32660(8);
  if ((*param_2 & 1) == 0) {
    param_2 = param_2 + 1;
  }
  else {
    param_2 = *(byte **)(param_2 + 0x10);
  }
  func_0x04862ea0(uVar1,param_2);
  *param_1 = uVar1;
  return;
}


```
