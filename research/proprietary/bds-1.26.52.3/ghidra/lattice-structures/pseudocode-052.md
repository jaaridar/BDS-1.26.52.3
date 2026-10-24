# FUN_048650e0

- entry: `0x48650e0`
- body size: 31 bytes
- callers: `FUN_04e84570`, `FUN_04fbbda0`

```c

undefined8 FUN_048650e0(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  if ((*param_3 & 1) == 0) {
    param_3 = param_3 + 1;
  }
  else {
    param_3 = *(byte **)(param_3 + 0x10);
  }
  func_0x04864f30(param_1,param_2,param_3);
  return param_1;
}


```
