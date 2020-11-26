section .text
    global _ft_strcmp

_ft_strcmp:
    mov rax, 0
	mov rbx, 0
	mov rcx, 0
	jmp compare

compare:
	mov al, BYTE [rdi + rcx]
	mov bl, BYTE [rsi + rcx]
	cmp al, bl
	jne diff
	je	same

diff:
	sub rax, rbx
	ret

same:
	cmp al, 0
	je 	null
	inc rcx
	jmp compare

null:
	mov rax, 0
	ret


    
