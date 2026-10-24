# FUN_04fd3e96

- entry: `0x4fd3e96`
- body size: 15 bytes
- callers: (none in the analysed set)

```c

void FUN_04fd3e96(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  int *piVar1;
  code *pcVar2;
  
  piVar1 = (int *)(param_4 * 5 + -1);
  *piVar1 = *piVar1 + -1;
  _Unwind_Resume(param_1,param_2 + 4);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


```
