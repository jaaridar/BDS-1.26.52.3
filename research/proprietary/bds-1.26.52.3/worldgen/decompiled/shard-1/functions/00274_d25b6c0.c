/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd35b6c0 (ELF vaddr 0xd25b6c0)
 * Label: callee-of:0xc961580
 * Body:  [[0d35b6c0, 0d35b707] [0d35b710, 0d35becb] [0d35bed0, 0d35c2f0] [0d35c300, 0d35c3ae] [0d35c3b0, 0d35c405] [0d35c410, 0d35c4c3] [0d35c4d0, 0d35c785] [0d35c788, 0d35c799] [0d35c812, 0d35c85b] [0d35c85f, 0d35c86a] [0d35c86e, 0d35c881]]
 * Ghidra: FUN_0d35b6c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d35b6c0(long *param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 uVar15;
  char cVar16;
  int iVar17;
  undefined4 uVar18;
  uint uVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  long *plVar27;
  long *plVar28;
  long lVar29;
  ulong uVar30;
  uint uVar31;
  undefined4 uVar32;
  uint uVar33;
  ulong uVar34;
  undefined1 uVar35;
  float fVar36;
  undefined1 uStack_1b1;
  long *plStack_1b0;
  int iStack_1a4;
  long *plStack_1a0;
  long *plStack_198;
  long *plStack_190;
  undefined4 uStack_184;
  long *plStack_180;
  ulong uStack_178;
  long *plStack_170;
  long *plStack_168;
  long *plStack_160;
  long *aplStack_158 [2];
  undefined8 uStack_148;
  undefined1 uStack_140;
  byte bStack_138;
  undefined1 uStack_137;
  undefined2 uStack_136;
  int iStack_134;
  undefined4 uStack_130;
  int iStack_12c;
  ulong uStack_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  undefined4 uStack_108;
  int iStack_104;
  ulong uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  long *plStack_d0;
  byte bStack_c8;
  undefined1 uStack_c7;
  undefined2 uStack_c6;
  int iStack_c4;
  undefined8 uStack_c0;
  uint uStack_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  undefined8 uStack_ac;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  int aiStack_50 [2];
  int iStack_48;
  int iStack_44;
  int iStack_3c;
  undefined8 uStack_38;
  
  plVar20 = (long *)param_1[0x1f];
  if (plVar20 != (long *)param_1[0x20]) {
    plStack_58 = param_2 + 4;
    plStack_190 = param_1;
    plStack_160 = param_2;
    do {
      iVar17 = (**(code **)(*param_2 + 0x18))(param_2);
      plVar28 = (long *)*plVar20;
      if (iVar17 == (int)plVar28[0x15]) {
        plVar27 = plVar28 + 1;
        plStack_180 = plVar20;
        plVar20 = (long *)(**(code **)(*param_1 + 0x20))(param_1,plVar27);
        if ((plVar20 == (long *)0x0) ||
           ((((int)plVar20[6] == 0 && (*(int *)((long)plVar20 + 0x34) == 0)) &&
            ((int)plVar20[7] == 0)))) {
LAB_0d35c2d0:
          param_2 = plStack_160;
          plVar20 = (long *)param_1[0x20];
          plVar28 = plStack_180;
          if (plStack_180 + 1 == plVar20) {
            if (plStack_180 != plVar20) goto LAB_0d35c426;
          }
          else {
            do {
              lVar23 = *plVar28;
              lVar29 = plVar28[1];
              plVar28[1] = 0;
              *plVar28 = lVar29;
              if (lVar23 != 0) {
                plVar27 = *(long **)(lVar23 + 0x90);
                *(undefined8 *)(lVar23 + 0x90) = 0;
                if (plVar27 != (long *)0x0) {
                  plVar21 = (long *)*plVar27;
                  *plVar27 = 0;
                  if (plVar21 != (long *)0x0) {
                    (**(code **)(*plVar21 + 8))();
                  }
                  func_0x0412a280(plVar27,8);
                }
                if ((*(byte *)(lVar23 + 0x20) & 1) != 0) {
                  func_0x0412a280(*(undefined8 *)(lVar23 + 0x30),
                                  *(ulong *)(lVar23 + 0x20) & 0xfffffffffffffffe);
                }
                if ((*(byte *)(lVar23 + 8) & 1) != 0) {
                  func_0x0412a280(*(undefined8 *)(lVar23 + 0x18),
                                  *(ulong *)(lVar23 + 8) & 0xfffffffffffffffe);
                }
                func_0x0412a280(lVar23,0xb0);
              }
              plVar27 = plVar28 + 2;
              plVar28 = plVar28 + 1;
            } while (plVar27 != plVar20);
            plVar20 = (long *)plStack_190[0x20];
            if (plVar28 != plVar20) {
LAB_0d35c426:
              do {
                lVar23 = plVar20[-1];
                plVar20[-1] = 0;
                if (lVar23 != 0) {
                  plVar27 = *(long **)(lVar23 + 0x90);
                  *(undefined8 *)(lVar23 + 0x90) = 0;
                  if (plVar27 != (long *)0x0) {
                    plVar21 = (long *)*plVar27;
                    *plVar27 = 0;
                    if (plVar21 != (long *)0x0) {
                      (**(code **)(*plVar21 + 8))();
                    }
                    func_0x0412a280(plVar27,8);
                  }
                  if ((*(byte *)(lVar23 + 0x20) & 1) != 0) {
                    func_0x0412a280(*(undefined8 *)(lVar23 + 0x30),
                                    *(ulong *)(lVar23 + 0x20) & 0xfffffffffffffffe);
                  }
                  if ((*(byte *)(lVar23 + 8) & 1) != 0) {
                    func_0x0412a280(*(undefined8 *)(lVar23 + 0x18),
                                    *(ulong *)(lVar23 + 8) & 0xfffffffffffffffe);
                  }
                  func_0x0412a280(lVar23,0xb0);
                }
                plVar20 = plVar20 + -1;
              } while (plVar20 != plVar28);
            }
          }
        }
        else {
          if ((char)plVar28[0x11] != (char)plVar20[0x18]) {
            func_0x09a0c8f0(1,2,0x1f,&UNK_013a3b27);
            goto LAB_0d35c2d0;
          }
          plVar21 = (long *)(**(code **)(**(long **)(*(long *)plVar28[0x12] + 0x28) + 0x68))();
          plVar21 = (long *)(**(code **)(*plVar21 + 0x130))(plVar21);
          if (plVar21[0x80] == 0) {
            uVar25 = func_0x04890760();
            func_0x06cecff0(&bStack_c8);
            if ((bStack_138 & 1) != 0) {
              func_0x0412a280(uStack_128,
                              CONCAT44(iStack_134,
                                       CONCAT22(uStack_136,CONCAT11(uStack_137,bStack_138))) &
                              0xfffffffffffffffe);
              uVar25 = func_0x0eee2d70(uVar25);
              func_0x0629e000(&bStack_138);
              func_0x0629e000(&bStack_c8);
              func_0x0a2ad300(aplStack_158);
              (**(code **)(*plStack_1b0 + 0x28))();
            }
            func_0x0eee2d70(uVar25);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uStack_178 = plVar21[0x80];
          plVar22 = (long *)(**(code **)(**(long **)(*(long *)plVar28[0x12] + 0x28) + 0x68))();
          lVar23 = (**(code **)(*plVar22 + 0x1a8))(plVar22);
          plStack_168 = plVar28 + 4;
          plStack_170 = plVar20;
          (**(code **)(*plVar20 + 0x40))(aiStack_50,plVar20,plVar28[0x13],(int)plVar28[0x14]);
          uStack_1b1 = *(undefined1 *)((long)plVar28 + 0x3d);
          plStack_1b0 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
          if (plStack_1b0 == (long *)0x0) {
            func_0x0eec74c0(0x28,0);
          }
          *plStack_1b0 = (long)&UNK_0f461dc8;
          plStack_1b0[1] = (long)plVar21;
          plStack_1b0[2] = lVar23;
          plStack_1b0[3] = (long)aiStack_50;
          plStack_1b0[4] = (long)&uStack_1b1;
          plVar20 = (long *)(**(code **)(**(long **)(*(long *)plVar28[0x12] + 0x28) + 0x68))();
          plVar20 = (long *)(**(code **)(*plVar20 + 0x150))(plVar20);
          puVar24 = (undefined8 *)(**(code **)(*plVar20 + 0x280))(plVar20);
          uVar25 = *puVar24;
          bStack_c8 = (byte)uVar25;
          uStack_c7 = (undefined1)((ulong)uVar25 >> 8);
          uStack_c6 = (undefined2)((ulong)uVar25 >> 0x10);
          iStack_c4 = (int)((ulong)uVar25 >> 0x20);
          cVar16 = (**(code **)(*plStack_1b0 + 0x30))(plStack_1b0,&bStack_c8);
          plStack_1a0 = plVar28 + 0x13;
          if (cVar16 != '\x02') {
            plStack_170 = (long *)CONCAT71(plStack_170._1_7_,*(undefined1 *)((long)plVar28 + 0x3d));
            plStack_198 = plVar21 + 4;
            func_0x0d35c890(plStack_198,plVar28);
            plVar22 = (long *)plVar28[0x12];
            plVar28[0x12] = 0;
            if (plVar22 != (long *)0x0) {
              plVar1 = (long *)*plVar22;
              *plVar22 = 0;
              if (plVar1 != (long *)0x0) {
                (**(code **)(*plVar1 + 8))();
              }
              func_0x0412a280(plVar22,8);
            }
            plVar22 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb0);
            if (plVar22 == (long *)0x0) {
              func_0x0eec74c0(0xb0,0);
            }
            *plVar22 = *plVar28;
            plVar22[3] = plVar28[3];
            lVar23 = plVar28[2];
            plVar22[1] = *plVar27;
            plVar22[2] = lVar23;
            *plVar27 = 0;
            plVar28[2] = 0;
            plVar28[3] = 0;
            if ((*(byte *)(plVar28 + 4) & 1) == 0) {
              plVar22[6] = plStack_168[2];
              lVar23 = plStack_168[1];
              plVar22[4] = *plStack_168;
              plVar22[5] = lVar23;
            }
            else {
              func_0x0412e5e0(plVar22 + 4,plVar28[6],plVar28[5]);
            }
            *(int *)(plVar22 + 0xf) = (int)plVar28[0xf];
            lVar23 = plVar28[7];
            lVar29 = plVar28[8];
            lVar10 = plVar28[9];
            uVar18 = *(undefined4 *)((long)plVar28 + 0x4c);
            lVar11 = plVar28[10];
            uVar32 = *(undefined4 *)((long)plVar28 + 0x54);
            lVar12 = plVar28[0xb];
            uVar6 = *(undefined4 *)((long)plVar28 + 0x5c);
            lVar13 = plVar28[0xc];
            uVar7 = *(undefined4 *)((long)plVar28 + 100);
            uVar8 = *(undefined4 *)((long)plVar28 + 0x6c);
            lVar14 = plVar28[0xe];
            uVar9 = *(undefined4 *)((long)plVar28 + 0x74);
            *(int *)(plVar22 + 0xd) = (int)plVar28[0xd];
            *(undefined4 *)((long)plVar22 + 0x6c) = uVar8;
            *(int *)(plVar22 + 0xe) = (int)lVar14;
            *(undefined4 *)((long)plVar22 + 0x74) = uVar9;
            *(int *)(plVar22 + 0xb) = (int)lVar12;
            *(undefined4 *)((long)plVar22 + 0x5c) = uVar6;
            *(int *)(plVar22 + 0xc) = (int)lVar13;
            *(undefined4 *)((long)plVar22 + 100) = uVar7;
            *(int *)(plVar22 + 9) = (int)lVar10;
            *(undefined4 *)((long)plVar22 + 0x4c) = uVar18;
            *(int *)(plVar22 + 10) = (int)lVar11;
            *(undefined4 *)((long)plVar22 + 0x54) = uVar32;
            plVar22[7] = lVar23;
            plVar22[8] = lVar29;
            plVar22[0x10] = plVar28[0x10];
            *(char *)(plVar22 + 0x11) = (char)plVar28[0x11];
            lVar23 = plVar28[0x12];
            plVar28[0x12] = 0;
            plVar22[0x12] = lVar23;
            uVar18 = *(undefined4 *)((long)plStack_1a0 + 4);
            lVar23 = plStack_1a0[1];
            uVar32 = *(undefined4 *)((long)plStack_1a0 + 0xc);
            *(int *)(plVar22 + 0x13) = (int)*plStack_1a0;
            *(undefined4 *)((long)plVar22 + 0x9c) = uVar18;
            *(int *)(plVar22 + 0x14) = (int)lVar23;
            *(undefined4 *)((long)plVar22 + 0xa4) = uVar32;
            *(int *)(plVar22 + 0x15) = (int)plStack_1a0[2];
            aplStack_158[0] = plVar22;
            uVar18 = (**(code **)(*plVar21 + 0x18))(plVar21);
            plVar28 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xa0);
            if (plVar28 == (long *)0x0) {
              func_0x0eec74c0(0xa0,0);
            }
            aplStack_158[0] = (long *)0x0;
            *(undefined1 *)(plVar28 + 1) = 2;
            *plVar28 = (long)&UNK_0f3ee398;
            plVar28[2] = (long)plVar22;
            lVar23 = _UNK_01da19f0;
            plVar28[3] = _DAT_01da19e8;
            plVar28[4] = lVar23;
            plVar28[5] = 0;
            *(undefined4 *)(plVar28 + 6) = 0;
            *(undefined2 *)((long)plVar28 + 0x34) = 0x100;
            plVar28[7] = -1;
            plVar28[8] = 0x500000005;
            *(undefined4 *)(plVar28 + 9) = 5;
            *(undefined8 *)((long)plVar28 + 0x4c) = 0xffffffff00000000;
            *(undefined4 *)((long)plVar28 + 0x54) = 0;
            plVar28[0xb] = 0;
            *(undefined8 *)((long)plVar28 + 0x5f) = 0;
            plVar28[0xd] = _DAT_014e72a0;
            *(undefined4 *)(plVar28 + 0xe) = 0;
            *(undefined4 *)(plVar28 + 0xf) = uVar18;
            *(undefined8 *)((long)plVar28 + 0x7c) = 0;
            *(undefined8 *)((long)plVar28 + 0x84) = 0;
            *(undefined8 *)((long)plVar28 + 0x8c) = 0;
            *(undefined8 *)((long)plVar28 + 0x94) = 0;
            *(undefined4 *)((long)plVar28 + 0x9c) = 0;
            iStack_134 = aiStack_50[0] >> 4;
            iStack_12c = iStack_48 >> 4;
            uStack_b8 = iStack_44 >> 4;
            bStack_c8 = (byte)plStack_170;
            uStack_120 = iStack_3c >> 4;
            uStack_c7 = 0;
            uStack_c0._0_4_ = 0;
            uStack_b4 = 0;
            uVar33 = (uStack_b8 - iStack_134) + 1;
            uStack_ac = (ulong)uVar33 + 0x100000000;
            iStack_114 = (uStack_120 - iStack_12c) + 1;
            iStack_110 = uVar33 * iStack_114;
            uStack_98 = CONCAT44(uStack_98._4_4_,0x10);
            bStack_138 = (byte)plStack_170;
            uStack_137 = 0;
            uStack_130 = 0;
            uStack_128 = (ulong)uStack_b8;
            uStack_11c = (undefined4)uStack_ac;
            uStack_118 = (undefined4)((ulong)uStack_ac >> 0x20);
            uStack_108 = 0x10;
            uStack_100 = 0;
            lStack_f8 = 0;
            uStack_f0 = 0;
            uStack_90 = 0;
            uStack_88 = 0;
            lStack_80 = 0;
            uStack_e8 = 0;
            uStack_e0 = 0;
            uStack_d8 = 0;
            uStack_68 = 0;
            uStack_60 = 0;
            lStack_78 = 0;
            puStack_70 = (undefined8 *)0x0;
            iStack_10c = iStack_110;
            plStack_d0 = plVar28;
            iStack_c4 = iStack_134;
            uStack_c0._4_4_ = iStack_12c;
            iStack_b0 = uStack_120;
            iStack_a4 = iStack_114;
            iStack_a0 = iStack_110;
            iStack_9c = iStack_110;
            uVar25 = (**(code **)(*plVar20 + 0x558))(plVar20);
            func_0x0cb296c0(uStack_178,&bStack_138,plStack_198,cVar16,uVar25);
            param_1 = plStack_190;
            if (plStack_d0 != (long *)0x0) {
              (**(code **)(*plStack_d0 + 8))();
            }
            if ((uStack_e8 & 1) != 0) {
              func_0x0412a280(uStack_d8,uStack_e8 & 0xfffffffffffffffe);
            }
            if ((uStack_100 & 1) != 0) {
              func_0x0412a280(uStack_f0,uStack_100 & 0xfffffffffffffffe);
            }
            (**(code **)(*plStack_1b0 + 0x28))();
            goto LAB_0d35c2d0;
          }
          (**(code **)(*plStack_1b0 + 0x28))();
          plVar20 = (long *)(**(code **)(**(long **)(*(long *)plVar28[0x12] + 0x28) + 0x68))();
          plVar20 = (long *)(**(code **)(*plVar20 + 0x150))(plVar20);
          uStack_38 = (**(code **)(*plVar20 + 0x2c0))(plVar20);
          plStack_1b0 = (long *)(**(code **)(**(long **)(*(long *)plVar28[0x12] + 0x28) + 0x68))();
          if ((*(byte *)(plVar28 + 4) & 1) == 0) {
            uStack_128 = plStack_168[2];
            lVar23 = *plStack_168;
            bStack_138 = (byte)lVar23;
            uStack_137 = (undefined1)((ulong)lVar23 >> 8);
            uStack_136 = (undefined2)((ulong)lVar23 >> 0x10);
            iStack_134 = (int)((ulong)lVar23 >> 0x20);
            uStack_130 = (undefined4)plStack_168[1];
            iStack_12c = (int)((ulong)plStack_168[1] >> 0x20);
          }
          else {
            func_0x0412e5e0(&bStack_138,plVar28[6],plVar28[5]);
          }
          uStack_e0 = CONCAT44(uStack_e0._4_4_,(int)plVar28[0xf]);
          uStack_120 = (int)plVar28[7];
          uStack_11c = *(undefined4 *)((long)plVar28 + 0x3c);
          uStack_118 = (undefined4)plVar28[8];
          iStack_114 = *(int *)((long)plVar28 + 0x44);
          uStack_178 = plVar28[8];
          iStack_110 = (int)plVar28[9];
          iStack_10c = *(int *)((long)plVar28 + 0x4c);
          uStack_108 = (undefined4)plVar28[10];
          iVar4 = *(int *)((long)plVar28 + 0x54);
          uVar30 = plVar28[0xb];
          iVar5 = *(int *)((long)plVar28 + 0x5c);
          uStack_100 = plVar28[0xb];
          lStack_f8 = plVar28[0xc];
          uStack_e8 = plVar28[0xe];
          uStack_f0._5_1_ = (undefined1)((uint)*(undefined4 *)((long)plVar28 + 0x6c) >> 8);
          plStack_168 = (long *)CONCAT71(plStack_168._1_7_,uStack_f0._5_1_);
          uStack_f0._4_1_ = (undefined1)*(undefined4 *)((long)plVar28 + 0x6c);
          uVar15 = uStack_f0._4_1_;
          iStack_1a4 = (int)plVar28[0x13];
          iVar17 = *(int *)((long)plVar28 + 0x9c);
          plStack_198 = (long *)CONCAT44(plStack_198._4_4_,(int)plVar28[0x14]);
          iStack_104 = iVar4;
          uStack_f0 = plVar28[0xd];
          uStack_88 = (**(code **)(*plStack_1b0 + 0x150))();
          plVar27 = plStack_168;
          plVar20 = plStack_170;
          uStack_c0._4_4_ = (int)uVar30 + iVar17;
          uStack_c0._0_4_ = iVar4 + iStack_1a4;
          uStack_b8 = iVar5 + (int)plStack_198;
          bStack_c8 = 0x90;
          uStack_c7 = 0x66;
          uStack_c6 = 0xf08;
          iStack_c4 = 0;
          uStack_ac._0_4_ = *(undefined4 *)((long)plStack_170 + 0x44);
          uStack_b4 = (undefined4)*(undefined8 *)((long)plStack_170 + 0x3c);
          iStack_b0 = (int)((ulong)*(undefined8 *)((long)plStack_170 + 0x3c) >> 0x20);
          iStack_a0 = (int)uStack_f0;
          uStack_ac._4_4_ = (undefined4)lStack_f8;
          iStack_a4 = (int)((ulong)lStack_f8 >> 0x20);
          uStack_98 = uStack_178;
          uStack_90._0_2_ = CONCAT11(uVar15,plStack_168._0_1_);
          puStack_70 = (undefined8 *)0x0;
          uStack_68 = 0;
          lStack_80 = 0;
          lStack_78 = 0;
          uStack_60 = CONCAT44(uStack_60._4_4_,0x3f800000);
          if (((uStack_120._2_1_ == '\0') && (*(char *)((long)plVar28 + 0x3a) == '\0')) &&
             (((int)plVar28[0x10] != *(int *)((long)plVar28 + 0x84) &&
              (lVar23 = func_0x0d392170(plStack_170 + 0x10,&bStack_138), param_2 = plStack_160,
              param_1 = plStack_190, lVar23 != 0)))) {
            uStack_178 = uStack_e0 & 0xffffffff;
            fVar36 = (float)uStack_e8 * _DAT_011987c0;
            if ((int)fVar36 == (uint)(fVar36 < (float)(int)fVar36)) {
              uVar30 = (ulong)*(uint *)((long)plVar28 + 0x84);
              uVar18 = uStack_e8._4_4_;
              uVar32 = 0;
              uVar35 = (undefined1)uStack_11c;
            }
            else {
              iStack_1a4 = CONCAT31(iStack_1a4._1_3_,(undefined1)uStack_11c);
              plStack_198 = (long *)CONCAT44(plStack_198._4_4_,uStack_e8._4_4_);
              uStack_184 = (undefined4)plVar28[0x10];
              plVar20 = (long *)(**(code **)(*plStack_1b0 + 0x150))();
              lVar29 = (**(code **)(*plVar20 + 0x288))(plVar20);
              uVar18 = (int)plStack_198;
              uVar32 = uStack_184;
              uVar35 = (undefined1)iStack_1a4;
              if (*(char *)((long)plVar28 + 0x3a) == '\0') {
                fVar36 = *(float *)(plVar28 + 0xe) * _DAT_011987c0;
                uVar33 = *(uint *)((long)plVar28 + 0x84);
                uVar30 = (ulong)uVar33;
                uVar31 = (int)fVar36 - (uint)(fVar36 < (float)(int)fVar36);
                if (uVar31 != 0) {
                  uVar30 = (lVar29 - *plVar28) * uVar30;
                  if (uVar30 >> 0x20 == 0) {
                    uVar30 = uVar30 & 0xffffffff;
                  }
                  uVar30 = uVar30 / uVar31;
                  uVar31 = (uint)uVar30;
                  if (*(char *)((long)plVar28 + 0x6e) == '\x01') {
                    uVar34 = (long)(int)plVar28[10] * (long)(int)plVar28[9];
                    uVar30 = uVar30 & 0xffffffff;
                    uVar19 = uVar31;
                    if (uVar34 <= uVar30) {
                      uVar19 = (uint)(uVar30 % (uVar34 & 0xffffffff));
                    }
                    uVar31 = uVar31 - uVar19;
                  }
                  if (uVar33 < uVar31) {
                    uVar31 = uVar33;
                  }
                  uVar30 = (ulong)uVar31;
                }
              }
              else {
                uVar30 = 0;
              }
            }
            plVar20 = plStack_1a0 + 1;
            plStack_198 = (long *)*plStack_1a0;
            plStack_1a0 = (long *)(lVar23 + 0x28);
            func_0x0d369c00(uVar18,plStack_170,plStack_1b0,uVar32,uVar30,&bStack_138,&bStack_c8,
                            (long *)(lVar23 + 0x28),uStack_38,plStack_198,(int)*plVar20,&iStack_104,
                            &lStack_f8,(ulong)plVar27 & 0xff,uVar15,uStack_178,1,uVar35);
            *(int *)(plVar28 + 0x10) = (int)uVar30;
            if (((char)uStack_120 == '\0') &&
               ((plVar20 = plStack_170, *(char *)((long)plVar28 + 0x3a) != '\0' ||
                ((int)uVar30 == *(int *)((long)plVar28 + 0x84))))) {
LAB_0d35bbd4:
              aplStack_158[0] = (long *)((ulong)aplStack_158[0] & 0xffffffffffffff00);
              uStack_140 = 0;
              func_0x0d36b1a0(plVar20,plStack_1b0,&bStack_c8,uStack_120._1_1_,aplStack_158);
            }
          }
          else {
            param_2 = plStack_160;
            param_1 = plStack_190;
            if ((char)uStack_120 == '\0') goto LAB_0d35bbd4;
          }
          bStack_c8 = 0x90;
          uStack_c7 = 0x66;
          uStack_c6 = 0xf08;
          iStack_c4 = 0;
          plVar28 = plStack_180;
          lVar23 = lStack_80;
          puVar24 = puStack_70;
          while (plStack_180 = plVar28, puVar24 != (undefined8 *)0x0) {
            puVar2 = (undefined8 *)*puVar24;
            lStack_80 = lVar23;
            func_0x0412a280(puVar24,0x20);
            plVar28 = plStack_180;
            lVar23 = lStack_80;
            puVar24 = puVar2;
          }
          lStack_80 = 0;
          if (lVar23 != 0) {
            func_0x0412a280(lVar23,lStack_78 << 3);
          }
          if ((bStack_138 & 1) != 0) {
            func_0x0412a280(uStack_128,
                            CONCAT44(iStack_134,CONCAT22(uStack_136,CONCAT11(uStack_137,bStack_138))
                                    ) & 0xfffffffffffffffe);
          }
          lVar23 = *plVar28;
          if ((*(char *)(lVar23 + 0x3a) == '\0') &&
             (*(int *)(lVar23 + 0x80) != *(int *)(lVar23 + 0x84))) {
            plVar20 = (long *)(**(code **)(**(long **)(**(long **)(lVar23 + 0x90) + 0x28) + 0x68))()
            ;
            plVar20 = (long *)(**(code **)(*plVar20 + 0x150))(plVar20);
            uVar25 = (**(code **)(*plVar20 + 0x558))(plVar20);
            func_0x0edfa590(&bStack_138,*(undefined4 *)(lVar23 + 0xa4),10);
            bStack_c8 = 0xb0;
            uStack_c7 = 0xe0;
            uStack_c6 = 0xf47;
            iStack_c4 = 0;
            uStack_c0 = &uStack_b8;
            uStack_b8 = 0;
            uStack_b4 = 0;
            iStack_b0 = 0;
            uStack_ac._0_4_ = 0;
            func_0x0d35a7f0(aplStack_158,plStack_58,&bStack_138);
            uVar26 = func_0x0d3beda0(lVar23,&bStack_c8);
            func_0x0d21ed30(aiStack_50,uVar25,aplStack_158,uVar26,0xc);
            plVar20 = (long *)CONCAT44(iStack_44,iStack_48);
            if (plVar20 != (long *)0x0) {
              LOCK();
              plVar27 = plVar20 + 1;
              lVar23 = *plVar27;
              *plVar27 = *plVar27 + -1;
              UNLOCK();
              if (lVar23 == 0) {
                (**(code **)(*plVar20 + 0x10))(plVar20);
                func_0x0412c2d0(plVar20);
              }
            }
            if (((ulong)aplStack_158[0] & 1) != 0) {
              func_0x0412a280(uStack_148,(ulong)aplStack_158[0] & 0xfffffffffffffffe);
            }
            bStack_c8 = 0xb0;
            uStack_c7 = 0xe0;
            uStack_c6 = 0xf47;
            iStack_c4 = 0;
            func_0x0d6c9500(&uStack_c0,CONCAT44(uStack_b4,uStack_b8));
            if ((bStack_138 & 1) != 0) {
              func_0x0412a280(uStack_128,
                              CONCAT44(iStack_134,
                                       CONCAT22(uStack_136,CONCAT11(uStack_137,bStack_138))) &
                              0xfffffffffffffffe);
            }
            plVar20 = plVar28 + 1;
            goto LAB_0d35b717;
          }
          func_0x0d35c890(plStack_58,lVar23);
          plVar20 = (long *)param_1[0x20];
          if (plVar28 + 1 == plVar20) {
            if (plVar28 != plVar20) {
LAB_0d35c4ea:
              do {
                lVar23 = plVar20[-1];
                plVar20[-1] = 0;
                if (lVar23 != 0) {
                  plVar27 = *(long **)(lVar23 + 0x90);
                  *(undefined8 *)(lVar23 + 0x90) = 0;
                  if (plVar27 != (long *)0x0) {
                    plVar21 = (long *)*plVar27;
                    *plVar27 = 0;
                    if (plVar21 != (long *)0x0) {
                      (**(code **)(*plVar21 + 8))();
                    }
                    func_0x0412a280(plVar27,8);
                  }
                  if ((*(byte *)(lVar23 + 0x20) & 1) != 0) {
                    func_0x0412a280(*(undefined8 *)(lVar23 + 0x30),
                                    *(ulong *)(lVar23 + 0x20) & 0xfffffffffffffffe);
                  }
                  if ((*(byte *)(lVar23 + 8) & 1) != 0) {
                    func_0x0412a280(*(undefined8 *)(lVar23 + 0x18),
                                    *(ulong *)(lVar23 + 8) & 0xfffffffffffffffe);
                  }
                  func_0x0412a280(lVar23,0xb0);
                }
                plVar20 = plVar20 + -1;
              } while (plVar20 != plVar28);
            }
          }
          else {
            do {
              lVar23 = *plVar28;
              lVar29 = plVar28[1];
              plVar28[1] = 0;
              *plVar28 = lVar29;
              if (lVar23 != 0) {
                plVar27 = *(long **)(lVar23 + 0x90);
                *(undefined8 *)(lVar23 + 0x90) = 0;
                if (plVar27 != (long *)0x0) {
                  plVar21 = (long *)*plVar27;
                  *plVar27 = 0;
                  if (plVar21 != (long *)0x0) {
                    (**(code **)(*plVar21 + 8))();
                  }
                  func_0x0412a280(plVar27,8);
                }
                if ((*(byte *)(lVar23 + 0x20) & 1) != 0) {
                  func_0x0412a280(*(undefined8 *)(lVar23 + 0x30),
                                  *(ulong *)(lVar23 + 0x20) & 0xfffffffffffffffe);
                }
                if ((*(byte *)(lVar23 + 8) & 1) != 0) {
                  func_0x0412a280(*(undefined8 *)(lVar23 + 0x18),
                                  *(ulong *)(lVar23 + 8) & 0xfffffffffffffffe);
                }
                func_0x0412a280(lVar23,0xb0);
              }
              plVar27 = plVar28 + 2;
              plVar28 = plVar28 + 1;
            } while (plVar27 != plVar20);
            plVar20 = (long *)plStack_190[0x20];
            if (plVar28 != plVar20) goto LAB_0d35c4ea;
          }
        }
        plStack_190[0x20] = (long)plVar28;
        plVar20 = plStack_180;
        param_1 = plStack_190;
      }
      else {
        plVar20 = plVar20 + 1;
      }
LAB_0d35b717:
    } while (plVar20 != (long *)param_1[0x20]);
  }
  return;
}


