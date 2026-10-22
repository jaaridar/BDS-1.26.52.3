/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x8b14040 (ELF vaddr 0x8a14040)
 * Label: JigsawStructureDataPacket::vslot10
 * Body:  [[08b14040, 08b1437e]]
 * Ghidra: wg_JigsawStructureDataPacket__vslot10
 */


long wg_JigsawStructureDataPacket__vslot10(long param_1,long *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  byte bStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  byte bStack_198;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
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
  undefined1 uStack_68;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  puVar3 = &uStack_228;
  (**(code **)(*param_2 + 0x88))(&uStack_228);
  bStack_198 = bStack_1e8;
  if (bStack_1e8 == 0) {
    uStack_1d8 = uStack_228;
    uStack_1d0 = uStack_220;
    uStack_1c8 = uStack_218;
    uStack_1c0 = uStack_210;
    uStack_1b8 = uStack_208;
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_208 = 0;
    uStack_1b0 = uStack_200;
    uStack_1a8 = uStack_1f8;
    uStack_1a0 = uStack_1f0;
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x048e6d60(&uStack_228);
  }
  if ((bStack_198 & 1) == 0) {
    func_0x08b14400(&uStack_1d8);
    uStack_e8 = uStack_1d8;
    uStack_e0 = uStack_1d0;
    uStack_d8 = uStack_1c8;
    uStack_d0 = uStack_1c0;
    uStack_c8 = uStack_1b8;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_c0 = (undefined4)uStack_1b0;
    uStack_bc = uStack_1b0._4_4_;
    uStack_b8 = (undefined4)uStack_1a8;
    uStack_b4 = uStack_1a8._4_4_;
    uStack_b0 = uStack_1a0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    func_0x052bddf0(param_1,&uStack_e8);
    puVar3 = &uStack_e8;
  }
  else {
    if ((*(char *)(param_3 + 0x38) == '\0') &&
       (*(long *)(param_3 + 0x28) == *(long *)(param_3 + 0x30))) {
      *(undefined1 *)(param_1 + 0x40) = 1;
      goto LAB_08b140ee;
    }
    uVar2 = func_0x0412dc70();
    func_0x0ee06fa0(&uStack_188,0x4a,uVar2);
    uVar1 = uStack_150;
    uVar2 = uStack_168;
    uStack_138 = uStack_178;
    uStack_130 = uStack_170;
    uStack_58 = uStack_188;
    uStack_54 = uStack_184;
    uStack_50 = uStack_180;
    uStack_4c = uStack_17c;
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_168 = 0;
    uStack_148 = (undefined4)uStack_160;
    uStack_144 = uStack_160._4_4_;
    uStack_140 = (undefined4)uStack_158;
    uStack_13c = uStack_158._4_4_;
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_68 = 0;
    uStack_a8 = uStack_188;
    uStack_a4 = uStack_184;
    uStack_a0 = uStack_180;
    uStack_9c = uStack_17c;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_28 = 0;
    uStack_20 = 0;
    func_0x048e6d60(&uStack_58);
    func_0x048e6d60(&uStack_188);
    bStack_1e8 = 0;
    uStack_228 = CONCAT44(uStack_a4,uStack_a8);
    uStack_220 = CONCAT44(uStack_9c,uStack_a0);
    uStack_218 = uStack_138;
    uStack_210 = uStack_130;
    uStack_208 = uVar2;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_200._0_4_ = uStack_148;
    uStack_200._4_4_ = uStack_144;
    uStack_1f8._0_4_ = uStack_140;
    uStack_1f8._4_4_ = uStack_13c;
    uStack_1f0 = uVar1;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x048e6d60(&uStack_a8);
    func_0x08b144c0(&uStack_228);
    uStack_128 = uStack_228;
    uStack_120 = uStack_220;
    uStack_118 = uStack_218;
    uStack_110 = uStack_210;
    uStack_108 = uStack_208;
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_208 = 0;
    uStack_100 = (undefined4)uStack_200;
    uStack_fc = uStack_200._4_4_;
    uStack_f8 = (undefined4)uStack_1f8;
    uStack_f4 = uStack_1f8._4_4_;
    uStack_f0 = uStack_1f0;
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x052bddf0(param_1,&uStack_128);
    func_0x048e6d60(&uStack_128);
    if ((bStack_1e8 & 1) != 0) goto LAB_08b140ee;
  }
  func_0x048e6d60(puVar3);
LAB_08b140ee:
  if (bStack_198 == 0) {
    func_0x048e6d60(&uStack_1d8);
  }
  return param_1;
}


