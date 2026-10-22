/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1d9910
 * Label: br::worldgen::processors::PosRules::AlwaysTrue::vslot3
 * Body:  [[0d1d9910, 0d1d9933] [0d1d9936, 0d1d9980]]
 * Ghidra: wg_br__worldgen__processors__PosRules__AlwaysTrue__vslot3
 */


/* WARNING: Instruction at (ram,0x0d1d993b) overlaps instruction at (ram,0x0d1d9937)
    */

void wg_br__worldgen__processors__PosRules__AlwaysTrue__vslot3(void)

{
  byte *pbVar1;
  long *plVar2;
  char *pcVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long in_RAX;
  byte bVar7;
  long in_RCX;
  long *unaff_RBX;
  long unaff_R14;
  long unaff_R15;
  bool in_ZF;
  
  if (in_ZF) {
    register0x00000020 = (BADSPACEBASE *)&stack0xfffffffffffffff8;
  }
  else {
    pbVar1 = (byte *)(in_RAX + -0x75);
    bVar7 = (byte)in_RCX;
    *pbVar1 = *pbVar1 | bVar7;
    if ((char)*pbVar1 < '\0') {
      pcVar3 = (char *)((long)unaff_RBX + in_RCX * 4 + 0x74);
      *pcVar3 = *pcVar3 + bVar7;
    }
    else {
      *(char *)(in_RAX + -0x7d) = *(char *)(in_RAX + -0x7d) - bVar7;
      out(0xfe,(char)in_RAX);
      func_0x0412a280();
      func_0x0d21ed30(&stack0x00000028,*(undefined8 *)(unaff_R15 + 8),unaff_R14 + 0x10);
    }
  }
  plVar5 = *(long **)((long)register0x00000020 + 0x30);
  if (plVar5 != (long *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar4 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      pcVar6 = *(code **)(*plVar5 + 0x10);
      *(undefined8 *)((long)register0x00000020 + -8) = 0xd1d9961;
      (*pcVar6)(plVar5);
      *(undefined8 *)((long)register0x00000020 + -8) = 0xd1d9969;
      func_0x0412c2d0(plVar5);
    }
  }
  pcVar6 = *(code **)(*unaff_RBX + 8);
  *(undefined8 *)((long)register0x00000020 + -8) = 0xd1d9972;
  (*pcVar6)();
  return;
}


