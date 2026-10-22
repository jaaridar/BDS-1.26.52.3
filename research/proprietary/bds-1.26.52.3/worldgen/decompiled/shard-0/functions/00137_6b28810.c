/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6c28810 (ELF vaddr 0x6b28810)
 * Label: string:Failed to generate jigsaw.
 * Body:  [[06c28810, 06c28866] [06c28870, 06c28936] [06c28940, 06c28be4] [06c28bf0, 06c28c11]]
 * Ghidra: FUN_06c28810
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_06c28810(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  long *plVar5;
  uint6 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  ulong *puVar16;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined4 *puStack_1c0;
  undefined1 auStack_1b8 [4];
  undefined4 uStack_1b4;
  undefined8 uStack_1b0;
  code *pcStack_1a0;
  undefined8 *apuStack_170 [2];
  undefined *puStack_160;
  code *pcStack_158;
  undefined4 uStack_150;
  undefined1 uStack_14c;
  long lStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [24];
  code *pcStack_a0;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  code *pcStack_58;
  
  lVar2 = *param_2;
  lVar14 = param_2[1];
  lVar3 = param_2[2];
  lVar15 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  puVar16 = *(ulong **)(param_1 + 8);
  puVar13 = (undefined8 *)*puVar16;
  puVar12 = (undefined8 *)puVar16[1];
  if (puVar13 < puVar12) {
    do {
      if (lVar2 == lVar15) {
        puVar11 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (puVar11 == (undefined4 *)0x0) {
          FUN_0eec74c0(0x20,0);
        }
        uVar10 = _auStack_1b8;
        uVar9 = _UNK_012402f1;
        uStack_1d0 = 0x21;
        uStack_1c8 = 0x1a;
        *(ulong *)((long)puVar11 + 10) =
             CONCAT26(_UNK_012402ef,CONCAT42(_UNK_012402eb,_DAT_012402e9));
        *(undefined8 *)((long)puVar11 + 0x12) = uVar9;
        uVar8 = _UNK_012402eb;
        uVar7 = _UNK_012402e3;
        uVar4 = CONCAT22(_DAT_012402e9,_UNK_012402e7);
        *puVar11 = _DAT_012402df;
        puVar11[1] = uVar7;
        puVar11[2] = uVar4;
        puVar11[3] = uVar8;
        *(undefined1 *)((long)puVar11 + 0x1a) = 0;
        _auStack_1b8 = CONCAT41(_DAT_013f776f,10);
        uVar6 = CONCAT15(DAT_013f7773,_auStack_1b8);
        uStack_1b4._3_1_ = SUB81(uVar10,7);
        _auStack_1b8 = (uint7)uVar6;
        puStack_1c0 = puVar11;
        func_0x0d858ce0(apuStack_170,auStack_1b8,&uStack_1d0);
        func_0x05e91e00(auStack_1b8,apuStack_170);
        func_0x0d81d7e0(auStack_c0,puVar13,auStack_1b8);
        if (pcStack_1a0 != (code *)0x0) {
          (*pcStack_1a0)(auStack_1b8);
        }
        if (pcStack_a0 != (code *)0x0) {
          (*pcStack_a0)(auStack_b8);
        }
        func_0x048fb670(apuStack_170);
        func_0x0412a280(puVar11,0x20);
      }
      else {
        lVar15 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
        if (lVar15 == 0) {
          func_0x048b0de0(auStack_1b8,&uStack_1d0);
          _DAT_0f54fd90 = auStack_1b8;
          uRam000000000f54fd94 = uStack_1b4;
          uVar4 = (undefined4)uStack_1b0;
          uVar7 = uStack_1b0._4_4_;
          _auStack_1b8 = 0;
          uStack_1b0 = (long *)0x0;
          plVar5 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
          _DAT_0f54fd98 = uVar4;
          uRam000000000f54fd9c = uVar7;
          if (plVar5 != (long *)0x0) {
            LOCK();
            plVar1 = plVar5 + 1;
            lVar15 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar15 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
              func_0x0412c2d0(plVar5);
              plVar5 = uStack_1b0;
              if (uStack_1b0 != (long *)0x0) {
                LOCK();
                plVar1 = uStack_1b0 + 1;
                lVar15 = *plVar1;
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (lVar15 == 0) {
                  (**(code **)(*uStack_1b0 + 0x10))(uStack_1b0);
                  func_0x0412c2d0(plVar5);
                }
              }
            }
          }
          lVar15 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
        }
        apuStack_170[0] = (undefined8 *)0x0;
        puStack_160 = &UNK_06c28e90;
        uStack_150 = 0xcf81dea7;
        pcStack_158 = (code *)&UNK_06c29590;
        uStack_14c = 1;
        puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
        if (puVar12 == (undefined8 *)0x0) {
          FUN_0eec74c0(0x18,0);
        }
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar12[2] = 0;
        func_0x0633a970(puVar12,lVar2,lVar14,(lVar14 - lVar2 >> 3) * -0x71c71c71c71c71c7);
        uStack_140 = 0;
        puStack_138 = &UNK_06c28d00;
        apuStack_170[0] = puVar12;
        lStack_148 = lVar15;
        func_0x0d81d5c0(auStack_78,puVar13,apuStack_170);
        if (pcStack_158 != (code *)0x0) {
          (*pcStack_158)(apuStack_170);
        }
        lVar15 = lVar14;
        if (pcStack_58 != (code *)0x0) {
          (*pcStack_58)(auStack_70);
        }
      }
      puVar13 = puVar13 + 10;
      puVar16 = *(ulong **)(param_1 + 8);
      puVar12 = (undefined8 *)puVar16[1];
    } while (puVar13 < puVar12);
    puVar13 = (undefined8 *)*puVar16;
  }
  while (puVar13 != puVar12) {
    puVar12 = puVar12 + -10;
    (**(code **)*puVar12)(puVar12);
  }
  puVar16[1] = (ulong)puVar13;
  if (lVar2 != 0) {
    for (; lVar2 != lVar14; lVar14 = lVar14 + -0x48) {
      if ((*(byte *)(lVar14 + -0x38) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar14 + -0x28),
                        *(ulong *)(lVar14 + -0x38) & 0xfffffffffffffffe);
      }
    }
    func_0x0412a280(lVar2,lVar3 - lVar2);
  }
  return;
}



/* ---- referenced strings ----
 * 0x12402df  Failed to generate jigsaw.
 * 0x12402e9  generate jigsaw.
 * 0x13f776f  Error
 */
