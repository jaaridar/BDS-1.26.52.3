# FUN_04891200

- entry: `0x4891200`
- body size: 48 bytes
- callers: `FUN_0eeb5980`, `FUN_0eeddcf0`

```c

void FUN_04891200(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_041086b0(8);
  *puVar2 = &UNK_0eef0410;
  FUN_041088a0(puVar2,&UNK_0eef0428,&UNK_0417ccb0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


```
