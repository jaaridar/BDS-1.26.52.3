/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca7b460 (ELF vaddr 0xc97b460)
 * Label: callee-of:0xc9730a0
 * Body:  [[0ca7b460, 0ca7b49e] [0ca7b4a0, 0ca7b4d6] [0ca7b4e0, 0ca7b553]]
 * Ghidra: FUN_0ca7b460
 */


/* WARNING: Possible PIC construction at 0x0ca7b4af: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0ca7b460(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 in_RAX;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 auStack_50 [2];
  long *plStack_40;
  long *plStack_38;
  
  plVar6 = (long *)*param_1;
  puVar9 = (undefined8 *)*plVar6;
  if (puVar9 == (undefined8 *)0x0) {
    return in_RAX;
  }
  plVar5 = plVar6;
  puVar7 = puVar9;
  if (puVar9 != (undefined8 *)plVar6[1]) {
    plStack_40 = param_1;
    plStack_38 = plVar6;
    puVar8 = (undefined8 *)plVar6[1];
    do {
      puVar1 = puVar8 + -3;
      puVar3 = (undefined8 *)puVar8[-3];
      if (puVar3 != (undefined8 *)0x0) {
        puVar9 = (undefined8 *)puVar8[-2];
        puVar7 = puVar3;
        if (puVar3 != puVar9) {
          do {
            plVar5 = (long *)puVar9[-1];
            if (plVar5 != (long *)0x0) {
              LOCK();
              plVar2 = plVar5 + 1;
              plVar6 = (long *)*plVar2;
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (plVar6 == (long *)0x0) {
                auStack_50[0] = 0xca7b50d;
                (**(code **)(*plVar5 + 0x10))(plVar5);
                auStack_50[0] = 0xca7b515;
                plVar6 = (long *)func_0x0412c2d0(plVar5);
              }
            }
            puVar9 = puVar9 + -2;
          } while (puVar9 != puVar3);
          puVar7 = (undefined8 *)*puVar1;
        }
        puVar8[-2] = puVar3;
        register0x00000020 = (BADSPACEBASE *)auStack_50;
        auStack_50[0] = 0xca7b4b4;
        plVar5 = plVar6;
        goto SUB_0412a280;
      }
      puVar8 = puVar1;
    } while (puVar9 != puVar1);
    plVar5 = (long *)*param_1;
    puVar7 = (undefined8 *)*plVar5;
  }
  plVar6[1] = (long)puVar9;
SUB_0412a280:
  *(long **)((long)register0x00000020 + -8) = plVar5;
  if (puVar7 != (undefined8 *)0x0) {
    pcVar4 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar4)(&DAT_0f5463b0,puVar7);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


