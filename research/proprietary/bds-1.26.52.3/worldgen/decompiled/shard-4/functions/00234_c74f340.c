/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc84f340 (ELF vaddr 0xc74f340)
 * Label: callee-of:0x493aaf0
 * Body:  [[0c84f340, 0c84f566] [0c84f570, 0c84f5b9] [0c84f5c0, 0c84f629] [0c84f630, 0c84f679] [0c84f680, 0c84f6f0] [0c84f700, 0c84f756] [0c84f760, 0c84f8c8] [0c84f945, 0c84f9f7]]
 * Ghidra: FUN_0c84f340
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0c84f340(long *param_1,long *param_2,uint param_3,ulong param_4,undefined8 param_5,
                   ulong param_6)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  ushort uVar4;
  undefined8 *puVar5;
  char cVar6;
  ushort uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  int iVar19;
  undefined8 *puVar20;
  ushort uVar21;
  int iVar22;
  undefined8 *puVar23;
  long *plStack_120;
  long *plStack_118;
  undefined8 *puStack_110;
  int iStack_104;
  undefined8 *puStack_100;
  long lStack_f8;
  long lStack_f0;
  ulong uStack_e8;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  ulong uStack_d0;
  ulong uStack_c8;
  long *plStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar20 = (undefined8 *)(param_6 & 0xffffffff);
  uVar4 = (ushort)param_3;
  lVar12 = param_2[3];
  lVar16 = param_2[4];
  uVar1 = *(undefined4 *)((long)param_2 + 0x24);
  plStack_118 = param_1;
  uStack_e8 = param_4;
  plStack_c0 = param_2;
  uStack_80 = param_5;
  func_0x0c84e290(&lStack_60);
  iStack_104 = (int)lVar16;
  func_0x0c84e6d0(&lStack_b8,puVar20,lVar12,(int)lVar16,uVar1);
  if (((param_3 & 0xf) != 0) &&
     (cVar6 = func_0x0eeddcf0(&UNK_01233666,&UNK_014da798,0xe9,&UNK_011fecfa,&UNK_0136e229),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  puVar23 = (undefined8 *)(ulong)(param_3 + 0xf);
  uVar21 = (ushort)(param_3 + 0xf);
  uVar7 = uVar4;
  if ((short)uVar4 < 0) {
    uVar7 = uVar21;
  }
  lVar16 = (long)(short)((uint)(int)(short)uVar7 >> 4);
  *plStack_118 = 0;
  plStack_118[1] = 0;
  plStack_118[2] = 0;
  if (uVar21 < 0x1f) {
    puVar14 = (undefined8 *)0x0;
    puStack_110 = (undefined8 *)0x0;
  }
  else {
    if ((short)uVar4 < -0xf) {
LAB_0c84f8ae:
      uVar10 = func_0x0c85a0b0();
      if (lStack_b8 == 0) goto LAB_0c84f945;
LAB_0c84f986:
      lStack_b0 = lStack_b8;
      func_0x0412a280(lStack_b8,lStack_a8 - lStack_b8);
      puVar14 = puVar20;
      if (lStack_60 == 0) goto LAB_0c84f952;
LAB_0c84f9a8:
      lStack_58 = lStack_60;
      func_0x0412a280(lStack_60,lStack_50 - lStack_60);
      _Unwind_Resume(uVar10);
      do {
        puVar5 = puVar14 + -1;
        puVar20 = puVar14;
        while (puVar14 = puVar5, puVar14 == puVar23) {
          plStack_118[1] = (long)puVar23;
          func_0x0412a280(puVar23,plStack_118[2] - (long)puVar23);
          if (lStack_b8 != 0) goto LAB_0c84f986;
LAB_0c84f945:
          puVar14 = puVar20;
          if (lStack_60 != 0) goto LAB_0c84f9a8;
LAB_0c84f952:
          _Unwind_Resume(uVar10);
          puVar5 = puStack_110;
        }
        plVar3 = (long *)puVar14[-1];
        puVar14[-1] = 0;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 8))();
        }
      } while( true );
    }
    puStack_110 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar16 * 8);
    if (puStack_110 == (undefined8 *)0x0) {
      func_0x0eec74c0(lVar16 * 8,0);
    }
    puVar14 = puStack_110 + lVar16;
    *plStack_118 = (long)puStack_110;
    plStack_118[1] = (long)puStack_110;
    plStack_118[2] = (long)puVar14;
  }
  lStack_f8 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x8000);
  if (lStack_f8 == 0) {
    func_0x0eec74c0(0x8000,0);
  }
  func_0x0eee2dd0(lStack_f8,0,0x8000);
  if (0x1e < uVar21) {
    iStack_dc = (int)lVar12 >> 3;
    lStack_68 = lVar12 >> 0x23;
    iStack_104 = iStack_104 >> 3;
    uStack_c8 = uStack_e8 >> 0x20;
    lStack_a0 = lVar16 + (ulong)(lVar16 == 0);
    uStack_d0 = uStack_e8 & 0xffffffff00000000;
    lVar12 = 0;
    puStack_100 = puStack_110;
    do {
      iVar2 = *(int *)((long)plStack_c0 + 0x24);
      lVar13 = 0;
      uVar8 = uStack_e8;
      lVar16 = lStack_f8;
      lStack_f0 = lVar12;
      puStack_98 = puVar14;
      do {
        iStack_d8 = (int)uVar8;
        lStack_78 = (uVar8 & 0xffffffff) + uStack_d0;
        iStack_d4 = (((int)uStack_e8 + (int)lVar13 >> 3) - iStack_dc) * 4 - iStack_104;
        lVar12 = 0;
        lStack_90 = lVar13;
        lStack_88 = lVar16;
        do {
          iVar19 = (int)uStack_80 + (int)lVar12;
          iVar22 = (iVar19 >> 3) + iStack_d4;
          lVar17 = 0;
          lVar13 = lStack_78;
          lStack_70 = lVar12;
          do {
            uVar11 = (((int)uStack_c8 + (int)lVar17 >> 3) - (int)lStack_68) + iVar22 * iVar2;
            uVar8 = (ulong)uVar11;
            if ((*(ulong *)(lStack_60 + (ulong)(uVar11 >> 6) * 8) >> (uVar8 & 0x3f) & 1) != 0) {
              uVar11 = func_0x0d2c42b0(lVar13,iVar19,&lStack_b8,uVar8,4,iVar2);
              uVar8 = (ulong)uVar11;
            }
            *(undefined8 *)(lVar16 + lVar17 * 8) = *(undefined8 *)(*plStack_c0 + uVar8 * 8);
            lVar17 = lVar17 + 1;
            lVar13 = lVar13 + 0x100000000;
          } while (lVar17 != 0x10);
          lVar12 = lStack_70 + 1;
          lVar16 = lVar16 + 0x80;
        } while (lVar12 != 0x10);
        lVar13 = lStack_90 + 1;
        lVar16 = lStack_88 + 0x800;
        uVar8 = (ulong)(iStack_d8 + 1);
      } while (lVar13 != 0x10);
      uStack_40 = 0x1000;
      lStack_38 = lStack_f8;
      func_0x0c84fa00(&plStack_120,&uStack_40);
      plVar3 = plStack_120;
      if (puStack_98 <= puStack_110) {
        puVar23 = (undefined8 *)((long)puStack_110 - (long)puStack_100);
        puVar20 = (undefined8 *)((long)puVar23 >> 3);
        uVar8 = (long)puVar20 + 1;
        if (uVar8 < 0x2000000000000000) {
          uVar15 = (long)puStack_98 - (long)puStack_100;
          uVar18 = (long)uVar15 >> 2;
          if ((ulong)((long)uVar15 >> 2) <= uVar8) {
            uVar18 = uVar8;
          }
          if (0x7ffffffffffffff7 < uVar15) {
            uVar18 = 0x1fffffffffffffff;
          }
          if (uVar18 < 0x2000000000000000) {
            lVar12 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar18 * 8);
            if (lVar12 == 0) {
              func_0x0eec74c0(uVar18 * 8,0);
            }
            puVar5 = puStack_100;
            plVar3 = plStack_120;
            puVar14 = (undefined8 *)(lVar12 + uVar18 * 8);
            plStack_120 = (long *)0x0;
            *(long **)(lVar12 + (long)puVar23) = plVar3;
            puVar9 = (undefined8 *)((long)puVar23 + lVar12 + 8);
            puVar20 = (undefined8 *)((long)puVar23 + (long)puVar20 * -8 + lVar12);
            func_0x0eee2f00(puVar20,puStack_100,puVar23);
            *plStack_118 = (long)puVar20;
            plStack_118[1] = (long)puVar9;
            plStack_118[2] = (long)puVar14;
            if (puVar5 != (undefined8 *)0x0) {
              func_0x0412a280(puVar5,uVar15);
            }
            goto LAB_0c84f840;
          }
          func_0x04882eb0();
        }
        func_0x0c85a0b0();
        goto LAB_0c84f8ae;
      }
      plStack_120 = (long *)0x0;
      *puStack_110 = plVar3;
      puVar9 = puStack_110 + 1;
      puVar14 = puStack_98;
      puVar20 = puStack_100;
LAB_0c84f840:
      puStack_100 = puVar20;
      lVar12 = lStack_f0;
      plVar3 = plStack_120;
      plStack_118[1] = (long)puVar9;
      plStack_120 = (long *)0x0;
      puStack_110 = puVar9;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      lVar12 = lVar12 + 1;
      uStack_d0 = uStack_d0 + 0x1000000000;
      uStack_c8 = uStack_c8 + 0x10;
    } while (lVar12 != lStack_a0);
  }
  func_0x0412a280(lStack_f8,0x8000);
  if (lStack_b8 != 0) {
    lStack_b0 = lStack_b8;
    func_0x0412a280(lStack_b8,lStack_a8 - lStack_b8);
  }
  if (lStack_60 != 0) {
    lStack_58 = lStack_60;
    func_0x0412a280(lStack_60,lStack_50 - lStack_60);
  }
  return plStack_118;
}


