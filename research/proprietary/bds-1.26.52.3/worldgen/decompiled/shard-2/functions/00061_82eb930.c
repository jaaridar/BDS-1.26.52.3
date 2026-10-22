/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x82eb930
 * Label: string:Jigsaw Structure Data Tag
 * Body:  [[082eb930, 082ebe5b] [082ebeaf, 082ebf01] [082ebf10, 082ec147] [082ec150, 082ec1f1] [082ec29c, 082ec2ac] [082ec2be, 082ec2ce] [082ec353, 082ec363] [082ec66f, 082ec6dc] [082ec721, 082ec751] [082ec87e, 082ec911]]
 * Ghidra: FUN_082eb930
 */


/* WARNING: Removing unreachable block (ram,0x082ebbe1) */
/* WARNING: Removing unreachable block (ram,0x082ebbf3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_082eb930(void)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  char *in_RAX;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_RBX;
  undefined *puVar11;
  long lVar12;
  int iStack0000000000000080;
  undefined1 *in_stack_00000088;
  undefined4 in_stack_00000090;
  long *in_stack_00000098;
  long in_stack_000000a0;
  long in_stack_000000a8;
  long in_stack_000000b0;
  long in_stack_000000b8;
  long in_stack_000000c0;
  ulong in_stack_000000c8;
  long in_stack_000000d0;
  long in_stack_000000d8;
  long in_stack_000000e0;
  long in_stack_000000e8;
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
  long in_stack_00000158;
  int iStack0000000000000180;
  undefined4 uStack0000000000000184;
  undefined8 in_stack_000001e0;
  long *in_stack_000001e8;
  
  *in_RAX = *in_RAX + (char)in_RAX;
  if (unaff_RBX != (long *)0x0) {
    LOCK();
    plVar7 = unaff_RBX + 1;
    lVar12 = *plVar7;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*unaff_RBX + 0x10))();
      func_0x0412c2d0();
    }
  }
  if ((DAT_0f5d0518 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5d0518), iVar5 != 0)) {
    func_0x083ba330();
    func_0x0410844d(&DAT_0f5d0518);
  }
  lVar12 = in_stack_00000158;
  _iStack0000000000000180 = 0xdcaca29300000001;
  if ((DAT_0f5d05b0 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5d05b0), iVar5 != 0)) {
    func_0x083bae90();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d0530,0xf53dab8);
    func_0x0410844d(&DAT_0f5d05b0);
  }
  in_stack_00000088 = (undefined1 *)(lVar12 + 0x18);
  plVar7 = (long *)(*(long *)(lVar12 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(lVar12 + 0x20) - *(long *)(lVar12 + 0x18)) >> 3)
                           - 1U & *(uint *)(_DAT_0f5d0530 + 4)) * 8);
  do {
    lVar2 = *plVar7;
    if (lVar2 == -1) goto LAB_082eb9f0;
    plVar7 = (long *)(*(long *)(lVar12 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(lVar12 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5d0530 + 4));
  if (plVar7 == *(long **)(lVar12 + 0x38)) {
LAB_082eb9f0:
    _iStack0000000000000080 = &DAT_0f5d0530;
  }
  else {
    _iStack0000000000000080 = (undefined *)plVar7[2];
  }
  func_0x0ed621a0(&stack0x00000080,uStack0000000000000184);
  _iStack0000000000000080 = (undefined *)((ulong)_iStack0000000000000080 & 0xffffffffffff0000);
  in_stack_00000090 = uStack0000000000000184;
  in_stack_00000098 = (long *)0x0;
  in_stack_000000a0 = 0;
  in_stack_000000a8 = 0;
  in_stack_000000b0 = 0;
  in_stack_000000b8 = 0;
  in_stack_000000c0 = 0x73656972746e450e;
  in_stack_000000c8 = in_stack_000000c8 & 0xffffffffffffff00;
  in_stack_000000d8 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000f0 = 0;
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
  puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar6 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar6 = &UNK_0f116fd0;
  if (in_stack_00000098 != (long *)0x0) {
    lVar12 = *in_stack_00000098;
    in_stack_00000098 = puVar6;
    (**(code **)(lVar12 + 8))();
    puVar6 = in_stack_00000098;
  }
  in_stack_00000098 = puVar6;
  func_0x048b05a0(in_stack_00000088,&stack0x00000000);
  puVar3 = in_stack_00000088;
  if ((DAT_0f550a20 == '\0') && (iVar5 = func_0x04108328(&DAT_0f550a20), iVar5 != 0)) {
    func_0x048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar7 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  lVar12 = in_stack_000000a0;
  puVar6 = in_stack_00000098;
  plVar7[1] = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&UNK_0ef439d0;
  in_stack_00000098 = (long *)0x0;
  in_stack_000000a0 = 0;
  plVar7[3] = (long)puVar6;
  plVar7[4] = lVar12;
  plVar7[7] = in_stack_000000b8;
  plVar7[5] = in_stack_000000a8;
  plVar7[6] = in_stack_000000b0;
  in_stack_000000a8 = 0;
  in_stack_000000b0 = 0;
  in_stack_000000b8 = 0;
  plVar7[10] = in_stack_000000d0;
  plVar7[8] = in_stack_000000c0;
  plVar7[9] = in_stack_000000c8;
  in_stack_000000c0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000d0 = 0;
  plVar7[0xb] = in_stack_000000d8;
  plVar7[0xc] = in_stack_000000e0;
  plVar7[0xd] = in_stack_000000e8;
  in_stack_000000d8 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000e8 = 0;
  plVar7[0xe] = in_stack_000000f0;
  plVar7[0xf] = in_stack_000000f8;
  plVar7[0x10] = in_stack_00000100;
  in_stack_000000f0 = 0;
  in_stack_000000f8 = 0;
  in_stack_00000100 = 0;
  *(undefined4 *)(plVar7 + 0x11) = in_stack_00000108;
  plVar7[0x12] = in_stack_00000110;
  plVar7[0x13] = in_stack_00000118;
  plVar7[0x14] = in_stack_00000120;
  in_stack_00000110 = 0;
  in_stack_00000118 = 0;
  in_stack_00000120 = 0;
  plVar7[0x17] = in_stack_00000138;
  *(undefined4 *)(plVar7 + 0x15) = uStack0000000000000128;
  *(undefined4 *)((long)plVar7 + 0xac) = uStack000000000000012c;
  *(undefined4 *)(plVar7 + 0x16) = uStack0000000000000130;
  *(undefined4 *)((long)plVar7 + 0xb4) = uStack0000000000000134;
  _uStack0000000000000128 = 0;
  _uStack0000000000000130 = 0;
  in_stack_00000138 = 0;
  *(ulong *)((long)plVar7 + 0xc5) =
       CONCAT17(uStack000000000000014c,CONCAT43(in_stack_00000148,uStack0000000000000144._1_3_));
  plVar7[0x18] = CONCAT44(uStack0000000000000144,
                          CONCAT22(uStack0000000000000142,uStack0000000000000140));
  in_stack_000001e0 = 0;
  in_stack_000001e8 = (long *)0x0;
  func_0x048afd20(puVar3,&stack0x00000000);
  if (plVar7 != (long *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    lVar12 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      func_0x0412c2d0(plVar7);
    }
  }
  plVar7 = in_stack_000001e8;
  if (in_stack_000001e8 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_000001e8 + 1;
    lVar12 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*in_stack_000001e8 + 0x10))(in_stack_000001e8);
      func_0x0412c2d0(plVar7);
    }
  }
  lVar12 = *(long *)(puVar3 + 0x10);
  iVar5 = *(int *)(puVar3 + 0x1c);
  if (iVar5 == 2) {
    piVar10 = *(int **)(*(long *)(lVar12 + 0x78) + 0x60);
    iVar5 = *piVar10;
    while (iVar5 != *(int *)(puVar3 + 0x18)) {
      piVar10 = piVar10 + 0x16;
      iVar5 = *piVar10;
    }
    for (; *(long *)(piVar10 + 0xc) != *(long *)(puVar3 + 8); piVar10 = *(int **)(piVar10 + 0xe)) {
    }
LAB_082ebf1a:
    piVar10[4] = piVar10[4] | iStack0000000000000080 << 0x10;
  }
  else {
    if (iVar5 == 1) {
      piVar10 = *(int **)(*(long *)(lVar12 + 0x78) + 0x48);
      iVar5 = *piVar10;
      while (iVar5 != *(int *)(puVar3 + 0x18)) {
        piVar10 = piVar10 + 0x1a;
        iVar5 = *piVar10;
      }
      goto LAB_082ebf1a;
    }
    if (iVar5 == 0) {
      *(uint *)(lVar12 + 0x18) = *(uint *)(lVar12 + 0x18) | iStack0000000000000080 << 0x10;
    }
  }
  func_0x048b0bc0(&stack0x00000098);
  lVar12 = in_stack_00000158;
  uVar4 = uStack0000000000000184;
  if (iStack0000000000000180 != 4) {
    if (iStack0000000000000180 != 1) {
      return;
    }
    if ((DAT_0f5d05b0 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5d05b0), iVar5 != 0)) {
      func_0x083bae90();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d0530,0xf53dab8);
      func_0x0410844d(&DAT_0f5d05b0);
    }
    plVar7 = (long *)(*(long *)(lVar12 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lVar12 + 0x20) - *(long *)(lVar12 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5d0530 + 4)) * 8);
    do {
      lVar2 = *plVar7;
      if (lVar2 == -1) goto LAB_082ebfb9;
      plVar7 = (long *)(*(long *)(lVar12 + 0x30) + lVar2 * 0x18);
    } while (*(uint *)(*(long *)(lVar12 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5d0530 + 4))
    ;
    if (plVar7 == *(long **)(lVar12 + 0x38)) {
LAB_082ebfb9:
      puVar11 = &DAT_0f5d0530;
    }
    else {
      puVar11 = (undefined *)plVar7[2];
    }
    uVar8 = func_0x048b0c90(lVar12 + 0x18,puVar11,uVar4,1);
    if (uVar8 == 0) {
      _iStack0000000000000080 = (undefined *)0x0;
      in_stack_00000088 = (undefined1 *)0x0;
      func_0x048b0d20(&stack0x00000080);
      uVar8 = (ulong)_iStack0000000000000080;
    }
    lVar12 = *(long *)(uVar8 + 0x58);
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
    goto LAB_082ec1a4;
  }
  if ((DAT_0f5d05b0 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5d05b0), iVar5 != 0)) {
    func_0x083bae90();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d0530,0xf53dab8);
    func_0x0410844d(&DAT_0f5d05b0);
  }
  plVar7 = (long *)(*(long *)(lVar12 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(lVar12 + 0x20) - *(long *)(lVar12 + 0x18)) >> 3)
                           - 1U & *(uint *)(_DAT_0f5d0530 + 4)) * 8);
  do {
    lVar2 = *plVar7;
    if (lVar2 == -1) goto LAB_082ec039;
    plVar7 = (long *)(*(long *)(lVar12 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(lVar12 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5d0530 + 4));
  if (plVar7 == *(long **)(lVar12 + 0x38)) {
LAB_082ec039:
    puVar11 = &DAT_0f5d0530;
  }
  else {
    puVar11 = (undefined *)plVar7[2];
  }
  uVar8 = func_0x048b1040(lVar12 + 0x18,puVar11,uVar4,1);
  if (uVar8 == 0) {
    _iStack0000000000000080 = (undefined *)0x0;
    in_stack_00000088 = (undefined1 *)0x0;
    func_0x048b10d0(&stack0x00000080);
    uVar9 = *(ulong *)((long)_iStack0000000000000080 + 0x38);
    uVar8 = (ulong)_iStack0000000000000080;
    if (uVar9 == 0) goto LAB_082ec119;
LAB_082ec13e:
    do {
      uVar8 = uVar9;
      uVar9 = *(ulong *)(uVar8 + 0x38);
      if (*(ulong *)(uVar8 + 0x38) == 0) {
        _iStack0000000000000080 = (undefined *)0x0;
        in_stack_00000088 = (undefined1 *)0x0;
        func_0x048b10d0(&stack0x00000080);
        uVar9 = (ulong)_iStack0000000000000080;
      }
    } while (uVar9 != 0);
  }
  else {
    uVar9 = *(ulong *)(uVar8 + 0x38);
    if (*(ulong *)(uVar8 + 0x38) != 0) goto LAB_082ec13e;
LAB_082ec119:
    _iStack0000000000000080 = (undefined *)0x0;
    in_stack_00000088 = (undefined1 *)0x0;
    func_0x048b10d0(&stack0x00000080);
    uVar9 = (ulong)_iStack0000000000000080;
    if (_iStack0000000000000080 != (undefined *)0x0) goto LAB_082ec13e;
  }
  lVar12 = *(long *)(uVar8 + 0x48);
  puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar6 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
LAB_082ec1a4:
  puVar6[1] = 1000;
  puVar6[2] = 0;
  *(undefined1 *)(puVar6 + 3) = 0xff;
  *puVar6 = &UNK_0f4e3cf0;
  puVar6[4] = 0;
  puVar6[5] = 0;
  *(undefined8 *)((long)puVar6 + 0x29) = 0;
  *(undefined8 *)((long)puVar6 + 0x31) = 0;
  plVar7 = *(long **)(lVar12 + 8);
  *(undefined8 **)(lVar12 + 8) = puVar6;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x28))();
  }
  return;
}


