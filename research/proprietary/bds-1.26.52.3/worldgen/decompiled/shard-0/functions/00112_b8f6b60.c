/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb8f6b60
 * Label: string:Editor::Services::EditorJigsawService
 * Body:  [[0b8f6b50, 0b8f6b5e] [0b8f6b60, 0b8f6bb0]]
 * Ghidra: FUN_0b8f6b60
 */


/* WARNING: Possible PIC construction at 0x0b8f6b66: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0b8f6b6b) */
/* WARNING: Removing unreachable block (ram,0x0b8f6b50) */
/* WARNING: Removing unreachable block (ram,0x0b8f6b74) */
/* WARNING: Removing unreachable block (ram,0x0b8f6b7d) */
/* WARNING: Removing unreachable block (ram,0x0b8f6b8d) */
/* WARNING: Removing unreachable block (ram,0x0b8f6bab) */
/* WARNING: Removing unreachable block (ram,0x0b8f6b96) */
/* WARNING: Removing unreachable block (ram,0x0b8f6b59) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0b8f6b60(long param_1,undefined8 param_2,undefined2 param_3)

{
  undefined8 in_RAX;
  
  out(param_3,(int)in_RAX);
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return in_RAX;
}


