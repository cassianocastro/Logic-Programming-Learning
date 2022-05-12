import random

# NOTE: Faça um algoritmo que gere um vetor de 10 posições com números inteiros
# NOTE: preenchidos aleatoriamente no intervalo 0 a 50, em seguida, escreva os números
# NOTE: gerados. O Tamanho do vetor deverá ser definido em uma variável constante.

def exercicio01():
    vector = []

    for i in range( 10 ):
        vector.append(random.randint(1, 50))
        print(vector[i])


# NOTE: Faça um algoritmo que gere um vetor de 10 posições com números inteiros preenchidos
# NOTE: aleatoriamente no intervalo 0 a 50, em seguida, escreva os números gerados.
# NOTE: O Tamanho do vetor e o limite de geração dos número aleatórios deverá ser
# NOTE: definido em variável constante.

def exercicio02():
    exercicio01()

# NOTE: Faça um algoritmo que gere um vetor de 10 posições com números inteiros
# NOTE: pares preenchidos aleatoriamente no intervalo 0 a 50, em seguida,
# NOTE: escreva os números gerados. O Tamanho do vetor e o limite de geração dos
# NOTE: número aleatórios deverá ser definido em variável constante.
def getRandomNumber():
    randomNumber = random.randint(1, 50)
    if randomNumber % 2 != 0:
        randomNumber += 1
    return randomNumber

def exercicio03():
    vector = []

    for i in range( 10 ):
        vector.append(getRandomNumber())

    print(vector)

# NOTE: Faça um algoritmo que gere um vetor de 10 posições com números inteiros
# NOTE: pares preenchidos aleatoriamente no intervalo 0 a 50, em seguida, escreva
# NOTE: o vetor gerado, o maior e o menor número existentes no vetor gerado. O Tamanho
# NOTE: do vetor e o limite de geração dos número aleatórios deverá ser definido em
# NOTE: variável constante.

def exercicio04():
    vector = []

    for i in range( 10 ):
        vector.append(getRandomNumber())
    print(
        "{}\
        \nMaior número encontrado: {}\
        \nMenor número encontrado: {}"
        .format(vector, max(vector), min(vector))
    )
# NOTE: Faça um algoritmo que gere um vetor de 10 posições com números inteiros
# NOTE: preenchidos aleatoriamente no intervalo 20 a 50, em seguida, escreva os
# NOTE: números gerados. O Tamanho do vetor os limites inferior e superior de geração
# NOTE: dos número aleatórios deverá ser definido em variável constante.

def exercicio05():
    vector = []

    for i in range( 10 ):
        vector.append(random.randint(20, 50))
        print(vector[i])

# NOTE: Faça um algoritmo que gere um vetor de 10 posições com números inteiros
# NOTE: preenchidos aleatoriamente no intervalo 0 a 50, todavia, o vetor possui restrições.
# NOTE: As posições pares do vetor só admitem números pares e as posições impares do vetor
# NOTE: só admitem números impares. Escrever o vetor gerado. O Tamanho do vetor e o limite
# NOTE: de geração dos número aleatórios deverá ser definido em variável constante.

def exercicio06():
    def even(isEven):
        randomNumber = random.randint(0, 50)
        if isEven:
            if randomNumber % 2 == 0:
                return randomNumber
            else:
                return randomNumber + 1
        else:
            if randomNumber % 2 != 0:
                return randomNumber
            else:
                return randomNumber + 1
    vector = []

    for i in range( 10 ):
        if i % 2 == 0:
            number = even(True)
        else:
            number = even(False)
        vector.append(number)
    print(vector)

# NOTE: Faça um algoritmo que gere um vetor de 10 posições com números inteiros preenchidos
# NOTE: aleatoriamente no intervalo 0 a 50, em seguida, separe os números pares e os números impares do
# NOTE: vetor gerador em dois vetores, um somente com os números pares encontrados no vetor gerado e
# NOTE: outro somente com os números impares encontrados no vetor gerado. Em seguida, escrever o vetor
# NOTE: gerado, o vetor somente de números pares e o vetor somente de números impares. O Tamanho do
# NOTE: vetor e o limite de geração dos número aleatórios deverá ser definido em variável constante.

def exercicio07():
    vectorOdd, vectorEven, vector = [], [], [None] * 10

    for i in range( 10 ):
        vector[i] = random.randint(0, 50)

        if vector[i] % 2 == 0:
            vectorEven.append(vector[i])
        else:
            vectorOdd.append(vector[i])
    print(
        "{}\n"
        "Vetor de Números Pares:\n"
        "{}\n"
        "Vetor de Números Ímpares:\n"
        "{}\n".format(vector, vectorEven, vectorOdd)
    )

# NOTE: Faça um algoritmo que gere um vetor de 5 posições preenchido com números aleatoriamente
# NOTE: gerados. Só serão admitidos no vetor números divisíveis por 3 no intervalo 0 a 100. Escrever o
# NOTE: vetor gerado. O Tamanho do vetor e o limite de geração dos número aleatórios deverá ser definido
# NOTE: em variável constante.

def exercicio08():
    vector = [0] * 5

    for i in range( 5 ):
        randomNumber = random.randint(0, 100)
        while randomNumber % 3 != 0:
            randomNumber = random.randint(0, 100)
        vector[i] = randomNumber
    print(vector)

# NOTE: Faça um algoritmo que gere um vetor de 5 posições com números primos preenchidos
# NOTE: aleatoriamente no intervalo 0 a 100. O Tamanho do vetor e o limite de geração dos números
# NOTE: aleatórios deverá ser definido em variável constante.

def exercicio09():
    def isPrime(dividendo):
        if dividendo > 1:
            for divisor in range(2, dividendo):
                if dividendo % divisor == 0:
                    return False
        else:
            return False
        return True

    vector = [0] * 5

    for i in range( 5 ):
        randomNumber = random.randint(0, 100)

        while not isPrime(randomNumber):
            randomNumber = random.randint(0, 100)
        vector[i] = randomNumber

    print(vector)

# NOTE: Faça um algoritmo que gere um vetor de 10 posições com números inteiros preenchidos
# NOTE: aleatoriamente no intervalo 0 a 50. Os números não podem ser repetidos. Em seguida, escreva os
# NOTE: números gerados. O Tamanho do vetor e os limites inferior e superior de geração dos número
# NOTE: aleatórios deverá ser definido em variável constante.

def exercicio10():
    vector = [0] * 5

    for i in range(0, 5):
        randomNumber = random.randint(0, 5)



    print(vector)

if __name__ == '__main__':
    exercicio09()