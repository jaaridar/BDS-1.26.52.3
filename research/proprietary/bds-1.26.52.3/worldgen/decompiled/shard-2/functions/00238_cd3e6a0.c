/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcd3e6a0
 * Label: JigsawBlockActor::vslot2
 * Body:  [[0cd3e6a0, 0cd3e6df] [0cd3e6e1, 0cd3e71e] [0cd3e7b8, 0cd3e7ed] [0cd3e800, 0cd3e84e]]
 * Ghidra: wg_JigsawBlockActor__vslot2
 */


long wg_JigsawBlockActor__vslot2(undefined8 param_1,undefined8 param_2,uint param_3,char param_4)

{
  long in_RAX;
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long unaff_RBX;
  long lVar4;
  long unaff_R14;
  bool bVar5;
  
  *(char *)(in_RAX + -0x75) = *(char *)(in_RAX + -0x75) + param_4;
  uVar1 = (ulong)((int)in_RAX + 0x29c04e0);
  lVar2 = *(long *)(unaff_RBX + 0x1b0);
  if (lVar2 != 0) {
    lVar4 = unaff_RBX + 0x1b0;
    do {
      bVar5 = *(ulong *)(lVar2 + 0x20) < uVar1;
      if (!bVar5) {
        lVar4 = lVar2;
      }
      lVar2 = *(long *)(lVar2 + (ulong)bVar5 * 8);
    } while (lVar2 != 0);
    if ((lVar4 != unaff_RBX + 0x1b0) && (*(ulong *)(lVar4 + 0x20) <= uVar1)) {
      if (*(uint *)(lVar4 + 0x28) < 2) {
        return unaff_R14;
      }
      uVar1 = (ulong)(1 << (((char)*(undefined4 *)(lVar4 + 0x30) -
                            (char)*(undefined4 *)(lVar4 + 0x2c)) + 1U & 0x1f) & 0xffffU |
                     ~*(uint *)(lVar4 + 0x34) & param_3);
      if (uVar1 < (ulong)(*(long *)(unaff_RBX + 0x1f0) - *(long *)(unaff_RBX + 0x1e8) >> 3)) {
        lVar2 = *(long *)(*(long *)(unaff_RBX + 0x1e8) + uVar1 * 8);
        if (lVar2 != 0) {
          return lVar2;
        }
        return unaff_R14;
      }
      return unaff_R14;
    }
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
    if (*(ulong *)(((long *)*plVar3)[1] + 8) == uVar1) {
      lVar2 = (**(code **)(*(long *)*plVar3 + 8))();
      if (lVar2 != 0) {
        return lVar2;
      }
      goto LAB_0cd3e7d3;
    }
    plVar3 = plVar3 + 2;
  } while( true );
}


