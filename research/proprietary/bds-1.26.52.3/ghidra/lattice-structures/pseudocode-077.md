# FUN_0c4510a0

- entry: `0xc4510a0`
- body size: 470 bytes
- callers: `FUN_09cba670`, `FUN_09cbbb50`, `FUN_0c451750`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c4510a0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  long *plStack_38;
  
  *param_1 = &UNK_0f36e918;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((long)param_1 + 0x13) = 0;
  *(undefined8 *)((long)param_1 + 0x1b) = 0;
  *(undefined2 *)((long)param_1 + 0x23) = 0x101;
  *(undefined1 *)((long)param_1 + 0x25) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  lVar1 = param_2[3];
  param_1[3] = lVar1;
  if (*(short *)(param_2 + 4) == 0x7fff && lVar1 != 0) {
    func_0x0c455510(param_1,*(undefined8 *)(lVar1 + 0x68),*(undefined1 *)((long)param_2 + 0x22));
    *(undefined2 *)(param_1 + 4) = 0x7fff;
  }
  else {
    iVar2 = -1;
    if (*(char *)((long)param_2 + 0x23) == '\x01') {
      iVar2 = 0;
      if (((long *)param_2[1] != (long *)0x0) && (lVar1 = *(long *)param_2[1], lVar1 != 0)) {
        iVar2 = (int)*(short *)(lVar1 + 0x8a);
      }
    }
    func_0x0c455d80(param_1,iVar2,*(undefined1 *)((long)param_2 + 0x22),(int)*(short *)(param_2 + 4)
                    ,0);
  }
  lVar1 = param_2[2];
  if (lVar1 == 0) {
    plStack_38 = (long *)0x0;
  }
  else {
    plStack_38 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plStack_38 == (long *)0x0) {
      FUN_0eec74c0(0x20,0);
    }
    *plStack_38 = (long)&UNK_0f47e0b0;
    plStack_38[2] = 0;
    plStack_38[3] = 0;
    plStack_38[1] = (long)(plStack_38 + 2);
    func_0x0d6bd5f0(plStack_38,lVar1);
  }
  func_0x0c44fd30(param_1,&plStack_38);
  if (plStack_38 != (long *)0x0) {
    (**(code **)(*plStack_38 + 8))();
  }
  *(undefined1 *)((long)param_1 + 0x24) = *(undefined1 *)((long)param_2 + 0x24);
  *(undefined1 *)((long)param_1 + 0x25) = *(undefined1 *)((long)param_2 + 0x25);
  if (param_1 != param_2) {
    func_0x0c474810(param_1 + 6,param_2[6],param_2[7],(long)(param_2[7] - param_2[6]) >> 3);
    func_0x0c474810(param_1 + 10,param_2[10],param_2[0xb],(long)(param_2[0xb] - param_2[10]) >> 3);
  }
  param_1[0xe] = param_2[0xe];
  func_0x0c45ff60(param_1);
  func_0x0c455670(param_1);
  return;
}


```
