/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6cdef0 (ELF vaddr 0xc5cdef0)
 * Label: callee-of:0x523dc50
 * Body:  [[0c6cdef0, 0c6cdf83] [0c6cdf90, 0c6ce064]]
 * Ghidra: FUN_0c6cdef0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c6cdef0(long param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  ushort *puVar1;
  long *plVar2;
  ushort uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ushort *puVar8;
  uint uVar9;
  long lStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (DAT_0f6ea5a8 == '\0') {
    iVar4 = FUN_04108328(&DAT_0f6ea5a8);
    if (iVar4 != 0) {
      LOCK();
      UNLOCK();
      _DAT_0f6ea5a0 = _DAT_0f556458;
      _DAT_0f556458 = _DAT_0f556458 + 1;
      func_0x0410844d(&DAT_0f6ea5a8);
    }
  }
  uStack_58 = CONCAT62(uStack_58._2_6_,_DAT_0f6ea5a0);
  lVar5 = func_0x0ce66720(param_1 + 0x28,&uStack_58);
  if (lVar5 != 0) {
    lVar6 = (**(code **)(*param_2 + 0x10))(param_2,param_3);
    uVar3 = func_0x0c94f4e0(param_3,param_4);
    puVar8 = *(ushort **)(lVar5 + 8);
    puVar1 = *(ushort **)(lVar5 + 0x10);
    if (puVar8 != puVar1) {
      uVar9 = 0;
      lVar5 = lVar6;
      lStack_68 = lVar6;
      do {
        plVar2 = *(long **)(puVar8 + 4);
        if ((plVar2 != (long *)0x0) && ((*puVar8 & uVar3) != 0)) {
          lVar7 = (**(code **)(*plVar2 + 0x10))(plVar2,param_2,lVar5,param_3);
          if (lVar7 != lVar5) {
            uVar9 = uVar9 | *(uint *)(puVar8 + 8);
            lVar5 = lVar7;
            lStack_68 = lVar7;
          }
        }
        puVar8 = puVar8 + 0xc;
      } while (puVar8 != puVar1);
      if (lStack_68 != lVar6) {
        uStack_48 = 0;
        uStack_40 = 0;
        uStack_58 = 0;
        uStack_50 = 0;
        uStack_38 = 1;
        (**(code **)(*param_2 + 0xf8))(param_2,param_3,lStack_68,uVar9,0,&uStack_58);
      }
    }
  }
  return;
}


