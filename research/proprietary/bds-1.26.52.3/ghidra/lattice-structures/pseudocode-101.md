# FUN_048abaf0

- entry: `0x48abaf0`
- body size: 100 bytes
- callers: `FUN_04909a40`

```c

/* WARNING: Possible PIC construction at 0x048abb42: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x048abb47) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_048abaf0(long *param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 auStack_20 [2];
  
  lVar3 = param_1[2];
  do {
    lVar2 = lVar3;
    if (param_1[1] == lVar2) {
      lVar3 = *param_1;
      if (lVar3 == 0) {
        return lVar2;
      }
      goto SUB_0412a280;
    }
    param_1[2] = lVar2 + -0x18;
    lVar3 = lVar2 + -0x18;
  } while ((*(byte *)(lVar2 + -0x18) & 1) == 0);
  lVar3 = *(long *)(lVar2 + -8);
  register0x00000020 = (BADSPACEBASE *)auStack_20;
  auStack_20[0] = 0x48abb47;
SUB_0412a280:
  *(long *)((long)register0x00000020 + -8) = lVar2;
  if (lVar3 != 0) {
    pcVar1 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar1)(&DAT_0f5463b0,lVar3);
  }
  return *(long *)((long)register0x00000020 + -8);
}


```
