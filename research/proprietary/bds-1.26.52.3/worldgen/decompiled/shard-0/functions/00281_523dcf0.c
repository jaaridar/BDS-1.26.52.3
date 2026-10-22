/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x533dcf0 (ELF vaddr 0x523dcf0)
 * Label: JigsawBlock::vslot85
 * Body:  [[0533dcf0, 0533dd83]]
 * Ghidra: wg_JigsawBlock__vslot85
 */


void wg_JigsawBlock__vslot85
               (undefined8 param_1,long *param_2,undefined1 *param_3,undefined4 param_4,
               undefined4 param_5)

{
  long *plVar1;
  undefined4 in_EAX;
  long lVar2;
  undefined8 uStack_28;
  
  uStack_28._0_4_ = in_EAX;
  lVar2 = (**(code **)(*param_2 + 0x138))(param_2,param_3);
  if (lVar2 != 0) {
    uStack_28 = CONCAT26(*(short *)(param_3 + 4) - *(short *)((long)param_2 + 0x42),
                         CONCAT15(param_3[8],CONCAT14(*param_3,(undefined4)uStack_28))) &
                0xffff0f0fffffffff;
    lVar2 = func_0x0cb18130(lVar2 + 0x13d0,(long)&uStack_28 + 4);
    if ((lVar2 != 0) && (plVar1 = *(long **)(lVar2 + 0x18), plVar1 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0533dd77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x80))(plVar1,param_4,param_5);
      return;
    }
  }
  return;
}


