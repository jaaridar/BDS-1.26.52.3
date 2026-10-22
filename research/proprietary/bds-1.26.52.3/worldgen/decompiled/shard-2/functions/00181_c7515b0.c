/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc8515b0 (ELF vaddr 0xc7515b0)
 * Label: FixedBiomeSource::vslot7
 * Body:  [[0c8515b0, 0c851625]]
 * Ghidra: wg_FixedBiomeSource__vslot7
 */


undefined8 wg_FixedBiomeSource__vslot7(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined7 uVar4;
  undefined8 uVar3;
  long lVar5;
  long in_stack_00000008;
  long in_stack_00000010;
  
  lVar2 = in_stack_00000008 * 2;
  uVar4 = (undefined7)((ulong)lVar2 >> 8);
  if (in_stack_00000008 != 0) {
    lVar5 = 0;
    do {
      if (*(short *)(in_stack_00000010 + lVar5) == *(short *)(*(long *)(param_1 + 8) + 0x168)) {
        if (lVar5 == 0) goto LAB_0c851616;
        goto LAB_0c8515f4;
      }
      lVar5 = lVar5 + 2;
    } while (lVar2 != lVar5);
    lVar5 = in_stack_00000008 * 2;
    if (in_stack_00000008 * 2 != 0) {
LAB_0c8515f4:
      if (((in_stack_00000010 != 0) && (0 < lVar5)) && (lVar5 <= lVar2)) {
        return CONCAT71(uVar4,lVar5 != lVar2);
      }
      FUN_04890760();
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
LAB_0c851616:
  return CONCAT71(uVar4,lVar2 != 0);
}


