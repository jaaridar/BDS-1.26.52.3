/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4134310 (ELF vaddr 0x4034310)
 * Label: callee-of:0xe3ddaa0
 * Body:  [[04134310, 04134416]]
 * Ghidra: FUN_04134310
 */


/* WARNING: Removing unreachable block (ram,0x04134355) */
/* WARNING: Removing unreachable block (ram,0x0413435a) */

long * FUN_04134310(long *param_1,int param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  char *pcVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auStack_3b [11];
  
  if (param_2 < 0) {
    auStack_3b[0] = 0x2d;
  }
  puVar2 = (undefined1 *)func_0x04136630();
  uVar6 = (long)puVar2 - (long)auStack_3b;
  if (uVar6 < 0xfffffffffffffff8) {
    if (uVar6 < 0x17) {
      *(char *)param_1 = (char)uVar6 * '\x02';
      pcVar3 = (char *)((long)param_1 + 1);
    }
    else {
      lVar5 = 0x1a;
      if ((uVar6 | 7) != 0x17) {
        lVar5 = (uVar6 | 7) + 1;
      }
      pcVar3 = (char *)FUN_0ee32660(lVar5);
      param_1[2] = (long)pcVar3;
      *param_1 = lVar5 + 1;
      param_1[1] = uVar6;
    }
    if (puVar2 != auStack_3b) {
      func_0x0eee2f00(pcVar3,auStack_3b,uVar6);
    }
    pcVar3[uVar6] = '\0';
    return param_1;
  }
  func_0x04882e30();
  pcVar1 = (code *)swi(3);
  plVar4 = (long *)(*pcVar1)();
  return plVar4;
}


