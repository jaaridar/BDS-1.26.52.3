/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc752cd0
 * Label: VanillaSurfaceBuilders::OverworldDefaultSurfaceBuilder::vslot4
 * Body:  [[0c752878, 0c752894] [0c752cd0, 0c752d95]]
 * Ghidra: wg_VanillaSurfaceBuilders__OverworldDefaultSurfaceBuilder__vslot4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_VanillaSurfaceBuilders__OverworldDefaultSurfaceBuilder__vslot4(void)

{
  char *pcVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong in_RAX;
  long lVar6;
  char in_CL;
  long unaff_R14;
  long unaff_retaddr;
  
  pcVar1 = (char *)((in_RAX & 0xffffffffffffff20) - 0x73);
  *pcVar1 = *pcVar1 + in_CL;
  *(undefined8 *)(unaff_retaddr + -8) = 0xc752ceb;
  func_0x0d6bbef0();
  if ((*(byte *)(unaff_retaddr + 0x10) & 1) != 0) {
    *(undefined8 *)(unaff_retaddr + -8) = 0xc752d05;
    func_0x0412a280(*(undefined8 *)(unaff_retaddr + 0x20),
                    *(ulong *)(unaff_retaddr + 0x10) & 0xfffffffffffffffe);
  }
  *(undefined1 *)(unaff_retaddr + 0x30) = 0x20;
  uVar5 = _UNK_0129b6c9;
  uVar4 = _UNK_0129b6c5;
  uVar3 = _UNK_0129b6c1;
  *(undefined4 *)(unaff_retaddr + 0x31) = _DAT_0129b6bd;
  *(undefined4 *)(unaff_retaddr + 0x35) = uVar3;
  *(undefined4 *)(unaff_retaddr + 0x39) = uVar4;
  *(undefined4 *)(unaff_retaddr + 0x3d) = uVar5;
  *(undefined1 *)(unaff_retaddr + 0x41) = 0;
  *(long *)(unaff_retaddr + 0x28) = unaff_retaddr + 0x30;
  *(undefined8 *)(unaff_retaddr + -8) = 0xc752d45;
  lVar6 = func_0x0d6c9580(unaff_R14 + 8,unaff_retaddr + 0x30,&UNK_01563a4f,unaff_retaddr + 0x28,
                          unaff_retaddr + 0xf);
  if ((ulong)*(uint *)(lVar6 + 0x60) != 0xffffffff) {
    pcVar2 = *(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar6 + 0x60) * 8);
    *(undefined8 *)(unaff_retaddr + -8) = 0xc752d6b;
    (*pcVar2)(unaff_retaddr + 0x28,lVar6 + 0x38);
  }
  *(undefined **)(lVar6 + 0x38) = &UNK_0f47e2e0;
  *(undefined4 *)(lVar6 + 0x40) = 2;
  *(undefined4 *)(lVar6 + 0x60) = 3;
  if ((*(byte *)(unaff_retaddr + 0x30) & 1) != 0) {
    *(undefined8 *)(unaff_retaddr + -8) = 0xc75288d;
    func_0x0412a280(*(undefined8 *)(unaff_retaddr + 0x40),
                    *(ulong *)(unaff_retaddr + 0x30) & 0xfffffffffffffffe);
  }
  return;
}



/* ---- referenced strings ----
 * 0x129b6bd  weirdo_direction
 */
