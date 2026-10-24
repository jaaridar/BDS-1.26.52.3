# FUN_04109e60

- entry: `0x4109e60`
- body size: 82 bytes
- callers: `FUN_041086b0`, `FUN_04108700`, `FUN_04882e20`

```c

void FUN_04109e60(void)

{
  char cVar1;
  long *plVar2;
  code *pcVar3;
  long unaff_RBX;
  
  plVar2 = (long *)func_0x0410a0b0();
  if ((plVar2 != (long *)0x0) && (unaff_RBX = *plVar2, unaff_RBX != 0)) goto LAB_04109e82;
  do {
    func_0x04109ee0(uRam000000000f53dac8);
LAB_04109e82:
    cVar1 = func_0x04108690(unaff_RBX + 0x60);
  } while (cVar1 == '\0');
  pcVar3 = (code *)func_0x04109ee0(*(undefined8 *)(unaff_RBX + 0x28));
  FUN_04882e20();
  (*pcVar3)();
  FUN_041085a0(&UNK_011e925c);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


```
