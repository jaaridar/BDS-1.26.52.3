/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd3349c0 (ELF vaddr 0xd2349c0)
 * Label: StructurePoolBlockPredicateCappedRandomBlockReplacement::vslot7
 * Body:  [[0d3349c0, 0d334a8a] [0d334a90, 0d334aac] [0d334ab0, 0d334acd] [0d334ad0, 0d334afb] [0d334b00, 0d334b19] [0d334b20, 0d334b77]]
 * Ghidra: wg_StructurePoolBlockPredicateCappedRandomBlockReplacement__vslot7
 */


void wg_StructurePoolBlockPredicateCappedRandomBlockReplacement__vslot7
               (long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  undefined4 *puVar8;
  long *plVar9;
  bool bVar10;
  undefined4 uStack_2c;
  
  func_0x0ee47730(param_2,&UNK_013be0f5,0x1e);
  plVar6 = *(long **)(param_1 + 0x10);
  while( true ) {
    if (plVar6 == (long *)(param_1 + 0x18)) {
      puVar8 = *(undefined4 **)(param_1 + 0x28);
      puVar2 = *(undefined4 **)(param_1 + 0x30);
      if (puVar8 != puVar2) {
        do {
          uStack_2c = *puVar8;
          func_0x0ee47730(param_2,&uStack_2c,4);
          uStack_2c = puVar8[1];
          func_0x0ee47730(param_2,&uStack_2c,4);
          uStack_2c = puVar8[2];
          func_0x0ee47730(param_2,&uStack_2c,4);
          puVar8 = puVar8 + 3;
        } while (puVar8 != puVar2);
      }
      uStack_2c = *(undefined4 *)(param_1 + 8);
      func_0x0ee47730(param_2,&uStack_2c,4);
      return;
    }
    bVar1 = *(byte *)(plVar6 + 5);
    if ((bVar1 & 1) == 0) {
      uVar7 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar7 = plVar6[6];
    }
    if (uVar7 == 0xffffffffffffffff) break;
    if ((bVar1 & 1) == 0) {
      lVar3 = (long)plVar6 + 0x29;
    }
    else {
      lVar3 = plVar6[7];
    }
    if ((uVar7 != 0) && (lVar3 == 0)) break;
    func_0x0ee47730(param_2);
    bVar1 = *(byte *)(plVar6 + 10);
    if ((bVar1 & 1) == 0) {
      uVar7 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar7 = plVar6[0xb];
    }
    if (uVar7 == 0xffffffffffffffff) break;
    if ((bVar1 & 1) == 0) {
      lVar3 = (long)plVar6 + 0x51;
    }
    else {
      lVar3 = plVar6[0xc];
    }
    if ((uVar7 != 0) && (lVar3 == 0)) break;
    func_0x0ee47730(param_2);
    plVar5 = (long *)plVar6[1];
    plVar9 = plVar6;
    if ((long *)plVar6[1] == (long *)0x0) {
      do {
        plVar6 = (long *)plVar9[2];
        bVar10 = plVar9 != (long *)*plVar6;
        plVar9 = plVar6;
      } while (bVar10);
    }
    else {
      do {
        plVar6 = plVar5;
        plVar5 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
    }
  }
  func_0x04890760();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


