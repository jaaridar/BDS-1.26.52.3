# FUN_0c450a10

- entry: `0xc450a10`
- body size: 184 bytes
- callers: `FUN_09cba670`

```c

bool FUN_0c450a10(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined1 uVar3;
  long lVar4;
  undefined1 uStack_31;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined1 *puStack_20;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    puStack_30 = &UNK_01ce47e0;
    uStack_28 = 0x17;
    lVar4 = FUN_0d6c97a0(lVar1 + 8,&puStack_30);
    if (lVar4 != lVar1 + 0x10) {
      if ((ulong)*(uint *)(lVar4 + 0x60) == 0xffffffff) {
        FUN_04931450();
        pcVar2 = (code *)swi(3);
        uVar3 = (*pcVar2)();
        return (bool)uVar3;
      }
      puStack_20 = &uStack_31;
      lVar4 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar4 + 0x60) * 8))
                        (&puStack_20,lVar4 + 0x38);
      if (lVar4 != 0) {
        puStack_30 = &UNK_01ce47e0;
        uStack_28 = 0x17;
        lVar4 = FUN_0d6c97a0(lVar1 + 8,&puStack_30);
        if ((lVar4 != lVar1 + 0x10) && (*(int *)(lVar4 + 0x60) == 1)) {
          return *(char *)(lVar4 + 0x40) != '\0';
        }
      }
    }
  }
  return false;
}


```
