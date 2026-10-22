/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2d8280 (ELF vaddr 0xd1d8280)
 * Label: caller-of-seed
 * Body:  [[0d2d8280, 0d2d83fd]]
 * Ghidra: FUN_0d2d8280
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0d2d8280(undefined8 *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined1 uStack_29;
  undefined8 *puStack_28;
  
  param_1[1] = 0;
  *param_1 = &UNK_0f45f7f8;
  plVar3 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (plVar3 == (long *)0x0) goto LAB_0d2d83e7;
  do {
    plVar3[1] = 0;
    plVar3[2] = 0;
    *plVar3 = (long)&UNK_0f45efe8;
    plVar3[3] = (long)&UNK_0f45e618;
    param_1[3] = &UNK_0f45e658;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[4] = &UNK_0f45e690;
    lVar2 = *param_2;
    param_2 = (long *)param_2[1];
    if (param_2 == (long *)0x0) {
      if (lVar2 != 0) goto LAB_0d2d8325;
    }
    else {
      LOCK();
      param_2[1] = param_2[1] + 1;
      UNLOCK();
      if (lVar2 != 0) {
        LOCK();
        param_2[1] = param_2[1] + 1;
        UNLOCK();
LAB_0d2d8325:
        plVar4 = plVar3 + 1;
        param_1[1] = lVar2;
        param_1[2] = param_2;
        LOCK();
        lVar2 = *plVar4;
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (lVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          func_0x0412c2d0(plVar3);
        }
        if (param_2 != (long *)0x0) {
          LOCK();
          plVar3 = param_2 + 1;
          lVar2 = *plVar3;
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (lVar2 == 0) {
            (**(code **)(*param_2 + 0x10))(param_2);
            func_0x0412c2d0(param_2);
          }
        }
        puStack_28 = param_1 + 4;
        uVar1 = *(uint *)(param_3 + 0x18);
        if ((ulong)*(uint *)(param_1 + 6) == 0xffffffff) {
          if (uVar1 == 0xffffffff) {
            return param_1;
          }
        }
        else if (uVar1 == 0xffffffff) {
          (**(code **)(&UNK_0f45ed28 + (ulong)*(uint *)(param_1 + 6) * 8))(&uStack_29);
          *(undefined4 *)(param_1 + 6) = 0xffffffff;
          return param_1;
        }
        (**(code **)(&UNK_0f45f028 + (ulong)uVar1 * 8))(&puStack_28,puStack_28,param_3 + 8);
        return param_1;
      }
    }
    plVar3 = (long *)func_0x04890760();
LAB_0d2d83e7:
    func_0x0eec74c0(0x20,0);
  } while( true );
}


