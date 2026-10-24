# FUN_04863790

- entry: `0x4863790`
- body size: 102 bytes
- callers: `FUN_04e3fa40`

```c

undefined8 * FUN_04863790(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  FUN_04863060(&uStack_20,0);
  uVar1 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uStack_18;
  uVar2 = *param_1;
  *param_1 = uStack_20;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)(param_2 + 1) = uStack_18;
  uVar3 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar3;
  uStack_20 = uVar2;
  uStack_18 = uVar1;
  FUN_04863610(&uStack_20);
  return param_1;
}


```
