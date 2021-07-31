def exercicio01():
	horas_normais = float(
		input("Informe a quantidade de horas trabalhadas: ")
	)
	horas_extras  = float(
		input("Qtde de horas extras: ")
	)
	horas_normais *= 20
	horas_extras  *= 25
	salario = horas_normais + horas_extras
	print(f"Salário total: R$ {salario:.2f}.")

def exercicio02():
	metragemParede = float(
		input("Tamanho da parede(em metros quadrados): ")
	)

	tipoTijolo = int(
		input(
			"Informe o tipo de Tijolo a ser utilizado:\n"
			"1. 6 furos | 2. 4 furos | 3. Maciços\n"
			"Tipo? "
		)
	)
	while tipoTijolo < 1 or tipoTijolo > 3:
		tipoTijolo = int(
			input("Tipo inválido. Somente dígitos de 1 a 3: ")
		)

	if tipoTijolo == 1:
		totalTijolos = metragemParede * 15
	elif tipoTijolo == 2:
		totalTijolos = metragemParede * 25
	else:
		totalTijolos = metragemParede * 30

	print(f"Total de tijolos necessários: {totalTijolos:.2f} por metro quadrado.")

def exercicio03():
	idadeANO = int(input("Idade em anos: "))
	idadeMES = int(input("Quantos meses: "))
	idadeDIA = int(input("E qtos dias: "))

	idadeANO *= 365
	idadeMES *= 30

	totalDias = idadeANO + idadeMES + idadeDIA
	print(f"Total de Dias vividos: {totalDias}")

def exercicio04():
	idadeDIA = int(input("Idade em dias: "))

	anos  = idadeDIA // 365
	meses = (idadeDIA % 365) // 30
	dias  = (idadeDIA % 365) % 30

	print(f"Você tem {anos} anos, {meses} mes(es) e {dias} dia(s).")

def exercicio05():
	def calcularPreco(codigo, qtde):
		if   codigo == 10: return qtde * 2.5
		elif codigo == 11: return qtde * 6
		elif codigo == 12: return qtde * 6.5
		elif codigo == 13: return qtde * 5
		elif codigo == 14: return qtde * 5.5
		else: return qtde * 2

	especificacao = {
		10: "Cachorro Quente",
		11: "Bauru Simples",
		12: "Bauru com Ovo",
		13: "Hambúrguer",
		14: "Cheeseburguer",
		15: "Refrigerante"
	}
	while True:
		codigo = int(input("Código do produto ou ZERO para sair: "))

		if codigo == 0:
			break
		elif codigo < 10 or codigo > 15:
			print("Código inválido.")
		else:
			quantidade = int(input("Quantidade: "))
			preco 	   = calcularPreco(codigo, quantidade)
			print(
				f"\nCódigo do Pedido: {codigo}"
				f"\nEspecificação: {especificacao[codigo]}"
				f"\nQuantidade do item: {quantidade}"
				f"\nPreço total: R$ {preco:.2f}\n\n"
			)

def exercicio06():
	valorFrete = 0
	valorEncomenda = float(
		input("Valor da encomenda: ")
	)
	distanciaPercorrida = float(
		input("Informe a distância percorrida: ")
	)
	if distanciaPercorrida > 0 and distanciaPercorrida <= 100:
		valorFrete = valorEncomenda * 0.2
	elif distanciaPercorrida >= 101 and distanciaPercorrida <= 300:
		valorFrete = valorEncomenda * 0.17
	elif distanciaPercorrida >= 301 and distanciaPercorrida <= 500:
		valorFrete = valorEncomenda * 0.15
	elif distanciaPercorrida >= 501 and distanciaPercorrida <= 1000:
		valorFrete = valorEncomenda * 0.13
	elif distanciaPercorrida > 1000:
		valorFrete = valorEncomenda * 0.1

	print(f"O valor do frete é: R$ {valorFrete:.2f}.")

def exercicio07():
	valorReais = int(input("Valor em R$: "))

	notas100  = valorReais // 100
	diferenca = valorReais - ( notas100 * 100 )
	print(f"{notas100} nota(s) de 100 reais.")

	notas50   = diferenca // 50
	diferenca -= ( notas50 * 50 )
	print(f"{notas50} nota(s) de 50 reais.")

	notas10   = diferenca // 10
	diferenca -= ( notas10 * 10 )
	print(f"{notas10} nota(s) de 10 reais.")

	notas5    = diferenca // 5
	diferenca -= ( notas5 * 5 )
	print(f"{notas5} nota(s) de 5 reais.")

	notas1    = diferenca // 1
	print(f"{notas1} nota(s) de 1 real.")

def exercicio08():
	def retangulo():
		base   = float(input("Base: "))
		altura = float(input("Altura: "))
		return base * altura

	def triangulo():
		base   = float(input("Base: "))
		altura = float(input("Altura: "))
		return ( base * altura ) / 2

	def circulo():
		PI   = 3.14
		raio = float(input("Raio: "))
		return PI * raio**2

	opcoes = { 1: retangulo,
			   2: triangulo,
			   3: circulo }
	while True:
		opcao = int(
			input("\nCalcular a área do:"
				  "\n1. Retângulo | 2. Triângulo | 3. Círculo | 0.Sair"
				  "\nOpção? ")
		)

		if opcao == 0:
			break
		elif opcao > 3 or opcao < 0:
			print("Opção inválida.")
		else:
			resultado = opcoes[opcao]()
			print(f"O resultado é: {resultado:.2f}")

def exercicio010():
	dividendo = int(input("Número: "))
	isPrime   = True

	if dividendo > 1:
		for divisor in range(2, dividendo):
			if dividendo % divisor == 0:
				isPrime = False
				break
	else:
		isPrime = False

	print("É primo." if isPrime else "Não é primo.")


exercicio03()
