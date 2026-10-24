# FUN_0412e520

- entry: `0x412e520`
- body size: 102 bytes
- callers: `FUN_0412d680`

```c

void FUN_0412e520(undefined4 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_041086b0(0x20);
  func_0x0412dfb0(uVar2,param_1,0xf53dbe0,param_2);
  uVar3 = FUN_041088a0(uVar2,&UNK_0eeecbf8,&UNK_0412e4f0);
  func_0x04108780(uVar2);
  _Unwind_Resume(uVar3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


```
