/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd6c9310 (ELF vaddr 0xd5c9310)
 * Label: callee-of:0xd1cf130
 * Body:  [[0d6c9310, 0d6c9448] [0d6c9450, 0d6c94ed]]
 * Ghidra: FUN_0d6c9310
 */


/* WARNING: Possible PIC construction at 0x0d6c94d6: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0d6c9310(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  code *pcVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  puVar12 = (undefined8 *)auStack_38;
  lVar14 = param_1[1] - *param_1;
  uVar9 = (lVar14 >> 5) + 1;
  if (uVar9 >> 0x3b == 0) {
    uVar13 = param_1[2] - *param_1;
    uVar16 = (long)uVar13 >> 4;
    if (uVar16 <= uVar9) {
      uVar16 = uVar9;
    }
    if (0x7fffffffffffffdf < uVar13) {
      uVar16 = 0x7ffffffffffffff;
    }
    if (uVar16 < 0x800000000000000) {
      lVar17 = uVar16 * 0x20;
      uStack_40 = 0xd6c9393;
      lVar10 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar17);
      if (lVar10 == 0) {
        uStack_40 = 0xd6c94ce;
        func_0x0eec74c0(lVar17,0);
      }
      uVar4 = *param_2;
      *param_2 = 0;
      *(undefined8 *)(lVar10 + lVar14) = uVar4;
      uVar4 = param_2[2];
      puVar1 = (undefined8 *)(lVar10 + 8 + lVar14);
      *puVar1 = param_2[1];
      puVar1[1] = uVar4;
      *(undefined8 *)(lVar10 + 0x18 + lVar14) = param_2[3];
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      lVar2 = lVar10 + 0x20 + lVar14;
      plVar15 = (long *)*param_1;
      plVar5 = (long *)param_1[1];
      lVar14 = ((long)plVar15 - (long)plVar5) + lVar10 + lVar14;
      if ((long)plVar15 - (long)plVar5 != 0) {
        lVar11 = 0;
        do {
          uVar4 = *(undefined8 *)((long)plVar15 + lVar11);
          *(undefined8 *)((long)plVar15 + lVar11) = 0;
          *(undefined8 *)(lVar14 + lVar11) = uVar4;
          puVar1 = (undefined8 *)((long)plVar15 + lVar11 + 8);
          uVar4 = puVar1[1];
          puVar3 = (undefined8 *)(lVar14 + 8 + lVar11);
          *puVar3 = *puVar1;
          puVar3[1] = uVar4;
          *(undefined8 *)(lVar14 + 0x18 + lVar11) = *(undefined8 *)((long)plVar15 + lVar11 + 0x18);
          puVar1 = (undefined8 *)((long)plVar15 + lVar11 + 8);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)((long)plVar15 + lVar11 + 0x18) = 0;
          lVar8 = lVar11 + 0x20;
          lVar11 = lVar11 + 0x20;
        } while ((long *)((long)plVar15 + lVar8) != plVar5);
        do {
          if ((*(byte *)(plVar15 + 1) & 1) != 0) {
            uStack_40 = 0xd6c9474;
            func_0x0412a280(plVar15[3],plVar15[1] & 0xfffffffffffffffe);
          }
          plVar6 = (long *)*plVar15;
          *plVar15 = 0;
          if (plVar6 != (long *)0x0) {
            uStack_40 = 0xd6c948b;
            (**(code **)(*plVar6 + 8))();
          }
          plVar15 = plVar15 + 4;
        } while (plVar15 != plVar5);
        plVar15 = (long *)*param_1;
      }
      *param_1 = lVar14;
      param_1[1] = lVar2;
      lVar14 = param_1[2];
      param_1[2] = lVar17 + lVar10;
      if (plVar15 != (long *)0x0) {
        uStack_40 = 0xd6c94af;
        func_0x0412a280(plVar15,lVar14 - (long)plVar15);
      }
      return lVar2;
    }
    uStack_40 = 0xd6c94e0;
    uVar9 = FUN_04882eb0();
  }
  else {
    puVar12 = &uStack_40;
    uStack_40 = 0xd6c94db;
  }
  *(ulong *)((long)puVar12 + -8) = uVar9;
  *(undefined8 *)((long)puVar12 + -0x10) = 0xd6c94ed;
  func_0x04882e40(&UNK_013f6512);
  pcVar7 = (code *)swi(3);
  lVar14 = (*pcVar7)();
  return lVar14;
}


