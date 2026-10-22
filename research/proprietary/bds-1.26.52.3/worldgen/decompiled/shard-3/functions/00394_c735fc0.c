/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc835fc0 (ELF vaddr 0xc735fc0)
 * Label: caller-of-seed
 * Body:  [[0c835fc0, 0c83612f]]
 * Ghidra: FUN_0c835fc0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c835fc0(long *param_1,long param_2,int *param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  undefined4 uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uStack_5c;
  int iStack_54;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  if ((*(int *)(param_2 + 0xa30) != -0x80000000 ||
       (*(int *)(param_2 + 0xa2c) != -0x80000000 || *(int *)(param_2 + 0xa28) != -0x80000000)) &&
     (*(int *)(param_2 + 0xa40) == 0)) {
    uStack_5c = 0;
    iStack_54 = 0;
    uStack_38 = param_4;
    plVar6 = (long *)func_0x0412c300(*(undefined8 *)(param_2 + 0x1c8));
    plVar4 = *(long **)(param_2 + 0x1c0);
    LOCK();
    plVar1 = plVar6 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      func_0x0412c2d0(plVar6);
    }
    uVar7 = (**(code **)(*plVar4 + 0x68))(plVar4);
    (**(code **)(*param_1 + 600))(param_1,uVar7,param_3,&uStack_5c);
    uVar5 = _DAT_01de6244;
    iVar3 = *(int *)(param_2 + 0xa28);
    param_4 = uStack_38;
    if ((((iVar3 == *param_3) && (*(int *)(param_2 + 0xa2c) == param_3[1])) &&
        (*(int *)(param_2 + 0xa30) == param_3[2])) ||
       (((iVar3 == (int)uStack_5c && (*(int *)(param_2 + 0xa2c) == uStack_5c._4_4_)) &&
        (*(int *)(param_2 + 0xa30) == iStack_54)))) {
      uStack_48 = _DAT_01de6244;
      uStack_50 = _DAT_01de623c;
      uStack_44 = (undefined4)_DAT_01de623c;
      uStack_40 = (undefined4)((ulong)_DAT_01de623c >> 0x20);
      uStack_3c = _DAT_01de6244;
      *(undefined8 *)(param_2 + 0xa28) = _DAT_01de623c;
      *(undefined4 *)(param_2 + 0xa30) = uVar5;
      *(undefined4 *)(param_2 + 0xa34) = uStack_44;
      *(ulong *)(param_2 + 0xa38) = CONCAT44(uVar5,uStack_40);
      *(undefined4 *)(param_2 + 0xa40) = 3;
    }
  }
  func_0x0c6ca820(param_1,param_2,param_3,param_4);
  return;
}


