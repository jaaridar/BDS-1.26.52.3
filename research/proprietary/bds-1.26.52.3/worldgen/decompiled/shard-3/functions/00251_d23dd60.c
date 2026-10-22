/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd33dd60 (ELF vaddr 0xd23dd60)
 * Label: callee-of:0x61416e0
 * Body:  [[0d33dd60, 0d33def8] [0d33df00, 0d33e047] [0d33e050, 0d33e064] [0d33e070, 0d33e0c1] [0d33e0d0, 0d33e35e] [0d33e3b5, 0d33e432]]
 * Ghidra: FUN_0d33dd60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_0d33dd60(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
            undefined1 *param_5,long *param_6)

{
  long *plVar1;
  long *plVar2;
  ulong *puVar3;
  byte *pbVar4;
  undefined1 uVar5;
  byte bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  int iVar13;
  ulong *puVar14;
  ulong uVar15;
  long lVar16;
  byte *pbVar17;
  undefined8 *puVar18;
  undefined1 uStack_119;
  ulong *puStack_118;
  ulong *puStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined1 auStack_d0 [8];
  ulong uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  ulong uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 auStack_80 [8];
  ulong uStack_78;
  ulong uStack_70;
  undefined8 uStack_60;
  undefined8 *puStack_50;
  long lStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  puStack_50 = param_1;
  puStack_118 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
  if (puStack_118 == (ulong *)0x0) {
    func_0x0eec74c0(0x48,0);
  }
  uStack_a8 = *param_2;
  plStack_a0 = (long *)param_2[1];
  if (param_2[1] != 0) {
    LOCK();
    plVar1 = (long *)(param_2[1] + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  uStack_98 = param_2[2];
  uStack_90 = *(undefined4 *)(param_2 + 3);
  uStack_8c = *(undefined4 *)((long)param_2 + 0x1c);
  uStack_88 = *(undefined4 *)(param_2 + 4);
  uStack_84 = *(undefined4 *)((long)param_2 + 0x24);
  func_0x0d88e390(auStack_80,param_2 + 5);
  puVar14 = puStack_118;
  uStack_60 = param_2[9];
  uVar11 = *param_3;
  uVar7 = param_3[1];
  uVar8 = *param_4;
  uVar9 = param_4[1];
  uVar5 = *param_5;
  lVar16 = *param_6;
  lVar10 = param_6[1];
  puStack_110 = puStack_118 + 6;
  puStack_118[6] = 0;
  puStack_118[7] = 0;
  puStack_118[4] = 0;
  puStack_118[5] = 0;
  puStack_118[2] = 0;
  puStack_118[3] = 0;
  *puStack_118 = 0;
  puStack_118[1] = 0;
  puStack_118[8] = 0;
  func_0x0b5fa060(&uStack_f8,uVar11,uVar7,&UNK_013abf4c,9);
  if ((*puVar14 & 1) != 0) {
    func_0x0412a280(puVar14[2],*puVar14 & 0xfffffffffffffffe);
  }
  puVar14[2] = uStack_e8;
  *(undefined4 *)puVar14 = (undefined4)uStack_f8;
  *(undefined4 *)((long)puVar14 + 4) = uStack_f8._4_4_;
  *(undefined4 *)(puVar14 + 1) = (undefined4)uStack_f0;
  *(undefined4 *)((long)puVar14 + 0xc) = uStack_f0._4_4_;
  func_0x0b5fa060(&uStack_f8,uVar8,uVar9,&UNK_013abf4c,9);
  if ((*puStack_110 & 1) != 0) {
    func_0x0412a280(puVar14[8],puVar14[6] & 0xfffffffffffffffe);
  }
  puStack_110[2] = uStack_e8;
  *(undefined4 *)puStack_110 = (undefined4)uStack_f8;
  *(undefined4 *)((long)puStack_110 + 4) = uStack_f8._4_4_;
  *(undefined4 *)(puStack_110 + 1) = (undefined4)uStack_f0;
  *(undefined4 *)((long)puStack_110 + 0xc) = uStack_f0._4_4_;
  if (lVar10 != 0) {
    lStack_48 = lVar10 * 0x40 + lVar16;
    do {
      uStack_f8 = uStack_a8;
      uStack_f0 = plStack_a0;
      if (plStack_a0 != (long *)0x0) {
        LOCK();
        plStack_a0[1] = plStack_a0[1] + 1;
        UNLOCK();
      }
      uStack_e8 = uStack_98;
      uStack_e0 = uStack_90;
      uStack_dc = uStack_8c;
      uStack_d8 = uStack_88;
      uStack_d4 = uStack_84;
      func_0x0d88e390(auStack_d0,auStack_80);
      uStack_b0 = uStack_60;
      plVar1 = *(long **)(lVar16 + 0x20);
      uStack_119 = uVar5;
      if (plVar1 == (long *)0x0) {
LAB_0d33e345:
        uVar11 = func_0x04891200();
        uVar11 = func_0x04882e20(uVar11);
        uVar11 = func_0x04882e20(uVar11);
        if ((*puStack_110 & 1) != 0) goto LAB_0d33e401;
        uVar15 = puVar14[3];
        if (uVar15 != 0) goto LAB_0d33e41b;
        do {
          bVar6 = (byte)*puVar14;
          while( true ) {
            if ((bVar6 & 1) != 0) {
              func_0x0412a280(puVar14[2],*puVar14 & 0xfffffffffffffffe);
            }
            func_0x050d2800(&uStack_a8);
            func_0x0412a280(puVar14,0x48);
            func_0x0eee2d70(uVar11);
LAB_0d33e401:
            func_0x0412a280(puVar14[8],puVar14[6] & 0xfffffffffffffffe);
            uVar15 = puVar14[3];
            if (uVar15 == 0) break;
LAB_0d33e41b:
            puVar14[4] = uVar15;
            func_0x0412a280(uVar15,puVar14[5] - uVar15);
            bVar6 = (byte)*puVar14;
          }
        } while( true );
      }
      uStack_100 = (**(code **)(*plVar1 + 0x30))(plVar1,&uStack_f8,&uStack_119);
      if ((uStack_c0 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_c0 & 0xff00ffffffffffff) - 8);
      }
      uStack_c0 = 0;
      if ((uStack_c8 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_c8 & 0xff00ffffffffffff) - 8);
      }
      plVar1 = uStack_f0;
      uStack_c8 = 0;
      uStack_f8 = 0;
      uStack_f0 = (long *)0x0;
      if (plVar1 == (long *)0x0) {
        iVar13 = *(int *)(lVar16 + 0x30);
joined_r0x0d33e05e:
        uStack_e8 = 0;
      }
      else {
        LOCK();
        plVar2 = plVar1 + 1;
        lVar10 = *plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (lVar10 != 0) {
LAB_0d33e0aa:
          iVar13 = *(int *)(lVar16 + 0x30);
          goto joined_r0x0d33e05e;
        }
        (**(code **)(*plVar1 + 0x10))(plVar1);
        func_0x0412c2d0(plVar1);
        plVar1 = uStack_f0;
        if (uStack_f0 == (long *)0x0) goto LAB_0d33e0aa;
        uStack_e8 = 0;
        LOCK();
        plVar2 = uStack_f0 + 1;
        lVar10 = *plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (lVar10 != 0) goto LAB_0d33e0aa;
        (**(code **)(*uStack_f0 + 0x10))(uStack_f0);
        func_0x0412c2d0(plVar1);
        iVar13 = *(int *)(lVar16 + 0x30);
      }
      if (0 < iVar13) {
        puVar18 = (undefined8 *)puVar14[4];
        iVar13 = 0;
        lStack_108 = lVar16;
        do {
          puVar3 = puVar14 + 5;
          if ((undefined8 *)*puVar3 <= puVar18) {
            uVar15 = puVar14[3];
            lVar16 = (long)puVar18 - uVar15;
            puVar14 = (ulong *)(lVar16 >> 3);
            pbVar4 = (byte *)((long)puVar14 + 1);
            if (pbVar4 < (byte *)0x2000000000000000) {
              uVar12 = (long)*puVar3 - uVar15;
              pbVar17 = (byte *)((long)uVar12 >> 2);
              if ((byte *)((long)uVar12 >> 2) <= pbVar4) {
                pbVar17 = pbVar4;
              }
              if (0x7ffffffffffffff7 < uVar12) {
                pbVar17 = (byte *)0x1fffffffffffffff;
              }
              if (pbVar17 < (byte *)0x2000000000000000) {
                uStack_40 = uVar12;
                uStack_38 = uVar15;
                lVar10 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)pbVar17 * 8);
                if (lVar10 == 0) {
                  func_0x0eec74c0((long)pbVar17 * 8,0);
                }
                uVar15 = uStack_38;
                *(undefined8 *)(lVar10 + lVar16) = uStack_100;
                puVar18 = (undefined8 *)(lVar10 + lVar16 + 8);
                uVar12 = lVar10 + lVar16 + (long)puVar14 * -8;
                func_0x0eee2f00(uVar12,uStack_38,lVar16);
                puVar14 = puStack_118;
                puStack_118[3] = uVar12;
                puStack_118[4] = (ulong)puVar18;
                puStack_118[5] = lVar10 + (long)pbVar17 * 8;
                lVar16 = lStack_108;
                if (uVar15 != 0) {
                  func_0x0412a280(uVar15,uStack_40);
                  lVar16 = lStack_108;
                }
                goto LAB_0d33e0e0;
              }
            }
            else {
              func_0x0d30a1b0();
            }
            func_0x04882eb0();
            goto LAB_0d33e345;
          }
          *puVar18 = uStack_100;
          puVar18 = puVar18 + 1;
LAB_0d33e0e0:
          puVar14[4] = (ulong)puVar18;
          iVar13 = iVar13 + 1;
        } while (iVar13 < *(int *)(lVar16 + 0x30));
      }
      lVar16 = lVar16 + 0x40;
    } while (lVar16 != lStack_48);
  }
  puVar18 = puStack_50;
  *puStack_50 = puVar14;
  if ((uStack_70 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_70 & 0xff00ffffffffffff) - 8);
  }
  uStack_70 = 0;
  if ((uStack_78 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_78 & 0xff00ffffffffffff) - 8);
  }
  plVar1 = plStack_a0;
  uStack_78 = 0;
  uStack_a8 = 0;
  plStack_a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    lVar16 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      func_0x0412c2d0(plVar1);
    }
    plVar1 = plStack_a0;
    uStack_98 = 0;
    if (plStack_a0 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_a0 + 1;
      lVar16 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
        func_0x0412c2d0(plVar1);
      }
    }
  }
  return puVar18;
}


