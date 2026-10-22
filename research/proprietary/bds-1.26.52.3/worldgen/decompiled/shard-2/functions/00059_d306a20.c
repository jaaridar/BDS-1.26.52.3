/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd306a20
 * Label: string:minecraft:search_feature
 * Body:  [[0d306a20, 0d306a24]]
 * Ghidra: thunk_FUN_0d305b66
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_0d305b66(void)

{
  long lVar1;
  long *plVar2;
  ushort uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_RBX;
  short *unaff_RBP;
  long *unaff_R12;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  int *piVar15;
  long *plVar16;
  long unaff_R15;
  ulong in_stack_00000008;
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
  long in_stack_000000b8;
  char *in_stack_000000c0;
  undefined8 in_stack_000000d0;
  long in_stack_000000d8;
  short sStack00000000000000f0;
  short sStack00000000000000f2;
  short sStack00000000000000f4;
  undefined2 uStack00000000000000f6;
  ulong in_stack_000000f8;
  ulong in_stack_00000100;
  undefined1 uStack0000000000000140;
  undefined2 uStack0000000000000142;
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
  
  *unaff_R12 = unaff_R15;
  func_0x0eee2f00(unaff_R12 + 1);
  lVar13 = in_stack_000000b8;
  *(undefined1 *)((long)unaff_R12 + unaff_R15 + 8) = 0;
  uVar11 = (ulong)(unaff_R12 + 1) & 0xff00ffffffffffff;
  uStack0000000000000010 = uVar11 | 0x80000000000000;
  uVar7 = in_stack_000000f8 & 0x80000000000000;
  uVar3 = (ushort)(in_stack_000000f8 >> 0x30);
  if (uVar7 == 0) {
    if ((in_stack_000000f8 & unaff_RBX) == 0) goto LAB_0d305c33;
    uVar9 = (ulong)(uVar3 & 0x7f);
LAB_0d305be1:
    if ((((uVar9 != 4) || (*(int *)(in_stack_000000f8 & 0xff00ffffffffffff) != 0x61746562)) ||
        (sStack00000000000000f0 != 9999)) ||
       ((sStack00000000000000f2 != 9999 || (sStack00000000000000f4 != 9999)))) goto LAB_0d305c33;
LAB_0d305e19:
    if (uVar7 == 0) {
      if ((in_stack_000000f8 & unaff_RBX) == 0) goto LAB_0d306041;
      uVar9 = (ulong)(uVar3 & 0x7f);
    }
    else {
      uVar9 = *(ulong *)((in_stack_000000f8 & 0xff00ffffffffffff) - 8);
      if (uVar9 == 0) goto LAB_0d306041;
    }
    if ((((uVar9 != 4) ||
         (piVar15 = (int *)(in_stack_000000f8 & 0xff00ffffffffffff), *piVar15 != 0x61746562)) ||
        (sStack00000000000000f0 != 9999)) ||
       ((sStack00000000000000f2 != 9999 || (sStack00000000000000f4 != 9999)))) goto LAB_0d306041;
    if ((in_stack_00000008 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(in_stack_00000008 & 0xff00ffffffffffff) - 8);
      piVar15 = (int *)(in_stack_000000f8 & 0xff00ffffffffffff);
      uVar7 = in_stack_000000f8 & 0x80000000000000;
    }
    in_stack_00000008 = in_stack_000000f8;
    if (uVar7 != 0) {
      lVar12 = *(long *)(piVar15 + -2);
      lVar13 = lVar12 + 9;
      plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar13,8);
      if (lVar13 != 0 && plVar8 == (long *)0x0) {
        func_0x0eec74c0(lVar13,8);
      }
      *plVar8 = lVar12;
      func_0x0eee2f00(plVar8 + 1,piVar15,lVar12);
      *(undefined1 *)((long)plVar8 + lVar12 + 8) = 0;
      in_stack_00000008 = (ulong)(plVar8 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,uVar11 - 8);
    uStack0000000000000010 = in_stack_00000100;
    if ((in_stack_00000100 & 0x80000000000000) == 0) goto LAB_0d306041;
    uStack0000000000000010 = in_stack_00000100 & 0xff00ffffffffffff;
    lVar12 = *(long *)(uStack0000000000000010 - 8);
    lVar13 = lVar12 + 9;
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar13,8);
    if (lVar13 != 0 && plVar8 == (long *)0x0) {
      func_0x0eec74c0(lVar13,8);
    }
  }
  else {
    uVar9 = *(ulong *)((in_stack_000000f8 & 0xff00ffffffffffff) - 8);
    if (uVar9 != 0) goto LAB_0d305be1;
LAB_0d305c33:
    uVar9 = *(ulong *)(unaff_RBP + 4);
    if ((uVar9 & 0x80000000000000) != 0) {
      uVar10 = *(ulong *)((uVar9 & 0xff00ffffffffffff) - 8);
      if (uVar10 != 0) goto LAB_0d305c6e;
      goto LAB_0d305e19;
    }
    if ((uVar9 & unaff_RBX) == 0) goto LAB_0d305e19;
    uVar10 = (ulong)((ushort)(uVar9 >> 0x30) & 0x7f);
LAB_0d305c6e:
    if (((uVar10 != 4) || (*(int *)(uVar9 & 0xff00ffffffffffff) != 0x61746562)) ||
       ((*unaff_RBP != 9999 || ((unaff_RBP[1] != 9999 || (unaff_RBP[2] != 9999))))))
    goto LAB_0d305e19;
    if ((in_stack_00000008 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(in_stack_00000008 & 0xff00ffffffffffff) - 8);
    }
    in_stack_00000008 = *(ulong *)(lVar13 + 8);
    if ((in_stack_00000008 & 0x80000000000000) != 0) {
      lVar1 = *(long *)((in_stack_00000008 & 0xff00ffffffffffff) - 8);
      lVar12 = lVar1 + 9;
      plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar12,8);
      if (lVar12 != 0 && plVar8 == (long *)0x0) {
        func_0x0eec74c0(lVar12,8);
      }
      *plVar8 = lVar1;
      func_0x0eee2f00(plVar8 + 1,in_stack_00000008 & 0xff00ffffffffffff,lVar1);
      *(undefined1 *)((long)plVar8 + lVar1 + 8) = 0;
      in_stack_00000008 = (ulong)(plVar8 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,uVar11 - 8);
    uStack0000000000000010 = *(ulong *)(lVar13 + 0x10);
    if ((uStack0000000000000010 & 0x80000000000000) == 0) goto LAB_0d306041;
    uStack0000000000000010 = uStack0000000000000010 & 0xff00ffffffffffff;
    lVar12 = *(long *)(uStack0000000000000010 - 8);
    lVar13 = lVar12 + 9;
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar13,8);
    if (lVar13 != 0 && plVar8 == (long *)0x0) {
      func_0x0eec74c0(lVar13,8);
    }
  }
  *plVar8 = lVar12;
  func_0x0eee2f00(plVar8 + 1,uStack0000000000000010,lVar12);
  *(undefined1 *)((long)plVar8 + lVar12 + 8) = 0;
  uStack0000000000000010 = (ulong)(plVar8 + 1) & 0xff00ffffffffffff | 0x80000000000000;
LAB_0d306041:
  func_0x0d6b3300(&stack0x00000160,&stack0x000000f0,&stack0x00000000,1);
  if ((in_stack_000000d8 == 0) &&
     (cVar6 = func_0x0eeddcf0(&UNK_012a4e2b,&UNK_01495f35,0x16d,&UNK_013fa33d,&UNK_011cb89f),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((in_stack_000000c0 == (char *)0x0) ||
     (lVar13 = in_stack_000000d8, *in_stack_000000c0 != '\x01')) {
    cVar6 = func_0x0eeddcf0(&UNK_011b95c6,&UNK_0119d79e,0x16e,&UNK_013fa33d,&UNK_011cb89f);
    lVar13 = in_stack_000000d8;
    if (cVar6 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((in_stack_000000c0 == (char *)0x0) &&
       (cVar6 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  if ((*in_stack_000000c0 == '\0') &&
     (cVar6 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  uVar5 = in_stack_000000d0;
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  uVar4 = CONCAT26(uStack00000000000000f6,
                   CONCAT24(sStack00000000000000f4,
                            CONCAT22(sStack00000000000000f2,sStack00000000000000f0)));
  in_stack_000000a8 = uVar5;
  uVar7 = in_stack_000000f8;
  in_stack_00000068 = plVar8;
  in_stack_00000088 = lVar13;
  in_stack_000001a0 = uVar4;
  if ((in_stack_000000f8 & 0x80000000000000) != 0) {
    uVar7 = in_stack_000000f8 & 0xff00ffffffffffff;
    lVar12 = *(long *)(uVar7 - 8);
    lVar13 = lVar12 + 9;
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar13,8);
    if (lVar13 != 0 && plVar8 == (long *)0x0) {
      func_0x0eec74c0(lVar13,8);
    }
    *plVar8 = lVar12;
    func_0x0eee2f00(plVar8 + 1,uVar7,lVar12);
    *(undefined1 *)((long)plVar8 + lVar12 + 8) = 0;
    uVar7 = (ulong)(plVar8 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  in_stack_000001b0 = 0;
  uVar11 = in_stack_00000100;
  if ((in_stack_00000100 & 0x80000000000000) != 0) {
    uVar11 = in_stack_00000100 & 0xff00ffffffffffff;
    lVar12 = *(long *)(uVar11 - 8);
    lVar13 = lVar12 + 9;
    in_stack_000001a8 = uVar7;
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar13,8);
    if (lVar13 != 0 && plVar8 == (long *)0x0) {
      func_0x0eec74c0(lVar13,8);
    }
    *plVar8 = lVar12;
    func_0x0eee2f00(plVar8 + 1,uVar11,lVar12);
    *(undefined1 *)((long)plVar8 + lVar12 + 8) = 0;
    uVar11 = (ulong)(plVar8 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  in_stack_00000048 = in_stack_00000188;
  in_stack_00000040 = in_stack_00000180;
  in_stack_00000030 = in_stack_00000170;
  in_stack_00000028 = in_stack_00000168;
  plVar8 = in_stack_00000068;
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
  in_stack_00000098 = uVar7;
  in_stack_000000a0 = uVar11;
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
  *plVar8 = (long)&UNK_0f4603a0;
  plVar8[0xe] = in_stack_00000088;
  *(undefined2 *)(plVar8 + 0xf) = uStack0000000000000142;
  *(undefined1 *)((long)plVar8 + 0x7a) = 1;
  in_stack_00000020 = plVar8;
  if ((in_stack_00000188 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000188 & 0xff00ffffffffffff) - 8);
  }
  plVar8 = in_stack_000001b8;
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
  if ((in_stack_00000008 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000008 & 0xff00ffffffffffff) - 8);
  }
  plVar14 = (long *)*plVar8;
  plVar2 = (long *)plVar8[1];
  if (plVar14 != plVar2) {
    plVar16 = in_stack_00000068 + 7;
    do {
      cVar6 = func_0x04fa7a10(*plVar14 + 0x20,plVar16);
      if (cVar6 == '\0') break;
      plVar14 = plVar14 + 1;
    } while (plVar14 != plVar2);
  }
  func_0x0d6af860(plVar8,plVar14,&stack0x00000020);
  plVar8 = in_stack_00000020;
  in_stack_00000020 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  uStack0000000000000140 = 0;
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


