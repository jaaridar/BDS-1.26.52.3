/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x8816ca0 (ELF vaddr 0x8716ca0)
 * Label: string:- mBiomeData: map of biome string indices to biome definitio
 * Body:  [[08816ca0, 08816dc9]]
 * Ghidra: FUN_08816ca0
 */


void FUN_08816ca0(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  bool bVar4;
  undefined4 uStack_16c;
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
  undefined1 auStack_f0 [48];
  char cStack_c0;
  undefined1 auStack_b8 [56];
  undefined1 auStack_80 [56];
  undefined1 auStack_48 [56];
  
  func_0x0881a310();
  lVar1 = func_0x08961b20(param_1 + 0x18);
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
    puVar3 = &UNK_01434c21;
    uVar2 = 0x19;
  }
  func_0x08961e90(auStack_f0,param_1,puVar3,uVar2,0);
  if (cStack_c0 == '\0') {
    uStack_16c = 0x7a;
    func_0x0884b480(&uStack_128,auStack_f0,&UNK_0120c310,0xf,&uStack_16c);
    uStack_138 = uStack_f8;
    uStack_148 = uStack_108;
    uStack_144 = uStack_104;
    uStack_140 = uStack_100;
    uStack_13c = uStack_fc;
    uStack_158 = uStack_118;
    uStack_154 = uStack_114;
    uStack_150 = uStack_110;
    uStack_14c = uStack_10c;
    uStack_168 = uStack_128;
    uStack_164 = uStack_124;
    uStack_160 = uStack_120;
    uStack_15c = uStack_11c;
    func_0x0884b800(auStack_80,&uStack_168,&UNK_012414a0,0x17,&UNK_0132cbb7);
    func_0x0884bb70(auStack_48,auStack_80);
    func_0x0884bd50(auStack_b8,auStack_48);
  }
  return;
}


