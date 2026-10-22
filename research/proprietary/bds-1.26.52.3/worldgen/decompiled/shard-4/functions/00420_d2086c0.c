/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd3086c0 (ELF vaddr 0xd2086c0)
 * Label: JigsawStructureLoader::vslot0
 * Body:  [[0d3086c0, 0d308782]]
 * Ghidra: wg_JigsawStructureLoader__vslot0
 */


void wg_JigsawStructureLoader__vslot0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  *param_1 = &UNK_0f45f878;
  func_0x0d307a00(param_1 + 0x5e);
  func_0x0d307d30(param_1 + 0x40);
  func_0x0d308060(param_1 + 0x22);
  func_0x0d308390(param_1 + 4);
  lVar2 = param_1[3];
  param_1[3] = 0;
  if (lVar2 != 0) {
    func_0x049e9990(lVar2);
    func_0x0412a280(lVar2,0x60);
  }
  *param_1 = &UNK_0f534768;
  plVar3 = (long *)param_1[2];
  if (plVar3 != (long *)0x0) {
    *(undefined1 *)param_1[1] = 0;
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 != 0) {
      return;
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
    if (plVar3[2] != 0) {
      LOCK();
      plVar1 = plVar3 + 2;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 != 0) {
        return;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0412c2ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x20))();
    return;
  }
  *(undefined1 *)param_1[1] = 0;
  return;
}


