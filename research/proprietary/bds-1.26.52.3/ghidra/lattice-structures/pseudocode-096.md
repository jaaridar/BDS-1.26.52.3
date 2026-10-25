# FUN_04931450

- entry: `0x4931450`
- body size: 48 bytes
- callers: `FUN_09cba670`, `FUN_0c450a10`, `FUN_0c8fa2a0`, `FUN_0d6bd5f0`

```c

void FUN_04931450(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_041086b0(8);
  *puVar2 = &UNK_0eef04d0;
  FUN_041088a0(puVar2,&UNK_0eef04e8,&UNK_0412a380);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


```
