# FUN_04882eb0

- entry: `0x4882eb0`
- body size: 45 bytes
- callers: `FUN_04909a40`, `FUN_04fd3c93`, `FUN_057d8ed0`, `FUN_0eeb79f0`

```c

void FUN_04882eb0(void)

{
  code *pcVar1;
  undefined8 uVar2;
  
  uVar2 = func_0x041086b0(8);
  func_0x0412a430(uVar2);
  func_0x041088a0(uVar2,&UNK_0eeebbc0,&UNK_0412a380);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


```
