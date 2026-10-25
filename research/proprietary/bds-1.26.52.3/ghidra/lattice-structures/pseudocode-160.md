# FUN_0c455d80

- entry: `0xc455d80`
- body size: 126 bytes
- callers: `FUN_0c4510a0`, `FUN_0c455510`

```c

void FUN_0c455d80(long *param_1,undefined8 param_2,int param_3,short param_4,undefined1 param_5)

{
  short sVar1;
  long lVar2;
  undefined1 uVar3;
  byte bStack_28;
  undefined7 uStack_27;
  undefined8 uStack_18;
  char cStack_10;
  
  uVar3 = (undefined1)param_3;
  if (param_3 < 1) {
    uVar3 = 0;
  }
  *(undefined1 *)((long)param_1 + 0x22) = uVar3;
  if (param_1[3] == 0) {
    sVar1 = 0;
    if (0 < param_4) {
      sVar1 = param_4;
    }
    *(short *)(param_1 + 4) = sVar1;
  }
  func_0x0c456010(param_1,param_2,param_5);
  lVar2 = func_0x0417cc60();
  param_1[5] = lVar2;
  if (*(char *)((long)param_1 + 0x22) == '\0') {
    bStack_28 = 0;
    cStack_10 = '\0';
    (**(code **)(*param_1 + 0x28))(param_1,&bStack_28);
    if ((cStack_10 == '\x01') && ((bStack_28 & 1) != 0)) {
      func_0x0412a280(uStack_18,CONCAT71(uStack_27,bStack_28) & 0xfffffffffffffffe);
      return;
    }
  }
  return;
}


```
