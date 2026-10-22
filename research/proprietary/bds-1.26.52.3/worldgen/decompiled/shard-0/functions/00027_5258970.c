/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5258970
 * Label: MultinoiseGenerationRulesBiomeComponentGlue::vslot1
 * Body:  [[05258970, 052589ff] [05258a01, 05258c51]]
 * Ghidra: wg_MultinoiseGenerationRulesBiomeComponentGlue__vslot1
 */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Possible PIC construction at 0x05258c44: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
wg_MultinoiseGenerationRulesBiomeComponentGlue__vslot1
          (int param_1,int param_2,int param_3,int param_4)

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
  int iVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  int in_R10D;
  int iVar17;
  int iVar18;
  ulong uVar19;
  int iVar20;
  int unaff_R15D;
  undefined8 *puVar21;
  long lVar22;
  bool bVar23;
  bool in_ZF;
  undefined8 uStack_8;
  
  if (!in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar17 = (int)((ulong)((long)((unaff_EBP >> 0x1f) - unaff_EBP) * -0x2aaaaaab) >> 0x20);
  iVar5 = in_EAX >> 0x1b;
  iVar15 = iVar5 - param_1;
  iVar16 = iVar15 + 0xf;
  if (-1 < iVar15) {
    iVar16 = iVar15;
  }
  iVar12 = ~(param_2 >> 4) + param_4;
  iVar18 = (unaff_EBP >> 0x1f) + ((iVar17 >> 1) - (iVar17 >> 0x1f)) + -1;
  iVar16 = ~(iVar16 >> 4) + iVar5;
  *(ulong *)(unaff_RBX + 0x28) = CONCAT44(iVar18,iVar12);
  *(int *)(unaff_RBX + 0x30) = iVar16;
  iVar17 = (param_4 - in_R10D) + -0xf;
  if (-1 < iVar17) {
    param_3 = iVar17;
  }
  iVar20 = (int)((ulong)((long)((unaff_R15D >> 0x1f) - unaff_R15D) * -0x2aaaaaab) >> 0x20);
  iVar17 = (iVar5 - param_1) + -0xf;
  if (-1 < iVar17) {
    iVar15 = iVar17;
  }
  iVar17 = ((param_4 - (param_3 >> 4)) - iVar12) + 2;
  iVar12 = ((((unaff_R15D >> 0x1f) - (iVar20 >> 0x1f)) + (iVar20 >> 1)) - iVar18) + 2;
  iVar16 = ((iVar5 - (iVar15 >> 4)) - iVar16) + 2;
  *(ulong *)(unaff_RBX + 0x34) = CONCAT44(iVar12,iVar17);
  *(int *)(unaff_RBX + 0x3c) = iVar16;
  uVar4 = _DAT_01de6238;
  uVar3 = _DAT_01de6230;
  uVar6 = iVar16 * iVar17 * iVar12;
  uVar19 = (ulong)(int)uVar6;
  lVar14 = *(long *)(unaff_RBX + 0x40);
  puVar7 = *(undefined8 **)(unaff_RBX + 0x48);
  lVar13 = (long)puVar7 - lVar14 >> 2;
  bVar23 = uVar19 < (ulong)(lVar13 * -0x3333333333333333);
  uVar11 = uVar19 + lVar13 * 0x3333333333333333;
  if (bVar23 || uVar11 == 0) {
    if (!bVar23) {
      return (undefined8 *)(ulong)uVar6;
    }
    puVar8 = (undefined8 *)(lVar14 + uVar19 * 0x14);
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
    lVar13 = *(long *)(unaff_RBX + 0x50) - lVar14 >> 2;
    uVar2 = lVar13 * -0x6666666666666666;
    if (uVar19 < uVar2) {
      uVar19 = uVar2;
    }
    if (0x666666666666665 < (ulong)(lVar13 * -0x3333333333333333)) {
      uVar19 = 0xccccccccccccccc;
    }
    if (uVar19 < 0xccccccccccccccd) {
      uStack_8 = 0x5258b12;
      lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
      if (lVar13 == 0) {
        uStack_8 = 0x5258c1c;
        func_0x0eec74c0(uVar19 * 0x14,0);
      }
      uVar4 = _DAT_01de6238;
      uVar3 = _DAT_01de6230;
      puVar21 = (undefined8 *)(((long)puVar7 - lVar14) + lVar13);
      puVar8 = (undefined8 *)((long)puVar21 + uVar11 * 0x14);
      puVar9 = puVar21;
      do {
        *(undefined4 *)(puVar9 + 1) = uVar4;
        *puVar9 = uVar3;
        *(undefined4 *)((long)puVar9 + 0xc) = 0x7fffffff;
        *(undefined1 *)(puVar9 + 2) = 0;
        puVar9 = (undefined8 *)((long)puVar9 + 0x14);
      } while (puVar9 != puVar8);
      lVar14 = *(long *)(unaff_RBX + 0x40);
      lVar22 = (long)puVar21 - ((long)puVar7 - lVar14);
      uStack_8 = 0x5258b81;
      puVar7 = (undefined8 *)func_0x0eee2f00(lVar22,lVar14,(long)puVar7 - lVar14);
      *(long *)(unaff_RBX + 0x40) = lVar22;
      *(undefined8 **)(unaff_RBX + 0x48) = puVar8;
      *(ulong *)(unaff_RBX + 0x50) = uVar19 * 0x14 + lVar13;
      if (lVar14 == 0) {
        return puVar7;
      }
      puVar10 = (undefined8 *)&stack0x00000048;
      goto SUB_0412a280;
    }
  }
  uStack_8 = 0x5258c2b;
  puVar7 = (undefined8 *)func_0x04882eb0();
  lVar14 = *(long *)(unaff_RBX + 0x40);
  if (lVar14 == 0) {
    uStack_8 = 0x5258c51;
    func_0x0eee2d70(puVar7);
    pcVar1 = (code *)swi(3);
    puVar7 = (undefined8 *)(*pcVar1)();
    return puVar7;
  }
  *(long *)(unaff_RBX + 0x48) = lVar14;
  puVar10 = &uStack_8;
  uStack_8 = 0x5258c49;
SUB_0412a280:
  *(undefined8 **)((long)puVar10 + -8) = puVar7;
  if (lVar14 != 0) {
    pcVar1 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)puVar10 + -0x10) = 0xee326ba;
    (*pcVar1)(&DAT_0f5463b0,lVar14);
  }
  return *(undefined8 **)((long)puVar10 + -8);
}


