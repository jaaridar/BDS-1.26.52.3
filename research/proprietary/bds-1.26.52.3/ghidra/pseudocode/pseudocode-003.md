# Decompiled bodies, part 3

> Mechanically generated pseudocode from the proprietary BDS binary.
> Not original source; not MIT-licensed OpenBDS code.

## `d3b7a10` — LegacyStructureTemplate::vslot1

- instructions: 1781
- calls: 412a280, 412c2d0, 412e5e0, 4882e20, 4882ef0, 4931450, b5fb590, bf49880, c6e2980, c9ce260, ca11350, ca115f0, ca11610, cb18130, cc41df0, cc422f0, d3620e0, d3621f0, d362990, d36d6b0, d374570, d6bd5f0, d6c9580, d6c97a0 …

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void LegacyStructureTemplate_v1
               (long *param_1,long *param_2,int *param_3,float *param_4,long *param_5)

{
  code *pcVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  byte *pbVar14;
  short sVar15;
  uint uVar16;
  float fVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long *unaff_RBP;
  undefined7 uVar25;
  undefined *puVar26;
  long lVar27;
  float *pfVar28;
  float *pfVar29;
  float *pfVar30;
  bool bVar31;
  float fVar32;
  uint uVar33;
  float fVar34;
  uint uVar35;
  byte bStack_c4a;
  char cStack_c49;
  undefined8 uStack_c48;
  int iStack_c40;
  long *plStack_c38;
  long *plStack_c30;
  byte *pbStack_c28;
  undefined8 uStack_c20;
  undefined8 uStack_c18;
  undefined8 uStack_c10;
  undefined8 uStack_c08;
  long *plStack_bf8;
  undefined8 uStack_be8;
  uint uStack_be0;
  uint uStack_bdc;
  undefined8 uStack_bd8;
  undefined8 uStack_bd0;
  float *pfStack_bc8;
  long *plStack_bc0;
  long *plStack_bb8;
  float *pfStack_ba0;
  undefined8 uStack_b98;
  float fStack_b90;
  float fStack_b8c;
  byte bStack_b88;
  undefined5 uStack_b87;
  undefined2 uStack_b82;
  undefined1 uStack_b80;
  undefined5 uStack_b7f;
  undefined1 uStack_b7a;
  undefined8 uStack_b78;
  byte bStack_b70;
  undefined7 uStack_b6f;
  undefined1 uStack_b68;
  undefined1 uStack_b67;
  undefined8 uStack_b60;
  float *pfStack_b58;
  long lStack_b50;
  ulong uStack_b48;
  long *plStack_b40;
  int *piStack_b38;
  byte bStack_b30;
  undefined1 uStack_b2f;
  undefined1 uStack_b2e;
  undefined5 uStack_b2d;
  undefined8 uStack_b20;
  byte bStack_b18;
  undefined1 uStack_b17;
  undefined1 uStack_b16;
  undefined5 uStack_b15;
  undefined8 uStack_b08;
  byte bStack_b00;
  undefined1 uStack_aff;
  undefined1 uStack_afe;
  undefined5 uStack_afd;
  undefined8 uStack_af0;
  undefined4 uStack_ae8;
  undefined4 uStack_ae4;
  undefined4 uStack_ae0;
  undefined4 uStack_adc;
  long *plStack_ad8;
  long *plStack_ad0;
  float *pfStack_ac8;
  undefined8 uStack_ac0;
  long lStack_ab8;
  long *plStack_ab0;
  long *plStack_aa8;
  undefined *puStack_aa0;
  undefined *puStack_a98;
  undefined *puStack_a90;
  long lStack_a80;
  long lStack_a78;
  long lStack_a70;
  long lStack_a68;
  long lStack_a58;
  float fStack_a50;
  undefined1 auStack_a48 [2552];
  long lStack_50;
  char cStack_48;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  
  plStack_c38 = param_2;
  piStack_b38 = param_3;
  plStack_ad8 = param_5;
  func_0x0b5fb590(auStack_a48);
  lVar19 = lStack_50;
  fStack_a50 = *param_4;
  uVar18 = (ulong)(uint)param_4[1];
  if ((param_4[1] == 0.0) && (uVar18 = 0, *(char *)(lStack_50 + 0x9e7) == '\x01')) {
    puStack_a98 = &UNK_0f53bdc8;
    func_0x0eecd080();
    puStack_a90 = &UNK_0f53c030;
    uStack_bd8 = (undefined *)((ulong)uStack_bd8._4_4_ << 0x20);
    func_0x0eed9bb0(&puStack_a98,4,&uStack_bd8,0);
    *(uint *)(lVar19 + 8) = (uint)uStack_bd8;
    *(undefined2 *)(lVar19 + 0x9e4) = 0;
    *(undefined4 *)(lVar19 + 0x9d4) = 0;
    *(undefined8 *)(lVar19 + 0x9d8) = 0;
    *(uint *)(lVar19 + 0xc) = (uint)uStack_bd8;
    lVar7 = 5;
    while( true ) {
      uVar18 = ((ulong)(((uint)uStack_bd8 >> 0x1e ^ (uint)uStack_bd8) * 0x6c078965) + lVar7) - 4;
      uVar16 = (uint)uVar18;
      *(uint *)(lVar19 + -4 + lVar7 * 4) = uVar16;
      if (lVar7 == 0x191) break;
      uStack_bd8._0_4_ = (((uint)(uVar18 >> 0x1e) & 3 ^ uVar16) * 0x6c078965 + (int)lVar7) - 3;
      *(uint *)(lVar19 + lVar7 * 4) = (uint)uStack_bd8;
      lVar7 = lVar7 + 2;
    }
    *(undefined8 *)(lVar19 + 0x9cc) = 0x18e00000270;
    uVar18 = (ulong)(uint)param_4[1];
  }
  if (*(char *)(lStack_50 + 0x9e7) == '\x01') {
    *(int *)(lStack_50 + 8) = (int)uVar18;
    *(undefined2 *)(lStack_50 + 0x9e4) = 0;
    *(undefined4 *)(lStack_50 + 0x9d4) = 0;
    *(undefined8 *)(lStack_50 + 0x9d8) = 0;
    *(int *)(lStack_50 + 0xc) = (int)uVar18;
    lVar19 = 5;
    while( true ) {
      uVar18 = ((ulong)(((uint)(uVar18 >> 0x1e) ^ (uint)uVar18) * 0x6c078965) + lVar19) - 4;
      uVar16 = (uint)uVar18;
      *(uint *)(lStack_50 + -4 + lVar19 * 4) = uVar16;
      if (lVar19 == 0x191) break;
      uVar16 = (((uint)(uVar18 >> 0x1e) & 3 ^ uVar16) * 0x6c078965 + (int)lVar19) - 3;
      uVar18 = (ulong)uVar16;
      *(uint *)(lStack_50 + lVar19 * 4) = uVar16;
      lVar19 = lVar19 + 2;
    }
    *(undefined8 *)(lStack_50 + 0x9cc) = 0x18e00000270;
  }
  cStack_48 = *(char *)(param_4 + 2) == '\x01';
  fStack_40 = param_4[0x1c];
  fStack_3c = param_4[0x1d];
  fStack_38 = param_4[0x1e];
  fStack_34 = param_4[0x1f];
  if (((((int)param_4[0xe] < (int)param_4[0xb]) || ((int)param_4[0xf] < (int)param_4[0xc])) ||
      ((int)param_4[0x10] < (int)param_4[0xd])) &&
     (uVar18 = *(ulong *)(param_4 + 6), uVar18 != _DAT_0f72b580)) {
    fVar17 = (float)((int)uVar18 << 4);
    uVar16 = (uint)(uVar18 >> 0x1c);
    param_4[0xb] = fVar17;
    param_4[0xc] = 0.0;
    param_4[0xd] = (float)(uVar16 & 0xfffffff0);
    param_4[0xe] = (float)((uint)fVar17 | 0xf);
    param_4[0xf] = 4.47014e-43;
    param_4[0x10] = (float)(uVar16 | 0xf);
  }
  lVar19 = *(long *)(param_4 + 4);
  cStack_c49 = *(char *)((long)param_4 + 0xd);
  puStack_aa0 = &UNK_0f087d20;
  plStack_ad0 = param_1 + 5;
  uStack_bd0 = (int *)((ulong)uStack_bd0._4_4_ << 0x20);
  uStack_bd8 = (undefined *)0x0;
  func_0x0d3620e0(&puStack_a98,plStack_ad0,&uStack_bd8);
  lStack_b50 = func_0x0cc41df0(0xf6ff9e0,&DAT_0f6eaec0,1);
  plVar8 = (long *)param_1[0x11];
  plStack_aa8 = (long *)param_1[0x12];
  plStack_b40 = param_1;
  if (plVar8 != plStack_aa8) {
    pfStack_ac8 = param_4 + 8;
    pfStack_b58 = param_4 + 0x28;
    pfStack_ba0 = param_4;
    lStack_ab8 = lVar19;
LAB_0d3b7d4a:
    lVar7 = plVar8[2];
    if ((((lVar19 == 0) || (*(long *)(lVar7 + 0x68) != *(long *)(lVar19 + 0x68))) &&
        ((*(char *)((long)param_4 + 0xb) != '\x01' ||
         (*(long *)(*(long *)(lVar7 + 0x68) + 200) != _DAT_0f711010)))) &&
       (((*(char *)(param_4 + 3) != '\x01' ||
         (*(long *)(*(long *)(lVar7 + 0x68) + 200) != _DAT_0f7113d0)) &&
        ((_DAT_011983f0 <= fStack_a50 ||
         (uVar16 = func_0x0ee4a030(lStack_50,0),
         (float)((double)uVar16 * _DAT_014f0898) <= fStack_a50)))))) {
      fVar17 = (float)(int)*plVar8;
      fStack_b90 = (float)(int)((ulong)*plVar8 >> 0x20);
      uVar35 = 0;
      uStack_be0 = 0;
      uStack_bdc = 0;
      fVar34 = (float)(int)plVar8[1];
      uVar16 = 0;
      uVar33 = 0;
      if (*(char *)((long)param_4 + 9) == '\x02') {
        fVar17 = (float)((uint)fVar17 ^ _DAT_014e9ac0);
        cVar4 = *(char *)((long)param_4 + 10);
        if (cVar4 == '\x03') goto LAB_0d3b7e59;
LAB_0d3b7e25:
        if (cVar4 == '\x02') {
          fVar34 = (float)((uint)fVar34 ^ _DAT_014e9ac0);
          uVar35 = uVar35 ^ _UNK_014e9ac4;
          uStack_be0 = uStack_be0 ^ _UNK_014e9ac8;
          uStack_bdc = uStack_bdc ^ _UNK_014e9acc;
        }
        else {
          fVar32 = fStack_b90;
          if (cVar4 == '\x01') goto LAB_0d3b7e67;
        }
        uStack_be8 = (long *)CONCAT44(uVar35,fVar34);
      }
      else {
        if (*(char *)((long)param_4 + 9) == '\x01') {
          fVar34 = (float)((uint)fVar34 ^ _DAT_014e9ac0);
          uVar35 = _UNK_014e9ac4;
          uStack_be0 = _UNK_014e9ac8;
          uStack_bdc = _UNK_014e9acc;
        }
        cVar4 = *(char *)((long)param_4 + 10);
        if (cVar4 != '\x03') goto LAB_0d3b7e25;
LAB_0d3b7e59:
        fVar17 = (float)((uint)fVar17 ^ _DAT_014e9ac0);
        fVar32 = (float)((uint)fStack_b90 ^ _UNK_014e9ac4);
        uVar16 = _UNK_014e9ac8;
        uVar33 = _UNK_014e9acc;
LAB_0d3b7e67:
        uStack_be8 = (long *)CONCAT44(fVar32,fVar17);
        uStack_be0 = uVar16;
        uStack_bdc = uVar33;
      }
      uStack_b98 = (long *)CONCAT44(fStack_b90,fStack_b90);
      plStack_c30 = plVar8;
      fStack_b8c = fStack_b90;
      fVar17 = (float)func_0x0eee4390();
      fVar34 = (float)func_0x0eee4390((undefined4)uStack_b98);
      fVar32 = (float)func_0x0eee4390((undefined4)uStack_be8);
      plVar8 = plStack_c30;
      iStack_c40 = (int)fVar32 + piStack_b38[2];
      uStack_c48 = CONCAT44((int)fVar34 + piStack_b38[1],(int)fVar17 + *piStack_b38);
      if (cStack_48 == '\x01') {
        iVar5 = *(int *)((long)plStack_c30 + 4);
        lVar19 = (**(code **)(*plStack_c38 + 0x138))(plStack_c38,&uStack_c48);
        if (lVar19 == 0) goto LAB_0d3b7fab;
        (**(code **)(*plStack_c38 + 0x110))();
        plVar9 = *(long **)(lVar19 + 0xfd0);
        uVar18 = (ulong)(byte)((char)iStack_c40 << 4 | (byte)uStack_c48 & 0xf);
        if (plVar9 == (long *)0x0) {
          sVar15 = *(short *)(lVar19 + 0xbd0 + uVar18 * 2);
LAB_0d3b7f78:
          uStack_c48 = CONCAT44(iVar5 + (int)((ulong)(((long)(short)(sVar15 + *(short *)(*(long *)(
                                                  lVar19 + 0x30) + 0xa8)) << 0x20) + -0x100000000)
                                             >> 0x20),(int)uStack_c48);
          goto LAB_0d3b7fab;
        }
        if (uVar18 < (ulong)(plVar9[1] - *plVar9 >> 1)) {
          sVar15 = *(short *)(*plVar9 + uVar18 * 2) - *(short *)(lVar19 + 0x3c);
          goto LAB_0d3b7f78;
        }
        goto LAB_0d3b987b;
      }
LAB_0d3b7fab:
      if ((int)param_4[0xb] <= (int)param_4[0xe]) {
        if ((int)param_4[0xc] <= (int)param_4[0xf]) {
          if (((int)param_4[0xd] <= (int)param_4[0x10]) &&
             (((lVar19 = lStack_ab8,
               (int)param_4[0xe] < (int)uStack_c48 || (int)uStack_c48 < (int)param_4[0xb] ||
               ((int)param_4[0x10] < iStack_c40 || iStack_c40 < (int)param_4[0xd])) ||
              (uStack_c48._4_4_ < (int)param_4[0xc] || (int)param_4[0xf] < uStack_c48._4_4_))))
          goto LAB_0d3b7d38;
        }
      }
      plVar8 = (long *)(**(code **)(*plStack_c38 + 0x150))();
      uStack_ac0 = (**(code **)(*plVar8 + 0x2c0))(plVar8);
      plVar9 = (long *)func_0x0d374570(lVar7,param_4);
      plVar8 = (long *)plVar9[0xd];
      uVar18 = plVar8[0x19];
      bVar31 = true;
      uStack_b98 = (long *)CONCAT71(uStack_b98._1_7_,1);
      if ((uVar18 != _DAT_0f710c50 &&
          (uVar18 != _DAT_0f710c78 && (uVar18 != _DAT_0f710ca0 && uVar18 != _DAT_0f710cc8))) &&
          uVar18 != _DAT_0f710548) {
        uStack_b98 = (long *)CONCAT71(uStack_b98._1_7_,uVar18 == _DAT_0f710cf0);
      }
      uVar23 = plVar8[0x21];
      unaff_RBP = (long *)CONCAT71((int7)((ulong)unaff_RBP >> 8),uVar18 == _DAT_0f718ca8);
      uStack_be8 = plVar8;
      if ((uVar18 != _DAT_0f718d20 &&
          (uVar18 != _DAT_0f718d70 && (uVar18 != _DAT_0f718cd0 && uVar18 != _DAT_0f718cf8))) &&
          uVar18 != _DAT_0f718ca8) {
        bVar31 = uVar18 == _DAT_0f718d48;
        unaff_RBP = (long *)CONCAT71((int7)((uVar23 & 0xffffffff) >> 8),
                                     (byte)(uVar23 & 0xffffffff) | (byte)uStack_b98 | bVar31);
        if (((uVar23 & 1) != 0 || (byte)uStack_b98 != 0) || bVar31) goto LAB_0d3b8107;
        if (uVar18 == _DAT_0f71ba40) {
          uVar18 = *(ulong *)(pfStack_ba0 + 0x14);
          if (((uVar18 != 0) && ((long *)**(long **)(pfStack_ba0 + 0x12) != (long *)0x0)) &&
             (plVar8 = *(long **)**(long **)(pfStack_ba0 + 0x12), plVar8 != (long *)0x0)) {
            uVar23 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
            uVar23 = (uVar23 >> 2 & 0x3333333333333333) + (uVar23 & 0x3333333333333333);
            bVar3 = (byte)(((uVar23 >> 4) + uVar23 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)
            ;
            plVar11 = plVar8;
            if (bVar3 < 2) {
              do {
                if (plVar11[1] == 0) {
                  if ((char)plVar11[2] == '\0') goto LAB_0d3b88b3;
                }
                else if ((plVar11[1] & uVar18 - 1) != 0) break;
                plVar11 = (long *)*plVar11;
              } while (plVar11 != (long *)0x0);
            }
            else {
              do {
                uVar23 = plVar11[1];
                if (uVar23 == 0) {
                  if ((char)plVar11[2] == '\0') goto LAB_0d3b88b3;
                }
                else {
                  if (uVar23 < uVar18) break;
                  if ((uVar23 | uVar18) >> 0x20 == 0) {
                    uVar23 = (uVar23 & 0xffffffff) % (uVar18 & 0xffffffff);
                  }
                  else {
                    uVar23 = uVar23 % uVar18;
                  }
                  if (uVar23 != 0) break;
                }
                plVar11 = (long *)*plVar11;
              } while (plVar11 != (long *)0x0);
            }
          }
          goto LAB_0d3b8930;
        }
        goto LAB_0d3b8609;
      }
LAB_0d3b8107:
      uVar25 = (undefined7)((ulong)unaff_RBP >> 8);
      unaff_RBP = (long *)CONCAT71(uVar25,uVar18 == _DAT_0f71b5b0);
      bVar3 = 1;
      if ((uVar18 != _DAT_0f718d48 && uVar18 != _DAT_0f710c50) && uVar18 != _DAT_0f71b5b0) {
        unaff_RBP = (long *)CONCAT71(uVar25,uVar18 == _DAT_0f71b5d8);
        bVar3 = 2;
        if ((((uVar18 != _DAT_0f710c78 && uVar18 != _DAT_0f718cf8) && uVar18 != _DAT_0f71b5d8) &&
            (bVar3 = 3,
            (uVar18 != _DAT_0f710ca0 && uVar18 != _DAT_0f718d20) && uVar18 != _DAT_0f71b600)) &&
           (bVar3 = 4,
           (uVar18 != _DAT_0f710cc8 && uVar18 != _DAT_0f718cd0) && uVar18 != _DAT_0f71b628)) {
          bVar3 = (uVar18 == _DAT_0f718d70) * '\x05';
          if (uVar18 == _DAT_0f710cf0) {
            bVar3 = 5;
          }
          if (uVar18 == _DAT_0f71b650) {
            bVar3 = 5;
          }
        }
      }
      uVar22 = *(ulong *)(pfStack_ba0 + 0x14);
      uStack_b48 = uVar23;
      if (uVar22 != 0) {
        uVar24 = (ulong)bVar3;
        uVar20 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
        uVar20 = (uVar20 >> 2 & 0x3333333333333333) + (uVar20 & 0x3333333333333333);
        uVar20 = ((uVar20 >> 4) + uVar20 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar20 >> 0x38 < 2) {
          uVar21 = (ulong)((uint)bVar3 & (int)uVar22 - 1U);
        }
        else {
          uVar21 = uVar24;
          if (uVar22 <= uVar24) {
            uVar21 = (ulong)(byte)(bVar3 - (byte)uVar22);
          }
        }
        plVar11 = *(long **)(*(long *)(pfStack_ba0 + 0x12) + uVar21 * 8);
        if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
          bVar2 = (byte)(uVar20 >> 0x38);
          if (bVar2 < 2) {
            do {
              if (plVar11[1] == uVar24) {
                if (*(byte *)(plVar11 + 2) == bVar3) goto LAB_0d3b84be;
              }
              else if ((plVar11[1] & uVar22 - 1) != uVar21) break;
              plVar11 = (long *)*plVar11;
            } while (plVar11 != (long *)0x0);
          }
          else {
            do {
              uVar20 = plVar11[1];
              if (uVar20 == uVar24) {
                if (*(byte *)(plVar11 + 2) == bVar3) goto LAB_0d3b84be;
              }
              else {
                if (uVar22 <= uVar20) {
                  if ((uVar20 | uVar22) >> 0x20 == 0) {
                    if ((uVar20 & 0xffffffff) % (uVar22 & 0xffffffff) == uVar21) goto LAB_0d3b838b;
                    break;
                  }
                  uVar20 = uVar20 % uVar22;
                }
                if (uVar20 != uVar21) break;
              }
LAB_0d3b838b:
              plVar11 = (long *)*plVar11;
            } while (plVar11 != (long *)0x0);
          }
        }
      }
      goto LAB_0d3b8930;
    }
    goto LAB_0d3b7d38;
  }
LAB_0d3b9711:
  pbStack_c28 = (byte *)0xffffffffffffffff;
  uStack_c20 = CONCAT44(uStack_c20._4_4_,0xffffffff);
  iStack_c40 = (int)plStack_ad0[1];
  uStack_c48 = *plStack_ad0;
  uStack_bd8 = &UNK_0f462ed0;
  uStack_bd0 = piStack_b38;
  plStack_bc0 = plStack_b40;
  plStack_bf8 = (long *)0x0;
  pfStack_bc8 = param_4;
  plStack_bb8 = &uStack_bd8;
  func_0x0d362990(&puStack_a98,plStack_c38,&pbStack_c28,&uStack_c48,
                  *(undefined1 *)((long)param_4 + 10),&uStack_bd8,&uStack_c18);
  if (plStack_bf8 == &uStack_c18) {
    lVar19 = 0x20;
LAB_0d3b9842:
    (**(code **)(*plStack_bf8 + lVar19))();
    if (plStack_bb8 != &uStack_bd8) goto LAB_0d3b97d7;
LAB_0d3b9855:
    lVar19 = 0x20;
  }
  else {
    lVar19 = 0x28;
    if (plStack_bf8 != (long *)0x0) goto LAB_0d3b9842;
    if (plStack_bb8 == &uStack_bd8) goto LAB_0d3b9855;
LAB_0d3b97d7:
    lVar19 = 0x28;
    if (plStack_bb8 == (long *)0x0) goto joined_r0x0d3b986b;
  }
  (**(code **)(*plStack_bb8 + lVar19))();
joined_r0x0d3b986b:
  if (lStack_a68 != 0) {
    func_0x0412a280(lStack_a68,lStack_a58 - lStack_a68);
  }
  if (lStack_a80 != 0) {
    lStack_a78 = lStack_a80;
    func_0x0412a280(lStack_a80,lStack_a70 - lStack_a80);
  }
  return;
LAB_0d3b88b3:
  if (1 < bVar3) {
    do {
      uVar23 = plVar8[1];
      if (uVar23 == 0) {
        if ((char)plVar8[2] == '\0') goto LAB_0d3b88e4;
      }
      else {
        if (uVar23 < uVar18) goto LAB_0d3b986f;
        if ((uVar23 | uVar18) >> 0x20 == 0) {
          uVar23 = (uVar23 & 0xffffffff) % (uVar18 & 0xffffffff);
        }
        else {
          uVar23 = uVar23 % uVar18;
        }
        if (uVar23 != 0) goto LAB_0d3b986f;
      }
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) goto LAB_0d3b986f;
    } while( true );
  }
  do {
    if (plVar8[1] == 0) {
      if ((char)plVar8[2] == '\0') break;
    }
    else if ((plVar8[1] & uVar18 - 1) != 0) goto LAB_0d3b986f;
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) goto LAB_0d3b986f;
  } while( true );
LAB_0d3b88e4:
  bVar3 = *(char *)((long)plVar8 + 0x11) - 1;
  puVar26 = &DAT_0f71ba40;
  if (bVar3 < 5) {
    uVar18 = (ulong)bVar3;
    puVar26 = &UNK_0f4630e0;
LAB_0d3b88ff:
    puVar26 = *(undefined **)(puVar26 + uVar18 * 8);
  }
LAB_0d3b8903:
  lVar19 = func_0x0cc422f0(0xf6ff9e0,puVar26,0,0,0);
  goto LAB_0d3b8916;
LAB_0d3b84be:
  if (bVar2 < 2) {
    uVar20 = (ulong)((uint)bVar3 & (int)uVar22 - 1U);
  }
  else {
    uVar20 = uVar24;
    if (uVar22 <= uVar24) {
      uVar20 = (ulong)(byte)(bVar3 % (byte)uVar22);
    }
  }
  plVar11 = *(long **)(*(long *)(pfStack_ba0 + 0x12) + uVar20 * 8);
  if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
    if (1 < bVar2) {
      do {
        uVar21 = plVar11[1];
        if (uVar21 == uVar24) {
          if (*(byte *)(plVar11 + 2) == bVar3) goto LAB_0d3b8547;
        }
        else {
          if (uVar22 <= uVar21) {
            if ((uVar21 | uVar22) >> 0x20 == 0) {
              uVar21 = (uVar21 & 0xffffffff) % (uVar22 & 0xffffffff);
            }
            else {
              uVar21 = uVar21 % uVar22;
            }
          }
          if (uVar21 != uVar20) goto LAB_0d3b986f;
        }
        plVar11 = (long *)*plVar11;
        if (plVar11 == (long *)0x0) goto LAB_0d3b986f;
      } while( true );
    }
    do {
      if (plVar11[1] == uVar24) {
        if (*(byte *)(plVar11 + 2) == bVar3) goto LAB_0d3b8547;
      }
      else if ((plVar11[1] & uVar22 - 1) != uVar20) break;
      plVar11 = (long *)*plVar11;
      if (plVar11 == (long *)0x0) break;
    } while( true );
  }
  goto LAB_0d3b986f;
LAB_0d3b8547:
  cVar4 = *(char *)((long)plVar11 + 0x11);
  if ((uVar23 & 1) != 0) {
    puVar26 = (undefined *)0xf71b588;
    if ((byte)(cVar4 - 1U) < 5) {
      uVar18 = (ulong)(byte)(cVar4 - 1U);
      puVar26 = &UNK_0f463068;
      goto LAB_0d3b88ff;
    }
    goto LAB_0d3b8903;
  }
  if (bVar31) {
    puVar26 = &DAT_0f718ca8;
    if ((byte)(cVar4 - 1U) < 5) {
      uVar18 = (ulong)(byte)(cVar4 - 1U);
      puVar26 = &UNK_0f463090;
      goto LAB_0d3b88ff;
    }
    goto LAB_0d3b8903;
  }
  if ((byte)uStack_b98 != 0) {
    puVar26 = &DAT_0f710548;
    if ((byte)(cVar4 - 1U) < 5) {
      uVar18 = (ulong)(byte)(cVar4 - 1U);
      puVar26 = &UNK_0f4630b8;
      goto LAB_0d3b88ff;
    }
    goto LAB_0d3b8903;
  }
LAB_0d3b8609:
  pfVar28 = *(float **)pfStack_b58;
  if (pfVar28 != (float *)0x0) {
    lVar19 = (long)plVar8 + 0xd1;
    pfVar29 = pfStack_ba0;
    pfVar30 = pfStack_b58;
    plStack_ab0 = plVar9;
    do {
      uVar23 = *(ulong *)(pfVar28 + 8);
      bVar3 = (uVar23 >= uVar18 && uVar23 != uVar18) - (uVar23 < uVar18);
      if (uVar23 == uVar18) {
        lVar7 = plVar8[0x1c];
        plVar9 = (long *)plVar8[0x1b];
        if ((*(byte *)(plVar8 + 0x1a) & 1) == 0) {
          lVar7 = lVar19;
          plVar9 = (long *)(ulong)(*(byte *)(plVar8 + 0x1a) >> 1);
        }
        if ((*(byte *)(pfVar28 + 10) & 1) == 0) {
          unaff_RBP = (long *)(ulong)(*(byte *)(pfVar28 + 10) >> 1);
          lVar27 = (long)pfVar28 + 0x29;
        }
        else {
          unaff_RBP = *(long **)(pfVar28 + 0xc);
          lVar27 = *(long *)(pfVar28 + 0xe);
        }
        plVar8 = unaff_RBP;
        if (plVar9 < unaff_RBP) {
          plVar8 = plVar9;
        }
        iVar5 = func_0x0eee2ff0(lVar27,lVar7,plVar8);
        if (iVar5 == 0) {
          iVar5 = (int)(char)((plVar9 < unaff_RBP) - (unaff_RBP < plVar9));
        }
        bVar3 = (0 < iVar5) - (iVar5 < 0);
        plVar8 = uStack_be8;
        pfVar29 = pfStack_ba0;
        plVar9 = plStack_ab0;
      }
      if (-1 < (char)bVar3) {
        pfVar30 = pfVar28;
      }
      pfVar28 = *(float **)((long)pfVar28 + (ulong)(bVar3 >> 4 & 8));
    } while (pfVar28 != (float *)0x0);
    if (pfVar30 != pfStack_b58) {
      if (uVar18 == *(ulong *)(pfVar30 + 8)) {
        bVar31 = (*(byte *)(pfVar30 + 10) & 1) != 0;
        lVar7 = (long)pfVar30 + 0x29;
        if (bVar31) {
          lVar7 = *(long *)(pfVar30 + 0xe);
        }
        uVar18 = (ulong)(*(byte *)(pfVar30 + 10) >> 1);
        if (bVar31) {
          uVar18 = *(ulong *)(pfVar30 + 0xc);
        }
        if ((*(byte *)(plVar8 + 0x1a) & 1) == 0) {
          uVar23 = (ulong)(*(byte *)(plVar8 + 0x1a) >> 1);
        }
        else {
          uVar23 = plVar8[0x1b];
          lVar19 = plVar8[0x1c];
        }
        uVar22 = uVar23;
        if (uVar18 < uVar23) {
          uVar22 = uVar18;
        }
        iVar5 = func_0x0eee2ff0(lVar19,lVar7,uVar22);
        bVar31 = -1 < iVar5;
        if (iVar5 == 0) {
          bVar31 = uVar18 <= uVar23;
        }
        if (bVar31) {
LAB_0d3b877c:
          uVar18 = *(ulong *)(pfVar29 + 0x14);
          if (uVar18 != 0) {
            uVar23 = *(ulong *)(pfVar30 + 0x14);
            cVar4 = (char)uVar23;
            uVar20 = uVar23 & 0xff;
            uVar22 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
            uVar22 = (uVar22 >> 2 & 0x3333333333333333) + (uVar22 & 0x3333333333333333);
            uVar22 = ((uVar22 >> 4) + uVar22 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
            if (uVar22 >> 0x38 < 2) {
              uVar24 = (ulong)((uint)uVar20 & (int)uVar18 - 1U);
            }
            else {
              uVar24 = uVar20;
              if (uVar18 <= uVar20) {
                uVar24 = (ulong)(byte)(((ushort)uVar23 & 0xff) % (ushort)(byte)uVar18);
              }
            }
            plVar8 = *(long **)(*(long *)(pfVar29 + 0x12) + uVar24 * 8);
            if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
              bVar3 = (byte)(uVar22 >> 0x38);
              if (bVar3 < 2) {
                do {
                  if (plVar8[1] == uVar20) {
                    if ((char)plVar8[2] == cVar4) goto LAB_0d3b9610;
                  }
                  else if ((plVar8[1] & uVar18 - 1) != uVar24) break;
                  plVar8 = (long *)*plVar8;
                } while (plVar8 != (long *)0x0);
              }
              else {
                do {
                  uVar22 = plVar8[1];
                  if (uVar22 == uVar20) {
                    if ((char)plVar8[2] == cVar4) goto LAB_0d3b9610;
                  }
                  else {
                    if (uVar18 <= uVar22) {
                      if ((uVar22 | uVar18) >> 0x20 == 0) {
                        if ((uVar22 & 0xffffffff) % (uVar18 & 0xffffffff) == uVar24)
                        goto LAB_0d3b886b;
                        break;
                      }
                      uVar22 = uVar22 % uVar18;
                    }
                    if (uVar22 != uVar24) break;
                  }
LAB_0d3b886b:
                  plVar8 = (long *)*plVar8;
                } while (plVar8 != (long *)0x0);
              }
            }
          }
        }
      }
      else if (*(ulong *)(pfVar30 + 8) <= uVar18) goto LAB_0d3b877c;
    }
  }
  goto LAB_0d3b8930;
LAB_0d3b967c:
  lVar19 = func_0x0cc422f0(0xf6ff9e0,
                           *(undefined8 *)
                            (*(long *)(*(long *)(pfVar29 + 0x20) + *(long *)(pfVar30 + 0x12) * 0x18)
                            + (ulong)*(byte *)((long)plVar8 + 0x11) * 8),0,0,0);
  if (lVar19 == 0) goto LAB_0d3b8930;
LAB_0d3b8916:
  plVar9 = (long *)func_0x0c9ce260(uStack_ac0,plVar9,lVar19);
LAB_0d3b8930:
  if (CONCAT44(fStack_3c,fStack_40) != 0) {
    uVar10 = (**(code **)(*plStack_c38 + 0x10))(plStack_c38,&uStack_c48);
    unaff_RBP = (long *)func_0x0cc41df0(0xf6ff9e0,&DAT_0f6eaec0,1);
    plVar11 = (long *)((undefined8 *)CONCAT44(fStack_3c,fStack_40))[1];
    for (plVar8 = *(long **)CONCAT44(fStack_3c,fStack_40); plVar8 != plVar11; plVar8 = plVar8 + 1) {
      plVar13 = (long *)*plVar8;
      if ((plVar13 != (long *)0x0) && (plVar9 != (long *)0x0)) {
        plVar12 = (long *)*plVar13;
        if (((plVar12 == (long *)0x0) ||
            (((cVar4 = (**(code **)(*plVar12 + 0x10))(plVar12,plVar9,auStack_a48), cVar4 == '\0' ||
              (plVar12 = (long *)plVar13[1], plVar12 == (long *)0x0)) ||
             (cVar4 = (**(code **)(*plVar12 + 0x10))(plVar12,uVar10,auStack_a48), cVar4 == '\0'))))
           || ((plVar12 = (long *)plVar13[2], plVar12 == (long *)0x0 ||
               (cVar4 = (**(code **)(*plVar12 + 0x18))(plVar12,&uStack_c48,pfStack_ac8,auStack_a48),
               cVar4 == '\0')))) {
          bVar31 = false;
        }
        else {
          unaff_RBP = (long *)plVar13[3];
          bVar31 = true;
        }
        plVar13 = plVar9;
        if (unaff_RBP != (long *)0x0) {
          plVar13 = unaff_RBP;
        }
        if (bVar31) {
          plVar9 = plVar13;
        }
      }
    }
  }
  if (*(long *)(plVar9[0xd] + 200) == _DAT_0f6eaec0 && cStack_c49 == '\x01') {
    iVar5 = uStack_c48._4_4_;
    lVar19 = (**(code **)(*plStack_c38 + 0x128))();
    param_4 = pfStack_ba0;
    plVar8 = plStack_c30;
    if (iVar5 < *(short *)(lVar19 + 0xac)) {
      plVar9 = (long *)func_0x0cc41df0(0xf6ff9e0,&DAT_0f713f00,1);
    }
    lVar19 = plVar8[4];
  }
  else {
    lVar19 = plStack_c30[4];
    plVar8 = plStack_c30;
    param_4 = pfStack_ba0;
  }
  if (((lVar19 != 0) && (*(long *)(lVar19 + 0x18) != 0)) &&
     (lVar19 = (**(code **)(*plStack_c38 + 0x138))(plStack_c38,&uStack_c48), lVar19 != 0)) {
    uStack_bd8 = (undefined *)
                 (CONCAT71(uStack_bd8._1_7_,(undefined1)uStack_c48) & 0xffffffffffffff0f);
    uStack_bd8 = (undefined *)
                 (CONCAT62(uStack_bd8._2_6_,CONCAT11((char)iStack_c40,(undefined1)uStack_bd8)) &
                 0xffffffffffff0fff);
    uStack_bd8._0_4_ =
         CONCAT22(uStack_c48._4_2_ - *(short *)((long)plStack_c38 + 0x42),(undefined2)uStack_bd8);
    lVar19 = func_0x0cb18130(lVar19 + 0x13d0,&uStack_bd8);
    if ((lVar19 != 0) && (*(long *)(lVar19 + 0x18) != 0)) {
      pfStack_bc8 = (float *)0x0;
      plStack_bc0 = (long *)0x0;
      uStack_bd8 = (undefined *)0x0;
      uStack_bd0 = (int *)0x0;
      plStack_bb8 = (long *)0x1;
      (**(code **)(*plStack_c38 + 0xf8))(plStack_c38,&uStack_c48,lStack_b50,4,0,&uStack_bd8);
    }
  }
  pfStack_bc8 = (float *)0x0;
  plStack_bc0 = (long *)0x0;
  uStack_bd8 = (undefined *)0x0;
  uStack_bd0 = (int *)0x0;
  plStack_bb8 = (long *)0x1;
  cVar4 = (**(code **)(*plStack_c38 + 0xf8))(plStack_c38,&uStack_c48,plVar9,2,0,&uStack_bd8);
  lVar19 = lStack_ab8;
  if (cVar4 == '\0') goto LAB_0d3b7d38;
  if (cStack_c49 != '\0') {
    iVar5 = uStack_c48._4_4_;
    lVar19 = (**(code **)(*plStack_c38 + 0x128))();
    if ((iVar5 < *(short *)(lVar19 + 0xac)) && ((*(byte *)(plVar9 + 0x17) & 1) != 0)) {
      uVar10 = func_0x0cc41df0(0xf6ff9e0,&DAT_0f713f00,1);
      (**(code **)(*plStack_c38 + 0x100))(plStack_c38,&uStack_c48,uVar10,2);
    }
  }
  if ((*(long *)(plVar8[3] + 0x110) != *(long *)(lStack_b50 + 0x110)) &&
     ((*(byte *)(plVar9 + 0x17) & 1) != 0)) {
    (**(code **)(*plStack_c38 + 0x100))(plStack_c38,&uStack_c48,plVar8[3],2);
  }
  plVar11 = (long *)(**(code **)(*plStack_c38 + 0x150))();
  (**(code **)(*plVar11 + 0xc48))(&uStack_ae8,plVar11);
  uStack_bd8 = (undefined *)((ulong)uStack_bd8 & 0xffffffffffffff00);
  uStack_bd0 = (int *)0x0;
  pfStack_bc8 = (float *)0x0;
  lVar19 = CONCAT44(uStack_adc,uStack_ae0);
  uStack_c18 = (byte *)CONCAT44(uStack_ae4,uStack_ae8);
  uStack_c10 = CONCAT44(uStack_adc,uStack_ae0);
  if (lVar19 == 0) {
    func_0x0ca11350(&uStack_bd8,&uStack_c18);
    lVar19 = CONCAT44(uStack_adc,uStack_ae0);
  }
  else {
    LOCK();
    *(long *)(lVar19 + 0x10) = *(long *)(lVar19 + 0x10) + 1;
    UNLOCK();
    func_0x0ca11350(&uStack_bd8,&uStack_c18);
    func_0x0412c2d0(lVar19);
    lVar19 = CONCAT44(uStack_adc,uStack_ae0);
  }
  if (lVar19 != 0) {
    func_0x0412c2d0();
  }
  lVar19 = plVar8[4];
  if ((lVar19 != 0) && (*(long *)(lVar19 + 0x18) != 0)) {
    unaff_RBP = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (unaff_RBP == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *unaff_RBP = (long)&UNK_0f47e0b0;
    plStack_c30 = unaff_RBP + 2;
    unaff_RBP[2] = 0;
    unaff_RBP[3] = 0;
    unaff_RBP[1] = (long)plStack_c30;
    func_0x0d6bd5f0(unaff_RBP,lVar19);
    lVar19 = (**(code **)(*plStack_c38 + 0x138))(plStack_c38,&uStack_c48);
    if (lVar19 != 0) {
      uStack_c18 = (byte *)(CONCAT71(uStack_c18._1_7_,(undefined1)uStack_c48) & 0xffffffffffffff0f);
      uStack_c18 = (byte *)(CONCAT62(uStack_c18._2_6_,
                                     CONCAT11((char)iStack_c40,(undefined1)uStack_c18)) &
                           0xffffffffffff0fff);
      uStack_c18._0_4_ =
           CONCAT22(uStack_c48._4_2_ - *(short *)((long)plStack_c38 + 0x42),(undefined2)uStack_c18);
      lVar19 = func_0x0cb18130(lVar19 + 0x13d0,&uStack_c18);
      if ((lVar19 != 0) && (*(long **)(lVar19 + 0x18) != (long *)0x0)) {
        uStack_be8 = unaff_RBP + 1;
        bStack_b00 = 2;
        uStack_aff = 0x78;
        uStack_afe = 0;
        uVar6 = (int)uStack_c48;
        uStack_c18 = &bStack_b00;
        uStack_b98 = *(long **)(lVar19 + 0x18);
        lVar19 = func_0x0d6c9580(uStack_be8,uStack_c18,&UNK_01563a4f,&uStack_c18,&pbStack_c28);
        if ((ulong)*(uint *)(lVar19 + 0x60) != 0xffffffff) {
          (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar19 + 0x60) * 8))
                    (&uStack_c18,lVar19 + 0x38);
        }
        *(undefined **)(lVar19 + 0x38) = &UNK_0f47e2e0;
        *(undefined4 *)(lVar19 + 0x40) = uVar6;
        *(undefined4 *)(lVar19 + 0x60) = 3;
        if ((bStack_b00 & 1) != 0) {
          func_0x0412a280(uStack_af0,
                          CONCAT53(uStack_afd,CONCAT12(uStack_afe,CONCAT11(uStack_aff,bStack_b00)))
                          & 0xfffffffffffffffe);
        }
        bStack_b18 = 2;
        uStack_b17 = 0x79;
        uStack_b16 = 0;
        uVar6 = uStack_c48._4_4_;
        uStack_c18 = &bStack_b18;
        lVar19 = func_0x0d6c9580(uStack_be8,uStack_c18,&UNK_01563a4f,&uStack_c18,&pbStack_c28);
        if ((ulong)*(uint *)(lVar19 + 0x60) != 0xffffffff) {
          (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar19 + 0x60) * 8))
                    (&uStack_c18,lVar19 + 0x38);
        }
        *(undefined **)(lVar19 + 0x38) = &UNK_0f47e2e0;
        *(undefined4 *)(lVar19 + 0x40) = uVar6;
        *(undefined4 *)(lVar19 + 0x60) = 3;
        if ((bStack_b18 & 1) != 0) {
          func_0x0412a280(uStack_b08,
                          CONCAT53(uStack_b15,CONCAT12(uStack_b16,CONCAT11(uStack_b17,bStack_b18)))
                          & 0xfffffffffffffffe);
        }
        iVar5 = iStack_c40;
        bStack_b30 = 2;
        uStack_b2f = 0x7a;
        uStack_b2e = 0;
        uStack_c18 = &bStack_b30;
        lVar19 = func_0x0d6c9580(uStack_be8,uStack_c18,&UNK_01563a4f,&uStack_c18,&pbStack_c28);
        if ((ulong)*(uint *)(lVar19 + 0x60) != 0xffffffff) {
          (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar19 + 0x60) * 8))
                    (&uStack_c18,lVar19 + 0x38);
        }
        *(undefined **)(lVar19 + 0x38) = &UNK_0f47e2e0;
        *(int *)(lVar19 + 0x40) = iVar5;
        *(undefined4 *)(lVar19 + 0x60) = 3;
        if ((bStack_b30 & 1) != 0) {
          func_0x0412a280(uStack_b20,
                          CONCAT53(uStack_b2d,CONCAT12(uStack_b2e,CONCAT11(uStack_b2f,bStack_b30)))
                          & 0xfffffffffffffffe);
        }
        plVar11 = uStack_be8;
        uStack_c18 = &UNK_0121247c;
        uStack_c10 = 8;
        plVar12 = (long *)func_0x0d6c97a0(uStack_be8,&uStack_c18);
        plVar13 = uStack_b98;
        if (plVar12 == plStack_c30) {
LAB_0d3b9036:
          uStack_c18 = &UNK_013bcda7;
          uStack_c10 = 9;
          plVar12 = (long *)func_0x0d6c97a0(plVar11,&uStack_c18);
          if (plVar12 != plStack_c30) {
            if ((ulong)*(uint *)(plVar12 + 0xc) == 0xffffffff) goto LAB_0d3b9880;
            pbStack_c28 = &bStack_c4a;
            lVar19 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(plVar12 + 0xc) * 8))
                               (&pbStack_c28,plVar12 + 7);
            if (lVar19 != 0) {
              pbStack_c28 = &UNK_013bcda7;
              uStack_c20 = 9;
              plVar13 = (long *)func_0x0d6c9880(plVar11,&pbStack_c28);
              if (plVar13 == plStack_c30) {
                plVar12 = (long *)0x0;
              }
              else {
                plVar12 = plVar13 + 7;
                if ((int)plVar13[0xc] != 10) {
                  plVar12 = (long *)0x0;
                }
              }
              pbStack_c28 = &UNK_0133e2b9;
              uStack_c20 = 2;
              plVar13 = (long *)func_0x0d6c97a0(plVar12 + 1,&pbStack_c28);
              if (plVar13 == plVar12 + 2) {
                plVar12 = (long *)0x0;
              }
              else {
                plVar12 = plVar13 + 7;
                if ((int)plVar13[0xc] != 8) {
                  plVar12 = (long *)0x0;
                }
              }
              pbVar14 = (byte *)(plVar12 + 1);
              if (plVar12 == (long *)0x0) {
                pbVar14 = &UNK_01e79d90;
              }
              if ((*pbVar14 & 1) == 0) {
                uStack_c08 = *(undefined8 *)(pbVar14 + 0x10);
                uStack_c18 = *(byte **)pbVar14;
                uStack_c10 = *(undefined8 *)(pbVar14 + 8);
              }
              else {
                func_0x0412e5e0(&uStack_c18,*(undefined8 *)(pbVar14 + 0x10),
                                *(undefined8 *)(pbVar14 + 8));
              }
              uVar6 = func_0x0bf49880(&uStack_c18);
              bStack_b70 = 0x10;
              uStack_b6f = 0x49797469746e45;
              uStack_b68 = 100;
              uStack_b67 = 0;
              pbStack_c28 = &bStack_b70;
              lVar19 = func_0x0d6c9580(plVar11,pbStack_c28,&UNK_01563a4f,&pbStack_c28,&bStack_c4a);
              if ((ulong)*(uint *)(lVar19 + 0x60) != 0xffffffff) {
                (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar19 + 0x60) * 8))
                          (&pbStack_c28,lVar19 + 0x38);
              }
              *(undefined **)(lVar19 + 0x38) = &UNK_0f47e2e0;
              *(undefined4 *)(lVar19 + 0x40) = uVar6;
              *(undefined4 *)(lVar19 + 0x60) = 3;
              if ((bStack_b70 & 1) != 0) {
                func_0x0412a280(uStack_b60,CONCAT71(uStack_b6f,bStack_b70) & 0xfffffffffffffffe);
              }
              plVar11 = uStack_be8;
              pbStack_c28 = &UNK_013bcda7;
              uStack_c20 = 9;
              plVar13 = (long *)func_0x0d6c9880(uStack_be8,&pbStack_c28);
              if (plVar13 != plStack_c30) {
                func_0x0d6c9f40(plVar11,plVar13);
              }
              plVar13 = uStack_b98;
              if (((ulong)uStack_c18 & 1) != 0) {
                func_0x0412a280(uStack_c08,(ulong)uStack_c18 & 0xfffffffffffffffe);
              }
            }
          }
        }
        else {
          if ((ulong)*(uint *)(plVar12 + 0xc) == 0xffffffff) goto LAB_0d3b9880;
          pbStack_c28 = &bStack_c4a;
          lVar19 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(plVar12 + 0xc) * 8))
                             (&pbStack_c28,plVar12 + 7);
          if (lVar19 == 0) goto LAB_0d3b9036;
        }
        uStack_c18 = &UNK_0136e369;
        uStack_c10 = 0xf;
        plVar12 = (long *)func_0x0d6c97a0(plVar11,&uStack_c18);
        if (plVar12 != plStack_c30) {
          if ((ulong)*(uint *)(plVar12 + 0xc) == 0xffffffff) goto LAB_0d3b9880;
          pbStack_c28 = &bStack_c4a;
          lVar19 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(plVar12 + 0xc) * 8))
                             (&pbStack_c28,plVar12 + 7);
          if (lVar19 != 0) {
            uStack_c18 = &UNK_0136e369;
            uStack_c10 = 0xf;
            plVar12 = (long *)func_0x0d6c9880(plVar11,&uStack_c18);
            if (plVar12 != plStack_c30) {
              func_0x0d6c9f40(plVar11,plVar12);
            }
          }
        }
        if (*(char *)((long)plVar13 + 0x14) == '\x02') {
          uStack_c18 = &UNK_01283436;
          uStack_c10 = 0xd;
          plVar12 = (long *)func_0x0d6c97a0(plVar11,&uStack_c18);
          if (plVar12 != plStack_c30) {
            if ((ulong)*(uint *)(plVar12 + 0xc) == 0xffffffff) goto LAB_0d3b9880;
            pbStack_c28 = &bStack_c4a;
            lVar19 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(plVar12 + 0xc) * 8))
                               (&pbStack_c28,plVar12 + 7);
            if (lVar19 != 0) goto LAB_0d3b9584;
          }
          bStack_b88 = 0x1a;
          uStack_b7f = 0x6465655365;
          uStack_b87 = 0x54746f6f4c;
          uStack_b82 = 0x6261;
          uStack_b80 = 0x6c;
          uStack_b7a = 0;
          uVar6 = (**(code **)(*plStack_ad8 + 0x10))();
          plStack_c30 = (long *)CONCAT44(plStack_c30._4_4_,uVar6);
          uStack_c18 = &bStack_b88;
          lVar19 = func_0x0d6c9580(plVar11,uStack_c18,&UNK_01563a4f,&uStack_c18,&pbStack_c28);
          if ((ulong)*(uint *)(lVar19 + 0x60) != 0xffffffff) {
            (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar19 + 0x60) * 8))
                      (&uStack_c18,lVar19 + 0x38);
          }
          *(undefined **)(lVar19 + 0x38) = &UNK_0f47e2e0;
          *(undefined4 *)(lVar19 + 0x40) = plStack_c30._0_4_;
          *(undefined4 *)(lVar19 + 0x60) = 3;
          if ((bStack_b88 & 1) != 0) {
            func_0x0412a280(uStack_b78,
                            CONCAT26(uStack_b82,CONCAT51(uStack_b87,bStack_b88)) &
                            0xfffffffffffffffe);
          }
        }
        else if (*(char *)((long)plVar13 + 0x14) == '\x1c') {
          uStack_c18 = &UNK_01254d89;
          uStack_c10 = 0;
          plVar12 = (long *)func_0x0d6c97a0(plVar11,&uStack_c18);
          if (plVar12 != plStack_c30) {
            if ((ulong)*(uint *)(plVar12 + 0xc) == 0xffffffff) goto LAB_0d3b9880;
            pbStack_c28 = &bStack_c4a;
            lVar19 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(plVar12 + 0xc) * 8))
                               (&pbStack_c28,plVar12 + 7);
            if (lVar19 != 0) {
              uStack_c18 = &UNK_01254d89;
              uStack_c10 = 0;
              plVar12 = (long *)func_0x0d6c9880(plVar11,&uStack_c18);
              if (plVar12 != plStack_c30) {
                func_0x0d6c9f40(plVar11,plVar12);
              }
            }
          }
        }
LAB_0d3b9584:
        uVar10 = (**(code **)(*plStack_c38 + 0x150))();
        (**(code **)(*plVar13 + 0x10))(plVar13,uVar10,unaff_RBP,&puStack_aa0);
        (**(code **)(*plVar13 + 0x48))(plVar13,plStack_c38);
      }
    }
    (**(code **)(*unaff_RBP + 8))(unaff_RBP);
  }
  uVar6 = (**(code **)(*plStack_b40 + 0x20))(plStack_b40,plVar9);
  func_0x0d3621f0(&puStack_a98,plVar8,plVar9,uVar6);
  func_0x0ca11610(&uStack_bd8);
  lVar19 = lStack_ab8;
  if (pfStack_bc8 != (float *)0x0) {
    func_0x0412c2d0();
    lVar19 = lStack_ab8;
  }
LAB_0d3b7d38:
  plVar8 = plVar8 + 5;
  if (plVar8 == plStack_aa8) goto LAB_0d3b9711;
  goto LAB_0d3b7d4a;
LAB_0d3b9610:
  if (bVar3 < 2) {
    uVar22 = (ulong)((uint)uVar20 & (int)uVar18 - 1U);
  }
  else {
    uVar22 = uVar20;
    if (uVar18 <= uVar20) {
      uVar22 = (ulong)(byte)(((ushort)uVar23 & 0xff) % (ushort)(byte)uVar18);
    }
  }
  plVar8 = *(long **)(*(long *)(pfVar29 + 0x12) + uVar22 * 8);
  if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
    if (1 < bVar3) {
      do {
        uVar23 = plVar8[1];
        if (uVar23 == uVar20) {
          if ((char)plVar8[2] == cVar4) goto LAB_0d3b967c;
        }
        else {
          if (uVar18 <= uVar23) {
            if ((uVar23 | uVar18) >> 0x20 == 0) {
              uVar23 = (uVar23 & 0xffffffff) % (uVar18 & 0xffffffff);
            }
            else {
              uVar23 = uVar23 % uVar18;
            }
          }
          if (uVar23 != uVar22) goto LAB_0d3b986f;
        }
        plVar8 = (long *)*plVar8;
        if (plVar8 == (long *)0x0) goto LAB_0d3b986f;
      } while( true );
    }
    do {
      if (plVar8[1] == uVar20) {
        if ((char)plVar8[2] == cVar4) goto LAB_0d3b967c;
      }
      else if ((plVar8[1] & uVar18 - 1) != uVar22) break;
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) break;
    } while( true );
  }
LAB_0d3b986f:
  func_0x04882ef0(&UNK_012a1eae);
LAB_0d3b987b:
  func_0x0c6e2980();
LAB_0d3b9880:
  uVar10 = func_0x04931450();
  uVar10 = func_0x04882e20(uVar10);
  uVar10 = func_0x04882e20(uVar10);
  if ((bStack_b70 & 1) != 0) {
    func_0x0412a280(uStack_b60,CONCAT71(uStack_b6f,bStack_b70) & 0xfffffffffffffffe);
  }
  if (((ulong)uStack_c18 & 1) != 0) {
    func_0x0412a280(uStack_c08,(ulong)uStack_c18 & 0xfffffffffffffffe);
  }
  (**(code **)(*unaff_RBP + 8))(unaff_RBP);
  func_0x0ca115f0(&uStack_bd8);
  func_0x0d36d6b0(&puStack_a98);
  uVar10 = func_0x0eee2d70(uVar10);
  func_0x0d36d6b0(&puStack_a98);
  uVar10 = func_0x0eee2d70(uVar10);
  func_0x0d36d6b0(&puStack_a98);
  func_0x0eee2d70(uVar10);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


```

## `d3bc540` — LegacyStructureTemplate::vslot4

- instructions: 199

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 LegacyStructureTemplate_v4(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x34);
  if ((int)uVar1 < 1) {
    cVar3 = (**(code **)(**(long **)(param_2 + 0x68) + 0xe0))();
    if (cVar3 != '\0') {
      return 1;
    }
    cVar3 = (**(code **)(**(long **)(param_2 + 0x68) + 0xd0))();
    if (cVar3 != '\0') {
      return 2;
    }
    lVar2 = *(long *)(*(long *)(param_2 + 0x68) + 200);
    lVar4 = 0x10;
    do {
      if (lVar2 == **(long **)(&UNK_0f3f0400 + lVar4)) {
        lVar4 = lVar4 + -0x10;
LAB_0cb0b82c:
        if (lVar4 != 0x288) {
          return 2;
        }
        break;
      }
      if (lVar2 == **(long **)(&UNK_0f3f0408 + lVar4)) {
        if (lVar4 != 0x290) {
          return 2;
        }
        break;
      }
      if (lVar2 == **(long **)(&UNK_0f3f0410 + lVar4)) goto LAB_0cb0b82c;
      lVar4 = lVar4 + 0x18;
    } while (lVar4 != 0x298);
  }
  else if (uVar1 < 0x540) {
    cVar3 = (**(code **)(**(long **)(param_2 + 0x68) + 0xd0))();
    if (cVar3 != '\0') {
      return 2;
    }
  }
  else if (0x5aa < uVar1) {
    return 0;
  }
  lVar2 = *(long *)(*(long *)(param_2 + 0x68) + 200);
  if (((((((((lVar2 != lRam000000000f7137f0) && (lVar2 != lRam000000000f713818)) &&
           (lVar2 != lRam000000000f713840)) &&
          ((lVar2 != lRam000000000f714040 && (lVar2 != lRam000000000f7140e0)))) &&
         ((lVar2 != lRam000000000f714180 &&
          ((lVar2 != lRam000000000f714220 && (lVar2 != lRam000000000f7142c0)))))) &&
        (lVar2 != lRam000000000f714360)) &&
       ((((lVar2 != lRam000000000f714400 && (lVar2 != lRam000000000f7144a0)) &&
         (lVar2 != lRam000000000f714540)) &&
        (((lVar2 != lRam000000000f7145e0 && (lVar2 != lRam000000000f714680)) &&
         ((lVar2 != lRam000000000f714720 &&
          ((lVar2 != lRam000000000f7147c0 && (lVar2 != lRam000000000f714860)))))))))) &&
      (((lVar2 != lRam000000000f714900 &&
        (((lVar2 != lRam000000000f7149a0 && (lVar2 != lRam000000000f714068)) &&
         (lVar2 != lRam000000000f714108)))) &&
       (((lVar2 != lRam000000000f7141a8 && (lVar2 != lRam000000000f714248)) &&
        (((lVar2 != lRam000000000f7142e8 &&
          ((lVar2 != lRam000000000f714388 && (lVar2 != lRam000000000f714428)))) &&
         (lVar2 != lRam000000000f7144c8)))))))) &&
     ((((((((lVar2 != lRam000000000f714568 && (lVar2 != lRam000000000f714608)) &&
           (lVar2 != lRam000000000f7146a8)) &&
          ((lVar2 != lRam000000000f714748 && (lVar2 != lRam000000000f7147e8)))) &&
         (lVar2 != lRam000000000f714888)) &&
        (((lVar2 != lRam000000000f714928 && (lVar2 != lRam000000000f7149c8)) &&
         ((lVar2 != lRam000000000f713868 &&
          (((lVar2 != lRam000000000f713890 && (lVar2 != lRam000000000f7138b8)) &&
           (lVar2 != lRam000000000f7138e0)))))))) &&
       ((lVar2 != lRam000000000f713908 && (lVar2 != lRam000000000f713930)))) &&
      ((lVar2 != lRam000000000f713958 &&
       ((lVar2 != lRam000000000f713980 && (lVar2 != _DAT_0f715380)))))))) {
    return 0;
  }
  return 2;
}


```

## `d3bc550` — LegacyStructureTemplate::vslot4

- instructions: 4

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 LegacyStructureTemplate_v4(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x2c);
  if ((int)uVar1 < 1) {
    cVar3 = (**(code **)(**(long **)(param_2 + 0x68) + 0xe0))();
    if (cVar3 != '\0') {
      return 1;
    }
    cVar3 = (**(code **)(**(long **)(param_2 + 0x68) + 0xd0))();
    if (cVar3 != '\0') {
      return 2;
    }
    lVar2 = *(long *)(*(long *)(param_2 + 0x68) + 200);
    lVar4 = 0x10;
    do {
      if (lVar2 == **(long **)(&UNK_0f3f0400 + lVar4)) {
        lVar4 = lVar4 + -0x10;
LAB_0cb0b82c:
        if (lVar4 != 0x288) {
          return 2;
        }
        break;
      }
      if (lVar2 == **(long **)(&UNK_0f3f0408 + lVar4)) {
        if (lVar4 != 0x290) {
          return 2;
        }
        break;
      }
      if (lVar2 == **(long **)(&UNK_0f3f0410 + lVar4)) goto LAB_0cb0b82c;
      lVar4 = lVar4 + 0x18;
    } while (lVar4 != 0x298);
  }
  else if (uVar1 < 0x540) {
    cVar3 = (**(code **)(**(long **)(param_2 + 0x68) + 0xd0))();
    if (cVar3 != '\0') {
      return 2;
    }
  }
  else if (0x5aa < uVar1) {
    return 0;
  }
  lVar2 = *(long *)(*(long *)(param_2 + 0x68) + 200);
  if (((((((((lVar2 != lRam000000000f7137f0) && (lVar2 != lRam000000000f713818)) &&
           (lVar2 != lRam000000000f713840)) &&
          ((lVar2 != lRam000000000f714040 && (lVar2 != lRam000000000f7140e0)))) &&
         ((lVar2 != lRam000000000f714180 &&
          ((lVar2 != lRam000000000f714220 && (lVar2 != lRam000000000f7142c0)))))) &&
        (lVar2 != lRam000000000f714360)) &&
       ((((lVar2 != lRam000000000f714400 && (lVar2 != lRam000000000f7144a0)) &&
         (lVar2 != lRam000000000f714540)) &&
        (((lVar2 != lRam000000000f7145e0 && (lVar2 != lRam000000000f714680)) &&
         ((lVar2 != lRam000000000f714720 &&
          ((lVar2 != lRam000000000f7147c0 && (lVar2 != lRam000000000f714860)))))))))) &&
      (((lVar2 != lRam000000000f714900 &&
        (((lVar2 != lRam000000000f7149a0 && (lVar2 != lRam000000000f714068)) &&
         (lVar2 != lRam000000000f714108)))) &&
       (((lVar2 != lRam000000000f7141a8 && (lVar2 != lRam000000000f714248)) &&
        (((lVar2 != lRam000000000f7142e8 &&
          ((lVar2 != lRam000000000f714388 && (lVar2 != lRam000000000f714428)))) &&
         (lVar2 != lRam000000000f7144c8)))))))) &&
     ((((((((lVar2 != lRam000000000f714568 && (lVar2 != lRam000000000f714608)) &&
           (lVar2 != lRam000000000f7146a8)) &&
          ((lVar2 != lRam000000000f714748 && (lVar2 != lRam000000000f7147e8)))) &&
         (lVar2 != lRam000000000f714888)) &&
        (((lVar2 != lRam000000000f714928 && (lVar2 != lRam000000000f7149c8)) &&
         ((lVar2 != lRam000000000f713868 &&
          (((lVar2 != lRam000000000f713890 && (lVar2 != lRam000000000f7138b8)) &&
           (lVar2 != lRam000000000f7138e0)))))))) &&
       ((lVar2 != lRam000000000f713908 && (lVar2 != lRam000000000f713930)))) &&
      ((lVar2 != lRam000000000f713958 &&
       ((lVar2 != lRam000000000f713980 && (lVar2 != _DAT_0f715380)))))))) {
    return 0;
  }
  return 2;
}


```

## `d3bc5c0` — LegacyStructureTemplate::vslot5

- instructions: 3

```c

undefined1  [16] LegacyStructureTemplate_v5(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._12_4_ = 0;
  auVar1._0_12_ = *(undefined1 (*) [12])(param_1 + 0x28);
  return auVar1;
}


```

## `d3bc5d0` — LegacyStructureTemplate::vslot3

- instructions: 3

```c

undefined1  [16] LegacyStructureTemplate_v3(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._12_4_ = 0;
  auVar1._0_12_ = *(undefined1 (*) [12])(param_1 + 0x20);
  return auVar1;
}


```

## `d3bc5e0` — LegacyStructureTemplate::vslot6

- instructions: 6

```c

undefined4 * LegacyStructureTemplate_v6(undefined4 *param_1,long param_2)

{
  *param_1 = 2;
  *(long *)(param_1 + 2) = param_2 + 0x88;
  *(undefined8 *)(param_1 + 4) = 0;
  return param_1;
}


```

## `d3bc600` — LegacyStructureTemplate::vslot2

- instructions: 6

```c

undefined4 * LegacyStructureTemplate_v2(undefined4 *param_1,long param_2)

{
  *param_1 = 2;
  *(long *)(param_1 + 2) = param_2 + 0x80;
  *(undefined8 *)(param_1 + 4) = 0;
  return param_1;
}


```

## `d3bd7e0` — VillagePiece::vslot5, BastionPiece::vslot5, AncientCityPiece::vslot5 (+1 more)

- instructions: 365
- calls: cc41df0

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong VillagePiece_v5(long *param_1,long *param_2,long *param_3,int *param_4)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  undefined8 unaff_RBP;
  ulong uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  short sVar18;
  undefined8 uStack_c8;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  long *plStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  int iStack_58;
  undefined8 uStack_54;
  int iStack_4c;
  undefined8 uStack_48;
  int iStack_40;
  undefined8 uStack_3c;
  int iStack_34;
  
  cVar2 = (**(code **)(*(long *)param_1[0xc] + 0x28))();
  if (cVar2 == '\x01') {
    iStack_40 = param_4[2];
    uStack_48 = *(undefined8 *)param_4;
    uStack_3c = *(undefined8 *)(param_4 + 3);
    iStack_34 = param_4[5];
    uVar5 = (**(code **)(*(long *)param_1[0xc] + 0x38))
                      ((long *)param_1[0xc],param_2,param_1[0xd],(int)param_1[0xe],
                       *(undefined1 *)((long)param_1 + 0x74),&uStack_48,param_3,param_1 + 0x12,
                       param_1[0x17],(int)param_1[0x18]);
    uVar11 = (ulong)uVar5;
  }
  else {
    cVar2 = (**(code **)(*param_1 + 0x90))(param_1,param_2);
    uVar11 = CONCAT71((int7)((ulong)unaff_RBP >> 8),1);
    if (cVar2 != '\0') {
      iStack_58 = param_4[2];
      uStack_60 = *(undefined8 *)param_4;
      uStack_54 = *(undefined8 *)(param_4 + 3);
      iStack_4c = param_4[5];
      uVar5 = (**(code **)(*(long *)param_1[0xc] + 0x38))
                        ((long *)param_1[0xc],param_2,param_1[0xd],(int)param_1[0xe],
                         *(undefined1 *)((long)param_1 + 0x74),&uStack_60,param_3,param_1 + 0x12,
                         param_1[0x17],(int)param_1[0x18]);
      uVar11 = (ulong)uVar5;
      bVar3 = (**(code **)(*(long *)param_1[0xc] + 0x30))();
      if (bVar3 != 0) {
        uStack_a8 = (ulong)*(uint *)((long)param_1 + 0xc);
        uStack_a0 = CONCAT71(uStack_a0._1_7_,bVar3);
        plStack_98 = param_3;
        if ((bVar3 & 1) != 0) {
          uStack_b0 = (ulong)*(uint *)(param_1 + 1);
          iVar16 = *(int *)((long)param_1 + 0x14);
          if (((int)*(uint *)(param_1 + 1) <= iVar16) &&
             (iVar6 = *(int *)((long)param_1 + 0x1c), (int)param_1[2] <= iVar6)) {
            do {
              iVar10 = (int)param_1[2];
              if ((int)param_1[2] <= iVar6) {
                do {
                  uStack_c8._0_4_ = (int)uStack_b0;
                  uStack_c8._4_4_ = (int)uStack_a8;
                  iStack_c0 = iVar10;
                  lVar8 = (**(code **)(*param_2 + 0x10))(param_2,&uStack_c8);
                  iVar16 = iStack_bc;
                  if (*(long *)(*(long *)(lVar8 + 0x68) + 200) != _DAT_0f6eaec0) {
                    uVar7 = (**(code **)(*param_2 + 0x10))(param_2,&uStack_c8);
                    uStack_90 = (**(code **)(*param_1 + 0x78))(param_1,param_2,&uStack_c8,uVar7);
                    iVar6 = uStack_c8._4_4_;
                    iVar16 = iStack_bc;
                    if (uStack_90 != 0) {
                      iVar17 = (**(code **)(*plStack_98 + 0x18))(plStack_98,3);
                      iVar16 = iStack_bc;
                      iStack_bc = (int)uStack_c8;
                      iVar12 = uStack_c8._4_4_;
                      while ((((iVar12 = iVar12 + -1, (iVar6 - iVar17) + -3 < iVar12 &&
                               ((((iStack_b8 = iVar12, iStack_b4 = iStack_c0,
                                  uStack_c8._0_4_ = iStack_bc,
                                  lVar8 = (**(code **)(*param_2 + 0x10))(param_2,&iStack_bc),
                                  *(long *)(*(long *)(lVar8 + 0x68) + 200) == _DAT_0f6eaec0 ||
                                  (lVar8 = (**(code **)(*param_2 + 0x10))(param_2,&iStack_bc),
                                  iVar16 = iStack_bc,
                                  *(char *)(*(long *)(*(long *)(lVar8 + 0x68) + 0x20) + 2) == '\x01'
                                  )) && (iVar16 = iStack_bc, *param_4 <= iStack_bc)) &&
                                ((iStack_bc <= param_4[3] && (param_4[2] <= iStack_b4)))))) &&
                              (iStack_b4 <= param_4[5])) &&
                             ((param_4[1] <= iStack_b8 && (iStack_b8 <= param_4[4]))))) {
                        uStack_78 = 0;
                        uStack_70 = 0;
                        uStack_88 = 0;
                        uStack_80 = 0;
                        uStack_68 = 1;
                        (**(code **)(*param_2 + 0xf8))(param_2,&iStack_bc,uStack_90,2,0,&uStack_88);
                        iVar16 = iStack_bc;
                        iStack_bc = (int)uStack_c8;
                      }
                    }
                  }
                  iStack_bc = iVar16;
                  iVar6 = *(int *)((long)param_1 + 0x1c);
                  bVar1 = iVar10 < iVar6;
                  iVar10 = iVar10 + 1;
                } while (bVar1);
                iVar16 = *(int *)((long)param_1 + 0x14);
              }
              iVar10 = (int)uStack_b0;
              uStack_b0 = (ulong)(iVar10 + 1);
            } while (iVar10 < iVar16);
          }
        }
        if ((uStack_a0 & 2) != 0) {
          iVar16 = (int)param_1[1];
          iVar6 = *(int *)((long)param_1 + 0x14);
          iVar10 = ((iVar6 - iVar16) - ((iVar6 - iVar16) + 1 >> 0x1f)) + 1 >> 1;
          uVar14 = (iVar10 + iVar16) - 0xc;
          if ((int)uVar14 <= iVar10 + iVar16 + 0xc) {
            uStack_a8 = (ulong)((int)uStack_a8 - 1) << 0x20;
            iVar10 = (int)param_1[2];
            iVar12 = *(int *)((long)param_1 + 0x1c);
            do {
              uStack_a0 = (ulong)uVar14;
              iVar13 = ((iVar12 - iVar10) - ((iVar12 - iVar10) + 1 >> 0x1f)) + 1 >> 1;
              iVar17 = iVar13 + iVar10 + -0xc;
              uVar15 = uVar14;
              if (iVar17 <= iVar13 + iVar10 + 0xc) {
                uStack_90 = uStack_a0 | uStack_a8;
                do {
                  uStack_c8 = uStack_90;
                  iStack_c0 = iVar17;
                  lVar8 = (**(code **)(*param_2 + 0x10))(param_2,&uStack_c8);
                  if ((*(byte *)(*(long *)(lVar8 + 0x68) + 0x133) & 0x10) != 0) {
                    plStack_98 = (long *)(**(code **)(*param_1 + 0x80))(param_1,lVar8);
                    uStack_b0 = func_0x0cc41df0(0xf6ff9e0,&DAT_0f6eaec0,1);
                    sVar18 = (short)(uStack_c8 >> 0x20) + -1;
                    sVar4 = (**(code **)(*param_2 + 0x110))(param_2);
                    if (sVar4 < sVar18) {
                      iVar16 = (int)sVar18;
                      do {
                        iStack_bc = (int)uStack_c8;
                        iStack_b4 = iStack_c0;
                        iStack_b8 = iVar16;
                        lVar8 = (**(code **)(*param_2 + 0x10))(param_2,&iStack_bc);
                        if ((*(byte *)(*(long *)(lVar8 + 0x68) + 0x133) & 0x10) == 0) {
                          if ((*(long *)(lVar8 + 0x110) == *(long *)(uStack_b0 + 0x110)) ||
                             (lVar9 = func_0x0cc41df0(0xf6ff9e0,&DAT_0f713f00,1),
                             *(long *)(lVar8 + 0x110) == *(long *)(lVar9 + 0x110))) {
                            uStack_78 = 0;
                            uStack_70 = 0;
                            uStack_88 = 0;
                            uStack_80 = 0;
                            uStack_68 = 1;
                            (**(code **)(*param_2 + 0xf8))
                                      (param_2,&iStack_bc,plStack_98,2,0,&uStack_88);
                          }
                          break;
                        }
                        iVar16 = iVar16 + -1;
                        sVar4 = (**(code **)(*param_2 + 0x110))(param_2);
                      } while (sVar4 < iVar16);
                    }
                  }
                  iVar10 = (int)param_1[2];
                  iVar12 = *(int *)((long)param_1 + 0x1c);
                  bVar1 = iVar17 < (((iVar12 - iVar10) - ((iVar12 - iVar10) + 1 >> 0x1f)) + 1 >> 1)
                                   + iVar10 + 0xc;
                  iVar17 = iVar17 + 1;
                } while (bVar1);
                iVar16 = (int)param_1[1];
                iVar6 = *(int *)((long)param_1 + 0x14);
                uVar15 = (uint)uStack_a0;
              }
              uVar14 = uVar15 + 1;
            } while ((int)uVar15 <
                     (((iVar6 - iVar16) - ((iVar6 - iVar16) + 1 >> 0x1f)) + 1 >> 1) + iVar16 + 0xc);
          }
        }
        uVar11 = (ulong)(byte)uVar5;
      }
    }
  }
  return uVar11 & 0xffffffff;
}


```

## `d3bdda0` — VillagePiece::vslot6, BastionPiece::vslot6, AncientCityPiece::vslot6 (+1 more)

- instructions: 645
- calls: 412a280, 412c3f0, 492f360, 4a3a0b0, b04c660, b054630, b45aae0, d34beb0, d87c640, eec74c0, eee3ab0

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void VillagePiece_v6(long param_1,long *param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  int *piVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  ulong unaff_R12;
  bool bVar16;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar22;
  undefined8 uStack_d8;
  float fStack_d0;
  undefined1 auStack_c8 [16];
  long *plStack_b8;
  ulong uStack_b0;
  float fStack_a8;
  long *plStack_a0;
  undefined1 *puStack_98;
  undefined8 uStack_90;
  char cStack_88;
  long *plStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined4 uStack_58;
  char cStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  int *piStack_38;
  undefined1 auVar17 [16];
  undefined1 auVar21 [12];
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  
  plStack_80 = param_2;
  uStack_40 = param_3;
  plVar9 = (long *)(**(code **)(*param_2 + 0x150))(param_2);
  uStack_48 = (**(code **)(*plVar9 + 0x908))();
  plStack_b8 = (long *)0x0;
  uStack_b0 = 0;
  fStack_a8 = 1.0;
  puStack_78 = (undefined8 *)(param_1 + 0xa0);
  plVar9 = *(long **)(param_1 + 0xa0);
  lStack_70 = param_1;
  piVar8 = param_4;
  auStack_c8._0_8_ = plStack_b8;
  auStack_c8._8_8_ = uStack_b0;
  if (plVar9 == (long *)0x0) {
    uStack_b0 = 0;
    plStack_b8 = (long *)0x0;
    plVar10 = (long *)0x0;
    auStack_c8._8_8_ = 0;
    auStack_c8._0_8_ = (long *)0x0;
    fStack_a8 = _DAT_011983f0;
  }
  else {
    do {
      piStack_38 = piVar8;
      uVar15 = auStack_c8._8_8_;
      iVar1 = (int)plVar9[2];
      iVar2 = (int)plVar9[3];
      if ((((iVar1 < *piStack_38) || (piStack_38[3] < iVar1)) || (iVar2 < piStack_38[2])) ||
         (((piStack_38[5] < iVar2 || (iVar3 = *(int *)((long)plVar9 + 0x14), iVar3 < piStack_38[1]))
          || (piStack_38[4] < iVar3)))) {
        uVar12 = (long)iVar1 + 0x9e3779b9;
        iVar3 = *(int *)((long)plVar9 + 0x14);
        uVar12 = (uVar12 >> 2) + (long)iVar3 + uVar12 * 0x40 + 0x9e3779b9 ^ uVar12;
        uVar12 = uVar12 * 0x40 + (long)iVar2 + 0x9e3779b9 + (uVar12 >> 2) ^ uVar12;
        if (auStack_c8._8_8_ != 0) {
          uVar11 = auStack_c8._8_8_ - ((ulong)auStack_c8._8_8_ >> 1 & 0x5555555555555555);
          uVar11 = (uVar11 >> 2 & 0x3333333333333333) + (uVar11 & 0x3333333333333333);
          uVar11 = ((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
          if (uVar11 >> 0x38 < 2) {
            unaff_R12 = auStack_c8._8_8_ - 1 & uVar12;
          }
          else {
            unaff_R12 = uVar12;
            if ((ulong)auStack_c8._8_8_ <= uVar12) {
              unaff_R12 = uVar12 % (ulong)auStack_c8._8_8_;
            }
          }
          if ((*(long **)(auStack_c8._0_8_ + unaff_R12 * 8) != (long *)0x0) &&
             (plVar10 = (long *)**(long **)(auStack_c8._0_8_ + unaff_R12 * 8),
             plVar10 != (long *)0x0)) {
            if ((byte)(uVar11 >> 0x38) < 2) {
              do {
                if (plVar10[1] == uVar12) {
                  if ((((int)plVar10[2] == iVar1) && (*(int *)((long)plVar10 + 0x14) == iVar3)) &&
                     ((int)plVar10[3] == iVar2)) goto LAB_0d3bde3e;
                }
                else if ((plVar10[1] & auStack_c8._8_8_ - 1) != unaff_R12) break;
                plVar10 = (long *)*plVar10;
              } while (plVar10 != (long *)0x0);
            }
            else {
              do {
                uVar11 = plVar10[1];
                if (uVar11 == uVar12) {
                  if ((((int)plVar10[2] == iVar1) && (*(int *)((long)plVar10 + 0x14) == iVar3)) &&
                     ((int)plVar10[3] == iVar2)) goto LAB_0d3bde3e;
                }
                else {
                  if ((ulong)auStack_c8._8_8_ <= uVar11) {
                    if ((uVar11 | auStack_c8._8_8_) >> 0x20 == 0) {
                      uVar11 = (uVar11 & 0xffffffff) % (auStack_c8._8_8_ & 0xffffffff);
                    }
                    else {
                      uVar11 = uVar11 % (ulong)auStack_c8._8_8_;
                    }
                  }
                  if (uVar11 != unaff_R12) break;
                }
                plVar10 = (long *)*plVar10;
              } while (plVar10 != (long *)0x0);
            }
          }
        }
        plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb0);
        auVar17._8_8_ = extraout_XMM0_Qb;
        auVar17._0_8_ = extraout_XMM0_Qa;
        auVar21 = auVar17._4_12_;
        if (plVar10 == (long *)0x0) {
          auVar20._0_8_ = func_0x0eec74c0(0xb0,0);
          auVar20._8_8_ = extraout_XMM0_Qb_01;
          auVar21 = auVar20._4_12_;
        }
        puStack_98 = auStack_c8;
        uStack_90 = 0;
        *plVar10 = 0;
        plVar10[1] = uVar12;
        plVar10[2] = plVar9[2];
        *(int *)(plVar10 + 3) = (int)plVar9[3];
        *(undefined1 *)(plVar10 + 4) = 0;
        *(undefined1 *)(plVar10 + 0x15) = 0;
        plStack_a0 = plVar10;
        if ((char)plVar9[0x15] == '\x01') {
          auVar18._0_8_ = func_0x0b04c660(plVar10 + 4,plVar9 + 4);
          auVar18._8_8_ = extraout_XMM0_Qb_00;
          auVar21 = auVar18._4_12_;
          *(undefined1 *)(plVar10 + 0x15) = 1;
        }
        uStack_90 = CONCAT71(uStack_90._1_7_,1);
        if ((long)uVar15 < 0) {
          fVar22 = (float)uVar15;
          if (uVar15 != 0) goto LAB_0d3be1e1;
LAB_0d3be200:
          uVar11 = 1;
          if (2 < uVar15) {
            uVar11 = (ulong)((uVar15 & uVar15 - 1) != 0);
          }
          uVar11 = uVar15 * 2 | uVar11;
          auVar19._0_4_ = (float)(uStack_b0 + 1) / fStack_a8;
          auVar19._4_12_ = auVar21;
          fVar22 = (float)func_0x0eee3ab0(auVar19._0_8_);
          uVar15 = (long)(fVar22 - _DAT_01198778) & (long)fVar22 >> 0x3f | (long)fVar22;
          if (uVar15 < uVar11) {
            uVar15 = uVar11;
          }
          unaff_R12 = 2;
          if ((uVar15 == 1) || (unaff_R12 = uVar15, (uVar15 & uVar15 - 1) == 0)) {
            bVar16 = unaff_R12 < (ulong)auStack_c8._8_8_;
            if (unaff_R12 <= (ulong)auStack_c8._8_8_) goto LAB_0d3be292;
LAB_0d3be26e:
            func_0x0d34beb0(auStack_c8,unaff_R12);
          }
          else {
            unaff_R12 = func_0x0412c3f0();
            bVar16 = unaff_R12 < (ulong)auStack_c8._8_8_;
            if ((ulong)auStack_c8._8_8_ < unaff_R12) goto LAB_0d3be26e;
LAB_0d3be292:
            uVar7 = auStack_c8._8_8_;
            if (bVar16) {
              fVar22 = (float)func_0x0eee3ab0((float)uStack_b0 / fStack_a8);
              uVar15 = (long)(fVar22 - _DAT_01198778) & (long)fVar22 >> 0x3f | (long)fVar22;
              if (((ulong)uVar7 < 3) ||
                 (uVar11 = uVar7 - ((ulong)uVar7 >> 1 & 0x5555555555555555),
                 uVar11 = (uVar11 >> 2 & 0x3333333333333333) + (uVar11 & 0x3333333333333333),
                 1 < (byte)(((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38
                           ))) {
                uVar15 = func_0x0412c3f0(uVar15);
              }
              else if (1 < uVar15) {
                lVar14 = 0x3f;
                if (uVar15 - 1 != 0) {
                  for (; uVar15 - 1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                  }
                }
                uVar15 = 1L << (-((byte)lVar14 ^ 0x3f) & 0x3f);
              }
              if (unaff_R12 <= uVar15) {
                unaff_R12 = uVar15;
              }
              if (unaff_R12 < (ulong)uVar7) goto LAB_0d3be26e;
            }
          }
          uVar15 = auStack_c8._8_8_;
          if ((auStack_c8._8_8_ & auStack_c8._8_8_ - 1) == 0) {
            uVar11 = uVar12 & auStack_c8._8_8_ - 1;
          }
          else {
            uVar11 = uVar12;
            if ((ulong)auStack_c8._8_8_ <= uVar12) {
              uVar11 = uVar12 % (ulong)auStack_c8._8_8_;
            }
          }
        }
        else {
          fVar22 = (float)(long)uVar15;
          if (uVar15 == 0) goto LAB_0d3be200;
LAB_0d3be1e1:
          uVar11 = unaff_R12;
          if (fVar22 * fStack_a8 < (float)(uStack_b0 + 1)) goto LAB_0d3be200;
        }
        plVar10 = *(long **)(auStack_c8._0_8_ + uVar11 * 8);
        if (plVar10 == (long *)0x0) {
          *plStack_a0 = (long)plStack_b8;
          plStack_b8 = plStack_a0;
          plStack_b8 = plStack_a0;
          *(long ***)(auStack_c8._0_8_ + uVar11 * 8) = &plStack_b8;
          if (*plStack_a0 != 0) {
            uVar12 = *(ulong *)(*plStack_a0 + 8);
            if ((uVar15 & uVar15 - 1) == 0) {
              *(long **)(auStack_c8._0_8_ + (uVar12 & uVar15 - 1) * 8) = plStack_a0;
            }
            else {
              if (uVar15 <= uVar12) {
                if ((uVar12 | uVar15) >> 0x20 == 0) {
                  *(long **)(auStack_c8._0_8_ + ((uVar12 & 0xffffffff) % (uVar15 & 0xffffffff)) * 8)
                       = plStack_a0;
                  goto LAB_0d3bde39;
                }
                uVar12 = uVar12 % uVar15;
              }
              *(long **)(auStack_c8._0_8_ + uVar12 * 8) = plStack_a0;
            }
          }
        }
        else {
          *plStack_a0 = *plVar10;
          *plVar10 = (long)plStack_a0;
        }
LAB_0d3bde39:
        uStack_b0 = uStack_b0 + 1;
      }
      else {
        if ((char)plVar9[0x15] == '\x01') {
          fStack_d0 = (float)iVar2;
          uStack_d8 = CONCAT44((float)iVar3,(float)iVar1);
          func_0x0b054630(&plStack_a0,uStack_48,plVar9 + 4,0,&uStack_d8,&UNK_01e7b238);
          plVar10 = plStack_b8;
          plVar13 = (long *)auStack_c8._0_8_;
          uVar15 = auStack_c8._8_8_;
          if (cStack_88 == '\x01') {
            plVar10 = (long *)(*(long *)(puStack_98 + 0x38) +
                              (ulong)((int)((ulong)(*(long *)(puStack_98 + 0x40) -
                                                   *(long *)(puStack_98 + 0x38)) >> 3) - 1U &
                                     0x85b93800) * 8);
            do {
              if (*plVar10 == -1) {
                plVar13 = *(long **)(puStack_98 + 0x58);
                plVar10 = plVar13;
                goto LAB_0d3be46f;
              }
              lVar14 = *plVar10 * 0x20;
              plVar10 = (long *)(*(long *)(puStack_98 + 0x50) + lVar14);
            } while (*(int *)(*(long *)(puStack_98 + 0x50) + 8 + lVar14) != -0x7a46c800);
            plVar13 = *(long **)(puStack_98 + 0x58);
LAB_0d3be46f:
            if ((plVar10 != plVar13) && (lVar14 = plVar10[2], lVar14 != 0)) {
              uVar15 = (ulong)(((uint)uStack_90 & 0x3ffff) >> 0xb);
              if ((uVar15 < (ulong)(*(long *)(lVar14 + 0x10) - *(long *)(lVar14 + 8) >> 3)) &&
                 ((((lVar5 = *(long *)(*(long *)(lVar14 + 8) + uVar15 * 8), lVar5 != 0 &&
                    (uVar4 = *(uint *)(lVar5 + (ulong)((uint)uStack_90 & 0x7ff) * 4),
                    ((uint)uStack_90 & 0xfffc0000 ^ uVar4) < 0x3ffff)) &&
                   (lVar14 = *(long *)(*(long *)(lVar14 + 0x50) + (ulong)(uVar4 >> 4 & 0x3ff8)),
                   lVar14 != 0)) &&
                  (lVar14 = *(long *)(lVar14 + (ulong)(uVar4 & 0x7f) * 8),
                  *(char *)(lVar14 + 0x251) == '\0')))) {
                uVar4 = *(uint *)(lVar14 + 0x18);
                lVar14 = func_0x0b45aae0(*(undefined8 *)(lVar14 + 0x10),0xfad8d24f);
                uVar15 = (ulong)((uVar4 & 0x3ffff) >> 0xb);
                if ((((ulong)(*(long *)(lVar14 + 0x10) - *(long *)(lVar14 + 8) >> 3) <= uVar15) ||
                    (lVar5 = *(long *)(*(long *)(lVar14 + 8) + uVar15 * 8), lVar5 == 0)) ||
                   (0x3fffe < (uVar4 & 0xfffc0000 ^ *(uint *)(lVar5 + (ulong)(uVar4 & 0x7ff) * 4))))
                {
                  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar4);
                  func_0x0492f360(lVar14,&uStack_d8,0,0);
                }
                plVar10 = (long *)(**(code **)(*plStack_80 + 0x150))();
                plStack_68 = (long *)((ulong)plStack_68 & 0xffffffffffffff00);
                cStack_50 = cStack_88 == '\x01';
                if ((bool)cStack_50) {
                  plStack_68 = plStack_a0;
                  puStack_60 = puStack_98;
                  uStack_58 = (uint)uStack_90;
                  cStack_88 = '\0';
                }
                (**(code **)(*plVar10 + 0x160))(plVar10,plStack_80,&plStack_68);
                if (cStack_50 == '\x01') {
                  cStack_50 = '\0';
                  uStack_d8 = CONCAT44(uStack_d8._4_4_,uStack_58);
                  func_0x0d87c640(plStack_68 + 5,&uStack_d8);
                }
                if (cStack_88 == '\x01') {
                  cStack_88 = '\0';
                  uStack_d8 = CONCAT44(uStack_d8._4_4_,(uint)uStack_90);
                  func_0x0d87c640(plStack_a0 + 5,&uStack_d8);
                }
                goto LAB_0d3bde3e;
              }
            }
            cStack_88 = '\0';
            uStack_d8 = CONCAT44(uStack_d8._4_4_,(uint)uStack_90);
            func_0x0d87c640(plStack_a0 + 5,&uStack_d8);
            plVar10 = plStack_b8;
            plVar13 = (long *)auStack_c8._0_8_;
            uVar15 = auStack_c8._8_8_;
          }
          goto joined_r0x0d3be790;
        }
        (**(code **)(**(long **)(lStack_70 + 0x60) + 0x48))
                  (*(long **)(lStack_70 + 0x60),plStack_80,plVar9[2],(long)iVar2,
                   *(undefined1 *)(lStack_70 + 0x74),uStack_40);
      }
LAB_0d3bde3e:
      plVar9 = (long *)*plVar9;
      piVar8 = piStack_38;
    } while (plVar9 != (long *)0x0);
    plVar10 = (long *)*puStack_78;
  }
  plVar13 = *(long **)(lStack_70 + 0x90);
  *(undefined8 *)(lStack_70 + 0x90) = auStack_c8._0_8_;
  uVar15 = *(ulong *)(lStack_70 + 0x98);
  *(undefined8 *)(lStack_70 + 0x98) = auStack_c8._8_8_;
  *(long **)(lStack_70 + 0xa0) = plStack_b8;
  uVar12 = *(ulong *)(lStack_70 + 0xa8);
  *(ulong *)(lStack_70 + 0xa8) = uStack_b0;
  fVar22 = *(float *)(lStack_70 + 0xb0);
  *(float *)(lStack_70 + 0xb0) = fStack_a8;
  if (uStack_b0 != 0) {
    uVar11 = plStack_b8[1];
    if ((auStack_c8._8_8_ & auStack_c8._8_8_ - 1) == 0) {
      uVar11 = uVar11 & auStack_c8._8_8_ - 1;
    }
    else if ((ulong)auStack_c8._8_8_ <= uVar11) {
      if ((uVar11 | auStack_c8._8_8_) >> 0x20 == 0) {
        uVar11 = (uVar11 & 0xffffffff) % (auStack_c8._8_8_ & 0xffffffff);
      }
      else {
        uVar11 = uVar11 % (ulong)auStack_c8._8_8_;
      }
    }
    *(undefined8 **)(auStack_c8._0_8_ + uVar11 * 8) = puStack_78;
  }
  fStack_a8 = fVar22;
  plStack_b8 = plVar10;
  uStack_b0 = uVar12;
  if (uVar12 != 0) {
    uVar12 = plVar10[1];
    if ((uVar15 & uVar15 - 1) == 0) {
      uVar12 = uVar12 & uVar15 - 1;
    }
    else if (uVar15 <= uVar12) {
      if ((uVar12 | uVar15) >> 0x20 == 0) {
        uVar12 = (uVar12 & 0xffffffff) % (uVar15 & 0xffffffff);
      }
      else {
        uVar12 = uVar12 % uVar15;
      }
    }
    plVar13[uVar12] = (long)&plStack_b8;
  }
joined_r0x0d3be790:
  while (plVar10 != (long *)0x0) {
    plVar9 = (long *)*plVar10;
    auStack_c8._0_8_ = plVar13;
    auStack_c8._8_8_ = uVar15;
    if ((char)plVar10[0x15] == '\x01') {
      func_0x04a3a0b0(plVar10 + 4);
    }
    func_0x0412a280(plVar10,0xb0);
    plVar10 = plVar9;
    plVar13 = (long *)auStack_c8._0_8_;
    uVar15 = auStack_c8._8_8_;
  }
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar15;
  auStack_c8 = auVar6 << 0x40;
  if (plVar13 != (long *)0x0) {
    func_0x0412a280(plVar13,uVar15 << 3);
  }
  return;
}


```

## `d3be890` — VillagePiece::vslot2, BastionPiece::vslot2, AncientCityPiece::vslot2 (+1 more)

- instructions: 18

```c

void VillagePiece_v2(long param_1,int param_2,int param_3,int param_4)

{
  *(int *)(param_1 + 8) = param_2 + *(int *)(param_1 + 8);
  *(int *)(param_1 + 0xc) = param_3 + *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0x10) = param_4 + *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x14) = param_2 + *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + param_3;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + param_4;
  *(ulong *)(param_1 + 0x68) =
       CONCAT44(param_3 + *(int *)(param_1 + 0x6c),param_2 + *(int *)(param_1 + 0x68));
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + param_4;
  return;
}


```

## `d3be8e0` — BastionPiece::vslot18, AncientCityPiece::vslot18, PoolElementStructurePiece::vslot18

- instructions: 2

```c

undefined1 AncientCityPiece_v18(void)

{
  return 1;
}


```

## `d3c37d0` — FlatWorldGenerator::vslot0

- instructions: 163
- calls: 412a280, 412c2d0, 412c300, 4136a00, d352b40, eee11d0

```c

/* WARNING: Possible PIC construction at 0x0cb3ae75: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0cb3aed9: Changing call to branch */

void FlatWorldGenerator_v0(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  *param_1 = &vt_FlatWorldGenerator;
  param_1[0xe] = &UNK_0f462548;
  plVar5 = (long *)param_1[0x2c];
  param_1[0x2c] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  lVar3 = param_1[0x22];
  if (lVar3 != 0) {
    param_1[0x23] = lVar3;
    func_0x0412a280(lVar3,param_1[0x24] - lVar3);
  }
  *param_1 = &vt_WorldGenerator;
  param_1[0xe] = &UNK_0f3ed220;
  func_0x0eee11d0(param_1 + 0x21);
  puVar4 = (undefined8 *)param_1[0x1e];
  while (puVar4 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar4;
    func_0x0412a280(puVar4,0x18);
    puVar4 = puVar2;
  }
  lVar3 = param_1[0x1c];
  param_1[0x1c] = 0;
  if (lVar3 != 0) {
    func_0x0412a280(lVar3,param_1[0x1d] << 3);
  }
  func_0x04136a00(param_1 + 0x15);
  lVar3 = param_1[0xf];
  param_1[0xf] = 0;
  if (lVar3 != 0) {
    func_0x0d352b40(lVar3);
    func_0x0412a280(lVar3,0x1c8);
  }
  *param_1 = &vt_ChunkSource;
  if (param_1[0xd] != 0) {
    plVar5 = (long *)func_0x0412c300();
    if (plVar5 != (long *)0x0) {
      if (param_1[0xc] != 0) {
        (**(code **)(**(long **)(param_1[0xc] + 0x28) + 0x10))();
      }
      LOCK();
      plVar1 = plVar5 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        goto SUB_0412c2d0;
      }
    }
    if (param_1[0xd] != 0) {
      func_0x0412c2d0();
    }
  }
  if (param_1[0xb] != 0) {
    plVar5 = (long *)func_0x0412c300();
    if (plVar5 != (long *)0x0) {
      if (param_1[10] != 0) {
        (**(code **)(**(long **)(param_1[10] + 0x28) + 0x10))();
      }
      LOCK();
      plVar1 = plVar5 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        goto SUB_0412c2d0;
      }
    }
    if (param_1[0xb] != 0) {
      func_0x0412c2d0();
    }
  }
  plVar5 = (long *)param_1[7];
  param_1[7] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  *param_1 = &UNK_0f534768;
  plVar5 = (long *)param_1[2];
  if (plVar5 == (long *)0x0) {
    *(undefined1 *)param_1[1] = 0;
    return;
  }
  *(undefined1 *)param_1[1] = 0;
  LOCK();
  plVar1 = plVar5 + 1;
  lVar3 = *plVar1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (lVar3 != 0) {
    return;
  }
  (**(code **)(*plVar5 + 0x10))(plVar5);
SUB_0412c2d0:
  if (plVar5[2] != 0) {
    LOCK();
    plVar1 = plVar5 + 2;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 != 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0412c2ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x20))();
  return;
}


```

## `d3c3840` — FlatWorldGenerator::vslot1

- instructions: 34
- calls: 412a280, ca70460

```c

/* WARNING: Possible PIC construction at 0x0d3c3893: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FlatWorldGenerator_v1(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 uStack_10;
  
  *param_1 = &vt_FlatWorldGenerator;
  puVar4 = &UNK_0f462548;
  param_1[0xe] = &UNK_0f462548;
  plVar1 = (long *)param_1[0x2c];
  param_1[0x2c] = 0;
  if (plVar1 != (long *)0x0) {
    uStack_10 = 0xd3c3876;
    puVar4 = (undefined *)(**(code **)(*plVar1 + 8))();
  }
  puVar2 = (undefined8 *)param_1[0x22];
  if (puVar2 == (undefined8 *)0x0) {
    uStack_10 = 0xd3c38a0;
    puVar4 = (undefined *)WorldGenerator_v0(param_1);
  }
  else {
    param_1[0x23] = puVar2;
    register0x00000020 = (BADSPACEBASE *)&uStack_10;
    uStack_10 = 0xd3c3898;
    param_1 = puVar2;
  }
  *(undefined **)((long)register0x00000020 + -8) = puVar4;
  if (param_1 != (undefined8 *)0x0) {
    pcVar3 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar3)(&DAT_0f5463b0,param_1);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


```

## `d3c38b0` — FlatWorldGenerator::vslot0

- instructions: 27
- calls: 412a280

```c

/* WARNING: Possible PIC construction at 0x0cb3ae75: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0cb3aed9: Changing call to branch */

void FlatWorldGenerator_v0(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  param_1[-0xe] = &vt_FlatWorldGenerator;
  *param_1 = &UNK_0f462548;
  plVar6 = (long *)param_1[0x1e];
  param_1[0x1e] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  puVar2 = param_1 + -0xe;
  lVar4 = param_1[0x14];
  if (lVar4 != 0) {
    param_1[0x15] = lVar4;
    func_0x0412a280(lVar4,param_1[0x16] - lVar4);
  }
  *puVar2 = &vt_WorldGenerator;
  *param_1 = &UNK_0f3ed220;
  func_0x0eee11d0(param_1 + 0x13);
  puVar5 = (undefined8 *)param_1[0x10];
  while (puVar5 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar5;
    func_0x0412a280(puVar5,0x18);
    puVar5 = puVar3;
  }
  lVar4 = param_1[0xe];
  param_1[0xe] = 0;
  if (lVar4 != 0) {
    func_0x0412a280(lVar4,param_1[0xf] << 3);
  }
  func_0x04136a00(param_1 + 7);
  lVar4 = param_1[1];
  param_1[1] = 0;
  if (lVar4 != 0) {
    func_0x0d352b40(lVar4);
    func_0x0412a280(lVar4,0x1c8);
  }
  *puVar2 = &vt_ChunkSource;
  if (param_1[-1] != 0) {
    plVar6 = (long *)func_0x0412c300();
    if (plVar6 != (long *)0x0) {
      if (param_1[-2] != 0) {
        (**(code **)(**(long **)(param_1[-2] + 0x28) + 0x10))();
      }
      LOCK();
      plVar1 = plVar6 + 1;
      lVar4 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar4 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        goto SUB_0412c2d0;
      }
    }
    if (param_1[-1] != 0) {
      func_0x0412c2d0();
    }
  }
  if (param_1[-3] != 0) {
    plVar6 = (long *)func_0x0412c300();
    if (plVar6 != (long *)0x0) {
      if (param_1[-4] != 0) {
        (**(code **)(**(long **)(param_1[-4] + 0x28) + 0x10))();
      }
      LOCK();
      plVar1 = plVar6 + 1;
      lVar4 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar4 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        goto SUB_0412c2d0;
      }
    }
    if (param_1[-3] != 0) {
      func_0x0412c2d0();
    }
  }
  plVar6 = (long *)param_1[-7];
  param_1[-7] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  *puVar2 = &UNK_0f534768;
  plVar6 = (long *)param_1[-0xc];
  if (plVar6 == (long *)0x0) {
    *(undefined1 *)param_1[-0xd] = 0;
    return;
  }
  *(undefined1 *)param_1[-0xd] = 0;
  LOCK();
  plVar1 = plVar6 + 1;
  lVar4 = *plVar1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (lVar4 != 0) {
    return;
  }
  (**(code **)(*plVar6 + 0x10))(plVar6);
SUB_0412c2d0:
  if (plVar6[2] != 0) {
    LOCK();
    plVar1 = plVar6 + 2;
    lVar4 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar4 != 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0412c2ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x20))();
  return;
}


```

## `d3c3920` — FlatWorldGenerator::vslot1

- instructions: 39
- calls: 412a280, ca70460

```c

/* WARNING: Possible PIC construction at 0x0d3c397a: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FlatWorldGenerator_v1(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 auStack_20 [2];
  
  param_1[-0xe] = &vt_FlatWorldGenerator;
  puVar4 = &UNK_0f462548;
  *param_1 = &UNK_0f462548;
  plVar1 = (long *)param_1[0x1e];
  param_1[0x1e] = 0;
  if (plVar1 != (long *)0x0) {
    auStack_20[0] = 0xd3c3959;
    puVar4 = (undefined *)(**(code **)(*plVar1 + 8))();
  }
  puVar5 = param_1 + -0xe;
  puVar2 = (undefined8 *)param_1[0x14];
  if (puVar2 == (undefined8 *)0x0) {
    auStack_20[0] = 0xd3c3987;
    puVar4 = (undefined *)WorldGenerator_v0(puVar5);
  }
  else {
    param_1[0x15] = puVar2;
    register0x00000020 = (BADSPACEBASE *)auStack_20;
    auStack_20[0] = 0xd3c397f;
    puVar5 = puVar2;
  }
  *(undefined **)((long)register0x00000020 + -8) = puVar4;
  if (puVar5 != (undefined8 *)0x0) {
    pcVar3 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar3)(&DAT_0f5463b0,puVar5);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


```

## `d3c39a0` — PoolElementStructurePiece::vslot1

- instructions: 1

```c

void PoolElementStructurePiece_v1(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


```

## `d3c3b70` — LegacyStructureTemplate::vslot3

- instructions: 7
- calls: 6427820

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 LegacyStructureTemplate_v3(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = LegacyStructureTemplate_v2();
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return uVar1;
}


```

## `d3c3b90` — LegacyStructureTemplate::vslot0

- instructions: 2

```c

/* WARNING: Possible PIC construction at 0x064278a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06427928: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06427968: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0642792d) */
/* WARNING: Removing unreachable block (ram,0x0642796d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * LegacyStructureTemplate_v0(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 auStack_30 [2];
  
  param_1[-1] = &vt_LegacyStructureTemplate;
  puVar4 = &UNK_0f462708;
  *param_1 = &UNK_0f462708;
  puVar5 = (undefined *)param_1[0x13];
  if (puVar5 == (undefined *)0x0) {
    lVar1 = param_1[0x10];
    if (lVar1 != 0) {
      lVar8 = param_1[0x11];
      lVar7 = lVar1;
      if (lVar1 != lVar8) {
        do {
          plVar2 = *(long **)(lVar8 + -8);
          *(undefined8 *)(lVar8 + -8) = 0;
          if (plVar2 != (long *)0x0) {
            auStack_30[0] = 0x64278f0;
            (**(code **)(*plVar2 + 8))();
          }
          lVar8 = lVar8 + -0x28;
        } while (lVar8 != lVar1);
        lVar7 = param_1[0x10];
      }
      param_1[0x11] = lVar1;
      auStack_30[0] = 0x642790f;
      puVar4 = (undefined *)func_0x0412a280(lVar7,param_1[0x12] - lVar7);
    }
    puVar5 = (undefined *)param_1[0xd];
    if (puVar5 == (undefined *)0x0) {
      lVar1 = param_1[0xb];
      param_1[0xb] = 0;
      if (lVar1 != 0) {
        auStack_30[0] = 0x6427953;
        puVar4 = (undefined *)func_0x0412a280(lVar1,param_1[0xc] << 3);
      }
      puVar5 = (undefined *)param_1[8];
      if (puVar5 == (undefined *)0x0) {
        lVar1 = param_1[6];
        param_1[6] = 0;
        if (lVar1 != 0) {
          auStack_30[0] = 0x6427993;
          puVar4 = (undefined *)func_0x0412a280(lVar1,param_1[7] << 3);
        }
        if ((*(byte *)(param_1 + 1) & 1) == 0) {
          return puVar4;
        }
        puVar5 = (undefined *)param_1[3];
      }
      else {
        register0x00000020 = (BADSPACEBASE *)auStack_30;
        auStack_30[0] = 0x642796d;
      }
    }
    else {
      register0x00000020 = (BADSPACEBASE *)auStack_30;
      auStack_30[0] = 0x642792d;
    }
  }
  else {
    puVar6 = (undefined *)param_1[0x14];
    puVar4 = puVar5;
    if (puVar5 != puVar6) {
      do {
        puVar4 = puVar6 + -0x38;
        *(undefined **)(puVar6 + -0x20) = &UNK_0f47e0b0;
        auStack_30[0] = 0x6427885;
        func_0x0d6c9500(puVar6 + -0x18,*(undefined8 *)(puVar6 + -0x10));
        puVar6 = puVar4;
      } while (puVar4 != puVar5);
      puVar4 = (undefined *)param_1[0x13];
    }
    param_1[0x14] = puVar5;
    register0x00000020 = (BADSPACEBASE *)auStack_30;
    auStack_30[0] = 0x64278ad;
    puVar5 = puVar4;
  }
  *(undefined **)((long)register0x00000020 + -8) = puVar4;
  if (puVar5 != (undefined *)0x0) {
    pcVar3 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar3)(&DAT_0f5463b0,puVar5);
  }
  return *(undefined **)((long)register0x00000020 + -8);
}


```

## `d3c3ba0` — LegacyStructureTemplate::vslot1

- instructions: 9
- calls: 6427820

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 LegacyStructureTemplate_v1(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + -8;
  uVar1 = LegacyStructureTemplate_v2(param_1);
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return uVar1;
}


```

## `d3de740` — EndPodiumFeature::vslot5

- instructions: 1118
- calls: b5d6180, b5d6330, cc41df0, eeddcf0

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 EndPodiumFeature_v5(long param_1,long *param_2,uint *param_3)

{
  long *plVar1;
  char cVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  ulong *puVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  int iVar14;
  undefined8 *puVar15;
  int iVar16;
  uint uVar17;
  bool bVar18;
  ulong uStack_a0;
  uint uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  long *plStack_50;
  ulong uStack_48;
  ulong uStack_40;
  uint uStack_38;
  
  iVar14 = -4;
  lStack_58 = param_1;
  plStack_50 = param_2;
  do {
    iVar9 = -1;
    uStack_48 = (long)iVar14 * (long)iVar14;
    do {
      uVar8 = (ulong)iVar9;
      iVar16 = -4;
      uStack_90 = uVar8;
      if (iVar9 < 0) {
        uVar8 = uVar8 * uVar8 + uStack_48;
        uStack_90 = uVar8;
        do {
          uStack_98 = param_3[2] + iVar16;
          uStack_a0 = CONCAT44(param_3[1] + iVar9,*param_3 + iVar14);
          uVar3 = (long)iVar16 * (long)iVar16 + uVar8;
          if (0xc < uVar3) goto LAB_0d3ded78;
          if (uVar3 < 7) {
            lVar6 = func_0x0cc41df0(0xf6ff9e0,&DAT_0f713fc8,1);
            lVar7 = *(long *)(lVar6 + 0x68);
            lVar5 = *(long *)(lVar7 + 0x1b0);
            if (lVar5 == 0) {
LAB_0d3dee37:
              for (plVar12 = *(long **)(lVar7 + 0x350); plVar12 != *(long **)(lVar7 + 0x358);
                  plVar12 = plVar12 + 2) {
                plVar1 = (long *)*plVar12;
                if (*(ulong *)(plVar1[1] + 8) == _DAT_0f6fc888) {
                  lVar5 = (**(code **)(*plVar1 + 8))(plVar1,lVar7,*(ushort *)(lVar6 + 0x128),1);
                  if (lVar5 != 0) goto LAB_0d3def9c;
                  break;
                }
              }
              if ((*(byte *)(lVar7 + 0x135) & 8) == 0) {
LAB_0d3def99:
                lVar5 = lVar6;
              }
              else {
                lVar5 = *(long *)(lVar7 + 0x200);
              }
            }
            else {
              lVar11 = lVar7 + 0x1b0;
              do {
                bVar18 = *(ulong *)(lVar5 + 0x20) < _DAT_0f6fc888;
                if (!bVar18) {
                  lVar11 = lVar5;
                }
                lVar5 = *(long *)(lVar5 + (ulong)bVar18 * 8);
              } while (lVar5 != 0);
              if ((lVar11 == lVar7 + 0x1b0) || (_DAT_0f6fc888 < *(ulong *)(lVar11 + 0x20)))
              goto LAB_0d3dee37;
              if (*(uint *)(lVar11 + 0x28) < 2) goto LAB_0d3def99;
              uVar8 = (ulong)(1 << (((char)*(undefined4 *)(lVar11 + 0x30) -
                                    (char)*(undefined4 *)(lVar11 + 0x2c)) + 1U & 0x1f) & 0xffffU |
                             ~*(uint *)(lVar11 + 0x34) & (uint)*(ushort *)(lVar6 + 0x128));
              if (((ulong)(*(long *)(lVar7 + 0x1f0) - *(long *)(lVar7 + 0x1e8) >> 3) <= uVar8) ||
                 (lVar5 = *(long *)(*(long *)(lVar7 + 0x1e8) + uVar8 * 8), lVar5 == 0))
              goto LAB_0d3def99;
            }
LAB_0d3def9c:
            puVar15 = *(undefined8 **)(lStack_58 + 0x18);
            if (puVar15 == (undefined8 *)0x0) {
              lStack_78 = 0;
              uStack_70 = 0;
              uStack_88 = 0;
              uStack_80 = 0;
              uStack_68 = 1;
              (**(code **)(*plStack_50 + 0xf8))(plStack_50,&uStack_a0,lVar5,3,0,&uStack_88);
              uVar8 = uStack_90;
            }
            else {
              uVar4 = (**(code **)(*(long *)*puVar15 + 0x28))((long *)*puVar15,&uStack_a0);
              lVar7 = func_0x0b5d6180(puVar15[1],&uStack_a0);
              if (lVar7 == 0) {
                uVar13 = puVar15[1];
                uStack_80 = uVar4;
                lStack_78 = lVar5;
LAB_0d3df03d:
                uStack_88 = CONCAT44(uStack_88._4_4_,3);
                func_0x0b5d6330(uVar13,&uStack_a0,&uStack_a0,&uStack_88);
                uVar8 = uStack_90;
              }
              else {
                *(undefined4 *)(lVar7 + 0x20) = 3;
                *(long *)(lVar7 + 0x30) = lVar5;
                uVar8 = uStack_90;
              }
            }
          }
          else {
            lVar7 = func_0x0cc41df0(0xf6ff9e0,&DAT_0f719dd8,1);
            puVar15 = *(undefined8 **)(lStack_58 + 0x18);
            if (puVar15 == (undefined8 *)0x0) {
              lStack_78 = 0;
              uStack_70 = 0;
              uStack_88 = 0;
              uStack_80 = 0;
              uStack_68 = 1;
              (**(code **)(*plStack_50 + 0xf8))(plStack_50,&uStack_a0,lVar7,3,0,&uStack_88);
              uVar8 = uStack_90;
            }
            else {
              uVar4 = (**(code **)(*(long *)*puVar15 + 0x28))((long *)*puVar15,&uStack_a0);
              lVar5 = func_0x0b5d6180(puVar15[1],&uStack_a0);
              if (lVar5 == 0) {
                uVar13 = puVar15[1];
                uStack_80 = uVar4;
                lStack_78 = lVar7;
                goto LAB_0d3df03d;
              }
              *(undefined4 *)(lVar5 + 0x20) = 3;
              *(long *)(lVar5 + 0x30) = lVar7;
              uVar8 = uStack_90;
            }
          }
LAB_0d3ded78:
          iVar16 = iVar16 + 1;
        } while (iVar16 != 5);
      }
      else {
        do {
          uStack_98 = param_3[2] + iVar16;
          uStack_a0 = CONCAT44(param_3[1] + (int)uVar8,*param_3 + iVar14);
          uVar3 = uVar8 * uVar8 + uStack_48 + (long)iVar16 * (long)iVar16;
          if (0xc < uVar3) goto LAB_0d3de810;
          if (iVar9 == 0) {
            if (uVar3 < 7) {
              uStack_40 = uStack_a0;
              uStack_38 = uStack_98;
              if (*(char *)(lStack_58 + 0x20) == '\x01') {
                if ((_DAT_0f6ffb10 == (long *)0x0) &&
                   (cVar2 = func_0x0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868),
                   cVar2 != '\0')) {
                  _DAT_00000000 = 0xdeadc0de;
                }
                lVar7 = *(long *)(*_DAT_0f6ffb10 + 0x200);
                puVar15 = *(undefined8 **)(lStack_58 + 0x18);
                puVar10 = &uStack_40;
                if (puVar15 == (undefined8 *)0x0) {
                  lStack_78 = 0;
                  uStack_70 = 0;
                  uStack_88 = 0;
                  uStack_80 = 0;
                  uStack_68 = 1;
                  (**(code **)(*plStack_50 + 0xf8))(plStack_50,puVar10,lVar7,3,0,&uStack_88);
                }
                else {
                  uVar4 = (**(code **)(*(long *)*puVar15 + 0x28))((long *)*puVar15,puVar10);
                  lVar5 = func_0x0b5d6180(puVar15[1],puVar10);
                  if (lVar5 == 0) {
                    uStack_88 = CONCAT44(uStack_88._4_4_,3);
                    uStack_80 = uVar4;
                    lStack_78 = lVar7;
                    func_0x0b5d6330(puVar15[1],puVar10,puVar10,&uStack_88);
                  }
                  else {
                    *(undefined4 *)(lVar5 + 0x20) = 3;
                    *(long *)(lVar5 + 0x30) = lVar7;
                  }
                }
                uStack_38 = uStack_98;
                uStack_40 = uStack_a0;
                lVar7 = func_0x0cc41df0(0xf6ff9e0,0xf714b98,1);
                puVar15 = *(undefined8 **)(lStack_58 + 0x18);
                goto joined_r0x0d3decf2;
              }
              if ((_DAT_0f6ffb10 == (long *)0x0) &&
                 (cVar2 = func_0x0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868),
                 cVar2 != '\0')) {
                _DAT_00000000 = 0xdeadc0de;
              }
              lVar7 = *(long *)(*_DAT_0f6ffb10 + 0x200);
              puVar15 = *(undefined8 **)(lStack_58 + 0x18);
              if (puVar15 == (undefined8 *)0x0) {
                lStack_78 = 0;
                uStack_70 = 0;
                uStack_88 = 0;
                uStack_80 = 0;
                uStack_68 = 1;
                (**(code **)(*plStack_50 + 0xf8))(plStack_50,&uStack_40,lVar7,3,0,&uStack_88);
                uVar8 = uStack_90;
                goto LAB_0d3de810;
              }
              plVar12 = (long *)*puVar15;
              lVar5 = *plVar12;
              puVar10 = &uStack_40;
              goto LAB_0d3de8cf;
            }
            lVar6 = func_0x0cc41df0(0xf6ff9e0,&DAT_0f713fc8,1);
            lVar7 = *(long *)(lVar6 + 0x68);
            lVar5 = *(long *)(lVar7 + 0x1b0);
            if (lVar5 == 0) {
LAB_0d3dea67:
              for (plVar12 = *(long **)(lVar7 + 0x350); plVar12 != *(long **)(lVar7 + 0x358);
                  plVar12 = plVar12 + 2) {
                plVar1 = (long *)*plVar12;
                if (*(ulong *)(plVar1[1] + 8) == _DAT_0f6fc888) {
                  lVar5 = (**(code **)(*plVar1 + 8))(plVar1,lVar7,*(ushort *)(lVar6 + 0x128),1);
                  uVar8 = uStack_90;
                  if (lVar5 != 0) goto LAB_0d3debad;
                  break;
                }
              }
              if ((*(byte *)(lVar7 + 0x135) & 8) == 0) {
LAB_0d3debaa:
                lVar5 = lVar6;
              }
              else {
                lVar5 = *(long *)(lVar7 + 0x200);
              }
            }
            else {
              lVar11 = lVar7 + 0x1b0;
              do {
                bVar18 = *(ulong *)(lVar5 + 0x20) < _DAT_0f6fc888;
                if (!bVar18) {
                  lVar11 = lVar5;
                }
                lVar5 = *(long *)(lVar5 + (ulong)bVar18 * 8);
              } while (lVar5 != 0);
              if ((lVar11 == lVar7 + 0x1b0) || (_DAT_0f6fc888 < *(ulong *)(lVar11 + 0x20)))
              goto LAB_0d3dea67;
              if (*(uint *)(lVar11 + 0x28) < 2) goto LAB_0d3debaa;
              uVar3 = (ulong)(1 << (((char)*(undefined4 *)(lVar11 + 0x30) -
                                    (char)*(undefined4 *)(lVar11 + 0x2c)) + 1U & 0x1f) & 0xffffU |
                             ~*(uint *)(lVar11 + 0x34) & (uint)*(ushort *)(lVar6 + 0x128));
              if (((ulong)(*(long *)(lVar7 + 0x1f0) - *(long *)(lVar7 + 0x1e8) >> 3) <= uVar3) ||
                 (lVar5 = *(long *)(*(long *)(lVar7 + 0x1e8) + uVar3 * 8), lVar5 == 0))
              goto LAB_0d3debaa;
            }
LAB_0d3debad:
            puVar15 = *(undefined8 **)(lStack_58 + 0x18);
            if (puVar15 == (undefined8 *)0x0) {
              lStack_78 = 0;
              uStack_70 = 0;
              uStack_88 = 0;
              uStack_80 = 0;
              uStack_68 = 1;
              (**(code **)(*plStack_50 + 0xf8))(plStack_50,&uStack_a0,lVar5,3,0,&uStack_88);
            }
            else {
              puVar10 = &uStack_a0;
              uVar4 = (**(code **)(*(long *)*puVar15 + 0x28))((long *)*puVar15,puVar10);
              lVar7 = func_0x0b5d6180(puVar15[1],puVar10);
              if (lVar7 == 0) {
                uVar13 = puVar15[1];
                uStack_80 = uVar4;
                lStack_78 = lVar5;
                goto LAB_0d3de9dc;
              }
              *(undefined4 *)(lVar7 + 0x20) = 3;
              *(long *)(lVar7 + 0x30) = lVar5;
              uVar8 = uStack_90;
            }
          }
          else {
            if ((_DAT_0f6ffb10 == (long *)0x0) &&
               (cVar2 = func_0x0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868),
               cVar2 != '\0')) {
              _DAT_00000000 = 0xdeadc0de;
            }
            lVar7 = *(long *)(*_DAT_0f6ffb10 + 0x200);
            puVar15 = *(undefined8 **)(lStack_58 + 0x18);
            puVar10 = &uStack_a0;
joined_r0x0d3decf2:
            if (puVar15 == (undefined8 *)0x0) {
              lStack_78 = 0;
              uStack_70 = 0;
              uStack_88 = 0;
              uStack_80 = 0;
              uStack_68 = 1;
              (**(code **)(*plStack_50 + 0xf8))(plStack_50,puVar10,lVar7,3,0,&uStack_88);
              uVar8 = uStack_90;
            }
            else {
              plVar12 = (long *)*puVar15;
              lVar5 = *plVar12;
LAB_0d3de8cf:
              uVar4 = (**(code **)(lVar5 + 0x28))(plVar12,puVar10);
              lVar5 = func_0x0b5d6180(puVar15[1],puVar10);
              if (lVar5 == 0) {
                uVar13 = puVar15[1];
                uStack_80 = uVar4;
                lStack_78 = lVar7;
LAB_0d3de9dc:
                uStack_88 = CONCAT44(uStack_88._4_4_,3);
                func_0x0b5d6330(uVar13,puVar10,puVar10,&uStack_88);
                uVar8 = uStack_90;
              }
              else {
                *(undefined4 *)(lVar5 + 0x20) = 3;
                *(long *)(lVar5 + 0x30) = lVar7;
                uVar8 = uStack_90;
              }
            }
          }
LAB_0d3de810:
          iVar16 = iVar16 + 1;
        } while (iVar16 != 5);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 != 5);
    iVar14 = iVar14 + 1;
  } while (iVar14 != 5);
  iVar14 = 0;
  do {
    lVar6 = func_0x0cc41df0(0xf6ff9e0,&DAT_0f713fc8,1);
    lVar7 = *(long *)(lVar6 + 0x68);
    lVar5 = *(long *)(lVar7 + 0x1b0);
    if (lVar5 == 0) {
LAB_0d3df113:
      for (plVar12 = *(long **)(lVar7 + 0x350); plVar12 != *(long **)(lVar7 + 0x358);
          plVar12 = plVar12 + 2) {
        plVar1 = (long *)*plVar12;
        if (*(ulong *)(plVar1[1] + 8) == _DAT_0f6fc888) {
          lVar5 = (**(code **)(*plVar1 + 8))(plVar1,lVar7,*(ushort *)(lVar6 + 0x128),1);
          if (lVar5 != 0) goto LAB_0d3df1c3;
          break;
        }
      }
      if ((*(byte *)(lVar7 + 0x135) & 8) == 0) {
LAB_0d3df1c0:
        lVar5 = lVar6;
      }
      else {
        lVar5 = *(long *)(lVar7 + 0x200);
      }
    }
    else {
      lVar11 = lVar7 + 0x1b0;
      do {
        bVar18 = *(ulong *)(lVar5 + 0x20) < _DAT_0f6fc888;
        if (!bVar18) {
          lVar11 = lVar5;
        }
        lVar5 = *(long *)(lVar5 + (ulong)bVar18 * 8);
      } while (lVar5 != 0);
      if ((lVar11 == lVar7 + 0x1b0) || (_DAT_0f6fc888 < *(ulong *)(lVar11 + 0x20)))
      goto LAB_0d3df113;
      if (*(uint *)(lVar11 + 0x28) < 2) goto LAB_0d3df1c0;
      uVar8 = (ulong)(1 << (((char)*(undefined4 *)(lVar11 + 0x30) -
                            (char)*(undefined4 *)(lVar11 + 0x2c)) + 1U & 0x1f) & 0xffffU |
                     ~*(uint *)(lVar11 + 0x34) & (uint)*(ushort *)(lVar6 + 0x128));
      if (((ulong)(*(long *)(lVar7 + 0x1f0) - *(long *)(lVar7 + 0x1e8) >> 3) <= uVar8) ||
         (lVar5 = *(long *)(*(long *)(lVar7 + 0x1e8) + uVar8 * 8), lVar5 == 0)) goto LAB_0d3df1c0;
    }
LAB_0d3df1c3:
    uStack_98 = param_3[2];
    uStack_a0 = CONCAT44(param_3[1] + iVar14,*param_3);
    puVar15 = *(undefined8 **)(lStack_58 + 0x18);
    if (puVar15 == (undefined8 *)0x0) {
      lStack_78 = 0;
      uStack_70 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_68 = 1;
      (**(code **)(*plStack_50 + 0xf8))(plStack_50,&uStack_a0,lVar5,3,0,&uStack_88);
    }
    else {
      uVar4 = (**(code **)(*(long *)*puVar15 + 0x28))((long *)*puVar15,&uStack_a0);
      lVar7 = func_0x0b5d6180(puVar15[1],&uStack_a0);
      if (lVar7 == 0) {
        uStack_88 = CONCAT44(uStack_88._4_4_,3);
        uStack_80 = uVar4;
        lStack_78 = lVar5;
        func_0x0b5d6330(puVar15[1],&uStack_a0,&uStack_a0,&uStack_88);
      }
      else {
        *(undefined4 *)(lVar7 + 0x20) = 3;
        *(long *)(lVar7 + 0x30) = lVar5;
      }
    }
    iVar14 = iVar14 + 1;
  } while (iVar14 != 4);
  uVar8 = (ulong)*param_3;
  uVar17 = param_3[1] + 2;
  uStack_48 = (ulong)param_3[2];
  lVar6 = func_0x0cc41df0(0xf6ff9e0,0xf714dd0,1);
  lVar7 = *(long *)(lVar6 + 0x68);
  lVar5 = *(long *)(lVar7 + 0x1b0);
  uStack_90 = uVar8;
  if (lVar5 == 0) {
LAB_0d3df2e3:
    for (plVar12 = *(long **)(lVar7 + 0x350); plVar12 != *(long **)(lVar7 + 0x358);
        plVar12 = plVar12 + 2) {
      plVar1 = (long *)*plVar12;
      if (*(ulong *)(plVar1[1] + 8) == _DAT_0f6ff600) {
        lVar5 = (**(code **)(*plVar1 + 8))(plVar1,lVar7,*(ushort *)(lVar6 + 0x128),4);
        if (lVar5 != 0) goto LAB_0d3df393;
        break;
      }
    }
    if ((*(byte *)(lVar7 + 0x135) & 8) == 0) {
LAB_0d3df390:
      lVar5 = lVar6;
    }
    else {
      lVar5 = *(long *)(lVar7 + 0x200);
    }
  }
  else {
    lVar11 = lVar7 + 0x1b0;
    do {
      bVar18 = *(ulong *)(lVar5 + 0x20) < _DAT_0f6ff600;
      if (!bVar18) {
        lVar11 = lVar5;
      }
      lVar5 = *(long *)(lVar5 + (ulong)bVar18 * 8);
    } while (lVar5 != 0);
    if ((lVar11 == lVar7 + 0x1b0) || (_DAT_0f6ff600 < *(ulong *)(lVar11 + 0x20))) goto LAB_0d3df2e3;
    if (*(uint *)(lVar11 + 0x28) < 5) goto LAB_0d3df390;
    uVar8 = (ulong)(4 << (((char)*(undefined4 *)(lVar11 + 0x30) -
                          (char)*(undefined4 *)(lVar11 + 0x2c)) + 1U & 0x1f) & 0xffffU |
                   ~*(uint *)(lVar11 + 0x34) & (uint)*(ushort *)(lVar6 + 0x128));
    if (((ulong)(*(long *)(lVar7 + 0x1f0) - *(long *)(lVar7 + 0x1e8) >> 3) <= uVar8) ||
       (lVar5 = *(long *)(*(long *)(lVar7 + 0x1e8) + uVar8 * 8), lVar5 == 0)) goto LAB_0d3df390;
  }
LAB_0d3df393:
  uStack_98 = (int)uStack_48 + -1;
  uVar8 = (ulong)uVar17 << 0x20 | uStack_90;
  puVar15 = *(undefined8 **)(lStack_58 + 0x18);
  uStack_a0 = uVar8;
  if (puVar15 == (undefined8 *)0x0) {
    lStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_68 = 1;
    (**(code **)(*plStack_50 + 0xf8))(plStack_50,&uStack_a0,lVar5,3,0,&uStack_88);
  }
  else {
    uVar4 = (**(code **)(*(long *)*puVar15 + 0x28))((long *)*puVar15,&uStack_a0);
    lVar7 = func_0x0b5d6180(puVar15[1],&uStack_a0);
    if (lVar7 == 0) {
      uStack_88 = CONCAT44(uStack_88._4_4_,3);
      uStack_80 = uVar4;
      lStack_78 = lVar5;
      func_0x0b5d6330(puVar15[1],&uStack_a0,&uStack_a0,&uStack_88);
    }
    else {
      *(undefined4 *)(lVar7 + 0x20) = 3;
      *(long *)(lVar7 + 0x30) = lVar5;
    }
  }
  lVar7 = *(long *)(lVar5 + 0x68);
  lVar6 = *(long *)(lVar7 + 0x1b0);
  if (lVar6 == 0) {
LAB_0d3df4a3:
    for (plVar12 = *(long **)(lVar7 + 0x350); plVar12 != *(long **)(lVar7 + 0x358);
        plVar12 = plVar12 + 2) {
      plVar1 = (long *)*plVar12;
      if (*(ulong *)(plVar1[1] + 8) == _DAT_0f6ff600) {
        lVar6 = (**(code **)(*plVar1 + 8))(plVar1,lVar7,*(ushort *)(lVar5 + 0x128),3);
        if (lVar6 != 0) goto LAB_0d3df548;
        break;
      }
    }
    if ((*(byte *)(lVar7 + 0x135) & 8) == 0) {
LAB_0d3df545:
      lVar6 = lVar5;
    }
    else {
      lVar6 = *(long *)(lVar7 + 0x200);
    }
  }
  else {
    lVar11 = lVar7 + 0x1b0;
    do {
      bVar18 = *(ulong *)(lVar6 + 0x20) < _DAT_0f6ff600;
      if (!bVar18) {
        lVar11 = lVar6;
      }
      lVar6 = *(long *)(lVar6 + (ulong)bVar18 * 8);
    } while (lVar6 != 0);
    if ((lVar11 == lVar7 + 0x1b0) || (_DAT_0f6ff600 < *(ulong *)(lVar11 + 0x20))) goto LAB_0d3df4a3;
    if (*(uint *)(lVar11 + 0x28) < 4) goto LAB_0d3df545;
    uVar3 = (ulong)(3 << (((char)*(undefined4 *)(lVar11 + 0x30) -
                          (char)*(undefined4 *)(lVar11 + 0x2c)) + 1U & 0x1f) & 0xffffU |
                   ~*(uint *)(lVar11 + 0x34) & (uint)*(ushort *)(lVar5 + 0x128));
    if (((ulong)(*(long *)(lVar7 + 0x1f0) - *(long *)(lVar7 + 0x1e8) >> 3) <= uVar3) ||
       (lVar6 = *(long *)(*(long *)(lVar7 + 0x1e8) + uVar3 * 8), lVar6 == 0)) goto LAB_0d3df545;
  }
LAB_0d3df548:
  uStack_98 = (int)uStack_48 + 1;
  puVar15 = *(undefined8 **)(lStack_58 + 0x18);
  if (puVar15 == (undefined8 *)0x0) {
    lStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_68 = 1;
    uStack_a0 = uVar8;
    (**(code **)(*plStack_50 + 0xf8))(plStack_50,&uStack_a0,lVar6,3,0,&uStack_88);
    iVar14 = (int)uStack_90;
  }
  else {
    uStack_a0 = uVar8;
    uVar4 = (**(code **)(*(long *)*puVar15 + 0x28))((long *)*puVar15,&uStack_a0);
    lVar7 = func_0x0b5d6180(puVar15[1],&uStack_a0);
    iVar14 = (int)uStack_90;
    if (lVar7 == 0) {
      uStack_88 = CONCAT44(uStack_88._4_4_,3);
      uStack_80 = uVar4;
      lStack_78 = lVar6;
      func_0x0b5d6330(puVar15[1],&uStack_a0,&uStack_a0,&uStack_88);
    }
    else {
      *(undefined4 *)(lVar7 + 0x20) = 3;
      *(long *)(lVar7 + 0x30) = lVar6;
    }
  }
  lVar7 = *(long *)(lVar6 + 0x68);
  lVar5 = *(long *)(lVar7 + 0x1b0);
  if (lVar5 == 0) {
LAB_0d3df663:
    for (plVar12 = *(long **)(lVar7 + 0x350); plVar12 != *(long **)(lVar7 + 0x358);
        plVar12 = plVar12 + 2) {
      plVar1 = (long *)*plVar12;
      if (*(ulong *)(plVar1[1] + 8) == _DAT_0f6ff600) {
        lVar5 = (**(code **)(*plVar1 + 8))(plVar1,lVar7,*(ushort *)(lVar6 + 0x128),1);
        if (lVar5 != 0) goto LAB_0d3df708;
        break;
      }
    }
    if ((*(byte *)(lVar7 + 0x135) & 8) == 0) {
LAB_0d3df705:
      lVar5 = lVar6;
    }
    else {
      lVar5 = *(long *)(lVar7 + 0x200);
    }
  }
  else {
    lVar11 = lVar7 + 0x1b0;
    do {
      bVar18 = *(ulong *)(lVar5 + 0x20) < _DAT_0f6ff600;
      if (!bVar18) {
        lVar11 = lVar5;
      }
      lVar5 = *(long *)(lVar5 + (ulong)bVar18 * 8);
    } while (lVar5 != 0);
    if ((lVar11 == lVar7 + 0x1b0) || (_DAT_0f6ff600 < *(ulong *)(lVar11 + 0x20))) goto LAB_0d3df663;
    if (*(uint *)(lVar11 + 0x28) < 2) goto LAB_0d3df705;
    uVar8 = (ulong)(1 << (((char)*(undefined4 *)(lVar11 + 0x30) -
                          (char)*(undefined4 *)(lVar11 + 0x2c)) + 1U & 0x1f) & 0xffffU |
                   ~*(uint *)(lVar11 + 0x34) & (uint)*(ushort *)(lVar6 + 0x128));
    if (((ulong)(*(long *)(lVar7 + 0x1f0) - *(long *)(lVar7 + 0x1e8) >> 3) <= uVar8) ||
       (lVar5 = *(long *)(*(long *)(lVar7 + 0x1e8) + uVar8 * 8), lVar5 == 0)) goto LAB_0d3df705;
  }
LAB_0d3df708:
  uStack_a0 = CONCAT44(uVar17,iVar14 + 1);
  uStack_98 = (uint)uStack_48;
  puVar15 = *(undefined8 **)(lStack_58 + 0x18);
  if (puVar15 == (undefined8 *)0x0) {
    lStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_68 = 1;
    (**(code **)(*plStack_50 + 0xf8))(plStack_50,&uStack_a0,lVar5,3,0,&uStack_88);
  }
  else {
    uVar4 = (**(code **)(*(long *)*puVar15 + 0x28))((long *)*puVar15,&uStack_a0);
    lVar7 = func_0x0b5d6180(puVar15[1],&uStack_a0);
    if (lVar7 == 0) {
      uStack_88 = CONCAT44(uStack_88._4_4_,3);
      uStack_80 = uVar4;
      lStack_78 = lVar5;
      func_0x0b5d6330(puVar15[1],&uStack_a0,&uStack_a0,&uStack_88);
    }
    else {
      *(undefined4 *)(lVar7 + 0x20) = 3;
      *(long *)(lVar7 + 0x30) = lVar5;
    }
  }
  lVar7 = *(long *)(lVar5 + 0x68);
  lVar6 = *(long *)(lVar7 + 0x1b0);
  if (lVar6 == 0) {
LAB_0d3df813:
    for (plVar12 = *(long **)(lVar7 + 0x350); plVar12 != *(long **)(lVar7 + 0x358);
        plVar12 = plVar12 + 2) {
      plVar1 = (long *)*plVar12;
      if (*(ulong *)(plVar1[1] + 8) == _DAT_0f6ff600) {
        lVar6 = (**(code **)(*plVar1 + 8))(plVar1,lVar7,*(ushort *)(lVar5 + 0x128),2);
        if (lVar6 != 0) goto LAB_0d3df8bc;
        break;
      }
    }
    if ((*(byte *)(lVar7 + 0x135) & 8) != 0) {
      lVar6 = *(long *)(lVar7 + 0x200);
      goto LAB_0d3df8bc;
    }
  }
  else {
    lVar11 = lVar7 + 0x1b0;
    do {
      bVar18 = *(ulong *)(lVar6 + 0x20) < _DAT_0f6ff600;
      if (!bVar18) {
        lVar11 = lVar6;
      }
      lVar6 = *(long *)(lVar6 + (ulong)bVar18 * 8);
    } while (lVar6 != 0);
    if ((lVar11 == lVar7 + 0x1b0) || (_DAT_0f6ff600 < *(ulong *)(lVar11 + 0x20))) goto LAB_0d3df813;
    if (2 < *(uint *)(lVar11 + 0x28)) {
      uVar8 = (ulong)(2 << (((char)*(undefined4 *)(lVar11 + 0x30) -
                            (char)*(undefined4 *)(lVar11 + 0x2c)) + 1U & 0x1f) & 0xffffU |
                     ~*(uint *)(lVar11 + 0x34) & (uint)*(ushort *)(lVar5 + 0x128));
      if ((uVar8 < (ulong)(*(long *)(lVar7 + 0x1f0) - *(long *)(lVar7 + 0x1e8) >> 3)) &&
         (lVar6 = *(long *)(*(long *)(lVar7 + 0x1e8) + uVar8 * 8), lVar6 != 0)) goto LAB_0d3df8bc;
    }
  }
  lVar6 = lVar5;
LAB_0d3df8bc:
  uStack_a0 = CONCAT44(uVar17,iVar14 + -1);
  uStack_98 = (uint)uStack_48;
  puVar15 = *(undefined8 **)(lStack_58 + 0x18);
  if (puVar15 == (undefined8 *)0x0) {
    lStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_68 = 1;
    (**(code **)(*plStack_50 + 0xf8))(plStack_50,&uStack_a0,lVar6,3,0,&uStack_88);
  }
  else {
    uVar4 = (**(code **)(*(long *)*puVar15 + 0x28))((long *)*puVar15,&uStack_a0);
    lVar7 = func_0x0b5d6180(puVar15[1],&uStack_a0);
    if (lVar7 == 0) {
      uStack_88 = CONCAT44(uStack_88._4_4_,3);
      uStack_80 = uVar4;
      lStack_78 = lVar6;
      func_0x0b5d6330(puVar15[1],&uStack_a0,&uStack_a0,&uStack_88);
    }
    else {
      *(undefined4 *)(lVar7 + 0x20) = 3;
      *(long *)(lVar7 + 0x30) = lVar6;
    }
  }
  return 1;
}


```

## `d3dfa50` — Feature::vslot1

- instructions: 1

```c

void Feature_v1(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


```

## `d3dfa90` — Feature::vslot2, ClayFeature::vslot2, DiscFeature::vslot2 (+61 more)

- instructions: 59
- calls: d3dfbc0

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] BambooFeature_v2(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  undefined1 auVar2 [16];
  ulong uStack_20;
  ulong uStack_18;
  
  cVar1 = (**(code **)(*(long *)*param_2 + 0xb0))((long *)*param_2,param_1,param_2 + 1,param_2[3]);
  if (cVar1 != '\0') {
    auVar2._8_8_ = (ulong)*(uint *)(param_2 + 2) | 0x100000000;
    auVar2._0_8_ = param_2[1];
    return auVar2;
  }
  uStack_18 = 0x110000013d7ce0;
  uStack_20 = 0x1b0000012b5cd2;
  func_0x0d3dfbc0(param_2 + 5,&uStack_18,&uStack_20);
  if ((uStack_20 >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_20 & 0xff00ffffffffffff) - 8);
  }
  if ((uStack_18 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_18 & 0xff00ffffffffffff) - 8);
  }
  return ZEXT816(0);
}


```

## `d3e0bf0` — GrowingPlantFeature::vslot2

- instructions: 413
- calls: c6e9230, cc41df0, d3dfbc0

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] GrowingPlantFeature_v2(long param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  long *plVar12;
  long lVar13;
  bool bVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined8 uStack_70;
  uint uStack_68;
  uint uStack_64;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  uint uStack_38;
  
  piVar1 = *(int **)(param_1 + 0x10);
  iVar10 = 0;
  piVar6 = piVar1;
  do {
    iVar10 = (int)((float)iVar10 + (float)piVar6[2]);
    piVar6 = piVar6 + 3;
  } while (piVar6 != *(int **)(param_1 + 0x18));
  if (iVar10 == 0) {
    fVar15 = 0.0 - (float)piVar1[2];
  }
  else {
    iVar10 = (**(code **)(**(long **)(param_2[3] + 0x9f8) + 0x18))();
    piVar1 = *(int **)(param_1 + 0x10);
    fVar15 = (float)iVar10 - (float)piVar1[2];
  }
  while (-1 < (int)fVar15) {
    fVar15 = (float)(int)fVar15 - (float)piVar1[5];
    piVar1 = piVar1 + 3;
  }
  iVar10 = *piVar1;
  if (iVar10 < piVar1[1] + -1) {
    iVar3 = (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],piVar1[1] - iVar10);
    iVar10 = iVar10 + iVar3;
  }
  uVar9 = *(uint *)(param_1 + 0x2c);
  if ((int)uVar9 < *(int *)(param_1 + 0x30) + -1) {
    iVar3 = (**(code **)(*(long *)param_2[3] + 0x18))
                      ((long *)param_2[3],*(int *)(param_1 + 0x30) - uVar9);
    uVar9 = uVar9 + iVar3;
  }
  uStack_64 = uVar9;
  if (iVar10 < 1) {
LAB_0d3e0f00:
    if (*(char *)(param_1 + 0x68) == '\x01') {
      uStack_48 = 0x1f0000012719cc;
      uStack_58 = 0x290000013a3cad;
      func_0x0d3dfbc0(param_2 + 5,&uStack_48,&uStack_58);
      if ((uStack_58 >> 0x37 & 1) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_58 & 0xff00ffffffffffff) - 8);
      }
      uStack_58 = 0;
      if ((uStack_48 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_48 & 0xff00ffffffffffff) - 8);
      }
    }
    else {
      uStack_50 = 0x1f0000012719cc;
      uStack_60 = 0x20000001338b94;
      func_0x0d3dfbc0(param_2 + 5,&uStack_50,&uStack_60);
      if ((uStack_60 >> 0x37 & 1) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_60 & 0xff00ffffffffffff) - 8);
      }
      uStack_60 = 0;
      if ((uStack_50 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_50 & 0xff00ffffffffffff) - 8);
      }
    }
    uVar8 = 0;
    uStack_70 = 0;
LAB_0d3e12a8:
    auVar16._8_8_ = uVar8;
    auVar16._0_8_ = uStack_70;
    return auVar16;
  }
  iVar3 = 0;
LAB_0d3e0d21:
  iVar11 = -iVar3;
  if (*(char *)(param_1 + 0x28) != '\0') {
    iVar11 = iVar3;
  }
  uStack_68 = *(uint *)(param_2 + 2);
  uStack_70 = CONCAT44(iVar11 + *(int *)((long)param_2 + 0xc),(int)param_2[1]);
  lVar4 = (**(code **)(*(long *)*param_2 + 0x28))((long *)*param_2,&uStack_70);
  if (*(long *)(*(long *)(lVar4 + 0x68) + 200) == _DAT_0f6eaec0) {
LAB_0d3e0d6c:
    uStack_40 = CONCAT44((char)(&UNK_01cc3923)[*(byte *)(param_1 + 0x28)] + uStack_70._4_4_,
                         (undefined4)uStack_70);
    uStack_38 = uStack_68;
    lVar4 = (**(code **)(*(long *)*param_2 + 0x28))();
    uVar9 = uStack_64;
    if ((iVar3 == iVar10 + -1) || (*(long *)(*(long *)(lVar4 + 0x68) + 200) != _DAT_0f6eaec0)) {
      lVar4 = *(long *)(param_1 + 0x50);
      iVar10 = 0;
      lVar7 = lVar4;
      do {
        iVar10 = (int)((float)iVar10 + *(float *)(lVar7 + 0xa8));
        lVar7 = lVar7 + 0xb0;
      } while (lVar7 != *(long *)(param_1 + 0x58));
      if (iVar10 == 0) {
        iVar10 = (int)(0.0 - *(float *)(lVar4 + 0xa8));
        if (-1 < iVar10) goto LAB_0d3e1120;
LAB_0d3e1043:
        lVar4 = func_0x0c6e9230();
        if (lVar4 != 0) goto LAB_0d3e1051;
LAB_0d3e1153:
        lVar4 = func_0x0cc41df0(0xf6ff9e0,0xf6eae50,1);
        param_2 = (long *)*param_2;
        if (*(int *)(param_1 + 0x30) != 0) goto LAB_0d3e1179;
LAB_0d3e127f:
        lVar5 = lVar4;
      }
      else {
        iVar10 = (**(code **)(**(long **)(param_2[3] + 0x9f8) + 0x18))
                           (*(long **)(param_2[3] + 0x9f8));
        lVar4 = *(long *)(param_1 + 0x50);
        iVar10 = (int)((float)iVar10 - *(float *)(lVar4 + 0xa8));
        if (iVar10 < 0) goto LAB_0d3e1043;
LAB_0d3e1120:
        do {
          lVar7 = lVar4 + 0xb0;
          iVar10 = (int)((float)iVar10 - *(float *)(lVar4 + 0x158));
          lVar4 = lVar7;
        } while (-1 < iVar10);
        lVar4 = func_0x0c6e9230(lVar7);
        if (lVar4 == 0) goto LAB_0d3e1153;
LAB_0d3e1051:
        param_2 = (long *)*param_2;
        if (*(int *)(param_1 + 0x30) == 0) goto LAB_0d3e127f;
LAB_0d3e1179:
        lVar7 = *(long *)(lVar4 + 0x68);
        lVar5 = *(long *)(lVar7 + 0x1b0);
        if (lVar5 == 0) {
LAB_0d3e11d3:
          for (plVar12 = *(long **)(lVar7 + 0x350); plVar12 != *(long **)(lVar7 + 0x358);
              plVar12 = plVar12 + 2) {
            plVar2 = (long *)*plVar12;
            if (*(ulong *)(plVar2[1] + 8) == _DAT_0f6fc410) {
              lVar5 = (**(code **)(*plVar2 + 8))(plVar2,lVar7,*(ushort *)(lVar4 + 0x128),uVar9);
              if (lVar5 != 0) goto LAB_0d3e1282;
              break;
            }
          }
          if ((*(byte *)(lVar7 + 0x135) & 8) == 0) goto LAB_0d3e127f;
          lVar5 = *(long *)(lVar7 + 0x200);
        }
        else {
          lVar13 = lVar7 + 0x1b0;
          do {
            bVar14 = *(ulong *)(lVar5 + 0x20) < _DAT_0f6fc410;
            if (!bVar14) {
              lVar13 = lVar5;
            }
            lVar5 = *(long *)(lVar5 + (ulong)bVar14 * 8);
          } while (lVar5 != 0);
          if ((lVar13 == lVar7 + 0x1b0) || (_DAT_0f6fc410 < *(ulong *)(lVar13 + 0x20)))
          goto LAB_0d3e11d3;
          if (*(uint *)(lVar13 + 0x28) <= uVar9) goto LAB_0d3e127f;
          uVar8 = (ulong)(uVar9 << (((char)*(undefined4 *)(lVar13 + 0x30) -
                                    (char)*(undefined4 *)(lVar13 + 0x2c)) + 1U & 0x1f) & 0xffff |
                         ~*(uint *)(lVar13 + 0x34) & (uint)*(ushort *)(lVar4 + 0x128));
          if (((ulong)(*(long *)(lVar7 + 0x1f0) - *(long *)(lVar7 + 0x1e8) >> 3) <= uVar8) ||
             (lVar5 = *(long *)(*(long *)(lVar7 + 0x1e8) + uVar8 * 8), lVar5 == 0))
          goto LAB_0d3e127f;
        }
      }
LAB_0d3e1282:
      (**(code **)(*param_2 + 0x60))(param_2,&uStack_70,lVar5,2);
      uVar8 = (ulong)uStack_68 | 0x100000000;
      goto LAB_0d3e12a8;
    }
    lVar4 = *(long *)(param_1 + 0x38);
    iVar11 = 0;
    lVar7 = lVar4;
    do {
      iVar11 = (int)((float)iVar11 + *(float *)(lVar7 + 0xa8));
      lVar7 = lVar7 + 0xb0;
    } while (lVar7 != *(long *)(param_1 + 0x40));
    if (iVar11 == 0) {
      iVar11 = (int)(0.0 - *(float *)(lVar4 + 0xa8));
      if (-1 < iVar11) goto LAB_0d3e0eb0;
LAB_0d3e0e2b:
      lVar4 = func_0x0c6e9230();
    }
    else {
      iVar11 = (**(code **)(**(long **)(param_2[3] + 0x9f8) + 0x18))(*(long **)(param_2[3] + 0x9f8))
      ;
      lVar4 = *(long *)(param_1 + 0x38);
      iVar11 = (int)((float)iVar11 - *(float *)(lVar4 + 0xa8));
      if (iVar11 < 0) goto LAB_0d3e0e2b;
LAB_0d3e0eb0:
      do {
        lVar7 = lVar4 + 0xb0;
        iVar11 = (int)((float)iVar11 - *(float *)(lVar4 + 0x158));
        lVar4 = lVar7;
      } while (-1 < iVar11);
      lVar4 = func_0x0c6e9230(lVar7);
    }
    if (lVar4 == 0) {
      lVar4 = func_0x0cc41df0(0xf6ff9e0,0xf6eae50,1);
    }
    (**(code **)(*(long *)*param_2 + 0x60))((long *)*param_2,&uStack_70,lVar4,2);
  }
  else if (*(char *)(param_1 + 0x68) == '\x01') {
    plVar12 = *(long **)(param_2[4] + 0x98);
    bVar14 = plVar12 != (long *)0x0;
    if (!bVar14) {
      plVar12 = (long *)*param_2;
    }
    lVar4 = (**(code **)(*plVar12 + 0x28 + (ulong)bVar14 * 8))(plVar12,&uStack_70);
    if (**(char **)(*(long *)(lVar4 + 0x68) + 0x20) == '\x05') goto LAB_0d3e0d6c;
  }
  iVar3 = iVar3 + 1;
  if (iVar3 == iVar10) goto LAB_0d3e0f00;
  goto LAB_0d3e0d21;
}


```

## `d3e57b0` — HeightDifferenceFilterFeature::vslot2

- instructions: 229
- calls: b610b50

```c

undefined1  [16] HeightDifferenceFilterFeature_v2(long param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  short sVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  byte bVar12;
  int iVar13;
  ulong uVar14;
  byte bVar15;
  bool bVar16;
  undefined1 auVar17 [16];
  int iStack_60;
  int iStack_5c;
  
  if (*(char *)(param_1 + 0x18) == '\x01') {
    lVar2 = *(long *)(param_1 + 0x10);
    lVar3 = *(long *)(param_1 + 0x20);
    if (*(long *)(*(long *)(lVar2 + 0x18) + lVar3 * 8) == 0) goto LAB_0d3e58e6;
    iVar13 = 0x7fffffff;
    iStack_60 = 0x7fffffff;
    if (*(char *)(param_1 + 0x34) != '\0') {
      iStack_60 = *(int *)(param_1 + 0x30);
    }
    if (*(char *)(param_1 + 0x44) != '\0') {
      iVar13 = *(int *)(param_1 + 0x40);
    }
    iVar7 = 0;
    iStack_5c = 0;
    if (*(byte *)(param_1 + 0x2c) != 0) {
      iStack_5c = *(int *)(param_1 + 0x28);
    }
    if (*(byte *)(param_1 + 0x3c) != 0) {
      iVar7 = *(int *)(param_1 + 0x38);
    }
    bVar12 = *(byte *)(param_1 + 0x2c) ^ 1;
    bVar15 = *(byte *)(param_1 + 0x3c) ^ 1;
    iVar1 = *(int *)(param_1 + 0x48);
    if (0 < iVar1) {
      iVar9 = *(int *)((long)param_2 + 0xc);
      plVar4 = (long *)*param_2;
      iStack_60 = iStack_60 + iVar9;
      iVar13 = iVar9 - iVar13;
      iStack_5c = iStack_5c + iVar9;
      iVar9 = iVar9 - iVar7;
      iVar7 = -1;
      do {
        sVar5 = (**(code **)(*plVar4 + 0xb8))
                          (plVar4,*(undefined4 *)(param_2 + 1),*(int *)(param_2 + 2) + iVar7);
        iVar10 = (int)sVar5;
        if (((*(char *)(param_1 + 0x34) == '\x01') && (iStack_60 < iVar10)) ||
           ((*(char *)(param_1 + 0x44) == '\x01' && (iVar10 < iVar13)))) goto LAB_0d3e5a6f;
        bVar12 = bVar12 | iStack_5c <= iVar10;
        bVar15 = bVar15 | iVar10 <= iVar9;
        iVar10 = iVar1 + iVar7;
        iVar7 = iVar7 + -1;
      } while (iVar10 != 0);
      iVar7 = 1;
      do {
        sVar5 = (**(code **)(*plVar4 + 0xb8))
                          (plVar4,*(int *)(param_2 + 1) + iVar7,*(undefined4 *)(param_2 + 2));
        iVar10 = (int)sVar5;
        if (((*(char *)(param_1 + 0x34) == '\x01') && (iStack_60 < iVar10)) ||
           ((*(char *)(param_1 + 0x44) == '\x01' && (iVar10 < iVar13)))) goto LAB_0d3e5a6f;
        bVar12 = bVar12 | iStack_5c <= iVar10;
        bVar15 = bVar15 | iVar10 <= iVar9;
        bVar16 = iVar7 != iVar1;
        iVar7 = iVar7 + 1;
      } while (bVar16);
      iVar7 = 1;
      do {
        sVar5 = (**(code **)(*plVar4 + 0xb8))
                          (plVar4,*(undefined4 *)(param_2 + 1),*(int *)(param_2 + 2) + iVar7);
        iVar10 = (int)sVar5;
        if (((*(char *)(param_1 + 0x34) == '\x01') && (iStack_60 < iVar10)) ||
           ((*(char *)(param_1 + 0x44) == '\x01' && (iVar10 < iVar13)))) goto LAB_0d3e5a6f;
        bVar12 = bVar12 | iStack_5c <= iVar10;
        bVar15 = bVar15 | iVar10 <= iVar9;
        bVar16 = iVar7 != iVar1;
        iVar7 = iVar7 + 1;
      } while (bVar16);
      iVar7 = -1;
      do {
        sVar5 = (**(code **)(*plVar4 + 0xb8))
                          (plVar4,*(int *)(param_2 + 1) + iVar7,*(undefined4 *)(param_2 + 2));
        iVar10 = (int)sVar5;
        if (((*(char *)(param_1 + 0x34) == '\x01') && (iStack_60 < iVar10)) ||
           ((*(char *)(param_1 + 0x44) == '\x01' && (iVar10 < iVar13)))) goto LAB_0d3e5a6f;
        bVar12 = bVar12 | iStack_5c <= iVar10;
        bVar15 = bVar15 | iVar10 <= iVar9;
        iVar10 = iVar1 + iVar7;
        iVar7 = iVar7 + -1;
      } while (iVar10 != 0);
    }
    uVar11 = 0;
    if ((bVar12 & 1) != 0) {
      uVar8 = 0;
      uVar6 = 0;
      uVar14 = 0;
      if ((bVar15 & 1) != 0) {
        plVar4 = *(long **)(*(long *)(lVar2 + 0x18) + lVar3 * 8);
        auVar17 = (**(code **)(*plVar4 + 0x10))(plVar4,param_2);
        uVar14 = auVar17._0_8_ & 0xff;
        uVar6 = auVar17._0_8_ & 0xffffffffffffff00;
        uVar11 = auVar17._8_8_ & 0xff00000000;
        uVar8 = auVar17._8_8_ & 0xffffffff;
      }
      goto LAB_0d3e5ac6;
    }
  }
  else {
LAB_0d3e58e6:
    func_0x0b610b50(1,3,0xe,&UNK_012695a4);
  }
  uVar11 = 0;
  uVar8 = 0;
  uVar6 = 0;
  uVar14 = 0;
LAB_0d3e5ac6:
  auVar17._8_8_ = uVar11 | uVar8;
  auVar17._0_8_ = uVar6 | uVar14;
  return auVar17;
LAB_0d3e5a6f:
  uVar8 = 0;
  uVar6 = 0;
  uVar14 = 0;
  uVar11 = 0;
  goto LAB_0d3e5ac6;
}


```

## `d3e7040` — HugeFungusFeature::vslot5

- instructions: 807
- string: `333?`
- calls: 4890760, cf61df0

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 HugeFungusFeature_v5(long param_1,long *param_2,undefined8 *param_3,long *param_4)

{
  code *pcVar1;
  long *plVar2;
  char cVar3;
  short sVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  float fVar22;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  long *plStack_e0;
  undefined8 uStack_d8;
  int iStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  int iStack_94;
  long lStack_90;
  ulong uStack_88;
  int iStack_80;
  int iStack_7c;
  double dStack_78;
  ulong uStack_70;
  long *plStack_68;
  ulong uStack_60;
  uint uStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  ulong uStack_40;
  ulong uStack_38;
  
  lStack_90 = param_1;
  uVar6 = (**(code **)(*param_4 + 0x18))(param_4,10);
  plStack_e0 = param_4;
  iVar7 = (**(code **)(*param_4 + 0x18))(param_4,0xc);
  uVar17 = uVar6 + 4 << (iVar7 == 0);
  iStack_d0 = *(int *)(param_3 + 1);
  uStack_d8 = *param_3;
  sVar4 = (**(code **)(*param_2 + 0x110))(param_2);
  sVar5 = (**(code **)(*param_2 + 0x118))(param_2);
  if ((sVar4 < uStack_d8._4_4_) && ((int)(uVar17 + uStack_d8._4_4_ + 1) < (int)sVar5)) {
    iVar18 = 0;
    iVar7 = uStack_d8._4_4_;
    uStack_88 = (ulong)uVar6;
    uStack_70 = (ulong)uVar17;
    do {
      uStack_c8 = CONCAT44(iVar7 + -1,(int)uStack_d8);
      uStack_c0._0_4_ = iStack_d0;
      lVar9 = (**(code **)(*param_2 + 0x10))(param_2,&uStack_c8);
      lVar10 = (**(code **)(*param_2 + 0x10))(param_2,&uStack_d8);
      if ((**(char **)(*(long *)(lVar10 + 0x68) + 0x20) == '\x06') ||
         (**(char **)(*(long *)(lVar9 + 0x68) + 0x20) == '\x06')) {
        return 0;
      }
      uStack_c8 = CONCAT44(uStack_d8._4_4_ + -1,(int)uStack_d8);
      uStack_c0 = CONCAT44(uStack_c0._4_4_,iStack_d0);
      lVar9 = (**(code **)(*param_2 + 0x10))(param_2,&uStack_c8);
      lVar9 = *(long *)(*(long *)(lVar9 + 0x68) + 200);
      if (((lVar9 == _DAT_0f71c558) || (lVar9 == _DAT_0f71a4e0)) || (lVar9 == _DAT_0f719b58)) {
LAB_0d3e7252:
        iStack_f0 = 0;
        iStack_ec = 0;
        iStack_e8 = 0;
        fVar22 = (float)(**(code **)(*plStack_e0 + 0x30))();
        dStack_78 = (double)fVar22;
        uStack_60 = (ulong)(dStack_78 < _DAT_014f0950);
        if (-4 < (int)uStack_88) {
          iVar18 = -(uint)(dStack_78 < _DAT_014f0950);
          iVar7 = 1;
          if (1 < (int)uStack_70) {
            iVar7 = (int)uStack_70;
          }
          uStack_88 = CONCAT44(uStack_88._4_4_,(dStack_78 < _DAT_014f0950) + 1);
          iStack_94 = iVar18;
          do {
            iVar15 = -iVar18;
            if (-iVar18 < 0) {
              iVar15 = iVar18;
            }
            plStack_68 = (long *)CONCAT71(plStack_68._1_7_,
                                          iVar15 == (int)uStack_60 && dStack_78 < _DAT_014f0950);
            iVar15 = iStack_94;
            do {
              iVar16 = -iVar15;
              if (-iVar15 < 0) {
                iVar16 = iVar15;
              }
              if (((byte)plStack_68 & iVar16 == (int)uStack_60) == 0) {
                iVar16 = 0;
                do {
                  iStack_f0 = (int)uStack_d8 + iVar18;
                  iStack_ec = uStack_d8._4_4_ + iVar16;
                  iStack_e8 = iStack_d0 + iVar15;
                  lVar9 = (**(code **)(*param_2 + 0x10))(param_2,&iStack_f0);
                  cVar3 = (**(code **)(**(long **)(lVar9 + 0x68) + 0x2a0))
                                    (*(long **)(lVar9 + 0x68),lVar9,param_2,&iStack_f0);
                  if (((cVar3 != '\0') ||
                      (lVar9 = (**(code **)(*param_2 + 0x10))(param_2,&iStack_f0),
                      *(long *)(*(long *)(lVar9 + 0x68) + 200) == _DAT_0f714d30)) ||
                     (lVar9 = (**(code **)(*param_2 + 0x10))(param_2,&iStack_f0),
                     *(long *)(*(long *)(lVar9 + 0x68) + 200) == _DAT_0f714d58)) {
                    uStack_b8 = 0;
                    uStack_b0 = 0;
                    uStack_c8 = 0;
                    uStack_c0 = 0;
                    uStack_a8 = 1;
                    (**(code **)(*param_2 + 0xf8))
                              (param_2,&iStack_f0,*(undefined8 *)(lStack_90 + 0x20),3,0,&uStack_c8);
                  }
                  iVar16 = iVar16 + 1;
                } while (iVar7 != iVar16);
              }
              else {
                iVar16 = 0;
                do {
                  iStack_f0 = (int)uStack_d8 + iVar18;
                  iStack_ec = uStack_d8._4_4_ + iVar16;
                  iStack_e8 = iStack_d0 + iVar15;
                  lVar9 = (**(code **)(*param_2 + 0x10))(param_2,&iStack_f0);
                  cVar3 = (**(code **)(**(long **)(lVar9 + 0x68) + 0x2a0))
                                    (*(long **)(lVar9 + 0x68),lVar9,param_2,&iStack_f0);
                  if ((((cVar3 != '\0') ||
                       (lVar9 = (**(code **)(*param_2 + 0x10))(param_2,&iStack_f0),
                       *(long *)(*(long *)(lVar9 + 0x68) + 200) == _DAT_0f714d30)) ||
                      (lVar9 = (**(code **)(*param_2 + 0x10))(param_2,&iStack_f0),
                      *(long *)(*(long *)(lVar9 + 0x68) + 200) == _DAT_0f714d58)) &&
                     (fVar22 = (float)(**(code **)(*plStack_e0 + 0x30))(), fVar22 < _DAT_01198a9c))
                  {
                    uStack_b8 = 0;
                    uStack_b0 = 0;
                    uStack_c8 = 0;
                    uStack_c0 = 0;
                    uStack_a8 = 1;
                    (**(code **)(*param_2 + 0xf8))
                              (param_2,&iStack_f0,*(undefined8 *)(lStack_90 + 0x20),3,0,&uStack_c8);
                  }
                  iVar16 = iVar16 + 1;
                } while (iVar7 != iVar16);
              }
              iVar15 = iVar15 + 1;
            } while (iVar15 != (int)uStack_88);
            iVar18 = iVar18 + 1;
          } while (iVar18 != (int)uStack_88);
        }
        uVar14 = uStack_70;
        uVar6 = (uint)uStack_70;
        iVar7 = (**(code **)(*plStack_e0 + 0x18))(plStack_e0,(int)uVar6 / 3 + 1);
        uStack_58 = iVar7 + 5U;
        if ((int)uVar6 <= (int)(iVar7 + 5U)) {
          uStack_58 = uVar6;
        }
        if (-1 < (int)uStack_58) {
          uVar6 = uVar6 - uStack_58;
          iStack_48 = uVar6 + 4;
          iStack_4c = uVar6 + 3;
          uStack_40 = (ulong)((int)uStack_60 + (uint)(dStack_78 < _DAT_014f0950) + 1);
          uStack_38 = (ulong)((dStack_78 < _DAT_014f0950) + 1);
          plStack_68 = param_2;
          do {
            uStack_88 = (ulong)uVar6;
            iVar7 = (**(code **)(*plStack_e0 + 0x18))(plStack_e0,3);
            iVar15 = (int)uStack_88;
            iVar18 = (iVar15 < (int)uVar14 - iVar7) + 1;
            iVar7 = iVar18;
            if (iVar15 < iStack_48) {
              iVar7 = 3;
            }
            if (uStack_58 < 9) {
              iVar7 = iVar18;
            }
            iVar18 = iVar7 + (int)uStack_60;
            dStack_78 = (double)CONCAT44(dStack_78._4_4_,iVar18);
            iVar18 = -iVar18;
            iStack_54 = (int)uStack_38 + iVar7;
            iStack_50 = iVar18;
            if (iVar15 < iStack_4c) {
              iStack_80 = (int)uStack_40 + iVar7 * 2;
              do {
                iVar7 = iStack_50;
                iVar15 = iStack_80;
                iStack_94 = iVar18;
                iStack_7c = -iVar18;
                if (-iVar18 < 0) {
                  iStack_7c = iVar18;
                }
                do {
                  iStack_f0 = (int)uStack_d8 + iStack_94;
                  iStack_ec = uStack_d8._4_4_ + (int)uStack_88;
                  iStack_e8 = iStack_d0 + iVar7;
                  lVar9 = (**(code **)(*param_2 + 0x10))(param_2,&iStack_f0);
                  if (*(char *)(lVar9 + 0x71) == '\0') {
                    bVar19 = iStack_7c == dStack_78._0_4_;
                    bVar20 = (int)uStack_88 == (int)uStack_70;
                    iVar18 = -iVar7;
                    if (-iVar7 < 0) {
                      iVar18 = iVar7;
                    }
                    bVar21 = iVar18 == dStack_78._0_4_;
                    lVar9 = (**(code **)(*param_2 + 0x10))(param_2,&iStack_f0);
                    param_2 = plStack_68;
                    cVar3 = (**(code **)(**(long **)(lVar9 + 0x68) + 0x2a0))
                                      (*(long **)(lVar9 + 0x68),lVar9,plStack_68,&iStack_f0);
                    if ((cVar3 != '\0') && ((bVar19 || bVar20) || bVar21)) {
                      uStack_c8 = CONCAT44(iStack_ec + -1,iStack_f0);
                      uStack_c0 = CONCAT44(uStack_c0._4_4_,iStack_e8);
                      lVar9 = (**(code **)(*param_2 + 0x10))(param_2,&uStack_c8);
                      if (*(long *)(lVar9 + 0x110) == *(long *)(*(long *)(lStack_90 + 0x28) + 0x110)
                         ) {
                        uStack_b8 = 0;
                        uStack_b0 = 0;
                        uStack_c8 = 0;
                        uStack_c0 = 0;
                        uStack_a8 = 1;
                        (**(code **)(*param_2 + 0xf8))
                                  (param_2,&iStack_f0,*(long *)(lStack_90 + 0x28),3,0,&uStack_c8);
                      }
                      else {
                        (**(code **)(*plStack_e0 + 0x30))();
                        lVar9 = lStack_90;
                        if (extraout_XMM0_Da < _DAT_01198788) {
                          uStack_b8 = 0;
                          uStack_b0 = 0;
                          uStack_c8 = 0;
                          uStack_c0 = 0;
                          uStack_a8 = 1;
                          (**(code **)(*param_2 + 0xf8))
                                    (param_2,&iStack_f0,*(undefined8 *)(lStack_90 + 0x28),3,0,
                                     &uStack_c8);
                          if ((*(char *)(lVar9 + 0x38) == '\x01') &&
                             (iVar18 = (**(code **)(*plStack_e0 + 0x18))(plStack_e0,0xb),
                             iVar18 == 0)) {
                            uStack_c8 = CONCAT44(iStack_ec + -1,iStack_f0);
                            uStack_c0 = CONCAT44(uStack_c0._4_4_,iStack_e8);
                            lVar9 = (**(code **)(*param_2 + 0x10))(param_2,&uStack_c8);
                            plVar2 = plStack_e0;
                            if (*(long *)(*(long *)(lVar9 + 0x68) + 200) == _DAT_0f6eaec0) {
                              iVar18 = (**(code **)(*plStack_e0 + 0x18))(plStack_e0,5);
                              iVar16 = (**(code **)(*plVar2 + 0x18))(plVar2,6);
                              iVar8 = (**(code **)(*plVar2 + 0x18))(plVar2,5);
                              iVar18 = iVar18 << (iVar16 == 0);
                              if (iVar8 == 0) {
                                iVar18 = 1;
                              }
                              func_0x0cf61df0(param_2,plVar2,&uStack_c8,iVar18,0x17,0x19);
                            }
                          }
                        }
                      }
                    }
                  }
                  iVar15 = iVar15 + -1;
                  iVar16 = (int)uStack_88;
                  iVar7 = iVar7 + 1;
                } while (iVar15 != 0);
                iVar18 = iStack_94 + 1;
              } while (iVar18 != iStack_54);
            }
            else {
              iStack_44 = (int)uStack_40 + iVar7 * 2;
              do {
                iVar7 = iStack_50;
                iVar15 = iStack_44;
                iStack_80 = -iVar18;
                iStack_7c = iVar18;
                if (-iVar18 < 0) {
                  iStack_80 = iVar18;
                }
                do {
                  bVar19 = iStack_80 == dStack_78._0_4_;
                  bVar20 = (int)uStack_88 == (int)uStack_70;
                  iVar18 = -iVar7;
                  if (-iVar7 < 0) {
                    iVar18 = iVar7;
                  }
                  bVar21 = iVar18 == dStack_78._0_4_;
                  iStack_94 = CONCAT31(iStack_94._1_3_,
                                       iVar18 == dStack_78._0_4_ && iStack_80 == dStack_78._0_4_);
                  iStack_f0 = (int)uStack_d8 + iStack_7c;
                  iStack_ec = uStack_d8._4_4_ + (int)uStack_88;
                  iStack_e8 = iStack_d0 + iVar7;
                  lVar9 = (**(code **)(*param_2 + 0x10))(param_2,&iStack_f0);
                  iVar18 = iVar15;
                  if (*(char *)(lVar9 + 0x71) == '\0') {
                    lVar9 = (**(code **)(*param_2 + 0x10))(param_2,&iStack_f0);
                    param_2 = plStack_68;
                    cVar3 = (**(code **)(**(long **)(lVar9 + 0x68) + 0x2a0))
                                      (*(long **)(lVar9 + 0x68),lVar9,plStack_68,&iStack_f0);
                    if (cVar3 != '\0') {
                      iStack_e4 = iVar15;
                      fVar22 = (float)(**(code **)(*plStack_e0 + 0x30))();
                      lVar9 = lStack_90;
                      if ((bVar19 || bVar20) || bVar21) {
                        if ((char)iStack_94 == '\0') {
                          if (_DAT_011986a0 <= fVar22) goto LAB_0d3e7d35;
                          uStack_b8 = 0;
                          uStack_b0 = 0;
                          uStack_c8 = 0;
                          uStack_c0 = 0;
                          uStack_a8 = 1;
                          (**(code **)(*param_2 + 0xf8))
                                    (param_2,&iStack_f0,*(undefined8 *)(lStack_90 + 0x28),3,0,
                                     &uStack_c8);
                          iVar18 = iStack_e4;
                          if (*(char *)(lVar9 + 0x38) == '\x01') {
                            iVar15 = (**(code **)(*plStack_e0 + 0x18))(plStack_e0,0xe);
                            goto joined_r0x0d3e7c85;
                          }
                        }
                        else if ((float)s_333__01198c10._0_4_ <= fVar22) {
LAB_0d3e7d35:
                          (**(code **)(*plStack_e0 + 0x30))();
                          iVar18 = iStack_e4;
                          if (extraout_XMM0_Da_01 < _DAT_01198b4c) {
                            uStack_b8 = 0;
                            uStack_b0 = 0;
                            uStack_c8 = 0;
                            uStack_c0 = 0;
                            uStack_a8 = 1;
                            (**(code **)(*param_2 + 0xf8))
                                      (param_2,&iStack_f0,*(undefined8 *)(lStack_90 + 0x30),3,0,
                                       &uStack_c8);
                          }
                        }
                        else {
                          uStack_b8 = 0;
                          uStack_b0 = 0;
                          uStack_c8 = 0;
                          uStack_c0 = 0;
                          uStack_a8 = 1;
                          (**(code **)(*param_2 + 0xf8))
                                    (param_2,&iStack_f0,*(undefined8 *)(lStack_90 + 0x28),3,0,
                                     &uStack_c8);
                          iVar18 = iStack_e4;
                          if (*(char *)(lVar9 + 0x38) == '\x01') {
                            iVar15 = (**(code **)(*plStack_e0 + 0x18))(plStack_e0,0xc);
joined_r0x0d3e7c85:
                            if (iVar15 == 0) {
                              uStack_c8 = CONCAT44(iStack_ec + -1,iStack_f0);
                              uStack_c0._4_4_ = (undefined4)((ulong)uStack_c0 >> 0x20);
                              uStack_c0 = CONCAT44(uStack_c0._4_4_,iStack_e8);
                              lVar9 = (**(code **)(*param_2 + 0x10))(param_2,&uStack_c8);
                              plVar2 = plStack_e0;
                              iVar18 = iStack_e4;
                              if (*(long *)(*(long *)(lVar9 + 0x68) + 200) == _DAT_0f6eaec0) {
                                iVar18 = (**(code **)(*plStack_e0 + 0x18))(plStack_e0,5);
                                iVar15 = (**(code **)(*plVar2 + 0x18))(plVar2,6);
                                iVar16 = (**(code **)(*plVar2 + 0x18))(plVar2,5);
                                iVar18 = iVar18 << (iVar15 == 0);
                                if (iVar16 == 0) {
                                  iVar18 = 1;
                                }
                                func_0x0cf61df0(param_2,plVar2,&uStack_c8,iVar18,0x17,0x19);
                                iVar18 = iStack_e4;
                              }
                            }
                          }
                        }
                      }
                      else if (fVar22 < _DAT_01198a9c) {
                        uStack_b8 = 0;
                        uStack_b0 = 0;
                        uStack_c8 = 0;
                        uStack_c0 = 0;
                        uStack_a8 = 1;
                        (**(code **)(*param_2 + 0xf8))
                                  (param_2,&iStack_f0,*(undefined8 *)(lStack_90 + 0x30),3,0,
                                   &uStack_c8);
                        iVar18 = iStack_e4;
                      }
                      else {
                        (**(code **)(*plStack_e0 + 0x30))();
                        lVar9 = lStack_90;
                        iVar18 = iStack_e4;
                        if (extraout_XMM0_Da_00 < _DAT_011987c4) {
                          uStack_b8 = 0;
                          uStack_b0 = 0;
                          uStack_c8 = 0;
                          uStack_c0 = 0;
                          uStack_a8 = 1;
                          (**(code **)(*param_2 + 0xf8))
                                    (param_2,&iStack_f0,*(undefined8 *)(lStack_90 + 0x28),3,0,
                                     &uStack_c8);
                          if (*(char *)(lVar9 + 0x38) == '\x01') {
                            iVar15 = (**(code **)(*plStack_e0 + 0x18))(plStack_e0,10);
                            goto joined_r0x0d3e7c85;
                          }
                        }
                      }
                    }
                  }
                  iVar16 = (int)uStack_88;
                  iVar7 = iVar7 + 1;
                  iVar15 = iVar18 + -1;
                } while (iVar18 + -1 != 0);
                iVar18 = iStack_7c + 1;
              } while (iVar18 != iStack_54);
            }
            uVar6 = iVar16 + 1;
            uVar14 = uStack_70;
          } while (iVar16 < (int)uStack_70);
        }
        return 1;
      }
      if (((long)_DAT_0f70e188 - (long)_DAT_0f70e180 == -8) ||
         (_DAT_0f70e188 != (undefined8 *)0x0 && _DAT_0f70e180 == (undefined8 *)0x0)) {
        func_0x04890760();
        pcVar1 = (code *)swi(3);
        uVar11 = (*pcVar1)();
        return uVar11;
      }
      puVar13 = _DAT_0f70e180;
      if (_DAT_0f70e188 != _DAT_0f70e180) {
        puVar12 = _DAT_0f70e180;
        do {
          puVar13 = puVar12;
          if (lVar9 == *(long *)*puVar12) break;
          puVar12 = puVar12 + 1;
          puVar13 = (undefined8 *)
                    (((long)_DAT_0f70e188 - (long)_DAT_0f70e180) + (long)_DAT_0f70e180);
        } while (puVar12 != _DAT_0f70e188);
      }
      if (puVar13 != _DAT_0f70e188) goto LAB_0d3e7252;
      if (iVar18 == 100) {
        return 0;
      }
      iVar15 = uStack_d8._4_4_;
      iVar7 = uStack_d8._4_4_ + -1;
      uStack_d8 = CONCAT44(iVar7,(int)uStack_d8);
      if (iVar7 <= sVar4) {
        return 0;
      }
      iVar18 = iVar18 + 1;
    } while (iVar15 + (int)uStack_70 < (int)sVar5);
  }
  return 0;
}


```

## `d3e7e20` — HugeMushroomFeature::vslot5

- instructions: 176
- calls: d3e8090

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 HugeMushroomFeature_v5(long param_1,long *param_2,ulong *param_3,long *param_4)

{
  bool bVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  undefined8 uStack_80;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  ulong *puStack_60;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  ulong uStack_48;
  long lStack_40;
  ulong uStack_38;
  
  iStack_78 = (int)param_3[1];
  uStack_80 = *param_3;
  iStack_74 = *(int *)(param_1 + 0x20);
  lStack_40 = param_1;
  if (iStack_74 < 0) {
    iStack_74 = (**(code **)(*param_4 + 0x18))(param_4,2);
  }
  iVar4 = (**(code **)(*param_4 + 0x18))(param_4,3);
  iVar5 = (**(code **)(*param_4 + 0x18))(param_4,0xc);
  uVar11 = iVar4 + 4 << (iVar5 == 0);
  iVar4 = uStack_80._4_4_;
  sVar3 = (**(code **)(*param_2 + 0x110))(param_2);
  if ((sVar3 < iVar4) &&
     (puStack_60 = param_3, sVar3 = (**(code **)(*param_2 + 0x118))(param_2),
     (int)(iVar4 + uVar11 + 1) < (int)sVar3)) {
    uVar12 = (ulong)uVar11;
    if (uVar11 != 0xfffffffe) {
      iStack_68 = uVar11 + iVar4 + 2;
      uStack_38 = uStack_80 & 0xffffffff;
      iStack_6c = iVar4 + 3;
      uStack_48 = (ulong)uVar11;
      bVar1 = true;
      do {
        uVar11 = (uint)(iStack_6c < iVar4);
        iVar9 = (int)uStack_38 + uVar11 * -3;
        iVar5 = (int)uStack_38 + uVar11 * 3;
        bVar2 = bVar1;
        if ((iVar9 <= iVar5) && (bVar1)) {
          iStack_64 = iStack_78 + uVar11 * -3;
          iVar10 = iStack_78 + uVar11 * 3;
          iStack_70 = iVar5;
          while (iVar5 = iStack_64, bVar2 = bVar1, bVar1) {
            do {
              sVar3 = (**(code **)(*param_2 + 0x110))(param_2);
              if ((iVar4 < sVar3) ||
                 (sVar3 = (**(code **)(*param_2 + 0x118))(param_2), sVar3 <= iVar4)) {
                bVar2 = false;
                goto LAB_0d3e7f02;
              }
              iStack_54 = iVar9;
              iStack_50 = iVar4;
              iStack_4c = iVar5;
              pcVar6 = (char *)(**(code **)(*param_2 + 0x60))(param_2,&iStack_54);
              if ((*pcVar6 != '\0') && (*pcVar6 != '\a')) {
                bVar2 = false;
                if ((iVar9 != (int)*puStack_60) ||
                   ((bVar2 = false, iVar4 != *(int *)((long)puStack_60 + 4) ||
                    (iVar5 != (int)puStack_60[1])))) goto LAB_0d3e7f02;
                lVar7 = (**(code **)(*param_2 + 0x10))(param_2,puStack_60);
                lVar7 = *(long *)(*(long *)(lVar7 + 0x68) + 200);
                if ((lVar7 != _DAT_0f719018) && (lVar7 != _DAT_0f719040)) {
                  bVar1 = false;
                }
              }
            } while ((iVar5 < iVar10) && (iVar5 = iVar5 + 1, bVar1));
            bVar2 = bVar1;
            if ((iStack_70 <= iVar9) || (iVar9 = iVar9 + 1, !bVar1)) break;
          }
        }
LAB_0d3e7f02:
        iVar4 = iVar4 + 1;
        bVar1 = bVar2;
      } while (iVar4 != iStack_68);
      uVar12 = uStack_48;
      if (!bVar2) goto LAB_0d3e8076;
    }
    uVar8 = func_0x0d3e8090(lStack_40,param_2,&uStack_80,iStack_74,uVar12 & 0xffffffff);
  }
  else {
LAB_0d3e8076:
    uVar8 = 0;
  }
  return uVar8;
}


```

## `d3e8ac0` — Feature::vslot3, OreFeature::vslot3, ClayFeature::vslot3 (+92 more)

- instructions: 36
- calls: c4af9f0

```c

undefined8
BambooFeature_v3(undefined8 param_1,byte *param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  bVar1 = *param_2;
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 != 0x12) {
      return 1;
    }
  }
  else if (*(long *)(param_2 + 8) != 0x12) {
    return 1;
  }
  if ((bVar1 & 1) == 0) {
    param_2 = param_2 + 1;
  }
  else {
    param_2 = *(byte **)(param_2 + 0x10);
  }
  auVar2[0] = -(*param_2 == DAT_014e9f70);
  auVar2[1] = -(param_2[1] == UNK_014e9f71);
  auVar2[2] = -(param_2[2] == UNK_014e9f72);
  auVar2[3] = -(param_2[3] == UNK_014e9f73);
  auVar2[4] = -(param_2[4] == UNK_014e9f74);
  auVar2[5] = -(param_2[5] == UNK_014e9f75);
  auVar2[6] = -(param_2[6] == UNK_014e9f76);
  auVar2[7] = -(param_2[7] == UNK_014e9f77);
  auVar2[8] = -(param_2[8] == UNK_014e9f78);
  auVar2[9] = -(param_2[9] == UNK_014e9f79);
  auVar2[10] = -(param_2[10] == UNK_014e9f7a);
  auVar2[0xb] = -(param_2[0xb] == UNK_014e9f7b);
  auVar2[0xc] = -(param_2[0xc] == UNK_014e9f7c);
  auVar2[0xd] = -(param_2[0xd] == UNK_014e9f7d);
  auVar2[0xe] = -(param_2[0xe] == UNK_014e9f7e);
  auVar2[0xf] = -(param_2[0xf] == UNK_014e9f7f);
  auVar3[0] = -((char)*(undefined2 *)(param_2 + 0x10) == DAT_014e1fe0);
  auVar3[1] = -((char)((ushort)*(undefined2 *)(param_2 + 0x10) >> 8) == UNK_014e1fe1);
  auVar3[2] = -(UNK_014e1fe2 == '\0');
  auVar3[3] = -(UNK_014e1fe3 == '\0');
  auVar3[4] = -(UNK_014e1fe4 == '\0');
  auVar3[5] = -(UNK_014e1fe5 == '\0');
  auVar3[6] = -(UNK_014e1fe6 == '\0');
  auVar3[7] = -(UNK_014e1fe7 == '\0');
  auVar3[8] = -(UNK_014e1fe8 == '\0');
  auVar3[9] = -(UNK_014e1fe9 == '\0');
  auVar3[10] = -(UNK_014e1fea == '\0');
  auVar3[0xb] = -(UNK_014e1feb == '\0');
  auVar3[0xc] = -(UNK_014e1fec == '\0');
  auVar3[0xd] = -(UNK_014e1fed == '\0');
  auVar3[0xe] = -(UNK_014e1fee == '\0');
  auVar3[0xf] = -(UNK_014e1fef == '\0');
  auVar3 = auVar3 & auVar2;
  if ((ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar3[0xf] >> 7) << 0xf) != 0xffff) {
    return 1;
  }
  func_0x0c4af9f0(1,3,0xe,&UNK_011b03a4,param_5,param_6,1);
  return 0;
}


```

## `d3e8dd0` — Feature::vslot4, OreFeature::vslot4, ClayFeature::vslot4 (+95 more)

- instructions: 1

```c

void BambooFeature_v4(void)

{
  return;
}


```

## `d3e9360` — MultiBlockFeature::vslot2

- instructions: 675
- calls: 5ff3c40, c6e95e0, cb91980, cdb7dd0, d3d5770, d3dfbc0, ee4a030, eeddcf0

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] MultiBlockFeature_v2(long param_1,undefined8 *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  bool bVar23;
  undefined1 auVar24 [16];
  undefined8 uStack_b0;
  int iStack_a8;
  int iStack_a4;
  long lStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  int iStack_80;
  int iStack_7c;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_0d3e940a:
    uStack_38 = 0x1d00000123cab6;
    uStack_40 = 0x160000014712bf;
    func_0x0d3dfbc0(param_2 + 5,&uStack_38,&uStack_40);
    if ((uStack_40 >> 0x37 & 1) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_40 & 0xff00ffffffffffff) - 8);
    }
    if ((uStack_38 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_38 & 0xff00ffffffffffff) - 8);
    }
  }
  else {
    lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 0x68);
    lVar9 = *(long *)(lVar8 + 0x1b0);
    if (lVar9 == 0) {
LAB_0d3e93d7:
      for (plVar14 = *(long **)(lVar8 + 0x350); plVar14 != *(long **)(lVar8 + 0x358);
          plVar14 = plVar14 + 2) {
        if (*(ulong *)(*(long *)(*plVar14 + 8) + 8) == _DAT_0f6fce60) goto LAB_0d3e94ea;
      }
      goto LAB_0d3e940a;
    }
    lVar10 = lVar8 + 0x1b0;
    do {
      bVar23 = *(ulong *)(lVar9 + 0x20) < _DAT_0f6fce60;
      if (!bVar23) {
        lVar10 = lVar9;
      }
      lVar9 = *(long *)(lVar9 + (ulong)bVar23 * 8);
    } while (lVar9 != 0);
    if ((lVar10 == lVar8 + 0x1b0) || (_DAT_0f6fce60 < *(ulong *)(lVar10 + 0x20))) goto LAB_0d3e93d7;
LAB_0d3e94ea:
    lVar8 = func_0x05ff3c40();
    if (lVar8 == 0) {
      uStack_48 = 0x1d00000123cab6;
      uStack_50 = 0x1300000148c47b;
      func_0x0d3dfbc0(param_2 + 5,&uStack_48,&uStack_50);
      if ((uStack_50 >> 0x37 & 1) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_50 & 0xff00ffffffffffff) - 8);
      }
      if ((uStack_48 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_48 & 0xff00ffffffffffff) - 8);
      }
    }
    else {
      lVar9 = *(long *)(param_1 + 0x10);
      if (*(char *)(param_1 + 0xd9) != '\x01') {
LAB_0d3e9729:
        bVar5 = func_0x0cdb7dd0(lVar8,lVar9);
        bVar1 = *(byte *)(lVar8 + 1);
        uVar7 = (uint)bVar1;
        lStack_a0 = lVar9;
        if (*(char *)(param_1 + 0xd8) == '\x01') {
          uVar22 = 0;
          if (uVar7 != 0) {
            lVar8 = (ulong)bVar5 * 0xc;
            do {
              lVar9 = *(long *)(lStack_a0 + 0x68);
              lVar10 = *(long *)(lVar9 + 0x1b0);
              if (lVar10 != 0) {
                lVar18 = lVar9 + 0x1b0;
                do {
                  bVar23 = *(ulong *)(lVar10 + 0x20) < _DAT_0f6fce60;
                  if (!bVar23) {
                    lVar18 = lVar10;
                  }
                  lVar10 = *(long *)(lVar10 + (ulong)bVar23 * 8);
                } while (lVar10 != 0);
                if ((lVar18 == lVar9 + 0x1b0) || (_DAT_0f6fce60 < *(ulong *)(lVar18 + 0x20)))
                goto LAB_0d3e97d3;
                if (uVar22 < *(uint *)(lVar18 + 0x28)) {
                  uVar12 = (ulong)(uVar22 << (((char)*(undefined4 *)(lVar18 + 0x30) -
                                              (char)*(undefined4 *)(lVar18 + 0x2c)) + 1U & 0x1f) &
                                   0xffff | ~*(uint *)(lVar18 + 0x34) &
                                            (uint)*(ushort *)(lStack_a0 + 0x128));
                  if (((ulong)(*(long *)(lVar9 + 0x1f0) - *(long *)(lVar9 + 0x1e8) >> 3) <= uVar12)
                     || (lVar10 = *(long *)(*(long *)(lVar9 + 0x1e8) + uVar12 * 8), lVar10 == 0))
                  goto LAB_0d3e9ca4;
                  goto LAB_0d3e9880;
                }
LAB_0d3e9ca4:
                uStack_68 = 0x1d00000123cab6;
                uStack_88 = 0x3c0000014dc100;
                func_0x0d3dfbc0(param_2 + 5,&uStack_68,&uStack_88);
                if ((uStack_88 >> 0x37 & 1) != 0) {
                  (**(code **)(_DAT_0f5463b0 + 0x28))
                            (&DAT_0f5463b0,(uStack_88 & 0xff00ffffffffffff) - 8);
                }
                uStack_88 = 0;
                if ((uStack_68 & 0x80000000000000) != 0) {
                  (**(code **)(_DAT_0f5463b0 + 0x28))
                            (&DAT_0f5463b0,(uStack_68 & 0xff00ffffffffffff) - 8);
                }
                goto LAB_0d3e94ca;
              }
LAB_0d3e97d3:
              for (plVar14 = *(long **)(lVar9 + 0x350); plVar14 != *(long **)(lVar9 + 0x358);
                  plVar14 = plVar14 + 2) {
                plVar4 = (long *)*plVar14;
                if (*(ulong *)(plVar4[1] + 8) == _DAT_0f6fce60) {
                  lVar10 = (**(code **)(*plVar4 + 8))
                                     (plVar4,lVar9,*(ushort *)(lStack_a0 + 0x128),uVar22);
                  if (lVar10 != 0) goto LAB_0d3e9880;
                  break;
                }
              }
              if ((*(byte *)(lVar9 + 0x135) & 8) == 0) goto LAB_0d3e9ca4;
              lVar10 = *(long *)(lVar9 + 0x200);
LAB_0d3e9880:
              iStack_a8 = *(int *)(&UNK_019b3c58 + lVar8) * uVar22 + *(int *)(param_2 + 2);
              uStack_b0 = CONCAT44(*(int *)(&UNK_019b3c54 + lVar8) * uVar22 +
                                   *(int *)((long)param_2 + 0xc),
                                   *(int *)(&UNK_019b3c50 + lVar8) * uVar22 + *(int *)(param_2 + 1))
              ;
              cVar6 = (**(code **)(*(long *)*param_2 + 0x80))((long *)*param_2,&uStack_b0,lVar10);
              if ((cVar6 == '\0') ||
                 (cVar6 = (**(code **)(*(long *)*param_2 + 0x88))
                                    ((long *)*param_2,&uStack_b0,lVar10), cVar6 == '\0'))
              goto LAB_0d3e9ca4;
              uVar22 = uVar22 + 1;
            } while (uVar22 != uVar7);
            goto LAB_0d3e98fc;
          }
LAB_0d3e9bba:
          if ((byte)uVar22 != bVar1) {
            if ((_DAT_0f6ffb10 == (long *)0x0) &&
               (cVar6 = func_0x0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868,
                                        &UNK_013a2901), cVar6 != '\0')) {
              _DAT_00000000 = 0xdeadc0de;
            }
            if ((byte)uVar22 != 0) {
              uVar11 = *(undefined8 *)(*_DAT_0f6ffb10 + 0x200);
              uVar12 = (ulong)bVar5;
              lStack_a0 = CONCAT44(lStack_a0._4_4_,*(undefined4 *)(&UNK_019b3c50 + uVar12 * 0xc));
              iVar2 = *(int *)(&UNK_019b3c54 + uVar12 * 0xc);
              iVar3 = *(int *)(&UNK_019b3c58 + uVar12 * 0xc);
              uVar22 = uVar22 & 0xff;
              iVar21 = 0;
              iVar16 = 0;
              iVar20 = 0;
              do {
                iStack_a8 = *(int *)(param_2 + 2) + iVar20;
                uStack_b0 = CONCAT44(*(int *)((long)param_2 + 0xc) + iVar16,
                                     *(int *)(param_2 + 1) + iVar21);
                (**(code **)(*(long *)*param_2 + 0x60))((long *)*param_2,&uStack_b0,uVar11,3);
                iVar20 = iVar20 + iVar3;
                iVar16 = iVar16 + iVar2;
                iVar21 = iVar21 + (int)lStack_a0;
                uVar22 = uVar22 - 1;
              } while (uVar22 != 0);
            }
LAB_0d3e9e4a:
            uStack_78 = 0x1d00000123cab6;
            uStack_98 = 0x1900000128376c;
            func_0x0d3dfbc0(param_2 + 5,&uStack_78,&uStack_98);
            if ((uStack_98 >> 0x37 & 1) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,(uStack_98 & 0xff00ffffffffffff) - 8);
            }
            uStack_98 = 0;
            if ((uStack_78 & 0x80000000000000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,(uStack_78 & 0xff00ffffffffffff) - 8);
            }
            goto LAB_0d3e94ca;
          }
        }
        else {
LAB_0d3e98fc:
          uVar22 = 0;
          if (uVar7 == 0) goto LAB_0d3e9bba;
          uVar12 = (ulong)bVar5;
          iStack_7c = *(int *)(&UNK_019b3c50 + uVar12 * 0xc);
          iStack_80 = *(int *)(&UNK_019b3c54 + uVar12 * 0xc);
          iStack_a4 = *(int *)(&UNK_019b3c58 + uVar12 * 0xc);
          do {
            iStack_a8 = uVar22 * iStack_a4 + *(int *)(param_2 + 2);
            uStack_b0 = CONCAT44(uVar22 * iStack_80 + *(int *)((long)param_2 + 0xc),
                                 uVar22 * iStack_7c + *(int *)(param_2 + 1));
            lVar10 = (**(code **)(*(long *)*param_2 + 0x28))((long *)*param_2,&uStack_b0);
            lVar8 = *(long *)(lVar10 + 0x68);
            lVar9 = *(long *)(lVar8 + 0x1b0);
            if (lVar9 != 0) {
              lVar18 = lVar8 + 0x1b0;
              do {
                bVar23 = *(ulong *)(lVar9 + 0x20) < _DAT_0f6fce60;
                if (!bVar23) {
                  lVar18 = lVar9;
                }
                lVar9 = *(long *)(lVar9 + (ulong)bVar23 * 8);
              } while (lVar9 != 0);
              if ((lVar18 != lVar8 + 0x1b0) && (*(ulong *)(lVar18 + 0x20) <= _DAT_0f6fce60)) {
LAB_0d3e9be4:
                uStack_70 = 0x1d00000123cab6;
                uStack_90 = 0x3e000001458485;
                func_0x0d3dfbc0(param_2 + 5,&uStack_70,&uStack_90);
                if ((uStack_90 >> 0x37 & 1) != 0) {
                  (**(code **)(_DAT_0f5463b0 + 0x28))
                            (&DAT_0f5463b0,(uStack_90 & 0xff00ffffffffffff) - 8);
                }
                uStack_90 = 0;
                if ((uStack_70 & 0x80000000000000) != 0) {
                  (**(code **)(_DAT_0f5463b0 + 0x28))
                            (&DAT_0f5463b0,(uStack_70 & 0xff00ffffffffffff) - 8);
                }
                goto LAB_0d3e94ca;
              }
            }
            for (plVar14 = *(long **)(lVar8 + 0x350); plVar14 != *(long **)(lVar8 + 0x358);
                plVar14 = plVar14 + 2) {
              if (*(ulong *)(*(long *)(*plVar14 + 8) + 8) == _DAT_0f6fce60) goto LAB_0d3e9be4;
            }
            if (*(long *)(param_1 + 0xc0) != *(long *)(param_1 + 200)) {
              uVar11 = func_0x0d3d5770(lVar10);
              lVar8 = *(long *)(param_1 + 0xc0);
              lVar9 = *(long *)(param_1 + 200);
              while( true ) {
                if (lVar8 == lVar9) goto LAB_0d3e9be4;
                cVar6 = func_0x0c6e95e0(lVar8,uVar11);
                if (cVar6 != '\0') break;
                lVar8 = lVar8 + 0xa8;
              }
            }
            iVar3 = iStack_7c;
            iVar2 = iStack_80;
            uVar22 = uVar22 + 1;
          } while (uVar22 != uVar7);
          uVar22 = 0;
          do {
            lVar8 = *(long *)(lStack_a0 + 0x68);
            lVar9 = *(long *)(lVar8 + 0x1b0);
            if (lVar9 == 0) {
LAB_0d3e9ac3:
              for (plVar14 = *(long **)(lVar8 + 0x350); plVar14 != *(long **)(lVar8 + 0x358);
                  plVar14 = plVar14 + 2) {
                plVar4 = (long *)*plVar14;
                if (*(ulong *)(plVar4[1] + 8) == _DAT_0f6fce60) {
                  lVar9 = (**(code **)(*plVar4 + 8))
                                    (plVar4,lVar8,*(ushort *)(lStack_a0 + 0x128),uVar22);
                  if (lVar9 != 0) goto LAB_0d3e9b67;
                  break;
                }
              }
              if ((*(byte *)(lVar8 + 0x135) & 8) == 0) goto LAB_0d3e9e4a;
              lVar9 = *(long *)(lVar8 + 0x200);
            }
            else {
              lVar10 = lVar8 + 0x1b0;
              do {
                bVar23 = *(ulong *)(lVar9 + 0x20) < _DAT_0f6fce60;
                if (!bVar23) {
                  lVar10 = lVar9;
                }
                lVar9 = *(long *)(lVar9 + (ulong)bVar23 * 8);
              } while (lVar9 != 0);
              if ((lVar10 == lVar8 + 0x1b0) || (_DAT_0f6fce60 < *(ulong *)(lVar10 + 0x20)))
              goto LAB_0d3e9ac3;
              if (*(uint *)(lVar10 + 0x28) <= uVar22) goto LAB_0d3e9e4a;
              uVar12 = (ulong)(uVar22 << (((char)*(undefined4 *)(lVar10 + 0x30) -
                                          (char)*(undefined4 *)(lVar10 + 0x2c)) + 1U & 0x1f) &
                               0xffff | ~*(uint *)(lVar10 + 0x34) &
                                        (uint)*(ushort *)(lStack_a0 + 0x128));
              if (((ulong)(*(long *)(lVar8 + 0x1f0) - *(long *)(lVar8 + 0x1e8) >> 3) <= uVar12) ||
                 (lVar9 = *(long *)(*(long *)(lVar8 + 0x1e8) + uVar12 * 8), lVar9 == 0))
              goto LAB_0d3e9e4a;
            }
LAB_0d3e9b67:
            iStack_a8 = uVar22 * iStack_a4 + *(int *)(param_2 + 2);
            uStack_b0 = CONCAT44(uVar22 * iVar2 + *(int *)((long)param_2 + 0xc),
                                 uVar22 * iVar3 + *(int *)(param_2 + 1));
            cVar6 = (**(code **)(*(long *)*param_2 + 0x60))((long *)*param_2,&uStack_b0,lVar9,3);
            if (cVar6 == '\0') goto LAB_0d3e9bba;
            uVar22 = uVar22 + 1;
          } while (uVar22 != uVar7);
        }
        uVar13 = (ulong)*(uint *)(param_2 + 2);
        uVar17 = param_2[1] & 0xff;
        uVar12 = param_2[1] & 0xffffffffffffff00;
        uVar15 = 0x100000000;
        goto LAB_0d3e94d2;
      }
      lVar10 = *(long *)(lVar9 + 0x68);
      lVar18 = *(long *)(lVar10 + 0x1b0);
      if (lVar18 != 0) {
        lVar19 = lVar10 + 0x1b0;
        do {
          bVar23 = *(ulong *)(lVar18 + 0x20) < _DAT_0f6ff540;
          if (!bVar23) {
            lVar19 = lVar18;
          }
          lVar18 = *(long *)(lVar18 + (ulong)bVar23 * 8);
        } while (lVar18 != 0);
        if ((lVar19 != lVar10 + 0x1b0) && (*(ulong *)(lVar19 + 0x20) <= _DAT_0f6ff540)) {
LAB_0d3e9701:
          uVar7 = func_0x0ee4a030(*(undefined8 *)(param_2[3] + 0x9f8),0);
          lVar9 = func_0x0cb91980(lVar9,uVar7 & 3);
          goto LAB_0d3e9729;
        }
      }
      for (plVar14 = *(long **)(lVar10 + 0x350); plVar14 != *(long **)(lVar10 + 0x358);
          plVar14 = plVar14 + 2) {
        if (*(ulong *)(*(long *)(*plVar14 + 8) + 8) == _DAT_0f6ff540) goto LAB_0d3e9701;
      }
      uStack_58 = 0x1d00000123cab6;
      uStack_60 = 0x5a00000140b0a1;
      func_0x0d3dfbc0(param_2 + 5,&uStack_58,&uStack_60);
      if ((uStack_60 >> 0x37 & 1) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_60 & 0xff00ffffffffffff) - 8);
      }
      if ((uStack_58 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_58 & 0xff00ffffffffffff) - 8);
      }
    }
  }
LAB_0d3e94ca:
  uVar15 = 0;
  uVar13 = 0;
  uVar12 = 0;
  uVar17 = 0;
LAB_0d3e94d2:
  auVar24._8_8_ = uVar15 | uVar13;
  auVar24._0_8_ = uVar12 | uVar17;
  return auVar24;
}


```

## `d3ec400` — MultifaceFeature::vslot2

- instructions: 604
- calls: 417d010, 4890760, c6e9230, cc41df0, d3dfbc0, d3ecf80, d43c580, ee49c60, ee4a030, eec74c0

```c

/* WARNING: Removing unreachable block (ram,0x0d3ec6c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] MultifaceFeature_v2(long param_1,long param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  long lVar11;
  byte *pbVar12;
  byte *pbVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  char cVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  long *plVar23;
  long lVar24;
  byte bVar25;
  int iVar26;
  byte bVar27;
  byte *pbVar28;
  ulong *in_FS_OFFSET;
  undefined1 auVar29 [16];
  byte *pbStack_f8;
  undefined8 uStack_f0;
  byte abStack_e8 [4];
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long *plStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined1 *puStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  long lStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  int iStack_78;
  ulong uStack_70;
  ulong uStack_68;
  uint uStack_60;
  uint uStack_5c;
  long lStack_58;
  long lStack_50;
  byte *pbStack_48;
  byte *pbStack_40;
  long lStack_38;
  
  plVar23 = *(long **)(*(long *)(param_2 + 0x20) + 0x98);
  pbVar12 = (byte *)(param_2 + 8);
  lStack_d0 = param_1;
  lVar11 = (**(code **)(*plVar23 + 0x10))(plVar23,pbVar12);
  if ((*(long *)(*(long *)(lVar11 + 0x68) + 200) == _DAT_0f6eaec0) ||
     (lVar11 = (**(code **)(*plVar23 + 0x10))(plVar23,pbVar12),
     **(char **)(*(long *)(lVar11 + 0x68) + 0x20) == '\x05')) {
    pbStack_f8 = abStack_e8;
    uStack_f0 = 0;
    lVar11 = *(long *)(lStack_d0 + 0xe0);
    pbVar28 = *(byte **)(lStack_d0 + 0xe8);
    uVar22 = (long)pbVar28 - lVar11;
    if (uVar22 == 0xffffffffffffffff) goto LAB_0d3ecd61;
    if (pbVar28 != (byte *)0x0 && lVar11 == 0) goto LAB_0d3ecd61;
    uStack_e0 = pbVar12;
    uVar21 = (uint)uVar22;
    plStack_c8 = plVar23;
    if (uVar21 < 7) {
      pbVar12 = abStack_e8;
      if (uVar21 != 0) {
        uVar17 = (ulong)((int)pbVar28 + ~(uint)lVar11);
        if (uVar22 < uVar17) {
          uVar17 = uVar22;
        }
        if ((uVar17 < 0x20) || (abStack_e8 + -lVar11 < (byte *)0x20)) {
          pbVar13 = abStack_e8;
          lVar14 = lVar11;
          uVar20 = uVar21;
        }
        else {
          uVar17 = uVar17 + 1;
          uVar15 = 0x20;
          if ((uVar17 & 0x1f) != 0) {
            uVar15 = (ulong)((uint)uVar17 & 0x1f);
          }
          lVar18 = uVar17 - uVar15;
          lVar14 = lVar11 + lVar18;
          uVar20 = uVar21 - (int)lVar18;
          pbVar13 = abStack_e8 + lVar18;
          lVar24 = 0;
          do {
            puVar1 = (undefined4 *)(lVar11 + lVar24);
            uVar5 = puVar1[1];
            uVar6 = puVar1[2];
            uVar7 = puVar1[3];
            puVar2 = (undefined8 *)(lVar11 + 0x10 + lVar24);
            uVar8 = *puVar2;
            uVar9 = puVar2[1];
            *(undefined4 *)(abStack_e8 + lVar24) = *puVar1;
            *(undefined4 *)((long)&uStack_e4 + lVar24) = uVar5;
            *(undefined4 *)((long)&uStack_e0 + lVar24) = uVar6;
            *(undefined4 *)((long)&uStack_e0 + lVar24 + 4) = uVar7;
            *(undefined8 *)((long)&uStack_d8 + lVar24) = uVar8;
            *(undefined8 *)((long)&lStack_d0 + lVar24) = uVar9;
            lVar24 = lVar24 + 0x20;
          } while (lVar18 != lVar24);
        }
        lVar11 = 0;
        do {
          if ((byte *)(lVar14 + lVar11) == pbVar28) goto LAB_0d3ecd61;
          pbVar13[lVar11] = *(byte *)(lVar14 + lVar11);
          lVar11 = lVar11 + 1;
        } while (uVar20 != (uint)lVar11);
        uStack_f0 = CONCAT44(6,uVar21);
      }
    }
    else {
      plVar23 = (long *)0x9;
      if (9 < uVar21) {
        plVar23 = (long *)(uVar22 & 0xffffffff);
      }
      pbVar12 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,plVar23);
      if (pbVar12 == (byte *)0x0) {
        func_0x0eec74c0(plVar23,0);
      }
      uVar17 = (ulong)((int)pbVar28 + ~(uint)lVar11);
      if (uVar22 < uVar17) {
        uVar17 = uVar22;
      }
      pbVar13 = pbVar12;
      lVar14 = lVar11;
      uVar20 = uVar21;
      if ((0x1f < uVar17) && (0x1f < (ulong)((long)pbVar12 - lVar11))) {
        uVar17 = uVar17 + 1;
        uVar15 = 0x20;
        if ((uVar17 & 0x1f) != 0) {
          uVar15 = (ulong)((uint)uVar17 & 0x1f);
        }
        lVar18 = uVar17 - uVar15;
        lVar14 = lVar11 + lVar18;
        uVar20 = uVar21 - (int)lVar18;
        pbVar13 = pbVar12 + lVar18;
        lVar24 = 0;
        do {
          puVar1 = (undefined4 *)(lVar11 + lVar24);
          uVar5 = puVar1[1];
          uVar6 = puVar1[2];
          uVar7 = puVar1[3];
          puVar2 = (undefined8 *)(lVar11 + 0x10 + lVar24);
          uVar8 = *puVar2;
          uVar9 = puVar2[1];
          pbVar3 = pbVar12 + lVar24;
          *(undefined4 *)pbVar3 = *puVar1;
          *(undefined4 *)(pbVar3 + 4) = uVar5;
          *(undefined4 *)(pbVar3 + 8) = uVar6;
          *(undefined4 *)(pbVar3 + 0xc) = uVar7;
          *(undefined8 *)(pbVar12 + lVar24 + 0x10) = uVar8;
          *(undefined8 *)(pbVar12 + lVar24 + 0x10 + 8) = uVar9;
          lVar24 = lVar24 + 0x20;
        } while (lVar18 != lVar24);
      }
      lVar11 = 0;
      do {
        if ((byte *)(lVar14 + lVar11) == pbVar28) goto LAB_0d3ecd61;
        pbVar13[lVar11] = *(byte *)(lVar14 + lVar11);
        lVar11 = lVar11 + 1;
      } while (uVar20 != (uint)lVar11);
      uStack_f0 = uVar22 & 0xffffffff;
      plVar23 = plStack_c8;
      pbStack_f8 = pbVar12;
    }
    lStack_90 = param_2;
    uVar17 = *in_FS_OFFSET;
    uStack_c0 = uVar17;
    pbVar12 = pbStack_f8;
    if (*(char *)(uVar17 - 0xca8) == '\0') goto LAB_0d3ecd66;
    lStack_58 = uVar17 - 0x16a8;
    do {
      if (1 < uVar21) {
        uVar22 = uVar22 & 0xffffffff;
        uVar17 = 1;
        do {
          uVar15 = uVar17 + 1;
          if ((int)uVar17 == -1) {
            uVar16 = 0;
            if (uVar17 != 0) goto LAB_0d3ece37;
          }
          else {
            uVar16 = func_0x0ee4a030(*(undefined8 *)(lStack_58 + 0x9f8),0);
            uVar16 = (ulong)(int)((uVar16 & 0xffffffff) % (uVar15 & 0xffffffff));
            if (uVar17 != uVar16) {
LAB_0d3ece37:
              bVar27 = pbVar12[uVar17];
              pbVar12[uVar17] = pbVar12[uVar16];
              pbVar12[uVar16] = bVar27;
            }
          }
          uVar17 = uVar15;
        } while (uVar22 != uVar15);
      }
      lVar11 = lStack_90;
      if (pbStack_f8 != (byte *)0x0 || (uStack_f0 & 0xffffffff) == 0) {
        auVar29 = func_0x0d3ecf80(lStack_d0,plVar23,uStack_e0,*(undefined8 *)(lStack_90 + 0x18));
        uStack_e0 = auVar29._8_8_;
        uStack_d8._4_4_ = auVar29._0_4_;
        plVar23 = (long *)(auVar29._0_8_ >> 8);
        pbVar12 = (byte *)((ulong)uStack_e0 >> 0x20);
        pbVar28 = uStack_e0;
        uVar21 = uStack_d8._4_4_;
        if (((ulong)uStack_e0 >> 0x20 & 1) != 0) goto LAB_0d3ecd0d;
        if ((uStack_f0 & 0xffffffff) == 0) goto LAB_0d3ecc48;
        lStack_38 = lStack_d0 + 0x10;
        lStack_50 = uStack_c0 - 0xa40;
        pbStack_48 = pbStack_f8 + (uStack_f0 & 0xffffffff);
        pbVar13 = pbStack_f8;
        while( true ) {
          pbStack_40 = pbVar13;
          bVar27 = *pbVar13;
          uVar22 = (ulong)bVar27;
          puStack_a8 = auStack_98;
          uStack_a0 = 0x600000000;
          bVar25 = (byte)(0x40502030001 >> (bVar27 * '\b' & 0x3f));
          if (5 < bVar27) {
            bVar25 = bVar27;
          }
          pbVar28 = *(byte **)(lStack_d0 + 0xe0);
          pbVar13 = *(byte **)(lStack_d0 + 0xe8);
          if (((long)pbVar13 - (long)pbVar28 == -1) ||
             (pbVar13 != (byte *)0x0 && pbVar28 == (byte *)0x0)) break;
          uStack_88 = uVar22;
          if (pbVar13 == pbVar28) {
            uVar21 = 0;
          }
          else {
            do {
              if (*pbVar28 != bVar25) {
                if ((uint)uStack_a0 == uStack_a0._4_4_) {
                  func_0x0d43c580(&puStack_a8,puStack_a8 + (uStack_a0 & 0xffffffff),pbVar28);
                }
                else {
                  puStack_a8[uStack_a0 & 0xffffffff] = *pbVar28;
                  uStack_a0 = CONCAT44(uStack_a0._4_4_,(uint)uStack_a0 + 1);
                }
              }
              pbVar28 = pbVar28 + 1;
            } while (pbVar28 != pbVar13);
            uVar21 = (uint)uStack_a0;
          }
          puVar10 = puStack_a8;
          uVar22 = uStack_c0;
          if (*(char *)(uStack_c0 - 0xca8) == '\0') {
            *(undefined **)(uStack_c0 - 0x16a8) = &UNK_0f147b18;
            *(undefined1 *)(uStack_c0 - 0x16a0) = 0;
            *(undefined1 *)(uStack_c0 - 0xcb8) = 0;
            if (*(char *)(uStack_c0 - 0x58) == '\0') {
              func_0x0ee49c60(uStack_c0 - 0xa40);
              *(undefined1 *)(uStack_c0 - 0x58) = 1;
            }
            uVar22 = uStack_c0;
            *(long *)(uStack_c0 - 0xcb0) = lStack_50;
            func_0x0417d010(&UNK_08b54510,uStack_c0 - 0x16a8,0xf53dab8);
            *(undefined1 *)(uVar22 - 0xca8) = 1;
          }
          if (1 < uVar21) {
            uVar17 = 1;
            do {
              uVar22 = uVar17 + 1;
              if ((int)uVar17 == -1) {
                uVar15 = 0;
                if (uVar17 != 0) goto LAB_0d3ecc17;
              }
              else {
                uVar15 = func_0x0ee4a030(*(undefined8 *)(lStack_58 + 0x9f8),0);
                uVar15 = (ulong)(int)((uVar15 & 0xffffffff) % (uVar22 & 0xffffffff));
                if (uVar17 != uVar15) {
LAB_0d3ecc17:
                  uVar4 = puVar10[uVar17];
                  puVar10[uVar17] = puVar10[uVar15];
                  puVar10[uVar15] = uVar4;
                }
              }
              uVar17 = uVar22;
            } while (uVar21 != uVar22);
          }
          lVar11 = lStack_90;
          iVar26 = *(int *)(lStack_d0 + 0xb8);
          bVar27 = 1;
          if (iVar26 != 0) {
            cVar19 = (char)uStack_88;
            uStack_5c = (uint)(cVar19 == '\x05');
            if (cVar19 == '\x04') {
              uStack_5c = 0xffffffff;
            }
            uStack_60 = -(uint)(cVar19 == '\0') | (uint)(cVar19 == '\x01');
            uVar21 = (uint)(cVar19 == '\x03');
            if (cVar19 == '\x02') {
              uVar21 = 0xffffffff;
            }
            uStack_88 = CONCAT44(uStack_88._4_4_,uVar21);
            do {
              iVar26 = iVar26 + -1;
              iStack_78 = *(int *)(lVar11 + 0x10) + (int)uStack_88;
              uStack_80 = CONCAT44(*(int *)(lVar11 + 0xc) + uStack_60,
                                   *(int *)(lVar11 + 8) + uStack_5c);
              lVar14 = (**(code **)(*plStack_c8 + 0x10))(plStack_c8,&uStack_80);
              lVar18 = (**(code **)(*plStack_c8 + 0x10))(plStack_c8,&uStack_80);
              if ((*(long *)(*(long *)(lVar18 + 0x68) + 200) != _DAT_0f6eaec0) &&
                 (lVar18 = (**(code **)(*plStack_c8 + 0x10))(plStack_c8,&uStack_80),
                 **(char **)(*(long *)(lVar18 + 0x68) + 0x20) != '\x05')) {
                uVar22 = *(ulong *)(lVar14 + 0x68);
                lVar14 = func_0x0c6e9230(lStack_38);
                if (lVar14 == 0) {
                  lVar14 = func_0x0cc41df0(0xf6ff9e0,0xf6eae50,1);
                }
                if (uVar22 != *(ulong *)(lVar14 + 0x68)) {
                  bVar27 = 1;
                  goto LAB_0d3ecb00;
                }
              }
              if (pbStack_f8 == (byte *)0x0 && (uStack_f0 & 0xffffffff) != 0) goto LAB_0d3ecd61;
              auVar29 = func_0x0d3ecf80(lStack_d0,plStack_c8,&uStack_80,
                                        *(undefined8 *)(lVar11 + 0x18));
              uStack_e0 = auVar29._8_8_;
              uStack_d8._4_4_ = auVar29._0_4_;
              plVar23 = (long *)(auVar29._0_8_ >> 8);
              pbVar12 = (byte *)((ulong)uStack_e0 >> 0x20);
            } while ((((ulong)uStack_e0 >> 0x20 & 1) == 0) && (iVar26 != 0));
            bVar27 = auVar29[0xc] ^ 1;
          }
LAB_0d3ecb00:
          pbVar13 = pbStack_40;
          if (puStack_a8 != (undefined1 *)0x0 && auStack_98 != puStack_a8) {
            (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0);
          }
          pbVar28 = uStack_e0;
          uVar21 = uStack_d8._4_4_;
          if ((bVar27 & 1) == 0) goto LAB_0d3ecd0d;
          pbVar13 = pbVar13 + 1;
          if (pbVar13 == pbStack_48) goto LAB_0d3ecc48;
        }
      }
LAB_0d3ecd61:
      uVar17 = func_0x04890760();
LAB_0d3ecd66:
      *(undefined **)(uVar17 - 0x16a8) = &UNK_0f147b18;
      *(undefined1 *)(uVar17 - 0x16a0) = 0;
      *(undefined1 *)(uVar17 - 0xcb8) = 0;
      if (*(char *)(uVar17 - 0x58) == '\0') {
        func_0x0ee49c60(uVar17 - 0xa40);
        *(undefined1 *)(uStack_c0 - 0x58) = 1;
        plVar23 = plStack_c8;
        uVar17 = uStack_c0;
      }
      *(ulong *)(uVar17 - 0xcb0) = uVar17 - 0xa40;
      func_0x0417d010(&UNK_08b54510,uVar17 - 0x16a8,0xf53dab8);
      *(undefined1 *)(uVar17 - 0xca8) = 1;
      lStack_58 = uVar17 - 0x16a8;
      uVar21 = (uint)uVar22;
    } while( true );
  }
  uStack_68 = 0x1b0000014476e7;
  uStack_70 = 0x260000013be180;
  func_0x0d3dfbc0(param_2 + 0x28,&uStack_68,&uStack_70);
  if ((uStack_70 >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_70 & 0xff00ffffffffffff) - 8);
  }
  if ((uStack_68 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_68 & 0xff00ffffffffffff) - 8);
  }
  uVar22 = 0;
  uVar17 = 0;
LAB_0d3ecd4f:
  auVar29._8_8_ = uVar17;
  auVar29._0_8_ = uVar22;
  return auVar29;
LAB_0d3ecc48:
  uStack_b0 = 0x1b0000014476e7;
  uStack_b8 = 0x2a00000136f730;
  func_0x0d3dfbc0(lVar11 + 0x28,&uStack_b0,&uStack_b8);
  pbVar28 = uStack_e0;
  if ((uStack_b8 >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_b8 & 0xff00ffffffffffff) - 8);
  }
  uStack_b8 = 0;
  if ((uStack_b0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_b0 & 0xff00ffffffffffff) - 8);
  }
  uStack_b0 = 0;
  pbVar12 = (byte *)0x0;
  uVar21 = 0;
LAB_0d3ecd0d:
  if (pbStack_f8 != (byte *)0x0 && abStack_e8 != pbStack_f8) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0);
  }
  uVar22 = (ulong)(uVar21 & 0xff) | (long)plVar23 << 8;
  uVar17 = (ulong)pbVar28 & 0xffffffff | ((ulong)pbVar12 & 0xff) << 0x20;
  goto LAB_0d3ecd4f;
}


```

## `d3f0560` — MultipartBlockColumnFeature::vslot2

- instructions: 436
- calls: c6e9230, c6e95e0, cc41df0, d3d5770

```c

undefined1  [16] MultipartBlockColumnFeature_v2(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  undefined8 uVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  undefined1 auVar42 [16];
  undefined8 uStack_58;
  int iStack_50;
  uint uStack_4c;
  ulong uStack_48;
  long *plStack_40;
  undefined8 *puStack_38;
  
  cVar8 = *(char *)(param_1 + 0x2d0);
  switch(cVar8) {
  case '\0':
    cVar8 = '\x01';
    break;
  case '\x01':
    iVar10 = *(int *)(param_2 + 1);
    iVar12 = -1;
    goto code_r0x0d3f05e1;
  case '\x02':
    cVar8 = '\x03';
    break;
  case '\x03':
    cVar8 = '\x02';
    break;
  case '\x04':
    cVar8 = '\x05';
    break;
  case '\x05':
    iVar10 = *(int *)(param_2 + 1) + -1;
    iVar12 = 0;
code_r0x0d3f05e1:
    iVar12 = iVar12 + *(int *)((long)param_2 + 0xc);
    uVar24 = 0;
    goto LAB_0d3f05e8;
  }
  iVar10 = (uint)(cVar8 == '\x05') + *(int *)(param_2 + 1);
  iVar12 = (uint)(cVar8 == '\x01') + *(int *)((long)param_2 + 0xc);
  uVar24 = 0xffffffff;
  if (cVar8 != '\x02') {
    uVar24 = (uint)(cVar8 == '\x03');
  }
LAB_0d3f05e8:
  plStack_40 = (long *)*param_2;
  plVar1 = (long *)param_2[3];
  iStack_50 = uVar24 + *(int *)(param_2 + 2);
  uStack_58 = CONCAT44(iVar12,iVar10);
  if (*(long *)(param_1 + 0x2d8) == *(long *)(param_1 + 0x2e0)) {
LAB_0d3f0680:
    puVar14 = *(uint **)(param_1 + 0x2b8);
    puVar3 = *(uint **)(param_1 + 0x2c0);
    if (puVar14 == puVar3) {
      uVar24 = *(uint *)(param_1 + 0x2b0);
      if ((int)uVar24 < *(int *)(param_1 + 0x2b4) + -1) {
        iVar10 = (**(code **)(*plVar1 + 0x18))(plVar1,*(int *)(param_1 + 0x2b4) - uVar24);
        uVar24 = iVar10 + uVar24;
      }
      uStack_48 = (ulong)uVar24;
      if (0 < (int)uVar24) goto LAB_0d3f0792;
LAB_0d3f08d9:
      iVar12 = 0;
    }
    else {
      uVar19 = (long)puVar3 + (-8 - (long)puVar14);
      iVar10 = 0;
      puVar15 = puVar14;
      if (0x3f < uVar19) {
        uVar20 = (uVar19 >> 3) + 1;
        uVar19 = 8;
        if ((uVar20 & 7) != 0) {
          uVar19 = (ulong)((uint)uVar20 & 7);
        }
        puVar15 = puVar14 + (uVar20 - uVar19) * 2;
        iVar10 = 0;
        iVar12 = 0;
        iVar21 = 0;
        iVar22 = 0;
        lVar17 = 0;
        iVar23 = 0;
        iVar25 = 0;
        iVar26 = 0;
        iVar28 = 0;
        do {
          iVar10 = iVar10 + puVar14[lVar17 * 2 + 1];
          iVar12 = iVar12 + (puVar14 + lVar17 * 2 + 1)[2];
          iVar21 = iVar21 + puVar14[lVar17 * 2 + 5];
          iVar22 = iVar22 + (puVar14 + lVar17 * 2 + 5)[2];
          iVar23 = iVar23 + puVar14[lVar17 * 2 + 9];
          iVar25 = iVar25 + (puVar14 + lVar17 * 2 + 9)[2];
          iVar26 = iVar26 + puVar14[lVar17 * 2 + 0xd];
          iVar28 = iVar28 + (puVar14 + lVar17 * 2 + 0xd)[2];
          lVar17 = lVar17 + 8;
        } while (uVar20 - uVar19 != lVar17);
        iVar10 = iVar28 + iVar22 + iVar25 + iVar12 + iVar26 + iVar21 + iVar23 + iVar10;
      }
      do {
        iVar10 = iVar10 + puVar15[1];
        puVar15 = puVar15 + 2;
      } while (puVar15 != puVar3);
      if (iVar10 == 0) {
        iVar10 = -puVar14[1];
      }
      else {
        iVar10 = (**(code **)(*(long *)plVar1[0x13f] + 0x18))();
        iVar10 = iVar10 - (*(uint **)(param_1 + 0x2b8))[1];
        puVar14 = *(uint **)(param_1 + 0x2b8);
      }
      while (-1 < iVar10) {
        iVar10 = iVar10 - puVar14[3];
        puVar14 = puVar14 + 2;
      }
      uStack_48 = (ulong)*puVar14;
      if ((int)*puVar14 < 1) goto LAB_0d3f08d9;
LAB_0d3f0792:
      cVar8 = *(char *)(param_1 + 0x2d0);
      uStack_4c = (uint)(cVar8 == '\x05');
      if (cVar8 == '\x04') {
        uStack_4c = 0xffffffff;
      }
      iVar10 = 0;
      uVar24 = (uint)(cVar8 == '\x03');
      puStack_38 = param_2;
      if (cVar8 == '\x02') {
        uVar24 = 0xffffffff;
      }
      do {
        iStack_50 = iVar10 * uVar24 + *(int *)(puStack_38 + 2);
        uStack_58 = CONCAT44(iVar10 * (-(uint)(cVar8 == '\0') | (uint)(cVar8 == '\x01')) +
                             *(int *)((long)puStack_38 + 0xc),
                             iVar10 * uStack_4c + *(int *)(puStack_38 + 1));
        if (*(long *)(param_1 + 0x2f0) != *(long *)(param_1 + 0x2f8)) {
          uVar11 = (**(code **)(*plStack_40 + 0x28))(plStack_40,&uStack_58);
          uVar11 = func_0x0d3d5770(uVar11);
          lVar17 = *(long *)(param_1 + 0x2f0);
          lVar2 = *(long *)(param_1 + 0x2f8);
          param_2 = puStack_38;
          while( true ) {
            iVar12 = iVar10;
            puStack_38 = param_2;
            if (lVar17 == lVar2) goto LAB_0d3f08dc;
            cVar9 = func_0x0c6e95e0(lVar17,uVar11);
            if (cVar9 != '\0') break;
            lVar17 = lVar17 + 0xa8;
            param_2 = puStack_38;
          }
        }
        iVar10 = iVar10 + 1;
        iVar12 = (int)uStack_48;
        param_2 = puStack_38;
      } while (iVar10 != iVar12);
    }
LAB_0d3f08dc:
    iVar10 = (int)uStack_48;
    if (iVar12 < (int)uStack_48) {
      iVar10 = iVar12;
    }
    puVar14 = *(uint **)(param_1 + 0x2b8);
    puVar3 = *(uint **)(param_1 + 0x2c0);
    if (puVar14 == puVar3) {
      uVar24 = *(uint *)(param_1 + 0x2b0);
    }
    else {
      uVar24 = *puVar14;
      uVar19 = (long)puVar3 + (-8 - (long)puVar14);
      if (0x3f < uVar19) {
        uVar20 = (uVar19 >> 3) + 1;
        uVar19 = 8;
        if ((uVar20 & 7) != 0) {
          uVar19 = (ulong)((uint)uVar20 & 7);
        }
        lVar17 = 0;
        uVar13 = uVar24;
        uVar32 = uVar24;
        uVar37 = uVar24;
        uVar31 = uVar24;
        uVar34 = uVar24;
        uVar27 = uVar24;
        uVar29 = uVar24;
        do {
          uVar30 = puVar14[lVar17 * 2];
          uVar33 = (puVar14 + lVar17 * 2)[2];
          uVar35 = puVar14[lVar17 * 2 + 4];
          uVar36 = (puVar14 + lVar17 * 2 + 4)[2];
          uVar4 = puVar14[lVar17 * 2 + 8];
          uVar5 = (puVar14 + lVar17 * 2 + 8)[2];
          uVar6 = puVar14[lVar17 * 2 + 0xc];
          uVar7 = (puVar14 + lVar17 * 2 + 0xc)[2];
          uVar38 = -(uint)((int)uVar30 < (int)uVar24);
          uVar39 = -(uint)((int)uVar33 < (int)uVar13);
          uVar40 = -(uint)((int)uVar35 < (int)uVar32);
          uVar41 = -(uint)((int)uVar36 < (int)uVar37);
          uVar24 = ~uVar38 & uVar24 | uVar30 & uVar38;
          uVar13 = ~uVar39 & uVar13 | uVar33 & uVar39;
          uVar32 = ~uVar40 & uVar32 | uVar35 & uVar40;
          uVar37 = ~uVar41 & uVar37 | uVar36 & uVar41;
          uVar30 = -(uint)((int)uVar4 < (int)uVar31);
          uVar33 = -(uint)((int)uVar5 < (int)uVar34);
          uVar35 = -(uint)((int)uVar6 < (int)uVar27);
          uVar36 = -(uint)((int)uVar7 < (int)uVar29);
          uVar31 = ~uVar30 & uVar31 | uVar4 & uVar30;
          uVar34 = ~uVar33 & uVar34 | uVar5 & uVar33;
          uVar27 = ~uVar35 & uVar27 | uVar6 & uVar35;
          uVar29 = ~uVar36 & uVar29 | uVar7 & uVar36;
          lVar17 = lVar17 + 8;
        } while (uVar20 - uVar19 != lVar17);
        uVar31 = ~-(uint)((int)uVar24 < (int)uVar31) & uVar31 |
                 uVar24 & -(uint)((int)uVar24 < (int)uVar31);
        uVar34 = ~-(uint)((int)uVar13 < (int)uVar34) & uVar34 |
                 uVar13 & -(uint)((int)uVar13 < (int)uVar34);
        uVar32 = ~-(uint)((int)uVar32 < (int)uVar27) & uVar27 |
                 uVar32 & -(uint)((int)uVar32 < (int)uVar27);
        uVar37 = ~-(uint)((int)uVar37 < (int)uVar29) & uVar29 |
                 uVar37 & -(uint)((int)uVar37 < (int)uVar29);
        uVar24 = -(uint)((int)uVar31 < (int)uVar32);
        uVar13 = -(uint)((int)uVar34 < (int)uVar37);
        uVar24 = ~uVar24 & uVar32 | uVar31 & uVar24;
        uVar13 = ~uVar13 & uVar37 | uVar34 & uVar13;
        uVar32 = -(uint)((int)uVar24 < (int)uVar13);
        uVar24 = ~uVar32 & uVar13 | uVar24 & uVar32;
        puVar14 = puVar14 + (uVar20 - uVar19) * 2;
      }
      do {
        if ((int)*puVar14 < (int)uVar24) {
          uVar24 = *puVar14;
        }
        puVar14 = puVar14 + 2;
      } while (puVar14 != puVar3);
    }
    if ((int)uVar24 <= iVar10) {
      iVar12 = iVar10 + -1;
      uVar24 = iVar12;
      if (0 < iVar10) {
        lVar17 = param_1 + 0x208;
        if (iVar10 == 2) {
          lVar17 = param_1 + 0xb8;
        }
        uStack_48 = param_1 + 0x10;
        if (iVar12 == 0) {
          lVar17 = uStack_48;
        }
        lVar17 = func_0x0c6e9230(lVar17);
        if (lVar17 == 0) {
          lVar17 = func_0x0cc41df0(0xf6ff9e0,0xf6eae50,1);
        }
        iStack_50 = *(int *)(param_2 + 2);
        uStack_58 = param_2[1];
        (**(code **)(*plStack_40 + 0x60))(plStack_40,&uStack_58,lVar17,2);
        uVar24 = 0;
        if (iVar10 != 1) {
          iVar21 = 1;
          uStack_4c = iVar12;
          do {
            uVar19 = param_1 + 0x160;
            if (iVar21 - iVar10 == -2) {
              uVar19 = param_1 + 0xb8;
            }
            if (iVar21 - iVar10 == -1) {
              uVar19 = uStack_48;
            }
            lVar17 = func_0x0c6e9230(uVar19);
            if (lVar17 == 0) {
              lVar17 = func_0x0cc41df0(0xf6ff9e0,0xf6eae50,1);
            }
            cVar8 = *(char *)(param_1 + 0x2d0);
            uVar24 = (uint)(cVar8 == '\x05');
            if (cVar8 == '\x04') {
              uVar24 = 0xffffffff;
            }
            uVar13 = (uint)(cVar8 == '\x03');
            if (cVar8 == '\x02') {
              uVar13 = 0xffffffff;
            }
            iStack_50 = uVar13 * iVar21 + *(int *)(param_2 + 2);
            uStack_58 = CONCAT44((-(uint)(cVar8 == '\0') | (uint)(cVar8 == '\x01')) * iVar21 +
                                 *(int *)((long)param_2 + 0xc),
                                 uVar24 * iVar21 + *(int *)(param_2 + 1));
            (**(code **)(*plStack_40 + 0x60))(plStack_40,&uStack_58,lVar17,2);
            iVar21 = iVar21 + 1;
            uVar24 = uStack_4c;
          } while (iVar21 != iVar10);
        }
      }
      cVar8 = *(char *)(param_1 + 0x2d0);
      uVar13 = (uint)(cVar8 == '\x05');
      if (cVar8 == '\x04') {
        uVar13 = 0xffffffff;
      }
      uVar13 = uVar13 * uVar24 + *(int *)(param_2 + 1);
      uVar32 = (uint)(cVar8 == '\x03');
      if (cVar8 == '\x02') {
        uVar32 = 0xffffffff;
      }
      uVar16 = (ulong)(uVar32 * uVar24 + *(int *)(param_2 + 2));
      uVar19 = (ulong)(uVar13 & 0xff);
      uVar20 = CONCAT44((-(uint)(cVar8 == '\0') | (uint)(cVar8 == '\x01')) * uVar24 +
                        *(int *)((long)param_2 + 0xc),uVar13) & 0xffffffffffffff00;
      uVar18 = 0x100000000;
      goto LAB_0d3f0c16;
    }
  }
  else {
    uVar11 = (**(code **)(*plStack_40 + 0x28))(plStack_40,&uStack_58);
    func_0x0d3d5770(uVar11);
    lVar2 = *(long *)(param_1 + 0x2e0);
    for (lVar17 = *(long *)(param_1 + 0x2d8); lVar17 != lVar2; lVar17 = lVar17 + 0xa8) {
      cVar8 = func_0x0c6e95e0(lVar17);
      if (cVar8 != '\0') goto LAB_0d3f0680;
    }
  }
  uVar16 = 0;
  uVar19 = 0;
  uVar18 = 0;
  uVar20 = 0;
LAB_0d3f0c16:
  auVar42._8_8_ = uVar16 | uVar18;
  auVar42._0_8_ = uVar19 | uVar20;
  return auVar42;
}


```

## `d3f38d0` — OreFeature::vslot2

- instructions: 1386
- calls: 412a280, 412c2d0, 417d010, 4882e20, 4882eb0, 4abe980, c6e95e0, ca92a80, cc41880, d3dfbc0, d44d560, d44d570, ee386e0, eec74c0, eedc720, eeddcf0, eee2d70, eee2dd0, eee2f00, eee4390

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] OreFeature_v2(long param_1,undefined8 *param_2)

{
  long *plVar1;
  float *pfVar2;
  byte bVar3;
  short sVar4;
  ulong *puVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 *puVar9;
  char cVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  long *plVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 auVar19 [8];
  long *plVar20;
  short sVar21;
  ulong uVar22;
  float *pfVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  long *plVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long *in_FS_OFFSET;
  bool bVar31;
  float fVar32;
  float fVar33;
  undefined8 uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  float fVar38;
  undefined1 auVar39 [16];
  float fVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar43;
  undefined1 auVar44 [16];
  float fVar45;
  float fVar46;
  float fVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined1 auVar50 [16];
  float fStack_320;
  float fStack_31c;
  uint uStack_318;
  float fStack_310;
  float fStack_30c;
  long *plStack_308;
  undefined8 uStack_300;
  uint uStack_2f8;
  int iStack_2f0;
  int iStack_2ec;
  ulong uStack_2e8;
  float fStack_2dc;
  undefined1 auStack_2d8 [16];
  int iStack_2bc;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 auStack_2a8 [8];
  float fStack_2a0;
  float fStack_29c;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  undefined1 auStack_268 [8];
  float fStack_260;
  float fStack_25c;
  ulong uStack_258;
  long lStack_250;
  uint uStack_248;
  float fStack_244;
  ulong uStack_240;
  undefined8 *puStack_238;
  long lStack_230;
  ulong uStack_228;
  ulong uStack_220;
  undefined1 auStack_218 [16];
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  float fStack_1f0;
  uint uStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  undefined1 auStack_1d8 [16];
  undefined1 auStack_1c8 [16];
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  long *plStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined1 uStack_f4;
  undefined8 uStack_f0;
  undefined2 uStack_e8;
  long lStack_e0;
  int iStack_d8;
  long lStack_d0;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  
  fVar32 = (float)(**(code **)(*(long *)param_2[3] + 0x30))();
  fVar32 = fVar32 * _DAT_01198b3c * _DAT_01198bd8;
  fVar33 = *(float *)(param_1 + 0x10) * _DAT_01198a50;
  fVar37 = *(float *)((ulong)((int)fVar32 & 0xffff) * 4 + 0xf778a04) * fVar33;
  _auStack_268 = ZEXT416((uint)fVar37);
  fVar33 = fVar33 * *(float *)((ulong)((int)(fVar32 + _DAT_01198b38) & 0xffff) * 4 + 0xf778a04);
  fStack_310 = fVar33 + _DAT_01198494 + (float)*(int *)(param_2 + 2);
  _auStack_2a8 = ZEXT416((uint)(_DAT_01198494 - fVar37));
  auStack_2d8._0_4_ = _DAT_01198494 - fVar33;
  uStack_288._0_4_ = (float)(int)param_2[1];
  uStack_288._4_4_ = (float)(int)((ulong)param_2[1] >> 0x20);
  uStack_280 = 0;
  iVar12 = (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],3);
  fVar32 = (float)auStack_268._4_4_ + _UNK_014ea7a8;
  auStack_268._4_4_ = (float)iVar12 + _UNK_014ea7a4 + uStack_288._4_4_;
  auStack_268._0_4_ = (float)auStack_268._0_4_ + _DAT_014ea7a0 + (float)uStack_288;
  fStack_260 = fVar32 + (float)uStack_280;
  fStack_25c = _UNK_014ea7ac + 0.0 + uStack_280._4_4_;
  uStack_2b8._0_4_ = (float)(int)param_2[1];
  uStack_2b8._4_4_ = (float)(int)((ulong)param_2[1] >> 0x20);
  uStack_2b0 = 0;
  uStack_288._0_4_ = (float)*(int *)(param_2 + 2) + (float)auStack_2d8._0_4_;
  iVar12 = (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],3);
  fVar33 = ((float)auStack_2a8._0_4_ + (float)uStack_2b8) - (float)auStack_268._0_4_;
  fVar37 = ((float)iVar12 + _DAT_01198458 + uStack_2b8._4_4_) - (float)auStack_268._4_4_;
  fVar45 = ((float)auStack_2a8._4_4_ + (float)uStack_2b0) - fStack_260;
  fVar46 = (uStack_2b0._4_4_ + 0.0) - fStack_25c;
  fVar47 = (float)uStack_288 - fStack_310;
  auVar50._0_4_ = SQRT(fVar47 * fVar47 + fVar33 * fVar33 + fVar37 * fVar37);
  fVar32 = (float)(~-(uint)(auVar50._0_4_ < _DAT_01198bc8) & (uint)(fVar47 / auVar50._0_4_));
  auStack_1c8 = ZEXT416((uint)fVar32);
  auStack_218 = ZEXT816(0);
  auStack_1d8 = ZEXT816(0);
  if (_DAT_01198bc8 <= auVar50._0_4_) {
    auVar50._4_4_ = auVar50._0_4_;
    auVar50._8_4_ = auVar50._0_4_;
    auVar50._12_4_ = auVar50._0_4_;
    auVar44._4_4_ = fVar37;
    auVar44._0_4_ = fVar33;
    auVar44._8_4_ = fVar45;
    auVar44._12_4_ = fVar46;
    auStack_1d8 = divps(auVar44,auVar50);
  }
  fVar38 = auStack_1d8._0_4_;
  auVar39._0_4_ = SQRT(fVar38 * fVar38 + fVar32 * fVar32);
  if (_DAT_01198bc8 <= auVar39._0_4_) {
    auVar35._4_4_ = fVar32;
    auVar35._0_4_ = fVar38;
    auVar35._8_4_ = auStack_1d8._8_4_;
    auVar35._12_4_ = auStack_1d8._12_4_;
    auVar39._4_4_ = auVar39._0_4_;
    auVar39._8_4_ = auVar39._0_4_;
    auVar39._12_4_ = auVar39._0_4_;
    auStack_218 = divps(auVar35,auVar39);
  }
  if (*(long *)(param_1 + 0x20) == *(long *)(param_1 + 0x28)) {
    uStack_1f8 = 0x1500000119c615;
    uStack_200 = 0x170000014dc13d;
    func_0x0d3dfbc0(param_2 + 5,&uStack_1f8,&uStack_200);
    if ((uStack_200 >> 0x37 & 1) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_200 & 0xff00ffffffffffff) - 8);
    }
    if ((uStack_1f8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1f8 & 0xff00ffffffffffff) - 8);
    }
  }
  else {
    uStack_288 = CONCAT44(uStack_288._4_4_,fVar47);
    auStack_2a8._4_4_ = fVar37;
    auStack_2a8._0_4_ = fVar33;
    fStack_2a0 = fVar45;
    fStack_29c = fVar46;
    uStack_2b8 = CONCAT44(uStack_2b8._4_4_,*(undefined4 *)(param_1 + 0x14));
    auStack_b8._0_8_ = param_1;
    if (*(int *)(param_1 + 0x38) != -1) {
      uStack_170 = (undefined8 *)auStack_b8;
      func_0x0eedc720(param_1 + 0x38,&UNK_0d4c9d60,&uStack_170);
    }
    lVar14 = *in_FS_OFFSET;
    puStack_238 = param_2;
    if (*(char *)(lVar14 + -0xa78) == '\0') {
      func_0x0417d010(&UNK_0d3f8d30,lVar14 + -0xab0,0xf53dab8);
      *(undefined1 *)(lVar14 + -0xa78) = 1;
    }
    plVar27 = (long *)(lVar14 + -0xab0);
    uVar24 = *(uint *)(param_1 + 0xc);
    uVar17 = (ulong)uVar24;
    uVar18 = (ulong)(int)uVar24;
    lVar28 = *(long *)(lVar14 + -0xaa8);
    lVar30 = *(long *)(lVar14 + -0xab0);
    lVar29 = lVar28 - lVar30;
    bVar31 = (ulong)((lVar29 >> 2) * -0x3333333333333333) <= uVar18;
    uVar26 = uVar18 + (lVar29 >> 2) * 0x3333333333333333;
    plStack_308 = plVar27;
    lStack_250 = param_1;
    if (bVar31 && uVar26 != 0) {
      if (uVar26 <= (ulong)((*(long *)(lVar14 + -0xaa0) - lVar28 >> 2) * -0x3333333333333333)) {
        uVar18 = (uVar26 * 0x14 - 0x14) / 0x14;
        func_0x0eee2dd0(lVar28,0,uVar18 * 0x14 + 0x14);
        *(ulong *)(lVar14 + -0xaa8) = uVar18 * 0x14 + 0x14 + lVar28;
LAB_0d3f3dff:
        uVar17 = (ulong)*(uint *)(lStack_250 + 0xc);
        uVar18 = (ulong)(int)*(uint *)(lStack_250 + 0xc);
        goto LAB_0d3f3e14;
      }
      if (-1 < (int)uVar24) {
        uVar22 = *(long *)(lVar14 + -0xaa0) - lVar30;
        lVar14 = (long)uVar22 >> 2;
        uVar17 = lVar14 * -0x6666666666666666;
        if (uVar18 < uVar17) {
          uVar18 = uVar17;
        }
        if (0x666666666666665 < (ulong)(lVar14 * -0x3333333333333333)) {
          uVar18 = 0xccccccccccccccc;
        }
        if (uVar18 < 0xccccccccccccccd) {
          auStack_2d8._0_8_ = lVar30;
          uStack_2e8 = uVar22;
          lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar18 * 0x14);
          if (lVar14 == 0) {
            func_0x0eec74c0(uVar18 * 0x14,0);
          }
          uVar17 = (uVar26 * 0x14 - 0x14) / 0x14;
          func_0x0eee2dd0(lVar14 + lVar29,0,uVar17 * 0x14 + 0x14);
          uVar34 = auStack_2d8._0_8_;
          func_0x0eee2f00(lVar14,auStack_2d8._0_8_,lVar29);
          plVar27 = plStack_308;
          *plStack_308 = lVar14;
          plStack_308[1] = uVar17 * 0x14 + 0x14 + lVar14 + lVar29;
          plStack_308[2] = uVar18 * 0x14 + lVar14;
          if (uVar34 != 0) {
            func_0x0412a280(uVar34);
          }
          goto LAB_0d3f3dff;
        }
LAB_0d3f527f:
        func_0x04882eb0();
      }
      func_0x0d44d560();
LAB_0d3f5289:
      uVar34 = func_0x0d44d570();
      uVar34 = func_0x04882e20(uVar34);
      uVar34 = func_0x04882e20(uVar34);
      uVar34 = func_0x04882e20(uVar34);
      uVar34 = func_0x04882e20(uVar34);
      func_0x0ee386e0(&uStack_200);
      func_0x0ee386e0(&uStack_1f8);
      uVar34 = func_0x0eee2d70(uVar34);
      uVar34 = func_0x04882e20(uVar34);
      if ((uStack_160 & 1) == 0) {
        func_0x0eee2d70(uVar34);
      }
      func_0x0412a280(uStack_150,uStack_160 & 0xfffffffffffffffe);
      uVar34 = func_0x0eee2d70(uVar34);
      func_0x04abe980(&uStack_170);
      func_0x0eee2d70(uVar34);
      pcVar6 = (code *)swi(3);
      auVar50 = (*pcVar6)();
      return auVar50;
    }
    if (!bVar31) {
      *(ulong *)(lVar14 + -0xaa8) = lVar30 + uVar18 * 0x14;
    }
LAB_0d3f3e14:
    lVar14 = plVar27[3];
    lVar28 = plVar27[4];
    lVar30 = lVar28 - lVar14;
    uVar22 = lVar30 >> 3;
    uVar26 = uVar18 - uVar22;
    if (uVar18 < uVar22 || uVar26 == 0) {
      if (uVar18 < uVar22) {
        plStack_308[4] = lVar14 + uVar18 * 8;
      }
    }
    else {
      if ((ulong)(plVar27[5] - lVar28 >> 3) < uVar26) {
        if (uVar18 >> 0x3d != 0) goto LAB_0d3f5289;
        auStack_2d8._0_8_ = lVar14;
        uStack_2e8 = plVar27[5] - lVar14;
        uVar17 = (long)uStack_2e8 >> 2;
        if ((ulong)((long)uStack_2e8 >> 2) <= uVar18) {
          uVar17 = uVar18;
        }
        if (0x7ffffffffffffff7 < uStack_2e8) {
          uVar17 = 0x1fffffffffffffff;
        }
        if (0x1fffffffffffffff < uVar17) goto LAB_0d3f527f;
        lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar17 * 8);
        if (lVar14 == 0) {
          func_0x0eec74c0(uVar17 * 8,0);
        }
        lVar28 = lVar14 + lVar30;
        func_0x0eee2dd0(lVar28,0,uVar26 * 8);
        lVar29 = lVar28 + uVar22 * -8;
        uVar34 = auStack_2d8._0_8_;
        func_0x0eee2f00(lVar29,auStack_2d8._0_8_,lVar30);
        plStack_308[3] = lVar29;
        plStack_308[4] = uVar26 * 8 + lVar28;
        plStack_308[5] = uVar17 * 8 + lVar14;
        if (uVar34 != 0) {
          func_0x0412a280(uVar34);
        }
      }
      else {
        func_0x0eee2dd0(lVar28,0,uVar26 * 8);
        plVar27[4] = uVar26 * 8 + lVar28;
      }
      uVar17 = (ulong)*(uint *)(lStack_250 + 0xc);
    }
    puVar9 = puStack_238;
    lVar14 = lStack_250;
    if ((int)uVar17 != 0) {
      lVar28 = 0x10;
      uVar18 = 0;
      uStack_2b8 = CONCAT44(uStack_2b8._4_4_,(float)uStack_2b8 * _DAT_01198b3c);
      uStack_2e8 = uVar17;
      do {
        fVar33 = (float)(int)uVar18;
        auStack_2d8 = ZEXT416((uint)fVar33);
        lVar30 = *plStack_308;
        fVar32 = *(float *)(lVar14 + 0x14);
        *(ulong *)(lVar30 + -0x10 + lVar28) =
             CONCAT44(fVar32 * fVar33 * (float)auStack_2a8._4_4_ + (float)auStack_268._4_4_,
                      fVar32 * fVar33 * (float)auStack_2a8._0_4_ + (float)auStack_268._0_4_);
        *(float *)(lVar30 + -8 + lVar28) = (float)uStack_288 * fVar33 * fVar32 + fStack_310;
        fVar32 = (float)(**(code **)(*(long *)puVar9[3] + 0x30))();
        fVar32 = ((*(float *)((ulong)((int)((float)auStack_2d8._0_4_ * (float)uStack_2b8 *
                                           _DAT_01198bd8) & 0xffff) * 4 + 0xf778a04) + _DAT_011983f0
                  ) * fVar32 * *(float *)(lVar14 + 0x10) * _DAT_01198a08 + _DAT_011983f0) *
                 _DAT_011986e0;
        fVar32 = fVar32 * fVar32;
        *(float *)(lVar30 + -4 + lVar28) = fVar32;
        *(float *)(lVar30 + lVar28) = SQRT(fVar32);
        uVar18 = uVar18 + 1;
        lVar28 = lVar28 + 0x14;
      } while (uStack_2e8 != uVar18);
    }
    *(undefined4 *)(plStack_308 + 6) = 0;
    uVar8 = _UNK_014eb208;
    uVar34 = _DAT_014eb200;
    fStack_2dc = _DAT_011983d0;
    uVar18 = 0x7fffffff;
    if (plStack_308[1] - *plStack_308 == 0) {
      uStack_288 = (ulong)(uint)uStack_288._4_4_ << 0x20;
LAB_0d3f4418:
      uStack_290 = uVar8;
      uStack_298 = uVar34;
      fStack_30c = -0.0;
      uStack_278 = 0x80000000;
      iStack_2ec = -0x80000000;
      uVar24 = 0x7fffffff;
      fStack_244 = NAN;
    }
    else {
      uVar26 = (plStack_308[1] - *plStack_308 >> 2) * -0x3333333333333333;
      lVar14 = plStack_308[3];
      uVar22 = 0;
      uStack_288 = (ulong)(uint)uStack_288._4_4_ << 0x20;
      lVar28 = 0x24;
      uVar24 = 0;
      uVar17 = uVar26;
      do {
        uVar17 = uVar17 - 1;
        pfVar2 = (float *)(*plStack_308 + uVar22 * 0x14);
        uVar22 = uVar22 + 1;
        if (uVar22 < uVar26) {
          pfVar23 = (float *)(*plStack_308 + lVar28);
          uVar25 = uVar17;
          do {
            if ((pfVar2[4] <= *pfVar23) &&
               (SQRT((pfVar23[-2] - pfVar2[2]) * (pfVar23[-2] - pfVar2[2]) +
                     (pfVar23[-4] - *pfVar2) * (pfVar23[-4] - *pfVar2) +
                     (pfVar23[-3] - pfVar2[1]) * (pfVar23[-3] - pfVar2[1])) + pfVar2[4] < *pfVar23))
            goto LAB_0d3f4157;
            pfVar23 = pfVar23 + 5;
            uVar25 = uVar25 - 1;
          } while (uVar25 != 0);
        }
        uVar25 = (ulong)uVar24;
        uVar24 = uVar24 + 1;
        *(uint *)(plStack_308 + 6) = uVar24;
        *(float **)(lVar14 + uVar25 * 8) = pfVar2;
        fVar32 = pfVar2[3];
        if (pfVar2[3] <= (float)uStack_288) {
          fVar32 = (float)uStack_288;
        }
        uStack_288 = CONCAT44(uStack_288._4_4_,fVar32);
LAB_0d3f4157:
        lVar28 = lVar28 + 0x14;
      } while (uVar22 != uVar26 + (uVar26 == 0));
      if (uVar24 == 0) goto LAB_0d3f4418;
      uStack_228 = (ulong)uVar24;
      uVar24 = 0x7fffffff;
      fStack_30c = -0.0;
      uVar18 = 0;
      uStack_278 = 0x80000000;
      iStack_2ec = -0x80000000;
      fVar32 = _DAT_014e1ff0;
      fStack_244 = _UNK_014e1ff4;
      fVar33 = _UNK_014e1ff8;
      fVar37 = _UNK_014e1ffc;
      do {
        uStack_2e8 = CONCAT44(uStack_2e8._4_4_,iStack_2ec);
        uStack_2b8 = CONCAT44(uStack_2b8._4_4_,(int)uStack_278);
        puVar5 = *(ulong **)(lVar14 + uVar18 * 8);
        fStack_1ac = *(float *)(puVar5 + 2);
        auStack_2d8 = ZEXT416((uint)fStack_1ac);
        uStack_270 = CONCAT44(uStack_270._4_4_,*(float *)(puVar5 + 1));
        fStack_1e8 = *(float *)(puVar5 + 1) - fStack_1ac;
        auStack_2a8 = (undefined1  [8])*puVar5;
        _fStack_2a0 = 0;
        fStack_1b8 = SUB84(auStack_2a8,0) - fStack_1ac;
        fStack_1b4 = (float)((ulong)auStack_2a8 >> 0x20) - fStack_1ac;
        fStack_1b0 = 0.0 - fStack_1ac;
        fStack_1ac = 0.0 - fStack_1ac;
        fStack_1a8 = fVar32;
        fStack_1a4 = fStack_244;
        fStack_1a0 = fVar33;
        fStack_19c = fVar37;
        fStack_198 = fStack_30c;
        uStack_298 = func_0x0eee4390();
        uVar34 = func_0x0eee4390();
        iVar12 = (int)uStack_298._4_4_;
        uStack_298 = CONCAT44((int)(float)uVar34,(int)(float)uStack_298);
        uStack_290 = CONCAT44((int)(float)((ulong)uVar34 >> 0x20),iVar12);
        fVar45 = (float)func_0x0eee4390();
        fVar32 = auStack_2d8._0_4_;
        auVar36._4_12_ = auStack_2d8._4_12_;
        auVar36._0_4_ = fVar32 + (float)auStack_2a8._0_4_;
        auVar41._4_4_ = auStack_2a8._4_4_;
        auVar41._0_4_ = auStack_2a8._4_4_;
        auVar41._8_4_ = auStack_2a8._4_4_;
        auVar41._12_4_ = auStack_2a8._4_4_;
        auVar42._4_12_ = auVar41._4_12_;
        auVar42._0_4_ = (float)auStack_2a8._4_4_ + fVar32;
        auStack_2d8._0_4_ = fVar32 + (float)uStack_270;
        auStack_2d8._4_12_ = auVar36._4_12_;
        _auStack_2a8 = auVar42;
        fVar32 = (float)func_0x0eee4390(auVar36._0_8_);
        fVar46 = (float)func_0x0eee4390();
        fVar47 = (float)func_0x0eee4390();
        fStack_30c = (float)(int)fVar32;
        if ((int)fVar32 < (int)fStack_198) {
          fStack_30c = fStack_198;
        }
        fVar32 = (float)(~-(uint)((int)(float)uStack_298 < (int)fStack_1a8) & (uint)fStack_1a8 |
                        (uint)(float)uStack_298 & -(uint)((int)(float)uStack_298 < (int)fStack_1a8))
        ;
        fStack_244 = (float)(~-(uint)((int)uStack_298._4_4_ < (int)fStack_1a4) & (uint)fStack_1a4 |
                            (uint)uStack_298._4_4_ &
                            -(uint)((int)uStack_298._4_4_ < (int)fStack_1a4));
        fVar33 = (float)(~-(uint)((int)(uint)uStack_290 < (int)fStack_1a0) & (uint)fStack_1a0 |
                        (uint)uStack_290 & -(uint)((int)(uint)uStack_290 < (int)fStack_1a0));
        fVar37 = (float)(~-(uint)((int)uStack_290._4_4_ < (int)fStack_19c) & (uint)fStack_19c |
                        uStack_290._4_4_ & -(uint)((int)uStack_290._4_4_ < (int)fStack_19c));
        iStack_2ec = (int)fVar46;
        if ((int)fVar46 < (int)(float)uStack_2e8) {
          iStack_2ec = (int)(float)uStack_2e8;
        }
        if ((int)fVar45 < (int)uVar24) {
          uVar24 = (int)fVar45;
        }
        uVar13 = (int)fVar47;
        if ((int)fVar47 < (int)(float)uStack_2b8) {
          uVar13 = (uint)(float)uStack_2b8;
        }
        uStack_278 = (ulong)uVar13;
        uVar18 = uVar18 + 1;
      } while (uStack_228 != uVar18);
      uStack_298 = CONCAT44((float)(int)fStack_244 + _UNK_014e9bd4,
                            (float)(int)fVar32 + _DAT_014e9bd0);
      uStack_290 = CONCAT44((float)(int)fVar37 + _UNK_014e9bdc,(float)(int)fVar33 + _UNK_014e9bd8);
      fStack_2dc = (float)(int)uVar24 + _DAT_011986e0;
      uVar18 = (ulong)(uint)fVar32;
    }
    plVar27 = (long *)*puStack_238;
    fStack_31c = 0.0;
    uStack_318 = 0;
    cVar10 = (**(code **)(*plVar27 + 0x10))(plVar27);
    auStack_2a8 = (undefined1  [8])uVar18;
    iStack_2f0 = (int)uVar18 >> 4;
    iStack_2bc = (int)uVar24 >> 4;
    uVar13 = (int)fStack_30c >> 4;
    uStack_240 = (ulong)uVar13;
    auStack_48 = (undefined1  [16])0x0;
    auStack_58 = (undefined1  [16])0x0;
    auStack_68 = (undefined1  [16])0x0;
    auStack_78 = (undefined1  [16])0x0;
    auStack_88 = (undefined1  [16])0x0;
    auStack_98 = (undefined1  [16])0x0;
    auStack_a8 = (undefined1  [16])0x0;
    auStack_b8 = (undefined1  [16])0x0;
    uStack_270 = 0;
    uStack_228 = CONCAT71(uStack_228._1_7_,cVar10);
    uStack_248 = uVar24;
    if ((cVar10 != '\0') && (iVar12 = (int)uStack_278 >> 4, iStack_2bc <= iVar12)) {
      if ((int)uVar13 < iStack_2f0) {
        uStack_270 = 0;
      }
      else {
        if (iVar12 < iStack_2bc) {
          iVar12 = iStack_2bc;
        }
        auStack_2d8._0_4_ = iVar12;
        uStack_270 = 0;
        lVar14 = 0;
        iVar12 = iStack_2bc;
        do {
          lVar14 = (long)(int)lVar14;
          iVar16 = iStack_2f0;
          do {
            uStack_170 = (undefined8 *)CONCAT44(iVar12,iVar16);
            lVar28 = (**(code **)(*plVar27 + 0x18))(plVar27);
            *(long *)(auStack_b8 + lVar14 * 8) = lVar28;
            if (lVar28 != 0) {
              uStack_270 = (ulong)*(ushort *)(*(long *)(lVar28 + 0x30) + 0xa8);
            }
            iVar16 = iVar16 + 1;
            lVar14 = lVar14 + 1;
          } while (uVar13 + 1 != iVar16);
          bVar31 = iVar12 != auStack_2d8._0_4_;
          iVar12 = iVar12 + 1;
        } while (bVar31);
      }
    }
    fStack_320 = auStack_2a8._0_4_;
    if ((int)fStack_320 <= (int)fStack_30c) {
      iVar12 = (int)uStack_278;
      uStack_318 = uStack_248;
      fVar32 = fStack_30c;
      if ((int)uStack_248 <= iVar12) {
        uVar24 = ((int)uStack_240 - iStack_2f0) + 1;
        fStack_1e8 = (float)auStack_218._4_4_;
        fStack_1e4 = (float)auStack_218._4_4_;
        fStack_1e0 = (float)auStack_218._4_4_;
        fStack_1dc = (float)auStack_218._4_4_;
        if ((int)fStack_244 <= iStack_2ec) {
          fStack_198 = (float)auStack_1d8._4_4_;
          fStack_194 = (float)auStack_1d8._4_4_;
          fStack_190 = (float)auStack_1d8._4_4_;
          fStack_18c = (float)auStack_1d8._4_4_;
          fStack_c8 = uStack_298._4_4_;
          fStack_c4 = uStack_298._4_4_;
          fStack_c0 = uStack_298._4_4_;
          fStack_bc = uStack_298._4_4_;
          fStack_1a8 = (float)auStack_268._4_4_;
          fStack_1a4 = (float)auStack_268._4_4_;
          fStack_1a0 = (float)auStack_268._4_4_;
          fStack_19c = (float)auStack_268._4_4_;
          uStack_258 = 0;
          lStack_230 = 0;
          plVar15 = plStack_308;
          lVar14 = lStack_250;
          fVar32 = (float)auStack_1d8._0_4_;
          fVar33 = (float)uStack_298;
          fVar37 = uStack_298._4_4_;
          uVar48 = (uint)uStack_290;
          uVar49 = uStack_290._4_4_;
          cVar10 = (char)uStack_228;
          iVar12 = iStack_2ec;
          fVar45 = (float)auStack_268._0_4_;
          uStack_240 = (ulong)uVar24;
          plStack_180 = plVar27;
          do {
            fStack_1f0 = (fVar33 - fVar45) * (float)auStack_218._0_4_;
            uStack_2e8 = CONCAT44(uStack_2e8._4_4_,(fVar33 - fVar45) * fVar32);
            uStack_298 = CONCAT44(fVar37,fVar33);
            uStack_290 = CONCAT44(uVar49,uVar48);
            fVar46 = fStack_2dc;
            uVar24 = uStack_248;
            do {
              fVar38 = fVar46 - fStack_310;
              uStack_2b8 = CONCAT44(uStack_2b8._4_4_,fVar38);
              fVar47 = fStack_1e8 * fVar38 + fStack_1f0;
              fVar40 = fVar33 - (fVar47 * (float)auStack_218._0_4_ + fVar45);
              auStack_2a8._0_4_ = fVar46;
              fVar46 = fVar46 - (fVar47 * fStack_1e8 + fStack_310);
              uStack_318 = uVar24;
              if (fVar40 * fVar40 + fVar46 * fVar46 <= (float)uStack_288) {
                if (cVar10 != '\0') {
                  lStack_230 = *(long *)(auStack_b8 +
                                        (long)((((int)fStack_320 >> 4) - iStack_2f0) +
                                              (((int)uVar24 >> 4) - iStack_2bc) * (int)uStack_240) *
                                        8);
                  if (lStack_230 == 0) {
                    lStack_230 = 0;
                    goto LAB_0d3f4814;
                  }
                }
                uStack_2b8 = CONCAT44(uStack_2b8._4_4_,fVar38 * (float)auStack_1c8._0_4_);
                fVar47 = fStack_c8;
                fVar46 = fStack_244;
                do {
                  fVar38 = (fVar47 - fStack_1a8) * fStack_198 + (float)uStack_2e8 +
                           (float)uStack_2b8;
                  fVar43 = fVar33 - (fVar38 * fVar32 + fVar45);
                  auStack_2d8._0_4_ = fVar47;
                  fVar40 = fVar47 - (fVar38 * fStack_198 + fStack_1a8);
                  fVar38 = (float)auStack_2a8._0_4_ -
                           (fVar38 * (float)auStack_1c8._0_4_ + fStack_310);
                  fStack_31c = fVar46;
                  if ((fVar38 * fVar38 + fVar43 * fVar43 + fVar40 * fVar40 <= (float)uStack_288) &&
                     ((ulong)*(uint *)(plVar15 + 6) != 0)) {
                    uVar18 = 0;
                    do {
                      pfVar2 = *(float **)(plVar15[3] + uVar18 * 8);
                      if (((float)auStack_2a8._0_4_ - pfVar2[2]) *
                          ((float)auStack_2a8._0_4_ - pfVar2[2]) +
                          (fVar33 - *pfVar2) * (fVar33 - *pfVar2) +
                          (fVar47 - pfVar2[1]) * (fVar47 - pfVar2[1]) < pfVar2[3]) {
                        if (cVar10 == '\0') {
                          lStack_178 = 0;
                        }
                        else {
                          uVar24 = (uint)fVar46 >> 4;
                          if (0xffe < (uVar24 + 0x7ff & 0xffff)) break;
                          sVar4 = *(short *)(*(long *)(lStack_230 + 0x30) + 0xa8);
                          sVar21 = (short)(uVar24 << 4);
                          if ((sVar21 < sVar4) ||
                             (*(short *)(*(long *)(lStack_230 + 0x30) + 0xaa) <= sVar21)) break;
                          lVar28 = ((long)(short)uVar24 - (long)(short)((uint)(int)sVar4 >> 4)) *
                                   0x68;
                          if ((short)uVar24 !=
                              (short)*(char *)(*(long *)(lStack_230 + 0x108) + 0x61 + lVar28))
                          break;
                          lStack_178 = *(long *)(lStack_230 + 0x108) + lVar28;
                        }
                        uStack_1ec = (uStack_318 & 0xf) << 4 |
                                     (int)fVar46 - (int)(float)uStack_270 & 0xfU |
                                     ((uint)fStack_320 & 0xf) << 8;
                        if (lStack_178 == 0) {
                          lVar28 = (**(code **)(*plVar27 + 0x28))(plVar27);
                        }
                        else {
                          lVar28 = (**(code **)(**(long **)(lStack_178 + 0x30) + 0x20))();
                        }
                        plVar20 = *(long **)(lVar14 + 0x40);
                        fVar32 = (float)auStack_1d8._0_4_;
                        fVar33 = (float)uStack_298;
                        fVar37 = uStack_298._4_4_;
                        uVar48 = (uint)uStack_290;
                        uVar49 = uStack_290._4_4_;
                        iVar12 = iStack_2ec;
                        fVar45 = (float)auStack_268._0_4_;
                        if (plVar20 != *(long **)(lVar14 + 0x48)) {
                          do {
                            plVar15 = (long *)plVar20[1];
                            if (plVar15 != (long *)plVar20[2]) {
                              lVar30 = *plVar20;
LAB_0d3f4bb0:
                              if (*(long *)(lVar28 + 0x68) != *plVar15) goto code_r0x0d3f4bb5;
                              if (lVar28 != lVar30) {
                                fVar32 = *(float *)(lVar14 + 0x18);
                                if ((0.0 < fVar32) &&
                                   ((_DAT_011983f0 <= fVar32 ||
                                    (fStack_1b8 = fVar32,
                                    fVar32 = (float)(**(code **)(*(long *)puStack_238[3] + 0x30))(),
                                    fVar32 < fStack_1b8)))) {
                                  uStack_148 = 0;
                                  uStack_160 = 0x72696106;
                                  uStack_158 = 0;
                                  uStack_150 = 0;
                                  uStack_168 = 0xd8dcc5186bafa55b;
                                  uStack_170 = &uStack_170;
                                  uStack_140 = func_0x0cc41880(0xf6ff9e0,&uStack_168);
                                  lStack_108 = 0;
                                  uStack_100 = 0;
                                  uStack_118 = 0;
                                  lStack_110 = 0;
                                  lStack_128 = 0;
                                  lStack_120 = 0;
                                  uStack_138 = 0;
                                  plStack_130 = (long *)0x0;
                                  uStack_f8 = 1;
                                  uStack_f4 = 1;
                                  uStack_f0 = 0;
                                  uStack_e8 = 0x100;
                                  lStack_e0 = 0;
                                  iStack_d8 = 0;
                                  LOCK();
                                  lStack_d0 = 0;
                                  UNLOCK();
                                  uStack_300 = CONCAT44((int)fStack_31c - 1,fStack_320);
                                  uStack_2f8 = uStack_318;
                                  (**(code **)(*plVar27 + 0x28))(plVar27,&uStack_300);
                                  cVar10 = func_0x0c6e95e0(&uStack_170);
                                  cVar11 = '\x01';
                                  if (cVar10 == '\0') {
                                    uStack_300 = CONCAT44((int)fStack_31c + 1,fStack_320);
                                    uStack_2f8 = uStack_318;
                                    (**(code **)(*plVar27 + 0x28))(plVar27,&uStack_300);
                                    cVar10 = func_0x0c6e95e0(&uStack_170);
                                    if (cVar10 == '\0') {
                                      uStack_300 = CONCAT44(fStack_31c,fStack_320);
                                      uStack_2f8 = uStack_318 - 1;
                                      (**(code **)(*plVar27 + 0x28))(plVar27,&uStack_300);
                                      cVar10 = func_0x0c6e95e0(&uStack_170);
                                      if (cVar10 == '\0') {
                                        uStack_300 = CONCAT44(fStack_31c,fStack_320);
                                        uStack_2f8 = uStack_318 + 1;
                                        (**(code **)(*plVar27 + 0x28))(plVar27,&uStack_300);
                                        cVar10 = func_0x0c6e95e0(&uStack_170);
                                        if (cVar10 == '\0') {
                                          uStack_300 = CONCAT44(fStack_31c,(int)fStack_320 - 1);
                                          uStack_2f8 = uStack_318;
                                          (**(code **)(*plVar27 + 0x28))(plVar27,&uStack_300);
                                          cVar10 = func_0x0c6e95e0(&uStack_170);
                                          if (cVar10 == '\0') {
                                            uStack_300 = CONCAT44(fStack_31c,(int)fStack_320 + 1);
                                            uStack_2f8 = uStack_318;
                                            (**(code **)(*plVar27 + 0x28))(plVar27,&uStack_300);
                                            cVar11 = func_0x0c6e95e0(&uStack_170);
                                          }
                                        }
                                      }
                                    }
                                  }
                                  if (((lStack_d0 != lStack_e0) || (iStack_d8 != 0)) &&
                                     (cVar10 = func_0x0eeddcf0(&UNK_014756d5,&UNK_01198d5e,0x25,
                                                               &UNK_0126e3df,&UNK_013a8ed3),
                                     cVar10 != '\0')) {
                                    _DAT_00000000 = 0xdeadc0de;
                                  }
                                  if (lStack_110 != 0) {
                                    lStack_108 = lStack_110;
                                    func_0x0412a280();
                                  }
                                  lVar29 = lStack_128;
                                  lVar14 = lStack_120;
                                  if (lStack_128 != 0) {
                                    for (; lVar29 != lVar14; lVar14 = lVar14 + -0x48) {
                                      if ((*(byte *)(lVar14 + -0x20) & 1) == 0) {
                                        bVar3 = *(byte *)(lVar14 + -0x40);
                                      }
                                      else {
                                        func_0x0412a280(*(undefined8 *)(lVar14 + -0x10),
                                                        *(ulong *)(lVar14 + -0x20) &
                                                        0xfffffffffffffffe);
                                        bVar3 = *(byte *)(lVar14 + -0x40);
                                      }
                                      if ((bVar3 & 1) != 0) {
                                        func_0x0412a280(*(undefined8 *)(lVar14 + -0x30),
                                                        *(ulong *)(lVar14 + -0x40) &
                                                        0xfffffffffffffffe);
                                      }
                                    }
                                    lStack_120 = lVar29;
                                    func_0x0412a280();
                                    plVar27 = plStack_180;
                                  }
                                  plVar15 = plStack_130;
                                  if (plStack_130 != (long *)0x0) {
                                    LOCK();
                                    plVar1 = plStack_130 + 1;
                                    lVar14 = *plVar1;
                                    *plVar1 = *plVar1 + -1;
                                    UNLOCK();
                                    if (lVar14 == 0) {
                                      (**(code **)(*plStack_130 + 0x10))(plStack_130);
                                      func_0x0412c2d0(plVar15);
                                    }
                                  }
                                  if ((uStack_160 & 1) != 0) {
                                    func_0x0412a280(uStack_150);
                                  }
                                  lVar14 = lStack_250;
                                  fVar32 = (float)auStack_1d8._0_4_;
                                  fVar33 = (float)uStack_298;
                                  fVar37 = uStack_298._4_4_;
                                  uVar48 = (uint)uStack_290;
                                  uVar49 = uStack_290._4_4_;
                                  cVar10 = (char)uStack_228;
                                  fVar45 = (float)auStack_268._0_4_;
                                  if (cVar11 != '\0') goto LAB_0d3f4b80;
                                }
                                if (cVar10 == '\0') {
                                  cVar11 = (**(code **)(*plVar27 + 0x68))
                                                     (plVar27,&fStack_320,lVar30);
                                  fVar32 = (float)auStack_1d8._0_4_;
                                  fVar33 = (float)uStack_298;
                                  fVar37 = uStack_298._4_4_;
                                  uVar48 = (uint)uStack_290;
                                  uVar49 = uStack_290._4_4_;
                                  fVar45 = (float)auStack_268._0_4_;
                                  if (cVar11 == '\0') goto LAB_0d3f4b80;
                                  uStack_258 = (ulong)((int)uStack_258 + 1);
                                  plVar15 = plStack_308;
                                  iVar12 = iStack_2ec;
                                }
                                else {
                                  func_0x0ca92a80(lStack_178,0,(undefined2)uStack_1ec,lVar30);
                                  uStack_258 = (ulong)((int)uStack_258 + 1);
                                  plVar15 = plStack_308;
                                  fVar32 = (float)auStack_1d8._0_4_;
                                  fVar33 = (float)uStack_298;
                                  fVar37 = uStack_298._4_4_;
                                  uVar48 = (uint)uStack_290;
                                  uVar49 = uStack_290._4_4_;
                                  iVar12 = iStack_2ec;
                                  fVar45 = (float)auStack_268._0_4_;
                                }
                                break;
                              }
                            }
LAB_0d3f4b80:
                            plVar20 = plVar20 + 4;
                            plVar15 = plStack_308;
                            iVar12 = iStack_2ec;
                          } while (plVar20 != *(long **)(lVar14 + 0x48));
                        }
                        break;
                      }
                      uVar18 = uVar18 + 1;
                    } while (*(uint *)(plVar15 + 6) != uVar18);
                  }
                  fVar46 = (float)((int)fStack_31c + 1);
                  fVar47 = (float)auStack_2d8._0_4_ + _DAT_011983f0;
                  bVar31 = (int)fStack_31c < iVar12;
                  fStack_31c = fVar46;
                } while (bVar31);
              }
LAB_0d3f4814:
              uVar24 = uStack_318 + 1;
              fVar46 = (float)auStack_2a8._0_4_ + _DAT_011983f0;
            } while ((int)uStack_318 < (int)uStack_278);
            fVar46 = (float)((int)fStack_320 + 1);
            fVar33 = fVar33 + _DAT_011983f0;
            bVar31 = (int)fStack_320 < (int)fStack_30c;
            fStack_320 = fVar46;
          } while (bVar31);
          uStack_318 = uVar24;
          if ((int)uStack_258 != 0) {
            uVar18 = 0x100000000;
            goto LAB_0d3f5227;
          }
          goto LAB_0d3f515a;
        }
        if ((int)fStack_30c <= (int)fStack_320) {
          fVar32 = fStack_320;
        }
        if ((char)uStack_228 == '\0') {
          auVar19 = auStack_2a8;
          fVar33 = (float)uStack_298;
          do {
            iVar16 = (iVar12 - uStack_248) + 1;
            fVar37 = fStack_2dc;
            do {
              fVar45 = (fVar37 - fStack_310) * (float)auStack_218._4_4_ +
                       (fVar33 - (float)auStack_268._0_4_) * (float)auStack_218._0_4_;
              fVar46 = fVar33 - (fVar45 * (float)auStack_218._0_4_ + (float)auStack_268._0_4_);
              fVar45 = fVar37 - (fVar45 * (float)auStack_218._4_4_ + fStack_310);
              if (fVar46 * fVar46 + fVar45 * fVar45 <= (float)uStack_288) {
                fStack_31c = fStack_244;
              }
              fVar37 = fVar37 + _DAT_011983f0;
              iVar16 = iVar16 + -1;
            } while (iVar16 != 0);
            fVar37 = SUB84(auVar19,0);
            fVar33 = fVar33 + _DAT_011983f0;
            auVar19 = (undefined1  [8])(ulong)((int)fVar37 + 1);
          } while (fVar37 != fVar32);
        }
        else {
          auVar19 = auStack_2a8;
          fVar33 = (float)uStack_298;
          do {
            fVar45 = SUB84(auVar19,0);
            uVar13 = uStack_248;
            fVar37 = fStack_2dc;
            do {
              fVar46 = (fVar37 - fStack_310) * (float)auStack_218._4_4_ +
                       (fVar33 - (float)auStack_268._0_4_) * (float)auStack_218._0_4_;
              fVar47 = fVar33 - (fVar46 * (float)auStack_218._0_4_ + (float)auStack_268._0_4_);
              fVar46 = fVar37 - (fVar46 * (float)auStack_218._4_4_ + fStack_310);
              if ((fVar47 * fVar47 + fVar46 * fVar46 <= (float)uStack_288) &&
                 (*(long *)(auStack_b8 +
                           (long)(int)((((int)uVar13 >> 4) - iStack_2bc) * uVar24 +
                                      (((int)fVar45 >> 4) - iStack_2f0)) * 8) != 0)) {
                fStack_31c = fStack_244;
              }
              uVar13 = uVar13 + 1;
              fVar37 = fVar37 + _DAT_011983f0;
            } while (iVar12 + 1U != uVar13);
            fVar33 = fVar33 + _DAT_011983f0;
            auVar19 = (undefined1  [8])(ulong)((int)fVar45 + 1);
          } while (fVar45 != fVar32);
        }
        uStack_318 = iVar12 + 1;
      }
      fStack_320 = (float)((int)fVar32 + 1);
    }
LAB_0d3f515a:
    uStack_208 = 0x1500000119c615;
    uStack_220 = 0x190000011d3b75;
    func_0x0d3dfbc0(puStack_238 + 5,&uStack_208,&uStack_220);
    if ((uStack_220 >> 0x37 & 1) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_220 & 0xff00ffffffffffff) - 8);
    }
    uStack_220 = 0;
    if ((uStack_208 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_208 & 0xff00ffffffffffff) - 8);
    }
  }
  uVar18 = 0;
LAB_0d3f5227:
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar18;
  return auVar7 << 0x40;
code_r0x0d3f4bb5:
  plVar15 = plVar15 + 1;
  if (plVar15 == (long *)plVar20[2]) goto LAB_0d3f4b80;
  goto LAB_0d3f4bb0;
}


```

## `d3f8d70` — RectLayoutFeature::vslot2

- instructions: 333

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
RectLayoutFeature_v2
          (long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,char *param_5)

{
  long *plVar1;
  float fVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [16];
  undefined1 auVar8 [12];
  bool bVar9;
  short sVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  uint uVar15;
  ulong extraout_RDX;
  long lVar16;
  ulong uVar17;
  char *pcVar18;
  char *pcVar19;
  ulong uVar20;
  int iVar21;
  long lVar22;
  ulong uVar23;
  uint uVar24;
  int iVar25;
  ulong uVar26;
  float fVar27;
  float fVar28;
  int iVar29;
  int iVar30;
  undefined1 auVar31 [16];
  ulong uStack_1e8;
  float fStack_1dc;
  undefined1 *puStack_1a8;
  undefined8 uStack_178;
  int iStack_170;
  int iStack_16c;
  int iStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  int iStack_148;
  int iStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  
  if (*(long *)(param_1 + 0x18) == *(long *)(param_1 + 0x10)) {
    return ZEXT816(0);
  }
  auStack_48 = (undefined1  [16])0x0;
  auStack_58 = (undefined1  [16])0x0;
  auStack_68 = (undefined1  [16])0x0;
  auStack_78 = (undefined1  [16])0x0;
  auStack_88 = (undefined1  [16])0x0;
  auStack_98 = (undefined1  [16])0x0;
  auStack_a8 = (undefined1  [16])0x0;
  auStack_b8 = (undefined1  [16])0x0;
  auStack_c8 = (undefined1  [16])0x0;
  auStack_d8 = (undefined1  [16])0x0;
  auStack_e8 = (undefined1  [16])0x0;
  auStack_f8 = (undefined1  [16])0x0;
  auStack_108 = (undefined1  [16])0x0;
  auStack_118 = (undefined1  [16])0x0;
  auStack_128 = (undefined1  [16])0x0;
  auStack_138 = (undefined1  [16])0x0;
  fStack_1dc = 0.0;
  puStack_1a8 = auStack_138;
  uVar12 = 0;
  bVar9 = false;
LAB_0d3f8e87:
  uStack_1e8 = 0;
LAB_0d3f8edf:
  uVar11 = (**(code **)(*(long *)param_2[3] + 0x10))();
  lVar22 = *(long *)(param_1 + 0x10);
  lVar13 = *(long *)(param_1 + 0x18);
  fVar27 = fStack_1dc * _DAT_01198c44;
  fVar2 = *(float *)(param_1 + 0x28);
  fVar28 = (float)(**(code **)(*(long *)param_2[3] + 0x30))();
  if (fVar27 + fVar2 <= fVar28) {
    uVar17 = (lVar13 - lVar22 >> 3) * -0x3333333333333333;
    if (((long)(int)uVar11 | uVar17) >> 0x20 == 0) {
      uVar11 = (uint)((ulong)uVar11 % (uVar17 & 0xffffffff));
    }
    else {
      uVar11 = (uint)((ulong)(long)(int)uVar11 % uVar17);
    }
    lVar22 = *(long *)(param_1 + 0x10);
    uVar20 = (*(long *)(param_1 + 0x18) - lVar22 >> 3) * -0x3333333333333333;
    uVar17 = (ulong)uVar11;
LAB_0d3f8fee:
    do {
      lVar13 = (long)(int)uVar17;
      uVar14 = *(undefined8 *)(lVar22 + 0x18 + lVar13 * 0x28);
      iVar29 = (int)((float)(int)uVar14 + (float)(int)(uint)uStack_1e8);
      iVar30 = (int)((float)(int)((ulong)uVar14 >> 0x20) + (float)(int)uVar12);
      auVar7._4_4_ = -(uint)(DAT_014e40b0._4_4_ < iVar29);
      auVar7._0_4_ = -(uint)((int)DAT_014e40b0 < iVar29);
      auVar7._8_4_ = -(uint)(DAT_014e40b0._8_4_ < iVar30);
      auVar7._12_4_ = -(uint)(DAT_014e40b0._12_4_ < iVar30);
      iVar21 = movmskpd((int)param_5,auVar7);
      if (iVar21 == 0) {
        uVar15 = *(uint *)(lVar22 + 0x20 + lVar13 * 0x28);
        uVar5 = *(uint *)(lVar22 + 0x24 + lVar13 * 0x28);
        param_5 = (char *)(long)((float)(int)uVar5 + (float)(int)uVar12);
        uVar23 = (ulong)param_5 & 0xffffffff;
        if ((uVar12 < uVar23) &&
           (uVar24 = (uint)(long)((float)(int)uVar15 + (float)(int)(uint)uStack_1e8),
           (uint)uStack_1e8 < uVar24)) {
          iVar25 = uVar24 - (uint)uStack_1e8;
          pcVar19 = puStack_1a8 + uStack_1e8 * 0x10;
          iVar21 = iVar25;
          uVar26 = uVar12;
          pcVar18 = puStack_1a8 + uStack_1e8 * 0x10;
          while (*pcVar19 != '\x01') {
            param_5 = pcVar19 + 0x10;
            iVar21 = iVar21 + -1;
            pcVar19 = param_5;
            if (iVar21 == 0) {
              uVar26 = uVar26 + 1;
              pcVar19 = pcVar18 + 1;
              iVar21 = iVar25;
              pcVar18 = pcVar19;
              if (uVar26 == uVar23) goto LAB_0d3f908e;
            }
          }
          goto LAB_0d3f8fc0;
        }
LAB_0d3f908e:
        uStack_140 = 0;
        plVar1 = (long *)(lVar22 + lVar13 * 0x28);
        lVar22 = *plVar1;
        lVar13 = plVar1[2];
        uVar11 = *(uint *)(param_2 + 1);
        uVar24 = *(uint *)(param_2 + 2);
        bVar4 = *(byte *)(plVar1 + 1);
        iStack_148 = iVar29;
        iStack_144 = iVar30;
        uStack_13c = 0;
        sVar10 = (**(code **)(*(long *)*param_2 + 0xb8))
                           ((long *)*param_2,(int)(float)((int)uVar15 / 2),
                            (int)(float)((int)uVar5 / 2));
        if ((bVar4 & 1) != 0) {
          plVar1 = *(long **)(*(long *)(lVar22 + 0x18) + lVar13 * 8);
          if (plVar1 == (long *)0x0) {
            if (auStack_138[uStack_1e8 * 0x10 + uVar12] != '\0') goto LAB_0d3f8ed0;
            goto LAB_0d3f928c;
          }
          if ((*(char *)(param_1 + 9) == '\0') && ((char)plVar1[1] != '\0')) goto LAB_0d3f8ed0;
          iStack_170 = (int)((float)((int)uVar15 / 2) + (float)(int)(uVar11 & 0xfffffff0));
          iStack_16c = (int)sVar10;
          iStack_168 = (int)((float)((int)uVar5 / 2) + (float)(int)(uVar24 & 0xfffffff0));
          uStack_178 = *param_2;
          uStack_160 = param_2[3];
          uStack_158 = param_2[4];
          uStack_150 = param_2[5];
          (**(code **)(*plVar1 + 0x10))(plVar1,&uStack_178);
          if ((extraout_RDX & 0x100000000) != 0) {
            if (0 < (int)uVar15 && 0 < (int)uVar5) {
              iVar29 = iStack_144 - (uVar5 >> 1);
              iVar21 = iStack_148 - (uVar15 >> 1);
              lVar13 = (long)iVar21;
              lVar16 = (long)iVar29;
              pcVar19 = auStack_138 + lVar13 * 0x10 + lVar16;
              lVar22 = lVar13;
              pcVar18 = pcVar19;
              do {
                do {
                  *pcVar19 = '\x01';
                  lVar22 = lVar22 + 1;
                  param_5 = pcVar19 + 0x10;
                  pcVar19 = param_5;
                } while (lVar22 < (int)(iVar21 + uVar15));
                lVar16 = lVar16 + 1;
                pcVar19 = pcVar18 + 1;
                lVar22 = lVar13;
                pcVar18 = pcVar19;
              } while (lVar16 < (int)(uVar5 + iVar29));
            }
            uStack_1e8 = (ulong)(((uint)uStack_1e8 + uVar15) - 1);
            bVar9 = true;
            goto LAB_0d3f8ed0;
          }
        }
        break;
      }
LAB_0d3f8fc0:
      uVar15 = (int)uVar17 + 1;
      param_5 = (char *)(((long)(int)uVar15 | uVar20) >> 0x20);
      if (param_5 == (char *)0x0) goto LAB_0d3f8fe0;
      auVar6._8_4_ = 0;
      auVar6._0_8_ = uVar20;
      auVar8._8_4_ = 0;
      auVar8._0_8_ = (long)(int)uVar15;
      uVar17 = SUB128(auVar8 % auVar6,0);
    } while (uVar11 != SUB124(auVar8 % auVar6,0));
    goto LAB_0d3f9279;
  }
  cVar3 = auStack_138[uStack_1e8 * 0x10 + uVar12];
  goto joined_r0x0d3f9286;
LAB_0d3f8fe0:
  uVar17 = (ulong)uVar15 % (uVar20 & 0xffffffff);
  if (uVar11 == (uint)uVar17) goto LAB_0d3f9279;
  goto LAB_0d3f8fee;
LAB_0d3f9279:
  cVar3 = auStack_138[uStack_1e8 * 0x10 + uVar12];
joined_r0x0d3f9286:
  if (cVar3 == '\0') {
LAB_0d3f928c:
    fStack_1dc = fStack_1dc + _DAT_011983f0;
  }
LAB_0d3f8ed0:
  uVar11 = (int)uStack_1e8 + 1;
  uStack_1e8 = (ulong)uVar11;
  if (0xf < uVar11) goto LAB_0d3f8e70;
  goto LAB_0d3f8edf;
LAB_0d3f8e70:
  uVar12 = uVar12 + 1;
  puStack_1a8 = puStack_1a8 + 1;
  if (uVar12 == 0x10) {
    if (bVar9) {
      uVar12 = (ulong)*(uint *)(param_2 + 2) | 0x100000000;
      uVar14 = param_2[1];
    }
    else {
      uVar12 = 0;
      uVar14 = 0;
    }
    auVar31._8_8_ = uVar12;
    auVar31._0_8_ = uVar14;
    return auVar31;
  }
  goto LAB_0d3f8e87;
}


```

## `d3fca70` — ScanSurfaceFeature::vslot2

- instructions: 104

```c

undefined1  [16] ScanSurfaceFeature_v2(long param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  short sVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_RBX;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  undefined1 auVar15 [16];
  uint uStack_7c;
  ulong uStack_78;
  undefined8 uStack_60;
  uint uStack_58;
  int iStack_54;
  uint uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  if (*(char *)(param_1 + 0x18) == '\x01') {
    lVar3 = *(long *)(param_1 + 0x10);
    lVar4 = *(long *)(param_1 + 0x20);
    lVar5 = *(long *)(*(long *)(lVar3 + 0x18) + lVar4 * 8);
    if (lVar5 == 0) goto LAB_0d3fcae6;
    uVar1 = *(uint *)(param_2 + 1);
    uVar2 = *(uint *)(param_2 + 2);
    if ((*(char *)(param_1 + 9) == '\0') && (*(char *)(lVar5 + 8) != '\0')) {
      uVar11 = 0;
      uVar10 = 0;
      goto LAB_0d3fcaf4;
    }
    uVar13 = uVar1 & 0xfffffff0;
    if ((uVar13 == 0x7ffffff0) || (uVar8 = uVar2 & 0xfffffff0, uVar8 == 0x7ffffff0))
    goto LAB_0d3fcae6;
    uVar10 = 0;
    uStack_78 = 0;
    uVar12 = uVar8;
    do {
      sVar7 = (**(code **)(*(long *)*param_2 + 0xb8))((long *)*param_2,uVar13,uVar12);
      plVar6 = *(long **)(*(long *)(lVar3 + 0x18) + lVar4 * 8);
      uStack_60 = *param_2;
      iStack_54 = (int)sVar7;
      uStack_48 = *(undefined4 *)(param_2 + 3);
      uStack_44 = *(undefined4 *)((long)param_2 + 0x1c);
      uStack_40 = *(undefined4 *)(param_2 + 4);
      uStack_3c = *(undefined4 *)((long)param_2 + 0x24);
      uStack_38 = param_2[5];
      uStack_58 = uVar13;
      uStack_50 = uVar12;
      auVar15 = (**(code **)(*plVar6 + 0x10))(plVar6,&uStack_60);
      if ((auVar15._8_8_ >> 0x20 & 1) != 0) {
        uVar10 = auVar15._8_8_ >> 0x20;
        unaff_RBX = auVar15._0_8_ >> 8;
        uStack_7c = auVar15._8_4_;
        uStack_78 = auVar15._0_8_;
      }
      uVar12 = uVar12 + 1;
    } while (((uVar2 | 0xf) + 1 != uVar12) ||
            (bVar14 = uVar13 != (uVar1 | 0xf), uVar12 = uVar8, uVar13 = uVar13 + 1, bVar14));
    uVar11 = unaff_RBX << 8;
    uStack_78 = uStack_78 & 0xff;
    uVar10 = (uVar10 & 0xff) << 0x20;
    uVar9 = (ulong)uStack_7c;
  }
  else {
LAB_0d3fcae6:
    uVar11 = 0;
    uStack_78 = 0;
    uVar10 = 0;
    uVar9 = 0;
  }
  uVar10 = uVar10 | uVar9;
  uVar11 = uVar11 | uStack_78;
LAB_0d3fcaf4:
  auVar15._8_8_ = uVar10;
  auVar15._0_8_ = uVar11;
  return auVar15;
}


```

## `d3fd4e0` — ScatterFeature::vslot2

- instructions: 253
- calls: 412c2d0, 58759c0, c91d6d0, c91dab0, c91f400, c91f600, d3dfbc0

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] ScatterFeature_v2(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  short sVar4;
  long lVar5;
  long lVar6;
  int iVar8;
  ulong uVar9;
  ulong unaff_R12;
  ulong uVar10;
  undefined8 *unaff_R15;
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  undefined8 uStack_2b8;
  undefined4 uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  long lStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long lStack_270;
  undefined1 auStack_268 [12];
  int iStack_25c;
  undefined8 uStack_258;
  undefined1 auStack_250 [12];
  undefined8 uStack_240;
  undefined8 *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined4 uStack_220;
  long lStack_200;
  long alStack_168 [4];
  long *plStack_148;
  undefined1 auStack_100 [64];
  uint uStack_c0;
  undefined1 auStack_a8 [64];
  uint uStack_68;
  ulong uVar7;
  
  if (*(char *)(param_1 + 0x18) == '\x01') {
    unaff_R15 = *(undefined8 **)(param_1 + 0x10);
    lVar6 = *(long *)(param_1 + 0x20);
    lVar5 = *(long *)(unaff_R15[3] + lVar6 * 8);
    if (lVar5 == 0) goto LAB_0d3fd5dd;
    if ((*(char *)(param_1 + 9) == '\0') && (*(char *)(lVar5 + 8) == '\x01')) {
      uStack_290 = 0x190000012d6ccc;
      uStack_298 = 0x1d000001219d14;
      func_0x0d3dfbc0(param_2 + 5,&uStack_290,&uStack_298);
      if ((uStack_298 >> 0x37 & 1) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_298 & 0xff00ffffffffffff) - 8);
      }
      if ((uStack_290 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_290 & 0xff00ffffffffffff) - 8);
      }
      uVar9 = 0;
      uVar10 = 0;
      goto LAB_0d3fd90c;
    }
    uStack_2b0 = *(undefined4 *)(param_2 + 2);
    uStack_2b8 = param_2[1];
    lStack_288 = param_1;
    if (*(char *)(param_1 + 0x100) == '\x01') {
      uStack_2b8._4_4_ = (int)(uStack_2b8 >> 0x20);
      iVar8 = uStack_2b8._4_4_;
      sVar4 = (**(code **)(*(long *)*param_2 + 0xa8))();
      uVar3 = uStack_2b0;
      if (sVar4 < iVar8) {
        uVar2 = (undefined4)uStack_2b8;
        unaff_R12 = uStack_2b8 & 0xffffffff;
        do {
          iVar8 = iVar8 + -1;
          uStack_228 = CONCAT44(iVar8,uVar2);
          uStack_220 = uVar3;
          lVar5 = (**(code **)(*(long *)*param_2 + 0x28))((long *)*param_2,&uStack_228);
          if (*(long *)(*(long *)(lVar5 + 0x68) + 200) != _DAT_0f6eaec0) break;
          uStack_2b8 = CONCAT44(iVar8,(undefined4)uStack_2b8);
          sVar4 = (**(code **)(*(long *)*param_2 + 0xa8))();
        } while (sVar4 < iVar8);
      }
    }
    plVar1 = *(long **)(unaff_R15[3] + lVar6 * 8);
    unaff_R15 = &uStack_228;
    func_0x058759c0(unaff_R15,param_2[4]);
    func_0x0c91d6d0(unaff_R15,&uStack_2b8,param_2[3]);
    *(undefined8 *)(param_2[4] + 0xb0) = *param_2;
    func_0x0c91dab0(&uStack_280,lStack_288 + 0x28,&uStack_228,&uStack_2b8,param_2[3]);
    if (iStack_25c == 0) {
      uVar10 = 0;
      uVar9 = 0;
    }
    else {
      uVar9 = 0;
      uVar10 = 0;
      do {
        uStack_258 = *param_2;
        iStack_25c = iStack_25c + -1;
        if (((*(char *)(lStack_270 + 0x6c) == '\x01') && (*(char *)(lStack_270 + 0x34) == '\x01'))
           && (*(char *)(lStack_270 + 0xa4) == '\x01')) {
          auVar12 = func_0x0c91f400(lStack_270,iStack_25c,auStack_268);
        }
        else {
          auVar12 = func_0x0c91f600(lStack_270,iStack_25c,auStack_268,uStack_278,uStack_280);
        }
        uStack_240 = param_2[3];
        puStack_238 = &uStack_228;
        uStack_230 = param_2[5];
        auStack_250 = auVar12;
        auVar11 = (**(code **)(*plVar1 + 0x10))(plVar1,&uStack_258);
        uVar7 = auVar11._8_8_;
        if ((uVar7 >> 0x20 & 1) != 0) {
          uVar9 = uVar7 >> 0x20;
          unaff_R15 = (undefined8 *)(auVar11._0_8_ >> 8);
          uVar10 = auVar11._0_8_ & 0xffffffff;
          unaff_R12 = uVar7 & 0xffffffff;
        }
      } while (iStack_25c != 0);
    }
    if ((ulong)uStack_68 != 0xffffffff) {
      (**(code **)(&UNK_0f2be788 + (ulong)uStack_68 * 8))(&uStack_258,auStack_a8);
    }
    uStack_68 = 0xffffffff;
    if ((ulong)uStack_c0 != 0xffffffff) {
      (**(code **)(&UNK_0f2be788 + (ulong)uStack_c0 * 8))(&uStack_258,auStack_100);
    }
    uStack_c0 = 0xffffffff;
    if (plStack_148 == alStack_168) {
      lVar6 = 0x20;
LAB_0d3fd93c:
      (**(code **)(*plStack_148 + lVar6))();
    }
    else {
      lVar6 = 0x28;
      if (plStack_148 != (long *)0x0) goto LAB_0d3fd93c;
    }
    if (lStack_200 != 0) {
      func_0x0412c2d0();
    }
    if ((uVar9 & 1) != 0) goto LAB_0d3fd90c;
  }
  else {
LAB_0d3fd5dd:
    uVar9 = 0;
    uVar10 = 0;
  }
  uStack_2a0 = 0x190000012d6ccc;
  uStack_2a8 = 0x1b00000136f770;
  func_0x0d3dfbc0(param_2 + 5,&uStack_2a0,&uStack_2a8);
  if ((uStack_2a8 >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2a8 & 0xff00ffffffffffff) - 8);
  }
  uStack_2a8 = 0;
  if ((uStack_2a0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2a0 & 0xff00ffffffffffff) - 8);
  }
LAB_0d3fd90c:
  auVar11._0_8_ = uVar10 & 0xff | (long)unaff_R15 << 8;
  auVar11._8_8_ = unaff_R12 & 0xffffffff | (uVar9 & 0xff) << 0x20;
  return auVar11;
}


```

## `d402240` — SculkPatchFeature::vslot2

- instructions: 586
- calls: 412a280, 4882eb0, 525f640, b6c4ac0, c6cbc50, c6e95e0, cc41df0, cd56a20, cd56b30, d048190, d0493c0, d402bb0, eec74c0, eee2d70, eee2f00

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] SculkPatchFeature_v2(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  int *piVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  int iVar15;
  undefined8 *puVar16;
  long *plVar17;
  uint uVar18;
  long lVar19;
  undefined8 uVar20;
  uint uVar21;
  uint uVar22;
  bool bVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined8 uStack_c0;
  int iStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  int iStack_a0;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  uint uStack_60;
  int iStack_5c;
  undefined8 *puStack_58;
  ulong uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  int iStack_38;
  
  plVar1 = (long *)*param_2;
  puStack_b0 = param_2 + 1;
  lVar7 = (**(code **)(*plVar1 + 0x28))(plVar1);
  lVar19 = *(long *)(*(long *)(lVar7 + 0x68) + 200);
  if ((lVar19 == _DAT_0f713c30) || (lVar19 == _DAT_0f7150c0)) {
LAB_0d40255f:
    func_0x0d048190(&uStack_a8,1,0x32,1,5,10);
    uStack_60 = *(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x44);
    if (uStack_60 != 0 &&
        SCARRY4(*(int *)(param_1 + 0x40),*(int *)(param_1 + 0x44)) == (int)uStack_60 < 0) {
      uVar9 = 0;
      do {
        iVar15 = *(int *)(param_1 + 0x34);
        uVar21 = *(uint *)(param_1 + 0x38);
        uStack_50 = uVar9;
        if (0 < (int)uVar21 && 0 < iVar15) {
          puVar16 = puStack_88;
          iVar5 = iStack_5c;
          iStack_5c = 0;
          while( true ) {
            puStack_88 = puVar16;
            iVar14 = iStack_5c;
            if (0 < (int)uVar21) {
              do {
                uVar18 = 1000;
                if (uVar21 < 1000) {
                  uVar18 = uVar21;
                }
                lVar19 = (long)puVar16 - (long)puStack_90;
                uVar9 = (lVar19 >> 2) * 0x6db6db6db6db6db7;
                if (uVar9 < 0x20) {
                  if (puVar16 < puStack_80) {
                    *(undefined4 *)(puVar16 + 1) = *(undefined4 *)(puStack_b0 + 1);
                    *puVar16 = *puStack_b0;
                    *(uint *)((long)puVar16 + 0xc) = uVar18;
                    puVar16[2] = 0x100000000;
                    *(undefined4 *)(puVar16 + 3) = 0xffffffff;
                    puVar16 = (undefined8 *)((long)puVar16 + 0x1c);
                    puStack_88 = puVar16;
                  }
                  else {
                    uVar9 = uVar9 + 1;
                    lVar7 = (long)puStack_80 - (long)puStack_90 >> 2;
                    uVar13 = lVar7 * -0x2492492492492492;
                    if (uVar13 <= uVar9) {
                      uVar13 = uVar9;
                    }
                    if (0x492492492492491 < (ulong)(lVar7 * 0x6db6db6db6db6db7)) {
                      uVar13 = 0x924924924924924;
                    }
                    if (0x924924924924924 < uVar13) {
                      uVar20 = func_0x04882eb0();
                      func_0x0d402bb0(&uStack_a8);
                      func_0x0eee2d70(uVar20);
                      pcVar3 = (code *)swi(3);
                      auVar25 = (*pcVar3)();
                      return auVar25;
                    }
                    puStack_58 = puStack_90;
                    lVar7 = uVar13 * 0x1c;
                    lStack_48 = (long)puStack_80 - (long)puStack_90;
                    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar7)
                    ;
                    if (puVar10 == (undefined8 *)0x0) {
                      func_0x0eec74c0(lVar7,0);
                    }
                    *(undefined4 *)((long)puVar10 + lVar19 + 8) = *(undefined4 *)(puStack_b0 + 1);
                    *(undefined8 *)((long)puVar10 + lVar19) = *puStack_b0;
                    *(uint *)((long)puVar10 + lVar19 + 0xc) = uVar18;
                    *(undefined8 *)((long)puVar10 + lVar19 + 0x10) = 0x100000000;
                    *(undefined4 *)((long)puVar10 + lVar19 + 0x18) = 0xffffffff;
                    puVar16 = (undefined8 *)((long)puVar10 + lVar19 + 0x1c);
                    func_0x0eee2f00(puVar10,puStack_58,lVar19);
                    puStack_90 = puVar10;
                    puStack_88 = puVar16;
                    puStack_80 = (undefined8 *)(lVar7 + (long)puVar10);
                    if (puStack_58 != (undefined8 *)0x0) {
                      func_0x0412a280(puStack_58,lStack_48);
                      puStack_88 = puVar16;
                    }
                  }
                }
                uVar22 = uVar21 - uVar18;
                bVar23 = (int)uVar18 <= (int)uVar21;
                uVar21 = uVar22;
              } while (uVar22 != 0 && bVar23);
              iVar15 = *(int *)(param_1 + 0x34);
              iVar5 = iStack_5c;
              iVar14 = iStack_5c;
            }
            iStack_5c = iVar5;
            if (iVar15 <= iVar14 + 1) break;
            uVar21 = *(uint *)(param_1 + 0x38);
            puVar16 = puStack_88;
            iVar5 = iStack_5c;
            iStack_5c = iVar14 + 1;
          }
        }
        iVar15 = (int)uStack_50;
        if (0 < *(int *)(param_1 + 0x3c)) {
          iVar5 = *(int *)(param_1 + 0x44);
          iVar14 = 0;
          do {
            func_0x0d0493c0(&uStack_a8,*param_2,0,puStack_b0,param_2[3],iVar15 < iVar5);
            iVar14 = iVar14 + 1;
          } while (iVar14 < *(int *)(param_1 + 0x3c));
        }
        puStack_88 = puStack_90;
        uVar21 = iVar15 + 1;
        uVar9 = (ulong)uVar21;
      } while (uVar21 != uStack_60);
    }
    fVar24 = (float)(**(code **)(*(long *)param_2[3] + 0x30))();
    if (fVar24 <= *(float *)(param_1 + 0x30)) {
      iStack_b8 = *(int *)(param_2 + 2);
      uStack_c0 = CONCAT44(*(int *)((long)param_2 + 0xc) + -1,*(undefined4 *)(param_2 + 1));
      lVar19 = (**(code **)(*(long *)*param_2 + 0x28))((long *)*param_2,&uStack_c0);
      if ((*(long *)(param_1 + 0x28) != 0) && (*(char *)(lVar19 + 0x71) != '\0')) {
        (**(code **)(*(long *)*param_2 + 0x60))
                  ((long *)*param_2,puStack_b0,*(long *)(param_1 + 0x28),2);
      }
    }
    iVar15 = *(int *)(param_1 + 0x48);
    if (iVar15 <= *(int *)(param_1 + 0x4c)) {
      iVar5 = (**(code **)(*(long *)param_2[3] + 0x18))
                        ((long *)param_2[3],(*(int *)(param_1 + 0x4c) - iVar15) + 1);
      iVar15 = iVar15 + iVar5;
    }
    lVar19 = func_0x0cc41df0(0xf6ff9e0,0xf713be0,1);
    if (0 < iVar15) {
      iVar5 = 0;
      do {
        iVar14 = (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],5);
        iVar6 = (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],5);
        iStack_b8 = iVar6 + *(int *)(param_2 + 2) + -2;
        uStack_c0 = CONCAT44(*(undefined4 *)((long)param_2 + 0xc),
                             *(int *)(param_2 + 1) + iVar14 + -2);
        lVar7 = (**(code **)(*(long *)*param_2 + 0x28))((long *)*param_2,&uStack_c0);
        if (*(long *)(*(long *)(lVar7 + 0x68) + 200) == _DAT_0f6eaec0) {
          uStack_40 = CONCAT44(uStack_c0._4_4_ + -1,(undefined4)uStack_c0);
          iStack_38 = iStack_b8;
          lVar7 = (**(code **)(*(long *)*param_2 + 0x28))((long *)*param_2,&uStack_40);
          piVar11 = (int *)func_0x0cd56a20(lVar7);
          if (piVar11 == (int *)0x0) {
LAB_0d4029e0:
            cVar4 = func_0x0c6cbc50(*(undefined8 *)(lVar7 + 0x68),lVar7,1);
          }
          else {
            if (*piVar11 == 0) goto LAB_0d402900;
            if (*piVar11 != 1) goto LAB_0d4029e0;
            cVar4 = func_0x0cd56b30(lVar7,1);
          }
          if (cVar4 != '\0') {
            plVar1 = (long *)*param_2;
            lVar7 = *(long *)(lVar19 + 0x68);
            lVar8 = *(long *)(lVar7 + 0x1b0);
            if (lVar8 == 0) {
LAB_0d402a53:
              for (plVar17 = *(long **)(lVar7 + 0x350); plVar17 != *(long **)(lVar7 + 0x358);
                  plVar17 = plVar17 + 2) {
                plVar2 = (long *)*plVar17;
                if (*(ulong *)(plVar2[1] + 8) == _DAT_0f6fe0e0) {
                  lVar8 = (**(code **)(*plVar2 + 8))(plVar2,lVar7,*(ushort *)(lVar19 + 0x128),1);
                  if (lVar8 != 0) goto LAB_0d4028f1;
                  break;
                }
              }
              if ((*(byte *)(lVar7 + 0x135) & 8) == 0) {
LAB_0d4028ee:
                lVar8 = lVar19;
              }
              else {
                lVar8 = *(long *)(lVar7 + 0x200);
              }
            }
            else {
              lVar12 = lVar7 + 0x1b0;
              do {
                bVar23 = *(ulong *)(lVar8 + 0x20) < _DAT_0f6fe0e0;
                if (!bVar23) {
                  lVar12 = lVar8;
                }
                lVar8 = *(long *)(lVar8 + (ulong)bVar23 * 8);
              } while (lVar8 != 0);
              if ((lVar12 == lVar7 + 0x1b0) || (_DAT_0f6fe0e0 < *(ulong *)(lVar12 + 0x20)))
              goto LAB_0d402a53;
              if (*(uint *)(lVar12 + 0x28) < 2) goto LAB_0d4028ee;
              uVar9 = (ulong)(1 << (((char)*(undefined4 *)(lVar12 + 0x30) -
                                    (char)*(undefined4 *)(lVar12 + 0x2c)) + 1U & 0x1f) & 0xffffU |
                             ~*(uint *)(lVar12 + 0x34) & (uint)*(ushort *)(lVar19 + 0x128));
              if (((ulong)(*(long *)(lVar7 + 0x1f0) - *(long *)(lVar7 + 0x1e8) >> 3) <= uVar9) ||
                 (lVar8 = *(long *)(*(long *)(lVar7 + 0x1e8) + uVar9 * 8), lVar8 == 0))
              goto LAB_0d4028ee;
            }
LAB_0d4028f1:
            (**(code **)(*plVar1 + 0x60))(plVar1,&uStack_c0,lVar8,3);
          }
        }
LAB_0d402900:
        iVar5 = iVar5 + 1;
      } while (iVar5 != iVar15);
    }
    uVar20 = param_2[1];
    uVar21 = *(uint *)(param_2 + 2);
    func_0x0525f640(auStack_78,uStack_70);
    if (puStack_90 != (undefined8 *)0x0) {
      puStack_88 = puStack_90;
      func_0x0412a280(puStack_90,(long)puStack_80 - (long)puStack_90);
    }
    uVar9 = (ulong)uVar21 | 0x100000000;
  }
  else {
    if ((lVar19 == _DAT_0f6eaec0) || (cVar4 = func_0x0b6c4ac0(lVar7), cVar4 != '\0')) {
      iStack_a0 = *(int *)(param_2 + 2);
      uStack_a8 = CONCAT44(*(int *)((long)param_2 + 0xc) + 1,*(undefined4 *)(param_2 + 1));
      lVar8 = (**(code **)(*plVar1 + 0x28))(plVar1,&uStack_a8);
      lVar19 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(param_1 + 0x18);
      if (lVar7 == lVar19) {
        if (*(char *)(lVar8 + 0x71) != '\0') goto LAB_0d40255f;
      }
      else {
        do {
          cVar4 = func_0x0c6e95e0(lVar19,lVar8);
          if (cVar4 != '\0') goto LAB_0d40255f;
          lVar19 = lVar19 + 0xa8;
        } while (lVar19 != lVar7);
      }
      iStack_a0 = *(int *)(param_2 + 2);
      uStack_a8 = CONCAT44(*(int *)((long)param_2 + 0xc) + -1,*(undefined4 *)(param_2 + 1));
      lVar8 = (**(code **)(*plVar1 + 0x28))(plVar1,&uStack_a8);
      lVar19 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(param_1 + 0x18);
      if (lVar7 == lVar19) {
        if (*(char *)(lVar8 + 0x71) != '\0') goto LAB_0d40255f;
      }
      else {
        do {
          cVar4 = func_0x0c6e95e0(lVar19,lVar8);
          if (cVar4 != '\0') goto LAB_0d40255f;
          lVar19 = lVar19 + 0xa8;
        } while (lVar19 != lVar7);
      }
      uStack_a8 = param_2[1];
      iStack_a0 = *(int *)(param_2 + 2) + -1;
      lVar8 = (**(code **)(*plVar1 + 0x28))(plVar1,&uStack_a8);
      lVar19 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(param_1 + 0x18);
      if (lVar7 == lVar19) {
        if (*(char *)(lVar8 + 0x71) != '\0') goto LAB_0d40255f;
      }
      else {
        do {
          cVar4 = func_0x0c6e95e0(lVar19,lVar8);
          if (cVar4 != '\0') goto LAB_0d40255f;
          lVar19 = lVar19 + 0xa8;
        } while (lVar19 != lVar7);
      }
      uStack_a8 = param_2[1];
      iStack_a0 = *(int *)(param_2 + 2) + 1;
      lVar8 = (**(code **)(*plVar1 + 0x28))(plVar1,&uStack_a8);
      lVar19 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(param_1 + 0x18);
      if (lVar7 == lVar19) {
        if (*(char *)(lVar8 + 0x71) != '\0') goto LAB_0d40255f;
      }
      else {
        do {
          cVar4 = func_0x0c6e95e0(lVar19,lVar8);
          if (cVar4 != '\0') goto LAB_0d40255f;
          lVar19 = lVar19 + 0xa8;
        } while (lVar19 != lVar7);
      }
      iStack_a0 = *(int *)(param_2 + 2);
      uStack_a8 = CONCAT44(*(undefined4 *)((long)param_2 + 0xc),*(int *)(param_2 + 1) + -1);
      lVar8 = (**(code **)(*plVar1 + 0x28))(plVar1,&uStack_a8);
      lVar19 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(param_1 + 0x18);
      if (lVar7 == lVar19) {
        if (*(char *)(lVar8 + 0x71) != '\0') goto LAB_0d40255f;
      }
      else {
        do {
          cVar4 = func_0x0c6e95e0(lVar19,lVar8);
          if (cVar4 != '\0') goto LAB_0d40255f;
          lVar19 = lVar19 + 0xa8;
        } while (lVar19 != lVar7);
      }
      iStack_a0 = *(int *)(param_2 + 2);
      uStack_a8 = CONCAT44(*(undefined4 *)((long)param_2 + 0xc),*(int *)(param_2 + 1) + 1);
      lVar8 = (**(code **)(*plVar1 + 0x28))(plVar1,&uStack_a8);
      lVar19 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(param_1 + 0x18);
      if (lVar7 != lVar19) {
        uVar9 = 0;
        do {
          cVar4 = func_0x0c6e95e0(lVar19,lVar8);
          if (cVar4 != '\0') goto LAB_0d40255f;
          lVar19 = lVar19 + 0xa8;
          uVar20 = 0;
        } while (lVar19 != lVar7);
        goto LAB_0d402b5f;
      }
      if (*(char *)(lVar8 + 0x71) == '\x01') goto LAB_0d40255f;
    }
    uVar9 = 0;
    uVar20 = 0;
  }
LAB_0d402b5f:
  auVar25._8_8_ = uVar9;
  auVar25._0_8_ = uVar20;
  return auVar25;
}


```

## `d405930` — SearchFeature::vslot2

- instructions: 33

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] SearchFeature_v2(long param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auVar9 [16];
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  ulong uVar13;
  long *plVar14;
  int iVar15;
  ulong uVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  ulong uStack_d8;
  int iStack_cc;
  undefined *puStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  int iStack_ac;
  undefined8 *puStack_a8;
  ulong uStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  int iStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  switch(*(undefined4 *)(param_1 + 0x40)) {
  case 0:
    uVar12 = CONCAT44((int)*(float *)(param_1 + 0x28) + -1,
                      (int)(*(float *)(param_1 + 0x34) + _DAT_011983f0) + -1);
    fVar3 = *(float *)(param_1 + 0x3c);
    fVar1 = *(float *)(param_1 + 0x30);
    fVar2 = *(float *)(param_1 + 0x2c);
    fVar4 = *(float *)(param_1 + 0x38);
    break;
  case 1:
    fVar1 = *(float *)(param_1 + 0x30);
    uVar12 = CONCAT44((int)*(float *)(param_1 + 0x34) + 1,(int)*(float *)(param_1 + 0x28));
    fVar2 = *(float *)(param_1 + 0x3c);
    fVar4 = *(float *)(param_1 + 0x2c);
    fVar3 = *(float *)(param_1 + 0x38);
    goto code_r0x0d405c07;
  case 2:
    uVar12 = CONCAT44((int)*(float *)(param_1 + 0x2c) + -1,
                      (int)(*(float *)(param_1 + 0x38) + _DAT_011983f0) + -1);
    fVar3 = *(float *)(param_1 + 0x34);
    fVar1 = *(float *)(param_1 + 0x28);
    fVar2 = *(float *)(param_1 + 0x30);
    fVar4 = *(float *)(param_1 + 0x3c);
    break;
  case 3:
    fVar1 = *(float *)(param_1 + 0x28);
    uVar12 = CONCAT44((int)*(float *)(param_1 + 0x38) + 1,(int)*(float *)(param_1 + 0x2c));
    fVar2 = *(float *)(param_1 + 0x34);
    fVar4 = *(float *)(param_1 + 0x30);
    fVar3 = *(float *)(param_1 + 0x3c);
code_r0x0d405c07:
    auVar22 = func_0x0d406a20(param_1,param_2,uVar12,CONCAT44((int)fVar2 + 1,(int)fVar1),
                              CONCAT44((int)fVar3 + 1,(int)fVar4));
    goto code_r0x0d405c1e;
  case 4:
    puStack_a8 = (undefined8 *)CONCAT44(puStack_a8._4_4_,*(undefined4 *)(param_1 + 0x3c));
    fVar3 = *(float *)(param_1 + 0x30);
    uStack_68 = *(ulong *)(param_1 + 0x28);
    uStack_60 = 0;
    uStack_48 = *(ulong *)(param_1 + 0x34);
    uStack_40 = 0;
    plStack_c0 = (long *)*param_2;
    puStack_c8 = &UNK_0f3e3be8;
    plStack_b8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (plStack_b8 == (long *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    plStack_b8[2] = 0;
    plStack_b8[3] = 0;
    *plStack_b8 = 0;
    plStack_b8[1] = 0;
    plStack_b8[4] = 0;
    *(undefined4 *)(plStack_b8 + 4) = 0x3f800000;
    func_0x0b5d5fa0(plStack_b8,0x40);
    if (*(char *)(param_1 + 0x18) == '\x01') {
      uStack_a0 = *(ulong *)(param_1 + 0x10);
      lStack_50 = *(long *)(param_1 + 0x20);
      lVar6 = *(long *)(*(long *)(uStack_a0 + 0x18) + lStack_50 * 8);
      if (lVar6 == 0) goto code_r0x0d405dee;
      if ((*(char *)(param_1 + 9) != '\0') || (*(char *)(lVar6 + 8) != '\x01')) {
        iVar15 = (int)(puStack_a8._0_4_ + _DAT_011983f0);
        if (iVar15 == (int)fVar3) goto code_r0x0d405dee;
        iVar18 = (int)(float)uStack_48;
        iVar19 = (int)uStack_68._4_4_;
        iVar20 = -(uint)(iVar18 + 1 == (int)(float)uStack_68);
        iVar11 = -(uint)((int)uStack_48._4_4_ + 1 == iVar19);
        auVar9._4_4_ = iVar20;
        auVar9._0_4_ = iVar20;
        auVar9._8_4_ = iVar11;
        auVar9._12_4_ = iVar11;
        iVar20 = movmskpd((int)lVar6,auVar9);
        iVar11 = 0;
        if (iVar20 == 0) {
          uStack_48 = CONCAT44(uStack_48._4_4_,(int)(float)uStack_68);
          uStack_68 = CONCAT44(uStack_68._4_4_,iVar18 + 1);
          uStack_58 = CONCAT44(uStack_58._4_4_,iVar19);
          iStack_cc = (int)uStack_48._4_4_;
          iStack_ac = (int)fVar3;
          puStack_a8 = param_2;
code_r0x0d406105:
          iVar15 = iVar15 + -1;
code_r0x0d40611a:
          iVar20 = (int)(float)uStack_48;
code_r0x0d40613d:
          uVar5 = *(uint *)(param_1 + 0x40);
          if (uVar5 < 6) {
            iVar18 = iVar15;
            iVar10 = iVar19;
            iStack_88 = iVar20;
            if (((3U >> (uVar5 & 0x1f) & 1) == 0) &&
               (iVar18 = iVar20, iVar10 = iVar15, iStack_88 = iVar19,
               (0xcU >> (uVar5 & 0x1f) & 1) == 0)) {
              iVar10 = iVar19;
              iStack_88 = iVar15;
            }
          }
          else {
            iVar10 = 0;
            iVar18 = 0;
            iStack_88 = 0;
          }
          plVar14 = *(long **)(*(long *)(uStack_a0 + 0x18) + lStack_50 * 8);
          ppuStack_98 = &puStack_c8;
          iStack_88 = iStack_88 + *(int *)(puStack_a8 + 2);
          uStack_90 = CONCAT44(iVar10 + *(int *)((long)puStack_a8 + 0xc),
                               iVar18 + *(int *)(puStack_a8 + 1));
          uStack_80 = *(undefined4 *)(puStack_a8 + 3);
          uStack_7c = *(undefined4 *)((long)puStack_a8 + 0x1c);
          uStack_78 = *(undefined4 *)(puStack_a8 + 4);
          uStack_74 = *(undefined4 *)((long)puStack_a8 + 0x24);
          uStack_70 = puStack_a8[5];
          auVar22 = (**(code **)(*plVar14 + 0x10))(plVar14,&ppuStack_98);
          uVar12 = auVar22._0_8_;
          if ((auVar22._8_8_ & 0x100000000) == 0) goto code_r0x0d406133;
          iVar11 = iVar11 + 1;
          if (iVar11 != *(int *)(param_1 + 0x44)) goto code_r0x0d406133;
          for (puVar8 = (undefined8 *)plStack_b8[2]; puVar8 != (undefined8 *)0x0;
              puVar8 = (undefined8 *)*puVar8) {
            (**(code **)(*plStack_c0 + 0x60))
                      (plStack_c0,puVar8 + 2,puVar8[6],*(undefined4 *)(puVar8 + 4));
          }
          uVar13 = auVar22._8_8_ & 0xff00000000;
          goto code_r0x0d405ea4;
        }
        auVar22 = ZEXT816(0);
        goto code_r0x0d405df3;
      }
      ppuStack_98 = (undefined **)0x1800000134029e;
      uStack_d8 = 0x1d000001219d14;
      func_0x0d3dfbc0(param_2 + 5,&ppuStack_98,&uStack_d8);
      if ((uStack_d8 >> 0x37 & 1) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_d8 & 0xff00ffffffffffff) - 8);
      }
      if (((ulong)ppuStack_98 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)ppuStack_98 & 0xff00ffffffffffff) - 8);
      }
      uVar12 = 0;
      uVar13 = 0;
      auVar22 = ZEXT816(0);
    }
    else {
code_r0x0d405dee:
      auVar22 = ZEXT816(0);
code_r0x0d405df3:
      ppuStack_98 = (undefined **)0x1800000134029e;
      uStack_d8 = 0x2f0000013d7e8d;
      func_0x0d3dfbc0(param_2 + 5,&ppuStack_98,&uStack_d8);
      if ((uStack_d8 >> 0x37 & 1) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_d8 & 0xff00ffffffffffff) - 8);
      }
      uStack_d8 = 0;
      if (((ulong)ppuStack_98 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)ppuStack_98 & 0xff00ffffffffffff) - 8);
      }
      uVar12 = 0;
      uVar13 = 0;
    }
code_r0x0d405ea4:
    plVar14 = plStack_b8;
    puStack_c8 = &UNK_0f3e3be8;
    plStack_b8 = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      puVar8 = (undefined8 *)plVar14[2];
      while (puVar8 != (undefined8 *)0x0) {
        puVar7 = (undefined8 *)*puVar8;
        func_0x0412a280(puVar8,0x38);
        puVar8 = puVar7;
      }
code_r0x0d405ff5:
      lVar6 = *plVar14;
      *plVar14 = 0;
      if (lVar6 != 0) {
        func_0x0412a280(lVar6,plVar14[1] << 3);
      }
      func_0x0412a280(plVar14,0x28);
    }
    goto code_r0x0d406021;
  case 5:
    uStack_a0 = (ulong)(uint)(int)*(float *)(param_1 + 0x30);
    fVar3 = *(float *)(param_1 + 0x3c);
    fVar4 = *(float *)(param_1 + 0x28);
    iStack_cc = (int)*(float *)(param_1 + 0x2c);
    uStack_48 = (ulong)(uint)(int)*(float *)(param_1 + 0x38);
    uStack_68 = CONCAT44(uStack_68._4_4_,*(undefined4 *)(param_1 + 0x34));
    plStack_c0 = (long *)*param_2;
    puStack_c8 = &UNK_0f3e3be8;
    plStack_b8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (plStack_b8 == (long *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    plStack_b8[2] = 0;
    plStack_b8[3] = 0;
    *plStack_b8 = 0;
    plStack_b8[1] = 0;
    plStack_b8[4] = 0;
    *(undefined4 *)(plStack_b8 + 4) = 0x3f800000;
    func_0x0b5d5fa0(plStack_b8,0x40);
    if (*(char *)(param_1 + 0x18) == '\x01') {
      lStack_50 = *(long *)(param_1 + 0x10);
      puStack_a8 = *(undefined8 **)(param_1 + 0x20);
      lVar6 = *(long *)(*(long *)(lStack_50 + 0x18) + (long)puStack_a8 * 8);
      if (lVar6 == 0) goto code_r0x0d405ef9;
      if ((*(char *)(param_1 + 9) != '\0') || (*(char *)(lVar6 + 8) != '\x01')) {
        if ((int)fVar3 + 1U == (int)uStack_a0) goto code_r0x0d405ef9;
        iVar15 = 0;
        if ((int)((float)uStack_68 + _DAT_011983f0) != (int)fVar4 && (int)uStack_48 + 1 != iStack_cc
           ) {
          iStack_ac = (int)((float)uStack_68 + _DAT_011983f0) + -1;
          uStack_68 = (ulong)(uint)-(int)fVar4;
          iVar19 = iStack_ac;
          uStack_58 = (ulong)(uint)(int)fVar3;
          iVar20 = iStack_cc;
code_r0x0d406287:
          while( true ) {
            uVar5 = *(uint *)(param_1 + 0x40);
            if (uVar5 < 6) {
              iVar10 = (int)uStack_a0;
              iVar11 = iVar10;
              iVar18 = iVar20;
              iStack_88 = iVar19;
              if (((3U >> (uVar5 & 0x1f) & 1) == 0) &&
                 (iVar11 = iVar19, iVar18 = iVar10, iStack_88 = iVar20,
                 (0xcU >> (uVar5 & 0x1f) & 1) == 0)) {
                iVar18 = iVar20;
                iStack_88 = iVar10;
              }
            }
            else {
              iVar18 = 0;
              iVar11 = 0;
              iStack_88 = 0;
            }
            plVar14 = *(long **)(*(long *)(lStack_50 + 0x18) + (long)puStack_a8 * 8);
            ppuStack_98 = &puStack_c8;
            iStack_88 = iStack_88 + *(int *)(param_2 + 2);
            uStack_90 = CONCAT44(iVar18 + *(int *)((long)param_2 + 0xc),
                                 iVar11 + *(int *)(param_2 + 1));
            uStack_80 = *(undefined4 *)(param_2 + 3);
            uStack_7c = *(undefined4 *)((long)param_2 + 0x1c);
            uStack_78 = *(undefined4 *)(param_2 + 4);
            uStack_74 = *(undefined4 *)((long)param_2 + 0x24);
            uStack_70 = param_2[5];
            auVar22 = (**(code **)(*plVar14 + 0x10))(plVar14,&ppuStack_98);
            uVar12 = auVar22._0_8_;
            if ((auVar22._8_8_ & 0x100000000) != 0) break;
code_r0x0d406270:
            iVar11 = (int)uStack_68 + iVar19;
            iVar19 = iVar19 + -1;
            if (iVar11 == 0) {
              bVar17 = (float)iVar20 == (float)uStack_48;
              iVar19 = iStack_ac;
              iVar20 = iVar20 + 1;
              if (bVar17) goto code_r0x0d406349;
            }
          }
          iVar15 = iVar15 + 1;
          if (iVar15 != *(int *)(param_1 + 0x44)) goto code_r0x0d406270;
          for (puVar8 = (undefined8 *)plStack_b8[2]; puVar8 != (undefined8 *)0x0;
              puVar8 = (undefined8 *)*puVar8) {
            (**(code **)(*plStack_c0 + 0x60))
                      (plStack_c0,puVar8 + 2,puVar8[6],*(undefined4 *)(puVar8 + 4));
          }
          uVar13 = auVar22._8_8_ & 0xff00000000;
          goto code_r0x0d405faf;
        }
        auVar22 = ZEXT816(0);
        goto code_r0x0d405efe;
      }
      ppuStack_98 = (undefined **)0x1800000134029e;
      uStack_d8 = 0x1d000001219d14;
      func_0x0d3dfbc0(param_2 + 5,&ppuStack_98,&uStack_d8);
      if ((uStack_d8 >> 0x37 & 1) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_d8 & 0xff00ffffffffffff) - 8);
      }
      if (((ulong)ppuStack_98 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)ppuStack_98 & 0xff00ffffffffffff) - 8);
      }
      uVar12 = 0;
      uVar13 = 0;
      auVar22 = ZEXT816(0);
    }
    else {
code_r0x0d405ef9:
      auVar22 = ZEXT816(0);
code_r0x0d405efe:
      ppuStack_98 = (undefined **)0x1800000134029e;
      uStack_d8 = 0x2f0000013d7e8d;
      func_0x0d3dfbc0(param_2 + 5,&ppuStack_98,&uStack_d8);
      if ((uStack_d8 >> 0x37 & 1) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_d8 & 0xff00ffffffffffff) - 8);
      }
      uStack_d8 = 0;
      if (((ulong)ppuStack_98 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)ppuStack_98 & 0xff00ffffffffffff) - 8);
      }
      uVar12 = 0;
      uVar13 = 0;
    }
code_r0x0d405faf:
    plVar14 = plStack_b8;
    puStack_c8 = &UNK_0f3e3be8;
    plStack_b8 = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      puVar8 = (undefined8 *)plVar14[2];
      while (puVar8 != (undefined8 *)0x0) {
        puVar7 = (undefined8 *)*puVar8;
        func_0x0412a280(puVar8,0x38);
        puVar8 = puVar7;
      }
      goto code_r0x0d405ff5;
    }
code_r0x0d406021:
    uVar16 = auVar22._0_8_ & 0xffffffffffffff00;
    auVar22._8_8_ = uVar13 | auVar22._8_8_ & 0xffffffff;
    auVar22._0_8_ = uVar12;
    goto LAB_0d406031;
  default:
    uVar16 = 0;
    auVar22 = ZEXT816(0);
    goto LAB_0d406031;
  }
  auVar22 = func_0x0d4064e0(param_1,param_2,uVar12,
                            CONCAT44((int)fVar1 + -1,(int)(_DAT_011983f0 + fVar3) + -1),
                            CONCAT44((int)fVar4 + 1,(int)fVar2));
code_r0x0d405c1e:
  uVar16 = auVar22._0_8_ & 0xffffffffffffff00;
LAB_0d406031:
  auVar21._0_8_ = auVar22._0_8_ & 0xff | uVar16;
  auVar21._8_8_ = auVar22._8_8_ & 0xffffffffff;
  return auVar21;
code_r0x0d406349:
  iVar11 = (int)uStack_a0;
  uStack_a0 = (ulong)(iVar11 + 1);
  iVar20 = iStack_cc;
  if (iVar11 == (int)uStack_58) goto code_r0x0d405efe;
  goto code_r0x0d406287;
code_r0x0d406133:
  iVar20 = iVar20 + 1;
  if ((float)uStack_68 == (float)iVar20) goto code_r0x0d40610b;
  goto code_r0x0d40613d;
code_r0x0d40610b:
  bVar17 = iVar19 == iStack_cc;
  iVar19 = iVar19 + 1;
  if (bVar17) goto code_r0x0d406207;
  goto code_r0x0d40611a;
code_r0x0d406207:
  param_2 = puStack_a8;
  iVar19 = (int)uStack_58;
  if (iVar15 == iStack_ac) goto code_r0x0d405df3;
  goto code_r0x0d406105;
}


```

## `d40bc80` — SingleBlockFeature::vslot2

- instructions: 1237
- calls: c6e9230, c6e95e0, cb91980, cc41df0, d3d0a50, d3d5770, d3dfbc0, d40d210, d40d330, ee4a030

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] SingleBlockFeature_v2(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong *puVar16;
  byte bVar17;
  ulong *puVar18;
  undefined1 auVar19 [16];
  ulong uStack_100;
  int iStack_f8;
  undefined8 *puStack_f0;
  long *plStack_e8;
  undefined8 *puStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  long lStack_38;
  
  lVar9 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(param_1 + 0x18);
  if (lVar9 == lVar7) {
    uStack_40 = 0x1e00000141231f;
    uStack_48 = 0x1d00000129cd05;
    puVar16 = &uStack_40;
    puVar18 = &uStack_48;
    func_0x0d3dfbc0(param_2 + 5,puVar16,puVar18);
    goto LAB_0d40c4d7;
  }
  if (*(char *)(param_1 + 0x1f8) == '\x01') {
    plVar1 = (long *)*param_2;
    iStack_f8 = *(int *)(param_2 + 2);
    uStack_100 = CONCAT44(*(int *)((long)param_2 + 0xc) + 1,*(undefined4 *)(param_2 + 1));
    puStack_f0 = param_2;
    uVar4 = (**(code **)(*plVar1 + 0x28))(plVar1,&uStack_100);
    if (*(long *)(param_1 + 0x100) != *(long *)(param_1 + 0x108)) {
      uVar5 = func_0x0d3d5770(uVar4);
      lVar7 = *(long *)(param_1 + 0x108);
      for (lVar9 = *(long *)(param_1 + 0x100); lVar9 != lVar7; lVar9 = lVar9 + 0xa8) {
        cVar2 = func_0x0c6e95e0(lVar9,uVar5);
        param_2 = puStack_f0;
        if (cVar2 != '\0') goto LAB_0d40c3cf;
      }
    }
    if (*(long *)(param_1 + 400) != *(long *)(param_1 + 0x198)) {
      uVar4 = func_0x0d3d5770(uVar4);
      lVar7 = *(long *)(param_1 + 0x198);
      for (lVar9 = *(long *)(param_1 + 400); lVar9 != lVar7; lVar9 = lVar9 + 0xa8) {
        cVar2 = func_0x0c6e95e0(lVar9,uVar4);
        param_2 = puStack_f0;
        if (cVar2 != '\0') goto LAB_0d40c3cf;
      }
    }
    iStack_f8 = *(int *)(puStack_f0 + 2);
    uStack_100 = CONCAT44(*(int *)((long)puStack_f0 + 0xc) + -1,*(undefined4 *)(puStack_f0 + 1));
    uVar4 = (**(code **)(*plVar1 + 0x28))(plVar1,&uStack_100);
    if (*(long *)(param_1 + 0x118) != *(long *)(param_1 + 0x120)) {
      uVar5 = func_0x0d3d5770(uVar4);
      lVar7 = *(long *)(param_1 + 0x120);
      for (lVar9 = *(long *)(param_1 + 0x118); lVar9 != lVar7; lVar9 = lVar9 + 0xa8) {
        cVar2 = func_0x0c6e95e0(lVar9,uVar5);
        param_2 = puStack_f0;
        if (cVar2 != '\0') goto LAB_0d40c3cf;
      }
    }
    if (*(long *)(param_1 + 400) != *(long *)(param_1 + 0x198)) {
      uVar4 = func_0x0d3d5770(uVar4);
      lVar7 = *(long *)(param_1 + 0x198);
      for (lVar9 = *(long *)(param_1 + 400); lVar9 != lVar7; lVar9 = lVar9 + 0xa8) {
        cVar2 = func_0x0c6e95e0(lVar9,uVar4);
        param_2 = puStack_f0;
        if (cVar2 != '\0') goto LAB_0d40c3cf;
      }
    }
    iStack_f8 = *(int *)(puStack_f0 + 2) + 1;
    uStack_100 = (ulong)((int)puStack_f0[1] + 1) | puStack_f0[1] & 0xffffffff00000000;
    uVar4 = (**(code **)(*plVar1 + 0x28))(plVar1,&uStack_100);
    if (*(long *)(param_1 + 0x1c0) != *(long *)(param_1 + 0x1c8)) {
      uVar5 = func_0x0d3d5770(uVar4);
      lVar7 = *(long *)(param_1 + 0x1c8);
      for (lVar9 = *(long *)(param_1 + 0x1c0); lVar9 != lVar7; lVar9 = lVar9 + 0xa8) {
        cVar2 = func_0x0c6e95e0(lVar9,uVar5);
        param_2 = puStack_f0;
        if (cVar2 != '\0') goto LAB_0d40c3cf;
      }
    }
    if (*(long *)(param_1 + 400) != *(long *)(param_1 + 0x198)) {
      uVar4 = func_0x0d3d5770(uVar4);
      lVar7 = *(long *)(param_1 + 0x198);
      for (lVar9 = *(long *)(param_1 + 400); lVar9 != lVar7; lVar9 = lVar9 + 0xa8) {
        cVar2 = func_0x0c6e95e0(lVar9,uVar4);
        param_2 = puStack_f0;
        if (cVar2 != '\0') goto LAB_0d40c3cf;
      }
    }
    iStack_f8 = *(int *)(puStack_f0 + 2) + 1;
    uStack_100 = (ulong)((int)puStack_f0[1] - 1) | puStack_f0[1] & 0xffffffff00000000;
    uVar4 = (**(code **)(*plVar1 + 0x28))(plVar1,&uStack_100);
    if (*(long *)(param_1 + 0x1c0) != *(long *)(param_1 + 0x1c8)) {
      uVar5 = func_0x0d3d5770(uVar4);
      lVar7 = *(long *)(param_1 + 0x1c8);
      for (lVar9 = *(long *)(param_1 + 0x1c0); lVar9 != lVar7; lVar9 = lVar9 + 0xa8) {
        cVar2 = func_0x0c6e95e0(lVar9,uVar5);
        param_2 = puStack_f0;
        if (cVar2 != '\0') goto LAB_0d40c3cf;
      }
    }
    if (*(long *)(param_1 + 400) != *(long *)(param_1 + 0x198)) {
      uVar4 = func_0x0d3d5770(uVar4);
      lVar7 = *(long *)(param_1 + 0x198);
      for (lVar9 = *(long *)(param_1 + 400); lVar9 != lVar7; lVar9 = lVar9 + 0xa8) {
        cVar2 = func_0x0c6e95e0(lVar9,uVar4);
        param_2 = puStack_f0;
        if (cVar2 != '\0') goto LAB_0d40c3cf;
      }
    }
    iStack_f8 = *(int *)(puStack_f0 + 2) + -1;
    uStack_100 = (ulong)((int)puStack_f0[1] + 1) | puStack_f0[1] & 0xffffffff00000000;
    uVar4 = (**(code **)(*plVar1 + 0x28))(plVar1,&uStack_100);
    if (*(long *)(param_1 + 0x1c0) != *(long *)(param_1 + 0x1c8)) {
      uVar5 = func_0x0d3d5770(uVar4);
      lVar7 = *(long *)(param_1 + 0x1c8);
      for (lVar9 = *(long *)(param_1 + 0x1c0); lVar9 != lVar7; lVar9 = lVar9 + 0xa8) {
        cVar2 = func_0x0c6e95e0(lVar9,uVar5);
        param_2 = puStack_f0;
        if (cVar2 != '\0') goto LAB_0d40c3cf;
      }
    }
    if (*(long *)(param_1 + 400) != *(long *)(param_1 + 0x198)) {
      uVar4 = func_0x0d3d5770(uVar4);
      lVar7 = *(long *)(param_1 + 0x198);
      for (lVar9 = *(long *)(param_1 + 400); lVar9 != lVar7; lVar9 = lVar9 + 0xa8) {
        cVar2 = func_0x0c6e95e0(lVar9,uVar4);
        param_2 = puStack_f0;
        if (cVar2 != '\0') goto LAB_0d40c3cf;
      }
    }
    iStack_f8 = *(int *)(puStack_f0 + 2) + -1;
    uStack_100 = (ulong)((int)puStack_f0[1] - 1) | puStack_f0[1] & 0xffffffff00000000;
    uVar4 = (**(code **)(*plVar1 + 0x28))(plVar1,&uStack_100);
    if (*(long *)(param_1 + 0x1c0) != *(long *)(param_1 + 0x1c8)) {
      uVar5 = func_0x0d3d5770(uVar4);
      lVar7 = *(long *)(param_1 + 0x1c8);
      for (lVar9 = *(long *)(param_1 + 0x1c0); lVar9 != lVar7; lVar9 = lVar9 + 0xa8) {
        cVar2 = func_0x0c6e95e0(lVar9,uVar5);
        param_2 = puStack_f0;
        if (cVar2 != '\0') goto LAB_0d40c3cf;
      }
    }
    if (*(long *)(param_1 + 400) != *(long *)(param_1 + 0x198)) {
      uVar4 = func_0x0d3d5770(uVar4);
      lVar7 = *(long *)(param_1 + 0x198);
      for (lVar9 = *(long *)(param_1 + 400); lVar9 != lVar7; lVar9 = lVar9 + 0xa8) {
        cVar2 = func_0x0c6e95e0(lVar9,uVar4);
        param_2 = puStack_f0;
        if (cVar2 != '\0') goto LAB_0d40c3cf;
      }
    }
    param_2 = puStack_f0;
    uStack_100 = puStack_f0[1];
    iStack_f8 = *(int *)(puStack_f0 + 2) + -1;
    uVar4 = (**(code **)(*plVar1 + 0x28))(plVar1,&uStack_100);
    cVar2 = func_0x0d40d210(param_1,uVar4,2);
    if (cVar2 == '\0') {
      iStack_f8 = *(int *)(param_2 + 2);
      uStack_100 = CONCAT44(*(undefined4 *)((long)param_2 + 0xc),*(int *)(param_2 + 1) + 1);
      uVar4 = (**(code **)(*plVar1 + 0x28))(plVar1,&uStack_100);
      cVar2 = func_0x0d40d210(param_1,uVar4,3);
      if (cVar2 == '\0') {
        uStack_100 = param_2[1];
        iStack_f8 = *(int *)(param_2 + 2) + 1;
        uVar4 = (**(code **)(*plVar1 + 0x28))(plVar1,&uStack_100);
        cVar2 = func_0x0d40d210(param_1,uVar4,4);
        if (cVar2 == '\0') {
          iStack_f8 = *(int *)(param_2 + 2);
          uStack_100 = CONCAT44(*(undefined4 *)((long)param_2 + 0xc),*(int *)(param_2 + 1) + -1);
          uVar4 = (**(code **)(*plVar1 + 0x28))(plVar1,&uStack_100);
          cVar2 = func_0x0d40d210(param_1,uVar4,5);
          if (cVar2 == '\0') {
            lVar9 = *(long *)(param_1 + 0x10);
            lVar7 = *(long *)(param_1 + 0x18);
            goto LAB_0d40c2f4;
          }
        }
      }
    }
LAB_0d40c3cf:
    uStack_50 = 0x1e00000141231f;
    uStack_58 = 0x3f000001458528;
    puVar16 = &uStack_50;
    puVar18 = &uStack_58;
    func_0x0d3dfbc0(param_2 + 5,puVar16,puVar18);
    goto LAB_0d40c4d7;
  }
LAB_0d40c2f4:
  if (lVar9 != lVar7) {
    puVar15 = param_2 + 1;
    iVar11 = 0;
    lVar6 = lVar9;
    do {
      iVar11 = (int)((float)iVar11 + *(float *)(lVar6 + 0xa8));
      lVar6 = lVar6 + 0xb0;
    } while (lVar6 != lVar7);
    if (iVar11 == 0) {
      iVar11 = 0;
      if (lVar9 != lVar7) goto LAB_0d40c450;
    }
    else {
      iVar11 = (**(code **)(**(long **)(param_2[3] + 0x9f8) + 0x18))();
      lVar9 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(param_1 + 0x18);
      if (lVar9 != lVar7) {
LAB_0d40c450:
        do {
          iVar11 = (int)((float)iVar11 - *(float *)(lVar9 + 0xa8));
          if (iVar11 < 0) {
            lVar7 = func_0x0c6e9230(lVar9);
            if (lVar7 == 0) {
              uStack_70 = 0x1e00000141231f;
              uStack_78 = 0x42000001283786;
              puVar16 = &uStack_70;
              puVar18 = &uStack_78;
              func_0x0d3dfbc0(param_2 + 5,puVar16,puVar18);
              goto LAB_0d40c4d7;
            }
            lStack_38 = lVar7;
            if (*(char *)(param_1 + 0x1f8) == '\0') {
              lVar9 = func_0x0c6e9230(lVar9);
              if (lVar9 == 0) {
                lVar9 = func_0x0cc41df0(0xf6ff9e0,0xf6eae50,1);
              }
              goto LAB_0d40c6c5;
            }
            plStack_e8 = (long *)*param_2;
            iStack_f8 = *(int *)(param_2 + 2);
            uStack_100 = CONCAT44(*(int *)((long)param_2 + 0xc) + 1,*(undefined4 *)(param_2 + 1));
            puStack_f0 = param_2;
            puStack_e0 = puVar15;
            uVar4 = (**(code **)(*plStack_e8 + 0x28))(plStack_e8,&uStack_100);
            if (*(long *)(param_1 + 0x28) == *(long *)(param_1 + 0x30)) {
              lVar7 = *(long *)(param_1 + 0xb8);
              lVar6 = *(long *)(param_1 + 0xc0);
              if (lVar7 == lVar6) goto LAB_0d40c831;
              goto LAB_0d40c7e6;
            }
            uVar5 = func_0x0d3d5770(uVar4);
            lVar7 = *(long *)(param_1 + 0x28);
            lVar6 = *(long *)(param_1 + 0x30);
            if (lVar7 == lVar6) goto LAB_0d40c61c;
            goto LAB_0d40c5fd;
          }
          lVar9 = lVar9 + 0xb0;
        } while (lVar9 != lVar7);
      }
    }
  }
  uStack_60 = 0x1e00000141231f;
  uStack_68 = 0x3400000131d899;
  puVar16 = &uStack_60;
  puVar18 = &uStack_68;
  func_0x0d3dfbc0(param_2 + 5,puVar16,puVar18);
  goto LAB_0d40c4d7;
LAB_0d40c831:
  iStack_f8 = *(int *)(puStack_f0 + 2);
  uStack_100 = CONCAT44(*(int *)((long)puStack_f0 + 0xc) + -1,*(undefined4 *)(puStack_f0 + 1));
  uVar4 = (**(code **)(*plStack_e8 + 0x28))(plStack_e8,&uStack_100);
  if (*(long *)(param_1 + 0x40) != *(long *)(param_1 + 0x48)) {
    uVar5 = func_0x0d3d5770(uVar4);
    lVar6 = *(long *)(param_1 + 0x48);
    for (lVar7 = *(long *)(param_1 + 0x40); lVar7 != lVar6; lVar7 = lVar7 + 0xa8) {
      cVar2 = func_0x0c6e95e0(lVar7,uVar5);
      if (cVar2 != '\0') goto LAB_0d40ca1f;
    }
    lVar7 = *(long *)(param_1 + 0xb8);
    lVar6 = *(long *)(param_1 + 0xc0);
LAB_0d40c9d4:
    param_2 = puStack_f0;
    if (lVar7 != lVar6) {
      uVar4 = func_0x0d3d5770(uVar4);
      lVar6 = *(long *)(param_1 + 0xc0);
      for (lVar7 = *(long *)(param_1 + 0xb8); param_2 = puStack_f0, lVar7 != lVar6;
          lVar7 = lVar7 + 0xa8) {
        cVar2 = func_0x0c6e95e0(lVar7,uVar4);
        if (cVar2 != '\0') goto LAB_0d40ca1f;
      }
    }
    goto LAB_0d40ceb5;
  }
  lVar7 = *(long *)(param_1 + 0xb8);
  lVar6 = *(long *)(param_1 + 0xc0);
  if (lVar7 != lVar6) goto LAB_0d40c9d4;
LAB_0d40ca1f:
  iStack_f8 = *(int *)(puStack_f0 + 2) + 1;
  uStack_100 = (ulong)((int)puStack_f0[1] + 1) | puStack_f0[1] & 0xffffffff00000000;
  uVar4 = (**(code **)(*plStack_e8 + 0x28))(plStack_e8,&uStack_100);
  if (*(long *)(param_1 + 0xe8) != *(long *)(param_1 + 0xf0)) {
    uVar5 = func_0x0d3d5770(uVar4);
    lVar6 = *(long *)(param_1 + 0xf0);
    for (lVar7 = *(long *)(param_1 + 0xe8); lVar7 != lVar6; lVar7 = lVar7 + 0xa8) {
      cVar2 = func_0x0c6e95e0(lVar7,uVar5);
      if (cVar2 != '\0') goto LAB_0d40cbc7;
    }
    lVar7 = *(long *)(param_1 + 0xb8);
    lVar6 = *(long *)(param_1 + 0xc0);
LAB_0d40cb7c:
    param_2 = puStack_f0;
    if (lVar7 != lVar6) {
      uVar4 = func_0x0d3d5770(uVar4);
      lVar6 = *(long *)(param_1 + 0xc0);
      for (lVar7 = *(long *)(param_1 + 0xb8); param_2 = puStack_f0, lVar7 != lVar6;
          lVar7 = lVar7 + 0xa8) {
        cVar2 = func_0x0c6e95e0(lVar7,uVar4);
        if (cVar2 != '\0') goto LAB_0d40cbc7;
      }
    }
    goto LAB_0d40ceb5;
  }
  lVar7 = *(long *)(param_1 + 0xb8);
  lVar6 = *(long *)(param_1 + 0xc0);
  if (lVar7 != lVar6) goto LAB_0d40cb7c;
LAB_0d40cbc7:
  iStack_f8 = *(int *)(puStack_f0 + 2) + 1;
  uStack_100 = (ulong)((int)puStack_f0[1] - 1) | puStack_f0[1] & 0xffffffff00000000;
  uVar4 = (**(code **)(*plStack_e8 + 0x28))(plStack_e8,&uStack_100);
  if (*(long *)(param_1 + 0xe8) != *(long *)(param_1 + 0xf0)) {
    uVar5 = func_0x0d3d5770(uVar4);
    lVar6 = *(long *)(param_1 + 0xf0);
    for (lVar7 = *(long *)(param_1 + 0xe8); lVar7 != lVar6; lVar7 = lVar7 + 0xa8) {
      cVar2 = func_0x0c6e95e0(lVar7,uVar5);
      if (cVar2 != '\0') goto LAB_0d40ccbf;
    }
    lVar7 = *(long *)(param_1 + 0xb8);
    lVar6 = *(long *)(param_1 + 0xc0);
LAB_0d40cc74:
    param_2 = puStack_f0;
    if (lVar7 != lVar6) {
      uVar4 = func_0x0d3d5770(uVar4);
      lVar6 = *(long *)(param_1 + 0xc0);
      for (lVar7 = *(long *)(param_1 + 0xb8); param_2 = puStack_f0, lVar7 != lVar6;
          lVar7 = lVar7 + 0xa8) {
        cVar2 = func_0x0c6e95e0(lVar7,uVar4);
        if (cVar2 != '\0') goto LAB_0d40ccbf;
      }
    }
    goto LAB_0d40ceb5;
  }
  lVar7 = *(long *)(param_1 + 0xb8);
  lVar6 = *(long *)(param_1 + 0xc0);
  if (lVar7 != lVar6) goto LAB_0d40cc74;
LAB_0d40ccbf:
  iStack_f8 = *(int *)(puStack_f0 + 2) + -1;
  uStack_100 = (ulong)((int)puStack_f0[1] + 1) | puStack_f0[1] & 0xffffffff00000000;
  uVar4 = (**(code **)(*plStack_e8 + 0x28))(plStack_e8,&uStack_100);
  if (*(long *)(param_1 + 0xe8) != *(long *)(param_1 + 0xf0)) {
    uVar5 = func_0x0d3d5770(uVar4);
    lVar6 = *(long *)(param_1 + 0xf0);
    for (lVar7 = *(long *)(param_1 + 0xe8); lVar7 != lVar6; lVar7 = lVar7 + 0xa8) {
      cVar2 = func_0x0c6e95e0(lVar7,uVar5);
      if (cVar2 != '\0') goto LAB_0d40cdb3;
    }
    lVar7 = *(long *)(param_1 + 0xb8);
    lVar6 = *(long *)(param_1 + 0xc0);
LAB_0d40cd68:
    param_2 = puStack_f0;
    if (lVar7 != lVar6) {
      uVar4 = func_0x0d3d5770(uVar4);
      lVar6 = *(long *)(param_1 + 0xc0);
      for (lVar7 = *(long *)(param_1 + 0xb8); param_2 = puStack_f0, lVar7 != lVar6;
          lVar7 = lVar7 + 0xa8) {
        cVar2 = func_0x0c6e95e0(lVar7,uVar4);
        if (cVar2 != '\0') goto LAB_0d40cdb3;
      }
    }
    goto LAB_0d40ceb5;
  }
  lVar7 = *(long *)(param_1 + 0xb8);
  lVar6 = *(long *)(param_1 + 0xc0);
  if (lVar7 != lVar6) goto LAB_0d40cd68;
LAB_0d40cdb3:
  iStack_f8 = *(int *)(puStack_f0 + 2) + -1;
  uStack_100 = (ulong)((int)puStack_f0[1] - 1) | puStack_f0[1] & 0xffffffff00000000;
  uVar4 = (**(code **)(*plStack_e8 + 0x28))(plStack_e8,&uStack_100);
  if (*(long *)(param_1 + 0xe8) != *(long *)(param_1 + 0xf0)) {
    uVar5 = func_0x0d3d5770(uVar4);
    lVar6 = *(long *)(param_1 + 0xf0);
    for (lVar7 = *(long *)(param_1 + 0xe8); lVar7 != lVar6; lVar7 = lVar7 + 0xa8) {
      cVar2 = func_0x0c6e95e0(lVar7,uVar5);
      if (cVar2 != '\0') goto LAB_0d40cf17;
    }
    lVar7 = *(long *)(param_1 + 0xb8);
    lVar6 = *(long *)(param_1 + 0xc0);
LAB_0d40ce68:
    param_2 = puStack_f0;
    if (lVar7 != lVar6) {
      uVar4 = func_0x0d3d5770(uVar4);
      lVar6 = *(long *)(param_1 + 0xc0);
      param_2 = puStack_f0;
      for (lVar7 = *(long *)(param_1 + 0xb8); puStack_f0 = param_2, lVar7 != lVar6;
          lVar7 = lVar7 + 0xa8) {
        cVar2 = func_0x0c6e95e0(lVar7,uVar4);
        if (cVar2 != '\0') goto LAB_0d40cf17;
        param_2 = puStack_f0;
      }
    }
    goto LAB_0d40ceb5;
  }
  lVar7 = *(long *)(param_1 + 0xb8);
  lVar6 = *(long *)(param_1 + 0xc0);
  if (lVar7 != lVar6) goto LAB_0d40ce68;
LAB_0d40cf17:
  lVar7 = func_0x0c6e9230(lVar9);
  if (lVar7 == 0) {
    lVar7 = func_0x0cc41df0(0xf6ff9e0,0xf6eae50,1);
  }
  lVar9 = func_0x0c6e9230(lVar9);
  param_2 = puStack_f0;
  if (lVar9 == 0) {
    lVar9 = func_0x0cc41df0(0xf6ff9e0,0xf6eae50,1);
  }
  bVar17 = (*(byte *)(param_1 + 0x1f7) ^ 1) & *(byte *)(param_1 + 0x1f6);
  uStack_100 = param_2[1];
  iStack_f8 = *(int *)(param_2 + 2) + -1;
  uVar4 = (**(code **)(*plStack_e8 + 0x28))(plStack_e8,&uStack_100);
  bVar3 = func_0x0d40d330(param_1,uVar4,2);
  uVar12 = (uint)bVar3;
  if ((bVar3 != 0) && (lVar9 = lVar7, bVar17 != 0)) {
    lVar9 = func_0x0cb91980(lVar7,0);
    uVar12 = 1;
  }
  iStack_f8 = *(int *)(param_2 + 2);
  uStack_100 = CONCAT44(*(undefined4 *)((long)param_2 + 0xc),*(int *)(param_2 + 1) + 1);
  uVar4 = (**(code **)(*plStack_e8 + 0x28))(plStack_e8,&uStack_100);
  cVar2 = func_0x0d40d330(param_1,uVar4,3);
  if (cVar2 != '\0') {
    lVar9 = lVar7;
    if (bVar17 != 0) {
      lVar9 = func_0x0cb91980(lVar7,1);
    }
    uVar12 = uVar12 + 1;
  }
  uStack_100 = param_2[1];
  iStack_f8 = *(int *)(param_2 + 2) + 1;
  uVar4 = (**(code **)(*plStack_e8 + 0x28))(plStack_e8,&uStack_100);
  cVar2 = func_0x0d40d330(param_1,uVar4,4);
  if (cVar2 != '\0') {
    lVar9 = lVar7;
    if (bVar17 != 0) {
      lVar9 = func_0x0cb91980(lVar7,2);
    }
    uVar12 = uVar12 + 1;
  }
  iStack_f8 = *(int *)(param_2 + 2);
  uStack_100 = CONCAT44(*(undefined4 *)((long)param_2 + 0xc),*(int *)(param_2 + 1) + -1);
  uVar4 = (**(code **)(*plStack_e8 + 0x28))(plStack_e8,&uStack_100);
  cVar2 = func_0x0d40d330(param_1,uVar4,5);
  if (cVar2 != '\0') {
    lVar9 = lVar7;
    if (bVar17 != 0) {
      lVar9 = func_0x0cb91980(lVar7,3);
    }
    uVar12 = uVar12 + 1;
    param_2 = puStack_f0;
  }
  if ((lVar9 == 0) || (puVar15 = puStack_e0, (int)uVar12 < *(int *)(param_1 + 0x1f0)))
  goto LAB_0d40ceb5;
LAB_0d40c6c5:
  lVar7 = lStack_38;
  if ((*(char *)(param_1 + 500) == '\x01') &&
     (cVar2 = (**(code **)(*(long *)*param_2 + 0x80))((long *)*param_2,puVar15,lStack_38),
     cVar2 == '\0')) {
    uStack_90 = 0x1e00000141231f;
    uStack_98 = 0x3c0000014dc100;
    puVar16 = &uStack_90;
    puVar18 = &uStack_98;
    func_0x0d3dfbc0(param_2 + 5,puVar16,puVar18);
    goto LAB_0d40c4d7;
  }
  if ((*(char *)(param_1 + 0x1f5) == '\x01') &&
     (cVar2 = (**(code **)(*(long *)*param_2 + 0x90))((long *)*param_2,puVar15,lVar7), cVar2 == '\0'
     )) {
    uStack_a0 = 0x1e00000141231f;
    uStack_a8 = 0x4000000126962f;
    puVar16 = &uStack_a0;
    puVar18 = &uStack_a8;
    func_0x0d3dfbc0(param_2 + 5,puVar16,puVar18);
    goto LAB_0d40c4d7;
  }
  cVar2 = func_0x0d3d0a50(*param_2,puVar15,param_1 + 0x1d8);
  if (cVar2 == '\0') {
    uStack_b0 = 0x1e00000141231f;
    uStack_b8 = 0x3e000001458485;
    puVar16 = &uStack_b0;
    puVar18 = &uStack_b8;
    func_0x0d3dfbc0(param_2 + 5,puVar16,puVar18);
    goto LAB_0d40c4d7;
  }
  if (*(char *)(param_1 + 0x1f7) == '\x01') {
    uVar12 = func_0x0ee4a030(*(undefined8 *)(param_2[3] + 0x9f8),0);
    lVar9 = func_0x0cb91980(lVar9,uVar12 & 3);
    if (lVar9 == 0) {
      uStack_c0 = 0x1e00000141231f;
      uStack_c8 = 0x390000013a3cf8;
      puVar16 = &uStack_c0;
      puVar18 = &uStack_c8;
      func_0x0d3dfbc0(param_2 + 5,puVar16,puVar18);
      goto LAB_0d40c4d7;
    }
  }
  cVar2 = (**(code **)(*(long *)*param_2 + 0x60))((long *)*param_2,puVar15,lVar9,3);
  uVar14 = (ulong)*(uint *)(param_2 + 2) + 0x100000000;
  uVar8 = param_2[1];
  if (cVar2 == '\0') {
    uVar14 = 0;
    uVar8 = 0;
  }
  uVar10 = uVar8 >> 8;
  uVar13 = uVar14 >> 0x20;
  if (uVar14 >> 0x20 != 0) goto LAB_0d40c54f;
  uStack_d0 = 0x1e00000141231f;
  uStack_d8 = 0x1900000128376c;
  puVar16 = &uStack_d0;
  puVar18 = &uStack_d8;
  func_0x0d3dfbc0(param_2 + 5,puVar16,puVar18);
  goto LAB_0d40c4e1;
  while (lVar7 = lVar7 + 0xa8, lVar7 != lVar6) {
LAB_0d40c5fd:
    cVar2 = func_0x0c6e95e0(lVar7,uVar5);
    if (cVar2 != '\0') goto LAB_0d40c831;
  }
LAB_0d40c61c:
  lVar7 = *(long *)(param_1 + 0xb8);
  lVar6 = *(long *)(param_1 + 0xc0);
LAB_0d40c7e6:
  param_2 = puStack_f0;
  if (lVar7 != lVar6) {
    uVar4 = func_0x0d3d5770(uVar4);
    lVar6 = *(long *)(param_1 + 0xc0);
    for (lVar7 = *(long *)(param_1 + 0xb8); param_2 = puStack_f0, lVar7 != lVar6;
        lVar7 = lVar7 + 0xa8) {
      cVar2 = func_0x0c6e95e0(lVar7,uVar4);
      if (cVar2 != '\0') goto LAB_0d40c831;
    }
  }
LAB_0d40ceb5:
  uStack_80 = 0x1e00000141231f;
  uStack_88 = 0x2c0000012b5cfa;
  puVar16 = &uStack_80;
  puVar18 = &uStack_88;
  func_0x0d3dfbc0(param_2 + 5,puVar16,puVar18);
LAB_0d40c4d7:
  uVar13 = 0;
  uVar14 = 0;
  uVar10 = 0;
  uVar8 = 0;
LAB_0d40c4e1:
  if ((*puVar18 >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(*puVar18 & 0xff00ffffffffffff) - 8);
  }
  *puVar18 = 0;
  if ((*puVar16 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(*puVar16 & 0xff00ffffffffffff) - 8);
  }
  *puVar16 = 0;
LAB_0d40c54f:
  auVar19._0_8_ = uVar8 & 0xff | uVar10 << 8;
  auVar19._8_8_ = uVar14 & 0xffffffff | uVar13 << 0x20;
  return auVar19;
}


```

## `d413660` — SnapToSurfaceFeature::vslot2

- instructions: 271
- calls: d3dfbc0, d413b20, ee4a030

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] SnapToSurfaceFeature_v2(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [12];
  byte bVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  bool bVar13;
  undefined1 auVar14 [16];
  ulong uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  plVar2 = (long *)*param_2;
  plVar3 = (long *)param_2[3];
  puVar1 = param_2 + 1;
  uVar11 = *(uint *)(param_1 + 0x2c);
  if (uVar11 == 3) {
    bVar6 = (**(code **)(*plVar3 + 0x28))(plVar3);
    uVar11 = (uint)(bVar6 ^ 1);
LAB_0d41369d:
    lVar7 = (**(code **)(*plVar2 + 0x28))(plVar2,puVar1);
    if ((*(long *)(*(long *)(lVar7 + 0x68) + 200) == _DAT_0f6eaec0) ||
       (**(char **)(*(long *)(lVar7 + 0x68) + 0x20) == '\x05')) {
      bVar13 = uVar11 == 0;
    }
    else {
      bVar13 = uVar11 != 0;
    }
    auVar14 = func_0x0d413b20(param_1,plVar2,puVar1,bVar13);
    auVar5 = auVar14._0_12_;
    if ((auVar14._8_8_ & 0x100000000) == 0) goto LAB_0d4139ae;
LAB_0d4137de:
    uStack_78 = auVar5._0_8_;
    if ((*(char *)(param_1 + 0x18) == '\x01') &&
       (plVar2 = *(long **)(*(long *)(*(long *)(param_1 + 0x10) + 0x18) +
                           *(long *)(param_1 + 0x20) * 8), plVar2 != (long *)0x0)) {
      if ((*(char *)(param_1 + 9) != '\0') || ((char)plVar2[1] != '\x01')) {
        uStack_80 = *param_2;
        uStack_70 = auVar5._8_4_;
        uStack_68 = *(undefined4 *)(param_2 + 3);
        uStack_64 = *(undefined4 *)((long)param_2 + 0x1c);
        uStack_60 = *(undefined4 *)(param_2 + 4);
        uStack_5c = *(undefined4 *)((long)param_2 + 0x24);
        uStack_58 = param_2[5];
        auVar14 = (**(code **)(*plVar2 + 0x10))(plVar2,&uStack_80);
        uVar8 = auVar14._0_8_ & 0xff;
        uVar12 = auVar14._0_8_ & 0xffffffffffffff00;
        uVar9 = auVar14._8_8_ & 0xff00000000;
        uVar10 = auVar14._8_8_ & 0xffffffff;
        goto LAB_0d413a64;
      }
      uStack_48 = 0x2100000123ca94;
      uStack_50 = 0x1d000001219d14;
      func_0x0d3dfbc0(param_2 + 5,&uStack_48,&uStack_50);
      if ((uStack_50 >> 0x37 & 1) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_50 & 0xff00ffffffffffff) - 8);
      }
      if ((uStack_48 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_48 & 0xff00ffffffffffff) - 8);
      }
    }
    else {
      uStack_88 = 0x2100000123ca94;
      uStack_90 = 0x28000001458584;
      func_0x0d3dfbc0(param_2 + 5,&uStack_88,&uStack_90);
      if ((uStack_90 >> 0x37 & 1) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_90 & 0xff00ffffffffffff) - 8);
      }
      if ((uStack_88 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_88 & 0xff00ffffffffffff) - 8);
      }
    }
  }
  else {
    if (uVar11 < 2) goto LAB_0d41369d;
    uStack_80 = CONCAT44(uStack_80._4_4_,0x4030502);
    uVar8 = func_0x0ee4a030(plVar3[0x13f],0);
    if ((uVar8 & 1) == 0) {
      uStack_80 = CONCAT62(uStack_80._2_6_,0x205);
    }
    uVar11 = func_0x0ee4a030(plVar3[0x13f],0);
    uVar11 = uVar11 % 3;
    if (uVar11 != 2) {
      uStack_80._0_3_ =
           CONCAT12(*(undefined1 *)((long)&uStack_80 + (ulong)uVar11),(undefined2)uStack_80);
      *(undefined1 *)((long)&uStack_80 + (ulong)uVar11) = 3;
    }
    uVar11 = func_0x0ee4a030(plVar3[0x13f],0);
    uVar11 = uVar11 & 3;
    if (uVar11 != 3) {
      uStack_80._0_4_ =
           CONCAT13(*(undefined1 *)((long)&uStack_80 + (ulong)uVar11),(undefined3)uStack_80);
      *(undefined1 *)((long)&uStack_80 + (ulong)uVar11) = 4;
    }
    auVar14 = func_0x0d413b20(param_1,plVar2,puVar1,uStack_80 & 0xff);
    if ((auVar14._8_8_ & 0x100000000) != 0) {
LAB_0d4137cd:
      auVar4._8_8_ = auVar14._8_8_ & 0xffffffff;
      auVar4._0_8_ = auVar14._0_8_;
      auVar5 = auVar4._0_12_;
      goto LAB_0d4137de;
    }
    auVar14 = func_0x0d413b20(param_1,plVar2,puVar1,uStack_80._1_1_);
    if ((auVar14._8_8_ & 0x100000000) != 0) goto LAB_0d4137cd;
    auVar14 = func_0x0d413b20(param_1,plVar2,puVar1,uStack_80._2_1_);
    if (((auVar14._8_8_ & 0x100000000) != 0) ||
       (auVar14 = func_0x0d413b20(param_1,plVar2,puVar1), (auVar14._8_8_ & 0x100000000) != 0))
    goto LAB_0d4137cd;
LAB_0d4139ae:
    uStack_38 = 0x2100000123ca94;
    uStack_40 = 0x260000012696e8;
    func_0x0d3dfbc0(param_2 + 5,&uStack_38,&uStack_40);
    if ((uStack_40 >> 0x37 & 1) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_40 & 0xff00ffffffffffff) - 8);
    }
    if ((uStack_38 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_38 & 0xff00ffffffffffff) - 8);
    }
  }
  uVar8 = 0;
  uVar10 = 0;
  uVar9 = 0;
  uVar12 = 0;
LAB_0d413a64:
  auVar14._8_8_ = uVar10 | uVar9;
  auVar14._0_8_ = uVar8 | uVar12;
  return auVar14;
}


```

## `d417830` — StructureTemplateFeature::vslot2

- instructions: 294
- calls: 412a280, d3dfbc0, d417df0, eee4390

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] StructureTemplateFeature_v2(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  undefined8 *puVar12;
  float fVar13;
  undefined1 auVar14 [16];
  char cStack_115;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  undefined8 uStack_108;
  int iStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  uint uStack_e0;
  undefined8 *puStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  long lStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined2 uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_64;
  int iStack_5c;
  undefined7 uStack_58;
  undefined1 uStack_51;
  undefined5 uStack_50;
  char cStack_4b;
  undefined1 uStack_4a;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    uStack_c0 = 0x240000011ec59d;
    uStack_c8 = 0x1c00000130265a;
    func_0x0d3dfbc0(param_2 + 5,&uStack_c0,&uStack_c8);
    if ((uStack_c8 >> 0x37 & 1) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_c8 & 0xff00ffffffffffff) - 8);
    }
    if ((uStack_c0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_c0 & 0xff00ffffffffffff) - 8);
    }
    uVar8 = 0;
    uVar7 = 0;
  }
  else {
    cStack_115 = *(char *)(param_1 + 0x1c);
    if (cStack_115 == -1) {
      cStack_115 = (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],4);
    }
    iStack_100 = 0;
    uStack_108 = 0;
    if (*(char *)(param_1 + 0x1d) == '\x01') {
      uStack_f8 = CONCAT44(uStack_f8._4_4_,(float)*(int *)(*(long *)(param_1 + 0x10) + 0x38));
      fVar13 = (float)func_0x0eee4390((float)*(int *)(*(long *)(param_1 + 0x10) + 0x30) *
                                      _DAT_011986e0);
      uStack_108 = CONCAT44(uStack_108._4_4_,-(int)fVar13);
      fVar13 = (float)func_0x0eee4390((float)uStack_f8 * _DAT_011986e0);
      iStack_100 = -(int)fVar13;
    }
    uStack_e0 = *(uint *)(param_2 + 2);
    uStack_e8 = param_2[1];
    uVar1 = *param_2;
    iStack_b4 = *(int *)(param_1 + 0x18) * 2 + 1;
    iStack_b4 = iStack_b4 * iStack_b4;
    iStack_110 = 1;
    iStack_114 = 0;
    iStack_ac = 0;
    iVar6 = 1;
    uVar8 = 0;
    iVar11 = 0;
    puStack_d8 = param_2;
    lStack_a0 = param_1;
    do {
      iStack_a8 = iVar6 + (uint)(iVar6 == 0);
      iStack_ac = iStack_ac + iStack_a8;
      iVar5 = 0;
      iStack_b0 = iVar6;
      do {
        uVar9 = *(int *)(puStack_d8 + 2) + iVar11;
        uVar7 = CONCAT44(*(undefined4 *)((long)puStack_d8 + 0xc),
                         *(int *)(puStack_d8 + 1) + (int)uVar8);
        uStack_90 = CONCAT44(uStack_90._4_4_,uVar9);
        puVar12 = *(undefined8 **)(lStack_a0 + 0x28);
        puVar2 = *(undefined8 **)(lStack_a0 + 0x30);
        iStack_10c = iVar11;
        uStack_f8 = uVar8;
        iStack_a4 = iVar5;
        uStack_98 = uVar7;
        if (puVar12 == puVar2) {
LAB_0d417af1:
          lVar3 = lStack_a0;
          iVar11 = *(int *)(*(long *)(lStack_a0 + 0x10) + 0x34);
          iVar6 = 1;
          if (1 < iVar11) {
            iVar6 = iVar11;
          }
          iVar11 = *(int *)(lStack_a0 + 0x20);
          iVar5 = iVar6 + -1;
          if (iVar11 <= iVar6 + -1) {
            iVar5 = iVar11;
          }
          iVar6 = 0;
          if (-1 < iVar11) {
            iVar6 = iVar5;
          }
          uStack_e8 = uVar7;
          uStack_e0 = uVar9;
          if (iVar11 != iVar6) {
            func_0x0d417df0(lStack_a0 + 0x20,*(long *)(lStack_a0 + 0x10) + 0x34,iVar6);
            iVar11 = iVar6;
          }
          uStack_88 = _DAT_01da19f8;
          uStack_98 = _DAT_01da19e8;
          uStack_90 = _UNK_01da19f0;
          uStack_7c = 0x100;
          uStack_78 = 0xffffffffffffffff;
          uStack_70 = _DAT_01da0658;
          uStack_68 = _DAT_01da0660;
          uStack_58 = 0;
          uStack_51 = 0;
          uStack_50 = 0;
          uStack_4a = 0;
          uStack_48 = _DAT_014e72a0;
          uStack_40 = 0;
          uStack_80 = 1;
          cStack_4b = cStack_115;
          if (cStack_115 == '\x03') {
            iStack_5c = -(int)uStack_108;
            iVar6 = iStack_100;
          }
          else if (cStack_115 == '\x02') {
            iVar6 = -(int)uStack_108;
            iStack_5c = -iStack_100;
          }
          else {
            iStack_5c = iStack_100;
            iVar6 = (int)uStack_108;
            if (cStack_115 == '\x01') {
              iStack_5c = (int)uStack_108;
              iVar6 = -iStack_100;
            }
          }
          uStack_64 = CONCAT44(uStack_108._4_4_ - iVar11,iVar6);
          (**(code **)(*(long *)*puStack_d8 + 0x78))
                    ((long *)*puStack_d8,&uStack_e8,*(undefined8 *)(lVar3 + 0x10),&uStack_98);
          uVar8 = uStack_e8;
          uVar7 = (ulong)uStack_e0;
          if ((uStack_98 & 1) != 0) {
            func_0x0412a280(uStack_88,uStack_98 & 0xfffffffffffffffe);
          }
          uVar10 = 0x100000000;
          goto LAB_0d417d43;
        }
        while( true ) {
          cVar4 = (**(code **)(*(long *)*puVar12 + 0x10))
                            ((long *)*puVar12,uVar1,&uStack_98,&cStack_115,&uStack_108);
          if (cVar4 == '\0') break;
          puVar12 = puVar12 + 1;
          if (puVar12 == puVar2) {
            uVar9 = iStack_10c + *(int *)(puStack_d8 + 2);
            uVar7 = CONCAT44(*(undefined4 *)((long)puStack_d8 + 0xc),
                             (int)uStack_f8 + *(int *)(puStack_d8 + 1));
            goto LAB_0d417af1;
          }
        }
        uVar8 = (ulong)(uint)((int)uStack_f8 + iStack_110);
        iVar11 = iStack_10c + iStack_114;
        iVar5 = iStack_a4 + 1;
      } while (iVar5 != iStack_a8);
      iVar5 = -iStack_114;
      iVar6 = iStack_b0 + (uint)(iStack_114 != 0);
      iStack_114 = iStack_110;
      iStack_110 = iVar5;
    } while (iStack_ac < iStack_b4);
    uStack_d0 = 0x240000011ec59d;
    uStack_f0 = 0x1e0000011cbb4c;
    func_0x0d3dfbc0(puStack_d8 + 5,&uStack_d0,&uStack_f0);
    if ((uStack_f0 >> 0x37 & 1) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_f0 & 0xff00ffffffffffff) - 8);
    }
    uStack_f0 = 0;
    if ((uStack_d0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_d0 & 0xff00ffffffffffff) - 8);
    }
    uVar7 = 0;
    uVar10 = 0;
    uVar8 = 0;
LAB_0d417d43:
    uVar7 = uVar7 | uVar10;
  }
  auVar14._8_8_ = uVar7;
  auVar14._0_8_ = uVar8;
  return auVar14;
}


```

## `d41ebf0` — SurfaceRelativeThresholdFeature::vslot2

- instructions: 133
- calls: d3dfbc0

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] SurfaceRelativeThresholdFeature_v2(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  
  lVar2 = (**(code **)(*(long *)*param_2 + 0xe8))();
  plVar1 = *(long **)(lVar2 + 0x40);
  if (plVar1 == (long *)0x0) {
LAB_0d41ec3a:
    uStack_38 = 0x2c0000011b8490;
    uStack_40 = 0x2000000129cd35;
    func_0x0d3dfbc0(param_2 + 5,&uStack_38,&uStack_40);
    if ((uStack_40 >> 0x37 & 1) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_40 & 0xff00ffffffffffff) - 8);
    }
    if ((uStack_38 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_38 & 0xff00ffffffffffff) - 8);
    }
  }
  else {
    uVar3 = (**(code **)(*plVar1 + 0x10))
                      (plVar1,CONCAT44(*(int *)(param_2 + 2) >> 2,*(int *)(param_2 + 1) >> 2));
    if ((uVar3 & 0x10000) == 0) goto LAB_0d41ec3a;
    if ((*(int *)((long)param_2 + 0xc) < (int)(short)uVar3 - *(int *)(param_1 + 0x28)) &&
       (*(char *)(param_1 + 0x18) == '\x01')) {
      plVar1 = *(long **)(*(long *)(*(long *)(param_1 + 0x10) + 0x18) +
                         *(long *)(param_1 + 0x20) * 8);
      if (plVar1 == (long *)0x0) goto LAB_0d41ed55;
      if ((*(char *)(param_1 + 9) != '\0') || ((char)plVar1[1] == '\0')) {
        auVar7 = (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
        uVar3 = auVar7._0_8_ & 0xff;
        uVar6 = auVar7._0_8_ & 0xffffffffffffff00;
        uVar4 = auVar7._8_8_ & 0xff00000000;
        uVar5 = auVar7._8_8_ & 0xffffffff;
        goto LAB_0d41ee0b;
      }
    }
    else {
LAB_0d41ed55:
      uStack_28 = 0x2c0000011b8490;
      uStack_30 = 0x3d00000136f78c;
      func_0x0d3dfbc0(param_2 + 5,&uStack_28,&uStack_30);
      if ((uStack_30 >> 0x37 & 1) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_30 & 0xff00ffffffffffff) - 8);
      }
      if ((uStack_28 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_28 & 0xff00ffffffffffff) - 8);
      }
    }
  }
  uVar5 = 0;
  uVar3 = 0;
  uVar4 = 0;
  uVar6 = 0;
LAB_0d41ee0b:
  auVar7._8_8_ = uVar5 | uVar4;
  auVar7._0_8_ = uVar3 | uVar6;
  return auVar7;
}


```

## `d41fd70` — VegetationPatchFeature::vslot2

- instructions: 903
- calls: 412a280, 4882e20, 4882eb0, 4aa2290, 4f49170, 5a37050, c6e95e0, c6eb860, cc41df0, cd56a20, cd56b30, d3dfbc0, ee386e0, eec74c0, eeddcf0, eee2d70, eee2f00, eee2fc0, eee35d0

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] VegetationPatchFeature_v2(long param_1,ulong *param_2)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  ulong *puVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  undefined8 uVar14;
  ulong uVar15;
  int iVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  ulong *puVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  float fVar25;
  undefined1 auVar26 [16];
  ulong *puStack_140;
  ulong *puStack_138;
  ulong *puStack_130;
  ulong *puStack_128;
  ulong *puStack_120;
  ulong *puStack_118;
  ulong *puStack_108;
  undefined8 uStack_100;
  int iStack_f8;
  int iStack_f4;
  long lStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  int iStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  long *plStack_a8;
  ulong *puStack_a0;
  ulong uStack_98;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  long lStack_80;
  long lStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  int iStack_38;
  
  uVar20 = *(uint *)(param_1 + 0x100);
  iVar6 = *(int *)(param_1 + 0x104);
  if ((int)uVar20 < iVar6 + -1) {
    iVar6 = (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],iVar6 - uVar20);
    uVar7 = iVar6 + uVar20;
    uVar20 = *(uint *)(param_1 + 0x100);
    iVar6 = *(int *)(param_1 + 0x104);
    if (iVar6 + -1 <= (int)uVar20) goto LAB_0d41fddf;
  }
  else {
    uVar7 = uVar20;
    if (iVar6 + -1 <= (int)uVar20) goto LAB_0d41fddf;
  }
  iVar6 = (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],iVar6 - uVar20);
  uVar20 = uVar20 + iVar6;
LAB_0d41fddf:
  plVar1 = (long *)*param_2;
  puStack_a0 = param_2;
  if (((int)uVar7 < -1) || ((int)uVar20 < -1)) {
    puStack_140 = (ulong *)0x0;
    puStack_108 = (ulong *)0x0;
    puStack_130 = (ulong *)0x0;
    puStack_138 = (ulong *)0x0;
  }
  else {
    iStack_8c = uVar7 + 1;
    iStack_f4 = uVar20 + 1;
    plStack_a8 = (long *)param_2[3];
    uStack_58 = (ulong)(*(int *)(param_1 + 0xe8) == 0);
    uStack_98 = (ulong)(byte)(&UNK_01591886)[uStack_58];
    uVar15 = (ulong)~uVar7;
    uStack_68 = (ulong)~uVar20;
    lStack_78 = param_1 + 0x28;
    lStack_80 = param_1 + 0xb8;
    puStack_140 = (ulong *)0x0;
    puStack_108 = (ulong *)0x0;
    puStack_130 = (ulong *)0x0;
    puStack_138 = (ulong *)0x0;
    uStack_48 = uVar15;
    do {
      iVar6 = (int)uVar15;
      bVar22 = iVar6 != (int)uStack_48;
      bVar23 = iVar6 != iStack_8c;
      uVar18 = uStack_68;
      uStack_70 = uVar15;
      do {
        iVar6 = (int)uVar18;
        puVar17 = puStack_140;
        uStack_60 = uVar18;
        if ((bVar23 && bVar22 || iVar6 != iStack_f4 && iVar6 != (int)uStack_68) &&
           (((iVar6 != iStack_f4 && iVar6 != (int)uStack_68) && (bVar23 && bVar22) ||
            (((*(float *)(param_1 + 0x108) != _DAT_011983fc ||
              (NAN(*(float *)(param_1 + 0x108)) || NAN(_DAT_011983fc))) &&
             (fVar25 = (float)(**(code **)(*plStack_a8 + 0x30))(),
             fVar25 < *(float *)(param_1 + 0x108) || fVar25 == *(float *)(param_1 + 0x108))))))) {
          uStack_d8 = CONCAT44(*(undefined4 *)((long)puStack_a0 + 0xc),
                               (int)puStack_a0[1] + (int)uStack_70);
          uStack_d0 = CONCAT44(uStack_d0._4_4_,(int)puStack_a0[2] + (int)uStack_60);
          for (iVar6 = 0;
              (lVar12 = (**(code **)(*plVar1 + 0x28))(plVar1,&uStack_d8),
              *(long *)(*(long *)(lVar12 + 0x68) + 200) == _DAT_0f6eaec0 &&
              (iVar6 < *(int *)(param_1 + 0xf8))); iVar6 = iVar6 + 1) {
            uStack_d8 = CONCAT44(uStack_d8._4_4_ + (char)(&UNK_01cc3923)[uStack_58],
                                 (undefined4)uStack_d8);
          }
          iVar6 = 0;
          while( true ) {
            lVar12 = (**(code **)(*plVar1 + 0x28))(plVar1,&uStack_d8);
            if ((*(long *)(*(long *)(lVar12 + 0x68) + 200) == _DAT_0f6eaec0) ||
               (*(int *)(param_1 + 0xf8) <= iVar6)) break;
            uStack_d8 = CONCAT44(uStack_d8._4_4_ + (char)(&UNK_01cc3923)[uStack_98],
                                 (undefined4)uStack_d8);
            iVar6 = iVar6 + 1;
          }
          uStack_40 = uStack_d8;
          iStack_38 = (int)uStack_d0;
          iVar6 = (int)(char)(&UNK_01cc3923)[uStack_58];
          uStack_100 = uStack_d8 & 0xffffffff | (ulong)(uint)(uStack_d8._4_4_ + iVar6) << 0x20;
          iStack_f8 = (int)uStack_d0;
          lVar12 = (**(code **)(*plVar1 + 0x28))(plVar1,&uStack_100);
          lVar9 = (**(code **)(*plVar1 + 0x28))(plVar1,&uStack_40);
          if (*(long *)(*(long *)(lVar9 + 0x68) + 200) == _DAT_0f6eaec0) {
            piVar13 = (int *)func_0x0cd56a20(lVar12);
            if (piVar13 == (int *)0x0) {
LAB_0d42018c:
              cVar5 = (**(code **)(**(long **)(lVar12 + 0x68) + 0x90))
                                (*(long **)(lVar12 + 0x68),lVar12,uStack_98,2);
LAB_0d4201a9:
              if (cVar5 == '\0') goto LAB_0d41ffa0;
            }
            else if (*piVar13 != 0) {
              if (*piVar13 != 1) goto LAB_0d42018c;
              cVar5 = func_0x0cd56b30(lVar12,uStack_98);
              goto LAB_0d4201a9;
            }
            uVar20 = 0;
            if (_DAT_011983fc < *(float *)(param_1 + 0xf4)) {
              fVar25 = (float)(**(code **)(*plStack_a8 + 0x30))();
              uVar20 = (uint)(fVar25 < *(float *)(param_1 + 0xf4));
            }
            iVar16 = *(int *)(param_1 + 0xec);
            if (iVar16 < *(int *)(param_1 + 0xf0) + -1) {
              iVar8 = (**(code **)(*plStack_a8 + 0x18))
                                (plStack_a8,*(int *)(param_1 + 0xf0) - iVar16);
              iVar16 = iVar16 + iVar8;
            }
            if (iVar16 + uVar20 != 0) {
              iVar8 = 0;
              iStack_88 = iVar6;
              iStack_84 = iVar16 + uVar20;
              do {
                lStack_f0 = CONCAT44(lStack_f0._4_4_,iVar8);
                uStack_d8 = CONCAT44(iVar8 * iVar6 + uStack_100._4_4_,(undefined4)uStack_100);
                uStack_d0 = CONCAT44(uStack_d0._4_4_,iStack_f8);
                lVar12 = (**(code **)(*plVar1 + 0x28))(plVar1,&uStack_d8);
                lVar12 = *(long *)(lVar12 + 0x68);
                if (*(char *)(param_1 + 0xb1) == '\x01') {
                  lVar10 = func_0x0eee2fc0();
                  lVar11 = *(long *)(param_1 + 0xb8);
                  LOCK();
                  lVar9 = *(long *)(param_1 + 200);
                  bVar24 = lVar11 == lVar9;
                  if (bVar24) {
                    *(long *)(param_1 + 200) = lVar10;
                    lVar9 = lVar11;
                  }
                  UNLOCK();
                  if (!bVar24) {
                    iVar16 = 3000;
                    do {
                      while( true ) {
                        if ((lVar9 == lVar10) && (iVar8 = *(int *)(param_1 + 0xc0) + 1, iVar8 != -1)
                           ) goto LAB_0d420329;
                        if (iVar16 == 0) break;
                        iVar16 = iVar16 + -1;
                        lVar11 = *(long *)(param_1 + 0xb8);
                        LOCK();
                        lVar9 = *(long *)(param_1 + 200);
                        bVar24 = lVar11 == lVar9;
                        if (bVar24) {
                          *(long *)(param_1 + 200) = lVar10;
                          lVar9 = lVar11;
                        }
                        UNLOCK();
                        if (bVar24) goto LAB_0d420324;
                      }
                      func_0x0eee35d0();
                      iVar16 = 0;
                      lVar11 = *(long *)(param_1 + 0xb8);
                      LOCK();
                      lVar9 = *(long *)(param_1 + 200);
                      bVar24 = lVar11 == lVar9;
                      if (bVar24) {
                        *(long *)(param_1 + 200) = lVar10;
                        lVar9 = lVar11;
                      }
                      UNLOCK();
                    } while (!bVar24);
                  }
LAB_0d420324:
                  iVar8 = 1;
LAB_0d420329:
                  *(int *)(param_1 + 0xc0) = iVar8;
                  if (*(char *)(param_1 + 0xb1) == '\x01') {
                    func_0x0c6eb860(lStack_78,1);
                  }
                  if (*(long *)(param_1 + 200) == lVar10) {
                    iVar16 = *(int *)(param_1 + 0xc0);
                    if (iVar16 == 1) {
                      *(undefined4 *)(param_1 + 0xc0) = 0;
                      *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0xb8);
                      goto LAB_0d420430;
                    }
                    if (iVar16 == 0) goto LAB_0d420370;
                    *(int *)(param_1 + 0xc0) = iVar16 + -1;
                    lVar9 = *(long *)(param_1 + 0xa8);
                  }
                  else {
LAB_0d420370:
                    cVar5 = func_0x0eeddcf0(&UNK_01239425,&UNK_01198d5e,0x6d,&UNK_0126e3df,
                                            &UNK_0121f006);
                    if (cVar5 == '\0') goto LAB_0d420430;
                    _DAT_00000000 = 0xdeadc0de;
                    lVar9 = *(long *)(param_1 + 0xa8);
                  }
                }
                else {
LAB_0d420430:
                  lVar9 = *(long *)(param_1 + 0xa8);
                }
                if (lVar9 == 0) {
                  if ((*(char *)(param_1 + 0xa4) == '\x01') && (*(int *)(param_1 + 0xa0) == 0)) {
                    func_0x05a37050(1,3,0x11,&UNK_011feb54);
                  }
                  lVar9 = func_0x0cc41df0(0xf6ff9e0,0xf6eae50,1);
                }
                if (lVar12 != *(long *)(lVar9 + 0x68)) {
                  uVar14 = (**(code **)(*plVar1 + 0x28))(plVar1,&uStack_d8);
                  lVar12 = *(long *)(param_1 + 0x10);
                  lVar9 = *(long *)(param_1 + 0x18);
                  while( true ) {
                    if (lVar12 == lVar9) {
                      if ((int)lStack_f0 != 0) goto LAB_0d420613;
                      goto LAB_0d41ffa0;
                    }
                    cVar5 = func_0x0c6e95e0(lVar12,uVar14);
                    iVar6 = iStack_88;
                    if (cVar5 != '\0') break;
                    lVar12 = lVar12 + 0xa8;
                  }
                  if (*(char *)(param_1 + 0xb1) == '\x01') {
                    lVar11 = func_0x0eee2fc0();
                    lVar9 = *(long *)(param_1 + 0xb8);
                    LOCK();
                    lVar12 = *(long *)(param_1 + 200);
                    bVar24 = lVar9 == lVar12;
                    if (bVar24) {
                      *(long *)(param_1 + 200) = lVar11;
                      lVar12 = lVar9;
                    }
                    UNLOCK();
                    if (!bVar24) {
                      iVar16 = 3000;
                      do {
                        while( true ) {
                          if ((lVar12 == lVar11) &&
                             (iVar8 = *(int *)(param_1 + 0xc0) + 1, iVar8 != -1)) goto LAB_0d420559;
                          if (iVar16 == 0) break;
                          iVar16 = iVar16 + -1;
                          lVar9 = *(long *)(param_1 + 0xb8);
                          LOCK();
                          lVar12 = *(long *)(param_1 + 200);
                          bVar24 = lVar9 == lVar12;
                          if (bVar24) {
                            *(long *)(param_1 + 200) = lVar11;
                            lVar12 = lVar9;
                          }
                          UNLOCK();
                          if (bVar24) goto LAB_0d420554;
                        }
                        func_0x0eee35d0();
                        iVar16 = 0;
                        lVar9 = *(long *)(param_1 + 0xb8);
                        LOCK();
                        lVar12 = *(long *)(param_1 + 200);
                        bVar24 = lVar9 == lVar12;
                        if (bVar24) {
                          *(long *)(param_1 + 200) = lVar11;
                          lVar12 = lVar9;
                        }
                        UNLOCK();
                      } while (!bVar24);
                    }
LAB_0d420554:
                    iVar8 = 1;
LAB_0d420559:
                    *(int *)(param_1 + 0xc0) = iVar8;
                    if (*(char *)(param_1 + 0xb1) == '\x01') {
                      func_0x0c6eb860(lStack_78,1);
                    }
                    if (*(long *)(param_1 + 200) == lVar11) {
                      iVar16 = *(int *)(param_1 + 0xc0);
                      if (iVar16 == 1) {
                        *(undefined4 *)(param_1 + 0xc0) = 0;
                        *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0xb8);
                      }
                      else {
                        if (iVar16 == 0) goto LAB_0d42059c;
                        *(int *)(param_1 + 0xc0) = iVar16 + -1;
                      }
                    }
                    else {
LAB_0d42059c:
                      cVar5 = func_0x0eeddcf0(&UNK_01239425,&UNK_01198d5e,0x6d,&UNK_0126e3df,
                                              &UNK_0121f006);
                      if (cVar5 != '\0') {
                        _DAT_00000000 = 0xdeadc0de;
                      }
                    }
                  }
                  lVar12 = *(long *)(param_1 + 0xa8);
                  if (lVar12 == 0) {
                    if ((*(char *)(param_1 + 0xa4) == '\x01') && (*(int *)(param_1 + 0xa0) == 0)) {
                      func_0x05a37050(1,3,0x11,&UNK_011feb54);
                    }
                    lVar12 = func_0x0cc41df0(0xf6ff9e0,0xf6eae50,1);
                  }
                  (**(code **)(*plVar1 + 0x60))(plVar1,&uStack_d8,lVar12,2);
                }
                iVar8 = (int)lStack_f0 + 1;
              } while (iVar8 != iStack_84);
            }
LAB_0d420613:
            if (puStack_138 < puStack_130) {
              *(int *)(puStack_138 + 1) = iStack_f8;
              *puStack_138 = uStack_100;
              puStack_138 = (ulong *)((long)puStack_138 + 0xc);
              puStack_108 = puStack_138;
            }
            else {
              lVar12 = (long)puStack_138 - (long)puStack_140;
              uVar15 = (lVar12 >> 2) * -0x5555555555555555 + 1;
              if (0x1555555555555555 < uVar15) {
                func_0x04aa2290();
LAB_0d420cf3:
                uVar14 = func_0x04882eb0();
                uVar14 = func_0x04882e20(uVar14);
                uVar14 = func_0x04882e20(uVar14);
                func_0x0ee386e0(&uStack_e8);
                func_0x0ee386e0(&uStack_e0);
                if (puStack_128 != (ulong *)0x0) {
                  puStack_120 = puStack_128;
                  func_0x0412a280(puStack_128,(long)puStack_118 - (long)puStack_128);
                }
                func_0x0eee2d70(uVar14);
                pcVar3 = (code *)swi(3);
                auVar26 = (*pcVar3)();
                return auVar26;
              }
              lStack_f0 = (long)puStack_130 - (long)puStack_140;
              uVar18 = (lStack_f0 >> 2) * 0x5555555555555556;
              if (uVar15 < uVar18) {
                uVar15 = uVar18;
              }
              if (0xaaaaaaaaaaaaaa9 < (ulong)((lStack_f0 >> 2) * -0x5555555555555555)) {
                uVar15 = 0x1555555555555555;
              }
              if (0x1555555555555555 < uVar15) goto LAB_0d420cf3;
              lVar9 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
              if (lVar9 == 0) {
                func_0x0eec74c0(uVar15 * 0xc,0);
              }
              puStack_130 = (ulong *)(uVar15 * 0xc + lVar9);
              *(int *)(lVar9 + 8 + lVar12) = iStack_f8;
              *(ulong *)(lVar9 + lVar12) = uStack_100;
              uVar15 = SUB168(SEXT816(lVar12) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
              puStack_138 = (ulong *)(lVar12 + lVar9 + 0xc);
              puVar17 = (ulong *)(lVar12 + lVar9 + ((uVar15 >> 1) - ((long)uVar15 >> 0x3f)) * 0xc);
              func_0x0eee2f00(puVar17,puStack_140,lVar12);
              puStack_108 = puStack_138;
              if (puStack_140 != (ulong *)0x0) {
                func_0x0412a280(puStack_140,lStack_f0);
              }
            }
          }
        }
LAB_0d41ffa0:
        puStack_140 = puVar17;
        uVar18 = (ulong)((int)uStack_60 + 1);
      } while ((int)uStack_60 != iStack_f4);
      uVar15 = (ulong)((int)uStack_70 + 1);
    } while ((int)uStack_70 != iStack_8c);
  }
  if (*(char *)(param_1 + 0x10c) == '\0') {
    puStack_128 = puStack_140;
    puStack_120 = puStack_138;
    puStack_118 = puStack_130;
  }
  else {
    puStack_128 = (ulong *)0x0;
    puStack_120 = (ulong *)0x0;
    puStack_118 = (ulong *)0x0;
    if (puStack_140 != puStack_108) {
      puVar17 = puStack_140;
      do {
        uStack_d8 = *puVar17;
        uStack_d0 = CONCAT44(uStack_d0._4_4_,(int)puVar17[1] + -1);
        lVar12 = (**(code **)(*plVar1 + 0x28))(plVar1,&uStack_d8);
        piVar13 = (int *)func_0x0cd56a20(lVar12);
        if (piVar13 == (int *)0x0) {
LAB_0d4207d9:
          cVar5 = (**(code **)(**(long **)(lVar12 + 0x68) + 0x90))
                            (*(long **)(lVar12 + 0x68),lVar12,3,2);
LAB_0d42080d:
          if (cVar5 != '\0') {
            uStack_d8 = CONCAT44(*(int *)((long)puVar17 + 4),(int)*puVar17 + 1);
            uStack_d0 = CONCAT44(uStack_d0._4_4_,(int)puVar17[1]);
            lVar12 = (**(code **)(*plVar1 + 0x28))(plVar1,&uStack_d8);
            piVar13 = (int *)func_0x0cd56a20(lVar12);
            if (piVar13 == (int *)0x0) {
LAB_0d42085c:
              cVar5 = (**(code **)(**(long **)(lVar12 + 0x68) + 0x90))
                                (*(long **)(lVar12 + 0x68),lVar12,4,2);
            }
            else {
              if (*piVar13 != 1) {
                if (*piVar13 == 0) goto LAB_0d420790;
                goto LAB_0d42085c;
              }
              cVar5 = func_0x0cd56b30(lVar12,4);
            }
            if (cVar5 != '\0') {
              uStack_d8 = *puVar17;
              uStack_d0 = CONCAT44(uStack_d0._4_4_,(int)puVar17[1] + 1);
              lVar12 = (**(code **)(*plVar1 + 0x28))(plVar1,&uStack_d8);
              piVar13 = (int *)func_0x0cd56a20(lVar12);
              if (piVar13 == (int *)0x0) {
LAB_0d4208cb:
                cVar5 = (**(code **)(**(long **)(lVar12 + 0x68) + 0x90))
                                  (*(long **)(lVar12 + 0x68),lVar12,2,2);
              }
              else {
                if (*piVar13 != 1) {
                  if (*piVar13 == 0) goto LAB_0d420790;
                  goto LAB_0d4208cb;
                }
                cVar5 = func_0x0cd56b30(lVar12,2);
              }
              if (cVar5 != '\0') {
                uStack_d8 = CONCAT44(*(int *)((long)puVar17 + 4),(int)*puVar17 + -1);
                uStack_d0 = CONCAT44(uStack_d0._4_4_,(int)puVar17[1]);
                lVar12 = (**(code **)(*plVar1 + 0x28))(plVar1,&uStack_d8);
                piVar13 = (int *)func_0x0cd56a20(lVar12);
                if (piVar13 == (int *)0x0) {
LAB_0d420943:
                  cVar5 = (**(code **)(**(long **)(lVar12 + 0x68) + 0x90))
                                    (*(long **)(lVar12 + 0x68),lVar12,5,2);
                }
                else {
                  if (*piVar13 != 1) {
                    if (*piVar13 == 0) goto LAB_0d420790;
                    goto LAB_0d420943;
                  }
                  cVar5 = func_0x0cd56b30(lVar12,5);
                }
                if (cVar5 != '\0') {
                  uStack_d8 = CONCAT44(*(int *)((long)puVar17 + 4) + -1,(int)*puVar17);
                  uStack_d0 = CONCAT44(uStack_d0._4_4_,(int)puVar17[1]);
                  lVar12 = (**(code **)(*plVar1 + 0x28))(plVar1,&uStack_d8);
                  piVar13 = (int *)func_0x0cd56a20(lVar12);
                  if (piVar13 == (int *)0x0) {
LAB_0d4209bb:
                    cVar5 = (**(code **)(**(long **)(lVar12 + 0x68) + 0x90))
                                      (*(long **)(lVar12 + 0x68),lVar12,1,2);
LAB_0d4209e4:
                    if (cVar5 == '\0') goto LAB_0d420790;
                  }
                  else {
                    if (*piVar13 == 1) {
                      cVar5 = func_0x0cd56b30(lVar12,1);
                      goto LAB_0d4209e4;
                    }
                    if (*piVar13 != 0) goto LAB_0d4209bb;
                  }
                  func_0x04f49170(&puStack_128,puVar17);
                }
              }
            }
          }
        }
        else {
          if (*piVar13 == 1) {
            cVar5 = func_0x0cd56b30(lVar12,3);
            goto LAB_0d42080d;
          }
          if (*piVar13 != 0) goto LAB_0d4207d9;
        }
LAB_0d420790:
        puVar4 = puStack_120;
        puVar17 = (ulong *)((long)puVar17 + 0xc);
        puVar21 = puStack_128;
      } while (puVar17 != puStack_108);
      for (; puVar21 != puVar4; puVar21 = (ulong *)((long)puVar21 + 0xc)) {
        uVar14 = func_0x0cc41df0(0xf6ff9e0,&DAT_0f713f00,1);
        (**(code **)(*plVar1 + 0x60))(plVar1,puVar21,uVar14,2);
      }
    }
    if (puStack_140 != (ulong *)0x0) {
      func_0x0412a280(puStack_140,(long)puStack_130 - (long)puStack_140);
    }
  }
  puVar17 = puStack_120;
  if ((puStack_128 != puStack_120) && (0.0 < *(float *)(param_1 + 0xfc))) {
    uVar15 = *puStack_a0;
    plVar1 = (long *)puStack_a0[3];
    uStack_58 = puStack_a0[3];
    uStack_50 = puStack_a0[4];
    puVar21 = (ulong *)((long)puStack_128 + 0xc);
    if (*(float *)(param_1 + 0xfc) <= _DAT_011983fc) goto LAB_0d420b90;
    do {
      fVar25 = (float)(**(code **)(*plVar1 + 0x30))(plVar1);
      if (fVar25 < *(float *)(param_1 + 0xfc)) {
        if (*(char *)(param_1 + 0x10c) == '\x01') {
          uVar18 = (ulong)*(uint *)((long)puVar21 + -0xc);
          iVar6 = (int)puVar21[-1] + -1;
        }
        else {
          uVar18 = *(ulong *)((long)puVar21 + -0xc);
          iVar6 = (int)(uVar18 >> 0x20);
        }
        if ((*(char *)(param_1 + 0xd8) == '\x01') &&
           (plVar2 = *(long **)(*(long *)(*(long *)(param_1 + 0xd0) + 0x18) +
                               *(long *)(param_1 + 0xe0) * 8), plVar2 != (long *)0x0)) {
          iStack_c8 = *(int *)((long)puVar21 + -4);
          uStack_d0 = uVar18 & 0xffffffff |
                      (ulong)(uint)(iVar6 + (char)(&UNK_01cc3923)
                                                  [(byte)(&UNK_01591886)
                                                         [*(int *)(param_1 + 0xe8) == 0]]) << 0x20;
          uStack_c0 = (undefined4)uStack_58;
          uStack_bc = uStack_58._4_4_;
          uStack_b8 = (undefined4)uStack_50;
          uStack_b4 = uStack_50._4_4_;
          uStack_b0 = 0;
          uStack_d8 = uVar15;
          (**(code **)(*plVar2 + 0x10))(plVar2,&uStack_d8);
        }
      }
LAB_0d420b90:
      do {
        if (puVar21 == puVar17) goto LAB_0d420bbb;
        puVar21 = (ulong *)((long)puVar21 + 0xc);
      } while (*(float *)(param_1 + 0xfc) <= _DAT_011983fc);
    } while( true );
  }
LAB_0d420bbb:
  if (puStack_128 == puStack_120) {
    uStack_e0 = 0x22000001494d94;
    uStack_e8 = 0x1e00000140b0fc;
    func_0x0d3dfbc0(puStack_a0 + 5,&uStack_e0,&uStack_e8);
    if ((uStack_e8 >> 0x37 & 1) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_e8 & 0xff00ffffffffffff) - 8);
    }
    uStack_e8 = 0;
    if ((uStack_e0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_e0 & 0xff00ffffffffffff) - 8);
    }
    uStack_e0 = 0;
    uVar18 = 0;
    uVar15 = 0;
    uVar19 = 0;
  }
  else {
    uVar15 = *(ulong *)((long)puStack_120 + -0xc) & 0xff;
    uVar18 = *(ulong *)((long)puStack_120 + -0xc) & 0xffffffffffffff00;
    uVar19 = (ulong)*(uint *)((long)puStack_120 + -4) | 0x100000000;
  }
  if (puStack_128 != (ulong *)0x0) {
    puStack_120 = puStack_128;
    func_0x0412a280(puStack_128,(long)puStack_118 - (long)puStack_128);
  }
  auVar26._8_8_ = uVar19;
  auVar26._0_8_ = uVar15 | uVar18;
  return auVar26;
}


```

## `d425480` — WeightedRandomFeature::vslot2

- instructions: 138
- calls: d3dfbc0

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] WeightedRandomFeature_v2(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  
  plVar4 = *(long **)(param_1 + 0x10);
  plVar5 = *(long **)(param_1 + 0x18);
  if (plVar4 != plVar5) {
    plVar1 = *(long **)(*(long *)(param_2 + 0x18) + 0x9f8);
    iVar2 = 0;
    plVar7 = plVar4;
    do {
      iVar2 = (int)((float)iVar2 + *(float *)(plVar7 + 3));
      plVar7 = plVar7 + 4;
    } while (plVar7 != plVar5);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,iVar2);
      plVar4 = *(long **)(param_1 + 0x10);
      plVar5 = *(long **)(param_1 + 0x18);
    }
    for (; plVar4 != plVar5; plVar4 = plVar4 + 4) {
      iVar2 = (int)((float)iVar2 - *(float *)(plVar4 + 3));
      if (iVar2 < 0) {
        if ((char)plVar4[1] == '\x01') {
          plVar4 = *(long **)(*(long *)(*plVar4 + 0x18) + plVar4[2] * 8);
          if (plVar4 != (long *)0x0) {
            if ((*(char *)(param_1 + 9) != '\0') || ((char)plVar4[1] != '\x01')) {
              auVar8 = (**(code **)(*plVar4 + 0x10))();
              uVar3 = auVar8._0_8_;
              uVar6 = auVar8._8_8_ & 0xffffffffff;
              goto LAB_0d4255bf;
            }
            uStack_20 = 0x210000012bd5bc;
            uStack_28 = 0x1d000001219d14;
            func_0x0d3dfbc0(param_2 + 0x28,&uStack_20,&uStack_28);
            if ((uStack_28 >> 0x37 & 1) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,(uStack_28 & 0xff00ffffffffffff) - 8);
            }
            if ((uStack_20 & 0x80000000000000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,(uStack_20 & 0xff00ffffffffffff) - 8);
            }
            goto LAB_0d4255bb;
          }
        }
        break;
      }
    }
  }
  uStack_30 = 0x210000012bd5bc;
  uStack_38 = 0x1d0000011cbb78;
  func_0x0d3dfbc0(param_2 + 0x28,&uStack_30,&uStack_38);
  if ((uStack_38 >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_38 & 0xff00ffffffffffff) - 8);
  }
  if ((uStack_30 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_30 & 0xff00ffffffffffff) - 8);
  }
LAB_0d4255bb:
  uVar3 = 0;
  uVar6 = 0;
LAB_0d4255bf:
  auVar8._8_8_ = uVar6;
  auVar8._0_8_ = uVar3;
  return auVar8;
}


```

## `d4278f0` — EndPodiumFeature::vslot1

- instructions: 2

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 EndPodiumFeature_v1(long param_1)

{
  undefined8 in_RAX;
  
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return in_RAX;
}


```

## `d427900` — GrowingPlantFeature::vslot0

- instructions: 56
- calls: 412a280, 4abe980

```c

/* WARNING: Possible PIC construction at 0x0d427953: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0d427993: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * GrowingPlantFeature_v0(undefined8 *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_20;
  
  puVar3 = &vt_GrowingPlantFeature;
  *param_1 = &vt_GrowingPlantFeature;
  lVar1 = param_1[10];
  if (lVar1 == 0) {
    lVar1 = param_1[7];
    if (lVar1 == 0) {
      lVar4 = param_1[2];
      if (lVar4 == 0) {
        return puVar3;
      }
      param_1[3] = lVar4;
    }
    else {
      lVar5 = param_1[8];
      lVar4 = lVar1;
      if (lVar1 != lVar5) {
        do {
          lVar5 = lVar5 + -0xb0;
          uStack_20 = 0xd42797f;
          puVar3 = (undefined *)func_0x04abe980(lVar5);
        } while (lVar5 != lVar1);
        lVar4 = param_1[7];
      }
      param_1[8] = lVar1;
      register0x00000020 = (BADSPACEBASE *)&uStack_20;
      uStack_20 = 0xd427998;
    }
  }
  else {
    lVar5 = param_1[0xb];
    lVar4 = lVar1;
    if (lVar1 != lVar5) {
      do {
        lVar5 = lVar5 + -0xb0;
        uStack_20 = 0xd42793f;
        puVar3 = (undefined *)func_0x04abe980(lVar5);
      } while (lVar5 != lVar1);
      lVar4 = param_1[10];
    }
    param_1[0xb] = lVar1;
    register0x00000020 = (BADSPACEBASE *)&uStack_20;
    uStack_20 = 0xd427958;
  }
  *(undefined **)((long)register0x00000020 + -8) = puVar3;
  if (lVar4 != 0) {
    pcVar2 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar2)(&DAT_0f5463b0,lVar4);
  }
  return *(undefined **)((long)register0x00000020 + -8);
}


```

## `d4279c0` — GrowingPlantFeature::vslot1

- instructions: 7
- calls: d427900

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 GrowingPlantFeature_v1(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = GrowingPlantFeature_v0();
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return uVar1;
}


```

## `d4279e0` — HeightDifferenceFilterFeature::vslot1

- instructions: 2

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 HeightDifferenceFilterFeature_v1(long param_1)

{
  undefined8 in_RAX;
  
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return in_RAX;
}


```

## `d4279f0` — HugeFungusFeature::vslot1

- instructions: 2

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 HugeFungusFeature_v1(long param_1)

{
  undefined8 in_RAX;
  
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return in_RAX;
}


```

## `d427a00` — Feature::vslot0, ClayFeature::vslot0, DiscFeature::vslot0 (+53 more)

- instructions: 1

```c

void BambooFeature_v0(void)

{
  return;
}


```

## `d427a10` — HugeMushroomFeature::vslot1

- instructions: 2

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 HugeMushroomFeature_v1(long param_1)

{
  undefined8 in_RAX;
  
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return in_RAX;
}


```

## `d427a20` — MultiBlockFeature::vslot0

- instructions: 30
- calls: 412a280, 4abe980

```c

/* WARNING: Possible PIC construction at 0x0d427a5a: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04abe9ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04abea54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0d427a5f) */
/* WARNING: Removing unreachable block (ram,0x0d427a64) */
/* WARNING: Removing unreachable block (ram,0x04abea59) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long MultiBlockFeature_v0(undefined8 *param_1)

{
  long *plVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  code *pcVar6;
  long lVar7;
  undefined8 *unaff_RBX;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 *unaff_R14;
  undefined8 *puVar12;
  long lVar13;
  long unaff_R15;
  undefined8 uStack_20;
  
  *param_1 = &vt_MultiBlockFeature;
  lVar7 = param_1[0x18];
  if (lVar7 == 0) {
LAB_0d427a81:
    puVar12 = param_1 + 3;
  }
  else {
    if (lVar7 == param_1[0x19]) {
      param_1[0x19] = lVar7;
      uStack_20 = 0xd427a81;
      func_0x0412a280(lVar7,param_1[0x1a] - lVar7);
      goto LAB_0d427a81;
    }
    puVar12 = (undefined8 *)(param_1[0x19] + -0xa8);
    register0x00000020 = (BADSPACEBASE *)&uStack_20;
    uStack_20 = 0xd427a5f;
    unaff_RBX = param_1;
    unaff_R14 = puVar12;
    unaff_R15 = lVar7;
  }
  *(long *)((long)register0x00000020 + -8) = unaff_R15;
  *(undefined8 **)((long)register0x00000020 + -0x10) = unaff_R14;
  *(undefined8 **)((long)register0x00000020 + -0x18) = unaff_RBX;
  lVar7 = puVar12[0x14];
  if ((lVar7 != puVar12[0x12]) || (*(int *)(puVar12 + 0x13) != 0)) {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4abe9c9;
    lVar7 = func_0x0eeddcf0(&UNK_014756d5,&UNK_01198d5e,0x25,&UNK_0126e3df,&UNK_013a8ed3);
    if ((char)lVar7 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  lVar10 = puVar12[0xc];
  if (lVar10 != 0) {
    puVar12[0xd] = lVar10;
    puVar8 = (undefined8 *)((long)register0x00000020 + -0x20);
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x20);
    *puVar8 = 0x4abe9f1;
    goto SUB_0412a280;
  }
  lVar10 = puVar12[9];
  if (lVar10 != 0) {
    lVar13 = puVar12[10];
    lVar11 = lVar10;
    if (lVar10 != lVar13) {
      do {
        if ((*(byte *)(lVar13 + -0x20) & 1) == 0) {
          bVar2 = *(byte *)(lVar13 + -0x40);
        }
        else {
          uVar3 = *(ulong *)(lVar13 + -0x20);
          uVar4 = *(undefined8 *)(lVar13 + -0x10);
          *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4abea41;
          lVar7 = func_0x0412a280(uVar4,uVar3 & 0xfffffffffffffffe);
          bVar2 = *(byte *)(lVar13 + -0x40);
        }
        if ((bVar2 & 1) != 0) {
          lVar10 = *(long *)(lVar13 + -0x30);
          puVar9 = (undefined8 *)((long)register0x00000020 + -0x20);
          register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x20);
          *puVar9 = 0x4abea59;
          goto SUB_0412a280;
        }
        lVar13 = lVar13 + -0x48;
      } while (lVar13 != lVar10);
      lVar11 = puVar12[9];
    }
    puVar12[10] = lVar10;
    lVar7 = puVar12[0xb];
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4abea6f;
    lVar7 = func_0x0412a280(lVar11,lVar7 - lVar11);
  }
  plVar5 = (long *)puVar12[8];
  if (plVar5 == (long *)0x0) {
LAB_04abea8a:
    bVar2 = *(byte *)(puVar12 + 2);
  }
  else {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 != 0) goto LAB_04abea8a;
    pcVar6 = *(code **)(*plVar5 + 0x10);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4abea9f;
    (*pcVar6)(plVar5);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4abeaa7;
    lVar7 = func_0x0412c2d0(plVar5);
    bVar2 = *(byte *)(puVar12 + 2);
  }
  if ((bVar2 & 1) == 0) {
    return lVar7;
  }
  lVar10 = puVar12[4];
SUB_0412a280:
  *(long *)((long)register0x00000020 + -8) = lVar7;
  if (lVar10 != 0) {
    pcVar6 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar6)(&DAT_0f5463b0,lVar10);
  }
  return *(long *)((long)register0x00000020 + -8);
}


```

## `d427aa0` — MultiBlockFeature::vslot1

- instructions: 32
- calls: 412a280, 4abe980

```c

/* WARNING: Possible PIC construction at 0x0d427afc: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 MultiBlockFeature_v1(undefined8 *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uStack_20;
  
  puVar3 = &vt_MultiBlockFeature;
  *param_1 = &vt_MultiBlockFeature;
  puVar1 = (undefined8 *)param_1[0x18];
  if (puVar1 == (undefined8 *)0x0) {
    uStack_20 = 0xd427b0a;
    puVar3 = (undefined *)func_0x04abe980(param_1 + 3);
  }
  else {
    puVar5 = (undefined8 *)param_1[0x19];
    puVar4 = puVar1;
    if (puVar1 != puVar5) {
      do {
        puVar5 = puVar5 + -0x15;
        uStack_20 = 0xd427adf;
        puVar3 = (undefined *)func_0x04abe980(puVar5);
      } while (puVar5 != puVar1);
      puVar4 = (undefined8 *)param_1[0x18];
    }
    param_1[0x19] = puVar1;
    register0x00000020 = (BADSPACEBASE *)&uStack_20;
    uStack_20 = 0xd427b01;
    param_1 = puVar4;
  }
  *(undefined **)((long)register0x00000020 + -8) = puVar3;
  if (param_1 != (undefined8 *)0x0) {
    pcVar2 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar2)(&DAT_0f5463b0,param_1);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


```

## `d427b20` — MultifaceFeature::vslot0

- instructions: 37
- calls: 412a280, 4abe980

```c

/* WARNING: Possible PIC construction at 0x0d427b4f: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0d427b9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04abe9ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04abea54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x04abea59) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * MultifaceFeature_v0(undefined8 *param_1)

{
  long *plVar1;
  byte bVar2;
  long *plVar3;
  code *pcVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_20;
  
  puVar5 = &vt_MultifaceFeature;
  *param_1 = &vt_MultifaceFeature;
  lVar6 = param_1[0x1c];
  if (lVar6 != 0) {
    param_1[0x1d] = lVar6;
    register0x00000020 = (BADSPACEBASE *)&uStack_20;
    uStack_20 = 0xd427b54;
    goto SUB_0412a280;
  }
  lVar8 = param_1[0x19];
  if (lVar8 != 0) {
    lVar7 = param_1[0x1a];
    lVar6 = lVar8;
    if (lVar8 != lVar7) {
      do {
        lVar7 = lVar7 + -0xa8;
        uStack_20 = 0xd427b7f;
        puVar5 = (undefined *)func_0x04abe980(lVar7);
      } while (lVar7 != lVar8);
      lVar6 = param_1[0x19];
    }
    param_1[0x1a] = lVar8;
    register0x00000020 = (BADSPACEBASE *)&uStack_20;
    uStack_20 = 0xd427ba1;
    goto SUB_0412a280;
  }
  puVar5 = (undefined *)param_1[0x16];
  if ((puVar5 != (undefined *)param_1[0x14]) || (*(int *)(param_1 + 0x15) != 0)) {
    uStack_20 = 0x4abe9c9;
    puVar5 = (undefined *)
             func_0x0eeddcf0(&UNK_014756d5,&UNK_01198d5e,0x25,&UNK_0126e3df,&UNK_013a8ed3);
    if ((char)puVar5 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  lVar6 = param_1[0xe];
  if (lVar6 != 0) {
    param_1[0xf] = lVar6;
    register0x00000020 = (BADSPACEBASE *)&uStack_20;
    uStack_20 = 0x4abe9f1;
    goto SUB_0412a280;
  }
  lVar6 = param_1[0xb];
  if (lVar6 != 0) {
    lVar8 = param_1[0xc];
    lVar7 = lVar6;
    if (lVar6 != lVar8) {
      do {
        if ((*(byte *)(lVar8 + -0x20) & 1) == 0) {
          bVar2 = *(byte *)(lVar8 + -0x40);
        }
        else {
          uStack_20 = 0x4abea41;
          puVar5 = (undefined *)
                   func_0x0412a280(*(undefined8 *)(lVar8 + -0x10),
                                   *(ulong *)(lVar8 + -0x20) & 0xfffffffffffffffe);
          bVar2 = *(byte *)(lVar8 + -0x40);
        }
        if ((bVar2 & 1) != 0) {
          lVar6 = *(long *)(lVar8 + -0x30);
          register0x00000020 = (BADSPACEBASE *)&uStack_20;
          uStack_20 = 0x4abea59;
          goto SUB_0412a280;
        }
        lVar8 = lVar8 + -0x48;
      } while (lVar8 != lVar6);
      lVar7 = param_1[0xb];
    }
    param_1[0xc] = lVar6;
    uStack_20 = 0x4abea6f;
    puVar5 = (undefined *)func_0x0412a280(lVar7,param_1[0xd] - lVar7);
  }
  plVar3 = (long *)param_1[10];
  if (plVar3 == (long *)0x0) {
LAB_04abea8a:
    bVar2 = *(byte *)(param_1 + 4);
  }
  else {
    LOCK();
    plVar1 = plVar3 + 1;
    puVar5 = (undefined *)*plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (puVar5 != (undefined *)0x0) goto LAB_04abea8a;
    uStack_20 = 0x4abea9f;
    (**(code **)(*plVar3 + 0x10))(plVar3);
    uStack_20 = 0x4abeaa7;
    puVar5 = (undefined *)func_0x0412c2d0(plVar3);
    bVar2 = *(byte *)(param_1 + 4);
  }
  if ((bVar2 & 1) == 0) {
    return puVar5;
  }
  lVar6 = param_1[6];
SUB_0412a280:
  *(undefined **)((long)register0x00000020 + -8) = puVar5;
  if (lVar6 != 0) {
    pcVar4 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar4)(&DAT_0f5463b0,lVar6);
  }
  return *(undefined **)((long)register0x00000020 + -8);
}


```

## `d427bc0` — MultifaceFeature::vslot1

- instructions: 39
- calls: 412a280, 4abe980

```c

/* WARNING: Possible PIC construction at 0x0d427bef: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0d427c3c: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 MultifaceFeature_v1(undefined8 *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uStack_20;
  
  puVar3 = &vt_MultifaceFeature;
  *param_1 = &vt_MultifaceFeature;
  puVar1 = (undefined8 *)param_1[0x1c];
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)param_1[0x19];
    if (puVar1 == (undefined8 *)0x0) {
      uStack_20 = 0xd427c4a;
      puVar3 = (undefined *)func_0x04abe980(param_1 + 2);
    }
    else {
      puVar5 = (undefined8 *)param_1[0x1a];
      puVar4 = puVar1;
      if (puVar1 != puVar5) {
        do {
          puVar5 = puVar5 + -0x15;
          uStack_20 = 0xd427c1f;
          puVar3 = (undefined *)func_0x04abe980(puVar5);
        } while (puVar5 != puVar1);
        puVar4 = (undefined8 *)param_1[0x19];
      }
      param_1[0x1a] = puVar1;
      register0x00000020 = (BADSPACEBASE *)&uStack_20;
      uStack_20 = 0xd427c41;
      param_1 = puVar4;
    }
  }
  else {
    param_1[0x1d] = puVar1;
    register0x00000020 = (BADSPACEBASE *)&uStack_20;
    uStack_20 = 0xd427bf4;
    param_1 = puVar1;
  }
  *(undefined **)((long)register0x00000020 + -8) = puVar3;
  if (param_1 != (undefined8 *)0x0) {
    pcVar2 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar2)(&DAT_0f5463b0,param_1);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


```

## `d427c60` — MultipartBlockColumnFeature::vslot0

- instructions: 61
- calls: 412a280, 4abe980

```c

/* WARNING: Possible PIC construction at 0x0d427c9a: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0d427cea: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0d427d2e: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0d427d46: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04abe9ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04abea54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0d427d4b) */
/* WARNING: Removing unreachable block (ram,0x0d427cef) */
/* WARNING: Removing unreachable block (ram,0x0d427cf4) */
/* WARNING: Removing unreachable block (ram,0x0d427c9f) */
/* WARNING: Removing unreachable block (ram,0x0d427ca4) */
/* WARNING: Removing unreachable block (ram,0x04abea59) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * MultipartBlockColumnFeature_v0(undefined8 *param_1)

{
  long *plVar1;
  byte bVar2;
  long *plVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *unaff_R14;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  undefined8 uStack_20;
  
  puVar5 = &vt_MultipartBlockColumnFeature;
  *param_1 = &vt_MultipartBlockColumnFeature;
  puVar10 = (undefined8 *)param_1[0x5e];
  if (puVar10 == (undefined8 *)0x0) {
LAB_0d427cc1:
    puVar10 = (undefined8 *)param_1[0x5b];
    if (puVar10 != (undefined8 *)0x0) {
      unaff_R14 = (undefined8 *)param_1[0x5c];
      if (puVar10 != unaff_R14) {
        puVar8 = unaff_R14 + -0x15;
        uStack_20 = 0xd427cef;
        unaff_R14 = puVar8;
        goto SUB_04abe980;
      }
      param_1[0x5c] = puVar10;
      uStack_20 = 0xd427d11;
      puVar5 = (undefined *)func_0x0412a280(puVar10,param_1[0x5d] - (long)puVar10);
    }
    lVar7 = param_1[0x57];
    if (lVar7 != 0) {
      param_1[0x58] = lVar7;
      puVar6 = &uStack_20;
      uStack_20 = 0xd427d33;
      goto SUB_0412a280;
    }
    uStack_20 = 0xd427d3f;
    func_0x04abe980(param_1 + 0x41);
    puVar8 = param_1 + 0x2c;
    uStack_20 = 0xd427d4b;
  }
  else {
    unaff_R14 = (undefined8 *)param_1[0x5f];
    if (puVar10 == unaff_R14) {
      param_1[0x5f] = puVar10;
      uStack_20 = 0xd427cc1;
      puVar5 = (undefined *)func_0x0412a280(puVar10,param_1[0x60] - (long)puVar10);
      goto LAB_0d427cc1;
    }
    puVar8 = unaff_R14 + -0x15;
    uStack_20 = 0xd427c9f;
    unaff_R14 = puVar8;
  }
SUB_04abe980:
  puStack_28 = puVar10;
  puStack_30 = unaff_R14;
  puStack_38 = param_1;
  puVar5 = (undefined *)puVar8[0x14];
  if ((puVar5 != (undefined *)puVar8[0x12]) || (*(int *)(puVar8 + 0x13) != 0)) {
    uStack_40 = 0x4abe9c9;
    puVar5 = (undefined *)
             func_0x0eeddcf0(&UNK_014756d5,&UNK_01198d5e,0x25,&UNK_0126e3df,&UNK_013a8ed3);
    if ((char)puVar5 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  lVar7 = puVar8[0xc];
  if (lVar7 != 0) {
    puVar8[0xd] = lVar7;
    puVar6 = &uStack_40;
    uStack_40 = 0x4abe9f1;
    goto SUB_0412a280;
  }
  lVar7 = puVar8[9];
  if (lVar7 != 0) {
    lVar11 = puVar8[10];
    lVar9 = lVar7;
    if (lVar7 != lVar11) {
      do {
        if ((*(byte *)(lVar11 + -0x20) & 1) == 0) {
          bVar2 = *(byte *)(lVar11 + -0x40);
        }
        else {
          uStack_40 = 0x4abea41;
          puVar5 = (undefined *)
                   func_0x0412a280(*(undefined8 *)(lVar11 + -0x10),
                                   *(ulong *)(lVar11 + -0x20) & 0xfffffffffffffffe);
          bVar2 = *(byte *)(lVar11 + -0x40);
        }
        if ((bVar2 & 1) != 0) {
          lVar7 = *(long *)(lVar11 + -0x30);
          puVar6 = &uStack_40;
          uStack_40 = 0x4abea59;
          goto SUB_0412a280;
        }
        lVar11 = lVar11 + -0x48;
      } while (lVar11 != lVar7);
      lVar9 = puVar8[9];
    }
    puVar8[10] = lVar7;
    uStack_40 = 0x4abea6f;
    puVar5 = (undefined *)func_0x0412a280(lVar9,puVar8[0xb] - lVar9);
  }
  plVar3 = (long *)puVar8[8];
  if (plVar3 == (long *)0x0) {
LAB_04abea8a:
    bVar2 = *(byte *)(puVar8 + 2);
  }
  else {
    LOCK();
    plVar1 = plVar3 + 1;
    puVar5 = (undefined *)*plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (puVar5 != (undefined *)0x0) goto LAB_04abea8a;
    uStack_40 = 0x4abea9f;
    (**(code **)(*plVar3 + 0x10))(plVar3);
    uStack_40 = 0x4abeaa7;
    puVar5 = (undefined *)func_0x0412c2d0(plVar3);
    bVar2 = *(byte *)(puVar8 + 2);
  }
  if ((bVar2 & 1) == 0) {
    return puVar5;
  }
  lVar7 = puVar8[4];
  puVar6 = &uStack_20;
SUB_0412a280:
  *(undefined **)((long)puVar6 + -8) = puVar5;
  if (lVar7 != 0) {
    pcVar4 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)puVar6 + -0x10) = 0xee326ba;
    (*pcVar4)(&DAT_0f5463b0,lVar7);
  }
  return *(undefined **)((long)puVar6 + -8);
}


```

## `d427d70` — MultipartBlockColumnFeature::vslot1

- instructions: 7
- calls: d427c60

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 MultipartBlockColumnFeature_v1(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = MultipartBlockColumnFeature_v0();
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return uVar1;
}


```

## `d427d90` — OreFeature::vslot0

- instructions: 46
- calls: 412a280, 4fa4590

```c

/* WARNING: Possible PIC construction at 0x0d427df3: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0d427ddd: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0d427de2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * OreFeature_v0(undefined8 *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_20;
  
  puVar3 = &vt_OreFeature;
  *param_1 = &vt_OreFeature;
  lVar1 = param_1[8];
  if (lVar1 == 0) {
    if (param_1[4] == 0) {
      return puVar3;
    }
    uStack_20 = 0xd427e0a;
    puVar3 = (undefined *)func_0x04fa4590(param_1 + 4);
    lVar4 = param_1[4];
  }
  else {
    lVar5 = param_1[9];
    lVar4 = lVar1;
    if (lVar1 != lVar5) {
      do {
        lVar4 = *(long *)(lVar5 + -0x18);
        if (lVar4 != 0) {
          *(long *)(lVar5 + -0x10) = lVar4;
          register0x00000020 = (BADSPACEBASE *)&uStack_20;
          uStack_20 = 0xd427de2;
          goto SUB_0412a280;
        }
        lVar5 = lVar5 + -0x20;
      } while (lVar5 != lVar1);
      lVar4 = param_1[8];
    }
    param_1[9] = lVar1;
    register0x00000020 = (BADSPACEBASE *)&uStack_20;
    uStack_20 = 0xd427df8;
  }
SUB_0412a280:
  *(undefined **)((long)register0x00000020 + -8) = puVar3;
  if (lVar4 != 0) {
    pcVar2 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar2)(&DAT_0f5463b0,lVar4);
  }
  return *(undefined **)((long)register0x00000020 + -8);
}


```

## `d427e30` — OreFeature::vslot1

- instructions: 7
- calls: d427d90

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 OreFeature_v1(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = OreFeature_v0();
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return uVar1;
}


```

## `d427e50` — RectLayoutFeature::vslot0

- instructions: 11

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * RectLayoutFeature_v0(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &vt_RectLayoutFeature;
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    param_1[3] = lVar1;
    if (lVar1 != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,lVar1);
    }
    return param_1;
  }
  return param_1;
}


```

## `d427e80` — RectLayoutFeature::vslot1

- instructions: 16
- calls: 412a280

```c

/* WARNING: Possible PIC construction at 0x0d427ea5: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0d427eaa) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 RectLayoutFeature_v1(undefined8 *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uStack_10;
  
  *param_1 = &vt_RectLayoutFeature;
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 != (undefined8 *)0x0) {
    param_1[3] = puVar1;
    register0x00000020 = (BADSPACEBASE *)&uStack_10;
    uStack_10 = 0xd427eaa;
    param_1 = puVar1;
  }
  *(undefined8 **)((long)register0x00000020 + -8) = puVar1;
  if (param_1 != (undefined8 *)0x0) {
    pcVar2 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar2)(&DAT_0f5463b0,param_1);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


```

## `d427ec0` — ScanSurfaceFeature::vslot1

- instructions: 2

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ScanSurfaceFeature_v1(long param_1)

{
  undefined8 in_RAX;
  
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return in_RAX;
}


```

## `d427ed0` — ScatterFeature::vslot0

- instructions: 80

```c

void ScatterFeature_v0(undefined8 *param_1)

{
  undefined8 uStack_18;
  
  *param_1 = &vt_ScatterFeature;
  uStack_18 = &vt_ScatterFeature;
  if ((ulong)*(uint *)(param_1 + 0x1f) != 0xffffffff) {
    (**(code **)(&UNK_0efa59c0 + (ulong)*(uint *)(param_1 + 0x1f) * 8))
              ((long)&uStack_18 + 6,param_1 + 0x1e);
  }
  *(undefined4 *)(param_1 + 0x1f) = 0xffffffff;
  if ((ulong)*(uint *)(param_1 + 0x1c) != 0xffffffff) {
    (**(code **)(&UNK_0efa59c0 + (ulong)*(uint *)(param_1 + 0x1c) * 8))
              ((long)&uStack_18 + 7,param_1 + 0x1b);
  }
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  if ((ulong)*(uint *)(param_1 + 0x16) != 0xffffffff) {
    (**(code **)(&UNK_0efa59c0 + (ulong)*(uint *)(param_1 + 0x16) * 8))
              ((long)&uStack_18 + 4,param_1 + 0x15);
  }
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  if ((ulong)*(uint *)(param_1 + 0x14) != 0xffffffff) {
    (**(code **)(&UNK_0efa59c0 + (ulong)*(uint *)(param_1 + 0x14) * 8))
              ((long)&uStack_18 + 5,param_1 + 0x13);
  }
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  if ((ulong)*(uint *)(param_1 + 0xf) != 0xffffffff) {
    (**(code **)(&UNK_0efa59c0 + (ulong)*(uint *)(param_1 + 0xf) * 8))
              ((long)&uStack_18 + 4,param_1 + 0xe);
  }
  *(undefined4 *)(param_1 + 0xf) = 0xffffffff;
  if ((ulong)*(uint *)(param_1 + 0xd) != 0xffffffff) {
    (**(code **)(&UNK_0efa59c0 + (ulong)*(uint *)(param_1 + 0xd) * 8))
              ((long)&uStack_18 + 5,param_1 + 0xc);
  }
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  if ((ulong)*(uint *)(param_1 + 8) != 0xffffffff) {
    (**(code **)(&UNK_0efa59c0 + (ulong)*(uint *)(param_1 + 8) * 8))
              ((long)&uStack_18 + 4,param_1 + 7);
  }
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if ((ulong)*(uint *)(param_1 + 6) != 0xffffffff) {
    (**(code **)(&UNK_0efa59c0 + (ulong)*(uint *)(param_1 + 6) * 8))
              ((long)&uStack_18 + 5,param_1 + 5);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  return;
}


```

## `d427ef0` — ScatterFeature::vslot1

- instructions: 10
- calls: 535ca20

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ScatterFeature_v1(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &vt_ScatterFeature;
  uVar1 = func_0x0535ca20(param_1 + 5);
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return uVar1;
}


```

## `d427f20` — SculkPatchFeature::vslot0

- instructions: 31
- calls: 4abe980

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * SculkPatchFeature_v0(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = &vt_SculkPatchFeature;
  *param_1 = &vt_SculkPatchFeature;
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    return puVar2;
  }
  lVar4 = param_1[3];
  lVar3 = lVar1;
  if (lVar1 != lVar4) {
    do {
      lVar4 = lVar4 + -0xa8;
      puVar2 = (undefined *)func_0x04abe980(lVar4);
    } while (lVar4 != lVar1);
    lVar3 = param_1[2];
  }
  param_1[3] = lVar1;
  if (lVar3 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,lVar3);
  }
  return puVar2;
}


```

## `d427f90` — SculkPatchFeature::vslot1

- instructions: 30
- calls: 412a280, 4abe980

```c

/* WARNING: Possible PIC construction at 0x0d427fe3: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SculkPatchFeature_v1(undefined8 *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uStack_20;
  
  puVar3 = &vt_SculkPatchFeature;
  *param_1 = &vt_SculkPatchFeature;
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)param_1[3];
    puVar4 = puVar1;
    if (puVar1 != puVar5) {
      do {
        puVar5 = puVar5 + -0x15;
        uStack_20 = 0xd427fcf;
        puVar3 = (undefined *)func_0x04abe980(puVar5);
      } while (puVar5 != puVar1);
      puVar4 = (undefined8 *)param_1[2];
    }
    param_1[3] = puVar1;
    register0x00000020 = (BADSPACEBASE *)&uStack_20;
    uStack_20 = 0xd427fe8;
    param_1 = puVar4;
  }
  *(undefined **)((long)register0x00000020 + -8) = puVar3;
  if (param_1 != (undefined8 *)0x0) {
    pcVar2 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar2)(&DAT_0f5463b0,param_1);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


```

## `d428000` — SearchFeature::vslot1

- instructions: 2

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SearchFeature_v1(long param_1)

{
  undefined8 in_RAX;
  
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return in_RAX;
}


```

## `d428010` — SingleBlockFeature::vslot0

- instructions: 53
- calls: 412a280, 4abe980, d4b52d0

```c

/* WARNING: Possible PIC construction at 0x0d42806c: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * SingleBlockFeature_v0(undefined8 *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_20;
  
  puVar3 = &vt_SingleBlockFeature;
  *param_1 = &vt_SingleBlockFeature;
  lVar1 = param_1[0x3b];
  if (lVar1 == 0) {
    uStack_20 = 0xd42807d;
    func_0x0d4b52d0(param_1 + 0x20);
    uStack_20 = 0xd428086;
    puVar3 = (undefined *)func_0x0d4b52d0(param_1 + 5);
    lVar1 = param_1[2];
    if (lVar1 == 0) {
      return puVar3;
    }
    lVar5 = param_1[3];
    lVar4 = lVar1;
    if (lVar1 != lVar5) {
      do {
        lVar5 = lVar5 + -0xb0;
        uStack_20 = 0xd4280af;
        puVar3 = (undefined *)func_0x04abe980(lVar5);
      } while (lVar5 != lVar1);
      lVar4 = param_1[2];
    }
    param_1[3] = lVar1;
  }
  else {
    lVar5 = param_1[0x3c];
    lVar4 = lVar1;
    if (lVar1 != lVar5) {
      do {
        lVar5 = lVar5 + -0xa8;
        uStack_20 = 0xd42804f;
        puVar3 = (undefined *)func_0x04abe980(lVar5);
      } while (lVar5 != lVar1);
      lVar4 = param_1[0x3b];
    }
    param_1[0x3c] = lVar1;
    register0x00000020 = (BADSPACEBASE *)&uStack_20;
    uStack_20 = 0xd428071;
  }
  *(undefined **)((long)register0x00000020 + -8) = puVar3;
  if (lVar4 != 0) {
    pcVar2 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar2)(&DAT_0f5463b0,lVar4);
  }
  return *(undefined **)((long)register0x00000020 + -8);
}


```

## `d4280e0` — SingleBlockFeature::vslot1

- instructions: 7
- calls: d428010

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SingleBlockFeature_v1(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = SingleBlockFeature_v0();
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return uVar1;
}


```

## `d428100` — SnapToSurfaceFeature::vslot0

- instructions: 31
- calls: 4abe980

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * SnapToSurfaceFeature_v0(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = &vt_SnapToSurfaceFeature;
  *param_1 = &vt_SnapToSurfaceFeature;
  lVar1 = param_1[6];
  if (lVar1 == 0) {
    return puVar2;
  }
  lVar4 = param_1[7];
  lVar3 = lVar1;
  if (lVar1 != lVar4) {
    do {
      lVar4 = lVar4 + -0xa8;
      puVar2 = (undefined *)func_0x04abe980(lVar4);
    } while (lVar4 != lVar1);
    lVar3 = param_1[6];
  }
  param_1[7] = lVar1;
  if (lVar3 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,lVar3);
  }
  return puVar2;
}


```

## `d428170` — SnapToSurfaceFeature::vslot1

- instructions: 30
- calls: 412a280, 4abe980

```c

/* WARNING: Possible PIC construction at 0x0d4281c3: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SnapToSurfaceFeature_v1(undefined8 *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uStack_20;
  
  puVar3 = &vt_SnapToSurfaceFeature;
  *param_1 = &vt_SnapToSurfaceFeature;
  puVar1 = (undefined8 *)param_1[6];
  if (puVar1 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)param_1[7];
    puVar4 = puVar1;
    if (puVar1 != puVar5) {
      do {
        puVar5 = puVar5 + -0x15;
        uStack_20 = 0xd4281af;
        puVar3 = (undefined *)func_0x04abe980(puVar5);
      } while (puVar5 != puVar1);
      puVar4 = (undefined8 *)param_1[6];
    }
    param_1[7] = puVar1;
    register0x00000020 = (BADSPACEBASE *)&uStack_20;
    uStack_20 = 0xd4281c8;
    param_1 = puVar4;
  }
  *(undefined **)((long)register0x00000020 + -8) = puVar3;
  if (param_1 != (undefined8 *)0x0) {
    pcVar2 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar2)(&DAT_0f5463b0,param_1);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


```

## `d4281e0` — StructureTemplateFeature::vslot0

- instructions: 36

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * StructureTemplateFeature_v0(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar3 = &vt_StructureTemplateFeature;
  *param_1 = &vt_StructureTemplateFeature;
  lVar1 = param_1[5];
  if (lVar1 == 0) {
    return puVar3;
  }
  lVar5 = param_1[6];
  lVar4 = lVar1;
  if (lVar1 != lVar5) {
    do {
      plVar2 = *(long **)(lVar5 + -8);
      *(undefined8 *)(lVar5 + -8) = 0;
      if (plVar2 != (long *)0x0) {
        puVar3 = (undefined *)(**(code **)(*plVar2 + 8))();
      }
      lVar5 = lVar5 + -8;
    } while (lVar5 != lVar1);
    lVar4 = param_1[5];
  }
  param_1[6] = lVar1;
  if (lVar4 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,lVar4);
  }
  return puVar3;
}


```

## `d428260` — StructureTemplateFeature::vslot1

- instructions: 35
- calls: 412a280

```c

/* WARNING: Possible PIC construction at 0x0d4282c1: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 StructureTemplateFeature_v1(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uStack_20;
  
  puVar4 = &vt_StructureTemplateFeature;
  *param_1 = &vt_StructureTemplateFeature;
  puVar1 = (undefined8 *)param_1[5];
  if (puVar1 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)param_1[6];
    puVar5 = puVar1;
    if (puVar1 != puVar6) {
      do {
        plVar2 = (long *)puVar6[-1];
        puVar6[-1] = 0;
        if (plVar2 != (long *)0x0) {
          uStack_20 = 0xd4282b0;
          puVar4 = (undefined *)(**(code **)(*plVar2 + 8))();
        }
        puVar6 = puVar6 + -1;
      } while (puVar6 != puVar1);
      puVar5 = (undefined8 *)param_1[5];
    }
    param_1[6] = puVar1;
    register0x00000020 = (BADSPACEBASE *)&uStack_20;
    uStack_20 = 0xd4282c6;
    param_1 = puVar5;
  }
  *(undefined **)((long)register0x00000020 + -8) = puVar4;
  if (param_1 != (undefined8 *)0x0) {
    pcVar3 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar3)(&DAT_0f5463b0,param_1);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


```

## `d4282e0` — SearchFeature::vslot0, SpeleothemFeature::vslot0, ScanSurfaceFeature::vslot0 (+5 more)

- instructions: 1

```c

void SpeleothemClusterFeature_v0(void)

{
  return;
}


```

## `d4282f0` — SurfaceRelativeThresholdFeature::vslot1

- instructions: 2

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SurfaceRelativeThresholdFeature_v1(long param_1)

{
  undefined8 in_RAX;
  
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return in_RAX;
}


```

## `d428300` — VegetationPatchFeature::vslot0

- instructions: 32
- calls: 4abe980

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 VegetationPatchFeature_v0(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = &vt_VegetationPatchFeature;
  uVar2 = func_0x04abe980(param_1 + 5);
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    lVar4 = param_1[3];
    lVar3 = lVar1;
    if (lVar1 != lVar4) {
      do {
        lVar4 = lVar4 + -0xa8;
        uVar2 = func_0x04abe980(lVar4);
      } while (lVar4 != lVar1);
      lVar3 = param_1[2];
    }
    param_1[3] = lVar1;
    if (lVar3 != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,lVar3);
    }
    return uVar2;
  }
  return uVar2;
}


```

## `d428370` — VegetationPatchFeature::vslot1

- instructions: 31
- calls: 412a280, 4abe980

```c

/* WARNING: Possible PIC construction at 0x0d4283c3: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 VegetationPatchFeature_v1(undefined8 *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uStack_20;
  
  *param_1 = &vt_VegetationPatchFeature;
  uStack_20 = 0xd42838b;
  uVar3 = func_0x04abe980(param_1 + 5);
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)param_1[3];
    puVar4 = puVar1;
    if (puVar1 != puVar5) {
      do {
        puVar5 = puVar5 + -0x15;
        uStack_20 = 0xd4283af;
        uVar3 = func_0x04abe980(puVar5);
      } while (puVar5 != puVar1);
      puVar4 = (undefined8 *)param_1[2];
    }
    param_1[3] = puVar1;
    register0x00000020 = (BADSPACEBASE *)&uStack_20;
    uStack_20 = 0xd4283c8;
    param_1 = puVar4;
  }
  *(undefined8 *)((long)register0x00000020 + -8) = uVar3;
  if (param_1 != (undefined8 *)0x0) {
    pcVar2 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar2)(&DAT_0f5463b0,param_1);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


```

## `d4283e0` — WeightedRandomFeature::vslot0

- instructions: 11

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * WeightedRandomFeature_v0(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &vt_WeightedRandomFeature;
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    param_1[3] = lVar1;
    if (lVar1 != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,lVar1);
    }
    return param_1;
  }
  return param_1;
}


```

## `d428410` — WeightedRandomFeature::vslot1

- instructions: 16
- calls: 412a280

```c

/* WARNING: Possible PIC construction at 0x0d428435: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0d42843a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 WeightedRandomFeature_v1(undefined8 *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uStack_10;
  
  *param_1 = &vt_WeightedRandomFeature;
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 != (undefined8 *)0x0) {
    param_1[3] = puVar1;
    register0x00000020 = (BADSPACEBASE *)&uStack_10;
    uStack_10 = 0xd42843a;
    param_1 = puVar1;
  }
  *(undefined8 **)((long)register0x00000020 + -8) = puVar1;
  if (param_1 != (undefined8 *)0x0) {
    pcVar2 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar2)(&DAT_0f5463b0,param_1);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


```

## `d507040` — BeardAndShaverFeature::vslot2

- instructions: 454
- calls: 4108328, 410844d, 5a37050, c6eb860, cc41df0, d2ec2f0, eeddcf0, eee2f40, eee2fc0, eee35d0

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] BeardAndShaverFeature_v2(long param_1,undefined8 *param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  short sVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  bool bVar19;
  bool bVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined8 uStack_100;
  int iStack_f8;
  ulong uStack_f0;
  uint uStack_e4;
  uint uStack_e0;
  int iStack_dc;
  long lStack_d8;
  ulong uStack_d0;
  uint uStack_c4;
  uint uStack_c0;
  float fStack_bc;
  int iStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  float fStack_ac;
  int iStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined1 auStack_98 [16];
  ulong uStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  ulong uStack_60;
  ulong uStack_58;
  undefined8 *puStack_50;
  undefined1 auStack_48 [16];
  
  iVar18 = *(int *)(param_1 + 0x28);
  uVar17 = iVar18 - 2;
  uVar13 = *(int *)(param_1 + 0x34) + 2;
  uStack_e4 = uVar17;
  lStack_d8 = param_1;
  if ((int)uVar17 < (int)uVar13) {
    uStack_e0 = *(uint *)(param_1 + 0x2c);
    iVar11 = *(int *)(param_1 + 0x30);
    uStack_b4 = *(uint *)(param_1 + 0x38);
    iStack_dc = iVar11 + -2;
    iVar1 = *(int *)(param_1 + 0x3c) + 2;
    iStack_b8 = (int)(uStack_b4 - uStack_e0) / 2;
    uStack_c0 = uStack_e0 - iStack_b8;
    iStack_b8 = iStack_b8 + uStack_b4;
    if (iStack_dc < iVar1 && (int)uStack_c0 < iStack_b8) {
      uStack_e0 = uStack_e0 + (int)*(float *)(param_1 + 0x40);
      iVar10 = (*(int *)(param_1 + 0x34) - iVar18) + 5;
      iVar16 = (*(int *)(param_1 + 0x3c) - iVar11) + 5;
      fVar21 = (float)iVar10 * _DAT_011986e0;
      fStack_bc = (float)iVar16 * _DAT_011986e0;
      if (fStack_bc <= fVar21) {
        fStack_bc = fVar21;
      }
      puStack_50 = param_2 + 1;
      uStack_80 = (ulong)(2 - (iVar10 / 2 + iVar18));
      uStack_58 = (ulong)(2 - (iVar16 / 2 + iVar11));
      lStack_68 = param_1 + 0xf0;
      lStack_70 = param_1 + 0x48;
      uStack_c4 = uVar13;
      do {
        uStack_f0 = (ulong)uVar17;
        iVar18 = uVar17 - uStack_c4;
        if ((int)(uVar17 - uStack_c4) < (int)(uStack_e4 - uVar17)) {
          iVar18 = uStack_e4 - uVar17;
        }
        fStack_ac = (float)(int)((int)uStack_80 + uVar17);
        if (iVar18 < 1) {
          iVar18 = 0;
        }
        uStack_b0 = iVar18 - 0xc;
        uStack_60 = (ulong)(iVar18 * 0x18 + 0x1c2c);
        fStack_ac = fStack_ac * fStack_ac;
        uVar17 = uStack_c0;
        do {
          uStack_d0 = (ulong)uVar17;
          bVar19 = 0xffffffe7 < uStack_b0;
          uVar13 = uStack_e0;
          if ((int)uStack_e0 < (int)uVar17) {
            uVar13 = uVar17;
          }
          if ((int)uStack_b4 < (int)uVar17) {
            uVar13 = uStack_b4;
          }
          iStack_a8 = (int)uStack_60 + (uVar17 - uVar13);
          fVar21 = (float)(int)(uVar17 - uVar13);
          fStack_a0 = fVar21 * fVar21 + fStack_ac;
          fStack_a4 = *(float *)(&UNK_014f0980 + (ulong)((int)uStack_e0 < (int)uVar17) * 4) +
                      fStack_bc;
          lVar15 = lStack_68;
          if (uVar17 == 1) {
            lVar15 = lStack_70;
          }
          lStack_78 = lVar15 + 0x90;
          iVar18 = iStack_dc;
          do {
            while( true ) {
              iVar11 = iVar18 - iVar1;
              if (iVar18 - iVar1 < iStack_dc - iVar18) {
                iVar11 = iStack_dc - iVar18;
              }
              if (iVar11 < 1) {
                iVar11 = 0;
              }
              uVar22 = 0;
              if (0xffffffe7 < iVar11 - 0xcU && (0xffffffe7 < (uVar17 - uVar13) - 0xc && bVar19)) {
                if ((DAT_0f71ecd8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f71ecd8), iVar10 != 0)
                   ) {
                  func_0x0d2ec2f0(&DAT_0f71ecd0);
                  func_0x0eee2f40(&UNK_0d2ec4f0,&DAT_0f71ecd0,0xf53dab8);
                  func_0x0410844d(&DAT_0f71ecd8);
                }
                uVar22 = *(undefined4 *)
                          (_DAT_0f71ecd0 + (ulong)(uint)(iVar11 * 0x240 + iStack_a8) * 4);
              }
              auStack_98._0_4_ = uVar22;
              iStack_f8 = *(int *)(param_2 + 2) + iVar18;
              uStack_100 = CONCAT44(*(int *)((long)param_2 + 0xc) + (int)uStack_d0,
                                    *(int *)(param_2 + 1) + (int)uStack_f0);
              lVar6 = (**(code **)(*(long *)*param_2 + 0x28))((long *)*param_2,&uStack_100);
              lVar3 = _DAT_0f6eaec0;
              lVar6 = *(long *)(*(long *)(lVar6 + 0x68) + 200);
              fStack_9c = *(float *)(lStack_d8 + 0x198);
              auStack_48 = ZEXT416(*(uint *)(lStack_d8 + 0x19c));
              fVar21 = (float)(**(code **)(*(long *)param_2[3] + 0x30))();
              fVar21 = ((float)auStack_48._0_4_ - fStack_9c) * fVar21 + fStack_9c;
              if (lVar6 == lVar3) {
                fVar21 = (float)((uint)fVar21 ^ _DAT_014e9ac0);
              }
              fVar23 = (float)((int)uStack_58 + iVar18);
              fVar23 = SQRT(fVar23 * fVar23 + fStack_a0);
              auStack_98 = ZEXT416((uint)((float)(-(uint)(0.0 < fStack_a4) &
                                                 -(uint)(fVar23 <= fStack_a4) &
                                                 (uint)(_DAT_0119858c - fVar23 / fStack_a4)) *
                                          (float)auStack_98._0_4_ + fVar21));
              sVar5 = (**(code **)(*(long *)*param_2 + 0xd8))((long *)*param_2,puStack_50);
              if ((float)auStack_98._0_4_ <= _DAT_011983fc) break;
              plVar2 = (long *)*param_2;
              iStack_f8 = *(int *)(param_2 + 2) + iVar18;
              uStack_100 = CONCAT44(*(int *)((long)param_2 + 0xc) + (int)uStack_d0,
                                    *(int *)(param_2 + 1) + (int)uStack_f0);
              if (*(char *)(lVar15 + 0x89) == '\x01') {
                lVar7 = func_0x0eee2fc0();
                lVar3 = *(long *)(lVar15 + 0x90);
                LOCK();
                lVar6 = *(long *)(lVar15 + 0xa0);
                bVar20 = lVar3 == lVar6;
                if (bVar20) {
                  *(long *)(lVar15 + 0xa0) = lVar7;
                  lVar6 = lVar3;
                }
                UNLOCK();
                if (!bVar20) {
                  iVar11 = 3000;
                  do {
                    while( true ) {
                      if ((lVar6 == lVar7) && (iVar10 = *(int *)(lVar15 + 0x98) + 1, iVar10 != -1))
                      goto LAB_0d507548;
                      if (iVar11 == 0) break;
                      iVar11 = iVar11 + -1;
                      lVar3 = *(long *)(lVar15 + 0x90);
                      LOCK();
                      lVar6 = *(long *)(lVar15 + 0xa0);
                      bVar20 = lVar3 == lVar6;
                      if (bVar20) {
                        *(long *)(lVar15 + 0xa0) = lVar7;
                        lVar6 = lVar3;
                      }
                      UNLOCK();
                      if (bVar20) goto LAB_0d507543;
                    }
                    func_0x0eee35d0();
                    iVar11 = 0;
                    lVar3 = *(long *)(lVar15 + 0x90);
                    LOCK();
                    lVar6 = *(long *)(lVar15 + 0xa0);
                    bVar20 = lVar3 == lVar6;
                    if (bVar20) {
                      *(long *)(lVar15 + 0xa0) = lVar7;
                      lVar6 = lVar3;
                    }
                    UNLOCK();
                  } while (!bVar20);
                }
LAB_0d507543:
                iVar10 = 1;
LAB_0d507548:
                *(int *)(lVar15 + 0x98) = iVar10;
                if (*(char *)(lVar15 + 0x89) == '\x01') {
                  func_0x0c6eb860(lVar15,1);
                }
                if ((*(long *)(lVar15 + 0xa0) == lVar7) &&
                   (iVar11 = *(int *)(lVar15 + 0x98), iVar11 != 0)) {
                  if (iVar11 == 1) {
                    *(undefined4 *)(lVar15 + 0x98) = 0;
                    *(undefined8 *)(lVar15 + 0xa0) = *(undefined8 *)(lVar15 + 0x90);
                  }
                  else {
                    *(int *)(lVar15 + 0x98) = iVar11 + -1;
                  }
                }
                else {
                  cVar4 = func_0x0eeddcf0(&UNK_01239425,&UNK_01198d5e,0x6d,&UNK_0126e3df,
                                          &UNK_0121f006);
                  if (cVar4 != '\0') {
                    _DAT_00000000 = 0xdeadc0de;
                  }
                }
              }
              lVar6 = *(long *)(lVar15 + 0x80);
              if (lVar6 == 0) {
                if ((*(char *)(lVar15 + 0x7c) == '\x01') && (*(int *)(lVar15 + 0x78) == 0)) {
                  func_0x05a37050(1,3,0x11,&UNK_011feb54);
                }
                lVar6 = func_0x0cc41df0(0xf6ff9e0,0xf6eae50,1);
              }
              (**(code **)(*plVar2 + 0x60))(plVar2,&uStack_100,lVar6,3);
LAB_0d5072d3:
              iVar18 = iVar18 + 1;
              if (iVar18 == iVar1) goto LAB_0d5071f0;
            }
            iVar11 = *(int *)((long)param_2 + 0xc) + (int)uStack_d0;
            plVar2 = (long *)*param_2;
            if (iVar11 < sVar5) {
              iStack_f8 = *(int *)(param_2 + 2) + iVar18;
              uStack_100 = CONCAT44(iVar11,*(int *)(param_2 + 1) + (int)uStack_f0);
              uVar8 = func_0x0cc41df0(0xf6ff9e0,&DAT_0f713f00,1);
              (**(code **)(*plVar2 + 0x60))(plVar2,&uStack_100,uVar8,3);
              goto LAB_0d5072d3;
            }
            iStack_f8 = *(int *)(param_2 + 2) + iVar18;
            uStack_100 = CONCAT44(iVar11,*(int *)(param_2 + 1) + (int)uStack_f0);
            if ((_DAT_0f6ffb10 == (long *)0x0) &&
               (cVar4 = func_0x0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868,
                                        &UNK_013a2901), cVar4 != '\0')) {
              _DAT_00000000 = 0xdeadc0de;
            }
            (**(code **)(*plVar2 + 0x60))
                      (plVar2,&uStack_100,*(undefined8 *)(*_DAT_0f6ffb10 + 0x200),3);
            iVar18 = iVar18 + 1;
          } while (iVar18 != iVar1);
LAB_0d5071f0:
          uVar17 = (int)uStack_d0 + 1;
        } while ((int)uVar17 < iStack_b8);
        uVar17 = (int)uStack_f0 + 1;
      } while (uVar17 != uStack_c4);
    }
  }
  if ((*(char *)(lStack_d8 + 0x18) == '\x01') &&
     (plVar2 = *(long **)(*(long *)(*(long *)(lStack_d8 + 0x10) + 0x18) +
                         *(long *)(lStack_d8 + 0x20) * 8), plVar2 != (long *)0x0)) {
    if ((*(char *)(lStack_d8 + 9) == '\0') && ((char)plVar2[1] != '\0')) {
      uVar12 = 0;
      uVar9 = 0;
      uVar14 = 0;
      goto LAB_0d5077a8;
    }
    auVar24 = (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
    uVar9 = auVar24._0_8_;
    if ((auVar24._8_8_ & 0x100000000) != 0) {
      uVar12 = uVar9 & 0xffffffffffffff00;
      uVar14 = auVar24._8_8_ & 0xffffffffff;
      goto LAB_0d5077a8;
    }
  }
  uVar9 = param_2[1];
  uVar12 = uVar9 & 0xffffffffffffff00;
  uVar14 = (ulong)*(uint *)(param_2 + 2) | 0x100000000;
LAB_0d5077a8:
  auVar24._0_8_ = uVar9 & 0xff | uVar12;
  auVar24._8_8_ = uVar14;
  return auVar24;
}


```

## `d50a850` — BonusChestFeature::vslot5

- instructions: 162
- calls: c9e3230, d50aaf0

```c

undefined8 BonusChestFeature_v5(undefined8 param_1,long *param_2,int *param_3,long param_4)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iStack_a44;
  int iStack_a40;
  int iStack_a3c;
  undefined8 uStack_a38;
  undefined *puStack_a30;
  undefined *puStack_a28;
  uint uStack_a20;
  uint uStack_a1c;
  uint auStack_a18 [623];
  undefined8 uStack_5c;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined **ppuStack_38;
  
  uStack_a20 = *(uint *)(*(long *)(param_4 + 0x9f8) + 8);
  puStack_a30 = &UNK_0f147b18;
  ppuStack_38 = &puStack_a28;
  puStack_a28 = &UNK_0f5356d0;
  uStack_48 = 0x100000000000000;
  uStack_54 = 0;
  uStack_50 = 0;
  lVar3 = 7;
  uVar4 = uStack_a20;
  while( true ) {
    uVar5 = ((ulong)((uVar4 >> 0x1e ^ uVar4) * 0x6c078965) + lVar3) - 6;
    uVar4 = (uint)uVar5;
    *(uint *)((long)&uStack_a38 + lVar3 * 4 + 4) = uVar4;
    if (lVar3 == 0x193) break;
    uVar4 = (((uint)(uVar5 >> 0x1e) & 3 ^ uVar4) * 0x6c078965 + (int)lVar3) - 5;
    *(uint *)((long)&puStack_a30 + lVar3 * 4) = uVar4;
    lVar3 = lVar3 + 2;
  }
  uStack_5c = 0x18e00000270;
  uStack_40 = 1;
  iVar6 = 3;
  uStack_a38 = param_1;
  uStack_a1c = uStack_a20;
  do {
    iVar7 = -3;
    iVar8 = 3;
    do {
      iStack_a44 = *param_3 + iVar6;
      iStack_a40 = param_3[1];
      iStack_a3c = param_3[2] + iVar8;
      cVar1 = func_0x0c9e3230(param_2,&iStack_a44);
      if (cVar1 != '\0') {
        iStack_a40 = iStack_a40 + 1;
        cVar1 = func_0x0d50aaf0(uStack_a38,param_2,&iStack_a44,&puStack_a30);
        if (cVar1 != '\0') goto LAB_0d50aaaf;
      }
      iStack_a40 = param_3[1];
      iStack_a44 = *param_3 - iVar6;
      iStack_a3c = param_3[2] + iVar7;
      cVar1 = func_0x0c9e3230(param_2,&iStack_a44);
      if (cVar1 != '\0') {
        iStack_a40 = iStack_a40 + 1;
        cVar1 = func_0x0d50aaf0(uStack_a38,param_2,&iStack_a44,&puStack_a30);
        if (cVar1 != '\0') goto LAB_0d50aaaf;
      }
      iStack_a44 = *param_3 + iVar6;
      iStack_a40 = param_3[1];
      iStack_a3c = param_3[2] + iVar7;
      cVar1 = func_0x0c9e3230(param_2,&iStack_a44);
      if (cVar1 != '\0') {
        iStack_a40 = iStack_a40 + 1;
        cVar1 = func_0x0d50aaf0(uStack_a38,param_2,&iStack_a44,&puStack_a30);
        if (cVar1 != '\0') goto LAB_0d50aaaf;
      }
      iStack_a40 = param_3[1];
      iStack_a44 = *param_3 - iVar6;
      iStack_a3c = param_3[2] + iVar8;
      cVar1 = func_0x0c9e3230(param_2,&iStack_a44);
      if (cVar1 != '\0') {
        iStack_a40 = iStack_a40 + 1;
        cVar1 = func_0x0d50aaf0(uStack_a38,param_2,&iStack_a44,&puStack_a30);
        if (cVar1 != '\0') {
LAB_0d50aaaf:
          plVar2 = (long *)(**(code **)(*param_2 + 0x150))(param_2);
          lVar3 = (**(code **)(*plVar2 + 0x568))(plVar2);
          *(undefined1 *)(lVar3 + 0x4ba) = 1;
          return 1;
        }
      }
      iVar8 = iVar8 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != -0xb);
    iVar6 = iVar6 + 1;
    if (iVar6 == 0xb) {
      return 0;
    }
  } while( true );
}


```

## `d50b1d0` — ConditionalListFeature::vslot2

- instructions: 291
- calls: b5f8420, d3dfbc0, d50b7a0

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong ConditionalListFeature_v2(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  float *pfVar6;
  ulong uVar7;
  ulong uVar8;
  float *pfVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined1 uStack_bd;
  undefined4 uStack_bc;
  undefined4 auStack_b8 [2];
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  ulong uStack_6c;
  ulong uStack_60;
  long lStack_58;
  ulong uStack_50;
  undefined4 uStack_44;
  ulong uStack_40;
  float *pfStack_38;
  
  lVar1 = param_2[4];
  *(undefined8 *)(lVar1 + 0xb0) = *param_2;
  auStack_b8[0] = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_b0 = (ulong)(uint)(float)*(int *)(param_2 + 1);
  lStack_58 = param_1;
  func_0x0b5f8420(*(undefined8 *)(lVar1 + 8),0x18a9d0731ab6098d,&UNK_01387936,auStack_b8);
  if (uStack_6c >> 0x20 != 0xffffffff) {
    (**(code **)(&UNK_0f2be788 + (uStack_6c >> 0x20) * 8))(&uStack_bd,&uStack_a8);
  }
  auStack_b8[0] = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_b0 = (ulong)(uint)(float)*(int *)((long)param_2 + 0xc);
  func_0x0b5f8420(*(undefined8 *)(param_2[4] + 8),0x18a9d0731ab6098c,&UNK_013373be,auStack_b8);
  if (uStack_6c >> 0x20 != 0xffffffff) {
    (**(code **)(&UNK_0f2be788 + (uStack_6c >> 0x20) * 8))(&uStack_bd,&uStack_a8);
  }
  auStack_b8[0] = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_b0 = (ulong)(uint)(float)*(int *)(param_2 + 2);
  func_0x0b5f8420(*(undefined8 *)(param_2[4] + 8),0x18a9d0731ab6098f,&UNK_013f0229,auStack_b8);
  if (uStack_6c >> 0x20 != 0xffffffff) {
    (**(code **)(&UNK_0f2be788 + (uStack_6c >> 0x20) * 8))(&uStack_bd,&uStack_a8);
  }
  auStack_b8[0] = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_b0 = (ulong)(uint)(float)*(int *)(param_2 + 1);
  func_0x0b5f8420(*(undefined8 *)(param_2[4] + 8),0x77a3836afa75cde1,&UNK_013d6554,auStack_b8);
  if (uStack_6c >> 0x20 != 0xffffffff) {
    (**(code **)(&UNK_0f2be788 + (uStack_6c >> 0x20) * 8))(&uStack_bd,&uStack_a8);
  }
  auStack_b8[0] = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_b0 = (ulong)(uint)(float)*(int *)((long)param_2 + 0xc);
  func_0x0b5f8420(*(undefined8 *)(param_2[4] + 8),0x77a3836afa75cde0,&UNK_0129bb89,auStack_b8);
  if (uStack_6c >> 0x20 != 0xffffffff) {
    (**(code **)(&UNK_0f2be788 + (uStack_6c >> 0x20) * 8))(&uStack_bd,&uStack_a8);
  }
  auStack_b8[0] = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_b0 = (ulong)(uint)(float)*(int *)(param_2 + 2);
  func_0x0b5f8420(*(undefined8 *)(param_2[4] + 8),0x77a3836afa75cde3,&UNK_013bcd30,auStack_b8);
  if (uStack_6c >> 0x20 != 0xffffffff) {
    (**(code **)(&UNK_0f2be788 + (uStack_6c >> 0x20) * 8))(&uStack_bd,&uStack_a8);
  }
  pfStack_38 = *(float **)(lStack_58 + 0x18);
  if (*(float **)(lStack_58 + 0x10) == pfStack_38) {
    uVar7 = 0;
    uVar8 = uStack_40;
LAB_0d50b638:
    return uVar7 & 0xff | uVar8 << 8;
  }
  uStack_bc = 0;
  pfVar9 = *(float **)(lStack_58 + 0x10) + 6;
  uVar4 = 0;
  do {
    uVar7 = uVar4;
    if (*(char *)(pfVar9 + -4) != '\x01') {
LAB_0d50b614:
      func_0x0d50b7a0();
      uVar8 = uStack_40;
      goto LAB_0d50b638;
    }
    lVar1 = *(long *)(pfVar9 + -6);
    lVar2 = *(long *)(pfVar9 + -2);
    lVar5 = *(long *)(*(long *)(lVar1 + 0x18) + lVar2 * 8);
    if (lVar5 == 0) goto LAB_0d50b614;
    if ((*(char *)(lStack_58 + 9) == '\0') && (*(char *)(lVar5 + 8) == '\x01')) {
      uStack_50 = 0x220000012e9e2e;
      uStack_60 = 0x2100000129cdbd;
      func_0x0d3dfbc0(param_2 + 5,&uStack_50,&uStack_60);
      if ((uStack_60 >> 0x37 & 1) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_60 & 0xff00ffffffffffff) - 8);
      }
      uStack_60 = 0;
      uVar8 = uStack_40;
      if ((uStack_50 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_50 & 0xff00ffffffffffff) - 8);
        uVar8 = uStack_40;
      }
      goto LAB_0d50b638;
    }
    pfVar6 = pfVar9;
    if (pfVar9[2] != 1.4013e-45) {
      lVar5 = 0xf6b4ca0;
      if (pfVar9[2] == 0.0) {
        plVar3 = *(long **)pfVar9;
        lVar5 = 0xf6b4ca0;
        if (plVar3 != (long *)0x0) {
          lVar5 = (**(code **)(*plVar3 + 0x18))(plVar3,param_2[4]);
        }
      }
      pfVar6 = (float *)(lVar5 + 8);
    }
    if ((*pfVar6 != _DAT_011983fc) || (NAN(*pfVar6) || NAN(_DAT_011983fc))) {
      plVar3 = *(long **)(*(long *)(lVar1 + 0x18) + lVar2 * 8);
      auVar11 = (**(code **)(*plVar3 + 0x10))(plVar3,param_2);
      uVar7 = auVar11._0_8_;
      uVar8 = uVar7 >> 8;
      if ((*(int *)(lStack_58 + 0x28) == 0) ||
         ((uVar10 = auVar11._8_8_ >> 0x20, *(int *)(lStack_58 + 0x28) == 1 && ((uVar10 & 1) != 0))))
      goto LAB_0d50b638;
      if ((uVar10 & 1) != 0) {
        uStack_bc = auVar11._12_4_;
        uStack_44 = auVar11._8_4_;
        uVar4 = uVar7;
        uStack_40 = uVar8;
      }
    }
    pfVar6 = pfVar9 + 4;
    uVar7 = uVar4;
    uVar8 = uStack_40;
    pfVar9 = pfVar9 + 10;
    uVar4 = uVar4 & 0xffffffff;
    if (pfVar6 == pfStack_38) goto LAB_0d50b638;
  } while( true );
}


```

## `d50f3a0` — EndGatewayFeature::vslot5

- instructions: 481
- calls: b5d6180, b5d6330, cc41df0, eeddcf0

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 EndGatewayFeature_v5(long param_1,long *param_2,int *param_3)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  int iVar14;
  undefined8 *puVar15;
  int iVar16;
  bool bVar17;
  int iStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  int *piStack_48;
  long lStack_40;
  ulong uStack_38;
  
  iVar16 = -1;
  plStack_50 = param_2;
  piStack_48 = param_3;
  lStack_40 = param_1;
  do {
    uVar10 = 0xfffffffe;
    do {
      uVar11 = uVar10;
      if ((int)uVar10 == 0) {
        iStack_84 = *piStack_48 + iVar16;
        uStack_80 = CONCAT44(piStack_48[2] + -1,piStack_48[1]);
        if ((_DAT_0f6ffb10 == (long *)0x0) &&
           (cVar2 = func_0x0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868,&UNK_013a2901),
           cVar2 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        lVar5 = *(long *)(*_DAT_0f6ffb10 + 0x200);
        puVar15 = *(undefined8 **)(lStack_40 + 0x18);
        if (puVar15 == (undefined8 *)0x0) {
          lStack_68 = 0;
          uStack_60 = 0;
          uStack_78 = 0;
          uStack_70 = 0;
          uStack_58 = 1;
          (**(code **)(*plStack_50 + 0xf8))(plStack_50,&iStack_84,lVar5,3,0,&uStack_78);
        }
        else {
          uVar4 = (**(code **)(*(long *)*puVar15 + 0x28))((long *)*puVar15,&iStack_84);
          lVar3 = func_0x0b5d6180(puVar15[1],&iStack_84);
          if (lVar3 == 0) {
            uStack_78 = CONCAT44(uStack_78._4_4_,3);
            uStack_70 = uVar4;
            lStack_68 = lVar5;
            func_0x0b5d6330(puVar15[1],&iStack_84,&iStack_84,&uStack_78);
          }
          else {
            *(undefined4 *)(lVar3 + 0x20) = 3;
            *(long *)(lVar3 + 0x30) = lVar5;
          }
        }
        iStack_84 = *piStack_48 + iVar16;
        uStack_80 = *(undefined8 *)(piStack_48 + 1);
        if (iVar16 == 0) {
          lVar5 = func_0x0cc41df0(0xf6ff9e0,0xf710db8,1);
          puVar15 = *(undefined8 **)(lStack_40 + 0x18);
          if (puVar15 != (undefined8 *)0x0) goto LAB_0d50fa1f;
LAB_0d50fa7e:
          lStack_68 = 0;
          uStack_60 = 0;
          uStack_78 = 0;
          uStack_70 = 0;
          uStack_58 = 1;
          (**(code **)(*plStack_50 + 0xf8))(plStack_50,&iStack_84,lVar5,3,0,&uStack_78);
        }
        else {
          if ((_DAT_0f6ffb10 == (long *)0x0) &&
             (cVar2 = func_0x0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868),
             cVar2 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          lVar5 = *(long *)(*_DAT_0f6ffb10 + 0x200);
          puVar15 = *(undefined8 **)(lStack_40 + 0x18);
          if (puVar15 == (undefined8 *)0x0) goto LAB_0d50fa7e;
LAB_0d50fa1f:
          uVar4 = (**(code **)(*(long *)*puVar15 + 0x28))((long *)*puVar15,&iStack_84);
          lVar3 = func_0x0b5d6180(puVar15[1],&iStack_84);
          if (lVar3 == 0) {
            uStack_78 = CONCAT44(uStack_78._4_4_,3);
            uStack_70 = uVar4;
            lStack_68 = lVar5;
            func_0x0b5d6330(puVar15[1],&iStack_84,&iStack_84,&uStack_78);
          }
          else {
            *(undefined4 *)(lVar3 + 0x20) = 3;
            *(long *)(lVar3 + 0x30) = lVar5;
          }
        }
        iStack_84 = *piStack_48 + iVar16;
        uStack_80 = CONCAT44(piStack_48[2] + 1,piStack_48[1]);
        if ((_DAT_0f6ffb10 == (long *)0x0) &&
           (cVar2 = func_0x0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868), cVar2 != '\0')
           ) {
          _DAT_00000000 = 0xdeadc0de;
        }
        lVar5 = *(long *)(*_DAT_0f6ffb10 + 0x200);
        puVar15 = *(undefined8 **)(lStack_40 + 0x18);
        if (puVar15 == (undefined8 *)0x0) {
          lStack_68 = 0;
          uStack_60 = 0;
          uStack_78 = 0;
          uStack_70 = 0;
          uStack_58 = 1;
          (**(code **)(*plStack_50 + 0xf8))(plStack_50,&iStack_84,lVar5,3,0,&uStack_78);
        }
        else {
          uVar4 = (**(code **)(*(long *)*puVar15 + 0x28))((long *)*puVar15,&iStack_84);
          lVar3 = func_0x0b5d6180(puVar15[1],&iStack_84);
          if (lVar3 == 0) {
            uStack_78 = CONCAT44(uStack_78._4_4_,3);
            uStack_70 = uVar4;
            lStack_68 = lVar5;
            func_0x0b5d6330(puVar15[1],&iStack_84,&iStack_84,&uStack_78);
          }
          else {
            *(undefined4 *)(lVar3 + 0x20) = 3;
            *(long *)(lVar3 + 0x30) = lVar5;
          }
        }
      }
      else {
        iVar14 = -1;
        uStack_38 = uVar10;
LAB_0d50f4c0:
        do {
          iStack_84 = *piStack_48 + iVar16;
          iVar9 = (int)uVar11;
          uStack_80 = CONCAT44(piStack_48[2] + iVar14,piStack_48[1] + iVar9);
          if ((iVar14 == 0 && iVar16 == 0) && ((int)uVar10 + 2U & 0xfffffffb) == 0) {
            lVar3 = func_0x0cc41df0(0xf6ff9e0,&DAT_0f713fc8,1);
            lVar6 = *(long *)(lVar3 + 0x68);
            lVar5 = *(long *)(lVar6 + 0x1b0);
            if (lVar5 != 0) {
              lVar13 = lVar6 + 0x1b0;
              do {
                bVar17 = *(ulong *)(lVar5 + 0x20) < _DAT_0f6fc888;
                if (!bVar17) {
                  lVar13 = lVar5;
                }
                lVar5 = *(long *)(lVar5 + (ulong)bVar17 * 8);
              } while (lVar5 != 0);
              if ((lVar13 != lVar6 + 0x1b0) && (*(ulong *)(lVar13 + 0x20) <= _DAT_0f6fc888)) {
                if (1 < *(uint *)(lVar13 + 0x28)) {
                  uVar7 = (ulong)(1 << (((char)*(undefined4 *)(lVar13 + 0x30) -
                                        (char)*(undefined4 *)(lVar13 + 0x2c)) + 1U & 0x1f) & 0xffffU
                                 | ~*(uint *)(lVar13 + 0x34) & (uint)*(ushort *)(lVar3 + 0x128));
                  if ((uVar7 < (ulong)(*(long *)(lVar6 + 0x1f0) - *(long *)(lVar6 + 0x1e8) >> 3)) &&
                     (lVar5 = *(long *)(*(long *)(lVar6 + 0x1e8) + uVar7 * 8), lVar5 != 0))
                  goto LAB_0d50f641;
                }
LAB_0d50f81e:
                lVar5 = lVar3;
                goto LAB_0d50f641;
              }
            }
            for (plVar12 = *(long **)(lVar6 + 0x350); plVar12 != *(long **)(lVar6 + 0x358);
                plVar12 = plVar12 + 2) {
              plVar1 = (long *)*plVar12;
              if (*(ulong *)(plVar1[1] + 8) == _DAT_0f6fc888) {
                lVar5 = (**(code **)(*plVar1 + 8))(plVar1,lVar6,*(ushort *)(lVar3 + 0x128),1);
                if (lVar5 != 0) goto LAB_0d50f641;
                break;
              }
            }
            lVar5 = lVar3;
            if ((*(byte *)(lVar6 + 0x135) & 8) != 0) {
              lVar5 = *(long *)(lVar6 + 0x200);
            }
          }
          else if (((iVar16 == 0 || iVar14 == 0) && (iVar9 != 2)) && (iVar9 != -2)) {
            lVar6 = func_0x0cc41df0(0xf6ff9e0,&DAT_0f713fc8,1);
            lVar5 = *(long *)(lVar6 + 0x68);
            lVar3 = *(long *)(lVar5 + 0x1b0);
            if (lVar3 == 0) {
LAB_0d50f7c3:
              for (plVar12 = *(long **)(lVar5 + 0x350); plVar12 != *(long **)(lVar5 + 0x358);
                  plVar12 = plVar12 + 2) {
                plVar1 = (long *)*plVar12;
                if (*(ulong *)(plVar1[1] + 8) == _DAT_0f6fc888) {
                  lVar3 = (**(code **)(*plVar1 + 8))(plVar1,lVar5,*(ushort *)(lVar6 + 0x128),1);
                  if (lVar3 != 0) goto LAB_0d50f81e;
                  break;
                }
              }
              if ((*(byte *)(lVar5 + 0x135) & 8) != 0) {
                lVar5 = *(long *)(lVar5 + 0x200);
                goto LAB_0d50f641;
              }
            }
            else {
              lVar13 = lVar5 + 0x1b0;
              do {
                bVar17 = *(ulong *)(lVar3 + 0x20) < _DAT_0f6fc888;
                if (!bVar17) {
                  lVar13 = lVar3;
                }
                lVar3 = *(long *)(lVar3 + (ulong)bVar17 * 8);
              } while (lVar3 != 0);
              if ((lVar13 == lVar5 + 0x1b0) || (_DAT_0f6fc888 < *(ulong *)(lVar13 + 0x20)))
              goto LAB_0d50f7c3;
              if (1 < *(uint *)(lVar13 + 0x28)) {
                uVar7 = (ulong)(1 << (((char)*(undefined4 *)(lVar13 + 0x30) -
                                      (char)*(undefined4 *)(lVar13 + 0x2c)) + 1U & 0x1f) & 0xffffU |
                               ~*(uint *)(lVar13 + 0x34) & (uint)*(ushort *)(lVar6 + 0x128));
                if ((uVar7 < (ulong)(*(long *)(lVar5 + 0x1f0) - *(long *)(lVar5 + 0x1e8) >> 3)) &&
                   (lVar5 = *(long *)(*(long *)(lVar5 + 0x1e8) + uVar7 * 8), lVar5 != 0))
                goto LAB_0d50f641;
              }
            }
            lVar5 = lVar6;
          }
          else {
            if ((_DAT_0f6ffb10 == (long *)0x0) &&
               (cVar2 = func_0x0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868),
               cVar2 != '\0')) {
              _DAT_00000000 = 0xdeadc0de;
            }
            lVar5 = *(long *)(*_DAT_0f6ffb10 + 0x200);
          }
LAB_0d50f641:
          puVar15 = *(undefined8 **)(lStack_40 + 0x18);
          if (puVar15 == (undefined8 *)0x0) {
            lStack_68 = 0;
            uStack_60 = 0;
            uStack_78 = 0;
            uStack_70 = 0;
            uStack_58 = 1;
            (**(code **)(*plStack_50 + 0xf8))(plStack_50,&iStack_84,lVar5,3,0,&uStack_78);
            iVar14 = iVar14 + 1;
            if (iVar14 == 2) break;
            goto LAB_0d50f4c0;
          }
          uVar4 = (**(code **)(*(long *)*puVar15 + 0x28))((long *)*puVar15,&iStack_84);
          lVar3 = func_0x0b5d6180(puVar15[1],&iStack_84);
          if (lVar3 == 0) {
            uStack_78 = CONCAT44(uStack_78._4_4_,3);
            uStack_70 = uVar4;
            lStack_68 = lVar5;
            func_0x0b5d6330(puVar15[1],&iStack_84,&iStack_84,&uStack_78);
          }
          else {
            *(undefined4 *)(lVar3 + 0x20) = 3;
            *(long *)(lVar3 + 0x30) = lVar5;
          }
          iVar14 = iVar14 + 1;
          uVar11 = uStack_38;
        } while (iVar14 != 2);
      }
      uVar8 = (int)uVar11 + 1;
      uVar10 = (ulong)uVar8;
    } while (uVar8 != 3);
    iVar16 = iVar16 + 1;
    if (iVar16 == 2) {
      return 1;
    }
  } while( true );
}


```

## `d50fbf0` — EndIslandFeature::vslot5

- instructions: 153
- calls: b5d6180, b5d6330, cc41df0

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 EndIslandFeature_v5(long param_1,long *param_2,int *param_3,long *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  undefined8 uStack_98;
  int iStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  float fStack_58;
  float fStack_48;
  
  iVar2 = (**(code **)(*param_4 + 0x18))(param_4,3);
  fStack_58 = (float)iVar2 + _DAT_011987f8;
  if (_DAT_011986e0 < fStack_58) {
    iVar2 = 0;
    do {
      fVar10 = (float)((uint)fStack_58 ^ _DAT_014e9ac0);
      iVar7 = (int)fVar10 - (uint)(fVar10 < (float)(int)fVar10);
      if (iVar7 <= (int)((uint)((float)(int)fStack_58 < fStack_58) + (int)fStack_58)) {
        fVar10 = (fStack_58 + _DAT_011983f0) * (fStack_58 + _DAT_011983f0);
        iVar8 = (int)fStack_58 + (uint)((float)(int)fStack_58 < fStack_58) + 1;
        iVar9 = iVar7;
        fStack_48 = fVar10;
        do {
          iVar6 = iVar7;
          do {
            if ((float)(iVar6 * iVar6 + iVar9 * iVar9) <= fVar10) {
              iStack_90 = param_3[2] + iVar6;
              uStack_98 = CONCAT44(param_3[1] + iVar2,*param_3 + iVar9);
              uVar3 = func_0x0cc41df0(0xf6ff9e0,&DAT_0f719dd8,1);
              puVar1 = *(undefined8 **)(param_1 + 0x18);
              if (puVar1 == (undefined8 *)0x0) {
                uStack_78 = 0;
                uStack_70 = 0;
                uStack_88 = 0;
                uStack_80 = 0;
                uStack_68 = 1;
                (**(code **)(*param_2 + 0xf8))(param_2,&uStack_98,uVar3,3,0,&uStack_88);
                fVar10 = fStack_48;
              }
              else {
                uVar4 = (**(code **)(*(long *)*puVar1 + 0x28))((long *)*puVar1,&uStack_98);
                lVar5 = func_0x0b5d6180(puVar1[1],&uStack_98);
                if (lVar5 == 0) {
                  uStack_88 = CONCAT44(uStack_88._4_4_,3);
                  uStack_80 = uVar4;
                  uStack_78 = uVar3;
                  func_0x0b5d6330(puVar1[1],&uStack_98,&uStack_98,&uStack_88);
                  fVar10 = fStack_48;
                }
                else {
                  *(undefined4 *)(lVar5 + 0x20) = 3;
                  *(undefined8 *)(lVar5 + 0x30) = uVar3;
                  fVar10 = fStack_48;
                }
              }
            }
            iVar6 = iVar6 + 1;
          } while (iVar8 != iVar6);
          iVar9 = iVar9 + 1;
        } while (iVar9 != iVar8);
      }
      iVar7 = (**(code **)(*param_4 + 0x18))(param_4,2);
      fStack_58 = fStack_58 - ((float)iVar7 + _DAT_011986e0);
      iVar2 = iVar2 + -1;
    } while (_DAT_011986e0 < fStack_58);
  }
  return 1;
}


```

## `d50fe60` — BeardAndShaverFeature::vslot0

- instructions: 104
- calls: 412a280, 412c2d0, 4abe980, eeddcf0

```c

/* WARNING: Possible PIC construction at 0x0d50fe75: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04abe9ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04abea54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0d50fe7a) */
/* WARNING: Removing unreachable block (ram,0x04abea59) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long BeardAndShaverFeature_v0(undefined8 *param_1)

{
  long *plVar1;
  byte bVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_30;
  undefined8 *puStack_28;
  undefined8 uStack_10;
  
  *param_1 = &vt_BeardAndShaverFeature;
  uStack_10 = 0xd50fe7a;
  puStack_28 = param_1;
  lVar5 = param_1[0x32];
  if ((lVar5 != param_1[0x30]) || (*(int *)(param_1 + 0x31) != 0)) {
    uStack_30 = 0x4abe9c9;
    lVar5 = func_0x0eeddcf0(&UNK_014756d5,&UNK_01198d5e,0x25,&UNK_0126e3df,&UNK_013a8ed3);
    if ((char)lVar5 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  lVar7 = param_1[0x2a];
  if (lVar7 != 0) {
    param_1[0x2b] = lVar7;
    puVar6 = &uStack_30;
    uStack_30 = 0x4abe9f1;
    goto SUB_0412a280;
  }
  lVar7 = param_1[0x27];
  if (lVar7 != 0) {
    lVar9 = param_1[0x28];
    lVar8 = lVar7;
    if (lVar7 != lVar9) {
      do {
        if ((*(byte *)(lVar9 + -0x20) & 1) == 0) {
          bVar2 = *(byte *)(lVar9 + -0x40);
        }
        else {
          uStack_30 = 0x4abea41;
          lVar5 = func_0x0412a280(*(undefined8 *)(lVar9 + -0x10),
                                  *(ulong *)(lVar9 + -0x20) & 0xfffffffffffffffe);
          bVar2 = *(byte *)(lVar9 + -0x40);
        }
        if ((bVar2 & 1) != 0) {
          lVar7 = *(long *)(lVar9 + -0x30);
          puVar6 = &uStack_30;
          uStack_30 = 0x4abea59;
          goto SUB_0412a280;
        }
        lVar9 = lVar9 + -0x48;
      } while (lVar9 != lVar7);
      lVar8 = param_1[0x27];
    }
    param_1[0x28] = lVar7;
    uStack_30 = 0x4abea6f;
    lVar5 = func_0x0412a280(lVar8,param_1[0x29] - lVar8);
  }
  plVar3 = (long *)param_1[0x26];
  if (plVar3 == (long *)0x0) {
LAB_04abea8a:
    bVar2 = *(byte *)(param_1 + 0x20);
  }
  else {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar5 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar5 != 0) goto LAB_04abea8a;
    uStack_30 = 0x4abea9f;
    (**(code **)(*plVar3 + 0x10))(plVar3);
    uStack_30 = 0x4abeaa7;
    lVar5 = func_0x0412c2d0(plVar3);
    bVar2 = *(byte *)(param_1 + 0x20);
  }
  if ((bVar2 & 1) == 0) {
    return lVar5;
  }
  lVar7 = param_1[0x22];
  puVar6 = &uStack_10;
SUB_0412a280:
  *(long *)((long)puVar6 + -8) = lVar5;
  if (lVar7 != 0) {
    pcVar4 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)puVar6 + -0x10) = 0xee326ba;
    (*pcVar4)(&DAT_0f5463b0,lVar7);
  }
  return *(long *)((long)puVar6 + -8);
}


```

## `d50fe90` — BeardAndShaverFeature::vslot1

- instructions: 21
- calls: 4abe980

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 BeardAndShaverFeature_v1(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &vt_BeardAndShaverFeature;
  func_0x04abe980(param_1 + 0x1e);
  uVar1 = func_0x04abe980(param_1 + 9);
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return uVar1;
}


```

## `d50fed0` — BonusChestFeature::vslot1

- instructions: 11

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 BonusChestFeature_v1(long param_1)

{
  undefined8 in_RAX;
  
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return in_RAX;
}


```

## `d50fee0` — ConditionalListFeature::vslot0

- instructions: 45
- calls: 412a280

```c

void ConditionalListFeature_v0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 uStack_31;
  
  *param_1 = &vt_ConditionalListFeature;
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    lVar3 = param_1[3];
    lVar2 = lVar1;
    if (lVar1 != lVar3) {
      do {
        if ((ulong)*(uint *)(lVar3 + -8) != 0xffffffff) {
          (**(code **)(&UNK_0f472ab8 + (ulong)*(uint *)(lVar3 + -8) * 8))(&uStack_31,lVar3 + -0x10);
        }
        *(undefined4 *)(lVar3 + -8) = 0xffffffff;
        lVar3 = lVar3 + -0x28;
      } while (lVar3 != lVar1);
      lVar2 = param_1[2];
    }
    param_1[3] = lVar1;
    func_0x0412a280(lVar2,param_1[4] - lVar2);
  }
  return;
}


```

## `d50ff90` — ConditionalListFeature::vslot1

- instructions: 48
- calls: 412a280

```c

void ConditionalListFeature_v1(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 uStack_31;
  
  *param_1 = &vt_ConditionalListFeature;
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    lVar3 = param_1[3];
    lVar2 = lVar1;
    if (lVar1 != lVar3) {
      do {
        if ((ulong)*(uint *)(lVar3 + -8) != 0xffffffff) {
          (**(code **)(&UNK_0f472ab8 + (ulong)*(uint *)(lVar3 + -8) * 8))(&uStack_31,lVar3 + -0x10);
        }
        *(undefined4 *)(lVar3 + -8) = 0xffffffff;
        lVar3 = lVar3 + -0x28;
      } while (lVar3 != lVar1);
      lVar2 = param_1[2];
    }
    param_1[3] = lVar1;
    func_0x0412a280(lVar2,param_1[4] - lVar2);
  }
  func_0x0412a280(param_1,0x30);
  return;
}


```

## `d510050` — EndGatewayFeature::vslot1

- instructions: 11

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 EndGatewayFeature_v1(long param_1)

{
  undefined8 in_RAX;
  
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return in_RAX;
}


```

## `d510060` — EndIslandFeature::vslot1

- instructions: 11

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 EndIslandFeature_v1(long param_1)

{
  undefined8 in_RAX;
  
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return in_RAX;
}


```

## `d854cb0` — entt::basic_sparse_set<Scripting::ObjectHandleValue, std::__1::allocator<S2, ?>>::vslot5, entt::basic_storage<long, Scripting::ObjectHandleValue, std::__1::allocator<long>>::vslot5, entt::basic_storage<Scripting::ObjectHandleValue, S2, ?, std::__1::allocator<S2, ?>>::vslot5 (+736 more)

- instructions: 1

```c

void entt_basic_storage_Editor_ScriptModule_ScriptBlockUtilityShapeVolumeOptionsCuboid_Scripting_ObjectHandleValue_std_1_allo
               (void)

{
  return;
}


```

## `ee13f50` — PacketObserver::vslot0, NetworkSession::vslot0, NullSoundPlayer::vslot0 (+10 more)

- instructions: 25

```c

void ServerContentKeyProvider_ServerContentKeyProviderImpl_v0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  *param_1 = &UNK_0f534768;
  plVar3 = (long *)param_1[2];
  if (plVar3 == (long *)0x0) {
    *(undefined1 *)param_1[1] = 0;
    return;
  }
  *(undefined1 *)param_1[1] = 0;
  LOCK();
  plVar1 = plVar3 + 1;
  lVar2 = *plVar1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (lVar2 != 0) {
    return;
  }
  (**(code **)(*plVar3 + 0x10))(plVar3);
  if (plVar3[2] != 0) {
    LOCK();
    plVar1 = plVar3 + 2;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 != 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0412c2ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x20))();
  return;
}


```

