/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x47b05a0
 * Label: callee-of:0x7e0b3b0
 * Body:  [[047b0444, 047b044c] [047b05a0, 047b065d]]
 * Ghidra: FUN_047b05a0
 */


bool FUN_047b05a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,code *param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13)

{
  char *pcVar1;
  int iVar2;
  long unaff_R12;
  bool bVar3;
  undefined8 unaff_retaddr;
  
  pcVar1 = (char *)(param_4 * 5 + -0x11);
  *pcVar1 = *pcVar1 + (char)param_4;
  iVar2 = (*param_8)(param_1,param_13,param_11);
  if (iVar2 != 0) {
    iVar2 = (*param_8)();
    if (iVar2 != 0) {
      iVar2 = func_0x04775c10(param_7,param_7,param_10,param_9);
      if (iVar2 != 0) {
        iVar2 = func_0x04771a30(param_7);
        if (iVar2 != 0) {
          iVar2 = func_0x047765e0(param_7,param_7,param_9);
          if (iVar2 == 0) goto LAB_047b0635;
        }
        iVar2 = func_0x04778f70(*(undefined8 *)(unaff_R12 + 0x18),param_7);
        bVar3 = iVar2 != 0;
        goto LAB_047b063c;
      }
    }
  }
LAB_047b0635:
  bVar3 = false;
LAB_047b063c:
  func_0x047729b0();
  func_0x047726d0(unaff_retaddr);
  return bVar3;
}


