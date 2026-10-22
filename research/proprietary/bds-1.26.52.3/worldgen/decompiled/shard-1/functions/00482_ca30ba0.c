/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcb30ba0 (ELF vaddr 0xca30ba0)
 * Label: callee-of:0xca314e0
 * Body:  [[0cb30ba0, 0cb30bd1] [0cb30be0, 0cb30e1a]]
 * Ghidra: FUN_0cb30ba0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0cb30ba0(long param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  int iVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined4 *puVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  bool bVar22;
  
  lVar8 = pthread_self();
  lVar10 = *(long *)(param_1 + 0x40);
  LOCK();
  lVar17 = *(long *)(param_1 + 0x50);
  bVar22 = lVar10 == lVar17;
  if (bVar22) {
    *(long *)(param_1 + 0x50) = lVar8;
    lVar17 = lVar10;
  }
  UNLOCK();
  if (!bVar22) {
    iVar13 = 3000;
    do {
      while( true ) {
        if ((lVar17 == lVar8) && (iVar7 = *(int *)(param_1 + 0x48) + 1, iVar7 != -1)) {
          *(int *)(param_1 + 0x48) = iVar7;
          puVar20 = *(undefined8 **)(param_1 + 0x60);
          puVar14 = *(undefined8 **)(param_1 + 0x68);
          if (puVar20 < puVar14) goto LAB_0cb30c28;
          goto LAB_0cb30c50;
        }
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        lVar10 = *(long *)(param_1 + 0x40);
        LOCK();
        lVar17 = *(long *)(param_1 + 0x50);
        bVar22 = lVar10 == lVar17;
        if (bVar22) {
          *(long *)(param_1 + 0x50) = lVar8;
          lVar17 = lVar10;
        }
        UNLOCK();
        if (bVar22) goto LAB_0cb30c14;
      }
      func_0x0eee35d0();
      iVar13 = 0;
      lVar10 = *(long *)(param_1 + 0x40);
      LOCK();
      lVar17 = *(long *)(param_1 + 0x50);
      bVar22 = lVar10 == lVar17;
      if (bVar22) {
        *(long *)(param_1 + 0x50) = lVar8;
        lVar17 = lVar10;
      }
      UNLOCK();
    } while (!bVar22);
  }
LAB_0cb30c14:
  *(undefined4 *)(param_1 + 0x48) = 1;
  puVar20 = *(undefined8 **)(param_1 + 0x60);
  puVar14 = *(undefined8 **)(param_1 + 0x68);
  if (puVar20 < puVar14) {
LAB_0cb30c28:
    *puVar20 = *param_2;
    *(undefined1 *)(puVar20 + 1) = param_3;
    puVar21 = puVar20 + 2;
LAB_0cb30d5e:
    *(undefined8 **)(param_1 + 0x60) = puVar21;
    LOCK();
    *(int *)(param_1 + 0xcc) = *(int *)(param_1 + 0xcc) + 1;
    UNLOCK();
    if (*(long *)(param_1 + 0x50) == lVar8) {
      iVar13 = *(int *)(param_1 + 0x48);
      if (iVar13 == 1) {
        *(undefined4 *)(param_1 + 0x48) = 0;
        *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x40);
        return;
      }
      if (iVar13 != 0) {
        *(int *)(param_1 + 0x48) = iVar13 + -1;
        return;
      }
    }
    cVar6 = func_0x0eeddcf0(&UNK_01239425,&UNK_01198d5e,0x6d,&UNK_0126e3df,&UNK_0121f006);
    if (cVar6 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
    return;
  }
LAB_0cb30c50:
  puVar1 = *(undefined8 **)(param_1 + 0x58);
  lVar17 = (long)puVar20 - (long)puVar1;
  uVar9 = (lVar17 >> 4) + 1;
  if (uVar9 >> 0x3c == 0) {
    uVar15 = (long)puVar14 - (long)puVar1;
    uVar18 = (long)uVar15 >> 3;
    if ((ulong)((long)uVar15 >> 3) <= uVar9) {
      uVar18 = uVar9;
    }
    if (0x7fffffffffffffef < uVar15) {
      uVar18 = 0xfffffffffffffff;
    }
    if (uVar18 < 0x1000000000000000) {
      lVar19 = uVar18 * 0x10;
      lVar10 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar19);
      if (lVar10 == 0) {
        func_0x0eec74c0(lVar19,0);
      }
      *(undefined8 *)(lVar10 + lVar17) = *param_2;
      *(undefined1 *)(lVar10 + 8 + lVar17) = param_3;
      puVar21 = (undefined8 *)(lVar10 + lVar17 + 0x10);
      puVar11 = (undefined4 *)(lVar10 + lVar17 + (lVar17 >> 4) * -0x10);
      puVar16 = puVar11;
      for (puVar14 = puVar1; puVar14 != puVar20; puVar14 = puVar14 + 2) {
        uVar3 = *(undefined4 *)((long)puVar14 + 4);
        uVar4 = *(undefined4 *)(puVar14 + 1);
        uVar5 = *(undefined4 *)((long)puVar14 + 0xc);
        *puVar16 = *(undefined4 *)puVar14;
        puVar16[1] = uVar3;
        puVar16[2] = uVar4;
        puVar16[3] = uVar5;
        puVar16 = puVar16 + 4;
      }
      *(undefined4 **)(param_1 + 0x58) = puVar11;
      *(undefined8 **)(param_1 + 0x60) = puVar21;
      *(long *)(param_1 + 0x68) = lVar19 + lVar10;
      if (puVar1 != (undefined8 *)0x0) {
        func_0x0412a280(puVar1,uVar15);
      }
      goto LAB_0cb30d5e;
    }
  }
  else {
    func_0x0cb4bcc0();
  }
  uVar12 = func_0x04882eb0();
  uVar12 = func_0x04882e20(uVar12);
  func_0x0eee0720(param_1 + 0x40);
  uVar12 = _Unwind_Resume(uVar12);
  func_0x04882e20(uVar12);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


