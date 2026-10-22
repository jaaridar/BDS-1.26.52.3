/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd880440 (ELF vaddr 0xd780440)
 * Label: callee-of:0xe1d0880
 * Body:  [[0d880440, 0d880549]]
 * Ghidra: FUN_0d880440
 */


void FUN_0d880440(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  bool bVar4;
  undefined1 auStack_148 [48];
  char cStack_118;
  undefined1 uStack_114;
  undefined1 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
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
  undefined4 uStack_b8;
  undefined4 uStack_b4;
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
  undefined1 auStack_88 [64];
  undefined1 auStack_48 [64];
  
  lVar1 = func_0x06c3bfc0(param_1 + 0x18);
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
    puVar3 = &UNK_01389928;
    uVar2 = 0x11;
  }
  func_0x0d885ef0(auStack_148,param_1,puVar3,uVar2,0);
  uStack_114 = 0;
  uStack_110 = 0;
  if (cStack_118 == '\0') {
    func_0x0d8805d0(&uStack_c8,auStack_148,&DAT_013bbacd,0x1a);
    uStack_d8 = uStack_98;
    uStack_d4 = uStack_94;
    uStack_d0 = uStack_90;
    uStack_cc = uStack_8c;
    uStack_e8 = uStack_a8;
    uStack_e4 = uStack_a4;
    uStack_e0 = uStack_a0;
    uStack_dc = uStack_9c;
    uStack_f8 = uStack_b8;
    uStack_f4 = uStack_b4;
    uStack_f0 = uStack_b0;
    uStack_ec = uStack_ac;
    uStack_108 = uStack_c8;
    uStack_104 = uStack_c4;
    uStack_100 = uStack_c0;
    uStack_fc = uStack_bc;
    func_0x0d880930(auStack_48,&uStack_108,&UNK_0129d417,8);
    FUN_0d880dc0(auStack_88,auStack_48,&UNK_011cbb44,7);
  }
  return;
}


