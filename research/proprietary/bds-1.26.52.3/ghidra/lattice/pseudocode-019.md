# FUN_04882e40

- entry: `0x4882e40`
- body size: 73 bytes
- callers: `FUN_049cd2d0`, `FUN_052bdad0`, `FUN_052bdae0`, `FUN_0d345710`

```c

void FUN_04882e40(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_041086b0(0x10);
  func_0x04882e90(uVar2,param_1);
  uVar3 = FUN_041088a0(uVar2,&UNK_0eeec938,&UNK_0412bce0);
  func_0x04108780(uVar2);
  _Unwind_Resume(uVar3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


```
