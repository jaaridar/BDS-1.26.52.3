/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4949aa0
 * Label: string:Erosion Factor for base value: {:.2f}
 * Body:  [[0494990c, 04949a16] [04949a20, 04949a9d] [04949aa0, 04949b53] [04949c1b, 04949cf0] [04949d2b, 04949d39] [0494a460, 0494a49e] [0494a4a0, 0494a524] [0494a530, 0494a580] [0494a590, 0494a611] [0494a620, 0494a63e] [0494a640, 0494a6ba] [0494a6c0, 0494a708] [0494a710, 0494a784]]
 * Ghidra: FUN_04949aa0
 */


/* WARNING: Instruction at (ram,0x04949aa1) overlaps instruction at (ram,0x04949aa0)
    */

void FUN_04949aa0(ulong *param_1,ulong *param_2,undefined8 param_3,long param_4,undefined8 param_5,
                 undefined8 param_6,ulong param_7,ulong *param_8,long param_9,ulong param_10,
                 ulong param_11,ulong param_12,ulong *param_13,ulong *param_14,undefined8 param_15,
                 undefined8 param_16,undefined8 param_17,undefined8 param_18,undefined8 param_19,
                 undefined8 param_20)

{
  char cVar1;
  char cVar2;
  int iVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *unaff_RBX;
  ulong *unaff_RBP;
  ulong *puVar7;
  ulong *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  ulong uVar11;
  long lVar12;
  long unaff_R14;
  ulong uVar13;
  long lVar14;
  ulong *puVar15;
  ulong uVar16;
  ulong *unaff_R15;
  bool bVar17;
  longdouble in_ST0;
  longdouble lVar18;
  longdouble in_ST1;
  longdouble lVar19;
  longdouble in_ST2;
  longdouble lVar20;
  longdouble in_ST3;
  longdouble lVar21;
  longdouble in_ST4;
  longdouble lVar22;
  longdouble in_ST5;
  longdouble lVar23;
  longdouble in_ST6;
  longdouble lVar24;
  longdouble in_ST7;
  undefined1 auVar25 [16];
  
  do {
    lVar24 = in_ST7;
    lVar23 = in_ST6;
    lVar22 = in_ST5;
    lVar21 = in_ST4;
    lVar20 = in_ST3;
    lVar19 = in_ST2;
    lVar18 = in_ST1;
    *(short *)(param_4 * 5 + -2) = (short)in_ST0;
    in_ST7 = lVar24;
    cVar1 = func_0x0494ae10(param_1,param_2,unaff_R14);
    param_1 = unaff_R15 + 3;
    cVar2 = func_0x0494ae10(param_1,unaff_RBP,unaff_R14);
    if (cVar2 != '\0') {
      param_9 = -param_9;
      if (cVar1 != '\0') {
        return;
      }
      param_8 = unaff_R15 + -3;
      param_14 = unaff_R15 + -6;
      param_13 = unaff_R15 + -9;
      goto LAB_04949927;
    }
    param_2 = unaff_R15;
    if (cVar1 != '\0') goto LAB_0494992f;
    do {
      unaff_R15 = unaff_RBP;
      param_9 = -param_9;
      func_0x049498f0(unaff_RBX,param_2,unaff_R14,param_9,param_7._4_1_);
      unaff_RBX = param_2 + 3;
      param_7 = 0;
LAB_04949927:
      param_9 = -param_9;
      param_1 = unaff_RBX;
      unaff_RBP = unaff_R15;
LAB_0494992f:
      while( true ) {
        param_9 = param_9 + 1;
        uVar11 = (long)unaff_RBP - (long)param_1;
        uVar16 = ((long)uVar11 >> 3) * -0x5555555555555555;
        if (uVar16 < 6) {
                    /* WARNING: Could not recover jumptable at 0x04949b52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&UNK_0156faf8 +
                    *(int *)(&UNK_0156faf8 + ((long)uVar11 >> 3) * -0x5555555555555554)))();
          return;
        }
        if ((long)uVar11 < 0x240) {
          if ((param_7 & 0x100000000) == 0) {
            if (param_1 == unaff_RBP) {
              return;
            }
            goto LAB_0494a652;
          }
          if (param_1 == unaff_RBP) {
            return;
          }
          puVar4 = param_1 + 3;
          if (puVar4 == unaff_RBP) {
            return;
          }
          lVar14 = 0;
          puVar7 = param_1;
          param_13 = unaff_RBP;
          goto LAB_0494a4d2;
        }
        if (param_9 == 1) {
          if (param_1 == unaff_RBP) {
            return;
          }
          uVar13 = uVar16 - 2 >> 1;
          lVar14 = uVar13 + 1;
          puVar4 = param_1 + uVar13 * 3;
          do {
            func_0x0494b120(param_1,unaff_R14,uVar16,puVar4);
            puVar4 = puVar4 + -3;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
          uVar11 = (uVar11 >> 3) * -0x5555555555555555;
          do {
            func_0x0494b3d0(param_1,unaff_RBP,unaff_R14,uVar11);
            unaff_RBP = unaff_RBP + -3;
            bVar17 = 2 < uVar11;
            uVar11 = uVar11 - 1;
          } while (bVar17);
          return;
        }
        puVar4 = param_1 + (uVar16 >> 1) * 3;
        param_4 = unaff_R14;
        if (uVar11 < 0xc01) {
          func_0x04949d40(puVar4,param_1,param_8);
        }
        else {
          func_0x04949d40(param_1,puVar4,param_8,unaff_R14);
          func_0x04949d40(param_1 + 3,puVar4 + -3,param_14,unaff_R14);
          func_0x04949d40(param_1 + 6,puVar4 + 3,param_13,unaff_R14);
          func_0x04949d40(puVar4 + -3,puVar4,puVar4 + 3);
          param_12 = param_1[2];
          uVar11 = *param_1;
          uVar16 = param_1[1];
          param_1[2] = puVar4[2];
          uVar13 = puVar4[1];
          *param_1 = *puVar4;
          param_1[1] = uVar13;
          puVar4[2] = param_12;
          param_10._0_4_ = (undefined4)uVar11;
          param_10._4_4_ = (undefined4)(uVar11 >> 0x20);
          param_11._0_4_ = (undefined4)uVar16;
          param_11._4_4_ = (undefined4)(uVar16 >> 0x20);
          *(undefined4 *)puVar4 = (undefined4)param_10;
          *(undefined4 *)((long)puVar4 + 4) = param_10._4_4_;
          *(undefined4 *)(puVar4 + 1) = (undefined4)param_11;
          *(undefined4 *)((long)puVar4 + 0xc) = param_11._4_4_;
          param_10 = uVar11;
          param_11 = uVar16;
        }
        if ((param_7 & 0x100000000) != 0) break;
        bVar17 = ((byte)param_1[-3] & 1) != 0;
        pbVar9 = (byte *)((long)param_1 + -0x17);
        if (bVar17) {
          pbVar9 = (byte *)param_1[-1];
        }
        uVar11 = (ulong)(byte)((byte)param_1[-3] >> 1);
        if (bVar17) {
          uVar11 = param_1[-2];
        }
        bVar17 = ((byte)*param_1 & 1) != 0;
        pbVar10 = (byte *)((long)param_1 + 1);
        if (bVar17) {
          pbVar10 = (byte *)param_1[2];
        }
        uVar16 = (ulong)(byte)((byte)*param_1 >> 1);
        if (bVar17) {
          uVar16 = param_1[1];
        }
        uVar13 = uVar11;
        if (uVar16 < uVar11) {
          uVar13 = uVar16;
        }
        iVar3 = func_0x0eee2ff0(pbVar9,pbVar10,uVar13);
        if (iVar3 == 0) {
          if (uVar11 < uVar16) break;
        }
        else if (iVar3 < 0) break;
        param_1 = (ulong *)func_0x0494a790(param_1,unaff_RBP,unaff_R14);
      }
      auVar25 = func_0x0494aad0(param_1,unaff_RBP,unaff_R14);
      param_2 = auVar25._0_8_;
      unaff_RBX = param_1;
      unaff_R15 = param_2;
      in_ST0 = lVar18;
      in_ST1 = lVar19;
      in_ST2 = lVar20;
      in_ST3 = lVar21;
      in_ST4 = lVar22;
      in_ST5 = lVar23;
      in_ST6 = lVar24;
    } while ((auVar25._8_8_ & 1) == 0);
  } while( true );
LAB_0494a652:
  do {
    puVar4 = param_1;
    param_1 = puVar4 + 3;
    if (param_1 == unaff_RBP) {
      return;
    }
    bVar17 = ((byte)puVar4[3] & 1) != 0;
    pbVar9 = (byte *)((long)puVar4 + 0x19);
    if (bVar17) {
      pbVar9 = (byte *)puVar4[5];
    }
    uVar11 = (ulong)(byte)((byte)puVar4[3] >> 1);
    if (bVar17) {
      uVar11 = puVar4[4];
    }
    bVar17 = ((byte)*puVar4 & 1) != 0;
    pbVar10 = (byte *)((long)puVar4 + 1);
    if (bVar17) {
      pbVar10 = (byte *)puVar4[2];
    }
    uVar16 = (ulong)(byte)((byte)*puVar4 >> 1);
    if (bVar17) {
      uVar16 = puVar4[1];
    }
    uVar13 = uVar11;
    if (uVar16 < uVar11) {
      uVar13 = uVar16;
    }
    param_11 = 0x494a6b3;
    iVar3 = func_0x0eee2ff0(pbVar9,pbVar10,uVar13);
    if (iVar3 == 0) goto LAB_0494a6c0;
  } while (-1 < iVar3);
  goto LAB_0494a6c5;
LAB_0494a6c0:
  if (uVar11 < uVar16) {
LAB_0494a6c5:
    param_14 = (ulong *)puVar4[5];
    param_12 = *param_1;
    param_13 = (ulong *)puVar4[4];
    *param_1 = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar8 = (ulong *)(param_12 >> 1 & 0x7f);
    puVar7 = (ulong *)((long)&param_12 + 1);
    if ((param_12 & 1) != 0) {
      puVar7 = param_14;
      puVar8 = param_13;
    }
    do {
      puVar15 = puVar4;
      puVar15[5] = puVar15[2];
      *(int *)(puVar15 + 3) = (int)*puVar15;
      *(undefined4 *)((long)puVar15 + 0x1c) = *(undefined4 *)((long)puVar15 + 4);
      *(int *)(puVar15 + 4) = (int)puVar15[1];
      *(undefined4 *)((long)puVar15 + 0x24) = *(undefined4 *)((long)puVar15 + 0xc);
      *(undefined2 *)puVar15 = 0;
      bVar17 = ((byte)puVar15[-3] & 1) != 0;
      pbVar9 = (byte *)((long)puVar15 + -0x17);
      if (bVar17) {
        pbVar9 = (byte *)puVar15[-1];
      }
      puVar4 = (ulong *)(ulong)(byte)((byte)puVar15[-3] >> 1);
      if (bVar17) {
        puVar4 = (ulong *)puVar15[-2];
      }
      puVar6 = puVar8;
      if (puVar4 < puVar8) {
        puVar6 = puVar4;
      }
      param_11 = 0x494a763;
      iVar3 = func_0x0eee2ff0(puVar7,pbVar9,puVar6);
    } while (((iVar3 != 0) || (iVar3 = -1, puVar8 < puVar4)) && (puVar4 = puVar15 + -3, iVar3 < 0));
    puVar15[2] = (ulong)param_14;
    *(undefined4 *)puVar15 = (undefined4)param_12;
    *(undefined4 *)((long)puVar15 + 4) = param_12._4_4_;
    *(undefined4 *)(puVar15 + 1) = param_13._0_4_;
    *(undefined4 *)((long)puVar15 + 0xc) = param_13._4_4_;
  }
  goto LAB_0494a652;
LAB_0494a4d2:
  bVar17 = ((byte)puVar7[3] & 1) != 0;
  pbVar9 = (byte *)((long)puVar7 + 0x19);
  if (bVar17) {
    pbVar9 = (byte *)puVar7[5];
  }
  uVar11 = (ulong)(byte)((byte)puVar7[3] >> 1);
  if (bVar17) {
    uVar11 = puVar7[4];
  }
  bVar17 = ((byte)*puVar7 & 1) != 0;
  pbVar10 = (byte *)((long)puVar7 + 1);
  if (bVar17) {
    pbVar10 = (byte *)puVar7[2];
  }
  uVar16 = (ulong)(byte)((byte)*puVar7 >> 1);
  if (bVar17) {
    uVar16 = puVar7[1];
  }
  uVar13 = uVar11;
  if (uVar16 < uVar11) {
    uVar13 = uVar16;
  }
  iVar3 = func_0x0eee2ff0(pbVar9,pbVar10,uVar13);
  puVar8 = puVar4;
  if (iVar3 == 0) {
    if (uVar11 < uVar16) goto LAB_0494a535;
  }
  else if (iVar3 < 0) {
LAB_0494a535:
    param_12 = puVar4[2];
    param_10 = *puVar4;
    param_11 = puVar4[1];
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    uVar16 = param_10 >> 1 & 0x7f;
    uVar11 = (long)&param_10 + 1;
    lVar12 = lVar14;
    param_14 = puVar4;
    if ((param_10 & 1) != 0) {
      uVar11 = param_12;
      uVar16 = param_11;
    }
    do {
      puVar7[5] = puVar7[2];
      *(int *)(puVar7 + 3) = (int)*puVar7;
      *(undefined4 *)((long)puVar7 + 0x1c) = *(undefined4 *)((long)puVar7 + 4);
      *(int *)(puVar7 + 4) = (int)puVar7[1];
      *(undefined4 *)((long)puVar7 + 0x24) = *(undefined4 *)((long)puVar7 + 0xc);
      *(undefined2 *)puVar7 = 0;
      puVar4 = param_1;
      if (lVar12 == 0) break;
      bVar17 = ((byte)puVar7[-3] & 1) != 0;
      pbVar9 = (byte *)((long)puVar7 + -0x17);
      if (bVar17) {
        pbVar9 = (byte *)puVar7[-1];
      }
      uVar13 = (ulong)(byte)((byte)puVar7[-3] >> 1);
      if (bVar17) {
        uVar13 = puVar7[-2];
      }
      uVar5 = uVar16;
      if (uVar13 < uVar16) {
        uVar5 = uVar13;
      }
      iVar3 = func_0x0eee2ff0(uVar11,pbVar9,uVar5);
      puVar4 = puVar7;
      if ((iVar3 == 0) && (iVar3 = -1, uVar13 <= uVar16)) break;
      lVar12 = lVar12 + 0x18;
      puVar7 = puVar7 + -3;
    } while (iVar3 < 0);
    puVar4[2] = param_12;
    *(undefined4 *)puVar4 = (undefined4)param_10;
    *(undefined4 *)((long)puVar4 + 4) = param_10._4_4_;
    *(undefined4 *)(puVar4 + 1) = (undefined4)param_11;
    *(undefined4 *)((long)puVar4 + 0xc) = param_11._4_4_;
    puVar8 = param_14;
    unaff_RBP = param_13;
  }
  puVar4 = puVar8 + 3;
  lVar14 = lVar14 + -0x18;
  puVar7 = puVar8;
  if (puVar4 == unaff_RBP) {
    return;
  }
  goto LAB_0494a4d2;
}


