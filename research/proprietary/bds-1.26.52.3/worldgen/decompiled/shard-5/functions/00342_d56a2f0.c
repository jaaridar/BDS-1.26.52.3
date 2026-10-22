/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd66a2f0 (ELF vaddr 0xd56a2f0)
 * Label: caller-of-callee
 * Body:  [[0d66a2f0, 0d66b100] [0d66b110, 0d66b466] [0d66b470, 0d66b5b7]]
 * Ghidra: FUN_0d66a2f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d66a2f0(long param_1,uint param_2,byte *param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  long *plVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  long lVar18;
  byte *pbVar19;
  ulong uVar20;
  ulong uVar21;
  bool bVar22;
  undefined4 uStack_e68;
  undefined2 uStack_e64;
  undefined2 uStack_e62;
  undefined4 uStack_e60;
  undefined2 uStack_e5c;
  undefined1 uStack_e5a;
  undefined1 uStack_e59;
  undefined8 uStack_e58;
  undefined8 uStack_e50;
  long lStack_e48;
  undefined8 uStack_e40;
  undefined8 uStack_e38;
  long lStack_e30;
  byte bStack_e28;
  undefined8 uStack_e18;
  undefined8 uStack_e10;
  undefined8 uStack_e08;
  undefined8 uStack_e00;
  long lStack_df8;
  undefined8 uStack_df0;
  undefined8 uStack_de8;
  long lStack_de0;
  ulong uStack_dd8;
  long *plStack_dc8;
  long *plStack_dc0;
  ulong *puStack_db8;
  ulong uStack_db0;
  undefined8 uStack_da8;
  undefined8 uStack_da0;
  long lStack_d98;
  undefined8 uStack_d90;
  undefined8 uStack_d88;
  long lStack_d80;
  byte bStack_d78;
  undefined8 uStack_d68;
  undefined8 uStack_d60;
  undefined8 uStack_d58;
  undefined8 uStack_d50;
  long lStack_d48;
  undefined8 uStack_d40;
  undefined8 uStack_d38;
  long lStack_d30;
  byte bStack_d28;
  undefined8 uStack_d18;
  undefined8 uStack_d10;
  undefined8 uStack_d08;
  undefined8 uStack_d00;
  long lStack_cf8;
  undefined8 uStack_cf0;
  undefined8 uStack_ce8;
  long lStack_ce0;
  byte bStack_cd8;
  byte *pbStack_cd0;
  undefined8 *puStack_cc8;
  undefined8 uStack_cc0;
  ulong *puStack_cb8;
  ulong uStack_cb0;
  ulong *puStack_ca8;
  ulong uStack_ca0;
  undefined4 uStack_c98;
  undefined4 uStack_c94;
  undefined4 uStack_c90;
  undefined4 uStack_c8c;
  undefined8 uStack_c88;
  undefined8 uStack_c80;
  undefined8 uStack_c78;
  undefined8 uStack_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined4 uStack_c58;
  undefined2 uStack_c54;
  undefined2 uStack_c52;
  undefined4 uStack_c50;
  undefined2 uStack_c4c;
  undefined1 uStack_c4a;
  undefined1 uStack_c49;
  undefined8 uStack_c48;
  undefined8 uStack_c40;
  long lStack_c38;
  undefined8 uStack_c30;
  undefined8 uStack_c28;
  long lStack_c20;
  byte bStack_c18;
  ulong uStack_858;
  ulong uStack_848;
  ulong uStack_840;
  ulong uStack_838;
  ulong uStack_830;
  ulong uStack_448;
  undefined8 uStack_438;
  undefined *puStack_430;
  undefined8 uStack_428;
  undefined4 uStack_420;
  undefined8 uStack_38;
  
  pbStack_cd0 = param_3;
  if (param_2 == 2) {
    if ((_DAT_0f7219a8 & 1) == 0) {
      uStack_c48 = _DAT_0f7219b8;
      uStack_c58 = _DAT_0f7219a8;
      uStack_c54 = (undefined2)uRam000000000f7219ac;
      uStack_c52 = (undefined2)((uint)uRam000000000f7219ac >> 0x10);
      uStack_c50 = _DAT_0f7219b0;
      uStack_c4c = (undefined2)uRam000000000f7219b4;
      uStack_c4a = (undefined1)((uint)uRam000000000f7219b4 >> 0x10);
      uStack_c49 = (undefined1)((uint)uRam000000000f7219b4 >> 0x18);
    }
    else {
      uVar17 = CONCAT44(uRam000000000f7219b4,_DAT_0f7219b0);
      uVar16 = _DAT_0f7219b8;
LAB_0d66a3e0:
      func_0x0412e5e0(&uStack_c58,uVar16,uVar17);
    }
  }
  else if (param_2 == 1) {
    uStack_c58 = CONCAT31((int3)_DAT_0128397b,0x1a);
    uStack_c54 = (undefined2)((uint5)_DAT_0128397b >> 0x18);
    uStack_c52 = (undefined2)_DAT_01283980;
    uStack_c50 = (undefined4)(CONCAT53(_UNK_01283983,_DAT_01283980) >> 0x10);
    uStack_c4c = (undefined2)((uint5)_UNK_01283983 >> 0x18);
    uStack_c4a = 0;
  }
  else if (param_2 == 0) {
    if ((_DAT_0f721990 & 1) != 0) {
      uVar17 = CONCAT44(uRam000000000f72199c,_DAT_0f721998);
      uVar16 = _DAT_0f7219a0;
      goto LAB_0d66a3e0;
    }
    uStack_c48 = _DAT_0f7219a0;
    uStack_c58 = _DAT_0f721990;
    uStack_c54 = (undefined2)uRam000000000f721994;
    uStack_c52 = (undefined2)((uint)uRam000000000f721994 >> 0x10);
    uStack_c50 = _DAT_0f721998;
    uStack_c4c = (undefined2)uRam000000000f72199c;
    uStack_c4a = (undefined1)((uint)uRam000000000f72199c >> 0x10);
    uStack_c49 = (undefined1)((uint)uRam000000000f72199c >> 0x18);
  }
  else {
    uStack_c58 = 0;
    uStack_c54 = 0;
    uStack_c52 = 0;
    uStack_c50 = 0;
    uStack_c4c = 0;
    uStack_c4a = 0;
    uStack_c49 = 0;
    uStack_c48 = 0;
  }
  bVar22 = (*(byte *)(param_1 + 8) & 1) == 0;
  uStack_848 = *(ulong *)(param_1 + 0x18);
  if (bVar22) {
    uStack_848 = param_1 + 9U;
  }
  uStack_840 = (ulong)(*(byte *)(param_1 + 8) >> 1);
  if (!bVar22) {
    uStack_840 = *(ulong *)(param_1 + 0x10);
  }
  bVar22 = (uStack_c58 & 1) != 0;
  uStack_838 = (long)&uStack_c58 + 1;
  if (bVar22) {
    uStack_838 = uStack_c48;
  }
  uStack_830 = (ulong)((byte)uStack_c58 >> 1);
  if (bVar22) {
    uStack_830 = CONCAT17(uStack_c49,CONCAT16(uStack_c4a,CONCAT24(uStack_c4c,uStack_c50)));
  }
  func_0x049151c0(&uStack_438,&uStack_848,2,0x2f);
  if ((uStack_c58 & 1) != 0) {
    func_0x0412a280(uStack_c48,
                    CONCAT26(uStack_c52,CONCAT24(uStack_c54,uStack_c58)) & 0xfffffffffffffffe);
  }
  if ((char)param_2 == '\x02') {
    if ((_DAT_0f7219a8 & 1) == 0) {
      uStack_e58 = _DAT_0f7219b8;
      uStack_e68 = _DAT_0f7219a8;
      uStack_e64 = (undefined2)uRam000000000f7219ac;
      uStack_e62 = (undefined2)((uint)uRam000000000f7219ac >> 0x10);
      uStack_e60 = _DAT_0f7219b0;
      uStack_e5c = (undefined2)uRam000000000f7219b4;
      uStack_e5a = (undefined1)((uint)uRam000000000f7219b4 >> 0x10);
      uStack_e59 = (undefined1)((uint)uRam000000000f7219b4 >> 0x18);
    }
    else {
      uVar17 = CONCAT44(uRam000000000f7219b4,_DAT_0f7219b0);
      uVar16 = _DAT_0f7219b8;
LAB_0d66a542:
      func_0x0412e5e0(&uStack_e68,uVar16,uVar17);
    }
  }
  else if ((param_2 & 0xff) == 1) {
    uStack_e68._1_3_ = (undefined3)_DAT_0128397b;
    uStack_e68 = CONCAT31(uStack_e68._1_3_,0x1a);
    uStack_e64 = (undefined2)((uint5)_DAT_0128397b >> 0x18);
    uStack_e62 = (undefined2)_DAT_01283980;
    uStack_e60 = (undefined4)(CONCAT53(_UNK_01283983,_DAT_01283980) >> 0x10);
    uStack_e5c = (undefined2)((uint5)_UNK_01283983 >> 0x18);
    uStack_e5a = 0;
  }
  else if ((param_2 & 0xff) == 0) {
    if ((_DAT_0f721990 & 1) != 0) {
      uVar17 = CONCAT44(uRam000000000f72199c,_DAT_0f721998);
      uVar16 = _DAT_0f7219a0;
      goto LAB_0d66a542;
    }
    uStack_e58 = _DAT_0f7219a0;
    uStack_e68 = _DAT_0f721990;
    uStack_e64 = (undefined2)uRam000000000f721994;
    uStack_e62 = (undefined2)((uint)uRam000000000f721994 >> 0x10);
    uStack_e60 = _DAT_0f721998;
    uStack_e5c = (undefined2)uRam000000000f72199c;
    uStack_e5a = (undefined1)((uint)uRam000000000f72199c >> 0x10);
    uStack_e59 = (undefined1)((uint)uRam000000000f72199c >> 0x18);
  }
  else {
    uStack_e68 = 0;
    uStack_e64 = 0;
    uStack_e62 = 0;
    uStack_e60 = 0;
    uStack_e5c = 0;
    uStack_e5a = 0;
    uStack_e59 = 0;
    uStack_e58 = 0;
  }
  bVar22 = (*(byte *)(param_1 + 8) & 1) != 0;
  uVar16 = param_1 + 9U;
  if (bVar22) {
    uVar16 = *(ulong *)(param_1 + 0x18);
  }
  uVar15 = (ulong)(*(byte *)(param_1 + 8) >> 1);
  if (bVar22) {
    uVar15 = *(ulong *)(param_1 + 0x10);
  }
  uStack_c58 = (uint)uVar16;
  uStack_c54 = (undefined2)(uVar16 >> 0x20);
  uStack_c52 = (undefined2)(uVar16 >> 0x30);
  uStack_c50 = (undefined4)uVar15;
  uStack_c4c = (undefined2)(uVar15 >> 0x20);
  uStack_c4a = (undefined1)(uVar15 >> 0x30);
  uStack_c49 = (undefined1)(uVar15 >> 0x38);
  uVar16 = (long)&uStack_e68 + 1;
  uStack_c40 = CONCAT17(uStack_e59,CONCAT16(uStack_e5a,CONCAT24(uStack_e5c,uStack_e60)));
  uStack_c48 = uStack_e58;
  if ((uStack_e68 & 1) == 0) {
    uStack_c48 = uVar16;
    uStack_c40 = (ulong)((byte)uStack_e68 >> 1);
  }
  func_0x049151c0(&uStack_848,&uStack_c58,2,0x2f);
  if ((uStack_e68 & 1) != 0) {
    func_0x0412a280(uStack_e58,
                    CONCAT26(uStack_e62,CONCAT24(uStack_e64,uStack_e68)) & 0xfffffffffffffffe);
  }
  if (uStack_448 < 0xfffffffffffffff8) {
    if (uStack_448 < 0x17) {
      uStack_e68 = CONCAT31(uStack_e68._1_3_,(char)uStack_448 * '\x02');
      uVar15 = uVar16;
      if (uStack_448 != 0) goto LAB_0d66a64f;
    }
    else {
      lVar18 = 0x1a;
      if ((uStack_448 | 7) != 0x17) {
        lVar18 = (uStack_448 | 7) + 1;
      }
      uVar15 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar18);
      if (uVar15 == 0) {
        func_0x0eec74c0(lVar18,0);
      }
      uStack_e68 = (uint)lVar18 | 1;
      uStack_e64 = (undefined2)((ulong)lVar18 >> 0x20);
      uStack_e62 = (undefined2)((ulong)lVar18 >> 0x30);
      uStack_e60 = (undefined4)uStack_448;
      uStack_e5c = (undefined2)(uStack_448 >> 0x20);
      uStack_e5a = (undefined1)(uStack_448 >> 0x30);
      uStack_e59 = (undefined1)(uStack_448 >> 0x38);
      uStack_e58 = uVar15;
LAB_0d66a64f:
      func_0x0eee2f00(uVar15,&uStack_848,uStack_448);
    }
    uVar4 = uStack_e68;
    *(undefined1 *)(uVar15 + uStack_448) = 0;
    uVar15 = uStack_e58;
    bVar22 = (uStack_e68 & 1) != 0;
    if (bVar22) {
      uVar16 = uStack_e58;
    }
    uVar21 = (ulong)((byte)uStack_e68 >> 1);
    if (bVar22) {
      uVar21 = CONCAT17(uStack_e59,CONCAT16(uStack_e5a,CONCAT24(uStack_e5c,uStack_e60)));
    }
    func_0x0eee2dd0(&uStack_c58,0,0x408);
    uVar20 = 0;
    if (uVar21 < 0x400) {
      if (uVar21 != 0) {
        func_0x0eee2f00(&uStack_c58,uVar16,uVar21);
      }
      uStack_858 = uVar21;
      *(undefined1 *)((long)&uStack_c58 + uVar21) = 0;
      uVar20 = uStack_858;
      if ((uStack_858 & 0xfffffffffffffffc) != 0x3fc) goto LAB_0d66a701;
      uStack_c58 = uStack_c58 & 0xffffff00;
      uStack_858 = 0;
      lVar18 = 1;
LAB_0d66a73f:
      uStack_448 = uStack_858;
      func_0x0eee2f00(&uStack_848,&uStack_c58,lVar18);
    }
    else {
LAB_0d66a701:
      *(undefined4 *)((long)&uStack_c58 + uVar20) = 0x706d742e;
      puVar1 = (undefined1 *)((long)&uStack_c54 + uStack_858);
      uStack_858 = uStack_858 + 4;
      *puVar1 = 0;
      uStack_448 = 0xffffffffffffffff;
      lVar18 = uStack_858 + 1;
      if (lVar18 != 0) goto LAB_0d66a73f;
    }
    if ((uVar4 & 1) != 0) {
      func_0x0412a280(uVar15,CONCAT26(uStack_e62,CONCAT24(uStack_e64,uStack_e68)) &
                             0xfffffffffffffffe);
    }
    plStack_dc8 = (long *)0x0;
    plStack_dc0 = (long *)0x0;
    if (DAT_0f7b8fb8 != '\0') goto LAB_0d66a78f;
  }
  else {
    func_0x04882e30();
  }
  iVar14 = func_0x04108328(&DAT_0f7b8fb8);
  if (iVar14 != 0) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    FUN_0410844d(&DAT_0f7b8fb8);
  }
LAB_0d66a78f:
  uStack_ca0 = uStack_448;
  puStack_ca8 = &uStack_848;
  (**(code **)(_DAT_0f7b8f98 + 0x148))(&uStack_e68,&DAT_0f7b8f98,&puStack_ca8);
  uVar16 = uStack_448;
  bStack_c18 = bStack_e28;
  if (bStack_e28 == 0) {
    uStack_c58 = uStack_e68;
    uStack_c54 = uStack_e64;
    uStack_c52 = uStack_e62;
    uStack_c50 = uStack_e60;
    uStack_c4c = uStack_e5c;
    uStack_c4a = uStack_e5a;
    uStack_c49 = uStack_e59;
    uStack_c48._0_4_ = (undefined4)uStack_e58;
    uStack_c48._4_4_ = uStack_e58._4_4_;
    uStack_c40._0_4_ = (undefined4)uStack_e50;
    uStack_c40._4_4_ = uStack_e50._4_4_;
    lStack_c38 = lStack_e48;
    uStack_c30._0_4_ = (undefined4)uStack_e40;
    uStack_c30._4_4_ = uStack_e40._4_4_;
    uStack_c28._0_4_ = (undefined4)uStack_e38;
    uStack_c28._4_4_ = uStack_e38._4_4_;
    lStack_c20 = lStack_e30;
    func_0x0d679aa0(&uStack_c58);
    lStack_de0 = lStack_c20;
    uVar11 = uStack_c28._4_4_;
    uVar10 = (undefined4)uStack_c28;
    uVar9 = uStack_c30._4_4_;
    uVar8 = (undefined4)uStack_c30;
    lStack_df8 = lStack_c38;
    uVar7 = uStack_c40._4_4_;
    uVar6 = (undefined4)uStack_c40;
    uVar5 = uStack_c48._4_4_;
    uVar2 = (undefined4)uStack_c48;
    uStack_e68 = uStack_c58;
    uStack_e64 = uStack_c54;
    uStack_e62 = uStack_c52;
    uStack_e60 = uStack_c50;
    uStack_e5c = uStack_c4c;
    uStack_e5a = uStack_c4a;
    uStack_e59 = uStack_c49;
    uStack_c48 = 0;
    uStack_c40 = 0;
    lStack_c38 = 0;
    uStack_c30 = 0;
    uStack_c28 = 0;
    lStack_c20 = 0;
    uStack_e58 = 0;
    uStack_e50 = 0;
    lStack_e48 = 0;
    uStack_e40 = 0;
    uStack_e38 = 0;
    lStack_e30 = 0;
    uStack_dd8 = uStack_dd8 & 0xffffffffffffff00;
    uStack_e18 = (ulong *)CONCAT44(CONCAT22(uStack_c52,uStack_c54),uStack_c58);
    uStack_e10 = CONCAT44(CONCAT13(uStack_c49,CONCAT12(uStack_c4a,uStack_c4c)),uStack_c50);
    uStack_e08 = CONCAT44(uVar5,uVar2);
    uStack_e00 = CONCAT44(uVar7,uVar6);
    uStack_df0 = CONCAT44(uVar9,uVar8);
    uStack_de8 = CONCAT44(uVar11,uVar10);
    func_0x048e6d60(&uStack_e68);
  }
  else {
    if ((DAT_0f7b8fb8 == '\0') && (iVar14 = func_0x04108328(&DAT_0f7b8fb8), iVar14 != 0)) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      FUN_0410844d(&DAT_0f7b8fb8);
    }
    uStack_db0 = uVar16;
    puStack_db8 = &uStack_848;
    (**(code **)(_DAT_0f7b8f98 + 0x10))(&uStack_d18,&DAT_0f7b8f98,&puStack_db8,&plStack_dc8,0x10f,0)
    ;
    bStack_e28 = bStack_cd8;
    if (bStack_cd8 == 0) {
      uStack_e68 = (uint)uStack_d18;
      uStack_e64 = (undefined2)((ulong)uStack_d18 >> 0x20);
      uStack_e62 = (undefined2)((ulong)uStack_d18 >> 0x30);
      uStack_e60 = (undefined4)uStack_d10;
      uStack_e5c = (undefined2)(uStack_d10 >> 0x20);
      uStack_e5a = (undefined1)(uStack_d10 >> 0x30);
      uStack_e59 = (undefined1)(uStack_d10 >> 0x38);
      uStack_e58._0_4_ = (undefined4)uStack_d08;
      uStack_e58._4_4_ = uStack_d08._4_4_;
      uStack_e50._0_4_ = (undefined4)uStack_d00;
      uStack_e50._4_4_ = uStack_d00._4_4_;
      lStack_e48 = lStack_cf8;
      uStack_e40._0_4_ = (undefined4)uStack_cf0;
      uStack_e40._4_4_ = uStack_cf0._4_4_;
      uStack_e38._0_4_ = (undefined4)uStack_ce8;
      uStack_e38._4_4_ = uStack_ce8._4_4_;
      lStack_e30 = lStack_ce0;
      func_0x0d679b60(&uStack_e68);
      lStack_de0 = lStack_e30;
      uVar12 = uStack_e38._4_4_;
      uVar11 = (undefined4)uStack_e38;
      uVar10 = uStack_e40._4_4_;
      uVar9 = (undefined4)uStack_e40;
      lStack_df8 = lStack_e48;
      uVar8 = uStack_e50._4_4_;
      uVar7 = (undefined4)uStack_e50;
      uVar6 = uStack_e58._4_4_;
      uVar5 = (undefined4)uStack_e58;
      uVar2 = CONCAT13(uStack_e59,CONCAT12(uStack_e5a,uStack_e5c));
      uStack_d18 = (ulong *)CONCAT44(CONCAT22(uStack_e62,uStack_e64),uStack_e68);
      uStack_d10 = CONCAT44(uVar2,uStack_e60);
      uStack_e58 = 0;
      uStack_e50 = 0;
      lStack_e48 = 0;
      uStack_e40 = 0;
      uStack_e38 = 0;
      lStack_e30 = 0;
      uStack_d08 = 0;
      uStack_d00 = 0;
      lStack_cf8 = 0;
      uStack_cf0 = 0;
      uStack_ce8 = 0;
      lStack_ce0 = 0;
      uStack_dd8 = uStack_dd8 & 0xffffffffffffff00;
      uStack_e18 = (ulong *)CONCAT44(CONCAT22(uStack_e62,uStack_e64),uStack_e68);
      uStack_e10 = CONCAT44(uVar2,uStack_e60);
      uStack_e08 = CONCAT44(uVar6,uVar5);
      uStack_e00 = CONCAT44(uVar8,uVar7);
      uStack_df0 = CONCAT44(uVar10,uVar9);
      uStack_de8 = CONCAT44(uVar12,uVar11);
      func_0x048e6d60(&uStack_d18);
    }
    else {
      bVar22 = (*pbStack_cd0 & 1) != 0;
      pbVar19 = pbStack_cd0 + 1;
      if (bVar22) {
        pbVar19 = *(byte **)(pbStack_cd0 + 0x10);
      }
      uVar16 = (ulong)(*pbStack_cd0 >> 1);
      if (bVar22) {
        uVar16 = *(ulong *)(pbStack_cd0 + 8);
      }
      func_0x0ee76e70(&puStack_db8,plStack_dc8,pbVar19,uVar16);
      bStack_cd8 = bStack_d78;
      if (bStack_d78 == 0) {
        uStack_d18 = puStack_db8;
        uStack_d10 = uStack_db0;
        uStack_d08._0_4_ = (undefined4)uStack_da8;
        uStack_d08._4_4_ = uStack_da8._4_4_;
        uStack_d00._0_4_ = (undefined4)uStack_da0;
        uStack_d00._4_4_ = uStack_da0._4_4_;
        lStack_cf8 = lStack_d98;
        uStack_cf0._0_4_ = (undefined4)uStack_d90;
        uStack_cf0._4_4_ = uStack_d90._4_4_;
        uStack_ce8._0_4_ = (undefined4)uStack_d88;
        uStack_ce8._4_4_ = uStack_d88._4_4_;
        lStack_ce0 = lStack_d80;
        func_0x0d679c20(&uStack_d18);
        lStack_de0 = lStack_ce0;
        uVar11 = uStack_ce8._4_4_;
        uVar10 = (undefined4)uStack_ce8;
        uVar9 = uStack_cf0._4_4_;
        uVar8 = (undefined4)uStack_cf0;
        lStack_df8 = lStack_cf8;
        uVar7 = uStack_d00._4_4_;
        uVar6 = (undefined4)uStack_d00;
        uVar5 = uStack_d08._4_4_;
        uVar2 = (undefined4)uStack_d08;
        puStack_db8 = uStack_d18;
        uStack_db0 = uStack_d10;
        uStack_d08 = 0;
        uStack_d00 = 0;
        lStack_cf8 = 0;
        uStack_cf0 = 0;
        uStack_ce8 = 0;
        lStack_ce0 = 0;
        uStack_da8 = 0;
        uStack_da0 = 0;
        lStack_d98 = 0;
        uStack_d90 = 0;
        uStack_d88 = 0;
        lStack_d80 = 0;
        uStack_dd8 = uStack_dd8 & 0xffffffffffffff00;
        uStack_e18 = uStack_d18;
        uStack_e10 = uStack_d10;
        uStack_e08 = CONCAT44(uVar5,uVar2);
        uStack_e00 = CONCAT44(uVar7,uVar6);
        uStack_df0 = CONCAT44(uVar9,uVar8);
        uStack_de8 = CONCAT44(uVar11,uVar10);
        func_0x048e6d60(&puStack_db8);
      }
      else {
        func_0x0ee56810(&uStack_d68,&plStack_dc8);
        bStack_d78 = bStack_d28;
        if (bStack_d28 == 0) {
          puStack_db8 = uStack_d68;
          uStack_db0 = uStack_d60;
          uStack_da8._0_4_ = (undefined4)uStack_d58;
          uStack_da8._4_4_ = uStack_d58._4_4_;
          uStack_da0._0_4_ = (undefined4)uStack_d50;
          uStack_da0._4_4_ = uStack_d50._4_4_;
          lStack_d98 = lStack_d48;
          uStack_d90._0_4_ = (undefined4)uStack_d40;
          uStack_d90._4_4_ = uStack_d40._4_4_;
          uStack_d88._0_4_ = (undefined4)uStack_d38;
          uStack_d88._4_4_ = uStack_d38._4_4_;
          lStack_d80 = lStack_d30;
          func_0x0d679ce0(&puStack_db8);
          lStack_de0 = lStack_d80;
          uVar11 = uStack_d88._4_4_;
          uVar10 = (undefined4)uStack_d88;
          uVar9 = uStack_d90._4_4_;
          uVar8 = (undefined4)uStack_d90;
          lStack_df8 = lStack_d98;
          uVar7 = uStack_da0._4_4_;
          uVar6 = (undefined4)uStack_da0;
          uVar5 = uStack_da8._4_4_;
          uVar2 = (undefined4)uStack_da8;
          uStack_d68 = puStack_db8;
          uStack_d60 = uStack_db0;
          uStack_da8 = 0;
          uStack_da0 = 0;
          lStack_d98 = 0;
          uStack_d90 = 0;
          uStack_d88 = 0;
          lStack_d80 = 0;
          uStack_d58 = 0;
          uStack_d50 = 0;
          lStack_d48 = 0;
          uStack_d40 = 0;
          uStack_d38 = 0;
          lStack_d30 = 0;
          uStack_dd8 = uStack_dd8 & 0xffffffffffffff00;
          uStack_e18 = puStack_db8;
          uStack_e10 = uStack_db0;
          uStack_e08 = CONCAT44(uVar5,uVar2);
          uStack_e00 = CONCAT44(uVar7,uVar6);
          uStack_df0 = CONCAT44(uVar9,uVar8);
          uStack_de8 = CONCAT44(uVar11,uVar10);
          func_0x048e6d60(&uStack_d68);
        }
        else {
          if ((DAT_0f7b8fb8 == '\0') && (iVar14 = func_0x04108328(&DAT_0f7b8fb8), iVar14 != 0)) {
            func_0x0ee5ea20(&DAT_0f7b8f98);
            func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
            FUN_0410844d(&DAT_0f7b8fb8);
          }
          uStack_cb0 = uStack_448;
          puStack_cc8 = &uStack_438;
          uStack_cc0 = uStack_38;
          puStack_cb8 = &uStack_848;
          (**(code **)(_DAT_0f7b8f98 + 0x38))(&uStack_e18,&DAT_0f7b8f98,&puStack_cb8,&puStack_cc8);
          bStack_d28 = (byte)uStack_dd8;
          if ((byte)uStack_dd8 == 0) {
            uStack_d68 = uStack_e18;
            uStack_d60 = uStack_e10;
            uStack_d58._0_4_ = (undefined4)uStack_e08;
            uStack_d58._4_4_ = uStack_e08._4_4_;
            uStack_d50._0_4_ = (undefined4)uStack_e00;
            uStack_d50._4_4_ = uStack_e00._4_4_;
            lStack_d48 = lStack_df8;
            uStack_d40._0_4_ = (undefined4)uStack_df0;
            uStack_d40._4_4_ = uStack_df0._4_4_;
            uStack_d38._0_4_ = (undefined4)uStack_de8;
            uStack_d38._4_4_ = uStack_de8._4_4_;
            lStack_d30 = lStack_de0;
            func_0x0d679da0(&uStack_d68);
            lStack_de0 = lStack_d30;
            uVar11 = uStack_d38._4_4_;
            uVar10 = (undefined4)uStack_d38;
            uVar9 = uStack_d40._4_4_;
            uVar8 = (undefined4)uStack_d40;
            lStack_df8 = lStack_d48;
            uVar7 = uStack_d50._4_4_;
            uVar6 = (undefined4)uStack_d50;
            uVar5 = uStack_d58._4_4_;
            uVar2 = (undefined4)uStack_d58;
            uStack_c98 = (undefined4)uStack_d68;
            uStack_c94 = uStack_d68._4_4_;
            uStack_c90 = (undefined4)uStack_d60;
            uStack_c8c = uStack_d60._4_4_;
            uStack_d58 = 0;
            uStack_d50 = 0;
            lStack_d48 = 0;
            uStack_d40 = 0;
            uStack_d38 = 0;
            lStack_d30 = 0;
            uStack_c88 = 0;
            uStack_c80 = 0;
            uStack_c78 = 0;
            uStack_c70 = 0;
            uStack_c68 = 0;
            uStack_c60 = 0;
            uStack_dd8 = uStack_dd8 & 0xffffffffffffff00;
            uStack_e18 = uStack_d68;
            uStack_e10 = uStack_d60;
            uStack_e08 = CONCAT44(uVar5,uVar2);
            uStack_e00 = CONCAT44(uVar7,uVar6);
            uStack_df0 = CONCAT44(uVar9,uVar8);
            uStack_de8 = CONCAT44(uVar11,uVar10);
            func_0x048e6d60(&uStack_c98);
          }
          else {
            uStack_e18 = (ulong *)0x0;
            uStack_e10 = 0;
            uStack_e08 = 0;
            uStack_e00 = 0;
            lStack_df8 = 0;
            uStack_df0 = 0;
            uStack_de8 = 0;
            lStack_de0 = 0;
            uStack_dd8 = 1;
          }
          lVar18 = uStack_d40;
          if ((bStack_d28 & 1) == 0) {
            lVar3 = uStack_d38;
            if (uStack_d40 != 0) {
              while (lVar18 != lVar3) {
                func_0x048b3e80(lVar3 + -0x40);
                lVar3 = lVar3 + -0x40;
              }
              uStack_d38 = lVar18;
              func_0x0412a280(uStack_d40,lStack_d30 - uStack_d40);
            }
            lVar3 = uStack_d58;
            lVar18 = uStack_d50;
            if (uStack_d58 != 0) {
              for (; lVar3 != lVar18; lVar18 = lVar18 + -0x50) {
                if ((*(char *)(lVar18 + -8) == '\x01') && ((*(byte *)(lVar18 + -0x30) & 1) != 0)) {
                  func_0x0412a280(*(undefined8 *)(lVar18 + -0x20),
                                  *(ulong *)(lVar18 + -0x30) & 0xfffffffffffffffe);
                }
              }
              uStack_d50 = lVar3;
              func_0x0412a280(uStack_d58,lStack_d48 - uStack_d58);
            }
          }
        }
        lVar18 = uStack_d90;
        if (bStack_d78 == 0) {
          lVar3 = uStack_d88;
          if (uStack_d90 != 0) {
            while (lVar18 != lVar3) {
              func_0x048b3e80(lVar3 + -0x40);
              lVar3 = lVar3 + -0x40;
            }
            uStack_d88 = lVar18;
            func_0x0412a280(uStack_d90,lStack_d80 - uStack_d90);
          }
          lVar3 = uStack_da8;
          lVar18 = uStack_da0;
          if (uStack_da8 != 0) {
            for (; lVar3 != lVar18; lVar18 = lVar18 + -0x50) {
              if ((*(char *)(lVar18 + -8) == '\x01') && ((*(byte *)(lVar18 + -0x30) & 1) != 0)) {
                func_0x0412a280(*(undefined8 *)(lVar18 + -0x20),
                                *(ulong *)(lVar18 + -0x30) & 0xfffffffffffffffe);
              }
            }
            uStack_da0 = lVar3;
            func_0x0412a280(uStack_da8,lStack_d98 - uStack_da8);
          }
        }
      }
      lVar18 = uStack_cf0;
      if (bStack_cd8 == 0) {
        lVar3 = uStack_ce8;
        if (uStack_cf0 != 0) {
          while (lVar18 != lVar3) {
            func_0x048b3e80(lVar3 + -0x40);
            lVar3 = lVar3 + -0x40;
          }
          uStack_ce8 = lVar18;
          func_0x0412a280(uStack_cf0,lStack_ce0 - uStack_cf0);
        }
        lVar3 = uStack_d08;
        lVar18 = uStack_d00;
        if (uStack_d08 != 0) {
          for (; lVar3 != lVar18; lVar18 = lVar18 + -0x50) {
            if ((*(char *)(lVar18 + -8) == '\x01') && ((*(byte *)(lVar18 + -0x30) & 1) != 0)) {
              func_0x0412a280(*(undefined8 *)(lVar18 + -0x20),
                              *(ulong *)(lVar18 + -0x30) & 0xfffffffffffffffe);
            }
          }
          uStack_d00 = lVar3;
          func_0x0412a280(uStack_d08,lStack_cf8 - uStack_d08);
        }
      }
    }
    lVar18 = uStack_e40;
    if (bStack_e28 == 0) {
      lVar3 = uStack_e38;
      if (uStack_e40 != 0) {
        while (lVar18 != lVar3) {
          func_0x048b3e80(lVar3 + -0x40);
          lVar3 = lVar3 + -0x40;
        }
        uStack_e38 = lVar18;
        func_0x0412a280(uStack_e40,lStack_e30 - uStack_e40);
      }
      uVar15 = uStack_e58;
      uVar16 = uStack_e50;
      if (uStack_e58 != 0) {
        for (; uVar15 != uVar16; uVar16 = uVar16 - 0x50) {
          if ((*(char *)(uVar16 - 8) == '\x01') && ((*(byte *)(uVar16 - 0x30) & 1) != 0)) {
            func_0x0412a280(*(undefined8 *)(uVar16 - 0x20),
                            *(ulong *)(uVar16 - 0x30) & 0xfffffffffffffffe);
          }
        }
        uStack_e50 = uVar15;
        func_0x0412a280(uStack_e58,lStack_e48 - uStack_e58);
      }
    }
  }
  lVar18 = uStack_c30;
  if (bStack_c18 == 0) {
    lVar3 = uStack_c28;
    if (uStack_c30 != 0) {
      while (lVar18 != lVar3) {
        func_0x048b3e80(lVar3 + -0x40);
        lVar3 = lVar3 + -0x40;
      }
      uStack_c28 = lVar18;
      func_0x0412a280(uStack_c30,lStack_c20 - uStack_c30);
    }
    uVar15 = uStack_c48;
    uVar16 = uStack_c40;
    if (uStack_c48 != 0) {
      for (; uVar15 != uVar16; uVar16 = uVar16 - 0x50) {
        if ((*(char *)(uVar16 - 8) == '\x01') && ((*(byte *)(uVar16 - 0x30) & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(uVar16 - 0x20),
                          *(ulong *)(uVar16 - 0x30) & 0xfffffffffffffffe);
        }
      }
      uStack_c40 = uVar15;
      func_0x0412a280(uStack_c48,lStack_c38 - uStack_c48);
    }
  }
  if ((plStack_dc8 != (long *)0x0) &&
     (func_0x0ee56810(&uStack_c58,&plStack_dc8), lVar18 = uStack_c30, bStack_c18 == 0)) {
    lVar3 = uStack_c28;
    if (uStack_c30 != 0) {
      while (lVar18 != lVar3) {
        func_0x048b3e80(lVar3 + -0x40);
        lVar3 = lVar3 + -0x40;
      }
      uStack_c28 = lVar18;
      func_0x0412a280(uStack_c30,lStack_c20 - uStack_c30);
    }
    uVar15 = uStack_c48;
    uVar16 = uStack_c40;
    if (uStack_c48 != 0) {
      for (; uVar15 != uVar16; uVar16 = uVar16 - 0x50) {
        if ((*(char *)(uVar16 - 8) == '\x01') && ((*(byte *)(uVar16 - 0x30) & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(uVar16 - 0x20),
                          *(ulong *)(uVar16 - 0x30) & 0xfffffffffffffffe);
        }
      }
      uStack_c40 = uVar15;
      func_0x0412a280(uStack_c48,lStack_c38 - uStack_c48);
    }
  }
  plVar13 = plStack_dc0;
  plStack_dc0 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  plVar13 = plStack_dc8;
  plStack_dc8 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  uStack_438 = 0xc74a8599753162e2;
  puStack_430 = &UNK_0140f690;
  uStack_428 = 1;
  uStack_420 = 0x32;
  if ((byte)uStack_dd8 == 0) {
    uStack_848 = 0;
    uStack_840 = 0;
    uStack_838 = 0;
    func_0x0eedeb80(2,0x2d,&uStack_e18,&uStack_848,&uStack_438);
    if ((uStack_848 & 1) != 0) {
      func_0x0412a280(uStack_838,uStack_848 & 0xfffffffffffffffe);
    }
  }
  lVar18 = uStack_df0;
  if (((byte)uStack_dd8 & 1) == 0) {
    lVar3 = uStack_de8;
    if (uStack_df0 != 0) {
      while (lVar18 != lVar3) {
        func_0x048b3e80(lVar3 + -0x40);
        lVar3 = lVar3 + -0x40;
      }
      uStack_de8 = lVar18;
      func_0x0412a280(uStack_df0,lStack_de0 - uStack_df0);
    }
    lVar3 = uStack_e08;
    lVar18 = uStack_e00;
    if (uStack_e08 != 0) {
      for (; lVar3 != lVar18; lVar18 = lVar18 + -0x50) {
        if ((*(char *)(lVar18 + -8) == '\x01') && ((*(byte *)(lVar18 + -0x30) & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(lVar18 + -0x20),
                          *(ulong *)(lVar18 + -0x30) & 0xfffffffffffffffe);
        }
      }
      uStack_e00 = lVar3;
      func_0x0412a280(uStack_e08,lStack_df8 - uStack_e08);
    }
  }
  return;
}



/* ---- referenced strings ----
 * 0x128397b  contents.json
 * 0x1283980  nts.json
 */
