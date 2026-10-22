/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xeee02f0 (ELF vaddr 0xede02f0)
 * Label: callee2-of:0x524f330
 * Body:  [[0eee02f0, 0eee0369] [0eee2d80, 0eee2d85]]
 * Ghidra: FUN_0eee02f0
 */


void FUN_0eee02f0(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  LOCK();
  plVar1 = (long *)(param_1 + 0xd0);
  lVar2 = *plVar1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (lVar2 == -0x7fffffffffffffff) {
    func_0x0412d450();
    LOCK();
    *(ulong *)(param_1 + 0xd0) = *(ulong *)(param_1 + 0xd0) & 0x7fffffffffffffff;
    UNLOCK();
    FUN_0412d520(param_1);
    uVar3 = *(undefined8 *)(param_1 + 0xc0);
    func_0x0412d680(uVar3);
    func_0x0412d6b0(uVar3);
    (*(code *)PTR_pthread_cond_broadcast_0f546458)(param_1 + 0x90);
    return;
  }
  return;
}


