/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc9699d0
 * Label: Dimension::vslot37
 * Body:  [[0c9699d0, 0c969bea] [0c969c4e, 0c969c73] [0c969d2e, 0c969d80] [0c969ed1, 0c96a2b1]]
 * Ghidra: wg_Dimension__vslot37
 */


/* WARNING: Removing unreachable block (ram,0x0c969b44) */
/* WARNING: Removing unreachable block (ram,0x0c969d2e) */
/* WARNING: Removing unreachable block (ram,0x0c969b52) */
/* WARNING: Removing unreachable block (ram,0x0c969d55) */
/* WARNING: Removing unreachable block (ram,0x0c969d7c) */
/* WARNING: Removing unreachable block (ram,0x0c969b60) */
/* WARNING: Removing unreachable block (ram,0x0c96a065) */
/* WARNING: Removing unreachable block (ram,0x0c96a06c) */
/* WARNING: Removing unreachable block (ram,0x0c969a82) */
/* WARNING: Removing unreachable block (ram,0x0c96a2ba) */
/* WARNING: Removing unreachable block (ram,0x0c969be3) */
/* WARNING: Removing unreachable block (ram,0x0c969c01) */
/* WARNING: Removing unreachable block (ram,0x0c969b82) */
/* WARNING: Removing unreachable block (ram,0x0c969b99) */
/* WARNING: Removing unreachable block (ram,0x0c969bd4) */
/* WARNING: Removing unreachable block (ram,0x0c96a2f5) */
/* WARNING: Removing unreachable block (ram,0x0c96a303) */
/* WARNING: Removing unreachable block (ram,0x0c96a30d) */
/* WARNING: Removing unreachable block (ram,0x0c96a326) */
/* WARNING: Removing unreachable block (ram,0x0c96a334) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_Dimension__vslot37
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  undefined4 *in_RAX;
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  undefined4 uStack000000000000000c;
  undefined8 uStack0000000000000010;
  undefined4 *puStack0000000000000018;
  undefined4 *puStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  uint uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  undefined4 uStack000000000000005c;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  char in_stack_00000090;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  int iStack00000000000000c0;
  undefined4 uStack00000000000000c4;
  undefined8 in_stack_000000c8;
  undefined8 uStack00000000000000d0;
  undefined8 uStack00000000000000d8;
  undefined4 uStack00000000000000f0;
  undefined4 uStack00000000000000f4;
  undefined4 uStack00000000000000f8;
  undefined4 uStack00000000000000fc;
  undefined8 in_stack_00000100;
  undefined4 *in_stack_00000108;
  undefined4 *in_stack_00000110;
  undefined8 in_stack_00000118;
  byte bStack0000000000000140;
  undefined7 uStack0000000000000141;
  undefined8 in_stack_00000150;
  char in_stack_00000158;
  char in_stack_00000180;
  byte bStack0000000000000190;
  undefined7 uStack0000000000000191;
  undefined8 in_stack_000001a0;
  char in_stack_000001a8;
  undefined4 uStack00000000000001b0;
  undefined4 uStack00000000000001b4;
  undefined4 uStack00000000000001b8;
  undefined4 uStack00000000000001bc;
  undefined8 uStack00000000000001c0;
  undefined4 *puStack00000000000001c8;
  undefined4 *puStack00000000000001d0;
  undefined8 uStack00000000000001d8;
  undefined8 uStack00000000000001e0;
  undefined1 uStack00000000000001f0;
  char in_stack_00000240;
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
  byte in_stack_00000540;
  undefined7 in_stack_00000541;
  undefined8 in_stack_00000550;
  char in_stack_000005b0;
  
  uStack00000000000001b4 = (undefined4)((ulong)param_3 >> 0x20);
  uStack00000000000001b0 = (undefined4)param_3;
  _iStack00000000000000c0 = CONCAT44(uStack00000000000000c4,iStack00000000000000c0 - (int)in_RAX);
  uStack00000000000001f0 = 0;
  puStack0000000000000020 = (undefined4 *)0x0;
  uStack0000000000000038 = 0;
  uStack0000000000000010 = param_1;
  uStack0000000000000028 = param_1;
  uStack00000000000000d0 = param_1;
  uStack00000000000001b8 = in_XMM2_Dc;
  uStack00000000000001bc = in_XMM2_Dd;
  uStack00000000000001c0 = param_6;
  puStack00000000000001c8 = in_RAX;
  puStack00000000000001d0 = param_5;
  uStack00000000000001d8 = param_2;
  func_0x048e6d60();
  func_0x048e6d60(&stack0x000000a0);
  if (in_stack_00000090 == '\x01') {
    if ((uStack0000000000000050 & 1) != 0) {
      func_0x0412a280(in_stack_00000060,
                      CONCAT44(uStack0000000000000054,uStack0000000000000050) & 0xfffffffffffffffe);
    }
  }
  else {
    func_0x048e6d60(&stack0x00000050);
  }
  if ((in_stack_00000540 & 1) != 0) {
    func_0x0412a280(in_stack_00000550,
                    CONCAT71(in_stack_00000541,in_stack_00000540) & 0xfffffffffffffffe);
  }
  uVar12 = uStack00000000000001d8;
  puVar11 = puStack00000000000001d0;
  puVar10 = puStack00000000000001c8;
  uVar9 = uStack00000000000001c0;
  uVar1 = CONCAT44(uStack00000000000001b4,uStack00000000000001b0);
  uStack00000000000001c0 = 0;
  puStack00000000000001c8 = (undefined4 *)0x0;
  puStack00000000000001d0 = (undefined4 *)0x0;
  uStack00000000000001d8 = 0;
  uStack00000000000001e0 = 0;
  func_0x048e6d60(&stack0x000001b0);
  in_stack_00000100 = uVar9;
  in_stack_00000108 = puVar10;
  in_stack_00000110 = puVar11;
  in_stack_00000118 = uVar12;
  _uStack00000000000000f0 = uVar1;
  _uStack00000000000000f8 = CONCAT44(uStack00000000000001bc,uStack00000000000001b8);
  func_0x048e6d60(&stack0x000005c0);
  uVar8 = _UNK_0f3e8fd4;
  uVar7 = _UNK_0f3e8fd0;
  uVar6 = _UNK_0f3e8fcc;
  uVar5 = _UNK_0f3e8fc4;
  uVar4 = _UNK_0f3e8fc0;
  uVar3 = _UNK_0f3e8fbc;
  uVar2 = _DAT_0f3e8fb8;
  uStack0000000000000010 = CONCAT44(_UNK_0f3e8fcc,_DAT_0f3e8fc8);
  puStack0000000000000018 = (undefined4 *)CONCAT44(_UNK_0f3e8fd4,_UNK_0f3e8fd0);
  uStack000000000000000c = _UNK_0f3e8fc4;
  puStack0000000000000020 = (undefined4 *)((ulong)puStack0000000000000020 & 0xffffffffffffff00);
  if (in_stack_00000108 < in_stack_00000110) {
    in_stack_00000108[4] = _DAT_0f3e8fc8;
    in_stack_00000108[5] = uVar6;
    in_stack_00000108[6] = uVar7;
    in_stack_00000108[7] = uVar8;
    *in_stack_00000108 = uVar2;
    in_stack_00000108[1] = uVar3;
    in_stack_00000108[2] = uVar4;
    in_stack_00000108[3] = uVar5;
    *(undefined1 *)(in_stack_00000108 + 8) = 0;
    *(undefined1 *)(in_stack_00000108 + 0x12) = 0;
    puStack0000000000000018 = in_stack_00000108 + 0x14;
  }
  else {
    puStack0000000000000018 = (undefined4 *)func_0x0489d2c0(&stack0x00000100,&stack0x00000000);
  }
  uStack0000000000000028 = in_stack_00000118;
  puStack0000000000000020 = in_stack_00000110;
  uStack0000000000000010 = in_stack_00000100;
  in_stack_000000a0 = _uStack00000000000000f0;
  in_stack_000000a8 = _uStack00000000000000f8;
  in_stack_00000100 = 0;
  in_stack_00000108 = (undefined4 *)0x0;
  in_stack_00000110 = (undefined4 *)0x0;
  in_stack_00000118 = 0;
  uStack0000000000000050 = uStack00000000000000f0;
  uStack0000000000000054 = uStack00000000000000f4;
  in_stack_00000058 = uStack00000000000000f8;
  uStack000000000000005c = uStack00000000000000fc;
  in_stack_000000b0 = 0;
  in_stack_000000b8 = 0;
  _iStack00000000000000c0 = 0;
  in_stack_000000c8 = 0;
  uStack00000000000000d0 = 0;
  uStack00000000000000d8 = 0;
  uStack000000000000000c = uStack00000000000000fc;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_00000078 = 0;
  in_stack_00000080 = 0;
  in_stack_00000088 = 0;
  func_0x048e6d60(&stack0x00000050);
  func_0x048e6d60(&stack0x000000a0);
  func_0x048e6d60(&stack0x000000f0);
  if (in_stack_00000240 == '\0') {
    func_0x048e6d60(&stack0x00000200);
  }
  uStack0000000000000010 = 0;
  puStack0000000000000018 = (undefined4 *)0x0;
  puStack0000000000000020 = (undefined4 *)0x0;
  uStack0000000000000028 = 0;
  uStack0000000000000030 = 0;
  uStack0000000000000038 = 0;
  func_0x048e6d60(&stack0x00000000);
  func_0x048e6d60(&stack0x000002a0);
  func_0x0c96b320(&stack0x00000250);
  func_0x0c96aca0();
  func_0x048e6d60(&stack0x00000700);
  func_0x048e6d60(&stack0x00000250);
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


