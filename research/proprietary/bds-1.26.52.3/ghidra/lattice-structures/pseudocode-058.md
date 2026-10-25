# FUN_04863610

- entry: `0x4863610`
- body size: 370 bytes
- callers: `FUN_04863610`, `FUN_04863790`, `FUN_048f0410`, `FUN_048f35b0`, `FUN_04e7ecf0`

```c

/* WARNING: Possible PIC construction at 0x048636bb: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x048636c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_04863610(long *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uStack_48;
  undefined1 uStack_40;
  long *plStack_38;
  long *aplStack_30 [2];
  
  bVar1 = *(byte *)(param_1 + 1);
  if (bVar1 == 7) {
    plVar6 = (long *)*param_1;
    if (plVar6 == (long *)0x0) {
      return (undefined8 *)0x7;
    }
    aplStack_30[0] = (long *)0x48636d6;
    puVar5 = (undefined8 *)func_0x04866db0(plVar6,plVar6[1]);
  }
  else if (bVar1 == 6) {
    plVar6 = (long *)*param_1;
    lVar8 = *plVar6;
    puVar5 = (undefined8 *)0x6;
    if (plVar6[1] - lVar8 != 0) {
      lVar8 = plVar6[1] - lVar8 >> 3;
      uVar7 = 0;
      do {
        puVar5 = *(undefined8 **)*param_1;
        if ((ulong)(((long *)*param_1)[1] - (long)puVar5 >> 3) <= uVar7) {
          aplStack_30[0] = (long *)0x4863729;
          puVar5 = (undefined8 *)func_0x04866530();
          aplStack_30[0] = (long *)0x4863731;
          FUN_04882e20();
          plStack_38 = param_1;
          aplStack_30[0] = plVar6;
          func_0x04863480(&uStack_48);
          uVar2 = *(undefined1 *)(puVar5 + 1);
          *(undefined1 *)(puVar5 + 1) = uStack_40;
          uVar3 = *puVar5;
          *puVar5 = uStack_48;
          uStack_48 = uVar3;
          uStack_40 = uVar2;
          FUN_04863610(&uStack_48);
          return puVar5;
        }
        plVar6 = (long *)puVar5[uVar7];
        if (plVar6 != (long *)0x0) {
          aplStack_30[0] = (long *)0x48636b3;
          puVar5 = (undefined8 *)FUN_04863610(plVar6);
          register0x00000020 = (BADSPACEBASE *)aplStack_30;
          aplStack_30[0] = (long *)0x48636c0;
          goto SUB_0412a280;
        }
        uVar7 = uVar7 + 1;
        plVar6 = (long *)0x0;
      } while (lVar8 + (ulong)(lVar8 == 0) != uVar7);
      plVar6 = (long *)*param_1;
      if (plVar6 == (long *)0x0) {
        return puVar5;
      }
      lVar8 = *plVar6;
    }
    if (lVar8 != 0) {
      plVar6[1] = lVar8;
      aplStack_30[0] = (long *)0x4863700;
      puVar5 = (undefined8 *)func_0x0412a280(lVar8,plVar6[2] - lVar8);
    }
  }
  else {
    if (bVar1 != 4) {
      return (undefined8 *)(ulong)bVar1;
    }
    plVar6 = (long *)*param_1;
    if (plVar6 == (long *)0x0) {
      return (undefined8 *)0x4;
    }
    aplStack_30[0] = (long *)0x486364a;
    puVar5 = (undefined8 *)func_0x04862fd0(plVar6);
  }
SUB_0412a280:
  *(undefined8 **)((long)register0x00000020 + -8) = puVar5;
  if (plVar6 != (long *)0x0) {
    pcVar4 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar4)(&DAT_0f5463b0,plVar6);
  }
  return *(undefined8 **)((long)register0x00000020 + -8);
}


```
