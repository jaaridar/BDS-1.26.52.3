# FUN_0c451750

- entry: `0xc451750`
- body size: 126 bytes
- callers: `FUN_09cba670`

```c

void FUN_0c451750(undefined8 *param_1,long param_2)

{
  undefined8 *puStack_20;
  
  FUN_0c4510a0();
  *param_1 = &UNK_0f371da8;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  if ((ulong)*(uint *)(param_2 + 0x90) == 0xffffffff) {
    *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  }
  else {
    puStack_20 = param_1 + 0x10;
    (**(code **)(&UNK_0f38c5a0 + (ulong)*(uint *)(param_2 + 0x90) * 8))
              (&puStack_20,puStack_20,param_2 + 0x80);
  }
  return;
}


```
