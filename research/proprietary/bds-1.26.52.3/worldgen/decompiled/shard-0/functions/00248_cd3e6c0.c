/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcd3e6c0
 * Label: JigsawBlockActor::vslot1
 * Body:  [[0cd3e6c0, 0cd3e71e] [0cd3e7b8, 0cd3e7ed] [0cd3e800, 0cd3e84e]]
 * Ghidra: wg_JigsawBlockActor__vslot1
 */


long wg_JigsawBlockActor__vslot1(long param_1,long param_2,uint param_3,long param_4)

{
  ulong in_RAX;
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_RBX;
  long unaff_R14;
  bool bVar4;
  
  do {
    bVar4 = *(ulong *)(param_4 + 0x20) < in_RAX;
    if (!bVar4) {
      param_2 = param_4;
    }
    param_4 = *(long *)(param_4 + (ulong)bVar4 * 8);
  } while (param_4 != 0);
  if ((param_2 != param_1) && (*(ulong *)(param_2 + 0x20) <= in_RAX)) {
    if (1 < *(uint *)(param_2 + 0x28)) {
      uVar2 = (ulong)(1 << (((char)*(undefined4 *)(param_2 + 0x30) -
                            (char)*(undefined4 *)(param_2 + 0x2c)) + 1U & 0x1f) & 0xffffU |
                     ~*(uint *)(param_2 + 0x34) & param_3);
      if ((uVar2 < (ulong)(*(long *)(unaff_RBX + 0x1f0) - *(long *)(unaff_RBX + 0x1e8) >> 3)) &&
         (lVar1 = *(long *)(*(long *)(unaff_RBX + 0x1e8) + uVar2 * 8), lVar1 != 0)) {
        return lVar1;
      }
    }
    return unaff_R14;
  }
  plVar3 = *(long **)(unaff_RBX + 0x350);
  do {
    if (plVar3 == *(long **)(unaff_RBX + 0x358)) {
LAB_0cd3e7d3:
      if ((*(byte *)(unaff_RBX + 0x135) & 8) == 0) {
        return unaff_R14;
      }
      return *(long *)(unaff_RBX + 0x200);
    }
    if (*(ulong *)(((long *)*plVar3)[1] + 8) == in_RAX) {
      lVar1 = (**(code **)(*(long *)*plVar3 + 8))();
      if (lVar1 != 0) {
        return lVar1;
      }
      goto LAB_0cd3e7d3;
    }
    plVar3 = plVar3 + 2;
  } while( true );
}


