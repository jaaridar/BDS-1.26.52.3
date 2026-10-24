# FUN_048648e0

- entry: `0x48648e0`
- body size: 131 bytes
- callers: `FUN_04e7ecf0`

```c

undefined * FUN_048648e0(long *param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar3 = &DAT_0f54fc40;
  if ((char)param_1[1] == '\a') {
    lVar4 = *(long *)(*param_1 + 8);
    if (lVar4 != 0) {
      lVar6 = *param_1 + 8;
      lVar5 = lVar6;
      do {
        uVar1 = strcmp(*(undefined8 *)(lVar4 + 0x20),param_2);
        if (-1 < (int)uVar1) {
          lVar5 = lVar4;
        }
        lVar4 = *(long *)(lVar4 + (ulong)(uVar1 >> 0x1f) * 8);
      } while (lVar4 != 0);
      puVar3 = &DAT_0f54fc40;
      if (lVar5 != lVar6) {
        iVar2 = strcmp(param_2,*(undefined8 *)(lVar5 + 0x20));
        if (iVar2 < 0) {
          puVar3 = &DAT_0f54fc40;
        }
        else {
          puVar3 = (undefined *)(lVar5 + 0x28);
        }
      }
    }
  }
  return puVar3;
}


```
