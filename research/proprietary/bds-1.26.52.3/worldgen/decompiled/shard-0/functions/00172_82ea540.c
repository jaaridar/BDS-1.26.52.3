/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x82ea540
 * Label: JigsawStructureDataPacket::vslot17
 * Body:  [[082ea540, 082ebf01] [082ebf10, 082ec147] [082ec150, 082ec1f1] [082ec247, 082ec312] [082ec353, 082ec363] [082ec430, 082ec473] [082ec5d8, 082ec751] [082ec87e, 082ec911]]
 * Ghidra: wg_JigsawStructureDataPacket__vslot17
 */


/* WARNING: Removing unreachable block (ram,0x082eb80c) */
/* WARNING: Removing unreachable block (ram,0x082eb821) */
/* WARNING: Removing unreachable block (ram,0x082eb830) */
/* WARNING: Removing unreachable block (ram,0x082eb83b) */
/* WARNING: Removing unreachable block (ram,0x082ebe5c) */
/* WARNING: Removing unreachable block (ram,0x082ebe71) */
/* WARNING: Removing unreachable block (ram,0x082ebe80) */
/* WARNING: Removing unreachable block (ram,0x082ebe8b) */
/* WARNING: Removing unreachable block (ram,0x082ebe8f) */
/* WARNING: Removing unreachable block (ram,0x082ebea0) */
/* WARNING: Removing unreachable block (ram,0x082ebeaa) */
/* WARNING: Removing unreachable block (ram,0x082eb83f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_JigsawStructureDataPacket__vslot17(void)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  undefined *puVar13;
  bool bVar14;
  undefined4 unaff_retaddr;
  ulong in_stack_00000010;
  undefined8 uStack0000000000000020;
  undefined *puStack0000000000000028;
  undefined *puStack0000000000000038;
  undefined *puStack0000000000000040;
  undefined *puStack0000000000000048;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  long *plStack0000000000000060;
  long in_stack_00000070;
  long in_stack_00000078;
  int iStack0000000000000080;
  undefined1 *in_stack_00000088;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  long *in_stack_00000098;
  long in_stack_000000a0;
  undefined *in_stack_000000a8;
  undefined *in_stack_000000b0;
  long in_stack_000000b8;
  undefined *in_stack_000000c0;
  ulong in_stack_000000c8;
  undefined *in_stack_000000d0;
  undefined *in_stack_000000d8;
  ulong in_stack_000000e0;
  long in_stack_000000e8;
  long *in_stack_000000f0;
  long in_stack_000000f8;
  long in_stack_00000100;
  undefined4 in_stack_00000108;
  long in_stack_00000110;
  long in_stack_00000118;
  long in_stack_00000120;
  undefined4 uStack0000000000000128;
  undefined4 uStack000000000000012c;
  undefined4 uStack0000000000000130;
  undefined4 uStack0000000000000134;
  long in_stack_00000138;
  undefined2 uStack0000000000000140;
  undefined2 uStack0000000000000142;
  uint uStack0000000000000144;
  uint in_stack_00000148;
  undefined1 uStack000000000000014c;
  long in_stack_00000158;
  int iStack0000000000000180;
  undefined4 uStack0000000000000184;
  char in_stack_00000188;
  undefined8 in_stack_000001a0;
  long *in_stack_000001a8;
  undefined4 in_stack_000001b0;
  undefined4 in_stack_000001b8;
  undefined4 in_stack_000001c0;
  undefined4 in_stack_000001c8;
  undefined1 in_stack_000001d0;
  undefined8 in_stack_000001e0;
  long *in_stack_000001e8;
  long *in_stack_000001f0;
  undefined4 in_stack_000001f8;
  long in_stack_00000260;
  long in_stack_00000270;
  long in_stack_000002b8;
  undefined4 in_stack_00000420;
  undefined4 in_stack_00000424;
  undefined4 in_stack_00000438;
  int in_stack_00000448;
  undefined4 in_stack_0000044c;
  
  uVar9 = in_stack_00000010;
  uStack0000000000000020 = 0;
  puStack0000000000000028 = &UNK_077e7de0;
  puStack0000000000000038 = &UNK_077e7b00;
  puStack0000000000000040 = &UNK_083c5360;
  puStack0000000000000048 = &UNK_083c54c0;
  uStack0000000000000050 = 0;
  uStack0000000000000058 = 0;
  plStack0000000000000060 = (long *)0x0;
  func_0x048b05a0();
  plVar6 = plStack0000000000000060;
  if (plStack0000000000000060 != (long *)0x0) {
    LOCK();
    plVar1 = plStack0000000000000060 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack0000000000000060 + 0x10))(plStack0000000000000060);
      func_0x0412c2d0(plVar6);
    }
  }
  func_0x083c49f0(&stack0x00000080);
  func_0x048b0bc0(&stack0x00000098);
  func_0x083c4740(&stack0x00000080,&stack0x00000460,&UNK_011a18c3,0xb);
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar6 = (long)&UNK_0ef44b00;
  if (in_stack_00000098 != (long *)0x0) {
    lVar7 = *in_stack_00000098;
    in_stack_00000098 = plVar6;
    (**(code **)(lVar7 + 8))();
    plVar6 = in_stack_00000098;
  }
  in_stack_00000098 = plVar6;
  uStack0000000000000020 = 0;
  puStack0000000000000028 = &UNK_048b3f30;
  puStack0000000000000038 = &SUB_048b2190;
  puStack0000000000000040 = &UNK_083c56a0;
  puStack0000000000000048 = &UNK_083c5870;
  uStack0000000000000050 = 0;
  uStack0000000000000058 = 0;
  plStack0000000000000060 = (long *)0x0;
  func_0x048b05a0(in_stack_00000088,&stack0x00000000);
  plVar6 = plStack0000000000000060;
  if (plStack0000000000000060 != (long *)0x0) {
    LOCK();
    plVar1 = plStack0000000000000060 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack0000000000000060 + 0x10))(plStack0000000000000060);
      func_0x0412c2d0(plVar6);
    }
  }
  func_0x083c49f0(&stack0x00000080);
  func_0x048b0bc0(&stack0x00000098);
  func_0x083c4740(&stack0x00000080,&stack0x000004a0,&UNK_012788da,8);
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar6 = (long)&UNK_0ef44b00;
  if (in_stack_00000098 != (long *)0x0) {
    lVar7 = *in_stack_00000098;
    in_stack_00000098 = plVar6;
    (**(code **)(lVar7 + 8))();
    plVar6 = in_stack_00000098;
  }
  in_stack_00000098 = plVar6;
  uStack0000000000000020 = 0;
  puStack0000000000000028 = &UNK_048b3f30;
  puStack0000000000000038 = &SUB_048b2190;
  puStack0000000000000040 = &UNK_083c5a50;
  puStack0000000000000048 = &UNK_083c5c20;
  uStack0000000000000050 = 0;
  uStack0000000000000058 = 0;
  plStack0000000000000060 = (long *)0x0;
  func_0x048b05a0(in_stack_00000088,&stack0x00000000);
  plVar6 = plStack0000000000000060;
  if (plStack0000000000000060 != (long *)0x0) {
    LOCK();
    plVar1 = plStack0000000000000060 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack0000000000000060 + 0x10))(plStack0000000000000060);
      func_0x0412c2d0(plVar6);
    }
  }
  func_0x083c49f0(&stack0x00000080);
  func_0x048b0bc0(&stack0x00000098);
  func_0x083c4740(&stack0x00000080,&stack0x000004e0,&UNK_011a3689,0x12);
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar6 = (long)&UNK_0ef44b00;
  if (in_stack_00000098 != (long *)0x0) {
    lVar7 = *in_stack_00000098;
    in_stack_00000098 = plVar6;
    (**(code **)(lVar7 + 8))();
    plVar6 = in_stack_00000098;
  }
  in_stack_00000098 = plVar6;
  uStack0000000000000020 = 0;
  puStack0000000000000028 = &UNK_048b3f30;
  puStack0000000000000038 = &SUB_048b2190;
  puStack0000000000000040 = &UNK_083c5e00;
  puStack0000000000000048 = &UNK_083c5fd0;
  uStack0000000000000050 = 0;
  uStack0000000000000058 = 0;
  plStack0000000000000060 = (long *)0x0;
  func_0x048b05a0(in_stack_00000088,&stack0x00000000);
  plVar6 = plStack0000000000000060;
  if (plStack0000000000000060 != (long *)0x0) {
    LOCK();
    plVar1 = plStack0000000000000060 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack0000000000000060 + 0x10))(plStack0000000000000060);
      func_0x0412c2d0(plVar6);
    }
  }
  func_0x083c49f0(&stack0x00000080);
  func_0x048b0bc0(&stack0x00000098);
  func_0x083c4740(&stack0x00000080,&stack0x00000330,&UNK_01397b69,0xe);
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar6 = (long)&UNK_0f0eabc8;
  if (in_stack_00000098 != (long *)0x0) {
    lVar7 = *in_stack_00000098;
    in_stack_00000098 = plVar6;
    (**(code **)(lVar7 + 8))();
    plVar6 = in_stack_00000098;
  }
  in_stack_00000098 = plVar6;
  uStack0000000000000020 = 0;
  puStack0000000000000028 = &UNK_078d50d0;
  puStack0000000000000038 = &UNK_078d0d90;
  puStack0000000000000040 = &UNK_083c61b0;
  puStack0000000000000048 = &UNK_083c6310;
  uStack0000000000000050 = 0;
  uStack0000000000000058 = 0;
  plStack0000000000000060 = (long *)0x0;
  func_0x048b05a0(in_stack_00000088,&stack0x00000000);
  plVar6 = plStack0000000000000060;
  if (plStack0000000000000060 != (long *)0x0) {
    LOCK();
    plVar1 = plStack0000000000000060 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack0000000000000060 + 0x10))(plStack0000000000000060);
      func_0x0412c2d0(plVar6);
    }
  }
  func_0x083c49f0(&stack0x00000080);
  lVar7 = CONCAT44(in_stack_00000424,in_stack_00000420);
  func_0x048b0bc0(&stack0x00000098);
  if ((DAT_0f5d0890 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5d0890), iVar5 != 0)) {
    func_0x083c3320();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d0810,0xf53dab8);
    func_0x0410844d(&DAT_0f5d0890);
  }
  plVar6 = (long *)(*(long *)(lVar7 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(lVar7 + 0x20) - *(long *)(lVar7 + 0x18)) >> 3) -
                           1U & *(uint *)(_DAT_0f5d0810 + 4)) * 8);
  do {
    lVar11 = *plVar6;
    if (lVar11 == -1) goto LAB_082ead10;
    plVar6 = (long *)(*(long *)(lVar7 + 0x30) + lVar11 * 0x18);
  } while (*(uint *)(*(long *)(lVar7 + 0x30) + 8 + lVar11 * 0x18) != *(uint *)(_DAT_0f5d0810 + 4));
  if (plVar6 == *(long **)(lVar7 + 0x38)) {
LAB_082ead10:
    puVar13 = &DAT_0f5d0810;
  }
  else {
    puVar13 = (undefined *)plVar6[2];
  }
  if ((1 < in_stack_00000448 - 1U) &&
     (cVar4 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_01310c02),
     cVar4 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  lVar7 = func_0x048b0c90(lVar7 + 0x18,puVar13,in_stack_0000044c,1);
  if (lVar7 == 0) {
    _iStack0000000000000080 = (undefined *)0x0;
    in_stack_00000088 = (undefined1 *)0x0;
    func_0x048b0d20(&stack0x00000080);
    lVar7 = (long)_iStack0000000000000080;
  }
  *(undefined1 *)(*(long *)(lVar7 + 0x58) + 0xa8) = 4;
  func_0x083c4740(&stack0x00000080,&stack0x000003a8,&UNK_0120d8e0,0xf);
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar6 = (long)&UNK_0f10aa08;
  if (in_stack_00000098 != (long *)0x0) {
    lVar7 = *in_stack_00000098;
    in_stack_00000098 = plVar6;
    (**(code **)(lVar7 + 8))();
    plVar6 = in_stack_00000098;
  }
  in_stack_00000098 = plVar6;
  uStack0000000000000020 = 0;
  puStack0000000000000028 = &UNK_0819a580;
  puStack0000000000000038 = &UNK_0793d1e0;
  puStack0000000000000040 = &UNK_083c6770;
  puStack0000000000000048 = &UNK_083c6920;
  uStack0000000000000050 = 0;
  uStack0000000000000058 = 0;
  plStack0000000000000060 = (long *)0x0;
  func_0x048b05a0(in_stack_00000088,&stack0x00000000);
  plVar6 = plStack0000000000000060;
  if (plStack0000000000000060 != (long *)0x0) {
    LOCK();
    plVar1 = plStack0000000000000060 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack0000000000000060 + 0x10))(plStack0000000000000060);
      func_0x0412c2d0(plVar6);
    }
  }
  func_0x083c49f0(&stack0x00000080);
  func_0x048b0bc0(&stack0x00000098);
  func_0x083c4740(&stack0x00000080,&stack0x00000370,&UNK_011be4df,10);
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar6 = (long)&UNK_0ef46ef8;
  if (in_stack_00000098 != (long *)0x0) {
    lVar7 = *in_stack_00000098;
    in_stack_00000098 = plVar6;
    (**(code **)(lVar7 + 8))();
    plVar6 = in_stack_00000098;
  }
  in_stack_00000098 = plVar6;
  uStack0000000000000020 = 0;
  puStack0000000000000028 = &UNK_04906f70;
  puStack0000000000000038 = &UNK_04906c50;
  puStack0000000000000040 = &UNK_083c6b00;
  puStack0000000000000048 = &UNK_083c6c60;
  uStack0000000000000050 = 0;
  uStack0000000000000058 = 0;
  plStack0000000000000060 = (long *)0x0;
  func_0x048b05a0(in_stack_00000088,&stack0x00000000);
  plVar6 = plStack0000000000000060;
  if (plStack0000000000000060 != (long *)0x0) {
    LOCK();
    plVar1 = plStack0000000000000060 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack0000000000000060 + 0x10))(plStack0000000000000060);
      func_0x0412c2d0(plVar6);
    }
  }
  func_0x083c49f0(&stack0x00000080);
  func_0x048b0bc0(&stack0x00000098);
  func_0x083c4740(&stack0x00000080,&stack0x000002c0,&UNK_013e50f7,7);
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar6 = (long)&UNK_0ef46ef8;
  if (in_stack_00000098 != (long *)0x0) {
    lVar7 = *in_stack_00000098;
    in_stack_00000098 = plVar6;
    (**(code **)(lVar7 + 8))();
    plVar6 = in_stack_00000098;
  }
  in_stack_00000098 = plVar6;
  uStack0000000000000020 = 0;
  puStack0000000000000028 = &UNK_04906f70;
  puStack0000000000000038 = &UNK_04906c50;
  puStack0000000000000040 = &UNK_083c6e40;
  puStack0000000000000048 = &UNK_083c6fa0;
  uStack0000000000000050 = 0;
  uStack0000000000000058 = 0;
  plStack0000000000000060 = (long *)0x0;
  func_0x048b05a0(in_stack_00000088,&stack0x00000000);
  plVar6 = plStack0000000000000060;
  if (plStack0000000000000060 != (long *)0x0) {
    LOCK();
    plVar1 = plStack0000000000000060 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack0000000000000060 + 0x10))(plStack0000000000000060);
      func_0x0412c2d0(plVar6);
    }
  }
  func_0x083c49f0(&stack0x00000080);
  in_stack_000001b8 = in_stack_00000438;
  in_stack_000001a0._4_4_ = in_stack_00000424;
  func_0x048b0bc0(&stack0x00000098);
  func_0x083c4740(&stack0x00000080,&stack0x000001a0,&UNK_011a369c,0xc);
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar6 = (long)&UNK_0ef46ef8;
  if (in_stack_00000098 != (long *)0x0) {
    lVar7 = *in_stack_00000098;
    in_stack_00000098 = plVar6;
    (**(code **)(lVar7 + 8))();
    plVar6 = in_stack_00000098;
  }
  in_stack_00000098 = plVar6;
  uStack0000000000000020 = 0;
  puStack0000000000000028 = &UNK_04906f70;
  puStack0000000000000038 = &UNK_04906c50;
  puStack0000000000000040 = &UNK_083c7180;
  puStack0000000000000048 = &UNK_083c72e0;
  uStack0000000000000050 = 0;
  uStack0000000000000058 = 0;
  plStack0000000000000060 = (long *)0x0;
  func_0x048b05a0(in_stack_00000088,&stack0x00000000);
  plVar6 = plStack0000000000000060;
  if (plStack0000000000000060 != (long *)0x0) {
    LOCK();
    plVar1 = plStack0000000000000060 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack0000000000000060 + 0x10))(plStack0000000000000060);
      func_0x0412c2d0(plVar6);
    }
  }
  func_0x083c49f0(&stack0x00000080);
  in_stack_000001f8 = in_stack_000001b8;
  in_stack_000001e0._4_4_ = in_stack_000001a0._4_4_;
  func_0x048b0bc0(&stack0x00000098);
  func_0x083c4740(&stack0x00000080,&stack0x000001e0,&UNK_013cad4a,0xc);
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar8 = &UNK_0f011c18;
  if (in_stack_00000098 != (long *)0x0) {
    lVar7 = *in_stack_00000098;
    in_stack_00000098 = puVar8;
    (**(code **)(lVar7 + 8))();
    puVar8 = in_stack_00000098;
  }
  in_stack_00000098 = puVar8;
  uVar3 = uStack0000000000000090;
  in_stack_00000010 = in_stack_00000010 & 0xffffffff00000000;
  uStack0000000000000020 = 0;
  puStack0000000000000028 = &UNK_05dbc210;
  puStack0000000000000038 = &UNK_05dbbf30;
  puStack0000000000000040 = &UNK_083c74c0;
  puStack0000000000000048 = &UNK_083c7620;
  uStack0000000000000050 = 0;
  uStack0000000000000058 = 0;
  plStack0000000000000060 = (long *)0x0;
  func_0x048b05a0(in_stack_00000088,&stack0x00000000);
  plVar6 = plStack0000000000000060;
  if (plStack0000000000000060 != (long *)0x0) {
    LOCK();
    plVar1 = plStack0000000000000060 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack0000000000000060 + 0x10))(plStack0000000000000060);
      func_0x0412c2d0(plVar6);
    }
  }
  func_0x083c49f0(&stack0x00000080);
  func_0x048b0bc0(&stack0x00000098);
  if (in_stack_00000070 != 0) {
    func_0x0412a280(in_stack_00000070,in_stack_00000078 - in_stack_00000070);
  }
  if (in_stack_00000260 != 0) {
    func_0x0412a280(in_stack_00000260,in_stack_00000270 - in_stack_00000260);
  }
  if ((DAT_0f5d05b0 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5d05b0), iVar5 != 0)) {
    func_0x083bae90();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d0530,0xf53dab8);
    func_0x0410844d(&DAT_0f5d05b0);
  }
  plVar6 = (long *)(*(long *)(in_stack_000002b8 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(in_stack_000002b8 + 0x20) -
                                        *(long *)(in_stack_000002b8 + 0x18)) >> 3) - 1U &
                          *(uint *)(_DAT_0f5d0530 + 4)) * 8);
  do {
    lVar7 = *plVar6;
    if (lVar7 == -1) goto LAB_082eb5f0;
    plVar6 = (long *)(*(long *)(in_stack_000002b8 + 0x30) + lVar7 * 0x18);
  } while (*(uint *)(*(long *)(in_stack_000002b8 + 0x30) + 8 + lVar7 * 0x18) !=
           *(uint *)(_DAT_0f5d0530 + 4));
  if (plVar6 == *(long **)(in_stack_000002b8 + 0x38)) {
LAB_082eb5f0:
    puVar13 = &DAT_0f5d0530;
    if (iRam000000000f5d0590 != -0x2b3da790) goto LAB_082eb65d;
LAB_082eb61b:
    lVar7 = *(long *)(puVar13 + 0x68);
    if (lVar7 == 0) goto LAB_082eb65d;
    bVar14 = (*(byte *)(lVar7 + 8) & 1) != 0;
    lVar11 = lVar7 + 9;
    if (bVar14) {
      lVar11 = *(long *)(lVar7 + 0x18);
    }
    uVar10 = (ulong)(*(byte *)(lVar7 + 8) >> 1);
    if (bVar14) {
      uVar10 = *(ulong *)(lVar7 + 0x10);
    }
    func_0x083c7800(&stack0x00000158,in_stack_000002b8,lVar11,uVar10);
    lVar7 = in_stack_00000158;
  }
  else {
    puVar13 = (undefined *)plVar6[2];
    if (*(int *)(puVar13 + 0x60) == -0x2b3da790) goto LAB_082eb61b;
LAB_082eb65d:
    func_0x083c7800(&stack0x00000158,in_stack_000002b8,&UNK_011f38dd,0x17);
    lVar7 = in_stack_00000158;
  }
  if (in_stack_00000188 != '\0') {
    return;
  }
  in_stack_00000158 = lVar7;
  if ((DAT_0f5d08e0 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5d08e0), iVar5 != 0)) {
    func_0x083c8550();
    func_0x0410844d(&DAT_0f5d08e0);
  }
  if ((DAT_0f5d08e0 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5d08e0), iVar5 != 0)) {
    func_0x083c8550();
    func_0x0410844d(&DAT_0f5d08e0);
  }
  _iStack0000000000000080 = &DAT_0f5d08c8;
  in_stack_00000088 = (undefined1 *)CONCAT44(in_stack_00000088._4_4_,_DAT_0f5d08cc);
  _uStack0000000000000090 = 0;
  in_stack_00000098 = (long *)CONCAT44(in_stack_00000098._4_4_,0x80);
  in_stack_000000a0 = 0xa0;
  in_stack_000000a8 = &UNK_083c8490;
  in_stack_000000b0 = &UNK_083c85d0;
  in_stack_000000b8 = 0;
  in_stack_000000c0 = &UNK_083c8c40;
  in_stack_000000c8 = 2;
  in_stack_000000d0 = &UNK_05e26240;
  in_stack_000000d8 = &UNK_083c8cd0;
  in_stack_000000e0 = in_stack_000000e0 & 0xffffffff00000000;
  in_stack_000000e8 = 0;
  in_stack_000000f0 = (long *)0x0;
  in_stack_000000f8 = 0;
  func_0x048aee30(&stack0x00000000,lVar7 + 0x18,&stack0x00000080,0x38b50978);
  lVar7 = in_stack_000000f8;
  in_stack_000000f8 = 0;
  if (lVar7 != 0) {
    func_0x048ae940(lVar7);
    func_0x0412a280(lVar7,0x78);
  }
  plVar6 = in_stack_000000f0;
  if (in_stack_000000f0 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_000000f0 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*in_stack_000000f0 + 0x10))(in_stack_000000f0);
      func_0x0412c2d0(plVar6);
    }
  }
  *(uint *)(in_stack_00000010 + 0x18) = *(uint *)(in_stack_00000010 + 0x18) | 0x10000;
  _uStack0000000000000090 = uVar9 & 0xffffffff00000000;
  in_stack_00000098 = (long *)0x1;
  _iStack0000000000000080 = (undefined *)CONCAT44(unaff_retaddr,uVar3);
  in_stack_00000088 = (undefined1 *)0x0;
  if ((DAT_0f5af3d0 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5af3d0), iVar5 != 0)) {
    func_0x07786a90(0xf5af3b8);
    func_0x0410844d(&DAT_0f5af3d0);
  }
  in_stack_000001e0 = CONCAT44(in_stack_000001e0._4_4_,_DAT_0f5af3bc);
  in_stack_000001f0 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (in_stack_000001f0 == (long *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  in_stack_000001f0[1] = 0;
  in_stack_000001f0[2] = 0;
  *in_stack_000001f0 = (long)&UNK_0f0e9768;
  in_stack_000001e8 = in_stack_000001f0 + 3;
  in_stack_000001f0[3] = (long)&UNK_083bcbb0;
  in_stack_000001f0[4] = 0x6e6f697463410c;
  in_stack_000001f0[5] = 0;
  in_stack_000001f0[6] = 0;
  in_stack_000001a0 = 0;
  in_stack_000001a8 = (long *)0x0;
  func_0x048afd20(&stack0x00000080,&stack0x000001e0);
  plVar6 = in_stack_000001f0;
  if (in_stack_000001f0 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_000001f0 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*in_stack_000001f0 + 0x10))(in_stack_000001f0);
      func_0x0412c2d0(plVar6);
    }
  }
  plVar6 = in_stack_000001a8;
  if (in_stack_000001a8 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_000001a8 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*in_stack_000001a8 + 0x10))(in_stack_000001a8);
      func_0x0412c2d0(plVar6);
    }
  }
  if ((DAT_0f5d0518 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5d0518), iVar5 != 0)) {
    func_0x083ba330();
    func_0x0410844d(&DAT_0f5d0518);
  }
  lVar7 = in_stack_00000158;
  _iStack0000000000000180 = 0xdcaca29300000001;
  if ((DAT_0f5d05b0 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5d05b0), iVar5 != 0)) {
    func_0x083bae90();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d0530,0xf53dab8);
    func_0x0410844d(&DAT_0f5d05b0);
  }
  in_stack_00000088 = (undefined1 *)(lVar7 + 0x18);
  plVar6 = (long *)(*(long *)(lVar7 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(lVar7 + 0x20) - *(long *)(lVar7 + 0x18)) >> 3) -
                           1U & *(uint *)(_DAT_0f5d0530 + 4)) * 8);
  do {
    lVar11 = *plVar6;
    if (lVar11 == -1) goto LAB_082eb9f0;
    plVar6 = (long *)(*(long *)(lVar7 + 0x30) + lVar11 * 0x18);
  } while (*(uint *)(*(long *)(lVar7 + 0x30) + 8 + lVar11 * 0x18) != *(uint *)(_DAT_0f5d0530 + 4));
  if (plVar6 == *(long **)(lVar7 + 0x38)) {
LAB_082eb9f0:
    _iStack0000000000000080 = &DAT_0f5d0530;
  }
  else {
    _iStack0000000000000080 = (undefined *)plVar6[2];
  }
  func_0x0ed621a0(&stack0x00000080,uStack0000000000000184);
  _iStack0000000000000080 = (undefined *)((ulong)_iStack0000000000000080 & 0xffffffffffff0000);
  _uStack0000000000000090 = CONCAT44(uStack0000000000000094,uStack0000000000000184);
  in_stack_00000098 = (long *)0x0;
  in_stack_000000a0 = 0;
  in_stack_000000a8 = (undefined *)0x0;
  in_stack_000000b0 = (undefined *)0x0;
  in_stack_000000b8 = 0;
  in_stack_000000c0 = (undefined *)0x73656972746e450e;
  in_stack_000000c8 = in_stack_000000c8 & 0xffffffffffffff00;
  in_stack_000000d8 = (undefined *)0x0;
  in_stack_000000e0 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000f0 = (long *)0x0;
  in_stack_000000f8 = 0;
  in_stack_00000100 = 0;
  in_stack_00000108 = 0x3f600000;
  in_stack_00000088 = &stack0x00000160;
  func_0x048afb10(&stack0x000000d8,8);
  _uStack0000000000000130 = 0;
  in_stack_00000138 = 0;
  in_stack_00000120 = 0;
  _uStack0000000000000128 = 0;
  in_stack_00000110 = 0;
  in_stack_00000118 = 0;
  uStack0000000000000140 = 0xff00;
  uStack0000000000000144 = uStack0000000000000144 & 0xffffff00;
  in_stack_00000148 = in_stack_00000148 & 0xffffff00;
  uStack000000000000014c = 0;
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar8 = &UNK_0f116fd0;
  if (in_stack_00000098 != (long *)0x0) {
    lVar7 = *in_stack_00000098;
    in_stack_00000098 = puVar8;
    (**(code **)(lVar7 + 8))();
    puVar8 = in_stack_00000098;
  }
  in_stack_00000098 = puVar8;
  uStack0000000000000020 = 0;
  puStack0000000000000028 = &UNK_083cf960;
  puStack0000000000000038 = &UNK_083ce360;
  puStack0000000000000040 = &UNK_083cfa20;
  puStack0000000000000048 = &UNK_083cfc60;
  uStack0000000000000050 = 0;
  uStack0000000000000058 = 0;
  plStack0000000000000060 = (long *)0x0;
  func_0x048b05a0(in_stack_00000088,&stack0x00000000);
  plVar6 = plStack0000000000000060;
  if (plStack0000000000000060 != (long *)0x0) {
    LOCK();
    plVar1 = plStack0000000000000060 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack0000000000000060 + 0x10))(plStack0000000000000060);
      func_0x0412c2d0(plVar6);
    }
  }
  puVar2 = in_stack_00000088;
  if ((DAT_0f550a20 == '\0') && (iVar5 = func_0x04108328(&DAT_0f550a20), iVar5 != 0)) {
    func_0x048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  lVar7 = in_stack_000000a0;
  puVar8 = in_stack_00000098;
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&UNK_0ef439d0;
  in_stack_00000098 = (long *)0x0;
  in_stack_000000a0 = 0;
  plVar6[3] = (long)puVar8;
  plVar6[4] = lVar7;
  plVar6[7] = in_stack_000000b8;
  plVar6[5] = (long)in_stack_000000a8;
  plVar6[6] = (long)in_stack_000000b0;
  in_stack_000000a8 = (undefined *)0x0;
  in_stack_000000b0 = (undefined *)0x0;
  in_stack_000000b8 = 0;
  plVar6[10] = (long)in_stack_000000d0;
  plVar6[8] = (long)in_stack_000000c0;
  plVar6[9] = in_stack_000000c8;
  in_stack_000000c0 = (undefined *)0x0;
  in_stack_000000c8 = 0;
  in_stack_000000d0 = (undefined *)0x0;
  plVar6[0xb] = (long)in_stack_000000d8;
  plVar6[0xc] = in_stack_000000e0;
  plVar6[0xd] = in_stack_000000e8;
  in_stack_000000d8 = (undefined *)0x0;
  in_stack_000000e0 = 0;
  in_stack_000000e8 = 0;
  plVar6[0xe] = (long)in_stack_000000f0;
  plVar6[0xf] = in_stack_000000f8;
  plVar6[0x10] = in_stack_00000100;
  in_stack_000000f0 = (long *)0x0;
  in_stack_000000f8 = 0;
  in_stack_00000100 = 0;
  *(undefined4 *)(plVar6 + 0x11) = in_stack_00000108;
  plVar6[0x12] = in_stack_00000110;
  plVar6[0x13] = in_stack_00000118;
  plVar6[0x14] = in_stack_00000120;
  in_stack_00000110 = 0;
  in_stack_00000118 = 0;
  in_stack_00000120 = 0;
  plVar6[0x17] = in_stack_00000138;
  *(undefined4 *)(plVar6 + 0x15) = uStack0000000000000128;
  *(undefined4 *)((long)plVar6 + 0xac) = uStack000000000000012c;
  *(undefined4 *)(plVar6 + 0x16) = uStack0000000000000130;
  *(undefined4 *)((long)plVar6 + 0xb4) = uStack0000000000000134;
  _uStack0000000000000128 = 0;
  _uStack0000000000000130 = 0;
  in_stack_00000138 = 0;
  *(ulong *)((long)plVar6 + 0xc5) =
       CONCAT17(uStack000000000000014c,CONCAT43(in_stack_00000148,uStack0000000000000144._1_3_));
  plVar6[0x18] = CONCAT44(uStack0000000000000144,
                          CONCAT22(uStack0000000000000142,uStack0000000000000140));
  in_stack_000001e0 = 0;
  in_stack_000001e8 = (long *)0x0;
  func_0x048afd20(puVar2,&stack0x00000000);
  if (plVar6 != (long *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      func_0x0412c2d0(plVar6);
    }
  }
  plVar6 = in_stack_000001e8;
  if (in_stack_000001e8 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_000001e8 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*in_stack_000001e8 + 0x10))(in_stack_000001e8);
      func_0x0412c2d0(plVar6);
    }
  }
  lVar7 = *(long *)(puVar2 + 0x10);
  iVar5 = *(int *)(puVar2 + 0x1c);
  if (iVar5 == 2) {
    piVar12 = *(int **)(*(long *)(lVar7 + 0x78) + 0x60);
    iVar5 = *piVar12;
    while (iVar5 != *(int *)(puVar2 + 0x18)) {
      piVar12 = piVar12 + 0x16;
      iVar5 = *piVar12;
    }
    for (; *(long *)(piVar12 + 0xc) != *(long *)(puVar2 + 8); piVar12 = *(int **)(piVar12 + 0xe)) {
    }
LAB_082ebf1a:
    piVar12[4] = piVar12[4] | iStack0000000000000080 << 0x10;
  }
  else {
    if (iVar5 == 1) {
      piVar12 = *(int **)(*(long *)(lVar7 + 0x78) + 0x48);
      iVar5 = *piVar12;
      while (iVar5 != *(int *)(puVar2 + 0x18)) {
        piVar12 = piVar12 + 0x1a;
        iVar5 = *piVar12;
      }
      goto LAB_082ebf1a;
    }
    if (iVar5 == 0) {
      *(uint *)(lVar7 + 0x18) = *(uint *)(lVar7 + 0x18) | iStack0000000000000080 << 0x10;
    }
  }
  func_0x048b0bc0(&stack0x00000098);
  lVar7 = in_stack_00000158;
  uVar3 = uStack0000000000000184;
  if (iStack0000000000000180 != 4) {
    if (iStack0000000000000180 != 1) {
      return;
    }
    if ((DAT_0f5d05b0 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5d05b0), iVar5 != 0)) {
      func_0x083bae90();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d0530,0xf53dab8);
      func_0x0410844d(&DAT_0f5d05b0);
    }
    plVar6 = (long *)(*(long *)(lVar7 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lVar7 + 0x20) - *(long *)(lVar7 + 0x18)) >> 3)
                             - 1U & *(uint *)(_DAT_0f5d0530 + 4)) * 8);
    do {
      lVar11 = *plVar6;
      if (lVar11 == -1) goto LAB_082ebfb9;
      plVar6 = (long *)(*(long *)(lVar7 + 0x30) + lVar11 * 0x18);
    } while (*(uint *)(*(long *)(lVar7 + 0x30) + 8 + lVar11 * 0x18) != *(uint *)(_DAT_0f5d0530 + 4))
    ;
    if (plVar6 == *(long **)(lVar7 + 0x38)) {
LAB_082ebfb9:
      puVar13 = &DAT_0f5d0530;
    }
    else {
      puVar13 = (undefined *)plVar6[2];
    }
    uVar9 = func_0x048b0c90(lVar7 + 0x18,puVar13,uVar3,1);
    if (uVar9 == 0) {
      _iStack0000000000000080 = (undefined *)0x0;
      in_stack_00000088 = (undefined1 *)0x0;
      func_0x048b0d20(&stack0x00000080);
      uVar9 = (ulong)_iStack0000000000000080;
    }
    lVar7 = *(long *)(uVar9 + 0x58);
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
    goto LAB_082ec1a4;
  }
  if ((DAT_0f5d05b0 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5d05b0), iVar5 != 0)) {
    func_0x083bae90();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d0530,0xf53dab8);
    func_0x0410844d(&DAT_0f5d05b0);
  }
  plVar6 = (long *)(*(long *)(lVar7 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(lVar7 + 0x20) - *(long *)(lVar7 + 0x18)) >> 3) -
                           1U & *(uint *)(_DAT_0f5d0530 + 4)) * 8);
  do {
    lVar11 = *plVar6;
    if (lVar11 == -1) goto LAB_082ec039;
    plVar6 = (long *)(*(long *)(lVar7 + 0x30) + lVar11 * 0x18);
  } while (*(uint *)(*(long *)(lVar7 + 0x30) + 8 + lVar11 * 0x18) != *(uint *)(_DAT_0f5d0530 + 4));
  if (plVar6 == *(long **)(lVar7 + 0x38)) {
LAB_082ec039:
    puVar13 = &DAT_0f5d0530;
  }
  else {
    puVar13 = (undefined *)plVar6[2];
  }
  uVar9 = func_0x048b1040(lVar7 + 0x18,puVar13,uVar3,1);
  if (uVar9 == 0) {
    _iStack0000000000000080 = (undefined *)0x0;
    in_stack_00000088 = (undefined1 *)0x0;
    func_0x048b10d0(&stack0x00000080);
    uVar10 = *(ulong *)((long)_iStack0000000000000080 + 0x38);
    uVar9 = (ulong)_iStack0000000000000080;
    if (uVar10 == 0) goto LAB_082ec119;
LAB_082ec13e:
    do {
      uVar9 = uVar10;
      uVar10 = *(ulong *)(uVar9 + 0x38);
      if (*(ulong *)(uVar9 + 0x38) == 0) {
        _iStack0000000000000080 = (undefined *)0x0;
        in_stack_00000088 = (undefined1 *)0x0;
        func_0x048b10d0(&stack0x00000080);
        uVar10 = (ulong)_iStack0000000000000080;
      }
    } while (uVar10 != 0);
  }
  else {
    uVar10 = *(ulong *)(uVar9 + 0x38);
    if (*(ulong *)(uVar9 + 0x38) != 0) goto LAB_082ec13e;
LAB_082ec119:
    _iStack0000000000000080 = (undefined *)0x0;
    in_stack_00000088 = (undefined1 *)0x0;
    func_0x048b10d0(&stack0x00000080);
    uVar10 = (ulong)_iStack0000000000000080;
    if (_iStack0000000000000080 != (undefined *)0x0) goto LAB_082ec13e;
  }
  lVar7 = *(long *)(uVar9 + 0x48);
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
LAB_082ec1a4:
  puVar8[1] = 1000;
  puVar8[2] = 0;
  *(undefined1 *)(puVar8 + 3) = 0xff;
  *puVar8 = &UNK_0f4e3cf0;
  puVar8[4] = 0;
  puVar8[5] = 0;
  *(undefined8 *)((long)puVar8 + 0x29) = 0;
  *(undefined8 *)((long)puVar8 + 0x31) = 0;
  plVar6 = *(long **)(lVar7 + 8);
  *(undefined8 **)(lVar7 + 8) = puVar8;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x28))();
  }
  return;
}


