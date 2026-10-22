/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x9dc9740 (ELF vaddr 0x9cc9740)
 * Label: caller-of-callee
 * Body:  [[09dc9740, 09dc98bd] [09dc98c0, 09dc99bb] [09dc99c0, 09dc9cd3] [09dc9ce0, 09dc9d32] [09dc9d40, 09dca633] [09dca659, 09dca67a] [09dca6b9, 09dca71d]]
 * Ghidra: FUN_09dc9740
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_09dc9740(byte *param_1,ulong *param_2,ulong param_3,undefined4 param_4,byte *param_5)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 *puVar3;
  long lVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  ulong uVar8;
  byte *pbVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  byte *pbVar14;
  undefined8 uVar15;
  byte *pbVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  byte *unaff_R13;
  byte *pbVar21;
  byte *unaff_R15;
  bool bVar22;
  float fVar23;
  float fVar24;
  byte *pbStack_160;
  undefined8 uStack_158;
  byte *pbStack_150;
  long lStack_148;
  byte *pbStack_140;
  ulong uStack_138;
  byte *pbStack_130;
  byte *pbStack_128;
  byte *pbStack_120;
  long lStack_118;
  byte *pbStack_110;
  byte *pbStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long *plStack_f0;
  undefined8 auStack_e8 [15];
  long lStack_70;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined4 uStack_38;
  
  pbVar16 = *(byte **)(param_1 + 0x68);
  uStack_138 = param_3;
  pbStack_130 = param_1;
  if (pbVar16 != (byte *)0x0) {
    lVar10 = *(long *)(param_1 + 0x60);
    unaff_R13 = (byte *)*param_2;
    uVar8 = (long)pbVar16 - ((ulong)pbVar16 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 >> 2 & 0x3333333333333333) + (uVar8 & 0x3333333333333333);
    uVar8 = ((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar8 >> 0x38 < 2) {
      pbVar21 = (byte *)((ulong)(pbVar16 + -1) & (ulong)unaff_R13);
      puVar3 = *(undefined8 **)(lVar10 + (long)pbVar21 * 8);
    }
    else {
      pbVar21 = unaff_R13;
      if (pbVar16 <= unaff_R13) {
        if (((ulong)unaff_R13 | (ulong)pbVar16) >> 0x20 == 0) {
          pbVar21 = (byte *)(((ulong)unaff_R13 & 0xffffffff) % ((ulong)pbVar16 & 0xffffffff));
          puVar3 = *(undefined8 **)(lVar10 + (long)pbVar21 * 8);
          goto joined_r0x09dc9a2d;
        }
        pbVar21 = (byte *)((ulong)unaff_R13 % (ulong)pbVar16);
      }
      puVar3 = *(undefined8 **)(lVar10 + (long)pbVar21 * 8);
    }
joined_r0x09dc9a2d:
    if ((puVar3 != (undefined8 *)0x0) && (unaff_R15 = (byte *)*puVar3, unaff_R15 != (byte *)0x0)) {
      pbStack_140 = (byte *)((long)param_2 + 9);
      if ((byte)(uVar8 >> 0x38) < 2) {
        do {
          if (*(byte **)(unaff_R15 + 8) == unaff_R13) {
            if (*(byte **)(unaff_R15 + 0x10) == unaff_R13) {
              pbVar9 = unaff_R15 + 0x10;
              if ((*(ulong **)(unaff_R15 + 0x30) == param_2) && ((byte *)param_2[4] == pbVar9))
              goto LAB_09dc9dff;
              bVar2 = unaff_R15[0x18];
              if ((bVar2 & 1) == 0) {
                uVar8 = (ulong)(bVar2 >> 1);
                uVar18 = (ulong)(byte)param_2[1];
                if (((byte)param_2[1] & 1) != 0) goto LAB_09dc99da;
LAB_09dc99b0:
                if (uVar8 != uVar18 >> 1) goto LAB_09dc995f;
              }
              else {
                uVar8 = *(ulong *)(unaff_R15 + 0x20);
                uVar18 = (ulong)(byte)param_2[1];
                if (((byte)param_2[1] & 1) == 0) goto LAB_09dc99b0;
LAB_09dc99da:
                if (uVar8 != param_2[2]) goto LAB_09dc995f;
              }
              if ((bVar2 & 1) == 0) {
                pbVar1 = unaff_R15 + 0x19;
              }
              else {
                pbVar1 = *(byte **)(unaff_R15 + 0x28);
              }
              pbVar14 = pbStack_140;
              if ((uVar18 & 1) != 0) {
                pbVar14 = (byte *)param_2[3];
              }
              iVar7 = func_0x0eee3000(pbVar1,pbVar14);
              if (iVar7 == 0) goto LAB_09dc9df6;
            }
LAB_09dc995f:
            unaff_R15[0x30] = 0;
            unaff_R15[0x31] = 0;
            unaff_R15[0x32] = 0;
            unaff_R15[0x33] = 0;
            unaff_R15[0x34] = 0;
            unaff_R15[0x35] = 0;
            unaff_R15[0x36] = 0;
            unaff_R15[0x37] = 0;
          }
          else if ((byte *)((ulong)*(byte **)(unaff_R15 + 8) & (ulong)(pbVar16 + -1)) != pbVar21)
          break;
          unaff_R15 = *(byte **)unaff_R15;
        } while (unaff_R15 != (byte *)0x0);
      }
      else {
        do {
          pbVar9 = *(byte **)(unaff_R15 + 8);
          if (pbVar9 == unaff_R13) {
            if (*(byte **)(unaff_R15 + 0x10) == unaff_R13) {
              pbVar9 = unaff_R15 + 0x10;
              if ((*(ulong **)(unaff_R15 + 0x30) == param_2) && ((byte *)param_2[4] == pbVar9))
              goto LAB_09dc9dff;
              bVar2 = unaff_R15[0x18];
              if ((bVar2 & 1) == 0) {
                uVar8 = (ulong)(bVar2 >> 1);
                uVar18 = (ulong)(byte)param_2[1];
                if (((byte)param_2[1] & 1) != 0) goto LAB_09dc98f3;
LAB_09dc98b2:
                if (uVar8 != uVar18 >> 1) goto LAB_09dc9861;
              }
              else {
                uVar8 = *(ulong *)(unaff_R15 + 0x20);
                uVar18 = (ulong)(byte)param_2[1];
                if (((byte)param_2[1] & 1) == 0) goto LAB_09dc98b2;
LAB_09dc98f3:
                if (uVar8 != param_2[2]) goto LAB_09dc9861;
              }
              if ((bVar2 & 1) == 0) {
                pbVar1 = unaff_R15 + 0x19;
              }
              else {
                pbVar1 = *(byte **)(unaff_R15 + 0x28);
              }
              pbVar14 = pbStack_140;
              if ((uVar18 & 1) != 0) {
                pbVar14 = (byte *)param_2[3];
              }
              iVar7 = func_0x0eee3000(pbVar1,pbVar14);
              if (iVar7 == 0) goto LAB_09dc9df6;
            }
LAB_09dc9861:
            unaff_R15[0x30] = 0;
            unaff_R15[0x31] = 0;
            unaff_R15[0x32] = 0;
            unaff_R15[0x33] = 0;
            unaff_R15[0x34] = 0;
            unaff_R15[0x35] = 0;
            unaff_R15[0x36] = 0;
            unaff_R15[0x37] = 0;
          }
          else {
            if (pbVar16 <= pbVar9) {
              if (((ulong)pbVar9 | (ulong)pbVar16) >> 0x20 == 0) {
                if ((byte *)(((ulong)pbVar9 & 0xffffffff) % ((ulong)pbVar16 & 0xffffffff)) ==
                    pbVar21) goto LAB_09dc9869;
                break;
              }
              pbVar9 = (byte *)((ulong)pbVar9 % (ulong)pbVar16);
            }
            if (pbVar9 != pbVar21) break;
          }
LAB_09dc9869:
          unaff_R15 = *(byte **)unaff_R15;
        } while (unaff_R15 != (byte *)0x0);
      }
    }
  }
  func_0x09daa450(auStack_e8,*(undefined8 *)(pbStack_130 + 0x10),param_4);
  pbVar16 = (byte *)((long)param_2 + 9);
  pbVar21 = pbVar16;
  if ((param_2[1] & 1) != 0) {
    pbVar21 = (byte *)param_2[3];
  }
  pbVar9 = (byte *)func_0x0eee2e90(pbVar21);
  if (pbVar9 < (byte *)0xfffffffffffffff8) {
    if (pbVar9 < (byte *)0x17) {
      uStack_158 = (byte *)CONCAT71(uStack_158._1_7_,(char)pbVar9 * '\x02');
      lVar10 = (long)&uStack_158 + 1;
      if (pbVar9 != (byte *)0x0) goto LAB_09dc9adf;
    }
    else {
      uVar8 = 0x1a;
      if (((ulong)pbVar9 | 7) != 0x17) {
        uVar8 = ((ulong)pbVar9 | 7) + 1;
      }
      lVar10 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar8);
      if (lVar10 == 0) {
        func_0x0eec74c0(uVar8,0);
      }
      uStack_158 = (byte *)(uVar8 | 1);
      pbStack_150 = pbVar9;
      lStack_148 = lVar10;
LAB_09dc9adf:
      func_0x0eee2ee0(lVar10,pbVar21,pbVar9);
    }
    pbVar9[lVar10] = 0;
    cVar6 = func_0x09d82660(auStack_e8,&uStack_158);
    pbVar21 = pbStack_130;
    if (((ulong)uStack_158 & 1) != 0) {
      thunk_FUN_0ee326a0(lStack_148,(ulong)uStack_158 & 0xfffffffffffffffe);
    }
    if (((cVar6 != '\0') && (lStack_70 != 0)) &&
       (func_0x09d81070(&pbStack_128,auStack_e8[0],lStack_70,uStack_138,uStack_38,auStack_68,
                        auStack_50), pbStack_128 != (byte *)0x0)) {
      pbStack_160 = pbStack_128;
      pbVar1 = pbVar21 + 0x60;
      uVar8 = *param_2;
      uVar18 = *(ulong *)(pbVar21 + 0x68);
      pbVar9 = pbStack_128;
      if (uVar18 != 0) {
        uVar11 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
        uVar11 = (uVar11 >> 2 & 0x3333333333333333) + (uVar11 & 0x3333333333333333);
        uVar11 = ((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar11 >> 0x38 < 2) {
          uVar19 = uVar18 - 1 & uVar8;
        }
        else {
          uVar19 = uVar8;
          if (uVar18 <= uVar8) {
            if ((uVar8 | uVar18) >> 0x20 == 0) {
              uVar19 = (uVar8 & 0xffffffff) % (uVar18 & 0xffffffff);
            }
            else {
              uVar19 = uVar8 % uVar18;
            }
          }
        }
        plVar17 = *(long **)(*(long *)pbVar1 + uVar19 * 8);
        uStack_138 = uVar19;
        if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
          if ((byte)(uVar11 >> 0x38) < 2) {
            pbVar21 = (byte *)(uVar18 - 1);
            pbStack_140 = pbVar21;
            do {
              if (plVar17[1] == uVar8) {
                if (plVar17[2] == uVar8) {
                  pbVar14 = (byte *)(plVar17 + 2);
                  if (((ulong *)plVar17[6] == param_2) && ((byte *)param_2[4] == pbVar14))
                  goto LAB_09dca548;
                  bVar2 = *(byte *)(plVar17 + 3);
                  if ((bVar2 & 1) == 0) {
                    uVar11 = (ulong)(bVar2 >> 1);
                    uVar13 = (ulong)(byte)param_2[1];
                    if (((byte)param_2[1] & 1) != 0) goto LAB_09dc9fbd;
LAB_09dc9f99:
                    if (uVar11 != uVar13 >> 1) goto LAB_09dc9f49;
                  }
                  else {
                    uVar11 = plVar17[4];
                    uVar13 = (ulong)(byte)param_2[1];
                    if (((byte)param_2[1] & 1) == 0) goto LAB_09dc9f99;
LAB_09dc9fbd:
                    if (uVar11 != param_2[2]) goto LAB_09dc9f49;
                  }
                  if ((bVar2 & 1) == 0) {
                    lVar10 = (long)plVar17 + 0x19;
                  }
                  else {
                    lVar10 = plVar17[5];
                  }
                  pbVar21 = pbVar16;
                  if ((uVar13 & 1) != 0) {
                    pbVar21 = (byte *)param_2[3];
                  }
                  iVar7 = func_0x0eee3000(lVar10,pbVar21);
                  uVar19 = uStack_138;
                  pbVar21 = pbStack_140;
                  if (iVar7 == 0) goto LAB_09dca53f;
                }
LAB_09dc9f49:
                plVar17[6] = 0;
              }
              else if ((plVar17[1] & (ulong)pbVar21) != uVar19) break;
              plVar17 = (long *)*plVar17;
            } while (plVar17 != (long *)0x0);
          }
          else {
            do {
              uVar11 = plVar17[1];
              if (uVar11 == uVar8) {
                if (plVar17[2] == uVar8) {
                  if (((ulong *)plVar17[6] == param_2) &&
                     ((byte *)param_2[4] == (byte *)(plVar17 + 2))) goto LAB_09dca548;
                  bVar2 = *(byte *)(plVar17 + 3);
                  if ((bVar2 & 1) == 0) {
                    uVar11 = (ulong)(bVar2 >> 1);
                    uVar13 = (ulong)(byte)param_2[1];
                    if (((byte)param_2[1] & 1) != 0) goto LAB_09dc9ee7;
LAB_09dc9eaa:
                    if (uVar11 != uVar13 >> 1) goto LAB_09dc9e5a;
                  }
                  else {
                    uVar11 = plVar17[4];
                    uVar13 = (ulong)(byte)param_2[1];
                    if (((byte)param_2[1] & 1) == 0) goto LAB_09dc9eaa;
LAB_09dc9ee7:
                    if (uVar11 != param_2[2]) goto LAB_09dc9e5a;
                  }
                  if ((bVar2 & 1) == 0) {
                    lVar10 = (long)plVar17 + 0x19;
                  }
                  else {
                    lVar10 = plVar17[5];
                  }
                  pbVar21 = pbVar16;
                  if ((uVar13 & 1) != 0) {
                    pbVar21 = (byte *)param_2[3];
                  }
                  pbStack_140 = (byte *)(plVar17 + 2);
                  iVar7 = func_0x0eee3000(lVar10,pbVar21);
                  pbVar14 = pbStack_140;
                  uVar19 = uStack_138;
                  if (iVar7 == 0) goto LAB_09dca53f;
                }
LAB_09dc9e5a:
                plVar17[6] = 0;
              }
              else {
                if (uVar18 <= uVar11) {
                  if ((uVar11 | uVar18) >> 0x20 == 0) {
                    if ((uVar11 & 0xffffffff) % (uVar18 & 0xffffffff) == uVar19) goto LAB_09dc9e62;
                    break;
                  }
                  uVar11 = uVar11 % uVar18;
                }
                if (uVar11 != uVar19) break;
              }
LAB_09dc9e62:
              plVar17 = (long *)*plVar17;
            } while (plVar17 != (long *)0x0);
          }
        }
      }
      pbVar21 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (pbVar21 == (byte *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
      lStack_148 = 0;
      pbVar21[0] = 0;
      pbVar21[1] = 0;
      pbVar21[2] = 0;
      pbVar21[3] = 0;
      pbVar21[4] = 0;
      pbVar21[5] = 0;
      pbVar21[6] = 0;
      pbVar21[7] = 0;
      *(ulong *)(pbVar21 + 8) = uVar8;
      pbVar21[0x10] = 0;
      pbVar21[0x11] = 0;
      pbVar21[0x12] = 0;
      pbVar21[0x13] = 0;
      pbVar21[0x14] = 0;
      pbVar21[0x15] = 0;
      pbVar21[0x16] = 0;
      pbVar21[0x17] = 0;
      pbVar21[0x18] = 0;
      pbVar21[0x19] = 0;
      pbVar21[0x1a] = 0;
      pbVar21[0x1b] = 0;
      pbVar21[0x1c] = 0;
      pbVar21[0x1d] = 0;
      pbVar21[0x1e] = 0;
      pbVar21[0x1f] = 0;
      pbVar21[0x20] = 0;
      pbVar21[0x21] = 0;
      pbVar21[0x22] = 0;
      pbVar21[0x23] = 0;
      pbVar21[0x24] = 0;
      pbVar21[0x25] = 0;
      pbVar21[0x26] = 0;
      pbVar21[0x27] = 0;
      pbVar21[0x28] = 0;
      pbVar21[0x29] = 0;
      pbVar21[0x2a] = 0;
      pbVar21[0x2b] = 0;
      pbVar21[0x2c] = 0;
      pbVar21[0x2d] = 0;
      pbVar21[0x2e] = 0;
      pbVar21[0x2f] = 0;
      pbVar21[0x30] = 0;
      pbVar21[0x31] = 0;
      pbVar21[0x32] = 0;
      pbVar21[0x33] = 0;
      pbVar21[0x34] = 0;
      pbVar21[0x35] = 0;
      pbVar21[0x36] = 0;
      pbVar21[0x37] = 0;
      uStack_158 = pbVar21;
      pbStack_150 = pbVar1;
      if ((ulong *)(pbVar21 + 0x10) != param_2) {
        if ((param_2[1] & 1) == 0) {
          *(ulong *)(pbVar21 + 0x28) = param_2[3];
          uVar11 = param_2[2];
          *(ulong *)(pbVar21 + 0x18) = param_2[1];
          *(ulong *)(pbVar21 + 0x20) = uVar11;
        }
        else {
          func_0x04885070(pbVar21 + 0x18,param_2[3],param_2[2]);
        }
      }
      unaff_R13 = pbStack_130;
      *(ulong *)(pbVar21 + 0x10) = *param_2;
      *(byte **)(pbVar21 + 0x38) = pbStack_128;
      lStack_148 = CONCAT71(lStack_148._1_7_,1);
      if ((long)uVar18 < 0) {
        fVar24 = (float)uVar18;
        fVar23 = *(float *)(pbStack_130 + 0x80);
        if (uVar18 != 0) goto LAB_09dca10c;
LAB_09dca11d:
        uVar11 = 1;
        if (2 < uVar18) {
          uVar11 = (ulong)((uVar18 & uVar18 - 1) != 0);
        }
        uVar11 = uVar11 | uVar18 * 2;
        fVar23 = (float)ceilf((float)(*(long *)(pbStack_130 + 0x78) + 1) / fVar23);
        uVar18 = (long)(fVar23 - _DAT_01198778) & (long)fVar23 >> 0x3f | (long)fVar23;
        if (uVar18 < uVar11) {
          uVar18 = uVar11;
        }
        uVar11 = 2;
        if ((uVar18 == 1) || (uVar11 = uVar18, (uVar18 & uVar18 - 1) == 0)) {
          uVar18 = *(ulong *)(unaff_R13 + 0x68);
          bVar22 = uVar11 < uVar18;
          if (uVar11 <= uVar18) goto LAB_09dca28d;
LAB_09dca199:
          if (uVar11 >> 0x3d != 0) {
LAB_09dca5e4:
            uVar15 = func_0x04882eb0();
            func_0x041084d6(&DAT_0f5ea4a0);
            func_0x09d4a790(auStack_e8);
            uVar15 = func_0x0eee2d70(uVar15);
            if ((*unaff_R13 & 1) != 0) {
              thunk_FUN_0ee326a0(*(undefined8 *)(pbVar21 + 0x28),
                                 *(ulong *)(pbVar21 + 0x18) & 0xfffffffffffffffe);
            }
            func_0x09dff440(&uStack_158);
            (**(code **)(*(long *)pbStack_160 + 8))();
            func_0x09d4a790(auStack_e8);
            uVar15 = func_0x0eee2d70(uVar15);
            func_0x09d4a790(auStack_e8);
            uVar15 = func_0x0eee2d70(uVar15);
            if (((ulong)uStack_158 & 1) != 0) {
              thunk_FUN_0ee326a0(lStack_148,(ulong)uStack_158 & 0xfffffffffffffffe);
              func_0x09d4a790(auStack_e8);
              uVar15 = func_0x0eee2d70(uVar15);
            }
            func_0x09d4a790(auStack_e8);
            func_0x0eee2d70(uVar15);
            pcVar5 = (code *)swi(3);
            pbVar16 = (byte *)(*pcVar5)();
            return pbVar16;
          }
          lVar10 = uVar11 * 8;
          lVar12 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar10);
          if (lVar12 == 0) {
            func_0x0eec74c0(lVar10,0);
          }
          lVar4 = *(long *)pbVar1;
          *(long *)pbVar1 = lVar12;
          if (lVar4 != 0) {
            thunk_FUN_0ee326a0(lVar4,*(long *)(unaff_R13 + 0x68) << 3);
            lVar12 = *(long *)(unaff_R13 + 0x60);
          }
          *(ulong *)(unaff_R13 + 0x68) = uVar11;
          func_0x0eee2dd0(lVar12,0,lVar10);
          plVar17 = *(long **)(unaff_R13 + 0x70);
          if (plVar17 != (long *)0x0) {
            uVar19 = plVar17[1];
            uVar18 = uVar11 - 1;
            if ((uVar11 & uVar18) == 0) {
              *(byte **)(lVar12 + (uVar19 & uVar18) * 8) = unaff_R13 + 0x70;
              uVar11 = uVar19 & uVar18;
              while (plVar20 = plVar17, plVar17 = (long *)*plVar20, plVar17 != (long *)0x0) {
                uVar19 = plVar17[1] & uVar18;
                if (uVar19 != uVar11) {
                  if (*(long *)(lVar12 + uVar19 * 8) == 0) {
                    *(long **)(lVar12 + uVar19 * 8) = plVar20;
                    uVar11 = uVar19;
                  }
                  else {
                    *plVar20 = *plVar17;
                    *plVar17 = **(undefined8 **)(lVar12 + uVar19 * 8);
                    **(long **)(lVar12 + uVar19 * 8) = (long)plVar17;
                    plVar17 = plVar20;
                  }
                }
              }
            }
            else {
              if (uVar11 <= uVar19) {
                if ((uVar19 | uVar11) >> 0x20 == 0) {
                  uVar19 = (uVar19 & 0xffffffff) % (uVar11 & 0xffffffff);
                }
                else {
                  uVar19 = uVar19 % uVar11;
                }
              }
              *(byte **)(lVar12 + uVar19 * 8) = unaff_R13 + 0x70;
              plVar20 = (long *)*plVar17;
              while (plVar20 != (long *)0x0) {
                uVar18 = plVar20[1];
                if (uVar11 <= uVar18) {
                  if ((uVar18 | uVar11) >> 0x20 == 0) {
                    uVar18 = (uVar18 & 0xffffffff) % (uVar11 & 0xffffffff);
                  }
                  else {
                    uVar18 = uVar18 % uVar11;
                  }
                }
                if (uVar18 != uVar19) {
                  if (*(long *)(lVar12 + uVar18 * 8) == 0) {
                    *(long **)(lVar12 + uVar18 * 8) = plVar17;
                    uVar19 = uVar18;
                  }
                  else {
                    *plVar17 = *plVar20;
                    *plVar20 = **(long **)(lVar12 + uVar18 * 8);
                    **(undefined8 **)(lVar12 + uVar18 * 8) = plVar20;
                    plVar20 = plVar17;
                  }
                }
                plVar17 = plVar20;
                plVar20 = (long *)*plVar17;
              }
            }
          }
        }
        else {
          uVar11 = func_0x0412c3f0();
          uVar18 = *(ulong *)(unaff_R13 + 0x68);
          bVar22 = uVar11 < uVar18;
          if (uVar18 < uVar11) goto LAB_09dca199;
LAB_09dca28d:
          if (bVar22) {
            fVar23 = (float)ceilf((float)*(ulong *)(unaff_R13 + 0x78) / *(float *)(unaff_R13 + 0x80)
                                 );
            uVar19 = (long)(fVar23 - _DAT_01198778) & (long)fVar23 >> 0x3f | (long)fVar23;
            if ((uVar18 < 3) ||
               (uVar13 = uVar18 - (uVar18 >> 1 & 0x5555555555555555),
               uVar13 = (uVar13 >> 2 & 0x3333333333333333) + (uVar13 & 0x3333333333333333),
               1 < (byte)(((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))
               ) {
              uVar19 = func_0x0412c3f0(uVar19);
            }
            else if (1 < uVar19) {
              lVar10 = 0x3f;
              if (uVar19 - 1 != 0) {
                for (; uVar19 - 1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
                }
              }
              uVar19 = 1L << (-((byte)lVar10 ^ 0x3f) & 0x3f);
            }
            if (uVar19 < uVar11) {
              uVar19 = uVar11;
            }
            if (uVar19 < uVar18) {
              uVar11 = uVar19;
              if (uVar19 != 0) goto LAB_09dca199;
              pbVar1[0] = 0;
              pbVar1[1] = 0;
              pbVar1[2] = 0;
              pbVar1[3] = 0;
              pbVar1[4] = 0;
              pbVar1[5] = 0;
              pbVar1[6] = 0;
              pbVar1[7] = 0;
              if (*(long *)pbVar1 != 0) {
                thunk_FUN_0ee326a0(*(long *)pbVar1,*(long *)(unaff_R13 + 0x68) << 3);
              }
              unaff_R13[0x68] = 0;
              unaff_R13[0x69] = 0;
              unaff_R13[0x6a] = 0;
              unaff_R13[0x6b] = 0;
              unaff_R13[0x6c] = 0;
              unaff_R13[0x6d] = 0;
              unaff_R13[0x6e] = 0;
              unaff_R13[0x6f] = 0;
            }
          }
        }
        uVar18 = *(ulong *)(unaff_R13 + 0x68);
        if ((uVar18 & uVar18 - 1) == 0) {
          uVar11 = uVar8 & uVar18 - 1;
        }
        else {
          uVar11 = uVar8;
          if (uVar18 <= uVar8) {
            if ((uVar8 | uVar18) >> 0x20 == 0) {
              uVar11 = (uVar8 & 0xffffffff) % (uVar18 & 0xffffffff);
            }
            else {
              uVar11 = uVar8 % uVar18;
            }
          }
        }
      }
      else {
        fVar24 = (float)(long)uVar18;
        fVar23 = *(float *)(pbStack_130 + 0x80);
        if (uVar18 == 0) goto LAB_09dca11d;
LAB_09dca10c:
        uVar11 = uStack_138;
        if (fVar24 * fVar23 < (float)(*(long *)(pbStack_130 + 0x78) + 1)) goto LAB_09dca11d;
      }
      lVar10 = *(long *)pbVar1;
      puVar3 = *(undefined8 **)(lVar10 + uVar11 * 8);
      if (puVar3 == (undefined8 *)0x0) {
        *(undefined8 *)pbVar21 = *(undefined8 *)(unaff_R13 + 0x70);
        *(byte **)(unaff_R13 + 0x70) = pbVar21;
        *(byte **)(lVar10 + uVar11 * 8) = unaff_R13 + 0x70;
        if (*(long *)pbVar21 != 0) {
          uVar8 = *(ulong *)(*(long *)pbVar21 + 8);
          if ((uVar18 & uVar18 - 1) == 0) {
            *(byte **)(lVar10 + (uVar8 & uVar18 - 1) * 8) = pbVar21;
            *(long *)(unaff_R13 + 0x78) = *(long *)(unaff_R13 + 0x78) + 1;
          }
          else {
            if (uVar18 <= uVar8) {
              if ((uVar8 | uVar18) >> 0x20 == 0) {
                *(byte **)(lVar10 + ((uVar8 & 0xffffffff) % (uVar18 & 0xffffffff)) * 8) = pbVar21;
                *(long *)(unaff_R13 + 0x78) = *(long *)(unaff_R13 + 0x78) + 1;
                goto LAB_09dc9dae;
              }
              uVar8 = uVar8 % uVar18;
            }
            *(byte **)(lVar10 + uVar8 * 8) = pbVar21;
            *(long *)(unaff_R13 + 0x78) = *(long *)(unaff_R13 + 0x78) + 1;
          }
          goto LAB_09dc9dae;
        }
      }
      else {
        *(undefined8 *)pbVar21 = *puVar3;
        *puVar3 = pbVar21;
      }
      *(long *)(unaff_R13 + 0x78) = *(long *)(unaff_R13 + 0x78) + 1;
      goto LAB_09dc9dae;
    }
    if (*(long *)(param_5 + 0x20) != 0) {
      unaff_R13 = pbVar9;
      unaff_R15 = param_5;
      if (DAT_0f5ea4a0 == '\0') goto LAB_09dca58f;
      goto LAB_09dc9c31;
    }
  }
  else {
    func_0x04882e30();
LAB_09dca58f:
    iVar7 = func_0x04108328(&DAT_0f5ea4a0);
    if (iVar7 != 0) {
      func_0x08b670e0(&DAT_0f5ea138);
      func_0x0eee2f40(&UNK_08b673f0,&DAT_0f5ea138,0xf53dab8);
      func_0x0410844d(&DAT_0f5ea4a0);
      unaff_R15 = param_5;
    }
LAB_09dc9c31:
    func_0x09d828b0(&pbStack_110,auStack_e8);
    func_0x09e24960(&pbStack_128,&pbStack_110);
    uStack_f8 = 0;
    plStack_f0 = (long *)0x0;
    (**(code **)(_DAT_0f5ea138 + 0x88))
              (&uStack_158,&DAT_0f5ea138,auStack_68,&pbStack_128,&uStack_f8);
    plVar17 = plStack_f0;
    if (plStack_f0 != (long *)0x0) {
      LOCK();
      plVar20 = plStack_f0 + 1;
      lVar10 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
        func_0x0412c2d0(plVar17);
      }
    }
    pbVar16 = pbStack_128;
    if (pbStack_128 != (byte *)0x0) {
      while (pbVar21 = pbStack_120, pbVar16 != pbVar21) {
        if ((pbVar21[-0x18] & 1) != 0) {
          thunk_FUN_0ee326a0(*(undefined8 *)(pbVar21 + -8),
                             *(ulong *)(pbVar21 + -0x18) & 0xfffffffffffffffe);
        }
        pbStack_120 = pbVar21 + -0x18;
      }
      pbStack_120 = pbVar16;
      thunk_FUN_0ee326a0(pbStack_128,lStack_118 - (long)pbStack_128);
    }
    pbVar16 = pbStack_110;
    if (pbStack_110 != (byte *)0x0) {
      while (pbVar21 = pbStack_108, pbVar16 != pbVar21) {
        if ((pbVar21[-0x18] & 1) != 0) {
          thunk_FUN_0ee326a0(*(undefined8 *)(pbVar21 + -8),
                             *(ulong *)(pbVar21 + -0x18) & 0xfffffffffffffffe);
        }
        pbStack_108 = pbVar21 + -0x18;
      }
      pbStack_108 = pbVar16;
      thunk_FUN_0ee326a0(pbStack_110,lStack_100 - (long)pbStack_110);
    }
    plVar17 = *(long **)(unaff_R15 + 0x20);
    if (plVar17 == (long *)0x0) {
      FUN_04891200();
      pbStack_160 = param_5;
      goto LAB_09dca5e4;
    }
    (**(code **)(*plVar17 + 0x30))(plVar17,&uStack_158);
    if (((ulong)uStack_158 & 1) != 0) {
      thunk_FUN_0ee326a0(lStack_148,(ulong)uStack_158 & 0xfffffffffffffffe);
    }
  }
  pbVar9 = (byte *)0x0;
LAB_09dc9dae:
  func_0x09d4a790(auStack_e8);
  return pbVar9;
LAB_09dca53f:
  plVar17[6] = (long)param_2;
  param_2[4] = (ulong)pbVar14;
LAB_09dca548:
  (**(code **)(*(long *)pbStack_128 + 8))(pbStack_128);
  goto LAB_09dc9dae;
LAB_09dc9df6:
  *(ulong **)(unaff_R15 + 0x30) = param_2;
  param_2[4] = (ulong)pbVar9;
LAB_09dc9dff:
  return *(byte **)(unaff_R15 + 0x38);
}


