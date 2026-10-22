/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x527e8e0 (ELF vaddr 0x517e8e0)
 * Label: OverworldGenerator2d::vslot56
 * Body:  [[0527e8e0, 0527e9d0] [0527e9e0, 0527ea4d]]
 * Ghidra: wg_OverworldGenerator2d__vslot56
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_OverworldGenerator2d__vslot56
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  puVar2 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar2 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar2 = param_2;
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x348);
  lStack_48 = 0;
  lStack_40 = 0;
  lStack_38 = 0;
  lVar3 = *(long *)(lVar1 + 0xa8);
  lVar1 = *(long *)(lVar1 + 0xb0);
  func_0x0488f040(&lStack_48,lVar3,lVar1,(lVar1 - lVar3 >> 3) * -0x5555555555555555);
  lVar1 = lStack_40;
  if (lStack_48 != lStack_40) {
    lVar3 = lStack_48;
    do {
      func_0x0c8550b0(param_3,param_4,param_5,1,puVar2,lVar3,param_1 + 0x70);
      lVar3 = lVar3 + 0x18;
    } while (lVar3 != lVar1);
  }
  lVar3 = lStack_48;
  lVar1 = lStack_40;
  if (lStack_48 != 0) {
    for (; lVar3 != lVar1; lVar1 = lVar1 + -0x18) {
      if ((*(byte *)(lVar1 + -0x18) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar1 + -8),*(ulong *)(lVar1 + -0x18) & 0xfffffffffffffffe);
      }
    }
    lStack_40 = lVar3;
    func_0x0412a280(lStack_48,lStack_38 - lStack_48);
  }
  func_0x0412a280(puVar2,8);
  return;
}


