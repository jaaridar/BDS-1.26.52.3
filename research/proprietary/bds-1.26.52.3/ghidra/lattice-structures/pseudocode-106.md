# FUN_04108700

- entry: `0x4108700`
- body size: 115 bytes
- callers: `FUN_041088a0`, `FUN_04882e20`

```c

ulong * FUN_04108700(ulong *param_1)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong *puVar5;
  int iVar6;
  
  uVar1 = *param_1;
  plVar3 = (long *)func_0x0410a090();
  puVar5 = param_1 + -0xc;
  if (uVar1 >> 8 == 0x434c4e47432b2b) {
    iVar6 = -(int)param_1[-5];
    if (iVar6 < 0) {
      iVar6 = (int)param_1[-5];
    }
    *(int *)(param_1 + -5) = iVar6 + 1;
    if (puVar5 != (ulong *)*plVar3) {
      param_1[-6] = (ulong)*plVar3;
      *plVar3 = (long)puVar5;
    }
    *(int *)(plVar3 + 1) = (int)plVar3[1] + -1;
    param_1 = (ulong *)param_1[-1];
  }
  else {
    if (*plVar3 != 0) {
      uVar4 = FUN_04109e60();
      FUN_04882e20(uVar4);
      pcVar2 = (code *)swi(3);
      puVar5 = (ulong *)(*pcVar2)();
      return puVar5;
    }
    *plVar3 = (long)puVar5;
    param_1 = param_1 + 4;
  }
  return param_1;
}


```
