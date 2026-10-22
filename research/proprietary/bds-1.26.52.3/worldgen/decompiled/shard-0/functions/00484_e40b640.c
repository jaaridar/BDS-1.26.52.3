/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe50b640 (ELF vaddr 0xe40b640)
 * Label: callee2-of:0xe3dd790
 * Body:  [[0e50b640, 0e50b6e5] [0e50b6f0, 0e50b71d] [0e50b720, 0e50ba3a]]
 * Ghidra: FUN_0e50b640
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e50b640(long *param_1,long *param_2,undefined8 param_3,ulong param_4)

{
  byte bVar1;
  byte *pbVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  byte *pbVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  byte *pbVar14;
  long lVar15;
  long lStack_b8;
  undefined8 auStack_b0 [2];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  char cStack_8c;
  long lStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  long lStack_60;
  undefined8 auStack_58 [2];
  undefined *puStack_48;
  code *pcStack_40;
  undefined4 uStack_38;
  undefined1 uStack_34;
  
  lVar15 = *param_2;
  plStack_78 = param_1;
  if ((DAT_0f7567c0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f7567c0), iVar7 != 0)) {
    func_0x0e56e350();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f756740,0xf53dab8);
    func_0x0410844d(&DAT_0f7567c0);
  }
  lStack_80 = lVar15 + 0x18;
  plVar9 = (long *)(*(long *)(lVar15 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(lVar15 + 0x20) - *(long *)(lVar15 + 0x18)) >> 3)
                           - 1U & *(uint *)(_DAT_0f756740 + 4)) * 8);
  do {
    lVar8 = *plVar9;
    if (lVar8 == -1) goto LAB_0e50b6c0;
    plVar9 = (long *)(*(long *)(lVar15 + 0x30) + lVar8 * 0x18);
  } while (*(uint *)(*(long *)(lVar15 + 0x30) + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f756740 + 4));
  if (plVar9 == *(long **)(lVar15 + 0x38)) {
LAB_0e50b6c0:
    puVar13 = &DAT_0f756740;
  }
  else {
    puVar13 = (undefined *)plVar9[2];
  }
  pbVar2 = *(byte **)(*param_2 + 0x58);
  for (pbVar11 = *(byte **)(*param_2 + 0x50); pbVar11 != pbVar2; pbVar11 = pbVar11 + 0x38) {
    bVar1 = *pbVar11;
    if ((bVar1 & 1) == 0) {
      uVar10 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar10 = *(ulong *)(pbVar11 + 8);
    }
    if (param_4 == uVar10) {
      if ((bVar1 & 1) == 0) {
        pbVar14 = pbVar11 + 1;
      }
      else {
        pbVar14 = *(byte **)(pbVar11 + 0x10);
      }
      iVar7 = func_0x0eee3000(param_3,pbVar14,param_4);
      if (iVar7 == 0) break;
    }
  }
  if (pbVar11 == pbVar2) goto LAB_0e50b756;
  pbVar11 = (byte *)(ulong)*(uint *)(pbVar11 + 0x1c);
  if (DAT_0f550ad8 == '\0') goto LAB_0e50ba0a;
  do {
    if ((int)pbVar11 != _DAT_0f550ac4) {
LAB_0e50b97a:
      plStack_78[6] = param_2[6];
      lVar15 = *param_2;
      lVar8 = param_2[1];
      lVar3 = param_2[2];
      lVar4 = param_2[3];
      lVar5 = param_2[5];
      plStack_78[4] = param_2[4];
      plStack_78[5] = lVar5;
      plStack_78[2] = lVar3;
      plStack_78[3] = lVar4;
      *plStack_78 = lVar15;
      plStack_78[1] = lVar8;
      return;
    }
LAB_0e50b756:
    if ((int)param_2[5] == 0) {
      if (((puVar13 == (undefined *)0x0) || (*(int *)(puVar13 + 0x60) != -0x2b3da790)) ||
         (*(long *)(puVar13 + 0x68) == 0)) goto LAB_0e50b7d9;
      lVar15 = *(long *)(puVar13 + 0x68) + 0x38;
    }
    else {
      pbVar11 = (byte *)(ulong)*(uint *)((long)param_2 + 0x2c);
      if (puVar13 == (undefined *)0x0) {
        puVar13 = (undefined *)func_0x048aead0(lStack_80);
      }
      lStack_b8 = func_0x048b0c90(lStack_80,puVar13,pbVar11,1);
      if (lStack_b8 == 0) {
        lStack_b8 = 0;
        auStack_b0[0] = 0;
        func_0x048b0d20(&lStack_b8);
        if (lStack_b8 == 0) goto LAB_0e50b7d9;
      }
      if ((*(int *)(lStack_b8 + 0x50) == -0x45dcb126) && (*(long *)(lStack_b8 + 0x58) != 0)) {
        lVar15 = *(long *)(lStack_b8 + 0x58) + 0x40;
      }
      else {
LAB_0e50b7d9:
        lVar15 = 0;
      }
    }
    puStack_48 = &UNK_0488e0b0;
    uStack_38 = 0x48b5725f;
    pcStack_40 = (code *)0x0;
    uStack_34 = 0;
    auStack_58[0] = 0;
    lStack_b8 = 0;
    auStack_b0[0] = 0;
    uStack_a0 = (code *)&UNK_0488e0b0;
    uStack_98 = (code *)0x0;
    uStack_90 = 0x48b5725f;
    cStack_8c = '\0';
    if (param_4 < 0xfffffffffffffff8) {
      if (param_4 < 0x17) {
        uStack_70 = CONCAT71(uStack_70._1_7_,(char)param_4 * '\x02');
        lVar8 = (long)&uStack_70 + 1;
        if (param_4 != 0) goto LAB_0e50b89e;
      }
      else {
        uVar10 = 0x1a;
        if ((param_4 | 7) != 0x17) {
          uVar10 = (param_4 | 7) + 1;
        }
        lVar8 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar10);
        if (lVar8 == 0) {
          func_0x0eec74c0(uVar10,0);
        }
        uStack_70 = uVar10 | 1;
        uStack_68 = param_4;
        lStack_60 = lVar8;
LAB_0e50b89e:
        func_0x0eee2f00(lVar8,param_3,param_4);
      }
      *(undefined1 *)(lVar8 + param_4) = 0;
      lVar15 = func_0x048b5060(lVar15,&uStack_70);
      *(long *)(lVar15 + 0x20) = lStack_b8;
      if ((long *)(lVar15 + 0x20) != &lStack_b8) {
        puVar12 = (undefined8 *)(lVar15 + 0x28);
        if (*(code **)(lVar15 + 0x40) != (code *)0x0) {
          (**(code **)(lVar15 + 0x40))(puVar12);
        }
        uVar6 = auStack_b0[0];
        if (cStack_8c != '\0') {
          if (cStack_8c == '\x02') {
            (*uStack_a0)(5,auStack_b0,puVar12);
          }
          else {
            auStack_b0[0] = 0;
            *puVar12 = uVar6;
          }
        }
        *(undefined4 *)(lVar15 + 0x38) = (undefined4)uStack_a0;
        *(undefined4 *)(lVar15 + 0x3c) = uStack_a0._4_4_;
        *(undefined4 *)(lVar15 + 0x40) = (undefined4)uStack_98;
        *(undefined4 *)(lVar15 + 0x44) = uStack_98._4_4_;
        *(undefined4 *)(lVar15 + 0x48) = uStack_90;
        *(char *)(lVar15 + 0x4c) = cStack_8c;
      }
      if ((uStack_70 & 1) != 0) {
        thunk_FUN_0ee326a0(lStack_60,uStack_70 & 0xfffffffffffffffe);
      }
      if (uStack_98 != (code *)0x0) {
        (*uStack_98)(auStack_b0);
      }
      if (pcStack_40 != (code *)0x0) {
        (*pcStack_40)(auStack_58);
      }
      goto LAB_0e50b97a;
    }
    func_0x04882e30();
LAB_0e50ba0a:
    iVar7 = func_0x04108328(&DAT_0f550ad8);
    if (iVar7 != 0) {
      func_0x0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
  } while( true );
}


