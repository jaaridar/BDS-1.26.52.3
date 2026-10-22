/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd218270 (ELF vaddr 0xd118270)
 * Label: caller-of-callee
 * Body:  [[0d218270, 0d2186e6] [0d2186f0, 0d2199c0] [0d2199d0, 0d21ae26] [0d21b0c3, 0d21b0fb] [0d21b10e, 0d21b136] [0d21b1d1, 0d21b23a] [0d21b263, 0d21b26a] [0d21b2d9, 0d21b3a6] [0d21b3d0, 0d21b3fe]]
 * Ghidra: FUN_0d218270
 */


/* WARNING: Removing unreachable block (ram,0x0d21b118) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0d218270(long param_1,uint *param_2,undefined8 param_3,undefined4 param_4)

{
  byte bVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [8];
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  byte bVar13;
  undefined4 uVar14;
  char cVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  uint uVar18;
  int iVar19;
  long lVar20;
  undefined8 *puVar21;
  ulong uVar22;
  long *plVar23;
  long lVar24;
  ulong uVar25;
  undefined8 uVar26;
  byte bVar27;
  ulong uVar28;
  long *plVar29;
  long *plVar30;
  long lVar31;
  byte *pbVar32;
  ulong uVar33;
  ulong uVar34;
  undefined1 auVar35 [4];
  bool bVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  byte *pbStack_e48;
  long *plStack_e38;
  long *plStack_e28;
  long *plStack_e20;
  uint uStack_e18;
  undefined4 uStack_e14;
  undefined4 uStack_e10;
  undefined4 uStack_e0c;
  undefined8 uStack_e08;
  undefined8 uStack_e00;
  long *plStack_df8;
  undefined8 uStack_df0;
  undefined8 uStack_de8;
  long lStack_de0;
  byte bStack_dd8;
  undefined8 uStack_dc8;
  undefined8 uStack_dc0;
  long *plStack_db8;
  long *plStack_db0;
  long *plStack_da8;
  long lStack_da0;
  long lStack_d98;
  long lStack_d90;
  byte bStack_d88;
  long *plStack_d78;
  long *plStack_d70;
  undefined1 auStack_d68 [4];
  uint uStack_d64;
  uint uStack_d60;
  uint uStack_d5c;
  long *plStack_d58;
  undefined4 uStack_d48;
  uint uStack_d44;
  uint uStack_d40;
  uint uStack_d3c;
  long lStack_d38;
  undefined1 auStack_d30 [8];
  long *plStack_d28;
  long *plStack_d20;
  long *plStack_d18;
  undefined1 auStack_d10 [8];
  long *plStack_d08;
  long *plStack_d00;
  long *plStack_cf8;
  long *plStack_cf0;
  long *plStack_ce8;
  undefined1 uStack_ce0;
  undefined8 uStack_cd8;
  undefined8 uStack_cd0;
  long *plStack_cc8;
  long *plStack_cc0;
  long *plStack_cb8;
  long lStack_cb0;
  long lStack_ca8;
  long lStack_ca0;
  byte bStack_c98;
  ulong uStack_c90;
  byte bStack_c88;
  undefined7 uStack_c87;
  ulong uStack_c80;
  undefined7 *puStack_c78;
  long lStack_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  long *plStack_c48;
  undefined8 uStack_c40;
  undefined8 uStack_c38;
  long lStack_c30;
  byte bStack_c28;
  long *plStack_c20;
  long lStack_c18;
  long *plStack_c10;
  undefined1 auStack_c08 [4];
  uint uStack_c04;
  undefined8 uStack_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_bf0;
  long *plStack_be8;
  undefined8 uStack_be0;
  undefined8 uStack_bd8;
  long lStack_bd0;
  byte bStack_bc8;
  byte bStack_bc0;
  long *plStack_950;
  long lStack_948;
  undefined2 uStack_940;
  undefined1 uStack_93e;
  long *plStack_938;
  long lStack_930;
  undefined8 uStack_928;
  long *plStack_920;
  long *plStack_918;
  long *plStack_910;
  undefined7 *puStack_908;
  ulong uStack_900;
  undefined7 *puStack_8f8;
  ulong uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  long *plStack_8d8;
  long *plStack_8d0;
  long *plStack_8c8;
  long lStack_8c0;
  long lStack_8b8;
  long lStack_8b0;
  byte bStack_8a8;
  long *plStack_628;
  long *plStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  uint uStack_5e8;
  uint uStack_5e4;
  uint uStack_5e0;
  uint uStack_5dc;
  long lStack_5d8;
  uint uStack_5d0;
  uint uStack_5cc;
  uint uStack_5c8;
  uint uStack_5c4;
  long *plStack_5c0;
  long *plStack_5b8;
  undefined4 uStack_5b0;
  undefined4 uStack_5a0;
  long *plStack_588;
  uint uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  long *plStack_360;
  long lStack_68;
  long lStack_60;
  long *plStack_50;
  long *plStack_48;
  undefined4 uStack_38;
  
  lStack_c18 = param_1 + 0xa8;
  func_0x0412d770();
  cVar15 = (**(code **)(**(long **)(param_1 + 0x28) + 0x60))(*(long **)(param_1 + 0x28),param_3);
  if (cVar15 != '\0') {
    plVar23 = (long *)(param_1 + 0x58);
    lVar20 = func_0x0d2287d0(plVar23,param_2);
    if (lVar20 == 0) {
      func_0x0d1d03b0(&uStack_5e8);
      (**(code **)(**(long **)(param_1 + 0x28) + 0x88))
                (auStack_c08,*(long **)(param_1 + 0x28),param_2,0);
      plStack_d70 = _auStack_c08;
      plStack_c20 = uStack_bf8;
      if (((ulong)_auStack_c08 & 1) == 0) {
        auStack_d30 = (undefined1  [8])_auStack_c08;
        plStack_d28 = uStack_c00;
        plStack_d20 = uStack_bf8;
      }
      else {
        func_0x0412e5e0(auStack_d30);
      }
      plStack_c10 = (long *)0x0;
      plStack_d78 = plVar23;
      if ((DAT_0f7b8fb8 == '\0') && (iVar19 = func_0x04108328(&DAT_0f7b8fb8), iVar19 != 0)) {
        func_0x0ee5ea20(&DAT_0f7b8f98);
        func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
        func_0x0410844d(&DAT_0f7b8fb8);
      }
      plStack_910 = (long *)((ulong)auStack_d30 >> 1 & 0x7f);
      plStack_918 = (long *)(auStack_d30 + 1);
      if (((ulong)auStack_d30 & 1) != 0) {
        plStack_910 = plStack_d28;
        plStack_918 = plStack_d20;
      }
      (**(code **)(_DAT_0f7b8f98 + 0x120))(auStack_c08,&DAT_0f7b8f98,&plStack_918,&plStack_c10);
      uStack_8e8 = (long *)0x8d213925abf529f1;
      uStack_8e0 = (long *)&UNK_0140f690;
      plStack_8d8 = (long *)0x1;
      plStack_8d0 = (long *)CONCAT44(plStack_8d0._4_4_,0x197);
      if (bStack_bc8 == 0) {
        uStack_dc8 = (long *)0x0;
        uStack_dc0 = (long *)0x0;
        plStack_db8 = (long *)0x0;
        func_0x0eedeb80(2,0x2d,auStack_c08,&uStack_dc8,&uStack_8e8);
        if (((ulong)uStack_dc8 & 1) != 0) {
          func_0x0412a280(plStack_db8,(ulong)uStack_dc8 & 0xfffffffffffffffe);
        }
      }
      lVar20 = uStack_be0;
      if ((bStack_bc8 & 1) == 0) {
        if (uStack_be0 != 0) {
          while (lVar20 != uStack_bd8) {
            func_0x048b3e80(uStack_bd8 + -0x40);
            uStack_bd8 = uStack_bd8 + -0x40;
          }
          uStack_bd8 = lVar20;
          func_0x0412a280(uStack_be0,lStack_bd0 - uStack_be0);
        }
        plVar30 = uStack_bf8;
        plVar23 = uStack_bf0;
        if (uStack_bf8 != (long *)0x0) {
          for (; plVar30 != plVar23; plVar23 = plVar23 + -10) {
            if (((char)plVar23[-1] == '\x01') && ((*(byte *)(plVar23 + -6) & 1) != 0)) {
              func_0x0412a280(plVar23[-4],plVar23[-6] & 0xfffffffffffffffe);
            }
          }
          uStack_bf0 = plVar30;
          func_0x0412a280(uStack_bf8,(long)plStack_be8 - (long)uStack_bf8);
        }
      }
      if ((*param_2 & 1) == 0) {
        lStack_d38 = *(long *)(param_2 + 4);
        uStack_d48 = *param_2;
        uStack_d44 = param_2[1];
        uStack_d40 = param_2[2];
        uStack_d3c = param_2[3];
      }
      else {
        func_0x0412e5e0(&uStack_d48,*(undefined8 *)(param_2 + 4),*(undefined8 *)(param_2 + 2));
      }
      if ((uStack_5e8 & 1) == 0) {
        if ((uStack_d48 & 1) == 0) {
          lStack_5d8 = lStack_d38;
          uStack_5e8 = uStack_d48;
          uStack_5e4 = uStack_d44;
          uStack_5e0 = uStack_d40;
          uStack_5dc = uStack_d3c;
        }
        else {
          func_0x04885070(&uStack_5e8,lStack_d38,CONCAT44(uStack_d3c,uStack_d40));
        }
      }
      else {
        bVar36 = (uStack_d48 & 1) != 0;
        lVar20 = (long)&uStack_d48 + 1;
        if (bVar36) {
          lVar20 = lStack_d38;
        }
        uVar34 = (ulong)((byte)uStack_d48 >> 1);
        if (bVar36) {
          uVar34 = CONCAT44(uStack_d3c,uStack_d40);
        }
        func_0x04885120(&uStack_5e8,lVar20,uVar34);
      }
      if ((uStack_d48 & 1) != 0) {
        func_0x0412a280(lStack_d38,CONCAT44(uStack_d44,uStack_d48) & 0xfffffffffffffffe);
      }
      if ((*param_2 & 1) == 0) {
        plStack_d58 = *(long **)(param_2 + 4);
        auStack_d68 = (undefined1  [4])*param_2;
        uStack_d64 = param_2[1];
        uStack_d60 = param_2[2];
        uStack_d5c = param_2[3];
      }
      else {
        func_0x0412e5e0(auStack_d68,*(undefined8 *)(param_2 + 4),*(undefined8 *)(param_2 + 2));
      }
      if ((uStack_5d0 & 1) == 0) {
        if (((uint)auStack_d68 & 1) == 0) {
          plStack_5c0 = plStack_d58;
          uStack_5d0 = (uint)auStack_d68;
          uStack_5cc = uStack_d64;
          uStack_5c8 = uStack_d60;
          uStack_5c4 = uStack_d5c;
        }
        else {
          func_0x04885070(&uStack_5d0,plStack_d58,CONCAT44(uStack_d5c,uStack_d60));
        }
      }
      else {
        bVar36 = ((uint)auStack_d68 & 1) != 0;
        plVar23 = (long *)(auStack_d68 + 1);
        if (bVar36) {
          plVar23 = plStack_d58;
        }
        uVar34 = (ulong)(auStack_d68[0] >> 1);
        if (bVar36) {
          uVar34 = CONCAT44(uStack_d5c,uStack_d60);
        }
        func_0x04885120(&uStack_5d0,plVar23,uVar34);
      }
      if (((uint)auStack_d68 & 1) != 0) {
        func_0x0412a280(plStack_d58,CONCAT44(uStack_d64,auStack_d68) & 0xfffffffffffffffe);
      }
      plStack_5b8 = plStack_c10;
      bVar36 = ((ulong)auStack_d30 & 1) != 0;
      _auStack_c08 = (long *)(auStack_d30 + 1);
      if (bVar36) {
        _auStack_c08 = plStack_d20;
      }
      uStack_5b0 = 0xffffffff;
      uStack_c00 = (long *)((ulong)auStack_d30 >> 1 & 0x7f);
      if (bVar36) {
        uStack_c00 = plStack_d28;
      }
      uStack_5a0 = 5;
      plStack_588 = (long *)0x0;
      uStack_bf8 = (long *)&UNK_01423430;
      uStack_bf0 = (long *)0x9;
      func_0x048ad670(&bStack_c88,auStack_c08,2,0x2f);
      if ((DAT_0f7b8fb8 == '\0') && (iVar19 = func_0x04108328(&DAT_0f7b8fb8), iVar19 != 0)) {
        func_0x0ee5ea20(&DAT_0f7b8f98);
        func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
        func_0x0410844d(&DAT_0f7b8fb8);
      }
      uStack_8f0 = (ulong)(bStack_c88 >> 1);
      puStack_8f8 = &uStack_c87;
      if ((bStack_c88 & 1) != 0) {
        uStack_8f0 = uStack_c80;
        puStack_8f8 = puStack_c78;
      }
      cVar15 = (**(code **)(_DAT_0f7b8f98 + 0x18))(&DAT_0f7b8f98,&puStack_8f8);
      if (cVar15 == '\0') {
        bStack_dd8 = 1;
        uStack_e18 = uStack_e18 & 0xffffff00;
        plStack_e20 = (long *)0x0;
        plVar23 = (long *)0x0;
        uVar34 = 0;
        pbStack_e48 = (byte *)0x0;
        plStack_e28 = (long *)0x0;
        plStack_e38 = (long *)0x0;
      }
      else {
        if ((DAT_0f7b8fb8 == '\0') && (iVar19 = func_0x04108328(&DAT_0f7b8fb8), iVar19 != 0)) {
          func_0x0ee5ea20(&DAT_0f7b8f98);
          func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
          func_0x0410844d(&DAT_0f7b8fb8);
        }
        uStack_900 = (ulong)(bStack_c88 >> 1);
        puStack_908 = &uStack_c87;
        if ((bStack_c88 & 1) != 0) {
          uStack_900 = uStack_c80;
          puStack_908 = puStack_c78;
        }
        (**(code **)(_DAT_0f7b8f98 + 0x60))(auStack_c08,&DAT_0f7b8f98,&puStack_908);
        plVar30 = plStack_be8;
        plVar23 = uStack_bf0;
        uVar12 = _UNK_0f45a6ec;
        uVar11 = _UNK_0f45a6e8;
        uVar10 = _UNK_0f45a6e4;
        uVar9 = _UNK_0f45a6dc;
        uVar8 = _UNK_0f45a6d8;
        uVar7 = _UNK_0f45a6d4;
        uVar6 = _DAT_0f45a6d0;
        bStack_8a8 = bStack_bc8;
        if (bStack_bc8 == 0) {
          uStack_8e8 = _auStack_c08;
          uStack_8e0 = uStack_c00;
          plStack_8d8 = uStack_bf8;
          plStack_8d0 = uStack_bf0;
          plStack_8c8 = plStack_be8;
          lStack_8c0 = uStack_be0;
          lStack_8b8 = uStack_bd8;
          lStack_8b0 = lStack_bd0;
          uStack_bf8 = (long *)CONCAT44(_UNK_0f45a6e4,_DAT_0f45a6e0);
          uStack_bf0 = (long *)CONCAT44(_UNK_0f45a6ec,_UNK_0f45a6e8);
          _auStack_c08 = (long *)CONCAT44(_UNK_0f45a6d4,_DAT_0f45a6d0);
          uStack_c00 = (long *)CONCAT44(_UNK_0f45a6dc,_UNK_0f45a6d8);
          plStack_be8 = (long *)((ulong)plStack_be8 & 0xffffffffffffff00);
          bStack_bc0 = 0;
          if (plVar23 < plVar30) {
            *(undefined4 *)(plVar23 + 2) = _DAT_0f45a6e0;
            *(undefined4 *)((long)plVar23 + 0x14) = uVar10;
            *(undefined4 *)(plVar23 + 3) = uVar11;
            *(undefined4 *)((long)plVar23 + 0x1c) = uVar12;
            *(undefined4 *)plVar23 = uVar6;
            *(undefined4 *)((long)plVar23 + 4) = uVar7;
            *(undefined4 *)(plVar23 + 1) = uVar8;
            *(undefined4 *)((long)plVar23 + 0xc) = uVar9;
            *(undefined1 *)(plVar23 + 4) = 0;
            *(undefined1 *)(plVar23 + 9) = 0;
            uStack_e00 = plVar23 + 10;
          }
          else {
            uStack_e00 = (long *)func_0x0489d2c0(&plStack_8d8,auStack_c08);
            if (((bStack_bc0 & 1) != 0) && (((ulong)plStack_be8 & 1) != 0)) {
              plStack_8d0 = uStack_e00;
              func_0x0412a280(uStack_bd8,(ulong)plStack_be8 & 0xfffffffffffffffe);
              uStack_e00 = plStack_8d0;
            }
          }
          lStack_de0 = lStack_8b0;
          uStack_de8 = lStack_8b8;
          uStack_df0 = lStack_8c0;
          plStack_df8 = plStack_8c8;
          uStack_e08 = plStack_8d8;
          plStack_8d8 = (long *)0x0;
          plStack_8d0 = (long *)0x0;
          plStack_8c8 = (long *)0x0;
          lStack_8c0 = 0;
          lStack_8b8 = 0;
          lStack_8b0 = 0;
          bStack_dd8 = 0;
          uStack_e18 = (uint)uStack_8e8;
          uStack_e14 = uStack_8e8._4_4_;
          uStack_e10 = (undefined4)uStack_8e0;
          uStack_e0c = uStack_8e0._4_4_;
LAB_0d219774:
          plStack_e20 = (long *)0x0;
          plVar23 = (long *)0x0;
          uVar34 = 0;
          pbStack_e48 = (byte *)0x0;
          plStack_e28 = (long *)0x0;
          plStack_e38 = (long *)0x0;
        }
        else {
          uStack_8e8 = (long *)0x0;
          uStack_8e0 = (long *)0x0;
          plStack_8d8 = (long *)0x0;
          plVar23 = (long *)(ulong)((uint)((ulong)_auStack_c08 >> 1) & 0x7f);
          if (((ulong)_auStack_c08 & 1) != 0) {
            plVar23 = uStack_c00;
          }
          if (plVar23 == (long *)0x0) {
            bStack_dd8 = 1;
            uStack_e18 = CONCAT31(uStack_e18._1_3_,1);
            auVar5 = (undefined1  [8])_auStack_c08;
            plVar23 = uStack_bf8;
joined_r0x0d21955f:
            if (((ulong)auVar5 & 1) != 0) {
              func_0x0412a280(plVar23,(ulong)auVar5 & 0xfffffffffffffffe);
            }
            goto LAB_0d219774;
          }
          plStack_d18 = (long *)&UNK_0f534730;
          auStack_d10 = (undefined1  [8])_auStack_c08;
          plStack_d08 = uStack_c00;
          plStack_d00 = uStack_bf8;
          plStack_cf8 = (long *)(auStack_d10 + 1);
          if (((ulong)_auStack_c08 & 1) != 0) {
            plStack_cf8 = uStack_bf8;
          }
          plStack_ce8 = (long *)0x0;
          uStack_ce0 = 0;
          plStack_cf0 = plVar23;
          func_0x0ee0afd0(auStack_c08,&plStack_d18,0xffffffffffffffff);
          plVar29 = plStack_be8;
          plVar30 = uStack_bf0;
          plVar23 = uStack_bf8;
          uVar12 = _UNK_0f45a70c;
          uVar11 = _UNK_0f45a708;
          uVar10 = _UNK_0f45a704;
          uVar9 = _UNK_0f45a6fc;
          uVar8 = _UNK_0f45a6f8;
          uVar7 = _UNK_0f45a6f4;
          uVar6 = _DAT_0f45a6f0;
          bStack_d88 = bStack_bc8;
          if (bStack_bc8 == 0) {
            uStack_dc8 = _auStack_c08;
            uStack_dc0 = uStack_c00;
            plStack_db8 = uStack_bf8;
            plStack_db0 = uStack_bf0;
            plStack_da8 = plStack_be8;
            lStack_da0 = uStack_be0;
            lStack_d98 = uStack_bd8;
            lStack_d90 = lStack_bd0;
            uStack_bf8 = (long *)CONCAT44(_UNK_0f45a704,_DAT_0f45a700);
            uStack_bf0 = (long *)CONCAT44(_UNK_0f45a70c,_UNK_0f45a708);
            _auStack_c08 = (long *)CONCAT44(_UNK_0f45a6f4,_DAT_0f45a6f0);
            uStack_c00 = (long *)CONCAT44(_UNK_0f45a6fc,_UNK_0f45a6f8);
            plStack_be8 = (long *)((ulong)plStack_be8 & 0xffffffffffffff00);
            bStack_bc0 = 0;
            if (plVar30 < plVar29) {
              *(undefined4 *)(plVar30 + 2) = _DAT_0f45a700;
              *(undefined4 *)((long)plVar30 + 0x14) = uVar10;
              *(undefined4 *)(plVar30 + 3) = uVar11;
              *(undefined4 *)((long)plVar30 + 0x1c) = uVar12;
              *(undefined4 *)plVar30 = uVar6;
              *(undefined4 *)((long)plVar30 + 4) = uVar7;
              *(undefined4 *)(plVar30 + 1) = uVar8;
              *(undefined4 *)((long)plVar30 + 0xc) = uVar9;
              *(undefined1 *)(plVar30 + 4) = 0;
              *(undefined1 *)(plVar30 + 9) = 0;
              uStack_e00 = plVar30 + 10;
            }
            else {
              plStack_db0 = (long *)func_0x0489d2c0(&plStack_db8,auStack_c08);
              uStack_e00 = plStack_db0;
              if (((bStack_bc0 & 1) != 0) && (((ulong)plStack_be8 & 1) != 0)) {
                func_0x0412a280(uStack_bd8,(ulong)plStack_be8 & 0xfffffffffffffffe);
                uStack_e00 = plStack_db0;
              }
            }
            lStack_de0 = lStack_d90;
            uStack_de8 = lStack_d98;
            uStack_df0 = lStack_da0;
            plStack_df8 = plStack_da8;
            uStack_e08 = plStack_db8;
            plStack_db8 = (long *)0x0;
            plStack_db0 = (long *)0x0;
            plStack_da8 = (long *)0x0;
            lStack_da0 = 0;
            lStack_d98 = 0;
            lStack_d90 = 0;
            bStack_dd8 = 0;
            plStack_d18 = (long *)&UNK_0f534730;
            uStack_e18 = (uint)uStack_dc8;
            uStack_e14 = uStack_dc8._4_4_;
            uStack_e10 = (undefined4)uStack_dc0;
            uStack_e0c = uStack_dc0._4_4_;
            auVar5 = auStack_d10;
            plVar23 = plStack_d00;
            goto joined_r0x0d21955f;
          }
          plStack_db8 = uStack_bf8;
          pbStack_e48 = (byte *)_auStack_c08;
          plStack_e20 = uStack_c00;
          uVar34 = (ulong)_auStack_c08 >> 8;
          uStack_dc8 = (long *)((ulong)_auStack_c08 & 0xffffffffffff0000);
          uStack_dc0 = plStack_e20;
          func_0x0ee094d0(auStack_c08,&plStack_d18);
          plVar29 = plStack_be8;
          plVar30 = uStack_bf0;
          uVar12 = _UNK_0f45a72c;
          uVar11 = _UNK_0f45a728;
          uVar10 = _UNK_0f45a724;
          uVar9 = _UNK_0f45a71c;
          uVar8 = _UNK_0f45a718;
          uVar7 = _UNK_0f45a714;
          uVar6 = _DAT_0f45a710;
          bStack_c98 = bStack_bc8;
          if (bStack_bc8 == 0) {
            uStack_cd8 = _auStack_c08;
            uStack_cd0 = uStack_c00;
            plStack_cc8 = uStack_bf8;
            plStack_cc0 = uStack_bf0;
            plStack_cb8 = plStack_be8;
            lStack_cb0 = uStack_be0;
            lStack_ca8 = uStack_bd8;
            lStack_ca0 = lStack_bd0;
            uStack_bf8 = (long *)CONCAT44(_UNK_0f45a724,_DAT_0f45a720);
            uStack_bf0 = (long *)CONCAT44(_UNK_0f45a72c,_UNK_0f45a728);
            _auStack_c08 = (long *)CONCAT44(_UNK_0f45a714,_DAT_0f45a710);
            uStack_c00 = (long *)CONCAT44(_UNK_0f45a71c,_UNK_0f45a718);
            plStack_be8 = (long *)((ulong)plStack_be8 & 0xffffffffffffff00);
            bStack_bc0 = 0;
            if (plVar30 < plVar29) {
              *(undefined4 *)(plVar30 + 2) = _DAT_0f45a720;
              *(undefined4 *)((long)plVar30 + 0x14) = uVar10;
              *(undefined4 *)(plVar30 + 3) = uVar11;
              *(undefined4 *)((long)plVar30 + 0x1c) = uVar12;
              *(undefined4 *)plVar30 = uVar6;
              *(undefined4 *)((long)plVar30 + 4) = uVar7;
              *(undefined4 *)(plVar30 + 1) = uVar8;
              *(undefined4 *)((long)plVar30 + 0xc) = uVar9;
              *(undefined1 *)(plVar30 + 4) = 0;
              *(undefined1 *)(plVar30 + 9) = 0;
              uStack_e00 = plVar30 + 10;
            }
            else {
              plStack_cc0 = (long *)func_0x0489d2c0(&plStack_cc8,auStack_c08);
              uStack_e00 = plStack_cc0;
              if (((bStack_bc0 & 1) != 0) && (((ulong)plStack_be8 & 1) != 0)) {
                func_0x0412a280(uStack_bd8,(ulong)plStack_be8 & 0xfffffffffffffffe);
                uStack_e00 = plStack_cc0;
              }
            }
            lStack_de0 = lStack_ca0;
            uStack_de8 = lStack_ca8;
            uStack_df0 = lStack_cb0;
            plStack_df8 = plStack_cb8;
            uStack_e08 = plStack_cc8;
            plStack_cc8 = (long *)0x0;
            plStack_cc0 = (long *)0x0;
            plStack_cb8 = (long *)0x0;
            lStack_cb0 = 0;
            lStack_ca8 = 0;
            lStack_ca0 = 0;
            bStack_dd8 = 0;
            uStack_e18 = (uint)uStack_cd8;
            uStack_e14 = uStack_cd8._4_4_;
            uStack_e10 = (undefined4)uStack_cd0;
            uStack_e0c = uStack_cd0._4_4_;
            plStack_e28 = (long *)0x0;
LAB_0d21a46a:
            plStack_e38 = (long *)0x0;
LAB_0d21a473:
            lVar20 = lStack_cb0;
            if (bStack_c98 == 0) {
              lVar24 = lStack_ca8;
              if (lStack_cb0 != 0) {
                while (lVar20 != lVar24) {
                  func_0x048b3e80(lVar24 + -0x40);
                  lVar24 = lVar24 + -0x40;
                }
                lStack_ca8 = lVar20;
                func_0x0412a280(lStack_cb0,lStack_ca0 - lStack_cb0);
              }
              plVar29 = plStack_cc8;
              plVar30 = plStack_cc0;
              if (plStack_cc8 != (long *)0x0) {
                for (; plVar29 != plVar30; plVar30 = plVar30 + -10) {
                  if (((char)plVar30[-1] == '\x01') && ((*(byte *)(plVar30 + -6) & 1) != 0)) {
                    func_0x0412a280(plVar30[-4],plVar30[-6] & 0xfffffffffffffffe);
                  }
                }
                plStack_cc0 = plVar29;
                func_0x0412a280(plStack_cc8,(long)plStack_cb8 - (long)plStack_cc8);
              }
            }
            lVar20 = lStack_da0;
            if (bStack_d88 == 1) {
              if (((ulong)uStack_dc8 & 1) != 0) {
                uVar33 = (ulong)uStack_dc8 & 0xfffffffffffffffe;
LAB_0d21a62b:
                func_0x0412a280(plStack_db8,uVar33);
              }
            }
            else {
              if (lStack_da0 != 0) {
                while (lVar20 != lStack_d98) {
                  func_0x048b3e80(lStack_d98 + -0x40);
                  lStack_d98 = lStack_d98 + -0x40;
                }
                lStack_d98 = lVar20;
                func_0x0412a280(lStack_da0,lStack_d90 - lStack_da0);
              }
              plVar29 = plStack_db8;
              plVar30 = plStack_db0;
              if (plStack_db8 != (long *)0x0) {
                for (; plVar29 != plVar30; plVar30 = plVar30 + -10) {
                  if (((char)plVar30[-1] == '\x01') && ((*(byte *)(plVar30 + -6) & 1) != 0)) {
                    func_0x0412a280(plVar30[-4],plVar30[-6] & 0xfffffffffffffffe);
                  }
                }
                plStack_db0 = plVar29;
                uVar33 = (long)plStack_da8 - (long)plStack_db8;
                goto LAB_0d21a62b;
              }
            }
            plStack_d18 = (long *)&UNK_0f534730;
            if (((ulong)auStack_d10 & 1) != 0) {
              func_0x0412a280(plStack_d00,(ulong)auStack_d10 & 0xfffffffffffffffe);
            }
          }
          else {
            plStack_e28 = _auStack_c08;
            uStack_cd8 = _auStack_c08;
            if (plStack_cf0 != plStack_ce8) {
              func_0x0ee075b0(&uStack_c68,&plStack_d18);
              bVar1 = bStack_c28;
              bStack_bc8 = bStack_c28;
              if (bStack_c28 == 0) {
                _auStack_c08 = uStack_c68;
                uStack_c00 = uStack_c60;
                uStack_bf8._0_4_ = SUB84(uStack_c58,0);
                uStack_bf8._4_4_ = uStack_c58._4_4_;
                uStack_bf0._0_4_ = (undefined4)uStack_c50;
                uStack_bf0._4_4_ = uStack_c50._4_4_;
                plStack_be8 = plStack_c48;
                uStack_be0._0_4_ = (undefined4)uStack_c40;
                uStack_be0._4_4_ = uStack_c40._4_4_;
                uStack_bd8._0_4_ = (undefined4)uStack_c38;
                uStack_bd8._4_4_ = uStack_c38._4_4_;
                lStack_bd0 = lStack_c30;
                func_0x0d222cf0(auStack_c08);
                lStack_de0 = lStack_bd0;
                uVar14 = uStack_bd8._4_4_;
                uVar12 = (undefined4)uStack_bd8;
                uVar11 = uStack_be0._4_4_;
                uVar10 = (undefined4)uStack_be0;
                plStack_df8 = plStack_be8;
                uVar9 = uStack_bf0._4_4_;
                uVar8 = (undefined4)uStack_bf0;
                uVar7 = uStack_bf8._4_4_;
                uVar6 = (undefined4)uStack_bf8;
                plStack_628 = _auStack_c08;
                plStack_620 = uStack_c00;
                uStack_bf8 = (long *)0x0;
                uStack_bf0 = (long *)0x0;
                plStack_be8 = (long *)0x0;
                uStack_be0 = 0;
                uStack_bd8 = 0;
                lStack_bd0 = 0;
                uStack_5f8 = 0;
                uStack_5f0 = 0;
                uStack_608 = 0;
                uStack_600 = 0;
                uStack_618 = 0;
                uStack_610 = 0;
                bStack_dd8 = 0;
                uStack_e18 = (uint)auStack_c08;
                uStack_e14 = uStack_c04;
                uStack_e10 = (uint)uStack_c00;
                uStack_e0c = uStack_c00._4_4_;
                uStack_e08 = (long *)CONCAT44(uVar7,uVar6);
                uStack_e00 = (long *)CONCAT44(uVar9,uVar8);
                uStack_df0 = CONCAT44(uVar11,uVar10);
                uStack_de8 = CONCAT44(uVar14,uVar12);
                func_0x048e6d60(&plStack_628);
              }
              else {
                _auStack_c08 = (long *)CONCAT71(stack0xfffffffffffff3f9,(undefined1)uStack_c68);
              }
              lVar20 = uStack_be0;
              if ((bStack_bc8 & 1) == 0) {
                uStack_c90 = uVar34;
                lVar24 = uStack_bd8;
                if (uStack_be0 != 0) {
                  while (lVar20 != lVar24) {
                    func_0x048b3e80(lVar24 + -0x40);
                    lVar24 = lVar24 + -0x40;
                  }
                  uStack_bd8 = lVar20;
                  func_0x0412a280(uStack_be0,lStack_bd0 - uStack_be0);
                }
                plVar29 = uStack_bf8;
                uVar34 = uStack_c90;
                plVar30 = uStack_bf0;
                if (uStack_bf8 != (long *)0x0) {
                  for (; plVar29 != plVar30; plVar30 = plVar30 + -10) {
                    if (((char)plVar30[-1] == '\x01') && ((*(byte *)(plVar30 + -6) & 1) != 0)) {
                      func_0x0412a280(plVar30[-4],plVar30[-6] & 0xfffffffffffffffe);
                    }
                  }
                  uStack_bf0 = plVar29;
                  func_0x0412a280(uStack_bf8,(long)plStack_be8 - (long)uStack_bf8);
                  uVar34 = uStack_c90;
                }
              }
              if (bVar1 == 0) goto LAB_0d21a46a;
              if (plStack_cf0 == plStack_ce8) goto LAB_0d21934c;
              func_0x0ee094d0(&uStack_c68,&plStack_d18);
              bStack_bc8 = bStack_c28;
              uStack_c90 = uVar34;
              if (bStack_c28 == 0) {
                _auStack_c08 = uStack_c68;
                uStack_c00 = uStack_c60;
                uStack_bf8._0_4_ = SUB84(uStack_c58,0);
                uStack_bf8._4_4_ = uStack_c58._4_4_;
                uStack_bf0._0_4_ = (undefined4)uStack_c50;
                uStack_bf0._4_4_ = uStack_c50._4_4_;
                plStack_be8 = plStack_c48;
                uStack_be0._0_4_ = (undefined4)uStack_c40;
                uStack_be0._4_4_ = uStack_c40._4_4_;
                uStack_bd8._0_4_ = (undefined4)uStack_c38;
                uStack_bd8._4_4_ = uStack_c38._4_4_;
                lStack_bd0 = lStack_c30;
                func_0x0d222db0(auStack_c08);
                lStack_de0 = lStack_bd0;
                uVar14 = uStack_bd8._4_4_;
                uVar12 = (undefined4)uStack_bd8;
                uVar11 = uStack_be0._4_4_;
                uVar10 = (undefined4)uStack_be0;
                plStack_df8 = plStack_be8;
                uVar9 = uStack_bf0._4_4_;
                uVar8 = (undefined4)uStack_bf0;
                uVar7 = uStack_bf8._4_4_;
                uVar6 = (undefined4)uStack_bf8;
                uStack_c68 = _auStack_c08;
                uStack_c60 = uStack_c00;
                uStack_bf8 = (long *)0x0;
                uStack_bf0 = (long *)0x0;
                plStack_be8 = (long *)0x0;
                uStack_be0 = 0;
                uStack_bd8 = 0;
                lStack_bd0 = 0;
                uStack_c38 = 0;
                lStack_c30 = 0;
                plStack_c48 = (long *)0x0;
                uStack_c40 = 0;
                uStack_c58 = (long *)0x0;
                uStack_c50 = 0;
                bStack_dd8 = 0;
                uStack_e18 = (uint)auStack_c08;
                uStack_e14 = uStack_c04;
                uStack_e10 = (uint)uStack_c00;
                uStack_e0c = uStack_c00._4_4_;
                uStack_e08 = (long *)CONCAT44(uVar7,uVar6);
                uStack_e00 = (long *)CONCAT44(uVar9,uVar8);
                uStack_df0 = CONCAT44(uVar11,uVar10);
                uStack_de8 = CONCAT44(uVar14,uVar12);
                func_0x048e6d60(&uStack_c68);
                plStack_e38 = (long *)0x0;
              }
              else {
                plStack_e38 = uStack_c68;
                _auStack_c08 = uStack_c68;
              }
              lVar20 = uStack_be0;
              if ((bStack_bc8 & 1) == 0) {
                lVar24 = uStack_bd8;
                if (uStack_be0 != 0) {
                  while (lVar20 != lVar24) {
                    func_0x048b3e80(lVar24 + -0x40);
                    lVar24 = lVar24 + -0x40;
                  }
                  uStack_bd8 = lVar20;
                  func_0x0412a280(uStack_be0,lStack_bd0 - uStack_be0);
                }
                plVar29 = uStack_bf8;
                plVar30 = uStack_bf0;
                if (uStack_bf8 != (long *)0x0) {
                  for (; plVar29 != plVar30; plVar30 = plVar30 + -10) {
                    if (((char)plVar30[-1] == '\x01') && ((*(byte *)(plVar30 + -6) & 1) != 0)) {
                      func_0x0412a280(plVar30[-4],plVar30[-6] & 0xfffffffffffffffe);
                    }
                  }
                  uStack_bf0 = plVar29;
                  func_0x0412a280(uStack_bf8,(long)plStack_be8 - (long)uStack_bf8);
                }
              }
              uVar34 = uStack_c90;
              if (bStack_c28 != 0) goto LAB_0d219355;
              goto LAB_0d21a473;
            }
LAB_0d21934c:
            plStack_e38 = (long *)0x0;
LAB_0d219355:
            lVar20 = lStack_cb0;
            if (bStack_c98 == 0) {
              if (lStack_cb0 != 0) {
                while (lVar20 != lStack_ca8) {
                  func_0x048b3e80(lStack_ca8 + -0x40);
                  lStack_ca8 = lStack_ca8 + -0x40;
                }
                lStack_ca8 = lVar20;
                func_0x0412a280(lStack_cb0,lStack_ca0 - lStack_cb0);
              }
              plVar29 = plStack_cc8;
              plVar30 = plStack_cc0;
              if (plStack_cc8 != (long *)0x0) {
                for (; plVar29 != plVar30; plVar30 = plVar30 + -10) {
                  if (((char)plVar30[-1] == '\x01') && ((*(byte *)(plVar30 + -6) & 1) != 0)) {
                    func_0x0412a280(plVar30[-4],plVar30[-6] & 0xfffffffffffffffe);
                  }
                }
                plStack_cc0 = plVar29;
                func_0x0412a280(plStack_cc8,(long)plStack_cb8 - (long)plStack_cc8);
              }
            }
            lVar20 = lStack_da0;
            if (bStack_d88 == 1) {
              if (((ulong)uStack_dc8 & 1) != 0) {
                uVar33 = (ulong)uStack_dc8 & 0xfffffffffffffffe;
LAB_0d21a9b5:
                func_0x0412a280(plStack_db8,uVar33);
              }
            }
            else {
              if (lStack_da0 != 0) {
                while (lVar20 != lStack_d98) {
                  func_0x048b3e80(lStack_d98 + -0x40);
                  lStack_d98 = lStack_d98 + -0x40;
                }
                lStack_d98 = lVar20;
                func_0x0412a280(lStack_da0,lStack_d90 - lStack_da0);
              }
              plVar29 = plStack_db8;
              plVar30 = plStack_db0;
              if (plStack_db8 != (long *)0x0) {
                for (; plVar29 != plVar30; plVar30 = plVar30 + -10) {
                  if (((char)plVar30[-1] == '\x01') && ((*(byte *)(plVar30 + -6) & 1) != 0)) {
                    func_0x0412a280(plVar30[-4],plVar30[-6] & 0xfffffffffffffffe);
                  }
                }
                plStack_db0 = plVar29;
                uVar33 = (long)plStack_da8 - (long)plStack_db8;
                goto LAB_0d21a9b5;
              }
            }
            plStack_d18 = (long *)&UNK_0f534730;
            if (((ulong)auStack_d10 & 1) != 0) {
              func_0x0412a280(plStack_d00,(ulong)auStack_d10 & 0xfffffffffffffffe);
            }
            bStack_dd8 = 1;
            uStack_e18 = CONCAT31(uStack_e18._1_3_,1);
          }
        }
        lVar20 = lStack_8c0;
        if (bStack_8a8 == 1) {
          if (((ulong)uStack_8e8 & 1) != 0) {
            uVar33 = (ulong)uStack_8e8 & 0xfffffffffffffffe;
LAB_0d219885:
            func_0x0412a280(plStack_8d8,uVar33);
          }
        }
        else {
          lVar24 = lStack_8b8;
          if (lStack_8c0 != 0) {
            while (lVar20 != lVar24) {
              func_0x048b3e80(lVar24 + -0x40);
              lVar24 = lVar24 + -0x40;
            }
            lStack_8b8 = lVar20;
            func_0x0412a280(lStack_8c0,lStack_8b0 - lStack_8c0);
          }
          plVar29 = plStack_8d8;
          plVar30 = plStack_8d0;
          if (plStack_8d8 != (long *)0x0) {
            for (; plVar29 != plVar30; plVar30 = plVar30 + -10) {
              if (((char)plVar30[-1] == '\x01') && ((*(byte *)(plVar30 + -6) & 1) != 0)) {
                func_0x0412a280(plVar30[-4],plVar30[-6] & 0xfffffffffffffffe);
              }
            }
            plStack_8d0 = plVar29;
            uVar33 = (long)plStack_8c8 - (long)plStack_8d8;
            goto LAB_0d219885;
          }
        }
      }
      if ((bStack_c88 & 1) != 0) {
        func_0x0412a280(puStack_c78,CONCAT71(uStack_c87,bStack_c88) & 0xfffffffffffffffe);
      }
      _auStack_c08 = (long *)0x8d213925abf529f1;
      uStack_c00 = (long *)&UNK_0140f690;
      uStack_bf8 = (long *)0x1;
      uStack_bf0 = (long *)CONCAT44(uStack_bf0._4_4_,0x1d9);
      if (bStack_dd8 == 0) {
        uStack_8e8 = (long *)0x0;
        uStack_8e0 = (long *)0x0;
        plStack_8d8 = (long *)0x0;
        func_0x0eedeb80(2,0x2d,&uStack_e18,&uStack_8e8,auStack_c08);
        if (((ulong)uStack_8e8 & 1) != 0) {
          func_0x0412a280(plStack_8d8,(ulong)uStack_8e8 & 0xfffffffffffffffe);
        }
      }
      bVar13 = bStack_dd8;
      lVar20 = uStack_df0;
      bVar1 = (byte)uStack_e18;
      if ((bStack_dd8 & 1) == 0) {
        lVar24 = uStack_de8;
        if (uStack_df0 != 0) {
          while (lVar20 != lVar24) {
            func_0x048b3e80(lVar24 + -0x40);
            lVar24 = lVar24 + -0x40;
          }
          uStack_de8 = lVar20;
          func_0x0412a280(uStack_df0,lStack_de0 - uStack_df0);
        }
        plVar29 = uStack_e08;
        plVar30 = uStack_e00;
        if (uStack_e08 != (long *)0x0) {
          for (; plVar29 != plVar30; plVar30 = plVar30 + -10) {
            if (((char)plVar30[-1] == '\x01') && ((*(byte *)(plVar30 + -6) & 1) != 0)) {
              func_0x0412a280(plVar30[-4],plVar30[-6] & 0xfffffffffffffffe);
            }
          }
          uStack_e00 = plVar29;
          func_0x0412a280(uStack_e08,(long)plStack_df8 - (long)uStack_e08);
        }
      }
      if ((bVar13 & bVar1 & 1) != 0) {
        if (((ulong)pbStack_e48 & 1) == 0) {
          _auStack_c08 = (long *)((ulong)pbStack_e48 & 0xff | uVar34 << 8);
          uStack_c00 = plStack_e20;
          uVar33 = (ulong)pbStack_e48 & 0xffffffff;
          uVar18 = (uint)pbStack_e48;
          uStack_bf8 = plVar23;
          if ((uStack_5d0 & 1) != 0) goto LAB_0d219abd;
LAB_0d219a6d:
          if ((uVar33 & 1) == 0) {
            plStack_5c0 = uStack_bf8;
            uStack_5d0 = (uint)auStack_c08;
            uStack_5cc = uStack_c04;
            uStack_5c8 = (uint)uStack_c00;
            uStack_5c4 = uStack_c00._4_4_;
          }
          else {
            func_0x04885070(&uStack_5d0,uStack_bf8,uStack_c00);
          }
        }
        else {
          func_0x0412e5e0(auStack_c08,plVar23,plStack_e20);
          uVar33 = (ulong)_auStack_c08 & 0xff;
          uVar18 = (uint)auStack_c08[0];
          if ((uStack_5d0 & 1) == 0) goto LAB_0d219a6d;
LAB_0d219abd:
          bVar27 = (byte)uVar18 >> 1;
          bVar36 = (uVar18 & 1) != 0;
          plVar30 = (long *)(auStack_c08 + 1);
          if (bVar36) {
            plVar30 = uStack_bf8;
          }
          plVar29 = (long *)(ulong)bVar27;
          if (bVar36) {
            plVar29 = uStack_c00;
          }
          func_0x04885120(&uStack_5d0,plVar30,plVar29,CONCAT31((int3)(uVar18 >> 8),bVar27));
        }
        if (((ulong)_auStack_c08 & 1) != 0) {
          func_0x0412a280(uStack_bf8,(ulong)_auStack_c08 & 0xfffffffffffffffe);
        }
        plStack_588 = plStack_e28;
        plStack_5b8 = plStack_e38;
      }
      if (((ulong)pbStack_e48 & 1) != 0) {
        uVar34 = uVar34 << 8;
        func_0x0412a280(plVar23,(byte)pbStack_e48 & 0xfe | uVar34);
      }
      if (((ulong)auStack_d30 & 1) != 0) {
        func_0x0412a280(plStack_d20,(ulong)auStack_d30 & 0xfffffffffffffffe);
      }
      if (((ulong)plStack_d70 & 1) != 0) {
        func_0x0412a280(plStack_c20,(ulong)plStack_d70 & 0xfffffffffffffffe);
      }
      if ((bVar13 & bVar1 & 1) != 0) {
        pbStack_e48 = (byte *)((long)param_2 + 1);
        bVar36 = ((byte)*param_2 & 1) == 0;
        pbVar32 = *(byte **)(param_2 + 4);
        if (bVar36) {
          pbVar32 = pbStack_e48;
        }
        uVar33 = (ulong)(byte)((byte)*param_2 >> 1);
        if (!bVar36) {
          uVar33 = *(ulong *)(param_2 + 2);
        }
        uVar22 = func_0x04883620(auStack_c08,pbVar32,uVar33);
        uVar33 = *(ulong *)(param_1 + 0x60);
        if (uVar33 != 0) {
          uVar34 = uVar33 - (uVar33 >> 1 & 0x5555555555555555);
          uVar34 = (uVar34 >> 2 & 0x3333333333333333) + (uVar34 & 0x3333333333333333);
          uVar28 = ((uVar34 >> 4) + uVar34 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
          if (uVar28 >> 0x38 < 2) {
            uVar34 = uVar33 - 1 & uVar22;
          }
          else {
            uVar34 = uVar22;
            if (uVar33 <= uVar22) {
              if ((uVar22 | uVar33) >> 0x20 == 0) {
                uVar34 = (uVar22 & 0xffffffff) % (uVar33 & 0xffffffff);
              }
              else {
                uVar34 = uVar22 % uVar33;
              }
            }
          }
          puVar21 = *(undefined8 **)(*plStack_d78 + uVar34 * 8);
          if ((puVar21 != (undefined8 *)0x0) && (plVar23 = (long *)*puVar21, plVar23 != (long *)0x0)
             ) {
            if (((byte)*param_2 & 1) == 0) {
              uVar25 = (ulong)(byte)((byte)*param_2 >> 1);
            }
            else {
              uVar25 = *(ulong *)(param_2 + 2);
              pbStack_e48 = *(byte **)(param_2 + 4);
            }
            if ((byte)(uVar28 >> 0x38) < 2) {
              plVar30 = (long *)(uVar33 - 1);
              plStack_d70 = plVar30;
              do {
                if (plVar23[1] == uVar22) {
                  bVar1 = *(byte *)(plVar23 + 2);
                  if ((bVar1 & 1) == 0) {
                    uVar28 = (ulong)(bVar1 >> 1);
                  }
                  else {
                    uVar28 = plVar23[3];
                  }
                  if (uVar28 == uVar25) {
                    if ((bVar1 & 1) == 0) {
                      lVar20 = (long)plVar23 + 0x11;
                    }
                    else {
                      lVar20 = plVar23[4];
                    }
                    iVar19 = func_0x0eee3000(lVar20,pbStack_e48,uVar25);
                    plVar30 = plStack_d70;
                    if (iVar19 == 0) goto LAB_0d21a2ae;
                  }
                }
                else if ((plVar23[1] & (ulong)plVar30) != uVar34) break;
                plVar23 = (long *)*plVar23;
              } while (plVar23 != (long *)0x0);
            }
            else {
              do {
                uVar28 = plVar23[1];
                if (uVar28 == uVar22) {
                  bVar1 = *(byte *)(plVar23 + 2);
                  if ((bVar1 & 1) == 0) {
                    uVar28 = (ulong)(bVar1 >> 1);
                  }
                  else {
                    uVar28 = plVar23[3];
                  }
                  if (uVar28 == uVar25) {
                    if ((bVar1 & 1) == 0) {
                      lVar20 = (long)plVar23 + 0x11;
                    }
                    else {
                      lVar20 = plVar23[4];
                    }
                    iVar19 = func_0x0eee3000(lVar20,pbStack_e48,uVar25);
                    if (iVar19 == 0) goto LAB_0d21a2ae;
                  }
                }
                else {
                  if (uVar33 <= uVar28) {
                    if ((uVar28 | uVar33) >> 0x20 == 0) {
                      uVar28 = (uVar28 & 0xffffffff) % (uVar33 & 0xffffffff);
                    }
                    else {
                      uVar28 = uVar28 % uVar33;
                    }
                  }
                  if (uVar28 != uVar34) break;
                }
                plVar23 = (long *)*plVar23;
              } while (plVar23 != (long *)0x0);
            }
          }
        }
        plVar23 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x2e0);
        if (plVar23 == (long *)0x0) {
          func_0x0eec74c0(0x2e0,0);
        }
        uStack_c00 = plStack_d78;
        uStack_bf8 = (long *)0x0;
        *plVar23 = 0;
        plVar23[1] = uVar22;
        _auStack_c08 = plVar23;
        if ((*param_2 & 1) == 0) {
          plVar23[4] = *(long *)(param_2 + 4);
          uVar18 = param_2[1];
          uVar3 = param_2[2];
          uVar4 = param_2[3];
          *(uint *)(plVar23 + 2) = *param_2;
          *(uint *)((long)plVar23 + 0x14) = uVar18;
          *(uint *)(plVar23 + 3) = uVar3;
          *(uint *)((long)plVar23 + 0x1c) = uVar4;
        }
        else {
          func_0x0412e5e0(plVar23 + 2,*(undefined8 *)(param_2 + 4),*(undefined8 *)(param_2 + 2));
        }
        func_0x0d1d03b0(plVar23 + 5);
        uStack_bf8 = (long *)CONCAT71(uStack_bf8._1_7_,1);
        fVar37 = (float)(*(long *)(param_1 + 0x70) + 1);
        if ((long)uVar33 < 0) {
          fVar39 = (float)uVar33;
          fVar38 = *(float *)(param_1 + 0x78);
          if (uVar33 != 0) goto LAB_0d219f88;
LAB_0d219f95:
          uVar34 = 1;
          if (2 < uVar33) {
            uVar34 = (ulong)((uVar33 & uVar33 - 1) != 0);
          }
          uVar34 = uVar34 | uVar33 * 2;
          fVar37 = (float)func_0x0eee3ab0(fVar37 / fVar38);
          plVar30 = plStack_d78;
          uVar33 = (long)(fVar37 - _DAT_01198778) & (long)fVar37 >> 0x3f | (long)fVar37;
          if (uVar33 < uVar34) {
            uVar33 = uVar34;
          }
          uVar34 = 2;
          if ((uVar33 != 1) && (uVar34 = uVar33, (uVar33 & uVar33 - 1) != 0)) {
            uVar34 = func_0x0412c3f0();
          }
          uVar33 = *(ulong *)(param_1 + 0x60);
          uVar28 = uVar34;
          if (uVar33 < uVar34) {
LAB_0d21a022:
            if (uVar28 >> 0x3d != 0) {
              uVar26 = FUN_04882eb0();
              func_0x041084d6(&DAT_0f7b8fb8);
              if ((bStack_c88 & 1) != 0) {
                func_0x0412a280(puStack_c78,CONCAT71(uStack_c87,bStack_c88) & 0xfffffffffffffffe);
              }
              if (((ulong)auStack_d30 & 1) != 0) {
                func_0x0412a280(plStack_d20,(ulong)auStack_d30 & 0xfffffffffffffffe);
              }
              if (((ulong)plStack_d70 & 1) != 0) {
                func_0x0412a280(plStack_c20,(ulong)plStack_d70 & 0xfffffffffffffffe);
              }
              func_0x05fe8150(&uStack_5e8);
              func_0x0412d790(lStack_c18);
              uVar26 = func_0x0eee2d70(uVar26);
              while( true ) {
                func_0x0d2161f0(auStack_c08);
                func_0x0d20be50(&uStack_5e8);
                if (((ulong)uStack_cd8 & 1) != 0) break;
                func_0x0412d790(lStack_c18);
                func_0x0eee2d70(uVar26);
                func_0x0412a280(plStack_d08,(ulong)plStack_d18 & 0xfffffffffffffffe);
                if ((uVar34 & 1) != 0) {
                  uVar34 = uVar34 & 0xfffffffffffffffe;
                  func_0x0412a280(0,uVar34);
                }
                if (((ulong)uStack_c68 & 1) != 0) {
                  func_0x0412a280(uStack_c58,(ulong)uStack_c68 & 0xfffffffffffffffe);
                }
                if ((uStack_e18 & 1) != 0) {
                  func_0x0412a280(uStack_e08,CONCAT44(uStack_e14,uStack_e18) & 0xfffffffffffffffe);
                }
              }
              func_0x0412a280(plStack_cc8,(ulong)uStack_cd8 & 0xfffffffffffffffe);
              func_0x0412d790(lStack_c18);
              func_0x0eee2d70(uVar26);
              pcVar2 = (code *)swi(3);
              uVar26 = (*pcVar2)();
              return uVar26;
            }
            lVar20 = uVar28 * 8;
            lVar24 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar20);
            if (lVar24 == 0) {
              func_0x0eec74c0(lVar20,0);
            }
            lVar31 = *plVar30;
            *plVar30 = lVar24;
            if (lVar31 != 0) {
              func_0x0412a280(lVar31,*(long *)(param_1 + 0x60) << 3);
              lVar24 = *(long *)(param_1 + 0x58);
            }
            *(ulong *)(param_1 + 0x60) = uVar28;
            func_0x0eee2dd0(lVar24,0,lVar20);
            plVar30 = *(long **)(param_1 + 0x68);
            if (plVar30 != (long *)0x0) {
              uVar33 = plVar30[1];
              uVar34 = uVar28 - 1;
              if ((uVar28 & uVar34) == 0) {
                *(long *)(lVar24 + (uVar33 & uVar34) * 8) = param_1 + 0x68;
                uVar33 = uVar33 & uVar34;
                while (plVar29 = plVar30, plVar30 = (long *)*plVar29, plVar30 != (long *)0x0) {
                  uVar28 = plVar30[1] & uVar34;
                  if (uVar28 != uVar33) {
                    if (*(long *)(lVar24 + uVar28 * 8) == 0) {
                      *(long **)(lVar24 + uVar28 * 8) = plVar29;
                      uVar33 = uVar28;
                    }
                    else {
                      *plVar29 = *plVar30;
                      *plVar30 = **(undefined8 **)(lVar24 + uVar28 * 8);
                      **(long **)(lVar24 + uVar28 * 8) = (long)plVar30;
                      plVar30 = plVar29;
                    }
                  }
                }
              }
              else {
                if (uVar28 <= uVar33) {
                  if ((uVar33 | uVar28) >> 0x20 == 0) {
                    uVar33 = (uVar33 & 0xffffffff) % (uVar28 & 0xffffffff);
                  }
                  else {
                    uVar33 = uVar33 % uVar28;
                  }
                }
                *(long *)(lVar24 + uVar33 * 8) = param_1 + 0x68;
                plVar29 = (long *)*plVar30;
                while (plVar29 != (long *)0x0) {
                  uVar34 = plVar29[1];
                  if (uVar28 <= uVar34) {
                    if ((uVar34 | uVar28) >> 0x20 == 0) {
                      uVar34 = (uVar34 & 0xffffffff) % (uVar28 & 0xffffffff);
                    }
                    else {
                      uVar34 = uVar34 % uVar28;
                    }
                  }
                  if (uVar34 != uVar33) {
                    if (*(long *)(lVar24 + uVar34 * 8) == 0) {
                      *(long **)(lVar24 + uVar34 * 8) = plVar30;
                      uVar33 = uVar34;
                    }
                    else {
                      *plVar30 = *plVar29;
                      *plVar29 = **(long **)(lVar24 + uVar34 * 8);
                      **(undefined8 **)(lVar24 + uVar34 * 8) = plVar29;
                      plVar29 = plVar30;
                    }
                  }
                  plVar30 = plVar29;
                  plVar29 = (long *)*plVar30;
                }
              }
            }
          }
          else if (uVar34 < uVar33) {
            fVar37 = (float)func_0x0eee3ab0((float)*(ulong *)(param_1 + 0x70) /
                                            *(float *)(param_1 + 0x78));
            uVar28 = (long)(fVar37 - _DAT_01198778) & (long)fVar37 >> 0x3f | (long)fVar37;
            if ((uVar33 < 3) ||
               (uVar25 = uVar33 - (uVar33 >> 1 & 0x5555555555555555),
               uVar25 = (uVar25 >> 2 & 0x3333333333333333) + (uVar25 & 0x3333333333333333),
               1 < (byte)(((uVar25 >> 4) + uVar25 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))
               ) {
              uVar28 = func_0x0412c3f0(uVar28);
            }
            else if (1 < uVar28) {
              lVar20 = 0x3f;
              if (uVar28 - 1 != 0) {
                for (; uVar28 - 1 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                }
              }
              uVar28 = 1L << (-((byte)lVar20 ^ 0x3f) & 0x3f);
            }
            if (uVar28 < uVar34) {
              uVar28 = uVar34;
            }
            if (uVar28 < uVar33) {
              if (uVar28 != 0) goto LAB_0d21a022;
              lVar20 = *plVar30;
              *plVar30 = 0;
              if (lVar20 != 0) {
                func_0x0412a280(lVar20,*(long *)(param_1 + 0x60) << 3);
              }
              *(undefined8 *)(param_1 + 0x60) = 0;
            }
          }
          uVar33 = *(ulong *)(param_1 + 0x60);
          if ((uVar33 & uVar33 - 1) == 0) {
            uVar34 = uVar22 & uVar33 - 1;
          }
          else {
            uVar34 = uVar22;
            if (uVar33 <= uVar22) {
              if ((uVar22 | uVar33) >> 0x20 == 0) {
                uVar34 = (uVar22 & 0xffffffff) % (uVar33 & 0xffffffff);
              }
              else {
                uVar34 = uVar22 % uVar33;
              }
            }
          }
        }
        else {
          fVar39 = (float)(long)uVar33;
          fVar38 = *(float *)(param_1 + 0x78);
          if (uVar33 == 0) goto LAB_0d219f95;
LAB_0d219f88:
          if (fVar39 * fVar38 < fVar37) goto LAB_0d219f95;
        }
        lVar20 = *plStack_d78;
        plVar30 = *(long **)(lVar20 + uVar34 * 8);
        if (plVar30 == (long *)0x0) {
          *plVar23 = *(long *)(param_1 + 0x68);
          *(long **)(param_1 + 0x68) = plVar23;
          *(long *)(lVar20 + uVar34 * 8) = param_1 + 0x68;
          if (*plVar23 != 0) {
            uVar34 = *(ulong *)(*plVar23 + 8);
            if ((uVar33 & uVar33 - 1) == 0) {
              *(long **)(lVar20 + (uVar34 & uVar33 - 1) * 8) = plVar23;
            }
            else {
              if (uVar33 <= uVar34) {
                if ((uVar34 | uVar33) >> 0x20 == 0) {
                  *(long **)(lVar20 + ((uVar34 & 0xffffffff) % (uVar33 & 0xffffffff)) * 8) = plVar23
                  ;
                  goto LAB_0d21a2aa;
                }
                uVar34 = uVar34 % uVar33;
              }
              *(long **)(lVar20 + uVar34 * 8) = plVar23;
            }
          }
        }
        else {
          *plVar23 = *plVar30;
          *plVar30 = (long)plVar23;
        }
LAB_0d21a2aa:
        *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + 1;
LAB_0d21a2ae:
        func_0x0d21d530(plVar23 + 5,&uStack_5e8);
        func_0x0d21d3d0(param_1,param_2,1);
      }
      func_0x05fe8150(&uStack_5e8);
    }
    uVar26 = 0;
    goto LAB_0d21a2e3;
  }
  uVar16 = (**(code **)(**(long **)(param_1 + 0x28) + 0x68))(*(long **)(param_1 + 0x28),param_3);
  (**(code **)(**(long **)(param_1 + 0x28) + 0x70))(&uStack_cd8,*(long **)(param_1 + 0x28),param_3);
  if (((ulong)uStack_cd8 & 1) == 0) {
    lVar20 = *(long *)(param_1 + 0xd0);
    plVar23 = (long *)((ulong)uStack_cd8 >> 1 & 0x7f);
  }
  else {
    lVar20 = *(long *)(param_1 + 0xd0);
    plVar23 = uStack_cd0;
  }
  if ((lVar20 == 0) &&
     (cVar15 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013386de),
     cVar15 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((**(char **)(param_1 + 0xd0) == '\0') &&
     (cVar15 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013386de),
     cVar15 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  uVar17 = (**(code **)(**(long **)(param_1 + 0xe0) + 0x690))();
  func_0x0d207510(&uStack_5e8,uVar17,0);
  plStack_d78 = (long *)CONCAT71(plStack_d78._1_7_,uVar16);
  if (plVar23 == (long *)0x0) {
LAB_0d21882c:
    if ((DAT_0f5ea4a0 == '\0') && (iVar19 = func_0x04108328(&DAT_0f5ea4a0), iVar19 != 0)) {
      func_0x08b670e0(&DAT_0f5ea138);
      func_0x0eee2f40(&UNK_08b673f0,&DAT_0f5ea138,0xf53dab8);
      func_0x0410844d(&DAT_0f5ea4a0);
    }
    plVar23 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar23 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar26 = _UNK_014582f7;
    uStack_8e8 = (long *)0x21;
    uStack_8e0 = (long *)0x1d;
    *(ulong *)((long)plVar23 + 0xd) = CONCAT53(_UNK_014582f2,_DAT_014582ef);
    *(undefined8 *)((long)plVar23 + 0x15) = uVar26;
    lVar20 = CONCAT35(_DAT_014582ef,_UNK_014582ea);
    *plVar23 = _DAT_014582e2;
    plVar23[1] = lVar20;
    *(undefined1 *)((long)plVar23 + 0x1d) = 0;
    uStack_928 = 0;
    plStack_920 = (long *)0x0;
    plStack_8d8 = plVar23;
    (**(code **)(_DAT_0f5ea138 + 0x90))(auStack_c08,&DAT_0f5ea138,&uStack_8e8,&uStack_928);
    if ((uStack_370 & 1) == 0) {
      if (((ulong)_auStack_c08 & 1) == 0) {
        plStack_360 = uStack_bf8;
        uStack_370 = (uint)auStack_c08;
        uStack_36c = uStack_c04;
        uStack_368 = (uint)uStack_c00;
        uStack_364 = uStack_c00._4_4_;
      }
      else {
        func_0x04885070(&uStack_370,uStack_bf8,uStack_c00);
      }
    }
    else {
      plVar30 = (long *)((ulong)_auStack_c08 >> 1 & 0x7f);
      plVar23 = (long *)(auStack_c08 + 1);
      if (((ulong)_auStack_c08 & 1) != 0) {
        plVar30 = uStack_c00;
        plVar23 = uStack_bf8;
      }
      func_0x04885120(&uStack_370,plVar23,plVar30);
    }
    plVar23 = plStack_48;
    if (lStack_60 - lStack_68 == 0) {
LAB_0d218a3c:
      plStack_50 = plVar23;
      if (plVar23 != plStack_48) goto LAB_0d218a41;
    }
    else {
      uVar33 = lStack_60 - lStack_68 >> 1;
      uVar22 = uVar33 >> 1;
      uVar34 = uVar33 & 0xfffffffffffffffe;
      if (*(short *)(lStack_68 + uVar34) == 0) {
        lVar24 = lStack_68 + uVar22 * 2 + 2;
        lVar31 = lStack_60 - lVar24;
        lVar20 = lStack_60;
      }
      else {
        do {
          lVar20 = uVar34 + lStack_68;
          if (uVar33 < 2) goto LAB_0d218a3c;
          uVar28 = uVar22 >> 1;
          uVar34 = uVar22 & 0xfffffffffffffffe;
          uVar33 = uVar22;
          uVar22 = uVar28;
        } while (*(short *)(lStack_68 + uVar34) != 0);
        lVar24 = lStack_68 + uVar28 * 2 + 2;
        lVar31 = lVar20 - lVar24;
      }
      if (lVar31 != 0) {
        uVar34 = lVar31 >> 1;
        lVar20 = lVar24;
        do {
          uVar22 = uVar34 >> 1;
          uVar33 = uVar34 & 0xfffffffffffffffe;
          uVar34 = ~uVar22 + uVar34;
          lVar24 = lVar20 + 2 + uVar33;
          if (*(short *)(lVar20 + uVar33) != 0) {
            uVar34 = uVar22;
            lVar24 = lVar20;
          }
          lVar20 = lVar24;
        } while (uVar34 != 0);
      }
      if ((lStack_68 == lVar20) || (plVar23 = plStack_50, lStack_68 == lStack_60))
      goto LAB_0d218a3c;
LAB_0d218a41:
      if (*plStack_50 != 0) {
        func_0x0495d5f0();
      }
    }
    if (((ulong)_auStack_c08 & 1) != 0) {
      func_0x0412a280(uStack_bf8,(ulong)_auStack_c08 & 0xfffffffffffffffe);
    }
    plVar23 = plStack_920;
    if (plStack_920 != (long *)0x0) {
      LOCK();
      plVar30 = plStack_920 + 1;
      lVar20 = *plVar30;
      *plVar30 = *plVar30 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*plStack_920 + 0x10))(plStack_920);
        func_0x0412c2d0(plVar23);
      }
    }
    if (((ulong)uStack_8e8 & 1) != 0) {
      func_0x0412a280(plStack_8d8,(ulong)uStack_8e8 & 0xfffffffffffffffe);
    }
    uVar16 = 1;
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x28) + 0x18))
              (auStack_c08,*(long **)(param_1 + 0x28),param_2,&uStack_5e8);
    uStack_8e8 = (long *)0x44fe45ef230d8a7;
    uStack_8e0 = (long *)&UNK_0140f690;
    plStack_8d8 = (long *)0x1;
    plStack_8d0 = (long *)CONCAT44(plStack_8d0._4_4_,0x237);
    if (bStack_bc8 == 1) {
LAB_0d21850a:
      auVar35 = auStack_c08;
      lVar20 = uStack_be0;
    }
    else {
      uStack_dc8 = (long *)0x0;
      uStack_dc0 = (long *)0x0;
      plStack_db8 = (long *)0x0;
      func_0x0eedeb80(2,0x2d,auStack_c08,&uStack_dc8,&uStack_8e8);
      if (((ulong)uStack_dc8 & 1) != 0) {
        func_0x0412a280(plStack_db8,(ulong)uStack_dc8 & 0xfffffffffffffffe);
      }
      if ((bStack_bc8 & 1) != 0) goto LAB_0d21850a;
      auVar35 = (undefined1  [4])0x0;
      lVar20 = uStack_be0;
    }
    uStack_be0 = lVar20;
    if ((bStack_bc8 & 1) == 0) {
      if (lVar20 != 0) {
        while (lVar20 != uStack_bd8) {
          func_0x048b3e80(uStack_bd8 + -0x40);
          uStack_bd8 = uStack_bd8 + -0x40;
        }
        uStack_bd8 = lVar20;
        func_0x0412a280(uStack_be0,lStack_bd0 - uStack_be0);
      }
      plVar30 = uStack_bf8;
      plVar23 = uStack_bf0;
      if (uStack_bf8 != (long *)0x0) {
        for (; plVar30 != plVar23; plVar23 = plVar23 + -10) {
          if (((char)plVar23[-1] == '\x01') && ((*(byte *)(plVar23 + -6) & 1) != 0)) {
            func_0x0412a280(plVar23[-4],plVar23[-6] & 0xfffffffffffffffe);
          }
        }
        uStack_bf0 = plVar30;
        func_0x0412a280(uStack_bf8,(long)plStack_be8 - (long)uStack_bf8);
      }
    }
    if (auVar35 == (undefined1  [4])0x0) goto LAB_0d21882c;
    if (auVar35 == (undefined1  [4])0x2) {
      uStack_38 = 1;
    }
    uVar16 = 0;
  }
  lVar20 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x5b8);
  if (lVar20 == 0) {
    func_0x0eec74c0(0x5b8,0);
  }
  func_0x0d20b440(lVar20,&uStack_5e8);
  lStack_c70 = lVar20;
  plVar23 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
  if (plVar23 == (long *)0x0) {
    func_0x0eec74c0(0x18,0);
  }
  *plVar23 = (long)&UNK_0f534768;
  puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar21 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  puVar21[1] = 0;
  puVar21[2] = 0;
  *puVar21 = &UNK_0ef44a60;
  *(undefined1 *)(puVar21 + 3) = 1;
  plVar23[1] = (long)(puVar21 + 3);
  plVar23[2] = (long)puVar21;
  lStack_c70 = 0;
  plStack_938 = plVar23;
  lStack_930 = lVar20;
  func_0x0d1d03b0(auStack_c08);
  uStack_940 = 0;
  uStack_93e = 0;
  plStack_938 = (long *)0x0;
  lStack_930 = 0;
  lStack_c70 = 0;
  plStack_950 = plVar23;
  lStack_948 = lVar20;
  (**(code **)(**(long **)(param_1 + 0x28) + 0x80))(&uStack_e18,*(long **)(param_1 + 0x28),param_2);
  if ((uStack_e18 & 1) == 0) {
    uStack_c58 = uStack_e08;
    uStack_c68 = (long *)CONCAT44(uStack_e14,uStack_e18);
    uStack_c60 = (long *)CONCAT44(uStack_e0c,uStack_e10);
  }
  else {
    func_0x0412e5e0(&uStack_c68,uStack_e08,CONCAT44(uStack_e0c,uStack_e10));
  }
  (**(code **)(**(long **)(param_1 + 0x28) + 0x88))
            (&uStack_dc8,*(long **)(param_1 + 0x28),param_2,1);
  plVar30 = plStack_db8;
  plVar23 = uStack_dc8;
  if (((ulong)uStack_dc8 & 1) == 0) {
    plStack_d18 = uStack_dc8;
    auStack_d10 = (undefined1  [8])uStack_dc0;
    plStack_d08 = plStack_db8;
  }
  else {
    func_0x0412e5e0(&plStack_d18,plStack_db8);
  }
  uVar17 = (**(code **)(**(long **)(param_1 + 0x28) + 0x98))(*(long **)(param_1 + 0x28),param_2);
  func_0x0d1d1910(&uStack_8e8,param_2,lVar20,&uStack_c68,&plStack_d18,uVar17);
  func_0x0d21d530(auStack_c08,&uStack_8e8);
  func_0x05fe8150(&uStack_8e8);
  if (((ulong)plStack_d18 & 1) != 0) {
    func_0x0412a280(plStack_d08,(ulong)plStack_d18 & 0xfffffffffffffffe);
  }
  if (((ulong)plVar23 & 1) != 0) {
    func_0x0412a280(plVar30,(ulong)plVar23 & 0xfffffffffffffffe);
  }
  if (((ulong)uStack_c68 & 1) != 0) {
    func_0x0412a280(uStack_c58,(ulong)uStack_c68 & 0xfffffffffffffffe);
  }
  if ((uStack_e18 & 1) != 0) {
    func_0x0412a280(uStack_e08,CONCAT44(uStack_e14,uStack_e18) & 0xfffffffffffffffe);
  }
  uStack_940 = CONCAT11(plStack_d78._0_1_,(undefined1)uStack_940);
  uStack_93e = uVar16;
  uVar26 = func_0x0d214c10(param_1,param_2,auStack_c08,param_4);
  lVar20 = lStack_948;
  lStack_948 = 0;
  if (lVar20 != 0) {
    func_0x0d20be50(lVar20);
    func_0x0412a280(lVar20,0x5b8);
  }
  plVar23 = plStack_950;
  plStack_950 = (long *)0x0;
  if (plVar23 != (long *)0x0) {
    (**(code **)(*plVar23 + 8))();
  }
  func_0x05fe8150(auStack_c08);
  func_0x0d20be50(&uStack_5e8);
  if (((ulong)uStack_cd8 & 1) != 0) {
    func_0x0412a280(plStack_cc8,(ulong)uStack_cd8 & 0xfffffffffffffffe);
  }
LAB_0d21a2e3:
  func_0x0412d790(lStack_c18);
  return uVar26;
}



/* ---- referenced strings ----
 * 0x14582e2  storageManager.world.unlisted
 * 0x14582ef  r.world.unlisted
 */
