/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6146450
 * Label: Editor::Services::EditorJigsawService::vslot6
 * Body:  [[061463d6, 061463dd] [06146450, 0614645f] [06146567, 06146631]]
 * Ghidra: wg_Editor__Services__EditorJigsawService__vslot6
 */


undefined8 wg_Editor__Services__EditorJigsawService__vslot6(void)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *unaff_R13;
  long *unaff_R14;
  long *in_stack_00000020;
  
  func_0x0613efb0();
  plVar1 = (long *)unaff_R13[1];
  if (((ulong)plVar1 & (long)plVar1 - 1U) == 0) {
    unaff_R14 = (long *)((ulong)unaff_R14 & (long)plVar1 - 1U);
  }
  else if (plVar1 <= unaff_R14) {
    if (((ulong)unaff_R14 | (ulong)plVar1) >> 0x20 == 0) {
      unaff_R14 = (long *)(((ulong)unaff_R14 & 0xffffffff) % ((ulong)plVar1 & 0xffffffff));
    }
    else {
      unaff_R14 = (long *)((ulong)unaff_R14 % (ulong)plVar1);
    }
  }
  lVar2 = *unaff_R13;
  plVar3 = *(long **)(lVar2 + (long)unaff_R14 * 8);
  if (plVar3 == (long *)0x0) {
    *in_stack_00000020 = unaff_R13[2];
    unaff_R13[2] = (long)in_stack_00000020;
    *(long **)(lVar2 + (long)unaff_R14 * 8) = unaff_R13 + 2;
    plVar3 = (long *)0x0;
    if (*in_stack_00000020 != 0) {
      plVar3 = *(long **)(*in_stack_00000020 + 8);
      if (((ulong)plVar1 & (long)plVar1 - 1U) == 0) {
        plVar3 = (long *)((ulong)plVar3 & (long)plVar1 - 1U);
        *(long **)(lVar2 + (long)plVar3 * 8) = in_stack_00000020;
      }
      else {
        if (plVar1 <= plVar3) {
          if (((ulong)plVar3 | (ulong)plVar1) >> 0x20 == 0) {
            plVar3 = (long *)(((ulong)plVar3 & 0xffffffff) % ((ulong)plVar1 & 0xffffffff));
            *(long **)(lVar2 + (long)plVar3 * 8) = in_stack_00000020;
            goto LAB_061465bc;
          }
          plVar3 = (long *)((ulong)plVar3 % (ulong)plVar1);
        }
        *(long **)(lVar2 + (long)plVar3 * 8) = in_stack_00000020;
      }
    }
  }
  else {
    *in_stack_00000020 = *plVar3;
    *plVar3 = (long)in_stack_00000020;
  }
LAB_061465bc:
  unaff_R13[3] = unaff_R13[3] + 1;
  return CONCAT71((int7)((ulong)plVar3 >> 8),1);
}


