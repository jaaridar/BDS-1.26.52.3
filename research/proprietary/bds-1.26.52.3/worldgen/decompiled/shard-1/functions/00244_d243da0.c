/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd343da0 (ELF vaddr 0xd243da0)
 * Label: callee-of:0x51f0250
 * Body:  [[0d343da0, 0d343e55]]
 * Ghidra: FUN_0d343da0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_0d343da0(float param_1,float param_2,int *param_3)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined8 uStack_40;
  float fStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*param_3 < 1) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = 0.0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    lVar2 = 0;
    lVar1 = 0;
    fStack_38 = _DAT_011983f0;
    do {
      uStack_40 = CONCAT44(fStack_38 * param_2,fStack_38 * param_1);
      fVar4 = (float)func_0x0d2eb5d0(*(long *)(param_3 + 2) + lVar2,&uStack_40);
      fVar3 = fVar3 + fVar4 / fStack_38;
      fStack_38 = fStack_38 * _DAT_011986e0;
      lVar1 = lVar1 + 1;
      lVar2 = lVar2 + 0x80c;
    } while (lVar1 < *param_3);
  }
  return fVar3;
}


