/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6141150
 * Label: Editor::Services::EditorJigsawService::vslot3
 * Body:  [[06141150, 061411e1] [0614185f, 06141875]]
 * Ghidra: wg_Editor__Services__EditorJigsawService__vslot3
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
wg_Editor__Services__EditorJigsawService__vslot3
          (byte *param_1,undefined8 param_2,undefined8 param_3,byte param_4,undefined8 param_5,
          undefined8 param_6,long *param_7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  ulong in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 *in_stack_00000040;
  
  *param_1 = *param_1 | param_4;
  puVar5 = (undefined4 *)(**(code **)((ulong)_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar5 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uVar1 = _UNK_01258ebc;
  in_stack_00000030 = 0x31;
  in_stack_00000038 = 0x2b;
  *(ulong *)((long)puVar5 + 0x1b) = CONCAT35(_UNK_01258eb9,_DAT_01258eb4);
  *(undefined8 *)((long)puVar5 + 0x23) = uVar1;
  uVar1 = CONCAT53(_DAT_01258eb4,_UNK_01258eb1);
  *(undefined8 *)(puVar5 + 4) = _DAT_01258ea9;
  *(undefined8 *)(puVar5 + 6) = uVar1;
  uVar4 = _UNK_01258ea5;
  uVar3 = _UNK_01258ea1;
  uVar2 = _UNK_01258e9d;
  *puVar5 = _DAT_01258e99;
  puVar5[1] = uVar2;
  puVar5[2] = uVar3;
  puVar5[3] = uVar4;
  *(undefined1 *)((long)puVar5 + 0x2b) = 0;
  in_stack_00000040 = puVar5;
  (**(code **)(*param_7 + 0x10))(param_7,&stack0x00000030);
  if ((in_stack_00000030 & 1) != 0) {
    func_0x0412a280(in_stack_00000040,in_stack_00000030 & 0xfffffffffffffffe);
  }
  return 0;
}



/* ---- referenced strings ----
 * 0x1258e99  source type is not an associative container
 * 0x1258ea9  ot an associative container
 * 0x1258eb4  iative container
 */
