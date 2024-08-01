/* 64-bit assembly program to print "Hello, Holberton */

    global  main
    extern  printf

    section .text
main:
    /* Preparing the stack frame */
    push    rbp
    mov     rbp, rsp

    /* Call printf */
    lea     rdi, [rel message]  // Load effective address of message into rdi (1st argument)
    xor     eax, eax            // Clear eax register (no floating point arguments)
    call    printf

    /* Clean up the stack frame */
    mov     rsp, rbp
    pop     rbp

    /* Return from main */
    xor     eax, eax            // Return 0
    ret

    section .data
message:
    db      "Hello, Holberton", 10, 0   // 10 is the ASCII code for newline, 0 is the null terminator
