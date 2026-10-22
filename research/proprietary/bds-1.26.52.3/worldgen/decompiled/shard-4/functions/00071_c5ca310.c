/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6ca310 (ELF vaddr 0xc5ca310)
 * Label: JigsawBlock::vslot7
 * Body:  [[0c6ca310, 0c6ca47d]]
 * Ghidra: wg_JigsawBlock__vslot7
 */


void wg_JigsawBlock__vslot7
               (undefined8 param_1,undefined4 param_2,long *param_3,long param_4,undefined8 param_5,
               undefined8 param_6,float *param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  float fVar3;
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
    (**(code **)(*param_3 + 0x20))(&uStack_60,param_3,param_4,param_5,param_6,0);
    if ((float)uStack_60 < fStack_54) {
      if (uStack_60._4_4_ < fStack_50) {
        if ((fStack_58 < fStack_4c) &&
           ((param_7 == (float *)0x0 ||
            ((((*param_7 < fStack_54 && ((float)uStack_60 < param_7[3])) && (param_7[1] < fStack_50)
              ) && (((uStack_60._4_4_ < param_7[4] && (param_7[2] < fStack_4c)) &&
                    (fStack_58 < param_7[5])))))))) {
          func_0x0766a830(param_8,&uStack_60);
        }
      }
    }
  }
  else {
    lVar2 = func_0x0c8452b0(param_4);
    if (lVar2 == 0) {
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_3c = 0;
      uStack_64 = 0;
    }
    else {
      uStack_48 = FUN_0cd4eb50(lVar2,param_6);
      uStack_40 = extraout_XMM0_Dc;
      uStack_3c = extraout_XMM0_Dd;
      uStack_64 = param_2;
    }
    uStack_38 = func_0x0eee4390((int)uStack_48);
    fVar3 = (float)func_0x0eee4390(uStack_48._4_4_);
    uStack_60 = CONCAT44((int)fVar3,(int)(float)uStack_38);
    fVar3 = (float)func_0x0eee4390(uStack_64);
    fStack_58 = (float)(int)fVar3;
    func_0x0ce4aab0(lVar1,param_6,&uStack_60,param_7,param_8);
  }
  return;
}


