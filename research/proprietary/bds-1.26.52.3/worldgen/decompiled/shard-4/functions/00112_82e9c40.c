/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x83e9c40 (ELF vaddr 0x82e9c40)
 * Label: JigsawStructureDataPacket::vslot9
 * Body:  [[083e9c40, 083e9da0] [083e9db0, 083e9ffe]]
 * Ghidra: wg_JigsawStructureDataPacket__vslot9
 */


undefined4 * wg_JigsawStructureDataPacket__vslot9(undefined4 *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  byte bStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  byte bStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  (**(code **)(*param_2 + 0x80))(&uStack_120);
  bStack_128 = bStack_e0;
  if (bStack_e0 != 1) {
    uStack_168 = uStack_120;
    uStack_160 = uStack_118;
    uStack_158._0_4_ = (undefined4)uStack_110;
    uStack_158._4_4_ = uStack_110._4_4_;
    uStack_150._0_4_ = (undefined4)uStack_108;
    uStack_150._4_4_ = uStack_108._4_4_;
    lStack_148 = uStack_100;
    uStack_140._0_4_ = (undefined4)uStack_f8;
    uStack_140._4_4_ = uStack_f8._4_4_;
    uStack_138._0_4_ = (undefined4)uStack_f0;
    uStack_138._4_4_ = uStack_f0._4_4_;
    lStack_130 = uStack_e8;
    func_0x083ea020(&uStack_168);
    lVar1 = lStack_130;
    uVar10 = uStack_138._4_4_;
    uVar9 = (undefined4)uStack_138;
    uVar8 = uStack_140._4_4_;
    uVar7 = (undefined4)uStack_140;
    lVar2 = lStack_148;
    uVar6 = uStack_150._4_4_;
    uVar5 = (undefined4)uStack_150;
    uVar4 = uStack_158._4_4_;
    uVar3 = (undefined4)uStack_158;
    uStack_68 = (undefined4)uStack_168;
    uStack_64 = uStack_168._4_4_;
    uStack_60 = (undefined4)uStack_160;
    uStack_5c = uStack_160._4_4_;
    uStack_158 = 0;
    uStack_150 = 0;
    lStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    lStack_130 = 0;
    *param_1 = (undefined4)uStack_168;
    param_1[1] = uStack_168._4_4_;
    param_1[2] = (undefined4)uStack_160;
    param_1[3] = uStack_160._4_4_;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    *(undefined1 *)(param_1 + 0x10) = 0;
    param_1[4] = uVar3;
    param_1[5] = uVar4;
    param_1[6] = uVar5;
    param_1[7] = uVar6;
    *(long *)(param_1 + 8) = lVar2;
    param_1[10] = uVar7;
    param_1[0xb] = uVar8;
    param_1[0xc] = uVar9;
    param_1[0xd] = uVar10;
    *(long *)(param_1 + 0xe) = lVar1;
    func_0x048e6d60(&uStack_68);
    lVar2 = uStack_140;
    if ((bStack_128 & 1) == 0) {
      lVar1 = uStack_138;
      if (uStack_140 != 0) {
        while (lVar2 != lVar1) {
          func_0x048b3e80(lVar1 + -0x40);
          lVar1 = lVar1 + -0x40;
        }
        uStack_138 = lVar2;
        func_0x0412a280(uStack_140,lStack_130 - uStack_140);
      }
      lVar1 = uStack_158;
      lVar2 = uStack_150;
      if (uStack_158 != 0) {
        for (; lVar1 != lVar2; lVar2 = lVar2 + -0x50) {
          if ((*(char *)(lVar2 + -8) == '\x01') && ((*(byte *)(lVar2 + -0x30) & 1) != 0)) {
            func_0x0412a280(*(undefined8 *)(lVar2 + -0x20),
                            *(ulong *)(lVar2 + -0x30) & 0xfffffffffffffffe);
          }
        }
        uStack_150 = lVar1;
        func_0x0412a280(uStack_158,lStack_148 - uStack_158);
      }
    }
  }
  if (bStack_e0 != 0) {
    if ((*(char *)(param_3 + 0x38) == '\0') &&
       (*(long *)(param_3 + 0x28) == *(long *)(param_3 + 0x30))) {
      *(undefined1 *)(param_1 + 0x10) = 1;
    }
    else {
      uVar12 = FUN_0412dc70();
      func_0x0ee06fa0(&uStack_120,0x4a,uVar12);
      uVar11 = uStack_e8;
      uVar12 = uStack_100;
      uStack_c8 = uStack_110;
      uStack_c0 = uStack_108;
      uStack_b8 = uStack_120;
      uStack_b0 = uStack_118;
      uStack_110 = 0;
      uStack_108 = 0;
      uStack_100 = 0;
      uStack_d8 = (undefined4)uStack_f8;
      uStack_d4 = uStack_f8._4_4_;
      uStack_d0 = (undefined4)uStack_f0;
      uStack_cc = uStack_f0._4_4_;
      uStack_f8 = 0;
      uStack_f0 = 0;
      uStack_e8 = 0;
      func_0x048e6d60(&uStack_120);
      bStack_128 = 0;
      uStack_168 = uStack_b8;
      uStack_160 = uStack_b0;
      uStack_158 = uStack_c8;
      uStack_150 = uStack_c0;
      lStack_148 = uVar12;
      uStack_140._0_4_ = uStack_d8;
      uStack_140._4_4_ = uStack_d4;
      uStack_138._0_4_ = uStack_d0;
      uStack_138._4_4_ = uStack_cc;
      lStack_130 = uVar11;
      func_0x083ea0e0(&uStack_168);
      lVar1 = lStack_130;
      uVar10 = uStack_138._4_4_;
      uVar9 = (undefined4)uStack_138;
      uVar8 = uStack_140._4_4_;
      uVar7 = (undefined4)uStack_140;
      lVar2 = lStack_148;
      uVar3 = (undefined4)uStack_158;
      uVar4 = uStack_158._4_4_;
      uVar5 = (undefined4)uStack_150;
      uVar6 = uStack_150._4_4_;
      uStack_a8 = (undefined4)uStack_168;
      uStack_a4 = uStack_168._4_4_;
      uStack_a0 = (undefined4)uStack_160;
      uStack_9c = uStack_160._4_4_;
      uStack_158 = 0;
      uStack_150 = 0;
      lStack_148 = 0;
      uStack_140 = 0;
      uStack_138 = 0;
      lStack_130 = 0;
      *param_1 = (undefined4)uStack_168;
      param_1[1] = uStack_168._4_4_;
      param_1[2] = (undefined4)uStack_160;
      param_1[3] = uStack_160._4_4_;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      *(undefined1 *)(param_1 + 0x10) = 0;
      param_1[4] = uVar3;
      param_1[5] = uVar4;
      param_1[6] = uVar5;
      param_1[7] = uVar6;
      *(long *)(param_1 + 8) = lVar2;
      param_1[10] = uVar7;
      param_1[0xb] = uVar8;
      param_1[0xc] = uVar9;
      param_1[0xd] = uVar10;
      *(long *)(param_1 + 0xe) = lVar1;
      func_0x048e6d60(&uStack_a8);
      lVar2 = uStack_140;
      if ((bStack_128 & 1) == 0) {
        lVar1 = uStack_138;
        if (uStack_140 != 0) {
          while (lVar2 != lVar1) {
            func_0x048b3e80(lVar1 + -0x40);
            lVar1 = lVar1 + -0x40;
          }
          uStack_138 = lVar2;
          func_0x0412a280(uStack_140,lStack_130 - uStack_140);
        }
        lVar1 = uStack_158;
        lVar2 = uStack_150;
        if (uStack_158 != 0) {
          for (; lVar1 != lVar2; lVar2 = lVar2 + -0x50) {
            if ((*(char *)(lVar2 + -8) == '\x01') && ((*(byte *)(lVar2 + -0x30) & 1) != 0)) {
              func_0x0412a280(*(undefined8 *)(lVar2 + -0x20),
                              *(ulong *)(lVar2 + -0x30) & 0xfffffffffffffffe);
            }
          }
          uStack_150 = lVar1;
          func_0x0412a280(uStack_158,lStack_148 - uStack_158);
        }
      }
    }
  }
  return param_1;
}


