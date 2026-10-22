/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2e8ac0
 * Label: NoSurfaceOreFeature::vslot3
 * Body:  [[0d2e8ac0, 0d2e8b37] [0d2e8b40, 0d2e8bb1]]
 * Ghidra: wg_NoSurfaceOreFeature__vslot3
 */


undefined8
wg_NoSurfaceOreFeature__vslot3
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int *piVar1;
  byte *pbVar2;
  long lVar3;
  long *plVar4;
  long unaff_RBX;
  byte *pbVar5;
  long unaff_R14;
  byte *pbVar6;
  
  piVar1 = (int *)(param_4 * 5 + -10);
  *piVar1 = *piVar1 + -1;
  (**(code **)(unaff_R14 + 0x38))(param_1,param_2,0);
  plVar4 = (long *)func_0x0488e200();
  func_0x0d2e2b20(&stack0x00000000,*plVar4,plVar4[1],
                  (plVar4[1] - *plVar4 >> 5) * -0x5555555555555555);
  pbVar2 = *(byte **)(unaff_RBX + 0x40);
  if (pbVar2 != (byte *)0x0) {
    pbVar5 = pbVar2;
    pbVar6 = *(byte **)(unaff_RBX + 0x48);
    if (pbVar2 != *(byte **)(unaff_RBX + 0x48)) {
      do {
        lVar3 = *(long *)(pbVar6 + -0x18);
        if (lVar3 != 0) {
          *(long *)(pbVar6 + -0x10) = lVar3;
          func_0x0412a280(lVar3,*(long *)(pbVar6 + -8) - lVar3);
        }
        pbVar5 = pbVar6 + -0x60;
        if ((*pbVar5 & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(pbVar6 + -0x50),
                          *(ulong *)(pbVar6 + -0x60) & 0xfffffffffffffffe);
        }
        pbVar6 = pbVar5;
      } while (pbVar5 != pbVar2);
      pbVar5 = *(byte **)(unaff_RBX + 0x40);
    }
    *(byte **)(unaff_RBX + 0x48) = pbVar2;
    func_0x0412a280(pbVar5,*(long *)(unaff_RBX + 0x50) - (long)pbVar5);
  }
  *(undefined8 *)(unaff_RBX + 0x40) = 0;
  *(undefined8 *)(unaff_RBX + 0x48) = 0;
  *(undefined8 *)(unaff_RBX + 0x50) = 0;
  return 1;
}


