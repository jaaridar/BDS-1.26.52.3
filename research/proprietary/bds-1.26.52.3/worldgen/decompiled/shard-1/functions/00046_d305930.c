/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd305930
 * Label: string:minecraft:search_feature
 * Body:  [[0d305930, 0d3064df] [0d3064e1, 0d306718] [0d306768, 0d306778] [0d3069dd, 0d306a48] [0d306b07, 0d306b18] [0d306b4f, 0d306b60] [0d306b97, 0d306ba8]]
 * Ghidra: FUN_0d305930
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d305930(void)

{
  char *pcVar1;
  long *plVar2;
  ushort uVar3;
  undefined8 uVar4;
  short *psVar5;
  short *psVar6;
  undefined8 uVar7;
  undefined2 uVar8;
  char cVar9;
  long in_RAX;
  long *plVar10;
  long in_RCX;
  ulong uVar11;
  ulong unaff_RBP;
  long unaff_R13;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  long unaff_R15;
  int *piVar17;
  long *plVar18;
  ulong uStack0000000000000008;
  ulong uStack0000000000000010;
  long *in_stack_00000020;
  ulong in_stack_00000028;
  ulong in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined4 uStack000000000000003c;
  ulong in_stack_00000040;
  ulong in_stack_00000048;
  undefined2 in_stack_00000050;
  long *in_stack_00000068;
  ulong in_stack_00000078;
  ulong in_stack_00000080;
  long in_stack_00000088;
  undefined8 in_stack_00000090;
  ulong in_stack_00000098;
  ulong in_stack_000000a0;
  undefined8 in_stack_000000a8;
  long *in_stack_000000b0;
  short *in_stack_000000b8;
  char *in_stack_000000c0;
  undefined8 in_stack_000000d0;
  long in_stack_000000d8;
  short sStack00000000000000f0;
  short sStack00000000000000f2;
  short sStack00000000000000f4;
  undefined2 uStack00000000000000f6;
  ulong in_stack_000000f8;
  ulong in_stack_00000100;
  undefined8 in_stack_00000130;
  undefined1 in_stack_00000140;
  undefined2 uStack0000000000000142;
  undefined1 uStack0000000000000144;
  undefined8 in_stack_00000160;
  ulong in_stack_00000168;
  ulong in_stack_00000170;
  undefined4 uStack0000000000000178;
  undefined4 uStack000000000000017c;
  ulong in_stack_00000180;
  ulong in_stack_00000188;
  undefined2 in_stack_00000190;
  undefined8 in_stack_000001a0;
  ulong in_stack_000001a8;
  undefined8 in_stack_000001b0;
  long *in_stack_000001b8;
  
  pcVar1 = (char *)(in_RCX * 5 + -0x12);
  *pcVar1 = *pcVar1 + (char)in_RCX;
  plVar10 = (long *)(**(code **)(in_RAX + 0x20))();
  if (unaff_R13 != 0 && plVar10 == (long *)0x0) {
    func_0x0eec74c0();
  }
  *plVar10 = unaff_R15;
  func_0x0eee2f00(plVar10 + 1);
  *(undefined1 *)((long)plVar10 + unaff_R15 + 8) = 0;
  in_stack_000000f8 = (ulong)(plVar10 + 1) & unaff_RBP | 0x80000000000000;
  in_stack_00000100 = 0;
  uVar12 = in_stack_00000080;
  if ((in_stack_00000080 & 0x80000000000000) != 0) {
    uVar12 = in_stack_00000080 & unaff_RBP;
    lVar13 = *(long *)(uVar12 - 8);
    lVar14 = lVar13 + 9;
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar14,8);
    if (lVar14 != 0 && plVar10 == (long *)0x0) {
      func_0x0eec74c0(lVar14,8);
    }
    *plVar10 = lVar13;
    func_0x0eee2f00(plVar10 + 1,uVar12,lVar13);
    *(undefined1 *)((long)plVar10 + lVar13 + 8) = 0;
    uVar12 = (ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  psVar5 = in_stack_000000b8;
  in_stack_00000130 = 0;
  in_stack_00000140 = 1;
  uStack0000000000000142 = 0xfbf8;
  uStack0000000000000144 = 1;
  uStack0000000000000008 = *(ulong *)(in_stack_000000b8 + 4);
  in_stack_000001b8 = in_stack_000000b0;
  in_stack_00000100 = uVar12;
  if ((uStack0000000000000008 & 0x80000000000000) != 0) {
    lVar13 = *(long *)((uStack0000000000000008 & 0xff00ffffffffffff) - 8);
    lVar14 = lVar13 + 9;
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar14,8);
    if (lVar14 != 0 && plVar10 == (long *)0x0) {
      func_0x0eec74c0(lVar14,8);
    }
    *plVar10 = lVar13;
    func_0x0eee2f00(plVar10 + 1,uStack0000000000000008 & 0xff00ffffffffffff,lVar13);
    *(undefined1 *)((long)plVar10 + lVar13 + 8) = 0;
    uStack0000000000000008 = (ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack0000000000000010 = *(ulong *)(psVar5 + 8);
  if ((uStack0000000000000010 & 0x80000000000000) != 0) {
    lVar13 = *(long *)((uStack0000000000000010 & 0xff00ffffffffffff) - 8);
    lVar14 = lVar13 + 9;
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar14,8);
    if (lVar14 != 0 && plVar10 == (long *)0x0) {
      func_0x0eec74c0(lVar14,8);
    }
    *plVar10 = lVar13;
    func_0x0eee2f00(plVar10 + 1,uStack0000000000000010 & 0xff00ffffffffffff,lVar13);
    *(undefined1 *)((long)plVar10 + lVar13 + 8) = 0;
    uStack0000000000000010 = (ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  psVar6 = in_stack_000000b8;
  uVar12 = in_stack_000000f8 & 0x80000000000000;
  uVar3 = (ushort)(in_stack_000000f8 >> 0x30);
  if (uVar12 == 0) {
    if ((in_stack_000000f8 & 0x7f000000000000) == 0) goto LAB_0d305c33;
    uVar15 = (ulong)(uVar3 & 0x7f);
LAB_0d305be1:
    if ((((uVar15 != 4) || (*(int *)(in_stack_000000f8 & 0xff00ffffffffffff) != 0x61746562)) ||
        (sStack00000000000000f0 != 9999)) ||
       ((sStack00000000000000f2 != 9999 || (sStack00000000000000f4 != 9999)))) goto LAB_0d305c33;
LAB_0d305e19:
    if (uVar12 == 0) {
      if ((in_stack_000000f8 & 0x7f000000000000) == 0) goto LAB_0d306041;
      uVar15 = (ulong)(uVar3 & 0x7f);
    }
    else {
      uVar15 = *(ulong *)((in_stack_000000f8 & 0xff00ffffffffffff) - 8);
      if (uVar15 == 0) goto LAB_0d306041;
    }
    if ((((uVar15 != 4) ||
         (piVar17 = (int *)(in_stack_000000f8 & 0xff00ffffffffffff), *piVar17 != 0x61746562)) ||
        (sStack00000000000000f0 != 9999)) ||
       ((sStack00000000000000f2 != 9999 || (sStack00000000000000f4 != 9999)))) goto LAB_0d306041;
    if ((uStack0000000000000008 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(uStack0000000000000008 & 0xff00ffffffffffff) - 8);
      piVar17 = (int *)(in_stack_000000f8 & 0xff00ffffffffffff);
      uVar12 = in_stack_000000f8 & 0x80000000000000;
    }
    uStack0000000000000008 = in_stack_000000f8;
    if (uVar12 != 0) {
      lVar13 = *(long *)(piVar17 + -2);
      lVar14 = lVar13 + 9;
      plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar14,8);
      if (lVar14 != 0 && plVar10 == (long *)0x0) {
        func_0x0eec74c0(lVar14,8);
      }
      *plVar10 = lVar13;
      func_0x0eee2f00(plVar10 + 1,piVar17,lVar13);
      *(undefined1 *)((long)plVar10 + lVar13 + 8) = 0;
      uStack0000000000000008 = (ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    if ((uStack0000000000000010 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(uStack0000000000000010 & 0xff00ffffffffffff) - 8);
    }
    uStack0000000000000010 = in_stack_00000100;
    if ((in_stack_00000100 & 0x80000000000000) == 0) goto LAB_0d306041;
    uStack0000000000000010 = in_stack_00000100 & 0xff00ffffffffffff;
    lVar13 = *(long *)(uStack0000000000000010 - 8);
    lVar14 = lVar13 + 9;
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar14,8);
    if (lVar14 != 0 && plVar10 == (long *)0x0) {
      func_0x0eec74c0(lVar14,8);
    }
  }
  else {
    uVar15 = *(ulong *)((in_stack_000000f8 & 0xff00ffffffffffff) - 8);
    if (uVar15 != 0) goto LAB_0d305be1;
LAB_0d305c33:
    uVar15 = *(ulong *)(psVar5 + 4);
    if ((uVar15 & 0x80000000000000) != 0) {
      uVar11 = *(ulong *)((uVar15 & 0xff00ffffffffffff) - 8);
      if (uVar11 != 0) goto LAB_0d305c6e;
      goto LAB_0d305e19;
    }
    if ((uVar15 & 0x7f000000000000) == 0) goto LAB_0d305e19;
    uVar11 = (ulong)((ushort)(uVar15 >> 0x30) & 0x7f);
LAB_0d305c6e:
    if (((uVar11 != 4) || (*(int *)(uVar15 & 0xff00ffffffffffff) != 0x61746562)) ||
       ((*psVar5 != 9999 || ((psVar5[1] != 9999 || (psVar5[2] != 9999)))))) goto LAB_0d305e19;
    if ((uStack0000000000000008 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(uStack0000000000000008 & 0xff00ffffffffffff) - 8);
    }
    uStack0000000000000008 = *(ulong *)(psVar6 + 4);
    if ((uStack0000000000000008 & 0x80000000000000) != 0) {
      lVar13 = *(long *)((uStack0000000000000008 & 0xff00ffffffffffff) - 8);
      lVar14 = lVar13 + 9;
      plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar14,8);
      if (lVar14 != 0 && plVar10 == (long *)0x0) {
        func_0x0eec74c0(lVar14,8);
      }
      *plVar10 = lVar13;
      func_0x0eee2f00(plVar10 + 1,uStack0000000000000008 & 0xff00ffffffffffff,lVar13);
      *(undefined1 *)((long)plVar10 + lVar13 + 8) = 0;
      uStack0000000000000008 = (ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    if ((uStack0000000000000010 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(uStack0000000000000010 & 0xff00ffffffffffff) - 8);
    }
    uStack0000000000000010 = *(ulong *)(psVar6 + 8);
    if ((uStack0000000000000010 & 0x80000000000000) == 0) goto LAB_0d306041;
    uStack0000000000000010 = uStack0000000000000010 & 0xff00ffffffffffff;
    lVar13 = *(long *)(uStack0000000000000010 - 8);
    lVar14 = lVar13 + 9;
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar14,8);
    if (lVar14 != 0 && plVar10 == (long *)0x0) {
      func_0x0eec74c0(lVar14,8);
    }
  }
  *plVar10 = lVar13;
  func_0x0eee2f00(plVar10 + 1,uStack0000000000000010,lVar13);
  *(undefined1 *)((long)plVar10 + lVar13 + 8) = 0;
  uStack0000000000000010 = (ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
LAB_0d306041:
  func_0x0d6b3300(&stack0x00000160,&stack0x000000f0,&stack0x00000000,1);
  if ((in_stack_000000d8 == 0) &&
     (cVar9 = func_0x0eeddcf0(&UNK_012a4e2b,&UNK_01495f35,0x16d,&UNK_013fa33d,&UNK_011cb89f),
     cVar9 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((in_stack_000000c0 == (char *)0x0) ||
     (lVar14 = in_stack_000000d8, *in_stack_000000c0 != '\x01')) {
    cVar9 = func_0x0eeddcf0(&UNK_011b95c6,&UNK_0119d79e,0x16e,&UNK_013fa33d,&UNK_011cb89f);
    lVar14 = in_stack_000000d8;
    if (cVar9 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((in_stack_000000c0 == (char *)0x0) &&
       (cVar9 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
       cVar9 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  if ((*in_stack_000000c0 == '\0') &&
     (cVar9 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e),
     cVar9 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  uVar7 = in_stack_000000d0;
  plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar10 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  uVar4 = CONCAT26(uStack00000000000000f6,
                   CONCAT24(sStack00000000000000f4,
                            CONCAT22(sStack00000000000000f2,sStack00000000000000f0)));
  in_stack_000000a8 = uVar7;
  uVar12 = in_stack_000000f8;
  in_stack_00000068 = plVar10;
  in_stack_00000088 = lVar14;
  in_stack_000001a0 = uVar4;
  if ((in_stack_000000f8 & 0x80000000000000) != 0) {
    uVar12 = in_stack_000000f8 & 0xff00ffffffffffff;
    lVar13 = *(long *)(uVar12 - 8);
    lVar14 = lVar13 + 9;
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar14,8);
    if (lVar14 != 0 && plVar10 == (long *)0x0) {
      func_0x0eec74c0(lVar14,8);
    }
    *plVar10 = lVar13;
    func_0x0eee2f00(plVar10 + 1,uVar12,lVar13);
    *(undefined1 *)((long)plVar10 + lVar13 + 8) = 0;
    uVar12 = (ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  in_stack_000001b0 = 0;
  uVar15 = in_stack_00000100;
  if ((in_stack_00000100 & 0x80000000000000) != 0) {
    uVar15 = in_stack_00000100 & 0xff00ffffffffffff;
    lVar13 = *(long *)(uVar15 - 8);
    lVar14 = lVar13 + 9;
    in_stack_000001a8 = uVar12;
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar14,8);
    if (lVar14 != 0 && plVar10 == (long *)0x0) {
      func_0x0eec74c0(lVar14,8);
    }
    *plVar10 = lVar13;
    func_0x0eee2f00(plVar10 + 1,uVar15,lVar13);
    *(undefined1 *)((long)plVar10 + lVar13 + 8) = 0;
    uVar15 = (ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  in_stack_00000048 = in_stack_00000188;
  in_stack_00000040 = in_stack_00000180;
  in_stack_00000030 = in_stack_00000170;
  in_stack_00000028 = in_stack_00000168;
  uVar8 = uStack0000000000000142;
  plVar10 = in_stack_00000068;
  in_stack_000001a8 = 0;
  in_stack_000001b0 = 0;
  in_stack_00000168 = 0;
  in_stack_00000170 = 0;
  in_stack_00000020 = (long *)in_stack_00000160;
  in_stack_00000038 = uStack0000000000000178;
  uStack000000000000003c = uStack000000000000017c;
  in_stack_00000180 = 0;
  in_stack_00000188 = 0;
  in_stack_00000050 = in_stack_00000190;
  in_stack_00000090 = uVar4;
  in_stack_00000098 = uVar12;
  in_stack_000000a0 = uVar15;
  func_0x0d6a8a30(in_stack_00000068,in_stack_000000a8,&stack0x00000090,&stack0x00000020);
  if ((in_stack_00000048 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000048 & 0xff00ffffffffffff) - 8);
  }
  in_stack_00000048 = 0;
  if ((in_stack_00000040 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000040 & 0xff00ffffffffffff) - 8);
  }
  in_stack_00000040 = 0;
  if ((in_stack_00000030 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000030 & 0xff00ffffffffffff) - 8);
  }
  in_stack_00000030 = 0;
  if ((in_stack_00000028 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000028 & 0xff00ffffffffffff) - 8);
  }
  in_stack_00000028 = 0;
  if ((in_stack_000000a0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_000000a0 & 0xff00ffffffffffff) - 8);
  }
  in_stack_000000a0 = 0;
  if ((in_stack_00000098 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000098 & 0xff00ffffffffffff) - 8);
  }
  *plVar10 = (long)&UNK_0f4603a0;
  plVar10[0xe] = in_stack_00000088;
  *(undefined2 *)(plVar10 + 0xf) = uVar8;
  *(undefined1 *)((long)plVar10 + 0x7a) = 1;
  in_stack_00000020 = plVar10;
  if ((in_stack_00000188 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000188 & 0xff00ffffffffffff) - 8);
  }
  plVar10 = in_stack_000001b8;
  in_stack_00000188 = 0;
  if ((in_stack_00000180 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000180 & 0xff00ffffffffffff) - 8);
  }
  in_stack_00000180 = 0;
  if ((in_stack_00000170 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000170 & 0xff00ffffffffffff) - 8);
  }
  in_stack_00000170 = 0;
  if ((in_stack_00000168 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000168 & 0xff00ffffffffffff) - 8);
  }
  if ((uStack0000000000000010 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,(uStack0000000000000010 & 0xff00ffffffffffff) - 8);
  }
  if ((uStack0000000000000008 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,(uStack0000000000000008 & 0xff00ffffffffffff) - 8);
  }
  plVar16 = (long *)*plVar10;
  plVar2 = (long *)plVar10[1];
  if (plVar16 != plVar2) {
    plVar18 = in_stack_00000068 + 7;
    do {
      cVar9 = func_0x04fa7a10(*plVar16 + 0x20,plVar18);
      if (cVar9 == '\0') break;
      plVar16 = plVar16 + 1;
    } while (plVar16 != plVar2);
  }
  func_0x0d6af860(plVar10,plVar16,&stack0x00000020);
  plVar10 = in_stack_00000020;
  in_stack_00000020 = (long *)0x0;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 8))();
  }
  in_stack_00000140 = 0;
  func_0x0d3078a0(&stack0x000000b0);
  if ((in_stack_00000080 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000080 & 0xff00ffffffffffff) - 8);
  }
  in_stack_00000080 = 0;
  if ((in_stack_00000078 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000078 & 0xff00ffffffffffff) - 8);
  }
  return;
}


