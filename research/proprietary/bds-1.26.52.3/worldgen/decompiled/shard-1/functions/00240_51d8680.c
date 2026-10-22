/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x52d8680 (ELF vaddr 0x51d8680)
 * Label: callee-of:0x517cd10
 * Body:  [[052d8680, 052d8772] [052d8780, 052d87b2] [052d87c0, 052d9164] [052d9170, 052d92ab] [052d92b0, 052d92f5] [052d9300, 052d9527]]
 * Ghidra: FUN_052d8680
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_052d8680(long param_1,long *param_2,int *param_3,long *param_4)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long *plVar5;
  char cVar6;
  short sVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined4 *puVar17;
  undefined *puVar18;
  int iVar19;
  char cVar20;
  int iVar21;
  long lVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  ulong uVar26;
  bool bVar27;
  bool bVar28;
  undefined8 uStack_188;
  int iStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined4 *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  int iStack_144;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  long lStack_108;
  undefined4 *puStack_100;
  undefined4 *puStack_f8;
  int iStack_ec;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  int *piStack_c8;
  ulong uStack_c0;
  byte bStack_b8;
  undefined7 uStack_b7;
  undefined8 uStack_a8;
  byte bStack_a0;
  undefined7 uStack_9f;
  undefined8 uStack_90;
  byte bStack_88;
  undefined7 uStack_87;
  undefined8 uStack_78;
  byte bStack_70;
  undefined7 uStack_6f;
  undefined8 uStack_60;
  byte bStack_50;
  undefined7 uStack_4f;
  undefined8 uStack_40;
  
  lStack_108 = param_1;
  uVar8 = (**(code **)(*param_4 + 0x18))(param_4,2);
  plStack_128 = param_4;
  uVar9 = (**(code **)(*param_4 + 0x18))(param_4,2);
  puStack_f8 = (undefined4 *)func_0x0cc41df0(0xf6ff9e0,0xf71bea0,1);
  puStack_100 = (undefined4 *)func_0x0cc41df0(0xf6ff9e0,0xf71c0a8,1);
  iVar24 = (*param_3 - uVar8) + -3;
  puVar18 = (undefined *)0x0;
  if (iVar24 <= (int)(*param_3 + uVar8 + 3)) {
    iStack_144 = 0;
    uStack_110 = (ulong)(uVar8 + 2);
    uStack_118 = (ulong)(uVar9 + 2);
    uStack_130 = (ulong)(uVar8 + 3);
    iVar21 = uVar9 + 3;
    iVar10 = param_3[1];
    iVar12 = param_3[2];
    iVar23 = -4 - uVar9;
    uStack_120 = CONCAT44(uStack_120._4_4_,iVar23);
    uStack_140 = (ulong)uVar8;
    uStack_138 = (ulong)uVar9;
    do {
      iVar25 = iVar10 + -1;
      iVar19 = iVar12;
      do {
        if ((iVar19 - (int)uStack_138) + -3 <= iVar19 + iVar21) {
          iVar19 = iVar19 + iVar23;
          do {
            iVar19 = iVar19 + 1;
            uStack_178 = CONCAT44(iVar25,iVar24);
            uStack_170 = CONCAT44(uStack_170._4_4_,iVar19);
            lVar13 = (**(code **)(*param_2 + 0x60))(param_2,&uStack_178);
            iVar10 = param_3[1];
            if (((iVar25 == iVar10 + -1) && (*(char *)(lVar13 + 5) != '\x01')) ||
               ((iVar25 == iVar10 + 4 && (*(char *)(lVar13 + 5) != '\x01')))) goto LAB_052d893a;
            if ((((iVar24 == *param_3 + (int)uStack_130 ||
                   iVar24 == (*param_3 - (int)uStack_140) + -3) ||
                 (iVar19 == (param_3[2] - (int)uStack_138) + -3 || iVar19 == param_3[2] + iVar21))
                && (iVar25 == iVar10)) &&
               (lVar13 = (**(code **)(*param_2 + 0x10))(param_2,&uStack_178),
               *(long *)(*(long *)(lVar13 + 0x68) + 200) == _DAT_0f6eaec0)) {
              uStack_188 = CONCAT44(uStack_178._4_4_ + 1,(undefined4)uStack_178);
              iStack_180 = (int)uStack_170;
              lVar13 = (**(code **)(*param_2 + 0x10))(param_2,&uStack_188);
              iStack_144 = iStack_144 +
                           (uint)(*(long *)(*(long *)(lVar13 + 0x68) + 200) == _DAT_0f6eaec0);
            }
            iVar12 = param_3[2];
          } while (iVar19 < iVar12 + iVar21);
          iVar10 = param_3[1];
          iVar19 = iVar12;
          iVar23 = (int)uStack_120;
        }
        bVar27 = iVar25 < iVar10 + 4;
        iVar25 = iVar25 + 1;
      } while (bVar27);
      iVar25 = *param_3;
      bVar27 = iVar24 < (int)uStack_130 + iVar25;
      iVar24 = iVar24 + 1;
    } while (bVar27);
    if (iStack_144 - 1U < 5) {
      iStack_144 = (iVar25 - (int)uStack_140) + -3;
      iStack_ec = iVar25 + (int)uStack_140 + 4;
      if (iStack_144 != iStack_ec) {
        uStack_c0 = (ulong)(-(int)uStack_138 - 4);
        uVar26 = uStack_140;
        piStack_c8 = param_3;
        do {
          iVar24 = iVar10 + 3;
          do {
            iVar23 = iVar12 + iVar21;
            if ((iVar12 - (int)uStack_138) + -3 <= iVar23) {
              iVar10 = (int)uStack_c0 + iVar12;
              do {
                iVar10 = iVar10 + 1;
                uStack_188 = CONCAT44(iVar24,iStack_144);
                iStack_180 = iVar10;
                if (((iStack_144 == (*param_3 - (int)uVar26) + -3) ||
                    (iVar10 == (iVar12 - (int)uStack_138) + -3)) ||
                   (((iVar24 == param_3[1] + -1 ||
                     ((iVar10 == iVar23 || (iStack_144 == *param_3 + (int)uStack_130)))) ||
                    (iVar24 == param_3[1] + 4)))) {
                  sVar7 = (**(code **)(*param_2 + 0x110))(param_2);
                  if (sVar7 <= iVar24) {
                    uStack_178 = CONCAT44(uStack_188._4_4_ + -1,(int)uStack_188);
                    uStack_170 = CONCAT44(uStack_170._4_4_,iStack_180);
                    lVar13 = (**(code **)(*param_2 + 0x60))(param_2,&uStack_178);
                    if (*(char *)(lVar13 + 5) == '\0') goto LAB_052d9170;
                  }
                  lVar13 = (**(code **)(*param_2 + 0x60))(param_2,&uStack_188);
                  if (*(char *)(lVar13 + 5) == '\x01') {
                    if ((iVar24 == param_3[1] + -1) &&
                       (iVar12 = (**(code **)(*plStack_128 + 0x18))(plStack_128,4), iVar12 != 0)) {
                      puVar2 = *(undefined8 **)(lStack_108 + 0x18);
                      if (puVar2 == (undefined8 *)0x0) {
                        lVar13 = *param_2;
                        puVar17 = puStack_100;
LAB_052d93eb:
                        uStack_158 = 1;
                        uStack_160 = 0;
                        puStack_168 = (undefined4 *)0x0;
                        uStack_170 = 0;
                        uStack_178 = 0;
                        (**(code **)(lVar13 + 0xf8))(param_2,&uStack_188,puVar17,3,0,&uStack_178);
                        uVar26 = uStack_140;
                      }
                      else {
                        uStack_120 = (**(code **)(*(long *)*puVar2 + 0x28))
                                               ((long *)*puVar2,&uStack_188);
                        lVar13 = func_0x0b5d6180(puVar2[1],&uStack_188);
                        if (lVar13 == 0) {
                          uStack_178 = CONCAT44(uStack_178._4_4_,3);
                          uStack_170 = uStack_120;
                          puStack_168 = puStack_100;
                          func_0x0b5d6330(puVar2[1],&uStack_188,&uStack_188,&uStack_178);
                          uVar26 = uStack_140;
                        }
                        else {
                          *(undefined4 *)(lVar13 + 0x20) = 3;
                          *(undefined4 **)(lVar13 + 0x30) = puStack_100;
                          uVar26 = uStack_140;
                        }
                      }
                    }
                    else {
                      puVar2 = *(undefined8 **)(lStack_108 + 0x18);
                      if (puVar2 == (undefined8 *)0x0) {
                        lVar13 = *param_2;
                        puVar17 = puStack_f8;
                        goto LAB_052d93eb;
                      }
                      uStack_120 = (**(code **)(*(long *)*puVar2 + 0x28))
                                             ((long *)*puVar2,&uStack_188);
                      lVar13 = func_0x0b5d6180(puVar2[1],&uStack_188);
                      if (lVar13 == 0) {
                        uStack_178 = CONCAT44(uStack_178._4_4_,3);
                        uStack_170 = uStack_120;
                        puStack_168 = puStack_f8;
                        func_0x0b5d6330(puVar2[1],&uStack_188,&uStack_188,&uStack_178);
                        uVar26 = uStack_140;
                        param_3 = piStack_c8;
                      }
                      else {
                        *(undefined4 *)(lVar13 + 0x20) = 3;
                        *(undefined4 **)(lVar13 + 0x30) = puStack_f8;
                        uVar26 = uStack_140;
                        param_3 = piStack_c8;
                      }
                    }
                  }
                }
                else {
LAB_052d9170:
                  puStack_168 = (undefined4 *)0x0;
                  uStack_160 = 0;
                  uStack_178 = 0;
                  uStack_170 = 0;
                  uStack_158 = 1;
                  (**(code **)(*param_2 + 0x108))(param_2,&uStack_188,&uStack_178);
                }
                iVar12 = param_3[2];
                iVar23 = iVar12 + iVar21;
              } while (iVar10 < iVar23);
              iVar10 = param_3[1];
            }
            bVar27 = iVar10 <= iVar24;
            iVar24 = iVar24 + -1;
          } while (bVar27);
          iStack_144 = iStack_144 + 1;
        } while (iStack_144 != iStack_ec);
      }
      uStack_140 = CONCAT44(uStack_140._4_4_,(int)uStack_118 * 2 + 1);
      iVar24 = (int)uStack_110 * 2 + 1;
      uStack_130 = CONCAT44(uStack_130._4_4_,iVar24);
      uVar14 = CONCAT71((uint7)(uint3)((uint)iVar24 >> 8),1);
      do {
        plVar5 = plStack_128;
        uStack_138 = CONCAT44(uStack_138._4_4_,(int)uVar14);
        iVar24 = (**(code **)(*plStack_128 + 0x18))(plStack_128,uStack_140 & 0xffffffff);
        iVar24 = iVar24 - (int)uStack_118;
        iVar10 = (**(code **)(*plVar5 + 0x18))(plVar5,uStack_130 & 0xffffffff);
        iVar10 = iVar10 - (int)uStack_110;
        iStack_180 = param_3[2] + iVar24;
        uStack_188 = CONCAT44(param_3[1],*param_3 + iVar10);
        lVar13 = (**(code **)(*param_2 + 0x10))(param_2,&uStack_188);
        if (*(long *)(*(long *)(lVar13 + 0x68) + 200) == _DAT_0f6eaec0) {
          uStack_178 = CONCAT44(uStack_188._4_4_,(int)uStack_188 + -1);
          uStack_170._0_4_ = iStack_180;
          lVar13 = (**(code **)(*param_2 + 0x60))(param_2,&uStack_178);
          bVar1 = *(byte *)(lVar13 + 5);
          uStack_178 = CONCAT44(uStack_188._4_4_,(int)uStack_188 + 1);
          uStack_170._0_4_ = iStack_180;
          lVar13 = (**(code **)(*param_2 + 0x60))(param_2,&uStack_178);
          uVar8 = bVar1 + 1;
          if (*(char *)(lVar13 + 5) == '\0') {
            uVar8 = (uint)bVar1;
          }
          uStack_170._0_4_ = iStack_180 + -1;
          uStack_178 = uStack_188;
          lVar13 = (**(code **)(*param_2 + 0x60))(param_2,&uStack_178);
          bVar1 = *(byte *)(lVar13 + 5);
          uStack_178 = uStack_188;
          uStack_170 = CONCAT44(uStack_170._4_4_,iStack_180 + 1);
          lVar13 = (**(code **)(*param_2 + 0x60))(param_2,&uStack_178);
          if ((uint)*(byte *)(lVar13 + 5) + (uint)bVar1 + uVar8 != 1) goto LAB_052d8a93;
LAB_052d8cf1:
          if (iVar24 < 1) {
            if (-1 < iVar24) goto LAB_052d8d35;
            uStack_178 = uStack_188;
            uStack_170 = CONCAT44(uStack_170._4_4_,iStack_180 + -1);
            lVar13 = (**(code **)(*param_2 + 0x10))(param_2,&uStack_178);
            bVar27 = true;
            if (*(long *)(*(long *)(lVar13 + 0x68) + 200) != _DAT_0f6eaec0) {
              cVar20 = '\0';
              goto LAB_052d8e4c;
            }
LAB_052d8d37:
            if (iVar10 < 1) {
              if (-1 < iVar10) goto LAB_052d8d85;
              uStack_178 = CONCAT44(uStack_188._4_4_,(int)uStack_188 + -1);
              uStack_170 = CONCAT44(uStack_170._4_4_,iStack_180);
              lVar13 = (**(code **)(*param_2 + 0x10))(param_2,&uStack_178);
              bVar28 = *(long *)(*(long *)(lVar13 + 0x68) + 200) != _DAT_0f6eaec0;
              cVar20 = (0 < iVar24) * '\x02';
              if (bVar28) {
                cVar20 = '\x03';
              }
              cVar6 = '\x03';
              if ((bVar27 || 0 < iVar24) || bVar28) goto LAB_052d8e4c;
LAB_052d8e3e:
              cVar20 = cVar6;
              if (0 < iVar10) {
                cVar20 = '\x01';
              }
            }
            else {
              uStack_178 = CONCAT44(uStack_188._4_4_,(int)uStack_188 + 1);
              uStack_170 = CONCAT44(uStack_170._4_4_,iStack_180);
              lVar13 = (**(code **)(*param_2 + 0x10))(param_2,&uStack_178);
              cVar20 = '\x01';
              if (*(long *)(*(long *)(lVar13 + 0x68) + 200) == _DAT_0f6eaec0) {
LAB_052d8d85:
                cVar6 = '\x02';
                if (!bVar27 && 0 >= iVar24) goto LAB_052d8e3e;
                cVar20 = (0 < iVar24) * '\x02';
              }
            }
          }
          else {
            uStack_178 = uStack_188;
            uStack_170 = CONCAT44(uStack_170._4_4_,iStack_180 + 1);
            lVar13 = (**(code **)(*param_2 + 0x10))(param_2,&uStack_178);
            cVar20 = '\x02';
            if (*(long *)(*(long *)(lVar13 + 0x68) + 200) == _DAT_0f6eaec0) {
LAB_052d8d35:
              bVar27 = false;
              goto LAB_052d8d37;
            }
          }
LAB_052d8e4c:
          lVar15 = func_0x0cc41df0(0xf6ff9e0,0xf714f88,1);
          lVar13 = *(long *)(lVar15 + 0x68);
          lVar16 = *(long *)(lVar13 + 0x1b0);
          if (lVar16 == 0) {
LAB_052d8ec7:
            lVar16 = func_0x0c6cd0e0(lVar13);
            if ((lVar16 == 0) && (lVar16 = lVar15, (*(byte *)(lVar13 + 0x135) & 8) != 0)) {
              lVar16 = *(long *)(lVar13 + 0x200);
            }
          }
          else {
            lVar22 = lVar13 + 0x1b0;
            do {
              bVar27 = *(ulong *)(lVar16 + 0x20) < _DAT_0f6ff540;
              if (!bVar27) {
                lVar22 = lVar16;
              }
              lVar16 = *(long *)(lVar16 + (ulong)bVar27 * 8);
            } while (lVar16 != 0);
            if ((lVar22 == lVar13 + 0x1b0) || (_DAT_0f6ff540 < *(ulong *)(lVar22 + 0x20)))
            goto LAB_052d8ec7;
            lVar16 = func_0x0cb8a630(lVar22 + 0x28,*(undefined2 *)(lVar15 + 0x128),cVar20,
                                     lVar13 + 0x1e8);
            if (lVar16 == 0) {
              lVar16 = lVar15;
            }
          }
          func_0x0d3df990(lStack_108,param_2,&uStack_188,lVar16);
          lVar13 = func_0x0c9d4450(param_2,&uStack_188);
          if (lVar13 != 0) {
            puVar17 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
            if (puVar17 == (undefined4 *)0x0) {
              func_0x0eec74c0(0x28,0);
            }
            uVar14 = _UNK_012086cd;
            uStack_178 = 0x29;
            uStack_170 = 0x26;
            *(undefined8 *)(puVar17 + 4) = _DAT_012086c5;
            *(undefined8 *)(puVar17 + 6) = uVar14;
            uVar4 = _UNK_012086c1;
            uVar3 = _UNK_012086bd;
            uVar11 = _UNK_012086b9;
            *puVar17 = _DAT_012086b5;
            puVar17[1] = uVar11;
            puVar17[2] = uVar3;
            puVar17[3] = uVar4;
            *(undefined8 *)((long)puVar17 + 0x1e) = 0x6e6f736a2e6e6f65;
            *(undefined1 *)((long)puVar17 + 0x26) = 0;
            puStack_168 = puVar17;
            uVar11 = (**(code **)(*plStack_128 + 0x10))();
            func_0x0cf20110(lVar13,&uStack_178,uVar11);
            if ((uStack_178 & 1) != 0) {
              func_0x0412a280(puStack_168,uStack_178 & 0xfffffffffffffffe);
            }
          }
        }
        else {
LAB_052d8a93:
          plVar5 = plStack_128;
          iVar24 = (**(code **)(*plStack_128 + 0x18))(plStack_128,uStack_140 & 0xffffffff);
          iVar24 = iVar24 - (int)uStack_118;
          iVar10 = (**(code **)(*plVar5 + 0x18))(plVar5,uStack_130 & 0xffffffff);
          iVar10 = iVar10 - (int)uStack_110;
          iStack_180 = param_3[2] + iVar24;
          uStack_188 = CONCAT44(param_3[1],*param_3 + iVar10);
          lVar13 = (**(code **)(*param_2 + 0x10))(param_2,&uStack_188);
          if (*(long *)(*(long *)(lVar13 + 0x68) + 200) == _DAT_0f6eaec0) {
            uStack_178 = CONCAT44(uStack_188._4_4_,(int)uStack_188 + -1);
            uStack_170._0_4_ = iStack_180;
            lVar13 = (**(code **)(*param_2 + 0x60))(param_2,&uStack_178);
            bVar1 = *(byte *)(lVar13 + 5);
            uStack_178 = CONCAT44(uStack_188._4_4_,(int)uStack_188 + 1);
            uStack_170._0_4_ = iStack_180;
            lVar13 = (**(code **)(*param_2 + 0x60))(param_2,&uStack_178);
            uVar8 = bVar1 + 1;
            if (*(char *)(lVar13 + 5) == '\0') {
              uVar8 = (uint)bVar1;
            }
            uStack_170._0_4_ = iStack_180 + -1;
            uStack_178 = uStack_188;
            lVar13 = (**(code **)(*param_2 + 0x60))(param_2,&uStack_178);
            bVar1 = *(byte *)(lVar13 + 5);
            uStack_178 = uStack_188;
            uStack_170 = CONCAT44(uStack_170._4_4_,iStack_180 + 1);
            lVar13 = (**(code **)(*param_2 + 0x60))(param_2,&uStack_178);
            if ((uint)*(byte *)(lVar13 + 5) + (uint)bVar1 + uVar8 == 1) goto LAB_052d8cf1;
          }
          plVar5 = plStack_128;
          iVar24 = (**(code **)(*plStack_128 + 0x18))(plStack_128,uStack_140 & 0xffffffff);
          iVar24 = iVar24 - (int)uStack_118;
          iVar10 = (**(code **)(*plVar5 + 0x18))(plVar5,uStack_130 & 0xffffffff);
          iVar10 = iVar10 - (int)uStack_110;
          iStack_180 = param_3[2] + iVar24;
          uStack_188 = CONCAT44(param_3[1],*param_3 + iVar10);
          lVar13 = (**(code **)(*param_2 + 0x10))(param_2,&uStack_188);
          if (*(long *)(*(long *)(lVar13 + 0x68) + 200) == _DAT_0f6eaec0) {
            uStack_178 = CONCAT44(uStack_188._4_4_,(int)uStack_188 + -1);
            uStack_170._0_4_ = iStack_180;
            lVar13 = (**(code **)(*param_2 + 0x60))(param_2,&uStack_178);
            bVar1 = *(byte *)(lVar13 + 5);
            uStack_178 = CONCAT44(uStack_188._4_4_,(int)uStack_188 + 1);
            uStack_170._0_4_ = iStack_180;
            lVar13 = (**(code **)(*param_2 + 0x60))(param_2,&uStack_178);
            uVar8 = bVar1 + 1;
            if (*(char *)(lVar13 + 5) == '\0') {
              uVar8 = (uint)bVar1;
            }
            uStack_170._0_4_ = iStack_180 + -1;
            uStack_178 = uStack_188;
            lVar13 = (**(code **)(*param_2 + 0x60))(param_2,&uStack_178);
            bVar1 = *(byte *)(lVar13 + 5);
            uStack_178 = uStack_188;
            uStack_170 = CONCAT44(uStack_170._4_4_,iStack_180 + 1);
            lVar13 = (**(code **)(*param_2 + 0x60))(param_2,&uStack_178);
            if ((uint)*(byte *)(lVar13 + 5) + (uint)bVar1 + uVar8 == 1) goto LAB_052d8cf1;
          }
        }
        uVar14 = 0;
      } while ((uStack_138 & 1) != 0);
      uVar14 = func_0x0cc41df0(0xf6ff9e0,0xf710430,1);
      func_0x0d3df990(lStack_108,param_2,param_3,uVar14);
      lVar13 = func_0x0c9d4450(param_2,param_3);
      puVar18 = (undefined *)CONCAT71((int7)((ulong)uVar14 >> 8),1);
      if (lVar13 != 0) {
        uVar14 = *(undefined8 *)(lVar13 + 0xd8);
        uVar8 = (**(code **)(*plStack_128 + 0x18))(plStack_128,4);
        uVar11 = 0x130c;
        if (uVar8 < 4) {
          puVar18 = &UNK_014e2250;
          uVar11 = *(undefined4 *)(&UNK_014e2250 + (ulong)uVar8 * 4);
        }
        uStack_e8 = 0;
        uStack_e0 = 0;
        uStack_d8 = 0;
        func_0x0b04d0a0(&bStack_b8,uVar11,&uStack_e8);
        func_0x0c9c5280(uVar14,&bStack_b8);
        if ((bStack_50 & 1) != 0) {
          func_0x0412a280(uStack_40,CONCAT71(uStack_4f,bStack_50) & 0xfffffffffffffffe);
        }
        if ((bStack_70 & 1) != 0) {
          func_0x0412a280(uStack_60,CONCAT71(uStack_6f,bStack_70) & 0xfffffffffffffffe);
        }
        if ((bStack_88 & 1) != 0) {
          func_0x0412a280(uStack_78,CONCAT71(uStack_87,bStack_88) & 0xfffffffffffffffe);
        }
        if ((bStack_a0 & 1) != 0) {
          func_0x0412a280(uStack_90,CONCAT71(uStack_9f,bStack_a0) & 0xfffffffffffffffe);
        }
        if ((bStack_b8 & 1) != 0) {
          func_0x0412a280(uStack_a8,CONCAT71(uStack_b7,bStack_b8) & 0xfffffffffffffffe);
        }
        if ((uStack_e8 & 1) == 0) {
          puVar18 = (undefined *)CONCAT71((int7)((ulong)puVar18 >> 8),1);
        }
        else {
          func_0x0412a280(uStack_d8,uStack_e8 & 0xfffffffffffffffe);
          puVar18 = (undefined *)CONCAT71((int7)((ulong)puVar18 >> 8),1);
        }
      }
    }
    else {
LAB_052d893a:
      puVar18 = (undefined *)0x0;
    }
  }
  return (ulong)puVar18 & 0xffffffff;
}



/* ---- referenced strings ----
 * 0x12086b5  loot_tables/chests/simple_dungeon.json
 * 0x12086c5  ts/simple_dungeon.json
 */
