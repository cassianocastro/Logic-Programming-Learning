def exercicio1():
    cotacao_dolar, valor_reais = 0.0, 0.0

    cotacao_dolar = input("Cotação em Dólar: ")
    valor_reais   = input("Valor em Reais: ")
    valor_dolar   = float(valor_reais) / float(cotacao_dolar)

    print(f"O valor em dólares é: U$ {valor_dolar:.2f}")

def exercicio2():
    celsius = float(input("Temperatura em Graus Celsius: "))

    print(
		"A temperatura em..."
        f"\nGraus Farenheit..: {(celsius * 1.8) + 32:.2f}"
        f"\nGraus Kelvin.....: {(celsius + 273.15):.2f}"
	)

def exercicio3():
    sexo = '\0'
    valor_compra = float(input("Valor da Compra: "))

    while ( sexo != 'm' and sexo != 'f'):
        sexo = input("Sexo: ")
        sexo.lower()

    if sexo == 'm':
        desconto = valor_compra * 0.1
    else:
        desconto = valor_compra * 0.15

    valor_liquido = valor_compra - desconto

    print(
		f"\nValor Bruto....: R$ {valor_compra:.2f}"
        f"\nValor Líquido..: R$ {valor_liquido:.2f}"
        f"\nDesconto.......: R$ {desconto:.2f}"
	)

def exercicio4():
    valor_liquido: float = 0.0
    valor: float = float(input("Valor: "))

    if valor < 100:
        desconto      = valor * 0.05
        valor_liquido = valor - desconto
        print(
			f"\nValor Bruto....: R$ {valor:.2f}"
            f"\nValor Líquido..: R$ {valor_liquido:.2f}"
            f"\nDesconto.......: R$ {desconto:.2f}"
		)
    else:
        acrescimo     = valor * 0.07
        valor_liquido = valor + acrescimo
        print(
			f"\nValor Bruto....: R$ {valor:.2f}"
            f"\nValor Líquido..: R$ {valor_liquido:.2f}"
            f"\nAcréscimo......: R$ {acrescimo:.2f}"
		)

def exercicio5():
    serie_informada = int(input("Informe o número da série: "))

    if serie_informada >= 1 and serie_informada <= 4:
        print("Turno da Manhã.")
    elif serie_informada >= 5 and serie_informada <= 8:
        print("Turno da Tarde.")
    else:
        print("Dígito inválido.")

def exercicio6():
	primeiro_valor = float(input("Primeiro Valor: "))
	segundo_valor  = float(input("Segundo  Valor: "))
	terceiro_valor = float(input("Terceiro Valor: "))

	soma = primeiro_valor + segundo_valor + terceiro_valor

	if soma > 1000:
		desconto = soma * 0.1
	else:
		desconto = soma * 0.08

	valor_liquido = soma - desconto

	print(
		f"\nValor Bruto....: R$ {soma:.2f}"
		f"\nValor Líquido..: R$ {valor_liquido:.2f}"
		f"\nDesconto.......: R$ {desconto:.2f}"
	)

def exercicio7():
    valor1 = float(input("Primeiro Valor: "))
    valor2 = float(input("Segundo  Valor: "))
    valor3 = float(input("Terceiro Valor: "))
    valor4 = float(input("Quarto   Valor: "))

    soma1 = valor1 + valor2
    soma2 = valor3 + valor4
    total = soma1  + soma2

    if soma1 > soma2:
        desconto      = total * 0.2
        valor_liquido = total - desconto
        print(
			f"\nSoma dos 2 primeiros valores..: R$ {soma1:.2f}"
            f"\nSoma dos 2 últimos valores....: R$ {soma2:.2f}"
            f"\nValor Bruto...................: R$ {total:.2f}"
            f"\nValor Líquido.................: R$ {valor_liquido:.2f}"
            f"\nDesconto......................: R$ {desconto:.2f}"
		)
    else:
        acrescimo     = total * 0.2
        valor_liquido = total + acrescimo
        print(
			f"\nSoma dos 2 primeiros valores..: R$ {soma1:.2f}"
            f"\nSoma dos 2 últimos valores....: R$ {soma2:.2f}"
            f"\nValor Bruto...................: R$ {total:.2f}"
            f"\nValor Líquido.................: R$ {valor_liquido:.2f}"
            f"\nAcréscimo.....................: R$ {acrescimo:.2f}"
		)

def exercicio8():
    maior_numero, vetor = 0, [0, 0, 0, 0, 0]

    for numero in range(0, len(vetor)):
        vetor[numero] = int(input(f"Valor nº {numero}: "))

        if vetor[numero] > maior_numero:
            maior_numero = vetor[numero]

    print(f"O maior número informado foi: {maior_numero}")

def exercicio9():
    vetor = [0, 0, 0, 0, 0]

    for numero in range(0, len(vetor)):
        vetor[numero] = int(input(f"Valor nº {numero + 1}: "))

    maior_numero = vetor[0]
    menor_numero = vetor[0]

    for numero in range(0, len(vetor)):
        if vetor[numero] > maior_numero:
            maior_numero = vetor[numero]
        if vetor[numero] < menor_numero:
            menor_numero = vetor[numero]

    print(
		f"O maior número informado foi: {maior_numero}\n"
        f"O menor número informado foi: {menor_numero}"
	)

def exercicio10():
	lista = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
	contador_Pares   = 0
	contador_Impares = 0

	for indice in range(0, len(lista)):
		lista[indice] = int(input(f"Valor número {indice + 1}: "))

		if lista[indice] % 2 == 0:
			contador_Pares += 1
		else:
			contador_Impares += 1

	print(
		"Quantidade de Números...\n"
		f"Pares.......: {contador_Pares}\n"
		f"Ímpares.....: {contador_Impares}"
	)

if __name__ == "__main__":
	exercicio4()