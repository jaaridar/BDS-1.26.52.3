/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x63f7d90 (ELF vaddr 0x62f7d90)
 * Label: caller-of-callee
 * Body:  [[063f7d90, 063fa1c2] [063fa1d0, 063fa2ea] [063fa2f0, 063fa319] [063fa320, 063fa360] [063fa370, 063fa3a8] [063fa3b0, 063fa414] [063fa420, 063fa463] [063fa470, 063fac35] [063fac40, 063facc1] [063facd0, 063fafe3] [063faff0, 063fb176] [063fb180, 063fb378] [063fb380, 063fb61e] [063fbc3f, 063fbc6e]]
 * Ghidra: FUN_063f7d90
 */


/* WARNING: Removing unreachable block (ram,0x063fa7e3) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_063f7d90(byte *param_1,long param_2,long param_3)

{
  undefined8 *****pppppuVar1;
  long *plVar2;
  undefined8 ******ppppppuVar3;
  undefined8 ******ppppppuVar4;
  code *pcVar5;
  ushort uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 ******ppppppuVar10;
  undefined8 ******ppppppuVar11;
  undefined8 ******ppppppuVar12;
  undefined8 ******ppppppuVar13;
  char *pcVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  short *psVar17;
  undefined2 uVar18;
  byte bVar19;
  char cVar20;
  uint uVar21;
  int iVar22;
  long *plVar23;
  undefined8 *puVar24;
  long *plVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  undefined8 *******pppppppuVar29;
  undefined4 *puVar30;
  undefined *puVar31;
  ulong *puVar32;
  undefined8 uVar33;
  ulong uVar34;
  undefined8 *******pppppppuVar35;
  ulong uVar36;
  byte *pbVar37;
  long lVar38;
  ulong unaff_RBP;
  byte *pbVar39;
  byte *pbVar40;
  ulong uVar41;
  undefined8 *******pppppppuVar42;
  undefined8 *******pppppppuVar43;
  int *piVar44;
  short *psVar45;
  short *psVar46;
  char *pcVar47;
  char *pcVar48;
  undefined8 ******ppppppuVar49;
  byte *pbVar50;
  byte *pbVar51;
  bool bVar52;
  byte bStack_f81;
  byte *pbStack_f78;
  byte *pbStack_f70;
  byte *pbStack_f68;
  byte *pbStack_f58;
  byte *pbStack_f50;
  undefined *puStack_f48;
  byte *pbStack_f40;
  undefined8 uStack_f38;
  byte *pbStack_f30;
  char *pcStack_f28;
  undefined8 uStack_f20;
  undefined8 uStack_f18;
  undefined8 uStack_f10;
  undefined8 uStack_f08;
  undefined8 ******ppppppuStack_f00;
  undefined8 ******ppppppuStack_ef8;
  undefined *puStack_ef0;
  code *pcStack_ee8;
  undefined8 uStack_ee0;
  undefined8 uStack_ed8;
  undefined8 uStack_ed0;
  undefined8 uStack_ec8;
  undefined8 uStack_ec0;
  undefined8 uStack_eb8;
  undefined8 uStack_eb0;
  undefined8 uStack_ea8;
  undefined8 uStack_ea0;
  undefined8 uStack_e98;
  undefined4 uStack_e90;
  undefined1 uStack_e8c;
  byte *pbStack_e88;
  byte *pbStack_e80;
  long lStack_e78;
  byte *pbStack_e68;
  ulong uStack_e60;
  char *pcStack_e58;
  char *pcStack_e50;
  long lStack_e48;
  undefined4 uStack_e40;
  undefined4 uStack_e3c;
  long lStack_e38;
  byte **ppbStack_e30;
  byte bStack_e28;
  undefined1 auStack_e20 [8];
  ulong uStack_e18;
  ulong uStack_e10;
  byte *pbStack_e08;
  ulong uStack_e00;
  char *pcStack_df8;
  undefined8 uStack_de8;
  undefined8 uStack_de0;
  undefined *puStack_dd8;
  code *pcStack_dd0;
  undefined4 uStack_dc8;
  undefined1 uStack_dc4;
  byte bStack_dc2;
  undefined8 ******ppppppuStack_dc0;
  ulong uStack_db8;
  undefined8 *******apppppppuStack_db0 [3];
  code *pcStack_d98;
  int iStack_d90;
  char cStack_d8c;
  undefined8 uStack_d88;
  undefined8 uStack_d80;
  undefined8 uStack_d78;
  undefined8 uStack_d70;
  undefined8 uStack_d68;
  undefined8 uStack_d60;
  undefined8 uStack_d58;
  undefined8 uStack_d50;
  undefined8 uStack_d48;
  undefined4 uStack_d40;
  byte bStack_d3c;
  byte *apbStack_d38 [2];
  undefined8 ******ppppppuStack_d28;
  undefined8 ******ppppppuStack_d20;
  long lStack_d18;
  ulong uStack_d10;
  undefined8 *****pppppuStack_d08;
  byte bStack_d00;
  undefined7 uStack_cff;
  byte bStack_cf0;
  undefined7 uStack_cef;
  undefined1 auStack_ce8 [8];
  undefined8 uStack_ce0;
  ulong uStack_cd8;
  uint uStack_cd0;
  undefined1 auStack_cc8 [64];
  uint uStack_c88;
  undefined1 auStack_c80 [80];
  undefined8 uStack_c30;
  byte *pbStack_c28;
  long lStack_c20;
  undefined8 uStack_c18;
  undefined8 uStack_c10;
  undefined8 uStack_c08;
  undefined8 *puStack_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_bf0;
  long *plStack_bc8;
  undefined8 uStack_b98;
  long lStack_b88;
  ulong uStack_b80;
  ulong uStack_b78;
  char *pcStack_b70;
  long *plStack_b68;
  undefined8 uStack_b60;
  undefined8 *puStack_b58;
  undefined8 *puStack_b50;
  undefined8 uStack_b48;
  byte *pbStack_b40;
  undefined8 ******ppppppuStack_b38;
  ulong uStack_b30;
  byte *pbStack_b28;
  undefined8 ******ppppppuStack_b20;
  undefined *puStack_b18;
  code *pcStack_b10;
  undefined4 uStack_b08;
  undefined1 uStack_b04;
  ulong uStack_b00;
  ulong uStack_af8;
  undefined8 auStack_af0 [3];
  code *pcStack_ad8;
  undefined1 auStack_ac8 [80];
  byte *pbStack_a78;
  undefined8 ******ppppppuStack_a70;
  ulong uStack_a68;
  char cStack_a52;
  ulong uStack_a50;
  ulong uStack_a48;
  undefined8 *******apppppppuStack_a40 [3];
  code *pcStack_a28;
  int iStack_a20;
  char cStack_a1c;
  short *psStack_a18;
  short *psStack_a10;
  undefined8 ******ppppppuStack_a08;
  undefined8 ******ppppppuStack_a00;
  undefined8 ******appppppuStack_9f8 [2];
  char *pcStack_9e8;
  char *pcStack_9e0;
  byte bStack_9cc;
  byte *pbStack_9c8;
  undefined8 ******ppppppuStack_9c0;
  ulong uStack_9b8;
  ulong uStack_9a0;
  ulong uStack_998;
  undefined1 auStack_990 [24];
  code *pcStack_978;
  undefined1 auStack_968 [80];
  undefined2 auStack_918 [4];
  undefined8 uStack_910;
  long *plStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined1 uStack_8f0;
  undefined1 uStack_8ef;
  byte *pbStack_8e8;
  ulong uStack_8e0;
  undefined8 *puStack_8d8;
  undefined8 uStack_8d0;
  undefined8 *puStack_8c8;
  undefined8 uStack_8c0;
  byte *pbStack_8b8;
  ulong uStack_8b0;
  byte *pbStack_8a8;
  byte *pbStack_8a0;
  undefined *puStack_898;
  undefined4 uStack_890;
  undefined4 uStack_88c;
  undefined4 uStack_888;
  undefined4 uStack_884;
  undefined4 uStack_880;
  undefined4 uStack_87c;
  undefined4 uStack_878;
  undefined4 uStack_874;
  undefined8 ******ppppppuStack_870;
  undefined8 ******ppppppuStack_868;
  undefined2 uStack_860;
  undefined8 ******ppppppuStack_858;
  undefined8 ******ppppppuStack_850;
  undefined8 ******ppppppuStack_848;
  char cStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  char *pcStack_828;
  char *pcStack_820;
  ulong uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  byte **ppbStack_800;
  byte bStack_7f8;
  undefined1 *puStack_710;
  undefined8 uStack_708;
  undefined1 auStack_700 [384];
  undefined2 uStack_580;
  undefined1 uStack_57e;
  undefined8 uStack_57c;
  undefined8 uStack_570;
  undefined1 uStack_568;
  undefined4 uStack_558;
  undefined4 uStack_554;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  undefined8 uStack_548;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  undefined4 uStack_538;
  undefined4 uStack_534;
  undefined8 uStack_530;
  undefined4 uStack_528;
  undefined4 uStack_524;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  undefined8 uStack_518;
  undefined4 uStack_510;
  byte bStack_50c;
  byte bStack_500;
  undefined7 uStack_4ff;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined2 uStack_4b8;
  long lStack_4b0;
  long lStack_4a8;
  long lStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  char *pcStack_488;
  long lStack_480;
  undefined8 uStack_478;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  byte **ppbStack_460;
  undefined8 uStack_458;
  undefined8 ******ppppppuStack_450;
  ulong uStack_448;
  undefined8 uStack_418;
  undefined1 uStack_408;
  undefined2 uStack_406;
  undefined1 uStack_404;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  byte bStack_3c;
  
  lStack_c20 = param_3;
  if ((DAT_0f7b8fb8 == '\0') && (iVar22 = func_0x04108328(&DAT_0f7b8fb8), iVar22 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
  }
  pbVar50 = param_1 + 1;
  bVar52 = (*param_1 & 1) == 0;
  pbStack_8b8 = *(byte **)(param_1 + 0x10);
  if (bVar52) {
    pbStack_8b8 = pbVar50;
  }
  uStack_8b0 = (ulong)(*param_1 >> 1);
  if (!bVar52) {
    uStack_8b0 = *(ulong *)(param_1 + 8);
  }
  uVar21 = (**(code **)(_DAT_0f7b8f98 + 0xf8))(&DAT_0f7b8f98,&pbStack_8b8);
  bVar19 = (byte)uVar21;
  if (bVar19 == 0) {
    bVar52 = (*param_1 & 1) != 0;
    if (bVar52) {
      pbVar50 = *(byte **)(param_1 + 0x10);
    }
    uVar36 = (ulong)(*param_1 >> 1);
    if (bVar52) {
      uVar36 = *(ulong *)(param_1 + 8);
    }
    if (uVar36 < 0xfffffffffffffff8) {
      if (uVar36 < 0x17) {
        uStack_838 = (byte *)CONCAT71(uStack_838._1_7_,(char)uVar36 * '\x02');
        pcVar47 = (char *)((long)&uStack_838 + 1);
        if (uVar36 == 0) goto LAB_063f849c;
      }
      else {
        uVar26 = 0x1a;
        if ((uVar36 | 7) != 0x17) {
          uVar26 = (uVar36 | 7) + 1;
        }
        pcVar47 = (char *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar26);
        if (pcVar47 == (char *)0x0) {
          func_0x0eec74c0(uVar26,0);
        }
        uStack_838 = (byte *)(uVar26 | 1);
        uStack_830 = (byte *)uVar36;
        pcStack_828 = pcVar47;
      }
      func_0x0eee2ee0(pcVar47,pbVar50,uVar36);
LAB_063f849c:
      pcVar47[uVar36] = '\0';
      puVar32 = (ulong *)FUN_0412f0e0(&uStack_838,0,&UNK_0123edca,0x1f);
      pcStack_488 = (char *)puVar32[2];
      uStack_498 = (byte *)*puVar32;
      uStack_490 = (long *)puVar32[1];
      *puVar32 = 0;
      puVar32[1] = 0;
      puVar32[2] = 0;
      if (((ulong)uStack_838 & 1) != 0) {
        func_0x0412a280(pcStack_828,(ulong)uStack_838 & 0xfffffffffffffffe);
      }
      uVar36 = (ulong)uStack_498;
      puVar30 = *(undefined4 **)(param_2 + 8);
      if (puVar30 < *(undefined4 **)(param_2 + 0x10)) {
        if (((ulong)uStack_498 & 1) == 0) {
          *(char **)(puVar30 + 4) = pcStack_488;
          *puVar30 = (undefined4)uStack_498;
          puVar30[1] = uStack_498._4_4_;
          puVar30[2] = (undefined4)uStack_490;
          puVar30[3] = uStack_490._4_4_;
        }
        else {
          func_0x0412e5e0(puVar30,pcStack_488,uStack_490);
        }
        *(undefined4 **)(param_2 + 8) = puVar30 + 6;
        *(undefined4 **)(param_2 + 8) = puVar30 + 6;
      }
      else {
        uVar33 = func_0x04909a40(param_2,&uStack_498);
        *(undefined8 *)(param_2 + 8) = uVar33;
        uVar36 = (ulong)uStack_498;
      }
      if ((uVar36 & 1) == 0) {
        return (ulong)uVar21;
      }
      func_0x0412a280(pcStack_488,(ulong)uStack_498 & 0xfffffffffffffffe);
      return (ulong)uVar21;
    }
    FUN_04882e30();
LAB_063fb562:
    iVar22 = func_0x04108328(&DAT_0f774768);
    if (iVar22 != 0) {
      func_0x0ed58ba0(0xf7746f8);
      func_0x0eee2f40(&SUB_04904f60,0xf7746f8,0xf53dab8);
      func_0x0410844d(&DAT_0f774768);
      unaff_RBP = 0xff00ffffffffffff;
      pbVar50 = (byte *)0x80000000000000;
    }
  }
  else {
    pbStack_f50 = pbVar50;
    pbStack_c28 = param_1;
    func_0x05d54750(&uStack_498,&UNK_0f02ff98);
    uStack_c18 = 0;
    uStack_c10 = 0;
    uStack_c08 = 0;
    puStack_c00 = &uStack_bf8;
    uStack_bf8 = 0;
    uStack_bf0 = 0;
    plStack_bc8 = (long *)0x0;
    uStack_b98 = 0;
    lStack_b88 = (long)uStack_498;
    uStack_b80 = 0;
    uVar36 = (ulong)uStack_490;
    if (((ulong)uStack_490 >> 0x37 & 1) != 0) {
      uVar36 = (ulong)uStack_490 & 0xff00ffffffffffff;
      lVar28 = *(long *)(uVar36 - 8);
      lVar27 = lVar28 + 9;
      plVar23 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar27,8);
      if (lVar27 != 0 && plVar23 == (long *)0x0) {
        func_0x0eec74c0(lVar27,8);
      }
      *plVar23 = lVar28;
      func_0x0eee2f00(plVar23 + 1,uVar36,lVar28);
      *(undefined1 *)((long)plVar23 + lVar28 + 8) = 0;
      uVar36 = (ulong)(plVar23 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_b78 = 0;
    uStack_b80 = uVar36;
    if (((ulong)pcStack_488 & 0x80000000000000) == 0) {
      uStack_b78 = (ulong)pcStack_488;
      pcStack_b70 = (char *)0x0;
      plStack_b68 = (long *)0x0;
      uStack_b60 = 0;
      puStack_b58 = (undefined8 *)0x0;
      puStack_b50 = (undefined8 *)0x0;
      uStack_b48 = 0;
      pbStack_b40 = (byte *)0x0;
      ppppppuStack_b38 = (undefined8 ******)0x0;
      uStack_b30 = 0;
    }
    else {
      uVar36 = (ulong)pcStack_488 & 0xff00ffffffffffff;
      lVar28 = *(long *)(uVar36 - 8);
      lVar27 = lVar28 + 9;
      plVar23 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar27,8);
      if (lVar27 != 0 && plVar23 == (long *)0x0) {
        func_0x0eec74c0(lVar27,8);
      }
      *plVar23 = lVar28;
      func_0x0eee2f00(plVar23 + 1,uVar36,lVar28);
      *(undefined1 *)((long)plVar23 + lVar28 + 8) = 0;
      uStack_b78 = (ulong)(plVar23 + 1) & 0xff00ffffffffffff | 0x80000000000000;
      pbStack_b40 = (byte *)0x0;
      ppppppuStack_b38 = (undefined8 ******)0x0;
      puStack_b50 = (undefined8 *)0x0;
      uStack_b48 = 0;
      uStack_b60 = 0;
      puStack_b58 = (undefined8 *)0x0;
      pcStack_b70 = (char *)0x0;
      plStack_b68 = (long *)0x0;
      uStack_b30 = 0;
      if (((ulong)pcStack_488 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)pcStack_488 & 0xff00ffffffffffff) - 8);
      }
    }
    pbVar50 = (byte *)0x80000000000000;
    unaff_RBP = 0xff00ffffffffffff;
    pcStack_488 = (char *)0x0;
    if (((ulong)uStack_490 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)uStack_490 & 0xff00ffffffffffff) - 8);
    }
    bStack_f81 = bVar19;
    if (DAT_0f774768 == '\0') goto LAB_063fb562;
  }
  plVar23 = plStack_b68;
  pcStack_b70 = (char *)0x0;
  plStack_b68 = (long *)0x0;
  if (plVar23 != (long *)0x0) {
    LOCK();
    plVar25 = plVar23 + 1;
    lVar27 = *plVar25;
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (lVar27 == 0) {
      (**(code **)(*plVar23 + 0x10))(plVar23);
      FUN_0412c2d0(plVar23);
    }
  }
  plVar23 = plStack_b68;
  plStack_b68 = (long *)_DAT_0f774708;
  pcStack_b70 = _DAT_0f774700;
  uStack_b60 = 0;
  if (_DAT_0f774708 != 0) {
    LOCK();
    *(long *)(_DAT_0f774708 + 8) = *(long *)(_DAT_0f774708 + 8) + 1;
    UNLOCK();
  }
  if (plVar23 != (long *)0x0) {
    LOCK();
    plVar25 = plVar23 + 1;
    lVar27 = *plVar25;
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (lVar27 == 0) {
      (**(code **)(*plVar23 + 0x10))(plVar23);
      FUN_0412c2d0(plVar23);
    }
  }
  if (pcStack_b70 != (char *)0x0) {
    uStack_b60 = 0xf7746f8;
  }
  func_0x05d54750(&pbStack_a78,&UNK_0f02ff98);
  if ((pcStack_b70 == (char *)0x0) || (*pcStack_b70 == '\0')) {
    cVar20 = FUN_0eeddcf0(&UNK_013c6966,&UNK_01259d39,0xf5,&UNK_01259d48,&UNK_014972cc);
    pbVar50 = (byte *)0x80000000000000;
    if (cVar20 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  pbStack_b40 = pbStack_a78;
  if (((ulong)ppppppuStack_b38 & (ulong)pbVar50) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)ppppppuStack_b38 & unaff_RBP) - 8);
  }
  ppppppuStack_b38 = (undefined8 ******)0x0;
  ppppppuVar49 = ppppppuStack_a70;
  if (((ulong)ppppppuStack_a70 & 0x80000000000000) != 0) {
    uVar36 = (ulong)ppppppuStack_a70 & unaff_RBP;
    lVar28 = *(long *)(uVar36 - 8);
    lVar27 = lVar28 + 9;
    plVar23 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar27,8);
    if (lVar27 != 0 && plVar23 == (long *)0x0) {
      func_0x0eec74c0(lVar27,8);
    }
    *plVar23 = lVar28;
    func_0x0eee2f00(plVar23 + 1,uVar36,lVar28);
    *(undefined1 *)((long)plVar23 + lVar28 + 8) = 0;
    ppppppuVar49 = (undefined8 ******)((ulong)(plVar23 + 1) & unaff_RBP | 0x80000000000000);
  }
  ppppppuStack_b38 = ppppppuVar49;
  if ((uStack_b30 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_b30 & unaff_RBP) - 8);
  }
  uStack_b30 = 0;
  uVar36 = uStack_a68;
  if ((uStack_a68 & 0x80000000000000) != 0) {
    uVar36 = uStack_a68 & unaff_RBP;
    lVar28 = *(long *)(uVar36 - 8);
    lVar27 = lVar28 + 9;
    plVar23 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar27,8);
    if (lVar27 != 0 && plVar23 == (long *)0x0) {
      func_0x0eec74c0(lVar27,8);
    }
    *plVar23 = lVar28;
    func_0x0eee2f00(plVar23 + 1,uVar36,lVar28);
    *(undefined1 *)((long)plVar23 + lVar28 + 8) = 0;
    uVar36 = (ulong)(plVar23 + 1) & unaff_RBP | 0x80000000000000;
  }
  uVar33 = uStack_b60;
  plVar23 = plStack_b68;
  pcVar47 = pcStack_b70;
  uStack_830 = (byte *)&lStack_b88;
  uStack_838 = (byte *)&uStack_c18;
  pcStack_828 = pcStack_b70;
  pcStack_820 = (char *)plStack_b68;
  if (plStack_b68 != (long *)0x0) {
    LOCK();
    *(long *)((long)plStack_b68 + 8) = *(long *)((long)plStack_b68 + 8) + 1;
    UNLOCK();
  }
  uStack_818 = uStack_b60;
  uStack_b30 = uVar36;
  if (puStack_b58 == (undefined8 *)0x0) {
    puVar24 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar24 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar24 = 0;
    puStack_b58 = puVar24;
  }
  uStack_810 = puStack_b58;
  if (puStack_b50 == (undefined8 *)0x0) {
    puVar24 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar24 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar24 = 0;
    puStack_b50 = puVar24;
  }
  ppbStack_800 = &pbStack_b40;
  uStack_498 = uStack_838;
  uStack_490 = (long *)uStack_830;
  pcStack_488 = pcVar47;
  lStack_480 = (long)plVar23;
  pcStack_828 = (char *)0x0;
  pcStack_820 = (char *)0x0;
  uStack_478 = uVar33;
  uStack_818 = 0;
  uStack_808._0_4_ = SUB84(puStack_b50,0);
  uStack_808._4_4_ = (undefined4)((ulong)puStack_b50 >> 0x20);
  uStack_470 = (undefined4)uStack_810;
  uStack_46c = uStack_810._4_4_;
  uStack_468 = (undefined4)uStack_808;
  uStack_464 = uStack_808._4_4_;
  uStack_458 = pbStack_a78;
  ppppppuStack_450 = (undefined8 ******)0x0;
  ppppppuVar49 = ppppppuStack_a70;
  uStack_808 = puStack_b50;
  ppbStack_460 = ppbStack_800;
  if (((ulong)ppppppuStack_a70 & 0x80000000000000) != 0) {
    uVar36 = (ulong)ppppppuStack_a70 & unaff_RBP;
    lVar28 = *(long *)(uVar36 - 8);
    lVar27 = lVar28 + 9;
    plVar23 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar27,8);
    if (lVar27 != 0 && plVar23 == (long *)0x0) {
      func_0x0eec74c0(lVar27,8);
    }
    *plVar23 = lVar28;
    func_0x0eee2f00(plVar23 + 1,uVar36,lVar28);
    *(undefined1 *)((long)plVar23 + lVar28 + 8) = 0;
    ppppppuVar49 = (undefined8 ******)((ulong)(plVar23 + 1) & unaff_RBP | 0x80000000000000);
  }
  uStack_448 = 0;
  uVar36 = uStack_a68;
  ppppppuStack_450 = ppppppuVar49;
  if ((uStack_a68 & 0x80000000000000) != 0) {
    uVar36 = uStack_a68 & unaff_RBP;
    lVar28 = *(long *)(uVar36 - 8);
    lVar27 = lVar28 + 9;
    plVar23 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar27,8);
    if (lVar27 != 0 && plVar23 == (long *)0x0) {
      func_0x0eec74c0(lVar27,8);
    }
    *plVar23 = lVar28;
    func_0x0eee2f00(plVar23 + 1,uVar36,lVar28);
    *(undefined1 *)((long)plVar23 + lVar28 + 8) = 0;
    unaff_RBP = 0xff00ffffffffffff;
    uVar36 = (ulong)(plVar23 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  plVar23 = uStack_490;
  uStack_418 = 0;
  uStack_408 = 1;
  uStack_406 = 0xfffc;
  uStack_404 = 1;
  pbStack_f40 = uStack_498;
  pbStack_9c8 = (byte *)*uStack_490;
  ppppppuStack_9c0 = (undefined8 ******)uStack_490[1];
  uStack_448 = uVar36;
  if (((ulong)ppppppuStack_9c0 & 0x80000000000000) != 0) {
    lVar28 = *(long *)(((ulong)ppppppuStack_9c0 & unaff_RBP) - 8);
    lVar27 = lVar28 + 9;
    plVar25 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar27,8);
    if (lVar27 != 0 && plVar25 == (long *)0x0) {
      func_0x0eec74c0(lVar27,8);
    }
    *plVar25 = lVar28;
    func_0x0eee2f00(plVar25 + 1,(ulong)ppppppuStack_9c0 & unaff_RBP,lVar28);
    *(undefined1 *)((long)plVar25 + lVar28 + 8) = 0;
    ppppppuStack_9c0 = (undefined8 ******)((ulong)(plVar25 + 1) & unaff_RBP | 0x80000000000000);
  }
  uStack_9b8 = 0;
  uVar36 = plVar23[2];
  if ((uVar36 & 0x80000000000000) != 0) {
    lVar28 = *(long *)((uVar36 & unaff_RBP) - 8);
    lVar27 = lVar28 + 9;
    plVar25 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar27,8);
    if (lVar27 != 0 && plVar25 == (long *)0x0) {
      func_0x0eec74c0(lVar27,8);
    }
    *plVar25 = lVar28;
    func_0x0eee2f00(plVar25 + 1,uVar36 & unaff_RBP,lVar28);
    *(undefined1 *)((long)plVar25 + lVar28 + 8) = 0;
    uVar36 = (ulong)(plVar25 + 1) & unaff_RBP | 0x80000000000000;
  }
  plVar25 = uStack_490;
  uVar26 = (ulong)ppppppuStack_450 & 0x80000000000000;
  uVar6 = (ushort)((ulong)ppppppuStack_450 >> 0x30);
  uStack_9b8 = uVar36;
  if (uVar26 == 0) {
    if (((ulong)ppppppuStack_450 & 0x7f000000000000) == 0) goto LAB_063f89a6;
    uVar34 = (ulong)(uVar6 & 0x7f);
LAB_063f8954:
    if ((((uVar34 != 4) || (*(int *)((ulong)ppppppuStack_450 & 0xff00ffffffffffff) != 0x61746562))
        || ((short)uStack_458 != 9999)) ||
       ((uStack_458._2_2_ != 9999 || (uStack_458._4_2_ != 9999)))) goto LAB_063f89a6;
LAB_063f8bcf:
    if (uVar26 == 0) {
      if (((ulong)ppppppuStack_450 & 0x7f000000000000) == 0) goto LAB_063f8e3a;
      uVar34 = (ulong)(uVar6 & 0x7f);
    }
    else {
      uVar34 = *(ulong *)(((ulong)ppppppuStack_450 & 0xff00ffffffffffff) - 8);
      if (uVar34 == 0) goto LAB_063f8e3a;
    }
    if ((((uVar34 != 4) ||
         (piVar44 = (int *)((ulong)ppppppuStack_450 & 0xff00ffffffffffff), *piVar44 != 0x61746562))
        || ((short)uStack_458 != 9999)) ||
       ((uStack_458._2_2_ != 9999 || (uStack_458._4_2_ != 9999)))) goto LAB_063f8e3a;
    pbStack_9c8 = uStack_458;
    if (((ulong)ppppppuStack_9c0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)ppppppuStack_9c0 & 0xff00ffffffffffff) - 8);
      piVar44 = (int *)((ulong)ppppppuStack_450 & 0xff00ffffffffffff);
      uVar26 = (ulong)ppppppuStack_450 & 0x80000000000000;
    }
    ppppppuStack_9c0 = (undefined8 ******)0x0;
    ppppppuVar49 = ppppppuStack_450;
    if (uVar26 != 0) {
      lVar28 = *(long *)(piVar44 + -2);
      lVar27 = lVar28 + 9;
      plVar23 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar27,8);
      if (lVar27 != 0 && plVar23 == (long *)0x0) {
        func_0x0eec74c0(lVar27,8);
      }
      *plVar23 = lVar28;
      func_0x0eee2f00(plVar23 + 1,piVar44,lVar28);
      *(undefined1 *)((long)plVar23 + lVar28 + 8) = 0;
      ppppppuVar49 = (undefined8 ******)
                     ((ulong)(plVar23 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    ppppppuStack_9c0 = ppppppuVar49;
    if ((uStack_9b8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_9b8 & 0xff00ffffffffffff) - 8);
    }
    uStack_9b8 = 0;
    uVar36 = uStack_448;
    if ((uStack_448 & 0x80000000000000) == 0) goto LAB_063f8e3a;
    uVar36 = uStack_448 & 0xff00ffffffffffff;
    lVar28 = *(long *)(uVar36 - 8);
    lVar27 = lVar28 + 9;
    plVar23 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar27,8);
    if (lVar27 != 0 && plVar23 == (long *)0x0) {
      func_0x0eec74c0(lVar27,8);
    }
  }
  else {
    uVar34 = *(ulong *)(((ulong)ppppppuStack_450 & 0xff00ffffffffffff) - 8);
    if (uVar34 != 0) goto LAB_063f8954;
LAB_063f89a6:
    uVar34 = plVar23[1];
    if ((uVar34 & 0x80000000000000) != 0) {
      uVar41 = *(ulong *)((uVar34 & 0xff00ffffffffffff) - 8);
      if (uVar41 != 0) goto LAB_063f89e1;
      goto LAB_063f8bcf;
    }
    if ((uVar34 & 0x7f000000000000) == 0) goto LAB_063f8bcf;
    uVar41 = (ulong)((ushort)(uVar34 >> 0x30) & 0x7f);
LAB_063f89e1:
    if (((uVar41 != 4) || (*(int *)(uVar34 & 0xff00ffffffffffff) != 0x61746562)) ||
       (((short)*plVar23 != 9999 ||
        ((*(short *)((long)plVar23 + 2) != 9999 || (*(short *)((long)plVar23 + 4) != 9999))))))
    goto LAB_063f8bcf;
    pbStack_9c8 = (byte *)*uStack_490;
    if (((ulong)ppppppuStack_9c0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)ppppppuStack_9c0 & 0xff00ffffffffffff) - 8);
    }
    ppppppuStack_9c0 = (undefined8 ******)0x0;
    ppppppuVar49 = (undefined8 ******)plVar25[1];
    if (((ulong)ppppppuVar49 & 0x80000000000000) != 0) {
      lVar28 = *(long *)(((ulong)ppppppuVar49 & 0xff00ffffffffffff) - 8);
      lVar27 = lVar28 + 9;
      plVar23 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar27,8);
      if (lVar27 != 0 && plVar23 == (long *)0x0) {
        func_0x0eec74c0(lVar27,8);
      }
      *plVar23 = lVar28;
      func_0x0eee2f00(plVar23 + 1,(ulong)ppppppuVar49 & 0xff00ffffffffffff,lVar28);
      *(undefined1 *)((long)plVar23 + lVar28 + 8) = 0;
      ppppppuVar49 = (undefined8 ******)
                     ((ulong)(plVar23 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    ppppppuStack_9c0 = ppppppuVar49;
    if ((uStack_9b8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_9b8 & 0xff00ffffffffffff) - 8);
    }
    uStack_9b8 = 0;
    uVar36 = plVar25[2];
    if ((uVar36 & 0x80000000000000) == 0) goto LAB_063f8e3a;
    uVar36 = uVar36 & 0xff00ffffffffffff;
    lVar28 = *(long *)(uVar36 - 8);
    lVar27 = lVar28 + 9;
    plVar23 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar27,8);
    if (lVar27 != 0 && plVar23 == (long *)0x0) {
      func_0x0eec74c0(lVar27,8);
    }
  }
  *plVar23 = lVar28;
  func_0x0eee2f00(plVar23 + 1,uVar36,lVar28);
  *(undefined1 *)((long)plVar23 + lVar28 + 8) = 0;
  uVar36 = (ulong)(plVar23 + 1) & 0xff00ffffffffffff | 0x80000000000000;
LAB_063f8e3a:
  uStack_9b8 = uVar36;
  func_0x0d6b3300(&uStack_f38,&uStack_458,&pbStack_9c8,1);
  if ((CONCAT44(uStack_46c,uStack_470) == 0) &&
     (cVar20 = FUN_0eeddcf0(&UNK_012a4e2b,&UNK_01495f35,0x16d,&UNK_013fa33d,&UNK_0119ea09),
     cVar20 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((pcStack_488 == (char *)0x0) || (*pcStack_488 != '\x01')) {
    cVar20 = FUN_0eeddcf0(&UNK_011b95c6,&UNK_0119d79e,0x16e,&UNK_013fa33d,&UNK_0119ea09);
    if (cVar20 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar31 = (undefined *)CONCAT44(uStack_46c,uStack_470);
    if ((pcStack_488 == (char *)0x0) &&
       (cVar20 = FUN_0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
       cVar20 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  else {
    puVar31 = (undefined *)CONCAT44(uStack_46c,uStack_470);
  }
  if ((*pcStack_488 == '\0') &&
     (cVar20 = FUN_0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e),
     cVar20 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  uVar33 = uStack_478;
  plVar23 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar23 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  pbStack_b28 = uStack_458;
  pbStack_f58 = uStack_458;
  ppppppuVar49 = ppppppuStack_450;
  puStack_f48 = puVar31;
  if (((ulong)ppppppuStack_450 & 0x80000000000000) != 0) {
    uVar36 = (ulong)ppppppuStack_450 & 0xff00ffffffffffff;
    lVar28 = *(long *)(uVar36 - 8);
    lVar27 = lVar28 + 9;
    plVar25 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar27,8);
    if (lVar27 != 0 && plVar25 == (long *)0x0) {
      func_0x0eec74c0(lVar27,8);
    }
    *plVar25 = lVar28;
    func_0x0eee2f00(plVar25 + 1,uVar36,lVar28);
    *(undefined1 *)((long)plVar25 + lVar28 + 8) = 0;
    ppppppuVar49 = (undefined8 ******)((ulong)(plVar25 + 1) & 0xff00ffffffffffff | 0x80000000000000)
    ;
  }
  puStack_b18 = (undefined *)0x0;
  puStack_dd8 = (undefined *)uStack_448;
  if ((uStack_448 & 0x80000000000000) != 0) {
    uStack_c30 = uVar33;
    uVar36 = uStack_448 & 0xff00ffffffffffff;
    lVar28 = *(long *)(uVar36 - 8);
    lVar27 = lVar28 + 9;
    ppppppuStack_b20 = ppppppuVar49;
    plVar25 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar27,8);
    if (lVar27 != 0 && plVar25 == (long *)0x0) {
      func_0x0eec74c0(lVar27,8);
    }
    *plVar25 = lVar28;
    func_0x0eee2f00(plVar25 + 1,uVar36,lVar28);
    *(undefined1 *)((long)plVar25 + lVar28 + 8) = 0;
    puStack_dd8 = (undefined *)((ulong)(plVar25 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    uVar33 = uStack_c30;
  }
  uVar18 = uStack_406;
  uStack_810 = uStack_f10;
  uStack_818 = (ulong)uStack_f18;
  pcStack_828 = pcStack_f28;
  uStack_830 = pbStack_f30;
  pppppuStack_d08 = (undefined8 *****)CONCAT62(pppppuStack_d08._2_6_,(undefined2)uStack_f08);
  ppppppuStack_b20 = (undefined8 ******)0x0;
  puStack_b18 = (undefined *)0x0;
  apbStack_d38[0] = uStack_f38;
  pbStack_f30 = (byte *)0x0;
  pcStack_f28 = (char *)0x0;
  uStack_838 = uStack_f38;
  apbStack_d38[1] = (byte *)0x0;
  ppppppuStack_d28 = (undefined8 ******)0x0;
  ppppppuStack_d20 = uStack_f20;
  lStack_d18 = 0;
  uStack_f18 = (undefined8 ******)0x0;
  uStack_f10 = (undefined8 ******)0x0;
  uStack_d10 = 0;
  uStack_808 = (undefined8 *)CONCAT62(uStack_808._2_6_,(undefined2)uStack_f08);
  uStack_de8 = (undefined8 ******)pbStack_f58;
  uStack_de0 = ppppppuVar49;
  func_0x0d6a8a30(plVar23,uVar33,&uStack_de8,&uStack_838);
  if (((ulong)uStack_810 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)uStack_810 & 0xff00ffffffffffff) - 8);
  }
  uStack_810 = (undefined8 *)0x0;
  if ((uStack_818 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_818 & 0xff00ffffffffffff) - 8);
  }
  uStack_818 = 0;
  if (((ulong)pcStack_828 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)pcStack_828 & 0xff00ffffffffffff) - 8)
    ;
  }
  pcStack_828 = (char *)0x0;
  if (((ulong)uStack_830 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)uStack_830 & 0xff00ffffffffffff) - 8);
  }
  uStack_830 = (byte *)0x0;
  if (((ulong)puStack_dd8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)puStack_dd8 & 0xff00ffffffffffff) - 8)
    ;
  }
  puStack_dd8 = (undefined *)0x0;
  if (((ulong)uStack_de0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)uStack_de0 & 0xff00ffffffffffff) - 8);
  }
  *plVar23 = (long)&UNK_0f031b48;
  plVar23[0xe] = (long)puStack_f48;
  *(undefined2 *)(plVar23 + 0xf) = uVar18;
  *(undefined1 *)((long)plVar23 + 0x7a) = 1;
  uStack_838 = (byte *)plVar23;
  if (((ulong)uStack_f10 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)uStack_f10 & 0xff00ffffffffffff) - 8);
  }
  pbVar50 = pbStack_f40;
  uStack_f10 = (undefined8 ******)0x0;
  if (((ulong)uStack_f18 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)uStack_f18 & 0xff00ffffffffffff) - 8);
  }
  uStack_f18 = (undefined8 ******)0x0;
  if (((ulong)pcStack_f28 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)pcStack_f28 & 0xff00ffffffffffff) - 8)
    ;
  }
  pcStack_f28 = (undefined *)0x0;
  if (((ulong)pbStack_f30 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)pbStack_f30 & 0xff00ffffffffffff) - 8)
    ;
  }
  if ((uStack_9b8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_9b8 & 0xff00ffffffffffff) - 8);
  }
  uStack_9b8 = 0;
  if (((ulong)ppppppuStack_9c0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppppppuStack_9c0 & 0xff00ffffffffffff) - 8);
  }
  plVar25 = *(long **)pbVar50;
  plVar2 = *(long **)(pbVar50 + 8);
  if (plVar25 != plVar2) {
    do {
      cVar20 = func_0x04fa7a10(*plVar25 + 0x20,plVar23 + 7);
      if (cVar20 == '\0') break;
      plVar25 = plVar25 + 1;
    } while (plVar25 != plVar2);
  }
  func_0x0d6af860(pbVar50,plVar25,&uStack_838);
  plVar23 = (long *)uStack_838;
  pbVar50 = pbStack_f50;
  uStack_838 = (byte *)0x0;
  if (plVar23 != (long *)0x0) {
    (**(code **)(*plVar23 + 8))();
  }
  uStack_408 = 0;
  func_0x063f7c30(&uStack_498);
  if ((uStack_a68 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_a68 & 0xff00ffffffffffff) - 8);
  }
  uStack_a68 = 0;
  if (((ulong)ppppppuStack_a70 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppppppuStack_a70 & 0xff00ffffffffffff) - 8);
  }
  bVar52 = (*pbStack_c28 & 1) != 0;
  uStack_838 = pbVar50;
  if (bVar52) {
    uStack_838 = *(byte **)(pbStack_c28 + 0x10);
  }
  uStack_830 = (byte *)(ulong)(*pbStack_c28 >> 1);
  if (bVar52) {
    uStack_830 = (byte *)*(ulong *)(pbStack_c28 + 8);
  }
  pcStack_828 = "instances";
  pcStack_820 = (char *)0x9;
  func_0x049151c0(&uStack_498,&uStack_838,2,0x2f);
  uStack_8c0 = uStack_98;
  puStack_8c8 = &uStack_498;
  cVar20 = (**(code **)(_DAT_0f7b8f98 + 0xf8))(&DAT_0f7b8f98,&puStack_8c8);
  if (cVar20 != '\0') {
    pbStack_e88 = (byte *)0x0;
    pbStack_e80 = (byte *)0x0;
    lStack_e78 = 0;
    uStack_8d0 = uStack_98;
    puStack_8d8 = &uStack_498;
    (**(code **)(_DAT_0f7b8f98 + 0xb8))(&uStack_838,&DAT_0f7b8f98,&pbStack_e88,&puStack_8d8);
    lVar27 = (long)uStack_810;
    pbVar50 = pbStack_e80;
    if (bStack_7f8 == 1) {
      if (pbStack_e88 != pbStack_e80) {
        pbStack_f40 = _UNK_0eeed6a8;
        pbStack_f58 = _UNK_0eeed6c0;
        puStack_f48 = &UNK_0eeed150;
        pbStack_f50 = &UNK_0eeece20;
        pbVar51 = pbStack_e88;
        do {
          bVar52 = (*pbVar51 & 1) != 0;
          pbStack_8e8 = pbVar51 + 1;
          if (bVar52) {
            pbStack_8e8 = *(byte **)(pbVar51 + 0x10);
          }
          uStack_8e0 = (ulong)(*pbVar51 >> 1);
          if (bVar52) {
            uStack_8e0 = *(ulong *)(pbVar51 + 8);
          }
          (**(code **)(_DAT_0f7b8f98 + 0x60))(&uStack_838,&DAT_0f7b8f98,&pbStack_8e8);
          apbStack_d38[0] = (byte *)0xd1cff2edc0381001;
          apbStack_d38[1] = &UNK_0140f690;
          ppppppuStack_d28 = (undefined8 ******)0x1;
          ppppppuStack_d20 = (undefined8 ******)CONCAT44(ppppppuStack_d20._4_4_,0x69);
          if (bStack_7f8 == 0) {
            func_0x0eedea30(&uStack_f38);
            func_0x0eedeb80(2,0x2d,&uStack_838,&uStack_f38,apbStack_d38);
            if (((ulong)uStack_f38 & 1) != 0) {
              func_0x0412a280(pcStack_f28,(ulong)uStack_f38 & 0xfffffffffffffffe);
            }
          }
          bStack_e28 = bStack_7f8;
          if ((bStack_7f8 & 1) == 0) {
            pbStack_e68 = uStack_838;
            uStack_e60 = (ulong)uStack_830;
            pcStack_e58 = pcStack_828;
            pcStack_e50 = pcStack_820;
            lStack_e48 = uStack_818;
            pcStack_828 = (char *)0x0;
            pcStack_820 = (char *)0x0;
            uStack_818 = 0;
            uStack_e40 = (undefined4)uStack_810;
            uStack_e3c = uStack_810._4_4_;
            lStack_e38 = (long)uStack_808;
            ppbStack_e30 = ppbStack_800;
            func_0x0eede540(apbStack_d38,&pbStack_e68);
            puVar24 = (undefined8 *)FUN_0412f0e0(apbStack_d38,0,&UNK_011d5d2d,0x2a);
            pcStack_828 = (char *)puVar24[2];
            uStack_838 = (byte *)*puVar24;
            uStack_830 = (byte *)puVar24[1];
            *puVar24 = 0;
            puVar24[1] = 0;
            puVar24[2] = 0;
            if (((ulong)apbStack_d38[0] & 1) != 0) {
              func_0x0412a280(ppppppuStack_d28,(ulong)apbStack_d38[0] & 0xfffffffffffffffe);
            }
            puVar30 = *(undefined4 **)(param_2 + 8);
            if (puVar30 < *(undefined4 **)(param_2 + 0x10)) {
              if (((ulong)uStack_838 & 1) == 0) {
                *(char **)(puVar30 + 4) = pcStack_828;
                *puVar30 = (undefined4)uStack_838;
                puVar30[1] = uStack_838._4_4_;
                puVar30[2] = (undefined4)uStack_830;
                puVar30[3] = uStack_830._4_4_;
              }
              else {
                func_0x0412e5e0(puVar30,pcStack_828,uStack_830);
              }
              *(undefined4 **)(param_2 + 8) = puVar30 + 6;
              *(undefined4 **)(param_2 + 8) = puVar30 + 6;
            }
            else {
              uVar33 = func_0x04909a40(param_2,&uStack_838);
              *(undefined8 *)(param_2 + 8) = uVar33;
            }
            if (((ulong)uStack_838 & 1) != 0) {
              func_0x0412a280(pcStack_828,(ulong)uStack_838 & 0xfffffffffffffffe);
            }
joined_r0x063fa4e5:
            if (bStack_e28 != 1) goto LAB_063fb0fc;
LAB_063fa4eb:
            if (((ulong)pbStack_e68 & 1) != 0) {
              uVar36 = (ulong)pbStack_e68 & 0xfffffffffffffffe;
LAB_063f9709:
              func_0x0412a280(pcStack_e58,uVar36);
            }
          }
          else {
            pcStack_e58 = pcStack_828;
            pbStack_e68 = uStack_838;
            uStack_e60 = (ulong)uStack_830;
            if ((DAT_0f774768 == '\0') && (iVar22 = func_0x04108328(&DAT_0f774768), iVar22 != 0)) {
              func_0x0ed58ba0(0xf7746f8);
              func_0x0eee2f40(&SUB_04904f60,0xf7746f8,0xf53dab8);
              func_0x0410844d(&DAT_0f774768);
            }
            uStack_830 = (byte *)0xf7746f8;
            pcStack_828 = (char *)CONCAT44(pcStack_828._4_4_,0xffffffff);
            pcStack_820 = (char *)&uStack_810;
            uStack_818 = 0x800000000;
            puStack_710 = auStack_700;
            uStack_708 = 0x800000000;
            uStack_580 = 0xfffc;
            uStack_57e = 1;
            uStack_57c = 0xffffffff00000000;
            uStack_570 = 0;
            uStack_568 = 0;
            uStack_838 = &UNK_0f4e39b8;
            auStack_918[0] = 0xd;
            uStack_900 = 0;
            uStack_8f8 = 0;
            uStack_910 = 0;
            plStack_908 = (long *)0x0;
            uStack_8f0 = 0;
            uStack_8ef = 1;
            func_0x0ee382a0(&bStack_500,&UNK_0f02ff58);
            uStack_4e8 = _DAT_0f7ba058;
            uStack_4e0 = _DAT_0f7ba060;
            uStack_4d8 = _DAT_0f7ba058;
            uStack_4d0 = _DAT_0f7ba060;
            lStack_4b0 = 0;
            lStack_4a8 = 0;
            lStack_4a0 = 0;
            uStack_4c8 = 0;
            uStack_4c0 = 0;
            uStack_4b8 = 0;
            if (bStack_e28 == 0) {
              func_0x05d8b230(&pbStack_e68);
            }
            func_0x0ed684d0(apbStack_d38,&pbStack_e68);
            pbStack_9c8 = &UNK_0f031ad0;
            ppppppuVar49 = (undefined8 ******)((long)uStack_830 + 0x18);
            pcStack_f28 = &UNK_04913860;
            uStack_f20 = (undefined8 ******)0x0;
            uStack_f18 = (undefined8 ******)CONCAT35(uStack_f18._5_3_,0x48240cd28);
            uStack_f38 = (byte *)auStack_918;
            ppppppuStack_f00 = (undefined8 ******)&UNK_04913840;
            uStack_f10 = ppppppuVar49;
            uStack_f08 = (undefined8 ******)func_0x04913c20(ppppppuVar49);
            uStack_de8 = uStack_f08;
            uStack_de0 = ppppppuVar49;
            pbStack_b28 = (byte *)func_0x04913c20(ppppppuVar49);
            ppppppuStack_b20 = ppppppuVar49;
            cVar20 = func_0x04913500(&uStack_de8,&pbStack_b28);
            if ((cVar20 == '\0') &&
               (cVar20 = FUN_0eeddcf0(&UNK_014784b5,&UNK_011ec167,0xa2,&UNK_01221c2c,&UNK_0134249c),
               cVar20 != '\0')) {
              _DAT_00000000 = 0xdeadc0de;
            }
            uVar36 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
            if (uVar36 == 0) {
              func_0x048b0de0(&uStack_de8,&pbStack_a78);
              _DAT_0f54fd90 = (undefined4)uStack_de8;
              uRam000000000f54fd94 = uStack_de8._4_4_;
              uVar7 = (undefined4)uStack_de0;
              uVar8 = uStack_de0._4_4_;
              uStack_de8 = (undefined8 ******)0x0;
              uStack_de0 = (undefined8 ******)0x0;
              plVar23 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
              _DAT_0f54fd98 = uVar7;
              uRam000000000f54fd9c = uVar8;
              if (plVar23 != (long *)0x0) {
                LOCK();
                plVar25 = plVar23 + 1;
                lVar27 = *plVar25;
                *plVar25 = *plVar25 + -1;
                UNLOCK();
                if (lVar27 == 0) {
                  (**(code **)(*plVar23 + 0x10))(plVar23);
                  FUN_0412c2d0(plVar23);
                }
              }
              ppppppuVar3 = uStack_de0;
              if (uStack_de0 != (undefined8 ******)0x0) {
                LOCK();
                ppppppuVar4 = uStack_de0 + 1;
                pppppuVar1 = *ppppppuVar4;
                *ppppppuVar4 = (undefined8 *****)((long)*ppppppuVar4 + -1);
                UNLOCK();
                if (pppppuVar1 == (undefined8 *****)0x0) {
                  (*(code *)(*uStack_de0)[2])(uStack_de0);
                  FUN_0412c2d0(ppppppuVar3);
                }
              }
              uVar36 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
            }
            puStack_b18 = &UNK_06464e40;
            uStack_b08 = 0xc29ad5f5;
            pcStack_b10 = (code *)0x0;
            uStack_b04 = 3;
            uStack_af8 = 0;
            auStack_af0[0] = 0;
            puStack_dd8 = &UNK_06464e40;
            pcStack_dd0 = (code *)0x0;
            uStack_dc8 = 0xc29ad5f5;
            uStack_dc4 = 3;
            pbStack_b28 = (byte *)0x0;
            uStack_de8 = (undefined8 ******)&bStack_500;
            uStack_db8 = 0;
            apppppppuStack_db0[0] = (undefined8 *******)&UNK_06464d60;
            ppppppuStack_dc0 = ppppppuVar49;
            uStack_b00 = uVar36;
            cVar20 = func_0x0ed6b4a0(&uStack_838,apbStack_d38,&uStack_de8,&uStack_f38,&pbStack_9c8);
            if ((pcStack_dd0 != (code *)0x0) &&
               ((*pcStack_dd0)(&uStack_de8), pcStack_b10 != (code *)0x0)) {
              (*pcStack_b10)(&pbStack_b28);
            }
            if (uStack_f20 != (undefined8 ******)0x0) {
              (*(code *)uStack_f20)(&uStack_f38);
            }
            func_0x04907660(&uStack_d10);
            if (ppppppuStack_d28 != (undefined8 ******)0x0) {
              ppppppuStack_d20 = ppppppuStack_d28;
              func_0x0412a280(ppppppuStack_d28,lStack_d18 - (long)ppppppuStack_d28);
            }
            if (cVar20 == '\0') {
              func_0x04a3b850(apbStack_d38);
              func_0x0ed6c330(&uStack_f38,&pcStack_828);
              pbVar39 = pbStack_f30;
              for (pbVar40 = uStack_f38; pbVar37 = uStack_f38, pbVar40 != pbVar39;
                  pbVar40 = pbVar40 + 0x18) {
                while( true ) {
                  if ((*pbVar40 & 1) == 0) {
                    pbVar37 = pbVar40 + 1;
                  }
                  else {
                    pbVar37 = *(byte **)(pbVar40 + 0x10);
                  }
                  uVar33 = func_0x0eee2e90(pbVar37);
                  uVar33 = func_0x04885260(apbStack_d38,pbVar37,uVar33);
                  uStack_de8 = (undefined8 ******)CONCAT71(uStack_de8._1_7_,10);
                  func_0x04885260(uVar33,&uStack_de8,1);
                  puVar30 = *(undefined4 **)(param_2 + 8);
                  if (*(undefined4 **)(param_2 + 0x10) <= puVar30) break;
                  if ((*pbVar40 & 1) == 0) {
                    *(undefined8 *)(puVar30 + 4) = *(undefined8 *)(pbVar40 + 0x10);
                    uVar7 = *(undefined4 *)(pbVar40 + 4);
                    uVar8 = *(undefined4 *)(pbVar40 + 8);
                    uVar9 = *(undefined4 *)(pbVar40 + 0xc);
                    *puVar30 = *(undefined4 *)pbVar40;
                    puVar30[1] = uVar7;
                    puVar30[2] = uVar8;
                    puVar30[3] = uVar9;
                  }
                  else {
                    func_0x0412e5e0(puVar30,*(undefined8 *)(pbVar40 + 0x10),
                                    *(undefined8 *)(pbVar40 + 8));
                  }
                  *(undefined4 **)(param_2 + 8) = puVar30 + 6;
                  *(undefined4 **)(param_2 + 8) = puVar30 + 6;
                  pbVar40 = pbVar40 + 0x18;
                  pbVar37 = uStack_f38;
                  if (pbVar40 == pbVar39) goto joined_r0x063fa44c;
                }
                uVar33 = func_0x04909a40(param_2,pbVar40);
                *(undefined8 *)(param_2 + 8) = uVar33;
              }
joined_r0x063fa44c:
              uStack_f38 = pbVar37;
              pbVar40 = pbStack_f30;
              if (pbVar37 != (byte *)0x0) {
                for (; pbVar37 != pbVar40; pbVar40 = pbVar40 + -0x18) {
                  if ((pbVar40[-0x18] & 1) != 0) {
                    func_0x0412a280(*(undefined8 *)(pbVar40 + -8),
                                    *(ulong *)(pbVar40 + -0x18) & 0xfffffffffffffffe);
                  }
                }
                pbStack_f30 = pbVar37;
                func_0x0412a280(uStack_f38,(long)pcStack_f28 - (long)uStack_f38);
              }
              apbStack_d38[0] = pbStack_f40;
              *(byte **)((long)apbStack_d38 + *(long *)(pbStack_f40 + -0x18)) = pbStack_f58;
              apbStack_d38[1] = puStack_f48;
              if ((bStack_cf0 & 1) != 0) {
                func_0x0412a280(uStack_ce0,CONCAT71(uStack_cef,bStack_cf0) & 0xfffffffffffffffe);
              }
              apbStack_d38[1] = pbStack_f50;
              FUN_04167a40(&ppppppuStack_d28);
              func_0x0413aec0(apbStack_d38,&UNK_0eeed6b0);
              func_0x04138180(auStack_cc8);
            }
            else {
              pbStack_f78 = (byte *)0x0;
              pbStack_f70 = (byte *)0x0;
              pbStack_f68 = (byte *)0x0;
              if (bStack_e28 == 0) {
                func_0x05d8b230(&pbStack_e68);
              }
              pbStack_e08 = pbStack_e68;
              uStack_e00 = uStack_e60;
              pcStack_df8 = pcStack_e58;
              pbStack_e68 = (byte *)0x0;
              uStack_e60 = 0;
              pcStack_e58 = (char *)0x0;
              func_0x0d686f30(apbStack_d38,&UNK_012d9350,0x15,&pbStack_b40,&pbStack_e08);
              if (((ulong)pbStack_e08 & 1) != 0) {
                func_0x0412a280(pcStack_df8,(ulong)pbStack_e08 & 0xfffffffffffffffe);
              }
              func_0x05d54750(auStack_e20,&UNK_0f02ff58);
              func_0x0d6afff0(&uStack_de8,&uStack_c18,apbStack_d38,auStack_e20,1);
              if (((bStack_dc2 == 1) && ((bStack_d3c & 1) == 0)) && (plStack_bc8 != (long *)0x0)) {
                lVar27 = func_0x0417cc60();
                if (plStack_bc8 != (long *)0x0) {
                  pppppppuVar42 = apppppppuStack_db0;
                  if (cStack_d8c != '\x02') {
                    pppppppuVar42 = apppppppuStack_db0[0];
                  }
                  if (iStack_d90 != -0x65bdb4db) {
                    pppppppuVar42 = (undefined8 *******)0x0;
                  }
                  (**(code **)(*plStack_bc8 + 0x30))(plStack_bc8,pppppppuVar42,&uStack_d88);
                  lVar28 = func_0x0417cc60();
                  puStack_dd8 = (undefined *)((double)(lVar28 - lVar27) / _DAT_014f0138);
                  pcStack_dd0 = (code *)CONCAT71(pcStack_dd0._1_7_,
                                                 (byte)pcStack_dd0 & ~bStack_d3c & bStack_dc2);
                  goto LAB_063f9e18;
                }
                func_0x04891200();
LAB_063fb5c6:
                func_0x04891200();
                goto LAB_063fb5cb;
              }
LAB_063f9e18:
              uVar16 = uStack_d48;
              uVar15 = uStack_d60;
              uVar33 = uStack_d78;
              if (((~bStack_dc2 | bStack_d3c) & 1) == 0) {
                func_0x05ebb920(&pbStack_b28,&uStack_de8);
                func_0x05ebb920(&pbStack_a78,&pbStack_b28);
                func_0x05d85c50(auStack_ac8);
                if (pcStack_ad8 != (code *)0x0) {
                  (*pcStack_ad8)(auStack_af0);
                }
                if ((uStack_af8 & 0x80000000000000) != 0) {
                  (**(code **)(_DAT_0f5463b0 + 0x28))
                            (&DAT_0f5463b0,(uStack_af8 & 0xff00ffffffffffff) - 8);
                }
                uStack_af8 = 0;
                if ((uStack_b00 & 0x80000000000000) != 0) {
                  (**(code **)(_DAT_0f5463b0 + 0x28))
                            (&DAT_0f5463b0,(uStack_b00 & 0xff00ffffffffffff) - 8);
                }
                uStack_b00 = 0;
              }
              else {
                uStack_558 = (undefined4)uStack_d88;
                uStack_554 = uStack_d88._4_4_;
                uStack_550 = (undefined4)uStack_d80;
                uStack_54c = uStack_d80._4_4_;
                uStack_d88 = 0;
                uStack_d80 = 0;
                uStack_d78 = 0;
                uStack_540 = (undefined4)uStack_d70;
                uStack_53c = uStack_d70._4_4_;
                uStack_538 = (undefined4)uStack_d68;
                uStack_534 = uStack_d68._4_4_;
                uStack_d70 = 0;
                uStack_d68 = 0;
                uStack_d60 = 0;
                uStack_528 = (undefined4)uStack_d58;
                uStack_524 = uStack_d58._4_4_;
                uStack_520 = (undefined4)uStack_d50;
                uStack_51c = uStack_d50._4_4_;
                uStack_d58 = 0;
                uStack_d50 = 0;
                uStack_d48 = 0;
                bStack_3c = bStack_d3c;
                uStack_40 = uStack_d40;
                uStack_548 = uVar33;
                uStack_88 = 0;
                uStack_80 = 0;
                uStack_78 = 0;
                uStack_530 = uVar15;
                uStack_70 = 0;
                uStack_68 = 0;
                uStack_60 = 0;
                uStack_518 = uVar16;
                uStack_58 = 0;
                uStack_50 = 0;
                uStack_48 = 0;
                bStack_50c = bStack_d3c;
                uStack_510 = uStack_d40;
                uStack_f38 = (byte *)0x0;
                pbStack_f30 = (byte *)0x0;
                pcStack_f28 = (undefined *)0x0;
                uStack_f20._0_1_ = 1;
                uStack_f18 = (undefined8 ******)0x0;
                uStack_f10 = (undefined8 ******)0x0;
                uStack_f08 = (undefined8 ******)0x0;
                puStack_ef0 = &UNK_0488e0b0;
                pcStack_ee8 = (code *)0x0;
                uStack_ee0 = CONCAT35(uStack_ee0._5_3_,0x48b5725f);
                ppppppuStack_f00 = (undefined8 ******)0x0;
                uStack_ea8 = 0;
                uStack_ea0 = 0;
                uStack_eb8 = 0;
                uStack_eb0 = 0;
                uStack_ec8 = 0;
                uStack_ec0 = 0;
                uStack_ed8 = 0;
                uStack_ed0 = 0;
                uStack_e98 = 0;
                uStack_e90 = 0xfefffffc;
                uStack_e8c = 0;
                func_0x0c4a4310(&uStack_ed8,&uStack_558);
                uStack_f20 = (undefined8 ******)((ulong)uStack_f20._1_7_ << 8);
                func_0x05ebb920(&pbStack_9c8,&uStack_f38);
                func_0x05d85c50(&uStack_ed8);
                if (pcStack_ee8 != (code *)0x0) {
                  (*pcStack_ee8)(&ppppppuStack_f00);
                }
                if (((ulong)uStack_f08 & 0x80000000000000) != 0) {
                  (**(code **)(_DAT_0f5463b0 + 0x28))
                            (&DAT_0f5463b0,((ulong)uStack_f08 & 0xff00ffffffffffff) - 8);
                }
                uStack_f08 = (undefined8 ******)0x0;
                if (((ulong)uStack_f10 & 0x80000000000000) != 0) {
                  (**(code **)(_DAT_0f5463b0 + 0x28))
                            (&DAT_0f5463b0,((ulong)uStack_f10 & 0xff00ffffffffffff) - 8);
                }
                uStack_f10 = (undefined8 ******)0x0;
                func_0x05d85c50(&uStack_558);
                func_0x05ebb920(&pbStack_b28,&pbStack_9c8);
                func_0x05ebb920(&pbStack_a78,&pbStack_b28);
                func_0x05d85c50(auStack_ac8);
                if (pcStack_ad8 != (code *)0x0) {
                  (*pcStack_ad8)(auStack_af0);
                }
                if ((uStack_af8 & 0x80000000000000) != 0) {
                  (**(code **)(_DAT_0f5463b0 + 0x28))
                            (&DAT_0f5463b0,(uStack_af8 & 0xff00ffffffffffff) - 8);
                }
                uStack_af8 = 0;
                if ((uStack_b00 & 0x80000000000000) != 0) {
                  (**(code **)(_DAT_0f5463b0 + 0x28))
                            (&DAT_0f5463b0,(uStack_b00 & 0xff00ffffffffffff) - 8);
                }
                uStack_b00 = 0;
                func_0x05d85c50(auStack_968);
                if (pcStack_978 != (code *)0x0) {
                  (*pcStack_978)(auStack_990);
                }
                if ((uStack_998 & 0x80000000000000) != 0) {
                  (**(code **)(_DAT_0f5463b0 + 0x28))
                            (&DAT_0f5463b0,(uStack_998 & 0xff00ffffffffffff) - 8);
                }
                uStack_998 = 0;
                if ((uStack_9a0 & 0x80000000000000) != 0) {
                  (**(code **)(_DAT_0f5463b0 + 0x28))
                            (&DAT_0f5463b0,(uStack_9a0 & 0xff00ffffffffffff) - 8);
                }
                uStack_9a0 = 0;
                func_0x05d85c50(&uStack_88);
              }
              func_0x05d85c50(&uStack_d88);
              if (pcStack_d98 != (code *)0x0) {
                (*pcStack_d98)(apppppppuStack_db0);
              }
              if ((uStack_db8 & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(uStack_db8 & 0xff00ffffffffffff) - 8);
              }
              uStack_db8 = 0;
              if (((ulong)ppppppuStack_dc0 & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,((ulong)ppppppuStack_dc0 & 0xff00ffffffffffff) - 8);
              }
              if ((uStack_e10 & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(uStack_e10 & 0xff00ffffffffffff) - 8);
              }
              uStack_e10 = 0;
              if ((uStack_e18 & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(uStack_e18 & 0xff00ffffffffffff) - 8);
              }
              psVar17 = psStack_a10;
              psVar45 = psStack_a18;
              if ((cStack_a52 == '\x01') && ((bStack_9cc & 1) == 0)) {
                func_0x0ee382a0(&uStack_f38,&UNK_0f02ff58);
                pppppppuVar43 = apppppppuStack_a40[0] + 9;
                pppppppuVar42 = apppppppuStack_a40[0] + 8;
                pppppppuVar35 = apppppppuStack_a40[0] + 7;
                pppppppuVar29 = apppppppuStack_a40[0];
                if (cStack_a1c == '\x02') {
                  pppppppuVar43 = appppppuStack_9f8;
                  pppppppuVar42 = &ppppppuStack_a00;
                  pppppppuVar35 = &ppppppuStack_a08;
                  pppppppuVar29 = apppppppuStack_a40;
                }
                bVar52 = iStack_a20 != -0x65bdb4db;
                if (bVar52) {
                  pppppppuVar29 = (undefined8 *******)0x0;
                  pppppppuVar35 = (undefined8 *******)0x38;
                }
                ppppppuVar49 = *pppppppuVar35;
                if (bVar52) {
                  pppppppuVar42 = (undefined8 *******)0x40;
                }
                ppppppuVar3 = *pppppppuVar42;
                if (bVar52) {
                  pppppppuVar43 = (undefined8 *******)&DAT_00000048;
                }
                ppppppuVar4 = *pppppppuVar43;
                *pppppppuVar35 = (undefined8 ******)0x0;
                pppppppuVar35[1] = (undefined8 ******)0x0;
                pppppppuVar35[2] = (undefined8 ******)0x0;
                ppppppuVar12 = *pppppppuVar29;
                ppppppuVar13 = pppppppuVar29[1];
                ppppppuVar10 = pppppppuVar29[2];
                ppppppuVar11 = pppppppuVar29[3];
                ppppppuStack_f00 = pppppppuVar29[4];
                ppppppuStack_ef8 = pppppppuVar29[5];
                uStack_860 = *(undefined2 *)(pppppppuVar29 + 6);
                puStack_ef0 = (undefined *)CONCAT62((int6)((ulong)puStack_ef0 >> 0x10),uStack_860);
                uStack_ed8 = 0;
                uStack_ee0 = 0;
                pcStack_ee8 = (code *)0x0;
                puStack_898 = pcStack_f28;
                pbStack_8a8 = uStack_f38;
                pbStack_8a0 = pbStack_f30;
                uStack_f38 = (byte *)0x0;
                pbStack_f30 = (byte *)0x0;
                pcStack_f28 = (undefined *)0x0;
                uStack_f20._0_4_ = SUB84(ppppppuVar12,0);
                uStack_f20._4_4_ = (undefined4)((ulong)ppppppuVar12 >> 0x20);
                uStack_f18._0_4_ = SUB84(ppppppuVar13,0);
                uStack_f18._4_4_ = (undefined4)((ulong)ppppppuVar13 >> 0x20);
                uStack_f10._0_4_ = SUB84(ppppppuVar10,0);
                uStack_f10._4_4_ = (undefined4)((ulong)ppppppuVar10 >> 0x20);
                uStack_f08._0_4_ = SUB84(ppppppuVar11,0);
                uStack_f08._4_4_ = (undefined4)((ulong)ppppppuVar11 >> 0x20);
                uStack_880 = (undefined4)uStack_f10;
                uStack_87c = uStack_f10._4_4_;
                uStack_878 = (undefined4)uStack_f08;
                uStack_874 = uStack_f08._4_4_;
                uStack_890 = (undefined4)uStack_f20;
                uStack_88c = uStack_f20._4_4_;
                uStack_888 = (undefined4)uStack_f18;
                uStack_884 = uStack_f18._4_4_;
                cStack_840 = '\x01';
                uStack_f20 = ppppppuVar12;
                uStack_f18 = ppppppuVar13;
                uStack_f10 = ppppppuVar10;
                uStack_f08 = ppppppuVar11;
                ppppppuStack_870 = ppppppuStack_f00;
                ppppppuStack_868 = ppppppuStack_ef8;
                ppppppuStack_858 = ppppppuVar49;
                ppppppuStack_850 = ppppppuVar3;
                ppppppuStack_848 = ppppppuVar4;
              }
              else {
                for (; (psVar45 != psStack_a10 && (*psVar45 == 0)); psVar45 = psVar45 + 0x1c) {
                }
                pcVar47 = pcStack_9e8;
                if (psVar45 != psStack_a10) {
                  pbVar40 = (byte *)(psVar45 + 0x10);
                  if (pbStack_f70 < pbStack_f68) goto LAB_063fa8da;
                  do {
                    pbStack_f70 = (byte *)func_0x04909a40(&pbStack_f78);
                    while( true ) {
                      do {
                        psVar46 = psVar45;
                        psVar45 = psVar46 + 0x1c;
                        pcVar47 = pcStack_9e8;
                        if (psVar45 == psVar17) goto joined_r0x063fa95d;
                      } while (*psVar45 == 0);
                      pbVar40 = (byte *)(psVar46 + 0x2c);
                      if (pbStack_f68 <= pbStack_f70) break;
LAB_063fa8da:
                      pbVar39 = pbStack_f70;
                      if ((*pbVar40 & 1) == 0) {
                        *(undefined8 *)(pbStack_f70 + 0x10) = *(undefined8 *)(pbVar40 + 0x10);
                        uVar7 = *(undefined4 *)(pbVar40 + 4);
                        uVar8 = *(undefined4 *)(pbVar40 + 8);
                        uVar9 = *(undefined4 *)(pbVar40 + 0xc);
                        *(undefined4 *)pbStack_f70 = *(undefined4 *)pbVar40;
                        *(undefined4 *)(pbStack_f70 + 4) = uVar7;
                        *(undefined4 *)(pbStack_f70 + 8) = uVar8;
                        *(undefined4 *)(pbStack_f70 + 0xc) = uVar9;
                      }
                      else {
                        func_0x0412e5e0(pbStack_f70,*(undefined8 *)(psVar45 + 0x18),
                                        *(undefined8 *)(psVar45 + 0x14));
                      }
                      pbStack_f70 = pbVar39 + 0x18;
                    }
                  } while( true );
                }
joined_r0x063fa95d:
                for (; (pcVar14 = pcStack_9e0, pcVar47 != pcStack_9e0 && (*pcVar47 == '\0'));
                    pcVar47 = pcVar47 + 0x20) {
                }
                if (pcVar47 != pcStack_9e0) {
                  pbVar40 = (byte *)(pcVar47 + 8);
                  if (pbStack_f70 < pbStack_f68) goto LAB_063fa999;
                  do {
                    pbStack_f70 = (byte *)func_0x04909a40(&pbStack_f78);
                    while( true ) {
                      do {
                        pcVar48 = pcVar47;
                        pcVar47 = pcVar48 + 0x20;
                        if (pcVar47 == pcVar14) goto LAB_063fa9f9;
                      } while (*pcVar47 == '\0');
                      pbVar40 = (byte *)(pcVar48 + 0x28);
                      if (pbStack_f68 <= pbStack_f70) break;
LAB_063fa999:
                      pbVar39 = pbStack_f70;
                      if ((*pbVar40 & 1) == 0) {
                        *(undefined8 *)(pbStack_f70 + 0x10) = *(undefined8 *)(pbVar40 + 0x10);
                        uVar7 = *(undefined4 *)(pbVar40 + 4);
                        uVar8 = *(undefined4 *)(pbVar40 + 8);
                        uVar9 = *(undefined4 *)(pbVar40 + 0xc);
                        *(undefined4 *)pbStack_f70 = *(undefined4 *)pbVar40;
                        *(undefined4 *)(pbStack_f70 + 4) = uVar7;
                        *(undefined4 *)(pbStack_f70 + 8) = uVar8;
                        *(undefined4 *)(pbStack_f70 + 0xc) = uVar9;
                      }
                      else {
                        func_0x0412e5e0(pbStack_f70,*(undefined8 *)(pcVar47 + 0x18),
                                        *(undefined8 *)(pcVar47 + 0x10));
                      }
                      pbStack_f70 = pbVar39 + 0x18;
                    }
                  } while( true );
                }
LAB_063fa9f9:
                pbStack_8a8 = (byte *)((ulong)pbStack_8a8 & 0xffffffffffffff00);
                cStack_840 = '\0';
              }
              func_0x05d85c50(&psStack_a18);
              if (pcStack_a28 != (code *)0x0) {
                (*pcStack_a28)(apppppppuStack_a40);
              }
              if ((uStack_a48 & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(uStack_a48 & 0xff00ffffffffffff) - 8);
              }
              uStack_a48 = 0;
              if ((uStack_a50 & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(uStack_a50 & 0xff00ffffffffffff) - 8);
              }
              func_0x05d85c50(auStack_c80);
              if ((ulong)uStack_c88 != 0xffffffff) {
                (**(code **)(&UNK_0f02ff80 + (ulong)uStack_c88 * 8))(&uStack_f38,auStack_ce8);
              }
              uStack_c88 = 0xffffffff;
              if ((bStack_d00 & 1) != 0) {
                func_0x0412a280(CONCAT71(uStack_cef,bStack_cf0),
                                CONCAT71(uStack_cff,bStack_d00) & 0xfffffffffffffffe);
              }
              if (((ulong)pppppuStack_d08 & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,((ulong)pppppuStack_d08 & 0xff00ffffffffffff) - 8);
              }
              pppppuStack_d08 = (undefined8 *****)0x0;
              if ((uStack_d10 & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(uStack_d10 & 0xff00ffffffffffff) - 8);
              }
              uStack_d10 = 0;
              if (((ulong)ppppppuStack_d20 & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,((ulong)ppppppuStack_d20 & 0xff00ffffffffffff) - 8);
              }
              ppppppuStack_d20 = (undefined8 ******)0x0;
              if (((ulong)ppppppuStack_d28 & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,((ulong)ppppppuStack_d28 & 0xff00ffffffffffff) - 8);
              }
              if (cStack_840 == '\0') {
                func_0x04a3b850(apbStack_d38);
                pbVar40 = pbStack_f70;
                for (pbVar39 = pbStack_f78; pbVar39 != pbVar40; pbVar39 = pbVar39 + 0x18) {
                  bVar52 = (*pbVar39 & 1) != 0;
                  pbVar37 = pbVar39 + 1;
                  if (bVar52) {
                    pbVar37 = *(byte **)(pbVar39 + 0x10);
                  }
                  uVar36 = (ulong)(*pbVar39 >> 1);
                  if (bVar52) {
                    uVar36 = *(ulong *)(pbVar39 + 8);
                  }
                  uVar33 = func_0x04885260(apbStack_d38,pbVar37,uVar36);
                  uStack_f38 = (byte *)CONCAT71(uStack_f38._1_7_,10);
                  func_0x04885260(uVar33,&uStack_f38,1);
                  puVar30 = *(undefined4 **)(param_2 + 8);
                  if (puVar30 < *(undefined4 **)(param_2 + 0x10)) {
                    if ((*pbVar39 & 1) == 0) {
                      *(undefined8 *)(puVar30 + 4) = *(undefined8 *)(pbVar39 + 0x10);
                      uVar7 = *(undefined4 *)(pbVar39 + 4);
                      uVar8 = *(undefined4 *)(pbVar39 + 8);
                      uVar9 = *(undefined4 *)(pbVar39 + 0xc);
                      *puVar30 = *(undefined4 *)pbVar39;
                      puVar30[1] = uVar7;
                      puVar30[2] = uVar8;
                      puVar30[3] = uVar9;
                    }
                    else {
                      func_0x0412e5e0(puVar30,*(undefined8 *)(pbVar39 + 0x10),
                                      *(undefined8 *)(pbVar39 + 8));
                    }
                    puVar30 = puVar30 + 6;
                    *(undefined4 **)(param_2 + 8) = puVar30;
                  }
                  else {
                    puVar30 = (undefined4 *)func_0x04909a40(param_2);
                  }
                  *(undefined4 **)(param_2 + 8) = puVar30;
                }
                if ((uStack_cd0 & 0x10) == 0) {
                  if ((uStack_cd0 & 8) != 0) {
                    ppppppuVar49 = &ppppppuStack_d20;
                    uVar26 = uStack_d10;
                    goto LAB_063fadf5;
                  }
                  uStack_f38 = (byte *)((ulong)uStack_f38._1_7_ << 8);
                  pbVar40 = (byte *)0x0;
                  puVar31 = (undefined *)((long)&uStack_f38 + 1);
                }
                else {
                  uVar36 = CONCAT71(uStack_cff,bStack_d00);
                  ppppppuVar49 = &pppppuStack_d08;
                  uVar26 = uStack_cd8;
                  if (uStack_cd8 < uVar36) {
                    uVar26 = uVar36;
                    uStack_cd8 = uVar36;
                  }
LAB_063fadf5:
                  pppppuVar1 = *ppppppuVar49;
                  pbVar40 = (byte *)(uVar26 - (long)pppppuVar1);
                  if ((byte *)0xfffffffffffffff7 < pbVar40) {
LAB_063fb5cb:
                    uVar33 = FUN_04882e30();
                    func_0x041084d6(&DAT_0f774768);
                    func_0x063fbcb0(&uStack_c18);
                    uVar33 = func_0x0eee2d70(uVar33);
                    func_0x041084d6(&DAT_0f7b8fb8);
                    uVar33 = func_0x0eee2d70(uVar33);
                    func_0x041084d6(&DAT_0f774768);
                    func_0x0eedfc00(&pbStack_e68);
                    func_0x048e6e10(&pbStack_e88);
                    func_0x063fbcb0(&uStack_c18);
                    func_0x0eee2d70(uVar33);
                    pcVar5 = (code *)swi(3);
                    uVar36 = (*pcVar5)();
                    return uVar36;
                  }
                  if (pbVar40 < (byte *)0x17) {
                    uStack_f38 = (byte *)CONCAT71(uStack_f38._1_7_,(char)pbVar40 * '\x02');
                    puVar31 = (undefined *)((long)&uStack_f38 + 1);
                    if (pbVar40 == (byte *)0x0) {
                      pbVar40 = (byte *)0x0;
                      goto LAB_063fae7d;
                    }
                  }
                  else {
                    uVar36 = ((ulong)pbVar40 | 7) + 1;
                    if (((ulong)pbVar40 | 7) == 0x17) {
                      uVar36 = 0x1a;
                    }
                    puVar31 = (undefined *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar36)
                    ;
                    if (puVar31 == (undefined *)0x0) {
                      func_0x0eec74c0(uVar36,0);
                    }
                    uStack_f38 = (byte *)(uVar36 | 1);
                    pbStack_f30 = pbVar40;
                    pcStack_f28 = puVar31;
                  }
                  func_0x0eee2ee0(puVar31,pppppuVar1,pbVar40);
                }
LAB_063fae7d:
                pbVar40[(long)puVar31] = 0;
                puVar32 = (ulong *)FUN_0412f0e0(&uStack_f38,0,&UNK_0147a92c,0x2b);
                uVar36 = *puVar32;
                uVar26 = puVar32[2];
                *puVar32 = 0;
                puVar32[1] = 0;
                puVar32[2] = 0;
                if (((ulong)uStack_f38 & 1) != 0) {
                  func_0x0412a280(pcStack_f28,(ulong)uStack_f38 & 0xfffffffffffffffe);
                }
                if ((uVar36 & 1) != 0) {
                  func_0x0412a280(uVar26,uVar36 & 0xfffffffffffffffe);
                }
                apbStack_d38[0] = pbStack_f40;
                *(byte **)((long)apbStack_d38 + *(long *)(pbStack_f40 + -0x18)) = pbStack_f58;
                apbStack_d38[1] = puStack_f48;
                if ((bStack_cf0 & 1) != 0) {
                  func_0x0412a280(uStack_ce0,CONCAT71(uStack_cef,bStack_cf0) & 0xfffffffffffffffe);
                }
                apbStack_d38[1] = pbStack_f50;
                FUN_04167a40(&ppppppuStack_d28);
                func_0x0413aec0(apbStack_d38,&UNK_0eeed6b0);
                func_0x04138180(auStack_cc8);
              }
              else {
                plVar23 = *(long **)(lStack_c20 + 0x20);
                if (plVar23 == (long *)0x0) goto LAB_063fb5c6;
                (**(code **)(*plVar23 + 0x30))(plVar23,&uStack_890);
              }
              if (cStack_840 == '\x01') {
                if (ppppppuStack_858 != (undefined8 ******)0x0) {
                  ppppppuStack_850 = ppppppuStack_858;
                  func_0x0412a280(ppppppuStack_858,(long)ppppppuStack_848 - (long)ppppppuStack_858);
                }
                if (((ulong)pbStack_8a8 & 1) != 0) {
                  func_0x0412a280(puStack_898,(ulong)pbStack_8a8 & 0xfffffffffffffffe);
                }
              }
              pbVar39 = pbStack_f78;
              pbVar40 = pbStack_f70;
              if (pbStack_f78 != (byte *)0x0) {
                for (; pbVar39 != pbVar40; pbVar40 = pbVar40 + -0x18) {
                  if ((pbVar40[-0x18] & 1) != 0) {
                    func_0x0412a280(*(undefined8 *)(pbVar40 + -8),
                                    *(ulong *)(pbVar40 + -0x18) & 0xfffffffffffffffe);
                  }
                }
                pbStack_f70 = pbVar39;
                func_0x0412a280(pbStack_f78,(long)pbStack_f68 - (long)pbStack_f78);
              }
            }
            if (lStack_4b0 != 0) {
              lStack_4a8 = lStack_4b0;
              func_0x0412a280(lStack_4b0,lStack_4a0 - lStack_4b0);
            }
            if ((bStack_500 & 1) != 0) {
              func_0x0412a280(uStack_4f0,CONCAT71(uStack_4ff,bStack_500) & 0xfffffffffffffffe);
            }
            plVar23 = plStack_908;
            uStack_910 = 0;
            plStack_908 = (long *)0x0;
            if (plVar23 != (long *)0x0) {
              LOCK();
              plVar25 = plVar23 + 1;
              lVar27 = *plVar25;
              *plVar25 = *plVar25 + -1;
              UNLOCK();
              if (lVar27 == 0) {
                (**(code **)(*plVar23 + 0x10))(plVar23);
                FUN_0412c2d0(plVar23);
              }
              plVar23 = plStack_908;
              uStack_900 = 0;
              if (plStack_908 != (long *)0x0) {
                LOCK();
                plVar25 = plStack_908 + 1;
                lVar27 = *plVar25;
                *plVar25 = *plVar25 + -1;
                UNLOCK();
                if (lVar27 == 0) {
                  (**(code **)(*plStack_908 + 0x10))(plStack_908);
                  FUN_0412c2d0(plVar23);
                  func_0x0490a470(&uStack_838);
                  goto joined_r0x063fa4e5;
                }
              }
            }
            func_0x0490a470(&uStack_838);
            if (bStack_e28 == 1) goto LAB_063fa4eb;
LAB_063fb0fc:
            lVar27 = CONCAT44(uStack_e3c,uStack_e40);
            if (lVar27 != 0) {
              lVar38 = lStack_e38;
              lVar28 = lVar27;
              if (lVar27 != lStack_e38) {
                do {
                  lVar38 = lVar38 + -0x40;
                  func_0x048b3e80(lVar38);
                } while (lVar38 != lVar27);
                lVar28 = CONCAT44(uStack_e3c,uStack_e40);
              }
              lStack_e38 = lVar27;
              func_0x0412a280(lVar28,(long)ppbStack_e30 - lVar28);
            }
            pcVar14 = pcStack_e58;
            pcVar47 = pcStack_e50;
            if (pcStack_e58 != (char *)0x0) {
              for (; pcVar14 != pcVar47; pcVar47 = pcVar47 + -0x50) {
                if ((pcVar47[-8] == '\x01') && ((pcVar47[-0x30] & 1U) != 0)) {
                  func_0x0412a280(*(undefined8 *)(pcVar47 + -0x20),
                                  *(ulong *)(pcVar47 + -0x30) & 0xfffffffffffffffe);
                }
              }
              pcStack_e50 = pcVar14;
              uVar36 = lStack_e48 - (long)pcStack_e58;
              goto LAB_063f9709;
            }
          }
          pbVar51 = pbVar51 + 0x18;
        } while (pbVar51 != pbVar50);
      }
    }
    else {
      lVar28 = (long)uStack_808;
      if (uStack_810 != (undefined8 *)0x0) {
        while (lVar27 != lVar28) {
          func_0x048b3e80(lVar28 + -0x40);
          lVar28 = lVar28 + -0x40;
        }
        uStack_808 = (undefined8 *)lVar27;
        func_0x0412a280(uStack_810,(long)ppbStack_800 - (long)uStack_810);
      }
      pcVar14 = pcStack_828;
      pcVar47 = pcStack_820;
      if (pcStack_828 != (char *)0x0) {
        for (; pcVar14 != pcVar47; pcVar47 = pcVar47 + -0x50) {
          if ((pcVar47[-8] == '\x01') && ((pcVar47[-0x30] & 1U) != 0)) {
            func_0x0412a280(*(undefined8 *)(pcVar47 + -0x20),
                            *(ulong *)(pcVar47 + -0x30) & 0xfffffffffffffffe);
          }
        }
        pcStack_820 = pcVar14;
        func_0x0412a280(pcStack_828,uStack_818 - (long)pcStack_828);
      }
    }
    pbVar51 = pbStack_e88;
    pbVar50 = pbStack_e80;
    if (pbStack_e88 != (byte *)0x0) {
      for (; pbVar51 != pbVar50; pbVar50 = pbVar50 + -0x18) {
        if ((pbVar50[-0x18] & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(pbVar50 + -8),
                          *(ulong *)(pbVar50 + -0x18) & 0xfffffffffffffffe);
        }
      }
      pbStack_e80 = pbVar51;
      func_0x0412a280(pbStack_e88,lStack_e78 - (long)pbStack_e88);
    }
  }
  func_0x063fbcb0(&uStack_c18);
  return (ulong)bStack_f81;
}


