# FUN_04fbd7c0

- entry: `0x4fbd7c0`
- body size: 95 bytes
- callers: `FUN_04fbc500`

```c

/* WARNING: Possible PIC construction at 0x04fbd7fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x04fbd801) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_04fbd7c0(long *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 in_RAX;
  long lVar3;
  long lVar4;
  undefined8 uStack_20;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return in_RAX;
  }
  lVar4 = param_1[1];
  lVar3 = lVar1;
  if (lVar1 != lVar4) {
    do {
      if ((*(byte *)(lVar4 + -0x20) & 1) != 0) {
        lVar3 = *(long *)(lVar4 + -0x10);
        register0x00000020 = (BADSPACEBASE *)&uStack_20;
        uStack_20 = 0x4fbd801;
        goto SUB_0412a280;
      }
      lVar4 = lVar4 + -0x28;
    } while (lVar4 != lVar1);
    lVar3 = *param_1;
  }
  param_1[1] = lVar1;
SUB_0412a280:
  *(undefined8 *)((long)register0x00000020 + -8) = in_RAX;
  if (lVar3 != 0) {
    pcVar2 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar2)(&DAT_0f5463b0,lVar3);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


```
