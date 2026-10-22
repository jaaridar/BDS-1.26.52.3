/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcdae530 (ELF vaddr 0xccae530)
 * Label: string:Tint method logic varies, but often refers to the "rain" and
 * Body:  [[0cdae530, 0cdae6f9]]
 * Ghidra: FUN_0cdae530
 */


void FUN_0cdae530(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  bool bVar4;
  byte bStack_1b0;
  undefined7 uStack_1af;
  undefined8 uStack_1a0;
  undefined *puStack_198;
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
  undefined4 uStack_160;
  undefined4 uStack_15c;
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
  char cStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
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
  undefined1 auStack_78 [8];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined1 auStack_40 [56];
  
  func_0x0d012070();
  lVar1 = func_0x0cdfca00(param_1 + 0x18);
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
    puVar3 = &UNK_013529c9;
    uVar2 = 0xf;
  }
  func_0x0cdfcf10(&uStack_160,param_1,puVar3,uVar2,0);
  if (cStack_130 == '\0') {
    uStack_108 = uStack_140;
    uStack_104 = uStack_13c;
    uStack_100 = uStack_138;
    uStack_fc = uStack_134;
    uStack_118 = uStack_150;
    uStack_114 = uStack_14c;
    uStack_110 = uStack_148;
    uStack_10c = uStack_144;
    uStack_128 = uStack_160;
    uStack_124 = uStack_15c;
    uStack_120 = uStack_158;
    uStack_11c = uStack_154;
    func_0x0cdae700(&uStack_b0,&uStack_128,&UNK_01268a39,0xb);
    puStack_198 = &UNK_011af8a7;
    FUN_0470d9a0(&bStack_1b0,&UNK_01387e95,0x3c,0xc,&puStack_198);
    uStack_e8 = uStack_b0;
    uStack_e4 = uStack_ac;
    uStack_e0 = uStack_a8;
    uStack_dc = uStack_a4;
    uStack_d8 = uStack_a0;
    uStack_d4 = uStack_9c;
    uStack_d0 = uStack_98;
    uStack_cc = uStack_94;
    uStack_c8 = uStack_90;
    uStack_c4 = uStack_8c;
    uStack_c0 = uStack_88;
    uStack_bc = uStack_84;
    uStack_b8 = uStack_80;
    func_0x0cdfe1c0(auStack_78,&uStack_e8,&UNK_01374375,5,1);
    uStack_168 = uStack_48;
    uStack_178 = uStack_58;
    uStack_174 = uStack_54;
    uStack_170 = uStack_50;
    uStack_16c = uStack_4c;
    uStack_188 = uStack_68;
    uStack_184 = uStack_64;
    uStack_180 = uStack_60;
    uStack_17c = uStack_5c;
    uStack_190 = uStack_70;
    uStack_18c = uStack_6c;
    func_0x0cdae950(auStack_40,&puStack_198);
    if ((bStack_1b0 & 1) != 0) {
      thunk_FUN_0ee326a0(uStack_1a0,CONCAT71(uStack_1af,bStack_1b0) & 0xfffffffffffffffe);
    }
  }
  return;
}


