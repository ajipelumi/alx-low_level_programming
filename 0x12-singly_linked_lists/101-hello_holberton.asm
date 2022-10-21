section .text: 	;text section
	global main

main:
	mov rax, 1 		; use the write system call (sys_write)
	mov rdi, 1		; use standard output as the file descriptor
	mov rsi, message 	; use the message as the buffer
	mov rdx, message_len 	; store the length of our message
	syscall 		; invoke operating system to do the write

	; we now exit the program

	mov rax, 60		; call system to exit (sys_exit)
	mov rdi, rdi		; exit code
	syscall 		; invoke operating system to exit

section .data:	;data section
	message db "Hello, Holberton", 10 	; 10 or 0xa means new line
	message_len equ $-message
