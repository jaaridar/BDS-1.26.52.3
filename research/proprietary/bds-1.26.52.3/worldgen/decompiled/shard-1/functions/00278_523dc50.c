/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x533dc50 (ELF vaddr 0x523dc50)
 * Label: JigsawBlock::vslot74
 * Body:  [[0533dc50, 0533dce5]]
 * Ghidra: wg_JigsawBlock__vslot74
 */


void wg_JigsawBlock__vslot74(undefined8 param_1,long *param_2,byte *param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  byte bStack_1c;
  byte bStack_1b;
  short sStack_1a;
  
  func_0x0c6cdef0();
  lVar2 = (**(code **)(*param_2 + 0x138))(param_2,param_3);
  if (lVar2 != 0) {
    bStack_1c = *param_3 & 0xf;
    sStack_1a = *(short *)(param_3 + 4) - *(short *)((long)param_2 + 0x42);
    bStack_1b = param_3[8] & 0xf;
    lVar2 = func_0x0cb18130(lVar2 + 0x13d0,&bStack_1c);
    if ((lVar2 != 0) && (plVar1 = *(long **)(lVar2 + 0x18), plVar1 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0533dcda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x78))(plVar1,param_2,param_4);
      return;
    }
  }
  return;
}


