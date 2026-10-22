/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5282630 (ELF vaddr 0x5182630)
 * Label: caller-of-callee
 * Body:  [[05282630, 05285ceb] [05286162, 05286196] [0528619a, 0528621e] [0528628f, 052862a0] [05286361, 0528637f] [0528644b, 052864ff]]
 * Ghidra: FUN_05282630
 */


/* WARNING: Removing unreachable block (ram,0x052833e9) */
/* WARNING: Removing unreachable block (ram,0x05283e94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_05282630(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  uint5 uVar4;
  uint5 uVar5;
  uint6 uVar6;
  uint7 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  ulong uVar12;
  undefined5 *puVar13;
  long lVar14;
  undefined8 uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long *in_FS_OFFSET;
  byte bStack_d88;
  undefined4 uStack_d87;
  uint3 uStack_d83;
  byte bStack_d80;
  undefined4 uStack_d7f;
  uint3 uStack_d7b;
  undefined1 uStack_d78;
  undefined2 uStack_d77;
  undefined2 uStack_d75;
  undefined1 uStack_d73;
  undefined2 uStack_d72;
  long lStack_d70;
  long lStack_d68;
  long lStack_d60;
  byte bStack_d48;
  undefined5 uStack_d47;
  ushort uStack_d42;
  uint uStack_d40;
  undefined2 uStack_d3c;
  undefined1 uStack_d3a;
  byte bStack_d39;
  undefined5 *puStack_d38;
  long lStack_d30;
  long lStack_d28;
  long lStack_d20;
  byte bStack_d08;
  undefined4 uStack_d07;
  uint3 uStack_d03;
  byte bStack_d00;
  undefined4 uStack_cff;
  uint3 uStack_cfb;
  undefined1 uStack_cf8;
  undefined2 uStack_cf7;
  undefined5 uStack_cf5;
  long lStack_cf0;
  long lStack_ce8;
  long lStack_ce0;
  undefined4 *puStack_cc8;
  undefined4 *puStack_cc0;
  undefined4 *puStack_cb8;
  undefined8 uStack_cb0;
  undefined1 uStack_ca8;
  undefined *puStack_ca0;
  ulong uStack_c98;
  ulong uStack_c90;
  undefined8 uStack_c88;
  undefined1 uStack_c80;
  undefined *puStack_c78;
  ulong uStack_c70;
  ulong uStack_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined *puStack_c38;
  ulong uStack_c30;
  ulong uStack_c28;
  undefined8 uStack_c20;
  ulong uStack_c18;
  undefined8 uStack_c10;
  undefined *puStack_bf8;
  ulong uStack_bf0;
  ulong uStack_be8;
  undefined8 uStack_be0;
  undefined8 uStack_bd8;
  undefined8 uStack_bd0;
  undefined4 auStack_bc0 [2];
  long lStack_bb8;
  long lStack_bb0;
  long lStack_ba8;
  undefined4 uStack_ba0;
  long *plStack_b98;
  long *plStack_b90;
  long lStack_b88;
  long lStack_b80;
  long lStack_b78;
  undefined4 auStack_b70 [2];
  long lStack_b68;
  long lStack_b60;
  long lStack_b58;
  undefined4 uStack_b50;
  byte bStack_b48;
  undefined4 uStack_b47;
  uint3 uStack_b43;
  byte bStack_b40;
  undefined4 uStack_b3f;
  undefined2 uStack_b3b;
  byte bStack_b39;
  undefined1 uStack_b38;
  undefined4 uStack_b37;
  undefined1 uStack_b33;
  undefined1 uStack_b32;
  undefined1 uStack_b31;
  long lStack_b30;
  long lStack_b28;
  long lStack_b20;
  undefined1 auStack_b10 [56];
  undefined1 auStack_ad8 [56];
  undefined1 auStack_aa0 [56];
  undefined8 uStack_a68;
  undefined4 *puStack_a60;
  undefined5 *puStack_a58;
  long lStack_a50;
  long lStack_a48;
  long lStack_a40;
  undefined *puStack_a30;
  ulong uStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined8 uStack_a10;
  undefined8 uStack_a08;
  undefined *puStack_9f8;
  ulong uStack_9f0;
  ulong uStack_9e8;
  undefined8 uStack_9e0;
  ulong uStack_9d8;
  undefined *puStack_9c0;
  ulong uStack_9b8;
  ulong uStack_9b0;
  undefined4 uStack_9a8;
  undefined4 uStack_9a4;
  undefined4 uStack_9a0;
  undefined4 uStack_99c;
  undefined *puStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  long lStack_968;
  ulong uStack_960;
  undefined8 uStack_958;
  undefined *puStack_950;
  ulong uStack_948;
  ulong uStack_940;
  undefined8 uStack_938;
  undefined1 uStack_930;
  undefined *puStack_928;
  ulong uStack_920;
  ulong uStack_918;
  undefined8 uStack_910;
  undefined1 uStack_908;
  undefined *puStack_900;
  ulong uStack_8f8;
  ulong uStack_8f0;
  undefined8 uStack_8e8;
  undefined1 uStack_8e0;
  undefined *puStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  undefined8 uStack_8c0;
  undefined1 uStack_8b8;
  undefined *puStack_8b0;
  ulong uStack_8a8;
  ulong uStack_8a0;
  undefined8 uStack_898;
  undefined1 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined1 auStack_818 [56];
  undefined1 auStack_7e0 [24];
  undefined4 uStack_7c8;
  undefined4 uStack_7c4;
  undefined4 uStack_7c0;
  undefined4 uStack_7bc;
  undefined *puStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  byte bStack_788;
  undefined4 uStack_787;
  uint3 uStack_783;
  byte bStack_780;
  undefined4 uStack_77f;
  uint3 uStack_77b;
  undefined1 uStack_778;
  undefined1 uStack_777;
  undefined6 uStack_776;
  long lStack_770;
  long lStack_768;
  long lStack_760;
  undefined1 auStack_428 [8];
  long lStack_420;
  long lStack_418;
  long lStack_410;
  long lStack_3f8;
  long lStack_3f0;
  long lStack_3e8;
  long lStack_3d0;
  long lStack_3c8;
  long lStack_3c0;
  byte bStack_3b0;
  undefined4 uStack_3af;
  undefined4 uStack_3ab;
  undefined4 uStack_3a7;
  undefined4 uStack_3a3;
  undefined2 uStack_39f;
  undefined1 uStack_39d;
  undefined4 uStack_39c;
  long lStack_398;
  long lStack_390;
  long lStack_388;
  
  bStack_3b0 = 0x24;
  uStack_3af = _DAT_0149570e;
  uStack_3ab = _UNK_01495712;
  uStack_3a7 = _UNK_01495716;
  uStack_3a3 = _UNK_0149571a;
  uStack_39f = 0x676e;
  uStack_39d = 0;
  lVar2 = *in_FS_OFFSET;
  if (*(char *)(lVar2 + -0x16b0) == '\0') {
    *(undefined1 *)(lVar2 + -0x16b0) = 1;
    *(undefined **)(lVar2 + -0x1750) = &UNK_0f53bd88;
    *(undefined8 *)(lVar2 + -0x1738) = 0x1032547698badcfe;
    uVar15 = _UNK_014e11d8;
    *(undefined8 *)(lVar2 + -0x1748) = _DAT_014e11d0;
    *(undefined8 *)(lVar2 + -0x1740) = uVar15;
    *(undefined8 *)(lVar2 + -0x1730) = 0;
    *(undefined8 *)(lVar2 + -0x1728) = 0;
    *(undefined8 *)(lVar2 + -0x1720) = 0;
    *(undefined8 *)(lVar2 + -0x1718) = 0;
    *(undefined8 *)(lVar2 + -0x1710) = 0;
    *(undefined8 *)(lVar2 + -0x1708) = 0;
    *(undefined8 *)(lVar2 + -0x1700) = 0;
    *(undefined8 *)(lVar2 + -0x16f8) = 0;
    *(undefined8 *)(lVar2 + -0x16f0) = 0;
    *(undefined8 *)(lVar2 + -0x16e8) = 0;
    *(undefined8 *)(lVar2 + -0x16e0) = 0;
    *(undefined8 *)(lVar2 + -0x16d8) = 0;
    *(undefined8 *)(lVar2 + -0x16d0) = 0;
    *(undefined8 *)(lVar2 + -0x16c8) = 0;
    *(undefined8 *)(lVar2 + -0x16c0) = 0;
    *(undefined8 *)(lVar2 + -0x16b8) = 0;
  }
  plVar1 = (long *)(lVar2 + -0x1750);
  (**(code **)(*(long *)(lVar2 + -0x1750) + 0x10))(plVar1);
  if ((bStack_3b0 & 1) == 0) {
    puVar10 = &uStack_3af;
    uVar16 = (uint)(bStack_3b0 >> 1);
  }
  else {
    puVar10 = (undefined4 *)
              CONCAT44(uStack_39c,CONCAT13(uStack_39d,CONCAT21(uStack_39f,uStack_3a3._3_1_)));
    uVar16 = CONCAT31((undefined3)uStack_3a7,uStack_3ab._3_1_);
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,puVar10,uVar16);
  (**(code **)(*plVar1 + 0x20))(plVar1,&bStack_788);
  uVar4 = CONCAT41(uStack_787,bStack_788);
  uVar5 = CONCAT41(uStack_77f,bStack_780);
  uStack_8f8 = ((ulong)(uStack_783 >> 0x10) | (ulong)uStack_783 & 0xff00 |
                ((ulong)uStack_783 & 0xff) << 0x10 | ((ulong)uVar4 & 0xff00000000) >> 8 |
                ((ulong)uVar4 & 0xff000000) << 8 | ((ulong)uVar4 & 0xff0000) << 0x18 |
                ((ulong)uVar4 & 0xff00) << 0x28 | CONCAT35(uStack_783,uVar4) << 0x38) ^
               *(ulong *)(param_2 + 8);
  uStack_8f0 = ((ulong)(uStack_77b >> 0x10) | (ulong)uStack_77b & 0xff00 |
                ((ulong)uStack_77b & 0xff) << 0x10 | ((ulong)uVar5 & 0xff00000000) >> 8 |
                ((ulong)uVar5 & 0xff000000) << 8 | ((ulong)uVar5 & 0xff0000) << 0x18 |
                ((ulong)uVar5 & 0xff00) << 0x28 | CONCAT35(uStack_77b,uVar5) << 0x38) ^
               *(ulong *)(param_2 + 0x10);
  puStack_900 = &UNK_0ef512d0;
  if (uStack_8f0 == 0 && uStack_8f8 == 0) {
    uStack_8f8 = 0x9e3779b97f4a7c15;
    uStack_8f0 = 0x6a09e667f3bcc909;
  }
  uStack_8e0 = 0;
  uStack_8e8 = 0;
  if ((bStack_3b0 & 1) != 0) {
    uStack_8e0 = 0;
    uStack_8e8 = 0;
    func_0x0412a280(CONCAT44(uStack_39c,CONCAT13(uStack_39d,CONCAT21(uStack_39f,uStack_3a3._3_1_))),
                    CONCAT35((undefined3)uStack_3ab,CONCAT41(uStack_3af,bStack_3b0)) &
                    0xfffffffffffffffe);
  }
  auStack_bc0[0] = 8;
  lStack_bb8 = 0;
  lStack_bb0 = 0;
  lStack_ba8 = 0;
  func_0x0d3430a0(auStack_bc0,&puStack_900,0);
  bStack_3b0 = 0x22;
  uStack_3af = _DAT_013f9e45;
  uStack_3ab = _UNK_013f9e49;
  uStack_3a7 = _UNK_013f9e4d;
  uStack_3a3 = _UNK_013f9e51;
  uStack_39f = 0x6e;
  if (*(char *)(lVar2 + -0x16b0) == '\0') {
    *(undefined1 *)(lVar2 + -0x16b0) = 1;
    *(undefined **)(lVar2 + -0x1750) = &UNK_0f53bd88;
    *(undefined8 *)(lVar2 + -0x1738) = 0x1032547698badcfe;
    uVar15 = _UNK_014e11d8;
    *(undefined8 *)(lVar2 + -0x1748) = _DAT_014e11d0;
    *(undefined8 *)(lVar2 + -0x1740) = uVar15;
    *(undefined8 *)(lVar2 + -0x1730) = 0;
    *(undefined8 *)(lVar2 + -0x1728) = 0;
    *(undefined8 *)(lVar2 + -0x1720) = 0;
    *(undefined8 *)(lVar2 + -0x1718) = 0;
    *(undefined8 *)(lVar2 + -0x1710) = 0;
    *(undefined8 *)(lVar2 + -0x1708) = 0;
    *(undefined8 *)(lVar2 + -0x1700) = 0;
    *(undefined8 *)(lVar2 + -0x16f8) = 0;
    *(undefined8 *)(lVar2 + -0x16f0) = 0;
    *(undefined8 *)(lVar2 + -0x16e8) = 0;
    *(undefined8 *)(lVar2 + -0x16e0) = 0;
    *(undefined8 *)(lVar2 + -0x16d8) = 0;
    *(undefined8 *)(lVar2 + -0x16d0) = 0;
    *(undefined8 *)(lVar2 + -0x16c8) = 0;
    *(undefined8 *)(lVar2 + -0x16c0) = 0;
    *(undefined8 *)(lVar2 + -0x16b8) = 0;
  }
  (**(code **)(*plVar1 + 0x10))(plVar1);
  if ((bStack_3b0 & 1) == 0) {
    puVar10 = &uStack_3af;
    uVar16 = (uint)(bStack_3b0 >> 1);
  }
  else {
    puVar10 = (undefined4 *)
              CONCAT44(uStack_39c,CONCAT13(uStack_39d,CONCAT21(uStack_39f,uStack_3a3._3_1_)));
    uVar16 = CONCAT31((undefined3)uStack_3a7,uStack_3ab._3_1_);
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,puVar10,uVar16);
  (**(code **)(*plVar1 + 0x20))(plVar1,&bStack_788);
  uVar4 = CONCAT41(uStack_787,bStack_788);
  uVar5 = CONCAT41(uStack_77f,bStack_780);
  uStack_920 = ((ulong)(uStack_783 >> 0x10) | (ulong)uStack_783 & 0xff00 |
                ((ulong)uStack_783 & 0xff) << 0x10 | ((ulong)uVar4 & 0xff00000000) >> 8 |
                ((ulong)uVar4 & 0xff000000) << 8 | ((ulong)uVar4 & 0xff0000) << 0x18 |
                ((ulong)uVar4 & 0xff00) << 0x28 | CONCAT35(uStack_783,uVar4) << 0x38) ^
               *(ulong *)(param_2 + 8);
  uStack_918 = ((ulong)(uStack_77b >> 0x10) | (ulong)uStack_77b & 0xff00 |
                ((ulong)uStack_77b & 0xff) << 0x10 | ((ulong)uVar5 & 0xff00000000) >> 8 |
                ((ulong)uVar5 & 0xff000000) << 8 | ((ulong)uVar5 & 0xff0000) << 0x18 |
                ((ulong)uVar5 & 0xff00) << 0x28 | CONCAT35(uStack_77b,uVar5) << 0x38) ^
               *(ulong *)(param_2 + 0x10);
  puStack_928 = &UNK_0ef512d0;
  if (uStack_918 == 0 && uStack_920 == 0) {
    uStack_920 = 0x9e3779b97f4a7c15;
    uStack_918 = 0x6a09e667f3bcc909;
  }
  uStack_908 = 0;
  uStack_910 = 0;
  if ((bStack_3b0 & 1) != 0) {
    uStack_908 = 0;
    uStack_910 = 0;
    func_0x0412a280(CONCAT44(uStack_39c,CONCAT13(uStack_39d,CONCAT21(uStack_39f,uStack_3a3._3_1_))),
                    CONCAT35((undefined3)uStack_3ab,CONCAT41(uStack_3af,bStack_3b0)) &
                    0xfffffffffffffffe);
  }
  uStack_3ab._3_1_ = (byte)&puStack_928;
  uStack_3a7 = (undefined4)((ulong)&puStack_928 >> 8);
  uStack_3a3._0_3_ = (undefined3)((ulong)&puStack_928 >> 0x28);
  bStack_3b0 = 0x48;
  uStack_3af = 0xf460b;
  uStack_3ab = (uint)uStack_3ab._3_1_ << 0x18;
  func_0x0d33fc30(auStack_428,&bStack_3b0);
  bStack_3b0 = 0x22;
  uStack_3af = _DAT_0127248d;
  uStack_3ab = _UNK_01272491;
  uStack_3a7 = _UNK_01272495;
  uStack_3a3 = _UNK_01272499;
  uStack_39f = 0x65;
  if (*(char *)(lVar2 + -0x16b0) == '\0') {
    *(undefined1 *)(lVar2 + -0x16b0) = 1;
    *(undefined **)(lVar2 + -0x1750) = &UNK_0f53bd88;
    *(undefined8 *)(lVar2 + -0x1738) = 0x1032547698badcfe;
    uVar15 = _UNK_014e11d8;
    *(undefined8 *)(lVar2 + -0x1748) = _DAT_014e11d0;
    *(undefined8 *)(lVar2 + -0x1740) = uVar15;
    *(undefined8 *)(lVar2 + -0x1730) = 0;
    *(undefined8 *)(lVar2 + -0x1728) = 0;
    *(undefined8 *)(lVar2 + -0x1720) = 0;
    *(undefined8 *)(lVar2 + -0x1718) = 0;
    *(undefined8 *)(lVar2 + -0x1710) = 0;
    *(undefined8 *)(lVar2 + -0x1708) = 0;
    *(undefined8 *)(lVar2 + -0x1700) = 0;
    *(undefined8 *)(lVar2 + -0x16f8) = 0;
    *(undefined8 *)(lVar2 + -0x16f0) = 0;
    *(undefined8 *)(lVar2 + -0x16e8) = 0;
    *(undefined8 *)(lVar2 + -0x16e0) = 0;
    *(undefined8 *)(lVar2 + -0x16d8) = 0;
    *(undefined8 *)(lVar2 + -0x16d0) = 0;
    *(undefined8 *)(lVar2 + -0x16c8) = 0;
    *(undefined8 *)(lVar2 + -0x16c0) = 0;
    *(undefined8 *)(lVar2 + -0x16b8) = 0;
  }
  (**(code **)(*plVar1 + 0x10))(plVar1);
  if ((bStack_3b0 & 1) == 0) {
    puVar10 = &uStack_3af;
    uVar16 = (uint)(bStack_3b0 >> 1);
  }
  else {
    puVar10 = (undefined4 *)
              CONCAT44(uStack_39c,CONCAT13(uStack_39d,CONCAT21(uStack_39f,uStack_3a3._3_1_)));
    uVar16 = CONCAT31((undefined3)uStack_3a7,uStack_3ab._3_1_);
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,puVar10,uVar16);
  (**(code **)(*plVar1 + 0x20))(plVar1,&bStack_788);
  uVar4 = CONCAT41(uStack_787,bStack_788);
  uVar5 = CONCAT41(uStack_77f,bStack_780);
  uStack_948 = ((ulong)(uStack_783 >> 0x10) | (ulong)uStack_783 & 0xff00 |
                ((ulong)uStack_783 & 0xff) << 0x10 | ((ulong)uVar4 & 0xff00000000) >> 8 |
                ((ulong)uVar4 & 0xff000000) << 8 | ((ulong)uVar4 & 0xff0000) << 0x18 |
                ((ulong)uVar4 & 0xff00) << 0x28 | CONCAT35(uStack_783,uVar4) << 0x38) ^
               *(ulong *)(param_2 + 8);
  uStack_940 = ((ulong)(uStack_77b >> 0x10) | (ulong)uStack_77b & 0xff00 |
                ((ulong)uStack_77b & 0xff) << 0x10 | ((ulong)uVar5 & 0xff00000000) >> 8 |
                ((ulong)uVar5 & 0xff000000) << 8 | ((ulong)uVar5 & 0xff0000) << 0x18 |
                ((ulong)uVar5 & 0xff00) << 0x28 | CONCAT35(uStack_77b,uVar5) << 0x38) ^
               *(ulong *)(param_2 + 0x10);
  puStack_950 = &UNK_0ef512d0;
  if (uStack_940 == 0 && uStack_948 == 0) {
    uStack_948 = 0x9e3779b97f4a7c15;
    uStack_940 = 0x6a09e667f3bcc909;
  }
  uStack_930 = 0;
  uStack_938 = 0;
  if ((bStack_3b0 & 1) != 0) {
    uStack_930 = 0;
    uStack_938 = 0;
    func_0x0412a280(CONCAT44(uStack_39c,CONCAT13(uStack_39d,CONCAT21(uStack_39f,uStack_3a3._3_1_))),
                    CONCAT35((undefined3)uStack_3ab,CONCAT41(uStack_3af,bStack_3b0)) &
                    0xfffffffffffffffe);
  }
  auStack_b70[0] = 4;
  lStack_b68 = 0;
  lStack_b60 = 0;
  lStack_b58 = 0;
  func_0x0d3430a0(auStack_b70,&puStack_950,1);
  puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar10 == (undefined4 *)0x0) {
    FUN_0eec74c0(0x20,0);
  }
  uVar15 = _UNK_0135c409;
  uStack_3a3._3_1_ = SUB81(puVar10,0);
  uStack_39f = (undefined2)((ulong)puVar10 >> 8);
  uStack_39d = (undefined1)((ulong)puVar10 >> 0x18);
  uStack_39c = (undefined4)((ulong)puVar10 >> 0x20);
  bStack_3b0 = 0x21;
  uStack_3af = 0;
  uStack_3ab._0_3_ = 0;
  uStack_3ab._3_1_ = 0x19;
  uStack_3a7 = 0;
  uStack_3a3._0_3_ = 0;
  *(ulong *)((long)puVar10 + 9) = CONCAT17(UNK_0135c408,CONCAT43(_UNK_0135c404,_DAT_0135c401));
  *(undefined8 *)((long)puVar10 + 0x11) = uVar15;
  uVar9 = _UNK_0135c404;
  uVar8 = _UNK_0135c400;
  uVar3 = _UNK_0135c3fc;
  *puVar10 = _DAT_0135c3f8;
  puVar10[1] = uVar3;
  puVar10[2] = uVar8;
  puVar10[3] = uVar9;
  *(undefined1 *)((long)puVar10 + 0x19) = 0;
  if (*(char *)(lVar2 + -0x16b0) == '\0') {
    *(undefined1 *)(lVar2 + -0x16b0) = 1;
    *(undefined **)(lVar2 + -0x1750) = &UNK_0f53bd88;
    *(undefined8 *)(lVar2 + -0x1738) = 0x1032547698badcfe;
    uVar15 = _UNK_014e11d8;
    *(undefined8 *)(lVar2 + -0x1748) = _DAT_014e11d0;
    *(undefined8 *)(lVar2 + -0x1740) = uVar15;
    *(undefined8 *)(lVar2 + -0x1730) = 0;
    *(undefined8 *)(lVar2 + -0x1728) = 0;
    *(undefined8 *)(lVar2 + -0x1720) = 0;
    *(undefined8 *)(lVar2 + -0x1718) = 0;
    *(undefined8 *)(lVar2 + -0x1710) = 0;
    *(undefined8 *)(lVar2 + -0x1708) = 0;
    *(undefined8 *)(lVar2 + -0x1700) = 0;
    *(undefined8 *)(lVar2 + -0x16f8) = 0;
    *(undefined8 *)(lVar2 + -0x16f0) = 0;
    *(undefined8 *)(lVar2 + -0x16e8) = 0;
    *(undefined8 *)(lVar2 + -0x16e0) = 0;
    *(undefined8 *)(lVar2 + -0x16d8) = 0;
    *(undefined8 *)(lVar2 + -0x16d0) = 0;
    *(undefined8 *)(lVar2 + -0x16c8) = 0;
    *(undefined8 *)(lVar2 + -0x16c0) = 0;
    *(undefined8 *)(lVar2 + -0x16b8) = 0;
  }
  (**(code **)(*plVar1 + 0x10))(plVar1);
  if ((bStack_3b0 & 1) == 0) {
    uVar16 = (uint)(bStack_3b0 >> 1);
    puVar10 = &uStack_3af;
  }
  else {
    puVar10 = (undefined4 *)
              CONCAT44(uStack_39c,CONCAT13(uStack_39d,CONCAT21(uStack_39f,uStack_3a3._3_1_)));
    uVar16 = CONCAT31((undefined3)uStack_3a7,uStack_3ab._3_1_);
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,puVar10,uVar16);
  (**(code **)(*plVar1 + 0x20))(plVar1,&bStack_788);
  uVar4 = CONCAT41(uStack_787,bStack_788);
  uVar5 = CONCAT41(uStack_77f,bStack_780);
  uStack_c30 = ((ulong)(uStack_783 >> 0x10) | (ulong)uStack_783 & 0xff00 |
                ((ulong)uStack_783 & 0xff) << 0x10 | ((ulong)uVar4 & 0xff00000000) >> 8 |
                ((ulong)uVar4 & 0xff000000) << 8 | ((ulong)uVar4 & 0xff0000) << 0x18 |
                ((ulong)uVar4 & 0xff00) << 0x28 | CONCAT35(uStack_783,uVar4) << 0x38) ^
               *(ulong *)(param_2 + 8);
  uStack_c28 = ((ulong)(uStack_77b >> 0x10) | (ulong)uStack_77b & 0xff00 |
                ((ulong)uStack_77b & 0xff) << 0x10 | ((ulong)uVar5 & 0xff00000000) >> 8 |
                ((ulong)uVar5 & 0xff000000) << 8 | ((ulong)uVar5 & 0xff0000) << 0x18 |
                ((ulong)uVar5 & 0xff00) << 0x28 | CONCAT35(uStack_77b,uVar5) << 0x38) ^
               *(ulong *)(param_2 + 0x10);
  puStack_c38 = &UNK_0ef512d0;
  if (uStack_c28 == 0 && uStack_c30 == 0) {
    uStack_c30 = 0x9e3779b97f4a7c15;
    uStack_c28 = 0x6a09e667f3bcc909;
  }
  uStack_c18 = uStack_c18 & 0xffffffffffffff00;
  uStack_c20 = 0;
  if ((bStack_3b0 & 1) != 0) {
    uStack_c20 = 0;
    func_0x0412a280(CONCAT44(uStack_39c,CONCAT13(uStack_39d,CONCAT21(uStack_39f,uStack_3a3._3_1_))),
                    CONCAT35((undefined3)uStack_3ab,CONCAT41(uStack_3af,bStack_3b0)) &
                    0xfffffffffffffffe);
  }
  puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,4);
  if (puVar10 == (undefined4 *)0x0) {
    FUN_0eec74c0(4,0);
  }
  bStack_788 = (byte)puVar10;
  uStack_787 = (undefined4)((ulong)puVar10 >> 8);
  uStack_783 = (uint3)((ulong)puVar10 >> 0x28);
  puVar11 = puVar10 + 1;
  uStack_778 = SUB81(puVar11,0);
  uStack_777 = (undefined1)((ulong)puVar11 >> 8);
  uStack_776 = (undefined6)((ulong)puVar11 >> 0x10);
  *puVar10 = 0x3f800000;
  _uStack_783 = CONCAT13(uStack_778,uStack_783);
  uStack_77f = (undefined4)((ulong)puVar11 >> 8);
  uStack_77b = (uint3)((ulong)puVar11 >> 0x28);
  FUN_0d3411f0(&bStack_3b0,&puStack_c38,0xfffffffd,&bStack_788,1);
  lVar19 = CONCAT35(uStack_783,CONCAT41(uStack_787,bStack_788));
  if (lVar19 != 0) {
    _uStack_783 = CONCAT13(bStack_788,uStack_783);
    uStack_77f = uStack_787;
    uStack_77b = uStack_783;
    func_0x0412a280(lVar19,CONCAT62(uStack_776,CONCAT11(uStack_777,uStack_778)) - lVar19);
  }
  puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar10 == (undefined4 *)0x0) {
    FUN_0eec74c0(0x30,0);
  }
  uVar15 = _UNK_01208681;
  uStack_778 = SUB81(puVar10,0);
  uStack_777 = (undefined1)((ulong)puVar10 >> 8);
  uStack_776 = (undefined6)((ulong)puVar10 >> 0x10);
  bStack_788 = 0x31;
  uStack_787 = 0;
  uStack_783 = 0;
  bStack_780 = 0x29;
  uStack_77f = 0;
  uStack_77b = 0;
  *(ulong *)((long)puVar10 + 0x19) = CONCAT17(UNK_01208680,_DAT_01208679);
  *(undefined8 *)((long)puVar10 + 0x21) = uVar15;
  uVar15 = CONCAT71(_DAT_01208679,UNK_01208678);
  *(undefined8 *)(puVar10 + 4) = _DAT_01208670;
  *(undefined8 *)(puVar10 + 6) = uVar15;
  uVar9 = _UNK_0120866c;
  uVar8 = _UNK_01208668;
  uVar3 = _UNK_01208664;
  *puVar10 = _DAT_01208660;
  puVar10[1] = uVar3;
  puVar10[2] = uVar8;
  puVar10[3] = uVar9;
  *(undefined1 *)((long)puVar10 + 0x29) = 0;
  if (*(char *)(lVar2 + -0x16b0) == '\0') {
    *(undefined1 *)(lVar2 + -0x16b0) = 1;
    *(undefined **)(lVar2 + -0x1750) = &UNK_0f53bd88;
    *(undefined8 *)(lVar2 + -0x1738) = 0x1032547698badcfe;
    uVar15 = _UNK_014e11d8;
    *(undefined8 *)(lVar2 + -0x1748) = _DAT_014e11d0;
    *(undefined8 *)(lVar2 + -0x1740) = uVar15;
    *(undefined8 *)(lVar2 + -0x1730) = 0;
    *(undefined8 *)(lVar2 + -0x1728) = 0;
    *(undefined8 *)(lVar2 + -0x1720) = 0;
    *(undefined8 *)(lVar2 + -0x1718) = 0;
    *(undefined8 *)(lVar2 + -0x1710) = 0;
    *(undefined8 *)(lVar2 + -0x1708) = 0;
    *(undefined8 *)(lVar2 + -0x1700) = 0;
    *(undefined8 *)(lVar2 + -0x16f8) = 0;
    *(undefined8 *)(lVar2 + -0x16f0) = 0;
    *(undefined8 *)(lVar2 + -0x16e8) = 0;
    *(undefined8 *)(lVar2 + -0x16e0) = 0;
    *(undefined8 *)(lVar2 + -0x16d8) = 0;
    *(undefined8 *)(lVar2 + -0x16d0) = 0;
    *(undefined8 *)(lVar2 + -0x16c8) = 0;
    *(undefined8 *)(lVar2 + -0x16c0) = 0;
    *(undefined8 *)(lVar2 + -0x16b8) = 0;
  }
  (**(code **)(*plVar1 + 0x10))(plVar1);
  if ((bStack_788 & 1) == 0) {
    uVar16 = (uint)(bStack_788 >> 1);
    puVar10 = &uStack_787;
  }
  else {
    puVar10 = (undefined4 *)CONCAT62(uStack_776,CONCAT11(uStack_777,uStack_778));
    uVar16 = CONCAT31((undefined3)uStack_77f,bStack_780);
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,puVar10,uVar16);
  (**(code **)(*plVar1 + 0x20))(plVar1,&uStack_a68);
  uStack_bf0 = ((ulong)uStack_a68 >> 0x38 | ((ulong)uStack_a68 & 0xff000000000000) >> 0x28 |
                ((ulong)uStack_a68 & 0xff0000000000) >> 0x18 |
                ((ulong)uStack_a68 & 0xff00000000) >> 8 | ((ulong)uStack_a68 & 0xff000000) << 8 |
                ((ulong)uStack_a68 & 0xff0000) << 0x18 | ((ulong)uStack_a68 & 0xff00) << 0x28 |
               (long)uStack_a68 << 0x38) ^ *(ulong *)(param_2 + 8);
  uStack_be8 = ((ulong)puStack_a60 >> 0x38 | ((ulong)puStack_a60 & 0xff000000000000) >> 0x28 |
                ((ulong)puStack_a60 & 0xff0000000000) >> 0x18 |
                ((ulong)puStack_a60 & 0xff00000000) >> 8 | ((ulong)puStack_a60 & 0xff000000) << 8 |
                ((ulong)puStack_a60 & 0xff0000) << 0x18 | ((ulong)puStack_a60 & 0xff00) << 0x28 |
               (long)puStack_a60 << 0x38) ^ *(ulong *)(param_2 + 0x10);
  puStack_bf8 = &UNK_0ef512d0;
  if (uStack_be8 == 0 && uStack_bf0 == 0) {
    uStack_bf0 = 0x9e3779b97f4a7c15;
    uStack_be8 = 0x6a09e667f3bcc909;
  }
  uStack_bd8 = uStack_bd8 & 0xffffffffffffff00;
  uStack_be0 = 0;
  if ((bStack_788 & 1) != 0) {
    uStack_be0 = 0;
    func_0x0412a280(CONCAT62(uStack_776,CONCAT11(uStack_777,uStack_778)),
                    CONCAT35(uStack_783,CONCAT41(uStack_787,bStack_788)) & 0xfffffffffffffffe);
  }
  uStack_a68 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,4);
  if (uStack_a68 == (undefined4 *)0x0) {
    FUN_0eec74c0(4,0);
  }
  puStack_a60 = uStack_a68 + 1;
  *uStack_a68 = 0x3f800000;
  puStack_a58 = (undefined5 *)puStack_a60;
  FUN_0d3411f0(&bStack_788,&puStack_bf8,0xfffffff9,&uStack_a68,1);
  if (uStack_a68 != (undefined4 *)0x0) {
    puStack_a60 = uStack_a68;
    func_0x0412a280(uStack_a68,(long)puStack_a58 - (long)uStack_a68);
  }
  puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar10 == (undefined4 *)0x0) {
    FUN_0eec74c0(0x28,0);
  }
  uVar15 = _UNK_0130a837;
  uStack_a68 = (undefined4 *)0x29;
  puStack_a60 = (undefined4 *)0x24;
  *(undefined8 *)(puVar10 + 4) = _DAT_0130a82f;
  *(undefined8 *)(puVar10 + 6) = uVar15;
  uVar9 = _UNK_0130a82b;
  uVar8 = _UNK_0130a827;
  uVar3 = _UNK_0130a823;
  *puVar10 = _DAT_0130a81f;
  puVar10[1] = uVar3;
  puVar10[2] = uVar8;
  puVar10[3] = uVar9;
  puVar10[8] = 0x64616572;
  *(undefined1 *)(puVar10 + 9) = 0;
  if (*(char *)(lVar2 + -0x16b0) == '\0') {
    *(undefined1 *)(lVar2 + -0x16b0) = 1;
    *(undefined **)(lVar2 + -0x1750) = &UNK_0f53bd88;
    *(undefined8 *)(lVar2 + -0x1738) = 0x1032547698badcfe;
    uVar15 = _UNK_014e11d8;
    *(undefined8 *)(lVar2 + -0x1748) = _DAT_014e11d0;
    *(undefined8 *)(lVar2 + -0x1740) = uVar15;
    *(undefined8 *)(lVar2 + -0x1730) = 0;
    *(undefined8 *)(lVar2 + -0x1728) = 0;
    *(undefined8 *)(lVar2 + -0x1720) = 0;
    *(undefined8 *)(lVar2 + -0x1718) = 0;
    *(undefined8 *)(lVar2 + -0x1710) = 0;
    *(undefined8 *)(lVar2 + -0x1708) = 0;
    *(undefined8 *)(lVar2 + -0x1700) = 0;
    *(undefined8 *)(lVar2 + -0x16f8) = 0;
    *(undefined8 *)(lVar2 + -0x16f0) = 0;
    *(undefined8 *)(lVar2 + -0x16e8) = 0;
    *(undefined8 *)(lVar2 + -0x16e0) = 0;
    *(undefined8 *)(lVar2 + -0x16d8) = 0;
    *(undefined8 *)(lVar2 + -0x16d0) = 0;
    *(undefined8 *)(lVar2 + -0x16c8) = 0;
    *(undefined8 *)(lVar2 + -0x16c0) = 0;
    *(undefined8 *)(lVar2 + -0x16b8) = 0;
  }
  puStack_a58 = (undefined5 *)puVar10;
  (**(code **)(*plVar1 + 0x10))(plVar1);
  if (((ulong)uStack_a68 & 1) == 0) {
    uVar18 = (ulong)uStack_a68 >> 1 & 0x7f;
    puVar13 = (undefined5 *)((long)&uStack_a68 + 1);
  }
  else {
    uVar18 = (ulong)puStack_a60 & 0xffffffff;
    puVar13 = puStack_a58;
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,puVar13,uVar18);
  (**(code **)(*plVar1 + 0x20))(plVar1,&bStack_b48);
  uVar4 = CONCAT41(uStack_b47,bStack_b48);
  uVar7 = CONCAT25(uStack_b3b,CONCAT41(uStack_b3f,bStack_b40));
  uStack_c98 = ((ulong)(uStack_b43 >> 0x10) | (ulong)uStack_b43 & 0xff00 |
                ((ulong)uStack_b43 & 0xff) << 0x10 | ((ulong)uVar4 & 0xff00000000) >> 8 |
                ((ulong)uVar4 & 0xff000000) << 8 | ((ulong)uVar4 & 0xff0000) << 0x18 |
                ((ulong)uVar4 & 0xff00) << 0x28 | CONCAT35(uStack_b43,uVar4) << 0x38) ^
               *(ulong *)(param_2 + 8);
  uStack_c90 = ((ulong)bStack_b39 | ((ulong)uVar7 & 0xff000000000000) >> 0x28 |
                ((ulong)uVar7 & 0xff0000000000) >> 0x18 | ((ulong)uVar7 & 0xff00000000) >> 8 |
                ((ulong)uVar7 & 0xff000000) << 8 | ((ulong)uVar7 & 0xff0000) << 0x18 |
                ((ulong)uVar7 & 0xff00) << 0x28 | CONCAT17(bStack_b39,uVar7) << 0x38) ^
               *(ulong *)(param_2 + 0x10);
  puStack_ca0 = &UNK_0ef512d0;
  if (uStack_c90 == 0 && uStack_c98 == 0) {
    uStack_c98 = 0x9e3779b97f4a7c15;
    uStack_c90 = 0x6a09e667f3bcc909;
  }
  uStack_c80 = 0;
  uStack_c88 = 0;
  if (((ulong)uStack_a68 & 1) != 0) {
    uStack_c80 = 0;
    uStack_c88 = 0;
    func_0x0412a280(puStack_a58,(ulong)uStack_a68 & 0xfffffffffffffffe);
  }
  puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,4);
  if (puVar10 == (undefined4 *)0x0) {
    FUN_0eec74c0(4,0);
  }
  bStack_b48 = (byte)puVar10;
  uStack_b47 = (undefined4)((ulong)puVar10 >> 8);
  uStack_b43 = (uint3)((ulong)puVar10 >> 0x28);
  puVar11 = puVar10 + 1;
  uStack_b38 = SUB81(puVar11,0);
  uStack_b37 = (undefined4)((ulong)puVar11 >> 8);
  uStack_b33 = (undefined1)((ulong)puVar11 >> 0x28);
  uStack_b32 = (undefined1)((ulong)puVar11 >> 0x30);
  uStack_b31 = (undefined1)((ulong)puVar11 >> 0x38);
  *puVar10 = 0x3f800000;
  _uStack_b43 = CONCAT13(uStack_b38,uStack_b43);
  uStack_b3b = (undefined2)((ulong)puVar11 >> 0x28);
  uStack_b3f = uStack_b37;
  bStack_b39 = uStack_b31;
  FUN_0d3411f0(&uStack_a68,&puStack_ca0,0xfffffffb,&bStack_b48,1);
  uVar3 = _uStack_b43;
  lVar19 = CONCAT35(uStack_b43,CONCAT41(uStack_b47,bStack_b48));
  if (lVar19 != 0) {
    _uStack_b43 = CONCAT13(bStack_b48,uStack_b43);
    uStack_b3f = uStack_b47;
    uStack_b3b = (undefined2)uVar3;
    bStack_b39 = (byte)((uint)uVar3 >> 0x10);
    func_0x0412a280(lVar19,CONCAT17(uStack_b31,
                                    CONCAT16(uStack_b32,
                                             CONCAT15(uStack_b33,CONCAT41(uStack_b37,uStack_b38))))
                           - lVar19);
  }
  bStack_b48 = 0x2c;
  uStack_b47 = _DAT_01390e6c;
  _uStack_b43 = _UNK_01390e70;
  uStack_b3f = _UNK_01390e74;
  uStack_b3b = (undefined2)_UNK_01390e78;
  bStack_b39 = 0x66;
  uStack_b38 = 0x65;
  uStack_b37 = 0x616c5f72;
  uStack_b33 = 0x76;
  uStack_b32 = 0x61;
  uStack_b31 = 0;
  if (*(char *)(lVar2 + -0x16b0) == '\0') {
    *(undefined1 *)(lVar2 + -0x16b0) = 1;
    *(undefined **)(lVar2 + -0x1750) = &UNK_0f53bd88;
    *(undefined8 *)(lVar2 + -0x1738) = 0x1032547698badcfe;
    uVar15 = _UNK_014e11d8;
    *(undefined8 *)(lVar2 + -0x1748) = _DAT_014e11d0;
    *(undefined8 *)(lVar2 + -0x1740) = uVar15;
    *(undefined8 *)(lVar2 + -0x1730) = 0;
    *(undefined8 *)(lVar2 + -0x1728) = 0;
    *(undefined8 *)(lVar2 + -0x1720) = 0;
    *(undefined8 *)(lVar2 + -0x1718) = 0;
    *(undefined8 *)(lVar2 + -0x1710) = 0;
    *(undefined8 *)(lVar2 + -0x1708) = 0;
    *(undefined8 *)(lVar2 + -0x1700) = 0;
    *(undefined8 *)(lVar2 + -0x16f8) = 0;
    *(undefined8 *)(lVar2 + -0x16f0) = 0;
    *(undefined8 *)(lVar2 + -0x16e8) = 0;
    *(undefined8 *)(lVar2 + -0x16e0) = 0;
    *(undefined8 *)(lVar2 + -0x16d8) = 0;
    *(undefined8 *)(lVar2 + -0x16d0) = 0;
    *(undefined8 *)(lVar2 + -0x16c8) = 0;
    *(undefined8 *)(lVar2 + -0x16c0) = 0;
    *(undefined8 *)(lVar2 + -0x16b8) = 0;
  }
  (**(code **)(*plVar1 + 0x10))(plVar1);
  if ((bStack_b48 & 1) == 0) {
    puVar10 = &uStack_b47;
    uVar16 = (uint)(bStack_b48 >> 1);
  }
  else {
    puVar10 = (undefined4 *)
              CONCAT17(uStack_b31,
                       CONCAT16(uStack_b32,CONCAT15(uStack_b33,CONCAT41(uStack_b37,uStack_b38))));
    uVar16 = CONCAT31((undefined3)uStack_b3f,bStack_b40);
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,puVar10,uVar16);
  (**(code **)(*plVar1 + 0x20))(plVar1,&bStack_d88);
  uVar4 = CONCAT41(uStack_d87,bStack_d88);
  uVar5 = CONCAT41(uStack_d7f,bStack_d80);
  puStack_cc0 = (undefined4 *)
                (((ulong)(uStack_d83 >> 0x10) | (ulong)uStack_d83 & 0xff00 |
                  ((ulong)uStack_d83 & 0xff) << 0x10 | ((ulong)uVar4 & 0xff00000000) >> 8 |
                  ((ulong)uVar4 & 0xff000000) << 8 | ((ulong)uVar4 & 0xff0000) << 0x18 |
                  ((ulong)uVar4 & 0xff00) << 0x28 | CONCAT35(uStack_d83,uVar4) << 0x38) ^
                *(ulong *)(param_2 + 8));
  puStack_cb8 = (undefined4 *)
                (((ulong)(uStack_d7b >> 0x10) | (ulong)uStack_d7b & 0xff00 |
                  ((ulong)uStack_d7b & 0xff) << 0x10 | ((ulong)uVar5 & 0xff00000000) >> 8 |
                  ((ulong)uVar5 & 0xff000000) << 8 | ((ulong)uVar5 & 0xff0000) << 0x18 |
                  ((ulong)uVar5 & 0xff00) << 0x28 | CONCAT35(uStack_d7b,uVar5) << 0x38) ^
                *(ulong *)(param_2 + 0x10));
  puStack_cc8 = (undefined4 *)&UNK_0ef512d0;
  if (puStack_cb8 == (undefined4 *)0x0 && puStack_cc0 == (undefined4 *)0x0) {
    puStack_cc0 = (undefined4 *)0x9e3779b97f4a7c15;
    puStack_cb8 = (undefined4 *)0x6a09e667f3bcc909;
  }
  uStack_ca8 = 0;
  uStack_cb0 = 0;
  if ((bStack_b48 & 1) != 0) {
    uStack_ca8 = 0;
    uStack_cb0 = 0;
    func_0x0412a280(CONCAT17(uStack_b31,
                             CONCAT16(uStack_b32,
                                      CONCAT15(uStack_b33,CONCAT41(uStack_b37,uStack_b38)))),
                    CONCAT35(uStack_b43,CONCAT41(uStack_b47,bStack_b48)) & 0xfffffffffffffffe);
  }
  puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,4);
  if (puVar10 == (undefined4 *)0x0) {
    FUN_0eec74c0(4,0);
  }
  bStack_d88 = (byte)puVar10;
  uStack_d87 = (undefined4)((ulong)puVar10 >> 8);
  uStack_d83 = (uint3)((ulong)puVar10 >> 0x28);
  puVar11 = puVar10 + 1;
  uStack_d78 = SUB81(puVar11,0);
  uStack_d77 = (undefined2)((ulong)puVar11 >> 8);
  uStack_d75 = (undefined2)((ulong)puVar11 >> 0x18);
  uStack_d73 = (undefined1)((ulong)puVar11 >> 0x28);
  uStack_d72 = (undefined2)((ulong)puVar11 >> 0x30);
  *puVar10 = 0x3f800000;
  _uStack_d83 = CONCAT13(uStack_d78,uStack_d83);
  uStack_d7f = (undefined4)((ulong)puVar11 >> 8);
  uStack_d7b = (uint3)((ulong)puVar11 >> 0x28);
  FUN_0d3411f0(&bStack_b48,&puStack_cc8,0xffffffff,&bStack_d88,1);
  lVar19 = CONCAT35(uStack_d83,CONCAT41(uStack_d87,bStack_d88));
  if (lVar19 != 0) {
    _uStack_d83 = CONCAT13(bStack_d88,uStack_d83);
    uStack_d7f = uStack_d87;
    _uStack_d7b = CONCAT13(uStack_d78,uStack_d83);
    func_0x0412a280(lVar19,CONCAT26(uStack_d72,
                                    CONCAT15(uStack_d73,
                                             CONCAT23(uStack_d75,CONCAT21(uStack_d77,uStack_d78))))
                           - lVar19);
  }
  bStack_d88 = 0x22;
  uStack_d87 = _DAT_01258374;
  _uStack_d83 = _UNK_01258378;
  uStack_d7f = _UNK_0125837c;
  _uStack_d7b = _UNK_01258380;
  uStack_d77 = 0x72;
  if (*(char *)(lVar2 + -0x16b0) == '\0') {
    *(undefined1 *)(lVar2 + -0x16b0) = 1;
    *(undefined **)(lVar2 + -0x1750) = &UNK_0f53bd88;
    *(undefined8 *)(lVar2 + -0x1738) = 0x1032547698badcfe;
    uVar15 = _UNK_014e11d8;
    *(undefined8 *)(lVar2 + -0x1748) = _DAT_014e11d0;
    *(undefined8 *)(lVar2 + -0x1740) = uVar15;
    *(undefined8 *)(lVar2 + -0x1730) = 0;
    *(undefined8 *)(lVar2 + -0x1728) = 0;
    *(undefined8 *)(lVar2 + -0x1720) = 0;
    *(undefined8 *)(lVar2 + -0x1718) = 0;
    *(undefined8 *)(lVar2 + -0x1710) = 0;
    *(undefined8 *)(lVar2 + -0x1708) = 0;
    *(undefined8 *)(lVar2 + -0x1700) = 0;
    *(undefined8 *)(lVar2 + -0x16f8) = 0;
    *(undefined8 *)(lVar2 + -0x16f0) = 0;
    *(undefined8 *)(lVar2 + -0x16e8) = 0;
    *(undefined8 *)(lVar2 + -0x16e0) = 0;
    *(undefined8 *)(lVar2 + -0x16d8) = 0;
    *(undefined8 *)(lVar2 + -0x16d0) = 0;
    *(undefined8 *)(lVar2 + -0x16c8) = 0;
    *(undefined8 *)(lVar2 + -0x16c0) = 0;
    *(undefined8 *)(lVar2 + -0x16b8) = 0;
  }
  (**(code **)(*plVar1 + 0x10))(plVar1);
  if ((bStack_d88 & 1) == 0) {
    puVar10 = &uStack_d87;
    uVar16 = (uint)(bStack_d88 >> 1);
  }
  else {
    puVar10 = (undefined4 *)
              CONCAT26(uStack_d72,
                       CONCAT15(uStack_d73,CONCAT23(uStack_d75,CONCAT21(uStack_d77,uStack_d78))));
    uVar16 = CONCAT31((undefined3)uStack_d7f,bStack_d80);
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,puVar10,uVar16);
  (**(code **)(*plVar1 + 0x20))(plVar1,&bStack_d08);
  uVar4 = CONCAT41(uStack_d07,bStack_d08);
  uVar5 = CONCAT41(uStack_cff,bStack_d00);
  uVar18 = ((ulong)(uStack_d03 >> 0x10) | (ulong)uStack_d03 & 0xff00 |
            ((ulong)uStack_d03 & 0xff) << 0x10 | ((ulong)uVar4 & 0xff00000000) >> 8 |
            ((ulong)uVar4 & 0xff000000) << 8 | ((ulong)uVar4 & 0xff0000) << 0x18 |
            ((ulong)uVar4 & 0xff00) << 0x28 | CONCAT35(uStack_d03,uVar4) << 0x38) ^
           *(ulong *)(param_2 + 8);
  uVar20 = ((ulong)(uStack_cfb >> 0x10) | (ulong)uStack_cfb & 0xff00 |
            ((ulong)uStack_cfb & 0xff) << 0x10 | ((ulong)uVar5 & 0xff00000000) >> 8 |
            ((ulong)uVar5 & 0xff000000) << 8 | ((ulong)uVar5 & 0xff0000) << 0x18 |
            ((ulong)uVar5 & 0xff00) << 0x28 | CONCAT35(uStack_cfb,uVar5) << 0x38) ^
           *(ulong *)(param_2 + 0x10);
  if (uVar20 == 0 && uVar18 == 0) {
    uVar18 = 0x9e3779b97f4a7c15;
    uVar20 = 0x6a09e667f3bcc909;
  }
  if ((bStack_d88 & 1) != 0) {
    func_0x0412a280(CONCAT26(uStack_d72,
                             CONCAT15(uStack_d73,
                                      CONCAT23(uStack_d75,CONCAT21(uStack_d77,uStack_d78)))),
                    CONCAT35(uStack_d83,CONCAT41(uStack_d87,bStack_d88)) & 0xfffffffffffffffe);
  }
  func_0x049cce40(&bStack_d88,&bStack_3b0);
  func_0x049cce40(&bStack_d08,&bStack_788);
  func_0x049cce40(&bStack_d48,&bStack_b48);
  func_0x049cce40(&puStack_c78,&uStack_a68);
  uVar12 = uVar20 ^ uVar18;
  uVar17 = uVar12 << 0x15 ^ (uVar18 << 0x31 | uVar18 >> 0xf) ^ uVar12;
  uVar12 = (uVar12 << 0x1c | uVar12 >> 0x24) + uVar17;
  uStack_7a0 = ((uVar20 + uVar18) * 0x20000 | uVar20 + uVar18 >> 0x2f) + uVar18;
  uStack_798 = (uVar12 * 0x20000 | uVar12 >> 0x2f) + uVar17;
  uStack_888 = CONCAT35(uStack_d83,CONCAT41(uStack_d87,bStack_d88));
  uStack_880 = CONCAT35(uStack_d7b,CONCAT41(uStack_d7f,bStack_d80));
  uStack_878 = CONCAT26(uStack_d72,
                        CONCAT15(uStack_d73,CONCAT23(uStack_d75,CONCAT21(uStack_d77,uStack_d78))));
  uStack_850 = CONCAT35(uStack_d03,CONCAT41(uStack_d07,bStack_d08));
  uStack_848 = CONCAT35(uStack_cfb,CONCAT41(uStack_cff,bStack_d00));
  uStack_840 = CONCAT53(uStack_cf5,CONCAT21(uStack_cf7,uStack_cf8));
  puStack_7a8 = &UNK_0ef51388;
  uStack_7bc = uStack_c58._4_4_;
  uStack_7c0 = (undefined4)uStack_c58;
  uStack_7c4 = uStack_c60._4_4_;
  uStack_7c8 = (undefined4)uStack_c60;
  uStack_c50 = 0;
  uStack_c58 = 0;
  uStack_c60 = 0;
  uStack_c68 = 0;
  uStack_c70 = 0;
  puStack_c78 = (undefined *)0x0;
  lStack_ce0 = 0;
  lStack_ce8 = 0;
  lStack_cf0 = 0;
  uStack_cf5 = 0;
  uStack_cf7 = 0;
  _uStack_cfb = 0;
  uStack_cff = 0;
  _uStack_d03 = 0;
  uStack_d07 = 0;
  bStack_d08 = 0;
  lStack_d20 = 0;
  lStack_d28 = 0;
  lStack_d30 = 0;
  puStack_d38 = (undefined5 *)0x0;
  bStack_d39 = 0;
  uStack_d3a = 0;
  uStack_d3c = 0;
  uStack_d40 = 0;
  uStack_d42 = 0;
  uStack_d47 = 0;
  bStack_d48 = 0;
  lStack_d60 = 0;
  lStack_d68 = 0;
  lStack_d70 = 0;
  uStack_d72 = 0;
  uStack_d73 = 0;
  uStack_d75 = 0;
  uStack_d77 = 0;
  _uStack_d7b = 0;
  uStack_d7f = 0;
  _uStack_d83 = 0;
  uStack_d87 = 0;
  bStack_d88 = 0;
  if (lStack_b30 != 0) {
    lStack_b28 = lStack_b30;
    func_0x0412a280(lStack_b30,lStack_b20 - lStack_b30);
  }
  uVar3 = _uStack_b43;
  lVar19 = CONCAT35(uStack_b43,CONCAT41(uStack_b47,bStack_b48));
  if (lVar19 != 0) {
    _uStack_b43 = CONCAT13(bStack_b48,uStack_b43);
    uStack_b3f = uStack_b47;
    uStack_b3b = (undefined2)uVar3;
    bStack_b39 = (byte)((uint)uVar3 >> 0x10);
    func_0x0412a280(lVar19,CONCAT17(uStack_b31,
                                    CONCAT16(uStack_b32,
                                             CONCAT15(uStack_b33,CONCAT41(uStack_b37,uStack_b38))))
                           - lVar19);
  }
  if (lStack_a50 != 0) {
    lStack_a48 = lStack_a50;
    func_0x0412a280(lStack_a50,lStack_a40 - lStack_a50);
  }
  if (uStack_a68 != (undefined4 *)0x0) {
    puStack_a60 = uStack_a68;
    func_0x0412a280(uStack_a68,(long)puStack_a58 - (long)uStack_a68);
  }
  if (lStack_770 != 0) {
    lStack_768 = lStack_770;
    func_0x0412a280(lStack_770,lStack_760 - lStack_770);
  }
  lVar19 = CONCAT35(uStack_783,CONCAT41(uStack_787,bStack_788));
  if (lVar19 != 0) {
    bStack_780 = bStack_788;
    uStack_77f = uStack_787;
    uStack_77b = uStack_783;
    func_0x0412a280(lVar19,CONCAT62(uStack_776,CONCAT11(uStack_777,uStack_778)) - lVar19);
  }
  if (lStack_398 != 0) {
    lStack_390 = lStack_398;
    func_0x0412a280(lStack_398,lStack_388 - lStack_398);
  }
  lVar19 = CONCAT35((undefined3)uStack_3ab,CONCAT41(uStack_3af,bStack_3b0));
  if (lVar19 != 0) {
    uStack_3ab._3_1_ = bStack_3b0;
    uStack_3a7 = uStack_3af;
    uStack_3a3._0_3_ = (undefined3)uStack_3ab;
    func_0x0412a280(lVar19,CONCAT44(uStack_39c,
                                    CONCAT13(uStack_39d,CONCAT21(uStack_39f,uStack_3a3._3_1_))) -
                           lVar19);
  }
  func_0x0528e660(&bStack_3b0,param_2);
  puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a);
  if (puVar10 == (undefined4 *)0x0) {
    FUN_0eec74c0(0x1a,0);
  }
  uVar9 = _UNK_0135c3ec;
  uVar8 = _UNK_0135c3e8;
  uVar3 = _UNK_0135c3e4;
  uStack_778 = SUB81(puVar10,0);
  uStack_777 = (undefined1)((ulong)puVar10 >> 8);
  uStack_776 = (undefined6)((ulong)puVar10 >> 0x10);
  bStack_788 = 0x1b;
  uStack_787 = 0;
  uStack_783 = 0;
  bStack_780 = 0x17;
  uStack_77f = 0;
  uStack_77b = 0;
  *puVar10 = _DAT_0135c3e0;
  puVar10[1] = uVar3;
  puVar10[2] = uVar8;
  puVar10[3] = uVar9;
  *(undefined8 *)((long)puVar10 + 0xf) = 0x7373656e696e6965;
  *(undefined1 *)((long)puVar10 + 0x17) = 0;
  if (*(char *)(lVar2 + -0x16b0) == '\0') {
    *(undefined1 *)(lVar2 + -0x16b0) = 1;
    *(undefined **)(lVar2 + -0x1750) = &UNK_0f53bd88;
    *(undefined8 *)(lVar2 + -0x1738) = 0x1032547698badcfe;
    uVar15 = _UNK_014e11d8;
    *(undefined8 *)(lVar2 + -0x1748) = _DAT_014e11d0;
    *(undefined8 *)(lVar2 + -0x1740) = uVar15;
    *(undefined8 *)(lVar2 + -0x1730) = 0;
    *(undefined8 *)(lVar2 + -0x1728) = 0;
    *(undefined8 *)(lVar2 + -0x1720) = 0;
    *(undefined8 *)(lVar2 + -0x1718) = 0;
    *(undefined8 *)(lVar2 + -0x1710) = 0;
    *(undefined8 *)(lVar2 + -0x1708) = 0;
    *(undefined8 *)(lVar2 + -0x1700) = 0;
    *(undefined8 *)(lVar2 + -0x16f8) = 0;
    *(undefined8 *)(lVar2 + -0x16f0) = 0;
    *(undefined8 *)(lVar2 + -0x16e8) = 0;
    *(undefined8 *)(lVar2 + -0x16e0) = 0;
    *(undefined8 *)(lVar2 + -0x16d8) = 0;
    *(undefined8 *)(lVar2 + -0x16d0) = 0;
    *(undefined8 *)(lVar2 + -0x16c8) = 0;
    *(undefined8 *)(lVar2 + -0x16c0) = 0;
    *(undefined8 *)(lVar2 + -0x16b8) = 0;
  }
  (**(code **)(*plVar1 + 0x10))(plVar1);
  if ((bStack_788 & 1) == 0) {
    uVar16 = (uint)(bStack_788 >> 1);
    puVar10 = &uStack_787;
  }
  else {
    puVar10 = (undefined4 *)CONCAT62(uStack_776,CONCAT11(uStack_777,uStack_778));
    uVar16 = CONCAT31((undefined3)uStack_77f,bStack_780);
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,puVar10,uVar16);
  (**(code **)(*plVar1 + 0x20))(plVar1,&bStack_b48);
  uVar4 = CONCAT41(uStack_b47,bStack_b48);
  uVar7 = CONCAT25(uStack_b3b,CONCAT41(uStack_b3f,bStack_b40));
  uStack_c98 = ((ulong)(uStack_b43 >> 0x10) | (ulong)uStack_b43 & 0xff00 |
                ((ulong)uStack_b43 & 0xff) << 0x10 | ((ulong)uVar4 & 0xff00000000) >> 8 |
                ((ulong)uVar4 & 0xff000000) << 8 | ((ulong)uVar4 & 0xff0000) << 0x18 |
                ((ulong)uVar4 & 0xff00) << 0x28 | CONCAT35(uStack_b43,uVar4) << 0x38) ^
               *(ulong *)(param_2 + 8);
  uStack_c90 = ((ulong)bStack_b39 | ((ulong)uVar7 & 0xff000000000000) >> 0x28 |
                ((ulong)uVar7 & 0xff0000000000) >> 0x18 | ((ulong)uVar7 & 0xff00000000) >> 8 |
                ((ulong)uVar7 & 0xff000000) << 8 | ((ulong)uVar7 & 0xff0000) << 0x18 |
                ((ulong)uVar7 & 0xff00) << 0x28 | CONCAT17(bStack_b39,uVar7) << 0x38) ^
               *(ulong *)(param_2 + 0x10);
  puStack_ca0 = &UNK_0ef512d0;
  if (uStack_c90 == 0 && uStack_c98 == 0) {
    uStack_c98 = 0x9e3779b97f4a7c15;
    uStack_c90 = 0x6a09e667f3bcc909;
  }
  uStack_c80 = 0;
  uStack_c88 = 0;
  if ((bStack_788 & 1) != 0) {
    uStack_c80 = 0;
    uStack_c88 = 0;
    func_0x0412a280(CONCAT62(uStack_776,CONCAT11(uStack_777,uStack_778)),
                    CONCAT35(uStack_783,CONCAT41(uStack_787,bStack_788)) & 0xfffffffffffffffe);
  }
  puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,4);
  if (puVar10 == (undefined4 *)0x0) {
    FUN_0eec74c0(4,0);
  }
  bStack_b48 = (byte)puVar10;
  uStack_b47 = (undefined4)((ulong)puVar10 >> 8);
  uStack_b43 = (uint3)((ulong)puVar10 >> 0x28);
  puVar11 = puVar10 + 1;
  uStack_b38 = SUB81(puVar11,0);
  uStack_b37 = (undefined4)((ulong)puVar11 >> 8);
  uStack_b33 = (undefined1)((ulong)puVar11 >> 0x28);
  uStack_b32 = (undefined1)((ulong)puVar11 >> 0x30);
  uStack_b31 = (undefined1)((ulong)puVar11 >> 0x38);
  *puVar10 = 0x3f800000;
  _uStack_b43 = CONCAT13(uStack_b38,uStack_b43);
  uStack_b3b = (undefined2)((ulong)puVar11 >> 0x28);
  uStack_b3f = uStack_b37;
  bStack_b39 = uStack_b31;
  FUN_0d3411f0(&bStack_788,&puStack_ca0,0xfffffff8,&bStack_b48,1);
  uVar3 = _uStack_b43;
  lVar19 = CONCAT35(uStack_b43,CONCAT41(uStack_b47,bStack_b48));
  if (lVar19 != 0) {
    _uStack_b43 = CONCAT13(bStack_b48,uStack_b43);
    uStack_b3f = uStack_b47;
    uStack_b3b = (undefined2)uVar3;
    bStack_b39 = (byte)((uint)uVar3 >> 0x10);
    func_0x0412a280(lVar19,CONCAT17(uStack_b31,
                                    CONCAT16(uStack_b32,
                                             CONCAT15(uStack_b33,CONCAT41(uStack_b37,uStack_b38))))
                           - lVar19);
  }
  bStack_b48 = 0x28;
  uStack_b47 = _DAT_0142c9b4;
  _uStack_b43 = _UNK_0142c9b8;
  uStack_b3f = _UNK_0142c9bc;
  uStack_b3b = (undefined2)_UNK_0142c9c0;
  bStack_b39 = (byte)((uint)_UNK_0142c9c0 >> 0x10);
  uStack_b38 = (undefined1)((uint)_UNK_0142c9c0 >> 0x18);
  uStack_b37 = 0x615f6e69;
  uStack_b33 = 0;
  if (*(char *)(lVar2 + -0x16b0) == '\0') {
    *(undefined1 *)(lVar2 + -0x16b0) = 1;
    *(undefined **)(lVar2 + -0x1750) = &UNK_0f53bd88;
    *(undefined8 *)(lVar2 + -0x1738) = 0x1032547698badcfe;
    uVar15 = _UNK_014e11d8;
    *(undefined8 *)(lVar2 + -0x1748) = _DAT_014e11d0;
    *(undefined8 *)(lVar2 + -0x1740) = uVar15;
    *(undefined8 *)(lVar2 + -0x1730) = 0;
    *(undefined8 *)(lVar2 + -0x1728) = 0;
    *(undefined8 *)(lVar2 + -0x1720) = 0;
    *(undefined8 *)(lVar2 + -0x1718) = 0;
    *(undefined8 *)(lVar2 + -0x1710) = 0;
    *(undefined8 *)(lVar2 + -0x1708) = 0;
    *(undefined8 *)(lVar2 + -0x1700) = 0;
    *(undefined8 *)(lVar2 + -0x16f8) = 0;
    *(undefined8 *)(lVar2 + -0x16f0) = 0;
    *(undefined8 *)(lVar2 + -0x16e8) = 0;
    *(undefined8 *)(lVar2 + -0x16e0) = 0;
    *(undefined8 *)(lVar2 + -0x16d8) = 0;
    *(undefined8 *)(lVar2 + -0x16d0) = 0;
    *(undefined8 *)(lVar2 + -0x16c8) = 0;
    *(undefined8 *)(lVar2 + -0x16c0) = 0;
    *(undefined8 *)(lVar2 + -0x16b8) = 0;
  }
  (**(code **)(*plVar1 + 0x10))(plVar1);
  if ((bStack_b48 & 1) == 0) {
    puVar10 = &uStack_b47;
    uVar16 = (uint)(bStack_b48 >> 1);
  }
  else {
    puVar10 = (undefined4 *)
              CONCAT17(uStack_b31,
                       CONCAT16(uStack_b32,CONCAT15(uStack_b33,CONCAT41(uStack_b37,uStack_b38))));
    uVar16 = CONCAT31((undefined3)uStack_b3f,bStack_b40);
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,puVar10,uVar16);
  (**(code **)(*plVar1 + 0x20))(plVar1,&bStack_d88);
  uVar4 = CONCAT41(uStack_d87,bStack_d88);
  uVar5 = CONCAT41(uStack_d7f,bStack_d80);
  puStack_cc0 = (undefined4 *)
                (((ulong)(uStack_d83 >> 0x10) | (ulong)uStack_d83 & 0xff00 |
                  ((ulong)uStack_d83 & 0xff) << 0x10 | ((ulong)uVar4 & 0xff00000000) >> 8 |
                  ((ulong)uVar4 & 0xff000000) << 8 | ((ulong)uVar4 & 0xff0000) << 0x18 |
                  ((ulong)uVar4 & 0xff00) << 0x28 | CONCAT35(uStack_d83,uVar4) << 0x38) ^
                *(ulong *)(param_2 + 8));
  puStack_cb8 = (undefined4 *)
                (((ulong)(uStack_d7b >> 0x10) | (ulong)uStack_d7b & 0xff00 |
                  ((ulong)uStack_d7b & 0xff) << 0x10 | ((ulong)uVar5 & 0xff00000000) >> 8 |
                  ((ulong)uVar5 & 0xff000000) << 8 | ((ulong)uVar5 & 0xff0000) << 0x18 |
                  ((ulong)uVar5 & 0xff00) << 0x28 | CONCAT35(uStack_d7b,uVar5) << 0x38) ^
                *(ulong *)(param_2 + 0x10));
  puStack_cc8 = (undefined4 *)&UNK_0ef512d0;
  if (puStack_cb8 == (undefined4 *)0x0 && puStack_cc0 == (undefined4 *)0x0) {
    puStack_cc0 = (undefined4 *)0x9e3779b97f4a7c15;
    puStack_cb8 = (undefined4 *)0x6a09e667f3bcc909;
  }
  uStack_ca8 = 0;
  uStack_cb0 = 0;
  if ((bStack_b48 & 1) != 0) {
    uStack_ca8 = 0;
    uStack_cb0 = 0;
    func_0x0412a280(CONCAT17(uStack_b31,
                             CONCAT16(uStack_b32,
                                      CONCAT15(uStack_b33,CONCAT41(uStack_b37,uStack_b38)))),
                    CONCAT35(uStack_b43,CONCAT41(uStack_b47,bStack_b48)) & 0xfffffffffffffffe);
  }
  puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,4);
  if (puVar10 == (undefined4 *)0x0) {
    FUN_0eec74c0(4,0);
  }
  bStack_d88 = (byte)puVar10;
  uStack_d87 = (undefined4)((ulong)puVar10 >> 8);
  uStack_d83 = (uint3)((ulong)puVar10 >> 0x28);
  puVar11 = puVar10 + 1;
  uStack_d78 = SUB81(puVar11,0);
  uStack_d77 = (undefined2)((ulong)puVar11 >> 8);
  uStack_d75 = (undefined2)((ulong)puVar11 >> 0x18);
  uStack_d73 = (undefined1)((ulong)puVar11 >> 0x28);
  uStack_d72 = (undefined2)((ulong)puVar11 >> 0x30);
  *puVar10 = 0x3f800000;
  _uStack_d83 = CONCAT13(uStack_d78,uStack_d83);
  uStack_d7f = (undefined4)((ulong)puVar11 >> 8);
  uStack_d7b = (uint3)((ulong)puVar11 >> 0x28);
  FUN_0d3411f0(&bStack_b48,&puStack_cc8,0xfffffff9,&bStack_d88,1);
  lVar19 = CONCAT35(uStack_d83,CONCAT41(uStack_d87,bStack_d88));
  if (lVar19 != 0) {
    _uStack_d83 = CONCAT13(bStack_d88,uStack_d83);
    uStack_d7f = uStack_d87;
    _uStack_d7b = CONCAT13(uStack_d78,uStack_d83);
    func_0x0412a280(lVar19,CONCAT26(uStack_d72,
                                    CONCAT15(uStack_d73,
                                             CONCAT23(uStack_d75,CONCAT21(uStack_d77,uStack_d78))))
                           - lVar19);
  }
  bStack_d88 = 0x28;
  uStack_d87 = _DAT_0142c9c9;
  _uStack_d83 = _UNK_0142c9cd;
  uStack_d7f = _UNK_0142c9d1;
  _uStack_d7b = _UNK_0142c9d5;
  uStack_d77 = 0x6e69;
  uStack_d75 = 0x625f;
  uStack_d73 = 0;
  if (*(char *)(lVar2 + -0x16b0) == '\0') {
    *(undefined1 *)(lVar2 + -0x16b0) = 1;
    *(undefined **)(lVar2 + -0x1750) = &UNK_0f53bd88;
    *(undefined8 *)(lVar2 + -0x1738) = 0x1032547698badcfe;
    uVar15 = _UNK_014e11d8;
    *(undefined8 *)(lVar2 + -0x1748) = _DAT_014e11d0;
    *(undefined8 *)(lVar2 + -0x1740) = uVar15;
    *(undefined8 *)(lVar2 + -0x1730) = 0;
    *(undefined8 *)(lVar2 + -0x1728) = 0;
    *(undefined8 *)(lVar2 + -0x1720) = 0;
    *(undefined8 *)(lVar2 + -0x1718) = 0;
    *(undefined8 *)(lVar2 + -0x1710) = 0;
    *(undefined8 *)(lVar2 + -0x1708) = 0;
    *(undefined8 *)(lVar2 + -0x1700) = 0;
    *(undefined8 *)(lVar2 + -0x16f8) = 0;
    *(undefined8 *)(lVar2 + -0x16f0) = 0;
    *(undefined8 *)(lVar2 + -0x16e8) = 0;
    *(undefined8 *)(lVar2 + -0x16e0) = 0;
    *(undefined8 *)(lVar2 + -0x16d8) = 0;
    *(undefined8 *)(lVar2 + -0x16d0) = 0;
    *(undefined8 *)(lVar2 + -0x16c8) = 0;
    *(undefined8 *)(lVar2 + -0x16c0) = 0;
    *(undefined8 *)(lVar2 + -0x16b8) = 0;
  }
  (**(code **)(*plVar1 + 0x10))(plVar1);
  if ((bStack_d88 & 1) == 0) {
    puVar10 = &uStack_d87;
    uVar16 = (uint)(bStack_d88 >> 1);
  }
  else {
    puVar10 = (undefined4 *)
              CONCAT26(uStack_d72,
                       CONCAT15(uStack_d73,CONCAT23(uStack_d75,CONCAT21(uStack_d77,uStack_d78))));
    uVar16 = CONCAT31((undefined3)uStack_d7f,bStack_d80);
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,puVar10,uVar16);
  (**(code **)(*plVar1 + 0x20))(plVar1,&bStack_d08);
  uVar4 = CONCAT41(uStack_d07,bStack_d08);
  uVar5 = CONCAT41(uStack_cff,bStack_d00);
  uStack_8a8 = ((ulong)(uStack_d03 >> 0x10) | (ulong)uStack_d03 & 0xff00 |
                ((ulong)uStack_d03 & 0xff) << 0x10 | ((ulong)uVar4 & 0xff00000000) >> 8 |
                ((ulong)uVar4 & 0xff000000) << 8 | ((ulong)uVar4 & 0xff0000) << 0x18 |
                ((ulong)uVar4 & 0xff00) << 0x28 | CONCAT35(uStack_d03,uVar4) << 0x38) ^
               *(ulong *)(param_2 + 8);
  uStack_8a0 = ((ulong)(uStack_cfb >> 0x10) | (ulong)uStack_cfb & 0xff00 |
                ((ulong)uStack_cfb & 0xff) << 0x10 | ((ulong)uVar5 & 0xff00000000) >> 8 |
                ((ulong)uVar5 & 0xff000000) << 8 | ((ulong)uVar5 & 0xff0000) << 0x18 |
                ((ulong)uVar5 & 0xff00) << 0x28 | CONCAT35(uStack_cfb,uVar5) << 0x38) ^
               *(ulong *)(param_2 + 0x10);
  puStack_8b0 = &UNK_0ef512d0;
  if (uStack_8a0 == 0 && uStack_8a8 == 0) {
    uStack_8a8 = 0x9e3779b97f4a7c15;
    uStack_8a0 = 0x6a09e667f3bcc909;
  }
  uStack_890 = 0;
  uStack_898 = 0;
  if ((bStack_d88 & 1) != 0) {
    uStack_890 = 0;
    uStack_898 = 0;
    func_0x0412a280(CONCAT26(uStack_d72,
                             CONCAT15(uStack_d73,
                                      CONCAT23(uStack_d75,CONCAT21(uStack_d77,uStack_d78)))),
                    CONCAT35(uStack_d83,CONCAT41(uStack_d87,bStack_d88)) & 0xfffffffffffffffe);
  }
  puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,4);
  if (puVar10 == (undefined4 *)0x0) {
    FUN_0eec74c0(4,0);
  }
  bStack_d08 = (byte)puVar10;
  uStack_d07 = (undefined4)((ulong)puVar10 >> 8);
  uStack_d03 = (uint3)((ulong)puVar10 >> 0x28);
  puVar11 = puVar10 + 1;
  uStack_cf8 = SUB81(puVar11,0);
  uStack_cf7 = (undefined2)((ulong)puVar11 >> 8);
  uStack_cf5 = (undefined5)((ulong)puVar11 >> 0x18);
  *puVar10 = 0x3f800000;
  _uStack_d03 = CONCAT13(uStack_cf8,uStack_d03);
  uStack_cff = (undefined4)((ulong)puVar11 >> 8);
  uStack_cfb = (uint3)((ulong)puVar11 >> 0x28);
  FUN_0d3411f0(&bStack_d88,&puStack_8b0,0xfffffff9,&bStack_d08,1);
  lVar19 = CONCAT35(uStack_d03,CONCAT41(uStack_d07,bStack_d08));
  if (lVar19 != 0) {
    _uStack_d03 = CONCAT13(bStack_d08,uStack_d03);
    uStack_cff = uStack_d07;
    _uStack_cfb = CONCAT13(uStack_cf8,uStack_d03);
    func_0x0412a280(lVar19,CONCAT53(uStack_cf5,CONCAT21(uStack_cf7,uStack_cf8)) - lVar19);
  }
  bStack_d08 = 0x22;
  uStack_d07 = _DAT_0120864e;
  _uStack_d03 = _UNK_01208652;
  uStack_cff = _UNK_01208656;
  _uStack_cfb = _UNK_0120865a;
  uStack_cf7 = 0x70;
  if (*(char *)(lVar2 + -0x16b0) == '\0') {
    *(undefined1 *)(lVar2 + -0x16b0) = 1;
    *(undefined **)(lVar2 + -0x1750) = &UNK_0f53bd88;
    *(undefined8 *)(lVar2 + -0x1738) = 0x1032547698badcfe;
    uVar15 = _UNK_014e11d8;
    *(undefined8 *)(lVar2 + -0x1748) = _DAT_014e11d0;
    *(undefined8 *)(lVar2 + -0x1740) = uVar15;
    *(undefined8 *)(lVar2 + -0x1730) = 0;
    *(undefined8 *)(lVar2 + -0x1728) = 0;
    *(undefined8 *)(lVar2 + -0x1720) = 0;
    *(undefined8 *)(lVar2 + -0x1718) = 0;
    *(undefined8 *)(lVar2 + -0x1710) = 0;
    *(undefined8 *)(lVar2 + -0x1708) = 0;
    *(undefined8 *)(lVar2 + -0x1700) = 0;
    *(undefined8 *)(lVar2 + -0x16f8) = 0;
    *(undefined8 *)(lVar2 + -0x16f0) = 0;
    *(undefined8 *)(lVar2 + -0x16e8) = 0;
    *(undefined8 *)(lVar2 + -0x16e0) = 0;
    *(undefined8 *)(lVar2 + -0x16d8) = 0;
    *(undefined8 *)(lVar2 + -0x16d0) = 0;
    *(undefined8 *)(lVar2 + -0x16c8) = 0;
    *(undefined8 *)(lVar2 + -0x16c0) = 0;
    *(undefined8 *)(lVar2 + -0x16b8) = 0;
  }
  (**(code **)(*plVar1 + 0x10))(plVar1);
  if ((bStack_d08 & 1) == 0) {
    puVar10 = &uStack_d07;
    uVar16 = (uint)(bStack_d08 >> 1);
  }
  else {
    puVar10 = (undefined4 *)CONCAT53(uStack_cf5,CONCAT21(uStack_cf7,uStack_cf8));
    uVar16 = CONCAT31((undefined3)uStack_cff,bStack_d00);
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,puVar10,uVar16);
  (**(code **)(*plVar1 + 0x20))(plVar1,&bStack_d48);
  uVar6 = CONCAT51(uStack_d47,bStack_d48);
  uVar7 = CONCAT16(uStack_d3a,CONCAT24(uStack_d3c,uStack_d40));
  uStack_8d0 = ((ulong)(uStack_d42 >> 8) | ((ulong)uStack_d42 & 0xff) << 8 |
                ((ulong)uVar6 & 0xff0000000000) >> 0x18 | ((ulong)uVar6 & 0xff00000000) >> 8 |
                ((ulong)uVar6 & 0xff000000) << 8 | ((ulong)uVar6 & 0xff0000) << 0x18 |
                ((ulong)uVar6 & 0xff00) << 0x28 | CONCAT26(uStack_d42,uVar6) << 0x38) ^
               *(ulong *)(param_2 + 8);
  uStack_8c8 = ((ulong)bStack_d39 | ((ulong)uVar7 & 0xff000000000000) >> 0x28 |
                ((ulong)uVar7 & 0xff0000000000) >> 0x18 | ((ulong)uVar7 & 0xff00000000) >> 8 |
                ((ulong)uVar7 & 0xff000000) << 8 | ((ulong)uVar7 & 0xff0000) << 0x18 |
                ((ulong)uVar7 & 0xff00) << 0x28 | CONCAT17(bStack_d39,uVar7) << 0x38) ^
               *(ulong *)(param_2 + 0x10);
  puStack_8d8 = &UNK_0ef512d0;
  if (uStack_8c8 == 0 && uStack_8d0 == 0) {
    uStack_8d0 = 0x9e3779b97f4a7c15;
    uStack_8c8 = 0x6a09e667f3bcc909;
  }
  uStack_8b8 = 0;
  uStack_8c0 = 0;
  if ((bStack_d08 & 1) != 0) {
    uStack_8b8 = 0;
    uStack_8c0 = 0;
    func_0x0412a280(CONCAT53(uStack_cf5,CONCAT21(uStack_cf7,uStack_cf8)),
                    CONCAT35(uStack_d03,CONCAT41(uStack_d07,bStack_d08)) & 0xfffffffffffffffe);
  }
  puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,4);
  if (puVar10 == (undefined4 *)0x0) {
    FUN_0eec74c0(4,0);
  }
  bStack_d48 = (byte)puVar10;
  uStack_d47 = (undefined5)((ulong)puVar10 >> 8);
  uStack_d42 = (ushort)((ulong)puVar10 >> 0x30);
  puStack_d38 = (undefined5 *)(puVar10 + 1);
  *puVar10 = 0x3f800000;
  uStack_d40 = (uint)puStack_d38;
  uStack_d3c = (undefined2)((ulong)puStack_d38 >> 0x20);
  uStack_d3a = (undefined1)((ulong)puStack_d38 >> 0x30);
  bStack_d39 = (byte)((ulong)puStack_d38 >> 0x38);
  FUN_0d3411f0(&bStack_d08,&puStack_8d8,0xfffffffb,&bStack_d48,1);
  lVar19 = CONCAT26(uStack_d42,CONCAT51(uStack_d47,bStack_d48));
  if (lVar19 != 0) {
    uStack_d40 = (uint)CONCAT51(uStack_d47,bStack_d48);
    uStack_d3c = (undefined2)((uint5)uStack_d47 >> 0x18);
    uStack_d3a = (undefined1)uStack_d42;
    bStack_d39 = (byte)(uStack_d42 >> 8);
    func_0x0412a280(lVar19,(long)puStack_d38 - lVar19);
  }
  bStack_d48 = 0x1a;
  uStack_d47 = 0x63656e696d;
  uStack_d42 = 0x6172;
  uStack_d40 = 0x6f3a7466;
  uStack_d3c = 0x6572;
  uStack_d3a = 0;
  if (*(char *)(lVar2 + -0x16b0) == '\0') {
    *(undefined1 *)(lVar2 + -0x16b0) = 1;
    *(undefined **)(lVar2 + -0x1750) = &UNK_0f53bd88;
    *(undefined8 *)(lVar2 + -0x1738) = 0x1032547698badcfe;
    uVar15 = _UNK_014e11d8;
    *(undefined8 *)(lVar2 + -0x1748) = _DAT_014e11d0;
    *(undefined8 *)(lVar2 + -0x1740) = uVar15;
    *(undefined8 *)(lVar2 + -0x1730) = 0;
    *(undefined8 *)(lVar2 + -0x1728) = 0;
    *(undefined8 *)(lVar2 + -0x1720) = 0;
    *(undefined8 *)(lVar2 + -0x1718) = 0;
    *(undefined8 *)(lVar2 + -0x1710) = 0;
    *(undefined8 *)(lVar2 + -0x1708) = 0;
    *(undefined8 *)(lVar2 + -0x1700) = 0;
    *(undefined8 *)(lVar2 + -0x16f8) = 0;
    *(undefined8 *)(lVar2 + -0x16f0) = 0;
    *(undefined8 *)(lVar2 + -0x16e8) = 0;
    *(undefined8 *)(lVar2 + -0x16e0) = 0;
    *(undefined8 *)(lVar2 + -0x16d8) = 0;
    *(undefined8 *)(lVar2 + -0x16d0) = 0;
    *(undefined8 *)(lVar2 + -0x16c8) = 0;
    *(undefined8 *)(lVar2 + -0x16c0) = 0;
    *(undefined8 *)(lVar2 + -0x16b8) = 0;
  }
  (**(code **)(*plVar1 + 0x10))(plVar1);
  puVar13 = puStack_d38;
  uVar16 = uStack_d40;
  if ((bStack_d48 & 1) == 0) {
    puVar13 = &uStack_d47;
    uVar16 = (uint)(bStack_d48 >> 1);
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,puVar13,uVar16);
  (**(code **)(*plVar1 + 0x20))(plVar1,&puStack_c78);
  uVar18 = ((ulong)puStack_c78 >> 0x38 | ((ulong)puStack_c78 & 0xff000000000000) >> 0x28 |
            ((ulong)puStack_c78 & 0xff0000000000) >> 0x18 | ((ulong)puStack_c78 & 0xff00000000) >> 8
            | ((ulong)puStack_c78 & 0xff000000) << 8 | ((ulong)puStack_c78 & 0xff0000) << 0x18 |
            ((ulong)puStack_c78 & 0xff00) << 0x28 | (long)puStack_c78 << 0x38) ^
           *(ulong *)(param_2 + 8);
  uVar20 = (uStack_c70 >> 0x38 | (uStack_c70 & 0xff000000000000) >> 0x28 |
            (uStack_c70 & 0xff0000000000) >> 0x18 | (uStack_c70 & 0xff00000000) >> 8 |
            (uStack_c70 & 0xff000000) << 8 | (uStack_c70 & 0xff0000) << 0x18 |
            (uStack_c70 & 0xff00) << 0x28 | uStack_c70 << 0x38) ^ *(ulong *)(param_2 + 0x10);
  if (uVar20 == 0 && uVar18 == 0) {
    uVar18 = 0x9e3779b97f4a7c15;
    uVar20 = 0x6a09e667f3bcc909;
  }
  if ((bStack_d48 & 1) != 0) {
    func_0x0412a280(puStack_d38,
                    CONCAT26(uStack_d42,CONCAT51(uStack_d47,bStack_d48)) & 0xfffffffffffffffe);
  }
  func_0x049cce40(&bStack_d48,&bStack_788);
  func_0x049cce40(&puStack_c78,&bStack_b48);
  func_0x049cce40(&puStack_c38,&bStack_d88);
  func_0x049cce40(&puStack_bf8,&bStack_d08);
  uVar12 = uVar20 ^ uVar18;
  uVar17 = uVar12 << 0x15 ^ (uVar18 << 0x31 | uVar18 >> 0xf) ^ uVar12;
  uVar12 = (uVar12 << 0x1c | uVar12 >> 0x24) + uVar17;
  uStack_980 = ((uVar20 + uVar18) * 0x20000 | uVar20 + uVar18 >> 0x2f) + uVar18;
  uStack_978 = (uVar12 * 0x20000 | uVar12 >> 0x2f) + uVar17;
  uStack_a68 = (undefined4 *)CONCAT26(uStack_d42,CONCAT51(uStack_d47,bStack_d48));
  puStack_a60 = (undefined4 *)
                CONCAT17(bStack_d39,CONCAT16(uStack_d3a,CONCAT24(uStack_d3c,uStack_d40)));
  puStack_988 = &UNK_0ef51388;
  uStack_99c = uStack_bd8._4_4_;
  uStack_9a0 = (undefined4)uStack_bd8;
  uStack_9a4 = uStack_be0._4_4_;
  uStack_9a8 = (undefined4)uStack_be0;
  uStack_9b0 = uStack_be8;
  uStack_9b8 = uStack_bf0;
  puStack_9c0 = puStack_bf8;
  uStack_9d8 = uStack_c18;
  uStack_9e0 = uStack_c20;
  uStack_9e8 = uStack_c28;
  uStack_9f0 = uStack_c30;
  puStack_9f8 = puStack_c38;
  uStack_a08 = uStack_c50;
  uStack_a10 = uStack_c58;
  uStack_a18 = uStack_c60;
  uStack_a20 = uStack_c68;
  uStack_a28 = uStack_c70;
  puStack_a30 = puStack_c78;
  lStack_a40 = lStack_d20;
  lStack_a48 = lStack_d28;
  lStack_a50 = lStack_d30;
  puStack_a58 = puStack_d38;
  uStack_bd0 = 0;
  uStack_bd8 = 0;
  uStack_be0 = 0;
  uStack_be8 = 0;
  uStack_bf0 = 0;
  puStack_bf8 = (undefined *)0x0;
  uStack_c10 = 0;
  uStack_c18 = 0;
  uStack_c20 = 0;
  uStack_c28 = 0;
  uStack_c30 = 0;
  puStack_c38 = (undefined *)0x0;
  uStack_c50 = 0;
  uStack_c58 = 0;
  uStack_c60 = 0;
  uStack_c68 = 0;
  uStack_c70 = 0;
  puStack_c78 = (undefined *)0x0;
  lStack_d20 = 0;
  lStack_d28 = 0;
  lStack_d30 = 0;
  puStack_d38 = (undefined5 *)0x0;
  bStack_d39 = 0;
  uStack_d3a = 0;
  uStack_d3c = 0;
  uStack_d40 = 0;
  uStack_d42 = 0;
  uStack_d47 = 0;
  bStack_d48 = 0;
  if (lStack_cf0 != 0) {
    lStack_ce8 = lStack_cf0;
    func_0x0412a280(lStack_cf0,lStack_ce0 - lStack_cf0);
  }
  lVar19 = CONCAT35(uStack_d03,CONCAT41(uStack_d07,bStack_d08));
  if (lVar19 != 0) {
    _uStack_d03 = CONCAT13(bStack_d08,uStack_d03);
    uStack_cff = uStack_d07;
    _uStack_cfb = CONCAT13(uStack_cf8,uStack_d03);
    func_0x0412a280(lVar19,CONCAT53(uStack_cf5,CONCAT21(uStack_cf7,uStack_cf8)) - lVar19);
  }
  if (lStack_d70 != 0) {
    lStack_d68 = lStack_d70;
    func_0x0412a280(lStack_d70,lStack_d60 - lStack_d70);
  }
  lVar19 = CONCAT35(uStack_d83,CONCAT41(uStack_d87,bStack_d88));
  if (lVar19 != 0) {
    _uStack_d83 = CONCAT13(bStack_d88,uStack_d83);
    uStack_d7f = uStack_d87;
    _uStack_d7b = CONCAT13(uStack_d78,uStack_d83);
    func_0x0412a280(lVar19,CONCAT26(uStack_d72,
                                    CONCAT15(uStack_d73,
                                             CONCAT23(uStack_d75,CONCAT21(uStack_d77,uStack_d78))))
                           - lVar19);
  }
  if (lStack_b30 != 0) {
    lStack_b28 = lStack_b30;
    func_0x0412a280(lStack_b30,lStack_b20 - lStack_b30);
  }
  uVar3 = _uStack_b43;
  lVar19 = CONCAT35(uStack_b43,CONCAT41(uStack_b47,bStack_b48));
  if (lVar19 != 0) {
    _uStack_b43 = CONCAT13(bStack_b48,uStack_b43);
    uStack_b3f = uStack_b47;
    uStack_b3b = (undefined2)uVar3;
    bStack_b39 = (byte)((uint)uVar3 >> 0x10);
    func_0x0412a280(lVar19,CONCAT17(uStack_b31,
                                    CONCAT16(uStack_b32,
                                             CONCAT15(uStack_b33,CONCAT41(uStack_b37,uStack_b38))))
                           - lVar19);
  }
  if (lStack_770 != 0) {
    lStack_768 = lStack_770;
    func_0x0412a280(lStack_770,lStack_760 - lStack_770);
  }
  lVar19 = CONCAT35(uStack_783,CONCAT41(uStack_787,bStack_788));
  if (lVar19 != 0) {
    _uStack_783 = CONCAT13(bStack_788,uStack_783);
    uStack_77f = uStack_787;
    _uStack_77b = CONCAT13(uStack_778,uStack_783);
    func_0x0412a280(lVar19,CONCAT62(uStack_776,CONCAT11(uStack_777,uStack_778)) - lVar19);
  }
  bStack_788 = 0x20;
  uStack_787 = _DAT_012bde31;
  _uStack_783 = _UNK_012bde35;
  uStack_77f = _UNK_012bde39;
  _uStack_77b = _UNK_012bde3d;
  uStack_777 = 0;
  if (*(char *)(lVar2 + -0x16b0) == '\0') {
    *(undefined1 *)(lVar2 + -0x16b0) = 1;
    *(undefined **)(lVar2 + -0x1750) = &UNK_0f53bd88;
    *(undefined8 *)(lVar2 + -0x1738) = 0x1032547698badcfe;
    uVar15 = _UNK_014e11d8;
    *(undefined8 *)(lVar2 + -0x1748) = _DAT_014e11d0;
    *(undefined8 *)(lVar2 + -0x1740) = uVar15;
    *(undefined8 *)(lVar2 + -0x1730) = 0;
    *(undefined8 *)(lVar2 + -0x1728) = 0;
    *(undefined8 *)(lVar2 + -0x1720) = 0;
    *(undefined8 *)(lVar2 + -0x1718) = 0;
    *(undefined8 *)(lVar2 + -0x1710) = 0;
    *(undefined8 *)(lVar2 + -0x1708) = 0;
    *(undefined8 *)(lVar2 + -0x1700) = 0;
    *(undefined8 *)(lVar2 + -0x16f8) = 0;
    *(undefined8 *)(lVar2 + -0x16f0) = 0;
    *(undefined8 *)(lVar2 + -0x16e8) = 0;
    *(undefined8 *)(lVar2 + -0x16e0) = 0;
    *(undefined8 *)(lVar2 + -0x16d8) = 0;
    *(undefined8 *)(lVar2 + -0x16d0) = 0;
    *(undefined8 *)(lVar2 + -0x16c8) = 0;
    *(undefined8 *)(lVar2 + -0x16c0) = 0;
    *(undefined8 *)(lVar2 + -0x16b8) = 0;
  }
  (**(code **)(*plVar1 + 0x10))(plVar1);
  if ((bStack_788 & 1) == 0) {
    puVar10 = &uStack_787;
    uVar16 = (uint)(bStack_788 >> 1);
  }
  else {
    puVar10 = (undefined4 *)CONCAT62(uStack_776,CONCAT11(uStack_777,uStack_778));
    uVar16 = CONCAT31((undefined3)uStack_77f,bStack_780);
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,puVar10,uVar16);
  (**(code **)(*plVar1 + 0x20))(plVar1,&bStack_d88);
  uVar4 = CONCAT41(uStack_d87,bStack_d88);
  uVar5 = CONCAT41(uStack_d7f,bStack_d80);
  uStack_c70 = ((ulong)(uStack_d83 >> 0x10) | (ulong)uStack_d83 & 0xff00 |
                ((ulong)uStack_d83 & 0xff) << 0x10 | ((ulong)uVar4 & 0xff00000000) >> 8 |
                ((ulong)uVar4 & 0xff000000) << 8 | ((ulong)uVar4 & 0xff0000) << 0x18 |
                ((ulong)uVar4 & 0xff00) << 0x28 | CONCAT35(uStack_d83,uVar4) << 0x38) ^
               *(ulong *)(param_2 + 8);
  uStack_c68 = ((ulong)(uStack_d7b >> 0x10) | (ulong)uStack_d7b & 0xff00 |
                ((ulong)uStack_d7b & 0xff) << 0x10 | ((ulong)uVar5 & 0xff00000000) >> 8 |
                ((ulong)uVar5 & 0xff000000) << 8 | ((ulong)uVar5 & 0xff0000) << 0x18 |
                ((ulong)uVar5 & 0xff00) << 0x28 | CONCAT35(uStack_d7b,uVar5) << 0x38) ^
               *(ulong *)(param_2 + 0x10);
  puStack_c78 = &UNK_0ef512d0;
  if (uStack_c68 == 0 && uStack_c70 == 0) {
    uStack_c70 = 0x9e3779b97f4a7c15;
    uStack_c68 = 0x6a09e667f3bcc909;
  }
  uStack_c58 = uStack_c58 & 0xffffffffffffff00;
  uStack_c60 = 0;
  if ((bStack_788 & 1) != 0) {
    uStack_c60 = 0;
    func_0x0412a280(CONCAT62(uStack_776,CONCAT11(uStack_777,uStack_778)),
                    CONCAT35(uStack_783,CONCAT41(uStack_787,bStack_788)) & 0xfffffffffffffffe);
  }
  puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,4);
  if (puVar10 == (undefined4 *)0x0) {
    FUN_0eec74c0(4,0);
  }
  bStack_d88 = (byte)puVar10;
  uStack_d87 = (undefined4)((ulong)puVar10 >> 8);
  uStack_d83 = (uint3)((ulong)puVar10 >> 0x28);
  puVar11 = puVar10 + 1;
  uStack_d78 = SUB81(puVar11,0);
  uStack_d77 = (undefined2)((ulong)puVar11 >> 8);
  uStack_d75 = (undefined2)((ulong)puVar11 >> 0x18);
  uStack_d73 = (undefined1)((ulong)puVar11 >> 0x28);
  uStack_d72 = (undefined2)((ulong)puVar11 >> 0x30);
  *puVar10 = 0x3f800000;
  _uStack_d83 = CONCAT13(uStack_d78,uStack_d83);
  uStack_d7f = (undefined4)((ulong)puVar11 >> 8);
  uStack_d7b = (uint3)((ulong)puVar11 >> 0x28);
  FUN_0d3411f0(&bStack_788,&puStack_c78,0xfffffff8,&bStack_d88,1);
  lVar19 = CONCAT35(uStack_d83,CONCAT41(uStack_d87,bStack_d88));
  if (lVar19 != 0) {
    _uStack_d83 = CONCAT13(bStack_d88,uStack_d83);
    uStack_d7f = uStack_d87;
    uStack_d7b = uStack_d83;
    func_0x0412a280(lVar19,CONCAT26(uStack_d72,
                                    CONCAT15(uStack_d73,
                                             CONCAT23(uStack_d75,CONCAT21(uStack_d77,uStack_d78))))
                           - lVar19);
  }
  puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar10 == (undefined4 *)0x0) {
    FUN_0eec74c0(0x20,0);
  }
  uVar15 = _UNK_012bde54;
  uStack_d78 = SUB81(puVar10,0);
  uStack_d77 = (undefined2)((ulong)puVar10 >> 8);
  uStack_d75 = (undefined2)((ulong)puVar10 >> 0x18);
  uStack_d73 = (undefined1)((ulong)puVar10 >> 0x28);
  uStack_d72 = (undefined2)((ulong)puVar10 >> 0x30);
  bStack_d88 = 0x21;
  uStack_d87 = 0;
  uStack_d83 = 0;
  bStack_d80 = 0x1a;
  uStack_d7f = 0;
  uStack_d7b = 0;
  *(ulong *)((long)puVar10 + 10) = CONCAT26(_UNK_012bde52,CONCAT42(_UNK_012bde4e,_DAT_012bde4c));
  *(undefined8 *)((long)puVar10 + 0x12) = uVar15;
  uVar9 = _UNK_012bde4e;
  uVar8 = _UNK_012bde46;
  uVar3 = CONCAT22(_DAT_012bde4c,_UNK_012bde4a);
  *puVar10 = _DAT_012bde42;
  puVar10[1] = uVar8;
  puVar10[2] = uVar3;
  puVar10[3] = uVar9;
  *(undefined1 *)((long)puVar10 + 0x1a) = 0;
  if (*(char *)(lVar2 + -0x16b0) == '\0') {
    *(undefined1 *)(lVar2 + -0x16b0) = 1;
    *(undefined **)(lVar2 + -0x1750) = &UNK_0f53bd88;
    *(undefined8 *)(lVar2 + -0x1738) = 0x1032547698badcfe;
    uVar15 = _UNK_014e11d8;
    *(undefined8 *)(lVar2 + -0x1748) = _DAT_014e11d0;
    *(undefined8 *)(lVar2 + -0x1740) = uVar15;
    *(undefined8 *)(lVar2 + -0x1730) = 0;
    *(undefined8 *)(lVar2 + -0x1728) = 0;
    *(undefined8 *)(lVar2 + -0x1720) = 0;
    *(undefined8 *)(lVar2 + -0x1718) = 0;
    *(undefined8 *)(lVar2 + -0x1710) = 0;
    *(undefined8 *)(lVar2 + -0x1708) = 0;
    *(undefined8 *)(lVar2 + -0x1700) = 0;
    *(undefined8 *)(lVar2 + -0x16f8) = 0;
    *(undefined8 *)(lVar2 + -0x16f0) = 0;
    *(undefined8 *)(lVar2 + -0x16e8) = 0;
    *(undefined8 *)(lVar2 + -0x16e0) = 0;
    *(undefined8 *)(lVar2 + -0x16d8) = 0;
    *(undefined8 *)(lVar2 + -0x16d0) = 0;
    *(undefined8 *)(lVar2 + -0x16c8) = 0;
    *(undefined8 *)(lVar2 + -0x16c0) = 0;
    *(undefined8 *)(lVar2 + -0x16b8) = 0;
  }
  (**(code **)(*plVar1 + 0x10))(plVar1);
  if ((bStack_d88 & 1) == 0) {
    uVar16 = (uint)(bStack_d88 >> 1);
    puVar10 = &uStack_d87;
  }
  else {
    puVar10 = (undefined4 *)
              CONCAT26(uStack_d72,
                       CONCAT15(uStack_d73,CONCAT23(uStack_d75,CONCAT21(uStack_d77,uStack_d78))));
    uVar16 = CONCAT31((undefined3)uStack_d7f,bStack_d80);
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,puVar10,uVar16);
  (**(code **)(*plVar1 + 0x20))(plVar1,&bStack_d08);
  uVar4 = CONCAT41(uStack_d07,bStack_d08);
  uVar5 = CONCAT41(uStack_cff,bStack_d00);
  uStack_c30 = ((ulong)(uStack_d03 >> 0x10) | (ulong)uStack_d03 & 0xff00 |
                ((ulong)uStack_d03 & 0xff) << 0x10 | ((ulong)uVar4 & 0xff00000000) >> 8 |
                ((ulong)uVar4 & 0xff000000) << 8 | ((ulong)uVar4 & 0xff0000) << 0x18 |
                ((ulong)uVar4 & 0xff00) << 0x28 | CONCAT35(uStack_d03,uVar4) << 0x38) ^
               *(ulong *)(param_2 + 8);
  uStack_c28 = ((ulong)(uStack_cfb >> 0x10) | (ulong)uStack_cfb & 0xff00 |
                ((ulong)uStack_cfb & 0xff) << 0x10 | ((ulong)uVar5 & 0xff00000000) >> 8 |
                ((ulong)uVar5 & 0xff000000) << 8 | ((ulong)uVar5 & 0xff0000) << 0x18 |
                ((ulong)uVar5 & 0xff00) << 0x28 | CONCAT35(uStack_cfb,uVar5) << 0x38) ^
               *(ulong *)(param_2 + 0x10);
  puStack_c38 = &UNK_0ef512d0;
  if (uStack_c28 == 0 && uStack_c30 == 0) {
    uStack_c30 = 0x9e3779b97f4a7c15;
    uStack_c28 = 0x6a09e667f3bcc909;
  }
  uStack_c18 = uStack_c18 & 0xffffffffffffff00;
  uStack_c20 = 0;
  if ((bStack_d88 & 1) != 0) {
    uStack_c20 = 0;
    func_0x0412a280(CONCAT26(uStack_d72,
                             CONCAT15(uStack_d73,
                                      CONCAT23(uStack_d75,CONCAT21(uStack_d77,uStack_d78)))),
                    CONCAT35(uStack_d83,CONCAT41(uStack_d87,bStack_d88)) & 0xfffffffffffffffe);
  }
  puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,4);
  if (puVar10 == (undefined4 *)0x0) {
    FUN_0eec74c0(4,0);
  }
  bStack_d08 = (byte)puVar10;
  uStack_d07 = (undefined4)((ulong)puVar10 >> 8);
  uStack_d03 = (uint3)((ulong)puVar10 >> 0x28);
  puVar11 = puVar10 + 1;
  uStack_cf8 = SUB81(puVar11,0);
  uStack_cf7 = (undefined2)((ulong)puVar11 >> 8);
  uStack_cf5 = (undefined5)((ulong)puVar11 >> 0x18);
  *puVar10 = 0x3f800000;
  _uStack_d03 = CONCAT13(uStack_cf8,uStack_d03);
  uStack_cff = (undefined4)((ulong)puVar11 >> 8);
  uStack_cfb = (uint3)((ulong)puVar11 >> 0x28);
  FUN_0d3411f0(&bStack_d88,&puStack_c38,0xfffffff8,&bStack_d08,1);
  lVar19 = CONCAT35(uStack_d03,CONCAT41(uStack_d07,bStack_d08));
  if (lVar19 != 0) {
    _uStack_d03 = CONCAT13(bStack_d08,uStack_d03);
    uStack_cff = uStack_d07;
    uStack_cfb = uStack_d03;
    func_0x0412a280(lVar19,CONCAT53(uStack_cf5,CONCAT21(uStack_cf7,uStack_cf8)) - lVar19);
  }
  puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar10 == (undefined4 *)0x0) {
    FUN_0eec74c0(0x20,0);
  }
  uVar9 = _UNK_01412d6d;
  uVar8 = _UNK_01412d69;
  uVar3 = _UNK_01412d65;
  uStack_cf8 = SUB81(puVar10,0);
  uStack_cf7 = (undefined2)((ulong)puVar10 >> 8);
  uStack_cf5 = (undefined5)((ulong)puVar10 >> 0x18);
  bStack_d08 = 0x21;
  uStack_d07 = 0;
  uStack_d03 = 0;
  bStack_d00 = 0x18;
  uStack_cff = 0;
  uStack_cfb = 0;
  *puVar10 = _DAT_01412d61;
  puVar10[1] = uVar3;
  puVar10[2] = uVar8;
  puVar10[3] = uVar9;
  *(undefined8 *)(puVar10 + 4) = 0x615f65676469725f;
  *(undefined1 *)(puVar10 + 6) = 0;
  if (*(char *)(lVar2 + -0x16b0) == '\0') {
    *(undefined1 *)(lVar2 + -0x16b0) = 1;
    *(undefined **)(lVar2 + -0x1750) = &UNK_0f53bd88;
    *(undefined8 *)(lVar2 + -0x1738) = 0x1032547698badcfe;
    uVar15 = _UNK_014e11d8;
    *(undefined8 *)(lVar2 + -0x1748) = _DAT_014e11d0;
    *(undefined8 *)(lVar2 + -0x1740) = uVar15;
    *(undefined8 *)(lVar2 + -0x1730) = 0;
    *(undefined8 *)(lVar2 + -0x1728) = 0;
    *(undefined8 *)(lVar2 + -0x1720) = 0;
    *(undefined8 *)(lVar2 + -0x1718) = 0;
    *(undefined8 *)(lVar2 + -0x1710) = 0;
    *(undefined8 *)(lVar2 + -0x1708) = 0;
    *(undefined8 *)(lVar2 + -0x1700) = 0;
    *(undefined8 *)(lVar2 + -0x16f8) = 0;
    *(undefined8 *)(lVar2 + -0x16f0) = 0;
    *(undefined8 *)(lVar2 + -0x16e8) = 0;
    *(undefined8 *)(lVar2 + -0x16e0) = 0;
    *(undefined8 *)(lVar2 + -0x16d8) = 0;
    *(undefined8 *)(lVar2 + -0x16d0) = 0;
    *(undefined8 *)(lVar2 + -0x16c8) = 0;
    *(undefined8 *)(lVar2 + -0x16c0) = 0;
    *(undefined8 *)(lVar2 + -0x16b8) = 0;
  }
  (**(code **)(*plVar1 + 0x10))(plVar1);
  if ((bStack_d08 & 1) == 0) {
    uVar16 = (uint)(bStack_d08 >> 1);
    puVar10 = &uStack_d07;
  }
  else {
    puVar10 = (undefined4 *)CONCAT53(uStack_cf5,CONCAT21(uStack_cf7,uStack_cf8));
    uVar16 = CONCAT31((undefined3)uStack_cff,bStack_d00);
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,puVar10,uVar16);
  (**(code **)(*plVar1 + 0x20))(plVar1,&bStack_d48);
  uVar6 = CONCAT51(uStack_d47,bStack_d48);
  uVar7 = CONCAT16(uStack_d3a,CONCAT24(uStack_d3c,uStack_d40));
  uStack_bf0 = ((ulong)(uStack_d42 >> 8) | ((ulong)uStack_d42 & 0xff) << 8 |
                ((ulong)uVar6 & 0xff0000000000) >> 0x18 | ((ulong)uVar6 & 0xff00000000) >> 8 |
                ((ulong)uVar6 & 0xff000000) << 8 | ((ulong)uVar6 & 0xff0000) << 0x18 |
                ((ulong)uVar6 & 0xff00) << 0x28 | CONCAT26(uStack_d42,uVar6) << 0x38) ^
               *(ulong *)(param_2 + 8);
  uStack_be8 = ((ulong)bStack_d39 | ((ulong)uVar7 & 0xff000000000000) >> 0x28 |
                ((ulong)uVar7 & 0xff0000000000) >> 0x18 | ((ulong)uVar7 & 0xff00000000) >> 8 |
                ((ulong)uVar7 & 0xff000000) << 8 | ((ulong)uVar7 & 0xff0000) << 0x18 |
                ((ulong)uVar7 & 0xff00) << 0x28 | CONCAT17(bStack_d39,uVar7) << 0x38) ^
               *(ulong *)(param_2 + 0x10);
  puStack_bf8 = &UNK_0ef512d0;
  if (uStack_be8 == 0 && uStack_bf0 == 0) {
    uStack_bf0 = 0x9e3779b97f4a7c15;
    uStack_be8 = 0x6a09e667f3bcc909;
  }
  uStack_bd8 = uStack_bd8 & 0xffffffffffffff00;
  uStack_be0 = 0;
  if ((bStack_d08 & 1) != 0) {
    uStack_be0 = 0;
    func_0x0412a280(CONCAT53(uStack_cf5,CONCAT21(uStack_cf7,uStack_cf8)),
                    CONCAT35(uStack_d03,CONCAT41(uStack_d07,bStack_d08)) & 0xfffffffffffffffe);
  }
  puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,4);
  if (puVar10 == (undefined4 *)0x0) {
    FUN_0eec74c0(4,0);
  }
  bStack_d48 = (byte)puVar10;
  uStack_d47 = (undefined5)((ulong)puVar10 >> 8);
  uStack_d42 = (ushort)((ulong)puVar10 >> 0x30);
  puStack_d38 = (undefined5 *)(puVar10 + 1);
  *puVar10 = 0x3f800000;
  uStack_d40 = (uint)puStack_d38;
  uStack_d3c = (undefined2)((ulong)puStack_d38 >> 0x20);
  uStack_d3a = (undefined1)((ulong)puStack_d38 >> 0x30);
  bStack_d39 = (byte)((ulong)puStack_d38 >> 0x38);
  FUN_0d3411f0(&bStack_d08,&puStack_bf8,0xfffffff9,&bStack_d48,1);
  lVar19 = CONCAT26(uStack_d42,CONCAT51(uStack_d47,bStack_d48));
  if (lVar19 != 0) {
    uStack_d40 = (uint)CONCAT51(uStack_d47,bStack_d48);
    uStack_d3c = (undefined2)((uint5)uStack_d47 >> 0x18);
    uStack_d3a = (undefined1)uStack_d42;
    bStack_d39 = (byte)(uStack_d42 >> 8);
    func_0x0412a280(lVar19,(long)puStack_d38 - lVar19);
  }
  puVar13 = (undefined5 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar13 == (undefined5 *)0x0) {
    FUN_0eec74c0(0x20,0);
  }
  uVar9 = _UNK_014ae7e3;
  uVar8 = _UNK_014ae7df;
  uVar3 = _UNK_014ae7db;
  bStack_d48 = 0x21;
  uStack_d47 = 0;
  uStack_d42 = 0;
  uStack_d40 = 0x18;
  uStack_d3c = 0;
  uStack_d3a = 0;
  bStack_d39 = 0;
  *(undefined4 *)puVar13 = _DAT_014ae7d7;
  *(undefined4 *)((long)puVar13 + 4) = uVar3;
  *(undefined4 *)(puVar13 + 1) = uVar8;
  *(undefined4 *)((long)puVar13 + 0xc) = uVar9;
  *(undefined8 *)(puVar13 + 2) = 0x625f65676469725f;
  *(undefined1 *)(puVar13 + 3) = 0;
  if (*(char *)(lVar2 + -0x16b0) == '\0') {
    *(undefined1 *)(lVar2 + -0x16b0) = 1;
    *(undefined **)(lVar2 + -0x1750) = &UNK_0f53bd88;
    *(undefined8 *)(lVar2 + -0x1738) = 0x1032547698badcfe;
    uVar15 = _UNK_014e11d8;
    *(undefined8 *)(lVar2 + -0x1748) = _DAT_014e11d0;
    *(undefined8 *)(lVar2 + -0x1740) = uVar15;
    *(undefined8 *)(lVar2 + -0x1730) = 0;
    *(undefined8 *)(lVar2 + -0x1728) = 0;
    *(undefined8 *)(lVar2 + -0x1720) = 0;
    *(undefined8 *)(lVar2 + -0x1718) = 0;
    *(undefined8 *)(lVar2 + -0x1710) = 0;
    *(undefined8 *)(lVar2 + -0x1708) = 0;
    *(undefined8 *)(lVar2 + -0x1700) = 0;
    *(undefined8 *)(lVar2 + -0x16f8) = 0;
    *(undefined8 *)(lVar2 + -0x16f0) = 0;
    *(undefined8 *)(lVar2 + -0x16e8) = 0;
    *(undefined8 *)(lVar2 + -0x16e0) = 0;
    *(undefined8 *)(lVar2 + -0x16d8) = 0;
    *(undefined8 *)(lVar2 + -0x16d0) = 0;
    *(undefined8 *)(lVar2 + -0x16c8) = 0;
    *(undefined8 *)(lVar2 + -0x16c0) = 0;
    *(undefined8 *)(lVar2 + -0x16b8) = 0;
  }
  puStack_d38 = puVar13;
  (**(code **)(*plVar1 + 0x10))(plVar1);
  puVar13 = puStack_d38;
  uVar16 = uStack_d40;
  if ((bStack_d48 & 1) == 0) {
    puVar13 = &uStack_d47;
    uVar16 = (uint)(bStack_d48 >> 1);
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,puVar13,uVar16);
  (**(code **)(*plVar1 + 0x20))(plVar1,&puStack_cc8);
  uStack_c98 = ((ulong)puStack_cc8 >> 0x38 | ((ulong)puStack_cc8 & 0xff000000000000) >> 0x28 |
                ((ulong)puStack_cc8 & 0xff0000000000) >> 0x18 |
                ((ulong)puStack_cc8 & 0xff00000000) >> 8 | ((ulong)puStack_cc8 & 0xff000000) << 8 |
                ((ulong)puStack_cc8 & 0xff0000) << 0x18 | ((ulong)puStack_cc8 & 0xff00) << 0x28 |
               (long)puStack_cc8 << 0x38) ^ *(ulong *)(param_2 + 8);
  uStack_c90 = ((ulong)puStack_cc0 >> 0x38 | ((ulong)puStack_cc0 & 0xff000000000000) >> 0x28 |
                ((ulong)puStack_cc0 & 0xff0000000000) >> 0x18 |
                ((ulong)puStack_cc0 & 0xff00000000) >> 8 | ((ulong)puStack_cc0 & 0xff000000) << 8 |
                ((ulong)puStack_cc0 & 0xff0000) << 0x18 | ((ulong)puStack_cc0 & 0xff00) << 0x28 |
               (long)puStack_cc0 << 0x38) ^ *(ulong *)(param_2 + 0x10);
  puStack_ca0 = &UNK_0ef512d0;
  if (uStack_c90 == 0 && uStack_c98 == 0) {
    uStack_c98 = 0x9e3779b97f4a7c15;
    uStack_c90 = 0x6a09e667f3bcc909;
  }
  uStack_c80 = 0;
  uStack_c88 = 0;
  if ((bStack_d48 & 1) != 0) {
    uStack_c80 = 0;
    uStack_c88 = 0;
    func_0x0412a280(puStack_d38,
                    CONCAT26(uStack_d42,CONCAT51(uStack_d47,bStack_d48)) & 0xfffffffffffffffe);
  }
  puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,4);
  if (puVar10 == (undefined4 *)0x0) {
    FUN_0eec74c0(4,0);
  }
  puStack_cc0 = puVar10 + 1;
  *puVar10 = 0x3f800000;
  puStack_cc8 = puVar10;
  puStack_cb8 = puStack_cc0;
  FUN_0d3411f0(&bStack_d48,&puStack_ca0,0xfffffff9,&puStack_cc8,1);
  if (puStack_cc8 != (undefined4 *)0x0) {
    puStack_cc0 = puStack_cc8;
    func_0x0412a280(puStack_cc8,(long)puStack_cb8 - (long)puStack_cc8);
  }
  func_0x049cce40(&bStack_b48,&bStack_788);
  func_0x049cce40(auStack_b10,&bStack_d88);
  func_0x049cce40(auStack_ad8,&bStack_d08);
  func_0x049cce40(auStack_aa0,&bStack_d48);
  if (lStack_d30 != 0) {
    lStack_d28 = lStack_d30;
    func_0x0412a280(lStack_d30,lStack_d20 - lStack_d30);
  }
  lVar19 = CONCAT26(uStack_d42,CONCAT51(uStack_d47,bStack_d48));
  if (lVar19 != 0) {
    uStack_d40 = (uint)CONCAT51(uStack_d47,bStack_d48);
    uStack_d3c = (undefined2)((uint5)uStack_d47 >> 0x18);
    uStack_d3a = (undefined1)uStack_d42;
    bStack_d39 = (byte)(uStack_d42 >> 8);
    func_0x0412a280(lVar19,(long)puStack_d38 - lVar19);
  }
  if (lStack_cf0 != 0) {
    lStack_ce8 = lStack_cf0;
    func_0x0412a280(lStack_cf0,lStack_ce0 - lStack_cf0);
  }
  lVar19 = CONCAT35(uStack_d03,CONCAT41(uStack_d07,bStack_d08));
  if (lVar19 != 0) {
    bStack_d00 = bStack_d08;
    uStack_cff = uStack_d07;
    uStack_cfb = uStack_d03;
    func_0x0412a280(lVar19,CONCAT53(uStack_cf5,CONCAT21(uStack_cf7,uStack_cf8)) - lVar19);
  }
  if (lStack_d70 != 0) {
    lStack_d68 = lStack_d70;
    func_0x0412a280(lStack_d70,lStack_d60 - lStack_d70);
  }
  lVar19 = CONCAT35(uStack_d83,CONCAT41(uStack_d87,bStack_d88));
  if (lVar19 != 0) {
    bStack_d80 = bStack_d88;
    uStack_d7f = uStack_d87;
    uStack_d7b = uStack_d83;
    func_0x0412a280(lVar19,CONCAT26(uStack_d72,
                                    CONCAT15(uStack_d73,
                                             CONCAT23(uStack_d75,CONCAT21(uStack_d77,uStack_d78))))
                           - lVar19);
  }
  if (lStack_770 != 0) {
    lStack_768 = lStack_770;
    func_0x0412a280(lStack_770,lStack_760 - lStack_770);
  }
  lVar19 = CONCAT35(uStack_783,CONCAT41(uStack_787,bStack_788));
  if (lVar19 != 0) {
    _uStack_783 = CONCAT13(bStack_788,uStack_783);
    uStack_77f = uStack_787;
    _uStack_77b = CONCAT13(uStack_778,uStack_783);
    func_0x0412a280(lVar19,CONCAT62(uStack_776,CONCAT11(uStack_777,uStack_778)) - lVar19);
  }
  func_0x05256180(&bStack_788,param_2);
  puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar10 == (undefined4 *)0x0) {
    FUN_0eec74c0(0x20,0);
  }
  uVar15 = _UNK_011ed0bc;
  uStack_d78 = SUB81(puVar10,0);
  uStack_d77 = (undefined2)((ulong)puVar10 >> 8);
  uStack_d75 = (undefined2)((ulong)puVar10 >> 0x18);
  uStack_d73 = (undefined1)((ulong)puVar10 >> 0x28);
  uStack_d72 = (undefined2)((ulong)puVar10 >> 0x30);
  bStack_d88 = 0x21;
  uStack_d87 = 0;
  uStack_d83 = 0;
  bStack_d80 = 0x1b;
  uStack_d7f = 0;
  uStack_d7b = 0;
  *(ulong *)((long)puVar10 + 0xb) = CONCAT35(_UNK_011ed0b9,CONCAT41(_UNK_011ed0b5,DAT_011ed0b4));
  *(undefined8 *)((long)puVar10 + 0x13) = uVar15;
  uVar9 = _UNK_011ed0b5;
  uVar8 = _UNK_011ed0b1;
  uVar3 = _UNK_011ed0ad;
  *puVar10 = _DAT_011ed0a9;
  puVar10[1] = uVar3;
  puVar10[2] = uVar8;
  puVar10[3] = uVar9;
  *(undefined1 *)((long)puVar10 + 0x1b) = 0;
  if (*(char *)(lVar2 + -0x16b0) == '\0') {
    *(undefined1 *)(lVar2 + -0x16b0) = 1;
    *(undefined **)(lVar2 + -0x1750) = &UNK_0f53bd88;
    *(undefined8 *)(lVar2 + -0x1738) = 0x1032547698badcfe;
    uVar15 = _UNK_014e11d8;
    *(undefined8 *)(lVar2 + -0x1748) = _DAT_014e11d0;
    *(undefined8 *)(lVar2 + -0x1740) = uVar15;
    *(undefined8 *)(lVar2 + -0x1730) = 0;
    *(undefined8 *)(lVar2 + -0x1728) = 0;
    *(undefined8 *)(lVar2 + -0x1720) = 0;
    *(undefined8 *)(lVar2 + -0x1718) = 0;
    *(undefined8 *)(lVar2 + -0x1710) = 0;
    *(undefined8 *)(lVar2 + -0x1708) = 0;
    *(undefined8 *)(lVar2 + -0x1700) = 0;
    *(undefined8 *)(lVar2 + -0x16f8) = 0;
    *(undefined8 *)(lVar2 + -0x16f0) = 0;
    *(undefined8 *)(lVar2 + -0x16e8) = 0;
    *(undefined8 *)(lVar2 + -0x16e0) = 0;
    *(undefined8 *)(lVar2 + -0x16d8) = 0;
    *(undefined8 *)(lVar2 + -0x16d0) = 0;
    *(undefined8 *)(lVar2 + -0x16c8) = 0;
    *(undefined8 *)(lVar2 + -0x16c0) = 0;
    *(undefined8 *)(lVar2 + -0x16b8) = 0;
  }
  (**(code **)(*plVar1 + 0x10))(plVar1);
  if ((bStack_d88 & 1) == 0) {
    uVar16 = (uint)(bStack_d88 >> 1);
    puVar10 = &uStack_d87;
  }
  else {
    puVar10 = (undefined4 *)
              CONCAT26(uStack_d72,
                       CONCAT15(uStack_d73,CONCAT23(uStack_d75,CONCAT21(uStack_d77,uStack_d78))));
    uVar16 = CONCAT31((undefined3)uStack_d7f,bStack_d80);
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,puVar10,uVar16);
  (**(code **)(*plVar1 + 0x20))(plVar1,&bStack_d08);
  uVar4 = CONCAT41(uStack_d07,bStack_d08);
  uVar5 = CONCAT41(uStack_cff,bStack_d00);
  uVar18 = ((ulong)(uStack_d03 >> 0x10) | (ulong)uStack_d03 & 0xff00 |
            ((ulong)uStack_d03 & 0xff) << 0x10 | ((ulong)uVar4 & 0xff00000000) >> 8 |
            ((ulong)uVar4 & 0xff000000) << 8 | ((ulong)uVar4 & 0xff0000) << 0x18 |
            ((ulong)uVar4 & 0xff00) << 0x28 | CONCAT35(uStack_d03,uVar4) << 0x38) ^
           *(ulong *)(param_2 + 8);
  uVar20 = ((ulong)(uStack_cfb >> 0x10) | (ulong)uStack_cfb & 0xff00 |
            ((ulong)uStack_cfb & 0xff) << 0x10 | ((ulong)uVar5 & 0xff00000000) >> 8 |
            ((ulong)uVar5 & 0xff000000) << 8 | ((ulong)uVar5 & 0xff0000) << 0x18 |
            ((ulong)uVar5 & 0xff00) << 0x28 | CONCAT35(uStack_cfb,uVar5) << 0x38) ^
           *(ulong *)(param_2 + 0x10);
  if (uVar20 == 0 && uVar18 == 0) {
    uVar18 = 0x9e3779b97f4a7c15;
    uVar20 = 0x6a09e667f3bcc909;
  }
  if ((bStack_d88 & 1) != 0) {
    func_0x0412a280(CONCAT26(uStack_d72,
                             CONCAT15(uStack_d73,
                                      CONCAT23(uStack_d75,CONCAT21(uStack_d77,uStack_d78)))),
                    CONCAT35(uStack_d83,CONCAT41(uStack_d87,bStack_d88)) & 0xfffffffffffffffe);
  }
  uStack_958 = func_0x0cc41df0(0xf6ff9e0,0xf719bd0,1);
  func_0x05292a50(param_1,auStack_428);
  func_0x05292d30(param_1 + 0x78,&bStack_3b0);
  lStack_968 = param_1 + 0x78;
  func_0x049cce40(param_1 + 0x3f8,&uStack_888);
  lStack_b78 = param_1 + 0x3f8;
  uStack_960 = uVar18;
  func_0x049cce40(param_1 + 0x430,&uStack_850);
  func_0x049cce40(param_1 + 0x468,auStack_818);
  func_0x049cce40(param_1 + 0x4a0,auStack_7e0);
  *(undefined **)(param_1 + 0x4d8) = &UNK_0ef51388;
  *(undefined4 *)(param_1 + 0x4e0) = (undefined4)uStack_7a0;
  *(undefined4 *)(param_1 + 0x4e4) = uStack_7a0._4_4_;
  *(undefined4 *)(param_1 + 0x4e8) = (undefined4)uStack_798;
  *(undefined4 *)(param_1 + 0x4ec) = uStack_798._4_4_;
  func_0x049cce40(param_1 + 0x4f0,&bStack_b48);
  lStack_b80 = param_1 + 0x4f0;
  func_0x049cce40(param_1 + 0x528,auStack_b10);
  func_0x049cce40(param_1 + 0x560,auStack_ad8);
  func_0x049cce40(param_1 + 0x598,auStack_aa0);
  func_0x049cce40(param_1 + 0x5d0,&uStack_a68);
  lStack_b88 = param_1 + 0x5d0;
  func_0x049cce40(param_1 + 0x608,&puStack_a30);
  func_0x049cce40(param_1 + 0x640,&puStack_9f8);
  func_0x049cce40(param_1 + 0x678,&puStack_9c0);
  lVar2 = lStack_bb8;
  *(undefined **)(param_1 + 0x6b0) = &UNK_0ef51388;
  *(undefined4 *)(param_1 + 0x6b8) = (undefined4)uStack_980;
  *(undefined4 *)(param_1 + 0x6bc) = uStack_980._4_4_;
  *(undefined4 *)(param_1 + 0x6c0) = (undefined4)uStack_978;
  *(undefined4 *)(param_1 + 0x6c4) = uStack_978._4_4_;
  *(undefined4 *)(param_1 + 0x6c8) = auStack_bc0[0];
  plStack_b90 = (long *)(param_1 + 0x6d0);
  *(undefined8 *)(param_1 + 0x6d0) = 0;
  *(undefined8 *)(param_1 + 0x6d8) = 0;
  *(undefined8 *)(param_1 + 0x6e0) = 0;
  lVar19 = lStack_bb0 - lStack_bb8;
  if (lVar19 != 0) {
    if (0x1fd04794a10e6a < (ulong)((lVar19 >> 2) * -0x6ddb372d3c25c755)) {
      func_0x052bdae0();
      goto LAB_05285ce2;
    }
    lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar19);
    if (lVar14 == 0) {
      FUN_0eec74c0(lVar19,0);
    }
    *(long *)(param_1 + 0x6d0) = lVar14;
    *(long *)(param_1 + 0x6d8) = lVar14;
    *(long *)(param_1 + 0x6e0) = lVar14 + lVar19;
    func_0x0eee2f00(lVar14,lVar2,lVar19);
    *(long *)(param_1 + 0x6d8) = lVar14 + lVar19;
  }
  lVar2 = lStack_b68;
  *(undefined4 *)(param_1 + 0x6e8) = uStack_ba0;
  *(undefined4 *)(param_1 + 0x6f0) = auStack_b70[0];
  plStack_b98 = (long *)(param_1 + 0x6f8);
  *(undefined8 *)(param_1 + 0x6f8) = 0;
  *(undefined8 *)(param_1 + 0x700) = 0;
  *(undefined8 *)(param_1 + 0x708) = 0;
  lVar19 = lStack_b60 - lStack_b68;
  if (lVar19 != 0) {
    if (0x1fd04794a10e6a < (ulong)((lVar19 >> 2) * -0x6ddb372d3c25c755)) {
LAB_05285ce2:
      uVar15 = func_0x052bdae0();
      lVar2 = *plStack_b98;
      if (lVar2 != 0) {
        *(long *)(param_1 + 0x700) = lVar2;
        func_0x0412a280(lVar2,*(long *)(param_1 + 0x708) - lVar2);
      }
      lVar2 = *plStack_b90;
      if (lVar2 != 0) {
        *(long *)(param_1 + 0x6d8) = lVar2;
        func_0x0412a280(lVar2,*(long *)(param_1 + 0x6e0) - lVar2);
      }
      func_0x052930f0(lStack_b88);
      func_0x052931e0(lStack_b80);
      func_0x052932d0(lStack_b78);
      func_0x052933c0(lStack_968);
      func_0x052937e0(param_1);
      func_0x0495d8f0(&bStack_788);
      func_0x052931e0(&bStack_b48);
      func_0x052930f0(&uStack_a68);
      func_0x052933c0(&bStack_3b0);
      func_0x052932d0(&uStack_888);
      do {
        if (lStack_b68 != 0) {
          lStack_b60 = lStack_b68;
          func_0x0412a280(lStack_b68,lStack_b58 - lStack_b68);
        }
        func_0x052937e0(auStack_428);
        if (lStack_bb8 != 0) {
          lStack_bb0 = lStack_bb8;
          func_0x0412a280(lStack_bb8,lStack_ba8 - lStack_bb8);
        }
        uVar15 = func_0x0eee2d70(uVar15);
        if ((bStack_b48 & 1) != 0) {
          func_0x0412a280(CONCAT17(uStack_b31,
                                   CONCAT16(uStack_b32,
                                            CONCAT15(uStack_b33,CONCAT41(uStack_b37,uStack_b38)))),
                          CONCAT35(uStack_b43,CONCAT41(uStack_b47,bStack_b48)) & 0xfffffffffffffffe)
          ;
        }
        FUN_049cd290(&uStack_a68);
        FUN_049cd290(&bStack_788);
        FUN_049cd290(&bStack_3b0);
      } while( true );
    }
    lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar19);
    if (lVar14 == 0) {
      FUN_0eec74c0(lVar19,0);
    }
    *(long *)(param_1 + 0x6f8) = lVar14;
    *(long *)(param_1 + 0x700) = lVar14;
    *(long *)(param_1 + 0x708) = lVar14 + lVar19;
    func_0x0eee2f00(lVar14,lVar2,lVar19);
    *(long *)(param_1 + 0x700) = lVar14 + lVar19;
  }
  *(undefined4 *)(param_1 + 0x710) = uStack_b50;
  func_0x05292fb0(param_1 + 0x718,&bStack_788);
  uVar18 = uVar20 ^ uStack_960;
  uVar12 = uVar18 << 0x15 ^ (uStack_960 << 0x31 | uStack_960 >> 0xf) ^ uVar18;
  uVar18 = (uVar18 << 0x1c | uVar18 >> 0x24) + uVar12;
  *(undefined **)(param_1 + 0xa70) = &UNK_0ef51388;
  *(ulong *)(param_1 + 0xa78) =
       ((uVar20 + uStack_960) * 0x20000 | uVar20 + uStack_960 >> 0x2f) + uStack_960;
  *(ulong *)(param_1 + 0xa80) = (uVar18 * 0x20000 | uVar18 >> 0x2f) + uVar12;
  *(undefined8 *)(param_1 + 0xa88) = uStack_958;
  func_0x0495d8f0(&bStack_788);
  func_0x052931e0(&bStack_b48);
  func_0x052930f0(&uStack_a68);
  func_0x052933c0(&bStack_3b0);
  func_0x052932d0(&uStack_888);
  if (lStack_b68 != 0) {
    lStack_b60 = lStack_b68;
    func_0x0412a280(lStack_b68,lStack_b58 - lStack_b68);
  }
  if (lStack_3d0 != 0) {
    lStack_3c8 = lStack_3d0;
    func_0x0412a280(lStack_3d0,lStack_3c0 - lStack_3d0);
  }
  if (lStack_3f8 != 0) {
    lStack_3f0 = lStack_3f8;
    func_0x0412a280(lStack_3f8,lStack_3e8 - lStack_3f8);
  }
  if (lStack_420 != 0) {
    lStack_418 = lStack_420;
    func_0x0412a280(lStack_420,lStack_410 - lStack_420);
  }
  if (lStack_bb8 != 0) {
    lStack_bb0 = lStack_bb8;
    func_0x0412a280(lStack_bb8,lStack_ba8 - lStack_bb8);
  }
  return;
}



/* ---- referenced strings ----
 * 0x11ed0a9  minecraft:depth_based_layer
 * 0x11ed0b4  epth_based_layer
 * 0x120864e  minecraft:ore_gap
 * 0x1208660  minecraft:aquifer_fluid_level_floodedness
 * 0x1208670  r_fluid_level_floodedness
 * 0x1208679  evel_floodedness
 * 0x1258374  minecraft:aquifer
 * 0x127248d  minecraft:surface
 * 0x12bde31  minecraft:noodle
 * 0x12bde42  minecraft:noodle_thickness
 * 0x12bde4c  noodle_thickness
 * 0x130a81f  minecraft:aquifer_fluid_level_spread
 * 0x130a82f  r_fluid_level_spread
 * 0x135c3e0  minecraft:ore_veininess
 * 0x135c3f8  minecraft:aquifer_barrier
 * 0x135c401  :aquifer_barrier
 * 0x1390e6c  minecraft:aquifer_lava
 * 0x13f9e45  minecraft:terrain
 * 0x1412d61  minecraft:noodle_ridge_a
 * 0x142c9b4  minecraft:ore_vein_a
 * 0x142c9c9  minecraft:ore_vein_b
 * 0x149570e  minecraft:blending
 * 0x14ae7d7  minecraft:noodle_ridge_b
 */

/* ---- assembly ---- */
/* 05282630 */  PUSH RBP
/* 05282631 */  PUSH R15
/* 05282633 */  PUSH R14
/* 05282635 */  PUSH R13
/* 05282637 */  PUSH R12
/* 05282639 */  PUSH RBX
/* 0528263a */  SUB RSP,0xd68
/* 05282641 */  MOV R14,RSI
/* 05282644 */  MOV RBX,RDI
/* 05282647 */  MOV byte ptr [RSP + 0x9e8],0x24
/* 0528264f */  MOVUPS XMM0,xmmword ptr [0x0149570e]
/* 05282656 */  MOVUPS xmmword ptr [RSP + 0x9e9],XMM0
/* 0528265e */  MOV word ptr [RSP + 0x9f9],0x676e
/* 05282668 */  MOV byte ptr [RSP + 0x9fb],0x0
/* 05282670 */  MOV RAX,qword ptr FS:[0x0]
/* 0528267c */  MOV R12,RAX
/* 0528267f */  CMP byte ptr [RAX + -0x16b0],0x0
/* 05282686 */  JZ 0x052851b7
/* 0528268c */  LEA R15,[R12 + -0x1750]
/* 05282694 */  MOV RAX,qword ptr [R12 + -0x1750]
/* 0528269c */  MOV RDI,R15
/* 0528269f */  CALL qword ptr [RAX + 0x10]
/* 052826a2 */  MOVZX EDX,byte ptr [RSP + 0x9e8]
/* 052826aa */  TEST DL,0x1
/* 052826ad */  JZ 0x052826c0
/* 052826af */  MOV RSI,qword ptr [RSP + 0x9f8]
/* 052826b7 */  MOV EDX,dword ptr [RSP + 0x9f0]
/* 052826be */  JMP 0x052826ca
/* 052826c0 */  LEA RSI,[RSP + 0x9e9]
/* 052826c8 */  SHR EDX,0x1
/* 052826ca */  MOV RAX,qword ptr [R15]
/* 052826cd */  MOV RDI,R15
/* 052826d0 */  CALL qword ptr [RAX + 0x18]
/* 052826d3 */  MOV RAX,qword ptr [R15]
/* 052826d6 */  LEA RSI,[RSP + 0x610]
/* 052826de */  MOV RDI,R15
/* 052826e1 */  CALL qword ptr [RAX + 0x20]
/* 052826e4 */  MOV RAX,qword ptr [RSP + 0x610]
/* 052826ec */  MOV RCX,qword ptr [RSP + 0x618]
/* 052826f4 */  BSWAP RAX
/* 052826f7 */  BSWAP RCX
/* 052826fa */  XOR RAX,qword ptr [R14 + 0x8]
/* 052826fe */  XOR RCX,qword ptr [R14 + 0x10]
/* 05282702 */  LEA RBP,[0xef512d0]
/* 05282709 */  MOV qword ptr [RSP + 0x498],RBP
/* 05282711 */  MOV qword ptr [RSP + 0x4a0],RAX
/* 05282719 */  MOV qword ptr [RSP + 0x4a8],RCX
/* 05282721 */  OR RCX,RAX
/* 05282724 */  JZ 0x05284d5b
/* 0528272a */  MOV qword ptr [RSP + 0x4b0],0x0
/* 05282736 */  MOV byte ptr [RSP + 0x4b8],0x0
/* 0528273e */  TEST byte ptr [RSP + 0x9e8],0x1
/* 05282746 */  JZ 0x05282761
/* 05282748 */  MOV RSI,qword ptr [RSP + 0x9e8]
/* 05282750 */  MOV RDI,qword ptr [RSP + 0x9f8]
/* 05282758 */  AND RSI,-0x2
/* 0528275c */  CALL 0x0412a280
/* 05282761 */  MOV dword ptr [RSP + 0x1d8],0x8
/* 0528276c */  XORPS XMM0,XMM0
/* 0528276f */  MOVUPS xmmword ptr [RSP + 0x1e0],XMM0
/* 05282777 */  MOV qword ptr [RSP + 0x1f0],0x0
/* 05282783 */  LEA RDI,[RSP + 0x1d8]
/* 0528278b */  LEA RSI,[RSP + 0x498]
/* 05282793 */  XOR EDX,EDX
/* 05282795 */  CALL 0x0d3430a0
/* 0528279a */  MOV byte ptr [RSP + 0x9e8],0x22
/* 052827a2 */  MOVUPS XMM0,xmmword ptr [0x013f9e45]
/* 052827a9 */  MOVUPS xmmword ptr [RSP + 0x9e9],XMM0
/* 052827b1 */  MOV word ptr [RSP + 0x9f9],0x6e
/* 052827bb */  CMP byte ptr [R12 + -0x16b0],0x0
/* 052827c4 */  JZ 0x05285241
/* 052827ca */  MOV RAX,qword ptr [R15]
/* 052827cd */  MOV RDI,R15
/* 052827d0 */  CALL qword ptr [RAX + 0x10]
/* 052827d3 */  MOVZX EDX,byte ptr [RSP + 0x9e8]
/* 052827db */  TEST DL,0x1
/* 052827de */  JZ 0x052827f1
/* 052827e0 */  MOV RSI,qword ptr [RSP + 0x9f8]
/* 052827e8 */  MOV EDX,dword ptr [RSP + 0x9f0]
/* 052827ef */  JMP 0x052827fb
/* 052827f1 */  LEA RSI,[RSP + 0x9e9]
/* 052827f9 */  SHR EDX,0x1
/* 052827fb */  MOV RAX,qword ptr [R15]
/* 052827fe */  MOV RDI,R15
/* 05282801 */  CALL qword ptr [RAX + 0x18]
/* 05282804 */  MOV RAX,qword ptr [R15]
/* 05282807 */  LEA RSI,[RSP + 0x610]
/* 0528280f */  MOV RDI,R15
/* 05282812 */  CALL qword ptr [RAX + 0x20]
/* 05282815 */  MOV RAX,qword ptr [RSP + 0x610]
/* 0528281d */  MOV RCX,qword ptr [RSP + 0x618]
/* 05282825 */  BSWAP RAX
/* 05282828 */  BSWAP RCX
/* 0528282b */  XOR RAX,qword ptr [R14 + 0x8]
/* 0528282f */  XOR RCX,qword ptr [R14 + 0x10]
/* 05282833 */  MOV qword ptr [RSP + 0x470],RBP
/* 0528283b */  MOV qword ptr [RSP + 0x478],RAX
/* 05282843 */  MOV qword ptr [RSP + 0x480],RCX
/* 0528284b */  OR RCX,RAX
/* 0528284e */  JZ 0x05284da6
/* 05282854 */  MOV qword ptr [RSP + 0x488],0x0
/* 05282860 */  MOV byte ptr [RSP + 0x490],0x0
/* 05282868 */  TEST byte ptr [RSP + 0x9e8],0x1
/* 05282870 */  JZ 0x0528288b
/* 05282872 */  MOV RSI,qword ptr [RSP + 0x9e8]
/* 0528287a */  MOV RDI,qword ptr [RSP + 0x9f8]
/* 05282882 */  AND RSI,-0x2
/* 05282886 */  CALL 0x0412a280
/* 0528288b */  LEA RAX,[RSP + 0x470]
/* 05282893 */  MOV qword ptr [RSP + 0x9f0],RAX
/* 0528289b */  LEA RAX,[0xf460b48]
/* 052828a2 */  MOV qword ptr [RSP + 0x9e8],RAX
/* 052828aa */  LEA RDI,[RSP + 0x970]
/* 052828b2 */  LEA RSI,[RSP + 0x9e8]
/* 052828ba */  CALL 0x0d33fc30
/* 052828bf */  MOV byte ptr [RSP + 0x9e8],0x22
/* 052828c7 */  MOVUPS XMM0,xmmword ptr [0x0127248d]
/* 052828ce */  MOVUPS xmmword ptr [RSP + 0x9e9],XMM0
/* 052828d6 */  MOV word ptr [RSP + 0x9f9],0x65
/* 052828e0 */  CMP byte ptr [R12 + -0x16b0],0x0
/* 052828e9 */  JZ 0x052852cb
/* 052828ef */  MOV RAX,qword ptr [R15]
/* 052828f2 */  MOV RDI,R15
/* 052828f5 */  CALL qword ptr [RAX + 0x10]
/* 052828f8 */  MOVZX EDX,byte ptr [RSP + 0x9e8]
/* 05282900 */  TEST DL,0x1
/* 05282903 */  JZ 0x05282916
/* 05282905 */  MOV RSI,qword ptr [RSP + 0x9f8]
/* 0528290d */  MOV EDX,dword ptr [RSP + 0x9f0]
/* 05282914 */  JMP 0x05282920
/* 05282916 */  LEA RSI,[RSP + 0x9e9]
/* 0528291e */  SHR EDX,0x1
/* 05282920 */  MOV RAX,qword ptr [R15]
/* 05282923 */  MOV RDI,R15
/* 05282926 */  CALL qword ptr [RAX + 0x18]
/* 05282929 */  MOV RAX,qword ptr [R15]
/* 0528292c */  LEA RSI,[RSP + 0x610]
/* 05282934 */  MOV RDI,R15
/* 05282937 */  CALL qword ptr [RAX + 0x20]
/* 0528293a */  MOV RAX,qword ptr [RSP + 0x610]
/* 05282942 */  MOV RCX,qword ptr [RSP + 0x618]
/* 0528294a */  BSWAP RAX
/* 0528294d */  BSWAP RCX
/* 05282950 */  XOR RAX,qword ptr [R14 + 0x8]
/* 05282954 */  XOR RCX,qword ptr [R14 + 0x10]
/* 05282958 */  MOV qword ptr [RSP + 0x448],RBP
/* 05282960 */  MOV qword ptr [RSP + 0x450],RAX
/* 05282968 */  MOV qword ptr [RSP + 0x458],RCX
/* 05282970 */  OR RCX,RAX
/* 05282973 */  JZ 0x05284df1
/* 05282979 */  MOV qword ptr [RSP + 0x460],0x0
/* 05282985 */  MOV byte ptr [RSP + 0x468],0x0
/* 0528298d */  TEST byte ptr [RSP + 0x9e8],0x1
/* 05282995 */  JZ 0x052829b0
/* 05282997 */  MOV RSI,qword ptr [RSP + 0x9e8]
/* 0528299f */  MOV RDI,qword ptr [RSP + 0x9f8]
/* 052829a7 */  AND RSI,-0x2
/* 052829ab */  CALL 0x0412a280
/* 052829b0 */  MOV dword ptr [RSP + 0x228],0x4
/* 052829bb */  XORPS XMM0,XMM0
/* 052829be */  MOVUPS xmmword ptr [RSP + 0x230],XMM0
/* 052829c6 */  MOV qword ptr [RSP + 0x240],0x0
/* 052829d2 */  LEA RDI,[RSP + 0x228]
/* 052829da */  LEA RSI,[RSP + 0x448]
/* 052829e2 */  MOV EDX,0x1
/* 052829e7 */  CALL 0x0d3430a0
/* 052829ec */  LEA RDI,[0xf5463b0]
/* 052829f3 */  MOV RAX,qword ptr [0x0f5463b0]
/* 052829fa */  MOV ESI,0x20
/* 052829ff */  CALL qword ptr [RAX + 0x10]
/* 05282a02 */  MOV R13,RAX
/* 05282a05 */  TEST RAX,RAX
/* 05282a08 */  JZ 0x05285b6b
/* 05282a0e */  MOV qword ptr [RSP + 0x9f8],R13
/* 05282a16 */  MOV qword ptr [RSP + 0x9e8],0x21
/* 05282a22 */  MOV qword ptr [RSP + 0x9f0],0x19
/* 05282a2e */  MOVUPS XMM0,xmmword ptr [0x0135c401]
/* 05282a35 */  MOVUPS xmmword ptr [R13 + 0x9],XMM0
/* 05282a3a */  MOVUPS XMM0,xmmword ptr [0x0135c3f8]
/* 05282a41 */  MOVUPS xmmword ptr [R13],XMM0
/* 05282a46 */  MOV byte ptr [R13 + 0x19],0x0
/* 05282a4b */  CMP byte ptr [R12 + -0x16b0],0x0
/* 05282a54 */  JZ 0x05285355
/* 05282a5a */  MOV RAX,qword ptr [R15]
/* 05282a5d */  MOV RDI,R15
/* 05282a60 */  CALL qword ptr [RAX + 0x10]
/* 05282a63 */  MOVZX EDX,byte ptr [RSP + 0x9e8]
/* 05282a6b */  TEST DL,0x1
/* 05282a6e */  JZ 0x05282a81
/* 05282a70 */  MOV RSI,qword ptr [RSP + 0x9f8]
/* 05282a78 */  MOV EDX,dword ptr [RSP + 0x9f0]
/* 05282a7f */  JMP 0x05282a8b
/* 05282a81 */  SHR EDX,0x1
/* 05282a83 */  LEA RSI,[RSP + 0x9e9]
/* 05282a8b */  MOV RAX,qword ptr [R15]
/* 05282a8e */  MOV RDI,R15
/* 05282a91 */  CALL qword ptr [RAX + 0x18]
/* 05282a94 */  MOV RAX,qword ptr [R15]
/* 05282a97 */  LEA RSI,[RSP + 0x610]
/* 05282a9f */  MOV RDI,R15
/* 05282aa2 */  CALL qword ptr [RAX + 0x20]
/* 05282aa5 */  MOV RAX,qword ptr [RSP + 0x610]
/* 05282aad */  MOV RCX,qword ptr [RSP + 0x618]
/* 05282ab5 */  BSWAP RAX
/* 05282ab8 */  BSWAP RCX
/* 05282abb */  XOR RAX,qword ptr [R14 + 0x8]
/* 05282abf */  XOR RCX,qword ptr [R14 + 0x10]
/* 05282ac3 */  MOV qword ptr [RSP + 0x160],RBP
/* 05282acb */  MOV qword ptr [RSP + 0x168],RAX
/* 05282ad3 */  MOV qword ptr [RSP + 0x170],RCX
/* 05282adb */  OR RCX,RAX
/* 05282ade */  JZ 0x05284e3c
/* 05282ae4 */  MOV qword ptr [RSP + 0x178],0x0
/* 05282af0 */  MOV byte ptr [RSP + 0x180],0x0
/* 05282af8 */  TEST byte ptr [RSP + 0x9e8],0x1
/* 05282b00 */  JZ 0x05282b1b
/* 05282b02 */  MOV RSI,qword ptr [RSP + 0x9e8]
/* 05282b0a */  MOV RDI,qword ptr [RSP + 0x9f8]
/* 05282b12 */  AND RSI,-0x2
/* 05282b16 */  CALL 0x0412a280
/* 05282b1b */  LEA RDI,[0xf5463b0]
/* 05282b22 */  MOV RAX,qword ptr [0x0f5463b0]
/* 05282b29 */  MOV ESI,0x4
/* 05282b2e */  CALL qword ptr [RAX + 0x10]
/* 05282b31 */  MOV R13,RAX
/* 05282b34 */  TEST RAX,RAX
/* 05282b37 */  JZ 0x05285b7c
/* 05282b3d */  MOV qword ptr [RSP + 0x610],R13
/* 05282b45 */  MOV RAX,R13
/* 05282b48 */  ADD RAX,0x4
/* 05282b4c */  MOV qword ptr [RSP + 0x620],RAX
/* 05282b54 */  MOV dword ptr [R13],0x3f800000
/* 05282b5c */  MOV qword ptr [RSP + 0x618],RAX
/* 05282b64 */  LEA RDI,[RSP + 0x9e8]
/* 05282b6c */  LEA RSI,[RSP + 0x160]
/* 05282b74 */  LEA RCX,[RSP + 0x610]
/* 05282b7c */  MOV EDX,0xfffffffd
/* 05282b81 */  MOV R8D,0x1
/* 05282b87 */  CALL 0x0d3411f0
/* 05282b8c */  MOV RDI,qword ptr [RSP + 0x610]
/* 05282b94 */  TEST RDI,RDI
/* 05282b97 */  JZ 0x05282bb1
/* 05282b99 */  MOV qword ptr [RSP + 0x618],RDI
/* 05282ba1 */  MOV RSI,qword ptr [RSP + 0x620]
/* 05282ba9 */  SUB RSI,RDI
/* 05282bac */  CALL 0x0412a280
/* 05282bb1 */  LEA RDI,[0xf5463b0]
/* 05282bb8 */  MOV RAX,qword ptr [0x0f5463b0]
/* 05282bbf */  MOV ESI,0x30
/* 05282bc4 */  CALL qword ptr [RAX + 0x10]
/* 05282bc7 */  MOV R13,RAX
/* 05282bca */  TEST RAX,RAX
/* 05282bcd */  JZ 0x05285b8d
/* 05282bd3 */  MOV qword ptr [RSP + 0x620],R13
/* 05282bdb */  MOV qword ptr [RSP + 0x610],0x31
/* 05282be7 */  MOV qword ptr [RSP + 0x618],0x29
/* 05282bf3 */  MOVUPS XMM0,xmmword ptr [0x01208679]
/* 05282bfa */  MOVUPS xmmword ptr [R13 + 0x19],XMM0
/* 05282bff */  MOVUPS XMM0,xmmword ptr [0x01208670]
/* 05282c06 */  MOVUPS xmmword ptr [R13 + 0x10],XMM0
/* 05282c0b */  MOVUPS XMM0,xmmword ptr [0x01208660]
/* 05282c12 */  MOVUPS xmmword ptr [R13],XMM0
/* 05282c17 */  MOV byte ptr [R13 + 0x29],0x0
/* 05282c1c */  CMP byte ptr [R12 + -0x16b0],0x0
/* 05282c25 */  JZ 0x052853df
/* 05282c2b */  MOV RAX,qword ptr [R15]
/* 05282c2e */  MOV RDI,R15
/* 05282c31 */  CALL qword ptr [RAX + 0x10]
/* 05282c34 */  MOVZX EDX,byte ptr [RSP + 0x610]
/* 05282c3c */  TEST DL,0x1
/* 05282c3f */  JZ 0x05282c52
/* 05282c41 */  MOV RSI,qword ptr [RSP + 0x620]
/* 05282c49 */  MOV EDX,dword ptr [RSP + 0x618]
/* 05282c50 */  JMP 0x05282c5c
/* 05282c52 */  SHR EDX,0x1
/* 05282c54 */  LEA RSI,[RSP + 0x611]
/* 05282c5c */  MOV RAX,qword ptr [R15]
/* 05282c5f */  MOV RDI,R15
/* 05282c62 */  CALL qword ptr [RAX + 0x18]
/* 05282c65 */  MOV RAX,qword ptr [R15]
/* 05282c68 */  LEA RSI,[RSP + 0x330]
/* 05282c70 */  MOV RDI,R15
/* 05282c73 */  CALL qword ptr [RAX + 0x20]
/* 05282c76 */  MOV RAX,qword ptr [RSP + 0x330]
/* 05282c7e */  MOV RCX,qword ptr [RSP + 0x338]
/* 05282c86 */  BSWAP RAX
/* 05282c89 */  BSWAP RCX
/* 05282c8c */  XOR RAX,qword ptr [R14 + 0x8]
/* 05282c90 */  XOR RCX,qword ptr [R14 + 0x10]
/* 05282c94 */  MOV qword ptr [RSP + 0x1a0],RBP
/* 05282c9c */  MOV qword ptr [RSP + 0x1a8],RAX
/* 05282ca4 */  MOV qword ptr [RSP + 0x1b0],RCX
/* 05282cac */  OR RCX,RAX
/* 05282caf */  JZ 0x05284e87
/* 05282cb5 */  MOV qword ptr [RSP + 0x1b8],0x0
/* 05282cc1 */  MOV byte ptr [RSP + 0x1c0],0x0
/* 05282cc9 */  TEST byte ptr [RSP + 0x610],0x1
/* 05282cd1 */  JZ 0x05282cec
/* 05282cd3 */  MOV RSI,qword ptr [RSP + 0x610]
/* 05282cdb */  MOV RDI,qword ptr [RSP + 0x620]
/* 05282ce3 */  AND RSI,-0x2
/* 05282ce7 */  CALL 0x0412a280
/* 05282cec */  LEA RDI,[0xf5463b0]
/* 05282cf3 */  MOV RAX,qword ptr [0x0f5463b0]
/* 05282cfa */  MOV ESI,0x4
/* 05282cff */  CALL qword ptr [RAX + 0x10]
/* 05282d02 */  MOV R13,RAX
/* 05282d05 */  TEST RAX,RAX
/* 05282d08 */  JZ 0x05285b9e
/* 05282d0e */  MOV qword ptr [RSP + 0x330],R13
/* 05282d16 */  MOV RAX,R13
/* 05282d19 */  ADD RAX,0x4
/* 05282d1d */  MOV qword ptr [RSP + 0x340],RAX
/* 05282d25 */  MOV dword ptr [R13],0x3f800000
/* 05282d2d */  MOV qword ptr [RSP + 0x338],RAX
/* 05282d35 */  LEA RDI,[RSP + 0x610]
/* 05282d3d */  LEA RSI,[RSP + 0x1a0]
/* 05282d45 */  LEA RCX,[RSP + 0x330]
/* 05282d4d */  MOV EDX,0xfffffff9
/* 05282d52 */  MOV R8D,0x1
/* 05282d58 */  CALL 0x0d3411f0
/* 05282d5d */  MOV RDI,qword ptr [RSP + 0x330]
/* 05282d65 */  TEST RDI,RDI
/* 05282d68 */  JZ 0x05282d82
/* 05282d6a */  MOV qword ptr [RSP + 0x338],RDI
/* 05282d72 */  MOV RSI,qword ptr [RSP + 0x340]
/* 05282d7a */  SUB RSI,RDI
/* 05282d7d */  CALL 0x0412a280
/* 05282d82 */  LEA RDI,[0xf5463b0]
/* 05282d89 */  MOV RAX,qword ptr [0x0f5463b0]
/* 05282d90 */  MOV ESI,0x28
/* 05282d95 */  CALL qword ptr [RAX + 0x10]
/* 05282d98 */  MOV R13,RAX
/* 05282d9b */  TEST RAX,RAX
/* 05282d9e */  JZ 0x05285baf
/* 05282da4 */  MOV qword ptr [RSP + 0x340],R13
/* 05282dac */  MOV qword ptr [RSP + 0x330],0x29
/* 05282db8 */  MOV qword ptr [RSP + 0x338],0x24
/* 05282dc4 */  MOVUPS XMM0,xmmword ptr [0x0130a82f]
/* 05282dcb */  MOVUPS xmmword ptr [R13 + 0x10],XMM0
/* 05282dd0 */  MOVUPS XMM0,xmmword ptr [0x0130a81f]
/* 05282dd7 */  MOVUPS xmmword ptr [R13],XMM0
/* 05282ddc */  MOV dword ptr [R13 + 0x20],0x64616572
/* 05282de4 */  MOV byte ptr [R13 + 0x24],0x0
/* 05282de9 */  CMP byte ptr [R12 + -0x16b0],0x0
/* 05282df2 */  JZ 0x05285469
/* 05282df8 */  MOV RAX,qword ptr [R15]
/* 05282dfb */  MOV RDI,R15
/* 05282dfe */  CALL qword ptr [RAX + 0x10]
/* 05282e01 */  MOVZX EDX,byte ptr [RSP + 0x330]
/* 05282e09 */  TEST DL,0x1
/* 05282e0c */  JZ 0x05282e1f
/* 05282e0e */  MOV RSI,qword ptr [RSP + 0x340]
/* 05282e16 */  MOV EDX,dword ptr [RSP + 0x338]
/* 05282e1d */  JMP 0x05282e29
/* 05282e1f */  SHR EDX,0x1
/* 05282e21 */  LEA RSI,[RSP + 0x331]
/* 05282e29 */  MOV RAX,qword ptr [R15]
/* 05282e2c */  MOV RDI,R15
/* 05282e2f */  CALL qword ptr [RAX + 0x18]
/* 05282e32 */  MOV RAX,qword ptr [R15]
/* 05282e35 */  LEA RSI,[RSP + 0x250]
/* 05282e3d */  MOV RDI,R15
/* 05282e40 */  CALL qword ptr [RAX + 0x20]
/* 05282e43 */  MOV RAX,qword ptr [RSP + 0x250]
/* 05282e4b */  MOV RCX,qword ptr [RSP + 0x258]
/* 05282e53 */  BSWAP RAX
/* 05282e56 */  BSWAP RCX
/* 05282e59 */  XOR RAX,qword ptr [R14 + 0x8]
/* 05282e5d */  XOR RCX,qword ptr [R14 + 0x10]
/* 05282e61 */  MOV qword ptr [RSP + 0xf8],RBP
/* 05282e69 */  MOV qword ptr [RSP + 0x100],RAX
/* 05282e71 */  MOV qword ptr [RSP + 0x108],RCX
/* 05282e79 */  OR RCX,RAX
/* 05282e7c */  JZ 0x05284ed2
/* 05282e82 */  MOV qword ptr [RSP + 0x110],0x0
/* 05282e8e */  MOV byte ptr [RSP + 0x118],0x0
/* 05282e96 */  TEST byte ptr [RSP + 0x330],0x1
/* 05282e9e */  JZ 0x05282eb9
/* 05282ea0 */  MOV RSI,qword ptr [RSP + 0x330]
/* 05282ea8 */  MOV RDI,qword ptr [RSP + 0x340]
/* 05282eb0 */  AND RSI,-0x2
/* 05282eb4 */  CALL 0x0412a280
/* 05282eb9 */  LEA RDI,[0xf5463b0]
/* 05282ec0 */  MOV RAX,qword ptr [0x0f5463b0]
/* 05282ec7 */  MOV ESI,0x4
/* 05282ecc */  CALL qword ptr [RAX + 0x10]
/* 05282ecf */  MOV R13,RAX
/* 05282ed2 */  TEST RAX,RAX
/* 05282ed5 */  JZ 0x05285bc0
/* 05282edb */  MOV qword ptr [RSP + 0x250],R13
/* 05282ee3 */  MOV RAX,R13
/* 05282ee6 */  ADD RAX,0x4
/* 05282eea */  MOV qword ptr [RSP + 0x260],RAX
/* 05282ef2 */  MOV dword ptr [R13],0x3f800000
/* 05282efa */  MOV qword ptr [RSP + 0x258],RAX
/* 05282f02 */  LEA RDI,[RSP + 0x330]
/* 05282f0a */  LEA RSI,[RSP + 0xf8]
/* 05282f12 */  LEA RCX,[RSP + 0x250]
/* 05282f1a */  MOV EDX,0xfffffffb
/* 05282f1f */  MOV R8D,0x1
/* 05282f25 */  CALL 0x0d3411f0
/* 05282f2a */  MOV RDI,qword ptr [RSP + 0x250]
/* 05282f32 */  TEST RDI,RDI
/* 05282f35 */  JZ 0x05282f4f
/* 05282f37 */  MOV qword ptr [RSP + 0x258],RDI
/* 05282f3f */  MOV RSI,qword ptr [RSP + 0x260]
/* 05282f47 */  SUB RSI,RDI
/* 05282f4a */  CALL 0x0412a280
/* 05282f4f */  MOV byte ptr [RSP + 0x250],0x2c
/* 05282f57 */  MOVUPS XMM0,xmmword ptr [0x01390e6c]
/* 05282f5e */  MOVUPS xmmword ptr [RSP + 0x251],XMM0
/* 05282f66 */  MOV RAX,0x6176616c5f726566
/* 05282f70 */  MOV qword ptr [RSP + 0x25f],RAX
/* 05282f78 */  MOV byte ptr [RSP + 0x267],0x0
/* 05282f80 */  CMP byte ptr [R12 + -0x16b0],0x0
/* 05282f89 */  JZ 0x052854f3
/* 05282f8f */  MOV RAX,qword ptr [R15]
/* 05282f92 */  MOV RDI,R15
/* 05282f95 */  CALL qword ptr [RAX + 0x10]
/* 05282f98 */  MOVZX EDX,byte ptr [RSP + 0x250]
/* 05282fa0 */  TEST DL,0x1
/* 05282fa3 */  JZ 0x05282fb6
/* 05282fa5 */  MOV RSI,qword ptr [RSP + 0x260]
/* 05282fad */  MOV EDX,dword ptr [RSP + 0x258]
/* 05282fb4 */  JMP 0x05282fc0
/* 05282fb6 */  LEA RSI,[RSP + 0x251]
/* 05282fbe */  SHR EDX,0x1
/* 05282fc0 */  MOV RAX,qword ptr [R15]
/* 05282fc3 */  MOV RDI,R15
/* 05282fc6 */  CALL qword ptr [RAX + 0x18]
/* 05282fc9 */  MOV RAX,qword ptr [R15]
/* 05282fcc */  LEA RSI,[RSP + 0x10]
/* 05282fd1 */  MOV RDI,R15
/* 05282fd4 */  CALL qword ptr [RAX + 0x20]
/* 05282fd7 */  MOV RAX,qword ptr [RSP + 0x10]
/* 05282fdc */  MOV RCX,qword ptr [RSP + 0x18]
/* 05282fe1 */  BSWAP RAX
/* 05282fe4 */  BSWAP RCX
/* 05282fe7 */  XOR RAX,qword ptr [R14 + 0x8]
/* 05282feb */  XOR RCX,qword ptr [R14 + 0x10]
/* 05282fef */  MOV qword ptr [RSP + 0xd0],RBP
/* 05282ff7 */  MOV qword ptr [RSP + 0xd8],RAX
/* 05282fff */  MOV qword ptr [RSP + 0xe0],RCX
/* 05283007 */  OR RCX,RAX
/* 0528300a */  JZ 0x05284f1d
/* 05283010 */  MOV qword ptr [RSP + 0xe8],0x0
/* 0528301c */  MOV byte ptr [RSP + 0xf0],0x0
/* 05283024 */  TEST byte ptr [RSP + 0x250],0x1
/* 0528302c */  JZ 0x05283047
/* 0528302e */  MOV RSI,qword ptr [RSP + 0x250]
/* 05283036 */  MOV RDI,qword ptr [RSP + 0x260]
/* 0528303e */  AND RSI,-0x2
/* 05283042 */  CALL 0x0412a280
/* 05283047 */  LEA RDI,[0xf5463b0]
/* 0528304e */  MOV RAX,qword ptr [0x0f5463b0]
/* 05283055 */  MOV ESI,0x4
/* 0528305a */  CALL qword ptr [RAX + 0x10]
/* 0528305d */  MOV R13,RAX
/* 05283060 */  TEST RAX,RAX
/* 05283063 */  JZ 0x05285bd1
/* 05283069 */  MOV qword ptr [RSP + 0x10],R13
/* 0528306e */  MOV RAX,R13
/* 05283071 */  ADD RAX,0x4
/* 05283075 */  MOV qword ptr [RSP + 0x20],RAX
/* 0528307a */  MOV dword ptr [R13],0x3f800000
/* 05283082 */  MOV qword ptr [RSP + 0x18],RAX
/* 05283087 */  LEA RDI,[RSP + 0x250]
/* 0528308f */  LEA RSI,[RSP + 0xd0]
/* 05283097 */  LEA RCX,[RSP + 0x10]
/* 0528309c */  MOV EDX,0xffffffff
/* 052830a1 */  MOV R8D,0x1
/* 052830a7 */  CALL 0x0d3411f0
/* 052830ac */  MOV RDI,qword ptr [RSP + 0x10]
/* 052830b1 */  TEST RDI,RDI
/* 052830b4 */  JZ 0x052830c8
/* 052830b6 */  MOV qword ptr [RSP + 0x18],RDI
/* 052830bb */  MOV RSI,qword ptr [RSP + 0x20]
/* 052830c0 */  SUB RSI,RDI
/* 052830c3 */  CALL 0x0412a280
/* 052830c8 */  MOV byte ptr [RSP + 0x10],0x22
/* 052830cd */  MOVUPS XMM0,xmmword ptr [0x01258374]
/* 052830d4 */  MOVUPS xmmword ptr [RSP + 0x11],XMM0
/* 052830d9 */  MOV word ptr [RSP + 0x21],0x72
/* 052830e0 */  CMP byte ptr [R12 + -0x16b0],0x0
/* 052830e9 */  JZ 0x0528557d
/* 052830ef */  MOV RAX,qword ptr [R15]
/* 052830f2 */  MOV RDI,R15
/* 052830f5 */  CALL qword ptr [RAX + 0x10]
/* 052830f8 */  MOVZX EDX,byte ptr [RSP + 0x10]
/* 052830fd */  TEST DL,0x1
/* 05283100 */  JZ 0x0528310d
/* 05283102 */  MOV RSI,qword ptr [RSP + 0x20]
/* 05283107 */  MOV EDX,dword ptr [RSP + 0x18]
/* 0528310b */  JMP 0x05283114
/* 0528310d */  LEA RSI,[RSP + 0x11]
/* 05283112 */  SHR EDX,0x1
/* 05283114 */  MOV RAX,qword ptr [R15]
/* 05283117 */  MOV RDI,R15
/* 0528311a */  CALL qword ptr [RAX + 0x18]
/* 0528311d */  MOV RAX,qword ptr [R15]
/* 05283120 */  LEA RSI,[RSP + 0x90]
/* 05283128 */  MOV RDI,R15
/* 0528312b */  CALL qword ptr [RAX + 0x20]
/* 0528312e */  MOV RBP,qword ptr [RSP + 0x90]
/* 05283136 */  MOV R13,qword ptr [RSP + 0x98]
/* 0528313e */  BSWAP RBP
/* 05283141 */  BSWAP R13
/* 05283144 */  XOR RBP,qword ptr [R14 + 0x8]
/* 05283148 */  XOR R13,qword ptr [R14 + 0x10]
/* 0528314c */  MOV RAX,R13
/* 0528314f */  OR RAX,RBP
/* 05283152 */  MOV RAX,-0x61c8864680b583eb
/* 0528315c */  CMOVZ RBP,RAX
/* 05283160 */  MOV RAX,0x6a09e667f3bcc909
/* 0528316a */  CMOVZ R13,RAX
/* 0528316e */  TEST byte ptr [RSP + 0x10],0x1
/* 05283173 */  JZ 0x05283188
/* 05283175 */  MOV RSI,qword ptr [RSP + 0x10]
/* 0528317a */  MOV RDI,qword ptr [RSP + 0x20]
/* 0528317f */  AND RSI,-0x2
/* 05283183 */  CALL 0x0412a280
/* 05283188 */  LEA RDI,[RSP + 0x10]
/* 0528318d */  LEA RSI,[RSP + 0x9e8]
/* 05283195 */  CALL 0x049cce40
/* 0528319a */  LEA RDI,[RSP + 0x90]
/* 052831a2 */  LEA RSI,[RSP + 0x610]
/* 052831aa */  CALL 0x049cce40
/* 052831af */  LEA RDI,[RSP + 0x50]
/* 052831b4 */  LEA RSI,[RSP + 0x250]
/* 052831bc */  CALL 0x049cce40
/* 052831c1 */  LEA RDI,[RSP + 0x120]
/* 052831c9 */  LEA RSI,[RSP + 0x330]
/* 052831d1 */  CALL 0x049cce40
/* 052831d6 */  MOV RAX,R13
/* 052831d9 */  XOR RAX,RBP
/* 052831dc */  MOV RCX,RBP
/* 052831df */  ROL RCX,0x31
/* 052831e3 */  MOV RDX,RAX
/* 052831e6 */  SHL RDX,0x15
/* 052831ea */  XOR RDX,RCX
/* 052831ed */  XOR RDX,RAX
/* 052831f0 */  ROL RAX,0x1c
/* 052831f4 */  ADD R13,RBP
/* 052831f7 */  ROL R13,0x11
/* 052831fb */  ADD RAX,RDX
/* 052831fe */  ROL RAX,0x11
/* 05283202 */  ADD R13,RBP
/* 05283205 */  ADD RAX,RDX
/* 05283208 */  MOVAPS XMM0,xmmword ptr [RSP + 0x10]
/* 0528320d */  MOVAPS xmmword ptr [RSP + 0x510],XMM0
/* 05283215 */  MOV RCX,qword ptr [RSP + 0x20]
/* 0528321a */  MOV qword ptr [RSP + 0x520],RCX
/* 05283222 */  XORPS XMM0,XMM0
/* 05283225 */  MOVAPS xmmword ptr [RSP + 0x10],XMM0
/* 0528322a */  MOV qword ptr [RSP + 0x20],0x0
/* 05283233 */  MOVUPS XMM1,xmmword ptr [RSP + 0x28]
/* 05283238 */  MOVUPS xmmword ptr [RSP + 0x528],XMM1
/* 05283240 */  MOV RCX,qword ptr [RSP + 0x38]
/* 05283245 */  MOV qword ptr [RSP + 0x538],RCX
/* 0528324d */  MOVUPS xmmword ptr [RSP + 0x28],XMM0
/* 05283252 */  MOV qword ptr [RSP + 0x38],0x0
/* 0528325b */  MOVSS XMM1,dword ptr [RSP + 0x40]
/* 05283261 */  MOVSS dword ptr [RSP + 0x540],XMM1
/* 0528326a */  MOVAPS XMM1,xmmword ptr [RSP + 0x90]
/* 05283272 */  MOVUPS xmmword ptr [RSP + 0x548],XMM1
/* 0528327a */  MOV RCX,qword ptr [RSP + 0xa0]
/* 05283282 */  MOV qword ptr [RSP + 0x558],RCX
/* 0528328a */  MOVAPS xmmword ptr [RSP + 0x90],XMM0
/* 05283292 */  MOV qword ptr [RSP + 0xa0],0x0
/* 0528329e */  MOVUPS XMM1,xmmword ptr [RSP + 0xa8]
/* 052832a6 */  MOVAPS xmmword ptr [RSP + 0x560],XMM1
/* 052832ae */  MOV RCX,qword ptr [RSP + 0xb8]
/* 052832b6 */  MOV qword ptr [RSP + 0x570],RCX
/* 052832be */  MOVUPS xmmword ptr [RSP + 0xa8],XMM0
/* 052832c6 */  MOV qword ptr [RSP + 0xb8],0x0
/* 052832d2 */  MOVSS XMM1,dword ptr [RSP + 0xc0]
/* 052832db */  MOVSS dword ptr [RSP + 0x578],XMM1
/* 052832e4 */  MOVAPS XMM1,xmmword ptr [RSP + 0x50]
/* 052832e9 */  MOVAPS xmmword ptr [RSP + 0x580],XMM1
/* 052832f1 */  MOV RCX,qword ptr [RSP + 0x60]
/* 052832f6 */  MOV qword ptr [RSP + 0x590],RCX
/* 052832fe */  MOVAPS xmmword ptr [RSP + 0x50],XMM0
/* 05283303 */  MOV qword ptr [RSP + 0x60],0x0
/* 0528330c */  MOVUPS XMM1,xmmword ptr [RSP + 0x68]
/* 05283311 */  MOVUPS xmmword ptr [RSP + 0x598],XMM1
/* 05283319 */  MOV RCX,qword ptr [RSP + 0x78]
/* 0528331e */  MOV qword ptr [RSP + 0x5a8],RCX
/* 05283326 */  MOVUPS xmmword ptr [RSP + 0x68],XMM0
/* 0528332b */  MOV qword ptr [RSP + 0x78],0x0
/* 05283334 */  MOVSS XMM1,dword ptr [RSP + 0x80]
/* 0528333d */  MOVSS dword ptr [RSP + 0x5b0],XMM1
/* 05283346 */  MOVAPS XMM1,xmmword ptr [RSP + 0x120]
/* 0528334e */  MOVUPS xmmword ptr [RSP + 0x5b8],XMM1
/* 05283356 */  MOV RCX,qword ptr [RSP + 0x130]
/* 0528335e */  MOV qword ptr [RSP + 0x5c8],RCX
/* 05283366 */  MOVAPS xmmword ptr [RSP + 0x120],XMM0
/* 0528336e */  MOV qword ptr [RSP + 0x130],0x0
/* 0528337a */  MOVUPS XMM1,xmmword ptr [RSP + 0x138]
/* 05283382 */  MOVAPS xmmword ptr [RSP + 0x5d0],XMM1
/* 0528338a */  MOV RCX,qword ptr [RSP + 0x148]
/* 05283392 */  MOV qword ptr [RSP + 0x5e0],RCX
/* 0528339a */  MOVUPS xmmword ptr [RSP + 0x138],XMM0
/* 052833a2 */  MOV qword ptr [RSP + 0x148],0x0
/* 052833ae */  MOVSS XMM0,dword ptr [RSP + 0x150]
/* 052833b7 */  MOVSS dword ptr [RSP + 0x5e8],XMM0
/* 052833c0 */  LEA RCX,[0xef51388]
/* 052833c7 */  MOV qword ptr [RSP + 0x5f0],RCX
/* 052833cf */  MOV qword ptr [RSP + 0x5f8],R13
/* 052833d7 */  MOV qword ptr [RSP + 0x600],RAX
/* 052833df */  MOV RDI,qword ptr [RSP + 0x10]
/* 052833e4 */  TEST RDI,RDI
/* 052833e7 */  JZ 0x052833fb
/* 052833e9 */  MOV qword ptr [RSP + 0x18],RDI
/* 052833ee */  MOV RSI,qword ptr [RSP + 0x20]
/* 052833f3 */  SUB RSI,RDI
/* 052833f6 */  CALL 0x0412a280
/* 052833fb */  MOV RDI,qword ptr [RSP + 0x268]
/* 05283403 */  TEST RDI,RDI
/* 05283406 */  LEA RBP,[0xef512d0]
/* 0528340d */  JZ 0x05283427
/* 0528340f */  MOV qword ptr [RSP + 0x270],RDI
/* 05283417 */  MOV RSI,qword ptr [RSP + 0x278]
/* 0528341f */  SUB RSI,RDI
/* 05283422 */  CALL 0x0412a280
/* 05283427 */  MOV RDI,qword ptr [RSP + 0x250]
/* 0528342f */  TEST RDI,RDI
/* 05283432 */  JZ 0x0528344c
/* 05283434 */  MOV qword ptr [RSP + 0x258],RDI
/* 0528343c */  MOV RSI,qword ptr [RSP + 0x260]
/* 05283444 */  SUB RSI,RDI
/* 05283447 */  CALL 0x0412a280
/* 0528344c */  MOV RDI,qword ptr [RSP + 0x348]
/* 05283454 */  TEST RDI,RDI
/* 05283457 */  JZ 0x05283471
/* 05283459 */  MOV qword ptr [RSP + 0x350],RDI
/* 05283461 */  MOV RSI,qword ptr [RSP + 0x358]
/* 05283469 */  SUB RSI,RDI
/* 0528346c */  CALL 0x0412a280
/* 05283471 */  MOV RDI,qword ptr [RSP + 0x330]
/* 05283479 */  TEST RDI,RDI
/* 0528347c */  JZ 0x05283496
/* 0528347e */  MOV qword ptr [RSP + 0x338],RDI
/* 05283486 */  MOV RSI,qword ptr [RSP + 0x340]
/* 0528348e */  SUB RSI,RDI
/* 05283491 */  CALL 0x0412a280
/* 05283496 */  MOV RDI,qword ptr [RSP + 0x628]
/* 0528349e */  TEST RDI,RDI
/* 052834a1 */  JZ 0x052834bb
/* 052834a3 */  MOV qword ptr [RSP + 0x630],RDI
/* 052834ab */  MOV RSI,qword ptr [RSP + 0x638]
/* 052834b3 */  SUB RSI,RDI
/* 052834b6 */  CALL 0x0412a280
/* 052834bb */  MOV RDI,qword ptr [RSP + 0x610]
/* 052834c3 */  TEST RDI,RDI
/* 052834c6 */  JZ 0x052834e0
/* 052834c8 */  MOV qword ptr [RSP + 0x618],RDI
/* 052834d0 */  MOV RSI,qword ptr [RSP + 0x620]
/* 052834d8 */  SUB RSI,RDI
/* 052834db */  CALL 0x0412a280
/* 052834e0 */  MOV RDI,qword ptr [RSP + 0xa00]
/* 052834e8 */  TEST RDI,RDI
/* 052834eb */  JZ 0x05283505
/* 052834ed */  MOV qword ptr [RSP + 0xa08],RDI
/* 052834f5 */  MOV RSI,qword ptr [RSP + 0xa10]
/* 052834fd */  SUB RSI,RDI
/* 05283500 */  CALL 0x0412a280
/* 05283505 */  MOV RDI,qword ptr [RSP + 0x9e8]
/* 0528350d */  TEST RDI,RDI
/* 05283510 */  JZ 0x0528352a
/* 05283512 */  MOV qword ptr [RSP + 0x9f0],RDI
/* 0528351a */  MOV RSI,qword ptr [RSP + 0x9f8]
/* 05283522 */  SUB RSI,RDI
/* 05283525 */  CALL 0x0412a280
/* 0528352a */  LEA RDI,[RSP + 0x9e8]
/* 05283532 */  MOV RSI,R14
/* 05283535 */  CALL 0x0528e660
/* 0528353a */  LEA RDI,[0xf5463b0]
/* 05283541 */  MOV RAX,qword ptr [0x0f5463b0]
/* 05283548 */  MOV ESI,0x1a
/* 0528354d */  CALL qword ptr [RAX + 0x10]
/* 05283550 */  MOV R13,RAX
/* 05283553 */  TEST RAX,RAX
/* 05283556 */  JZ 0x05285be2
/* 0528355c */  MOV qword ptr [RSP + 0x620],R13
/* 05283564 */  MOV qword ptr [RSP + 0x610],0x1b
/* 05283570 */  MOV qword ptr [RSP + 0x618],0x17
/* 0528357c */  MOVUPS XMM0,xmmword ptr [0x0135c3e0]
/* 05283583 */  MOVUPS xmmword ptr [R13],XMM0
/* 05283588 */  MOV RAX,0x7373656e696e6965
/* 05283592 */  MOV qword ptr [R13 + 0xf],RAX
/* 05283596 */  MOV byte ptr [R13 + 0x17],0x0
/* 0528359b */  CMP byte ptr [R12 + -0x16b0],0x0
/* 052835a4 */  JZ 0x05285607
/* 052835aa */  MOV RAX,qword ptr [R15]
/* 052835ad */  MOV RDI,R15
/* 052835b0 */  CALL qword ptr [RAX + 0x10]
/* 052835b3 */  MOVZX EDX,byte ptr [RSP + 0x610]
/* 052835bb */  TEST DL,0x1
/* 052835be */  JZ 0x052835d1
/* 052835c0 */  MOV RSI,qword ptr [RSP + 0x620]
/* 052835c8 */  MOV EDX,dword ptr [RSP + 0x618]
/* 052835cf */  JMP 0x052835db
/* 052835d1 */  SHR EDX,0x1
/* 052835d3 */  LEA RSI,[RSP + 0x611]
/* 052835db */  MOV RAX,qword ptr [R15]
/* 052835de */  MOV RDI,R15
/* 052835e1 */  CALL qword ptr [RAX + 0x18]
/* 052835e4 */  MOV RAX,qword ptr [R15]
/* 052835e7 */  LEA RSI,[RSP + 0x250]
/* 052835ef */  MOV RDI,R15
/* 052835f2 */  CALL qword ptr [RAX + 0x20]
/* 052835f5 */  MOV RAX,qword ptr [RSP + 0x250]
/* 052835fd */  MOV RCX,qword ptr [RSP + 0x258]
/* 05283605 */  BSWAP RAX
/* 05283608 */  BSWAP RCX
/* 0528360b */  XOR RAX,qword ptr [R14 + 0x8]
/* 0528360f */  XOR RCX,qword ptr [R14 + 0x10]
/* 05283613 */  MOV qword ptr [RSP + 0xf8],RBP
/* 0528361b */  MOV qword ptr [RSP + 0x100],RAX
/* 05283623 */  MOV qword ptr [RSP + 0x108],RCX
/* 0528362b */  OR RCX,RAX
/* 0528362e */  JZ 0x05284f68
/* 05283634 */  MOV qword ptr [RSP + 0x110],0x0
/* 05283640 */  MOV byte ptr [RSP + 0x118],0x0
/* 05283648 */  TEST byte ptr [RSP + 0x610],0x1
/* 05283650 */  JZ 0x0528366b
/* 05283652 */  MOV RSI,qword ptr [RSP + 0x610]
/* 0528365a */  MOV RDI,qword ptr [RSP + 0x620]
/* 05283662 */  AND RSI,-0x2
/* 05283666 */  CALL 0x0412a280
/* 0528366b */  LEA RDI,[0xf5463b0]
/* 05283672 */  MOV RAX,qword ptr [0x0f5463b0]
/* 05283679 */  MOV ESI,0x4
/* 0528367e */  CALL qword ptr [RAX + 0x10]
/* 05283681 */  MOV R13,RAX
/* 05283684 */  TEST RAX,RAX
/* 05283687 */  JZ 0x05285bf3
/* 0528368d */  MOV qword ptr [RSP + 0x250],R13
/* 05283695 */  MOV RAX,R13
/* 05283698 */  ADD RAX,0x4
/* 0528369c */  MOV qword ptr [RSP + 0x260],RAX
/* 052836a4 */  MOV dword ptr [R13],0x3f800000
/* 052836ac */  MOV qword ptr [RSP + 0x258],RAX
/* 052836b4 */  LEA RDI,[RSP + 0x610]
/* 052836bc */  LEA RSI,[RSP + 0xf8]
/* 052836c4 */  LEA RCX,[RSP + 0x250]
/* 052836cc */  MOV EDX,0xfffffff8
/* 052836d1 */  MOV R8D,0x1
/* 052836d7 */  CALL 0x0d3411f0
/* 052836dc */  MOV RDI,qword ptr [RSP + 0x250]
/* 052836e4 */  TEST RDI,RDI
/* 052836e7 */  JZ 0x05283701
/* 052836e9 */  MOV qword ptr [RSP + 0x258],RDI
/* 052836f1 */  MOV RSI,qword ptr [RSP + 0x260]
/* 052836f9 */  SUB RSI,RDI
/* 052836fc */  CALL 0x0412a280
/* 05283701 */  MOV byte ptr [RSP + 0x250],0x28
/* 05283709 */  MOVUPS XMM0,xmmword ptr [0x0142c9b4]
/* 05283710 */  MOVUPS xmmword ptr [RSP + 0x251],XMM0
/* 05283718 */  MOV dword ptr [RSP + 0x261],0x615f6e69
/* 05283723 */  MOV byte ptr [RSP + 0x265],0x0
/* 0528372b */  CMP byte ptr [R12 + -0x16b0],0x0
/* 05283734 */  JZ 0x05285691
/* 0528373a */  MOV RAX,qword ptr [R15]
/* 0528373d */  MOV RDI,R15
/* 05283740 */  CALL qword ptr [RAX + 0x10]
/* 05283743 */  MOVZX EDX,byte ptr [RSP + 0x250]
/* 0528374b */  TEST DL,0x1
/* 0528374e */  JZ 0x05283761
/* 05283750 */  MOV RSI,qword ptr [RSP + 0x260]
/* 05283758 */  MOV EDX,dword ptr [RSP + 0x258]
/* 0528375f */  JMP 0x0528376b
/* 05283761 */  LEA RSI,[RSP + 0x251]
/* 05283769 */  SHR EDX,0x1
/* 0528376b */  MOV RAX,qword ptr [R15]
/* 0528376e */  MOV RDI,R15
/* 05283771 */  CALL qword ptr [RAX + 0x18]
/* 05283774 */  MOV RAX,qword ptr [R15]
/* 05283777 */  LEA RSI,[RSP + 0x10]
/* 0528377c */  MOV RDI,R15
/* 0528377f */  CALL qword ptr [RAX + 0x20]
/* 05283782 */  MOV RAX,qword ptr [RSP + 0x10]
/* 05283787 */  MOV RCX,qword ptr [RSP + 0x18]
/* 0528378c */  BSWAP RAX
/* 0528378f */  BSWAP RCX
/* 05283792 */  XOR RAX,qword ptr [R14 + 0x8]
/* 05283796 */  XOR RCX,qword ptr [R14 + 0x10]
/* 0528379a */  MOV qword ptr [RSP + 0xd0],RBP
/* 052837a2 */  MOV qword ptr [RSP + 0xd8],RAX
/* 052837aa */  MOV qword ptr [RSP + 0xe0],RCX
/* 052837b2 */  OR RCX,RAX
/* 052837b5 */  JZ 0x05284fb3
/* 052837bb */  MOV qword ptr [RSP + 0xe8],0x0
/* 052837c7 */  MOV byte ptr [RSP + 0xf0],0x0
/* 052837cf */  TEST byte ptr [RSP + 0x250],0x1
/* 052837d7 */  JZ 0x052837f2
/* 052837d9 */  MOV RSI,qword ptr [RSP + 0x250]
/* 052837e1 */  MOV RDI,qword ptr [RSP + 0x260]
/* 052837e9 */  AND RSI,-0x2
/* 052837ed */  CALL 0x0412a280
/* 052837f2 */  LEA RDI,[0xf5463b0]
/* 052837f9 */  MOV RAX,qword ptr [0x0f5463b0]
/* 05283800 */  MOV ESI,0x4
/* 05283805 */  CALL qword ptr [RAX + 0x10]
/* 05283808 */  MOV R13,RAX
/* 0528380b */  TEST RAX,RAX
/* 0528380e */  JZ 0x05285c04
/* 05283814 */  MOV qword ptr [RSP + 0x10],R13
/* 05283819 */  MOV RAX,R13
/* 0528381c */  ADD RAX,0x4
/* 05283820 */  MOV qword ptr [RSP + 0x20],RAX
/* 05283825 */  MOV dword ptr [R13],0x3f800000
/* 0528382d */  MOV qword ptr [RSP + 0x18],RAX
/* 05283832 */  LEA RDI,[RSP + 0x250]
/* 0528383a */  LEA RSI,[RSP + 0xd0]
/* 05283842 */  LEA RCX,[RSP + 0x10]
/* 05283847 */  MOV EDX,0xfffffff9
/* 0528384c */  MOV R8D,0x1
/* 05283852 */  CALL 0x0d3411f0
/* 05283857 */  MOV RDI,qword ptr [RSP + 0x10]
/* 0528385c */  TEST RDI,RDI
/* 0528385f */  JZ 0x05283873
/* 05283861 */  MOV qword ptr [RSP + 0x18],RDI
/* 05283866 */  MOV RSI,qword ptr [RSP + 0x20]
/* 0528386b */  SUB RSI,RDI
/* 0528386e */  CALL 0x0412a280
/* 05283873 */  MOV byte ptr [RSP + 0x10],0x28
/* 05283878 */  MOVUPS XMM0,xmmword ptr [0x0142c9c9]
/* 0528387f */  MOVUPS xmmword ptr [RSP + 0x11],XMM0
/* 05283884 */  MOV dword ptr [RSP + 0x21],0x625f6e69
/* 0528388c */  MOV byte ptr [RSP + 0x25],0x0
/* 05283891 */  CMP byte ptr [R12 + -0x16b0],0x0
/* 0528389a */  JZ 0x0528571b
/* 052838a0 */  MOV RAX,qword ptr [R15]
/* 052838a3 */  MOV RDI,R15
/* 052838a6 */  CALL qword ptr [RAX + 0x10]
/* 052838a9 */  MOVZX EDX,byte ptr [RSP + 0x10]
/* 052838ae */  TEST DL,0x1
/* 052838b1 */  JZ 0x052838be
/* 052838b3 */  MOV RSI,qword ptr [RSP + 0x20]
/* 052838b8 */  MOV EDX,dword ptr [RSP + 0x18]
/* 052838bc */  JMP 0x052838c5
/* 052838be */  LEA RSI,[RSP + 0x11]
/* 052838c3 */  SHR EDX,0x1
/* 052838c5 */  MOV RAX,qword ptr [R15]
/* 052838c8 */  MOV RDI,R15
/* 052838cb */  CALL qword ptr [RAX + 0x18]
/* 052838ce */  MOV RAX,qword ptr [R15]
/* 052838d1 */  LEA RSI,[RSP + 0x90]
/* 052838d9 */  MOV RDI,R15
/* 052838dc */  CALL qword ptr [RAX + 0x20]
/* 052838df */  MOV RAX,qword ptr [RSP + 0x90]
/* 052838e7 */  MOV RCX,qword ptr [RSP + 0x98]
/* 052838ef */  BSWAP RAX
/* 052838f2 */  BSWAP RCX
/* 052838f5 */  XOR RAX,qword ptr [R14 + 0x8]
/* 052838f9 */  XOR RCX,qword ptr [R14 + 0x10]
/* 052838fd */  MOV qword ptr [RSP + 0x4e8],RBP
/* 05283905 */  MOV qword ptr [RSP + 0x4f0],RAX
/* 0528390d */  MOV qword ptr [RSP + 0x4f8],RCX
/* 05283915 */  OR RCX,RAX
/* 05283918 */  JZ 0x05284ffe
/* 0528391e */  MOV qword ptr [RSP + 0x500],0x0
/* 0528392a */  MOV byte ptr [RSP + 0x508],0x0
/* 05283932 */  TEST byte ptr [RSP + 0x10],0x1
/* 05283937 */  JZ 0x0528394c
/* 05283939 */  MOV RSI,qword ptr [RSP + 0x10]
/* 0528393e */  MOV RDI,qword ptr [RSP + 0x20]
/* 05283943 */  AND RSI,-0x2
/* 05283947 */  CALL 0x0412a280
/* 0528394c */  LEA RDI,[0xf5463b0]
/* 05283953 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0528395a */  MOV ESI,0x4
/* 0528395f */  CALL qword ptr [RAX + 0x10]
/* 05283962 */  MOV R13,RAX
/* 05283965 */  TEST RAX,RAX
/* 05283968 */  JZ 0x05285c15
/* 0528396e */  MOV qword ptr [RSP + 0x90],R13
/* 05283976 */  MOV RAX,R13
/* 05283979 */  ADD RAX,0x4
/* 0528397d */  MOV qword ptr [RSP + 0xa0],RAX
/* 05283985 */  MOV dword ptr [R13],0x3f800000
/* 0528398d */  MOV qword ptr [RSP + 0x98],RAX
/* 05283995 */  LEA RDI,[RSP + 0x10]
/* 0528399a */  LEA RSI,[RSP + 0x4e8]
/* 052839a2 */  LEA RCX,[RSP + 0x90]
/* 052839aa */  MOV EDX,0xfffffff9
/* 052839af */  MOV R8D,0x1
/* 052839b5 */  CALL 0x0d3411f0
/* 052839ba */  MOV RDI,qword ptr [RSP + 0x90]
/* 052839c2 */  TEST RDI,RDI
/* 052839c5 */  JZ 0x052839df
/* 052839c7 */  MOV qword ptr [RSP + 0x98],RDI
/* 052839cf */  MOV RSI,qword ptr [RSP + 0xa0]
/* 052839d7 */  SUB RSI,RDI
/* 052839da */  CALL 0x0412a280
/* 052839df */  MOV byte ptr [RSP + 0x90],0x22
/* 052839e7 */  MOVUPS XMM0,xmmword ptr [0x0120864e]
/* 052839ee */  MOVUPS xmmword ptr [RSP + 0x91],XMM0
/* 052839f6 */  MOV word ptr [RSP + 0xa1],0x70
/* 05283a00 */  CMP byte ptr [R12 + -0x16b0],0x0
/* 05283a09 */  JZ 0x052857a5
/* 05283a0f */  MOV RAX,qword ptr [R15]
/* 05283a12 */  MOV RDI,R15
/* 05283a15 */  CALL qword ptr [RAX + 0x10]
/* 05283a18 */  MOVZX EDX,byte ptr [RSP + 0x90]
/* 05283a20 */  TEST DL,0x1
/* 05283a23 */  JZ 0x05283a36
/* 05283a25 */  MOV RSI,qword ptr [RSP + 0xa0]
/* 05283a2d */  MOV EDX,dword ptr [RSP + 0x98]
/* 05283a34 */  JMP 0x05283a40
/* 05283a36 */  LEA RSI,[RSP + 0x91]
/* 05283a3e */  SHR EDX,0x1
/* 05283a40 */  MOV RAX,qword ptr [R15]
/* 05283a43 */  MOV RDI,R15
/* 05283a46 */  CALL qword ptr [RAX + 0x18]
/* 05283a49 */  MOV RAX,qword ptr [R15]
/* 05283a4c */  LEA RSI,[RSP + 0x50]
/* 05283a51 */  MOV RDI,R15
/* 05283a54 */  CALL qword ptr [RAX + 0x20]
/* 05283a57 */  MOV RAX,qword ptr [RSP + 0x50]
/* 05283a5c */  MOV RCX,qword ptr [RSP + 0x58]
/* 05283a61 */  BSWAP RAX
/* 05283a64 */  BSWAP RCX
/* 05283a67 */  XOR RAX,qword ptr [R14 + 0x8]
/* 05283a6b */  XOR RCX,qword ptr [R14 + 0x10]
/* 05283a6f */  MOV qword ptr [RSP + 0x4c0],RBP
/* 05283a77 */  MOV qword ptr [RSP + 0x4c8],RAX
/* 05283a7f */  MOV qword ptr [RSP + 0x4d0],RCX
/* 05283a87 */  OR RCX,RAX
/* 05283a8a */  JZ 0x05285046
/* 05283a90 */  MOV qword ptr [RSP + 0x4d8],0x0
/* 05283a9c */  MOV byte ptr [RSP + 0x4e0],0x0
/* 05283aa4 */  TEST byte ptr [RSP + 0x90],0x1
/* 05283aac */  JZ 0x05283ac7
/* 05283aae */  MOV RSI,qword ptr [RSP + 0x90]
/* 05283ab6 */  MOV RDI,qword ptr [RSP + 0xa0]
/* 05283abe */  AND RSI,-0x2
/* 05283ac2 */  CALL 0x0412a280
/* 05283ac7 */  LEA RDI,[0xf5463b0]
/* 05283ace */  MOV RAX,qword ptr [0x0f5463b0]
/* 05283ad5 */  MOV ESI,0x4
/* 05283ada */  CALL qword ptr [RAX + 0x10]
/* 05283add */  MOV R13,RAX
/* 05283ae0 */  TEST RAX,RAX
/* 05283ae3 */  JZ 0x05285c26
/* 05283ae9 */  MOV qword ptr [RSP + 0x50],R13
/* 05283aee */  MOV RAX,R13
/* 05283af1 */  ADD RAX,0x4
/* 05283af5 */  MOV qword ptr [RSP + 0x60],RAX
/* 05283afa */  MOV dword ptr [R13],0x3f800000
/* 05283b02 */  MOV qword ptr [RSP + 0x58],RAX
/* 05283b07 */  LEA RDI,[RSP + 0x90]
/* 05283b0f */  LEA RSI,[RSP + 0x4c0]
/* 05283b17 */  LEA RCX,[RSP + 0x50]
/* 05283b1c */  MOV EDX,0xfffffffb
/* 05283b21 */  MOV R8D,0x1
/* 05283b27 */  CALL 0x0d3411f0
/* 05283b2c */  MOV RDI,qword ptr [RSP + 0x50]
/* 05283b31 */  TEST RDI,RDI
/* 05283b34 */  JZ 0x05283b48
/* 05283b36 */  MOV qword ptr [RSP + 0x58],RDI
/* 05283b3b */  MOV RSI,qword ptr [RSP + 0x60]
/* 05283b40 */  SUB RSI,RDI
/* 05283b43 */  CALL 0x0412a280
/* 05283b48 */  MOV byte ptr [RSP + 0x50],0x1a
/* 05283b4d */  MOV RAX,0x66617263656e696d
/* 05283b57 */  MOV qword ptr [RSP + 0x51],RAX
/* 05283b5c */  MOV RAX,0x65726f3a74666172
/* 05283b66 */  MOV qword ptr [RSP + 0x56],RAX
/* 05283b6b */  MOV byte ptr [RSP + 0x5e],0x0
/* 05283b70 */  CMP byte ptr [R12 + -0x16b0],0x0
/* 05283b79 */  JZ 0x0528582f
/* 05283b7f */  MOV RAX,qword ptr [R15]
/* 05283b82 */  MOV RDI,R15
/* 05283b85 */  CALL qword ptr [RAX + 0x10]
/* 05283b88 */  MOVZX EDX,byte ptr [RSP + 0x50]
/* 05283b8d */  TEST DL,0x1
/* 05283b90 */  JZ 0x05283b9d
/* 05283b92 */  MOV RSI,qword ptr [RSP + 0x60]
/* 05283b97 */  MOV EDX,dword ptr [RSP + 0x58]
/* 05283b9b */  JMP 0x05283ba4
/* 05283b9d */  LEA RSI,[RSP + 0x51]
/* 05283ba2 */  SHR EDX,0x1
/* 05283ba4 */  MOV RAX,qword ptr [R15]
/* 05283ba7 */  MOV RDI,R15
/* 05283baa */  CALL qword ptr [RAX + 0x18]
/* 05283bad */  MOV RAX,qword ptr [R15]
/* 05283bb0 */  LEA RSI,[RSP + 0x120]
/* 05283bb8 */  MOV RDI,R15
/* 05283bbb */  CALL qword ptr [RAX + 0x20]
/* 05283bbe */  MOV RBP,qword ptr [RSP + 0x120]
/* 05283bc6 */  MOV R13,qword ptr [RSP + 0x128]
/* 05283bce */  BSWAP RBP
/* 05283bd1 */  BSWAP R13
/* 05283bd4 */  XOR RBP,qword ptr [R14 + 0x8]
/* 05283bd8 */  XOR R13,qword ptr [R14 + 0x10]
/* 05283bdc */  MOV RAX,R13
/* 05283bdf */  OR RAX,RBP
/* 05283be2 */  MOV RAX,-0x61c8864680b583eb
/* 05283bec */  CMOVZ RBP,RAX
/* 05283bf0 */  MOV RAX,0x6a09e667f3bcc909
/* 05283bfa */  CMOVZ R13,RAX
/* 05283bfe */  TEST byte ptr [RSP + 0x50],0x1
/* 05283c03 */  JZ 0x05283c18
/* 05283c05 */  MOV RSI,qword ptr [RSP + 0x50]
/* 05283c0a */  MOV RDI,qword ptr [RSP + 0x60]
/* 05283c0f */  AND RSI,-0x2
/* 05283c13 */  CALL 0x0412a280
/* 05283c18 */  LEA RDI,[RSP + 0x50]
/* 05283c1d */  LEA RSI,[RSP + 0x610]
/* 05283c25 */  CALL 0x049cce40
/* 05283c2a */  LEA RDI,[RSP + 0x120]
/* 05283c32 */  LEA RSI,[RSP + 0x250]
/* 05283c3a */  CALL 0x049cce40
/* 05283c3f */  LEA RDI,[RSP + 0x160]
/* 05283c47 */  LEA RSI,[RSP + 0x10]
/* 05283c4c */  CALL 0x049cce40
/* 05283c51 */  LEA RDI,[RSP + 0x1a0]
/* 05283c59 */  LEA RSI,[RSP + 0x90]
/* 05283c61 */  CALL 0x049cce40
/* 05283c66 */  MOV RAX,R13
/* 05283c69 */  XOR RAX,RBP
/* 05283c6c */  MOV RCX,RBP
/* 05283c6f */  ROL RCX,0x31
/* 05283c73 */  MOV RDX,RAX
/* 05283c76 */  SHL RDX,0x15
/* 05283c7a */  XOR RDX,RCX
/* 05283c7d */  XOR RDX,RAX
/* 05283c80 */  ROL RAX,0x1c
/* 05283c84 */  ADD R13,RBP
/* 05283c87 */  ADD RAX,RDX
/* 05283c8a */  ROL R13,0x11
/* 05283c8e */  ROL RAX,0x11
/* 05283c92 */  ADD R13,RBP
/* 05283c95 */  ADD RAX,RDX
/* 05283c98 */  MOVAPS XMM0,xmmword ptr [RSP + 0x50]
/* 05283c9d */  MOVAPS xmmword ptr [RSP + 0x330],XMM0
/* 05283ca5 */  MOV RCX,qword ptr [RSP + 0x60]
/* 05283caa */  MOV qword ptr [RSP + 0x340],RCX
/* 05283cb2 */  XORPS XMM0,XMM0
/* 05283cb5 */  MOVAPS xmmword ptr [RSP + 0x50],XMM0
/* 05283cba */  MOV qword ptr [RSP + 0x60],0x0
/* 05283cc3 */  MOVUPS XMM1,xmmword ptr [RSP + 0x68]
/* 05283cc8 */  MOVUPS xmmword ptr [RSP + 0x348],XMM1
/* 05283cd0 */  MOV RCX,qword ptr [RSP + 0x78]
/* 05283cd5 */  MOV qword ptr [RSP + 0x358],RCX
/* 05283cdd */  MOVUPS xmmword ptr [RSP + 0x68],XMM0
/* 05283ce2 */  MOV qword ptr [RSP + 0x78],0x0
/* 05283ceb */  MOVSS XMM1,dword ptr [RSP + 0x80]
/* 05283cf4 */  MOVSS dword ptr [RSP + 0x360],XMM1
/* 05283cfd */  MOVAPS XMM1,xmmword ptr [RSP + 0x120]
/* 05283d05 */  MOVUPS xmmword ptr [RSP + 0x368],XMM1
/* 05283d0d */  MOV RCX,qword ptr [RSP + 0x130]
/* 05283d15 */  MOV qword ptr [RSP + 0x378],RCX
/* 05283d1d */  MOVAPS xmmword ptr [RSP + 0x120],XMM0
/* 05283d25 */  MOV qword ptr [RSP + 0x130],0x0
/* 05283d31 */  MOVUPS XMM1,xmmword ptr [RSP + 0x138]
/* 05283d39 */  MOVAPS xmmword ptr [RSP + 0x380],XMM1
/* 05283d41 */  MOV RCX,qword ptr [RSP + 0x148]
/* 05283d49 */  MOV qword ptr [RSP + 0x390],RCX
/* 05283d51 */  MOVUPS xmmword ptr [RSP + 0x138],XMM0
/* 05283d59 */  MOV qword ptr [RSP + 0x148],0x0
/* 05283d65 */  MOVSS XMM1,dword ptr [RSP + 0x150]
/* 05283d6e */  MOVSS dword ptr [RSP + 0x398],XMM1
/* 05283d77 */  MOVAPS XMM1,xmmword ptr [RSP + 0x160]
/* 05283d7f */  MOVAPS xmmword ptr [RSP + 0x3a0],XMM1
/* 05283d87 */  MOV RCX,qword ptr [RSP + 0x170]
/* 05283d8f */  MOV qword ptr [RSP + 0x3b0],RCX
/* 05283d97 */  MOVAPS xmmword ptr [RSP + 0x160],XMM0
/* 05283d9f */  MOV qword ptr [RSP + 0x170],0x0
/* 05283dab */  MOVUPS XMM1,xmmword ptr [RSP + 0x178]
/* 05283db3 */  MOVUPS xmmword ptr [RSP + 0x3b8],XMM1
/* 05283dbb */  MOV RCX,qword ptr [RSP + 0x188]
/* 05283dc3 */  MOV qword ptr [RSP + 0x3c8],RCX
/* 05283dcb */  MOVUPS xmmword ptr [RSP + 0x178],XMM0
/* 05283dd3 */  MOV qword ptr [RSP + 0x188],0x0
/* 05283ddf */  MOVSS XMM1,dword ptr [RSP + 0x190]
/* 05283de8 */  MOVSS dword ptr [RSP + 0x3d0],XMM1
/* 05283df1 */  MOVAPS XMM1,xmmword ptr [RSP + 0x1a0]
/* 05283df9 */  MOVUPS xmmword ptr [RSP + 0x3d8],XMM1
/* 05283e01 */  MOV RCX,qword ptr [RSP + 0x1b0]
/* 05283e09 */  MOV qword ptr [RSP + 0x3e8],RCX
/* 05283e11 */  MOVAPS xmmword ptr [RSP + 0x1a0],XMM0
/* 05283e19 */  MOV qword ptr [RSP + 0x1b0],0x0
/* 05283e25 */  MOVUPS XMM1,xmmword ptr [RSP + 0x1b8]
/* 05283e2d */  MOVAPS xmmword ptr [RSP + 0x3f0],XMM1
/* 05283e35 */  MOV RCX,qword ptr [RSP + 0x1c8]
/* 05283e3d */  MOV qword ptr [RSP + 0x400],RCX
/* 05283e45 */  MOVUPS xmmword ptr [RSP + 0x1b8],XMM0
/* 05283e4d */  MOV qword ptr [RSP + 0x1c8],0x0
/* 05283e59 */  MOVSS XMM0,dword ptr [RSP + 0x1d0]
/* 05283e62 */  MOVSS dword ptr [RSP + 0x408],XMM0
/* 05283e6b */  LEA RCX,[0xef51388]
/* 05283e72 */  MOV qword ptr [RSP + 0x410],RCX
/* 05283e7a */  MOV qword ptr [RSP + 0x418],R13
/* 05283e82 */  MOV qword ptr [RSP + 0x420],RAX
/* 05283e8a */  MOV RDI,qword ptr [RSP + 0x50]
/* 05283e8f */  TEST RDI,RDI
/* 05283e92 */  JZ 0x05283ea6
/* 05283e94 */  MOV qword ptr [RSP + 0x58],RDI
/* 05283e99 */  MOV RSI,qword ptr [RSP + 0x60]
/* 05283e9e */  SUB RSI,RDI
/* 05283ea1 */  CALL 0x0412a280
/* 05283ea6 */  MOV RDI,qword ptr [RSP + 0xa8]
/* 05283eae */  TEST RDI,RDI
/* 05283eb1 */  LEA RBP,[0xef512d0]
/* 05283eb8 */  JZ 0x05283ed2
/* 05283eba */  MOV qword ptr [RSP + 0xb0],RDI
/* 05283ec2 */  MOV RSI,qword ptr [RSP + 0xb8]
/* 05283eca */  SUB RSI,RDI
/* 05283ecd */  CALL 0x0412a280
/* 05283ed2 */  MOV RDI,qword ptr [RSP + 0x90]
/* 05283eda */  TEST RDI,RDI
/* 05283edd */  JZ 0x05283ef7
/* 05283edf */  MOV qword ptr [RSP + 0x98],RDI
/* 05283ee7 */  MOV RSI,qword ptr [RSP + 0xa0]
/* 05283eef */  SUB RSI,RDI
/* 05283ef2 */  CALL 0x0412a280
/* 05283ef7 */  MOV RDI,qword ptr [RSP + 0x28]
/* 05283efc */  TEST RDI,RDI
/* 05283eff */  JZ 0x05283f13
/* 05283f01 */  MOV qword ptr [RSP + 0x30],RDI
/* 05283f06 */  MOV RSI,qword ptr [RSP + 0x38]
/* 05283f0b */  SUB RSI,RDI
/* 05283f0e */  CALL 0x0412a280
/* 05283f13 */  MOV RDI,qword ptr [RSP + 0x10]
/* 05283f18 */  TEST RDI,RDI
/* 05283f1b */  JZ 0x05283f2f
/* 05283f1d */  MOV qword ptr [RSP + 0x18],RDI
/* 05283f22 */  MOV RSI,qword ptr [RSP + 0x20]
/* 05283f27 */  SUB RSI,RDI
/* 05283f2a */  CALL 0x0412a280
/* 05283f2f */  MOV RDI,qword ptr [RSP + 0x268]
/* 05283f37 */  TEST RDI,RDI
/* 05283f3a */  JZ 0x05283f54
/* 05283f3c */  MOV qword ptr [RSP + 0x270],RDI
/* 05283f44 */  MOV RSI,qword ptr [RSP + 0x278]
/* 05283f4c */  SUB RSI,RDI
/* 05283f4f */  CALL 0x0412a280
/* 05283f54 */  MOV RDI,qword ptr [RSP + 0x250]
/* 05283f5c */  TEST RDI,RDI
/* 05283f5f */  JZ 0x05283f79
/* 05283f61 */  MOV qword ptr [RSP + 0x258],RDI
/* 05283f69 */  MOV RSI,qword ptr [RSP + 0x260]
/* 05283f71 */  SUB RSI,RDI
/* 05283f74 */  CALL 0x0412a280
/* 05283f79 */  MOV RDI,qword ptr [RSP + 0x628]
/* 05283f81 */  TEST RDI,RDI
/* 05283f84 */  JZ 0x05283f9e
/* 05283f86 */  MOV qword ptr [RSP + 0x630],RDI
/* 05283f8e */  MOV RSI,qword ptr [RSP + 0x638]
/* 05283f96 */  SUB RSI,RDI
/* 05283f99 */  CALL 0x0412a280
/* 05283f9e */  MOV RDI,qword ptr [RSP + 0x610]
/* 05283fa6 */  TEST RDI,RDI
/* 05283fa9 */  JZ 0x05283fc3
/* 05283fab */  MOV qword ptr [RSP + 0x618],RDI
/* 05283fb3 */  MOV RSI,qword ptr [RSP + 0x620]
/* 05283fbb */  SUB RSI,RDI
/* 05283fbe */  CALL 0x0412a280
/* 05283fc3 */  MOV byte ptr [RSP + 0x610],0x20
/* 05283fcb */  MOVUPS XMM0,xmmword ptr [0x012bde31]
/* 05283fd2 */  MOVUPS xmmword ptr [RSP + 0x611],XMM0
/* 05283fda */  MOV byte ptr [RSP + 0x621],0x0
/* 05283fe2 */  CMP byte ptr [R12 + -0x16b0],0x0
/* 05283feb */  JZ 0x052858b9
/* 05283ff1 */  MOV RAX,qword ptr [R15]
/* 05283ff4 */  MOV RDI,R15
/* 05283ff7 */  CALL qword ptr [RAX + 0x10]
/* 05283ffa */  MOVZX EDX,byte ptr [RSP + 0x610]
/* 05284002 */  TEST DL,0x1
/* 05284005 */  JZ 0x05284018
/* 05284007 */  MOV RSI,qword ptr [RSP + 0x620]
/* 0528400f */  MOV EDX,dword ptr [RSP + 0x618]
/* 05284016 */  JMP 0x05284022
/* 05284018 */  LEA RSI,[RSP + 0x611]
/* 05284020 */  SHR EDX,0x1
/* 05284022 */  MOV RAX,qword ptr [R15]
/* 05284025 */  MOV RDI,R15
/* 05284028 */  CALL qword ptr [RAX + 0x18]
/* 0528402b */  MOV RAX,qword ptr [R15]
/* 0528402e */  LEA RSI,[RSP + 0x10]
/* 05284033 */  MOV RDI,R15
/* 05284036 */  CALL qword ptr [RAX + 0x20]
/* 05284039 */  MOV RAX,qword ptr [RSP + 0x10]
/* 0528403e */  MOV RCX,qword ptr [RSP + 0x18]
/* 05284043 */  BSWAP RAX
/* 05284046 */  BSWAP RCX
/* 05284049 */  XOR RAX,qword ptr [R14 + 0x8]
/* 0528404d */  XOR RCX,qword ptr [R14 + 0x10]
/* 05284051 */  MOV qword ptr [RSP + 0x120],RBP
/* 05284059 */  MOV qword ptr [RSP + 0x128],RAX
/* 05284061 */  MOV qword ptr [RSP + 0x130],RCX
/* 05284069 */  OR RCX,RAX
/* 0528406c */  JZ 0x05285091
/* 05284072 */  MOV qword ptr [RSP + 0x138],0x0
/* 0528407e */  MOV byte ptr [RSP + 0x140],0x0
/* 05284086 */  TEST byte ptr [RSP + 0x610],0x1
/* 0528408e */  JZ 0x052840a9
/* 05284090 */  MOV RSI,qword ptr [RSP + 0x610]
/* 05284098 */  MOV RDI,qword ptr [RSP + 0x620]
/* 052840a0 */  AND RSI,-0x2
/* 052840a4 */  CALL 0x0412a280
/* 052840a9 */  LEA RDI,[0xf5463b0]
/* 052840b0 */  MOV RAX,qword ptr [0x0f5463b0]
/* 052840b7 */  MOV ESI,0x4
/* 052840bc */  CALL qword ptr [RAX + 0x10]
/* 052840bf */  MOV R13,RAX
/* 052840c2 */  TEST RAX,RAX
/* 052840c5 */  JZ 0x05285c37
/* 052840cb */  MOV qword ptr [RSP + 0x10],R13
/* 052840d0 */  MOV RAX,R13
/* 052840d3 */  ADD RAX,0x4
/* 052840d7 */  MOV qword ptr [RSP + 0x20],RAX
/* 052840dc */  MOV dword ptr [R13],0x3f800000
/* 052840e4 */  MOV qword ptr [RSP + 0x18],RAX
/* 052840e9 */  LEA RDI,[RSP + 0x610]
/* 052840f1 */  LEA RSI,[RSP + 0x120]
/* 052840f9 */  LEA RCX,[RSP + 0x10]
/* 052840fe */  MOV EDX,0xfffffff8
/* 05284103 */  MOV R8D,0x1
/* 05284109 */  CALL 0x0d3411f0
/* 0528410e */  MOV RDI,qword ptr [RSP + 0x10]
/* 05284113 */  TEST RDI,RDI
/* 05284116 */  JZ 0x0528412a
/* 05284118 */  MOV qword ptr [RSP + 0x18],RDI
/* 0528411d */  MOV RSI,qword ptr [RSP + 0x20]
/* 05284122 */  SUB RSI,RDI
/* 05284125 */  CALL 0x0412a280
/* 0528412a */  LEA RDI,[0xf5463b0]
/* 05284131 */  MOV RAX,qword ptr [0x0f5463b0]
/* 05284138 */  MOV ESI,0x20
/* 0528413d */  CALL qword ptr [RAX + 0x10]
/* 05284140 */  MOV R13,RAX
/* 05284143 */  TEST RAX,RAX
/* 05284146 */  JZ 0x05285c48
/* 0528414c */  MOV qword ptr [RSP + 0x20],R13
/* 05284151 */  MOV qword ptr [RSP + 0x10],0x21
/* 0528415a */  MOV qword ptr [RSP + 0x18],0x1a
/* 05284163 */  MOVUPS XMM0,xmmword ptr [0x012bde4c]
/* 0528416a */  MOVUPS xmmword ptr [R13 + 0xa],XMM0
/* 0528416f */  MOVUPS XMM0,xmmword ptr [0x012bde42]
/* 05284176 */  MOVUPS xmmword ptr [R13],XMM0
/* 0528417b */  MOV byte ptr [R13 + 0x1a],0x0
/* 05284180 */  CMP byte ptr [R12 + -0x16b0],0x0
/* 05284189 */  JZ 0x05285943
/* 0528418f */  MOV RAX,qword ptr [R15]
/* 05284192 */  MOV RDI,R15
/* 05284195 */  CALL qword ptr [RAX + 0x10]
/* 05284198 */  MOVZX EDX,byte ptr [RSP + 0x10]
/* 0528419d */  TEST DL,0x1
/* 052841a0 */  JZ 0x052841ad
/* 052841a2 */  MOV RSI,qword ptr [RSP + 0x20]
/* 052841a7 */  MOV EDX,dword ptr [RSP + 0x18]
/* 052841ab */  JMP 0x052841b4
/* 052841ad */  SHR EDX,0x1
/* 052841af */  LEA RSI,[RSP + 0x11]
/* 052841b4 */  MOV RAX,qword ptr [R15]
/* 052841b7 */  MOV RDI,R15
/* 052841ba */  CALL qword ptr [RAX + 0x18]
/* 052841bd */  MOV RAX,qword ptr [R15]
/* 052841c0 */  LEA RSI,[RSP + 0x90]
/* 052841c8 */  MOV RDI,R15
/* 052841cb */  CALL qword ptr [RAX + 0x20]
/* 052841ce */  MOV RAX,qword ptr [RSP + 0x90]
/* 052841d6 */  MOV RCX,qword ptr [RSP + 0x98]
/* 052841de */  BSWAP RAX
/* 052841e1 */  BSWAP RCX
/* 052841e4 */  XOR RAX,qword ptr [R14 + 0x8]
/* 052841e8 */  XOR RCX,qword ptr [R14 + 0x10]
/* 052841ec */  MOV qword ptr [RSP + 0x160],RBP
/* 052841f4 */  MOV qword ptr [RSP + 0x168],RAX
/* 052841fc */  MOV qword ptr [RSP + 0x170],RCX
/* 05284204 */  OR RCX,RAX
/* 05284207 */  JZ 0x052850dc
/* 0528420d */  MOV qword ptr [RSP + 0x178],0x0
/* 05284219 */  MOV byte ptr [RSP + 0x180],0x0
/* 05284221 */  TEST byte ptr [RSP + 0x10],0x1
/* 05284226 */  JZ 0x0528423b
/* 05284228 */  MOV RSI,qword ptr [RSP + 0x10]
/* 0528422d */  MOV RDI,qword ptr [RSP + 0x20]
/* 05284232 */  AND RSI,-0x2
/* 05284236 */  CALL 0x0412a280
/* 0528423b */  LEA RDI,[0xf5463b0]
/* 05284242 */  MOV RAX,qword ptr [0x0f5463b0]
/* 05284249 */  MOV ESI,0x4
/* 0528424e */  CALL qword ptr [RAX + 0x10]
/* 05284251 */  MOV R13,RAX
/* 05284254 */  TEST RAX,RAX
/* 05284257 */  JZ 0x05285c59
/* 0528425d */  MOV qword ptr [RSP + 0x90],R13
/* 05284265 */  MOV RAX,R13
/* 05284268 */  ADD RAX,0x4
/* 0528426c */  MOV qword ptr [RSP + 0xa0],RAX
/* 05284274 */  MOV dword ptr [R13],0x3f800000
/* 0528427c */  MOV qword ptr [RSP + 0x98],RAX
/* 05284284 */  LEA RDI,[RSP + 0x10]
/* 05284289 */  LEA RSI,[RSP + 0x160]
/* 05284291 */  LEA RCX,[RSP + 0x90]
/* 05284299 */  MOV EDX,0xfffffff8
/* 0528429e */  MOV R8D,0x1
/* 052842a4 */  CALL 0x0d3411f0
/* 052842a9 */  MOV RDI,qword ptr [RSP + 0x90]
/* 052842b1 */  TEST RDI,RDI
/* 052842b4 */  JZ 0x052842ce
/* 052842b6 */  MOV qword ptr [RSP + 0x98],RDI
/* 052842be */  MOV RSI,qword ptr [RSP + 0xa0]
/* 052842c6 */  SUB RSI,RDI
/* 052842c9 */  CALL 0x0412a280
/* 052842ce */  LEA RDI,[0xf5463b0]
/* 052842d5 */  MOV RAX,qword ptr [0x0f5463b0]
/* 052842dc */  MOV ESI,0x20
/* 052842e1 */  CALL qword ptr [RAX + 0x10]
/* 052842e4 */  MOV R13,RAX
/* 052842e7 */  TEST RAX,RAX
/* 052842ea */  JZ 0x05285c6a
/* 052842f0 */  MOV qword ptr [RSP + 0xa0],R13
/* 052842f8 */  MOV qword ptr [RSP + 0x90],0x21
/* 05284304 */  MOV qword ptr [RSP + 0x98],0x18
/* 05284310 */  MOVUPS XMM0,xmmword ptr [0x01412d61]
/* 05284317 */  MOVUPS xmmword ptr [R13],XMM0
/* 0528431c */  MOV RAX,0x615f65676469725f
/* 05284326 */  MOV qword ptr [R13 + 0x10],RAX
/* 0528432a */  MOV byte ptr [R13 + 0x18],0x0
/* 0528432f */  CMP byte ptr [R12 + -0x16b0],0x0
/* 05284338 */  JZ 0x052859cd
/* 0528433e */  MOV RAX,qword ptr [R15]
/* 05284341 */  MOV RDI,R15
/* 05284344 */  CALL qword ptr [RAX + 0x10]
/* 05284347 */  MOVZX EDX,byte ptr [RSP + 0x90]
/* 0528434f */  TEST DL,0x1
/* 05284352 */  JZ 0x05284365
/* 05284354 */  MOV RSI,qword ptr [RSP + 0xa0]
/* 0528435c */  MOV EDX,dword ptr [RSP + 0x98]
/* 05284363 */  JMP 0x0528436f
/* 05284365 */  SHR EDX,0x1
/* 05284367 */  LEA RSI,[RSP + 0x91]
/* 0528436f */  MOV RAX,qword ptr [R15]
/* 05284372 */  MOV RDI,R15
/* 05284375 */  CALL qword ptr [RAX + 0x18]
/* 05284378 */  MOV RAX,qword ptr [R15]
/* 0528437b */  LEA RSI,[RSP + 0x50]
/* 05284380 */  MOV RDI,R15
/* 05284383 */  CALL qword ptr [RAX + 0x20]
/* 05284386 */  MOV RAX,qword ptr [RSP + 0x50]
/* 0528438b */  MOV RCX,qword ptr [RSP + 0x58]
/* 05284390 */  BSWAP RAX
/* 05284393 */  BSWAP RCX
/* 05284396 */  XOR RAX,qword ptr [R14 + 0x8]
/* 0528439a */  XOR RCX,qword ptr [R14 + 0x10]
/* 0528439e */  MOV qword ptr [RSP + 0x1a0],RBP
/* 052843a6 */  MOV qword ptr [RSP + 0x1a8],RAX
/* 052843ae */  MOV qword ptr [RSP + 0x1b0],RCX
/* 052843b6 */  OR RCX,RAX
/* 052843b9 */  JZ 0x05285124
/* 052843bf */  MOV qword ptr [RSP + 0x1b8],0x0
/* 052843cb */  MOV byte ptr [RSP + 0x1c0],0x0
/* 052843d3 */  TEST byte ptr [RSP + 0x90],0x1
/* 052843db */  JZ 0x052843f6
/* 052843dd */  MOV RSI,qword ptr [RSP + 0x90]
/* 052843e5 */  MOV RDI,qword ptr [RSP + 0xa0]
/* 052843ed */  AND RSI,-0x2
/* 052843f1 */  CALL 0x0412a280
/* 052843f6 */  LEA RDI,[0xf5463b0]
/* 052843fd */  MOV RAX,qword ptr [0x0f5463b0]
/* 05284404 */  MOV ESI,0x4
/* 05284409 */  CALL qword ptr [RAX + 0x10]
/* 0528440c */  MOV R13,RAX
/* 0528440f */  TEST RAX,RAX
/* 05284412 */  JZ 0x05285c7b
/* 05284418 */  MOV qword ptr [RSP + 0x50],R13
/* 0528441d */  MOV RAX,R13
/* 05284420 */  ADD RAX,0x4
/* 05284424 */  MOV qword ptr [RSP + 0x60],RAX
/* 05284429 */  MOV dword ptr [R13],0x3f800000
/* 05284431 */  MOV qword ptr [RSP + 0x58],RAX
/* 05284436 */  LEA RDI,[RSP + 0x90]
/* 0528443e */  LEA RSI,[RSP + 0x1a0]
/* 05284446 */  LEA RCX,[RSP + 0x50]
/* 0528444b */  MOV EDX,0xfffffff9
/* 05284450 */  MOV R8D,0x1
/* 05284456 */  CALL 0x0d3411f0
/* 0528445b */  MOV RDI,qword ptr [RSP + 0x50]
/* 05284460 */  TEST RDI,RDI
/* 05284463 */  JZ 0x05284477
/* 05284465 */  MOV qword ptr [RSP + 0x58],RDI
/* 0528446a */  MOV RSI,qword ptr [RSP + 0x60]
/* 0528446f */  SUB RSI,RDI
/* 05284472 */  CALL 0x0412a280
/* 05284477 */  LEA RDI,[0xf5463b0]
/* 0528447e */  MOV RAX,qword ptr [0x0f5463b0]
/* 05284485 */  MOV ESI,0x20
/* 0528448a */  CALL qword ptr [RAX + 0x10]
/* 0528448d */  MOV R13,RAX
/* 05284490 */  TEST RAX,RAX
/* 05284493 */  JZ 0x05285c8c
/* 05284499 */  MOV qword ptr [RSP + 0x60],R13
/* 0528449e */  MOV qword ptr [RSP + 0x50],0x21
/* 052844a7 */  MOV qword ptr [RSP + 0x58],0x18
/* 052844b0 */  MOVUPS XMM0,xmmword ptr [0x014ae7d7]
/* 052844b7 */  MOVUPS xmmword ptr [R13],XMM0
/* 052844bc */  MOV RAX,0x625f65676469725f
/* 052844c6 */  MOV qword ptr [R13 + 0x10],RAX
/* 052844ca */  MOV byte ptr [R13 + 0x18],0x0
/* 052844cf */  CMP byte ptr [R12 + -0x16b0],0x0
/* 052844d8 */  JZ 0x05285a57
/* 052844de */  MOV RAX,qword ptr [R15]
/* 052844e1 */  MOV RDI,R15
/* 052844e4 */  CALL qword ptr [RAX + 0x10]
/* 052844e7 */  MOVZX EDX,byte ptr [RSP + 0x50]
/* 052844ec */  TEST DL,0x1
/* 052844ef */  JZ 0x052844fc
/* 052844f1 */  MOV RSI,qword ptr [RSP + 0x60]
/* 052844f6 */  MOV EDX,dword ptr [RSP + 0x58]
/* 052844fa */  JMP 0x05284503
/* 052844fc */  SHR EDX,0x1
/* 052844fe */  LEA RSI,[RSP + 0x51]
/* 05284503 */  MOV RAX,qword ptr [R15]
/* 05284506 */  MOV RDI,R15
/* 05284509 */  CALL qword ptr [RAX + 0x18]
/* 0528450c */  MOV RAX,qword ptr [R15]
/* 0528450f */  LEA RSI,[RSP + 0xd0]
/* 05284517 */  MOV RDI,R15
/* 0528451a */  CALL qword ptr [RAX + 0x20]
/* 0528451d */  MOV RAX,qword ptr [RSP + 0xd0]
/* 05284525 */  MOV RCX,qword ptr [RSP + 0xd8]
/* 0528452d */  BSWAP RAX
/* 05284530 */  BSWAP RCX
/* 05284533 */  XOR RAX,qword ptr [R14 + 0x8]
/* 05284537 */  XOR RCX,qword ptr [R14 + 0x10]
/* 0528453b */  MOV qword ptr [RSP + 0xf8],RBP
/* 05284543 */  MOV qword ptr [RSP + 0x100],RAX
/* 0528454b */  MOV qword ptr [RSP + 0x108],RCX
/* 05284553 */  OR RCX,RAX
/* 05284556 */  JZ 0x0528516f
/* 0528455c */  MOV qword ptr [RSP + 0x110],0x0
/* 05284568 */  MOV byte ptr [RSP + 0x118],0x0
/* 05284570 */  TEST byte ptr [RSP + 0x50],0x1
/* 05284575 */  JZ 0x0528458a
/* 05284577 */  MOV RSI,qword ptr [RSP + 0x50]
/* 0528457c */  MOV RDI,qword ptr [RSP + 0x60]
/* 05284581 */  AND RSI,-0x2
/* 05284585 */  CALL 0x0412a280
/* 0528458a */  LEA RDI,[0xf5463b0]
/* 05284591 */  MOV RAX,qword ptr [0x0f5463b0]
/* 05284598 */  MOV ESI,0x4
/* 0528459d */  CALL qword ptr [RAX + 0x10]
/* 052845a0 */  MOV R13,RAX
/* 052845a3 */  TEST RAX,RAX
/* 052845a6 */  JZ 0x05285c9d
/* 052845ac */  MOV qword ptr [RSP + 0xd0],R13
/* 052845b4 */  MOV RAX,R13
/* 052845b7 */  ADD RAX,0x4
/* 052845bb */  MOV qword ptr [RSP + 0xe0],RAX
/* 052845c3 */  MOV dword ptr [R13],0x3f800000
/* 052845cb */  MOV qword ptr [RSP + 0xd8],RAX
/* 052845d3 */  LEA RDI,[RSP + 0x50]
/* 052845d8 */  LEA RSI,[RSP + 0xf8]
/* 052845e0 */  LEA RCX,[RSP + 0xd0]
/* 052845e8 */  MOV EDX,0xfffffff9
/* 052845ed */  MOV R8D,0x1
/* 052845f3 */  CALL 0x0d3411f0
/* 052845f8 */  MOV RDI,qword ptr [RSP + 0xd0]
/* 05284600 */  TEST RDI,RDI
/* 05284603 */  JZ 0x0528461d
/* 05284605 */  MOV qword ptr [RSP + 0xd8],RDI
/* 0528460d */  MOV RSI,qword ptr [RSP + 0xe0]
/* 05284615 */  SUB RSI,RDI
/* 05284618 */  CALL 0x0412a280
/* 0528461d */  LEA RDI,[RSP + 0x250]
/* 05284625 */  LEA RSI,[RSP + 0x610]
/* 0528462d */  CALL 0x049cce40
/* 05284632 */  LEA RDI,[RSP + 0x288]
/* 0528463a */  LEA RSI,[RSP + 0x10]
/* 0528463f */  CALL 0x049cce40
/* 05284644 */  LEA R13,[RSP + 0x2c0]
/* 0528464c */  LEA RSI,[RSP + 0x90]
/* 05284654 */  MOV RDI,R13
/* 05284657 */  CALL 0x049cce40
/* 0528465c */  LEA RDI,[RSP + 0x2f8]
/* 05284664 */  LEA RSI,[RSP + 0x50]
/* 05284669 */  CALL 0x049cce40
/* 0528466e */  MOV RDI,qword ptr [RSP + 0x68]
/* 05284673 */  TEST RDI,RDI
/* 05284676 */  JZ 0x0528468a
/* 05284678 */  MOV qword ptr [RSP + 0x70],RDI
/* 0528467d */  MOV RSI,qword ptr [RSP + 0x78]
/* 05284682 */  SUB RSI,RDI
/* 05284685 */  CALL 0x0412a280
/* 0528468a */  MOV RDI,qword ptr [RSP + 0x50]
/* 0528468f */  TEST RDI,RDI
/* 05284692 */  JZ 0x052846a6
/* 05284694 */  MOV qword ptr [RSP + 0x58],RDI
/* 05284699 */  MOV RSI,qword ptr [RSP + 0x60]
/* 0528469e */  SUB RSI,RDI
/* 052846a1 */  CALL 0x0412a280
/* 052846a6 */  MOV RDI,qword ptr [RSP + 0xa8]
/* 052846ae */  TEST RDI,RDI
/* 052846b1 */  JZ 0x052846cb
/* 052846b3 */  MOV qword ptr [RSP + 0xb0],RDI
/* 052846bb */  MOV RSI,qword ptr [RSP + 0xb8]
/* 052846c3 */  SUB RSI,RDI
/* 052846c6 */  CALL 0x0412a280
/* 052846cb */  MOV RDI,qword ptr [RSP + 0x90]
/* 052846d3 */  TEST RDI,RDI
/* 052846d6 */  JZ 0x052846f0
/* 052846d8 */  MOV qword ptr [RSP + 0x98],RDI
/* 052846e0 */  MOV RSI,qword ptr [RSP + 0xa0]
/* 052846e8 */  SUB RSI,RDI
/* 052846eb */  CALL 0x0412a280
/* 052846f0 */  MOV RDI,qword ptr [RSP + 0x28]
/* 052846f5 */  TEST RDI,RDI
/* 052846f8 */  JZ 0x0528470c
/* 052846fa */  MOV qword ptr [RSP + 0x30],RDI
/* 052846ff */  MOV RSI,qword ptr [RSP + 0x38]
/* 05284704 */  SUB RSI,RDI
/* 05284707 */  CALL 0x0412a280
/* 0528470c */  MOV RDI,qword ptr [RSP + 0x10]
/* 05284711 */  TEST RDI,RDI
/* 05284714 */  JZ 0x05284728
/* 05284716 */  MOV qword ptr [RSP + 0x18],RDI
/* 0528471b */  MOV RSI,qword ptr [RSP + 0x20]
/* 05284720 */  SUB RSI,RDI
/* 05284723 */  CALL 0x0412a280
/* 05284728 */  MOV RDI,qword ptr [RSP + 0x628]
/* 05284730 */  TEST RDI,RDI
/* 05284733 */  JZ 0x0528474d
/* 05284735 */  MOV qword ptr [RSP + 0x630],RDI
/* 0528473d */  MOV RSI,qword ptr [RSP + 0x638]
/* 05284745 */  SUB RSI,RDI
/* 05284748 */  CALL 0x0412a280
/* 0528474d */  MOV RDI,qword ptr [RSP + 0x610]
/* 05284755 */  TEST RDI,RDI
/* 05284758 */  JZ 0x05284772
/* 0528475a */  MOV qword ptr [RSP + 0x618],RDI
/* 05284762 */  MOV RSI,qword ptr [RSP + 0x620]
/* 0528476a */  SUB RSI,RDI
/* 0528476d */  CALL 0x0412a280
/* 05284772 */  LEA RDI,[RSP + 0x610]
/* 0528477a */  MOV RSI,R14
/* 0528477d */  CALL 0x05256180
/* 05284782 */  LEA RDI,[0xf5463b0]
/* 05284789 */  MOV RAX,qword ptr [0x0f5463b0]
/* 05284790 */  MOV ESI,0x20
/* 05284795 */  CALL qword ptr [RAX + 0x10]
/* 05284798 */  MOV RBP,RAX
/* 0528479b */  TEST RAX,RAX
/* 0528479e */  JZ 0x05285cae
/* 052847a4 */  MOV qword ptr [RSP + 0x20],RBP
/* 052847a9 */  MOV qword ptr [RSP + 0x10],0x21
/* 052847b2 */  MOV qword ptr [RSP + 0x18],0x1b
/* 052847bb */  MOVUPS XMM0,xmmword ptr [0x011ed0b4]
/* 052847c2 */  MOVUPS xmmword ptr [RBP + 0xb],XMM0
/* 052847c6 */  MOVUPS XMM0,xmmword ptr [0x011ed0a9]
/* 052847cd */  MOVUPS xmmword ptr [RBP],XMM0
/* 052847d1 */  MOV byte ptr [RBP + 0x1b],0x0
/* 052847d5 */  CMP byte ptr [R12 + -0x16b0],0x0
/* 052847de */  JZ 0x05285ae1
/* 052847e4 */  MOV RAX,qword ptr [R15]
/* 052847e7 */  MOV RDI,R15
/* 052847ea */  CALL qword ptr [RAX + 0x10]
/* 052847ed */  MOVZX EDX,byte ptr [RSP + 0x10]
/* 052847f2 */  TEST DL,0x1
/* 052847f5 */  JZ 0x05284802
/* 052847f7 */  MOV RSI,qword ptr [RSP + 0x20]
/* 052847fc */  MOV EDX,dword ptr [RSP + 0x18]
/* 05284800 */  JMP 0x05284809
/* 05284802 */  SHR EDX,0x1
/* 05284804 */  LEA RSI,[RSP + 0x11]
/* 05284809 */  MOV RAX,qword ptr [R15]
/* 0528480c */  MOV RDI,R15
/* 0528480f */  CALL qword ptr [RAX + 0x18]
/* 05284812 */  MOV RAX,qword ptr [R15]
/* 05284815 */  LEA RSI,[RSP + 0x90]
/* 0528481d */  MOV RDI,R15
/* 05284820 */  CALL qword ptr [RAX + 0x20]
/* 05284823 */  MOV R15,qword ptr [RSP + 0x90]
/* 0528482b */  MOV RBP,qword ptr [RSP + 0x98]
/* 05284833 */  BSWAP R15
/* 05284836 */  BSWAP RBP
/* 05284839 */  XOR R15,qword ptr [R14 + 0x8]
/* 0528483d */  XOR RBP,qword ptr [R14 + 0x10]
/* 05284841 */  MOV RAX,RBP
/* 05284844 */  OR RAX,R15
/* 05284847 */  MOV RAX,-0x61c8864680b583eb
/* 05284851 */  CMOVZ R15,RAX
/* 05284855 */  MOV RAX,0x6a09e667f3bcc909
/* 0528485f */  CMOVZ RBP,RAX
/* 05284863 */  TEST byte ptr [RSP + 0x10],0x1
/* 05284868 */  JZ 0x0528487d
/* 0528486a */  MOV RSI,qword ptr [RSP + 0x10]
/* 0528486f */  MOV RDI,qword ptr [RSP + 0x20]
/* 05284874 */  AND RSI,-0x2
/* 05284878 */  CALL 0x0412a280
/* 0528487d */  LEA RDI,[0xf6ff9e0]
/* 05284884 */  LEA RSI,[0xf719bd0]
/* 0528488b */  MOV EDX,0x1
/* 05284890 */  CALL 0x0cc41df0
/* 05284895 */  MOV qword ptr [RSP + 0x440],RAX
/* 0528489d */  LEA RSI,[RSP + 0x970]
/* 052848a5 */  MOV RDI,RBX
/* 052848a8 */  CALL 0x05292a50
/* 052848ad */  LEA R12,[RBX + 0x78]
/* 052848b1 */  LEA RSI,[RSP + 0x9e8]
/* 052848b9 */  MOV RDI,R12
/* 052848bc */  CALL 0x05292d30
/* 052848c1 */  LEA R14,[RBX + 0x3f8]
/* 052848c8 */  LEA RSI,[RSP + 0x510]
/* 052848d0 */  MOV RDI,R14
/* 052848d3 */  MOV qword ptr [RSP + 0x430],R12
/* 052848db */  CALL 0x049cce40
/* 052848e0 */  MOV qword ptr [RSP + 0x438],R15
/* 052848e8 */  MOV qword ptr [RSP + 0x220],R14
/* 052848f0 */  LEA RSI,[RSP + 0x548]
/* 052848f8 */  LEA R14,[RBX + 0x430]
/* 052848ff */  MOV RDI,R14
/* 05284902 */  CALL 0x049cce40
/* 05284907 */  LEA RSI,[RSP + 0x580]
/* 0528490f */  LEA R15,[RBX + 0x468]
/* 05284916 */  MOV RDI,R15
/* 05284919 */  CALL 0x049cce40
/* 0528491e */  LEA RSI,[RSP + 0x5b8]
/* 05284926 */  LEA RDI,[RBX + 0x4a0]
/* 0528492d */  CALL 0x049cce40
/* 05284932 */  LEA RAX,[RSP + 0x5f8]
/* 0528493a */  LEA RCX,[0xef51388]
/* 05284941 */  MOV qword ptr [RBX + 0x4d8],RCX
/* 05284948 */  MOVUPS XMM0,xmmword ptr [RAX]
/* 0528494b */  MOVUPS xmmword ptr [RBX + 0x4e0],XMM0
/* 05284952 */  LEA R14,[RBX + 0x4f0]
/* 05284959 */  LEA RSI,[RSP + 0x250]
/* 05284961 */  MOV RDI,R14
/* 05284964 */  CALL 0x049cce40
/* 05284969 */  MOV qword ptr [RSP + 0x218],R14
/* 05284971 */  LEA R15,[RBX + 0x528]
/* 05284978 */  MOV RDI,R15
/* 0528497b */  LEA RSI,[RSP + 0x288]
/* 05284983 */  CALL 0x049cce40
/* 05284988 */  LEA R14,[RBX + 0x560]
/* 0528498f */  MOV RDI,R14
/* 05284992 */  MOV RSI,R13
/* 05284995 */  CALL 0x049cce40
/* 0528499a */  LEA RDI,[RBX + 0x598]
/* 052849a1 */  LEA RSI,[RSP + 0x2f8]
/* 052849a9 */  CALL 0x049cce40
/* 052849ae */  LEA R14,[RBX + 0x5d0]
/* 052849b5 */  LEA RSI,[RSP + 0x330]
/* 052849bd */  MOV RDI,R14
/* 052849c0 */  CALL 0x049cce40
/* 052849c5 */  MOV qword ptr [RSP + 0x210],R14
/* 052849cd */  LEA RSI,[RSP + 0x368]
/* 052849d5 */  LEA R15,[RBX + 0x608]
/* 052849dc */  MOV RDI,R15
/* 052849df */  CALL 0x049cce40
/* 052849e4 */  LEA RSI,[RSP + 0x3a0]
/* 052849ec */  LEA R14,[RBX + 0x640]
/* 052849f3 */  MOV RDI,R14
/* 052849f6 */  CALL 0x049cce40
/* 052849fb */  LEA RSI,[RSP + 0x3d8]
/* 05284a03 */  LEA RDI,[RBX + 0x678]
/* 05284a0a */  CALL 0x049cce40
/* 05284a0f */  LEA RAX,[RSP + 0x418]
/* 05284a17 */  MOV R13,0x1fd04794a10e6a
/* 05284a21 */  LEA RCX,[0xef51388]
/* 05284a28 */  MOV qword ptr [RBX + 0x6b0],RCX
/* 05284a2f */  MOVUPS XMM0,xmmword ptr [RAX]
/* 05284a32 */  MOVUPS xmmword ptr [RBX + 0x6b8],XMM0
/* 05284a39 */  MOV EAX,dword ptr [RSP + 0x1d8]
/* 05284a40 */  MOV dword ptr [RBX + 0x6c8],EAX
/* 05284a46 */  LEA RAX,[RBX + 0x6d0]
/* 05284a4d */  MOV qword ptr [RSP + 0x208],RAX
/* 05284a55 */  XORPS XMM1,XMM1
/* 05284a58 */  MOVUPS xmmword ptr [RBX + 0x6d0],XMM1
/* 05284a5f */  MOV qword ptr [RBX + 0x6e0],0x0
/* 05284a6a */  MOV R15,qword ptr [RSP + 0x1e0]
/* 05284a72 */  MOV R12,qword ptr [RSP + 0x1e8]
/* 05284a7a */  MOV RCX,-0x6ddb372d3c25c755
/* 05284a84 */  SUB R12,R15
/* 05284a87 */  JZ 0x05284b07
/* 05284a89 */  MOV qword ptr [RSP + 0x8],RBX
/* 05284a8e */  MOV RAX,R12
/* 05284a91 */  SAR RAX,0x2
/* 05284a95 */  IMUL RAX,RCX
/* 05284a99 */  CMP RAX,R13
/* 05284a9c */  JA 0x05285cdd
/* 05284aa2 */  LEA RDI,[0xf5463b0]
/* 05284aa9 */  MOV RAX,qword ptr [0x0f5463b0]
/* 05284ab0 */  MOV RSI,R12
/* 05284ab3 */  CALL qword ptr [RAX + 0x10]
/* 05284ab6 */  MOV RBX,RAX
/* 05284ab9 */  TEST RAX,RAX
/* 05284abc */  JZ 0x05285cbf
/* 05284ac2 */  MOV RAX,qword ptr [RSP + 0x8]
/* 05284ac7 */  MOV qword ptr [RAX + 0x6d0],RBX
/* 05284ace */  MOV qword ptr [RAX + 0x6d8],RBX
/* 05284ad5 */  MOV R14,RBX
/* 05284ad8 */  ADD R14,R12
/* 05284adb */  MOV qword ptr [RAX + 0x6e0],R14
/* 05284ae2 */  MOV RDI,RBX
/* 05284ae5 */  MOV RBX,RAX
/* 05284ae8 */  MOV RSI,R15
/* 05284aeb */  MOV RDX,R12
/* 05284aee */  CALL 0x0eee2f00
/* 05284af3 */  MOV qword ptr [RBX + 0x6d8],R14
/* 05284afa */  MOV RCX,-0x6ddb372d3c25c755
/* 05284b04 */  XORPS XMM1,XMM1
/* 05284b07 */  MOVSS XMM0,dword ptr [RSP + 0x1f8]
/* 05284b10 */  MOVSS dword ptr [RBX + 0x6e8],XMM0
/* 05284b18 */  MOV EAX,dword ptr [RSP + 0x228]
/* 05284b1f */  MOV dword ptr [RBX + 0x6f0],EAX
/* 05284b25 */  LEA RAX,[RBX + 0x6f8]
/* 05284b2c */  MOV qword ptr [RSP + 0x200],RAX
/* 05284b34 */  MOVUPS xmmword ptr [RBX + 0x6f8],XMM1
/* 05284b3b */  MOV qword ptr [RBX + 0x708],0x0
/* 05284b46 */  MOV R15,qword ptr [RSP + 0x230]
/* 05284b4e */  MOV R12,qword ptr [RSP + 0x238]
/* 05284b56 */  SUB R12,R15
/* 05284b59 */  JZ 0x05284bc5
/* 05284b5b */  MOV RAX,R12
/* 05284b5e */  SAR RAX,0x2
/* 05284b62 */  IMUL RAX,RCX
/* 05284b66 */  CMP RAX,R13
/* 05284b69 */  JA 0x05285ce2
/* 05284b6f */  LEA RDI,[0xf5463b0]
/* 05284b76 */  MOV RAX,qword ptr [0x0f5463b0]
/* 05284b7d */  MOV RSI,R12
/* 05284b80 */  CALL qword ptr [RAX + 0x10]
/* 05284b83 */  MOV R14,RAX
/* 05284b86 */  TEST RAX,RAX
/* 05284b89 */  JZ 0x05285cce
/* 05284b8f */  MOV qword ptr [RBX + 0x6f8],R14
/* 05284b96 */  MOV qword ptr [RBX + 0x700],R14
/* 05284b9d */  MOV R13,RBX
/* 05284ba0 */  MOV RBX,R14
/* 05284ba3 */  ADD RBX,R12
/* 05284ba6 */  MOV qword ptr [R13 + 0x708],RBX
/* 05284bad */  MOV RDI,R14
/* 05284bb0 */  MOV RSI,R15
/* 05284bb3 */  MOV RDX,R12
/* 05284bb6 */  CALL 0x0eee2f00
/* 05284bbb */  MOV qword ptr [R13 + 0x700],RBX
/* 05284bc2 */  MOV RBX,R13
/* 05284bc5 */  MOVSS XMM0,dword ptr [RSP + 0x248]
/* 05284bce */  MOVSS dword ptr [RBX + 0x710],XMM0
/* 05284bd6 */  LEA RDI,[RBX + 0x718]
/* 05284bdd */  LEA RSI,[RSP + 0x610]
/* 05284be5 */  CALL 0x05292fb0
/* 05284bea */  MOV RAX,RBP
/* 05284bed */  MOV RSI,qword ptr [RSP + 0x438]
/* 05284bf5 */  XOR RAX,RSI
/* 05284bf8 */  MOV RCX,RSI
/* 05284bfb */  ROL RCX,0x31
/* 05284bff */  MOV RDX,RAX
/* 05284c02 */  SHL RDX,0x15
/* 05284c06 */  XOR RDX,RCX
/* 05284c09 */  XOR RDX,RAX
/* 05284c0c */  ROL RAX,0x1c
/* 05284c10 */  ADD RBP,RSI
/* 05284c13 */  ADD RAX,RDX
/* 05284c16 */  ROL RBP,0x11
/* 05284c1a */  ROL RAX,0x11
/* 05284c1e */  ADD RBP,RSI
/* 05284c21 */  ADD RAX,RDX
/* 05284c24 */  LEA RCX,[0xef51388]
/* 05284c2b */  MOV qword ptr [RBX + 0xa70],RCX
/* 05284c32 */  MOV qword ptr [RBX + 0xa78],RBP
/* 05284c39 */  MOV qword ptr [RBX + 0xa80],RAX
/* 05284c40 */  MOV RAX,qword ptr [RSP + 0x440]
/* 05284c48 */  MOV qword ptr [RBX + 0xa88],RAX
/* 05284c4f */  LEA RDI,[RSP + 0x610]
/* 05284c57 */  CALL 0x0495d8f0
/* 05284c5c */  LEA RDI,[RSP + 0x250]
/* 05284c64 */  CALL 0x052931e0
/* 05284c69 */  LEA RDI,[RSP + 0x330]
/* 05284c71 */  CALL 0x052930f0
/* 05284c76 */  LEA RDI,[RSP + 0x9e8]
/* 05284c7e */  CALL 0x052933c0
/* 05284c83 */  LEA RDI,[RSP + 0x510]
/* 05284c8b */  CALL 0x052932d0
/* 05284c90 */  MOV RDI,qword ptr [RSP + 0x230]
/* 05284c98 */  TEST RDI,RDI
/* 05284c9b */  JZ 0x05284cb5
/* 05284c9d */  MOV qword ptr [RSP + 0x238],RDI
/* 05284ca5 */  MOV RSI,qword ptr [RSP + 0x240]
/* 05284cad */  SUB RSI,RDI
/* 05284cb0 */  CALL 0x0412a280
/* 05284cb5 */  MOV RDI,qword ptr [RSP + 0x9c8]
/* 05284cbd */  TEST RDI,RDI
/* 05284cc0 */  JZ 0x05284cda
/* 05284cc2 */  MOV qword ptr [RSP + 0x9d0],RDI
/* 05284cca */  MOV RSI,qword ptr [RSP + 0x9d8]
/* 05284cd2 */  SUB RSI,RDI
/* 05284cd5 */  CALL 0x0412a280
/* 05284cda */  MOV RDI,qword ptr [RSP + 0x9a0]
/* 05284ce2 */  TEST RDI,RDI
/* 05284ce5 */  JZ 0x05284cff
/* 05284ce7 */  MOV qword ptr [RSP + 0x9a8],RDI
/* 05284cef */  MOV RSI,qword ptr [RSP + 0x9b0]
/* 05284cf7 */  SUB RSI,RDI
/* 05284cfa */  CALL 0x0412a280
/* 05284cff */  MOV RDI,qword ptr [RSP + 0x978]
/* 05284d07 */  TEST RDI,RDI
/* 05284d0a */  JZ 0x05284d24
/* 05284d0c */  MOV qword ptr [RSP + 0x980],RDI
/* 05284d14 */  MOV RSI,qword ptr [RSP + 0x988]
/* 05284d1c */  SUB RSI,RDI
/* 05284d1f */  CALL 0x0412a280
/* 05284d24 */  MOV RDI,qword ptr [RSP + 0x1e0]
/* 05284d2c */  TEST RDI,RDI
/* 05284d2f */  JZ 0x05284d49
/* 05284d31 */  MOV qword ptr [RSP + 0x1e8],RDI
/* 05284d39 */  MOV RSI,qword ptr [RSP + 0x1f0]
/* 05284d41 */  SUB RSI,RDI
/* 05284d44 */  CALL 0x0412a280
/* 05284d49 */  ADD RSP,0xd68
/* 05284d50 */  POP RBX
/* 05284d51 */  POP R12
/* 05284d53 */  POP R13
/* 05284d55 */  POP R14
/* 05284d57 */  POP R15
/* 05284d59 */  POP RBP
/* 05284d5a */  RET
/* 05284d5b */  MOV RAX,-0x61c8864680b583eb
/* 05284d65 */  MOV qword ptr [RSP + 0x4a0],RAX
/* 05284d6d */  MOV RAX,0x6a09e667f3bcc909
/* 05284d77 */  MOV qword ptr [RSP + 0x4a8],RAX
/* 05284d7f */  MOV qword ptr [RSP + 0x4b0],0x0
/* 05284d8b */  MOV byte ptr [RSP + 0x4b8],0x0
/* 05284d93 */  TEST byte ptr [RSP + 0x9e8],0x1
/* 05284d9b */  JNZ 0x05282748
/* 05284da1 */  JMP 0x05282761
/* 05284da6 */  MOV RAX,-0x61c8864680b583eb
/* 05284db0 */  MOV qword ptr [RSP + 0x478],RAX
/* 05284db8 */  MOV RAX,0x6a09e667f3bcc909
/* 05284dc2 */  MOV qword ptr [RSP + 0x480],RAX
/* 05284dca */  MOV qword ptr [RSP + 0x488],0x0
/* 05284dd6 */  MOV byte ptr [RSP + 0x490],0x0
/* 05284dde */  TEST byte ptr [RSP + 0x9e8],0x1
/* 05284de6 */  JNZ 0x05282872
/* 05284dec */  JMP 0x0528288b
/* 05284df1 */  MOV RAX,-0x61c8864680b583eb
/* 05284dfb */  MOV qword ptr [RSP + 0x450],RAX
/* 05284e03 */  MOV RAX,0x6a09e667f3bcc909
/* 05284e0d */  MOV qword ptr [RSP + 0x458],RAX
/* 05284e15 */  MOV qword ptr [RSP + 0x460],0x0
/* 05284e21 */  MOV byte ptr [RSP + 0x468],0x0
/* 05284e29 */  TEST byte ptr [RSP + 0x9e8],0x1
/* 05284e31 */  JNZ 0x05282997
/* 05284e37 */  JMP 0x052829b0
/* 05284e3c */  MOV RAX,-0x61c8864680b583eb
/* 05284e46 */  MOV qword ptr [RSP + 0x168],RAX
/* 05284e4e */  MOV RAX,0x6a09e667f3bcc909
/* 05284e58 */  MOV qword ptr [RSP + 0x170],RAX
/* 05284e60 */  MOV qword ptr [RSP + 0x178],0x0
/* 05284e6c */  MOV byte ptr [RSP + 0x180],0x0
/* 05284e74 */  TEST byte ptr [RSP + 0x9e8],0x1
/* 05284e7c */  JNZ 0x05282b02
/* 05284e82 */  JMP 0x05282b1b
/* 05284e87 */  MOV RAX,-0x61c8864680b583eb
/* 05284e91 */  MOV qword ptr [RSP + 0x1a8],RAX
/* 05284e99 */  MOV RAX,0x6a09e667f3bcc909
/* 05284ea3 */  MOV qword ptr [RSP + 0x1b0],RAX
/* 05284eab */  MOV qword ptr [RSP + 0x1b8],0x0
/* 05284eb7 */  MOV byte ptr [RSP + 0x1c0],0x0
/* 05284ebf */  TEST byte ptr [RSP + 0x610],0x1
/* 05284ec7 */  JNZ 0x05282cd3
/* 05284ecd */  JMP 0x05282cec
/* 05284ed2 */  MOV RAX,-0x61c8864680b583eb
/* 05284edc */  MOV qword ptr [RSP + 0x100],RAX
/* 05284ee4 */  MOV RAX,0x6a09e667f3bcc909
/* 05284eee */  MOV qword ptr [RSP + 0x108],RAX
/* 05284ef6 */  MOV qword ptr [RSP + 0x110],0x0
/* 05284f02 */  MOV byte ptr [RSP + 0x118],0x0
/* 05284f0a */  TEST byte ptr [RSP + 0x330],0x1
/* 05284f12 */  JNZ 0x05282ea0
/* 05284f18 */  JMP 0x05282eb9
/* 05284f1d */  MOV RAX,-0x61c8864680b583eb
/* 05284f27 */  MOV qword ptr [RSP + 0xd8],RAX
/* 05284f2f */  MOV RAX,0x6a09e667f3bcc909
/* 05284f39 */  MOV qword ptr [RSP + 0xe0],RAX
/* 05284f41 */  MOV qword ptr [RSP + 0xe8],0x0
/* 05284f4d */  MOV byte ptr [RSP + 0xf0],0x0
/* 05284f55 */  TEST byte ptr [RSP + 0x250],0x1
/* 05284f5d */  JNZ 0x0528302e
/* 05284f63 */  JMP 0x05283047
/* 05284f68 */  MOV RAX,-0x61c8864680b583eb
/* 05284f72 */  MOV qword ptr [RSP + 0x100],RAX
/* 05284f7a */  MOV RAX,0x6a09e667f3bcc909
/* 05284f84 */  MOV qword ptr [RSP + 0x108],RAX
/* 05284f8c */  MOV qword ptr [RSP + 0x110],0x0
/* 05284f98 */  MOV byte ptr [RSP + 0x118],0x0
/* 05284fa0 */  TEST byte ptr [RSP + 0x610],0x1
/* 05284fa8 */  JNZ 0x05283652
/* 05284fae */  JMP 0x0528366b
/* 05284fb3 */  MOV RAX,-0x61c8864680b583eb
/* 05284fbd */  MOV qword ptr [RSP + 0xd8],RAX
/* 05284fc5 */  MOV RAX,0x6a09e667f3bcc909
/* 05284fcf */  MOV qword ptr [RSP + 0xe0],RAX
/* 05284fd7 */  MOV qword ptr [RSP + 0xe8],0x0
/* 05284fe3 */  MOV byte ptr [RSP + 0xf0],0x0
/* 05284feb */  TEST byte ptr [RSP + 0x250],0x1
/* 05284ff3 */  JNZ 0x052837d9
/* 05284ff9 */  JMP 0x052837f2
/* 05284ffe */  MOV RAX,-0x61c8864680b583eb
/* 05285008 */  MOV qword ptr [RSP + 0x4f0],RAX
/* 05285010 */  MOV RAX,0x6a09e667f3bcc909
/* 0528501a */  MOV qword ptr [RSP + 0x4f8],RAX
/* 05285022 */  MOV qword ptr [RSP + 0x500],0x0
/* 0528502e */  MOV byte ptr [RSP + 0x508],0x0
/* 05285036 */  TEST byte ptr [RSP + 0x10],0x1
/* 0528503b */  JNZ 0x05283939
/* 05285041 */  JMP 0x0528394c
/* 05285046 */  MOV RAX,-0x61c8864680b583eb
/* 05285050 */  MOV qword ptr [RSP + 0x4c8],RAX
/* 05285058 */  MOV RAX,0x6a09e667f3bcc909
/* 05285062 */  MOV qword ptr [RSP + 0x4d0],RAX
/* 0528506a */  MOV qword ptr [RSP + 0x4d8],0x0
/* 05285076 */  MOV byte ptr [RSP + 0x4e0],0x0
/* 0528507e */  TEST byte ptr [RSP + 0x90],0x1
/* 05285086 */  JNZ 0x05283aae
/* 0528508c */  JMP 0x05283ac7
/* 05285091 */  MOV RAX,-0x61c8864680b583eb
/* 0528509b */  MOV qword ptr [RSP + 0x128],RAX
/* 052850a3 */  MOV RAX,0x6a09e667f3bcc909
/* 052850ad */  MOV qword ptr [RSP + 0x130],RAX
/* 052850b5 */  MOV qword ptr [RSP + 0x138],0x0
/* 052850c1 */  MOV byte ptr [RSP + 0x140],0x0
/* 052850c9 */  TEST byte ptr [RSP + 0x610],0x1
/* 052850d1 */  JNZ 0x05284090
/* 052850d7 */  JMP 0x052840a9
/* 052850dc */  MOV RAX,-0x61c8864680b583eb
/* 052850e6 */  MOV qword ptr [RSP + 0x168],RAX
/* 052850ee */  MOV RAX,0x6a09e667f3bcc909
/* 052850f8 */  MOV qword ptr [RSP + 0x170],RAX
/* 05285100 */  MOV qword ptr [RSP + 0x178],0x0
/* 0528510c */  MOV byte ptr [RSP + 0x180],0x0
/* 05285114 */  TEST byte ptr [RSP + 0x10],0x1
/* 05285119 */  JNZ 0x05284228
/* 0528511f */  JMP 0x0528423b
/* 05285124 */  MOV RAX,-0x61c8864680b583eb
/* 0528512e */  MOV qword ptr [RSP + 0x1a8],RAX
/* 05285136 */  MOV RAX,0x6a09e667f3bcc909
/* 05285140 */  MOV qword ptr [RSP + 0x1b0],RAX
/* 05285148 */  MOV qword ptr [RSP + 0x1b8],0x0
/* 05285154 */  MOV byte ptr [RSP + 0x1c0],0x0
/* 0528515c */  TEST byte ptr [RSP + 0x90],0x1
/* 05285164 */  JNZ 0x052843dd
/* 0528516a */  JMP 0x052843f6
/* 0528516f */  MOV RAX,-0x61c8864680b583eb
/* 05285179 */  MOV qword ptr [RSP + 0x100],RAX
/* 05285181 */  MOV RAX,0x6a09e667f3bcc909
/* 0528518b */  MOV qword ptr [RSP + 0x108],RAX
/* 05285193 */  MOV qword ptr [RSP + 0x110],0x0
/* 0528519f */  MOV byte ptr [RSP + 0x118],0x0
/* 052851a7 */  TEST byte ptr [RSP + 0x50],0x1
/* 052851ac */  JNZ 0x05284577
/* 052851b2 */  JMP 0x0528458a
/* 052851b7 */  MOV byte ptr [R12 + -0x16b0],0x1
/* 052851c0 */  LEA RCX,[0xf53bd88]
/* 052851c7 */  MOV qword ptr [R12 + -0x1750],RCX
/* 052851cf */  MOV RCX,0x1032547698badcfe
/* 052851d9 */  MOV qword ptr [R12 + -0x1738],RCX
/* 052851e1 */  MOVAPS XMM0,xmmword ptr [0x014e11d0]
/* 052851e8 */  MOVUPS xmmword ptr [R12 + -0x1748],XMM0
/* 052851f1 */  XORPS XMM0,XMM0
/* 052851f4 */  MOVUPS xmmword ptr [R12 + -0x1730],XMM0
/* 052851fd */  MOVUPS xmmword ptr [R12 + -0x1720],XMM0
/* 05285206 */  MOVUPS xmmword ptr [R12 + -0x1710],XMM0
/* 0528520f */  MOVUPS xmmword ptr [R12 + -0x1700],XMM0
/* 05285218 */  MOVUPS xmmword ptr [R12 + -0x16f0],XMM0
/* 05285221 */  MOVUPS xmmword ptr [R12 + -0x16e0],XMM0
/* 0528522a */  MOVUPS xmmword ptr [R12 + -0x16d0],XMM0
/* 05285233 */  MOVUPS xmmword ptr [R12 + -0x16c0],XMM0
/* 0528523c */  JMP 0x0528268c
/* 05285241 */  MOV byte ptr [R12 + -0x16b0],0x1
/* 0528524a */  LEA RCX,[0xf53bd88]
/* 05285251 */  MOV qword ptr [R12 + -0x1750],RCX
/* 05285259 */  MOV RCX,0x1032547698badcfe
/* 05285263 */  MOV qword ptr [R12 + -0x1738],RCX
/* 0528526b */  MOVAPS XMM0,xmmword ptr [0x014e11d0]
/* 05285272 */  MOVUPS xmmword ptr [R12 + -0x1748],XMM0
/* 0528527b */  XORPS XMM0,XMM0
/* 0528527e */  MOVUPS xmmword ptr [R12 + -0x1730],XMM0
/* 05285287 */  MOVUPS xmmword ptr [R12 + -0x1720],XMM0
/* 05285290 */  MOVUPS xmmword ptr [R12 + -0x1710],XMM0
/* 05285299 */  MOVUPS xmmword ptr [R12 + -0x1700],XMM0
/* 052852a2 */  MOVUPS xmmword ptr [R12 + -0x16f0],XMM0
/* 052852ab */  MOVUPS xmmword ptr [R12 + -0x16e0],XMM0
/* 052852b4 */  MOVUPS xmmword ptr [R12 + -0x16d0],XMM0
/* 052852bd */  MOVUPS xmmword ptr [R12 + -0x16c0],XMM0
/* 052852c6 */  JMP 0x052827ca
/* 052852cb */  MOV byte ptr [R12 + -0x16b0],0x1
/* 052852d4 */  LEA RCX,[0xf53bd88]
/* 052852db */  MOV qword ptr [R12 + -0x1750],RCX
/* 052852e3 */  MOV RCX,0x1032547698badcfe
/* 052852ed */  MOV qword ptr [R12 + -0x1738],RCX
/* 052852f5 */  MOVAPS XMM0,xmmword ptr [0x014e11d0]
/* 052852fc */  MOVUPS xmmword ptr [R12 + -0x1748],XMM0
/* 05285305 */  XORPS XMM0,XMM0
/* 05285308 */  MOVUPS xmmword ptr [R12 + -0x1730],XMM0
/* 05285311 */  MOVUPS xmmword ptr [R12 + -0x1720],XMM0
/* 0528531a */  MOVUPS xmmword ptr [R12 + -0x1710],XMM0
/* 05285323 */  MOVUPS xmmword ptr [R12 + -0x1700],XMM0
/* 0528532c */  MOVUPS xmmword ptr [R12 + -0x16f0],XMM0
/* 05285335 */  MOVUPS xmmword ptr [R12 + -0x16e0],XMM0
/* 0528533e */  MOVUPS xmmword ptr [R12 + -0x16d0],XMM0
/* 05285347 */  MOVUPS xmmword ptr [R12 + -0x16c0],XMM0
/* 05285350 */  JMP 0x052828ef
/* 05285355 */  MOV byte ptr [R12 + -0x16b0],0x1
/* 0528535e */  LEA RCX,[0xf53bd88]
/* 05285365 */  MOV qword ptr [R12 + -0x1750],RCX
/* 0528536d */  MOV RCX,0x1032547698badcfe
/* 05285377 */  MOV qword ptr [R12 + -0x1738],RCX
/* 0528537f */  MOVAPS XMM0,xmmword ptr [0x014e11d0]
/* 05285386 */  MOVUPS xmmword ptr [R12 + -0x1748],XMM0
/* 0528538f */  XORPS XMM0,XMM0
/* 05285392 */  MOVUPS xmmword ptr [R12 + -0x1730],XMM0
/* 0528539b */  MOVUPS xmmword ptr [R12 + -0x1720],XMM0
/* 052853a4 */  MOVUPS xmmword ptr [R12 + -0x1710],XMM0
/* 052853ad */  MOVUPS xmmword ptr [R12 + -0x1700],XMM0
/* 052853b6 */  MOVUPS xmmword ptr [R12 + -0x16f0],XMM0
/* 052853bf */  MOVUPS xmmword ptr [R12 + -0x16e0],XMM0
/* 052853c8 */  MOVUPS xmmword ptr [R12 + -0x16d0],XMM0
/* 052853d1 */  MOVUPS xmmword ptr [R12 + -0x16c0],XMM0
/* 052853da */  JMP 0x05282a5a
/* 052853df */  MOV byte ptr [R12 + -0x16b0],0x1
/* 052853e8 */  LEA RCX,[0xf53bd88]
/* 052853ef */  MOV qword ptr [R12 + -0x1750],RCX
/* 052853f7 */  MOV RCX,0x1032547698badcfe
/* 05285401 */  MOV qword ptr [R12 + -0x1738],RCX
/* 05285409 */  MOVAPS XMM0,xmmword ptr [0x014e11d0]
/* 05285410 */  MOVUPS xmmword ptr [R12 + -0x1748],XMM0
/* 05285419 */  XORPS XMM0,XMM0
/* 0528541c */  MOVUPS xmmword ptr [R12 + -0x1730],XMM0
/* 05285425 */  MOVUPS xmmword ptr [R12 + -0x1720],XMM0
/* 0528542e */  MOVUPS xmmword ptr [R12 + -0x1710],XMM0
/* 05285437 */  MOVUPS xmmword ptr [R12 + -0x1700],XMM0
/* 05285440 */  MOVUPS xmmword ptr [R12 + -0x16f0],XMM0
/* 05285449 */  MOVUPS xmmword ptr [R12 + -0x16e0],XMM0
/* 05285452 */  MOVUPS xmmword ptr [R12 + -0x16d0],XMM0
/* 0528545b */  MOVUPS xmmword ptr [R12 + -0x16c0],XMM0
/* 05285464 */  JMP 0x05282c2b
/* 05285469 */  MOV byte ptr [R12 + -0x16b0],0x1
/* 05285472 */  LEA RCX,[0xf53bd88]
/* 05285479 */  MOV qword ptr [R12 + -0x1750],RCX
/* 05285481 */  MOV RCX,0x1032547698badcfe
/* 0528548b */  MOV qword ptr [R12 + -0x1738],RCX
/* 05285493 */  MOVAPS XMM0,xmmword ptr [0x014e11d0]
/* 0528549a */  MOVUPS xmmword ptr [R12 + -0x1748],XMM0
/* 052854a3 */  XORPS XMM0,XMM0
/* 052854a6 */  MOVUPS xmmword ptr [R12 + -0x1730],XMM0
/* 052854af */  MOVUPS xmmword ptr [R12 + -0x1720],XMM0
/* 052854b8 */  MOVUPS xmmword ptr [R12 + -0x1710],XMM0
/* 052854c1 */  MOVUPS xmmword ptr [R12 + -0x1700],XMM0
/* 052854ca */  MOVUPS xmmword ptr [R12 + -0x16f0],XMM0
/* 052854d3 */  MOVUPS xmmword ptr [R12 + -0x16e0],XMM0
/* 052854dc */  MOVUPS xmmword ptr [R12 + -0x16d0],XMM0
/* 052854e5 */  MOVUPS xmmword ptr [R12 + -0x16c0],XMM0
/* 052854ee */  JMP 0x05282df8
/* 052854f3 */  MOV byte ptr [R12 + -0x16b0],0x1
/* 052854fc */  LEA RCX,[0xf53bd88]
/* 05285503 */  MOV qword ptr [R12 + -0x1750],RCX
/* 0528550b */  MOV RCX,0x1032547698badcfe
/* 05285515 */  MOV qword ptr [R12 + -0x1738],RCX
/* 0528551d */  MOVAPS XMM0,xmmword ptr [0x014e11d0]
/* 05285524 */  MOVUPS xmmword ptr [R12 + -0x1748],XMM0
/* 0528552d */  XORPS XMM0,XMM0
/* 05285530 */  MOVUPS xmmword ptr [R12 + -0x1730],XMM0
/* 05285539 */  MOVUPS xmmword ptr [R12 + -0x1720],XMM0
/* 05285542 */  MOVUPS xmmword ptr [R12 + -0x1710],XMM0
/* 0528554b */  MOVUPS xmmword ptr [R12 + -0x1700],XMM0
/* 05285554 */  MOVUPS xmmword ptr [R12 + -0x16f0],XMM0
/* 0528555d */  MOVUPS xmmword ptr [R12 + -0x16e0],XMM0
/* 05285566 */  MOVUPS xmmword ptr [R12 + -0x16d0],XMM0
/* 0528556f */  MOVUPS xmmword ptr [R12 + -0x16c0],XMM0
/* 05285578 */  JMP 0x05282f8f
/* 0528557d */  MOV byte ptr [R12 + -0x16b0],0x1
/* 05285586 */  LEA RCX,[0xf53bd88]
/* 0528558d */  MOV qword ptr [R12 + -0x1750],RCX
/* 05285595 */  MOV RCX,0x1032547698badcfe
/* 0528559f */  MOV qword ptr [R12 + -0x1738],RCX
/* 052855a7 */  MOVAPS XMM0,xmmword ptr [0x014e11d0]
/* 052855ae */  MOVUPS xmmword ptr [R12 + -0x1748],XMM0
/* 052855b7 */  XORPS XMM0,XMM0
/* 052855ba */  MOVUPS xmmword ptr [R12 + -0x1730],XMM0
/* 052855c3 */  MOVUPS xmmword ptr [R12 + -0x1720],XMM0
/* 052855cc */  MOVUPS xmmword ptr [R12 + -0x1710],XMM0
/* 052855d5 */  MOVUPS xmmword ptr [R12 + -0x1700],XMM0
/* 052855de */  MOVUPS xmmword ptr [R12 + -0x16f0],XMM0
/* 052855e7 */  MOVUPS xmmword ptr [R12 + -0x16e0],XMM0
/* 052855f0 */  MOVUPS xmmword ptr [R12 + -0x16d0],XMM0
/* 052855f9 */  MOVUPS xmmword ptr [R12 + -0x16c0],XMM0
/* 05285602 */  JMP 0x052830ef
/* 05285607 */  MOV byte ptr [R12 + -0x16b0],0x1
/* 05285610 */  LEA RCX,[0xf53bd88]
/* 05285617 */  MOV qword ptr [R12 + -0x1750],RCX
/* 0528561f */  MOV RCX,0x1032547698badcfe
/* 05285629 */  MOV qword ptr [R12 + -0x1738],RCX
/* 05285631 */  MOVAPS XMM0,xmmword ptr [0x014e11d0]
/* 05285638 */  MOVUPS xmmword ptr [R12 + -0x1748],XMM0
/* 05285641 */  XORPS XMM0,XMM0
/* 05285644 */  MOVUPS xmmword ptr [R12 + -0x1730],XMM0
/* 0528564d */  MOVUPS xmmword ptr [R12 + -0x1720],XMM0
/* 05285656 */  MOVUPS xmmword ptr [R12 + -0x1710],XMM0
/* 0528565f */  MOVUPS xmmword ptr [R12 + -0x1700],XMM0
/* 05285668 */  MOVUPS xmmword ptr [R12 + -0x16f0],XMM0
/* 05285671 */  MOVUPS xmmword ptr [R12 + -0x16e0],XMM0
/* 0528567a */  MOVUPS xmmword ptr [R12 + -0x16d0],XMM0
/* 05285683 */  MOVUPS xmmword ptr [R12 + -0x16c0],XMM0
/* 0528568c */  JMP 0x052835aa
/* 05285691 */  MOV byte ptr [R12 + -0x16b0],0x1
/* 0528569a */  LEA RCX,[0xf53bd88]
/* 052856a1 */  MOV qword ptr [R12 + -0x1750],RCX
/* 052856a9 */  MOV RCX,0x1032547698badcfe
/* 052856b3 */  MOV qword ptr [R12 + -0x1738],RCX
/* 052856bb */  MOVAPS XMM0,xmmword ptr [0x014e11d0]
/* 052856c2 */  MOVUPS xmmword ptr [R12 + -0x1748],XMM0
/* 052856cb */  XORPS XMM0,XMM0
/* 052856ce */  MOVUPS xmmword ptr [R12 + -0x1730],XMM0
/* 052856d7 */  MOVUPS xmmword ptr [R12 + -0x1720],XMM0
/* 052856e0 */  MOVUPS xmmword ptr [R12 + -0x1710],XMM0
/* 052856e9 */  MOVUPS xmmword ptr [R12 + -0x1700],XMM0
/* 052856f2 */  MOVUPS xmmword ptr [R12 + -0x16f0],XMM0
/* 052856fb */  MOVUPS xmmword ptr [R12 + -0x16e0],XMM0
/* 05285704 */  MOVUPS xmmword ptr [R12 + -0x16d0],XMM0
/* 0528570d */  MOVUPS xmmword ptr [R12 + -0x16c0],XMM0
/* 05285716 */  JMP 0x0528373a
/* 0528571b */  MOV byte ptr [R12 + -0x16b0],0x1
/* 05285724 */  LEA RCX,[0xf53bd88]
/* 0528572b */  MOV qword ptr [R12 + -0x1750],RCX
/* 05285733 */  MOV RCX,0x1032547698badcfe
/* 0528573d */  MOV qword ptr [R12 + -0x1738],RCX
/* 05285745 */  MOVAPS XMM0,xmmword ptr [0x014e11d0]
/* 0528574c */  MOVUPS xmmword ptr [R12 + -0x1748],XMM0
/* 05285755 */  XORPS XMM0,XMM0
/* 05285758 */  MOVUPS xmmword ptr [R12 + -0x1730],XMM0
/* 05285761 */  MOVUPS xmmword ptr [R12 + -0x1720],XMM0
/* 0528576a */  MOVUPS xmmword ptr [R12 + -0x1710],XMM0
/* 05285773 */  MOVUPS xmmword ptr [R12 + -0x1700],XMM0
/* 0528577c */  MOVUPS xmmword ptr [R12 + -0x16f0],XMM0
/* 05285785 */  MOVUPS xmmword ptr [R12 + -0x16e0],XMM0
/* 0528578e */  MOVUPS xmmword ptr [R12 + -0x16d0],XMM0
/* 05285797 */  MOVUPS xmmword ptr [R12 + -0x16c0],XMM0
/* 052857a0 */  JMP 0x052838a0
/* 052857a5 */  MOV byte ptr [R12 + -0x16b0],0x1
/* 052857ae */  LEA RCX,[0xf53bd88]
/* 052857b5 */  MOV qword ptr [R12 + -0x1750],RCX
/* 052857bd */  MOV RCX,0x1032547698badcfe
/* 052857c7 */  MOV qword ptr [R12 + -0x1738],RCX
/* 052857cf */  MOVAPS XMM0,xmmword ptr [0x014e11d0]
/* 052857d6 */  MOVUPS xmmword ptr [R12 + -0x1748],XMM0
/* 052857df */  XORPS XMM0,XMM0
/* 052857e2 */  MOVUPS xmmword ptr [R12 + -0x1730],XMM0
/* 052857eb */  MOVUPS xmmword ptr [R12 + -0x1720],XMM0
/* 052857f4 */  MOVUPS xmmword ptr [R12 + -0x1710],XMM0
/* 052857fd */  MOVUPS xmmword ptr [R12 + -0x1700],XMM0
/* 05285806 */  MOVUPS xmmword ptr [R12 + -0x16f0],XMM0
/* 0528580f */  MOVUPS xmmword ptr [R12 + -0x16e0],XMM0
/* 05285818 */  MOVUPS xmmword ptr [R12 + -0x16d0],XMM0
/* 05285821 */  MOVUPS xmmword ptr [R12 + -0x16c0],XMM0
/* 0528582a */  JMP 0x05283a0f
/* 0528582f */  MOV byte ptr [R12 + -0x16b0],0x1
/* 05285838 */  LEA RCX,[0xf53bd88]
/* 0528583f */  MOV qword ptr [R12 + -0x1750],RCX
/* 05285847 */  MOV RCX,0x1032547698badcfe
/* 05285851 */  MOV qword ptr [R12 + -0x1738],RCX
/* 05285859 */  MOVAPS XMM0,xmmword ptr [0x014e11d0]
/* 05285860 */  MOVUPS xmmword ptr [R12 + -0x1748],XMM0
/* 05285869 */  XORPS XMM0,XMM0
/* 0528586c */  MOVUPS xmmword ptr [R12 + -0x1730],XMM0
/* 05285875 */  MOVUPS xmmword ptr [R12 + -0x1720],XMM0
/* 0528587e */  MOVUPS xmmword ptr [R12 + -0x1710],XMM0
/* 05285887 */  MOVUPS xmmword ptr [R12 + -0x1700],XMM0
/* 05285890 */  MOVUPS xmmword ptr [R12 + -0x16f0],XMM0
/* 05285899 */  MOVUPS xmmword ptr [R12 + -0x16e0],XMM0
/* 052858a2 */  MOVUPS xmmword ptr [R12 + -0x16d0],XMM0
/* 052858ab */  MOVUPS xmmword ptr [R12 + -0x16c0],XMM0
/* 052858b4 */  JMP 0x05283b7f
/* 052858b9 */  MOV byte ptr [R12 + -0x16b0],0x1
/* 052858c2 */  LEA RCX,[0xf53bd88]
/* 052858c9 */  MOV qword ptr [R12 + -0x1750],RCX
/* 052858d1 */  MOV RCX,0x1032547698badcfe
/* 052858db */  MOV qword ptr [R12 + -0x1738],RCX
/* 052858e3 */  MOVAPS XMM0,xmmword ptr [0x014e11d0]
/* 052858ea */  MOVUPS xmmword ptr [R12 + -0x1748],XMM0
/* 052858f3 */  XORPS XMM0,XMM0
/* 052858f6 */  MOVUPS xmmword ptr [R12 + -0x1730],XMM0
/* 052858ff */  MOVUPS xmmword ptr [R12 + -0x1720],XMM0
/* 05285908 */  MOVUPS xmmword ptr [R12 + -0x1710],XMM0
/* 05285911 */  MOVUPS xmmword ptr [R12 + -0x1700],XMM0
/* 0528591a */  MOVUPS xmmword ptr [R12 + -0x16f0],XMM0
/* 05285923 */  MOVUPS xmmword ptr [R12 + -0x16e0],XMM0
/* 0528592c */  MOVUPS xmmword ptr [R12 + -0x16d0],XMM0
/* 05285935 */  MOVUPS xmmword ptr [R12 + -0x16c0],XMM0
/* 0528593e */  JMP 0x05283ff1
/* 05285943 */  MOV byte ptr [R12 + -0x16b0],0x1
/* 0528594c */  LEA RCX,[0xf53bd88]
/* 05285953 */  MOV qword ptr [R12 + -0x1750],RCX
/* 0528595b */  MOV RCX,0x1032547698badcfe
/* 05285965 */  MOV qword ptr [R12 + -0x1738],RCX
/* 0528596d */  MOVAPS XMM0,xmmword ptr [0x014e11d0]
/* 05285974 */  MOVUPS xmmword ptr [R12 + -0x1748],XMM0
/* 0528597d */  XORPS XMM0,XMM0
/* 05285980 */  MOVUPS xmmword ptr [R12 + -0x1730],XMM0
/* 05285989 */  MOVUPS xmmword ptr [R12 + -0x1720],XMM0
/* 05285992 */  MOVUPS xmmword ptr [R12 + -0x1710],XMM0
/* 0528599b */  MOVUPS xmmword ptr [R12 + -0x1700],XMM0
/* 052859a4 */  MOVUPS xmmword ptr [R12 + -0x16f0],XMM0
/* 052859ad */  MOVUPS xmmword ptr [R12 + -0x16e0],XMM0
/* 052859b6 */  MOVUPS xmmword ptr [R12 + -0x16d0],XMM0
/* 052859bf */  MOVUPS xmmword ptr [R12 + -0x16c0],XMM0
/* 052859c8 */  JMP 0x0528418f
/* 052859cd */  MOV byte ptr [R12 + -0x16b0],0x1
/* 052859d6 */  LEA RCX,[0xf53bd88]
/* 052859dd */  MOV qword ptr [R12 + -0x1750],RCX
/* 052859e5 */  MOV RCX,0x1032547698badcfe
/* 052859ef */  MOV qword ptr [R12 + -0x1738],RCX
/* 052859f7 */  MOVAPS XMM0,xmmword ptr [0x014e11d0]
/* 052859fe */  MOVUPS xmmword ptr [R12 + -0x1748],XMM0
/* 05285a07 */  XORPS XMM0,XMM0
/* 05285a0a */  MOVUPS xmmword ptr [R12 + -0x1730],XMM0
/* 05285a13 */  MOVUPS xmmword ptr [R12 + -0x1720],XMM0
/* 05285a1c */  MOVUPS xmmword ptr [R12 + -0x1710],XMM0
/* 05285a25 */  MOVUPS xmmword ptr [R12 + -0x1700],XMM0
/* 05285a2e */  MOVUPS xmmword ptr [R12 + -0x16f0],XMM0
/* 05285a37 */  MOVUPS xmmword ptr [R12 + -0x16e0],XMM0
/* 05285a40 */  MOVUPS xmmword ptr [R12 + -0x16d0],XMM0
/* 05285a49 */  MOVUPS xmmword ptr [R12 + -0x16c0],XMM0
/* 05285a52 */  JMP 0x0528433e
/* 05285a57 */  MOV byte ptr [R12 + -0x16b0],0x1
/* 05285a60 */  LEA RCX,[0xf53bd88]
/* 05285a67 */  MOV qword ptr [R12 + -0x1750],RCX
/* 05285a6f */  MOV RCX,0x1032547698badcfe
/* 05285a79 */  MOV qword ptr [R12 + -0x1738],RCX
/* 05285a81 */  MOVAPS XMM0,xmmword ptr [0x014e11d0]
/* 05285a88 */  MOVUPS xmmword ptr [R12 + -0x1748],XMM0
/* 05285a91 */  XORPS XMM0,XMM0
/* 05285a94 */  MOVUPS xmmword ptr [R12 + -0x1730],XMM0
/* 05285a9d */  MOVUPS xmmword ptr [R12 + -0x1720],XMM0
/* 05285aa6 */  MOVUPS xmmword ptr [R12 + -0x1710],XMM0
/* 05285aaf */  MOVUPS xmmword ptr [R12 + -0x1700],XMM0
/* 05285ab8 */  MOVUPS xmmword ptr [R12 + -0x16f0],XMM0
/* 05285ac1 */  MOVUPS xmmword ptr [R12 + -0x16e0],XMM0
/* 05285aca */  MOVUPS xmmword ptr [R12 + -0x16d0],XMM0
/* 05285ad3 */  MOVUPS xmmword ptr [R12 + -0x16c0],XMM0
/* 05285adc */  JMP 0x052844de
/* 05285ae1 */  MOV byte ptr [R12 + -0x16b0],0x1
/* 05285aea */  LEA RCX,[0xf53bd88]
/* 05285af1 */  MOV qword ptr [R12 + -0x1750],RCX
/* 05285af9 */  MOV RCX,0x1032547698badcfe
/* 05285b03 */  MOV qword ptr [R12 + -0x1738],RCX
/* 05285b0b */  MOVAPS XMM0,xmmword ptr [0x014e11d0]
/* 05285b12 */  MOVUPS xmmword ptr [R12 + -0x1748],XMM0
/* 05285b1b */  XORPS XMM0,XMM0
/* 05285b1e */  MOVUPS xmmword ptr [R12 + -0x1730],XMM0
/* 05285b27 */  MOVUPS xmmword ptr [R12 + -0x1720],XMM0
/* 05285b30 */  MOVUPS xmmword ptr [R12 + -0x1710],XMM0
/* 05285b39 */  MOVUPS xmmword ptr [R12 + -0x1700],XMM0
/* 05285b42 */  MOVUPS xmmword ptr [R12 + -0x16f0],XMM0
/* 05285b4b */  MOVUPS xmmword ptr [R12 + -0x16e0],XMM0
/* 05285b54 */  MOVUPS xmmword ptr [R12 + -0x16d0],XMM0
/* 05285b5d */  MOVUPS xmmword ptr [R12 + -0x16c0],XMM0
/* 05285b66 */  JMP 0x052847e4
/* 05285b6b */  MOV EDI,0x20
/* 05285b70 */  XOR ESI,ESI
/* 05285b72 */  CALL 0x0eec74c0
/* 05285b77 */  JMP 0x05282a0e
/* 05285b7c */  MOV EDI,0x4
/* 05285b81 */  XOR ESI,ESI
/* 05285b83 */  CALL 0x0eec74c0
/* 05285b88 */  JMP 0x05282b3d
/* 05285b8d */  MOV EDI,0x30
/* 05285b92 */  XOR ESI,ESI
/* 05285b94 */  CALL 0x0eec74c0
/* 05285b99 */  JMP 0x05282bd3
/* 05285b9e */  MOV EDI,0x4
/* 05285ba3 */  XOR ESI,ESI
/* 05285ba5 */  CALL 0x0eec74c0
/* 05285baa */  JMP 0x05282d0e
/* 05285baf */  MOV EDI,0x28
/* 05285bb4 */  XOR ESI,ESI
/* 05285bb6 */  CALL 0x0eec74c0
/* 05285bbb */  JMP 0x05282da4
/* 05285bc0 */  MOV EDI,0x4
/* 05285bc5 */  XOR ESI,ESI
/* 05285bc7 */  CALL 0x0eec74c0
/* 05285bcc */  JMP 0x05282edb
/* 05285bd1 */  MOV EDI,0x4
/* 05285bd6 */  XOR ESI,ESI
/* 05285bd8 */  CALL 0x0eec74c0
/* 05285bdd */  JMP 0x05283069
/* 05285be2 */  MOV EDI,0x1a
/* 05285be7 */  XOR ESI,ESI
/* 05285be9 */  CALL 0x0eec74c0
/* 05285bee */  JMP 0x0528355c
/* 05285bf3 */  MOV EDI,0x4
/* 05285bf8 */  XOR ESI,ESI
/* 05285bfa */  CALL 0x0eec74c0
/* 05285bff */  JMP 0x0528368d
/* 05285c04 */  MOV EDI,0x4
/* 05285c09 */  XOR ESI,ESI
/* 05285c0b */  CALL 0x0eec74c0
/* 05285c10 */  JMP 0x05283814
/* 05285c15 */  MOV EDI,0x4
/* 05285c1a */  XOR ESI,ESI
/* 05285c1c */  CALL 0x0eec74c0
/* 05285c21 */  JMP 0x0528396e
/* 05285c26 */  MOV EDI,0x4
/* 05285c2b */  XOR ESI,ESI
/* 05285c2d */  CALL 0x0eec74c0
/* 05285c32 */  JMP 0x05283ae9
/* 05285c37 */  MOV EDI,0x4
/* 05285c3c */  XOR ESI,ESI
/* 05285c3e */  CALL 0x0eec74c0
/* 05285c43 */  JMP 0x052840cb
/* 05285c48 */  MOV EDI,0x20
/* 05285c4d */  XOR ESI,ESI
/* 05285c4f */  CALL 0x0eec74c0
/* 05285c54 */  JMP 0x0528414c
/* 05285c59 */  MOV EDI,0x4
/* 05285c5e */  XOR ESI,ESI
/* 05285c60 */  CALL 0x0eec74c0
/* 05285c65 */  JMP 0x0528425d
/* 05285c6a */  MOV EDI,0x20
/* 05285c6f */  XOR ESI,ESI
/* 05285c71 */  CALL 0x0eec74c0
/* 05285c76 */  JMP 0x052842f0
/* 05285c7b */  MOV EDI,0x4
/* 05285c80 */  XOR ESI,ESI
/* 05285c82 */  CALL 0x0eec74c0
/* 05285c87 */  JMP 0x05284418
/* 05285c8c */  MOV EDI,0x20
/* 05285c91 */  XOR ESI,ESI
/* 05285c93 */  CALL 0x0eec74c0
/* 05285c98 */  JMP 0x05284499
/* 05285c9d */  MOV EDI,0x4
/* 05285ca2 */  XOR ESI,ESI
/* 05285ca4 */  CALL 0x0eec74c0
/* 05285ca9 */  JMP 0x052845ac
/* 05285cae */  MOV EDI,0x20
/* 05285cb3 */  XOR ESI,ESI
/* 05285cb5 */  CALL 0x0eec74c0
/* 05285cba */  JMP 0x052847a4
/* 05285cbf */  MOV RDI,R12
/* 05285cc2 */  XOR ESI,ESI
/* 05285cc4 */  CALL 0x0eec74c0
/* 05285cc9 */  JMP 0x05284ac2
/* 05285cce */  MOV RDI,R12
/* 05285cd1 */  XOR ESI,ESI
/* 05285cd3 */  CALL 0x0eec74c0
/* 05285cd8 */  JMP 0x05284b8f
/* 05285cdd */  CALL 0x052bdae0
/* 05285ce2 */  CALL 0x052bdae0
/* 05285ce7 */  JMP 0x05286162
/* 05286162 */  MOV qword ptr [RSP + 0x8],RBX
/* 05286167 */  MOV RBP,RAX
/* 0528616a */  MOV RAX,qword ptr [RSP + 0x200]
/* 05286172 */  MOV RDI,qword ptr [RAX]
/* 05286175 */  TEST RDI,RDI
/* 05286178 */  JZ 0x0528619a
/* 0528617a */  MOV RAX,qword ptr [RSP + 0x8]
/* 0528617f */  MOV qword ptr [RAX + 0x700],RDI
/* 05286186 */  MOV RSI,qword ptr [RAX + 0x708]
/* 0528618d */  SUB RSI,RDI
/* 05286190 */  CALL 0x0412a280
/* 05286195 */  JMP 0x0528619a
/* 0528619a */  MOV RAX,qword ptr [RSP + 0x208]
/* 052861a2 */  MOV RDI,qword ptr [RAX]
/* 052861a5 */  TEST RDI,RDI
/* 052861a8 */  JZ 0x052861c5
/* 052861aa */  MOV RAX,qword ptr [RSP + 0x8]
/* 052861af */  MOV qword ptr [RAX + 0x6d8],RDI
/* 052861b6 */  MOV RSI,qword ptr [RAX + 0x6e0]
/* 052861bd */  SUB RSI,RDI
/* 052861c0 */  CALL 0x0412a280
/* 052861c5 */  MOV RDI,qword ptr [RSP + 0x210]
/* 052861cd */  CALL 0x052930f0
/* 052861d2 */  MOV RDI,qword ptr [RSP + 0x218]
/* 052861da */  CALL 0x052931e0
/* 052861df */  MOV RDI,qword ptr [RSP + 0x220]
/* 052861e7 */  CALL 0x052932d0
/* 052861ec */  MOV RDI,qword ptr [RSP + 0x430]
/* 052861f4 */  CALL 0x052933c0
/* 052861f9 */  MOV RDI,qword ptr [RSP + 0x8]
/* 052861fe */  CALL 0x052937e0
/* 05286203 */  LEA RDI,[RSP + 0x610]
/* 0528620b */  CALL 0x0495d8f0
/* 05286210 */  LEA RDI,[RSP + 0x250]
/* 05286218 */  CALL 0x052931e0
/* 0528621d */  JMP 0x0528628f
/* 0528628f */  LEA RDI,[RSP + 0x330]
/* 05286297 */  CALL 0x052930f0
/* 0528629c */  JMP 0x05286361
/* 05286361 */  LEA RDI,[RSP + 0x9e8]
/* 05286369 */  CALL 0x052933c0
/* 0528636e */  LEA RDI,[RSP + 0x510]
/* 05286376 */  CALL 0x052932d0
/* 0528637b */  JMP 0x05286472
/* 0528644b */  LEA RDI,[RSP + 0x330]
/* 05286453 */  CALL 0x049cd290
/* 05286458 */  LEA RDI,[RSP + 0x610]
/* 05286460 */  CALL 0x049cd290
/* 05286465 */  LEA RDI,[RSP + 0x9e8]
/* 0528646d */  CALL 0x049cd290
/* 05286472 */  MOV RDI,qword ptr [RSP + 0x230]
/* 0528647a */  TEST RDI,RDI
/* 0528647d */  JZ 0x05286497
/* 0528647f */  MOV qword ptr [RSP + 0x238],RDI
/* 05286487 */  MOV RSI,qword ptr [RSP + 0x240]
/* 0528648f */  SUB RSI,RDI
/* 05286492 */  CALL 0x0412a280
/* 05286497 */  LEA RDI,[RSP + 0x970]
/* 0528649f */  CALL 0x052937e0
/* 052864a4 */  MOV RDI,qword ptr [RSP + 0x1e0]
/* 052864ac */  TEST RDI,RDI
/* 052864af */  JZ 0x052864c9
/* 052864b1 */  MOV qword ptr [RSP + 0x1e8],RDI
/* 052864b9 */  MOV RSI,qword ptr [RSP + 0x1f0]
/* 052864c1 */  SUB RSI,RDI
/* 052864c4 */  CALL 0x0412a280
/* 052864c9 */  MOV RDI,RBP
/* 052864cc */  CALL 0x0eee2d70
/* 052864d1 */  MOV RBP,RAX
/* 052864d4 */  TEST byte ptr [RSP + 0x250],0x1
/* 052864dc */  JZ 0x0528644b
/* 052864e2 */  MOV RSI,qword ptr [RSP + 0x250]
/* 052864ea */  MOV RDI,qword ptr [RSP + 0x260]
/* 052864f2 */  AND RSI,-0x2
/* 052864f6 */  CALL 0x0412a280
/* 052864fb */  JMP 0x0528644b
