/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2cedd0 (ELF vaddr 0xd1cedd0)
 * Label: JigsawStructurePostprocessAction::vslot2
 * Body:  [[0d2cedd0, 0d2cefb0]]
 * Ghidra: wg_JigsawStructurePostprocessAction__vslot2
 */


void wg_JigsawStructurePostprocessAction__vslot2(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  undefined4 uStack_64;
  undefined *puStack_60;
  undefined *puStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  uint uStack_30;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar2 = (**(code **)(*param_2 + 0x440))(param_2);
    uVar4 = *(ulong *)(param_1 + 0x18);
    uVar5 = (ulong)*(int *)(param_1 + 0x20);
    puStack_60 = &UNK_0f45e800;
    puStack_58 = &UNK_0f2bdd80;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_30 = 0;
    lVar3 = (uVar2 & 0xffffffffffff ^ 0x5deece66d) * 0x5deece66d + 0xb;
    uVar2 = (long)(uVar4 * 0x2fc20f00000000 ^ uVar4) >> 0x20 ^ uVar5 * 0x6ebfff5;
    uStack_50 = (uVar2 * 0x285b825 + 0xb) * uVar2 >> 0x10 ^ 0x5deece66d ^
                (lVar3 * 0x5deece66d0000 + 0xb0000 >> 0x20) +
                (ulong)((uint)lVar3 & 0xffff0000) * 0x10000 & 0xffffffffffff;
    lVar3 = *(long *)(param_1 + 0x40);
    if (lVar3 == 0) {
      lVar3 = (**(code **)(*param_3 + 0x68))(param_3);
      uVar4 = *(ulong *)(param_1 + 0x18);
      uVar5 = (ulong)*(uint *)(param_1 + 0x20);
    }
    lVar1 = *(long *)(param_1 + 0x10);
    uStack_70 = *(undefined4 *)(param_1 + 0x2c);
    uStack_78 = *(undefined8 *)(param_1 + 0x24);
    uStack_6c = *(undefined8 *)(param_1 + 0x30);
    uStack_64 = *(undefined4 *)(param_1 + 0x38);
    (**(code **)(**(long **)(lVar1 + 0x18) + 0x40))
              (*(long **)(lVar1 + 0x18),lVar3,*(undefined8 *)(lVar1 + 0x28),
               *(undefined4 *)(lVar1 + 0x30),uVar4,uVar5,&uStack_78,*(undefined1 *)(lVar1 + 0x24),
               &puStack_60,*(undefined1 *)(param_1 + 0x48),*(undefined1 *)(lVar1 + 0x50));
    if (*(char *)(param_1 + 0x49) == '\x01') {
      lVar1 = *(long *)(param_1 + 0x10);
      uStack_70 = *(undefined4 *)(param_1 + 0x2c);
      uStack_78 = *(undefined8 *)(param_1 + 0x24);
      uStack_6c = *(undefined8 *)(param_1 + 0x30);
      uStack_64 = *(undefined4 *)(param_1 + 0x38);
      (**(code **)(**(long **)(lVar1 + 0x18) + 0x50))
                (*(long **)(lVar1 + 0x18),lVar3,*(undefined8 *)(lVar1 + 0x28),
                 *(undefined4 *)(lVar1 + 0x30),*(undefined1 *)(lVar1 + 0x24),&uStack_78);
    }
    if ((ulong)uStack_30 != 0xffffffff) {
      (**(code **)(&UNK_0f45ee28 + (ulong)uStack_30 * 8))(&uStack_78,&puStack_58);
    }
  }
  return;
}


