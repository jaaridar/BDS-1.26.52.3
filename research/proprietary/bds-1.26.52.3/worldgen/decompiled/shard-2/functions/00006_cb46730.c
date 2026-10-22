/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcc46730 (ELF vaddr 0xcb46730)
 * Label: callee-of:0x5a1f120
 * Body:  [[0cc46730, 0cc467cb]]
 * Ghidra: FUN_0cc46730
 */


void FUN_0cc46730(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined1 *puVar4;
  
  if (*param_1 != 0) {
    func_0x0412d520();
    puVar4 = (undefined1 *)func_0x0cd3bd10(*param_1 + 0x90);
    *puVar4 = 0;
    plVar3 = (long *)param_1[1];
    *param_1 = 0;
    param_1[1] = 0;
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        FUN_0412c2d0(plVar3);
        plVar3 = (long *)param_1[1];
        goto joined_r0x0cc4677c;
      }
    }
  }
  plVar3 = (long *)param_1[1];
joined_r0x0cc4677c:
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
  return;
}



/* ---- assembly ---- */
/* 0cc46730 */  PUSH R14
/* 0cc46732 */  PUSH RBX
/* 0cc46733 */  PUSH RAX
/* 0cc46734 */  MOV RBX,RDI
/* 0cc46737 */  MOV RDI,qword ptr [RDI]
/* 0cc4673a */  TEST RDI,RDI
/* 0cc4673d */  JZ 0x0cc46775
/* 0cc4673f */  CALL 0x0412d520
/* 0cc46744 */  MOV EDI,0x90
/* 0cc46749 */  ADD RDI,qword ptr [RBX]
/* 0cc4674c */  CALL 0x0cd3bd10
/* 0cc46751 */  MOV byte ptr [RAX],0x0
/* 0cc46754 */  XORPS XMM0,XMM0
/* 0cc46757 */  MOV R14,qword ptr [RBX + 0x8]
/* 0cc4675b */  MOVUPS xmmword ptr [RBX],XMM0
/* 0cc4675e */  TEST R14,R14
/* 0cc46761 */  JZ 0x0cc46775
/* 0cc46763 */  MOV RAX,-0x1
/* 0cc4676a */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0cc46770 */  TEST RAX,RAX
/* 0cc46773 */  JZ 0x0cc467b0
/* 0cc46775 */  MOV RBX,qword ptr [RBX + 0x8]
/* 0cc46779 */  TEST RBX,RBX
/* 0cc4677c */  JZ 0x0cc46790
/* 0cc4677e */  MOV RAX,-0x1
/* 0cc46785 */  XADD.LOCK qword ptr [RBX + 0x8],RAX
/* 0cc4678b */  TEST RAX,RAX
/* 0cc4678e */  JZ 0x0cc46798
/* 0cc46790 */  ADD RSP,0x8
/* 0cc46794 */  POP RBX
/* 0cc46795 */  POP R14
/* 0cc46797 */  RET
/* 0cc46798 */  MOV RAX,qword ptr [RBX]
/* 0cc4679b */  MOV RDI,RBX
/* 0cc4679e */  CALL qword ptr [RAX + 0x10]
/* 0cc467a1 */  MOV RDI,RBX
/* 0cc467a4 */  ADD RSP,0x8
/* 0cc467a8 */  POP RBX
/* 0cc467a9 */  POP R14
/* 0cc467ab */  JMP 0x0412c2d0
/* 0cc467b0 */  MOV RAX,qword ptr [R14]
/* 0cc467b3 */  MOV RDI,R14
/* 0cc467b6 */  CALL qword ptr [RAX + 0x10]
/* 0cc467b9 */  MOV RDI,R14
/* 0cc467bc */  CALL 0x0412c2d0
/* 0cc467c1 */  MOV RBX,qword ptr [RBX + 0x8]
/* 0cc467c5 */  TEST RBX,RBX
/* 0cc467c8 */  JNZ 0x0cc4677e
/* 0cc467ca */  JMP 0x0cc46790
