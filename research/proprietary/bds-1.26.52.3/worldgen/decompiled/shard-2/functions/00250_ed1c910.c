/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xee1c910 (ELF vaddr 0xed1c910)
 * Label: callee-of:0x61416e0
 * Body:  [[0ee1c910, 0ee1c987] [0ee1c990, 0ee1c9ed]]
 * Ghidra: FUN_0ee1c910
 */


undefined1 FUN_0ee1c910(long param_1)

{
  long *plVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *in_FS_OFFSET;
  
  lVar4 = *in_FS_OFFSET;
  if (*(char *)(lVar4 + -0xa58) == '\0') {
    *(undefined1 *)(lVar4 + -0xa58) = 1;
    func_0x0417d010(&UNK_0ee1c840,lVar4 + -0xa68,0xf53dab8);
  }
  lVar6 = *(long *)(lVar4 + -0xa60);
  *(undefined8 *)(lVar4 + -0xa68) = 0;
  *(undefined8 *)(lVar4 + -0xa60) = 0;
  if (lVar6 != 0) {
    func_0x0412c2d0();
  }
  FUN_0412d680(param_1 + 0x18);
  lVar4 = *(long *)(param_1 + 0x40);
  for (lVar6 = *(long *)(param_1 + 0x48); lVar4 != lVar6; lVar6 = lVar6 + -0x10) {
    plVar5 = *(long **)(lVar6 + -8);
    if (plVar5 != (long *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        func_0x0412c2d0(plVar5);
      }
    }
  }
  *(long *)(param_1 + 0x48) = lVar4;
  func_0x0412d6b0(param_1 + 0x18);
  LOCK();
  uVar2 = *(undefined1 *)(param_1 + 0x58);
  *(undefined1 *)(param_1 + 0x58) = 0;
  UNLOCK();
  return uVar2;
}


