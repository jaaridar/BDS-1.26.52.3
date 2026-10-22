/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5ea9d20
 * Label: Editor::Services::EditorJigsawService::vslot5
 * Body:  [[05ea9d20, 05eaa036] [05eaa040, 05eaa06d] [05eaa0ed, 05eaa1eb] [05eaa1fe, 05eaa20f]]
 * Ghidra: wg_Editor__Services__EditorJigsawService__vslot5
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_Editor__Services__EditorJigsawService__vslot5(void)

{
  long lVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  byte *pbVar5;
  ulong *puVar6;
  ulong uVar7;
  long unaff_R14;
  long *unaff_R15;
  byte *pbVar8;
  bool bVar9;
  ulong in_stack_00000010;
  undefined8 in_stack_00000020;
  byte bStack0000000000000030;
  undefined7 uStack0000000000000031;
  undefined8 in_stack_00000040;
  code *in_stack_00000048;
  byte bStack0000000000000080;
  undefined7 uStack0000000000000081;
  ulong in_stack_00000088;
  long in_stack_00000090;
  long in_stack_00000098;
  long in_stack_000000a0;
  long in_stack_000000a8;
  long in_stack_000000b0;
  long in_stack_000000b8;
  char in_stack_000000c0;
  ulong in_stack_000000d0;
  long in_stack_000000e0;
  undefined8 in_stack_000000e8;
  long in_stack_000000f0;
  undefined8 in_stack_000000f8;
  code *in_stack_00000108;
  
  func_0x05d84ba0(&stack0x000000f0);
  func_0x05d9a920(&stack0x00000030,&stack0x000000e0,&stack0x000000f0);
  cVar2 = func_0x05d9aa70();
  if (in_stack_00000048 != (code *)0x0) {
    (*in_stack_00000048)(&stack0x00000030);
  }
  if (in_stack_00000108 != (code *)0x0) {
    (*in_stack_00000108)(&stack0x000000f0);
  }
  if (cVar2 == '\0') {
    lVar1 = *unaff_R15;
    if (*(code **)(unaff_R14 + 0x38) == (code *)0x0) {
      in_stack_000000f0 = 0;
      in_stack_000000f8 = 0;
      func_0x048b1dc0(&stack0x000000f0);
      lVar3 = in_stack_000000f0;
      uVar4 = in_stack_000000f8;
    }
    else {
      uVar4 = *(undefined8 *)(unaff_R14 + 0x28);
      lVar3 = *(long *)(unaff_R14 + 0x30);
      if (*(long *)(unaff_R14 + 0x30) == 0) {
        (**(code **)(unaff_R14 + 0x38))(0);
        lVar3 = *(long *)(unaff_R14 + 0x30);
      }
    }
    in_stack_000000e0 = lVar3;
    in_stack_000000e8 = uVar4;
    func_0x0ed8bc80(&stack0x00000030,&stack0x000000e0,*(undefined1 *)(*unaff_R15 + 0x2aa));
    uVar4 = func_0x0412f8c0(&stack0x00000030,&UNK_01479aea,10);
    uVar7 = (ulong)(bStack0000000000000080 >> 1);
    lVar3 = (long)&stack0x00000080 + 1;
    if ((bStack0000000000000080 & 1) != 0) {
      uVar7 = in_stack_00000088;
      lVar3 = in_stack_00000090;
    }
    uVar4 = func_0x0412f8c0(uVar4,lVar3,uVar7);
    pbVar5 = (byte *)func_0x0412f8c0(uVar4,&UNK_0125506d,1);
    bVar9 = (*pbVar5 & 1) != 0;
    pbVar8 = pbVar5 + 1;
    if (bVar9) {
      pbVar8 = *(byte **)(pbVar5 + 0x10);
    }
    uVar7 = (ulong)(*pbVar5 >> 1);
    if (bVar9) {
      uVar7 = *(ulong *)(pbVar5 + 8);
    }
    in_stack_000000d0 = 0;
    if (pbVar8 == (byte *)0x0) {
      in_stack_000000d0 = (ulong)((uint)uVar7 & 0x7f) << 0x30;
    }
    else {
      lVar3 = uVar7 + 9;
      puVar6 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar3,8);
      if (lVar3 != 0 && puVar6 == (ulong *)0x0) {
        func_0x0eec74c0(lVar3,8);
      }
      *puVar6 = uVar7;
      func_0x0eee2f00(puVar6 + 1,pbVar8,uVar7);
      *(undefined1 *)((long)puVar6 + uVar7 + 8) = 0;
      in_stack_000000d0 = (ulong)(puVar6 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    func_0x0ed5ffe0(lVar1,0x1000,&stack0x000000d0);
    if ((in_stack_000000d0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(in_stack_000000d0 & 0xff00ffffffffffff) - 8);
    }
    in_stack_000000d0 = 0;
    if ((bStack0000000000000030 & 1) != 0) {
      func_0x0412a280(in_stack_00000040,
                      CONCAT71(uStack0000000000000031,bStack0000000000000030) & 0xfffffffffffffffe);
    }
    if ((in_stack_00000010 & 1) != 0) {
      func_0x0412a280(in_stack_00000020,in_stack_00000010 & 0xfffffffffffffffe);
    }
    lVar1 = in_stack_000000a8;
    if (in_stack_000000c0 == '\x01') {
LAB_05ea9f9a:
      if ((bStack0000000000000080 & 1) == 0) {
        return;
      }
      uVar7 = CONCAT71(uStack0000000000000081,bStack0000000000000080) & 0xfffffffffffffffe;
      goto LAB_05eaa1d5;
    }
    lVar3 = in_stack_000000b0;
    if (in_stack_000000a8 != 0) {
      while (lVar1 != lVar3) {
        func_0x048b3e80(lVar3 + -0x40);
        lVar3 = lVar3 + -0x40;
      }
      in_stack_000000b0 = lVar1;
      func_0x0412a280(in_stack_000000a8,in_stack_000000b8 - in_stack_000000a8);
    }
    lVar3 = in_stack_00000090;
    lVar1 = in_stack_00000098;
    if (in_stack_00000090 == 0) {
      return;
    }
    for (; lVar3 != lVar1; lVar1 = lVar1 + -0x50) {
      if ((*(char *)(lVar1 + -8) == '\x01') && ((*(byte *)(lVar1 + -0x30) & 1) != 0)) {
        func_0x0412a280(*(undefined8 *)(lVar1 + -0x20),
                        *(ulong *)(lVar1 + -0x30) & 0xfffffffffffffffe);
      }
    }
  }
  else {
    if ((in_stack_00000010 & 1) != 0) {
      func_0x0412a280(in_stack_00000020,in_stack_00000010 & 0xfffffffffffffffe);
    }
    lVar1 = in_stack_000000a8;
    if (in_stack_000000c0 == '\x01') goto LAB_05ea9f9a;
    lVar3 = in_stack_000000b0;
    if (in_stack_000000a8 != 0) {
      while (lVar1 != lVar3) {
        func_0x048b3e80(lVar3 + -0x40);
        lVar3 = lVar3 + -0x40;
      }
      in_stack_000000b0 = lVar1;
      func_0x0412a280(in_stack_000000a8,in_stack_000000b8 - in_stack_000000a8);
    }
    lVar3 = in_stack_00000090;
    lVar1 = in_stack_00000098;
    if (in_stack_00000090 == 0) {
      return;
    }
    for (; lVar3 != lVar1; lVar1 = lVar1 + -0x50) {
      if ((*(char *)(lVar1 + -8) == '\x01') && ((*(byte *)(lVar1 + -0x30) & 1) != 0)) {
        func_0x0412a280(*(undefined8 *)(lVar1 + -0x20),
                        *(ulong *)(lVar1 + -0x30) & 0xfffffffffffffffe);
      }
    }
  }
  uVar7 = in_stack_000000a0 - in_stack_00000090;
  in_stack_00000098 = lVar3;
LAB_05eaa1d5:
  func_0x0412a280(in_stack_00000090,uVar7);
  return;
}


