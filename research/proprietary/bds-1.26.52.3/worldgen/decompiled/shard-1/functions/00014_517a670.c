/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x527a670 (ELF vaddr 0x517a670)
 * Label: OverworldGenerator::vslot0
 * Body:  [[0412c2d0, 0412c2f1] [0527a670, 0527a69d]]
 * Ghidra: wg_OverworldGenerator__vslot0
 */


/* WARNING: Possible PIC construction at 0x0cb3ae75: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0cb3aed9: Changing call to branch */

void wg_OverworldGenerator__vslot0(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  *param_1 = &UNK_0ef9d2a0;
  param_1[0xe] = &UNK_0ef9d4b8;
  func_0x0527a590(param_1 + 0x28);
  *param_1 = &UNK_0f3ed048;
  param_1[0xe] = &UNK_0f3ed220;
  func_0x0eee11d0(param_1 + 0x21);
  puVar4 = (undefined8 *)param_1[0x1e];
  while (puVar4 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar4;
    func_0x0412a280(puVar4,0x18);
    puVar4 = puVar2;
  }
  lVar3 = param_1[0x1c];
  param_1[0x1c] = 0;
  if (lVar3 != 0) {
    func_0x0412a280(lVar3,param_1[0x1d] << 3);
  }
  func_0x04136a00(param_1 + 0x15);
  lVar3 = param_1[0xf];
  param_1[0xf] = 0;
  if (lVar3 != 0) {
    func_0x0d352b40(lVar3);
    func_0x0412a280(lVar3,0x1c8);
  }
  *param_1 = &UNK_0f3f0e90;
  if (param_1[0xd] != 0) {
    plVar5 = (long *)func_0x0412c300();
    if (plVar5 != (long *)0x0) {
      if (param_1[0xc] != 0) {
        (**(code **)(**(long **)(param_1[0xc] + 0x28) + 0x10))();
      }
      LOCK();
      plVar1 = plVar5 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        goto SUB_0412c2d0;
      }
    }
    if (param_1[0xd] != 0) {
      func_0x0412c2d0();
    }
  }
  if (param_1[0xb] != 0) {
    plVar5 = (long *)func_0x0412c300();
    if (plVar5 != (long *)0x0) {
      if (param_1[10] != 0) {
        (**(code **)(**(long **)(param_1[10] + 0x28) + 0x10))();
      }
      LOCK();
      plVar1 = plVar5 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        goto SUB_0412c2d0;
      }
    }
    if (param_1[0xb] != 0) {
      func_0x0412c2d0();
    }
  }
  plVar5 = (long *)param_1[7];
  param_1[7] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  *param_1 = &UNK_0f534768;
  plVar5 = (long *)param_1[2];
  if (plVar5 == (long *)0x0) {
    *(undefined1 *)param_1[1] = 0;
    return;
  }
  *(undefined1 *)param_1[1] = 0;
  LOCK();
  plVar1 = plVar5 + 1;
  lVar3 = *plVar1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (lVar3 != 0) {
    return;
  }
  (**(code **)(*plVar5 + 0x10))(plVar5);
SUB_0412c2d0:
  if (plVar5[2] != 0) {
    LOCK();
    plVar1 = plVar5 + 2;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 != 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0412c2ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x20))();
  return;
}



/* ---- assembly ---- */
/* 0412c2d0 */  MOV RAX,qword ptr [RDI + 0x10]
/* 0412c2d4 */  TEST RAX,RAX
/* 0412c2d7 */  JZ 0x0412c2ec
/* 0412c2d9 */  MOV RAX,-0x1
/* 0412c2e0 */  XADD.LOCK qword ptr [RDI + 0x10],RAX
/* 0412c2e6 */  TEST RAX,RAX
/* 0412c2e9 */  JZ 0x0412c2ec
/* 0412c2eb */  RET
/* 0412c2ec */  MOV RAX,qword ptr [RDI]
/* 0412c2ef */  JMP qword ptr [RAX + 0x20]
/* 0527a670 */  PUSH RBX
/* 0527a671 */  MOV RBX,RDI
/* 0527a674 */  LEA RAX,[0xef9d2a0]
/* 0527a67b */  MOV qword ptr [RDI],RAX
/* 0527a67e */  LEA RAX,[0xef9d4b8]
/* 0527a685 */  MOV qword ptr [RDI + 0x70],RAX
/* 0527a689 */  ADD RDI,0x140
/* 0527a690 */  CALL 0x0527a590
/* 0527a695 */  MOV RDI,RBX
/* 0527a698 */  POP RBX
/* 0527a699 */  JMP 0x0ca70460
