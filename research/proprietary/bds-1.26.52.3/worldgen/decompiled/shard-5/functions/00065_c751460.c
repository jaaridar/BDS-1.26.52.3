/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc851460 (ELF vaddr 0xc751460)
 * Label: FixedBiomeSource::vslot4
 * Body:  [[0c851460, 0c8515a0] [0cae88c0, 0cae89e7] [0cae89f0, 0cae8af1] [0cae8b00, 0cae8b4e] [0cae8b50, 0cae8bd3] [0cae8be0, 0cae8c41] [0cae8c50, 0cae8c99] [0cae8ca0, 0cae8d01] [0cae8d10, 0cae8d50] [0cae8d60, 0cae8d81] [0cae8d90, 0cae8db8] [0cae8dc0, 0cae8dce] [0cae8dd0, 0cae8f12] [0cae8f20, 0cae8f4d] [0cae8f50, 0cae9029] [0cae9030, 0cae905c]]
 * Ghidra: wg_FixedBiomeSource__vslot4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_FixedBiomeSource__vslot4(long param_1,long param_2)

{
  long lVar1;
  ushort uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long *extraout_RDX;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  undefined4 uVar13;
  undefined1 auVar14 [16];
  float fVar15;
  ushort uStack_8a;
  long lStack_88;
  ulong uStack_80;
  long *plStack_78;
  long lStack_70;
  undefined4 uStack_68;
  long *plStack_60;
  ulong uStack_58;
  long alStack_50 [5];
  
  plVar7 = *(long **)(param_1 + 8);
  if (*(char *)(param_2 + 0x110b) == '\x01') {
    func_0x0cada270(param_2 + 0x120);
  }
  else {
    auVar14 = pshuflw(ZEXT416(*(uint *)(plVar7 + 0x2d)),ZEXT416(*(uint *)(plVar7 + 0x2d)),0);
    uVar13 = auVar14._0_4_;
    *(undefined4 *)(param_2 + 0x120) = uVar13;
    *(undefined4 *)(param_2 + 0x124) = uVar13;
    *(undefined4 *)(param_2 + 0x128) = uVar13;
    *(undefined4 *)(param_2 + 300) = uVar13;
    *(undefined4 *)(param_2 + 0x130) = uVar13;
    *(undefined4 *)(param_2 + 0x134) = uVar13;
    *(undefined4 *)(param_2 + 0x138) = uVar13;
    *(undefined4 *)(param_2 + 0x13c) = uVar13;
    *(undefined4 *)(param_2 + 0x140) = uVar13;
    *(undefined4 *)(param_2 + 0x144) = uVar13;
    *(undefined4 *)(param_2 + 0x148) = uVar13;
    *(undefined4 *)(param_2 + 0x14c) = uVar13;
    *(undefined4 *)(param_2 + 0x150) = uVar13;
    *(undefined4 *)(param_2 + 0x154) = uVar13;
    *(undefined4 *)(param_2 + 0x158) = uVar13;
    *(undefined4 *)(param_2 + 0x15c) = uVar13;
    *(undefined4 *)(param_2 + 0x160) = uVar13;
    *(undefined4 *)(param_2 + 0x164) = uVar13;
    *(undefined4 *)(param_2 + 0x168) = uVar13;
    *(undefined4 *)(param_2 + 0x16c) = uVar13;
    *(undefined4 *)(param_2 + 0x170) = uVar13;
    *(undefined4 *)(param_2 + 0x174) = uVar13;
    *(undefined4 *)(param_2 + 0x178) = uVar13;
    *(undefined4 *)(param_2 + 0x17c) = uVar13;
    *(undefined4 *)(param_2 + 0x180) = uVar13;
    *(undefined4 *)(param_2 + 0x184) = uVar13;
    *(undefined4 *)(param_2 + 0x188) = uVar13;
    *(undefined4 *)(param_2 + 0x18c) = uVar13;
    *(undefined4 *)(param_2 + 400) = uVar13;
    *(undefined4 *)(param_2 + 0x194) = uVar13;
    *(undefined4 *)(param_2 + 0x198) = uVar13;
    *(undefined4 *)(param_2 + 0x19c) = uVar13;
    *(undefined4 *)(param_2 + 0x1a0) = uVar13;
    *(undefined4 *)(param_2 + 0x1a4) = uVar13;
    *(undefined4 *)(param_2 + 0x1a8) = uVar13;
    *(undefined4 *)(param_2 + 0x1ac) = uVar13;
    *(undefined4 *)(param_2 + 0x1b0) = uVar13;
    *(undefined4 *)(param_2 + 0x1b4) = uVar13;
    *(undefined4 *)(param_2 + 0x1b8) = uVar13;
    *(undefined4 *)(param_2 + 0x1bc) = uVar13;
    *(undefined4 *)(param_2 + 0x1c0) = uVar13;
    *(undefined4 *)(param_2 + 0x1c4) = uVar13;
    *(undefined4 *)(param_2 + 0x1c8) = uVar13;
    *(undefined4 *)(param_2 + 0x1cc) = uVar13;
    *(undefined4 *)(param_2 + 0x1d0) = uVar13;
    *(undefined4 *)(param_2 + 0x1d4) = uVar13;
    *(undefined4 *)(param_2 + 0x1d8) = uVar13;
    *(undefined4 *)(param_2 + 0x1dc) = uVar13;
    *(undefined4 *)(param_2 + 0x1e0) = uVar13;
    *(undefined4 *)(param_2 + 0x1e4) = uVar13;
    *(undefined4 *)(param_2 + 0x1e8) = uVar13;
    *(undefined4 *)(param_2 + 0x1ec) = uVar13;
    *(undefined4 *)(param_2 + 0x1f0) = uVar13;
    *(undefined4 *)(param_2 + 500) = uVar13;
    *(undefined4 *)(param_2 + 0x1f8) = uVar13;
    *(undefined4 *)(param_2 + 0x1fc) = uVar13;
    *(undefined4 *)(param_2 + 0x200) = uVar13;
    *(undefined4 *)(param_2 + 0x204) = uVar13;
    *(undefined4 *)(param_2 + 0x208) = uVar13;
    *(undefined4 *)(param_2 + 0x20c) = uVar13;
    *(undefined4 *)(param_2 + 0x210) = uVar13;
    *(undefined4 *)(param_2 + 0x214) = uVar13;
    *(undefined4 *)(param_2 + 0x218) = uVar13;
    *(undefined4 *)(param_2 + 0x21c) = uVar13;
    *(undefined4 *)(param_2 + 0x220) = uVar13;
    *(undefined4 *)(param_2 + 0x224) = uVar13;
    *(undefined4 *)(param_2 + 0x228) = uVar13;
    *(undefined4 *)(param_2 + 0x22c) = uVar13;
    *(undefined4 *)(param_2 + 0x230) = uVar13;
    *(undefined4 *)(param_2 + 0x234) = uVar13;
    *(undefined4 *)(param_2 + 0x238) = uVar13;
    *(undefined4 *)(param_2 + 0x23c) = uVar13;
    *(undefined4 *)(param_2 + 0x240) = uVar13;
    *(undefined4 *)(param_2 + 0x244) = uVar13;
    *(undefined4 *)(param_2 + 0x248) = uVar13;
    *(undefined4 *)(param_2 + 0x24c) = uVar13;
    *(undefined4 *)(param_2 + 0x250) = uVar13;
    *(undefined4 *)(param_2 + 0x254) = uVar13;
    *(undefined4 *)(param_2 + 600) = uVar13;
    *(undefined4 *)(param_2 + 0x25c) = uVar13;
    *(undefined4 *)(param_2 + 0x260) = uVar13;
    *(undefined4 *)(param_2 + 0x264) = uVar13;
    *(undefined4 *)(param_2 + 0x268) = uVar13;
    *(undefined4 *)(param_2 + 0x26c) = uVar13;
    *(undefined4 *)(param_2 + 0x270) = uVar13;
    *(undefined4 *)(param_2 + 0x274) = uVar13;
    *(undefined4 *)(param_2 + 0x278) = uVar13;
    *(undefined4 *)(param_2 + 0x27c) = uVar13;
    *(undefined4 *)(param_2 + 0x280) = uVar13;
    *(undefined4 *)(param_2 + 0x284) = uVar13;
    *(undefined4 *)(param_2 + 0x288) = uVar13;
    *(undefined4 *)(param_2 + 0x28c) = uVar13;
    *(undefined4 *)(param_2 + 0x290) = uVar13;
    *(undefined4 *)(param_2 + 0x294) = uVar13;
    *(undefined4 *)(param_2 + 0x298) = uVar13;
    *(undefined4 *)(param_2 + 0x29c) = uVar13;
    *(undefined4 *)(param_2 + 0x2a0) = uVar13;
    *(undefined4 *)(param_2 + 0x2a4) = uVar13;
    *(undefined4 *)(param_2 + 0x2a8) = uVar13;
    *(undefined4 *)(param_2 + 0x2ac) = uVar13;
    *(undefined4 *)(param_2 + 0x2b0) = uVar13;
    *(undefined4 *)(param_2 + 0x2b4) = uVar13;
    *(undefined4 *)(param_2 + 0x2b8) = uVar13;
    *(undefined4 *)(param_2 + 700) = uVar13;
    *(undefined4 *)(param_2 + 0x2c0) = uVar13;
    *(undefined4 *)(param_2 + 0x2c4) = uVar13;
    *(undefined4 *)(param_2 + 0x2c8) = uVar13;
    *(undefined4 *)(param_2 + 0x2cc) = uVar13;
    *(undefined4 *)(param_2 + 0x2d0) = uVar13;
    *(undefined4 *)(param_2 + 0x2d4) = uVar13;
    *(undefined4 *)(param_2 + 0x2d8) = uVar13;
    *(undefined4 *)(param_2 + 0x2dc) = uVar13;
    *(undefined4 *)(param_2 + 0x2e0) = uVar13;
    *(undefined4 *)(param_2 + 0x2e4) = uVar13;
    *(undefined4 *)(param_2 + 0x2e8) = uVar13;
    *(undefined4 *)(param_2 + 0x2ec) = uVar13;
    *(undefined4 *)(param_2 + 0x2f0) = uVar13;
    *(undefined4 *)(param_2 + 0x2f4) = uVar13;
    *(undefined4 *)(param_2 + 0x2f8) = uVar13;
    *(undefined4 *)(param_2 + 0x2fc) = uVar13;
    *(undefined4 *)(param_2 + 0x300) = uVar13;
    *(undefined4 *)(param_2 + 0x304) = uVar13;
    *(undefined4 *)(param_2 + 0x308) = uVar13;
    *(undefined4 *)(param_2 + 0x30c) = uVar13;
    *(undefined4 *)(param_2 + 0x310) = uVar13;
    *(undefined4 *)(param_2 + 0x314) = uVar13;
    *(undefined4 *)(param_2 + 0x318) = uVar13;
    *(undefined4 *)(param_2 + 0x31c) = uVar13;
  }
  lStack_88 = *(long *)(param_2 + 0xfe0);
  *(undefined8 *)(param_2 + 0xfe0) = 0;
  uVar8 = *(ulong *)(param_2 + 0xfe8);
  *(undefined8 *)(param_2 + 0xfe8) = 0;
  plStack_78 = *(long **)(param_2 + 0xff0);
  lStack_70 = *(long *)(param_2 + 0xff8);
  uStack_68 = *(undefined4 *)(param_2 + 0x1000);
  if (lStack_70 != 0) {
    plVar7 = (long *)(param_2 + 0xff0);
    uVar3 = plStack_78[1];
    if ((uVar8 & uVar8 - 1) == 0) {
      uVar3 = uVar3 & uVar8 - 1;
    }
    else if (uVar8 <= uVar3) {
      if ((uVar3 | uVar8) >> 0x20 == 0) {
        uVar3 = (uVar3 & 0xffffffff) % (uVar8 & 0xffffffff);
      }
      else {
        uVar3 = uVar3 % uVar8;
      }
    }
    *(long ***)(lStack_88 + uVar3 * 8) = &plStack_78;
    *plVar7 = 0;
    *(undefined8 *)(param_2 + 0xff8) = 0;
  }
  lVar1 = param_2 + 0xfe0;
  uStack_80 = uVar8;
  if (*(char *)(param_2 + 0x110b) != '\x01') {
    lVar4 = (**(code **)(**(long **)(param_2 + 0x28) + 0x2b0))();
    plVar10 = *(long **)(param_2 + 0x30);
    uVar2 = (**(code **)(*plVar10 + 0xd0))();
    plVar9 = *(long **)(lVar4 + 0x380);
    plVar6 = *(long **)(lVar4 + 0x388);
    uVar3 = 0;
    if ((long)plVar6 - (long)plVar9 != 0) {
      plVar7 = plVar6;
      uVar3 = (long)plVar6 - (long)plVar9 >> 3;
      do {
        while( true ) {
          uVar8 = uVar3 >> 1;
          plVar10 = plVar9 + uVar8;
          if (*(ushort *)(plVar9[uVar8] + 0x168) < uVar2) break;
          if (*(ushort *)(plVar9[uVar8] + 0x168) <= uVar2) goto LAB_0cae8c20;
          plVar7 = plVar10;
          uVar3 = uVar8;
          if (uVar8 == 0) goto LAB_0cae8c1b;
        }
        plVar9 = plVar10 + 1;
        uVar3 = ~uVar8 + uVar3;
        uVar8 = 0;
        plVar10 = plVar9;
      } while (uVar3 != 0);
    }
LAB_0cae8c1b:
    do {
      uVar2 = func_0x04890760();
      plVar9 = extraout_RDX;
LAB_0cae8c20:
      if (uVar3 != 1) {
        do {
          uVar11 = uVar8 >> 1;
          if (*(ushort *)(plVar9[uVar11] + 0x168) < uVar2) {
            plVar9 = plVar9 + uVar11 + 1;
            uVar11 = ~uVar11 + uVar8;
          }
          uVar3 = 0;
          uVar8 = uVar11;
        } while (uVar11 != 0);
      }
      plVar10 = plVar10 + 1;
      lVar4 = (long)plVar7 - (long)plVar10;
      if (lVar4 != 0) {
        plVar7 = plVar10;
        uVar8 = lVar4 >> 3;
        do {
          uVar11 = uVar8 >> 1;
          uVar3 = plVar7[uVar11];
          if (*(ushort *)(uVar3 + 0x168) <= uVar2) {
            plVar7 = plVar7 + uVar11 + 1;
            uVar11 = ~uVar11 + uVar8;
          }
          plVar10 = (long *)0x0;
          uVar8 = uVar11;
        } while (uVar11 != 0);
      }
      uVar8 = 0;
    } while (((plVar9 == plVar7) || (plVar9 == plVar6)) || (lVar4 = *plVar9, lVar4 == 0));
    lVar12 = 0;
LAB_0cae8cc6:
    uVar2 = *(ushort *)(param_2 + 0x120 + lVar12 * 2);
    lVar5 = (**(code **)(**(long **)(param_2 + 0x28) + 0x2b0))();
    plVar7 = *(long **)(lVar5 + 0x380);
    plVar10 = *(long **)(lVar5 + 0x388);
    if ((long)plVar10 - (long)plVar7 != 0) {
      plVar9 = plVar10;
      uVar8 = (long)plVar10 - (long)plVar7 >> 3;
LAB_0cae8d29:
      do {
        uVar3 = uVar8 >> 1;
        plVar6 = plVar7 + uVar3;
        if (*(ushort *)(plVar7[uVar3] + 0x168) < uVar2) goto LAB_0cae8d10;
        if (*(ushort *)(plVar7[uVar3] + 0x168) <= uVar2) {
          if (uVar8 != 1) {
            do {
              uVar8 = uVar3 >> 1;
              if (*(ushort *)(plVar7[uVar8] + 0x168) < uVar2) {
                plVar7 = plVar7 + uVar8 + 1;
                uVar8 = ~uVar8 + uVar3;
              }
              uVar3 = uVar8;
            } while (uVar8 != 0);
          }
          lVar5 = (long)plVar9 - (long)(plVar6 + 1);
          if (lVar5 != 0) {
            plVar9 = plVar6 + 1;
            uVar8 = lVar5 >> 3;
            do {
              uVar3 = uVar8 >> 1;
              if (*(ushort *)(plVar9[uVar3] + 0x168) <= uVar2) {
                plVar9 = plVar9 + uVar3 + 1;
                uVar3 = ~uVar3 + uVar8;
              }
              uVar8 = uVar3;
            } while (uVar3 != 0);
          }
          if ((plVar7 == plVar9) || (plVar7 == plVar10)) break;
          lVar5 = *plVar7;
          goto LAB_0cae8dd2;
        }
        plVar9 = plVar6;
        uVar8 = uVar3;
      } while (uVar3 != 0);
    }
LAB_0cae8dd0:
    lVar5 = 0;
LAB_0cae8dd2:
    if (lVar5 == 0) {
      lVar5 = lVar4;
    }
    if ((_DAT_011983fc < *(float *)(lVar5 + 0x2c)) &&
       (*(float *)(lVar5 + 8) + _DAT_01198c3c < _DAT_01198788)) {
      uVar2 = *(ushort *)(lVar5 + 0x168);
      if (uStack_80 != 0) {
        uVar3 = (ulong)uVar2;
        uVar8 = uStack_80 - (uStack_80 >> 1 & 0x5555555555555555);
        uVar8 = (uVar8 >> 2 & 0x3333333333333333) + (uVar8 & 0x3333333333333333);
        uVar8 = ((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar8 >> 0x38 < 2) {
          uVar11 = (ulong)((uint)uVar2 & (int)uStack_80 - 1U);
        }
        else {
          uVar11 = uVar3;
          if (uStack_80 <= uVar3) {
            uVar11 = (ulong)(ushort)(uVar2 % (ushort)uStack_80);
          }
        }
        plVar7 = *(long **)(lStack_88 + uVar11 * 8);
        if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
          if ((byte)(uVar8 >> 0x38) < 2) {
            do {
              if (plVar7[1] == uVar3) {
                if (*(ushort *)(plVar7 + 2) == uVar2) goto LAB_0cae8f7d;
              }
              else if ((plVar7[1] & uStack_80 - 1) != uVar11) break;
              plVar7 = (long *)*plVar7;
            } while (plVar7 != (long *)0x0);
          }
          else {
            do {
              uVar8 = plVar7[1];
              if (uVar8 == uVar3) {
                if (*(ushort *)(plVar7 + 2) == uVar2) goto LAB_0cae8f7d;
              }
              else {
                if (uStack_80 <= uVar8) {
                  if ((uVar8 | uStack_80) >> 0x20 == 0) {
                    if ((uVar8 & 0xffffffff) % (uStack_80 & 0xffffffff) == uVar11)
                    goto LAB_0cae8ecb;
                    break;
                  }
                  uVar8 = uVar8 % uStack_80;
                }
                if (uVar8 != uVar11) break;
              }
LAB_0cae8ecb:
              plVar7 = (long *)*plVar7;
            } while (plVar7 != (long *)0x0);
          }
        }
      }
      plStack_60 = (long *)CONCAT62(plStack_60._2_6_,uVar2);
      lVar5 = func_0x0cb14930(lVar1,uVar2,&plStack_60);
      *(undefined1 *)(lVar5 + 0x12) = 0;
    }
    goto LAB_0cae8cb6;
  }
  plStack_60 = alStack_50;
  uStack_58 = 0x400000000;
  func_0x0cafcfe0(param_2 + 0x120,&plStack_60);
  if ((uStack_58 & 0xffffffff) == 0) {
LAB_0cae8fa6:
    lVar5 = lStack_88;
    plVar7 = plStack_78;
    if (plStack_60 != (long *)0x0 && alStack_50 != plStack_60) {
      (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,plStack_60);
      lVar5 = lStack_88;
      plVar7 = plStack_78;
    }
joined_r0x0cae8fd2:
    while (plVar7 != (long *)0x0) {
      plVar10 = (long *)*plVar7;
      lStack_88 = lVar5;
      FUN_0412a280(plVar7,0x18);
      lVar5 = lStack_88;
      plVar7 = plVar10;
    }
    lStack_88 = 0;
    if (lVar5 != 0) {
      FUN_0412a280(lVar5,uStack_80 << 3);
    }
    return;
  }
  plVar7 = plStack_60 + (uStack_58 & 0xffffffff);
  plVar10 = plStack_60;
  fVar15 = _DAT_01198c3c;
LAB_0cae8a1c:
  lVar4 = *plVar10;
  if ((0.0 < *(float *)(lVar4 + 0x2c)) && (*(float *)(lVar4 + 8) + fVar15 < _DAT_01198788)) {
    uStack_8a = *(ushort *)(lVar4 + 0x168);
    if (uStack_80 != 0) {
      uVar3 = (ulong)uStack_8a;
      uVar8 = uStack_80 - (uStack_80 >> 1 & 0x5555555555555555);
      uVar8 = (uVar8 >> 2 & 0x3333333333333333) + (uVar8 & 0x3333333333333333);
      uVar8 = ((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      if (uVar8 >> 0x38 < 2) {
        uVar11 = (ulong)((uint)uStack_8a & (int)uStack_80 - 1U);
      }
      else {
        uVar11 = uVar3;
        if (uStack_80 <= uVar3) {
          uVar11 = (ulong)(ushort)(uStack_8a % (ushort)uStack_80);
        }
      }
      plVar9 = *(long **)(lStack_88 + uVar11 * 8);
      if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
        if ((byte)(uVar8 >> 0x38) < 2) {
          do {
            if (plVar9[1] == uVar3) {
              if (*(ushort *)(plVar9 + 2) == uStack_8a) goto LAB_0cae8b79;
            }
            else if ((plVar9[1] & uStack_80 - 1) != uVar11) break;
            plVar9 = (long *)*plVar9;
          } while (plVar9 != (long *)0x0);
        }
        else {
          do {
            uVar8 = plVar9[1];
            if (uVar8 == uVar3) {
              if (*(ushort *)(plVar9 + 2) == uStack_8a) goto LAB_0cae8b79;
            }
            else {
              if (uStack_80 <= uVar8) {
                if ((uVar8 | uStack_80) >> 0x20 == 0) {
                  if ((uVar8 & 0xffffffff) % (uStack_80 & 0xffffffff) == uVar11) goto LAB_0cae8b06;
                  break;
                }
                uVar8 = uVar8 % uStack_80;
              }
              if (uVar8 != uVar11) break;
            }
LAB_0cae8b06:
            plVar9 = (long *)*plVar9;
          } while (plVar9 != (long *)0x0);
        }
      }
    }
    lVar4 = func_0x0cb14930(lVar1,uStack_8a,&uStack_8a);
    *(undefined1 *)(lVar4 + 0x12) = 0;
    fVar15 = _DAT_01198c3c;
  }
  goto LAB_0cae8a0f;
LAB_0cae8d10:
  plVar7 = plVar6 + 1;
  uVar8 = ~uVar3 + uVar8;
  if (uVar8 == 0) goto LAB_0cae8dd0;
  goto LAB_0cae8d29;
LAB_0cae8f7d:
  plStack_60 = (long *)CONCAT62(plStack_60._2_6_,uVar2);
  lVar5 = func_0x0cb14930(lVar1,uVar2,&plStack_60);
  *(undefined1 *)(lVar5 + 0x12) = *(undefined1 *)((long)plVar7 + 0x12);
LAB_0cae8cb6:
  lVar12 = lVar12 + 1;
  lVar5 = lStack_88;
  plVar7 = plStack_78;
  if (lVar12 == 0x100) goto joined_r0x0cae8fd2;
  goto LAB_0cae8cc6;
LAB_0cae8b79:
  lVar4 = func_0x0cb14930(lVar1,uStack_8a,&uStack_8a);
  *(undefined1 *)(lVar4 + 0x12) = *(undefined1 *)((long)plVar9 + 0x12);
  fVar15 = _DAT_01198c3c;
LAB_0cae8a0f:
  plVar10 = plVar10 + 1;
  if (plVar10 == plVar7) goto LAB_0cae8fa6;
  goto LAB_0cae8a1c;
}


