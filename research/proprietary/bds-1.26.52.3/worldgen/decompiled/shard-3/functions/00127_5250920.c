/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5350920 (ELF vaddr 0x5250920)
 * Label: string:Biome named: %s contains %s component which is a pre-caves a
 * Body:  [[04136a20, 04136a24] [05350920, 05350a84] [0eee02f0, 0eee0369] [0eee2d80, 0eee2d85]]
 * Ghidra: FUN_05350920
 */


/* WARNING: Possible PIC construction at 0x05350a6d: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x05350a72) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_05350920(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  byte ****ppppbVar5;
  byte bVar6;
  undefined8 unaff_RBX;
  long lVar7;
  undefined8 unaff_R14;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  char cStack_40;
  byte ***pppbStack_38;
  long *plStack_30;
  long lStack_28;
  
  uStack_60 = 0x535093d;
  func_0x0412d550(0xf552e80);
  LOCK();
  _DAT_0f552f50 = _DAT_0f552f50 + 1;
  UNLOCK();
  uStack_60 = 0x5350954;
  func_0x0412d610(0xf552e80);
  plVar2 = _DAT_0f552f68;
  ppppbVar5 = _DAT_0f552f60;
  if ((_DAT_0f552f60 == (byte ****)0x0) || (*(byte *)_DAT_0f552f60 != 1)) {
    lStack_48 = 0;
    cStack_40 = '\0';
    register0x00000020 = (BADSPACEBASE *)&uStack_60;
    uStack_60 = 0x5350a72;
    unaff_RBX = param_1;
    lVar7 = 0xf552e80;
  }
  else {
    bVar6 = 1;
    if (_DAT_0f552f68 != (long *)0x0) {
      LOCK();
      _DAT_0f552f68[1] = _DAT_0f552f68[1] + 1;
      UNLOCK();
      bVar6 = *(byte *)ppppbVar5;
    }
    lStack_48 = 0xf552e80;
    cStack_40 = '\x01';
    pppbStack_38 = (byte ***)ppppbVar5;
    plStack_30 = plVar2;
    lStack_28 = _DAT_0f552f70;
    if (((bVar6 & 1) != 0) && (*(char *)(_DAT_0f552f70 + 0x18) == '\x01')) {
      uStack_60 = 0x53509d3;
      uStack_58 = param_2;
      func_0x0eeb61d0(_DAT_0f552f70,1,3,5,&UNK_012d75ad,param_1);
    }
    ppppbVar5 = &pppbStack_38;
    pppbStack_38 = (byte ***)0x0;
    plStack_30 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      ppppbVar5 = (byte ****)*plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (ppppbVar5 == (byte ****)0x0) {
        uStack_60 = 0x53509fe;
        (**(code **)(*plVar2 + 0x10))(plVar2);
        uStack_60 = 0x5350a06;
        ppppbVar5 = (byte ****)FUN_0412c2d0(plVar2);
      }
      plVar2 = plStack_30;
      lStack_28 = 0;
      if (plStack_30 != (long *)0x0) {
        LOCK();
        plVar1 = plStack_30 + 1;
        ppppbVar5 = (byte ****)*plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (ppppbVar5 == (byte ****)0x0) {
          uStack_60 = 0x5350a34;
          (**(code **)(*plStack_30 + 0x10))(plStack_30);
          uStack_60 = 0x5350a3c;
          ppppbVar5 = (byte ****)FUN_0412c2d0(plVar2);
        }
      }
    }
    lVar7 = lStack_48;
    if (cStack_40 != '\x01') {
      return;
    }
  }
  *(undefined8 *)((long)register0x00000020 + -8) = unaff_R14;
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
  func_0x0412d6b0(uVar4);
  (*(code *)PTR_pthread_cond_broadcast_0f546458)(lVar7 + 0x90);
  return;
}


