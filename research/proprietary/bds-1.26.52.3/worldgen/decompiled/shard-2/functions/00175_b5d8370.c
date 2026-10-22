/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb6d8370 (ELF vaddr 0xb5d8370)
 * Label: caller-of-callee
 * Body:  [[0b6d8370, 0b6d849a] [0b6d84a0, 0b6d857a] [0b6d8580, 0b6d8ac7] [0b6d8ad0, 0b6d913a] [0b6d9140, 0b6d9679] [0b6d9680, 0b6d9cee] [0b6d9dbf, 0b6d9dcd] [0b6d9deb, 0b6d9e2e] [0b6d9e5a, 0b6d9e8b] [0b6d9e91, 0b6d9ee8] [0b6d9ef9, 0b6d9f45]]
 * Ghidra: FUN_0b6d8370
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0b6d8370(long param_1,undefined8 param_2,undefined8 param_3,long *param_4,byte *param_5,
                 undefined8 param_6,undefined8 param_7,long *param_8,char param_9)

{
  undefined1 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auVar4 [12];
  undefined *puVar5;
  undefined1 auVar6 [16];
  undefined1 *puVar7;
  long *plVar8;
  char cVar9;
  int iVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  ulong *puVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  byte bVar17;
  ulong uVar18;
  byte *pbVar19;
  long lVar20;
  long lVar21;
  byte *pbVar22;
  ulong uVar23;
  undefined7 *puVar24;
  ulong uVar25;
  long lVar26;
  undefined8 *puVar27;
  ulong uVar28;
  bool bVar29;
  uint uVar30;
  uint uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  ulong *puStack_f50;
  undefined8 uStack_f48;
  undefined4 uStack_f40;
  undefined4 uStack_f3c;
  ulong *puStack_f20;
  undefined8 uStack_f18;
  int iStack_f10;
  int iStack_f0c;
  int iStack_f08;
  int iStack_f04;
  undefined1 auStack_ef8 [8];
  long *plStack_ef0;
  undefined1 *puStack_ee8;
  undefined1 *puStack_ee0;
  long lStack_ed8;
  long lStack_ed0;
  long lStack_ec8;
  byte *pbStack_ec0;
  byte bStack_eb8;
  long *plStack_ea8;
  float fStack_e9c;
  byte bStack_e98;
  undefined7 uStack_e97;
  long *plStack_e90;
  undefined1 *puStack_e88;
  undefined1 *puStack_e80;
  long lStack_e78;
  long lStack_e70;
  long lStack_e68;
  byte *pbStack_e60;
  byte bStack_e58;
  byte bStack_e50;
  undefined7 uStack_e4f;
  ulong uStack_e48;
  undefined7 *puStack_e40;
  undefined1 auStack_e38 [24];
  long lStack_e20;
  long *plStack_e18;
  byte *pbStack_e10;
  undefined1 auStack_e08 [16];
  undefined1 *puStack_df8;
  undefined1 auStack_de8 [16];
  undefined1 auStack_dd8 [16];
  undefined1 auStack_dc8 [16];
  undefined1 auStack_db8 [16];
  ulong uStack_da8;
  undefined8 uStack_d98;
  undefined8 uStack_d90;
  undefined8 uStack_d80;
  undefined6 uStack_d78;
  undefined2 uStack_d72;
  float fStack_d70;
  undefined1 uStack_d6c;
  undefined1 uStack_d6b;
  undefined1 auStack_d68 [16];
  undefined1 auStack_d58 [16];
  undefined1 auStack_d48 [16];
  long lStack_d38;
  long *plStack_d30;
  ulong uStack_d28;
  ulong uStack_d20;
  undefined8 uStack_d18;
  undefined4 uStack_d10;
  undefined1 uStack_d0c;
  undefined1 uStack_d0b;
  undefined8 uStack_d08;
  int iStack_d00;
  int iStack_cfc;
  int iStack_cf8;
  int iStack_cf4;
  undefined8 uStack_cf0;
  undefined8 uStack_ce8;
  undefined4 uStack_ce0;
  undefined1 uStack_cdc;
  undefined1 uStack_cdb;
  undefined1 uStack_cda;
  undefined8 uStack_cd8;
  undefined4 uStack_cd0;
  byte *pbStack_cc0;
  undefined8 uStack_cb8;
  undefined *puStack_cb0;
  undefined8 uStack_ca8;
  int iStack_ca0;
  undefined8 uStack_c9c;
  int iStack_c94;
  undefined1 **ppuStack_c90;
  long *plStack_c88;
  undefined8 uStack_c80;
  undefined8 uStack_c78;
  undefined8 uStack_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  byte *pbStack_c58;
  byte bStack_c50;
  undefined8 uStack_c48;
  undefined8 uStack_c40;
  undefined *puStack_c38;
  undefined1 *puStack_c30;
  undefined1 *puStack_c28;
  long *plStack_c20;
  undefined8 uStack_c18;
  undefined8 uStack_c10;
  undefined8 uStack_c08;
  undefined8 uStack_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_bf0;
  undefined8 uStack_be8;
  undefined8 uStack_be0;
  undefined8 uStack_bd8;
  long *plStack_bd0;
  undefined8 uStack_bc8;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  ulong uStack_b90;
  long lStack_b88;
  undefined1 auStack_a90 [160];
  ulong *puStack_9f0;
  undefined1 *puStack_9e8;
  undefined8 *puStack_9e0;
  byte *pbStack_9d8;
  undefined8 *puStack_9d0;
  undefined8 *puStack_9c8;
  undefined **ppuStack_9c0;
  undefined6 *puStack_9b8;
  byte bStack_850;
  undefined1 *puStack_848;
  undefined *puStack_840;
  undefined8 uStack_838;
  undefined4 uStack_830;
  uint uStack_828;
  long lStack_818;
  ulong uStack_810;
  undefined4 uStack_808;
  uint uStack_7f8;
  undefined8 uStack_774;
  undefined4 uStack_76c;
  undefined8 uStack_768;
  undefined4 uStack_760;
  undefined *puStack_75c;
  undefined4 uStack_754;
  byte bStack_6c8;
  long *plStack_448;
  undefined1 auStack_438 [32];
  undefined1 auStack_418 [16];
  undefined1 auStack_408 [16];
  undefined1 auStack_3f8 [14];
  undefined2 uStack_3ea;
  undefined1 auStack_3e8 [14];
  undefined1 auStack_3d8 [16];
  undefined8 uStack_3c8;
  long *plStack_38;
  
  *param_5 = 0;
  auStack_d48 = (undefined1  [16])0x0;
  auStack_d58 = (undefined1  [16])0x0;
  auStack_d68 = (undefined1  [16])0x0;
  uStack_d78 = 0;
  uStack_d72 = 0;
  fStack_d70 = 0.0;
  uStack_d6c = 0;
  uStack_d6b = 0;
  if ((param_4[1] == 0) || (plStack_d30 = (long *)func_0x0412c300(), plStack_d30 == (long *)0x0))
  goto LAB_0b6d9c59;
  lVar21 = *param_4;
  uStack_d80 = param_2;
  lStack_d38 = lVar21;
  uStack_cb8 = param_3;
  if (lVar21 != 0) {
    plVar11 = (long *)func_0x064a9f80(*(undefined8 *)(param_1 + 0x18));
    if (plVar11 == (long *)0x0) {
      cVar9 = FUN_0eeddcf0(&UNK_01259441,&UNK_01198d5e,0x15c,&UNK_0119dfc2,&UNK_0135e48c);
      if (cVar9 != '\0') {
        _DAT_00000000 = 0xdeadc0de;
      }
      func_0x04109e60();
LAB_0b6d9ccc:
      FUN_04882e30();
LAB_0b6d9cd1:
      func_0x04882eb0();
LAB_0b6d9cd6:
      uVar16 = func_0x048f9990();
      func_0x041084d6(&DAT_0f7b8fb8);
      func_0x048f9be0(auStack_e38);
      if ((auStack_e08[0] & 1) != 0) {
        func_0x0412a280(puStack_df8,auStack_e08._0_8_ & 0xfffffffffffffffe);
      }
      plVar11 = plStack_ea8;
      plStack_ea8 = (long *)0x0;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 8))();
      }
      func_0x05d645d0(&uStack_b98);
      if ((bStack_e50 & 1) != 0) {
        func_0x0412a280(puStack_e40,CONCAT71(uStack_e4f,bStack_e50) & 0xfffffffffffffffe);
      }
      if ((uStack_d28 & 1) != 0) {
        func_0x0412a280(uStack_d18,uStack_d28 & 0xfffffffffffffffe);
      }
      if (bStack_850 == 1) {
        func_0x05d645d0(&puStack_9f0);
      }
      if (puStack_f50 != (ulong *)0x0) {
        func_0x0412a280(puStack_f50,(long)puStack_f20 - (long)puStack_f50);
      }
      func_0x0b6d64e0(&lStack_d38);
      if (auStack_d58._8_8_ != 0) {
        auStack_d48._0_8_ = auStack_d58._8_8_;
        func_0x0412a280(auStack_d58._8_8_,auStack_d48._8_8_ - auStack_d58._8_8_);
      }
      func_0x0eee2d70(uVar16);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar20 = *(long *)(lVar21 + 0x50);
    if ((lVar20 != *(long *)(lVar21 + 0x58)) && (*(long *)(lVar21 + 0x38) != 0)) {
      uStack_d98 = CONCAT71(uStack_d98._1_7_,*(undefined1 *)(lVar21 + 0x4c));
      lStack_e20 = CONCAT71(lStack_e20._1_7_,*(undefined1 *)(lVar21 + 0x4d));
      uStack_c48 = *(undefined8 *)(lVar21 + 0x40);
      uStack_c40 = 0;
      fStack_e9c = *(float *)(lVar21 + 0x48);
      pbVar22 = (byte *)0x0;
      puStack_f50 = (ulong *)0x0;
      uStack_f48 = (ulong *)0x0;
      puStack_f20 = (ulong *)0x0;
      plStack_e18 = plVar11;
      pbStack_cc0 = param_5;
LAB_0b6d84b1:
      uVar1 = *(undefined1 *)(lVar20 + 0x38);
      bVar17 = *(byte *)(lVar20 + 0x39);
      uStack_b98 = *(ulong *)(lVar20 + 0x28);
      uStack_b90 = *(ulong *)(lVar20 + 0x30);
      uStack_d28 = *(ulong *)(lVar20 + 0x18);
      uStack_d20 = *(ulong *)(lVar20 + 0x20);
      pbStack_e10 = pbVar22;
      if ((*(long *)(lVar21 + 0x38) == 0) ||
         (plVar11 = (long *)func_0x0412c300(), plVar11 == (long *)0x0)) goto LAB_0b6d84a0;
      lVar13 = *(long *)(lVar21 + 0x30);
      LOCK();
      plVar11[2] = plVar11[2] + 1;
      UNLOCK();
      LOCK();
      plVar12 = plVar11 + 1;
      lVar21 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar21 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        FUN_0412c2d0(plVar11);
      }
      plStack_e90 = (long *)func_0x0412c300(plVar11);
      if (plStack_e90 != (long *)0x0) {
        bStack_e98 = (byte)lVar13;
        uStack_e97 = (undefined7)((ulong)lVar13 >> 8);
        if (lVar13 != 0) {
          plVar12 = *(long **)(lVar13 + 0x98);
          if (plVar12 != *(long **)(lVar13 + 0xa0)) {
LAB_0b6d858d:
            puVar27 = (undefined8 *)*plVar12;
            if ((puVar27[2] != uStack_d28) || (puVar27[3] != uStack_d20)) goto LAB_0b6d8580;
            lVar21 = puVar27[1];
            puVar15 = (undefined1 *)*puVar27;
            puVar5 = (undefined *)puVar27[1];
            if (lVar21 != 0) {
              LOCK();
              *(long *)(lVar21 + 0x10) = *(long *)(lVar21 + 0x10) + 1;
              UNLOCK();
              LOCK();
              *(long *)(lVar21 + 0x10) = *(long *)(lVar21 + 0x10) + 1;
              UNLOCK();
              FUN_0412c2d0();
            }
            puStack_848 = puVar15;
            puStack_840 = puVar5;
            func_0x06479560(auStack_ef8,&puStack_848);
            if (puStack_840 != (undefined *)0x0) {
              FUN_0412c2d0();
            }
            if (plStack_ef0 != (long *)0x0) {
              plStack_c88 = (long *)func_0x0412c300();
              if (plStack_c88 == (long *)0x0) {
                pbVar22 = (byte *)0x1;
                goto LAB_0b6d8987;
              }
              ppuStack_c90 = (undefined1 **)auStack_ef8;
              if (auStack_ef8 == (undefined1  [8])0x0) {
                pbVar22 = (byte *)0x1;
                goto LAB_0b6d8961;
              }
              auStack_de8._8_4_ = *(undefined4 *)((long)auStack_ef8 + 0x38);
              auStack_de8._0_8_ = *(undefined1 **)((long)auStack_ef8 + 0x30);
              (**(code **)(*plStack_e18 + 0x48))(&puStack_848,plStack_e18,&uStack_b98);
              if (bStack_6c8 == 0) {
                pbVar22 = (byte *)0x1;
              }
              else {
                plStack_bd0 = (long *)CONCAT44(plStack_bd0._4_4_,uStack_76c);
                uStack_bd8 = uStack_774;
                uStack_c10 = CONCAT44(uStack_c10._4_4_,uStack_760);
                uStack_c18 = uStack_768;
                uStack_ca8 = CONCAT44(uStack_ca8._4_4_,uStack_754);
                puStack_cb0 = puStack_75c;
                uStack_f18 = CONCAT71(uStack_f18._1_7_,uVar1);
                puStack_9f0 = &uStack_d28;
                puStack_9e8 = auStack_de8;
                puStack_9e0 = &uStack_f18;
                pbStack_9d8 = &bStack_e50;
                puStack_9d0 = &uStack_bd8;
                puStack_9c8 = &uStack_c18;
                ppuStack_9c0 = &puStack_cb0;
                puStack_9b8 = &uStack_d78;
                for (puVar14 = (ulong *)auStack_d58._8_8_;
                    (puVar14 != (ulong *)auStack_d48._0_8_ &&
                    ((*puVar14 != uStack_d28 || (puVar14[1] != uStack_d20))));
                    puVar14 = puVar14 + 0xf) {
                }
                bStack_e50 = bVar17;
                if (puVar14 == (ulong *)auStack_d48._0_8_) {
                  auStack_3d8 = (undefined1  [16])0x0;
                  uStack_3c8 = 0;
                  auStack_3e8 = SUB1614((undefined1  [16])0x0,2);
                  auStack_3f8 = SUB1614((undefined1  [16])0x0,0);
                  uStack_3ea = 0;
                  auStack_408 = (undefined1  [16])0x0;
                  auStack_418 = (undefined1  [16])0x0;
                  func_0x064ba3f0(&puStack_9f0,auStack_438);
                  func_0x064ba5c0(auStack_d58 + 8,auStack_438);
                }
                else {
                  func_0x064ba3f0(&puStack_9f0);
                }
                if (puStack_f20 <= uStack_f48) {
                  lVar21 = (long)uStack_f48 - (long)puStack_f50;
                  uVar23 = (lVar21 >> 4) + 1;
                  if (uVar23 >> 0x3c != 0) goto LAB_0b6d9cd6;
                  uVar18 = (long)puStack_f20 - (long)puStack_f50;
                  uVar25 = (long)uVar18 >> 3;
                  if ((ulong)((long)uVar18 >> 3) <= uVar23) {
                    uVar25 = uVar23;
                  }
                  if (0x7fffffffffffffef < uVar18) {
                    uVar25 = 0xfffffffffffffff;
                  }
                  if (uVar25 < 0x1000000000000000) {
                    lVar26 = uVar25 * 0x10;
                    lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar26);
                    if (lVar13 == 0) {
                      func_0x0eec74c0(lVar26,0);
                    }
                    puStack_f20 = (ulong *)(lVar26 + lVar13);
                    *(ulong *)(lVar13 + lVar21) = uStack_b98;
                    ((ulong *)(lVar13 + lVar21))[1] = uStack_b90;
                    uStack_f48 = (ulong *)(lVar13 + lVar21);
                    puVar14 = (ulong *)(lVar21 + lVar13 + (lVar21 >> 4) * -0x10);
                    func_0x0eee2f00(puVar14,puStack_f50);
                    if (puStack_f50 != (ulong *)0x0) {
                      func_0x0412a280(puStack_f50,uVar18);
                    }
                    goto LAB_0b6d8929;
                  }
                  goto LAB_0b6d9cd1;
                }
                *uStack_f48 = uStack_b98;
                uStack_f48[1] = uStack_b90;
                puVar14 = puStack_f50;
LAB_0b6d8929:
                puStack_f50 = puVar14;
                uStack_f48 = uStack_f48 + 2;
                pbVar22 = pbStack_e10;
              }
              if ((bStack_6c8 & 1) != 0) {
                func_0x05ed96b0(&puStack_848);
              }
              if (plStack_c88 != (long *)0x0) {
LAB_0b6d8961:
                plVar8 = plStack_c88;
                LOCK();
                plVar12 = plStack_c88 + 1;
                lVar21 = *plVar12;
                *plVar12 = *plVar12 + -1;
                UNLOCK();
                if (lVar21 == 0) {
                  (**(code **)(*plStack_c88 + 0x10))(plStack_c88);
                  FUN_0412c2d0(plVar8);
                }
              }
LAB_0b6d8987:
              if (plStack_ef0 != (long *)0x0) {
                FUN_0412c2d0();
              }
              goto LAB_0b6d8996;
            }
            goto LAB_0b6d8784;
          }
          pbVar22 = (byte *)0x1;
          goto LAB_0b6d8996;
        }
        pbVar22 = (byte *)0x1;
        goto LAB_0b6d89a3;
      }
      pbVar22 = (byte *)0x1;
      goto LAB_0b6d89d0;
    }
    goto LAB_0b6d9c26;
  }
LAB_0b6d9c33:
  plVar12 = plStack_d30;
  LOCK();
  plVar11 = plStack_d30 + 1;
  lVar21 = *plVar11;
  *plVar11 = *plVar11 + -1;
  UNLOCK();
  if (lVar21 == 0) {
    (**(code **)(*plStack_d30 + 0x10))(plStack_d30);
    FUN_0412c2d0(plVar12);
  }
LAB_0b6d9c59:
  if (auStack_d58._8_8_ != 0) {
    auStack_d48._0_8_ = auStack_d58._8_8_;
    func_0x0412a280(auStack_d58._8_8_,auStack_d48._8_8_ - auStack_d58._8_8_);
  }
  return;
LAB_0b6d84a0:
  pbVar22 = (byte *)0x1;
  lVar20 = lVar20 + 0x40;
  if (lVar20 == *(long *)(lVar21 + 0x58)) goto LAB_0b6d89ff;
  goto LAB_0b6d84b1;
LAB_0b6d8580:
  plVar12 = plVar12 + 2;
  if (plVar12 == *(long **)(lVar13 + 0xa0)) goto LAB_0b6d8784;
  goto LAB_0b6d858d;
LAB_0b6d8784:
  pbVar22 = (byte *)0x1;
LAB_0b6d8996:
  if (plStack_e90 != (long *)0x0) {
LAB_0b6d89a3:
    plVar8 = plStack_e90;
    LOCK();
    plVar12 = plStack_e90 + 1;
    lVar21 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*plStack_e90 + 0x10))(plStack_e90);
      FUN_0412c2d0(plVar8);
    }
  }
LAB_0b6d89d0:
  FUN_0412c2d0(plVar11);
  lVar20 = lVar20 + 0x40;
  lVar21 = lStack_d38;
  if (lVar20 == *(long *)(lStack_d38 + 0x58)) goto LAB_0b6d89ff;
  goto LAB_0b6d84b1;
LAB_0b6d89ff:
  plVar11 = plStack_e18;
  if (puStack_f50 != uStack_f48) {
    uStack_d78 = (undefined6)uStack_c48;
    uStack_d72 = (undefined2)((ulong)uStack_c48 >> 0x30);
    fStack_d70 = fStack_e9c;
    uStack_d6c = (undefined1)lStack_e20;
    uStack_d6b = (undefined1)uStack_d98;
    func_0x064ba870(&uStack_d78);
    pbVar19 = (byte *)(((long)(auStack_d48._0_8_ - auStack_d58._8_8_) >> 3) * -0x1111111111111111);
    if ((long)pbVar19 - ((long)uStack_f48 - (long)puStack_f50 >> 4) == 0) {
      if (auStack_d48._0_8_ == auStack_d58._8_8_) {
LAB_0b6d9c05:
        bVar17 = 0;
      }
      else {
        lStack_e20 = 0;
        uVar23 = 0;
        lVar21 = auStack_d58._8_8_;
        pbStack_e10 = pbVar22;
        do {
          (**(code **)(*plVar11 + 0x20))(&puStack_9f0,plVar11,puStack_f50 + uVar23 * 2);
          if (bStack_850 == 0) {
            pbVar19 = (byte *)CONCAT71((int7)((ulong)pbVar19 >> 8),1);
            pbStack_e10 = pbVar19;
          }
          else {
            puVar27 = (undefined8 *)(lVar21 + uVar23 * 0x78);
            uStack_d18 = _DAT_01da19f8;
            uStack_d28 = _DAT_01da19e8;
            uStack_d20 = _UNK_01da19f0;
            uStack_d10 = 0;
            uStack_d0c = 0;
            uStack_d0b = 1;
            uStack_d08 = 0xffffffffffffffff;
            uStack_cd0 = 0;
            uStack_cda = 0;
            uStack_cd8 = _DAT_014e72a0;
            fVar32 = (float)func_0x0eee4390();
            fVar33 = (float)func_0x0eee4390();
            uStack_cf0 = CONCAT44((int)fVar33,(int)fVar32);
            uVar16 = puVar27[4];
            uVar2 = puVar27[5];
            fVar32 = (float)func_0x0eee4390();
            uStack_f48._4_4_ = (undefined4)((ulong)uVar16 >> 0x20);
            uStack_f40 = (undefined4)uVar2;
            uStack_f3c = (undefined4)((ulong)uVar2 >> 0x20);
            auVar4._4_8_ = extraout_XMM0_Qb;
            auVar4._0_4_ = uStack_f48._4_4_;
            auVar39._0_8_ = auVar4._0_8_ << 0x20;
            auVar39._8_4_ = uStack_f40;
            auVar39._12_4_ = uStack_f3c;
            fVar33 = (float)func_0x0eee4390(auVar39._8_8_);
            uStack_d98 = func_0x0eee4390();
            fVar34 = (float)func_0x0eee4390();
            iStack_d00 = (int)(float)uStack_d98;
            iStack_cfc = (int)fVar34;
            iStack_cf8 = (int)fVar33;
            iStack_cf4 = (int)fVar32;
            uVar25 = puVar27[7];
            auVar38._8_8_ = 0;
            auVar38._0_8_ = uVar25;
            uVar30 = -(uint)(_DAT_014e5300 < (float)uVar25);
            uVar31 = -(uint)(_UNK_014e5304 < (float)(uVar25 >> 0x20));
            auVar39 = maxps(auVar38,_DAT_014e2240);
            auVar37._0_4_ = ~uVar30 & (uint)(auVar39._0_4_ + _DAT_014e5300);
            auVar37._4_4_ = ~uVar31 & (uint)(auVar39._4_4_ + _UNK_014e5304);
            auVar37._8_4_ = ~-(uint)(_UNK_014e5308 < 0.0) & (uint)(auVar39._8_4_ + _UNK_014e5308);
            auVar37._12_4_ = ~-(uint)(_UNK_014e530c < 0.0) & (uint)(auVar39._12_4_ + _UNK_014e530c);
            auVar40._0_4_ = uVar30 & _DAT_014e3cb0;
            auVar40._4_4_ = uVar31 & _UNK_014e3cb4;
            auVar40._8_4_ = -(uint)(_UNK_014e5308 < 0.0) & _UNK_014e3cb8;
            auVar40._12_4_ = -(uint)(_UNK_014e530c < 0.0) & _UNK_014e3cbc;
            auVar40 = auVar40 | auVar37;
            uStack_d98 = CONCAT44((float)(iStack_cfc + _UNK_014e0d34) * _UNK_014e9bd4 *
                                  auVar40._4_4_,
                                  (float)(iStack_d00 + _DAT_014e0d30) * _DAT_014e9bd0 *
                                  auVar40._0_4_);
            uStack_d90 = CONCAT44((float)(iStack_cf4 + _UNK_014e0d3c) * _UNK_014e9bdc *
                                  auVar40._12_4_,
                                  (float)(iStack_cf8 + _UNK_014e0d38) * _UNK_014e9bd8 *
                                  auVar40._8_4_);
            uVar35 = func_0x0eee3b20();
            uVar36 = func_0x0eee3b20();
            uStack_ce0 = func_0x0eee3b20();
            uStack_cdc = *(undefined1 *)((long)puVar27 + 0x5c);
            uStack_cdb = *(undefined1 *)((long)puVar27 + 0x5d);
            iStack_f10 = *(int *)(puVar27 + 0xd);
            uStack_f18 = puVar27[0xc];
            iStack_f0c = (int)*(undefined8 *)((long)puVar27 + 0x6c);
            iStack_f08 = (int)((ulong)*(undefined8 *)((long)puVar27 + 0x6c) >> 0x20);
            iStack_f04 = *(int *)((long)puVar27 + 0x74);
            uStack_ce8 = CONCAT44(uVar36,uVar35);
            fVar32 = (float)func_0x0eee4390((float)*(int *)(puVar27 + 0xb) + fStack_e9c);
            fVar33 = (float)func_0x0eee4390();
            fVar34 = (float)func_0x0eee4390();
            uStack_f18 = CONCAT44((int)((ulong)uStack_f18 >> 0x20) + (int)fVar34,
                                  (int)uStack_f18 + (int)fVar33);
            iStack_f10 = iStack_f10 + (int)fVar32;
            iStack_f0c = iStack_f0c + (int)fVar33;
            iStack_f08 = iStack_f08 + (int)fVar34;
            iStack_f04 = iStack_f04 + (int)fVar32;
            if (param_9 == '\x01') {
              func_0x0eee2dd0(auStack_438,0,0x408);
              if (param_8 < (long *)0x400) {
                if (param_8 != (long *)0x0) {
                  func_0x0eee2ee0(auStack_438,param_7,param_8);
                }
                plStack_38 = param_8;
                auStack_438[(long)param_8] = 0;
              }
              if ((DAT_0f7b8fb8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f7b8fb8), iVar10 != 0))
              {
                func_0x0ee5ea20(&DAT_0f7b8f98);
                func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
                func_0x0410844d(&DAT_0f7b8fb8);
              }
              puStack_c28 = auStack_438;
              plStack_c20 = plStack_38;
              cVar9 = (**(code **)(_DAT_0f7b8f98 + 0xf8))(&DAT_0f7b8f98,&puStack_c28);
              plVar11 = plStack_e18;
              if (cVar9 == '\0') goto LAB_0b6d9ab0;
              uVar16 = *puVar27;
              uVar2 = puVar27[1];
              uStack_828 = (uint)uVar16 & 0xffff;
              uStack_7f8 = (uint)uVar2 & 0xffff;
              uStack_838 = CONCAT44(uStack_838._4_4_,(int)((ulong)uVar16 >> 0x10)) &
                           0xffffffff0000ffff;
              lStack_818 = CONCAT44(lStack_818._4_4_,(uint)(ushort)((ulong)uVar2 >> 0x30));
              uStack_808 = (undefined4)((ulong)uVar2 >> 0x10);
              puStack_848._0_4_ = (int)((ulong)uVar16 >> 0x20);
              func_0x0470d9a0(&uStack_b98,&UNK_01287ba2,0x28,0x122112,&puStack_848);
              puStack_848 = (undefined1 *)CONCAT44(puStack_848._4_4_,(undefined4)uStack_f18);
              uStack_838 = CONCAT44(uStack_838._4_4_,uStack_f18._4_4_);
              uStack_828 = iStack_f10;
              lStack_818 = lStack_b88;
              uStack_810 = uStack_b90;
              if ((uStack_b98 & 1) == 0) {
                lStack_818 = (long)&uStack_b98 + 1;
                uStack_810 = uStack_b98 >> 1 & 0x7f;
              }
              func_0x0470d9a0(&bStack_e50,&UNK_0127fc6a,0xd,0xd111,&puStack_848);
              uVar16 = uStack_d80;
              if ((uStack_b98 & 1) != 0) {
                func_0x0412a280(lStack_b88,uStack_b98 & 0xfffffffffffffffe);
              }
              uVar25 = (ulong)(bStack_e50 >> 1);
              puVar24 = &uStack_e4f;
              if ((bStack_e50 & 1) != 0) {
                uVar25 = uStack_e48;
                puVar24 = puStack_e40;
              }
              func_0x05d64270(&uStack_b98,puVar24,uVar25);
              puStack_cb0 = &UNK_0f435c20;
              iStack_ca0 = iStack_f10;
              uStack_ca8 = uStack_f18;
              iStack_c94 = iStack_f04;
              uStack_c9c = CONCAT44(iStack_f08,iStack_f0c);
              func_0x05d64720(auStack_a90);
              puStack_848 = auStack_a90;
              (**(code **)(puStack_cb0 + 0x48))(&puStack_cb0,&UNK_05d918f0,&puStack_848);
              func_0x05d68b30(&uStack_b98,uVar16,&uStack_d28,&puStack_cb0);
              func_0x05d64bf0(&plStack_ea8,&uStack_b98);
              auStack_e08 = (undefined1  [16])0x0;
              puStack_df8 = (undefined1 *)0x0;
              puStack_c38 = &UNK_0ef9fe28;
              puStack_c30 = auStack_e08;
              if (plStack_ea8 != (long *)0x0) {
                puStack_848 = (undefined1 *)((ulong)puStack_848 & 0xffffffffffff0000);
                func_0x0d6ba180(&puStack_848,plStack_ea8,&puStack_c38,0);
                if (((ulong)puStack_848 & 1) != 0) {
                  func_0x0412a280(uStack_838,(ulong)puStack_848 & 0xfffffffffffffffe);
                }
              }
              bVar17 = bStack_e50;
              uVar25 = uStack_e48;
              if ((bStack_e50 & 1) == 0) {
                uVar25 = (ulong)(bStack_e50 >> 1);
              }
              uVar18 = uVar25 + 5;
              if (0xfffffffffffffff7 < uVar18) goto LAB_0b6d9ccc;
              if (uVar18 < 0x17) {
                puStack_ee8 = (undefined1 *)0x0;
                stack0xfffffffffffff109 = SUB1615((undefined1  [16])0x0,1);
                auStack_ef8[0] = (char)uVar18 * '\x02';
                puVar15 = auStack_ef8 + 1;
                if (uVar25 != 0) goto LAB_0b6d91f4;
              }
              else {
                uVar28 = (uVar18 | 7) + 1;
                if ((uVar18 | 7) == 0x17) {
                  uVar28 = 0x1a;
                }
                puVar15 = (undefined1 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar28);
                if (puVar15 == (undefined1 *)0x0) {
                  func_0x0eec74c0(uVar28,0);
                }
                plStack_ef0 = (long *)uVar18;
                auStack_ef8 = (undefined1  [8])(uVar28 | 1);
                puStack_ee8 = puVar15;
LAB_0b6d91f4:
                puVar24 = &uStack_e4f;
                if ((bVar17 & 1) != 0) {
                  puVar24 = puStack_e40;
                }
                func_0x0eee2ee0(puVar15,puVar24,uVar25);
              }
              *(undefined4 *)(puVar15 + uVar25) = 0x646e752e;
              *(undefined2 *)(puVar15 + uVar25 + 4) = 0x6f;
              bStack_e98 = (byte)auStack_438;
              uStack_e97 = (undefined7)((ulong)auStack_438 >> 8);
              plStack_e90 = plStack_38;
              puStack_e88 = puStack_ee8;
              puStack_e80 = (undefined1 *)plStack_ef0;
              if ((auStack_ef8[0] & 1) == 0) {
                puStack_e88 = auStack_ef8 + 1;
                puStack_e80 = (undefined1 *)(ulong)(auStack_ef8[0] >> 1);
              }
              func_0x049151c0(&puStack_848,&bStack_e98,2,0x2f);
              if ((auStack_ef8[0] & 1) != 0) {
                func_0x0412a280(puStack_ee8,(ulong)auStack_ef8 & 0xfffffffffffffffe);
              }
              plVar11 = plStack_448;
              auStack_e38._0_16_ = (undefined1  [16])0x0;
              if ((DAT_0f7b8fb8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f7b8fb8), iVar10 != 0))
              {
                func_0x0ee5ea20(&DAT_0f7b8f98);
                func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
                func_0x0410844d(&DAT_0f7b8fb8);
              }
              ppuStack_c90 = &puStack_848;
              plStack_c88 = plVar11;
              (**(code **)(_DAT_0f7b8f98 + 0x10))
                        (auStack_ef8,&DAT_0f7b8f98,&ppuStack_c90,auStack_e38,0x12e,0);
              bStack_e58 = bStack_eb8;
              if (bStack_eb8 == 0) {
                bStack_e98 = auStack_ef8[0];
                uStack_e97 = auStack_ef8._1_7_;
                plStack_e90 = plStack_ef0;
                puStack_e88 = puStack_ee8;
                puStack_e80 = puStack_ee0;
                lStack_e78 = lStack_ed8;
                puStack_ee8 = (undefined1 *)0x0;
                puStack_ee0 = (undefined1 *)0x0;
                lStack_ed8 = 0;
                lStack_e70 = lStack_ed0;
                lStack_e68 = lStack_ec8;
                pbStack_e60 = pbStack_ec0;
                func_0x0b71c170(&bStack_e98);
                pbVar19 = pbStack_e60;
                auStack_db8._0_8_ = lStack_e68;
                auStack_dc8._8_8_ = lStack_e70;
                auStack_dc8._0_8_ = lStack_e78;
                auStack_dd8._8_8_ = puStack_e80;
                auStack_dd8._0_8_ = puStack_e88;
                uStack_bd8 = CONCAT71(uStack_e97,bStack_e98);
                plStack_bd0 = plStack_e90;
                puStack_e88 = (undefined1 *)0x0;
                puStack_e80 = (undefined1 *)0x0;
                lStack_e78 = 0;
                lStack_e70 = 0;
                lStack_e68 = 0;
                pbStack_e60 = (byte *)0x0;
                uStack_ba8 = 0;
                uStack_ba0 = 0;
                uStack_bb8 = 0;
                uStack_bb0 = 0;
                uStack_bc8 = 0;
                uStack_bc0 = 0;
                uStack_da8 = uStack_da8 & 0xffffffffffffff00;
                auStack_de8._1_7_ = uStack_e97;
                auStack_de8[0] = bStack_e98;
                auStack_de8._8_8_ = plStack_e90;
                auStack_db8._8_8_ = pbVar19;
                func_0x048e6d60(&uStack_bd8);
              }
              else {
                bVar29 = (auStack_e08[0] & 1) == 0;
                puVar15 = puStack_df8;
                if (bVar29) {
                  puVar15 = auStack_e08 + 1;
                }
                pbVar19 = (byte *)(ulong)(auStack_e08[0] >> 1);
                if (!bVar29) {
                  pbVar19 = (byte *)auStack_e08._8_8_;
                }
                func_0x0ee76e70(&ppuStack_c90,auStack_e38._0_8_,puVar15,pbVar19);
                bStack_eb8 = bStack_c50;
                if (bStack_c50 == 0) {
                  plStack_ef0 = plStack_c88;
                  auStack_ef8 = (undefined1  [8])ppuStack_c90;
                  puStack_ee8 = (undefined1 *)uStack_c80;
                  puStack_ee0 = (undefined1 *)uStack_c78;
                  lStack_ed8 = uStack_c70;
                  uStack_c80 = 0;
                  uStack_c78 = 0;
                  uStack_c70 = 0;
                  lStack_ed0 = uStack_c68;
                  lStack_ec8 = uStack_c60;
                  pbStack_ec0 = pbStack_c58;
                  func_0x0b71c230(auStack_ef8);
                  pbVar19 = pbStack_ec0;
                  auStack_db8._0_8_ = lStack_ec8;
                  auStack_dc8._8_8_ = lStack_ed0;
                  auStack_dc8._0_8_ = lStack_ed8;
                  auStack_dd8._8_8_ = puStack_ee0;
                  auStack_dd8._0_8_ = puStack_ee8;
                  uStack_c18 = auStack_ef8;
                  uStack_c10 = plStack_ef0;
                  puStack_ee8 = (undefined1 *)0x0;
                  puStack_ee0 = (undefined1 *)0x0;
                  lStack_ed8 = 0;
                  lStack_ed0 = 0;
                  lStack_ec8 = 0;
                  pbStack_ec0 = (byte *)0x0;
                  uStack_be8 = 0;
                  uStack_be0 = 0;
                  uStack_bf8 = 0;
                  uStack_bf0 = 0;
                  uStack_c08 = 0;
                  uStack_c00 = 0;
                  uStack_da8 = uStack_da8 & 0xffffffffffffff00;
                  auStack_de8 = _auStack_ef8;
                  auStack_db8._8_8_ = pbVar19;
                  func_0x048e6d60(&uStack_c18);
                }
                else {
                  auStack_de8 = (undefined1  [16])0x0;
                  auStack_dd8 = (undefined1  [16])0x0;
                  auStack_dc8 = (undefined1  [16])0x0;
                  auStack_db8 = (undefined1  [16])0x0;
                  uStack_da8 = 1;
                }
                lVar21 = lStack_ed0;
                if ((bStack_eb8 & 1) == 0) {
                  lVar20 = lStack_ec8;
                  if (lStack_ed0 != 0) {
                    while (lVar21 != lVar20) {
                      func_0x048b3e80(lVar20 + -0x40);
                      lVar20 = lVar20 + -0x40;
                    }
                    lStack_ec8 = lVar21;
                    func_0x0412a280(lStack_ed0,(long)pbStack_ec0 - lStack_ed0);
                  }
                  puVar7 = puStack_ee8;
                  puVar15 = puStack_ee0;
                  if (puStack_ee8 != (undefined1 *)0x0) {
                    for (; puVar7 != puVar15; puVar15 = puVar15 + -0x50) {
                      if ((puVar15[-8] == '\x01') && ((puVar15[-0x30] & 1) != 0)) {
                        func_0x0412a280(*(undefined8 *)(puVar15 + -0x20),
                                        *(ulong *)(puVar15 + -0x30) & 0xfffffffffffffffe);
                      }
                    }
                    puStack_ee0 = puVar7;
                    func_0x0412a280(puStack_ee8,lStack_ed8 - (long)puStack_ee8);
                  }
                }
              }
              lVar21 = lStack_e70;
              if (bStack_e58 == 0) {
                lVar20 = lStack_e68;
                if (lStack_e70 != 0) {
                  while (lVar21 != lVar20) {
                    func_0x048b3e80(lVar20 + -0x40);
                    lVar20 = lVar20 + -0x40;
                  }
                  lStack_e68 = lVar21;
                  func_0x0412a280(lStack_e70,(long)pbStack_e60 - lStack_e70);
                }
                puVar7 = puStack_e88;
                puVar15 = puStack_e80;
                if (puStack_e88 != (undefined1 *)0x0) {
                  for (; puVar7 != puVar15; puVar15 = puVar15 + -0x50) {
                    if ((puVar15[-8] == '\x01') && ((puVar15[-0x30] & 1) != 0)) {
                      func_0x0412a280(*(undefined8 *)(puVar15 + -0x20),
                                      *(ulong *)(puVar15 + -0x30) & 0xfffffffffffffffe);
                    }
                  }
                  puStack_e80 = puVar7;
                  func_0x0412a280(puStack_e88,lStack_e78 - (long)puStack_e88);
                }
              }
              if ((auStack_e38._0_8_ != 0) &&
                 (func_0x0ee56810(&bStack_e98,auStack_e38), lVar21 = lStack_e70, bStack_e58 == 0)) {
                lVar20 = lStack_e68;
                if (lStack_e70 != 0) {
                  while (lVar21 != lVar20) {
                    func_0x048b3e80(lVar20 + -0x40);
                    lVar20 = lVar20 + -0x40;
                  }
                  lStack_e68 = lVar21;
                  func_0x0412a280(lStack_e70,(long)pbStack_e60 - lStack_e70);
                }
                puVar7 = puStack_e88;
                puVar15 = puStack_e80;
                if (puStack_e88 != (undefined1 *)0x0) {
                  for (; puVar7 != puVar15; puVar15 = puVar15 + -0x50) {
                    if ((puVar15[-8] == '\x01') && ((puVar15[-0x30] & 1) != 0)) {
                      func_0x0412a280(*(undefined8 *)(puVar15 + -0x20),
                                      *(ulong *)(puVar15 + -0x30) & 0xfffffffffffffffe);
                    }
                  }
                  puStack_e80 = puVar7;
                  func_0x0412a280(puStack_e88,lStack_e78 - (long)puStack_e88);
                }
              }
              uVar16 = auStack_e38._8_8_;
              auStack_e38._8_8_ = 0;
              if ((long *)uVar16 != (long *)0x0) {
                (**(code **)(*(long *)uVar16 + 8))();
              }
              uVar16 = auStack_e38._0_8_;
              auVar6._8_8_ = 0;
              auVar6._0_8_ = auStack_e38._8_8_;
              auStack_e38._0_16_ = auVar6 << 0x40;
              if ((long *)uVar16 != (long *)0x0) {
                (**(code **)(*(long *)uVar16 + 8))();
              }
              puStack_848 = (undefined1 *)0x91c2da14ad92ec68;
              puStack_840 = &UNK_0140f690;
              uStack_838 = 1;
              uStack_830 = 0x4e0;
              bVar17 = (byte)uStack_da8;
              if ((byte)uStack_da8 == 0) {
                pbVar19 = &bStack_e98;
                func_0x0eedea30(pbVar19);
                func_0x0eedeb80(2,0x2d,auStack_de8,pbVar19,&puStack_848);
                if ((bStack_e98 & 1) != 0) {
                  func_0x0412a280(puStack_e88,CONCAT71(uStack_e97,bStack_e98) & 0xfffffffffffffffe);
                }
                bVar17 = (byte)uStack_da8;
              }
              if ((bVar17 & 1) == 0) {
                uVar16 = auStack_dc8._8_8_;
                if (auStack_dc8._8_8_ != 0) {
                  lVar21 = auStack_db8._0_8_;
                  if (auStack_dc8._8_8_ != auStack_db8._0_8_) {
                    do {
                      lVar21 = lVar21 + -0x40;
                      func_0x048b3e80(lVar21);
                    } while (lVar21 != uVar16);
                  }
                  auStack_db8._0_8_ = uVar16;
                  func_0x0412a280(auStack_dc8._8_8_,auStack_db8._8_8_ - auStack_dc8._8_8_);
                }
                uVar16 = auStack_dd8._0_8_;
                if (auStack_dd8._0_8_ != 0) {
                  for (lVar21 = auStack_dd8._8_8_; uVar16 != lVar21; lVar21 = lVar21 + -0x50) {
                    if ((*(char *)(lVar21 + -8) == '\x01') && ((*(byte *)(lVar21 + -0x30) & 1) != 0)
                       ) {
                      func_0x0412a280(*(undefined8 *)(lVar21 + -0x20),
                                      *(ulong *)(lVar21 + -0x30) & 0xfffffffffffffffe);
                    }
                  }
                  auStack_dd8._8_8_ = uVar16;
                  func_0x0412a280(auStack_dd8._0_8_,auStack_dc8._0_8_ - auStack_dd8._0_8_);
                }
              }
              if ((auStack_e08[0] & 1) != 0) {
                func_0x0412a280(puStack_df8,auStack_e08._0_8_ & 0xfffffffffffffffe);
              }
              plVar11 = plStack_ea8;
              plStack_ea8 = (long *)0x0;
              if (plVar11 != (long *)0x0) {
                (**(code **)(*plVar11 + 8))();
              }
              func_0x05d645d0(&uStack_b98);
              if ((bStack_e50 & 1) != 0) {
                func_0x0412a280(puStack_e40,CONCAT71(uStack_e4f,bStack_e50) & 0xfffffffffffffffe);
              }
              plVar11 = plStack_e18;
              if ((bVar17 & 1) != 0) goto LAB_0b6d9ab0;
            }
            else {
LAB_0b6d9ab0:
              pbVar19 = (byte *)&uStack_f18;
              func_0x05d66730(&puStack_9f0,uStack_d80,uStack_cb8,pbVar19,&uStack_d28);
              lStack_e20 = lStack_e20 + 1;
            }
            if ((uStack_d28 & 1) != 0) {
              func_0x0412a280(uStack_d18,uStack_d28 & 0xfffffffffffffffe);
            }
            if ((bStack_850 & 1) != 0) {
              func_0x05d645d0(&puStack_9f0);
            }
          }
          uVar23 = uVar23 + 1;
          lVar21 = auStack_d58._8_8_;
        } while (uVar23 < (ulong)(((long)(auStack_d48._0_8_ - auStack_d58._8_8_) >> 3) *
                                 -0x1111111111111111));
        if (lStack_e20 == 0) goto LAB_0b6d9c05;
        bVar17 = ~(byte)pbStack_e10 & 1;
      }
      *pbStack_cc0 = bVar17;
    }
  }
  if (puStack_f50 != (ulong *)0x0) {
    func_0x0412a280(puStack_f50,(long)puStack_f20 - (long)puStack_f50);
  }
LAB_0b6d9c26:
  if (plStack_d30 == (long *)0x0) goto LAB_0b6d9c59;
  goto LAB_0b6d9c33;
}


