/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5282630 (ELF vaddr 0x5182630)
 * Label: string:minecraft:aquifer
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
  func_0x0d3411f0(&bStack_3b0,&puStack_c38,0xfffffffd,&bStack_788,1);
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
  func_0x0d3411f0(&bStack_788,&puStack_bf8,0xfffffff9,&uStack_a68,1);
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
  func_0x0d3411f0(&uStack_a68,&puStack_ca0,0xfffffffb,&bStack_b48,1);
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
  func_0x0d3411f0(&bStack_b48,&puStack_cc8,0xffffffff,&bStack_d88,1);
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
  func_0x0d3411f0(&bStack_788,&puStack_ca0,0xfffffff8,&bStack_b48,1);
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
  func_0x0d3411f0(&bStack_b48,&puStack_cc8,0xfffffff9,&bStack_d88,1);
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
  func_0x0d3411f0(&bStack_d88,&puStack_8b0,0xfffffff9,&bStack_d08,1);
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
  func_0x0d3411f0(&bStack_d08,&puStack_8d8,0xfffffffb,&bStack_d48,1);
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
  func_0x0d3411f0(&bStack_788,&puStack_c78,0xfffffff8,&bStack_d88,1);
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
  func_0x0d3411f0(&bStack_d88,&puStack_c38,0xfffffff8,&bStack_d08,1);
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
  func_0x0d3411f0(&bStack_d08,&puStack_bf8,0xfffffff9,&bStack_d48,1);
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
  func_0x0d3411f0(&bStack_d48,&puStack_ca0,0xfffffff9,&puStack_cc8,1);
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
    memcpy(lVar14,lVar2,lVar19);
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
      FUN_0495d8f0(&bStack_788);
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
    memcpy(lVar14,lVar2,lVar19);
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
  FUN_0495d8f0(&bStack_788);
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
