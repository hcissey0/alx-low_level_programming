section .data
	hello db 'Hello, Holberton', 0x0A, 0

section .text
	global main

	extern printf

main:
	push rbp
	mov rbp, rsp
	mov rdi, hello
	xor eax, eax
	call printf

	xor eax, eax
	pop rbp
	ret
