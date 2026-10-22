/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x85c9100 (ELF vaddr 0x84c9100)
 * Label: FeatureRegistryPacket::vslot1
 * Body:  [[085c9100, 085c912b] [085c9130, 085c914b] [085c9150, 085c91aa]]
 * Ghidra: wg_FeatureRegistryPacket__vslot1
 */


/* WARNING: Possible PIC construction at 0x085c918e: Changing call to branch */
/* WARNING: Possible PIC construction at 0x085c9178: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x085c917d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_FeatureRegistryPacket__vslot1(undefined8 *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 auStack_30 [2];
  
  puVar4 = &UNK_0f11ff58;
  *param_1 = &UNK_0f11ff58;
  puVar2 = (undefined8 *)param_1[6];
  if (puVar2 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)param_1[7];
    puVar5 = puVar2;
    if (puVar2 != puVar6) {
      do {
        if ((*(byte *)(puVar6 + -3) & 1) == 0) {
          bVar1 = *(byte *)(puVar6 + -6);
        }
        else {
          auStack_30[0] = 0x85c9161;
          puVar4 = (undefined *)func_0x0412a280(puVar6[-1],puVar6[-3] & 0xfffffffffffffffe);
          bVar1 = *(byte *)(puVar6 + -6);
        }
        if ((bVar1 & 1) != 0) {
          param_1 = (undefined8 *)puVar6[-4];
          register0x00000020 = (BADSPACEBASE *)auStack_30;
          auStack_30[0] = 0x85c917d;
          goto SUB_0412a280;
        }
        puVar6 = puVar6 + -6;
      } while (puVar6 != puVar2);
      puVar5 = (undefined8 *)param_1[6];
    }
    param_1[7] = puVar2;
    register0x00000020 = (BADSPACEBASE *)auStack_30;
    auStack_30[0] = 0x85c9193;
    param_1 = puVar5;
  }
SUB_0412a280:
  *(undefined **)((long)register0x00000020 + -8) = puVar4;
  if (param_1 != (undefined8 *)0x0) {
    pcVar3 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar3)(&DAT_0f5463b0,param_1);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


