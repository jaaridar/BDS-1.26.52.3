/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6e1d20 (ELF vaddr 0xc5e1d20)
 * Label: JigsawBlock::vslot0
 * Body:  [[0c6e1d20, 0c6e1e0b] [0c6e1e10, 0c6e1eb4] [0c6e1ec0, 0c6e1ff0] [0c6e2000, 0c6e205b] [0c6e2060, 0c6e20fe] [0c6e2100, 0c6e2131] [0c6e2140, 0c6e2286] [0c6e2290, 0c6e23cc]]
 * Ghidra: wg_JigsawBlock__vslot0
 */


/* WARNING: Possible PIC construction at 0x0c6e1dea: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0c6e1e93: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0c6e1f1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0c6e1f65: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0c6e1fb7: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0c6e203a: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0c6e20cd: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0c6e217b: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0c6e2264: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0c6e239a: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0c6e2358: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0c6e2310: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0c6e22c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0c6e212b: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0c6e22cd) */
/* WARNING: Removing unreachable block (ram,0x0c6e2315) */
/* WARNING: Removing unreachable block (ram,0x0c6e235d) */
/* WARNING: Removing unreachable block (ram,0x0c6e236d) */
/* WARNING: Removing unreachable block (ram,0x0c6e2130) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * wg_JigsawBlock__vslot0(undefined8 *param_1)

{
  long *plVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 auStack_30 [2];
  
  puVar8 = &UNK_0f3c5330;
  *param_1 = &UNK_0f3c5330;
  plVar3 = (long *)param_1[0x74];
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    puVar8 = (undefined *)*plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (puVar8 == (undefined *)0x0) {
      auStack_30[0] = 0xc6e1d5c;
      (**(code **)(*plVar3 + 0x10))(plVar3);
      auStack_30[0] = 0xc6e1d64;
      puVar8 = (undefined *)func_0x0412c2d0(plVar3);
    }
  }
  plVar3 = (long *)param_1[0x72];
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    puVar8 = (undefined *)*plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (puVar8 == (undefined *)0x0) {
      auStack_30[0] = 0xc6e1d8b;
      (**(code **)(*plVar3 + 0x10))(plVar3);
      auStack_30[0] = 0xc6e1d93;
      puVar8 = (undefined *)func_0x0412c2d0(plVar3);
    }
  }
  lVar4 = param_1[0x6e];
  if (lVar4 == 0) {
    lVar4 = param_1[0x6a];
    if (lVar4 != 0) {
      lVar10 = param_1[0x6b];
      lVar9 = lVar4;
      if (lVar4 != lVar10) {
        do {
          plVar3 = *(long **)(lVar10 + -8);
          if (plVar3 != (long *)0x0) {
            LOCK();
            plVar1 = plVar3 + 1;
            lVar9 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar9 == 0) {
              auStack_30[0] = 0xc6e1e3e;
              (**(code **)(*plVar3 + 0x10))(plVar3);
              auStack_30[0] = 0xc6e1e46;
              func_0x0412c2d0(plVar3);
            }
          }
          lVar10 = lVar10 + -0x10;
        } while (lVar10 != lVar4);
        lVar9 = param_1[0x6a];
      }
      param_1[0x6b] = lVar4;
      auStack_30[0] = 0xc6e1e65;
      puVar8 = (undefined *)func_0x0412a280(lVar9,param_1[0x6c] - lVar9);
    }
    if (param_1[0x69] != 0) {
      auStack_30[0] = 0xc6e1e76;
      puVar8 = (undefined *)func_0x0412c2d0();
    }
    lVar9 = param_1[100];
    if (lVar9 == 0) {
      lVar4 = param_1[0x61];
      if (lVar4 != 0) {
        lVar10 = param_1[0x62];
        lVar9 = lVar4;
        if (lVar4 != lVar10) {
          do {
            plVar3 = *(long **)(lVar10 + -8);
            *(undefined8 *)(lVar10 + -8) = 0;
            if (plVar3 != (long *)0x0) {
              auStack_30[0] = 0xc6e1ee0;
              (**(code **)(*plVar3 + 8))();
            }
            lVar10 = lVar10 + -8;
          } while (lVar10 != lVar4);
          lVar9 = param_1[0x61];
        }
        param_1[0x62] = lVar4;
        auStack_30[0] = 0xc6e1eff;
        puVar8 = (undefined *)func_0x0412a280(lVar9,param_1[99] - lVar9);
      }
      lVar9 = param_1[0x5e];
      if (lVar9 == 0) {
        plVar3 = (long *)param_1[0x5c];
        param_1[0x5c] = 0;
        if (plVar3 != (long *)0x0) {
          auStack_30[0] = 0xc6e1f3e;
          puVar8 = (undefined *)(**(code **)(*plVar3 + 8))();
        }
        lVar9 = param_1[0x5b];
        param_1[0x5b] = 0;
        if (lVar9 == 0) {
          puVar7 = (undefined8 *)param_1[0x58];
          while (puVar7 != (undefined8 *)0x0) {
            puVar5 = (undefined8 *)*puVar7;
            auStack_30[0] = 0xc6e1f8d;
            puVar8 = (undefined *)func_0x0412a280(puVar7,0x20);
            puVar7 = puVar5;
          }
          lVar9 = param_1[0x56];
          param_1[0x56] = 0;
          if (lVar9 == 0) {
            auStack_30[0] = 0xc6e1fc8;
            func_0x04136a00(param_1 + 0x4f);
            auStack_30[0] = 0xc6e1fd4;
            puVar8 = (undefined *)func_0x04136a00(param_1 + 0x49);
            lVar4 = param_1[0x41];
            if (lVar4 == 0) {
              lVar4 = param_1[0x3d];
              if (lVar4 != 0) {
                lVar10 = param_1[0x3e];
                lVar9 = lVar4;
                if (lVar4 != lVar10) {
                  do {
                    plVar3 = *(long **)(lVar10 + -8);
                    *(undefined8 *)(lVar10 + -8) = 0;
                    if (plVar3 != (long *)0x0) {
                      auStack_30[0] = 0xc6e2080;
                      (**(code **)(*plVar3 + 8))();
                    }
                    lVar10 = lVar10 + -8;
                  } while (lVar10 != lVar4);
                  lVar9 = param_1[0x3d];
                }
                param_1[0x3e] = lVar4;
                auStack_30[0] = 0xc6e209f;
                puVar8 = (undefined *)func_0x0412a280(lVar9,param_1[0x3f] - lVar9);
              }
              puVar7 = (undefined8 *)param_1[0x3a];
              while (puVar7 != (undefined8 *)0x0) {
                puVar5 = (undefined8 *)*puVar7;
                if ((*(byte *)(puVar7 + 3) & 1) != 0) {
                  lVar9 = puVar7[5];
                  register0x00000020 = (BADSPACEBASE *)auStack_30;
                  auStack_30[0] = 0xc6e2130;
                  goto SUB_0412a280;
                }
                auStack_30[0] = 0xc6e210d;
                puVar8 = (undefined *)func_0x0412a280(puVar7,0x40);
                puVar7 = puVar5;
              }
              lVar9 = param_1[0x38];
              param_1[0x38] = 0;
              if (lVar9 == 0) {
                auStack_30[0] = 0xc6e20de;
                puVar8 = (undefined *)func_0x0c6e2a10(param_1[0x36]);
                lVar4 = param_1[0x2e];
                if (lVar4 == 0) {
                  if (((ulong)param_1[0x2c] >> 0x37 & 1) != 0) {
                    auStack_30[0] = 0xc6e21b0;
                    (**(code **)(_DAT_0f5463b0 + 0x28))
                              (&DAT_0f5463b0,(param_1[0x2c] & 0xff00ffffffffffff) - 8);
                  }
                  puVar8 = (undefined *)0x80000000000000;
                  param_1[0x2c] = 0;
                  if ((param_1[0x2b] & 0x80000000000000) != 0) {
                    auStack_30[0] = 0xc6e21f3;
                    puVar8 = (undefined *)
                             (**(code **)(_DAT_0f5463b0 + 0x28))
                                       (&DAT_0f5463b0,(param_1[0x2b] & 0xff00ffffffffffff) - 8);
                  }
                  param_1[0x2b] = 0;
                  if ((*(byte *)(param_1 + 0x22) & 1) == 0) {
                    if ((*(byte *)(param_1 + 0x1e) & 1) == 0) {
                      bVar2 = *(byte *)(param_1 + 0x1a);
                    }
                    else {
                      auStack_30[0] = 0xc6e22f1;
                      puVar8 = (undefined *)
                               func_0x0412a280(param_1[0x20],param_1[0x1e] & 0xfffffffffffffffe);
                      bVar2 = *(byte *)(param_1 + 0x1a);
                    }
                    if ((bVar2 & 1) == 0) {
                      if ((*(byte *)(param_1 + 0x16) & 1) == 0) {
                        bVar2 = *(byte *)(param_1 + 0x12);
                      }
                      else {
                        auStack_30[0] = 0xc6e2339;
                        puVar8 = (undefined *)
                                 func_0x0412a280(param_1[0x18],param_1[0x16] & 0xfffffffffffffffe);
                        bVar2 = *(byte *)(param_1 + 0x12);
                      }
                      if ((bVar2 & 1) == 0) {
                        if (param_1[0x10] != 0) {
                          auStack_30[0] = 0xc6e2250;
                          puVar8 = (undefined *)func_0x0412c2d0();
                        }
                        lVar9 = param_1[0xb];
                        if (lVar9 == 0) {
                          lVar4 = param_1[8];
                          if (lVar4 != 0) {
                            lVar10 = param_1[9];
                            lVar9 = lVar4;
                            if (lVar4 != lVar10) {
                              do {
                                plVar3 = *(long **)(lVar10 + -8);
                                *(undefined8 *)(lVar10 + -8) = 0;
                                if (plVar3 != (long *)0x0) {
                                  auStack_30[0] = 0xc6e22b4;
                                  (**(code **)(*plVar3 + 8))();
                                }
                                lVar10 = lVar10 + -8;
                              } while (lVar10 != lVar4);
                              lVar9 = param_1[8];
                            }
                            param_1[9] = lVar4;
                            auStack_30[0] = 0xc6e2386;
                            puVar8 = (undefined *)func_0x0412a280(lVar9,param_1[10] - lVar9);
                          }
                          lVar9 = param_1[5];
                          if (lVar9 == 0) {
                            if ((*(byte *)(param_1 + 1) & 1) == 0) {
                              return puVar8;
                            }
                            lVar9 = param_1[3];
                          }
                          else {
                            param_1[6] = lVar9;
                            register0x00000020 = (BADSPACEBASE *)auStack_30;
                            auStack_30[0] = 0xc6e239f;
                          }
                        }
                        else {
                          param_1[0xc] = lVar9;
                          register0x00000020 = (BADSPACEBASE *)auStack_30;
                          auStack_30[0] = 0xc6e2269;
                        }
                      }
                      else {
                        lVar9 = param_1[0x14];
                        register0x00000020 = (BADSPACEBASE *)auStack_30;
                        auStack_30[0] = 0xc6e235d;
                      }
                    }
                    else {
                      lVar9 = param_1[0x1c];
                      register0x00000020 = (BADSPACEBASE *)auStack_30;
                      auStack_30[0] = 0xc6e2315;
                    }
                  }
                  else {
                    lVar9 = param_1[0x24];
                    register0x00000020 = (BADSPACEBASE *)auStack_30;
                    auStack_30[0] = 0xc6e22cd;
                  }
                }
                else {
                  lVar10 = param_1[0x2f];
                  lVar9 = lVar4;
                  if (lVar4 != lVar10) {
                    do {
                      if ((*(byte *)(lVar10 + -0x20) & 1) != 0) {
                        auStack_30[0] = 0xc6e2161;
                        puVar8 = (undefined *)
                                 func_0x0412a280(*(undefined8 *)(lVar10 + -0x10),
                                                 *(ulong *)(lVar10 + -0x20) & 0xfffffffffffffffe);
                      }
                      lVar10 = lVar10 + -0x28;
                    } while (lVar10 != lVar4);
                    lVar9 = param_1[0x2e];
                  }
                  param_1[0x2f] = lVar4;
                  register0x00000020 = (BADSPACEBASE *)auStack_30;
                  auStack_30[0] = 0xc6e2180;
                }
              }
              else {
                register0x00000020 = (BADSPACEBASE *)auStack_30;
                auStack_30[0] = 0xc6e20d2;
              }
            }
            else {
              lVar10 = param_1[0x42];
              lVar9 = lVar4;
              if (lVar4 != lVar10) {
                do {
                  plVar3 = *(long **)(lVar10 + -8);
                  *(undefined8 *)(lVar10 + -8) = 0;
                  if (plVar3 != (long *)0x0) {
                    auStack_30[0] = 0xc6e2020;
                    puVar8 = (undefined *)(**(code **)(*plVar3 + 8))();
                  }
                  lVar10 = lVar10 + -8;
                } while (lVar10 != lVar4);
                lVar9 = param_1[0x41];
              }
              param_1[0x42] = lVar4;
              register0x00000020 = (BADSPACEBASE *)auStack_30;
              auStack_30[0] = 0xc6e203f;
            }
          }
          else {
            register0x00000020 = (BADSPACEBASE *)auStack_30;
            auStack_30[0] = 0xc6e1fbc;
          }
        }
        else {
          auStack_30[0] = 0xc6e1f5d;
          puVar8 = (undefined *)func_0x0c6e2a40(lVar9);
          register0x00000020 = (BADSPACEBASE *)auStack_30;
          auStack_30[0] = 0xc6e1f6a;
        }
      }
      else {
        param_1[0x5f] = lVar9;
        register0x00000020 = (BADSPACEBASE *)auStack_30;
        auStack_30[0] = 0xc6e1f21;
      }
    }
    else {
      param_1[0x65] = lVar9;
      register0x00000020 = (BADSPACEBASE *)auStack_30;
      auStack_30[0] = 0xc6e1e98;
    }
  }
  else {
    lVar10 = param_1[0x6f];
    lVar9 = lVar4;
    if (lVar4 != lVar10) {
      do {
        plVar3 = *(long **)(lVar10 + -8);
        *(undefined8 *)(lVar10 + -8) = 0;
        if (plVar3 != (long *)0x0) {
          auStack_30[0] = 0xc6e1dd0;
          puVar8 = (undefined *)(**(code **)(*plVar3 + 8))();
        }
        lVar10 = lVar10 + -8;
      } while (lVar10 != lVar4);
      lVar9 = param_1[0x6e];
    }
    param_1[0x6f] = lVar4;
    register0x00000020 = (BADSPACEBASE *)auStack_30;
    auStack_30[0] = 0xc6e1def;
  }
SUB_0412a280:
  *(undefined **)((long)register0x00000020 + -8) = puVar8;
  if (lVar9 != 0) {
    pcVar6 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar6)(&DAT_0f5463b0,lVar9);
  }
  return *(undefined **)((long)register0x00000020 + -8);
}


