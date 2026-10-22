/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a841e0 (ELF vaddr 0x49841e0)
 * Label: caller-of-seed
 * Body:  [[04a841e0, 04a84642] [04a84650, 04a848d8] [04a848e0, 04a84a41] [04a84a50, 04a84a94] [04a84aa0, 04a84b30] [04a84bc4, 04a84be3] [04a84c93, 04a84c9d] [04a84cc6, 04a84cdc]]
 * Ghidra: FUN_04a841e0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_04a841e0(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  code *pcVar6;
  undefined3 uVar7;
  long lVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  undefined4 *puVar16;
  ulong uVar17;
  int iVar18;
  ulong uVar19;
  int *piVar20;
  int *piVar21;
  long *plStack_b30;
  byte bStack_b28;
  undefined4 uStack_b27;
  undefined4 uStack_b23;
  undefined4 uStack_b1f;
  undefined4 uStack_b1b;
  undefined2 uStack_b17;
  undefined1 uStack_b15;
  undefined4 uStack_b14;
  byte bStack_b10;
  undefined7 uStack_b0f;
  undefined1 uStack_b08;
  undefined4 uStack_b07;
  undefined1 uStack_b03;
  undefined8 uStack_b00;
  byte bStack_af8;
  undefined7 uStack_af7;
  undefined4 uStack_af0;
  undefined1 uStack_aec;
  undefined8 uStack_ae8;
  byte bStack_ae0;
  undefined4 uStack_adf;
  undefined4 uStack_adb;
  undefined4 uStack_ad7;
  undefined4 uStack_ad3;
  undefined2 uStack_acf;
  undefined1 uStack_acd;
  undefined4 uStack_acc;
  byte bStack_ac8;
  undefined7 uStack_ac7;
  undefined1 uStack_ac0;
  undefined4 uStack_abf;
  undefined1 uStack_abb;
  undefined8 uStack_ab8;
  byte bStack_ab0;
  undefined5 uStack_aaf;
  undefined2 uStack_aaa;
  undefined1 uStack_aa8;
  undefined5 uStack_aa7;
  undefined1 uStack_aa2;
  undefined8 uStack_aa0;
  byte bStack_a98;
  undefined7 uStack_a97;
  undefined1 uStack_a90;
  undefined2 uStack_a8f;
  undefined1 uStack_a8d;
  undefined8 uStack_a88;
  byte bStack_a80;
  undefined4 uStack_a7f;
  undefined4 uStack_a7b;
  undefined4 uStack_a77;
  undefined4 uStack_a73;
  undefined1 uStack_a6f;
  undefined6 uStack_a6e;
  long *plStack_a68;
  undefined8 uStack_a60;
  long lStack_a58;
  long lStack_a50;
  long *plStack_a48;
  long *plStack_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  undefined1 uStack_a28;
  undefined1 uStack_a27;
  undefined6 uStack_a26;
  undefined4 uStack_a20;
  undefined4 uStack_a1c;
  uint auStack_a18 [623];
  undefined8 uStack_5c;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 *puStack_38;
  
  func_0x0ca687f0();
  if (*(long *)(param_1 + 0x4b8) != 0) {
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar10 = (long)&UNK_0f47e0b0;
    plVar10[2] = 0;
    plVar10[3] = 0;
    plVar10[1] = (long)(plVar10 + 2);
    puVar3 = *(undefined8 **)(param_1 + 0x4b8);
    bStack_a98 = 0x14;
    uStack_a97 = 0x556e6f67617244;
    uStack_a90 = 0x55;
    uStack_a8f = 0x4449;
    uStack_a8d = 0;
    uVar14 = puVar3[8];
    uStack_a30._0_1_ = (byte)&bStack_a98;
    uStack_a30._1_7_ = (undefined7)((ulong)&bStack_a98 >> 8);
    plStack_a68 = plVar10;
    lVar11 = func_0x0d6c9580(plVar10 + 1,&bStack_a98,&UNK_01563a4f,&uStack_a30,&bStack_b10);
    if ((ulong)*(uint *)(lVar11 + 0x60) != 0xffffffff) {
      (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar11 + 0x60) * 8))(&uStack_a30,lVar11 + 0x38);
    }
    *(undefined **)(lVar11 + 0x38) = &UNK_0f47e200;
    *(undefined8 *)(lVar11 + 0x40) = uVar14;
    *(undefined4 *)(lVar11 + 0x60) = 4;
    if ((bStack_a98 & 1) != 0) {
      func_0x0412a280(uStack_a88,CONCAT71(uStack_a97,bStack_a98) & 0xfffffffffffffffe);
    }
    bStack_b10 = 0x18;
    uStack_b0f = 0x4b6e6f67617244;
    uStack_b08 = 0x69;
    uStack_b07 = 0x64656c6c;
    uStack_b03 = 0;
    func_0x0d6bbef0(plVar10,&bStack_b10,*(undefined1 *)(puVar3 + 7));
    if ((bStack_b10 & 1) != 0) {
      func_0x0412a280(uStack_b00,CONCAT71(uStack_b0f,bStack_b10) & 0xfffffffffffffffe);
    }
    bStack_ab0 = 0x1a;
    uStack_aaf = 0x6f67617244;
    uStack_aaa = 0x536e;
    uStack_aa8 = 0x70;
    uStack_aa7 = 0x64656e7761;
    uStack_aa2 = 0;
    func_0x0d6bbef0(plVar10,&bStack_ab0,*(undefined1 *)((long)puVar3 + 0x3a));
    if ((bStack_ab0 & 1) != 0) {
      func_0x0412a280(uStack_aa0,
                      CONCAT26(uStack_aaa,CONCAT51(uStack_aaf,bStack_ab0)) & 0xfffffffffffffffe);
    }
    bStack_a80 = 0x20;
    uStack_a7f = _DAT_014c8fa5;
    uStack_a7b = _UNK_014c8fa9;
    uStack_a77 = _UNK_014c8fad;
    uStack_a73 = _UNK_014c8fb1;
    uStack_a6f = 0;
    func_0x0d6bbef0(plVar10,&bStack_a80,*(undefined1 *)((long)puVar3 + 0x39));
    if ((bStack_a80 & 1) != 0) {
      func_0x0412a280(CONCAT62(uStack_a6e,CONCAT11(uStack_a6f,uStack_a73._3_1_)),
                      CONCAT35((undefined3)uStack_a7b,CONCAT41(uStack_a7f,bStack_a80)) &
                      0xfffffffffffffffe);
    }
    bStack_ac8 = 0x18;
    uStack_ac7 = 0x61707365527349;
    uStack_ac0 = 0x77;
    uStack_abf = 0x676e696e;
    uStack_abb = 0;
    func_0x0d6bbef0(plVar10,&bStack_ac8,*(int *)(puVar3 + 0xc) != 0);
    if ((bStack_ac8 & 1) != 0) {
      func_0x0412a280(uStack_ab8,CONCAT71(uStack_ac7,bStack_ac8) & 0xfffffffffffffffe);
    }
    bStack_ae0 = 0x24;
    uStack_adf = _DAT_014addd2;
    uStack_adb = _UNK_014addd6;
    uStack_ad7 = _UNK_014addda;
    uStack_ad3 = _UNK_014addde;
    uStack_acf = 0x6e6f;
    uStack_acd = 0;
    uVar1 = *(undefined1 *)(puVar3 + 0x10);
    uStack_a30._0_1_ = (byte)&bStack_ae0;
    uStack_a30._1_7_ = (undefined7)((ulong)&bStack_ae0 >> 8);
    lVar11 = func_0x0d6c9580(plVar10 + 1,&bStack_ae0,&UNK_01563a4f,&uStack_a30,&bStack_b28);
    if ((ulong)*(uint *)(lVar11 + 0x60) != 0xffffffff) {
      (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar11 + 0x60) * 8))(&uStack_a30,lVar11 + 0x38);
    }
    *(undefined **)(lVar11 + 0x38) = &UNK_0f47e040;
    *(undefined1 *)(lVar11 + 0x40) = uVar1;
    *(undefined4 *)(lVar11 + 0x60) = 1;
    if ((bStack_ae0 & 1) != 0) {
      func_0x0412a280(CONCAT44(uStack_acc,CONCAT13(uStack_acd,CONCAT21(uStack_acf,uStack_ad3._3_1_))
                              ),
                      CONCAT35((undefined3)uStack_adb,CONCAT41(uStack_adf,bStack_ae0)) &
                      0xfffffffffffffffe);
    }
    if (((*(int *)(puVar3 + 9) != -1) || (*(int *)((long)puVar3 + 0x4c) != -1)) ||
       (*(int *)(puVar3 + 10) != -1)) {
      bStack_b28 = 0x24;
      uStack_b27 = _DAT_01494c6f;
      uStack_b23 = _UNK_01494c73;
      uStack_b1f = _UNK_01494c77;
      uStack_b1b = _UNK_01494c7b;
      uStack_b17 = 0x6e6f;
      uStack_b15 = 0;
      uStack_a30._0_1_ = 0;
      uStack_a30._1_7_ = 0;
      func_0x0d6c2c30(&uStack_a30);
      func_0x0d6c2c30(&uStack_a30,*(undefined4 *)((long)puVar3 + 0x4c));
      func_0x0d6c2c30(&uStack_a30,*(undefined4 *)(puVar3 + 10));
      plVar13 = (long *)CONCAT71(uStack_a30._1_7_,(byte)uStack_a30);
      uStack_a30._0_1_ = 0;
      uStack_a30._1_7_ = 0;
      uStack_a38 = plVar13;
      func_0x0d6bb450(plVar10,&bStack_b28,&uStack_a38);
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 8))(plVar13);
      }
      plVar10 = (long *)CONCAT71(uStack_a30._1_7_,(byte)uStack_a30);
      uStack_a30._0_1_ = 0;
      uStack_a30._1_7_ = 0;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 8))();
      }
      if ((bStack_b28 & 1) != 0) {
        func_0x0412a280(CONCAT44(uStack_b14,
                                 CONCAT13(uStack_b15,CONCAT21(uStack_b17,uStack_b1b._3_1_))),
                        CONCAT35((undefined3)uStack_b23,CONCAT41(uStack_b27,bStack_b28)) &
                        0xfffffffffffffffe);
      }
    }
    piVar20 = (int *)puVar3[2];
    uStack_a60 = param_2;
    if (piVar20 == (int *)puVar3[1]) {
      iVar18 = 0;
      do {
        while (piVar20 < (int *)puVar3[3]) {
          *piVar20 = iVar18;
          piVar20 = piVar20 + 1;
          puVar3[2] = piVar20;
          iVar18 = iVar18 + 1;
          if (iVar18 == 0x14) goto LAB_04a84773;
        }
        lVar11 = puVar3[1];
        lStack_a50 = (long)piVar20 - lVar11;
        plVar10 = (long *)(lStack_a50 >> 2);
        uVar12 = (long)plVar10 + 1;
        if (0x3fffffffffffffff < uVar12) {
          func_0x04aa1da0();
LAB_04a84ad0:
          uVar14 = FUN_04882eb0();
          if (plVar10 == (long *)0x0) {
            plVar10 = (long *)CONCAT71(uStack_a30._1_7_,(byte)uStack_a30);
          }
          else {
            (**(code **)(*plVar10 + 8))(plVar10);
            plVar10 = (long *)CONCAT71(uStack_a30._1_7_,(byte)uStack_a30);
          }
          if (plVar10 == (long *)0x0) {
            uStack_a30._1_7_ = 0;
            uStack_a30._0_1_ = 0;
          }
          else {
            uStack_a30._1_7_ = 0;
            uStack_a30._0_1_ = 0;
            (**(code **)(*plVar10 + 8))();
          }
          if ((bStack_b28 & 1) != 0) {
            uStack_b1b._3_1_ = (undefined1)((uint)uStack_b1b >> 0x18);
            uVar7 = CONCAT21(uStack_b17,uStack_b1b._3_1_);
            func_0x0412a280(CONCAT44(uStack_b14,CONCAT13(uStack_b15,uVar7)),
                            CONCAT35((undefined3)uStack_b23,CONCAT41(uStack_b27,bStack_b28)) &
                            0xfffffffffffffffe);
          }
          (**(code **)(*plStack_a68 + 8))();
          func_0x0eee2d70(uVar14);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar17 = (long)puVar3[3] - lVar11;
        uVar19 = (long)uVar17 >> 1;
        if ((ulong)((long)uVar17 >> 1) <= uVar12) {
          uVar19 = uVar12;
        }
        if (0x7ffffffffffffffb < uVar17) {
          uVar19 = 0x3fffffffffffffff;
        }
        lStack_a58 = lVar11;
        if (0x3fffffffffffffff < uVar19) goto LAB_04a84ad0;
        lVar11 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar19 * 4);
        if (lVar11 == 0) {
          func_0x0eec74c0(uVar19 * 4,0);
        }
        lVar8 = lStack_a58;
        *(int *)(lVar11 + lStack_a50) = iVar18;
        piVar20 = (int *)(lVar11 + lStack_a50 + 4);
        lVar15 = lVar11 + lStack_a50 + (long)plVar10 * -4;
        func_0x0eee2f00(lVar15,lStack_a58);
        puVar3[1] = lVar15;
        puVar3[2] = piVar20;
        puVar3[3] = lVar11 + uVar19 * 4;
        if (lVar8 != 0) {
          func_0x0412a280(lVar8,uVar17);
        }
        puVar3[2] = piVar20;
        iVar18 = iVar18 + 1;
      } while (iVar18 != 0x14);
LAB_04a84773:
      piVar4 = (int *)puVar3[1];
      plVar10 = (long *)(**(code **)(*(long *)*puVar3 + 0x150))();
      uVar12 = (**(code **)(*plVar10 + 0x438))(plVar10);
      uStack_a30._0_1_ = 0x18;
      uStack_a30._1_7_ = 0xf147b;
      puStack_38 = &uStack_a28;
      uStack_a28 = 0xd0;
      uStack_a27 = 0x56;
      uStack_a26 = 0xf53;
      uStack_48 = 0x100000000000000;
      uStack_a20 = (undefined4)uVar12;
      uStack_54 = 0;
      uStack_50 = 0;
      lVar11 = 7;
      while( true ) {
        uVar12 = ((ulong)(((uint)(uVar12 >> 0x1e) & 3 ^ (uint)uVar12) * 0x6c078965) + lVar11) - 6;
        uVar9 = (uint)uVar12;
        *(uint *)((long)&uStack_a38 + lVar11 * 4 + 4) = uVar9;
        if (lVar11 == 0x193) break;
        uVar9 = (((uint)(uVar12 >> 0x1e) & 3 ^ uVar9) * 0x6c078965 + (int)lVar11) - 5;
        uVar12 = (ulong)uVar9;
        *(uint *)((long)&uStack_a30 + lVar11 * 4) = uVar9;
        lVar11 = lVar11 + 2;
      }
      uStack_5c = 0x18e00000270;
      uStack_40 = 1;
      piVar21 = piVar4 + 1;
      uStack_a1c = uStack_a20;
      if (piVar21 != piVar20 && piVar4 != piVar20) {
        uVar12 = 1;
        do {
          if ((int)uVar12 == -1) {
            uVar19 = 0;
            if (uVar12 != 0) goto LAB_04a84a50;
          }
          else {
            uVar19 = func_0x0ee4a030(puStack_38,0);
            uVar19 = (ulong)(int)((uVar19 & 0xffffffff) % (uVar12 + 1 & 0xffffffff));
            if (uVar12 != uVar19) {
LAB_04a84a50:
              iVar18 = *piVar21;
              *piVar21 = piVar4[uVar19];
              piVar4[uVar19] = iVar18;
            }
          }
          piVar21 = piVar21 + 1;
          uVar12 = uVar12 + 1;
        } while (piVar21 != piVar20);
      }
    }
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    *plVar10 = (long)&UNK_0f47e350;
    plVar10[1] = 0;
    plVar10[2] = 0;
    *(undefined8 *)((long)plVar10 + 0x11) = 0;
    *(undefined8 *)((long)plVar10 + 0x19) = 0;
    puVar16 = (undefined4 *)puVar3[1];
    puVar5 = (undefined4 *)puVar3[2];
    if (puVar16 != puVar5) {
      do {
        plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x10);
        if (plVar13 == (long *)0x0) {
          func_0x0eec74c0(0x10,0);
        }
        uVar2 = *puVar16;
        *plVar13 = (long)&UNK_0f47e2e0;
        *(undefined4 *)(plVar13 + 1) = uVar2;
        plStack_b30 = plVar13;
        func_0x0d6c2370(plVar10,&plStack_b30);
        plVar13 = plStack_b30;
        plStack_b30 = (long *)0x0;
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 8))();
        }
        puVar16 = puVar16 + 1;
      } while (puVar16 != puVar5);
    }
    plVar13 = plStack_a68;
    uStack_a30._0_1_ = 0x10;
    uStack_a30._1_7_ = 0x79617765746147;
    uStack_a28 = 0x73;
    uStack_a27 = 0;
    plStack_a40 = plVar10;
    func_0x0d6bb450(plStack_a68,&uStack_a30,&plStack_a40);
    (**(code **)(*plVar10 + 8))(plVar10);
    uVar14 = uStack_a60;
    if (((byte)uStack_a30 & 1) != 0) {
      func_0x0412a280(CONCAT44(uStack_a1c,uStack_a20),
                      CONCAT71(uStack_a30._1_7_,(byte)uStack_a30) & 0xfffffffffffffffe);
    }
    bStack_af8 = 0x16;
    uStack_af7 = 0x466e6f67617244;
    uStack_af0 = 0x74686769;
    uStack_aec = 0;
    plStack_a48 = plVar13;
    func_0x0d6bb450(uVar14,&bStack_af8,&plStack_a48);
    (**(code **)(*plVar13 + 8))(plVar13);
    if ((bStack_af8 & 1) != 0) {
      func_0x0412a280(uStack_ae8,CONCAT71(uStack_af7,bStack_af8) & 0xfffffffffffffffe);
    }
  }
  return;
}



/* ---- referenced strings ----
 * 0x1494c6f  ExitPortalLocation
 * 0x14addd2  DragonFightVersion
 * 0x14c8fa5  PreviouslyKilled
 */
