/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5348370 (ELF vaddr 0x5248370)
 * Label: NoiseGradientBiomeSurfaceComponent::vslot0
 * Body:  [[05348370, 0534840d] [05348410, 0534846a]]
 * Ghidra: wg_NoiseGradientBiomeSurfaceComponent__vslot0
 */


/* WARNING: Possible PIC construction at 0x0534839d: Changing call to branch */
/* WARNING: Possible PIC construction at 0x053483c2: Changing call to branch */
/* WARNING: Possible PIC construction at 0x053483f2: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0534842c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x05348431) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_NoiseGradientBiomeSurfaceComponent__vslot0(long param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 in_RAX;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_20;
  
  plVar4 = *(long **)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (plVar4 == (long *)0x0) {
    lVar2 = *(long *)(param_1 + 0x58);
    if (lVar2 != 0) {
      *(long *)(param_1 + 0x60) = lVar2;
      uStack_20 = 0x53483e0;
      in_RAX = func_0x0412a280(lVar2,*(long *)(param_1 + 0x68) - lVar2);
    }
    if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
      lVar2 = *(long *)(param_1 + 0x20);
      if (lVar2 != 0) {
        lVar6 = *(long *)(param_1 + 0x28);
        lVar5 = lVar2;
        if (lVar2 != lVar6) {
          do {
            if ((*(byte *)(lVar6 + -0x30) & 1) != 0) {
              plVar4 = *(long **)(lVar6 + -0x20);
              register0x00000020 = (BADSPACEBASE *)&uStack_20;
              uStack_20 = 0x5348431;
              goto SUB_0412a280;
            }
            lVar6 = lVar6 + -0x30;
          } while (lVar6 != lVar2);
          lVar5 = *(long *)(param_1 + 0x20);
        }
        *(long *)(param_1 + 0x28) = lVar2;
        uStack_20 = 0x5348447;
        in_RAX = func_0x0412a280(lVar5,*(long *)(param_1 + 0x30) - lVar5);
      }
      plVar4 = *(long **)(param_1 + 8);
      if (plVar4 == (long *)0x0) {
        return in_RAX;
      }
      *(long **)(param_1 + 0x10) = plVar4;
    }
    else {
      plVar4 = *(long **)(param_1 + 0x48);
      register0x00000020 = (BADSPACEBASE *)&uStack_20;
      uStack_20 = 0x53483f7;
    }
  }
  else {
    plVar1 = (long *)plVar4[3];
    if (plVar1 == (long *)0x0) {
      lVar2 = *plVar4;
      if (lVar2 != 0) {
        plVar4[1] = lVar2;
        uStack_20 = 0x53483ba;
        in_RAX = func_0x0412a280(lVar2,plVar4[2] - lVar2);
      }
      register0x00000020 = (BADSPACEBASE *)&uStack_20;
      uStack_20 = 0x53483c7;
    }
    else {
      plVar4[4] = (long)plVar1;
      register0x00000020 = (BADSPACEBASE *)&uStack_20;
      uStack_20 = 0x53483a2;
      plVar4 = plVar1;
    }
  }
SUB_0412a280:
  *(undefined8 *)((long)register0x00000020 + -8) = in_RAX;
  if (plVar4 != (long *)0x0) {
    pcVar3 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar3)(&DAT_0f5463b0,plVar4);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


