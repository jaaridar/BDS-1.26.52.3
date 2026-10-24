# FUN_04af20a0

- entry: `0x4af20a0`
- body size: 200 bytes
- callers: `FUN_04e85ae0`, `FUN_04fbd340`

```c

byte FUN_04af20a0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                 uint param_5)

{
  char cVar1;
  byte bVar2;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined8 uStack_77;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 uStack_38;
  undefined8 uStack_30;
  
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  lStack_98 = 0;
  lStack_90 = 0;
  lStack_88 = 0;
  uStack_80 = 0;
  uStack_7f = 0;
  uStack_78 = 0;
  uStack_77 = 0;
  cVar1 = func_0x04af2190(param_4,param_1,param_2,&lStack_98,param_5 | 0x1040);
  func_0x04af24d0(param_3,param_1,param_2,&lStack_98,param_5 >> 0xb & 1);
  if (lStack_98 != 0) {
    lStack_90 = lStack_98;
    func_0x0412a280(lStack_98,lStack_88 - lStack_98);
  }
  if (cVar1 == '\0') {
    bVar2 = 0;
  }
  else {
    bVar2 = *(byte *)(param_3 + 0xb) ^ 1;
    if (*(byte *)(param_3 + 0xb) == 1) {
      param_3[1] = *param_3;
    }
  }
  return bVar2;
}


```
