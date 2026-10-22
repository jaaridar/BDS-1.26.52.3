/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca69000 (ELF vaddr 0xc969000)
 * Label: Dimension::vslot3
 * Body:  [[0ca687f0, 0ca68865] [0ca68870, 0ca68a9d] [0ca68aa0, 0ca68d10] [0ca68d20, 0ca68ef5] [0ca68f3b, 0ca68f44] [0ca68f55, 0ca68f64] [0ca68fd6, 0ca68ff2] [0ca69000, 0ca69008]]
 * Ghidra: wg_Dimension__vslot3
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_Dimension__vslot3(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  code *pcVar3;
  long lVar4;
  char cVar5;
  undefined1 uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  undefined1 uStack_121;
  long *plStack_120;
  byte *pbStack_118;
  undefined8 *puStack_110;
  long *plStack_108;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  byte bStack_e0;
  undefined5 uStack_df;
  undefined2 uStack_da;
  undefined1 uStack_d8;
  undefined5 uStack_d7;
  undefined1 uStack_d2;
  undefined8 uStack_d0;
  byte bStack_c8;
  undefined5 uStack_c7;
  undefined2 uStack_c2;
  undefined1 uStack_c0;
  undefined5 uStack_bf;
  undefined1 uStack_ba;
  undefined8 uStack_b8;
  byte bStack_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  undefined4 uStack_a7;
  undefined1 uStack_a3;
  undefined8 uStack_a0;
  byte bStack_98;
  undefined4 uStack_97;
  undefined2 uStack_93;
  undefined1 uStack_91;
  undefined8 uStack_88;
  byte bStack_80;
  undefined4 uStack_7f;
  undefined2 uStack_7b;
  undefined1 uStack_79;
  undefined8 uStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  long lStack_50;
  long lStack_48;
  long *plStack_40;
  long *plStack_38;
  
  uStack_60 = param_2;
  cVar5 = (**(code **)(**(long **)(param_1 + 0x90) + 0x9f0))();
  if (cVar5 == '\0') {
    plStack_f8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (plStack_f8 == (long *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    *plStack_f8 = (long)&UNK_0f47e350;
    plStack_f8[1] = 0;
    plStack_f8[2] = 0;
    *(undefined8 *)((long)plStack_f8 + 0x11) = 0;
    *(undefined8 *)((long)plStack_f8 + 0x19) = 0;
    for (puStack_110 = *(undefined8 **)(param_1 + 0x2d8); plVar7 = plStack_f8,
        puStack_110 != (undefined8 *)0x0; puStack_110 = (undefined8 *)*puStack_110) {
      plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (plVar7 == (long *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      *plVar7 = (long)&UNK_0f47e0b0;
      plVar7[2] = 0;
      plVar7[3] = 0;
      plVar7[1] = (long)(plVar7 + 2);
      bStack_80 = 0xc;
      uStack_7b = 0x586b;
      uStack_7f = 0x6e756843;
      uStack_79 = 0;
      uVar2 = *(undefined4 *)(puStack_110 + 2);
      pbStack_118 = &bStack_80;
      plStack_120 = plVar7;
      lVar8 = func_0x0d6c9580(plVar7 + 1,pbStack_118,&UNK_01563a4f,&pbStack_118,&uStack_121);
      if ((ulong)*(uint *)(lVar8 + 0x60) != 0xffffffff) {
        (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar8 + 0x60) * 8))(&pbStack_118,lVar8 + 0x38)
        ;
      }
      *(undefined **)(lVar8 + 0x38) = &UNK_0f47e2e0;
      *(undefined4 *)(lVar8 + 0x40) = uVar2;
      *(undefined4 *)(lVar8 + 0x60) = 3;
      if ((bStack_80 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_70,
                           CONCAT17(uStack_79,CONCAT25(uStack_7b,CONCAT41(uStack_7f,bStack_80))) &
                           0xfffffffffffffffe);
      }
      bStack_98 = 0xc;
      uStack_93 = 0x5a6b;
      uStack_97 = 0x6e756843;
      uStack_91 = 0;
      uVar2 = *(undefined4 *)((long)puStack_110 + 0x14);
      pbStack_118 = &bStack_98;
      lVar8 = func_0x0d6c9580(plVar7 + 1,pbStack_118,&UNK_01563a4f,&pbStack_118,&uStack_121);
      if ((ulong)*(uint *)(lVar8 + 0x60) != 0xffffffff) {
        (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar8 + 0x60) * 8))(&pbStack_118,lVar8 + 0x38)
        ;
      }
      *(undefined **)(lVar8 + 0x38) = &UNK_0f47e2e0;
      *(undefined4 *)(lVar8 + 0x40) = uVar2;
      *(undefined4 *)(lVar8 + 0x60) = 3;
      if ((bStack_98 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_88,
                           CONCAT17(uStack_91,CONCAT25(uStack_93,CONCAT41(uStack_97,bStack_98))) &
                           0xfffffffffffffffe);
      }
      plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
      if (plVar9 == (long *)0x0) {
        func_0x0eec74c0(0x28,0);
      }
      *plVar9 = (long)&UNK_0f47e350;
      plVar9[1] = 0;
      plVar9[2] = 0;
      *(undefined8 *)((long)plVar9 + 0x11) = 0;
      *(undefined8 *)((long)plVar9 + 0x19) = 0;
      plVar15 = (long *)puStack_110[3];
      plStack_40 = (long *)puStack_110[4];
      if (plVar15 != plStack_40) {
        plStack_58 = plVar9 + 1;
        plStack_f0 = plVar9;
        do {
          lVar8 = *plVar15;
          plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
          if (plVar7 == (long *)0x0) {
            func_0x0eec74c0(0x20,0);
          }
          *plVar7 = (long)&UNK_0f47e0b0;
          plVar7[2] = 0;
          plVar7[3] = 0;
          plVar7[1] = (long)(plVar7 + 2);
          func_0x0d6bd5f0(plVar7,lVar8);
          bStack_b0 = 0x18;
          uStack_af = 0x65566f626d694c;
          uStack_a8 = 0x72;
          uStack_a7 = 0x6e6f6973;
          uStack_a3 = 0;
          pbStack_118 = &bStack_b0;
          lVar8 = func_0x0d6c9580(plVar7 + 1,pbStack_118,&UNK_01563a4f,&pbStack_118,&uStack_121);
          if ((ulong)*(uint *)(lVar8 + 0x60) != 0xffffffff) {
            (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar8 + 0x60) * 8))
                      (&pbStack_118,lVar8 + 0x38);
          }
          *(undefined **)(lVar8 + 0x38) = &UNK_0f47e040;
          *(undefined1 *)(lVar8 + 0x40) = 2;
          *(undefined4 *)(lVar8 + 0x60) = 1;
          plStack_e8 = plVar15;
          if ((bStack_b0 & 1) != 0) {
            thunk_FUN_0ee326a0(uStack_a0,CONCAT71(uStack_af,bStack_b0) & 0xfffffffffffffffe);
          }
          plStack_108 = plVar7;
          uVar6 = (**(code **)(*plVar7 + 0x30))(plVar7);
          plVar7 = plStack_f0;
          *(undefined1 *)(plStack_f0 + 4) = uVar6;
          puVar12 = (undefined8 *)plStack_f0[2];
          if (puVar12 < (undefined8 *)plStack_f0[3]) {
            *puVar12 = plStack_108;
            puVar12 = puVar12 + 1;
            plVar9 = plStack_f0;
          }
          else {
            lVar8 = *plStack_58;
            lVar14 = (long)puVar12 - lVar8;
            uVar1 = (lVar14 >> 3) + 1;
            if (0x1fffffffffffffff < uVar1) {
              func_0x0d6c9300();
LAB_0ca68e8f:
              uVar10 = func_0x04882eb0();
              (**(code **)(*plVar15 + 8))(plVar15);
              if ((bStack_e0 & 1) != 0) {
                thunk_FUN_0ee326a0(uStack_d0,
                                   CONCAT26(uStack_da,CONCAT51(uStack_df,bStack_e0)) &
                                   0xfffffffffffffffe);
                uVar10 = func_0x0eee2d70(uVar10);
                uVar10 = func_0x04882e20(uVar10);
                uVar10 = func_0x04882e20(uVar10);
                (**(code **)(*plVar7 + 8))(plVar7);
                if ((bStack_c8 & 1) != 0) {
                  thunk_FUN_0ee326a0(uStack_b8,
                                     CONCAT26(uStack_c2,CONCAT51(uStack_c7,bStack_c8)) &
                                     0xfffffffffffffffe);
                }
                (**(code **)(*plStack_120 + 8))(plStack_120);
                (**(code **)(*plStack_f8 + 8))();
              }
              func_0x0eee2d70(uVar10);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar13 = plStack_f0[3] - lVar8;
            uVar11 = (long)uVar13 >> 2;
            if ((ulong)((long)uVar13 >> 2) <= uVar1) {
              uVar11 = uVar1;
            }
            if (0x7ffffffffffffff7 < uVar13) {
              uVar11 = 0x1fffffffffffffff;
            }
            lStack_48 = lVar8;
            if (0x1fffffffffffffff < uVar11) goto LAB_0ca68e8f;
            lVar8 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar11 * 8);
            if (lVar8 == 0) {
              func_0x0eec74c0(uVar11 * 8,0);
            }
            lVar4 = lStack_48;
            lStack_50 = uVar11 * 8 + lVar8;
            *(long **)(lVar8 + lVar14) = plStack_108;
            puVar12 = (undefined8 *)(lVar14 + lVar8 + 8);
            lVar8 = lVar14 + lVar8 + (lVar14 >> 3) * -8;
            func_0x0eee2f00(lVar8,lStack_48,lVar14);
            plVar9 = plStack_f0;
            plStack_f0[1] = lVar8;
            plStack_f0[2] = (long)puVar12;
            plStack_f0[3] = lStack_50;
            if (lVar4 != 0) {
              thunk_FUN_0ee326a0(lVar4,uVar13);
            }
          }
          plVar9[2] = (long)puVar12;
          plVar15 = plStack_e8 + 1;
          plVar7 = plStack_120;
        } while (plVar15 != plStack_40);
      }
      bStack_c8 = 0x1a;
      uStack_bf = 0x7473694c67;
      uStack_c7 = 0x7469746e45;
      uStack_c2 = 0x5479;
      uStack_c0 = 0x61;
      uStack_ba = 0;
      plStack_68 = plVar9;
      func_0x0d6bb450(plVar7,&bStack_c8,&plStack_68);
      plStack_68 = (long *)0x0;
      (**(code **)(*plVar9 + 8))(plVar9);
      if ((bStack_c8 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_b8,
                           CONCAT26(uStack_c2,CONCAT51(uStack_c7,bStack_c8)) & 0xfffffffffffffffe);
      }
      plStack_100 = plVar7;
      func_0x0d6c2370(plStack_f8,&plStack_100);
      plVar7 = plStack_100;
      plStack_100 = (long *)0x0;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 8))();
      }
    }
    bStack_e0 = 0x1a;
    uStack_df = 0x6f626d694c;
    uStack_da = 0x6e45;
    uStack_d8 = 0x74;
    uStack_d7 = 0x7365697469;
    uStack_d2 = 0;
    plStack_38 = plStack_f8;
    func_0x0d6bb450(uStack_60,&bStack_e0,&plStack_38);
    (**(code **)(*plVar7 + 8))(plVar7);
    if ((bStack_e0 & 1) != 0) {
      thunk_FUN_0ee326a0(uStack_d0,
                         CONCAT26(uStack_da,CONCAT51(uStack_df,bStack_e0)) & 0xfffffffffffffffe);
    }
  }
  return;
}


