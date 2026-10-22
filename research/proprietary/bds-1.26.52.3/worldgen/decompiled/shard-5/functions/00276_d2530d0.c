/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd3530d0 (ELF vaddr 0xd2530d0)
 * Label: callee-of:0xc970bf0
 * Body:  [[0d3530d0, 0d35333b] [0d353340, 0d353398] [0d3533a0, 0d35350c]]
 * Ghidra: FUN_0d3530d0
 */


ulong FUN_0d3530d0(long param_1,undefined8 *param_2,long *param_3)

{
  long *plVar1;
  bool bVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong unaff_RBP;
  long *plVar9;
  long lStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  long lStack_90;
  long *plStack_88;
  long lStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  long lStack_60;
  undefined1 *puStack_58;
  undefined8 *puStack_48;
  long lStack_40;
  long *plStack_38;
  
  puStack_48 = param_2;
  func_0x0d2d2fd0(&lStack_40,param_1 + 0x48,*param_2,*(undefined4 *)(param_2 + 1));
  if (lStack_40 == 0) goto joined_r0x0d353155;
  lVar8 = *(long *)(lStack_40 + 0x30);
  uStack_98 = 0;
  lStack_90 = 0;
  lStack_a8 = 0;
  uStack_a0 = 0;
  plStack_88 = (long *)0x0;
  if (&lStack_a8 != (long *)(lVar8 + 0x70)) {
    if ((*(byte *)(lVar8 + 0x78) & 1) == 0) {
      lStack_90 = *(long *)(lVar8 + 0x88);
      uStack_a0 = *(ulong *)(lVar8 + 0x78);
      uStack_98 = *(ulong *)(lVar8 + 0x80);
    }
    else {
      func_0x04885070(&uStack_a0,*(undefined8 *)(lVar8 + 0x88),*(undefined8 *)(lVar8 + 0x80));
    }
  }
  uVar3 = uStack_a0;
  lStack_a8 = *(long *)(lVar8 + 0x70);
  if (lStack_a8 == *param_3) {
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
    if ((plStack_88 != param_3) || ((long *)param_3[4] != &lStack_a8)) {
      if ((uStack_a0 & 1) == 0) {
        uVar7 = uStack_a0 >> 1 & 0x7f;
        uVar6 = (ulong)*(byte *)(param_3 + 1);
        if ((*(byte *)(param_3 + 1) & 1) == 0) goto LAB_0d3531d5;
LAB_0d3531ee:
        if (uVar7 != param_3[2]) goto LAB_0d353222;
      }
      else {
        uVar6 = (ulong)*(byte *)(param_3 + 1);
        uVar7 = uStack_98;
        if ((*(byte *)(param_3 + 1) & 1) != 0) goto LAB_0d3531ee;
LAB_0d3531d5:
        if (uVar7 != uVar6 >> 1) goto LAB_0d353222;
      }
      if ((uStack_a0 & 1) == 0) {
        lVar8 = (long)&uStack_a0 + 1;
        if ((uVar6 & 1) == 0) goto LAB_0d353211;
LAB_0d3534e4:
        iVar4 = func_0x0eee3000(lVar8,param_3[3]);
      }
      else {
        lVar8 = lStack_90;
        if ((uVar6 & 1) != 0) goto LAB_0d3534e4;
LAB_0d353211:
        iVar4 = func_0x0eee3000(lVar8,(long)param_3 + 9);
      }
      if (iVar4 != 0) goto LAB_0d353222;
      param_3[4] = (long)&lStack_a8;
      plStack_88 = param_3;
    }
  }
  else {
LAB_0d353222:
    plStack_88 = (long *)0x0;
    unaff_RBP = 0;
  }
  if ((uVar3 & 1) != 0) {
    FUN_0412a280(lStack_90,uStack_a0 & 0xfffffffffffffffe);
  }
joined_r0x0d353155:
  if (plStack_38 != (long *)0x0) {
    LOCK();
    plVar9 = plStack_38 + 1;
    lVar8 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      FUN_0412c2d0(plStack_38);
    }
  }
  if (lStack_40 == 0) {
    uStack_68 = 0;
    lStack_60 = 0;
    lStack_78 = 0;
    uStack_70 = 0;
    puStack_58 = (undefined1 *)0x0;
    if (&lStack_78 != param_3) {
      if ((param_3[1] & 1U) == 0) {
        lStack_60 = param_3[3];
        uStack_70 = param_3[1];
        uStack_68 = param_3[2];
      }
      else {
        func_0x04885070(&uStack_70,param_3[3],param_3[2]);
      }
    }
    lStack_78 = *param_3;
    plVar9 = *(long **)(param_1 + 0x30);
    plVar1 = *(long **)(param_1 + 0x38);
    if (plVar9 != plVar1) {
      do {
        lVar8 = *plVar9;
        uStack_98 = 0;
        lStack_90 = 0;
        lStack_a8 = 0;
        uStack_a0 = 0;
        plStack_88 = (long *)0x0;
        if (&lStack_a8 != (long *)(lVar8 + 8)) {
          if ((*(byte *)(lVar8 + 0x10) & 1) == 0) {
            lStack_90 = *(long *)(lVar8 + 0x20);
            uStack_a0 = *(ulong *)(lVar8 + 0x10);
            uStack_98 = *(ulong *)(lVar8 + 0x18);
          }
          else {
            func_0x04885070(&uStack_a0,*(undefined8 *)(lVar8 + 0x20),*(undefined8 *)(lVar8 + 0x18));
          }
        }
        uVar3 = uStack_a0;
        lStack_a8 = *(long *)(lVar8 + 8);
        if (lStack_a8 == lStack_78) {
          bVar2 = true;
          if ((plStack_88 != &lStack_78) || ((long *)puStack_58 != &lStack_a8)) {
            if ((uStack_a0 & 1) == 0) {
              uVar7 = uStack_a0 >> 1 & 0x7f;
              if ((uStack_70 & 1) == 0) goto LAB_0d3533b3;
LAB_0d3533cb:
              if (uVar7 != uStack_68) goto LAB_0d353400;
            }
            else {
              uVar7 = uStack_98;
              if ((uStack_70 & 1) != 0) goto LAB_0d3533cb;
LAB_0d3533b3:
              if (uVar7 != (uStack_70 & 0xff) >> 1) goto LAB_0d353400;
            }
            if ((uStack_a0 & 1) == 0) {
              lVar8 = (long)&uStack_a0 + 1;
              if ((uStack_70 & 1) != 0) goto LAB_0d35344e;
LAB_0d3533e8:
              iVar4 = func_0x0eee3000(lVar8,(long)&uStack_70 + 1);
            }
            else {
              lVar8 = lStack_90;
              if ((uStack_70 & 1) == 0) goto LAB_0d3533e8;
LAB_0d35344e:
              iVar4 = func_0x0eee3000(lVar8,lStack_60);
            }
            if (iVar4 != 0) goto LAB_0d353400;
            plStack_88 = &lStack_78;
            puStack_58 = (undefined1 *)&lStack_a8;
            goto joined_r0x0d35346e;
          }
          if ((uStack_a0 & 1) != 0) goto LAB_0d353415;
LAB_0d35338b:
          if (bVar2) {
LAB_0d3534c7:
            lVar8 = *plVar9;
            goto joined_r0x0d3534d0;
          }
        }
        else {
LAB_0d353400:
          plStack_88 = (long *)0x0;
          bVar2 = false;
joined_r0x0d35346e:
          if ((uVar3 & 1) == 0) goto LAB_0d35338b;
LAB_0d353415:
          FUN_0412a280(lStack_90,uStack_a0 & 0xfffffffffffffffe);
          if (bVar2) goto LAB_0d3534c7;
        }
        plVar9 = plVar9 + 1;
      } while (plVar9 != plVar1);
    }
    lVar8 = 0;
joined_r0x0d3534d0:
    if ((uStack_70 & 1) != 0) {
      FUN_0412a280(lStack_60,uStack_70 & 0xfffffffffffffffe);
    }
    if (lVar8 == 0) {
      unaff_RBP = 0;
    }
    else {
      uVar5 = func_0x0d3516c0(lVar8,*(undefined4 *)puStack_48,*(undefined4 *)((long)puStack_48 + 4),
                              *(undefined4 *)(puStack_48 + 1));
      unaff_RBP = (ulong)uVar5;
    }
  }
  return unaff_RBP & 0xffffff01;
}


