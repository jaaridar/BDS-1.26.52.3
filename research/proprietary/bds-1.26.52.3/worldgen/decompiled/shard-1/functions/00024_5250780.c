/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5250780
 * Label: MultinoiseGenerationRulesBiomeComponentGlue::vslot2
 * Body:  [[05250780, 052507c5]]
 * Ghidra: wg_MultinoiseGenerationRulesBiomeComponentGlue__vslot2
 */


ulong wg_MultinoiseGenerationRulesBiomeComponentGlue__vslot2(void)

{
  ulong *puVar1;
  code *pcVar2;
  ulong in_RAX;
  ulong uVar3;
  long *unaff_RBX;
  long unaff_retaddr;
  
  *(char *)(in_RAX - 0x75) = *(char *)(in_RAX - 0x75) + -1;
  uVar3 = in_RAX & 0xffffffffffffff20;
  *(undefined8 *)(unaff_retaddr + 0x28) = 0;
  if (unaff_RBX != (long *)0x0) {
    LOCK();
    puVar1 = (ulong *)(unaff_RBX + 1);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if (uVar3 == 0) {
      pcVar2 = *(code **)(*unaff_RBX + 0x10);
      *(undefined8 *)(unaff_retaddr + -8) = 0x52507af;
      (*pcVar2)();
      *(undefined8 *)(unaff_retaddr + -8) = 0x52507b7;
      uVar3 = func_0x0412c2d0();
    }
  }
  return uVar3;
}


