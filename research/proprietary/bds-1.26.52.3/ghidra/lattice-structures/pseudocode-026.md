# FUN_04865100

- entry: `0x4865100`
- body size: 138 bytes
- callers: `FUN_04e3fa40`

```c

bool FUN_04865100(long *param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if ((char)param_1[1] != '\a') {
    return false;
  }
  lVar3 = *(long *)(*param_1 + 8);
  if (lVar3 != 0) {
    lVar5 = *param_1 + 8;
    lVar4 = lVar5;
    do {
      uVar2 = strcmp(*(undefined8 *)(lVar3 + 0x20),param_2);
      if (-1 < (int)uVar2) {
        lVar4 = lVar3;
      }
      lVar3 = *(long *)(lVar3 + (uVar2 >> 0x1f & 1) * 8);
    } while (lVar3 != 0);
    if (lVar4 != lVar5) {
      iVar1 = strcmp(param_2,*(undefined8 *)(lVar4 + 0x20));
      return (undefined *)(lVar4 + 0x28) != PTR_DAT_0f53c8b0 && -1 < iVar1;
    }
  }
  return false;
}


```
