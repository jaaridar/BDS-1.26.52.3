/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4e2bb50
 * Label: caller-of-seed
 * Body:  [[04e2bb50, 04e2bb59]]
 * Ghidra: FUN_04e2bb50
 */


void FUN_04e2bb50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x04e2bb58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x20))(param_1 + 0x20);
  return;
}



/* ---- assembly ---- */
/* 04e2bb50 */  MOV RAX,qword ptr [RDI + 0x20]
/* 04e2bb54 */  ADD RDI,0x20
/* 04e2bb58 */  JMP qword ptr [RAX]
