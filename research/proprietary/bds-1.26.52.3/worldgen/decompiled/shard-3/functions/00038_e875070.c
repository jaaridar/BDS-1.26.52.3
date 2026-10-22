/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe975070 (ELF vaddr 0xe875070)
 * Label: callee-of:0xe706340
 * Body:  [[0e975070, 0e9752f0]]
 * Ghidra: FUN_0e975070
 */


void FUN_0e975070(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  bool bVar4;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined8 uStack_298;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 uStack_258;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 uStack_218;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 uStack_1d8;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 uStack_198;
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
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 uStack_160;
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
  
  func_0x0e97f2e0();
  func_0x0e9800c0(param_1);
  lVar1 = func_0x0e8703f0(param_1 + 0x18);
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
    puVar3 = &DAT_01e366e0;
    uVar2 = 0x24;
  }
  func_0x0e9e1a90(auStack_78,param_1,puVar3,uVar2,0);
  if (cStack_48 == '\0') {
    func_0x0e980f00(&uStack_190,auStack_78,&DAT_013bbacd,0x1a);
    uStack_298 = uStack_160;
    uStack_2a8 = uStack_170;
    uStack_2a4 = uStack_16c;
    uStack_2a0 = uStack_168;
    uStack_29c = uStack_164;
    uStack_2b8 = uStack_180;
    uStack_2b4 = uStack_17c;
    uStack_2b0 = uStack_178;
    uStack_2ac = uStack_174;
    uStack_2c8 = uStack_190;
    uStack_2c4 = uStack_18c;
    uStack_2c0 = uStack_188;
    uStack_2bc = uStack_184;
    func_0x0e9e24a0(&uStack_158,&uStack_2c8,&UNK_01e36710,0x14,0);
    uStack_258 = uStack_128;
    uStack_268 = uStack_138;
    uStack_264 = uStack_134;
    uStack_260 = uStack_130;
    uStack_25c = uStack_12c;
    uStack_278 = uStack_148;
    uStack_274 = uStack_144;
    uStack_270 = uStack_140;
    uStack_26c = uStack_13c;
    uStack_288 = uStack_158;
    uStack_284 = uStack_154;
    uStack_280 = uStack_150;
    uStack_27c = uStack_14c;
    func_0x0e9e45d0(&uStack_120,&uStack_288,&UNK_01e36730,0x15,0);
    uStack_218 = uStack_f0;
    uStack_228 = uStack_100;
    uStack_224 = uStack_fc;
    uStack_220 = uStack_f8;
    uStack_21c = uStack_f4;
    uStack_238 = uStack_110;
    uStack_234 = uStack_10c;
    uStack_230 = uStack_108;
    uStack_22c = uStack_104;
    uStack_248 = uStack_120;
    uStack_244 = uStack_11c;
    uStack_240 = uStack_118;
    uStack_23c = uStack_114;
    func_0x0e9e4b80(&uStack_e8,&uStack_248,&UNK_01e36750,0x15,0);
    uStack_1d8 = uStack_b8;
    uStack_1e8 = uStack_c8;
    uStack_1e4 = uStack_c4;
    uStack_1e0 = uStack_c0;
    uStack_1dc = uStack_bc;
    uStack_1f8 = uStack_d8;
    uStack_1f4 = uStack_d4;
    uStack_1f0 = uStack_d0;
    uStack_1ec = uStack_cc;
    uStack_208 = uStack_e8;
    uStack_204 = uStack_e4;
    uStack_200 = uStack_e0;
    uStack_1fc = uStack_dc;
    func_0x0e9e93e0(&uStack_b0,&uStack_208,&UNK_01e36770,0x14,0);
    uStack_198 = uStack_80;
    uStack_1a8 = uStack_90;
    uStack_1a4 = uStack_8c;
    uStack_1a0 = uStack_88;
    uStack_19c = uStack_84;
    uStack_1b8 = uStack_a0;
    uStack_1b4 = uStack_9c;
    uStack_1b0 = uStack_98;
    uStack_1ac = uStack_94;
    uStack_1c8 = uStack_b0;
    uStack_1c4 = uStack_ac;
    uStack_1c0 = uStack_a8;
    uStack_1bc = uStack_a4;
    func_0x0e9e9990(auStack_40,&uStack_1c8,&UNK_01e36790,0x14,0);
  }
  return;
}


