/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6146460
 * Label: Editor::Services::EditorJigsawService::vslot18
 * Body:  [[061463d6, 061463dd] [06146450, 06146631]]
 * Ghidra: wg_Editor__Services__EditorJigsawService__vslot18
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_Editor__Services__EditorJigsawService__vslot18(void)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *unaff_R13;
  long *unaff_R14;
  float fVar8;
  long *in_stack_00000020;
  
  uVar4 = func_0x0412c3f0();
  uVar1 = unaff_R13[1];
  if (uVar1 < uVar4) {
LAB_06146450:
    func_0x0613efb0();
  }
  else if (uVar4 < uVar1) {
    fVar8 = (float)func_0x0eee3ab0((float)(ulong)unaff_R13[3] / *(float *)(unaff_R13 + 4));
    uVar5 = (long)(fVar8 - _DAT_01198778) & (long)fVar8 >> 0x3f | (long)fVar8;
    if ((uVar1 < 3) ||
       (uVar7 = uVar1 - (uVar1 >> 1 & 0x5555555555555555),
       uVar7 = (uVar7 >> 2 & 0x3333333333333333) + (uVar7 & 0x3333333333333333),
       1 < (byte)(((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
      uVar5 = func_0x0412c3f0(uVar5);
    }
    else if (1 < uVar5) {
      lVar3 = 0x3f;
      if (uVar5 - 1 != 0) {
        for (; uVar5 - 1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uVar5 = 1L << (-((byte)lVar3 ^ 0x3f) & 0x3f);
    }
    if (uVar4 <= uVar5) {
      uVar4 = uVar5;
    }
    if (uVar4 < uVar1) goto LAB_06146450;
  }
  plVar2 = (long *)unaff_R13[1];
  if (((ulong)plVar2 & (long)plVar2 - 1U) == 0) {
    unaff_R14 = (long *)((ulong)unaff_R14 & (long)plVar2 - 1U);
  }
  else if (plVar2 <= unaff_R14) {
    if (((ulong)unaff_R14 | (ulong)plVar2) >> 0x20 == 0) {
      unaff_R14 = (long *)(((ulong)unaff_R14 & 0xffffffff) % ((ulong)plVar2 & 0xffffffff));
    }
    else {
      unaff_R14 = (long *)((ulong)unaff_R14 % (ulong)plVar2);
    }
  }
  lVar3 = *unaff_R13;
  plVar6 = *(long **)(lVar3 + (long)unaff_R14 * 8);
  if (plVar6 == (long *)0x0) {
    *in_stack_00000020 = unaff_R13[2];
    unaff_R13[2] = (long)in_stack_00000020;
    *(long **)(lVar3 + (long)unaff_R14 * 8) = unaff_R13 + 2;
    plVar6 = (long *)0x0;
    if (*in_stack_00000020 != 0) {
      plVar6 = *(long **)(*in_stack_00000020 + 8);
      if (((ulong)plVar2 & (long)plVar2 - 1U) == 0) {
        plVar6 = (long *)((ulong)plVar6 & (long)plVar2 - 1U);
        *(long **)(lVar3 + (long)plVar6 * 8) = in_stack_00000020;
      }
      else {
        if (plVar2 <= plVar6) {
          if (((ulong)plVar6 | (ulong)plVar2) >> 0x20 == 0) {
            plVar6 = (long *)(((ulong)plVar6 & 0xffffffff) % ((ulong)plVar2 & 0xffffffff));
            *(long **)(lVar3 + (long)plVar6 * 8) = in_stack_00000020;
            goto LAB_061465bc;
          }
          plVar6 = (long *)((ulong)plVar6 % (ulong)plVar2);
        }
        *(long **)(lVar3 + (long)plVar6 * 8) = in_stack_00000020;
      }
    }
  }
  else {
    *in_stack_00000020 = *plVar6;
    *plVar6 = (long)in_stack_00000020;
  }
LAB_061465bc:
  unaff_R13[3] = unaff_R13[3] + 1;
  return CONCAT71((int7)((ulong)plVar6 >> 8),1);
}


