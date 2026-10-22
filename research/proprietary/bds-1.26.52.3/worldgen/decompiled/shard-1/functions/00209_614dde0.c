/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x614dde0
 * Label: Editor::Services::EditorJigsawService::vslot19
 * Body:  [[0614dde0, 0614dfea]]
 * Ghidra: wg_Editor__Services__EditorJigsawService__vslot19
 */


ulong wg_Editor__Services__EditorJigsawService__vslot19(void)

{
  byte *pbVar1;
  char cVar2;
  long *plVar3;
  long in_RCX;
  byte *pbVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 unaff_RBX;
  ulong uVar8;
  long unaff_R15;
  uint unaff_retaddr;
  undefined4 unaff_retaddr_00;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  byte *in_stack_00000010;
  
  lVar5 = 0;
  do {
    lVar5 = lVar5 + 1;
  } while (in_RCX != lVar5);
  cVar2 = func_0x0614daa0();
  if (cVar2 == '\x01') {
    uVar6 = 0;
  }
  else {
    if ((*(byte *)(unaff_R15 + 8) & 1) == 0) {
      in_stack_00000010 = *(byte **)(unaff_R15 + 0x18);
      unaff_retaddr = *(uint *)(unaff_R15 + 8);
      unaff_retaddr_00 = *(undefined4 *)(unaff_R15 + 0xc);
      uStack0000000000000008 = *(undefined4 *)(unaff_R15 + 0x10);
      uStack000000000000000c = *(undefined4 *)(unaff_R15 + 0x14);
    }
    else {
      func_0x0412e5e0(&stack0x00000000,*(undefined8 *)(unaff_R15 + 0x18),
                      *(undefined8 *)(unaff_R15 + 0x10));
    }
    uVar6 = (ulong)(byte)((byte)unaff_retaddr >> 1);
    uVar7 = CONCAT44(uStack000000000000000c,uStack0000000000000008);
    pbVar1 = in_stack_00000010;
    if ((unaff_retaddr & 1) == 0) {
      uVar7 = uVar6;
      pbVar1 = &stack0x00000001;
    }
    if (uVar7 != 0) {
      plVar3 = (long *)func_0x0eee3290();
      pbVar4 = pbVar1;
      for (uVar6 = uVar7 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pbVar4 = *(byte *)(*plVar3 + (ulong)*pbVar4 * 4);
        pbVar4 = pbVar4 + 1;
      }
      if (3 < uVar7) {
        do {
          *pbVar4 = *(byte *)(*plVar3 + (ulong)*pbVar4 * 4);
          pbVar4[1] = *(byte *)(*plVar3 + (ulong)pbVar4[1] * 4);
          pbVar4[2] = *(byte *)(*plVar3 + (ulong)pbVar4[2] * 4);
          pbVar4[3] = *(byte *)(*plVar3 + (ulong)pbVar4[3] * 4);
          pbVar4 = pbVar4 + 4;
        } while (pbVar4 != pbVar1 + uVar7);
      }
      uVar6 = (ulong)(byte)((byte)unaff_retaddr >> 1);
    }
    if ((unaff_retaddr & 1) != 0) {
      uVar6 = CONCAT44(uStack000000000000000c,uStack0000000000000008);
    }
    if (uVar6 != 0) {
      uVar7 = (ulong)((uint)uVar6 & 3);
      if (3 < uVar6) {
        uVar8 = 0;
        do {
          uVar8 = uVar8 + 4;
        } while ((uVar6 & 0xfffffffffffffffc) != uVar8);
      }
      if (uVar7 != 0) {
        uVar6 = 0;
        do {
          uVar6 = uVar6 + 1;
        } while (uVar7 != uVar6);
      }
    }
    cVar2 = func_0x0614daa0();
    uVar6 = CONCAT71((int7)((ulong)unaff_RBX >> 8),cVar2 != '\x01');
    if ((unaff_retaddr & 1) != 0) {
      func_0x0412a280(in_stack_00000010,
                      CONCAT44(unaff_retaddr_00,unaff_retaddr) & 0xfffffffffffffffe);
    }
  }
  return uVar6 & 0xffffffff;
}


