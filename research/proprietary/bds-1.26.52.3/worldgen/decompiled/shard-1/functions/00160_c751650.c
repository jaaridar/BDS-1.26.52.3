/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc751650
 * Label: FixedBiomeSource::vslot6
 * Body:  [[0c751650, 0c7516f2]]
 * Ghidra: wg_FixedBiomeSource__vslot6
 */


void wg_FixedBiomeSource__vslot6
               (undefined8 param_1,byte *param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  code *pcVar1;
  byte bVar2;
  ulong in_RAX;
  long lVar3;
  undefined8 in_XMM0_Qb;
  long unaff_retaddr;
  
  *(int *)param_2 = *(int *)param_2 + param_5;
  bVar2 = (char)(char *)(in_RAX & 0xffffffffffffff10) + *(char *)(in_RAX & 0xffffffffffffff10);
  *param_2 = *param_2 & (char)param_5 + (char)((uint)param_5 >> 8);
  DAT_01268347 = DAT_01268347 + (bVar2 & 0x10);
  *(undefined8 *)(unaff_retaddr + 0x11) = param_1;
  *(undefined8 *)(unaff_retaddr + 0x19) = in_XMM0_Qb;
  *(undefined1 *)(unaff_retaddr + 0x21) = 0;
  *(long *)(unaff_retaddr + 8) = unaff_retaddr + 0x10;
  *(undefined8 *)(unaff_retaddr + -8) = 0xc7516a2;
  lVar3 = func_0x0d6c9580(CONCAT62((int6)((ulong)param_4 >> 0x10),
                                   CONCAT11((char)((ulong)param_4 >> 8) + bVar2,(char)param_4)) + 8,
                          unaff_retaddr + 0x10,&UNK_01563a4f,unaff_retaddr + 8,unaff_retaddr + 7);
  if ((ulong)*(uint *)(lVar3 + 0x60) != 0xffffffff) {
    pcVar1 = *(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar3 + 0x60) * 8);
    *(undefined8 *)(unaff_retaddr + -8) = 0xc7516c8;
    (*pcVar1)(unaff_retaddr + 8,lVar3 + 0x38);
  }
  *(undefined **)(lVar3 + 0x38) = &UNK_0f47e2e0;
  *(undefined4 *)(lVar3 + 0x40) = 3;
  *(undefined4 *)(lVar3 + 0x60) = 3;
  if ((*(byte *)(unaff_retaddr + 0x10) & 1) != 0) {
    *(undefined8 *)(unaff_retaddr + -8) = 0xc7518bb;
    func_0x0412a280(*(undefined8 *)(unaff_retaddr + 0x20),
                    *(ulong *)(unaff_retaddr + 0x10) & 0xfffffffffffffffe);
  }
  return;
}



/* ---- referenced strings ----
 * 0x1268347  facing_direction
 */
