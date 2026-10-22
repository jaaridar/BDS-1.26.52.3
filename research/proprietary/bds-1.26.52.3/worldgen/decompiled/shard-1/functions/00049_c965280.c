/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca65280 (ELF vaddr 0xc965280)
 * Label: Dimension::vslot11
 * Body:  [[0ca65280, 0ca652c7] [0ca652d0, 0ca65519]]
 * Ghidra: wg_Dimension__vslot11
 */


void wg_Dimension__vslot11(long param_1,code *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  ulong *puVar3;
  long lVar4;
  code *pcVar5;
  char cVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uStack_50;
  long lStack_48;
  uint uStack_40;
  char cStack_38;
  
  plVar7 = (long *)(**(code **)(**(long **)(param_1 + 0xa0) + 0xa28))();
  puVar10 = (ulong *)*plVar7;
  puVar3 = (ulong *)plVar7[1];
  if (puVar10 != puVar3) {
    do {
      uStack_50 = uStack_50 & 0xffffffffffffff00;
      cStack_38 = '\0';
      if (((puVar10[1] != 0) && ((puVar10[2] & 0x3ffff) != 0x3ffff)) &&
         (plVar7 = (long *)func_0x0412c300(), plVar7 != (long *)0x0)) {
        uVar12 = *puVar10;
        if (uVar12 != 0) {
          uVar2 = (uint)puVar10[2];
          uVar11 = (ulong)((uVar2 & 0x3ffff) >> 0xb);
          if (((uVar11 < (ulong)(*(long *)(uVar12 + 0xe0) - *(long *)(uVar12 + 0xd8) >> 3)) &&
              (lVar8 = *(long *)(*(long *)(uVar12 + 0xd8) + uVar11 * 8), lVar8 != 0)) &&
             ((uVar1 = *(uint *)(lVar8 + (ulong)(uVar2 & 0x7ff) * 4),
              (uVar2 & 0xfffc0000 ^ uVar1) < 0x3ffff &&
              ((ulong)(uVar1 & 0x3ffff) < *(ulong *)(uVar12 + 0x118))))) {
            lStack_48 = uVar12 + 0x28;
            cStack_38 = '\x01';
            uStack_50 = uVar12;
            uStack_40 = uVar2;
          }
        }
        LOCK();
        plVar9 = plVar7 + 1;
        lVar8 = *plVar9;
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (lVar8 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          func_0x0412c2d0(plVar7);
        }
      }
      if ((cStack_38 != '\0') && (lVar8 = func_0x0bc62290(&uStack_50,0), lVar8 != 0)) {
        lVar4 = *(long *)(lVar8 + 0x10);
        uVar2 = *(uint *)(lVar8 + 0x18);
        plVar7 = (long *)(*(long *)(lVar4 + 0x38) +
                         (ulong)((int)((ulong)(*(long *)(lVar4 + 0x40) - *(long *)(lVar4 + 0x38)) >>
                                      3) - 1U & 0xaf993816) * 8);
        do {
          if (*plVar7 == -1) {
            plVar9 = *(long **)(lVar4 + 0x58);
            plVar7 = plVar9;
            goto LAB_0ca65439;
          }
          lVar8 = *plVar7 * 0x20;
          plVar7 = (long *)(*(long *)(lVar4 + 0x50) + lVar8);
        } while (*(int *)(*(long *)(lVar4 + 0x50) + 8 + lVar8) != -0x5066c7ea);
        plVar9 = *(long **)(lVar4 + 0x58);
LAB_0ca65439:
        if ((plVar7 == plVar9) || (lVar8 = plVar7[2], lVar8 == 0)) {
LAB_0ca65514:
          func_0x04890760();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar12 = (ulong)((uVar2 & 0x3ffff) >> 0xb);
        if (((ulong)(*(long *)(lVar8 + 0x10) - *(long *)(lVar8 + 8) >> 3) <= uVar12) ||
           (((lVar4 = *(long *)(*(long *)(lVar8 + 8) + uVar12 * 8), lVar4 == 0 ||
             (uVar1 = *(uint *)(lVar4 + (ulong)(uVar2 & 0x7ff) * 4),
             0x3fffe < (uVar2 & 0xfffc0000 ^ uVar1))) ||
            (lVar8 = *(long *)(*(long *)(lVar8 + 0x50) + (ulong)(uVar1 >> 4 & 0x3ff8)), lVar8 == 0))
           )) goto LAB_0ca65514;
        if ((*(int *)(lVar8 + (ulong)(uVar1 & 0x7f) * 4) == *(int *)(param_1 + 0x170)) &&
           (cVar6 = (*param_2)(param_3), cVar6 == '\0')) {
          return;
        }
      }
      puVar10 = puVar10 + 3;
    } while (puVar10 != puVar3);
  }
  return;
}


