/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6240b00 (ELF vaddr 0x6140b00)
 * Label: Editor::Services::EditorJigsawService::vslot2
 * Body:  [[06240b00, 06240cce]]
 * Ghidra: wg_Editor__Services__EditorJigsawService__vslot2
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * wg_Editor__Services__EditorJigsawService__vslot2(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  char cVar2;
  long lVar3;
  uint *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  bool bVar7;
  undefined4 uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  long lStack_78;
  uint uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  long lStack_50;
  ulong uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  lVar3 = func_0x06338020(*(undefined8 *)(param_2 + 0x18));
  if (lVar3 != 0) {
    if (*(long **)(lVar3 + 0xd0) != (long *)0x0) {
      puVar4 = (uint *)(**(code **)(**(long **)(lVar3 + 0xd0) + 0x50))();
      if ((*puVar4 & 1) == 0) {
        lStack_78 = *(long *)(puVar4 + 4);
        uStack_88 = *puVar4;
        uStack_84 = puVar4[1];
        uStack_80 = puVar4[2];
        uStack_7c = puVar4[3];
      }
      else {
        func_0x0412e5e0(&uStack_88,*(undefined8 *)(puVar4 + 4),*(undefined8 *)(puVar4 + 2));
      }
      bVar7 = (uStack_88 & 1) != 0;
      lStack_50 = (long)&uStack_88 + 1;
      if (bVar7) {
        lStack_50 = lStack_78;
      }
      uStack_48 = (ulong)((byte)uStack_88 >> 1);
      if (bVar7) {
        uStack_48 = CONCAT44(uStack_7c,uStack_80);
      }
      puStack_40 = &UNK_0139155b;
      uStack_38 = 6;
      puStack_30 = &UNK_013e0c25;
      uStack_28 = 7;
      func_0x048ad670(&uStack_68,&lStack_50,3,0x2f);
      puVar4 = (uint *)(param_2 + 0x260);
      if (puVar4 == &uStack_68) {
        if ((uStack_68 & 1) != 0) {
          thunk_FUN_0ee326a0(uStack_58,CONCAT44(uStack_64,uStack_68) & 0xfffffffffffffffe);
        }
      }
      else {
        if ((*(byte *)puVar4 & 1) != 0) {
          thunk_FUN_0ee326a0(*(undefined8 *)(param_2 + 0x270),
                             *(ulong *)(param_2 + 0x260) & 0xfffffffffffffffe);
        }
        *(undefined8 *)(param_2 + 0x270) = uStack_58;
        *puVar4 = uStack_68;
        *(undefined4 *)(param_2 + 0x264) = uStack_64;
        *(undefined4 *)(param_2 + 0x268) = uStack_60;
        *(undefined4 *)(param_2 + 0x26c) = uStack_5c;
      }
      if ((uStack_88 & 1) != 0) {
        thunk_FUN_0ee326a0(lStack_78,CONCAT44(uStack_84,uStack_88) & 0xfffffffffffffffe);
      }
    }
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[8] = 0;
    func_0x05d84ba0(param_1 + 1);
    return param_1;
  }
  cVar2 = func_0x0eeddcf0(&UNK_01259441,&UNK_01198d5e,0x15c,&UNK_0119dfc2,&UNK_013fb3dd);
  if (cVar2 != '\0') {
    _DAT_00000000 = 0xdeadc0de;
  }
  uVar5 = func_0x04109e60();
  if ((uStack_88 & 1) != 0) {
    thunk_FUN_0ee326a0(lStack_78,CONCAT44(uStack_84,uStack_88) & 0xfffffffffffffffe);
  }
  func_0x0eee2d70(uVar5);
  pcVar1 = (code *)swi(3);
  puVar6 = (undefined8 *)(*pcVar1)();
  return puVar6;
}


