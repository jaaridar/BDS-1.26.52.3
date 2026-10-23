# FUN_04109ee0

- entry: `0x4109ee0`
- body size: 48 bytes
- callers: `FUN_041088a0`, `FUN_04109e60`

```c

void FUN_04109ee0(code *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  (*param_1)();
  uVar2 = func_0x041085a0(&UNK_0126e48a);
  FUN_04108700(uVar2);
  uVar2 = func_0x041085a0(&UNK_0133d0e2);
  FUN_04882e20(uVar2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


```
