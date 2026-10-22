/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc9651f0
 * Label: Dimension::vslot9
 * Body:  [[0c9651f0, 0c965251] [0c965260, 0c965280] [0c965290, 0c96530a]]
 * Ghidra: wg_Dimension__vslot9
 */


undefined8 *
wg_Dimension__vslot9
          (undefined8 *param_1,long param_2,uint param_3,ulong param_4,byte *param_5,ulong param_6)

{
  undefined8 uVar1;
  uint in_EAX;
  ushort uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar2 = (ushort)param_4;
  uVar5 = (ulong)(in_EAX & param_3) * 0x101010101010101;
  if (uVar5 >> 0x38 < 2) {
    uVar4 = (ulong)((uint)param_4 & (int)param_6 - 1U);
  }
  else {
    uVar4 = param_4;
    if (param_6 <= param_4) {
      uVar4 = (ulong)(ushort)(uVar2 % (ushort)param_6);
    }
  }
  plVar3 = *(long **)(*(long *)(param_2 + 0x30) + uVar4 * 8);
  if ((plVar3 != (long *)0x0) && (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0)) {
    if ((byte)(uVar5 >> 0x38) < 2) {
      do {
        if (plVar3[1] == param_4) {
          if (*(ushort *)(plVar3 + 2) == uVar2) goto LAB_0c9652d5;
        }
        else if ((plVar3[1] & param_6 - 1) != uVar4) break;
        plVar3 = (long *)*plVar3;
      } while (plVar3 != (long *)0x0);
    }
    else {
      do {
        uVar5 = plVar3[1];
        if (uVar5 == param_4) {
          if (*(ushort *)(plVar3 + 2) == uVar2) goto LAB_0c9652d5;
        }
        else {
          if (param_6 <= uVar5) {
            if ((uVar5 | param_6) >> 0x20 == 0) {
              if ((uVar5 & 0xffffffff) % (param_6 & 0xffffffff) == uVar4) goto LAB_0c965296;
              break;
            }
            uVar5 = uVar5 % param_6;
          }
          if (uVar5 != uVar4) break;
        }
LAB_0c965296:
        plVar3 = (long *)*plVar3;
      } while (plVar3 != (long *)0x0);
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
  param_5 = (byte *)(plVar3 + 3);
  goto LAB_0c9652dc;
}


