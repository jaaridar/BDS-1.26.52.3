# FUN_09cbbb50

- entry: `0x9cbbb50`
- body size: 240 bytes
- callers: `FUN_09cba670`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_09cbbb50(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  undefined1 uStack_30;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_30 = 0;
  puStack_38 = param_1;
  puVar1 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x98);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x98,0);
  }
  *param_1 = puVar1;
  param_1[1] = puVar1;
  param_1[2] = puVar1 + 0x13;
  FUN_0c4510a0(puVar1,param_2);
  *puVar1 = &UNK_0f371da8;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  *(undefined4 *)(puVar1 + 0x12) = 0;
  if ((ulong)*(uint *)(param_2 + 0x90) == 0xffffffff) {
    *(undefined4 *)(puVar1 + 0x12) = 0xffffffff;
  }
  else {
    puStack_40 = puVar1 + 0x10;
    (**(code **)(&UNK_0f38c5a0 + (ulong)*(uint *)(param_2 + 0x90) * 8))
              (&puStack_40,puStack_40,param_2 + 0x80);
  }
  param_1[1] = puVar1 + 0x13;
  return;
}


```
