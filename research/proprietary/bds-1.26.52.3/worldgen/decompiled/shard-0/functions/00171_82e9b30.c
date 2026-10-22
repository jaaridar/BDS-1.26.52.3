/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x82e9b30
 * Label: JigsawStructureDataPacket::vslot13
 * Body:  [[082e9b30, 082ea1d4] [082ea1e0, 082ea3dd] [082ec203, 082ec235] [082ec322, 082ec330] [082ec342, 082ec352] [082ec3ec, 082ec42f] [082ec594, 082ec5d7] [082ec757, 082ec7a8] [082ec7f6, 082ec87d]]
 * Ghidra: wg_JigsawStructureDataPacket__vslot13
 */


/* WARNING: Removing unreachable block (ram,0x082e9ab5) */
/* WARNING: Removing unreachable block (ram,0x082eb57c) */
/* WARNING: Removing unreachable block (ram,0x082eb39c) */
/* WARNING: Removing unreachable block (ram,0x082eb3ae) */
/* WARNING: Removing unreachable block (ram,0x082eb0a6) */
/* WARNING: Removing unreachable block (ram,0x082eb0b8) */
/* WARNING: Removing unreachable block (ram,0x082eac36) */
/* WARNING: Removing unreachable block (ram,0x082eac48) */
/* WARNING: Removing unreachable block (ram,0x082ea8eb) */
/* WARNING: Removing unreachable block (ram,0x082ea8fd) */
/* WARNING: Removing unreachable block (ram,0x082ea5a0) */
/* WARNING: Removing unreachable block (ram,0x082ea5b2) */
/* WARNING: Removing unreachable block (ram,0x082e9f3d) */
/* WARNING: Removing unreachable block (ram,0x082ec757) */
/* WARNING: Removing unreachable block (ram,0x082ec776) */
/* WARNING: Removing unreachable block (ram,0x082e961f) */
/* WARNING: Removing unreachable block (ram,0x082e9650) */
/* WARNING: Removing unreachable block (ram,0x082e974f) */
/* WARNING: Removing unreachable block (ram,0x082e965d) */
/* WARNING: Removing unreachable block (ram,0x082e966b) */
/* WARNING: Removing unreachable block (ram,0x082e975f) */
/* WARNING: Removing unreachable block (ram,0x082e9678) */
/* WARNING: Removing unreachable block (ram,0x082e9763) */
/* WARNING: Removing unreachable block (ram,0x082e9776) */
/* WARNING: Removing unreachable block (ram,0x082e9796) */
/* WARNING: Removing unreachable block (ram,0x082e97bc) */
/* WARNING: Removing unreachable block (ram,0x082e98b5) */
/* WARNING: Removing unreachable block (ram,0x082e98ff) */
/* WARNING: Removing unreachable block (ram,0x082e9905) */
/* WARNING: Removing unreachable block (ram,0x082ec214) */
/* WARNING: Removing unreachable block (ram,0x082e99b8) */
/* WARNING: Removing unreachable block (ram,0x082e99d8) */
/* WARNING: Removing unreachable block (ram,0x082e99de) */
/* WARNING: Removing unreachable block (ram,0x082e9f43) */
/* WARNING: Removing unreachable block (ram,0x082ec322) */
/* WARNING: Removing unreachable block (ram,0x082e9f66) */
/* WARNING: Removing unreachable block (ram,0x082e9ce2) */
/* WARNING: Removing unreachable block (ram,0x082e9cf4) */
/* WARNING: Removing unreachable block (ram,0x082e9a71) */
/* WARNING: Removing unreachable block (ram,0x082e9a84) */
/* WARNING: Removing unreachable block (ram,0x082e9a96) */
/* WARNING: Removing unreachable block (ram,0x082e9adf) */
/* WARNING: Removing unreachable block (ram,0x082e9af7) */
/* WARNING: Removing unreachable block (ram,0x082ec3ec) */
/* WARNING: Removing unreachable block (ram,0x082ec400) */
/* WARNING: Removing unreachable block (ram,0x082e9b06) */
/* WARNING: Removing unreachable block (ram,0x082ea3f0) */
/* WARNING: Removing unreachable block (ram,0x082ea402) */
/* WARNING: Removing unreachable block (ram,0x082ea750) */
/* WARNING: Removing unreachable block (ram,0x082ea762) */
/* WARNING: Removing unreachable block (ram,0x082eaa86) */
/* WARNING: Removing unreachable block (ram,0x082eaa98) */
/* WARNING: Removing unreachable block (ram,0x082eaef6) */
/* WARNING: Removing unreachable block (ram,0x082eaf08) */
/* WARNING: Removing unreachable block (ram,0x082eb241) */
/* WARNING: Removing unreachable block (ram,0x082eb253) */
/* WARNING: Removing unreachable block (ram,0x082eb50c) */
/* WARNING: Removing unreachable block (ram,0x082eb51e) */
/* WARNING: Removing unreachable block (ram,0x082ebbe1) */
/* WARNING: Removing unreachable block (ram,0x082ebbf3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_JigsawStructureDataPacket__vslot13
               (undefined8 param_1,undefined8 param_2,long param_3,long *param_4,undefined8 param_5,
               undefined8 param_6,long param_7,ulong param_8,undefined8 param_9)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  char cVar9;
  int in_EAX;
  int iVar10;
  int iVar11;
  undefined *puVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  int *piVar17;
  ulong uVar18;
  ulong uVar19;
  long unaff_RBP;
  long lVar20;
  bool bVar21;
  undefined4 unaff_retaddr;
  undefined4 unaff_retaddr_00;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  long in_stack_00000078;
  int iStack0000000000000080;
  undefined8 *in_stack_00000088;
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
  char in_stack_00000150;
  long in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined4 in_stack_00000170;
  undefined4 in_stack_00000178;
  int iStack0000000000000180;
  undefined4 uStack0000000000000184;
  char in_stack_00000188;
  ulong in_stack_00000198;
  long in_stack_000001a0;
  long *in_stack_000001a8;
  undefined4 uStack00000000000001b0;
  undefined4 uStack00000000000001b4;
  undefined4 in_stack_000001b8;
  undefined4 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  char in_stack_000001d0;
  long in_stack_000001e0;
  long *in_stack_000001e8;
  long *in_stack_000001f0;
  undefined4 in_stack_000001f8;
  
  do {
    lVar20 = *param_4;
    if (lVar20 == -1) goto LAB_082e9b50;
    param_4 = (long *)(param_3 + lVar20 * 0x18);
  } while (*(int *)(param_3 + 8 + lVar20 * 0x18) != in_EAX);
  if (param_4 == *(long **)(unaff_RBP + 0x38)) {
LAB_082e9b50:
    puVar12 = &DAT_0f5d0810;
    if (iRam000000000f5d0870 != -0x2b3da790) goto LAB_082e9bbd;
LAB_082e9b7b:
    lVar20 = *(long *)(puVar12 + 0x68);
    if (lVar20 == 0) goto LAB_082e9bbd;
    bVar21 = (*(byte *)(lVar20 + 8) & 1) != 0;
    lVar15 = lVar20 + 9;
    if (bVar21) {
      lVar15 = *(long *)(lVar20 + 0x18);
    }
    uVar18 = (ulong)(*(byte *)(lVar20 + 8) >> 1);
    if (bVar21) {
      uVar18 = *(ulong *)(lVar20 + 0x10);
    }
    func_0x083c3be0(&stack0x00000158,unaff_RBP,lVar15,uVar18);
  }
  else {
    puVar12 = (undefined *)param_4[2];
    if (*(int *)(puVar12 + 0x60) == -0x2b3da790) goto LAB_082e9b7b;
LAB_082e9bbd:
    func_0x083c3be0(&stack0x00000158,unaff_RBP,&UNK_014cf43a,0x12);
  }
  if (in_stack_00000188 == '\0') {
    func_0x083c4740(&stack0x00000080,&stack0x00000158,&UNK_011d6fc6,6);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f116df8;
    if (in_stack_00000098 != (long *)0x0) {
      lVar20 = *in_stack_00000098;
      in_stack_00000098 = plVar13;
      (**(code **)(lVar20 + 8))();
      plVar13 = in_stack_00000098;
    }
    in_stack_00000098 = plVar13;
    func_0x048b05a0(in_stack_00000088,&stack0x00000000);
    func_0x083c49f0(&stack0x00000080);
    uVar6 = in_stack_00000178;
    uVar5 = in_stack_00000170;
    uVar4 = in_stack_00000168;
    uVar3 = in_stack_00000160;
    lVar20 = in_stack_00000158;
    iVar11 = iStack0000000000000180;
    uVar18 = _iStack0000000000000180 & 0xffffffff;
    uVar7 = uStack0000000000000184;
    in_stack_00000150 = in_stack_00000188;
    func_0x048b0bc0(&stack0x00000098);
    if ((DAT_0f5d0890 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5d0890), iVar10 != 0)) {
      func_0x083c3320();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d0810,0xf53dab8);
      func_0x0410844d(&DAT_0f5d0890);
    }
    lVar15 = lVar20 + 0x18;
    plVar13 = (long *)(*(long *)(lVar20 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar20 + 0x20) - *(long *)(lVar20 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5d0810 + 4)) * 8);
    do {
      lVar14 = *plVar13;
      if (lVar14 == -1) goto LAB_082e9dd0;
      plVar13 = (long *)(*(long *)(lVar20 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(lVar20 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d0810 + 4)
            );
    if (plVar13 == *(long **)(lVar20 + 0x38)) {
LAB_082e9dd0:
      puVar12 = &DAT_0f5d0810;
    }
    else {
      puVar12 = (undefined *)plVar13[2];
    }
    if ((1 < iVar11 - 1U) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_01310c02),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    in_stack_00000198 = uVar18;
    lVar14 = func_0x048b0c90(lVar15,puVar12,uVar7,1);
    if (lVar14 == 0) {
      _iStack0000000000000080 = (undefined *)0x0;
      in_stack_00000088 = (undefined8 *)0x0;
      func_0x048b0d20(&stack0x00000080);
      lVar14 = (long)_iStack0000000000000080;
    }
    *(undefined1 *)(*(long *)(lVar14 + 0x58) + 0xa8) = 4;
    in_stack_00000068._7_1_ = 0;
    func_0x082edcd0(&stack0x00000240,(long)&stack0x00000068 + 7);
    iVar11 = (int)in_stack_00000198;
    if (iVar11 == 4) {
      in_stack_00000078 = 0;
      in_stack_00000070 = 0;
      if ((DAT_0f5d0890 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5d0890), iVar11 != 0)) {
        func_0x083c3320();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d0810,0xf53dab8);
        func_0x0410844d(&DAT_0f5d0890);
      }
      plVar13 = (long *)(*(long *)(lVar20 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(lVar20 + 0x20) - *(long *)(lVar20 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f5d0810 + 4)) * 8);
      iVar11 = (int)in_stack_00000198;
      do {
        lVar14 = *plVar13;
        if (lVar14 == -1) goto LAB_082ea0b8;
        plVar13 = (long *)(*(long *)(lVar20 + 0x30) + lVar14 * 0x18);
      } while (*(uint *)(*(long *)(lVar20 + 0x30) + 8 + lVar14 * 0x18) !=
               *(uint *)(_DAT_0f5d0810 + 4));
      if (plVar13 == *(long **)(lVar20 + 0x38)) {
LAB_082ea0b8:
        puVar12 = &DAT_0f5d0810;
      }
      else {
        puVar12 = (undefined *)plVar13[2];
      }
      lVar15 = func_0x048b1040(lVar15,puVar12,uVar7,1);
      if (lVar15 == 0) {
        _iStack0000000000000080 = (undefined *)0x0;
        in_stack_00000088 = (undefined8 *)0x0;
        func_0x048b10d0(&stack0x00000080);
        lVar14 = *(long *)((long)_iStack0000000000000080 + 0x38);
        lVar15 = (long)_iStack0000000000000080;
        if (lVar14 == 0) goto LAB_082ea1a6;
LAB_082ea1cb:
        do {
          lVar15 = lVar14;
          lVar14 = *(long *)(lVar15 + 0x38);
          if (*(long *)(lVar15 + 0x38) == 0) {
            _iStack0000000000000080 = (undefined *)0x0;
            in_stack_00000088 = (undefined8 *)0x0;
            func_0x048b10d0(&stack0x00000080);
            lVar14 = (long)_iStack0000000000000080;
          }
        } while (lVar14 != 0);
      }
      else {
        lVar14 = *(long *)(lVar15 + 0x38);
        if (*(long *)(lVar15 + 0x38) != 0) goto LAB_082ea1cb;
LAB_082ea1a6:
        _iStack0000000000000080 = (undefined *)0x0;
        in_stack_00000088 = (undefined8 *)0x0;
        func_0x048b10d0(&stack0x00000080);
        lVar14 = (long)_iStack0000000000000080;
        if (_iStack0000000000000080 != (undefined *)0x0) goto LAB_082ea1cb;
      }
      lVar15 = *(long *)(lVar15 + 0x48);
      puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
      if (puVar16 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x38,0);
      }
LAB_082ea235:
      *(undefined1 *)(puVar16 + 3) = 0xff;
      *(undefined4 *)(puVar16 + 1) = 0xffffffff;
      *(undefined4 *)((long)puVar16 + 0xc) = 0xffffffff;
      *(undefined4 *)(puVar16 + 2) = 0;
      *(undefined4 *)((long)puVar16 + 0x14) = 0;
      *puVar16 = &UNK_0f4e3aa0;
      puVar16[4] = in_stack_00000070;
      puVar16[5] = in_stack_00000078;
      puVar16[6] = in_stack_00000078;
      plVar13 = *(long **)(lVar15 + 8);
      *(undefined8 **)(lVar15 + 8) = puVar16;
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x28))();
      }
    }
    else {
      in_stack_00000078 = 0;
      in_stack_00000070 = 0;
      if (iVar11 == 1) {
        if ((DAT_0f5d0890 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5d0890), iVar10 != 0)) {
          func_0x083c3320();
          func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d0810,0xf53dab8);
          func_0x0410844d(&DAT_0f5d0890);
        }
        plVar13 = (long *)(*(long *)(lVar20 + 0x18) +
                          (ulong)((int)((ulong)(*(long *)(lVar20 + 0x20) - *(long *)(lVar20 + 0x18))
                                       >> 3) - 1U & *(uint *)(_DAT_0f5d0810 + 4)) * 8);
        do {
          lVar14 = *plVar13;
          if (lVar14 == -1) goto LAB_082ea018;
          plVar13 = (long *)(*(long *)(lVar20 + 0x30) + lVar14 * 0x18);
        } while (*(uint *)(*(long *)(lVar20 + 0x30) + 8 + lVar14 * 0x18) !=
                 *(uint *)(_DAT_0f5d0810 + 4));
        if (plVar13 == *(long **)(lVar20 + 0x38)) {
LAB_082ea018:
          puVar12 = &DAT_0f5d0810;
        }
        else {
          puVar12 = (undefined *)plVar13[2];
        }
        lVar15 = func_0x048b0c90(lVar15,puVar12,uVar7,1);
        if (lVar15 == 0) {
          _iStack0000000000000080 = (undefined *)0x0;
          in_stack_00000088 = (undefined8 *)0x0;
          func_0x048b0d20(&stack0x00000080);
          lVar15 = (long)_iStack0000000000000080;
        }
        lVar15 = *(long *)(lVar15 + 0x58);
        puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
        if (puVar16 == (undefined8 *)0x0) {
          func_0x0eec74c0(0x38,0);
        }
        goto LAB_082ea235;
      }
    }
    cVar8 = in_stack_00000150;
    in_stack_00000078 = 0;
    in_stack_00000070 = 0;
    func_0x083c4740(&stack0x00000080,&stack0x000002f8,&UNK_0147d41f,4);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0ef42d08;
    if (in_stack_00000098 != (long *)0x0) {
      lVar15 = *in_stack_00000098;
      in_stack_00000098 = plVar13;
      (**(code **)(lVar15 + 8))();
      plVar13 = in_stack_00000098;
    }
    in_stack_00000098 = plVar13;
    func_0x048b05a0(in_stack_00000088,&stack0x00000000);
    func_0x083c49f0(&stack0x00000080);
    func_0x048b0bc0(&stack0x00000098);
    func_0x083c4740(&stack0x00000080,&stack0x00000420,&UNK_013b0d69,0xf);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f0e95d0;
    if (in_stack_00000098 != (long *)0x0) {
      lVar15 = *in_stack_00000098;
      in_stack_00000098 = plVar13;
      (**(code **)(lVar15 + 8))();
      plVar13 = in_stack_00000098;
    }
    in_stack_00000098 = plVar13;
    func_0x048b05a0(in_stack_00000088,&stack0x00000000);
    func_0x083c49f0(&stack0x00000080);
    func_0x048b0bc0(&stack0x00000098);
    func_0x083c4740(&stack0x00000080,&stack0x00000460,&UNK_011a18c3,0xb);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0ef44b00;
    if (in_stack_00000098 != (long *)0x0) {
      lVar15 = *in_stack_00000098;
      in_stack_00000098 = plVar13;
      (**(code **)(lVar15 + 8))();
      plVar13 = in_stack_00000098;
    }
    in_stack_00000098 = plVar13;
    func_0x048b05a0(in_stack_00000088,&stack0x00000000);
    func_0x083c49f0(&stack0x00000080);
    func_0x048b0bc0(&stack0x00000098);
    func_0x083c4740(&stack0x00000080,&stack0x000004a0,&UNK_012788da,8);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0ef44b00;
    if (in_stack_00000098 != (long *)0x0) {
      lVar15 = *in_stack_00000098;
      in_stack_00000098 = plVar13;
      (**(code **)(lVar15 + 8))();
      plVar13 = in_stack_00000098;
    }
    in_stack_00000098 = plVar13;
    func_0x048b05a0(in_stack_00000088,&stack0x00000000);
    func_0x083c49f0(&stack0x00000080);
    func_0x048b0bc0(&stack0x00000098);
    func_0x083c4740(&stack0x00000080,&stack0x000004e0,&UNK_011a3689,0x12);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0ef44b00;
    if (in_stack_00000098 != (long *)0x0) {
      lVar15 = *in_stack_00000098;
      in_stack_00000098 = plVar13;
      (**(code **)(lVar15 + 8))();
      plVar13 = in_stack_00000098;
    }
    in_stack_00000098 = plVar13;
    func_0x048b05a0(in_stack_00000088,&stack0x00000000);
    func_0x083c49f0(&stack0x00000080);
    func_0x048b0bc0(&stack0x00000098);
    func_0x083c4740(&stack0x00000080,&stack0x00000330,&UNK_01397b69,0xe);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f0eabc8;
    if (in_stack_00000098 != (long *)0x0) {
      lVar15 = *in_stack_00000098;
      in_stack_00000098 = plVar13;
      (**(code **)(lVar15 + 8))();
      plVar13 = in_stack_00000098;
    }
    in_stack_00000098 = plVar13;
    func_0x048b05a0(in_stack_00000088,&stack0x00000000);
    func_0x083c49f0(&stack0x00000080);
    func_0x048b0bc0(&stack0x00000098);
    if ((DAT_0f5d0890 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5d0890), iVar10 != 0)) {
      func_0x083c3320();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d0810,0xf53dab8);
      func_0x0410844d(&DAT_0f5d0890);
    }
    plVar13 = (long *)(*(long *)(lVar20 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar20 + 0x20) - *(long *)(lVar20 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5d0810 + 4)) * 8);
    do {
      lVar15 = *plVar13;
      if (lVar15 == -1) goto LAB_082ead10;
      plVar13 = (long *)(*(long *)(lVar20 + 0x30) + lVar15 * 0x18);
    } while (*(uint *)(*(long *)(lVar20 + 0x30) + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f5d0810 + 4)
            );
    if (plVar13 == *(long **)(lVar20 + 0x38)) {
LAB_082ead10:
      puVar12 = &DAT_0f5d0810;
    }
    else {
      puVar12 = (undefined *)plVar13[2];
    }
    if ((1 < iVar11 - 1U) &&
       (cVar9 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_01310c02),
       cVar9 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    lVar15 = func_0x048b0c90(lVar20 + 0x18,puVar12,uVar7,1);
    if (lVar15 == 0) {
      _iStack0000000000000080 = (undefined *)0x0;
      in_stack_00000088 = (undefined8 *)0x0;
      func_0x048b0d20(&stack0x00000080);
      lVar15 = (long)_iStack0000000000000080;
    }
    *(undefined1 *)(*(long *)(lVar15 + 0x58) + 0xa8) = 4;
    func_0x083c4740(&stack0x00000080,&stack0x000003a8,&UNK_0120d8e0,0xf);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f10aa08;
    if (in_stack_00000098 != (long *)0x0) {
      lVar15 = *in_stack_00000098;
      in_stack_00000098 = plVar13;
      (**(code **)(lVar15 + 8))();
      plVar13 = in_stack_00000098;
    }
    in_stack_00000098 = plVar13;
    func_0x048b05a0(in_stack_00000088,&stack0x00000000);
    func_0x083c49f0(&stack0x00000080);
    func_0x048b0bc0(&stack0x00000098);
    func_0x083c4740(&stack0x00000080,&stack0x00000370,&UNK_011be4df,10);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0ef46ef8;
    if (in_stack_00000098 != (long *)0x0) {
      lVar15 = *in_stack_00000098;
      in_stack_00000098 = plVar13;
      (**(code **)(lVar15 + 8))();
      plVar13 = in_stack_00000098;
    }
    in_stack_00000098 = plVar13;
    func_0x048b05a0(in_stack_00000088,&stack0x00000000);
    func_0x083c49f0(&stack0x00000080);
    func_0x048b0bc0(&stack0x00000098);
    func_0x083c4740(&stack0x00000080,&stack0x000002c0,&UNK_013e50f7,7);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0ef46ef8;
    if (in_stack_00000098 != (long *)0x0) {
      lVar15 = *in_stack_00000098;
      in_stack_00000098 = plVar13;
      (**(code **)(lVar15 + 8))();
      plVar13 = in_stack_00000098;
    }
    in_stack_00000098 = plVar13;
    func_0x048b05a0(in_stack_00000088,&stack0x00000000);
    func_0x083c49f0(&stack0x00000080);
    in_stack_000001c8 = CONCAT44(uVar7,iVar11);
    in_stack_000001a0 = lVar20;
    in_stack_000001a8 = (long *)uVar3;
    uStack00000000000001b0 = (int)uVar4;
    uStack00000000000001b4 = (int)((ulong)uVar4 >> 0x20);
    in_stack_000001b8 = uVar5;
    in_stack_000001c0 = uVar6;
    in_stack_000001d0 = cVar8;
    func_0x048b0bc0(&stack0x00000098);
    func_0x083c4740(&stack0x00000080,&stack0x000001a0,&UNK_011a369c,0xc);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0ef46ef8;
    if (in_stack_00000098 != (long *)0x0) {
      lVar20 = *in_stack_00000098;
      in_stack_00000098 = plVar13;
      (**(code **)(lVar20 + 8))();
      plVar13 = in_stack_00000098;
    }
    in_stack_00000098 = plVar13;
    func_0x048b05a0(in_stack_00000088,&stack0x00000000);
    func_0x083c49f0(&stack0x00000080);
    in_stack_000001f0 = (long *)CONCAT44(uStack00000000000001b4,uStack00000000000001b0);
    in_stack_000001f8 = in_stack_000001b8;
    in_stack_000001e0 = in_stack_000001a0;
    in_stack_000001e8 = in_stack_000001a8;
    func_0x048b0bc0(&stack0x00000098);
    func_0x083c4740(&stack0x00000080,&stack0x000001e0,&UNK_013cad4a,0xc);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f011c18;
    if (in_stack_00000098 != (long *)0x0) {
      lVar20 = *in_stack_00000098;
      in_stack_00000098 = plVar13;
      (**(code **)(lVar20 + 8))();
      plVar13 = in_stack_00000098;
    }
    in_stack_00000098 = plVar13;
    unaff_retaddr = uStack0000000000000090;
    param_7 = 0;
    param_8 = param_8 & 0xffffffff00000000;
    param_9 = 1;
    func_0x048b05a0(in_stack_00000088,&stack0x00000000);
    func_0x083c49f0(&stack0x00000080);
    func_0x048b0bc0(&stack0x00000098);
    if (in_stack_00000070 != 0) {
      func_0x0412a280(in_stack_00000070,in_stack_00000078 - in_stack_00000070);
    }
  }
  if ((DAT_0f5d05b0 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5d05b0), iVar11 != 0)) {
    func_0x083bae90();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d0530,0xf53dab8);
    func_0x0410844d(&DAT_0f5d05b0);
  }
  plVar13 = (long *)(*(long *)(unaff_RBP + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(unaff_RBP + 0x20) - *(long *)(unaff_RBP + 0x18))
                                 >> 3) - 1U & *(uint *)(_DAT_0f5d0530 + 4)) * 8);
  do {
    lVar20 = *plVar13;
    if (lVar20 == -1) goto LAB_082eb5f0;
    plVar13 = (long *)(*(long *)(unaff_RBP + 0x30) + lVar20 * 0x18);
  } while (*(uint *)(*(long *)(unaff_RBP + 0x30) + 8 + lVar20 * 0x18) !=
           *(uint *)(_DAT_0f5d0530 + 4));
  if (plVar13 == *(long **)(unaff_RBP + 0x38)) {
LAB_082eb5f0:
    puVar12 = &DAT_0f5d0530;
    if (iRam000000000f5d0590 != -0x2b3da790) goto LAB_082eb65d;
LAB_082eb61b:
    lVar20 = *(long *)(puVar12 + 0x68);
    if (lVar20 == 0) goto LAB_082eb65d;
    bVar21 = (*(byte *)(lVar20 + 8) & 1) != 0;
    lVar15 = lVar20 + 9;
    if (bVar21) {
      lVar15 = *(long *)(lVar20 + 0x18);
    }
    uVar18 = (ulong)(*(byte *)(lVar20 + 8) >> 1);
    if (bVar21) {
      uVar18 = *(ulong *)(lVar20 + 0x10);
    }
    func_0x083c7800(&stack0x00000158,unaff_RBP,lVar15,uVar18);
    lVar20 = in_stack_00000158;
  }
  else {
    puVar12 = (undefined *)plVar13[2];
    if (*(int *)(puVar12 + 0x60) == -0x2b3da790) goto LAB_082eb61b;
LAB_082eb65d:
    func_0x083c7800(&stack0x00000158,unaff_RBP,&UNK_011f38dd,0x17);
    lVar20 = in_stack_00000158;
  }
  if (in_stack_00000188 != '\0') {
    return;
  }
  in_stack_00000158 = lVar20;
  if ((DAT_0f5d08e0 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5d08e0), iVar11 != 0)) {
    func_0x083c8550();
    func_0x0410844d(&DAT_0f5d08e0);
  }
  if ((DAT_0f5d08e0 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5d08e0), iVar11 != 0)) {
    func_0x083c8550();
    func_0x0410844d(&DAT_0f5d08e0);
  }
  _iStack0000000000000080 = &DAT_0f5d08c8;
  in_stack_00000088 = (undefined8 *)CONCAT44(in_stack_00000088._4_4_,_DAT_0f5d08cc);
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
  func_0x048aee30(&stack0x00000000,lVar20 + 0x18,&stack0x00000080,0x38b50978);
  lVar20 = in_stack_000000f8;
  in_stack_000000f8 = 0;
  if (lVar20 != 0) {
    func_0x048ae940(lVar20);
    func_0x0412a280(lVar20,0x78);
  }
  plVar13 = in_stack_000000f0;
  if (in_stack_000000f0 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_000000f0 + 1;
    lVar20 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*in_stack_000000f0 + 0x10))(in_stack_000000f0);
      func_0x0412c2d0(plVar13);
    }
  }
  if (param_9._4_4_ == 2) {
    piVar17 = *(int **)(*(long *)(param_8 + 0x78) + 0x60);
    iVar11 = *piVar17;
    while (iVar11 != (int)param_9) {
      piVar17 = piVar17 + 0x16;
      iVar11 = *piVar17;
    }
    lVar20 = *(long *)(piVar17 + 0xc);
    while (lVar20 != param_7) {
      piVar17 = *(int **)(piVar17 + 0xe);
      lVar20 = *(long *)(piVar17 + 0xc);
    }
LAB_082eb83f:
    *(byte *)((long)piVar17 + 0x12) = *(byte *)((long)piVar17 + 0x12) | 1;
  }
  else {
    if (param_9._4_4_ == 1) {
      piVar17 = *(int **)(*(long *)(param_8 + 0x78) + 0x48);
      iVar11 = *piVar17;
      while (iVar11 != (int)param_9) {
        piVar17 = piVar17 + 0x1a;
        iVar11 = *piVar17;
      }
      goto LAB_082eb83f;
    }
    if (param_9._4_4_ == 0) {
      *(uint *)(param_8 + 0x18) = *(uint *)(param_8 + 0x18) | 0x10000;
    }
  }
  _uStack0000000000000090 = param_8;
  in_stack_00000098 = (long *)param_9;
  _iStack0000000000000080 = (undefined *)CONCAT44(unaff_retaddr_00,unaff_retaddr);
  in_stack_00000088 = (undefined8 *)param_7;
  if ((DAT_0f5af3d0 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5af3d0), iVar11 != 0)) {
    func_0x07786a90(0xf5af3b8);
    func_0x0410844d(&DAT_0f5af3d0);
  }
  in_stack_000001e0 = CONCAT44(in_stack_000001e0._4_4_,_DAT_0f5af3bc);
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (plVar13 == (long *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  plVar13[1] = 0;
  plVar13[2] = 0;
  *plVar13 = (long)&UNK_0f0e9768;
  in_stack_000001e8 = plVar13 + 3;
  plVar13[3] = (long)&UNK_083bcbb0;
  plVar13[4] = 0x6e6f697463410c;
  plVar13[5] = 0;
  plVar13[6] = 0;
  in_stack_000001a0 = 0;
  in_stack_000001a8 = (long *)0x0;
  in_stack_000001f0 = plVar13;
  func_0x048afd20(&stack0x00000080,&stack0x000001e0);
  plVar13 = in_stack_000001f0;
  if (in_stack_000001f0 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_000001f0 + 1;
    lVar20 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*in_stack_000001f0 + 0x10))(in_stack_000001f0);
      func_0x0412c2d0(plVar13);
    }
  }
  plVar13 = in_stack_000001a8;
  if (in_stack_000001a8 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_000001a8 + 1;
    lVar20 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*in_stack_000001a8 + 0x10))(in_stack_000001a8);
      func_0x0412c2d0(plVar13);
    }
  }
  if ((DAT_0f5d0518 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5d0518), iVar11 != 0)) {
    func_0x083ba330();
    func_0x0410844d(&DAT_0f5d0518);
  }
  lVar20 = in_stack_00000158;
  _iStack0000000000000180 = 0xdcaca29300000001;
  if ((DAT_0f5d05b0 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5d05b0), iVar11 != 0)) {
    func_0x083bae90();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d0530,0xf53dab8);
    func_0x0410844d(&DAT_0f5d05b0);
  }
  in_stack_00000088 = (undefined8 *)(lVar20 + 0x18);
  plVar13 = (long *)(*(long *)(lVar20 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar20 + 0x20) - *(long *)(lVar20 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f5d0530 + 4)) * 8);
  do {
    lVar15 = *plVar13;
    if (lVar15 == -1) goto LAB_082eb9f0;
    plVar13 = (long *)(*(long *)(lVar20 + 0x30) + lVar15 * 0x18);
  } while (*(uint *)(*(long *)(lVar20 + 0x30) + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f5d0530 + 4));
  if (plVar13 == *(long **)(lVar20 + 0x38)) {
LAB_082eb9f0:
    _iStack0000000000000080 = &DAT_0f5d0530;
  }
  else {
    _iStack0000000000000080 = (undefined *)plVar13[2];
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
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar16 = &UNK_0f116fd0;
  if (in_stack_00000098 != (long *)0x0) {
    lVar20 = *in_stack_00000098;
    in_stack_00000098 = puVar16;
    (**(code **)(lVar20 + 8))();
    puVar16 = in_stack_00000098;
  }
  in_stack_00000098 = puVar16;
  func_0x048b05a0(in_stack_00000088,&stack0x00000000);
  puVar16 = in_stack_00000088;
  if ((DAT_0f550a20 == '\0') && (iVar11 = func_0x04108328(&DAT_0f550a20), iVar11 != 0)) {
    func_0x048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar13 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  lVar20 = in_stack_000000a0;
  puVar2 = in_stack_00000098;
  plVar13[1] = 0;
  plVar13[2] = 0;
  *plVar13 = (long)&UNK_0ef439d0;
  in_stack_00000098 = (long *)0x0;
  in_stack_000000a0 = 0;
  plVar13[3] = (long)puVar2;
  plVar13[4] = lVar20;
  plVar13[7] = in_stack_000000b8;
  plVar13[5] = (long)in_stack_000000a8;
  plVar13[6] = (long)in_stack_000000b0;
  in_stack_000000a8 = (undefined *)0x0;
  in_stack_000000b0 = (undefined *)0x0;
  in_stack_000000b8 = 0;
  plVar13[10] = (long)in_stack_000000d0;
  plVar13[8] = (long)in_stack_000000c0;
  plVar13[9] = in_stack_000000c8;
  in_stack_000000c0 = (undefined *)0x0;
  in_stack_000000c8 = 0;
  in_stack_000000d0 = (undefined *)0x0;
  plVar13[0xb] = (long)in_stack_000000d8;
  plVar13[0xc] = in_stack_000000e0;
  plVar13[0xd] = in_stack_000000e8;
  in_stack_000000d8 = (undefined *)0x0;
  in_stack_000000e0 = 0;
  in_stack_000000e8 = 0;
  plVar13[0xe] = (long)in_stack_000000f0;
  plVar13[0xf] = in_stack_000000f8;
  plVar13[0x10] = in_stack_00000100;
  in_stack_000000f0 = (long *)0x0;
  in_stack_000000f8 = 0;
  in_stack_00000100 = 0;
  *(undefined4 *)(plVar13 + 0x11) = in_stack_00000108;
  plVar13[0x12] = in_stack_00000110;
  plVar13[0x13] = in_stack_00000118;
  plVar13[0x14] = in_stack_00000120;
  in_stack_00000110 = 0;
  in_stack_00000118 = 0;
  in_stack_00000120 = 0;
  plVar13[0x17] = in_stack_00000138;
  *(undefined4 *)(plVar13 + 0x15) = uStack0000000000000128;
  *(undefined4 *)((long)plVar13 + 0xac) = uStack000000000000012c;
  *(undefined4 *)(plVar13 + 0x16) = uStack0000000000000130;
  *(undefined4 *)((long)plVar13 + 0xb4) = uStack0000000000000134;
  _uStack0000000000000128 = 0;
  _uStack0000000000000130 = 0;
  in_stack_00000138 = 0;
  *(ulong *)((long)plVar13 + 0xc5) =
       CONCAT17(uStack000000000000014c,CONCAT43(in_stack_00000148,uStack0000000000000144._1_3_));
  plVar13[0x18] =
       CONCAT44(uStack0000000000000144,CONCAT22(uStack0000000000000142,uStack0000000000000140));
  in_stack_000001e0 = 0;
  in_stack_000001e8 = (long *)0x0;
  func_0x048afd20(puVar16,&stack0x00000000);
  if (plVar13 != (long *)0x0) {
    LOCK();
    plVar1 = plVar13 + 1;
    lVar20 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      func_0x0412c2d0(plVar13);
    }
  }
  plVar13 = in_stack_000001e8;
  if (in_stack_000001e8 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_000001e8 + 1;
    lVar20 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*in_stack_000001e8 + 0x10))(in_stack_000001e8);
      func_0x0412c2d0(plVar13);
    }
  }
  lVar20 = puVar16[2];
  iVar11 = *(int *)((long)puVar16 + 0x1c);
  if (iVar11 == 2) {
    piVar17 = *(int **)(*(long *)(lVar20 + 0x78) + 0x60);
    iVar11 = *piVar17;
    while (iVar11 != *(int *)(puVar16 + 3)) {
      piVar17 = piVar17 + 0x16;
      iVar11 = *piVar17;
    }
    for (; *(long *)(piVar17 + 0xc) != puVar16[1]; piVar17 = *(int **)(piVar17 + 0xe)) {
    }
LAB_082ebf1a:
    piVar17[4] = piVar17[4] | iStack0000000000000080 << 0x10;
  }
  else {
    if (iVar11 == 1) {
      piVar17 = *(int **)(*(long *)(lVar20 + 0x78) + 0x48);
      iVar11 = *piVar17;
      while (iVar11 != *(int *)(puVar16 + 3)) {
        piVar17 = piVar17 + 0x1a;
        iVar11 = *piVar17;
      }
      goto LAB_082ebf1a;
    }
    if (iVar11 == 0) {
      *(uint *)(lVar20 + 0x18) = *(uint *)(lVar20 + 0x18) | iStack0000000000000080 << 0x10;
    }
  }
  func_0x048b0bc0(&stack0x00000098);
  lVar20 = in_stack_00000158;
  uVar5 = uStack0000000000000184;
  if (iStack0000000000000180 != 4) {
    if (iStack0000000000000180 != 1) {
      return;
    }
    if ((DAT_0f5d05b0 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5d05b0), iVar11 != 0)) {
      func_0x083bae90();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d0530,0xf53dab8);
      func_0x0410844d(&DAT_0f5d05b0);
    }
    plVar13 = (long *)(*(long *)(lVar20 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar20 + 0x20) - *(long *)(lVar20 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5d0530 + 4)) * 8);
    do {
      lVar15 = *plVar13;
      if (lVar15 == -1) goto LAB_082ebfb9;
      plVar13 = (long *)(*(long *)(lVar20 + 0x30) + lVar15 * 0x18);
    } while (*(uint *)(*(long *)(lVar20 + 0x30) + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f5d0530 + 4)
            );
    if (plVar13 == *(long **)(lVar20 + 0x38)) {
LAB_082ebfb9:
      puVar12 = &DAT_0f5d0530;
    }
    else {
      puVar12 = (undefined *)plVar13[2];
    }
    uVar18 = func_0x048b0c90(lVar20 + 0x18,puVar12,uVar5,1);
    if (uVar18 == 0) {
      _iStack0000000000000080 = (undefined *)0x0;
      in_stack_00000088 = (undefined8 *)0x0;
      func_0x048b0d20(&stack0x00000080);
      uVar18 = (ulong)_iStack0000000000000080;
    }
    lVar20 = *(long *)(uVar18 + 0x58);
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar16 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
    goto LAB_082ec1a4;
  }
  if ((DAT_0f5d05b0 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5d05b0), iVar11 != 0)) {
    func_0x083bae90();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d0530,0xf53dab8);
    func_0x0410844d(&DAT_0f5d05b0);
  }
  plVar13 = (long *)(*(long *)(lVar20 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar20 + 0x20) - *(long *)(lVar20 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f5d0530 + 4)) * 8);
  do {
    lVar15 = *plVar13;
    if (lVar15 == -1) goto LAB_082ec039;
    plVar13 = (long *)(*(long *)(lVar20 + 0x30) + lVar15 * 0x18);
  } while (*(uint *)(*(long *)(lVar20 + 0x30) + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f5d0530 + 4));
  if (plVar13 == *(long **)(lVar20 + 0x38)) {
LAB_082ec039:
    puVar12 = &DAT_0f5d0530;
  }
  else {
    puVar12 = (undefined *)plVar13[2];
  }
  uVar18 = func_0x048b1040(lVar20 + 0x18,puVar12,uVar5,1);
  if (uVar18 == 0) {
    _iStack0000000000000080 = (undefined *)0x0;
    in_stack_00000088 = (undefined8 *)0x0;
    func_0x048b10d0(&stack0x00000080);
    uVar19 = *(ulong *)((long)_iStack0000000000000080 + 0x38);
    uVar18 = (ulong)_iStack0000000000000080;
    if (uVar19 == 0) goto LAB_082ec119;
LAB_082ec13e:
    do {
      uVar18 = uVar19;
      uVar19 = *(ulong *)(uVar18 + 0x38);
      if (*(ulong *)(uVar18 + 0x38) == 0) {
        _iStack0000000000000080 = (undefined *)0x0;
        in_stack_00000088 = (undefined8 *)0x0;
        func_0x048b10d0(&stack0x00000080);
        uVar19 = (ulong)_iStack0000000000000080;
      }
    } while (uVar19 != 0);
  }
  else {
    uVar19 = *(ulong *)(uVar18 + 0x38);
    if (*(ulong *)(uVar18 + 0x38) != 0) goto LAB_082ec13e;
LAB_082ec119:
    _iStack0000000000000080 = (undefined *)0x0;
    in_stack_00000088 = (undefined8 *)0x0;
    func_0x048b10d0(&stack0x00000080);
    uVar19 = (ulong)_iStack0000000000000080;
    if (_iStack0000000000000080 != (undefined *)0x0) goto LAB_082ec13e;
  }
  lVar20 = *(long *)(uVar18 + 0x48);
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
LAB_082ec1a4:
  puVar16[1] = 1000;
  puVar16[2] = 0;
  *(undefined1 *)(puVar16 + 3) = 0xff;
  *puVar16 = &UNK_0f4e3cf0;
  puVar16[4] = 0;
  puVar16[5] = 0;
  *(undefined8 *)((long)puVar16 + 0x29) = 0;
  *(undefined8 *)((long)puVar16 + 0x31) = 0;
  plVar13 = *(long **)(lVar20 + 8);
  *(undefined8 **)(lVar20 + 8) = puVar16;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x28))();
  }
  return;
}


