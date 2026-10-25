# FUN_0412d550

- entry: `0x412d550`
- body size: 119 bytes
- callers: `FUN_04b0ace0`, `FUN_0eeb79f0`

```c

void FUN_0412d550(long param_1)

{
  long lStack_28;
  byte bStack_20;
  
  bStack_20 = 1;
  lStack_28 = param_1;
  FUN_0412d680();
  if (*(uint *)(param_1 + 0x88) < 0x7fffffff) {
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) + 1;
  }
  else {
    do {
      func_0x04136a30(param_1 + 0x28,&lStack_28);
    } while (0x7ffffffe < *(uint *)(param_1 + 0x88));
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) + 1;
    param_1 = lStack_28;
    if ((bStack_20 & 1) == 0) {
      return;
    }
  }
  func_0x0412d6b0(param_1);
  return;
}


```
