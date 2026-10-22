/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc897d50 (ELF vaddr 0xc797d50)
 * Label: string:temperature
 * Body:  [[0c897d50, 0c897ea3]]
 * Ghidra: FUN_0c897d50
 */


/* WARNING: Possible PIC construction at 0x0c886ab0: Changing call to branch */

void FUN_0c897d50(undefined2 *param_1,long *param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_RBX;
  long *plVar8;
  undefined8 unaff_RBP;
  undefined4 *puVar9;
  long *plVar10;
  long *plVar11;
  undefined **ppuVar12;
  undefined **unaff_R12;
  undefined **ppuVar13;
  undefined **unaff_R13;
  undefined4 *unaff_R14;
  undefined **ppuVar14;
  undefined **unaff_R15;
  bool bVar15;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  long *plStack_c0;
  undefined **ppuStack_b8;
  undefined1 *puStack_b0;
  undefined **ppuStack_a8;
  undefined *puStack_98;
  long *plStack_90;
  undefined **ppuStack_88;
  undefined2 *puStack_80;
  undefined **ppuStack_78;
  undefined *puStack_68;
  long *plStack_60;
  undefined2 *puStack_58;
  undefined **ppuStack_48;
  long *plStack_30;
  
  (**(code **)(*param_2 + 0x30))(param_2,*param_1,&UNK_012a0b39,0);
  (**(code **)(*param_2 + 0x90))(*(undefined4 *)(param_1 + 2),param_2,&UNK_0141a29e,0);
  (**(code **)(*param_2 + 0x90))(*(undefined4 *)(param_1 + 4),param_2,&UNK_011dacd6,0);
  (**(code **)(*param_2 + 0x90))(*(undefined4 *)(param_1 + 6),param_2,&UNK_013a2187,0);
  (**(code **)(*param_2 + 0x90))(*(undefined4 *)(param_1 + 8),param_2,&UNK_013e178f,0);
  (**(code **)(*param_2 + 0x90))(*(undefined4 *)(param_1 + 10),param_2,&UNK_012bacb5,0);
  (**(code **)(*param_2 + 0x50))(param_2,*(undefined4 *)(param_1 + 0xc),&UNK_0125ead2,0);
  (**(code **)(*param_2 + 0x18))(param_2,*(undefined1 *)(param_1 + 0xe),&UNK_013cbd50,0);
  cVar1 = *(char *)(param_1 + 0x1c);
  (**(code **)(*param_2 + 0x18))(param_2,cVar1,&UNK_014cdabb,&UNK_0147cb68);
  if (cVar1 == '\x01') {
    func_0x0c89c6f0(param_2,param_1 + 0x10,&UNK_0123d5a9,&UNK_013b3f3b,0,0);
  }
  cVar1 = *(char *)(param_1 + 0x1d4);
  (**(code **)(*param_2 + 0x18))(param_2,cVar1,&UNK_014cdabb,&UNK_0147cb68);
  if (cVar1 != '\x01') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x28);
  uStack_e0 = 0xc886254;
  plStack_30 = unaff_RBX;
  (**(code **)(*param_2 + 0x18))(param_2,cVar1,&UNK_014cdabb,&UNK_0147cb68);
  if (cVar1 == '\x01') {
    uStack_e0 = 0xc886273;
    (**(code **)(*param_2 + 0x90))(*(undefined4 *)(param_1 + 0x20),param_2,&UNK_0141a29e,0);
    uStack_e0 = 0xc88628e;
    (**(code **)(*param_2 + 0x90))(*(undefined4 *)(param_1 + 0x22),param_2,&UNK_011dacd6,0);
    uStack_e0 = 0xc8862a9;
    (**(code **)(*param_2 + 0x90))(*(undefined4 *)(param_1 + 0x24),param_2,&UNK_011f4738,0);
    uStack_e0 = 0xc8862c4;
    (**(code **)(*param_2 + 0x90))(*(undefined4 *)(param_1 + 0x26),param_2,&UNK_013cbcc0,0);
  }
  cVar1 = *(char *)(param_1 + 0x38);
  uStack_e0 = 0xc8862e2;
  (**(code **)(*param_2 + 0x18))(param_2,cVar1,&UNK_014cdabb,&UNK_0147cb68);
  ppuVar12 = unaff_R12;
  ppuVar13 = unaff_R13;
  ppuVar14 = unaff_R15;
  if (cVar1 == '\x01') {
    puStack_80 = param_1 + 0x2c;
    puStack_d0 = &UNK_014381dc;
    uStack_d8 = 0;
    puStack_c8 = &UNK_0f3dfe50;
    ppuStack_b8 = &puStack_d0;
    ppuVar13 = &puStack_c8;
    puStack_68 = &UNK_0f3dfd50;
    ppuVar14 = &puStack_68;
    puStack_98 = &UNK_0f3dfdd0;
    ppuVar12 = &puStack_98;
    uStack_e0 = 0xc886397;
    plStack_c0 = param_2;
    puStack_b0 = (undefined1 *)&uStack_d8;
    ppuStack_a8 = ppuVar13;
    plStack_90 = param_2;
    ppuStack_88 = ppuVar13;
    ppuStack_78 = ppuVar12;
    plStack_60 = param_2;
    puStack_58 = puStack_80;
    ppuStack_48 = ppuVar14;
    (**(code **)(*param_2 + 0xe8))(param_2,ppuVar14,ppuVar12,&UNK_0137d46c);
    if (ppuStack_78 == ppuVar12) {
      lVar6 = 0x20;
LAB_0c8863dd:
      uStack_e0 = 0xc8863e3;
      (**(code **)(*ppuStack_78 + lVar6))();
      if (ppuStack_48 != ppuVar14) goto LAB_0c8863b8;
LAB_0c8863f0:
      lVar6 = 0x20;
LAB_0c8863f5:
      uStack_e0 = 0xc8863fb;
      (**(code **)(*ppuStack_48 + lVar6))();
      if (ppuStack_a8 != ppuVar13) goto LAB_0c8863cc;
LAB_0c886405:
      lVar6 = 0x20;
    }
    else {
      lVar6 = 0x28;
      if (ppuStack_78 != (undefined **)0x0) goto LAB_0c8863dd;
      if (ppuStack_48 == ppuVar14) goto LAB_0c8863f0;
LAB_0c8863b8:
      lVar6 = 0x28;
      if (ppuStack_48 != (undefined **)0x0) goto LAB_0c8863f5;
      if (ppuStack_a8 == ppuVar13) goto LAB_0c886405;
LAB_0c8863cc:
      lVar6 = 0x28;
      if (ppuStack_a8 == (undefined **)0x0) goto LAB_0c886410;
    }
    uStack_e0 = 0xc886410;
    (**(code **)(*ppuStack_a8 + lVar6))();
  }
LAB_0c886410:
  cVar1 = *(char *)(param_1 + 0x42);
  uStack_e0 = 0xc88642e;
  (**(code **)(*param_2 + 0x18))(param_2,cVar1,&UNK_014cdabb,&UNK_0147cb68);
  if (cVar1 == '\x01') {
    uStack_e0 = 0xc88644d;
    (**(code **)(*param_2 + 0x40))(param_2,*(undefined4 *)(param_1 + 0x3c),&UNK_0140f26c,0);
    uStack_e0 = 0xc886464;
    (**(code **)(*param_2 + 0x18))(param_2,*(undefined1 *)(param_1 + 0x3e),&UNK_01279169,0);
    uStack_e0 = 0xc88647b;
    (**(code **)(*param_2 + 0x18))(param_2,*(undefined1 *)((long)param_1 + 0x7d),&UNK_01434d52,0);
    uStack_e0 = 0xc886492;
    (**(code **)(*param_2 + 0x18))(param_2,*(undefined1 *)(param_1 + 0x3f),&UNK_01292746,0);
    uStack_e0 = 0xc8864a9;
    (**(code **)(*param_2 + 0x18))(param_2,*(undefined1 *)((long)param_1 + 0x7f),&UNK_0125e7b1,0);
    uStack_e0 = 0xc8864c0;
    (**(code **)(*param_2 + 0x18))(param_2,*(undefined1 *)(param_1 + 0x40),&UNK_013b38a7,0);
  }
  cVar1 = *(char *)(param_1 + 0x50);
  uStack_e0 = 0xc8864de;
  (**(code **)(*param_2 + 0x18))(param_2,cVar1,&UNK_014cdabb,&UNK_0147cb68);
  if (cVar1 == '\x01') {
    puStack_80 = param_1 + 0x44;
    puStack_d0 = &UNK_012de601;
    uStack_d8 = 0;
    puStack_c8 = &UNK_0f3e19b0;
    ppuStack_b8 = &puStack_d0;
    ppuVar13 = &puStack_c8;
    puStack_68 = &UNK_0f3e18b0;
    ppuVar14 = &puStack_68;
    puStack_98 = &UNK_0f3e1930;
    ppuVar12 = &puStack_98;
    uStack_e0 = 0xc886593;
    plStack_c0 = param_2;
    puStack_b0 = (undefined1 *)&uStack_d8;
    ppuStack_a8 = ppuVar13;
    plStack_90 = param_2;
    ppuStack_88 = ppuVar13;
    ppuStack_78 = ppuVar12;
    plStack_60 = param_2;
    puStack_58 = puStack_80;
    ppuStack_48 = ppuVar14;
    (**(code **)(*param_2 + 0xe8))(param_2,ppuVar14,ppuVar12,&UNK_013520cf);
    if (ppuStack_78 == ppuVar12) {
      lVar6 = 0x20;
LAB_0c8865d9:
      uStack_e0 = 0xc8865df;
      (**(code **)(*ppuStack_78 + lVar6))();
      if (ppuStack_48 != ppuVar14) goto LAB_0c8865b4;
LAB_0c8865ec:
      lVar6 = 0x20;
LAB_0c8865f1:
      uStack_e0 = 0xc8865f7;
      (**(code **)(*ppuStack_48 + lVar6))();
      if (ppuStack_a8 != ppuVar13) goto LAB_0c8865c8;
LAB_0c886601:
      lVar6 = 0x20;
    }
    else {
      lVar6 = 0x28;
      if (ppuStack_78 != (undefined **)0x0) goto LAB_0c8865d9;
      if (ppuStack_48 == ppuVar14) goto LAB_0c8865ec;
LAB_0c8865b4:
      lVar6 = 0x28;
      if (ppuStack_48 != (undefined **)0x0) goto LAB_0c8865f1;
      if (ppuStack_a8 == ppuVar13) goto LAB_0c886601;
LAB_0c8865c8:
      lVar6 = 0x28;
      if (ppuStack_a8 == (undefined **)0x0) goto LAB_0c88660c;
    }
    uStack_e0 = 0xc88660c;
    (**(code **)(*ppuStack_a8 + lVar6))();
  }
LAB_0c88660c:
  cVar1 = *(char *)(param_1 + 0xa8);
  uStack_e0 = 0xc88662d;
  (**(code **)(*param_2 + 0x18))(param_2,cVar1,&UNK_014cdabb,&UNK_0147cb68);
  if (cVar1 == '\x01') {
    uStack_e0 = 0xc886653;
    func_0x0c8826e0(param_2,param_1 + 0x54,&UNK_013cbd3a,&UNK_011ae50b);
    uStack_e0 = 0xc88666c;
    func_0x0c8826e0(param_2,param_1 + 0x60,&UNK_012aaddb,&UNK_011ae50b);
    uStack_e0 = 0xc886685;
    func_0x0c8826e0(param_2,param_1 + 0x6c,&UNK_01434d7f,&UNK_011ae50b);
    uStack_e0 = 0xc88669e;
    func_0x0c8826e0(param_2,param_1 + 0x78,&UNK_01434d95,&UNK_011ae50b);
    uStack_e0 = 0xc8866b4;
    func_0x0c89be50(param_2,param_1 + 0x84,&UNK_01364111);
    uStack_e0 = 0xc8866ca;
    func_0x0c89be50(param_2,param_1 + 0x90,&UNK_012449a0);
    puStack_80 = param_1 + 0x9c;
    puStack_d0 = &UNK_013fff02;
    uStack_d8 = 0;
    puStack_c8 = &UNK_0f3e0bf0;
    ppuStack_b8 = &puStack_d0;
    ppuVar13 = &puStack_c8;
    puStack_68 = &UNK_0f3e0af0;
    ppuVar14 = &puStack_68;
    puStack_98 = &UNK_0f3e0b70;
    ppuVar12 = &puStack_98;
    uStack_e0 = 0xc886779;
    plStack_c0 = param_2;
    puStack_b0 = (undefined1 *)&uStack_d8;
    ppuStack_a8 = ppuVar13;
    plStack_90 = param_2;
    ppuStack_88 = ppuVar13;
    ppuStack_78 = ppuVar12;
    plStack_60 = param_2;
    puStack_58 = puStack_80;
    ppuStack_48 = ppuVar14;
    (**(code **)(*param_2 + 0xe8))(param_2,ppuVar14,ppuVar12,&UNK_0129b70a);
    if (ppuStack_78 == ppuVar12) {
      lVar6 = 0x20;
LAB_0c8867bf:
      uStack_e0 = 0xc8867c5;
      (**(code **)(*ppuStack_78 + lVar6))();
      if (ppuStack_48 != ppuVar14) goto LAB_0c88679a;
LAB_0c8867d2:
      lVar6 = 0x20;
LAB_0c8867d7:
      uStack_e0 = 0xc8867dd;
      (**(code **)(*ppuStack_48 + lVar6))();
      if (ppuStack_a8 != ppuVar13) goto LAB_0c8867ae;
LAB_0c8867e7:
      lVar6 = 0x20;
    }
    else {
      lVar6 = 0x28;
      if (ppuStack_78 != (undefined **)0x0) goto LAB_0c8867bf;
      if (ppuStack_48 == ppuVar14) goto LAB_0c8867d2;
LAB_0c88679a:
      lVar6 = 0x28;
      if (ppuStack_48 != (undefined **)0x0) goto LAB_0c8867d7;
      if (ppuStack_a8 == ppuVar13) goto LAB_0c8867e7;
LAB_0c8867ae:
      lVar6 = 0x28;
      if (ppuStack_a8 == (undefined **)0x0) goto LAB_0c8867f2;
    }
    uStack_e0 = 0xc8867f2;
    (**(code **)(*ppuStack_a8 + lVar6))();
  }
LAB_0c8867f2:
  cVar1 = *(char *)(param_1 + 0xb6);
  uStack_e0 = 0xc886813;
  (**(code **)(*param_2 + 0x18))(param_2,cVar1,&UNK_014cdabb,&UNK_0147cb68);
  if (cVar1 == '\x01') {
    uStack_e0 = 0xc88683a;
    (**(code **)(*param_2 + 0x90))(*(undefined4 *)(param_1 + 0xac),param_2,&UNK_0141a29e,0);
    uStack_e0 = 0xc886858;
    (**(code **)(*param_2 + 0x90))(*(undefined4 *)(param_1 + 0xae),param_2,&UNK_0125e79c,0);
    uStack_e0 = 0xc886876;
    (**(code **)(*param_2 + 0x90))(*(undefined4 *)(param_1 + 0xb0),param_2,&UNK_012f7f23,0);
    uStack_e0 = 0xc886894;
    (**(code **)(*param_2 + 0x90))(*(undefined4 *)(param_1 + 0xb2),param_2,&UNK_013ffe88,0);
    uStack_e0 = 0xc8868b2;
    (**(code **)(*param_2 + 0x90))(*(undefined4 *)(param_1 + 0xb4),param_2,&UNK_0123ca5a,0);
  }
  cVar1 = *(char *)(param_1 + 0xc4);
  uStack_e0 = 0xc8868d3;
  (**(code **)(*param_2 + 0x18))(param_2,cVar1,&UNK_014cdabb,&UNK_0147cb68);
  if (cVar1 == '\x01') {
    uStack_e0 = 0xc8868ee;
    func_0x0c89be50(param_2,param_1 + 0xb8,&UNK_01233699);
  }
  cVar1 = *(char *)(param_1 + 0xd4);
  uStack_e0 = 0xc88690f;
  (**(code **)(*param_2 + 0x18))(param_2,cVar1,&UNK_014cdabb,&UNK_0147cb68);
  if (cVar1 == '\x01') {
    puStack_80 = param_1 + 200;
    puStack_d0 = &DAT_012de60d;
    uStack_d8 = 0;
    puStack_c8 = &UNK_0f3e11d0;
    ppuStack_b8 = &puStack_d0;
    ppuVar13 = &puStack_c8;
    puStack_68 = &UNK_0f3e10d0;
    ppuVar14 = &puStack_68;
    puStack_98 = &UNK_0f3e1150;
    ppuVar12 = &puStack_98;
    uStack_e0 = 0xc8869c7;
    plStack_c0 = param_2;
    puStack_b0 = (undefined1 *)&uStack_d8;
    ppuStack_a8 = ppuVar13;
    plStack_90 = param_2;
    ppuStack_88 = ppuVar13;
    ppuStack_78 = ppuVar12;
    plStack_60 = param_2;
    puStack_58 = puStack_80;
    ppuStack_48 = ppuVar14;
    (**(code **)(*param_2 + 0xe8))(param_2,ppuVar14,ppuVar12,&UNK_01423307);
    if (ppuStack_78 == ppuVar12) {
      lVar6 = 0x20;
LAB_0c886a0d:
      uStack_e0 = 0xc886a13;
      (**(code **)(*ppuStack_78 + lVar6))();
      if (ppuStack_48 != ppuVar14) goto LAB_0c8869e8;
LAB_0c886a20:
      lVar6 = 0x20;
LAB_0c886a25:
      uStack_e0 = 0xc886a2b;
      (**(code **)(*ppuStack_48 + lVar6))();
      if (ppuStack_a8 != ppuVar13) goto LAB_0c8869fc;
LAB_0c886a35:
      lVar6 = 0x20;
    }
    else {
      lVar6 = 0x28;
      if (ppuStack_78 != (undefined **)0x0) goto LAB_0c886a0d;
      if (ppuStack_48 == ppuVar14) goto LAB_0c886a20;
LAB_0c8869e8:
      lVar6 = 0x28;
      if (ppuStack_48 != (undefined **)0x0) goto LAB_0c886a25;
      if (ppuStack_a8 == ppuVar13) goto LAB_0c886a35;
LAB_0c8869fc:
      lVar6 = 0x28;
      if (ppuStack_a8 == (undefined **)0x0) goto LAB_0c886a40;
    }
    uStack_e0 = 0xc886a40;
    (**(code **)(*ppuStack_a8 + lVar6))();
  }
LAB_0c886a40:
  cVar1 = *(char *)((long)param_1 + 0x1b1);
  uStack_e0 = 0xc886a61;
  (**(code **)(*param_2 + 0x18))(param_2,cVar1,&UNK_014cdabb,&UNK_0147cb68);
  if (cVar1 == '\x01') {
    uStack_e0 = 0xc886a80;
    (**(code **)(*param_2 + 0x20))(param_2,*(undefined1 *)(param_1 + 0xd8),&UNK_01364184,0);
  }
  cVar1 = *(char *)(param_1 + 0x154);
  uStack_e0 = 0xc886aa1;
  (**(code **)(*param_2 + 0x18))(param_2,cVar1,&UNK_014cdabb,&UNK_0147cb68);
  if (cVar1 == '\x01') {
    puVar9 = (undefined4 *)(param_1 + 0xdc);
    register0x00000020 = (BADSPACEBASE *)&uStack_e0;
    uStack_e0 = 0xc886ab5;
    unaff_RBP = 1;
    plVar8 = param_2;
    unaff_R12 = ppuVar12;
    unaff_R13 = ppuVar13;
    unaff_R14 = (undefined4 *)(param_1 + 0x20);
    unaff_R15 = ppuVar14;
  }
  else {
    cVar1 = *(char *)(param_1 + 0x1d0);
    uStack_e0 = 0xc886ad6;
    (**(code **)(*param_2 + 0x18))(param_2,cVar1,&UNK_014cdabb,&UNK_0147cb68);
    if (cVar1 != '\x01') {
      return;
    }
    puVar9 = (undefined4 *)(param_1 + 0x158);
    plVar8 = plStack_30;
  }
  *(undefined8 *)((long)register0x00000020 + -8) = unaff_RBP;
  *(undefined ***)((long)register0x00000020 + -0x10) = unaff_R15;
  *(undefined4 **)((long)register0x00000020 + -0x18) = unaff_R14;
  *(undefined ***)((long)register0x00000020 + -0x20) = unaff_R13;
  *(undefined ***)((long)register0x00000020 + -0x28) = unaff_R12;
  *(long **)((long)register0x00000020 + -0x30) = plVar8;
  cVar1 = *(char *)(puVar9 + 6);
  pcVar4 = *(code **)(*param_2 + 0x18);
  *(undefined8 *)((long)register0x00000020 + -0xe0) = 0xc89d404;
  (*pcVar4)(param_2,cVar1,&UNK_014cdabb,&UNK_0147cb68);
  if (cVar1 == '\x01') {
    uVar3 = *puVar9;
    pcVar4 = *(code **)(*param_2 + 0x40);
    *(undefined8 *)((long)register0x00000020 + -0xe0) = 0xc89d420;
    (*pcVar4)(param_2,uVar3,&UNK_0140f26c,0);
    uVar3 = puVar9[1];
    pcVar4 = *(code **)(*param_2 + 0x40);
    *(undefined8 *)((long)register0x00000020 + -0xe0) = 0xc89d431;
    (*pcVar4)(param_2,uVar3,&UNK_0140f26c,0);
    uVar3 = puVar9[2];
    pcVar4 = *(code **)(*param_2 + 0x40);
    *(undefined8 *)((long)register0x00000020 + -0xe0) = 0xc89d442;
    (*pcVar4)(param_2,uVar3,&UNK_0140f26c,0);
    uVar3 = puVar9[3];
    pcVar4 = *(code **)(*param_2 + 0x40);
    *(undefined8 *)((long)register0x00000020 + -0xe0) = 0xc89d453;
    (*pcVar4)(param_2,uVar3,&UNK_0140f26c,0);
    uVar3 = puVar9[4];
    pcVar4 = *(code **)(*param_2 + 0x40);
    *(undefined8 *)((long)register0x00000020 + -0xe0) = 0xc89d464;
    (*pcVar4)(param_2,uVar3,&UNK_0140f26c,0);
    uVar3 = puVar9[5];
    pcVar4 = *(code **)(*param_2 + 0x50);
    *(undefined8 *)((long)register0x00000020 + -0xe0) = 0xc89d479;
    (*pcVar4)(param_2,uVar3,&UNK_0137d3f9,0);
  }
  uVar2 = *(undefined1 *)(puVar9 + 7);
  pcVar4 = *(code **)(*param_2 + 0x18);
  *(undefined8 *)((long)register0x00000020 + -0xe0) = 0xc89d48f;
  (*pcVar4)(param_2,uVar2,&UNK_01434dab,0);
  uVar2 = *(undefined1 *)((long)puVar9 + 0x1d);
  pcVar4 = *(code **)(*param_2 + 0x18);
  *(undefined8 *)((long)register0x00000020 + -0xe0) = 0xc89d4a5;
  (*pcVar4)(param_2,uVar2,&UNK_011a45ac,0);
  uVar2 = *(undefined1 *)((long)puVar9 + 0x1e);
  pcVar4 = *(code **)(*param_2 + 0x18);
  *(undefined8 *)((long)register0x00000020 + -0xe0) = 0xc89d4bb;
  (*pcVar4)(param_2,uVar2,&UNK_0137d4c6,0);
  uVar2 = *(undefined1 *)((long)puVar9 + 0x1f);
  pcVar4 = *(code **)(*param_2 + 0x18);
  *(undefined8 *)((long)register0x00000020 + -0xe0) = 0xc89d4d1;
  (*pcVar4)(param_2,uVar2,&UNK_01244a0e,0);
  cVar1 = *(char *)(puVar9 + 0xb);
  pcVar4 = *(code **)(*param_2 + 0x18);
  *(undefined8 *)((long)register0x00000020 + -0xe0) = 0xc89d4ee;
  (*pcVar4)(param_2,cVar1,&UNK_014cdabb,&UNK_0147cb68);
  if (cVar1 == '\x01') {
    uVar3 = puVar9[8];
    pcVar4 = *(code **)(*param_2 + 0x40);
    *(undefined8 *)((long)register0x00000020 + -0xe0) = 0xc89d508;
    (*pcVar4)(param_2,uVar3,&UNK_0120ec56,0);
    uVar3 = puVar9[9];
    pcVar4 = *(code **)(*param_2 + 0x40);
    *(undefined8 *)((long)register0x00000020 + -0xe0) = 0xc89d51d;
    (*pcVar4)(param_2,uVar3,&UNK_014b4da8,0);
    uVar2 = *(undefined1 *)(puVar9 + 10);
    pcVar4 = *(code **)(*param_2 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0xe0) = 0xc89d533;
    (*pcVar4)(param_2,uVar2,&UNK_0144e6fd,0);
    uVar2 = *(undefined1 *)((long)puVar9 + 0x29);
    pcVar4 = *(code **)(*param_2 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0xe0) = 0xc89d549;
    (*pcVar4)(param_2,uVar2,&UNK_013ffe92,0);
  }
  cVar1 = *(char *)(puVar9 + 0x1e);
  pcVar4 = *(code **)(*param_2 + 0x18);
  *(undefined8 *)((long)register0x00000020 + -0xe0) = 0xc89d566;
  (*pcVar4)(param_2,cVar1,&UNK_014cdabb,&UNK_0147cb68);
  if (cVar1 == '\x01') {
    *(undefined8 *)((long)register0x00000020 + -0xe0) = 0xc89d582;
    func_0x0c882440(param_2,puVar9 + 0xc,&UNK_0129278c);
    *(undefined8 *)((long)register0x00000020 + -0xe0) = 0xc89d595;
    func_0x0c882440(param_2,puVar9 + 0x12,&UNK_01229fc0);
    cVar1 = *(char *)(puVar9 + 0x19);
    pcVar4 = *(code **)(*param_2 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0xe0) = 0xc89d5b2;
    (*pcVar4)(param_2,cVar1,&UNK_014cdabb,&UNK_0147cb68);
    if (cVar1 == '\x01') {
      uVar3 = puVar9[0x18];
      pcVar4 = *(code **)(*param_2 + 0x40);
      *(undefined8 *)((long)register0x00000020 + -0xe0) = 0xc89d5cc;
      (*pcVar4)(param_2,uVar3,&UNK_0140f26c,0);
    }
    cVar1 = *(char *)(puVar9 + 0x1b);
    pcVar4 = *(code **)(*param_2 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0xe0) = 0xc89d5e9;
    (*pcVar4)(param_2,cVar1,&UNK_014cdabb,&UNK_0147cb68);
    if (cVar1 == '\x01') {
      uVar3 = puVar9[0x1a];
      pcVar4 = *(code **)(*param_2 + 0x40);
      *(undefined8 *)((long)register0x00000020 + -0xe0) = 0xc89d603;
      (*pcVar4)(param_2,uVar3,&UNK_0140f26c,0);
    }
    cVar1 = *(char *)(puVar9 + 0x1d);
    pcVar4 = *(code **)(*param_2 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0xe0) = 0xc89d620;
    (*pcVar4)(param_2,cVar1,&UNK_014cdabb,&UNK_0147cb68);
    if (cVar1 == '\x01') {
      uVar3 = puVar9[0x1c];
      pcVar4 = *(code **)(*param_2 + 0x40);
      *(undefined8 *)((long)register0x00000020 + -0xe0) = 0xc89d63a;
      (*pcVar4)(param_2,uVar3,&UNK_0140f26c,0);
    }
  }
  cVar1 = *(char *)(puVar9 + 0x3a);
  pcVar4 = *(code **)(*param_2 + 0x18);
  *(undefined8 *)((long)register0x00000020 + -0xe0) = 0xc89d65a;
  (*pcVar4)(param_2,cVar1,&UNK_014cdabb,&UNK_0147cb68);
  if (cVar1 != '\x01') {
    return;
  }
  *(undefined8 *)((long)register0x00000020 + -0xe0) = 0xc89d679;
  func_0x0c882440(param_2,puVar9 + 0x20,&UNK_0149c605);
  *(undefined **)((long)register0x00000020 + -0xd0) = &UNK_0132cd5f;
  *(undefined8 *)((long)register0x00000020 + -0xd8) = 0;
  *(undefined **)((long)register0x00000020 + -200) = &UNK_0f3e0970;
  *(long **)((long)register0x00000020 + -0xc0) = param_2;
  *(undefined1 **)((long)register0x00000020 + -0xb8) =
       (undefined1 *)((long)register0x00000020 + -0xd0);
  *(undefined1 **)((long)register0x00000020 + -0xb0) =
       (undefined1 *)((long)register0x00000020 + -0xd8);
  plVar8 = (long *)((long)register0x00000020 + -200);
  *(long **)((long)register0x00000020 + -0xa8) = plVar8;
  *(undefined **)((long)register0x00000020 + -0x68) = &UNK_0f3e0870;
  *(long **)((long)register0x00000020 + -0x60) = param_2;
  *(undefined4 **)((long)register0x00000020 + -0x58) = puVar9 + 0x26;
  plVar10 = (long *)((long)register0x00000020 + -0x68);
  *(long **)((long)register0x00000020 + -0x48) = plVar10;
  *(undefined **)((long)register0x00000020 + -0x98) = &UNK_0f3e08f0;
  *(long **)((long)register0x00000020 + -0x90) = param_2;
  *(long **)((long)register0x00000020 + -0x88) = plVar8;
  *(undefined4 **)((long)register0x00000020 + -0x80) = puVar9 + 0x26;
  plVar11 = (long *)((long)register0x00000020 + -0x98);
  *(long **)((long)register0x00000020 + -0x78) = plVar11;
  pcVar4 = *(code **)(*param_2 + 0xe8);
  *(undefined8 *)((long)register0x00000020 + -0xe0) = 0xc89d728;
  (*pcVar4)(param_2,plVar10,plVar11,&UNK_01447599);
  plVar5 = *(long **)((long)register0x00000020 + -0x78);
  if (plVar5 == plVar11) {
    lVar6 = 0x20;
LAB_0c89d780:
    pcVar4 = *(code **)(*plVar5 + lVar6);
    *(undefined8 *)((long)register0x00000020 + -0xe0) = 0xc89d786;
    (*pcVar4)();
    plVar11 = *(long **)((long)register0x00000020 + -0x48);
    if (plVar11 != plVar10) goto LAB_0c89d749;
LAB_0c89d793:
    lVar6 = 0x20;
LAB_0c89d798:
    pcVar4 = *(code **)(*plVar11 + lVar6);
    *(undefined8 *)((long)register0x00000020 + -0xe0) = 0xc89d79e;
    (*pcVar4)();
    plVar10 = *(long **)((long)register0x00000020 + -0xa8);
    if (plVar10 != plVar8) goto LAB_0c89d75d;
LAB_0c89d7a8:
    lVar6 = 0x20;
LAB_0c89d7ad:
    pcVar4 = *(code **)(*plVar10 + lVar6);
    *(undefined8 *)((long)register0x00000020 + -0xe0) = 0xc89d7b3;
    (*pcVar4)();
  }
  else {
    lVar6 = 0x28;
    if (plVar5 != (long *)0x0) goto LAB_0c89d780;
    plVar11 = *(long **)((long)register0x00000020 + -0x48);
    if (plVar11 == plVar10) goto LAB_0c89d793;
LAB_0c89d749:
    lVar6 = 0x28;
    if (plVar11 != (long *)0x0) goto LAB_0c89d798;
    plVar10 = *(long **)((long)register0x00000020 + -0xa8);
    if (plVar10 == plVar8) goto LAB_0c89d7a8;
LAB_0c89d75d:
    lVar6 = 0x28;
    if (plVar10 != (long *)0x0) goto LAB_0c89d7ad;
  }
  bVar15 = (*(byte *)(puVar9 + 0x2c) & 1) != 0;
  lVar6 = (long)puVar9 + 0xb1;
  if (bVar15) {
    lVar6 = *(long *)(puVar9 + 0x30);
  }
  uVar7 = (ulong)(*(byte *)(puVar9 + 0x2c) >> 1);
  if (bVar15) {
    uVar7 = *(ulong *)(puVar9 + 0x2e);
  }
  pcVar4 = *(code **)(*param_2 + 0xa8);
  *(undefined8 *)((long)register0x00000020 + -0xe0) = 0xc89d7ed;
  (*pcVar4)(param_2,lVar6,uVar7,&UNK_014bf0c2);
  uVar3 = puVar9[0x32];
  pcVar4 = *(code **)(*param_2 + 0x50);
  *(undefined8 *)((long)register0x00000020 + -0xe0) = 0xc89d805;
  (*pcVar4)(param_2,uVar3,&UNK_0120189a,0);
  *(undefined8 *)((long)register0x00000020 + -8) = *(undefined8 *)((long)register0x00000020 + -0x10)
  ;
  *(undefined8 *)((long)register0x00000020 + -0x10) =
       *(undefined8 *)((long)register0x00000020 + -0x18);
  *(undefined8 *)((long)register0x00000020 + -0x18) =
       *(undefined8 *)((long)register0x00000020 + -0x28);
  *(undefined8 *)((long)register0x00000020 + -0x20) =
       *(undefined8 *)((long)register0x00000020 + -0x30);
  *(undefined **)((long)register0x00000020 + -0xc0) = &UNK_011cd3be;
  *(undefined8 *)((long)register0x00000020 + -200) = 0;
  *(undefined **)((long)register0x00000020 + -0xb8) = &UNK_0f49cdd0;
  *(long **)((long)register0x00000020 + -0xb0) = param_2;
  *(undefined1 **)((long)register0x00000020 + -0xa8) =
       (undefined1 *)((long)register0x00000020 + -0xc0);
  *(undefined1 **)((long)register0x00000020 + -0xa0) =
       (undefined1 *)((long)register0x00000020 + -200);
  plVar8 = (long *)((long)register0x00000020 + -0xb8);
  *(long **)((long)register0x00000020 + -0x98) = plVar8;
  *(undefined **)((long)register0x00000020 + -0x58) = &UNK_0f49ccd0;
  *(long **)((long)register0x00000020 + -0x50) = param_2;
  *(undefined4 **)((long)register0x00000020 + -0x48) = puVar9 + 0x34;
  plVar10 = (long *)((long)register0x00000020 + -0x58);
  *(long **)((long)register0x00000020 + -0x38) = plVar10;
  *(undefined **)((long)register0x00000020 + -0x88) = &UNK_0f49cd50;
  *(long **)((long)register0x00000020 + -0x80) = param_2;
  *(long **)((long)register0x00000020 + -0x78) = plVar8;
  *(undefined4 **)((long)register0x00000020 + -0x70) = puVar9 + 0x34;
  plVar11 = (long *)((long)register0x00000020 + -0x88);
  *(long **)((long)register0x00000020 + -0x68) = plVar11;
  pcVar4 = *(code **)(*param_2 + 0xe8);
  *(undefined8 *)((long)register0x00000020 + -0xd0) = 0xdcf1321;
  (*pcVar4)(param_2,plVar10,plVar11,&UNK_013a55fd,0);
  plVar5 = *(long **)((long)register0x00000020 + -0x68);
  if (plVar5 == plVar11) {
    lVar6 = 0x20;
LAB_0dcf1367:
    pcVar4 = *(code **)(*plVar5 + lVar6);
    *(undefined8 *)((long)register0x00000020 + -0xd0) = 0xdcf136d;
    (*pcVar4)();
    plVar11 = *(long **)((long)register0x00000020 + -0x38);
    if (plVar11 != plVar10) goto LAB_0dcf1342;
LAB_0dcf137a:
    lVar6 = 0x20;
  }
  else {
    lVar6 = 0x28;
    if (plVar5 != (long *)0x0) goto LAB_0dcf1367;
    plVar11 = *(long **)((long)register0x00000020 + -0x38);
    if (plVar11 == plVar10) goto LAB_0dcf137a;
LAB_0dcf1342:
    lVar6 = 0x28;
    if (plVar11 == (long *)0x0) {
      plVar10 = *(long **)((long)register0x00000020 + -0x98);
      goto joined_r0x0dcf138d;
    }
  }
  pcVar4 = *(code **)(*plVar11 + lVar6);
  *(undefined8 *)((long)register0x00000020 + -0xd0) = 0xdcf1385;
  (*pcVar4)();
  plVar10 = *(long **)((long)register0x00000020 + -0x98);
joined_r0x0dcf138d:
  if (plVar10 == plVar8) {
    lVar6 = 0x20;
  }
  else {
    lVar6 = 0x28;
    if (plVar10 == (long *)0x0) {
      return;
    }
  }
  pcVar4 = *(code **)(*plVar10 + lVar6);
  *(undefined8 *)((long)register0x00000020 + -0xd0) = 0xdcf139a;
  (*pcVar4)();
  return;
}


