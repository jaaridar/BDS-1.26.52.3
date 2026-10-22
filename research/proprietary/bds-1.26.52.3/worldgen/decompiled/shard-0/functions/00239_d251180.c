/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd351180 (ELF vaddr 0xd251180)
 * Label: callee-of:0x517c470
 * Body:  [[0d351180, 0d3511b0] [0d3511c0, 0d351249]]
 * Ghidra: FUN_0d351180
 */


void FUN_0d351180(long param_1,int *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lStack_30;
  undefined1 uStack_28;
  
  lVar1 = param_1 + 0x58;
  uStack_28 = 1;
  lStack_30 = lVar1;
  func_0x0412d550(lVar1);
  puVar6 = *(undefined8 **)(param_1 + 0x40);
  do {
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0412d610(lVar1);
      return;
    }
    cVar4 = (**(code **)(*(long *)puVar6[3] + 0x18))();
    if ((((cVar4 != '\0') && (lVar2 = puVar6[3], *param_2 <= *(int *)(lVar2 + 0x14))) &&
        (*(int *)(lVar2 + 8) <= param_2[3])) &&
       ((param_2[2] <= *(int *)(lVar2 + 0x1c) && (*(int *)(lVar2 + 0x10) <= param_2[5])))) {
      if (*(long **)(param_3 + 0x20) == (long *)0x0) {
        uVar5 = FUN_04891200();
        uVar5 = FUN_04882e20(uVar5);
        func_0x06cfcdf0(&lStack_30);
        func_0x0eee2d70(uVar5);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (**(code **)(**(long **)(param_3 + 0x20) + 0x30))();
    }
    puVar6 = (undefined8 *)*puVar6;
  } while( true );
}


