/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca71230 (ELF vaddr 0xc971230)
 * Label: callee-of:0x517ab30
 * Body:  [[0ca71230, 0ca71337]]
 * Ghidra: FUN_0ca71230
 */


void FUN_0ca71230(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 )

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  long lStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  (**(code **)(**(long **)(param_2 + 0xa0) + 0xc48))(&uStack_58);
  auStack_70[0] = 0;
  uStack_68 = 0;
  lStack_60 = 0;
  lVar2 = CONCAT44(uStack_4c,uStack_50);
  uStack_48 = uStack_58;
  uStack_44 = uStack_54;
  uStack_40 = uStack_50;
  uStack_3c = uStack_4c;
  if (lVar2 == 0) {
    func_0x0ca11350(auStack_70,&uStack_48);
    lVar2 = CONCAT44(uStack_4c,uStack_50);
  }
  else {
    LOCK();
    *(long *)(lVar2 + 0x10) = *(long *)(lVar2 + 0x10) + 1;
    UNLOCK();
    func_0x0ca11350(auStack_70,&uStack_48);
    func_0x0412c2d0(lVar2);
    lVar2 = CONCAT44(uStack_4c,uStack_50);
  }
  if (lVar2 != 0) {
    func_0x0412c2d0();
  }
  puVar1 = *(undefined8 **)(*(long *)(param_1 + 0x78) + 0x38);
  for (puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x78) + 0x30); puVar3 != puVar1;
      puVar3 = puVar3 + 1) {
    func_0x0d34ff70(*puVar3,param_2,param_3,param_4,param_5);
  }
  func_0x0ca11610(auStack_70);
  if (lStack_60 != 0) {
    func_0x0412c2d0();
  }
  return;
}


