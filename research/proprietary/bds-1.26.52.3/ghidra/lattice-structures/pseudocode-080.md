# FUN_09e20be0

- entry: `0x9e20be0`
- body size: 290 bytes
- callers: `FUN_09cba670`, `FUN_09cbbc90`

```c

/* WARNING: Removing unreachable block (ram,0x09e20c1c) */
/* WARNING: Removing unreachable block (ram,0x09e20c21) */
/* WARNING: Removing unreachable block (ram,0x09e20c47) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_09e20be0(ulong *param_1,int param_2)

{
  code *pcVar1;
  long lVar2;
  char *pcVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auStack_34 [20];
  
  if (param_2 < 0) {
    auStack_34[0] = 0x2d;
  }
  lVar2 = func_0x04136630();
  uVar5 = lVar2 - (long)auStack_34;
  if (0xfffffffffffffff7 < uVar5) {
    FUN_04882e30();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (uVar5 < 0x17) {
    *(char *)param_1 = (char)uVar5 * '\x02';
    pcVar3 = (char *)((long)param_1 + 1);
    if (uVar5 == 0) {
      pcVar3 = (char *)((long)param_1 + 1);
      uVar5 = 0;
      goto LAB_09e20cd8;
    }
  }
  else {
    uVar4 = 0x1a;
    if ((uVar5 | 7) != 0x17) {
      uVar4 = (uVar5 | 7) + 1;
    }
    pcVar3 = (char *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar4);
    if (pcVar3 == (char *)0x0) {
      FUN_0eec74c0(uVar4,0);
    }
    param_1[2] = (ulong)pcVar3;
    *param_1 = uVar4 | 1;
    param_1[1] = uVar5;
  }
  memcpy(pcVar3,auStack_34,uVar5);
LAB_09e20cd8:
  pcVar3[uVar5] = '\0';
  *(undefined4 *)(param_1 + 3) = 0;
  return;
}


```
