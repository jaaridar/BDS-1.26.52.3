/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4863610 (ELF vaddr 0x4763610)
 * Label: callee-of:0xaf95f80
 * Body:  [[04863610, 04863677] [04863680, 04863789]]
 * Ghidra: FUN_04863610
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_04863610(long *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_48;
  undefined1 uStack_40;
  long *plStack_38;
  long *plStack_30;
  
  bVar1 = *(byte *)(param_1 + 1);
  if (bVar1 == 7) {
    plVar5 = (long *)*param_1;
    if (plVar5 == (long *)0x0) {
      return (undefined8 *)0x7;
    }
    plStack_30 = (long *)0x48636d6;
    puVar4 = (undefined8 *)func_0x04866db0(plVar5,plVar5[1]);
  }
  else if (bVar1 == 6) {
    plVar5 = (long *)*param_1;
    lVar7 = *plVar5;
    puVar4 = (undefined8 *)0x6;
    if (plVar5[1] - lVar7 != 0) {
      lVar7 = plVar5[1] - lVar7 >> 3;
      uVar6 = 0;
      do {
        puVar4 = *(undefined8 **)*param_1;
        if ((ulong)(((long *)*param_1)[1] - (long)puVar4 >> 3) <= uVar6) {
          plStack_30 = (long *)0x4863729;
          puVar4 = (undefined8 *)func_0x04866530();
          plStack_30 = (long *)0x4863731;
          FUN_04882e20();
          plStack_38 = param_1;
          plStack_30 = plVar5;
          func_0x04863480(&uStack_48);
          uVar2 = *(undefined1 *)(puVar4 + 1);
          *(undefined1 *)(puVar4 + 1) = uStack_40;
          uVar3 = *puVar4;
          *puVar4 = uStack_48;
          uStack_48 = uVar3;
          uStack_40 = uVar2;
          FUN_04863610(&uStack_48);
          return puVar4;
        }
        plVar5 = (long *)puVar4[uVar6];
        if (plVar5 != (long *)0x0) {
          plStack_30 = (long *)0x48636b3;
          FUN_04863610(plVar5);
          plStack_30 = (long *)0x48636c0;
          puVar4 = (undefined8 *)thunk_FUN_0ee326a0(plVar5,0x10);
        }
        uVar6 = uVar6 + 1;
      } while (lVar7 + (ulong)(lVar7 == 0) != uVar6);
      plVar5 = (long *)*param_1;
      if (plVar5 == (long *)0x0) {
        return puVar4;
      }
      lVar7 = *plVar5;
    }
    if (lVar7 != 0) {
      plVar5[1] = lVar7;
      plStack_30 = (long *)0x4863700;
      puVar4 = (undefined8 *)thunk_FUN_0ee326a0(lVar7,plVar5[2] - lVar7);
    }
  }
  else {
    if (bVar1 != 4) {
      return (undefined8 *)(ulong)bVar1;
    }
    plVar5 = (long *)*param_1;
    if (plVar5 == (long *)0x0) {
      return (undefined8 *)0x4;
    }
    plStack_30 = (long *)0x486364a;
    puVar4 = (undefined8 *)func_0x04862fd0(plVar5);
  }
  if (plVar5 != (long *)0x0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,plVar5);
  }
  return puVar4;
}


