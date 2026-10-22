/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6339950 (ELF vaddr 0x6239950)
 * Label: callee-of:0x61410a0
 * Body:  [[06339950, 06339a1a] [06339a20, 06339b6a]]
 * Ghidra: FUN_06339950
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_06339950(long *param_1,long *param_2,byte param_3,undefined1 *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  bool bVar8;
  
  plVar1 = param_1 + 1;
  if ((param_2 == plVar1) || (param_3 < *(byte *)(param_2 + 4))) {
    plVar5 = (long *)*param_2;
    plVar6 = param_2;
    if (param_2 != (long *)*param_1) {
      plVar7 = param_2;
      plVar4 = plVar5;
      if (plVar5 == (long *)0x0) {
        do {
          plVar6 = (long *)plVar7[2];
          bVar8 = plVar7 == (long *)*plVar6;
          plVar7 = plVar6;
        } while (bVar8);
      }
      else {
        do {
          plVar6 = plVar4;
          plVar4 = (long *)plVar6[1];
        } while ((long *)plVar6[1] != (long *)0x0);
      }
      if (param_3 <= *(byte *)(plVar6 + 4)) {
        plVar5 = (long *)*plVar1;
        plVar7 = plVar1;
        while (plVar6 = plVar7, plVar5 != (long *)0x0) {
          while (plVar7 = plVar5, *(byte *)(plVar7 + 4) <= param_3) {
            if (param_3 <= *(byte *)(plVar7 + 4)) {
              return;
            }
            plVar5 = (long *)plVar7[1];
            plVar6 = plVar7;
            if ((long *)plVar7[1] == (long *)0x0) goto LAB_06339a45;
          }
          plVar5 = (long *)*plVar7;
        }
        goto LAB_06339a7a;
      }
    }
    plVar7 = plVar6 + 1;
    if (plVar5 == (long *)0x0) {
      plVar7 = param_2;
      plVar6 = param_2;
    }
    if (*plVar7 != 0) {
      return;
    }
  }
  else {
    if (param_3 <= *(byte *)(param_2 + 4)) {
      return;
    }
    plVar5 = (long *)param_2[1];
    if ((long *)param_2[1] == (long *)0x0) {
      plVar5 = param_2;
      do {
        plVar4 = (long *)plVar5[2];
        bVar8 = plVar5 != (long *)*plVar4;
        plVar5 = plVar4;
        plVar7 = param_2 + 1;
      } while (bVar8);
    }
    else {
      do {
        plVar4 = plVar5;
        plVar5 = (long *)*plVar4;
        plVar7 = plVar4;
        param_2 = plVar4;
      } while ((long *)*plVar4 != (long *)0x0);
    }
    plVar6 = param_2;
    if ((plVar4 != plVar1) && (*(byte *)(plVar4 + 4) <= param_3)) {
      plVar5 = (long *)*plVar1;
      plVar7 = plVar1;
      while (plVar6 = plVar7, plVar5 != (long *)0x0) {
        while (plVar7 = plVar5, *(byte *)(plVar7 + 4) <= param_3) {
          if (param_3 <= *(byte *)(plVar7 + 4)) {
            return;
          }
          plVar5 = (long *)plVar7[1];
          plVar6 = plVar7;
          if ((long *)plVar7[1] == (long *)0x0) goto LAB_06339a45;
        }
        plVar5 = (long *)*plVar7;
      }
    }
  }
LAB_06339a7a:
  puVar3 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar3 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  *(undefined1 *)(puVar3 + 4) = *param_4;
  if ((param_4[8] & 1) == 0) {
    puVar3[7] = *(undefined8 *)(param_4 + 0x18);
    uVar2 = *(undefined8 *)(param_4 + 0x10);
    puVar3[5] = *(undefined8 *)(param_4 + 8);
    puVar3[6] = uVar2;
  }
  else {
    func_0x0412e5e0(puVar3 + 5,*(undefined8 *)(param_4 + 0x18),*(undefined8 *)(param_4 + 0x10));
  }
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = plVar6;
  *plVar7 = (long)puVar3;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
  }
  func_0x048bed00(param_1[1],puVar3);
  param_1[2] = param_1[2] + 1;
  return;
LAB_06339a45:
  plVar7 = plVar6 + 1;
  goto LAB_06339a7a;
}


