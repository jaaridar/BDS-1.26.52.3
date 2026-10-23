# FUN_04882e30

- entry: `0x4882e30`
- body size: 14 bytes
- callers: `FUN_0412f8c0`, `FUN_04134310`

```c

void FUN_04882e30(void)

{
  code *pcVar1;
  
  FUN_04882e40(&UNK_01429271);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


```
