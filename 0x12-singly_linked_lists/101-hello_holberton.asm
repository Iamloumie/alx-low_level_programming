	global  main
    extern  printf

    section .text
main:
    /* Preparing the stack frame */
    push    rbp
    mov     rbp, rsp

    /* Call printf */
    lea     rdi, [rel message]
    xor     eax, eax
    call    printf

    /* Clean up the stack frame */
    mov     rsp, rbp
    pop     rbp

    /* Return from main */
    xor     eax, eax
    ret

    section .data
	// 10 is the ASCII code for newline, 0 is the null terminator
message:
	db      "Hello, Holberton", 10, 0
