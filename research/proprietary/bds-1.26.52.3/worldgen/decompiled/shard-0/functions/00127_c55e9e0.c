/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc55e9e0
 * Label: string:minecraft:biome_tinted_leaves_particle
 * Body:  [[0c55e9e0, 0c55eaed] [0c55eaf0, 0c55eb72]]
 * Ghidra: FUN_0c55e9e0
 */


ulong FUN_0c55e9e0(void)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  long unaff_RBX;
  ulong uVar8;
  long unaff_R14;
  long unaff_R15;
  long lVar9;
  bool in_ZF;
  
  if (!in_ZF) {
    do {
      if (((((*(char *)(unaff_RBX + 0x23) == '\x01') && (*(long **)(unaff_RBX + 8) != (long *)0x0))
           && (**(long **)(unaff_RBX + 8) != 0)) &&
          ((cVar5 = func_0x0c4562c0(unaff_RBX), cVar5 == '\0' &&
           (*(char *)(unaff_RBX + 0x22) != '\0')))) || (*(int *)(unaff_RBX + 0x80) != 0)) {
        uVar8 = CONCAT71((int7)((ulong)unaff_RBX >> 8),0x11);
        goto LAB_0c55ea3b;
      }
      unaff_RBX = unaff_RBX + 0x88;
    } while (unaff_RBX != unaff_R15);
  }
  uVar8 = 0;
LAB_0c55ea3b:
  *(undefined1 *)(unaff_R14 + 0x20) = 0;
  plVar3 = *(long **)(unaff_R14 + 0x30);
  *(undefined8 *)(unaff_R14 + 0x28) = 0;
  *(undefined8 *)(unaff_R14 + 0x30) = 0;
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      func_0x0412c2d0(plVar3);
    }
  }
  lVar2 = *(long *)(unaff_R14 + 0x38);
  lVar9 = *(long *)(unaff_R14 + 0x40);
  while (lVar2 != lVar9) {
    lVar9 = lVar9 + -0x88;
    func_0x0c44e610(lVar9);
  }
  *(long *)(unaff_R14 + 0x40) = lVar2;
  lVar2 = *(long *)(*(long *)(unaff_R14 + 8) + 0xf8);
  if ((lVar2 == 0) || (cVar5 = (**(code **)(**(long **)(lVar2 + 0xb0) + 0x18))(), cVar5 == '\0')) {
    lVar2 = *(long *)(unaff_R14 + 0x18);
    bVar7 = (byte)uVar8;
    bVar6 = 7;
    if ((*(char *)(lVar2 + 0x60) == '\x01') && (bVar6 = bVar7, bVar7 == 0)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      for (lVar9 = *(long *)(lVar2 + 0x18); lVar9 != lVar4; lVar9 = lVar9 + 0xa8) {
        if ((((*(char *)(lVar9 + 0x33) == '\x01') && (*(long **)(lVar9 + 0x18) != (long *)0x0)) &&
            (**(long **)(lVar9 + 0x18) != 0)) &&
           ((cVar5 = func_0x0c4562c0(lVar9 + 0x10), cVar5 == '\0' &&
            (*(char *)(lVar9 + 0x32) != '\0')))) {
          bVar6 = 0x12;
          goto LAB_0c55eb5a;
        }
      }
      for (lVar9 = *(long *)(lVar2 + 0x30); lVar9 != *(long *)(lVar2 + 0x38); lVar9 = lVar9 + 0xa0)
      {
        if (*(int *)(lVar9 + 0x98) != 0) {
          bVar6 = 0x13;
          goto LAB_0c55eb5a;
        }
      }
      bVar6 = 0;
    }
LAB_0c55eb5a:
    uVar8 = uVar8 & 0xff;
    if (bVar7 == 0) {
      uVar8 = (ulong)bVar6;
    }
  }
  return uVar8 & 0xffffffff;
}


