; 101-hello_holberton.asm
section .data
	msg db 'Hello, Holberton\n', 0x0A, 0

section .text
	global main

main:
	; printf(msg)
	mov rdi, msg
	xor rax, rax
	call printf

	; return 0
	xor rax, rax
	ret
