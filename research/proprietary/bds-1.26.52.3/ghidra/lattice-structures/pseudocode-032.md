# FUN_04864e50

- entry: `0x4864e50`
- body size: 215 bytes
- callers: `FUN_04e3fa40`

```c

undefined8 FUN_04864e50(undefined8 param_1,long *param_2,byte *param_3,undefined *param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  
  if ((*param_3 & 1) == 0) {
    param_3 = param_3 + 1;
    cVar1 = (char)param_2[1];
  }
  else {
    param_3 = *(byte **)(param_3 + 0x10);
    cVar1 = (char)param_2[1];
  }
  puVar6 = &DAT_0f54fc40;
  if (cVar1 == '\a') {
    puVar6 = &DAT_0f54fc40;
    lVar4 = *(long *)(*param_2 + 8);
    if (lVar4 != 0) {
      lVar5 = *param_2 + 8;
      lVar7 = lVar5;
      do {
        uVar2 = strcmp(*(undefined8 *)(lVar4 + 0x20),param_3);
        if (-1 < (int)uVar2) {
          lVar7 = lVar4;
        }
        lVar4 = *(long *)(lVar4 + (ulong)(uVar2 >> 0x1f) * 8);
      } while (lVar4 != 0);
      if (lVar7 != lVar5) {
        iVar3 = strcmp(param_3,*(undefined8 *)(lVar7 + 0x20));
        if (iVar3 < 0) {
          puVar6 = &DAT_0f54fc40;
        }
        else {
          puVar6 = (undefined *)(lVar7 + 0x28);
        }
      }
    }
  }
  if (puVar6 != PTR_DAT_0f53c8b0) {
    param_4 = puVar6;
  }
  FUN_04863480(param_1,param_4);
  return param_1;
}


```
