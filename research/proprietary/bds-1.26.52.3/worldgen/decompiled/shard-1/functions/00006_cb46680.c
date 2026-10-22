/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcc46680 (ELF vaddr 0xcb46680)
 * Label: callee-of:0x5a1f120
 * Body:  [[0cc46680, 0cc4671b]]
 * Ghidra: FUN_0cc46680
 */


void FUN_0cc46680(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  char *pcVar7;
  undefined1 *puVar8;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (*param_2 != 0) {
    pcVar7 = (char *)func_0x0cd3bd10(*param_2 + 0x90);
    if (*pcVar7 == '\0') {
      pcVar7 = (char *)func_0x0cd3bd10(*param_2 + 0x100);
      if (*pcVar7 == '\0') {
        puVar8 = (undefined1 *)func_0x0cd3bd10(*param_2 + 0x90);
        *puVar8 = 1;
        FUN_0412d450(*param_2);
        lVar2 = *param_2;
        uVar4 = *(undefined4 *)((long)param_2 + 4);
        lVar6 = param_2[1];
        uVar5 = *(undefined4 *)((long)param_2 + 0xc);
        *param_2 = 0;
        param_2[1] = 0;
        plVar3 = (long *)param_1[1];
        *(int *)param_1 = (int)lVar2;
        *(undefined4 *)((long)param_1 + 4) = uVar4;
        *(int *)(param_1 + 1) = (int)lVar6;
        *(undefined4 *)((long)param_1 + 0xc) = uVar5;
        if (plVar3 != (long *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          lVar2 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
            if (plVar3[2] != 0) {
              LOCK();
              plVar1 = plVar3 + 2;
              lVar2 = *plVar1;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (lVar2 != 0) {
                return;
              }
            }
                    /* WARNING: Could not recover jumptable at 0x0412c2ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x20))();
            return;
          }
        }
      }
    }
  }
  return;
}



/* ---- assembly ---- */
/* 0cc46680 */  PUSH R14
/* 0cc46682 */  PUSH RBX
/* 0cc46683 */  PUSH RAX
/* 0cc46684 */  MOV RBX,RDI
/* 0cc46687 */  XORPS XMM0,XMM0
/* 0cc4668a */  MOVUPS xmmword ptr [RDI],XMM0
/* 0cc4668d */  MOV RDI,qword ptr [RSI]
/* 0cc46690 */  TEST RDI,RDI
/* 0cc46693 */  JZ 0x0cc466fc
/* 0cc46695 */  MOV R14,RSI
/* 0cc46698 */  ADD RDI,0x90
/* 0cc4669f */  CALL 0x0cd3bd10
/* 0cc466a4 */  CMP byte ptr [RAX],0x0
/* 0cc466a7 */  JNZ 0x0cc466fc
/* 0cc466a9 */  MOV EDI,0x100
/* 0cc466ae */  ADD RDI,qword ptr [R14]
/* 0cc466b1 */  CALL 0x0cd3bd10
/* 0cc466b6 */  CMP byte ptr [RAX],0x0
/* 0cc466b9 */  JNZ 0x0cc466fc
/* 0cc466bb */  MOV EDI,0x90
/* 0cc466c0 */  ADD RDI,qword ptr [R14]
/* 0cc466c3 */  CALL 0x0cd3bd10
/* 0cc466c8 */  MOV byte ptr [RAX],0x1
/* 0cc466cb */  MOV RDI,qword ptr [R14]
/* 0cc466ce */  CALL 0x0412d450
/* 0cc466d3 */  MOVUPS XMM0,xmmword ptr [R14]
/* 0cc466d7 */  XORPS XMM1,XMM1
/* 0cc466da */  MOVUPS xmmword ptr [R14],XMM1
/* 0cc466de */  MOV R14,qword ptr [RBX + 0x8]
/* 0cc466e2 */  MOVUPS xmmword ptr [RBX],XMM0
/* 0cc466e5 */  TEST R14,R14
/* 0cc466e8 */  JZ 0x0cc466fc
/* 0cc466ea */  MOV RAX,-0x1
/* 0cc466f1 */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0cc466f7 */  TEST RAX,RAX
/* 0cc466fa */  JZ 0x0cc46704
/* 0cc466fc */  ADD RSP,0x8
/* 0cc46700 */  POP RBX
/* 0cc46701 */  POP R14
/* 0cc46703 */  RET
/* 0cc46704 */  MOV RAX,qword ptr [R14]
/* 0cc46707 */  MOV RDI,R14
/* 0cc4670a */  CALL qword ptr [RAX + 0x10]
/* 0cc4670d */  MOV RDI,R14
/* 0cc46710 */  ADD RSP,0x8
/* 0cc46714 */  POP RBX
/* 0cc46715 */  POP R14
/* 0cc46717 */  JMP 0x0412c2d0
