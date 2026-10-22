/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc96a1e0
 * Label: Dimension::vslot44
 * Body:  [[0c96a1e0, 0c96a351]]
 * Ghidra: wg_Dimension__vslot44
 */


void wg_Dimension__vslot44(undefined4 param_1,undefined8 param_2)

{
  long unaff_R13;
  char in_XMM1_Bi;
  undefined4 uStack0000000000000028;
  undefined8 uStack0000000000000038;
  byte bStack0000000000000140;
  undefined7 uStack0000000000000141;
  undefined8 in_stack_00000150;
  char in_stack_00000158;
  char in_stack_00000180;
  byte bStack0000000000000190;
  undefined7 uStack0000000000000191;
  undefined8 in_stack_000001a0;
  char in_stack_000001a8;
  ulong in_stack_00000250;
  ulong uVar1;
  undefined8 in_stack_00000260;
  ulong in_stack_00000268;
  undefined8 in_stack_00000278;
  char cVar2;
  ulong in_stack_000002a0;
  undefined8 in_stack_000002b0;
  ulong in_stack_000002b8;
  byte in_stack_000002e0;
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
  
  uStack0000000000000038 = 0;
  uStack0000000000000028 = param_1;
  func_0x048e6d60();
  if ((in_stack_000002e0 & 1) == 0) {
    func_0x048e6d60(&stack0x000002a0);
    uVar1 = in_stack_000002a0;
    in_stack_00000260 = in_stack_000002b0;
    in_stack_00000268 = in_stack_000002b8;
    in_stack_00000278 = param_2;
    cVar2 = in_XMM1_Bi;
  }
  else {
    cVar2 = '\0';
    uVar1 = in_stack_00000250 & 0xffffffffffffff00;
    if (in_XMM1_Bi == '\x01') {
      cVar2 = '\x01';
      uVar1 = in_stack_000002a0;
      in_stack_00000260 = in_stack_000002b0;
      in_stack_00000268 = in_stack_000002b8;
      in_stack_00000278 = param_2;
    }
  }
  if ((in_stack_000002e0 & 1) == 0) {
    func_0x0c96b320(&stack0x00000250);
    in_stack_00000260 = 0;
    in_stack_00000268 = 0;
    in_stack_00000278 = 0;
    func_0x0c96aca0();
    func_0x048e6d60(&stack0x00000700);
    cVar2 = '\0';
  }
  else {
    func_0x07d0cd00(&stack0x000006c8,&stack0x00000250);
    *(undefined1 *)(unaff_R13 + 0xf0) = 1;
    func_0x048e05d0();
  }
  if (in_stack_000002e0 == 1) {
    if (cVar2 == '\x01') {
      if ((in_stack_00000268 & 1) != 0) {
        func_0x0412a280(in_stack_00000278,in_stack_00000268 & 0xfffffffffffffffe);
      }
      if ((uVar1 & 1) != 0) {
        func_0x0412a280(in_stack_00000260,uVar1 & 0xfffffffffffffffe);
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


