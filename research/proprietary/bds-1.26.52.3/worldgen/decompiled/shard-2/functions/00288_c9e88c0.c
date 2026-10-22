/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcae88c0 (ELF vaddr 0xc9e88c0)
 * Label: callee-of:0xd2a46a0
 * Body:  [[0cae88c0, 0cae89e7] [0cae89f0, 0cae8af1] [0cae8b00, 0cae8b4e] [0cae8b50, 0cae8bd3] [0cae8be0, 0cae8c41] [0cae8c50, 0cae8c99] [0cae8ca0, 0cae8d01] [0cae8d10, 0cae8d50] [0cae8d60, 0cae8d81] [0cae8d90, 0cae8db8] [0cae8dc0, 0cae8dce] [0cae8dd0, 0cae8f12] [0cae8f20, 0cae8f4d] [0cae8f50, 0cae9029] [0cae9030, 0cae905c]]
 * Ghidra: FUN_0cae88c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0cae88c0(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  ushort uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long *extraout_RDX;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  float fVar13;
  ushort uStack_8a;
  long lStack_88;
  ulong uStack_80;
  long *plStack_78;
  long lStack_70;
  undefined4 uStack_68;
  long *plStack_60;
  ulong uStack_58;
  long alStack_50 [4];
  
  lStack_88 = *(long *)(param_1 + 0xfe0);
  *(undefined8 *)(param_1 + 0xfe0) = 0;
  uVar9 = *(ulong *)(param_1 + 0xfe8);
  *(undefined8 *)(param_1 + 0xfe8) = 0;
  plStack_78 = *(long **)(param_1 + 0xff0);
  lStack_70 = *(long *)(param_1 + 0xff8);
  uStack_68 = *(undefined4 *)(param_1 + 0x1000);
  if (lStack_70 != 0) {
    param_2 = (long *)(param_1 + 0xff0);
    uVar4 = plStack_78[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar4 = uVar4 & uVar9 - 1;
    }
    else if (uVar9 <= uVar4) {
      if ((uVar4 | uVar9) >> 0x20 == 0) {
        uVar4 = (uVar4 & 0xffffffff) % (uVar9 & 0xffffffff);
      }
      else {
        uVar4 = uVar4 % uVar9;
      }
    }
    *(long ***)(lStack_88 + uVar4 * 8) = &plStack_78;
    *param_2 = 0;
    *(undefined8 *)(param_1 + 0xff8) = 0;
  }
  lVar1 = param_1 + 0xfe0;
  uStack_80 = uVar9;
  if (*(char *)(param_1 + 0x110b) != '\x01') {
    lVar5 = (**(code **)(**(long **)(param_1 + 0x28) + 0x2b0))();
    plVar8 = *(long **)(param_1 + 0x30);
    uVar3 = (**(code **)(*plVar8 + 0xd0))();
    plVar10 = *(long **)(lVar5 + 0x380);
    plVar7 = *(long **)(lVar5 + 0x388);
    uVar4 = 0;
    if ((long)plVar7 - (long)plVar10 != 0) {
      param_2 = plVar7;
      uVar4 = (long)plVar7 - (long)plVar10 >> 3;
      do {
        while( true ) {
          uVar9 = uVar4 >> 1;
          plVar8 = plVar10 + uVar9;
          if (*(ushort *)(plVar10[uVar9] + 0x168) < uVar3) break;
          if (*(ushort *)(plVar10[uVar9] + 0x168) <= uVar3) goto LAB_0cae8c20;
          param_2 = plVar8;
          uVar4 = uVar9;
          if (uVar9 == 0) goto LAB_0cae8c1b;
        }
        plVar10 = plVar8 + 1;
        uVar4 = ~uVar9 + uVar4;
        uVar9 = 0;
        plVar8 = plVar10;
      } while (uVar4 != 0);
    }
LAB_0cae8c1b:
    do {
      uVar3 = FUN_04890760();
      plVar10 = extraout_RDX;
LAB_0cae8c20:
      if (uVar4 != 1) {
        do {
          uVar11 = uVar9 >> 1;
          if (*(ushort *)(plVar10[uVar11] + 0x168) < uVar3) {
            plVar10 = plVar10 + uVar11 + 1;
            uVar11 = ~uVar11 + uVar9;
          }
          uVar4 = 0;
          uVar9 = uVar11;
        } while (uVar11 != 0);
      }
      plVar8 = plVar8 + 1;
      lVar5 = (long)param_2 - (long)plVar8;
      if (lVar5 != 0) {
        param_2 = plVar8;
        uVar9 = lVar5 >> 3;
        do {
          uVar11 = uVar9 >> 1;
          uVar4 = param_2[uVar11];
          if (*(ushort *)(uVar4 + 0x168) <= uVar3) {
            param_2 = param_2 + uVar11 + 1;
            uVar11 = ~uVar11 + uVar9;
          }
          plVar8 = (long *)0x0;
          uVar9 = uVar11;
        } while (uVar11 != 0);
      }
      uVar9 = 0;
    } while (((plVar10 == param_2) || (plVar10 == plVar7)) || (lVar5 = *plVar10, lVar5 == 0));
    lVar12 = 0;
LAB_0cae8cc6:
    uVar3 = *(ushort *)(param_1 + 0x120 + lVar12 * 2);
    lVar6 = (**(code **)(**(long **)(param_1 + 0x28) + 0x2b0))();
    plVar8 = *(long **)(lVar6 + 0x380);
    plVar10 = *(long **)(lVar6 + 0x388);
    if ((long)plVar10 - (long)plVar8 != 0) {
      plVar7 = plVar10;
      uVar9 = (long)plVar10 - (long)plVar8 >> 3;
LAB_0cae8d29:
      do {
        uVar4 = uVar9 >> 1;
        plVar2 = plVar8 + uVar4;
        if (*(ushort *)(plVar8[uVar4] + 0x168) < uVar3) goto LAB_0cae8d10;
        if (*(ushort *)(plVar8[uVar4] + 0x168) <= uVar3) {
          if (uVar9 != 1) {
            do {
              uVar9 = uVar4 >> 1;
              if (*(ushort *)(plVar8[uVar9] + 0x168) < uVar3) {
                plVar8 = plVar8 + uVar9 + 1;
                uVar9 = ~uVar9 + uVar4;
              }
              uVar4 = uVar9;
            } while (uVar9 != 0);
          }
          lVar6 = (long)plVar7 - (long)(plVar2 + 1);
          if (lVar6 != 0) {
            plVar7 = plVar2 + 1;
            uVar9 = lVar6 >> 3;
            do {
              uVar4 = uVar9 >> 1;
              if (*(ushort *)(plVar7[uVar4] + 0x168) <= uVar3) {
                plVar7 = plVar7 + uVar4 + 1;
                uVar4 = ~uVar4 + uVar9;
              }
              uVar9 = uVar4;
            } while (uVar4 != 0);
          }
          if ((plVar8 == plVar7) || (plVar8 == plVar10)) break;
          lVar6 = *plVar8;
          goto LAB_0cae8dd2;
        }
        plVar7 = plVar2;
        uVar9 = uVar4;
      } while (uVar4 != 0);
    }
LAB_0cae8dd0:
    lVar6 = 0;
LAB_0cae8dd2:
    if (lVar6 == 0) {
      lVar6 = lVar5;
    }
    if ((_DAT_011983fc < *(float *)(lVar6 + 0x2c)) &&
       (*(float *)(lVar6 + 8) + _DAT_01198c3c < _DAT_01198788)) {
      uVar3 = *(ushort *)(lVar6 + 0x168);
      if (uStack_80 != 0) {
        uVar4 = (ulong)uVar3;
        uVar9 = uStack_80 - (uStack_80 >> 1 & 0x5555555555555555);
        uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
        uVar9 = ((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar9 >> 0x38 < 2) {
          uVar11 = (ulong)((uint)uVar3 & (int)uStack_80 - 1U);
        }
        else {
          uVar11 = uVar4;
          if (uStack_80 <= uVar4) {
            uVar11 = (ulong)(ushort)(uVar3 % (ushort)uStack_80);
          }
        }
        plVar8 = *(long **)(lStack_88 + uVar11 * 8);
        if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
          if ((byte)(uVar9 >> 0x38) < 2) {
            do {
              if (plVar8[1] == uVar4) {
                if (*(ushort *)(plVar8 + 2) == uVar3) goto LAB_0cae8f7d;
              }
              else if ((plVar8[1] & uStack_80 - 1) != uVar11) break;
              plVar8 = (long *)*plVar8;
            } while (plVar8 != (long *)0x0);
          }
          else {
            do {
              uVar9 = plVar8[1];
              if (uVar9 == uVar4) {
                if (*(ushort *)(plVar8 + 2) == uVar3) goto LAB_0cae8f7d;
              }
              else {
                if (uStack_80 <= uVar9) {
                  if ((uVar9 | uStack_80) >> 0x20 == 0) {
                    if ((uVar9 & 0xffffffff) % (uStack_80 & 0xffffffff) == uVar11)
                    goto LAB_0cae8ecb;
                    break;
                  }
                  uVar9 = uVar9 % uStack_80;
                }
                if (uVar9 != uVar11) break;
              }
LAB_0cae8ecb:
              plVar8 = (long *)*plVar8;
            } while (plVar8 != (long *)0x0);
          }
        }
      }
      plStack_60 = (long *)CONCAT62(plStack_60._2_6_,uVar3);
      lVar6 = func_0x0cb14930(lVar1,uVar3,&plStack_60);
      *(undefined1 *)(lVar6 + 0x12) = 0;
    }
    goto LAB_0cae8cb6;
  }
  plStack_60 = alStack_50;
  uStack_58 = 0x400000000;
  FUN_0cafcfe0(param_1 + 0x120,&plStack_60);
  if ((uStack_58 & 0xffffffff) == 0) {
LAB_0cae8fa6:
    lVar6 = lStack_88;
    plVar8 = plStack_78;
    if (plStack_60 != (long *)0x0 && alStack_50 != plStack_60) {
      (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,plStack_60);
      lVar6 = lStack_88;
      plVar8 = plStack_78;
    }
joined_r0x0cae8fd2:
    while (plVar8 != (long *)0x0) {
      plVar10 = (long *)*plVar8;
      lStack_88 = lVar6;
      func_0x0412a280(plVar8,0x18);
      lVar6 = lStack_88;
      plVar8 = plVar10;
    }
    lStack_88 = 0;
    if (lVar6 != 0) {
      func_0x0412a280(lVar6,uStack_80 << 3);
    }
    return;
  }
  plVar8 = plStack_60 + (uStack_58 & 0xffffffff);
  plVar10 = plStack_60;
  fVar13 = _DAT_01198c3c;
LAB_0cae8a1c:
  lVar5 = *plVar10;
  if ((0.0 < *(float *)(lVar5 + 0x2c)) && (*(float *)(lVar5 + 8) + fVar13 < _DAT_01198788)) {
    uStack_8a = *(ushort *)(lVar5 + 0x168);
    if (uStack_80 != 0) {
      uVar4 = (ulong)uStack_8a;
      uVar9 = uStack_80 - (uStack_80 >> 1 & 0x5555555555555555);
      uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
      uVar9 = ((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      if (uVar9 >> 0x38 < 2) {
        uVar11 = (ulong)((uint)uStack_8a & (int)uStack_80 - 1U);
      }
      else {
        uVar11 = uVar4;
        if (uStack_80 <= uVar4) {
          uVar11 = (ulong)(ushort)(uStack_8a % (ushort)uStack_80);
        }
      }
      plVar7 = *(long **)(lStack_88 + uVar11 * 8);
      if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
        if ((byte)(uVar9 >> 0x38) < 2) {
          do {
            if (plVar7[1] == uVar4) {
              if (*(ushort *)(plVar7 + 2) == uStack_8a) goto LAB_0cae8b79;
            }
            else if ((plVar7[1] & uStack_80 - 1) != uVar11) break;
            plVar7 = (long *)*plVar7;
          } while (plVar7 != (long *)0x0);
        }
        else {
          do {
            uVar9 = plVar7[1];
            if (uVar9 == uVar4) {
              if (*(ushort *)(plVar7 + 2) == uStack_8a) goto LAB_0cae8b79;
            }
            else {
              if (uStack_80 <= uVar9) {
                if ((uVar9 | uStack_80) >> 0x20 == 0) {
                  if ((uVar9 & 0xffffffff) % (uStack_80 & 0xffffffff) == uVar11) goto LAB_0cae8b06;
                  break;
                }
                uVar9 = uVar9 % uStack_80;
              }
              if (uVar9 != uVar11) break;
            }
LAB_0cae8b06:
            plVar7 = (long *)*plVar7;
          } while (plVar7 != (long *)0x0);
        }
      }
    }
    lVar5 = func_0x0cb14930(lVar1,uStack_8a,&uStack_8a);
    *(undefined1 *)(lVar5 + 0x12) = 0;
    fVar13 = _DAT_01198c3c;
  }
  goto LAB_0cae8a0f;
LAB_0cae8d10:
  plVar8 = plVar2 + 1;
  uVar9 = ~uVar4 + uVar9;
  if (uVar9 == 0) goto LAB_0cae8dd0;
  goto LAB_0cae8d29;
LAB_0cae8f7d:
  plStack_60 = (long *)CONCAT62(plStack_60._2_6_,uVar3);
  lVar6 = func_0x0cb14930(lVar1,uVar3,&plStack_60);
  *(undefined1 *)(lVar6 + 0x12) = *(undefined1 *)((long)plVar8 + 0x12);
LAB_0cae8cb6:
  lVar12 = lVar12 + 1;
  lVar6 = lStack_88;
  plVar8 = plStack_78;
  if (lVar12 == 0x100) goto joined_r0x0cae8fd2;
  goto LAB_0cae8cc6;
LAB_0cae8b79:
  lVar5 = func_0x0cb14930(lVar1,uStack_8a,&uStack_8a);
  *(undefined1 *)(lVar5 + 0x12) = *(undefined1 *)((long)plVar7 + 0x12);
  fVar13 = _DAT_01198c3c;
LAB_0cae8a0f:
  plVar10 = plVar10 + 1;
  if (plVar10 == plVar8) goto LAB_0cae8fa6;
  goto LAB_0cae8a1c;
}


