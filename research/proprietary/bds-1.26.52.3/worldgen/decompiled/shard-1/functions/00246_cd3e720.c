/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcd3e720
 * Label: JigsawBlockActor::vslot5
 * Body:  [[0cd3e720, 0cd3e7ed] [0cd3e800, 0cd3e84e]]
 * Ghidra: wg_JigsawBlockActor__vslot5
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long wg_JigsawBlockActor__vslot5(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  uint *in_RAX;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  bool bVar8;
  
  lVar1 = *(long *)((ulong)*in_RAX + 0x200);
  lVar2 = *(long *)(lVar1 + 0x68);
  lVar4 = *(long *)(lVar2 + 0x1b0);
  if (lVar4 != 0) {
    lVar7 = lVar2 + 0x1b0;
    do {
      bVar8 = *(ulong *)(lVar4 + 0x20) < _DAT_0f6feb88;
      if (!bVar8) {
        lVar7 = lVar4;
      }
      lVar4 = *(long *)(lVar4 + (ulong)bVar8 * 8);
    } while (lVar4 != 0);
    if ((lVar7 != lVar2 + 0x1b0) && (*(ulong *)(lVar7 + 0x20) <= _DAT_0f6feb88)) {
      if (*(uint *)(lVar7 + 0x28) < 2) {
        return lVar1;
      }
      uVar5 = (ulong)(1 << (((char)*(undefined4 *)(lVar7 + 0x30) -
                            (char)*(undefined4 *)(lVar7 + 0x2c)) + 1U & 0x1f) & 0xffffU |
                     ~*(uint *)(lVar7 + 0x34) & (uint)*(ushort *)(lVar1 + 0x128));
      if (uVar5 < (ulong)(*(long *)(lVar2 + 0x1f0) - *(long *)(lVar2 + 0x1e8) >> 3)) {
        lVar2 = *(long *)(*(long *)(lVar2 + 0x1e8) + uVar5 * 8);
        if (lVar2 != 0) {
          return lVar2;
        }
        return lVar1;
      }
      return lVar1;
    }
  }
  plVar6 = *(long **)(lVar2 + 0x350);
  do {
    if (plVar6 == *(long **)(lVar2 + 0x358)) {
LAB_0cd3e7d3:
      if ((*(byte *)(lVar2 + 0x135) & 8) == 0) {
        return lVar1;
      }
      return *(long *)(lVar2 + 0x200);
    }
    plVar3 = (long *)*plVar6;
    if (*(ulong *)(plVar3[1] + 8) == _DAT_0f6feb88) {
      lVar4 = (**(code **)(*plVar3 + 8))(plVar3,lVar2,*(ushort *)(lVar1 + 0x128),1);
      if (lVar4 != 0) {
        return lVar4;
      }
      goto LAB_0cd3e7d3;
    }
    plVar6 = plVar6 + 2;
  } while( true );
}


