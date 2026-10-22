/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe5d0070
 * Label: string:minecraft:biome_music
 * Body:  [[0e5d0070, 0e5d01bb]]
 * Ghidra: FUN_0e5d0070
 */


void FUN_0e5d0070(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *extraout_RDX;
  bool bVar4;
  undefined8 auStack_98 [2];
  undefined *puStack_88;
  code *pcStack_80;
  undefined4 uStack_78;
  undefined1 uStack_74;
  undefined8 uStack_70;
  long lStack_68;
  code *pcStack_60;
  undefined8 *apuStack_58 [2];
  undefined8 uStack_48;
  code *pcStack_40;
  undefined4 uStack_38;
  undefined1 uStack_34;
  undefined8 uStack_30;
  undefined8 uStack_28;
  code *pcStack_20;
  
  uVar2 = func_0x0eee2d70();
  func_0x04882e20(uVar2);
  uStack_70 = extraout_RDX[5];
  puStack_88 = &UNK_0488e0b0;
  uStack_78 = 0x48b5725f;
  pcStack_80 = (code *)0x0;
  uStack_74 = 0;
  auStack_98[0] = 0;
  lStack_68 = 0;
  pcStack_60 = (code *)0x0;
  pcVar1 = (code *)extraout_RDX[7];
  if (pcVar1 == (code *)0x0) {
    bVar4 = false;
  }
  else {
    apuStack_58[0] = extraout_RDX;
    if (*(char *)((long)extraout_RDX + 0x24) != '\x02') {
      apuStack_58[0] = (undefined8 *)*extraout_RDX;
    }
    uStack_48 = extraout_RDX[2];
    uStack_38 = *(undefined4 *)(extraout_RDX + 4);
    pcStack_40 = (code *)0x0;
    uStack_34 = 4;
    uStack_28 = extraout_RDX[6];
    uStack_30 = uStack_70;
    pcStack_20 = pcVar1;
    (*pcVar1)(0x100,apuStack_58,auStack_98);
    if (pcStack_40 != (code *)0x0) {
      (*pcStack_40)(apuStack_58);
    }
    bVar4 = pcStack_60 != (code *)0x0;
  }
  (**(code **)(*param_2 + 0x80))(param_2,bVar4);
  uVar2 = uStack_70;
  if (pcStack_60 != (code *)0x0) {
    lVar3 = lStack_68;
    if (lStack_68 == 0) {
      (*pcStack_60)(0,auStack_98,0);
      lVar3 = lStack_68;
      if (lStack_68 == 0) {
        lVar3 = func_0x048aead0(uVar2);
      }
    }
    (**(code **)(*(long *)**(undefined8 **)(lVar3 + 0x68) + 0x38))
              ((long *)**(undefined8 **)(lVar3 + 0x68),param_2,auStack_98,param_4);
  }
  if (pcStack_80 != (code *)0x0) {
    (*pcStack_80)(auStack_98);
  }
  return;
}


