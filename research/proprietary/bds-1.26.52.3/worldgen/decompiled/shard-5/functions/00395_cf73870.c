/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd073870 (ELF vaddr 0xcf73870)
 * Label: caller-of-seed
 * Body:  [[0d073870, 0d0739dc]]
 * Ghidra: FUN_0d073870
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0d073870(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  long lVar8;
  char cVar9;
  long lVar10;
  long *plVar11;
  bool bVar12;
  
  uVar3 = func_0x0c6ca820();
  plVar4 = (long *)func_0x0412c300(*(undefined8 *)(param_2 + 0x1c8));
  plVar2 = *(long **)(param_2 + 0x1c0);
  LOCK();
  plVar11 = plVar4 + 1;
  lVar1 = *plVar11;
  *plVar11 = *plVar11 + -1;
  UNLOCK();
  if (lVar1 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_0412c2d0(plVar4);
  }
  uVar5 = (**(code **)(*plVar2 + 0x68))(plVar2);
  lVar1 = *(long *)(param_4 + 0x68);
  if (*(long *)(lVar1 + 200) != _DAT_0f7162a8) {
    bVar7 = 0;
    goto LAB_0d07399c;
  }
  lVar10 = *(long *)(lVar1 + 0x1b0);
  if (lVar10 == 0) {
LAB_0d073943:
    plVar11 = *(long **)(lVar1 + 0x350);
    if (plVar11 == *(long **)(lVar1 + 0x358)) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      do {
        if (*(ulong *)(((undefined8 *)*plVar11)[1] + 8) == _DAT_0f6fe3a0) {
          uVar6 = (*(code *)**(undefined8 **)*plVar11)();
          break;
        }
        plVar11 = plVar11 + 2;
      } while (plVar11 != *(long **)(lVar1 + 0x358));
    }
    bVar12 = (bool)((int)uVar6 != 0 & (byte)((ulong)uVar6 >> 0x20));
  }
  else {
    lVar8 = lVar1 + 0x1b0;
    do {
      bVar12 = *(ulong *)(lVar10 + 0x20) < _DAT_0f6fe3a0;
      if (!bVar12) {
        lVar8 = lVar10;
      }
      lVar10 = *(long *)(lVar10 + (ulong)bVar12 * 8);
    } while (lVar10 != 0);
    if ((lVar8 == lVar1 + 0x1b0) || (_DAT_0f6fe3a0 < *(ulong *)(lVar8 + 0x20))) goto LAB_0d073943;
    cVar9 = (char)*(undefined4 *)(lVar8 + 0x2c);
    bVar12 = (ushort)((*(ushort *)(param_4 + 0x128) >>
                      (((char)*(undefined4 *)(lVar8 + 0x30) - cVar9) + 1U & 0x1f)) <<
                     (0x10U - cVar9 & 0x1f)) != 0;
  }
  bVar7 = bVar12 ^ 1;
LAB_0d07399c:
  func_0x0d072a90(param_1,uVar5,param_3,bVar7);
  return uVar3;
}


