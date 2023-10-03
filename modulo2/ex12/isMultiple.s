.section .data
	.global A, B 		# Variáveis do tipo inteiro (4 bytes) declarados no módulo que utiliza este mesmo módulo

.section .text
	.global isMultiple 	# char isMultiple()

isMultiple:
	movl A(%rip), %eax	# Dividendo: eax (valor de A)

	cltd			# Converte o valor com sinal presente no registo eax para o valor com sinal do tipo quad no registo %edx:%eax

	movl B(%rip), %ecx	# Divisor: ecx (valor de B)
	cmp $0, %ecx            # Compara o valor zero com o valor colocado no registo ecx
	je notDivisor           # Se o valor que foi colocado em ecx for 0, então a execução do programa salta para as intruções que se encontram na etiqueta notDivisor

	idivl %ecx		# Divide %edx:%eax por %ecx (o resto fica no registo %edx e o quociente no regito %eax)
	cmp $0, %edx		# Compara 0 com o resto da divisão
	jne notDivisor		# Se o resto da divisão não for 0, então o programa salta para as intruções presentes na etiqueta notDivisor
	movb $1, %al		# Coloca o valor 1 no registo %al (1 byte)
	jmp end			# Salta para as intruções que se encontram na etiqueta end

notDivisor:
	movb $0, %al		# Coloca o valor 0 no registo %al (1 byte)
	jmp end			# Salta para as intruções que se encontram na etiqueta end

end:
	ret
