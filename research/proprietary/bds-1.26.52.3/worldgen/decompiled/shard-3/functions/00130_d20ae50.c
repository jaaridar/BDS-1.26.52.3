/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd20ae50
 * Label: string:M21JigsawStructureLoaderFbNSt3__117basic_string_viewIcNS0_11
 * Body:  [[0d20ae50, 0d20b19d]]
 * Ghidra: FUN_0d20ae50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d20ae50(char *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  char *in_RAX;
  undefined8 *puVar5;
  long unaff_R15;
  char in_CF;
  
  bVar4 = (byte)in_RAX;
  *in_RAX = *in_RAX + bVar4 + in_CF;
  *in_RAX = *in_RAX + bVar4;
  *param_1 = *param_1 + param_4;
  *(byte *)(unaff_R15 + 0x168) = bVar4 & 0x40;
  func_0x0bc259a0(unaff_R15 + 0x170,1);
  *(undefined2 *)(unaff_R15 + 0x260) = 0x100;
  puVar5 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar5 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &UNK_0f30ccf0;
  puVar5[6] = 0;
  puVar5[4] = puVar5 + 4;
  puVar5[5] = puVar5 + 4;
  puVar5[3] = &UNK_0ef513e0;
  puVar5[7] = &UNK_0ef51410;
  *(undefined8 **)(unaff_R15 + 0x268) = puVar5 + 3;
  *(undefined8 **)(unaff_R15 + 0x270) = puVar5;
  *(undefined8 *)(unaff_R15 + 0x278) = 0;
  *(undefined8 *)(unaff_R15 + 0x280) = 0;
  *(undefined8 *)(unaff_R15 + 0x288) = 0;
  func_0x06cfd9a0(unaff_R15 + 0x298,0,0,0,0,0);
  *(undefined8 *)(unaff_R15 + 0x2f4) = 0;
  *(undefined4 *)(unaff_R15 + 0x2fc) = 0;
  *(undefined8 *)(unaff_R15 + 0x308) = 0;
  *(undefined8 *)(unaff_R15 + 0x310) = 0;
  *(undefined8 *)(unaff_R15 + 0x318) = 0;
  *(undefined8 *)(unaff_R15 + 0x2d0) = 0;
  *(undefined8 *)(unaff_R15 + 0x2d8) = 0;
  *(undefined8 *)(unaff_R15 + 0x2e0) = 0;
  *(undefined8 *)(unaff_R15 + 0x2e8) = 0;
  *(undefined1 *)(unaff_R15 + 0x2f0) = 0;
  *(undefined4 *)(unaff_R15 + 0x33c) = 8;
  func_0x06cfd9a0(unaff_R15 + 0x340,0,0,0,0,0);
  *(undefined1 *)(unaff_R15 + 0x376) = 0;
  *(undefined1 *)(unaff_R15 + 0x378) = 1;
  func_0x04863060(unaff_R15 + 0x380,0);
  *(undefined4 *)(unaff_R15 + 0x398) = 0;
  *(undefined1 *)(unaff_R15 + 0x39c) = 0;
  *(undefined4 *)(unaff_R15 + 0x3a0) = 0;
  *(undefined2 *)(unaff_R15 + 0x3a4) = 0;
  *(undefined4 *)(unaff_R15 + 0x3a8) = 0;
  *(undefined1 *)(unaff_R15 + 0x3b0) = 0;
  *(undefined1 *)(unaff_R15 + 0x430) = 0;
  *(undefined1 *)(unaff_R15 + 0x439) = 0;
  *(undefined1 *)(unaff_R15 + 0x450) = 0;
  *(undefined1 *)(unaff_R15 + 0x4bc) = 0;
  *(undefined8 *)(unaff_R15 + 0x458) = 0;
  *(undefined8 *)(unaff_R15 + 0x460) = 0;
  *(undefined8 *)(unaff_R15 + 0x468) = 0;
  *(undefined8 *)(unaff_R15 + 0x470) = 0;
  *(undefined8 *)(unaff_R15 + 0x478) = 0;
  *(undefined8 *)(unaff_R15 + 0x480) = 0;
  *(undefined8 *)(unaff_R15 + 0x488) = 0;
  *(undefined8 *)(unaff_R15 + 0x490) = 0;
  *(undefined8 *)(unaff_R15 + 0x498) = 0;
  *(undefined8 *)(unaff_R15 + 0x4a0) = 0;
  *(undefined8 *)(unaff_R15 + 0x4a8) = 0;
  *(undefined8 *)(unaff_R15 + 0x4b0) = 0;
  *(undefined4 *)(unaff_R15 + 0x4bf) = 0;
  *(undefined1 *)(unaff_R15 + 0x4c3) = 0;
  *(undefined8 *)(unaff_R15 + 0x4c8) = 0;
  *(undefined8 *)(unaff_R15 + 0x4d0) = 0;
  *(undefined8 *)(unaff_R15 + 0x4d8) = 0;
  *(undefined8 *)(unaff_R15 + 0x4e0) = 0;
  *(undefined8 *)(unaff_R15 + 0x4e8) = 0;
  *(undefined1 *)(unaff_R15 + 0x4d0) = 0x20;
  uVar3 = _UNK_014adbc0;
  uVar2 = _UNK_014adbbc;
  uVar1 = _UNK_014adbb8;
  *(undefined4 *)(unaff_R15 + 0x4d1) = _DAT_014adbb4;
  *(undefined4 *)(unaff_R15 + 0x4d5) = uVar1;
  *(undefined4 *)(unaff_R15 + 0x4d9) = uVar2;
  *(undefined4 *)(unaff_R15 + 0x4dd) = uVar3;
  *(undefined8 *)(unaff_R15 + 0x500) = 0;
  *(undefined8 *)(unaff_R15 + 0x508) = 0;
  *(undefined8 *)(unaff_R15 + 0x4f0) = 0;
  *(undefined8 *)(unaff_R15 + 0x4f8) = 0;
  *(undefined4 *)(unaff_R15 + 0x510) = 0x3f800000;
  *(undefined8 *)(unaff_R15 + 0x518) = 0;
  *(undefined8 *)(unaff_R15 + 0x520) = 0;
  *(undefined8 *)(unaff_R15 + 0x528) = 0;
  *(undefined8 *)(unaff_R15 + 0x530) = 0;
  *(undefined4 *)(unaff_R15 + 0x538) = 0x3f800000;
  *(undefined1 *)(unaff_R15 + 0x55c) = 0;
  *(undefined1 *)(unaff_R15 + 0x560) = 0;
  *(undefined8 *)(unaff_R15 + 0x540) = 0;
  *(undefined8 *)(unaff_R15 + 0x548) = 0;
  *(undefined8 *)(unaff_R15 + 0x549) = 0;
  *(undefined8 *)(unaff_R15 + 0x551) = 0;
  puVar5 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar5 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[1] = puVar5 + 1;
  puVar5[2] = puVar5 + 1;
  *puVar5 = &UNK_0f02e910;
  puVar5[4] = &UNK_0f02e940;
  *(undefined8 **)(unaff_R15 + 0x568) = puVar5;
  *(undefined8 *)(unaff_R15 + 0x570) = 0;
  *(undefined8 *)(unaff_R15 + 0x578) = 0;
  *(undefined8 *)(unaff_R15 + 0x580) = 0;
  *(undefined8 *)(unaff_R15 + 0x588) = 0;
  *(undefined8 *)(unaff_R15 + 0x590) = 0;
  *(undefined8 *)(unaff_R15 + 0x598) = 0;
  *(undefined8 *)(unaff_R15 + 0x5a0) = 0;
  *(undefined8 *)(unaff_R15 + 0x5a8) = 0;
  *(undefined4 *)(unaff_R15 + 0x5b0) = 0;
  func_0x0d208450();
  func_0x0d1f01b0();
  return;
}



/* ---- referenced strings ----
 * 0x14adbb4  minecraft:plains
 */
