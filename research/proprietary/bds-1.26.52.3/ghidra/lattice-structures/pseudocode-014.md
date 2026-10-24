# FUN_04fd31ae

- entry: `0x4fd31ae`
- body size: 75 bytes
- callers: (none in the analysed set)

```c

void FUN_04fd31ae(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long in_RAX;
  long *unaff_RBX;
  
  LOCK();
  plVar1 = unaff_RBX + 1;
  lVar2 = *plVar1;
  *plVar1 = *plVar1 + in_RAX;
  UNLOCK();
  if (lVar2 == 0) {
    (**(code **)(*unaff_RBX + 0x10))();
    func_0x0412c2d0();
  }
  *param_1 = &UNK_0ef9bb08;
  if (param_1[2] != 0) {
                    /* WARNING: Could not recover jumptable at 0x04fd31ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[2] + 8))(param_1 + 2);
    return;
  }
  return;
}


```
