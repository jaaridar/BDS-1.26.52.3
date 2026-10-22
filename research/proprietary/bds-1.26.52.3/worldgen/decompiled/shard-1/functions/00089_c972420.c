/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc972420
 * Label: callee-of:0x517c470
 * Body:  [[0c971f34, 0c97236a] [0c972420, 0c972457] [0c972470, 0c97284f]]
 * Ghidra: FUN_0c972420
 */


/* WARNING: Removing unreachable block (ram,0x0c97279c) */
/* WARNING: Removing unreachable block (ram,0x0c9727ae) */
/* WARNING: Removing unreachable block (ram,0x0c972296) */
/* WARNING: Removing unreachable block (ram,0x0c9722a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c972420(undefined8 param_1)

{
  byte *pbVar1;
  long *plVar2;
  char *pcVar3;
  byte bVar4;
  int iVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  long lVar11;
  long in_RAX;
  int *piVar12;
  long *plVar13;
  byte bVar14;
  long in_RCX;
  long unaff_RBP;
  byte in_R8B;
  long in_R9;
  undefined4 *unaff_R13;
  long *unaff_R15;
  bool bVar15;
  bool bVar16;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined8 unaff_retaddr;
  long *plVar17;
  long *in_stack_00000008;
  long *in_stack_00000010;
  long *in_stack_00000018;
  long *in_stack_00000020;
  long *in_stack_00000028;
  long *in_stack_00000030;
  long *in_stack_00000038;
  long *in_stack_00000040;
  long *in_stack_00000048;
  long *in_stack_00000050;
  long *in_stack_00000058;
  undefined8 in_stack_00000068;
  byte bStack0000000000000070;
  undefined7 uStack0000000000000071;
  undefined8 in_stack_00000080;
  byte bStack0000000000000088;
  undefined7 uStack0000000000000089;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  long *in_stack_000000a8;
  undefined8 in_stack_000000b0;
  long *in_stack_000000b8;
  long *in_stack_000000c0;
  long *in_stack_000000c8;
  long *in_stack_000000f0;
  long *in_stack_000000f8;
  long *in_stack_00000100;
  long *in_stack_00000108;
  undefined8 in_stack_00000140;
  long *in_stack_00000148;
  undefined *in_stack_00000190;
  ulong in_stack_00000198;
  long in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined1 in_stack_000001b0;
  long *in_stack_000001c0;
  byte in_stack_000005c8;
  undefined7 in_stack_000005c9;
  undefined8 in_stack_000005d8;
  long in_stack_000009e0;
  long *plVar18;
  
  bVar14 = (byte)in_RCX;
  *(char *)(in_RAX + -0x75) = *(char *)(in_RAX + -0x75) + bVar14;
  uVar10 = (int)in_RAX + 0x89480000;
  *(int *)(ulong)uVar10 = *(int *)(ulong)uVar10 + uVar10;
  pcVar3 = (char *)(unaff_RBP + -0x54 + in_RCX * 4);
  *pcVar3 = *pcVar3 + bVar14;
  piVar12 = (int *)((ulong)uVar10 & 0xffffffffffffff98);
  uVar10 = (uint)piVar12;
  *piVar12 = *piVar12 + uVar10;
  bVar15 = 0xdbbb74b6 < uVar10 + 0x75010000 ||
           CARRY4(uVar10 + 0x99458b49,(uint)(0x8afeffff < uVar10));
  pbVar1 = (byte *)(in_RCX + -0x77);
  bVar16 = CARRY1(*pbVar1,bVar14) || CARRY1(*pbVar1 + bVar14,bVar15);
  *pbVar1 = *pbVar1 + bVar14 + bVar15;
  pbVar1 = (byte *)(in_R9 + 0xf);
  bVar14 = *pbVar1;
  bVar4 = *pbVar1;
  *pbVar1 = bVar4 + in_R8B + bVar16;
  plVar17 = (long *)CONCAT71((int7)((ulong)unaff_retaddr >> 8),
                             (char)unaff_retaddr +
                             (char)(uVar10 + 0x99458b49) + (0x8afeffff < uVar10) +
                             (CARRY1(bVar14,in_R8B) || CARRY1(bVar4 + in_R8B,bVar16)));
  *unaff_R13 = (int)param_1;
  unaff_R13[1] = (int)((ulong)param_1 >> 0x20);
  unaff_R13[2] = in_XMM0_Dc;
  unaff_R13[3] = in_XMM0_Dd;
  func_0x0eee2dd0(&stack0x000001b0,0,0x400);
  if (in_stack_000009e0 != -1) {
    func_0x0eee2f00(&stack0x000001b0);
  }
  in_stack_000000b0 = 0;
  in_stack_000000b8 = (long *)0x0;
  in_stack_000000a0 = 0;
  in_stack_000000a8 = (long *)0x0;
  in_stack_00000108 = (long *)0x0;
  in_stack_00000100 = (long *)&UNK_0f3e8528;
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x428);
  if (plVar13 == (long *)0x0) {
    func_0x0eec74c0(0x428,0);
  }
  *plVar13 = (long)in_stack_00000190;
  if ((in_stack_00000198 & 1) == 0) {
    plVar13[3] = *(long *)(unaff_R13 + 4);
    uVar7 = unaff_R13[1];
    uVar8 = unaff_R13[2];
    uVar9 = unaff_R13[3];
    *(undefined4 *)(plVar13 + 1) = *unaff_R13;
    *(undefined4 *)((long)plVar13 + 0xc) = uVar7;
    *(undefined4 *)(plVar13 + 2) = uVar8;
    *(undefined4 *)((long)plVar13 + 0x14) = uVar9;
  }
  else {
    func_0x0412e5e0(plVar13 + 1,in_stack_000001a8,in_stack_000001a0);
  }
  func_0x0eee2dd0(plVar13 + 4,0,0x408);
  if (in_stack_000009e0 != -1) {
    func_0x0eee2f00(plVar13 + 4,&stack0x000001b0);
  }
  plVar13[0x84] = in_stack_000009e0;
  in_stack_000001b0 = 0;
  in_stack_00000108 = plVar13;
  func_0x0b968430(&stack0x00000000);
  plVar13 = in_stack_00000030;
  if (in_stack_00000100 != (long *)0x0) {
    (*(code *)in_stack_00000100[1])(&stack0x00000100);
  }
  plVar6 = in_stack_000000b8;
  if (in_stack_000000b8 != (long *)0x0) {
    LOCK();
    plVar18 = in_stack_000000b8 + 1;
    lVar11 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*in_stack_000000b8 + 0x10))(in_stack_000000b8);
      func_0x0412c2d0(plVar6);
    }
  }
  in_stack_000000f8 = in_stack_00000008;
  if (in_stack_00000008 != (long *)0x0) {
    LOCK();
    in_stack_00000008[1] = in_stack_00000008[1] + 1;
    UNLOCK();
  }
  iVar5 = (int)unaff_R15[0x10];
  in_stack_000000f0 = plVar17;
  if (iVar5 != 1) {
    if (iVar5 == 3) {
      *(undefined4 *)(plVar17 + 6) = 0;
    }
    else if (iVar5 == 2) {
      (**(code **)(*plVar17 + 0x10))();
      goto LAB_0c9726b7;
    }
    in_stack_00000018 = in_stack_00000008;
    if (in_stack_00000008 != (long *)0x0) {
      LOCK();
      in_stack_00000008[1] = in_stack_00000008[1] + 1;
      UNLOCK();
    }
    in_stack_00000010 = plVar17;
    (**(code **)(*unaff_R15 + 0x28))();
    plVar6 = in_stack_00000018;
    if (in_stack_00000018 != (long *)0x0) {
      LOCK();
      plVar18 = in_stack_00000018 + 1;
      lVar11 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*in_stack_00000018 + 0x10))(in_stack_00000018);
        func_0x0412c2d0(plVar6);
      }
    }
  }
LAB_0c9726b7:
  plVar6 = in_stack_000000f8;
  if (in_stack_000000f8 != (long *)0x0) {
    LOCK();
    plVar18 = in_stack_000000f8 + 1;
    lVar11 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*in_stack_000000f8 + 0x10))(in_stack_000000f8);
      func_0x0412c2d0(plVar6);
    }
  }
  in_stack_00000040 = plVar17 + 0xe;
  if (plVar17 == (long *)0x0) {
    in_stack_00000040 = (long *)0x0;
  }
  in_stack_00000048 = in_stack_00000008;
  in_stack_00000140 = 0;
  in_stack_00000148 = (long *)0x0;
  func_0x0b9685d0(&stack0x00000010,&stack0x00000040);
  plVar18 = in_stack_00000048;
  plVar6 = in_stack_00000018;
  plVar17 = in_stack_00000010;
  in_stack_00000010 = (long *)0x0;
  in_stack_00000018 = (long *)0x0;
  if (in_stack_00000048 != (long *)0x0) {
    LOCK();
    plVar2 = in_stack_00000048 + 1;
    lVar11 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*in_stack_00000048 + 0x10))(in_stack_00000048);
      func_0x0412c2d0(plVar18);
    }
  }
  plVar18 = in_stack_00000148;
  if (in_stack_00000148 != (long *)0x0) {
    LOCK();
    plVar2 = in_stack_00000148 + 1;
    lVar11 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*in_stack_00000148 + 0x10))(in_stack_00000148);
      func_0x0412c2d0(plVar18);
    }
  }
  if ((in_stack_00000198 & 1) != 0) {
    func_0x0412a280(in_stack_000001a8,in_stack_00000198 & 0xfffffffffffffffe);
  }
  plVar18 = in_stack_000000a8;
  if (in_stack_000000a8 != (long *)0x0) {
    LOCK();
    plVar2 = in_stack_000000a8 + 1;
    lVar11 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*in_stack_000000a8 + 0x10))(in_stack_000000a8);
      func_0x0412c2d0(plVar18);
    }
  }
  in_stack_00000020 = plVar17;
  in_stack_00000028 = plVar6;
  if ((in_stack_000005c8 & 1) != 0) {
    func_0x0412a280(in_stack_000005d8,
                    CONCAT71(in_stack_000005c9,in_stack_000005c8) & 0xfffffffffffffffe);
  }
  if ((bStack0000000000000088 & 1) == 0) {
    if ((bStack0000000000000070 & 1) == 0) goto LAB_0c971f4e;
LAB_0c971fbf:
    func_0x0412a280(in_stack_00000080,
                    CONCAT71(uStack0000000000000071,bStack0000000000000070) & 0xfffffffffffffffe);
    if (((ulong)in_stack_00000058 & 1) != 0) goto LAB_0c971fe0;
LAB_0c971f59:
    plVar18 = (long *)plVar13[4];
    if (plVar18 != (long *)0x0) goto LAB_0c971f67;
LAB_0c972001:
    plVar18 = (long *)0x0;
LAB_0c972019:
    in_stack_00000028 = (long *)0x0;
    in_stack_00000020 = (long *)0x0;
    plVar13 = (long *)0x0;
  }
  else {
    func_0x0412a280(in_stack_00000098,
                    CONCAT71(uStack0000000000000089,bStack0000000000000088) & 0xfffffffffffffffe);
    if ((bStack0000000000000070 & 1) != 0) goto LAB_0c971fbf;
LAB_0c971f4e:
    if (((ulong)in_stack_00000058 & 1) == 0) goto LAB_0c971f59;
LAB_0c971fe0:
    func_0x0412a280(in_stack_00000068,(ulong)in_stack_00000058 & 0xfffffffffffffffe);
    plVar18 = (long *)plVar13[4];
    if (plVar18 == (long *)0x0) goto LAB_0c972001;
LAB_0c971f67:
    if (plVar18 == plVar13) {
      (**(code **)(*plVar18 + 0x18))(plVar18,&stack0x000009f0);
      plVar18 = (long *)&stack0x000009f0;
      if ((long *)&stack0x000009f0 == (long *)0x0) goto LAB_0c972019;
    }
    else {
      plVar13[4] = 0;
    }
    in_stack_00000028 = (long *)0x0;
    in_stack_00000020 = (long *)0x0;
    if (plVar18 == (long *)&stack0x000009f0) {
      plVar13 = (long *)&stack0x000005c0;
      (**(code **)(*plVar18 + 0x18))();
    }
    else {
      plVar13 = plVar18;
      plVar18 = (long *)0x0;
    }
  }
  plVar2 = in_stack_00000038;
  in_stack_000000c0 = plVar17;
  in_stack_000000c8 = plVar6;
  in_stack_00000198 = 0;
  in_stack_00000190 = &UNK_0f3e8510;
  if (plVar13 == (long *)0x0) {
    in_stack_000001c0 = (long *)0x0;
  }
  else if (plVar13 == (long *)&stack0x000005c0) {
    in_stack_000001c0 = &stack0x000001a0;
    (**(code **)(*plVar13 + 0x18))();
  }
  else {
    in_stack_000001c0 = plVar13;
    plVar13 = (long *)0x0;
  }
  func_0x0b96b4b0(&stack0x00000100,plVar2,&stack0x00000160,&stack0x000000c0,0,&stack0x00000190);
  if (in_stack_00000190 != (undefined *)0x0) {
    (**(code **)(in_stack_00000190 + 8))(&stack0x00000190);
  }
  plVar17 = in_stack_000000c8;
  if (in_stack_000000c8 != (long *)0x0) {
    LOCK();
    plVar6 = in_stack_000000c8 + 1;
    lVar11 = *plVar6;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*in_stack_000000c8 + 0x10))(in_stack_000000c8);
      func_0x0412c2d0(plVar17);
    }
  }
  in_stack_00000010 = in_stack_00000100;
  in_stack_00000018 = in_stack_00000108;
  if (in_stack_00000108 != (long *)0x0) {
    LOCK();
    in_stack_00000108[1] = in_stack_00000108[1] + 1;
    UNLOCK();
  }
  iVar5 = (int)plVar2[0x10];
  if (iVar5 != 1) {
    if (iVar5 == 3) {
      *(undefined4 *)(in_stack_00000100 + 6) = 0;
    }
    else if (iVar5 == 2) {
      (**(code **)(*in_stack_00000100 + 0x10))();
      goto LAB_0c972221;
    }
    in_stack_00000050 = in_stack_00000100;
    in_stack_00000058 = in_stack_00000108;
    if (in_stack_00000108 != (long *)0x0) {
      LOCK();
      in_stack_00000108[1] = in_stack_00000108[1] + 1;
      UNLOCK();
    }
    (**(code **)(*plVar2 + 0x28))(plVar2,&stack0x00000050,0);
    plVar17 = in_stack_00000058;
    if (in_stack_00000058 != (long *)0x0) {
      LOCK();
      plVar6 = in_stack_00000058 + 1;
      lVar11 = *plVar6;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*in_stack_00000058 + 0x10))(in_stack_00000058);
        func_0x0412c2d0(plVar17);
      }
    }
  }
LAB_0c972221:
  plVar17 = in_stack_00000018;
  if (in_stack_00000018 != (long *)0x0) {
    LOCK();
    plVar6 = in_stack_00000018 + 1;
    lVar11 = *plVar6;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*in_stack_00000018 + 0x10))(in_stack_00000018);
      func_0x0412c2d0(plVar17);
    }
  }
  plVar17 = in_stack_00000108;
  if (plVar13 == (long *)&stack0x000005c0) {
    lVar11 = 0x20;
LAB_0c972286:
    (**(code **)(*plVar13 + lVar11))();
  }
  else {
    lVar11 = 0x28;
    if (plVar13 != (long *)0x0) goto LAB_0c972286;
  }
  if (plVar17 == (long *)0x0) {
LAB_0c9722d0:
    if (plVar18 != (long *)&stack0x000009f0) goto LAB_0c9722e5;
LAB_0c972321:
    lVar11 = 0x20;
  }
  else {
    LOCK();
    plVar13 = plVar17 + 1;
    lVar11 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar11 != 0) goto LAB_0c9722d0;
    (**(code **)(*plVar17 + 0x10))(plVar17);
    func_0x0412c2d0(plVar17);
    if (plVar18 == (long *)&stack0x000009f0) goto LAB_0c972321;
LAB_0c9722e5:
    lVar11 = 0x28;
    plVar17 = in_stack_00000028;
    if (plVar18 == (long *)0x0) goto joined_r0x0c972334;
  }
  (**(code **)(*plVar18 + lVar11))();
  plVar17 = in_stack_00000028;
joined_r0x0c972334:
  if (plVar17 != (long *)0x0) {
    LOCK();
    plVar13 = plVar17 + 1;
    lVar11 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      in_stack_00000028 = plVar17;
      (**(code **)(*plVar17 + 0x10))(plVar17);
      func_0x0412c2d0(plVar17);
    }
  }
  return;
}


