# FUN_04e3f4a0

- entry: `0x4e3f4a0`
- body size: 22 bytes
- callers: (none in the analysed set)

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_04e3f4a0(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_RBX;
  
  pcVar1 = (code *)swi(0x2e);
  uVar2 = (*pcVar1)();
  *(int *)(param_2 + 0x1b0) = *(int *)(param_2 + 0x1b0) + 1;
  if (unaff_RBX != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0);
  }
  return uVar2;
}


```
