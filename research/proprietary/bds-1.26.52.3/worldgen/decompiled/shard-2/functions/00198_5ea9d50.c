/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5ea9d50
 * Label: Editor::Services::EditorJigsawService::vslot8
 * Body:  [[05ea9d50, 05ea9d7f]]
 * Ghidra: wg_Editor__Services__EditorJigsawService__vslot8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_Editor__Services__EditorJigsawService__vslot8
               (undefined8 param_1,undefined8 param_2,undefined2 param_3,long param_4)

{
  long lVar1;
  char cVar2;
  undefined8 in_RAX;
  undefined7 uVar8;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  byte *pbVar6;
  ulong *puVar7;
  char unaff_BL;
  ulong uVar9;
  long unaff_R14;
  long *unaff_R15;
  byte *pbVar10;
  char in_CF;
  bool bVar11;
  ulong in_stack_00000010;
  undefined8 in_stack_00000020;
  byte bStack0000000000000030;
  undefined7 uStack0000000000000031;
  undefined8 in_stack_00000040;
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
  
  uVar8 = (undefined7)((ulong)in_RAX >> 8);
  cVar2 = ((char)in_RAX + -0xd) - in_CF;
  out(param_3,(int)CONCAT71(uVar8,cVar2));
  *(int *)(param_4 + 0x448b48c3) = *(int *)(param_4 + 0x448b48c3) + -1;
  pcVar3 = (code *)(CONCAT71(uVar8,cVar2) & 0xffffffffffffff48);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(&stack0x00000030);
  }
  if (in_stack_00000108 != (code *)0x0) {
    (*in_stack_00000108)(&stack0x000000f0);
  }
  if (unaff_BL == '\0') {
    lVar1 = *unaff_R15;
    if (*(code **)(unaff_R14 + 0x38) == (code *)0x0) {
      in_stack_000000f0 = 0;
      in_stack_000000f8 = 0;
      func_0x048b1dc0(&stack0x000000f0);
      lVar4 = in_stack_000000f0;
      uVar5 = in_stack_000000f8;
    }
    else {
      uVar5 = *(undefined8 *)(unaff_R14 + 0x28);
      lVar4 = *(long *)(unaff_R14 + 0x30);
      if (*(long *)(unaff_R14 + 0x30) == 0) {
        (**(code **)(unaff_R14 + 0x38))(0);
        lVar4 = *(long *)(unaff_R14 + 0x30);
      }
    }
    in_stack_000000e0 = lVar4;
    in_stack_000000e8 = uVar5;
    func_0x0ed8bc80(&stack0x00000030,&stack0x000000e0,*(undefined1 *)(*unaff_R15 + 0x2aa));
    uVar5 = func_0x0412f8c0(&stack0x00000030,&UNK_01479aea,10);
    uVar9 = (ulong)(bStack0000000000000080 >> 1);
    lVar4 = (long)&stack0x00000080 + 1;
    if ((bStack0000000000000080 & 1) != 0) {
      uVar9 = in_stack_00000088;
      lVar4 = in_stack_00000090;
    }
    uVar5 = func_0x0412f8c0(uVar5,lVar4,uVar9);
    pbVar6 = (byte *)func_0x0412f8c0(uVar5,&UNK_0125506d,1);
    bVar11 = (*pbVar6 & 1) != 0;
    pbVar10 = pbVar6 + 1;
    if (bVar11) {
      pbVar10 = *(byte **)(pbVar6 + 0x10);
    }
    uVar9 = (ulong)(*pbVar6 >> 1);
    if (bVar11) {
      uVar9 = *(ulong *)(pbVar6 + 8);
    }
    in_stack_000000d0 = 0;
    if (pbVar10 == (byte *)0x0) {
      in_stack_000000d0 = (ulong)((uint)uVar9 & 0x7f) << 0x30;
    }
    else {
      lVar4 = uVar9 + 9;
      puVar7 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar4,8);
      if (lVar4 != 0 && puVar7 == (ulong *)0x0) {
        func_0x0eec74c0(lVar4,8);
      }
      *puVar7 = uVar9;
      func_0x0eee2f00(puVar7 + 1,pbVar10,uVar9);
      *(undefined1 *)((long)puVar7 + uVar9 + 8) = 0;
      in_stack_000000d0 = (ulong)(puVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000;
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
      uVar9 = CONCAT71(uStack0000000000000081,bStack0000000000000080) & 0xfffffffffffffffe;
      goto LAB_05eaa1d5;
    }
    lVar4 = in_stack_000000b0;
    if (in_stack_000000a8 != 0) {
      while (lVar1 != lVar4) {
        func_0x048b3e80(lVar4 + -0x40);
        lVar4 = lVar4 + -0x40;
      }
      in_stack_000000b0 = lVar1;
      func_0x0412a280(in_stack_000000a8,in_stack_000000b8 - in_stack_000000a8);
    }
    lVar4 = in_stack_00000090;
    lVar1 = in_stack_00000098;
    if (in_stack_00000090 == 0) {
      return;
    }
    for (; lVar4 != lVar1; lVar1 = lVar1 + -0x50) {
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
    lVar4 = in_stack_000000b0;
    if (in_stack_000000a8 != 0) {
      while (lVar1 != lVar4) {
        func_0x048b3e80(lVar4 + -0x40);
        lVar4 = lVar4 + -0x40;
      }
      in_stack_000000b0 = lVar1;
      func_0x0412a280(in_stack_000000a8,in_stack_000000b8 - in_stack_000000a8);
    }
    lVar4 = in_stack_00000090;
    lVar1 = in_stack_00000098;
    if (in_stack_00000090 == 0) {
      return;
    }
    for (; lVar4 != lVar1; lVar1 = lVar1 + -0x50) {
      if ((*(char *)(lVar1 + -8) == '\x01') && ((*(byte *)(lVar1 + -0x30) & 1) != 0)) {
        func_0x0412a280(*(undefined8 *)(lVar1 + -0x20),
                        *(ulong *)(lVar1 + -0x30) & 0xfffffffffffffffe);
      }
    }
  }
  uVar9 = in_stack_000000a0 - in_stack_00000090;
  in_stack_00000098 = lVar4;
LAB_05eaa1d5:
  func_0x0412a280(in_stack_00000090,uVar9);
  return;
}


