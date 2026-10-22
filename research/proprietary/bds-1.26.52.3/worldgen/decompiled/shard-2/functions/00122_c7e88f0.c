/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc8e88f0 (ELF vaddr 0xc7e88f0)
 * Label: string:minecraft:subsurface_builder
 * Body:  [[04136a20, 04136a24] [0c8e88f0, 0c8e8a3f]]
 * Ghidra: FUN_0c8e88f0
 */


/* WARNING: Possible PIC construction at 0x0c8e8a2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0c8e8a31) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c8e88f0(void)

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
  undefined8 uStack_40;
  long lStack_38;
  char cStack_30;
  byte ***pppbStack_28;
  long *plStack_20;
  long lStack_18;
  
  uStack_40 = 0xc8e8903;
  func_0x0412d550(0xf552e80);
  LOCK();
  _DAT_0f552f50 = _DAT_0f552f50 + 1;
  UNLOCK();
  uStack_40 = 0xc8e891a;
  func_0x0412d610(0xf552e80);
  plVar2 = _DAT_0f552f68;
  ppppbVar5 = _DAT_0f552f60;
  if ((_DAT_0f552f60 == (byte ****)0x0) || (*(byte *)_DAT_0f552f60 != 1)) {
    lStack_38 = 0;
    cStack_30 = '\0';
    register0x00000020 = (BADSPACEBASE *)&uStack_40;
    uStack_40 = 0xc8e8a31;
    lVar7 = 0xf552e80;
    unaff_R14 = 0xf552e80;
  }
  else {
    bVar6 = 1;
    if (_DAT_0f552f68 != (long *)0x0) {
      LOCK();
      _DAT_0f552f68[1] = _DAT_0f552f68[1] + 1;
      UNLOCK();
      bVar6 = *(byte *)ppppbVar5;
    }
    lStack_38 = 0xf552e80;
    cStack_30 = '\x01';
    pppbStack_28 = (byte ***)ppppbVar5;
    plStack_20 = plVar2;
    lStack_18 = _DAT_0f552f70;
    if (((bVar6 & 1) != 0) && (*(char *)(_DAT_0f552f70 + 0x18) == '\x01')) {
      uStack_40 = 0xc8e8998;
      func_0x0eeb61d0(_DAT_0f552f70,1,2,5,&UNK_01300d52,&UNK_01e44d00);
    }
    ppppbVar5 = &pppbStack_28;
    pppbStack_28 = (byte ***)0x0;
    plStack_20 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      ppppbVar5 = (byte ****)*plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (ppppbVar5 == (byte ****)0x0) {
        uStack_40 = 0xc8e89c3;
        (**(code **)(*plVar2 + 0x10))(plVar2);
        uStack_40 = 0xc8e89cb;
        ppppbVar5 = (byte ****)func_0x0412c2d0(plVar2);
      }
      plVar2 = plStack_20;
      lStack_18 = 0;
      if (plStack_20 != (long *)0x0) {
        LOCK();
        plVar1 = plStack_20 + 1;
        ppppbVar5 = (byte ****)*plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (ppppbVar5 == (byte ****)0x0) {
          uStack_40 = 0xc8e89f9;
          (**(code **)(*plStack_20 + 0x10))(plStack_20);
          uStack_40 = 0xc8e8a01;
          ppppbVar5 = (byte ****)func_0x0412c2d0(plVar2);
        }
      }
    }
    lVar7 = lStack_38;
    if (cStack_30 != '\x01') {
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


