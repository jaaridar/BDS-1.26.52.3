# FUN_04fbd8b0

- entry: `0x4fbd8b0`
- body size: 214 bytes
- callers: `FUN_04fbc500`

```c

void FUN_04fbd8b0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 **ppuStack_38;
  undefined8 **ppuStack_30;
  undefined1 uStack_28;
  
  ppuStack_38 = &puStack_48;
  ppuStack_30 = &puStack_50;
  uStack_28 = 0;
  puVar4 = param_2;
  puStack_48 = param_4;
  uStack_40 = param_1;
  if (param_2 != param_3) {
    do {
      *param_4 = *puVar4;
      if ((*(byte *)(puVar4 + 1) & 1) == 0) {
        param_4[3] = puVar4[3];
        uVar1 = *(undefined4 *)((long)puVar4 + 0xc);
        uVar2 = *(undefined4 *)(puVar4 + 2);
        uVar3 = *(undefined4 *)((long)puVar4 + 0x14);
        *(undefined4 *)(param_4 + 1) = *(undefined4 *)(puVar4 + 1);
        *(undefined4 *)((long)param_4 + 0xc) = uVar1;
        *(undefined4 *)(param_4 + 2) = uVar2;
        *(undefined4 *)((long)param_4 + 0x14) = uVar3;
        puStack_50 = param_4;
      }
      else {
        puStack_50 = param_4;
        FUN_0412e5e0(param_4 + 1,puVar4[3],puVar4[2]);
      }
      param_4[4] = puVar4[4];
      puVar4 = puVar4 + 5;
      param_4 = puStack_50 + 5;
      puStack_50 = param_4;
    } while (puVar4 != param_3);
    do {
      if ((*(byte *)(param_2 + 1) & 1) != 0) {
        func_0x0412a280(param_2[3],param_2[1] & 0xfffffffffffffffe);
      }
      param_2 = param_2 + 5;
    } while (param_2 != param_3);
  }
  return;
}


```
