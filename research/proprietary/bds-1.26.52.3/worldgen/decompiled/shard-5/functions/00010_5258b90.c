/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5358b90 (ELF vaddr 0x5258b90)
 * Label: SurfaceBuilderBiomeComponentGlue::vslot0
 * Body:  [[05358b90, 05358c00] [05358c10, 05358cae]]
 * Ghidra: wg_SurfaceBuilderBiomeComponentGlue__vslot0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * wg_SurfaceBuilderBiomeComponentGlue__vslot0(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = &UNK_0efa54a8;
  *param_1 = &UNK_0efa54a8;
  lVar1 = param_1[0x1c];
  if (lVar1 != 0) {
    param_1[0x1d] = lVar1;
    puVar2 = (undefined *)FUN_0412a280(lVar1,param_1[0x1e] - lVar1);
  }
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    puVar2 = (undefined *)FUN_0412a280(param_1[0x1a],param_1[0x18] & 0xfffffffffffffffe);
  }
  lVar1 = param_1[0x15];
  if (lVar1 != 0) {
    lVar4 = param_1[0x16];
    lVar3 = lVar1;
    if (lVar1 != lVar4) {
      do {
        if ((*(byte *)(lVar4 + -0x30) & 1) != 0) {
          FUN_0412a280(*(undefined8 *)(lVar4 + -0x20),*(ulong *)(lVar4 + -0x30) & 0xfffffffffffffffe
                      );
        }
        lVar4 = lVar4 + -0x30;
      } while (lVar4 != lVar1);
      lVar3 = param_1[0x15];
    }
    param_1[0x16] = lVar1;
    puVar2 = (undefined *)FUN_0412a280(lVar3,param_1[0x17] - lVar3);
  }
  lVar1 = param_1[0x12];
  if (lVar1 != 0) {
    param_1[0x13] = lVar1;
    puVar2 = (undefined *)FUN_0412a280(lVar1,param_1[0x14] - lVar1);
  }
  lVar1 = param_1[10];
  if (lVar1 != 0) {
    param_1[0xb] = lVar1;
    puVar2 = (undefined *)FUN_0412a280(lVar1,param_1[0xc] - lVar1);
  }
  lVar1 = param_1[7];
  if (lVar1 == 0) {
    return puVar2;
  }
  param_1[8] = lVar1;
  if (lVar1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,lVar1);
  }
  return puVar2;
}



/* ---- assembly ---- */
/* 05358b90 */  PUSH R15
/* 05358b92 */  PUSH R14
/* 05358b94 */  PUSH RBX
/* 05358b95 */  MOV RBX,RDI
/* 05358b98 */  LEA RAX,[0xefa54a8]
/* 05358b9f */  MOV qword ptr [RDI],RAX
/* 05358ba2 */  MOV RDI,qword ptr [RDI + 0xe0]
/* 05358ba9 */  TEST RDI,RDI
/* 05358bac */  JZ 0x05358bc4
/* 05358bae */  MOV qword ptr [RBX + 0xe8],RDI
/* 05358bb5 */  MOV RSI,qword ptr [RBX + 0xf0]
/* 05358bbc */  SUB RSI,RDI
/* 05358bbf */  CALL 0x0412a280
/* 05358bc4 */  TEST byte ptr [RBX + 0xc0],0x1
/* 05358bcb */  JZ 0x05358be4
/* 05358bcd */  MOV RSI,qword ptr [RBX + 0xc0]
/* 05358bd4 */  MOV RDI,qword ptr [RBX + 0xd0]
/* 05358bdb */  AND RSI,-0x2
/* 05358bdf */  CALL 0x0412a280
/* 05358be4 */  MOV R14,qword ptr [RBX + 0xa8]
/* 05358beb */  TEST R14,R14
/* 05358bee */  JZ 0x05358c50
/* 05358bf0 */  MOV R15,qword ptr [RBX + 0xb0]
/* 05358bf7 */  MOV RDI,R14
/* 05358bfa */  CMP R14,R15
/* 05358bfd */  JNZ 0x05358c19
/* 05358bff */  JMP 0x05358c3a
/* 05358c10 */  ADD R15,-0x30
/* 05358c14 */  CMP R15,R14
/* 05358c17 */  JZ 0x05358c33
/* 05358c19 */  TEST byte ptr [R15 + -0x30],0x1
/* 05358c1e */  JZ 0x05358c10
/* 05358c20 */  MOV RSI,qword ptr [R15 + -0x30]
/* 05358c24 */  MOV RDI,qword ptr [R15 + -0x20]
/* 05358c28 */  AND RSI,-0x2
/* 05358c2c */  CALL 0x0412a280
/* 05358c31 */  JMP 0x05358c10
/* 05358c33 */  MOV RDI,qword ptr [RBX + 0xa8]
/* 05358c3a */  MOV qword ptr [RBX + 0xb0],R14
/* 05358c41 */  MOV RSI,qword ptr [RBX + 0xb8]
/* 05358c48 */  SUB RSI,RDI
/* 05358c4b */  CALL 0x0412a280
/* 05358c50 */  MOV RDI,qword ptr [RBX + 0x90]
/* 05358c57 */  TEST RDI,RDI
/* 05358c5a */  JZ 0x05358c72
/* 05358c5c */  MOV qword ptr [RBX + 0x98],RDI
/* 05358c63 */  MOV RSI,qword ptr [RBX + 0xa0]
/* 05358c6a */  SUB RSI,RDI
/* 05358c6d */  CALL 0x0412a280
/* 05358c72 */  MOV RDI,qword ptr [RBX + 0x50]
/* 05358c76 */  TEST RDI,RDI
/* 05358c79 */  JZ 0x05358c8b
/* 05358c7b */  MOV qword ptr [RBX + 0x58],RDI
/* 05358c7f */  MOV RSI,qword ptr [RBX + 0x60]
/* 05358c83 */  SUB RSI,RDI
/* 05358c86 */  CALL 0x0412a280
/* 05358c8b */  MOV RDI,qword ptr [RBX + 0x38]
/* 05358c8f */  TEST RDI,RDI
/* 05358c92 */  JZ 0x05358ca9
/* 05358c94 */  MOV qword ptr [RBX + 0x40],RDI
/* 05358c98 */  MOV RSI,qword ptr [RBX + 0x48]
/* 05358c9c */  SUB RSI,RDI
/* 05358c9f */  POP RBX
/* 05358ca0 */  POP R14
/* 05358ca2 */  POP R15
/* 05358ca4 */  JMP 0x0412a280
/* 05358ca9 */  POP RBX
/* 05358caa */  POP R14
/* 05358cac */  POP R15
/* 05358cae */  RET
