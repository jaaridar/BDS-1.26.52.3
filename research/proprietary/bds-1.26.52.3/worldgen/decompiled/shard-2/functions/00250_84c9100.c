/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x85c9100 (ELF vaddr 0x84c9100)
 * Label: FeatureRegistryPacket::vslot1
 * Body:  [[085c9100, 085c912b] [085c9130, 085c914b] [085c9150, 085c91aa]]
 * Ghidra: wg_FeatureRegistryPacket__vslot1
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * wg_FeatureRegistryPacket__vslot1(undefined8 *param_1)

{
  byte bVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar3 = &UNK_0f11ff58;
  *param_1 = &UNK_0f11ff58;
  lVar2 = param_1[6];
  if (lVar2 != 0) {
    lVar5 = param_1[7];
    lVar4 = lVar2;
    if (lVar2 != lVar5) {
      do {
        if ((*(byte *)(lVar5 + -0x18) & 1) == 0) {
          bVar1 = *(byte *)(lVar5 + -0x30);
        }
        else {
          thunk_FUN_0ee326a0(*(undefined8 *)(lVar5 + -8),
                             *(ulong *)(lVar5 + -0x18) & 0xfffffffffffffffe);
          bVar1 = *(byte *)(lVar5 + -0x30);
        }
        if ((bVar1 & 1) != 0) {
          thunk_FUN_0ee326a0(*(undefined8 *)(lVar5 + -0x20),
                             *(ulong *)(lVar5 + -0x30) & 0xfffffffffffffffe);
        }
        lVar5 = lVar5 + -0x30;
      } while (lVar5 != lVar2);
      lVar4 = param_1[6];
    }
    param_1[7] = lVar2;
    puVar3 = (undefined *)thunk_FUN_0ee326a0(lVar4,param_1[8] - lVar4);
  }
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return puVar3;
}


