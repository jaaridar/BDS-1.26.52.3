/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x533ae40 (ELF vaddr 0x523ae40)
 * Label: caller-of-seed
 * Body:  [[0533ae40, 0533afec] [0533b016, 0533b03d] [0533b048, 0533b054] [0533b0d5, 0533b40e]]
 * Ghidra: FUN_0533ae40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0533ae40(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined2 uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  int *piVar13;
  byte bStack_130;
  undefined4 uStack_12f;
  undefined4 uStack_12b;
  undefined4 uStack_127;
  undefined4 uStack_123;
  undefined4 uStack_11f;
  undefined3 uStack_11b;
  uint uStack_118;
  int iStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  uint uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  byte bStack_e0;
  undefined8 auStack_d8 [2];
  long lStack_c8;
  undefined8 uStack_c0;
  long *plStack_88;
  undefined4 uStack_78;
  uint uStack_74;
  byte bStack_70;
  undefined7 uStack_6f;
  undefined1 uStack_68;
  undefined2 uStack_67;
  undefined8 uStack_60;
  byte bStack_58;
  undefined4 uStack_57;
  undefined4 uStack_53;
  undefined4 uStack_4f;
  undefined3 uStack_4b;
  undefined1 uStack_48;
  undefined4 uStack_47;
  undefined3 uStack_43;
  
  plVar1 = (long *)*param_2;
  lVar4 = (**(code **)(*plVar1 + 0x568))(plVar1);
  lVar5 = (**(code **)(*plVar1 + 0x58))(plVar1);
  bStack_130 = 0x26;
  uStack_12f = _DAT_0142bedc;
  uStack_12b = _UNK_0142bee0;
  uStack_127 = _UNK_0142bee4;
  uStack_123 = CONCAT13(0x6f,(int3)_UNK_0142bee8);
  uStack_11f = 0x646c72;
  lVar6 = func_0x085fea60(lVar5 + 0x30,&bStack_130);
  if (lVar6 == lVar5 + 0x38) {
    uStack_118 = uStack_118 & 0xffffff00;
    bVar2 = 0;
  }
  else {
    uStack_118 = *(uint *)(lVar6 + 0x38);
    iStack_114 = *(int *)(lVar6 + 0x3c);
    uStack_110 = *(undefined4 *)(lVar6 + 0x40);
    uStack_10c = *(undefined4 *)(lVar6 + 0x44);
    uStack_108 = *(undefined4 *)(lVar6 + 0x48);
    uStack_104 = *(undefined4 *)(lVar6 + 0x4c);
    uStack_100 = *(undefined4 *)(lVar6 + 0x50);
    uStack_fc = *(undefined4 *)(lVar6 + 0x54);
    if ((*(byte *)(lVar6 + 0x58) & 1) == 0) {
      uStack_e8 = *(undefined8 *)(lVar6 + 0x68);
      uStack_f8 = *(uint *)(lVar6 + 0x58);
      uStack_f4 = *(undefined4 *)(lVar6 + 0x5c);
      uStack_f0 = *(undefined4 *)(lVar6 + 0x60);
      uStack_ec = *(undefined4 *)(lVar6 + 100);
      bVar2 = 1;
    }
    else {
      bVar2 = 1;
      func_0x0412e5e0(&uStack_f8,*(undefined8 *)(lVar6 + 0x68),*(undefined8 *)(lVar6 + 0x60));
    }
  }
  bStack_e0 = bVar2;
  if ((bStack_130 & 1) != 0) {
    FUN_0412a280(CONCAT35(uStack_11b,CONCAT41(uStack_11f,uStack_123._3_1_)),
                 CONCAT35((undefined3)uStack_12b,CONCAT41(uStack_12f,bStack_130)) &
                 0xfffffffffffffffe);
  }
  if ((bStack_e0 & 1) != 0) {
    lVar4 = (**(code **)(*plVar1 + 0x568))(plVar1);
    uVar11 = uStack_118;
    *(undefined4 *)(lVar4 + 0x558) = uStack_110;
    *(undefined1 *)(lVar4 + 0x55c) = 1;
    uVar10 = iStack_114 + uStack_118;
    if ((bStack_e0 == 1) && ((uStack_f8 & 1) != 0)) {
      FUN_0412a280(uStack_e8,CONCAT44(uStack_f4,uStack_f8) & 0xfffffffffffffffe);
    }
    uVar10 = uVar10 & 0xffff;
    uVar11 = uVar11 & 0xffff;
    goto LAB_0533b0d5;
  }
  if (*(char *)(lVar4 + 0x55c) != '\x01') {
    lVar5 = func_0x0d2279e0(lVar4 + 0x518,0xf71d720);
    if (((lVar5 != 0) || (lVar5 = func_0x0d2279e0(lVar4 + 0x4f0,0xf71d720), lVar5 != 0)) &&
       (*(int *)(lVar5 + 0x50) == 4)) {
      uVar11 = *(uint *)(lVar5 + 0x38);
      goto joined_r0x0533afdb;
    }
LAB_0533b016:
    bVar2 = (**(code **)(*plVar1 + 0xbe8))(plVar1);
    uVar10 = (bVar2 + 4) * 0x40;
    uVar11 = 0xffc0;
    if (bVar2 == 0) {
      uVar11 = 0;
    }
    goto LAB_0533b0d5;
  }
  uVar11 = *(uint *)(lVar4 + 0x558);
joined_r0x0533afdb:
  if (uVar11 < 6) {
    switch(uVar11) {
    case 0:
      uVar10 = 0x80;
      break;
    case 1:
      goto LAB_0533b016;
    default:
      lVar5 = lVar4 + 0x50;
      lVar6 = lVar5;
      if (((*(char *)(lVar4 + 0x77) == '\0') &&
          ((lVar12 = lVar4 + 0x70, *(char *)(lVar4 + 0x68) != '\0' ||
           (lVar6 = lVar12, (*(byte *)(lVar4 + 0x56) & 1) != 0)))) &&
         (cVar3 = func_0x04fa7a10(lVar12,lVar5), lVar6 = lVar5, cVar3 != '\0')) {
        lVar6 = lVar12;
      }
      lVar4 = 0xf72b850;
      if (((*(byte *)(lVar6 + 6) | *(byte *)(lVar6 + 0x18)) & 1) != 0) {
        lVar4 = lVar6;
      }
      uVar10 = 0x100;
      uVar11 = 0;
      if ((DAT_0f5a2858 == '\0') && (uVar11 = 0, *(char *)(lVar4 + 0x18) == '\0')) {
        uVar11 = 0xffc0;
        uVar10 = 0x140;
        if (((DAT_0f5a2846 & 1) != 0) && (*(char *)(lVar4 + 7) == '\0')) {
          bVar2 = func_0x04fa7a10(lVar4,0xf5a2840);
          uVar10 = (bVar2 ^ 1 | 4) << 6;
          uVar11 = 0xffc0;
          if (bVar2 != 0) {
            uVar11 = 0;
          }
        }
      }
      break;
    case 3:
    case 4:
      goto LAB_0533b048;
    }
  }
  else {
LAB_0533b048:
    uVar10 = 0x100;
    uVar11 = 0;
  }
LAB_0533b0d5:
  auStack_d8[0] = *param_2;
  lStack_c8 = 0;
  uStack_c0 = 0;
  if ((undefined8 *)param_2[2] == (undefined8 *)0x0) {
    lStack_c8 = 0;
  }
  else {
    (**(code **)param_2[2])(param_2 + 2,&lStack_c8);
    lStack_c8 = param_2[2];
  }
  uStack_74 = uVar10 << 0x10 | uVar11;
  param_2[2] = 0;
  plStack_88 = (long *)param_2[10];
  param_2[10] = 0;
  uStack_78 = 0;
  bStack_70 = 0x12;
  uStack_6f = 0x726f777265764f;
  uStack_68 = 0x6c;
  uStack_67 = 100;
  bStack_58 = 0x26;
  uStack_57 = _DAT_0142bedc;
  uStack_53 = _UNK_0142bee0;
  uStack_4f = _UNK_0142bee4;
  uStack_4b = (undefined3)_UNK_0142bee8;
  uStack_48 = 0x6f;
  uStack_47 = 0x646c72;
  func_0x0ca5c8c0(param_1,auStack_d8);
  if ((bStack_58 & 1) != 0) {
    FUN_0412a280(CONCAT35(uStack_43,CONCAT41(uStack_47,uStack_48)),
                 CONCAT35((undefined3)uStack_53,CONCAT41(uStack_57,bStack_58)) & 0xfffffffffffffffe)
    ;
  }
  plVar1 = plStack_88;
  if ((bStack_70 & 1) != 0) {
    FUN_0412a280(uStack_60,CONCAT71(uStack_6f,bStack_70) & 0xfffffffffffffffe);
    plVar1 = plStack_88;
  }
  plStack_88 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    plStack_88 = (long *)0x0;
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_c8 != 0) {
    (**(code **)(lStack_c8 + 8))(&lStack_c8);
  }
  *param_1 = &UNK_0efa3358;
  param_1[1] = &UNK_0efa34f8;
  param_1[2] = &UNK_0efa3608;
  param_1[7] = &UNK_0efa3638;
  *(undefined1 *)(param_1 + 0x1c) = 1;
  *(undefined1 *)((long)param_1 + 0x11c) = 0xf;
  lVar4 = (**(code **)(*(long *)param_1[0x14] + 0x568))();
  if (*(char *)(lVar4 + 0x55c) == '\x01') {
    piVar13 = (int *)(lVar4 + 0x558);
LAB_0533b2f1:
    uVar9 = 0x3f;
    if (*piVar13 == 2) {
      uVar9 = 5;
    }
  }
  else {
    lVar5 = func_0x0d2279e0(lVar4 + 0x518,0xf71d720);
    if ((lVar5 == 0) && (lVar5 = func_0x0d2279e0(lVar4 + 0x4f0,0xf71d720), lVar5 == 0)) {
      uVar9 = 0x3f;
    }
    else {
      uVar9 = 0x3f;
      if (*(int *)(lVar5 + 0x50) == 4) {
        piVar13 = (int *)(lVar5 + 0x38);
        goto LAB_0533b2f1;
      }
    }
  }
  *(undefined2 *)((long)param_1 + 0xac) = uVar9;
  *(undefined1 *)((long)param_1 + 0xae) = 0;
  uVar11 = *(uint *)(param_1 + 0x19);
  if ((ulong)uVar11 != 0xffffffff) {
    if (uVar11 == 1) {
      param_1[0x18] = 0x700000000;
      goto LAB_0533b377;
    }
    (**(code **)(&UNK_0efa39e0 + (ulong)uVar11 * 8))(auStack_d8,param_1 + 0x17);
  }
  param_1[0x17] = &UNK_0f45e6c8;
  param_1[0x18] = 0x700000000;
  *(undefined4 *)(param_1 + 0x19) = 1;
LAB_0533b377:
  puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
  if (puVar7 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x48,0);
  }
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  puVar7[4] = 0;
  puVar7[5] = 0;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[8] = 0;
  puVar8 = &UNK_0efa50b0;
  *puVar7 = &UNK_0efa50b0;
  plVar1 = (long *)param_1[0x24];
  param_1[0x24] = puVar7;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
    puVar7 = (undefined8 *)param_1[0x24];
    puVar8 = (undefined *)*puVar7;
  }
  (**(code **)(puVar8 + 0x10))(puVar7);
  return;
}



/* ---- referenced strings ----
 * 0x142bedc  minecraft:overworld
 */
