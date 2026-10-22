/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xeb9de40
 * Label: caller-of-seed
 * Body:  [[0eb9d5c2, 0eb9dcb1] [0eb9dcc0, 0eb9dd9a] [0eb9ddac, 0eb9ddde] [0eb9de40, 0eb9deb3]]
 * Ghidra: FUN_0eb9de40
 */


/* WARNING: Removing unreachable block (ram,0x0eb9dbbf) */
/* WARNING: Removing unreachable block (ram,0x0eb9dbd1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0eb9de40(void)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  int iVar5;
  long *plVar6;
  int *piVar7;
  undefined8 *puVar8;
  long unaff_RBX;
  undefined8 unaff_R15;
  int iStack0000000000000018;
  int iStack000000000000001c;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  long in_stack_00000068;
  long in_stack_00000070;
  long in_stack_00000078;
  long in_stack_00000080;
  undefined4 in_stack_00000088;
  long in_stack_00000090;
  long in_stack_00000098;
  long in_stack_000000a0;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 uStack00000000000000b0;
  undefined4 uStack00000000000000b4;
  long in_stack_000000b8;
  undefined2 uStack00000000000000c0;
  undefined2 uStack00000000000000c2;
  uint uStack00000000000000c4;
  uint in_stack_000000c8;
  undefined1 uStack00000000000000cc;
  undefined4 uStack00000000000000d0;
  undefined4 uStack00000000000000d4;
  long *in_stack_000000d8;
  undefined4 uStack00000000000000e0;
  undefined4 uStack00000000000000e4;
  undefined4 uStack00000000000000e8;
  undefined4 uStack00000000000000ec;
  int iStack00000000000000f0;
  int iStack00000000000000f4;
  undefined8 in_stack_000000f8;
  undefined1 in_stack_00000100;
  undefined4 in_stack_00000110;
  undefined4 uStack0000000000000114;
  long *in_stack_00000118;
  long *in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined *in_stack_00000138;
  undefined1 *in_stack_00000140;
  undefined *in_stack_00000148;
  undefined *in_stack_00000150;
  undefined *in_stack_00000158;
  undefined4 in_stack_00000160;
  undefined8 in_stack_00000168;
  long *in_stack_00000170;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined4 in_stack_00000190;
  undefined4 in_stack_00000198;
  undefined4 in_stack_000001a0;
  undefined4 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001f0;
  
  func_0x0410844d(&DAT_0f551bc8);
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&UNK_0ef46c48;
  plVar6[3] = unaff_RBX;
  plVar6[4] = 0;
  *(undefined1 *)(plVar6 + 5) = 0xff;
  _uStack00000000000000d0 = 0;
  in_stack_000000d8 = (long *)0x0;
  func_0x048afd20(&stack0x00000110,&stack0x00000000);
  if (plVar6 != (long *)0x0) {
    LOCK();
    plVar3 = plVar6 + 1;
    lVar2 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      func_0x0412c2d0(plVar6);
    }
  }
  plVar3 = in_stack_000000d8;
  if (in_stack_000000d8 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_000000d8 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*in_stack_000000d8 + 0x10))(in_stack_000000d8);
      func_0x0412c2d0(plVar3);
    }
  }
  func_0x0eb9dfb0(&stack0x000000d0,&stack0x00000280,&stack0x00000240);
  func_0x0ec78c80(&stack0x00000000,_uStack00000000000000d0 + 0x18);
  if (iStack000000000000001c == 2) {
    piVar7 = *(int **)(plVar6[0xf] + 0x60);
    iVar5 = *piVar7;
    while (iVar5 != iStack0000000000000018) {
      piVar7 = piVar7 + 0x16;
      iVar5 = *piVar7;
    }
    plVar3 = *(long **)(piVar7 + 0xc);
    while (plVar3 != plVar6 + 3) {
      piVar7 = *(int **)(piVar7 + 0xe);
      plVar3 = *(long **)(piVar7 + 0xc);
    }
LAB_0eb9d7bf:
    *(byte *)((long)piVar7 + 0x12) = *(byte *)((long)piVar7 + 0x12) | 4;
  }
  else {
    if (iStack000000000000001c == 1) {
      piVar7 = *(int **)(plVar6[0xf] + 0x48);
      iVar5 = *piVar7;
      while (iVar5 != iStack0000000000000018) {
        piVar7 = piVar7 + 0x1a;
        iVar5 = *piVar7;
      }
      goto LAB_0eb9d7bf;
    }
    if (iStack000000000000001c == 0) {
      *(uint *)(plVar6 + 3) = *(uint *)(plVar6 + 3) | 0x40000;
    }
  }
  if ((DAT_0f6e75c0 == '\0') && (iVar5 = func_0x04108328(&DAT_0f6e75c0), iVar5 != 0)) {
    func_0x0c4cf650(0xf6e75a8);
    func_0x0410844d(&DAT_0f6e75c0);
  }
  in_stack_000000f8 = 0x425ed3ca00000001;
  func_0x0c4cf6c0(_uStack00000000000000d0 + 0x18);
  func_0x0ed621a0(&stack0x00000000,in_stack_000000f8._4_4_);
  uVar4 = in_stack_000000f8._4_4_;
  _iStack0000000000000018 = (long *)0x0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000040 = CONCAT17(in_stack_00000040._7_1_,0x65756c61760a);
  in_stack_00000058 = 0;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_00000078 = 0;
  in_stack_00000080 = 0;
  in_stack_00000088 = 0x3f600000;
  func_0x048afb10(&stack0x00000058,8);
  _uStack00000000000000b0 = 0;
  in_stack_000000b8 = 0;
  in_stack_000000a0 = 0;
  _uStack00000000000000a8 = 0;
  in_stack_00000090 = 0;
  in_stack_00000098 = 0;
  uStack00000000000000c0 = 0xff00;
  uStack00000000000000c4 = uStack00000000000000c4 & 0xffffff00;
  in_stack_000000c8 = in_stack_000000c8 & 0xffffff00;
  uStack00000000000000cc = 0;
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar8 = unaff_R15;
  if (_iStack0000000000000018 != (long *)0x0) {
    lVar2 = *_iStack0000000000000018;
    _iStack0000000000000018 = puVar8;
    (**(code **)(lVar2 + 8))();
    puVar8 = _iStack0000000000000018;
  }
  _iStack0000000000000018 = puVar8;
  in_stack_00000110 = uVar4;
  in_stack_00000118 = (long *)0x0;
  in_stack_00000120 = (long *)((ulong)in_stack_00000120 & 0xffffffff00000000);
  in_stack_00000128 = 1;
  in_stack_00000130 = 0;
  in_stack_00000138 = &UNK_0729f0a0;
  in_stack_00000140 = &SUB_048b06d0;
  in_stack_00000148 = &UNK_0651e820;
  in_stack_00000150 = &UNK_0ec791d0;
  in_stack_00000158 = &UNK_0ec79330;
  in_stack_00000160 = 0;
  in_stack_00000168 = 0;
  in_stack_00000170 = (long *)0x0;
  func_0x048b05a0(&stack0x000000d8,&stack0x00000110);
  plVar6 = in_stack_00000170;
  if (in_stack_00000170 != (long *)0x0) {
    LOCK();
    plVar3 = in_stack_00000170 + 1;
    lVar2 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*in_stack_00000170 + 0x10))(in_stack_00000170);
      func_0x0412c2d0(plVar6);
    }
  }
  if ((DAT_0f550a20 == '\0') && (iVar5 = func_0x04108328(&DAT_0f550a20), iVar5 != 0)) {
    func_0x048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  in_stack_00000110 = _DAT_0f550a0c;
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  lVar2 = in_stack_00000020;
  puVar8 = _iStack0000000000000018;
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&UNK_0ef439d0;
  in_stack_00000118 = plVar6 + 3;
  _iStack0000000000000018 = (long *)0x0;
  in_stack_00000020 = 0;
  plVar6[3] = (long)puVar8;
  plVar6[4] = lVar2;
  plVar6[7] = in_stack_00000038;
  plVar6[5] = in_stack_00000028;
  plVar6[6] = in_stack_00000030;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  plVar6[10] = in_stack_00000050;
  plVar6[8] = in_stack_00000040;
  plVar6[9] = in_stack_00000048;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  in_stack_00000050 = 0;
  plVar6[0xb] = in_stack_00000058;
  plVar6[0xc] = in_stack_00000060;
  plVar6[0xd] = in_stack_00000068;
  in_stack_00000058 = 0;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  plVar6[0xe] = in_stack_00000070;
  plVar6[0xf] = in_stack_00000078;
  plVar6[0x10] = in_stack_00000080;
  in_stack_00000070 = 0;
  in_stack_00000078 = 0;
  in_stack_00000080 = 0;
  *(undefined4 *)(plVar6 + 0x11) = in_stack_00000088;
  plVar6[0x12] = in_stack_00000090;
  plVar6[0x13] = in_stack_00000098;
  plVar6[0x14] = in_stack_000000a0;
  in_stack_00000090 = 0;
  in_stack_00000098 = 0;
  in_stack_000000a0 = 0;
  plVar6[0x17] = in_stack_000000b8;
  *(undefined4 *)(plVar6 + 0x15) = uStack00000000000000a8;
  *(undefined4 *)((long)plVar6 + 0xac) = uStack00000000000000ac;
  *(undefined4 *)(plVar6 + 0x16) = uStack00000000000000b0;
  *(undefined4 *)((long)plVar6 + 0xb4) = uStack00000000000000b4;
  _uStack00000000000000a8 = 0;
  _uStack00000000000000b0 = 0;
  in_stack_000000b8 = 0;
  *(ulong *)((long)plVar6 + 0xc5) =
       CONCAT17(uStack00000000000000cc,CONCAT43(in_stack_000000c8,uStack00000000000000c4._1_3_));
  plVar6[0x18] = CONCAT44(uStack00000000000000c4,
                          CONCAT22(uStack00000000000000c2,uStack00000000000000c0));
  in_stack_000001f0 = 0;
  in_stack_00000120 = plVar6;
  func_0x048afd20(&stack0x000000d8,&stack0x00000110);
  plVar6 = in_stack_00000120;
  if (in_stack_00000120 != (long *)0x0) {
    LOCK();
    plVar3 = in_stack_00000120 + 1;
    lVar2 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*in_stack_00000120 + 0x10))(in_stack_00000120);
      func_0x0412c2d0(plVar6);
    }
  }
  lVar2 = CONCAT44(uStack00000000000000ec,uStack00000000000000e8);
  if (iStack00000000000000f4 == 2) {
    piVar7 = *(int **)(*(long *)(lVar2 + 0x78) + 0x60);
    iVar5 = *piVar7;
    while (iVar5 != iStack00000000000000f0) {
      piVar7 = piVar7 + 0x16;
      iVar5 = *piVar7;
    }
    for (; *(long *)(piVar7 + 0xc) != CONCAT44(uStack00000000000000e4,uStack00000000000000e0);
        piVar7 = *(int **)(piVar7 + 0xe)) {
    }
  }
  else {
    if (iStack00000000000000f4 != 1) {
      if (iStack00000000000000f4 == 0) {
        *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) | 0x100000;
      }
      goto LAB_0eb9dccd;
    }
    piVar7 = *(int **)(*(long *)(lVar2 + 0x78) + 0x48);
    iVar5 = *piVar7;
    while (iVar5 != iStack00000000000000f0) {
      piVar7 = piVar7 + 0x1a;
      iVar5 = *piVar7;
    }
  }
  piVar7[4] = piVar7[4] | 0x100000;
LAB_0eb9dccd:
  in_stack_00000140 = (undefined1 *)CONCAT71(in_stack_00000140._1_7_,in_stack_00000100);
  in_stack_00000130 = CONCAT44(iStack00000000000000f4,iStack00000000000000f0);
  in_stack_00000138 = (undefined *)in_stack_000000f8;
  in_stack_00000120 = (long *)CONCAT44(uStack00000000000000e4,uStack00000000000000e0);
  in_stack_00000128 = CONCAT44(uStack00000000000000ec,uStack00000000000000e8);
  in_stack_00000110 = uStack00000000000000d0;
  uStack0000000000000114 = uStack00000000000000d4;
  in_stack_00000118 = in_stack_000000d8;
  func_0x048b0bc0(&stack0x00000018);
  func_0x0eb9dfb0(&stack0x00000000,&stack0x00000110,&stack0x00000200);
  return;
}


