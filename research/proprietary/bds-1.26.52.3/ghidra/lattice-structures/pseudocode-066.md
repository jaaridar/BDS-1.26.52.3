# FUN_04fbd830

- entry: `0x4fbd830`
- body size: 14 bytes
- callers: `FUN_04fbc500`

```c

void FUN_04fbd830(void)

{
  code *pcVar1;
  
  FUN_04882e40(&UNK_013f6512);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


```
