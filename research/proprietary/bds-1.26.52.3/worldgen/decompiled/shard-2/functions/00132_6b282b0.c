/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6c282b0 (ELF vaddr 0x6b282b0)
 * Label: string:Failed to set Jigsaw registry.
 * Body:  [[06c282b0, 06c28304] [06c28310, 06c2838d] [06c28390, 06c284b0] [06c284c0, 06c2850a]]
 * Ghidra: FUN_06c282b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_06c282b0(long param_1,long *param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined4 *puStack_1b8;
  undefined1 uStack_1b0;
  undefined4 uStack_1af;
  undefined1 uStack_1ab;
  undefined1 uStack_1aa;
  code *pcStack_198;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [24];
  code *pcStack_150;
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [24];
  code *pcStack_108;
  undefined1 auStack_e0 [24];
  code *pcStack_c8;
  
  lStack_1e8 = *param_2;
  lStack_1e0 = param_2[1];
  lStack_1d8 = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  puVar10 = *(ulong **)(param_1 + 8);
  puVar8 = (undefined8 *)*puVar10;
  puVar9 = (undefined8 *)puVar10[1];
  lVar2 = lStack_1e8;
  if (puVar8 < puVar9) {
    do {
      if (lStack_1e8 == lStack_1e0) {
        puVar7 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (puVar7 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x20,0);
        }
        uVar6 = _UNK_011d6def;
        uStack_1c8 = 0x21;
        uStack_1c0 = 0x1e;
        *(ulong *)((long)puVar7 + 0xe) = CONCAT62(_UNK_011d6de9,_DAT_011d6de7);
        *(undefined8 *)((long)puVar7 + 0x16) = uVar6;
        uVar5 = _UNK_011d6de1;
        uVar4 = _UNK_011d6ddd;
        uVar1 = CONCAT22(_DAT_011d6de7,_UNK_011d6de5);
        *puVar7 = _DAT_011d6dd9;
        puVar7[1] = uVar4;
        puVar7[2] = uVar5;
        puVar7[3] = uVar1;
        *(undefined1 *)((long)puVar7 + 0x1e) = 0;
        uStack_1b0 = 10;
        uStack_1ab = DAT_013f7773;
        uStack_1af = _DAT_013f776f;
        uStack_1aa = 0;
        puStack_1b8 = puVar7;
        func_0x0d858ce0(auStack_e0,&uStack_1b0,&uStack_1c8);
        func_0x05e91e00(&uStack_1b0,auStack_e0);
        func_0x0d81d7e0(auStack_170,puVar8,&uStack_1b0);
        if (pcStack_198 != (code *)0x0) {
          (*pcStack_198)(&uStack_1b0);
        }
        if (pcStack_150 != (code *)0x0) {
          (*pcStack_150)(auStack_168);
        }
        func_0x048fb670(auStack_e0);
        thunk_FUN_0ee326a0(puVar7,0x20);
      }
      else {
        func_0x06c285f0(auStack_e0,&lStack_1e8);
        func_0x0d81d5c0(auStack_128,puVar8,auStack_e0);
        if (pcStack_c8 != (code *)0x0) {
          (*pcStack_c8)(auStack_e0);
        }
        if (pcStack_108 != (code *)0x0) {
          (*pcStack_108)(auStack_120);
        }
      }
      puVar8 = puVar8 + 10;
      puVar10 = *(ulong **)(param_1 + 8);
      puVar9 = (undefined8 *)puVar10[1];
    } while (puVar8 < puVar9);
    puVar8 = (undefined8 *)*puVar10;
    lVar2 = lStack_1e8;
  }
  while (lStack_1e8 = lVar2, puVar8 != puVar9) {
    puVar9 = puVar9 + -10;
    (**(code **)*puVar9)(puVar9);
    lVar2 = lStack_1e8;
  }
  puVar10[1] = (ulong)puVar8;
  lVar3 = lStack_1e0;
  if (lVar2 != 0) {
    for (; lVar2 != lVar3; lVar3 = lVar3 + -0x18) {
      if ((*(byte *)(lVar3 + -0x18) & 1) != 0) {
        thunk_FUN_0ee326a0(*(undefined8 *)(lVar3 + -8),
                           *(ulong *)(lVar3 + -0x18) & 0xfffffffffffffffe);
      }
    }
    lStack_1e0 = lVar2;
    thunk_FUN_0ee326a0(lStack_1e8,lStack_1d8 - lStack_1e8);
  }
  return;
}



/* ---- referenced strings ----
 * 0x11d6dd9  Failed to set Jigsaw registry.
 * 0x11d6de7  Jigsaw registry.
 * 0x13f776f  Error
 */
