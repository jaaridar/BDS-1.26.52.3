/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe972740 (ELF vaddr 0xe872740)
 * Label: string:minecraft:climate
 * Body:  [[0e972740, 0e9728eb]]
 * Ghidra: FUN_0e972740
 */


void FUN_0e972740(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  bool bVar4;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 uStack_1a8;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined1 auStack_78 [48];
  char cStack_48;
  undefined1 auStack_40 [56];
  
  lVar1 = func_0x0e868970(param_1 + 0x18);
  if ((*(int *)(lVar1 + 0x60) == -0x2b3da790) && (lVar1 = *(long *)(lVar1 + 0x68), lVar1 != 0)) {
    bVar4 = (*(byte *)(lVar1 + 8) & 1) != 0;
    puVar3 = (undefined *)(lVar1 + 9);
    if (bVar4) {
      puVar3 = *(undefined **)(lVar1 + 0x18);
    }
    uVar2 = (ulong)(*(byte *)(lVar1 + 8) >> 1);
    if (bVar4) {
      uVar2 = *(ulong *)(lVar1 + 0x10);
    }
  }
  else {
    puVar3 = &DAT_01e365c0;
    uVar2 = 0x11;
  }
  func_0x0e9c3f70(auStack_78,param_1,puVar3,uVar2,0);
  if (cStack_48 == '\0') {
    func_0x0e97e6c0(&uStack_120,auStack_78,&DAT_013bbacd,0x1a);
    uStack_1a8 = uStack_f0;
    uStack_1b8 = uStack_100;
    uStack_1b4 = uStack_fc;
    uStack_1b0 = uStack_f8;
    uStack_1ac = uStack_f4;
    uStack_1c8 = uStack_110;
    uStack_1c4 = uStack_10c;
    uStack_1c0 = uStack_108;
    uStack_1bc = uStack_104;
    uStack_1d8 = uStack_120;
    uStack_1d4 = uStack_11c;
    uStack_1d0 = uStack_118;
    uStack_1cc = uStack_114;
    func_0x0e9c4950(&uStack_e8,&uStack_1d8,&UNK_01e365d2,8,0);
    uStack_168 = uStack_b8;
    uStack_178 = uStack_c8;
    uStack_174 = uStack_c4;
    uStack_170 = uStack_c0;
    uStack_16c = uStack_bc;
    uStack_188 = uStack_d8;
    uStack_184 = uStack_d4;
    uStack_180 = uStack_d0;
    uStack_17c = uStack_cc;
    uStack_198 = uStack_e8;
    uStack_194 = uStack_e4;
    uStack_190 = uStack_e0;
    uStack_18c = uStack_dc;
    func_0x0e9c53c0(&uStack_b0,&uStack_198,&UNK_01e365e0,0x11,0);
    uStack_128 = uStack_80;
    uStack_138 = uStack_90;
    uStack_134 = uStack_8c;
    uStack_130 = uStack_88;
    uStack_12c = uStack_84;
    uStack_148 = uStack_a0;
    uStack_144 = uStack_9c;
    uStack_140 = uStack_98;
    uStack_13c = uStack_94;
    uStack_158 = uStack_b0;
    uStack_154 = uStack_ac;
    uStack_150 = uStack_a8;
    uStack_14c = uStack_a4;
    func_0x0e9c58b0(auStack_40,&uStack_158,&UNK_01e365f2,0xb,0);
  }
  return;
}


