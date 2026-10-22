/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x485d360
 * Label: EditorCustomBiomeSource::vslot5
 * Body:  [[0485d360, 0485d520]]
 * Ghidra: wg_EditorCustomBiomeSource__vslot5
 */


undefined8 wg_EditorCustomBiomeSource__vslot5(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined8 uStack_34;
  undefined8 uStack_2c;
  int iStack_24;
  
  lVar4 = func_0x0eee2f30(param_2,0x3a);
  if (lVar4 == 0) {
    iVar3 = func_0x0eee32d0(param_2,&UNK_0138fd53,&uStack_3c,&uStack_40,&uStack_44,&uStack_48);
    if (iVar3 != 4) {
      return 0;
    }
    if ((uStack_48 < 0x100 && uStack_44 < 0x100) && (uStack_40 < 0x100 && uStack_3c < 0x100)) {
      *(char *)param_1 = (char)uStack_3c;
      *(char *)((long)param_1 + 1) = (char)uStack_40;
      *(char *)((long)param_1 + 2) = (char)uStack_44;
      *(char *)((long)param_1 + 3) = (char)uStack_48;
      return 4;
    }
    return 0;
  }
  uStack_2c = -0x100000000;
  iStack_24 = 0;
  iVar3 = func_0x0477bee0(param_2,0x3a,0,&UNK_0485dfd0,&uStack_3c);
  if (iVar3 == 0) {
    return 0;
  }
  uVar2 = uStack_2c._4_4_;
  uVar5 = (ulong)uStack_2c._4_4_;
  uVar1 = (uint)uStack_2c;
  lVar4 = (long)(int)(uint)uStack_2c;
  if (uVar5 == 0xffffffff) {
    if ((uint)uStack_2c != 0x10) {
      return 0;
    }
  }
  else {
    if ((uint)uStack_2c == 0x10) {
      return 0;
    }
    if (3 < iStack_24) {
      return 0;
    }
    if (iStack_24 == 2) {
      if ((uint)uStack_2c != uStack_2c._4_4_ && uVar5 != 0) {
        return 0;
      }
    }
    else if (iStack_24 == 3) {
      if (0 < (int)(uint)uStack_2c) {
        return 0;
      }
    }
    else if ((uint)uStack_2c == uStack_2c._4_4_ || uVar5 == 0) {
      return 0;
    }
    if (-1 < uStack_2c) {
      func_0x0eee2f00(param_1,&uStack_3c,uVar5);
      func_0x0eee2dd0((long)param_1 + uVar5,0,0x10 - lVar4);
      if (uVar1 == uVar2) {
        return 0x10;
      }
      func_0x0eee2f00((((long)param_1 + uVar5) - lVar4) + 0x10,(long)&uStack_3c + uVar5,
                      (long)(int)(uVar1 - uVar2));
      return 0x10;
    }
  }
  *param_1 = CONCAT44(uStack_38,uStack_3c);
  param_1[1] = uStack_34;
  return 0x10;
}


