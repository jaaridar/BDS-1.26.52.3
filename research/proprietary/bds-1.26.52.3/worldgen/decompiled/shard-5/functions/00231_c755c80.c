/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc855c80 (ELF vaddr 0xc755c80)
 * Label: callee-of:0x517ab30
 * Body:  [[0c855c80, 0c855cc8] [0c855cd0, 0c855cfb] [0c855d00, 0c855d6e] [0c855d70, 0c856000] [0c856010, 0c856071] [0c856080, 0c8560f3] [0c856100, 0c856215] [0c856220, 0c856278] [0c856280, 0c856299] [0c8562a0, 0c8562ad] [0c8562b0, 0c8563cd] [0c8563d0, 0c856532] [0c85659f, 0c8565e9]]
 * Ghidra: FUN_0c855c80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_0c855c80(ulong param_1,long *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 uVar12;
  short sVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  short *psVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  ulong uVar23;
  long lVar24;
  long *plVar25;
  long lVar26;
  ulong unaff_RBX;
  uint *puVar27;
  uint *puVar28;
  uint uVar29;
  ulong uVar30;
  byte bVar31;
  long lVar32;
  uint uVar33;
  long *unaff_R15;
  uint *puVar34;
  long *plStack_d8;
  undefined8 uStack_d0;
  long alStack_c8 [6];
  undefined4 uStack_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  long alStack_78 [4];
  long *plStack_58;
  long lStack_40;
  ulong uStack_38;
  
  bVar31 = 0;
  func_0x0eee2dd0(param_1,0,0x119);
  plStack_d8 = alStack_c8;
  uStack_d0 = 0x600000000;
  iVar14 = 0;
  do {
    uVar23 = 0;
    do {
      uVar29 = (uint)uVar23;
      uStack_98 = uVar29 | iVar14 << 8;
      plVar17 = (long *)param_2[0x1fa];
      uVar30 = (ulong)(iVar14 * 0x10 + uVar29 & 0xff);
      if (plVar17 != (long *)0x0) {
        plVar19 = param_2;
        if (uVar30 < (ulong)(plVar17[1] - *plVar17 >> 1)) {
          sVar13 = *(short *)(*plVar17 + uVar30 * 2) - *(short *)((long)param_2 + 0x3c);
          goto LAB_0c855d79;
        }
        goto LAB_0c8564cb;
      }
      sVar13 = *(short *)((long)param_2 + uVar30 * 2 + 0xbd0);
LAB_0c855d79:
      uStack_98 = CONCAT22(sVar13,(undefined2)uStack_98);
      lVar16 = func_0x0caf8020(param_2,&uStack_98);
      uVar15 = (uint)uStack_d0;
      unaff_RBX = uStack_d0 & 0xffffffff;
      plVar19 = plStack_d8 + unaff_RBX;
      plVar17 = plStack_d8;
      if (unaff_RBX == 0) {
LAB_0c855d00:
        if (plVar17 == plVar19) goto LAB_0c855dd3;
        uVar15 = (uint)((int)plVar17 - (int)plStack_d8) >> 3;
      }
      else {
        lVar24 = unaff_RBX * 8;
        do {
          if (*plVar17 == lVar16) goto LAB_0c855d00;
          plVar17 = plVar17 + 1;
          lVar24 = lVar24 + -8;
        } while (lVar24 != 0);
LAB_0c855dd3:
        if ((uint)uStack_d0 == uStack_d0._4_4_) {
          if ((uint)uStack_d0 == 0xffffffff) {
            puVar21 = (undefined8 *)func_0x041086b0(0x10);
            func_0x0412bf30(puVar21,&UNK_011ed0d9);
            *puVar21 = &UNK_0eeec920;
            func_0x041088a0(puVar21,&UNK_0eeec938,&SUB_0412bce0);
            goto LAB_0c85651f;
          }
          uVar33 = (uint)uStack_d0 + 1;
          unaff_R15 = (long *)(ulong)uVar33;
          uVar30 = (ulong)((float)unaff_RBX * _DAT_0119858c);
          uStack_38 = uVar30 & 0xffffffff;
          if ((uint)uVar30 < uVar33) {
            uStack_38 = (ulong)uVar33;
          }
          if (CARRY4((uint)(long)((float)unaff_RBX / _DAT_0119858c),(uint)uStack_d0)) {
            uStack_38 = 0xffffffff;
          }
          lStack_40 = uStack_38 << 3;
          plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
          if (plVar17 == (long *)0x0) {
            func_0x0eec74c0(lStack_40,0);
          }
          plVar17[unaff_RBX] = lVar16;
          plVar18 = plVar17;
          plVar25 = plStack_d8;
          if (plVar19 == plStack_d8 + (uStack_d0 & 0xffffffff)) {
            if ((uint)uStack_d0 != 0) {
              do {
                lVar16 = *plVar25;
                *plVar18 = lVar16;
                if (lVar16 == 0) goto LAB_0c8564c6;
                plVar25 = plVar25 + 1;
                plVar18 = plVar18 + 1;
              } while (plVar25 != plVar19);
            }
          }
          else {
            for (; plVar25 != plVar19; plVar25 = plVar25 + 1) {
              lVar16 = *plVar25;
              *plVar18 = lVar16;
              if (lVar16 == 0) goto LAB_0c8564c6;
              plVar18 = plVar18 + 1;
            }
            plVar18 = plVar17 + unaff_RBX;
            do {
              plVar18 = plVar18 + 1;
              lVar16 = *plVar19;
              *plVar18 = lVar16;
              if (lVar16 == 0) goto LAB_0c8564c6;
              plVar19 = plVar19 + 1;
            } while (plVar19 != plStack_d8 + (uStack_d0 & 0xffffffff));
          }
          if (plStack_d8 != (long *)0x0 && alStack_c8 != plStack_d8) {
            (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0);
          }
          uStack_d0 = uStack_38 << 0x20;
          plStack_d8 = plVar17;
        }
        else {
          *plVar19 = lVar16;
        }
        uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar15 + 1);
        unaff_RBX = (ulong)(uVar15 + 1);
      }
      *(char *)(param_1 + bVar31) = (char)uVar15;
      bVar31 = bVar31 + 1;
      uVar23 = (ulong)(uVar29 + 1);
      unaff_R15 = plStack_d8;
    } while (uVar29 + 1 != 0x10);
    iVar14 = iVar14 + 1;
  } while (iVar14 != 0x10);
  uVar23 = param_1;
  if ((int)unaff_RBX == 0) goto LAB_0c856488;
  unaff_R15 = (long *)(unaff_RBX * 0x50);
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,unaff_R15);
  if (plVar19 == (long *)0x0) goto LAB_0c8564d0;
LAB_0c855fb4:
  *(long **)(uVar23 + 0x100) = plVar19;
  *(long **)(uVar23 + 0x108) = plVar19;
  *(long **)(uVar23 + 0x110) = plVar19 + unaff_RBX * 10;
  if ((uStack_d0 & 0xffffffff) != 0) {
    plVar17 = plStack_d8;
    do {
      lVar16 = *plVar17;
      if ((DAT_0f5570f0 == '\0') && (iVar14 = func_0x04108328(&DAT_0f5570f0), iVar14 != 0)) {
        LOCK();
        UNLOCK();
        _DAT_0f5570e8 = _DAT_0f556458;
        _DAT_0f556458 = _DAT_0f556458 + 1;
        FUN_0410844d(&DAT_0f5570f0);
      }
      for (psVar20 = *(short **)(lVar16 + 0x170); psVar20 != *(short **)(lVar16 + 0x178);
          psVar20 = psVar20 + 8) {
        if (*psVar20 == _DAT_0f5570e8) {
          lVar24 = *(long *)(psVar20 + 4);
          goto LAB_0c856084;
        }
      }
      lVar24 = 0;
LAB_0c856084:
      lVar26 = lVar24 + 8;
      if (lVar24 == 0) {
        lVar26 = 0;
      }
      func_0x0c851900(&uStack_98,lVar16,lVar26);
      puVar34 = *(uint **)(uVar23 + 0x108);
      if (puVar34 < *(uint **)(uVar23 + 0x110)) {
        puVar34[4] = uStack_88;
        puVar34[5] = uStack_84;
        puVar34[6] = uStack_80;
        puVar34[7] = uStack_7c;
        *puVar34 = uStack_98;
        puVar34[1] = uStack_94;
        puVar34[2] = uStack_90;
        puVar34[3] = uStack_8c;
        if (plStack_58 == (long *)0x0) {
          puVar34[0x10] = 0;
          puVar34[0x11] = 0;
        }
        else if (plStack_58 == alStack_78) {
          *(uint **)(puVar34 + 0x10) = puVar34 + 8;
          (**(code **)(*plStack_58 + 0x18))();
        }
        else {
          *(long **)(puVar34 + 0x10) = plStack_58;
          plStack_58 = (long *)0x0;
        }
        puVar34 = puVar34 + 0x14;
        *(uint **)(uVar23 + 0x108) = puVar34;
        if (plStack_58 != alStack_78) goto LAB_0c8563ab;
LAB_0c856372:
        lVar16 = 0x20;
LAB_0c8563b5:
        (**(code **)(*plStack_58 + lVar16))();
        plVar19 = *(long **)(puVar34 + -0x12);
      }
      else {
        puVar28 = *(uint **)(uVar23 + 0x100);
        lVar16 = (long)puVar34 - (long)puVar28;
        uVar30 = (lVar16 >> 4) * -0x3333333333333333 + 1;
        if (0x333333333333333 < uVar30) {
LAB_0c85651f:
          func_0x0c85af50();
LAB_0c856524:
          uVar22 = FUN_04882eb0();
          uVar22 = func_0x04882e20(uVar22);
          if (plStack_d8 != (long *)0x0 && alStack_c8 != plStack_d8) {
            (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0);
          }
          func_0x0c8565f0(param_1);
          uVar22 = func_0x0eee2d70(uVar22);
          func_0x04882e20(uVar22);
          pcVar4 = (code *)swi(3);
          uVar23 = (*pcVar4)();
          return uVar23;
        }
        lVar24 = (long)*(uint **)(uVar23 + 0x110) - (long)puVar28 >> 4;
        uVar23 = lVar24 * -0x6666666666666666;
        if (uVar30 < uVar23) {
          uVar30 = uVar23;
        }
        if (0x199999999999998 < (ulong)(lVar24 * -0x3333333333333333)) {
          uVar30 = 0x333333333333333;
        }
        if (uVar30 == 0) {
          lVar24 = 0;
        }
        else {
          if (0x333333333333333 < uVar30) goto LAB_0c856524;
          lVar24 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar30 * 0x50);
          if (lVar24 == 0) {
            func_0x0eec74c0(uVar30 * 0x50,0);
            lVar24 = 0;
          }
        }
        lVar26 = lVar24 + lVar16;
        puVar27 = (uint *)(lVar24 + 0x10 + lVar16);
        *puVar27 = uStack_88;
        puVar27[1] = uStack_84;
        puVar27[2] = uStack_80;
        puVar27[3] = uStack_7c;
        puVar27 = (uint *)(lVar24 + lVar16);
        *puVar27 = uStack_98;
        puVar27[1] = uStack_94;
        puVar27[2] = uStack_90;
        puVar27[3] = uStack_8c;
        if (plStack_58 == (long *)0x0) {
          *(undefined8 *)(lVar26 + 0x40) = 0;
joined_r0x0c8562fe:
          lVar16 = lVar26 - lVar16;
          if (puVar28 != puVar34) {
LAB_0c856211:
            lVar32 = 0;
            do {
              puVar2 = (undefined4 *)((long)puVar28 + lVar32);
              uVar5 = *puVar2;
              uVar6 = puVar2[1];
              uVar7 = puVar2[2];
              uVar8 = puVar2[3];
              puVar2 = (undefined4 *)((long)puVar28 + lVar32 + 0x10);
              uVar9 = puVar2[1];
              uVar10 = puVar2[2];
              uVar11 = puVar2[3];
              puVar1 = (undefined4 *)(lVar16 + 0x10 + lVar32);
              *puVar1 = *puVar2;
              puVar1[1] = uVar9;
              puVar1[2] = uVar10;
              puVar1[3] = uVar11;
              puVar2 = (undefined4 *)(lVar16 + lVar32);
              *puVar2 = uVar5;
              puVar2[1] = uVar6;
              puVar2[2] = uVar7;
              puVar2[3] = uVar8;
              lVar3 = *(long *)((long)puVar28 + lVar32 + 0x40);
              if (lVar3 == 0) {
                *(undefined8 *)(lVar16 + 0x40 + lVar32) = 0;
              }
              else if ((long)puVar28 + lVar32 + 0x20 == lVar3) {
                *(long *)(lVar16 + 0x40 + lVar32) = lVar32 + lVar16 + 0x20;
                (**(code **)(**(long **)((long)puVar28 + lVar32 + 0x40) + 0x18))();
              }
              else {
                *(long *)(lVar16 + 0x40 + lVar32) = lVar3;
                *(undefined8 *)((long)puVar28 + lVar32 + 0x40) = 0;
              }
              lVar3 = lVar32 + 0x50;
              lVar32 = lVar32 + 0x50;
            } while ((uint *)((long)puVar28 + lVar3) != puVar34);
            puVar28 = puVar28 + 8;
            do {
              puVar27 = *(uint **)(puVar28 + 8);
              if (puVar28 == puVar27) {
                lVar32 = 0x20;
LAB_0c8562b5:
                (**(code **)(*(long *)puVar27 + lVar32))();
              }
              else {
                lVar32 = 0x28;
                if (puVar27 != (uint *)0x0) goto LAB_0c8562b5;
              }
              puVar27 = puVar28 + 0xc;
              puVar28 = puVar28 + 0x14;
            } while (puVar27 != puVar34);
            puVar28 = *(uint **)(param_1 + 0x100);
          }
        }
        else {
          if (plStack_58 != alStack_78) {
            *(long **)(lVar26 + 0x40) = plStack_58;
            plStack_58 = (long *)0x0;
            goto joined_r0x0c8562fe;
          }
          *(long *)(lVar26 + 0x40) = lVar24 + lVar16 + 0x20;
          (**(code **)(*plStack_58 + 0x18))();
          puVar28 = *(uint **)(param_1 + 0x100);
          puVar34 = *(uint **)(param_1 + 0x108);
          lVar16 = lVar26 - ((long)puVar34 - (long)puVar28);
          if (puVar28 != puVar34) goto LAB_0c856211;
        }
        puVar34 = (uint *)(lVar26 + 0x50);
        *(long *)(param_1 + 0x100) = lVar16;
        *(uint **)(param_1 + 0x108) = puVar34;
        lVar16 = *(long *)(param_1 + 0x110);
        *(ulong *)(param_1 + 0x110) = lVar24 + uVar30 * 0x50;
        if (puVar28 != (uint *)0x0) {
          func_0x0412a280(puVar28,lVar16 - (long)puVar28);
        }
        *(uint **)(param_1 + 0x108) = puVar34;
        uVar23 = param_1;
        if (plStack_58 == alStack_78) goto LAB_0c856372;
LAB_0c8563ab:
        lVar16 = 0x28;
        if (plStack_58 != (long *)0x0) goto LAB_0c8563b5;
        plVar19 = *(long **)(puVar34 + -0x12);
      }
      if (plVar19 != (long *)0x0) {
        uVar12 = 1;
        if (*(char *)(uVar23 + 0x118) == '\0') {
          uVar12 = (**(code **)(*plVar19 + 0x30))();
        }
        *(undefined1 *)(uVar23 + 0x118) = uVar12;
      }
      plVar17 = plVar17 + 1;
    } while (plVar17 != plStack_d8 + (uStack_d0 & 0xffffffff));
  }
LAB_0c856488:
  if (plStack_d8 != (long *)0x0 && alStack_c8 != plStack_d8) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,plStack_d8);
  }
  return uVar23;
LAB_0c8564c6:
  func_0x04890760();
LAB_0c8564cb:
  func_0x0c6e2980();
LAB_0c8564d0:
  func_0x0eec74c0(unaff_R15,0);
  goto LAB_0c855fb4;
}


