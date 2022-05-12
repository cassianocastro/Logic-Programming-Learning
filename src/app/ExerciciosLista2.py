def exercicio01():
	primeiro_numero = 0
	segundo_numero  = 0
	resto = 0

	primeiro_numero = int(input("Digite um número: "))
	segundo_numero  = int(input("Outro número: "))

	if primeiro_numero > segundo_numero:
		resto = primeiro_numero % segundo_numero
		if resto == 0:
			print("O primeiro número digitado é o maior e é par.")
		else:
			print("O primeiro número digitado é o maior e ímpar.")
	else:
		resto = segundo_numero % 2
		if resto == 0:
			print("O segundo número é o maior e é par.")
		else:
			print("O segundo número é o maior e é ímpar.")

	print("Fim.")

def exercicio03():
	cargos = { 
		1 : "Gerente",
		2 : "Supervisor",
		3 : "Contador",
		4 : "Digitador",
		5 : "Auxiliar Administrativo"
	}
	while True:
		codigo = int(input("Informe o código do funcionário: "))

		if codigo >= 1 and codigo <= 5:
			print("Cargo selecionado: {}" .format( cargos[codigo] ))
		elif codigo == 0:
			break
		else:
			print("Dígito inválido!!")

def exercicio04():
	while True:
		numero = int(input("Informe o número de classificação: "))
		
		if numero == 0:
			break
		elif numero == 1 or numero == 2:
			print("Primeira Fila.")
		elif numero == 3 or numero == 4:
			print("Segunda Fila.")
		elif numero == 5 or numero == 6:
			print("Terceira Fila.")
		elif numero == 7 or numero == 8:
			print("Quarta Fila.")
		elif numero == 9 or numero == 10:
			print("Quinta Fila.")
		elif numero > 10:
			print("Sexta Fila em diante.")

def exercicio05():
	while True:
		sexo = input("Informe seu sexo ou tecle <s> para sair: ").capitalize()

		while not sexo.startswith("F") and not sexo.startswith("M") and not sexo.startswith("S"):
			sexo = input("Opção inválida. Digite novamente: ").capitalize()
		
		if not sexo.startswith("S"):
			idade = input("Idade: ")
			idade = int(idade)

			if sexo.startswith("F"):
				if idade >= 18:
					print("Pode ter um automóvel rosa.")
				else:
					print("Pode ter uma bicicleta rosa.")
			else:
				if idade >= 18:
					print("Pode ter um automóvel azul.")
				else:
					print("Pode ter uma bicicleta azul.")	
		else:
			break

def exercicio06():
	opcao = 's'
	while opcao.startswith("s"):
		altura = float(input("Informe sua altura: "))
		sexo   = input("Seu sexo: ").capitalize()

		while not sexo.startswith("M") and not sexo.startswith("F"):
			sexo = input("Sexo inválido. Digite novamente: ").capitalize()

		if sexo[0] == 'M':
			peso = ( 72.7 * altura ) - 58
		else:
			peso = ( 62.1 * altura ) - 44.7
		print(f"Seu peso ideal é de: {peso:.2f} Kg")

		opcao = input("Deseja realizar novamente [s/n]? ").lower()
		
		while not opcao.startswith("s") and not opcao.startswith("n"):
			opcao = input("Opção inválida. Digite novamente: ").lower()

def exercicio07():
	def soma( primeiro_numero, segundo_numero ):
		return primeiro_numero + segundo_numero

	def subtracao( primeiro_numero, segundo_numero ):
		return primeiro_numero - segundo_numero

	def multiplicacao( primeiro_numero, segundo_numero ):
		return primeiro_numero * segundo_numero

	def divisao( primeiro_numero, segundo_numero ):
		try:
			quociente = primeiro_numero / segundo_numero
		except( ZeroDivisionError ):
			print("Impossível dividir por Zero.")
		else:
			return quociente

	opcoes = { 
		1 : soma,
		2 : subtracao,
		3 : multiplicacao,
		4 : divisao 
	}
	while True:
		opcao_escolhida = int( input(
			"Escolha uma das opções abaixo:"
			"\n1. Soma | 2. Subtração | 3. Multiplicação | 4. Divisão"
			"\nOpção? "
		))

		while opcao_escolhida > 4:
			opcao_escolhida = int(input(
				"Opção inválida. Digite novamente: "
			))

		if opcao_escolhida != 0:
			primeiro_numero = float(input("Primeiro Número: "))
			segundo_numero  = float(input("Segundo Número: "))

			retorno = opcoes[ opcao_escolhida ]( primeiro_numero, segundo_numero )
			if retorno != None:
				print(f"Resultado: {retorno:.2f}")
			else:
				print("Resultado: Nulo")
		else:
			break
			
def exercicio08():
	while True:
		idade = int(input("Informe a idade o nadador ou <0> para sair: "))

		while idade < 0:
			idade = int(input("Idade inválida. Digite novamente: "))

		if idade != 0:
			if idade >= 1 and idade <= 4:
				print("Idade insuficiente.")
			elif idade >= 5 and idade <= 7:
				print("Infantil A.")
			elif idade >= 8 and idade <= 10:
				print("Infantil B.")
			elif idade >= 11 and idade <= 13:
				print("Juvenil A.")
			elif idade >= 14 and idade <= 17:
				print("Juvenil B.")
			else:
				print("Sênior.")
		else:
			break

def exercicio09():
	idade  = int(input("Idade: "))
	codigo = int(input("Código: "))

	while idade < 18 and idade > 70:
		idade = int(input("Dígito inválido. Digite novamente: "))

	if idade >= 18 and idade <= 24:
		if codigo < 7 or codigo > 9:
			print("Código inválido.")
		else:
			if codigo == 7:
				print("Grupo Baixo.")
			elif codigo == 8:
				print("Grupo Médio.")
			else:
				print("Grupo Alto.")
	elif idade >= 25 and idade <= 40:
		if codigo < 4 or codigo > 6:
			print("Código inválido.")
		else:
			if codigo == 4:
				print("Grupo Baixo.")
			elif codigo == 5:
				print("Grupo Médio.")
			else:
				print("Grupo Alto.")
	else:
		if codigo < 1 or codigo > 3:
			print("Código inválido.")
		else:
			if codigo == 1:
				print("Grupo Baixo.")
			elif codigo == 2:
				print("Grupo Médio.")
			else:
				print("Grupo Alto.")

def exercicio010():
	mes = int(input("Mês: "))

	while mes < 1 or mes > 12:
		mes = int(input("Mês: "))

	if mes == 1 or mes == 2:
		print("É Verão.")
	elif mes == 4 or mes == 5:
		print("É Outono.")
	elif mes == 7 or mes == 8:
		print("É Inverno.")
	elif mes == 10 or mes == 11:
		print("É Primavera.")
	else:
		dia = int(input("Dia: "))
		if mes == 3:
			print("É Verão."     if dia < 21 else "É Outono.")
		elif mes == 6:
			print("É Outono."    if dia < 21 else "É Inverno.")
		elif mes == 9:
			print("É Inverno."   if dia < 23 else "É Primavera.")
		else:
			print("É Primavera." if dia < 21 else "É Verão.")

exercicio010()
