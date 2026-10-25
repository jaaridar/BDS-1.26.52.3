# FUN_04108570

- entry: `0x4108570`
- body size: 48 bytes
- callers: `FUN_04108328`

```c

void FUN_04108570(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = func_0x0eee2d60(0xf546fb8);
  if (iVar2 == 0) {
    return;
  }
  uVar3 = FUN_041085a0(&UNK_011b4e86,param_1);
  FUN_04882e20(uVar3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


```
