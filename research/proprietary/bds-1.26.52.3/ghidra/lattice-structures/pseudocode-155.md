# FUN_0c4fac60

- entry: `0xc4fac60`
- body size: 219 bytes
- callers: `FUN_09db9c20`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c4fac60(long param_1)

{
  long *plVar1;
  long *plStack_30;
  uint uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    plStack_30 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plStack_30 == (long *)0x0) {
      FUN_0eec74c0(0x20,0);
    }
    *plStack_30 = (long)&UNK_0f47e0b0;
    plStack_30[2] = 0;
    plStack_30[3] = 0;
    plStack_30[1] = (long)(plStack_30 + 2);
    FUN_0c44fd30(param_1,&plStack_30);
    plVar1 = plStack_30;
    plStack_30 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
  }
  uStack_18 = _DAT_01ce4920;
  uStack_28 = _DAT_01ce4910;
  uStack_24 = _UNK_01ce4914;
  uStack_20 = _UNK_01ce4918;
  uStack_1c = _UNK_01ce491c;
  func_0x0d6bbef0(*(undefined8 *)(param_1 + 0x10),&uStack_28,1);
  if ((uStack_28 & 1) != 0) {
    func_0x0412a280(uStack_18,CONCAT44(uStack_24,uStack_28) & 0xfffffffffffffffe);
  }
  return;
}


```
