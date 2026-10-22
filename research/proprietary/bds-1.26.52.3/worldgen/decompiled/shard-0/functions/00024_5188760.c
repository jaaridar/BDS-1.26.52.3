/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5288760 (ELF vaddr 0x5188760)
 * Label: OverworldGeneratorMultinoise::vslot2
 * Body:  [[052884e0, 05288739] [05288760, 05288768]]
 * Ghidra: wg_OverworldGeneratorMultinoise__vslot2
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint wg_OverworldGeneratorMultinoise__vslot2(long param_1,undefined *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  long *in_FS_OFFSET;
  uint uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined1 uStack_68;
  long lStack_60;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined1 uStack_40;
  long lStack_38;
  
  if (PTR__ZTHN11ChunkSource17gPerfIsClientSideE_0f53c8c0 != (undefined *)0x0) {
    func_0x0eee3820();
  }
  uVar1 = *(undefined1 *)(*in_FS_OFFSET + -0xb67);
  puStack_50 = &UNK_011b8ea4;
  puStack_48 = &UNK_0144800b;
  uStack_40 = uVar1;
  lVar4 = func_0x0417cc60();
  puStack_78 = param_2;
  lStack_38 = lVar4;
  func_0x052586c0(param_1 + 0x898,&puStack_78);
  uVar10 = func_0x05286980(param_2,*(undefined8 *)(param_1 + 0xc30),*(undefined8 *)(param_1 + 0xc38)
                          );
  iVar2 = (int)*(short *)(*(long *)(param_1 + -0x48) + 0xa8);
  iVar5 = iVar2 >> 0x1f;
  iVar2 = iVar5 - iVar2;
  iVar6 = (int)*(short *)(*(long *)(param_1 + -0x48) + 0xaa);
  iVar8 = iVar6 >> 0x1f;
  iVar6 = iVar8 - iVar6;
  iVar3 = iVar6 + 7;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  iVar6 = iVar2 + 7;
  if (-1 < iVar2) {
    iVar6 = iVar2;
  }
  iVar3 = (((iVar8 + (iVar6 >> 3)) - (iVar3 >> 3)) - iVar5) + -0x2f;
  uVar7 = (iVar5 - (iVar6 >> 3)) * 8 + 0x138;
  iVar2 = 0x28;
  while( true ) {
    fVar11 = ((float)(int)uVar7 * _DAT_01198698 + _DAT_011983f0 + (float)uVar10) *
             (float)((ulong)uVar10 >> 0x20);
    fVar12 = fVar11 * *(float *)(&UNK_014f0a50 + (ulong)(0.0 < fVar11) * 4) + _DAT_0119880c;
    fVar13 = (float)iVar3 * _DAT_011986e0;
    fVar11 = _DAT_01198aa4;
    if ((0.0 <= fVar13) && (fVar11 = fVar12, fVar13 <= _DAT_011983f0)) {
      fVar11 = (fVar12 + _DAT_01198400) * fVar13 + _DAT_01198aa4;
    }
    fVar12 = (float)(iVar2 - 1U & 0xff) / _DAT_01198af0;
    uVar9 = -(uint)(_DAT_011983f0 < fVar12);
    if (_DAT_01198690 <
        (float)(uVar9 & (uint)fVar11 |
               ~uVar9 & (uint)((fVar11 + _DAT_01198c1c) * fVar12 + _DAT_01198358))) break;
    iVar3 = iVar3 + 1;
    uVar7 = uVar7 - 8;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
      uVar7 = 0x17fff;
LAB_052886ff:
      puStack_78 = &UNK_011b8ea4;
      puStack_70 = &UNK_0144800b;
      uStack_68 = uVar1;
      lStack_60 = func_0x0417cc60();
      lStack_60 = lStack_60 - lVar4;
      func_0x0cad8200(&puStack_78);
      return uVar7;
    }
  }
  uVar7 = uVar7 & 0xfff8 | 0x10000;
  goto LAB_052886ff;
}


