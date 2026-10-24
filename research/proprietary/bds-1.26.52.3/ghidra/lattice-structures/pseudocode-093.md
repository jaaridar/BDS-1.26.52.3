# FUN_049c8240

- entry: `0x49c8240`
- body size: 101 bytes
- callers: `FUN_09cba670`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_049c8240(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *in_RAX;
  undefined8 *puVar2;
  bool bVar3;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
    if (puVar1 != (undefined8 *)param_1[1]) {
      puVar2 = (undefined8 *)param_1[1] + -0x13;
      do {
        (**(code **)*puVar2)(puVar2);
        in_RAX = puVar2 + -0x13;
        bVar3 = puVar2 != puVar1;
        puVar2 = in_RAX;
      } while (bVar3);
      puVar2 = (undefined8 *)*param_1;
    }
    param_1[1] = (long)puVar1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,puVar2);
    }
    return in_RAX;
  }
  return in_RAX;
}


```
