/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x535e350 (ELF vaddr 0x525e350)
 * Label: SurfaceMaterialAdjustmentAttributes::vslot1
 * Body:  [[0535e350, 0535e397] [0535e3a0, 0535e41a]]
 * Ghidra: wg_SurfaceMaterialAdjustmentAttributes__vslot1
 */


void wg_SurfaceMaterialAdjustmentAttributes__vslot1(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  *param_1 = &UNK_0efa5b88;
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if (lVar1 != param_1[2]) {
      lVar2 = param_1[2] + -0x58;
      do {
        if ((ulong)*(uint *)(lVar2 + 0x18) != 0xffffffff) {
          (**(code **)(&UNK_0efa59c0 + (ulong)*(uint *)(lVar2 + 0x18) * 8))(&uStack_32,lVar2 + 0x10)
          ;
        }
        *(undefined4 *)(lVar2 + 0x18) = 0xffffffff;
        if ((ulong)*(uint *)(lVar2 + 8) != 0xffffffff) {
          (**(code **)(&UNK_0efa59c0 + (ulong)*(uint *)(lVar2 + 8) * 8))(&uStack_31,lVar2);
        }
        *(undefined4 *)(lVar2 + 8) = 0xffffffff;
        lVar3 = lVar2 + -0x10;
        lVar2 = lVar2 + -0x68;
      } while (lVar3 != lVar1);
      lVar2 = param_1[1];
    }
    param_1[2] = lVar1;
    func_0x0412a280(lVar2,param_1[3] - lVar2);
  }
  func_0x0412a280(param_1,0x20);
  return;
}


