/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1bf7f0
 * Label: br::worldgen::processors::Capped::vslot0
 * Body:  [[0d1bf610, 0d1bf6ac] [0d1bf6b0, 0d1bf789] [0d1bf790, 0d1bf7ee] [0d1bf7f0, 0d1bf88b] [0d1bf890, 0d1bf98b] [0d1bf990, 0d1bf9cc] [0d1bf9d0, 0d1bfa16] [0d1bfa20, 0d1bfaa0] [0d1bfab0, 0d1bfbd9] [0d1bfbe0, 0d1bfe07] [0d1bfe10, 0d1bfeb7] [0d1bfec0, 0d1bff71] [0d1bff8e, 0d1bffb8]]
 * Ghidra: wg_br__worldgen__processors__Capped__vslot0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_br__worldgen__processors__Capped__vslot0(long param_1)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  code *pcVar4;
  int in_EAX;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong unaff_RBX;
  ulong unaff_RBP;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  ulong unaff_R12;
  long *unaff_R13;
  long *unaff_R14;
  bool bVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  long unaff_retaddr;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000028;
  long *in_stack_00000030;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  
  bVar14 = in_EAX == (int)unaff_RBP;
code_r0x0d1bf7f2:
  if (bVar14) goto LAB_0d1bf738;
LAB_0d1bf900:
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  in_stack_00000038 = in_stack_00000008 + -0xb60;
  in_stack_00000040 = 0;
  *plVar6 = 0;
  plVar6[1] = unaff_R12;
  plVar6[2] = 0;
  plVar6[3] = 0;
  plVar6[4] = 0;
  plVar6[5] = 0;
  plVar6[6] = 0;
  in_stack_00000030 = plVar6;
  if (plVar6 + 2 != unaff_R14) {
    if ((*(byte *)(unaff_R14 + 1) & 1) == 0) {
      plVar6[5] = unaff_R14[3];
      lVar1 = unaff_R14[2];
      plVar6[3] = unaff_R14[1];
      plVar6[4] = lVar1;
    }
    else {
      func_0x04885070(plVar6 + 3,unaff_R14[3],unaff_R14[2]);
    }
  }
  plVar6[2] = *unaff_R14;
  plVar6[7] = unaff_R14[5];
  fVar15 = (float)(*(long *)(in_stack_00000008 + -0xb48) + 1);
  in_stack_00000040 = CONCAT71(in_stack_00000040._1_7_,1);
  if ((long)unaff_RBX < 0) {
    fVar17 = (float)unaff_RBX;
    fVar16 = *(float *)(in_stack_00000008 + -0xb40);
    if (unaff_RBX != 0) goto LAB_0d1bfa36;
LAB_0d1bfab0:
    uVar7 = 1;
    if (2 < unaff_RBX) {
      uVar7 = (ulong)((unaff_RBX & unaff_RBX - 1) != 0);
    }
    uVar7 = unaff_RBX * 2 | uVar7;
    fVar15 = (float)func_0x0eee3ab0(fVar15 / fVar16);
    uVar11 = (long)(fVar15 - _DAT_01198778) & (long)fVar15 >> 0x3f | (long)fVar15;
    if (uVar11 < uVar7) {
      uVar11 = uVar7;
    }
    uVar7 = 2;
    if ((uVar11 == 1) || (uVar7 = uVar11, (uVar11 & uVar11 - 1) == 0)) {
      uVar11 = *(ulong *)(in_stack_00000008 + -0xb58);
      bVar14 = uVar7 < uVar11;
      if (uVar7 <= uVar11) goto LAB_0d1bfc3f;
LAB_0d1bfb2b:
      unaff_RBP = uVar7;
      if (unaff_RBP >> 0x3d != 0) {
        uVar9 = func_0x04882eb0();
        func_0x0d1c00d0(&stack0x00000030);
        func_0x0d1c0040();
        uVar9 = func_0x0eee2d70(uVar9);
        func_0x0d1c0040();
        func_0x0eee2d70(uVar9);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar1 = unaff_RBP * 8;
      lVar8 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar1);
      if (lVar8 == 0) {
        func_0x0eec74c0(lVar1,0);
      }
      lVar3 = *(long *)(in_stack_00000008 + -0xb60);
      *(long *)(in_stack_00000008 + -0xb60) = lVar8;
      if (lVar3 != 0) {
        func_0x0412a280(lVar3,*(long *)(in_stack_00000008 + -0xb58) << 3);
        lVar8 = *(long *)(in_stack_00000008 + -0xb60);
      }
      *(ulong *)(in_stack_00000008 + -0xb58) = unaff_RBP;
      func_0x0eee2dd0(lVar8,0,lVar1);
      plVar10 = *(long **)(in_stack_00000008 + -0xb50);
      if (plVar10 != (long *)0x0) {
        uVar11 = plVar10[1];
        uVar7 = unaff_RBP - 1;
        if ((unaff_RBP & uVar7) == 0) {
          *(long *)(lVar8 + (uVar11 & uVar7) * 8) = in_stack_00000008 + -0xb50;
          uVar11 = uVar11 & uVar7;
          while (plVar13 = plVar10, plVar10 = (long *)*plVar13, plVar10 != (long *)0x0) {
            uVar12 = plVar10[1] & uVar7;
            if (uVar12 != uVar11) {
              if (*(long *)(lVar8 + uVar12 * 8) == 0) {
                *(long **)(lVar8 + uVar12 * 8) = plVar13;
                uVar11 = uVar12;
              }
              else {
                *plVar13 = *plVar10;
                *plVar10 = **(undefined8 **)(lVar8 + uVar12 * 8);
                **(long **)(lVar8 + uVar12 * 8) = (long)plVar10;
                plVar10 = plVar13;
              }
            }
          }
        }
        else {
          if (unaff_RBP <= uVar11) {
            if ((uVar11 | unaff_RBP) >> 0x20 == 0) {
              uVar11 = (uVar11 & 0xffffffff) % (unaff_RBP & 0xffffffff);
            }
            else {
              uVar11 = uVar11 % unaff_RBP;
            }
          }
          *(long *)(lVar8 + uVar11 * 8) = in_stack_00000008 + -0xb50;
          plVar13 = (long *)*plVar10;
          while (plVar13 != (long *)0x0) {
            uVar7 = plVar13[1];
            if (unaff_RBP <= uVar7) {
              if ((uVar7 | unaff_RBP) >> 0x20 == 0) {
                uVar7 = (uVar7 & 0xffffffff) % (unaff_RBP & 0xffffffff);
              }
              else {
                uVar7 = uVar7 % unaff_RBP;
              }
            }
            if (uVar7 != uVar11) {
              if (*(long *)(lVar8 + uVar7 * 8) == 0) {
                *(long **)(lVar8 + uVar7 * 8) = plVar10;
                uVar11 = uVar7;
              }
              else {
                *plVar10 = *plVar13;
                *plVar13 = **(long **)(lVar8 + uVar7 * 8);
                **(undefined8 **)(lVar8 + uVar7 * 8) = plVar13;
                plVar13 = plVar10;
              }
            }
            plVar10 = plVar13;
            plVar13 = (long *)*plVar10;
          }
        }
      }
    }
    else {
      uVar7 = func_0x0412c3f0();
      uVar11 = *(ulong *)(in_stack_00000008 + -0xb58);
      bVar14 = uVar7 < uVar11;
      if (uVar11 < uVar7) goto LAB_0d1bfb2b;
LAB_0d1bfc3f:
      if (bVar14) {
        fVar15 = (float)func_0x0eee3ab0((float)*(ulong *)(in_stack_00000008 + -0xb48) /
                                        *(float *)(in_stack_00000008 + -0xb40));
        unaff_RBP = (long)(fVar15 - _DAT_01198778) & (long)fVar15 >> 0x3f | (long)fVar15;
        if ((uVar11 < 3) ||
           (uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555),
           uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333),
           1 < (byte)(((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
          unaff_RBP = func_0x0412c3f0(unaff_RBP);
          if (unaff_RBP < uVar7) {
            unaff_RBP = uVar7;
          }
        }
        else {
          if (1 < unaff_RBP) {
            lVar1 = 0x3f;
            if (unaff_RBP - 1 != 0) {
              for (; unaff_RBP - 1 >> lVar1 == 0; lVar1 = lVar1 + -1) {
              }
            }
            unaff_RBP = 1L << (-((byte)lVar1 ^ 0x3f) & 0x3f);
          }
          if (unaff_RBP < uVar7) {
            unaff_RBP = uVar7;
          }
        }
        if (unaff_RBP < uVar11) {
          uVar7 = unaff_RBP;
          if (unaff_RBP != 0) goto LAB_0d1bfb2b;
          lVar1 = *(long *)(in_stack_00000008 + -0xb60);
          *(undefined8 *)(in_stack_00000008 + -0xb60) = 0;
          if (lVar1 != 0) {
            func_0x0412a280(lVar1,*(long *)(in_stack_00000008 + -0xb58) << 3);
          }
          *(undefined8 *)(in_stack_00000008 + -0xb58) = 0;
        }
      }
    }
    unaff_RBX = *(ulong *)(in_stack_00000008 + -0xb58);
    if ((unaff_RBX & unaff_RBX - 1) == 0) {
      unaff_R12 = unaff_R12 & unaff_RBX - 1;
      param_1 = *(long *)(in_stack_00000008 + -0xb60);
      plVar10 = *(long **)(param_1 + unaff_R12 * 8);
    }
    else {
      if (unaff_RBX <= unaff_R12) {
        if ((unaff_R12 | unaff_RBX) >> 0x20 == 0) {
          unaff_R12 = (unaff_R12 & 0xffffffff) % (unaff_RBX & 0xffffffff);
          param_1 = *(long *)(in_stack_00000008 + -0xb60);
          plVar10 = *(long **)(param_1 + unaff_R12 * 8);
          goto joined_r0x0d1bfe87;
        }
        unaff_R12 = unaff_R12 % unaff_RBX;
      }
      param_1 = *(long *)(in_stack_00000008 + -0xb60);
      plVar10 = *(long **)(param_1 + unaff_R12 * 8);
    }
  }
  else {
    fVar17 = (float)(long)unaff_RBX;
    fVar16 = *(float *)(in_stack_00000008 + -0xb40);
    if (unaff_RBX == 0) goto LAB_0d1bfab0;
LAB_0d1bfa36:
    if (fVar17 * fVar16 < fVar15) goto LAB_0d1bfab0;
    param_1 = *(long *)(in_stack_00000008 + -0xb60);
    plVar10 = *(long **)(param_1 + unaff_RBP * 8);
    unaff_R12 = unaff_RBP;
  }
joined_r0x0d1bfe87:
  if (plVar10 == (long *)0x0) {
    *plVar6 = *(long *)(in_stack_00000008 + -0xb50);
    *(long **)(in_stack_00000008 + -0xb50) = plVar6;
    *(long *)(param_1 + unaff_R12 * 8) = in_stack_00000008 + -0xb50;
    if (*plVar6 != 0) {
      uVar7 = *(ulong *)(*plVar6 + 8);
      if ((unaff_RBX & unaff_RBX - 1) == 0) {
        *(long **)(param_1 + (uVar7 & unaff_RBX - 1) * 8) = plVar6;
      }
      else {
        if (unaff_RBX <= uVar7) {
          if ((uVar7 | unaff_RBX) >> 0x20 == 0) {
            *(long **)(param_1 + ((uVar7 & 0xffffffff) % (unaff_RBX & 0xffffffff)) * 8) = plVar6;
            goto LAB_0d1bfe52;
          }
          uVar7 = uVar7 % unaff_RBX;
        }
        *(long **)(param_1 + uVar7 * 8) = plVar6;
      }
    }
  }
  else {
    *plVar6 = *plVar10;
    *plVar10 = (long)plVar6;
  }
LAB_0d1bfe52:
  *(long *)(in_stack_00000008 + -0xb48) = *(long *)(in_stack_00000008 + -0xb48) + 1;
LAB_0d1bfe59:
  unaff_retaddr = unaff_retaddr + 0x30;
  if (unaff_retaddr == 0x3c0) {
    return;
  }
  unaff_R14 = (long *)(in_stack_00000028 + unaff_retaddr);
  unaff_R12 = *(ulong *)(in_stack_00000028 + unaff_retaddr);
  unaff_RBX = *(ulong *)(in_stack_00000008 + -0xb58);
  if (unaff_RBX != 0) {
    uVar7 = unaff_RBX - (unaff_RBX >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 >> 2 & 0x3333333333333333) + (uVar7 & 0x3333333333333333);
    uVar7 = ((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar7 >> 0x38 < 2) {
      unaff_RBP = unaff_RBX - 1 & unaff_R12;
      plVar6 = *(long **)(param_1 + unaff_RBP * 8);
    }
    else {
      unaff_RBP = unaff_R12;
      if (unaff_RBX <= unaff_R12) {
        if ((unaff_R12 | unaff_RBX) >> 0x20 == 0) {
          unaff_RBP = (unaff_R12 & 0xffffffff) % (unaff_RBX & 0xffffffff);
          plVar6 = *(long **)(param_1 + unaff_RBP * 8);
          goto joined_r0x0d1bf8f9;
        }
        unaff_RBP = unaff_R12 % unaff_RBX;
      }
      plVar6 = *(long **)(param_1 + unaff_RBP * 8);
    }
joined_r0x0d1bf8f9:
    if ((plVar6 != (long *)0x0) && (unaff_R13 = (long *)*plVar6, unaff_R13 != (long *)0x0)) {
      in_stack_00000010 = (long)unaff_R14 + 9;
      in_stack_00000018 = param_1;
      if (1 < (byte)(uVar7 >> 0x38)) {
        do {
          uVar7 = unaff_R13[1];
          if (uVar7 == unaff_R12) {
            if (unaff_R13[2] == unaff_R12) {
              plVar6 = unaff_R13 + 2;
              if (((long *)unaff_R13[6] == unaff_R14) && ((long *)unaff_R14[4] == plVar6))
              goto LAB_0d1bfe59;
              bVar2 = *(byte *)(unaff_R13 + 3);
              if ((bVar2 & 1) == 0) {
                uVar7 = (ulong)(bVar2 >> 1);
                uVar11 = (ulong)*(byte *)(unaff_R14 + 1);
                if ((*(byte *)(unaff_R14 + 1) & 1) != 0) goto LAB_0d1bf7c1;
LAB_0d1bf77f:
                if (uVar7 != uVar11 >> 1) goto LAB_0d1bf730;
              }
              else {
                uVar7 = unaff_R13[4];
                uVar11 = (ulong)*(byte *)(unaff_R14 + 1);
                if ((*(byte *)(unaff_R14 + 1) & 1) == 0) goto LAB_0d1bf77f;
LAB_0d1bf7c1:
                if (uVar7 != unaff_R14[2]) goto LAB_0d1bf730;
              }
              if ((bVar2 & 1) == 0) {
                lVar1 = (long)unaff_R13 + 0x19;
              }
              else {
                lVar1 = unaff_R13[5];
              }
              lVar8 = in_stack_00000010;
              if ((uVar11 & 1) != 0) {
                lVar8 = unaff_R14[3];
              }
              iVar5 = func_0x0eee3000(lVar1,lVar8);
              param_1 = in_stack_00000018;
              if (iVar5 == 0) goto LAB_0d1bff2b;
            }
LAB_0d1bf730:
            unaff_R13[6] = 0;
          }
          else {
            if (unaff_RBX <= uVar7) {
              if ((uVar7 | unaff_RBX) >> 0x20 == 0) {
                bVar14 = (uVar7 & 0xffffffff) % (unaff_RBX & 0xffffffff) == unaff_RBP;
                goto code_r0x0d1bf7f2;
              }
              uVar7 = uVar7 % unaff_RBX;
            }
            if (uVar7 != unaff_RBP) goto LAB_0d1bf900;
          }
LAB_0d1bf738:
          unaff_R13 = (long *)*unaff_R13;
          if (unaff_R13 == (long *)0x0) goto LAB_0d1bf900;
        } while( true );
      }
      do {
        if (unaff_R13[1] == unaff_R12) {
          if (unaff_R13[2] == unaff_R12) {
            plVar6 = unaff_R13 + 2;
            if (((long *)unaff_R13[6] == unaff_R14) && ((long *)unaff_R14[4] == plVar6))
            goto LAB_0d1bfe59;
            bVar2 = *(byte *)(unaff_R13 + 3);
            if ((bVar2 & 1) == 0) {
              uVar7 = (ulong)(bVar2 >> 1);
              uVar11 = (ulong)*(byte *)(unaff_R14 + 1);
              if ((*(byte *)(unaff_R14 + 1) & 1) != 0) goto LAB_0d1bf8a8;
LAB_0d1bf881:
              if (uVar7 != uVar11 >> 1) goto LAB_0d1bf832;
            }
            else {
              uVar7 = unaff_R13[4];
              uVar11 = (ulong)*(byte *)(unaff_R14 + 1);
              if ((*(byte *)(unaff_R14 + 1) & 1) == 0) goto LAB_0d1bf881;
LAB_0d1bf8a8:
              if (uVar7 != unaff_R14[2]) goto LAB_0d1bf832;
            }
            if ((bVar2 & 1) == 0) {
              lVar1 = (long)unaff_R13 + 0x19;
            }
            else {
              lVar1 = unaff_R13[5];
            }
            lVar8 = in_stack_00000010;
            if ((uVar11 & 1) != 0) {
              lVar8 = unaff_R14[3];
            }
            iVar5 = func_0x0eee3000(lVar1,lVar8);
            if (iVar5 == 0) goto LAB_0d1bff2b;
          }
LAB_0d1bf832:
          unaff_R13[6] = 0;
        }
        else if ((unaff_R13[1] & unaff_RBX - 1) != unaff_RBP) break;
        unaff_R13 = (long *)*unaff_R13;
        if (unaff_R13 == (long *)0x0) break;
      } while( true );
    }
  }
  goto LAB_0d1bf900;
LAB_0d1bff2b:
  unaff_R13[6] = (long)unaff_R14;
  unaff_R14[4] = (long)plVar6;
  param_1 = in_stack_00000018;
  goto LAB_0d1bfe59;
}


