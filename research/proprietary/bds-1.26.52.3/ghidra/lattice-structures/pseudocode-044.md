# FUN_04891200

- entry: `0x4891200`
- body size: 48 bytes
- callers: `FUN_04e5fb80`, `FUN_04fbc500`, `FUN_0eec09c0`, `FUN_0eeddcf0`

```c

void FUN_04891200(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)func_0x041086b0(8);
  *puVar2 = &UNK_0eef0410;
  func_0x041088a0(puVar2,&UNK_0eef0428,&UNK_0417ccb0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


```
