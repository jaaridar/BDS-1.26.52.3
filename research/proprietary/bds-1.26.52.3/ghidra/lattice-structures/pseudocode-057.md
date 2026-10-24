# FUN_04882e20

- entry: `0x4882e20`
- body size: 12 bytes
- callers: `FUN_04863610`, `FUN_04e84570`, `FUN_04fbbda0`, `FUN_04fbffa0`, `FUN_0eeb79f0`

```c

void FUN_04882e20(void)

{
  code *pcVar1;
  
  func_0x04108700();
  func_0x04109e60();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


```
