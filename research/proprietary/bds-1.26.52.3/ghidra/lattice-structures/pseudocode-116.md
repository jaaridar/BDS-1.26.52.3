# FUN_049d0d20

- entry: `0x49d0d20`
- body size: 153 bytes
- callers: `FUN_0eeb79f0`

```c

void FUN_049d0d20(long *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  
  plVar4 = (long *)param_1[3];
  param_1[2] = 0;
  param_1[3] = 0;
  if (plVar4 == (long *)0x0) {
    param_1[4] = 0;
    cVar3 = (char)param_1[1];
  }
  else {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      func_0x0412c2d0(plVar4);
    }
    plVar4 = (long *)param_1[3];
    param_1[4] = 0;
    if (plVar4 != (long *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        func_0x0412c2d0(plVar4);
      }
    }
    cVar3 = (char)param_1[1];
  }
  if (cVar3 == '\x01') {
    lVar5 = *param_1;
    LOCK();
    plVar4 = (long *)(lVar5 + 0xd0);
    lVar2 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar2 != -0x7fffffffffffffff) {
      return;
    }
    FUN_0412d450();
    LOCK();
    *(ulong *)(lVar5 + 0xd0) = *(ulong *)(lVar5 + 0xd0) & 0x7fffffffffffffff;
    UNLOCK();
    FUN_0412d520(lVar5);
    uVar6 = *(undefined8 *)(lVar5 + 0xc0);
    FUN_0412d680(uVar6);
    func_0x0412d6b0(uVar6);
    (*(code *)PTR_pthread_cond_broadcast_0f546458)(lVar5 + 0x90);
    return;
  }
  return;
}


```
