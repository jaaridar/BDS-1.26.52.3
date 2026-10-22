/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x63f3d70 (ELF vaddr 0x62f3d70)
 * Label: caller-of-callee
 * Body:  [[063f3d70, 063f3d70]]
 * Ghidra: _INIT_249
 */


/* WARNING: Possible PIC construction at 0x063f3f02: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x063f3f07) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_249(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_a8 [8];
  undefined1 uStack_a0;
  undefined4 uStack_9f;
  undefined4 uStack_9b;
  undefined4 uStack_97;
  undefined3 uStack_93;
  undefined1 uStack_90;
  undefined3 uStack_8f;
  undefined1 uStack_8c;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 *puStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined8 uStack_3f;
  undefined7 uStack_37;
  undefined4 uStack_30;
  undefined1 uStack_2c;
  
  auStack_a8[0] = 1;
  uStack_a0 = 0x26;
  uStack_9f = _UNK_01496cea;
  uStack_9b = _UNK_01496cee;
  uStack_97 = _UNK_01496cf2;
  _uStack_93 = CONCAT13(0x75,(int3)_UNK_01496cf6);
  uStack_8f = 0x736572;
  uStack_8c = 0;
  auStack_88[0] = 2;
  puVar5 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a);
  if (puVar5 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x1a,0);
  }
  uVar4 = _UNK_013923bf;
  uVar3 = _UNK_013923bb;
  uVar2 = _UNK_013923b7;
  uStack_80 = 0x1b;
  uStack_78 = 0x17;
  *puVar5 = _UNK_013923b3;
  puVar5[1] = uVar2;
  puVar5[2] = uVar3;
  puVar5[3] = uVar4;
  *(undefined8 *)((long)puVar5 + 0xf) = 0x737465735f657275;
  *(undefined1 *)((long)puVar5 + 0x17) = 0;
  auStack_68[0] = 3;
  puStack_70 = puVar5;
  puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a);
  if (puVar6 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x1a,0);
  }
  uVar1 = _UNK_01327391;
  uStack_60 = 0x1b;
  uStack_58 = 0x17;
  *puVar6 = _UNK_01327389;
  puVar6[1] = uVar1;
  *(undefined8 *)((long)puVar6 + 0xf) = 0x736c6f6f705f6574;
  *(undefined1 *)((long)puVar6 + 0x17) = 0;
  auStack_48[0] = 0;
  uStack_40 = 0x26;
  uStack_3f = _UNK_013ae05d;
  uStack_37 = (undefined7)_UNK_013ae065;
  uStack_30 = 0x73726f73;
  uStack_2c = 0;
  uRam000000000f56adc8 = 0;
  uRam000000000f56add0 = 0;
  uRam000000000f56adc0 = 0xf56adc8;
  puStack_50 = puVar6;
  func_0x06336aa0(1,auStack_a8);
  func_0x06336aa0(2,auStack_88);
  func_0x06336aa0(3,auStack_68);
  func_0x06336aa0(0,auStack_48);
  thunk_FUN_0ee326a0(puVar6,0x1a);
  thunk_FUN_0ee326a0(puVar5,0x1a);
  (*(code *)PTR___cxa_atexit_0f546538)(&UNK_0623ff50,0xf56adc0,0xf53dab8);
  return;
}


