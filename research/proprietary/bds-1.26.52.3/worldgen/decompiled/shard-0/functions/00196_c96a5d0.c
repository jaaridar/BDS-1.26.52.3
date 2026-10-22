/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc96a5d0
 * Label: Dimension::vslot15
 * Body:  [[0c96a5d0, 0c96a8d9]]
 * Ghidra: wg_Dimension__vslot15
 */


void wg_Dimension__vslot15
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong in_RAX;
  undefined8 in_RCX;
  long unaff_R13;
  char cVar5;
  undefined8 in_XMM3_Qb;
  ulong unaff_retaddr;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  ulong uStack0000000000000020;
  undefined8 uStack0000000000000028;
  char cStack0000000000000030;
  undefined8 uStack0000000000000038;
  byte in_stack_00000040;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000078;
  undefined8 uStack0000000000000088;
  byte bStack0000000000000140;
  undefined7 uStack0000000000000141;
  undefined8 in_stack_00000150;
  char in_stack_00000158;
  char in_stack_00000180;
  byte bStack0000000000000190;
  undefined7 uStack0000000000000191;
  undefined8 in_stack_000001a0;
  char in_stack_000001a8;
  char in_stack_00000240;
  ulong uVar6;
  ulong in_stack_00000250;
  undefined8 in_stack_00000260;
  ulong in_stack_00000268;
  undefined8 in_stack_00000278;
  char cVar7;
  ulong in_stack_000002a0;
  undefined8 in_stack_000002b0;
  ulong in_stack_000002b8;
  undefined8 in_stack_000002c8;
  byte in_stack_000002f0;
  undefined7 in_stack_000002f1;
  undefined8 in_stack_00000300;
  char in_stack_00000330;
  byte in_stack_00000340;
  undefined7 in_stack_00000341;
  undefined8 in_stack_00000350;
  char in_stack_00000380;
  byte in_stack_00000390;
  undefined7 in_stack_00000391;
  undefined8 in_stack_000003a0;
  char in_stack_000003d0;
  byte in_stack_000003e0;
  undefined7 in_stack_000003e1;
  undefined8 in_stack_000003f0;
  char in_stack_00000420;
  char in_stack_00000490;
  char in_stack_000004e0;
  char in_stack_00000530;
  char in_stack_000005b0;
  
  uStack0000000000000020 = in_RAX & 0xffffffffffffff10;
  uStack0000000000000070 = 0;
  uStack0000000000000088 = 0;
  uStack0000000000000028 = param_4;
  _cStack0000000000000030 = in_XMM3_Qb;
  uStack0000000000000038 = in_RCX;
  uStack0000000000000060 = param_3;
  uStack0000000000000078 = param_3;
  func_0x048e6d60(&stack0x00000050);
  func_0x048e6d60(&stack0x000000a0);
  uVar4 = uStack0000000000000028;
  if (in_stack_00000240 == '\0') {
    func_0x048e6d60(&stack0x00000200);
    uVar4 = uStack0000000000000028;
  }
  cVar5 = cStack0000000000000030;
  if (in_stack_00000040 == 1) {
    cVar5 = cStack0000000000000030 == '\x01';
    uStack0000000000000028 = uVar4;
    uVar1 = in_stack_000002a0 & 0xffffffffffffff00;
    uVar2 = in_stack_000002b0;
    uVar3 = in_stack_000002b8;
    if ((bool)cVar5) {
      in_stack_000002c8 = uVar4;
      uVar1 = unaff_retaddr;
      uVar2 = in_stack_00000010;
      uVar3 = in_stack_00000018;
    }
  }
  else {
    uStack0000000000000020 = 0;
    uStack0000000000000028 = 0;
    _cStack0000000000000030 = 0;
    uStack0000000000000038 = 0;
    func_0x048e6d60(&stack0x00000000);
    in_stack_000002c8 = uVar4;
    uVar1 = unaff_retaddr;
    uVar2 = in_stack_00000010;
    uVar3 = in_stack_00000018;
  }
  if ((in_stack_00000040 & 1) == 0) {
    func_0x048e6d60(&stack0x000002a0);
    uVar6 = uVar1;
    in_stack_00000260 = uVar2;
    in_stack_00000268 = uVar3;
    in_stack_00000278 = in_stack_000002c8;
    cVar7 = cVar5;
  }
  else {
    cVar7 = '\0';
    uVar6 = in_stack_00000250 & 0xffffffffffffff00;
    if (cVar5 == '\x01') {
      cVar7 = '\x01';
      uVar6 = uVar1;
      in_stack_00000260 = uVar2;
      in_stack_00000268 = uVar3;
      in_stack_00000278 = in_stack_000002c8;
    }
  }
  if ((in_stack_00000040 & 1) == 0) {
    func_0x0c96b320(&stack0x00000250);
    in_stack_00000260 = 0;
    in_stack_00000268 = 0;
    in_stack_00000278 = 0;
    func_0x0c96aca0();
    func_0x048e6d60(&stack0x00000700);
    cVar7 = '\0';
  }
  else {
    func_0x07d0cd00(&stack0x000006c8,&stack0x00000250);
    *(undefined1 *)(unaff_R13 + 0xf0) = 1;
    func_0x048e05d0();
  }
  if (in_stack_00000040 == 1) {
    if (cVar7 == '\x01') {
      if ((in_stack_00000268 & 1) != 0) {
        func_0x0412a280(in_stack_00000278,in_stack_00000268 & 0xfffffffffffffffe);
      }
      if ((uVar6 & 1) != 0) {
        func_0x0412a280(in_stack_00000260,uVar6 & 0xfffffffffffffffe);
      }
    }
  }
  else {
    func_0x048e6d60(&stack0x00000250);
  }
  if (in_stack_000005b0 == '\0') {
    func_0x048e6d60(&stack0x00000570);
  }
  if (in_stack_00000180 == '\x01') {
    if ((in_stack_00000158 == '\x01') && ((bStack0000000000000140 & 1) != 0)) {
      func_0x0412a280(in_stack_00000150,
                      CONCAT71(uStack0000000000000141,bStack0000000000000140) & 0xfffffffffffffffe);
    }
  }
  else {
    func_0x048e6d60(&stack0x00000140);
  }
  if ((in_stack_000001a8 == '\x01') && ((bStack0000000000000190 & 1) != 0)) {
    func_0x0412a280(in_stack_000001a0,
                    CONCAT71(uStack0000000000000191,bStack0000000000000190) & 0xfffffffffffffffe);
  }
  if (in_stack_00000490 == '\0') {
    func_0x048e6d60(&stack0x00000450);
  }
  if (in_stack_00000330 == '\x01') {
    if ((in_stack_000002f0 & 1) != 0) {
      func_0x0412a280(in_stack_00000300,
                      CONCAT71(in_stack_000002f1,in_stack_000002f0) & 0xfffffffffffffffe);
    }
  }
  else {
    func_0x048e6d60(&stack0x000002f0);
  }
  if (in_stack_00000380 == '\x01') {
    if ((in_stack_00000340 & 1) != 0) {
      func_0x0412a280(in_stack_00000350,
                      CONCAT71(in_stack_00000341,in_stack_00000340) & 0xfffffffffffffffe);
    }
  }
  else {
    func_0x048e6d60(&stack0x00000340);
  }
  if (in_stack_000004e0 == '\0') {
    func_0x048e6d60(&stack0x000004a0);
  }
  if (in_stack_00000530 == '\0') {
    func_0x048e6d60(&stack0x000004f0);
  }
  if (in_stack_000003d0 == '\x01') {
    if ((in_stack_00000390 & 1) != 0) {
      func_0x0412a280(in_stack_000003a0,
                      CONCAT71(in_stack_00000391,in_stack_00000390) & 0xfffffffffffffffe);
    }
  }
  else {
    func_0x048e6d60(&stack0x00000390);
  }
  if (in_stack_00000420 == '\x01') {
    if ((in_stack_000003e0 & 1) != 0) {
      func_0x0412a280(in_stack_000003f0,
                      CONCAT71(in_stack_000003e1,in_stack_000003e0) & 0xfffffffffffffffe);
    }
  }
  else {
    func_0x048e6d60(&stack0x000003e0);
  }
  func_0x048e0830(&stack0x00000610);
  return;
}


