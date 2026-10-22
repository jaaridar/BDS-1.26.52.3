/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5350fe0 (ELF vaddr 0x5250fe0)
 * Label: callee-of:0x52518f0
 * Body:  [[05350fe0, 05351023] [05351030, 053511e8]]
 * Ghidra: FUN_05350fe0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_05350fe0(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  
  lVar10 = *param_2;
  lVar12 = param_2[1];
  if (lVar12 != lVar10) {
    lVar7 = 0x20;
    uVar11 = 0;
    do {
      if (*(int *)(*param_3 + 0x18 + lVar7) != 1) {
        func_0x04931450();
LAB_053511de:
        func_0x049d00b0();
LAB_053511e3:
        FUN_04882eb0();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar3 = *(undefined8 *)(lVar10 + uVar11 * 8);
      uVar2 = *(undefined4 *)(*param_3 + lVar7);
      puVar8 = (undefined8 *)param_1[1];
      if (puVar8 < (undefined8 *)param_1[2]) {
        *puVar8 = uVar3;
        *(undefined4 *)(puVar8 + 1) = uVar2;
        puVar8 = puVar8 + 2;
      }
      else {
        lVar4 = *param_1;
        lVar9 = (long)puVar8 - lVar4;
        uVar1 = (lVar9 >> 4) + 1;
        if (0xfffffffffffffff < uVar1) goto LAB_053511de;
        uVar15 = param_1[2] - lVar4;
        uVar13 = (long)uVar15 >> 3;
        if ((ulong)((long)uVar15 >> 3) <= uVar1) {
          uVar13 = uVar1;
        }
        if (0x7fffffffffffffef < uVar15) {
          uVar13 = 0xfffffffffffffff;
        }
        if (0xfffffffffffffff < uVar13) goto LAB_053511e3;
        lVar14 = uVar13 * 0x10;
        lVar6 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar14);
        if (lVar6 == 0) {
          func_0x0eec74c0(lVar14,0);
        }
        *(undefined8 *)(lVar6 + lVar9) = uVar3;
        *(undefined4 *)(lVar6 + 8 + lVar9) = uVar2;
        puVar8 = (undefined8 *)(lVar6 + lVar9 + 0x10);
        lVar16 = lVar6 + lVar9 + (lVar9 >> 4) * -0x10;
        func_0x0eee2f00(lVar16,lVar4,lVar9);
        *param_1 = lVar16;
        param_1[1] = (long)puVar8;
        param_1[2] = lVar14 + lVar6;
        if (lVar4 != 0) {
          func_0x0412a280(lVar4,uVar15);
          lVar10 = *param_2;
          lVar12 = param_2[1];
        }
      }
      param_1[1] = (long)puVar8;
      uVar11 = uVar11 + 1;
      lVar7 = lVar7 + 0x40;
    } while (uVar11 < (ulong)(lVar12 - lVar10 >> 3));
  }
  return;
}


