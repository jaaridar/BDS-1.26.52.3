# FUN_09c70160

- entry: `0x9c70160`
- body size: 53 bytes
- callers: `FUN_09cba670`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_09c70160(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 in_RAX;
  
  plVar1 = (long *)*param_1;
  *param_1 = 0;
  if (plVar1 != (long *)0x0) {
    plVar2 = (long *)*plVar1;
    *plVar1 = 0;
    if (plVar2 != (long *)0x0) {
      in_RAX = (**(code **)(*plVar2 + 8))();
    }
    if (plVar1 != (long *)0x0) {
      (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,plVar1);
    }
    return in_RAX;
  }
  return in_RAX;
}


```
