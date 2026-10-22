/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x48caba0
 * Label: br::worldgen::WorldGenRandom::vslot16
 * Body:  [[048cab46, 048cab6e] [048cab70, 048cabb2] [048cabc0, 048cabeb]]
 * Ghidra: wg_br__worldgen__WorldGenRandom__vslot16
 */


/* WARNING: Possible PIC construction at 0x048cab7f: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_br__worldgen__WorldGenRandom__vslot16(void)

{
  long *plVar1;
  code *pcVar2;
  undefined8 in_RAX;
  long *unaff_RBX;
  undefined8 *puVar3;
  long lVar4;
  long unaff_R12;
  long lVar5;
  undefined8 *unaff_R14;
  undefined8 *unaff_R15;
  undefined8 uStack_8;
  
  do {
    if (unaff_R12 != 0) {
      lVar5 = unaff_R14[4];
      lVar4 = unaff_R12;
      if (unaff_R12 != lVar5) {
        do {
          plVar1 = *(long **)(lVar5 + -8);
          *(undefined8 *)(lVar5 + -8) = 0;
          if (plVar1 != (long *)0x0) {
            uStack_8 = 0x48cabe0;
            in_RAX = (**(code **)(*plVar1 + 8))();
          }
          lVar5 = lVar5 + -8;
        } while (lVar5 != unaff_R12);
        lVar4 = unaff_R14[3];
      }
      unaff_R14[4] = unaff_R12;
      puVar3 = &uStack_8;
      uStack_8 = 0x48cab84;
SUB_0412a280:
      *(undefined8 *)((long)puVar3 + -8) = in_RAX;
      if (lVar4 != 0) {
        pcVar2 = *(code **)(_DAT_0f5463b0 + 0x18);
        *(undefined8 *)((long)puVar3 + -0x10) = 0xee326ba;
        (*pcVar2)(&DAT_0f5463b0,lVar4);
      }
      return *(undefined8 *)((long)puVar3 + -8);
    }
    uStack_8 = 0x48cab91;
    in_RAX = func_0x0412a280(unaff_R14,0x30);
    if (unaff_R15 == (undefined8 *)0x0) {
      lVar4 = *unaff_RBX;
      *unaff_RBX = 0;
      if (lVar4 == 0) {
        return in_RAX;
      }
      puVar3 = (undefined8 *)&stack0x00000028;
      goto SUB_0412a280;
    }
    unaff_R12 = unaff_R15[3];
    unaff_R14 = unaff_R15;
    unaff_R15 = (undefined8 *)*unaff_R15;
  } while( true );
}


