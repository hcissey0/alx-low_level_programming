section .data
	msg db 'Hello, Holberton', 0x0A
	fmt db '%s', 0x0A

section .text
	global main

	extern printf

main:
	push rbp
	mov rbp, rsp

	mov rdi, fmt
	mov rsi, msg
	xor eax, eax
	call printf

	mov rsp, rbp
	pop rbp
	ret
