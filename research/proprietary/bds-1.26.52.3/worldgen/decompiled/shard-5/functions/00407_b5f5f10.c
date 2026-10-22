/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb6f5f10 (ELF vaddr 0xb5f5f10)
 * Label: caller-of-callee
 * Body:  [[0b6f5f10, 0b6f6100] [0b6f6110, 0b6f6245] [0b6f6250, 0b6f6495] [0b6f64a0, 0b6f6673]]
 * Ghidra: FUN_0b6f5f10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0b6f5f10(undefined1 (*param_1) [16],long param_2,long param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined3 uVar5;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  undefined1 *puVar18;
  long lVar19;
  bool bVar20;
  undefined1 auVar21 [16];
  byte bStack_198;
  undefined4 uStack_197;
  undefined4 uStack_193;
  undefined4 uStack_18f;
  undefined4 uStack_18b;
  undefined2 uStack_187;
  undefined1 uStack_185;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined1 **appuStack_170 [2];
  undefined8 uStack_160;
  undefined1 *puStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined1 *puStack_140;
  undefined8 uStack_138;
  undefined1 *puStack_130;
  undefined1 *puStack_128;
  long lStack_120;
  undefined4 uStack_118;
  uint uStack_108;
  undefined1 auStack_f8 [16];
  undefined1 *puStack_e8;
  ulong uStack_e0;
  undefined1 *puStack_d8;
  ulong uStack_d0;
  undefined1 auStack_c8 [8];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  uint uStack_38;
  
  if (*(int *)(param_3 + 0x110) == 0) {
    if ((DAT_0f7b8fb8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f7b8fb8), iVar8 != 0)) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      FUN_0410844d(&DAT_0f7b8fb8);
    }
    puVar18 = (undefined1 *)(param_2 + 0xa9);
    bVar20 = (*(byte *)(param_2 + 0xa8) & 1) == 0;
    puStack_d8 = *(undefined1 **)(param_2 + 0xb8);
    if (bVar20) {
      puStack_d8 = puVar18;
    }
    uStack_d0 = (ulong)(*(byte *)(param_2 + 0xa8) >> 1);
    if (!bVar20) {
      uStack_d0 = *(ulong *)(param_2 + 0xb0);
    }
    cVar6 = (**(code **)(_DAT_0f7b8f98 + 0xf8))(&DAT_0f7b8f98,&puStack_d8);
    if (cVar6 != '\0') goto LAB_0b6f614f;
    if (DAT_0f7b8fb8 == '\0') goto LAB_0b6f6629;
LAB_0b6f5fc0:
    bVar20 = (*(byte *)(param_2 + 0xa8) & 1) != 0;
    puStack_e8 = puVar18;
    if (bVar20) {
      puStack_e8 = *(undefined1 **)(param_2 + 0xb8);
    }
    uStack_e0 = (ulong)(*(byte *)(param_2 + 0xa8) >> 1);
    if (bVar20) {
      uStack_e0 = *(ulong *)(param_2 + 0xb0);
    }
    (**(code **)(_DAT_0f7b8f98 + 0x80))(&puStack_158,&DAT_0f7b8f98,&puStack_e8);
    bStack_198 = 0x89;
    uStack_197 = 0xee5b2b7c;
    uStack_193 = 0x90b73a56;
    uStack_18f = 0x140f6;
    uStack_18b = 0x1000000;
    uStack_187 = 0;
    uStack_185 = 0;
    uStack_184 = 0;
    uStack_180 = 0x43f;
    if ((byte)uStack_118 == 0) {
      func_0x0eedea30(appuStack_170);
      func_0x0eedeb80(2,0x2d,&puStack_158,appuStack_170,&bStack_198);
      if (((ulong)appuStack_170[0] & 1) != 0) {
        func_0x0412a280(uStack_160,(ulong)appuStack_170[0] & 0xfffffffffffffffe);
      }
    }
    puVar18 = puStack_130;
    if (((byte)uStack_118 & 1) == 0) {
      puVar2 = puStack_128;
      if (puStack_130 != (undefined1 *)0x0) {
        while (puVar18 != puVar2) {
          func_0x048b3e80(puVar2 + -0x40);
          puVar2 = puVar2 + -0x40;
        }
        puStack_128 = puVar18;
        func_0x0412a280(puStack_130,lStack_120 - (long)puStack_130);
      }
      puVar2 = uStack_148;
      puVar18 = puStack_140;
      if (uStack_148 != (undefined1 *)0x0) {
        for (; puVar2 != puVar18; puVar18 = puVar18 + -0x50) {
          if ((puVar18[-8] == '\x01') && ((puVar18[-0x30] & 1) != 0)) {
            func_0x0412a280(*(undefined8 *)(puVar18 + -0x20),
                            *(ulong *)(puVar18 + -0x30) & 0xfffffffffffffffe);
          }
        }
        puStack_140 = puVar2;
        func_0x0412a280(uStack_148,uStack_138 - (long)uStack_148);
      }
    }
LAB_0b6f614f:
    bVar20 = (*(byte *)(param_3 + 8) & 1) != 0;
    lVar16 = param_3 + 9;
    if (bVar20) {
      lVar16 = *(long *)(param_3 + 0x18);
    }
    uVar15 = (ulong)(*(byte *)(param_3 + 8) >> 1);
    if (bVar20) {
      uVar15 = *(ulong *)(param_3 + 0x10);
    }
    auVar21 = func_0x0eedb4e0(lVar16,uVar15);
    lVar16 = auVar21._8_8_;
    uVar9 = auVar21._0_8_;
    uVar15 = *(ulong *)(param_2 + 0x40);
    auStack_f8 = auVar21;
    if (uVar15 != 0) {
      uVar13 = lVar16 * 0x1f1f1f1f ^ uVar9;
      uVar10 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
      uVar10 = (uVar10 >> 2 & 0x3333333333333333) + (uVar10 & 0x3333333333333333);
      uVar10 = ((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      if (uVar10 >> 0x38 < 2) {
        uVar14 = uVar15 - 1 & uVar13;
      }
      else {
        uVar14 = uVar13;
        if (uVar15 <= uVar13) {
          uVar14 = uVar13 % uVar15;
        }
      }
      plVar17 = *(long **)(*(long *)(param_2 + 0x38) + uVar14 * 8);
      if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
        if ((byte)(uVar10 >> 0x38) < 2) {
          do {
            if (plVar17[1] == uVar13) {
              if ((plVar17[2] == uVar9) && (plVar17[3] == lVar16)) goto LAB_0b6f627d;
            }
            else if ((plVar17[1] & uVar15 - 1) != uVar14) break;
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
        else {
          do {
            uVar10 = plVar17[1];
            if (uVar10 == uVar13) {
              if ((plVar17[2] == uVar9) && (plVar17[3] == lVar16)) goto LAB_0b6f627d;
            }
            else {
              if (uVar15 <= uVar10) {
                if ((uVar10 | uVar15) >> 0x20 == 0) {
                  uVar10 = (uVar10 & 0xffffffff) % (uVar15 & 0xffffffff);
                }
                else {
                  uVar10 = uVar10 % uVar15;
                }
              }
              if (uVar10 != uVar14) break;
            }
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
      }
    }
    puVar18 = *(undefined1 **)(*(long *)(param_2 + 200) + 0x98);
    uStack_150 = (**(code **)(**(long **)(param_2 + 0xc0) + 0x558))();
    bStack_198 = 0x24;
    uStack_197 = _DAT_0145fc30;
    uStack_193 = _UNK_0145fc34;
    uStack_18f = _UNK_0145fc38;
    uStack_18b = _UNK_0145fc3c;
    uStack_187 = _DAT_0145fc40;
    uStack_185 = 0;
    puStack_130 = auStack_f8;
    puStack_158 = puVar18;
    puStack_140 = param_4;
    uStack_138 = uStack_150;
    if ((ulong)*(uint *)(param_4 + 0x1d0) == 0xffffffff) {
      uStack_148 = &bStack_198;
      func_0x04931450();
LAB_0b6f6629:
      iVar8 = func_0x04108328(&DAT_0f7b8fb8);
      if (iVar8 != 0) {
        func_0x0ee5ea20(&DAT_0f7b8f98);
        func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
        FUN_0410844d(&DAT_0f7b8fb8);
      }
      goto LAB_0b6f5fc0;
    }
    appuStack_170[0] = &puStack_158;
    uStack_148 = &bStack_198;
    cVar6 = (**(code **)(&UNK_0f0094b8 + (ulong)*(uint *)(param_4 + 0x1d0) * 8))
                      (appuStack_170,param_4);
    if ((bStack_198 & 1) != 0) {
      func_0x0412a280(CONCAT44(uStack_184,CONCAT13(uStack_185,CONCAT21(uStack_187,uStack_18b._3_1_))
                              ),
                      CONCAT35((undefined3)uStack_193,CONCAT41(uStack_197,bStack_198)) &
                      0xfffffffffffffffe);
    }
    if (cVar6 == '\0') {
LAB_0b6f65ae:
      (*param_1)[0] = 0;
      uVar7 = 0;
    }
    else {
      func_0x0b6f5db0(param_2,auStack_f8,param_4,param_3);
      *param_1 = auStack_f8;
      uVar7 = 1;
    }
    param_1[1][0] = uVar7;
  }
  else {
    (*param_1)[0] = 0;
    param_1[1][0] = 0;
  }
  return;
LAB_0b6f627d:
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  bStack_198 = 0;
  uStack_197 = 0;
  uStack_193 = 0;
  uStack_18f = 0;
  uStack_18b = 0;
  uStack_187 = 0;
  uStack_185 = 0;
  uStack_184 = 0;
  uStack_150 = uStack_150 & 0xffffffffffffff00;
  puStack_158 = &bStack_198;
  puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar11 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  bStack_198 = (byte)puVar11;
  uStack_197 = (undefined4)((ulong)puVar11 >> 8);
  uStack_193._0_3_ = (undefined3)((ulong)puVar11 >> 0x28);
  puVar12 = puVar11 + 5;
  uStack_18b._3_1_ = SUB81(puVar12,0);
  uStack_187 = (undefined2)((ulong)puVar12 >> 8);
  uStack_185 = (undefined1)((ulong)puVar12 >> 0x18);
  uStack_184 = (undefined4)((ulong)puVar12 >> 0x20);
  puVar11[4] = 0;
  puVar11[1] = 0x7574637572745314;
  puVar11[2] = 0x736572;
  puVar11[3] = 0;
  *puVar11 = 0x158cbbf7ce6f4e7;
  uStack_193 = CONCAT13(uStack_18b._3_1_,(undefined3)uStack_193);
  uStack_18f = (undefined4)((ulong)puVar12 >> 8);
  uStack_18b._0_3_ = (undefined3)((ulong)puVar12 >> 0x28);
  uStack_108 = auVar21._8_4_ & 0xffff;
  puStack_158 = (undefined1 *)CONCAT44(puStack_158._4_4_,auVar21._4_4_);
  uStack_148 = (byte *)(CONCAT44(uStack_148._4_4_,auVar21._2_4_) & 0xffffffff0000ffff);
  uStack_138 = CONCAT44(uStack_138._4_4_,auVar21._0_4_) & 0xffffffff0000ffff;
  puStack_128 = (undefined1 *)CONCAT44(puStack_128._4_4_,(uint)auVar21._14_2_);
  uStack_118 = auVar21._10_4_;
  func_0x0470d9a0(appuStack_170,&UNK_01287ba2,0x28,0x122112,&puStack_158);
  puVar11 = (undefined8 *)func_0x0412f0e0(appuStack_170,0,&UNK_01421262,0x73);
  uStack_b0 = puVar11[2];
  uStack_c0 = *(undefined4 *)puVar11;
  uStack_bc = *(undefined4 *)((long)puVar11 + 4);
  uStack_b8 = *(undefined4 *)(puVar11 + 1);
  uStack_b4 = *(undefined4 *)((long)puVar11 + 0xc);
  *puVar11 = 0;
  puVar11[1] = 0;
  puVar11[2] = 0;
  uStack_38 = 0;
  func_0x060aeeb0(uVar1,1,1,&bStack_198,auStack_c8,1);
  if ((ulong)uStack_38 != 0xffffffff) {
    (**(code **)(&UNK_0f2d0a38 + (ulong)uStack_38 * 8))(&puStack_158,&uStack_c0);
  }
  uStack_38 = 0xffffffff;
  if (((ulong)appuStack_170[0] & 1) != 0) {
    func_0x0412a280(uStack_160,(ulong)appuStack_170[0] & 0xfffffffffffffffe);
  }
  uVar4 = uStack_197;
  bVar3 = bStack_198;
  uVar5 = (undefined3)uStack_193;
  lVar16 = CONCAT35((undefined3)uStack_193,CONCAT41(uStack_197,bStack_198));
  if (lVar16 != 0) {
    lVar19 = CONCAT35((undefined3)uStack_18b,CONCAT41(uStack_18f,uStack_193._3_1_));
    if (lVar16 != lVar19) {
      do {
        if ((*(byte *)(lVar19 + -0x20) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lVar19 + -0x10),
                          *(ulong *)(lVar19 + -0x20) & 0xfffffffffffffffe);
        }
        lVar19 = lVar19 + -0x28;
      } while (lVar19 != lVar16);
      lVar16 = CONCAT35((undefined3)uStack_193,CONCAT41(uStack_197,bStack_198));
    }
    uStack_193 = CONCAT13(bVar3,(undefined3)uStack_193);
    uStack_18f = uVar4;
    uStack_18b = CONCAT13(uStack_18b._3_1_,uVar5);
    func_0x0412a280(lVar16,CONCAT44(uStack_184,
                                    CONCAT13(uStack_185,CONCAT21(uStack_187,uStack_18b._3_1_))) -
                           lVar16);
  }
  goto LAB_0b6f65ae;
}



/* ---- referenced strings ----
 * 0x145fc30  structuretemplate_
 */
