# FUN_08b72cb0

- entry: `0x8b72cb0`
- body size: 193 bytes
- callers: `FUN_08b670e0`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08b72cb0(undefined1 *param_1,byte *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  
  uVar2 = func_0x08b72960(param_2);
  *param_1 = uVar2;
  func_0x08b72a30(param_1 + 8,param_2);
  if ((*param_2 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x10);
    uVar1 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 0x28) = uVar1;
  }
  else {
    FUN_0412e5e0(param_1 + 0x20,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined1 **)(param_1 + 0x38) = param_1 + 0x40;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined1 **)(param_1 + 0x50) = param_1 + 0x58;
  lVar3 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (lVar3 == 0) {
    FUN_0eec74c0(0x90,0);
  }
  thunk_FUN_0412d1e0(lVar3);
  *(long *)(param_1 + 0x68) = lVar3;
  param_1[0x70] = 0;
  return;
}


```
