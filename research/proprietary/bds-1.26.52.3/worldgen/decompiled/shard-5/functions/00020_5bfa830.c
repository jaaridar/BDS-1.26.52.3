/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5cfa830 (ELF vaddr 0x5bfa830)
 * Label: callee2-of:0x5bd89b0
 * Body:  [[05cfa830, 05cfa8ec]]
 * Ghidra: FUN_05cfa830
 */


undefined8 FUN_05cfa830(undefined8 param_1,long param_2,long *param_3)

{
  long *plVar1;
  long *plStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long alStack_48 [4];
  long *plStack_28;
  
  plStack_60 = (long *)0x0;
  uStack_50 = 0;
  puStack_58 = &UNK_0f007e28;
  plVar1 = (long *)param_3[4];
  if (plVar1 == (long *)0x0) {
    plStack_28 = (long *)0x0;
  }
  else if (plVar1 == param_3) {
    plStack_28 = alStack_48;
    (**(code **)(*plVar1 + 0x18))(plVar1,plStack_28);
  }
  else {
    param_3[4] = 0;
    plStack_28 = plVar1;
  }
  (**(code **)(*(long *)(param_2 + 0x58) + 0x10))
            (param_1,(long *)(param_2 + 0x58),&puStack_58,1,&plStack_60,0);
  if (puStack_58 != (undefined *)0x0) {
    (**(code **)(puStack_58 + 8))(&puStack_58);
  }
  plVar1 = plStack_60;
  plStack_60 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return param_1;
}


