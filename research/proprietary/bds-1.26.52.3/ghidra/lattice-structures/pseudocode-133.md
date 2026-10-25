# FUN_041085a0

- entry: `0x41085a0`
- body size: 199 bytes
- callers: `FUN_04108328`, `FUN_04108570`, `FUN_04109e60`

```c

void FUN_041085a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14)

{
  code *pcVar1;
  undefined *puVar2;
  char in_AL;
  undefined8 uStack_e8;
  undefined1 *puStack_e0;
  undefined1 *puStack_d8;
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_48;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  puVar2 = PTR_stderr_0f53c850;
  if (in_AL != '\0') {
    uStack_98 = param_1;
    uStack_88 = param_2;
    uStack_78 = param_3;
    uStack_68 = param_4;
    uStack_58 = param_5;
    uStack_48 = param_6;
    uStack_38 = param_7;
    uStack_28 = param_8;
  }
  uStack_c0 = param_10;
  uStack_b8 = param_11;
  uStack_b0 = param_12;
  uStack_a8 = param_13;
  uStack_a0 = param_14;
  func_0x0eee2d90(&UNK_014aad7d,0xb,1,*(undefined8 *)PTR_stderr_0f53c850);
  puStack_d8 = auStack_c8;
  puStack_e0 = &stack0x00000008;
  uStack_e8 = 0x3000000008;
  func_0x0eee2da0(*(undefined8 *)puVar2,param_9,&uStack_e8);
  func_0x0eee2db0(10,*(undefined8 *)puVar2);
  func_0x0eee2dc0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


```
