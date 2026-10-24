# FUN_04aa75f0

- entry: `0x4aa75f0`
- body size: 304 bytes
- callers: `FUN_04fd3da0`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_04aa75f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  puVar2 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar2 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x30,0);
  }
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &UNK_0ef560b8;
  uVar3 = strlen(param_3);
  if (0xfffffffffffffff7 < uVar3) {
    uVar5 = FUN_04882e30();
    func_0x0412c1f0(puVar2);
    func_0x0412a280(puVar2,0x30);
    _Unwind_Resume(uVar5);
    pcVar1 = (code *)swi(3);
    puVar2 = (undefined8 *)(*pcVar1)();
    return puVar2;
  }
  if (uVar3 < 0x17) {
    *(char *)(puVar2 + 3) = (char)uVar3 * '\x02';
    lVar4 = (long)puVar2 + 0x19;
    if (uVar3 == 0) goto LAB_04aa76b7;
  }
  else {
    uVar6 = 0x1a;
    if ((uVar3 | 7) != 0x17) {
      uVar6 = (uVar3 | 7) + 1;
    }
    lVar4 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar6);
    if (lVar4 == 0) {
      FUN_0eec74c0(uVar6,0);
    }
    puVar2[5] = lVar4;
    puVar2[3] = uVar6 | 1;
    puVar2[4] = uVar3;
  }
  memcpy(lVar4,param_3,uVar3);
LAB_04aa76b7:
  *(undefined1 *)(lVar4 + uVar3) = 0;
  *param_1 = puVar2 + 3;
  param_1[1] = puVar2;
  return param_1;
}


```
