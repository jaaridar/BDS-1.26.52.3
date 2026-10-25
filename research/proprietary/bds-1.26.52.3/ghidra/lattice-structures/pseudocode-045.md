# FUN_04882e30

- entry: `0x4882e30`
- body size: 14 bytes
- callers: `FUN_0412e5e0`, `FUN_0412f8c0`, `FUN_04130630`, `FUN_04865230`, `FUN_04885070`, `FUN_04885120`, `FUN_048f0410`, `FUN_048f35b0`, `FUN_04e5fb80`, `FUN_04fbc500`, `FUN_09cbbc90`, `FUN_09e20be0`, `FUN_09e20de0`, `FUN_09e22e10`

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
