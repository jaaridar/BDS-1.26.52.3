/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2ee9f0 (ELF vaddr 0xd1ee9f0)
 * Label: string:const br::worldgen::MobFilter *StructureSpawnRegistry::get(c
 * Body:  [[0d2ee9f0, 0d2eeaee]]
 * Ghidra: FUN_0d2ee9f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0d2ee9f0(long param_1,byte *param_2)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  
  lVar3 = func_0x0d30c430();
  if (lVar3 != 0) {
    return lVar3 + 0x28;
  }
  lVar3 = func_0x0d30c6b0(param_1 + 0x28,param_2);
  if (lVar3 == 0) {
    return 0;
  }
  uVar5 = 0;
  plVar6 = (long *)0x0;
  if ((*(long *)(lVar3 + 0x30) == 0) ||
     (plVar4 = (long *)func_0x0412c300(), plVar6 = plVar4, plVar4 == (long *)0x0)) {
    plVar4 = (long *)0x0;
  }
  else {
    uVar5 = 0;
    if (*(long *)(lVar3 + 0x28) != 0) {
      lVar3 = *(long *)(lVar3 + 0x28) + 0x40;
      goto LAB_0d2eeabd;
    }
  }
  if ((*param_2 & 1) == 0) {
    param_2 = param_2 + 1;
  }
  else {
    param_2 = *(byte **)(param_2 + 0x10);
  }
  cVar2 = func_0x0eeddcf0(&UNK_012cf3bd,&UNK_01198d5e,0x11,&UNK_014c0def,&UNK_013f1859,param_2,uVar5
                          ,plVar6);
  if (cVar2 != '\0') {
    _DAT_00000000 = 0xdeadc0de;
  }
  lVar3 = 0;
  if (plVar4 == (long *)0x0) {
    return 0;
  }
LAB_0d2eeabd:
  LOCK();
  plVar6 = plVar4 + 1;
  lVar1 = *plVar6;
  *plVar6 = *plVar6 + -1;
  UNLOCK();
  if (lVar1 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    func_0x0412c2d0(plVar4);
  }
  return lVar3;
}


