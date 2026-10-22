/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb9502f0 (ELF vaddr 0xb8502f0)
 * Label: string:Custom biome source with provided ID not found
 * Body:  [[0b9502f0, 0b95058b]]
 * Ghidra: FUN_0b9502f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_0b9502f0(undefined1 *param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined4 *puStack_108;
  long lStack_100;
  long lStack_f8;
  undefined1 uStack_f0;
  undefined4 uStack_ef;
  undefined1 uStack_eb;
  undefined1 uStack_ea;
  undefined1 auStack_d8 [176];
  
  plVar8 = (long *)func_0x0b950610(*(undefined8 *)(param_2 + 0x18));
  if (plVar8 == (long *)0x0) {
    puStack_108 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puStack_108 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    uVar3 = _UNK_014bd3e8;
    uStack_118 = 0x29;
    uStack_110 = 0x22;
    *(undefined8 *)(puStack_108 + 4) = _DAT_014bd3e0;
    *(undefined8 *)(puStack_108 + 6) = uVar3;
    uVar6 = _UNK_014bd3dc;
    uVar5 = _UNK_014bd3d8;
    uVar4 = _UNK_014bd3d4;
    *puStack_108 = _DAT_014bd3d0;
    puStack_108[1] = uVar4;
    puStack_108[2] = uVar5;
    puStack_108[3] = uVar6;
    *(undefined2 *)(puStack_108 + 8) = 0x656c;
    *(undefined1 *)((long)puStack_108 + 0x22) = 0;
    uStack_f0 = 10;
    uStack_ef = _DAT_013f776f;
    uStack_eb = DAT_013f7773;
    uStack_ea = 0;
    func_0x0d858ce0(auStack_d8,&uStack_f0,&uStack_118);
    *param_1 = 1;
    func_0x05e91e00(param_1 + 8,auStack_d8);
    func_0x048fb670(auStack_d8);
    if ((uStack_118 & 1) == 0) {
      return param_1;
    }
    func_0x0412a280(puStack_108,uStack_118 & 0xfffffffffffffffe);
    return param_1;
  }
  (**(code **)(*plVar8 + 0x20))(&lStack_100,plVar8,param_4);
  if ((lStack_f8 != 0) &&
     (plVar8 = (long *)func_0x0412c300(), lVar7 = lStack_100, plVar8 != (long *)0x0)) {
    LOCK();
    plVar1 = plVar8 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      func_0x0412c2d0(plVar8);
    }
    if (lVar7 != 0) {
      func_0x0b94ff60(param_1,*(undefined8 *)(param_2 + 0x50),*(undefined8 *)(param_2 + 0x58),
                      *param_3,param_3[1],lStack_100,lStack_f8);
      goto LAB_0b950541;
    }
  }
  puStack_108 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puStack_108 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uVar3 = _UNK_013bb019;
  uStack_118 = 0x31;
  uStack_110 = 0x2e;
  *(ulong *)((long)puStack_108 + 0x1e) = CONCAT62(_UNK_013bb013,_DAT_013bb011);
  *(undefined8 *)((long)puStack_108 + 0x26) = uVar3;
  uVar3 = CONCAT26(_DAT_013bb011,_UNK_013bb00b);
  *(undefined8 *)(puStack_108 + 4) = _DAT_013bb003;
  *(undefined8 *)(puStack_108 + 6) = uVar3;
  uVar6 = _UNK_013bafff;
  uVar5 = _UNK_013baffb;
  uVar4 = _UNK_013baff7;
  *puStack_108 = _DAT_013baff3;
  puStack_108[1] = uVar4;
  puStack_108[2] = uVar5;
  puStack_108[3] = uVar6;
  *(undefined1 *)((long)puStack_108 + 0x2e) = 0;
  uStack_f0 = 10;
  uStack_ef = _DAT_013f776f;
  uStack_eb = DAT_013f7773;
  uStack_ea = 0;
  func_0x0d858ce0(auStack_d8,&uStack_f0,&uStack_118);
  *param_1 = 1;
  func_0x05e91e00(param_1 + 8,auStack_d8);
  func_0x048fb670(auStack_d8);
  if ((uStack_118 & 1) != 0) {
    func_0x0412a280(puStack_108,uStack_118 & 0xfffffffffffffffe);
  }
LAB_0b950541:
  if (lStack_f8 != 0) {
    func_0x0412c2d0();
  }
  return param_1;
}



/* ---- referenced strings ----
 * 0x13baff3  Custom biome source with provided ID not found
 * 0x13bb003  rce with provided ID not found
 * 0x13bb011  ded ID not found
 * 0x13f776f  Error
 * 0x14bd3d0  Custom biome manager not available
 * 0x14bd3e0  ager not available
 */
