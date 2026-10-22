/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2cda40 (ELF vaddr 0xd1cda40)
 * Label: string:Identifier '%s' failed validation when registering jigsaw st
 * Body:  [[0d2cda40, 0d2cdb27] [0d2cdb30, 0d2cdd35] [0d2cdd40, 0d2cdd80] [0d2cdd90, 0d2cde6d] [0d2cde70, 0d2cdf8c] [0d2cdf90, 0d2ce0b8] [0d2ce0c0, 0d2ce197] [0d2ce1a0, 0d2ce241] [0d2ce250, 0d2ce378] [0d2ce380, 0d2ce521] [0d2ce530, 0d2ce564] [0d2ce570, 0d2ce5dd] [0d2ce5e0, 0d2ce5fa] [0d2ce600, 0d2cec16] [0d2ceca0, 0d2ceccf] [0d2cecd7, 0d2cecf2]]
 * Ghidra: FUN_0d2cda40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_0d2cda40(byte *param_1,long *param_2,undefined8 param_3,undefined8 param_4,byte **param_5
                   )

{
  long *plVar1;
  long *plVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  long lVar6;
  long *plVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  char cVar13;
  int iVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long *plVar17;
  byte *pbVar18;
  undefined8 *puVar19;
  long lVar20;
  byte *pbVar21;
  byte *pbVar22;
  ulong uVar23;
  undefined8 uVar24;
  uint uVar25;
  byte *pbVar26;
  ulong uVar27;
  byte *pbVar28;
  long lVar29;
  undefined8 *puVar30;
  byte *pbVar31;
  uint uVar32;
  byte **ppbVar33;
  byte **ppbVar34;
  undefined *puVar35;
  long lVar36;
  long lVar37;
  undefined8 *puVar38;
  ulong uVar39;
  bool bVar40;
  float fVar41;
  float fVar42;
  byte *pbStack_108;
  byte *pbStack_100;
  byte *pbStack_f8;
  undefined8 uStack_f0;
  long *plStack_e8;
  undefined4 uStack_dc;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  byte *pbStack_b8;
  uint uStack_b0;
  uint uStack_ac;
  long *plStack_a8;
  long *plStack_a0;
  byte *pbStack_90;
  uint uStack_84;
  byte *pbStack_80;
  undefined *puStack_78;
  byte **ppbStack_70;
  ulong uStack_68;
  byte *pbStack_60;
  long lStack_58;
  undefined8 *puStack_50;
  byte *pbStack_48;
  byte *pbStack_40;
  byte *pbStack_38;
  
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0x80;
  param_1[0x23] = 0x3f;
  fVar41 = (float)(ulong)(param_2[1] - *param_2 >> 6);
  uVar15 = (ulong)fVar41;
  uVar15 = (long)(fVar41 - _DAT_01198778) & (long)uVar15 >> 0x3f | uVar15;
  uVar39 = 2;
  if (uVar15 != 1) {
    if ((uVar15 & uVar15 - 1) == 0) {
      uVar23 = 0;
      bVar40 = false;
      uVar39 = uVar15;
      if (uVar15 == 0) {
LAB_0d2ceadd:
        if (!bVar40) goto LAB_0d2cdaea;
        fVar41 = (float)func_0x0eee3ab0((float)*(ulong *)(param_1 + 0x18) /
                                        *(float *)(param_1 + 0x20));
        uVar15 = (long)(fVar41 - _DAT_01198778) & (long)fVar41 >> 0x3f | (long)fVar41;
        if ((uVar23 < 3) ||
           (uVar27 = uVar23 - (uVar23 >> 1 & 0x5555555555555555),
           uVar27 = (uVar27 >> 2 & 0x3333333333333333) + (uVar27 & 0x3333333333333333),
           1 < (byte)(((uVar27 >> 4) + uVar27 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
          uVar15 = func_0x0412c3f0(uVar15);
          if (uVar15 < uVar39) {
            uVar15 = uVar39;
          }
        }
        else {
          if (1 < uVar15) {
            lVar36 = 0x3f;
            if (uVar15 - 1 != 0) {
              for (; uVar15 - 1 >> lVar36 == 0; lVar36 = lVar36 + -1) {
              }
            }
            uVar15 = 1L << (-((byte)lVar36 ^ 0x3f) & 0x3f);
          }
          if (uVar15 < uVar39) {
            uVar15 = uVar39;
          }
        }
        uVar39 = uVar15;
        if (uVar23 <= uVar15) goto LAB_0d2cdaea;
      }
    }
    else {
      uVar39 = func_0x0412c3f0(uVar15,2);
      uVar23 = *(ulong *)(param_1 + 8);
      bVar40 = uVar39 < uVar23;
      if (uVar39 <= uVar23) goto LAB_0d2ceadd;
    }
  }
  func_0x0d2ea210(param_1,uVar39);
LAB_0d2cdaea:
  pbVar18 = (byte *)*param_2;
  pbVar28 = (byte *)param_2[1];
  if (pbVar18 != pbVar28) {
    pbStack_60 = param_1 + 0x10;
    uStack_f0 = param_3;
    pbStack_80 = pbVar28;
    do {
      ppbVar33 = &pbStack_108;
      cVar13 = func_0x0b5f94a0(pbVar18,0x1f,1,0);
      if (cVar13 == '\0') {
        if ((*pbVar18 & 1) == 0) {
          pbStack_108 = pbVar18 + 1;
        }
        else {
          pbStack_108 = *(byte **)(pbVar18 + 0x10);
        }
        func_0x0c9209c0(1,3,0x1f);
      }
      else {
        if (pbVar18[0x18] == 0) {
          uVar39 = (ulong)*(uint *)(pbVar18 + 0x1c);
          ppbVar34 = (byte **)CONCAT71((int7)((ulong)param_5 >> 8),pbVar18[0x24] == 1);
          uStack_dc = _DAT_011983f0;
          puVar35 = &UNK_0d2e09a0;
          uVar32 = (uint)*(ushort *)(pbVar18 + 0x20);
          uVar25 = (uint)*(ushort *)(pbVar18 + 0x22);
          if ((uint)*(ushort *)(pbVar18 + 0x22) <= (uint)*(ushort *)(pbVar18 + 0x20) * 2)
          goto LAB_0d2ce10d;
        }
        else {
          uVar39 = 0;
          uStack_dc = 0;
          puVar35 = (undefined *)0x0;
          uVar32 = 0;
          ppbVar34 = (byte **)0x0;
          uVar25 = 0;
          if ((uint)*(ushort *)(pbVar18 + 0x22) <= (uint)*(ushort *)(pbVar18 + 0x20) * 2) {
LAB_0d2ce10d:
            if ((*pbVar18 & 1) == 0) {
              pbStack_108 = pbVar18 + 1;
            }
            else {
              pbStack_108 = *(byte **)(pbVar18 + 0x10);
            }
            func_0x09e3e440(1,3,0x1f);
            plStack_a8 = (long *)0x0;
            plStack_a0 = (long *)0x0;
            goto LAB_0d2cdb57;
          }
        }
        uStack_ac = uVar25;
        puStack_d8 = (undefined8 *)0x0;
        puStack_d0 = (undefined8 *)0x0;
        puStack_c8 = (undefined8 *)0x0;
        pbVar28 = *(byte **)(pbVar18 + 0x28);
        pbVar31 = *(byte **)(pbVar18 + 0x30);
        pbStack_b8 = pbVar18;
        uStack_b0 = uVar32;
        puStack_78 = puVar35;
        ppbStack_70 = ppbVar34;
        uStack_68 = uVar39;
        if ((long)pbVar31 - (long)pbVar28 != 0) {
          uVar39 = (long)pbVar31 - (long)pbVar28 >> 5;
          if (uVar39 < 0xaaaaaaaaaaaaaab) {
            puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar39 * 0x18)
            ;
            if (puVar16 == (undefined8 *)0x0) {
              func_0x0eec74c0(uVar39 * 0x18,0);
            }
            puStack_c8 = puVar16 + uVar39 * 3;
            pbVar28 = *(byte **)(pbStack_b8 + 0x28);
            pbVar31 = *(byte **)(pbStack_b8 + 0x30);
            puStack_d0 = puVar16;
            goto LAB_0d2cdc63;
          }
LAB_0d2cec03:
          func_0x0d2e0470();
LAB_0d2cec08:
          func_0x0d2e0470();
LAB_0d2cec0d:
          uVar24 = func_0x0d2e0470();
          func_0x0d2ea150(param_1);
          uVar24 = func_0x0eee2d70(uVar24);
          func_0x0d2cd970(&pbStack_108);
          func_0x09cb07b0(&pbStack_40);
          func_0x0d2cd9a0(&puStack_d8);
          func_0x0d2ea150(param_1);
          func_0x0eee2d70(uVar24);
          pcVar8 = (code *)swi(3);
          pbVar18 = (byte *)(*pcVar8)();
          return pbVar18;
        }
LAB_0d2cdc63:
        ppbVar33 = ppbVar34;
        puStack_d8 = puStack_d0;
        pbStack_90 = pbVar31;
        if (pbVar28 != pbVar31) {
          do {
            ppbVar34 = &pbStack_108;
            cVar13 = func_0x0b5f94a0(pbVar28,0x1f,1,0);
            if (cVar13 == '\0') {
              if ((*pbVar28 & 1) == 0) {
                pbStack_108 = pbVar28 + 1;
              }
              else {
                pbStack_108 = *(byte **)(pbVar28 + 0x10);
              }
              func_0x0c9209c0(1,3,0x1f);
            }
            else {
              pbVar18 = pbVar28 + 1;
              if ((*pbVar28 & 1) != 0) {
                pbVar18 = *(byte **)(pbVar28 + 0x10);
              }
              func_0x0d330c10(ppbVar34,param_3,pbVar18);
              puVar12 = puStack_d0;
              puVar16 = puStack_d8;
              pbVar18 = pbStack_100;
              pbStack_40 = pbStack_108;
              pbStack_38 = pbStack_100;
              if (pbStack_108 != (byte *)0x0) {
                if (pbStack_100 != (byte *)0x0) {
                  LOCK();
                  *(long *)(pbStack_100 + 8) = *(long *)(pbStack_100 + 8) + 1;
                  UNLOCK();
                }
                bVar5 = pbVar28[0x18];
                uVar25 = (uint)bVar5;
                pbStack_f8 = (byte *)CONCAT44(pbStack_f8._4_4_,uVar25);
                if (puStack_c8 <= puStack_d0) {
                  pbStack_48 = pbStack_108;
                  plStack_e8 = (long *)((long)puStack_d0 - (long)puStack_d8);
                  uVar39 = ((long)plStack_e8 >> 3) * -0x5555555555555555 + 1;
                  uStack_84 = uVar25;
                  if (uVar39 < 0xaaaaaaaaaaaaaab) {
                    puStack_50 = puStack_c8;
                    lVar36 = (long)puStack_c8 - (long)puStack_d8 >> 3;
                    uVar15 = lVar36 * 0x5555555555555556;
                    if (uVar39 < uVar15) {
                      uVar39 = uVar15;
                    }
                    if (0x555555555555554 < (ulong)(lVar36 * -0x5555555555555555)) {
                      uVar39 = 0xaaaaaaaaaaaaaaa;
                    }
                    if (uVar39 < 0xaaaaaaaaaaaaaab) {
                      lStack_58 = uVar39 * 0x18;
                      puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
                      if (puVar19 == (undefined8 *)0x0) {
                        func_0x0eec74c0(lStack_58,0);
                      }
                      *(byte **)((long)puVar19 + (long)plStack_e8) = pbStack_48;
                      *(byte **)((long)(puVar19 + 1) + (long)plStack_e8) = pbVar18;
                      pbStack_108 = (byte *)0x0;
                      pbStack_100 = (byte *)0x0;
                      *(uint *)((long)(puVar19 + 2) + (long)plStack_e8) = uStack_84;
                      puVar30 = puStack_50;
                      puVar38 = puVar16;
                      if (puVar16 != puVar12) {
                        lVar36 = 0;
                        do {
                          puVar3 = (undefined4 *)((long)puVar16 + lVar36);
                          uVar9 = puVar3[1];
                          uVar10 = puVar3[2];
                          uVar11 = puVar3[3];
                          puVar4 = (undefined4 *)((long)puVar19 + lVar36);
                          *puVar4 = *puVar3;
                          puVar4[1] = uVar9;
                          puVar4[2] = uVar10;
                          puVar4[3] = uVar11;
                          *(undefined8 *)((long)puVar16 + lVar36) = 0;
                          ((undefined8 *)((long)puVar16 + lVar36))[1] = 0;
                          *(undefined4 *)((long)puVar19 + lVar36 + 0x10) =
                               *(undefined4 *)((long)puVar16 + lVar36 + 0x10);
                          lVar37 = lVar36 + 0x18;
                          lVar36 = lVar36 + 0x18;
                        } while ((undefined8 *)((long)puVar16 + lVar37) != puVar12);
                        do {
                          plVar17 = (long *)puVar16[1];
                          if (plVar17 != (long *)0x0) {
                            LOCK();
                            plVar1 = plVar17 + 1;
                            lVar36 = *plVar1;
                            *plVar1 = *plVar1 + -1;
                            UNLOCK();
                            if (lVar36 == 0) {
                              (**(code **)(*plVar17 + 0x10))(plVar17);
                              func_0x0412c2d0(plVar17);
                            }
                          }
                          puVar16 = puVar16 + 3;
                          puVar30 = puStack_c8;
                          puVar38 = puStack_d8;
                        } while (puVar16 != puVar12);
                      }
                      puStack_c8 = puVar19 + uVar39 * 3;
                      puStack_d8 = puVar19;
                      if (puVar38 != (undefined8 *)0x0) {
                        func_0x0412a280(puVar38,(long)puVar30 - (long)puVar38);
                      }
                      param_3 = uStack_f0;
                      pbVar18 = pbStack_100;
                      puStack_d0 = (undefined8 *)((long)plStack_e8 + (long)puVar19 + 0x18);
                      pbVar31 = pbStack_90;
                      if (pbStack_100 != (byte *)0x0) {
                        LOCK();
                        pbVar21 = pbStack_100 + 8;
                        lVar36 = *(long *)pbVar21;
                        *(long *)pbVar21 = *(long *)pbVar21 + -1;
                        UNLOCK();
                        if (lVar36 == 0) {
                          (**(code **)(*(long *)pbStack_100 + 0x10))(pbStack_100);
                          func_0x0412c2d0(pbVar18);
                          pbVar31 = pbStack_90;
                        }
                      }
                      goto LAB_0d2ce070;
                    }
                    FUN_04882eb0();
                  }
                  func_0x0d2e0470();
                  goto LAB_0d2cec03;
                }
                *puStack_d0 = pbStack_108;
                puStack_d0[1] = pbStack_100;
                *(uint *)(puStack_d0 + 2) = (uint)bVar5;
                puStack_d0 = puStack_d0 + 3;
                pbVar31 = pbStack_90;
              }
LAB_0d2ce070:
              pbVar18 = pbStack_38;
              ppbVar34 = ppbVar33;
              if (pbStack_38 != (byte *)0x0) {
                LOCK();
                pbVar21 = pbStack_38 + 8;
                lVar36 = *(long *)pbVar21;
                *(long *)pbVar21 = *(long *)pbVar21 + -1;
                UNLOCK();
                if (lVar36 == 0) {
                  (**(code **)(*(long *)pbStack_38 + 0x10))(pbStack_38);
                  func_0x0412c2d0(pbVar18);
                  ppbVar34 = ppbVar33;
                }
              }
            }
            pbVar28 = pbVar28 + 0x20;
            ppbVar33 = ppbVar34;
          } while (pbVar28 != pbVar31);
        }
        plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
        if (plVar17 == (long *)0x0) {
          func_0x0eec74c0(0x50,0);
        }
        puVar12 = puStack_d0;
        puVar16 = puStack_d8;
        plVar17[1] = 0;
        plVar17[2] = 0;
        *plVar17 = (long)&UNK_0f45f320;
        plStack_e8 = plVar17 + 3;
        pbStack_108 = (byte *)0x0;
        pbStack_100 = (byte *)0x0;
        pbStack_f8 = (byte *)0x0;
        lVar36 = (long)puStack_d0 - (long)puStack_d8;
        if (lVar36 == 0) {
          *plStack_e8 = 0;
          plVar17[4] = 0;
          plVar17[5] = 0;
          *(undefined4 *)(plVar17 + 6) = uStack_dc;
          *(int *)((long)plVar17 + 0x34) = (int)uStack_68;
          plVar17[7] = (long)puStack_78;
          *(uint *)(plVar17 + 8) = uStack_b0;
          *(uint *)((long)plVar17 + 0x44) = uStack_ac;
          *(char *)(plVar17 + 9) = (char)ppbStack_70;
          *(undefined2 *)((long)plVar17 + 0x49) = 0;
          *(undefined1 *)((long)plVar17 + 0x4b) = 0;
          *(undefined4 *)((long)plVar17 + 0x4c) = 0;
          param_3 = uStack_f0;
        }
        else {
          if (0xaaaaaaaaaaaaaaa < (ulong)((lVar36 >> 3) * -0x5555555555555555)) goto LAB_0d2cec0d;
          pbVar18 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar36);
          if (pbVar18 == (byte *)0x0) {
            func_0x0eec74c0(lVar36,0);
          }
          pbStack_f8 = pbVar18 + lVar36;
          lVar37 = 0;
          lVar36 = 0x18;
          do {
            lVar29 = lVar36;
            lVar36 = *(long *)((long)puVar16 + lVar37 + 8);
            uVar24 = ((undefined8 *)((long)puVar16 + lVar37))[1];
            *(undefined8 *)(pbVar18 + lVar37) = *(undefined8 *)((long)puVar16 + lVar37);
            *(undefined8 *)(pbVar18 + lVar37 + 8) = uVar24;
            if (lVar36 != 0) {
              LOCK();
              plVar1 = (long *)(lVar36 + 8);
              *plVar1 = *plVar1 + 1;
              UNLOCK();
            }
            *(undefined4 *)(pbVar18 + lVar37 + 0x10) =
                 *(undefined4 *)((long)puVar16 + lVar37 + 0x10);
            lVar20 = lVar37 + 0x18;
            lVar37 = lVar37 + 0x18;
            lVar36 = lVar29 + 0x18;
          } while ((undefined8 *)((long)puVar16 + lVar20) != puVar12);
          pbStack_100 = pbVar18 + lVar37;
          *plStack_e8 = 0;
          plStack_e8[1] = 0;
          plStack_e8[2] = 0;
          pbStack_108 = pbVar18;
          if (0xaaaaaaaaaaaaaaa < (ulong)((lVar37 >> 3) * -0x5555555555555555)) goto LAB_0d2cec08;
          lVar36 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar37);
          if (lVar36 == 0) {
            func_0x0eec74c0(lVar37,0);
          }
          param_3 = uStack_f0;
          plVar17[3] = lVar36;
          plVar17[4] = lVar36;
          plVar17[5] = lVar37 + lVar36;
          lVar20 = 0;
          do {
            lVar6 = *(long *)(pbVar18 + lVar20 + 8);
            uVar24 = *(undefined8 *)(pbVar18 + lVar20 + 8);
            *(undefined8 *)(lVar36 + lVar20) = *(undefined8 *)(pbVar18 + lVar20);
            ((undefined8 *)(lVar36 + lVar20))[1] = uVar24;
            if (lVar6 != 0) {
              LOCK();
              plVar1 = (long *)(lVar6 + 8);
              *plVar1 = *plVar1 + 1;
              UNLOCK();
            }
            *(undefined4 *)(lVar36 + 0x10 + lVar20) = *(undefined4 *)(pbVar18 + lVar20 + 0x10);
            lVar20 = lVar20 + 0x18;
          } while (lVar37 != lVar20);
          plVar17[4] = lVar36 + lVar20;
          *(undefined4 *)(plVar17 + 6) = uStack_dc;
          *(int *)((long)plVar17 + 0x34) = (int)uStack_68;
          plVar17[7] = (long)puStack_78;
          *(uint *)(plVar17 + 8) = uStack_b0;
          *(uint *)((long)plVar17 + 0x44) = uStack_ac;
          *(char *)(plVar17 + 9) = (char)ppbStack_70;
          *(undefined2 *)((long)plVar17 + 0x49) = 0;
          *(undefined1 *)((long)plVar17 + 0x4b) = 0;
          *(undefined4 *)((long)plVar17 + 0x4c) = 0;
          if (pbVar18 != (byte *)0x0) {
            do {
              plVar1 = *(long **)(pbVar18 + lVar29 + -0x10);
              if (plVar1 != (long *)0x0) {
                LOCK();
                plVar7 = plVar1 + 1;
                lVar36 = *plVar7;
                *plVar7 = *plVar7 + -1;
                UNLOCK();
                if (lVar36 == 0) {
                  (**(code **)(*plVar1 + 0x10))(plVar1);
                  func_0x0412c2d0(plVar1);
                }
              }
              lVar29 = lVar29 + -0x18;
            } while (lVar29 != 0);
            func_0x0412a280(pbStack_108,(long)pbStack_f8 - (long)pbStack_108);
            puVar16 = puStack_d8;
          }
        }
        plStack_a8 = plStack_e8;
        plStack_a0 = plVar17;
        puVar12 = puVar16;
        puVar19 = puStack_d0;
        if (puVar16 == (undefined8 *)0x0) {
LAB_0d2ce3f9:
          pbVar28 = pbStack_b8;
          pbVar18 = pbStack_b8 + 1;
          bVar40 = (*pbStack_b8 & 1) == 0;
          pbVar31 = *(byte **)(pbStack_b8 + 0x10);
          if (bVar40) {
            pbVar31 = pbVar18;
          }
          uVar39 = (ulong)(*pbStack_b8 >> 1);
          if (!bVar40) {
            uVar39 = *(ulong *)(pbStack_b8 + 8);
          }
          plStack_e8 = plStack_a8;
          pbVar21 = (byte *)func_0x04883620(&pbStack_108,pbVar31,uVar39);
          pbVar31 = *(byte **)(param_1 + 8);
          if (pbVar31 != (byte *)0x0) {
            uVar39 = (long)pbVar31 - ((ulong)pbVar31 >> 1 & 0x5555555555555555);
            uVar39 = (uVar39 >> 2 & 0x3333333333333333) + (uVar39 & 0x3333333333333333);
            uVar39 = ((uVar39 >> 4) + uVar39 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
            if (uVar39 >> 0x38 < 2) {
              pbVar28 = (byte *)((ulong)(pbVar31 + -1) & (ulong)pbVar21);
            }
            else {
              pbVar28 = pbVar21;
              if (pbVar31 <= pbVar21) {
                if (((ulong)pbVar21 | (ulong)pbVar31) >> 0x20 == 0) {
                  pbVar28 = (byte *)(((ulong)pbVar21 & 0xffffffff) % ((ulong)pbVar31 & 0xffffffff));
                }
                else {
                  pbVar28 = (byte *)((ulong)pbVar21 % (ulong)pbVar31);
                }
              }
            }
            puVar16 = *(undefined8 **)(*(long *)param_1 + (long)pbVar28 * 8);
            if ((puVar16 != (undefined8 *)0x0) &&
               (pbVar22 = (byte *)*puVar16, pbVar22 != (byte *)0x0)) {
              if ((*pbStack_b8 & 1) == 0) {
                uVar15 = (ulong)(*pbStack_b8 >> 1);
              }
              else {
                uVar15 = *(ulong *)(pbStack_b8 + 8);
                pbVar18 = *(byte **)(pbStack_b8 + 0x10);
              }
              if ((byte)(uVar39 >> 0x38) < 2) {
                pbVar26 = pbVar31 + -1;
                pbStack_90 = pbVar26;
                do {
                  if (*(byte **)(pbVar22 + 8) == pbVar21) {
                    bVar5 = pbVar22[0x10];
                    if ((bVar5 & 1) == 0) {
                      uVar39 = (ulong)(bVar5 >> 1);
                    }
                    else {
                      uVar39 = *(ulong *)(pbVar22 + 0x18);
                    }
                    if (uVar39 == uVar15) {
                      if ((bVar5 & 1) == 0) {
                        pbVar26 = pbVar22 + 0x11;
                      }
                      else {
                        pbVar26 = *(byte **)(pbVar22 + 0x20);
                      }
                      iVar14 = func_0x0eee3000(pbVar26,pbVar18,uVar15);
                      pbVar26 = pbStack_90;
                      param_3 = uStack_f0;
                      if (iVar14 == 0) goto LAB_0d2ce943;
                    }
                  }
                  else {
                    param_3 = uStack_f0;
                    if ((byte *)((ulong)*(byte **)(pbVar22 + 8) & (ulong)pbVar26) != pbVar28) break;
                  }
                  pbVar22 = *(byte **)pbVar22;
                  param_3 = uStack_f0;
                } while (pbVar22 != (byte *)0x0);
              }
              else {
                do {
                  pbVar26 = *(byte **)(pbVar22 + 8);
                  if (pbVar26 == pbVar21) {
                    bVar5 = pbVar22[0x10];
                    if ((bVar5 & 1) == 0) {
                      uVar39 = (ulong)(bVar5 >> 1);
                    }
                    else {
                      uVar39 = *(ulong *)(pbVar22 + 0x18);
                    }
                    if (uVar39 == uVar15) {
                      if ((bVar5 & 1) == 0) {
                        pbVar26 = pbVar22 + 0x11;
                      }
                      else {
                        pbVar26 = *(byte **)(pbVar22 + 0x20);
                      }
                      iVar14 = func_0x0eee3000(pbVar26,pbVar18,uVar15);
                      param_3 = uStack_f0;
                      if (iVar14 == 0) goto LAB_0d2ce943;
                    }
                  }
                  else {
                    if (pbVar31 <= pbVar26) {
                      if (((ulong)pbVar26 | (ulong)pbVar31) >> 0x20 == 0) {
                        pbVar26 = (byte *)(((ulong)pbVar26 & 0xffffffff) %
                                          ((ulong)pbVar31 & 0xffffffff));
                      }
                      else {
                        pbVar26 = (byte *)((ulong)pbVar26 % (ulong)pbVar31);
                      }
                    }
                    param_3 = uStack_f0;
                    if (pbVar26 != pbVar28) break;
                  }
                  pbVar22 = *(byte **)pbVar22;
                  param_3 = uStack_f0;
                } while (pbVar22 != (byte *)0x0);
              }
            }
          }
          pbVar22 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
          if (pbVar22 == (byte *)0x0) {
            func_0x0eec74c0(0x38,0);
          }
          pbStack_f8 = (byte *)0x0;
          pbVar22[0] = 0;
          pbVar22[1] = 0;
          pbVar22[2] = 0;
          pbVar22[3] = 0;
          pbVar22[4] = 0;
          pbVar22[5] = 0;
          pbVar22[6] = 0;
          pbVar22[7] = 0;
          *(byte **)(pbVar22 + 8) = pbVar21;
          pbStack_108 = pbVar22;
          pbStack_100 = param_1;
          if ((*pbStack_b8 & 1) == 0) {
            *(undefined8 *)(pbVar22 + 0x20) = *(undefined8 *)(pbStack_b8 + 0x10);
            uVar24 = *(undefined8 *)(pbStack_b8 + 8);
            *(undefined8 *)(pbVar22 + 0x10) = *(undefined8 *)pbStack_b8;
            *(undefined8 *)(pbVar22 + 0x18) = uVar24;
          }
          else {
            FUN_0412e5e0(pbVar22 + 0x10,*(undefined8 *)(pbStack_b8 + 0x10),
                         *(undefined8 *)(pbStack_b8 + 8));
          }
          pbVar22[0x28] = 0;
          pbVar22[0x29] = 0;
          pbVar22[0x2a] = 0;
          pbVar22[0x2b] = 0;
          pbVar22[0x2c] = 0;
          pbVar22[0x2d] = 0;
          pbVar22[0x2e] = 0;
          pbVar22[0x2f] = 0;
          pbVar22[0x30] = 0;
          pbVar22[0x31] = 0;
          pbVar22[0x32] = 0;
          pbVar22[0x33] = 0;
          pbVar22[0x34] = 0;
          pbVar22[0x35] = 0;
          pbVar22[0x36] = 0;
          pbVar22[0x37] = 0;
          pbStack_f8 = (byte *)CONCAT71(pbStack_f8._1_7_,1);
          if ((long)pbVar31 < 0) {
            fVar42 = (float)pbVar31;
            fVar41 = *(float *)(param_1 + 0x20);
            if (pbVar31 != (byte *)0x0) goto LAB_0d2ce73b;
LAB_0d2ce74c:
            uVar39 = 1;
            if ((byte *)0x2 < pbVar31) {
              uVar39 = (ulong)(((ulong)pbVar31 & (ulong)(pbVar31 + -1)) != 0);
            }
            uVar39 = (long)pbVar31 * 2 | uVar39;
            fVar41 = (float)func_0x0eee3ab0((float)(*(long *)(param_1 + 0x18) + 1) / fVar41);
            uVar15 = (long)(fVar41 - _DAT_01198778) & (long)fVar41 >> 0x3f | (long)fVar41;
            if (uVar15 < uVar39) {
              uVar15 = uVar39;
            }
            uVar39 = 2;
            if ((uVar15 == 1) || (uVar39 = uVar15, (uVar15 & uVar15 - 1) == 0)) {
              uVar15 = *(ulong *)(param_1 + 8);
              bVar40 = uVar39 < uVar15;
              if (uVar39 <= uVar15) goto LAB_0d2ce7e3;
LAB_0d2ce7bd:
              func_0x0d2ea210(param_1,uVar39);
            }
            else {
              uVar39 = func_0x0412c3f0();
              uVar15 = *(ulong *)(param_1 + 8);
              bVar40 = uVar39 < uVar15;
              if (uVar15 < uVar39) goto LAB_0d2ce7bd;
LAB_0d2ce7e3:
              if (bVar40) {
                fVar41 = (float)func_0x0eee3ab0((float)*(ulong *)(param_1 + 0x18) /
                                                *(float *)(param_1 + 0x20));
                uVar23 = (long)(fVar41 - _DAT_01198778) & (long)fVar41 >> 0x3f | (long)fVar41;
                if ((uVar15 < 3) ||
                   (uVar27 = uVar15 - (uVar15 >> 1 & 0x5555555555555555),
                   uVar27 = (uVar27 >> 2 & 0x3333333333333333) + (uVar27 & 0x3333333333333333),
                   1 < (byte)(((uVar27 >> 4) + uVar27 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                             0x38))) {
                  uVar23 = func_0x0412c3f0(uVar23);
                }
                else if (1 < uVar23) {
                  lVar36 = 0x3f;
                  if (uVar23 - 1 != 0) {
                    for (; uVar23 - 1 >> lVar36 == 0; lVar36 = lVar36 + -1) {
                    }
                  }
                  uVar23 = 1L << (-((byte)lVar36 ^ 0x3f) & 0x3f);
                }
                if (uVar39 <= uVar23) {
                  uVar39 = uVar23;
                }
                if (uVar39 < uVar15) goto LAB_0d2ce7bd;
              }
            }
            pbVar31 = *(byte **)(param_1 + 8);
            if (((ulong)pbVar31 & (ulong)(pbVar31 + -1)) == 0) {
              pbVar28 = (byte *)((ulong)pbVar21 & (ulong)(pbVar31 + -1));
            }
            else {
              pbVar28 = pbVar21;
              if (pbVar31 <= pbVar21) {
                if (((ulong)pbVar21 | (ulong)pbVar31) >> 0x20 == 0) {
                  pbVar28 = (byte *)(((ulong)pbVar21 & 0xffffffff) % ((ulong)pbVar31 & 0xffffffff));
                }
                else {
                  pbVar28 = (byte *)((ulong)pbVar21 % (ulong)pbVar31);
                }
              }
            }
          }
          else {
            fVar42 = (float)(long)pbVar31;
            fVar41 = *(float *)(param_1 + 0x20);
            if (pbVar31 == (byte *)0x0) goto LAB_0d2ce74c;
LAB_0d2ce73b:
            if (fVar42 * fVar41 < (float)(*(long *)(param_1 + 0x18) + 1)) goto LAB_0d2ce74c;
          }
          lVar36 = *(long *)param_1;
          puVar16 = *(undefined8 **)(lVar36 + (long)pbVar28 * 8);
          if (puVar16 == (undefined8 *)0x0) {
            *(undefined8 *)pbVar22 = *(undefined8 *)pbStack_60;
            *(byte **)pbStack_60 = pbVar22;
            *(byte **)(lVar36 + (long)pbVar28 * 8) = pbStack_60;
            if (*(long *)pbVar22 != 0) {
              pbVar18 = *(byte **)(*(long *)pbVar22 + 8);
              if (((ulong)pbVar31 & (ulong)(pbVar31 + -1)) == 0) {
                *(byte **)(lVar36 + ((ulong)pbVar18 & (ulong)(pbVar31 + -1)) * 8) = pbVar22;
              }
              else {
                if (pbVar31 <= pbVar18) {
                  if (((ulong)pbVar18 | (ulong)pbVar31) >> 0x20 == 0) {
                    *(byte **)(lVar36 + (((ulong)pbVar18 & 0xffffffff) %
                                        ((ulong)pbVar31 & 0xffffffff)) * 8) = pbVar22;
                    goto LAB_0d2ce93b;
                  }
                  pbVar18 = (byte *)((ulong)pbVar18 % (ulong)pbVar31);
                }
                *(byte **)(lVar36 + (long)pbVar18 * 8) = pbVar22;
              }
            }
          }
          else {
            *(undefined8 *)pbVar22 = *puVar16;
            *puVar16 = pbVar22;
          }
LAB_0d2ce93b:
          *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
LAB_0d2ce943:
          pbVar28 = pbStack_80;
          plVar17 = plStack_a0;
          pbVar18 = pbStack_b8;
          plStack_a8 = (long *)0x0;
          plStack_a0 = (long *)0x0;
          *(long **)(pbVar22 + 0x28) = plStack_e8;
          plVar7 = *(long **)(pbVar22 + 0x30);
          *(long **)(pbVar22 + 0x30) = plVar17;
          ppbVar33 = ppbVar34;
          plVar1 = plStack_a8;
          plVar17 = plStack_a0;
          if (plVar7 != (long *)0x0) {
            LOCK();
            plVar2 = plVar7 + 1;
            lVar36 = *plVar2;
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (lVar36 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
              func_0x0412c2d0(plVar7);
              ppbVar33 = ppbVar34;
              plVar1 = plStack_a8;
              plVar17 = plStack_a0;
            }
          }
        }
        else {
          for (; puVar16 != puVar19; puVar19 = puVar19 + -3) {
            plVar17 = (long *)puVar19[-2];
            if (plVar17 != (long *)0x0) {
              LOCK();
              plVar1 = plVar17 + 1;
              lVar36 = *plVar1;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (lVar36 == 0) {
                (**(code **)(*plVar17 + 0x10))(plVar17);
                func_0x0412c2d0(plVar17);
              }
            }
            puVar12 = puStack_d8;
          }
          puStack_d0 = puVar16;
          func_0x0412a280(puVar12,(long)puStack_c8 - (long)puVar12);
          ppbVar33 = ppbVar34;
          plStack_e8 = plStack_a8;
          pbVar18 = pbStack_b8;
          plVar1 = (long *)0;
          plVar17 = plStack_a0;
          pbVar28 = pbStack_80;
          if (plStack_a8 != (long *)0x0) goto LAB_0d2ce3f9;
        }
        plStack_a8 = plVar1;
        plStack_a0 = plVar17;
        if (plVar17 != (long *)0x0) {
          LOCK();
          plVar1 = plVar17 + 1;
          lVar36 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar36 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
            func_0x0412c2d0(plVar17);
          }
        }
      }
LAB_0d2cdb57:
      pbVar18 = pbVar18 + 0x40;
      param_5 = ppbVar33;
    } while (pbVar18 != pbVar28);
  }
  return param_1;
}


