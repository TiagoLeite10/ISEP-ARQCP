.section .data
	.global code, currentSalary		# variáveis do tipo short (2 bytes) declaradas no módulo que utiliza este mesmo módulo
	.equ CODE_MANAGER, 20			# constante com o código do gerente
	.equ CODE_ENGINEER, 21			# constante com o código do engenheiro
	.equ CODE_TECHNICIAN, 22		# constante com o código do técnico
	.equ RAISE_SALARY_MANAGER, 400		# constante com o valor do aumento do salário do gerente
	.equ RAISE_SALARY_ENGINEER, 300		# constante com o valor do aumento do salário do engenheiro
	.equ RAISE_SALARY_TECHNICIAN, 200	# constante com o valor do aumento do salário do técnico
	.equ RAISE_SALARY_OTHER, 150		# constante com o valor do aumento das outras posições

.section .text
	.global new_salary			# int new_salary()

new_salary:
	movswl currentSalary(%rip), %eax    	# colocar currentSalary em eax com extensão de sinal (16 bits para 32 bits)
	movswl code(%rip), %ecx           	# colocar code em ecx com extensão de sinal (16 bits para 32 bits)
	
	cmpl $CODE_MANAGER, %ecx                # comparar o valor contido em %ecx com 20
	je code_manager                 	# caso o valor contido em %ecx seja igual a 20 salta para code_manager
	
	cmpl $CODE_ENGINEER, %ecx               # comparar o valor contido em %ecx com 21
	je code_engineer                	# caso o valor contido em %ecx seja igual a 21 salta para code_engineer
	
	cmpl $CODE_TECHNICIAN, %ecx             #comparar o valor contido em %ecx com 22
	je code_technician              	# caso o valor contido em %ecx seja igual a 22 salta para code_technician
	
	addl $RAISE_SALARY_OTHER, %eax		# caso o código não seja nenhum dos anteriores, é realizada a operação aritmética (eax = eax + 150) resultado fica em eax
	jmp end 				# salta para end
	
	code_manager:
	addl $RAISE_SALARY_MANAGER, %eax	# (eax = eax + 400) resultado fica em eax
	jmp end 				# salta para end
	
	code_engineer:
	addl $RAISE_SALARY_ENGINEER, %eax	# (eax = eax + 300) resultado fica em eax
	jmp end 				# salta para end
	
	code_technician:
	addl $RAISE_SALARY_TECHNICIAN, %eax	# (eax = eax + 200) resultado fica em eax
	jmp end					# salta para end
	
	end:
	ret
