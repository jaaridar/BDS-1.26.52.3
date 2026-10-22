/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x623d5d0
 * Label: string:{}, ()NSt3__110__function6__funcIZN6Editor8Services19EditorJ
 * Body:  [[0623d5d0, 0623ed86] [0623ed90, 0623ee31] [0623eeba, 0623efb8] [0623effd, 0623f084]]
 * Ghidra: FUN_0623d5d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0623d5d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4,
                 undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
                 undefined4 param_9,undefined8 param_10,undefined8 param_11)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  char cVar13;
  int iVar14;
  long in_RAX;
  long *plVar15;
  undefined *puVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  long lVar20;
  long unaff_RBX;
  undefined *puStack0000000000000030;
  undefined1 *puStack0000000000000038;
  undefined *puStack0000000000000040;
  undefined *puStack0000000000000048;
  undefined *puStack0000000000000050;
  undefined4 uStack0000000000000058;
  undefined8 uStack0000000000000060;
  long *plStack0000000000000068;
  undefined4 in_stack_00000070;
  undefined4 uStack0000000000000074;
  undefined4 in_stack_00000078;
  undefined4 uStack000000000000007c;
  undefined4 in_stack_00000080;
  undefined4 uStack0000000000000084;
  undefined4 in_stack_00000088;
  undefined4 uStack000000000000008c;
  undefined4 in_stack_00000090;
  undefined4 uStack0000000000000094;
  int in_stack_00000098;
  undefined4 uStack000000000000009c;
  char in_stack_000000a0;
  undefined4 uStack00000000000000b0;
  undefined4 uStack00000000000000b4;
  undefined4 uStack00000000000000b8;
  undefined4 uStack00000000000000bc;
  undefined4 uStack00000000000000c0;
  undefined4 uStack00000000000000c4;
  undefined4 uStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  undefined4 uStack00000000000000d0;
  undefined4 uStack00000000000000d4;
  int iStack00000000000000d8;
  undefined4 uStack00000000000000dc;
  char in_stack_000000e0;
  long in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined4 in_stack_00000100;
  long *in_stack_00000108;
  undefined4 in_stack_000001c0;
  undefined4 uStack00000000000001c4;
  undefined4 in_stack_000001c8;
  undefined4 uStack00000000000001cc;
  undefined4 in_stack_000001d0;
  undefined4 uStack00000000000001d4;
  undefined4 in_stack_000001d8;
  undefined4 uStack00000000000001dc;
  undefined4 in_stack_000001e0;
  undefined4 uStack00000000000001e4;
  int in_stack_000001e8;
  undefined4 uStack00000000000001ec;
  char in_stack_000001f0;
  undefined8 in_stack_00000208;
  
  *(char *)(in_RAX + -0x73) = *(char *)(in_RAX + -0x73) + param_4;
  puStack0000000000000030 = (undefined *)(ulong)((int)in_RAX + 0xdb138);
  puStack0000000000000038 = &SUB_048b06d0;
  puStack0000000000000040 = &UNK_063183f0;
  puStack0000000000000048 = &UNK_0632bf40;
  puStack0000000000000050 = &UNK_0632c0b0;
  uStack0000000000000058 = 0;
  uStack0000000000000060 = 0;
  plStack0000000000000068 = (long *)0x0;
  func_0x048b05a0(param_1,&param_7);
  plVar15 = plStack0000000000000068;
  if (plStack0000000000000068 != (long *)0x0) {
    LOCK();
    plVar1 = plStack0000000000000068 + 1;
    lVar17 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plStack0000000000000068 + 0x10))(plStack0000000000000068);
      func_0x0412c2d0(plVar15);
    }
  }
  func_0x0632bc40(&stack0x000000f0);
  cVar13 = in_stack_000000e0;
  uVar12 = uStack00000000000000dc;
  iVar14 = iStack00000000000000d8;
  uVar11 = uStack00000000000000d4;
  uVar10 = uStack00000000000000d0;
  uVar9 = uStack00000000000000cc;
  uVar8 = uStack00000000000000c8;
  uVar7 = uStack00000000000000c4;
  uVar6 = uStack00000000000000c0;
  uVar5 = uStack00000000000000bc;
  uVar4 = uStack00000000000000b8;
  uVar3 = uStack00000000000000b4;
  uVar2 = uStack00000000000000b0;
  func_0x048b0bc0(&stack0x00000108);
  func_0x0632ba40(&stack0x000000f0,&stack0x00000210,&UNK_01414331,8);
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar15 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar15 = (long)&UNK_0f01ae00;
  if (in_stack_00000108 != (long *)0x0) {
    lVar17 = *in_stack_00000108;
    in_stack_00000108 = plVar15;
    (**(code **)(lVar17 + 8))();
    plVar15 = in_stack_00000108;
  }
  in_stack_00000108 = plVar15;
  param_7 = in_stack_00000100;
  param_8 = 0;
  param_9 = 0;
  param_10 = 1;
  param_11 = 0;
  puStack0000000000000030 = &UNK_06046510;
  puStack0000000000000038 = &SUB_048b06d0;
  puStack0000000000000040 = &UNK_0602fbb0;
  puStack0000000000000048 = &UNK_0632c280;
  puStack0000000000000050 = &UNK_0632c3e0;
  uStack0000000000000058 = 0;
  uStack0000000000000060 = 0;
  plStack0000000000000068 = (long *)0x0;
  func_0x048b05a0(in_stack_000000f8,&param_7);
  plVar15 = plStack0000000000000068;
  if (plStack0000000000000068 != (long *)0x0) {
    LOCK();
    plVar1 = plStack0000000000000068 + 1;
    lVar17 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plStack0000000000000068 + 0x10))(plStack0000000000000068);
      func_0x0412c2d0(plVar15);
    }
  }
  func_0x0632bc40(&stack0x000000f0);
  in_stack_000001c0 = uVar2;
  uStack00000000000001c4 = uVar3;
  in_stack_000001c8 = uVar4;
  uStack00000000000001cc = uVar5;
  in_stack_000001d0 = uVar6;
  uStack00000000000001d4 = uVar7;
  in_stack_000001d8 = uVar8;
  uStack00000000000001dc = uVar9;
  in_stack_000001e0 = uVar10;
  uStack00000000000001e4 = uVar11;
  in_stack_000001e8 = iVar14;
  uStack00000000000001ec = uVar12;
  in_stack_000001f0 = cVar13;
  func_0x048b0bc0(&stack0x00000108);
  func_0x0632ba40(&stack0x000000f0,&stack0x000001c0,&UNK_0142cb75,6);
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar15 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar15 = (long)&UNK_0f011f18;
  if (in_stack_00000108 != (long *)0x0) {
    lVar17 = *in_stack_00000108;
    in_stack_00000108 = plVar15;
    (**(code **)(lVar17 + 8))();
    plVar15 = in_stack_00000108;
  }
  in_stack_00000108 = plVar15;
  param_7 = in_stack_00000100;
  param_8 = 0;
  param_9 = 0;
  param_10 = 1;
  param_11 = 0;
  puStack0000000000000030 = &UNK_05f27580;
  puStack0000000000000038 = &SUB_048b06d0;
  puStack0000000000000040 = &SUB_05f23890;
  puStack0000000000000048 = &UNK_0632c5c0;
  puStack0000000000000050 = &UNK_0632c730;
  uStack0000000000000058 = 0;
  uStack0000000000000060 = 0;
  plStack0000000000000068 = (long *)0x0;
  func_0x048b05a0(in_stack_000000f8,&param_7);
  plVar15 = plStack0000000000000068;
  if (plStack0000000000000068 != (long *)0x0) {
    LOCK();
    plVar1 = plStack0000000000000068 + 1;
    lVar17 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plStack0000000000000068 + 0x10))(plStack0000000000000068);
      func_0x0412c2d0(plVar15);
    }
  }
  func_0x0632bc40(&stack0x000000f0);
  in_stack_000000a0 = in_stack_000001f0;
  in_stack_00000090 = in_stack_000001e0;
  uStack0000000000000094 = uStack00000000000001e4;
  in_stack_00000098 = in_stack_000001e8;
  uStack000000000000009c = uStack00000000000001ec;
  in_stack_00000080 = in_stack_000001d0;
  uStack0000000000000084 = uStack00000000000001d4;
  in_stack_00000088 = in_stack_000001d8;
  uStack000000000000008c = uStack00000000000001dc;
  in_stack_00000070 = in_stack_000001c0;
  uStack0000000000000074 = uStack00000000000001c4;
  in_stack_00000078 = in_stack_000001c8;
  uStack000000000000007c = uStack00000000000001cc;
  func_0x048b0bc0(&stack0x00000108);
  func_0x0632ba40(&stack0x000000f0,&stack0x00000070,&UNK_01341d5d,4);
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar15 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar15 = (long)&UNK_0f012438;
  if (in_stack_00000108 != (long *)0x0) {
    lVar17 = *in_stack_00000108;
    in_stack_00000108 = plVar15;
    (**(code **)(lVar17 + 8))();
    plVar15 = in_stack_00000108;
  }
  in_stack_00000108 = plVar15;
  param_7 = in_stack_00000100;
  param_8 = 0;
  param_9 = 0;
  param_10 = 1;
  param_11 = 0;
  puStack0000000000000030 = &UNK_05fc5e00;
  puStack0000000000000038 = &SUB_048b06d0;
  puStack0000000000000040 = &UNK_05dcda00;
  puStack0000000000000048 = &UNK_0632c910;
  puStack0000000000000050 = &UNK_0632ca70;
  uStack0000000000000058 = 0;
  uStack0000000000000060 = 0;
  plStack0000000000000068 = (long *)0x0;
  func_0x048b05a0(in_stack_000000f8,&param_7);
  plVar15 = plStack0000000000000068;
  if (plStack0000000000000068 != (long *)0x0) {
    LOCK();
    plVar1 = plStack0000000000000068 + 1;
    lVar17 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plStack0000000000000068 + 0x10))(plStack0000000000000068);
      func_0x0412c2d0(plVar15);
    }
  }
  func_0x0632bc40(&stack0x000000f0);
  func_0x048b0bc0(&stack0x00000108);
  if ((DAT_0f56d988 == '\0') && (iVar14 = func_0x04108328(&DAT_0f56d988), iVar14 != 0)) {
    func_0x0631bc40();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f56d908,0xf53dab8);
    func_0x0410844d(&DAT_0f56d988);
  }
  plVar15 = (long *)(*(long *)(unaff_RBX + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(unaff_RBX + 0x20) - *(long *)(unaff_RBX + 0x18))
                                 >> 3) - 1U & *(uint *)(_DAT_0f56d908 + 4)) * 8);
  do {
    lVar17 = *plVar15;
    if (lVar17 == -1) goto LAB_0623db20;
    plVar15 = (long *)(*(long *)(unaff_RBX + 0x30) + lVar17 * 0x18);
  } while (*(uint *)(*(long *)(unaff_RBX + 0x30) + 8 + lVar17 * 0x18) !=
           *(uint *)(_DAT_0f56d908 + 4));
  if (plVar15 == *(long **)(unaff_RBX + 0x38)) {
LAB_0623db20:
    puVar16 = &DAT_0f56d908;
    if (iRam000000000f56d968 != -0x2b3da790) goto LAB_0623db8e;
LAB_0623db4b:
    if (*(long *)(puVar16 + 0x68) == 0) goto LAB_0623db8e;
    func_0x0632cc50(&stack0x000000b0);
  }
  else {
    puVar16 = (undefined *)plVar15[2];
    if (*(int *)(puVar16 + 0x60) == -0x2b3da790) goto LAB_0623db4b;
LAB_0623db8e:
    func_0x0632cc50(&stack0x000000b0);
  }
  if (in_stack_000000e0 == '\0') {
    func_0x0632d7c0(&stack0x000000f0,&stack0x000000b0,&UNK_01327339,7);
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar15 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar15 = (long)&UNK_0f028e30;
    if (in_stack_00000108 != (long *)0x0) {
      lVar17 = *in_stack_00000108;
      in_stack_00000108 = plVar15;
      (**(code **)(lVar17 + 8))();
      plVar15 = in_stack_00000108;
    }
    in_stack_00000108 = plVar15;
    param_7 = in_stack_00000100;
    param_8 = 0;
    param_9 = 0;
    param_10 = 1;
    param_11 = 0;
    puStack0000000000000030 = &UNK_06318710;
    puStack0000000000000038 = &SUB_048b06d0;
    puStack0000000000000040 = &UNK_063183f0;
    puStack0000000000000048 = &UNK_0632dd70;
    puStack0000000000000050 = &UNK_0632dee0;
    uStack0000000000000058 = 0;
    uStack0000000000000060 = 0;
    plStack0000000000000068 = (long *)0x0;
    func_0x048b05a0(in_stack_000000f8,&param_7);
    plVar15 = plStack0000000000000068;
    if (plStack0000000000000068 != (long *)0x0) {
      LOCK();
      plVar1 = plStack0000000000000068 + 1;
      lVar17 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack0000000000000068 + 0x10))(plStack0000000000000068);
        func_0x0412c2d0(plVar15);
      }
    }
    func_0x0632da70(&stack0x000000f0);
    cVar13 = in_stack_000000e0;
    uVar12 = uStack00000000000000dc;
    iVar14 = iStack00000000000000d8;
    uVar11 = uStack00000000000000d4;
    uVar10 = uStack00000000000000d0;
    uVar9 = uStack00000000000000cc;
    uVar8 = uStack00000000000000c8;
    uVar7 = uStack00000000000000c4;
    uVar6 = uStack00000000000000c0;
    uVar5 = uStack00000000000000bc;
    uVar4 = uStack00000000000000b8;
    uVar3 = uStack00000000000000b4;
    uVar2 = uStack00000000000000b0;
    func_0x048b0bc0(&stack0x00000108);
    func_0x0632d7c0(&stack0x000000f0,&stack0x00000250,&UNK_01414331,8);
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar15 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar15 = (long)&UNK_0f01ae00;
    if (in_stack_00000108 != (long *)0x0) {
      lVar17 = *in_stack_00000108;
      in_stack_00000108 = plVar15;
      (**(code **)(lVar17 + 8))();
      plVar15 = in_stack_00000108;
    }
    in_stack_00000108 = plVar15;
    param_7 = in_stack_00000100;
    param_8 = 0;
    param_9 = 0;
    param_10 = 1;
    param_11 = 0;
    puStack0000000000000030 = &UNK_06046510;
    puStack0000000000000038 = &SUB_048b06d0;
    puStack0000000000000040 = &UNK_0602fbb0;
    puStack0000000000000048 = &UNK_0632e0b0;
    puStack0000000000000050 = &UNK_0632e210;
    uStack0000000000000058 = 0;
    uStack0000000000000060 = 0;
    plStack0000000000000068 = (long *)0x0;
    func_0x048b05a0(in_stack_000000f8,&param_7);
    plVar15 = plStack0000000000000068;
    if (plStack0000000000000068 != (long *)0x0) {
      LOCK();
      plVar1 = plStack0000000000000068 + 1;
      lVar17 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack0000000000000068 + 0x10))(plStack0000000000000068);
        func_0x0412c2d0(plVar15);
      }
    }
    func_0x0632da70(&stack0x000000f0);
    func_0x048b0bc0(&stack0x00000108);
    func_0x0632d7c0(&stack0x000000f0,&stack0x00000290,&UNK_01377d51,0x11);
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar15 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar15 = (long)&UNK_0f01ae00;
    if (in_stack_00000108 != (long *)0x0) {
      lVar17 = *in_stack_00000108;
      in_stack_00000108 = plVar15;
      (**(code **)(lVar17 + 8))();
      plVar15 = in_stack_00000108;
    }
    in_stack_00000108 = plVar15;
    param_7 = in_stack_00000100;
    param_8 = 0;
    param_9 = 0;
    param_10 = 1;
    param_11 = 0;
    puStack0000000000000030 = &UNK_06046510;
    puStack0000000000000038 = &SUB_048b06d0;
    puStack0000000000000040 = &UNK_0602fbb0;
    puStack0000000000000048 = &UNK_0632e3f0;
    puStack0000000000000050 = &UNK_0632e550;
    uStack0000000000000058 = 0;
    uStack0000000000000060 = 0;
    plStack0000000000000068 = (long *)0x0;
    func_0x048b05a0(in_stack_000000f8,&param_7);
    plVar15 = plStack0000000000000068;
    if (plStack0000000000000068 != (long *)0x0) {
      LOCK();
      plVar1 = plStack0000000000000068 + 1;
      lVar17 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack0000000000000068 + 0x10))(plStack0000000000000068);
        func_0x0412c2d0(plVar15);
      }
    }
    func_0x0632da70(&stack0x000000f0);
    func_0x048b0bc0(&stack0x00000108);
    func_0x0632d7c0(&stack0x000000f0,&stack0x000002d0,&UNK_0142cb75,6);
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar15 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar15 = (long)&UNK_0f011f18;
    if (in_stack_00000108 != (long *)0x0) {
      lVar17 = *in_stack_00000108;
      in_stack_00000108 = plVar15;
      (**(code **)(lVar17 + 8))();
      plVar15 = in_stack_00000108;
    }
    in_stack_00000108 = plVar15;
    param_7 = in_stack_00000100;
    param_8 = 0;
    param_9 = 0;
    param_10 = 1;
    param_11 = 0;
    puStack0000000000000030 = &UNK_05f27580;
    puStack0000000000000038 = &SUB_048b06d0;
    puStack0000000000000040 = &SUB_05f23890;
    puStack0000000000000048 = &UNK_0632e730;
    puStack0000000000000050 = &UNK_0632e8a0;
    uStack0000000000000058 = 0;
    uStack0000000000000060 = 0;
    plStack0000000000000068 = (long *)0x0;
    func_0x048b05a0(in_stack_000000f8,&param_7);
    plVar15 = plStack0000000000000068;
    if (plStack0000000000000068 != (long *)0x0) {
      LOCK();
      plVar1 = plStack0000000000000068 + 1;
      lVar17 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack0000000000000068 + 0x10))(plStack0000000000000068);
        func_0x0412c2d0(plVar15);
      }
    }
    func_0x0632da70(&stack0x000000f0);
    func_0x048b0bc0(&stack0x00000108);
    func_0x0632d7c0(&stack0x000000f0,&stack0x00000210,&UNK_01341d5d,4);
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar15 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar15 = (long)&UNK_0f012438;
    if (in_stack_00000108 != (long *)0x0) {
      lVar17 = *in_stack_00000108;
      in_stack_00000108 = plVar15;
      (**(code **)(lVar17 + 8))();
      plVar15 = in_stack_00000108;
    }
    in_stack_00000108 = plVar15;
    param_7 = in_stack_00000100;
    param_8 = 0;
    param_9 = 0;
    param_10 = 1;
    param_11 = 0;
    puStack0000000000000030 = &UNK_05fc5e00;
    puStack0000000000000038 = &SUB_048b06d0;
    puStack0000000000000040 = &UNK_05dcda00;
    puStack0000000000000048 = &UNK_0632ea80;
    puStack0000000000000050 = &UNK_0632ebe0;
    uStack0000000000000058 = 0;
    uStack0000000000000060 = 0;
    plStack0000000000000068 = (long *)0x0;
    func_0x048b05a0(in_stack_000000f8,&param_7);
    plVar15 = plStack0000000000000068;
    if (plStack0000000000000068 != (long *)0x0) {
      LOCK();
      plVar1 = plStack0000000000000068 + 1;
      lVar17 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack0000000000000068 + 0x10))(plStack0000000000000068);
        func_0x0412c2d0(plVar15);
      }
    }
    func_0x0632da70(&stack0x000000f0);
    in_stack_000001c0 = uVar2;
    uStack00000000000001c4 = uVar3;
    in_stack_000001c8 = uVar4;
    uStack00000000000001cc = uVar5;
    in_stack_000001d0 = uVar6;
    uStack00000000000001d4 = uVar7;
    in_stack_000001d8 = uVar8;
    uStack00000000000001dc = uVar9;
    in_stack_000001e0 = uVar10;
    uStack00000000000001e4 = uVar11;
    in_stack_000001e8 = iVar14;
    uStack00000000000001ec = uVar12;
    in_stack_000001f0 = cVar13;
    func_0x048b0bc0(&stack0x00000108);
    func_0x0632d7c0(&stack0x000000f0,&stack0x000001c0,&UNK_01341dbc,10);
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar15 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar15 = (long)&UNK_0f012080;
    if (in_stack_00000108 != (long *)0x0) {
      lVar17 = *in_stack_00000108;
      in_stack_00000108 = plVar15;
      (**(code **)(lVar17 + 8))();
      plVar15 = in_stack_00000108;
    }
    in_stack_00000108 = plVar15;
    param_7 = in_stack_00000100;
    param_8 = 0;
    param_9 = 0;
    param_10 = 1;
    param_11 = 0;
    puStack0000000000000030 = &UNK_05dd3ca0;
    puStack0000000000000038 = &SUB_048b06d0;
    puStack0000000000000040 = &UNK_05dd3990;
    puStack0000000000000048 = &UNK_0632edc0;
    puStack0000000000000050 = &UNK_0632ef20;
    uStack0000000000000058 = 0;
    uStack0000000000000060 = 0;
    plStack0000000000000068 = (long *)0x0;
    func_0x048b05a0(in_stack_000000f8,&param_7);
    plVar15 = plStack0000000000000068;
    if (plStack0000000000000068 != (long *)0x0) {
      LOCK();
      plVar1 = plStack0000000000000068 + 1;
      lVar17 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack0000000000000068 + 0x10))(plStack0000000000000068);
        func_0x0412c2d0(plVar15);
      }
    }
    func_0x0632da70(&stack0x000000f0);
    in_stack_000000a0 = in_stack_000001f0;
    in_stack_00000090 = in_stack_000001e0;
    uStack0000000000000094 = uStack00000000000001e4;
    in_stack_00000098 = in_stack_000001e8;
    uStack000000000000009c = uStack00000000000001ec;
    in_stack_00000080 = in_stack_000001d0;
    uStack0000000000000084 = uStack00000000000001d4;
    in_stack_00000088 = in_stack_000001d8;
    uStack000000000000008c = uStack00000000000001dc;
    in_stack_00000070 = in_stack_000001c0;
    uStack0000000000000074 = uStack00000000000001c4;
    in_stack_00000078 = in_stack_000001c8;
    uStack000000000000007c = uStack00000000000001cc;
    func_0x048b0bc0(&stack0x00000108);
    func_0x0632d7c0(&stack0x000000f0,&stack0x00000070,&UNK_012d8b37,0xb);
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar15 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar15 = (long)&UNK_0f012080;
    if (in_stack_00000108 != (long *)0x0) {
      lVar17 = *in_stack_00000108;
      in_stack_00000108 = plVar15;
      (**(code **)(lVar17 + 8))();
      plVar15 = in_stack_00000108;
    }
    in_stack_00000108 = plVar15;
    param_7 = in_stack_00000100;
    param_8 = 0;
    param_9 = 0;
    param_10 = 1;
    param_11 = 0;
    puStack0000000000000030 = &UNK_05dd3ca0;
    puStack0000000000000038 = &SUB_048b06d0;
    puStack0000000000000040 = &UNK_05dd3990;
    puStack0000000000000048 = &UNK_0632f100;
    puStack0000000000000050 = &UNK_0632f260;
    uStack0000000000000058 = 0;
    uStack0000000000000060 = 0;
    plStack0000000000000068 = (long *)0x0;
    func_0x048b05a0(in_stack_000000f8,&param_7);
    plVar15 = plStack0000000000000068;
    if (plStack0000000000000068 != (long *)0x0) {
      LOCK();
      plVar1 = plStack0000000000000068 + 1;
      lVar17 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack0000000000000068 + 0x10))(plStack0000000000000068);
        func_0x0412c2d0(plVar15);
      }
    }
    func_0x0632da70(&stack0x000000f0);
    func_0x048b0bc0(&stack0x00000108);
  }
  if ((DAT_0f56df78 == '\0') && (iVar14 = func_0x04108328(&DAT_0f56df78), iVar14 != 0)) {
    func_0x0632f500();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f56def8,0xf53dab8);
    func_0x0410844d(&DAT_0f56df78);
  }
  plVar15 = (long *)(*(long *)(unaff_RBX + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(unaff_RBX + 0x20) - *(long *)(unaff_RBX + 0x18))
                                 >> 3) - 1U & *(uint *)(_DAT_0f56def8 + 4)) * 8);
  do {
    lVar17 = *plVar15;
    if (lVar17 == -1) goto LAB_0623e5d0;
    plVar15 = (long *)(*(long *)(unaff_RBX + 0x30) + lVar17 * 0x18);
  } while (*(uint *)(*(long *)(unaff_RBX + 0x30) + 8 + lVar17 * 0x18) !=
           *(uint *)(_DAT_0f56def8 + 4));
  if (plVar15 == *(long **)(unaff_RBX + 0x38)) {
LAB_0623e5d0:
    puVar16 = &DAT_0f56def8;
    if (iRam000000000f56df58 != -0x2b3da790) goto LAB_0623e90a;
LAB_0623e602:
    if (*(long *)(puVar16 + 0x68) == 0) goto LAB_0623e90a;
    func_0x0632fb20(&stack0x000000b0);
    if (in_stack_000000e0 == '\0') goto LAB_0623e647;
LAB_0623e934:
    lVar17 = func_0x06331640(in_stack_00000208);
    if (*(int *)(lVar17 + 0x60) != -0x2b3da790) goto LAB_0623e98d;
LAB_0623e94a:
    if (*(long *)(lVar17 + 0x68) == 0) goto LAB_0623e98d;
    func_0x06331ca0(&stack0x000000b0);
  }
  else {
    puVar16 = (undefined *)plVar15[2];
    if (*(int *)(puVar16 + 0x60) == -0x2b3da790) goto LAB_0623e602;
LAB_0623e90a:
    func_0x0632fb20(&stack0x000000b0);
    if (in_stack_000000e0 != '\0') goto LAB_0623e934;
LAB_0623e647:
    func_0x063306f0(&stack0x000000f0,&stack0x000000b0,&UNK_0128cb6f,8);
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar15 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar15 = (long)&UNK_0f028f18;
    if (in_stack_00000108 != (long *)0x0) {
      lVar17 = *in_stack_00000108;
      in_stack_00000108 = plVar15;
      (**(code **)(lVar17 + 8))();
      plVar15 = in_stack_00000108;
    }
    in_stack_00000108 = plVar15;
    param_7 = in_stack_00000100;
    param_8 = 0;
    param_9 = 0;
    param_10 = 1;
    param_11 = 0;
    puStack0000000000000030 = &UNK_0631be80;
    puStack0000000000000038 = &SUB_048b06d0;
    puStack0000000000000040 = &UNK_0631bb80;
    puStack0000000000000048 = &UNK_06330c90;
    puStack0000000000000050 = &UNK_06330e10;
    uStack0000000000000058 = 0;
    uStack0000000000000060 = 0;
    plStack0000000000000068 = (long *)0x0;
    func_0x048b05a0(in_stack_000000f8,&param_7);
    plVar15 = plStack0000000000000068;
    if (plStack0000000000000068 != (long *)0x0) {
      LOCK();
      plVar1 = plStack0000000000000068 + 1;
      lVar17 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack0000000000000068 + 0x10))(plStack0000000000000068);
        func_0x0412c2d0(plVar15);
      }
    }
    func_0x06330990(&stack0x000000f0);
    in_stack_000000a0 = in_stack_000000e0;
    in_stack_00000090 = uStack00000000000000d0;
    uStack0000000000000094 = uStack00000000000000d4;
    in_stack_00000098 = iStack00000000000000d8;
    uStack000000000000009c = uStack00000000000000dc;
    in_stack_00000080 = uStack00000000000000c0;
    uStack0000000000000084 = uStack00000000000000c4;
    in_stack_00000088 = uStack00000000000000c8;
    uStack000000000000008c = uStack00000000000000cc;
    in_stack_00000070 = uStack00000000000000b0;
    uStack0000000000000074 = uStack00000000000000b4;
    in_stack_00000078 = uStack00000000000000b8;
    uStack000000000000007c = uStack00000000000000bc;
    func_0x048b0bc0(&stack0x00000108);
    func_0x063306f0(&stack0x000000f0,&stack0x00000070,&UNK_013ad0c7,6);
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar15 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar15 = (long)&UNK_0f00a8c8;
    if (in_stack_00000108 != (long *)0x0) {
      lVar17 = *in_stack_00000108;
      in_stack_00000108 = plVar15;
      (**(code **)(lVar17 + 8))();
      plVar15 = in_stack_00000108;
    }
    in_stack_00000108 = plVar15;
    param_7 = in_stack_00000100;
    param_8 = 0;
    param_9 = 0;
    param_10 = 1;
    param_11 = 0;
    puStack0000000000000030 = &UNK_06330fe0;
    puStack0000000000000038 = &SUB_048b06d0;
    puStack0000000000000040 = &UNK_05dda4c0;
    puStack0000000000000048 = &UNK_06330ff0;
    puStack0000000000000050 = &UNK_063311c0;
    uStack0000000000000058 = 0;
    uStack0000000000000060 = 0;
    plStack0000000000000068 = (long *)0x0;
    func_0x048b05a0(in_stack_000000f8,&param_7);
    plVar15 = plStack0000000000000068;
    if (plStack0000000000000068 != (long *)0x0) {
      LOCK();
      plVar1 = plStack0000000000000068 + 1;
      lVar17 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack0000000000000068 + 0x10))(plStack0000000000000068);
        func_0x0412c2d0(plVar15);
      }
    }
    func_0x06330990(&stack0x000000f0);
    func_0x048b0bc0(&stack0x00000108);
    lVar17 = func_0x06331640(in_stack_00000208);
    if (*(int *)(lVar17 + 0x60) == -0x2b3da790) goto LAB_0623e94a;
LAB_0623e98d:
    func_0x06331ca0(&stack0x000000b0);
  }
  if (in_stack_000000e0 != '\0') {
    return;
  }
  func_0x06332550(&stack0x000000f0,&stack0x000000b0,&UNK_01341dbc,10);
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar15 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar15 = (long)&UNK_0f012080;
  if (in_stack_00000108 != (long *)0x0) {
    lVar17 = *in_stack_00000108;
    in_stack_00000108 = plVar15;
    (**(code **)(lVar17 + 8))();
    plVar15 = in_stack_00000108;
  }
  in_stack_00000108 = plVar15;
  param_7 = in_stack_00000100;
  param_8 = 0;
  param_9 = 0;
  param_10 = 1;
  param_11 = 0;
  puStack0000000000000030 = &UNK_05dd3ca0;
  puStack0000000000000038 = &SUB_048b06d0;
  puStack0000000000000040 = &UNK_05dd3990;
  puStack0000000000000048 = &UNK_06332a40;
  puStack0000000000000050 = &UNK_06332ba0;
  uStack0000000000000058 = 0;
  uStack0000000000000060 = 0;
  plStack0000000000000068 = (long *)0x0;
  func_0x048b05a0(in_stack_000000f8,&param_7);
  plVar15 = plStack0000000000000068;
  if (plStack0000000000000068 != (long *)0x0) {
    LOCK();
    plVar1 = plStack0000000000000068 + 1;
    lVar17 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plStack0000000000000068 + 0x10))(plStack0000000000000068);
      func_0x0412c2d0(plVar15);
    }
  }
  func_0x06332740(&stack0x000000f0);
  in_stack_000000a0 = in_stack_000000e0;
  in_stack_00000090 = uStack00000000000000d0;
  uStack0000000000000094 = uStack00000000000000d4;
  in_stack_00000098 = iStack00000000000000d8;
  uStack000000000000009c = uStack00000000000000dc;
  in_stack_00000080 = uStack00000000000000c0;
  uStack0000000000000084 = uStack00000000000000c4;
  in_stack_00000088 = uStack00000000000000c8;
  uStack000000000000008c = uStack00000000000000cc;
  in_stack_00000070 = uStack00000000000000b0;
  uStack0000000000000074 = uStack00000000000000b4;
  in_stack_00000078 = uStack00000000000000b8;
  uStack000000000000007c = uStack00000000000000bc;
  func_0x048b0bc0(&stack0x00000108);
  func_0x06332550(&stack0x000000f0,&stack0x00000070,&UNK_011b95be,7);
  puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar18 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar18 = &UNK_0f011548;
  if (in_stack_00000108 != (long *)0x0) {
    lVar17 = *in_stack_00000108;
    in_stack_00000108 = puVar18;
    (**(code **)(lVar17 + 8))();
    puVar18 = in_stack_00000108;
  }
  in_stack_00000108 = puVar18;
  param_7 = in_stack_00000100;
  param_8 = 0;
  param_9 = 0;
  param_10 = 1;
  param_11 = 0;
  puStack0000000000000030 = &UNK_05f26ec0;
  puStack0000000000000038 = &SUB_048b06d0;
  puStack0000000000000040 = &UNK_05f26070;
  puStack0000000000000048 = &UNK_06332d70;
  puStack0000000000000050 = &UNK_06332fb0;
  uStack0000000000000058 = 0;
  uStack0000000000000060 = 0;
  plStack0000000000000068 = (long *)0x0;
  func_0x048b05a0(in_stack_000000f8,&param_7);
  plVar15 = plStack0000000000000068;
  if (plStack0000000000000068 != (long *)0x0) {
    LOCK();
    plVar1 = plStack0000000000000068 + 1;
    lVar17 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plStack0000000000000068 + 0x10))(plStack0000000000000068);
      func_0x0412c2d0(plVar15);
    }
  }
  func_0x06332740(&stack0x000000f0);
  uVar2 = uStack000000000000009c;
  iVar14 = in_stack_00000098;
  lVar17 = CONCAT44(uStack0000000000000074,in_stack_00000070);
  func_0x048b0bc0(&stack0x00000108);
  if (iVar14 != 4) {
    if (iVar14 != 1) {
      return;
    }
    lVar17 = lVar17 + 0x18;
    uVar19 = func_0x06331640(lVar17);
    lVar17 = func_0x048b0c90(lVar17,uVar19,uVar2,1);
    if (lVar17 == 0) {
      in_stack_000000f0 = 0;
      in_stack_000000f8 = 0;
      func_0x048b0d20(&stack0x000000f0);
      lVar17 = in_stack_000000f0;
    }
    lVar17 = *(long *)(lVar17 + 0x58);
    puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar18 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
    goto LAB_0623ede4;
  }
  lVar17 = lVar17 + 0x18;
  uVar19 = func_0x06331640(lVar17);
  lVar17 = func_0x048b1040(lVar17,uVar19,uVar2,1);
  if (lVar17 == 0) {
    in_stack_000000f0 = 0;
    in_stack_000000f8 = 0;
    func_0x048b10d0(&stack0x000000f0);
    lVar20 = *(long *)(in_stack_000000f0 + 0x38);
    lVar17 = in_stack_000000f0;
    if (lVar20 == 0) goto LAB_0623ed58;
LAB_0623ed7d:
    do {
      lVar17 = lVar20;
      lVar20 = *(long *)(lVar17 + 0x38);
      if (*(long *)(lVar17 + 0x38) == 0) {
        in_stack_000000f0 = 0;
        in_stack_000000f8 = 0;
        func_0x048b10d0(&stack0x000000f0);
        lVar20 = in_stack_000000f0;
      }
    } while (lVar20 != 0);
  }
  else {
    lVar20 = *(long *)(lVar17 + 0x38);
    if (*(long *)(lVar17 + 0x38) != 0) goto LAB_0623ed7d;
LAB_0623ed58:
    in_stack_000000f0 = 0;
    in_stack_000000f8 = 0;
    func_0x048b10d0(&stack0x000000f0);
    lVar20 = in_stack_000000f0;
    if (in_stack_000000f0 != 0) goto LAB_0623ed7d;
  }
  lVar17 = *(long *)(lVar17 + 0x48);
  puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar18 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
LAB_0623ede4:
  puVar18[1] = 100000;
  puVar18[2] = 0;
  *(undefined1 *)(puVar18 + 3) = 0xff;
  *puVar18 = &UNK_0f4e3cf0;
  puVar18[4] = 0;
  puVar18[5] = 0;
  *(undefined8 *)((long)puVar18 + 0x29) = 0;
  *(undefined8 *)((long)puVar18 + 0x31) = 0;
  plVar15 = *(long **)(lVar17 + 8);
  *(undefined8 **)(lVar17 + 8) = puVar18;
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x28))();
  }
  return;
}


