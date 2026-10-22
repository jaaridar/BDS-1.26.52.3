/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x9c110f0 (ELF vaddr 0x9b110f0)
 * Label: caller-of-callee
 * Body:  [[09c110f0, 09c11f7e] [09c11f80, 09c11fa9] [09c11fb0, 09c12a0e]]
 * Ghidra: FUN_09c110f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_09c110f0(long *param_1,long param_2,long *param_3,long *param_4,uint *param_5,
                   undefined8 param_6)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  uint *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint *puVar15;
  long *plVar16;
  long *plVar17;
  uint uStack_278;
  uint uStack_274;
  uint uStack_270;
  uint uStack_26c;
  long lStack_268;
  byte bStack_260;
  long *plStack_258;
  uint uStack_248;
  uint uStack_244;
  uint uStack_240;
  uint uStack_23c;
  long lStack_238;
  byte bStack_230;
  long *plStack_228;
  undefined8 uStack_218;
  long *plStack_210;
  long *plStack_208;
  uint *puStack_200;
  long *plStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  char cStack_1d8;
  char cStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long *plStack_188;
  uint *puStack_180;
  long *plStack_170;
  long *plStack_168;
  uint *puStack_160;
  long *plStack_158;
  long *plStack_150;
  uint *puStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  uint *puStack_120;
  undefined8 *puStack_118;
  uint *puStack_110;
  long lStack_108;
  long *plStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined1 uStack_90;
  long *plStack_88;
  uint *puStack_80;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plStack_170 = param_3;
  (**(code **)(*(long *)(param_2 + 0x10) + 0x10))(&plStack_40,param_2 + 0x10);
  if (plStack_40 == (long *)0x0) {
    if (DAT_0f720568 == '\0') {
LAB_09c1294d:
      iVar7 = func_0x04108328(&DAT_0f720568);
      if (iVar7 != 0) {
        func_0x0eee2f40(&UNK_041369a0,0xf5450c0,0xf53dab8);
        func_0x0410844d(&DAT_0f720568);
      }
    }
    func_0x09c12f40(param_1,0x18,0xf5450c0);
  }
  else {
    if ((byte)param_5[6] != 0) {
      plStack_68 = param_4;
      func_0x09c0ad40(&plStack_168,plStack_40[0x38],param_5,1);
      plStack_140 = plStack_40;
      plVar16 = (long *)plStack_40[0x3a];
      uStack_248 = uStack_248 & 0xffffff00;
      bStack_230 = 0;
      uVar4 = param_5[6];
      if ((byte)uVar4 == 1) {
        if ((*param_5 & 1) == 0) {
          lStack_238 = *(long *)(param_5 + 4);
          uStack_248 = *param_5;
          uStack_244 = param_5[1];
          uStack_240 = param_5[2];
          uStack_23c = param_5[3];
        }
        else {
          func_0x0412e5e0(&uStack_248,*(long *)(param_5 + 4),*(long *)(param_5 + 2));
        }
        bStack_230 = 1;
      }
      puVar8 = puStack_160;
      plVar11 = plStack_168;
      plStack_d0 = (long *)&UNK_012fae61;
      plStack_c8 = (long *)0x9f;
      uStack_c0 = _DAT_0f778528;
      uStack_b8 = 0xffffffff00000001;
      uStack_b0 = 0;
      uStack_a8 = 0;
      plStack_188 = plStack_168;
      puStack_180 = puStack_160;
      plStack_168 = (long *)0x0;
      puStack_160 = (uint *)0x0;
      uStack_278 = uStack_278 & 0xffffff00;
      bStack_260 = 0;
      puStack_148 = param_5;
      plStack_60 = param_1;
      uStack_48 = param_6;
      if ((byte)uVar4 != 0) {
        if ((uStack_248 & 1) == 0) {
          lStack_268 = lStack_238;
          uStack_278 = uStack_248;
          uStack_274 = uStack_244;
          uStack_270 = uStack_240;
          uStack_26c = uStack_23c;
        }
        else {
          func_0x0412e5e0(&uStack_278,lStack_238,CONCAT44(uStack_23c,uStack_240));
        }
        bStack_260 = 1;
      }
      plStack_158 = plVar11;
      plStack_150 = (long *)puVar8;
      plStack_188 = (long *)0x0;
      puStack_180 = (uint *)0x0;
      puStack_110 = (uint *)0x0;
      puStack_118 = (undefined8 *)&UNK_0f1dcc88;
      puVar8 = (uint *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      plVar11 = plVar16;
      if (puVar8 == (uint *)0x0) goto LAB_09c128f3;
      do {
        *(undefined1 *)puVar8 = 0;
        *(undefined1 *)(puVar8 + 6) = 0;
        if (bStack_260 == 1) {
          if ((uStack_278 & 1) == 0) {
            *(long *)(puVar8 + 4) = lStack_268;
            *puVar8 = uStack_278;
            puVar8[1] = uStack_274;
            puVar8[2] = uStack_270;
            puVar8[3] = uStack_26c;
          }
          else {
            func_0x0412e5e0(puVar8,lStack_268,CONCAT44(uStack_26c,uStack_270));
          }
          *(undefined1 *)(puVar8 + 6) = 1;
        }
        puStack_110 = puVar8;
        plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x170);
        if (plVar9 == (long *)0x0) {
          FUN_0eec74c0(0x170,0);
        }
        plVar9[1] = 0;
        plVar9[2] = 0;
        *plVar9 = (long)&UNK_0f1dca98;
        plVar16 = plVar11;
        if (plVar11 != (long *)0x0) {
          plVar16 = plVar9 + 4;
          uStack_1c8 = (long *)0x0;
          uStack_1c0 = (long *)0x0;
          if (puStack_118 == (undefined8 *)0x0) {
            uStack_1c8 = (undefined8 *)0x0;
          }
          else {
            (*(code *)*puStack_118)(&puStack_118,&uStack_1c8);
            uStack_1c8 = puStack_118;
          }
          puStack_118 = (undefined8 *)0x0;
          func_0x0ee25c30(plVar16,plVar11,&plStack_d0,1);
          uStack_218 = (long *)0x0;
          plStack_210 = (long *)0x0;
          if (uStack_1c8 == (undefined8 *)0x0) {
            uStack_218 = (undefined8 *)0x0;
          }
          else {
            (*(code *)*uStack_1c8)(&uStack_1c8,&uStack_218);
            uStack_218 = uStack_1c8;
          }
          uStack_1c8 = (long *)0x0;
          plVar9[0x13] = 0;
          plVar9[0x14] = 0;
          plVar9[0x12] = (long)&UNK_0f1dcbd0;
          plVar9[0x16] = 0;
          plVar9[0x17] = 0;
          if (uStack_218 == (undefined8 *)0x0) {
            puVar10 = (undefined8 *)0x0;
          }
          else {
            (*(code *)*uStack_218)(&uStack_218,plVar9 + 0x16);
            puVar10 = uStack_218;
          }
          plVar17 = plVar9 + 0x12;
          uStack_218 = (long *)0x0;
          plVar9[0x16] = (long)puVar10;
          *(undefined4 *)(plVar9 + 0x1e) = 0;
          *(undefined1 *)((long)plVar9 + 0xf4) = 1;
          *(undefined1 *)(plVar9 + 0x1f) = 0;
          *(undefined1 *)(plVar9 + 0x21) = 0;
          plVar9[4] = (long)&UNK_0f1dcae8;
          plVar9[0x12] = (long)&UNK_0f1dcb38;
          plVar9[0x22] = 0;
          plVar9[0x23] = 0;
          plVar9[0x24] = 0;
          plVar9[0x25] = 0;
          plVar9[0x26] = 0;
          *(undefined4 *)(plVar9 + 0x27) = 1;
          plVar9[0x2c] = 0;
          plVar9[0x2d] = 0;
          plVar9[0x28] = 0;
          plVar9[0x29] = 0;
          *(undefined8 *)((long)plVar9 + 0x149) = 0;
          *(undefined8 *)((long)plVar9 + 0x151) = 0;
          if ((puVar10 == (undefined8 *)0x0) &&
             (cVar6 = func_0x0eeddcf0(&UNK_0119c186,&UNK_012a37f1,0x216,&UNK_0145e738,&UNK_011a7c1b)
             , cVar6 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          if (uStack_1c8 != (long *)0x0) {
            (**(code **)((long)uStack_1c8 + 8))(&uStack_1c8);
          }
          plVar1 = plVar9 + 1;
          if (plVar9[0x14] == 0) {
            LOCK();
            plVar9[1] = plVar9[1] + 1;
            UNLOCK();
            LOCK();
            plVar9[2] = plVar9[2] + 1;
            UNLOCK();
            plVar9[0x13] = (long)(plVar9 + 0x13);
            plVar9[0x14] = (long)plVar9;
            LOCK();
            lVar12 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
joined_r0x09c11633:
            if (lVar12 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
              func_0x0412c2d0(plVar9);
            }
          }
          else if (*(long *)(plVar9[0x14] + 8) == -1) {
            LOCK();
            plVar9[1] = plVar9[1] + 1;
            UNLOCK();
            LOCK();
            plVar9[2] = plVar9[2] + 1;
            UNLOCK();
            plVar9[0x13] = (long)(plVar9 + 0x13);
            plVar9[0x14] = (long)plVar9;
            func_0x0412c2d0();
            LOCK();
            lVar12 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            goto joined_r0x09c11633;
          }
          LOCK();
          plVar9[1] = plVar9[1] + 1;
          UNLOCK();
          uStack_1c8 = plVar16;
          uStack_1c0 = plVar9;
          plStack_70 = plVar1;
          (**(code **)(*plVar11 + 0x20))(plVar11,&uStack_1c8);
          plVar1 = uStack_1c0;
          plStack_50 = plVar11;
          plVar11 = plStack_158;
          if (uStack_1c0 != (long *)0x0) {
            LOCK();
            plVar2 = uStack_1c0 + 1;
            lVar12 = *plVar2;
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (lVar12 == 0) {
              (**(code **)(*uStack_1c0 + 0x10))(uStack_1c0);
              func_0x0412c2d0(plVar1);
              plVar11 = plStack_158;
            }
          }
          plStack_158 = plVar11;
          if (plVar11 != (long *)0x0) {
            plStack_58 = plVar17;
            func_0x09c2f870(plVar16,0,0,0);
            uVar5 = uStack_b0;
            plVar17 = plStack_150;
            plStack_158 = (long *)0x0;
            plStack_150 = (long *)0x0;
            plStack_98 = plVar17;
            plStack_128 = (long *)0x0;
            puStack_120 = (uint *)0x0;
            plStack_a0 = plVar11;
            func_0x0412d680(plVar9 + 0x22);
            *(undefined1 *)(plVar9 + 0x2b) = uVar5;
            if (plVar17 != (long *)0x0) {
              LOCK();
              plVar17[1] = plVar17[1] + 1;
              UNLOCK();
            }
            plVar9[0x2c] = (long)plVar11;
            plVar11 = (long *)plVar9[0x2d];
            plVar9[0x2d] = (long)plVar17;
            if (plVar11 != (long *)0x0) {
              LOCK();
              plVar17 = plVar11 + 1;
              lVar12 = *plVar17;
              *plVar17 = *plVar17 + -1;
              UNLOCK();
              if (lVar12 == 0) {
                (**(code **)(*plVar11 + 0x10))(plVar11);
                func_0x0412c2d0(plVar11);
              }
            }
            func_0x0412d6b0(plVar9 + 0x22);
            if (plVar9[0x14] != 0) {
              lVar12 = plVar9[0x13];
              plVar11 = (long *)FUN_0412c300();
              if (plVar11 != (long *)0x0) {
                plVar17 = (long *)(lVar12 + -0x78);
                if (lVar12 == 0) {
                  plVar17 = (long *)0x0;
                }
                LOCK();
                plVar11[2] = plVar11[2] + 1;
                UNLOCK();
                LOCK();
                plVar1 = plVar11 + 1;
                lVar12 = *plVar1;
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (lVar12 == 0) {
                  (**(code **)(*plVar11 + 0x10))(plVar11);
                  func_0x0412c2d0(plVar11);
                }
                uStack_218 = (long *)&UNK_0f1dcc18;
                plStack_210 = plVar17;
                plStack_208 = plVar11;
                plStack_1f8 = &uStack_218;
                (**(code **)(*plStack_a0 + 0x30))(plStack_a0,&uStack_218);
                plVar17 = plStack_58;
                if (plStack_1f8 == &uStack_218) {
                  lVar12 = 0x20;
LAB_09c11852:
                  (**(code **)(*plStack_1f8 + lVar12))();
                }
                else {
                  lVar12 = 0x28;
                  if (plStack_1f8 != (long *)0x0) goto LAB_09c11852;
                }
                plVar11 = plStack_98;
                if (plStack_98 != (long *)0x0) {
                  LOCK();
                  plVar1 = plStack_98 + 1;
                  lVar12 = *plVar1;
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (lVar12 == 0) {
                    (**(code **)(*plStack_98 + 0x10))(plStack_98);
                    func_0x0412c2d0(plVar11);
                  }
                }
                puVar8 = puStack_120;
                if (puStack_120 != (uint *)0x0) {
                  LOCK();
                  puVar15 = puStack_120 + 2;
                  lVar12 = *(long *)puVar15;
                  *(long *)puVar15 = *(long *)puVar15 + -1;
                  UNLOCK();
                  if (lVar12 == 0) {
                    (**(code **)(*(long *)puStack_120 + 0x10))(puStack_120);
                    func_0x0412c2d0(puVar8);
                  }
                }
                goto LAB_09c118b8;
              }
            }
            func_0x04891290();
            param_1 = plVar16;
            goto LAB_09c1294d;
          }
LAB_09c118b8:
          plVar11 = plStack_50;
          if (puStack_118 != (undefined8 *)0x0) {
            (*(code *)puStack_118[1])(&puStack_118);
          }
          plVar1 = plStack_150;
          if (plStack_150 != (long *)0x0) {
            LOCK();
            plVar2 = plStack_150 + 1;
            lVar12 = *plVar2;
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (lVar12 == 0) {
              (**(code **)(*plStack_150 + 0x10))(plStack_150);
              func_0x0412c2d0(plVar1);
            }
          }
          LOCK();
          plVar9[1] = plVar9[1] + 1;
          UNLOCK();
          iVar7 = (int)plVar11[0x10];
          uStack_1c8 = plVar16;
          uStack_1c0 = plVar9;
          if (iVar7 != 1) {
            if (iVar7 == 3) {
              *(undefined4 *)(plVar9 + 10) = 0;
            }
            else if (iVar7 == 2) {
              (**(code **)(*plVar16 + 0x10))(plVar16);
              goto LAB_09c119a2;
            }
            LOCK();
            plVar9[1] = plVar9[1] + 1;
            UNLOCK();
            uStack_218 = plVar16;
            plStack_210 = plVar9;
            (**(code **)(*plVar11 + 0x28))(plVar11,&uStack_218,0);
            plVar11 = plStack_210;
            if (plStack_210 != (long *)0x0) {
              LOCK();
              plVar1 = plStack_210 + 1;
              lVar12 = *plVar1;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (lVar12 == 0) {
                (**(code **)(*plStack_210 + 0x10))(plStack_210);
                func_0x0412c2d0(plVar11);
              }
            }
          }
LAB_09c119a2:
          plVar11 = uStack_1c0;
          if (uStack_1c0 != (long *)0x0) {
            LOCK();
            plVar1 = uStack_1c0 + 1;
            lVar12 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar12 == 0) {
              (**(code **)(*uStack_1c0 + 0x10))(uStack_1c0);
              func_0x0412c2d0(plVar11);
            }
          }
          plVar11 = plStack_140;
          if (((bStack_260 & 1) != 0) && ((uStack_278 & 1) != 0)) {
            func_0x0412a280(lStack_268,CONCAT44(uStack_274,uStack_278) & 0xfffffffffffffffe);
          }
          puVar8 = puStack_180;
          if (puStack_180 != (uint *)0x0) {
            LOCK();
            puVar15 = puStack_180 + 2;
            lVar12 = *(long *)puVar15;
            *(long *)puVar15 = *(long *)puVar15 + -1;
            UNLOCK();
            if (lVar12 == 0) {
              (**(code **)(*(long *)puStack_180 + 0x10))(puStack_180);
              func_0x0412c2d0(puVar8);
            }
          }
          uStack_138 = plVar17;
          uStack_130 = plVar9;
          if (((bStack_230 & 1) != 0) && ((uStack_248 & 1) != 0)) {
            func_0x0412a280(lStack_238,CONCAT44(uStack_244,uStack_248) & 0xfffffffffffffffe);
          }
          uVar14 = uStack_48;
          puVar15 = puStack_148;
          puVar8 = puStack_160;
          if (puStack_160 != (uint *)0x0) {
            LOCK();
            plVar9 = (long *)((long)puStack_160 + 8);
            lVar12 = *plVar9;
            *plVar9 = *plVar9 + -1;
            UNLOCK();
            if (lVar12 == 0) {
              (**(code **)(*(long *)puStack_160 + 0x10))(puStack_160);
              func_0x0412c2d0(puVar8);
            }
          }
          func_0x0412d680(plVar11 + 3);
          lVar12 = plVar11[8];
          func_0x0412d6b0(plVar11 + 3);
          if (lVar12 == 0) {
            if ((byte)puVar15[6] != 0) {
              lVar12 = plVar11[0x38];
              plStack_d0 = plStack_170;
              plStack_c8 = plStack_68;
              uStack_c0 = CONCAT71(uStack_c0._1_7_,1);
              uStack_218 = (long *)((ulong)uStack_218 & 0xffffffffffff0000);
              uVar14 = func_0x0412dc70();
              func_0x09c0af10(lVar12,&uStack_218,puVar15,0x58,uVar14);
              if (((ulong)uStack_218 & 1) != 0) {
                func_0x0412a280(plStack_208,(ulong)uStack_218 & 0xfffffffffffffffe);
              }
            }
            if (DAT_0f720568 != '\0') goto LAB_09c11c2b;
            goto LAB_09c129d0;
          }
          if ((byte)puVar15[6] != 0) {
            lVar12 = plVar11[0x38];
            plStack_a0 = plStack_170;
            plStack_98 = plStack_68;
            uStack_90 = 1;
            uVar13 = func_0x0412dd40();
            func_0x09c0af10(lVar12,uVar14,puVar15,0,uVar13);
          }
          plVar9 = (long *)plVar11[0x3a];
          (**(code **)(*plVar11 + 0x10))(&plStack_88,plVar11,uVar14);
          uStack_248 = uStack_248 & 0xffffff00;
          bStack_230 = 0;
          uVar4 = puVar15[6];
          if ((byte)uVar4 == 1) {
            if ((*puVar15 & 1) == 0) {
              lStack_238 = *(long *)(puVar15 + 4);
              uStack_248 = *puVar15;
              uStack_244 = puVar15[1];
              uStack_240 = puVar15[2];
              uStack_23c = puVar15[3];
            }
            else {
              func_0x0412e5e0(&uStack_248,*(long *)(puVar15 + 4),*(long *)(puVar15 + 2));
            }
            bStack_230 = 1;
          }
          puVar8 = puStack_80;
          plVar17 = plStack_88;
          plStack_228 = plVar11;
          plStack_d0 = (long *)&UNK_012fae61;
          plStack_c8 = (long *)0x9f;
          uStack_c0 = _DAT_0f778528;
          uStack_b8 = 0xffffffff00000001;
          uStack_b0 = 0;
          uStack_a8 = 0;
          plStack_168 = plStack_88;
          puStack_160 = puStack_80;
          plStack_88 = (long *)0x0;
          puStack_80 = (uint *)0x0;
          uStack_278 = uStack_278 & 0xffffff00;
          bStack_260 = 0;
          plStack_170 = plVar9;
          if ((byte)uVar4 != 0) {
            if ((uStack_248 & 1) == 0) {
              lStack_268 = lStack_238;
              uStack_278 = uStack_248;
              uStack_274 = uStack_244;
              uStack_270 = uStack_240;
              uStack_26c = uStack_23c;
              bStack_260 = 1;
            }
            else {
              func_0x0412e5e0(&uStack_278,lStack_238,CONCAT44(uStack_23c,uStack_240));
              bStack_260 = 1;
            }
          }
          plStack_188 = plVar17;
          puStack_180 = puVar8;
          plStack_168 = (long *)0x0;
          puStack_160 = (uint *)0x0;
          puStack_110 = (uint *)0x0;
          puStack_118 = (undefined8 *)&UNK_0f1dcea0;
          plStack_258 = plStack_228;
          puVar15 = (uint *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
          if (puVar15 == (uint *)0x0) {
            FUN_0eec74c0(0x28,0);
          }
          plVar11 = plStack_170;
          *(undefined1 *)puVar15 = 0;
          *(undefined1 *)(puVar15 + 6) = 0;
          if (bStack_260 == 1) {
            if ((uStack_278 & 1) == 0) {
              *(long *)(puVar15 + 4) = lStack_268;
              *puVar15 = uStack_278;
              puVar15[1] = uStack_274;
              puVar15[2] = uStack_270;
              puVar15[3] = uStack_26c;
            }
            else {
              func_0x0412e5e0(puVar15,lStack_268,CONCAT44(uStack_26c,uStack_270));
            }
            *(undefined1 *)(puVar15 + 6) = 1;
          }
          *(long **)(puVar15 + 8) = plStack_258;
          puStack_110 = puVar15;
          plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
          if (plVar9 == (long *)0x0) {
            FUN_0eec74c0(0x1c0,0);
          }
          plVar9[1] = 0;
          plVar9[2] = 0;
          *plVar9 = (long)&UNK_0f1dccb0;
          if (plVar11 != (long *)0x0) goto code_r0x09c121be;
        }
        func_0x04890760();
LAB_09c128f3:
        FUN_0eec74c0(0x20,0);
        plVar11 = plVar16;
      } while( true );
    }
    if ((DAT_0f720568 == '\0') && (iVar7 = func_0x04108328(&DAT_0f720568), iVar7 != 0)) {
      func_0x0eee2f40(&UNK_041369a0,0xf5450c0,0xf53dab8);
      func_0x0410844d(&DAT_0f720568);
    }
    func_0x09c12f40(param_1,0x12,0xf5450c0);
  }
  goto LAB_09c128a9;
code_r0x09c121be:
  plVar16 = plVar9 + 4;
  uStack_1c8 = (long *)0x0;
  uStack_1c0 = (long *)0x0;
  if (puStack_118 == (undefined8 *)0x0) {
    uStack_1c8 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_118)(&puStack_118,&uStack_1c8);
    uStack_1c8 = puStack_118;
  }
  puStack_118 = (undefined8 *)0x0;
  func_0x0ee25c30(plVar16,plVar11,&plStack_d0,1);
  uStack_218 = (long *)0x0;
  plStack_210 = (long *)0x0;
  if (uStack_1c8 == (undefined8 *)0x0) {
    uStack_218 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*uStack_1c8)(&uStack_1c8,&uStack_218);
    uStack_218 = uStack_1c8;
  }
  uStack_1c8 = (long *)0x0;
  plVar9[0x13] = 0;
  plVar9[0x14] = 0;
  plVar9[0x12] = (long)&UNK_0f1dcde8;
  plVar9[0x16] = 0;
  plVar9[0x17] = 0;
  if (uStack_218 == (undefined8 *)0x0) {
    puVar10 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*uStack_218)(&uStack_218,plVar9 + 0x16);
    puVar10 = uStack_218;
  }
  uStack_218 = (long *)0x0;
  plVar9[0x16] = (long)puVar10;
  *(undefined4 *)(plVar9 + 0x1e) = 0;
  lVar12 = func_0x0412dd40();
  plVar9[0x1f] = lVar12;
  *(undefined1 *)(plVar9 + 0x20) = 1;
  *(undefined1 *)(plVar9 + 0x21) = 0;
  *(undefined1 *)(plVar9 + 0x2a) = 0;
  plVar9[4] = (long)&UNK_0f1dcd00;
  plVar9[0x12] = (long)&UNK_0f1dcd50;
  plVar9[0x2b] = 0;
  plVar9[0x2c] = 0;
  plVar9[0x2d] = 0;
  plVar9[0x2e] = 0;
  plVar9[0x2f] = 0;
  *(undefined4 *)(plVar9 + 0x30) = 1;
  plVar9[0x35] = 0;
  plVar9[0x36] = 0;
  plVar9[0x31] = 0;
  plVar9[0x32] = 0;
  *(undefined8 *)((long)plVar9 + 0x191) = 0;
  *(undefined8 *)((long)plVar9 + 0x199) = 0;
  if ((puVar10 == (undefined8 *)0x0) &&
     (cVar6 = func_0x0eeddcf0(&UNK_0119c186,&UNK_012a37f1,0x216,&UNK_0145e738,&UNK_01437f86),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if (uStack_1c8 != (long *)0x0) {
    (**(code **)((long)uStack_1c8 + 8))(&uStack_1c8);
  }
  puVar8 = (uint *)(plVar9 + 1);
  if (plVar9[0x14] == 0) {
    LOCK();
    plVar9[1] = plVar9[1] + 1;
    UNLOCK();
    LOCK();
    plVar9[2] = plVar9[2] + 1;
    UNLOCK();
    plVar9[0x13] = (long)(plVar9 + 0x13);
    plVar9[0x14] = (long)plVar9;
    LOCK();
    lVar12 = *(long *)puVar8;
    *(long *)puVar8 = *(long *)puVar8 + -1;
    UNLOCK();
joined_r0x09c12432:
    if (lVar12 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      func_0x0412c2d0(plVar9);
    }
  }
  else if (*(long *)(plVar9[0x14] + 8) == -1) {
    LOCK();
    plVar9[1] = plVar9[1] + 1;
    UNLOCK();
    LOCK();
    plVar9[2] = plVar9[2] + 1;
    UNLOCK();
    plVar9[0x13] = (long)(plVar9 + 0x13);
    plVar9[0x14] = (long)plVar9;
    func_0x0412c2d0();
    LOCK();
    lVar12 = *(long *)puVar8;
    *(long *)puVar8 = *(long *)puVar8 + -1;
    UNLOCK();
    goto joined_r0x09c12432;
  }
  LOCK();
  plVar9[1] = plVar9[1] + 1;
  UNLOCK();
  uStack_1c8 = plVar16;
  uStack_1c0 = plVar9;
  puStack_148 = puVar8;
  (**(code **)(*plVar11 + 0x20))(plVar11,&uStack_1c8);
  plVar17 = uStack_1c0;
  plStack_140 = plVar16;
  if (uStack_1c0 != (long *)0x0) {
    LOCK();
    plVar16 = uStack_1c0 + 1;
    lVar12 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*uStack_1c0 + 0x10))(uStack_1c0);
      func_0x0412c2d0(plVar17);
    }
  }
  plVar16 = plStack_188;
  if (plStack_188 == (long *)0x0) {
LAB_09c12699:
    if (puStack_118 != (undefined8 *)0x0) {
      (*(code *)puStack_118[1])(&puStack_118);
    }
    plVar16 = plStack_140;
    puVar8 = puStack_180;
    if (puStack_180 != (uint *)0x0) {
      LOCK();
      puVar15 = puStack_180 + 2;
      lVar12 = *(long *)puVar15;
      *(long *)puVar15 = *(long *)puVar15 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*(long *)puStack_180 + 0x10))(puStack_180);
        func_0x0412c2d0(puVar8);
      }
    }
    uStack_1c8 = plVar16;
    LOCK();
    plVar9[1] = plVar9[1] + 1;
    UNLOCK();
    iVar7 = (int)plVar11[0x10];
    uStack_1c0 = plVar9;
    if (iVar7 != 1) {
      if (iVar7 == 3) {
        *(undefined4 *)(plVar9 + 10) = 0;
      }
      else if (iVar7 == 2) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
        goto LAB_09c12780;
      }
      uStack_218 = plVar16;
      LOCK();
      plVar9[1] = plVar9[1] + 1;
      UNLOCK();
      plStack_210 = plVar9;
      (**(code **)(*plVar11 + 0x28))(plVar11,&uStack_218,0);
      plVar16 = plStack_210;
      if (plStack_210 != (long *)0x0) {
        LOCK();
        plVar11 = plStack_210 + 1;
        lVar12 = *plVar11;
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (lVar12 == 0) {
          (**(code **)(*plStack_210 + 0x10))(plStack_210);
          func_0x0412c2d0(plVar16);
        }
      }
    }
LAB_09c12780:
    plVar16 = uStack_1c0;
    if (uStack_1c0 != (long *)0x0) {
      LOCK();
      plVar11 = uStack_1c0 + 1;
      lVar12 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*uStack_1c0 + 0x10))(uStack_1c0);
        func_0x0412c2d0(plVar16);
      }
    }
    param_1 = plStack_60;
    if (((bStack_260 & 1) != 0) && ((uStack_278 & 1) != 0)) {
      func_0x0412a280(lStack_268,CONCAT44(uStack_274,uStack_278) & 0xfffffffffffffffe);
    }
    puVar8 = puStack_160;
    if (puStack_160 != (uint *)0x0) {
      LOCK();
      plVar16 = (long *)((long)puStack_160 + 8);
      lVar12 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*(long *)puStack_160 + 0x10))(puStack_160);
        func_0x0412c2d0(puVar8);
      }
    }
    if ((bStack_230 == 1) && ((uStack_248 & 1) != 0)) {
      func_0x0412a280(lStack_238,CONCAT44(uStack_244,uStack_248) & 0xfffffffffffffffe);
    }
    puVar8 = puStack_80;
    if (puStack_80 != (uint *)0x0) {
      LOCK();
      puVar15 = puStack_80 + 2;
      lVar12 = *(long *)puVar15;
      *(long *)puVar15 = *(long *)puVar15 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*(long *)puStack_80 + 0x10))(puStack_80);
        func_0x0412c2d0(puVar8);
      }
    }
    *param_1 = (long)(plVar9 + 0x12);
    param_1[1] = (long)plVar9;
    param_1[2] = (long)uStack_138;
    param_1[3] = (long)uStack_130;
    uStack_138 = (long *)0x0;
    uStack_130 = (long *)0x0;
  }
  else {
    func_0x09c30ca0(plStack_140,0,0,0);
    uVar5 = uStack_b0;
    puVar8 = puStack_180;
    plStack_188 = (long *)0x0;
    puStack_180 = (uint *)0x0;
    plStack_128 = plVar16;
    puStack_120 = puVar8;
    plStack_158 = (long *)0x0;
    plStack_150 = (long *)0x0;
    func_0x0412d680(plVar9 + 0x2b);
    *(undefined1 *)(plVar9 + 0x34) = uVar5;
    if (puVar8 != (uint *)0x0) {
      LOCK();
      *(long *)(puVar8 + 2) = *(long *)(puVar8 + 2) + 1;
      UNLOCK();
    }
    plVar9[0x35] = (long)plVar16;
    plVar16 = (long *)plVar9[0x36];
    plVar9[0x36] = (long)puVar8;
    if (plVar16 != (long *)0x0) {
      LOCK();
      plVar11 = plVar16 + 1;
      lVar12 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
        func_0x0412c2d0(plVar16);
      }
    }
    func_0x0412d6b0(plVar9 + 0x2b);
    if (plVar9[0x14] != 0) {
      lVar12 = plVar9[0x13];
      plVar16 = (long *)FUN_0412c300();
      if (plVar16 != (long *)0x0) {
        plVar11 = (long *)(lVar12 + -0x78);
        if (lVar12 == 0) {
          plVar11 = (long *)0x0;
        }
        LOCK();
        plVar16[2] = plVar16[2] + 1;
        UNLOCK();
        LOCK();
        plVar17 = plVar16 + 1;
        lVar12 = *plVar17;
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (lVar12 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
          func_0x0412c2d0(plVar16);
        }
        uStack_218 = (long *)&UNK_0f1dce30;
        plStack_210 = plVar11;
        plStack_208 = plVar16;
        plStack_1f8 = &uStack_218;
        (**(code **)(*plStack_128 + 0x30))(plStack_128,&uStack_218);
        plVar11 = plStack_170;
        if (plStack_1f8 == &uStack_218) {
          lVar12 = 0x20;
LAB_09c12633:
          (**(code **)(*plStack_1f8 + lVar12))();
        }
        else {
          lVar12 = 0x28;
          if (plStack_1f8 != (long *)0x0) goto LAB_09c12633;
        }
        puVar8 = puStack_120;
        if (puStack_120 != (uint *)0x0) {
          LOCK();
          puVar15 = puStack_120 + 2;
          lVar12 = *(long *)puVar15;
          *(long *)puVar15 = *(long *)puVar15 + -1;
          UNLOCK();
          if (lVar12 == 0) {
            (**(code **)(*(long *)puStack_120 + 0x10))(puStack_120);
            func_0x0412c2d0(puVar8);
          }
        }
        plVar16 = plStack_150;
        if (plStack_150 != (long *)0x0) {
          LOCK();
          plVar17 = plStack_150 + 1;
          lVar12 = *plVar17;
          *plVar17 = *plVar17 + -1;
          UNLOCK();
          if (lVar12 == 0) {
            (**(code **)(*plStack_150 + 0x10))(plStack_150);
            func_0x0412c2d0(plVar16);
          }
        }
        goto LAB_09c12699;
      }
    }
    func_0x04891290();
LAB_09c129d0:
    iVar7 = func_0x04108328(&DAT_0f720568);
    if (iVar7 != 0) {
      func_0x0eee2f40(&UNK_041369a0,0xf5450c0,0xf53dab8);
      func_0x0410844d(&DAT_0f720568);
    }
LAB_09c11c2b:
    plStack_208 = (long *)_DAT_0f1dfa48;
    puStack_200 = (uint *)_UNK_0f1dfa50;
    uStack_218 = (long *)_DAT_0f1dfa38;
    plStack_210 = (long *)_UNK_0f1dfa40;
    plStack_1f8 = (long *)((ulong)plStack_1f8 & 0xffffffffffffff00);
    cStack_1d0 = '\0';
    puStack_118 = (undefined8 *)0x0;
    puStack_110 = (uint *)0x0;
    lStack_108 = 0;
    func_0x0eee17a0(&puStack_118,&uStack_218,&uStack_1c8,1);
    if ((cStack_1d0 == '\x01') && (((ulong)plStack_1f8 & 1) != 0)) {
      func_0x0412a280(lStack_1e8,(ulong)plStack_1f8 & 0xfffffffffffffffe);
    }
    lVar12 = lStack_108;
    puVar8 = puStack_110;
    puVar10 = puStack_118;
    uStack_1c8 = (long *)CONCAT44(uStack_1c8._4_4_,0x19);
    uStack_1c0 = (long *)0xf5450c0;
    uStack_218 = (long *)CONCAT44(uStack_1c8._4_4_,0x19);
    plStack_210 = (long *)0xf5450c0;
    lStack_1b8 = 0;
    lStack_1b0 = 0;
    lStack_1a8 = 0;
    lStack_1a0 = 0;
    lStack_198 = 0;
    lStack_190 = 0;
    cStack_1d8 = '\0';
    plStack_208 = puStack_118;
    puStack_200 = puStack_110;
    plStack_1f8 = (long *)lStack_108;
    lStack_1f0 = 0;
    lStack_1e8 = 0;
    lStack_1e0 = 0;
    plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (plVar16 == (long *)0x0) {
      FUN_0eec74c0(0x80,0);
    }
    plVar16[1] = 0;
    plVar16[2] = 0;
    *plVar16 = (long)&UNK_0f1dfb08;
    lStack_1e8 = 0;
    lStack_1e0 = 0;
    plStack_1f8 = (long *)0x0;
    lStack_1f0 = 0;
    plStack_208 = (long *)0x0;
    puStack_200 = (uint *)0x0;
    *(undefined4 *)(plVar16 + 6) = (undefined4)uStack_1c8;
    *(undefined4 *)((long)plVar16 + 0x34) = uStack_1c8._4_4_;
    *(undefined4 *)(plVar16 + 7) = (undefined4)uStack_1c0;
    *(undefined4 *)((long)plVar16 + 0x3c) = uStack_1c0._4_4_;
    plVar16[8] = (long)puVar10;
    plVar16[9] = (long)puVar8;
    plVar16[10] = lVar12;
    plVar16[0xb] = 0;
    plVar16[0xc] = 0;
    plVar16[0xd] = 0;
    plVar16[3] = (long)&UNK_0f1dfb58;
    *(undefined1 *)(plVar16 + 0xe) = 0;
    *(undefined1 *)(plVar16 + 0xf) = 1;
    LOCK();
    plVar16[1] = plVar16[1] + 1;
    UNLOCK();
    LOCK();
    plVar16[2] = plVar16[2] + 1;
    UNLOCK();
    plVar16[4] = (long)(plVar16 + 4);
    plVar16[5] = (long)plVar16;
    LOCK();
    plVar11 = plVar16 + 1;
    lVar12 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      func_0x0412c2d0(plVar16);
    }
    param_1 = plStack_60;
    lVar12 = lStack_1f0;
    *plStack_60 = (long)(plVar16 + 3);
    plStack_60[1] = (long)plVar16;
    *(undefined4 *)(plStack_60 + 2) = (undefined4)uStack_138;
    *(undefined4 *)((long)plStack_60 + 0x14) = uStack_138._4_4_;
    *(undefined4 *)(plStack_60 + 3) = (undefined4)uStack_130;
    *(undefined4 *)((long)plStack_60 + 0x1c) = uStack_130._4_4_;
    uStack_138 = (long *)0x0;
    uStack_130 = (long *)0x0;
    if (cStack_1d8 == '\0') {
      lVar3 = lStack_1e8;
      if (lStack_1f0 != 0) {
        while (lVar12 != lVar3) {
          func_0x048b3e80(lVar3 + -0x40);
          lVar3 = lVar3 + -0x40;
        }
        lStack_1e8 = lVar12;
        func_0x0412a280(lStack_1f0,lStack_1e0 - lStack_1f0);
      }
      plVar16 = plStack_208;
      puVar8 = puStack_200;
      if (plStack_208 != (long *)0x0) {
        for (; (uint *)plVar16 != puVar8; puVar8 = (uint *)((long)puVar8 + -0x50)) {
          if (((char)*(long *)((long)puVar8 + -8) == '\x01') &&
             ((*(byte *)((long)puVar8 + -0x30) & 1) != 0)) {
            func_0x0412a280(*(long *)((long)puVar8 + -0x20),
                            *(ulong *)((long)puVar8 + -0x30) & 0xfffffffffffffffe);
          }
        }
        puStack_200 = (uint *)plVar16;
        func_0x0412a280(plVar16,(long)plStack_1f8 - (long)plVar16);
      }
    }
    lVar3 = lStack_1a0;
    lVar12 = lStack_198;
    if (lStack_1a0 != 0) {
      while (lVar3 != lVar12) {
        func_0x048b3e80(lVar12 + -0x40);
        lVar12 = lVar12 + -0x40;
      }
      lStack_198 = lVar3;
      func_0x0412a280(lStack_1a0,lStack_190 - lStack_1a0);
    }
    lVar3 = lStack_1b8;
    lVar12 = lStack_1b0;
    if (lStack_1b8 != 0) {
      for (; lVar3 != lVar12; lVar12 = lVar12 + -0x50) {
        if ((*(char *)(lVar12 + -8) == '\x01') && ((*(byte *)(lVar12 + -0x30) & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(lVar12 + -0x20),
                          *(ulong *)(lVar12 + -0x30) & 0xfffffffffffffffe);
        }
      }
      lStack_1b0 = lVar3;
      func_0x0412a280(lVar3,lStack_1a8 - lVar3);
    }
  }
  plVar16 = uStack_130;
  if (uStack_130 != (long *)0x0) {
    LOCK();
    plVar11 = uStack_130 + 1;
    lVar12 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*uStack_130 + 0x10))(uStack_130);
      func_0x0412c2d0(plVar16);
    }
  }
LAB_09c128a9:
  if (plStack_38 != (long *)0x0) {
    LOCK();
    plVar16 = plStack_38 + 1;
    lVar12 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      func_0x0412c2d0(plStack_38);
    }
  }
  return param_1;
}


