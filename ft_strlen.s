section .text
	global _ft_strlen

_ft_strlen:
	mov rax, 0
	jmp count

count:
	cmp BYTE [rdi + rax], 0 
	je	done
	inc rax
	jmp count

done:
	ret