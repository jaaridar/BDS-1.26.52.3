/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x52f5d40 (ELF vaddr 0x51f5d40)
 * Label: VanillaSurfaceBuilders::TheEndSurfaceBuilder::vslot5
 * Body:  [[052f5d40, 052f5da5] [052f5db0, 052f5e01]]
 * Ghidra: wg_VanillaSurfaceBuilders__TheEndSurfaceBuilder__vslot5
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_VanillaSurfaceBuilders__TheEndSurfaceBuilder__vslot5(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *in_RCX;
  short sVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  uVar5 = func_0x0cc41df0(0xf6ff9e0,0xf719dd8,1);
  lVar4 = _DAT_0f71bd88;
  plVar1 = (long *)*in_RCX;
  sVar6 = (short)*(int *)((long)plVar1 + 0x14);
  if (0 < sVar6) {
    lVar2 = *plVar1;
    uVar8 = (int)sVar6 +
            ((*(uint *)in_RCX[1] & 0xf) * (int)plVar1[3] + (((uint *)in_RCX[1])[2] & 0xf)) *
            *(int *)((long)plVar1 + 0x14);
    uVar7 = (ulong)(uint)(int)sVar6 + 1;
    iVar9 = -1;
    do {
      uVar8 = uVar8 - 1;
      lVar3 = *(long *)(*(long *)(lVar2 + (ulong)uVar8 * 8) + 0x68);
      iVar10 = -1;
      if ((**(char **)(lVar3 + 0x20) != '\0') && (iVar10 = iVar9, *(long *)(lVar3 + 200) == lVar4))
      {
        if (iVar9 == -1) {
          iVar10 = 1;
        }
        else {
          iVar10 = 0;
          if (iVar9 < 1) goto LAB_052f5db3;
        }
        *(undefined8 *)(lVar2 + (ulong)uVar8 * 8) = uVar5;
      }
LAB_052f5db3:
      uVar7 = uVar7 - 1;
      iVar9 = iVar10;
    } while (1 < uVar7);
  }
  return;
}


