/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x84c9050
 * Label: FeatureRegistryPacket::vslot0
 * Body:  [[084c9050, 084c9090] [084c919d, 084c91d0]]
 * Ghidra: wg_FeatureRegistryPacket__vslot0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_FeatureRegistryPacket__vslot0(void)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *unaff_RBX;
  byte *unaff_R15;
  
  puVar3 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
  if (puVar3 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x18,0);
    bVar1 = *unaff_R15;
  }
  else {
    bVar1 = *unaff_R15;
  }
  if ((bVar1 & 1) == 0) {
    puVar3[2] = *(undefined8 *)(unaff_R15 + 0x10);
    uVar2 = *(undefined8 *)(unaff_R15 + 8);
    *puVar3 = *(undefined8 *)unaff_R15;
    puVar3[1] = uVar2;
  }
  else {
    func_0x0412e5e0(puVar3,*(undefined8 *)(unaff_R15 + 0x10),*(undefined8 *)(unaff_R15 + 8));
  }
  *unaff_RBX = puVar3;
  return 0;
}


