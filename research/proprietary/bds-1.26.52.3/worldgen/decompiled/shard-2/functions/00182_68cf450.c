/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x69cf450 (ELF vaddr 0x68cf450)
 * Label: string:DisableTerrainRendering
 * Body:  [[069cf450, 069cff10] [069cff2c, 069cff4d]]
 * Ghidra: FUN_069cf450
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_069cf450(long *param_1,undefined8 param_2,long *param_3,undefined8 *param_4,int param_5)

{
  long *****ppppplVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  long ******pppppplVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 *puVar14;
  char cVar15;
  bool bVar16;
  char cStack_fa;
  char cStack_f9;
  byte bStack_f8;
  undefined4 uStack_f7;
  undefined4 uStack_f3;
  undefined4 uStack_ef;
  undefined1 uStack_eb;
  undefined1 uStack_ea;
  undefined1 uStack_e9;
  undefined4 uStack_e8;
  undefined1 uStack_e4;
  undefined2 uStack_e3;
  undefined1 uStack_e1;
  char cStack_db;
  char cStack_da;
  char cStack_d9;
  uint uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  long *****appppplStack_c8 [2];
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  char cStack_a4;
  long lStack_a0;
  long lStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  if (param_5 != 1) {
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    FUN_05d84ba0(param_1);
    return param_1;
  }
  appppplStack_c8[0] = (long *****)0x0;
  uStack_b8 = (undefined4)param_3[2];
  uStack_b4 = *(undefined4 *)((long)param_3 + 0x14);
  uStack_b0 = (undefined4)param_3[3];
  uStack_ac = *(undefined4 *)((long)param_3 + 0x1c);
  iStack_a8 = (int)param_3[4];
  cStack_a4 = *(char *)((long)param_3 + 0x24);
  if (cStack_a4 != '\0') {
    if (cStack_a4 == '\x02') {
      (*(code *)param_3[2])(5,param_3,appppplStack_c8);
    }
    else {
      appppplStack_c8[0] = (long *****)*param_3;
      *param_3 = 0;
    }
  }
  lVar9 = param_3[5];
  lStack_98 = param_3[6];
  param_3[6] = 0;
  pcStack_90 = (code *)param_3[7];
  param_3[7] = 0;
  lStack_a0 = lVar9;
  if (cStack_a4 != '\x04') {
    pppppplVar7 = (long ******)appppplStack_c8[0];
    if (cStack_a4 == '\x02') {
      pppppplVar7 = appppplStack_c8;
    }
    if ((iStack_a8 == 0x21cb317c) && (pppppplVar7 != (long ******)0x0)) {
LAB_069cf5dc:
      if (*(int *)(param_4 + 4) == 0xca13c39) {
        bVar16 = false;
      }
      else {
        func_0x069d0170(&uStack_88,param_4);
        lVar9 = uStack_50;
        if ((uStack_50 != 0) && ((byte)(uStack_68._4_1_ - 1U) < 2)) {
          func_0x048b0900(param_4,&uStack_88);
        }
        if (pcStack_70 != (code *)0x0) {
          (*pcStack_70)(&uStack_88);
        }
        if (lVar9 == 0) goto LAB_069cf517;
        bVar16 = *(int *)(param_4 + 4) != 0xca13c39;
      }
      lStack_38 = lStack_a0;
      cVar6 = *(char *)((long)param_4 + 0x24);
      puVar14 = (undefined8 *)*param_4;
      puVar8 = puVar14;
      if (cVar6 == '\x02') {
        puVar8 = param_4;
      }
      if ((bool)(puVar8 == (undefined8 *)0x0 | bVar16)) {
        uVar12 = param_4[5];
        lVar9 = param_4[6];
        if (lVar9 == 0) {
          (*(code *)param_4[7])(0,param_4,0);
          lVar9 = param_4[6];
          cVar6 = *(char *)((long)param_4 + 0x24);
          puVar14 = (undefined8 *)*param_4;
        }
        if (cVar6 == '\x02') {
          puVar14 = param_4;
        }
        puVar8 = (undefined8 *)FUN_0488e200(uVar12,lVar9,&UNK_0ca13c39,puVar14);
      }
      bStack_f8 = 0x18;
      uStack_f7 = 0x70617247;
      uStack_f3 = 0x73636968;
      uStack_ef = 0x65646f4d;
      uStack_eb = 0;
      lVar9 = func_0x069d1600(puVar8,&bStack_f8);
      if ((bStack_f8 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_e1,CONCAT25(uStack_e3,CONCAT14(uStack_e4,uStack_e8))),
                        CONCAT35((undefined3)uStack_f3,CONCAT41(uStack_f7,bStack_f8)) &
                        0xfffffffffffffffe);
      }
      cVar6 = '\x01';
      if (((lVar9 != 0) && (*(char *)(lVar9 + 0x48) == '\x01')) && (*(int *)(lVar9 + 0x40) == 2)) {
        cVar6 = func_0x0a34a120(lVar9 + 0x28);
      }
      bStack_f8 = 0x26;
      uStack_f7 = _DAT_01798489;
      uStack_f3 = _UNK_0179848d;
      uStack_ef = _UNK_01798491;
      uStack_eb = (undefined1)_UNK_01798495;
      uStack_ea = (undefined1)((uint)_UNK_01798495 >> 8);
      uStack_e9 = (undefined1)((uint)_UNK_01798495 >> 0x10);
      uStack_e8 = 0x736b636f;
      uStack_e4 = 0;
      lVar9 = func_0x069d1600(puVar8,&bStack_f8);
      if ((bStack_f8 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_e1,CONCAT25(uStack_e3,CONCAT14(uStack_e4,uStack_e8))),
                        CONCAT35((undefined3)uStack_f3,CONCAT41(uStack_f7,bStack_f8)) &
                        0xfffffffffffffffe);
      }
      cStack_f9 = '\x01';
      if (((lVar9 != 0) && (*(char *)(lVar9 + 0x48) == '\x01')) && (*(int *)(lVar9 + 0x40) == 1)) {
        cStack_f9 = *(char *)(lVar9 + 0x28);
      }
      bStack_f8 = 0x26;
      uStack_f7 = _DAT_0179849d;
      uStack_f3 = _UNK_017984a1;
      uStack_ef = _UNK_017984a5;
      uStack_eb = (undefined1)_UNK_017984a9;
      uStack_ea = (undefined1)((uint)_UNK_017984a9 >> 8);
      uStack_e9 = (undefined1)((uint)_UNK_017984a9 >> 0x10);
      uStack_e8 = 0x73656972;
      uStack_e4 = 0;
      lVar9 = func_0x069d1600(puVar8,&bStack_f8);
      if ((bStack_f8 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_e1,CONCAT25(uStack_e3,CONCAT14(uStack_e4,uStack_e8))),
                        CONCAT35((undefined3)uStack_f3,CONCAT41(uStack_f7,bStack_f8)) &
                        0xfffffffffffffffe);
      }
      if (((lVar9 == 0) || (*(char *)(lVar9 + 0x48) != '\x01')) || (*(int *)(lVar9 + 0x40) != 1)) {
        uStack_cc = 0;
      }
      else {
        uStack_cc = (uint)*(byte *)(lVar9 + 0x28);
      }
      bStack_f8 = 0x16;
      uStack_f7 = 0x776f6853;
      uStack_f3 = 0x706d6f43;
      uStack_ef = 0x737361;
      lVar9 = func_0x069d1600(puVar8,&bStack_f8);
      if ((bStack_f8 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_e1,CONCAT25(uStack_e3,CONCAT14(uStack_e4,uStack_e8))),
                        CONCAT35((undefined3)uStack_f3,CONCAT41(uStack_f7,bStack_f8)) &
                        0xfffffffffffffffe);
      }
      cStack_fa = '\x01';
      if (((lVar9 != 0) && (*(char *)(lVar9 + 0x48) == '\x01')) && (*(int *)(lVar9 + 0x40) == 1)) {
        cStack_fa = *(char *)(lVar9 + 0x28);
      }
      bStack_f8 = 0x16;
      uStack_f7 = 0x6867694e;
      uStack_f3 = 0x73695674;
      uStack_ef = 0x6e6f69;
      lVar9 = func_0x069d1600(puVar8,&bStack_f8);
      if ((bStack_f8 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_e1,CONCAT25(uStack_e3,CONCAT14(uStack_e4,uStack_e8))),
                        CONCAT35((undefined3)uStack_f3,CONCAT41(uStack_f7,bStack_f8)) &
                        0xfffffffffffffffe);
      }
      cVar15 = '\x01';
      if (((lVar9 != 0) && (*(char *)(lVar9 + 0x48) == '\x01')) && (*(int *)(lVar9 + 0x40) == 1)) {
        cVar15 = *(char *)(lVar9 + 0x28);
      }
      bStack_f8 = 0x2c;
      uStack_f7 = _DAT_017984c9;
      uStack_f3 = _UNK_017984cd;
      uStack_ef = _UNK_017984d1;
      uStack_eb = (undefined1)_UNK_017984d5;
      uStack_ea = (undefined1)((uint)_UNK_017984d5 >> 8);
      uStack_e9 = 0x69;
      uStack_e8 = 0x69746163;
      uStack_e4 = 0x6f;
      uStack_e3 = 0x736e;
      uStack_e1 = 0;
      lVar9 = func_0x069d1600(puVar8,&bStack_f8);
      if ((bStack_f8 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_e1,CONCAT25(uStack_e3,CONCAT14(uStack_e4,uStack_e8))),
                        CONCAT35((undefined3)uStack_f3,CONCAT41(uStack_f7,bStack_f8)) &
                        0xfffffffffffffffe);
      }
      cStack_db = '\x01';
      if (((lVar9 != 0) && (*(char *)(lVar9 + 0x48) == '\x01')) && (*(int *)(lVar9 + 0x40) == 1)) {
        cStack_db = *(char *)(lVar9 + 0x28);
      }
      cStack_da = cVar6;
      cStack_d9 = cVar15;
      puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a);
      if (puVar10 == (undefined4 *)0x0) {
        FUN_0eec74c0(0x1a,0);
      }
      uVar5 = _UNK_017984ec;
      uVar4 = _UNK_017984e8;
      uVar3 = _UNK_017984e4;
      uStack_e8 = SUB84(puVar10,0);
      uStack_e4 = (undefined1)((ulong)puVar10 >> 0x20);
      uStack_e3 = (undefined2)((ulong)puVar10 >> 0x28);
      uStack_e1 = (undefined1)((ulong)puVar10 >> 0x38);
      bStack_f8 = 0x1b;
      uStack_f7 = 0;
      uStack_f3 = 0x17000000;
      uStack_ef = 0;
      uStack_eb = 0;
      uStack_ea = 0;
      uStack_e9 = 0;
      *puVar10 = _DAT_017984e0;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      *(undefined8 *)((long)puVar10 + 0xf) = 0x676e697265646e65;
      *(undefined1 *)((long)puVar10 + 0x17) = 0;
      lVar9 = func_0x069d1600(puVar8,&bStack_f8);
      if ((bStack_f8 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_e1,CONCAT25(uStack_e3,CONCAT14(uStack_e4,uStack_e8))),
                        CONCAT35((undefined3)uStack_f3,CONCAT41(uStack_f7,bStack_f8)) &
                        0xfffffffffffffffe);
      }
      if (((lVar9 == 0) || (*(char *)(lVar9 + 0x48) != '\x01')) || (*(int *)(lVar9 + 0x40) != 1)) {
        uStack_d0 = 0;
      }
      else {
        uStack_d0 = (uint)*(byte *)(lVar9 + 0x28);
      }
      bStack_f8 = 0x2c;
      uStack_f7 = _DAT_017984f8;
      uStack_f3 = _UNK_017984fc;
      uStack_ef = _UNK_01798500;
      uStack_eb = (undefined1)_UNK_01798504;
      uStack_ea = (undefined1)((uint)_UNK_01798504 >> 8);
      uStack_e9 = 0x65;
      uStack_e8 = 0x7265646e;
      uStack_e4 = 0x69;
      uStack_e3 = 0x676e;
      uStack_e1 = 0;
      lVar9 = func_0x069d1600(puVar8,&bStack_f8);
      if ((bStack_f8 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_e1,CONCAT25(uStack_e3,CONCAT14(uStack_e4,uStack_e8))),
                        CONCAT35((undefined3)uStack_f3,CONCAT41(uStack_f7,bStack_f8)) &
                        0xfffffffffffffffe);
      }
      if (((lVar9 == 0) || (*(char *)(lVar9 + 0x48) != '\x01')) || (*(int *)(lVar9 + 0x40) != 1)) {
        uStack_d4 = 0;
      }
      else {
        uStack_d4 = (uint)*(byte *)(lVar9 + 0x28);
      }
      puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar10 == (undefined4 *)0x0) {
        FUN_0eec74c0(0x20,0);
      }
      uVar12 = _UNK_01798522;
      uStack_e8 = SUB84(puVar10,0);
      uStack_e4 = (undefined1)((ulong)puVar10 >> 0x20);
      uStack_e3 = (undefined2)((ulong)puVar10 >> 0x28);
      uStack_e1 = (undefined1)((ulong)puVar10 >> 0x38);
      bStack_f8 = 0x21;
      uStack_f7 = 0;
      uStack_f3 = 0x1b000000;
      uStack_ef = 0;
      uStack_eb = 0;
      uStack_ea = 0;
      uStack_e9 = 0;
      *(ulong *)((long)puVar10 + 0xb) = CONCAT35(_UNK_0179851f,CONCAT41(_UNK_0179851b,DAT_0179851a))
      ;
      *(undefined8 *)((long)puVar10 + 0x13) = uVar12;
      uVar5 = _UNK_0179851b;
      uVar4 = _UNK_01798517;
      uVar3 = _UNK_01798513;
      *puVar10 = _DAT_0179850f;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      *(undefined1 *)((long)puVar10 + 0x1b) = 0;
      lVar9 = func_0x069d1600(puVar8,&bStack_f8);
      if ((bStack_f8 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_e1,CONCAT25(uStack_e3,CONCAT14(uStack_e4,uStack_e8))),
                        CONCAT35((undefined3)uStack_f3,CONCAT41(uStack_f7,bStack_f8)) &
                        0xfffffffffffffffe);
      }
      if (((lVar9 == 0) || (*(char *)(lVar9 + 0x48) != '\x01')) || (*(int *)(lVar9 + 0x40) != 1)) {
        uStack_d8 = 0;
      }
      else {
        uStack_d8 = (uint)*(byte *)(lVar9 + 0x28);
      }
      puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar10 == (undefined4 *)0x0) {
        FUN_0eec74c0(0x20,0);
      }
      uVar5 = _UNK_01798537;
      uVar4 = _UNK_01798533;
      uVar3 = _UNK_0179852f;
      uStack_e8 = SUB84(puVar10,0);
      uStack_e4 = (undefined1)((ulong)puVar10 >> 0x20);
      uStack_e3 = (undefined2)((ulong)puVar10 >> 0x28);
      uStack_e1 = (undefined1)((ulong)puVar10 >> 0x38);
      bStack_f8 = 0x21;
      uStack_f7 = 0;
      uStack_f3 = 0x18000000;
      uStack_ef = 0;
      uStack_eb = 0;
      uStack_ea = 0;
      uStack_e9 = 0;
      *puVar10 = _DAT_0179852b;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      *(undefined8 *)(puVar10 + 4) = 0x676e697265646e65;
      *(undefined1 *)(puVar10 + 6) = 0;
      lVar9 = func_0x069d1600(puVar8,&bStack_f8);
      if ((bStack_f8 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_e1,CONCAT25(uStack_e3,CONCAT14(uStack_e4,uStack_e8))),
                        CONCAT35((undefined3)uStack_f3,CONCAT41(uStack_f7,bStack_f8)) &
                        0xfffffffffffffffe);
      }
      if (((lVar9 == 0) || (*(char *)(lVar9 + 0x48) != '\x01')) || (*(int *)(lVar9 + 0x40) != 1)) {
        cVar6 = '\0';
      }
      else {
        cVar6 = *(char *)(lVar9 + 0x28);
      }
      puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a);
      if (puVar10 == (undefined4 *)0x0) {
        FUN_0eec74c0(0x1a,0);
      }
      uVar5 = _UNK_01798550;
      uVar4 = _UNK_0179854c;
      uVar3 = _UNK_01798548;
      uStack_e8 = SUB84(puVar10,0);
      uStack_e4 = (undefined1)((ulong)puVar10 >> 0x20);
      uStack_e3 = (undefined2)((ulong)puVar10 >> 0x28);
      uStack_e1 = (undefined1)((ulong)puVar10 >> 0x38);
      bStack_f8 = 0x1b;
      uStack_f7 = 0;
      uStack_f3 = 0x17000000;
      uStack_ef = 0;
      uStack_eb = 0;
      uStack_ea = 0;
      uStack_e9 = 0;
      *puVar10 = _DAT_01798544;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      *(undefined8 *)((long)puVar10 + 0xf) = 0x676e697265646e65;
      *(undefined1 *)((long)puVar10 + 0x17) = 0;
      lVar9 = func_0x069d1600(puVar8,&bStack_f8);
      if ((bStack_f8 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_e1,CONCAT25(uStack_e3,CONCAT14(uStack_e4,uStack_e8))),
                        CONCAT35((undefined3)uStack_f3,CONCAT41(uStack_f7,bStack_f8)) &
                        0xfffffffffffffffe);
      }
      if (((lVar9 == 0) || (*(char *)(lVar9 + 0x48) != '\x01')) || (*(int *)(lVar9 + 0x40) != 1)) {
        cVar15 = '\0';
      }
      else {
        cVar15 = *(char *)(lVar9 + 0x28);
      }
      ppppplVar1 = *pppppplVar7;
      if (((cStack_f9 != *(char *)((long)ppppplVar1 + 0x31)) ||
          ((char)uStack_cc != *(char *)((long)ppppplVar1 + 0x32))) ||
         ((((cStack_fa != *(char *)((long)ppppplVar1 + 0x33) ||
            ((((cStack_d9 != *(char *)((long)ppppplVar1 + 0x34) ||
               (cStack_da != *(char *)(ppppplVar1 + 6))) ||
              (cStack_db != *(char *)((long)ppppplVar1 + 0x35))) ||
             (((char)uStack_d0 != *(char *)((long)ppppplVar1 + 0x36) ||
              ((char)uStack_d4 != *(char *)((long)ppppplVar1 + 0x37))))))) ||
           ((char)uStack_d8 != *(char *)(ppppplVar1 + 7))) ||
          ((cVar6 != *(char *)((long)ppppplVar1 + 0x39) ||
           (cVar15 != *(char *)((long)ppppplVar1 + 0x3a))))))) {
        *(char *)(ppppplVar1 + 6) = cStack_da;
        *(char *)((long)ppppplVar1 + 0x31) = cStack_f9;
        *(char *)((long)ppppplVar1 + 0x32) = (char)uStack_cc;
        *(char *)((long)ppppplVar1 + 0x33) = cStack_fa;
        *(char *)((long)ppppplVar1 + 0x34) = cStack_d9;
        *(char *)((long)ppppplVar1 + 0x35) = cStack_db;
        *(char *)((long)ppppplVar1 + 0x36) = (char)uStack_d0;
        *(char *)((long)ppppplVar1 + 0x37) = (char)uStack_d4;
        *(char *)(ppppplVar1 + 7) = (char)uStack_d8;
        *(char *)((long)ppppplVar1 + 0x39) = cVar6;
        *(char *)((long)ppppplVar1 + 0x3a) = cVar15;
        if (ppppplVar1[4] == (long ****)0x0) {
          uVar12 = func_0x04891200();
          uVar12 = func_0x04882e20(uVar12);
          uVar12 = func_0x04882e20(uVar12);
          uVar12 = func_0x04882e20(uVar12);
          if (uStack_68 != (code *)0x0) {
            (*uStack_68)(pppppplVar7);
          }
          if ((code *)CONCAT44(uStack_ac,uStack_b0) != (code *)0x0) {
            (*(code *)CONCAT44(uStack_ac,uStack_b0))(appppplStack_c8);
          }
          uVar12 = func_0x0eee2d70(uVar12);
          func_0x04882e20(uVar12);
          pcVar2 = (code *)swi(3);
          plVar13 = (long *)(*pcVar2)();
          return plVar13;
        }
        (*(code *)(*ppppplVar1[4])[6])();
      }
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_68 = (code *)0x0;
      uStack_60 = 0;
      uStack_78 = 0;
      pcStack_70 = (code *)0x0;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_48 = 0;
      FUN_05d84ba0(&uStack_80);
      *param_1 = 0;
      param_1[2] = (long)&UNK_065cc250;
      *(undefined4 *)(param_1 + 4) = 0x4efbe0f9;
      param_1[3] = (long)&UNK_065cc420;
      *(undefined1 *)((long)param_1 + 0x24) = 1;
      puVar11 = (undefined1 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
      if (puVar11 == (undefined1 *)0x0) {
        FUN_0eec74c0(0x48,0);
      }
      uVar12 = uStack_80;
      *puVar11 = (undefined1)uStack_88;
      *(undefined8 *)(puVar11 + 8) = 0;
      *(code **)(puVar11 + 0x18) = pcStack_70;
      *(code **)(puVar11 + 0x20) = uStack_68;
      *(undefined4 *)(puVar11 + 0x28) = (undefined4)uStack_60;
      puVar11[0x2c] = uStack_60._4_1_;
      if (uStack_60._4_1_ != '\0') {
        if (uStack_60._4_1_ == '\x02') {
          (*pcStack_70)(5,&uStack_80);
        }
        else {
          uStack_80 = 0;
          *(undefined8 *)(puVar11 + 8) = uVar12;
        }
      }
      uVar12 = uStack_48;
      uVar3 = (undefined4)uStack_50;
      uVar4 = uStack_50._4_4_;
      uStack_50 = 0;
      *(undefined4 *)(puVar11 + 0x30) = (undefined4)uStack_58;
      *(undefined4 *)(puVar11 + 0x34) = uStack_58._4_4_;
      *(undefined4 *)(puVar11 + 0x38) = uVar3;
      *(undefined4 *)(puVar11 + 0x3c) = uVar4;
      uStack_48 = 0;
      *(undefined8 *)(puVar11 + 0x40) = uVar12;
      *param_1 = (long)puVar11;
      param_1[5] = lStack_38;
      param_1[6] = 0;
      param_1[7] = (long)&UNK_065cc1b0;
      if (uStack_68 != (code *)0x0) {
        (*uStack_68)(&uStack_80);
      }
      goto LAB_069cf54c;
    }
    if (pcStack_90 != (code *)0x0) {
      if (lStack_98 == 0) {
        (*pcStack_90)(0,appppplStack_c8,0);
      }
      pppppplVar7 = (long ******)appppplStack_c8[0];
      if (cStack_a4 == '\x02') {
        pppppplVar7 = appppplStack_c8;
      }
      pppppplVar7 = (long ******)FUN_0488e200(lVar9,lStack_98,0x21cb317c,pppppplVar7);
      if (pppppplVar7 != (long ******)0x0) goto LAB_069cf5dc;
    }
  }
LAB_069cf517:
  param_1[2] = (long)&UNK_0488e0b0;
  *(undefined4 *)(param_1 + 4) = 0x48b5725f;
  param_1[3] = 0;
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  *param_1 = 0;
  param_1[5] = lStack_a0;
  param_1[6] = 0;
  param_1[7] = 0;
LAB_069cf54c:
  if ((code *)CONCAT44(uStack_ac,uStack_b0) != (code *)0x0) {
    (*(code *)CONCAT44(uStack_ac,uStack_b0))(appppplStack_c8);
  }
  return param_1;
}



/* ---- referenced strings ----
 * 0x1798489  ShowInvisibleBlocks
 * 0x179849d  ShowChunkBoundaries
 * 0x17984c9  ShowToastNotifications
 * 0x17984e0  DisableTerrainRendering
 * 0x17984f8  DisableEntityRendering
 * 0x179850f  DisableBlockEntityRendering
 * 0x179851a  kEntityRendering
 * 0x179852b  DisableParticleRendering
 * 0x1798544  DisableWeatherRendering
 */
