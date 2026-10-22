/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc9e7730 (ELF vaddr 0xc8e7730)
 * Label: callee-of:0x517cd10
 * Body:  [[0c9e7730, 0c9e7775] [0c9e7780, 0c9e77d0] [0c9e77e0, 0c9e7854] [0c9e7860, 0c9e78d9] [0c9e78e0, 0c9e7a8a] [0c9e7a90, 0c9e7c95]]
 * Ghidra: FUN_0c9e7730
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c9e7730(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  bool bVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  ulong uVar22;
  undefined8 *puVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined4 *puVar29;
  long lVar30;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long alStack_50 [4];
  
  alStack_50[0] = param_1 + 0x10;
  alStack_50[1] = param_2 + 0x10;
  alStack_50[2] = param_1 + 0x40;
  alStack_50[3] = param_2 + 0x40;
  lVar19 = 0;
  do {
    plVar4 = *(long **)((long)alStack_50 + lVar19 + 8);
    puVar20 = (undefined8 *)*plVar4;
    lVar26 = plVar4[1];
    lVar27 = lVar26 - (long)puVar20;
    if (lVar27 != 0) {
      plVar5 = *(long **)((long)alStack_50 + lVar19);
      do {
        if (0x28 < lVar27) {
          lVar28 = (lVar27 >> 3) * -0x3333333333333333;
          uVar6 = puVar20[4];
          uVar11 = *puVar20;
          uVar12 = puVar20[1];
          uVar13 = puVar20[2];
          uVar14 = puVar20[3];
          puVar23 = puVar20;
          lVar27 = 0;
          do {
            puVar21 = puVar23 + lVar27 * 5 + 5;
            lVar30 = lVar27 * 2 + 1;
            lVar1 = lVar27 * 2 + 2;
            if (lVar1 < lVar28) {
              bVar18 = (ulong)puVar23[lVar27 * 5 + 0xe] < (ulong)puVar23[lVar27 * 5 + 9];
              if (puVar23[lVar27 * 5 + 9] == puVar23[lVar27 * 5 + 0xe]) {
                bVar18 = *(int *)((long)puVar23 + lVar27 * 0x28 + 100) <
                         *(int *)((long)puVar23 + lVar27 * 0x28 + 0x3c);
              }
              if (bVar18) {
                puVar21 = puVar23 + lVar27 * 5 + 10;
                lVar30 = lVar1;
              }
            }
            puVar23[4] = puVar21[4];
            uVar15 = *puVar21;
            uVar16 = puVar21[1];
            uVar17 = puVar21[3];
            puVar23[2] = puVar21[2];
            puVar23[3] = uVar17;
            *puVar23 = uVar15;
            puVar23[1] = uVar16;
            puVar23 = puVar21;
            lVar27 = lVar30;
          } while (lVar30 <= (long)(lVar28 - 2U >> 1));
          puVar23 = (undefined8 *)(lVar26 + -0x28);
          if (puVar21 == puVar23) {
            puVar21[4] = uVar6;
            puVar21[2] = uVar13;
            puVar21[3] = uVar14;
            *puVar21 = uVar11;
            puVar21[1] = uVar12;
          }
          else {
            puVar21[4] = *(undefined8 *)(lVar26 + -8);
            uVar15 = *puVar23;
            uVar16 = *(undefined8 *)(lVar26 + -0x20);
            uVar17 = *(undefined8 *)(lVar26 + -0x10);
            puVar21[2] = *(undefined8 *)(lVar26 + -0x18);
            puVar21[3] = uVar17;
            *puVar21 = uVar15;
            puVar21[1] = uVar16;
            *puVar23 = uVar11;
            *(undefined8 *)(lVar26 + -0x20) = uVar12;
            *(undefined8 *)(lVar26 + -0x18) = uVar13;
            *(undefined8 *)(lVar26 + -0x10) = uVar14;
            *(undefined8 *)(lVar26 + -8) = uVar6;
            uVar24 = (long)puVar21 + (0x28 - (long)puVar20);
            if (0x28 < (long)uVar24) {
              uVar25 = (uVar24 >> 3) * -0x3333333333333333 - 2 >> 1;
              uVar24 = puVar21[4];
              iVar2 = *(int *)((long)puVar21 + 0x14);
              bVar18 = uVar24 < (ulong)puVar20[uVar25 * 5 + 4];
              if (puVar20[uVar25 * 5 + 4] == uVar24) {
                bVar18 = iVar2 < *(int *)((long)puVar20 + uVar25 * 0x28 + 0x14);
              }
              if (bVar18) {
                uVar3 = *(undefined4 *)(puVar21 + 2);
                uVar11 = *puVar21;
                uVar12 = puVar21[1];
                uVar6 = puVar21[3];
                do {
                  puVar23 = puVar20 + uVar25 * 5;
                  puVar21[4] = puVar23[4];
                  uVar13 = *puVar23;
                  uVar14 = puVar23[1];
                  uVar15 = puVar23[3];
                  puVar21[2] = puVar23[2];
                  puVar21[3] = uVar15;
                  *puVar21 = uVar13;
                  puVar21[1] = uVar14;
                  if (uVar25 == 0) break;
                  uVar25 = uVar25 - 1 >> 1;
                  bVar18 = uVar24 < (ulong)puVar20[uVar25 * 5 + 4];
                  if (puVar20[uVar25 * 5 + 4] == uVar24) {
                    bVar18 = iVar2 < *(int *)((long)puVar20 + uVar25 * 0x28 + 0x14);
                  }
                  puVar21 = puVar23;
                } while (bVar18);
                *(undefined4 *)(puVar23 + 2) = uVar3;
                *puVar23 = uVar11;
                puVar23[1] = uVar12;
                *(int *)((long)puVar23 + 0x14) = iVar2;
                puVar23[3] = uVar6;
                puVar23[4] = uVar24;
              }
            }
          }
          lVar26 = plVar4[1];
        }
        uVar6 = *(undefined8 *)(lVar26 + -8);
        uVar3 = *(undefined4 *)(lVar26 + -0x28);
        uVar8 = *(undefined4 *)(lVar26 + -0x24);
        uVar13 = *(undefined8 *)(lVar26 + -0x28);
        uVar9 = *(undefined4 *)(lVar26 + -0x20);
        uVar10 = *(undefined4 *)(lVar26 + -0x1c);
        uVar14 = *(undefined8 *)(lVar26 + -0x20);
        uVar11 = *(undefined8 *)(lVar26 + -0x18);
        uVar12 = *(undefined8 *)(lVar26 + -0x10);
        plVar4[1] = lVar26 + -0x28;
        puVar29 = (undefined4 *)plVar5[1];
        if (puVar29 < (undefined4 *)plVar5[2]) {
          *(undefined8 *)(puVar29 + 8) = uVar6;
          *(undefined8 *)(puVar29 + 4) = uVar11;
          *(undefined8 *)(puVar29 + 6) = uVar12;
          *puVar29 = uVar3;
          puVar29[1] = uVar8;
          puVar29[2] = uVar9;
          puVar29[3] = uVar10;
          puVar29 = puVar29 + 10;
        }
        else {
          lVar26 = *plVar5;
          lVar27 = (long)puVar29 - lVar26;
          uVar24 = (lVar27 >> 3) * -0x3333333333333333 + 1;
          if (0x666666666666666 < uVar24) {
            func_0x0c9f0380();
LAB_0c9e7c90:
            func_0x04882eb0();
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar30 = plVar5[2] - lVar26;
          lVar28 = lVar30 >> 3;
          uVar25 = lVar28 * -0x6666666666666666;
          if (uVar24 < uVar25) {
            uVar24 = uVar25;
          }
          if (0x333333333333332 < (ulong)(lVar28 * -0x3333333333333333)) {
            uVar24 = 0x666666666666666;
          }
          if (0x666666666666666 < uVar24) goto LAB_0c9e7c90;
          lVar28 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar24 * 0x28);
          if (lVar28 == 0) {
            func_0x0eec74c0(uVar24 * 0x28,0);
          }
          *(undefined8 *)(lVar28 + 0x20 + lVar27) = uVar6;
          uStack_a8 = (undefined4)uVar13;
          uStack_a4 = (undefined4)((ulong)uVar13 >> 0x20);
          uStack_a0 = (undefined4)uVar14;
          uStack_9c = (undefined4)((ulong)uVar14 >> 0x20);
          uStack_98 = (undefined4)uVar11;
          uStack_94 = (undefined4)((ulong)uVar11 >> 0x20);
          uStack_90 = (undefined4)uVar12;
          uStack_8c = (undefined4)((ulong)uVar12 >> 0x20);
          puVar29 = (undefined4 *)(lVar28 + 0x10 + lVar27);
          *puVar29 = uStack_98;
          puVar29[1] = uStack_94;
          puVar29[2] = uStack_90;
          puVar29[3] = uStack_8c;
          puVar29 = (undefined4 *)(lVar28 + lVar27);
          *puVar29 = uStack_a8;
          puVar29[1] = uStack_a4;
          puVar29[2] = uStack_a0;
          puVar29[3] = uStack_9c;
          puVar29 = (undefined4 *)(lVar28 + 0x28 + lVar27);
          func_0x0eee2f00(lVar28,lVar26,lVar27);
          *plVar5 = lVar28;
          plVar5[1] = (long)puVar29;
          plVar5[2] = uVar24 * 0x28 + lVar28;
          if (lVar26 != 0) {
            func_0x0412a280(lVar26,lVar30);
          }
        }
        plVar5[1] = (long)puVar29;
        lVar26 = *plVar5;
        if (0x28 < (long)puVar29 - lVar26) {
          uVar22 = ((ulong)((long)puVar29 - lVar26) >> 3) * -0x3333333333333333 - 2 >> 1;
          uVar24 = *(ulong *)(puVar29 + -2);
          iVar2 = puVar29[-5];
          uVar25 = *(ulong *)(lVar26 + 0x20 + uVar22 * 0x28);
          bVar18 = uVar24 < uVar25;
          if (uVar25 == uVar24) {
            bVar18 = iVar2 < *(int *)(lVar26 + 0x14 + uVar22 * 0x28);
          }
          if (bVar18) {
            uVar3 = puVar29[-6];
            uVar11 = *(undefined8 *)(puVar29 + -10);
            uVar12 = *(undefined8 *)(puVar29 + -8);
            uVar6 = *(undefined8 *)(puVar29 + -4);
            puVar20 = (undefined8 *)(puVar29 + -10);
            do {
              puVar23 = (undefined8 *)(lVar26 + uVar22 * 0x28);
              puVar20[4] = puVar23[4];
              uVar13 = *puVar23;
              uVar14 = puVar23[1];
              uVar15 = puVar23[3];
              puVar20[2] = puVar23[2];
              puVar20[3] = uVar15;
              *puVar20 = uVar13;
              puVar20[1] = uVar14;
              if (uVar22 == 0) break;
              uVar22 = uVar22 - 1 >> 1;
              uVar25 = *(ulong *)(lVar26 + 0x20 + uVar22 * 0x28);
              bVar18 = uVar24 < uVar25;
              if (uVar25 == uVar24) {
                bVar18 = iVar2 < *(int *)(lVar26 + 0x14 + uVar22 * 0x28);
              }
              puVar20 = puVar23;
            } while (bVar18);
            *(undefined4 *)(puVar23 + 2) = uVar3;
            uStack_78 = (undefined4)uVar11;
            uStack_74 = (undefined4)((ulong)uVar11 >> 0x20);
            uStack_70 = (undefined4)uVar12;
            uStack_6c = (undefined4)((ulong)uVar12 >> 0x20);
            *(undefined4 *)puVar23 = uStack_78;
            *(undefined4 *)((long)puVar23 + 4) = uStack_74;
            *(undefined4 *)(puVar23 + 1) = uStack_70;
            *(undefined4 *)((long)puVar23 + 0xc) = uStack_6c;
            *(int *)((long)puVar23 + 0x14) = iVar2;
            puVar23[3] = uVar6;
            puVar23[4] = uVar24;
          }
        }
        puVar20 = (undefined8 *)*plVar4;
        lVar26 = plVar4[1];
        lVar27 = lVar26 - (long)puVar20;
      } while (lVar27 != 0);
    }
    func_0x0c9e5350();
    lVar19 = lVar19 + 0x10;
    if (lVar19 == 0x20) {
      return;
    }
  } while( true );
}


