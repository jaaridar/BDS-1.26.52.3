# FUN_0eeb6180

- entry: `0xeeb6180`
- body size: 43 bytes
- callers: `FUN_0eeb79f0`

```c

void FUN_0eeb6180(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  if (param_1 != (long *)0x0) {
    LOCK();
    plVar1 = param_1 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*param_1 + 0x10))();
      if (param_1[2] != 0) {
        LOCK();
        plVar1 = param_1 + 2;
        lVar2 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar2 != 0) {
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0412c2ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x20))();
      return;
    }
  }
  return;
}


```
