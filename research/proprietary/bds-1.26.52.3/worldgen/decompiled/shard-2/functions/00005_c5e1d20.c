/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6e1d20 (ELF vaddr 0xc5e1d20)
 * Label: JigsawBlock::vslot0
 * Body:  [[0412a280, 0412a284] [0c6e1d20, 0c6e1e0b] [0c6e1e10, 0c6e1eb4] [0c6e1ec0, 0c6e1ff0] [0c6e2000, 0c6e205b] [0c6e2060, 0c6e20fe] [0c6e2100, 0c6e2131] [0c6e2140, 0c6e2286] [0c6e2290, 0c6e23cc]]
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
      puVar8 = (undefined *)FUN_0412c2d0(plVar3);
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
      puVar8 = (undefined *)FUN_0412c2d0(plVar3);
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
              FUN_0412c2d0(plVar3);
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
      puVar8 = (undefined *)FUN_0412c2d0();
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
                          puVar8 = (undefined *)FUN_0412c2d0();
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



/* ---- assembly ---- */
/* 0412a280 */  JMP 0x0ee326a0
/* 0c6e1d20 */  PUSH R15
/* 0c6e1d22 */  PUSH R14
/* 0c6e1d24 */  PUSH R12
/* 0c6e1d26 */  PUSH RBX
/* 0c6e1d27 */  PUSH RAX
/* 0c6e1d28 */  MOV RBX,RDI
/* 0c6e1d2b */  LEA RAX,[0xf3c5330]
/* 0c6e1d32 */  MOV qword ptr [RDI],RAX
/* 0c6e1d35 */  MOV R14,qword ptr [RDI + 0x3a0]
/* 0c6e1d3c */  TEST R14,R14
/* 0c6e1d3f */  JZ 0x0c6e1d64
/* 0c6e1d41 */  MOV RAX,-0x1
/* 0c6e1d48 */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0c6e1d4e */  TEST RAX,RAX
/* 0c6e1d51 */  JNZ 0x0c6e1d64
/* 0c6e1d53 */  MOV RAX,qword ptr [R14]
/* 0c6e1d56 */  MOV RDI,R14
/* 0c6e1d59 */  CALL qword ptr [RAX + 0x10]
/* 0c6e1d5c */  MOV RDI,R14
/* 0c6e1d5f */  CALL 0x0412c2d0
/* 0c6e1d64 */  MOV R14,qword ptr [RBX + 0x390]
/* 0c6e1d6b */  TEST R14,R14
/* 0c6e1d6e */  JZ 0x0c6e1d93
/* 0c6e1d70 */  MOV RAX,-0x1
/* 0c6e1d77 */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0c6e1d7d */  TEST RAX,RAX
/* 0c6e1d80 */  JNZ 0x0c6e1d93
/* 0c6e1d82 */  MOV RAX,qword ptr [R14]
/* 0c6e1d85 */  MOV RDI,R14
/* 0c6e1d88 */  CALL qword ptr [RAX + 0x10]
/* 0c6e1d8b */  MOV RDI,R14
/* 0c6e1d8e */  CALL 0x0412c2d0
/* 0c6e1d93 */  MOV R14,qword ptr [RBX + 0x370]
/* 0c6e1d9a */  TEST R14,R14
/* 0c6e1d9d */  JZ 0x0c6e1def
/* 0c6e1d9f */  MOV R15,qword ptr [RBX + 0x378]
/* 0c6e1da6 */  MOV RDI,R14
/* 0c6e1da9 */  CMP R14,R15
/* 0c6e1dac */  JNZ 0x0c6e1db9
/* 0c6e1dae */  JMP 0x0c6e1dd9
/* 0c6e1db0 */  ADD R15,-0x8
/* 0c6e1db4 */  CMP R15,R14
/* 0c6e1db7 */  JZ 0x0c6e1dd2
/* 0c6e1db9 */  MOV RDI,qword ptr [R15 + -0x8]
/* 0c6e1dbd */  MOV qword ptr [R15 + -0x8],0x0
/* 0c6e1dc5 */  TEST RDI,RDI
/* 0c6e1dc8 */  JZ 0x0c6e1db0
/* 0c6e1dca */  MOV RAX,qword ptr [RDI]
/* 0c6e1dcd */  CALL qword ptr [RAX + 0x8]
/* 0c6e1dd0 */  JMP 0x0c6e1db0
/* 0c6e1dd2 */  MOV RDI,qword ptr [RBX + 0x370]
/* 0c6e1dd9 */  MOV qword ptr [RBX + 0x378],R14
/* 0c6e1de0 */  MOV RSI,qword ptr [RBX + 0x380]
/* 0c6e1de7 */  SUB RSI,RDI
/* 0c6e1dea */  CALL 0x0412a280
/* 0c6e1def */  MOV R15,qword ptr [RBX + 0x350]
/* 0c6e1df6 */  TEST R15,R15
/* 0c6e1df9 */  JZ 0x0c6e1e65
/* 0c6e1dfb */  MOV R12,qword ptr [RBX + 0x358]
/* 0c6e1e02 */  MOV RDI,R15
/* 0c6e1e05 */  CMP R15,R12
/* 0c6e1e08 */  JNZ 0x0c6e1e19
/* 0c6e1e0a */  JMP 0x0c6e1e4f
/* 0c6e1e10 */  ADD R12,-0x10
/* 0c6e1e14 */  CMP R12,R15
/* 0c6e1e17 */  JZ 0x0c6e1e48
/* 0c6e1e19 */  MOV R14,qword ptr [R12 + -0x8]
/* 0c6e1e1e */  TEST R14,R14
/* 0c6e1e21 */  JZ 0x0c6e1e10
/* 0c6e1e23 */  MOV RAX,-0x1
/* 0c6e1e2a */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0c6e1e30 */  TEST RAX,RAX
/* 0c6e1e33 */  JNZ 0x0c6e1e10
/* 0c6e1e35 */  MOV RAX,qword ptr [R14]
/* 0c6e1e38 */  MOV RDI,R14
/* 0c6e1e3b */  CALL qword ptr [RAX + 0x10]
/* 0c6e1e3e */  MOV RDI,R14
/* 0c6e1e41 */  CALL 0x0412c2d0
/* 0c6e1e46 */  JMP 0x0c6e1e10
/* 0c6e1e48 */  MOV RDI,qword ptr [RBX + 0x350]
/* 0c6e1e4f */  MOV qword ptr [RBX + 0x358],R15
/* 0c6e1e56 */  MOV RSI,qword ptr [RBX + 0x360]
/* 0c6e1e5d */  SUB RSI,RDI
/* 0c6e1e60 */  CALL 0x0412a280
/* 0c6e1e65 */  MOV RDI,qword ptr [RBX + 0x348]
/* 0c6e1e6c */  TEST RDI,RDI
/* 0c6e1e6f */  JZ 0x0c6e1e76
/* 0c6e1e71 */  CALL 0x0412c2d0
/* 0c6e1e76 */  MOV RDI,qword ptr [RBX + 0x320]
/* 0c6e1e7d */  TEST RDI,RDI
/* 0c6e1e80 */  JZ 0x0c6e1e98
/* 0c6e1e82 */  MOV qword ptr [RBX + 0x328],RDI
/* 0c6e1e89 */  MOV RSI,qword ptr [RBX + 0x330]
/* 0c6e1e90 */  SUB RSI,RDI
/* 0c6e1e93 */  CALL 0x0412a280
/* 0c6e1e98 */  MOV R14,qword ptr [RBX + 0x308]
/* 0c6e1e9f */  TEST R14,R14
/* 0c6e1ea2 */  JZ 0x0c6e1eff
/* 0c6e1ea4 */  MOV R15,qword ptr [RBX + 0x310]
/* 0c6e1eab */  MOV RDI,R14
/* 0c6e1eae */  CMP R14,R15
/* 0c6e1eb1 */  JNZ 0x0c6e1ec9
/* 0c6e1eb3 */  JMP 0x0c6e1ee9
/* 0c6e1ec0 */  ADD R15,-0x8
/* 0c6e1ec4 */  CMP R15,R14
/* 0c6e1ec7 */  JZ 0x0c6e1ee2
/* 0c6e1ec9 */  MOV RDI,qword ptr [R15 + -0x8]
/* 0c6e1ecd */  MOV qword ptr [R15 + -0x8],0x0
/* 0c6e1ed5 */  TEST RDI,RDI
/* 0c6e1ed8 */  JZ 0x0c6e1ec0
/* 0c6e1eda */  MOV RAX,qword ptr [RDI]
/* 0c6e1edd */  CALL qword ptr [RAX + 0x8]
/* 0c6e1ee0 */  JMP 0x0c6e1ec0
/* 0c6e1ee2 */  MOV RDI,qword ptr [RBX + 0x308]
/* 0c6e1ee9 */  MOV qword ptr [RBX + 0x310],R14
/* 0c6e1ef0 */  MOV RSI,qword ptr [RBX + 0x318]
/* 0c6e1ef7 */  SUB RSI,RDI
/* 0c6e1efa */  CALL 0x0412a280
/* 0c6e1eff */  MOV RDI,qword ptr [RBX + 0x2f0]
/* 0c6e1f06 */  TEST RDI,RDI
/* 0c6e1f09 */  JZ 0x0c6e1f21
/* 0c6e1f0b */  MOV qword ptr [RBX + 0x2f8],RDI
/* 0c6e1f12 */  MOV RSI,qword ptr [RBX + 0x300]
/* 0c6e1f19 */  SUB RSI,RDI
/* 0c6e1f1c */  CALL 0x0412a280
/* 0c6e1f21 */  MOV RDI,qword ptr [RBX + 0x2e0]
/* 0c6e1f28 */  MOV qword ptr [RBX + 0x2e0],0x0
/* 0c6e1f33 */  TEST RDI,RDI
/* 0c6e1f36 */  JZ 0x0c6e1f3e
/* 0c6e1f38 */  MOV RAX,qword ptr [RDI]
/* 0c6e1f3b */  CALL qword ptr [RAX + 0x8]
/* 0c6e1f3e */  MOV R14,qword ptr [RBX + 0x2d8]
/* 0c6e1f45 */  MOV qword ptr [RBX + 0x2d8],0x0
/* 0c6e1f50 */  TEST R14,R14
/* 0c6e1f53 */  JZ 0x0c6e1f6a
/* 0c6e1f55 */  MOV RDI,R14
/* 0c6e1f58 */  CALL 0x0c6e2a40
/* 0c6e1f5d */  MOV ESI,0xf0
/* 0c6e1f62 */  MOV RDI,R14
/* 0c6e1f65 */  CALL 0x0412a280
/* 0c6e1f6a */  MOV RDI,qword ptr [RBX + 0x2c0]
/* 0c6e1f71 */  TEST RDI,RDI
/* 0c6e1f74 */  JZ 0x0c6e1f95
/* 0c6e1f76 */  NOP word ptr CS:[RAX + RAX*0x1]
/* 0c6e1f80 */  MOV R14,qword ptr [RDI]
/* 0c6e1f83 */  MOV ESI,0x20
/* 0c6e1f88 */  CALL 0x0412a280
/* 0c6e1f8d */  MOV RDI,R14
/* 0c6e1f90 */  TEST R14,R14
/* 0c6e1f93 */  JNZ 0x0c6e1f80
/* 0c6e1f95 */  MOV RDI,qword ptr [RBX + 0x2b0]
/* 0c6e1f9c */  MOV qword ptr [RBX + 0x2b0],0x0
/* 0c6e1fa7 */  TEST RDI,RDI
/* 0c6e1faa */  JZ 0x0c6e1fbc
/* 0c6e1fac */  MOV RSI,qword ptr [RBX + 0x2b8]
/* 0c6e1fb3 */  SHL RSI,0x3
/* 0c6e1fb7 */  CALL 0x0412a280
/* 0c6e1fbc */  LEA RDI,[RBX + 0x278]
/* 0c6e1fc3 */  CALL 0x04136a00
/* 0c6e1fc8 */  LEA RDI,[RBX + 0x248]
/* 0c6e1fcf */  CALL 0x04136a00
/* 0c6e1fd4 */  MOV R14,qword ptr [RBX + 0x208]
/* 0c6e1fdb */  TEST R14,R14
/* 0c6e1fde */  JZ 0x0c6e203f
/* 0c6e1fe0 */  MOV R15,qword ptr [RBX + 0x210]
/* 0c6e1fe7 */  MOV RDI,R14
/* 0c6e1fea */  CMP R14,R15
/* 0c6e1fed */  JNZ 0x0c6e2009
/* 0c6e1fef */  JMP 0x0c6e2029
/* 0c6e2000 */  ADD R15,-0x8
/* 0c6e2004 */  CMP R15,R14
/* 0c6e2007 */  JZ 0x0c6e2022
/* 0c6e2009 */  MOV RDI,qword ptr [R15 + -0x8]
/* 0c6e200d */  MOV qword ptr [R15 + -0x8],0x0
/* 0c6e2015 */  TEST RDI,RDI
/* 0c6e2018 */  JZ 0x0c6e2000
/* 0c6e201a */  MOV RAX,qword ptr [RDI]
/* 0c6e201d */  CALL qword ptr [RAX + 0x8]
/* 0c6e2020 */  JMP 0x0c6e2000
/* 0c6e2022 */  MOV RDI,qword ptr [RBX + 0x208]
/* 0c6e2029 */  MOV qword ptr [RBX + 0x210],R14
/* 0c6e2030 */  MOV RSI,qword ptr [RBX + 0x218]
/* 0c6e2037 */  SUB RSI,RDI
/* 0c6e203a */  CALL 0x0412a280
/* 0c6e203f */  MOV R14,qword ptr [RBX + 0x1e8]
/* 0c6e2046 */  TEST R14,R14
/* 0c6e2049 */  JZ 0x0c6e209f
/* 0c6e204b */  MOV R15,qword ptr [RBX + 0x1f0]
/* 0c6e2052 */  MOV RDI,R14
/* 0c6e2055 */  CMP R14,R15
/* 0c6e2058 */  JNZ 0x0c6e2069
/* 0c6e205a */  JMP 0x0c6e2089
/* 0c6e2060 */  ADD R15,-0x8
/* 0c6e2064 */  CMP R15,R14
/* 0c6e2067 */  JZ 0x0c6e2082
/* 0c6e2069 */  MOV RDI,qword ptr [R15 + -0x8]
/* 0c6e206d */  MOV qword ptr [R15 + -0x8],0x0
/* 0c6e2075 */  TEST RDI,RDI
/* 0c6e2078 */  JZ 0x0c6e2060
/* 0c6e207a */  MOV RAX,qword ptr [RDI]
/* 0c6e207d */  CALL qword ptr [RAX + 0x8]
/* 0c6e2080 */  JMP 0x0c6e2060
/* 0c6e2082 */  MOV RDI,qword ptr [RBX + 0x1e8]
/* 0c6e2089 */  MOV qword ptr [RBX + 0x1f0],R14
/* 0c6e2090 */  MOV RSI,qword ptr [RBX + 0x1f8]
/* 0c6e2097 */  SUB RSI,RDI
/* 0c6e209a */  CALL 0x0412a280
/* 0c6e209f */  MOV R14,qword ptr [RBX + 0x1d0]
/* 0c6e20a6 */  TEST R14,R14
/* 0c6e20a9 */  JNZ 0x0c6e2115
/* 0c6e20ab */  MOV RDI,qword ptr [RBX + 0x1c0]
/* 0c6e20b2 */  MOV qword ptr [RBX + 0x1c0],0x0
/* 0c6e20bd */  TEST RDI,RDI
/* 0c6e20c0 */  JZ 0x0c6e20d2
/* 0c6e20c2 */  MOV RSI,qword ptr [RBX + 0x1c8]
/* 0c6e20c9 */  SHL RSI,0x3
/* 0c6e20cd */  CALL 0x0412a280
/* 0c6e20d2 */  MOV RDI,qword ptr [RBX + 0x1b0]
/* 0c6e20d9 */  CALL 0x0c6e2a10
/* 0c6e20de */  MOV R14,qword ptr [RBX + 0x170]
/* 0c6e20e5 */  TEST R14,R14
/* 0c6e20e8 */  JZ 0x0c6e2180
/* 0c6e20ee */  MOV R15,qword ptr [RBX + 0x178]
/* 0c6e20f5 */  MOV RDI,R14
/* 0c6e20f8 */  CMP R14,R15
/* 0c6e20fb */  JNZ 0x0c6e2149
/* 0c6e20fd */  JMP 0x0c6e216a
/* 0c6e2100 */  MOV ESI,0x40
/* 0c6e2105 */  MOV RDI,R14
/* 0c6e2108 */  CALL 0x0412a280
/* 0c6e210d */  MOV R14,R15
/* 0c6e2110 */  TEST R15,R15
/* 0c6e2113 */  JZ 0x0c6e20ab
/* 0c6e2115 */  MOV R15,qword ptr [R14]
/* 0c6e2118 */  TEST byte ptr [R14 + 0x18],0x1
/* 0c6e211d */  JZ 0x0c6e2100
/* 0c6e211f */  MOV RSI,qword ptr [R14 + 0x18]
/* 0c6e2123 */  MOV RDI,qword ptr [R14 + 0x28]
/* 0c6e2127 */  AND RSI,-0x2
/* 0c6e212b */  CALL 0x0412a280
/* 0c6e2130 */  JMP 0x0c6e2100
/* 0c6e2140 */  ADD R15,-0x28
/* 0c6e2144 */  CMP R15,R14
/* 0c6e2147 */  JZ 0x0c6e2163
/* 0c6e2149 */  TEST byte ptr [R15 + -0x20],0x1
/* 0c6e214e */  JZ 0x0c6e2140
/* 0c6e2150 */  MOV RSI,qword ptr [R15 + -0x20]
/* 0c6e2154 */  MOV RDI,qword ptr [R15 + -0x10]
/* 0c6e2158 */  AND RSI,-0x2
/* 0c6e215c */  CALL 0x0412a280
/* 0c6e2161 */  JMP 0x0c6e2140
/* 0c6e2163 */  MOV RDI,qword ptr [RBX + 0x170]
/* 0c6e216a */  MOV qword ptr [RBX + 0x178],R14
/* 0c6e2171 */  MOV RSI,qword ptr [RBX + 0x180]
/* 0c6e2178 */  SUB RSI,RDI
/* 0c6e217b */  CALL 0x0412a280
/* 0c6e2180 */  MOV RSI,qword ptr [RBX + 0x160]
/* 0c6e2187 */  BT RSI,0x37
/* 0c6e218c */  JNC 0x0c6e21b0
/* 0c6e218e */  MOV RAX,-0xff000000000001
/* 0c6e2198 */  AND RSI,RAX
/* 0c6e219b */  ADD RSI,-0x8
/* 0c6e219f */  LEA RDI,[0xf5463b0]
/* 0c6e21a6 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0c6e21ad */  CALL qword ptr [RAX + 0x28]
/* 0c6e21b0 */  MOV RAX,0x80000000000000
/* 0c6e21ba */  MOV qword ptr [RBX + 0x160],0x0
/* 0c6e21c5 */  MOV RSI,qword ptr [RBX + 0x158]
/* 0c6e21cc */  TEST RSI,RAX
/* 0c6e21cf */  JZ 0x0c6e21f3
/* 0c6e21d1 */  MOV RAX,-0xff000000000001
/* 0c6e21db */  AND RSI,RAX
/* 0c6e21de */  ADD RSI,-0x8
/* 0c6e21e2 */  LEA RDI,[0xf5463b0]
/* 0c6e21e9 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0c6e21f0 */  CALL qword ptr [RAX + 0x28]
/* 0c6e21f3 */  MOV qword ptr [RBX + 0x158],0x0
/* 0c6e21fe */  TEST byte ptr [RBX + 0x110],0x1
/* 0c6e2205 */  JNZ 0x0c6e22b6
/* 0c6e220b */  TEST byte ptr [RBX + 0xf0],0x1
/* 0c6e2212 */  JNZ 0x0c6e22da
/* 0c6e2218 */  TEST byte ptr [RBX + 0xd0],0x1
/* 0c6e221f */  JNZ 0x0c6e22fe
/* 0c6e2225 */  TEST byte ptr [RBX + 0xb0],0x1
/* 0c6e222c */  JNZ 0x0c6e2322
/* 0c6e2232 */  TEST byte ptr [RBX + 0x90],0x1
/* 0c6e2239 */  JNZ 0x0c6e2346
/* 0c6e223f */  MOV RDI,qword ptr [RBX + 0x80]
/* 0c6e2246 */  TEST RDI,RDI
/* 0c6e2249 */  JZ 0x0c6e2250
/* 0c6e224b */  CALL 0x0412c2d0
/* 0c6e2250 */  MOV RDI,qword ptr [RBX + 0x58]
/* 0c6e2254 */  TEST RDI,RDI
/* 0c6e2257 */  JZ 0x0c6e2269
/* 0c6e2259 */  MOV qword ptr [RBX + 0x60],RDI
/* 0c6e225d */  MOV RSI,qword ptr [RBX + 0x68]
/* 0c6e2261 */  SUB RSI,RDI
/* 0c6e2264 */  CALL 0x0412a280
/* 0c6e2269 */  MOV R14,qword ptr [RBX + 0x40]
/* 0c6e226d */  TEST R14,R14
/* 0c6e2270 */  JZ 0x0c6e2386
/* 0c6e2276 */  MOV R15,qword ptr [RBX + 0x48]
/* 0c6e227a */  MOV RDI,R14
/* 0c6e227d */  CMP R14,R15
/* 0c6e2280 */  JNZ 0x0c6e229d
/* 0c6e2282 */  JMP 0x0c6e2376
/* 0c6e2290 */  ADD R15,-0x8
/* 0c6e2294 */  CMP R15,R14
/* 0c6e2297 */  JZ 0x0c6e2372
/* 0c6e229d */  MOV RDI,qword ptr [R15 + -0x8]
/* 0c6e22a1 */  MOV qword ptr [R15 + -0x8],0x0
/* 0c6e22a9 */  TEST RDI,RDI
/* 0c6e22ac */  JZ 0x0c6e2290
/* 0c6e22ae */  MOV RAX,qword ptr [RDI]
/* 0c6e22b1 */  CALL qword ptr [RAX + 0x8]
/* 0c6e22b4 */  JMP 0x0c6e2290
/* 0c6e22b6 */  MOV RSI,qword ptr [RBX + 0x110]
/* 0c6e22bd */  MOV RDI,qword ptr [RBX + 0x120]
/* 0c6e22c4 */  AND RSI,-0x2
/* 0c6e22c8 */  CALL 0x0412a280
/* 0c6e22cd */  TEST byte ptr [RBX + 0xf0],0x1
/* 0c6e22d4 */  JZ 0x0c6e2218
/* 0c6e22da */  MOV RSI,qword ptr [RBX + 0xf0]
/* 0c6e22e1 */  MOV RDI,qword ptr [RBX + 0x100]
/* 0c6e22e8 */  AND RSI,-0x2
/* 0c6e22ec */  CALL 0x0412a280
/* 0c6e22f1 */  TEST byte ptr [RBX + 0xd0],0x1
/* 0c6e22f8 */  JZ 0x0c6e2225
/* 0c6e22fe */  MOV RSI,qword ptr [RBX + 0xd0]
/* 0c6e2305 */  MOV RDI,qword ptr [RBX + 0xe0]
/* 0c6e230c */  AND RSI,-0x2
/* 0c6e2310 */  CALL 0x0412a280
/* 0c6e2315 */  TEST byte ptr [RBX + 0xb0],0x1
/* 0c6e231c */  JZ 0x0c6e2232
/* 0c6e2322 */  MOV RSI,qword ptr [RBX + 0xb0]
/* 0c6e2329 */  MOV RDI,qword ptr [RBX + 0xc0]
/* 0c6e2330 */  AND RSI,-0x2
/* 0c6e2334 */  CALL 0x0412a280
/* 0c6e2339 */  TEST byte ptr [RBX + 0x90],0x1
/* 0c6e2340 */  JZ 0x0c6e223f
/* 0c6e2346 */  MOV RSI,qword ptr [RBX + 0x90]
/* 0c6e234d */  MOV RDI,qword ptr [RBX + 0xa0]
/* 0c6e2354 */  AND RSI,-0x2
/* 0c6e2358 */  CALL 0x0412a280
/* 0c6e235d */  MOV RDI,qword ptr [RBX + 0x80]
/* 0c6e2364 */  TEST RDI,RDI
/* 0c6e2367 */  JNZ 0x0c6e224b
/* 0c6e236d */  JMP 0x0c6e2250
/* 0c6e2372 */  MOV RDI,qword ptr [RBX + 0x40]
/* 0c6e2376 */  MOV qword ptr [RBX + 0x48],R14
/* 0c6e237a */  MOV RSI,qword ptr [RBX + 0x50]
/* 0c6e237e */  SUB RSI,RDI
/* 0c6e2381 */  CALL 0x0412a280
/* 0c6e2386 */  MOV RDI,qword ptr [RBX + 0x28]
/* 0c6e238a */  TEST RDI,RDI
/* 0c6e238d */  JZ 0x0c6e239f
/* 0c6e238f */  MOV qword ptr [RBX + 0x30],RDI
/* 0c6e2393 */  MOV RSI,qword ptr [RBX + 0x38]
/* 0c6e2397 */  SUB RSI,RDI
/* 0c6e239a */  CALL 0x0412a280
/* 0c6e239f */  TEST byte ptr [RBX + 0x8],0x1
/* 0c6e23a3 */  JNZ 0x0c6e23b1
/* 0c6e23a5 */  ADD RSP,0x8
/* 0c6e23a9 */  POP RBX
/* 0c6e23aa */  POP R12
/* 0c6e23ac */  POP R14
/* 0c6e23ae */  POP R15
/* 0c6e23b0 */  RET
/* 0c6e23b1 */  MOV RSI,qword ptr [RBX + 0x8]
/* 0c6e23b5 */  MOV RDI,qword ptr [RBX + 0x18]
/* 0c6e23b9 */  AND RSI,-0x2
/* 0c6e23bd */  ADD RSP,0x8
/* 0c6e23c1 */  POP RBX
/* 0c6e23c2 */  POP R12
/* 0c6e23c4 */  POP R14
/* 0c6e23c6 */  POP R15
/* 0c6e23c8 */  JMP 0x0412a280
