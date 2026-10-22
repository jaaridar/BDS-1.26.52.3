/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe97ef20 (ELF vaddr 0xe87ef20)
 * Label: callee-of:0xe874df0
 * Body:  [[0e97ef20, 0e97ef8d] [0e97ef90, 0e97f252]]
 * Ghidra: FUN_0e97ef20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e97ef20(long *param_1,long *param_2,undefined8 param_3,ulong param_4)

{
  byte bVar1;
  byte *pbVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  long lVar13;
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
  
  lVar13 = *param_2 + 0x18;
  plStack_78 = param_1;
  lStack_80 = func_0x0e86d080(lVar13);
  pbVar2 = *(byte **)(*param_2 + 0x58);
  for (pbVar10 = *(byte **)(*param_2 + 0x50); pbVar10 != pbVar2; pbVar10 = pbVar10 + 0x38) {
    bVar1 = *pbVar10;
    if ((bVar1 & 1) == 0) {
      uVar9 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar9 = *(ulong *)(pbVar10 + 8);
    }
    if (param_4 == uVar9) {
      if ((bVar1 & 1) == 0) {
        pbVar12 = pbVar10 + 1;
      }
      else {
        pbVar12 = *(byte **)(pbVar10 + 0x10);
      }
      iVar7 = func_0x0eee3000(param_3,pbVar12,param_4);
      if (iVar7 == 0) break;
    }
  }
  if (pbVar10 == pbVar2) goto LAB_0e97efc6;
  pbVar10 = (byte *)(ulong)*(uint *)(pbVar10 + 0x1c);
  if (DAT_0f550ad8 == '\0') goto LAB_0e97f222;
  do {
    if ((int)pbVar10 != _DAT_0f550ac4) {
LAB_0e97f1d6:
      plStack_78[6] = param_2[6];
      lVar13 = *param_2;
      lVar8 = param_2[1];
      lVar3 = param_2[2];
      lVar4 = param_2[3];
      lVar5 = param_2[5];
      plStack_78[4] = param_2[4];
      plStack_78[5] = lVar5;
      plStack_78[2] = lVar3;
      plStack_78[3] = lVar4;
      *plStack_78 = lVar13;
      plStack_78[1] = lVar8;
      return;
    }
LAB_0e97efc6:
    if ((int)param_2[5] == 0) {
      if ((*(int *)(lStack_80 + 0x60) != -0x2b3da790) || (*(long *)(lStack_80 + 0x68) == 0))
      goto LAB_0e97f035;
      lVar13 = *(long *)(lStack_80 + 0x68) + 0x38;
    }
    else {
      lStack_b8 = func_0x048b0c90(lVar13,lStack_80,*(undefined4 *)((long)param_2 + 0x2c),1);
      if (lStack_b8 == 0) {
        lStack_b8 = 0;
        auStack_b0[0] = 0;
        func_0x048b0d20(&lStack_b8);
        if (lStack_b8 == 0) goto LAB_0e97f035;
      }
      if ((*(int *)(lStack_b8 + 0x50) == -0x45dcb126) && (*(long *)(lStack_b8 + 0x58) != 0)) {
        lVar13 = *(long *)(lStack_b8 + 0x58) + 0x40;
      }
      else {
LAB_0e97f035:
        lVar13 = 0;
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
        if (param_4 != 0) goto LAB_0e97f0fa;
      }
      else {
        uVar9 = 0x1a;
        if ((param_4 | 7) != 0x17) {
          uVar9 = (param_4 | 7) + 1;
        }
        lVar8 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar9);
        if (lVar8 == 0) {
          func_0x0eec74c0(uVar9,0);
        }
        uStack_70 = uVar9 | 1;
        uStack_68 = param_4;
        lStack_60 = lVar8;
LAB_0e97f0fa:
        memcpy(lVar8,param_3,param_4);
      }
      *(undefined1 *)(lVar8 + param_4) = 0;
      lVar13 = func_0x048b5060(lVar13,&uStack_70);
      *(long *)(lVar13 + 0x20) = lStack_b8;
      if ((long *)(lVar13 + 0x20) != &lStack_b8) {
        puVar11 = (undefined8 *)(lVar13 + 0x28);
        if (*(code **)(lVar13 + 0x40) != (code *)0x0) {
          (**(code **)(lVar13 + 0x40))(puVar11);
        }
        uVar6 = auStack_b0[0];
        if (cStack_8c != '\0') {
          if (cStack_8c == '\x02') {
            (*uStack_a0)(5,auStack_b0,puVar11);
          }
          else {
            auStack_b0[0] = 0;
            *puVar11 = uVar6;
          }
        }
        *(undefined4 *)(lVar13 + 0x38) = (undefined4)uStack_a0;
        *(undefined4 *)(lVar13 + 0x3c) = uStack_a0._4_4_;
        *(undefined4 *)(lVar13 + 0x40) = (undefined4)uStack_98;
        *(undefined4 *)(lVar13 + 0x44) = uStack_98._4_4_;
        *(undefined4 *)(lVar13 + 0x48) = uStack_90;
        *(char *)(lVar13 + 0x4c) = cStack_8c;
      }
      if ((uStack_70 & 1) != 0) {
        func_0x0412a280(lStack_60,uStack_70 & 0xfffffffffffffffe);
      }
      if (uStack_98 != (code *)0x0) {
        (*uStack_98)(auStack_b0);
      }
      if (pcStack_40 != (code *)0x0) {
        (*pcStack_40)(auStack_58);
      }
      goto LAB_0e97f1d6;
    }
    func_0x04882e30();
LAB_0e97f222:
    iVar7 = func_0x04108328(&DAT_0f550ad8);
    if (iVar7 != 0) {
      func_0x0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
  } while( true );
}


