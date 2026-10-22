/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd309400 (ELF vaddr 0xd209400)
 * Label: br::worldgen::JigsawStructureBuilder::vslot0
 * Body:  [[0d309400, 0d309431] [0d309440, 0d309526]]
 * Ghidra: wg_br__worldgen__JigsawStructureBuilder__vslot0
 */


void wg_br__worldgen__JigsawStructureBuilder__vslot0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined1 uStack_21;
  
  *param_1 = &UNK_0f460488;
  lVar2 = param_1[0x24];
  if (lVar2 != 0) {
    lVar5 = param_1[0x25];
    lVar4 = lVar2;
    if (lVar2 != lVar5) {
      do {
        plVar3 = *(long **)(lVar5 + -8);
        if (plVar3 != (long *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          lVar4 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar4 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
            FUN_0412c2d0(plVar3);
          }
        }
        lVar5 = lVar5 + -0x10;
      } while (lVar5 != lVar2);
      lVar4 = param_1[0x24];
    }
    param_1[0x25] = lVar2;
    func_0x0412a280(lVar4,param_1[0x26] - lVar4);
  }
  param_1[0x1c] = &UNK_0f45f520;
  if ((ulong)*(uint *)(param_1 + 0x22) != 0xffffffff) {
    (**(code **)(&UNK_0f45fa00 + (ulong)*(uint *)(param_1 + 0x22) * 8))(&uStack_21,param_1 + 0x1d);
  }
  *(undefined4 *)(param_1 + 0x22) = 0xffffffff;
  if ((*(byte *)(param_1 + 0x19) & 1) != 0) {
    func_0x0412a280(param_1[0x1b],param_1[0x19] & 0xfffffffffffffffe);
  }
  if ((*(byte *)(param_1 + 0x16) & 1) != 0) {
    func_0x0412a280(param_1[0x18],param_1[0x16] & 0xfffffffffffffffe);
  }
  func_0x0d31f5a0(param_1);
  return;
}


