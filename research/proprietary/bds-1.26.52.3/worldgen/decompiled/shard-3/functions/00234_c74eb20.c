/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc84eb20 (ELF vaddr 0xc74eb20)
 * Label: callee-of:0x493a160
 * Body:  [[0c84eb20, 0c84ec52] [0c84ec60, 0c84ed72] [0c84ed80, 0c84ee1d] [0c84ee20, 0c84f046] [0c84f050, 0c84f0ae] [0c84f0b0, 0c84f116] [0c84f120, 0c84f161] [0c84f170, 0c84f1f9] [0c84f267, 0c84f2a7] [0c84f2b0, 0c84f339]]
 * Ghidra: FUN_0c84eb20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_0c84eb20(ulong *param_1,long *param_2,uint param_3,ulong param_4,undefined8 param_5,
                    undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  ushort uVar4;
  char cVar5;
  ushort uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong *puVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ushort uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  int iVar24;
  long *plVar25;
  uint uVar26;
  int iStack_104;
  long *plStack_f8;
  long lStack_d8;
  ulong uStack_c0;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  ulong uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_58;
  long *plStack_50;
  long *plStack_48;
  ulong uStack_40;
  ulong *puStack_38;
  long *plVar27;
  
  uVar4 = (ushort)param_3;
  lStack_d8 = param_2[3];
  iStack_104 = (int)param_2[4];
  uVar1 = *(undefined4 *)((long)param_2 + 0x24);
  uStack_80 = param_5;
  func_0x0c84e290(&lStack_78);
  func_0x0c84e6d0(&lStack_b0,param_6,lStack_d8,iStack_104,uVar1);
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (((param_3 & 0xf) != 0) &&
     (cVar5 = func_0x0eeddcf0(&UNK_01233666,&UNK_014da798,0xc0,&UNK_011fecfa,&UNK_011ca13d),
     cVar5 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  uVar6 = (ushort)(param_3 + 0xf);
  uVar17 = uVar4;
  if ((short)uVar4 < 0) {
    uVar17 = uVar6;
  }
  plStack_f8 = (long *)(ulong)(param_3 + 0xf);
  if ((uVar6 < 0x1f) &&
     (cVar5 = func_0x0eeddcf0(&UNK_011fed4f,&UNK_013bcb4f,0x48,&UNK_013a2143,&UNK_01300c46),
     cVar5 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  uVar15 = (ulong)(short)((uint)(int)(short)uVar17 >> 4);
  *param_1 = uVar15;
  puVar11 = param_1 + 1;
  plVar25 = (long *)param_1[1];
  plVar7 = (long *)param_1[2];
  plVar27 = plVar25;
  if (plVar25 != plVar7) {
    do {
      lVar20 = plVar7[-3];
      if (lVar20 != 0) {
        plVar7[-2] = lVar20;
        func_0x0412a280(lVar20,plVar7[-1] - lVar20);
      }
      plVar7 = plVar7 + -3;
    } while (plVar7 != plVar25);
    plVar27 = (long *)*puVar11;
  }
  param_1[2] = (ulong)plVar25;
  lVar20 = param_1[3] - (long)plVar27;
  if ((ulong)((lVar20 >> 3) * -0x5555555555555555) < uVar15) {
    if ((short)uVar4 < -0xf) {
LAB_0c84f1ee:
      func_0x0c85b530();
LAB_0c84f1f3:
      uVar10 = func_0x04882eb0();
      uVar15 = param_1[1];
      puVar11 = param_1;
      if (uVar15 != 0) goto LAB_0c84f29a;
      if (lStack_b0 != 0) goto LAB_0c84f2f6;
      while (lStack_78 == 0) {
        while( true ) {
          puVar11 = (ulong *)func_0x0eee2d70(uVar10);
LAB_0c84f29a:
          uVar23 = puVar11[2];
          uVar16 = uVar15;
          if (uVar15 != uVar23) {
            do {
              lVar20 = *(long *)(uVar23 - 0x18);
              if (lVar20 != 0) {
                *(long *)(uVar23 - 0x10) = lVar20;
                func_0x0412a280(lVar20,*(long *)(uVar23 - 8) - lVar20);
              }
              uVar23 = uVar23 - 0x18;
            } while (uVar23 != uVar15);
            puVar11 = param_1;
            uVar16 = param_1[1];
          }
          puVar11[2] = uVar15;
          func_0x0412a280(uVar16,puVar11[3] - uVar16);
          if (lStack_b0 == 0) break;
LAB_0c84f2f6:
          lStack_a8 = lStack_b0;
          func_0x0412a280(lStack_b0,lStack_a0 - lStack_b0);
          if (lStack_78 != 0) goto LAB_0c84f319;
        }
      }
LAB_0c84f319:
      func_0x0412a280(lStack_78,lStack_68 - lStack_78);
      func_0x0eee2d70(uVar10);
      pcVar3 = (code *)swi(3);
      puVar11 = (ulong *)(*pcVar3)();
      return puVar11;
    }
    uVar23 = uVar15 * 0x18;
    plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar23);
    if (plVar7 == (long *)0x0) goto LAB_0c84f1df;
    while( true ) {
      lVar18 = (long)plVar25 - (long)plVar27;
      plVar25 = (long *)((long)plVar7 + lVar18);
      func_0x0eee2f00(plVar7,plVar27,lVar18);
      param_1[1] = (ulong)plVar7;
      param_1[2] = (ulong)plVar25;
      param_1[3] = (ulong)(plVar7 + uVar15 * 3);
      uVar23 = uVar15;
      if (plVar27 != (long *)0x0) {
        func_0x0412a280(plVar27,lVar20);
        plVar25 = (long *)param_1[2];
      }
LAB_0c84eda8:
      do {
        uVar16 = uVar23;
        lVar18 = lStack_d8;
        if (plVar25 < (long *)param_1[3]) {
          *plVar25 = 0;
          plVar25[1] = 0;
          plVar25[2] = 0;
          lVar20 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x8000);
          if (lVar20 == 0) {
            func_0x0eec74c0(0x8000,0);
          }
          *plVar25 = lVar20;
          plVar25[2] = lVar20 + 0x8000;
          func_0x0eee2dd0(lVar20,0,0x8000);
          plVar25[1] = lVar20 + 0x8000;
          plVar25 = plVar25 + 3;
          param_1[2] = (ulong)plVar25;
        }
        else {
          uVar23 = *puVar11;
          lVar20 = (long)plVar25 - uVar23;
          uVar8 = (lVar20 >> 3) * -0x5555555555555555 + 1;
          if (0xaaaaaaaaaaaaaaa < uVar8) goto LAB_0c84f1ee;
          lVar9 = (long)param_1[3] - uVar23;
          lVar19 = lVar9 >> 3;
          uVar22 = lVar19 * 0x5555555555555556;
          if (uVar22 <= uVar8) {
            uVar22 = uVar8;
          }
          if (0x555555555555554 < (ulong)(lVar19 * -0x5555555555555555)) {
            uVar22 = 0xaaaaaaaaaaaaaaa;
          }
          puStack_38 = puVar11;
          if (uVar22 == 0) {
            lVar19 = 0;
          }
          else {
            if (0xaaaaaaaaaaaaaaa < uVar22) goto LAB_0c84f1f3;
            lVar19 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar22 * 0x18);
            if (lVar19 == 0) {
              func_0x0eec74c0(uVar22 * 0x18,0);
              lVar19 = 0;
            }
          }
          plVar7 = (long *)(lVar19 + lVar20);
          uVar8 = lVar19 + uVar22 * 0x18;
          *(undefined8 *)(lVar19 + lVar20) = 0;
          ((undefined8 *)(lVar19 + lVar20))[1] = 0;
          *(undefined8 *)(lVar19 + 0x10 + lVar20) = 0;
          lStack_58 = lVar19;
          plStack_50 = plVar7;
          plStack_48 = plVar7;
          uStack_40 = uVar8;
          lVar19 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x8000);
          if (lVar19 == 0) {
            func_0x0eec74c0(0x8000,0);
          }
          *plVar7 = lVar19;
          plVar7[2] = lVar19 + 0x8000;
          func_0x0eee2dd0(lVar19,0,0x8000);
          plVar7[1] = lVar19 + 0x8000;
          plVar25 = plVar7 + 3;
          func_0x0eee2f00((long)plVar7 - lVar20,uVar23,lVar20);
          param_1[1] = (long)plVar7 - lVar20;
          param_1[2] = (ulong)plVar25;
          param_1[3] = uVar8;
          if (uVar23 != 0) {
            func_0x0412a280(uVar23,lVar9);
          }
          param_1[2] = (ulong)plVar25;
        }
        uVar23 = uVar16 - 1;
      } while (uVar23 != 0);
      plVar27 = (long *)(uVar16 - 1);
      lVar20 = 0xaaaaaaaaaaaaaaa;
      if ((ushort)plStack_f8 < 0x1f) break;
      iVar12 = (int)lStack_d8;
      lVar9 = lStack_d8 >> 0x23;
      iStack_104 = iStack_104 >> 3;
      uVar23 = param_4 >> 0x20;
      uStack_c0 = param_4 & 0xffffffff00000000;
      uVar16 = 0;
      plVar7 = plVar25;
      while (lVar19 = *(long *)(*puVar11 + uVar16 * 0x18), lVar19 != 0) {
        iVar2 = *(int *)((long)param_2 + 0x24);
        lVar20 = 0;
        uVar8 = param_4;
        uStack_98 = uVar16;
        do {
          plStack_f8 = (long *)((uVar8 & 0xffffffff) + uStack_c0);
          lVar14 = 0;
          lStack_90 = lVar20;
          lStack_88 = lVar19;
          do {
            iVar24 = (int)uStack_80 + (int)lVar14;
            uVar26 = ((iVar24 >> 3) +
                     ((((int)param_4 + (int)lVar20 >> 3) - (iVar12 >> 3)) * 4 - iStack_104)) * iVar2
            ;
            plVar27 = (long *)(ulong)uVar26;
            lVar21 = 0;
            plVar7 = plStack_f8;
            do {
              lStack_d8._0_4_ = (int)(lVar18 >> 0x23);
              uVar13 = (((int)uVar23 + (int)lVar21 >> 3) - (int)lStack_d8) + uVar26;
              uVar16 = (ulong)uVar13;
              if ((*(ulong *)(lStack_78 + (ulong)(uVar13 >> 6) * 8) >> (uVar16 & 0x3f) & 1) != 0) {
                uVar13 = func_0x0d2c42b0(plVar7,iVar24,&lStack_b0,uVar16,4,iVar2);
                uVar16 = (ulong)uVar13;
              }
              *(undefined8 *)(lVar19 + lVar21 * 8) = *(undefined8 *)(*param_2 + uVar16 * 8);
              lVar21 = lVar21 + 1;
              plVar7 = plVar7 + 0x20000000;
            } while (lVar21 != 0x10);
            lVar14 = lVar14 + 1;
            lVar19 = lVar19 + 0x80;
          } while (lVar14 != 0x10);
          lVar20 = lStack_90 + 1;
          lVar19 = lStack_88 + 0x800;
          uVar8 = (ulong)((int)uVar8 + 1);
        } while (lVar20 != 0x10);
        uVar16 = uStack_98 + 1;
        uStack_c0 = uStack_c0 + 0x1000000000;
        uVar23 = uVar23 + 0x10;
        lVar20 = 0x10;
        if (uVar16 == uVar15) goto LAB_0c84efb2;
      }
      func_0x04890760();
      plVar25 = (long *)0x0;
      lStack_d8 = lVar9;
LAB_0c84f1df:
      func_0x0eec74c0(uVar23,0);
    }
  }
  else {
    uVar23 = uVar15;
    if (0x1e < uVar6) goto LAB_0c84eda8;
  }
LAB_0c84efb2:
  if (lStack_b0 != 0) {
    lStack_a8 = lStack_b0;
    func_0x0412a280(lStack_b0,lStack_a0 - lStack_b0);
  }
  if (lStack_78 != 0) {
    lStack_70 = lStack_78;
    func_0x0412a280(lStack_78,lStack_68 - lStack_78);
  }
  return param_1;
}


