# FUN_041086b0

- entry: `0x41086b0`
- body size: 67 bytes
- callers: `FUN_04882e40`, `FUN_04882eb0`

```c

long FUN_041086b0(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar4 = param_1 + 0x8fU & 0xfffffffffffffff0;
  lVar2 = func_0x04108d40(uVar4);
  if (lVar2 != 0) {
    func_0x0eee2dd0(lVar2,0,uVar4);
    return lVar2 + 0x80;
  }
  uVar3 = FUN_04109e60();
  FUN_04882e20(uVar3);
  pcVar1 = (code *)swi(3);
  lVar2 = (*pcVar1)();
  return lVar2;
}


```
