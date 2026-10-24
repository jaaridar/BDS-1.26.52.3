# FUN_04167a20

- entry: `0x4167a20`
- body size: 24 bytes
- callers: `FUN_041679a0`, `FUN_04fd3eb0`

```c

void FUN_04167a20(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if (lVar1 != 0xf5478c0) {
    LOCK();
    *(long *)(lVar1 + 8) = *(long *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return;
}


```
