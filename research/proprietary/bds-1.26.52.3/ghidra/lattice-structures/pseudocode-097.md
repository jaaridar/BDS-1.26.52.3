# FUN_04963c80

- entry: `0x4963c80`
- body size: 62 bytes
- callers: `FUN_09cba670`

```c

void FUN_04963c80(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  if (plVar1 != (long *)0x0) {
    LOCK();
    *(int *)((long)plVar1 + 0xc) = *(int *)((long)plVar1 + 0xc) + -1;
    UNLOCK();
    if (((*(int *)((long)plVar1 + 0xc) < 1) && (*plVar1 == 0)) && (*param_1 != 0)) {
      func_0x0412a280(*param_1,0x10);
    }
    *param_1 = 0;
  }
  return;
}


```
