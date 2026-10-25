# FUN_04913f10

- entry: `0x4913f10`
- body size: 128 bytes
- callers: `FUN_09ce36f0`

```c

/* WARNING: Possible PIC construction at 0x04913f5f: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x04913f64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_04913f10(long *param_1)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 in_RAX;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 auStack_30 [2];
  
  if ((char)param_1[1] == '\0') {
    plVar3 = (long *)*param_1;
    lVar1 = *plVar3;
    if (lVar1 != 0) {
      lVar6 = plVar3[1];
      plVar4 = plVar3;
      lVar5 = lVar1;
      if (lVar1 != lVar6) {
        do {
          if ((*(byte *)(lVar6 + -0x20) & 1) != 0) {
            lVar5 = *(long *)(lVar6 + -0x10);
            register0x00000020 = (BADSPACEBASE *)auStack_30;
            auStack_30[0] = 0x4913f64;
            goto SUB_0412a280;
          }
          lVar6 = lVar6 + -0x20;
        } while (lVar6 != lVar1);
        plVar4 = (long *)*param_1;
        lVar5 = *(long *)*param_1;
      }
      plVar3[1] = lVar1;
      plVar3 = plVar4;
SUB_0412a280:
      *(long **)((long)register0x00000020 + -8) = plVar3;
      if (lVar5 != 0) {
        pcVar2 = *(code **)(_DAT_0f5463b0 + 0x18);
        *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
        (*pcVar2)(&DAT_0f5463b0,lVar5);
      }
      return *(undefined8 *)((long)register0x00000020 + -8);
    }
  }
  return in_RAX;
}


```
