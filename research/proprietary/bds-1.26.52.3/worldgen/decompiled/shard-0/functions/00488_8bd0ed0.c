/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x8cd0ed0 (ELF vaddr 0x8bd0ed0)
 * Label: callee2-of:0xc57a610
 * Body:  [[08cd0ed0, 08cd10c7]]
 * Ghidra: FUN_08cd0ed0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_08cd0ed0(char *param_1)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  
  lVar3 = func_0x0c6edaf0(param_1,0xd);
  if (lVar3 == 0) {
    if (*param_1 == '\x01') {
      puVar10 = *(undefined8 **)(param_1 + 0x10);
    }
    else {
      plVar4 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
      if (plVar4 == (long *)0x0) {
        func_0x0eec74c0(0x60,0);
      }
      plVar4[8] = 0;
      plVar4[9] = 0;
      plVar4[6] = 0;
      plVar4[7] = 0;
      plVar4[10] = 0;
      plVar4[0xb] = 0;
      *plVar4 = 0;
      plVar4[1] = 0;
      plVar4[4] = 0;
      plVar4[5] = 0;
      plVar4[2] = 0;
      plVar4[3] = 0;
      plVar4[8] = (long)(plVar4 + 8);
      plVar4[9] = (long)(plVar4 + 8);
      plVar4[7] = (long)&UNK_0f159190;
      plVar4[0xb] = (long)&UNK_0f1591c0;
      *plVar4 = (long)&UNK_0f159100;
      puVar10 = *(undefined8 **)(param_1 + 0x10);
      if (puVar10 < *(undefined8 **)(param_1 + 0x18)) {
        *puVar10 = plVar4;
        puVar10 = puVar10 + 1;
      }
      else {
        lVar3 = *(long *)(param_1 + 8);
        lVar8 = (long)puVar10 - lVar3;
        uVar1 = (lVar8 >> 3) + 1;
        if (uVar1 >> 0x3d != 0) {
          func_0x05cfa030();
LAB_08cd10ae:
          uVar6 = func_0x04882eb0();
          (**(code **)(*plVar4 + 8))(plVar4);
          func_0x0eee2d70(uVar6);
          pcVar2 = (code *)swi(3);
          lVar3 = (*pcVar2)();
          return lVar3;
        }
        uVar7 = (long)*(undefined8 **)(param_1 + 0x18) - lVar3;
        uVar11 = (long)uVar7 >> 2;
        if ((ulong)((long)uVar7 >> 2) <= uVar1) {
          uVar11 = uVar1;
        }
        if (0x7ffffffffffffff7 < uVar7) {
          uVar11 = 0x1fffffffffffffff;
        }
        if (0x1fffffffffffffff < uVar11) goto LAB_08cd10ae;
        lVar5 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar11 * 8);
        if (lVar5 == 0) {
          func_0x0eec74c0(uVar11 * 8,0);
        }
        *(long **)(lVar5 + lVar8) = plVar4;
        puVar10 = (undefined8 *)(lVar8 + lVar5 + 8);
        lVar9 = lVar8 + lVar5 + (lVar8 >> 3) * -8;
        func_0x0eee2f00(lVar9,lVar3,lVar8);
        *(long *)(param_1 + 8) = lVar9;
        *(undefined8 **)(param_1 + 0x10) = puVar10;
        *(ulong *)(param_1 + 0x18) = uVar11 * 8 + lVar5;
        if (lVar3 != 0) {
          thunk_FUN_0ee326a0(lVar3,uVar7);
        }
      }
      *(undefined8 **)(param_1 + 0x10) = puVar10;
    }
    lVar3 = puVar10[-1];
  }
  return lVar3;
}


