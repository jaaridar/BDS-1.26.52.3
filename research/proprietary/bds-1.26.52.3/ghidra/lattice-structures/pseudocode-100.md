# FUN_0412c300

- entry: `0x412c300`
- body size: 44 bytes
- callers: `FUN_0eeb81b0`

```c

long FUN_0412c300(long param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  do {
    if (lVar1 == -1) {
      return 0;
    }
    LOCK();
    lVar2 = *(long *)(param_1 + 8);
    bVar3 = lVar1 == lVar2;
    if (bVar3) {
      *(long *)(param_1 + 8) = lVar1 + 1;
      lVar2 = lVar1;
    }
    UNLOCK();
    lVar1 = lVar2;
  } while (!bVar3);
  return param_1;
}


```
