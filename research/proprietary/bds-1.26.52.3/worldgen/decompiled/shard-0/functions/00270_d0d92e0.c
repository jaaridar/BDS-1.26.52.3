/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1d92e0 (ELF vaddr 0xd0d92e0)
 * Label: callee-of:0xc95fb20
 * Body:  [[0d1d92e0, 0d1d9438] [0d1d9440, 0d1d9475] [0d1d9480, 0d1d94dc] [0d1d94e0, 0d1d94f9] [0d1d9500, 0d1d96ad]]
 * Ghidra: FUN_0d1d92e0
 */


ulong FUN_0d1d92e0(long param_1,long *param_2,byte *param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  long *plVar11;
  ulong uVar12;
  bool bVar13;
  undefined1 uStack_b1;
  long *plStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  long lStack_98;
  byte *pbStack_88;
  long *plStack_80;
  long *plStack_78;
  byte *pbStack_70;
  byte *pbStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  ulong uStack_38;
  
  pbStack_70 = param_3 + 1;
  bVar13 = (*param_3 & 1) == 0;
  pbVar10 = *(byte **)(param_3 + 0x10);
  if (bVar13) {
    pbVar10 = pbStack_70;
  }
  uVar8 = (ulong)(*param_3 >> 1);
  if (!bVar13) {
    uVar8 = *(ulong *)(param_3 + 8);
  }
  plStack_80 = param_2;
  uVar4 = func_0x04883620(&puStack_50,pbVar10,uVar8);
  plStack_78 = (long *)(param_1 + 0x10);
  uVar8 = *(ulong *)(param_1 + 0x18);
  lStack_58 = param_1;
  if (uVar8 != 0) {
    uVar5 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 >> 2 & 0x3333333333333333) + (uVar5 & 0x3333333333333333);
    uVar5 = ((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar5 >> 0x38 < 2) {
      uVar9 = uVar8 - 1 & uVar4;
    }
    else {
      uVar9 = uVar4;
      if (uVar8 <= uVar4) {
        if ((uVar4 | uVar8) >> 0x20 == 0) {
          uVar9 = (uVar4 & 0xffffffff) % (uVar8 & 0xffffffff);
        }
        else {
          uVar9 = uVar4 % uVar8;
        }
      }
    }
    plVar11 = *(long **)(*plStack_78 + uVar9 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      if ((*param_3 & 1) == 0) {
        uVar12 = (ulong)(*param_3 >> 1);
        pbStack_88 = pbStack_70;
      }
      else {
        uVar12 = *(ulong *)(param_3 + 8);
        pbStack_88 = *(byte **)(param_3 + 0x10);
      }
      if ((byte)(uVar5 >> 0x38) < 2) {
        do {
          if (plVar11[1] == uVar4) {
            bVar1 = *(byte *)(plVar11 + 2);
            if ((bVar1 & 1) == 0) {
              uVar5 = (ulong)(bVar1 >> 1);
            }
            else {
              uVar5 = plVar11[3];
            }
            if (uVar5 == uVar12) {
              if ((bVar1 & 1) == 0) {
                lVar7 = (long)plVar11 + 0x11;
              }
              else {
                lVar7 = plVar11[4];
              }
              iVar3 = func_0x0eee3000(lVar7,pbStack_88,uVar12);
              if (iVar3 == 0) goto LAB_0d1d9528;
            }
          }
          else if ((plVar11[1] & uVar8 - 1) != uVar9) break;
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
      else {
        do {
          uVar5 = plVar11[1];
          if (uVar5 == uVar4) {
            bVar1 = *(byte *)(plVar11 + 2);
            if ((bVar1 & 1) == 0) {
              uVar5 = (ulong)(bVar1 >> 1);
            }
            else {
              uVar5 = plVar11[3];
            }
            if (uVar5 == uVar12) {
              if ((bVar1 & 1) == 0) {
                lVar7 = (long)plVar11 + 0x11;
              }
              else {
                lVar7 = plVar11[4];
              }
              iVar3 = func_0x0eee3000(lVar7,pbStack_88,uVar12);
              if (iVar3 == 0) goto LAB_0d1d9528;
            }
          }
          else {
            if (uVar8 <= uVar5) {
              if ((uVar5 | uVar8) >> 0x20 == 0) {
                uVar5 = (uVar5 & 0xffffffff) % (uVar8 & 0xffffffff);
              }
              else {
                uVar5 = uVar5 % uVar8;
              }
            }
            if (uVar5 != uVar9) break;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
  }
  plVar11 = *(long **)(lStack_58 + 8);
  if (plVar11 == (long *)0x0) {
    uVar8 = 0;
  }
  else {
    uStack_a8 = 0;
    uStack_a0 = 0;
    lStack_98 = 0;
    bVar13 = (*param_3 & 1) != 0;
    pbVar10 = pbStack_70;
    if (bVar13) {
      pbVar10 = *(byte **)(param_3 + 0x10);
    }
    uVar8 = (ulong)(*param_3 >> 1);
    if (bVar13) {
      uVar8 = *(ulong *)(param_3 + 8);
    }
    cVar2 = (**(code **)(*plVar11 + 0xa8))(plVar11,pbVar10,uVar8,&uStack_a8,0);
    if (cVar2 == '\0') {
      uVar8 = 0;
    }
    else {
      lStack_40 = (long)&uStack_a8 + 1;
      uStack_38 = uStack_a8 >> 1 & 0x7f;
      if ((uStack_a8 & 1) != 0) {
        uStack_38 = uStack_a0;
        lStack_40 = lStack_98;
      }
      puStack_50 = &UNK_0ef9fd98;
      uStack_48 = 0;
      func_0x0d6c71b0(&plStack_b0,&puStack_50);
      plVar11 = plStack_b0;
      pbStack_68 = &UNK_01446a5b;
      uStack_60 = 4;
      plVar6 = (long *)func_0x0d6c9880(plStack_b0 + 1,&pbStack_68);
      if ((plVar6 == plVar11 + 2) || ((int)plVar6[0xc] != 10)) {
        uVar8 = 0;
        plVar11 = plStack_b0;
      }
      else {
        (**(code **)(*plStack_80 + 0x10))(plStack_80,plVar6 + 7);
        pbStack_68 = param_3;
        lVar7 = func_0x0d1ea5b0(plStack_78,param_3,&UNK_01563a4f,&pbStack_68,&uStack_b1);
        *(long **)(lVar7 + 0x28) = plStack_80;
        uVar8 = CONCAT71((int7)((ulong)(plVar11 + 2) >> 8),1);
        plVar11 = plStack_b0;
      }
      plStack_b0 = (long *)0x0;
      if (plVar11 != (long *)0x0) {
        plStack_b0 = (long *)0x0;
        (**(code **)(*plVar11 + 8))();
      }
    }
    if ((uStack_a8 & 1) != 0) {
      func_0x0412a280(lStack_98,uStack_a8 & 0xfffffffffffffffe);
    }
  }
LAB_0d1d969a:
  return uVar8 & 0xffffffff;
LAB_0d1d9528:
  uVar8 = CONCAT71((int7)(uVar9 >> 8),1);
  goto LAB_0d1d969a;
}


