# FUN_04fc0b90

- entry: `0x4fc0b90`
- body size: 100 bytes
- callers: `FUN_04fbffa0`

```c

/* WARNING: Possible PIC construction at 0x04fc0be2: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x04fc0be7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_04fc0b90(long *param_1)

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
    param_1[2] = lVar2 + -0x28;
    lVar3 = lVar2 + -0x28;
  } while ((*(byte *)(lVar2 + -0x20) & 1) == 0);
  lVar3 = *(long *)(lVar2 + -0x10);
  register0x00000020 = (BADSPACEBASE *)auStack_20;
  auStack_20[0] = 0x4fc0be7;
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
