# FUN_04e5f0c0

- entry: `0x4e5f0c0`
- body size: 236 bytes
- callers: (none in the analysed set)

```c

/* WARNING: Possible PIC construction at 0x04e5f16c: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_04e5f0c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uStack_20;
  
  *param_1 = &UNK_0ef852b8;
  if (param_1[0x2a] != 0) {
    uStack_20 = 0x4e5f0e8;
    (**(code **)(param_1[0x2a] + 8))(param_1 + 0x2a);
  }
  *param_1 = &UNK_0ef85358;
  if (param_1[0x22] != 0) {
    uStack_20 = 0x4e5f108;
    (**(code **)(param_1[0x22] + 8))(param_1 + 0x22);
  }
  uVar3 = 0;
  if (param_1[0x1a] != 0) {
    uStack_20 = 0x4e5f11e;
    uVar3 = (**(code **)(param_1[0x1a] + 8))(param_1 + 0x1a);
  }
  puVar1 = (undefined8 *)param_1[0x17];
  if (puVar1 == (undefined8 *)0x0) {
    uStack_20 = 0x4e5f179;
    uVar3 = func_0x0b63d230(param_1);
  }
  else {
    puVar5 = (undefined8 *)param_1[0x18];
    puVar4 = puVar1;
    if (puVar1 != puVar5) {
      do {
        puVar5 = puVar5 + -0x15;
        uStack_20 = 0x4e5f14f;
        uVar3 = func_0x04e60890(puVar5);
      } while (puVar5 != puVar1);
      puVar4 = (undefined8 *)param_1[0x17];
    }
    param_1[0x18] = puVar1;
    register0x00000020 = (BADSPACEBASE *)&uStack_20;
    uStack_20 = 0x4e5f171;
    param_1 = puVar4;
  }
  *(undefined8 *)((long)register0x00000020 + -8) = uVar3;
  if (param_1 != (undefined8 *)0x0) {
    pcVar2 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar2)(&DAT_0f5463b0,param_1);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


```
