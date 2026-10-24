# FUN_0488efe0

- entry: `0x488efe0`
- body size: 14 bytes
- callers: `FUN_04865230`, `FUN_04909a40`, `FUN_057d8ed0`

```c

void FUN_0488efe0(void)

{
  code *pcVar1;
  
  FUN_04882e40(&UNK_013f6512);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


```
