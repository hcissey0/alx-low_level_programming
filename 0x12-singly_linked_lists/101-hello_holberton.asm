; 101-hello_holberton.asm
section .data
	msg db 'Hello, Holberton\n', 0x0A

section .text
	global main

main:
	; write(1, msg, 16)
	mov rax, 1
	mov rdi, 1
	mov rsi, msg
	mov rdx, 16
	syscall

	; exit(0)
	mov rax, 60
	xor rdi, rdi
	syscall
