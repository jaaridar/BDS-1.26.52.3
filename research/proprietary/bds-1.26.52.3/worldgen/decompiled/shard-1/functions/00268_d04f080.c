/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd14f080 (ELF vaddr 0xd04f080)
 * Label: callee-of:0xc95ddd0
 * Body:  [[0d14f080, 0d14f0a4] [0d14f0b0, 0d14f215] [0d14f220, 0d14f256] [0d14f260, 0d14f294] [0d14f2a0, 0d14f2d4] [0d14f2e0, 0d14f316] [0d14f320, 0d14f356] [0d14f360, 0d14f39a]]
 * Ghidra: FUN_0d14f080
 */


/* WARNING: Possible PIC construction at 0x0d14f0ea: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0d14f158: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0d14f1b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0d14f368: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0d14f328: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0d14f2e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0d14f2a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0d14f268: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0d14f228: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0d14f26d) */
/* WARNING: Removing unreachable block (ram,0x0d14f2ad) */
/* WARNING: Removing unreachable block (ram,0x0d14f2ed) */
/* WARNING: Removing unreachable block (ram,0x0d14f32d) */
/* WARNING: Removing unreachable block (ram,0x0d14f36d) */
/* WARNING: Removing unreachable block (ram,0x0d14f22d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0d14f080(long *param_1)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 in_RAX;
  long lVar4;
  long lVar5;
  undefined8 uStack_20;
  
  lVar1 = param_1[0x1e];
  if (lVar1 == 0) {
    lVar4 = param_1[0x1b];
    if (lVar4 == 0) {
      lVar1 = param_1[0x19];
      param_1[0x19] = 0;
      if (lVar1 != 0) {
        uStack_20 = 0xd14f126;
        in_RAX = func_0x0412a280(lVar1,param_1[0x1a] << 3);
      }
      lVar4 = param_1[0x16];
      if (lVar4 == 0) {
        lVar4 = param_1[0x14];
        param_1[0x14] = 0;
        if (lVar4 == 0) {
          lVar4 = param_1[0x11];
          if (lVar4 == 0) {
            lVar1 = param_1[0xf];
            param_1[0xf] = 0;
            if (lVar1 != 0) {
              uStack_20 = 0xd14f18e;
              in_RAX = func_0x0412a280(lVar1,param_1[0x10] << 3);
            }
            lVar4 = param_1[0xc];
            if (lVar4 == 0) {
              lVar4 = param_1[10];
              param_1[10] = 0;
              if (lVar4 == 0) {
                lVar4 = param_1[7];
                if (lVar4 == 0) {
                  lVar1 = param_1[5];
                  param_1[5] = 0;
                  if (lVar1 != 0) {
                    uStack_20 = 0xd14f1e4;
                    in_RAX = func_0x0412a280(lVar1,param_1[6] << 3);
                  }
                  lVar4 = param_1[2];
                  if (lVar4 == 0) {
                    lVar4 = *param_1;
                    *param_1 = 0;
                    if (lVar4 == 0) {
                      return in_RAX;
                    }
                  }
                  else {
                    plVar2 = *(long **)(lVar4 + 0x20);
                    *(undefined8 *)(lVar4 + 0x20) = 0;
                    if (plVar2 != (long *)0x0) {
                      uStack_20 = 0xd14f393;
                      in_RAX = (**(code **)(*plVar2 + 8))();
                    }
                    register0x00000020 = (BADSPACEBASE *)&uStack_20;
                    uStack_20 = 0xd14f36d;
                  }
                }
                else {
                  lVar1 = *(long *)(lVar4 + 0x28);
                  if (lVar1 != 0) {
                    *(long *)(lVar4 + 0x30) = lVar1;
                    uStack_20 = 0xd14f355;
                    in_RAX = func_0x0412a280(lVar1,*(long *)(lVar4 + 0x38) - lVar1);
                  }
                  register0x00000020 = (BADSPACEBASE *)&uStack_20;
                  uStack_20 = 0xd14f32d;
                }
              }
              else {
                register0x00000020 = (BADSPACEBASE *)&uStack_20;
                uStack_20 = 0xd14f1b9;
              }
            }
            else {
              lVar1 = *(long *)(lVar4 + 0x20);
              if (lVar1 != 0) {
                *(long *)(lVar4 + 0x28) = lVar1;
                uStack_20 = 0xd14f315;
                in_RAX = func_0x0412a280(lVar1,*(long *)(lVar4 + 0x30) - lVar1);
              }
              register0x00000020 = (BADSPACEBASE *)&uStack_20;
              uStack_20 = 0xd14f2ed;
            }
          }
          else {
            plVar2 = *(long **)(lVar4 + 0x28);
            *(undefined8 *)(lVar4 + 0x28) = 0;
            if (plVar2 != (long *)0x0) {
              uStack_20 = 0xd14f2d3;
              in_RAX = (**(code **)(*plVar2 + 8))();
            }
            register0x00000020 = (BADSPACEBASE *)&uStack_20;
            uStack_20 = 0xd14f2ad;
          }
        }
        else {
          register0x00000020 = (BADSPACEBASE *)&uStack_20;
          uStack_20 = 0xd14f15d;
        }
      }
      else {
        plVar2 = *(long **)(lVar4 + 0x28);
        *(undefined8 *)(lVar4 + 0x28) = 0;
        if (plVar2 != (long *)0x0) {
          uStack_20 = 0xd14f293;
          in_RAX = (**(code **)(*plVar2 + 8))();
        }
        register0x00000020 = (BADSPACEBASE *)&uStack_20;
        uStack_20 = 0xd14f26d;
      }
    }
    else {
      lVar1 = *(long *)(lVar4 + 0x20);
      if (lVar1 != 0) {
        *(long *)(lVar4 + 0x28) = lVar1;
        uStack_20 = 0xd14f255;
        in_RAX = func_0x0412a280(lVar1,*(long *)(lVar4 + 0x30) - lVar1);
      }
      register0x00000020 = (BADSPACEBASE *)&uStack_20;
      uStack_20 = 0xd14f22d;
    }
  }
  else {
    lVar5 = param_1[0x1f];
    lVar4 = lVar1;
    if (lVar1 != lVar5) {
      do {
        plVar2 = *(long **)(lVar5 + -0x18);
        *(undefined8 *)(lVar5 + -0x18) = 0;
        if (plVar2 != (long *)0x0) {
          uStack_20 = 0xd14f0d0;
          in_RAX = (**(code **)(*plVar2 + 8))();
        }
        lVar5 = lVar5 + -0x20;
      } while (lVar5 != lVar1);
      lVar4 = param_1[0x1e];
    }
    param_1[0x1f] = lVar1;
    register0x00000020 = (BADSPACEBASE *)&uStack_20;
    uStack_20 = 0xd14f0ef;
  }
  *(undefined8 *)((long)register0x00000020 + -8) = in_RAX;
  if (lVar4 != 0) {
    pcVar3 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar3)(&DAT_0f5463b0,lVar4);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


