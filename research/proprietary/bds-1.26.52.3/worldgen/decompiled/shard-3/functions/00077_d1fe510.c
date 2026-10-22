/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2fe510 (ELF vaddr 0xd1fe510)
 * Label: string:[[Jigsaw Structure]] Couldn't find anchor named `%s` in elem
 * Body:  [[0d2fe510, 0d2fe576] [0d2fe580, 0d2fe5ad] [0d2fe5b0, 0d2fe7a8] [0d2fe7b0, 0d2fe7f4] [0d2fe800, 0d2fefc6] [0d2fefed, 0d2ff02f]]
 * Ghidra: FUN_0d2fe510
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_0d2fe510(undefined8 *param_1,undefined8 *param_2,short *param_3,byte *param_4,long *param_5,
            undefined4 param_6,undefined8 param_7,ulong param_8,ulong param_9,int param_10,
            char param_11,undefined8 param_12,ulong param_13,undefined8 *param_14,
            undefined1 param_15,undefined1 param_16)

{
  int *piVar1;
  byte bVar2;
  byte *pbVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  short *psVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long *plVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  long lVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  ulong uVar26;
  int iVar27;
  long lVar28;
  long *plVar29;
  long *plVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  int iStack_238;
  undefined8 uStack_208;
  long *plStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_158;
  undefined8 uStack_150;
  short *psStack_148;
  byte *pbStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  short sStack_70;
  undefined1 uStack_6e;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  uVar14 = *param_2;
  uStack_150 = param_2[10];
  plVar29 = param_2 + 1;
  psStack_148 = param_3;
  bVar8 = (**(code **)(param_2[1] + 0x18))(plVar29,4);
  pbVar3 = (byte *)param_14[1];
  for (pbVar16 = (byte *)*param_14; pbVar16 != pbVar3; pbVar16 = pbVar16 + 0x30) {
    bVar2 = *pbVar16;
    if ((bVar2 & 1) == 0) {
      plVar15 = (long *)(ulong)(bVar2 >> 1);
    }
    else {
      plVar15 = *(long **)(pbVar16 + 8);
    }
    if (param_5 == plVar15) {
      if ((bVar2 & 1) == 0) {
        pbVar17 = pbVar16 + 1;
      }
      else {
        pbVar17 = *(byte **)(pbVar16 + 0x10);
      }
      iVar9 = func_0x0eee3000(param_4,pbVar17,param_5);
      if (iVar9 == 0) break;
    }
  }
  pbVar17 = param_4;
  if (pbVar16 == pbVar3) {
LAB_0d2fe5e8:
    if ((long *)0xfffffffffffffff7 < param_5) {
      FUN_04882e30();
      goto LAB_0d2fefc0;
    }
  }
  else {
    if ((pbVar16[0x18] & 1) != 0) {
      param_5 = *(long **)(pbVar16 + 0x20);
      pbVar17 = *(byte **)(pbVar16 + 0x28);
      goto LAB_0d2fe5e8;
    }
    pbVar17 = pbVar16 + 0x19;
    param_5 = (long *)(ulong)(pbVar16[0x18] >> 1);
  }
  if (param_5 < (long *)0x17) {
    uStack_208 = (byte *)CONCAT71(uStack_208._1_7_,(char)param_5 * '\x02');
    lVar11 = (long)&uStack_208 + 1;
    if (param_5 != (long *)0x0) goto LAB_0d2fe675;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_208._1_1_ = 0;
    if (((ulong)uStack_208 & 1) == 0) goto LAB_0d2fe690;
LAB_0d2fe61a:
    if (plStack_200 == (long *)0x0) goto LAB_0d2fe6b7;
LAB_0d2fe697:
    lVar11 = func_0x0d347430(uVar14,&uStack_208);
    if (lVar11 == 0) goto LAB_0d2fe6b7;
    lVar11 = *(long *)(lVar11 + 0x28);
  }
  else {
    uVar26 = 0x1a;
    if (((ulong)param_5 | 7) != 0x17) {
      uVar26 = ((ulong)param_5 | 7) + 1;
    }
    lVar11 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar26);
    if (lVar11 == 0) {
      func_0x0eec74c0(uVar26,0);
    }
    uStack_208 = (byte *)(uVar26 | 1);
    plStack_200 = param_5;
    lStack_1f8 = lVar11;
LAB_0d2fe675:
    func_0x0eee2ee0(lVar11,pbVar17,param_5);
    *(undefined1 *)(lVar11 + (long)param_5) = 0;
    if (((ulong)uStack_208 & 1) != 0) goto LAB_0d2fe61a;
LAB_0d2fe690:
    if ((byte)uStack_208 >> 1 != 0) goto LAB_0d2fe697;
LAB_0d2fe6b7:
    lVar11 = 0;
  }
  if (((ulong)uStack_208 & 1) != 0) {
    func_0x0412a280(lStack_1f8,(ulong)uStack_208 & 0xfffffffffffffffe);
  }
  if (lVar11 == 0) {
    uStack_208 = param_4;
    func_0x052e4950(1,3,0x1f,&UNK_012b5bb8,&uStack_208);
  }
  else {
    if (*(long *)(lVar11 + 0x18) != *(long *)(lVar11 + 0x20)) {
      iVar9 = (**(code **)(*plVar29 + 0x18))
                        (plVar29,(ulong)(*(long *)(lVar11 + 0x20) - *(long *)(lVar11 + 0x18)) >> 3);
      if ((ulong)(*(long *)(lVar11 + 0x20) - *(long *)(lVar11 + 0x18) >> 3) <= (ulong)(long)iVar9) {
LAB_0d2fefc0:
        uVar14 = func_0x0d3096e0();
        func_0x0d2ff840(&uStack_208);
        uVar14 = func_0x0eee2d70(uVar14);
        if (((ulong)uStack_208 & 1) == 0) {
          func_0x0eee2d70(uVar14);
        }
        func_0x0412a280(lStack_1f8,(ulong)uStack_208 & 0xfffffffffffffffe);
        func_0x0eee2d70(uVar14);
        pcVar4 = (code *)swi(3);
        puVar13 = (undefined8 *)(*pcVar4)();
        return puVar13;
      }
      lStack_158 = *(long *)(*(long *)(lVar11 + 0x18) + (long)iVar9 * 8);
      if (lStack_158 != 0) {
        iVar24 = (int)(param_9 >> 0x20);
        iStack_238 = (int)param_9;
        iVar25 = iVar24;
        iVar9 = param_10;
        if (param_8 != 0) {
          lVar11 = func_0x0d336ab0();
          func_0x0d2eeed0(&uStack_208,lVar11,plVar29);
          plVar15 = plStack_200;
          plVar29 = (long *)uStack_208;
          if (uStack_208 != (byte *)plStack_200) {
            lVar11 = *(long *)(lVar11 + 0x10);
            plVar30 = (long *)uStack_208;
            do {
              lVar28 = *plVar30 * 0x90;
              bVar2 = *(byte *)(lVar11 + lVar28);
              if ((bVar2 & 1) == 0) {
                uVar26 = (ulong)(bVar2 >> 1);
              }
              else {
                uVar26 = *(ulong *)(lVar11 + 8 + lVar28);
              }
              if (param_8 == uVar26) {
                lVar28 = lVar28 + lVar11;
                if ((bVar2 & 1) == 0) {
                  lVar20 = lVar28 + 1;
                }
                else {
                  lVar20 = *(long *)(lVar28 + 0x10);
                }
                iVar9 = func_0x0eee3000(param_7,lVar20,param_8);
                if (iVar9 == 0) {
                  fVar31 = (float)(int)*(undefined8 *)(lVar28 + 0x7c);
                  fStack_48 = (float)(int)((ulong)*(undefined8 *)(lVar28 + 0x7c) >> 0x20);
                  fVar33 = (float)*(int *)(lVar28 + 0x84);
                  if (bVar8 == 3) {
                    fVar31 = (float)((uint)fVar31 ^ _DAT_014e9ac0);
                  }
                  else {
                    if (bVar8 == 2) {
                      fVar33 = (float)((uint)fVar33 ^ _DAT_014e9ac0);
                    }
                    else if (bVar8 == 1) goto LAB_0d2fef25;
                    fVar31 = fVar33;
                  }
LAB_0d2fef25:
                  fStack_44 = fStack_48;
                  fStack_40 = fStack_48;
                  fStack_3c = fStack_48;
                  fVar33 = (float)func_0x0eee4390();
                  fVar32 = (float)func_0x0eee4390(fStack_48);
                  fVar31 = (float)func_0x0eee4390(fVar31);
                  iVar9 = (int)fVar31 + param_10;
                  uVar26 = CONCAT44((int)fVar32 + iVar24,(int)fVar33 + iStack_238) &
                           0xffffffffffffff00;
                  uVar18 = (int)fVar33 + iStack_238 & 0xff;
                  bVar6 = false;
                  bVar5 = false;
                  goto joined_r0x0d2fef90;
                }
              }
              plVar30 = plVar30 + 1;
            } while (plVar30 != plVar15);
          }
          bVar6 = true;
          bVar5 = true;
          iVar9 = 0;
          uVar18 = 0;
          uVar26 = 0;
joined_r0x0d2fef90:
          if (plVar29 != (long *)0x0) {
            func_0x0412a280(plVar29,lStack_1f8 - (long)plVar29);
            bVar5 = bVar6;
          }
          if (bVar5) {
            uStack_208 = (byte *)param_7;
            pbStack_140 = param_4;
            func_0x08e77f80(1,3,0x1f,&UNK_014dbf71,&uStack_208,&pbStack_140);
            goto LAB_0d2fe862;
          }
          param_9 = (ulong)(uVar18 | (uint)uVar26);
          iVar25 = (int)(uVar26 >> 0x20);
        }
        lStack_178 = 0;
        uStack_170 = 0;
        uStack_188 = 0;
        uStack_180 = 0;
        uStack_198 = 0;
        uStack_190 = 0;
        lStack_1a8 = 0;
        uStack_1a0 = 0;
        uStack_1b8 = 0;
        uStack_1b0 = 0;
        uStack_1c8 = 0;
        lStack_1c0 = 0;
        lStack_1d8 = 0;
        uStack_1d0 = 0;
        uStack_1e8 = 0;
        uStack_1e0 = 0;
        lStack_1f8 = 0;
        uStack_1f0 = 0;
        uStack_208 = (byte *)0x0;
        plStack_200 = (long *)0x0;
        uStack_168 = 0;
        lVar11 = func_0x0d2fdf40(&uStack_208,lStack_158,0);
        iStack_238 = iStack_238 - (int)(float)((int)param_9 - iStack_238);
        iVar27 = iVar24 - (int)(float)(iVar25 - iVar24);
        param_10 = param_10 - (int)(float)(iVar9 - param_10);
        *(undefined4 *)(lStack_1d8 + lVar11 * 4) = 1;
        *(ulong *)(lStack_1a8 + lVar11 * 0xc) = CONCAT44(iVar27,iStack_238);
        *(int *)(lStack_1a8 + 8 + lVar11 * 0xc) = param_10;
        *(byte *)(lStack_1c0 + lVar11) = bVar8;
        puVar12 = (ulong *)func_0x0d336ab0();
        if ((bVar8 | 2) == 3) {
          iVar9 = *(int *)((long)puVar12 + 4);
          uVar26 = (ulong)(uint)puVar12[1];
        }
        else {
          uVar26 = *puVar12;
          iVar9 = (int)(uVar26 >> 0x20);
          puVar12 = puVar12 + 1;
        }
        iVar10 = (int)*puVar12;
        iVar23 = (int)uVar26;
        iVar19 = iVar23 + -1;
        if (bVar8 == 3) {
          iVar21 = 1 - iVar10;
          iVar10 = 0;
        }
        else {
          if (bVar8 == 2) {
            iVar23 = 1 - iVar23;
            iVar21 = 1 - iVar10;
            iVar10 = 0;
            iVar19 = 0;
            goto LAB_0d2feaa5;
          }
          iVar10 = iVar10 + -1;
          iVar21 = 0;
          if (bVar8 == 1) {
            iVar23 = 1 - iVar23;
            iVar19 = 0;
            iVar21 = 0;
            goto LAB_0d2feaa5;
          }
        }
        iVar23 = 0;
LAB_0d2feaa5:
        iVar22 = iVar9 + iVar27 + -1;
        *(int *)(lStack_178 + lVar11 * 0x18) = iVar23 + iStack_238;
        *(int *)(lStack_178 + 4 + lVar11 * 0x18) = iVar27;
        *(int *)(lStack_178 + 8 + lVar11 * 0x18) = iVar21 + param_10;
        *(int *)(lStack_178 + 0xc + lVar11 * 0x18) = iStack_238 + iVar19;
        *(int *)(lStack_178 + 0x10 + lVar11 * 0x18) = iVar22;
        *(int *)(lStack_178 + 0x14 + lVar11 * 0x18) = param_10 + iVar10;
        iVar23 = (((iVar19 - iVar23) - ((iVar19 - iVar23) + 1 >> 0x1f)) + 1 >> 1) +
                 iVar23 + iStack_238;
        iVar10 = (((iVar10 - iVar21) - ((iVar10 - iVar21) + 1 >> 0x1f)) + 1 >> 1) +
                 iVar21 + param_10;
        iVar9 = iVar27;
        if (param_11 != '\0') {
          iVar27 = func_0x0d2f0c40(uStack_150,iVar23,iVar10,param_11);
          iVar27 = iVar27 + iVar24;
          iVar9 = *(int *)(lStack_178 + 4 + lVar11 * 0x18);
          iVar22 = *(int *)(lStack_178 + 0x10 + lVar11 * 0x18);
        }
        psVar7 = psStack_148;
        iVar19 = iVar27 - (*(int *)(lStack_1d8 + lVar11 * 4) + iVar9);
        *(int *)(lStack_178 + 4 + lVar11 * 0x18) = iVar9 + iVar19;
        *(int *)(lStack_178 + 0x10 + lVar11 * 0x18) = iVar22 + iVar19;
        piVar1 = (int *)(lStack_1a8 + 4 + lVar11 * 0xc);
        *piVar1 = *piVar1 + iVar19;
        if ((param_13 == 0) ||
           ((lVar28 = lStack_178 + lVar11 * 0x18,
            (long)((param_13 >> 0x20) + (long)*psStack_148) <= (long)*(int *)(lVar28 + 4) &&
            ((long)*(int *)(lVar28 + 0x10) <= (long)((long)psStack_148[1] - (param_13 & 0xffffffff))
            )))) {
          lStack_138 = lVar11;
          func_0x0d2ff030(&uStack_130,&uStack_208);
          uStack_84 = (undefined4)param_12;
          uStack_80 = (undefined4)((ulong)param_12 >> 0x20);
          uStack_7c = (undefined4)param_13;
          uStack_78 = (undefined4)(param_13 >> 0x20);
          uStack_74 = *(undefined4 *)psVar7;
          sStack_70 = psVar7[2];
          uStack_6e = param_15;
          uStack_68 = *param_14;
          uStack_60 = param_14[1];
          uVar14 = *param_14;
          uStack_58 = param_14[2];
          *param_14 = 0;
          param_14[1] = 0;
          param_14[2] = 0;
          uStack_50 = param_16;
          uStack_88 = param_6;
          puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xf8);
          if (puVar13 == (undefined8 *)0x0) {
            func_0x0eec74c0(0xf8,0);
          }
          *puVar13 = &UNK_0f460250;
          puVar13[1] = lStack_138;
          puVar13[2] = uStack_130;
          puVar13[3] = uStack_128;
          puVar13[4] = uStack_120;
          uStack_130 = 0;
          uStack_128 = 0;
          uStack_120 = 0;
          puVar13[5] = uStack_118;
          puVar13[6] = uStack_110;
          puVar13[7] = uStack_108;
          uStack_118 = 0;
          uStack_110 = 0;
          uStack_108 = 0;
          puVar13[8] = uStack_100;
          puVar13[9] = uStack_f8;
          puVar13[10] = uStack_f0;
          uStack_100 = 0;
          uStack_f8 = 0;
          uStack_f0 = 0;
          puVar13[0xb] = uStack_e8;
          puVar13[0xc] = uStack_e0;
          puVar13[0xd] = uStack_d8;
          uStack_e8 = 0;
          uStack_e0 = 0;
          uStack_d8 = 0;
          puVar13[0xe] = uStack_d0;
          puVar13[0xf] = uStack_c8;
          puVar13[0x10] = uStack_c0;
          uStack_d0 = 0;
          uStack_c8 = 0;
          uStack_c0 = 0;
          puVar13[0x11] = uStack_b8;
          puVar13[0x12] = uStack_b0;
          puVar13[0x13] = uStack_a8;
          uStack_b8 = 0;
          uStack_b0 = 0;
          uStack_a8 = 0;
          puVar13[0x14] = uStack_a0;
          puVar13[0x15] = uStack_98;
          puVar13[0x16] = uStack_90;
          uStack_a0 = 0;
          uStack_98 = 0;
          uStack_90 = 0;
          *(uint *)((long)puVar13 + 0xc3) = CONCAT31((undefined3)uStack_7c,uStack_80._3_1_);
          *(uint *)((long)puVar13 + 199) = CONCAT31((undefined3)uStack_78,uStack_7c._3_1_);
          *(uint *)((long)puVar13 + 0xcb) = CONCAT31((undefined3)uStack_74,uStack_78._3_1_);
          *(uint *)((long)puVar13 + 0xcf) = CONCAT13(uStack_6e,CONCAT21(sStack_70,uStack_74._3_1_));
          puVar13[0x17] = CONCAT44(uStack_84,uStack_88);
          puVar13[0x18] = CONCAT44(uStack_7c,uStack_80);
          puVar13[0x1b] = uVar14;
          *(undefined4 *)(puVar13 + 0x1c) = (undefined4)uStack_60;
          *(undefined4 *)((long)puVar13 + 0xe4) = uStack_60._4_4_;
          *(undefined4 *)(puVar13 + 0x1d) = (undefined4)uStack_58;
          *(undefined4 *)((long)puVar13 + 0xec) = uStack_58._4_4_;
          uStack_68 = 0;
          uStack_60 = 0;
          uStack_58 = 0;
          *(undefined1 *)(puVar13 + 0x1e) = param_16;
          *(undefined4 *)((long)puVar13 + 0xf1) = 0;
          *(undefined4 *)((long)puVar13 + 0xf4) = 0;
          *param_1 = CONCAT44((int)((float)(iVar25 - iVar24) + (float)iVar27),iVar23);
          *(int *)(param_1 + 1) = iVar10;
          param_1[6] = puVar13;
          *(undefined1 *)(param_1 + 8) = 1;
          func_0x0d2ff840();
        }
        else {
          *(undefined1 *)param_1 = 0;
          *(undefined1 *)(param_1 + 8) = 0;
        }
        func_0x0d2ff840(&uStack_208);
        return param_1;
      }
    }
    uStack_208 = param_4;
    func_0x05626c00(1,3,0x1f,&UNK_01269376,&uStack_208);
  }
LAB_0d2fe862:
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  return param_1;
}


