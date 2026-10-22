/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5258910
 * Label: ClimateBiomeComponentGlue::vslot1
 * Body:  [[05258910, 0525894f] [05258951, 05258b8f] [05258bb0, 05258c00] [05258c10, 05258c51]]
 * Ghidra: wg_ClimateBiomeComponentGlue__vslot1
 */


/* WARNING: Possible PIC construction at 0x05258c44: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * wg_ClimateBiomeComponentGlue__vslot1(undefined8 param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined4 uVar3;
  int in_EAX;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  long unaff_RBX;
  undefined8 *puVar13;
  int unaff_EBP;
  ulong uVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  ulong uVar22;
  int iVar23;
  int *unaff_R14;
  int unaff_R15D;
  undefined8 *puVar24;
  long lVar25;
  byte in_CF;
  bool bVar26;
  undefined8 in_XMM0_Qb;
  undefined8 uStack_8;
  
  *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + in_EAX + (uint)in_CF;
  *(undefined8 *)(param_2 + 0x38) = param_1;
  *(undefined8 *)(param_2 + 0x40) = in_XMM0_Qb;
  *(undefined8 *)(param_2 + 0x48) = param_1;
  *(undefined8 *)(param_2 + 0x50) = in_XMM0_Qb;
  uStack_8 = 0x5258933;
  uVar6 = func_0x0cc41df0(0xf6ff9e0,&DAT_0f713f00,1);
  *(undefined8 *)(unaff_RBX + 0x58) = uVar6;
  uStack_8 = 0x525894f;
  uVar6 = func_0x0cc41df0(0xf6ff9e0,0xf713b90,1);
  *(undefined8 *)(unaff_RBX + 0x60) = uVar6;
  iVar20 = *unaff_R14;
  iVar10 = unaff_R14[1];
  iVar9 = iVar20 >> 0x1b;
  iVar11 = iVar9 + iVar20 * -0x10;
  iVar15 = iVar11 + 0xf;
  if (-1 < iVar11) {
    iVar15 = iVar11;
  }
  iVar21 = (int)((ulong)((long)((unaff_EBP >> 0x1f) - unaff_EBP) * -0x2aaaaaab) >> 0x20);
  iVar4 = iVar10 >> 0x1b;
  iVar18 = iVar4 + iVar10 * -0x10;
  iVar19 = iVar18 + 0xf;
  if (-1 < iVar18) {
    iVar19 = iVar18;
  }
  iVar15 = ~(iVar15 >> 4) + iVar9;
  iVar21 = (unaff_EBP >> 0x1f) + ((iVar21 >> 1) - (iVar21 >> 0x1f)) + -1;
  iVar19 = ~(iVar19 >> 4) + iVar4;
  *(ulong *)(unaff_RBX + 0x28) = CONCAT44(iVar21,iVar15);
  *(int *)(unaff_RBX + 0x30) = iVar19;
  iVar20 = iVar20 * -0x10 + iVar9 + -0xf;
  if (-1 < iVar20) {
    iVar11 = iVar20;
  }
  iVar23 = (int)((ulong)((long)((unaff_R15D >> 0x1f) - unaff_R15D) * -0x2aaaaaab) >> 0x20);
  iVar20 = iVar10 * -0x10 + iVar4 + -0xf;
  if (-1 < iVar20) {
    iVar18 = iVar20;
  }
  iVar10 = ((iVar9 - (iVar11 >> 4)) - iVar15) + 2;
  iVar15 = ((((unaff_R15D >> 0x1f) - (iVar23 >> 0x1f)) + (iVar23 >> 1)) - iVar21) + 2;
  iVar20 = ((iVar4 - (iVar18 >> 4)) - iVar19) + 2;
  *(ulong *)(unaff_RBX + 0x34) = CONCAT44(iVar15,iVar10);
  *(int *)(unaff_RBX + 0x3c) = iVar20;
  uVar3 = _DAT_01de6238;
  uVar6 = _DAT_01de6230;
  uVar5 = iVar20 * iVar10 * iVar15;
  uVar22 = (ulong)(int)uVar5;
  lVar17 = *(long *)(unaff_RBX + 0x40);
  puVar7 = *(undefined8 **)(unaff_RBX + 0x48);
  lVar16 = (long)puVar7 - lVar17 >> 2;
  bVar26 = uVar22 < (ulong)(lVar16 * -0x3333333333333333);
  uVar14 = uVar22 + lVar16 * 0x3333333333333333;
  if (bVar26 || uVar14 == 0) {
    if (!bVar26) {
      return (undefined8 *)(ulong)uVar5;
    }
    puVar8 = (undefined8 *)(lVar17 + uVar22 * 0x14);
LAB_05258bfd:
    *(undefined8 **)(unaff_RBX + 0x48) = puVar8;
    return puVar8;
  }
  if (uVar14 <= (ulong)((*(long *)(unaff_RBX + 0x50) - (long)puVar7 >> 2) * -0x3333333333333333)) {
    puVar8 = (undefined8 *)((long)puVar7 + uVar14 * 0x14);
    do {
      *(undefined4 *)(puVar7 + 1) = uVar3;
      *puVar7 = uVar6;
      *(undefined4 *)((long)puVar7 + 0xc) = 0x7fffffff;
      *(undefined1 *)(puVar7 + 2) = 0;
      puVar7 = (undefined8 *)((long)puVar7 + 0x14);
    } while (puVar7 != puVar8);
    goto LAB_05258bfd;
  }
  if ((int)uVar5 < 0) {
    uStack_8 = 0x5258c26;
    func_0x0525ec90();
  }
  else {
    lVar16 = *(long *)(unaff_RBX + 0x50) - lVar17 >> 2;
    uVar2 = lVar16 * -0x6666666666666666;
    if (uVar22 < uVar2) {
      uVar22 = uVar2;
    }
    if (0x666666666666665 < (ulong)(lVar16 * -0x3333333333333333)) {
      uVar22 = 0xccccccccccccccc;
    }
    if (uVar22 < 0xccccccccccccccd) {
      uStack_8 = 0x5258b12;
      lVar16 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
      if (lVar16 == 0) {
        uStack_8 = 0x5258c1c;
        func_0x0eec74c0(uVar22 * 0x14,0);
      }
      uVar3 = _DAT_01de6238;
      uVar6 = _DAT_01de6230;
      puVar24 = (undefined8 *)(((long)puVar7 - lVar17) + lVar16);
      puVar8 = (undefined8 *)((long)puVar24 + uVar14 * 0x14);
      puVar12 = puVar24;
      do {
        *(undefined4 *)(puVar12 + 1) = uVar3;
        *puVar12 = uVar6;
        *(undefined4 *)((long)puVar12 + 0xc) = 0x7fffffff;
        *(undefined1 *)(puVar12 + 2) = 0;
        puVar12 = (undefined8 *)((long)puVar12 + 0x14);
      } while (puVar12 != puVar8);
      lVar17 = *(long *)(unaff_RBX + 0x40);
      lVar25 = (long)puVar24 - ((long)puVar7 - lVar17);
      uStack_8 = 0x5258b81;
      puVar7 = (undefined8 *)func_0x0eee2f00(lVar25,lVar17,(long)puVar7 - lVar17);
      *(long *)(unaff_RBX + 0x40) = lVar25;
      *(undefined8 **)(unaff_RBX + 0x48) = puVar8;
      *(ulong *)(unaff_RBX + 0x50) = uVar22 * 0x14 + lVar16;
      if (lVar17 == 0) {
        return puVar7;
      }
      puVar13 = (undefined8 *)&stack0x00000048;
      goto SUB_0412a280;
    }
  }
  uStack_8 = 0x5258c2b;
  puVar7 = (undefined8 *)func_0x04882eb0();
  lVar17 = *(long *)(unaff_RBX + 0x40);
  if (lVar17 == 0) {
    uStack_8 = 0x5258c51;
    func_0x0eee2d70(puVar7);
    pcVar1 = (code *)swi(3);
    puVar7 = (undefined8 *)(*pcVar1)();
    return puVar7;
  }
  *(long *)(unaff_RBX + 0x48) = lVar17;
  puVar13 = &uStack_8;
  uStack_8 = 0x5258c49;
SUB_0412a280:
  *(undefined8 **)((long)puVar13 + -8) = puVar7;
  if (lVar17 != 0) {
    pcVar1 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)puVar13 + -0x10) = 0xee326ba;
    (*pcVar1)(&DAT_0f5463b0,lVar17);
  }
  return *(undefined8 **)((long)puVar13 + -8);
}


