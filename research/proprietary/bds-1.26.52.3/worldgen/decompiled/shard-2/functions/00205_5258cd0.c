/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5358cd0 (ELF vaddr 0x5258cd0)
 * Label: SurfaceMaterialAdjustmentsBiomeComponentGlue::vslot0
 * Body:  [[05358cd0, 05358d18] [05358d20, 05358d99]]
 * Ghidra: wg_SurfaceMaterialAdjustmentsBiomeComponentGlue__vslot0
 */


void wg_SurfaceMaterialAdjustmentsBiomeComponentGlue__vslot0(undefined8 *param_1)

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
    thunk_FUN_0ee326a0(lVar2,param_1[3] - lVar2);
  }
  return;
}


