/** 
*  Generator: vscode-decompiler@0.0.8 (https://marketplace.visualstudio.com/items?itemName=tintinweb.vscode-decompiler)
*  Target:    /Users/lgf2111/Desktop/Github/picoGym/General Skills/Wave a flag/dist/warm
**/

/* Function: _init */
int _init(EVP_PKEY_CTX *ctx)

{
  undefined *puVar1;
  
  puVar1 = PTR___gmon_start___00300fe8;
  if (PTR___gmon_start___00300fe8 != (undefined *)0x0) {
    puVar1 = (undefined *)(*(code *)PTR___gmon_start___00300fe8)();
  }
  return (int)puVar1;
}

/* Function: FUN_00100580 */
void FUN_00100580(void)

{
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_00300fb8)();
  return;
}

/* Function: <EXTERNAL>::puts */
/* WARNING: Unknown calling convention yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00300fc0)();
  return iVar1;
}

/* Function: <EXTERNAL>::printf */
/* WARNING: Unknown calling convention yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00300fc8)();
  return iVar1;
}

/* Function: <EXTERNAL>::strcmp */
/* WARNING: Unknown calling convention yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_00300fd0)();
  return iVar1;
}

/* Function: <EXTERNAL>::__cxa_finalize */
void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00300ff8)();
  return;
}

/* Function: _start */
void _start(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000000;
  undefined auStack8 [8];
  
  (*(code *)PTR___libc_start_main_00300fe0)
            (main,in_stack_00000000,&stack0x00000008,__libc_csu_init,__libc_csu_fini,param_3,
             auStack8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

/* Function: deregister_tm_clones */
/* WARNING: Removing unreachable block (ram,0x00100617) */
/* WARNING: Removing unreachable block (ram,0x00100623) */

void deregister_tm_clones(void)

{
  return;
}

/* Function: register_tm_clones */
/* WARNING: Removing unreachable block (ram,0x00100668) */
/* WARNING: Removing unreachable block (ram,0x00100674) */

void register_tm_clones(void)

{
  return;
}

/* Function: __do_global_dtors_aux */
void __do_global_dtors_aux(void)

{
  if (completed_7698 == '\0') {
    if (PTR___cxa_finalize_00300ff8 != (undefined *)0x0) {
      __cxa_finalize(__dso_handle);
    }
    deregister_tm_clones();
    completed_7698 = 1;
    return;
  }
  return;
}

/* Function: frame_dummy */
void frame_dummy(void)

{
  register_tm_clones();
  return;
}

/* Function: main */
void main(int argc,char **argv)

{
  int iVar1;
  
  if (argc == 1) {
    puts("Hello user! Pass me a -h to learn what I can do!");
  }
  else {
    iVar1 = strcmp(argv[1],"-h");
    if (iVar1 == 0) {
      puts(
          "Oh, help? I actually don\'t do much, but I do have this flag here: picoCTF{b1scu1ts_4nd_gr4vy_616f7182}"
          );
    }
    else {
      printf("I don\'t know what \'%s\' means! I do know what -h means though!\n",argv[1]);
    }
  }
  return;
}

/* Function: __libc_csu_init */
void __libc_csu_init(EVP_PKEY_CTX *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _init(param_1);
  lVar1 = 0;
  do {
    (*(code *)(&__frame_dummy_init_array_entry)[lVar1])((ulong)param_1 & 0xffffffff,param_2,param_3)
    ;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 1);
  return;
}

/* Function: __libc_csu_fini */
void __libc_csu_fini(void)

{
  return;
}

/* Function: _fini */
void _fini(void)

{
  return;
}

/* Function: _ITM_deregisterTMCloneTable */
/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

/* Function: <EXTERNAL>::puts */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* puts@@GLIBC_2.2.5 */
  halt_baddata();
}

/* Function: <EXTERNAL>::printf */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* printf@@GLIBC_2.2.5 */
  halt_baddata();
}

/* Function: <EXTERNAL>::__libc_start_main */
/* WARNING: Control flow encountered bad instruction data */

void __libc_start_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* __libc_start_main@@GLIBC_2.2.5 */
  halt_baddata();
}

/* Function: <EXTERNAL>::strcmp */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* strcmp@@GLIBC_2.2.5 */
  halt_baddata();
}

/* Function: __gmon_start__ */
/* WARNING: Control flow encountered bad instruction data */

void __gmon_start__(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

/* Function: _ITM_registerTMCloneTable */
/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

/* Function: <EXTERNAL>::__cxa_finalize */
/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* __cxa_finalize@@GLIBC_2.2.5 */
  halt_baddata();
}

;