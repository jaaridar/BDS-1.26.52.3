# FUN_0b63c650

- entry: `0xb63c650`
- body size: 151 bytes
- callers: `FUN_04e60d90`, `FUN_04fbd340`

```c

void FUN_0b63c650(byte *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uStack_30;
  long lStack_20;
  long lStack_18;
  
  func_0x048654e0(&uStack_30,param_3);
  lStack_18 = lStack_20;
  if (((ulong)uStack_30 & 1) == 0) {
    lStack_18 = (long)&uStack_30 + 1;
  }
  func_0x09adffe0(0,1,param_2,&lStack_18);
  if (((ulong)uStack_30 & 1) != 0) {
    func_0x0412a280(lStack_20,(ulong)uStack_30 & 0xfffffffffffffffe);
  }
  if ((*param_1 & 1) == 0) {
    uStack_30 = param_1 + 1;
  }
  else {
    uStack_30 = *(byte **)(param_1 + 0x10);
  }
  func_0x0b63c710(1,3,param_2,&UNK_014a31a5,&uStack_30);
  return;
}


```
