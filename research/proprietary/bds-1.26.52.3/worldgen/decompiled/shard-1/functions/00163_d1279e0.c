/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2279e0 (ELF vaddr 0xd1279e0)
 * Label: callee-of:0x517cd10
 * Body:  [[0d2279e0, 0d227b34] [0d227b40, 0d227c2a] [0d227c30, 0d227cb9]]
 * Ghidra: FUN_0d2279e0
 */


long * FUN_0d2279e0(long *param_1,ulong *param_2)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  
  uVar2 = param_1[1];
  if (uVar2 == 0) {
    return (long *)0x0;
  }
  uVar3 = *param_2;
  uVar6 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 >> 2 & 0x3333333333333333) + (uVar6 & 0x3333333333333333);
  uVar6 = ((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  if (uVar6 >> 0x38 < 2) {
    uVar9 = uVar2 - 1 & uVar3;
    plVar10 = *(long **)(*param_1 + uVar9 * 8);
  }
  else {
    uVar9 = uVar3;
    if (uVar2 <= uVar3) {
      if ((uVar3 | uVar2) >> 0x20 == 0) {
        uVar9 = (uVar3 & 0xffffffff) % (uVar2 & 0xffffffff);
        plVar10 = *(long **)(*param_1 + uVar9 * 8);
        goto joined_r0x0d227c95;
      }
      uVar9 = uVar3 % uVar2;
    }
    plVar10 = *(long **)(*param_1 + uVar9 * 8);
  }
joined_r0x0d227c95:
  if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
    if ((byte)(uVar6 >> 0x38) < 2) {
      do {
        if (uVar3 == plVar10[1]) {
          if (plVar10[2] == uVar3) {
            plVar8 = plVar10 + 2;
            if (((ulong *)plVar10[6] == param_2) && ((long *)param_2[4] == plVar8)) {
              return plVar10;
            }
            bVar1 = *(byte *)(plVar10 + 3);
            if ((bVar1 & 1) == 0) {
              uVar6 = (ulong)(bVar1 >> 1);
              uVar7 = (ulong)(byte)param_2[1];
              if (((byte)param_2[1] & 1) != 0) goto LAB_0d227c47;
LAB_0d227c20:
              if (uVar6 != uVar7 >> 1) goto LAB_0d227bd3;
            }
            else {
              uVar6 = plVar10[4];
              uVar7 = (ulong)(byte)param_2[1];
              if (((byte)param_2[1] & 1) == 0) goto LAB_0d227c20;
LAB_0d227c47:
              if (uVar6 != param_2[2]) goto LAB_0d227bd3;
            }
            if ((bVar1 & 1) == 0) {
              lVar4 = (long)plVar10 + 0x19;
            }
            else {
              lVar4 = plVar10[5];
            }
            uVar6 = (long)param_2 + 9U;
            if ((uVar7 & 1) != 0) {
              uVar6 = param_2[3];
            }
            iVar5 = func_0x0eee3000(lVar4,uVar6);
            if (iVar5 == 0) {
LAB_0d227cb0:
              plVar10[6] = (long)param_2;
              param_2[4] = (ulong)plVar8;
              return plVar10;
            }
          }
LAB_0d227bd3:
          plVar10[6] = 0;
        }
        else if ((plVar10[1] & uVar2 - 1) != uVar9) {
          return (long *)0x0;
        }
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
    }
    else {
      do {
        uVar6 = plVar10[1];
        if (uVar3 == uVar6) {
          if (plVar10[2] == uVar3) {
            plVar8 = plVar10 + 2;
            if (((ulong *)plVar10[6] == param_2) && ((long *)param_2[4] == plVar8)) {
              return plVar10;
            }
            bVar1 = *(byte *)(plVar10 + 3);
            if ((bVar1 & 1) == 0) {
              uVar6 = (ulong)(bVar1 >> 1);
              uVar7 = (ulong)(byte)param_2[1];
              if (((byte)param_2[1] & 1) != 0) goto LAB_0d227b70;
LAB_0d227b2a:
              if (uVar6 != uVar7 >> 1) goto LAB_0d227add;
            }
            else {
              uVar6 = plVar10[4];
              uVar7 = (ulong)(byte)param_2[1];
              if (((byte)param_2[1] & 1) == 0) goto LAB_0d227b2a;
LAB_0d227b70:
              if (uVar6 != param_2[2]) goto LAB_0d227add;
            }
            if ((bVar1 & 1) == 0) {
              lVar4 = (long)plVar10 + 0x19;
            }
            else {
              lVar4 = plVar10[5];
            }
            uVar6 = (long)param_2 + 9U;
            if ((uVar7 & 1) != 0) {
              uVar6 = param_2[3];
            }
            iVar5 = func_0x0eee3000(lVar4,uVar6);
            if (iVar5 == 0) goto LAB_0d227cb0;
          }
LAB_0d227add:
          plVar10[6] = 0;
        }
        else {
          if (uVar2 <= uVar6) {
            if ((uVar6 | uVar2) >> 0x20 == 0) {
              if ((uVar6 & 0xffffffff) % (uVar2 & 0xffffffff) != uVar9) {
                return (long *)0x0;
              }
              goto LAB_0d227ae5;
            }
            uVar6 = uVar6 % uVar2;
          }
          if (uVar6 != uVar9) {
            return (long *)0x0;
          }
        }
LAB_0d227ae5:
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
    }
  }
  return (long *)0x0;
}


