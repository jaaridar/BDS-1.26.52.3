/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x52815f0 (ELF vaddr 0x51815f0)
 * Label: OverworldGenerator2d::vslot51
 * Body:  [[052815f0, 0528161f]]
 * Ghidra: wg_OverworldGenerator2d__vslot51
 */


undefined1  [16] wg_OverworldGenerator2d__vslot51(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  auVar3 = func_0x0c851100(0xf5566f8,*(undefined8 *)(param_1 + 0x238),0);
  uVar2 = auVar3._0_8_;
  uVar1 = auVar3._8_8_ & 0xffffffff;
  if ((auVar3._8_8_ >> 0x20 & 1) == 0) {
    uVar2 = 0x7fff00000000;
    uVar1 = 0;
  }
  auVar3._8_8_ = uVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* ---- assembly ---- */
/* 052815f0 */  PUSH RBX
/* 052815f1 */  MOV RSI,qword ptr [RDI + 0x238]
/* 052815f8 */  LEA RDI,[0xf5566f8]
/* 052815ff */  XOR EBX,EBX
/* 05281601 */  XOR EDX,EDX
/* 05281603 */  CALL 0x0c851100
/* 05281608 */  BT RDX,0x20
/* 0528160d */  CMOVNC EDX,EBX
/* 05281610 */  MOV RCX,0x7fff00000000
/* 0528161a */  CMOVNC RAX,RCX
/* 0528161e */  POP RBX
/* 0528161f */  RET
