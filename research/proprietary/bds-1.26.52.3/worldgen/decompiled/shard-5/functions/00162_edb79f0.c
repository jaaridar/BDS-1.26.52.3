/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xeeb79f0 (ELF vaddr 0xedb79f0)
 * Label: callee-of:0x524f1c0
 * Body:  [[0eeb79f0, 0eeb7dfd] [0eeb7e00, 0eeb7eee] [0eeb7ef0, 0eeb807b] [0eeb80cb, 0eeb8114] [0eee02f0, 0eee0369] [0eee2d80, 0eee2d85]]
 * Ghidra: FUN_0eeb79f0
 */


/* WARNING: Possible PIC construction at 0x0eeb7b29: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0eeb79f0(undefined1 *param_1,ulong *param_2)

{
  long *plVar1;
  long lVar2;
  undefined4 *puVar3;
  byte bVar4;
  code *pcVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long *plVar10;
  byte ****ppppbVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 unaff_RBX;
  long lVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  undefined8 unaff_R14;
  ulong uVar18;
  undefined4 *puVar19;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  undefined8 auStack_d0 [2];
  undefined1 *puStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  undefined4 *puStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  char cStack_80;
  byte ***pppbStack_78;
  long *plStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  undefined4 *puStack_48;
  long lStack_40;
  long *plStack_38;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  auStack_d0[0] = 0xeeb7a1d;
  func_0x0412d550(0xf552e80);
  LOCK();
  _DAT_0f552f50 = _DAT_0f552f50 + 1;
  UNLOCK();
  auStack_d0[0] = 0xeeb7a34;
  func_0x0412d610(0xf552e80);
  plVar10 = _DAT_0f552f68;
  ppppbVar11 = _DAT_0f552f60;
  if ((_DAT_0f552f60 == (byte ****)0x0) || (*(byte *)_DAT_0f552f60 != 1)) {
    lStack_88 = 0;
    cStack_80 = '\0';
    register0x00000020 = (BADSPACEBASE *)auStack_d0;
    auStack_d0[0] = 0xeeb7b2e;
    lVar13 = 0xf552e80;
  }
  else {
    bVar4 = 1;
    if (_DAT_0f552f68 != (long *)0x0) {
      LOCK();
      _DAT_0f552f68[1] = _DAT_0f552f68[1] + 1;
      UNLOCK();
      bVar4 = *(byte *)ppppbVar11;
    }
    lStack_88 = 0xf552e80;
    cStack_80 = '\x01';
    pppbStack_78 = (byte ***)ppppbVar11;
    plStack_70 = plVar10;
    lStack_68 = _DAT_0f552f70;
    if (((bVar4 & 1) != 0) && ((*(byte *)(_DAT_0f552f70 + 0x18) & 1) != 0)) {
      lVar13 = *(long *)(_DAT_0f552f70 + 0x60);
      plVar15 = *(long **)(_DAT_0f552f70 + 0x68);
      if (plVar15 != (long *)0x0) {
        LOCK();
        plVar15[1] = plVar15[1] + 1;
        UNLOCK();
      }
      if (lVar13 != 0) {
        *param_1 = 1;
        auStack_d0[0] = 0xeeb7ac5;
        lStack_a0 = lVar13;
        plStack_b0 = (long *)func_0x0eec09c0(lVar13 + 0x10);
        puVar19 = (undefined4 *)plStack_b0[1];
        if (puVar19 < (undefined4 *)plStack_b0[2]) {
          *(undefined8 *)(puVar19 + 4) = in_stack_00000018;
          *puVar19 = uStack0000000000000008;
          puVar19[1] = uStack000000000000000c;
          puVar19[2] = uStack0000000000000010;
          puVar19[3] = uStack0000000000000014;
          *(undefined8 *)(puVar19 + 6) = 0;
          uVar18 = *param_2;
          if ((uVar18 >> 0x37 & 1) != 0) {
            lVar16 = *(long *)((uVar18 & 0xff00ffffffffffff) - 8);
            lVar13 = lVar16 + 9;
            auStack_d0[0] = 0xeeb7c4c;
            puStack_c0 = param_1;
            plStack_b8 = plVar15;
            plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar13,8);
            if (lVar13 != 0 && plVar10 == (long *)0x0) {
              auStack_d0[0] = 0xeeb8056;
              func_0x0eec74c0(lVar13,8);
            }
            *plVar10 = lVar16;
            auStack_d0[0] = 0xeeb7c85;
            func_0x0eee2f00(plVar10 + 1,uVar18 & 0xff00ffffffffffff,lVar16);
            *(undefined1 *)((long)plVar10 + lVar16 + 8) = 0;
            uVar18 = (ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
            plVar15 = plStack_b8;
            param_1 = puStack_c0;
          }
          *(ulong *)(puVar19 + 6) = uVar18;
          *(undefined1 **)(puVar19 + 8) = param_1;
          puVar19 = puVar19 + 10;
          plStack_b0[1] = (long)puVar19;
          plVar10 = plStack_b0;
        }
        else {
          puStack_a8 = (undefined4 *)((long)puVar19 - *plStack_b0);
          uVar18 = ((long)puStack_a8 >> 3) * -0x3333333333333333 + 1;
          if (0x666666666666666 < uVar18) {
            auStack_d0[0] = 0xeeb8072;
            func_0x0eebe8b0();
LAB_0eeb8072:
            auStack_d0[0] = 0xeeb8077;
            uVar12 = func_0x04882eb0();
            auStack_d0[0] = 0xeeb80d5;
            func_0x0eebe810(&lStack_58);
            auStack_d0[0] = 0xeeb80df;
            func_0x0eeb6180(plStack_b8);
            auStack_d0[0] = 0xeeb80e9;
            func_0x049d0d20(&lStack_88);
            if (*(long *)(puStack_c0 + 0x10) != 0) {
              auStack_d0[0] = 0xeeb80fc;
              FUN_0412c2d0();
            }
            auStack_d0[0] = 0xeeb8104;
            uVar12 = func_0x0eee2d70(uVar12);
            auStack_d0[0] = 0xeeb810c;
            uVar12 = func_0x04882e20(uVar12);
            auStack_d0[0] = 0xeeb8114;
            func_0x04882e20(uVar12);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar13 = plStack_b0[2] - *plStack_b0 >> 3;
          uVar6 = lVar13 * -0x6666666666666666;
          if (uVar18 < uVar6) {
            uVar18 = uVar6;
          }
          if (0x333333333333332 < (ulong)(lVar13 * -0x3333333333333333)) {
            uVar18 = 0x666666666666666;
          }
          plStack_38 = plStack_b0;
          if (uVar18 == 0) {
            lStack_58 = 0;
          }
          else {
            if (0x666666666666666 < uVar18) goto LAB_0eeb8072;
            auStack_d0[0] = 0xeeb7bf6;
            lStack_58 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar18 * 0x28);
            if (lStack_58 == 0) {
              auStack_d0[0] = 0xeeb7c09;
              func_0x0eec74c0(uVar18 * 0x28,0);
              lStack_58 = 0;
            }
          }
          lVar13 = lStack_58 + (long)puStack_a8;
          lStack_60 = lStack_58 + uVar18 * 0x28;
          *(undefined8 *)(lStack_58 + 0x10 + (long)puStack_a8) = in_stack_00000018;
          puVar19 = (undefined4 *)(lStack_58 + (long)puStack_a8);
          *puVar19 = uStack0000000000000008;
          puVar19[1] = uStack000000000000000c;
          puVar19[2] = uStack0000000000000010;
          puVar19[3] = uStack0000000000000014;
          *(undefined8 *)(lStack_58 + 0x18 + (long)puStack_a8) = 0;
          uVar18 = *param_2;
          puStack_c0 = param_1;
          plStack_b8 = plVar15;
          lStack_50 = lVar13;
          lStack_40 = lStack_60;
          if ((uVar18 >> 0x37 & 1) != 0) {
            lVar17 = *(long *)((uVar18 & 0xff00ffffffffffff) - 8);
            lVar16 = lVar17 + 9;
            auStack_d0[0] = 0xeeb7d63;
            puStack_48 = (undefined4 *)lVar13;
            plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar16,8);
            if (lVar16 != 0 && plVar10 == (long *)0x0) {
              auStack_d0[0] = 0xeeb8068;
              func_0x0eec74c0(lVar16,8);
            }
            *plVar10 = lVar17;
            auStack_d0[0] = 0xeeb7d92;
            func_0x0eee2f00(plVar10 + 1,uVar18 & 0xff00ffffffffffff,lVar17);
            *(undefined1 *)((long)plVar10 + lVar17 + 8) = 0;
            uVar18 = (ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
          }
          *(ulong *)(lVar13 + 0x18) = uVar18;
          *(undefined1 **)(lVar13 + 0x20) = puStack_c0;
          puVar19 = (undefined4 *)(lVar13 + 0x28);
          lVar17 = *plStack_b0;
          lVar16 = plStack_b0[1];
          lVar13 = lVar13 + (lVar17 - lVar16);
          plVar15 = plStack_b8;
          param_1 = puStack_c0;
          puStack_48 = puVar19;
          if (lVar17 - lVar16 != 0) {
            lVar14 = 0;
            puStack_a8 = puVar19;
            lStack_98 = lVar13;
            lStack_90 = lVar16;
            do {
              *(undefined8 *)(lVar13 + 0x10 + lVar14) = *(undefined8 *)(lVar17 + 0x10 + lVar14);
              puVar19 = (undefined4 *)(lVar17 + lVar14);
              uVar7 = puVar19[1];
              uVar8 = puVar19[2];
              uVar9 = puVar19[3];
              puVar3 = (undefined4 *)(lVar13 + lVar14);
              *puVar3 = *puVar19;
              puVar3[1] = uVar7;
              puVar3[2] = uVar8;
              puVar3[3] = uVar9;
              *(undefined8 *)(lVar13 + 0x18 + lVar14) = 0;
              uVar18 = *(ulong *)(lVar17 + 0x18 + lVar14);
              if ((uVar18 & 0x80000000000000) != 0) {
                lVar16 = *(long *)((uVar18 & 0xff00ffffffffffff) - 8);
                lVar13 = lVar16 + 9;
                auStack_d0[0] = 0xeeb7eae;
                plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar13,8);
                if (lVar13 != 0 && plVar10 == (long *)0x0) {
                  auStack_d0[0] = 0xeeb7ed2;
                  func_0x0eec74c0(lVar13,8);
                }
                *plVar10 = lVar16;
                auStack_d0[0] = 0xeeb7e18;
                func_0x0eee2f00(plVar10 + 1,uVar18 & 0xff00ffffffffffff,lVar16);
                *(undefined1 *)((long)plVar10 + lVar16 + 8) = 0;
                uVar18 = (ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
                lVar13 = lStack_98;
                lVar16 = lStack_90;
              }
              puVar19 = puStack_a8;
              plVar15 = plStack_b8;
              param_1 = puStack_c0;
              lVar2 = lVar17 + lVar14;
              *(ulong *)(lVar13 + 0x18 + lVar14) = uVar18;
              *(undefined8 *)(lVar13 + 0x20 + lVar14) = *(undefined8 *)(lVar2 + 0x20);
              lVar14 = lVar14 + 0x28;
            } while (lVar2 + 0x28 != lVar16);
            do {
              if ((*(ulong *)(lVar17 + 0x18) & 0x80000000000000) != 0) {
                auStack_d0[0] = 0xeeb7f20;
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(*(ulong *)(lVar17 + 0x18) & 0xff00ffffffffffff) - 8);
                lVar16 = lStack_90;
              }
              *(undefined8 *)(lVar17 + 0x18) = 0;
              lVar17 = lVar17 + 0x28;
            } while (lVar17 != lVar16);
            lVar17 = *plStack_b0;
            lVar13 = lStack_98;
          }
          plVar10 = plStack_b0;
          *plStack_b0 = lVar13;
          plStack_b0[1] = (long)puVar19;
          lVar13 = plStack_b0[2];
          plStack_b0[2] = lStack_60;
          if (lVar17 != 0) {
            auStack_d0[0] = 0xeeb7f78;
            FUN_0412a280(lVar17,lVar13 - lVar17);
          }
        }
        plVar10[1] = (long)puVar19;
        if (plVar15 != (long *)0x0) {
          LOCK();
          plVar15[2] = plVar15[2] + 1;
          UNLOCK();
        }
        *(long *)(param_1 + 8) = lStack_a0;
        lVar13 = *(long *)(param_1 + 0x10);
        *(long **)(param_1 + 0x10) = plVar15;
        if (lVar13 != 0) {
          auStack_d0[0] = 0xeeb7fa1;
          FUN_0412c2d0();
        }
      }
      plVar10 = plStack_70;
      if (plVar15 != (long *)0x0) {
        LOCK();
        plVar1 = plVar15 + 1;
        lVar13 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar13 == 0) {
          auStack_d0[0] = 0xeeb7fc2;
          (**(code **)(*plVar15 + 0x10))(plVar15);
          auStack_d0[0] = 0xeeb7fca;
          FUN_0412c2d0(plVar15);
          plVar10 = plStack_70;
        }
      }
    }
    ppppbVar11 = &pppbStack_78;
    pppbStack_78 = (byte ***)0x0;
    plStack_70 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      LOCK();
      plVar15 = plVar10 + 1;
      ppppbVar11 = (byte ****)*plVar15;
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (ppppbVar11 == (byte ****)0x0) {
        auStack_d0[0] = 0xeeb7ffe;
        (**(code **)(*plVar10 + 0x10))(plVar10);
        auStack_d0[0] = 0xeeb8006;
        ppppbVar11 = (byte ****)FUN_0412c2d0(plVar10);
      }
      plVar10 = plStack_70;
      lStack_68 = 0;
      if (plStack_70 != (long *)0x0) {
        LOCK();
        plVar15 = plStack_70 + 1;
        ppppbVar11 = (byte ****)*plVar15;
        *plVar15 = *plVar15 + -1;
        UNLOCK();
        if (ppppbVar11 == (byte ****)0x0) {
          auStack_d0[0] = 0xeeb803c;
          (**(code **)(*plStack_70 + 0x10))(plStack_70);
          auStack_d0[0] = 0xeeb8044;
          ppppbVar11 = (byte ****)FUN_0412c2d0(plVar10);
        }
      }
    }
    lVar13 = lStack_88;
    if (cStack_80 != '\x01') {
      return;
    }
  }
  *(undefined8 *)((long)register0x00000020 + -8) = unaff_R14;
  *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_RBX;
  *(byte *****)((long)register0x00000020 + -0x18) = ppppbVar11;
  LOCK();
  plVar10 = (long *)(lVar13 + 0xd0);
  lVar16 = *plVar10;
  *plVar10 = *plVar10 + -1;
  UNLOCK();
  if (lVar16 != -0x7fffffffffffffff) {
    return;
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0xeee031b;
  func_0x0412d450();
  LOCK();
  *(ulong *)(lVar13 + 0xd0) = *(ulong *)(lVar13 + 0xd0) & 0x7fffffffffffffff;
  UNLOCK();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0xeee0335;
  func_0x0412d520(lVar13);
  uVar12 = *(undefined8 *)(lVar13 + 0xc0);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0xeee0344;
  func_0x0412d680(uVar12);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0xeee0353;
  func_0x0412d6b0(uVar12);
  (*(code *)PTR_pthread_cond_broadcast_0f546458)(lVar13 + 0x90);
  return;
}


