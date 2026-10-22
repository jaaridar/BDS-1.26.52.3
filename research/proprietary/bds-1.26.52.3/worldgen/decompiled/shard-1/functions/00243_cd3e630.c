/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcd3e630
 * Label: JigsawBlockActor::vslot0
 * Body:  [[0cd3e630, 0cd3e648] [0cd3e64a, 0cd3e65f] [0cd3e661, 0cd3e671]]
 * Ghidra: wg_JigsawBlockActor__vslot0
 */


/* WARNING: Instruction at (ram,0x0cd3e64a) overlaps instruction at (ram,0x0cd3e649)
    */
/* WARNING: Possible PIC construction at 0x0cd3e63b: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0cd3e640) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long wg_JigsawBlockActor__vslot0(long param_1,uint *param_2)

{
  ushort uVar1;
  long in_RAX;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  bool in_CF;
  bool bVar9;
  bool in_ZF;
  
  if (in_CF || in_ZF) {
    if (in_RAX != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0);
    }
    return in_RAX;
  }
  uVar3 = 0;
  if (*param_2 < 0x10) {
    uVar3 = (ulong)*param_2;
  }
  plVar4 = *(long **)(param_1 + 8);
  switch(uVar3) {
  default:
    return *(long *)(plVar4[uVar3] + 0x200);
  case 6:
  case 7:
    return *(long *)(*plVar4 + 0x200);
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
    lVar8 = *(long *)(plVar4[uVar3 - 8] + 0x200);
    lVar5 = *(long *)(lVar8 + 0x68);
    uVar1 = *(ushort *)(lVar8 + 0x128);
    lVar2 = *(long *)(lVar5 + 0x1b0);
    if (lVar2 != 0) {
      lVar6 = lVar5 + 0x1b0;
      do {
        bVar9 = *(ulong *)(lVar2 + 0x20) < _DAT_0f6feb88;
        if (!bVar9) {
          lVar6 = lVar2;
        }
        lVar2 = *(long *)(lVar2 + (ulong)bVar9 * 8);
      } while (lVar2 != 0);
      if ((lVar6 != lVar5 + 0x1b0) && (*(ulong *)(lVar6 + 0x20) <= _DAT_0f6feb88)) {
LAB_0cd3e800:
        if (*(uint *)(lVar6 + 0x28) < 2) {
          return lVar8;
        }
        uVar3 = (ulong)(1 << (((char)*(undefined4 *)(lVar6 + 0x30) -
                              (char)*(undefined4 *)(lVar6 + 0x2c)) + 1U & 0x1f) & 0xffffU |
                       ~*(uint *)(lVar6 + 0x34) & (uint)uVar1);
        if (uVar3 < (ulong)(*(long *)(lVar5 + 0x1f0) - *(long *)(lVar5 + 0x1e8) >> 3)) {
          lVar5 = *(long *)(*(long *)(lVar5 + 0x1e8) + uVar3 * 8);
          if (lVar5 != 0) {
            return lVar5;
          }
          return lVar8;
        }
        return lVar8;
      }
    }
    for (plVar4 = *(long **)(lVar5 + 0x350); plVar4 != *(long **)(lVar5 + 0x358);
        plVar4 = plVar4 + 2) {
      plVar7 = (long *)*plVar4;
      if (*(ulong *)(plVar7[1] + 8) == _DAT_0f6feb88) goto LAB_0cd3e7b8;
    }
    break;
  case 0xe:
  case 0xf:
    lVar8 = *(long *)(*plVar4 + 0x200);
    lVar5 = *(long *)(lVar8 + 0x68);
    uVar1 = *(ushort *)(lVar8 + 0x128);
    lVar2 = *(long *)(lVar5 + 0x1b0);
    if (lVar2 != 0) {
      lVar6 = lVar5 + 0x1b0;
      do {
        bVar9 = *(ulong *)(lVar2 + 0x20) < _DAT_0f6feb88;
        if (!bVar9) {
          lVar6 = lVar2;
        }
        lVar2 = *(long *)(lVar2 + (ulong)bVar9 * 8);
      } while (lVar2 != 0);
      if ((lVar6 != lVar5 + 0x1b0) && (*(ulong *)(lVar6 + 0x20) <= _DAT_0f6feb88))
      goto LAB_0cd3e800;
    }
    for (plVar4 = *(long **)(lVar5 + 0x350); plVar4 != *(long **)(lVar5 + 0x358);
        plVar4 = plVar4 + 2) {
      plVar7 = (long *)*plVar4;
      if (*(ulong *)(plVar7[1] + 8) == _DAT_0f6feb88) goto LAB_0cd3e7b8;
    }
  }
  goto LAB_0cd3e7d3;
LAB_0cd3e7b8:
  lVar2 = (**(code **)(*plVar7 + 8))(plVar7,lVar5,uVar1,1);
  if (lVar2 != 0) {
    return lVar2;
  }
LAB_0cd3e7d3:
  if ((*(byte *)(lVar5 + 0x135) & 8) == 0) {
    return lVar8;
  }
  return *(long *)(lVar5 + 0x200);
}


