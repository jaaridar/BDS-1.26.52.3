/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2d63f0 (ELF vaddr 0xd1d63f0)
 * Label: caller-of-seed
 * Body:  [[0d2d63f0, 0d2d651a]]
 * Ghidra: FUN_0d2d63f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0d2d63f0(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uStack_40;
  ulong uStack_38;
  long lStack_30;
  
  *param_1 = &UNK_0f45f788;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (0xfffffffffffffff7 < param_3) {
    uVar4 = FUN_04882e30();
    wg_br__worldgen__processors__BlockEntity__AppendLoot__vslot0(param_1);
    func_0x0eee2d70(uVar4);
    pcVar2 = (code *)swi(3);
    puVar5 = (undefined8 *)(*pcVar2)();
    return puVar5;
  }
  if (param_3 < 0x17) {
    uStack_40 = CONCAT71(uStack_40._1_7_,(char)param_3 * '\x02');
    lVar3 = (long)&uStack_40 + 1;
    if (param_3 == 0) {
                    /* WARNING: Ignoring partial resolution of indirect */
      uStack_40._1_1_ = 0;
      bVar1 = *(byte *)(param_1 + 1);
      goto joined_r0x0d2d64eb;
    }
  }
  else {
    uVar6 = 0x1a;
    if ((param_3 | 7) != 0x17) {
      uVar6 = (param_3 | 7) + 1;
    }
    lVar3 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar6);
    if (lVar3 == 0) {
      FUN_0eec74c0(uVar6,0);
    }
    uStack_40 = uVar6 | 1;
    uStack_38 = param_3;
    lStack_30 = lVar3;
  }
  memcpy(lVar3,param_2,param_3);
  *(undefined1 *)(lVar3 + param_3) = 0;
  bVar1 = *(byte *)(param_1 + 1);
joined_r0x0d2d64eb:
  if ((bVar1 & 1) != 0) {
    func_0x0412a280(param_1[3],param_1[1] & 0xfffffffffffffffe);
  }
  param_1[3] = lStack_30;
  param_1[1] = uStack_40;
  param_1[2] = uStack_38;
  return param_1;
}


