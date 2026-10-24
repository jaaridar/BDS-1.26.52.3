# FUN_0eeb61d0

- entry: `0xeeb61d0`
- body size: 166 bytes
- callers: `FUN_04b0a9a0`, `FUN_04b0ab40`, `FUN_04b0ace0`

```c

void FUN_0eeb61d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9,undefined1 param_10,undefined4 param_11,undefined4 param_12,
                 undefined8 param_13,undefined8 param_14)

{
  char cVar1;
  char in_AL;
  undefined8 uStack_d8;
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  undefined1 auStack_b8 [32];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_48;
  undefined8 uStack_38;
  undefined8 uStack_28;
  undefined8 uStack_18;
  
  if (in_AL == '\0') {
    cVar1 = *(char *)(param_9 + 0x18);
  }
  else {
    cVar1 = *(char *)(param_9 + 0x18);
    uStack_88 = param_1;
    uStack_78 = param_2;
    uStack_68 = param_3;
    uStack_58 = param_4;
    uStack_48 = param_5;
    uStack_38 = param_6;
    uStack_28 = param_7;
    uStack_18 = param_8;
  }
  if (cVar1 != '\x01') {
    return;
  }
  puStack_c8 = auStack_b8;
  puStack_d0 = &stack0x00000008;
  uStack_d8 = 0x3000000020;
  uStack_98 = param_13;
  uStack_90 = param_14;
  func_0x0eeb6280(param_9,param_10,param_12,param_11,&uStack_d8);
  return;
}


```
