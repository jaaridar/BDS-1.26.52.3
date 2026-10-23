# FUN_04882ef0

- entry: `0x4882ef0`
- body size: 73 bytes
- callers: `FUN_0d345700`, `FUN_0d345720`

```c

void FUN_04882ef0(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_041086b0(0x10);
  func_0x04882f40(uVar2,param_1);
  uVar3 = FUN_041088a0(uVar2,&UNK_0eeec978,&UNK_0412bce0);
  FUN_04108780(uVar2);
  _Unwind_Resume(uVar3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


```
