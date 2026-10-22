/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca7d420 (ELF vaddr 0xc97d420)
 * Label: callee-of:0xc967b50
 * Body:  [[0ca7d420, 0ca7d4be] [0ca7d4c0, 0ca7d562] [0ca7d570, 0ca7d5fb]]
 * Ghidra: FUN_0ca7d420
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0ca7d420(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  
  if (param_2 == 0) {
    lVar1 = *param_1;
    *param_1 = 0;
    if (lVar1 != 0) {
      func_0x0412a280(lVar1,param_1[1] << 3);
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x04882eb0();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar1 = param_2 * 8;
    lVar4 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar1);
    if (lVar4 == 0) {
      func_0x0eec74c0(lVar1,0);
      lVar2 = *param_1;
      *param_1 = 0;
    }
    else {
      lVar2 = *param_1;
      *param_1 = lVar4;
    }
    if (lVar2 != 0) {
      func_0x0412a280(lVar2,param_1[1] << 3);
      lVar4 = *param_1;
    }
    param_1[1] = param_2;
    memset(lVar4,0,lVar1);
    plVar7 = (long *)param_1[2];
    if (plVar7 != (long *)0x0) {
      uVar5 = plVar7[1];
      uVar6 = param_2 - 1;
      if ((param_2 & uVar6) == 0) {
        *(long **)(lVar4 + (uVar5 & uVar6) * 8) = param_1 + 2;
        uVar5 = uVar5 & uVar6;
        while (plVar9 = plVar7, plVar7 = (long *)*plVar9, plVar7 != (long *)0x0) {
          uVar8 = plVar7[1] & uVar6;
          if (uVar8 != uVar5) {
            if (*(long *)(lVar4 + uVar8 * 8) == 0) {
              *(long **)(lVar4 + uVar8 * 8) = plVar9;
              uVar5 = uVar8;
            }
            else {
              *plVar9 = *plVar7;
              *plVar7 = **(undefined8 **)(lVar4 + uVar8 * 8);
              **(long **)(lVar4 + uVar8 * 8) = (long)plVar7;
              plVar7 = plVar9;
            }
          }
        }
      }
      else {
        if (param_2 <= uVar5) {
          if ((uVar5 | param_2) >> 0x20 == 0) {
            uVar5 = (uVar5 & 0xffffffff) % (param_2 & 0xffffffff);
          }
          else {
            uVar5 = uVar5 % param_2;
          }
        }
        *(long **)(lVar4 + uVar5 * 8) = param_1 + 2;
        plVar9 = (long *)*plVar7;
        while (plVar9 != (long *)0x0) {
          uVar6 = plVar9[1];
          if (param_2 <= uVar6) {
            if ((uVar6 | param_2) >> 0x20 == 0) {
              uVar6 = (uVar6 & 0xffffffff) % (param_2 & 0xffffffff);
            }
            else {
              uVar6 = uVar6 % param_2;
            }
          }
          if (uVar6 != uVar5) {
            if (*(long *)(lVar4 + uVar6 * 8) == 0) {
              *(long **)(lVar4 + uVar6 * 8) = plVar7;
              uVar5 = uVar6;
            }
            else {
              *plVar7 = *plVar9;
              *plVar9 = **(long **)(lVar4 + uVar6 * 8);
              **(undefined8 **)(lVar4 + uVar6 * 8) = plVar9;
              plVar9 = plVar7;
            }
          }
          plVar7 = plVar9;
          plVar9 = (long *)*plVar7;
        }
      }
    }
  }
  return;
}


