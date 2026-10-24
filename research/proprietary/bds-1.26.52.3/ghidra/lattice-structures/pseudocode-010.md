# FUN_04fbffa0

- entry: `0x4fbffa0`
- body size: 144 bytes
- callers: (none in the analysed set)

```c

void FUN_04fbffa0(void)

{
  code *pcVar1;
  undefined8 uVar2;
  
  func_0x0412d6b0();
  uVar2 = FUN_04882e20();
  uVar2 = FUN_04882e20(uVar2);
  func_0x04fc0b90(&stack0x00000068);
  func_0x04fc0b10(&stack0x00000020);
  uVar2 = _Unwind_Resume(uVar2);
  func_0x04fc0b10(&stack0x00000020);
  uVar2 = _Unwind_Resume(uVar2);
  func_0x0ee386e0(&stack0x000000c0);
  func_0x04fc0b10(&stack0x00000020);
  uVar2 = _Unwind_Resume(uVar2);
  FUN_0eeb81b0(&stack0x00000040);
  func_0x04fc0b10(&stack0x00000020);
  _Unwind_Resume(uVar2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


```
