/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x48cab20
 * Label: br::worldgen::WorldGenRandom::vslot14
 * Body:  [[048cab20, 048cab6e] [048cab70, 048cabb2] [048cabc0, 048cabeb]]
 * Ghidra: wg_br__worldgen__WorldGenRandom__vslot14
 */


/* WARNING: Possible PIC construction at 0x048cab7f: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * wg_br__worldgen__WorldGenRandom__vslot14
                 (long param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  char *in_RAX;
  long *unaff_RBX;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_8;
  
  *in_RAX = *in_RAX + (char)in_RAX;
  in_RAX[-0x77] = in_RAX[-0x77] + param_4;
  plVar1 = *(long **)(param_1 + 0x28);
  unaff_RBX[5] = 0;
  if (plVar1 != (long *)0x0) {
    uStack_8 = 0x48cab3d;
    in_RAX = (char *)(**(code **)(*plVar1 + 8))();
  }
  puVar5 = (undefined8 *)unaff_RBX[2];
  do {
    if (puVar5 == (undefined8 *)0x0) {
      lVar7 = *unaff_RBX;
      *unaff_RBX = 0;
      if (lVar7 == 0) {
        return in_RAX;
      }
      puVar6 = (undefined8 *)&stack0x00000028;
SUB_0412a280:
      *(char **)((long)puVar6 + -8) = in_RAX;
      if (lVar7 != 0) {
        pcVar4 = *(code **)(_DAT_0f5463b0 + 0x18);
        *(undefined8 *)((long)puVar6 + -0x10) = 0xee326ba;
        (*pcVar4)(&DAT_0f5463b0,lVar7);
      }
      return *(char **)((long)puVar6 + -8);
    }
    puVar2 = (undefined8 *)*puVar5;
    lVar3 = puVar5[3];
    if (lVar3 != 0) {
      lVar8 = puVar5[4];
      lVar7 = lVar3;
      if (lVar3 != lVar8) {
        do {
          plVar1 = *(long **)(lVar8 + -8);
          *(undefined8 *)(lVar8 + -8) = 0;
          if (plVar1 != (long *)0x0) {
            uStack_8 = 0x48cabe0;
            in_RAX = (char *)(**(code **)(*plVar1 + 8))();
          }
          lVar8 = lVar8 + -8;
        } while (lVar8 != lVar3);
        lVar7 = puVar5[3];
      }
      puVar5[4] = lVar3;
      puVar6 = &uStack_8;
      uStack_8 = 0x48cab84;
      goto SUB_0412a280;
    }
    uStack_8 = 0x48cab91;
    in_RAX = (char *)func_0x0412a280(puVar5,0x30);
    puVar5 = puVar2;
  } while( true );
}



/* ---- assembly ---- */
/* 048cab20 */  ADD byte ptr [RAX],AL
/* 048cab22 */  ADD byte ptr [RAX + -0x77],CL
/* 048cab25 */  STI
/* 048cab26 */  MOV RDI,qword ptr [RDI + 0x28]
/* 048cab2a */  MOV qword ptr [RBX + 0x28],0x0
/* 048cab32 */  TEST RDI,RDI
/* 048cab35 */  JZ 0x048cab3d
/* 048cab37 */  MOV RAX,qword ptr [RDI]
/* 048cab3a */  CALL qword ptr [RAX + 0x8]
/* 048cab3d */  MOV R14,qword ptr [RBX + 0x10]
/* 048cab41 */  TEST R14,R14
/* 048cab44 */  JNZ 0x048cab99
/* 048cab46 */  MOV RDI,qword ptr [RBX]
/* 048cab49 */  MOV qword ptr [RBX],0x0
/* 048cab50 */  TEST RDI,RDI
/* 048cab53 */  JZ 0x048cabe2
/* 048cab59 */  MOV RSI,qword ptr [RBX + 0x8]
/* 048cab5d */  SHL RSI,0x3
/* 048cab61 */  POP RBX
/* 048cab62 */  POP R12
/* 048cab64 */  POP R13
/* 048cab66 */  POP R14
/* 048cab68 */  POP R15
/* 048cab6a */  JMP 0x0412a280
/* 048cab70 */  MOV RDI,qword ptr [R14 + 0x18]
/* 048cab74 */  MOV qword ptr [R14 + 0x20],R12
/* 048cab78 */  MOV RSI,qword ptr [R14 + 0x28]
/* 048cab7c */  SUB RSI,RDI
/* 048cab7f */  CALL 0x0412a280
/* 048cab84 */  MOV ESI,0x30
/* 048cab89 */  MOV RDI,R14
/* 048cab8c */  CALL 0x0412a280
/* 048cab91 */  MOV R14,R15
/* 048cab94 */  TEST R15,R15
/* 048cab97 */  JZ 0x048cab46
/* 048cab99 */  MOV R15,qword ptr [R14]
/* 048cab9c */  MOV R12,qword ptr [R14 + 0x18]
/* 048caba0 */  TEST R12,R12
/* 048caba3 */  JZ 0x048cab84
/* 048caba5 */  MOV R13,qword ptr [R14 + 0x20]
/* 048caba9 */  MOV RDI,R12
/* 048cabac */  CMP R12,R13
/* 048cabaf */  JNZ 0x048cabc9
/* 048cabb1 */  JMP 0x048cab74
/* 048cabc0 */  ADD R13,-0x8
/* 048cabc4 */  CMP R13,R12
/* 048cabc7 */  JZ 0x048cab70
/* 048cabc9 */  MOV RDI,qword ptr [R13 + -0x8]
/* 048cabcd */  MOV qword ptr [R13 + -0x8],0x0
/* 048cabd5 */  TEST RDI,RDI
/* 048cabd8 */  JZ 0x048cabc0
/* 048cabda */  MOV RAX,qword ptr [RDI]
/* 048cabdd */  CALL qword ptr [RAX + 0x8]
/* 048cabe0 */  JMP 0x048cabc0
/* 048cabe2 */  POP RBX
/* 048cabe3 */  POP R12
/* 048cabe5 */  POP R13
/* 048cabe7 */  POP R14
/* 048cabe9 */  POP R15
/* 048cabeb */  RET
