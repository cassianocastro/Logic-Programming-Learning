import random

# NOTE: Faça um algoritmo que leia um número, e seguida,
# NOTE: informe se o número digitado é divisível por
# NOTE: 3 e por 5.
def exercicio01():
    numero = int(input("Número: "))
    if numero % 3 == 0 and numero % 5 == 0:
        print("É divisível por 3 e 5.")
    else:
        print("Não é divisível por 3 e 5.")

# NOTE: Faça um algoritmo que solicite um numero, em seguida,
# NOTE: mostre quantos e quais são seus
# NOTE: divisores.
def exercicio02():
    contador_divisores, lista_divisores = 0, []

    numero = int(input("Número: "))

    for divisor in range(1, numero + 1):
        if numero % divisor == 0:
            contador_divisores += 1
            lista_divisores.append(divisor)

    for divisor in lista_divisores:
        print(f"{divisor} é divisor de {numero}.")
    print("Total de divisores encontrados:", contador_divisores)

# NOTE: Faça um algoritmo que leia um vetor de 10 posições com
# NOTE: números inteiros, em seguida, escreva
# NOTE: os números na ordem inversa que foram digitados.
def exercicio03():
    lista = [None] * 10
    for i in range(0, len(lista)):
        lista[i] = random.randint(1, 51)
        print(lista[i])

    print("Ordem Inversa:")
    for aleatorio in lista[::-1]:
        print(aleatorio)

    #for aleatorio in reversed(lista):
    #    print(aleatorio)

# NOTE: Faça um algoritmo que leia um vetor de 10 posições com
# NOTE: números inteiros, em seguida, mostre a
# NOTE: soma e a média dos números digitados.
def exercicio04():
    lista, soma = [None] * 10, 0

    for i in range(0, len(lista)):
        lista[i] = random.randint(1, 51)
        soma += lista[i]

    media = soma / len(lista)
    print(
        f"Soma dos valores na lista: {soma}\n"
        f"Média dos valores: {media:.2f}"
    )

# NOTE: Faça um algoritmo que leia um vetor de 10 números. Em seguida,
# NOTE: escreva na tela o resultado de
# NOTE: cada posição do vetor multiplicado por 2.
def exercicio05():
    lista = [None] * 10

    for i in range(0, len(lista)):
        lista[i] = random.randint(1, 51)
        print( lista[i] )

    for numero_aleatorio in lista:
        print(numero_aleatorio, f"multiplicado por 2: {numero_aleatorio * 2}")

# NOTE: Faça um algoritmo que leia um vetor de 10 posições.
# NOTE: Em seguida, informe quais números do
# NOTE: vetor digitado são divisíveis por 3 e 5.

def exercicio06():
    lista = [None] * 10

    for i in range(0, len(lista)):
        lista[i] = random.randint(1, 51)
        print( lista[i] )

    for numero_aleatorio in lista:
        if  numero_aleatorio % 3 == 0 and numero_aleatorio % 5 == 0:
            print(numero_aleatorio,"é divisível.")

# NOTE: Faça um algoritmo que leia um vetor de 10 posições.
# NOTE: Em seguida, informe quais números do
# NOTE: vetor digitado são pares, quais são impares e quais são primo

def exercicio07():
    def isPar(numero):
        return numero % 2 == 0

    def isPrime(dividendo):
        if dividendo > 1:
            for divisor in range(2, dividendo):
                if dividendo % divisor == 0:
                    return False
        else:
            return False
        return True

    lista = [None] * 10

    for i in range(0, len(lista)):
        lista[i] = random.randint(1, 51)
        print( lista[i], end = " " )
    print("\n")
    for numero_aleatorio in lista:
        if isPar(numero_aleatorio):
            #print(f"{numero_aleatorio:3} é par e", end = " ")
            print("%3.2d é par e" % numero_aleatorio, end = " ")
        else:
            #print(f"{numero_aleatorio:3} é ímpar e", end = " ")
            print("%3.2d é ímpar e" % numero_aleatorio, end = " ")

        print("é primo." if isPrime(numero_aleatorio) else "não é primo.")

def exercicio08():
    vector = []

    for index in range( 10 ):
        vector.append(random.randint(1, 51))

    reversedVector = vector.copy()
    reversedVector.reverse()

    print(vector,"\n",reversedVector)

def exercicio09():
    vector1, vector2, vector3 = [], [], []

    for index in range( 5 ):
        vector1.append(random.randint(1, 51))
        vector2.append(random.randint(1, 51))

        vector3.append(vector1[index] + vector2[index])

    print("{}\n{}\n{}".format(vector1, vector2, vector3))

def exercicio010():
    vector, maior = [], 0

    for i in range( 10 ):
        vector.append(random.randint(1, 51))
        if vector[i] > maior:
            maior = vector[i]
    print(
        "{}".format(vector),
        "\nMaior número encontrado: %.2d" % maior
    )
exercicio010()
