/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x495d750 (ELF vaddr 0x485d750)
 * Label: EditorCustomBiomeSource::vslot8
 * Body:  [[0495d5f0, 0495d6ad] [0495d6b0, 0495d70f] [0495d750, 0495d785]]
 * Ghidra: wg_EditorCustomBiomeSource__vslot8
 */


void wg_EditorCustomBiomeSource__vslot8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lStack_258;
  long *plStack_250;
  long lStack_248;
  long *plStack_240;
  long *plStack_238;
  long *plStack_230;
  undefined1 auStack_228 [512];
  uint uStack_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x495d769;
  lVar6 = func_0x049db6c0(param_1 + 1000,param_2,param_2);
  uVar2 = param_3[1];
  *(undefined8 *)(lVar6 + 0x38) = *param_3;
  *(undefined8 *)(lVar6 + 0x40) = uVar2;
  uStack_28 = 0;
  lStack_248 = 0;
  plStack_240 = (long *)0x0;
  plStack_238 = (long *)0x0;
  plStack_230 = (long *)0x0;
  cVar4 = func_0x0edf92e0(&lStack_248,param_1 + 0x410);
  plVar3 = plStack_230;
  if (cVar4 != '\0') {
    plVar7 = plStack_238;
    if (lStack_248 == 0) {
      for (; plVar7 != plVar3; plVar7 = plVar7 + 2) {
        if ((plVar7[1] != 0) &&
           (plVar5 = (long *)func_0x0412c300(), plStack_250 = plVar5, plVar5 != (long *)0x0)) {
          lStack_258 = *plVar7;
          if (lStack_258 != 0) {
            (**(code **)(*(long *)(lStack_258 + 0x40) + 0x10))(lStack_258 + 0x40);
          }
          LOCK();
          plVar1 = plVar5 + 1;
          lVar6 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar6 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
            func_0x0412c2d0(plVar5);
          }
        }
      }
    }
    else {
      (**(code **)(*(long *)(lStack_248 + 0x40) + 0x10))(lStack_248 + 0x40);
    }
  }
  if ((ulong)uStack_28 != 0xffffffff) {
    (**(code **)(&UNK_0ef4a7d0 + (ulong)uStack_28 * 8))(&lStack_258,auStack_228);
  }
  plVar3 = plStack_240;
  uStack_28 = 0xffffffff;
  if (plStack_240 != (long *)0x0) {
    LOCK();
    plVar7 = plStack_240 + 1;
    lVar6 = *plVar7;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_240 + 0x10))(plStack_240);
      func_0x0412c2d0(plVar3);
    }
  }
  return;
}


