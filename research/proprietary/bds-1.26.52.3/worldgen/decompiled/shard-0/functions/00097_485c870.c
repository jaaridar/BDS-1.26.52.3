/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x485c870
 * Label: caller-of-seed
 * Body:  [[0485c870, 0485c8c5] [0485c8d0, 0485c8f6] [0485c939, 0485ca65]]
 * Ghidra: FUN_0485c870
 */


undefined8 FUN_0485c870(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int unaff_R13D;
  char *unaff_R14;
  undefined8 unaff_retaddr;
  
  cVar3 = *param_2;
  if (unaff_R13D != 2) {
    while (cVar3 != '\0') {
      iVar4 = func_0x047818d0((int)cVar3,8);
      if (iVar4 == 0) {
        if (*unaff_R14 != '\0') {
          lVar5 = func_0x0eee2e90(unaff_R14);
          goto LAB_0485c9c0;
        }
        break;
      }
      pcVar1 = unaff_R14 + 1;
      unaff_R14 = unaff_R14 + 1;
      cVar3 = *pcVar1;
    }
    goto LAB_0485ca10;
  }
  while (cVar3 != '\0') {
    iVar4 = func_0x047818d0((int)cVar3,8);
    if (iVar4 == 0) {
      if (*unaff_R14 != '\0') {
        lVar5 = func_0x0eee2e90(unaff_R14);
        goto LAB_0485c960;
      }
      break;
    }
    pcVar1 = unaff_R14 + 1;
    unaff_R14 = unaff_R14 + 1;
    cVar3 = *pcVar1;
  }
  goto LAB_0485c8a5;
  while (iVar4 = func_0x047818d0((int)unaff_R14[lVar5],8), iVar4 != 0) {
LAB_0485c9c0:
    lVar2 = lVar5;
    lVar5 = lVar2 + -1;
    if (lVar5 == 0) goto LAB_0485c9e1;
  }
  unaff_R14[lVar2] = '\0';
LAB_0485c9e1:
  if (*unaff_R14 != '\0') goto LAB_0485c9f1;
LAB_0485ca10:
  uVar6 = 0x6c;
  uVar7 = 0x182;
  goto LAB_0485ca2c;
  while (iVar4 = func_0x047818d0((int)unaff_R14[lVar5],8), iVar4 != 0) {
LAB_0485c960:
    lVar2 = lVar5;
    lVar5 = lVar2 + -1;
    if (lVar5 == 0) goto LAB_0485c981;
  }
  unaff_R14[lVar2] = '\0';
LAB_0485c981:
  if (*unaff_R14 != '\0') {
    func_0x0eee2e90(unaff_R14);
LAB_0485c9f1:
    func_0x0485bd40();
    func_0x047f29a0();
    return unaff_retaddr;
  }
LAB_0485c8a5:
  uVar6 = 0x6d;
  uVar7 = 0x17b;
LAB_0485ca2c:
  func_0x047c6f20(0x22,0x6d,uVar6,&UNK_0135b158,uVar7);
  func_0x047f29a0();
  func_0x04831990(unaff_retaddr,&UNK_0485bf40);
  return 0;
}


