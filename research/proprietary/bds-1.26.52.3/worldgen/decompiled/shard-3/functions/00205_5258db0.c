/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5358db0 (ELF vaddr 0x5258db0)
 * Label: SurfaceMaterialAdjustmentsBiomeComponentGlue::vslot1
 * Body:  [[05358db0, 05358df8] [05358e00, 05358e86]]
 * Ghidra: wg_SurfaceMaterialAdjustmentsBiomeComponentGlue__vslot1
 */


void wg_SurfaceMaterialAdjustmentsBiomeComponentGlue__vslot1(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 uStack_31;
  
  *param_1 = &UNK_0efa57d0;
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if (lVar1 != param_1[2]) {
      lVar2 = param_1[2] + -0x18;
      do {
        if (*(char *)(lVar2 + 0x10) == '\x01') {
          if ((ulong)*(uint *)(lVar2 + 8) != 0xffffffff) {
            (**(code **)(&UNK_0efa59c0 + (ulong)*(uint *)(lVar2 + 8) * 8))(&uStack_31,lVar2);
          }
          *(undefined4 *)(lVar2 + 8) = 0xffffffff;
        }
        if (*(char *)(lVar2 + -8) == '\x01') {
          if ((ulong)*(uint *)(lVar2 + -0x10) != 0xffffffff) {
            (**(code **)(&UNK_0efa59c0 + (ulong)*(uint *)(lVar2 + -0x10) * 8))
                      (&uStack_31,lVar2 + -0x18);
          }
          *(undefined4 *)(lVar2 + -0x10) = 0xffffffff;
        }
        lVar3 = lVar2 + -0x40;
        lVar2 = lVar2 + -0x58;
      } while (lVar3 != lVar1);
      lVar2 = param_1[1];
    }
    param_1[2] = lVar1;
    func_0x0412a280(lVar2,param_1[3] - lVar2);
  }
  func_0x0412a280(param_1,0x20);
  return;
}


