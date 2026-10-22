/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcad8200 (ELF vaddr 0xc9d8200)
 * Label: callee-of:0x51884e0
 * Body:  [[0412d6b0, 0412d6b4] [0cad8200, 0cad8397] [0eee2d60, 0eee2d65]]
 * Ghidra: FUN_0cad8200
 */


/* WARNING: Possible PIC construction at 0x0cad838a: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0cad838f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0cad8200(undefined4 *param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined4 *puVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  
  func_0x0412d680(0xf6f9da8);
  lVar10 = _DAT_0f6f9d90;
  if (_DAT_0f6f9dd0 != 0) {
    if (_DAT_0f6f9d98 < _DAT_0f6f9da0) {
      uVar2 = *param_1;
      uVar3 = param_1[1];
      uVar4 = param_1[2];
      uVar5 = param_1[3];
      uVar9 = *(undefined8 *)(param_1 + 6);
      *(undefined8 *)(_DAT_0f6f9d98 + 4) = *(undefined8 *)(param_1 + 4);
      *(undefined8 *)(_DAT_0f6f9d98 + 6) = uVar9;
      *_DAT_0f6f9d98 = uVar2;
      _DAT_0f6f9d98[1] = uVar3;
      _DAT_0f6f9d98[2] = uVar4;
      _DAT_0f6f9d98[3] = uVar5;
      _DAT_0f6f9d98 = _DAT_0f6f9d98 + 8;
    }
    else {
      lVar16 = (long)_DAT_0f6f9d98 - _DAT_0f6f9d90;
      uVar1 = (lVar16 >> 5) + 1;
      if (uVar1 >> 0x3b == 0) {
        uVar12 = (long)_DAT_0f6f9da0 - _DAT_0f6f9d90;
        uVar14 = (long)uVar12 >> 4;
        if ((ulong)((long)uVar12 >> 4) <= uVar1) {
          uVar14 = uVar1;
        }
        if (0x7fffffffffffffdf < uVar12) {
          uVar14 = 0x7ffffffffffffff;
        }
        if (uVar14 < 0x800000000000000) {
          lVar15 = uVar14 * 0x20;
          lVar11 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar15);
          if (lVar11 == 0) {
            func_0x0eec74c0(lVar15,0);
          }
          uVar2 = *param_1;
          uVar3 = param_1[1];
          uVar4 = param_1[2];
          uVar5 = param_1[3];
          uVar6 = param_1[5];
          uVar7 = param_1[6];
          uVar8 = param_1[7];
          puVar13 = (undefined4 *)(lVar11 + 0x10 + lVar16);
          *puVar13 = param_1[4];
          puVar13[1] = uVar6;
          puVar13[2] = uVar7;
          puVar13[3] = uVar8;
          puVar13 = (undefined4 *)(lVar11 + lVar16);
          *puVar13 = uVar2;
          puVar13[1] = uVar3;
          puVar13[2] = uVar4;
          puVar13[3] = uVar5;
          puVar13 = (undefined4 *)(lVar11 + lVar16 + 0x20);
          lVar17 = lVar16 + lVar11 + (lVar16 >> 5) * -0x20;
          func_0x0eee2f00(lVar17,lVar10,lVar16);
          _DAT_0f6f9d90 = lVar17;
          _DAT_0f6f9d98 = puVar13;
          _DAT_0f6f9da0 = (undefined4 *)(lVar15 + lVar11);
          if (lVar10 != 0) {
            func_0x0412a280(lVar10,uVar12);
            _DAT_0f6f9d98 = puVar13;
          }
          goto SUB_0412d6b0;
        }
      }
      else {
        func_0x0cb0b8b0();
      }
      func_0x04882eb0();
    }
  }
SUB_0412d6b0:
  (*(code *)PTR_pthread_mutex_unlock_0f546448)(0xf6f9da8);
  return;
}


