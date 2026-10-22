/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe3a03c0
 * Label: string:virtual bool cereal::internal::TypeSchema<std::unordered_map
 * Body:  [[0e3a03c0, 0e3a0460] [0e3a0470, 0e3a0486]]
 * Ghidra: FUN_0e3a03c0
 */


void FUN_0e3a03c0(void)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  long unaff_RBX;
  int *unaff_R14;
  long *unaff_R15;
  
  LOCK();
  plVar1 = unaff_R15 + 1;
  lVar2 = *plVar1;
  *plVar1 = *plVar1 + 0xffffffff;
  UNLOCK();
  if (lVar2 == 0) {
    (**(code **)(*unaff_R15 + 0x10))();
    func_0x0412c2d0();
  }
  lVar2 = *(long *)(unaff_RBX + 0x10);
  iVar3 = *(int *)(unaff_RBX + 0x1c);
  if (iVar3 == 2) {
    piVar4 = *(int **)(*(long *)(lVar2 + 0x78) + 0x60);
    iVar3 = *piVar4;
    while (iVar3 != *(int *)(unaff_RBX + 0x18)) {
      piVar4 = piVar4 + 0x16;
      iVar3 = *piVar4;
    }
    for (; *(long *)(piVar4 + 0xc) != *(long *)(unaff_RBX + 8); piVar4 = *(int **)(piVar4 + 0xe)) {
    }
  }
  else {
    if (iVar3 != 1) {
      if (iVar3 != 0) {
        return;
      }
      *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) | *unaff_R14 << 0x10;
      return;
    }
    piVar4 = *(int **)(*(long *)(lVar2 + 0x78) + 0x48);
    iVar3 = *piVar4;
    while (iVar3 != *(int *)(unaff_RBX + 0x18)) {
      piVar4 = piVar4 + 0x1a;
      iVar3 = *piVar4;
    }
  }
  piVar4[4] = piVar4[4] | *unaff_R14 << 0x10;
  return;
}


