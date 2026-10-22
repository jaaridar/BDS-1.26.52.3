/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6140f00
 * Label: Editor::Services::EditorJigsawService::vslot11
 * Body:  [[06140f00, 06140fce]]
 * Ghidra: wg_Editor__Services__EditorJigsawService__vslot11
 */


void wg_Editor__Services__EditorJigsawService__vslot11
               (char param_1,int param_2,undefined8 param_3,undefined8 *param_4,undefined8 param_5,
               char param_6)

{
  undefined8 in_RAX;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *unaff_RBX;
  long lVar4;
  
  puVar1 = (undefined8 *)CONCAT71((int7)((ulong)in_RAX >> 8),4);
  if (param_1 == '\x04') {
    if (param_6 != '\0') goto LAB_06140fe3;
LAB_06140fde:
    if (param_4 == (undefined8 *)0x0) goto LAB_06140fe3;
  }
  else {
    puVar2 = param_4;
    if (param_1 == '\x02') {
      puVar2 = unaff_RBX;
    }
    if (puVar2 != (undefined8 *)0x0 && param_2 == 0xd0c08f8) {
LAB_06140f8c:
      uVar3 = unaff_RBX[5];
      puVar1[2] = &UNK_048b01f0;
      *(undefined4 *)(puVar1 + 4) = 0xe013e8b;
      puVar1[3] = 0;
      *(undefined1 *)((long)puVar1 + 0x24) = 3;
      goto LAB_0614105c;
    }
    if ((code *)unaff_RBX[7] != (code *)0x0) {
      uVar3 = unaff_RBX[5];
      lVar4 = unaff_RBX[6];
      if (lVar4 == 0) {
        (*(code *)unaff_RBX[7])(0);
        lVar4 = unaff_RBX[6];
      }
      puVar2 = (undefined8 *)func_0x0488e200(uVar3,lVar4,&UNK_0d0c08f8);
      if (puVar2 != (undefined8 *)0x0) goto LAB_06140f8c;
      param_1 = *(char *)((long)unaff_RBX + 0x24);
      param_4 = (undefined8 *)*unaff_RBX;
      param_2 = *(int *)(unaff_RBX + 4);
    }
    if (param_1 == '\x02') {
      param_4 = unaff_RBX;
    }
    if (param_2 == 0xd0c08f8) goto LAB_06140fde;
LAB_06140fe3:
    if ((code *)unaff_RBX[7] == (code *)0x0) {
LAB_0614107c:
      uVar3 = unaff_RBX[5];
      puVar1[2] = &UNK_0488e0b0;
      *(undefined4 *)(puVar1 + 4) = 0x48b5725f;
      puVar1[3] = 0;
      *(undefined1 *)((long)puVar1 + 0x24) = 0;
      *puVar1 = 0;
      puVar1[5] = uVar3;
      puVar1[6] = 0;
      puVar1[7] = 0;
      return;
    }
    uVar3 = unaff_RBX[5];
    lVar4 = unaff_RBX[6];
    if (lVar4 == 0) {
      (*(code *)unaff_RBX[7])(0);
      lVar4 = unaff_RBX[6];
    }
    param_4 = (undefined8 *)func_0x0488e200(uVar3,lVar4,&UNK_0d0c08f8);
    if (param_4 == (undefined8 *)0x0) goto LAB_0614107c;
  }
  uVar3 = unaff_RBX[5];
  puVar1[2] = &UNK_048b01f0;
  *(undefined4 *)(puVar1 + 4) = 0xe013e8b;
  puVar1[3] = 0;
  *(undefined1 *)((long)puVar1 + 0x24) = 4;
  puVar2 = param_4;
LAB_0614105c:
  *puVar1 = puVar2 + 1;
  puVar1[5] = uVar3;
  puVar1[6] = 0;
  puVar1[7] = &UNK_048b01d0;
  return;
}


