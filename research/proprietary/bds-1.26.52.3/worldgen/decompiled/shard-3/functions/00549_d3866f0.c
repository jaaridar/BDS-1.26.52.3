/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd4866f0 (ELF vaddr 0xd3866f0)
 * Label: callee2-of:0xd30d480
 * Body:  [[0412c1f0, 0412c1f0] [0d4866f0, 0d486733] [0d486740, 0d4867b1] [0d4867c0, 0d486c6e]]
 * Ghidra: FUN_0d4866f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0d4866f0(long param_1,long *param_2)

{
  byte *pbVar1;
  long *plVar2;
  byte *pbVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  byte bVar8;
  long lVar9;
  long *plVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  bool bVar26;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar20 = *(ulong *)(param_1 + 0xb8);
  uVar21 = *(ulong *)(param_1 + 0xc0);
  if (uVar20 != uVar21) {
    lVar25 = *param_2;
    lVar19 = uVar20 + 0x19;
    do {
      if (*(long *)(lVar19 + -9) == lVar25) {
        if ((*(long **)(lVar19 + 0x17) == param_2) && (lVar19 + -9 == param_2[4]))
        goto LAB_0d486c1c;
        bVar8 = *(byte *)(lVar19 + -1);
        if ((bVar8 & 1) == 0) {
          uVar23 = (ulong)(bVar8 >> 1);
          uVar18 = (ulong)*(byte *)(param_2 + 1);
          if ((*(byte *)(param_2 + 1) & 1) != 0) goto LAB_0d4867ce;
LAB_0d4867a7:
          if (uVar23 != uVar18 >> 1) goto LAB_0d48674d;
        }
        else {
          uVar23 = *(ulong *)(lVar19 + 7);
          uVar18 = (ulong)*(byte *)(param_2 + 1);
          if ((*(byte *)(param_2 + 1) & 1) == 0) goto LAB_0d4867a7;
LAB_0d4867ce:
          if (uVar23 != param_2[2]) goto LAB_0d48674d;
        }
        lVar9 = lVar19;
        if ((bVar8 & 1) != 0) {
          lVar9 = *(long *)(lVar19 + 0xf);
        }
        lVar22 = (long)param_2 + 9;
        if ((uVar18 & 1) != 0) {
          lVar22 = param_2[3];
        }
        iVar15 = func_0x0eee3000(lVar9,lVar22);
        if (iVar15 == 0) {
          *(long **)(lVar19 + 0x17) = param_2;
          param_2[4] = lVar19 + -9;
LAB_0d486c1c:
          return (undefined *)(lVar19 + -0x19);
        }
      }
LAB_0d48674d:
      *(undefined8 *)(lVar19 + 0x17) = 0;
      uVar23 = lVar19 + 0x8f;
      lVar19 = lVar19 + 0xa8;
    } while (uVar23 != uVar21);
  }
  if (uVar21 < *(ulong *)(param_1 + 200)) {
    func_0x0d488330(uVar21);
    lVar25 = uVar21 + 0xa8;
    *(long *)(param_1 + 0xc0) = lVar25;
    goto LAB_0d486ab2;
  }
  lVar25 = uVar21 - uVar20;
  uVar21 = (lVar25 >> 3) * -0x30c30c30c30c30c3 + 1;
  if (0x186186186186186 < uVar21) {
    func_0x0d4884a0();
SUB_0412c1f0:
    uVar16 = func_0x04882eb0();
    func_0x0d488440(&lStack_70);
    puVar17 = (undefined8 *)func_0x0eee2d70(uVar16);
    *(long *)(param_1 + 0xc0) = lVar25;
    func_0x0eee2d70();
    *puVar17 = &UNK_0f469ed0;
    return &UNK_0f469ed0;
  }
  lVar19 = (long)(*(ulong *)(param_1 + 200) - uVar20) >> 3;
  uVar20 = lVar19 * -0x6186186186186186;
  if (uVar21 < uVar20) {
    uVar21 = uVar20;
  }
  plVar10 = (long *)(param_1 + 0xb8);
  if (0xc30c30c30c30c2 < (ulong)(lVar19 * -0x30c30c30c30c30c3)) {
    uVar21 = 0x186186186186186;
  }
  plStack_50 = plVar10;
  if (uVar21 == 0) {
LAB_0d4868d4:
    lStack_70 = 0;
  }
  else {
    if (0x186186186186186 < uVar21) goto SUB_0412c1f0;
    lStack_70 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar21 * 0xa8);
    if (lStack_70 == 0) {
      FUN_0eec74c0(uVar21 * 0xa8,0);
      goto LAB_0d4868d4;
    }
  }
  lStack_68 = lVar25 + lStack_70;
  lStack_58 = uVar21 * 0xa8 + lStack_70;
  lStack_60 = lStack_68;
  func_0x0d488330(lStack_68);
  lVar25 = lStack_60 + 0xa8;
  lVar19 = *(long *)(param_1 + 0xb8);
  lVar9 = *(long *)(param_1 + 0xc0);
  lVar22 = (lVar19 - lVar9) + lStack_68;
  if (lVar19 != lVar9) {
    lVar24 = 0;
    do {
      uVar16 = ((undefined8 *)(lVar19 + lVar24))[1];
      *(undefined8 *)(lVar22 + lVar24) = *(undefined8 *)(lVar19 + lVar24);
      ((undefined8 *)(lVar22 + lVar24))[1] = uVar16;
      *(undefined8 *)(lVar19 + lVar24) = 0;
      ((undefined8 *)(lVar19 + lVar24))[1] = 0;
      puVar17 = (undefined8 *)(lVar22 + 0x20 + lVar24);
      *puVar17 = 0;
      puVar17[1] = 0;
      puVar17 = (undefined8 *)(lVar22 + 0x10 + lVar24);
      *puVar17 = 0;
      puVar17[1] = 0;
      *(undefined8 *)(lVar22 + 0x30 + lVar24) = 0;
      *(undefined8 *)(lVar22 + 0x28 + lVar24) = *(undefined8 *)(lVar19 + 0x28 + lVar24);
      puVar5 = (undefined4 *)(lVar19 + 0x18 + lVar24);
      uVar11 = puVar5[1];
      uVar12 = puVar5[2];
      uVar13 = puVar5[3];
      puVar6 = (undefined4 *)(lVar22 + 0x18 + lVar24);
      *puVar6 = *puVar5;
      puVar6[1] = uVar11;
      puVar6[2] = uVar12;
      puVar6[3] = uVar13;
      *(undefined2 *)(lVar19 + 0x18 + lVar24) = 0;
      *(undefined8 *)(lVar22 + 0x10 + lVar24) = *(undefined8 *)(lVar19 + 0x10 + lVar24);
      func_0x04167a20(lVar22 + lVar24 + 0x38,lVar19 + lVar24 + 0x38);
      puVar17 = (undefined8 *)(lVar19 + 0x40 + lVar24);
      uVar16 = puVar17[1];
      puVar7 = (undefined8 *)(lVar22 + 0x40 + lVar24);
      *puVar7 = *puVar17;
      puVar7[1] = uVar16;
      puVar17 = (undefined8 *)(lVar19 + 0x50 + lVar24);
      uVar16 = puVar17[1];
      puVar7 = (undefined8 *)(lVar22 + 0x50 + lVar24);
      *puVar7 = *puVar17;
      puVar7[1] = uVar16;
      puVar17 = (undefined8 *)(lVar19 + 0x60 + lVar24);
      uVar16 = puVar17[1];
      puVar7 = (undefined8 *)(lVar22 + 0x60 + lVar24);
      *puVar7 = *puVar17;
      puVar7[1] = uVar16;
      puVar17 = (undefined8 *)(lVar19 + 0x60 + lVar24);
      *puVar17 = 0;
      puVar17[1] = 0;
      *(undefined8 *)(lVar22 + 0x70 + lVar24) = *(undefined8 *)(lVar19 + 0x70 + lVar24);
      puVar17 = (undefined8 *)(lVar19 + 0x78 + lVar24);
      uVar16 = puVar17[1];
      puVar7 = (undefined8 *)(lVar22 + 0x78 + lVar24);
      *puVar7 = *puVar17;
      puVar7[1] = uVar16;
      puVar17 = (undefined8 *)(lVar22 + 0x88 + lVar24);
      *puVar17 = 0;
      puVar17[1] = 0;
      *(undefined8 *)(lVar22 + 0x98 + lVar24) = 0;
      puVar5 = (undefined4 *)(lVar19 + 0x88 + lVar24);
      uVar11 = puVar5[1];
      uVar12 = puVar5[2];
      uVar13 = puVar5[3];
      puVar6 = (undefined4 *)(lVar22 + 0x88 + lVar24);
      *puVar6 = *puVar5;
      puVar6[1] = uVar11;
      puVar6[2] = uVar12;
      puVar6[3] = uVar13;
      *(undefined8 *)(lVar22 + 0x98 + lVar24) = *(undefined8 *)(lVar19 + 0x98 + lVar24);
      puVar17 = (undefined8 *)(lVar19 + 0x88 + lVar24);
      *puVar17 = 0;
      puVar17[1] = 0;
      *(undefined8 *)(lVar19 + 0x98 + lVar24) = 0;
      *(undefined2 *)(lVar22 + 0xa0 + lVar24) = *(undefined2 *)(lVar19 + 0xa0 + lVar24);
      lVar4 = lVar19 + lVar24;
      lVar24 = lVar24 + 0xa8;
    } while (lVar4 + 0xa8 != lVar9);
    do {
      func_0x0d4884b0(lVar19);
      lVar19 = lVar19 + 0xa8;
    } while (lVar19 != lVar9);
    lVar19 = *plVar10;
  }
  *(long *)(param_1 + 0xb8) = lVar22;
  *(long *)(param_1 + 0xc0) = lVar25;
  lVar9 = *(long *)(param_1 + 200);
  *(long *)(param_1 + 200) = lStack_58;
  if (lVar19 != 0) {
    func_0x0412a280(lVar19,lVar9 - lVar19);
  }
LAB_0d486ab2:
  *(long *)(param_1 + 0xc0) = lVar25;
  func_0x0b63b6d0(*(undefined8 *)(lVar25 + -0xa8),param_2);
  lVar25 = *(long *)(param_1 + 0xc0);
  *(undefined1 *)(lVar25 + -7) = *(undefined1 *)(param_1 + 0x60);
  pbVar1 = (byte *)(param_2 + 1);
  if ((long *)(lVar25 + -0x98) != param_2) {
    pbVar3 = (byte *)(lVar25 + -0x90);
    bVar8 = *pbVar1;
    if ((*pbVar3 & 1) == 0) {
      if ((bVar8 & 1) == 0) {
        *(long *)(lVar25 + -0x80) = param_2[3];
        uVar11 = *(undefined4 *)((long)param_2 + 0xc);
        lVar19 = param_2[2];
        uVar12 = *(undefined4 *)((long)param_2 + 0x14);
        *(undefined4 *)pbVar3 = *(undefined4 *)pbVar1;
        *(undefined4 *)(lVar25 + -0x8c) = uVar11;
        *(int *)(lVar25 + -0x88) = (int)lVar19;
        *(undefined4 *)(lVar25 + -0x84) = uVar12;
      }
      else {
        FUN_04885070(pbVar3,param_2[3],param_2[2]);
      }
    }
    else {
      bVar26 = (bVar8 & 1) != 0;
      lVar19 = (long)param_2 + 9;
      if (bVar26) {
        lVar19 = param_2[3];
      }
      uVar20 = (ulong)(bVar8 >> 1);
      if (bVar26) {
        uVar20 = param_2[2];
      }
      func_0x04885120(pbVar3,lVar19,uVar20);
    }
  }
  *(long *)(lVar25 + -0x98) = *param_2;
  *(undefined8 *)(lVar25 + -0x78) = 0;
  func_0x04aa9390(&lStack_70,pbVar1,*(undefined1 *)(param_1 + 0x60));
  lVar25 = *(long *)(param_1 + 0xc0);
  func_0x04167a70(lVar25 + -0x70,&lStack_70);
  *(long *)(lVar25 + -0x68) = lStack_68;
  *(long *)(lVar25 + -0x60) = lStack_60;
  *(long *)(lVar25 + -0x58) = lStack_58;
  *(long **)(lVar25 + -0x50) = plStack_50;
  uVar11 = (undefined4)uStack_48;
  uVar12 = uStack_48._4_4_;
  uVar13 = (undefined4)uStack_40;
  uVar14 = uStack_40._4_4_;
  uStack_48 = 0;
  uStack_40 = (long *)0x0;
  plVar10 = *(long **)(lVar25 + -0x40);
  *(undefined4 *)(lVar25 + -0x48) = uVar11;
  *(undefined4 *)(lVar25 + -0x44) = uVar12;
  *(undefined4 *)(lVar25 + -0x40) = uVar13;
  *(undefined4 *)(lVar25 + -0x3c) = uVar14;
  if (plVar10 != (long *)0x0) {
    LOCK();
    plVar2 = plVar10 + 1;
    lVar19 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      func_0x0412c2d0(plVar10);
    }
  }
  plVar10 = uStack_40;
  *(undefined8 *)(lVar25 + -0x38) = uStack_38;
  if (uStack_40 != (long *)0x0) {
    LOCK();
    plVar2 = uStack_40 + 1;
    lVar25 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar25 == 0) {
      (**(code **)(*uStack_40 + 0x10))(uStack_40);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x04167a40(&lStack_70);
  lVar25 = *(long *)(param_1 + 0xc0);
  *(undefined1 *)(lVar25 + -8) = 1;
  return (undefined *)(lVar25 + -0xa8);
}


