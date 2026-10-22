/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x52511f0
 * Label: OverworldGenerationRulesBiomeComponentGlue::vslot2
 * Body:  [[052511f0, 052511fb] [05251258, 05251326]]
 * Ghidra: wg_OverworldGenerationRulesBiomeComponentGlue__vslot2
 */


void wg_OverworldGenerationRulesBiomeComponentGlue__vslot2(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 unaff_RBX;
  long unaff_RBP;
  undefined8 *unaff_R15;
  undefined1 uStack0000000000000008;
  undefined7 uStack0000000000000009;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  
  uVar3 = _uStack0000000000000008;
  if (unaff_RBP != 0) {
    func_0x0eee2f00((long)&stack0x00000008 + 1);
  }
  *(undefined1 *)((long)&stack0x00000008 + 1 + unaff_RBP) = 0;
  func_0x0d336610();
  *unaff_R15 = unaff_RBX;
  if ((uVar3 & 1) != 0) {
    func_0x0412a280(in_stack_00000018,
                    CONCAT71(uStack0000000000000009,uStack0000000000000008) & 0xfffffffffffffffe);
  }
  plVar4 = in_stack_00000028;
  in_stack_00000020 = 0;
  in_stack_00000028 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      func_0x0412c2d0(plVar4);
    }
    plVar4 = in_stack_00000028;
    in_stack_00000030 = 0;
    if (in_stack_00000028 != (long *)0x0) {
      LOCK();
      plVar1 = in_stack_00000028 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*in_stack_00000028 + 0x10))(in_stack_00000028);
        func_0x0412c2d0(plVar4);
      }
    }
  }
  return;
}


