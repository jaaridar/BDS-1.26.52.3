/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcb01e90 (ELF vaddr 0xca01e90)
 * Label: callee-of:0xc96a120
 * Body:  [[0cb01e90, 0cb02152] [0cb02160, 0cb0218e] [0cb02190, 0cb02236] [0cb02240, 0cb023b2]]
 * Ghidra: FUN_0cb01e90
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_0cb01e90(undefined8 param_1,undefined4 param_2,undefined8 *param_3,long param_4)

{
  byte bVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long *plVar6;
  char cVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  byte *pbVar13;
  ulong uVar14;
  byte *pbVar15;
  uint uVar16;
  long lVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  bool bVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  long lStack_a0;
  long *plStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  if ((DAT_0f6fa2d0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f6fa2d0), iVar8 != 0)) {
    func_0x0cb10700();
    func_0x0eee2f40(&UNK_0cb10790,&DAT_0f6fa280,0xf53dab8);
    func_0x0410844d(&DAT_0f6fa2d0);
  }
  lStack_88 = param_4 + 0xc0;
  lStack_80 = param_4 + 0x128;
  bVar21 = (ulong)(*(long *)(param_4 + 0x150) - *(long *)(param_4 + 0x148)) <
           (ulong)(*(long *)(param_4 + 0xe8) - *(long *)(param_4 + 0xe0));
  lVar9 = lStack_80;
  if (!bVar21) {
    lVar9 = lStack_88;
  }
  uStack_70 = (ulong)bVar21;
  uStack_78 = param_4 + 400;
  plStack_98 = (long *)(lVar9 + 0x20);
  if (*(char *)(lVar9 + 0x40) == '\x02') {
    lStack_90 = *(long *)(lVar9 + 0x48);
  }
  else {
    lStack_90 = *(long *)(lVar9 + 0x28) - *(long *)(lVar9 + 0x20) >> 2;
  }
  lStack_a0 = param_4;
  if (lStack_90 != 0) {
    lVar9 = *plStack_98;
    do {
      lVar12 = lStack_90 + -1;
      cVar7 = func_0x0cb18880(&plStack_98,*(undefined4 *)(lVar9 + lVar12 * 4));
      if (cVar7 != '\0') break;
      lStack_90 = lVar12;
    } while (lVar12 != 0);
  }
  plVar6 = plStack_98;
  uStack_48 = (undefined4)uStack_78;
  uStack_44 = uStack_78._4_4_;
  uStack_40 = (undefined4)uStack_70;
  uStack_3c = uStack_70._4_4_;
  lStack_58 = lStack_88;
  lStack_50 = lStack_80;
  plStack_68 = plStack_98;
  lStack_60 = lStack_90;
  uStack_b8 = (undefined4)uStack_78;
  uStack_b4 = uStack_78._4_4_;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  lStack_c8 = lStack_88;
  lStack_c0 = lStack_80;
  lStack_d0 = lStack_90;
  if (lStack_90 == 0) {
    return param_3;
  }
  fVar22 = (float)func_0x0eee4390();
  fVar23 = (float)func_0x0eee4390((int)((ulong)param_1 >> 0x20));
  fVar24 = (float)func_0x0eee4390(param_2);
  lVar9 = *plVar6;
  do {
    uVar16 = *(uint *)(lVar9 + -4 + lStack_d0 * 4);
    uVar11 = (ulong)((uVar16 & 0xff000) >> 9);
    uVar10 = (ulong)((uVar16 & 0xfff) << 2);
    uVar16 = *(uint *)(*(long *)(*(long *)(lStack_c8 + 8) + uVar11) + uVar10);
    lVar9 = *(long *)(*(long *)(lStack_c8 + 0x50) + (ulong)((uVar16 & 0xfffe0) >> 2));
    uVar14 = (ulong)(uVar16 & 0x1f);
    if ((((*(int *)(lVar9 + uVar14 * 0x18) <= (int)fVar22) &&
         ((int)fVar22 <= *(int *)(lVar9 + 0xc + uVar14 * 0x18))) &&
        (*(int *)(lVar9 + 8 + uVar14 * 0x18) <= (int)fVar24)) &&
       ((((int)fVar24 <= *(int *)(lVar9 + 0x14 + uVar14 * 0x18) &&
         (*(int *)(lVar9 + 4 + uVar14 * 0x18) <= (int)fVar23)) &&
        ((int)fVar23 <= *(int *)(lVar9 + uVar14 * 0x18 + 0x10))))) {
      uVar16 = *(uint *)(*(long *)(*(long *)(lStack_c0 + 8) + uVar11) + uVar10);
      uVar16 = *(uint *)(*(long *)(*(long *)(lStack_c0 + 0x50) + (ulong)((uVar16 & 0xfffe0) >> 2)) +
                        (ulong)(uVar16 & 0x1f) * 4);
      uVar16 = *(uint *)(*(long *)(*(long *)(lStack_a0 + 0x60) + (ulong)((uVar16 & 0xff000) >> 9)) +
                        (ulong)(uVar16 & 0xfff) * 4);
      pbVar18 = (byte *)((ulong)((uVar16 & 0x1f) * 0x18) +
                        *(long *)(*(long *)(lStack_a0 + 0xa8) + (ulong)((uVar16 & 0xfffe0) >> 2)));
      pbVar19 = (byte *)*param_3;
      pbVar20 = (byte *)param_3[1];
      if (pbVar19 == pbVar20) {
LAB_0cb021a3:
        if (pbVar19 != pbVar20) goto LAB_0cb02200;
      }
      else {
        if ((*pbVar18 & 1) == 0) {
          uVar10 = (ulong)(*pbVar18 >> 1);
          pbVar13 = pbVar18 + 1;
        }
        else {
          uVar10 = *(ulong *)(pbVar18 + 8);
          pbVar13 = *(byte **)(pbVar18 + 0x10);
        }
        do {
          bVar1 = *pbVar19;
          if ((bVar1 & 1) == 0) {
            uVar11 = (ulong)(bVar1 >> 1);
          }
          else {
            uVar11 = *(ulong *)(pbVar19 + 8);
          }
          if (uVar11 == uVar10) {
            if ((bVar1 & 1) == 0) {
              pbVar15 = pbVar19 + 1;
            }
            else {
              pbVar15 = *(byte **)(pbVar19 + 0x10);
            }
            iVar8 = bcmp(pbVar15,pbVar13,uVar10);
            if (iVar8 == 0) goto LAB_0cb021a3;
          }
          pbVar19 = pbVar19 + 0x18;
        } while (pbVar19 != pbVar20);
      }
      if (pbVar20 < (byte *)param_3[2]) {
        if ((*pbVar18 & 1) == 0) {
          *(undefined8 *)(pbVar20 + 0x10) = *(undefined8 *)(pbVar18 + 0x10);
          uVar3 = *(undefined4 *)(pbVar18 + 4);
          uVar4 = *(undefined4 *)(pbVar18 + 8);
          uVar5 = *(undefined4 *)(pbVar18 + 0xc);
          *(undefined4 *)pbVar20 = *(undefined4 *)pbVar18;
          *(undefined4 *)(pbVar20 + 4) = uVar3;
          *(undefined4 *)(pbVar20 + 8) = uVar4;
          *(undefined4 *)(pbVar20 + 0xc) = uVar5;
        }
        else {
          func_0x0412e5e0(pbVar20,*(undefined8 *)(pbVar18 + 0x10),*(undefined8 *)(pbVar18 + 8));
        }
        pbVar20 = pbVar20 + 0x18;
      }
      else {
        pbVar20 = (byte *)FUN_04909a40(param_3,pbVar18);
      }
      param_3[1] = pbVar20;
    }
LAB_0cb02200:
    lStack_d0 = lStack_d0 + -1;
    if (lStack_d0 == 0) {
      return param_3;
    }
    lVar9 = *plVar6;
    lVar12 = CONCAT44(uStack_ac,uStack_b0);
    while( true ) {
      uVar16 = *(uint *)(lVar9 + -4 + lStack_d0 * 4);
      uVar10 = (ulong)(uVar16 & 0xfff);
      uVar11 = (ulong)((uVar16 & 0xff000) >> 0xc);
      uVar16 = uVar16 & 0xfff00000;
      if (lVar12 != 0) {
        lVar17 = 0;
        do {
          lVar2 = *(long *)(*(long *)((long)&lStack_c8 + lVar17) + 8);
          if ((((ulong)(*(long *)(*(long *)((long)&lStack_c8 + lVar17) + 0x10) - lVar2 >> 3) <=
                uVar11) || (lVar2 = *(long *)(lVar2 + uVar11 * 8), lVar2 == 0)) ||
             (0xffffe < (*(uint *)(lVar2 + uVar10 * 4) ^ uVar16))) goto LAB_0cb02240;
          lVar17 = lVar17 + 8;
        } while (lVar12 * 8 - lVar17 != 0);
      }
      lVar17 = lVar12 * 8;
      if ((undefined4 *)((long)&lStack_c0 + lVar12 * 8) != &uStack_b8) {
        do {
          lVar2 = *(long *)(*(long *)((long)&lStack_c0 + lVar17) + 8);
          if ((((ulong)(*(long *)(*(long *)((long)&lStack_c0 + lVar17) + 0x10) - lVar2 >> 3) <=
                uVar11) || (lVar2 = *(long *)(lVar2 + uVar11 * 8), lVar2 == 0)) ||
             (0xffffe < (*(uint *)(lVar2 + uVar10 * 4) ^ uVar16))) goto LAB_0cb02240;
          lVar17 = lVar17 + 8;
        } while (lVar17 != 8);
      }
      lVar17 = *(long *)(CONCAT44(uStack_b4,uStack_b8) + 8);
      if ((((ulong)(*(long *)(CONCAT44(uStack_b4,uStack_b8) + 0x10) - lVar17 >> 3) <= uVar11) ||
          (lVar17 = *(long *)(lVar17 + uVar11 * 8), lVar17 == 0)) ||
         (0xffffe < (uVar16 ^ *(uint *)(lVar17 + uVar10 * 4)))) break;
LAB_0cb02240:
      lStack_d0 = lStack_d0 + -1;
      if (lStack_d0 == 0) {
        return param_3;
      }
    }
  } while( true );
}


