/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd376010 (ELF vaddr 0xd276010)
 * Label: callee-of:0xd1d87a0
 * Body:  [[0d376010, 0d376066] [0d37628e, 0d3763ff] [0d376464, 0d376502] [0d376518, 0d376574] [0d3765ef, 0d376701] [0d3767b3, 0d3767ec] [0d376ac6, 0d376adb] [0d376b27, 0d376b8f] [0d376ba1, 0d376bf1] [0d376df9, 0d376ede] [0d376ef6, 0d376ffc] [0d37709b, 0d3770a6] [0d377140, 0d3772d7] [0d3774ab, 0d3774e3] [0d377569, 0d3777ef] [0d377803, 0d37783b] [0d3778e5, 0d377b69] [0d377bd0, 0d377cd4] [0d377d0b, 0d377f7a] [0d377fb9, 0d378169] [0d3781c2, 0d378378] [0d3783e1, 0d378562] [0d378610, 0d3787a9] [0d378841, 0d378976] [0d378a46, 0d378b8e] [0d378cf2, 0d378d51] [0d378e7a, 0d378f6f] [0d378fb6, 0d3794a7]]
 * Ghidra: FUN_0d376010
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0d376010(byte *param_1,ulong *param_2,undefined *param_3)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  long *plVar20;
  undefined8 uVar21;
  byte *pbVar22;
  bool bVar23;
  undefined8 uStack_b98;
  long lStack_b90;
  undefined8 *puStack_b88;
  ulong uStack_b80;
  ulong uStack_b78;
  ulong uStack_b68;
  ulong uStack_b60;
  ulong uStack_b58;
  ulong uStack_b48;
  ulong uStack_b40;
  ulong uStack_b38;
  ulong uStack_b28;
  ulong uStack_b20;
  ulong uStack_b18;
  ulong uStack_b08;
  ulong uStack_b00;
  ulong uStack_af8;
  ulong uStack_ae8;
  ulong uStack_ae0;
  ulong uStack_ad8;
  ulong uStack_ac8;
  ulong uStack_ac0;
  ulong uStack_ab8;
  ulong uStack_aa8;
  ulong uStack_aa0;
  ulong uStack_a98;
  undefined8 *puStack_a88;
  ulong uStack_a80;
  ulong uStack_a78;
  undefined8 *puStack_a68;
  ulong uStack_a60;
  ulong uStack_a58;
  undefined8 *puStack_a48;
  ulong uStack_a40;
  ulong uStack_a38;
  undefined *puStack_a28;
  undefined8 *puStack_a20;
  ulong uStack_a18;
  ulong uStack_a10;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  bVar4 = *param_1;
  if ((bVar4 & 1) == 0) {
    uVar15 = (ulong)(bVar4 >> 1) - 4;
    if (uVar15 < 9) goto LAB_0d376057;
    goto LAB_0d37628e;
  }
  uVar15 = *(long *)(param_1 + 8) - 4;
  if (8 < uVar15) goto LAB_0d37628e;
LAB_0d376057:
  switch(&UNK_01da0540 + *(int *)(&UNK_01da0540 + uVar15 * 4)) {
  case (undefined *)0xd376067:
    pbVar22 = *(byte **)(param_1 + 0x10);
    if ((bVar4 & 1) == 0) {
      pbVar22 = param_1 + 1;
    }
    if (*(int *)pbVar22 == 0x74726170) {
      bVar4 = (byte)*param_2;
      if ((bVar4 & 1) == 0) {
        if (bVar4 >> 1 != 4) {
          return param_3;
        }
      }
      else if (param_2[1] != 4) {
        return param_3;
      }
      if ((bVar4 & 1) == 0) {
        pbVar22 = (byte *)((long)param_2 + 1);
      }
      else {
        pbVar22 = (byte *)param_2[2];
      }
      if (*(int *)pbVar22 == 0x746f6f66) {
        lVar17 = *(long *)(param_3 + 0x68);
        lVar16 = *(long *)(lVar17 + 0x1b0);
        if (lVar16 != 0) {
          lVar13 = lVar17 + 0x1b0;
          do {
            bVar23 = *(ulong *)(lVar16 + 0x20) < _DAT_0f6ff280;
            if (!bVar23) {
              lVar13 = lVar16;
            }
            lVar16 = *(long *)(lVar16 + (ulong)bVar23 * 8);
          } while (lVar16 != 0);
          if ((lVar13 != lVar17 + 0x1b0) && (*(ulong *)(lVar13 + 0x20) <= _DAT_0f6ff280)) {
            if (*(int *)(lVar13 + 0x28) == 0) {
              return param_3;
            }
            uVar15 = (ulong)(~*(uint *)(lVar13 + 0x34) & (uint)*(ushort *)(param_3 + 0x128));
            if ((ulong)(*(long *)(lVar17 + 0x1f0) - *(long *)(lVar17 + 0x1e8) >> 3) <= uVar15) {
              return param_3;
            }
            puVar12 = *(undefined **)(*(long *)(lVar17 + 0x1e8) + uVar15 * 8);
            goto joined_r0x0d377872;
          }
        }
        puVar12 = (undefined *)func_0x0c6cd0e0(lVar17,_DAT_0f6ff280,0);
      }
      else {
        if (*(int *)pbVar22 != 0x64616568) {
          return param_3;
        }
        lVar17 = *(long *)(param_3 + 0x68);
        lVar16 = *(long *)(lVar17 + 0x1b0);
        if (lVar16 != 0) {
          lVar13 = lVar17 + 0x1b0;
          do {
            bVar23 = *(ulong *)(lVar16 + 0x20) < _DAT_0f6ff280;
            if (!bVar23) {
              lVar13 = lVar16;
            }
            lVar16 = *(long *)(lVar16 + (ulong)bVar23 * 8);
          } while (lVar16 != 0);
          if ((lVar13 != lVar17 + 0x1b0) && (*(ulong *)(lVar13 + 0x20) <= _DAT_0f6ff280)) {
            puVar12 = (undefined *)
                      func_0x0cb8a630(lVar13 + 0x28,*(undefined2 *)(param_3 + 0x128),1,
                                      lVar17 + 0x1e8);
joined_r0x0d377872:
            if (puVar12 == (undefined *)0x0) {
              return param_3;
            }
            return puVar12;
          }
        }
        puVar12 = (undefined *)
                  func_0x0c6cd0e0(lVar17,_DAT_0f6ff280,1,*(undefined2 *)(param_3 + 0x128));
      }
      if (puVar12 != (undefined *)0x0) {
        return puVar12;
      }
      if ((*(byte *)(lVar17 + 0x135) & 8) != 0) {
        return *(undefined **)(lVar17 + 0x200);
      }
      return param_3;
    }
    pbVar22 = *(byte **)(param_1 + 0x10);
    if ((bVar4 & 1) == 0) {
      pbVar22 = param_1 + 1;
    }
    if (*(int *)pbVar22 != 0x666c6168) {
      if (*(int *)pbVar22 == 0x73697861) {
        if ((*param_2 & 1) == 0) {
          uStack_a98 = param_2[2];
          uStack_aa8 = *param_2;
          uStack_aa0 = param_2[1];
        }
        else {
          func_0x0412e5e0(&uStack_aa8,param_2[2],param_2[1]);
        }
        puStack_a28 = &UNK_0f47e5e8;
        puStack_a20 = (undefined8 *)uStack_aa8;
        uStack_a18 = uStack_aa0;
        uStack_a10 = uStack_a98;
        uStack_aa8 = 0;
        uStack_aa0 = 0;
        uStack_a98 = 0;
        uVar15 = func_0x0d0755f0(&UNK_0f44a888,&puStack_a28);
        uVar14 = 0;
        if ((uVar15 >> 0x20 & 1) != 0) {
          uVar14 = uVar15 & 0xffffffff;
        }
        puStack_a28 = &UNK_0f47e5e8;
        if (((ulong)puStack_a20 & 1) != 0) {
          func_0x0412a280(uStack_a10,(ulong)puStack_a20 & 0xfffffffffffffffe);
        }
        if ((uStack_aa8 & 1) != 0) {
          func_0x0412a280(uStack_a98,uStack_aa8 & 0xfffffffffffffffe);
        }
        func_0x04abe3d0(&puStack_a28,param_3,0xf6fe550,uVar14);
        return puStack_a28;
      }
      break;
    }
    bVar4 = (byte)*param_2;
    if ((bVar4 & 1) == 0) {
      uVar15 = (ulong)(bVar4 >> 1);
    }
    else {
      uVar15 = param_2[1];
    }
    if (uVar15 != 5) {
      if (uVar15 != 3) {
        return param_3;
      }
      if ((bVar4 & 1) == 0) {
        pbVar22 = (byte *)((long)param_2 + 1);
      }
      else {
        pbVar22 = (byte *)param_2[2];
      }
      if (pbVar22[2] != 0x70 || *(short *)pbVar22 != 0x6f74) {
        return param_3;
      }
      lVar17 = *(long *)(param_3 + 0x68);
      lVar16 = *(long *)(lVar17 + 0x1b0);
      if (lVar16 != 0) {
        lVar13 = lVar17 + 0x1b0;
        do {
          bVar23 = *(ulong *)(lVar16 + 0x20) < _DAT_0f6fe768;
          if (!bVar23) {
            lVar13 = lVar16;
          }
          lVar16 = *(long *)(lVar16 + (ulong)bVar23 * 8);
        } while (lVar16 != 0);
        if ((lVar13 != lVar17 + 0x1b0) && (*(ulong *)(lVar13 + 0x20) <= _DAT_0f6fe768)) {
code_r0x0d3778d5:
          uVar19 = 0xf6fe760;
          goto LAB_0d3778e5;
        }
      }
      for (plVar20 = *(long **)(lVar17 + 0x350); plVar20 != *(long **)(lVar17 + 0x358);
          plVar20 = plVar20 + 2) {
        if (*(ulong *)(*(long *)(*plVar20 + 8) + 8) == _DAT_0f6fe768) goto code_r0x0d3778d5;
      }
      goto LAB_0d37709b;
    }
    if ((bVar4 & 1) == 0) {
      pbVar22 = (byte *)((long)param_2 + 1);
    }
    else {
      pbVar22 = (byte *)param_2[2];
    }
    if (pbVar22[4] != 0x72 || *(int *)pbVar22 != 0x65707075) {
      return param_3;
    }
    lVar17 = *(long *)(param_3 + 0x68);
    lVar16 = *(long *)(lVar17 + 0x1b0);
    if (lVar16 == 0) {
code_r0x0d37710a:
      plVar20 = *(long **)(lVar17 + 0x350);
      while( true ) {
        if (plVar20 == *(long **)(lVar17 + 0x358)) {
          return param_3;
        }
        if (*(ulong *)(*(long *)(*plVar20 + 8) + 8) == uRam000000000f6fe3a0) break;
        plVar20 = plVar20 + 2;
      }
    }
    else {
      lVar13 = lVar17 + 0x1b0;
      do {
        bVar23 = *(ulong *)(lVar16 + 0x20) < uRam000000000f6fe3a0;
        if (!bVar23) {
          lVar13 = lVar16;
        }
        lVar16 = *(long *)(lVar16 + (ulong)bVar23 * 8);
      } while (lVar16 != 0);
      if ((lVar13 == lVar17 + 0x1b0) || (uRam000000000f6fe3a0 < *(ulong *)(lVar13 + 0x20)))
      goto code_r0x0d37710a;
    }
    uVar19 = 0xf6fe398;
    goto LAB_0d3778e5;
  case (undefined *)0xd3760c9:
    pbVar22 = *(byte **)(param_1 + 0x10);
    if ((bVar4 & 1) == 0) {
      pbVar22 = param_1 + 1;
    }
    if (*(int *)(pbVar22 + 3) == 0x746e6169 && *(int *)pbVar22 == 0x69726176) {
      bVar4 = (byte)*param_2;
      if ((bVar4 & 1) == 0) {
        uVar15 = (ulong)(bVar4 >> 1);
      }
      else {
        uVar15 = param_2[1];
      }
      switch(uVar15) {
      case 5:
        if ((bVar4 & 1) == 0) {
          pbVar22 = (byte *)((long)param_2 + 1);
        }
        else {
          pbVar22 = (byte *)param_2[2];
        }
        if (pbVar22[4] != 0x65 || *(int *)pbVar22 != 0x6e6f7473) break;
        puStack_a28 = (undefined *)(lRam000000000f70d458 - (long)puRam000000000f70d450 >> 3);
        if ((lRam000000000f70d458 - (long)puRam000000000f70d450 != -8) &&
           (puStack_a20 = puRam000000000f70d450,
           lRam000000000f70d458 == 0 || puRam000000000f70d450 != (undefined8 *)0x0)) {
          cVar3 = func_0x0c6ccd60(*(undefined8 *)(param_3 + 0x68),&puStack_a28);
          if (cVar3 == '\0') {
            uStack_b98 = lRam000000000f70d488 - lRam000000000f70d480 >> 3;
            if ((lRam000000000f70d488 - lRam000000000f70d480 == -8) ||
               (lStack_b90 = lRam000000000f70d480,
               lRam000000000f70d488 != 0 && lRam000000000f70d480 == 0)) goto code_r0x0d378379;
            cVar3 = func_0x0c6ccd60(*(undefined8 *)(param_3 + 0x68),&uStack_b98);
            if (cVar3 == '\0') {
              puVar12 = &DAT_0f71bd88;
              goto code_r0x0cc41df0;
            }
          }
          puVar12 = (undefined *)0xf71bd60;
          goto code_r0x0cc41df0;
        }
        goto code_r0x0d378379;
      case 7:
        if ((bVar4 & 1) == 0) {
          pbVar22 = (byte *)((long)param_2 + 1);
        }
        else {
          pbVar22 = (byte *)param_2[2];
        }
        if (*(int *)(pbVar22 + 3) == 0x746c7561 && *(int *)pbVar22 == 0x61666564) {
          return param_3;
        }
        if (*(int *)(pbVar22 + 3) == 0x6574696e && *(int *)pbVar22 == 0x6e617267) {
          puVar12 = (undefined *)0xf71c328;
          goto code_r0x0cc41df0;
        }
        if (*(int *)(pbVar22 + 3) == 0x65746972 && *(int *)pbVar22 == 0x726f6964) {
          puVar12 = (undefined *)0xf71c288;
          goto code_r0x0cc41df0;
        }
        break;
      case 8:
        pbVar22 = (byte *)param_2[2];
        if ((bVar4 & 1) == 0) {
          pbVar22 = (byte *)((long)param_2 + 1);
        }
        if (*(long *)pbVar22 == 0x64656c6573696863) {
          puVar12 = (undefined *)0xf71c440;
          goto code_r0x0cc41df0;
        }
        pbVar22 = (byte *)param_2[2];
        if ((bVar4 & 1) == 0) {
          pbVar22 = (byte *)((long)param_2 + 1);
        }
        if (*(long *)pbVar22 == 0x6574697365646e61) {
          puVar12 = (undefined *)0xf71c238;
          goto code_r0x0cc41df0;
        }
        break;
      case 10:
        if ((bVar4 & 1) == 0) {
          pbVar22 = (byte *)((long)param_2 + 1);
        }
        else {
          pbVar22 = (byte *)param_2[2];
        }
        if (*(short *)(pbVar22 + 8) == 0x6c61 && *(long *)pbVar22 == 0x726f635f64616564) {
          uVar6 = func_0x0ee2e770();
          func_0x0b5fb4d0(&puStack_a28,uVar6,0);
          uVar7 = func_0x0ee4a030(CONCAT44(uStack_2c,uStack_30),0);
          lVar17 = *(long *)(lRam000000000f70d758 + 0x28 + (ulong)((uVar7 >> 1) % 5) * 8);
          goto code_r0x0d376acd;
        }
      }
      cVar3 = func_0x048e7b80(param_2,&UNK_013effe8);
      if (cVar3 != '\0') {
        puVar12 = (undefined *)0xf71a378;
code_r0x0cc41df0:
        uStack_38 = uRam000000000f6ffb28;
        uStack_34 = uRam000000000f6ffb2c;
        uStack_30 = uRam000000000f6ffb30;
        uStack_2c = uRam000000000f6ffb34;
        if (CONCAT44(uRam000000000f6ffb34,uRam000000000f6ffb30) != 0) {
          LOCK();
          plVar20 = (long *)(CONCAT44(uRam000000000f6ffb34,uRam000000000f6ffb30) + 8);
          *plVar20 = *plVar20 + 1;
          UNLOCK();
        }
        uStack_40 = 0xcc41e28;
        func_0x0cc46520(&stack0xffffffffffffffd8,&uStack_38,1);
        plVar20 = (long *)CONCAT44(uStack_2c,uStack_30);
        if (plVar20 != (long *)0x0) {
          LOCK();
          plVar1 = plVar20 + 1;
          lVar17 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar17 == 0) {
            uStack_40 = 0xcc41e4d;
            (**(code **)(*plVar20 + 0x10))(plVar20);
            uStack_40 = 0xcc41e55;
            func_0x0412c2d0(plVar20);
          }
        }
        uStack_40 = 0xcc41e67;
        lVar17 = func_0x0cc422f0(0xf6ff9e0,puVar12,0,0,0);
        if (lVar17 == 0) {
          uStack_40 = 0xcc41e86;
          puVar12 = (undefined *)FUN_0cc41df0(0xf6ff9e0,&DAT_0f6eaec0,0);
        }
        else {
          puVar12 = *(undefined **)(lVar17 + 0x200);
        }
        uStack_40 = 0xcc41e93;
        func_0x0cc465d0(&stack0xffffffffffffffd8);
        return puVar12;
      }
      cVar3 = func_0x048e7b80(param_2,&UNK_014583d1);
      if (cVar3 != '\0') {
        puVar12 = (undefined *)0xf711e70;
        goto code_r0x0cc41df0;
      }
      cVar3 = func_0x048e7b80(param_2,&UNK_013d7cd4);
      if (cVar3 != '\0') {
        puVar12 = (undefined *)0xf711f10;
        goto code_r0x0cc41df0;
      }
      cVar3 = func_0x048e7b80(param_2,&UNK_014c081a);
      if (cVar3 != '\0') {
        puVar12 = (undefined *)0xf711f38;
        goto code_r0x0cc41df0;
      }
      cVar3 = func_0x048e7b80(param_2,&UNK_0129cc71);
      if (cVar3 != '\0') {
        uVar19 = *(undefined8 *)(param_3 + 0x68);
        func_0x04a878b0(&puStack_a28,0xf70d528);
        cVar3 = func_0x0c6ccd60(uVar19,&puStack_a28);
        if (cVar3 == '\0') {
          lVar17 = 0xf71bdd8;
        }
        else {
          lVar17 = 0xf712208;
        }
        goto code_r0x0d376acd;
      }
      cVar3 = func_0x048e7b80(param_2,&UNK_01283698);
      if (cVar3 != '\0') {
        puVar12 = (undefined *)0xf71c1e8;
        goto code_r0x0cc41df0;
      }
      cVar3 = func_0x048e7b80(param_2,&UNK_012e9dad);
      if (cVar3 != '\0') {
        puVar12 = (undefined *)0xf71c468;
        goto code_r0x0cc41df0;
      }
      cVar3 = func_0x048e7b80(param_2,&UNK_013be150);
      if (cVar3 != '\0') {
        puVar12 = (undefined *)0xf719b30;
        goto code_r0x0cc41df0;
      }
      cVar3 = func_0x048e7b80(param_2,&UNK_013a203e);
      if (cVar3 == '\0') goto code_r0x0d37837e;
      uVar19 = *(undefined8 *)(param_3 + 0x68);
      func_0x04a878b0(&puStack_a28,0xf70d210);
      cVar3 = func_0x0c6ccd60(uVar19,&puStack_a28);
      if (cVar3 != '\0') {
        lVar17 = 0xf710188;
        goto code_r0x0d376acd;
      }
      uVar19 = *(undefined8 *)(param_3 + 0x68);
      func_0x04a878b0(&puStack_a28,0xf70d3f0);
      cVar3 = func_0x0c6ccd60(uVar19,&puStack_a28);
      if (cVar3 == '\0') {
        uVar19 = *(undefined8 *)(param_3 + 0x68);
        func_0x04a878b0(&puStack_a28,0xf70d408);
        cVar3 = func_0x0c6ccd60(uVar19,&puStack_a28);
        if (cVar3 == '\0') {
          return param_3;
        }
        lVar17 = 0xf712910;
        goto code_r0x0d376acd;
      }
      uVar19 = 0xf712988;
      goto code_r0x0d3785de;
    }
    pbVar22 = *(byte **)(param_1 + 0x10);
    if ((bVar4 & 1) == 0) {
      pbVar22 = param_1 + 1;
    }
    if (*(int *)(pbVar22 + 3) != 0x676e6967 || *(int *)pbVar22 != 0x676e6168) break;
    bVar4 = (byte)*param_2;
    if ((bVar4 & 1) == 0) {
      uVar15 = (ulong)(bVar4 >> 1);
    }
    else {
      uVar15 = param_2[1];
    }
    if (uVar15 == 4) {
      if ((bVar4 & 1) == 0) {
        pbVar22 = (byte *)((long)param_2 + 1);
      }
      else {
        pbVar22 = (byte *)param_2[2];
      }
      if (*(int *)pbVar22 == 0x65757274) {
        uVar19 = 0xf6ff700;
        goto LAB_0d3778e5;
      }
    }
    uVar19 = 0xf6ff700;
    goto LAB_0d376ef6;
  case (undefined *)0xd376126:
    pbVar22 = *(byte **)(param_1 + 0x10);
    if ((bVar4 & 1) == 0) {
      pbVar22 = param_1 + 1;
    }
    if (pbVar22[4] == 0x72 && *(int *)pbVar22 == 0x6f6c6f63) {
      bVar4 = (byte)*param_2;
      uVar15 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar15 = param_2[1];
      }
      if (uVar15 == 9) {
        if ((bVar4 & 1) == 0) {
          pbVar22 = (byte *)((long)param_2 + 1);
        }
        else {
          pbVar22 = (byte *)param_2[2];
        }
        if (pbVar22[8] != 0x65 || *(long *)pbVar22 != 0x756c42746867696c) goto code_r0x0d376899;
        param_2 = (ulong *)0x3;
      }
      else {
code_r0x0d376899:
        if ((bVar4 & 1) == 0) {
          uStack_a78 = param_2[2];
          puStack_a88 = (undefined8 *)*param_2;
          uStack_a80 = param_2[1];
        }
        else {
          func_0x0412e5e0(&puStack_a88,param_2[2]);
        }
        puStack_a28 = &UNK_0f47e5e8;
        puStack_a20 = puStack_a88;
        uStack_a18 = uStack_a80;
        uStack_a10 = uStack_a78;
        puStack_a88 = (undefined8 *)0x0;
        uStack_a80 = 0;
        uStack_a78 = 0;
        uVar15 = func_0x0c6e59e0(&UNK_0f3cab20,&puStack_a28);
        puStack_a28 = &UNK_0f47e5e8;
        if (((ulong)puStack_a20 & 1) != 0) {
          func_0x0412a280(uStack_a10,(ulong)puStack_a20 & 0xfffffffffffffffe);
        }
        if (((ulong)puStack_a88 & 1) != 0) {
          func_0x0412a280(uStack_a78,(ulong)puStack_a88 & 0xfffffffffffffffe);
        }
        param_2 = (ulong *)0x3;
        if ((uVar15 >> 0x20 & 1) != 0) {
          param_2 = (ulong *)(long)(int)uVar15;
        }
      }
      if (((long)puRam000000000f71b680 - (long)puRam000000000f71b678 != -8) &&
         (puRam000000000f71b680 == (undefined8 *)0x0 || puRam000000000f71b678 != (undefined8 *)0x0))
      {
        lVar17 = *(long *)(param_3 + 0x68);
        puVar18 = puRam000000000f71b678;
        if (puRam000000000f71b680 == puRam000000000f71b678) {
code_r0x0d3769e3:
          puVar11 = puRam000000000f71b678;
          if (puVar18 == puRam000000000f71b680) goto code_r0x0d3769ec;
code_r0x0d376ac2:
          lVar17 = puVar11[(long)param_2];
          goto code_r0x0d376acd;
        }
        do {
          if (*(long *)(lVar17 + 200) == *(long *)*puVar18) goto code_r0x0d3769e3;
          puVar18 = puVar18 + 1;
        } while (puVar18 != puRam000000000f71b680);
code_r0x0d3769ec:
        if (((long)puRam000000000f714fb8 - (long)puRam000000000f714fb0 != -8) &&
           (puRam000000000f714fb8 == (undefined8 *)0x0 || puRam000000000f714fb0 != (undefined8 *)0x0
           )) {
          puVar18 = puRam000000000f714fb0;
          if (puRam000000000f714fb8 == puRam000000000f714fb0) {
code_r0x0d376a53:
            puVar11 = puRam000000000f714fb0;
            if (puVar18 != puRam000000000f714fb8) goto code_r0x0d376ac2;
          }
          else {
            do {
              if (*(long *)(lVar17 + 200) == *(long *)*puVar18) goto code_r0x0d376a53;
              puVar18 = puVar18 + 1;
            } while (puVar18 != puRam000000000f714fb8);
          }
          puStack_a28 = (undefined *)(lRam000000000f70d2d8 - (long)puRam000000000f70d2d0 >> 3);
          if ((lRam000000000f70d2d8 - (long)puRam000000000f70d2d0 != -8) &&
             (puStack_a20 = puRam000000000f70d2d0,
             lRam000000000f70d2d8 == 0 || puRam000000000f70d2d0 != (undefined8 *)0x0)) {
            cVar3 = func_0x0c6ccd60(lVar17,&puStack_a28);
            puVar11 = puRam000000000f70d2d0;
            if (cVar3 == '\0') {
              return param_3;
            }
            goto code_r0x0d376ac2;
          }
        }
      }
code_r0x0d378379:
      func_0x04890760();
code_r0x0d37837e:
      cVar3 = func_0x048e7b80(param_2,&UNK_011ca047);
      if (cVar3 == '\0') {
        cVar3 = func_0x048e7b80(param_2,&UNK_013a3646);
        lVar17 = *(long *)(param_3 + 0x68);
        if (cVar3 == '\0') {
          func_0x04a878b0(&puStack_a28,0xf70d288);
          cVar3 = func_0x0c6ccd60(lVar17,&puStack_a28);
          if (cVar3 == '\0') {
            uVar19 = *(undefined8 *)(param_3 + 0x68);
            func_0x04a878b0(&puStack_a28,0xf70d210);
            cVar3 = func_0x0c6ccd60(uVar19,&puStack_a28);
            if (cVar3 == '\0') {
              cVar3 = func_0x048e7b80(param_2,&UNK_012e9dc1);
              if (cVar3 == '\0') {
                return param_3;
              }
              lVar17 = 0xf7194a0;
            }
            else {
              if ((*param_2 & 1) == 0) {
                uStack_a58 = param_2[2];
                puStack_a68 = (undefined8 *)*param_2;
                uStack_a60 = param_2[1];
              }
              else {
                func_0x0412e5e0(&puStack_a68,param_2[2],param_2[1]);
              }
              puStack_a28 = &UNK_0f47e5e8;
              puStack_a20 = puStack_a68;
              uStack_a18 = uStack_a60;
              uStack_a10 = uStack_a58;
              puStack_a68 = (undefined8 *)0x0;
              uStack_a60 = 0;
              uStack_a58 = 0;
              uVar15 = func_0x0cf63170(&UNK_0f41df68,&puStack_a28);
              puStack_a28 = &UNK_0f47e5e8;
              if (((ulong)puStack_a20 & 1) != 0) {
                func_0x0412a280(uStack_a10,(ulong)puStack_a20 & 0xfffffffffffffffe);
              }
              if (((ulong)puStack_a68 & 1) != 0) {
                func_0x0412a280(uStack_a58,(ulong)puStack_a68 & 0xfffffffffffffffe);
              }
              lVar17 = (long)(int)uVar15;
              if ((uVar15 & 0x100000000) == 0) {
                lVar17 = 0;
              }
              lVar17 = *(long *)(lRam000000000f70d210 + lVar17 * 8);
            }
          }
          else {
            if ((*param_2 & 1) == 0) {
              uStack_a38 = param_2[2];
              puStack_a48 = (undefined8 *)*param_2;
              uStack_a40 = param_2[1];
            }
            else {
              func_0x0412e5e0(&puStack_a48,param_2[2],param_2[1]);
            }
            puStack_a28 = &UNK_0f47e5e8;
            puStack_a20 = puStack_a48;
            uStack_a18 = uStack_a40;
            uStack_a10 = uStack_a38;
            puStack_a48 = (undefined8 *)0x0;
            uStack_a40 = 0;
            uStack_a38 = 0;
            uVar15 = func_0x0cf63170(&UNK_0f41df68,&puStack_a28);
            puStack_a28 = &UNK_0f47e5e8;
            if (((ulong)puStack_a20 & 1) != 0) {
              func_0x0412a280(uStack_a10,(ulong)puStack_a20 & 0xfffffffffffffffe);
            }
            if (((ulong)puStack_a48 & 1) != 0) {
              func_0x0412a280(uStack_a38,(ulong)puStack_a48 & 0xfffffffffffffffe);
            }
            lVar17 = (long)(int)uVar15;
            if ((uVar15 & 0x100000000) == 0) {
              lVar17 = 0;
            }
            lVar17 = *(long *)(lRam000000000f70d288 + lVar17 * 8);
          }
          goto code_r0x0d376acd;
        }
        if (*(long *)(lVar17 + 200) != lRam000000000f71bb30) {
          func_0x04a878b0(&puStack_a28,0xf70d528);
          cVar3 = func_0x0c6ccd60(lVar17,&puStack_a28);
          if (cVar3 == '\0') {
            lVar17 = 0xf711e98;
          }
          else {
            lVar17 = 0xf710868;
          }
          goto code_r0x0d376acd;
        }
        uVar19 = 0xf71be78;
code_r0x0d3785de:
        puVar12 = (undefined *)FUN_0cc41df0(0xf6ff9e0,uVar19,1);
        uVar19 = 0xf6feb80;
      }
      else {
        lVar17 = *(long *)(param_3 + 0x68);
        lVar16 = *(long *)(lVar17 + 200);
        if (lVar16 == lRam000000000f719158) {
          return param_3;
        }
        if (lVar16 != lRam000000000f719068) {
          func_0x04a878b0(&puStack_a28,0xf70d288);
          cVar3 = func_0x0c6ccd60(lVar17,&puStack_a28);
          if (cVar3 != '\0') {
            lVar17 = 0xf71b8d8;
            goto code_r0x0d376acd;
          }
          uVar19 = *(undefined8 *)(param_3 + 0x68);
          func_0x04a878b0(&puStack_a28,0xf70d210);
          cVar3 = func_0x0c6ccd60(uVar19,&puStack_a28);
          if (cVar3 != '\0') {
            lVar17 = 0xf710200;
            goto code_r0x0d376acd;
          }
          uVar19 = *(undefined8 *)(param_3 + 0x68);
          func_0x04a878b0(&puStack_a28,0xf70d3f0);
          cVar3 = func_0x0c6ccd60(uVar19,&puStack_a28);
          if (cVar3 == '\0') {
            uVar19 = *(undefined8 *)(param_3 + 0x68);
            func_0x04a878b0(&puStack_a28,0xf70d408);
            cVar3 = func_0x0c6ccd60(uVar19,&puStack_a28);
            if (cVar3 == '\0') {
              return param_3;
            }
            lVar17 = 0xf711bc8;
            goto code_r0x0d376acd;
          }
          uVar19 = 0xf711c40;
          goto code_r0x0d3785de;
        }
        puVar12 = (undefined *)FUN_0cc41df0(0xf6ff9e0,0xf719158,1);
        uVar19 = 0xf6fe550;
      }
      uVar6 = func_0x0cf3cb10(param_3,uVar19);
      param_3 = puVar12;
      goto code_r0x0d378b11;
    }
    pbVar22 = *(byte **)(param_1 + 0x10);
    if ((bVar4 & 1) == 0) {
      pbVar22 = param_1 + 1;
    }
    if (pbVar22[4] == 0x6c && *(int *)pbVar22 == 0x6576656c) {
      lVar17 = *(long *)(*(long *)(param_3 + 0x68) + 200);
      if (lVar17 == lRam000000000f7154c0) {
        bVar23 = ((byte)*param_2 & 1) != 0;
        pbVar22 = (byte *)((long)param_2 + 1);
        if (bVar23) {
          pbVar22 = (byte *)param_2[2];
        }
        uVar15 = (ulong)(byte)((byte)*param_2 >> 1);
        if (bVar23) {
          uVar15 = param_2[1];
        }
        func_0x070275d0(pbVar22,uVar15,&uStack_b98,0,10);
        iVar8 = 0;
        if (0 < (int)uStack_b98) {
          iVar8 = (int)uStack_b98;
        }
        iVar9 = 6;
        if (iVar8 < 6) {
          iVar9 = iVar8;
        }
        iVar9 = (int)(((float)iVar9 / _DAT_01198af0) * _DAT_011985dc);
        uVar19 = 0xf6fc358;
      }
      else {
        if ((lVar17 != _DAT_0f713f00) && (lVar17 != lRam000000000f713b90)) {
          return param_3;
        }
        bVar23 = ((byte)*param_2 & 1) != 0;
        pbVar22 = (byte *)((long)param_2 + 1);
        if (bVar23) {
          pbVar22 = (byte *)param_2[2];
        }
        uVar15 = (ulong)(byte)((byte)*param_2 >> 1);
        if (bVar23) {
          uVar15 = param_2[1];
        }
        func_0x070275d0(pbVar22,uVar15,&uStack_b98,0,10);
        iVar8 = 0;
        if (0 < (int)uStack_b98) {
          iVar8 = (int)uStack_b98;
        }
        iVar9 = 8;
        if (iVar8 < 8) {
          iVar9 = iVar8;
        }
        uVar19 = 0xf6ff1c8;
      }
      goto LAB_0d3779a0;
    }
    break;
  case (undefined *)0xd3761e6:
    if ((bVar4 & 1) == 0) {
      pbVar22 = param_1 + 1;
    }
    else {
      pbVar22 = *(byte **)(param_1 + 0x10);
    }
    if (*(short *)(pbVar22 + 8) == 0x746e && *(long *)pbVar22 == 0x656d686361747461) {
      bVar4 = (byte)*param_2;
      if ((bVar4 & 1) == 0) {
        if (bVar4 >> 1 != 5) goto code_r0x0d376af6;
      }
      else if (param_2[1] != 5) goto code_r0x0d376af6;
      if ((bVar4 & 1) == 0) {
        pbVar22 = (byte *)((long)param_2 + 1);
      }
      else {
        pbVar22 = (byte *)param_2[2];
      }
      if (pbVar22[4] == 0x72 && *(int *)pbVar22 == 0x6f6f6c66) {
        func_0x0d379810(&puStack_a28,param_3,0);
        return puStack_a28;
      }
code_r0x0d376af6:
      cVar3 = func_0x048e7b80(param_2,&UNK_012e9dcd);
      if (cVar3 == '\0') {
        return param_3;
      }
      func_0x0d379810(&puStack_a28,param_3,1);
      return puStack_a28;
    }
    break;
  case (undefined *)0xd3761f0:
    if ((bVar4 & 1) == 0) {
      pbVar22 = param_1 + 1;
    }
    else {
      pbVar22 = *(byte **)(param_1 + 0x10);
    }
    if (*(int *)(pbVar22 + 8) == 0x305f656c && *(long *)pbVar22 == 0x74746f625f736168) {
      return param_3;
    }
    if (*(int *)(pbVar22 + 8) == 0x315f656c && *(long *)pbVar22 == 0x74746f625f736168) {
      return param_3;
    }
    if (*(int *)(pbVar22 + 8) == 0x325f656c && *(long *)pbVar22 == 0x74746f625f736168) {
      return param_3;
    }
  }
LAB_0d37628e:
  uVar7 = *(uint *)(*(long *)(param_3 + 0x68) + 0x108);
  cVar3 = func_0x048e7b80(param_1,&UNK_01341d5d);
  if ((uVar7 & 0x100) != 0) {
    if (cVar3 != '\0') {
      cVar3 = func_0x0c6c9590(*(undefined8 *)(param_3 + 0x68),0xf6ff6a8);
      if (cVar3 != '\0') {
        cVar3 = func_0x048e7b80(param_2,&UNK_01475ec2);
        if (cVar3 != '\0') {
LAB_0d376337:
          func_0x0d379920(&puStack_a28,param_3,1);
          return puStack_a28;
        }
        cVar3 = func_0x048e7b80(param_2,&UNK_012e9dcd);
        if (cVar3 != '\0') {
          iVar8 = func_0x058485c0(param_3,0xf6ff6a8);
          if (iVar8 == 0) {
            func_0x0cf1cf10(&puStack_a28,param_3,0xf6ff6a8,2);
            return puStack_a28;
          }
          goto LAB_0d3763e9;
        }
      }
      return param_3;
    }
    cVar3 = func_0x048e7b80(param_1,&UNK_014afa68);
    if (cVar3 == '\0') {
      return param_3;
    }
    cVar3 = func_0x058485c0(param_3,0xf6ff6a8);
    if (cVar3 != '\0') {
LAB_0d3763e9:
      func_0x0d379920(&puStack_a28,param_3,0);
      return puStack_a28;
    }
    if ((*param_2 & 1) == 0) {
      uStack_ab8 = param_2[2];
      uStack_ac8 = *param_2;
      uStack_ac0 = param_2[1];
    }
    else {
      func_0x0412e5e0(&uStack_ac8,param_2[2],param_2[1]);
    }
    puStack_a28 = &UNK_0f47e5e8;
    puStack_a20 = (undefined8 *)uStack_ac8;
    uStack_a18 = uStack_ac0;
    uStack_a10 = uStack_ab8;
    uStack_ac8 = 0;
    uStack_ac0 = 0;
    uStack_ab8 = 0;
    uVar14 = func_0x0b5ab590(&puStack_a28);
    uVar15 = 0;
    if (0x100000000 < uVar14) {
      uVar15 = uVar14;
    }
    puStack_a28 = &UNK_0f47e5e8;
    uVar14 = uStack_ac8;
    uVar2 = uStack_ab8;
    if (((ulong)puStack_a20 & 1) != 0) {
      func_0x0412a280(uStack_a10,(ulong)puStack_a20 & 0xfffffffffffffffe);
      uVar14 = uStack_ac8;
      uVar2 = uStack_ab8;
    }
joined_r0x0d376ea5:
    if ((uVar14 & 1) != 0) {
      func_0x0412a280(uVar2,uVar14 & 0xfffffffffffffffe);
    }
    uVar19 = 0xf6ff6a8;
    goto LAB_0d376ec7;
  }
  if (cVar3 != '\0') {
    cVar3 = func_0x0c6c9590(*(undefined8 *)(param_3 + 0x68),0xf6fc8d8);
    if (cVar3 == '\0') {
      return param_3;
    }
    cVar3 = func_0x048e7b80(param_2,&UNK_012e9dcd);
    if (cVar3 != '\0') goto LAB_0d3762e6;
    cVar3 = func_0x048e7b80(param_2,&UNK_01475ec2);
    if (cVar3 == '\0') {
      return param_3;
    }
    goto LAB_0d376606;
  }
  cVar3 = func_0x048e7b80(param_1,&UNK_014afa68);
  if (cVar3 == '\0') {
    cVar3 = func_0x048e7b80(param_1,&UNK_014c1087);
    if ((cVar3 == '\0') || (cVar3 = func_0x048e7b80(param_2,&UNK_01450608), cVar3 == '\0')) {
      cVar3 = func_0x048e7b80(param_1,&UNK_01204e25);
      if ((cVar3 == '\0') || (cVar3 = func_0x048e7b80(param_2,&UNK_01306cb5), cVar3 == '\0')) {
        cVar3 = func_0x048e7b80(param_1,&UNK_0147c3bf);
        if (cVar3 != '\0') {
          cVar3 = func_0x0c6c9590(*(undefined8 *)(param_3 + 0x68),0xf6fe4a0);
          if (cVar3 != '\0') {
            cVar3 = func_0x048e7b80(param_2,&UNK_0148c373);
            if (cVar3 != '\0') {
              func_0x0d379b40(&puStack_a28,param_3,0);
              return puStack_a28;
            }
            cVar3 = func_0x048e7b80(param_2,&UNK_0128202b);
            if (cVar3 != '\0') {
              func_0x0d379b40(&puStack_a28,param_3,3);
              return puStack_a28;
            }
            cVar3 = func_0x048e7b80(param_2,&UNK_012335ef);
            if (cVar3 != '\0') {
              func_0x0d379b40(&puStack_a28,param_3,4);
              return puStack_a28;
            }
            cVar3 = func_0x048e7b80(param_2,&UNK_012cda3b);
            if (cVar3 == '\0') {
              cVar3 = func_0x048e7b80(param_2,&UNK_011feb37);
              if (cVar3 == '\0') {
                return param_3;
              }
              func_0x0d379b40(&puStack_a28,param_3,2);
              return puStack_a28;
            }
            func_0x0d379b40(&puStack_a28,param_3,1);
            return puStack_a28;
          }
          cVar3 = func_0x048e7b80(param_2,&UNK_012008e4);
          if (cVar3 != '\0') {
            uVar19 = 0xf6fde70;
LAB_0d376f26:
            func_0x04abe3d0(&puStack_a28,param_3,uVar19,0);
            return puStack_a28;
          }
          cVar3 = func_0x048e7b80(param_2,&UNK_0143ffac);
          if (cVar3 != '\0') {
            uVar19 = 0xf6fde70;
LAB_0d3775b8:
            func_0x04abe3d0(&puStack_a28,param_3,uVar19,1);
            return puStack_a28;
          }
          cVar3 = func_0x048e7b80(param_2,&UNK_012e9dd5);
          if (cVar3 != '\0') {
            uVar19 = 0xf6fde70;
LAB_0d37794e:
            func_0x04abe3d0(&puStack_a28,param_3,uVar19,2);
            return puStack_a28;
          }
          cVar3 = func_0x048e7b80(param_2,&UNK_013f1960);
          if (cVar3 == '\0') {
            cVar3 = func_0x048e7b80(param_2,&UNK_012694a1);
            if (cVar3 != '\0') {
              func_0x04abe3d0(&puStack_a28,param_3,0xf6fde70,4);
              return puStack_a28;
            }
            cVar3 = func_0x048e7b80(param_2,&UNK_0131d7eb);
            if (cVar3 != '\0') {
              func_0x04abe3d0(&puStack_a28,param_3,0xf6fde70,5);
              return puStack_a28;
            }
            cVar3 = func_0x048e7b80(param_2,&UNK_0136f4f5);
            if (cVar3 != '\0') {
              func_0x04abe3d0(&puStack_a28,param_3,0xf6fde70,6);
              return puStack_a28;
            }
            cVar3 = func_0x048e7b80(param_2,&UNK_01388e45);
            if (cVar3 == '\0') {
              cVar3 = func_0x048e7b80(param_2,&UNK_013f196f);
              if (cVar3 != '\0') {
                func_0x04abe3d0(&puStack_a28,param_3,0xf6fde70,8);
                return puStack_a28;
              }
              cVar3 = func_0x048e7b80(param_2,&UNK_013a3b9a);
              if (cVar3 == '\0') {
                return param_3;
              }
              func_0x04abe3d0(&puStack_a28,param_3,0xf6fde70,9);
              return puStack_a28;
            }
            func_0x04abe3d0(&puStack_a28,param_3,0xf6fde70,7);
            return puStack_a28;
          }
          uVar19 = 0xf6fde70;
LAB_0d377c1f:
          func_0x04abe3d0(&puStack_a28,param_3,uVar19,3);
          return puStack_a28;
        }
        cVar3 = func_0x048e7b80(param_1,&UNK_0129cc82);
        if ((cVar3 == '\0') || (cVar3 = func_0x048e7b80(param_2,&UNK_01306cb5), cVar3 == '\0')) {
          if ((*(long **)(param_3 + 0x68))[0x19] == _DAT_0f71b510) {
            cVar3 = func_0x048e7b80(param_1,&UNK_013ababc);
            if (((((cVar3 == '\0') ||
                  (cVar3 = func_0x048e7b80(param_2,&UNK_01306cb5), iVar9 = _DAT_0f70d6b0,
                  cVar3 == '\0')) &&
                 ((cVar3 = func_0x048e7b80(param_1,&UNK_012bd0c5), cVar3 == '\0' ||
                  (cVar3 = func_0x048e7b80(param_2,&UNK_01306cb5), iVar9 = _DAT_0f70d6b4,
                  cVar3 == '\0')))) &&
                ((cVar3 = func_0x048e7b80(param_1,&UNK_013e0bd5), cVar3 == '\0' ||
                 (cVar3 = func_0x048e7b80(param_2,&UNK_01306cb5), iVar9 = _DAT_0f70d6b8,
                 cVar3 == '\0')))) &&
               ((cVar3 = func_0x048e7b80(param_1,&UNK_0119e418), cVar3 == '\0' ||
                (cVar3 = func_0x048e7b80(param_2,&UNK_01306cb5), iVar9 = _DAT_0f70d6bc,
                cVar3 == '\0')))) {
              cVar3 = func_0x048e7b80(param_1,&UNK_0123ca44);
              if (cVar3 == '\0') {
                return param_3;
              }
              cVar3 = func_0x048e7b80(param_2,&UNK_01306cb5);
              iVar9 = _DAT_0f70d6c0;
              if (cVar3 == '\0') {
                return param_3;
              }
            }
            uVar19 = 0xf6fef60;
LAB_0d3779a0:
            func_0x04abe3d0(&puStack_a28,param_3,uVar19,iVar9);
            return puStack_a28;
          }
          cVar3 = (**(code **)(**(long **)(param_3 + 0x68) + 0xe0))();
          if (cVar3 == '\0') {
            cVar3 = (**(code **)(**(long **)(param_3 + 0x68) + 0xd0))();
            if (((cVar3 != '\0') ||
                (cVar3 = (**(code **)(**(long **)(param_3 + 0x68) + 0xd8))(), cVar3 != '\0')) ||
               (*(long *)(*(long *)(param_3 + 0x68) + 200) == _DAT_0f715380)) {
              bVar4 = func_0x048e7b80(param_2,&UNK_01306cb5);
              cVar3 = func_0x048e7b80(param_1,&UNK_013ababc);
              puVar12 = param_3;
              if (cVar3 != '\0') {
                func_0x0c51be30(&puStack_a28,param_3,0xf6fe8c0,bVar4);
                puVar12 = puStack_a28;
              }
              cVar3 = func_0x048e7b80(param_1,&UNK_012bd0c5);
              if (cVar3 != '\0') {
                func_0x0c51be30(&puStack_a28,param_3,0xf6fe868,bVar4);
                puVar12 = puStack_a28;
              }
              cVar3 = func_0x048e7b80(param_1,&UNK_013e0bd5);
              if (cVar3 != '\0') {
                func_0x0c51be30(&puStack_a28,param_3,0xf6fe918,bVar4);
                puVar12 = puStack_a28;
              }
              cVar3 = func_0x048e7b80(param_1,&UNK_0119e418);
              if (cVar3 == '\0') {
                return puVar12;
              }
              uVar19 = 0xf6fe970;
              goto LAB_0d3778f5;
            }
            cVar3 = func_0x048e7b80(param_1,&UNK_013294c4);
            if (cVar3 != '\0') {
              uVar19 = *(undefined8 *)(param_3 + 0x68);
              func_0x04a878b0(&puStack_a28,0xf70e218);
              cVar3 = func_0x0c6ccd60(uVar19,&puStack_a28);
              if (cVar3 == '\0') {
                return param_3;
              }
              uStack_b98 = (ulong)uStack_b98._4_4_ << 0x20;
              bVar23 = ((byte)*param_2 & 1) != 0;
              pbVar22 = (byte *)((long)param_2 + 1);
              if (bVar23) {
                pbVar22 = (byte *)param_2[2];
              }
              uVar15 = (ulong)(byte)((byte)*param_2 >> 1);
              if (bVar23) {
                uVar15 = param_2[1];
              }
              func_0x0edff950(pbVar22,uVar15,&uStack_b98,0,3);
              uVar6 = func_0x058485c0(param_3,0xf6ff2d0);
              uVar19 = 0xf7108e0;
              if ((int)uStack_b98 == 2) {
                uVar19 = 0xf711ba0;
              }
              uVar21 = 0xf711948;
              if ((int)uStack_b98 != 1) {
                uVar21 = uVar19;
              }
              uVar15 = FUN_0cc41df0(0xf6ff9e0,uVar21,1);
              goto LAB_0d377f6f;
            }
            cVar3 = func_0x048e7b80(param_1,&UNK_0142a5c6);
            if (cVar3 == '\0') {
              cVar3 = func_0x048e7b80(param_1,&UNK_0136f500);
              if (cVar3 != '\0') {
                iVar9 = func_0x04133190(param_2,0,10);
                iVar9 = iVar9 + -1;
                uVar19 = 0xf6fe238;
                goto LAB_0d3779a0;
              }
              cVar3 = func_0x048e7b80(param_1,&UNK_01331189);
              if (cVar3 != '\0') {
                if (*(long *)(*(long *)(param_3 + 0x68) + 200) != _DAT_0f716618) {
                  return param_3;
                }
                bVar4 = func_0x048e7b80(param_2,&UNK_01306cb5);
                bVar4 = bVar4 ^ 1;
                uVar19 = 0xf6fe290;
                goto LAB_0d3778f5;
              }
              cVar3 = func_0x048e7b80(param_1,&UNK_0131b830);
              if (cVar3 != '\0') {
                uVar19 = *(undefined8 *)(param_3 + 0x68);
                cVar3 = func_0x0c6c9590(uVar19,0xf6ff170);
                if (cVar3 == '\0') {
                  cVar3 = func_0x0c6c9590(uVar19,0xf6fe600);
                  if (cVar3 == '\0') {
                    return param_3;
                  }
                  uVar6 = func_0x04133190(param_2,0,10);
                  uVar19 = 0xf6fe600;
                }
                else {
                  uVar6 = func_0x04133190(param_2,0,10);
                  uVar19 = 0xf6ff170;
                }
code_r0x0d378b11:
                func_0x04abe3d0(&puStack_a28,param_3,uVar19,uVar6);
                return puStack_a28;
              }
              cVar3 = func_0x048e7b80(param_1,&UNK_0148c37c);
              if (cVar3 != '\0') {
                cVar3 = func_0x048e7b80(param_2,&UNK_0129b65b);
                if ((cVar3 == '\0') &&
                   (cVar3 = func_0x048e7b80(param_2,&UNK_014583e5), cVar3 == '\0')) {
                  cVar3 = func_0x048e7b80(param_2,&UNK_011ca07a);
                  if ((cVar3 == '\0') &&
                     (cVar3 = func_0x048e7b80(param_2,&UNK_0140b033), cVar3 == '\0')) {
                    cVar3 = func_0x048e7b80(param_2,&UNK_0140968f);
                    if ((cVar3 == '\0') &&
                       (cVar3 = func_0x048e7b80(param_2,&UNK_013f7c0c), cVar3 == '\0')) {
                      cVar3 = func_0x048e7b80(param_2,&UNK_01218754);
                      if ((cVar3 == '\0') &&
                         (cVar3 = func_0x048e7b80(param_2,&UNK_012836a8), cVar3 == '\0')) {
                        cVar3 = func_0x048e7b80(param_2,&UNK_0131b7ad);
                        if ((cVar3 != '\0') ||
                           (cVar3 = func_0x048e7b80(param_2,&UNK_013be163), cVar3 != '\0')) {
                          uVar19 = 0;
LAB_0d3792ab:
                          func_0x0d379920(&uStack_b98,param_3,uVar19);
                          func_0x0d374460(&puStack_a28,uStack_b98,3);
                          return puStack_a28;
                        }
                        cVar3 = func_0x048e7b80(param_2,&UNK_0146faba);
                        if ((cVar3 != '\0') ||
                           (cVar3 = func_0x048e7b80(param_2,&UNK_012008f0), cVar3 != '\0')) {
                          uVar19 = 0;
LAB_0d37931c:
                          func_0x0d379920(&uStack_b98,param_3,uVar19);
                          func_0x0d374460(&puStack_a28,uStack_b98,1);
                          return puStack_a28;
                        }
                        cVar3 = func_0x048e7b80(param_2,&UNK_011feb29);
                        if ((cVar3 == '\0') &&
                           (cVar3 = func_0x048e7b80(param_2,&UNK_013a3ba5), cVar3 == '\0')) {
                          cVar3 = func_0x048e7b80(param_2,&UNK_013bcb08);
                          if ((cVar3 == '\0') &&
                             (cVar3 = func_0x048e7b80(param_2,&UNK_0140b040), cVar3 == '\0')) {
                            cVar3 = func_0x048e7b80(param_2,&UNK_013bcb13);
                            if ((cVar3 != '\0') ||
                               (cVar3 = func_0x048e7b80(param_2,&UNK_0136f508), cVar3 != '\0')) {
                              uVar19 = 1;
                              goto LAB_0d37931c;
                            }
                            cVar3 = func_0x048e7b80(param_2,&UNK_012cda0e);
                            if ((cVar3 != '\0') ||
                               (cVar3 = func_0x048e7b80(param_2,&UNK_013f197a), cVar3 != '\0')) {
                              uVar19 = 1;
                              goto LAB_0d3792ab;
                            }
                            cVar3 = func_0x048e7b80(param_2,&UNK_013bcb1b);
                            if ((cVar3 != '\0') ||
                               (cVar3 = func_0x048e7b80(param_2,&UNK_011e4baf), cVar3 != '\0')) {
                              uVar19 = 1;
                              goto LAB_0d37895a;
                            }
                            cVar3 = func_0x048e7b80(param_2,&UNK_011e2dac);
                            if ((cVar3 == '\0') &&
                               (cVar3 = func_0x048e7b80(param_2,&UNK_0136f514), cVar3 == '\0')) {
                              return param_3;
                            }
                            uVar19 = 1;
                          }
                          else {
                            uVar19 = 0;
                          }
                          func_0x0d379920(&uStack_b98,param_3,uVar19);
                          func_0x0d374460(&puStack_a28,uStack_b98,2);
                          return puStack_a28;
                        }
                        uVar19 = 0;
                      }
                      else {
                        uVar19 = 3;
                      }
                    }
                    else {
                      uVar19 = 2;
                    }
                  }
                  else {
                    uVar19 = 5;
                  }
                }
                else {
                  uVar19 = 4;
                }
LAB_0d37895a:
                func_0x0d379920(&uStack_b98,param_3,uVar19);
                func_0x0d374460(&puStack_a28,uStack_b98,0);
                return puStack_a28;
              }
              cVar3 = func_0x048e7b80(param_1,&UNK_011ae507);
              if (cVar3 != '\0') {
                lVar17 = *(long *)(param_3 + 0x68);
                lVar16 = *(long *)(lVar17 + 200);
                if (lVar16 == _DAT_0f714e70) {
                  uVar6 = func_0x0d374120(lVar17,*(undefined4 *)(param_3 + 0x128));
                  uVar19 = FUN_0cc41df0(0xf6ff9e0,0xf714e48,1);
                  func_0x0cf9af50(&puStack_a28,uVar19,0xf6ff5f8,uVar6);
                  return puStack_a28;
                }
                if ((lVar16 == _DAT_0f715880) || (lVar16 == _DAT_0f7159c0)) {
                  bVar4 = func_0x048e7b80(param_2,&UNK_01306cb5);
                  bVar4 = bVar4 ^ 1;
                  uVar19 = 0xf6ff3d8;
                }
                else {
                  cVar3 = func_0x0c6c9590(lVar17,0xf6fc988);
                  if (cVar3 == '\0') {
                    return param_3;
                  }
                  bVar4 = func_0x048e7b80(param_2,&UNK_01306cb5);
                  uVar19 = 0xf6fc988;
                }
                goto LAB_0d3778f5;
              }
              cVar3 = func_0x048e7b80(param_1,&UNK_01493f37);
              if (cVar3 == '\0') {
                cVar3 = func_0x048e7b80(param_1,&UNK_01337f85);
                if (cVar3 == '\0') {
                  cVar3 = func_0x048e7b80(param_1,&UNK_01394eee);
                  if (cVar3 != '\0') {
                    uStack_b98 = uStack_b98 & 0xffffffff00000000;
                    bVar23 = ((byte)*param_2 & 1) != 0;
                    pbVar22 = (byte *)((long)param_2 + 1);
                    if (bVar23) {
                      pbVar22 = (byte *)param_2[2];
                    }
                    uVar15 = (ulong)(byte)((byte)*param_2 >> 1);
                    if (bVar23) {
                      uVar15 = param_2[1];
                    }
                    func_0x0edff950(pbVar22,uVar15,&uStack_b98,1,4);
                    iVar9 = (int)uStack_b98 + -1;
                    uVar19 = 0xf6fdec8;
                    goto LAB_0d3779a0;
                  }
                  cVar3 = func_0x048e7b80(param_1,&UNK_01268372);
                  if (cVar3 != '\0') {
                    cVar3 = func_0x048e7b80(param_2,&UNK_01358589);
                    if (cVar3 == '\0') {
                      cVar3 = func_0x048e7b80(param_2,&UNK_0121f2f9);
                      if (cVar3 == '\0') {
                        cVar3 = func_0x048e7b80(param_2,&UNK_01322b66);
                        if (cVar3 != '\0') {
                          uVar19 = 0xf6fc300;
                          goto LAB_0d37794e;
                        }
                        cVar3 = func_0x048e7b80(param_2,&UNK_01338b20);
                        if (cVar3 == '\0') {
                          return param_3;
                        }
                        uVar19 = 0xf6fc300;
                        goto LAB_0d377c1f;
                      }
                      uVar19 = 0xf6fc300;
                      goto LAB_0d3775b8;
                    }
                    uVar19 = 0xf6fc300;
                    goto LAB_0d376f26;
                  }
                  cVar3 = func_0x048e7b80(param_1,&UNK_01424b76);
                  if (cVar3 == '\0') {
                    cVar3 = func_0x048e7b80(param_1,&UNK_0136f521);
                    if (cVar3 == '\0') {
                      return param_3;
                    }
                    bVar4 = func_0x048e7b80(param_2,&UNK_01306cb5);
                    uVar19 = 0xf6ff488;
                  }
                  else {
                    bVar4 = func_0x048e7b80(param_2,&UNK_01306cb5);
                    uVar19 = 0xf6ff7b0;
                  }
                  goto LAB_0d3778f5;
                }
                cVar3 = func_0x048e7b80(param_2,&UNK_01306cb5);
                if (cVar3 == '\0') {
                  return param_3;
                }
                lVar17 = *(long *)(*(long *)(param_3 + 0x68) + 200);
                if (lVar17 == _DAT_0f715830) {
                  cVar3 = func_0x0c6c9590(*(long *)(param_3 + 0x68),0xf6fc510);
                  if (cVar3 == '\0') {
                    uVar5 = 0;
                  }
                  else {
                    uVar5 = func_0x0d276a80(param_3,0xf6fc510);
                  }
                  uVar6 = func_0x058485c0(param_3,0xf6ff2d0);
                  uVar19 = FUN_0cc41df0(0xf6ff9e0,0xf710930,1);
                  func_0x0c51be30(&uStack_b98,uVar19,0xf6fc510,uVar5);
                  uVar15 = uStack_b98;
LAB_0d377f6f:
                  func_0x04abe3d0(&puStack_a28,uVar15,0xf6ff2d0,uVar6);
                  return puStack_a28;
                }
                if (lVar17 == _DAT_0f715470) {
                  uVar10 = func_0x058485c0(param_3,0xf6fdec8);
                  uVar6 = func_0x058485c0(param_3,0xf6ff2d0);
                  uVar19 = FUN_0cc41df0(0xf6ff9e0,0xf713b40,1);
                  func_0x04abe3d0(&uStack_b98,uVar19,0xf6fdec8,uVar10);
                  uVar15 = uStack_b98;
                  goto LAB_0d377f6f;
                }
                if (lVar17 != _DAT_0f7105e8) {
                  return param_3;
                }
                goto LAB_0d3764f7;
              }
              cVar3 = func_0x048e7b80(param_2,&UNK_01338b17);
              if (cVar3 == '\0') {
                cVar3 = func_0x048e7b80(param_2,&UNK_0148c388);
                if (cVar3 == '\0') {
                  return param_3;
                }
                uVar19 = 0xf6fc510;
LAB_0d376ef6:
                bVar4 = 0;
                goto LAB_0d3778f5;
              }
              uVar19 = 0xf6fc510;
            }
            else {
              uVar19 = *(undefined8 *)(param_3 + 0x68);
              func_0x04a878b0(&puStack_a28,&DAT_0f70d228);
              cVar3 = func_0x0c6ccd60(uVar19,&puStack_a28);
              if (cVar3 != '\0') {
                if ((*param_2 & 1) == 0) {
                  uStack_b78 = param_2[2];
                  puStack_b88 = (undefined8 *)*param_2;
                  uStack_b80 = param_2[1];
                }
                else {
                  func_0x0412e5e0(&puStack_b88,param_2[2],param_2[1]);
                }
                puStack_a28 = &UNK_0f47e5e8;
                puStack_a20 = puStack_b88;
                uStack_a18 = uStack_b80;
                uStack_a10 = uStack_b78;
                puStack_b88 = (undefined8 *)0x0;
                uStack_b80 = 0;
                uStack_b78 = 0;
                uVar15 = func_0x0cf63170(&UNK_0f41df68,&puStack_a28);
                puStack_a28 = &UNK_0f47e5e8;
                if (((ulong)puStack_a20 & 1) != 0) {
                  func_0x0412a280(uStack_a10,(ulong)puStack_a20 & 0xfffffffffffffffe);
                }
                if (((ulong)puStack_b88 & 1) != 0) {
                  func_0x0412a280(uStack_b78,(ulong)puStack_b88 & 0xfffffffffffffffe);
                }
                lVar17 = (long)(int)uVar15;
                if ((uVar15 & 0x100000000) == 0) {
                  lVar17 = 0;
                }
                lVar17 = *(long *)(_DAT_0f70d228 + lVar17 * 8);
code_r0x0d376acd:
                puVar12 = (undefined *)FUN_0cc41df0(0xf6ff9e0,lVar17,1);
                return puVar12;
              }
              cVar3 = (**(code **)(**(long **)(param_3 + 0x68) + 0xe8))();
              if (cVar3 == '\0') {
                return param_3;
              }
              cVar3 = func_0x048e7b80(param_2,&UNK_01388a78);
              if (cVar3 != '\0') {
                func_0x0d379d60(&puStack_a28,param_3);
                return puStack_a28;
              }
              cVar3 = func_0x048e7b80(param_2,&UNK_012ee0ba);
              if (cVar3 != '\0') {
                lVar17 = *(long *)(param_3 + 0x68);
                if (*(char *)(lVar17 + 0x3a8) == '\x01') {
                  return *(undefined **)(lVar17 + 0x200);
                }
                lVar17 = lVar17 + 0x3b0;
                goto code_r0x0d376acd;
              }
LAB_0d37709b:
              uVar19 = 0xf6feb80;
            }
          }
          else {
            cVar3 = func_0x048e7b80(param_1,&UNK_013ababc);
            puVar12 = param_3;
            if (cVar3 != '\0') {
              bVar23 = ((byte)*param_2 & 1) != 0;
              pbVar22 = (byte *)((long)param_2 + 1);
              if (bVar23) {
                pbVar22 = (byte *)param_2[2];
              }
              uVar15 = (ulong)(byte)((byte)*param_2 >> 1);
              if (bVar23) {
                uVar15 = param_2[1];
              }
              uVar6 = func_0x0cf5f630(pbVar22,uVar15);
              func_0x0d379c50(&puStack_a28,param_3,_DAT_0f6ff0c8,uVar6);
              puVar12 = puStack_a28;
            }
            cVar3 = func_0x048e7b80(param_1,&UNK_012bd0c5);
            if (cVar3 != '\0') {
              bVar23 = ((byte)*param_2 & 1) != 0;
              pbVar22 = (byte *)((long)param_2 + 1);
              if (bVar23) {
                pbVar22 = (byte *)param_2[2];
              }
              uVar15 = (ulong)(byte)((byte)*param_2 >> 1);
              if (bVar23) {
                uVar15 = param_2[1];
              }
              uVar6 = func_0x0cf5f630(pbVar22,uVar15);
              func_0x0d379c50(&puStack_a28,param_3,_DAT_0f6ff018,uVar6);
              puVar12 = puStack_a28;
            }
            cVar3 = func_0x048e7b80(param_1,&UNK_013e0bd5);
            if (cVar3 != '\0') {
              bVar23 = ((byte)*param_2 & 1) != 0;
              pbVar22 = (byte *)((long)param_2 + 1);
              if (bVar23) {
                pbVar22 = (byte *)param_2[2];
              }
              uVar15 = (ulong)(byte)((byte)*param_2 >> 1);
              if (bVar23) {
                uVar15 = param_2[1];
              }
              uVar6 = func_0x0cf5f630(pbVar22,uVar15);
              func_0x0d379c50(&puStack_a28,param_3,_DAT_0f6ff070,uVar6);
              puVar12 = puStack_a28;
            }
            cVar3 = func_0x048e7b80(param_1,&UNK_0119e418);
            if (cVar3 != '\0') {
              bVar23 = ((byte)*param_2 & 1) != 0;
              pbVar22 = (byte *)((long)param_2 + 1);
              if (bVar23) {
                pbVar22 = (byte *)param_2[2];
              }
              uVar15 = (ulong)(byte)((byte)*param_2 >> 1);
              if (bVar23) {
                uVar15 = param_2[1];
              }
              uVar6 = func_0x0cf5f630(pbVar22,uVar15);
              func_0x0d379c50(&puStack_a28,param_3,_DAT_0f6ff120,uVar6);
              puVar12 = puStack_a28;
            }
            cVar3 = func_0x048e7b80(param_1,&UNK_0123ca44);
            if (cVar3 == '\0') {
              return puVar12;
            }
            cVar3 = func_0x048e7b80(param_2,&UNK_01306cb5);
            if (cVar3 == '\0') {
              return puVar12;
            }
            uVar19 = 0xf6fefb8;
          }
        }
        else {
          uVar19 = 0xf6fcfb8;
        }
      }
      else {
        if (((*(byte *)(*(long *)(param_3 + 0x68) + 0x109) & 2) != 0) &&
           (cVar3 = func_0x0d276a80(param_3,0xf6fe398), cVar3 != '\0')) {
          return param_3;
        }
LAB_0d3764f7:
        uVar19 = 0xf6fe708;
      }
    }
    else {
      cVar3 = func_0x0d276a80(param_3,0xf6fe398);
      if (cVar3 == '\0') {
        return param_3;
      }
      uVar19 = 0xf6fcf60;
    }
LAB_0d3778e5:
    bVar4 = 1;
LAB_0d3778f5:
    func_0x0c51be30(&puStack_a28,param_3,uVar19,bVar4);
    return puStack_a28;
  }
  lVar17 = *(long *)(param_3 + 0x68);
  cVar3 = func_0x0c6c9590(lVar17,0xf6ff5f8);
  if (cVar3 != '\0') {
    cVar3 = func_0x048e7b80(param_2,&UNK_013e0bd5);
    if (cVar3 != '\0') {
      func_0x0cf9af50(&puStack_a28,param_3,0xf6ff5f8,1);
      return puStack_a28;
    }
    cVar3 = func_0x048e7b80(param_2,&UNK_0119e418);
    if (cVar3 != '\0') {
      func_0x0cf9af50(&puStack_a28,param_3,0xf6ff5f8,2);
      return puStack_a28;
    }
    cVar3 = func_0x048e7b80(param_2,&UNK_013ababc);
    if (cVar3 != '\0') {
      func_0x0cf9af50(&puStack_a28,param_3,0xf6ff5f8,3);
      return puStack_a28;
    }
    cVar3 = func_0x048e7b80(param_2,&UNK_012bd0c5);
    if (cVar3 == '\0') {
      cVar3 = func_0x048e7b80(param_2,&UNK_0123ca44);
      if (cVar3 == '\0') {
        return param_3;
      }
      func_0x0cf9af50(&puStack_a28,param_3,0xf6ff5f8,5);
      return puStack_a28;
    }
    func_0x0cf9af50(&puStack_a28,param_3,0xf6ff5f8,4);
    return puStack_a28;
  }
  lVar16 = *(long *)(lVar17 + 200);
  if (((lVar16 == _DAT_0f710d90) || (lVar16 == _DAT_0f7168c0)) || (lVar16 == _DAT_0f7168e8)) {
    cVar3 = func_0x048e7b80(param_2,&UNK_013e0bd5);
    if (cVar3 != '\0') {
      func_0x0d379920(&puStack_a28,param_3,4);
      return puStack_a28;
    }
    cVar3 = func_0x048e7b80(param_2,&UNK_0119e418);
    if (cVar3 != '\0') {
      func_0x0d379920(&puStack_a28,param_3,5);
      return puStack_a28;
    }
    cVar3 = func_0x048e7b80(param_2,&UNK_013ababc);
    if (cVar3 != '\0') {
      func_0x0d379920(&puStack_a28,param_3,2);
      return puStack_a28;
    }
    cVar3 = func_0x048e7b80(param_2,&UNK_012bd0c5);
    if (cVar3 != '\0') {
      func_0x0d379920(&puStack_a28,param_3,3);
      return puStack_a28;
    }
    cVar3 = func_0x048e7b80(param_2,&UNK_013c4ba4);
    if (cVar3 == '\0') {
      cVar3 = func_0x048e7b80(param_2,&UNK_0123ca44);
      if (cVar3 == '\0') {
        return param_3;
      }
      goto LAB_0d376337;
    }
    goto LAB_0d3763e9;
  }
  if (lVar16 == _DAT_0f716a28) {
    cVar3 = func_0x048e7b80(param_2,&UNK_013e0bd5);
    if (cVar3 != '\0') {
      func_0x0d374010(&puStack_a28,param_3,1);
      return puStack_a28;
    }
    cVar3 = func_0x048e7b80(param_2,&UNK_0119e418);
    if (cVar3 != '\0') {
      func_0x0d374010(&puStack_a28,param_3,3);
      return puStack_a28;
    }
    cVar3 = func_0x048e7b80(param_2,&UNK_013ababc);
    if (cVar3 != '\0') {
      func_0x0d374010(&puStack_a28,param_3,2);
      return puStack_a28;
    }
    cVar3 = func_0x048e7b80(param_2,&UNK_012bd0c5);
    if (cVar3 == '\0') {
      return param_3;
    }
    func_0x0d374010(&puStack_a28,param_3,0);
    return puStack_a28;
  }
  if ((*(ulong *)(lVar17 + 0x108) & 0x2000) == 0) {
    if ((*(ulong *)(lVar17 + 0x108) & 0x200) == 0) {
      cVar3 = func_0x0c6c9590(lVar17,0xf6fe448);
      if (cVar3 != '\0') {
        cVar3 = func_0x048e7b80(param_2,&UNK_013e0bd5);
        if (cVar3 != '\0') {
          uVar19 = 0xf6fe448;
          goto LAB_0d376f26;
        }
        cVar3 = func_0x048e7b80(param_2,&UNK_0119e418);
        if (cVar3 != '\0') {
          uVar19 = 0xf6fe448;
          goto LAB_0d3775b8;
        }
        cVar3 = func_0x048e7b80(param_2,&UNK_013ababc);
        if (cVar3 != '\0') {
          uVar19 = 0xf6fe448;
          goto LAB_0d37794e;
        }
        cVar3 = func_0x048e7b80(param_2,&UNK_012bd0c5);
        if (cVar3 == '\0') {
          return param_3;
        }
        uVar19 = 0xf6fe448;
        goto LAB_0d377c1f;
      }
      cVar3 = func_0x0c6c9590(lVar17,0xf6ff6a8);
      if (cVar3 != '\0') {
        if ((*param_2 & 1) == 0) {
          uStack_b18 = param_2[2];
          uStack_b28 = *param_2;
          uStack_b20 = param_2[1];
        }
        else {
          func_0x0412e5e0(&uStack_b28,param_2[2],param_2[1]);
        }
        puStack_a28 = &UNK_0f47e5e8;
        puStack_a20 = (undefined8 *)uStack_b28;
        uStack_a18 = uStack_b20;
        uStack_a10 = uStack_b18;
        uStack_b28 = 0;
        uStack_b20 = 0;
        uStack_b18 = 0;
        uVar14 = func_0x0b5ab590(&puStack_a28);
        uVar15 = 0;
        if (0x100000000 < uVar14) {
          uVar15 = uVar14;
        }
        puStack_a28 = &UNK_0f47e5e8;
        uVar14 = uStack_b28;
        uVar2 = uStack_b18;
        if (((ulong)puStack_a20 & 1) != 0) {
          func_0x0412a280(uStack_a10,(ulong)puStack_a20 & 0xfffffffffffffffe);
          uVar14 = uStack_b28;
          uVar2 = uStack_b18;
        }
        goto joined_r0x0d376ea5;
      }
      cVar3 = func_0x0c6c9590(lVar17,0xf6ff538);
      if (cVar3 == '\0') {
        cVar3 = func_0x0c6c9590(lVar17,0xf6ff2d0);
        if (cVar3 == '\0') {
          cVar3 = func_0x0c6c9590(lVar17,0xf6fc8d8);
          if (cVar3 == '\0') {
            return param_3;
          }
          cVar3 = func_0x048e7b80(param_2,&UNK_013e0bd5);
          if (cVar3 == '\0') {
            cVar3 = func_0x048e7b80(param_2,&UNK_0119e418);
            if (cVar3 == '\0') {
              cVar3 = func_0x048e7b80(param_2,&UNK_013ababc);
              if (cVar3 == '\0') {
                cVar3 = func_0x048e7b80(param_2,&UNK_012bd0c5);
                if (cVar3 == '\0') {
                  return param_3;
                }
                iVar8 = func_0x0d374390(*(undefined8 *)(param_3 + 0x68),
                                        *(undefined4 *)(param_3 + 0x128));
                if (iVar8 == 7) goto LAB_0d3762e6;
                iVar8 = func_0x0d374390(*(undefined8 *)(param_3 + 0x68),
                                        *(undefined4 *)(param_3 + 0x128));
                if (iVar8 != 5) {
                  func_0x0d379a30(&puStack_a28,param_3,4);
                  return puStack_a28;
                }
              }
              else {
                iVar8 = func_0x0d374390(*(undefined8 *)(param_3 + 0x68),
                                        *(undefined4 *)(param_3 + 0x128));
                if (iVar8 == 7) {
LAB_0d3762e6:
                  func_0x0d379a30(&puStack_a28,param_3,7);
                  return puStack_a28;
                }
                iVar8 = func_0x0d374390(*(undefined8 *)(param_3 + 0x68),
                                        *(undefined4 *)(param_3 + 0x128));
                if (iVar8 != 5) {
                  func_0x0d379a30(&puStack_a28,param_3,3);
                  return puStack_a28;
                }
              }
LAB_0d376606:
              func_0x0d379a30(&puStack_a28,param_3,5);
              return puStack_a28;
            }
            iVar8 = func_0x0d374390(*(undefined8 *)(param_3 + 0x68),*(undefined4 *)(param_3 + 0x128)
                                   );
            if (iVar8 == 7) goto LAB_0d378677;
            iVar8 = func_0x0d374390(*(undefined8 *)(param_3 + 0x68),*(undefined4 *)(param_3 + 0x128)
                                   );
            if (iVar8 != 5) {
              func_0x0d379a30(&puStack_a28,param_3,2);
              return puStack_a28;
            }
          }
          else {
            iVar8 = func_0x0d374390(*(undefined8 *)(param_3 + 0x68),*(undefined4 *)(param_3 + 0x128)
                                   );
            if (iVar8 == 7) {
LAB_0d378677:
              func_0x0d379a30(&puStack_a28,param_3,0);
              return puStack_a28;
            }
            iVar8 = func_0x0d374390(*(undefined8 *)(param_3 + 0x68),*(undefined4 *)(param_3 + 0x128)
                                   );
            if (iVar8 != 5) {
              func_0x0d379a30(&puStack_a28,param_3,1);
              return puStack_a28;
            }
          }
          func_0x0d379a30(&puStack_a28,param_3,6);
          return puStack_a28;
        }
        if ((*param_2 & 1) == 0) {
          uStack_b58 = param_2[2];
          uStack_b68 = *param_2;
          uStack_b60 = param_2[1];
        }
        else {
          func_0x0412e5e0(&uStack_b68,param_2[2],param_2[1]);
        }
        puStack_a28 = &UNK_0f47e5e8;
        puStack_a20 = (undefined8 *)uStack_b68;
        uStack_a18 = uStack_b60;
        uStack_a10 = uStack_b58;
        uStack_b68 = 0;
        uStack_b60 = 0;
        uStack_b58 = 0;
        uVar14 = func_0x0b5aa980(&puStack_a28);
        uVar15 = 0;
        if (0x100000000 < uVar14) {
          uVar15 = uVar14;
        }
        puStack_a28 = &UNK_0f47e5e8;
        uVar14 = uStack_b68;
        uVar2 = uStack_b58;
        if (((ulong)puStack_a20 & 1) != 0) {
          func_0x0412a280(uStack_a10,(ulong)puStack_a20 & 0xfffffffffffffffe);
          uVar14 = uStack_b68;
          uVar2 = uStack_b58;
        }
        goto joined_r0x0d377b3b;
      }
      if ((*param_2 & 1) == 0) {
        uStack_b38 = param_2[2];
        uStack_b48 = *param_2;
        uStack_b40 = param_2[1];
      }
      else {
        func_0x0412e5e0(&uStack_b48,param_2[2],param_2[1]);
      }
      puStack_a28 = &UNK_0f47e5e8;
      puStack_a20 = (undefined8 *)uStack_b48;
      uStack_a18 = uStack_b40;
      uStack_a10 = uStack_b38;
      uStack_b48 = 0;
      uStack_b40 = 0;
      uStack_b38 = 0;
      uVar14 = func_0x0b5aa980(&puStack_a28);
      uVar15 = 0;
      if (0x100000000 < uVar14) {
        uVar15 = uVar14;
      }
      puStack_a28 = &UNK_0f47e5e8;
      uVar14 = uStack_b48;
      uVar2 = uStack_b38;
      if (((ulong)puStack_a20 & 1) != 0) {
        func_0x0412a280(uStack_a10,(ulong)puStack_a20 & 0xfffffffffffffffe);
        uVar14 = uStack_b48;
        uVar2 = uStack_b38;
      }
    }
    else {
      cVar3 = func_0x0d276a80(param_3,0xf6fe398);
      if (cVar3 != '\0') {
        return param_3;
      }
      if ((*param_2 & 1) == 0) {
        uStack_af8 = param_2[2];
        uStack_b08 = *param_2;
        uStack_b00 = param_2[1];
      }
      else {
        func_0x0412e5e0(&uStack_b08,param_2[2],param_2[1]);
      }
      puStack_a28 = &UNK_0f47e5e8;
      puStack_a20 = (undefined8 *)uStack_b08;
      uStack_a18 = uStack_b00;
      uStack_a10 = uStack_af8;
      uStack_b08 = 0;
      uStack_b00 = 0;
      uStack_af8 = 0;
      uVar14 = func_0x0b5aa980(&puStack_a28);
      uVar15 = 0;
      if (0x100000000 < uVar14) {
        uVar15 = uVar14;
      }
      puStack_a28 = &UNK_0f47e5e8;
      uVar14 = uStack_b08;
      uVar2 = uStack_af8;
      if (((ulong)puStack_a20 & 1) != 0) {
        func_0x0412a280(uStack_a10,(ulong)puStack_a20 & 0xfffffffffffffffe);
        uVar14 = uStack_b08;
        uVar2 = uStack_af8;
      }
    }
    if ((uVar14 & 1) != 0) {
      func_0x0412a280(uVar2,uVar14 & 0xfffffffffffffffe);
    }
    uVar19 = 0xf6ff538;
  }
  else {
    if ((*param_2 & 1) == 0) {
      uStack_ad8 = param_2[2];
      uStack_ae8 = *param_2;
      uStack_ae0 = param_2[1];
    }
    else {
      func_0x0412e5e0(&uStack_ae8,param_2[2],param_2[1]);
    }
    puStack_a28 = &UNK_0f47e5e8;
    puStack_a20 = (undefined8 *)uStack_ae8;
    uStack_a18 = uStack_ae0;
    uStack_a10 = uStack_ad8;
    uStack_ae8 = 0;
    uStack_ae0 = 0;
    uStack_ad8 = 0;
    uVar14 = func_0x0b5aa980(&puStack_a28);
    uVar15 = 0;
    if (0x100000000 < uVar14) {
      uVar15 = uVar14;
    }
    puStack_a28 = &UNK_0f47e5e8;
    uVar14 = uStack_ae8;
    uVar2 = uStack_ad8;
    if (((ulong)puStack_a20 & 1) != 0) {
      func_0x0412a280(uStack_a10,(ulong)puStack_a20 & 0xfffffffffffffffe);
      uVar14 = uStack_ae8;
      uVar2 = uStack_ad8;
    }
joined_r0x0d377b3b:
    if ((uVar14 & 1) != 0) {
      func_0x0412a280(uVar2,uVar14 & 0xfffffffffffffffe);
    }
    uVar19 = 0xf6ff2d0;
  }
LAB_0d376ec7:
  func_0x04abe3d0(&puStack_a28,param_3,uVar19,uVar15 & 0xffffffff);
  return puStack_a28;
}


