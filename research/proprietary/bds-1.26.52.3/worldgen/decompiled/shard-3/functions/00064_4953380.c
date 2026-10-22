/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4953380
 * Label: string:minecraft:subsurface_builder
 * Body:  [[0495185c, 04951909] [04953035, 0495337e] [04953380, 0495362f] [04953631, 04953913] [0495391e, 04953929] [04953948, 04953959] [0495396f, 0495397d] [04953981, 04953a0f] [04953a11, 04953a50]]
 * Ghidra: FUN_04953380
 */


/* WARNING: Possible PIC construction at 0x04953986: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04951861: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0495398b) */
/* WARNING: Removing unreachable block (ram,0x04951866) */
/* WARNING: Removing unreachable block (ram,0x04951882) */
/* WARNING: Removing unreachable block (ram,0x0495188a) */
/* WARNING: Removing unreachable block (ram,0x04951897) */
/* WARNING: Removing unreachable block (ram,0x0495189f) */
/* WARNING: Removing unreachable block (ram,0x049518ac) */
/* WARNING: Removing unreachable block (ram,0x049518b4) */
/* WARNING: Removing unreachable block (ram,0x049518c0) */
/* WARNING: Removing unreachable block (ram,0x049518f6) */
/* WARNING: Removing unreachable block (ram,0x049518c5) */
/* WARNING: Removing unreachable block (ram,0x049518e7) */
/* WARNING: Removing unreachable block (ram,0x04953a0c) */
/* WARNING: Removing unreachable block (ram,0x04953520) */
/* WARNING: Removing unreachable block (ram,0x04953480) */
/* WARNING: Removing unreachable block (ram,0x049531a0) */
/* WARNING: Removing unreachable block (ram,0x049538d5) */
/* WARNING: Removing unreachable block (ram,0x04953a35) */
/* WARNING: Removing unreachable block (ram,0x049532bf) */

void FUN_04953380(void)

{
  undefined8 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 *unaff_RBX;
  undefined8 *unaff_RBP;
  ulong uVar10;
  long unaff_R12;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  undefined1 auVar16 [16];
  undefined8 in_stack_00000008;
  int iStack0000000000000010;
  int iStack0000000000000014;
  ulong in_stack_00000018;
  int in_stack_00000020;
  long *in_stack_00000040;
  int iStack0000000000000048;
  char cStack000000000000004c;
  uint in_stack_00000050;
  ulong in_stack_00000058;
  undefined8 *in_stack_00000070;
  undefined8 *in_stack_00000078;
  undefined8 *in_stack_00000080;
  long in_stack_000000a8;
  long in_stack_000000d0;
  uint in_stack_000000d8;
  undefined8 in_stack_000000f0;
  
  puVar13 = (undefined8 *)((ulong)in_stack_00000070 & 0xffffffff);
code_r0x04953384:
  puVar13 = (undefined8 *)((long)unaff_RBP - ((long)in_stack_00000078 - (long)puVar13));
  func_0x0eee2f00(puVar13);
  in_stack_00000070 = puVar13;
  in_stack_00000080 = unaff_RBX;
  while( true ) {
    uVar11 = in_stack_00000058;
    in_stack_00000078 = unaff_RBP + 2;
    unaff_R12 = *(long *)(unaff_R12 + 8);
    if (unaff_R12 == in_stack_000000a8) break;
    uVar11 = *(ulong *)(unaff_R12 + 0x18);
    if (uVar11 == 0) {
      lVar15 = 0;
    }
    else {
      uVar9 = in_stack_00000040[6];
      if ((in_stack_00000040[8] == 0) || (lVar7 = in_stack_00000040[9], uVar9 - lVar7 < uVar11)) {
        in_stack_00000018 = uVar11 + uVar9 + 0xf;
        if ((in_stack_00000018 | uVar9) >> 0x20 == 0) {
          in_stack_00000018 = (in_stack_00000018 & 0xffffffff) / (uVar9 & 0xffffffff);
        }
        else {
          in_stack_00000018 = in_stack_00000018 / uVar9;
        }
        syscall();
        lRam0000000000000009 = in_stack_00000040[7];
        uVar9 = in_stack_00000040[6];
        uRam0000000000000011 = in_stack_00000018;
        in_stack_00000040[7] = 9;
        in_stack_00000040[10] = in_stack_00000040[10] + in_stack_00000018;
        uVar11 = ((uVar11 + uVar9) - uVar9 * in_stack_00000018) + 0x10;
        if ((uVar11 | uVar9) >> 0x20 == 0) {
          uVar11 = (uVar11 & 0xffffffff) % (uVar9 & 0xffffffff);
        }
        else {
          uVar11 = uVar11 % uVar9;
        }
        in_stack_00000040[9] = uVar11;
        lVar15 = uVar9 * (in_stack_00000018 - 1) + 9;
        if (uVar11 == 0) {
          lVar15 = 0;
        }
        in_stack_00000040[8] = lVar15;
        lVar15 = 0x19;
      }
      else {
        lVar15 = in_stack_00000040[8] + lVar7;
        in_stack_00000040[9] = uVar11 + lVar7;
        if (uVar11 + lVar7 == uVar9) {
          in_stack_00000040[8] = 0;
          in_stack_00000040[9] = 0;
        }
      }
    }
    (**(code **)(*in_stack_00000040 + 0x40))
              (in_stack_00000040,lVar15,(int)in_stack_00000040[5],*(undefined8 *)(unaff_R12 + 0x10),
               *(undefined8 *)(unaff_R12 + 0x18));
    uVar9 = in_stack_00000058;
    uVar11 = *(ulong *)(unaff_R12 + 0x18);
    uVar12 = uVar11 + 7 & 0xfffffffffffffff8;
    uVar10 = (ulong)in_stack_00000050;
    if (in_stack_00000058 < uVar10 + uVar12) {
      iVar5 = func_0x0eee3730();
      uVar14 = (long)iVar5;
      if ((ulong)(long)iVar5 < uVar12) {
        uVar14 = uVar12;
      }
      iVar5 = func_0x0eee3710(iStack0000000000000048,uVar14 + uVar9);
      if (iVar5 != 0) goto LAB_04953896;
      uVar10 = (ulong)in_stack_00000050;
      in_stack_00000058 = uVar14 + uVar9;
    }
    in_stack_00000050 = (int)uVar12 + (int)uVar10;
    if ((int)uVar10 == -1) goto LAB_04953896;
    if ((*(long *)(unaff_R12 + 0x18) + uVar10 <= in_stack_00000058) && (syscall(), uVar10 == 8)) {
      syscall();
    }
    uVar1 = *(undefined8 *)(unaff_R12 + 0x10);
    uVar11 = uVar11 & 0xffffffff | uVar10 << 0x20;
    if (in_stack_00000080 <= in_stack_00000078) goto code_r0x04953311;
    *in_stack_00000078 = uVar1;
    in_stack_00000078[1] = uVar11;
    unaff_RBP = in_stack_00000078;
  }
  uVar9 = (ulong)in_stack_00000050;
  lVar15 = (long)in_stack_00000078 - (long)in_stack_00000070;
  if (lVar15 == 0) {
    if (uVar9 + 8 <= in_stack_00000058) {
LAB_04953414:
      in_stack_00000050 = (int)uVar9 + 8;
      iVar5 = 4;
      goto LAB_0495342a;
    }
    uVar6 = func_0x0eee3730();
    uVar8 = 8;
    if (8 < uVar6) {
      uVar8 = uVar6;
    }
    uVar11 = uVar11 + (long)(int)uVar8;
    iVar5 = func_0x0eee3710(iStack0000000000000048,uVar11);
    if (iVar5 == 0) {
      uVar9 = (ulong)in_stack_00000050;
      in_stack_00000058 = uVar11;
      goto LAB_04953414;
    }
LAB_049534f4:
    uVar9 = 0xffffffff;
    bVar2 = false;
    goto LAB_049534fc;
  }
  iVar5 = (int)lVar15 + 4;
  uVar10 = lVar15 + 0xbU & 0xfffffffffffffff8;
  if (in_stack_00000058 < uVar10 + uVar9) {
    iVar4 = func_0x0eee3730();
    uVar12 = (long)iVar4;
    if ((ulong)(long)iVar4 < uVar10) {
      uVar12 = uVar10;
    }
    uVar12 = uVar12 + uVar11;
    iVar4 = func_0x0eee3710(iStack0000000000000048,uVar12);
    if (iVar4 != 0) goto LAB_049534f4;
    uVar9 = (ulong)in_stack_00000050;
    in_stack_00000058 = uVar12;
  }
  in_stack_00000050 = (int)uVar10 + (int)uVar9;
LAB_0495342a:
  iVar4 = (int)uVar9;
  if (iVar4 == -1) goto LAB_049534f4;
  in_stack_00000008._4_4_ = 5;
  bVar2 = true;
  iStack0000000000000010 = iVar5;
  iStack0000000000000014 = iVar4;
  if (in_stack_00000078 != in_stack_00000070) {
    iVar5 = 0;
    uVar11 = 0;
    do {
      uVar10 = (ulong)(uint)(iVar4 + 4 + iVar5);
      if ((uVar10 + 0x10 <= in_stack_00000058) && (syscall(), uVar10 == 8)) {
        syscall();
      }
      uVar11 = uVar11 + 1;
      iVar5 = iVar5 + 0x10;
    } while (uVar11 < (ulong)((long)in_stack_00000078 - (long)in_stack_00000070 >> 4));
  }
LAB_049534fc:
  if ((uVar9 + 4 <= in_stack_00000058) && (syscall(), uVar9 == 8)) {
    syscall();
  }
  if (bVar2) {
    func_0x04957c30(in_stack_000000d0,in_stack_000000d8,2,(long)&stack0x00000008 + 4);
    cVar3 = func_0x04957c90(&stack0x00000020,(long)&stack0x00000008 + 4);
    if (cVar3 != '\0') {
      func_0x04957c30(in_stack_000000d0,in_stack_000000d8,3,(long)&stack0x00000008 + 4);
      cVar3 = func_0x04957e90(&stack0x00000020,(long)&stack0x00000008 + 4);
      if (cVar3 != '\0') {
        func_0x04957c30(in_stack_000000d0,in_stack_000000d8,4,(long)&stack0x00000008 + 4);
        in_stack_00000008._4_4_ = 0x47670003;
        cVar3 = func_0x049589f0(&stack0x00000020,&stack0x00000010,&UNK_01221dd1);
        if (cVar3 == '\0') {
          in_stack_00000008._4_4_ = 0;
          iStack0000000000000010 = 0;
          iStack0000000000000014 = 0;
        }
        func_0x04957c30(in_stack_000000d0,in_stack_000000d8,5,(long)&stack0x00000008 + 4);
        in_stack_00000008._4_4_ = 0x47670004;
        cVar3 = func_0x04958df0(&stack0x00000020,&stack0x00000010,(int)in_stack_00000040[5],
                                &UNK_012bd30b);
        if (cVar3 == '\0') {
          in_stack_00000008._4_4_ = 0;
          iStack0000000000000010 = 0;
          iStack0000000000000014 = 0;
        }
        func_0x04957c30(in_stack_000000d0,in_stack_000000d8,6,(long)&stack0x00000008 + 4);
        in_stack_00000008._4_4_ = 0x47670005;
        cVar3 = func_0x049589f0(&stack0x00000020,&stack0x00000010,&UNK_01271659);
        if (cVar3 == '\0') {
          in_stack_00000008._4_4_ = 0;
          iStack0000000000000010 = 0;
          iStack0000000000000014 = 0;
        }
        func_0x04957c30(in_stack_000000d0,in_stack_000000d8,7,(long)&stack0x00000008 + 4);
        in_stack_00000008._4_4_ = 0x47670006;
        cVar3 = func_0x04958df0(&stack0x00000020,&stack0x00000010,(int)in_stack_00000040[5],
                                &UNK_0127166a);
        if (cVar3 == '\0') {
          in_stack_00000008._4_4_ = 0;
          iStack0000000000000010 = 0;
          iStack0000000000000014 = 0;
        }
        func_0x04957c30(in_stack_000000d0,in_stack_000000d8,8,(long)&stack0x00000008 + 4);
        in_stack_00000008._4_4_ = 0x47670007;
        cVar3 = func_0x04958df0(&stack0x00000020,&stack0x00000010,(int)in_stack_00000040[5],
                                &UNK_01447425);
        if (cVar3 == '\0') {
          in_stack_00000008._4_4_ = 0;
          iStack0000000000000010 = 0;
          iStack0000000000000014 = 0;
        }
        func_0x04957c30(in_stack_000000d0,in_stack_000000d8,9,(long)&stack0x00000008 + 4);
        in_stack_00000008._4_4_ = 0x47670008;
        cVar3 = func_0x04958df0(&stack0x00000020,&stack0x00000010,(int)in_stack_00000040[5],
                                &UNK_01271654);
        if (cVar3 == '\0') {
          in_stack_00000008._4_4_ = 0;
          iStack0000000000000010 = 0;
          iStack0000000000000014 = 0;
        }
        func_0x04957c30(in_stack_000000d0,in_stack_000000d8,10,(long)&stack0x00000008 + 4);
        in_stack_00000008._4_4_ = 0x47670009;
        cVar3 = func_0x04958df0(&stack0x00000020,&stack0x00000010,(int)in_stack_00000040[5],
                                &UNK_012578cd);
        if (cVar3 == '\0') {
          in_stack_00000008._4_4_ = 0;
          iStack0000000000000010 = 0;
          iStack0000000000000014 = 0;
        }
        func_0x04957c30(in_stack_000000d0,in_stack_000000d8,0xb,(long)&stack0x00000008 + 4);
        in_stack_00000008._4_4_ = 0x4767000a;
        cVar3 = func_0x04958e40(&stack0x00000020,(long)&stack0x00000008 + 4);
        if (cVar3 == '\0') {
          in_stack_00000008._4_4_ = 0;
          iStack0000000000000010 = 0;
          iStack0000000000000014 = 0;
        }
        func_0x04957c30(in_stack_000000d0,in_stack_000000d8,0xc,(long)&stack0x00000008 + 4);
        (**(code **)(*in_stack_00000040 + 0x30))();
      }
    }
  }
LAB_04953896:
  if (((in_stack_000000f0._4_4_ != 2) &&
      ((ulong)in_stack_000000d8 + 0xc <= *(ulong *)(in_stack_000000d0 + 0x10))) &&
     (syscall(), (ulong)in_stack_000000d8 == 8)) {
    syscall();
  }
  goto SUB_049539a0;
code_r0x04953311:
  lVar15 = (long)in_stack_00000078 - (long)in_stack_00000070;
  uVar9 = (lVar15 >> 4) + 1;
  if (0xfffffffffffffff < uVar9) {
    func_0x04957ad0();
    func_0x04957ad0();
    func_0x04959880(&stack0x00000110);
    func_0x049592d0(&stack0x000000d0);
SUB_049539a0:
    if (((in_stack_00000020 == -1) && (iStack0000000000000048 != -1)) &&
       (iVar5 = func_0x0eee3710(iStack0000000000000048,in_stack_00000050), iVar5 == 0)) {
      syscall();
      iStack0000000000000048 = -1;
    }
    (**(code **)(*in_stack_00000040 + 0x30))();
    if (in_stack_00000070 != (undefined8 *)0x0) {
      in_stack_00000078 = in_stack_00000070;
    }
    if (((cStack000000000000004c == '\x01') && (iStack0000000000000048 != -1)) &&
       (iVar5 = func_0x0eee3710(iStack0000000000000048,in_stack_00000050), iVar5 == 0)) {
      syscall();
      return;
    }
    return;
  }
  uVar10 = (long)in_stack_00000080 - (long)in_stack_00000070 >> 3;
  if (uVar10 <= uVar9) {
    uVar10 = uVar9;
  }
  if (0x7fffffffffffffef < (ulong)((long)in_stack_00000080 - (long)in_stack_00000070)) {
    uVar10 = 0xfffffffffffffff;
  }
  auVar16 = func_0x04957ae0(&stack0x00000088,uVar10);
  lVar7 = auVar16._0_8_;
  unaff_RBP = (undefined8 *)(lVar7 + lVar15);
  unaff_RBX = (undefined8 *)(auVar16._8_8_ * 0x10 + lVar7);
  *(undefined8 *)(lVar7 + lVar15) = uVar1;
  *(ulong *)(lVar7 + 8 + lVar15) = uVar11;
  puVar13 = in_stack_00000070;
  goto code_r0x04953384;
}


