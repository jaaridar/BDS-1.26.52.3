# FUN_049c2320

- entry: `0x49c2320`
- body size: 80 bytes
- callers: `FUN_09cba670`

```c

void FUN_049c2320(undefined8 *param_1)

{
  undefined1 uStack_9;
  
  *param_1 = &UNK_0f371da8;
  if ((ulong)*(uint *)(param_1 + 0x12) != 0xffffffff) {
    (**(code **)(&UNK_0ef4a6a8 + (ulong)*(uint *)(param_1 + 0x12) * 8))(&uStack_9,param_1 + 0x10);
  }
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  FUN_0c44e610();
  return;
}


```
