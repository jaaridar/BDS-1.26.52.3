/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x535e270 (ELF vaddr 0x525e270)
 * Label: SurfaceMaterialAdjustmentAttributes::vslot0
 * Body:  [[0535e270, 0535e2c8] [0535e2d0, 0535e33e]]
 * Ghidra: wg_SurfaceMaterialAdjustmentAttributes__vslot0
 */


void wg_SurfaceMaterialAdjustmentAttributes__vslot0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 uStack_3a;
  undefined1 uStack_39;
  undefined8 *puStack_38;
  
  *param_1 = &UNK_0efa5b88;
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if (lVar1 != param_1[2]) {
      lVar2 = param_1[2] + -0x58;
      puStack_38 = param_1;
      do {
        if ((ulong)*(uint *)(lVar2 + 0x18) != 0xffffffff) {
          (**(code **)(&UNK_0efa59c0 + (ulong)*(uint *)(lVar2 + 0x18) * 8))(&uStack_3a,lVar2 + 0x10)
          ;
        }
        *(undefined4 *)(lVar2 + 0x18) = 0xffffffff;
        if ((ulong)*(uint *)(lVar2 + 8) != 0xffffffff) {
          (**(code **)(&UNK_0efa59c0 + (ulong)*(uint *)(lVar2 + 8) * 8))(&uStack_39,lVar2);
        }
        *(undefined4 *)(lVar2 + 8) = 0xffffffff;
        lVar3 = lVar2 + -0x10;
        lVar2 = lVar2 + -0x68;
      } while (lVar3 != lVar1);
      lVar2 = puStack_38[1];
      param_1 = puStack_38;
    }
    param_1[2] = lVar1;
    func_0x0412a280(lVar2,param_1[3] - lVar2);
  }
  return;
}


