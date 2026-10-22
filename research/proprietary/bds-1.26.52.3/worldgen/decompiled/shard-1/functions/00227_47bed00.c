/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x48bed00 (ELF vaddr 0x47bed00)
 * Label: callee-of:0x61416e0
 * Body:  [[048bed00, 048bed09] [048bed10, 048bed49] [048bed50, 048bee77]]
 * Ghidra: FUN_048bed00
 */


void FUN_048bed00(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  *(bool *)(param_2 + 3) = param_2 == param_1;
  if (param_2 != param_1) {
    do {
      plVar6 = (long *)param_2[2];
      if ((char)plVar6[3] != '\0') {
        return;
      }
      plVar4 = (long *)plVar6[2];
      lVar5 = *plVar4;
      if (plVar6 == (long *)lVar5) {
        lVar1 = plVar4[1];
        if ((lVar1 == 0) || (*(char *)(lVar1 + 0x18) != '\0')) {
          if (param_2 == (long *)*plVar6) goto LAB_048bedeb;
          plVar2 = (long *)plVar6[1];
          lVar5 = *plVar2;
          plVar6[1] = lVar5;
          if (lVar5 == 0) {
            plVar2[2] = (long)plVar4;
LAB_048bedda:
            *plVar4 = (long)plVar2;
          }
          else {
            *(long **)(lVar5 + 0x10) = plVar6;
            plVar4 = (long *)plVar6[2];
            lVar5 = *plVar4;
            plVar2[2] = (long)plVar4;
            if (plVar6 == (long *)lVar5) goto LAB_048bedda;
            plVar4[1] = (long)plVar2;
          }
          *plVar2 = (long)plVar6;
          plVar6[2] = (long)plVar2;
          plVar4 = (long *)plVar2[2];
          lVar5 = *plVar4;
          plVar6 = plVar2;
LAB_048bedeb:
          *(undefined1 *)(plVar6 + 3) = 1;
          *(undefined1 *)(plVar4 + 3) = 0;
          lVar1 = *(long *)(lVar5 + 8);
          *plVar4 = lVar1;
          if (lVar1 != 0) {
            *(long **)(lVar1 + 0x10) = plVar4;
          }
          plVar6 = (long *)plVar4[2];
          *(long **)(lVar5 + 0x10) = plVar6;
          if (plVar4 != (long *)*plVar6) {
            plVar6[1] = lVar5;
            *(long **)(lVar5 + 8) = plVar4;
            plVar4[2] = lVar5;
            return;
          }
          *plVar6 = lVar5;
          *(long **)(lVar5 + 8) = plVar4;
          plVar4[2] = lVar5;
          return;
        }
        *(undefined1 *)(plVar6 + 3) = 1;
        *(bool *)(plVar4 + 3) = plVar4 == param_1;
        *(undefined1 *)(lVar1 + 0x18) = 1;
      }
      else {
        if ((lVar5 == 0) || (*(char *)(lVar5 + 0x18) != '\0')) {
          plVar2 = (long *)*plVar6;
          if (param_2 == plVar2) {
            lVar5 = plVar2[1];
            *plVar6 = lVar5;
            if (lVar5 != 0) {
              *(long **)(lVar5 + 0x10) = plVar6;
              plVar4 = (long *)plVar6[2];
            }
            plVar2[2] = (long)plVar4;
            if (plVar6 == (long *)*plVar4) {
              *plVar4 = (long)plVar2;
            }
            else {
              plVar4[1] = (long)plVar2;
            }
            plVar2[1] = (long)plVar6;
            plVar6[2] = (long)plVar2;
            plVar4 = (long *)plVar2[2];
            plVar6 = plVar2;
          }
          *(undefined1 *)(plVar6 + 3) = 1;
          *(undefined1 *)(plVar4 + 3) = 0;
          plVar6 = (long *)plVar4[1];
          lVar5 = *plVar6;
          plVar4[1] = lVar5;
          if (lVar5 != 0) {
            *(long **)(lVar5 + 0x10) = plVar4;
          }
          puVar3 = (undefined8 *)plVar4[2];
          plVar6[2] = (long)puVar3;
          if (plVar4 != (long *)*puVar3) {
            puVar3[1] = plVar6;
            *plVar6 = (long)plVar4;
            plVar4[2] = (long)plVar6;
            return;
          }
          *puVar3 = plVar6;
          *plVar6 = (long)plVar4;
          plVar4[2] = (long)plVar6;
          return;
        }
        *(undefined1 *)(plVar6 + 3) = 1;
        *(bool *)(plVar4 + 3) = plVar4 == param_1;
        *(undefined1 *)(lVar5 + 0x18) = 1;
      }
      param_2 = plVar4;
    } while (plVar4 != param_1);
  }
  return;
}


