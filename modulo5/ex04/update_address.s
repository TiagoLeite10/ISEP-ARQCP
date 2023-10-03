.section .data
	.equ ADDRESS_OFFSET, 84 		# O membro address começa no byte 84
	.equ ADDRESS_MAX_BYTES, 99 		# Podem ser escritos até 98 bytes no membro address, em que o byte 99 será 0 para indicar o fim da string (intervalo de bytes guardados para este campo [0, 99])

.section .text
	.global update_address  		# void update_address(Student *s, char *new_address)

update_address:
	# *s in %rdi, *new_address in %rsi
	movq $0, %r8                            # %r8 representa o índice dos arrays

update_address_fill_loop:

	movb (%rsi, %r8, 1), %dl                # %dl = *(new_address + %r8)
	movb %dl, ADDRESS_OFFSET(%rdi, %r8, 1)  # *(s + ADDRESS_OFFSET + %r8) = %dl

	incq %r8                                # Próximo índice

	cmpq $ADDRESS_MAX_BYTES, %r8            # Verifica se o novo índice já está no limite do tamanho do membro address
	je update_address_limit_reached

	cmpb $0, %dl                            # Verifica se o caracter atual indica o final da string
	jne update_address_fill_loop

	jmp update_address_end

update_address_limit_reached:
	movb $0, ADDRESS_OFFSET(%rdi, %r8, 1)	# Move o valor 0 (NULL) para o último byte indicando o fim da string

update_address_end:
	ret
