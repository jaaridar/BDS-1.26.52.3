/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x9dbed70 (ELF vaddr 0x9cbed70)
 * Label: callee-of:0xc961580
 * Body:  [[09dbed70, 09dbedb3] [09dbedc0, 09dbeec3] [09dbeed0, 09dbef18] [09dbef20, 09dbf24e]]
 * Ghidra: FUN_09dbed70
 */


void FUN_09dbed70(long param_1,long *param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  ulong *puVar13;
  long lVar14;
  long lVar15;
  ulong *puVar16;
  ulong *puVar17;
  undefined1 uStack_a9;
  long lStack_a8;
  ulong uStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  long *plStack_68;
  ulong uStack_60;
  long *plStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong *puStack_38;
  
  puVar13 = *(ulong **)(param_1 + 8);
  puVar17 = *(ulong **)(param_1 + 0x10);
  lStack_a8 = param_1;
  uStack_78 = param_3;
  uStack_70 = param_4;
  plStack_68 = param_2;
  if (puVar13 != puVar17) {
    do {
      if (param_4 < *puVar13) {
        return;
      }
      if (0x28 < (long)puVar17 - (long)puVar13) {
        lVar14 = ((long)puVar17 - (long)puVar13 >> 3) * -0x3333333333333333;
        plStack_98 = (long *)puVar13[1];
        puVar13[1] = 0;
        uStack_80 = puVar13[4];
        uStack_90 = puVar13[2];
        uStack_88 = puVar13[3];
        puVar13[2] = 0;
        puVar13[3] = 0;
        puVar13[4] = 0;
        lVar15 = 0;
        uStack_a0 = *puVar13;
        puStack_38 = puVar13;
        do {
          puVar16 = puVar13 + lVar15 * 5 + 5;
          lVar1 = lVar15 * 2 + 2;
          lVar2 = lVar15 * 2 + 1;
          if (lVar1 < lVar14) {
            uVar3 = puVar13[lVar15 * 5 + 5];
            uVar4 = puVar13[lVar15 * 5 + 10];
            uVar10 = uVar4;
            if (uVar3 < uVar4) {
              uVar10 = uVar3;
            }
            lVar9 = lVar15 * 5;
            lVar15 = lVar2;
            if (uVar4 < uVar3) {
              lVar15 = lVar1;
              puVar16 = puVar13 + lVar9 + 10;
            }
          }
          else {
            uVar10 = *puVar16;
            lVar15 = lVar2;
          }
          *puVar13 = uVar10;
          uVar10 = puVar16[1];
          puVar16[1] = 0;
          plVar11 = (long *)puVar13[1];
          puVar13[1] = uVar10;
          if (plVar11 != (long *)0x0) {
            (**(code **)(*plVar11 + 8))();
          }
          if ((puVar13[2] & 1) != 0) {
            func_0x0412a280(puVar13[4],puVar13[2] & 0xfffffffffffffffe);
          }
          param_2 = plStack_68;
          plVar11 = plStack_98;
          param_1 = lStack_a8;
          puVar13[4] = puVar16[4];
          uVar7 = *(undefined4 *)((long)puVar16 + 0x14);
          uVar10 = puVar16[3];
          uVar8 = *(undefined4 *)((long)puVar16 + 0x1c);
          *(int *)(puVar13 + 2) = (int)puVar16[2];
          *(undefined4 *)((long)puVar13 + 0x14) = uVar7;
          *(int *)(puVar13 + 3) = (int)uVar10;
          *(undefined4 *)((long)puVar13 + 0x1c) = uVar8;
          *(undefined2 *)(puVar16 + 2) = 0;
          puVar13 = puVar16;
        } while (lVar15 <= (long)(lVar14 - 2U >> 1));
        puVar13 = puVar16 + 2;
        if (puVar16 == puVar17 + -5) {
          *puVar16 = uStack_a0;
          plStack_98 = (long *)0x0;
          plVar5 = (long *)puVar16[1];
          puVar16[1] = (ulong)plVar11;
          if ((plVar5 != (long *)0x0) && ((**(code **)(*plVar5 + 8))(), (*puVar13 & 1) != 0)) {
            func_0x0412a280(puVar16[4],puVar16[2] & 0xfffffffffffffffe);
          }
          puVar16[4] = uStack_80;
          *(undefined4 *)puVar13 = (undefined4)uStack_90;
          *(undefined4 *)((long)puVar16 + 0x14) = uStack_90._4_4_;
          *(undefined4 *)(puVar16 + 3) = (undefined4)uStack_88;
          *(undefined4 *)((long)puVar16 + 0x1c) = uStack_88._4_4_;
          param_3 = uStack_78;
          param_4 = uStack_70;
        }
        else {
          *puVar16 = puVar17[-5];
          uVar10 = puVar17[-4];
          puVar17[-4] = 0;
          plVar11 = (long *)puVar16[1];
          puVar16[1] = uVar10;
          if (plVar11 != (long *)0x0) {
            (**(code **)(*plVar11 + 8))();
          }
          if ((*puVar13 & 1) != 0) {
            func_0x0412a280(puVar16[4],puVar16[2] & 0xfffffffffffffffe);
          }
          plVar5 = plStack_98;
          puVar16[4] = puVar17[-1];
          uVar7 = *(undefined4 *)((long)puVar17 + -0x14);
          uVar10 = puVar17[-2];
          uVar8 = *(undefined4 *)((long)puVar17 + -0xc);
          *(int *)puVar13 = (int)puVar17[-3];
          *(undefined4 *)((long)puVar16 + 0x14) = uVar7;
          *(int *)(puVar16 + 3) = (int)uVar10;
          *(undefined4 *)((long)puVar16 + 0x1c) = uVar8;
          *(undefined2 *)(puVar17 + -3) = 0;
          puVar17[-5] = uStack_a0;
          plStack_98 = (long *)0x0;
          plVar11 = (long *)puVar17[-4];
          puVar17[-4] = (ulong)plVar5;
          if ((plVar11 != (long *)0x0) && ((**(code **)(*plVar11 + 8))(), (puVar17[-3] & 1) != 0)) {
            func_0x0412a280(puVar17[-1],puVar17[-3] & 0xfffffffffffffffe);
          }
          puVar17[-1] = uStack_80;
          *(undefined4 *)(puVar17 + -3) = (undefined4)uStack_90;
          *(undefined4 *)((long)puVar17 + -0x14) = uStack_90._4_4_;
          *(undefined4 *)(puVar17 + -2) = (undefined4)uStack_88;
          *(undefined4 *)((long)puVar17 + -0xc) = uStack_88._4_4_;
          uStack_90 = uStack_90 & 0xffffffffffff0000;
          func_0x09dfe080(puStack_38,puVar16 + 5,&uStack_a9,
                          ((long)(puVar16 + 5) - (long)puStack_38 >> 3) * -0x3333333333333333);
          param_4 = uStack_70;
          param_3 = uStack_78;
          param_1 = lStack_a8;
          if ((uStack_90 & 1) != 0) {
            func_0x0412a280(uStack_80,uStack_90 & 0xfffffffffffffffe);
          }
        }
        if (plStack_98 != (long *)0x0) {
          (**(code **)(*plStack_98 + 8))();
        }
        puVar17 = *(ulong **)(param_1 + 0x10);
      }
      uStack_60 = puVar17[-5];
      plStack_58 = (long *)puVar17[-4];
      puVar17[-4] = 0;
      uStack_40 = puVar17[-1];
      uStack_50 = puVar17[-3];
      uStack_48 = puVar17[-2];
      puVar17[-3] = 0;
      puVar17[-2] = 0;
      puVar17[-1] = 0;
      lVar15 = *(long *)(param_1 + 0x10);
      if ((*(byte *)(lVar15 + -0x18) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar15 + -8),*(ulong *)(lVar15 + -0x18) & 0xfffffffffffffffe
                       );
      }
      plVar11 = *(long **)(lVar15 + -0x20);
      *(undefined8 *)(lVar15 + -0x20) = 0;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 8))();
      }
      *(long *)(param_1 + 0x10) = lVar15 + -0x28;
      if (plStack_58 == (long *)0x0) {
        uVar12 = func_0x04890760();
        func_0x09cd04b0(&uStack_a0);
        uVar12 = _Unwind_Resume(uVar12);
        func_0x09cd04b0(&uStack_60);
        _Unwind_Resume(uVar12);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      (**(code **)(*plStack_58 + 0x10))(plStack_58,param_2,param_3);
      plVar11 = (long *)(**(code **)(*param_2 + 0x558))(param_2);
      (**(code **)(*plVar11 + 0x68))(&uStack_a0,plVar11,&uStack_50,0);
      plVar11 = plStack_98;
      param_1 = lStack_a8;
      if (plStack_98 != (long *)0x0) {
        LOCK();
        plVar5 = plStack_98 + 1;
        lVar15 = *plVar5;
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (lVar15 == 0) {
          (**(code **)(*plStack_98 + 0x10))(plStack_98);
          func_0x0412c2d0(plVar11);
          param_1 = lStack_a8;
        }
      }
      lStack_a8 = param_1;
      if ((uStack_50 & 1) != 0) {
        func_0x0412a280(uStack_40,uStack_50 & 0xfffffffffffffffe);
      }
      plVar11 = plStack_58;
      plStack_58 = (long *)0x0;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 8))();
      }
      puVar13 = *(ulong **)(param_1 + 8);
      puVar17 = *(ulong **)(param_1 + 0x10);
    } while (puVar13 != puVar17);
  }
  return;
}


