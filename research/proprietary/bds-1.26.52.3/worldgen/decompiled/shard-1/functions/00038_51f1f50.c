/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x52f1f50 (ELF vaddr 0x51f1f50)
 * Label: VanillaSurfaceBuilders::MesaSurfaceBuilder::vslot2
 * Body:  [[052f1f50, 052f2c97] [052f2ca0, 052f2d37] [052f2d40, 052f2dd7] [052f2de0, 052f32ac]]
 * Ghidra: wg_VanillaSurfaceBuilders__MesaSurfaceBuilder__vslot2
 */


/* WARNING: Removing unreachable block (ram,0x052f293f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_VanillaSurfaceBuilders__MesaSurfaceBuilder__vslot2(long param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  undefined4 *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  int iVar20;
  long *in_FS_OFFSET;
  undefined8 uStack_cc8;
  undefined4 *puStack_cc0;
  undefined4 *puStack_cb8;
  long lStack_cb0;
  long lStack_ca8;
  long lStack_ca0;
  undefined8 uStack_c88;
  undefined8 *puStack_c80;
  undefined8 *puStack_c78;
  long lStack_c70;
  long lStack_c68;
  long lStack_c60;
  undefined8 uStack_c48;
  undefined4 *puStack_c40;
  undefined4 *puStack_c38;
  long lStack_c30;
  long lStack_c28;
  long lStack_c20;
  undefined4 *puStack_c08;
  undefined4 *puStack_c00;
  undefined4 *puStack_bf8;
  undefined8 uStack_bf0;
  undefined8 uStack_be8;
  undefined8 uStack_be0;
  undefined8 uStack_bd0;
  ulong uStack_bc8;
  undefined4 *puStack_bc0;
  long lStack_bb8;
  long lStack_bb0;
  long lStack_ba8;
  undefined *puStack_b98;
  ulong uStack_b90;
  ulong uStack_b88;
  undefined8 uStack_b80;
  undefined1 uStack_b78;
  undefined *puStack_b70;
  ulong uStack_b68;
  ulong uStack_b60;
  undefined8 uStack_b58;
  undefined1 uStack_b50;
  undefined *puStack_b48;
  ulong uStack_b40;
  ulong uStack_b38;
  undefined8 uStack_b30;
  undefined1 uStack_b28;
  undefined *puStack_b20;
  ulong uStack_b18;
  ulong uStack_b10;
  undefined8 uStack_b08;
  undefined1 uStack_b00;
  undefined8 uStack_af8;
  undefined8 uStack_af0;
  undefined8 uStack_ae8;
  undefined8 uStack_ae0;
  undefined8 uStack_ad8;
  undefined8 uStack_ad0;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  undefined8 uStack_a68;
  undefined8 uStack_a60;
  undefined8 uStack_a58;
  undefined8 uStack_a50;
  uint uStack_a3c;
  undefined4 *puStack_a38;
  undefined4 *puStack_a30;
  undefined8 uStack_a28;
  uint auStack_a20 [8];
  undefined1 auStack_a00 [56];
  undefined1 auStack_9c8 [56];
  undefined1 auStack_990 [24];
  undefined4 uStack_978;
  undefined4 uStack_974;
  undefined4 uStack_970;
  undefined4 uStack_96c;
  undefined8 uStack_64;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined4 **ppuStack_40;
  
  uVar12 = (long)(int)param_2 ^ 0x6a09e667f3bcc909;
  uVar15 = (uVar12 >> 0x1e ^ uVar12) * -0x40a7b892e31b1a47;
  uVar15 = (uVar15 >> 0x1b ^ uVar15) * -0x6b2fb644ecceee15;
  uVar15 = uVar15 >> 0x1f ^ uVar15;
  uVar12 = (uVar12 + 0x9e3779b97f4a7c15 >> 0x1e ^ uVar12 + 0x9e3779b97f4a7c15) * -0x40a7b892e31b1a47
  ;
  uVar12 = (uVar12 >> 0x1b ^ uVar12) * -0x6b2fb644ecceee15;
  uVar12 = uVar12 >> 0x1f ^ uVar12;
  if (uVar12 == 0 && uVar15 == 0) {
    uVar15 = 0x9e3779b97f4a7c15;
    uVar12 = 0x6a09e667f3bcc909;
  }
  puStack_bc0 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puStack_bc0 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar6 = _UNK_01412e08;
  uStack_bd0 = 0x21;
  uStack_bc8 = 0x1b;
  *(ulong *)((long)puStack_bc0 + 0xb) = CONCAT35(_UNK_01412e05,CONCAT41(_UNK_01412e01,DAT_01412e00))
  ;
  *(undefined8 *)((long)puStack_bc0 + 0x13) = uVar6;
  uVar5 = _UNK_01412e01;
  uVar4 = _UNK_01412dfd;
  uVar3 = _UNK_01412df9;
  *puStack_bc0 = _DAT_01412df5;
  puStack_bc0[1] = uVar3;
  puStack_bc0[2] = uVar4;
  puStack_bc0[3] = uVar5;
  *(undefined1 *)((long)puStack_bc0 + 0x1b) = 0;
  lVar14 = *in_FS_OFFSET;
  if (*(char *)(lVar14 + -0x16b0) == '\0') {
    *(undefined1 *)(lVar14 + -0x16b0) = 1;
    *(undefined **)(lVar14 + -0x1750) = &UNK_0f53bd88;
    *(undefined8 *)(lVar14 + -0x1738) = 0x1032547698badcfe;
    uVar6 = _UNK_014e11d8;
    *(undefined8 *)(lVar14 + -0x1748) = _DAT_014e11d0;
    *(undefined8 *)(lVar14 + -0x1740) = uVar6;
    *(undefined8 *)(lVar14 + -0x1730) = 0;
    *(undefined8 *)(lVar14 + -0x1728) = 0;
    *(undefined8 *)(lVar14 + -0x1720) = 0;
    *(undefined8 *)(lVar14 + -0x1718) = 0;
    *(undefined8 *)(lVar14 + -0x1710) = 0;
    *(undefined8 *)(lVar14 + -0x1708) = 0;
    *(undefined8 *)(lVar14 + -0x1700) = 0;
    *(undefined8 *)(lVar14 + -0x16f8) = 0;
    *(undefined8 *)(lVar14 + -0x16f0) = 0;
    *(undefined8 *)(lVar14 + -0x16e8) = 0;
    *(undefined8 *)(lVar14 + -0x16e0) = 0;
    *(undefined8 *)(lVar14 + -0x16d8) = 0;
    *(undefined8 *)(lVar14 + -0x16d0) = 0;
    *(undefined8 *)(lVar14 + -0x16c8) = 0;
    *(undefined8 *)(lVar14 + -0x16c0) = 0;
    *(undefined8 *)(lVar14 + -0x16b8) = 0;
  }
  plVar1 = (long *)(lVar14 + -0x1750);
  (**(code **)(*(long *)(lVar14 + -0x1750) + 0x10))(plVar1);
  if ((uStack_bd0 & 1) == 0) {
    uVar16 = uStack_bd0 >> 1 & 0x7f;
    puVar13 = (undefined4 *)((long)&uStack_bd0 + 1);
  }
  else {
    uVar16 = uStack_bc8 & 0xffffffff;
    puVar13 = puStack_bc0;
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,puVar13,uVar16);
  (**(code **)(*plVar1 + 0x20))(plVar1,&uStack_c48);
  uVar18 = uVar12 ^ uVar15;
  uVar16 = uVar18 << 0x15 ^ (uVar15 << 0x31 | uVar15 >> 0xf) ^ uVar18;
  uVar18 = (uVar18 << 0x1c | uVar18 >> 0x24) + uVar16;
  uVar15 = ((uVar12 + uVar15) * 0x20000 | uVar12 + uVar15 >> 0x2f) + uVar15;
  uVar16 = (uVar18 * 0x20000 | uVar18 >> 0x2f) + uVar16;
  uStack_b18 = ((ulong)uStack_c48 >> 0x38 | ((ulong)uStack_c48 & 0xff000000000000) >> 0x28 |
                ((ulong)uStack_c48 & 0xff0000000000) >> 0x18 |
                ((ulong)uStack_c48 & 0xff00000000) >> 8 | ((ulong)uStack_c48 & 0xff000000) << 8 |
                ((ulong)uStack_c48 & 0xff0000) << 0x18 | ((ulong)uStack_c48 & 0xff00) << 0x28 |
               (long)uStack_c48 << 0x38) ^ uVar15;
  uStack_b10 = ((ulong)puStack_c40 >> 0x38 | ((ulong)puStack_c40 & 0xff000000000000) >> 0x28 |
                ((ulong)puStack_c40 & 0xff0000000000) >> 0x18 |
                ((ulong)puStack_c40 & 0xff00000000) >> 8 | ((ulong)puStack_c40 & 0xff000000) << 8 |
                ((ulong)puStack_c40 & 0xff0000) << 0x18 | ((ulong)puStack_c40 & 0xff00) << 0x28 |
               (long)puStack_c40 << 0x38) ^ uVar16;
  puStack_b20 = &UNK_0ef512d0;
  if (uStack_b10 == 0 && uStack_b18 == 0) {
    uStack_b18 = 0x9e3779b97f4a7c15;
    uStack_b10 = 0x6a09e667f3bcc909;
  }
  uStack_b00 = 0;
  uStack_b08 = 0;
  if ((uStack_bd0 & 1) != 0) {
    uStack_b00 = 0;
    uStack_b08 = 0;
    func_0x0412a280(puStack_bc0,uStack_bd0 & 0xfffffffffffffffe);
  }
  uStack_c48 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,4);
  if (uStack_c48 == (undefined4 *)0x0) {
    func_0x0eec74c0(4,0);
  }
  puStack_c40 = uStack_c48 + 1;
  *uStack_c48 = 0x3f800000;
  puStack_c38 = puStack_c40;
  func_0x0d3411f0(&uStack_bd0,&puStack_b20,0xfffffff8,&uStack_c48,1);
  if (uStack_c48 != (undefined4 *)0x0) {
    puStack_c40 = uStack_c48;
    func_0x0412a280(uStack_c48,(long)puStack_c38 - (long)uStack_c48);
  }
  puVar13 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar13 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar6 = _UNK_0119d12b;
  uStack_c48 = (undefined4 *)0x21;
  puStack_c40 = (undefined4 *)0x1a;
  *(ulong *)((long)puVar13 + 10) = CONCAT26(_UNK_0119d129,CONCAT42(_UNK_0119d125,_DAT_0119d123));
  *(undefined8 *)((long)puVar13 + 0x12) = uVar6;
  uVar5 = _UNK_0119d125;
  uVar4 = _UNK_0119d11d;
  uVar3 = CONCAT22(_DAT_0119d123,_UNK_0119d121);
  *puVar13 = _DAT_0119d119;
  puVar13[1] = uVar4;
  puVar13[2] = uVar3;
  puVar13[3] = uVar5;
  *(undefined1 *)((long)puVar13 + 0x1a) = 0;
  if (*(char *)(lVar14 + -0x16b0) == '\0') {
    *(undefined1 *)(lVar14 + -0x16b0) = 1;
    *(undefined **)(lVar14 + -0x1750) = &UNK_0f53bd88;
    *(undefined8 *)(lVar14 + -0x1738) = 0x1032547698badcfe;
    uVar6 = _UNK_014e11d8;
    *(undefined8 *)(lVar14 + -0x1748) = _DAT_014e11d0;
    *(undefined8 *)(lVar14 + -0x1740) = uVar6;
    *(undefined8 *)(lVar14 + -0x1730) = 0;
    *(undefined8 *)(lVar14 + -0x1728) = 0;
    *(undefined8 *)(lVar14 + -0x1720) = 0;
    *(undefined8 *)(lVar14 + -0x1718) = 0;
    *(undefined8 *)(lVar14 + -0x1710) = 0;
    *(undefined8 *)(lVar14 + -0x1708) = 0;
    *(undefined8 *)(lVar14 + -0x1700) = 0;
    *(undefined8 *)(lVar14 + -0x16f8) = 0;
    *(undefined8 *)(lVar14 + -0x16f0) = 0;
    *(undefined8 *)(lVar14 + -0x16e8) = 0;
    *(undefined8 *)(lVar14 + -0x16e0) = 0;
    *(undefined8 *)(lVar14 + -0x16d8) = 0;
    *(undefined8 *)(lVar14 + -0x16d0) = 0;
    *(undefined8 *)(lVar14 + -0x16c8) = 0;
    *(undefined8 *)(lVar14 + -0x16c0) = 0;
    *(undefined8 *)(lVar14 + -0x16b8) = 0;
  }
  puStack_c38 = puVar13;
  (**(code **)(*plVar1 + 0x10))(plVar1);
  if (((ulong)uStack_c48 & 1) == 0) {
    uVar12 = (ulong)uStack_c48 >> 1 & 0x7f;
    puVar13 = (undefined4 *)((long)&uStack_c48 + 1);
  }
  else {
    uVar12 = (ulong)puStack_c40 & 0xffffffff;
    puVar13 = puStack_c38;
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,puVar13,uVar12);
  (**(code **)(*plVar1 + 0x20))(plVar1,&uStack_c88);
  uStack_b40 = ((ulong)uStack_c88 >> 0x38 | ((ulong)uStack_c88 & 0xff000000000000) >> 0x28 |
                ((ulong)uStack_c88 & 0xff0000000000) >> 0x18 |
                ((ulong)uStack_c88 & 0xff00000000) >> 8 | ((ulong)uStack_c88 & 0xff000000) << 8 |
                ((ulong)uStack_c88 & 0xff0000) << 0x18 | ((ulong)uStack_c88 & 0xff00) << 0x28 |
               (long)uStack_c88 << 0x38) ^ uVar15;
  uStack_b38 = ((ulong)puStack_c80 >> 0x38 | ((ulong)puStack_c80 & 0xff000000000000) >> 0x28 |
                ((ulong)puStack_c80 & 0xff0000000000) >> 0x18 |
                ((ulong)puStack_c80 & 0xff00000000) >> 8 | ((ulong)puStack_c80 & 0xff000000) << 8 |
                ((ulong)puStack_c80 & 0xff0000) << 0x18 | ((ulong)puStack_c80 & 0xff00) << 0x28 |
               (long)puStack_c80 << 0x38) ^ uVar16;
  puStack_b48 = &UNK_0ef512d0;
  if (uStack_b38 == 0 && uStack_b40 == 0) {
    uStack_b40 = 0x9e3779b97f4a7c15;
    uStack_b38 = 0x6a09e667f3bcc909;
  }
  uStack_b28 = 0;
  uStack_b30 = 0;
  if (((ulong)uStack_c48 & 1) != 0) {
    uStack_b28 = 0;
    uStack_b30 = 0;
    func_0x0412a280(puStack_c38,(ulong)uStack_c48 & 0xfffffffffffffffe);
  }
  uStack_c88 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xc);
  if (uStack_c88 == (undefined8 *)0x0) {
    func_0x0eec74c0(0xc,0);
  }
  puStack_c80 = (undefined8 *)((long)uStack_c88 + 0xc);
  *uStack_c88 = _DAT_014e5300;
  *(undefined4 *)(uStack_c88 + 1) = 0x3f800000;
  puStack_c78 = puStack_c80;
  func_0x0d3411f0(&uStack_c48,&puStack_b48,0xfffffffa,&uStack_c88,1);
  if (uStack_c88 != (undefined8 *)0x0) {
    puStack_c80 = uStack_c88;
    func_0x0412a280(uStack_c88,(long)puStack_c78 - (long)uStack_c88);
  }
  puVar13 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar13 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar6 = _UNK_01412e22;
  uStack_c88 = (undefined8 *)0x21;
  puStack_c80 = (undefined8 *)0x19;
  *(ulong *)((long)puVar13 + 9) = CONCAT17(UNK_01412e21,CONCAT43(_UNK_01412e1d,_DAT_01412e1a));
  *(undefined8 *)((long)puVar13 + 0x11) = uVar6;
  uVar5 = _UNK_01412e1d;
  uVar4 = _UNK_01412e19;
  uVar3 = _UNK_01412e15;
  *puVar13 = _DAT_01412e11;
  puVar13[1] = uVar3;
  puVar13[2] = uVar4;
  puVar13[3] = uVar5;
  *(undefined1 *)((long)puVar13 + 0x19) = 0;
  if (*(char *)(lVar14 + -0x16b0) == '\0') {
    *(undefined1 *)(lVar14 + -0x16b0) = 1;
    *(undefined **)(lVar14 + -0x1750) = &UNK_0f53bd88;
    *(undefined8 *)(lVar14 + -0x1738) = 0x1032547698badcfe;
    uVar6 = _UNK_014e11d8;
    *(undefined8 *)(lVar14 + -0x1748) = _DAT_014e11d0;
    *(undefined8 *)(lVar14 + -0x1740) = uVar6;
    *(undefined8 *)(lVar14 + -0x1730) = 0;
    *(undefined8 *)(lVar14 + -0x1728) = 0;
    *(undefined8 *)(lVar14 + -0x1720) = 0;
    *(undefined8 *)(lVar14 + -0x1718) = 0;
    *(undefined8 *)(lVar14 + -0x1710) = 0;
    *(undefined8 *)(lVar14 + -0x1708) = 0;
    *(undefined8 *)(lVar14 + -0x1700) = 0;
    *(undefined8 *)(lVar14 + -0x16f8) = 0;
    *(undefined8 *)(lVar14 + -0x16f0) = 0;
    *(undefined8 *)(lVar14 + -0x16e8) = 0;
    *(undefined8 *)(lVar14 + -0x16e0) = 0;
    *(undefined8 *)(lVar14 + -0x16d8) = 0;
    *(undefined8 *)(lVar14 + -0x16d0) = 0;
    *(undefined8 *)(lVar14 + -0x16c8) = 0;
    *(undefined8 *)(lVar14 + -0x16c0) = 0;
    *(undefined8 *)(lVar14 + -0x16b8) = 0;
  }
  puStack_c78 = (undefined8 *)puVar13;
  (**(code **)(*plVar1 + 0x10))(plVar1);
  if (((ulong)uStack_c88 & 1) == 0) {
    uVar12 = (ulong)uStack_c88 >> 1 & 0x7f;
    puVar19 = (undefined8 *)((long)&uStack_c88 + 1);
  }
  else {
    uVar12 = (ulong)puStack_c80 & 0xffffffff;
    puVar19 = puStack_c78;
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,puVar19,uVar12);
  (**(code **)(*plVar1 + 0x20))(plVar1,&uStack_cc8);
  uStack_b68 = ((ulong)uStack_cc8 >> 0x38 | ((ulong)uStack_cc8 & 0xff000000000000) >> 0x28 |
                ((ulong)uStack_cc8 & 0xff0000000000) >> 0x18 |
                ((ulong)uStack_cc8 & 0xff00000000) >> 8 | ((ulong)uStack_cc8 & 0xff000000) << 8 |
                ((ulong)uStack_cc8 & 0xff0000) << 0x18 | ((ulong)uStack_cc8 & 0xff00) << 0x28 |
               (long)uStack_cc8 << 0x38) ^ uVar15;
  uStack_b60 = ((ulong)puStack_cc0 >> 0x38 | ((ulong)puStack_cc0 & 0xff000000000000) >> 0x28 |
                ((ulong)puStack_cc0 & 0xff0000000000) >> 0x18 |
                ((ulong)puStack_cc0 & 0xff00000000) >> 8 | ((ulong)puStack_cc0 & 0xff000000) << 8 |
                ((ulong)puStack_cc0 & 0xff0000) << 0x18 | ((ulong)puStack_cc0 & 0xff00) << 0x28 |
               (long)puStack_cc0 << 0x38) ^ uVar16;
  puStack_b70 = &UNK_0ef512d0;
  if (uStack_b60 == 0 && uStack_b68 == 0) {
    uStack_b68 = 0x9e3779b97f4a7c15;
    uStack_b60 = 0x6a09e667f3bcc909;
  }
  uStack_b50 = 0;
  uStack_b58 = 0;
  if (((ulong)uStack_c88 & 1) != 0) {
    uStack_b50 = 0;
    uStack_b58 = 0;
    func_0x0412a280(puStack_c78,(ulong)uStack_c88 & 0xfffffffffffffffe);
  }
  uStack_cc8 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x10);
  if (uStack_cc8 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x10,0);
  }
  uVar5 = _UNK_014ea7cc;
  uVar4 = _UNK_014ea7c8;
  uVar3 = _UNK_014ea7c4;
  puStack_cc0 = uStack_cc8 + 4;
  *uStack_cc8 = _DAT_014ea7c0;
  uStack_cc8[1] = uVar3;
  uStack_cc8[2] = uVar4;
  uStack_cc8[3] = uVar5;
  puStack_cb8 = puStack_cc0;
  func_0x0d3411f0(&uStack_c88,&puStack_b70,0xfffffffe,&uStack_cc8,1);
  if (uStack_cc8 != (undefined4 *)0x0) {
    puStack_cc0 = uStack_cc8;
    func_0x0412a280(uStack_cc8,(long)puStack_cb8 - (long)uStack_cc8);
  }
  puVar13 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar13 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar6 = _UNK_01448090;
  uStack_cc8 = (undefined4 *)0x21;
  puStack_cc0 = (undefined4 *)0x1e;
  *(ulong *)((long)puVar13 + 0xe) = CONCAT62(_UNK_0144808a,_DAT_01448088);
  *(undefined8 *)((long)puVar13 + 0x16) = uVar6;
  uVar5 = _UNK_01448082;
  uVar4 = _UNK_0144807e;
  uVar3 = CONCAT22(_DAT_01448088,_UNK_01448086);
  *puVar13 = _DAT_0144807a;
  puVar13[1] = uVar4;
  puVar13[2] = uVar5;
  puVar13[3] = uVar3;
  *(undefined1 *)((long)puVar13 + 0x1e) = 0;
  if (*(char *)(lVar14 + -0x16b0) == '\0') {
    *(undefined1 *)(lVar14 + -0x16b0) = 1;
    *(undefined **)(lVar14 + -0x1750) = &UNK_0f53bd88;
    *(undefined8 *)(lVar14 + -0x1738) = 0x1032547698badcfe;
    uVar6 = _UNK_014e11d8;
    *(undefined8 *)(lVar14 + -0x1748) = _DAT_014e11d0;
    *(undefined8 *)(lVar14 + -0x1740) = uVar6;
    *(undefined8 *)(lVar14 + -0x1730) = 0;
    *(undefined8 *)(lVar14 + -0x1728) = 0;
    *(undefined8 *)(lVar14 + -0x1720) = 0;
    *(undefined8 *)(lVar14 + -0x1718) = 0;
    *(undefined8 *)(lVar14 + -0x1710) = 0;
    *(undefined8 *)(lVar14 + -0x1708) = 0;
    *(undefined8 *)(lVar14 + -0x1700) = 0;
    *(undefined8 *)(lVar14 + -0x16f8) = 0;
    *(undefined8 *)(lVar14 + -0x16f0) = 0;
    *(undefined8 *)(lVar14 + -0x16e8) = 0;
    *(undefined8 *)(lVar14 + -0x16e0) = 0;
    *(undefined8 *)(lVar14 + -0x16d8) = 0;
    *(undefined8 *)(lVar14 + -0x16d0) = 0;
    *(undefined8 *)(lVar14 + -0x16c8) = 0;
    *(undefined8 *)(lVar14 + -0x16c0) = 0;
    *(undefined8 *)(lVar14 + -0x16b8) = 0;
  }
  puStack_cb8 = puVar13;
  (**(code **)(*plVar1 + 0x10))(plVar1);
  if (((ulong)uStack_cc8 & 1) == 0) {
    uVar12 = (ulong)uStack_cc8 >> 1 & 0x7f;
    puVar13 = (undefined4 *)((long)&uStack_cc8 + 1);
  }
  else {
    uVar12 = (ulong)puStack_cc0 & 0xffffffff;
    puVar13 = puStack_cb8;
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,puVar13,uVar12);
  (**(code **)(*plVar1 + 0x20))(plVar1,&puStack_c08);
  uStack_b90 = ((ulong)puStack_c08 >> 0x38 | ((ulong)puStack_c08 & 0xff000000000000) >> 0x28 |
                ((ulong)puStack_c08 & 0xff0000000000) >> 0x18 |
                ((ulong)puStack_c08 & 0xff00000000) >> 8 | ((ulong)puStack_c08 & 0xff000000) << 8 |
                ((ulong)puStack_c08 & 0xff0000) << 0x18 | ((ulong)puStack_c08 & 0xff00) << 0x28 |
               (long)puStack_c08 << 0x38) ^ uVar15;
  uStack_b88 = ((ulong)puStack_c00 >> 0x38 | ((ulong)puStack_c00 & 0xff000000000000) >> 0x28 |
                ((ulong)puStack_c00 & 0xff0000000000) >> 0x18 |
                ((ulong)puStack_c00 & 0xff00000000) >> 8 | ((ulong)puStack_c00 & 0xff000000) << 8 |
                ((ulong)puStack_c00 & 0xff0000) << 0x18 | ((ulong)puStack_c00 & 0xff00) << 0x28 |
               (long)puStack_c00 << 0x38) ^ uVar16;
  puStack_b98 = &UNK_0ef512d0;
  if (uStack_b88 == 0 && uStack_b90 == 0) {
    uStack_b90 = 0x9e3779b97f4a7c15;
    uStack_b88 = 0x6a09e667f3bcc909;
  }
  uStack_b78 = 0;
  uStack_b80 = 0;
  if (((ulong)uStack_cc8 & 1) != 0) {
    uStack_b78 = 0;
    uStack_b80 = 0;
    func_0x0412a280(puStack_cb8,(ulong)uStack_cc8 & 0xfffffffffffffffe);
  }
  puStack_c08 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,4);
  if (puStack_c08 == (undefined4 *)0x0) {
    func_0x0eec74c0(4,0);
  }
  puStack_c00 = puStack_c08 + 1;
  *puStack_c08 = 0x3f800000;
  puStack_bf8 = puStack_c00;
  func_0x0d3411f0(&uStack_cc8,&puStack_b98,0xfffffff8,&puStack_c08,1);
  if (puStack_c08 != (undefined4 *)0x0) {
    puStack_c00 = puStack_c08;
    func_0x0412a280(puStack_c08,(long)puStack_bf8 - (long)puStack_c08);
  }
  func_0x049cce40(&puStack_c08,&uStack_bd0);
  func_0x049cce40(&uStack_ab8,&uStack_c48);
  func_0x049cce40(&uStack_af8,&uStack_c88);
  func_0x049cce40(&uStack_a78,&uStack_cc8);
  uStack_96c = uStack_a58._4_4_;
  uStack_970 = (undefined4)uStack_a58;
  uStack_974 = uStack_a60._4_4_;
  uStack_978 = (undefined4)uStack_a60;
  uStack_a28 = puStack_bf8;
  puStack_a30 = puStack_c00;
  puStack_a38 = puStack_c08;
  uStack_a50 = 0;
  uStack_a58 = 0;
  uStack_a60 = 0;
  uStack_a68 = 0;
  uStack_a70 = 0;
  uStack_a78 = 0;
  uStack_a90 = 0;
  uStack_a98 = 0;
  uStack_aa0 = 0;
  uStack_aa8 = 0;
  uStack_ab0 = 0;
  uStack_ab8 = 0;
  uStack_ad0 = 0;
  uStack_ad8 = 0;
  uStack_ae0 = 0;
  uStack_ae8 = 0;
  uStack_af0 = 0;
  uStack_af8 = 0;
  uStack_be0 = 0;
  uStack_be8 = 0;
  uStack_bf0 = 0;
  puStack_bf8 = (undefined4 *)0x0;
  puStack_c00 = (undefined4 *)0x0;
  puStack_c08 = (undefined4 *)0x0;
  if (lStack_cb0 != 0) {
    lStack_ca8 = lStack_cb0;
    func_0x0412a280(lStack_cb0,lStack_ca0 - lStack_cb0);
  }
  if (uStack_cc8 != (undefined4 *)0x0) {
    puStack_cc0 = uStack_cc8;
    func_0x0412a280(uStack_cc8,(long)puStack_cb8 - (long)uStack_cc8);
  }
  if (lStack_c70 != 0) {
    lStack_c68 = lStack_c70;
    func_0x0412a280(lStack_c70,lStack_c60 - lStack_c70);
  }
  if (uStack_c88 != (undefined8 *)0x0) {
    puStack_c80 = uStack_c88;
    func_0x0412a280(uStack_c88,(long)puStack_c78 - (long)uStack_c88);
  }
  if (lStack_c30 != 0) {
    lStack_c28 = lStack_c30;
    func_0x0412a280(lStack_c30,lStack_c20 - lStack_c30);
  }
  if (uStack_c48 != (undefined4 *)0x0) {
    puStack_c40 = uStack_c48;
    func_0x0412a280(uStack_c48,(long)puStack_c38 - (long)uStack_c48);
  }
  if (lStack_bb8 != 0) {
    lStack_bb0 = lStack_bb8;
    func_0x0412a280(lStack_bb8,lStack_ba8 - lStack_bb8);
  }
  if (uStack_bd0 != 0) {
    uStack_bc8 = uStack_bd0;
    func_0x0412a280(uStack_bd0,(long)puStack_bc0 - uStack_bd0);
  }
  lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xe0);
  if (lVar14 == 0) {
    func_0x0eec74c0(0xe0,0);
  }
  func_0x049cce40(lVar14,&puStack_a38);
  func_0x049cce40(lVar14 + 0x38,auStack_a00);
  func_0x049cce40(lVar14 + 0x70,auStack_9c8);
  func_0x049cce40(lVar14 + 0xa8,auStack_990);
  lVar2 = *(long *)(param_1 + 200);
  *(long *)(param_1 + 200) = lVar14;
  if (lVar2 != 0) {
    func_0x052f1e60(lVar2);
    func_0x0412a280(lVar2,0xe0);
  }
  func_0x052f1e60(&puStack_a38);
  uVar7 = _UNK_014e971c;
  uVar5 = _UNK_014e9718;
  uVar4 = _UNK_014e9714;
  uVar3 = _DAT_014e9710;
  puStack_a38 = (undefined4 *)&UNK_0f147b18;
  ppuStack_40 = &puStack_a30;
  puStack_a30 = (undefined4 *)&UNK_0f5356d0;
  uStack_50 = 0x100000000000000;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_a28 = (undefined4 *)CONCAT44(param_2,param_2);
  lVar14 = 7;
  while( true ) {
    uVar15 = ((ulong)((param_2 >> 0x1e ^ param_2) * 0x6c078965) + lVar14) - 6;
    uVar11 = (uint)uVar15;
    (&uStack_a3c)[lVar14] = uVar11;
    if (lVar14 == 0x193) break;
    param_2 = ((int)lVar14 + ((uint)(uVar15 >> 0x1e) & 3 ^ uVar11) * 0x6c078965) - 5;
    *(uint *)((long)&puStack_a38 + lVar14 * 4) = param_2;
    lVar14 = lVar14 + 2;
  }
  uStack_64 = 0x18e00000270;
  uStack_48 = 1;
  lVar14 = param_1 + 8;
  *(undefined4 *)(param_1 + 0xb8) = _DAT_014e9710;
  *(undefined4 *)(param_1 + 0xbc) = uVar4;
  *(undefined4 *)(param_1 + 0xc0) = uVar5;
  *(undefined4 *)(param_1 + 0xc4) = uVar7;
  *(undefined4 *)(param_1 + 0xa8) = uVar3;
  *(undefined4 *)(param_1 + 0xac) = uVar4;
  *(undefined4 *)(param_1 + 0xb0) = uVar5;
  *(undefined4 *)(param_1 + 0xb4) = uVar7;
  *(undefined4 *)(param_1 + 0x98) = uVar3;
  *(undefined4 *)(param_1 + 0x9c) = uVar4;
  *(undefined4 *)(param_1 + 0xa0) = uVar5;
  *(undefined4 *)(param_1 + 0xa4) = uVar7;
  *(undefined4 *)(param_1 + 0x88) = uVar3;
  *(undefined4 *)(param_1 + 0x8c) = uVar4;
  *(undefined4 *)(param_1 + 0x90) = uVar5;
  *(undefined4 *)(param_1 + 0x94) = uVar7;
  *(undefined4 *)(param_1 + 0x78) = uVar3;
  *(undefined4 *)(param_1 + 0x7c) = uVar4;
  *(undefined4 *)(param_1 + 0x80) = uVar5;
  *(undefined4 *)(param_1 + 0x84) = uVar7;
  *(undefined4 *)(param_1 + 0x68) = uVar3;
  *(undefined4 *)(param_1 + 0x6c) = uVar4;
  *(undefined4 *)(param_1 + 0x70) = uVar5;
  *(undefined4 *)(param_1 + 0x74) = uVar7;
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  *(undefined4 *)(param_1 + 0x5c) = uVar4;
  *(undefined4 *)(param_1 + 0x60) = uVar5;
  *(undefined4 *)(param_1 + 100) = uVar7;
  *(undefined4 *)(param_1 + 0x48) = uVar3;
  *(undefined4 *)(param_1 + 0x4c) = uVar4;
  *(undefined4 *)(param_1 + 0x50) = uVar5;
  *(undefined4 *)(param_1 + 0x54) = uVar7;
  *(undefined4 *)(param_1 + 0x38) = uVar3;
  *(undefined4 *)(param_1 + 0x3c) = uVar4;
  *(undefined4 *)(param_1 + 0x40) = uVar5;
  *(undefined4 *)(param_1 + 0x44) = uVar7;
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  *(undefined4 *)(param_1 + 0x2c) = uVar4;
  *(undefined4 *)(param_1 + 0x30) = uVar5;
  *(undefined4 *)(param_1 + 0x34) = uVar7;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  *(undefined4 *)(param_1 + 0x1c) = uVar4;
  *(undefined4 *)(param_1 + 0x20) = uVar5;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar3;
  *(undefined4 *)(param_1 + 0xc) = uVar4;
  *(undefined4 *)(param_1 + 0x10) = uVar5;
  *(undefined4 *)(param_1 + 0x14) = uVar7;
  iVar20 = 0;
  do {
    iVar9 = (**(code **)(puStack_a38 + 6))(&puStack_a38,5);
    iVar10 = iVar9 + iVar20 + 1;
    if (0xbf < iVar10) break;
    *(undefined1 *)(lVar14 + iVar10) = 1;
    iVar20 = iVar9 + iVar20 + 2;
  } while (iVar10 != 0xbf);
  iVar20 = (**(code **)(puStack_a38 + 6))(&puStack_a38,10);
  if (-6 < iVar20) {
    iVar9 = 0;
    if (0 < iVar20 + 5) {
      iVar9 = iVar20 + 5;
    }
    iVar9 = iVar9 + 1;
    do {
      uVar11 = (**(code **)(puStack_a38 + 6))(&puStack_a38,3);
      iVar20 = (**(code **)(puStack_a38 + 6))(&puStack_a38,0xc0);
      if (-1 < (int)uVar11 && iVar20 < 0xc0) {
        uVar17 = 0xbfU - iVar20;
        if (uVar11 < 0xbfU - iVar20) {
          uVar17 = uVar11;
        }
        func_0x0eee2dd0(iVar20 + lVar14,4,uVar17 + 1);
      }
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  iVar20 = (**(code **)(puStack_a38 + 6))(&puStack_a38,10);
  if (-6 < iVar20) {
    iVar9 = 0;
    if (0 < iVar20 + 5) {
      iVar9 = iVar20 + 5;
    }
    iVar9 = iVar9 + 1;
    do {
      iVar20 = (**(code **)(puStack_a38 + 6))(&puStack_a38,3);
      iVar10 = (**(code **)(puStack_a38 + 6))(&puStack_a38,0xc0);
      if (-2 < iVar20 && iVar10 < 0xc0) {
        uVar11 = 0xbfU - iVar10;
        if (iVar20 + 1U < 0xbfU - iVar10) {
          uVar11 = iVar20 + 1U;
        }
        func_0x0eee2dd0(iVar10 + lVar14,0xc,(ulong)uVar11 + 1);
      }
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  iVar20 = (**(code **)(puStack_a38 + 6))(&puStack_a38,10);
  if (-6 < iVar20) {
    iVar9 = 0;
    if (0 < iVar20 + 5) {
      iVar9 = iVar20 + 5;
    }
    iVar9 = iVar9 + 1;
    do {
      uVar11 = (**(code **)(puStack_a38 + 6))(&puStack_a38,3);
      iVar20 = (**(code **)(puStack_a38 + 6))(&puStack_a38,0xc0);
      if (-1 < (int)uVar11 && iVar20 < 0xc0) {
        uVar17 = 0xbfU - iVar20;
        if (uVar11 < 0xbfU - iVar20) {
          uVar17 = uVar11;
        }
        func_0x0eee2dd0(iVar20 + lVar14,0xe,uVar17 + 1);
      }
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  iVar20 = (**(code **)(puStack_a38 + 6))(&puStack_a38,7);
  if (-9 < iVar20) {
    uVar11 = 0;
    iVar9 = 0;
    do {
      *(undefined1 *)(lVar14 + (int)uVar11) = 0;
      if ((int)uVar11 < 2) {
LAB_052f2eb5:
        cVar8 = (**(code **)(puStack_a38 + 10))(&puStack_a38);
        if (cVar8 != '\0') {
          *(undefined1 *)((long)(int)uVar11 + 1 + lVar14) = 8;
        }
      }
      else {
        cVar8 = (**(code **)(puStack_a38 + 10))(&puStack_a38);
        if (cVar8 != '\0') {
          *(undefined1 *)(lVar14 + (ulong)(uVar11 - 1)) = 8;
        }
        if (uVar11 < 0xbf) goto LAB_052f2eb5;
      }
      iVar10 = (**(code **)(puStack_a38 + 6))(&puStack_a38,0x10);
      if (iVar20 + 8 <= iVar9) {
        return;
      }
      iVar9 = iVar9 + 1;
      uVar11 = uVar11 + iVar10 + 4;
    } while ((int)uVar11 < 0xc0);
  }
  return;
}



/* ---- referenced strings ----
 * 0x119d119  minecraft:badlands_surface
 * 0x119d123  badlands_surface
 * 0x1412df5  minecraft:clay_bands_offset
 * 0x1412e00  lay_bands_offset
 * 0x1412e11  minecraft:badlands_pillar
 * 0x1412e1a  :badlands_pillar
 * 0x144807a  minecraft:badlands_pillar_roof
 * 0x1448088  ands_pillar_roof
 */
