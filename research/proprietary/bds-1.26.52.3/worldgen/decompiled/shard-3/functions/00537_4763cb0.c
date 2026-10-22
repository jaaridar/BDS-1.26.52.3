/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4863cb0 (ELF vaddr 0x4763cb0)
 * Label: callee-of:0xaf95f80
 * Body:  [[04863cb0, 04863e1b] [04863e1f, 04863e21]]
 * Ghidra: FUN_04863cb0
 */


long * FUN_04863cb0(long *param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  ulong uVar2;
  undefined *puVar3;
  double *pdVar4;
  char *pcVar5;
  long lVar6;
  double *pdVar7;
  
  bVar1 = param_2[8];
  if (bVar1 == 5) {
    puVar3 = &UNK_01198d5e;
    if ((ulong)*param_2 != 0) {
      puVar3 = &UNK_01306cb5;
    }
    uVar2 = (ulong)*param_2 ^ 5;
    *(char *)param_1 = (char)uVar2 * '\x02';
    func_0x0eee2f00((char *)((long)param_1 + 1),puVar3,uVar2);
    *(char *)((long)param_1 + uVar2 + 1) = '\0';
    return param_1;
  }
  if (bVar1 != 4) {
    if (bVar1 != 0) {
      *(undefined2 *)param_1 = 0;
      return param_1;
    }
    if ((*param_3 & 1) == 0) {
      param_1[2] = *(long *)(param_3 + 0x10);
      lVar6 = *(long *)(param_3 + 8);
      *param_1 = *(long *)param_3;
      param_1[1] = lVar6;
      return param_1;
    }
    func_0x0412e5e0(param_1,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 8));
    return param_1;
  }
  if (*(undefined8 **)param_2 == (undefined8 *)0x0) {
    pdVar7 = (double *)&UNK_01254d89;
    pdVar4 = (double *)&UNK_01254d89;
    uVar2 = strlen();
  }
  else {
    pdVar7 = (double *)**(undefined8 **)param_2;
    pdVar4 = pdVar7;
    uVar2 = strlen();
  }
  if (0xfffffffffffffff7 < uVar2) {
    func_0x04882e30();
    if (5 < *(byte *)(pdVar4 + 1)) {
code_r0x04863e21:
      return (long *)0x0;
    }
    switch(*(byte *)(pdVar4 + 1)) {
    case 0:
      return (long *)((ulong)param_2 & 0xffffffff);
    default:
      return (long *)(ulong)*(uint *)pdVar4;
    case 3:
      return (long *)(ulong)(uint)(int)*pdVar4;
    case 4:
      goto code_r0x04863e21;
    case 5:
      return (long *)(ulong)*(byte *)pdVar4;
    }
  }
  if (uVar2 < 0x17) {
    *(char *)param_1 = (char)uVar2 * '\x02';
    pcVar5 = (char *)((long)param_1 + 1);
    if (uVar2 == 0) goto LAB_04863dc5;
  }
  else {
    lVar6 = 0x1a;
    if ((uVar2 | 7) != 0x17) {
      lVar6 = (uVar2 | 7) + 1;
    }
    pcVar5 = (char *)func_0x0ee32660(lVar6);
    param_1[2] = (long)pcVar5;
    *param_1 = lVar6 + 1;
    param_1[1] = uVar2;
  }
  func_0x0eee2ee0(pcVar5,pdVar7,uVar2);
LAB_04863dc5:
  pcVar5[uVar2] = '\0';
  return param_1;
}


