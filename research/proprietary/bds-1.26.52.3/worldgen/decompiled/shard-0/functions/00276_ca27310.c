/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcb27310 (ELF vaddr 0xca27310)
 * Label: callee-of:0xc967370
 * Body:  [[0cb27310, 0cb2736a] [0cb27370, 0cb2741e]]
 * Ghidra: FUN_0cb27310
 */


void FUN_0cb27310(long *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  undefined1 uVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined **ppuStack_38;
  
  lVar6 = *(long *)(param_3 + 0x28);
  puStack_58 = &UNK_0f3f1958;
  lStack_50 = param_3;
  uStack_48 = param_5;
  puStack_40 = &uStack_60;
  ppuStack_38 = &puStack_58;
  lVar4 = *param_1;
  lVar7 = 0x20;
  uStack_60 = param_6;
  if (lVar4 != param_1[1]) {
    do {
      while( true ) {
        if (ppuStack_38 == (undefined **)0x0) {
          uVar5 = FUN_04891200();
          lVar6 = 0x20;
          if ((ppuStack_38 == &puStack_58) || (lVar6 = 0x28, ppuStack_38 != (undefined **)0x0)) {
            (**(code **)(*ppuStack_38 + lVar6))();
          }
          func_0x0eee2d70(uVar5);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar2 = (**(code **)(*ppuStack_38 + 0x30))(ppuStack_38,lVar4);
        cVar3 = func_0x0cb28600(param_1,lVar4,uVar2,lVar6 + 0x20,param_2);
        if (cVar3 == '\0') break;
        lVar4 = func_0x0cb287f0(param_1,lVar4);
        if (lVar4 == param_1[1]) goto LAB_0cb273b9;
      }
      lVar4 = lVar4 + 0x70;
    } while (lVar4 != param_1[1]);
LAB_0cb273b9:
    if ((ppuStack_38 != &puStack_58) && (lVar7 = 0x28, ppuStack_38 == (undefined **)0x0)) {
      return;
    }
  }
  (**(code **)(*ppuStack_38 + lVar7))();
  return;
}


