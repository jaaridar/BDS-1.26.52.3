# FUN_04864f30

- entry: `0x4864f30`
- body size: 419 bytes
- callers: `FUN_048650e0`

```c

undefined8 FUN_04864f30(undefined8 param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  bool bVar9;
  
  if ((char)param_2[1] == '\x06') {
    plVar5 = *(long **)*param_2;
    plVar8 = (long *)((undefined8 *)*param_2)[1];
    while ((plVar5 != plVar8 &&
           ((*(char *)((undefined8 *)*plVar5 + 1) != '\x04' ||
            (iVar3 = strcmp(**(undefined8 **)*plVar5,param_3), iVar3 != 0))))) {
      plVar5 = plVar5 + 1;
    }
    if (plVar5 != plVar8) {
      func_0x048635d0(param_1,*plVar5);
      lVar1 = *plVar5;
      if (lVar1 != 0) {
        FUN_04863610(lVar1);
        func_0x0412a280(lVar1,0x10);
      }
      lVar1 = *param_2;
      lVar7 = *(long *)(lVar1 + 8) - (long)(plVar5 + 1);
      if (lVar7 != 0) {
        memmove(plVar5,plVar5 + 1,lVar7);
      }
      *(long *)(lVar1 + 8) = (long)plVar5 + lVar7;
      return param_1;
    }
  }
  else if ((char)param_2[1] != '\0') {
    plVar5 = *(long **)(*param_2 + 8);
    if (plVar5 != (long *)0x0) {
      plVar6 = (long *)(*param_2 + 8);
      plVar8 = plVar6;
      do {
        uVar2 = strcmp(plVar5[4],param_3);
        if (-1 < (int)uVar2) {
          plVar8 = plVar5;
        }
        plVar5 = (long *)plVar5[uVar2 >> 0x1f];
      } while (plVar5 != (long *)0x0);
      if ((plVar8 != plVar6) && (iVar3 = strcmp(param_3,plVar8[4]), -1 < iVar3)) {
        func_0x048635d0(param_1,plVar8 + 5);
        param_2 = (long *)*param_2;
        plVar5 = plVar8;
        plVar6 = (long *)plVar8[1];
        if ((long *)plVar8[1] == (long *)0x0) {
          do {
            plVar4 = (long *)plVar5[2];
            bVar9 = plVar5 != (long *)*plVar4;
            plVar5 = plVar4;
          } while (bVar9);
        }
        else {
          do {
            plVar4 = plVar6;
            plVar6 = (long *)*plVar4;
          } while ((long *)*plVar4 != (long *)0x0);
        }
        if ((long *)*param_2 == plVar8) {
          *param_2 = (long)plVar4;
        }
        param_2[2] = param_2[2] + -1;
        func_0x05fb1340(param_2[1],plVar8);
        FUN_04863610(plVar8 + 5);
        FUN_04862fd0(plVar8 + 4);
        func_0x0412a280(plVar8,0x38);
        return param_1;
      }
    }
  }
  FUN_04863480(param_1,&DAT_0f54fc40);
  return param_1;
}


```
