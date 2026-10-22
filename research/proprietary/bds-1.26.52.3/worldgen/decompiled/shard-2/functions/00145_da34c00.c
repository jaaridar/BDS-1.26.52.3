/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xdb34c00 (ELF vaddr 0xda34c00)
 * Label: string:minecraft:subsurface_builder
 * Body:  [[0db34c00, 0db34d24]]
 * Ghidra: FUN_0db34c00
 */


void FUN_0db34c00(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  bool bVar4;
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
  undefined8 uStack_c8;
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
  undefined8 uStack_88;
  undefined1 auStack_80 [48];
  char cStack_50;
  undefined1 auStack_48 [56];
  
  func_0x0e1305d0();
  lVar1 = func_0x0db763d0(param_1 + 0x18);
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
    puVar3 = &UNK_0148d9b3;
    uVar2 = 0x10;
  }
  func_0x0db76bb0(auStack_80,param_1,puVar3,uVar2,0);
  if (cStack_50 == '\0') {
    func_0x0db34d30(&uStack_b8,auStack_80,&DAT_013bbacd,0x1a);
    uStack_c8 = uStack_88;
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
    func_0x0db35090(auStack_48,&uStack_f8);
    func_0x0db351a0(&uStack_f8,auStack_80,&DAT_01e349f0,0x19);
    func_0x0db395e0(param_1);
    func_0x0db35570(&uStack_f8,auStack_80,&DAT_01df4730,0x19);
    func_0x0db35570(&uStack_f8,auStack_80,&UNK_01df4750,0x1c);
  }
  return;
}


