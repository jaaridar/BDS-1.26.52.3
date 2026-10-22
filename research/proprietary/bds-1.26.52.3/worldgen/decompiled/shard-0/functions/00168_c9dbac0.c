/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcadbac0 (ELF vaddr 0xc9dbac0)
 * Label: callee-of:0x6146460
 * Body:  [[0cadbac0, 0cadbc9e] [0cadbca0, 0cadbcf2] [0cadbd00, 0cadbd7d] [0cadbd80, 0cadbddc] [0cadbde0, 0cadbedc] [0cadbee0, 0cadc18f]]
 * Ghidra: FUN_0cadbac0
 */


/* WARNING: Possible PIC construction at 0x0cadbbaf: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0cadbbff: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0cadbc2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0cadbc7d: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0cadbd50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0cadbdbb: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0cadbe38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0cadbe96: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0cadbf1a: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0cadbf69: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0cadbfb2: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0cadbfd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0cadc021: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0cadc047: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0cadc109: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0cadbd9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0cadbe3d) */
/* WARNING: Removing unreachable block (ram,0x0cadbda1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0cadbac0(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  code *pcVar5;
  char cVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  undefined8 auStack_30 [2];
  
  if ((*(long *)(param_1 + 0x18a0) != *(long *)(param_1 + 0x1890)) ||
     (*(int *)(param_1 + 0x1898) != 0)) {
    auStack_30[0] = 0xcadbb0c;
    cVar6 = func_0x0eeddcf0(&UNK_014756d5,&UNK_01198d5e,0x25,&UNK_0126e3df,&UNK_013a8ed3);
    if (cVar6 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  auStack_30[0] = 0xcadbb27;
  lVar7 = func_0x0cada410(param_1 + 0x1538);
  plVar8 = *(long **)(param_1 + 0x1520);
  if (plVar8 == (long *)0x0) {
LAB_0cadbb49:
    plVar8 = *(long **)(param_1 + 0x1510);
    *(undefined8 *)(param_1 + 0x1510) = 0;
  }
  else {
    LOCK();
    plVar3 = plVar8 + 1;
    lVar7 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar7 != 0) goto LAB_0cadbb49;
    auStack_30[0] = 0xcadc168;
    (**(code **)(*plVar8 + 0x10))(plVar8);
    auStack_30[0] = 0xcadc170;
    lVar7 = func_0x0412c2d0(plVar8);
    plVar8 = *(long **)(param_1 + 0x1510);
    *(undefined8 *)(param_1 + 0x1510) = 0;
  }
  if (plVar8 == (long *)0x0) {
    puVar2 = *(undefined8 **)(param_1 + 0x1508);
    *(undefined8 *)(param_1 + 0x1508) = 0;
    if (puVar2 != (undefined8 *)0x0) {
      plVar3 = (long *)*puVar2;
      if (plVar3 != (long *)0x0) {
        plVar10 = (long *)puVar2[1];
        plVar8 = plVar3;
        if (plVar3 != plVar10) {
          do {
            plVar10 = plVar10 + -0xd;
            auStack_30[0] = 0xcadbbec;
            lVar7 = func_0x0ca919a0(plVar10);
          } while (plVar10 != plVar3);
          plVar8 = (long *)*puVar2;
        }
        puVar2[1] = plVar3;
        register0x00000020 = (BADSPACEBASE *)auStack_30;
        auStack_30[0] = 0xcadbc04;
        goto SUB_0412a280;
      }
      auStack_30[0] = 0xcadbc11;
      lVar7 = func_0x0412a280(puVar2,0x18);
    }
    if ((*(byte *)(param_1 + 0x14e8) & 1) == 0) {
      plVar8 = *(long **)(param_1 + 0x14c0);
      if (plVar8 != (long *)0x0) {
        LOCK();
        plVar3 = plVar8 + 1;
        lVar7 = *plVar3;
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (lVar7 == 0) {
          auStack_30[0] = 0xcadbc58;
          (**(code **)(*plVar8 + 0x10))(plVar8);
          auStack_30[0] = 0xcadbc60;
          lVar7 = func_0x0412c2d0(plVar8);
        }
      }
      plVar8 = *(long **)(param_1 + 0x1490);
      if (plVar8 == (long *)0x0) {
        lVar4 = *(long *)(param_1 + 0x1470);
        if (lVar4 != 0) {
          lVar7 = *(long *)(param_1 + 0x1478);
          lVar9 = lVar4;
          if (lVar4 != lVar7) {
            do {
              if (*(long *)(lVar7 + -0x10) != 0) {
                auStack_30[0] = 0xcadbcb7;
                func_0x0412c2d0();
              }
              lVar7 = lVar7 + -0x18;
            } while (lVar7 != lVar4);
            lVar9 = *(long *)(param_1 + 0x1470);
          }
          *(long *)(param_1 + 0x1478) = lVar4;
          auStack_30[0] = 0xcadbcd6;
          lVar7 = func_0x0412a280(lVar9,*(long *)(param_1 + 0x1480) - lVar9);
        }
        plVar3 = *(long **)(param_1 + 0x1450);
        if (plVar3 == (long *)0x0) {
          auStack_30[0] = 0xcadbd61;
          lVar7 = func_0x0532eab0(param_1 + 0x13c8);
          plVar3 = *(long **)(param_1 + 0x13b0);
          if (plVar3 == (long *)0x0) {
            lVar4 = *(long *)(param_1 + 0x1398);
            if (lVar4 != 0) {
              lVar7 = *(long *)(param_1 + 0x13a0);
              lVar9 = lVar4;
              if (lVar4 != lVar7) {
                do {
                  if (*(long *)(lVar7 + -0x10) != 0) {
                    auStack_30[0] = 0xcadbdf7;
                    func_0x0412c2d0();
                  }
                  lVar7 = lVar7 + -0x18;
                } while (lVar7 != lVar4);
                lVar9 = *(long *)(param_1 + 0x1398);
              }
              *(long *)(param_1 + 0x13a0) = lVar4;
              auStack_30[0] = 0xcadbe16;
              lVar7 = func_0x0412a280(lVar9,*(long *)(param_1 + 0x13a8) - lVar9);
            }
            if (*(long **)(param_1 + 0xff0) == (long *)0x0) {
              lVar4 = *(long *)(param_1 + 0xfe0);
              *(undefined8 *)(param_1 + 0xfe0) = 0;
              if (lVar4 != 0) {
                auStack_30[0] = 0xcadbe6c;
                lVar7 = func_0x0412a280(lVar4,*(long *)(param_1 + 0xfe8) << 3);
              }
              puVar2 = *(undefined8 **)(param_1 + 0xfd0);
              *(undefined8 *)(param_1 + 0xfd0) = 0;
              if (puVar2 != (undefined8 *)0x0) {
                plVar8 = (long *)*puVar2;
                if (plVar8 != (long *)0x0) {
                  puVar2[1] = plVar8;
                  register0x00000020 = (BADSPACEBASE *)auStack_30;
                  auStack_30[0] = 0xcadbe9b;
                  goto SUB_0412a280;
                }
                auStack_30[0] = 0xcadbea8;
                func_0x0412a280(puVar2,0x18);
              }
              auStack_30[0] = 0xcadbeb4;
              pthread_cond_destroy(param_1 + 0x390);
              auStack_30[0] = 0xcadbec0;
              lVar7 = pthread_cond_destroy(param_1 + 0x360);
              plVar3 = *(long **)(param_1 + 800);
              if (plVar3 == (long *)0x0) {
                plVar3 = *(long **)(param_1 + 0x108);
                if (plVar3 == (long *)0x0) {
                  plVar8 = *(long **)(param_1 + 0x100);
                  *(undefined8 *)(param_1 + 0x100) = 0;
                  if (plVar8 == (long *)0x0) {
                    plVar8 = *(long **)(param_1 + 0xf8);
                    *(undefined8 *)(param_1 + 0xf8) = 0;
                    if (plVar8 == (long *)0x0) {
                      if ((*(long *)(param_1 + 0xe8) != *(long *)(param_1 + 0xd8)) ||
                         (*(int *)(param_1 + 0xe0) != 0)) {
                        auStack_30[0] = 0xcadc08d;
                        cVar6 = func_0x0eeddcf0(&UNK_014756d5,&UNK_01198d5e,0x25,&UNK_0126e3df,
                                                &UNK_013a8ed3);
                        if (cVar6 != '\0') {
                          _DAT_00000000 = 0xdeadc0de;
                        }
                      }
                      lVar7 = *(long *)(param_1 + 0xd0);
                      if ((lVar7 != *(long *)(param_1 + 0xc0)) || (*(int *)(param_1 + 200) != 0)) {
                        auStack_30[0] = 0xcadc0dd;
                        lVar7 = func_0x0eeddcf0(&UNK_014756d5,&UNK_01198d5e,0x25,&UNK_0126e3df,
                                                &UNK_013a8ed3);
                        if ((char)lVar7 != '\0') {
                          _DAT_00000000 = 0xdeadc0de;
                        }
                      }
                      plVar8 = *(long **)(param_1 + 0xa0);
                      if (plVar8 == (long *)0x0) {
                        if ((*(byte *)(param_1 + 0x88) & 1) != 0) {
                          auStack_30[0] = 0xcadc12e;
                          lVar7 = func_0x0412a280(*(undefined8 *)(param_1 + 0x98),
                                                  *(ulong *)(param_1 + 0x88) & 0xfffffffffffffffe);
                        }
                        if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
                          return lVar7;
                        }
                        plVar8 = *(long **)(param_1 + 0x80);
                      }
                      else {
                        *(long **)(param_1 + 0xa8) = plVar8;
                        register0x00000020 = (BADSPACEBASE *)auStack_30;
                        auStack_30[0] = 0xcadc10e;
                      }
                    }
                    else {
                      lVar4 = plVar8[8];
                      if (lVar4 != 0) {
                        plVar8[9] = lVar4;
                        auStack_30[0] = 0xcadc00d;
                        lVar7 = func_0x0412a280(lVar4,plVar8[10] - lVar4);
                      }
                      plVar3 = (long *)plVar8[5];
                      if (plVar3 == (long *)0x0) {
                        lVar4 = plVar8[2];
                        if (lVar4 != 0) {
                          plVar8[3] = lVar4;
                          auStack_30[0] = 0xcadc03f;
                          lVar7 = func_0x0412a280(lVar4,plVar8[4] - lVar4);
                        }
                        register0x00000020 = (BADSPACEBASE *)auStack_30;
                        auStack_30[0] = 0xcadc04c;
                      }
                      else {
                        plVar8[6] = (long)plVar3;
                        register0x00000020 = (BADSPACEBASE *)auStack_30;
                        auStack_30[0] = 0xcadc026;
                        plVar8 = plVar3;
                      }
                    }
                  }
                  else {
                    lVar4 = plVar8[8];
                    if (lVar4 != 0) {
                      plVar8[9] = lVar4;
                      auStack_30[0] = 0xcadbf9e;
                      lVar7 = func_0x0412a280(lVar4,plVar8[10] - lVar4);
                    }
                    plVar3 = (long *)plVar8[5];
                    if (plVar3 == (long *)0x0) {
                      lVar4 = plVar8[2];
                      if (lVar4 != 0) {
                        plVar8[3] = lVar4;
                        auStack_30[0] = 0xcadbfd0;
                        lVar7 = func_0x0412a280(lVar4,plVar8[4] - lVar4);
                      }
                      register0x00000020 = (BADSPACEBASE *)auStack_30;
                      auStack_30[0] = 0xcadbfdd;
                    }
                    else {
                      plVar8[6] = (long)plVar3;
                      register0x00000020 = (BADSPACEBASE *)auStack_30;
                      auStack_30[0] = 0xcadbfb7;
                      plVar8 = plVar3;
                    }
                  }
                }
                else {
                  plVar10 = *(long **)(param_1 + 0x110);
                  plVar8 = plVar3;
                  if (plVar3 != plVar10) {
                    do {
                      plVar10 = plVar10 + -0xd;
                      auStack_30[0] = 0xcadbf4c;
                      lVar7 = func_0x0ca919a0(plVar10);
                    } while (plVar10 != plVar3);
                    plVar8 = *(long **)(param_1 + 0x108);
                  }
                  *(long **)(param_1 + 0x110) = plVar3;
                  register0x00000020 = (BADSPACEBASE *)auStack_30;
                  auStack_30[0] = 0xcadbf6e;
                }
              }
              else {
                plVar10 = *(long **)(param_1 + 0x328);
                plVar8 = plVar3;
                if (plVar3 != plVar10) {
                  do {
                    plVar8 = (long *)plVar10[-1];
                    plVar10[-1] = 0;
                    if (plVar8 != (long *)0x0) {
                      auStack_30[0] = 0xcadbf00;
                      lVar7 = (**(code **)(*plVar8 + 8))();
                    }
                    plVar10 = plVar10 + -1;
                  } while (plVar10 != plVar3);
                  plVar8 = *(long **)(param_1 + 800);
                }
                *(long **)(param_1 + 0x328) = plVar3;
                register0x00000020 = (BADSPACEBASE *)auStack_30;
                auStack_30[0] = 0xcadbf1f;
              }
            }
            else {
              register0x00000020 = (BADSPACEBASE *)auStack_30;
              auStack_30[0] = 0xcadbe3d;
              plVar8 = *(long **)(param_1 + 0xff0);
            }
          }
          else {
            plVar10 = *(long **)(param_1 + 0x13b8);
            plVar8 = plVar3;
            if (plVar3 != plVar10) {
              do {
                if ((*(byte *)(plVar10 + -3) & 1) != 0) {
                  plVar8 = (long *)plVar10[-1];
                  register0x00000020 = (BADSPACEBASE *)auStack_30;
                  auStack_30[0] = 0xcadbda1;
                  goto SUB_0412a280;
                }
                plVar10 = plVar10 + -3;
              } while (plVar10 != plVar3);
              plVar8 = *(long **)(param_1 + 0x13b0);
            }
            *(long **)(param_1 + 0x13b8) = plVar3;
            register0x00000020 = (BADSPACEBASE *)auStack_30;
            auStack_30[0] = 0xcadbdc0;
          }
        }
        else {
          plVar10 = *(long **)(param_1 + 0x1458);
          plVar8 = plVar3;
          if (plVar3 != plVar10) {
            do {
              plVar8 = (long *)plVar10[-1];
              if (plVar8 != (long *)0x0) {
                LOCK();
                plVar1 = plVar8 + 1;
                lVar7 = *plVar1;
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (lVar7 == 0) {
                  auStack_30[0] = 0xcadbd2e;
                  (**(code **)(*plVar8 + 0x10))(plVar8);
                  auStack_30[0] = 0xcadbd36;
                  lVar7 = func_0x0412c2d0(plVar8);
                }
              }
              plVar10 = plVar10 + -2;
            } while (plVar10 != plVar3);
            plVar8 = *(long **)(param_1 + 0x1450);
          }
          *(long **)(param_1 + 0x1458) = plVar3;
          register0x00000020 = (BADSPACEBASE *)auStack_30;
          auStack_30[0] = 0xcadbd55;
        }
      }
      else {
        *(long **)(param_1 + 0x1498) = plVar8;
        register0x00000020 = (BADSPACEBASE *)auStack_30;
        auStack_30[0] = 0xcadbc82;
      }
    }
    else {
      register0x00000020 = (BADSPACEBASE *)auStack_30;
      auStack_30[0] = 0xcadbc31;
      plVar8 = *(long **)(param_1 + 0x14f8);
    }
  }
  else {
    lVar7 = plVar8[2];
    if ((lVar7 != *plVar8) || ((int)plVar8[1] != 0)) {
      auStack_30[0] = 0xcadbb98;
      lVar7 = func_0x0eeddcf0(&UNK_014756d5,&UNK_01198d5e,0x25,&UNK_0126e3df,&UNK_013a8ed3);
      if ((char)lVar7 != '\0') {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    register0x00000020 = (BADSPACEBASE *)auStack_30;
    auStack_30[0] = 0xcadbbb4;
  }
SUB_0412a280:
  *(long *)((long)register0x00000020 + -8) = lVar7;
  if (plVar8 != (long *)0x0) {
    pcVar5 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar5)(&DAT_0f5463b0,plVar8);
  }
  return *(long *)((long)register0x00000020 + -8);
}


