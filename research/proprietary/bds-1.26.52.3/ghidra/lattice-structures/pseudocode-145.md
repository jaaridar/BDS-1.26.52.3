# FUN_04866db0

- entry: `0x4866db0`
- body size: 80 bytes
- callers: `FUN_04863610`, `FUN_04866db0`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_04866db0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    FUN_04866db0(param_1,*param_2);
    FUN_04866db0(param_1,param_2[1]);
    FUN_04863610(param_2 + 5);
    uVar1 = FUN_04862fd0(param_2 + 4);
    if (param_2 != (undefined8 *)0x0) {
      (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_2);
    }
    return uVar1;
  }
  return in_RAX;
}


```
