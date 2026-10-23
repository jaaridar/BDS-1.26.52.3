# FUN_04108d40

- entry: `0x4108d40`
- body size: 411 bytes
- callers: `FUN_041086b0`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort * FUN_04108d40(long param_1)

{
  ushort uVar1;
  code *pcVar2;
  ushort *puVar3;
  ushort *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ushort *puVar12;
  
  puVar3 = (ushort *)func_0x0eee2e00(0x10);
  if (puVar3 != (ushort *)0x0) {
    return puVar3;
  }
  func_0x0eee2d30();
  if (_DAT_0f547008 == (ushort *)0x0) {
    _DAT_0f547008 = (ushort *)&DAT_0f54701c;
    _DAT_0f54701c = 0x7d0080;
  }
  else if (_DAT_0f547008 == (ushort *)0xf547210) goto LAB_04108e28;
  uVar8 = param_1 + (ulong)(param_1 == 0) + 3 >> 2;
  uVar7 = uVar8 + 1;
  puVar6 = (undefined *)0xf547010;
  puVar3 = (ushort *)0x0;
  puVar4 = _DAT_0f547008;
  do {
    puVar12 = puVar4 + 2;
    if (((ulong)puVar12 & 0xf) != 0) {
      uVar5 = func_0x041085a0(&UNK_011b4ea1,&UNK_01306bf6,0x92,&UNK_01254d89);
      func_0x0eee2d60(0xf546fe0);
      _Unwind_Resume(uVar5);
      pcVar2 = (code *)swi(3);
      puVar3 = (ushort *)(*pcVar2)();
      return puVar3;
    }
    uVar1 = puVar4[1];
    uVar10 = (ulong)uVar1;
    uVar11 = (ulong)((uint)uVar1 - (int)uVar7 & 3);
    if (uVar10 <= uVar7) {
      uVar11 = 0;
    }
    uVar11 = uVar11 + uVar7;
    if (uVar11 < uVar10) {
      uVar9 = (uint)uVar1 - (int)uVar11;
      puVar4[1] = (ushort)uVar9;
      uVar7 = (ulong)(uVar9 & 0xffff);
      puVar4[uVar7 * 2] = 0;
      puVar4[uVar7 * 2 + 1] = (ushort)uVar11;
      puVar12 = puVar4 + uVar7 * 2 + 2;
      if (((ulong)puVar12 & 0xf) != 0) {
        puVar3 = (ushort *)&UNK_011b4ea1;
        puVar6 = &UNK_01254d89;
        puVar4 = (ushort *)func_0x041085a0(&UNK_011b4ea1,&UNK_01306bf6,0xa7);
LAB_04108e74:
        if (puVar3 == (ushort *)0x0) {
          _DAT_0f547008 = (ushort *)(puVar6 + (ulong)*puVar4 * 4);
        }
        else {
          *puVar3 = *puVar4;
        }
        *puVar4 = 0;
      }
      goto LAB_04108e94;
    }
    if (uVar8 < uVar10) goto LAB_04108e74;
    uVar1 = *puVar4;
    puVar3 = puVar4;
    puVar4 = (ushort *)((ulong)uVar1 * 4 + 0xf547010);
  } while (uVar1 != 0x80);
LAB_04108e28:
  puVar12 = (ushort *)0x0;
LAB_04108e94:
  func_0x0eee2d60(0xf546fe0);
  return puVar12;
}


```
