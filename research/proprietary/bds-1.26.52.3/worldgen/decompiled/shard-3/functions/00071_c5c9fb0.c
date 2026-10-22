/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6c9fb0 (ELF vaddr 0xc5c9fb0)
 * Label: JigsawBlock::vslot6
 * Body:  [[0c6c9fb0, 0c6ca123]]
 * Ghidra: wg_JigsawBlock__vslot6
 */


undefined8
wg_JigsawBlock__vslot6
          (undefined8 param_1,undefined4 param_2,long *param_3,long param_4,undefined8 param_5,
          undefined8 param_6,float *param_7,undefined8 param_8,undefined8 param_9)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 uStack_64;
  undefined8 uStack_60;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(param_4 + 0x80);
  if (lVar1 == 0) {
    (**(code **)(*param_3 + 0x20))(&uStack_60,param_3,param_4,param_5,param_6,param_9);
    if ((((float)uStack_60 < fStack_54) && (uStack_60._4_4_ < fStack_50)) && (fStack_58 < fStack_4c)
       ) {
      if (param_7 != (float *)0x0) {
        if (fStack_54 <= *param_7) {
          return 1;
        }
        if (param_7[3] <= (float)uStack_60) {
          return 1;
        }
        if (fStack_50 <= param_7[1]) {
          return 1;
        }
        if (param_7[4] <= uStack_60._4_4_) {
          return 1;
        }
        if (fStack_4c <= param_7[2]) {
          return 1;
        }
        if (param_7[5] <= fStack_58) {
          return 1;
        }
      }
      func_0x0766a830(param_8,&uStack_60);
      return 1;
    }
    uVar3 = 0;
  }
  else {
    lVar2 = FUN_0c8452b0(param_4);
    if (lVar2 == 0) {
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_3c = 0;
      uStack_64 = 0;
    }
    else {
      uStack_48 = func_0x0cd4eb50(lVar2,param_6);
      uStack_40 = extraout_XMM0_Dc;
      uStack_3c = extraout_XMM0_Dd;
      uStack_64 = param_2;
    }
    uStack_38 = func_0x0eee4390((int)uStack_48);
    fVar4 = (float)func_0x0eee4390(uStack_48._4_4_);
    uStack_60 = CONCAT44((int)fVar4,(int)(float)uStack_38);
    fVar4 = (float)func_0x0eee4390(uStack_64);
    fStack_58 = (float)(int)fVar4;
    uVar3 = func_0x0ce4aab0(lVar1,param_6,&uStack_60,param_7,param_8);
  }
  return uVar3;
}


