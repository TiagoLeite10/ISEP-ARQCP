.section .data

	.global ptrsrc					# Apontador que conhece o endereço do valor inicial do array com os valores originais 
	.global num					# Variável global que representa o número de elementos que existem no array
	.global ptrdest					# Apontador que conhece o endereço do valor inicial do array de destino que irá conter valores não repetidos do array original
	.equ BYTES_TO_ADD, 2				# Constante que representa o número de bytes a adicionar ao apontador para que este aponte para o próximo valor do array

.section .text

	.global sort_without_reps			# int sort_without_reps(void)

sort_without_reps:					# Etiqueta que representa o início das intruções da função sort_without_reps
	movq ptrsrc(%rip), %rsi				# Coloca o valor do apontador ptrsrc no registo %rsi
	movq ptrdest(%rip), %rdx			# Coloca o valor do apontador ptrdest no registo %rdx
	movl $0, %eax					# Coloca o valor 0 no registo %eax. Representa o número de elementos colocados no array de destino.
	movl num(%rip), %ecx				# Coloca o valor da variável num no registo %ecx
	cmpl $0, %ecx					# Verifica se o valor presente no registo %ecx é igual a 0
	je sort_without_reps_end			# Se a condição anterior se verificar, salta a execução do programa para a etiqueta indicada

sort_without_reps_loop_ptrsrc:				# Etiqueta que representa as instruções para percorrer os valores todos do array original e colocá-los no array de destino sem que sejam colocados lá valores repetidos
	movw (%rsi), %r8w				# Coloca o valor apontado pelo registo %rsi no registo %r8w
	movq $0, %rdi					# O reigsto %rdi irá representar a posição atual do array destino

sort_without_reps_loop_ptrdest:				# Etiqueta que representa as intruções que são realizadas ao percorrer os valores presentes no array de destino

	cmpq %rax, %rdi					# Compara se a posição atual para que estamos a "olhar" do array é igual à primeira posição livre à direita 
	je add_ptrdest_new_value			# Se a condição anterior se verificar, salta para a etiqueta indicada. Esta condição ao ser verdadeira, sabemos que não existe nenhum valor igual já existente no array, então podemos inserir esse mesmo valor no array.

	cmpw (%rdx, %rdi, 2), %r8w			# Compara o valor a analisar se será acrescentado com o valor atual que estamos a "olhar" do array destino
	je sort_without_reps_loop_ptrsrc_continuation	# Se forem iguais, salta para o próximo valor do array original, pois não vale a pena acabar de percorrer o array destino completo
	
	incq %rdi					# Incrementa 1 ao registo %rdi que significa que agora iremos tratar do valor na próxima posição do array
	jmp sort_without_reps_loop_ptrdest		# Salta incondicionalmente para a etiqueta indicada para continuar a analisar os valores do array de destino

add_ptrdest_new_value:					# Etiqueta que representa as intruções para realizar a adição do novo valor no array
	movw %r8w, (%rdx, %rax, 2)			# Coloca o valor presente no registo %r8w no local apontado pelo apontador ptrdest na posição %rax desse mesmo array (ptrdest[%rax] = %r8w)
	incl %eax					# Incrementa um devido a ter sido acrescentado um novo valor ao array

sort_without_reps_loop_ptrsrc_continuation:		# Etiqueta que representa as instruções que tratam o registo %rsi (apontador) para ficar a apontar para o próximo valor na próxima iteração
	addq $BYTES_TO_ADD, %rsi			# Adiciona o valor de bytes representado pela constante BYTES_TO_ADD ao registo %rsi para que este fique a apontar para o próximo valor de shorts no array
	loop sort_without_reps_loop_ptrsrc		# Decrementa 1 ao registo %rcx e salta de novo para a etiqueta indicada enquanto o registo %rcx não for 0

# Aqui termina a parte em que é realizado o preenchimento do array destino sem valores repetidos, e começa a ordenação do array de destino
# Esta parte da ordenação deveria estar noutro módulo, e posteriormente esta função ser chamada a partir daqui, mas como essa parte da matéria ainda não faz parte do módulo 3, esta função ficará aqui também

sort_ptrdest:						# Etiqueta que representa o início das instruções para realizar a ordenação do array de destino
	cmpl $1, %eax					# Verifica se apenas exsite um valor no array de destino
	jle sort_without_reps_end			# Se a condição anterior se verificar, não será necessário ordenar este array porque só tem 1 elemento distinto, então saltamos para a etiqueta que representa o final da função

	movl %eax, %ecx					# Coloca o valor presente no registo %eax no registo %ecx. Isto será para realizar o primeiro loop ao array destino em que iremos colocar o array ordenado para trás. Ou seja, %eax será utilizado para realizar o loop aos valores necessários do array de destino. Este loop irá comparar o valor de uma dada posição com todas as posições para a frente, garantindo que no final, nesta posição ficará o valor mais baixo em relação aos valores que estejam em posições mais à frente
	decl %ecx					# Decrementa um ao registo %ecx, pois nós só queremos ir até n-1 devido a que o último valor já irá estar ordenado pois não terá nenhum valor após ele mesmo
	movq $0, %rsi					# Coloca o valor 0 no registo %rsi. Este valor irá representar a posição atual do primeiro loop

sort_ptrdest_first_loop:				# Etiqueta que representa o primeiro loop em que iremos comparar uma dada posição com todas as posições para a frente, sendo que estas posições para a frente serão realizadas através de um segundo loop
	movq %rsi, %rdi					# Coloca o valor do registo %rsi no registo %rdi, para que o segundo loop apenas comece depois da posição para a qual estamos a tratar, visto que para trás já irá estar tudo ordenado
	incq %rdi					# Incrementa 1 ao registo %rdi, pois apenas iremos querer começar a comparar com o valor seguinte ao atual e não comparar o atual com o atual

sort_ptrdest_second_loop:				# Etiqueta que representa as intruções do segundo loop em que é realizada a comparação e troca de valores
	movw (%rdx, %rsi, 2), %r8w			# Coloca o valor presente na posição %rsi do apontador do array de destino no registo %r8w

	cmpq %rax, %rdi					# Compara o valor presente no registo %rax com o valor presente no registo %rdi para saber se já percorremos todos os valores do array de destino (se já chegamos ao limite do número de elementos presente no array)
	jge sort_ptrdest_first_loop_continuation	# Se os valores dos dois registos forem iguais, passamos para a próxima iteração do primeiro loop

	movw (%rdx, %rdi, 2), %r9w			# Coloca o valor apontado por %rdx na posição %rdi do array no registo %r9w (%r9w = ptrdest[%rdi])

	cmpw %r9w, %r8w					# Compara os valores presentes nos registo %r9w e %r8w
	jle sort_ptrdest_second_loop_continuation	# Se o valor do registo %r8w for menor ou igual ao valor do registo %r9w, continuamos o loop pois não o queremos trocar com um valor igual ou maior, devido a ordenação ser por ordem ascendente (saltamos a execução para a etiqueta indicada)
	
	# Agora é realizada a troca dos valores de posição
	movw %r8w, (%rdx, %rdi, 2)			# Coloca o valor do registo %r8w no array de destino na posição %rdi (ptrdest[%rdi] = %r8w)
	movw %r9w, (%rdx, %rsi, 2)			# Coloca o valor do registo %r9w no array de destino na posição %rsi (ptrdest[%rsi] = %r9w)

sort_ptrdest_second_loop_continuation:			# Etiqueta que representa as instruções para preparar a seguinte iteração do segundo loop
	incq %rdi					# Incrementa 1 ao registo %rdi para que seja analisado o valor do array na posição seguinte
	jmp sort_ptrdest_second_loop			# Salta incondicionalmente para a etiqueta indicada

sort_ptrdest_first_loop_continuation:			# Etiqueta que representa as instruções para preparar a seguinte iteração do primeiro loop
	incq %rsi					# Incrementa 1 ao registo %rsi para que seja analisado o valor do array na posição seguinte
	loop sort_ptrdest_first_loop			# Decrementa 1 ao registo %rcx e salta para a etiqueta indicada enquanto o registo %rcx não tiver o valor 0

sort_without_reps_end:					# Etiqueta que representa as instruções finais da função
	ret
