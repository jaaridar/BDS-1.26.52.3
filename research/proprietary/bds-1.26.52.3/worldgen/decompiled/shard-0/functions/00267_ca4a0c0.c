/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcb4a0c0 (ELF vaddr 0xca4a0c0)
 * Label: callee-of:0xc95ddd0
 * Body:  [[0cb4a0c0, 0cb4a0ea] [0cb4a0f0, 0cb4a123] [0cb4a130, 0cb4a18c]]
 * Ghidra: FUN_0cb4a0c0
 */


/* WARNING: Possible PIC construction at 0x0cb4a159: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0cb4a15e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0cb4a0c0(long *param_1)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  undefined8 in_RAX;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 auStack_30 [2];
  
  plVar2 = (long *)*param_1;
  lVar3 = *plVar2;
  if (lVar3 == 0) {
    return in_RAX;
  }
  lVar8 = plVar2[1];
  plVar6 = plVar2;
  lVar7 = lVar3;
  if (lVar3 != lVar8) {
    do {
      plVar4 = *(long **)(lVar8 + -8);
      *(undefined8 *)(lVar8 + -8) = 0;
      if (plVar4 != (long *)0x0) {
        auStack_30[0] = 0xcb4a112;
        plVar6 = (long *)(**(code **)(*plVar4 + 8))();
      }
      if ((*(byte *)(lVar8 + -0x20) & 1) == 0) {
        bVar1 = *(byte *)(lVar8 + -0x38);
      }
      else {
        auStack_30[0] = 0xcb4a143;
        plVar6 = (long *)func_0x0412a280(*(undefined8 *)(lVar8 + -0x10),
                                         *(ulong *)(lVar8 + -0x20) & 0xfffffffffffffffe);
        bVar1 = *(byte *)(lVar8 + -0x38);
      }
      if ((bVar1 & 1) != 0) {
        lVar7 = *(long *)(lVar8 + -0x28);
        register0x00000020 = (BADSPACEBASE *)auStack_30;
        auStack_30[0] = 0xcb4a15e;
        goto SUB_0412a280;
      }
      lVar8 = lVar8 + -0x70;
    } while (lVar8 != lVar3);
    plVar6 = (long *)*param_1;
    lVar7 = *(long *)*param_1;
  }
  plVar2[1] = lVar3;
SUB_0412a280:
  *(long **)((long)register0x00000020 + -8) = plVar6;
  if (lVar7 != 0) {
    pcVar5 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar5)(&DAT_0f5463b0,lVar7);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


