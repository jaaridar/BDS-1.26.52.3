# FUN_041087a0

- entry: `0x41087a0`
- body size: 95 bytes
- callers: `FUN_041088a0`

```c

long FUN_041087a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + -0x78) = 0;
  uVar1 = func_0x04109e50();
  *(undefined8 *)(param_1 + -0x60) = uVar1;
  uVar1 = func_0x04109ed0();
  *(undefined8 *)(param_1 + -0x58) = uVar1;
  *(undefined8 *)(param_1 + -0x70) = param_2;
  *(undefined8 *)(param_1 + -0x68) = param_3;
  *(undefined8 *)(param_1 + -0x20) = 0x434c4e47432b2b00;
  *(undefined **)(param_1 + -0x18) = &UNK_04108800;
  return param_1 + -0x80;
}


```
