/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc970bf0
 * Label: WorldGenerator::vslot43
 * Body:  [[0c970331, 0c9704f6] [0c970500, 0c97055b] [0c970560, 0c970631] [0c970640, 0c970757] [0c970760, 0c97094b] [0c970950, 0c970a02] [0c970a10, 0c970b40] [0c970b50, 0c970b9f] [0c970bf0, 0c970d16] [0c970e4f, 0c970e67]]
 * Ghidra: wg_WorldGenerator__vslot43
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_WorldGenerator__vslot43(void)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  code *pcVar4;
  ulong uVar5;
  char cVar6;
  uint uVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong in_RAX;
  undefined8 uVar10;
  int iVar11;
  long lVar12;
  undefined8 *puVar13;
  short *psVar14;
  undefined8 *puVar15;
  short *psVar16;
  short *psVar17;
  long lVar18;
  undefined8 *puVar19;
  short *psVar20;
  uint uVar21;
  short *psVar22;
  ulong uVar23;
  undefined8 *puVar24;
  long *unaff_retaddr;
  long in_stack_00000010;
  undefined8 *in_stack_00000028;
  undefined8 *in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined8 *in_stack_00000050;
  undefined8 *in_stack_00000058;
  undefined8 *in_stack_00000060;
  long *in_stack_00000068;
  long *in_stack_00000070;
  undefined8 *in_stack_00000078;
  undefined8 *in_stack_00000080;
  byte in_stack_00000088;
  undefined8 *in_stack_00000090;
  undefined8 *in_stack_00000098;
  long in_stack_000000a0;
  int in_stack_000000a8;
  undefined *in_stack_000000b0;
  long *in_stack_000000b8;
  long *in_stack_000000c0;
  long in_stack_000000e0;
  long in_stack_000000e8;
  long in_stack_000000f0;
  long in_stack_00000100;
  long in_stack_00000108;
  long in_stack_00000110;
  long *in_stack_00000128;
  undefined4 in_stack_00000130;
  uint in_stack_00000140;
  long in_stack_00000148;
  undefined8 in_stack_00000150;
  long in_stack_00000158;
  undefined8 *in_stack_00000160;
  
  *(undefined1 *)(in_RAX & 0xffffffffffffff00) = *(undefined1 *)(in_RAX & 0xffffffffffffff00);
  do {
    if ((ulong)in_stack_00000140 != 0xffffffff) {
      (**(code **)(&UNK_0f3e84f8 + (ulong)in_stack_00000140 * 8))(&stack0x00000048,&stack0x00000130)
      ;
    }
    plVar2 = in_stack_00000128;
    in_stack_00000140 = 0xffffffff;
    in_stack_000000b0 = &UNK_0f36e918;
    in_stack_00000128 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (in_stack_00000100 != 0) {
      in_stack_00000108 = in_stack_00000100;
      func_0x0412a280(in_stack_00000100,in_stack_00000110 - in_stack_00000100);
    }
    if (in_stack_000000e0 != 0) {
      in_stack_000000e8 = in_stack_000000e0;
      func_0x0412a280(in_stack_000000e0,in_stack_000000f0 - in_stack_000000e0);
    }
    plVar2 = in_stack_000000c0;
    in_stack_000000c0 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    lVar12 = in_stack_00000010;
    if (in_stack_000000b8 != (long *)0x0) {
      LOCK();
      *(int *)((long)in_stack_000000b8 + 0xc) = *(int *)((long)in_stack_000000b8 + 0xc) + -1;
      UNLOCK();
      if (((*(int *)((long)in_stack_000000b8 + 0xc) < 1) && (*in_stack_000000b8 == 0)) &&
         (in_stack_000000b8 != (long *)0x0)) {
        func_0x0412a280(in_stack_000000b8,0x10);
      }
    }
LAB_0c970430:
    do {
      in_stack_00000010 = lVar12;
      lVar12 = in_stack_00000010 + 0x98;
      if (lVar12 == in_stack_00000158) {
        if (0 < in_stack_000000a8) {
          in_stack_000000b0 =
               (undefined *)
               CONCAT44((float)(int)((ulong)*in_stack_00000028 >> 0x20),
                        (float)(int)*in_stack_00000028);
          in_stack_000000b8 =
               (long *)CONCAT44(in_stack_000000b8._4_4_,(float)*(int *)(in_stack_00000028 + 1));
          func_0x0bc93890(in_stack_00000040,&stack0x000000b0,in_stack_000000a8,1,0);
        }
        (**(code **)(**(long **)(in_stack_00000148 + 0x68) + 0x270))
                  (*(long **)(in_stack_00000148 + 0x68),in_stack_00000040,in_stack_00000148,
                   in_stack_00000028,in_stack_00000150);
        puVar19 = in_stack_00000090;
        puVar9 = in_stack_00000098;
        if (in_stack_00000090 != (undefined8 *)0x0) {
          while (puVar19 != puVar9) {
            puVar9 = puVar9 + -0x13;
            (**(code **)*puVar9)(puVar9);
          }
          in_stack_00000098 = puVar19;
          func_0x0412a280(in_stack_00000090,in_stack_000000a0 - (long)in_stack_00000090);
        }
        return;
      }
      uVar10 = *in_stack_00000028;
      uVar1 = *(undefined4 *)(in_stack_00000028 + 1);
      psVar17 = (short *)*unaff_retaddr;
      psVar16 = (short *)unaff_retaddr[1];
      uVar7 = 0xff;
      psVar14 = psVar17;
      psVar22 = psVar16;
      if ((*(long **)(in_stack_00000010 + 0xa0) != (long *)0x0) &&
         (plVar2 = (long *)**(long **)(in_stack_00000010 + 0xa0), plVar2 != (long *)0x0)) {
        func_0x0c455e60(&stack0x000000b0,lVar12);
        uVar7 = (**(code **)(*plVar2 + 0x328))(plVar2,&stack0x000000b0);
        plVar2 = in_stack_000000b8;
        in_stack_000000b0 = &UNK_0f3773c0;
        in_stack_000000b8 = (long *)0x0;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x90))();
        }
        uVar7 = uVar7 & 0xff;
        psVar14 = (short *)*unaff_retaddr;
        psVar22 = (short *)unaff_retaddr[1];
      }
      iVar11 = (int)((ulong)((long)psVar16 - (long)psVar17) >> 3) * 0x3cf3cf3d;
      uVar21 = ((uint)((ulong)((long)iVar11 * 0x66666667) >> 0x22) - (iVar11 >> 0x1f)) * 0x10 + 0x10
      ;
      if ((int)uVar7 <= (int)uVar21) {
        uVar21 = uVar7;
      }
      uVar7 = (uint)*(byte *)(in_stack_00000010 + 0xba);
      if (psVar14 != psVar22) {
        psVar17 = psVar14 + 0x10;
        do {
          psVar16 = psVar17 + -0x10;
          cVar6 = func_0x0c459d50(psVar16,lVar12);
          if (cVar6 != '\0') {
            if (((*(long **)(psVar17 + -0xc) != (long *)0x0) &&
                (plVar2 = (long *)**(long **)(psVar17 + -0xc), plVar2 != (long *)0x0)) &&
               (cVar6 = (**(code **)(*plVar2 + 0x120))(), cVar6 != '\0')) {
              psVar14 = (short *)(*(long *)(psVar17 + -4) + 0x128);
              if (*psVar17 == 0x7fff) {
                psVar14 = psVar17;
              }
              if (*(long *)(psVar17 + -4) == 0) {
                psVar14 = psVar17;
              }
              psVar20 = (short *)(*(long *)(in_stack_00000010 + 0xb0) + 0x128);
              if (*(short *)(in_stack_00000010 + 0xb8) == 0x7fff) {
                psVar20 = (short *)(in_stack_00000010 + 0xb8);
              }
              if (*(long *)(in_stack_00000010 + 0xb0) == 0) {
                psVar20 = (short *)(in_stack_00000010 + 0xb8);
              }
              if (*psVar14 != *psVar20) goto LAB_0c970563;
            }
            iVar11 = uVar7 + *(byte *)(psVar17 + 1);
            uVar7 = iVar11 - uVar21;
            if (uVar7 == 0 || iVar11 < (int)uVar21) {
              func_0x0c4564a0(psVar16,iVar11);
              goto LAB_0c970430;
            }
            func_0x0c4564a0(psVar16,uVar21);
          }
LAB_0c970563:
          psVar16 = psVar17 + 0x44;
          psVar17 = psVar17 + 0x54;
        } while (psVar16 != psVar22);
      }
    } while ((int)uVar7 < 1);
    func_0x0c4510a0(&stack0x000000b0,lVar12);
    in_stack_000000b0 = &UNK_0f371da8;
    in_stack_00000130 = 0;
    in_stack_00000140 = 0;
    if ((ulong)*(uint *)(in_stack_00000010 + 0x128) == 0xffffffff) {
      in_stack_00000140 = 0xffffffff;
    }
    else {
      in_stack_00000048 = (undefined8 *)&stack0x00000130;
      (**(code **)(&UNK_0f38c5a0 + (ulong)*(uint *)(in_stack_00000010 + 0x128) * 8))
                (&stack0x00000048,in_stack_00000048,in_stack_00000010 + 0x118);
    }
    func_0x0c4564a0(&stack0x000000b0,uVar7);
    puVar9 = (undefined8 *)unaff_retaddr[1];
    if (puVar9 < (undefined8 *)unaff_retaddr[2]) {
      func_0x0c4510a0(puVar9,&stack0x000000b0);
      *puVar9 = &UNK_0f371da8;
      *(undefined4 *)(puVar9 + 0x10) = 0;
      *(undefined4 *)(puVar9 + 0x12) = 0;
      if ((ulong)in_stack_00000140 == 0xffffffff) {
        *(undefined4 *)(puVar9 + 0x12) = 0xffffffff;
      }
      else {
        in_stack_00000048 = puVar9 + 0x10;
        (**(code **)(&UNK_0f38c5a0 + (ulong)in_stack_00000140 * 8))
                  (&stack0x00000048,in_stack_00000048,&stack0x00000130);
      }
      puVar9[0x13] = uVar10;
      *(undefined4 *)(puVar9 + 0x14) = uVar1;
      puVar9 = puVar9 + 0x15;
      unaff_retaddr[1] = (long)puVar9;
    }
    else {
      lVar18 = (long)puVar9 - *unaff_retaddr;
      uVar23 = (lVar18 >> 3) * -0x30c30c30c30c30c3 + 1;
      if (0x186186186186186 < uVar23) {
        func_0x0c9a59a0();
LAB_0c970d0d:
        uVar10 = func_0x04882eb0();
        func_0x05340180(&stack0x00000090);
        func_0x0eee2d70(uVar10);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar8 = unaff_retaddr[2] - *unaff_retaddr >> 3;
      uVar5 = lVar8 * -0x6186186186186186;
      if (uVar23 < uVar5) {
        uVar23 = uVar5;
      }
      if (0xc30c30c30c30c2 < (ulong)(lVar8 * -0x30c30c30c30c30c3)) {
        uVar23 = 0x186186186186186;
      }
      in_stack_00000068 = unaff_retaddr;
      if (uVar23 == 0) {
        puVar9 = (undefined8 *)0x0;
      }
      else {
        if (0x186186186186186 < uVar23) goto LAB_0c970d0d;
        puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar23 * 0xa8);
        if (puVar9 == (undefined8 *)0x0) {
          func_0x0eec74c0(uVar23 * 0xa8,0);
          puVar9 = (undefined8 *)0x0;
        }
      }
      puVar19 = (undefined8 *)(lVar18 + (long)puVar9);
      in_stack_00000060 = puVar9 + uVar23 * 0x15;
      in_stack_00000048 = puVar9;
      in_stack_00000050 = puVar19;
      in_stack_00000058 = puVar19;
      func_0x0c4510a0(puVar19,&stack0x000000b0);
      *puVar19 = &UNK_0f371da8;
      *(undefined4 *)(puVar19 + 0x10) = 0;
      *(undefined4 *)(puVar19 + 0x12) = 0;
      if ((ulong)in_stack_00000140 == 0xffffffff) {
        *(undefined4 *)(puVar19 + 0x12) = 0xffffffff;
      }
      else {
        in_stack_00000070 = puVar19 + 0x10;
        (**(code **)(&UNK_0f38c5a0 + (ulong)in_stack_00000140 * 8))
                  (&stack0x00000070,in_stack_00000070,&stack0x00000130);
      }
      puVar19[0x13] = uVar10;
      *(undefined4 *)(puVar19 + 0x14) = uVar1;
      puVar9 = in_stack_00000058 + 0x15;
      puVar19 = (undefined8 *)*unaff_retaddr;
      puVar3 = (undefined8 *)unaff_retaddr[1];
      puVar13 = (undefined8 *)(((long)puVar19 - (long)puVar3) + (long)in_stack_00000050);
      in_stack_00000078 = &stack0x00000160;
      in_stack_00000080 = &stack0x00000030;
      in_stack_00000088 = 0;
      puVar15 = puVar19;
      puVar24 = puVar13;
      in_stack_00000030 = puVar13;
      in_stack_00000058 = puVar9;
      in_stack_00000070 = unaff_retaddr;
      in_stack_00000160 = puVar13;
      if (puVar19 != puVar3) {
        do {
          in_stack_00000030 = puVar24;
          func_0x0c4510a0(puVar24,puVar15);
          *puVar24 = &UNK_0f371da8;
          *(undefined4 *)(puVar24 + 0x10) = 0;
          *(undefined4 *)(puVar24 + 0x12) = 0;
          if ((ulong)*(uint *)(puVar15 + 0x12) == 0xffffffff) {
            *(undefined4 *)(puVar24 + 0x12) = 0xffffffff;
          }
          else {
            in_stack_00000038 = puVar24 + 0x10;
            (**(code **)(&UNK_0f38c5a0 + (ulong)*(uint *)(puVar15 + 0x12) * 8))
                      (&stack0x00000038,in_stack_00000038,puVar15 + 0x10);
          }
          *(undefined4 *)(puVar24 + 0x14) = *(undefined4 *)(puVar15 + 0x14);
          puVar24[0x13] = puVar15[0x13];
          puVar15 = puVar15 + 0x15;
          in_stack_00000030 = in_stack_00000030 + 0x15;
          puVar24 = in_stack_00000030;
        } while (puVar15 != puVar3);
        in_stack_00000088 = 1;
        do {
          *puVar19 = &UNK_0f371da8;
          if ((ulong)*(uint *)(puVar19 + 0x12) != 0xffffffff) {
            (**(code **)(&UNK_0f3e84f8 + (ulong)*(uint *)(puVar19 + 0x12) * 8))
                      (&stack0x00000038,puVar19 + 0x10);
          }
          *(undefined4 *)(puVar19 + 0x12) = 0xffffffff;
          *puVar19 = &UNK_0f36e918;
          plVar2 = (long *)puVar19[0xf];
          puVar19[0xf] = 0;
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 8))();
          }
          lVar18 = puVar19[10];
          if (lVar18 != 0) {
            puVar19[0xb] = lVar18;
            func_0x0412a280(lVar18,puVar19[0xc] - lVar18);
          }
          lVar18 = puVar19[6];
          if (lVar18 != 0) {
            puVar19[7] = lVar18;
            func_0x0412a280(lVar18,puVar19[8] - lVar18);
          }
          plVar2 = (long *)puVar19[2];
          puVar19[2] = 0;
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 8))();
          }
          plVar2 = (long *)puVar19[1];
          if (plVar2 != (long *)0x0) {
            LOCK();
            *(int *)((long)plVar2 + 0xc) = *(int *)((long)plVar2 + 0xc) + -1;
            UNLOCK();
            if (((*(int *)((long)plVar2 + 0xc) < 1) && (*plVar2 == 0)) && (puVar19[1] != 0)) {
              func_0x0412a280(puVar19[1],0x10);
            }
            puVar19[1] = 0;
          }
          puVar19 = puVar19 + 0x15;
        } while (puVar19 != puVar3);
        if ((in_stack_00000088 & 1) == 0) {
          puVar19 = (undefined8 *)*in_stack_00000078;
          puVar3 = (undefined8 *)*in_stack_00000080;
          while (puVar3 != puVar19) {
            puVar15 = puVar3 + -0x15;
            *puVar15 = &UNK_0f371da8;
            if ((ulong)*(uint *)(puVar3 + -3) != 0xffffffff) {
              (**(code **)(&UNK_0f3e84f8 + (ulong)*(uint *)(puVar3 + -3) * 8))
                        (&stack0x00000038,puVar3 + -5);
            }
            *(undefined4 *)(puVar3 + -3) = 0xffffffff;
            func_0x0c44e610(puVar15);
            puVar3 = puVar15;
          }
        }
      }
      lVar18 = *unaff_retaddr;
      lVar8 = unaff_retaddr[2];
      *unaff_retaddr = (long)puVar13;
      unaff_retaddr[1] = (long)puVar9;
      unaff_retaddr[2] = (long)in_stack_00000060;
      if (lVar18 != 0) {
        func_0x0412a280(lVar18,lVar8 - lVar18);
      }
    }
    unaff_retaddr[1] = (long)puVar9;
    in_stack_000000b0 = &UNK_0f371da8;
    in_stack_00000010 = lVar12;
  } while( true );
}



/* ---- assembly ---- */
/* 0c970331 */  MOV EDX,dword ptr [RSP + 0xa8]
/* 0c970338 */  TEST EDX,EDX
/* 0c97033a */  JLE 0x0c970378
/* 0c97033c */  MOV RAX,qword ptr [RSP + 0x28]
/* 0c970341 */  CVTSI2SS XMM0,dword ptr [RAX + 0x8]
/* 0c970346 */  MOVSD XMM1,qword ptr [RAX]
/* 0c97034a */  CVTDQ2PS XMM1,XMM1
/* 0c97034d */  MOVLPS qword ptr [RSP + 0xb0],XMM1
/* 0c970355 */  MOVSS dword ptr [RSP + 0xb8],XMM0
/* 0c97035e */  LEA RSI,[RSP + 0xb0]
/* 0c970366 */  MOV RDI,qword ptr [RSP + 0x40]
/* 0c97036b */  MOV ECX,0x1
/* 0c970370 */  XOR R8D,R8D
/* 0c970373 */  CALL 0x0bc93890
/* 0c970378 */  MOV RDX,qword ptr [RSP + 0x148]
/* 0c970380 */  MOV RDI,qword ptr [RDX + 0x68]
/* 0c970384 */  MOV RAX,qword ptr [RDI]
/* 0c970387 */  MOV RSI,qword ptr [RSP + 0x40]
/* 0c97038c */  MOV RCX,qword ptr [RSP + 0x28]
/* 0c970391 */  MOV R8,qword ptr [RSP + 0x150]
/* 0c970399 */  CALL qword ptr [RAX + 0x270]
/* 0c97039f */  MOV R14,qword ptr [RSP + 0x90]
/* 0c9703a7 */  TEST R14,R14
/* 0c9703aa */  JZ 0x0c970407
/* 0c9703ac */  MOV RBX,qword ptr [RSP + 0x98]
/* 0c9703b4 */  MOV RDI,R14
/* 0c9703b7 */  CMP R14,RBX
/* 0c9703ba */  JZ 0x0c9703ef
/* 0c9703bc */  ADD RBX,-0x98
/* 0c9703c3 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0c9703d0 */  MOV RAX,qword ptr [RBX]
/* 0c9703d3 */  MOV RDI,RBX
/* 0c9703d6 */  CALL qword ptr [RAX]
/* 0c9703d8 */  LEA RAX,[RBX + -0x98]
/* 0c9703df */  CMP RBX,R14
/* 0c9703e2 */  MOV RBX,RAX
/* 0c9703e5 */  JNZ 0x0c9703d0
/* 0c9703e7 */  MOV RDI,qword ptr [RSP + 0x90]
/* 0c9703ef */  MOV qword ptr [RSP + 0x98],R14
/* 0c9703f7 */  MOV RSI,qword ptr [RSP + 0xa0]
/* 0c9703ff */  SUB RSI,RDI
/* 0c970402 */  CALL 0x0412a280
/* 0c970407 */  ADD RSP,0x168
/* 0c97040e */  POP RBX
/* 0c97040f */  POP R12
/* 0c970411 */  POP R13
/* 0c970413 */  POP R14
/* 0c970415 */  POP R15
/* 0c970417 */  POP RBP
/* 0c970418 */  RET
/* 0c970419 */  MOV RDI,R15
/* 0c97041c */  MOV ESI,EBX
/* 0c97041e */  CALL 0x0c4564a0
/* 0c970423 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0c970430 */  MOV RCX,qword ptr [RSP + 0x10]
/* 0c970435 */  ADD RCX,0x98
/* 0c97043c */  CMP RCX,qword ptr [RSP + 0x158]
/* 0c970444 */  JZ 0x0c970331
/* 0c97044a */  MOV RAX,qword ptr [RSP + 0x28]
/* 0c97044f */  MOV RDX,qword ptr [RAX]
/* 0c970452 */  MOV qword ptr [RSP + 0x18],RDX
/* 0c970457 */  MOV EAX,dword ptr [RAX + 0x8]
/* 0c97045a */  MOV dword ptr [RSP + 0xc],EAX
/* 0c97045e */  MOV RAX,qword ptr [RSP]
/* 0c970462 */  MOV R15,qword ptr [RAX]
/* 0c970465 */  MOV R14,qword ptr [RAX + 0x8]
/* 0c970469 */  MOV qword ptr [RSP + 0x10],RCX
/* 0c97046e */  MOV RCX,qword ptr [RCX + 0x8]
/* 0c970472 */  MOV EAX,0xff
/* 0c970477 */  TEST RCX,RCX
/* 0c97047a */  JZ 0x0c970500
/* 0c970480 */  MOV RBX,qword ptr [RCX]
/* 0c970483 */  MOV R13,R14
/* 0c970486 */  MOV RBP,R15
/* 0c970489 */  TEST RBX,RBX
/* 0c97048c */  JZ 0x0c970506
/* 0c97048e */  LEA RDI,[RSP + 0xb0]
/* 0c970496 */  MOV RSI,qword ptr [RSP + 0x10]
/* 0c97049b */  CALL 0x0c455e60
/* 0c9704a0 */  MOV RAX,qword ptr [RBX]
/* 0c9704a3 */  MOV RDI,RBX
/* 0c9704a6 */  LEA RSI,[RSP + 0xb0]
/* 0c9704ae */  CALL qword ptr [RAX + 0x328]
/* 0c9704b4 */  MOV EBX,EAX
/* 0c9704b6 */  LEA RAX,[0xf3773c0]
/* 0c9704bd */  MOV qword ptr [RSP + 0xb0],RAX
/* 0c9704c5 */  MOV RDI,qword ptr [RSP + 0xb8]
/* 0c9704cd */  MOV qword ptr [RSP + 0xb8],0x0
/* 0c9704d9 */  TEST RDI,RDI
/* 0c9704dc */  JZ 0x0c9704e7
/* 0c9704de */  MOV RAX,qword ptr [RDI]
/* 0c9704e1 */  CALL qword ptr [RAX + 0x90]
/* 0c9704e7 */  MOVZX EAX,BL
/* 0c9704ea */  MOV RCX,qword ptr [RSP]
/* 0c9704ee */  MOV RBP,qword ptr [RCX]
/* 0c9704f1 */  MOV R13,qword ptr [RCX + 0x8]
/* 0c9704f5 */  JMP 0x0c970506
/* 0c970500 */  MOV R13,R14
/* 0c970503 */  MOV RBP,R15
/* 0c970506 */  SUB R14,R15
/* 0c970509 */  SHR R14,0x3
/* 0c97050d */  IMUL ECX,R14D,0x3cf3cf3d
/* 0c970514 */  MOVSXD RCX,ECX
/* 0c970517 */  IMUL R12,RCX,0x66666667
/* 0c97051e */  MOV RCX,R12
/* 0c970521 */  SHR RCX,0x3f
/* 0c970525 */  SHR R12,0x22
/* 0c970529 */  ADD R12D,ECX
/* 0c97052c */  SHL R12D,0x4
/* 0c970530 */  ADD R12D,0x10
/* 0c970534 */  CMP R12D,EAX
/* 0c970537 */  CMOVGE R12D,EAX
/* 0c97053b */  MOV RAX,qword ptr [RSP + 0x10]
/* 0c970540 */  MOVZX EBX,byte ptr [RAX + 0x22]
/* 0c970544 */  CMP RBP,R13
/* 0c970547 */  JZ 0x0c970640
/* 0c97054d */  ADD RAX,0x20
/* 0c970551 */  MOV qword ptr [RSP + 0x20],RAX
/* 0c970556 */  ADD RBP,0x20
/* 0c97055a */  JMP 0x0c970580
/* 0c970560 */  MOV R14D,EBX
/* 0c970563 */  LEA RAX,[RBP + 0xa8]
/* 0c97056a */  ADD RBP,0x88
/* 0c970571 */  MOV EBX,R14D
/* 0c970574 */  CMP RBP,R13
/* 0c970577 */  MOV RBP,RAX
/* 0c97057a */  JZ 0x0c970643
/* 0c970580 */  LEA R15,[RBP + -0x20]
/* 0c970584 */  MOV RDI,R15
/* 0c970587 */  MOV RSI,qword ptr [RSP + 0x10]
/* 0c97058c */  CALL 0x0c459d50
/* 0c970591 */  TEST AL,AL
/* 0c970593 */  JZ 0x0c970560
/* 0c970595 */  MOV RAX,qword ptr [RBP + -0x18]
/* 0c970599 */  TEST RAX,RAX
/* 0c97059c */  JZ 0x0c970610
/* 0c97059e */  MOV RDI,qword ptr [RAX]
/* 0c9705a1 */  TEST RDI,RDI
/* 0c9705a4 */  JZ 0x0c970610
/* 0c9705a6 */  MOV RAX,qword ptr [RDI]
/* 0c9705a9 */  CALL qword ptr [RAX + 0x120]
/* 0c9705af */  TEST AL,AL
/* 0c9705b1 */  JZ 0x0c970610
/* 0c9705b3 */  MOV RAX,qword ptr [RBP + -0x8]
/* 0c9705b7 */  MOVZX ECX,word ptr [RBP]
/* 0c9705bb */  LEA RDX,[RAX + 0x128]
/* 0c9705c2 */  CMP ECX,0x7fff
/* 0c9705c8 */  CMOVZ RDX,RBP
/* 0c9705cc */  TEST RAX,RAX
/* 0c9705cf */  CMOVZ RDX,RBP
/* 0c9705d3 */  MOVZX EAX,word ptr [RDX]
/* 0c9705d6 */  MOV RDX,qword ptr [RSP + 0x10]
/* 0c9705db */  MOV RCX,qword ptr [RDX + 0x18]
/* 0c9705df */  MOVZX EDX,word ptr [RDX + 0x20]
/* 0c9705e3 */  LEA RSI,[RCX + 0x128]
/* 0c9705ea */  CMP EDX,0x7fff
/* 0c9705f0 */  MOV RDX,qword ptr [RSP + 0x20]
/* 0c9705f5 */  CMOVZ RSI,RDX
/* 0c9705f9 */  TEST RCX,RCX
/* 0c9705fc */  CMOVZ RSI,RDX
/* 0c970600 */  CMP AX,word ptr [RSI]
/* 0c970603 */  JNZ 0x0c970560
/* 0c970609 */  NOP dword ptr [RAX]
/* 0c970610 */  MOVZX EAX,byte ptr [RBP + 0x2]
/* 0c970614 */  ADD EBX,EAX
/* 0c970616 */  MOV R14D,EBX
/* 0c970619 */  SUB R14D,R12D
/* 0c97061c */  JLE 0x0c970419
/* 0c970622 */  MOV RDI,R15
/* 0c970625 */  MOV ESI,R12D
/* 0c970628 */  CALL 0x0c4564a0
/* 0c97062d */  JMP 0x0c970563
/* 0c970640 */  MOV R14D,EBX
/* 0c970643 */  TEST R14D,R14D
/* 0c970646 */  JLE 0x0c970430
/* 0c97064c */  LEA RDI,[RSP + 0xb0]
/* 0c970654 */  MOV RSI,qword ptr [RSP + 0x10]
/* 0c970659 */  CALL 0x0c4510a0
/* 0c97065e */  LEA RAX,[0xf371da8]
/* 0c970665 */  MOV qword ptr [RSP + 0xb0],RAX
/* 0c97066d */  MOV dword ptr [RSP + 0x130],0x0
/* 0c970678 */  MOV dword ptr [RSP + 0x140],0x0
/* 0c970683 */  MOV RCX,qword ptr [RSP + 0x10]
/* 0c970688 */  MOV EAX,dword ptr [RCX + 0x90]
/* 0c97068e */  MOV EDX,0xffffffff
/* 0c970693 */  CMP RAX,RDX
/* 0c970696 */  JZ 0x0c9706bd
/* 0c970698 */  LEA RDX,[RCX + 0x80]
/* 0c97069f */  LEA RSI,[RSP + 0x130]
/* 0c9706a7 */  MOV qword ptr [RSP + 0x48],RSI
/* 0c9706ac */  LEA RDI,[RSP + 0x48]
/* 0c9706b1 */  LEA RCX,[0xf38c5a0]
/* 0c9706b8 */  CALL qword ptr [RCX + RAX*0x8]
/* 0c9706bb */  JMP 0x0c9706c8
/* 0c9706bd */  MOV dword ptr [RSP + 0x140],0xffffffff
/* 0c9706c8 */  LEA RDI,[RSP + 0xb0]
/* 0c9706d0 */  MOV ESI,R14D
/* 0c9706d3 */  CALL 0x0c4564a0
/* 0c9706d8 */  MOV RDX,qword ptr [RSP]
/* 0c9706dc */  MOV RBP,qword ptr [RDX + 0x8]
/* 0c9706e0 */  MOV RAX,qword ptr [RDX + 0x10]
/* 0c9706e4 */  CMP RBP,RAX
/* 0c9706e7 */  JNC 0x0c970760
/* 0c9706e9 */  MOV RDI,RBP
/* 0c9706ec */  LEA RSI,[RSP + 0xb0]
/* 0c9706f4 */  CALL 0x0c4510a0
/* 0c9706f9 */  LEA RAX,[0xf371da8]
/* 0c970700 */  MOV qword ptr [RBP],RAX
/* 0c970704 */  MOV dword ptr [RBP + 0x80],0x0
/* 0c97070e */  MOV dword ptr [RBP + 0x90],0x0
/* 0c970718 */  MOV EAX,dword ptr [RSP + 0x140]
/* 0c97071f */  MOV ECX,0xffffffff
/* 0c970724 */  CMP RAX,RCX
/* 0c970727 */  JZ 0x0c9707f9
/* 0c97072d */  LEA R14,[RBP + 0x80]
/* 0c970734 */  MOV qword ptr [RSP + 0x48],R14
/* 0c970739 */  LEA RDI,[RSP + 0x48]
/* 0c97073e */  MOV RSI,R14
/* 0c970741 */  LEA RDX,[RSP + 0x130]
/* 0c970749 */  LEA RCX,[0xf38c5a0]
/* 0c970750 */  CALL qword ptr [RCX + RAX*0x8]
/* 0c970753 */  JMP 0x0c970803
/* 0c970760 */  MOV RCX,qword ptr [RDX]
/* 0c970763 */  SUB RBP,RCX
/* 0c970766 */  MOV R14,RBP
/* 0c970769 */  SAR R14,0x3
/* 0c97076d */  MOV RDI,-0x30c30c30c30c30c3
/* 0c970777 */  IMUL R14,RDI
/* 0c97077b */  INC R14
/* 0c97077e */  MOV RSI,0x186186186186186
/* 0c970788 */  CMP R14,RSI
/* 0c97078b */  JA 0x0c970d08
/* 0c970791 */  SUB RAX,RCX
/* 0c970794 */  SAR RAX,0x3
/* 0c970798 */  IMUL RAX,RDI
/* 0c97079c */  LEA RCX,[RAX + RAX*0x1]
/* 0c9707a0 */  CMP RCX,R14
/* 0c9707a3 */  CMOVA R14,RCX
/* 0c9707a7 */  MOV RCX,0xc30c30c30c30c3
/* 0c9707b1 */  CMP RAX,RCX
/* 0c9707b4 */  CMOVNC R14,RSI
/* 0c9707b8 */  MOV qword ptr [RSP + 0x68],RDX
/* 0c9707bd */  TEST R14,R14
/* 0c9707c0 */  JZ 0x0c97082d
/* 0c9707c2 */  CMP R14,RSI
/* 0c9707c5 */  JA 0x0c970d0d
/* 0c9707cb */  IMUL RBX,R14,0xa8
/* 0c9707d2 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0c9707d9 */  LEA RDI,[0xf5463b0]
/* 0c9707e0 */  MOV RSI,RBX
/* 0c9707e3 */  CALL qword ptr [RAX + 0x10]
/* 0c9707e6 */  TEST RAX,RAX
/* 0c9707e9 */  JNZ 0x0c97082f
/* 0c9707eb */  MOV RDI,RBX
/* 0c9707ee */  XOR ESI,ESI
/* 0c9707f0 */  CALL 0x0eec74c0
/* 0c9707f5 */  XOR EAX,EAX
/* 0c9707f7 */  JMP 0x0c97082f
/* 0c9707f9 */  MOV dword ptr [RBP + 0x90],0xffffffff
/* 0c970803 */  MOV EAX,dword ptr [RSP + 0xc]
/* 0c970807 */  MOV RCX,qword ptr [RSP + 0x18]
/* 0c97080c */  MOV qword ptr [RBP + 0x98],RCX
/* 0c970813 */  MOV dword ptr [RBP + 0xa0],EAX
/* 0c970819 */  ADD RBP,0xa8
/* 0c970820 */  MOV RAX,qword ptr [RSP]
/* 0c970824 */  MOV qword ptr [RAX + 0x8],RBP
/* 0c970828 */  JMP 0x0c970be1
/* 0c97082d */  XOR EAX,EAX
/* 0c97082f */  MOV qword ptr [RSP + 0x48],RAX
/* 0c970834 */  ADD RBP,RAX
/* 0c970837 */  MOV qword ptr [RSP + 0x58],RBP
/* 0c97083c */  MOV qword ptr [RSP + 0x50],RBP
/* 0c970841 */  IMUL RCX,R14,0xa8
/* 0c970848 */  ADD RCX,RAX
/* 0c97084b */  MOV qword ptr [RSP + 0x60],RCX
/* 0c970850 */  MOV RDI,RBP
/* 0c970853 */  LEA RSI,[RSP + 0xb0]
/* 0c97085b */  CALL 0x0c4510a0
/* 0c970860 */  LEA RAX,[0xf371da8]
/* 0c970867 */  MOV qword ptr [RBP],RAX
/* 0c97086b */  MOV dword ptr [RBP + 0x80],0x0
/* 0c970875 */  MOV dword ptr [RBP + 0x90],0x0
/* 0c97087f */  MOV EAX,dword ptr [RSP + 0x140]
/* 0c970886 */  MOV ECX,0xffffffff
/* 0c97088b */  CMP RAX,RCX
/* 0c97088e */  JZ 0x0c9708b8
/* 0c970890 */  LEA R14,[RBP + 0x80]
/* 0c970897 */  MOV qword ptr [RSP + 0x70],R14
/* 0c97089c */  LEA RDI,[RSP + 0x70]
/* 0c9708a1 */  MOV RSI,R14
/* 0c9708a4 */  LEA RDX,[RSP + 0x130]
/* 0c9708ac */  LEA RCX,[0xf38c5a0]
/* 0c9708b3 */  CALL qword ptr [RCX + RAX*0x8]
/* 0c9708b6 */  JMP 0x0c9708c2
/* 0c9708b8 */  MOV dword ptr [RBP + 0x90],0xffffffff
/* 0c9708c2 */  MOV EAX,dword ptr [RSP + 0xc]
/* 0c9708c6 */  MOV RCX,qword ptr [RSP + 0x18]
/* 0c9708cb */  MOV qword ptr [RBP + 0x98],RCX
/* 0c9708d2 */  MOV dword ptr [RBP + 0xa0],EAX
/* 0c9708d8 */  MOV RBP,qword ptr [RSP + 0x58]
/* 0c9708dd */  MOV EAX,0xa8
/* 0c9708e2 */  ADD RBP,RAX
/* 0c9708e5 */  MOV qword ptr [RSP + 0x58],RBP
/* 0c9708ea */  MOV RAX,qword ptr [RSP]
/* 0c9708ee */  MOV R13,qword ptr [RAX]
/* 0c9708f1 */  MOV R12,qword ptr [RAX + 0x8]
/* 0c9708f5 */  MOV RCX,R13
/* 0c9708f8 */  SUB RCX,R12
/* 0c9708fb */  ADD RCX,qword ptr [RSP + 0x50]
/* 0c970900 */  MOV qword ptr [RSP + 0x30],RCX
/* 0c970905 */  MOV qword ptr [RSP + 0x20],RCX
/* 0c97090a */  MOV qword ptr [RSP + 0x160],RCX
/* 0c970912 */  MOV qword ptr [RSP + 0x70],RAX
/* 0c970917 */  LEA RAX,[RSP + 0x160]
/* 0c97091f */  MOV qword ptr [RSP + 0x78],RAX
/* 0c970924 */  LEA RAX,[RSP + 0x30]
/* 0c970929 */  MOV qword ptr [RSP + 0x80],RAX
/* 0c970931 */  MOV byte ptr [RSP + 0x88],0x0
/* 0c970939 */  CMP R13,R12
/* 0c97093c */  JZ 0x0c970bb0
/* 0c970942 */  MOV R14,qword ptr [RSP + 0x20]
/* 0c970947 */  MOV RBX,R13
/* 0c97094a */  JMP 0x0c970994
/* 0c970950 */  MOV dword ptr [R14 + 0x90],0xffffffff
/* 0c97095b */  MOV EAX,dword ptr [RBX + 0xa0]
/* 0c970961 */  MOV dword ptr [R14 + 0xa0],EAX
/* 0c970968 */  MOV RAX,qword ptr [RBX + 0x98]
/* 0c97096f */  MOV qword ptr [R14 + 0x98],RAX
/* 0c970976 */  ADD RBX,0xa8
/* 0c97097d */  MOV R14,qword ptr [RSP + 0x30]
/* 0c970982 */  MOV EAX,0xa8
/* 0c970987 */  ADD R14,RAX
/* 0c97098a */  MOV qword ptr [RSP + 0x30],R14
/* 0c97098f */  CMP RBX,R12
/* 0c970992 */  JZ 0x0c9709f9
/* 0c970994 */  MOV RDI,R14
/* 0c970997 */  MOV RSI,RBX
/* 0c97099a */  CALL 0x0c4510a0
/* 0c97099f */  LEA RAX,[0xf371da8]
/* 0c9709a6 */  MOV qword ptr [R14],RAX
/* 0c9709a9 */  MOV dword ptr [R14 + 0x80],0x0
/* 0c9709b4 */  MOV dword ptr [R14 + 0x90],0x0
/* 0c9709bf */  MOV EAX,dword ptr [RBX + 0x90]
/* 0c9709c5 */  MOV ECX,0xffffffff
/* 0c9709ca */  CMP RAX,RCX
/* 0c9709cd */  JZ 0x0c970950
/* 0c9709cf */  LEA R15,[R14 + 0x80]
/* 0c9709d6 */  LEA RDX,[RBX + 0x80]
/* 0c9709dd */  MOV qword ptr [RSP + 0x38],R15
/* 0c9709e2 */  LEA RDI,[RSP + 0x38]
/* 0c9709e7 */  MOV RSI,R15
/* 0c9709ea */  LEA RCX,[0xf38c5a0]
/* 0c9709f1 */  CALL qword ptr [RCX + RAX*0x8]
/* 0c9709f4 */  JMP 0x0c97095b
/* 0c9709f9 */  MOV byte ptr [RSP + 0x88],0x1
/* 0c970a01 */  JMP 0x0c970a28
/* 0c970a10 */  MOV qword ptr [R13 + 0x8],0x0
/* 0c970a18 */  ADD R13,0xa8
/* 0c970a1f */  CMP R13,R12
/* 0c970a22 */  JZ 0x0c970b12
/* 0c970a28 */  LEA RAX,[0xf371da8]
/* 0c970a2f */  MOV qword ptr [R13],RAX
/* 0c970a33 */  MOV EAX,dword ptr [R13 + 0x90]
/* 0c970a3a */  MOV ECX,0xffffffff
/* 0c970a3f */  CMP RAX,RCX
/* 0c970a42 */  JZ 0x0c970a5a
/* 0c970a44 */  LEA RSI,[R13 + 0x80]
/* 0c970a4b */  LEA RDI,[RSP + 0x38]
/* 0c970a50 */  LEA RCX,[0xf3e84f8]
/* 0c970a57 */  CALL qword ptr [RCX + RAX*0x8]
/* 0c970a5a */  MOV dword ptr [R13 + 0x90],0xffffffff
/* 0c970a65 */  LEA RAX,[0xf36e918]
/* 0c970a6c */  MOV qword ptr [R13],RAX
/* 0c970a70 */  MOV RDI,qword ptr [R13 + 0x78]
/* 0c970a74 */  MOV qword ptr [R13 + 0x78],0x0
/* 0c970a7c */  TEST RDI,RDI
/* 0c970a7f */  JZ 0x0c970a87
/* 0c970a81 */  MOV RAX,qword ptr [RDI]
/* 0c970a84 */  CALL qword ptr [RAX + 0x8]
/* 0c970a87 */  MOV RDI,qword ptr [R13 + 0x50]
/* 0c970a8b */  TEST RDI,RDI
/* 0c970a8e */  JZ 0x0c970aa0
/* 0c970a90 */  MOV qword ptr [R13 + 0x58],RDI
/* 0c970a94 */  MOV RSI,qword ptr [R13 + 0x60]
/* 0c970a98 */  SUB RSI,RDI
/* 0c970a9b */  CALL 0x0412a280
/* 0c970aa0 */  MOV RDI,qword ptr [R13 + 0x30]
/* 0c970aa4 */  TEST RDI,RDI
/* 0c970aa7 */  JZ 0x0c970ab9
/* 0c970aa9 */  MOV qword ptr [R13 + 0x38],RDI
/* 0c970aad */  MOV RSI,qword ptr [R13 + 0x40]
/* 0c970ab1 */  SUB RSI,RDI
/* 0c970ab4 */  CALL 0x0412a280
/* 0c970ab9 */  MOV RDI,qword ptr [R13 + 0x10]
/* 0c970abd */  MOV qword ptr [R13 + 0x10],0x0
/* 0c970ac5 */  TEST RDI,RDI
/* 0c970ac8 */  JZ 0x0c970ad0
/* 0c970aca */  MOV RAX,qword ptr [RDI]
/* 0c970acd */  CALL qword ptr [RAX + 0x8]
/* 0c970ad0 */  MOV RAX,qword ptr [R13 + 0x8]
/* 0c970ad4 */  TEST RAX,RAX
/* 0c970ad7 */  JZ 0x0c970a18
/* 0c970add */  DEC.LOCK dword ptr [RAX + 0xc]
/* 0c970ae1 */  MOV ECX,dword ptr [RAX + 0xc]
/* 0c970ae4 */  TEST ECX,ECX
/* 0c970ae6 */  JG 0x0c970a10
/* 0c970aec */  CMP qword ptr [RAX],0x0
/* 0c970af0 */  JNZ 0x0c970a10
/* 0c970af6 */  MOV RDI,qword ptr [R13 + 0x8]
/* 0c970afa */  TEST RDI,RDI
/* 0c970afd */  JZ 0x0c970a10
/* 0c970b03 */  MOV ESI,0x10
/* 0c970b08 */  CALL 0x0412a280
/* 0c970b0d */  JMP 0x0c970a10
/* 0c970b12 */  TEST byte ptr [RSP + 0x88],0x1
/* 0c970b1a */  JNZ 0x0c970bb0
/* 0c970b20 */  MOV RAX,qword ptr [RSP + 0x78]
/* 0c970b25 */  MOV RCX,qword ptr [RSP + 0x80]
/* 0c970b2d */  MOV RBX,qword ptr [RCX]
/* 0c970b30 */  MOV R14,qword ptr [RAX]
/* 0c970b33 */  CMP RBX,R14
/* 0c970b36 */  JZ 0x0c970bb0
/* 0c970b38 */  ADD RBX,-0xa8
/* 0c970b3f */  JMP 0x0c970b71
/* 0c970b50 */  MOV dword ptr [RBX + 0x90],0xffffffff
/* 0c970b5a */  MOV RDI,RBX
/* 0c970b5d */  CALL 0x0c44e610
/* 0c970b62 */  LEA RAX,[RBX + -0xa8]
/* 0c970b69 */  CMP RBX,R14
/* 0c970b6c */  MOV RBX,RAX
/* 0c970b6f */  JZ 0x0c970bb0
/* 0c970b71 */  LEA RAX,[0xf371da8]
/* 0c970b78 */  MOV qword ptr [RBX],RAX
/* 0c970b7b */  MOV EAX,dword ptr [RBX + 0x90]
/* 0c970b81 */  MOV ECX,0xffffffff
/* 0c970b86 */  CMP RAX,RCX
/* 0c970b89 */  JZ 0x0c970b50
/* 0c970b8b */  LEA RSI,[RBX + 0x80]
/* 0c970b92 */  LEA RDI,[RSP + 0x38]
/* 0c970b97 */  LEA RCX,[0xf3e84f8]
/* 0c970b9e */  CALL qword ptr [RCX + RAX*0x8]
/* 0c970bf0 */  MOV AL,0x0
/* 0c970bf2 */  ADD byte ptr [RAX],AL
/* 0c970bf4 */  MOV EAX,dword ptr [RSP + 0x140]
/* 0c970bfb */  MOV ECX,0xffffffff
/* 0c970c00 */  CMP RAX,RCX
/* 0c970c03 */  JZ 0x0c970c1c
/* 0c970c05 */  LEA RDI,[RSP + 0x48]
/* 0c970c0a */  LEA RSI,[RSP + 0x130]
/* 0c970c12 */  LEA RCX,[0xf3e84f8]
/* 0c970c19 */  CALL qword ptr [RCX + RAX*0x8]
/* 0c970c1c */  MOV dword ptr [RSP + 0x140],0xffffffff
/* 0c970c27 */  LEA RAX,[0xf36e918]
/* 0c970c2e */  MOV qword ptr [RSP + 0xb0],RAX
/* 0c970c36 */  MOV RDI,qword ptr [RSP + 0x128]
/* 0c970c3e */  MOV qword ptr [RSP + 0x128],0x0
/* 0c970c4a */  TEST RDI,RDI
/* 0c970c4d */  JZ 0x0c970c55
/* 0c970c4f */  MOV RAX,qword ptr [RDI]
/* 0c970c52 */  CALL qword ptr [RAX + 0x8]
/* 0c970c55 */  MOV RDI,qword ptr [RSP + 0x100]
/* 0c970c5d */  TEST RDI,RDI
/* 0c970c60 */  JZ 0x0c970c7a
/* 0c970c62 */  MOV qword ptr [RSP + 0x108],RDI
/* 0c970c6a */  MOV RSI,qword ptr [RSP + 0x110]
/* 0c970c72 */  SUB RSI,RDI
/* 0c970c75 */  CALL 0x0412a280
/* 0c970c7a */  MOV RDI,qword ptr [RSP + 0xe0]
/* 0c970c82 */  TEST RDI,RDI
/* 0c970c85 */  JZ 0x0c970c9f
/* 0c970c87 */  MOV qword ptr [RSP + 0xe8],RDI
/* 0c970c8f */  MOV RSI,qword ptr [RSP + 0xf0]
/* 0c970c97 */  SUB RSI,RDI
/* 0c970c9a */  CALL 0x0412a280
/* 0c970c9f */  MOV RDI,qword ptr [RSP + 0xc0]
/* 0c970ca7 */  MOV qword ptr [RSP + 0xc0],0x0
/* 0c970cb3 */  TEST RDI,RDI
/* 0c970cb6 */  JZ 0x0c970cbe
/* 0c970cb8 */  MOV RAX,qword ptr [RDI]
/* 0c970cbb */  CALL qword ptr [RAX + 0x8]
/* 0c970cbe */  MOV RAX,qword ptr [RSP + 0xb8]
/* 0c970cc6 */  TEST RAX,RAX
/* 0c970cc9 */  JZ 0x0c970430
/* 0c970ccf */  DEC.LOCK dword ptr [RAX + 0xc]
/* 0c970cd3 */  MOV ECX,dword ptr [RAX + 0xc]
/* 0c970cd6 */  TEST ECX,ECX
/* 0c970cd8 */  JG 0x0c970430
/* 0c970cde */  CMP qword ptr [RAX],0x0
/* 0c970ce2 */  JNZ 0x0c970430
/* 0c970ce8 */  MOV RDI,qword ptr [RSP + 0xb8]
/* 0c970cf0 */  TEST RDI,RDI
/* 0c970cf3 */  JZ 0x0c970430
/* 0c970cf9 */  MOV ESI,0x10
/* 0c970cfe */  CALL 0x0412a280
/* 0c970d03 */  JMP 0x0c970430
/* 0c970d08 */  CALL 0x0c9a59a0
/* 0c970d0d */  CALL 0x04882eb0
/* 0c970d12 */  JMP 0x0c970e4f
/* 0c970e4f */  MOV RBX,RAX
/* 0c970e52 */  LEA RDI,[RSP + 0x90]
/* 0c970e5a */  CALL 0x05340180
/* 0c970e5f */  MOV RDI,RBX
/* 0c970e62 */  CALL 0x0eee2d70
/* 0c970e67 */  INT3
