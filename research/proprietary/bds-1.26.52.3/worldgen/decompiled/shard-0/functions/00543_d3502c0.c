/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd4502c0 (ELF vaddr 0xd3502c0)
 * Label: callee2-of:0xd2f5350
 * Body:  [[0d4502c0, 0d450305] [0d450310, 0d450381] [0d450390, 0d450832]]
 * Ghidra: FUN_0d4502c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0d4502c0(long param_1,long *param_2,undefined1 param_3)

{
  byte *pbVar1;
  long *plVar2;
  byte *pbVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  byte bVar9;
  long lVar10;
  long *plVar11;
  code *pcVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  bool bVar27;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar21 = *(ulong *)(param_1 + 0xb8);
  uVar22 = *(ulong *)(param_1 + 0xc0);
  if (uVar21 != uVar22) {
    lVar26 = *param_2;
    lVar20 = uVar21 + 0x19;
    do {
      if (*(long *)(lVar20 + -9) == lVar26) {
        if ((*(long **)(lVar20 + 0x17) == param_2) && (lVar20 + -9 == param_2[4]))
        goto LAB_0d4507ee;
        bVar9 = *(byte *)(lVar20 + -1);
        if ((bVar9 & 1) == 0) {
          uVar24 = (ulong)(bVar9 >> 1);
          uVar19 = (ulong)*(byte *)(param_2 + 1);
          if ((*(byte *)(param_2 + 1) & 1) != 0) goto LAB_0d45039e;
LAB_0d450377:
          if (uVar24 != uVar19 >> 1) goto LAB_0d45031d;
        }
        else {
          uVar24 = *(ulong *)(lVar20 + 7);
          uVar19 = (ulong)*(byte *)(param_2 + 1);
          if ((*(byte *)(param_2 + 1) & 1) == 0) goto LAB_0d450377;
LAB_0d45039e:
          if (uVar24 != param_2[2]) goto LAB_0d45031d;
        }
        lVar10 = lVar20;
        if ((bVar9 & 1) != 0) {
          lVar10 = *(long *)(lVar20 + 0xf);
        }
        lVar23 = (long)param_2 + 9;
        if ((uVar19 & 1) != 0) {
          lVar23 = param_2[3];
        }
        iVar17 = func_0x0eee3000(lVar10,lVar23);
        if (iVar17 == 0) {
          *(long **)(lVar20 + 0x17) = param_2;
          param_2[4] = lVar20 + -9;
LAB_0d4507ee:
          return lVar20 + -0x19;
        }
      }
LAB_0d45031d:
      *(undefined8 *)(lVar20 + 0x17) = 0;
      uVar24 = lVar20 + 0x8f;
      lVar20 = lVar20 + 0xa8;
    } while (uVar24 != uVar22);
  }
  if (uVar22 < *(ulong *)(param_1 + 200)) {
    func_0x0d452190(uVar22);
    lVar26 = uVar22 + 0xa8;
    *(long *)(param_1 + 0xc0) = lVar26;
    goto LAB_0d450681;
  }
  lVar26 = uVar22 - uVar21;
  uVar22 = (lVar26 >> 3) * -0x30c30c30c30c30c3 + 1;
  if (0x186186186186186 < uVar22) {
    func_0x0d452300();
LAB_0d450809:
    uVar18 = func_0x04882eb0();
    func_0x0d4522a0(&lStack_70);
    uVar18 = func_0x0eee2d70(uVar18);
    *(long *)(param_1 + 0xc0) = lVar26;
    func_0x0eee2d70(uVar18);
    pcVar12 = (code *)swi(3);
    lVar26 = (*pcVar12)();
    return lVar26;
  }
  lVar20 = (long)(*(ulong *)(param_1 + 200) - uVar21) >> 3;
  uVar21 = lVar20 * -0x6186186186186186;
  if (uVar22 < uVar21) {
    uVar22 = uVar21;
  }
  plVar11 = (long *)(param_1 + 0xb8);
  if (0xc30c30c30c30c2 < (ulong)(lVar20 * -0x30c30c30c30c30c3)) {
    uVar22 = 0x186186186186186;
  }
  plStack_50 = plVar11;
  if (uVar22 == 0) {
LAB_0d4504a3:
    lStack_70 = 0;
  }
  else {
    if (0x186186186186186 < uVar22) goto LAB_0d450809;
    lStack_70 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar22 * 0xa8);
    if (lStack_70 == 0) {
      func_0x0eec74c0(uVar22 * 0xa8,0);
      goto LAB_0d4504a3;
    }
  }
  lStack_68 = lVar26 + lStack_70;
  lStack_58 = uVar22 * 0xa8 + lStack_70;
  lStack_60 = lStack_68;
  func_0x0d452190(lStack_68);
  lVar26 = lStack_60 + 0xa8;
  lVar20 = *(long *)(param_1 + 0xb8);
  lVar10 = *(long *)(param_1 + 0xc0);
  lVar23 = (lVar20 - lVar10) + lStack_68;
  if (lVar20 != lVar10) {
    lVar25 = 0;
    do {
      uVar18 = ((undefined8 *)(lVar20 + lVar25))[1];
      *(undefined8 *)(lVar23 + lVar25) = *(undefined8 *)(lVar20 + lVar25);
      ((undefined8 *)(lVar23 + lVar25))[1] = uVar18;
      *(undefined8 *)(lVar20 + lVar25) = 0;
      ((undefined8 *)(lVar20 + lVar25))[1] = 0;
      puVar5 = (undefined8 *)(lVar23 + 0x20 + lVar25);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5 = (undefined8 *)(lVar23 + 0x10 + lVar25);
      *puVar5 = 0;
      puVar5[1] = 0;
      *(undefined8 *)(lVar23 + 0x30 + lVar25) = 0;
      *(undefined8 *)(lVar23 + 0x28 + lVar25) = *(undefined8 *)(lVar20 + 0x28 + lVar25);
      puVar6 = (undefined4 *)(lVar20 + 0x18 + lVar25);
      uVar13 = puVar6[1];
      uVar14 = puVar6[2];
      uVar15 = puVar6[3];
      puVar7 = (undefined4 *)(lVar23 + 0x18 + lVar25);
      *puVar7 = *puVar6;
      puVar7[1] = uVar13;
      puVar7[2] = uVar14;
      puVar7[3] = uVar15;
      *(undefined2 *)(lVar20 + 0x18 + lVar25) = 0;
      *(undefined8 *)(lVar23 + 0x10 + lVar25) = *(undefined8 *)(lVar20 + 0x10 + lVar25);
      func_0x04167a20(lVar23 + lVar25 + 0x38,lVar20 + lVar25 + 0x38);
      puVar5 = (undefined8 *)(lVar20 + 0x40 + lVar25);
      uVar18 = puVar5[1];
      puVar8 = (undefined8 *)(lVar23 + 0x40 + lVar25);
      *puVar8 = *puVar5;
      puVar8[1] = uVar18;
      puVar5 = (undefined8 *)(lVar20 + 0x50 + lVar25);
      uVar18 = puVar5[1];
      puVar8 = (undefined8 *)(lVar23 + 0x50 + lVar25);
      *puVar8 = *puVar5;
      puVar8[1] = uVar18;
      puVar5 = (undefined8 *)(lVar20 + 0x60 + lVar25);
      uVar18 = puVar5[1];
      puVar8 = (undefined8 *)(lVar23 + 0x60 + lVar25);
      *puVar8 = *puVar5;
      puVar8[1] = uVar18;
      puVar5 = (undefined8 *)(lVar20 + 0x60 + lVar25);
      *puVar5 = 0;
      puVar5[1] = 0;
      *(undefined8 *)(lVar23 + 0x70 + lVar25) = *(undefined8 *)(lVar20 + 0x70 + lVar25);
      puVar5 = (undefined8 *)(lVar20 + 0x78 + lVar25);
      uVar18 = puVar5[1];
      puVar8 = (undefined8 *)(lVar23 + 0x78 + lVar25);
      *puVar8 = *puVar5;
      puVar8[1] = uVar18;
      puVar5 = (undefined8 *)(lVar23 + 0x88 + lVar25);
      *puVar5 = 0;
      puVar5[1] = 0;
      *(undefined8 *)(lVar23 + 0x98 + lVar25) = 0;
      puVar6 = (undefined4 *)(lVar20 + 0x88 + lVar25);
      uVar13 = puVar6[1];
      uVar14 = puVar6[2];
      uVar15 = puVar6[3];
      puVar7 = (undefined4 *)(lVar23 + 0x88 + lVar25);
      *puVar7 = *puVar6;
      puVar7[1] = uVar13;
      puVar7[2] = uVar14;
      puVar7[3] = uVar15;
      *(undefined8 *)(lVar23 + 0x98 + lVar25) = *(undefined8 *)(lVar20 + 0x98 + lVar25);
      puVar5 = (undefined8 *)(lVar20 + 0x88 + lVar25);
      *puVar5 = 0;
      puVar5[1] = 0;
      *(undefined8 *)(lVar20 + 0x98 + lVar25) = 0;
      *(undefined2 *)(lVar23 + 0xa0 + lVar25) = *(undefined2 *)(lVar20 + 0xa0 + lVar25);
      lVar4 = lVar20 + lVar25;
      lVar25 = lVar25 + 0xa8;
    } while (lVar4 + 0xa8 != lVar10);
    do {
      func_0x0d452310(lVar20);
      lVar20 = lVar20 + 0xa8;
    } while (lVar20 != lVar10);
    lVar20 = *plVar11;
  }
  *(long *)(param_1 + 0xb8) = lVar23;
  *(long *)(param_1 + 0xc0) = lVar26;
  lVar10 = *(long *)(param_1 + 200);
  *(long *)(param_1 + 200) = lStack_58;
  if (lVar20 != 0) {
    thunk_FUN_0ee326a0(lVar20,lVar10 - lVar20);
  }
LAB_0d450681:
  *(long *)(param_1 + 0xc0) = lVar26;
  func_0x0b63b6d0(*(undefined8 *)(lVar26 + -0xa8),param_2);
  lVar26 = *(long *)(param_1 + 0xc0);
  *(undefined1 *)(lVar26 + -7) = *(undefined1 *)(param_1 + 0x60);
  pbVar1 = (byte *)(param_2 + 1);
  if ((long *)(lVar26 + -0x98) != param_2) {
    pbVar3 = (byte *)(lVar26 + -0x90);
    bVar9 = *pbVar1;
    if ((*pbVar3 & 1) == 0) {
      if ((bVar9 & 1) == 0) {
        *(long *)(lVar26 + -0x80) = param_2[3];
        uVar13 = *(undefined4 *)((long)param_2 + 0xc);
        lVar20 = param_2[2];
        uVar14 = *(undefined4 *)((long)param_2 + 0x14);
        *(undefined4 *)pbVar3 = *(undefined4 *)pbVar1;
        *(undefined4 *)(lVar26 + -0x8c) = uVar13;
        *(int *)(lVar26 + -0x88) = (int)lVar20;
        *(undefined4 *)(lVar26 + -0x84) = uVar14;
      }
      else {
        func_0x04885070(pbVar3,param_2[3],param_2[2]);
      }
    }
    else {
      bVar27 = (bVar9 & 1) != 0;
      lVar20 = (long)param_2 + 9;
      if (bVar27) {
        lVar20 = param_2[3];
      }
      uVar21 = (ulong)(bVar9 >> 1);
      if (bVar27) {
        uVar21 = param_2[2];
      }
      func_0x04885120(pbVar3,lVar20,uVar21);
    }
  }
  *(long *)(lVar26 + -0x98) = *param_2;
  *(undefined8 *)(lVar26 + -0x78) = 0;
  func_0x04aa9390(&lStack_70,pbVar1,*(undefined1 *)(param_1 + 0x60));
  lVar26 = *(long *)(param_1 + 0xc0);
  FUN_04167a70(lVar26 + -0x70,&lStack_70);
  *(long *)(lVar26 + -0x68) = lStack_68;
  *(long *)(lVar26 + -0x60) = lStack_60;
  *(long *)(lVar26 + -0x58) = lStack_58;
  *(long **)(lVar26 + -0x50) = plStack_50;
  uVar13 = (undefined4)uStack_48;
  uVar14 = uStack_48._4_4_;
  uVar15 = (undefined4)uStack_40;
  uVar16 = uStack_40._4_4_;
  uStack_48 = 0;
  uStack_40 = (long *)0x0;
  plVar11 = *(long **)(lVar26 + -0x40);
  *(undefined4 *)(lVar26 + -0x48) = uVar13;
  *(undefined4 *)(lVar26 + -0x44) = uVar14;
  *(undefined4 *)(lVar26 + -0x40) = uVar15;
  *(undefined4 *)(lVar26 + -0x3c) = uVar16;
  if (plVar11 != (long *)0x0) {
    LOCK();
    plVar2 = plVar11 + 1;
    lVar20 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      func_0x0412c2d0(plVar11);
    }
  }
  plVar11 = uStack_40;
  *(undefined8 *)(lVar26 + -0x38) = uStack_38;
  if (uStack_40 != (long *)0x0) {
    LOCK();
    plVar2 = uStack_40 + 1;
    lVar26 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*uStack_40 + 0x10))(uStack_40);
      func_0x0412c2d0(plVar11);
    }
  }
  func_0x04167a40(&lStack_70);
  lVar26 = *(long *)(param_1 + 0xc0);
  *(undefined1 *)(lVar26 + -8) = param_3;
  return lVar26 + -0xa8;
}


