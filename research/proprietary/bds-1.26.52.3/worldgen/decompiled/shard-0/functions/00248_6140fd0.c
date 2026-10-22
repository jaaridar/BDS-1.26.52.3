/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6240fd0 (ELF vaddr 0x6140fd0)
 * Label: Editor::Services::EditorJigsawService::vslot2
 * Body:  [[06240fd0, 0624109b]]
 * Ghidra: wg_Editor__Services__EditorJigsawService__vslot2
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * wg_Editor__Services__EditorJigsawService__vslot2(ulong *param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong *puVar3;
  char *pcVar4;
  ulong uVar5;
  
  if ((*(byte *)(param_2 + 0x238) & 1) == 0) {
    param_2 = param_2 + 0x239;
  }
  else {
    param_2 = *(long *)(param_2 + 0x248);
  }
  uVar2 = func_0x0eee2e90(param_2);
  if (0xfffffffffffffff7 < uVar2) {
    func_0x04882e30();
    pcVar1 = (code *)swi(3);
    puVar3 = (ulong *)(*pcVar1)();
    return puVar3;
  }
  if (uVar2 < 0x17) {
    *(char *)param_1 = (char)uVar2 * '\x02';
    pcVar4 = (char *)((long)param_1 + 1);
    if (uVar2 == 0) goto LAB_06241078;
  }
  else {
    uVar5 = 0x1a;
    if ((uVar2 | 7) != 0x17) {
      uVar5 = (uVar2 | 7) + 1;
    }
    pcVar4 = (char *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar5);
    if (pcVar4 == (char *)0x0) {
      FUN_0eec74c0(uVar5,0);
    }
    param_1[2] = (ulong)pcVar4;
    *param_1 = uVar5 | 1;
    param_1[1] = uVar2;
  }
  func_0x0eee2ee0(pcVar4,param_2,uVar2);
LAB_06241078:
  pcVar4[uVar2] = '\0';
  return param_1;
}


