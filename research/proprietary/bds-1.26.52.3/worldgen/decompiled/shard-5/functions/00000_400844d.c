/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x410844d (ELF vaddr 0x400844d)
 * Label: callee-of:0x517ab30
 * Body:  [[0410844d, 04108563]]
 * Ghidra: FUN_0410844d
 */


void FUN_0410844d(undefined1 *param_1)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  *param_1 = 1;
  iVar3 = func_0x0eee2d30(0xf546fb8);
  if (iVar3 == 0) {
    bVar1 = param_1[1];
    param_1[1] = 1;
    iVar3 = pthread_mutex_unlock(0xf546fb8);
    if (iVar3 == 0) {
      if ((bVar1 & 4) == 0) {
        return;
      }
      iVar3 = func_0x0eee2d80(0xf546f88);
      if (iVar3 == 0) {
        return;
      }
    }
    else {
      func_0x041085a0(&UNK_011b4e86,&UNK_01287bcb);
    }
    puVar6 = &UNK_014756f7;
  }
  else {
    puVar6 = &UNK_01239448;
  }
  lVar4 = func_0x041085a0(puVar6,&UNK_01287bcb);
  func_0x04882e20();
  iVar3 = func_0x0eee2d30(0xf546fb8);
  if (iVar3 == 0) {
    *(undefined4 *)(lVar4 + 4) = 0;
    bVar1 = *(byte *)(lVar4 + 1);
    *(undefined1 *)(lVar4 + 1) = 0;
    iVar3 = pthread_mutex_unlock(0xf546fb8);
    if (iVar3 == 0) {
      if ((bVar1 & 4) == 0) {
        return;
      }
      iVar3 = func_0x0eee2d80(0xf546f88);
      if (iVar3 == 0) {
        return;
      }
    }
    else {
      func_0x041085a0(&UNK_011b4e86,&UNK_013a8ef1);
    }
    puVar6 = &UNK_014756f7;
  }
  else {
    puVar6 = &UNK_01239448;
  }
  uVar5 = func_0x041085a0(puVar6,&UNK_013a8ef1);
  func_0x04882e20(uVar5);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



/* ---- assembly ---- */
/* 0410844d */  PUSH RBP
/* 0410844e */  PUSH RBX
/* 0410844f */  PUSH RAX
/* 04108450 */  MOV RBX,RDI
/* 04108453 */  MOV byte ptr [RDI],0x1
/* 04108456 */  LEA RDI,[0xf546fb8]
/* 0410845d */  CALL 0x0eee2d30
/* 04108462 */  TEST EAX,EAX
/* 04108464 */  JNZ 0x0410849b
/* 04108466 */  MOV BPL,byte ptr [RBX + 0x1]
/* 0410846a */  MOV byte ptr [RBX + 0x1],0x1
/* 0410846e */  LEA RDI,[0xf546fb8]
/* 04108475 */  CALL 0x0eee2d60
/* 0410847a */  TEST EAX,EAX
/* 0410847c */  JNZ 0x041084a4
/* 0410847e */  TEST BPL,0x4
/* 04108482 */  JZ 0x04108494
/* 04108484 */  LEA RDI,[0xf546f88]
/* 0410848b */  CALL 0x0eee2d80
/* 04108490 */  TEST EAX,EAX
/* 04108492 */  JNZ 0x041084b9
/* 04108494 */  ADD RSP,0x8
/* 04108498 */  POP RBX
/* 04108499 */  POP RBP
/* 0410849a */  RET
/* 0410849b */  LEA RDI,[0x1239448]
/* 041084a2 */  JMP 0x041084c0
/* 041084a4 */  LEA RDI,[0x11b4e86]
/* 041084ab */  LEA RSI,[0x1287bcb]
/* 041084b2 */  XOR EAX,EAX
/* 041084b4 */  CALL 0x041085a0
/* 041084b9 */  LEA RDI,[0x14756f7]
/* 041084c0 */  LEA RSI,[0x1287bcb]
/* 041084c7 */  XOR EAX,EAX
/* 041084c9 */  CALL 0x041085a0
/* 041084ce */  MOV RDI,RAX
/* 041084d1 */  CALL 0x04882e20
/* 041084d6 */  PUSH RBP
/* 041084d7 */  PUSH RBX
/* 041084d8 */  PUSH RAX
/* 041084d9 */  MOV RBX,RDI
/* 041084dc */  LEA RDI,[0xf546fb8]
/* 041084e3 */  CALL 0x0eee2d30
/* 041084e8 */  TEST EAX,EAX
/* 041084ea */  JNZ 0x04108528
/* 041084ec */  MOV dword ptr [RBX + 0x4],0x0
/* 041084f3 */  MOV BPL,byte ptr [RBX + 0x1]
/* 041084f7 */  MOV byte ptr [RBX + 0x1],0x0
/* 041084fb */  LEA RDI,[0xf546fb8]
/* 04108502 */  CALL 0x0eee2d60
/* 04108507 */  TEST EAX,EAX
/* 04108509 */  JNZ 0x04108531
/* 0410850b */  TEST BPL,0x4
/* 0410850f */  JZ 0x04108521
/* 04108511 */  LEA RDI,[0xf546f88]
/* 04108518 */  CALL 0x0eee2d80
/* 0410851d */  TEST EAX,EAX
/* 0410851f */  JNZ 0x04108546
/* 04108521 */  ADD RSP,0x8
/* 04108525 */  POP RBX
/* 04108526 */  POP RBP
/* 04108527 */  RET
/* 04108528 */  LEA RDI,[0x1239448]
/* 0410852f */  JMP 0x0410854d
/* 04108531 */  LEA RDI,[0x11b4e86]
/* 04108538 */  LEA RSI,[0x13a8ef1]
/* 0410853f */  XOR EAX,EAX
/* 04108541 */  CALL 0x041085a0
/* 04108546 */  LEA RDI,[0x14756f7]
/* 0410854d */  LEA RSI,[0x13a8ef1]
/* 04108554 */  XOR EAX,EAX
/* 04108556 */  CALL 0x041085a0
/* 0410855b */  MOV RDI,RAX
/* 0410855e */  CALL 0x04882e20
/* 04108563 */  INT3
