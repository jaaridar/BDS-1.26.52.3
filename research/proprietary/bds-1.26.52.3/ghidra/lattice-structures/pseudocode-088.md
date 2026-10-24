# FUN_0eec09c0

- entry: `0xeec09c0`
- body size: 218 bytes
- callers: `FUN_0eeb79f0`, `FUN_0eeb81b0`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0eec09c0(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plStack_28;
  
  lVar4 = func_0x0eee1380(param_1 + 0x68);
  if (lVar4 == 0) {
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (plVar6 == (long *)0x0) {
      FUN_0eec74c0(0x40,0);
    }
    *plVar6 = (long)plVar6;
    plVar6[1] = (long)plVar6;
    plVar5 = plVar6 + 2;
    plVar6[2] = 0;
    plVar6[3] = 0;
    plVar6[4] = 0;
    plVar6[5] = 0;
    plVar6[6] = 0;
    plVar6[7] = 0;
    plVar1 = *(long **)(param_1 + 0x20);
    plStack_28 = plVar5;
    if (plVar1 == (long *)0x0) {
      func_0x04891200();
      pcVar3 = (code *)swi(3);
      plVar6 = (long *)(*pcVar3)();
      return plVar6;
    }
    (**(code **)(*plVar1 + 0x30))(plVar1,&plStack_28);
    func_0x0eee1580(param_1 + 0x68,plVar6);
    FUN_0412d680(param_1 + 0x40);
    puVar2 = *(undefined8 **)(param_1 + 0x38);
    plVar6[1] = (long)puVar2;
    *plVar6 = param_1 + 0x30;
    *puVar2 = plVar6;
    *(long **)(param_1 + 0x38) = plVar6;
    pthread_mutex_unlock(param_1 + 0x40);
  }
  else {
    plVar5 = (long *)(lVar4 + 0x10);
  }
  return plVar5;
}


```
