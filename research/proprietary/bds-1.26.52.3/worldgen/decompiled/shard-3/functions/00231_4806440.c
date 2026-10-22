/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4906440 (ELF vaddr 0x4806440)
 * Label: callee-of:0xe032560
 * Body:  [[04906440, 049064b6] [049064c0, 04906613]]
 * Ghidra: FUN_04906440
 */


/* WARNING: Possible PIC construction at 0x0490646c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x049064f5: Changing call to branch */
/* WARNING: Possible PIC construction at 0x049065c5: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x049065ca) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_04906440(long param_1)

{
  char *pcVar1;
  long *plVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long in_RAX;
  long lVar7;
  long lVar8;
  undefined8 uStack_20;
  
  if ((*(char *)(param_1 + 0x198) == '\x01') && ((*(byte *)(param_1 + 0x180) & 1) != 0)) {
    lVar7 = *(long *)(param_1 + 400);
    register0x00000020 = (BADSPACEBASE *)&uStack_20;
    uStack_20 = 0x4906471;
    goto SUB_0412a280;
  }
  if ((*(char *)(param_1 + 0x178) == '\x01') && ((*(byte *)(param_1 + 0x160) & 1) != 0)) {
    uStack_20 = 0x490649a;
    in_RAX = func_0x0412a280(*(undefined8 *)(param_1 + 0x170),
                             *(ulong *)(param_1 + 0x160) & 0xfffffffffffffffe);
  }
  lVar4 = *(long *)(param_1 + 0x148);
  if (lVar4 != 0) {
    lVar8 = *(long *)(param_1 + 0x150);
    lVar7 = lVar4;
    if (lVar4 != lVar8) {
      do {
        pcVar1 = (char *)(lVar8 + -8);
        lVar8 = lVar8 + -0x1a8;
        if (*pcVar1 == '\x01') {
          uStack_20 = 0x49064db;
          in_RAX = FUN_04906440(lVar8);
        }
      } while (lVar8 != lVar4);
      lVar7 = *(long *)(param_1 + 0x148);
    }
    *(long *)(param_1 + 0x150) = lVar4;
    register0x00000020 = (BADSPACEBASE *)&uStack_20;
    uStack_20 = 0x49064fa;
    goto SUB_0412a280;
  }
  if ((*(char *)(param_1 + 0x140) == '\x01') && (lVar7 = *(long *)(param_1 + 0x128), lVar7 != 0)) {
    *(long *)(param_1 + 0x130) = lVar7;
    uStack_20 = 0x4906525;
    in_RAX = func_0x0412a280(lVar7,*(long *)(param_1 + 0x138) - lVar7);
  }
  plVar5 = *(long **)(param_1 + 0x120);
  if (plVar5 != (long *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    in_RAX = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (in_RAX == 0) {
      uStack_20 = 0x490654c;
      (**(code **)(*plVar5 + 0x10))(plVar5);
      uStack_20 = 0x4906554;
      in_RAX = func_0x0412c2d0(plVar5);
    }
  }
  plVar5 = *(long **)(param_1 + 0x110);
  if (plVar5 != (long *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    in_RAX = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (in_RAX == 0) {
      uStack_20 = 0x490657b;
      (**(code **)(*plVar5 + 0x10))(plVar5);
      uStack_20 = 0x4906583;
      in_RAX = func_0x0412c2d0(plVar5);
    }
  }
  plVar5 = *(long **)(param_1 + 0xe0);
  if (plVar5 == (long *)0x0) {
LAB_049065a1:
    cVar3 = *(char *)(param_1 + 0xa8);
  }
  else {
    LOCK();
    plVar2 = plVar5 + 1;
    in_RAX = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (in_RAX != 0) goto LAB_049065a1;
    uStack_20 = 0x49065d5;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    uStack_20 = 0x49065dd;
    in_RAX = func_0x0412c2d0(plVar5);
    cVar3 = *(char *)(param_1 + 0xa8);
  }
  if ((cVar3 == '\x01') && ((*(byte *)(param_1 + 0x90) & 1) != 0)) {
    lVar7 = *(long *)(param_1 + 0xa0);
    register0x00000020 = (BADSPACEBASE *)&uStack_20;
    uStack_20 = 0x49065ca;
  }
  else {
    if ((*(char *)(param_1 + 0x88) != '\x01') || ((*(byte *)(param_1 + 0x70) & 1) == 0)) {
      return in_RAX;
    }
    lVar7 = *(long *)(param_1 + 0x80);
  }
SUB_0412a280:
  *(long *)((long)register0x00000020 + -8) = in_RAX;
  if (lVar7 != 0) {
    pcVar6 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar6)(&DAT_0f5463b0,lVar7);
  }
  return *(long *)((long)register0x00000020 + -8);
}


