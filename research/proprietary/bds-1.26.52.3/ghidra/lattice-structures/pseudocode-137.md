# FUN_04882e40

- entry: `0x4882e40`
- body size: 73 bytes
- callers: `FUN_04882e30`, `FUN_0488efe0`, `FUN_048acb40`, `FUN_04aa1db0`, `FUN_04e61280`, `FUN_04fbd830`, `FUN_05ab4620`, `FUN_07ca0550`, `FUN_09ce3840`, `FUN_0eebe8b0`, `FUN_0eee1ae0`, `FUN_0eee2980`

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
