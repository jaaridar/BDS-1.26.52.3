# FUN_041088a0

- entry: `0x41088a0`
- body size: 87 bytes
- callers: `FUN_04882e40`, `FUN_04882eb0`, `FUN_04891200`

```c

void FUN_041088a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = func_0x0410a090();
  *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  lVar2 = func_0x041087a0(param_1,param_2,param_3);
  *(undefined8 *)(lVar2 + 8) = 1;
  func_0x0eee2de0(lVar2 + 0x60);
  func_0x04108700(lVar2 + 0x60);
  func_0x04109ee0(*(undefined8 *)(lVar2 + 0x28));
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


```
