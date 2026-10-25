# FUN_048acb40

- entry: `0x48acb40`
- body size: 14 bytes
- callers: `FUN_048ac710`, `FUN_04b0a270`

```c

void FUN_048acb40(void)

{
  code *pcVar1;
  
  FUN_04882e40(&UNK_013f6512);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


```
