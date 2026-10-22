/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd4064e0 (ELF vaddr 0xd3064e0)
 * Label: string:minecraft:search_feature
 * Body:  [[0d4064e0, 0d406822] [0d406830, 0d40699a]]
 * Ghidra: FUN_0d4064e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_0d4064e0(long param_1,undefined8 *param_2,ulong param_3,ulong param_4,ulong param_5)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  int iVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined *puStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long lStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  long lStack_70;
  long lStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  int iStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  plStack_b0 = (long *)*param_2;
  puStack_b8 = &UNK_0f3e3be8;
  lStack_a0 = param_1;
  plStack_a8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (plStack_a8 == (long *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  plStack_a8[2] = 0;
  plStack_a8[3] = 0;
  *plStack_a8 = 0;
  plStack_a8[1] = 0;
  plStack_a8[4] = 0;
  *(undefined4 *)(plStack_a8 + 4) = 0x3f800000;
  func_0x0b5d5fa0(plStack_a8,0x40);
  if (*(char *)(lStack_a0 + 0x18) == '\x01') {
    lStack_68 = *(long *)(lStack_a0 + 0x10);
    lStack_70 = *(long *)(lStack_a0 + 0x20);
    lVar2 = *(long *)(*(long *)(lStack_68 + 0x18) + lStack_70 * 8);
    if (lVar2 == 0) goto LAB_0d4066a7;
    if ((*(char *)(lStack_a0 + 9) == '\0') && (*(char *)(lVar2 + 8) == '\x01')) {
      uStack_c0 = 0x1800000134029e;
      uStack_c8 = 0x1d000001219d14;
      func_0x0d3dfbc0(param_2 + 5,&uStack_c0,&uStack_c8);
      if ((uStack_c8 >> 0x37 & 1) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_c8 & 0xff00ffffffffffff) - 8);
      }
      if ((uStack_c0 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_c0 & 0xff00ffffffffffff) - 8);
      }
      uVar13 = 0;
      uVar10 = 0;
      auVar16 = ZEXT816(0);
      goto LAB_0d406763;
    }
    if ((int)param_3 == (int)(param_3 >> 0x20)) goto LAB_0d4066a7;
    uStack_78 = param_4 >> 0x20;
    uStack_80 = param_5 >> 0x20;
    iVar14 = 0;
    uStack_e0 = param_3;
    uVar10 = param_3 >> 0x20;
    uVar13 = param_5;
    uVar6 = param_4;
    if ((int)param_4 == (int)(param_4 >> 0x20) || (int)param_5 == (int)(param_5 >> 0x20))
    goto LAB_0d4066a7;
    do {
      uStack_88 = uVar6;
      uStack_90 = uVar13;
      uStack_98 = uVar10;
      uVar10 = uStack_90 & 0xffffffff;
      do {
        uVar13 = uStack_88 & 0xffffffff;
        do {
          uVar1 = *(uint *)(lStack_a0 + 0x40);
          iVar11 = (int)uVar10;
          iVar12 = (int)uVar13;
          iVar8 = (int)uStack_e0;
          if (uVar1 < 6) {
            iVar9 = iVar8;
            iVar7 = iVar11;
            iStack_50 = iVar12;
            if (((3U >> (uVar1 & 0x1f) & 1) == 0) &&
               (iVar9 = iVar12, iVar7 = iVar8, iStack_50 = iVar11, (0xcU >> (uVar1 & 0x1f) & 1) == 0
               )) {
              iVar7 = iVar11;
              iStack_50 = iVar8;
            }
          }
          else {
            iVar7 = 0;
            iVar9 = 0;
            iStack_50 = 0;
          }
          plVar4 = *(long **)(*(long *)(lStack_68 + 0x18) + lStack_70 * 8);
          ppuStack_60 = &puStack_b8;
          iStack_50 = iStack_50 + *(int *)(param_2 + 2);
          uStack_58 = CONCAT44(iVar7 + *(int *)((long)param_2 + 0xc),iVar9 + *(int *)(param_2 + 1));
          uStack_48 = *(undefined4 *)(param_2 + 3);
          uStack_44 = *(undefined4 *)((long)param_2 + 0x1c);
          uStack_40 = *(undefined4 *)(param_2 + 4);
          uStack_3c = *(undefined4 *)((long)param_2 + 0x24);
          uStack_38 = param_2[5];
          auVar16 = (**(code **)(*plVar4 + 0x10))(plVar4,&ppuStack_60);
          if (((auVar16._8_8_ >> 0x20 & 1) != 0) &&
             (iVar14 = iVar14 + 1, iVar14 == *(int *)(lStack_a0 + 0x44))) {
            for (puVar5 = (undefined8 *)plStack_a8[2]; puVar5 != (undefined8 *)0x0;
                puVar5 = (undefined8 *)*puVar5) {
              (**(code **)(*plStack_b0 + 0x60))
                        (plStack_b0,puVar5 + 2,puVar5[6],*(undefined4 *)(puVar5 + 4));
            }
            uVar13 = auVar16._0_8_ & 0xff;
            uVar10 = auVar16._8_8_ & 0xff00000000;
            goto LAB_0d406763;
          }
          uVar13 = (ulong)(iVar12 - 1U);
        } while ((uint)uStack_78 != iVar12 - 1U);
        uVar10 = (ulong)(iVar11 + 1U);
      } while (iVar11 + 1U != (uint)uStack_80);
      uStack_e0 = (ulong)(iVar8 - 1U);
      uVar10 = uStack_98;
      uVar13 = uStack_90;
      uVar6 = uStack_88;
    } while (iVar8 - 1U != (uint)uStack_98);
  }
  else {
LAB_0d4066a7:
    auVar16 = ZEXT816(0);
  }
  uStack_d0 = 0x1800000134029e;
  uStack_d8 = 0x2f0000013d7e8d;
  func_0x0d3dfbc0(param_2 + 5,&uStack_d0,&uStack_d8);
  if ((uStack_d8 >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_d8 & 0xff00ffffffffffff) - 8);
  }
  uStack_d8 = 0;
  if ((uStack_d0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_d0 & 0xff00ffffffffffff) - 8);
  }
  uVar13 = 0;
  uVar10 = 0;
LAB_0d406763:
  plVar4 = plStack_a8;
  puStack_b8 = &UNK_0f3e3be8;
  plStack_a8 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    puVar5 = (undefined8 *)plVar4[2];
    while (puVar5 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)*puVar5;
      func_0x0412a280(puVar5,0x38);
      puVar5 = puVar3;
    }
    lVar2 = *plVar4;
    *plVar4 = 0;
    if (lVar2 != 0) {
      func_0x0412a280(lVar2,plVar4[1] << 3);
    }
    func_0x0412a280(plVar4,0x28);
  }
  auVar15._8_8_ = uVar10 | auVar16._8_8_ & 0xffffffff;
  auVar15._0_8_ = auVar16._0_8_ & 0xffffffffffffff00 | uVar13;
  return auVar15;
}


