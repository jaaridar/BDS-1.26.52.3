/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x48ae940 (ELF vaddr 0x47ae940)
 * Label: callee2-of:0x7e4b530
 * Body:  [[0412a280, 0412a284] [048ae940, 048ae99b] [048ae9a0, 048aea4c]]
 * Ghidra: FUN_048ae940
 */


/* WARNING: Possible PIC construction at 0x048ae980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x048aea00: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_048ae940(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  undefined8 in_RAX;
  long lVar5;
  long lVar6;
  undefined8 auStack_30 [2];
  
  lVar2 = param_1[0xc];
  if (lVar2 == 0) {
    lVar2 = param_1[9];
    if (lVar2 != 0) {
      lVar5 = param_1[10];
      lVar6 = lVar2;
      if (lVar2 != lVar5) {
        do {
          plVar3 = *(long **)(lVar5 + -8);
          if (plVar3 != (long *)0x0) {
            LOCK();
            plVar1 = plVar3 + 1;
            lVar6 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar6 == 0) {
              auStack_30[0] = 0x48ae9ce;
              (**(code **)(*plVar3 + 0x10))(plVar3);
              auStack_30[0] = 0x48ae9d6;
              func_0x0412c2d0(plVar3);
            }
          }
          lVar5 = lVar5 + -0x68;
        } while (lVar5 != lVar2);
        lVar6 = param_1[9];
      }
      param_1[10] = lVar2;
      auStack_30[0] = 0x48ae9ec;
      in_RAX = func_0x0412a280(lVar6,param_1[0xb] - lVar6);
    }
    lVar5 = param_1[6];
    if (lVar5 == 0) {
      lVar2 = param_1[3];
      if (lVar2 != 0) {
        param_1[4] = lVar2;
        auStack_30[0] = 0x48aea1e;
        in_RAX = func_0x0412a280(lVar2,param_1[5] - lVar2);
      }
      lVar5 = *param_1;
      if (lVar5 == 0) {
        return in_RAX;
      }
      param_1[1] = lVar5;
    }
    else {
      param_1[7] = lVar5;
      register0x00000020 = (BADSPACEBASE *)auStack_30;
      auStack_30[0] = 0x48aea05;
    }
  }
  else {
    lVar6 = param_1[0xd];
    lVar5 = lVar2;
    if (lVar2 != lVar6) {
      do {
        lVar6 = lVar6 + -0x58;
        auStack_30[0] = 0x48ae96c;
        in_RAX = func_0x048aea50(lVar6);
      } while (lVar6 != lVar2);
      lVar5 = param_1[0xc];
    }
    param_1[0xd] = lVar2;
    register0x00000020 = (BADSPACEBASE *)auStack_30;
    auStack_30[0] = 0x48ae985;
  }
  *(undefined8 *)((long)register0x00000020 + -8) = in_RAX;
  if (lVar5 != 0) {
    pcVar4 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar4)(&DAT_0f5463b0,lVar5);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}



/* ---- assembly ---- */
/* 0412a280 */  JMP 0x0ee326a0
/* 048ae940 */  PUSH R15
/* 048ae942 */  PUSH R14
/* 048ae944 */  PUSH R12
/* 048ae946 */  PUSH RBX
/* 048ae947 */  PUSH RAX
/* 048ae948 */  MOV RBX,RDI
/* 048ae94b */  MOV R15,qword ptr [RDI + 0x60]
/* 048ae94f */  TEST R15,R15
/* 048ae952 */  JZ 0x048ae985
/* 048ae954 */  MOV R14,qword ptr [RBX + 0x68]
/* 048ae958 */  MOV RDI,R15
/* 048ae95b */  CMP R15,R14
/* 048ae95e */  JZ 0x048ae975
/* 048ae960 */  ADD R14,-0x58
/* 048ae964 */  MOV RDI,R14
/* 048ae967 */  CALL 0x048aea50
/* 048ae96c */  CMP R14,R15
/* 048ae96f */  JNZ 0x048ae960
/* 048ae971 */  MOV RDI,qword ptr [RBX + 0x60]
/* 048ae975 */  MOV qword ptr [RBX + 0x68],R15
/* 048ae979 */  MOV RSI,qword ptr [RBX + 0x70]
/* 048ae97d */  SUB RSI,RDI
/* 048ae980 */  CALL 0x0412a280
/* 048ae985 */  MOV R15,qword ptr [RBX + 0x48]
/* 048ae989 */  TEST R15,R15
/* 048ae98c */  JZ 0x048ae9ec
/* 048ae98e */  MOV R12,qword ptr [RBX + 0x50]
/* 048ae992 */  MOV RDI,R15
/* 048ae995 */  CMP R15,R12
/* 048ae998 */  JNZ 0x048ae9a9
/* 048ae99a */  JMP 0x048ae9dc
/* 048ae9a0 */  ADD R12,-0x68
/* 048ae9a4 */  CMP R12,R15
/* 048ae9a7 */  JZ 0x048ae9d8
/* 048ae9a9 */  MOV R14,qword ptr [R12 + -0x8]
/* 048ae9ae */  TEST R14,R14
/* 048ae9b1 */  JZ 0x048ae9a0
/* 048ae9b3 */  MOV RAX,-0x1
/* 048ae9ba */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 048ae9c0 */  TEST RAX,RAX
/* 048ae9c3 */  JNZ 0x048ae9a0
/* 048ae9c5 */  MOV RAX,qword ptr [R14]
/* 048ae9c8 */  MOV RDI,R14
/* 048ae9cb */  CALL qword ptr [RAX + 0x10]
/* 048ae9ce */  MOV RDI,R14
/* 048ae9d1 */  CALL 0x0412c2d0
/* 048ae9d6 */  JMP 0x048ae9a0
/* 048ae9d8 */  MOV RDI,qword ptr [RBX + 0x48]
/* 048ae9dc */  MOV qword ptr [RBX + 0x50],R15
/* 048ae9e0 */  MOV RSI,qword ptr [RBX + 0x58]
/* 048ae9e4 */  SUB RSI,RDI
/* 048ae9e7 */  CALL 0x0412a280
/* 048ae9ec */  MOV RDI,qword ptr [RBX + 0x30]
/* 048ae9f0 */  TEST RDI,RDI
/* 048ae9f3 */  JZ 0x048aea05
/* 048ae9f5 */  MOV qword ptr [RBX + 0x38],RDI
/* 048ae9f9 */  MOV RSI,qword ptr [RBX + 0x40]
/* 048ae9fd */  SUB RSI,RDI
/* 048aea00 */  CALL 0x0412a280
/* 048aea05 */  MOV RDI,qword ptr [RBX + 0x18]
/* 048aea09 */  TEST RDI,RDI
/* 048aea0c */  JZ 0x048aea1e
/* 048aea0e */  MOV qword ptr [RBX + 0x20],RDI
/* 048aea12 */  MOV RSI,qword ptr [RBX + 0x28]
/* 048aea16 */  SUB RSI,RDI
/* 048aea19 */  CALL 0x0412a280
/* 048aea1e */  MOV RDI,qword ptr [RBX]
/* 048aea21 */  TEST RDI,RDI
/* 048aea24 */  JZ 0x048aea41
/* 048aea26 */  MOV qword ptr [RBX + 0x8],RDI
/* 048aea2a */  MOV RSI,qword ptr [RBX + 0x10]
/* 048aea2e */  SUB RSI,RDI
/* 048aea31 */  ADD RSP,0x8
/* 048aea35 */  POP RBX
/* 048aea36 */  POP R12
/* 048aea38 */  POP R14
/* 048aea3a */  POP R15
/* 048aea3c */  JMP 0x0412a280
/* 048aea41 */  ADD RSP,0x8
/* 048aea45 */  POP RBX
/* 048aea46 */  POP R12
/* 048aea48 */  POP R14
/* 048aea4a */  POP R15
/* 048aea4c */  RET
