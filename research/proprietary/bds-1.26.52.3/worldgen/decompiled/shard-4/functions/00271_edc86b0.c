/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xeec86b0 (ELF vaddr 0xedc86b0)
 * Label: callee-of:0xc961580
 * Body:  [[0eec86b0, 0eec87f7] [0eec8800, 0eec8847] [0eec8850, 0eec8a1e]]
 * Ghidra: FUN_0eec86b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0eec86b0(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  ulong *puVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  if (_DAT_0f7b9d68 == 0) {
    return;
  }
  if (*(long *)(param_2 + 8) == 0) {
    return;
  }
  lVar4 = func_0x0417cc60();
  if (*(char *)(param_3 + 0x28) == '\0') {
    uVar9 = func_0x048a88b0();
    uVar9 = func_0x04882e20(uVar9);
    func_0x06cfcdf0(&uStack_40);
    uVar9 = _Unwind_Resume(uVar9);
    uVar9 = func_0x04882e20(uVar9);
    uVar9 = func_0x04882e20(uVar9);
    func_0x0525af10(&uStack_40);
    _Unwind_Resume(uVar9);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar4 = lVar4 - *(long *)(param_2 + 8);
  uVar9 = *(undefined8 *)(param_3 + 0x18);
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  uVar5 = pthread_self();
  uStack_40 = 0xf7b9de8;
  uStack_38 = 1;
  FUN_0412d550();
  if (_DAT_0f7b9dc8 == 0) goto LAB_0eec88b1;
  uVar6 = _DAT_0f7b9dc8 - (_DAT_0f7b9dc8 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 >> 2 & 0x3333333333333333) + (uVar6 & 0x3333333333333333);
  uVar6 = ((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  if (uVar6 >> 0x38 < 2) {
    uVar10 = _DAT_0f7b9dc8 - 1 & uVar5;
    plVar11 = *(long **)(_DAT_0f7b9dc0 + uVar10 * 8);
  }
  else {
    uVar10 = uVar5;
    if (_DAT_0f7b9dc8 <= uVar5) {
      if ((uVar5 | _DAT_0f7b9dc8) >> 0x20 == 0) {
        uVar10 = (uVar5 & 0xffffffff) % (_DAT_0f7b9dc8 & 0xffffffff);
        plVar11 = *(long **)(_DAT_0f7b9dc0 + uVar10 * 8);
        goto joined_r0x0eec88ab;
      }
      uVar10 = uVar5 % _DAT_0f7b9dc8;
    }
    plVar11 = *(long **)(_DAT_0f7b9dc0 + uVar10 * 8);
  }
joined_r0x0eec88ab:
  if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
    if ((byte)(uVar6 >> 0x38) < 2) {
      do {
        if (plVar11[1] == uVar5) {
          if (uVar5 == plVar11[2]) {
LAB_0eec8871:
            func_0x0eec96c0(uVar9,uVar1,lVar4,plVar11[3]);
            FUN_0412d610(0xf7b9de8);
            return;
          }
        }
        else if ((plVar11[1] & _DAT_0f7b9dc8 - 1) != uVar10) break;
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
    }
    else {
      do {
        uVar6 = plVar11[1];
        if (uVar6 == uVar5) {
          if (uVar5 == plVar11[2]) goto LAB_0eec8871;
        }
        else {
          if (_DAT_0f7b9dc8 <= uVar6) {
            if ((uVar6 | _DAT_0f7b9dc8) >> 0x20 == 0) {
              if ((uVar6 & 0xffffffff) % (_DAT_0f7b9dc8 & 0xffffffff) == uVar10) goto LAB_0eec8806;
              break;
            }
            uVar6 = uVar6 % _DAT_0f7b9dc8;
          }
          if (uVar6 != uVar10) break;
        }
LAB_0eec8806:
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
    }
  }
LAB_0eec88b1:
  FUN_0412d610(0xf7b9de8);
  uStack_40 = 0xf7b9de8;
  uStack_38 = 1;
  func_0x0412d450(0xf7b9de8);
  puVar7 = (undefined8 *)func_0x0eec8ef0(uVar5);
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xa0);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(0xa0,0);
  }
  puVar8[0x12] = 0;
  puVar8[0x13] = 0;
  puVar8[0x10] = 0;
  puVar8[0x11] = 0;
  puVar8[0xe] = 0;
  puVar8[0xf] = 0;
  puVar8[0xc] = 0;
  puVar8[0xd] = 0;
  puVar8[10] = 0;
  puVar8[0xb] = 0;
  puVar8[8] = 0;
  puVar8[9] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  puVar8[4] = 0;
  puVar8[5] = 0;
  puVar8[2] = 0;
  puVar8[3] = 0;
  *puVar8 = 0;
  puVar8[1] = 0;
  puVar2 = (ulong *)*puVar7;
  *puVar7 = puVar8;
  if (puVar2 != (ulong *)0x0) {
    uVar5 = puVar2[0xc];
    if (uVar5 != 0) {
      puVar2[0xd] = uVar5;
      func_0x0412a280(uVar5,puVar2[0xe] - uVar5);
    }
    uVar5 = puVar2[9];
    if (uVar5 != 0) {
      puVar2[10] = uVar5;
      func_0x0412a280(uVar5,puVar2[0xb] - uVar5);
    }
    if ((*puVar2 & 1) != 0) {
      func_0x0412a280(puVar2[2],*puVar2 & 0xfffffffffffffffe);
    }
    func_0x0412a280(puVar2,0xa0);
    puVar8 = (undefined8 *)*puVar7;
  }
  func_0x0eec96c0(uVar9,uVar1,lVar4,puVar8);
  func_0x0412d520(0xf7b9de8);
  return;
}


