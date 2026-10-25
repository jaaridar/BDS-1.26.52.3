# FUN_0412d610

- entry: `0x412d610`
- body size: 118 bytes
- callers: `FUN_04b0ace0`, `FUN_0eeb79f0`

```c

/* WARNING: Possible PIC construction at 0x0412d642: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0412d647) */

void FUN_0412d610(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  FUN_0412d680();
  uVar1 = (*(uint *)(param_1 + 0x88) & 0x7fffffff) - 1;
  uVar2 = *(uint *)(param_1 + 0x88) & 0x80000000 | uVar1;
  *(uint *)(param_1 + 0x88) = uVar2;
  if (((int)uVar2 < 0) && (uVar1 == 0)) {
    func_0x0412d6b0(param_1);
    (*(code *)PTR_pthread_cond_signal_0f546638)(param_1 + 0x58);
    return;
  }
  (*(code *)PTR_pthread_mutex_unlock_0f546448)(param_1);
  return;
}


```
