/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x488f040 (ELF vaddr 0x478f040)
 * Label: callee-of:0x517a720
 * Body:  [[0488f040, 0488f0f7] [0488f100, 0488f19d]]
 * Ghidra: FUN_0488f040
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0488f040(undefined8 *param_1,byte *param_2,byte *param_3,ulong param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long unaff_RBX;
  undefined8 unaff_R12;
  undefined4 *puStack_70;
  undefined4 *puStack_68;
  undefined8 *puStack_60;
  undefined1 uStack_58;
  undefined8 *puStack_50;
  undefined4 **ppuStack_48;
  undefined4 **ppuStack_40;
  undefined1 uStack_38;
  
  uStack_58 = 0;
  if (param_4 != 0) {
    puStack_60 = param_1;
    if (0xaaaaaaaaaaaaaaa < param_4) {
      uVar5 = func_0x0488efe0();
      func_0x0488ef50(&puStack_60);
      uVar5 = _Unwind_Resume(uVar5);
      func_0x0488eff0(&puStack_50);
      *(undefined8 *)(unaff_RBX + 8) = unaff_R12;
      func_0x0488ef50(&puStack_60);
      _Unwind_Resume(uVar5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    puStack_70 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,param_4 * 0x18);
    if (puStack_70 == (undefined4 *)0x0) {
      func_0x0eec74c0(param_4 * 0x18,0);
    }
    *param_1 = puStack_70;
    param_1[1] = puStack_70;
    param_1[2] = puStack_70 + param_4 * 6;
    ppuStack_48 = &puStack_68;
    ppuStack_40 = &puStack_70;
    uStack_38 = 0;
    puStack_68 = puStack_70;
    puStack_50 = param_1;
    for (; param_2 != param_3; param_2 = param_2 + 0x18) {
      if ((*param_2 & 1) == 0) {
        *(undefined8 *)(puStack_70 + 4) = *(undefined8 *)(param_2 + 0x10);
        uVar2 = *(undefined4 *)(param_2 + 4);
        uVar3 = *(undefined4 *)(param_2 + 8);
        uVar4 = *(undefined4 *)(param_2 + 0xc);
        *puStack_70 = *(undefined4 *)param_2;
        puStack_70[1] = uVar2;
        puStack_70[2] = uVar3;
        puStack_70[3] = uVar4;
      }
      else {
        func_0x0412e5e0(puStack_70,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
      }
      puStack_70 = puStack_70 + 6;
    }
    param_1[1] = puStack_70;
  }
  return;
}


