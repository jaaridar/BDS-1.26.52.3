# thunk_FUN_0ee326a0

- entry: `0x412a280`
- body size: 5 bytes
- callers: `FUN_0529bef0`, `FUN_0d33fd60`, `FUN_0d341b00`, `FUN_0d3430a0`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 thunk_FUN_0ee326a0(long param_1)

{
  undefined8 in_RAX;
  
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return in_RAX;
}


```
