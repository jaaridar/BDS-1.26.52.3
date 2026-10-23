# FUN_04882e20

- entry: `0x4882e20`
- body size: 12 bytes
- callers: `FUN_041086b0`, `FUN_04108700`, `FUN_04109e60`, `FUN_04109ee0`

```c

void FUN_04882e20(void)

{
  code *pcVar1;
  
  FUN_04108700();
  FUN_04109e60();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


```
