# FUN_04e3fa40

- entry: `0x4e3fa40`
- body size: 322 bytes
- callers: (none in the analysed set)

```c

/* WARNING: Instruction at (ram,0x04e3fa59) overlaps instruction at (ram,0x04e3fa58)
    */

uint FUN_04e3fa40(undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5
                 ,undefined8 param_6,long param_7)

{
  char *pcVar1;
  int *piVar2;
  char cVar3;
  int *in_RAX;
  undefined8 uVar4;
  uint unaff_EBX;
  long unaff_R14;
  long unaff_retaddr;
  
  *in_RAX = *in_RAX + (int)in_RAX;
  pcVar1 = (char *)(param_4 + -0x75);
  cVar3 = *pcVar1;
  *pcVar1 = *pcVar1 + (char)param_4;
  if (*pcVar1 == '\0' || SCARRY1(cVar3,(char)param_4) != *pcVar1 < '\0') {
    unaff_EBX = unaff_EBX ^ *(uint *)(param_3 + -0x5e);
    piVar2 = (int *)((long)&__DT_RELA[0xa0d97].r_offset + (long)in_RAX * 9 + 7);
    *piVar2 = *piVar2 + 1;
    *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  }
  else {
    uVar4 = func_0x048648e0(param_1,&UNK_01623ab2);
    cVar3 = func_0x04865490(uVar4);
    if (cVar3 == '\0') {
      return 0;
    }
  }
  cVar3 = func_0x04865100(*(undefined8 *)(unaff_R14 + 0x10),&UNK_01623ab7);
  if (cVar3 != '\0') {
    uVar4 = func_0x048648e0(*(undefined8 *)(unaff_R14 + 0x10),&UNK_01623ab7);
    cVar3 = func_0x04864290(uVar4);
    if (cVar3 != '\0') {
      func_0x04865230(&stack0x00000000,uVar4);
      func_0x04886070(&stack0x00000000);
      if (unaff_retaddr != param_7) {
        func_0x04865230(&stack0x00000000,uVar4);
        if (unaff_retaddr != param_7) {
          do {
            func_0x04863060(&stack0x00000018,0);
            func_0x04864e50(&stack0x00000028,uVar4,unaff_retaddr,&stack0x00000018);
            func_0x04863790(&stack0x00000018);
            func_0x04863610(&stack0x00000028);
            cVar3 = func_0x04865410(&stack0x00000018);
            if (((cVar3 == '\0') && (cVar3 = func_0x04865420(&stack0x00000018), cVar3 == '\0')) &&
               (cVar3 = func_0x04865490(&stack0x00000018), cVar3 == '\0')) {
              func_0x04863610(&stack0x00000018);
              func_0x04886070(&stack0x00000000);
              return 0;
            }
            func_0x04863610(&stack0x00000018);
            unaff_retaddr = unaff_retaddr + 0x18;
          } while (unaff_retaddr != param_7);
        }
        func_0x04886070(&stack0x00000000);
      }
    }
  }
  return unaff_EBX;
}


```
