/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5258980
 * Label: OverworldGenerationRulesBiomeComponentGlue::vslot0
 * Body:  [[05258980, 05258c51]]
 * Ghidra: wg_OverworldGenerationRulesBiomeComponentGlue__vslot0
 */


/* WARNING: Possible PIC construction at 0x05258c44: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
wg_OverworldGenerationRulesBiomeComponentGlue__vslot0
          (int param_1,uint param_2,int param_3,int param_4)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  int in_EAX;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long unaff_RBX;
  undefined8 *puVar10;
  int unaff_EBP;
  ulong uVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  int in_R10D;
  int iVar16;
  int in_R11D;
  int iVar17;
  ulong uVar18;
  int iVar19;
  int unaff_R15D;
  undefined8 *puVar20;
  long lVar21;
  bool bVar22;
  undefined8 uStack_8;
  
  iVar16 = (int)((ulong)((long)(in_R11D - unaff_EBP) * -0x2aaaaaab) >> 0x20);
  iVar5 = in_EAX >> 0x1b;
  iVar14 = iVar5 - param_1;
  iVar15 = iVar14 + 0xf;
  if (-1 < iVar14) {
    iVar15 = iVar14;
  }
  iVar17 = in_R11D + ((iVar16 >> 1) - (iVar16 >> 0x1f)) + -1;
  iVar15 = ~(iVar15 >> 4) + iVar5;
  *(ulong *)(unaff_RBX + 0x28) = CONCAT44(iVar17,~param_2 + param_4);
  *(int *)(unaff_RBX + 0x30) = iVar15;
  iVar16 = (param_4 - in_R10D) + -0xf;
  if (-1 < iVar16) {
    param_3 = iVar16;
  }
  iVar19 = (int)((ulong)((long)((unaff_R15D >> 0x1f) - unaff_R15D) * -0x2aaaaaab) >> 0x20);
  iVar16 = (iVar5 - param_1) + -0xf;
  if (-1 < iVar16) {
    iVar14 = iVar16;
  }
  iVar16 = ((param_4 - (param_3 >> 4)) - (~param_2 + param_4)) + 2;
  iVar17 = ((((unaff_R15D >> 0x1f) - (iVar19 >> 0x1f)) + (iVar19 >> 1)) - iVar17) + 2;
  iVar15 = ((iVar5 - (iVar14 >> 4)) - iVar15) + 2;
  *(ulong *)(unaff_RBX + 0x34) = CONCAT44(iVar17,iVar16);
  *(int *)(unaff_RBX + 0x3c) = iVar15;
  uVar4 = _DAT_01de6238;
  uVar3 = _DAT_01de6230;
  uVar6 = iVar15 * iVar16 * iVar17;
  uVar18 = (ulong)(int)uVar6;
  lVar13 = *(long *)(unaff_RBX + 0x40);
  puVar7 = *(undefined8 **)(unaff_RBX + 0x48);
  lVar12 = (long)puVar7 - lVar13 >> 2;
  bVar22 = uVar18 < (ulong)(lVar12 * -0x3333333333333333);
  uVar11 = uVar18 + lVar12 * 0x3333333333333333;
  if (bVar22 || uVar11 == 0) {
    if (!bVar22) {
      return (undefined8 *)(ulong)uVar6;
    }
    puVar8 = (undefined8 *)(lVar13 + uVar18 * 0x14);
LAB_05258bfd:
    *(undefined8 **)(unaff_RBX + 0x48) = puVar8;
    return puVar8;
  }
  if (uVar11 <= (ulong)((*(long *)(unaff_RBX + 0x50) - (long)puVar7 >> 2) * -0x3333333333333333)) {
    puVar8 = (undefined8 *)((long)puVar7 + uVar11 * 0x14);
    do {
      *(undefined4 *)(puVar7 + 1) = uVar4;
      *puVar7 = uVar3;
      *(undefined4 *)((long)puVar7 + 0xc) = 0x7fffffff;
      *(undefined1 *)(puVar7 + 2) = 0;
      puVar7 = (undefined8 *)((long)puVar7 + 0x14);
    } while (puVar7 != puVar8);
    goto LAB_05258bfd;
  }
  if ((int)uVar6 < 0) {
    uStack_8 = 0x5258c26;
    func_0x0525ec90();
  }
  else {
    lVar12 = *(long *)(unaff_RBX + 0x50) - lVar13 >> 2;
    uVar2 = lVar12 * -0x6666666666666666;
    if (uVar18 < uVar2) {
      uVar18 = uVar2;
    }
    if (0x666666666666665 < (ulong)(lVar12 * -0x3333333333333333)) {
      uVar18 = 0xccccccccccccccc;
    }
    if (uVar18 < 0xccccccccccccccd) {
      uStack_8 = 0x5258b12;
      lVar12 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
      if (lVar12 == 0) {
        uStack_8 = 0x5258c1c;
        func_0x0eec74c0(uVar18 * 0x14,0);
      }
      uVar4 = _DAT_01de6238;
      uVar3 = _DAT_01de6230;
      puVar20 = (undefined8 *)(((long)puVar7 - lVar13) + lVar12);
      puVar8 = (undefined8 *)((long)puVar20 + uVar11 * 0x14);
      puVar9 = puVar20;
      do {
        *(undefined4 *)(puVar9 + 1) = uVar4;
        *puVar9 = uVar3;
        *(undefined4 *)((long)puVar9 + 0xc) = 0x7fffffff;
        *(undefined1 *)(puVar9 + 2) = 0;
        puVar9 = (undefined8 *)((long)puVar9 + 0x14);
      } while (puVar9 != puVar8);
      lVar13 = *(long *)(unaff_RBX + 0x40);
      lVar21 = (long)puVar20 - ((long)puVar7 - lVar13);
      uStack_8 = 0x5258b81;
      puVar7 = (undefined8 *)func_0x0eee2f00(lVar21,lVar13,(long)puVar7 - lVar13);
      *(long *)(unaff_RBX + 0x40) = lVar21;
      *(undefined8 **)(unaff_RBX + 0x48) = puVar8;
      *(ulong *)(unaff_RBX + 0x50) = uVar18 * 0x14 + lVar12;
      if (lVar13 == 0) {
        return puVar7;
      }
      puVar10 = (undefined8 *)&stack0x00000048;
      goto SUB_0412a280;
    }
  }
  uStack_8 = 0x5258c2b;
  puVar7 = (undefined8 *)func_0x04882eb0();
  lVar13 = *(long *)(unaff_RBX + 0x40);
  if (lVar13 == 0) {
    uStack_8 = 0x5258c51;
    func_0x0eee2d70(puVar7);
    pcVar1 = (code *)swi(3);
    puVar7 = (undefined8 *)(*pcVar1)();
    return puVar7;
  }
  *(long *)(unaff_RBX + 0x48) = lVar13;
  puVar10 = &uStack_8;
  uStack_8 = 0x5258c49;
SUB_0412a280:
  *(undefined8 **)((long)puVar10 + -8) = puVar7;
  if (lVar13 != 0) {
    pcVar1 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)puVar10 + -0x10) = 0xee326ba;
    (*pcVar1)(&DAT_0f5463b0,lVar13);
  }
  return *(undefined8 **)((long)puVar10 + -8);
}


