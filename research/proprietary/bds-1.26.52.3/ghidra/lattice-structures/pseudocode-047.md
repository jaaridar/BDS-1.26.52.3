# FUN_04882eb0

- entry: `0x4882eb0`
- body size: 45 bytes
- callers: `FUN_04e5fb80`, `FUN_04fbc500`, `FUN_09cba670`, `FUN_09e22e10`, `FUN_0c8fa2a0`, `FUN_0d293a40`, `FUN_0eeb79f0`, `FUN_0eee07b0`, `FUN_0eee1060`

```c

void FUN_04882eb0(void)

{
  code *pcVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_041086b0(8);
  func_0x0412a430(uVar2);
  FUN_041088a0(uVar2,&UNK_0eeebbc0,&UNK_0412a380);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


```
