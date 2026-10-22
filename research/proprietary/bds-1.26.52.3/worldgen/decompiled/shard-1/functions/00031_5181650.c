/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5281650 (ELF vaddr 0x5181650)
 * Label: OverworldGeneratorMultinoise::vslot56
 * Body:  [[05281650, 05281783] [05281790, 05281848] [05281860, 052818cc]]
 * Ghidra: wg_OverworldGeneratorMultinoise__vslot56
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_OverworldGeneratorMultinoise__vslot56
               (long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined1 *puStack_98;
  ulong uStack_90;
  undefined1 auStack_88 [32];
  undefined *apuStack_68 [4];
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  puStack_98 = auStack_88;
  uStack_90 = 0x400000000;
  uStack_a0 = param_5;
  func_0x0cafcfe0(param_3 + 0x120,&puStack_98);
  puVar4 = puStack_98;
  uVar7 = uStack_90 & 0xffffffff;
  if (puStack_98 == (undefined1 *)0x0 && uVar7 != 0) {
    uVar5 = func_0x04890760();
    uVar5 = func_0x04882e20(uVar5);
    apuStack_68[0] = &UNK_0f460460;
    if (lStack_48 != 0) {
      lStack_40 = lStack_48;
      func_0x0412a280(lStack_48,lStack_38 - lStack_48);
    }
    if (puStack_98 != (undefined1 *)0x0 && auStack_88 != puStack_98) {
      (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0);
    }
    uVar5 = _Unwind_Resume(uVar5);
    func_0x04882e20(uVar5);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  func_0x0d2eeb90(apuStack_68,
                  CONCAT44((int)(*(ulong *)(param_3 + 0x50) >> 0x1c) >> 2,
                           (int)*(ulong *)(param_3 + 0x50) << 2) & 0xfffffffcffffffff,param_1 + 0x70
                  ,4);
  lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 0x348);
  lStack_b8 = 0;
  lStack_b0 = 0;
  lStack_a8 = 0;
  lVar1 = *(long *)(lVar6 + 0xa8);
  lVar6 = *(long *)(lVar6 + 0xb0);
  func_0x0488f040(&lStack_b8,lVar1,lVar6,(lVar6 - lVar1 >> 3) * -0x5555555555555555);
  lVar3 = lStack_b0;
  lVar1 = lStack_b8;
  for (lVar6 = lStack_b8; lStack_b8 = lVar1, lVar6 != lVar3; lVar6 = lVar6 + 0x18) {
    func_0x0c8550b0(param_3,param_4,uStack_a0,uVar7,puVar4,lVar6,apuStack_68);
    lVar1 = lStack_b8;
  }
  lVar6 = lStack_b0;
  if (lVar1 != 0) {
    for (; lVar1 != lVar6; lVar6 = lVar6 + -0x18) {
      if ((*(byte *)(lVar6 + -0x18) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar6 + -8),*(ulong *)(lVar6 + -0x18) & 0xfffffffffffffffe);
      }
    }
    lStack_b0 = lVar1;
    func_0x0412a280(lStack_b8,lStack_a8 - lStack_b8);
  }
  apuStack_68[0] = &UNK_0f460460;
  if (lStack_48 != 0) {
    lStack_40 = lStack_48;
    func_0x0412a280(lStack_48,lStack_38 - lStack_48);
  }
  if (puStack_98 != (undefined1 *)0x0 && auStack_88 != puStack_98) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0);
  }
  return;
}


