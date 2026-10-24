# FUN_04130630

- entry: `0x4130630`
- body size: 348 bytes
- callers: `FUN_09cba670`

```c

ulong * FUN_04130630(ulong *param_1,undefined8 param_2)

{
  code *pcVar1;
  ulong uVar2;
  byte *pbVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar7 = strlen(param_2);
  uVar2 = *param_1;
  uVar9 = 0x16;
  if ((*param_1 & 1) != 0) {
    uVar9 = (uVar2 & 0xfffffffffffffffe) - 1;
  }
  if (uVar9 < uVar7) {
    if (-uVar9 - 10 < uVar7 - uVar9) {
      FUN_04882e30();
      pcVar1 = (code *)swi(3);
      puVar6 = (ulong *)(*pcVar1)();
      return puVar6;
    }
    if ((uVar2 & 1) == 0) {
      pbVar3 = (byte *)((long)param_1 + 1);
    }
    else {
      pbVar3 = (byte *)param_1[2];
    }
    uVar2 = 0xfffffffffffffff7;
    if (uVar9 < 0x7ffffffffffffff3) {
      uVar4 = uVar9 * 2;
      if (uVar9 * 2 < uVar7) {
        uVar4 = uVar7;
      }
      uVar8 = 0x1a;
      if ((uVar4 | 7) != 0x17) {
        uVar8 = (uVar4 | 7) + 1;
      }
      uVar2 = 0x17;
      if (0x16 < uVar4) {
        uVar2 = uVar8;
      }
    }
    pbVar5 = (byte *)FUN_0ee32660(uVar2);
    memcpy(pbVar5,param_2,uVar7);
    if (uVar9 + 1 != 0x17) {
      func_0x0412a280(pbVar3,uVar9 + 1);
    }
    param_1[2] = (ulong)pbVar5;
    *param_1 = uVar2 | 1;
  }
  else {
    if ((uVar2 & 1) == 0) {
      pbVar5 = (byte *)((long)param_1 + 1);
    }
    else {
      pbVar5 = (byte *)param_1[2];
    }
    if (uVar7 != 0) {
      memmove(pbVar5,param_2,uVar7);
      uVar2 = (ulong)(byte)*param_1;
    }
    if ((uVar2 & 1) == 0) {
      *(char *)param_1 = (char)uVar7 * '\x02';
      goto LAB_0412f6f8;
    }
  }
  param_1[1] = uVar7;
LAB_0412f6f8:
  pbVar5[uVar7] = 0;
  return param_1;
}


```
