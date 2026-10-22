/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb6c3f10 (ELF vaddr 0xb5c3f10)
 * Label: callee-of:0xaf95f80
 * Body:  [[0b6c3f10, 0b6c3f7a] [0b6c3f80, 0b6c40a3]]
 * Ghidra: FUN_0b6c3f10
 */


void FUN_0b6c3f10(undefined8 param_1,short param_2,long param_3)

{
  ulong uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [168];
  
  cVar2 = func_0x04864220();
  if (cVar2 == '\0') {
    cVar2 = func_0x04864270(param_1);
    if (cVar2 == '\0') {
      func_0x04863480(auStack_f8,param_1);
      func_0x0b6c2ee0(auStack_d8,auStack_f8,(int)param_2);
      uVar1 = *(ulong *)(param_3 + 8);
      if (uVar1 < *(ulong *)(param_3 + 0x10)) {
        func_0x0c6e7950(uVar1,auStack_d8);
        lVar5 = uVar1 + 0xa8;
        *(long *)(param_3 + 8) = lVar5;
      }
      else {
        lVar5 = func_0x059fd140(param_3,auStack_d8);
      }
      *(long *)(param_3 + 8) = lVar5;
      func_0x04abe980(auStack_d8);
      func_0x04863610(auStack_f8);
    }
    else {
      uVar3 = func_0x048641f0(param_1);
      func_0x0567e110(param_3,uVar3);
      func_0x04865630(auStack_108,param_1);
      while( true ) {
        func_0x048656b0(auStack_d8,param_1);
        cVar2 = func_0x04862c80(auStack_108,auStack_d8);
        func_0x04862b40(auStack_d8);
        if (cVar2 != '\0') break;
        uVar4 = func_0x04862b80(auStack_108);
        func_0x04863480(auStack_e8,uVar4);
        func_0x0b6c2ee0(auStack_d8,auStack_e8,(int)param_2);
        uVar1 = *(ulong *)(param_3 + 8);
        if (uVar1 < *(ulong *)(param_3 + 0x10)) {
          func_0x0c6e7950(uVar1,auStack_d8);
          lVar5 = uVar1 + 0xa8;
          *(long *)(param_3 + 8) = lVar5;
        }
        else {
          lVar5 = func_0x059fd140(param_3,auStack_d8);
        }
        *(long *)(param_3 + 8) = lVar5;
        func_0x04abe980(auStack_d8);
        func_0x04863610(auStack_e8);
        func_0x04862ba0(auStack_108);
      }
      func_0x04862b40(auStack_108);
    }
  }
  return;
}


