/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x527c470 (ELF vaddr 0x517c470)
 * Label: OverworldGeneratorMultinoise::vslot10
 * Body:  [[0527c470, 0527c577] [0527c580, 0527c629] [0527c630, 0527cb79] [0527cb80, 0527cc1e]]
 * Ghidra: wg_OverworldGeneratorMultinoise__vslot10
 */


byte wg_OverworldGeneratorMultinoise__vslot10(long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  bool bVar5;
  long lVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  int iVar15;
  long *plVar16;
  long *plVar17;
  int iStack_520;
  int iStack_51c;
  long lStack_518;
  long *plStack_510;
  long lStack_508;
  long lStack_500;
  long lStack_4f8;
  byte bStack_4f0;
  undefined8 uStack_4e8;
  long lStack_4e0;
  long lStack_4d8;
  undefined8 *puStack_4d0;
  long *plStack_4c8;
  long lStack_4b8;
  long *plStack_4b0;
  long lStack_4a8;
  long lStack_4a0;
  long lStack_498;
  long lStack_490;
  long lStack_488;
  long lStack_480;
  long lStack_478;
  undefined2 uStack_470;
  undefined6 uStack_46e;
  undefined2 uStack_468;
  undefined6 uStack_466;
  undefined2 uStack_460;
  long lStack_450;
  long lStack_448;
  int *piStack_440;
  undefined8 uStack_438;
  long lStack_430;
  long lStack_428;
  long lStack_420;
  long lStack_418;
  long lStack_410;
  long lStack_408;
  long lStack_400;
  long lStack_3f8;
  long lStack_3f0;
  undefined2 uStack_3e8;
  undefined8 uStack_3e0;
  undefined4 uStack_3d8;
  undefined8 uStack_3d4;
  undefined4 uStack_3cc;
  int iStack_3c8;
  undefined4 uStack_3c4;
  int iStack_3c0;
  undefined4 uStack_3bc;
  int **ppiStack_2e0;
  long *plStack_2d8;
  undefined *apuStack_258 [4];
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 auStack_1d8 [144];
  undefined1 auStack_148 [144];
  int iStack_b8;
  int iStack_b0;
  int iStack_ac;
  int iStack_a4;
  int iStack_90;
  
  func_0x0412d550(param_2 + 0x22);
  lVar11 = param_2[0x34];
  lVar6 = param_2[0x35];
  func_0x0412d610(param_2 + 0x22);
  iStack_520 = (int)lVar11 + 1;
  iStack_51c = (int)lVar6 + 1;
  (**(code **)(*param_2 + 0x20))(&lStack_518,param_2,&iStack_520);
  lVar11 = lStack_518;
  func_0x0ca8a1f0(&lStack_508,*(undefined8 *)(*(long *)(lStack_518 + 0x30) + 0x198),
                  lStack_518 + 0x50,param_2);
  bVar7 = bStack_4f0;
  if (bStack_4f0 != 0) {
    func_0x0cb35860(apuStack_258,param_2);
    lStack_448 = param_1;
    func_0x0412d550(auStack_148);
    lStack_450 = lVar11;
    func_0x0412d610(auStack_148);
    iVar2 = iStack_b8;
    iVar3 = iStack_b0;
    for (iVar15 = iStack_90; iVar15 != 0; iVar15 = iVar15 + -1) {
      uStack_4e8 = (undefined *)CONCAT44(iVar3,iVar2);
      (**(code **)(apuStack_258[0] + 0x20))(&iStack_3c8,apuStack_258,&uStack_4e8);
      if ((CONCAT44(uStack_3c4,iStack_3c8) == 0) ||
         (*(byte *)(CONCAT44(uStack_3c4,iStack_3c8) + 0xb8) < 2)) {
        lStack_4b8 = 0;
        plStack_4b0 = (long *)0x0;
joined_r0x0527c646:
        if (CONCAT44(uStack_3bc,iStack_3c0) != 0) {
          plVar17 = (long *)CONCAT44(uStack_3bc,iStack_3c0);
          LOCK();
          plVar16 = plVar17 + 1;
          lVar11 = *plVar16;
          *plVar16 = *plVar16 + -1;
          UNLOCK();
          if (lVar11 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
            FUN_0412c2d0(plVar17);
          }
        }
      }
      else {
        lStack_4b8 = CONCAT44(uStack_3c4,iStack_3c8);
        plStack_4b0 = (long *)CONCAT44(uStack_3bc,iStack_3c0);
        if (plStack_4b0 != (long *)0x0) {
          LOCK();
          plStack_4b0[1] = plStack_4b0[1] + 1;
          UNLOCK();
          goto joined_r0x0527c646;
        }
      }
      if ((lStack_4b8 != 0) && (6 < *(byte *)(lStack_4b8 + 0xb8))) {
        iStack_3c8 = (int)uStack_4e8 << 4;
        iStack_3c0 = uStack_4e8._4_4_ << 4;
        uStack_3c4 = 0;
        piStack_440 = &iStack_3c8;
        func_0x0cb59800(auStack_148,&piStack_440);
      }
      plVar16 = plStack_4b0;
      if (plStack_4b0 != (long *)0x0) {
        LOCK();
        plVar17 = plStack_4b0 + 1;
        lVar11 = *plVar17;
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (lVar11 == 0) {
          (**(code **)(*plStack_4b0 + 0x10))(plStack_4b0);
          FUN_0412c2d0(plVar16);
        }
      }
      iVar10 = iVar3 + 1;
      if (iStack_a4 <= iVar3) {
        iVar10 = iStack_b0;
      }
      iVar1 = iVar2 + 1;
      bVar5 = iVar2 < iStack_ac;
      iVar2 = iStack_b8;
      if (bVar5) {
        iVar10 = iVar3;
        iVar2 = iVar1;
      }
      iVar3 = iVar10;
    }
    FUN_0c9d0c10(&iStack_3c8,uStack_238,uStack_230,apuStack_258,0,1,1,0);
    lVar6 = lStack_448;
    lStack_4b8 = 0;
    plStack_4b0 = (long *)0x1;
    lStack_4a8 = 0;
    lStack_4a0 = 0;
    lStack_498 = 0;
    lStack_490 = 0;
    lStack_488 = 0;
    lStack_480 = 0;
    lStack_478 = 0;
    uStack_470 = 0;
    uStack_46e = 0;
    uStack_468 = 0;
    uStack_466 = 0;
    uStack_460 = 0;
    piStack_440 = (int *)0x0;
    uStack_438 = 1;
    lStack_430 = 0;
    lStack_428 = 0;
    lStack_420 = 0;
    lStack_418 = 0;
    lStack_410 = 0;
    lStack_408 = 0;
    lStack_400 = 0;
    lStack_3f8 = 0;
    lStack_3f0 = 0;
    uStack_3e8 = 1;
    plStack_2d8 = &lStack_4b8;
    ppiStack_2e0 = &piStack_440;
    lVar11 = func_0x052be680(lStack_448 + 0x140);
    uVar12 = (**(code **)(**(long **)(lVar6 + 0x20) + 0x438))();
    plVar16 = (long *)(lVar11 + 0xa1810);
    lVar11 = *(long *)(lVar11 + 0xa2208);
    if (*(char *)(lVar11 + 0x9e7) == '\x01') {
      *(int *)(lVar11 + 8) = (int)uVar12;
      *(undefined2 *)(lVar11 + 0x9e4) = 0;
      *(undefined4 *)(lVar11 + 0x9d4) = 0;
      *(undefined8 *)(lVar11 + 0x9d8) = 0;
      *(int *)(lVar11 + 0xc) = (int)uVar12;
      lVar13 = 5;
      while( true ) {
        uVar12 = ((ulong)(((uint)(uVar12 >> 0x1e) & 3 ^ (uint)uVar12) * 0x6c078965) + lVar13) - 4;
        uVar9 = (uint)uVar12;
        *(uint *)(lVar11 + -4 + lVar13 * 4) = uVar9;
        if (lVar13 == 0x191) break;
        uVar9 = (((uint)(uVar12 >> 0x1e) & 3 ^ uVar9) * 0x6c078965 + (int)lVar13) - 3;
        uVar12 = (ulong)uVar9;
        *(uint *)(lVar11 + lVar13 * 4) = uVar9;
        lVar13 = lVar13 + 2;
      }
      *(undefined8 *)(lVar11 + 0x9cc) = 0x18e00000270;
    }
    iVar15 = (**(code **)(*plVar16 + 0x10))(plVar16);
    iVar10 = (**(code **)(*plVar16 + 0x10))(plVar16);
    lVar11 = lStack_450;
    iVar2 = *(int *)(lStack_450 + 0x50);
    iVar3 = *(int *)(lStack_450 + 0x54);
    uVar9 = (**(code **)(**(long **)(lVar6 + 0x20) + 0x438))();
    FUN_0ca70f80(lVar6,&iStack_3c8,plVar16,
                 uVar9 ^ iVar3 * (iVar10 - (iVar10 >> 0x1f) | 1U) +
                         iVar2 * (iVar15 - (iVar15 >> 0x1f) | 1U),*(undefined4 *)(lVar11 + 0x50),
                 *(undefined4 *)(lVar11 + 0x54));
    func_0x0ca72420(lVar6,&iStack_3c8,plVar16,*(undefined4 *)(lVar11 + 0x50),
                    *(undefined4 *)(lVar11 + 0x54));
    puVar14 = *(undefined8 **)(*(long *)(lVar6 + 0x78) + 0x30);
    puVar4 = *(undefined8 **)(*(long *)(lVar6 + 0x78) + 0x38);
    if (puVar14 != puVar4) {
      do {
        plVar16 = (long *)*puVar14;
        cVar8 = (**(code **)(*plVar16 + 0x10))(plVar16);
        if (cVar8 != '\0') {
          uStack_3d8 = *(undefined4 *)(lStack_518 + 0x40);
          uStack_3e0 = *(undefined8 *)(lStack_518 + 0x38);
          uStack_3cc = *(undefined4 *)(lStack_518 + 0x4c);
          uStack_3d4 = *(undefined8 *)(lStack_518 + 0x44);
          uStack_4e8 = &UNK_0f461970;
          lStack_4d8 = lStack_518;
          puStack_4d0 = &uStack_3e0;
          lStack_4e0 = lStack_518 + 0x1538;
          plStack_4c8 = &uStack_4e8;
          func_0x0d351180(plVar16,puStack_4d0,&uStack_4e8);
          if (plStack_4c8 == &uStack_4e8) {
            lVar11 = 0x20;
          }
          else {
            lVar11 = 0x28;
            if (plStack_4c8 == (long *)0x0) goto LAB_0527c995;
          }
          (**(code **)(*plStack_4c8 + lVar11))();
        }
LAB_0527c995:
        puVar14 = puVar14 + 1;
      } while (puVar14 != puVar4);
    }
    if (lStack_400 != 0) {
      lStack_3f8 = lStack_400;
      FUN_0412a280(lStack_400,lStack_3f0 - lStack_400);
    }
    if (lStack_418 != 0) {
      lStack_410 = lStack_418;
      FUN_0412a280(lStack_418,lStack_408 - lStack_418);
    }
    if (lStack_430 != 0) {
      lStack_428 = lStack_430;
      FUN_0412a280(lStack_430,lStack_420 - lStack_430);
    }
    if (lStack_478 != 0) {
      uStack_470 = (undefined2)lStack_478;
      uStack_46e = (undefined6)((ulong)lStack_478 >> 0x10);
      FUN_0412a280(lStack_478,CONCAT62(uStack_466,uStack_468) - lStack_478);
    }
    if (lStack_490 != 0) {
      lStack_488 = lStack_490;
      FUN_0412a280(lStack_490,lStack_480 - lStack_490);
    }
    if (lStack_4a8 != 0) {
      lStack_4a0 = lStack_4a8;
      FUN_0412a280(lStack_4a8,lStack_498 - lStack_4a8);
    }
    func_0x0c9d0f40(&iStack_3c8);
    apuStack_258[0] = &UNK_0f3f24c8;
    func_0x052a3830(auStack_1d8);
    FUN_0cb3ae10(apuStack_258);
  }
  lVar11 = lStack_508;
  if (((bStack_4f0 & 1) != 0) && (lVar6 = lStack_500, lStack_508 != 0)) {
    for (; lVar11 != lVar6; lVar6 = lVar6 + -0x20) {
      if (*(char *)(lVar6 + -8) == '\x01') {
        func_0x0412d6b0(*(undefined8 *)(lVar6 + -0x10));
      }
      plVar16 = *(long **)(lVar6 + -0x18);
      if (plVar16 != (long *)0x0) {
        LOCK();
        plVar17 = plVar16 + 1;
        lVar13 = *plVar17;
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (lVar13 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
          FUN_0412c2d0(plVar16);
        }
      }
    }
    lStack_500 = lVar11;
    FUN_0412a280(lStack_508,lStack_4f8 - lStack_508);
  }
  if (plStack_510 != (long *)0x0) {
    LOCK();
    plVar16 = plStack_510 + 1;
    lVar11 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plStack_510 + 0x10))(plStack_510);
      FUN_0412c2d0(plStack_510);
    }
  }
  return bVar7;
}



/* ---- assembly ---- */
/* 0527c470 */  PUSH RBP
/* 0527c471 */  PUSH R15
/* 0527c473 */  PUSH R14
/* 0527c475 */  PUSH R13
/* 0527c477 */  PUSH R12
/* 0527c479 */  PUSH RBX
/* 0527c47a */  SUB RSP,0x508
/* 0527c481 */  MOV RBX,RSI
/* 0527c484 */  MOV R12,RDI
/* 0527c487 */  LEA R14,[RSI + 0x110]
/* 0527c48e */  MOV RDI,R14
/* 0527c491 */  CALL 0x0412d550
/* 0527c496 */  MOV EBP,dword ptr [RBX + 0x1a0]
/* 0527c49c */  MOV R15D,dword ptr [RBX + 0x1a8]
/* 0527c4a3 */  MOV RDI,R14
/* 0527c4a6 */  CALL 0x0412d610
/* 0527c4ab */  INC EBP
/* 0527c4ad */  INC R15D
/* 0527c4b0 */  MOV dword ptr [RSP + 0x18],EBP
/* 0527c4b4 */  MOV dword ptr [RSP + 0x1c],R15D
/* 0527c4b9 */  MOV RAX,qword ptr [RBX]
/* 0527c4bc */  LEA RDI,[RSP + 0x20]
/* 0527c4c1 */  LEA RDX,[RSP + 0x18]
/* 0527c4c6 */  MOV RSI,RBX
/* 0527c4c9 */  CALL qword ptr [RAX + 0x20]
/* 0527c4cc */  MOV R14,qword ptr [RSP + 0x20]
/* 0527c4d1 */  LEA RDX,[R14 + 0x50]
/* 0527c4d5 */  MOV RAX,qword ptr [R14 + 0x30]
/* 0527c4d9 */  MOV RSI,qword ptr [RAX + 0x198]
/* 0527c4e0 */  LEA RDI,[RSP + 0x30]
/* 0527c4e5 */  MOV RCX,RBX
/* 0527c4e8 */  CALL 0x0ca8a1f0
/* 0527c4ed */  MOVZX EBP,byte ptr [RSP + 0x48]
/* 0527c4f2 */  MOV EAX,EBP
/* 0527c4f4 */  TEST BPL,BPL
/* 0527c4f7 */  JZ 0x0527cb59
/* 0527c4fd */  LEA RDI,[RSP + 0x2e0]
/* 0527c505 */  MOV RSI,RBX
/* 0527c508 */  CALL 0x0cb35860
/* 0527c50d */  MOV qword ptr [RSP + 0xf0],R12
/* 0527c515 */  LEA R15,[RSP + 0x3f0]
/* 0527c51d */  MOV RDI,R15
/* 0527c520 */  CALL 0x0412d550
/* 0527c525 */  MOV qword ptr [RSP + 0xe8],R14
/* 0527c52d */  MOV byte ptr [RSP + 0x7],BPL
/* 0527c532 */  MOV EBX,dword ptr [RSP + 0x480]
/* 0527c539 */  MOV R12D,dword ptr [RSP + 0x488]
/* 0527c541 */  MOV EAX,dword ptr [RSP + 0x48c]
/* 0527c548 */  MOV dword ptr [RSP + 0x8],EAX
/* 0527c54c */  MOV EAX,dword ptr [RSP + 0x494]
/* 0527c553 */  MOV dword ptr [RSP + 0x10],EAX
/* 0527c557 */  MOV R13D,dword ptr [RSP + 0x4a8]
/* 0527c55f */  MOV RDI,R15
/* 0527c562 */  CALL 0x0412d610
/* 0527c567 */  TEST R13D,R13D
/* 0527c56a */  JZ 0x0527c70c
/* 0527c570 */  MOV EBP,R12D
/* 0527c573 */  MOV R14D,EBX
/* 0527c576 */  JMP 0x0527c5a8
/* 0527c580 */  LEA EAX,[RBP + 0x1]
/* 0527c583 */  CMP EBP,dword ptr [RSP + 0x10]
/* 0527c587 */  CMOVGE EAX,R12D
/* 0527c58b */  CMP R14D,dword ptr [RSP + 0x8]
/* 0527c590 */  LEA ECX,[R14 + 0x1]
/* 0527c594 */  CMOVGE ECX,EBX
/* 0527c597 */  CMOVL EAX,EBP
/* 0527c59a */  MOV EBP,EAX
/* 0527c59c */  MOV R14D,ECX
/* 0527c59f */  DEC R13D
/* 0527c5a2 */  JZ 0x0527c70c
/* 0527c5a8 */  MOV dword ptr [RSP + 0x50],R14D
/* 0527c5ad */  MOV dword ptr [RSP + 0x54],EBP
/* 0527c5b1 */  MOV RAX,qword ptr [RSP + 0x2e0]
/* 0527c5b9 */  LEA RDI,[RSP + 0x170]
/* 0527c5c1 */  LEA RSI,[RSP + 0x2e0]
/* 0527c5c9 */  LEA RDX,[RSP + 0x50]
/* 0527c5ce */  CALL qword ptr [RAX + 0x20]
/* 0527c5d1 */  MOV RAX,qword ptr [RSP + 0x170]
/* 0527c5d9 */  TEST RAX,RAX
/* 0527c5dc */  LEA RDI,[RSP + 0x3f0]
/* 0527c5e4 */  JZ 0x0527c630
/* 0527c5e6 */  MOVZX EAX,byte ptr [RAX + 0xb8]
/* 0527c5ed */  CMP AL,0x2
/* 0527c5ef */  JC 0x0527c630
/* 0527c5f1 */  MOV RAX,qword ptr [RSP + 0x170]
/* 0527c5f9 */  MOV RCX,qword ptr [RSP + 0x178]
/* 0527c601 */  MOV qword ptr [RSP + 0x80],RAX
/* 0527c609 */  MOV qword ptr [RSP + 0x88],RCX
/* 0527c611 */  TEST RCX,RCX
/* 0527c614 */  JZ 0x0527c67b
/* 0527c616 */  INC.LOCK qword ptr [RCX + 0x8]
/* 0527c61b */  MOV R15,qword ptr [RSP + 0x178]
/* 0527c623 */  TEST R15,R15
/* 0527c626 */  JNZ 0x0527c648
/* 0527c628 */  JMP 0x0527c673
/* 0527c630 */  XORPS XMM0,XMM0
/* 0527c633 */  MOVAPS xmmword ptr [RSP + 0x80],XMM0
/* 0527c63b */  MOV R15,qword ptr [RSP + 0x178]
/* 0527c643 */  TEST R15,R15
/* 0527c646 */  JZ 0x0527c673
/* 0527c648 */  MOV RAX,-0x1
/* 0527c64f */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0527c655 */  TEST RAX,RAX
/* 0527c658 */  JNZ 0x0527c673
/* 0527c65a */  MOV RAX,qword ptr [R15]
/* 0527c65d */  MOV RDI,R15
/* 0527c660 */  CALL qword ptr [RAX + 0x10]
/* 0527c663 */  MOV RDI,R15
/* 0527c666 */  CALL 0x0412c2d0
/* 0527c66b */  LEA RDI,[RSP + 0x3f0]
/* 0527c673 */  MOV RAX,qword ptr [RSP + 0x80]
/* 0527c67b */  TEST RAX,RAX
/* 0527c67e */  JZ 0x0527c6cf
/* 0527c680 */  MOVZX EAX,byte ptr [RAX + 0xb8]
/* 0527c687 */  CMP AL,0x7
/* 0527c689 */  JC 0x0527c6cf
/* 0527c68b */  MOV EAX,dword ptr [RSP + 0x50]
/* 0527c68f */  MOV ECX,dword ptr [RSP + 0x54]
/* 0527c693 */  SHL EAX,0x4
/* 0527c696 */  SHL ECX,0x4
/* 0527c699 */  MOV dword ptr [RSP + 0x170],EAX
/* 0527c6a0 */  MOV dword ptr [RSP + 0x174],0x0
/* 0527c6ab */  MOV dword ptr [RSP + 0x178],ECX
/* 0527c6b2 */  LEA RAX,[RSP + 0x170]
/* 0527c6ba */  MOV qword ptr [RSP + 0xf8],RAX
/* 0527c6c2 */  LEA RSI,[RSP + 0xf8]
/* 0527c6ca */  CALL 0x0cb59800
/* 0527c6cf */  MOV R15,qword ptr [RSP + 0x88]
/* 0527c6d7 */  TEST R15,R15
/* 0527c6da */  JZ 0x0527c580
/* 0527c6e0 */  MOV RAX,-0x1
/* 0527c6e7 */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0527c6ed */  TEST RAX,RAX
/* 0527c6f0 */  JNZ 0x0527c580
/* 0527c6f6 */  MOV RAX,qword ptr [R15]
/* 0527c6f9 */  MOV RDI,R15
/* 0527c6fc */  CALL qword ptr [RAX + 0x10]
/* 0527c6ff */  MOV RDI,R15
/* 0527c702 */  CALL 0x0412c2d0
/* 0527c707 */  JMP 0x0527c580
/* 0527c70c */  MOV RSI,qword ptr [RSP + 0x300]
/* 0527c714 */  MOV RDX,qword ptr [RSP + 0x308]
/* 0527c71c */  LEA RDI,[RSP + 0x170]
/* 0527c724 */  LEA RCX,[RSP + 0x2e0]
/* 0527c72c */  XOR R8D,R8D
/* 0527c72f */  MOV R9D,0x1
/* 0527c735 */  PUSH 0x0
/* 0527c737 */  PUSH 0x1
/* 0527c739 */  CALL 0x0c9d0c10
/* 0527c73e */  ADD RSP,0x10
/* 0527c742 */  MOV qword ptr [RSP + 0x80],0x0
/* 0527c74e */  MOV qword ptr [RSP + 0x88],0x1
/* 0527c75a */  XORPS XMM0,XMM0
/* 0527c75d */  MOVUPS xmmword ptr [RSP + 0x90],XMM0
/* 0527c765 */  MOVUPS xmmword ptr [RSP + 0xa0],XMM0
/* 0527c76d */  MOVUPS xmmword ptr [RSP + 0xb0],XMM0
/* 0527c775 */  MOVUPS xmmword ptr [RSP + 0xc0],XMM0
/* 0527c77d */  MOVUPS xmmword ptr [RSP + 0xca],XMM0
/* 0527c785 */  MOV qword ptr [RSP + 0xf8],0x0
/* 0527c791 */  MOV qword ptr [RSP + 0x100],0x1
/* 0527c79d */  MOVUPS xmmword ptr [RSP + 0x108],XMM0
/* 0527c7a5 */  MOVUPS xmmword ptr [RSP + 0x118],XMM0
/* 0527c7ad */  MOVUPS xmmword ptr [RSP + 0x128],XMM0
/* 0527c7b5 */  MOVUPS xmmword ptr [RSP + 0x138],XMM0
/* 0527c7bd */  MOV qword ptr [RSP + 0x148],0x0
/* 0527c7c9 */  MOV word ptr [RSP + 0x150],0x1
/* 0527c7d3 */  LEA RAX,[RSP + 0x80]
/* 0527c7db */  MOV qword ptr [RSP + 0x260],RAX
/* 0527c7e3 */  LEA RAX,[RSP + 0xf8]
/* 0527c7eb */  MOV qword ptr [RSP + 0x258],RAX
/* 0527c7f3 */  MOV R15,qword ptr [RSP + 0xf0]
/* 0527c7fb */  LEA RDI,[R15 + 0x140]
/* 0527c802 */  CALL 0x052be680
/* 0527c807 */  MOV R14,RAX
/* 0527c80a */  MOV RBX,R15
/* 0527c80d */  MOV RDI,qword ptr [R15 + 0x20]
/* 0527c811 */  MOV RAX,qword ptr [RDI]
/* 0527c814 */  CALL qword ptr [RAX + 0x438]
/* 0527c81a */  MOV RCX,R14
/* 0527c81d */  ADD R14,0xa1810
/* 0527c824 */  MOV RCX,qword ptr [RCX + 0xa2208]
/* 0527c82b */  CMP byte ptr [RCX + 0x9e7],0x1
/* 0527c832 */  JNZ 0x0527c8bd
/* 0527c838 */  MOV dword ptr [RCX + 0x8],EAX
/* 0527c83b */  MOV word ptr [RCX + 0x9e4],0x0
/* 0527c844 */  MOV dword ptr [RCX + 0x9d4],0x0
/* 0527c84e */  MOV qword ptr [RCX + 0x9d8],0x0
/* 0527c859 */  MOV dword ptr [RCX + 0xc],EAX
/* 0527c85c */  MOV EDX,0x5
/* 0527c861 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0527c870 */  MOV ESI,EAX
/* 0527c872 */  SHR ESI,0x1e
/* 0527c875 */  XOR ESI,EAX
/* 0527c877 */  IMUL EAX,ESI,0x6c078965
/* 0527c87d */  ADD RAX,RDX
/* 0527c880 */  ADD RAX,-0x4
/* 0527c884 */  MOV dword ptr [RCX + RDX*0x4 + -0x4],EAX
/* 0527c888 */  CMP RDX,0x191
/* 0527c88f */  JZ 0x0527c8ac
/* 0527c891 */  MOV ESI,EAX
/* 0527c893 */  SHR ESI,0x1e
/* 0527c896 */  XOR ESI,EAX
/* 0527c898 */  IMUL EAX,ESI,0x6c078965
/* 0527c89e */  ADD EAX,EDX
/* 0527c8a0 */  ADD EAX,-0x3
/* 0527c8a3 */  MOV dword ptr [RCX + RDX*0x4],EAX
/* 0527c8a6 */  ADD RDX,0x2
/* 0527c8aa */  JMP 0x0527c870
/* 0527c8ac */  MOV RAX,0x18e00000270
/* 0527c8b6 */  MOV qword ptr [RCX + 0x9cc],RAX
/* 0527c8bd */  MOV RAX,qword ptr [R14]
/* 0527c8c0 */  MOV RDI,R14
/* 0527c8c3 */  CALL qword ptr [RAX + 0x10]
/* 0527c8c6 */  MOV dword ptr [RSP + 0x8],EAX
/* 0527c8ca */  MOV RAX,qword ptr [R14]
/* 0527c8cd */  MOV RDI,R14
/* 0527c8d0 */  CALL qword ptr [RAX + 0x10]
/* 0527c8d3 */  MOV EBP,EAX
/* 0527c8d5 */  MOV R13,qword ptr [RSP + 0xe8]
/* 0527c8dd */  MOV R12D,dword ptr [R13 + 0x50]
/* 0527c8e1 */  MOV R15D,dword ptr [R13 + 0x54]
/* 0527c8e5 */  MOV RDI,qword ptr [RBX + 0x20]
/* 0527c8e9 */  MOV RAX,qword ptr [RDI]
/* 0527c8ec */  CALL qword ptr [RAX + 0x438]
/* 0527c8f2 */  MOV EDX,dword ptr [RSP + 0x8]
/* 0527c8f6 */  MOV ECX,EDX
/* 0527c8f8 */  SHR ECX,0x1f
/* 0527c8fb */  ADD ECX,EDX
/* 0527c8fd */  OR ECX,0x1
/* 0527c900 */  IMUL R12D,ECX
/* 0527c904 */  MOV ECX,EBP
/* 0527c906 */  SHR ECX,0x1f
/* 0527c909 */  ADD ECX,EBP
/* 0527c90b */  OR ECX,0x1
/* 0527c90e */  IMUL R15D,ECX
/* 0527c912 */  ADD R15D,R12D
/* 0527c915 */  XOR EAX,R15D
/* 0527c918 */  MOV R8D,dword ptr [R13 + 0x50]
/* 0527c91c */  MOV R9D,dword ptr [R13 + 0x54]
/* 0527c920 */  LEA RSI,[RSP + 0x170]
/* 0527c928 */  MOV RDI,RBX
/* 0527c92b */  MOV RDX,R14
/* 0527c92e */  MOV ECX,EAX
/* 0527c930 */  CALL 0x0ca70f80
/* 0527c935 */  MOV ECX,dword ptr [R13 + 0x50]
/* 0527c939 */  MOV R8D,dword ptr [R13 + 0x54]
/* 0527c93d */  LEA RSI,[RSP + 0x170]
/* 0527c945 */  MOV RDI,RBX
/* 0527c948 */  MOV RDX,R14
/* 0527c94b */  CALL 0x0ca72420
/* 0527c950 */  MOV RAX,qword ptr [RBX + 0x78]
/* 0527c954 */  MOV R12,qword ptr [RAX + 0x30]
/* 0527c958 */  MOV R13,qword ptr [RAX + 0x38]
/* 0527c95c */  CMP R12,R13
/* 0527c95f */  JZ 0x0527ca3b
/* 0527c965 */  MOV RAX,qword ptr [RSP + 0x20]
/* 0527c96a */  LEA RCX,[RAX + 0x1538]
/* 0527c971 */  MOV qword ptr [RSP + 0x10],RCX
/* 0527c976 */  LEA RBX,[RAX + 0x38]
/* 0527c97a */  MOV qword ptr [RSP + 0x8],RAX
/* 0527c97f */  LEA RBP,[RAX + 0x44]
/* 0527c983 */  LEA R14,[RSP + 0x50]
/* 0527c988 */  JMP 0x0527c9a2
/* 0527c98a */  MOV EAX,0x20
/* 0527c98f */  MOV RCX,qword ptr [RDI]
/* 0527c992 */  CALL qword ptr [RCX + RAX*0x1]
/* 0527c995 */  ADD R12,0x8
/* 0527c999 */  CMP R12,R13
/* 0527c99c */  JZ 0x0527ca3b
/* 0527c9a2 */  MOV R15,qword ptr [R12]
/* 0527c9a6 */  MOV RAX,qword ptr [R15]
/* 0527c9a9 */  MOV RDI,R15
/* 0527c9ac */  CALL qword ptr [RAX + 0x10]
/* 0527c9af */  TEST AL,AL
/* 0527c9b1 */  JZ 0x0527c995
/* 0527c9b3 */  MOV EAX,dword ptr [RBX + 0x8]
/* 0527c9b6 */  MOV dword ptr [RSP + 0x160],EAX
/* 0527c9bd */  MOV RAX,qword ptr [RBX]
/* 0527c9c0 */  MOV qword ptr [RSP + 0x158],RAX
/* 0527c9c8 */  MOV EAX,dword ptr [RBP + 0x8]
/* 0527c9cb */  LEA RCX,[RSP + 0x164]
/* 0527c9d3 */  MOV dword ptr [RCX + 0x8],EAX
/* 0527c9d6 */  MOV RAX,qword ptr [RBP]
/* 0527c9da */  MOV qword ptr [RCX],RAX
/* 0527c9dd */  LEA RAX,[0xf461970]
/* 0527c9e4 */  MOV qword ptr [RSP + 0x50],RAX
/* 0527c9e9 */  MOV RAX,qword ptr [RSP + 0x10]
/* 0527c9ee */  MOV qword ptr [RSP + 0x58],RAX
/* 0527c9f3 */  MOV RAX,qword ptr [RSP + 0x8]
/* 0527c9f8 */  MOV qword ptr [RSP + 0x60],RAX
/* 0527c9fd */  LEA RSI,[RSP + 0x158]
/* 0527ca05 */  MOV qword ptr [RSP + 0x68],RSI
/* 0527ca0a */  MOV qword ptr [RSP + 0x70],R14
/* 0527ca0f */  MOV RDI,R15
/* 0527ca12 */  MOV RDX,R14
/* 0527ca15 */  CALL 0x0d351180
/* 0527ca1a */  MOV RDI,qword ptr [RSP + 0x70]
/* 0527ca1f */  CMP RDI,R14
/* 0527ca22 */  JZ 0x0527c98a
/* 0527ca28 */  MOV EAX,0x28
/* 0527ca2d */  TEST RDI,RDI
/* 0527ca30 */  JNZ 0x0527c98f
/* 0527ca36 */  JMP 0x0527c995
/* 0527ca3b */  MOV RDI,qword ptr [RSP + 0x138]
/* 0527ca43 */  TEST RDI,RDI
/* 0527ca46 */  JZ 0x0527ca60
/* 0527ca48 */  MOV qword ptr [RSP + 0x140],RDI
/* 0527ca50 */  MOV RSI,qword ptr [RSP + 0x148]
/* 0527ca58 */  SUB RSI,RDI
/* 0527ca5b */  CALL 0x0412a280
/* 0527ca60 */  MOV RDI,qword ptr [RSP + 0x120]
/* 0527ca68 */  TEST RDI,RDI
/* 0527ca6b */  MOVZX EBP,byte ptr [RSP + 0x7]
/* 0527ca70 */  JZ 0x0527ca8a
/* 0527ca72 */  MOV qword ptr [RSP + 0x128],RDI
/* 0527ca7a */  MOV RSI,qword ptr [RSP + 0x130]
/* 0527ca82 */  SUB RSI,RDI
/* 0527ca85 */  CALL 0x0412a280
/* 0527ca8a */  MOV RDI,qword ptr [RSP + 0x108]
/* 0527ca92 */  TEST RDI,RDI
/* 0527ca95 */  JZ 0x0527caaf
/* 0527ca97 */  MOV qword ptr [RSP + 0x110],RDI
/* 0527ca9f */  MOV RSI,qword ptr [RSP + 0x118]
/* 0527caa7 */  SUB RSI,RDI
/* 0527caaa */  CALL 0x0412a280
/* 0527caaf */  MOV RDI,qword ptr [RSP + 0xc0]
/* 0527cab7 */  TEST RDI,RDI
/* 0527caba */  JZ 0x0527cad4
/* 0527cabc */  MOV qword ptr [RSP + 0xc8],RDI
/* 0527cac4 */  MOV RSI,qword ptr [RSP + 0xd0]
/* 0527cacc */  SUB RSI,RDI
/* 0527cacf */  CALL 0x0412a280
/* 0527cad4 */  MOV RDI,qword ptr [RSP + 0xa8]
/* 0527cadc */  TEST RDI,RDI
/* 0527cadf */  JZ 0x0527caf9
/* 0527cae1 */  MOV qword ptr [RSP + 0xb0],RDI
/* 0527cae9 */  MOV RSI,qword ptr [RSP + 0xb8]
/* 0527caf1 */  SUB RSI,RDI
/* 0527caf4 */  CALL 0x0412a280
/* 0527caf9 */  MOV RDI,qword ptr [RSP + 0x90]
/* 0527cb01 */  TEST RDI,RDI
/* 0527cb04 */  JZ 0x0527cb1e
/* 0527cb06 */  MOV qword ptr [RSP + 0x98],RDI
/* 0527cb0e */  MOV RSI,qword ptr [RSP + 0xa0]
/* 0527cb16 */  SUB RSI,RDI
/* 0527cb19 */  CALL 0x0412a280
/* 0527cb1e */  LEA RDI,[RSP + 0x170]
/* 0527cb26 */  CALL 0x0c9d0f40
/* 0527cb2b */  LEA RAX,[0xf3f24c8]
/* 0527cb32 */  MOV qword ptr [RSP + 0x2e0],RAX
/* 0527cb3a */  LEA RDI,[RSP + 0x360]
/* 0527cb42 */  CALL 0x052a3830
/* 0527cb47 */  LEA RDI,[RSP + 0x2e0]
/* 0527cb4f */  CALL 0x0cb3ae10
/* 0527cb54 */  MOVZX EAX,byte ptr [RSP + 0x48]
/* 0527cb59 */  TEST AL,0x1
/* 0527cb5b */  JZ 0x0527cbde
/* 0527cb61 */  MOV R14,qword ptr [RSP + 0x30]
/* 0527cb66 */  TEST R14,R14
/* 0527cb69 */  JZ 0x0527cbde
/* 0527cb6b */  MOV R15,qword ptr [RSP + 0x38]
/* 0527cb70 */  MOV RDI,R14
/* 0527cb73 */  CMP R14,R15
/* 0527cb76 */  JNZ 0x0527cb89
/* 0527cb78 */  JMP 0x0527cbcc
/* 0527cb80 */  ADD R15,-0x20
/* 0527cb84 */  CMP R15,R14
/* 0527cb87 */  JZ 0x0527cbc7
/* 0527cb89 */  CMP byte ptr [R15 + -0x8],0x1
/* 0527cb8e */  JNZ 0x0527cb99
/* 0527cb90 */  MOV RDI,qword ptr [R15 + -0x10]
/* 0527cb94 */  CALL 0x0412d6b0
/* 0527cb99 */  MOV RBX,qword ptr [R15 + -0x18]
/* 0527cb9d */  TEST RBX,RBX
/* 0527cba0 */  JZ 0x0527cb80
/* 0527cba2 */  MOV RAX,-0x1
/* 0527cba9 */  XADD.LOCK qword ptr [RBX + 0x8],RAX
/* 0527cbaf */  TEST RAX,RAX
/* 0527cbb2 */  JNZ 0x0527cb80
/* 0527cbb4 */  MOV RAX,qword ptr [RBX]
/* 0527cbb7 */  MOV RDI,RBX
/* 0527cbba */  CALL qword ptr [RAX + 0x10]
/* 0527cbbd */  MOV RDI,RBX
/* 0527cbc0 */  CALL 0x0412c2d0
/* 0527cbc5 */  JMP 0x0527cb80
/* 0527cbc7 */  MOV RDI,qword ptr [RSP + 0x30]
/* 0527cbcc */  MOV qword ptr [RSP + 0x38],R14
/* 0527cbd1 */  MOV RSI,qword ptr [RSP + 0x40]
/* 0527cbd6 */  SUB RSI,RDI
/* 0527cbd9 */  CALL 0x0412a280
/* 0527cbde */  MOV RBX,qword ptr [RSP + 0x28]
/* 0527cbe3 */  TEST RBX,RBX
/* 0527cbe6 */  JZ 0x0527cc0b
/* 0527cbe8 */  MOV RAX,-0x1
/* 0527cbef */  XADD.LOCK qword ptr [RBX + 0x8],RAX
/* 0527cbf5 */  TEST RAX,RAX
/* 0527cbf8 */  JNZ 0x0527cc0b
/* 0527cbfa */  MOV RAX,qword ptr [RBX]
/* 0527cbfd */  MOV RDI,RBX
/* 0527cc00 */  CALL qword ptr [RAX + 0x10]
/* 0527cc03 */  MOV RDI,RBX
/* 0527cc06 */  CALL 0x0412c2d0
/* 0527cc0b */  MOV EAX,EBP
/* 0527cc0d */  ADD RSP,0x508
/* 0527cc14 */  POP RBX
/* 0527cc15 */  POP R12
/* 0527cc17 */  POP R13
/* 0527cc19 */  POP R14
/* 0527cc1b */  POP R15
/* 0527cc1d */  POP RBP
/* 0527cc1e */  RET
