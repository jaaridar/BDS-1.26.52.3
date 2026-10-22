/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc961580
 * Label: Dimension::vslot17
 * Body:  [[0c961580, 0c9615dc] [0c9615e0, 0c961632] [0c961640, 0c96168c]]
 * Ghidra: wg_Dimension__vslot17
 */


ulong wg_Dimension__vslot17(void)

{
  char *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  char *in_RAX;
  ulong uVar5;
  long in_RCX;
  long unaff_RBX;
  undefined8 *puVar6;
  long unaff_R12;
  undefined8 *unaff_R13;
  undefined8 *unaff_R14;
  long *plVar7;
  undefined8 uStack0000000000000010;
  
  *in_RAX = *in_RAX + (char)in_RAX;
  pcVar1 = (char *)(in_RCX * 5 + 0x6c);
  *pcVar1 = *pcVar1 + (char)in_RCX;
  uVar5 = (ulong)in_RAX & 0xffffffffffffff08;
  uStack0000000000000010 = *(undefined8 *)(unaff_R12 + 0x98);
  *(undefined8 *)(unaff_R12 + 0x88) = 0;
  *(undefined8 *)(unaff_R12 + 0x90) = 0;
  *(undefined8 *)(unaff_R12 + 0x98) = 0;
  puVar6 = unaff_R14;
  if (unaff_R14 == unaff_R13) {
    if (unaff_R14 == (undefined8 *)0x0) goto LAB_0c961615;
  }
  else {
    do {
      uVar5 = (**(code **)(*(long *)*puVar6 + 0x10))();
      puVar6 = puVar6 + 1;
    } while (puVar6 != unaff_R13);
    if (unaff_R14 == (undefined8 *)0x0) goto LAB_0c961615;
    do {
      plVar7 = (long *)unaff_R13[-1];
      unaff_R13[-1] = 0;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 8))();
      }
      unaff_R13 = unaff_R13 + -1;
    } while (unaff_R13 != unaff_R14);
  }
  uVar5 = func_0x0412a280();
LAB_0c961615:
  lVar2 = *(long *)(unaff_RBX + 8);
  if (lVar2 == 0) {
    return uVar5;
  }
  plVar7 = *(long **)(lVar2 + 0xa0);
  plVar3 = *(long **)(lVar2 + 0xa8);
joined_r0x0c96162f:
  if (plVar7 == plVar3) {
    return uVar5;
  }
  do {
    plVar4 = (long *)*plVar7;
    if ((char)plVar4[4] == '\x03') {
      if (*(char *)(lVar2 + 0x10) == '\x01') break;
      uVar5 = func_0x09d49940(lVar2,plVar4,*(undefined8 *)(lVar2 + 0x70),(char)plVar7[1]);
    }
    plVar7 = plVar7 + 2;
    if (plVar7 == plVar3) {
      return uVar5;
    }
  } while( true );
  uVar5 = (**(code **)(*plVar4 + 0x10))(plVar4,lVar2);
  plVar7 = plVar7 + 2;
  goto joined_r0x0c96162f;
}


