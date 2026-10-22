/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4782e20
 * Label: callee-of:0x4de9260
 * Body:  [[04782e20, 04782e78]]
 * Ghidra: FUN_04782e20
 */


void FUN_04782e20(uint *param_1,undefined8 param_2,uint param_3)

{
  uint in_EAX;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (param_3 >> 8 ^ in_EAX) & 0xff00ff;
  uVar1 = in_EAX ^ uVar2;
  param_3 = uVar2 << 8 ^ param_3;
  uVar2 = (uVar1 >> 2 ^ param_3) & 0x33333333;
  param_3 = param_3 ^ uVar2;
  uVar1 = uVar2 << 2 ^ uVar1;
  uVar2 = uVar1 & 0xffff ^ param_3 >> 0x10;
  uVar1 = uVar1 ^ uVar2;
  param_3 = uVar2 << 0x10 ^ param_3;
  uVar2 = (uVar1 >> 4 ^ param_3) & 0xf0f0f0f;
  *param_1 = param_3 ^ uVar2;
  param_1[1] = uVar2 << 4 ^ uVar1;
  return;
}



/* ---- assembly ---- */
/* 04782e20 */  MOV ECX,EDX
/* 04782e22 */  SHR ECX,0x8
/* 04782e25 */  XOR ECX,EAX
/* 04782e27 */  AND ECX,0xff00ff
/* 04782e2d */  XOR EAX,ECX
/* 04782e2f */  SHL ECX,0x8
/* 04782e32 */  XOR ECX,EDX
/* 04782e34 */  MOV EDX,EAX
/* 04782e36 */  SHR EDX,0x2
/* 04782e39 */  XOR EDX,ECX
/* 04782e3b */  AND EDX,0x33333333
/* 04782e41 */  XOR ECX,EDX
/* 04782e43 */  SHL EDX,0x2
/* 04782e46 */  XOR EDX,EAX
/* 04782e48 */  MOV EAX,ECX
/* 04782e4a */  SHR EAX,0x10
/* 04782e4d */  MOVZX ESI,DX
/* 04782e50 */  XOR ESI,EAX
/* 04782e52 */  XOR EDX,ESI
/* 04782e54 */  SHL ESI,0x10
/* 04782e57 */  XOR ESI,ECX
/* 04782e59 */  MOV EAX,EDX
/* 04782e5b */  SHR EAX,0x4
/* 04782e5e */  XOR EAX,ESI
/* 04782e60 */  AND EAX,0xf0f0f0f
/* 04782e65 */  XOR ESI,EAX
/* 04782e67 */  SHL EAX,0x4
/* 04782e6a */  XOR EAX,EDX
/* 04782e6c */  MOV dword ptr [RDI],ESI
/* 04782e6e */  MOV dword ptr [RDI + 0x4],EAX
/* 04782e71 */  POP RBX
/* 04782e72 */  POP R12
/* 04782e74 */  POP R14
/* 04782e76 */  POP R15
/* 04782e78 */  RET
