/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd0774f0 (ELF vaddr 0xcf774f0)
 * Label: caller-of-seed
 * Body:  [[0d0774f0, 0d0776b1]]
 * Ghidra: FUN_0d0774f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0d0774f0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uStack_68;
  int iStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  plVar4 = (long *)func_0x0412c300(*(undefined8 *)(param_2 + 0x1c8));
  plVar8 = *(long **)(param_2 + 0x1c0);
  LOCK();
  plVar5 = plVar4 + 1;
  lVar1 = *plVar5;
  *plVar5 = *plVar5 + -1;
  UNLOCK();
  if (lVar1 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    func_0x0412c2d0(plVar4);
  }
  plVar5 = (long *)(**(code **)(*plVar8 + 0x68))(plVar8);
  uStack_68 = 0;
  iStack_60 = 0;
  (**(code **)(**(long **)(param_4 + 0x68) + 600))
            (*(long **)(param_4 + 0x68),plVar5,param_3,&uStack_68);
  uVar6 = func_0x0c6ca820(param_1,param_2,param_3,param_4);
  cVar2 = (**(code **)(**(long **)(param_2 + 0x1d0) + 0x9f0))();
  if (cVar2 == '\0') {
    iVar3 = func_0x0bbfe2d0(param_2 + 8);
    if (iVar3 == 5) {
      iVar3 = (**(code **)(**(long **)(param_2 + 0x1d0) + 0x468))();
    }
    if (iVar3 == 1) {
      lVar7 = (**(code **)(*plVar5 + 0x10))(plVar5,&uStack_68);
      lVar1 = *(long *)(*(long *)(lVar7 + 0x68) + 200);
      if ((lVar1 == _DAT_0f7168c0) || (lVar1 == _DAT_0f7168e8)) {
        plVar8 = (long *)(**(code **)(*plVar5 + 0x150))(plVar5);
        uStack_58 = CONCAT44((float)(int)((ulong)uStack_68 >> 0x20) + _UNK_014e9bd4,
                             (float)(int)uStack_68 + _DAT_014e9bd0);
        uStack_50 = CONCAT44(uStack_50._4_4_,(float)iStack_60 + _DAT_011986e0);
        (**(code **)(*plVar8 + 0x698))
                  (plVar8,plVar5,0x7d1,&uStack_58,*(undefined4 *)(lVar7 + 0x11c));
        uVar9 = func_0x0cc41df0(&DAT_0f6ff9e0,&DAT_0f6eaec0,1);
        uStack_48 = 0;
        uStack_40 = 0;
        uStack_58 = 0;
        uStack_50 = 0;
        uStack_38 = 1;
        (**(code **)(*plVar5 + 0xf8))(plVar5,&uStack_68,uVar9,3,0,&uStack_58);
      }
    }
  }
  return uVar6;
}


