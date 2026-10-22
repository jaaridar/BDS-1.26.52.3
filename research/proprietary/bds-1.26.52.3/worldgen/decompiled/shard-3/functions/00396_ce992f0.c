/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcf992f0 (ELF vaddr 0xce992f0)
 * Label: caller-of-seed
 * Body:  [[0cf992f0, 0cf993e9]]
 * Ghidra: FUN_0cf992f0
 */


undefined8 FUN_0cf992f0(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uStack_40;
  int iStack_38;
  
  uVar8 = *(undefined8 *)(param_2 + 0x1c8);
  puVar3 = *(undefined4 **)(param_2 + 0x208);
  uVar1 = puVar3[1];
  uVar2 = puVar3[2];
  fVar9 = (float)func_0x0eee4390(*puVar3);
  fVar10 = (float)func_0x0eee4390(uVar1);
  fVar11 = (float)func_0x0eee4390(uVar2);
  plVar5 = (long *)func_0x0412c300(uVar8);
  plVar4 = *(long **)(param_2 + 0x1c0);
  LOCK();
  plVar6 = plVar5 + 1;
  lVar7 = *plVar6;
  *plVar6 = *plVar6 + -1;
  UNLOCK();
  if (lVar7 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    func_0x0412c2d0(plVar5);
  }
  plVar6 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4);
  uStack_40 = CONCAT44((int)fVar10 + -1,(int)fVar9);
  iStack_38 = (int)fVar11;
  lVar7 = (**(code **)(*plVar6 + 0x30))(plVar6,&uStack_40);
  uVar8 = CONCAT71((int7)((ulong)*(long *)(lVar7 + 0x68) >> 8),1);
  if (**(char **)(*(long *)(lVar7 + 0x68) + 0x20) != '\x05') {
    uVar8 = func_0x0c6cf380(param_1,param_2);
  }
  return uVar8;
}


