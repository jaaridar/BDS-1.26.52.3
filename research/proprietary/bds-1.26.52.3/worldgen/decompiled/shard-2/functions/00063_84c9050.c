/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x85c9050 (ELF vaddr 0x84c9050)
 * Label: FeatureRegistryPacket::vslot0
 * Body:  [[085c9050, 085c909b] [085c90a0, 085c90f9]]
 * Ghidra: wg_FeatureRegistryPacket__vslot0
 */


/* WARNING: Possible PIC construction at 0x085c90c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x085c90cd) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * wg_FeatureRegistryPacket__vslot0(undefined8 *param_1)

{
  byte bVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 auStack_30 [2];
  
  puVar4 = &UNK_0f11ff58;
  *param_1 = &UNK_0f11ff58;
  lVar2 = param_1[6];
  if (lVar2 == 0) {
    return puVar4;
  }
  lVar6 = param_1[7];
  lVar5 = lVar2;
  if (lVar2 != lVar6) {
    do {
      if ((*(byte *)(lVar6 + -0x18) & 1) == 0) {
        bVar1 = *(byte *)(lVar6 + -0x30);
      }
      else {
        auStack_30[0] = 0x85c90b1;
        puVar4 = (undefined *)
                 func_0x0412a280(*(undefined8 *)(lVar6 + -8),
                                 *(ulong *)(lVar6 + -0x18) & 0xfffffffffffffffe);
        bVar1 = *(byte *)(lVar6 + -0x30);
      }
      if ((bVar1 & 1) != 0) {
        lVar5 = *(long *)(lVar6 + -0x20);
        register0x00000020 = (BADSPACEBASE *)auStack_30;
        auStack_30[0] = 0x85c90cd;
        goto SUB_0412a280;
      }
      lVar6 = lVar6 + -0x30;
    } while (lVar6 != lVar2);
    lVar5 = param_1[6];
  }
  param_1[7] = lVar2;
SUB_0412a280:
  *(undefined **)((long)register0x00000020 + -8) = puVar4;
  if (lVar5 != 0) {
    pcVar3 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar3)(&DAT_0f5463b0,lVar5);
  }
  return *(undefined **)((long)register0x00000020 + -8);
}


