/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2beb70 (ELF vaddr 0xd1beb70)
 * Label: br::worldgen::processors::Rule::vslot5
 * Body:  [[0d2beb70, 0d2bebcb] [0d2bebd0, 0d2becb1] [0d2becc0, 0d2bece1] [0d2becf0, 0d2bed22]]
 * Ghidra: wg_br__worldgen__processors__Rule__vslot5
 */


void wg_br__worldgen__processors__Rule__vslot5(long param_1,undefined8 param_2)

{
  byte bVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  long lStack_38;
  
  func_0x0ee47730(param_2,&UNK_0136f35e,5);
  lStack_38 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 8) != lStack_38) {
    lVar5 = *(long *)(param_1 + 8) + 0x88;
    do {
      if ((ulong)*(uint *)(lVar5 + -0x50) == 0xffffffff) {
LAB_0d2bed1d:
        uStack_48 = param_2;
        FUN_04931450();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uStack_48 = param_2;
      puStack_40 = (undefined1 *)&uStack_48;
      (**(code **)(&UNK_0f45efa8 + (ulong)*(uint *)(lVar5 + -0x50) * 8))(&puStack_40,lVar5 + -0x80);
      if ((ulong)*(uint *)(lVar5 + -0x10) == 0xffffffff) goto LAB_0d2bed1d;
      uStack_48 = param_2;
      puStack_40 = (undefined1 *)&uStack_48;
      (**(code **)(&UNK_0f45efa8 + (ulong)*(uint *)(lVar5 + -0x10) * 8))(&puStack_40,lVar5 + -0x40);
      if ((ulong)*(uint *)(lVar5 + 0x20) == 0xffffffff) goto LAB_0d2bed1d;
      uStack_48 = param_2;
      puStack_40 = (undefined1 *)&uStack_48;
      (**(code **)(&UNK_0f45f048 + (ulong)*(uint *)(lVar5 + 0x20) * 8))(&puStack_40,lVar5);
      if ((ulong)*(uint *)(lVar5 + 0x58) == 0xffffffff) goto LAB_0d2bed1d;
      uStack_48 = param_2;
      puStack_40 = (undefined1 *)&uStack_48;
      (**(code **)(&UNK_0f45ef68 + (ulong)*(uint *)(lVar5 + 0x58) * 8))(&puStack_40,lVar5 + 0x38);
      lVar4 = *(long *)(*(long *)(lVar5 + 0x28) + 0x68);
      bVar1 = *(byte *)(lVar4 + 0x90);
      if ((bVar1 & 1) == 0) {
        uVar3 = (ulong)(bVar1 >> 1);
      }
      else {
        uVar3 = *(ulong *)(lVar4 + 0x98);
      }
      if (uVar3 == 0xffffffffffffffff) {
LAB_0d2bed09:
        func_0x04890760();
        return;
      }
      if ((bVar1 & 1) == 0) {
        lVar4 = lVar4 + 0x91;
      }
      else {
        lVar4 = *(long *)(lVar4 + 0xa0);
      }
      if ((uVar3 != 0) && (lVar4 == 0)) goto LAB_0d2bed09;
      func_0x0ee47730(param_2);
      lVar4 = lVar5 + 0x60;
      lVar5 = lVar5 + 0xe8;
    } while (lVar4 != lStack_38);
  }
  return;
}


