/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcae2040 (ELF vaddr 0xc9e2040)
 * Label: callee-of:0x517ab30
 * Body:  [[0cae2040, 0cae208c] [0cae2090, 0cae219b] [0cae21a0, 0cae2204]]
 * Ghidra: FUN_0cae2040
 */


void FUN_0cae2040(long param_1,ulong *param_2,short param_3)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  short sVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  short sVar11;
  ulong uVar12;
  undefined8 uStack_68;
  long *plStack_60;
  long *plStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar9 = *param_2;
  uVar1 = param_2[1];
  lVar5 = func_0x0cc41df0(0xf6ff9e0,&DAT_0f6eaec0,1);
  if (uVar9 < uVar1) {
    sVar7 = (short)*(uint *)((long)param_2 + 0x14) + -1;
    uVar12 = 0;
    do {
      uVar8 = (long)sVar7;
      if ((short)uVar12 < sVar7) {
        do {
          if (*(long *)(uVar9 + uVar8 * 8) != lVar5) {
            uVar12 = uVar8 & 0xffffffff;
          }
          uVar8 = uVar8 - 1;
        } while ((long)(short)uVar12 < (long)uVar8);
      }
      sVar11 = (short)uVar12;
      uVar9 = uVar9 + (ulong)*(uint *)((long)param_2 + 0x14) * 8;
    } while (uVar9 < uVar1);
  }
  else {
    sVar11 = 0;
  }
  sVar7 = (short)*(int *)((long)param_2 + 0x1c);
  sVar11 = sVar11 + sVar7;
  if (*(int *)((long)param_2 + 0x1c) != (int)sVar11) {
    plStack_58 = (long *)0x0;
    lStack_50 = 0;
    uStack_68 = 0;
    plStack_60 = (long *)0x0;
    uStack_48 = 0;
    func_0x0cae2210(&uStack_68,1,&uStack_48);
    sVar11 = (short)((uint)(int)(short)(sVar11 + (param_3 - sVar7)) >> 4);
    sVar7 = (short)((uint)(int)param_3 >> 4);
    if (sVar7 != (short)(sVar11 + 1)) {
      lVar5 = ((long)sVar11 - (long)sVar7) + 1;
      lVar10 = (long)sVar7 * 0x68;
      sVar11 = 0;
      do {
        if (*plStack_60 == 0) {
          uVar6 = func_0x04890760();
          func_0x0cae26f0(&uStack_68);
          func_0x0eee2d70(uVar6);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uStack_40 = 0x1000;
        lStack_38 = *plStack_60;
        func_0x0ca96330(*(long *)(param_1 + 0x108) + lVar10,param_2,(int)sVar11,&uStack_40);
        sVar11 = sVar11 + 0x10;
        lVar10 = lVar10 + 0x68;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    plVar4 = plStack_60;
    plVar3 = plStack_58;
    if (plStack_60 != (long *)0x0) {
      for (; plVar4 != plVar3; plVar3 = plVar3 + -3) {
        lVar5 = plVar3[-3];
        if (lVar5 != 0) {
          plVar3[-2] = lVar5;
          func_0x0412a280(lVar5,plVar3[-1] - lVar5);
        }
      }
      plStack_58 = plVar4;
      func_0x0412a280(plStack_60,lStack_50 - (long)plStack_60);
    }
  }
  return;
}


