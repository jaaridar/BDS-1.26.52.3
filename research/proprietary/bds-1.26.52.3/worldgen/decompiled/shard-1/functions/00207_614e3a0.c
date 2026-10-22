/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x614e3a0
 * Label: Editor::Services::EditorJigsawService::vslot11
 * Body:  [[0614e3a0, 0614e3a3]]
 * Ghidra: wg_Editor__Services__EditorJigsawService__vslot11
 */


/* WARNING: Instruction at (ram,0x0614e3a1) overlaps instruction at (ram,0x0614e3a0)
    */

void wg_Editor__Services__EditorJigsawService__vslot11(void)

{
  code *pcVar1;
  bool in_CF;
  
  do {
  } while (!in_CF);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


