/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe89e420 (ELF vaddr 0xe79e420)
 * Label: string:minecraft:surface_builder
 * Body:  [[0e89e420, 0e89e515]]
 * Ghidra: FUN_0e89e420
 */


void FUN_0e89e420(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  bool bVar4;
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
  
  FUN_0e8af270();
  lVar1 = func_0x0e87c400(param_1 + 0x18);
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
    puVar3 = &DAT_01e349f0;
    uVar2 = 0x19;
  }
  func_0x0e904b00(auStack_78,param_1,puVar3,uVar2,0);
  if (cStack_48 == '\0') {
    func_0x0e8b6890(&uStack_b0,auStack_78,&DAT_013bbacd,0x1a);
    uStack_b8 = uStack_80;
    uStack_c8 = uStack_90;
    uStack_c4 = uStack_8c;
    uStack_c0 = uStack_88;
    uStack_bc = uStack_84;
    uStack_d8 = uStack_a0;
    uStack_d4 = uStack_9c;
    uStack_d0 = uStack_98;
    uStack_cc = uStack_94;
    uStack_e8 = uStack_b0;
    uStack_e4 = uStack_ac;
    uStack_e0 = uStack_a8;
    uStack_dc = uStack_a4;
    func_0x0e9055e0(&uStack_e8,&UNK_0142a5c6,4);
    func_0x0e905ac0(auStack_40,&uStack_e8,&UNK_01e3253d,7,1);
  }
  return;
}


