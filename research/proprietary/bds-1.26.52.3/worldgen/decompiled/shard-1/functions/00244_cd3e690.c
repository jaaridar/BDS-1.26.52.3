/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcd3e690
 * Label: JigsawBlockActor::vslot2
 * Body:  [[0cd3e690, 0cd3e6cf] [0cd3e6d1, 0cd3e6ff]]
 * Ghidra: wg_JigsawBlockActor__vslot2
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long wg_JigsawBlockActor__vslot2(undefined8 param_1,undefined8 param_2,uint param_3,char *param_4)

{
  char cVar1;
  char *pcVar2;
  ulong in_RAX;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long unaff_RBX;
  long lVar6;
  long unaff_R14;
  bool bVar7;
  
  cVar1 = *(char *)(in_RAX & 0xffffffffffffff00);
  pcVar2 = (char *)CONCAT71((int7)(in_RAX >> 8),cVar1);
  param_4[-0x75] = param_4[-0x75] + (char)param_4;
  *param_4 = *param_4 - cVar1;
  *pcVar2 = *pcVar2 + cVar1;
  lVar3 = *(long *)(unaff_RBX + 0x1b0);
  if (lVar3 != 0) {
    lVar6 = unaff_RBX + 0x1b0;
    do {
      bVar7 = *(ulong *)(lVar3 + 0x20) < _DAT_0f6feb88;
      if (!bVar7) {
        lVar6 = lVar3;
      }
      lVar3 = *(long *)(lVar3 + (ulong)bVar7 * 8);
    } while (lVar3 != 0);
    if ((lVar6 != unaff_RBX + 0x1b0) && (*(ulong *)(lVar6 + 0x20) <= _DAT_0f6feb88)) {
      if (*(uint *)(lVar6 + 0x28) < 2) {
        return unaff_R14;
      }
      uVar4 = (ulong)(1 << (((char)*(undefined4 *)(lVar6 + 0x30) -
                            (char)*(undefined4 *)(lVar6 + 0x2c)) + 1U & 0x1f) & 0xffffU |
                     ~*(uint *)(lVar6 + 0x34) & param_3);
      if (uVar4 < (ulong)(*(long *)(unaff_RBX + 0x1f0) - *(long *)(unaff_RBX + 0x1e8) >> 3)) {
        lVar3 = *(long *)(*(long *)(unaff_RBX + 0x1e8) + uVar4 * 8);
        if (lVar3 != 0) {
          return lVar3;
        }
        return unaff_R14;
      }
      return unaff_R14;
    }
  }
  plVar5 = *(long **)(unaff_RBX + 0x350);
  do {
    if (plVar5 == *(long **)(unaff_RBX + 0x358)) {
LAB_0cd3e7d3:
      if ((*(byte *)(unaff_RBX + 0x135) & 8) == 0) {
        return unaff_R14;
      }
      return *(long *)(unaff_RBX + 0x200);
    }
    if (*(ulong *)(((long *)*plVar5)[1] + 8) == _DAT_0f6feb88) {
      lVar3 = (**(code **)(*(long *)*plVar5 + 8))();
      if (lVar3 != 0) {
        return lVar3;
      }
      goto LAB_0cd3e7d3;
    }
    plVar5 = plVar5 + 2;
  } while( true );
}


