/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2ff960 (ELF vaddr 0xd1ff960)
 * Label: br::worldgen::JigsawStructure::vslot2
 * Body:  [[0d2ff960, 0d2ffb2a] [0d2ffb30, 0d2ffb4b] [0d2ffb50, 0d2ffbc7]]
 * Ghidra: wg_br__worldgen__JigsawStructure__vslot2
 */


undefined8 wg_br__worldgen__JigsawStructure__vslot2(undefined8 param_1,long param_2,long param_3)

{
  byte bVar1;
  code *pcVar2;
  undefined8 **ppuVar3;
  undefined8 **ppuVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  bool bVar9;
  undefined8 uStack_70;
  uint uStack_68;
  uint uStack_60;
  undefined2 uStack_5c;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  long lStack_48;
  undefined8 *puStack_40;
  long lStack_38;
  ulong uStack_30;
  
  lVar7 = **(long **)(param_3 + 0x50);
  uStack_5c = *(undefined2 *)(lVar7 + 0xac);
  uStack_60 = ((uint)*(ushort *)(lVar7 + 0xaa) - (uint)*(ushort *)(lVar7 + 0xa8)) * 0x10000 |
              (uint)*(ushort *)(lVar7 + 0xa8);
  uStack_70 = (long *)0x0;
  puStack_40 = &uStack_70;
  if ((ulong)*(uint *)(param_2 + 0x118) == 0xffffffff) {
    uVar6 = FUN_04931450();
    func_0x0624dc00(&ppuStack_58);
    func_0x0eee2d70(uVar6);
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return uVar6;
  }
  ppuStack_58 = &puStack_40;
  (**(code **)(&UNK_0f45ee78 + (ulong)*(uint *)(param_2 + 0x118) * 8))(&ppuStack_58,param_2 + 0xf0);
  uVar5 = (**(code **)(*uStack_70 + 0x10))(uStack_70,param_3 + 8,&uStack_60);
  uStack_68 = (uint)(*(ulong *)(param_3 + 0x48) >> 0x1c) & 0xfffffff0;
  uStack_70 = (long *)CONCAT44(uVar5,(int)*(ulong *)(param_3 + 0x48) << 4);
  func_0x0d33ec10(&ppuStack_58,param_2 + 0x98,&uStack_70,*(undefined8 *)(param_3 + 0x40));
  bVar9 = (*(byte *)(param_2 + 200) & 1) != 0;
  lVar7 = param_2 + 0xc9;
  if (bVar9) {
    lVar7 = *(long *)(param_2 + 0xd8);
  }
  uVar8 = (ulong)(*(byte *)(param_2 + 200) >> 1);
  if (bVar9) {
    uVar8 = *(ulong *)(param_2 + 0xd0);
  }
  bVar9 = (*(byte *)(param_2 + 0xb0) & 1) != 0;
  lStack_38 = param_2 + 0xb1;
  if (bVar9) {
    lStack_38 = *(long *)(param_2 + 0xc0);
  }
  uStack_30 = (ulong)(*(byte *)(param_2 + 0xb0) >> 1);
  if (bVar9) {
    uStack_30 = *(ulong *)(param_2 + 0xb8);
  }
  func_0x0d2fe510(param_1,param_3,&uStack_60,lVar7,uVar8,(int)*(char *)(param_2 + 0xe0),
                  (undefined4)lStack_38,(undefined4)uStack_30,uStack_70,uStack_68,
                  *(undefined1 *)(param_2 + 0x130),*(undefined4 *)(param_2 + 0x120),
                  *(undefined4 *)(param_2 + 0x128),&ppuStack_58,*(undefined1 *)(param_2 + 0x131),
                  *(undefined1 *)(param_2 + 0x132));
  ppuVar4 = ppuStack_58;
  ppuVar3 = ppuStack_50;
  if (ppuStack_58 != (undefined8 **)0x0) {
    for (; ppuVar4 != ppuVar3; ppuVar3 = ppuVar3 + -6) {
      if (((ulong)ppuVar3[-3] & 1) == 0) {
        bVar1 = *(byte *)(ppuVar3 + -6);
      }
      else {
        thunk_FUN_0ee326a0(ppuVar3[-1],(ulong)ppuVar3[-3] & 0xfffffffffffffffe);
        bVar1 = *(byte *)(ppuVar3 + -6);
      }
      if ((bVar1 & 1) != 0) {
        thunk_FUN_0ee326a0(ppuVar3[-4],(ulong)ppuVar3[-6] & 0xfffffffffffffffe);
      }
    }
    ppuStack_50 = ppuVar4;
    thunk_FUN_0ee326a0(ppuStack_58,lStack_48 - (long)ppuStack_58);
  }
  return param_1;
}


