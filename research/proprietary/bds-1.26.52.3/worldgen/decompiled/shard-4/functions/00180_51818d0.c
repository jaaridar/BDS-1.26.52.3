/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x52818d0 (ELF vaddr 0x51818d0)
 * Label: caller-of-callee
 * Body:  [[052818d0, 05282448] [05282505, 05282511] [052825b8, 05285ceb] [05286162, 05286196] [0528619a, 0528621e] [0528628f, 052862a0] [05286361, 0528637f] [0528644b, 052864ff]]
 * Ghidra: FUN_052818d0
 */


/* WARNING: Possible PIC construction at 0x05281bad: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x05281bb2) */
/* WARNING: Removing unreachable block (ram,0x05281bbf) */
/* WARNING: Removing unreachable block (ram,0x05281bd7) */
/* WARNING: Removing unreachable block (ram,0x05281bed) */
/* WARNING: Removing unreachable block (ram,0x05281bf9) */
/* WARNING: Removing unreachable block (ram,0x05281c0f) */
/* WARNING: Removing unreachable block (ram,0x05281c4b) */
/* WARNING: Removing unreachable block (ram,0x05281c61) */
/* WARNING: Removing unreachable block (ram,0x05281c6d) */
/* WARNING: Removing unreachable block (ram,0x05281c83) */
/* WARNING: Removing unreachable block (ram,0x05281c8f) */
/* WARNING: Removing unreachable block (ram,0x05281ca5) */
/* WARNING: Removing unreachable block (ram,0x05281cac) */
/* WARNING: Removing unreachable block (ram,0x05281e82) */
/* WARNING: Removing unreachable block (ram,0x05282419) */
/* WARNING: Removing unreachable block (ram,0x05281e96) */
/* WARNING: Removing unreachable block (ram,0x052823fb) */
/* WARNING: Removing unreachable block (ram,0x05281eb6) */
/* WARNING: Removing unreachable block (ram,0x05281efd) */
/* WARNING: Removing unreachable block (ram,0x05281f4e) */
/* WARNING: Removing unreachable block (ram,0x0528241e) */
/* WARNING: Removing unreachable block (ram,0x0528242f) */
/* WARNING: Removing unreachable block (ram,0x0528243f) */
/* WARNING: Removing unreachable block (ram,0x05282505) */
/* WARNING: Removing unreachable block (ram,0x052825b8) */
/* WARNING: Removing unreachable block (ram,0x052825f2) */
/* WARNING: Removing unreachable block (ram,0x052825fc) */
/* WARNING: Removing unreachable block (ram,0x05282610) */
/* WARNING: Removing unreachable block (ram,0x05282616) */
/* WARNING: Removing unreachable block (ram,0x05281f62) */
/* WARNING: Removing unreachable block (ram,0x0528240a) */
/* WARNING: Removing unreachable block (ram,0x05281f82) */
/* WARNING: Removing unreachable block (ram,0x05281fb2) */
/* WARNING: Removing unreachable block (ram,0x05282037) */
/* WARNING: Removing unreachable block (ram,0x0528204f) */
/* WARNING: Removing unreachable block (ram,0x05282061) */
/* WARNING: Removing unreachable block (ram,0x05282079) */
/* WARNING: Removing unreachable block (ram,0x052820b0) */
/* WARNING: Removing unreachable block (ram,0x052820c8) */
/* WARNING: Removing unreachable block (ram,0x052820d5) */
/* WARNING: Removing unreachable block (ram,0x052820ed) */
/* WARNING: Removing unreachable block (ram,0x052820fa) */
/* WARNING: Removing unreachable block (ram,0x05282112) */
/* WARNING: Removing unreachable block (ram,0x0528213f) */
/* WARNING: Removing unreachable block (ram,0x0528214a) */
/* WARNING: Removing unreachable block (ram,0x05282156) */
/* WARNING: Removing unreachable block (ram,0x05282163) */
/* WARNING: Removing unreachable block (ram,0x05282151) */
/* WARNING: Removing unreachable block (ram,0x05282167) */
/* WARNING: Removing unreachable block (ram,0x05282177) */
/* WARNING: Removing unreachable block (ram,0x0528217b) */
/* WARNING: Removing unreachable block (ram,0x052821d3) */
/* WARNING: Removing unreachable block (ram,0x052821d9) */
/* WARNING: Removing unreachable block (ram,0x052823d9) */
/* WARNING: Removing unreachable block (ram,0x05282206) */
/* WARNING: Removing unreachable block (ram,0x0528223e) */
/* WARNING: Removing unreachable block (ram,0x05282248) */
/* WARNING: Removing unreachable block (ram,0x052822b0) */
/* WARNING: Removing unreachable block (ram,0x052822f8) */
/* WARNING: Removing unreachable block (ram,0x05282320) */
/* WARNING: Removing unreachable block (ram,0x0528232e) */
/* WARNING: Removing unreachable block (ram,0x052823ea) */
/* WARNING: Removing unreachable block (ram,0x05282350) */
/* WARNING: Removing unreachable block (ram,0x05282390) */
/* WARNING: Removing unreachable block (ram,0x05282399) */
/* WARNING: Removing unreachable block (ram,0x052823a9) */
/* WARNING: Removing unreachable block (ram,0x052823b6) */
/* WARNING: Removing unreachable block (ram,0x052822d5) */
/* WARNING: Removing unreachable block (ram,0x052833e9) */
/* WARNING: Removing unreachable block (ram,0x05283e94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_052818d0(undefined8 *param_1,long param_2,ulong param_3,undefined8 param_4)

{
  long *plVar1;
  undefined2 uVar2;
  ushort uVar3;
  undefined4 uVar4;
  uint5 uVar5;
  uint5 uVar6;
  uint6 uVar7;
  uint7 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  long lVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined5 *puVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  long *in_FS_OFFSET;
  byte bStack_18d8;
  undefined4 uStack_18d7;
  uint3 uStack_18d3;
  byte bStack_18d0;
  undefined4 uStack_18cf;
  uint3 uStack_18cb;
  undefined1 uStack_18c8;
  undefined2 uStack_18c7;
  undefined2 uStack_18c5;
  undefined1 uStack_18c3;
  undefined2 uStack_18c2;
  long lStack_18c0;
  long lStack_18b8;
  long lStack_18b0;
  byte bStack_1898;
  undefined5 uStack_1897;
  ushort uStack_1892;
  uint uStack_1890;
  undefined2 uStack_188c;
  undefined1 uStack_188a;
  byte bStack_1889;
  undefined5 *puStack_1888;
  long lStack_1880;
  long lStack_1878;
  long lStack_1870;
  byte bStack_1858;
  undefined4 uStack_1857;
  uint3 uStack_1853;
  byte bStack_1850;
  undefined4 uStack_184f;
  uint3 uStack_184b;
  undefined1 uStack_1848;
  undefined2 uStack_1847;
  undefined5 uStack_1845;
  long lStack_1840;
  long lStack_1838;
  long lStack_1830;
  undefined4 *puStack_1818;
  undefined4 *puStack_1810;
  undefined4 *puStack_1808;
  undefined8 uStack_1800;
  undefined1 uStack_17f8;
  undefined *puStack_17f0;
  ulong uStack_17e8;
  ulong uStack_17e0;
  undefined8 uStack_17d8;
  undefined1 uStack_17d0;
  undefined *puStack_17c8;
  ulong uStack_17c0;
  ulong uStack_17b8;
  undefined8 uStack_17b0;
  undefined8 uStack_17a8;
  undefined8 uStack_17a0;
  undefined *puStack_1788;
  ulong uStack_1780;
  ulong uStack_1778;
  undefined8 uStack_1770;
  ulong uStack_1768;
  undefined8 uStack_1760;
  undefined *puStack_1748;
  ulong uStack_1740;
  ulong uStack_1738;
  undefined8 uStack_1730;
  undefined8 uStack_1728;
  undefined8 uStack_1720;
  undefined4 auStack_1710 [2];
  long lStack_1708;
  long lStack_1700;
  long lStack_16f8;
  undefined4 uStack_16f0;
  long *plStack_16e8;
  long *plStack_16e0;
  undefined1 *puStack_16d8;
  undefined1 *puStack_16d0;
  undefined1 *puStack_16c8;
  undefined4 auStack_16c0 [2];
  long lStack_16b8;
  long lStack_16b0;
  long lStack_16a8;
  undefined4 uStack_16a0;
  byte bStack_1698;
  undefined4 uStack_1697;
  uint3 uStack_1693;
  byte bStack_1690;
  undefined4 uStack_168f;
  undefined2 uStack_168b;
  byte bStack_1689;
  undefined1 uStack_1688;
  undefined4 uStack_1687;
  undefined1 uStack_1683;
  undefined1 uStack_1682;
  undefined1 uStack_1681;
  long lStack_1680;
  long lStack_1678;
  long lStack_1670;
  undefined1 auStack_1660 [56];
  undefined1 auStack_1628 [56];
  undefined1 auStack_15f0 [56];
  undefined8 uStack_15b8;
  undefined4 *puStack_15b0;
  undefined5 *puStack_15a8;
  long lStack_15a0;
  long lStack_1598;
  long lStack_1590;
  undefined *puStack_1580;
  ulong uStack_1578;
  undefined8 uStack_1570;
  undefined8 uStack_1568;
  undefined8 uStack_1560;
  undefined8 uStack_1558;
  undefined *puStack_1548;
  ulong uStack_1540;
  ulong uStack_1538;
  undefined8 uStack_1530;
  ulong uStack_1528;
  undefined *puStack_1510;
  ulong uStack_1508;
  ulong uStack_1500;
  undefined4 uStack_14f8;
  undefined4 uStack_14f4;
  undefined4 uStack_14f0;
  undefined4 uStack_14ec;
  undefined *puStack_14d8;
  undefined8 uStack_14d0;
  undefined8 uStack_14c8;
  undefined1 *puStack_14b8;
  ulong uStack_14b0;
  undefined8 uStack_14a8;
  undefined *puStack_14a0;
  ulong uStack_1498;
  ulong uStack_1490;
  undefined8 uStack_1488;
  undefined1 uStack_1480;
  undefined *puStack_1478;
  ulong uStack_1470;
  ulong uStack_1468;
  undefined8 uStack_1460;
  undefined1 uStack_1458;
  undefined *puStack_1450;
  ulong uStack_1448;
  ulong uStack_1440;
  undefined8 uStack_1438;
  undefined1 uStack_1430;
  undefined *puStack_1428;
  ulong uStack_1420;
  ulong uStack_1418;
  undefined8 uStack_1410;
  undefined1 uStack_1408;
  undefined *puStack_1400;
  ulong uStack_13f8;
  ulong uStack_13f0;
  undefined8 uStack_13e8;
  undefined1 uStack_13e0;
  undefined8 uStack_13d8;
  undefined8 uStack_13d0;
  undefined8 uStack_13c8;
  undefined8 uStack_13a0;
  undefined8 uStack_1398;
  undefined8 uStack_1390;
  undefined1 auStack_1368 [56];
  undefined1 auStack_1330 [24];
  undefined4 uStack_1318;
  undefined4 uStack_1314;
  undefined4 uStack_1310;
  undefined4 uStack_130c;
  undefined *puStack_12f8;
  undefined8 uStack_12f0;
  undefined8 uStack_12e8;
  byte bStack_12d8;
  undefined4 uStack_12d7;
  uint3 uStack_12d3;
  byte bStack_12d0;
  undefined4 uStack_12cf;
  uint3 uStack_12cb;
  undefined1 uStack_12c8;
  undefined1 uStack_12c7;
  undefined6 uStack_12c6;
  long lStack_12c0;
  long lStack_12b8;
  long lStack_12b0;
  undefined1 auStack_f78 [8];
  long lStack_f70;
  long lStack_f68;
  long lStack_f60;
  long lStack_f48;
  long lStack_f40;
  long lStack_f38;
  long lStack_f20;
  long lStack_f18;
  long lStack_f10;
  byte bStack_f00;
  undefined4 uStack_eff;
  undefined4 uStack_efb;
  undefined4 uStack_ef7;
  undefined4 uStack_ef3;
  undefined2 uStack_eef;
  undefined1 uStack_eed;
  undefined4 uStack_eec;
  long lStack_ee8;
  long lStack_ee0;
  long lStack_ed8;
  undefined8 *puStack_b80;
  long lStack_b78;
  ulong uStack_b70;
  long lStack_b68;
  ulong uStack_b60;
  ulong uStack_b58;
  undefined8 uStack_b50;
  undefined8 *puStack_b40;
  undefined8 *puStack_b10;
  undefined8 *puStack_b08;
  long *plStack_af8;
  undefined8 uStack_ae8;
  long lStack_ae0;
  undefined *puStack_ad8;
  ulong uStack_ad0;
  ulong uStack_ac8;
  undefined1 auStack_ac0 [120];
  undefined1 auStack_a48 [896];
  undefined1 auStack_6c8 [56];
  undefined1 auStack_690 [56];
  undefined1 auStack_658 [56];
  undefined1 auStack_620 [56];
  undefined *puStack_5e8;
  undefined4 uStack_5e0;
  undefined4 uStack_5dc;
  undefined4 uStack_5d8;
  undefined4 uStack_5d4;
  undefined1 auStack_5d0 [56];
  undefined1 auStack_598 [56];
  undefined1 auStack_560 [56];
  undefined1 auStack_528 [56];
  undefined1 auStack_4f0 [56];
  undefined1 auStack_4b8 [56];
  undefined1 auStack_480 [56];
  undefined1 auStack_448 [56];
  undefined *puStack_410;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  long lStack_3f0;
  long lStack_3e8;
  long lStack_3e0;
  undefined4 uStack_3d8;
  undefined4 uStack_3d0;
  long lStack_3c8;
  long lStack_3c0;
  long lStack_3b8;
  undefined4 uStack_3b0;
  undefined1 auStack_3a8 [856];
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  uStack_b50 = 0x52818f4;
  uStack_ae8 = param_4;
  func_0x0ca70a10();
  *param_1 = &UNK_0ef9d2a0;
  param_1[0xe] = &UNK_0ef9d4b8;
  *(undefined8 *)((long)param_1 + 0x10c) = 0;
  *(undefined8 *)((long)param_1 + 0x114) = 0;
  *(undefined8 *)((long)param_1 + 0x11c) = 0;
  *(undefined8 *)((long)param_1 + 0x124) = 0;
  *(undefined8 *)((long)param_1 + 0x129) = 0;
  param_1[0x28] = &UNK_0ef9fac0;
  param_1[0x2c] = param_1 + 0x28;
  param_1[0x2e] = param_1 + 0x2e;
  param_1[0x2f] = param_1 + 0x2e;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  uStack_b50 = 0x528197b;
  func_0x0eee1090(param_1 + 0x35);
  *(undefined2 *)(param_1 + 0x37) = 0x101;
  param_1[0x38] = _DAT_0f6b3a90;
  param_1[0x39] = 0;
  param_1[0x36] = &UNK_0efa0358;
  uVar2 = *(undefined2 *)(param_2 + 0xac);
  param_1[0x3a] = &UNK_0ef54b08;
  *(undefined2 *)(param_1 + 0x3b) = uVar2;
  *(undefined1 *)((long)param_1 + 0x1da) = 1;
  *(undefined2 *)(param_1 + 0x3d) = uVar2;
  param_1[0x3c] = &UNK_0ef56ac0;
  *(undefined1 *)((long)param_1 + 0x1ea) = 0;
  *param_1 = &UNK_0ef9d720;
  param_1[0xe] = &UNK_0ef9d938;
  puStack_b40 = param_1 + 0x3e;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  *(undefined1 *)(param_1 + 400) = 0;
  puStack_b08 = param_1 + 0x191;
  puStack_b10 = param_1 + 0x193;
  plVar1 = param_1 + 0x195;
  param_1[0x191] = 0;
  param_1[0x192] = 0;
  param_1[0x193] = 0;
  param_1[0x194] = 0;
  param_1[0x195] = 0;
  uStack_b50 = 0x5281a6a;
  plStack_af8 = plVar1;
  uVar11 = (**(code **)(**(long **)(param_2 + 0xa0) + 0x9f0))();
  uVar3 = *(ushort *)(param_2 + 0xa8);
  uStack_b50 = 0x5281a8f;
  lStack_ae0 = param_2;
  lVar12 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (lVar12 == 0) {
    uStack_b50 = 0x52823d4;
    func_0x0eec74c0(0xd0,0);
  }
  uStack_b50 = 0x5281aab;
  func_0x0525ab40(lVar12,(char)uVar11,(int)(short)uVar3);
  lStack_b78 = *plVar1;
  *plVar1 = lVar12;
  if (lStack_b78 != 0) {
    uStack_b50 = 0x5281ac2;
    func_0x049db610(lStack_b78);
    uStack_b50 = 0x5281acf;
    func_0x0412a280(lStack_b78,0xd0);
  }
  uVar19 = param_3 ^ 0x6a09e667f3bcc909;
  uVar18 = (uVar19 >> 0x1e ^ uVar19) * -0x40a7b892e31b1a47;
  uVar21 = (uVar18 >> 0x1b ^ uVar18) * -0x6b2fb644ecceee15;
  uVar21 = uVar21 >> 0x1f ^ uVar21;
  uVar18 = (uVar19 + 0x9e3779b97f4a7c15 >> 0x1e ^ uVar19 + 0x9e3779b97f4a7c15) * -0x40a7b892e31b1a47
  ;
  uVar18 = (uVar18 >> 0x1b ^ uVar18) * -0x6b2fb644ecceee15;
  uVar18 = uVar18 >> 0x1f ^ uVar18;
  if (uVar18 == 0 && uVar21 == 0) {
    uVar18 = 0x6a09e667f3bcc909;
    uVar21 = 0x9e3779b97f4a7c15;
  }
  uStack_ad0 = ((uVar18 + uVar21) * 0x20000 | uVar18 + uVar21 >> 0x2f) + uVar21;
  uVar18 = uVar18 ^ uVar21;
  uStack_ac8 = uVar18 << 0x15 ^ (uVar21 << 0x31 | uVar21 >> 0xf) ^ uVar18;
  uVar18 = (uVar18 << 0x1c | uVar18 >> 0x24) + uStack_ac8;
  uStack_ac8 = (uVar18 * 0x20000 | uVar18 >> 0x2f) + uStack_ac8;
  puStack_ad8 = &UNK_0ef51388;
  uStack_b50 = 0x5281bb2;
  bStack_f00 = 0x24;
  uStack_eff = _DAT_0149570e;
  uStack_efb = _UNK_01495712;
  uStack_ef7 = _UNK_01495716;
  uStack_ef3 = _UNK_0149571a;
  uStack_eef = 0x676e;
  uStack_eed = 0;
  lVar22 = *in_FS_OFFSET;
  if (*(char *)(lVar22 + -0x16b0) == '\0') {
    *(undefined1 *)(lVar22 + -0x16b0) = 1;
    *(undefined **)(lVar22 + -0x1750) = &UNK_0f53bd88;
    *(undefined8 *)(lVar22 + -0x1738) = 0x1032547698badcfe;
    uVar17 = _UNK_014e11d8;
    *(undefined8 *)(lVar22 + -0x1748) = _DAT_014e11d0;
    *(undefined8 *)(lVar22 + -0x1740) = uVar17;
    *(undefined8 *)(lVar22 + -0x1730) = 0;
    *(undefined8 *)(lVar22 + -0x1728) = 0;
    *(undefined8 *)(lVar22 + -0x1720) = 0;
    *(undefined8 *)(lVar22 + -0x1718) = 0;
    *(undefined8 *)(lVar22 + -0x1710) = 0;
    *(undefined8 *)(lVar22 + -0x1708) = 0;
    *(undefined8 *)(lVar22 + -0x1700) = 0;
    *(undefined8 *)(lVar22 + -0x16f8) = 0;
    *(undefined8 *)(lVar22 + -0x16f0) = 0;
    *(undefined8 *)(lVar22 + -0x16e8) = 0;
    *(undefined8 *)(lVar22 + -0x16e0) = 0;
    *(undefined8 *)(lVar22 + -0x16d8) = 0;
    *(undefined8 *)(lVar22 + -0x16d0) = 0;
    *(undefined8 *)(lVar22 + -0x16c8) = 0;
    *(undefined8 *)(lVar22 + -0x16c0) = 0;
    *(undefined8 *)(lVar22 + -0x16b8) = 0;
  }
  plVar1 = (long *)(lVar22 + -0x1750);
  puStack_b80 = param_1;
  uStack_b70 = param_3;
  lStack_b68 = lVar12;
  uStack_b60 = (ulong)uVar3;
  uStack_b58 = (ulong)uVar11;
  (**(code **)(*(long *)(lVar22 + -0x1750) + 0x10))(plVar1);
  if ((bStack_f00 & 1) == 0) {
    puVar13 = &uStack_eff;
    uVar11 = (uint)(bStack_f00 >> 1);
  }
  else {
    puVar13 = (undefined4 *)
              CONCAT44(uStack_eec,CONCAT13(uStack_eed,CONCAT21(uStack_eef,uStack_ef3._3_1_)));
    uVar11 = CONCAT31((undefined3)uStack_ef7,uStack_efb._3_1_);
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,puVar13,uVar11);
  (**(code **)(*plVar1 + 0x20))(plVar1,&bStack_12d8);
  uVar5 = CONCAT41(uStack_12d7,bStack_12d8);
  uVar6 = CONCAT41(uStack_12cf,bStack_12d0);
  uStack_1448 = ((ulong)(uStack_12d3 >> 0x10) | (ulong)uStack_12d3 & 0xff00 |
                 ((ulong)uStack_12d3 & 0xff) << 0x10 | ((ulong)uVar5 & 0xff00000000) >> 8 |
                 ((ulong)uVar5 & 0xff000000) << 8 | ((ulong)uVar5 & 0xff0000) << 0x18 |
                 ((ulong)uVar5 & 0xff00) << 0x28 | CONCAT35(uStack_12d3,uVar5) << 0x38) ^ uStack_ad0
  ;
  uStack_1440 = ((ulong)(uStack_12cb >> 0x10) | (ulong)uStack_12cb & 0xff00 |
                 ((ulong)uStack_12cb & 0xff) << 0x10 | ((ulong)uVar6 & 0xff00000000) >> 8 |
                 ((ulong)uVar6 & 0xff000000) << 8 | ((ulong)uVar6 & 0xff0000) << 0x18 |
                 ((ulong)uVar6 & 0xff00) << 0x28 | CONCAT35(uStack_12cb,uVar6) << 0x38) ^ uStack_ac8
  ;
  puStack_1450 = &UNK_0ef512d0;
  if (uStack_1440 == 0 && uStack_1448 == 0) {
    uStack_1448 = 0x9e3779b97f4a7c15;
    uStack_1440 = 0x6a09e667f3bcc909;
  }
  uStack_1430 = 0;
  uStack_1438 = 0;
  if ((bStack_f00 & 1) != 0) {
    uStack_1430 = 0;
    uStack_1438 = 0;
    func_0x0412a280(CONCAT44(uStack_eec,CONCAT13(uStack_eed,CONCAT21(uStack_eef,uStack_ef3._3_1_))),
                    CONCAT35((undefined3)uStack_efb,CONCAT41(uStack_eff,bStack_f00)) &
                    0xfffffffffffffffe);
  }
  auStack_1710[0] = 8;
  lStack_1708 = 0;
  lStack_1700 = 0;
  lStack_16f8 = 0;
  func_0x0d3430a0(auStack_1710,&puStack_1450,0);
  bStack_f00 = 0x22;
  uStack_eff = _DAT_013f9e45;
  uStack_efb = _UNK_013f9e49;
  uStack_ef7 = _UNK_013f9e4d;
  uStack_ef3 = _UNK_013f9e51;
  uStack_eef = 0x6e;
  if (*(char *)(lVar22 + -0x16b0) == '\0') {
    *(undefined1 *)(lVar22 + -0x16b0) = 1;
    *(undefined **)(lVar22 + -0x1750) = &UNK_0f53bd88;
    *(undefined8 *)(lVar22 + -0x1738) = 0x1032547698badcfe;
    uVar17 = _UNK_014e11d8;
    *(undefined8 *)(lVar22 + -0x1748) = _DAT_014e11d0;
    *(undefined8 *)(lVar22 + -0x1740) = uVar17;
    *(undefined8 *)(lVar22 + -0x1730) = 0;
    *(undefined8 *)(lVar22 + -0x1728) = 0;
    *(undefined8 *)(lVar22 + -0x1720) = 0;
    *(undefined8 *)(lVar22 + -0x1718) = 0;
    *(undefined8 *)(lVar22 + -0x1710) = 0;
    *(undefined8 *)(lVar22 + -0x1708) = 0;
    *(undefined8 *)(lVar22 + -0x1700) = 0;
    *(undefined8 *)(lVar22 + -0x16f8) = 0;
    *(undefined8 *)(lVar22 + -0x16f0) = 0;
    *(undefined8 *)(lVar22 + -0x16e8) = 0;
    *(undefined8 *)(lVar22 + -0x16e0) = 0;
    *(undefined8 *)(lVar22 + -0x16d8) = 0;
    *(undefined8 *)(lVar22 + -0x16d0) = 0;
    *(undefined8 *)(lVar22 + -0x16c8) = 0;
    *(undefined8 *)(lVar22 + -0x16c0) = 0;
    *(undefined8 *)(lVar22 + -0x16b8) = 0;
  }
  (**(code **)(*plVar1 + 0x10))(plVar1);
  if ((bStack_f00 & 1) == 0) {
    puVar13 = &uStack_eff;
    uVar11 = (uint)(bStack_f00 >> 1);
  }
  else {
    puVar13 = (undefined4 *)
              CONCAT44(uStack_eec,CONCAT13(uStack_eed,CONCAT21(uStack_eef,uStack_ef3._3_1_)));
    uVar11 = CONCAT31((undefined3)uStack_ef7,uStack_efb._3_1_);
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,puVar13,uVar11);
  (**(code **)(*plVar1 + 0x20))(plVar1,&bStack_12d8);
  uVar5 = CONCAT41(uStack_12d7,bStack_12d8);
  uVar6 = CONCAT41(uStack_12cf,bStack_12d0);
  uStack_1470 = ((ulong)(uStack_12d3 >> 0x10) | (ulong)uStack_12d3 & 0xff00 |
                 ((ulong)uStack_12d3 & 0xff) << 0x10 | ((ulong)uVar5 & 0xff00000000) >> 8 |
                 ((ulong)uVar5 & 0xff000000) << 8 | ((ulong)uVar5 & 0xff0000) << 0x18 |
                 ((ulong)uVar5 & 0xff00) << 0x28 | CONCAT35(uStack_12d3,uVar5) << 0x38) ^ uStack_ad0
  ;
  uStack_1468 = ((ulong)(uStack_12cb >> 0x10) | (ulong)uStack_12cb & 0xff00 |
                 ((ulong)uStack_12cb & 0xff) << 0x10 | ((ulong)uVar6 & 0xff00000000) >> 8 |
                 ((ulong)uVar6 & 0xff000000) << 8 | ((ulong)uVar6 & 0xff0000) << 0x18 |
                 ((ulong)uVar6 & 0xff00) << 0x28 | CONCAT35(uStack_12cb,uVar6) << 0x38) ^ uStack_ac8
  ;
  puStack_1478 = &UNK_0ef512d0;
  if (uStack_1468 == 0 && uStack_1470 == 0) {
    uStack_1470 = 0x9e3779b97f4a7c15;
    uStack_1468 = 0x6a09e667f3bcc909;
  }
  uStack_1458 = 0;
  uStack_1460 = 0;
  if ((bStack_f00 & 1) != 0) {
    uStack_1458 = 0;
    uStack_1460 = 0;
    func_0x0412a280(CONCAT44(uStack_eec,CONCAT13(uStack_eed,CONCAT21(uStack_eef,uStack_ef3._3_1_))),
                    CONCAT35((undefined3)uStack_efb,CONCAT41(uStack_eff,bStack_f00)) &
                    0xfffffffffffffffe);
  }
  uStack_efb._3_1_ = (byte)&puStack_1478;
  uStack_ef7 = (undefined4)((ulong)&puStack_1478 >> 8);
  uStack_ef3._0_3_ = (undefined3)((ulong)&puStack_1478 >> 0x28);
  bStack_f00 = 0x48;
  uStack_eff = 0xf460b;
  uStack_efb = (uint)uStack_efb._3_1_ << 0x18;
  func_0x0d33fc30(auStack_f78,&bStack_f00);
  bStack_f00 = 0x22;
  uStack_eff = _DAT_0127248d;
  uStack_efb = _UNK_01272491;
  uStack_ef7 = _UNK_01272495;
  uStack_ef3 = _UNK_01272499;
  uStack_eef = 0x65;
  if (*(char *)(lVar22 + -0x16b0) == '\0') {
    *(undefined1 *)(lVar22 + -0x16b0) = 1;
    *(undefined **)(lVar22 + -0x1750) = &UNK_0f53bd88;
    *(undefined8 *)(lVar22 + -0x1738) = 0x1032547698badcfe;
    uVar17 = _UNK_014e11d8;
    *(undefined8 *)(lVar22 + -0x1748) = _DAT_014e11d0;
    *(undefined8 *)(lVar22 + -0x1740) = uVar17;
    *(undefined8 *)(lVar22 + -0x1730) = 0;
    *(undefined8 *)(lVar22 + -0x1728) = 0;
    *(undefined8 *)(lVar22 + -0x1720) = 0;
    *(undefined8 *)(lVar22 + -0x1718) = 0;
    *(undefined8 *)(lVar22 + -0x1710) = 0;
    *(undefined8 *)(lVar22 + -0x1708) = 0;
    *(undefined8 *)(lVar22 + -0x1700) = 0;
    *(undefined8 *)(lVar22 + -0x16f8) = 0;
    *(undefined8 *)(lVar22 + -0x16f0) = 0;
    *(undefined8 *)(lVar22 + -0x16e8) = 0;
    *(undefined8 *)(lVar22 + -0x16e0) = 0;
    *(undefined8 *)(lVar22 + -0x16d8) = 0;
    *(undefined8 *)(lVar22 + -0x16d0) = 0;
    *(undefined8 *)(lVar22 + -0x16c8) = 0;
    *(undefined8 *)(lVar22 + -0x16c0) = 0;
    *(undefined8 *)(lVar22 + -0x16b8) = 0;
  }
  (**(code **)(*plVar1 + 0x10))(plVar1);
  if ((bStack_f00 & 1) == 0) {
    puVar13 = &uStack_eff;
    uVar11 = (uint)(bStack_f00 >> 1);
  }
  else {
    puVar13 = (undefined4 *)
              CONCAT44(uStack_eec,CONCAT13(uStack_eed,CONCAT21(uStack_eef,uStack_ef3._3_1_)));
    uVar11 = CONCAT31((undefined3)uStack_ef7,uStack_efb._3_1_);
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,puVar13,uVar11);
  (**(code **)(*plVar1 + 0x20))(plVar1,&bStack_12d8);
  uVar5 = CONCAT41(uStack_12d7,bStack_12d8);
  uVar6 = CONCAT41(uStack_12cf,bStack_12d0);
  uStack_1498 = ((ulong)(uStack_12d3 >> 0x10) | (ulong)uStack_12d3 & 0xff00 |
                 ((ulong)uStack_12d3 & 0xff) << 0x10 | ((ulong)uVar5 & 0xff00000000) >> 8 |
                 ((ulong)uVar5 & 0xff000000) << 8 | ((ulong)uVar5 & 0xff0000) << 0x18 |
                 ((ulong)uVar5 & 0xff00) << 0x28 | CONCAT35(uStack_12d3,uVar5) << 0x38) ^ uStack_ad0
  ;
  uStack_1490 = ((ulong)(uStack_12cb >> 0x10) | (ulong)uStack_12cb & 0xff00 |
                 ((ulong)uStack_12cb & 0xff) << 0x10 | ((ulong)uVar6 & 0xff00000000) >> 8 |
                 ((ulong)uVar6 & 0xff000000) << 8 | ((ulong)uVar6 & 0xff0000) << 0x18 |
                 ((ulong)uVar6 & 0xff00) << 0x28 | CONCAT35(uStack_12cb,uVar6) << 0x38) ^ uStack_ac8
  ;
  puStack_14a0 = &UNK_0ef512d0;
  if (uStack_1490 == 0 && uStack_1498 == 0) {
    uStack_1498 = 0x9e3779b97f4a7c15;
    uStack_1490 = 0x6a09e667f3bcc909;
  }
  uStack_1480 = 0;
  uStack_1488 = 0;
  if ((bStack_f00 & 1) != 0) {
    uStack_1480 = 0;
    uStack_1488 = 0;
    func_0x0412a280(CONCAT44(uStack_eec,CONCAT13(uStack_eed,CONCAT21(uStack_eef,uStack_ef3._3_1_))),
                    CONCAT35((undefined3)uStack_efb,CONCAT41(uStack_eff,bStack_f00)) &
                    0xfffffffffffffffe);
  }
  auStack_16c0[0] = 4;
  lStack_16b8 = 0;
  lStack_16b0 = 0;
  lStack_16a8 = 0;
  func_0x0d3430a0(auStack_16c0,&puStack_14a0,1);
  puVar13 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar13 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar17 = _UNK_0135c409;
  uStack_ef3._3_1_ = SUB81(puVar13,0);
  uStack_eef = (undefined2)((ulong)puVar13 >> 8);
  uStack_eed = (undefined1)((ulong)puVar13 >> 0x18);
  uStack_eec = (undefined4)((ulong)puVar13 >> 0x20);
  bStack_f00 = 0x21;
  uStack_eff = 0;
  uStack_efb._0_3_ = 0;
  uStack_efb._3_1_ = 0x19;
  uStack_ef7 = 0;
  uStack_ef3._0_3_ = 0;
  *(ulong *)((long)puVar13 + 9) = CONCAT17(UNK_0135c408,CONCAT43(_UNK_0135c404,_DAT_0135c401));
  *(undefined8 *)((long)puVar13 + 0x11) = uVar17;
  uVar10 = _UNK_0135c404;
  uVar9 = _UNK_0135c400;
  uVar4 = _UNK_0135c3fc;
  *puVar13 = _DAT_0135c3f8;
  puVar13[1] = uVar4;
  puVar13[2] = uVar9;
  puVar13[3] = uVar10;
  *(undefined1 *)((long)puVar13 + 0x19) = 0;
  if (*(char *)(lVar22 + -0x16b0) == '\0') {
    *(undefined1 *)(lVar22 + -0x16b0) = 1;
    *(undefined **)(lVar22 + -0x1750) = &UNK_0f53bd88;
    *(undefined8 *)(lVar22 + -0x1738) = 0x1032547698badcfe;
    uVar17 = _UNK_014e11d8;
    *(undefined8 *)(lVar22 + -0x1748) = _DAT_014e11d0;
    *(undefined8 *)(lVar22 + -0x1740) = uVar17;
    *(undefined8 *)(lVar22 + -0x1730) = 0;
    *(undefined8 *)(lVar22 + -0x1728) = 0;
    *(undefined8 *)(lVar22 + -0x1720) = 0;
    *(undefined8 *)(lVar22 + -0x1718) = 0;
    *(undefined8 *)(lVar22 + -0x1710) = 0;
    *(undefined8 *)(lVar22 + -0x1708) = 0;
    *(undefined8 *)(lVar22 + -0x1700) = 0;
    *(undefined8 *)(lVar22 + -0x16f8) = 0;
    *(undefined8 *)(lVar22 + -0x16f0) = 0;
    *(undefined8 *)(lVar22 + -0x16e8) = 0;
    *(undefined8 *)(lVar22 + -0x16e0) = 0;
    *(undefined8 *)(lVar22 + -0x16d8) = 0;
    *(undefined8 *)(lVar22 + -0x16d0) = 0;
    *(undefined8 *)(lVar22 + -0x16c8) = 0;
    *(undefined8 *)(lVar22 + -0x16c0) = 0;
    *(undefined8 *)(lVar22 + -0x16b8) = 0;
  }
  (**(code **)(*plVar1 + 0x10))(plVar1);
  if ((bStack_f00 & 1) == 0) {
    uVar11 = (uint)(bStack_f00 >> 1);
    puVar13 = &uStack_eff;
  }
  else {
    puVar13 = (undefined4 *)
              CONCAT44(uStack_eec,CONCAT13(uStack_eed,CONCAT21(uStack_eef,uStack_ef3._3_1_)));
    uVar11 = CONCAT31((undefined3)uStack_ef7,uStack_efb._3_1_);
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,puVar13,uVar11);
  (**(code **)(*plVar1 + 0x20))(plVar1,&bStack_12d8);
  uVar5 = CONCAT41(uStack_12d7,bStack_12d8);
  uVar6 = CONCAT41(uStack_12cf,bStack_12d0);
  uStack_1780 = ((ulong)(uStack_12d3 >> 0x10) | (ulong)uStack_12d3 & 0xff00 |
                 ((ulong)uStack_12d3 & 0xff) << 0x10 | ((ulong)uVar5 & 0xff00000000) >> 8 |
                 ((ulong)uVar5 & 0xff000000) << 8 | ((ulong)uVar5 & 0xff0000) << 0x18 |
                 ((ulong)uVar5 & 0xff00) << 0x28 | CONCAT35(uStack_12d3,uVar5) << 0x38) ^ uStack_ad0
  ;
  uStack_1778 = ((ulong)(uStack_12cb >> 0x10) | (ulong)uStack_12cb & 0xff00 |
                 ((ulong)uStack_12cb & 0xff) << 0x10 | ((ulong)uVar6 & 0xff00000000) >> 8 |
                 ((ulong)uVar6 & 0xff000000) << 8 | ((ulong)uVar6 & 0xff0000) << 0x18 |
                 ((ulong)uVar6 & 0xff00) << 0x28 | CONCAT35(uStack_12cb,uVar6) << 0x38) ^ uStack_ac8
  ;
  puStack_1788 = &UNK_0ef512d0;
  if (uStack_1778 == 0 && uStack_1780 == 0) {
    uStack_1780 = 0x9e3779b97f4a7c15;
    uStack_1778 = 0x6a09e667f3bcc909;
  }
  uStack_1768 = uStack_1768 & 0xffffffffffffff00;
  uStack_1770 = 0;
  if ((bStack_f00 & 1) != 0) {
    uStack_1770 = 0;
    func_0x0412a280(CONCAT44(uStack_eec,CONCAT13(uStack_eed,CONCAT21(uStack_eef,uStack_ef3._3_1_))),
                    CONCAT35((undefined3)uStack_efb,CONCAT41(uStack_eff,bStack_f00)) &
                    0xfffffffffffffffe);
  }
  puVar13 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,4);
  if (puVar13 == (undefined4 *)0x0) {
    func_0x0eec74c0(4,0);
  }
  bStack_12d8 = (byte)puVar13;
  uStack_12d7 = (undefined4)((ulong)puVar13 >> 8);
  uStack_12d3 = (uint3)((ulong)puVar13 >> 0x28);
  puVar14 = puVar13 + 1;
  uStack_12c8 = SUB81(puVar14,0);
  uStack_12c7 = (undefined1)((ulong)puVar14 >> 8);
  uStack_12c6 = (undefined6)((ulong)puVar14 >> 0x10);
  *puVar13 = 0x3f800000;
  _uStack_12d3 = CONCAT13(uStack_12c8,uStack_12d3);
  uStack_12cf = (undefined4)((ulong)puVar14 >> 8);
  uStack_12cb = (uint3)((ulong)puVar14 >> 0x28);
  func_0x0d3411f0(&bStack_f00,&puStack_1788,0xfffffffd,&bStack_12d8,1);
  lVar12 = CONCAT35(uStack_12d3,CONCAT41(uStack_12d7,bStack_12d8));
  if (lVar12 != 0) {
    _uStack_12d3 = CONCAT13(bStack_12d8,uStack_12d3);
    uStack_12cf = uStack_12d7;
    uStack_12cb = uStack_12d3;
    func_0x0412a280(lVar12,CONCAT62(uStack_12c6,CONCAT11(uStack_12c7,uStack_12c8)) - lVar12);
  }
  puVar13 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar13 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uVar17 = _UNK_01208681;
  uStack_12c8 = SUB81(puVar13,0);
  uStack_12c7 = (undefined1)((ulong)puVar13 >> 8);
  uStack_12c6 = (undefined6)((ulong)puVar13 >> 0x10);
  bStack_12d8 = 0x31;
  uStack_12d7 = 0;
  uStack_12d3 = 0;
  bStack_12d0 = 0x29;
  uStack_12cf = 0;
  uStack_12cb = 0;
  *(ulong *)((long)puVar13 + 0x19) = CONCAT17(UNK_01208680,_DAT_01208679);
  *(undefined8 *)((long)puVar13 + 0x21) = uVar17;
  uVar17 = CONCAT71(_DAT_01208679,UNK_01208678);
  *(undefined8 *)(puVar13 + 4) = _DAT_01208670;
  *(undefined8 *)(puVar13 + 6) = uVar17;
  uVar10 = _UNK_0120866c;
  uVar9 = _UNK_01208668;
  uVar4 = _UNK_01208664;
  *puVar13 = _DAT_01208660;
  puVar13[1] = uVar4;
  puVar13[2] = uVar9;
  puVar13[3] = uVar10;
  *(undefined1 *)((long)puVar13 + 0x29) = 0;
  if (*(char *)(lVar22 + -0x16b0) == '\0') {
    *(undefined1 *)(lVar22 + -0x16b0) = 1;
    *(undefined **)(lVar22 + -0x1750) = &UNK_0f53bd88;
    *(undefined8 *)(lVar22 + -0x1738) = 0x1032547698badcfe;
    uVar17 = _UNK_014e11d8;
    *(undefined8 *)(lVar22 + -0x1748) = _DAT_014e11d0;
    *(undefined8 *)(lVar22 + -0x1740) = uVar17;
    *(undefined8 *)(lVar22 + -0x1730) = 0;
    *(undefined8 *)(lVar22 + -0x1728) = 0;
    *(undefined8 *)(lVar22 + -0x1720) = 0;
    *(undefined8 *)(lVar22 + -0x1718) = 0;
    *(undefined8 *)(lVar22 + -0x1710) = 0;
    *(undefined8 *)(lVar22 + -0x1708) = 0;
    *(undefined8 *)(lVar22 + -0x1700) = 0;
    *(undefined8 *)(lVar22 + -0x16f8) = 0;
    *(undefined8 *)(lVar22 + -0x16f0) = 0;
    *(undefined8 *)(lVar22 + -0x16e8) = 0;
    *(undefined8 *)(lVar22 + -0x16e0) = 0;
    *(undefined8 *)(lVar22 + -0x16d8) = 0;
    *(undefined8 *)(lVar22 + -0x16d0) = 0;
    *(undefined8 *)(lVar22 + -0x16c8) = 0;
    *(undefined8 *)(lVar22 + -0x16c0) = 0;
    *(undefined8 *)(lVar22 + -0x16b8) = 0;
  }
  (**(code **)(*plVar1 + 0x10))(plVar1);
  if ((bStack_12d8 & 1) == 0) {
    uVar11 = (uint)(bStack_12d8 >> 1);
    puVar13 = &uStack_12d7;
  }
  else {
    puVar13 = (undefined4 *)CONCAT62(uStack_12c6,CONCAT11(uStack_12c7,uStack_12c8));
    uVar11 = CONCAT31((undefined3)uStack_12cf,bStack_12d0);
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,puVar13,uVar11);
  (**(code **)(*plVar1 + 0x20))(plVar1,&uStack_15b8);
  uStack_1740 = ((ulong)uStack_15b8 >> 0x38 | ((ulong)uStack_15b8 & 0xff000000000000) >> 0x28 |
                 ((ulong)uStack_15b8 & 0xff0000000000) >> 0x18 |
                 ((ulong)uStack_15b8 & 0xff00000000) >> 8 | ((ulong)uStack_15b8 & 0xff000000) << 8 |
                 ((ulong)uStack_15b8 & 0xff0000) << 0x18 | ((ulong)uStack_15b8 & 0xff00) << 0x28 |
                (long)uStack_15b8 << 0x38) ^ uStack_ad0;
  uStack_1738 = ((ulong)puStack_15b0 >> 0x38 | ((ulong)puStack_15b0 & 0xff000000000000) >> 0x28 |
                 ((ulong)puStack_15b0 & 0xff0000000000) >> 0x18 |
                 ((ulong)puStack_15b0 & 0xff00000000) >> 8 | ((ulong)puStack_15b0 & 0xff000000) << 8
                 | ((ulong)puStack_15b0 & 0xff0000) << 0x18 | ((ulong)puStack_15b0 & 0xff00) << 0x28
                | (long)puStack_15b0 << 0x38) ^ uStack_ac8;
  puStack_1748 = &UNK_0ef512d0;
  if (uStack_1738 == 0 && uStack_1740 == 0) {
    uStack_1740 = 0x9e3779b97f4a7c15;
    uStack_1738 = 0x6a09e667f3bcc909;
  }
  uStack_1728 = uStack_1728 & 0xffffffffffffff00;
  uStack_1730 = 0;
  if ((bStack_12d8 & 1) != 0) {
    uStack_1730 = 0;
    func_0x0412a280(CONCAT62(uStack_12c6,CONCAT11(uStack_12c7,uStack_12c8)),
                    CONCAT35(uStack_12d3,CONCAT41(uStack_12d7,bStack_12d8)) & 0xfffffffffffffffe);
  }
  uStack_15b8 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,4);
  if (uStack_15b8 == (undefined4 *)0x0) {
    func_0x0eec74c0(4,0);
  }
  puStack_15b0 = uStack_15b8 + 1;
  *uStack_15b8 = 0x3f800000;
  puStack_15a8 = (undefined5 *)puStack_15b0;
  func_0x0d3411f0(&bStack_12d8,&puStack_1748,0xfffffff9,&uStack_15b8,1);
  if (uStack_15b8 != (undefined4 *)0x0) {
    puStack_15b0 = uStack_15b8;
    func_0x0412a280(uStack_15b8,(long)puStack_15a8 - (long)uStack_15b8);
  }
  puVar13 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar13 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar17 = _UNK_0130a837;
  uStack_15b8 = (undefined4 *)0x29;
  puStack_15b0 = (undefined4 *)0x24;
  *(undefined8 *)(puVar13 + 4) = _DAT_0130a82f;
  *(undefined8 *)(puVar13 + 6) = uVar17;
  uVar10 = _UNK_0130a82b;
  uVar9 = _UNK_0130a827;
  uVar4 = _UNK_0130a823;
  *puVar13 = _DAT_0130a81f;
  puVar13[1] = uVar4;
  puVar13[2] = uVar9;
  puVar13[3] = uVar10;
  puVar13[8] = 0x64616572;
  *(undefined1 *)(puVar13 + 9) = 0;
  if (*(char *)(lVar22 + -0x16b0) == '\0') {
    *(undefined1 *)(lVar22 + -0x16b0) = 1;
    *(undefined **)(lVar22 + -0x1750) = &UNK_0f53bd88;
    *(undefined8 *)(lVar22 + -0x1738) = 0x1032547698badcfe;
    uVar17 = _UNK_014e11d8;
    *(undefined8 *)(lVar22 + -0x1748) = _DAT_014e11d0;
    *(undefined8 *)(lVar22 + -0x1740) = uVar17;
    *(undefined8 *)(lVar22 + -0x1730) = 0;
    *(undefined8 *)(lVar22 + -0x1728) = 0;
    *(undefined8 *)(lVar22 + -0x1720) = 0;
    *(undefined8 *)(lVar22 + -0x1718) = 0;
    *(undefined8 *)(lVar22 + -0x1710) = 0;
    *(undefined8 *)(lVar22 + -0x1708) = 0;
    *(undefined8 *)(lVar22 + -0x1700) = 0;
    *(undefined8 *)(lVar22 + -0x16f8) = 0;
    *(undefined8 *)(lVar22 + -0x16f0) = 0;
    *(undefined8 *)(lVar22 + -0x16e8) = 0;
    *(undefined8 *)(lVar22 + -0x16e0) = 0;
    *(undefined8 *)(lVar22 + -0x16d8) = 0;
    *(undefined8 *)(lVar22 + -0x16d0) = 0;
    *(undefined8 *)(lVar22 + -0x16c8) = 0;
    *(undefined8 *)(lVar22 + -0x16c0) = 0;
    *(undefined8 *)(lVar22 + -0x16b8) = 0;
  }
  puStack_15a8 = (undefined5 *)puVar13;
  (**(code **)(*plVar1 + 0x10))(plVar1);
  if (((ulong)uStack_15b8 & 1) == 0) {
    uVar18 = (ulong)uStack_15b8 >> 1 & 0x7f;
    puVar15 = (undefined5 *)((long)&uStack_15b8 + 1);
  }
  else {
    uVar18 = (ulong)puStack_15b0 & 0xffffffff;
    puVar15 = puStack_15a8;
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,puVar15,uVar18);
  (**(code **)(*plVar1 + 0x20))(plVar1,&bStack_1698);
  uVar5 = CONCAT41(uStack_1697,bStack_1698);
  uVar8 = CONCAT25(uStack_168b,CONCAT41(uStack_168f,bStack_1690));
  uStack_17e8 = ((ulong)(uStack_1693 >> 0x10) | (ulong)uStack_1693 & 0xff00 |
                 ((ulong)uStack_1693 & 0xff) << 0x10 | ((ulong)uVar5 & 0xff00000000) >> 8 |
                 ((ulong)uVar5 & 0xff000000) << 8 | ((ulong)uVar5 & 0xff0000) << 0x18 |
                 ((ulong)uVar5 & 0xff00) << 0x28 | CONCAT35(uStack_1693,uVar5) << 0x38) ^ uStack_ad0
  ;
  uStack_17e0 = ((ulong)bStack_1689 | ((ulong)uVar8 & 0xff000000000000) >> 0x28 |
                 ((ulong)uVar8 & 0xff0000000000) >> 0x18 | ((ulong)uVar8 & 0xff00000000) >> 8 |
                 ((ulong)uVar8 & 0xff000000) << 8 | ((ulong)uVar8 & 0xff0000) << 0x18 |
                 ((ulong)uVar8 & 0xff00) << 0x28 | CONCAT17(bStack_1689,uVar8) << 0x38) ^ uStack_ac8
  ;
  puStack_17f0 = &UNK_0ef512d0;
  if (uStack_17e0 == 0 && uStack_17e8 == 0) {
    uStack_17e8 = 0x9e3779b97f4a7c15;
    uStack_17e0 = 0x6a09e667f3bcc909;
  }
  uStack_17d0 = 0;
  uStack_17d8 = 0;
  if (((ulong)uStack_15b8 & 1) != 0) {
    uStack_17d0 = 0;
    uStack_17d8 = 0;
    func_0x0412a280(puStack_15a8,(ulong)uStack_15b8 & 0xfffffffffffffffe);
  }
  puVar13 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,4);
  if (puVar13 == (undefined4 *)0x0) {
    func_0x0eec74c0(4,0);
  }
  bStack_1698 = (byte)puVar13;
  uStack_1697 = (undefined4)((ulong)puVar13 >> 8);
  uStack_1693 = (uint3)((ulong)puVar13 >> 0x28);
  puVar14 = puVar13 + 1;
  uStack_1688 = SUB81(puVar14,0);
  uStack_1687 = (undefined4)((ulong)puVar14 >> 8);
  uStack_1683 = (undefined1)((ulong)puVar14 >> 0x28);
  uStack_1682 = (undefined1)((ulong)puVar14 >> 0x30);
  uStack_1681 = (undefined1)((ulong)puVar14 >> 0x38);
  *puVar13 = 0x3f800000;
  _uStack_1693 = CONCAT13(uStack_1688,uStack_1693);
  uStack_168b = (undefined2)((ulong)puVar14 >> 0x28);
  uStack_168f = uStack_1687;
  bStack_1689 = uStack_1681;
  func_0x0d3411f0(&uStack_15b8,&puStack_17f0,0xfffffffb,&bStack_1698,1);
  uVar4 = _uStack_1693;
  lVar12 = CONCAT35(uStack_1693,CONCAT41(uStack_1697,bStack_1698));
  if (lVar12 != 0) {
    _uStack_1693 = CONCAT13(bStack_1698,uStack_1693);
    uStack_168f = uStack_1697;
    uStack_168b = (undefined2)uVar4;
    bStack_1689 = (byte)((uint)uVar4 >> 0x10);
    func_0x0412a280(lVar12,CONCAT17(uStack_1681,
                                    CONCAT16(uStack_1682,
                                             CONCAT15(uStack_1683,CONCAT41(uStack_1687,uStack_1688))
                                            )) - lVar12);
  }
  bStack_1698 = 0x2c;
  uStack_1697 = _DAT_01390e6c;
  _uStack_1693 = _UNK_01390e70;
  uStack_168f = _UNK_01390e74;
  uStack_168b = (undefined2)_UNK_01390e78;
  bStack_1689 = 0x66;
  uStack_1688 = 0x65;
  uStack_1687 = 0x616c5f72;
  uStack_1683 = 0x76;
  uStack_1682 = 0x61;
  uStack_1681 = 0;
  if (*(char *)(lVar22 + -0x16b0) == '\0') {
    *(undefined1 *)(lVar22 + -0x16b0) = 1;
    *(undefined **)(lVar22 + -0x1750) = &UNK_0f53bd88;
    *(undefined8 *)(lVar22 + -0x1738) = 0x1032547698badcfe;
    uVar17 = _UNK_014e11d8;
    *(undefined8 *)(lVar22 + -0x1748) = _DAT_014e11d0;
    *(undefined8 *)(lVar22 + -0x1740) = uVar17;
    *(undefined8 *)(lVar22 + -0x1730) = 0;
    *(undefined8 *)(lVar22 + -0x1728) = 0;
    *(undefined8 *)(lVar22 + -0x1720) = 0;
    *(undefined8 *)(lVar22 + -0x1718) = 0;
    *(undefined8 *)(lVar22 + -0x1710) = 0;
    *(undefined8 *)(lVar22 + -0x1708) = 0;
    *(undefined8 *)(lVar22 + -0x1700) = 0;
    *(undefined8 *)(lVar22 + -0x16f8) = 0;
    *(undefined8 *)(lVar22 + -0x16f0) = 0;
    *(undefined8 *)(lVar22 + -0x16e8) = 0;
    *(undefined8 *)(lVar22 + -0x16e0) = 0;
    *(undefined8 *)(lVar22 + -0x16d8) = 0;
    *(undefined8 *)(lVar22 + -0x16d0) = 0;
    *(undefined8 *)(lVar22 + -0x16c8) = 0;
    *(undefined8 *)(lVar22 + -0x16c0) = 0;
    *(undefined8 *)(lVar22 + -0x16b8) = 0;
  }
  (**(code **)(*plVar1 + 0x10))(plVar1);
  if ((bStack_1698 & 1) == 0) {
    puVar13 = &uStack_1697;
    uVar11 = (uint)(bStack_1698 >> 1);
  }
  else {
    puVar13 = (undefined4 *)
              CONCAT17(uStack_1681,
                       CONCAT16(uStack_1682,CONCAT15(uStack_1683,CONCAT41(uStack_1687,uStack_1688)))
                      );
    uVar11 = CONCAT31((undefined3)uStack_168f,bStack_1690);
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,puVar13,uVar11);
  (**(code **)(*plVar1 + 0x20))(plVar1,&bStack_18d8);
  uVar5 = CONCAT41(uStack_18d7,bStack_18d8);
  uVar6 = CONCAT41(uStack_18cf,bStack_18d0);
  puStack_1810 = (undefined4 *)
                 (((ulong)(uStack_18d3 >> 0x10) | (ulong)uStack_18d3 & 0xff00 |
                   ((ulong)uStack_18d3 & 0xff) << 0x10 | ((ulong)uVar5 & 0xff00000000) >> 8 |
                   ((ulong)uVar5 & 0xff000000) << 8 | ((ulong)uVar5 & 0xff0000) << 0x18 |
                   ((ulong)uVar5 & 0xff00) << 0x28 | CONCAT35(uStack_18d3,uVar5) << 0x38) ^
                 uStack_ad0);
  puStack_1808 = (undefined4 *)
                 (((ulong)(uStack_18cb >> 0x10) | (ulong)uStack_18cb & 0xff00 |
                   ((ulong)uStack_18cb & 0xff) << 0x10 | ((ulong)uVar6 & 0xff00000000) >> 8 |
                   ((ulong)uVar6 & 0xff000000) << 8 | ((ulong)uVar6 & 0xff0000) << 0x18 |
                   ((ulong)uVar6 & 0xff00) << 0x28 | CONCAT35(uStack_18cb,uVar6) << 0x38) ^
                 uStack_ac8);
  puStack_1818 = (undefined4 *)&UNK_0ef512d0;
  if (puStack_1808 == (undefined4 *)0x0 && puStack_1810 == (undefined4 *)0x0) {
    puStack_1810 = (undefined4 *)0x9e3779b97f4a7c15;
    puStack_1808 = (undefined4 *)0x6a09e667f3bcc909;
  }
  uStack_17f8 = 0;
  uStack_1800 = 0;
  if ((bStack_1698 & 1) != 0) {
    uStack_17f8 = 0;
    uStack_1800 = 0;
    func_0x0412a280(CONCAT17(uStack_1681,
                             CONCAT16(uStack_1682,
                                      CONCAT15(uStack_1683,CONCAT41(uStack_1687,uStack_1688)))),
                    CONCAT35(uStack_1693,CONCAT41(uStack_1697,bStack_1698)) & 0xfffffffffffffffe);
  }
  puVar13 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,4);
  if (puVar13 == (undefined4 *)0x0) {
    func_0x0eec74c0(4,0);
  }
  bStack_18d8 = (byte)puVar13;
  uStack_18d7 = (undefined4)((ulong)puVar13 >> 8);
  uStack_18d3 = (uint3)((ulong)puVar13 >> 0x28);
  puVar14 = puVar13 + 1;
  uStack_18c8 = SUB81(puVar14,0);
  uStack_18c7 = (undefined2)((ulong)puVar14 >> 8);
  uStack_18c5 = (undefined2)((ulong)puVar14 >> 0x18);
  uStack_18c3 = (undefined1)((ulong)puVar14 >> 0x28);
  uStack_18c2 = (undefined2)((ulong)puVar14 >> 0x30);
  *puVar13 = 0x3f800000;
  _uStack_18d3 = CONCAT13(uStack_18c8,uStack_18d3);
  uStack_18cf = (undefined4)((ulong)puVar14 >> 8);
  uStack_18cb = (uint3)((ulong)puVar14 >> 0x28);
  func_0x0d3411f0(&bStack_1698,&puStack_1818,0xffffffff,&bStack_18d8,1);
  lVar12 = CONCAT35(uStack_18d3,CONCAT41(uStack_18d7,bStack_18d8));
  if (lVar12 != 0) {
    _uStack_18d3 = CONCAT13(bStack_18d8,uStack_18d3);
    uStack_18cf = uStack_18d7;
    uStack_18cb = uStack_18d3;
    func_0x0412a280(lVar12,CONCAT26(uStack_18c2,
                                    CONCAT15(uStack_18c3,
                                             CONCAT23(uStack_18c5,CONCAT21(uStack_18c7,uStack_18c8))
                                            )) - lVar12);
  }
  bStack_18d8 = 0x22;
  uStack_18d7 = _DAT_01258374;
  _uStack_18d3 = _UNK_01258378;
  uStack_18cf = _UNK_0125837c;
  _uStack_18cb = _UNK_01258380;
  uStack_18c7 = 0x72;
  if (*(char *)(lVar22 + -0x16b0) == '\0') {
    *(undefined1 *)(lVar22 + -0x16b0) = 1;
    *(undefined **)(lVar22 + -0x1750) = &UNK_0f53bd88;
    *(undefined8 *)(lVar22 + -0x1738) = 0x1032547698badcfe;
    uVar17 = _UNK_014e11d8;
    *(undefined8 *)(lVar22 + -0x1748) = _DAT_014e11d0;
    *(undefined8 *)(lVar22 + -0x1740) = uVar17;
    *(undefined8 *)(lVar22 + -0x1730) = 0;
    *(undefined8 *)(lVar22 + -0x1728) = 0;
    *(undefined8 *)(lVar22 + -0x1720) = 0;
    *(undefined8 *)(lVar22 + -0x1718) = 0;
    *(undefined8 *)(lVar22 + -0x1710) = 0;
    *(undefined8 *)(lVar22 + -0x1708) = 0;
    *(undefined8 *)(lVar22 + -0x1700) = 0;
    *(undefined8 *)(lVar22 + -0x16f8) = 0;
    *(undefined8 *)(lVar22 + -0x16f0) = 0;
    *(undefined8 *)(lVar22 + -0x16e8) = 0;
    *(undefined8 *)(lVar22 + -0x16e0) = 0;
    *(undefined8 *)(lVar22 + -0x16d8) = 0;
    *(undefined8 *)(lVar22 + -0x16d0) = 0;
    *(undefined8 *)(lVar22 + -0x16c8) = 0;
    *(undefined8 *)(lVar22 + -0x16c0) = 0;
    *(undefined8 *)(lVar22 + -0x16b8) = 0;
  }
  (**(code **)(*plVar1 + 0x10))(plVar1);
  if ((bStack_18d8 & 1) == 0) {
    puVar13 = &uStack_18d7;
    uVar11 = (uint)(bStack_18d8 >> 1);
  }
  else {
    puVar13 = (undefined4 *)
              CONCAT26(uStack_18c2,
                       CONCAT15(uStack_18c3,CONCAT23(uStack_18c5,CONCAT21(uStack_18c7,uStack_18c8)))
                      );
    uVar11 = CONCAT31((undefined3)uStack_18cf,bStack_18d0);
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,puVar13,uVar11);
  (**(code **)(*plVar1 + 0x20))(plVar1,&bStack_1858);
  uVar5 = CONCAT41(uStack_1857,bStack_1858);
  uVar6 = CONCAT41(uStack_184f,bStack_1850);
  uVar18 = ((ulong)(uStack_1853 >> 0x10) | (ulong)uStack_1853 & 0xff00 |
            ((ulong)uStack_1853 & 0xff) << 0x10 | ((ulong)uVar5 & 0xff00000000) >> 8 |
            ((ulong)uVar5 & 0xff000000) << 8 | ((ulong)uVar5 & 0xff0000) << 0x18 |
            ((ulong)uVar5 & 0xff00) << 0x28 | CONCAT35(uStack_1853,uVar5) << 0x38) ^ uStack_ad0;
  uVar21 = ((ulong)(uStack_184b >> 0x10) | (ulong)uStack_184b & 0xff00 |
            ((ulong)uStack_184b & 0xff) << 0x10 | ((ulong)uVar6 & 0xff00000000) >> 8 |
            ((ulong)uVar6 & 0xff000000) << 8 | ((ulong)uVar6 & 0xff0000) << 0x18 |
            ((ulong)uVar6 & 0xff00) << 0x28 | CONCAT35(uStack_184b,uVar6) << 0x38) ^ uStack_ac8;
  if (uVar21 == 0 && uVar18 == 0) {
    uVar18 = 0x9e3779b97f4a7c15;
    uVar21 = 0x6a09e667f3bcc909;
  }
  if ((bStack_18d8 & 1) != 0) {
    func_0x0412a280(CONCAT26(uStack_18c2,
                             CONCAT15(uStack_18c3,
                                      CONCAT23(uStack_18c5,CONCAT21(uStack_18c7,uStack_18c8)))),
                    CONCAT35(uStack_18d3,CONCAT41(uStack_18d7,bStack_18d8)) & 0xfffffffffffffffe);
  }
  FUN_049cce40(&bStack_18d8,&bStack_f00);
  FUN_049cce40(&bStack_1858,&bStack_12d8);
  FUN_049cce40(&bStack_1898,&bStack_1698);
  FUN_049cce40(&puStack_17c8,&uStack_15b8);
  uVar19 = uVar21 ^ uVar18;
  uVar20 = uVar19 << 0x15 ^ (uVar18 << 0x31 | uVar18 >> 0xf) ^ uVar19;
  uVar19 = (uVar19 << 0x1c | uVar19 >> 0x24) + uVar20;
  uStack_12f0 = ((uVar21 + uVar18) * 0x20000 | uVar21 + uVar18 >> 0x2f) + uVar18;
  uStack_12e8 = (uVar19 * 0x20000 | uVar19 >> 0x2f) + uVar20;
  uStack_13d8 = CONCAT35(uStack_18d3,CONCAT41(uStack_18d7,bStack_18d8));
  uStack_13d0 = CONCAT35(uStack_18cb,CONCAT41(uStack_18cf,bStack_18d0));
  uStack_13c8 = CONCAT26(uStack_18c2,
                         CONCAT15(uStack_18c3,
                                  CONCAT23(uStack_18c5,CONCAT21(uStack_18c7,uStack_18c8))));
  uStack_13a0 = CONCAT35(uStack_1853,CONCAT41(uStack_1857,bStack_1858));
  uStack_1398 = CONCAT35(uStack_184b,CONCAT41(uStack_184f,bStack_1850));
  uStack_1390 = CONCAT53(uStack_1845,CONCAT21(uStack_1847,uStack_1848));
  puStack_12f8 = &UNK_0ef51388;
  uStack_130c = uStack_17a8._4_4_;
  uStack_1310 = (undefined4)uStack_17a8;
  uStack_1314 = uStack_17b0._4_4_;
  uStack_1318 = (undefined4)uStack_17b0;
  uStack_17a0 = 0;
  uStack_17a8 = 0;
  uStack_17b0 = 0;
  uStack_17b8 = 0;
  uStack_17c0 = 0;
  puStack_17c8 = (undefined *)0x0;
  lStack_1830 = 0;
  lStack_1838 = 0;
  lStack_1840 = 0;
  uStack_1845 = 0;
  uStack_1847 = 0;
  _uStack_184b = 0;
  uStack_184f = 0;
  _uStack_1853 = 0;
  uStack_1857 = 0;
  bStack_1858 = 0;
  lStack_1870 = 0;
  lStack_1878 = 0;
  lStack_1880 = 0;
  puStack_1888 = (undefined5 *)0x0;
  bStack_1889 = 0;
  uStack_188a = 0;
  uStack_188c = 0;
  uStack_1890 = 0;
  uStack_1892 = 0;
  uStack_1897 = 0;
  bStack_1898 = 0;
  lStack_18b0 = 0;
  lStack_18b8 = 0;
  lStack_18c0 = 0;
  uStack_18c2 = 0;
  uStack_18c3 = 0;
  uStack_18c5 = 0;
  uStack_18c7 = 0;
  _uStack_18cb = 0;
  uStack_18cf = 0;
  _uStack_18d3 = 0;
  uStack_18d7 = 0;
  bStack_18d8 = 0;
  if (lStack_1680 != 0) {
    lStack_1678 = lStack_1680;
    func_0x0412a280(lStack_1680,lStack_1670 - lStack_1680);
  }
  uVar4 = _uStack_1693;
  lVar12 = CONCAT35(uStack_1693,CONCAT41(uStack_1697,bStack_1698));
  if (lVar12 != 0) {
    _uStack_1693 = CONCAT13(bStack_1698,uStack_1693);
    uStack_168f = uStack_1697;
    uStack_168b = (undefined2)uVar4;
    bStack_1689 = (byte)((uint)uVar4 >> 0x10);
    func_0x0412a280(lVar12,CONCAT17(uStack_1681,
                                    CONCAT16(uStack_1682,
                                             CONCAT15(uStack_1683,CONCAT41(uStack_1687,uStack_1688))
                                            )) - lVar12);
  }
  if (lStack_15a0 != 0) {
    lStack_1598 = lStack_15a0;
    func_0x0412a280(lStack_15a0,lStack_1590 - lStack_15a0);
  }
  if (uStack_15b8 != (undefined4 *)0x0) {
    puStack_15b0 = uStack_15b8;
    func_0x0412a280(uStack_15b8,(long)puStack_15a8 - (long)uStack_15b8);
  }
  if (lStack_12c0 != 0) {
    lStack_12b8 = lStack_12c0;
    func_0x0412a280(lStack_12c0,lStack_12b0 - lStack_12c0);
  }
  lVar12 = CONCAT35(uStack_12d3,CONCAT41(uStack_12d7,bStack_12d8));
  if (lVar12 != 0) {
    bStack_12d0 = bStack_12d8;
    uStack_12cf = uStack_12d7;
    uStack_12cb = uStack_12d3;
    func_0x0412a280(lVar12,CONCAT62(uStack_12c6,CONCAT11(uStack_12c7,uStack_12c8)) - lVar12);
  }
  if (lStack_ee8 != 0) {
    lStack_ee0 = lStack_ee8;
    func_0x0412a280(lStack_ee8,lStack_ed8 - lStack_ee8);
  }
  lVar12 = CONCAT35((undefined3)uStack_efb,CONCAT41(uStack_eff,bStack_f00));
  if (lVar12 != 0) {
    uStack_efb._3_1_ = bStack_f00;
    uStack_ef7 = uStack_eff;
    uStack_ef3._0_3_ = (undefined3)uStack_efb;
    func_0x0412a280(lVar12,CONCAT44(uStack_eec,
                                    CONCAT13(uStack_eed,CONCAT21(uStack_eef,uStack_ef3._3_1_))) -
                           lVar12);
  }
  func_0x0528e660(&bStack_f00,&puStack_ad8);
  puVar13 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a);
  if (puVar13 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x1a,0);
  }
  uVar10 = _UNK_0135c3ec;
  uVar9 = _UNK_0135c3e8;
  uVar4 = _UNK_0135c3e4;
  uStack_12c8 = SUB81(puVar13,0);
  uStack_12c7 = (undefined1)((ulong)puVar13 >> 8);
  uStack_12c6 = (undefined6)((ulong)puVar13 >> 0x10);
  bStack_12d8 = 0x1b;
  uStack_12d7 = 0;
  uStack_12d3 = 0;
  bStack_12d0 = 0x17;
  uStack_12cf = 0;
  uStack_12cb = 0;
  *puVar13 = _DAT_0135c3e0;
  puVar13[1] = uVar4;
  puVar13[2] = uVar9;
  puVar13[3] = uVar10;
  *(undefined8 *)((long)puVar13 + 0xf) = 0x7373656e696e6965;
  *(undefined1 *)((long)puVar13 + 0x17) = 0;
  if (*(char *)(lVar22 + -0x16b0) == '\0') {
    *(undefined1 *)(lVar22 + -0x16b0) = 1;
    *(undefined **)(lVar22 + -0x1750) = &UNK_0f53bd88;
    *(undefined8 *)(lVar22 + -0x1738) = 0x1032547698badcfe;
    uVar17 = _UNK_014e11d8;
    *(undefined8 *)(lVar22 + -0x1748) = _DAT_014e11d0;
    *(undefined8 *)(lVar22 + -0x1740) = uVar17;
    *(undefined8 *)(lVar22 + -0x1730) = 0;
    *(undefined8 *)(lVar22 + -0x1728) = 0;
    *(undefined8 *)(lVar22 + -0x1720) = 0;
    *(undefined8 *)(lVar22 + -0x1718) = 0;
    *(undefined8 *)(lVar22 + -0x1710) = 0;
    *(undefined8 *)(lVar22 + -0x1708) = 0;
    *(undefined8 *)(lVar22 + -0x1700) = 0;
    *(undefined8 *)(lVar22 + -0x16f8) = 0;
    *(undefined8 *)(lVar22 + -0x16f0) = 0;
    *(undefined8 *)(lVar22 + -0x16e8) = 0;
    *(undefined8 *)(lVar22 + -0x16e0) = 0;
    *(undefined8 *)(lVar22 + -0x16d8) = 0;
    *(undefined8 *)(lVar22 + -0x16d0) = 0;
    *(undefined8 *)(lVar22 + -0x16c8) = 0;
    *(undefined8 *)(lVar22 + -0x16c0) = 0;
    *(undefined8 *)(lVar22 + -0x16b8) = 0;
  }
  (**(code **)(*plVar1 + 0x10))(plVar1);
  if ((bStack_12d8 & 1) == 0) {
    uVar11 = (uint)(bStack_12d8 >> 1);
    puVar13 = &uStack_12d7;
  }
  else {
    puVar13 = (undefined4 *)CONCAT62(uStack_12c6,CONCAT11(uStack_12c7,uStack_12c8));
    uVar11 = CONCAT31((undefined3)uStack_12cf,bStack_12d0);
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,puVar13,uVar11);
  (**(code **)(*plVar1 + 0x20))(plVar1,&bStack_1698);
  uVar5 = CONCAT41(uStack_1697,bStack_1698);
  uVar8 = CONCAT25(uStack_168b,CONCAT41(uStack_168f,bStack_1690));
  uStack_17e8 = ((ulong)(uStack_1693 >> 0x10) | (ulong)uStack_1693 & 0xff00 |
                 ((ulong)uStack_1693 & 0xff) << 0x10 | ((ulong)uVar5 & 0xff00000000) >> 8 |
                 ((ulong)uVar5 & 0xff000000) << 8 | ((ulong)uVar5 & 0xff0000) << 0x18 |
                 ((ulong)uVar5 & 0xff00) << 0x28 | CONCAT35(uStack_1693,uVar5) << 0x38) ^ uStack_ad0
  ;
  uStack_17e0 = ((ulong)bStack_1689 | ((ulong)uVar8 & 0xff000000000000) >> 0x28 |
                 ((ulong)uVar8 & 0xff0000000000) >> 0x18 | ((ulong)uVar8 & 0xff00000000) >> 8 |
                 ((ulong)uVar8 & 0xff000000) << 8 | ((ulong)uVar8 & 0xff0000) << 0x18 |
                 ((ulong)uVar8 & 0xff00) << 0x28 | CONCAT17(bStack_1689,uVar8) << 0x38) ^ uStack_ac8
  ;
  puStack_17f0 = &UNK_0ef512d0;
  if (uStack_17e0 == 0 && uStack_17e8 == 0) {
    uStack_17e8 = 0x9e3779b97f4a7c15;
    uStack_17e0 = 0x6a09e667f3bcc909;
  }
  uStack_17d0 = 0;
  uStack_17d8 = 0;
  if ((bStack_12d8 & 1) != 0) {
    uStack_17d0 = 0;
    uStack_17d8 = 0;
    func_0x0412a280(CONCAT62(uStack_12c6,CONCAT11(uStack_12c7,uStack_12c8)),
                    CONCAT35(uStack_12d3,CONCAT41(uStack_12d7,bStack_12d8)) & 0xfffffffffffffffe);
  }
  puVar13 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,4);
  if (puVar13 == (undefined4 *)0x0) {
    func_0x0eec74c0(4,0);
  }
  bStack_1698 = (byte)puVar13;
  uStack_1697 = (undefined4)((ulong)puVar13 >> 8);
  uStack_1693 = (uint3)((ulong)puVar13 >> 0x28);
  puVar14 = puVar13 + 1;
  uStack_1688 = SUB81(puVar14,0);
  uStack_1687 = (undefined4)((ulong)puVar14 >> 8);
  uStack_1683 = (undefined1)((ulong)puVar14 >> 0x28);
  uStack_1682 = (undefined1)((ulong)puVar14 >> 0x30);
  uStack_1681 = (undefined1)((ulong)puVar14 >> 0x38);
  *puVar13 = 0x3f800000;
  _uStack_1693 = CONCAT13(uStack_1688,uStack_1693);
  uStack_168b = (undefined2)((ulong)puVar14 >> 0x28);
  uStack_168f = uStack_1687;
  bStack_1689 = uStack_1681;
  func_0x0d3411f0(&bStack_12d8,&puStack_17f0,0xfffffff8,&bStack_1698,1);
  uVar4 = _uStack_1693;
  lVar12 = CONCAT35(uStack_1693,CONCAT41(uStack_1697,bStack_1698));
  if (lVar12 != 0) {
    _uStack_1693 = CONCAT13(bStack_1698,uStack_1693);
    uStack_168f = uStack_1697;
    uStack_168b = (undefined2)uVar4;
    bStack_1689 = (byte)((uint)uVar4 >> 0x10);
    func_0x0412a280(lVar12,CONCAT17(uStack_1681,
                                    CONCAT16(uStack_1682,
                                             CONCAT15(uStack_1683,CONCAT41(uStack_1687,uStack_1688))
                                            )) - lVar12);
  }
  bStack_1698 = 0x28;
  uStack_1697 = _DAT_0142c9b4;
  _uStack_1693 = _UNK_0142c9b8;
  uStack_168f = _UNK_0142c9bc;
  uStack_168b = (undefined2)_UNK_0142c9c0;
  bStack_1689 = (byte)((uint)_UNK_0142c9c0 >> 0x10);
  uStack_1688 = (undefined1)((uint)_UNK_0142c9c0 >> 0x18);
  uStack_1687 = 0x615f6e69;
  uStack_1683 = 0;
  if (*(char *)(lVar22 + -0x16b0) == '\0') {
    *(undefined1 *)(lVar22 + -0x16b0) = 1;
    *(undefined **)(lVar22 + -0x1750) = &UNK_0f53bd88;
    *(undefined8 *)(lVar22 + -0x1738) = 0x1032547698badcfe;
    uVar17 = _UNK_014e11d8;
    *(undefined8 *)(lVar22 + -0x1748) = _DAT_014e11d0;
    *(undefined8 *)(lVar22 + -0x1740) = uVar17;
    *(undefined8 *)(lVar22 + -0x1730) = 0;
    *(undefined8 *)(lVar22 + -0x1728) = 0;
    *(undefined8 *)(lVar22 + -0x1720) = 0;
    *(undefined8 *)(lVar22 + -0x1718) = 0;
    *(undefined8 *)(lVar22 + -0x1710) = 0;
    *(undefined8 *)(lVar22 + -0x1708) = 0;
    *(undefined8 *)(lVar22 + -0x1700) = 0;
    *(undefined8 *)(lVar22 + -0x16f8) = 0;
    *(undefined8 *)(lVar22 + -0x16f0) = 0;
    *(undefined8 *)(lVar22 + -0x16e8) = 0;
    *(undefined8 *)(lVar22 + -0x16e0) = 0;
    *(undefined8 *)(lVar22 + -0x16d8) = 0;
    *(undefined8 *)(lVar22 + -0x16d0) = 0;
    *(undefined8 *)(lVar22 + -0x16c8) = 0;
    *(undefined8 *)(lVar22 + -0x16c0) = 0;
    *(undefined8 *)(lVar22 + -0x16b8) = 0;
  }
  (**(code **)(*plVar1 + 0x10))(plVar1);
  if ((bStack_1698 & 1) == 0) {
    puVar13 = &uStack_1697;
    uVar11 = (uint)(bStack_1698 >> 1);
  }
  else {
    puVar13 = (undefined4 *)
              CONCAT17(uStack_1681,
                       CONCAT16(uStack_1682,CONCAT15(uStack_1683,CONCAT41(uStack_1687,uStack_1688)))
                      );
    uVar11 = CONCAT31((undefined3)uStack_168f,bStack_1690);
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,puVar13,uVar11);
  (**(code **)(*plVar1 + 0x20))(plVar1,&bStack_18d8);
  uVar5 = CONCAT41(uStack_18d7,bStack_18d8);
  uVar6 = CONCAT41(uStack_18cf,bStack_18d0);
  puStack_1810 = (undefined4 *)
                 (((ulong)(uStack_18d3 >> 0x10) | (ulong)uStack_18d3 & 0xff00 |
                   ((ulong)uStack_18d3 & 0xff) << 0x10 | ((ulong)uVar5 & 0xff00000000) >> 8 |
                   ((ulong)uVar5 & 0xff000000) << 8 | ((ulong)uVar5 & 0xff0000) << 0x18 |
                   ((ulong)uVar5 & 0xff00) << 0x28 | CONCAT35(uStack_18d3,uVar5) << 0x38) ^
                 uStack_ad0);
  puStack_1808 = (undefined4 *)
                 (((ulong)(uStack_18cb >> 0x10) | (ulong)uStack_18cb & 0xff00 |
                   ((ulong)uStack_18cb & 0xff) << 0x10 | ((ulong)uVar6 & 0xff00000000) >> 8 |
                   ((ulong)uVar6 & 0xff000000) << 8 | ((ulong)uVar6 & 0xff0000) << 0x18 |
                   ((ulong)uVar6 & 0xff00) << 0x28 | CONCAT35(uStack_18cb,uVar6) << 0x38) ^
                 uStack_ac8);
  puStack_1818 = (undefined4 *)&UNK_0ef512d0;
  if (puStack_1808 == (undefined4 *)0x0 && puStack_1810 == (undefined4 *)0x0) {
    puStack_1810 = (undefined4 *)0x9e3779b97f4a7c15;
    puStack_1808 = (undefined4 *)0x6a09e667f3bcc909;
  }
  uStack_17f8 = 0;
  uStack_1800 = 0;
  if ((bStack_1698 & 1) != 0) {
    uStack_17f8 = 0;
    uStack_1800 = 0;
    func_0x0412a280(CONCAT17(uStack_1681,
                             CONCAT16(uStack_1682,
                                      CONCAT15(uStack_1683,CONCAT41(uStack_1687,uStack_1688)))),
                    CONCAT35(uStack_1693,CONCAT41(uStack_1697,bStack_1698)) & 0xfffffffffffffffe);
  }
  puVar13 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,4);
  if (puVar13 == (undefined4 *)0x0) {
    func_0x0eec74c0(4,0);
  }
  bStack_18d8 = (byte)puVar13;
  uStack_18d7 = (undefined4)((ulong)puVar13 >> 8);
  uStack_18d3 = (uint3)((ulong)puVar13 >> 0x28);
  puVar14 = puVar13 + 1;
  uStack_18c8 = SUB81(puVar14,0);
  uStack_18c7 = (undefined2)((ulong)puVar14 >> 8);
  uStack_18c5 = (undefined2)((ulong)puVar14 >> 0x18);
  uStack_18c3 = (undefined1)((ulong)puVar14 >> 0x28);
  uStack_18c2 = (undefined2)((ulong)puVar14 >> 0x30);
  *puVar13 = 0x3f800000;
  _uStack_18d3 = CONCAT13(uStack_18c8,uStack_18d3);
  uStack_18cf = (undefined4)((ulong)puVar14 >> 8);
  uStack_18cb = (uint3)((ulong)puVar14 >> 0x28);
  func_0x0d3411f0(&bStack_1698,&puStack_1818,0xfffffff9,&bStack_18d8,1);
  lVar12 = CONCAT35(uStack_18d3,CONCAT41(uStack_18d7,bStack_18d8));
  if (lVar12 != 0) {
    _uStack_18d3 = CONCAT13(bStack_18d8,uStack_18d3);
    uStack_18cf = uStack_18d7;
    uStack_18cb = uStack_18d3;
    func_0x0412a280(lVar12,CONCAT26(uStack_18c2,
                                    CONCAT15(uStack_18c3,
                                             CONCAT23(uStack_18c5,CONCAT21(uStack_18c7,uStack_18c8))
                                            )) - lVar12);
  }
  bStack_18d8 = 0x28;
  uStack_18d7 = _DAT_0142c9c9;
  _uStack_18d3 = _UNK_0142c9cd;
  uStack_18cf = _UNK_0142c9d1;
  _uStack_18cb = _UNK_0142c9d5;
  uStack_18c7 = 0x6e69;
  uStack_18c5 = 0x625f;
  uStack_18c3 = 0;
  if (*(char *)(lVar22 + -0x16b0) == '\0') {
    *(undefined1 *)(lVar22 + -0x16b0) = 1;
    *(undefined **)(lVar22 + -0x1750) = &UNK_0f53bd88;
    *(undefined8 *)(lVar22 + -0x1738) = 0x1032547698badcfe;
    uVar17 = _UNK_014e11d8;
    *(undefined8 *)(lVar22 + -0x1748) = _DAT_014e11d0;
    *(undefined8 *)(lVar22 + -0x1740) = uVar17;
    *(undefined8 *)(lVar22 + -0x1730) = 0;
    *(undefined8 *)(lVar22 + -0x1728) = 0;
    *(undefined8 *)(lVar22 + -0x1720) = 0;
    *(undefined8 *)(lVar22 + -0x1718) = 0;
    *(undefined8 *)(lVar22 + -0x1710) = 0;
    *(undefined8 *)(lVar22 + -0x1708) = 0;
    *(undefined8 *)(lVar22 + -0x1700) = 0;
    *(undefined8 *)(lVar22 + -0x16f8) = 0;
    *(undefined8 *)(lVar22 + -0x16f0) = 0;
    *(undefined8 *)(lVar22 + -0x16e8) = 0;
    *(undefined8 *)(lVar22 + -0x16e0) = 0;
    *(undefined8 *)(lVar22 + -0x16d8) = 0;
    *(undefined8 *)(lVar22 + -0x16d0) = 0;
    *(undefined8 *)(lVar22 + -0x16c8) = 0;
    *(undefined8 *)(lVar22 + -0x16c0) = 0;
    *(undefined8 *)(lVar22 + -0x16b8) = 0;
  }
  (**(code **)(*plVar1 + 0x10))(plVar1);
  if ((bStack_18d8 & 1) == 0) {
    puVar13 = &uStack_18d7;
    uVar11 = (uint)(bStack_18d8 >> 1);
  }
  else {
    puVar13 = (undefined4 *)
              CONCAT26(uStack_18c2,
                       CONCAT15(uStack_18c3,CONCAT23(uStack_18c5,CONCAT21(uStack_18c7,uStack_18c8)))
                      );
    uVar11 = CONCAT31((undefined3)uStack_18cf,bStack_18d0);
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,puVar13,uVar11);
  (**(code **)(*plVar1 + 0x20))(plVar1,&bStack_1858);
  uVar5 = CONCAT41(uStack_1857,bStack_1858);
  uVar6 = CONCAT41(uStack_184f,bStack_1850);
  uStack_13f8 = ((ulong)(uStack_1853 >> 0x10) | (ulong)uStack_1853 & 0xff00 |
                 ((ulong)uStack_1853 & 0xff) << 0x10 | ((ulong)uVar5 & 0xff00000000) >> 8 |
                 ((ulong)uVar5 & 0xff000000) << 8 | ((ulong)uVar5 & 0xff0000) << 0x18 |
                 ((ulong)uVar5 & 0xff00) << 0x28 | CONCAT35(uStack_1853,uVar5) << 0x38) ^ uStack_ad0
  ;
  uStack_13f0 = ((ulong)(uStack_184b >> 0x10) | (ulong)uStack_184b & 0xff00 |
                 ((ulong)uStack_184b & 0xff) << 0x10 | ((ulong)uVar6 & 0xff00000000) >> 8 |
                 ((ulong)uVar6 & 0xff000000) << 8 | ((ulong)uVar6 & 0xff0000) << 0x18 |
                 ((ulong)uVar6 & 0xff00) << 0x28 | CONCAT35(uStack_184b,uVar6) << 0x38) ^ uStack_ac8
  ;
  puStack_1400 = &UNK_0ef512d0;
  if (uStack_13f0 == 0 && uStack_13f8 == 0) {
    uStack_13f8 = 0x9e3779b97f4a7c15;
    uStack_13f0 = 0x6a09e667f3bcc909;
  }
  uStack_13e0 = 0;
  uStack_13e8 = 0;
  if ((bStack_18d8 & 1) != 0) {
    uStack_13e0 = 0;
    uStack_13e8 = 0;
    func_0x0412a280(CONCAT26(uStack_18c2,
                             CONCAT15(uStack_18c3,
                                      CONCAT23(uStack_18c5,CONCAT21(uStack_18c7,uStack_18c8)))),
                    CONCAT35(uStack_18d3,CONCAT41(uStack_18d7,bStack_18d8)) & 0xfffffffffffffffe);
  }
  puVar13 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,4);
  if (puVar13 == (undefined4 *)0x0) {
    func_0x0eec74c0(4,0);
  }
  bStack_1858 = (byte)puVar13;
  uStack_1857 = (undefined4)((ulong)puVar13 >> 8);
  uStack_1853 = (uint3)((ulong)puVar13 >> 0x28);
  puVar14 = puVar13 + 1;
  uStack_1848 = SUB81(puVar14,0);
  uStack_1847 = (undefined2)((ulong)puVar14 >> 8);
  uStack_1845 = (undefined5)((ulong)puVar14 >> 0x18);
  *puVar13 = 0x3f800000;
  _uStack_1853 = CONCAT13(uStack_1848,uStack_1853);
  uStack_184f = (undefined4)((ulong)puVar14 >> 8);
  uStack_184b = (uint3)((ulong)puVar14 >> 0x28);
  func_0x0d3411f0(&bStack_18d8,&puStack_1400,0xfffffff9,&bStack_1858,1);
  lVar12 = CONCAT35(uStack_1853,CONCAT41(uStack_1857,bStack_1858));
  if (lVar12 != 0) {
    _uStack_1853 = CONCAT13(bStack_1858,uStack_1853);
    uStack_184f = uStack_1857;
    uStack_184b = uStack_1853;
    func_0x0412a280(lVar12,CONCAT53(uStack_1845,CONCAT21(uStack_1847,uStack_1848)) - lVar12);
  }
  bStack_1858 = 0x22;
  uStack_1857 = _DAT_0120864e;
  _uStack_1853 = _UNK_01208652;
  uStack_184f = _UNK_01208656;
  _uStack_184b = _UNK_0120865a;
  uStack_1847 = 0x70;
  if (*(char *)(lVar22 + -0x16b0) == '\0') {
    *(undefined1 *)(lVar22 + -0x16b0) = 1;
    *(undefined **)(lVar22 + -0x1750) = &UNK_0f53bd88;
    *(undefined8 *)(lVar22 + -0x1738) = 0x1032547698badcfe;
    uVar17 = _UNK_014e11d8;
    *(undefined8 *)(lVar22 + -0x1748) = _DAT_014e11d0;
    *(undefined8 *)(lVar22 + -0x1740) = uVar17;
    *(undefined8 *)(lVar22 + -0x1730) = 0;
    *(undefined8 *)(lVar22 + -0x1728) = 0;
    *(undefined8 *)(lVar22 + -0x1720) = 0;
    *(undefined8 *)(lVar22 + -0x1718) = 0;
    *(undefined8 *)(lVar22 + -0x1710) = 0;
    *(undefined8 *)(lVar22 + -0x1708) = 0;
    *(undefined8 *)(lVar22 + -0x1700) = 0;
    *(undefined8 *)(lVar22 + -0x16f8) = 0;
    *(undefined8 *)(lVar22 + -0x16f0) = 0;
    *(undefined8 *)(lVar22 + -0x16e8) = 0;
    *(undefined8 *)(lVar22 + -0x16e0) = 0;
    *(undefined8 *)(lVar22 + -0x16d8) = 0;
    *(undefined8 *)(lVar22 + -0x16d0) = 0;
    *(undefined8 *)(lVar22 + -0x16c8) = 0;
    *(undefined8 *)(lVar22 + -0x16c0) = 0;
    *(undefined8 *)(lVar22 + -0x16b8) = 0;
  }
  (**(code **)(*plVar1 + 0x10))(plVar1);
  if ((bStack_1858 & 1) == 0) {
    puVar13 = &uStack_1857;
    uVar11 = (uint)(bStack_1858 >> 1);
  }
  else {
    puVar13 = (undefined4 *)CONCAT53(uStack_1845,CONCAT21(uStack_1847,uStack_1848));
    uVar11 = CONCAT31((undefined3)uStack_184f,bStack_1850);
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,puVar13,uVar11);
  (**(code **)(*plVar1 + 0x20))(plVar1,&bStack_1898);
  uVar7 = CONCAT51(uStack_1897,bStack_1898);
  uVar8 = CONCAT16(uStack_188a,CONCAT24(uStack_188c,uStack_1890));
  uStack_1420 = ((ulong)(uStack_1892 >> 8) | ((ulong)uStack_1892 & 0xff) << 8 |
                 ((ulong)uVar7 & 0xff0000000000) >> 0x18 | ((ulong)uVar7 & 0xff00000000) >> 8 |
                 ((ulong)uVar7 & 0xff000000) << 8 | ((ulong)uVar7 & 0xff0000) << 0x18 |
                 ((ulong)uVar7 & 0xff00) << 0x28 | CONCAT26(uStack_1892,uVar7) << 0x38) ^ uStack_ad0
  ;
  uStack_1418 = ((ulong)bStack_1889 | ((ulong)uVar8 & 0xff000000000000) >> 0x28 |
                 ((ulong)uVar8 & 0xff0000000000) >> 0x18 | ((ulong)uVar8 & 0xff00000000) >> 8 |
                 ((ulong)uVar8 & 0xff000000) << 8 | ((ulong)uVar8 & 0xff0000) << 0x18 |
                 ((ulong)uVar8 & 0xff00) << 0x28 | CONCAT17(bStack_1889,uVar8) << 0x38) ^ uStack_ac8
  ;
  puStack_1428 = &UNK_0ef512d0;
  if (uStack_1418 == 0 && uStack_1420 == 0) {
    uStack_1420 = 0x9e3779b97f4a7c15;
    uStack_1418 = 0x6a09e667f3bcc909;
  }
  uStack_1408 = 0;
  uStack_1410 = 0;
  if ((bStack_1858 & 1) != 0) {
    uStack_1408 = 0;
    uStack_1410 = 0;
    func_0x0412a280(CONCAT53(uStack_1845,CONCAT21(uStack_1847,uStack_1848)),
                    CONCAT35(uStack_1853,CONCAT41(uStack_1857,bStack_1858)) & 0xfffffffffffffffe);
  }
  puVar13 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,4);
  if (puVar13 == (undefined4 *)0x0) {
    func_0x0eec74c0(4,0);
  }
  bStack_1898 = (byte)puVar13;
  uStack_1897 = (undefined5)((ulong)puVar13 >> 8);
  uStack_1892 = (ushort)((ulong)puVar13 >> 0x30);
  puStack_1888 = (undefined5 *)(puVar13 + 1);
  *puVar13 = 0x3f800000;
  uStack_1890 = (uint)puStack_1888;
  uStack_188c = (undefined2)((ulong)puStack_1888 >> 0x20);
  uStack_188a = (undefined1)((ulong)puStack_1888 >> 0x30);
  bStack_1889 = (byte)((ulong)puStack_1888 >> 0x38);
  func_0x0d3411f0(&bStack_1858,&puStack_1428,0xfffffffb,&bStack_1898,1);
  lVar12 = CONCAT26(uStack_1892,CONCAT51(uStack_1897,bStack_1898));
  if (lVar12 != 0) {
    uStack_1890 = (uint)CONCAT51(uStack_1897,bStack_1898);
    uStack_188c = (undefined2)((uint5)uStack_1897 >> 0x18);
    uStack_188a = (undefined1)uStack_1892;
    bStack_1889 = (byte)(uStack_1892 >> 8);
    func_0x0412a280(lVar12,(long)puStack_1888 - lVar12);
  }
  bStack_1898 = 0x1a;
  uStack_1897 = 0x63656e696d;
  uStack_1892 = 0x6172;
  uStack_1890 = 0x6f3a7466;
  uStack_188c = 0x6572;
  uStack_188a = 0;
  if (*(char *)(lVar22 + -0x16b0) == '\0') {
    *(undefined1 *)(lVar22 + -0x16b0) = 1;
    *(undefined **)(lVar22 + -0x1750) = &UNK_0f53bd88;
    *(undefined8 *)(lVar22 + -0x1738) = 0x1032547698badcfe;
    uVar17 = _UNK_014e11d8;
    *(undefined8 *)(lVar22 + -0x1748) = _DAT_014e11d0;
    *(undefined8 *)(lVar22 + -0x1740) = uVar17;
    *(undefined8 *)(lVar22 + -0x1730) = 0;
    *(undefined8 *)(lVar22 + -0x1728) = 0;
    *(undefined8 *)(lVar22 + -0x1720) = 0;
    *(undefined8 *)(lVar22 + -0x1718) = 0;
    *(undefined8 *)(lVar22 + -0x1710) = 0;
    *(undefined8 *)(lVar22 + -0x1708) = 0;
    *(undefined8 *)(lVar22 + -0x1700) = 0;
    *(undefined8 *)(lVar22 + -0x16f8) = 0;
    *(undefined8 *)(lVar22 + -0x16f0) = 0;
    *(undefined8 *)(lVar22 + -0x16e8) = 0;
    *(undefined8 *)(lVar22 + -0x16e0) = 0;
    *(undefined8 *)(lVar22 + -0x16d8) = 0;
    *(undefined8 *)(lVar22 + -0x16d0) = 0;
    *(undefined8 *)(lVar22 + -0x16c8) = 0;
    *(undefined8 *)(lVar22 + -0x16c0) = 0;
    *(undefined8 *)(lVar22 + -0x16b8) = 0;
  }
  (**(code **)(*plVar1 + 0x10))(plVar1);
  puVar15 = puStack_1888;
  uVar11 = uStack_1890;
  if ((bStack_1898 & 1) == 0) {
    puVar15 = &uStack_1897;
    uVar11 = (uint)(bStack_1898 >> 1);
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,puVar15,uVar11);
  (**(code **)(*plVar1 + 0x20))(plVar1,&puStack_17c8);
  uVar18 = ((ulong)puStack_17c8 >> 0x38 | ((ulong)puStack_17c8 & 0xff000000000000) >> 0x28 |
            ((ulong)puStack_17c8 & 0xff0000000000) >> 0x18 |
            ((ulong)puStack_17c8 & 0xff00000000) >> 8 | ((ulong)puStack_17c8 & 0xff000000) << 8 |
            ((ulong)puStack_17c8 & 0xff0000) << 0x18 | ((ulong)puStack_17c8 & 0xff00) << 0x28 |
           (long)puStack_17c8 << 0x38) ^ uStack_ad0;
  uVar21 = (uStack_17c0 >> 0x38 | (uStack_17c0 & 0xff000000000000) >> 0x28 |
            (uStack_17c0 & 0xff0000000000) >> 0x18 | (uStack_17c0 & 0xff00000000) >> 8 |
            (uStack_17c0 & 0xff000000) << 8 | (uStack_17c0 & 0xff0000) << 0x18 |
            (uStack_17c0 & 0xff00) << 0x28 | uStack_17c0 << 0x38) ^ uStack_ac8;
  if (uVar21 == 0 && uVar18 == 0) {
    uVar18 = 0x9e3779b97f4a7c15;
    uVar21 = 0x6a09e667f3bcc909;
  }
  if ((bStack_1898 & 1) != 0) {
    func_0x0412a280(puStack_1888,
                    CONCAT26(uStack_1892,CONCAT51(uStack_1897,bStack_1898)) & 0xfffffffffffffffe);
  }
  FUN_049cce40(&bStack_1898,&bStack_12d8);
  FUN_049cce40(&puStack_17c8,&bStack_1698);
  FUN_049cce40(&puStack_1788,&bStack_18d8);
  FUN_049cce40(&puStack_1748,&bStack_1858);
  uVar19 = uVar21 ^ uVar18;
  uVar20 = uVar19 << 0x15 ^ (uVar18 << 0x31 | uVar18 >> 0xf) ^ uVar19;
  uVar19 = (uVar19 << 0x1c | uVar19 >> 0x24) + uVar20;
  uStack_14d0 = ((uVar21 + uVar18) * 0x20000 | uVar21 + uVar18 >> 0x2f) + uVar18;
  uStack_14c8 = (uVar19 * 0x20000 | uVar19 >> 0x2f) + uVar20;
  uStack_15b8 = (undefined4 *)CONCAT26(uStack_1892,CONCAT51(uStack_1897,bStack_1898));
  puStack_15b0 = (undefined4 *)
                 CONCAT17(bStack_1889,CONCAT16(uStack_188a,CONCAT24(uStack_188c,uStack_1890)));
  puStack_14d8 = &UNK_0ef51388;
  uStack_14ec = uStack_1728._4_4_;
  uStack_14f0 = (undefined4)uStack_1728;
  uStack_14f4 = uStack_1730._4_4_;
  uStack_14f8 = (undefined4)uStack_1730;
  uStack_1500 = uStack_1738;
  uStack_1508 = uStack_1740;
  puStack_1510 = puStack_1748;
  uStack_1528 = uStack_1768;
  uStack_1530 = uStack_1770;
  uStack_1538 = uStack_1778;
  uStack_1540 = uStack_1780;
  puStack_1548 = puStack_1788;
  uStack_1558 = uStack_17a0;
  uStack_1560 = uStack_17a8;
  uStack_1568 = uStack_17b0;
  uStack_1570 = uStack_17b8;
  uStack_1578 = uStack_17c0;
  puStack_1580 = puStack_17c8;
  lStack_1590 = lStack_1870;
  lStack_1598 = lStack_1878;
  lStack_15a0 = lStack_1880;
  puStack_15a8 = puStack_1888;
  uStack_1720 = 0;
  uStack_1728 = 0;
  uStack_1730 = 0;
  uStack_1738 = 0;
  uStack_1740 = 0;
  puStack_1748 = (undefined *)0x0;
  uStack_1760 = 0;
  uStack_1768 = 0;
  uStack_1770 = 0;
  uStack_1778 = 0;
  uStack_1780 = 0;
  puStack_1788 = (undefined *)0x0;
  uStack_17a0 = 0;
  uStack_17a8 = 0;
  uStack_17b0 = 0;
  uStack_17b8 = 0;
  uStack_17c0 = 0;
  puStack_17c8 = (undefined *)0x0;
  lStack_1870 = 0;
  lStack_1878 = 0;
  lStack_1880 = 0;
  puStack_1888 = (undefined5 *)0x0;
  bStack_1889 = 0;
  uStack_188a = 0;
  uStack_188c = 0;
  uStack_1890 = 0;
  uStack_1892 = 0;
  uStack_1897 = 0;
  bStack_1898 = 0;
  if (lStack_1840 != 0) {
    lStack_1838 = lStack_1840;
    func_0x0412a280(lStack_1840,lStack_1830 - lStack_1840);
  }
  lVar12 = CONCAT35(uStack_1853,CONCAT41(uStack_1857,bStack_1858));
  if (lVar12 != 0) {
    _uStack_1853 = CONCAT13(bStack_1858,uStack_1853);
    uStack_184f = uStack_1857;
    _uStack_184b = CONCAT13(uStack_1848,uStack_1853);
    func_0x0412a280(lVar12,CONCAT53(uStack_1845,CONCAT21(uStack_1847,uStack_1848)) - lVar12);
  }
  if (lStack_18c0 != 0) {
    lStack_18b8 = lStack_18c0;
    func_0x0412a280(lStack_18c0,lStack_18b0 - lStack_18c0);
  }
  lVar12 = CONCAT35(uStack_18d3,CONCAT41(uStack_18d7,bStack_18d8));
  if (lVar12 != 0) {
    _uStack_18d3 = CONCAT13(bStack_18d8,uStack_18d3);
    uStack_18cf = uStack_18d7;
    _uStack_18cb = CONCAT13(uStack_18c8,uStack_18d3);
    func_0x0412a280(lVar12,CONCAT26(uStack_18c2,
                                    CONCAT15(uStack_18c3,
                                             CONCAT23(uStack_18c5,CONCAT21(uStack_18c7,uStack_18c8))
                                            )) - lVar12);
  }
  if (lStack_1680 != 0) {
    lStack_1678 = lStack_1680;
    func_0x0412a280(lStack_1680,lStack_1670 - lStack_1680);
  }
  uVar4 = _uStack_1693;
  lVar12 = CONCAT35(uStack_1693,CONCAT41(uStack_1697,bStack_1698));
  if (lVar12 != 0) {
    _uStack_1693 = CONCAT13(bStack_1698,uStack_1693);
    uStack_168f = uStack_1697;
    uStack_168b = (undefined2)uVar4;
    bStack_1689 = (byte)((uint)uVar4 >> 0x10);
    func_0x0412a280(lVar12,CONCAT17(uStack_1681,
                                    CONCAT16(uStack_1682,
                                             CONCAT15(uStack_1683,CONCAT41(uStack_1687,uStack_1688))
                                            )) - lVar12);
  }
  if (lStack_12c0 != 0) {
    lStack_12b8 = lStack_12c0;
    func_0x0412a280(lStack_12c0,lStack_12b0 - lStack_12c0);
  }
  lVar12 = CONCAT35(uStack_12d3,CONCAT41(uStack_12d7,bStack_12d8));
  if (lVar12 != 0) {
    bStack_12d0 = bStack_12d8;
    uStack_12cf = uStack_12d7;
    uStack_12cb = uStack_12d3;
    func_0x0412a280(lVar12,CONCAT62(uStack_12c6,CONCAT11(uStack_12c7,uStack_12c8)) - lVar12);
  }
  bStack_12d8 = 0x20;
  uStack_12d7 = _DAT_012bde31;
  _uStack_12d3 = _UNK_012bde35;
  uStack_12cf = _UNK_012bde39;
  _uStack_12cb = _UNK_012bde3d;
  uStack_12c7 = 0;
  if (*(char *)(lVar22 + -0x16b0) == '\0') {
    *(undefined1 *)(lVar22 + -0x16b0) = 1;
    *(undefined **)(lVar22 + -0x1750) = &UNK_0f53bd88;
    *(undefined8 *)(lVar22 + -0x1738) = 0x1032547698badcfe;
    uVar17 = _UNK_014e11d8;
    *(undefined8 *)(lVar22 + -0x1748) = _DAT_014e11d0;
    *(undefined8 *)(lVar22 + -0x1740) = uVar17;
    *(undefined8 *)(lVar22 + -0x1730) = 0;
    *(undefined8 *)(lVar22 + -0x1728) = 0;
    *(undefined8 *)(lVar22 + -0x1720) = 0;
    *(undefined8 *)(lVar22 + -0x1718) = 0;
    *(undefined8 *)(lVar22 + -0x1710) = 0;
    *(undefined8 *)(lVar22 + -0x1708) = 0;
    *(undefined8 *)(lVar22 + -0x1700) = 0;
    *(undefined8 *)(lVar22 + -0x16f8) = 0;
    *(undefined8 *)(lVar22 + -0x16f0) = 0;
    *(undefined8 *)(lVar22 + -0x16e8) = 0;
    *(undefined8 *)(lVar22 + -0x16e0) = 0;
    *(undefined8 *)(lVar22 + -0x16d8) = 0;
    *(undefined8 *)(lVar22 + -0x16d0) = 0;
    *(undefined8 *)(lVar22 + -0x16c8) = 0;
    *(undefined8 *)(lVar22 + -0x16c0) = 0;
    *(undefined8 *)(lVar22 + -0x16b8) = 0;
  }
  (**(code **)(*plVar1 + 0x10))(plVar1);
  if ((bStack_12d8 & 1) == 0) {
    puVar13 = &uStack_12d7;
    uVar11 = (uint)(bStack_12d8 >> 1);
  }
  else {
    puVar13 = (undefined4 *)CONCAT62(uStack_12c6,CONCAT11(uStack_12c7,uStack_12c8));
    uVar11 = CONCAT31((undefined3)uStack_12cf,bStack_12d0);
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,puVar13,uVar11);
  (**(code **)(*plVar1 + 0x20))(plVar1,&bStack_18d8);
  uVar5 = CONCAT41(uStack_18d7,bStack_18d8);
  uVar6 = CONCAT41(uStack_18cf,bStack_18d0);
  uStack_17c0 = ((ulong)(uStack_18d3 >> 0x10) | (ulong)uStack_18d3 & 0xff00 |
                 ((ulong)uStack_18d3 & 0xff) << 0x10 | ((ulong)uVar5 & 0xff00000000) >> 8 |
                 ((ulong)uVar5 & 0xff000000) << 8 | ((ulong)uVar5 & 0xff0000) << 0x18 |
                 ((ulong)uVar5 & 0xff00) << 0x28 | CONCAT35(uStack_18d3,uVar5) << 0x38) ^ uStack_ad0
  ;
  uStack_17b8 = ((ulong)(uStack_18cb >> 0x10) | (ulong)uStack_18cb & 0xff00 |
                 ((ulong)uStack_18cb & 0xff) << 0x10 | ((ulong)uVar6 & 0xff00000000) >> 8 |
                 ((ulong)uVar6 & 0xff000000) << 8 | ((ulong)uVar6 & 0xff0000) << 0x18 |
                 ((ulong)uVar6 & 0xff00) << 0x28 | CONCAT35(uStack_18cb,uVar6) << 0x38) ^ uStack_ac8
  ;
  puStack_17c8 = &UNK_0ef512d0;
  if (uStack_17b8 == 0 && uStack_17c0 == 0) {
    uStack_17c0 = 0x9e3779b97f4a7c15;
    uStack_17b8 = 0x6a09e667f3bcc909;
  }
  uStack_17a8 = uStack_17a8 & 0xffffffffffffff00;
  uStack_17b0 = 0;
  if ((bStack_12d8 & 1) != 0) {
    uStack_17b0 = 0;
    func_0x0412a280(CONCAT62(uStack_12c6,CONCAT11(uStack_12c7,uStack_12c8)),
                    CONCAT35(uStack_12d3,CONCAT41(uStack_12d7,bStack_12d8)) & 0xfffffffffffffffe);
  }
  puVar13 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,4);
  if (puVar13 == (undefined4 *)0x0) {
    func_0x0eec74c0(4,0);
  }
  bStack_18d8 = (byte)puVar13;
  uStack_18d7 = (undefined4)((ulong)puVar13 >> 8);
  uStack_18d3 = (uint3)((ulong)puVar13 >> 0x28);
  puVar14 = puVar13 + 1;
  uStack_18c8 = SUB81(puVar14,0);
  uStack_18c7 = (undefined2)((ulong)puVar14 >> 8);
  uStack_18c5 = (undefined2)((ulong)puVar14 >> 0x18);
  uStack_18c3 = (undefined1)((ulong)puVar14 >> 0x28);
  uStack_18c2 = (undefined2)((ulong)puVar14 >> 0x30);
  *puVar13 = 0x3f800000;
  _uStack_18d3 = CONCAT13(uStack_18c8,uStack_18d3);
  uStack_18cf = (undefined4)((ulong)puVar14 >> 8);
  uStack_18cb = (uint3)((ulong)puVar14 >> 0x28);
  func_0x0d3411f0(&bStack_12d8,&puStack_17c8,0xfffffff8,&bStack_18d8,1);
  lVar12 = CONCAT35(uStack_18d3,CONCAT41(uStack_18d7,bStack_18d8));
  if (lVar12 != 0) {
    _uStack_18d3 = CONCAT13(bStack_18d8,uStack_18d3);
    uStack_18cf = uStack_18d7;
    uStack_18cb = uStack_18d3;
    func_0x0412a280(lVar12,CONCAT26(uStack_18c2,
                                    CONCAT15(uStack_18c3,
                                             CONCAT23(uStack_18c5,CONCAT21(uStack_18c7,uStack_18c8))
                                            )) - lVar12);
  }
  puVar13 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar13 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar17 = _UNK_012bde54;
  uStack_18c8 = SUB81(puVar13,0);
  uStack_18c7 = (undefined2)((ulong)puVar13 >> 8);
  uStack_18c5 = (undefined2)((ulong)puVar13 >> 0x18);
  uStack_18c3 = (undefined1)((ulong)puVar13 >> 0x28);
  uStack_18c2 = (undefined2)((ulong)puVar13 >> 0x30);
  bStack_18d8 = 0x21;
  uStack_18d7 = 0;
  uStack_18d3 = 0;
  bStack_18d0 = 0x1a;
  uStack_18cf = 0;
  uStack_18cb = 0;
  *(ulong *)((long)puVar13 + 10) = CONCAT26(_UNK_012bde52,CONCAT42(_UNK_012bde4e,_DAT_012bde4c));
  *(undefined8 *)((long)puVar13 + 0x12) = uVar17;
  uVar10 = _UNK_012bde4e;
  uVar9 = _UNK_012bde46;
  uVar4 = CONCAT22(_DAT_012bde4c,_UNK_012bde4a);
  *puVar13 = _DAT_012bde42;
  puVar13[1] = uVar9;
  puVar13[2] = uVar4;
  puVar13[3] = uVar10;
  *(undefined1 *)((long)puVar13 + 0x1a) = 0;
  if (*(char *)(lVar22 + -0x16b0) == '\0') {
    *(undefined1 *)(lVar22 + -0x16b0) = 1;
    *(undefined **)(lVar22 + -0x1750) = &UNK_0f53bd88;
    *(undefined8 *)(lVar22 + -0x1738) = 0x1032547698badcfe;
    uVar17 = _UNK_014e11d8;
    *(undefined8 *)(lVar22 + -0x1748) = _DAT_014e11d0;
    *(undefined8 *)(lVar22 + -0x1740) = uVar17;
    *(undefined8 *)(lVar22 + -0x1730) = 0;
    *(undefined8 *)(lVar22 + -0x1728) = 0;
    *(undefined8 *)(lVar22 + -0x1720) = 0;
    *(undefined8 *)(lVar22 + -0x1718) = 0;
    *(undefined8 *)(lVar22 + -0x1710) = 0;
    *(undefined8 *)(lVar22 + -0x1708) = 0;
    *(undefined8 *)(lVar22 + -0x1700) = 0;
    *(undefined8 *)(lVar22 + -0x16f8) = 0;
    *(undefined8 *)(lVar22 + -0x16f0) = 0;
    *(undefined8 *)(lVar22 + -0x16e8) = 0;
    *(undefined8 *)(lVar22 + -0x16e0) = 0;
    *(undefined8 *)(lVar22 + -0x16d8) = 0;
    *(undefined8 *)(lVar22 + -0x16d0) = 0;
    *(undefined8 *)(lVar22 + -0x16c8) = 0;
    *(undefined8 *)(lVar22 + -0x16c0) = 0;
    *(undefined8 *)(lVar22 + -0x16b8) = 0;
  }
  (**(code **)(*plVar1 + 0x10))(plVar1);
  if ((bStack_18d8 & 1) == 0) {
    uVar11 = (uint)(bStack_18d8 >> 1);
    puVar13 = &uStack_18d7;
  }
  else {
    puVar13 = (undefined4 *)
              CONCAT26(uStack_18c2,
                       CONCAT15(uStack_18c3,CONCAT23(uStack_18c5,CONCAT21(uStack_18c7,uStack_18c8)))
                      );
    uVar11 = CONCAT31((undefined3)uStack_18cf,bStack_18d0);
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,puVar13,uVar11);
  (**(code **)(*plVar1 + 0x20))(plVar1,&bStack_1858);
  uVar5 = CONCAT41(uStack_1857,bStack_1858);
  uVar6 = CONCAT41(uStack_184f,bStack_1850);
  uStack_1780 = ((ulong)(uStack_1853 >> 0x10) | (ulong)uStack_1853 & 0xff00 |
                 ((ulong)uStack_1853 & 0xff) << 0x10 | ((ulong)uVar5 & 0xff00000000) >> 8 |
                 ((ulong)uVar5 & 0xff000000) << 8 | ((ulong)uVar5 & 0xff0000) << 0x18 |
                 ((ulong)uVar5 & 0xff00) << 0x28 | CONCAT35(uStack_1853,uVar5) << 0x38) ^ uStack_ad0
  ;
  uStack_1778 = ((ulong)(uStack_184b >> 0x10) | (ulong)uStack_184b & 0xff00 |
                 ((ulong)uStack_184b & 0xff) << 0x10 | ((ulong)uVar6 & 0xff00000000) >> 8 |
                 ((ulong)uVar6 & 0xff000000) << 8 | ((ulong)uVar6 & 0xff0000) << 0x18 |
                 ((ulong)uVar6 & 0xff00) << 0x28 | CONCAT35(uStack_184b,uVar6) << 0x38) ^ uStack_ac8
  ;
  puStack_1788 = &UNK_0ef512d0;
  if (uStack_1778 == 0 && uStack_1780 == 0) {
    uStack_1780 = 0x9e3779b97f4a7c15;
    uStack_1778 = 0x6a09e667f3bcc909;
  }
  uStack_1768 = uStack_1768 & 0xffffffffffffff00;
  uStack_1770 = 0;
  if ((bStack_18d8 & 1) != 0) {
    uStack_1770 = 0;
    func_0x0412a280(CONCAT26(uStack_18c2,
                             CONCAT15(uStack_18c3,
                                      CONCAT23(uStack_18c5,CONCAT21(uStack_18c7,uStack_18c8)))),
                    CONCAT35(uStack_18d3,CONCAT41(uStack_18d7,bStack_18d8)) & 0xfffffffffffffffe);
  }
  puVar13 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,4);
  if (puVar13 == (undefined4 *)0x0) {
    func_0x0eec74c0(4,0);
  }
  bStack_1858 = (byte)puVar13;
  uStack_1857 = (undefined4)((ulong)puVar13 >> 8);
  uStack_1853 = (uint3)((ulong)puVar13 >> 0x28);
  puVar14 = puVar13 + 1;
  uStack_1848 = SUB81(puVar14,0);
  uStack_1847 = (undefined2)((ulong)puVar14 >> 8);
  uStack_1845 = (undefined5)((ulong)puVar14 >> 0x18);
  *puVar13 = 0x3f800000;
  _uStack_1853 = CONCAT13(uStack_1848,uStack_1853);
  uStack_184f = (undefined4)((ulong)puVar14 >> 8);
  uStack_184b = (uint3)((ulong)puVar14 >> 0x28);
  func_0x0d3411f0(&bStack_18d8,&puStack_1788,0xfffffff8,&bStack_1858,1);
  lVar12 = CONCAT35(uStack_1853,CONCAT41(uStack_1857,bStack_1858));
  if (lVar12 != 0) {
    _uStack_1853 = CONCAT13(bStack_1858,uStack_1853);
    uStack_184f = uStack_1857;
    uStack_184b = uStack_1853;
    func_0x0412a280(lVar12,CONCAT53(uStack_1845,CONCAT21(uStack_1847,uStack_1848)) - lVar12);
  }
  puVar13 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar13 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar10 = _UNK_01412d6d;
  uVar9 = _UNK_01412d69;
  uVar4 = _UNK_01412d65;
  uStack_1848 = SUB81(puVar13,0);
  uStack_1847 = (undefined2)((ulong)puVar13 >> 8);
  uStack_1845 = (undefined5)((ulong)puVar13 >> 0x18);
  bStack_1858 = 0x21;
  uStack_1857 = 0;
  uStack_1853 = 0;
  bStack_1850 = 0x18;
  uStack_184f = 0;
  uStack_184b = 0;
  *puVar13 = _DAT_01412d61;
  puVar13[1] = uVar4;
  puVar13[2] = uVar9;
  puVar13[3] = uVar10;
  *(undefined8 *)(puVar13 + 4) = 0x615f65676469725f;
  *(undefined1 *)(puVar13 + 6) = 0;
  if (*(char *)(lVar22 + -0x16b0) == '\0') {
    *(undefined1 *)(lVar22 + -0x16b0) = 1;
    *(undefined **)(lVar22 + -0x1750) = &UNK_0f53bd88;
    *(undefined8 *)(lVar22 + -0x1738) = 0x1032547698badcfe;
    uVar17 = _UNK_014e11d8;
    *(undefined8 *)(lVar22 + -0x1748) = _DAT_014e11d0;
    *(undefined8 *)(lVar22 + -0x1740) = uVar17;
    *(undefined8 *)(lVar22 + -0x1730) = 0;
    *(undefined8 *)(lVar22 + -0x1728) = 0;
    *(undefined8 *)(lVar22 + -0x1720) = 0;
    *(undefined8 *)(lVar22 + -0x1718) = 0;
    *(undefined8 *)(lVar22 + -0x1710) = 0;
    *(undefined8 *)(lVar22 + -0x1708) = 0;
    *(undefined8 *)(lVar22 + -0x1700) = 0;
    *(undefined8 *)(lVar22 + -0x16f8) = 0;
    *(undefined8 *)(lVar22 + -0x16f0) = 0;
    *(undefined8 *)(lVar22 + -0x16e8) = 0;
    *(undefined8 *)(lVar22 + -0x16e0) = 0;
    *(undefined8 *)(lVar22 + -0x16d8) = 0;
    *(undefined8 *)(lVar22 + -0x16d0) = 0;
    *(undefined8 *)(lVar22 + -0x16c8) = 0;
    *(undefined8 *)(lVar22 + -0x16c0) = 0;
    *(undefined8 *)(lVar22 + -0x16b8) = 0;
  }
  (**(code **)(*plVar1 + 0x10))(plVar1);
  if ((bStack_1858 & 1) == 0) {
    uVar11 = (uint)(bStack_1858 >> 1);
    puVar13 = &uStack_1857;
  }
  else {
    puVar13 = (undefined4 *)CONCAT53(uStack_1845,CONCAT21(uStack_1847,uStack_1848));
    uVar11 = CONCAT31((undefined3)uStack_184f,bStack_1850);
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,puVar13,uVar11);
  (**(code **)(*plVar1 + 0x20))(plVar1,&bStack_1898);
  uVar7 = CONCAT51(uStack_1897,bStack_1898);
  uVar8 = CONCAT16(uStack_188a,CONCAT24(uStack_188c,uStack_1890));
  uStack_1740 = ((ulong)(uStack_1892 >> 8) | ((ulong)uStack_1892 & 0xff) << 8 |
                 ((ulong)uVar7 & 0xff0000000000) >> 0x18 | ((ulong)uVar7 & 0xff00000000) >> 8 |
                 ((ulong)uVar7 & 0xff000000) << 8 | ((ulong)uVar7 & 0xff0000) << 0x18 |
                 ((ulong)uVar7 & 0xff00) << 0x28 | CONCAT26(uStack_1892,uVar7) << 0x38) ^ uStack_ad0
  ;
  uStack_1738 = ((ulong)bStack_1889 | ((ulong)uVar8 & 0xff000000000000) >> 0x28 |
                 ((ulong)uVar8 & 0xff0000000000) >> 0x18 | ((ulong)uVar8 & 0xff00000000) >> 8 |
                 ((ulong)uVar8 & 0xff000000) << 8 | ((ulong)uVar8 & 0xff0000) << 0x18 |
                 ((ulong)uVar8 & 0xff00) << 0x28 | CONCAT17(bStack_1889,uVar8) << 0x38) ^ uStack_ac8
  ;
  puStack_1748 = &UNK_0ef512d0;
  if (uStack_1738 == 0 && uStack_1740 == 0) {
    uStack_1740 = 0x9e3779b97f4a7c15;
    uStack_1738 = 0x6a09e667f3bcc909;
  }
  uStack_1728 = uStack_1728 & 0xffffffffffffff00;
  uStack_1730 = 0;
  if ((bStack_1858 & 1) != 0) {
    uStack_1730 = 0;
    func_0x0412a280(CONCAT53(uStack_1845,CONCAT21(uStack_1847,uStack_1848)),
                    CONCAT35(uStack_1853,CONCAT41(uStack_1857,bStack_1858)) & 0xfffffffffffffffe);
  }
  puVar13 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,4);
  if (puVar13 == (undefined4 *)0x0) {
    func_0x0eec74c0(4,0);
  }
  bStack_1898 = (byte)puVar13;
  uStack_1897 = (undefined5)((ulong)puVar13 >> 8);
  uStack_1892 = (ushort)((ulong)puVar13 >> 0x30);
  puStack_1888 = (undefined5 *)(puVar13 + 1);
  *puVar13 = 0x3f800000;
  uStack_1890 = (uint)puStack_1888;
  uStack_188c = (undefined2)((ulong)puStack_1888 >> 0x20);
  uStack_188a = (undefined1)((ulong)puStack_1888 >> 0x30);
  bStack_1889 = (byte)((ulong)puStack_1888 >> 0x38);
  func_0x0d3411f0(&bStack_1858,&puStack_1748,0xfffffff9,&bStack_1898,1);
  lVar12 = CONCAT26(uStack_1892,CONCAT51(uStack_1897,bStack_1898));
  if (lVar12 != 0) {
    uStack_1890 = (uint)CONCAT51(uStack_1897,bStack_1898);
    uStack_188c = (undefined2)((uint5)uStack_1897 >> 0x18);
    uStack_188a = (undefined1)uStack_1892;
    bStack_1889 = (byte)(uStack_1892 >> 8);
    func_0x0412a280(lVar12,(long)puStack_1888 - lVar12);
  }
  puVar15 = (undefined5 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar15 == (undefined5 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar10 = _UNK_014ae7e3;
  uVar9 = _UNK_014ae7df;
  uVar4 = _UNK_014ae7db;
  bStack_1898 = 0x21;
  uStack_1897 = 0;
  uStack_1892 = 0;
  uStack_1890 = 0x18;
  uStack_188c = 0;
  uStack_188a = 0;
  bStack_1889 = 0;
  *(undefined4 *)puVar15 = _DAT_014ae7d7;
  *(undefined4 *)((long)puVar15 + 4) = uVar4;
  *(undefined4 *)(puVar15 + 1) = uVar9;
  *(undefined4 *)((long)puVar15 + 0xc) = uVar10;
  *(undefined8 *)(puVar15 + 2) = 0x625f65676469725f;
  *(undefined1 *)(puVar15 + 3) = 0;
  if (*(char *)(lVar22 + -0x16b0) == '\0') {
    *(undefined1 *)(lVar22 + -0x16b0) = 1;
    *(undefined **)(lVar22 + -0x1750) = &UNK_0f53bd88;
    *(undefined8 *)(lVar22 + -0x1738) = 0x1032547698badcfe;
    uVar17 = _UNK_014e11d8;
    *(undefined8 *)(lVar22 + -0x1748) = _DAT_014e11d0;
    *(undefined8 *)(lVar22 + -0x1740) = uVar17;
    *(undefined8 *)(lVar22 + -0x1730) = 0;
    *(undefined8 *)(lVar22 + -0x1728) = 0;
    *(undefined8 *)(lVar22 + -0x1720) = 0;
    *(undefined8 *)(lVar22 + -0x1718) = 0;
    *(undefined8 *)(lVar22 + -0x1710) = 0;
    *(undefined8 *)(lVar22 + -0x1708) = 0;
    *(undefined8 *)(lVar22 + -0x1700) = 0;
    *(undefined8 *)(lVar22 + -0x16f8) = 0;
    *(undefined8 *)(lVar22 + -0x16f0) = 0;
    *(undefined8 *)(lVar22 + -0x16e8) = 0;
    *(undefined8 *)(lVar22 + -0x16e0) = 0;
    *(undefined8 *)(lVar22 + -0x16d8) = 0;
    *(undefined8 *)(lVar22 + -0x16d0) = 0;
    *(undefined8 *)(lVar22 + -0x16c8) = 0;
    *(undefined8 *)(lVar22 + -0x16c0) = 0;
    *(undefined8 *)(lVar22 + -0x16b8) = 0;
  }
  puStack_1888 = puVar15;
  (**(code **)(*plVar1 + 0x10))(plVar1);
  puVar15 = puStack_1888;
  uVar11 = uStack_1890;
  if ((bStack_1898 & 1) == 0) {
    puVar15 = &uStack_1897;
    uVar11 = (uint)(bStack_1898 >> 1);
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,puVar15,uVar11);
  (**(code **)(*plVar1 + 0x20))(plVar1,&puStack_1818);
  uStack_17e8 = ((ulong)puStack_1818 >> 0x38 | ((ulong)puStack_1818 & 0xff000000000000) >> 0x28 |
                 ((ulong)puStack_1818 & 0xff0000000000) >> 0x18 |
                 ((ulong)puStack_1818 & 0xff00000000) >> 8 | ((ulong)puStack_1818 & 0xff000000) << 8
                 | ((ulong)puStack_1818 & 0xff0000) << 0x18 | ((ulong)puStack_1818 & 0xff00) << 0x28
                | (long)puStack_1818 << 0x38) ^ uStack_ad0;
  uStack_17e0 = ((ulong)puStack_1810 >> 0x38 | ((ulong)puStack_1810 & 0xff000000000000) >> 0x28 |
                 ((ulong)puStack_1810 & 0xff0000000000) >> 0x18 |
                 ((ulong)puStack_1810 & 0xff00000000) >> 8 | ((ulong)puStack_1810 & 0xff000000) << 8
                 | ((ulong)puStack_1810 & 0xff0000) << 0x18 | ((ulong)puStack_1810 & 0xff00) << 0x28
                | (long)puStack_1810 << 0x38) ^ uStack_ac8;
  puStack_17f0 = &UNK_0ef512d0;
  if (uStack_17e0 == 0 && uStack_17e8 == 0) {
    uStack_17e8 = 0x9e3779b97f4a7c15;
    uStack_17e0 = 0x6a09e667f3bcc909;
  }
  uStack_17d0 = 0;
  uStack_17d8 = 0;
  if ((bStack_1898 & 1) != 0) {
    uStack_17d0 = 0;
    uStack_17d8 = 0;
    func_0x0412a280(puStack_1888,
                    CONCAT26(uStack_1892,CONCAT51(uStack_1897,bStack_1898)) & 0xfffffffffffffffe);
  }
  puVar13 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,4);
  if (puVar13 == (undefined4 *)0x0) {
    func_0x0eec74c0(4,0);
  }
  puStack_1810 = puVar13 + 1;
  *puVar13 = 0x3f800000;
  puStack_1818 = puVar13;
  puStack_1808 = puStack_1810;
  func_0x0d3411f0(&bStack_1898,&puStack_17f0,0xfffffff9,&puStack_1818,1);
  if (puStack_1818 != (undefined4 *)0x0) {
    puStack_1810 = puStack_1818;
    func_0x0412a280(puStack_1818,(long)puStack_1808 - (long)puStack_1818);
  }
  FUN_049cce40(&bStack_1698,&bStack_12d8);
  FUN_049cce40(auStack_1660,&bStack_18d8);
  FUN_049cce40(auStack_1628,&bStack_1858);
  FUN_049cce40(auStack_15f0,&bStack_1898);
  if (lStack_1880 != 0) {
    lStack_1878 = lStack_1880;
    func_0x0412a280(lStack_1880,lStack_1870 - lStack_1880);
  }
  lVar12 = CONCAT26(uStack_1892,CONCAT51(uStack_1897,bStack_1898));
  if (lVar12 != 0) {
    uStack_1890 = (uint)CONCAT51(uStack_1897,bStack_1898);
    uStack_188c = (undefined2)((uint5)uStack_1897 >> 0x18);
    uStack_188a = (undefined1)uStack_1892;
    bStack_1889 = (byte)(uStack_1892 >> 8);
    func_0x0412a280(lVar12,(long)puStack_1888 - lVar12);
  }
  if (lStack_1840 != 0) {
    lStack_1838 = lStack_1840;
    func_0x0412a280(lStack_1840,lStack_1830 - lStack_1840);
  }
  lVar12 = CONCAT35(uStack_1853,CONCAT41(uStack_1857,bStack_1858));
  if (lVar12 != 0) {
    bStack_1850 = bStack_1858;
    uStack_184f = uStack_1857;
    uStack_184b = uStack_1853;
    func_0x0412a280(lVar12,CONCAT53(uStack_1845,CONCAT21(uStack_1847,uStack_1848)) - lVar12);
  }
  if (lStack_18c0 != 0) {
    lStack_18b8 = lStack_18c0;
    func_0x0412a280(lStack_18c0,lStack_18b0 - lStack_18c0);
  }
  lVar12 = CONCAT35(uStack_18d3,CONCAT41(uStack_18d7,bStack_18d8));
  if (lVar12 != 0) {
    bStack_18d0 = bStack_18d8;
    uStack_18cf = uStack_18d7;
    uStack_18cb = uStack_18d3;
    func_0x0412a280(lVar12,CONCAT26(uStack_18c2,
                                    CONCAT15(uStack_18c3,
                                             CONCAT23(uStack_18c5,CONCAT21(uStack_18c7,uStack_18c8))
                                            )) - lVar12);
  }
  if (lStack_12c0 != 0) {
    lStack_12b8 = lStack_12c0;
    func_0x0412a280(lStack_12c0,lStack_12b0 - lStack_12c0);
  }
  lVar12 = CONCAT35(uStack_12d3,CONCAT41(uStack_12d7,bStack_12d8));
  if (lVar12 != 0) {
    _uStack_12d3 = CONCAT13(bStack_12d8,uStack_12d3);
    uStack_12cf = uStack_12d7;
    _uStack_12cb = CONCAT13(uStack_12c8,uStack_12d3);
    func_0x0412a280(lVar12,CONCAT62(uStack_12c6,CONCAT11(uStack_12c7,uStack_12c8)) - lVar12);
  }
  func_0x05256180(&bStack_12d8,&puStack_ad8);
  puVar13 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar13 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar17 = _UNK_011ed0bc;
  uStack_18c8 = SUB81(puVar13,0);
  uStack_18c7 = (undefined2)((ulong)puVar13 >> 8);
  uStack_18c5 = (undefined2)((ulong)puVar13 >> 0x18);
  uStack_18c3 = (undefined1)((ulong)puVar13 >> 0x28);
  uStack_18c2 = (undefined2)((ulong)puVar13 >> 0x30);
  bStack_18d8 = 0x21;
  uStack_18d7 = 0;
  uStack_18d3 = 0;
  bStack_18d0 = 0x1b;
  uStack_18cf = 0;
  uStack_18cb = 0;
  *(ulong *)((long)puVar13 + 0xb) = CONCAT35(_UNK_011ed0b9,CONCAT41(_UNK_011ed0b5,DAT_011ed0b4));
  *(undefined8 *)((long)puVar13 + 0x13) = uVar17;
  uVar10 = _UNK_011ed0b5;
  uVar9 = _UNK_011ed0b1;
  uVar4 = _UNK_011ed0ad;
  *puVar13 = _DAT_011ed0a9;
  puVar13[1] = uVar4;
  puVar13[2] = uVar9;
  puVar13[3] = uVar10;
  *(undefined1 *)((long)puVar13 + 0x1b) = 0;
  if (*(char *)(lVar22 + -0x16b0) == '\0') {
    *(undefined1 *)(lVar22 + -0x16b0) = 1;
    *(undefined **)(lVar22 + -0x1750) = &UNK_0f53bd88;
    *(undefined8 *)(lVar22 + -0x1738) = 0x1032547698badcfe;
    uVar17 = _UNK_014e11d8;
    *(undefined8 *)(lVar22 + -0x1748) = _DAT_014e11d0;
    *(undefined8 *)(lVar22 + -0x1740) = uVar17;
    *(undefined8 *)(lVar22 + -0x1730) = 0;
    *(undefined8 *)(lVar22 + -0x1728) = 0;
    *(undefined8 *)(lVar22 + -0x1720) = 0;
    *(undefined8 *)(lVar22 + -0x1718) = 0;
    *(undefined8 *)(lVar22 + -0x1710) = 0;
    *(undefined8 *)(lVar22 + -0x1708) = 0;
    *(undefined8 *)(lVar22 + -0x1700) = 0;
    *(undefined8 *)(lVar22 + -0x16f8) = 0;
    *(undefined8 *)(lVar22 + -0x16f0) = 0;
    *(undefined8 *)(lVar22 + -0x16e8) = 0;
    *(undefined8 *)(lVar22 + -0x16e0) = 0;
    *(undefined8 *)(lVar22 + -0x16d8) = 0;
    *(undefined8 *)(lVar22 + -0x16d0) = 0;
    *(undefined8 *)(lVar22 + -0x16c8) = 0;
    *(undefined8 *)(lVar22 + -0x16c0) = 0;
    *(undefined8 *)(lVar22 + -0x16b8) = 0;
  }
  (**(code **)(*plVar1 + 0x10))(plVar1);
  if ((bStack_18d8 & 1) == 0) {
    uVar11 = (uint)(bStack_18d8 >> 1);
    puVar13 = &uStack_18d7;
  }
  else {
    puVar13 = (undefined4 *)
              CONCAT26(uStack_18c2,
                       CONCAT15(uStack_18c3,CONCAT23(uStack_18c5,CONCAT21(uStack_18c7,uStack_18c8)))
                      );
    uVar11 = CONCAT31((undefined3)uStack_18cf,bStack_18d0);
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,puVar13,uVar11);
  (**(code **)(*plVar1 + 0x20))(plVar1,&bStack_1858);
  uVar5 = CONCAT41(uStack_1857,bStack_1858);
  uVar6 = CONCAT41(uStack_184f,bStack_1850);
  uVar18 = ((ulong)(uStack_1853 >> 0x10) | (ulong)uStack_1853 & 0xff00 |
            ((ulong)uStack_1853 & 0xff) << 0x10 | ((ulong)uVar5 & 0xff00000000) >> 8 |
            ((ulong)uVar5 & 0xff000000) << 8 | ((ulong)uVar5 & 0xff0000) << 0x18 |
            ((ulong)uVar5 & 0xff00) << 0x28 | CONCAT35(uStack_1853,uVar5) << 0x38) ^ uStack_ad0;
  uVar21 = ((ulong)(uStack_184b >> 0x10) | (ulong)uStack_184b & 0xff00 |
            ((ulong)uStack_184b & 0xff) << 0x10 | ((ulong)uVar6 & 0xff00000000) >> 8 |
            ((ulong)uVar6 & 0xff000000) << 8 | ((ulong)uVar6 & 0xff0000) << 0x18 |
            ((ulong)uVar6 & 0xff00) << 0x28 | CONCAT35(uStack_184b,uVar6) << 0x38) ^ uStack_ac8;
  if (uVar21 == 0 && uVar18 == 0) {
    uVar18 = 0x9e3779b97f4a7c15;
    uVar21 = 0x6a09e667f3bcc909;
  }
  if ((bStack_18d8 & 1) != 0) {
    func_0x0412a280(CONCAT26(uStack_18c2,
                             CONCAT15(uStack_18c3,
                                      CONCAT23(uStack_18c5,CONCAT21(uStack_18c7,uStack_18c8)))),
                    CONCAT35(uStack_18d3,CONCAT41(uStack_18d7,bStack_18d8)) & 0xfffffffffffffffe);
  }
  uStack_14a8 = func_0x0cc41df0(0xf6ff9e0,0xf719bd0,1);
  func_0x05292a50(auStack_ac0,auStack_f78);
  func_0x05292d30(auStack_a48,&bStack_f00);
  puStack_14b8 = auStack_a48;
  FUN_049cce40(auStack_6c8,&uStack_13d8);
  puStack_16c8 = auStack_6c8;
  uStack_14b0 = uVar18;
  FUN_049cce40(auStack_690,&uStack_13a0);
  FUN_049cce40(auStack_658,auStack_1368);
  FUN_049cce40(auStack_620,auStack_1330);
  puStack_5e8 = &UNK_0ef51388;
  uStack_5e0 = (undefined4)uStack_12f0;
  uStack_5dc = uStack_12f0._4_4_;
  uStack_5d8 = (undefined4)uStack_12e8;
  uStack_5d4 = uStack_12e8._4_4_;
  FUN_049cce40(auStack_5d0,&bStack_1698);
  puStack_16d0 = auStack_5d0;
  FUN_049cce40(auStack_598,auStack_1660);
  FUN_049cce40(auStack_560,auStack_1628);
  FUN_049cce40(auStack_528,auStack_15f0);
  FUN_049cce40(auStack_4f0,&uStack_15b8);
  puStack_16d8 = auStack_4f0;
  FUN_049cce40(auStack_4b8,&puStack_1580);
  FUN_049cce40(auStack_480,&puStack_1548);
  FUN_049cce40(auStack_448,&puStack_1510);
  lVar12 = lStack_1708;
  puStack_410 = &UNK_0ef51388;
  uStack_408 = (undefined4)uStack_14d0;
  uStack_404 = uStack_14d0._4_4_;
  uStack_400 = (undefined4)uStack_14c8;
  uStack_3fc = uStack_14c8._4_4_;
  uStack_3f8 = auStack_1710[0];
  plStack_16e0 = &lStack_3f0;
  lStack_3f0 = 0;
  lStack_3e8 = 0;
  lStack_3e0 = 0;
  lVar22 = lStack_1700 - lStack_1708;
  if (lVar22 != 0) {
    if (0x1fd04794a10e6a < (ulong)((lVar22 >> 2) * -0x6ddb372d3c25c755)) {
      func_0x052bdae0();
      goto LAB_05285ce2;
    }
    lVar16 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar22);
    if (lVar16 == 0) {
      func_0x0eec74c0(lVar22,0);
    }
    lStack_3f0 = lVar16;
    lStack_3e8 = lVar16;
    lStack_3e0 = lVar16 + lVar22;
    func_0x0eee2f00(lVar16,lVar12,lVar22);
    lStack_3e8 = lVar16 + lVar22;
  }
  lVar12 = lStack_16b8;
  uStack_3d8 = uStack_16f0;
  uStack_3d0 = auStack_16c0[0];
  plStack_16e8 = &lStack_3c8;
  lStack_3c8 = 0;
  lStack_3c0 = 0;
  lStack_3b8 = 0;
  lVar22 = lStack_16b0 - lStack_16b8;
  if (lVar22 != 0) {
    if (0x1fd04794a10e6a < (ulong)((lVar22 >> 2) * -0x6ddb372d3c25c755)) {
LAB_05285ce2:
      uVar17 = func_0x052bdae0();
      lVar12 = *plStack_16e8;
      if (lVar12 != 0) {
        lStack_3c0 = lVar12;
        func_0x0412a280(lVar12,lStack_3b8 - lVar12);
      }
      lVar12 = *plStack_16e0;
      if (lVar12 != 0) {
        lStack_3e8 = lVar12;
        func_0x0412a280(lVar12,lStack_3e0 - lVar12);
      }
      func_0x052930f0(puStack_16d8);
      func_0x052931e0(puStack_16d0);
      func_0x052932d0(puStack_16c8);
      func_0x052933c0(puStack_14b8);
      func_0x052937e0(auStack_ac0);
      func_0x0495d8f0(&bStack_12d8);
      func_0x052931e0(&bStack_1698);
      func_0x052930f0(&uStack_15b8);
      func_0x052933c0(&bStack_f00);
      func_0x052932d0(&uStack_13d8);
      do {
        if (lStack_16b8 != 0) {
          lStack_16b0 = lStack_16b8;
          func_0x0412a280(lStack_16b8,lStack_16a8 - lStack_16b8);
        }
        func_0x052937e0(auStack_f78);
        if (lStack_1708 != 0) {
          lStack_1700 = lStack_1708;
          func_0x0412a280(lStack_1708,lStack_16f8 - lStack_1708);
        }
        uVar17 = func_0x0eee2d70(uVar17);
        if ((bStack_1698 & 1) != 0) {
          func_0x0412a280(CONCAT17(uStack_1681,
                                   CONCAT16(uStack_1682,
                                            CONCAT15(uStack_1683,CONCAT41(uStack_1687,uStack_1688)))
                                  ),
                          CONCAT35(uStack_1693,CONCAT41(uStack_1697,bStack_1698)) &
                          0xfffffffffffffffe);
        }
        func_0x049cd290(&uStack_15b8);
        func_0x049cd290(&bStack_12d8);
        func_0x049cd290(&bStack_f00);
      } while( true );
    }
    lVar16 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar22);
    if (lVar16 == 0) {
      func_0x0eec74c0(lVar22,0);
    }
    lStack_3c8 = lVar16;
    lStack_3c0 = lVar16;
    lStack_3b8 = lVar16 + lVar22;
    func_0x0eee2f00(lVar16,lVar12,lVar22);
    lStack_3c0 = lVar16 + lVar22;
  }
  uStack_3b0 = uStack_16a0;
  func_0x05292fb0(auStack_3a8,&bStack_12d8);
  uVar18 = uVar21 ^ uStack_14b0;
  uVar19 = uVar18 << 0x15 ^ (uStack_14b0 << 0x31 | uStack_14b0 >> 0xf) ^ uVar18;
  uVar18 = (uVar18 << 0x1c | uVar18 >> 0x24) + uVar19;
  lStack_48 = ((uVar21 + uStack_14b0) * 0x20000 | uVar21 + uStack_14b0 >> 0x2f) + uStack_14b0;
  lStack_40 = (uVar18 * 0x20000 | uVar18 >> 0x2f) + uVar19;
  puStack_50 = &UNK_0ef51388;
  uStack_38 = uStack_14a8;
  func_0x0495d8f0(&bStack_12d8);
  func_0x052931e0(&bStack_1698);
  func_0x052930f0(&uStack_15b8);
  func_0x052933c0(&bStack_f00);
  func_0x052932d0(&uStack_13d8);
  if (lStack_16b8 != 0) {
    lStack_16b0 = lStack_16b8;
    func_0x0412a280(lStack_16b8,lStack_16a8 - lStack_16b8);
  }
  if (lStack_f20 != 0) {
    lStack_f18 = lStack_f20;
    func_0x0412a280(lStack_f20,lStack_f10 - lStack_f20);
  }
  if (lStack_f48 != 0) {
    lStack_f40 = lStack_f48;
    func_0x0412a280(lStack_f48,lStack_f38 - lStack_f48);
  }
  if (lStack_f70 != 0) {
    lStack_f68 = lStack_f70;
    func_0x0412a280(lStack_f70,lStack_f60 - lStack_f70);
  }
  if (lStack_1708 != 0) {
    lStack_1700 = lStack_1708;
    func_0x0412a280(lStack_1708,lStack_16f8 - lStack_1708);
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
