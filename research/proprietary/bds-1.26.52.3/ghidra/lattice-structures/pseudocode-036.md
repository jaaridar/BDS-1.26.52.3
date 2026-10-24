# FUN_04e60890

- entry: `0x4e60890`
- body size: 362 bytes
- callers: `FUN_04e5f0c0`

```c

/* WARNING: Possible PIC construction at 0x04e609b9: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04e6091c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x04e609be) */
/* WARNING: Removing unreachable block (ram,0x04e609cc) */
/* WARNING: Removing unreachable block (ram,0x04e60921) */
/* WARNING: Removing unreachable block (ram,0x04e60929) */

void FUN_04e60890(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = *(long *)(param_1 + 0x88);
  if (lVar2 != 0) {
    lVar5 = *(long *)(param_1 + 0x90);
    lVar4 = lVar2;
    if (lVar2 != lVar5) {
      do {
        plVar3 = *(long **)(lVar5 + -8);
        if (plVar3 != (long *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          lVar4 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar4 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
            goto SUB_0412c2d0;
          }
        }
        if ((*(byte *)(lVar5 + -0x30) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lVar5 + -0x20),
                          *(ulong *)(lVar5 + -0x30) & 0xfffffffffffffffe);
        }
        lVar5 = lVar5 + -0x38;
      } while (lVar5 != lVar2);
      lVar4 = *(long *)(param_1 + 0x88);
    }
    *(long *)(param_1 + 0x90) = lVar2;
    func_0x0412a280(lVar4,*(long *)(param_1 + 0x98) - lVar4);
  }
  plVar3 = *(long **)(param_1 + 0x68);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      goto SUB_0412c2d0;
    }
  }
  func_0x04167a40(param_1 + 0x38);
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(param_1 + 0x28),*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffe)
    ;
  }
  plVar3 = *(long **)(param_1 + 8);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
SUB_0412c2d0:
      if (plVar3[2] != 0) {
        LOCK();
        plVar1 = plVar3 + 2;
        lVar2 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar2 != 0) {
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0412c2ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x20))();
      return;
    }
  }
  return;
}


```
