# FUN_04a3b850

- entry: `0x4a3b850`
- body size: 225 bytes
- callers: `FUN_09e20de0`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_04a3b850(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  param_1[0x14] = 0;
  param_1[0xe] = (long)&UNK_0eeed698;
  uVar1 = _UNK_0eeed6b8;
  lVar2 = _UNK_0eeed6b0;
  *param_1 = _UNK_0eeed6b0;
  *(undefined8 *)((long)param_1 + *(long *)(lVar2 + -0x18)) = uVar1;
  lVar2 = *(long *)(*param_1 + -0x18) + (long)param_1;
  func_0x04144780(lVar2,param_1 + 1);
  *(undefined8 *)(lVar2 + 0x88) = 0;
  *(undefined4 *)(lVar2 + 0x90) = 0xffffffff;
  *param_1 = (long)&UNK_0eeed670;
  param_1[0xe] = (long)&UNK_0eeed698;
  param_1[1] = (long)&UNK_0eeece20;
  func_0x041679a0(param_1 + 2);
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = (long)&UNK_0eeed150;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x10;
  func_0x04141a10(param_1 + 1);
  return;
}


```
