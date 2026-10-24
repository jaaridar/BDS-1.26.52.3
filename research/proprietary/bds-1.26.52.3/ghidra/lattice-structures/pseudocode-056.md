# FUN_04882e30

- entry: `0x4882e30`
- body size: 14 bytes
- callers: `FUN_0412e5e0`, `FUN_0412f8c0`, `FUN_04865230`, `FUN_04e84570`, `FUN_04fbbda0`

```c

void FUN_04882e30(void)

{
  code *pcVar1;
  
  func_0x04882e40(&UNK_01429271);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


```
