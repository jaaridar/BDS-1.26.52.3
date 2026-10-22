/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6704e0 (ELF vaddr 0xc5704e0)
 * Label: caller-of-seed
 * Body:  [[0c6704e0, 0c67065b]]
 * Ghidra: FUN_0c6704e0
 */


void FUN_0c6704e0(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uStack_80;
  float fStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined1 auStack_40 [12];
  undefined1 uStack_34;
  
  plVar2 = (long *)func_0x0412c300(*(undefined8 *)(param_2 + 0x1c8));
  plVar4 = *(long **)(param_2 + 0x1c0);
  LOCK();
  plVar3 = plVar2 + 1;
  lVar1 = *plVar3;
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (lVar1 == 0) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0412c2d0(plVar2);
  }
  plVar3 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4);
  plVar4 = (long *)(**(code **)(*plVar3 + 0x150))(plVar3);
  fStack_78 = (float)*(int *)(param_3 + 1);
  uStack_80 = CONCAT44((float)(int)((ulong)*param_3 >> 0x20),(float)(int)*param_3);
  uStack_70 = 0xf6b1128;
  uStack_68 = 0;
  plStack_60 = (long *)0x0;
  uStack_58 = 0;
  uStack_50 = 0xffffffffffffffff;
  uStack_48 = 0;
  auStack_40[0] = 0;
  uStack_34 = 0;
  (**(code **)(*plVar4 + 0x6b0))(plVar4,plVar3,0x1b3,&uStack_80,0xffffffff,&uStack_70,0,auStack_40);
  plVar3 = plStack_60;
  uStack_68 = 0;
  plStack_60 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar4 = plVar3 + 1;
    lVar1 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_0412c2d0(plVar3);
    }
    plVar3 = plStack_60;
    uStack_58 = 0;
    if (plStack_60 != (long *)0x0) {
      LOCK();
      plVar4 = plStack_60 + 1;
      lVar1 = *plVar4;
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plStack_60 + 0x10))(plStack_60);
        FUN_0412c2d0(plVar3);
      }
    }
  }
  func_0x0c6ca820(param_1,param_2,param_3,param_4);
  return;
}


