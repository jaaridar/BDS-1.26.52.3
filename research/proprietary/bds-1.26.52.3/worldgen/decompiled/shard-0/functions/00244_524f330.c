/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x534f330 (ELF vaddr 0x524f330)
 * Label: callee-of:0x524f1c0
 * Body:  [[04136a20, 04136a24] [0534f330, 0534f48e]]
 * Ghidra: FUN_0534f330
 */


/* WARNING: Possible PIC construction at 0x0534f474: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0534f479) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0534f330(undefined1 param_1,ulong param_2,undefined4 param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  byte ****ppppbVar5;
  byte bVar6;
  undefined8 unaff_RBX;
  long lVar7;
  ulong unaff_R14;
  undefined8 uStack_60;
  long lStack_58;
  char cStack_50;
  byte ***pppbStack_48;
  long *plStack_40;
  long lStack_38;
  
  uStack_60 = 0x534f355;
  func_0x0412d550(0xf552e80);
  LOCK();
  _DAT_0f552f50 = _DAT_0f552f50 + 1;
  UNLOCK();
  uStack_60 = 0x534f36c;
  func_0x0412d610(0xf552e80);
  plVar2 = _DAT_0f552f68;
  ppppbVar5 = _DAT_0f552f60;
  if ((_DAT_0f552f60 == (byte ****)0x0) || (*(byte *)_DAT_0f552f60 != 1)) {
    lStack_58 = 0;
    cStack_50 = '\0';
    register0x00000020 = (BADSPACEBASE *)&uStack_60;
    uStack_60 = 0x534f479;
    unaff_RBX = param_4;
    lVar7 = 0xf552e80;
    unaff_R14 = param_2 & 0xffffffff;
  }
  else {
    bVar6 = 1;
    if (_DAT_0f552f68 != (long *)0x0) {
      LOCK();
      _DAT_0f552f68[1] = _DAT_0f552f68[1] + 1;
      UNLOCK();
      bVar6 = *(byte *)ppppbVar5;
    }
    lStack_58 = 0xf552e80;
    cStack_50 = '\x01';
    pppbStack_48 = (byte ***)ppppbVar5;
    plStack_40 = plVar2;
    lStack_38 = _DAT_0f552f70;
    if (((bVar6 & 1) != 0) && (*(char *)(_DAT_0f552f70 + 0x18) == '\x01')) {
      uStack_60 = 0x534f3d9;
      func_0x0eeb61d0(_DAT_0f552f70,param_1,param_2 & 0xffffffff,param_3,param_4);
    }
    ppppbVar5 = &pppbStack_48;
    pppbStack_48 = (byte ***)0x0;
    plStack_40 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      ppppbVar5 = (byte ****)*plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (ppppbVar5 == (byte ****)0x0) {
        uStack_60 = 0x534f404;
        (**(code **)(*plVar2 + 0x10))(plVar2);
        uStack_60 = 0x534f40c;
        ppppbVar5 = (byte ****)func_0x0412c2d0(plVar2);
      }
      plVar2 = plStack_40;
      lStack_38 = 0;
      if (plStack_40 != (long *)0x0) {
        LOCK();
        plVar1 = plStack_40 + 1;
        ppppbVar5 = (byte ****)*plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (ppppbVar5 == (byte ****)0x0) {
          uStack_60 = 0x534f43a;
          (**(code **)(*plStack_40 + 0x10))(plStack_40);
          uStack_60 = 0x534f442;
          ppppbVar5 = (byte ****)func_0x0412c2d0(plVar2);
        }
      }
    }
    lVar7 = lStack_58;
    if (cStack_50 != '\x01') {
      return;
    }
  }
  *(ulong *)((long)register0x00000020 + -8) = unaff_R14;
  *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_RBX;
  *(byte *****)((long)register0x00000020 + -0x18) = ppppbVar5;
  LOCK();
  plVar2 = (long *)(lVar7 + 0xd0);
  lVar3 = *plVar2;
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (lVar3 != -0x7fffffffffffffff) {
    return;
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0xeee031b;
  func_0x0412d450();
  LOCK();
  *(ulong *)(lVar7 + 0xd0) = *(ulong *)(lVar7 + 0xd0) & 0x7fffffffffffffff;
  UNLOCK();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0xeee0335;
  func_0x0412d520(lVar7);
  uVar4 = *(undefined8 *)(lVar7 + 0xc0);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0xeee0344;
  func_0x0412d680(uVar4);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0xeee0353;
  pthread_mutex_unlock(uVar4);
  (*(code *)PTR_pthread_cond_broadcast_0f546458)(lVar7 + 0x90);
  return;
}


