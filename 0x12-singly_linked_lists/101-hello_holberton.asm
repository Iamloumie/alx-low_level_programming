	global  main
	extern  printf

	section .text
main:
    ; Set up stack frame
    push    rbp
    mov     rbp, rsp

    ; Call printf
    mov     rdi, format
    xor     eax, eax
    call    printf

    ; Clean up stack frame
    pop     rbp

    ; Return 0
    xor     eax, eax
    ret

    section .data
format: db "Hello, Holberton", 10, 0
