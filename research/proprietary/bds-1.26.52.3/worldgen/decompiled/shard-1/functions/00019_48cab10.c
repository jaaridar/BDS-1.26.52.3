/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x48cab10
 * Label: br::worldgen::WorldGenRandom::vslot13
 * Body:  [[0412a280, 0412a284] [048cab10, 048cab6e] [048cab70, 048cabb2] [048cabc0, 048cabdf]]
 * Ghidra: wg_br__worldgen__WorldGenRandom__vslot13
 */


/* WARNING: Possible PIC construction at 0x048cab7f: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_br__worldgen__WorldGenRandom__vslot13(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 in_RAX;
  long lVar6;
  long lVar7;
  code *pcStack_30;
  
  if ((char)param_1[6] == '\x01') {
    plVar1 = (long *)param_1[5];
    param_1[5] = 0;
    if (plVar1 != (long *)0x0) {
      pcStack_30 = (code *)0x48cab3d;
      in_RAX = (**(code **)(*plVar1 + 8))();
    }
    puVar5 = (undefined8 *)param_1[2];
    while (puVar5 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar5;
      lVar3 = puVar5[3];
      if (lVar3 != 0) {
        lVar7 = puVar5[4];
        lVar6 = lVar3;
        if (lVar3 != lVar7) {
          do {
            plVar1 = *(long **)(lVar7 + -8);
            *(undefined8 *)(lVar7 + -8) = 0;
            if (plVar1 != (long *)0x0) {
              pcStack_30 = wg_br__worldgen__WorldGenRandom__vslot17;
              in_RAX = (**(code **)(*plVar1 + 8))();
            }
            lVar7 = lVar7 + -8;
          } while (lVar7 != lVar3);
          lVar6 = puVar5[3];
        }
        puVar5[4] = lVar3;
        register0x00000020 = (BADSPACEBASE *)&pcStack_30;
        pcStack_30 = (code *)0x48cab84;
        goto SUB_0412a280;
      }
      pcStack_30 = (code *)0x48cab91;
      in_RAX = func_0x0412a280(puVar5,0x30);
      puVar5 = puVar2;
    }
    lVar6 = *param_1;
    *param_1 = 0;
    if (lVar6 != 0) {
SUB_0412a280:
      *(undefined8 *)((long)register0x00000020 + -8) = in_RAX;
      if (lVar6 != 0) {
        pcVar4 = *(code **)(_DAT_0f5463b0 + 0x18);
        *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
        (*pcVar4)(&DAT_0f5463b0,lVar6);
      }
      return *(undefined8 *)((long)register0x00000020 + -8);
    }
  }
  return in_RAX;
}



/* ---- assembly ---- */
/* 0412a280 */  JMP 0x0ee326a0
/* 048cab10 */  PUSH R15
/* 048cab12 */  PUSH R14
/* 048cab14 */  PUSH R13
/* 048cab16 */  PUSH R12
/* 048cab18 */  PUSH RBX
/* 048cab19 */  CMP byte ptr [RDI + 0x30],0x1
/* 048cab1d */  JNZ 0x048cabe2
/* 048cab23 */  MOV RBX,RDI
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
