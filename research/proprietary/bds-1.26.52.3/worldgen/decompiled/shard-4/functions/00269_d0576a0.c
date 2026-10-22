/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1576a0 (ELF vaddr 0xd0576a0)
 * Label: callee-of:0xc961400
 * Body:  [[0d1576a0, 0d157725] [0d157730, 0d157748] [0d157750, 0d157793] [0d1577a0, 0d1577c0] [0d1577d0, 0d15784d] [0d157850, 0d157870] [0d157880, 0d157908] [0d157910, 0d157955]]
 * Ghidra: FUN_0d1576a0
 */


void FUN_0d1576a0(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined1 uVar3;
  char cVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lStack_40;
  undefined4 uStack_38;
  
  plVar7 = *(long **)(param_1 + 0x40);
  if (param_2 == (long *)0x0) {
    plVar5 = plVar7;
    if (plVar7 == (long *)0x0) goto LAB_0d157940;
    do {
      *(undefined1 *)(plVar5 + 4) = 1;
      plVar5 = (long *)*plVar5;
    } while (plVar5 != (long *)0x0);
  }
  else {
    if (plVar7 == (long *)0x0) goto LAB_0d157940;
    do {
      uVar3 = (**(code **)(*param_2 + 0x1c0))(param_2,plVar7 + 2,0x20);
      *(undefined1 *)(plVar7 + 4) = uVar3;
      plVar7 = (long *)*plVar7;
    } while (plVar7 != (long *)0x0);
    plVar7 = *(long **)(param_1 + 0x40);
  }
  if (plVar7 != (long *)0x0) {
    do {
      if ((char)plVar7[4] == '\x01') {
        plVar1 = (long *)plVar7[6];
        for (plVar5 = (long *)plVar7[5]; plVar5 != plVar1; plVar5 = plVar5 + 3) {
          if ((((*(byte *)((long)plVar5 + 0x14) & 1) != 0) &&
              (plVar2 = (long *)*plVar5, plVar2 != (long *)0x0)) &&
             (*(char *)((long)plVar2 + 0x5d) == '\0')) {
            (**(code **)(*plVar2 + 0x90))(plVar2,param_1,plVar5 + 1);
          }
        }
      }
      plVar7 = (long *)*plVar7;
    } while (plVar7 != (long *)0x0);
    plVar7 = *(long **)(param_1 + 0x40);
    if (plVar7 != (long *)0x0) {
      do {
        if ((char)plVar7[4] == '\x01') {
          plVar1 = (long *)plVar7[6];
          for (plVar5 = (long *)plVar7[5]; plVar5 != plVar1; plVar5 = plVar5 + 3) {
            if ((((*(byte *)((long)plVar5 + 0x14) & 4) != 0) &&
                (plVar2 = (long *)*plVar5, plVar2 != (long *)0x0)) &&
               ((*(char *)((long)plVar2 + 0x5d) == '\0' &&
                ((lVar6 = (**(code **)(*plVar2 + 0xe0))(plVar2), lVar6 == 0x200000 ||
                 (lVar6 == 0x80000)))))) {
              uStack_38 = (undefined4)plVar5[2];
              lStack_40 = plVar5[1];
              cVar4 = (**(code **)(*plVar2 + 0x88))(plVar2,param_1,&lStack_40);
              if (cVar4 != '\0') {
                *(undefined1 *)((long)plVar2 + 0x3a) = 1;
              }
            }
          }
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
      plVar7 = *(long **)(param_1 + 0x40);
      if (plVar7 != (long *)0x0) {
        do {
          if ((char)plVar7[4] == '\x01') {
            plVar1 = (long *)plVar7[6];
            for (plVar5 = (long *)plVar7[5]; plVar5 != plVar1; plVar5 = plVar5 + 3) {
              if (((((*(byte *)((long)plVar5 + 0x14) & 8) != 0) &&
                   (plVar2 = (long *)*plVar5, plVar2 != (long *)0x0)) &&
                  (*(char *)((long)plVar2 + 0x5d) == '\0')) &&
                 ((lVar6 = (**(code **)(*plVar2 + 0xe0))(plVar2), lVar6 != 0x80000 &&
                  (lVar6 != 0x200000)))) {
                uStack_38 = (undefined4)plVar5[2];
                lStack_40 = plVar5[1];
                cVar4 = (**(code **)(*plVar2 + 0x88))(plVar2,param_1,&lStack_40);
                if (cVar4 != '\0') {
                  *(undefined1 *)((long)plVar2 + 0x3a) = 1;
                }
              }
            }
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
        for (puVar8 = *(undefined8 **)(param_1 + 0x40); puVar8 != (undefined8 *)0x0;
            puVar8 = (undefined8 *)*puVar8) {
          if (*(char *)(puVar8 + 4) == '\x01') {
            plVar5 = (long *)puVar8[6];
            for (plVar7 = (long *)puVar8[5]; plVar7 != plVar5; plVar7 = plVar7 + 3) {
              if ((((*(byte *)((long)plVar7 + 0x14) & 2) != 0) &&
                  (plVar1 = (long *)*plVar7, plVar1 != (long *)0x0)) &&
                 (*(char *)((long)plVar1 + 0x5d) == '\0')) {
                (**(code **)(*plVar1 + 0x80))(plVar1,param_1,plVar7 + 1);
              }
            }
          }
        }
      }
    }
  }
LAB_0d157940:
  *(undefined1 *)(param_1 + 0x128) = 1;
  return;
}


