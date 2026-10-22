/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6cc0e0 (ELF vaddr 0xc5cc0e0)
 * Label: JigsawBlock::vslot82
 * Body:  [[0c6cc0e0, 0c6cc3e3]]
 * Ghidra: wg_JigsawBlock__vslot82
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_JigsawBlock__vslot82(long param_1,long *param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  ushort uVar3;
  long lVar4;
  undefined4 *puVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 uStack_159;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  long *plStack_128;
  long *plStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 *apuStack_100 [8];
  undefined1 uStack_c0;
  uint uStack_38;
  
  if ((DAT_0f6ea548 == '\0') && (iVar6 = func_0x04108328(&DAT_0f6ea548), iVar6 != 0)) {
    LOCK();
    UNLOCK();
    _DAT_0f6ea540 = _DAT_0f556458;
    _DAT_0f556458 = _DAT_0f556458 + 1;
    func_0x0410844d(&DAT_0f6ea548);
  }
  lVar10 = *(long *)(param_1 + 800);
  lVar4 = *(long *)(param_1 + 0x328);
  if (lVar4 - lVar10 != 0) {
    lVar9 = lVar4;
    uVar11 = lVar4 - lVar10 >> 1;
    do {
      while( true ) {
        uVar13 = uVar11 >> 1;
        lVar2 = lVar10 + (uVar11 & 0xfffffffffffffffe);
        uVar3 = *(ushort *)(lVar10 + (uVar11 & 0xfffffffffffffffe));
        if (uVar3 < _DAT_0f6ea540) break;
        if (uVar3 <= _DAT_0f6ea540) {
          if (uVar11 != 1) {
            uVar11 = (long)uVar11 >> 1;
            do {
              uVar14 = ~(uVar11 >> 1) + uVar11;
              uVar13 = uVar11 & 0xfffffffffffffffe;
              uVar11 = uVar11 >> 1;
              if (*(ushort *)(lVar10 + uVar13) < _DAT_0f6ea540) {
                lVar10 = lVar10 + 2 + uVar13;
                uVar11 = uVar14;
              }
            } while (uVar11 != 0);
          }
          lVar12 = lVar9 - (lVar2 + 2);
          if (lVar12 != 0) {
            uVar11 = lVar12 >> 1;
            lVar9 = lVar2 + 2;
            do {
              uVar13 = uVar11 >> 1;
              uVar14 = uVar11 & 0xfffffffffffffffe;
              uVar11 = ~uVar13 + uVar11;
              lVar2 = lVar9 + 2 + uVar14;
              if (_DAT_0f6ea540 < *(ushort *)(lVar9 + uVar14)) {
                uVar11 = uVar13;
                lVar2 = lVar9;
              }
              lVar9 = lVar2;
            } while (uVar11 != 0);
          }
          if (lVar10 == lVar9) {
            return 1;
          }
          if (lVar10 == lVar4) {
            return 1;
          }
          puVar5 = *(undefined4 **)(param_4 + 8);
          lVar10 = *(long *)(puVar5 + 2);
          uStack_158 = *puVar5;
          uStack_154 = puVar5[1];
          uStack_150 = puVar5[2];
          uStack_14c = puVar5[3];
          if (lVar10 != 0) {
            LOCK();
            *(long *)(lVar10 + 0x10) = *(long *)(lVar10 + 0x10) + 1;
            UNLOCK();
            LOCK();
            *(long *)(lVar10 + 0x10) = *(long *)(lVar10 + 0x10) + 1;
            UNLOCK();
            uStack_118 = uStack_158;
            uStack_114 = uStack_154;
            uStack_110 = uStack_150;
            uStack_10c = uStack_14c;
            func_0x0412c2d0(lVar10);
            uStack_158 = uStack_118;
            uStack_154 = uStack_114;
            uStack_150 = uStack_110;
            uStack_14c = uStack_10c;
          }
          uStack_148 = *(undefined4 *)(param_4 + 0x18);
          uStack_138 = *param_3;
          uStack_130 = *(undefined4 *)(param_3 + 1);
          lStack_140 = param_1;
          plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
          if (plVar7 == (long *)0x0) {
            func_0x0eec74c0(0x28,0);
          }
          plVar7[1] = 0;
          plVar7[2] = 0;
          *plVar7 = (long)&UNK_0efcae80;
          plVar7[3] = (long)&UNK_0efcaed0;
          plVar7[4] = (long)param_2;
          (**(code **)(*param_2 + 0xd8))(param_2,plVar7 + 3);
          plStack_128 = plVar7 + 3;
          plStack_120 = plVar7;
          uVar8 = (**(code **)(**(long **)(param_4 + 0x1d0) + 0x628))();
          uStack_c0 = 1;
          apuStack_100[0] = &uStack_158;
          uStack_38 = 0;
          iVar6 = func_0x0c619bd0(uVar8,apuStack_100);
          if ((ulong)uStack_38 != 0xffffffff) {
            (**(code **)(&UNK_0f3c9e10 + (ulong)uStack_38 * 8))(&uStack_159,apuStack_100);
          }
          plVar7 = plStack_120;
          if (plStack_120 != (long *)0x0) {
            LOCK();
            plVar1 = plStack_120 + 1;
            lVar10 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar10 == 0) {
              (**(code **)(*plStack_120 + 0x10))(plStack_120);
              func_0x0412c2d0(plVar7);
            }
          }
          if (CONCAT44(uStack_14c,uStack_150) != 0) {
            func_0x0412c2d0();
          }
          if (iVar6 != 0) {
            return 1;
          }
          return 0;
        }
        lVar9 = lVar2;
        uVar11 = uVar13;
        if (uVar13 == 0) {
          return 1;
        }
      }
      lVar10 = lVar2 + 2;
      uVar11 = ~uVar13 + uVar11;
    } while (uVar11 != 0);
  }
  return 1;
}


