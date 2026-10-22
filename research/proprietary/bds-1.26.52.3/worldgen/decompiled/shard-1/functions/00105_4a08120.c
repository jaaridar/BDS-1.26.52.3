/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a08120
 * Label: string:ZN14FeatureLoading12_buildSchemaI21UnderwaterCaveFeatureEEvR
 * Body:  [[04a07ffa, 04a080d8] [04a080ed, 04a080f6] [04a08120, 04a0814f]]
 * Ghidra: FUN_04a08120
 */


/* WARNING: Removing unreachable block (ram,0x04a08098) */

long * FUN_04a08120(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  int in_EAX;
  long *plVar3;
  long *unaff_R15;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined8 in_stack_00000018;
  undefined1 uStack000000000000003c;
  
  uVar5 = (undefined4)((ulong)param_1 >> 0x20);
  uVar4 = (undefined4)param_1;
  if (in_EAX != 0) {
    func_0x04a087d0(0xf554c90);
    func_0x0410844d(0xf554ca8);
    uVar4 = 0;
    uVar5 = 0;
    in_XMM0_Dc = 0;
    in_XMM0_Dd = 0;
  }
  plVar3 = unaff_R15 + 3;
  *(undefined4 *)(unaff_R15 + 8) = uVar4;
  *(undefined4 *)((long)unaff_R15 + 0x44) = uVar5;
  *(undefined4 *)(unaff_R15 + 9) = in_XMM0_Dc;
  *(undefined4 *)((long)unaff_R15 + 0x4c) = in_XMM0_Dd;
  *(undefined4 *)(unaff_R15 + 6) = uVar4;
  *(undefined4 *)((long)unaff_R15 + 0x34) = uVar5;
  *(undefined4 *)(unaff_R15 + 7) = in_XMM0_Dc;
  *(undefined4 *)((long)unaff_R15 + 0x3c) = in_XMM0_Dd;
  *(undefined4 *)(unaff_R15 + 4) = uVar4;
  *(undefined4 *)((long)unaff_R15 + 0x24) = uVar5;
  *(undefined4 *)(unaff_R15 + 5) = in_XMM0_Dc;
  *(undefined4 *)((long)unaff_R15 + 0x2c) = in_XMM0_Dd;
  unaff_R15[10] = 0xf554c90;
  *(undefined1 *)(unaff_R15 + 0xb) = 1;
  unaff_R15[0xc] = 0x3ffff;
  unaff_R15[3] = (long)&UNK_0ef4fcb8;
  *(undefined4 *)(unaff_R15 + 0xd) = uVar4;
  *(undefined4 *)((long)unaff_R15 + 0x6c) = uVar5;
  *(undefined4 *)(unaff_R15 + 0xe) = in_XMM0_Dc;
  *(undefined4 *)((long)unaff_R15 + 0x74) = in_XMM0_Dd;
  unaff_R15[0xf] = 0;
  func_0x049303a0();
  uStack000000000000003c = 3;
  (**(code **)(*plVar3 + 0x28))(plVar3,&stack0x00000018);
  if (unaff_R15 != (long *)0x0) {
    LOCK();
    plVar1 = unaff_R15 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*unaff_R15 + 0x10))(unaff_R15);
      func_0x0412c2d0(unaff_R15);
    }
  }
  return plVar3;
}


