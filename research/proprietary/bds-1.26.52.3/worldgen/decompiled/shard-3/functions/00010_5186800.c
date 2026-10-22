/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5286800 (ELF vaddr 0x5186800)
 * Label: OverworldGeneratorMultinoise::vslot0
 * Body:  [[0412c2d0, 0412c2f1] [05286800, 05286925] [0ca70460, 0ca7051c] [0cb3ae10, 0cb3af61]]
 * Ghidra: wg_OverworldGeneratorMultinoise__vslot0
 */


/* WARNING: Possible PIC construction at 0x0cb3ae75: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0cb3aed9: Changing call to branch */

void wg_OverworldGeneratorMultinoise__vslot0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  lVar2 = param_1[0x195];
  param_1[0x195] = 0;
  if (lVar2 != 0) {
    func_0x049db610(lVar2);
    func_0x0412a280(lVar2,0xd0);
  }
  plVar6 = (long *)param_1[0x194];
  param_1[0x194] = 0;
  if (plVar6 != (long *)0x0) {
    lVar2 = *plVar6;
    if (lVar2 != 0) {
      plVar6[1] = lVar2;
      func_0x0412a280(lVar2,plVar6[2] - lVar2);
    }
    func_0x0412a280(plVar6,0x28);
  }
  lVar2 = param_1[0x193];
  param_1[0x193] = 0;
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 8);
    if (lVar3 != 0) {
      *(long *)(lVar2 + 0x10) = lVar3;
      func_0x0412a280(lVar3,*(long *)(lVar2 + 0x18) - lVar3);
    }
    func_0x0412a280(lVar2,0x28);
  }
  lVar2 = param_1[0x192];
  param_1[0x192] = 0;
  if (lVar2 != 0) {
    func_0x0412a280(lVar2,0x10);
  }
  plVar6 = (long *)param_1[0x191];
  param_1[0x191] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  func_0x05286720(param_1 + 0x3e);
  *param_1 = &UNK_0ef9d2a0;
  param_1[0xe] = &UNK_0ef9d4b8;
  FUN_0527a590(param_1 + 0x28);
  *param_1 = &UNK_0f3ed048;
  param_1[0xe] = &UNK_0f3ed220;
  func_0x0eee11d0(param_1 + 0x21);
  puVar5 = (undefined8 *)param_1[0x1e];
  while (puVar5 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)*puVar5;
    func_0x0412a280(puVar5,0x18);
    puVar5 = puVar4;
  }
  lVar2 = param_1[0x1c];
  param_1[0x1c] = 0;
  if (lVar2 != 0) {
    func_0x0412a280(lVar2,param_1[0x1d] << 3);
  }
  func_0x04136a00(param_1 + 0x15);
  lVar2 = param_1[0xf];
  param_1[0xf] = 0;
  if (lVar2 != 0) {
    FUN_0d352b40(lVar2);
    func_0x0412a280(lVar2,0x1c8);
  }
  *param_1 = &UNK_0f3f0e90;
  if (param_1[0xd] != 0) {
    plVar6 = (long *)func_0x0412c300();
    if (plVar6 != (long *)0x0) {
      if (param_1[0xc] != 0) {
        (**(code **)(**(long **)(param_1[0xc] + 0x28) + 0x10))();
      }
      LOCK();
      plVar1 = plVar6 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        goto SUB_0412c2d0;
      }
    }
    if (param_1[0xd] != 0) {
      func_0x0412c2d0();
    }
  }
  if (param_1[0xb] != 0) {
    plVar6 = (long *)func_0x0412c300();
    if (plVar6 != (long *)0x0) {
      if (param_1[10] != 0) {
        (**(code **)(**(long **)(param_1[10] + 0x28) + 0x10))();
      }
      LOCK();
      plVar1 = plVar6 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        goto SUB_0412c2d0;
      }
    }
    if (param_1[0xb] != 0) {
      func_0x0412c2d0();
    }
  }
  plVar6 = (long *)param_1[7];
  param_1[7] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  *param_1 = &UNK_0f534768;
  plVar6 = (long *)param_1[2];
  if (plVar6 == (long *)0x0) {
    *(undefined1 *)param_1[1] = 0;
    return;
  }
  *(undefined1 *)param_1[1] = 0;
  LOCK();
  plVar1 = plVar6 + 1;
  lVar2 = *plVar1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (lVar2 != 0) {
    return;
  }
  (**(code **)(*plVar6 + 0x10))(plVar6);
SUB_0412c2d0:
  if (plVar6[2] != 0) {
    LOCK();
    plVar1 = plVar6 + 2;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 != 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0412c2ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x20))();
  return;
}



/* ---- assembly ---- */
/* 0412c2d0 */  MOV RAX,qword ptr [RDI + 0x10]
/* 0412c2d4 */  TEST RAX,RAX
/* 0412c2d7 */  JZ 0x0412c2ec
/* 0412c2d9 */  MOV RAX,-0x1
/* 0412c2e0 */  XADD.LOCK qword ptr [RDI + 0x10],RAX
/* 0412c2e6 */  TEST RAX,RAX
/* 0412c2e9 */  JZ 0x0412c2ec
/* 0412c2eb */  RET
/* 0412c2ec */  MOV RAX,qword ptr [RDI]
/* 0412c2ef */  JMP qword ptr [RAX + 0x20]
/* 05286800 */  PUSH R14
/* 05286802 */  PUSH RBX
/* 05286803 */  PUSH RAX
/* 05286804 */  MOV RBX,RDI
/* 05286807 */  MOV R14,qword ptr [RDI + 0xca8]
/* 0528680e */  MOV qword ptr [RDI + 0xca8],0x0
/* 05286819 */  TEST R14,R14
/* 0528681c */  JZ 0x05286833
/* 0528681e */  MOV RDI,R14
/* 05286821 */  CALL 0x049db610
/* 05286826 */  MOV ESI,0xd0
/* 0528682b */  MOV RDI,R14
/* 0528682e */  CALL 0x0412a280
/* 05286833 */  MOV R14,qword ptr [RBX + 0xca0]
/* 0528683a */  MOV qword ptr [RBX + 0xca0],0x0
/* 05286845 */  TEST R14,R14
/* 05286848 */  JZ 0x0528686f
/* 0528684a */  MOV RDI,qword ptr [R14]
/* 0528684d */  TEST RDI,RDI
/* 05286850 */  JZ 0x05286862
/* 05286852 */  MOV qword ptr [R14 + 0x8],RDI
/* 05286856 */  MOV RSI,qword ptr [R14 + 0x10]
/* 0528685a */  SUB RSI,RDI
/* 0528685d */  CALL 0x0412a280
/* 05286862 */  MOV ESI,0x28
/* 05286867 */  MOV RDI,R14
/* 0528686a */  CALL 0x0412a280
/* 0528686f */  MOV R14,qword ptr [RBX + 0xc98]
/* 05286876 */  MOV qword ptr [RBX + 0xc98],0x0
/* 05286881 */  TEST R14,R14
/* 05286884 */  JZ 0x052868ac
/* 05286886 */  MOV RDI,qword ptr [R14 + 0x8]
/* 0528688a */  TEST RDI,RDI
/* 0528688d */  JZ 0x0528689f
/* 0528688f */  MOV qword ptr [R14 + 0x10],RDI
/* 05286893 */  MOV RSI,qword ptr [R14 + 0x18]
/* 05286897 */  SUB RSI,RDI
/* 0528689a */  CALL 0x0412a280
/* 0528689f */  MOV ESI,0x28
/* 052868a4 */  MOV RDI,R14
/* 052868a7 */  CALL 0x0412a280
/* 052868ac */  MOV RDI,qword ptr [RBX + 0xc90]
/* 052868b3 */  MOV qword ptr [RBX + 0xc90],0x0
/* 052868be */  TEST RDI,RDI
/* 052868c1 */  JZ 0x052868cd
/* 052868c3 */  MOV ESI,0x10
/* 052868c8 */  CALL 0x0412a280
/* 052868cd */  MOV RDI,qword ptr [RBX + 0xc88]
/* 052868d4 */  MOV qword ptr [RBX + 0xc88],0x0
/* 052868df */  TEST RDI,RDI
/* 052868e2 */  JZ 0x052868ea
/* 052868e4 */  MOV RAX,qword ptr [RDI]
/* 052868e7 */  CALL qword ptr [RAX + 0x8]
/* 052868ea */  LEA RDI,[RBX + 0x1f0]
/* 052868f1 */  CALL 0x05286720
/* 052868f6 */  LEA RAX,[0xef9d2a0]
/* 052868fd */  MOV qword ptr [RBX],RAX
/* 05286900 */  LEA RAX,[0xef9d4b8]
/* 05286907 */  MOV qword ptr [RBX + 0x70],RAX
/* 0528690b */  LEA RDI,[RBX + 0x140]
/* 05286912 */  CALL 0x0527a590
/* 05286917 */  MOV RDI,RBX
/* 0528691a */  ADD RSP,0x8
/* 0528691e */  POP RBX
/* 0528691f */  POP R14
/* 05286921 */  JMP 0x0ca70460
/* 0ca70460 */  PUSH R14
/* 0ca70462 */  PUSH RBX
/* 0ca70463 */  PUSH RAX
/* 0ca70464 */  MOV RBX,RDI
/* 0ca70467 */  LEA RAX,[0xf3ed048]
/* 0ca7046e */  MOV qword ptr [RDI],RAX
/* 0ca70471 */  LEA RAX,[0xf3ed220]
/* 0ca70478 */  MOV qword ptr [RDI + 0x70],RAX
/* 0ca7047c */  ADD RDI,0x108
/* 0ca70483 */  CALL 0x0eee11d0
/* 0ca70488 */  MOV RDI,qword ptr [RBX + 0xf0]
/* 0ca7048f */  TEST RDI,RDI
/* 0ca70492 */  JZ 0x0ca704b5
/* 0ca70494 */  NOP word ptr CS:[RAX + RAX*0x1]
/* 0ca704a0 */  MOV R14,qword ptr [RDI]
/* 0ca704a3 */  MOV ESI,0x18
/* 0ca704a8 */  CALL 0x0412a280
/* 0ca704ad */  MOV RDI,R14
/* 0ca704b0 */  TEST R14,R14
/* 0ca704b3 */  JNZ 0x0ca704a0
/* 0ca704b5 */  MOV RDI,qword ptr [RBX + 0xe0]
/* 0ca704bc */  MOV qword ptr [RBX + 0xe0],0x0
/* 0ca704c7 */  TEST RDI,RDI
/* 0ca704ca */  JZ 0x0ca704dc
/* 0ca704cc */  MOV RSI,qword ptr [RBX + 0xe8]
/* 0ca704d3 */  SHL RSI,0x3
/* 0ca704d7 */  CALL 0x0412a280
/* 0ca704dc */  LEA RDI,[RBX + 0xa8]
/* 0ca704e3 */  CALL 0x04136a00
/* 0ca704e8 */  MOV R14,qword ptr [RBX + 0x78]
/* 0ca704ec */  MOV qword ptr [RBX + 0x78],0x0
/* 0ca704f4 */  TEST R14,R14
/* 0ca704f7 */  JZ 0x0ca7050e
/* 0ca704f9 */  MOV RDI,R14
/* 0ca704fc */  CALL 0x0d352b40
/* 0ca70501 */  MOV ESI,0x1c8
/* 0ca70506 */  MOV RDI,R14
/* 0ca70509 */  CALL 0x0412a280
/* 0ca7050e */  MOV RDI,RBX
/* 0ca70511 */  ADD RSP,0x8
/* 0ca70515 */  POP RBX
/* 0ca70516 */  POP R14
/* 0ca70518 */  JMP 0x0cb3ae10
/* 0cb3ae10 */  PUSH R14
/* 0cb3ae12 */  PUSH RBX
/* 0cb3ae13 */  SUB RSP,0x18
/* 0cb3ae17 */  MOV RBX,RDI
/* 0cb3ae1a */  LEA RAX,[0xf3f0e90]
/* 0cb3ae21 */  MOV qword ptr [RDI],RAX
/* 0cb3ae24 */  MOV RDI,qword ptr [RDI + 0x68]
/* 0cb3ae28 */  TEST RDI,RDI
/* 0cb3ae2b */  JZ 0x0cb3ae88
/* 0cb3ae2d */  CALL 0x0412c300
/* 0cb3ae32 */  MOV qword ptr [RSP + 0x10],RAX
/* 0cb3ae37 */  TEST RAX,RAX
/* 0cb3ae3a */  JZ 0x0cb3ae7a
/* 0cb3ae3c */  MOV R14,RAX
/* 0cb3ae3f */  MOV RSI,qword ptr [RBX + 0x60]
/* 0cb3ae43 */  MOV qword ptr [RSP + 0x8],RSI
/* 0cb3ae48 */  TEST RSI,RSI
/* 0cb3ae4b */  JZ 0x0cb3ae57
/* 0cb3ae4d */  MOV RDI,qword ptr [RSI + 0x28]
/* 0cb3ae51 */  MOV RAX,qword ptr [RDI]
/* 0cb3ae54 */  CALL qword ptr [RAX + 0x10]
/* 0cb3ae57 */  MOV RAX,-0x1
/* 0cb3ae5e */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0cb3ae64 */  TEST RAX,RAX
/* 0cb3ae67 */  JNZ 0x0cb3ae7a
/* 0cb3ae69 */  MOV RAX,qword ptr [R14]
/* 0cb3ae6c */  MOV RDI,R14
/* 0cb3ae6f */  CALL qword ptr [RAX + 0x10]
/* 0cb3ae72 */  MOV RDI,R14
/* 0cb3ae75 */  CALL 0x0412c2d0
/* 0cb3ae7a */  MOV RDI,qword ptr [RBX + 0x68]
/* 0cb3ae7e */  TEST RDI,RDI
/* 0cb3ae81 */  JZ 0x0cb3ae88
/* 0cb3ae83 */  CALL 0x0412c2d0
/* 0cb3ae88 */  MOV RDI,qword ptr [RBX + 0x58]
/* 0cb3ae8c */  TEST RDI,RDI
/* 0cb3ae8f */  JZ 0x0cb3aeec
/* 0cb3ae91 */  CALL 0x0412c300
/* 0cb3ae96 */  MOV qword ptr [RSP + 0x10],RAX
/* 0cb3ae9b */  TEST RAX,RAX
/* 0cb3ae9e */  JZ 0x0cb3aede
/* 0cb3aea0 */  MOV R14,RAX
/* 0cb3aea3 */  MOV RSI,qword ptr [RBX + 0x50]
/* 0cb3aea7 */  MOV qword ptr [RSP + 0x8],RSI
/* 0cb3aeac */  TEST RSI,RSI
/* 0cb3aeaf */  JZ 0x0cb3aebb
/* 0cb3aeb1 */  MOV RDI,qword ptr [RSI + 0x28]
/* 0cb3aeb5 */  MOV RAX,qword ptr [RDI]
/* 0cb3aeb8 */  CALL qword ptr [RAX + 0x10]
/* 0cb3aebb */  MOV RAX,-0x1
/* 0cb3aec2 */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0cb3aec8 */  TEST RAX,RAX
/* 0cb3aecb */  JNZ 0x0cb3aede
/* 0cb3aecd */  MOV RAX,qword ptr [R14]
/* 0cb3aed0 */  MOV RDI,R14
/* 0cb3aed3 */  CALL qword ptr [RAX + 0x10]
/* 0cb3aed6 */  MOV RDI,R14
/* 0cb3aed9 */  CALL 0x0412c2d0
/* 0cb3aede */  MOV RDI,qword ptr [RBX + 0x58]
/* 0cb3aee2 */  TEST RDI,RDI
/* 0cb3aee5 */  JZ 0x0cb3aeec
/* 0cb3aee7 */  CALL 0x0412c2d0
/* 0cb3aeec */  MOV RDI,qword ptr [RBX + 0x38]
/* 0cb3aef0 */  MOV qword ptr [RBX + 0x38],0x0
/* 0cb3aef8 */  TEST RDI,RDI
/* 0cb3aefb */  JZ 0x0cb3af03
/* 0cb3aefd */  MOV RAX,qword ptr [RDI]
/* 0cb3af00 */  CALL qword ptr [RAX + 0x8]
/* 0cb3af03 */  LEA RAX,[0xf534768]
/* 0cb3af0a */  MOV qword ptr [RBX],RAX
/* 0cb3af0d */  MOV R14,qword ptr [RBX + 0x10]
/* 0cb3af11 */  TEST R14,R14
/* 0cb3af14 */  JZ 0x0cb3af3b
/* 0cb3af16 */  MOV RAX,qword ptr [R14 + 0x8]
/* 0cb3af1a */  MOV RAX,qword ptr [RBX + 0x8]
/* 0cb3af1e */  MOV byte ptr [RAX],0x0
/* 0cb3af21 */  MOV RAX,-0x1
/* 0cb3af28 */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0cb3af2e */  TEST RAX,RAX
/* 0cb3af31 */  JZ 0x0cb3af4a
/* 0cb3af33 */  ADD RSP,0x18
/* 0cb3af37 */  POP RBX
/* 0cb3af38 */  POP R14
/* 0cb3af3a */  RET
/* 0cb3af3b */  MOV RAX,qword ptr [RBX + 0x8]
/* 0cb3af3f */  MOV byte ptr [RAX],0x0
/* 0cb3af42 */  ADD RSP,0x18
/* 0cb3af46 */  POP RBX
/* 0cb3af47 */  POP R14
/* 0cb3af49 */  RET
/* 0cb3af4a */  MOV RAX,qword ptr [R14]
/* 0cb3af4d */  MOV RDI,R14
/* 0cb3af50 */  CALL qword ptr [RAX + 0x10]
/* 0cb3af53 */  MOV RDI,R14
/* 0cb3af56 */  ADD RSP,0x18
/* 0cb3af5a */  POP RBX
/* 0cb3af5b */  POP R14
/* 0cb3af5d */  JMP 0x0412c2d0
