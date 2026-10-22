/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcb29310 (ELF vaddr 0xca29310)
 * Label: callee-of:0xc95fb20
 * Body:  [[0cb29310, 0cb29473]]
 * Ghidra: FUN_0cb29310
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0cb29310(long param_1,undefined8 param_2,long param_3,long param_4,undefined4 param_5,
                 long param_6,undefined8 *param_7)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 uStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  long alStack_68 [4];
  long *plStack_48;
  
  uStack_88 = *param_7;
  plStack_80 = (long *)param_7[1];
  if (param_7[1] != 0) {
    LOCK();
    plVar1 = (long *)(param_7[1] + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  uStack_78 = param_7[2];
  plStack_48 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (plStack_48 == (long *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  *plStack_48 = (long)&UNK_0f3f1ae8;
  plStack_48[1] = param_1;
  plStack_48[2] = param_3;
  plStack_48[3] = param_4;
  plStack_48[4] = param_6;
  plStack_48[5] = (long)&uStack_88;
  func_0x0ca6c6f0(param_1 + 0x30,&UNK_01d46888,param_4,param_5,param_2,alStack_68);
  if (plStack_48 == alStack_68) {
    lVar3 = 0x20;
  }
  else {
    lVar3 = 0x28;
    if (plStack_48 == (long *)0x0) goto LAB_0cb293e9;
  }
  (**(code **)(*plStack_48 + lVar3))();
LAB_0cb293e9:
  plVar1 = plStack_80;
  uStack_88 = 0;
  plStack_80 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      func_0x0412c2d0(plVar1);
    }
    plVar1 = plStack_80;
    uStack_78 = 0;
    if (plStack_80 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_80 + 1;
      lVar3 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_80 + 0x10))(plStack_80);
        func_0x0412c2d0(plVar1);
      }
    }
  }
  return;
}


