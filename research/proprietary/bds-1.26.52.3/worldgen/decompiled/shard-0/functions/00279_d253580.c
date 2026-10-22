/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd353580 (ELF vaddr 0xd253580)
 * Label: callee-of:0xc970cc0
 * Body:  [[0d353580, 0d35373b] [0d353740, 0d353797] [0d3537a0, 0d353973]]
 * Ghidra: FUN_0d353580
 */


byte FUN_0d353580(long param_1,undefined8 param_2,undefined8 param_3,ulong *param_4,
                 undefined8 param_5,undefined8 *param_6,long *param_7,byte param_8,
                 undefined8 param_9)

{
  ulong *puVar1;
  long *plVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  char cVar6;
  int iVar7;
  byte bVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined1 auVar12 [16];
  ulong uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong *puStack_c8;
  ulong uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  undefined1 *puStack_98;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = param_4 + 1;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_40 = param_3;
  if (&uStack_88 != param_4) {
    if ((*puVar1 & 1) == 0) {
      uStack_70 = param_4[3];
      uStack_80 = *puVar1;
      uStack_78 = param_4[2];
    }
    else {
      func_0x04885070(&uStack_80,param_4[3],param_4[2]);
    }
  }
  uStack_88 = *param_4;
  uStack_50 = (ulong)param_8;
  puStack_58 = param_6;
  uStack_48 = param_2;
  uStack_38 = param_5;
  auVar12 = FUN_0d2f20d0(param_1,param_2,&uStack_88,param_5,param_7);
  if ((uStack_80 & 1) != 0) {
    func_0x0412a280(uStack_70,uStack_80 & 0xfffffffffffffffe);
  }
  if ((auVar12._8_8_ >> 0x20 & 1) == 0) {
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    puStack_c8 = (ulong *)0x0;
    if (&uStack_e8 != param_4) {
      if ((*puVar1 & 1) == 0) {
        uStack_d0 = param_4[3];
        uStack_e0 = *puVar1;
        uStack_d8 = param_4[2];
      }
      else {
        func_0x04885070(&uStack_e0,param_4[3],param_4[2]);
      }
    }
    uStack_e8 = *param_4;
    plVar10 = *(long **)(param_1 + 0x30);
    plVar2 = *(long **)(param_1 + 0x38);
    if (plVar10 != plVar2) {
      do {
        lVar11 = *plVar10;
        uStack_a8 = 0;
        lStack_a0 = 0;
        uStack_b8 = 0;
        uStack_b0 = 0;
        puStack_98 = (undefined1 *)0x0;
        if (&uStack_b8 != (ulong *)(lVar11 + 8)) {
          if ((*(byte *)(lVar11 + 0x10) & 1) == 0) {
            lStack_a0 = *(long *)(lVar11 + 0x20);
            uStack_b0 = *(ulong *)(lVar11 + 0x10);
            uStack_a8 = *(ulong *)(lVar11 + 0x18);
          }
          else {
            func_0x04885070(&uStack_b0,*(undefined8 *)(lVar11 + 0x20),*(undefined8 *)(lVar11 + 0x18)
                           );
          }
        }
        uVar5 = uStack_b0;
        uStack_b8 = *(ulong *)(lVar11 + 8);
        if (uStack_b8 == uStack_e8) {
          bVar3 = true;
          if (((ulong *)puStack_98 != &uStack_e8) || (puStack_c8 != &uStack_b8)) {
            if ((uStack_b0 & 1) == 0) {
              uVar9 = uStack_b0 >> 1 & 0x7f;
              if ((uStack_e0 & 1) != 0) goto LAB_0d3537cc;
LAB_0d3537b4:
              if (uVar9 != (uStack_e0 & 0xff) >> 1) goto LAB_0d353800;
            }
            else {
              uVar9 = uStack_a8;
              if ((uStack_e0 & 1) == 0) goto LAB_0d3537b4;
LAB_0d3537cc:
              if (uVar9 != uStack_d8) goto LAB_0d353800;
            }
            if ((uStack_b0 & 1) == 0) {
              lVar11 = (long)&uStack_b0 + 1;
              if ((uStack_e0 & 1) == 0) goto LAB_0d3537ea;
LAB_0d35384f:
              iVar7 = func_0x0eee3000(lVar11,uStack_d0);
            }
            else {
              lVar11 = lStack_a0;
              if ((uStack_e0 & 1) != 0) goto LAB_0d35384f;
LAB_0d3537ea:
              iVar7 = func_0x0eee3000(lVar11,(long)&uStack_e0 + 1);
            }
            puVar1 = &uStack_b8;
            puStack_98 = (undefined1 *)&uStack_e8;
            if (iVar7 != 0) goto LAB_0d353800;
            goto joined_r0x0d35386e;
          }
          if ((uStack_b0 & 1) != 0) goto LAB_0d353816;
LAB_0d35378a:
          if (bVar3) {
LAB_0d353950:
            plVar10 = (long *)*plVar10;
            uVar4 = uStack_38;
            goto joined_r0x0d353969;
          }
        }
        else {
LAB_0d353800:
          puStack_98 = (undefined1 *)0x0;
          bVar3 = false;
          puVar1 = puStack_c8;
joined_r0x0d35386e:
          puStack_c8 = puVar1;
          if ((uVar5 & 1) == 0) goto LAB_0d35378a;
LAB_0d353816:
          func_0x0412a280(lStack_a0,uStack_b0 & 0xfffffffffffffffe);
          if (bVar3) goto LAB_0d353950;
        }
        plVar10 = plVar10 + 1;
      } while (plVar10 != plVar2);
    }
    plVar10 = (long *)0x0;
    uVar4 = uStack_38;
joined_r0x0d353969:
    uStack_38 = uVar4;
    if ((uStack_e0 & 1) != 0) {
      func_0x0412a280(uStack_d0,uStack_e0 & 0xfffffffffffffffe);
    }
    if (plVar10 == (long *)0x0) {
      bVar8 = 1;
    }
    else {
      auVar12 = (**(code **)(*plVar10 + 0x20))(plVar10);
      if (auVar12._0_8_ == 0) {
LAB_0d3538f3:
        bVar8 = (**(code **)(*plVar10 + 0x28))
                          (plVar10,uStack_48,param_7,uVar4,puStack_58,uStack_40,uStack_50,param_9);
      }
      else {
        lVar11 = 0;
        do {
          cVar6 = (**(code **)(*param_7 + 0x40))(param_7,*(undefined2 *)(auVar12._8_8_ + lVar11));
          if (cVar6 != '\0') goto LAB_0d3538f3;
          lVar11 = lVar11 + 2;
        } while (auVar12._0_8_ * 2 != lVar11);
        bVar8 = 0;
      }
    }
    bVar8 = plVar10 != (long *)0x0 & bVar8;
  }
  else {
    *puStack_58 = auVar12._0_8_;
    *(int *)(puStack_58 + 1) = auVar12._8_4_;
    bVar8 = 1;
  }
  return bVar8;
}


