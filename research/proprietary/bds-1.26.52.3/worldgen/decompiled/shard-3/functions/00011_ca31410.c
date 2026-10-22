/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcb31410 (ELF vaddr 0xca31410)
 * Label: WorldGenerator::vslot8
 * Body:  [[0cb31410, 0cb314c1]]
 * Ghidra: wg_WorldGenerator__vslot8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * wg_WorldGenerator__vslot8
                 (long *param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                 undefined1 param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  long lStack_20;
  
  plVar1 = *(long **)(param_2 + 0x30);
  if (plVar1 == (long *)0x0) {
    if ((int)param_4 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      puVar2 = (undefined8 *)0x0;
      func_0x0cad8990(&lStack_20,*(undefined8 *)(param_2 + 0x28),*param_3,param_5,0,0);
      *param_1 = lStack_20;
      if (lStack_20 != 0) {
        puVar2 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (puVar2 == (undefined8 *)0x0) {
          FUN_0eec74c0(0x20,0);
        }
        puVar2[1] = 0;
        puVar2[2] = 0;
        *puVar2 = &UNK_0f1f9808;
        puVar2[3] = lStack_20;
      }
      param_1[1] = (long)puVar2;
    }
  }
  else {
    (**(code **)(*plVar1 + 0x40))(param_1,plVar1,param_3,param_4,param_5);
  }
  return param_1;
}



/* ---- assembly ---- */
/* 0cb31410 */  PUSH R15
/* 0cb31412 */  PUSH R14
/* 0cb31414 */  PUSH RBX
/* 0cb31415 */  SUB RSP,0x10
/* 0cb31419 */  MOV RBX,RDI
/* 0cb3141c */  MOV RAX,qword ptr [RSI + 0x30]
/* 0cb31420 */  TEST RAX,RAX
/* 0cb31423 */  JZ 0x0cb31438
/* 0cb31425 */  MOV R9,qword ptr [RAX]
/* 0cb31428 */  MOVZX R8D,R8B
/* 0cb3142c */  MOV RDI,RBX
/* 0cb3142f */  MOV RSI,RAX
/* 0cb31432 */  CALL qword ptr [R9 + 0x40]
/* 0cb31436 */  JMP 0x0cb314a7
/* 0cb31438 */  TEST ECX,ECX
/* 0cb3143a */  JZ 0x0cb314a1
/* 0cb3143c */  MOV RSI,qword ptr [RSI + 0x28]
/* 0cb31440 */  MOV RDX,qword ptr [RDX]
/* 0cb31443 */  MOVZX ECX,R8B
/* 0cb31447 */  LEA RDI,[RSP + 0x8]
/* 0cb3144c */  XOR R14D,R14D
/* 0cb3144f */  XOR R8D,R8D
/* 0cb31452 */  XOR R9D,R9D
/* 0cb31455 */  CALL 0x0cad8990
/* 0cb3145a */  MOV R15,qword ptr [RSP + 0x8]
/* 0cb3145f */  MOV qword ptr [RBX],R15
/* 0cb31462 */  TEST R15,R15
/* 0cb31465 */  JZ 0x0cb3149b
/* 0cb31467 */  LEA RDI,[0xf5463b0]
/* 0cb3146e */  MOV RAX,qword ptr [0x0f5463b0]
/* 0cb31475 */  MOV ESI,0x20
/* 0cb3147a */  CALL qword ptr [RAX + 0x10]
/* 0cb3147d */  MOV R14,RAX
/* 0cb31480 */  TEST RAX,RAX
/* 0cb31483 */  JZ 0x0cb314b4
/* 0cb31485 */  XORPS XMM0,XMM0
/* 0cb31488 */  MOVUPS xmmword ptr [R14 + 0x8],XMM0
/* 0cb3148d */  LEA RAX,[0xf1f9808]
/* 0cb31494 */  MOV qword ptr [R14],RAX
/* 0cb31497 */  MOV qword ptr [R14 + 0x18],R15
/* 0cb3149b */  MOV qword ptr [RBX + 0x8],R14
/* 0cb3149f */  JMP 0x0cb314a7
/* 0cb314a1 */  XORPS XMM0,XMM0
/* 0cb314a4 */  MOVUPS xmmword ptr [RBX],XMM0
/* 0cb314a7 */  MOV RAX,RBX
/* 0cb314aa */  ADD RSP,0x10
/* 0cb314ae */  POP RBX
/* 0cb314af */  POP R14
/* 0cb314b1 */  POP R15
/* 0cb314b3 */  RET
/* 0cb314b4 */  MOV EDI,0x20
/* 0cb314b9 */  XOR ESI,ESI
/* 0cb314bb */  CALL 0x0eec74c0
/* 0cb314c0 */  JMP 0x0cb31485
