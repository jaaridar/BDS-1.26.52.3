# FUN_0c467270

- entry: `0xc467270`
- body size: 312 bytes
- callers: `FUN_09db9c20`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c467270(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 uStack_41;
  long *plStack_40;
  uint uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  uint *puStack_20;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    plStack_40 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plStack_40 == (long *)0x0) {
      FUN_0eec74c0(0x20,0);
    }
    *plStack_40 = (long)&UNK_0f47e0b0;
    plStack_40[2] = 0;
    plStack_40[3] = 0;
    plStack_40[1] = (long)(plStack_40 + 2);
    FUN_0c44fd30(param_1,&plStack_40);
    if (plStack_40 != (long *)0x0) {
      (**(code **)(*plStack_40 + 8))();
    }
  }
  if (*(char *)(param_2 + 0x7b) == '\x01') {
    *(undefined2 *)(param_1 + 0x20) = 6;
  }
  uStack_38 = _DAT_01ce5740;
  uStack_34 = _UNK_01ce5744;
  uStack_30 = _UNK_01ce5748;
  uStack_2c = _UNK_01ce574c;
  uStack_28 = 0;
  uVar1 = *(undefined8 *)(param_2 + 8);
  puStack_20 = &uStack_38;
  lVar2 = func_0x0d6c9580(*(long *)(param_1 + 0x10) + 8,puStack_20,&UNK_01563a4f,&puStack_20,
                          &uStack_41);
  if ((ulong)*(uint *)(lVar2 + 0x60) != 0xffffffff) {
    (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar2 + 0x60) * 8))(&puStack_20,lVar2 + 0x38);
  }
  *(undefined **)(lVar2 + 0x38) = &UNK_0f47e200;
  *(undefined8 *)(lVar2 + 0x40) = uVar1;
  *(undefined4 *)(lVar2 + 0x60) = 4;
  if ((uStack_38 & 1) != 0) {
    func_0x0412a280(uStack_28,CONCAT44(uStack_34,uStack_38) & 0xfffffffffffffffe);
  }
  return;
}


```
