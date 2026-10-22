/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcf9f5e0 (ELF vaddr 0xce9f5e0)
 * Label: caller-of-seed
 * Body:  [[0cf9f5e0, 0cf9f9e2]]
 * Ghidra: FUN_0cf9f5e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0cf9f5e0(undefined8 param_1,long *param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  bool bVar13;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  plVar4 = (long *)FUN_0412c300(param_2[0x39]);
  plVar10 = (long *)param_2[0x38];
  LOCK();
  plVar5 = plVar4 + 1;
  lVar6 = *plVar5;
  *plVar5 = *plVar5 + -1;
  UNLOCK();
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    func_0x0412c2d0(plVar4);
  }
  plVar5 = (long *)(**(code **)(*plVar10 + 0x68))();
  lVar6 = (**(code **)(*param_2 + 0x270))(param_2);
  if ((((*(char *)(lVar6 + 0x23) == '\x01') && (*(long **)(lVar6 + 8) != (long *)0x0)) &&
      (**(long **)(lVar6 + 8) != 0)) &&
     ((cVar2 = func_0x0c4562c0(lVar6), cVar2 == '\0' && (*(char *)(lVar6 + 0x22) != '\0')))) {
    lVar6 = (**(code **)(*param_2 + 0x270))(param_2);
    if ((*(long **)(lVar6 + 8) != (long *)0x0) && (lVar6 = **(long **)(lVar6 + 8), lVar6 != 0)) {
      if (*(long *)(lVar6 + 0xe8) == _DAT_0f6e4c88) {
        if ((*(undefined **)(lVar6 + 0x108) == &DAT_0f6e4c88) && (_DAT_0f6e4ca8 == lVar6 + 0xe8)) {
LAB_0cf9f6ef:
          lVar6 = *(long *)(param_4 + 0x68);
          lVar7 = *(long *)(lVar6 + 0x1b0);
          if (lVar7 == 0) {
LAB_0cf9f741:
            for (plVar10 = *(long **)(lVar6 + 0x350); plVar10 != *(long **)(lVar6 + 0x358);
                plVar10 = plVar10 + 2) {
              plVar4 = (long *)*plVar10;
              if (*(ulong *)(plVar4[1] + 8) == _DAT_0f6fe9d0) {
                lVar7 = (**(code **)(*plVar4 + 8))(plVar4,lVar6,*(ushort *)(param_4 + 0x128),0);
                if (lVar7 != 0) goto LAB_0cf9f7d7;
                break;
              }
            }
            if ((*(byte *)(lVar6 + 0x135) & 8) == 0) {
LAB_0cf9f773:
              lVar7 = param_4;
            }
            else {
              lVar7 = *(long *)(lVar6 + 0x200);
            }
          }
          else {
            lVar9 = lVar6 + 0x1b0;
            do {
              bVar13 = *(ulong *)(lVar7 + 0x20) < _DAT_0f6fe9d0;
              if (!bVar13) {
                lVar9 = lVar7;
              }
              lVar7 = *(long *)(lVar7 + (ulong)bVar13 * 8);
            } while (lVar7 != 0);
            if ((lVar9 == lVar6 + 0x1b0) || (_DAT_0f6fe9d0 < *(ulong *)(lVar9 + 0x20)))
            goto LAB_0cf9f741;
            if (*(int *)(lVar9 + 0x28) == 0) goto LAB_0cf9f773;
            uVar8 = (ulong)(~*(uint *)(lVar9 + 0x34) & (uint)*(ushort *)(param_4 + 0x128));
            if (((ulong)(*(long *)(lVar6 + 0x1f0) - *(long *)(lVar6 + 0x1e8) >> 3) <= uVar8) ||
               (lVar7 = *(long *)(*(long *)(lVar6 + 0x1e8) + uVar8 * 8), lVar7 == 0))
            goto LAB_0cf9f773;
          }
LAB_0cf9f7d7:
          (**(code **)(*plVar5 + 0x1f8))(plVar5,param_2,0xf6e9d60,param_3,0);
          goto LAB_0cf9f927;
        }
        bVar1 = *(byte *)(lVar6 + 0xf0);
        if ((bVar1 & 1) == 0) {
          uVar8 = (ulong)(bVar1 >> 1);
        }
        else {
          uVar8 = *(ulong *)(lVar6 + 0xf8);
        }
        uVar11 = _DAT_0f6e4c98;
        if ((DAT_0f6e4c90 & 1) == 0) {
          uVar11 = (ulong)(DAT_0f6e4c90 >> 1);
        }
        if (uVar8 == uVar11) {
          if ((bVar1 & 1) == 0) {
            lVar7 = lVar6 + 0xf1;
          }
          else {
            lVar7 = *(long *)(lVar6 + 0x100);
          }
          uVar12 = _DAT_0f6e4ca0;
          if ((DAT_0f6e4c90 & 1) == 0) {
            uVar12 = 0xf6e4c91;
          }
          iVar3 = bcmp(lVar7,uVar12);
          if (iVar3 == 0) {
            *(undefined **)(lVar6 + 0x108) = &DAT_0f6e4c88;
            _DAT_0f6e4ca8 = lVar6 + 0xe8;
            goto LAB_0cf9f6ef;
          }
        }
      }
      *(undefined8 *)(lVar6 + 0x108) = 0;
    }
  }
  lVar6 = *(long *)(param_4 + 0x68);
  lVar7 = *(long *)(lVar6 + 0x1b0);
  if (lVar7 == 0) {
LAB_0cf9f883:
    for (plVar10 = *(long **)(lVar6 + 0x350); plVar10 != *(long **)(lVar6 + 0x358);
        plVar10 = plVar10 + 2) {
      plVar4 = (long *)*plVar10;
      if (*(ulong *)(plVar4[1] + 8) == _DAT_0f6fe9d0) {
        lVar7 = (**(code **)(*plVar4 + 8))(plVar4,lVar6,*(ushort *)(param_4 + 0x128),1);
        if (lVar7 != 0) goto LAB_0cf9f927;
        break;
      }
    }
    if ((*(byte *)(lVar6 + 0x135) & 8) != 0) {
      lVar7 = *(long *)(lVar6 + 0x200);
      goto LAB_0cf9f927;
    }
  }
  else {
    lVar9 = lVar6 + 0x1b0;
    do {
      bVar13 = *(ulong *)(lVar7 + 0x20) < _DAT_0f6fe9d0;
      if (!bVar13) {
        lVar9 = lVar7;
      }
      lVar7 = *(long *)(lVar7 + (ulong)bVar13 * 8);
    } while (lVar7 != 0);
    if ((lVar9 == lVar6 + 0x1b0) || (_DAT_0f6fe9d0 < *(ulong *)(lVar9 + 0x20))) goto LAB_0cf9f883;
    if (1 < *(uint *)(lVar9 + 0x28)) {
      uVar8 = (ulong)(1 << (((char)*(undefined4 *)(lVar9 + 0x30) -
                            (char)*(undefined4 *)(lVar9 + 0x2c)) + 1U & 0x1f) & 0xffffU |
                     ~*(uint *)(lVar9 + 0x34) & (uint)*(ushort *)(param_4 + 0x128));
      if ((uVar8 < (ulong)(*(long *)(lVar6 + 0x1f0) - *(long *)(lVar6 + 0x1e8) >> 3)) &&
         (lVar7 = *(long *)(*(long *)(lVar6 + 0x1e8) + uVar8 * 8), lVar7 != 0)) goto LAB_0cf9f927;
    }
  }
  lVar7 = param_4;
LAB_0cf9f927:
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_38 = 1;
  (**(code **)(*plVar5 + 0xf8))(plVar5,param_3,lVar7,3,0,&uStack_58);
  func_0x0cf9f290(plVar5,param_3);
  func_0x0c6ca820(param_1,param_2,param_3,param_4);
  return;
}


