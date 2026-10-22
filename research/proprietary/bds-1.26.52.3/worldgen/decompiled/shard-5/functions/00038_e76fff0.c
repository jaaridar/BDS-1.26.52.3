/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe86fff0 (ELF vaddr 0xe76fff0)
 * Label: SharedTypes::v1_20_60::OverworldGenerationRulesBiomeJsonComponent::vslot0
 * Body:  [[0e86fff0, 0e870052] [0e870060, 0e870106] [0e870110, 0e8701c9] [0e8701d0, 0e87026a] [0e870270, 0e8702da]]
 * Ghidra: wg_SharedTypes__v1_20_60__OverworldGenerationRulesBiomeJsonComponent__vslot0
 */


void wg_SharedTypes__v1_20_60__OverworldGenerationRulesBiomeJsonComponent__vslot0
               (undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 uStack_34;
  undefined1 uStack_33;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  *param_1 = &UNK_0f4cebf8;
  if ((*(char *)(param_1 + 0x14) == '\x01') && (lVar2 = param_1[0x11], lVar2 != 0)) {
    lVar3 = lVar2;
    if (lVar2 != param_1[0x12]) {
      lVar3 = param_1[0x12] + -0x20;
      do {
        if ((ulong)*(uint *)(lVar3 + 0x18) != 0xffffffff) {
          (**(code **)(&UNK_0f4cde00 + (ulong)*(uint *)(lVar3 + 0x18) * 8))(&uStack_34,lVar3);
        }
        lVar1 = lVar3 + -0x20;
        *(undefined4 *)(lVar3 + 0x18) = 0xffffffff;
        if ((ulong)*(uint *)(lVar3 + -8) != 0xffffffff) {
          (**(code **)(&UNK_0f4cde00 + (ulong)*(uint *)(lVar3 + -8) * 8))(&uStack_34,lVar1);
        }
        *(undefined4 *)(lVar3 + -8) = 0xffffffff;
        lVar3 = lVar3 + -0x40;
      } while (lVar1 != lVar2);
      lVar3 = param_1[0x11];
    }
    param_1[0x12] = lVar2;
    FUN_0412a280(lVar3,param_1[0x13] - lVar3);
  }
  if ((*(char *)(param_1 + 0x10) == '\x01') && (lVar2 = param_1[0xd], lVar2 != 0)) {
    lVar3 = lVar2;
    if (lVar2 != param_1[0xe]) {
      lVar3 = param_1[0xe] + -0x20;
      do {
        if ((ulong)*(uint *)(lVar3 + 0x18) != 0xffffffff) {
          (**(code **)(&UNK_0f4cde00 + (ulong)*(uint *)(lVar3 + 0x18) * 8))(&uStack_33,lVar3);
        }
        lVar1 = lVar3 + -0x20;
        *(undefined4 *)(lVar3 + 0x18) = 0xffffffff;
        if ((ulong)*(uint *)(lVar3 + -8) != 0xffffffff) {
          (**(code **)(&UNK_0f4cde00 + (ulong)*(uint *)(lVar3 + -8) * 8))(&uStack_33,lVar1);
        }
        *(undefined4 *)(lVar3 + -8) = 0xffffffff;
        lVar3 = lVar3 + -0x40;
      } while (lVar1 != lVar2);
      lVar3 = param_1[0xd];
    }
    param_1[0xe] = lVar2;
    FUN_0412a280(lVar3,param_1[0xf] - lVar3);
  }
  if ((*(char *)(param_1 + 0xc) == '\x01') && (lVar2 = param_1[9], lVar2 != 0)) {
    param_1[10] = lVar2;
    FUN_0412a280(lVar2,param_1[0xb] - lVar2);
  }
  if ((*(char *)(param_1 + 8) == '\x01') && (lVar2 = param_1[5], lVar2 != 0)) {
    lVar3 = lVar2;
    if (lVar2 != param_1[6]) {
      lVar3 = param_1[6] + -0x20;
      do {
        if ((ulong)*(uint *)(lVar3 + 0x18) != 0xffffffff) {
          (**(code **)(&UNK_0f4cde00 + (ulong)*(uint *)(lVar3 + 0x18) * 8))(&uStack_32,lVar3);
        }
        lVar1 = lVar3 + -0x20;
        *(undefined4 *)(lVar3 + 0x18) = 0xffffffff;
        if ((ulong)*(uint *)(lVar3 + -8) != 0xffffffff) {
          (**(code **)(&UNK_0f4cde00 + (ulong)*(uint *)(lVar3 + -8) * 8))(&uStack_32,lVar1);
        }
        *(undefined4 *)(lVar3 + -8) = 0xffffffff;
        lVar3 = lVar3 + -0x40;
      } while (lVar1 != lVar2);
      lVar3 = param_1[5];
    }
    param_1[6] = lVar2;
    FUN_0412a280(lVar3,param_1[7] - lVar3);
  }
  if ((*(char *)(param_1 + 4) == '\x01') && (lVar2 = param_1[1], lVar2 != 0)) {
    lVar3 = lVar2;
    if (lVar2 != param_1[2]) {
      lVar3 = param_1[2] + -0x20;
      do {
        if ((ulong)*(uint *)(lVar3 + 0x18) != 0xffffffff) {
          (**(code **)(&UNK_0f4cde00 + (ulong)*(uint *)(lVar3 + 0x18) * 8))(&uStack_31,lVar3);
        }
        lVar1 = lVar3 + -0x20;
        *(undefined4 *)(lVar3 + 0x18) = 0xffffffff;
        if ((ulong)*(uint *)(lVar3 + -8) != 0xffffffff) {
          (**(code **)(&UNK_0f4cde00 + (ulong)*(uint *)(lVar3 + -8) * 8))(&uStack_31,lVar1);
        }
        *(undefined4 *)(lVar3 + -8) = 0xffffffff;
        lVar3 = lVar3 + -0x40;
      } while (lVar1 != lVar2);
      lVar3 = param_1[1];
    }
    param_1[2] = lVar2;
    FUN_0412a280(lVar3,param_1[3] - lVar3);
  }
  return;
}


