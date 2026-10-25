# FUN_04e7ecf0

- entry: `0x4e7ecf0`
- body size: 442 bytes
- callers: (none in the analysed set)

```c

/* WARNING: Instruction at (ram,0x04e7ed07) overlaps instruction at (ram,0x04e7ed06)
    */
/* WARNING: Possible PIC construction at 0x04e7ecf7: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04e7ed78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04e7ee6b: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x04e7ed7d) */
/* WARNING: Removing unreachable block (ram,0x04e7ed85) */
/* WARNING: Removing unreachable block (ram,0x04e7ed9d) */
/* WARNING: Removing unreachable block (ram,0x04e7edc0) */
/* WARNING: Removing unreachable block (ram,0x04e7ede8) */
/* WARNING: Removing unreachable block (ram,0x04e7ee05) */
/* WARNING: Removing unreachable block (ram,0x04e7ecfc) */
/* WARNING: Removing unreachable block (ram,0x04e7ee70) */
/* WARNING: Removing unreachable block (ram,0x04e7ee11) */
/* WARNING: Removing unreachable block (ram,0x04e7ee99) */
/* WARNING: Removing unreachable block (ram,0x04e7ee22) */
/* WARNING: Removing unreachable block (ram,0x04e7ee5c) */
/* WARNING: Removing unreachable block (ram,0x04e7ee68) */
/* WARNING: Removing unreachable block (ram,0x04e7ee74) */

bool FUN_04e7ecf0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char *pcVar1;
  char cVar2;
  int *in_RAX;
  long unaff_R14;
  
  *in_RAX = *in_RAX + (int)in_RAX;
  pcVar1 = (char *)(param_4 + -0x75);
  cVar2 = *pcVar1;
  *pcVar1 = *pcVar1 + (char)param_4;
  if (*pcVar1 == '\0' || SCARRY1(cVar2,(char)param_4) != *pcVar1 < '\0') {
    cVar2 = func_0x04864290(*(undefined8 *)(unaff_R14 + 0x10));
    if (cVar2 == '\0') {
      return false;
    }
    cVar2 = func_0x04865100(*(undefined8 *)(unaff_R14 + 0x10),&UNK_01623aad);
    if (cVar2 == '\0') {
      cVar2 = func_0x04865100(*(undefined8 *)(unaff_R14 + 0x10),&UNK_01623ab2);
      if (cVar2 == '\0') {
        return false;
      }
      param_1 = func_0x048648e0(*(undefined8 *)(unaff_R14 + 0x10),&UNK_01623ab2);
    }
    else {
      param_1 = func_0x048648e0(*(undefined8 *)(unaff_R14 + 0x10),&UNK_01623aad);
    }
  }
  return *(char *)(param_1 + 8) == '\x04';
}


```
