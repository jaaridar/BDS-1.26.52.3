/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x495d8f0 (ELF vaddr 0x485d8f0)
 * Label: callee-of:0x48cac20
 * Body:  [[0495d8f0, 0495dab3]]
 * Ghidra: FUN_0495d8f0
 */


/* WARNING: Possible PIC construction at 0x0495d91d: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0495d961: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0495d9a5: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0495d9e9: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0495da2d: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0495da62: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0495da94: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0495d8f0(long *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_10;
  
  uStack_10 = 0x495d900;
  uVar2 = func_0x049cdca0(param_1 + 0x31);
  lVar3 = param_1[0x2d];
  if (lVar3 == 0) {
    lVar3 = param_1[0x2a];
    if (lVar3 != 0) {
      param_1[0x2b] = lVar3;
      uStack_10 = 0x495d944;
      uVar2 = func_0x0412a280(lVar3,param_1[0x2c] - lVar3);
    }
    lVar3 = param_1[0x26];
    if (lVar3 == 0) {
      lVar3 = param_1[0x23];
      if (lVar3 != 0) {
        param_1[0x24] = lVar3;
        uStack_10 = 0x495d988;
        uVar2 = func_0x0412a280(lVar3,param_1[0x25] - lVar3);
      }
      lVar3 = param_1[0x1f];
      if (lVar3 == 0) {
        lVar3 = param_1[0x1c];
        if (lVar3 != 0) {
          param_1[0x1d] = lVar3;
          uStack_10 = 0x495d9cc;
          uVar2 = func_0x0412a280(lVar3,param_1[0x1e] - lVar3);
        }
        lVar3 = param_1[0x18];
        if (lVar3 == 0) {
          lVar3 = param_1[0x15];
          if (lVar3 != 0) {
            param_1[0x16] = lVar3;
            uStack_10 = 0x495da10;
            uVar2 = func_0x0412a280(lVar3,param_1[0x17] - lVar3);
          }
          lVar3 = param_1[0x11];
          if (lVar3 == 0) {
            lVar3 = param_1[0xe];
            if (lVar3 != 0) {
              param_1[0xf] = lVar3;
              uStack_10 = 0x495da4e;
              uVar2 = func_0x0412a280(lVar3,param_1[0x10] - lVar3);
            }
            lVar3 = param_1[10];
            if (lVar3 == 0) {
              lVar3 = param_1[7];
              if (lVar3 != 0) {
                param_1[8] = lVar3;
                uStack_10 = 0x495da80;
                uVar2 = func_0x0412a280(lVar3,param_1[9] - lVar3);
              }
              lVar3 = param_1[3];
              if (lVar3 == 0) {
                lVar3 = *param_1;
                if (lVar3 == 0) {
                  return uVar2;
                }
                param_1[1] = lVar3;
              }
              else {
                param_1[4] = lVar3;
                register0x00000020 = (BADSPACEBASE *)&uStack_10;
                uStack_10 = 0x495da99;
              }
            }
            else {
              param_1[0xb] = lVar3;
              register0x00000020 = (BADSPACEBASE *)&uStack_10;
              uStack_10 = 0x495da67;
            }
          }
          else {
            param_1[0x12] = lVar3;
            register0x00000020 = (BADSPACEBASE *)&uStack_10;
            uStack_10 = 0x495da32;
          }
        }
        else {
          param_1[0x19] = lVar3;
          register0x00000020 = (BADSPACEBASE *)&uStack_10;
          uStack_10 = 0x495d9ee;
        }
      }
      else {
        param_1[0x20] = lVar3;
        register0x00000020 = (BADSPACEBASE *)&uStack_10;
        uStack_10 = 0x495d9aa;
      }
    }
    else {
      param_1[0x27] = lVar3;
      register0x00000020 = (BADSPACEBASE *)&uStack_10;
      uStack_10 = 0x495d966;
    }
  }
  else {
    param_1[0x2e] = lVar3;
    register0x00000020 = (BADSPACEBASE *)&uStack_10;
    uStack_10 = 0x495d922;
  }
  *(undefined8 *)((long)register0x00000020 + -8) = uVar2;
  if (lVar3 != 0) {
    pcVar1 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar1)(&DAT_0f5463b0,lVar3);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


