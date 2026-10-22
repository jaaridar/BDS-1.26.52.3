/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc965200
 * Label: Dimension::vslot13
 * Body:  [[0c965200, 0c965251] [0c965260, 0c96527e]]
 * Ghidra: wg_Dimension__vslot13
 */


undefined8 *
wg_Dimension__vslot13
          (undefined8 *param_1,long param_2,undefined8 param_3,ulong param_4,byte *param_5,
          ulong param_6)

{
  undefined8 uVar1;
  ushort uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  ulong in_R11;
  
  uVar2 = (ushort)param_4;
  if (in_R11 >> 0x38 < 2) {
    uVar5 = (ulong)((uint)param_4 & (int)param_6 - 1U);
  }
  else {
    uVar5 = param_4;
    if (param_6 <= param_4) {
      uVar5 = (ulong)(ushort)(uVar2 % (ushort)param_6);
    }
  }
  plVar4 = *(long **)(*(long *)(param_2 + 0x30) + uVar5 * 8);
  if ((plVar4 != (long *)0x0) && (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0)) {
    if ((byte)(in_R11 >> 0x38) < 2) {
      do {
        if (plVar4[1] == param_4) {
          if (*(ushort *)(plVar4 + 2) == uVar2) goto LAB_0c9652d5;
        }
        else if ((plVar4[1] & param_6 - 1) != uVar5) break;
        plVar4 = (long *)*plVar4;
      } while (plVar4 != (long *)0x0);
    }
    else {
      do {
        uVar3 = plVar4[1];
        if (uVar3 == param_4) {
          if (*(ushort *)(plVar4 + 2) == uVar2) goto LAB_0c9652d5;
        }
        else {
          if (param_6 <= uVar3) {
            if ((uVar3 | param_6) >> 0x20 == 0) {
              if ((uVar3 & 0xffffffff) % (param_6 & 0xffffffff) == uVar5) goto LAB_0c965296;
              break;
            }
            uVar3 = uVar3 % param_6;
          }
          if (uVar3 != uVar5) break;
        }
LAB_0c965296:
        plVar4 = (long *)*plVar4;
      } while (plVar4 != (long *)0x0);
    }
  }
LAB_0c9652dc:
  if ((*param_5 & 1) != 0) {
    func_0x0412e5e0(param_1,*(undefined8 *)(param_5 + 0x10),*(undefined8 *)(param_5 + 8));
    return param_1;
  }
  param_1[2] = *(undefined8 *)(param_5 + 0x10);
  uVar1 = *(undefined8 *)(param_5 + 8);
  *param_1 = *(undefined8 *)param_5;
  param_1[1] = uVar1;
  return param_1;
LAB_0c9652d5:
  param_5 = (byte *)(plVar4 + 3);
  goto LAB_0c9652dc;
}


