# FUN_08b670e0

- entry: `0x8b670e0`
- body size: 532 bytes
- callers: `FUN_09cba670`, `FUN_09dbc310`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08b670e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  byte bStack_60;
  undefined1 uStack_5f;
  undefined6 uStack_5e;
  undefined1 uStack_58;
  undefined2 uStack_57;
  undefined8 uStack_50;
  byte bStack_48;
  undefined4 uStack_47;
  undefined4 uStack_43;
  undefined4 uStack_3f;
  undefined4 uStack_3b;
  undefined1 uStack_37;
  undefined6 uStack_36;
  
  *param_1 = &UNK_0f149350;
  puVar1 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x90,0);
  }
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &UNK_0f149610;
  bStack_60 = 0;
  uStack_5f = 0;
  func_0x08b72cb0(puVar1 + 3,&bStack_60);
  if ((bStack_60 & 1) != 0) {
    func_0x0412a280(uStack_50,CONCAT62(uStack_5e,CONCAT11(uStack_5f,bStack_60)) & 0xfffffffffffffffe
                   );
  }
  param_1[1] = puVar1 + 3;
  param_1[2] = puVar1;
  func_0x0412d440(param_1 + 3);
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0x3f800000;
  func_0x0412d440(param_1 + 0x24);
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  bStack_60 = 0x12;
  uStack_5f = 0x70;
  uStack_5e = 0x616e2e6b6361;
  uStack_58 = 0x6d;
  uStack_57 = 0x65;
  bStack_48 = 0x20;
  uStack_47 = _DAT_01466d58;
  uStack_43 = _UNK_01466d5c;
  uStack_3f = _UNK_01466d60;
  uStack_3b = _UNK_01466d64;
  uStack_37 = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  func_0x048f5d50(param_1 + 0x39,&bStack_60,&stack0xffffffffffffffd0,2);
  if ((bStack_48 & 1) != 0) {
    func_0x0412a280(CONCAT62(uStack_36,CONCAT11(uStack_37,uStack_3b._3_1_)),
                    CONCAT35((undefined3)uStack_43,CONCAT41(uStack_47,bStack_48)) &
                    0xfffffffffffffffe);
  }
  if ((bStack_60 & 1) != 0) {
    func_0x0412a280(uStack_50,CONCAT62(uStack_5e,CONCAT11(uStack_5f,bStack_60)) & 0xfffffffffffffffe
                   );
  }
  *(undefined1 *)(param_1 + 0x3c) = 1;
  param_1[0x3d] = 0;
  func_0x0412d440(param_1 + 0x3e);
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  func_0x0412d440(param_1 + 0x53);
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  return;
}


```
