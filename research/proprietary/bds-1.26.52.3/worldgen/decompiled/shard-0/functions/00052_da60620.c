/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xda60620
 * Label: callee-of:0xda370f0
 * Body:  [[0da60620, 0da60b21] [0da60b30, 0da60f1d] [0da60f20, 0da613c5] [0da613d0, 0da61404] [0da61410, 0da62368] [0da62370, 0da62cbd] [0da62ce0, 0da62d12] [0da62e09, 0da62e39] [0da62e74, 0da62f2c]]
 * Ghidra: FUN_0da60620
 */


/* WARNING: Removing unreachable block (ram,0x0da62b99) */
/* WARNING: Removing unreachable block (ram,0x0da62a52) */
/* WARNING: Removing unreachable block (ram,0x0da629db) */
/* WARNING: Removing unreachable block (ram,0x0da628b4) */
/* WARNING: Removing unreachable block (ram,0x0da628c7) */
/* WARNING: Removing unreachable block (ram,0x0da62490) */
/* WARNING: Removing unreachable block (ram,0x0da624a2) */
/* WARNING: Removing unreachable block (ram,0x0da6288e) */
/* WARNING: Removing unreachable block (ram,0x0da6290c) */
/* WARNING: Removing unreachable block (ram,0x0da62a01) */
/* WARNING: Removing unreachable block (ram,0x0da62a13) */
/* WARNING: Removing unreachable block (ram,0x0da62b68) */
/* WARNING: Removing unreachable block (ram,0x0da62bfb) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0da60620(undefined8 param_1,long param_2,long param_3,uint param_4)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 uVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  ulong *puVar16;
  undefined4 *puVar17;
  long *plVar18;
  int *piVar19;
  long *plVar20;
  long lVar21;
  int unaff_EBP;
  undefined *puVar22;
  byte *pbVar23;
  byte *pbVar24;
  long unaff_R14;
  long unaff_R15;
  undefined8 in_stack_00000020;
  undefined *in_stack_00000028;
  undefined1 *in_stack_00000030;
  undefined1 *in_stack_00000038;
  undefined *in_stack_00000040;
  undefined *in_stack_00000048;
  long *in_stack_00000050;
  long in_stack_00000058;
  long *in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  long in_stack_00000078;
  int iStack0000000000000080;
  ulong *puVar25;
  undefined1 uStack0000000000000098;
  undefined7 uStack0000000000000099;
  undefined4 uStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  undefined4 uStack00000000000000a8;
  char cStack00000000000000ac;
  undefined3 uStack00000000000000ad;
  long in_stack_000000b0;
  long in_stack_000000b8;
  undefined1 in_stack_000000c0;
  undefined7 uStack00000000000000c1;
  undefined1 uStack00000000000000c8;
  undefined2 uStack00000000000000c9;
  undefined1 uStack00000000000000cb;
  undefined4 uStack00000000000000cc;
  long *in_stack_000000d0;
  long in_stack_000000d8;
  undefined4 uStack00000000000000e0;
  undefined4 uStack00000000000000e4;
  undefined4 uStack00000000000000e8;
  undefined4 uStack00000000000000ec;
  long in_stack_000000f0;
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
  byte bStack0000000000000150;
  undefined7 uStack0000000000000151;
  undefined8 in_stack_00000160;
  ulong in_stack_00000178;
  ulong in_stack_00000180;
  ulong in_stack_00000188;
  ulong in_stack_00000190;
  ulong in_stack_00000198;
  ulong in_stack_000001a0;
  undefined2 in_stack_000001a8;
  ulong in_stack_000001b0;
  undefined *in_stack_000001b8;
  undefined *in_stack_000001c0;
  uint in_stack_000001d0;
  undefined4 uStack00000000000001d4;
  undefined1 in_stack_000001d8;
  undefined2 uStack00000000000001d9;
  undefined1 uStack00000000000001db;
  undefined4 uStack00000000000001dc;
  undefined4 uStack00000000000001e0;
  undefined4 uStack00000000000001e4;
  undefined4 in_stack_000001e8;
  undefined4 in_stack_000001f0;
  undefined4 in_stack_000001f8;
  undefined4 in_stack_00000240;
  undefined4 in_stack_00000244;
  int in_stack_00000268;
  undefined4 in_stack_0000026c;
  char in_stack_00000270;
  undefined4 in_stack_00000340;
  undefined4 in_stack_00000344;
  ulong in_stack_00000348;
  ulong in_stack_00000350;
  undefined8 in_stack_00000378;
  ulong in_stack_00000380;
  undefined4 in_stack_000003c0;
  uint in_stack_000003c4;
  ulong in_stack_000004a0;
  ulong uVar26;
  undefined8 in_stack_000004a8;
  undefined8 uVar27;
  long in_stack_000004b0;
  long lVar28;
  long lVar29;
  ulong in_stack_00000620;
  undefined8 in_stack_00000628;
  long in_stack_00000630;
  
  plVar14 = (long *)(param_3 +
                    (ulong)((int)((ulong)(param_2 - param_3) >> 3) + unaff_EBP & param_4) * 8);
  do {
    lVar15 = *plVar14;
    if (lVar15 == -1) goto LAB_0da60660;
    plVar14 = (long *)(*(long *)(unaff_R15 + 0x30) + lVar15 * 0x18);
  } while (*(uint *)(*(long *)(unaff_R15 + 0x30) + 8 + lVar15 * 0x18) != param_4);
  if (plVar14 == *(long **)(unaff_R15 + 0x38)) {
LAB_0da60660:
    _iStack0000000000000080 = &DAT_0f732708;
  }
  else {
    _iStack0000000000000080 = (undefined *)plVar14[2];
  }
  func_0x0ed621a0(&stack0x00000080,in_stack_0000026c);
  _iStack0000000000000080 = (undefined *)CONCAT62(stack0x00000082,1);
  _uStack0000000000000098 = (code *)0x0;
  _uStack00000000000000a0 = (code *)0x0;
  _uStack00000000000000a8 = 0;
  in_stack_000000b0 = 0;
  in_stack_000000b8 = 0;
  in_stack_000000c0 = 0x14;
  uStack00000000000000c1 = 0x6669746e656469;
  uStack00000000000000c8 = 0x69;
  uStack00000000000000c9 = 0x7265;
  uStack00000000000000cb = 0;
  in_stack_000000d8 = 0;
  _uStack00000000000000e0 = 0;
  _uStack00000000000000e8 = 0;
  in_stack_000000f0 = 0;
  in_stack_000000f8 = 0;
  in_stack_00000100 = 0;
  in_stack_00000108 = 0x3f600000;
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
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar13 = &UNK_0ef44b00;
  if (_uStack0000000000000098 != (code *)0x0) {
    lVar15 = *(long *)_uStack0000000000000098;
    _uStack0000000000000098 = (code *)puVar13;
    (**(code **)(lVar15 + 8))();
    puVar13 = (undefined8 *)_uStack0000000000000098;
  }
  _uStack0000000000000098 = (code *)puVar13;
  in_stack_00000020 = 0;
  in_stack_00000028 = &UNK_048b3f30;
  in_stack_00000030 = &SUB_048b06d0;
  in_stack_00000038 = &SUB_048b2190;
  in_stack_00000040 = &UNK_0daa8e30;
  in_stack_00000048 = &UNK_0daa8ff0;
  in_stack_00000050 = (long *)((ulong)in_stack_00000050 & 0xffffffff00000000);
  in_stack_00000058 = 0;
  in_stack_00000060 = (long *)0x0;
  func_0x048b05a0(unaff_R14,&stack0x00000000);
  plVar14 = in_stack_00000060;
  if (in_stack_00000060 != (long *)0x0) {
    LOCK();
    plVar18 = in_stack_00000060 + 1;
    lVar15 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*in_stack_00000060 + 0x10))(in_stack_00000060);
      func_0x0412c2d0(plVar14);
    }
  }
  if ((DAT_0f550a20 == '\0') && (iVar11 = func_0x04108328(&DAT_0f550a20), iVar11 != 0)) {
    func_0x048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  lVar15 = (long)_uStack00000000000000a0;
  puVar13 = (undefined8 *)_uStack0000000000000098;
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0ef439d0;
  _uStack0000000000000098 = (code *)0x0;
  _uStack00000000000000a0 = (code *)0x0;
  plVar14[3] = (long)puVar13;
  plVar14[4] = lVar15;
  plVar14[7] = in_stack_000000b8;
  plVar14[5] = _uStack00000000000000a8;
  plVar14[6] = in_stack_000000b0;
  _uStack00000000000000a8 = 0;
  in_stack_000000b0 = 0;
  in_stack_000000b8 = 0;
  plVar14[10] = (long)in_stack_000000d0;
  plVar14[8] = CONCAT71(uStack00000000000000c1,in_stack_000000c0);
  plVar14[9] = CONCAT44(uStack00000000000000cc,
                        CONCAT13(uStack00000000000000cb,
                                 CONCAT21(uStack00000000000000c9,uStack00000000000000c8)));
  in_stack_000000c0 = 0;
  uStack00000000000000c1 = 0;
  uStack00000000000000c8 = 0;
  uStack00000000000000c9 = 0;
  uStack00000000000000cb = 0;
  uStack00000000000000cc = 0;
  in_stack_000000d0 = (long *)0x0;
  plVar14[0xb] = in_stack_000000d8;
  plVar14[0xc] = _uStack00000000000000e0;
  plVar14[0xd] = _uStack00000000000000e8;
  in_stack_000000d8 = 0;
  _uStack00000000000000e0 = 0;
  _uStack00000000000000e8 = 0;
  plVar14[0xe] = in_stack_000000f0;
  plVar14[0xf] = in_stack_000000f8;
  plVar14[0x10] = in_stack_00000100;
  in_stack_000000f0 = 0;
  in_stack_000000f8 = 0;
  in_stack_00000100 = 0;
  *(undefined4 *)(plVar14 + 0x11) = in_stack_00000108;
  plVar14[0x12] = in_stack_00000110;
  plVar14[0x13] = in_stack_00000118;
  plVar14[0x14] = in_stack_00000120;
  in_stack_00000110 = 0;
  in_stack_00000118 = 0;
  in_stack_00000120 = 0;
  plVar14[0x17] = in_stack_00000138;
  *(undefined4 *)(plVar14 + 0x15) = uStack0000000000000128;
  *(undefined4 *)((long)plVar14 + 0xac) = uStack000000000000012c;
  *(undefined4 *)(plVar14 + 0x16) = uStack0000000000000130;
  *(undefined4 *)((long)plVar14 + 0xb4) = uStack0000000000000134;
  _uStack0000000000000128 = 0;
  _uStack0000000000000130 = 0;
  in_stack_00000138 = 0;
  *(ulong *)((long)plVar14 + 0xc5) =
       CONCAT17(uStack000000000000014c,CONCAT43(in_stack_00000148,uStack0000000000000144._1_3_));
  plVar14[0x18] =
       CONCAT44(uStack0000000000000144,CONCAT22(uStack0000000000000142,uStack0000000000000140));
  in_stack_000001d0 = 0;
  uStack00000000000001d4 = 0;
  in_stack_000001d8 = 0;
  uStack00000000000001d9 = 0;
  uStack00000000000001db = 0;
  uStack00000000000001dc = 0;
  func_0x048afd20(unaff_R14,&stack0x00000000);
  if (plVar14 != (long *)0x0) {
    LOCK();
    plVar18 = plVar14 + 1;
    lVar15 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      func_0x0412c2d0(plVar14);
    }
  }
  plVar14 = (long *)CONCAT44(uStack00000000000001dc,
                             CONCAT13(uStack00000000000001db,
                                      CONCAT21(uStack00000000000001d9,in_stack_000001d8)));
  if (plVar14 != (long *)0x0) {
    LOCK();
    plVar18 = plVar14 + 1;
    lVar15 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      func_0x0412c2d0(plVar14);
    }
  }
  lVar15 = *(long *)(unaff_R14 + 0x10);
  iVar11 = *(int *)(unaff_R14 + 0x1c);
  if (iVar11 == 2) {
    piVar19 = *(int **)(*(long *)(lVar15 + 0x78) + 0x60);
    iVar11 = *piVar19;
    while (iVar11 != *(int *)(unaff_R14 + 0x18)) {
      piVar19 = piVar19 + 0x16;
      iVar11 = *piVar19;
    }
    for (; *(long *)(piVar19 + 0xc) != *(long *)(unaff_R14 + 8); piVar19 = *(int **)(piVar19 + 0xe))
    {
    }
LAB_0da60b3a:
    piVar19[4] = piVar19[4] | iStack0000000000000080 << 0x10;
  }
  else {
    if (iVar11 == 1) {
      piVar19 = *(int **)(*(long *)(lVar15 + 0x78) + 0x48);
      iVar11 = *piVar19;
      while (iVar11 != *(int *)(unaff_R14 + 0x18)) {
        piVar19 = piVar19 + 0x1a;
        iVar11 = *piVar19;
      }
      goto LAB_0da60b3a;
    }
    if (iVar11 == 0) {
      *(uint *)(lVar15 + 0x18) = *(uint *)(lVar15 + 0x18) | iStack0000000000000080 << 0x10;
    }
  }
  lVar15 = CONCAT44(in_stack_00000244,in_stack_00000240);
  func_0x048b0bc0(&stack0x00000098);
  in_stack_00000020 = 0;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_00000058 = 0;
  in_stack_00000060 = (long *)0x0;
  in_stack_00000048 = (undefined *)0x0;
  in_stack_00000050 = (long *)0x0;
  in_stack_00000038 = (undefined1 *)0x0;
  in_stack_00000040 = (undefined *)0x0;
  in_stack_00000028 = (undefined *)0x0;
  in_stack_00000030 = (undefined1 *)0x0;
  in_stack_00000078 = 0;
  func_0x041679a0(&stack0x00000020);
  in_stack_00000028 = (undefined *)func_0x041681f0(&stack0x00000020,0xf547a30);
  in_stack_00000030 = (undefined1 *)func_0x041681f0(&stack0x00000020,0xf547770);
  in_stack_00000038 = (undefined1 *)0x0;
  in_stack_00000040 = (undefined *)0x0;
  in_stack_00000048 = (undefined *)0x0;
  in_stack_00000050 = (long *)0x0;
  in_stack_00000058 = 0;
  in_stack_00000060 = (long *)0x0;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_00000078 = 0;
  in_stack_000001d0 = 0x775c5e12;
  uStack00000000000001d4 = 0x775c3a2b;
  in_stack_000001d8 = 0x2b;
  uStack00000000000001d9 = 0x24;
  func_0x0ed60210(&stack0x00000000,&stack0x000001d0,0);
  _uStack0000000000000098 = (code *)CONCAT71(uStack0000000000000099,0xff);
  puVar25 = (ulong *)0xffffffffffffffff;
  _iStack0000000000000080 = &UNK_0f4e3c70;
  func_0x04167a20(&stack0x000000a0,&stack0x00000020);
  _uStack00000000000000a8 = (long)in_stack_00000028;
  in_stack_000000b0 = (long)in_stack_00000030;
  in_stack_000000b8 = (long)in_stack_00000038;
  in_stack_000000c0 = SUB81(in_stack_00000040,0);
  uStack00000000000000c1 = (undefined7)((ulong)in_stack_00000040 >> 8);
  uStack00000000000000c8 = SUB81(in_stack_00000048,0);
  uStack00000000000000c9 = (undefined2)((ulong)in_stack_00000048 >> 8);
  uStack00000000000000cb = (undefined1)((ulong)in_stack_00000048 >> 0x18);
  uStack00000000000000cc = in_stack_00000048._4_4_;
  in_stack_000000d0 = in_stack_00000050;
  if (in_stack_00000050 != (long *)0x0) {
    LOCK();
    in_stack_00000050[1] = in_stack_00000050[1] + 1;
    UNLOCK();
  }
  in_stack_000000d8 = in_stack_00000058;
  if (((ulong)in_stack_00000060 & 1) == 0) {
    in_stack_000000f0 = in_stack_00000070;
    _uStack00000000000000e0 = (ulong)in_stack_00000060;
    _uStack00000000000000e8 = in_stack_00000068;
  }
  else {
    func_0x0412e5e0(&stack0x000000e0,in_stack_00000070,in_stack_00000068);
  }
  in_stack_000000f8 = in_stack_00000078;
  if (in_stack_00000268 == 4) {
    if ((DAT_0f732788 == '\0') && (iVar11 = func_0x04108328(&DAT_0f732788), iVar11 != 0)) {
      func_0x0daa7cd0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f732708,0xf53dab8);
      func_0x0410844d(&DAT_0f732788);
    }
    plVar14 = (long *)(*(long *)(lVar15 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar15 + 0x20) - *(long *)(lVar15 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f732708 + 4)) * 8);
    do {
      lVar21 = *plVar14;
      if (lVar21 == -1) goto LAB_0da60e09;
      plVar14 = (long *)(*(long *)(lVar15 + 0x30) + lVar21 * 0x18);
    } while (*(uint *)(*(long *)(lVar15 + 0x30) + 8 + lVar21 * 0x18) != *(uint *)(_DAT_0f732708 + 4)
            );
    if (plVar14 == *(long **)(lVar15 + 0x38)) {
LAB_0da60e09:
      puVar22 = &DAT_0f732708;
    }
    else {
      puVar22 = (undefined *)plVar14[2];
    }
    lVar15 = func_0x048b1040(lVar15 + 0x18,puVar22,in_stack_0000026c,1);
    if (lVar15 == 0) {
      func_0x048b10d0(&stack0x00000300);
      lVar15 = 0;
      lVar21 = lRam0000000000000038;
      if (lRam0000000000000038 != 0) goto LAB_0da60f14;
LAB_0da60eef:
      func_0x048b10d0(&stack0x00000300);
    }
    else {
      lVar21 = *(long *)(lVar15 + 0x38);
      if (*(long *)(lVar15 + 0x38) == 0) goto LAB_0da60eef;
LAB_0da60f14:
      do {
        lVar15 = lVar21;
        lVar21 = *(long *)(lVar15 + 0x38);
        if (lVar21 == 0) {
          lVar21 = 0;
          func_0x048b10d0(&stack0x00000300);
        }
      } while (lVar21 != 0);
    }
    lVar15 = *(long *)(lVar15 + 0x48);
    puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (puVar13 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x80,0);
    }
LAB_0da60f75:
    *(undefined1 *)(puVar13 + 3) = uStack0000000000000098;
    *(undefined4 *)(puVar13 + 1) = 0xffffffff;
    *(undefined4 *)((long)puVar13 + 0xc) = 0xffffffff;
    *(undefined4 *)(puVar13 + 2) = 0;
    *(undefined4 *)((long)puVar13 + 0x14) = 0;
    *puVar13 = &UNK_0f4e3c70;
    func_0x04167a20(puVar13 + 4,&stack0x000000a0);
    puVar13[5] = _uStack00000000000000a8;
    puVar13[6] = in_stack_000000b0;
    puVar13[7] = in_stack_000000b8;
    puVar13[8] = CONCAT71(uStack00000000000000c1,in_stack_000000c0);
    puVar13[9] = CONCAT44(uStack00000000000000cc,
                          CONCAT13(uStack00000000000000cb,
                                   CONCAT21(uStack00000000000000c9,uStack00000000000000c8)));
    puVar13[10] = in_stack_000000d0;
    uStack00000000000000c8 = 0;
    uStack00000000000000c9 = 0;
    uStack00000000000000cb = 0;
    uStack00000000000000cc = 0;
    in_stack_000000d0 = (long *)0x0;
    puVar13[0xb] = in_stack_000000d8;
    puVar13[0xe] = in_stack_000000f0;
    *(undefined4 *)(puVar13 + 0xc) = uStack00000000000000e0;
    *(undefined4 *)((long)puVar13 + 100) = uStack00000000000000e4;
    *(undefined4 *)(puVar13 + 0xd) = uStack00000000000000e8;
    *(undefined4 *)((long)puVar13 + 0x6c) = uStack00000000000000ec;
    _uStack00000000000000e0 = 0;
    _uStack00000000000000e8 = 0;
    in_stack_000000f0 = 0;
    puVar13[0xf] = in_stack_000000f8;
    plVar14 = *(long **)(lVar15 + 8);
    *(undefined8 **)(lVar15 + 8) = puVar13;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x28))();
    }
  }
  else if (in_stack_00000268 == 1) {
    if ((DAT_0f732788 == '\0') && (iVar11 = func_0x04108328(&DAT_0f732788), iVar11 != 0)) {
      func_0x0daa7cd0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f732708,0xf53dab8);
      func_0x0410844d(&DAT_0f732788);
    }
    plVar14 = (long *)(*(long *)(lVar15 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar15 + 0x20) - *(long *)(lVar15 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f732708 + 4)) * 8);
    do {
      lVar21 = *plVar14;
      if (lVar21 == -1) goto LAB_0da60d89;
      plVar14 = (long *)(*(long *)(lVar15 + 0x30) + lVar21 * 0x18);
    } while (*(uint *)(*(long *)(lVar15 + 0x30) + 8 + lVar21 * 0x18) != *(uint *)(_DAT_0f732708 + 4)
            );
    if (plVar14 == *(long **)(lVar15 + 0x38)) {
LAB_0da60d89:
      puVar22 = &DAT_0f732708;
    }
    else {
      puVar22 = (undefined *)plVar14[2];
    }
    lVar15 = func_0x048b0c90(lVar15 + 0x18,puVar22,in_stack_0000026c,1);
    if (lVar15 == 0) {
      func_0x048b0d20(&stack0x00000300);
      lVar15 = 0;
    }
    lVar15 = *(long *)(lVar15 + 0x58);
    puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (puVar13 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x80,0);
    }
    goto LAB_0da60f75;
  }
  _iStack0000000000000080 = &UNK_0f4e3c70;
  if ((_uStack00000000000000e0 & 1) != 0) {
    func_0x0412a280(in_stack_000000f0,_uStack00000000000000e0 & 0xfffffffffffffffe);
  }
  plVar14 = in_stack_000000d0;
  if (in_stack_000000d0 != (long *)0x0) {
    LOCK();
    plVar18 = in_stack_000000d0 + 1;
    lVar15 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*in_stack_000000d0 + 0x10))(in_stack_000000d0);
      func_0x0412c2d0(plVar14);
    }
  }
  func_0x04167a40(&stack0x000000a0);
  if ((in_stack_000001d0 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack00000000000001e4,uStack00000000000001e0),
                    CONCAT44(uStack00000000000001d4,in_stack_000001d0) & 0xfffffffffffffffe);
  }
  plVar14 = in_stack_00000050;
  if (((ulong)in_stack_00000060 & 1) != 0) {
    func_0x0412a280(in_stack_00000070,(ulong)in_stack_00000060 & 0xfffffffffffffffe);
    plVar14 = in_stack_00000050;
  }
  in_stack_00000050 = plVar14;
  if (plVar14 != (long *)0x0) {
    LOCK();
    plVar18 = plVar14 + 1;
    lVar15 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      func_0x0412c2d0(plVar14);
    }
  }
  func_0x04167a40(&stack0x00000020);
  if ((in_stack_00000180 >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000180 & 0xff00ffffffffffff) - 8);
  }
  in_stack_00000180 = 0;
  if ((in_stack_00000178 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000178 & 0xff00ffffffffffff) - 8);
  }
  in_stack_00000178 = 0;
  if ((bStack0000000000000150 & 1) != 0) {
    func_0x0412a280(in_stack_00000160,
                    CONCAT71(uStack0000000000000151,bStack0000000000000150) & 0xfffffffffffffffe);
  }
  if ((in_stack_00000350 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000350 & 0xff00ffffffffffff) - 8);
  }
  if ((in_stack_00000348 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000348 & 0xff00ffffffffffff) - 8);
  }
  if ((in_stack_00000380 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000380 & 0xff00ffffffffffff) - 8);
  }
  if ((in_stack_000003c4 & 0x800000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,
               (CONCAT44(in_stack_000003c4,in_stack_000003c0) & 0xff00ffffffffffff) - 8);
  }
  lVar15 = func_0x0d2a6f90(in_stack_00000378);
  if ((*(int *)(lVar15 + 0x60) == -0x2b3da790) && (*(long *)(lVar15 + 0x68) != 0)) {
    func_0x0daa91c0(&stack0x00000240);
  }
  else {
    func_0x0daa91c0(&stack0x00000240);
  }
  if (in_stack_00000270 != '\0') {
    return;
  }
  in_stack_00000188 = 0;
  in_stack_00000190 = 0x6d636f44696f5014;
  in_stack_00000198 = 0x746e65;
  in_stack_000001a0 = 0;
  in_stack_000001a8 = 0x1402;
  in_stack_000001b0 = 0x10028001a0001;
  in_stack_000001b8 = &UNK_01254d89;
  in_stack_000001c0 = &UNK_01254d89;
  lVar21 = CONCAT44(in_stack_00000244,in_stack_00000240) + 0x18;
  lVar15 = func_0x0d2a6f90(lVar21);
  pbVar2 = *(byte **)(CONCAT44(in_stack_00000244,in_stack_00000240) + 0x58);
  for (pbVar24 = *(byte **)(CONCAT44(in_stack_00000244,in_stack_00000240) + 0x50); pbVar24 != pbVar2
      ; pbVar24 = pbVar24 + 0x38) {
    bVar1 = *pbVar24;
    if ((bVar1 & 1) == 0) {
      if (bVar1 >> 1 == 0x24) goto LAB_0da6141a;
    }
    else if (*(long *)(pbVar24 + 8) == 0x24) {
LAB_0da6141a:
      if ((bVar1 & 1) == 0) {
        pbVar23 = pbVar24 + 1;
      }
      else {
        pbVar23 = *(byte **)(pbVar24 + 0x10);
      }
      iVar11 = func_0x0eee3000(&DAT_014518a9,pbVar23,0x24);
      if (iVar11 == 0) break;
    }
  }
  if (pbVar24 == pbVar2) {
LAB_0da6144a:
    if (in_stack_00000268 == 0) {
      if ((*(int *)(lVar15 + 0x60) != -0x2b3da790) || (*(long *)(lVar15 + 0x68) == 0))
      goto LAB_0da614c6;
      lVar15 = *(long *)(lVar15 + 0x68) + 0x38;
    }
    else {
      puVar22 = (undefined *)func_0x048b0c90(lVar21,lVar15,in_stack_0000026c,1);
      if (puVar22 == (undefined *)0x0) {
        _iStack0000000000000080 = (undefined *)0x0;
        func_0x048b0d20(&stack0x00000080);
        puVar22 = _iStack0000000000000080;
        if (_iStack0000000000000080 == (undefined *)0x0) goto LAB_0da614c6;
      }
      if ((*(int *)(puVar22 + 0x50) == -0x45dcb126) && (*(long *)(puVar22 + 0x58) != 0)) {
        lVar15 = *(long *)(puVar22 + 0x58) + 0x40;
      }
      else {
LAB_0da614c6:
        lVar15 = 0;
      }
    }
    in_stack_00000020 = CONCAT35(in_stack_00000020._5_3_,0x1d33bd9c5);
    puVar16 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    if (puVar16 == (ulong *)0x0) {
      func_0x0eec74c0(0x38,0);
    }
    puVar16[2] = in_stack_000001a0;
    *puVar16 = in_stack_00000190;
    puVar16[1] = in_stack_00000198;
    in_stack_00000190 = 0;
    in_stack_00000198 = 0;
    in_stack_000001a0 = 0;
    *(undefined2 *)(puVar16 + 3) = in_stack_000001a8;
    puVar16[4] = in_stack_000001b0;
    puVar16[5] = (ulong)in_stack_000001b8;
    in_stack_000001b8 = (undefined *)0x0;
    puVar16[6] = (ulong)in_stack_000001c0;
    in_stack_000001c0 = (undefined *)0x0;
    _iStack0000000000000080 = &UNK_048b46e0;
    _uStack0000000000000098 = (code *)&UNK_048b4ab0;
    _uStack00000000000000a0 = (code *)&UNK_048b49f0;
    _uStack00000000000000a8 = CONCAT35(uStack00000000000000ad,0x1d33bd9c5);
    puVar17 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar17 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    uVar27 = _UNK_014518c1;
    *(undefined8 *)(puVar17 + 4) = _DAT_014518b9;
    *(undefined8 *)(puVar17 + 6) = uVar27;
    uVar5 = _UNK_014518b5;
    uVar4 = _UNK_014518b1;
    uVar3 = _UNK_014518ad;
    *puVar17 = _DAT_014518a9;
    puVar17[1] = uVar3;
    puVar17[2] = uVar4;
    puVar17[3] = uVar5;
    puVar17[8] = 0x5d797472;
    *(undefined1 *)(puVar17 + 9) = 0;
    lVar15 = func_0x048b5060(lVar15,&stack0x00000298);
    *(undefined **)(lVar15 + 0x20) = &UNK_048b46e0;
    puVar25 = puVar16;
    if ((int *)(lVar15 + 0x20) != &stack0x00000080) {
      plVar14 = (long *)(lVar15 + 0x28);
      if (*(code **)(lVar15 + 0x40) == (code *)0x0) {
LAB_0da616a1:
        puVar25 = (ulong *)0x0;
        *plVar14 = (long)puVar16;
      }
      else {
        (**(code **)(lVar15 + 0x40))(plVar14);
        if (cStack00000000000000ac != '\0') {
          if (cStack00000000000000ac != '\x02') goto LAB_0da616a1;
          (*_uStack0000000000000098)(5,&stack0x00000088,plVar14);
        }
      }
      *(int *)(lVar15 + 0x38) = _uStack0000000000000098;
      *(int *)(lVar15 + 0x3c) = uStack0000000000000099._3_4_;
      *(undefined4 *)(lVar15 + 0x40) = uStack00000000000000a0;
      *(undefined4 *)(lVar15 + 0x44) = uStack00000000000000a4;
      *(undefined4 *)(lVar15 + 0x48) = uStack00000000000000a8;
      *(char *)(lVar15 + 0x4c) = cStack00000000000000ac;
    }
    func_0x0412a280(puVar17,0x28);
    if (_uStack00000000000000a0 != (code *)0x0) {
      (*_uStack00000000000000a0)(&stack0x00000088);
    }
    (*(code *)&UNK_048b49f0)(&stack0x00000000);
  }
  else {
    iVar11 = *(int *)(pbVar24 + 0x1c);
    if ((DAT_0f550768 == '\0') && (iVar12 = func_0x04108328(&DAT_0f550768), iVar12 != 0)) {
      func_0x048b46f0(0xf550750);
      func_0x0410844d(&DAT_0f550768);
    }
    if (iVar11 == _DAT_0f550754) goto LAB_0da6144a;
  }
  func_0x0daa9ac0(&stack0x00000080,&stack0x00000580,&UNK_011ea907,0xb,1);
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar14 = (long)&UNK_0f491270;
  if (_uStack0000000000000098 != (code *)0x0) {
    lVar15 = *(long *)_uStack0000000000000098;
    _uStack0000000000000098 = (code *)plVar14;
    (**(code **)(lVar15 + 8))();
    plVar14 = (long *)_uStack0000000000000098;
  }
  _uStack0000000000000098 = (code *)plVar14;
  in_stack_00000020 = 0;
  in_stack_00000028 = &UNK_0daaa1f0;
  in_stack_00000030 = &SUB_048b06d0;
  in_stack_00000038 = &UNK_0daa7c10;
  in_stack_00000040 = &UNK_0daaa2b0;
  in_stack_00000048 = &UNK_0daaa470;
  in_stack_00000050 = (long *)((ulong)in_stack_00000050 & 0xffffffff00000000);
  in_stack_00000058 = 0;
  in_stack_00000060 = (long *)0x0;
  func_0x048b05a0(puVar25,&stack0x00000000);
  plVar14 = in_stack_00000060;
  if (in_stack_00000060 != (long *)0x0) {
    LOCK();
    plVar18 = in_stack_00000060 + 1;
    lVar15 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*in_stack_00000060 + 0x10))(in_stack_00000060);
      func_0x0412c2d0(plVar14);
    }
  }
  func_0x0daa9cc0(&stack0x00000080);
  func_0x048b0bc0(&stack0x00000098);
  func_0x0daa9700(&stack0x00000080,CONCAT44(in_stack_00000244,in_stack_00000240) + 0x18);
  if (uStack0000000000000099._3_4_ == 2) {
    piVar19 = *(int **)(_DAT_00000078 + 0x60);
    iVar11 = *piVar19;
    while (iVar11 != _uStack0000000000000098) {
      piVar19 = piVar19 + 0x16;
      iVar11 = *piVar19;
    }
    puVar16 = *(ulong **)(piVar19 + 0xc);
    while (puVar16 != puVar25) {
      piVar19 = *(int **)(piVar19 + 0xe);
      puVar16 = *(ulong **)(piVar19 + 0xc);
    }
LAB_0da6195f:
    *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 4;
  }
  else {
    if (uStack0000000000000099._3_4_ == 1) {
      piVar19 = *(int **)(_DAT_00000078 + 0x48);
      iVar11 = *piVar19;
      while (iVar11 != _uStack0000000000000098) {
        piVar19 = piVar19 + 0x1a;
        iVar11 = *piVar19;
      }
      goto LAB_0da6195f;
    }
    if (uStack0000000000000099._3_4_ == 0) {
      _DAT_00000018 = _DAT_00000018 | 0x40000;
    }
  }
  func_0x0daa9ac0(&stack0x00000080,&stack0x000004c0,&UNK_014b95b7,7,0x10);
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar14 = (long)&UNK_0f012438;
  if (_uStack0000000000000098 != (code *)0x0) {
    lVar15 = *(long *)_uStack0000000000000098;
    _uStack0000000000000098 = (code *)plVar14;
    (**(code **)(lVar15 + 8))();
    plVar14 = (long *)_uStack0000000000000098;
  }
  _uStack0000000000000098 = (code *)plVar14;
  in_stack_00000020 = 0;
  in_stack_00000028 = &UNK_05fc5e00;
  in_stack_00000030 = &SUB_048b06d0;
  in_stack_00000038 = &UNK_05dcda00;
  in_stack_00000040 = &UNK_0daaa8e0;
  in_stack_00000048 = &UNK_0daaaa40;
  in_stack_00000050 = (long *)((ulong)in_stack_00000050 & 0xffffffff00000000);
  in_stack_00000058 = 0;
  in_stack_00000060 = (long *)0x0;
  func_0x048b05a0(puVar25,&stack0x00000000);
  plVar14 = in_stack_00000060;
  if (in_stack_00000060 != (long *)0x0) {
    LOCK();
    plVar18 = in_stack_00000060 + 1;
    lVar15 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*in_stack_00000060 + 0x10))(in_stack_00000060);
      func_0x0412c2d0(plVar14);
    }
  }
  func_0x0daa9cc0(&stack0x00000080);
  func_0x048b0bc0(&stack0x00000098);
  func_0x0daa9700(&stack0x00000080,CONCAT44(in_stack_00000244,in_stack_00000240) + 0x18);
  if (uStack0000000000000099._3_4_ == 2) {
    piVar19 = *(int **)(_DAT_00000078 + 0x60);
    iVar11 = *piVar19;
    while (iVar11 != _uStack0000000000000098) {
      piVar19 = piVar19 + 0x16;
      iVar11 = *piVar19;
    }
    puVar16 = *(ulong **)(piVar19 + 0xc);
    while (puVar16 != puVar25) {
      piVar19 = *(int **)(piVar19 + 0xe);
      puVar16 = *(ulong **)(piVar19 + 0xc);
    }
LAB_0da61bff:
    *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 4;
  }
  else {
    if (uStack0000000000000099._3_4_ == 1) {
      piVar19 = *(int **)(_DAT_00000078 + 0x48);
      iVar11 = *piVar19;
      while (iVar11 != _uStack0000000000000098) {
        piVar19 = piVar19 + 0x1a;
        iVar11 = *piVar19;
      }
      goto LAB_0da61bff;
    }
    if (uStack0000000000000099._3_4_ == 0) {
      _DAT_00000018 = _DAT_00000018 | 0x40000;
    }
  }
  func_0x0daa9ac0(&stack0x00000080,&stack0x00000500,&UNK_01471f55,0xf,0x10);
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar14 = (long)&UNK_0f012438;
  if (_uStack0000000000000098 != (code *)0x0) {
    lVar15 = *(long *)_uStack0000000000000098;
    _uStack0000000000000098 = (code *)plVar14;
    (**(code **)(lVar15 + 8))();
    plVar14 = (long *)_uStack0000000000000098;
  }
  _uStack0000000000000098 = (code *)plVar14;
  in_stack_00000020 = 0;
  in_stack_00000028 = &UNK_05fc5e00;
  in_stack_00000030 = &SUB_048b06d0;
  in_stack_00000038 = &UNK_05dcda00;
  in_stack_00000040 = &UNK_0daaac20;
  in_stack_00000048 = &UNK_0daaad80;
  in_stack_00000050 = (long *)((ulong)in_stack_00000050 & 0xffffffff00000000);
  in_stack_00000058 = 0;
  in_stack_00000060 = (long *)0x0;
  func_0x048b05a0(puVar25,&stack0x00000000);
  plVar14 = in_stack_00000060;
  if (in_stack_00000060 != (long *)0x0) {
    LOCK();
    plVar18 = in_stack_00000060 + 1;
    lVar15 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*in_stack_00000060 + 0x10))(in_stack_00000060);
      func_0x0412c2d0(plVar14);
    }
  }
  func_0x0daa9cc0(&stack0x00000080);
  func_0x048b0bc0(&stack0x00000098);
  func_0x0daa9ac0(&stack0x00000080,&stack0x000003c0,&UNK_01222d0e,6,1);
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar14 = (long)&UNK_0ef474e0;
  if (_uStack0000000000000098 != (code *)0x0) {
    lVar15 = *(long *)_uStack0000000000000098;
    _uStack0000000000000098 = (code *)plVar14;
    (**(code **)(lVar15 + 8))();
    plVar14 = (long *)_uStack0000000000000098;
  }
  _uStack0000000000000098 = (code *)plVar14;
  in_stack_00000020 = 0;
  in_stack_00000028 = &UNK_049119f0;
  in_stack_00000030 = &SUB_048b06d0;
  in_stack_00000038 = &UNK_0490fc00;
  in_stack_00000040 = &UNK_0daaaf60;
  in_stack_00000048 = &UNK_0daab160;
  in_stack_00000050 = (long *)((ulong)in_stack_00000050 & 0xffffffff00000000);
  in_stack_00000058 = 0;
  in_stack_00000060 = (long *)0x0;
  func_0x048b05a0(puVar25,&stack0x00000000);
  plVar14 = in_stack_00000060;
  if (in_stack_00000060 != (long *)0x0) {
    LOCK();
    plVar18 = in_stack_00000060 + 1;
    lVar15 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*in_stack_00000060 + 0x10))(in_stack_00000060);
      func_0x0412c2d0(plVar14);
    }
  }
  func_0x0daa9cc0(&stack0x00000080);
  func_0x048b0bc0(&stack0x00000098);
  in_stack_00000020 = 0;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_00000058 = 0;
  in_stack_00000060 = (long *)0x0;
  in_stack_00000048 = (undefined *)0x0;
  in_stack_00000050 = (long *)0x0;
  in_stack_00000038 = (undefined1 *)0x0;
  in_stack_00000040 = (undefined *)0x0;
  in_stack_00000028 = (undefined *)0x0;
  in_stack_00000030 = (undefined1 *)0x0;
  in_stack_00000078 = 0;
  func_0x041679a0(&stack0x00000020);
  in_stack_00000028 = (undefined *)func_0x041681f0(&stack0x00000020,0xf547a30);
  in_stack_00000030 = (undefined1 *)func_0x041681f0(&stack0x00000020,0xf547770);
  in_stack_00000038 = (undefined1 *)0x0;
  in_stack_00000040 = (undefined *)0x0;
  in_stack_00000048 = (undefined *)0x0;
  in_stack_00000050 = (long *)0x0;
  in_stack_00000058 = 0;
  in_stack_00000060 = (long *)0x0;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_00000078 = 0;
  func_0x0ed60210(&stack0x00000000,&stack0x00000228,0);
  func_0x04167a20(&stack0x00000460,&stack0x00000020);
  lVar29 = in_stack_00000058;
  plVar14 = in_stack_00000050;
  lVar8 = (long)in_stack_00000048;
  lVar7 = (long)in_stack_00000040;
  lVar6 = (long)in_stack_00000038;
  lVar21 = (long)in_stack_00000030;
  lVar15 = (long)in_stack_00000028;
  if (in_stack_00000050 != (long *)0x0) {
    LOCK();
    in_stack_00000050[1] = in_stack_00000050[1] + 1;
    UNLOCK();
  }
  uVar26 = (ulong)in_stack_00000060;
  uVar27 = in_stack_00000068;
  lVar28 = in_stack_00000070;
  if (((ulong)in_stack_00000060 & 1) != 0) {
    func_0x0412e5e0(&stack0x000004a0,in_stack_00000070,in_stack_00000068);
    uVar26 = in_stack_000004a0;
    uVar27 = in_stack_000004a8;
    lVar28 = in_stack_000004b0;
  }
  lVar9 = in_stack_00000078;
  plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x98);
  if (plVar18 == (long *)0x0) {
    func_0x0eec74c0(0x98,0);
  }
  plVar18[1] = 0;
  plVar18[2] = 0;
  *plVar18 = (long)&UNK_0f0fb8c0;
  *(undefined4 *)(plVar18 + 4) = 0xffffffff;
  *(undefined4 *)((long)plVar18 + 0x24) = 0xffffffff;
  *(undefined4 *)(plVar18 + 5) = 0;
  *(undefined4 *)((long)plVar18 + 0x2c) = 0;
  *(undefined1 *)(plVar18 + 6) = 0xff;
  plVar18[3] = (long)&UNK_0f4e3c70;
  func_0x04167a20(plVar18 + 7,&stack0x00000460);
  plVar18[8] = lVar15;
  plVar18[9] = lVar21;
  plVar18[10] = lVar6;
  plVar18[0xb] = lVar7;
  plVar18[0xc] = lVar8;
  plVar18[0xd] = (long)plVar14;
  plVar18[0xe] = lVar29;
  plVar18[0x11] = lVar28;
  *(int *)(plVar18 + 0xf) = (int)uVar26;
  *(int *)((long)plVar18 + 0x7c) = (int)(uVar26 >> 0x20);
  *(int *)(plVar18 + 0x10) = (int)uVar27;
  *(int *)((long)plVar18 + 0x84) = (int)((ulong)uVar27 >> 0x20);
  plVar18[0x12] = lVar9;
  func_0x0da63260(&stack0x00000340,&stack0x00000300,&stack0x00000400);
  func_0x0daa9700(&stack0x00000080,CONCAT44(in_stack_00000344,in_stack_00000340) + 0x18);
  if (uStack0000000000000099._3_4_ == 2) {
    piVar19 = *(int **)(_DAT_00000078 + 0x60);
    iVar11 = *piVar19;
    while (iVar11 != _uStack0000000000000098) {
      piVar19 = piVar19 + 0x16;
      iVar11 = *piVar19;
    }
    for (; *(ulong **)(piVar19 + 0xc) != puVar25; piVar19 = *(int **)(piVar19 + 0xe)) {
    }
  }
  else {
    if (uStack0000000000000099._3_4_ != 1) {
      if (uStack0000000000000099._3_4_ == 0) {
        _DAT_00000018 = _DAT_00000018 | 0x40000;
      }
      goto LAB_0da6237e;
    }
    piVar19 = *(int **)(_DAT_00000078 + 0x48);
    iVar11 = *piVar19;
    while (iVar11 != _uStack0000000000000098) {
      piVar19 = piVar19 + 0x1a;
      iVar11 = *piVar19;
    }
  }
  *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 4;
LAB_0da6237e:
  func_0x0daa9ac0(&stack0x00000080,&stack0x00000340,&UNK_0123d5a9,4,0x10);
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar13 = &UNK_0ef474e0;
  if (_uStack0000000000000098 != (code *)0x0) {
    lVar15 = *(long *)_uStack0000000000000098;
    _uStack0000000000000098 = (code *)puVar13;
    (**(code **)(lVar15 + 8))();
    puVar13 = (undefined8 *)_uStack0000000000000098;
  }
  _uStack0000000000000098 = (code *)puVar13;
  func_0x048b05a0(puVar25,&stack0x00000298);
  func_0x0daa9cc0(&stack0x00000080);
  uStack00000000000001dc = 0;
  uStack00000000000001e0 = 0;
  uStack00000000000001e4 = 0;
  in_stack_000001d8 = 0;
  uStack00000000000001d9 = 0;
  uStack00000000000001db = 0;
  func_0x048b0bc0(&stack0x00000098);
  _uStack00000000000000a0 = (code *)0x0;
  _uStack00000000000000e8 = 0;
  in_stack_000000f0 = 0;
  in_stack_000000d8 = 0;
  _uStack00000000000000e0 = 0;
  uStack00000000000000c8 = 0;
  uStack00000000000000c9 = 0;
  uStack00000000000000cb = 0;
  uStack00000000000000cc = 0;
  in_stack_000000d0 = (long *)0x0;
  in_stack_000000b8 = 0;
  in_stack_000000c0 = 0;
  uStack00000000000000c1 = 0;
  _uStack00000000000000a8 = 0;
  in_stack_000000b0 = 0;
  in_stack_000000f8 = 0;
  _uStack0000000000000098 = (code *)0xff;
  _iStack0000000000000080 = &UNK_0f4e3c70;
  func_0x041679a0(&stack0x000000a0);
  _uStack00000000000000a8 = func_0x041681f0(&stack0x000000a0,0xf547a30);
  in_stack_000000b0 = func_0x041681f0(&stack0x000000a0,0xf547770);
  in_stack_000000b8 = 0;
  in_stack_000000c0 = 0;
  uStack00000000000000c1 = 0;
  uStack00000000000000c8 = 0;
  uStack00000000000000c9 = 0;
  uStack00000000000000cb = 0;
  uStack00000000000000cc = 0;
  in_stack_000000d0 = (long *)0x0;
  in_stack_000000d8 = 0;
  _uStack00000000000000e0 = 0;
  _uStack00000000000000e8 = 0;
  in_stack_000000f0 = 0;
  in_stack_000000f8 = 0;
  func_0x0ed60210(&stack0x00000080,&stack0x00000210,0);
  uVar10 = uStack0000000000000098;
  func_0x04167a20(&stack0x000005e0,&stack0x000000a0);
  lVar8 = in_stack_000000d8;
  plVar14 = in_stack_000000d0;
  lVar7 = in_stack_000000b8;
  lVar6 = in_stack_000000b0;
  lVar21 = _uStack00000000000000a8;
  lVar15 = CONCAT71(uStack00000000000000c1,in_stack_000000c0);
  lVar29 = CONCAT44(uStack00000000000000cc,
                    CONCAT13(uStack00000000000000cb,
                             CONCAT21(uStack00000000000000c9,uStack00000000000000c8)));
  if (in_stack_000000d0 != (long *)0x0) {
    LOCK();
    in_stack_000000d0[1] = in_stack_000000d0[1] + 1;
    UNLOCK();
  }
  uVar26 = _uStack00000000000000e0;
  uVar27 = _uStack00000000000000e8;
  lVar28 = in_stack_000000f0;
  if ((_uStack00000000000000e0 & 1) != 0) {
    func_0x0412e5e0(&stack0x00000620,in_stack_000000f0,_uStack00000000000000e8);
    uVar26 = in_stack_00000620;
    uVar27 = in_stack_00000628;
    lVar28 = in_stack_00000630;
  }
  lVar9 = in_stack_000000f8;
  plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x98);
  if (plVar20 == (long *)0x0) {
    func_0x0eec74c0(0x98,0);
  }
  plVar20[1] = 0;
  plVar20[2] = 0;
  *plVar20 = (long)&UNK_0f0fb8c0;
  *(undefined4 *)(plVar20 + 4) = 0xffffffff;
  *(undefined4 *)((long)plVar20 + 0x24) = 0xffffffff;
  *(undefined4 *)(plVar20 + 5) = 0;
  *(undefined4 *)((long)plVar20 + 0x2c) = 0;
  *(undefined1 *)(plVar20 + 6) = uVar10;
  plVar20[3] = (long)&UNK_0f4e3c70;
  func_0x04167a20(plVar20 + 7,&stack0x000005e0);
  plVar20[8] = lVar21;
  plVar20[9] = lVar6;
  plVar20[10] = lVar7;
  plVar20[0xb] = lVar15;
  plVar20[0xc] = lVar29;
  plVar20[0xd] = (long)plVar14;
  plVar20[0xe] = lVar8;
  plVar20[0x11] = lVar28;
  *(int *)(plVar20 + 0xf) = (int)uVar26;
  *(int *)((long)plVar20 + 0x7c) = (int)(uVar26 >> 0x20);
  *(int *)(plVar20 + 0x10) = (int)uVar27;
  *(int *)((long)plVar20 + 0x84) = (int)((ulong)uVar27 >> 0x20);
  plVar20[0x12] = lVar9;
  func_0x0da63260(&stack0x00000150,&stack0x000001d0,&stack0x00000540);
  if (plVar20 != (long *)0x0) {
    LOCK();
    plVar14 = plVar20 + 1;
    lVar15 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      func_0x0412c2d0(plVar20);
    }
  }
  func_0x04167a40(&stack0x000005e0);
  if ((_uStack00000000000000e0 & 1) == 0) {
    _iStack0000000000000080 = &UNK_0f4e3c70;
    plVar14 = in_stack_000000d0;
  }
  else {
    _iStack0000000000000080 = &UNK_0f4e3c70;
    func_0x0412a280(in_stack_000000f0,_uStack00000000000000e0 & 0xfffffffffffffffe);
    plVar14 = in_stack_000000d0;
  }
  in_stack_000000d0 = plVar14;
  if (plVar14 != (long *)0x0) {
    LOCK();
    plVar20 = plVar14 + 1;
    lVar15 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      func_0x0412c2d0(plVar14);
    }
  }
  func_0x04167a40(&stack0x000000a0);
  if (plVar18 != (long *)0x0) {
    LOCK();
    plVar14 = plVar18 + 1;
    lVar15 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
      func_0x0412c2d0(plVar18);
    }
  }
  func_0x04167a40(&stack0x00000460);
  plVar14 = in_stack_00000050;
  if (((ulong)in_stack_00000060 & 1) != 0) {
    func_0x0412a280(in_stack_00000070,(ulong)in_stack_00000060 & 0xfffffffffffffffe);
    plVar14 = in_stack_00000050;
  }
  in_stack_00000050 = plVar14;
  if (plVar14 != (long *)0x0) {
    LOCK();
    plVar18 = plVar14 + 1;
    lVar15 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      func_0x0412c2d0(plVar14);
    }
  }
  func_0x04167a40(&stack0x00000020);
  if (((ulong)in_stack_000001c0 >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)in_stack_000001c0 & 0xff00ffffffffffff) - 8);
  }
  in_stack_000001c0 = (undefined *)0x0;
  if (((ulong)in_stack_000001b8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)in_stack_000001b8 & 0xff00ffffffffffff) - 8);
  }
  in_stack_000001b8 = (undefined *)0x0;
  if ((in_stack_00000190 & 1) != 0) {
    func_0x0412a280(in_stack_000001a0,in_stack_00000190 & 0xfffffffffffffffe);
  }
  if ((in_stack_00000188 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000188 & 0xff00ffffffffffff) - 8);
  }
  return;
}



/* ---- referenced strings ----
 * 0x14518a9  [cereal:cereal_root_schema_property]
 * 0x14518b9  oot_schema_property]
 */
