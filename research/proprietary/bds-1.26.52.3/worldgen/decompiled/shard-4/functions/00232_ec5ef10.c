/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xed5ef10 (ELF vaddr 0xec5ef10)
 * Label: callee-of:0xe055e60
 * Body:  [[0ed5ef10, 0ed5efd4]]
 * Ghidra: FUN_0ed5ef10
 */


undefined8 FUN_0ed5ef10(undefined8 param_1,undefined4 *param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  byte bVar2;
  undefined7 *puVar3;
  long lVar4;
  byte bStack_88;
  undefined7 uStack_87;
  ulong uStack_80;
  undefined7 *puStack_78;
  undefined8 uStack_70;
  undefined7 *puStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  func_0x0ed6c850(&bStack_88,param_2,*param_2);
  puVar3 = puStack_78;
  bVar2 = bStack_88;
  uStack_70 = *(undefined8 *)(param_3 + 8);
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  lVar4 = (**(code **)(param_4 + 0x10))(0,param_4,0);
  puStack_68 = puVar3;
  uStack_60 = uStack_80;
  if ((bVar2 & 1) == 0) {
    puStack_68 = &uStack_87;
    uStack_60 = (ulong)(bVar2 >> 1);
  }
  uStack_48 = *(undefined4 *)(lVar4 + 8);
  uStack_44 = *(undefined4 *)(lVar4 + 0xc);
  uStack_40 = *(undefined4 *)(lVar4 + 0x10);
  uStack_3c = *(undefined4 *)(lVar4 + 0x14);
  uStack_58 = uStack_70;
  uStack_50 = uVar1;
  func_0x0470d9a0(param_1,&UNK_013dbc4a,0x3e,0xddd,&puStack_68);
  if ((bStack_88 & 1) != 0) {
    func_0x0412a280(puStack_78,CONCAT71(uStack_87,bStack_88) & 0xfffffffffffffffe);
  }
  return param_1;
}


