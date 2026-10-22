/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1cedd0
 * Label: JigsawStructurePostprocessAction::vslot2
 * Body:  [[0d1cedd0, 0d1cf12e]]
 * Ghidra: wg_JigsawStructurePostprocessAction__vslot2
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_JigsawStructurePostprocessAction__vslot2(void)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined *in_stack_00000040;
  long *in_stack_00000060;
  ulong auStack_48 [8];
  undefined *puStack_8;
  
  puStack_8 = &UNK_0d1cf28f;
  func_0x0412f5e0(&stack0x000008b8,&UNK_012830b5,0x1c);
  uRam000000000f71d418 = 0;
  uRam000000000f71d420 = 0;
  uRam000000000f71d408 = 0;
  uRam000000000f71d410 = 0;
  uRam000000000f71d428 = 0x3f800000;
  puStack_8 = &UNK_0d1cf3f1;
  func_0x0d1cdce0(0xf71d408,&stack0x00000010);
  puStack_8 = &UNK_0d1cf405;
  func_0x0d1cdce0(0xf71d408,&stack0x00000070);
  puStack_8 = &UNK_0d1cf41c;
  func_0x0d1cdce0(0xf71d408,&stack0x000000d0);
  puStack_8 = &UNK_0d1cf433;
  func_0x0d1cdce0(0xf71d408,&stack0x00000130);
  puStack_8 = &UNK_0d1cf44a;
  func_0x0d1cdce0(0xf71d408,&stack0x00000190);
  puStack_8 = &UNK_0d1cf45c;
  func_0x0d1cdce0(0xf71d408);
  puStack_8 = &UNK_0d1cf473;
  func_0x0d1cdce0(0xf71d408,&stack0x00000250);
  puStack_8 = &UNK_0d1cf48a;
  func_0x0d1cdce0(0xf71d408,&stack0x000002b0);
  puStack_8 = &UNK_0d1cf4a1;
  func_0x0d1cdce0(0xf71d408,&stack0x00000310);
  puStack_8 = &UNK_0d1cf4b8;
  func_0x0d1cdce0(0xf71d408,&stack0x00000370);
  puStack_8 = &UNK_0d1cf4cf;
  func_0x0d1cdce0(0xf71d408,&stack0x000003d0);
  puStack_8 = &UNK_0d1cf4e6;
  func_0x0d1cdce0(0xf71d408,&stack0x00000430);
  puStack_8 = &UNK_0d1cf4fd;
  func_0x0d1cdce0(0xf71d408,&stack0x00000490);
  puStack_8 = &UNK_0d1cf514;
  func_0x0d1cdce0(0xf71d408,&stack0x000004f0);
  puStack_8 = &UNK_0d1cf52b;
  func_0x0d1cdce0(0xf71d408,&stack0x00000550);
  puStack_8 = &UNK_0d1cf542;
  func_0x0d1cdce0(0xf71d408,&stack0x000005b0);
  puStack_8 = &UNK_0d1cf559;
  func_0x0d1cdce0(0xf71d408,&stack0x00000610);
  puStack_8 = &UNK_0d1cf570;
  func_0x0d1cdce0(0xf71d408,&stack0x00000670);
  puStack_8 = &UNK_0d1cf587;
  func_0x0d1cdce0(0xf71d408,&stack0x000006d0);
  puStack_8 = &UNK_0d1cf59e;
  func_0x0d1cdce0(0xf71d408,&stack0x00000730);
  puStack_8 = &UNK_0d1cf5b0;
  func_0x0d1cdce0(0xf71d408,&stack0x00000790,&stack0x00000790);
  puStack_8 = &UNK_0d1cf5c2;
  func_0x0d1cdce0(0xf71d408,&stack0x000007f0,&stack0x000007f0);
  puStack_8 = &UNK_0d1cf5d4;
  func_0x0d1cdce0(0xf71d408,&stack0x00000850,&stack0x00000850);
  puStack_8 = &UNK_0d1cf5eb;
  func_0x0d1cdce0(0xf71d408,&stack0x000008b0);
  puStack_8 = &UNK_0d1cf5fd;
  func_0x0d1cdce0(0xf71d408,&stack0x00000910,&stack0x00000910);
  puStack_8 = &UNK_0d1cf60f;
  func_0x0d1cdce0(0xf71d408,&stack0x00000970,&stack0x00000970);
  lVar4 = 0x9c0;
  do {
    plVar2 = *(long **)(&stack0x00000000 + lVar4);
    if ((long *)((long)auStack_48 + lVar4 + 0x28) == plVar2) {
      lVar3 = 0x20;
code_r0x0d1cf655:
      puStack_8 = &UNK_0d1cf65b;
      (**(code **)(*plVar2 + lVar3))();
      bVar1 = *(byte *)((long)auStack_48 + lVar4);
    }
    else {
      lVar3 = 0x28;
      if (plVar2 != (long *)0x0) goto code_r0x0d1cf655;
      bVar1 = *(byte *)((long)auStack_48 + lVar4);
    }
    if ((bVar1 & 1) != 0) {
      puStack_8 = &UNK_0d1cf675;
      func_0x0412a280(*(undefined8 *)((long)auStack_48 + lVar4 + 0x10),
                      *(ulong *)((long)auStack_48 + lVar4) & 0xfffffffffffffffe);
    }
    lVar4 = lVar4 + -0x60;
  } while (lVar4 != 0);
  puStack_8 = &UNK_0d1cf691;
  func_0x0eee2f40(&UNK_0d1c1f30,0xf71d408,0xf53dab8);
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  in_stack_00000030 = 0;
  puStack_8 = &UNK_0d1cf6bd;
  func_0x0412f5e0(&stack0x00000018,&UNK_012502ee,0x1c);
  in_stack_00000010 = 0xfadb458a18af4dc8;
  in_stack_00000040 = &UNK_0f459708;
  uRam000000000f71d430 = 0;
  uRam000000000f71d438 = 0;
  uRam000000000f71d440 = 0;
  uRam000000000f71d448 = 0;
  uRam000000000f71d450 = 0x3f800000;
  puStack_8 = &UNK_0d1cf711;
  in_stack_00000060 = (long *)&stack0x00000040;
  func_0x0d1cdce0(0xf71d430,&stack0x00000010);
  if ((undefined **)in_stack_00000060 == &stack0x00000040) {
    lVar4 = 0x20;
  }
  else {
    lVar4 = 0x28;
    if (in_stack_00000060 == (long *)0x0) goto joined_r0x0d1cf77b;
  }
  puStack_8 = &UNK_0d1cf776;
  (**(code **)(*in_stack_00000060 + lVar4))();
joined_r0x0d1cf77b:
  if ((in_stack_00000018 & 1) != 0) {
    puStack_8 = &UNK_0d1cf73f;
    func_0x0412a280(in_stack_00000028,in_stack_00000018 & 0xfffffffffffffffe);
  }
  puStack_8 = &UNK_0d1cf759;
  func_0x0eee2f40(&UNK_0d1c1f30,0xf71d430,0xf53dab8);
  return;
}



/* ---- referenced strings ----
 * 0x11afcc8  specific_enchants
 * 0x13bdebb  set_banner_details
 */
