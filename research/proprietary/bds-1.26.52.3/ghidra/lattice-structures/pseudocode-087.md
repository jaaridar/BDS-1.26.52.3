# FUN_0412d610

- entry: `0x412d610`
- body size: 113 bytes
- callers: `FUN_04b0a9a0`, `FUN_04b0ab40`, `FUN_04b0ace0`, `FUN_0eeb79f0`

```c

void FUN_0412d610(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  FUN_0412d680();
  uVar1 = (*(uint *)(param_1 + 0x88) & 0x7fffffff) - 1;
  uVar2 = *(uint *)(param_1 + 0x88) & 0x80000000 | uVar1;
  *(uint *)(param_1 + 0x88) = uVar2;
  if ((int)uVar2 < 0) {
    if (uVar1 != 0) goto <EXTERNAL>_pthread_mutex_unlock;
    pthread_mutex_unlock(param_1);
    param_1 = param_1 + 0x58;
  }
  else {
    if (uVar1 != 0x7ffffffe) {
<EXTERNAL>_pthread_mutex_unlock:
      (*(code *)PTR_pthread_mutex_unlock_0f546448)(param_1);
      return;
    }
    pthread_mutex_unlock(param_1);
    param_1 = param_1 + 0x28;
  }
  (*(code *)PTR_pthread_cond_signal_0f546638)(param_1);
  return;
}


```
