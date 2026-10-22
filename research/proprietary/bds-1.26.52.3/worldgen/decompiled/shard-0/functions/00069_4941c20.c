/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4941c20
 * Label: string:/mnt/vss/_work/1/s/handheld/src-vanilla/vanilla_shared/src/c
 * Body:  [[04941b7e, 04941bae] [04941bf0, 04941cd6]]
 * Ghidra: FUN_04941c20
 */


void FUN_04941c20(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  long *unaff_RBX;
  long unaff_R12;
  long lVar5;
  long unaff_R13;
  long unaff_R14;
  undefined8 unaff_retaddr;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined8 in_stack_00000010;
  
  do {
    func_0x0412c2d0(param_1);
    lVar5 = unaff_R13;
    do {
      do {
        unaff_R13 = lVar5 + -0x10;
        if (unaff_R13 == unaff_R12) {
          *(long *)(unaff_R14 + 0xd8) = unaff_R12;
          func_0x0412a280(*(long *)(unaff_R14 + 0xd0),
                          *(long *)(unaff_R14 + 0xe0) - *(long *)(unaff_R14 + 0xd0));
          *(int *)(unaff_R14 + 0xd0) = (int)unaff_retaddr;
          *(int *)(unaff_R14 + 0xd4) = (int)((ulong)unaff_retaddr >> 0x20);
          *(undefined4 *)(unaff_R14 + 0xd8) = uStack0000000000000008;
          *(undefined4 *)(unaff_R14 + 0xdc) = uStack000000000000000c;
          *(undefined8 *)(unaff_R14 + 0xe0) = in_stack_00000010;
          *(undefined1 *)(unaff_R14 + 0xe8) = 1;
          cVar4 = func_0x04940660();
          if (cVar4 != '\0') {
            plVar3 = *(long **)(unaff_R14 + 0x10);
            LOCK();
            unaff_RBX[1] = unaff_RBX[1] + 1;
            UNLOCK();
            _uStack0000000000000008 = unaff_RBX;
            (**(code **)(*plVar3 + 0x28))(plVar3,&stack0x00000000,0);
            plVar3 = _uStack0000000000000008;
            if (_uStack0000000000000008 != (long *)0x0) {
              LOCK();
              plVar1 = _uStack0000000000000008 + 1;
              lVar5 = *plVar1;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (lVar5 == 0) {
                (**(code **)(*_uStack0000000000000008 + 0x10))(_uStack0000000000000008);
                func_0x0412c2d0(plVar3);
              }
            }
          }
          LOCK();
          plVar3 = unaff_RBX + 1;
          lVar5 = *plVar3;
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (lVar5 == 0) {
            (**(code **)(*unaff_RBX + 0x10))();
            func_0x0412c2d0();
          }
          return;
        }
        param_1 = *(long **)(lVar5 + -0x18);
        lVar5 = unaff_R13;
      } while (param_1 == (long *)0x0);
      LOCK();
      plVar3 = param_1 + 1;
      lVar2 = *plVar3;
      *plVar3 = *plVar3 + -1;
      UNLOCK();
    } while (lVar2 != 0);
    (**(code **)(*param_1 + 0x10))(param_1);
  } while( true );
}


