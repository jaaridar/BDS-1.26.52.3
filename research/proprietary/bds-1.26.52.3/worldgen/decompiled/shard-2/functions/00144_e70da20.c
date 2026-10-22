/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe70da20
 * Label: string:minecraft:biome_music
 * Body:  [[0e70d9e6, 0e70d9ec] [0e70da20, 0e70db82] [0e70db90, 0e70dbf0]]
 * Ghidra: FUN_0e70da20
 */


undefined8
FUN_0e70da20(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
            code *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
            undefined8 param_9,undefined8 param_10,code *param_11,undefined8 param_12,
            undefined8 param_13,undefined8 param_14,long param_15)

{
  undefined4 uVar1;
  long lVar2;
  char in_AL;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *unaff_R14;
  bool bVar8;
  
  uVar1 = *(undefined4 *)(param_1 + 5);
  lVar3 = param_1[6];
  if (lVar3 == 0) {
    (*param_5)(0,param_1,0);
    lVar3 = param_1[6];
    in_AL = *(char *)((long)param_1 + 0x24);
    param_4 = (undefined8 *)*param_1;
  }
  if (in_AL == '\x02') {
    param_4 = param_1;
  }
  lVar3 = func_0x0488e200(uVar1,lVar3,0xf46fe986,param_4);
  if (lVar3 == 0) {
LAB_0e70d9e6:
    uVar5 = 0;
  }
  else {
    if ((int)unaff_R14[4] == -0x6067d687) {
      bVar8 = false;
    }
    else {
      func_0x0e70ddf0(&param_8);
      lVar2 = param_15;
      if ((param_15 != 0) && ((byte)(param_12._4_1_ - 1U) < 2)) {
        func_0x048b0900();
      }
      if (param_11 != (code *)0x0) {
        (*param_11)(&param_8);
      }
      if (lVar2 == 0) goto LAB_0e70d9e6;
      bVar8 = (int)unaff_R14[4] != -0x6067d687;
    }
    plVar4 = (long *)*unaff_R14;
    if (*(char *)((long)unaff_R14 + 0x24) == '\x02') {
      plVar4 = unaff_R14;
    }
    if ((bool)(plVar4 == (long *)0x0 | bVar8)) {
      lVar2 = unaff_R14[5];
      lVar7 = unaff_R14[6];
      if (lVar7 == 0) {
        (*(code *)unaff_R14[7])(0);
        lVar7 = unaff_R14[6];
      }
      plVar4 = (long *)func_0x0488e200(lVar2,lVar7,0x9f982979);
    }
    param_8 = 0;
    param_9 = 0;
    param_10 = 0;
    func_0x0e57f8f0(&param_8,*plVar4,plVar4[1],(plVar4[1] - *plVar4 >> 3) * 0x2e8ba2e8ba2e8ba3);
    lVar2 = *(long *)(lVar3 + 0x38);
    if (lVar2 != 0) {
      lVar7 = *(long *)(lVar3 + 0x40);
      lVar6 = lVar2;
      if (lVar2 != lVar7) {
        do {
          if ((ulong)*(uint *)(lVar7 + -8) != 0xffffffff) {
            (**(code **)(&UNK_0f4c7ac8 + (ulong)*(uint *)(lVar7 + -8) * 8))
                      ((undefined1 *)((long)register0x00000020 + 0xf),lVar7 + -0x50);
          }
          *(undefined4 *)(lVar7 + -8) = 0xffffffff;
          lVar7 = lVar7 + -0x58;
        } while (lVar7 != lVar2);
        lVar6 = *(long *)(lVar3 + 0x38);
      }
      *(long *)(lVar3 + 0x40) = lVar2;
      func_0x0412a280(lVar6,*(long *)(lVar3 + 0x48) - lVar6);
    }
    *(undefined8 *)(lVar3 + 0x38) = param_8;
    *(undefined8 *)(lVar3 + 0x40) = param_9;
    *(undefined8 *)(lVar3 + 0x48) = param_10;
    uVar5 = 1;
  }
  return uVar5;
}


