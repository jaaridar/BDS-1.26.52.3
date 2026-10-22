/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcad8990 (ELF vaddr 0xc9d8990)
 * Label: callee-of:0xca31410
 * Body:  [[0cad8990, 0cad89d5] [0cad89e0, 0cad8a83]]
 * Ghidra: FUN_0cad8990
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0cad8990(long *param_1,long param_2,long param_3,undefined1 param_4,undefined4 param_5,
                   undefined4 param_6)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lStack_38;
  
  lVar1 = param_2 + 0x330;
  lStack_38 = param_3;
  FUN_0412d680(lVar1);
  plVar2 = *(long **)(param_2 + 0x358);
  do {
    if (plVar2 == *(long **)(param_2 + 0x360)) {
      func_0x0412d6b0(lVar1);
LAB_0cad8a20:
      lVar3 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18b0);
      if (lVar3 == 0) {
        FUN_0eec74c0(0x18b0,0);
      }
      func_0x0cad8bf0(lVar3,param_2,&lStack_38,param_4,param_5,1,param_6);
LAB_0cad8a61:
      *param_1 = lVar3;
      return param_1;
    }
    if ((*plVar2 != 0) && (*(long *)(*plVar2 + 0x50) == param_3)) {
      LOCK();
      *(long *)(param_2 + 0x370) = *(long *)(param_2 + 0x370) + -1;
      UNLOCK();
      lVar3 = *plVar2;
      *plVar2 = 0;
      func_0x0412d6b0(lVar1);
      if (lVar3 == 0) goto LAB_0cad8a20;
      goto LAB_0cad8a61;
    }
    plVar2 = plVar2 + 1;
  } while( true );
}


