/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd3e8ac0 (ELF vaddr 0xd2e8ac0)
 * Label: NoSurfaceOreFeature::vslot3
 * Body:  [[0d3e8ac0, 0d3e8b3d]]
 * Ghidra: wg_NoSurfaceOreFeature__vslot3
 */


undefined8
wg_NoSurfaceOreFeature__vslot3
          (undefined8 param_1,byte *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
          ,undefined8 param_6)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  bVar1 = *param_2;
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 != 0x12) {
      return 1;
    }
  }
  else if (*(long *)(param_2 + 8) != 0x12) {
    return 1;
  }
  if ((bVar1 & 1) == 0) {
    param_2 = param_2 + 1;
  }
  else {
    param_2 = *(byte **)(param_2 + 0x10);
  }
  auVar2[0] = -(*param_2 == DAT_014e9f70);
  auVar2[1] = -(param_2[1] == UNK_014e9f71);
  auVar2[2] = -(param_2[2] == UNK_014e9f72);
  auVar2[3] = -(param_2[3] == UNK_014e9f73);
  auVar2[4] = -(param_2[4] == UNK_014e9f74);
  auVar2[5] = -(param_2[5] == UNK_014e9f75);
  auVar2[6] = -(param_2[6] == UNK_014e9f76);
  auVar2[7] = -(param_2[7] == UNK_014e9f77);
  auVar2[8] = -(param_2[8] == UNK_014e9f78);
  auVar2[9] = -(param_2[9] == UNK_014e9f79);
  auVar2[10] = -(param_2[10] == UNK_014e9f7a);
  auVar2[0xb] = -(param_2[0xb] == UNK_014e9f7b);
  auVar2[0xc] = -(param_2[0xc] == UNK_014e9f7c);
  auVar2[0xd] = -(param_2[0xd] == UNK_014e9f7d);
  auVar2[0xe] = -(param_2[0xe] == UNK_014e9f7e);
  auVar2[0xf] = -(param_2[0xf] == UNK_014e9f7f);
  auVar3[0] = -((char)*(undefined2 *)(param_2 + 0x10) == DAT_014e1fe0);
  auVar3[1] = -((char)((ushort)*(undefined2 *)(param_2 + 0x10) >> 8) == UNK_014e1fe1);
  auVar3[2] = -(UNK_014e1fe2 == '\0');
  auVar3[3] = -(UNK_014e1fe3 == '\0');
  auVar3[4] = -(UNK_014e1fe4 == '\0');
  auVar3[5] = -(UNK_014e1fe5 == '\0');
  auVar3[6] = -(UNK_014e1fe6 == '\0');
  auVar3[7] = -(UNK_014e1fe7 == '\0');
  auVar3[8] = -(UNK_014e1fe8 == '\0');
  auVar3[9] = -(UNK_014e1fe9 == '\0');
  auVar3[10] = -(UNK_014e1fea == '\0');
  auVar3[0xb] = -(UNK_014e1feb == '\0');
  auVar3[0xc] = -(UNK_014e1fec == '\0');
  auVar3[0xd] = -(UNK_014e1fed == '\0');
  auVar3[0xe] = -(UNK_014e1fee == '\0');
  auVar3[0xf] = -(UNK_014e1fef == '\0');
  auVar3 = auVar3 & auVar2;
  if ((ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar3[0xf] >> 7) << 0xf) != 0xffff) {
    return 1;
  }
  func_0x0c4af9f0(1,3,0xe,&UNK_011b03a4,param_5,param_6,1);
  return 0;
}


