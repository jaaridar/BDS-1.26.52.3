/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xedf92e0 (ELF vaddr 0xecf92e0)
 * Label: callee-of:0x61416e0
 * Body:  [[0edf92e0, 0edf93b9] [0edf93c0, 0edf94d2] [0edf94e0, 0edf9517] [0edf9520, 0edf96aa]]
 * Ghidra: FUN_0edf92e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0edf92e0(undefined4 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  undefined4 *puVar4;
  long lVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 uVar11;
  undefined4 *puVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  ulong uVar21;
  long *plVar22;
  undefined1 uStack_56;
  undefined1 uStack_55;
  uint uStack_54;
  long *plStack_50;
  undefined4 *puStack_48;
  long lStack_40;
  undefined4 *puStack_38;
  
  uStack_54 = *(uint *)(param_2 + 0x18);
  if (uStack_54 != 0) {
    if (uStack_54 == 1) {
      lVar16 = *(long *)(param_2 + 8);
      uVar7 = *(undefined4 *)(lVar16 + 0x10);
      uVar8 = *(undefined4 *)(lVar16 + 0x14);
      uVar9 = *(undefined4 *)(lVar16 + 0x18);
      uVar10 = *(undefined4 *)(lVar16 + 0x1c);
      if (*(long *)(lVar16 + 0x18) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(lVar16 + 0x18) + 8);
        *plVar1 = *plVar1 + 1;
        UNLOCK();
      }
      plVar1 = *(long **)(param_1 + 2);
      *param_1 = uVar7;
      param_1[1] = uVar8;
      param_1[2] = uVar9;
      param_1[3] = uVar10;
      if (plVar1 != (long *)0x0) {
        LOCK();
        plVar22 = plVar1 + 1;
        lVar16 = *plVar22;
        *plVar22 = *plVar22 + -1;
        UNLOCK();
        if (lVar16 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
          func_0x0412c2d0(plVar1);
        }
      }
    }
    else {
      plVar1 = (long *)(param_1 + 8);
      uVar3 = param_1[0x88];
      if (0x20 < uStack_54) {
        if (uVar3 != 0xffffffff) {
          (**(code **)(&UNK_0f533710 + (ulong)uVar3 * 8))(&uStack_55,plVar1);
        }
        *plVar1 = 0;
        *(undefined8 *)(param_1 + 10) = 0;
        *(undefined8 *)(param_1 + 0xc) = 0;
        param_1[0x88] = 2;
        uVar21 = (ulong)*(uint *)(param_2 + 0x18);
        if (uVar21 == 0) {
          puVar12 = (undefined4 *)0x0;
        }
        else {
          puVar12 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar21 * 0x10);
          if (puVar12 == (undefined4 *)0x0) {
            func_0x0eec74c0(uVar21 * 0x10,0);
          }
          *(undefined4 **)(param_1 + 8) = puVar12;
          *(undefined4 **)(param_1 + 10) = puVar12;
          *(undefined4 **)(param_1 + 0xc) = puVar12 + uVar21 * 4;
        }
        plVar22 = *(long **)(param_2 + 8);
        plVar19 = (long *)(param_2 + 8);
        plVar2 = plVar19;
        puVar4 = param_1;
        if (plVar22 != plVar19) {
          do {
            puStack_48 = puVar4;
            plStack_50 = plVar2;
            puVar4 = *(undefined4 **)(param_1 + 0xc);
            if (puVar12 < puVar4) {
              lVar16 = plVar22[3];
              uVar7 = *(undefined4 *)((long)plVar22 + 0x14);
              lVar18 = plVar22[3];
              uVar8 = *(undefined4 *)((long)plVar22 + 0x1c);
              *puVar12 = (int)plVar22[2];
              puVar12[1] = uVar7;
              puVar12[2] = (int)lVar18;
              puVar12[3] = uVar8;
              if (lVar16 != 0) {
                LOCK();
                plVar2 = (long *)(lVar16 + 0x10);
                *plVar2 = *plVar2 + 1;
                UNLOCK();
              }
              puVar12 = puVar12 + 4;
            }
            else {
              lVar16 = *plVar1;
              lVar18 = (long)puVar12 - lVar16;
              lVar20 = lVar18 >> 4;
              uVar21 = lVar20 + 1;
              if (0xfffffffffffffff < uVar21) {
                func_0x0ee03200();
LAB_0edf9690:
                func_0x04882eb0();
                goto LAB_0edf9695;
              }
              uVar17 = (long)puVar4 - lVar16 >> 3;
              if (uVar17 <= uVar21) {
                uVar17 = uVar21;
              }
              if (0x7fffffffffffffef < (ulong)((long)puVar4 - lVar16)) {
                uVar17 = 0xfffffffffffffff;
              }
              puStack_38 = puVar4;
              if (uVar17 == 0) {
LAB_0edf95af:
                lVar13 = 0;
              }
              else {
                lStack_40 = lVar16;
                if (0xfffffffffffffff < uVar17) goto LAB_0edf9690;
                lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar17 << 4);
                lVar16 = lStack_40;
                if (lVar13 == 0) {
                  func_0x0eec74c0(uVar17 << 4,0);
                  lVar16 = lStack_40;
                  goto LAB_0edf95af;
                }
              }
              param_1 = puStack_48;
              lVar5 = plVar22[3];
              uVar7 = *(undefined4 *)((long)plVar22 + 0x14);
              lVar15 = plVar22[3];
              uVar8 = *(undefined4 *)((long)plVar22 + 0x1c);
              puVar12 = (undefined4 *)(lVar13 + lVar18);
              *puVar12 = (int)plVar22[2];
              puVar12[1] = uVar7;
              puVar12[2] = (int)lVar15;
              puVar12[3] = uVar8;
              lVar15 = lVar18;
              if (lVar5 != 0) {
                LOCK();
                plVar19 = (long *)(lVar5 + 0x10);
                *plVar19 = *plVar19 + 1;
                UNLOCK();
                lVar16 = *(long *)(puStack_48 + 8);
                puStack_38 = *(undefined4 **)(puStack_48 + 0xc);
                lVar20 = *(long *)(puStack_48 + 10) - lVar16 >> 4;
                lVar15 = *(long *)(puStack_48 + 10) - lVar16;
              }
              puVar12 = (undefined4 *)(lVar18 + lVar13 + 0x10);
              lVar18 = lVar18 + lVar13 + lVar20 * -0x10;
              func_0x0eee2f00(lVar18,lVar16,lVar15);
              *(long *)(param_1 + 8) = lVar18;
              *(undefined4 **)(param_1 + 10) = puVar12;
              *(ulong *)(param_1 + 0xc) = uVar17 * 0x10 + lVar13;
              plVar19 = plStack_50;
              if (lVar16 != 0) {
                func_0x0412a280(lVar16,(long)puStack_38 - lVar16);
                plVar19 = plStack_50;
              }
            }
            *(undefined4 **)(param_1 + 10) = puVar12;
            plVar22 = (long *)*plVar22;
            plVar2 = plStack_50;
            puVar4 = puStack_48;
          } while (plVar22 != plVar19);
          if (puVar12 != (undefined4 *)*plVar1) {
            *(undefined4 **)(param_1 + 4) = (undefined4 *)*plVar1;
            *(undefined4 **)(param_1 + 6) = puVar12;
            goto LAB_0edf9668;
          }
        }
LAB_0edf9695:
        uVar14 = func_0x0ee03210();
        uVar14 = func_0x04882e20(uVar14);
        func_0x04882e20(uVar14);
        pcVar6 = (code *)swi(3);
        uVar11 = (*pcVar6)();
        return (bool)uVar11;
      }
      if (uVar3 != 0xffffffff) {
        (**(code **)(&UNK_0f533710 + (ulong)uVar3 * 8))(&uStack_56,plVar1);
      }
      lVar16 = 0;
      func_0x0eee2dd0(plVar1,0,0x200);
      param_1[0x88] = 1;
      plVar22 = (long *)(param_1 + 10);
      plVar19 = (long *)(param_2 + 8);
      do {
        plVar19 = (long *)*plVar19;
        if (plVar19 == (long *)(param_2 + 8)) goto LAB_0edf948c;
        uVar7 = *(undefined4 *)(plVar19 + 2);
        uVar8 = *(undefined4 *)((long)plVar19 + 0x14);
        uVar9 = *(undefined4 *)(plVar19 + 3);
        uVar10 = *(undefined4 *)((long)plVar19 + 0x1c);
        if (plVar19[3] != 0) {
          LOCK();
          plVar2 = (long *)(plVar19[3] + 0x10);
          *plVar2 = *plVar2 + 1;
          UNLOCK();
        }
        lVar18 = *plVar22;
        *(undefined4 *)(plVar22 + -1) = uVar7;
        *(undefined4 *)((long)plVar22 + -4) = uVar8;
        *(undefined4 *)plVar22 = uVar9;
        *(undefined4 *)((long)plVar22 + 4) = uVar10;
        if (lVar18 != 0) {
          func_0x0412c2d0();
        }
        lVar16 = lVar16 + 1;
        plVar22 = plVar22 + 2;
      } while (lVar16 != 0x20);
      lVar16 = 0x20;
LAB_0edf948c:
      *(long **)(param_1 + 4) = plVar1;
      *(long **)(param_1 + 6) = plVar1 + lVar16 * 2;
    }
  }
LAB_0edf9668:
  return uStack_54 != 0;
}


