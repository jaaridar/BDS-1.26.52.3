/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc970bd0
 * Label: WorldGenerator::vslot42
 * Body:  [[0c970331, 0c97045f] [0c970bd0, 0c970d16] [0c970e4f, 0c970e67]]
 * Ghidra: wg_WorldGenerator__vslot42
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_WorldGenerator__vslot42(long param_1,long param_2)

{
  undefined4 uVar1;
  long *plVar2;
  code *pcVar3;
  ulong uVar4;
  char cVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  undefined8 *puVar12;
  short *psVar13;
  undefined8 *puVar14;
  short *psVar15;
  short *psVar16;
  undefined8 *puVar17;
  undefined8 *unaff_RBP;
  short *psVar18;
  uint uVar19;
  short *psVar20;
  ulong uVar21;
  undefined8 *puVar22;
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
  
code_r0x0c970bd0:
  if (param_1 != 0) {
    func_0x0412a280(param_1,param_2 - param_1);
  }
  do {
    unaff_retaddr[1] = (long)unaff_RBP;
    in_stack_000000b0 = &UNK_0f371da8;
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
    lVar11 = in_stack_00000010;
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
      in_stack_00000010 = lVar11;
      lVar11 = in_stack_00000010 + 0x98;
      if (lVar11 == in_stack_00000158) {
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
        puVar17 = in_stack_00000090;
        puVar8 = in_stack_00000098;
        if (in_stack_00000090 != (undefined8 *)0x0) {
          while (puVar17 != puVar8) {
            puVar8 = puVar8 + -0x13;
            (**(code **)*puVar8)(puVar8);
          }
          in_stack_00000098 = puVar17;
          func_0x0412a280(in_stack_00000090,in_stack_000000a0 - (long)in_stack_00000090);
        }
        return;
      }
      uVar9 = *in_stack_00000028;
      uVar1 = *(undefined4 *)(in_stack_00000028 + 1);
      psVar16 = (short *)*unaff_retaddr;
      psVar15 = (short *)unaff_retaddr[1];
      uVar6 = 0xff;
      psVar13 = psVar16;
      psVar20 = psVar15;
      if ((*(long **)(in_stack_00000010 + 0xa0) != (long *)0x0) &&
         (plVar2 = (long *)**(long **)(in_stack_00000010 + 0xa0), plVar2 != (long *)0x0)) {
        func_0x0c455e60(&stack0x000000b0,lVar11);
        uVar6 = (**(code **)(*plVar2 + 0x328))(plVar2,&stack0x000000b0);
        plVar2 = in_stack_000000b8;
        in_stack_000000b0 = &UNK_0f3773c0;
        in_stack_000000b8 = (long *)0x0;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x90))();
        }
        uVar6 = uVar6 & 0xff;
        psVar13 = (short *)*unaff_retaddr;
        psVar20 = (short *)unaff_retaddr[1];
      }
      iVar10 = (int)((ulong)((long)psVar15 - (long)psVar16) >> 3) * 0x3cf3cf3d;
      uVar19 = ((uint)((ulong)((long)iVar10 * 0x66666667) >> 0x22) - (iVar10 >> 0x1f)) * 0x10 + 0x10
      ;
      if ((int)uVar6 <= (int)uVar19) {
        uVar19 = uVar6;
      }
      uVar6 = (uint)*(byte *)(in_stack_00000010 + 0xba);
      if (psVar13 != psVar20) {
        psVar16 = psVar13 + 0x10;
        do {
          psVar15 = psVar16 + -0x10;
          cVar5 = func_0x0c459d50(psVar15,lVar11);
          if (cVar5 != '\0') {
            if (((*(long **)(psVar16 + -0xc) != (long *)0x0) &&
                (plVar2 = (long *)**(long **)(psVar16 + -0xc), plVar2 != (long *)0x0)) &&
               (cVar5 = (**(code **)(*plVar2 + 0x120))(), cVar5 != '\0')) {
              psVar13 = (short *)(*(long *)(psVar16 + -4) + 0x128);
              if (*psVar16 == 0x7fff) {
                psVar13 = psVar16;
              }
              if (*(long *)(psVar16 + -4) == 0) {
                psVar13 = psVar16;
              }
              psVar18 = (short *)(*(long *)(in_stack_00000010 + 0xb0) + 0x128);
              if (*(short *)(in_stack_00000010 + 0xb8) == 0x7fff) {
                psVar18 = (short *)(in_stack_00000010 + 0xb8);
              }
              if (*(long *)(in_stack_00000010 + 0xb0) == 0) {
                psVar18 = (short *)(in_stack_00000010 + 0xb8);
              }
              if (*psVar13 != *psVar18) goto LAB_0c970563;
            }
            iVar10 = uVar6 + *(byte *)(psVar16 + 1);
            uVar6 = iVar10 - uVar19;
            if (uVar6 == 0 || iVar10 < (int)uVar19) {
              func_0x0c4564a0(psVar15,iVar10);
              goto LAB_0c970430;
            }
            func_0x0c4564a0(psVar15,uVar19);
          }
LAB_0c970563:
          psVar15 = psVar16 + 0x44;
          psVar16 = psVar16 + 0x54;
        } while (psVar15 != psVar20);
      }
    } while ((int)uVar6 < 1);
    func_0x0c4510a0(&stack0x000000b0,lVar11);
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
    func_0x0c4564a0(&stack0x000000b0,uVar6);
    puVar8 = (undefined8 *)unaff_retaddr[1];
    in_stack_00000010 = lVar11;
    if ((undefined8 *)unaff_retaddr[2] <= puVar8) break;
    func_0x0c4510a0(puVar8,&stack0x000000b0);
    *puVar8 = &UNK_0f371da8;
    *(undefined4 *)(puVar8 + 0x10) = 0;
    *(undefined4 *)(puVar8 + 0x12) = 0;
    if ((ulong)in_stack_00000140 == 0xffffffff) {
      *(undefined4 *)(puVar8 + 0x12) = 0xffffffff;
    }
    else {
      in_stack_00000048 = puVar8 + 0x10;
      (**(code **)(&UNK_0f38c5a0 + (ulong)in_stack_00000140 * 8))
                (&stack0x00000048,in_stack_00000048,&stack0x00000130);
    }
    puVar8[0x13] = uVar9;
    *(undefined4 *)(puVar8 + 0x14) = uVar1;
    unaff_RBP = puVar8 + 0x15;
    unaff_retaddr[1] = (long)unaff_RBP;
  } while( true );
  lVar11 = (long)puVar8 - *unaff_retaddr;
  uVar21 = (lVar11 >> 3) * -0x30c30c30c30c30c3 + 1;
  if (0x186186186186186 < uVar21) {
    func_0x0c9a59a0();
LAB_0c970d0d:
    uVar9 = func_0x04882eb0();
    func_0x05340180(&stack0x00000090);
    func_0x0eee2d70(uVar9);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar7 = unaff_retaddr[2] - *unaff_retaddr >> 3;
  uVar4 = lVar7 * -0x6186186186186186;
  if (uVar21 < uVar4) {
    uVar21 = uVar4;
  }
  if (0xc30c30c30c30c2 < (ulong)(lVar7 * -0x30c30c30c30c30c3)) {
    uVar21 = 0x186186186186186;
  }
  in_stack_00000068 = unaff_retaddr;
  if (uVar21 == 0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    if (0x186186186186186 < uVar21) goto LAB_0c970d0d;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar21 * 0xa8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(uVar21 * 0xa8,0);
      puVar8 = (undefined8 *)0x0;
    }
  }
  puVar17 = (undefined8 *)(lVar11 + (long)puVar8);
  in_stack_00000060 = puVar8 + uVar21 * 0x15;
  in_stack_00000048 = puVar8;
  in_stack_00000050 = puVar17;
  in_stack_00000058 = puVar17;
  func_0x0c4510a0(puVar17,&stack0x000000b0);
  *puVar17 = &UNK_0f371da8;
  *(undefined4 *)(puVar17 + 0x10) = 0;
  *(undefined4 *)(puVar17 + 0x12) = 0;
  if ((ulong)in_stack_00000140 == 0xffffffff) {
    *(undefined4 *)(puVar17 + 0x12) = 0xffffffff;
  }
  else {
    in_stack_00000070 = puVar17 + 0x10;
    (**(code **)(&UNK_0f38c5a0 + (ulong)in_stack_00000140 * 8))
              (&stack0x00000070,in_stack_00000070,&stack0x00000130);
  }
  puVar17[0x13] = uVar9;
  *(undefined4 *)(puVar17 + 0x14) = uVar1;
  unaff_RBP = in_stack_00000058 + 0x15;
  puVar8 = (undefined8 *)*unaff_retaddr;
  puVar17 = (undefined8 *)unaff_retaddr[1];
  puVar12 = (undefined8 *)(((long)puVar8 - (long)puVar17) + (long)in_stack_00000050);
  in_stack_00000078 = &stack0x00000160;
  in_stack_00000080 = &stack0x00000030;
  in_stack_00000088 = 0;
  puVar14 = puVar8;
  puVar22 = puVar12;
  in_stack_00000030 = puVar12;
  in_stack_00000058 = unaff_RBP;
  in_stack_00000070 = unaff_retaddr;
  in_stack_00000160 = puVar12;
  if (puVar8 != puVar17) {
    do {
      in_stack_00000030 = puVar22;
      func_0x0c4510a0(puVar22,puVar14);
      *puVar22 = &UNK_0f371da8;
      *(undefined4 *)(puVar22 + 0x10) = 0;
      *(undefined4 *)(puVar22 + 0x12) = 0;
      if ((ulong)*(uint *)(puVar14 + 0x12) == 0xffffffff) {
        *(undefined4 *)(puVar22 + 0x12) = 0xffffffff;
      }
      else {
        in_stack_00000038 = puVar22 + 0x10;
        (**(code **)(&UNK_0f38c5a0 + (ulong)*(uint *)(puVar14 + 0x12) * 8))
                  (&stack0x00000038,in_stack_00000038,puVar14 + 0x10);
      }
      *(undefined4 *)(puVar22 + 0x14) = *(undefined4 *)(puVar14 + 0x14);
      puVar22[0x13] = puVar14[0x13];
      puVar14 = puVar14 + 0x15;
      in_stack_00000030 = in_stack_00000030 + 0x15;
      puVar22 = in_stack_00000030;
    } while (puVar14 != puVar17);
    in_stack_00000088 = 1;
    do {
      *puVar8 = &UNK_0f371da8;
      if ((ulong)*(uint *)(puVar8 + 0x12) != 0xffffffff) {
        (**(code **)(&UNK_0f3e84f8 + (ulong)*(uint *)(puVar8 + 0x12) * 8))
                  (&stack0x00000038,puVar8 + 0x10);
      }
      *(undefined4 *)(puVar8 + 0x12) = 0xffffffff;
      *puVar8 = &UNK_0f36e918;
      plVar2 = (long *)puVar8[0xf];
      puVar8[0xf] = 0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      lVar11 = puVar8[10];
      if (lVar11 != 0) {
        puVar8[0xb] = lVar11;
        func_0x0412a280(lVar11,puVar8[0xc] - lVar11);
      }
      lVar11 = puVar8[6];
      if (lVar11 != 0) {
        puVar8[7] = lVar11;
        func_0x0412a280(lVar11,puVar8[8] - lVar11);
      }
      plVar2 = (long *)puVar8[2];
      puVar8[2] = 0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      plVar2 = (long *)puVar8[1];
      if (plVar2 != (long *)0x0) {
        LOCK();
        *(int *)((long)plVar2 + 0xc) = *(int *)((long)plVar2 + 0xc) + -1;
        UNLOCK();
        if (((*(int *)((long)plVar2 + 0xc) < 1) && (*plVar2 == 0)) && (puVar8[1] != 0)) {
          func_0x0412a280(puVar8[1],0x10);
        }
        puVar8[1] = 0;
      }
      puVar8 = puVar8 + 0x15;
    } while (puVar8 != puVar17);
    if ((in_stack_00000088 & 1) == 0) {
      puVar8 = (undefined8 *)*in_stack_00000078;
      puVar17 = (undefined8 *)*in_stack_00000080;
      while (puVar17 != puVar8) {
        puVar14 = puVar17 + -0x15;
        *puVar14 = &UNK_0f371da8;
        if ((ulong)*(uint *)(puVar17 + -3) != 0xffffffff) {
          (**(code **)(&UNK_0f3e84f8 + (ulong)*(uint *)(puVar17 + -3) * 8))
                    (&stack0x00000038,puVar17 + -5);
        }
        *(undefined4 *)(puVar17 + -3) = 0xffffffff;
        func_0x0c44e610(puVar14);
        puVar17 = puVar14;
      }
    }
  }
  param_1 = *unaff_retaddr;
  param_2 = unaff_retaddr[2];
  *unaff_retaddr = (long)puVar12;
  unaff_retaddr[1] = (long)unaff_RBP;
  unaff_retaddr[2] = (long)in_stack_00000060;
  goto code_r0x0c970bd0;
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
/* 0c970bd0 */  TEST RDI,RDI
/* 0c970bd3 */  JZ 0x0c970bdd
/* 0c970bd5 */  SUB RSI,RDI
/* 0c970bd8 */  CALL 0x0412a280
/* 0c970bdd */  MOV RAX,qword ptr [RSP]
/* 0c970be1 */  MOV qword ptr [RAX + 0x8],RBP
/* 0c970be5 */  LEA RAX,[0xf371da8]
/* 0c970bec */  MOV qword ptr [RSP + 0xb0],RAX
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
