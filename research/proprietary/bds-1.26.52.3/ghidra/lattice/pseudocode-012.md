# FUN_04882eb0

- entry: `0x4882eb0`
- body size: 45 bytes
- callers: `FUN_0d33fd60`, `FUN_0d341b00`, `FUN_0d3430a0`

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
