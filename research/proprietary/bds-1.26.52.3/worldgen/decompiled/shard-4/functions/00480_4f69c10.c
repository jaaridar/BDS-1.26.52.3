/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5069c10 (ELF vaddr 0x4f69c10)
 * Label: callee-of:0x4de9260
 * Body:  [[05069c10, 05069c4d] [05069c50, 05069cc1] [05069cd0, 05069eda]]
 * Ghidra: FUN_05069c10
 */


long FUN_05069c10(long param_1,long *param_2,undefined1 param_3)

{
  byte *pbVar1;
  long *plVar2;
  byte *pbVar3;
  byte bVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  bool bVar18;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar13 = *(ulong *)(param_1 + 0xc0);
  if (*(ulong *)(param_1 + 0xb8) != uVar13) {
    lVar17 = *param_2;
    lVar15 = *(ulong *)(param_1 + 0xb8) + 0x19;
    do {
      if (*(long *)(lVar15 + -9) == lVar17) {
        if ((*(long **)(lVar15 + 0x17) == param_2) && (lVar15 + -9 == param_2[4]))
        goto LAB_05069ec5;
        bVar4 = *(byte *)(lVar15 + -1);
        if ((bVar4 & 1) == 0) {
          uVar16 = (ulong)(bVar4 >> 1);
          uVar12 = (ulong)*(byte *)(param_2 + 1);
          if ((*(byte *)(param_2 + 1) & 1) != 0) goto LAB_05069cde;
LAB_05069cb7:
          if (uVar16 != uVar12 >> 1) goto LAB_05069c5d;
        }
        else {
          uVar16 = *(ulong *)(lVar15 + 7);
          uVar12 = (ulong)*(byte *)(param_2 + 1);
          if ((*(byte *)(param_2 + 1) & 1) == 0) goto LAB_05069cb7;
LAB_05069cde:
          if (uVar16 != param_2[2]) goto LAB_05069c5d;
        }
        lVar8 = lVar15;
        if ((bVar4 & 1) != 0) {
          lVar8 = *(long *)(lVar15 + 0xf);
        }
        lVar14 = (long)param_2 + 9;
        if ((uVar12 & 1) != 0) {
          lVar14 = param_2[3];
        }
        iVar11 = bcmp(lVar8,lVar14);
        if (iVar11 == 0) {
          *(long **)(lVar15 + 0x17) = param_2;
          param_2[4] = lVar15 + -9;
LAB_05069ec5:
          return lVar15 + -0x19;
        }
      }
LAB_05069c5d:
      *(undefined8 *)(lVar15 + 0x17) = 0;
      uVar16 = lVar15 + 0x8f;
      lVar15 = lVar15 + 0xa8;
    } while (uVar16 != uVar13);
  }
  if (uVar13 < *(ulong *)(param_1 + 200)) {
    func_0x0506cfe0(uVar13);
    lVar17 = uVar13 + 0xa8;
    *(long *)(param_1 + 0xc0) = lVar17;
  }
  else {
    lVar17 = func_0x0506ce80(param_1 + 0xb8);
  }
  *(long *)(param_1 + 0xc0) = lVar17;
  func_0x0b63b6d0(*(undefined8 *)(lVar17 + -0xa8),param_2);
  lVar17 = *(long *)(param_1 + 0xc0);
  *(undefined1 *)(lVar17 + -7) = *(undefined1 *)(param_1 + 0x60);
  pbVar1 = (byte *)(param_2 + 1);
  if ((long *)(lVar17 + -0x98) != param_2) {
    pbVar3 = (byte *)(lVar17 + -0x90);
    bVar4 = *pbVar1;
    if ((*pbVar3 & 1) == 0) {
      if ((bVar4 & 1) == 0) {
        *(long *)(lVar17 + -0x80) = param_2[3];
        uVar6 = *(undefined4 *)((long)param_2 + 0xc);
        lVar15 = param_2[2];
        uVar7 = *(undefined4 *)((long)param_2 + 0x14);
        *(undefined4 *)pbVar3 = *(undefined4 *)pbVar1;
        *(undefined4 *)(lVar17 + -0x8c) = uVar6;
        *(int *)(lVar17 + -0x88) = (int)lVar15;
        *(undefined4 *)(lVar17 + -0x84) = uVar7;
      }
      else {
        func_0x04885070(pbVar3,param_2[3],param_2[2]);
      }
    }
    else {
      bVar18 = (bVar4 & 1) != 0;
      lVar15 = (long)param_2 + 9;
      if (bVar18) {
        lVar15 = param_2[3];
      }
      uVar13 = (ulong)(bVar4 >> 1);
      if (bVar18) {
        uVar13 = param_2[2];
      }
      FUN_04885120(pbVar3,lVar15,uVar13);
    }
  }
  *(long *)(lVar17 + -0x98) = *param_2;
  *(undefined8 *)(lVar17 + -0x78) = 0;
  func_0x04aa9390(auStack_70,pbVar1,*(undefined1 *)(param_1 + 0x60));
  lVar17 = *(long *)(param_1 + 0xc0);
  func_0x04167a70(lVar17 + -0x70,auStack_70);
  *(undefined8 *)(lVar17 + -0x68) = uStack_68;
  *(undefined8 *)(lVar17 + -0x60) = uStack_60;
  *(undefined8 *)(lVar17 + -0x58) = uStack_58;
  *(undefined8 *)(lVar17 + -0x50) = uStack_50;
  uVar6 = (undefined4)uStack_48;
  uVar7 = uStack_48._4_4_;
  uVar9 = (undefined4)uStack_40;
  uVar10 = uStack_40._4_4_;
  uStack_48 = 0;
  uStack_40 = (long *)0x0;
  plVar5 = *(long **)(lVar17 + -0x40);
  *(undefined4 *)(lVar17 + -0x48) = uVar6;
  *(undefined4 *)(lVar17 + -0x44) = uVar7;
  *(undefined4 *)(lVar17 + -0x40) = uVar9;
  *(undefined4 *)(lVar17 + -0x3c) = uVar10;
  if (plVar5 != (long *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar15 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      func_0x0412c2d0(plVar5);
    }
  }
  plVar5 = uStack_40;
  *(undefined8 *)(lVar17 + -0x38) = uStack_38;
  if (uStack_40 != (long *)0x0) {
    LOCK();
    plVar2 = uStack_40 + 1;
    lVar17 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*uStack_40 + 0x10))(uStack_40);
      func_0x0412c2d0(plVar5);
    }
  }
  func_0x04167a40(auStack_70);
  lVar17 = *(long *)(param_1 + 0xc0);
  *(undefined1 *)(lVar17 + -8) = param_3;
  return lVar17 + -0xa8;
}


