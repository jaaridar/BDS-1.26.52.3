# FUN_09dbc310

- entry: `0x9dbc310`
- body size: 1097 bytes
- callers: `FUN_09e20de0`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_09dbc310(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  long *plVar8;
  uint *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  bool bVar18;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  byte bStack_78;
  undefined7 uStack_77;
  undefined8 uStack_70;
  undefined8 uStack_68;
  byte bStack_60;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined8 uStack_48;
  int iStack_40;
  undefined8 uStack_38;
  long *plStack_30;
  
  lVar17 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(param_2 + 0x18);
  plVar8 = (long *)(*(long *)(lVar17 + 0x38) +
                   (ulong)((int)((ulong)(*(long *)(lVar17 + 0x40) - *(long *)(lVar17 + 0x38)) >> 3)
                           - 1U & 0x4f6ba419) * 8);
  lVar4 = *(long *)(lVar17 + 0x50);
  plVar16 = plVar8;
  do {
    if (*plVar16 == -1) {
      plVar15 = *(long **)(lVar17 + 0x58);
      plVar16 = plVar15;
      goto LAB_09dbc379;
    }
    lVar14 = *plVar16 * 0x20;
    plVar16 = (long *)(lVar4 + lVar14);
  } while (*(int *)(lVar4 + 8 + lVar14) != 0x4f6ba419);
  plVar15 = *(long **)(lVar17 + 0x58);
LAB_09dbc379:
  if ((plVar16 == plVar15) || (lVar17 = plVar16[2], lVar17 == 0)) {
LAB_09dbc716:
    func_0x04890760();
LAB_09dbc71b:
    iVar7 = FUN_04108328(&DAT_0f5ea4a0);
    if (iVar7 != 0) {
      FUN_08b670e0(&DAT_0f5ea138);
      __cxa_atexit(&UNK_08b673f0,&DAT_0f5ea138,0xf53dab8);
      func_0x0410844d(&DAT_0f5ea4a0);
    }
LAB_09dbc5bc:
    uStack_38 = 0;
    plStack_30 = (long *)0x0;
    (**(code **)(_DAT_0f5ea138 + 0x90))(param_1,&DAT_0f5ea138,&uStack_58,&uStack_38);
    plVar8 = plStack_30;
    if (plStack_30 != (long *)0x0) {
      LOCK();
      plVar16 = plStack_30 + 1;
      lVar17 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack_30 + 0x10))(plStack_30);
        func_0x0412c2d0(plVar8);
      }
    }
  }
  else {
    uVar13 = (ulong)((uVar1 & 0x3ffff) >> 0xb);
    if (((ulong)(*(long *)(lVar17 + 0x10) - *(long *)(lVar17 + 8) >> 3) <= uVar13) ||
       (lVar14 = *(long *)(*(long *)(lVar17 + 8) + uVar13 * 8), lVar14 == 0)) goto LAB_09dbc716;
    uVar2 = *(uint *)(lVar14 + (ulong)(uVar1 & 0x7ff) * 4);
    if ((0x3fffe < (uVar2 ^ uVar1 & 0xfffc0000)) ||
       (lVar17 = *(long *)(*(long *)(lVar17 + 0x50) + (ulong)(uVar2 >> 4 & 0x3ff8)), lVar17 == 0))
    goto LAB_09dbc716;
    if (*(char *)(lVar17 + (ulong)(uVar2 & 0x7f) * 4) == '@') {
      if ((*(long **)(param_2 + 0x398) == (long *)0x0) ||
         (plVar8 = (long *)**(long **)(param_2 + 0x398), plVar8 == (long *)0x0)) {
LAB_09dbc660:
        func_0x09af1a50(&uStack_90,0xf646430);
      }
      else {
        lVar17 = param_2 + 0x390;
        cVar6 = (**(code **)(*plVar8 + 0x308))(plVar8,lVar17);
        plVar8 = *(long **)(param_2 + 0x398);
        if (cVar6 == '\0') {
          if ((plVar8 == (long *)0x0) || (plVar8 = (long *)*plVar8, plVar8 == (long *)0x0))
          goto LAB_09dbc660;
          (**(code **)(*plVar8 + 0x2f0))(&uStack_90,plVar8,lVar17);
        }
        else {
          if ((plVar8 == (long *)0x0) || (plVar8 = (long *)*plVar8, plVar8 == (long *)0x0))
          goto LAB_09dbc660;
          (**(code **)(*plVar8 + 0x300))(&uStack_90,plVar8,lVar17);
        }
      }
      puVar9 = (uint *)&uStack_90;
      if ((bStack_60 & 1) != 0) {
        puVar9 = (uint *)&bStack_78;
      }
      if ((*puVar9 & 1) == 0) {
        *(undefined8 *)(param_1 + 4) = *(undefined8 *)(puVar9 + 4);
        uVar1 = puVar9[1];
        uVar2 = puVar9[2];
        uVar5 = puVar9[3];
        *param_1 = *puVar9;
        param_1[1] = uVar1;
        param_1[2] = uVar2;
        param_1[3] = uVar5;
      }
      else {
        bVar18 = (bStack_60 & 1) != 0;
        puVar10 = &uStack_80;
        if (bVar18) {
          puVar10 = &uStack_68;
        }
        puVar11 = &uStack_88;
        if (bVar18) {
          puVar11 = &uStack_70;
        }
        FUN_0412e5e0(param_1,*puVar10,*puVar11);
      }
      if (((bStack_60 & 1) != 0) && ((bStack_78 & 1) != 0)) {
        func_0x0412a280(uStack_68,CONCAT71(uStack_77,bStack_78) & 0xfffffffffffffffe);
      }
      if (((byte)uStack_90 & 1) == 0) {
        return param_1;
      }
      uVar13 = CONCAT71(uStack_90._1_7_,(byte)uStack_90);
      goto LAB_09dbc6ff;
    }
    do {
      lVar17 = *plVar8;
      plVar8 = plVar15;
      if (lVar17 == -1) break;
      lVar17 = lVar17 * 0x20;
      plVar8 = (long *)(lVar4 + lVar17);
    } while (*(int *)(lVar4 + 8 + lVar17) != 0x4f6ba419);
    if (((((plVar8 == plVar15) || (lVar17 = plVar8[2], lVar17 == 0)) ||
         ((ulong)(*(long *)(lVar17 + 0x10) - *(long *)(lVar17 + 8) >> 3) <= uVar13)) ||
        ((lVar4 = *(long *)(*(long *)(lVar17 + 8) + uVar13 * 8), lVar4 == 0 ||
         (uVar2 = *(uint *)(lVar4 + (ulong)(uVar1 & 0x7ff) * 4),
         0x3fffe < (uVar1 & 0xfffc0000 ^ uVar2))))) ||
       (lVar17 = *(long *)(*(long *)(lVar17 + 0x50) + (ulong)(uVar2 >> 4 & 0x3ff8)), lVar17 == 0))
    goto LAB_09dbc716;
    uVar3 = *(undefined4 *)(lVar17 + (ulong)(uVar2 & 0x7f) * 4);
    func_0x0b3f3260(&uStack_90);
    pbVar12 = &bStack_78;
    if ((bStack_60 & 1) == 0) {
      pbVar12 = (byte *)&uStack_90;
    }
    func_0x0bf49380(&uStack_58,uVar3,pbVar12,param_2);
    if ((bStack_60 == 1) && ((bStack_78 & 1) != 0)) {
      func_0x0412a280(uStack_68,CONCAT71(uStack_77,bStack_78) & 0xfffffffffffffffe);
    }
    if (((byte)uStack_90 & 1) != 0) {
      func_0x0412a280(uStack_80,CONCAT71(uStack_90._1_7_,(byte)uStack_90) & 0xfffffffffffffffe);
    }
    if (iStack_40 == 0) {
      if (DAT_0f5ea4a0 == '\0') goto LAB_09dbc71b;
      goto LAB_09dbc5bc;
    }
    if ((uStack_58 & 1) == 0) {
      *(undefined8 *)(param_1 + 4) = uStack_48;
      *param_1 = uStack_58;
      param_1[1] = uStack_54;
      param_1[2] = uStack_50;
      param_1[3] = uStack_4c;
    }
    else {
      FUN_0412e5e0(param_1,uStack_48,CONCAT44(uStack_4c,uStack_50));
    }
  }
  if ((uStack_58 & 1) == 0) {
    return param_1;
  }
  uVar13 = CONCAT44(uStack_54,uStack_58);
  uStack_80 = uStack_48;
LAB_09dbc6ff:
  func_0x0412a280(uStack_80,uVar13 & 0xfffffffffffffffe);
  return param_1;
}


```
