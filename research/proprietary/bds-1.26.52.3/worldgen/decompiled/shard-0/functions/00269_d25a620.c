/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd35a620 (ELF vaddr 0xd25a620)
 * Label: callee-of:0xc95fb20
 * Body:  [[0d35a620, 0d35a768]]
 * Ghidra: FUN_0d35a620
 */


void FUN_0d35a620(long param_1,long *param_2,undefined8 param_3,long param_4)

{
  undefined7 *puVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  byte bStack_88;
  undefined7 uStack_87;
  ulong uStack_80;
  undefined7 *puStack_78;
  byte bStack_70;
  undefined1 uStack_6f;
  undefined6 uStack_6e;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  
  bStack_70 = 0;
  uStack_6f = 0;
  func_0x0d35a7f0(&bStack_88,param_4 + 0x20,&bStack_70);
  uVar7 = (ulong)(bStack_88 >> 1);
  puVar1 = &uStack_87;
  if ((bStack_88 & 1) != 0) {
    uVar7 = uStack_80;
    puVar1 = puStack_78;
  }
  puStack_58 = &UNK_0f461cc8;
  lStack_50 = param_1;
  uStack_48 = param_3;
  lStack_40 = param_4;
  ppuStack_38 = &puStack_58;
  (**(code **)(*param_2 + 0x30))(param_2,puVar1,uVar7,0xc,&puStack_58);
  if (ppuStack_38 == &puStack_58) {
    lVar2 = 0x20;
LAB_0d35a708:
    (**(code **)(*ppuStack_38 + lVar2))();
  }
  else {
    lVar2 = 0x28;
    if (ppuStack_38 != (undefined **)0x0) goto LAB_0d35a708;
  }
  if ((bStack_88 & 1) != 0) {
    func_0x0412a280(puStack_78,CONCAT71(uStack_87,bStack_88) & 0xfffffffffffffffe);
  }
  if ((bStack_70 & 1) == 0) {
    plVar3 = *(long **)(param_1 + 0xf8);
    plVar4 = *(long **)(param_1 + 0x100);
    if (plVar3 == plVar4) {
LAB_0d35a753:
      *(undefined4 *)(param_1 + 0x110) = 0;
      return;
    }
  }
  else {
    func_0x0412a280(uStack_60,CONCAT62(uStack_6e,CONCAT11(uStack_6f,bStack_70)) & 0xfffffffffffffffe
                   );
    plVar3 = *(long **)(param_1 + 0xf8);
    plVar4 = *(long **)(param_1 + 0x100);
    if (plVar3 == plVar4) goto LAB_0d35a753;
  }
  uVar5 = *(uint *)(param_1 + 0x110);
  do {
    uVar6 = *(int *)(*plVar3 + 0xa4) + 1;
    if (uVar6 < uVar5) {
      uVar6 = uVar5;
    }
    uVar5 = uVar6;
    plVar3 = plVar3 + 1;
  } while (plVar3 != plVar4);
  *(uint *)(param_1 + 0x110) = uVar5;
  return;
}


