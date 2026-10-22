/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd335180 (ELF vaddr 0xd235180)
 * Label: caller-of-callee
 * Body:  [[0d335180, 0d335470] [0d335480, 0d335585]]
 * Ghidra: FUN_0d335180
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0d335180(long *param_1,ulong param_2)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  long **pplVar5;
  long lVar6;
  long *plVar7;
  undefined8 extraout_RDX;
  long *plVar8;
  bool bVar9;
  undefined *puStack_130;
  long *plStack_128;
  long lStack_120;
  long lStack_118;
  undefined *puStack_110;
  long *plStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  byte bStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  byte bStack_a8;
  undefined1 uStack_a7;
  undefined6 uStack_a6;
  undefined8 uStack_98;
  long lStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined *puStack_70;
  long *plStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  if (((ulong)(param_1[2] - param_1[1] >> 3) <= param_2) &&
     (cVar4 = func_0x0eeddcf0(&UNK_0140b00c,&UNK_014c0fe5,0x47,&UNK_01234b55,&UNK_01269402),
     cVar4 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if (*(long *)(param_1[1] + param_2 * 8) != 0) goto LAB_0d33556c;
  if (((ulong)((*(long *)(*param_1 + 0x18) - *(long *)(*param_1 + 0x10) >> 4) * -0x71c71c71c71c71c7)
       <= param_2) &&
     (cVar4 = func_0x0eeddcf0(&UNK_012b5c64,&UNK_01234bc3,0x4c,&UNK_01234b55,&UNK_01269402),
     cVar4 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  lVar2 = *(long *)(*param_1 + 0x10);
  lVar6 = param_2 * 0x90;
  bVar1 = *(byte *)(lVar2 + 0x48 + lVar6);
  bVar9 = (bVar1 & 1) != 0;
  lStack_90 = lVar2 + 0x49 + lVar6;
  if (bVar9) {
    lStack_90 = *(long *)(lVar2 + 0x58 + lVar6);
  }
  uStack_88 = (ulong)(bVar1 >> 1);
  if (bVar9) {
    uStack_88 = *(ulong *)(lVar2 + 0x50 + lVar6);
  }
  puStack_b0 = &UNK_0f534730;
  bStack_a8 = 0;
  uStack_a7 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  func_0x0d6bd910(&puStack_110,&puStack_b0);
  plVar8 = &lStack_60;
  puStack_70 = &UNK_0f47e0b0;
  lStack_60 = 0;
  lStack_58 = 0;
  plStack_68 = plVar8;
  uStack_50 = 0xeabc2ef9f74e7792;
  puStack_48 = &UNK_0140f690;
  uStack_40 = 1;
  uStack_38 = 0x4f;
  if (bStack_d0 == 1) {
LAB_0d33538b:
    plVar8 = &lStack_100;
    plVar7 = &lStack_f8;
    pplVar5 = &plStack_108;
  }
  else {
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    FUN_0eedeb80(2,0x2d,&puStack_110,&uStack_c8,&uStack_50);
    if ((uStack_c8 & 1) != 0) {
      func_0x0412a280(uStack_b8,uStack_c8 & 0xfffffffffffffffe);
    }
    if ((bStack_d0 & 1) != 0) goto LAB_0d33538b;
    plVar7 = &lStack_58;
    pplVar5 = &plStack_68;
  }
  puStack_130 = &UNK_0f47e0b0;
  plVar3 = *pplVar5;
  plStack_128 = &lStack_120;
  lStack_120 = *plVar8;
  lStack_118 = *plVar7;
  if (lStack_118 != 0) {
    *(long **)(lStack_120 + 0x10) = plStack_128;
    *pplVar5 = plVar8;
    *plVar8 = 0;
    plVar8[1] = 0;
    plStack_128 = plVar3;
  }
  puStack_70 = &UNK_0f47e0b0;
  func_0x0d6c9500(&plStack_68,lStack_60);
  lVar2 = lStack_e8;
  if (bStack_d0 == 1) {
    puStack_110 = &UNK_0f47e0b0;
    func_0x0d6c9500(&plStack_108,lStack_100);
  }
  else {
    if (lStack_e8 != 0) {
      while (lVar2 != lStack_e0) {
        func_0x048b3e80(lStack_e0 + -0x40);
        lStack_e0 = lStack_e0 + -0x40;
      }
      lStack_e0 = lVar2;
      func_0x0412a280(lStack_e8,lStack_d8 - lStack_e8);
    }
    lVar6 = lStack_100;
    lVar2 = lStack_f8;
    if (lStack_100 != 0) {
      for (; lVar6 != lVar2; lVar2 = lVar2 + -0x50) {
        if ((*(char *)(lVar2 + -8) == '\x01') && ((*(byte *)(lVar2 + -0x30) & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(lVar2 + -0x20),
                          *(ulong *)(lVar2 + -0x30) & 0xfffffffffffffffe);
        }
      }
      lStack_f8 = lVar6;
      func_0x0412a280(lStack_100,lStack_f0 - lStack_100);
    }
  }
  if (lStack_118 != 0) {
    func_0x0c700540(&puStack_130,0);
    *(undefined8 *)(param_1[1] + param_2 * 8) = extraout_RDX;
  }
  puStack_130 = &UNK_0f47e0b0;
  func_0x0d6c9500(&plStack_128,lStack_120);
  puStack_b0 = &UNK_0f534730;
  if ((bStack_a8 & 1) != 0) {
    func_0x0412a280(uStack_98,CONCAT62(uStack_a6,CONCAT11(uStack_a7,bStack_a8)) & 0xfffffffffffffffe
                   );
  }
  if ((*(long *)(param_1[1] + param_2 * 8) == 0) &&
     (cVar4 = func_0x0eeddcf0(&UNK_01283649,&UNK_013d7b6b,0x55,&UNK_01234b55,&UNK_01269402),
     cVar4 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
LAB_0d33556c:
  return *(undefined8 *)(param_1[1] + param_2 * 8);
}


