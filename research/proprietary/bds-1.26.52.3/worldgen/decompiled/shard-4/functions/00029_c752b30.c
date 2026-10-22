/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc852b30 (ELF vaddr 0xc752b30)
 * Label: VanillaSurfaceBuilders::OverworldDefaultSurfaceBuilder::vslot3
 * Body:  [[0c852b30, 0c852cca]]
 * Ghidra: wg_VanillaSurfaceBuilders__OverworldDefaultSurfaceBuilder__vslot3
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_VanillaSurfaceBuilders__OverworldDefaultSurfaceBuilder__vslot3
               (undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  short *psVar5;
  undefined8 uVar6;
  
  if (DAT_0f5573f8 == '\0') goto LAB_0c852bae;
  do {
    for (psVar5 = (short *)*param_2; psVar5 != (short *)param_2[1]; psVar5 = psVar5 + 8) {
      if (*psVar5 == _DAT_0f5573f0) goto LAB_0c852b9a;
    }
    param_2 = (undefined8 *)&UNK_01198d5e;
    cVar3 = func_0x0eeddcf0(&UNK_0123d3db,&UNK_01198d5e,0x60,&UNK_012086f1,&UNK_014a51aa);
    if (cVar3 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
      psVar5 = (short *)func_0x04890760();
LAB_0c852b9a:
      lVar1 = *(long *)(psVar5 + 4);
      if (lVar1 != 0) {
        if (*(long *)(lVar1 + 8) == 0) {
          uVar6 = func_0x0cc41df0(0xf6ff9e0,0xf718af0,1);
          *(undefined8 *)(lVar1 + 8) = uVar6;
          lVar2 = *(long *)(lVar1 + 0x10);
        }
        else {
          lVar2 = *(long *)(lVar1 + 0x10);
        }
        if (lVar2 == 0) {
          uVar6 = func_0x0cc41df0(0xf6ff9e0,0xf7194f0,1);
          *(undefined8 *)(lVar1 + 0x10) = uVar6;
          lVar2 = *(long *)(lVar1 + 0x18);
        }
        else {
          lVar2 = *(long *)(lVar1 + 0x18);
        }
        if (lVar2 == 0) {
          uVar6 = func_0x0cc41df0(0xf6ff9e0,0xf714ce0,1);
          *(undefined8 *)(lVar1 + 0x18) = uVar6;
          lVar2 = *(long *)(lVar1 + 0x20);
        }
        else {
          lVar2 = *(long *)(lVar1 + 0x20);
        }
        if (lVar2 == 0) {
          uVar6 = func_0x0cc41df0(0xf6ff9e0,&DAT_0f71bd88,1);
          *(undefined8 *)(lVar1 + 0x20) = uVar6;
          lVar2 = *(long *)(lVar1 + 0x28);
        }
        else {
          lVar2 = *(long *)(lVar1 + 0x28);
        }
        if (lVar2 != 0) {
          return;
        }
        uVar6 = func_0x0cc41df0(0xf6ff9e0,&DAT_0f713f00,1);
        *(undefined8 *)(lVar1 + 0x28) = uVar6;
        return;
      }
    }
    func_0x04890760();
LAB_0c852bae:
    iVar4 = func_0x04108328(&DAT_0f5573f8);
    if (iVar4 != 0) {
      LOCK();
      UNLOCK();
      _DAT_0f5573f0 = _DAT_0f556458;
      _DAT_0f556458 = _DAT_0f556458 + 1;
      func_0x0410844d(&DAT_0f5573f8);
    }
  } while( true );
}


