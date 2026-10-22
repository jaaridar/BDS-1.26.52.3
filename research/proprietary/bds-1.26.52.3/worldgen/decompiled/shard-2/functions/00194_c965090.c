/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc965090
 * Label: Dimension::vslot42
 * Body:  [[0c965090, 0c965163]]
 * Ghidra: wg_Dimension__vslot42
 */


void wg_Dimension__vslot42
               (ulong param_1,ulong param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
               uint param_6,ulong param_7,undefined8 param_8,undefined8 param_9)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  ulong in_RAX;
  ulong uVar5;
  undefined8 *unaff_RBX;
  long *plVar6;
  
  plVar6 = *(long **)((ulong)*(uint *)(in_RAX + 0x18) + param_4 * 8);
  if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
    if (param_6 < 2) {
      do {
        if (plVar6[1] == param_1) {
          if ((short)plVar6[2] == (short)in_RAX) goto LAB_0c96511f;
        }
        else if ((plVar6[1] & param_2 - 1) != param_4) break;
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
    else {
      do {
        uVar5 = plVar6[1];
        if (uVar5 == param_1) {
          if ((short)plVar6[2] == (short)in_RAX) goto LAB_0c96511f;
        }
        else {
          if (param_2 <= uVar5) {
            in_RAX = in_RAX & 0xffffffff;
            if ((uVar5 | param_2) >> 0x20 == 0) {
              uVar5 = (uVar5 & 0xffffffff) % (param_2 & 0xffffffff);
            }
            else {
              uVar5 = uVar5 % param_2;
            }
          }
          if (uVar5 != param_4) break;
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
LAB_0c965137:
  *unaff_RBX = 0;
  unaff_RBX[1] = 0;
LAB_0c96513d:
  if ((param_7 & 1) != 0) {
    func_0x0412a280(param_9,param_7 & 0xfffffffffffffffe);
  }
  return;
LAB_0c96511f:
  lVar1 = plVar6[4];
  uVar2 = *(undefined4 *)((long)plVar6 + 0x1c);
  lVar4 = plVar6[4];
  uVar3 = *(undefined4 *)((long)plVar6 + 0x24);
  *(int *)unaff_RBX = (int)plVar6[3];
  *(undefined4 *)((long)unaff_RBX + 4) = uVar2;
  *(int *)(unaff_RBX + 1) = (int)lVar4;
  *(undefined4 *)((long)unaff_RBX + 0xc) = uVar3;
  if (lVar1 != 0) {
    LOCK();
    plVar6 = (long *)(lVar1 + 0x10);
    *plVar6 = *plVar6 + 1;
    UNLOCK();
    goto LAB_0c96513d;
  }
  goto LAB_0c965137;
}


