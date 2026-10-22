/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6c9ae0 (ELF vaddr 0xc5c9ae0)
 * Label: JigsawBlock::vslot3
 * Body:  [[0c6c9ae0, 0c6c9d1d]]
 * Ghidra: wg_JigsawBlock__vslot3
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long wg_JigsawBlock__vslot3
               (long param_1,long *param_2,long param_3,long *param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7,char param_8,undefined8 param_9)

{
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 auStack_48 [3];
  
  puVar4 = &uStack_68;
  puVar3 = &uStack_68;
  uStack_58 = (undefined4)_DAT_0f72b538;
  uStack_54 = (undefined4)((ulong)_DAT_0f72b538 >> 0x20);
  uStack_68 = CONCAT44(uRam000000000f72b52c,_DAT_0f72b528);
  uStack_60 = uRam000000000f72b530;
  uStack_5c = uRam000000000f72b534;
  uStack_50 = param_6;
  cVar1 = (**(code **)(*param_2 + 0x2d0))(param_2);
  if (cVar1 != '\0') {
    lVar2 = (**(code **)(*param_4 + 0x28))(param_4,param_5);
    if (param_8 == '\x02') {
      (**(code **)(**(long **)(lVar2 + 0x68) + 0x28))
                (*(long **)(lVar2 + 0x68),&uStack_68,lVar2,param_4,param_5);
    }
    else if (param_8 == '\x01') {
      (**(code **)(**(long **)(lVar2 + 0x68) + 0x20))
                (&uStack_68,*(long **)(lVar2 + 0x68),lVar2,param_4,param_5,param_9);
      puVar3 = &uStack_68;
    }
    else if (param_8 == '\0') {
      puVar3 = (undefined8 *)
               (**(code **)(**(long **)(lVar2 + 0x68) + 0x40))
                         (*(long **)(lVar2 + 0x68),lVar2,param_4,param_5,&uStack_68);
    }
    else {
      uStack_60 = _DAT_0f72b518;
      uStack_68 = _DAT_0f72b510;
      uStack_5c = (undefined4)_DAT_0f72b51c;
      uStack_58 = (undefined4)((ulong)_DAT_0f72b51c >> 0x20);
      uStack_54 = _DAT_0f72b524;
      puVar3 = &uStack_68;
    }
    uStack_58 = (undefined4)puVar3[2];
    uStack_54 = (undefined4)((ulong)puVar3[2] >> 0x20);
    uStack_68 = *puVar3;
    uStack_60 = *(undefined4 *)(puVar3 + 1);
    uStack_5c = *(undefined4 *)((long)puVar3 + 0xc);
    func_0x0c9eac40(param_1,param_5,uStack_50,param_7,&uStack_68);
    if (*(int *)(param_1 + 0x18) - 4U < 0xfffffffe) {
      return param_1;
    }
    if (*(long *)(param_1 + 0x40) != 0) {
      func_0x0412c2d0();
    }
  }
  if (param_8 == '\x02') {
    (**(code **)(**(long **)(param_3 + 0x68) + 0x28))
              (*(long **)(param_3 + 0x68),&uStack_68,param_3,param_4,param_5);
    puVar4 = &uStack_68;
  }
  else if (param_8 == '\x01') {
    (**(code **)(**(long **)(param_3 + 0x68) + 0x20))
              (auStack_48,*(long **)(param_3 + 0x68),param_3,param_4,param_5,param_9);
    uStack_58 = (undefined4)auStack_48[2];
    uStack_54 = (undefined4)((ulong)auStack_48[2] >> 0x20);
    uStack_68 = auStack_48[0];
    uStack_60 = (undefined4)auStack_48[1];
    uStack_5c = (undefined4)((ulong)auStack_48[1] >> 0x20);
  }
  else if (param_8 == '\0') {
    puVar4 = (undefined8 *)
             (**(code **)(**(long **)(param_3 + 0x68) + 0x40))
                       (*(long **)(param_3 + 0x68),param_3,param_4,param_5,&uStack_68);
  }
  else {
    uStack_60 = _DAT_0f72b518;
    uStack_68 = _DAT_0f72b510;
    uStack_5c = (undefined4)_DAT_0f72b51c;
    uStack_58 = (undefined4)((ulong)_DAT_0f72b51c >> 0x20);
    uStack_54 = _DAT_0f72b524;
    puVar4 = &uStack_68;
  }
  uStack_58 = (undefined4)puVar4[2];
  uStack_54 = (undefined4)((ulong)puVar4[2] >> 0x20);
  uStack_68 = *puVar4;
  uStack_60 = *(undefined4 *)(puVar4 + 1);
  uStack_5c = *(undefined4 *)((long)puVar4 + 0xc);
  func_0x0c9eac40(param_1,param_5,uStack_50,param_7,&uStack_68);
  return param_1;
}


