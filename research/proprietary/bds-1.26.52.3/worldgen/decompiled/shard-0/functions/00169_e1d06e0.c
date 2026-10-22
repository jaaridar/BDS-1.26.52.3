/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe2d06e0 (ELF vaddr 0xe1d06e0)
 * Label: string:minecraft:biome_music
 * Body:  [[0e2d06e0, 0e2d082c]]
 * Ghidra: FUN_0e2d06e0
 */


void FUN_0e2d06e0(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  bool bVar4;
  undefined4 uStack_168;
  undefined4 uStack_164;
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
  undefined8 uStack_138;
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
  undefined8 uStack_f8;
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
  
  func_0x0e2d98e0();
  lVar1 = func_0x0e34a1b0(param_1 + 0x18);
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
    puVar3 = &UNK_01e13870;
    uVar2 = 0x15;
  }
  func_0x0e390d50(auStack_78,param_1,puVar3,uVar2,0);
  if (cStack_48 == '\0') {
    func_0x0e2d9b70(&uStack_e8,auStack_78,&DAT_013bbacd,0x1a);
    uStack_138 = uStack_b8;
    uStack_148 = uStack_c8;
    uStack_144 = uStack_c4;
    uStack_140 = uStack_c0;
    uStack_13c = uStack_bc;
    uStack_158 = uStack_d8;
    uStack_154 = uStack_d4;
    uStack_150 = uStack_d0;
    uStack_14c = uStack_cc;
    uStack_168 = uStack_e8;
    uStack_164 = uStack_e4;
    uStack_160 = uStack_e0;
    uStack_15c = uStack_dc;
    func_0x0e391730(&uStack_b0,&uStack_168,&UNK_01e13890,0x11,0);
    uStack_f8 = uStack_80;
    uStack_108 = uStack_90;
    uStack_104 = uStack_8c;
    uStack_100 = uStack_88;
    uStack_fc = uStack_84;
    uStack_118 = uStack_a0;
    uStack_114 = uStack_9c;
    uStack_110 = uStack_98;
    uStack_10c = uStack_94;
    uStack_128 = uStack_b0;
    uStack_124 = uStack_ac;
    uStack_120 = uStack_a8;
    uStack_11c = uStack_a4;
    func_0x0e3921a0(auStack_40,&uStack_128,&UNK_01e138b0,0x10,0);
  }
  return;
}


