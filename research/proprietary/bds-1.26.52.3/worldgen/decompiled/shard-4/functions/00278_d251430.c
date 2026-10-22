/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd351430 (ELF vaddr 0xd251430)
 * Label: callee-of:0xc973030
 * Body:  [[0d351430, 0d3514a5] [0d3514b0, 0d35150d] [0d351510, 0d35159c] [0d35159f, 0d3515b4]]
 * Ghidra: FUN_0d351430
 */


void FUN_0d351430(long param_1,long *param_2,int param_3,int param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  char cVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  long lStack_40;
  undefined1 uStack_38;
  
  lVar5 = (**(code **)(*param_2 + 0x130))(param_2);
  iStack_54 = *(short *)(lVar5 + 0xa8) + 1;
  iStack_48 = (int)*(short *)(lVar5 + 0xaa);
  iStack_4c = param_3 + 0x10;
  iStack_44 = param_4 + 0x10;
  lVar5 = param_1 + 0x58;
  uStack_38 = 1;
  iStack_58 = param_3;
  iStack_50 = param_4;
  lStack_40 = lVar5;
  FUN_0412d550(lVar5);
  puVar10 = *(undefined8 **)(param_1 + 0x40);
  do {
    if (puVar10 == (undefined8 *)0x0) {
      FUN_0412d610(lVar5);
      return;
    }
    cVar4 = (**(code **)(*(long *)puVar10[3] + 0x18))();
    if (((((cVar4 != '\0') && (lVar1 = puVar10[3], iStack_58 <= *(int *)(lVar1 + 0x14))) &&
         (*(int *)(lVar1 + 8) <= iStack_4c)) &&
        ((iStack_50 <= *(int *)(lVar1 + 0x1c) && (*(int *)(lVar1 + 0x10) <= iStack_44)))) &&
       ((iStack_54 <= *(int *)(lVar1 + 0x18) && (*(int *)(lVar1 + 0xc) <= iStack_48)))) {
      puVar2 = *(undefined8 **)(lVar1 + 0x30);
      for (puVar9 = *(undefined8 **)(lVar1 + 0x28); puVar9 != puVar2; puVar9 = puVar9 + 1) {
        plVar6 = (long *)(**(code **)(*param_2 + 0x150))(param_2);
        lVar7 = (**(code **)(*plVar6 + 0xab8))(plVar6);
        lVar1 = *(long *)(lVar7 + 0x18);
        if ((lVar1 != 0) && (7 < (int)((ulong)(*(long *)(lVar7 + 0x20) - lVar1) >> 4) * -0x11111111)
           ) {
          if (*(int *)(lVar1 + 0x698) != 1) {
            uVar8 = func_0x04931450();
            uVar8 = func_0x04882e20(uVar8);
            func_0x06cfcdf0(&lStack_40);
            _Unwind_Resume(uVar8);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (*(char *)(lVar1 + 0x694) == '\x01') {
            (**(code **)(*(long *)*puVar9 + 0x30))((long *)*puVar9,param_2,param_5,&iStack_58);
          }
        }
      }
    }
    puVar10 = (undefined8 *)*puVar10;
  } while( true );
}


