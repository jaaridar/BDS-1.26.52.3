# FUN_0c9fccb0

- entry: `0xc9fccb0`
- body size: 390 bytes
- callers: `FUN_09db9c20`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0c9fccb0(int param_1)

{
  int *piVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  piVar1 = (int *)func_0x0c9fa6e0();
  if (*piVar1 == param_1) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0x80;
    if (((((((_DAT_0f6ec758 != param_1) && (lVar2 = 0x100, _DAT_0f6ec7d8 != param_1)) &&
           (lVar2 = 0x180, _DAT_0f6ec858 != param_1)) &&
          (((lVar2 = 0x200, _DAT_0f6ec8d8 != param_1 && (lVar2 = 0x280, _DAT_0f6ec958 != param_1))
           && ((lVar2 = 0x300, _DAT_0f6ec9d8 != param_1 &&
               ((lVar2 = 0x380, _DAT_0f6eca58 != param_1 &&
                (lVar2 = 0x400, _DAT_0f6ecad8 != param_1)))))))) &&
         ((lVar2 = 0x480, _DAT_0f6ecb58 != param_1 &&
          (((lVar2 = 0x500, _DAT_0f6ecbd8 != param_1 && (lVar2 = 0x580, _DAT_0f6ecc58 != param_1))
           && (lVar2 = 0x600, _DAT_0f6eccd8 != param_1)))))) &&
        (((lVar2 = 0x680, _DAT_0f6ecd58 != param_1 && (lVar2 = 0x700, _DAT_0f6ecdd8 != param_1)) &&
         (((lVar2 = 0x780, _DAT_0f6ece58 != param_1 &&
           ((lVar2 = 0x800, _DAT_0f6eced8 != param_1 && (lVar2 = 0x880, _DAT_0f6ecf58 != param_1))))
          && (lVar2 = 0x900, _DAT_0f6ecfd8 != param_1)))))) &&
       ((((lVar2 = 0x980, _DAT_0f6ed058 != param_1 && (lVar2 = 0xa00, _DAT_0f6ed0d8 != param_1)) &&
         (lVar2 = 0xa80, _DAT_0f6ed158 != param_1)) && (lVar2 = 0xb00, _DAT_0f6ed1d8 != param_1))))
    {
      puVar4 = &DAT_0f6ed258;
      goto LAB_0c9fce1b;
    }
  }
  puVar4 = (undefined *)(lVar2 + 0xf6ec6d8);
LAB_0c9fce1b:
  puVar3 = (undefined *)0x0;
  if (puVar4 != &DAT_0f6ed258) {
    puVar3 = puVar4;
  }
  return puVar3;
}


```
